// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1416eafc0 AddToLoadedPackages body=213 status=ok
// SIG undefined AddToLoadedPackages(void)

void FAsyncLoadingThread::AddToLoadedPackages(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  BOOL BVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong local_28;
  longlong *local_20;
  
  local_res10 = param_2;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  }
  plVar4 = *(longlong **)(param_1 + 0x78);
  iVar2 = *(int *)(param_1 + 0x80);
  plVar1 = plVar4 + iVar2;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    if (*plVar4 == local_res10) goto LAB_1416eb07a;
  }
  *(int *)(param_1 + 0x80) = iVar2 + 1;
  if (*(int *)(param_1 + 0x84) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x78);
  }
  *(longlong *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x78)) = local_res10;
  local_28 = local_res10 + 0x18;
  local_20 = &local_res10;
  FUN_1416e1690(param_1 + 0x88,local_res8,&local_28,0);
LAB_1416eb07a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  return;
}



// FUNCTION 1416eb0a0 FUN_1416eb0a0 body=841 status=ok
// SIG undefined FUN_1416eb0a0(void)

ulonglong FUN_1416eb0a0(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       undefined4 param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  ulonglong in_RAX;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  int local_48;
  longlong local_40 [3];
  
  if (param_3 == DAT_1468e2358) {
    return in_RAX & 0xffffffffffffff00;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1a);
  local_res18 = param_3;
  local_res20 = param_4;
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  FName::ToString(&local_res20,&local_50);
  puVar2 = (undefined8 *)FName::ToString(&local_res18,local_40);
  lVar11 = 0;
  iVar7 = 0;
  if (local_48 != 0) {
    iVar7 = local_48 + -1;
  }
  if ((*(int *)(puVar2 + 1) != 0) || (iVar5 = 2, iVar7 == -1)) {
    iVar5 = 1;
  }
  local_70 = (longlong *)*puVar2;
  *puVar2 = 0;
  lVar6 = puVar2[1];
  local_68 = (undefined8 *)puVar2[1];
  puVar2[1] = 0;
  if (*(int *)((longlong)puVar2 + 0xc) < iVar5 + (int)lVar6 + iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_70);
  }
  FString::PathAppend(&local_70,local_50,iVar7);
  puVar8 = &DAT_143f3eda8;
  plVar3 = (longlong *)&DAT_143f3eda8;
  if ((int)local_68 != 0) {
    plVar3 = local_70;
  }
  FName::FName(&local_80,plVar3,1);
  if (local_70 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_78 = local_80;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar7 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)local_80 >> 0x20) + (int)local_80) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar7 != -1) {
      do {
        lVar6 = *param_1 + (longlong)iVar7 * 0x28;
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x28) == local_80) {
          if (iVar7 != -1) goto LAB_1416eb243;
          break;
        }
        iVar7 = *(int *)(lVar6 + 0x20);
      } while (iVar7 != -1);
    }
  }
  lVar6 = lVar11;
LAB_1416eb243:
  lVar4 = lVar6 + 8;
  if (lVar6 == 0) {
    lVar4 = lVar11;
  }
  if (lVar4 == 0) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)local_res18 >> 0x20) + (int)local_res18) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          lVar6 = *param_1 + (longlong)iVar7 * 0x28;
          if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x28) == local_res18) {
            if (iVar7 != -1) goto LAB_1416eb2c3;
            break;
          }
          iVar7 = *(int *)(lVar6 + 0x20);
        } while (iVar7 != -1);
      }
    }
    lVar6 = lVar11;
LAB_1416eb2c3:
    local_78 = local_res18;
    lVar4 = lVar6 + 8;
    if (lVar6 == 0) {
      lVar4 = lVar11;
    }
    if (lVar4 != 0) goto LAB_1416eb36a;
    puVar2 = (undefined8 *)FName::ToString(&local_80,local_40);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar2;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x2d2,L"Compiled in export %s not found; it was never registered.",puVar10)
    ;
    if (local_40[0] != 0) {
      FMemory::Free();
    }
    puVar2 = (undefined8 *)FName::ToString(&local_80,local_40);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar8 = (undefined2 *)*puVar2;
    }
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x2d2,
               L"Compiled in export %s not found; it was never registered.",puVar8);
    if (local_40[0] != 0) {
      FMemory::Free();
      uVar9 = 0;
      goto LAB_1416eb3aa;
    }
  }
  else {
LAB_1416eb36a:
    if (*(int *)(lVar4 + 4) != 2) {
      local_58 = param_5;
      local_70 = &local_78;
      local_68 = &local_60;
      local_54 = 0;
      local_60 = param_2;
      FUN_1416e1bc0(param_1 + 10,local_88,&local_70,0);
      uVar9 = 1;
      goto LAB_1416eb3aa;
    }
  }
  uVar9 = 0;
LAB_1416eb3aa:
  if (local_50 != 0) {
    FMemory::Free();
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar9;
}



// FUNCTION 1416eb400 AtomicallyClearFlags body=34 status=ok
// SIG undefined AtomicallyClearFlags(void)

uint UObjectBase::AtomicallyClearFlags(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  do {
    uVar2 = *(uint *)(param_1 + 8);
    LOCK();
    uVar1 = *(uint *)(param_1 + 8);
    bVar3 = uVar2 == uVar1;
    if (bVar3) {
      *(uint *)(param_1 + 8) = ~param_2 & uVar2;
      uVar1 = uVar2;
    }
    UNLOCK();
  } while (!bVar3);
  return uVar1;
}



// FUNCTION 1416eb430 FUN_1416eb430 body=1174 status=ok
// SIG undefined FUN_1416eb430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416eb430(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  uint uStack_b0;
  int iStack_ac;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  longlong *local_88;
  uint uStack_80;
  uint uStack_7c;
  uint *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 *local_38;
  ulonglong local_30;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
  local_98 = (longlong *)(param_2 + 8);
  puStack_78 = (uint *)(param_2 + 0x18);
  uVar17 = 0;
  local_28 = -1;
  local_58 = 0;
  local_50 = 0;
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  local_24 = 0;
  iVar12 = *(int *)(param_2 + 0x30);
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 1;
  local_b8._4_4_ = 0;
  uStack_b0 = 0;
  if (iVar12 != 0) {
    puVar15 = *(uint **)(param_2 + 0x28);
    if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
      puVar15 = puStack_78;
    }
    uVar8 = *puVar15;
    uVar9 = uVar17;
    uVar14 = uVar17;
    while (uVar8 == 0) {
      iVar6 = (int)uVar9;
      uStack_b0 = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)uStack_b0;
      local_c8._0_4_ = iVar6 + 1;
      uVar9 = (ulonglong)(uint)local_c8;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1416eb530;
      uVar8 = puVar15[(longlong)iVar6 + 1];
    }
    local_c8._4_4_ = uVar8 - 1 & uVar8 ^ uVar8;
    iVar6 = 0x1f;
    if (local_c8._4_4_ != 0) {
      for (; local_c8._4_4_ >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (local_c8._4_4_ == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_b8._4_4_ = (uStack_b0 - iVar6) + 0x1f;
    if (iVar12 < local_b8._4_4_) {
LAB_1416eb530:
      local_b8._4_4_ = iVar12;
    }
  }
  auStack_70._4_4_ = local_b8._4_4_;
  auStack_70._0_4_ = 0xffffffff;
  auStack_70._8_4_ = uStack_b0;
  auStack_70._12_4_ = iStack_ac;
  uStack_80 = (uint)local_c8;
  uStack_7c = local_c8._4_4_;
  local_90 = 0;
  local_60._0_4_ = SUB84(local_98,0);
  local_60._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  uStack_b0 = 0xffffffff;
  iStack_ac = local_b8._4_4_;
  uStack_c0 = (uint)local_c8;
  uStack_bc = local_c8._4_4_;
  local_a8._8_4_ = (undefined4)local_60;
  local_a8._0_8_ = auStack_70._8_8_;
  local_a8._12_4_ = local_60._4_4_;
  bVar4 = local_b8._4_4_ < *(int *)(param_2 + 0x30);
  local_c8 = local_98;
  local_88 = local_98;
  local_60 = local_98;
  local_b8 = puStack_78;
  if (bVar4) {
    do {
      lVar1 = *(longlong *)(*local_c8 + 8 + (longlong)iStack_ac * 0x28);
      lVar16 = *local_c8 + (longlong)iStack_ac * 0x28;
      if (*(int *)(param_1 + 0xf8) < *(int *)(lVar1 + 0xa8)) {
        *(int *)(lVar1 + 0xa8) = *(int *)(param_1 + 0xf8);
        lVar1 = *(longlong *)(lVar16 + 8);
        iVar12 = *(int *)(lVar16 + 0x18);
        if (iVar12 != 0) {
          iVar6 = *(int *)(lVar1 + 0xb8);
          if (*(int *)(lVar1 + 0xbc) < iVar6 + iVar12) {
            TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(lVar1 + 0xb0));
            iVar6 = *(int *)(lVar1 + 0xb8);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar1 + 0xb0) + (longlong)iVar6 * 8),
                     *(void **)(lVar16 + 0x10),(longlong)iVar12 << 3);
          *(int *)(lVar1 + 0xb8) = *(int *)(lVar1 + 0xb8) + iVar12;
        }
        iVar12 = local_28;
        uVar2 = *(undefined8 *)(lVar16 + 8);
        if (local_24 == 0) {
          iVar12 = (int)local_50;
          uVar9 = local_50 & 0xffffffff;
          iVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar6);
          if (local_50._4_4_ < iVar6) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,uVar9);
          }
          TBitArray<FDefaultBitArrayAllocator>::Add(local_48,0,1);
        }
        else {
          local_24 = local_24 + -1;
          local_28 = *(int *)(local_58 + 4 + (longlong)local_28 * 8);
          if (local_24 != 0) {
            *(undefined4 *)(local_58 + (longlong)local_28 * 8) = 0xffffffff;
          }
        }
        puVar10 = local_48;
        if (local_38 != (undefined1 *)0x0) {
          puVar10 = local_38;
        }
        iVar6 = iVar12;
        if (iVar12 < 0) {
          iVar6 = iVar12 + 0x1f;
        }
        *(uint *)(puVar10 + (longlong)(iVar6 >> 5) * 4) =
             *(uint *)(puVar10 + (longlong)(iVar6 >> 5) * 4) | 1 << ((byte)iVar12 & 0x1f);
        *(undefined8 *)(local_58 + (longlong)iVar12 * 8) = uVar2;
      }
      uStack_b0 = uStack_b0 & ~uStack_bc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
    } while (iStack_ac < (int)local_b8[6]);
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            (&local_c8,&local_58);
  if (iStack_ac < (int)local_b8[6]) {
    do {
      lVar16 = (longlong)iStack_ac;
      bVar5 = (byte)iStack_ac & 0x1f;
      plVar3 = *(longlong **)(*local_c8 + lVar16 * 8);
      if (*(int *)((longlong)local_c8 + 0x34) != 0) {
        *(int *)(*local_c8 + (longlong)(int)local_c8[6] * 8) = iStack_ac;
      }
      lVar1 = *local_c8;
      *(undefined4 *)(lVar1 + lVar16 * 8) = 0xffffffff;
      if (*(int *)((longlong)local_c8 + 0x34) < 1) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (undefined4)local_c8[6];
      }
      *(undefined4 *)(lVar1 + lVar16 * 8 + 4) = uVar7;
      *(int *)((longlong)local_c8 + 0x34) = *(int *)((longlong)local_c8 + 0x34) + 1;
      *(int *)(local_c8 + 6) = iStack_ac;
      plVar11 = (longlong *)local_c8[4];
      if ((longlong *)local_c8[4] == (longlong *)0x0) {
        plVar11 = local_c8 + 2;
      }
      iVar12 = iStack_ac;
      if (iStack_ac < 0) {
        iVar12 = iStack_ac + 0x1f;
      }
      puVar15 = (uint *)((longlong)plVar11 + (longlong)(iVar12 >> 5) * 4);
      *puVar15 = *puVar15 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      if (((int)plVar3[0x15] == *(int *)(param_1 + 0xf8)) &&
         ((*(uint *)(param_1 + 0x100) & *(uint *)(*plVar3 + 8)) == 0)) {
        uVar8 = *(uint *)(*plVar3 + 0xc);
        uVar9 = uVar17;
        if ((int)uVar8 < (int)DAT_1469e91c4) {
          uVar13 = uVar8 & 0xffff;
          if ((int)uVar8 < 0) {
            uVar8 = uVar8 + 0xffff;
            uVar13 = uVar13 - 0x10000;
          }
          uVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                  (longlong)(int)uVar13 * 0x18;
        }
        if ((*(uint *)(uVar9 + 8) >> 0x1e & 1) == 0) {
          FUN_1416eb430(param_1,plVar3);
        }
      }
      uStack_b0 = uStack_b0 & ~uStack_bc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
    } while (iStack_ac < (int)local_b8[6]);
  }
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + -1;
  uVar17 = local_50 >> 0x20;
  local_50 = local_50 & 0xffffffff00000000;
  if ((int)uVar17 != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_58,0);
  }
  local_28 = 0xffffffff;
  local_24 = 0;
  uVar17 = local_30 >> 0x20;
  local_30 = local_30 & 0xffffffff00000000;
  if ((int)uVar17 != 0) {
    local_30 = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(local_48,0);
  }
  if (local_38 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416eb930 Call body=74 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_b628dbf1ebd70af9fff729c0f4f9f7c2>,void___cdecl(bool,IAsyncReadRequest_*)>
     ::Call(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  uVar2 = 0;
  if (*(int *)(lVar1 + 0x1e0) != 0) {
    plVar3 = *(longlong **)(lVar1 + 0x1d0);
    if (*(longlong **)(lVar1 + 0x1d0) == (longlong *)0x0) {
      plVar3 = (longlong *)(lVar1 + 0x1b0);
    }
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001416eb977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x1a0))(uVar2);
  return;
}



// FUNCTION 1416eba10 CallCompletionCallbacks body=192 status=ok
// SIG undefined CallCompletionCallbacks(void)

void FAsyncPackage::CallCompletionCallbacks(longlong param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0xcb) == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    uVar5 = 0;
  }
  pcVar3 = *(char **)(param_1 + 0x60);
  pcVar4 = pcVar3 + (longlong)*(int *)(param_1 + 0x68) * 0x10;
  for (; pcVar3 != pcVar4; pcVar3 = pcVar3 + 0x10) {
    if ((*pcVar3 == param_2) && (pcVar3[1] == '\0')) {
      plVar2 = *(longlong **)(pcVar3 + 8);
      pcVar3[1] = '\x01';
      if (((int)plVar2[1] != 0) &&
         (((longlong *)*plVar2 != (longlong *)0x0 &&
          (cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x18))(), cVar1 != '\0')))) {
        if ((int)plVar2[1] == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar2 + 0x40))(plVar2,param_1 + 0x18,uVar5,param_3);
      }
    }
  }
  return;
}



// FUNCTION 1416ebad0 FUN_1416ebad0 body=878 status=ok
// SIG undefined FUN_1416ebad0(void)

void FUN_1416ebad0(longlong param_1)

{
  uint *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  BOOL BVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 local_res10 [8];
  int local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  uint local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  if (DAT_1468c21ab != '\0') {
    LowLevelFatalErrorHandler("Unknown",0x1b1f,&DAT_144cf9000);
    FDebug::AssertFailed(&DAT_144cf0ece,"Unknown",0x1b1f);
  }
  *(undefined1 *)(param_1 + 0xcb) = 1;
  FAsyncPackage::CallCompletionCallbacks(param_1,1,2);
  FAsyncPackage::CallCompletionCallbacks(param_1);
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b0));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b0));
  }
  uStack_a4 = 1;
  plVar3 = (longlong *)(param_1 + 0x160);
  local_a8 = 0;
  uVar4 = *(uint *)(param_1 + 0x188);
  puVar1 = (uint *)(param_1 + 0x170);
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar4 != 0) {
    puVar16 = *(uint **)(param_1 + 0x180);
    if (*(uint **)(param_1 + 0x180) == (uint *)0x0) {
      puVar16 = puVar1;
    }
    uVar5 = *puVar16;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar5 == 0) {
      lVar13 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar11 = local_a8 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar11;
      if (bVar6) goto LAB_1416ebc1c;
      uVar5 = puVar16[lVar13 + 1];
    }
    uStack_a4 = -uVar5 & uVar5;
    iVar11 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_94 = (iStack_90 - iVar11) + 0x1f;
    if ((int)uVar4 < (int)uStack_94) {
LAB_1416ebc1c:
      uStack_94 = uVar4;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x188);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  local_98 = -1 << ((byte)uVar5 & 0x1f);
  uVar15 = uVar5 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  puStack_a0 = puVar1;
  uStack_94 = uVar5;
  local_78 = puVar1;
  local_60 = plVar3;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  local_88 = plVar3;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  if (uVar5 != uVar4) {
    puVar16 = *(uint **)(param_1 + 0x180);
    if (*(uint **)(param_1 + 0x180) == (uint *)0x0) {
      puVar16 = puVar1;
    }
    uVar12 = puVar16[(int)uVar5 >> 5] & local_98;
    iVar11 = (int)uVar5 >> 5;
    while (uVar12 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_1416ebce2;
      uVar12 = puVar16[(longlong)iVar11 + 1];
      local_98 = 0xffffffff;
      iVar11 = iVar11 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar11 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_94 = (uVar15 - iVar11) + 0x1f;
    uVar5 = uStack_94;
    if ((int)uVar4 < (int)uStack_94) {
LAB_1416ebce2:
      uStack_94 = uVar4;
      uVar5 = uVar4;
    }
  }
  while (((uStack_6c != uVar5 || (local_78 != puVar1)) || (local_88 != plVar3))) {
    lVar13 = *(longlong *)(*local_88 + (longlong)(int)uStack_6c * 0x10);
    if (lVar13 != 0) {
      UObjectBase::AtomicallyClearFlags(lVar13,0x83400);
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  FUN_1416f10d0(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_141736700(*(longlong *)(param_1 + 0x50) + 0x200);
    }
    if (*(char *)(param_1 + 0xce) != '\0') {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x58) + 8);
      *puVar1 = *puVar1 & 0xfff7ffff;
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x58) + 0x28);
      *pbVar2 = *pbVar2 & 0xfd;
      uVar8 = UPackage::GetPrivateStaticClass();
      uVar9 = GetTransientPackage();
      uVar8 = FUN_141791c20(local_res10,uVar9,uVar8,0);
      puVar10 = (undefined8 *)FName::ToString(uVar8,&local_a8);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar10;
      }
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x138))
                (*(longlong **)(param_1 + 0x58),puVar14,0,0x35);
      if (CONCAT44(uStack_a4,local_a8) != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_141736700(*(longlong *)(param_1 + 0x50) + 0x200);
      *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 800) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 1416ebe40 FUN_1416ebe40 body=199 status=ok
// SIG undefined FUN_1416ebe40(void)

void FUN_1416ebe40(void)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_1416f86a0();
  LOCK();
  bVar2 = *(int *)(lVar1 + 0x74) == 0;
  if (bVar2) {
    *(int *)(lVar1 + 0x74) = 0;
  }
  UNLOCK();
  if (!bVar2) {
    LowLevelFatalErrorHandler
              ("Unknown",0x1bab,L"Cannot Cancel Async Loading while async loading is suspended.");
    FDebug::AssertFailed
              (&DAT_144cf0f1f,"Unknown",0x1bab,
               L"Cannot Cancel Async Loading while async loading is suspended.");
  }
  if (DAT_1468c21ab == '\0') {
    lVar1 = FUN_1416f86a0();
    LOCK();
    *(undefined4 *)(lVar1 + 0x70) = 1;
    UNLOCK();
    if (DAT_1469e689c == '\0') {
      FUN_1416f7d70(0xffffffff);
      LOCK();
      *(undefined4 *)(lVar1 + 0x70) = 0;
      UNLOCK();
    }
    else {
      (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x20))(*(longlong **)(lVar1 + 0x20),0xffffffff,0)
      ;
    }
    FUN_14172d470(0,0);
    return;
  }
  FUN_1416f7d70(0xffffffff);
  FUN_14172d470(0,0);
  return;
}



// FUNCTION 1416ebf10 FUN_1416ebf10 body=1116 status=ok
// SIG undefined FUN_1416ebf10(void)

void FUN_1416ebf10(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  DWORD DVar6;
  BOOL BVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  
  if ((((DAT_1468c21ab != '\0') && (cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 == '\0')) &&
      (DAT_1468c21ae != '\0')) && (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    LowLevelFatalErrorHandler
              ("Unknown",0x191,
               L"CancelAsyncLoadingInternal is not thread safe! This must be fixed before being enabled for EDL"
              );
    FDebug::AssertFailed
              (&DAT_144cf0fbc,"Unknown",0x191,
               L"CancelAsyncLoadingInternal is not thread safe! This must be fixed before being enabled for EDL"
              );
  }
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  uVar10 = 0;
  plVar13 = *(longlong **)(param_1 + 0x38);
  uVar14 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
  if (plVar13 + *(int *)(param_1 + 0x40) < plVar13) {
    uVar14 = uVar10;
  }
  if (uVar14 != 0) {
    do {
      lVar8 = *plVar13;
      plVar9 = *(longlong **)(lVar8 + 0x28);
      if (((plVar9 != (longlong *)0x0) && ((int)plVar9[1] != 0)) &&
         (((longlong *)*plVar9 != (longlong *)0x0 &&
          (cVar5 = (**(code **)(*(longlong *)*plVar9 + 0x18))(), cVar5 != '\0')))) {
        if ((int)plVar9[1] == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)*plVar9;
        }
        (**(code **)(*plVar9 + 0x40))(plVar9,lVar8 + 8,0,2);
      }
      lVar3 = *(longlong *)(lVar8 + 0x28);
      if (lVar3 != 0) {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3);
        FMemory::operator_delete(lVar3,0x10);
      }
      FMemory::operator_delete(lVar8,0x40);
      plVar13 = plVar13 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar14);
  }
  uVar14 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x44)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  plVar13 = *(longlong **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  iVar1 = *(int *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = 0;
  plVar9 = *(longlong **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  uVar10 = (longlong)iVar1 & 0x1fffffffffffffff;
  if (plVar13 + iVar1 < plVar13) {
    uVar10 = uVar14;
  }
  plVar12 = plVar13;
  if (uVar10 != 0) {
    do {
      puVar4 = (undefined8 *)*plVar12;
      FUN_1416ebad0();
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      plVar12 = plVar12 + 1;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar10);
  }
  uVar10 = 0;
  uVar14 = (longlong)iVar2 & 0x1fffffffffffffff;
  if (plVar9 + iVar2 < plVar9) {
    uVar14 = uVar10;
  }
  plVar12 = plVar9;
  if (uVar14 != 0) {
    do {
      puVar4 = (undefined8 *)*plVar12;
      FUN_1416ebad0(puVar4);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      plVar12 = plVar12 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar14);
  }
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x1a8);
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  }
  uVar10 = 0;
  plVar13 = *(longlong **)(param_1 + 0x78);
  uVar14 = (longlong)*(int *)(param_1 + 0x80) & 0x1fffffffffffffff;
  if (plVar13 + *(int *)(param_1 + 0x80) < plVar13) {
    uVar14 = uVar10;
  }
  uVar11 = uVar10;
  if (uVar14 != 0) {
    do {
      puVar4 = (undefined8 *)*plVar13;
      FUN_1416ebad0(puVar4);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      plVar13 = plVar13 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar14);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((*(int *)(param_1 + 0x84) < 0) && (*(int *)(param_1 + 0x84) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x78,0);
  }
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x88);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x170));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x170));
  }
  plVar13 = *(longlong **)(param_1 + 0x100);
  uVar14 = (longlong)*(int *)(param_1 + 0x108) & 0x1fffffffffffffff;
  if (plVar13 + *(int *)(param_1 + 0x108) < plVar13) {
    uVar14 = uVar10;
  }
  if (uVar14 != 0) {
    do {
      puVar4 = (undefined8 *)*plVar13;
      FUN_1416ebad0(puVar4);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      plVar13 = plVar13 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar14);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if ((*(int *)(param_1 + 0x10c) < 0) && (*(int *)(param_1 + 0x10c) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x100,0);
  }
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x120);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x170));
  LOCK();
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  UNLOCK();
  puStack_30 = local_res8;
  local_res8[0] = 0;
  local_38 = 0x406ddef0;
  uStack_34 = 1;
  lVar8 = FUN_1415d8310(&local_38,&DAT_14622e6dc);
  *(undefined4 *)(lVar8 + 0x40) = 0;
  if (*(int *)(lVar8 + 0x44) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar8 + 0x38,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416ec368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  return;
}



// FUNCTION 1416ec370 FUN_1416ec370 body=83 status=ok
// SIG undefined FUN_1416ec370(void)

void FUN_1416ec370(void)

{
  if (DAT_1464b4638 != DAT_1464b4664) {
    LowLevelFatalErrorHandler
              ("Unknown",0x5ab,
               L"No outstanding IO, no nodes in the queue, yet we still have \'PackagesWithNodes\' in the graph."
              );
    FDebug::AssertFailed
              (&DAT_144cf0b3f,"Unknown",0x5ab,
               L"No outstanding IO, no nodes in the queue, yet we still have \'PackagesWithNodes\' in the graph."
              );
    return;
  }
  return;
}



// FUNCTION 1416ec3d0 CheckForFileOpenLogCommandLine body=70 status=ok
// SIG undefined CheckForFileOpenLogCommandLine(void)

void CheckForFileOpenLogCommandLine(void)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar1,L"RandomizeLoadOrder");
  if (cVar2 != '\0') {
    DAT_1469e6898 = 1;
  }
  uVar1 = FCommandLine::Get();
  FParse::Param(uVar1,L"FileOpenLog");
  return;
}



// FUNCTION 1416ec420 FUN_1416ec420 body=251 status=ok
// SIG undefined FUN_1416ec420(void)

void FUN_1416ec420(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if ((longlong)((DAT_1464b4420 * 0x900000) / 10) < *(longlong *)(param_1 + 0x148)) {
    if ((longlong)(DAT_1464b4420 << 0x14) < *(longlong *)(param_1 + 0x148)) {
      if ((*(char *)(param_1 + 0x151) == '\0') && (*(char *)(param_1 + 0x150) != '\0')) {
        uVar1 = FPlatformFileManager::Get();
        plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
        (**(code **)(*plVar2 + 0x110))(plVar2,0);
        *(undefined1 *)(param_1 + 0x150) = 0;
      }
      *(undefined1 *)(param_1 + 0x151) = 1;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x151) != '\0') && (*(char *)(param_1 + 0x150) == '\0')) {
      uVar1 = FPlatformFileManager::Get();
      plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
      (**(code **)(*plVar2 + 0x110))(plVar2,1);
      param_2 = '\0';
      *(undefined1 *)(param_1 + 0x150) = 1;
    }
    *(undefined1 *)(param_1 + 0x151) = 0;
  }
  if ((*(char *)(param_1 + 0x150) != '\0') && (param_2 != '\0')) {
    uVar1 = FPlatformFileManager::Get();
    plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
    (**(code **)(*plVar2 + 0x110))(plVar2,1);
  }
  return;
}



// FUNCTION 1416ec520 FUN_1416ec520 body=29 status=ok
// SIG undefined FUN_1416ec520(void)

byte FUN_1416ec520(longlong param_1)

{
  FUN_1416f8100();
  return (byte)~*(byte *)(param_1 + 0x28) >> 7;
}



// FUNCTION 1416ec540 FUN_1416ec540 body=91 status=ok
// SIG undefined FUN_1416ec540(void)

void FUN_1416ec540(longlong param_1)

{
  longlong *plVar1;
  LARGE_INTEGER local_res8 [4];
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    QueryPerformanceCounter(local_res8);
    plVar1 = *(longlong **)(param_1 + 0xc0);
    if (*(char *)((longlong)plVar1 + 0x71) == '\0') {
      (**(code **)(*plVar1 + 8))(plVar1,0);
      plVar1 = *(longlong **)(param_1 + 0xc0);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)*plVar1)(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 1416ec5a0 CompleteRead body=251 status=ok
// SIG undefined CompleteRead(void)

void FArchiveAsync2::CompleteRead(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FlushPrecacheBlock(param_1);
  }
  if (-1 < *(char *)(param_1 + 0x28)) {
    lVar1 = *(longlong *)(param_1 + 0xb8);
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (((*(char *)(lVar1 + 0x73) == '\0') || (lVar2 == 0)) &&
       (*(undefined8 *)(lVar1 + 0x10) = 0, lVar2 != 0)) {
      *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xf0);
      *(longlong *)(param_1 + 200) = lVar2;
      *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xf0) + *(longlong *)(param_1 + 0xf8);
      if (*(int *)(param_1 + 0x110) != 4) {
        FUN_1416ec540(param_1);
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))
                          (*(longlong **)(param_1 + 0x90),
                           (*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0x108)) + -1,1,0
                           ,0,0);
        *(undefined8 *)(param_1 + 0xc0) = uVar4;
      }
    }
    else {
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return;
}



// FUNCTION 1416ec6a0 FUN_1416ec6a0 body=555 status=ok
// SIG undefined FUN_1416ec6a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416ec6a0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_e0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (((*(char *)(param_1 + 0x1e0) == '\x06') && (*(char *)(param_1 + 0x4a0) == '\0')) &&
     (((*(int *)(param_1 + 0x1f0) != 0 ||
       (((*(int *)(param_1 + 0x200) != 0 || (*(int *)(param_1 + 0x210) != 0)) ||
        (*(int *)(param_1 + 0x220) != 0)))) ||
      ((*(int *)(param_1 + 0x230) != 0 || (*(int *)(param_1 + 0x240) != 0)))))) {
    *(undefined1 *)(param_1 + 0x4a0) = 1;
    if (*(int *)(param_1 + 0x240) == 0) {
      uVar3 = 0xffffffff;
      if (*(int *)(param_1 + 0x220) != 0) {
        uVar3 = 0xffffffff;
        if (*(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x27c) < 2) {
          uVar3 = 0xfffffffd;
        }
      }
    }
    else {
      uVar3 = 0xfffffffe;
    }
    local_100 = *(undefined8 *)(param_1 + 0x18);
    local_84 = *(undefined4 *)(param_1 + 0x1e4);
    lVar1 = *(longlong *)(param_1 + 0x1d8);
    uStack_f8 = local_84;
    if (DAT_1469e6898 != 0) {
      local_84 = FUN_1416f9b90(0x7fffffff);
    }
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    local_e0 = lVar1;
    puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f4d0b0;
      puVar2[1] = local_100;
      puVar2[2] = CONCAT44(uStack_f4,uStack_f8);
      puVar2[3] = local_e0;
    }
    local_7c = *(int *)(lVar1 + 0x2c0) + 1;
    local_d8[0] = &LAB_1416eb920;
    local_88 = *(undefined4 *)(param_1 + 0x44);
    *(int *)(lVar1 + 0x2c0) = local_7c;
    local_80 = uVar3;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,local_d8);
    TArray<FAsyncLoadEvent,FDefaultAllocator>::HeapPush(lVar1 + 0x2c8,&local_88,local_108);
    if (local_38 != 0) {
      plVar4 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar4 = local_48;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      plVar4 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar4 = local_a8;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1416ec8d0 FUN_1416ec8d0 body=421 status=ok
// SIG undefined FUN_1416ec8d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416ec8d0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_e0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if ((*(char *)(param_1 + 0x4a1) == '\0') &&
     (*(int *)(param_1 + 0x3f0) == *(int *)(param_1 + 0x41c))) {
    local_100 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x1d8);
    local_84 = *(undefined4 *)(param_1 + 0x1e4);
    *(undefined1 *)(param_1 + 0x4a1) = 1;
    uStack_f8 = local_84;
    if (DAT_1469e6898 != 0) {
      local_84 = FUN_1416f9b90(0x7fffffff);
    }
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    local_e0 = lVar1;
    puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f4d0b0;
      puVar2[1] = local_100;
      puVar2[2] = CONCAT44(uStack_f4,uStack_f8);
      puVar2[3] = local_e0;
    }
    local_7c = *(int *)(lVar1 + 0x2c0) + 1;
    local_d8[0] = &LAB_1416eb9e0;
    local_88 = *(undefined4 *)(param_1 + 0x44);
    *(int *)(lVar1 + 0x2c0) = local_7c;
    local_80 = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,local_d8);
    TArray<FAsyncLoadEvent,FDefaultAllocator>::HeapPush(lVar1 + 0x2c8,&local_88,local_108);
    if (local_38 != 0) {
      plVar3 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar3 = local_48;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      plVar3 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar3 = local_a8;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1416eca80 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
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



// FUNCTION 1416ecb30 ConditionalUpdateCache body=177 status=ok
// SIG undefined ConditionalUpdateCache(void)

void FPackageLocalizationCache::ConditionalUpdateCache(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  longlong lVar2;
  longlong lVar3;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar2 = (longlong)*(int *)(param_1 + 0x48) * 0x20 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x20) {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(lVar3 + 0x10);
    BVar1 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar1 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    FUN_1416ecbf0(lpCriticalSection);
    LeaveCriticalSection(lpCriticalSection);
  }
  FUN_1416ecf30(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001416ecbda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1416ecbf0 FUN_1416ecbf0 body=827 status=ok
// SIG undefined FUN_1416ecbf0(void)

void FUN_1416ecbf0(longlong param_1)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  LARGE_INTEGER local_res10;
  int local_res18 [2];
  undefined8 *local_res20;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  int local_4c;
  
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    QueryPerformanceCounter(&local_res10);
    puVar15 = *(undefined8 **)(param_1 + 0x40);
    uVar11 = (ulonglong)*(int *)(param_1 + 0x48);
    puVar6 = puVar15 + uVar11 * 2;
    if (puVar15 != puVar6) {
      do {
        plVar12 = (longlong *)(param_1 + 0x50);
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::FindId(plVar12,&local_res10,puVar15);
        if ((local_res10.s.LowPart == 0xffffffff) ||
           (lVar17 = *plVar12 + (longlong)(int)local_res10.s.LowPart * 0x28, lVar17 == 0)) {
          local_res20 = puVar15;
          FUN_14165ef70(plVar12,local_res18,&local_res20,0);
          lVar17 = *plVar12 + (longlong)local_res18[0] * 0x28;
        }
        puVar18 = *(undefined8 **)(param_1 + 0x30);
        puVar16 = puVar18 + (longlong)*(int *)(param_1 + 0x38) * 2;
        for (; puVar18 != puVar16; puVar18 = puVar18 + 2) {
          iVar5 = *(int *)(puVar15 + 1);
          pvVar1 = (void *)*puVar15;
          local_60._4_4_ = (int)((ulonglong)local_60 >> 0x20);
          local_68 = (void *)0x0;
          local_60._0_4_ = iVar5;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    (&local_68,(6 - (uint)(iVar5 != 0)) + iVar5,0);
          _guard_xfg_dispatch_icall_nop(local_68,pvVar1,(longlong)iVar5 * 2);
          FString::PathAppend(&local_68,L"L10N",4);
          iVar2 = local_60._4_4_;
          iVar5 = *(int *)(puVar18 + 1) + -1;
          if (*(int *)(puVar18 + 1) == 0) {
            iVar5 = 0;
          }
          if (((int)local_60 != 0) || (iVar7 = 2, iVar5 == -1)) {
            iVar7 = 1;
          }
          local_50 = (int)local_60;
          iVar7 = (int)local_60 + iVar7;
          local_58 = local_68;
          local_68 = (void *)0x0;
          local_4c = local_60._4_4_;
          local_60 = 0;
          if (iVar2 < iVar7 + iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
          }
          FString::PathAppend(&local_58,*puVar18);
          if (local_68 != (void *)0x0) {
            FMemory::Free();
          }
          puVar9 = *(undefined8 **)(lVar17 + 0x10);
          iVar5 = *(int *)(lVar17 + 0x18);
          puVar13 = puVar9 + (longlong)iVar5 * 2;
          if (puVar9 != puVar13) {
            do {
              if (*(int *)(puVar9 + 1) == 0) {
                puVar8 = &DAT_143f3eda8;
              }
              else {
                puVar8 = (undefined2 *)*puVar9;
              }
              iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8);
              if (iVar5 == 0) goto LAB_1416ece98;
              puVar9 = puVar9 + 2;
            } while (puVar9 != puVar13);
            iVar5 = *(int *)(lVar17 + 0x18);
          }
          *(int *)(lVar17 + 0x18) = iVar5 + 1;
          if (*(int *)(lVar17 + 0x1c) < iVar5 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar17 + 0x10,iVar5);
          }
          pvVar1 = local_58;
          puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar17 + 0x10));
          *puVar9 = 0;
          lVar14 = (longlong)local_50;
          *(int *)(puVar9 + 1) = local_50;
          if (local_50 == 0) {
            *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,local_50,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar1,lVar14 * 2);
          }
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))();
LAB_1416ece98:
          if (local_58 != (void *)0x0) {
            FMemory::Free();
          }
        }
        puVar15 = puVar15 + 2;
      } while (puVar15 != puVar6);
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x48);
    }
    plVar12 = *(longlong **)(param_1 + 0x40);
    uVar10 = (uint)uVar11;
    while (uVar10 != 0) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
      uVar10 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar10;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo((undefined8 *)(param_1 + 0x40),0);
    }
  }
  return;
}



// FUNCTION 1416ecf30 FUN_1416ecf30 body=169 status=ok
// SIG undefined FUN_1416ecf30(void)

void FUN_1416ecf30(longlong *param_1)

{
  char cVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (((char)param_1[0x16] != '\0') &&
     (((cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar2 = GetCurrentThreadId(), DVar2 == DAT_1468c21c0)))) {
    TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
    ::Reset(param_1 + 0xc);
    puVar3 = (undefined8 *)param_1[10];
    puVar4 = puVar3 + (longlong)(int)param_1[0xb] * 2;
    if (puVar3 != puVar4) {
      puVar5 = puVar3 + 1;
      do {
        (**(code **)(*param_1 + 0x28))(param_1,*puVar5,*puVar3);
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (puVar3 != puVar4);
    }
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  return;
}



// FUNCTION 1416ecfe0 FUN_1416ecfe0 body=1978 status=ok
// SIG undefined FUN_1416ecfe0(void)

undefined8 FUN_1416ecfe0(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  code *pcVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int *piVar13;
  longlong *plVar14;
  uint uVar15;
  int *piVar16;
  code *pcVar17;
  ulonglong uVar18;
  code *pcVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  uint *puVar23;
  undefined8 *puVar24;
  int iVar25;
  ulonglong uVar26;
  uint uVar27;
  bool bVar28;
  longlong local_res10;
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e6f68) && (_Init_thread_header(&DAT_1469e6f68), DAT_1469e6f68 == -1))
  {
    `FEDLBootNotificationManager::ConstructWaitingBootObjects'::`2'::FFixedBootOrder::
    FFixedBootOrder(&DAT_1469e6f58);
    atexit((_func_5014 *)&LAB_143e7c0e0);
    _Init_thread_footer(&DAT_1469e6f68);
  }
  piVar13 = (int *)0x0;
  while (DAT_1469e6f60 != 0) {
    iVar5 = DAT_1469e6f60 + -1;
    local_res10 = *(longlong *)(DAT_1469e6f58 + (longlong)iVar5 * 8);
    iVar3 = (DAT_1469e6f60 - iVar5) + -1;
    if (iVar3 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(DAT_1469e6f58 + (longlong)iVar5 * 8),
                 (void *)(DAT_1469e6f58 + (longlong)DAT_1469e6f60 * 8),(longlong)iVar3 << 3);
    }
    DAT_1469e6f60 = DAT_1469e6f60 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_1469e6f58);
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
    }
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar10 +
                      ((longlong)((int)((ulonglong)local_res10 >> 0x20) + (int)local_res10) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          piVar16 = (int *)(*param_1 + (longlong)iVar5 * 0x28);
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x28) == local_res10) {
            if (iVar5 != -1) goto LAB_1416ed143;
            break;
          }
          iVar5 = piVar16[8];
        } while (iVar5 != -1);
      }
    }
    piVar16 = piVar13;
LAB_1416ed143:
    piVar6 = piVar16 + 2;
    if (piVar16 == (int *)0x0) {
      piVar6 = piVar13;
    }
    if (piVar6 == (int *)0x0) {
      puVar7 = (undefined8 *)FName::ToString(&local_res10,local_88);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar7;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x378,L"%s was listed as a fixed load order but was not found,",puVar8);
      if (local_88[0] != 0) {
        FMemory::Free();
      }
      puVar7 = (undefined8 *)FName::ToString(&local_res10,&local_78);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar7;
      }
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x378,
                 L"%s was listed as a fixed load order but was not found,",puVar8);
      if (CONCAT44(local_78._4_4_,(uint)local_78) != 0) {
        FMemory::Free();
      }
    }
    else {
      pcVar19 = *(code **)(piVar6 + 2);
      if (pcVar19 != (code *)0x0) {
        bVar28 = *piVar6 == 1;
        piVar6[2] = 0;
        piVar6[3] = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
        goto LAB_1416ed4bc;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  }
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  }
  local_78._4_4_ = 1;
  uVar2 = *(uint *)(param_1 + 0xf);
  puVar1 = (uint *)(param_1 + 0xc);
  local_78._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (uVar2 != 0) {
    puVar23 = (uint *)param_1[0xe];
    if ((uint *)param_1[0xe] == (uint *)0x0) {
      puVar23 = puVar1;
    }
    uVar27 = *puVar23;
    piVar16 = piVar13;
    while (uVar27 == 0) {
      iVar5 = (int)piVar13;
      uStack_60 = (int)piVar16 + 0x20;
      piVar16 = (int *)(ulonglong)uStack_60;
      local_78._0_4_ = iVar5 + 1;
      piVar13 = (int *)(ulonglong)(uint)local_78;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1416ed306;
      uVar27 = puVar23[(longlong)iVar5 + 1];
    }
    local_78._4_4_ = -uVar27 & uVar27;
    iVar5 = 0x1f;
    if (local_78._4_4_ != 0) {
      for (; local_78._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_78._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_68._4_4_ = (uStack_60 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)local_68._4_4_) {
LAB_1416ed306:
      local_68._4_4_ = uVar2;
    }
  }
  local_50 = param_1 + 10;
  uVar27 = *(uint *)(param_1 + 0xf);
  uStack_48 = CONCAT44(local_78._4_4_,(uint)local_78);
  uStack_38 = CONCAT44(local_68._4_4_,0xffffffff);
  local_58 = CONCAT44(uStack_5c,uStack_60);
  uVar22 = uVar27 & 0xffffffe0;
  uStack_70 = CONCAT44(local_78._4_4_,(uint)local_78);
  uStack_60 = 0xffffffff;
  uStack_5c = local_68._4_4_;
  if (uVar27 != uVar2) {
    puVar23 = (uint *)param_1[0xe];
    if ((uint *)param_1[0xe] == (uint *)0x0) {
      puVar23 = puVar1;
    }
    uVar15 = puVar23[(int)uVar27 >> 5] & -1 << ((byte)uVar27 & 0x1f);
    iVar5 = (int)uVar27 >> 5;
    while (uVar15 == 0) {
      uVar22 = uVar22 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1416ed3c9;
      uVar15 = puVar23[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar15 = -uVar15 & uVar15;
    iVar5 = 0x1f;
    if (uVar15 != 0) {
      for (; uVar15 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar15 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uVar27 = (uVar22 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uVar27) {
LAB_1416ed3c9:
      uVar27 = uVar2;
    }
  }
  pcVar19 = (code *)0x0;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  local_78 = local_50;
  local_68 = puVar1;
  do {
    if (((uStack_5c == uVar27) && (local_68 == puVar1)) &&
       (pcVar17 = pcVar19, local_78 == param_1 + 10)) goto LAB_1416ed4a6;
    lVar20 = *(longlong *)((longlong)(int)uStack_5c * 0x20 + *local_78);
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar10 +
                      ((longlong)((int)((ulonglong)lVar20 >> 0x20) + (int)lVar20) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          pcVar17 = (code *)(*param_1 + (longlong)iVar5 * 0x28);
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x28) == lVar20) {
            if (iVar5 != -1) goto LAB_1416ed463;
            break;
          }
          iVar5 = *(int *)(pcVar17 + 0x20);
        } while (iVar5 != -1);
      }
    }
    pcVar17 = pcVar19;
LAB_1416ed463:
    pcVar9 = pcVar17 + 8;
    if (pcVar17 == (code *)0x0) {
      pcVar9 = pcVar19;
    }
    if ((pcVar9 != (code *)0x0) && (pcVar17 = *(code **)(pcVar9 + 8), pcVar17 != (code *)0x0))
    break;
    uStack_60 = uStack_60 & ~uStack_70._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
  } while( true );
  *(undefined8 *)(pcVar9 + 8) = 0;
  pcVar19 = pcVar17;
  pcVar17 = (code *)(ulonglong)(*(int *)pcVar9 == 1);
LAB_1416ed4a6:
  bVar28 = SUB81(pcVar17,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  if (pcVar19 == (code *)0x0) {
    if ((int)param_1[0x19] == 0) {
      return 0;
    }
    puVar7 = (undefined8 *)param_1[0x18];
    lVar20 = (longlong)(int)param_1[0x19];
    puVar24 = puVar7;
joined_r0x0001416ed5bb:
    local_res10 = lVar20;
    if ((puVar24 != puVar7 + lVar20) && (plVar10 = (longlong *)*puVar24, plVar10 != (longlong *)0x0)
       ) {
      plVar14 = plVar10;
      do {
        for (puVar12 = (undefined8 *)param_1[0x16];
            puVar12 != (undefined8 *)param_1[0x16] + (int)param_1[0x17]; puVar12 = puVar12 + 1) {
          if ((longlong *)*puVar12 == plVar14) {
            puVar24 = puVar24 + 1;
            goto joined_r0x0001416ed5bb;
          }
        }
        plVar14 = (longlong *)plVar14[6];
      } while (plVar14 != (longlong *)0x0);
      if (plVar10 != (longlong *)0x0) {
        if ((int)param_1[0x19] != 0) {
          uVar18 = 0;
          bVar28 = (longlong *)*puVar7 != plVar10;
          uVar21 = uVar18;
          uVar26 = uVar18;
          do {
            iVar5 = (int)uVar21;
            uVar18 = uVar18 + 1;
            uVar21 = (ulonglong)(iVar5 + 1);
            if ((longlong)uVar18 < lVar20) {
              puVar7 = (undefined8 *)(param_1[0x18] + uVar18 * 8);
              do {
                if (bVar28 != ((longlong *)*puVar7 != plVar10)) break;
                uVar21 = (ulonglong)((int)uVar21 + 1);
                uVar18 = uVar18 + 1;
                puVar7 = puVar7 + 1;
              } while ((longlong)uVar18 < lVar20);
            }
            iVar3 = (int)uVar21 - iVar5;
            if (bVar28 != false) {
              iVar25 = (int)uVar26;
              if (iVar25 != iVar5) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(param_1[0x18] + (longlong)iVar25 * 8),
                           (void *)(param_1[0x18] + (longlong)iVar5 * 8),(longlong)iVar3 << 3);
                lVar20 = local_res10;
              }
              uVar26 = (ulonglong)(uint)(iVar25 + iVar3);
            }
            bVar28 = (bool)(bVar28 ^ 1);
          } while ((longlong)uVar18 < lVar20);
          *(int *)(param_1 + 0x19) = (int)uVar26;
        }
        iVar5 = (int)param_1[0x17];
        *(int *)(param_1 + 0x17) = iVar5 + 1;
        if (*(int *)((longlong)param_1 + 0xbc) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x16,iVar5);
        }
        *(longlong **)(param_1[0x16] + (longlong)iVar5 * 8) = plVar10;
        if (plVar10[0x1f] != 0) goto LAB_1416ed6f0;
        lVar20 = *plVar10;
        goto LAB_1416ed6ea;
      }
    }
    FUN_1416b1760(0x3a83126f);
  }
  else {
LAB_1416ed4bc:
    plVar10 = (longlong *)(*pcVar19)();
    UObjectForceRegistration(plVar10);
    if (bVar28 != false) {
      if (plVar10 != (longlong *)0x0) {
        plVar14 = plVar10;
        do {
          for (plVar11 = (longlong *)param_1[0x16];
              plVar11 != (longlong *)param_1[0x16] + (int)param_1[0x17]; plVar11 = plVar11 + 1) {
            if ((longlong *)*plVar11 == plVar14) {
              iVar5 = (int)param_1[0x19];
              *(int *)(param_1 + 0x19) = iVar5 + 1;
              if (*(int *)((longlong)param_1 + 0xcc) < iVar5 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_1 + 0x18,iVar5);
              }
              *(longlong **)(param_1[0x18] + (longlong)iVar5 * 8) = plVar10;
              return 1;
            }
          }
          plVar14 = (longlong *)plVar14[6];
        } while (plVar14 != (longlong *)0x0);
      }
      iVar5 = (int)param_1[0x17];
      *(int *)(param_1 + 0x17) = iVar5 + 1;
      if (*(int *)((longlong)param_1 + 0xbc) < iVar5 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x16,iVar5);
      }
      *(longlong **)(param_1[0x16] + (longlong)iVar5 * 8) = plVar10;
      if (plVar10[0x1f] == 0) {
        lVar20 = *plVar10;
LAB_1416ed6ea:
        (**(code **)(lVar20 + 0x368))(plVar10);
      }
LAB_1416ed6f0:
      *(int *)(param_1 + 0x17) = (int)param_1[0x17] + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x16);
      return 1;
    }
  }
  return 1;
}



// FUNCTION 1416ed7a0 ContainsRequestID body=194 status=ok
// SIG undefined ContainsRequestID(void)

bool FAsyncLoadingThread::ContainsRequestID(longlong param_1,int param_2)

{
  BOOL BVar1;
  longlong lVar2;
  int iVar3;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x288));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x288));
  }
  if (*(int *)(param_1 + 0x240) != *(int *)(param_1 + 0x26c)) {
    lVar2 = *(longlong *)(param_1 + 0x278);
    if (*(longlong *)(param_1 + 0x278) == 0) {
      lVar2 = param_1 + 0x270;
    }
    iVar3 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x280) - 1U & (longlong)param_2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar3 * 0xc) == param_2)
        goto LAB_1416ed83a;
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x238) + 4 + (longlong)iVar3 * 0xc);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1416ed83a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x288));
  return iVar3 != -1;
}



// FUNCTION 1416ed870 FUN_1416ed870 body=328 status=ok
// SIG undefined FUN_1416ed870(void)

undefined8 * FUN_1416ed870(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = operator_new(0x70);
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_1416e5a10(lVar3,param_2,param_3);
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



// FUNCTION 1416ed9c0 FUN_1416ed9c0 body=998 status=ok
// SIG undefined FUN_1416ed9c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1416ed9c0(longlong param_1,char param_2,undefined8 param_3,float param_4,undefined8 param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  BOOL BVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  double dVar16;
  int local_84;
  LARGE_INTEGER local_80;
  longlong *local_78;
  int local_70;
  int local_6c;
  
  bVar2 = false;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
    lVar8 = FUN_1416f86a0();
    bVar2 = true;
    *(int *)(lVar8 + 0x2d8) = *(int *)(lVar8 + 0x2d8) + 1;
  }
  local_84 = 0;
  local_78 = (longlong *)0x0;
  iVar5 = 0x7fffffff;
  if (param_2 != '\0') {
    iVar5 = 1;
  }
  local_6c = 0;
  QueryPerformanceCounter(&local_80);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x48);
  dVar1 = (double)local_80.QuadPart * DAT_1468b02f8 + 16777216.0;
  do {
    iVar14 = 0;
    BVar6 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar6 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    local_70 = 0;
    if ((local_6c < 0) && (local_6c != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_78,0);
    }
    iVar9 = *(int *)(param_1 + 0x40);
    if (iVar5 <= *(int *)(param_1 + 0x40)) {
      iVar9 = iVar5;
    }
    if (local_6c < iVar9) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_78);
    }
    plVar13 = *(longlong **)(param_1 + 0x38);
    plVar11 = plVar13 + *(int *)(param_1 + 0x40);
    iVar9 = local_6c;
    if (plVar13 == plVar11) {
LAB_1416edcfb:
      LeaveCriticalSection(lpCriticalSection);
      break;
    }
    do {
      iVar7 = local_70;
      lVar8 = *plVar13;
      if (iVar5 <= iVar14) break;
      lVar10 = (longlong)local_70;
      iVar14 = iVar14 + 1;
      local_70 = local_70 + 1;
      if (iVar9 < local_70) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,iVar7);
        iVar9 = local_6c;
      }
      plVar13 = plVar13 + 1;
      local_78[lVar10] = lVar8;
    } while (plVar13 != plVar11);
    iVar9 = local_70;
    plVar11 = local_78;
    if (iVar14 == 0) goto LAB_1416edcfb;
    iVar7 = *(int *)(param_1 + 0x40);
    if (iVar7 - iVar14 != 0) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x38),
                 (void *)((longlong)*(void **)(param_1 + 0x38) + (longlong)iVar14 * 8),
                 (longlong)(iVar7 - iVar14) << 3);
      iVar7 = *(int *)(param_1 + 0x40);
    }
    *(int *)(param_1 + 0x40) = iVar7 - iVar14;
    LeaveCriticalSection(lpCriticalSection);
    if (0 < iVar9) {
      uVar15 = 0;
      uVar12 = (longlong)iVar9 & 0x1fffffffffffffff;
      if (plVar11 + iVar9 < plVar11) {
        uVar12 = uVar15;
      }
      if (uVar12 != 0) {
        do {
          lVar8 = *plVar11;
          FAsyncLoadingThread::ProcessAsyncPackageRequest(param_1,lVar8,0,param_5);
          if (lVar8 != 0) {
            lVar10 = *(longlong *)(lVar8 + 0x28);
            if (lVar10 != 0) {
              TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar10);
              FMemory::operator_delete(lVar10,0x10);
            }
            FMemory::operator_delete(lVar8);
          }
          plVar11 = plVar11 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar12);
      }
    }
    local_84 = local_84 + iVar9;
    if (param_2 != '\0') {
      QueryPerformanceCounter(&local_80);
      _DAT_1464b48b8 = (double)local_80.QuadPart * DAT_1468b02f8 + 16777216.0;
      dVar16 = _DAT_1464b48b8 - dVar1;
      if ((((double)param_4 < dVar16) && (DAT_1469e68bc != 0)) &&
         ((DAT_1464b48b0 != dVar1 &&
          (((double)DAT_1464b441c < dVar16 && ((double)(DAT_1464b4418 * param_4) < dVar16)))))) {
        DAT_1464b48b0 = dVar1;
      }
      if ((double)param_4 < dVar16) break;
    }
    cVar3 = IsGarbageCollectionWaiting();
  } while (cVar3 == '\0');
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (bVar2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469e6f40) &&
       (_Init_thread_header(&DAT_1469e6f40), DAT_1469e6f40 == -1)) {
      FUN_1416e39e0(&DAT_1469e6c60);
      atexit((_func_5014 *)&LAB_143e7c100);
      _Init_thread_footer(&DAT_1469e6f40);
    }
    _DAT_1469e6f38 = _DAT_1469e6f38 + -1;
  }
  return local_84;
}



// FUNCTION 1416eddb0 FUN_1416eddb0 body=3049 status=ok
// SIG undefined FUN_1416eddb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416eddb0(longlong param_1)

{
  uint *puVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  int iVar22;
  bool bVar23;
  longlong local_res8;
  undefined8 *local_res10;
  uint local_res18;
  undefined4 uStackX_1c;
  undefined8 *local_res20;
  undefined8 *local_b8;
  undefined8 *local_b0;
  void *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined2 *local_70;
  int local_68;
  longlong local_60 [4];
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar16 = 0;
  uVar13 = (ulonglong)_tls_index;
  *(undefined1 *)(param_1 + 0x760) = 1;
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18);
  local_res8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)pvVar2 + uVar13 * 8) + 0x38) < DAT_1469e6ac0) &&
     (_Init_thread_header(&DAT_1469e6ac0), DAT_1469e6ac0 == -1)) {
    _DAT_1464b47e0 = 0;
    _DAT_1464b47e8 = 0;
    _DAT_1464b4800 = 0;
    _DAT_1464b4808 = 0;
    _DAT_1464b4810 = 0xffffffff;
    _DAT_1464b4814 = 0;
    DAT_1464b4820 = 0;
    _DAT_1464b4828 = 0;
    atexit(FUN_143e7c0b0);
    _Init_thread_footer(&DAT_1469e6ac0);
  }
  FConvertedBlueprintsDependencies::GetAssets(&DAT_1464b47e0,uVar12);
  cVar3 = FUN_1416fbb40();
  if (cVar3 == '\0') {
    lVar14 = (longlong)(int)local_98;
    if ((int)local_98 != 0) {
      bVar23 = *local_a0 != *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
      uVar13 = uVar16;
      plVar10 = local_a0;
      uVar18 = uVar16;
      do {
        iVar19 = (int)uVar13;
        uVar16 = uVar16 + 1;
        uVar13 = (ulonglong)(iVar19 + 1);
        if ((longlong)uVar16 < lVar14) {
          plVar7 = plVar10 + uVar16 * 6;
          do {
            if (bVar23 != (*plVar7 != *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18))) break;
            uVar13 = (ulonglong)((int)uVar13 + 1);
            uVar16 = uVar16 + 1;
            plVar7 = plVar7 + 6;
          } while ((longlong)uVar16 < lVar14);
        }
        iVar20 = (int)uVar13 - iVar19;
        if (bVar23 != false) {
          iVar22 = (int)uVar18;
          if (iVar22 != iVar19) {
            _guard_xfg_dispatch_icall_nop
                      (plVar10 + (longlong)iVar22 * 6,plVar10 + (longlong)iVar19 * 6,
                       (longlong)iVar20 * 0x30);
            plVar10 = local_a0;
          }
          uVar18 = (ulonglong)(uint)(iVar22 + iVar20);
        }
        bVar23 = (bool)(bVar23 ^ 1);
      } while ((longlong)uVar16 < lVar14);
      local_98 = CONCAT44(local_98._4_4_,(int)uVar18);
    }
  }
  lVar14 = UDynamicClass::GetPrivateStaticClass();
  pvVar2 = *(void **)(lVar14 + 0x18);
  lVar14 = UDynamicClass::GetPrivateStaticClass();
  local_res18 = 0;
  lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x20) + 0x18);
  if (0 < (int)local_98) {
    local_res20 = (undefined8 *)0xcf;
    local_res10 = (undefined8 *)0x0;
    local_b0 = (undefined8 *)0x0;
    do {
      iVar19 = *(int *)(param_1 + 0x10);
      puVar17 = (undefined8 *)((longlong)local_a0 + (longlong)local_b0);
      *(int *)(param_1 + 0x10) = iVar19 + 1;
      if (*(int *)(param_1 + 0x14) < iVar19 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 8,iVar19);
      }
      puVar6 = (undefined8 *)0x0;
      lVar9 = (longlong)iVar19 * 0x38 + *(longlong *)(param_1 + 8);
      if (lVar9 != 0) {
        puVar6 = (undefined8 *)FObjectImport::FObjectImport(lVar9,0);
      }
      puVar6[3] = puVar17[3];
      puVar6[2] = puVar17[2];
      local_res10 = puVar17 + 1;
      *puVar6 = *local_res10;
      uVar4 = *(uint *)(param_1 + 0x10);
      if (puVar17[4] == 0) {
LAB_1416edfe4:
        *(uint *)(puVar6 + 1) = ~uVar4;
      }
      else {
        uVar4 = uVar4 - 2;
        if (-1 < (int)uVar4) {
          lVar9 = (longlong)(int)uVar4;
          plVar10 = (longlong *)(lVar9 * 0x38 + *(longlong *)(param_1 + 8));
          do {
            if (*plVar10 == puVar17[4]) goto LAB_1416edfe4;
            uVar4 = uVar4 - 1;
            plVar10 = plVar10 + -7;
            lVar9 = lVar9 + -1;
          } while (-1 < lVar9);
        }
      }
      iVar19 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x10) = iVar19 + 1;
      if (*(int *)(param_1 + 0x14) < iVar19 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow((longlong *)(param_1 + 8),iVar19);
      }
      lVar9 = (longlong)iVar19 * 0x38 + *(longlong *)(param_1 + 8);
      if (lVar9 == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = (undefined8 *)FObjectImport::FObjectImport(lVar9,0);
      }
      puVar6[3] = 0xcf;
      puVar6[2] = DAT_1468e2358;
      *puVar6 = *puVar17;
      if ((((void *)puVar17[3] == pvVar2) && (DAT_1468c21ab == '\0')) && (puVar17[2] == lVar14)) {
        puVar17 = (undefined8 *)FName::ToString(puVar17);
        local_res20 = (undefined8 *)*puVar17;
        iVar19 = *(int *)(puVar17 + 1);
        *puVar17 = 0;
        local_88._0_4_ = *(int *)(puVar17 + 1);
        local_88._4_4_ = *(int *)((longlong)puVar17 + 0xc);
        puVar17[1] = 0;
        iVar20 = (int)local_88;
        local_90 = local_res20;
        if (local_88._4_4_ < (int)((2 - (uint)(iVar19 != 0)) + (int)local_88)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo();
          iVar20 = (int)local_88;
        }
        local_88._0_4_ = (2 - (uint)(iVar20 != 0)) + iVar20;
        iVar19 = local_88._4_4_;
        iVar22 = (int)local_88;
        local_res20 = local_90;
        if (local_88._4_4_ < (int)local_88) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,iVar20);
          local_res20 = local_90;
          iVar19 = local_88._4_4_;
          iVar22 = (int)local_88;
        }
        local_90 = (undefined8 *)0x0;
        local_88 = (undefined8 *)0x0;
        puVar15 = (undefined2 *)
                  ((longlong)local_res20 + ((longlong)iVar20 - (ulonglong)(iVar20 != 0)) * 2);
        *puVar15 = 0x2e;
        puVar15[1] = 0;
        puVar17 = (undefined8 *)FName::ToString(local_res10,local_60);
        if (iVar22 < 2) {
          puVar6 = (undefined8 *)*puVar17;
          *puVar17 = 0;
          iVar19 = *(int *)(puVar17 + 1);
          puVar17[1] = 0;
          if (local_res20 != (undefined8 *)0x0) {
            FMemory::Free(local_res20);
          }
        }
        else {
          iVar20 = *(int *)(puVar17 + 1) + -1;
          if (*(int *)(puVar17 + 1) == 0) {
            iVar20 = 0;
          }
          local_res10 = (undefined8 *)CONCAT44(local_res10._4_4_,iVar20);
          if ((iVar22 != 0) || (iVar5 = 1, iVar20 == 0)) {
            iVar5 = 0;
          }
          iVar5 = iVar5 + iVar22 + iVar20;
          local_80 = local_res20;
          local_78._4_4_ = iVar19;
          if (iVar19 < iVar5) {
            local_78._0_4_ = iVar22;
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80,iVar5);
            iVar22 = (int)local_78;
            iVar20 = (int)local_res10;
          }
          local_a8 = (void *)*puVar17;
          iVar19 = iVar22;
          local_res20 = local_80;
          if (iVar20 != 0) {
            iVar19 = (uint)(iVar22 == 0) + iVar20 + iVar22;
            local_78 = (undefined8 *)CONCAT44(local_78._4_4_,iVar19);
            if (local_78._4_4_ < iVar19) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,iVar22);
              iVar19 = (int)local_78;
            }
            puVar15 = (undefined2 *)
                      ((longlong)local_80 + ((longlong)iVar22 - (ulonglong)(iVar22 != 0)) * 2);
            lVar9 = (longlong)(int)local_res10;
            local_res20 = local_80;
            _guard_xfg_dispatch_icall_nop(puVar15,local_a8,lVar9 * 2);
            puVar15[lVar9] = 0;
          }
          local_80 = (undefined8 *)0x0;
          local_78 = (undefined8 *)0x0;
          puVar6 = local_res20;
        }
        if (local_70 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_60[0] != 0) {
          FMemory::Free();
        }
        puVar17 = (undefined8 *)&DAT_143f3eda8;
        if (iVar19 != 0) {
          puVar17 = puVar6;
        }
        FName::FName(&local_b8,puVar17);
        puVar17 = local_b8;
        plVar10 = (longlong *)FUN_14178d970();
        if ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34)) {
          plVar7 = (longlong *)plVar10[8];
          if ((longlong *)plVar10[8] == (longlong *)0x0) {
            plVar7 = plVar10 + 7;
          }
          iVar19 = *(int *)((longlong)plVar7 +
                           ((longlong)((int)((ulonglong)puVar17 >> 0x20) + (int)puVar17) &
                           (longlong)(int)plVar10[9] - 1U) * 4);
          if (iVar19 != -1) {
            do {
              puVar11 = (undefined8 *)((longlong)iVar19 * 0x70 + *plVar10);
              if ((undefined8 *)*puVar11 == puVar17) {
                if (iVar19 != -1) goto LAB_1416ee2e1;
                break;
              }
              iVar19 = *(int *)(puVar11 + 0xd);
            } while (iVar19 != -1);
          }
        }
        puVar11 = (undefined8 *)0x0;
LAB_1416ee2e1:
        puVar17 = puVar11 + 1;
        if (puVar11 == (undefined8 *)0x0) {
          puVar17 = (undefined8 *)0x0;
        }
        if (puVar17 != (undefined8 *)0x0) {
          (*(code *)puVar17[1])();
        }
        param_1 = local_res8;
        if (puVar6 != (undefined8 *)0x0) {
          FMemory::Free(puVar6);
          param_1 = local_res8;
        }
      }
      local_res18 = local_res18 + 1;
      local_b0 = (undefined8 *)((longlong)local_b0 + 0x30);
    } while ((int)local_res18 < (int)local_98);
  }
  puVar17 = (undefined8 *)0x0;
  iVar19 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar19 + 1;
  if (*(int *)(param_1 + 0x24) < iVar19 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x18,iVar19);
  }
  if ((longlong)iVar19 * 0x88 + *(longlong *)(param_1 + 0x18) != 0) {
    puVar17 = (undefined8 *)FObjectExport::FObjectExport();
  }
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
  local_b0 = puVar17;
  plVar10 = (longlong *)FUN_14178d740();
  if ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34)) {
    plVar7 = (longlong *)plVar10[8];
    if ((longlong *)plVar10[8] == (longlong *)0x0) {
      plVar7 = plVar10 + 7;
    }
    iVar20 = *(int *)((longlong)plVar7 +
                     ((longlong)((int)((ulonglong)lVar14 >> 0x20) + (int)lVar14) &
                     (longlong)(int)plVar10[9] - 1U) * 4);
    if (iVar20 != -1) {
      do {
        puVar6 = (undefined8 *)(*plVar10 + (longlong)iVar20 * 0x18);
        if (*(longlong *)(*plVar10 + (longlong)iVar20 * 0x18) == lVar14) {
          if (iVar20 != -1) goto LAB_1416ee3e4;
          break;
        }
        iVar20 = *(int *)(puVar6 + 2);
      } while (iVar20 != -1);
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_1416ee3e4:
  puVar11 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  if (puVar11 == (undefined8 *)0x0) {
    local_res8 = 0;
    uVar12 = 0;
  }
  else {
    uVar12 = *puVar11;
  }
  *puVar17 = uVar12;
  *(int *)((longlong)puVar17 + 0x14) = iVar19 + 1;
  *(undefined1 *)((longlong)puVar17 + 0x5a) = 1;
  *(uint *)(puVar17 + 4) = *(uint *)(puVar17 + 4) | 1;
  if (DAT_1468c21ab == '\0') goto LAB_1416ee739;
  FLinker::GetExportPathName(param_1,&local_70,iVar19,0,0);
  puVar15 = &DAT_143f3eda8;
  if (local_68 != 0) {
    puVar15 = local_70;
  }
  puVar6 = (undefined8 *)FName::FName(&local_res8,puVar15,1);
  FUN_14178dac0(&local_a8,*puVar6);
  bVar23 = local_a8 == pvVar2;
  local_res8 = CONCAT71(local_res8._1_7_,bVar23);
  lVar14 = FUN_14171c950();
  if (bVar23) {
    iVar19 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar19 + 1;
    if (*(int *)(param_1 + 0x24) < iVar19 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x18,iVar19);
    }
    if ((longlong)iVar19 * 0x88 + *(longlong *)(param_1 + 0x18) == 0) goto LAB_1416ee48d;
    puVar6 = (undefined8 *)FObjectExport::FObjectExport();
    local_b8 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      local_88 = (undefined8 *)0xa;
      local_90 = (undefined8 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
      puVar11 = local_90;
      FGenericPlatformString::Memcpy(local_90,L"Default__",0x14);
      puVar8 = (undefined8 *)FName::ToString(puVar17,local_60);
      if ((int)local_88 < 2) {
        puVar21 = (undefined8 *)*puVar8;
        *puVar8 = 0;
        iVar20 = *(int *)(puVar8 + 1);
        puVar8[1] = 0;
        if (puVar11 != (undefined8 *)0x0) {
          FMemory::Free(puVar11);
        }
      }
      else {
        iVar19 = *(int *)(puVar8 + 1) + -1;
        if (*(int *)(puVar8 + 1) == 0) {
          iVar19 = 0;
        }
        if (((int)local_88 != 0) || (iVar20 = 1, iVar19 == 0)) {
          iVar20 = 0;
        }
        local_80 = puVar11;
        local_78 = local_88;
        iVar22 = local_88._4_4_;
        iVar5 = (int)local_88;
        if (local_88._4_4_ < (int)local_88 + iVar19 + iVar20) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80);
          iVar22 = local_78._4_4_;
          iVar5 = (int)local_78;
        }
        pvVar2 = (void *)*puVar8;
        puVar17 = local_b0;
        puVar21 = local_80;
        puVar6 = local_b8;
        iVar20 = iVar5;
        if (iVar19 != 0) {
          iVar20 = iVar19 + (uint)(iVar5 == 0) + iVar5;
          local_78 = (undefined8 *)CONCAT44(local_78._4_4_,iVar20);
          if (iVar22 < iVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,iVar5);
            iVar20 = (int)local_78;
          }
          puVar21 = local_80;
          puVar15 = (undefined2 *)
                    ((longlong)local_80 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(puVar15,pvVar2,(longlong)iVar19 * 2);
          puVar15[iVar19] = 0;
          puVar17 = local_b0;
          puVar6 = local_b8;
        }
      }
      if (local_60[0] != 0) {
        FMemory::Free();
      }
      puVar11 = (undefined8 *)&DAT_143f3eda8;
      if (iVar20 != 0) {
        puVar11 = puVar21;
      }
      FName::FName(&local_res18,puVar11,1);
      *puVar6 = CONCAT44(uStackX_1c,local_res18);
      *(undefined4 *)((longlong)puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x20);
      *(undefined1 *)((longlong)puVar6 + 0x5a) = 2;
      *(uint *)(puVar6 + 4) = *(uint *)(puVar6 + 4) | 0x11;
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)((longlong)puVar17 + 0x14);
      if (puVar21 != (undefined8 *)0x0) {
        FMemory::Free(puVar21);
      }
    }
LAB_1416ee496:
    local_78 = puVar6;
    local_res10 = (undefined8 *)((ulonglong)local_res10 & 0xffffffff00000000);
    local_res18 = 0;
    local_80 = puVar17;
    do {
      uVar13 = 0;
      local_res20 = (&local_80)[(int)local_res18];
      if (local_res20 != (undefined8 *)0x0) {
        *(int *)(local_res20 + 0xe) = (int)local_res10;
        uVar16 = uVar13;
        uVar18 = uVar13;
        iVar19 = (int)local_98;
        if (0 < (int)local_98) {
          do {
            if ((*(byte *)((longlong)local_a0 + uVar18 + (longlong)(int)local_res18 + 0x28) & 1) !=
                0) {
              *(int *)((longlong)local_res20 + 0x74) = *(int *)((longlong)local_res20 + 0x74) + 1;
              iVar19 = *(int *)(param_1 + 0x730);
              *(int *)(param_1 + 0x730) = iVar19 + 1;
              if (*(int *)(param_1 + 0x734) < iVar19 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x728,iVar19);
              }
              *(uint *)(*(longlong *)(param_1 + 0x728) + (longlong)iVar19 * 4) = ~(uint)uVar13;
              local_res10 = (undefined8 *)CONCAT44(local_res10._4_4_,(int)local_res10 + 1);
              iVar19 = (int)local_98;
            }
            uVar4 = (int)uVar16 + 1;
            uVar13 = (ulonglong)((uint)uVar13 + 2);
            uVar16 = (ulonglong)uVar4;
            uVar18 = uVar18 + 0x30;
          } while ((int)uVar4 < iVar19);
        }
        uVar18 = 0;
        uVar13 = uVar18;
        uVar16 = uVar18;
        if (0 < iVar19) {
          do {
            if ((*(byte *)((longlong)local_a0 + uVar16 + (longlong)(int)local_res18 + 0x28) & 2) !=
                0) {
              *(int *)(local_res20 + 0xf) = *(int *)(local_res20 + 0xf) + 1;
              iVar19 = *(int *)(param_1 + 0x730);
              *(int *)(param_1 + 0x730) = iVar19 + 1;
              if (*(int *)(param_1 + 0x734) < iVar19 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x728,iVar19);
              }
              *(uint *)(*(longlong *)(param_1 + 0x728) + (longlong)iVar19 * 4) = ~(uint)uVar18;
              local_res10 = (undefined8 *)CONCAT44(local_res10._4_4_,(int)local_res10 + 1);
              iVar19 = (int)local_98;
            }
            uVar4 = (int)uVar13 + 1;
            uVar18 = (ulonglong)((uint)uVar18 + 2);
            uVar13 = (ulonglong)uVar4;
            uVar16 = uVar16 + 0x30;
          } while ((int)uVar4 < iVar19);
        }
        uVar13 = 0;
        if (((char)local_res8 != '\0') && (local_res20 == local_b8)) {
          *(int *)((longlong)local_res20 + 0x7c) = *(int *)((longlong)local_res20 + 0x7c) + 1;
          iVar19 = *(int *)(param_1 + 0x730);
          *(int *)(param_1 + 0x730) = iVar19 + 1;
          if (*(int *)(param_1 + 0x734) < iVar19 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x728,iVar19);
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0x728) + (longlong)iVar19 * 4) =
               *(undefined4 *)((longlong)local_b0 + 0x14);
          local_res10 = (undefined8 *)CONCAT44(local_res10._4_4_,(int)local_res10 + 1);
          iVar19 = (int)local_98;
        }
        uVar16 = uVar13;
        uVar18 = uVar13;
        if (0 < iVar19) {
          do {
            if ((*(byte *)((longlong)local_a0 + uVar18 + (longlong)(int)local_res18 + 0x28) & 4) !=
                0) {
              *(int *)((longlong)local_res20 + 0x7c) = *(int *)((longlong)local_res20 + 0x7c) + 1;
              iVar19 = *(int *)(param_1 + 0x730);
              *(int *)(param_1 + 0x730) = iVar19 + 1;
              if (*(int *)(param_1 + 0x734) < iVar19 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x728,iVar19);
              }
              *(uint *)(*(longlong *)(param_1 + 0x728) + (longlong)iVar19 * 4) = ~(uint)uVar13;
              local_res10 = (undefined8 *)CONCAT44(local_res10._4_4_,(int)local_res10 + 1);
              iVar19 = (int)local_98;
            }
            uVar4 = (int)uVar16 + 1;
            uVar13 = (ulonglong)((uint)uVar13 + 2);
            uVar16 = (ulonglong)uVar4;
            uVar18 = uVar18 + 0x30;
          } while ((int)uVar4 < iVar19);
        }
        uVar18 = 0;
        uVar13 = uVar18;
        uVar16 = uVar18;
        if (0 < iVar19) {
          do {
            if ((*(byte *)((longlong)local_a0 + uVar16 + (longlong)(int)local_res18 + 0x28) & 8) !=
                0) {
              *(int *)(local_res20 + 0x10) = *(int *)(local_res20 + 0x10) + 1;
              iVar19 = *(int *)(param_1 + 0x730);
              *(int *)(param_1 + 0x730) = iVar19 + 1;
              if (*(int *)(param_1 + 0x734) < iVar19 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x728,iVar19);
              }
              *(uint *)(*(longlong *)(param_1 + 0x728) + (longlong)iVar19 * 4) = ~(uint)uVar18;
              local_res10 = (undefined8 *)CONCAT44(local_res10._4_4_,(int)local_res10 + 1);
              iVar19 = (int)local_98;
            }
            uVar4 = (int)uVar13 + 1;
            uVar18 = (ulonglong)((uint)uVar18 + 2);
            uVar13 = (ulonglong)uVar4;
            uVar16 = uVar16 + 0x30;
          } while ((int)uVar4 < iVar19);
        }
      }
      local_res18 = local_res18 + 1;
    } while (local_res18 < 2);
  }
  else if (local_a8 == *(void **)(lVar14 + 0x18)) {
LAB_1416ee48d:
    puVar6 = (undefined8 *)0x0;
    local_b8 = (undefined8 *)0x0;
    goto LAB_1416ee496;
  }
  if (local_70 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_1416ee739:
  puVar1 = (uint *)(*(longlong *)(param_1 + 0xa0) + 0x50);
  *puVar1 = *puVar1 | 0x10;
  if (local_a0 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416ee9a0 FUN_1416ee9a0 body=1347 status=ok
// SIG undefined FUN_1416ee9a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1416ee9a0(longlong param_1)

{
  int *piVar1;
  double dVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float fVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined2 *puVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  
  FUN_141729b50(local_res8);
  uVar18 = 0;
  if (*(int *)(param_1 + 0xa4) < *(int *)(*(longlong *)(param_1 + 0x50) + 0x20)) {
    do {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x74);
      LOCK();
      bVar19 = *piVar1 == 0;
      if (bVar19) {
        *piVar1 = 0;
      }
      UNLOCK();
      if (!bVar19) break;
      fVar21 = *(float *)(param_1 + 0xc4);
      dVar2 = *(double *)(param_1 + 0xd0);
      if (*(char *)(param_1 + 200) != '\0') {
        QueryPerformanceCounter(&local_res10);
        dVar20 = (double)fVar21;
        _DAT_1464b48b8 = (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0;
        dVar22 = _DAT_1464b48b8 - dVar2;
        if ((((dVar20 < dVar22) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar2)) &&
           (((double)DAT_1464b441c < dVar22 && ((double)(DAT_1464b4418 * fVar21) < dVar22)))) {
          DAT_1464b48b0 = dVar2;
        }
        if (dVar20 < dVar22) break;
      }
      cVar8 = IsGarbageCollectionWaiting();
      if (cVar8 != '\0') break;
      lVar12 = *(longlong *)(param_1 + 0x50);
      lVar15 = (longlong)*(int *)(param_1 + 0xa4) * 0x88;
      lVar3 = *(longlong *)(lVar12 + 0x18);
      uVar16 = uVar18;
      if (*(char *)(lVar12 + 0x2a2) != '\0') {
        uVar16 = *(ulonglong *)(lVar12 + 0x318);
      }
      if (uVar16 == 0) {
        if ((*(char *)(lVar12 + 0x295) == '\0') &&
           (cVar8 = (**(code **)(**(longlong **)(lVar12 + 0x318) + 200))
                              (*(longlong **)(lVar12 + 0x318),*(undefined8 *)(lVar15 + 0x30 + lVar3)
                               ,*(undefined8 *)(lVar15 + 0x28 + lVar3)), cVar8 == '\0'))
        goto LAB_1416eedd2;
LAB_1416eec3d:
        *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
        lVar12 = FUN_141730700(*(undefined8 *)(param_1 + 0x50));
        if (lVar12 != 0) {
          FUN_141740c00(*(longlong *)(param_1 + 0x50) + 0x200,lVar12);
          iVar11 = *(int *)(param_1 + 0x120);
          *(int *)(param_1 + 0x120) = iVar11 + 1;
          if (*(int *)(param_1 + 0x124) < iVar11 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (param_1 + 0x118,iVar11);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar11 * 8) = lVar12;
        }
        lVar3 = *(longlong *)(param_1 + 0x50);
        fVar21 = 0.0;
        *(longlong *)(param_1 + 0xd8) = lVar12;
        *(wchar_t **)(param_1 + 0xe0) = L"creating exports for";
        if (lVar3 == 0) {
          iVar11 = *(int *)(param_1 + 0x100);
          if (0 < iVar11) {
            fVar21 = (float)*(int *)(param_1 + 0xb8);
            goto LAB_1416eee0f;
          }
        }
        else {
          iVar11 = *(int *)(lVar3 + 0x10);
          iVar10 = iVar11;
          if (iVar11 <= *(int *)(param_1 + 0x100)) {
            iVar10 = *(int *)(param_1 + 0x100);
          }
          iVar11 = iVar10 + *(int *)(lVar3 + 0x20) + iVar11;
          fVar21 = (float)(*(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0x9c) +
                          *(int *)(param_1 + 0xa4)) * 100.0;
LAB_1416eee0f:
          fVar21 = fVar21 / (float)iVar11;
        }
        fVar7 = *(float *)(param_1 + 0xf0);
        if (*(float *)(param_1 + 0xf0) <= fVar21) {
          fVar7 = fVar21;
        }
        *(float *)(param_1 + 0xf0) = fVar7;
      }
      else {
        uVar4 = *(undefined8 *)(lVar15 + 0x28 + lVar3);
        uVar5 = *(undefined8 *)(lVar15 + 0x30 + lVar3);
        uVar14 = *(uint *)(uVar16 + 0x110);
        fVar21 = *(float *)(param_1 + 0xc4);
        dVar2 = *(double *)(param_1 + 0xd0);
        cVar8 = *(char *)(param_1 + 0xc9);
        cVar9 = *(char *)(param_1 + 200);
        bVar19 = false;
        if (uVar14 == 2) {
          plVar6 = *(longlong **)(uVar16 + 8);
          *(undefined4 *)(uVar16 + 0x110) = 3;
          *(longlong *)(uVar16 + 0xd8) = *(longlong *)(uVar16 + 0xd8) + (*plVar6 - plVar6[2]);
          *plVar6 = 0;
          plVar6[1] = 0;
          plVar6[2] = 0;
          if (*(longlong *)(uVar16 + 200) != 0) {
            FMemory::Free();
          }
          uVar14 = *(uint *)(uVar16 + 0x110);
          bVar19 = uVar14 == 2;
          *(undefined8 *)(uVar16 + 200) = 0;
          *(undefined8 *)(uVar16 + 0xe0) = 0;
          *(undefined8 *)(uVar16 + 0xe8) = 0;
        }
        if (uVar14 < 2 || bVar19) {
          if (*(int *)(uVar16 + 0x178) == 0) {
            puVar13 = &DAT_143f3eda8;
          }
          else {
            puVar13 = *(undefined2 **)(uVar16 + 0x170);
          }
          LowLevelFatalErrorHandler
                    ("Unknown",0x1f8b,
                     L"Invalid LoadPhase (LoadPhase=%d, RequestOffset=%d, RequestSize=%d, Filename=\'%s\', bHasFinishedInitialization=%d)"
                     ,uVar14,uVar5,uVar4,puVar13,DAT_1469e689d);
          if (*(int *)(uVar16 + 0x178) == 0) {
            puVar13 = &DAT_143f3eda8;
          }
          else {
            puVar13 = *(undefined2 **)(uVar16 + 0x170);
          }
          FDebug::AssertFailed
                    (&DAT_144cf110a,"Unknown",0x1f8b,
                     L"Invalid LoadPhase (LoadPhase=%d, RequestOffset=%d, RequestSize=%d, Filename=\'%s\', bHasFinishedInitialization=%d)"
                     ,*(undefined4 *)(uVar16 + 0x110),uVar5,uVar4,puVar13,DAT_1469e689d);
        }
        else {
          if (uVar14 == 3) {
            FUN_1416f7b40(uVar16);
          }
          if (((cVar9 == '\0') || (cVar9 = FUN_141702230(uVar16,uVar5,uVar4,1), cVar9 != '\0')) ||
             ((cVar8 != '\0' &&
              ((QueryPerformanceCounter(&local_res18),
               0.00101 < fVar21 - (float)(((double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0
                                          ) - dVar2) &&
               (cVar8 = FArchiveAsync2::WaitRead(uVar16), cVar8 != '\0')))))) goto LAB_1416eec3d;
        }
LAB_1416eedd2:
        if ((*(char *)(param_1 + 200) != '\0') && (*(char *)(param_1 + 0xc9) == '\0')) {
          *(undefined1 *)(param_1 + 0xca) = 1;
        }
        if (*(char *)(param_1 + 0xca) != '\0') goto LAB_1416eee9f;
      }
    } while (*(int *)(param_1 + 0xa4) < *(int *)(*(longlong *)(param_1 + 0x50) + 0x20));
  }
  uVar16 = uVar18;
  uVar17 = uVar18;
  if (0 < *(int *)(param_1 + 0x88)) {
    do {
      uVar14 = (int)uVar16 + 1;
      LOCK();
      piVar1 = (int *)(*(longlong *)(uVar17 + *(longlong *)(param_1 + 0x80)) + 0x98);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar16 = (ulonglong)uVar14;
      uVar17 = uVar17 + 8;
    } while ((int)uVar14 < *(int *)(param_1 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x80,0);
  }
  if (*(int *)(param_1 + 0xa4) == *(int *)(*(longlong *)(param_1 + 0x50) + 0x20)) {
    uVar18 = 2;
  }
LAB_1416eee9f:
  FUN_14172a400(local_res8);
  return uVar18;
}



// FUNCTION 1416eeef0 FUN_1416eeef0 body=2521 status=ok
// SIG undefined FUN_1416eeef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1416eeef0(longlong param_1)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined2 **ppuVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  int *piVar17;
  undefined2 *puVar18;
  uint *puVar19;
  undefined2 *puVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 auStack_188 [32];
  undefined2 *local_168;
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined2 *local_148;
  undefined2 *local_140;
  undefined8 local_138;
  uint *puStack_130;
  int local_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  ulonglong local_118;
  undefined2 *local_110;
  ulonglong local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  longlong local_f0;
  longlong local_e8 [2];
  code **local_d8;
  undefined8 uStack_d0;
  uint *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  code **local_b0;
  longlong lStack_a8;
  uint *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *local_88;
  undefined8 local_80;
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  uint *local_58;
  ulonglong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_118 = local_118 & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    return 2;
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(wchar_t **)(param_1 + 0xe0) = L"creating Linker";
  FUN_141729b50(local_158);
  puVar9 = (undefined8 *)FName::ToString(param_1 + 0x18,local_e8);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar20 = &DAT_143f3eda8;
  }
  else {
    puVar20 = (undefined2 *)*puVar9;
  }
  lVar10 = FUN_1417894a0(0,puVar20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  if (lVar10 == 0) {
    *(undefined1 *)(param_1 + 0xcb) = 1;
    FUN_14172a400(local_158);
    return 0;
  }
  FUN_1416ea3b0(param_1,lVar10);
  *(longlong *)(param_1 + 0x58) = lVar10;
  FUN_14172a400(local_158);
  DAT_1469e68a0 = DAT_1469e68a0 + 1.0;
  local_150 = 0;
  if ((*(longlong *)(lVar10 + 0x58) == 0) && ((*(byte *)(lVar10 + 0x28) & 2) == 0)) {
    *(undefined1 *)(param_1 + 0xce) = 1;
    *(uint *)(lVar10 + 0x50) = *(uint *)(lVar10 + 0x50) | *(uint *)(param_1 + 0x40);
    *(undefined4 *)(lVar10 + 0x54) = *(undefined4 *)(param_1 + 0x48);
    *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(param_1 + 0x20);
  }
  *(longlong *)(param_1 + 0xd8) = lVar10;
  lVar11 = FLinkerLoad::FindExistingLinkerForPackage(lVar10);
  *(longlong *)(param_1 + 0x50) = lVar11;
  if (lVar11 != 0) {
    if (DAT_1468c21ab != '\0') {
      puVar9 = (undefined8 *)FName::ToString(param_1 + 0x18,&local_138);
      if (*(int *)(puVar9 + 1) == 0) {
        puVar20 = &DAT_143f3eda8;
      }
      else {
        puVar20 = (undefined2 *)*puVar9;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x1716,
                 L"Package %s was reloaded before it even closed the linker from a previous load. Seems like a waste of time eh?"
                 ,puVar20);
      if (local_138 != (undefined1 (*) [16])0x0) {
        FMemory::Free();
      }
      puVar9 = (undefined8 *)FName::ToString(param_1 + 0x18,&local_138);
      if (*(int *)(puVar9 + 1) == 0) {
        local_168 = &DAT_143f3eda8;
      }
      else {
        local_168 = (undefined2 *)*puVar9;
      }
      FDebug::AssertFailed
                (&DAT_144cf0df4,"Unknown",0x1716,
                 L"Package %s was reloaded before it even closed the linker from a previous load. Seems like a waste of time eh?"
                );
      if (local_138 != (undefined1 (*) [16])0x0) {
        FMemory::Free();
      }
      local_138 = *(undefined1 (**) [16])(param_1 + 0x18);
      local_108 = CONCAT44(local_108._4_4_,*(undefined4 *)(param_1 + 0x1e4));
      puStack_130 = (uint *)CONCAT44(puStack_130._4_4_,*(undefined4 *)(param_1 + 0x1e4));
      local_110 = (undefined2 *)local_138;
      TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
      Emplace<FWeakAsyncPackagePtr_const_&>(&DAT_1464b4778,&local_118,&local_138,0);
      FPrecacheCallbackHandler::SummaryComplete(&PTR_StartProfileThreadUsage_1464b4680,&local_110);
      lVar11 = *(longlong *)(param_1 + 0x50);
    }
    if (lVar11 != 0) goto LAB_1416ef57d;
  }
  local_148 = (undefined2 *)0x0;
  local_138 = (undefined1 (*) [16])0x0;
  puStack_130 = (uint *)0x0;
  local_128 = (int)*(undefined8 *)(param_1 + 0x20);
  iStack_124 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  local_140 = (undefined2 *)0x0;
  local_118 = 0;
  local_150 = 0;
  FCoreRedirects::GetRedirectedName(&local_110,0x40,&local_138);
  ppuVar12 = (undefined2 **)FName::ToString(local_100,&local_138);
  if (&local_148 != ppuVar12) {
    if (local_148 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_148 = *ppuVar12;
    *ppuVar12 = (undefined2 *)0x0;
    local_140 = ppuVar12[1];
    ppuVar12[1] = (undefined2 *)0x0;
  }
  if (local_138 != (undefined1 (*) [16])0x0) {
    FMemory::Free();
  }
  ppuVar12 = (undefined2 **)FUN_1416f90e0(&local_138,&local_148);
  if (&local_148 != ppuVar12) {
    if (local_148 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_148 = *ppuVar12;
    *ppuVar12 = (undefined2 *)0x0;
    local_140 = ppuVar12[1];
    ppuVar12[1] = (undefined2 *)0x0;
  }
  if (local_138 != (undefined1 (*) [16])0x0) {
    FMemory::Free();
  }
  puVar20 = &DAT_143f3eda8;
  if ((int)local_140 != 0) {
    puVar20 = local_148;
  }
  puVar9 = (undefined8 *)FName::FName(&local_f0,puVar20,1);
  uVar13 = FUN_1416f8860();
  FUN_1416f5ad0(uVar13,&local_150,*puVar9);
  puVar20 = local_148;
  if (((int)local_150 == 0) && (local_150._4_4_ == 0)) {
    lVar11 = (longlong)(int)local_140;
    local_110 = (undefined2 *)0x0;
    local_108 = CONCAT44(local_108._4_4_,(int)local_140);
    if ((int)local_140 == 0) {
      local_108 = (ulonglong)local_140 & 0xffffffff;
      ppuVar12 = &local_110;
      bVar3 = true;
      bVar2 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_110,(ulonglong)local_140 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_110,puVar20,lVar11 * 2);
      ppuVar12 = &local_110;
      bVar3 = true;
      bVar2 = false;
    }
  }
  else {
    ppuVar12 = (undefined2 **)FName::ToString(&local_150);
    bVar3 = false;
    bVar2 = true;
  }
  puVar20 = *ppuVar12;
  *ppuVar12 = (undefined2 *)0x0;
  uVar1 = *(undefined4 *)(ppuVar12 + 1);
  local_118 = CONCAT44(local_118._4_4_,*(undefined4 *)((longlong)ppuVar12 + 0xc));
  ppuVar12[1] = (undefined2 *)0x0;
  if ((bVar2) && (local_138 != (undefined1 (*) [16])0x0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_110 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if (local_148 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_140 = (undefined2 *)CONCAT44((int)local_118,uVar1);
  piVar17 = (int *)(param_1 + 0x28);
  if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
      *(int *)(param_1 + 0x2c) == 0) && *(int *)(param_1 + 0x28) == 0) {
    piVar17 = (int *)0x0;
  }
  local_110 = (undefined2 *)0x0;
  local_108 = 0;
  local_148 = puVar20;
  cVar6 = FUN_1416f0740(&local_148,piVar17,&local_110,1);
  local_150 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x18);
    plVar14 = (longlong *)FUN_14178d740();
    if ((int)plVar14[1] != *(int *)((longlong)plVar14 + 0x34)) {
      plVar15 = (longlong *)plVar14[8];
      if ((longlong *)plVar14[8] == (longlong *)0x0) {
        plVar15 = plVar14 + 7;
      }
      iVar16 = *(int *)((longlong)plVar15 +
                       ((longlong)((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                       (longlong)(int)plVar14[9] - 1U) * 4);
      if (iVar16 != -1) {
        do {
          if (*(longlong *)(*plVar14 + (longlong)iVar16 * 0x18) == lVar11) {
            if (iVar16 != -1) goto LAB_1416ef3d7;
            break;
          }
          iVar16 = *(int *)(*plVar14 + 0x10 + (longlong)iVar16 * 0x18);
        } while (iVar16 != -1);
      }
    }
    if (cVar6 != '\0') {
LAB_1416ef3d7:
      local_58 = (uint *)0x0;
      local_48 = local_48 & 0xffffffff00000000;
      if (DAT_1468c21ab == '\0') {
        puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_78);
        puVar20 = local_110;
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &PTR_FUN_143f3f130;
        }
        puVar18 = &DAT_143f3eda8;
        if ((int)local_108 != 0) {
          puVar18 = local_110;
        }
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        uVar13 = FUN_1417327e0(lVar10,puVar18,0x81,&local_88);
        *(undefined8 *)(param_1 + 0x50) = uVar13;
        if ((int)local_48 != 0) {
          puVar19 = local_78;
          if (local_58 != (uint *)0x0) {
            puVar19 = local_58;
          }
          if (puVar19 != (uint *)0x0) {
            (**(code **)(*(longlong *)puVar19 + 0x10))(puVar19,0);
          }
        }
        if (local_58 != (uint *)0x0) {
          FMemory::Free();
        }
      }
      else {
        local_138 = *(undefined1 (**) [16])(param_1 + 0x18);
        puStack_130 = (uint *)CONCAT44(puStack_130._4_4_,*(undefined4 *)(param_1 + 0x1e4));
        puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_78);
        puVar20 = local_110;
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &PTR_FUN_143f77c18;
          puVar9[1] = local_138;
          puVar9[2] = puStack_130;
        }
        puVar18 = &DAT_143f3eda8;
        if ((int)local_108 != 0) {
          puVar18 = local_110;
        }
        local_88 = (code *)&LAB_1416eba00;
        uVar13 = FUN_1417327e0(lVar10,puVar18,0x81,&local_88);
        *(undefined8 *)(param_1 + 0x50) = uVar13;
        if ((int)local_48 != 0) {
          puVar19 = local_78;
          if (local_58 != (uint *)0x0) {
            puVar19 = local_58;
          }
          if (puVar19 != (uint *)0x0) {
            (**(code **)(*(longlong *)puVar19 + 0x10))(puVar19,0);
          }
        }
        if (local_58 != (uint *)0x0) {
          FMemory::Free();
        }
        if (*(longlong *)(param_1 + 0x50) != 0) {
          local_110 = *(undefined2 **)(param_1 + 0x18);
          local_108 = CONCAT44(local_108._4_4_,*(undefined4 *)(param_1 + 0x1e4));
          TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
          Emplace<FWeakAsyncPackagePtr_const_&>(&DAT_1464b4778,&local_118,&local_110,0);
          if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x295) != '\0') {
            FPrecacheCallbackHandler::SummaryComplete
                      (&PTR_StartProfileThreadUsage_1464b4680,&local_138);
          }
        }
      }
      if (puVar20 != (undefined2 *)0x0) {
        FMemory::Free(puVar20);
      }
      if (local_148 != (undefined2 *)0x0) {
        FMemory::Free();
      }
LAB_1416ef57d:
      *(longlong *)(*(longlong *)(param_1 + 0x50) + 800) = param_1;
      return 2;
    }
  }
  puVar20 = &DAT_143f3eda8;
  if ((int)local_140 != 0) {
    puVar20 = local_148;
  }
  FName::FName(local_e8,puVar20,1);
  cVar6 = FLinkerLoad::IsKnownMissingPackage(local_e8[0]);
  if (cVar6 == '\0') {
    if (DAT_1468c21ab != '\0') {
      local_88 = (code *)0x0;
      local_80 = 0;
      local_68 = (uint *)0x0;
      local_60 = 0;
      local_58 = (uint *)0xffffffff;
      local_48 = 0;
      local_40 = 0;
      local_138 = (undefined1 (*) [16])0x0;
      puStack_130 = (uint *)0x0;
      FEventLoadNodeArray::GetAddedNodes(param_1 + 0x4a8,&local_138,param_1);
      pauVar21 = local_138 + (int)puStack_130;
      pauVar4 = local_138;
      for (pauVar22 = local_138; pauVar22 != pauVar21; pauVar22 = pauVar22 + 1) {
        iVar16 = SUB164(*pauVar22,0xc);
        iVar8 = SUB164(*pauVar22,8);
        if (iVar8 == 0) {
          plVar14 = (longlong *)(param_1 + 0x4a8 + (longlong)iVar16 * 0x18);
        }
        else {
          if (iVar8 < 0) {
            iVar16 = (iVar16 - (iVar8 * 2 + 2)) + *(int *)(param_1 + 0x508);
          }
          else {
            iVar16 = iVar16 + -3 + *(int *)(param_1 + 0x50c) + iVar8 * 3;
          }
          plVar14 = (longlong *)(*(longlong *)(param_1 + 0x4f0) + (longlong)iVar16 * 0x18);
        }
        plVar15 = (longlong *)*plVar14;
        plVar14 = plVar15 + (longlong)(int)plVar14[1] * 2;
        local_138 = pauVar4;
        if (plVar15 != plVar14) {
          local_150 = 0;
          do {
            if (*plVar15 == 0) {
              local_f8 = 0;
              local_f0 = 0;
            }
            else {
              local_f0 = *(longlong *)(*plVar15 + 0x18);
            }
            if (local_f0 != 0) {
              FUN_140800100(&local_88,&local_118,&local_f0,0);
            }
            plVar15 = plVar15 + 2;
          } while (plVar15 != plVar14);
        }
        pauVar4 = local_138;
      }
      iVar16 = (int)local_60;
      puStack_130 = local_78;
      local_138 = (undefined1 (*) [16])0x100000000;
      iStack_124 = 0;
      iStack_120 = 0;
      if ((int)local_60 != 0) {
        puVar19 = local_78;
        if (local_68 != (uint *)0x0) {
          puVar19 = local_68;
        }
        uVar7 = *puVar19;
        iStack_120 = 0;
        iVar8 = 0;
        while (uVar7 == 0) {
          iStack_120 = iStack_120 + 0x20;
          uVar5 = (ulonglong)local_138 >> 0x20;
          local_138 = (undefined1 (*) [16])CONCAT44((int)uVar5,iVar8 + 1);
          if ((int)(((int)local_60 + -1 >> 0x1f & 0x1fU) + (int)local_60 + -1) >> 5 <= iVar8) {
            iStack_124 = (int)local_60;
            goto LAB_1416ef7ea;
          }
          uVar7 = puVar19[(longlong)iVar8 + 1];
          iVar8 = iVar8 + 1;
        }
        uVar7 = -uVar7 & uVar7;
        iVar8 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        local_138 = (undefined1 (*) [16])CONCAT44(uVar7,SUB84(local_138,0));
        if (uVar7 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        iStack_124 = (iStack_120 - iVar8) + 0x1f;
        if ((int)local_60 < iStack_124) {
          iStack_124 = (int)local_60;
        }
      }
LAB_1416ef7ea:
      uStack_c0 = CONCAT44(iStack_124,0xffffffff);
      local_b8 = CONCAT44(uStack_11c,iStack_120);
      local_128 = -1 << ((byte)local_60 & 0x1f);
      lStack_a8 = (longlong)local_138;
      iStack_124 = (int)local_60;
      uStack_d0 = (longlong)local_138;
      local_d8 = &local_88;
      local_c8 = puStack_130;
      local_b0 = &local_88;
      puStack_a0 = puStack_130;
      uStack_98 = uStack_c0;
      uStack_90 = local_b8;
      while (((uStack_c0._4_4_ != iVar16 || (local_c8 != local_78)) || (local_d8 != &local_88))) {
        uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d0);
      }
      if (pauVar4 != (undefined1 (*) [16])0x0) {
        FMemory::Free(pauVar4);
      }
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
    }
    FLinkerLoad::AddKnownMissingPackage(local_e8[0]);
  }
  *(undefined1 *)(param_1 + 0xcb) = 1;
  if (local_110 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_148 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 1416ef8d0 FUN_1416ef8d0 body=864 status=ok
// SIG undefined FUN_1416ef8d0(void)

undefined8 FUN_1416ef8d0(longlong param_1,int param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  lVar11 = (longlong)param_2 * 0x88 + *(longlong *)(param_1 + 0x18);
  cVar3 = FUN_14170fb20();
  if (cVar3 == '\0') {
    return 0;
  }
  cVar3 = FUN_1416fbab0();
  if (cVar3 != '\0') {
    return 0;
  }
  if (*(longlong *)(lVar11 + 0x48) != 0) {
    return 0;
  }
  lVar4 = FLinkerLoad::GetExportLoadClass(param_1,param_2);
  if (lVar4 == 0) {
    return 0;
  }
  if (param_3 != 0) {
    lVar5 = ULinkerPlaceholderExportObject::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_58 = *(undefined2 **)(lVar4 + 0x18);
      FName::ToString(&local_58,&local_48);
      puVar10 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar10 = local_48;
      }
      FString::PrintfImpl(&local_58,L"PLACEHOLDER-INST_of_%s",puVar10);
      puVar10 = &DAT_143f3eda8;
      if (local_50 != 0) {
        puVar10 = local_58;
      }
      FName::FName(&local_res8,puVar10,1);
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      uVar6 = ULinkerPlaceholderExportObject::GetPrivateStaticClass();
      puVar7 = (undefined8 *)FUN_141791c20(&local_58,param_3,uVar6,local_res8);
      local_res8 = *puVar7;
      lVar4 = NewObject<USaveGame>(param_3,uVar6,local_res8,0x41,0,0,0);
      *(int *)(lVar4 + 0x30) = param_2 + 1;
      *(longlong *)(lVar11 + 0x48) = lVar4;
      FLinkerPlaceholderBase::SetupPlaceholderSubobject(param_3 + 0x28,lVar4);
      goto LAB_1416efa42;
    }
  }
  if ((*(uint *)(lVar4 + 0xb4) >> 7 & 1) != 0) {
    return 0;
  }
  lVar5 = ULinkerPlaceholderClass::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  lVar5 = 0;
  if (bVar2) {
    lVar5 = lVar4;
  }
  lVar8 = FUN_1417a53c0(lVar4);
  if (lVar5 == 0) {
    if (lVar8 != 0) {
      if ((*(int *)(lVar8 + 0x78c) == -1) && (*(char *)(lVar8 + 0x788) == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1416efaf7;
    }
    if (*(longlong *)(lVar4 + 0xf8) == 0) {
      return 0;
    }
    uVar1 = *(uint *)(*(longlong *)(lVar4 + 0xf8) + 8);
    if ((uVar1 >> 0x15 & 1) != 0) {
      return 0;
    }
    if ((uVar1 >> 0x13 & 1) == 0) {
      return 0;
    }
  }
LAB_1416efaf7:
  if ((*(uint *)(param_1 + 0x290) >> 0x14 & 1) == 0) {
    if ((*(int *)(param_1 + 0x78c) == -1) && (*(char *)(param_1 + 0x788) == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1416efbf2;
  }
  if ((*(uint *)(param_1 + 0x290) & 8) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
    uVar9 = ULinkerPlaceholderExportObject::GetPrivateStaticClass();
    local_res8 = *(undefined8 *)(lVar4 + 0x18);
    FName::ToString(&local_res8,&local_38);
    puVar10 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar10 = local_38;
    }
    FString::PrintfImpl(&local_48,L"PLACEHOLDER-INST_of_%s",puVar10);
    puVar10 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar10 = local_48;
    }
    FName::FName(&local_res20,puVar10,1);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    puVar7 = (undefined8 *)FUN_141791c20(&local_res8,uVar6,uVar9,local_res20);
    local_res20 = *puVar7;
    lVar4 = NewObject<USaveGame>(uVar6,uVar9,local_res20,0x41,0,0,0);
    *(int *)(lVar4 + 0x30) = param_2 + 1;
    *(longlong *)(lVar11 + 0x48) = lVar4;
    local_48 = local_38;
LAB_1416efa42:
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    return 1;
  }
LAB_1416efbf2:
  FUN_1416e5930(&local_48,param_1,param_2);
  FLinkerLoad::ForceRegenerateClass(param_1,lVar4);
  FUN_1416e6ec0(&local_48);
  return 0;
}



// FUNCTION 1416efc30 FUN_1416efc30 body=716 status=ok
// SIG undefined FUN_1416efc30(void)

longlong FUN_1416efc30(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 local_res8 [16];
  longlong local_res18 [2];
  undefined1 *local_48;
  undefined1 *puStack_40;
  
  lVar9 = *param_1;
  lVar7 = 0;
  if (lVar9 == 0) {
    return 0;
  }
  puStack_40 = local_res8;
  local_res8[0] = 0;
  local_48 = &LAB_1416eb8d0;
  lVar6 = FUN_1415d8310(&local_48,&DAT_1464b49c8);
  lVar8 = lVar6 + -0x108;
  if (lVar6 == 0) {
    lVar8 = lVar7;
  }
  local_res18[0] = lVar8;
  if ((*(uint *)(lVar9 + 8) >> 4 & 1) != 0) {
    lVar6 = FObjectInitializer::GetClass(param_1);
    iVar1 = *(int *)(lVar6 + 0xc);
    lVar9 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar10 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar10;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(lVar9 + 8) >> 0x19 & 1) != 0) {
      return 0;
    }
    iVar1 = *(int *)(*(longlong *)(lVar6 + 0x30) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar10 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar10;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x19 & 1) != 0) {
      return 0;
    }
    lVar7 = param_1[1];
    cVar4 = <lambda_5c0951f19849935806a434d0556816af>::operator()(local_res18,lVar6,lVar7);
    if (cVar4 != '\0') {
      return 0;
    }
    lVar7 = FDeferredInitializationTrackerBase::Add(lVar8,lVar7,param_1);
    return lVar7;
  }
  if ((*(uint *)(lVar9 + 8) >> 0x16 & 1) == 0) {
    return 0;
  }
  lVar9 = *(longlong *)(lVar9 + 0x20);
  if (lVar9 != 0) {
    lVar8 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1416efdbe;
  }
  lVar9 = lVar7;
LAB_1416efdbe:
  lVar8 = *(longlong *)(lVar9 + 0x30);
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0xc);
    lVar6 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar10 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar10;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x19 & 1) == 0) {
      uVar2 = *(undefined8 *)(lVar8 + 0xf8);
      cVar4 = <lambda_5c0951f19849935806a434d0556816af>::operator()(local_res18,lVar9,uVar2);
      if (cVar4 == '\0') {
        puStack_40 = local_res8;
        local_48 = &LAB_1416eb8f0;
        local_res8[0] = 0;
        lVar8 = FUN_1415d8310(&local_48,&DAT_1464b49c4);
        lVar9 = lVar8 + -0x108;
        if (lVar8 == 0) {
          lVar9 = lVar7;
        }
        lVar9 = FDeferredInitializationTrackerBase::Add(lVar9,uVar2,param_1);
        if (lVar9 != 0) {
          return lVar9;
        }
      }
    }
  }
  lVar8 = 0;
  lVar9 = param_1[1];
  if ((lVar9 != 0) &&
     ((uVar5 = *(uint *)(lVar9 + 8), (uVar5 >> 10 & 1) != 0 ||
      (((uVar5 >> 0x13 & 1) != 0 && ((uVar5 >> 0x15 & 1) == 0)))))) {
    puStack_40 = local_res8;
    local_48 = &LAB_1416eb8f0;
    local_res8[0] = 0;
    lVar8 = FUN_1415d8310(&local_48,&DAT_1464b49c4);
    if (lVar8 != 0) {
      lVar7 = lVar8 + -0x108;
    }
    lVar8 = FDeferredInitializationTrackerBase::Add(lVar7,lVar9,param_1);
  }
  return lVar8;
}



// FUNCTION 1416eff00 DeferObjectPreload body=203 status=ok
// SIG undefined DeferObjectPreload(void)

undefined1 FDeferredObjInitializationHelper::DeferObjectPreload(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res10 [24];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res10;
  local_res10[0] = 0;
  local_18 = &LAB_1416eb8d0;
  lVar2 = FUN_1415d8310(&local_18,&DAT_1464b49c8);
  plVar4 = (longlong *)0x0;
  plVar3 = (longlong *)(lVar2 + -0x108);
  if (lVar2 == 0) {
    plVar3 = plVar4;
  }
  cVar1 = (**(code **)(*plVar3 + 8))(plVar3,param_1);
  if (cVar1 == '\0') {
    puStack_10 = local_res10;
    local_res10[0] = 0;
    local_18 = &LAB_1416eb8f0;
    lVar2 = FUN_1415d8310(&local_18,&DAT_1464b49c4);
    if (lVar2 != 0) {
      plVar4 = (longlong *)(lVar2 + -0x108);
    }
    cVar1 = (**(code **)(*plVar4 + 8))(plVar4,param_1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1416effd0 FUN_1416effd0 body=1250 status=ok
// SIG undefined FUN_1416effd0(void)

bool FUN_1416effd0(longlong param_1,uint param_2)

{
  int iVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  bool bVar15;
  longlong local_res18 [2];
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  int local_e0;
  undefined2 *local_d8 [20];
  
  cVar3 = FUN_14170fb20();
  if (cVar3 == '\0') {
    return false;
  }
  lVar10 = (longlong)(int)param_2 * 0x38 + *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(lVar10 + 0x20);
  if (lVar5 == 0) {
    if (((*(uint *)(param_1 + 0x290) & 0x100000) != 0) &&
       (cVar3 = FLinkerLoad::IsImportNative(param_1,param_2), cVar3 == '\0')) {
      if (DAT_1468b616c == '\0') {
        lVar5 = FindExistingImportObject(param_2,param_1 + 8);
        *(longlong *)(lVar10 + 0x20) = lVar5;
        if (lVar5 != 0) {
          return true;
        }
      }
      puVar6 = (undefined8 *)FName::ToString(lVar10 + 0x10,&local_e8);
      puVar13 = &DAT_143f3eda8;
      if (*(int *)(puVar6 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar6;
      }
      lVar5 = FindObject<UPackage>(0,puVar14,0);
      if (local_e8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)FName::ToString(lVar10 + 0x18,&local_f8);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar6;
        }
        lVar5 = FUN_140437f10(lVar5,puVar14,0);
        if (local_f8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (lVar5 != 0) {
          cVar3 = FUN_1416e2a20(lVar5);
          if (cVar3 == '\0') {
            lVar11 = FUN_14171c5d0();
            do {
              if (lVar5 == lVar11) {
                if ((int)*(uint *)(lVar10 + 8) < 0) {
                  uVar9 = ~*(uint *)(lVar10 + 8);
                  cVar3 = FUN_1416effd0(param_1,uVar9);
                  if ((cVar3 != '\0') &&
                     (lVar5 = *(longlong *)
                               ((longlong)(int)uVar9 * 0x38 + 0x20 + *(longlong *)(param_1 + 8)),
                     lVar5 != 0)) {
                    lVar11 = FUN_14171bfe0();
                    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                      bVar15 = false;
                    }
                    else {
                      bVar15 = true;
                    }
                    if (bVar15) {
                      puVar6 = (undefined8 *)FName::ToString(lVar10,local_d8);
                      if (*(int *)(puVar6 + 1) == 0) {
                        puVar14 = &DAT_143f3eda8;
                      }
                      else {
                        puVar14 = (undefined2 *)*puVar6;
                      }
                      local_f0 = 0x16;
                      local_f8 = (undefined2 *)0x0;
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
                      puVar2 = local_f8;
                      FGenericPlatformString::Memcpy(local_f8,L"PLACEHOLDER-FUNCTION_",0x2c);
                      puVar12 = &DAT_143f3eda8;
                      if ((int)local_f0 != 0) {
                        puVar12 = puVar2;
                      }
                      FString::PrintfImpl(&local_e8,L"%s_%s",puVar12,puVar14);
                      if (local_e0 != 0) {
                        puVar13 = local_e8;
                      }
                      FName::FName(local_res18,puVar13,1);
                      if (local_e8 != (undefined2 *)0x0) {
                        FMemory::Free();
                      }
                      if (puVar2 != (undefined2 *)0x0) {
                        FMemory::Free(puVar2);
                      }
                      uVar7 = ULinkerPlaceholderFunction::GetPrivateStaticClass();
                      plVar8 = (longlong *)FUN_141791c20(&local_f8,lVar5,uVar7,local_res18[0]);
                      local_res18[0] = *plVar8;
                      uVar7 = ULinkerPlaceholderFunction::GetPrivateStaticClass();
                      lVar11 = local_res18[0];
                      local_res18[1] = 0;
                      if (local_res18[0] == 0) {
                        FUN_1417846f0(lVar5,
                                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                                     );
                      }
                      plVar8 = (longlong *)FUN_1417985e0(uVar7,lVar5,lVar11,0x41,0,0,0,0,0);
                      if (param_2 != 0xffffffff) {
                        *(uint *)(plVar8 + 0x18) = ~param_2;
                      }
                      (**(code **)(*plVar8 + 0x280))(plVar8);
                      FUN_141726e60(plVar8,1);
                      *(longlong **)(lVar10 + 0x20) = plVar8;
                      local_e8 = local_d8[0];
                      goto LAB_1416f046b;
                    }
                  }
                }
                break;
              }
              lVar5 = *(longlong *)(lVar5 + 0x30);
            } while (lVar5 != 0);
          }
          else {
            puVar6 = (undefined8 *)FName::ToString(lVar10,&local_e8);
            if (*(int *)(puVar6 + 1) != 0) {
              puVar13 = (undefined2 *)*puVar6;
            }
            uVar7 = FUN_1416e2a60(*(undefined8 *)(param_1 + 0xa0),puVar13,param_2);
            *(undefined8 *)(lVar10 + 0x20) = uVar7;
LAB_1416f046b:
            if (local_e8 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
        }
      }
    }
    bVar15 = *(longlong *)(lVar10 + 0x20) == 0;
    goto LAB_1416f0482;
  }
  lVar11 = 0;
  lVar4 = ULinkerPlaceholderClass::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  if (bVar15) {
    lVar5 = lVar5 + 0x200;
LAB_1416f00c7:
    bVar15 = true;
    if (lVar5 == 0) goto LAB_1416f0482;
    if ((*(uint *)(param_1 + 0x290) & 0x100000) == 0) {
      if (*(int *)(param_1 + 0x78c) != -1) {
        iVar1 = *(int *)((longlong)*(int *)(param_1 + 0x78c) * 0x88 + 0x10 +
                        *(longlong *)(param_1 + 0x18));
        if (0 < iVar1) {
          lVar11 = *(longlong *)((longlong)iVar1 * 0x88 + *(longlong *)(param_1 + 0x18) + -0x40);
          if (lVar11 != 0) {
            lVar10 = FUN_14171bfe0();
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
            }
            if (bVar15) goto LAB_1416f0158;
          }
          lVar11 = 0;
        }
      }
LAB_1416f0158:
      local_res18[0] = 0;
      FUN_14170a9c0(param_1,lVar5,lVar11,0);
      return false;
    }
  }
  else {
    lVar10 = *(longlong *)(lVar10 + 0x20);
    lVar5 = lVar11;
    if (lVar10 != 0) {
      lVar5 = ULinkerPlaceholderFunction::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      lVar5 = 0;
      if (bVar15) {
        lVar5 = lVar10 + 0xb8;
        goto LAB_1416f00c7;
      }
    }
  }
  bVar15 = lVar5 == 0;
LAB_1416f0482:
  return !bVar15;
}



// FUNCTION 1416f04c0 FUN_1416f04c0 body=254 status=ok
// SIG undefined FUN_1416f04c0(void)

undefined8 FUN_1416f04c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [24];
  longlong local_18;
  longlong local_10;
  
  uVar2 = *(uint *)(param_2 + 8);
  if ((uVar2 >> 4 & 1) == 0) {
    local_18 = param_1;
    local_10 = param_2;
    if ((uVar2 >> 0x12 & 1) != 0) {
      uVar6 = <lambda_e7b8b159572a559b09988c79da077e7c>::operator()
                        (&local_18,*(undefined8 *)(param_2 + 0x20));
      return uVar6;
    }
    if ((uVar2 >> 0x16 & 1) != 0) {
      lVar3 = *(longlong *)(param_2 + 0x20);
      if (lVar3 != 0) {
        lVar7 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          uVar6 = <lambda_e7b8b159572a559b09988c79da077e7c>::operator()
                            (&local_18,*(undefined8 *)(lVar3 + 0xf8));
          return uVar6;
        }
      }
      return 0;
    }
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0xa8);
    plVar1 = plVar8 + *(int *)(param_1 + 0xb0);
    for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      if (*plVar8 == param_2) {
        return 0;
      }
    }
    piVar5 = (int *)TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
                    ::FindId(param_1 + 0x58,local_res10,param_2);
    if (*piVar5 != -1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1416f05c0 DeferPreload body=182 status=ok
// SIG undefined DeferPreload(void)

bool FDeferredInitializationTrackerBase::DeferPreload(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_18;
  longlong *local_10;
  
  local_res10 = param_2;
  piVar3 = (int *)TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0x58,local_res8,param_2);
  iVar2 = *piVar3;
  if (iVar2 != -1) {
    plVar4 = *(longlong **)(param_1 + 0xa8);
    plVar1 = plVar4 + *(int *)(param_1 + 0xb0);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == param_2) {
        return true;
      }
    }
    lVar5 = TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
            ::FindPair(param_1 + 0xb8,param_2,param_2);
    if (lVar5 == 0) {
      local_18 = &local_res10;
      local_10 = &local_res10;
      FUN_1405deec0(param_1 + 0xb8,local_res8,&local_18,0);
    }
  }
  return iVar2 != -1;
}



// FUNCTION 1416f0680 FUN_1416f0680 body=101 status=ok
// SIG undefined FUN_1416f0680(void)

void FUN_1416f0680(longlong param_1)

{
  longlong *plVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 800))(*(longlong **)(param_1 + 0x10),param_1,0);
  for (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x68); plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)plVar1[0xc]) {
    if ((~(byte)((ulonglong)plVar1[7] >> 0x24) & 1) != 0) {
      (**(code **)(*plVar1 + 0x328))(plVar1,*(int *)((longlong)plVar1 + 0x44) + param_1);
    }
  }
  return;
}



// FUNCTION 1416f0700 DetachLinker body=53 status=ok
// SIG undefined DetachLinker(void)

void FAsyncPackage::DetachLinker(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_141736700();
    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 800) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1416f0740 FUN_1416f0740 body=492 status=ok
// SIG undefined FUN_1416f0740(void)

char FUN_1416f0740(undefined8 param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *local_58;
  undefined8 local_50;
  longlong local_48 [4];
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_58 = (undefined2 *)0x0;
  local_50 = 0;
  FText::FText(local_28);
  cVar4 = FPackageName::TryConvertFilenameToLongPackageName(param_1,&local_58,0);
  if (cVar4 == '\0') {
    FPackageName::IsValidLongPackageName(&local_58,1,local_28);
  }
  else {
    lVar5 = FUN_1416f87e0();
    cVar4 = FString::StartsWith(&local_58,lVar5 + 0x30,1);
    if (cVar4 == '\0') {
      lVar5 = FUN_1416f87e0();
      cVar4 = FString::StartsWith(&local_58,lVar5 + 0x40,1);
      if (cVar4 == '\0') {
        cVar4 = FPackageName::IsValidLongPackageName(&local_58,1,local_28);
        if (cVar4 != '\0') {
          local_48[2] = 0;
          local_48[3] = 0;
          local_48[0] = 0;
          local_48[1] = 0;
          cVar4 = FUN_14170f420(&local_58,local_48,local_48 + 2);
          if (cVar4 == '\0') {
            puVar6 = &DAT_143f3eda8;
            if ((int)local_50 != 0) {
              puVar6 = local_58;
            }
            LowLevelFatalErrorHandler
                      ("Unknown",0x1bc,
                       L"LongPackageNameToFilename failed to convert \'%s\'. Path does not map to any roots."
                       ,puVar6);
            puVar6 = &DAT_143f3eda8;
            if ((int)local_50 != 0) {
              puVar6 = local_58;
            }
            FDebug::AssertFailed
                      (&DAT_144cf0424,"Unknown",0x1bc,
                       L"LongPackageNameToFilename failed to convert \'%s\'. Path does not map to any roots."
                       ,puVar6);
          }
          if (local_48[2] != 0) {
            FMemory::Free();
          }
          cVar4 = FUN_1416f6770(local_48,local_48,param_4);
          if ((cVar4 != '\0') && (param_3 != 0)) {
            FString::operator=(param_3,local_48);
          }
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          goto LAB_1416f07a2;
        }
      }
    }
  }
  cVar4 = '\0';
LAB_1416f07a2:
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return cVar4;
}



// FUNCTION 1416f0930 DoesPackageNameContainInvalidCharacters body=845 status=ok
// SIG undefined DoesPackageNameContainInvalidCharacters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FPackageName::DoesPackageNameContainInvalidCharacters(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  short sVar7;
  short *psVar8;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  short local_168 [4];
  longlong local_160;
  undefined8 local_158;
  longlong local_150 [2];
  undefined1 local_140 [8];
  longlong *local_138;
  undefined4 *local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [24];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  psVar8 = &DAT_144cf0530;
  local_168[1] = 0;
  sVar7 = 0x5c;
  local_160 = 0;
  local_158 = 0;
  do {
    local_178 = 0xffffffff;
    local_168[0] = sVar7;
    iVar4 = FUN_141592950(param_1,local_168,0,0);
    if ((iVar4 != -1) && (sVar7 = *psVar8, sVar7 != 0)) {
      iVar4 = (int)local_158 + -1;
      if ((int)local_158 < 1) {
        iVar4 = 0;
      }
      iVar5 = ((int)local_158 < 1) + 1 + (int)local_158;
      local_158 = CONCAT44(local_158._4_4_,iVar5);
      if (local_158._4_4_ < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_160);
      }
      *(short *)(local_160 + (longlong)iVar4 * 2) = sVar7;
      *(undefined2 *)(local_160 + 2 + (longlong)iVar4 * 2) = 0;
    }
    sVar7 = psVar8[1];
    psVar8 = psVar8 + 1;
  } while (sVar7 != 0);
  if (((int)local_158 == 0) || ((int)local_158 == 1)) {
    uVar6 = 0;
  }
  else {
    if (param_2 != 0) {
      local_c8 = 0;
      local_c0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0xffffffff;
      local_94 = 0;
      local_88 = 0;
      local_80 = 0;
      uVar6 = FText::FromString(local_128,&local_160);
      local_78[0] = 4;
      FText::FText(local_68,uVar6);
      local_50 = '\x01';
      local_150[0] = 0;
      local_150[1] = 0x16;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_150,0);
      FGenericPlatformString::Memcpy(local_150[0],L"IllegalNameCharacters",0x2c);
      local_138 = local_150;
      local_130 = local_78;
      FUN_1407484b0(&local_c8,local_140,&local_138,0);
      if (local_150[0] != 0) {
        FMemory::Free();
      }
      if (local_50 != '\0') {
        local_50 = '\0';
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
      }
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_120 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar2 = (int *)((longlong)local_120 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_f8,
                         L"Name may not contain the following characters: \'{IllegalNameCharacters}\'"
                         ,L"Core",L"PackageNameContainsInvalidCharacters");
      uVar6 = FTextFormat::FTextFormat(local_e0,uVar6);
      uVar6 = FText::Format(local_110,uVar6,&local_c8);
      FText::operator=(param_2,uVar6);
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_108 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar2 = (int *)((longlong)local_108 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_108 + 8))(local_108,1);
          }
        }
      }
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f0 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)local_f0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
      local_80 = 0;
      if (local_88 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_c8);
    }
    uVar6 = 1;
  }
  if (local_160 != 0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 1416f0c80 DuplicateAllFields body=314 status=ok
// SIG undefined DuplicateAllFields(void)

void FBlueprintSupport::DuplicateAllFields(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  longlong local_20;
  longlong local_18;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  if (param_1 != 0) {
    local_18 = *(longlong *)(param_1 + 0x38);
    local_10 = 0xffffffff;
    local_c = 0x100;
    local_a = 0;
    local_20 = param_1;
    FUN_1416fd4e0(&local_20);
    lVar2 = local_18;
    while (lVar2 != 0) {
      local_18 = lVar2;
      lVar3 = FUN_14171c5d0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar3 = lVar2;
      if (!bVar1) {
        lVar3 = 0;
      }
      if (lVar3 != 0) {
        local_30 = *(longlong *)(lVar3 + 0x38);
        local_28 = 0xffffffff;
        local_24 = 0x100;
        local_22 = 0;
        local_38 = lVar3;
        FUN_1416fd4e0(&local_38);
        lVar3 = local_30;
        while (local_30 = lVar3, lVar3 != 0) {
          FDuplicateDataWriter::GetDuplicatedObject(param_2,lVar3,1);
          local_30 = *(longlong *)(lVar3 + 0x28);
          FUN_1416fd4e0(&local_38);
          lVar3 = local_30;
        }
      }
      FDuplicateDataWriter::GetDuplicatedObject(param_2,lVar2,1);
      local_18 = *(longlong *)(lVar2 + 0x28);
      FUN_1416fd4e0(&local_20);
      lVar2 = local_18;
    }
  }
  return;
}



// FUNCTION 1416f0dc0 FUN_1416f0dc0 body=114 status=ok
// SIG undefined FUN_1416f0dc0(void)

void FUN_1416f0dc0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 4;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 1416f0e40 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FName,FEDLBootObjectState>,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1416f0f00 Empty body=451 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_1416f0fd1;
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
LAB_1416f0fd1:
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
      lVar5 = (longlong)iStack_2c * 0x60 + *param_1;
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 8);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
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



// FUNCTION 1416f10d0 FUN_1416f10d0 body=911 status=ok
// SIG undefined FUN_1416f10d0(void)

void FUN_1416f10d0(longlong param_1)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  void *_Dst;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  bool bVar13;
  uint local_a8;
  uint uStack_a4;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1b0);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar9 = 0;
  uStack_a4 = 1;
  uVar5 = *(uint *)(param_1 + 0x188);
  puVar1 = (uint *)(param_1 + 0x170);
  local_a8 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar5 != 0) {
    puVar12 = *(uint **)(param_1 + 0x180);
    if (*(uint **)(param_1 + 0x180) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = *puVar12;
    uVar10 = uVar9;
    uVar6 = uVar9;
    while (uVar11 == 0) {
      iVar4 = (int)uVar10;
      uStack_90 = (int)uVar6 + 0x20;
      uVar6 = (ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      uVar10 = (ulonglong)local_a8;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1416f11bf;
      uVar11 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = -uVar11 & uVar11;
    iVar4 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar5 < (int)uStack_94) {
LAB_1416f11bf:
      uStack_94 = uVar5;
    }
  }
  uStack_74 = *(uint *)(param_1 + 0x188);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  local_40 = CONCAT44(uStack_8c,uStack_90);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_50 = puVar1;
  if (uStack_74 != uVar5) {
    puVar12 = *(uint **)(param_1 + 0x180);
    if (*(uint **)(param_1 + 0x180) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar8 = puVar12[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
    iVar4 = (int)uStack_74 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1416f129c;
      uVar8 = puVar12[(longlong)iVar4 + 1];
      iVar4 = iVar4 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar4 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    if ((int)uVar5 < (int)uStack_74) {
LAB_1416f129c:
      uStack_74 = uVar5;
    }
  }
  do {
    if ((uStack_44 == uStack_74) && (local_50 == puVar1)) {
      *(undefined4 *)(param_1 + 0x168) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x16c)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0x160),0);
      }
      *(undefined4 *)(param_1 + 400) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x194) = 0;
      iVar4 = *(int *)(param_1 + 0x188) + 0x1f;
      _Dst = *(void **)(param_1 + 0x180);
      if (*(void **)(param_1 + 0x180) == (void *)0x0) {
        _Dst = (void *)(param_1 + 0x170);
      }
      _guard_xfg_dispatch_icall_nop
                (_Dst,0,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
      *(undefined4 *)(param_1 + 0x188) = 0;
      if (0 < (int)*(uint *)(param_1 + 0x1a8)) {
        uVar10 = (ulonglong)*(uint *)(param_1 + 0x1a8);
        do {
          lVar7 = *(longlong *)(param_1 + 0x1a0);
          if (*(longlong *)(param_1 + 0x1a0) == 0) {
            lVar7 = param_1 + 0x198;
          }
          uVar6 = (longlong)*(int *)(param_1 + 0x1a8) - 1U & uVar9;
          uVar9 = uVar9 + 1;
          *(undefined4 *)(lVar7 + uVar6 * 4) = 0xffffffff;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
                    /* WARNING: Could not recover jumptable at 0x0001416f1458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)(int)uStack_44 * 0x10);
    if (lVar7 != 0) {
      cVar2 = FUN_1417904d0(lVar7);
      if (cVar2 == '\0') {
        LowLevelFatalErrorHandler("Unknown",0x159c,L"Invalid object in Async Objects Referencer");
        FDebug::AssertFailed
                  (&DAT_144cf0df2,"Unknown",0x159c,L"Invalid object in Async Objects Referencer");
      }
      uVar5 = *(uint *)(lVar7 + 0xc);
      uVar10 = uVar9;
      if ((int)uVar5 < (int)DAT_1469e91c4) {
        uVar11 = uVar5 & 0xffff;
        if ((int)uVar5 < 0) {
          uVar5 = uVar5 + 0xffff;
          uVar11 = uVar11 - 0x10000;
        }
        uVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                 (longlong)(int)uVar11 * 0x18;
      }
      uVar5 = *(uint *)(uVar10 + 8);
      while ((uVar5 & 0xc000000) != 0) {
        LOCK();
        bVar13 = uVar5 == *(uint *)(uVar10 + 8);
        if (bVar13) {
          *(uint *)(uVar10 + 8) = uVar5 & 0xf3ffffff;
        }
        UNLOCK();
        if (bVar13) break;
        uVar5 = *(uint *)(uVar10 + 8);
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  } while( true );
}



// FUNCTION 1416f1460 FUN_1416f1460 body=25 status=ok
// SIG undefined FUN_1416f1460(void)

void FUN_1416f1460(longlong param_1)

{
  if (*(int *)(param_1 + 0x110) == 2) {
    *(undefined4 *)(param_1 + 0x110) = 3;
    FArchiveAsync2::FlushPrecacheBlock();
    return;
  }
  return;
}



// FUNCTION 1416f1480 thunk_FUN_1416f87e0 body=5 status=ok
// SIG undefined thunk_FUN_1416f87e0(void)

void thunk_FUN_1416f87e0(void)

{
  FUN_1416f87e0();
  return;
}



// FUNCTION 1416f1490 FUN_1416f1490 body=2059 status=ok
// SIG undefined FUN_1416f1490(void)

void FUN_1416f1490(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined *puVar10;
  uint uVar11;
  char *pcVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  uint local_res8 [2];
  int local_res10;
  longlong local_res18;
  ulonglong in_stack_ffffffffffffff78;
  ulonglong uVar20;
  undefined8 in_stack_ffffffffffffff80;
  longlong local_58 [2];
  longlong local_48 [2];
  
  uVar4 = (uint)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  lVar9 = *(longlong *)(param_1 + 0x50);
  puVar14 = (undefined8 *)((longlong)param_2 * 0x88 + *(longlong *)(lVar9 + 0x18));
  local_res10 = param_2;
  if ((((((puVar14[9] != 0) || (*(char *)((longlong)puVar14 + 0x59) != '\0')) ||
        (*(char *)((longlong)puVar14 + 0x5b) != '\0')) ||
       ((*(char *)(lVar9 + 0x1f0) != '\0' && (*(char *)((longlong)puVar14 + 0x56) != '\0')))) ||
      ((*(char *)(lVar9 + 0x1f1) != '\0' && (*(char *)((longlong)puVar14 + 0x55) != '\0')))) ||
     (*(int *)((longlong)puVar14 + 0x14) == 0)) goto LAB_1416f16e3;
  lVar19 = 0;
  *(wchar_t **)(param_1 + 0xe0) = L"EventDrivenCreateExport";
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (*(char *)((longlong)puVar14 + 0x5a) == '\x01') {
    puVar5 = (undefined8 *)
             FLinker::GetExportPathName
                       (lVar9,local_58,param_2,0,in_stack_ffffffffffffff78 & 0xffffffffffffff00);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*puVar5;
    }
    puVar5 = (undefined8 *)FName::FName(local_res8,puVar13,1);
    uVar6 = ConstructDynamicType(*puVar5,0);
    puVar14[9] = uVar6;
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    lVar9 = puVar14[9];
    lVar15 = lVar19;
    if (lVar9 != 0) {
      lVar7 = UDynamicClass::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar15 = *(longlong *)(lVar9 + 0xf8);
      }
    }
    if ((DAT_1464aaa49 == '\0') && (DAT_1469e91ac == '\0')) {
LAB_1416f166c:
      if (lVar15 != 0) {
        FUN_1416ea3b0(param_1,lVar15);
      }
    }
    else {
      iVar1 = *(int *)(puVar14[9] + 0xc);
      lVar9 = lVar19;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar11 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar11;
        lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar11) * 0x18;
      }
      *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 0x40000000;
      if (lVar15 != 0) {
        iVar1 = *(int *)(lVar15 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar11 = iVar1 >> 0x1f & 0xffff;
          uVar4 = iVar1 + uVar11;
          lVar19 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                   (longlong)(int)((uVar4 & 0xffff) - uVar11) * 0x18;
        }
        *(uint *)(lVar19 + 8) = *(uint *)(lVar19 + 8) | 0x40000000;
        goto LAB_1416f166c;
      }
    }
    lVar9 = puVar14[9];
LAB_1416f16cf:
    if (lVar9 == 0) goto LAB_1416f16e3;
  }
  else {
    iVar1 = *(int *)(puVar14 + 2);
    if (*(char *)((longlong)puVar14 + 0x5a) == '\x02') {
      if ((iVar1 == 0) ||
         (plVar8 = (longlong *)FUN_1416f1ca0(param_1,iVar1,1,param_2 + 1), plVar8 == (longlong *)0x0
         )) goto LAB_1416f18d0;
      lVar9 = plVar8[0x1f];
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x368))(plVar8);
        lVar9 = plVar8[0x1f];
      }
      puVar14[9] = lVar9;
      goto LAB_1416f16cf;
    }
    if (iVar1 == 0) {
      plVar8 = (longlong *)FUN_14171bfe0();
    }
    else {
      plVar8 = (longlong *)FUN_1416f1ca0(param_1,iVar1,1,param_2 + 1);
      if (plVar8 == (longlong *)0x0) goto LAB_1416f18d0;
    }
    if (plVar8 == (longlong *)0x0) goto LAB_1416f18d0;
    if (*(int *)(puVar14 + 1) == 0) {
      if (*(char *)((longlong)puVar14 + 0x54) != '\0') goto LAB_1416f18d0;
      local_res18 = *(longlong *)(param_1 + 0x58);
    }
    else {
      local_res18 = FUN_1416f1ca0(param_1,*(undefined4 *)(puVar14 + 1),0,param_2 + 1);
    }
    if (local_res18 == 0) goto LAB_1416f18d0;
    uVar11 = 0;
    uVar20 = in_stack_ffffffffffffff78 & 0xffffffffffffff00;
    lVar9 = StaticFindObjectFastInternal(0,local_res18,*puVar14,1,uVar20,(ulonglong)uVar4 << 0x20,0)
    ;
    if ((lVar9 != 0) && (*(longlong **)(lVar9 + 0x10) == plVar8)) {
      puVar14[9] = lVar9;
    }
    if (puVar14[9] != 0) {
      if (*(char *)((longlong)puVar14 + 0x54) == '\0') {
        FUN_1417a7660(puVar14[9],*(undefined8 *)(param_1 + 0x50),param_2,1);
        uVar4 = *(uint *)(puVar14[9] + 8);
        if ((uVar4 >> 0x15 & 1) == 0) {
          if ((uVar4 >> 0x1b & 1) == 0) {
            puVar5 = (undefined8 *)UObjectBaseUtility::GetFullName(puVar14[9],local_58,0);
            puVar13 = &DAT_143f3eda8;
            if (*(int *)(puVar5 + 1) == 0) {
              puVar16 = &DAT_143f3eda8;
            }
            else {
              puVar16 = (undefined2 *)*puVar5;
            }
            LowLevelFatalErrorHandler
                      ("Unknown",0xd33,
                       L"%s was found in memory and is an export but does not have all load flags.",
                       puVar16);
            if (local_58[0] != 0) {
              FMemory::Free();
            }
            puVar5 = (undefined8 *)UObjectBaseUtility::GetFullName(puVar14[9],local_58,0);
            if (*(int *)(puVar5 + 1) != 0) {
              puVar13 = (undefined2 *)*puVar5;
            }
            FDebug::AssertFailed
                      (&DAT_144cf092e,"Unknown",0xd33,
                       L"%s was found in memory and is an export but does not have all load flags.",
                       puVar13);
            if (local_58[0] != 0) {
              FMemory::Free();
            }
          }
          lVar9 = puVar14[9];
          uVar4 = *(uint *)(lVar9 + 8);
          if ((uVar4 >> 4 & 1) == 0) {
            *(uint *)(lVar9 + 8) = uVar4 | 0x83400;
            *(uint *)(puVar14[9] + 8) = *(uint *)(puVar14[9] + 8) & 0xf7ffffff;
          }
          else {
            *(uint *)(lVar9 + 8) = uVar4 | 0x81400;
            *(uint *)(puVar14[9] + 8) = *(uint *)(puVar14[9] + 8) & 0xf7ffffff;
          }
        }
      }
      goto LAB_1416f16e3;
    }
    if (lVar9 != 0) {
      for (plVar2 = *(longlong **)(lVar9 + 0x10); plVar2 != (longlong *)0x0;
          plVar2 = (longlong *)plVar2[6]) {
        if (plVar2 == plVar8) goto LAB_1416f18d9;
      }
      goto LAB_1416f18d0;
    }
LAB_1416f18d9:
    lVar9 = FUN_1416f1ca0(param_1,*(undefined4 *)((longlong)puVar14 + 0x1c),1,param_2 + 1);
    if (lVar9 == 0) goto LAB_1416f18d0;
    UObject::ConditionalPostLoadSubobjects(lVar9,0);
    local_res8[0] = *(uint *)(puVar14 + 4) | 0x83400;
    uVar6 = *puVar14;
    if ((*(uint *)(plVar8 + 1) >> 10 & 1) != 0) {
      puVar5 = (undefined8 *)FName::ToString(puVar14,local_48);
      puVar13 = &DAT_143f3eda8;
      if (*(int *)(puVar5 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar5;
      }
      puVar5 = (undefined8 *)UObjectBaseUtility::GetFullName(plVar8,local_58,0);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar5;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0xd8e,L"LoadClass %s had RF_NeedLoad while creating %s",puVar17,puVar16);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      puVar5 = (undefined8 *)FName::ToString(puVar14,local_58);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar5;
      }
      puVar5 = (undefined8 *)UObjectBaseUtility::GetFullName(plVar8,local_48,0);
      if (*(int *)(puVar5 + 1) != 0) {
        puVar13 = (undefined2 *)*puVar5;
      }
      pwVar18 = L"LoadClass %s had RF_NeedLoad while creating %s";
      uVar6 = 0xd8e;
      pcVar12 = "Unknown";
      puVar10 = &DAT_144cf0993;
LAB_1416f1ae4:
      FDebug::AssertFailed(puVar10,pcVar12,uVar6,pwVar18,puVar13,puVar16);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
        *(undefined1 *)((longlong)puVar14 + 0x59) = 1;
        return;
      }
LAB_1416f18d0:
      *(undefined1 *)((longlong)puVar14 + 0x59) = 1;
      return;
    }
    lVar15 = plVar8[0x1f];
    if (lVar15 == 0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      lVar15 = plVar8[0x1f];
    }
    if ((*(uint *)(lVar15 + 8) >> 10 & 1) != 0) {
      puVar5 = (undefined8 *)FName::ToString(puVar14,local_58);
      puVar13 = &DAT_143f3eda8;
      if (*(int *)(puVar5 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar5;
      }
      puVar5 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar15,local_48,0);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar5;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0xd96,L"Class CDO %s had RF_NeedLoad while creating %s",puVar17,puVar16);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      puVar5 = (undefined8 *)FName::ToString(puVar14,local_58);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar5;
      }
      puVar5 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar15,local_48,0);
      if (*(int *)(puVar5 + 1) != 0) {
        puVar13 = (undefined2 *)*puVar5;
      }
      pwVar18 = L"Class CDO %s had RF_NeedLoad while creating %s";
      uVar6 = 0xd96;
      pcVar12 = "Unknown";
      puVar10 = &DAT_144cf099a;
      goto LAB_1416f1ae4;
    }
    if ((*(uint *)(lVar9 + 8) >> 10 & 1) != 0) {
      puVar5 = (undefined8 *)FName::ToString(puVar14,local_58);
      puVar13 = &DAT_143f3eda8;
      if (*(int *)(puVar5 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar5;
      }
      puVar5 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar9,local_48,0);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar5;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0xd9d,L"Template %s had RF_NeedLoad while creating %s",puVar17,puVar16);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      puVar5 = (undefined8 *)FName::ToString(puVar14,local_58);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar5;
      }
      puVar5 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar9,local_48,0);
      if (*(int *)(puVar5 + 1) != 0) {
        puVar13 = (undefined2 *)*puVar5;
      }
      pwVar18 = L"Template %s had RF_NeedLoad while creating %s";
      uVar6 = 0xd9d;
      pcVar12 = "Unknown";
      puVar10 = &DAT_144cf099b;
      goto LAB_1416f1ae4;
    }
    lVar9 = FUN_1417985e0(plVar8,local_res18,uVar6,local_res8[0],uVar20 & 0xffffffff00000000,lVar9,
                          uVar11 & 0xffffff00,0,1);
    puVar14[9] = lVar9;
    if ((DAT_1464aaa49 != '\0') || (DAT_1469e91ac != '\0')) {
      iVar1 = *(int *)(lVar9 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar11 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar11;
        lVar19 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                 (longlong)(int)((uVar4 & 0xffff) - uVar11) * 0x18;
      }
      *(uint *)(lVar19 + 8) = *(uint *)(lVar19 + 8) | 0x40000000;
    }
    lVar9 = puVar14[9];
    param_2 = local_res10;
  }
  FUN_1417a7660(lVar9,*(undefined8 *)(param_1 + 0x50),param_2,1);
LAB_1416f16e3:
  if (puVar14[9] == 0) {
    *(undefined1 *)((longlong)puVar14 + 0x59) = 1;
    uVar6 = 0;
  }
  else {
    FUN_1416ea3b0(param_1,puVar14[9]);
    uVar6 = puVar14[9];
  }
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
  return;
}



// FUNCTION 1416f1ca0 FUN_1416f1ca0 body=1378 status=ok
// SIG undefined FUN_1416f1ca0(void)

longlong FUN_1416f1ca0(longlong param_1,uint param_2,char param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  char *pcVar12;
  undefined8 uVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  undefined2 *puVar19;
  undefined1 local_res10 [8];
  char local_res18;
  code *local_58;
  undefined1 *puStack_50;
  code *local_48;
  undefined8 uStack_40;
  
  lVar17 = 0;
  if (param_2 == 0) {
    return 0;
  }
  puVar19 = &DAT_143f3eda8;
  local_res18 = param_3;
  if ((int)param_2 < 1) {
    if ((int)param_2 < 0) {
      lVar17 = *(longlong *)
                ((longlong)(int)~param_2 * 0x38 + 0x20 +
                *(longlong *)(*(longlong *)(param_1 + 0x50) + 8));
      goto LAB_1416f1d1c;
    }
LAB_1416f1d25:
    uStack_40 = (undefined1 *)(ulonglong)param_2;
    if ((int)param_2 < 0) {
      iVar8 = -2;
      iVar3 = *(int *)(param_1 + 0x508) + param_2 * -2;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x50c);
      iVar8 = param_2 * 3 + -3;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x4f0) + 0x15 + (longlong)(iVar8 + iVar3) * 0x18) == '\0')
    {
      if ((int)param_2 < 0) {
        iVar3 = *(int *)(param_1 + 0x508) + param_2 * -2 + -2;
      }
      else {
        iVar3 = param_2 * 3 + -3 + *(int *)(param_1 + 0x50c);
      }
      if (*(char *)(*(longlong *)(param_1 + 0x4f0) + 0x14 + (longlong)iVar3 * 0x18) != '\0')
      goto LAB_1416f1f15;
    }
    uStack_40 = local_res10;
    local_48 = FUN_1406ddef0;
    local_res10[0] = 0;
    local_58 = (code *)FUN_1415d8310(&local_48,&DAT_14622e6dc);
    lVar18 = *(longlong *)(local_58 + 0x68);
    if (lVar18 != 0) {
      lVar5 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((int)param_2 < 0) {
          plVar16 = (longlong *)
                    ((longlong)(int)~param_2 * 0x38 +
                    *(longlong *)(*(longlong *)(param_1 + 0x50) + 8));
        }
        else {
          plVar16 = (longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) +
                    (longlong)(int)param_2 * 0x88 + -0x88);
        }
        plVar6 = (longlong *)UClass::GetDefaultObjectName(lVar18,&local_48);
        if (*plVar16 == *plVar6) goto LAB_1416f1f15;
      }
    }
    if (*(longlong *)(local_58 + 0x68) != 0) {
      UObjectBaseUtility::GetOutermost();
    }
    puVar7 = (undefined8 *)FLinker::GetPathName(*(undefined8 *)(param_1 + 0x50),&local_48,param_2);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar7;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xc6f,
               L"Missing Dependency, request for %s but it was still waiting for creation.",puVar15)
    ;
    if (local_48 != (code *)0x0) {
      FMemory::Free();
    }
    puVar7 = (undefined8 *)FLinker::GetPathName(*(undefined8 *)(param_1 + 0x50),&local_48,param_2);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar7;
    }
    FDebug::AssertFailed
              (&DAT_144cf05eb,"Unknown",0xc6f,
               L"Missing Dependency, request for %s but it was still waiting for creation.",puVar15)
    ;
    if (local_48 != (code *)0x0) {
      FMemory::Free();
    }
  }
  else {
    lVar17 = *(longlong *)
              ((longlong)(int)param_2 * 0x88 + -0x40 +
              *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18));
LAB_1416f1d1c:
    if (lVar17 == 0) goto LAB_1416f1d25;
  }
LAB_1416f1f15:
  lVar18 = 0;
  if ((local_res18 == '\0') || (cVar2 = FUN_1416fbe60(lVar17), cVar2 != '\0')) goto LAB_1416f2113;
  uStack_40 = (undefined1 *)CONCAT44(1,param_2);
  if (param_4 == 0) {
    puStack_50 = local_res10;
    local_res10[0] = 0;
    local_58 = FUN_1406ddef0;
    lVar5 = FUN_1415d8310(&local_58,&DAT_14622e6dc);
    if (*(longlong *)(lVar5 + 0x68) != 0) {
      UObjectBaseUtility::GetOutermost();
    }
  }
  if (lVar17 == 0) {
    return 0;
  }
  iVar3 = (int)((ulonglong)uStack_40 >> 0x20);
  if ((int)param_2 < 0) {
    iVar9 = iVar3 + -2;
    iVar8 = *(int *)(param_1 + 0x508) + param_2 * -2;
  }
  else {
    iVar9 = param_2 * 3 + -3;
    iVar8 = *(int *)(param_1 + 0x50c) + iVar3;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x4f0) + 0x15 + (longlong)(iVar9 + iVar8) * 0x18) == '\0') {
    if ((int)param_2 < 0) {
      iVar3 = *(int *)(param_1 + 0x508) + param_2 * -2 + -2 + iVar3;
    }
    else {
      iVar3 = param_2 * 3 + -3 + *(int *)(param_1 + 0x50c) + iVar3;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x4f0) + 0x14 + (longlong)iVar3 * 0x18) == '\0')
    goto LAB_1416f207e;
    puVar7 = (undefined8 *)FLinker::GetPathName(*(undefined8 *)(param_1 + 0x50),&local_48,param_2);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar7;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xc8e,
               L"Missing Dependency, request for %s but it was still has RF_NeedLoad.",puVar15);
    if (local_48 != (code *)0x0) {
      FMemory::Free();
    }
    puVar7 = (undefined8 *)FLinker::GetPathName(*(undefined8 *)(param_1 + 0x50),&local_48,param_2);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar7;
    }
    pwVar14 = L"Missing Dependency, request for %s but it was still has RF_NeedLoad.";
    uVar13 = 0xc8e;
    pcVar12 = "Unknown";
    puVar10 = &DAT_144cf0682;
  }
  else {
LAB_1416f207e:
    puVar7 = (undefined8 *)FLinker::GetPathName(*(undefined8 *)(param_1 + 0x50),&local_48,param_2);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar7;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xc8a,
               L"Missing Dependency, request for %s but it was still waiting for serialization.",
               puVar15);
    if (local_48 != (code *)0x0) {
      FMemory::Free();
    }
    puVar7 = (undefined8 *)FLinker::GetPathName(*(undefined8 *)(param_1 + 0x50),&local_48,param_2);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar7;
    }
    pwVar14 = L"Missing Dependency, request for %s but it was still waiting for serialization.";
    uVar13 = 0xc8a;
    pcVar12 = "Unknown";
    puVar10 = &DAT_144cf05ef;
  }
  FDebug::AssertFailed(puVar10,pcVar12,uVar13,pwVar14,puVar15);
  if (local_48 != (code *)0x0) {
    FMemory::Free();
  }
LAB_1416f2113:
  if (lVar17 != 0) {
    iVar3 = *(int *)(lVar17 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar11 = iVar3 >> 0x1f & 0xffff;
      uVar4 = iVar3 + uVar11;
      lVar18 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar11) * 0x18;
    }
    if ((*(uint *)(lVar18 + 8) >> 0x1c & 1) != 0) {
      puVar7 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar17,&local_48,0);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0xc93,
                 L"Returning an object  (%s) from EventDrivenIndexToObject that is unreachable.",
                 puVar15);
      if (local_48 != (code *)0x0) {
        FMemory::Free();
      }
      puVar7 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar17,&local_48,0);
      if (*(int *)(puVar7 + 1) != 0) {
        puVar19 = (undefined2 *)*puVar7;
      }
      FDebug::AssertFailed
                (&DAT_144cf0683,"Unknown",0xc93,
                 L"Returning an object  (%s) from EventDrivenIndexToObject that is unreachable.",
                 puVar19);
      if (local_48 != (code *)0x0) {
        FMemory::Free();
      }
    }
  }
  return lVar17;
}



// FUNCTION 1416f2210 EventDrivenLoadingComplete body=131 status=ok
// SIG undefined EventDrivenLoadingComplete(void)

void FAsyncPackage::EventDrivenLoadingComplete(longlong param_1)

{
  longlong lVar1;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FEventLoadNodeArray::GetAddedNodes(param_1 + 0x4a8,&local_18,param_1);
  lVar1 = local_18;
  if (local_18 != (longlong)(int)local_10 * 0x10 + local_18) {
    RemoveAllNodes(param_1);
  }
  *(undefined4 *)(param_1 + 0x490) = 0;
  if (*(int *)(param_1 + 0x494) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x488,0);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 1416f22a0 FUN_1416f22a0 body=1440 status=ok
// SIG undefined FUN_1416f22a0(void)

void FUN_1416f22a0(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined2 *puVar15;
  code *pcVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  ulonglong in_stack_ffffffffffffff98;
  code *local_58;
  undefined1 *puStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  
  lVar14 = (longlong)param_2 * 0x88 + *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18);
  plVar2 = *(longlong **)(lVar14 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x295) != '\0') {
      lVar14 = UDynamicClass::GetPrivateStaticClass();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar14 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8) !=
          lVar14 + 0x88)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        puVar9 = (undefined8 *)
                 FLinker::GetExportPathName
                           (*(undefined8 *)(param_1 + 0x50),&local_58,param_2,0,
                            in_stack_ffffffffffffff98 & 0xffffffffffffff00);
        if (*(int *)(puVar9 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar9;
        }
        puVar9 = (undefined8 *)FName::FName(&local_res8,puVar15,1);
        ConstructDynamicType(*puVar9,1);
        if (local_58 != (code *)0x0) {
          FMemory::Free();
        }
      }
      *(uint *)(plVar2 + 1) = *(uint *)(plVar2 + 1) & 0xf7fffbff;
      return;
    }
    if ((*(uint *)(plVar2 + 1) >> 10 & 1) != 0) {
      *(longlong **)(param_1 + 0xd8) = plVar2;
      *(wchar_t **)(param_1 + 0xe0) = L"EventDrivenSerializeExport";
      lVar10 = FUN_14171cb10();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((bVar8) && (*(int *)(lVar14 + 0x18) != 0)) {
        lVar10 = FUN_1416f1ca0(param_1,*(int *)(lVar14 + 0x18),
                               CONCAT71((int7)((ulonglong)(lVar10 + 0x88) >> 8),1),param_2 + 1);
        if (lVar10 == 0) {
          puVar9 = (undefined8 *)FName::ToString(lVar14,&local_48);
          puVar15 = &DAT_143f3eda8;
          if (*(int *)(puVar9 + 1) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = (undefined2 *)*puVar9;
          }
          iVar1 = *(int *)(lVar14 + 0x18);
          if (iVar1 < 0) {
            lVar10 = (longlong)(-1 - iVar1) * 0x38 +
                     *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
          }
          else {
            lVar10 = (longlong)(iVar1 + -1) * 0x88 +
                     *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18);
          }
          puVar9 = (undefined8 *)FName::ToString(lVar10,&local_58);
          if (*(int *)(puVar9 + 1) == 0) {
            puVar17 = &DAT_143f3eda8;
          }
          else {
            puVar17 = (undefined2 *)*puVar9;
          }
          LowLevelFatalErrorHandler
                    ("Unknown",0xe11,L"Could not find SuperStruct %s to create %s",puVar17,puVar18);
          if (local_58 != (code *)0x0) {
            FMemory::Free();
          }
          if (CONCAT44(uStack_44,local_48) != 0) {
            FMemory::Free();
          }
          puVar9 = (undefined8 *)FName::ToString(lVar14,&local_58);
          if (*(int *)(puVar9 + 1) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = (undefined2 *)*puVar9;
          }
          iVar1 = *(int *)(lVar14 + 0x18);
          if (iVar1 < 0) {
            lVar10 = (longlong)(-1 - iVar1) * 0x38 +
                     *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
          }
          else {
            lVar10 = (longlong)(iVar1 + -1) * 0x88 +
                     *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18);
          }
          puVar9 = (undefined8 *)FName::ToString(lVar10,&local_48);
          if (*(int *)(puVar9 + 1) != 0) {
            puVar15 = (undefined2 *)*puVar9;
          }
          FDebug::AssertFailed
                    (&DAT_144cf099d,"Unknown",0xe11,L"Could not find SuperStruct %s to create %s",
                     puVar15,puVar18);
          if (CONCAT44(uStack_44,local_48) != 0) {
            FMemory::Free();
          }
          if (local_58 != (code *)0x0) {
            FMemory::Free();
          }
          *(undefined1 *)(lVar14 + 0x59) = 1;
          return;
        }
        (**(code **)(*plVar2 + 0x2c8))(plVar2,lVar10);
        lVar10 = FUN_14171bfe0();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          (**(code **)(*plVar2 + 0x280))(plVar2);
        }
      }
      if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x2a2) == '\0') {
        lVar10 = 0;
      }
      else {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x318);
      }
      lVar3 = *(longlong *)(lVar10 + 0xd8);
      lVar4 = (*(longlong **)(lVar10 + 8))[2];
      lVar5 = **(longlong **)(lVar10 + 8);
      FArchiveAsync2::Seek(lVar10,*(undefined8 *)(lVar14 + 0x30));
      *(uint *)(plVar2 + 1) = *(uint *)(plVar2 + 1) & 0xfffffbff;
      puStack_50 = local_res10;
      local_res10[0] = 0;
      local_58 = FUN_1406ddef0;
      local_48 = 0x406ddef0;
      uStack_44 = 1;
      puStack_40 = puStack_50;
      lVar11 = FUN_1415d8310(&local_48,&DAT_14622e6dc);
      local_res8 = *(undefined8 *)(lVar11 + 0x68);
      *(longlong **)(lVar11 + 0x68) = plVar2;
      *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x2a0) = 1;
      uVar12 = FUN_1416f1ca0(param_1,*(undefined4 *)(lVar14 + 0x1c),1,param_2 + 1);
      *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x298) = uVar12;
      if ((*(uint *)(plVar2 + 1) >> 4 & 1) == 0) {
        (**(code **)(*plVar2 + 0xa8))(plVar2,*(longlong *)(param_1 + 0x50) + 0x200);
      }
      else {
        (**(code **)(*(longlong *)plVar2[2] + 0x328))
                  ((longlong *)plVar2[2],plVar2,*(longlong *)(param_1 + 0x50) + 0x200);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x298) = 0;
      *(uint *)(plVar2 + 1) = *(uint *)(plVar2 + 1) | 0x200000;
      *(undefined8 *)(lVar11 + 0x68) = local_res8;
      *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x2a0) = 0;
      lVar13 = *(longlong *)(lVar10 + 0xd8) - (*(longlong **)(lVar10 + 8))[2];
      lVar11 = **(longlong **)(lVar10 + 8);
      if (((lVar11 - *(longlong *)(lVar14 + 0x30)) + lVar13 != *(longlong *)(lVar14 + 0x28)) &&
         ((*(uint *)(plVar2[2] + 0xb4) >> 0x19 & 1) == 0)) {
        puVar9 = (undefined8 *)UObjectBaseUtility::GetFullName(plVar2,&local_48,0);
        if (*(int *)(puVar9 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar9;
        }
        FString::PrintfImpl(&local_58,L"%s: Serial size mismatch: Got %d, Expected %d",puVar15,
                            ((int)lVar11 + (int)lVar13) - *(int *)(lVar14 + 0x30),
                            *(undefined8 *)(lVar14 + 0x28));
        pcVar16 = (code *)&DAT_143f3eda8;
        if ((int)puStack_50 != 0) {
          pcVar16 = local_58;
        }
        LowLevelFatalErrorHandler("Unknown",0xe4f,&DAT_144cf17f4,pcVar16);
        if (local_58 != (code *)0x0) {
          FMemory::Free();
        }
        if (CONCAT44(uStack_44,local_48) != 0) {
          FMemory::Free();
        }
        uVar12 = *(undefined8 *)(lVar10 + 0xd8);
        uVar6 = (*(undefined8 **)(lVar10 + 8))[2];
        uVar7 = **(undefined8 **)(lVar10 + 8);
        puVar9 = (undefined8 *)UObjectBaseUtility::GetFullName(plVar2,&local_48,0);
        if (*(int *)(puVar9 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar9;
        }
        FString::PrintfImpl(&local_58,L"%s: Serial size mismatch: Got %d, Expected %d",puVar15,
                            (((int)uVar12 - (int)uVar6) + (int)uVar7) - *(int *)(lVar14 + 0x30),
                            *(undefined8 *)(lVar14 + 0x28));
        pcVar16 = (code *)&DAT_143f3eda8;
        if ((int)puStack_50 != 0) {
          pcVar16 = local_58;
        }
        FDebug::AssertFailed(&DAT_144cf099f,"Unknown",0xe4f,&DAT_144cf2524,pcVar16);
        if (local_58 != (code *)0x0) {
          FMemory::Free();
        }
        if (CONCAT44(uStack_44,local_48) != 0) {
          FMemory::Free();
        }
      }
      FArchiveAsync2::Seek(lVar10,(lVar3 - lVar4) + lVar5);
    }
  }
  return;
}



// FUNCTION 1416f2840 FUN_1416f2840 body=1222 status=ok
// SIG undefined FUN_1416f2840(void)

void FUN_1416f2840(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  uint local_b8;
  uint uStack_b4;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  int local_90;
  undefined4 local_8c;
  longlong *local_88;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  *(undefined1 *)(param_1 + 0x4a2) = 1;
  uVar19 = 0;
  local_8c = 2;
  local_90 = 0;
  local_98 = param_1;
  FUN_1417082b0(&DAT_1464b4630,&local_98);
  lVar10 = *(longlong *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x1e0) = 7;
  *(undefined8 *)(param_1 + 0x2e8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2f0) = 0xffffffffffffffff;
  if (*(char *)(lVar10 + 0x295) == '\0') {
    uVar17 = uVar19;
    if (*(char *)(lVar10 + 0x2a2) != '\0') {
      uVar17 = *(ulonglong *)(lVar10 + 0x318);
    }
    FArchiveAsync2::FlushPrecacheBlock(uVar17);
  }
  FUN_1416ec8d0(param_1);
  lVar10 = *(longlong *)(param_1 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x438);
  uVar3 = *(uint *)(param_1 + 0x460);
  local_78 = (uint *)(param_1 + 0x448);
  iVar4 = *(int *)(param_1 + 0x1e4);
  local_b8 = 0;
  uStack_b4 = 1;
  uStack_a4 = 0;
  uStack_a0 = 0;
  if (uVar3 != 0) {
    puVar16 = *(uint **)(param_1 + 0x458);
    if (*(uint **)(param_1 + 0x458) == (uint *)0x0) {
      puVar16 = local_78;
    }
    uVar5 = *puVar16;
    uVar17 = uVar19;
    while (uVar5 == 0) {
      iVar7 = (int)uVar19;
      uStack_a0 = (int)uVar17 + 0x20;
      uVar17 = (ulonglong)uStack_a0;
      local_b8 = iVar7 + 1;
      uVar19 = (ulonglong)local_b8;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1416f299c;
      uVar5 = puVar16[(longlong)iVar7 + 1];
    }
    uStack_b4 = -uVar5 & uVar5;
    iVar7 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_a4 = (uStack_a0 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_a4) {
LAB_1416f299c:
      uStack_a4 = uVar3;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x460);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_a4;
  local_68 = CONCAT44(uStack_9c,uStack_a0);
  uVar5 = *(uint *)(param_1 + 0x460);
  uStack_58 = CONCAT44(uStack_b4,local_b8);
  uVar15 = uVar3 & 0xffffffe0;
  uStack_80 = local_b8;
  uStack_7c = uStack_b4;
  local_98 = lVar10;
  local_90 = iVar4;
  local_60 = plVar1;
  puStack_50 = local_78;
  uStack_40 = local_68;
  local_88 = plVar1;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_a4 = uVar3;
  if (uVar3 != uVar5) {
    lVar18 = *(longlong *)(param_1 + 0x458);
    if (*(longlong *)(param_1 + 0x458) == 0) {
      lVar18 = param_1 + 0x448;
    }
    uVar12 = *(uint *)(lVar18 + (longlong)((int)uVar3 >> 5) * 4) & -1 << ((byte)uVar3 & 0x1f);
    iVar7 = (int)uVar3 >> 5;
    while (uVar12 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1416f2a70;
      uVar12 = *(uint *)(lVar18 + 4 + (longlong)iVar7 * 4);
      iVar7 = iVar7 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar7 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_a4 = (uVar15 - iVar7) + 0x1f;
    if ((int)uVar5 < (int)uStack_a4) {
LAB_1416f2a70:
      uStack_a4 = uVar5;
    }
  }
LAB_1416f2a80:
  if (((uStack_6c == uStack_a4) && (local_78 == (uint *)(param_1 + 0x448))) && (local_88 == plVar1))
  {
    uVar19 = 0;
    *(undefined4 *)(param_1 + 0x440) = 0;
    if (*(int *)(param_1 + 0x444) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1,0);
    }
    *(undefined4 *)(param_1 + 0x468) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x46c) = 0;
    *(undefined4 *)(param_1 + 0x460) = 0;
    if (*(int *)(param_1 + 0x464) != 0) {
      *(undefined4 *)(param_1 + 0x464) = 0;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x448,0);
    }
    if (0 < (int)*(uint *)(param_1 + 0x480)) {
      uVar17 = (ulonglong)*(uint *)(param_1 + 0x480);
      do {
        uVar14 = (longlong)*(int *)(param_1 + 0x480) - 1U & uVar19;
        lVar10 = *(longlong *)(param_1 + 0x478);
        if (*(longlong *)(param_1 + 0x478) == 0) {
          lVar10 = param_1 + 0x470;
        }
        uVar19 = uVar19 + 1;
        *(undefined4 *)(lVar10 + uVar14 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    return;
  }
  local_res10 = 0;
  plVar2 = (longlong *)(*local_88 + (longlong)(int)uStack_6c * 0x18);
  if (((*plVar2 != 0) && ((int)plVar2[1] != 0)) &&
     (lVar18 = *(longlong *)(param_1 + 0x1d8), *(int *)(lVar18 + 0x1b0) != *(int *)(lVar18 + 0x1dc))
     ) {
    lVar13 = *(longlong *)(lVar18 + 0x1e8);
    if (*(longlong *)(lVar18 + 0x1e8) == 0) {
      lVar13 = lVar18 + 0x1e0;
    }
    iVar7 = *(int *)(lVar13 + ((longlong)(*(int *)((longlong)plVar2 + 4) + (int)*plVar2) &
                              (longlong)*(int *)(lVar18 + 0x1f0) - 1U) * 4);
    if (iVar7 != -1) {
      lVar18 = *(longlong *)(lVar18 + 0x1a8);
      do {
        lVar13 = (longlong)iVar7;
        if (*(longlong *)(lVar18 + lVar13 * 0x18) == *plVar2) {
          if (((iVar7 != -1) && (lVar18 = lVar18 + lVar13 * 0x18, lVar18 != 0)) &&
             ((lVar18 = *(longlong *)(lVar18 + 8), lVar18 != 0 &&
              (*(int *)(lVar18 + 0x1e4) == (int)plVar2[1])))) {
            if (*(int *)(lVar18 + 0x3f0) == *(int *)(lVar18 + 0x41c)) goto LAB_1416f2c35;
            uVar19 = (longlong)*(int *)(lVar18 + 0x430) - 1;
            lVar13 = *(longlong *)(lVar18 + 0x428);
            if (*(longlong *)(lVar18 + 0x428) == 0) {
              lVar13 = lVar18 + 0x420;
            }
            iVar7 = *(int *)(lVar13 + ((longlong)((int)((ulonglong)lVar10 >> 0x20) + (int)local_98)
                                      & uVar19) * 4);
            if (iVar7 == -1) goto LAB_1416f2c35;
            lVar6 = *(longlong *)(lVar18 + 1000);
            goto LAB_1416f2bd0;
          }
          break;
        }
        iVar7 = *(int *)(lVar18 + 0x10 + lVar13 * 0x18);
      } while (iVar7 != -1);
    }
  }
  goto LAB_1416f2c54;
  while (iVar7 = *(int *)(lVar6 + 0x10 + lVar9 * 0x18), iVar7 != -1) {
LAB_1416f2bd0:
    lVar9 = (longlong)iVar7;
    if (*(int *)(lVar6 + 8 + lVar9 * 0x18) == iVar4) {
      uVar19 = (longlong)*(int *)(lVar6 + 0x14 + lVar9 * 0x18) & uVar19;
      puVar11 = (undefined4 *)(lVar13 + uVar19 * 4);
      iVar8 = *(int *)(lVar13 + uVar19 * 4);
      if (iVar8 != -1) goto LAB_1416f2c03;
      goto LAB_1416f2c27;
    }
  }
  goto LAB_1416f2c35;
  while( true ) {
    lVar13 = (longlong)iVar8 * 3 + 2;
    iVar8 = *(int *)(lVar6 + lVar13 * 8);
    puVar11 = (undefined4 *)(lVar6 + lVar13 * 8);
    if (iVar8 == -1) break;
LAB_1416f2c03:
    if (iVar8 == iVar7) {
      *puVar11 = *(undefined4 *)(lVar6 + 0x10 + lVar9 * 0x18);
      break;
    }
  }
LAB_1416f2c27:
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized((longlong *)(lVar18 + 1000),iVar7,1);
LAB_1416f2c35:
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
  Emplace<FWeakAsyncPackagePtr_const_&>(lVar18 + 0x398,local_res8,&local_98,0);
  FUN_1416ec8d0(lVar18);
LAB_1416f2c54:
  uStack_70 = uStack_70 & ~uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
  goto LAB_1416f2a80;
}



// FUNCTION 1416f2d10 FUN_1416f2d10 body=2349 status=ok
// SIG undefined FUN_1416f2d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416f2d10(longlong param_1)

{
  uint uVar1;
  ulonglong *puVar2;
  int *piVar3;
  uint *puVar4;
  char *pcVar5;
  float fVar6;
  double dVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  double dVar11;
  void *pvVar12;
  longlong lVar13;
  char cVar14;
  DWORD DVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  undefined8 uVar25;
  bool bVar26;
  double dVar27;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  LARGE_INTEGER local_res20;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  LARGE_INTEGER local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  longlong local_190;
  undefined8 local_188;
  code *local_178;
  undefined1 *puStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  code *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined1 *puStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [64];
  
  puStack_170 = local_res8;
  local_res8[0] = 0;
  local_178 = FUN_1406ddef0;
  local_128 = 0x406ddef0;
  uStack_124 = 1;
  puStack_120 = puStack_170;
  lVar17 = FUN_1415d8310(&local_128,&DAT_14622e6dc);
  uVar25 = *(undefined8 *)(lVar17 + 0xa0);
  *(longlong *)(lVar17 + 0xa0) = param_1;
  local_res18 = uVar25;
  cVar14 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar14 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar15 = GetCurrentThreadId();
    if (DVar15 == DAT_1468c21c0) goto LAB_1416f2da8;
  }
  else {
LAB_1416f2da8:
    lVar17 = FUN_1416f86a0();
    *(int *)(lVar17 + 0x2d8) = *(int *)(lVar17 + 0x2d8) + 1;
  }
  FUN_1417848b0(0);
  iVar16 = FAsyncPackage::FinishLinker();
  pcVar5 = (char *)(param_1 + 0xcb);
  if ((iVar16 == 0) && (*pcVar5 == '\0')) {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    uStack_160 = *(undefined4 *)(param_1 + 0x1e4);
    local_168._0_4_ = (undefined4)uVar9;
    local_168._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_118 = (undefined4)local_168;
    uStack_114 = local_168._4_4_;
    uStack_10c = uStack_15c;
    local_168 = uVar9;
    uStack_110 = uStack_160;
    FUN_141705540(*(undefined8 *)(param_1 + 0x1d8),&local_118,0x7fffffff);
  }
  else {
    if (*pcVar5 == '\0') {
      *(wchar_t **)(param_1 + 0xe0) = L"ImportAddNode";
      if ((*(int *)(param_1 + 0x498) == 0) && (*(int *)(param_1 + 0x49c) == 0)) {
        FAsyncPackage::AddNode
                  (param_1,local_d8,2,0,0,
                   *(int *)(*(longlong *)(param_1 + 0x50) + 0x10) +
                   *(int *)(*(longlong *)(param_1 + 0x50) + 0x20));
        FAsyncPackage::AddNode(param_1,local_c8,1,0,1,0);
        iVar8 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x20);
        iVar16 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x10);
        *(int *)(param_1 + 0x500) = iVar16;
        iVar16 = iVar16 * 2;
        *(int *)(param_1 + 0x50c) = iVar16;
        *(int *)(param_1 + 0x504) = iVar8;
        *(undefined4 *)(param_1 + 0x508) = 0;
        iVar16 = iVar16 + iVar8 * 3;
        uVar20 = (ulonglong)iVar16;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar20;
        uVar18 = SUB168(ZEXT816(0x18) * auVar10,0);
        *(int *)(param_1 + 0x4f8) = iVar16;
        if (SUB168(ZEXT816(0x18) * auVar10,8) != 0) {
          uVar18 = 0xffffffffffffffff;
        }
        lVar17 = uVar18 + 8;
        if (0xfffffffffffffff7 < uVar18) {
          lVar17 = -1;
        }
        puVar19 = (ulonglong *)operator_new(lVar17);
        if (puVar19 == (ulonglong *)0x0) {
          puVar19 = (ulonglong *)0x0;
        }
        else {
          *puVar19 = uVar20;
          puVar19 = puVar19 + 1;
          puVar2 = puVar19;
          for (; uVar20 != 0; uVar20 = uVar20 - 1) {
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
            *(undefined2 *)((longlong)puVar2 + 0x14) = 0;
            puVar2 = puVar2 + 3;
          }
        }
        *(ulonglong **)(param_1 + 0x4f0) = puVar19;
      }
      if (*(int *)(param_1 + 0x490) != 0) {
        uVar18 = 0;
        puVar21 = *(undefined8 **)(param_1 + 0x488);
        local_1a8 = 0;
        local_1a4 = 2;
        uVar20 = (longlong)*(int *)(param_1 + 0x490) & 0x1fffffffffffffff;
        if (puVar21 + *(int *)(param_1 + 0x490) < puVar21) {
          uVar20 = uVar18;
        }
        local_1b0 = param_1;
        if (uVar20 != 0) {
          local_198 = 0;
          local_194 = 1;
          do {
            local_1a0 = *puVar21;
            FAsyncPackage::AddArc(param_1,&local_1a0,&local_1b0);
            uVar18 = uVar18 + 1;
            puVar21 = puVar21 + 1;
          } while (uVar18 != uVar20);
        }
        *(undefined4 *)(param_1 + 0x490) = 0;
        if (*(int *)(param_1 + 0x494) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x488,0);
        }
      }
      uVar23 = *(uint *)(param_1 + 0x498);
      if ((int)*(uint *)(param_1 + 0x498) < *(int *)(*(longlong *)(param_1 + 0x50) + 0x10)) {
        do {
          FAsyncPackage::AddNode(param_1,local_b8,0,~uVar23,0,0);
          FAsyncPackage::AddNode(param_1,local_a8,1,~uVar23,0,1);
          uVar1 = uVar23 + 1;
          *(uint *)(param_1 + 0x498) = uVar1;
          if (uVar23 == ((int)uVar23 / 0x32) * 0x32) {
            piVar3 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x74);
            LOCK();
            bVar26 = *piVar3 == 0;
            if (bVar26) {
              *piVar3 = 0;
            }
            UNLOCK();
            if (bVar26) {
              fVar6 = *(float *)(param_1 + 0xc4);
              dVar7 = *(double *)(param_1 + 0xd0);
              if (*(char *)(param_1 + 200) != '\0') {
                QueryPerformanceCounter(&local_res20);
                dVar11 = (double)fVar6;
                _DAT_1464b48b8 = (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0;
                dVar27 = _DAT_1464b48b8 - dVar7;
                if ((((dVar11 < dVar27) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar7)) &&
                   (((double)DAT_1464b441c < dVar27 && ((double)(fVar6 * DAT_1464b4418) < dVar27))))
                {
                  DAT_1464b48b0 = dVar7;
                }
                if (dVar11 < dVar27) goto LAB_1416f354f;
              }
              cVar14 = IsGarbageCollectionWaiting();
              if (cVar14 == '\0') goto LAB_1416f3145;
            }
LAB_1416f354f:
            uVar25 = *(undefined8 *)(param_1 + 0x18);
            uStack_150 = *(undefined4 *)(param_1 + 0x1e4);
            local_158._0_4_ = (undefined4)uVar25;
            local_158._4_4_ = (undefined4)((ulonglong)uVar25 >> 0x20);
            local_108 = (undefined4)local_158;
            uStack_104 = local_158._4_4_;
            uStack_fc = uStack_14c;
            local_158 = uVar25;
            uStack_100 = uStack_150;
            FUN_141705540(*(undefined8 *)(param_1 + 0x1d8),&local_108,0x7fffffff);
            uVar25 = local_res18;
            goto LAB_1416f347a;
          }
LAB_1416f3145:
          uVar23 = uVar1;
        } while ((int)uVar1 < *(int *)(*(longlong *)(param_1 + 0x50) + 0x10));
      }
      iVar16 = *(int *)(param_1 + 0x49c);
      *(wchar_t **)(param_1 + 0xe0) = L"ExportAddNode";
      if (iVar16 < *(int *)(*(longlong *)(param_1 + 0x50) + 0x20)) {
        do {
          iVar8 = iVar16 + 1;
          FAsyncPackage::AddNode(param_1,local_98,0,iVar8,0,0);
          FAsyncPackage::AddNode(param_1,local_88,2,iVar8,0,1);
          FAsyncPackage::AddNode(param_1,local_78,1,iVar8,0,1);
          *(int *)(param_1 + 0x49c) = iVar8;
          if (iVar16 == (iVar16 / 0x1e) * 0x1e) {
            piVar3 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x74);
            LOCK();
            bVar26 = *piVar3 == 0;
            if (bVar26) {
              *piVar3 = 0;
            }
            UNLOCK();
            if (bVar26) {
              fVar6 = *(float *)(param_1 + 0xc4);
              dVar7 = *(double *)(param_1 + 0xd0);
              if (*(char *)(param_1 + 200) != '\0') {
                QueryPerformanceCounter(&local_1b8);
                dVar11 = (double)fVar6;
                _DAT_1464b48b8 = (double)local_1b8.QuadPart * DAT_1468b02f8 + 16777216.0;
                dVar27 = _DAT_1464b48b8 - dVar7;
                if (((dVar11 < dVar27) && (DAT_1469e68bc != 0)) &&
                   ((DAT_1464b48b0 != dVar7 &&
                    (((double)DAT_1464b441c < dVar27 && ((double)(fVar6 * DAT_1464b4418) < dVar27)))
                    ))) {
                  DAT_1464b48b0 = dVar7;
                }
                if (dVar11 < dVar27) goto LAB_1416f3584;
              }
              cVar14 = IsGarbageCollectionWaiting();
              if (cVar14 == '\0') goto LAB_1416f32d7;
            }
LAB_1416f3584:
            uVar25 = *(undefined8 *)(param_1 + 0x18);
            uStack_140 = *(undefined4 *)(param_1 + 0x1e4);
            local_148._0_4_ = (undefined4)uVar25;
            local_148._4_4_ = (undefined4)((ulonglong)uVar25 >> 0x20);
            local_f8 = (undefined4)local_148;
            uStack_f4 = local_148._4_4_;
            uStack_ec = uStack_13c;
            local_148 = uVar25;
            uStack_f0 = uStack_140;
            FUN_141705540(*(undefined8 *)(param_1 + 0x1d8),&local_f8,0x7fffffff);
            uVar25 = local_res18;
            goto LAB_1416f347a;
          }
LAB_1416f32d7:
          iVar16 = iVar8;
        } while (iVar8 < *(int *)(*(longlong *)(param_1 + 0x50) + 0x20));
      }
      *(undefined1 *)(param_1 + 0x1e0) = 2;
      FUN_141705930(*(undefined8 *)(param_1 + 0x1d8),param_1,0x7ffffffe);
    }
    local_188 = 0;
    local_190 = param_1;
    FUN_1417082b0(&DAT_1464b4630,&local_190);
    uVar25 = local_res18;
    if (*pcVar5 != '\0') {
      local_1d8 = 0;
      local_1d0 = 0;
      FEventLoadNodeArray::GetAddedNodes(param_1 + 0x4a8,&local_1d8,param_1);
      lVar17 = local_1d8;
      if (local_1d8 != (longlong)(int)local_1d0 * 0x10 + local_1d8) {
        local_1c8 = 0;
        local_1c0 = 0;
        FEventLoadNodeArray::GetAddedNodes(param_1 + 0x4a8,&local_1c8,param_1);
        lVar13 = local_1c8;
        lVar24 = (longlong)(int)local_1c0 * 0x10 + local_1c8;
        for (lVar22 = local_1c8; lVar22 != lVar24; lVar22 = lVar22 + 0x10) {
          FUN_1417082b0(&DAT_1464b4630,lVar22);
        }
        if (lVar13 != 0) {
          FMemory::Free(lVar13);
        }
      }
      *(undefined4 *)(param_1 + 0x490) = 0;
      if (*(int *)(param_1 + 0x494) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x488,0);
      }
      if (lVar17 != 0) {
        FMemory::Free(lVar17);
      }
      pvVar12 = ThreadLocalStoragePointer;
      uVar20 = (ulonglong)_tls_index;
      *(undefined1 *)(param_1 + 0x1e0) = 9;
      if (*(int *)(*(longlong *)((longlong)pvVar12 + uVar20 * 8) + 0x38) < DAT_1469e6f40) {
        _Init_thread_header(&DAT_1469e6f40);
        if (DAT_1469e6f40 == -1) {
          FUN_1416e39e0(&DAT_1469e6c60);
          atexit((_func_5014 *)&LAB_143e7c100);
          _Init_thread_footer(&DAT_1469e6f40);
        }
      }
      iVar16 = DAT_1469e6e60;
      lVar17 = (longlong)DAT_1469e6e60;
      DAT_1469e6e60 = DAT_1469e6e60 + 1;
      if (DAT_1469e6e64 < DAT_1469e6e60) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_1469e6e58,iVar16);
      }
      *(longlong *)(DAT_1469e6e58 + lVar17 * 8) = param_1;
      uVar25 = local_res18;
    }
  }
LAB_1416f347a:
  FUN_14178a260();
  cVar14 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar14 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar15 = GetCurrentThreadId();
    if (DVar15 != DAT_1468c21c0) goto LAB_1416f34d6;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e6f40) {
    _Init_thread_header(&DAT_1469e6f40);
    if (DAT_1469e6f40 == -1) {
      FUN_1416e39e0(&DAT_1469e6c60);
      atexit((_func_5014 *)&LAB_143e7c100);
      _Init_thread_footer(&DAT_1469e6f40);
    }
  }
  _DAT_1469e6f38 = _DAT_1469e6f38 + -1;
LAB_1416f34d6:
  if (*pcVar5 == '\0') {
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x58) + 8);
    *puVar4 = *puVar4 | 0x80000;
  }
  puStack_130 = local_res10;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  local_138 = FUN_1406ddef0;
  local_e8 = 0x406ddef0;
  uStack_e4 = 1;
  local_res10[0] = 0;
  puStack_e0 = puStack_130;
  lVar17 = FUN_1415d8310(&local_e8,&DAT_14622e6dc);
  *(undefined8 *)(lVar17 + 0xa0) = uVar25;
  return;
}



// FUNCTION 1416f3640 FUN_1416f3640 body=3463 status=ok
// SIG undefined FUN_1416f3640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416f3640(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint **ppuVar18;
  longlong **pplVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  longlong *plVar23;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  uint *puStack_1f0;
  uint local_1e8;
  uint uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [4];
  undefined8 local_1d4;
  longlong *local_1c8;
  longlong lStack_1c0;
  uint *local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_168;
  int iStack_160;
  int iStack_15c;
  longlong *local_158;
  undefined4 local_150;
  undefined1 local_148 [16];
  longlong local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  int local_104;
  undefined1 local_100 [8];
  undefined1 *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_88;
  undefined8 uStack_80;
  uint *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint **local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_158 = *(longlong **)(param_1 + 0x18);
  local_150 = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined1 *)(param_1 + 0x4a1) = 0;
  local_138 = 0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_104 = 0;
  local_f8 = (undefined1 *)0x0;
  local_f0 = 0;
  local_108 = 0xffffffff;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
  Emplace<FWeakAsyncPackagePtr_const_&>(&local_138,&local_1d4,&local_158,0);
  plVar1 = (longlong *)(param_1 + 0x398);
  uVar17 = *(uint *)(param_1 + 0x3c0);
  puStack_1f0 = (uint *)(param_1 + 0x3a8);
  local_1f8 = 0x100000000;
  uStack_1e4 = 0;
  iStack_1e0 = 0;
  if (uVar17 != 0) {
    puVar21 = *(uint **)(param_1 + 0x3b8);
    if (*(uint **)(param_1 + 0x3b8) == (uint *)0x0) {
      puVar21 = puStack_1f0;
    }
    uVar6 = *puVar21;
    iVar7 = 0;
    while (uVar6 == 0) {
      iStack_1e0 = iStack_1e0 + 0x20;
      local_1f8._4_4_ = (undefined4)((ulonglong)local_1f8 >> 0x20);
      local_1f8 = CONCAT44(local_1f8._4_4_,iVar7 + 1);
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
      goto LAB_1416f3784;
      uVar6 = puVar21[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    local_1f8 = CONCAT44(uVar6,(undefined4)local_1f8);
    if (uVar6 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_1e4 = (iStack_1e0 - iVar7) + 0x1f;
    if ((int)uVar17 < (int)uStack_1e4) {
LAB_1416f3784:
      uStack_1e4 = uVar17;
    }
  }
  local_1e8 = 0xffffffff;
  uStack_80 = local_1f8;
  uStack_70 = CONCAT44(uStack_1e4,0xffffffff);
  uStack_68 = CONCAT44(uStack_1dc,iStack_1e0);
  uStack_e0 = local_1f8;
  local_c8 = CONCAT44(uStack_1dc,iStack_1e0);
  uStack_d0 = uStack_70;
  local_e8 = plVar1;
  local_d8 = puStack_1f0;
  local_c0 = plVar1;
  local_88 = plVar1;
  puStack_78 = puStack_1f0;
  if ((int)uStack_1e4 < (int)uVar17) {
    local_188 = 0;
    uVar17 = uStack_1e4;
    do {
      plVar12 = local_c0;
      plVar23 = (longlong *)(*local_e8 + (longlong)(int)uVar17 * 0x18);
      local_1c8 = (longlong *)*plVar23;
      local_168 = *plVar23;
      iStack_160 = (int)plVar23[1];
      iStack_15c = *(int *)((longlong)plVar23 + 0xc);
      lStack_1c0 = plVar23[1];
      if (((local_168 != 0) && (iStack_160 != 0)) &&
         (lVar4 = *(longlong *)(param_1 + 0x1d8), *(int *)(lVar4 + 0x1b0) != *(int *)(lVar4 + 0x1dc)
         )) {
        lVar14 = *(longlong *)(lVar4 + 0x1e8);
        if (*(longlong *)(lVar4 + 0x1e8) == 0) {
          lVar14 = lVar4 + 0x1e0;
        }
        iVar7 = *(int *)(lVar14 + ((longlong)(*(int *)((longlong)plVar23 + 4) + (int)*plVar23) &
                                  (longlong)*(int *)(lVar4 + 0x1f0) - 1U) * 4);
        if (iVar7 != -1) {
          lVar4 = *(longlong *)(lVar4 + 0x1a8);
          do {
            lVar14 = (longlong)iVar7;
            if (*(longlong *)(lVar4 + lVar14 * 0x18) == local_168) {
              if ((((iVar7 != -1) && (lVar4 = lVar4 + lVar14 * 0x18, lVar4 != 0)) &&
                  ((lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0 &&
                   ((*(int *)(lVar4 + 0x1e4) == iStack_160 && (lVar4 != param_1)))))) &&
                 (*(byte *)(lVar4 + 0x1e0) < 8)) {
                if (*(char *)(lVar4 + 0x4a2) != '\0') goto LAB_1416f38d6;
                TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                ::Emplace<FWeakAsyncPackagePtr_const_&>(&local_138,&local_1d4,&local_1c8,0);
                TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                ::Emplace<FWeakAsyncPackagePtr_const_&>(param_1 + 1000,local_198,&local_1c8,0);
                plVar23 = (longlong *)(lVar4 + 0x438);
                pplVar19 = &local_158;
                puVar10 = local_194;
                goto LAB_1416f38c4;
              }
              break;
            }
            iVar7 = *(int *)(lVar4 + 0x10 + lVar14 * 0x18);
          } while (iVar7 != -1);
        }
      }
      pplVar19 = &local_1c8;
      puVar10 = local_190;
      plVar23 = &local_138;
LAB_1416f38c4:
      TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
      Emplace<FWeakAsyncPackagePtr_const_&>(plVar23,puVar10,pplVar19,0);
      TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
      ::Remove(plVar12,uVar17);
LAB_1416f38d6:
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
      uVar17 = uStack_d0._4_4_;
    } while ((int)uStack_d0._4_4_ < (int)local_d8[6]);
  }
  if (*(int *)(param_1 + 0x3a0) == *(int *)(param_1 + 0x3cc)) {
LAB_1416f3b82:
    if (*(int *)(param_1 + 0x3f0) == *(int *)(param_1 + 0x41c)) {
      local_1f8 = *(longlong *)(param_1 + 0x18);
      uVar9 = *(undefined4 *)(param_1 + 0x1e4);
      puVar21 = *(uint **)(param_1 + 0x1d8);
      *(undefined1 *)(param_1 + 0x1e0) = 8;
      puStack_1f0 = (uint *)CONCAT44(puStack_1f0._4_4_,uVar9);
      if (DAT_1469e6898 != 0) {
        uVar9 = FUN_1416f9b90(0x7fffffff);
      }
      local_58 = (uint **)0x0;
      local_48 = 0;
      local_1b8 = puVar21;
      puVar11 = (undefined8 *)FUN_140438ef0(0x20,&puStack_78);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &PTR_FUN_143f4d0b0;
        puVar11[1] = local_1f8;
        puVar11[2] = puStack_1f0;
        puVar11[3] = local_1b8;
      }
      uVar17 = puVar21[0xb0];
      local_88 = (longlong *)&LAB_1416eb910;
      uVar3 = *(undefined4 *)(param_1 + 0x44);
      puVar21[0xb0] = uVar17 + 1;
      local_e8 = (longlong *)CONCAT44(uVar9,uVar3);
      uStack_e0 = (ulonglong)(uVar17 + 1) << 0x20;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(&local_d8,&local_88);
      TArray<FAsyncLoadEvent,FDefaultAllocator>::HeapPush(puVar21 + 0xb2,&local_e8,local_1d8);
      FUN_1404bed90(&local_d8);
      if (local_48 != 0) {
        ppuVar18 = &puStack_78;
        if (local_58 != (uint **)0x0) {
          ppuVar18 = local_58;
        }
        if (ppuVar18 != (uint **)0x0) {
          (**(code **)(*ppuVar18 + 4))(ppuVar18,0);
        }
      }
      if (local_58 != (uint **)0x0) {
        FMemory::Free();
      }
    }
    local_f0 = 0;
    if (local_f8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_138);
    return;
  }
LAB_1416f3991:
  if (*(int *)(param_1 + 0x3f0) == *(int *)(param_1 + 0x41c)) {
    uVar17 = *(uint *)(param_1 + 0x3c0);
    iVar7 = 0;
    uStack_1e4 = 0;
    if (uVar17 != 0) {
      puVar21 = *(uint **)(param_1 + 0x3b8);
      if (*(uint **)(param_1 + 0x3b8) == (uint *)0x0) {
        puVar21 = (uint *)(param_1 + 0x3a8);
      }
      uVar6 = *puVar21;
      iVar8 = 0;
      while (uVar6 == 0) {
        iVar7 = iVar7 + 0x20;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_1416f3a38;
        uVar6 = puVar21[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar8 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar6 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_1e4 = (iVar7 - iVar8) + 0x1f;
      if ((int)uVar17 < (int)uStack_1e4) {
LAB_1416f3a38:
        uStack_1e4 = uVar17;
      }
    }
    local_1e8 = 0xffffffff;
    puVar11 = (undefined8 *)(*plVar1 + (longlong)(int)uStack_1e4 * 0x18);
    local_1c8 = (longlong *)*puVar11;
    lStack_1c0 = puVar11[1];
    TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
    ::Remove(plVar1);
    plVar23 = local_1c8;
    iVar7 = (int)lStack_1c0;
    iVar16 = (int)local_1c8;
    iVar8 = (int)((ulonglong)local_1c8 >> 0x20);
    if ((int)local_130 != local_104) {
      puVar10 = local_100;
      if (local_f8 != (undefined1 *)0x0) {
        puVar10 = local_f8;
      }
      for (iVar2 = *(int *)(puVar10 + (longlong)(int)(iVar8 + iVar16 & local_f0 - 1U) * 4);
          iVar2 != -1; iVar2 = *(int *)(local_138 + 0x10 + (longlong)iVar2 * 0x18)) {
        if (*(int *)(local_138 + 8 + (longlong)iVar2 * 0x18) == (int)lStack_1c0) {
          if (iVar2 != -1) goto LAB_1416f3b6b;
          break;
        }
      }
    }
    TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
    Emplace<FWeakAsyncPackagePtr_const_&>(&local_138,local_190,&local_1c8,0);
    local_180 = 0;
    if (((plVar23 != (longlong *)0x0) && (iVar7 != 0)) &&
       (lVar4 = *(longlong *)(param_1 + 0x1d8), *(int *)(lVar4 + 0x1b0) != *(int *)(lVar4 + 0x1dc)))
    {
      lVar14 = *(longlong *)(lVar4 + 0x1e8);
      if (*(longlong *)(lVar4 + 0x1e8) == 0) {
        lVar14 = lVar4 + 0x1e0;
      }
      iVar8 = *(int *)(lVar14 + ((longlong)(iVar8 + iVar16) & (longlong)*(int *)(lVar4 + 0x1f0) - 1U
                                ) * 4);
      if (iVar8 != -1) {
        lVar4 = *(longlong *)(lVar4 + 0x1a8);
        do {
          lVar14 = (longlong)iVar8;
          if (*(longlong **)(lVar4 + lVar14 * 0x18) == plVar23) {
            if (((iVar8 != -1) && (lVar4 = lVar4 + lVar14 * 0x18, lVar4 != 0)) &&
               ((lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0 &&
                ((*(int *)(lVar4 + 0x1e4) == iVar7 && (*(byte *)(lVar4 + 0x1e0) < 8)))))) {
              local_1f8 = 0x100000000;
              uVar17 = *(uint *)(lVar4 + 0x410);
              puVar21 = (uint *)(lVar4 + 0x3f8);
              iVar7 = 0;
              uStack_1e4 = 0;
              iStack_1e0 = 0;
              if (uVar17 == 0) goto LAB_1416f3e19;
              puVar22 = *(uint **)(lVar4 + 0x408);
              if (*(uint **)(lVar4 + 0x408) == (uint *)0x0) {
                puVar22 = puVar21;
              }
              uVar6 = *puVar22;
              iVar8 = 0;
              if (uVar6 != 0) goto LAB_1416f3de7;
              goto LAB_1416f3dc0;
            }
            break;
          }
          iVar8 = *(int *)(lVar4 + 0x10 + lVar14 * 0x18);
        } while (iVar8 != -1);
      }
    }
    goto LAB_1416f3b6b;
  }
  goto LAB_1416f3b82;
  while (uVar6 = puVar22[(longlong)iVar8 + 1], iVar8 = iVar8 + 1, uVar6 == 0) {
LAB_1416f3dc0:
    iVar7 = iVar7 + 0x20;
    local_1f8 = CONCAT44(local_1f8._4_4_,iVar8 + 1);
    iStack_1e0 = iVar7;
    if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1416f3e14;
  }
LAB_1416f3de7:
  uVar6 = -uVar6 & uVar6;
  iVar7 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  local_1f8 = CONCAT44(uVar6,(undefined4)local_1f8);
  if (uVar6 == 0) {
    iVar7 = 0x20;
  }
  else {
    iVar7 = 0x1f - iVar7;
  }
  uStack_1e4 = (iStack_1e0 - iVar7) + 0x1f;
  if ((int)uVar17 < (int)uStack_1e4) {
LAB_1416f3e14:
    uStack_1e4 = uVar17;
  }
LAB_1416f3e19:
  uVar6 = *(uint *)(lVar4 + 0x410);
  uStack_1b0 = CONCAT44(uStack_1e4,0xffffffff);
  uStack_1a8 = CONCAT44(uStack_1dc,iStack_1e0);
  local_1e8 = -1 << ((byte)uVar6 & 0x1f);
  uVar20 = uVar6 & 0xffffffe0;
  local_c8 = uStack_1a8;
  local_e8 = (longlong *)(lVar4 + 1000);
  uStack_e0 = local_1f8;
  local_d8 = puVar21;
  uStack_d0 = uStack_1b0;
  uStack_1e4 = uVar6;
  local_1b8 = puVar21;
  if (uVar6 != uVar17) {
    puVar22 = *(uint **)(lVar4 + 0x408);
    if (*(uint **)(lVar4 + 0x408) == (uint *)0x0) {
      puVar22 = puVar21;
    }
    uVar13 = puVar22[(int)uVar6 >> 5] & local_1e8;
    iVar7 = (int)uVar6 >> 5;
    while (uVar13 == 0) {
      uVar20 = uVar20 + 0x20;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
      goto LAB_1416f3ee9;
      uVar13 = puVar22[(longlong)iVar7 + 1];
      local_1e8 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar13 = -uVar13 & uVar13;
    iVar7 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_1e4 = (uVar20 - iVar7) + 0x1f;
    uVar6 = uStack_1e4;
    if ((int)uVar17 < (int)uStack_1e4) {
LAB_1416f3ee9:
      uStack_1e4 = uVar17;
      uVar6 = uVar17;
    }
  }
  while( true ) {
    if (((uStack_d0._4_4_ == uVar6) && (local_d8 == puVar21)) &&
       (local_e8 == (longlong *)(lVar4 + 1000))) break;
    plVar23 = (longlong *)(*local_e8 + (longlong)(int)uStack_d0._4_4_ * 0x18);
    local_1f8 = *plVar23;
    local_1c8 = (longlong *)*plVar23;
    plVar12 = plVar23 + 1;
    puStack_1f0 = (uint *)*plVar12;
    lStack_1c0 = *plVar12;
    local_178 = 0;
    if (((local_1c8 != (longlong *)0x0) && ((int)*plVar12 != 0)) &&
       (lVar14 = *(longlong *)(param_1 + 0x1d8),
       *(int *)(lVar14 + 0x1b0) != *(int *)(lVar14 + 0x1dc))) {
      lVar15 = *(longlong *)(lVar14 + 0x1e8);
      if (*(longlong *)(lVar14 + 0x1e8) == 0) {
        lVar15 = lVar14 + 0x1e0;
      }
      iVar7 = *(int *)(lVar15 + ((longlong)(*(int *)((longlong)plVar23 + 4) + (int)*plVar23) &
                                (longlong)*(int *)(lVar14 + 0x1f0) - 1U) * 4);
      if (iVar7 != -1) {
        lVar14 = *(longlong *)(lVar14 + 0x1a8);
        do {
          lVar15 = (longlong)iVar7;
          if (*(longlong **)(lVar14 + lVar15 * 0x18) == local_1c8) {
            if ((((iVar7 != -1) && (lVar14 = lVar14 + lVar15 * 0x18, lVar14 != 0)) &&
                (lVar14 = *(longlong *)(lVar14 + 8), lVar14 != 0)) &&
               (*(int *)(lVar14 + 0x1e4) == (int)*plVar12)) goto LAB_1416f3fef;
            break;
          }
          iVar7 = *(int *)(lVar14 + 0x10 + lVar15 * 0x18);
        } while (iVar7 != -1);
      }
    }
    lVar14 = 0;
LAB_1416f3fef:
    TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
    Emplace<FWeakAsyncPackagePtr_const_&>(param_1 + 1000,local_194,&local_1f8,0);
    TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
    Emplace<FWeakAsyncPackagePtr_const_&>(lVar14 + 0x438,local_198,&local_158);
    uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
  }
  plVar23 = (longlong *)(lVar4 + 0x398);
  uVar17 = *(uint *)(lVar4 + 0x3c0);
  puVar21 = (uint *)(lVar4 + 0x3a8);
  local_1f8 = 0x100000000;
  uStack_1e4 = 0;
  iStack_1e0 = 0;
  if (uVar17 != 0) {
    puVar22 = *(uint **)(lVar4 + 0x3b8);
    if (*(uint **)(lVar4 + 0x3b8) == (uint *)0x0) {
      puVar22 = puVar21;
    }
    uVar6 = *puVar22;
    iStack_1e0 = 0;
    iVar7 = 0;
    while (uVar6 == 0) {
      iStack_1e0 = iStack_1e0 + 0x20;
      local_1f8._4_4_ = (undefined4)((ulonglong)local_1f8 >> 0x20);
      local_1f8 = CONCAT44(local_1f8._4_4_,iVar7 + 1);
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
      goto LAB_1416f40f4;
      uVar6 = puVar22[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    local_1f8 = CONCAT44(uVar6,(undefined4)local_1f8);
    if (uVar6 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_1e4 = (iStack_1e0 - iVar7) + 0x1f;
    if ((int)uVar17 < (int)uStack_1e4) {
LAB_1416f40f4:
      uStack_1e4 = uVar17;
    }
  }
  uVar6 = *(uint *)(lVar4 + 0x3c0);
  uStack_1b0 = CONCAT44(uStack_1e4,0xffffffff);
  uStack_1a8 = CONCAT44(uStack_1dc,iStack_1e0);
  local_1e8 = -1 << ((byte)uVar6 & 0x1f);
  lStack_1c0 = local_1f8;
  uVar20 = uVar6 & 0xffffffe0;
  uStack_68 = uStack_1a8;
  local_88 = plVar23;
  uStack_80 = local_1f8;
  puStack_78 = puVar21;
  uStack_70 = uStack_1b0;
  puStack_1f0 = puVar21;
  uStack_1e4 = uVar6;
  local_1c8 = plVar23;
  local_1b8 = puVar21;
  if (uVar6 != uVar17) {
    puVar22 = *(uint **)(lVar4 + 0x3b8);
    if (*(uint **)(lVar4 + 0x3b8) == (uint *)0x0) {
      puVar22 = puVar21;
    }
    uVar13 = puVar22[(int)uVar6 >> 5] & local_1e8;
    iVar7 = (int)uVar6 >> 5;
    while (uVar13 == 0) {
      uVar20 = uVar20 + 0x20;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
      goto LAB_1416f41d8;
      uVar13 = puVar22[(longlong)iVar7 + 1];
      local_1e8 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar13 = -uVar13 & uVar13;
    iVar7 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_1e4 = (uVar20 - iVar7) + 0x1f;
    uVar6 = uStack_1e4;
    if ((int)uVar17 < (int)uStack_1e4) {
LAB_1416f41d8:
      uStack_1e4 = uVar17;
      uVar6 = uVar17;
    }
  }
  while( true ) {
    if (((uStack_70._4_4_ == uVar6) && (puStack_78 == puVar21)) && (local_88 == plVar23)) break;
    plVar12 = (longlong *)(*local_88 + (longlong)(int)uStack_70._4_4_ * 0x18);
    lVar4 = *plVar12;
    local_1c8 = (longlong *)*plVar12;
    plVar5 = plVar12 + 1;
    iVar7 = (int)*plVar5;
    puVar22 = (uint *)*plVar5;
    lStack_1c0 = *plVar5;
    if ((int)local_130 != local_104) {
      puVar10 = local_100;
      if (local_f8 != (undefined1 *)0x0) {
        puVar10 = local_f8;
      }
      for (iVar8 = *(int *)(puVar10 +
                           (longlong)
                           (int)(*(int *)((longlong)plVar12 + 4) + (int)*plVar12 & local_f0 - 1U) *
                           4); iVar8 != -1;
          iVar8 = *(int *)(local_138 + 0x10 + (longlong)iVar8 * 0x18)) {
        if (*(int *)(local_138 + 8 + (longlong)iVar8 * 0x18) == iVar7) {
          if (iVar8 != -1) goto LAB_1416f43a8;
          break;
        }
      }
    }
    local_168 = 0;
    local_1f8 = lVar4;
    puStack_1f0 = puVar22;
    if (((lVar4 != 0) && (iVar7 != 0)) &&
       (lVar14 = *(longlong *)(param_1 + 0x1d8),
       *(int *)(lVar14 + 0x1b0) != *(int *)(lVar14 + 0x1dc))) {
      lVar15 = *(longlong *)(lVar14 + 0x1e8);
      if (*(longlong *)(lVar14 + 0x1e8) == 0) {
        lVar15 = lVar14 + 0x1e0;
      }
      iVar8 = *(int *)(lVar15 + ((longlong)(*(int *)((longlong)plVar12 + 4) + (int)*plVar12) &
                                (longlong)*(int *)(lVar14 + 0x1f0) - 1U) * 4);
      if (iVar8 != -1) {
        lVar14 = *(longlong *)(lVar14 + 0x1a8);
        do {
          lVar15 = (longlong)iVar8;
          if (*(longlong *)(lVar14 + lVar15 * 0x18) == lVar4) {
            if ((((iVar8 != -1) && (lVar14 = lVar14 + lVar15 * 0x18, lVar14 != 0)) &&
                (lVar4 = *(longlong *)(lVar14 + 8), lVar4 != 0)) &&
               ((*(int *)(lVar4 + 0x1e4) == iVar7 && (*(byte *)(lVar4 + 0x1e0) < 8)))) {
              pplVar19 = &local_1c8;
              if (*(char *)(lVar4 + 0x4a2) == '\0') {
                TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                ::Emplace<FWeakAsyncPackagePtr_const_&>(param_1 + 1000,local_148,pplVar19,0);
                plVar12 = (longlong *)(lVar4 + 0x438);
                pplVar19 = &local_158;
                puVar11 = &local_188;
              }
              else {
                puVar11 = &local_1d4;
                plVar12 = plVar1;
              }
              TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
              ::Emplace<FWeakAsyncPackagePtr_const_&>(plVar12,puVar11,pplVar19,0);
            }
            break;
          }
          iVar8 = *(int *)(lVar14 + 0x10 + lVar15 * 0x18);
        } while (iVar8 != -1);
      }
    }
LAB_1416f43a8:
    uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_80._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
  }
LAB_1416f3b6b:
  if (*(int *)(param_1 + 0x3a0) == *(int *)(param_1 + 0x3cc)) goto LAB_1416f3b82;
  goto LAB_1416f3991;
}



// FUNCTION 1416f43d0 FUN_1416f43d0 body=472 status=ok
// SIG undefined FUN_1416f43d0(void)

void FUN_1416f43d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  *(undefined1 *)(param_1 + 0x1e0) = 9;
  FAsyncPackage::EventDrivenLoadingComplete();
  puStack_20 = local_res8;
  local_res8[0] = 0;
  local_28 = FUN_1406ddef0;
  lVar4 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
  lVar7 = *(longlong *)(param_1 + 0x50);
  if (*(int *)(lVar4 + 0x44) < *(int *)(lVar4 + 0x40) + *(int *)(lVar7 + 0x20)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar4 + 0x38);
    lVar7 = *(longlong *)(param_1 + 0x50);
  }
  iVar8 = 0;
  if (0 < *(int *)(lVar7 + 0x20)) {
    lVar9 = 0;
    do {
      lVar2 = *(longlong *)(lVar9 + 0x48 + *(longlong *)(lVar7 + 0x18));
      if (lVar2 != 0) {
        if (((*(uint *)(lVar2 + 8) >> 0xc & 1) == 0) && (*(char *)(lVar7 + 0x295) == '\0')) {
          iVar1 = *(int *)(lVar2 + 0xc);
          if (iVar1 < (int)DAT_1469e91c4) {
            uVar6 = iVar1 >> 0x1f & 0xffff;
            uVar3 = iVar1 + uVar6;
            lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                    (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
          }
          else {
            lVar5 = 0;
          }
          if ((*(uint *)(lVar5 + 8) >> 0x1b & 1) == 0) goto LAB_1416f44ea;
        }
        iVar1 = *(int *)(lVar4 + 0x40);
        *(int *)(lVar4 + 0x40) = iVar1 + 1;
        if (*(int *)(lVar4 + 0x44) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x38,iVar1);
        }
        *(longlong *)(*(longlong *)(lVar4 + 0x38) + (longlong)iVar1 * 8) = lVar2;
        lVar7 = *(longlong *)(param_1 + 0x50);
      }
LAB_1416f44ea:
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 0x88;
    } while (iVar8 < *(int *)(lVar7 + 0x20));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e6f40) && (_Init_thread_header(&DAT_1469e6f40), DAT_1469e6f40 == -1))
  {
    FUN_1416e39e0(&DAT_1469e6c60);
    atexit((_func_5014 *)&LAB_143e7c100);
    _Init_thread_footer(&DAT_1469e6f40);
  }
  iVar8 = DAT_1469e6e60;
  lVar7 = (longlong)DAT_1469e6e60;
  DAT_1469e6e60 = DAT_1469e6e60 + 1;
  if (DAT_1469e6e64 < DAT_1469e6e60) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_1469e6e58,iVar8);
  }
  *(longlong *)(DAT_1469e6e58 + lVar7 * 8) = param_1;
  return;
}



// FUNCTION 1416f45b0 ExportTextPathToObjectPath body=123 status=ok
// SIG undefined ExportTextPathToObjectPath(void)

longlong * FPackageName::ExportTextPathToObjectPath(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  cVar1 = FUN_141700810(param_2,0,&local_18);
  if (cVar1 != '\0') {
    *param_1 = local_18;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_10._4_4_;
    return param_1;
  }
  FString::FString(param_1,param_2);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416f4630 FUN_1416f4630 body=186 status=ok
// SIG undefined FUN_1416f4630(void)

undefined8 * FUN_1416f4630(undefined8 *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined2 *local_18;
  undefined8 local_10;
  
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  cVar2 = FPackageName::TryConvertFilenameToLongPackageName(param_2,param_1,&local_18);
  puVar1 = local_18;
  if (cVar2 == '\0') {
    puVar3 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar3 = local_18;
    }
    LowLevelFatalErrorHandler("Unknown",0x191,&DAT_144cf4144,puVar3);
    puVar3 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar3 = puVar1;
    }
    FDebug::AssertFailed(&DAT_144cf11c2,"Unknown",0x191,&DAT_144cf4394,puVar3);
  }
  if (puVar1 != (undefined2 *)0x0) {
    FMemory::Free(puVar1);
  }
  return param_1;
}



// FUNCTION 1416f46f0 FUN_1416f46f0 body=461 status=ok
// SIG undefined FUN_1416f46f0(void)

void FUN_1416f46f0(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  cVar2 = FUN_14170fb20();
  if (cVar2 == '\0') {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x290);
  *(uint *)(param_1 + 0x290) = uVar1 & 0xffefffff;
  lVar4 = *(longlong *)(param_2 + 0x30);
  if ((lVar4 != 0) && (lVar3 = FUN_1417a53c0(lVar4), lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x78c) == -1) {
      if (*(char *)(lVar3 + 0x788) == '\0') goto LAB_1416f479a;
      lVar5 = *(longlong *)(lVar4 + 0xf8);
    }
    else {
      lVar5 = *(longlong *)
               ((longlong)*(int *)(lVar3 + 0x78c) * 0x88 + 0x48 + *(longlong *)(lVar3 + 0x18));
    }
    if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) & 0x200400) == 0)) {
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x400;
    }
    FUN_1416f46f0(lVar3,lVar4);
  }
LAB_1416f479a:
  FLinkerLoad::ResolveAllImports(param_1);
  plVar6 = *(longlong **)(param_2 + 0x1a0);
  plVar8 = plVar6 + (longlong)*(int *)(param_2 + 0x1a8) * 2;
  for (; plVar6 != plVar8; plVar6 = plVar6 + 2) {
    if (((*plVar6 != 0) && (lVar4 = FUN_1417a53c0(), lVar4 != 0)) &&
       ((*(int *)(lVar4 + 0x78c) != -1 || (*(char *)(lVar4 + 0x788) != '\0')))) {
      cVar2 = FLinkerLoad::HasUnresolvedDependencies(lVar4);
      if (cVar2 != '\0') {
        FUN_141709ce0(lVar4,*plVar6);
      }
      FUN_1416f46f0(lVar4,*plVar6);
    }
  }
  FUN_14170a240(param_1,param_2);
  if (*(int *)(param_1 + 0x78c) == -1) {
    if (*(char *)(param_1 + 0x788) == '\0') goto LAB_1416f48a0;
    uVar7 = *(undefined8 *)(param_2 + 0xf8);
  }
  else {
    uVar7 = *(undefined8 *)
             ((longlong)*(int *)(param_1 + 0x78c) * 0x88 + 0x48 + *(longlong *)(param_1 + 0x18));
  }
  *(undefined1 *)(param_1 + 0x788) = 0;
  *(undefined4 *)(param_1 + 0x78c) = 0xffffffff;
  FUN_1417963d0(param_1);
  if (-1 < *(int *)(param_2 + 0xb0)) {
    lVar4 = *(longlong *)(param_2 + 0xf8);
    cVar2 = FUN_1417061b0(param_1,param_2,uVar7);
    if ((cVar2 != '\0') && (lVar4 == *(longlong *)(param_2 + 0xf8))) {
      *(undefined8 *)(param_2 + 0xf8) = uVar7;
    }
  }
LAB_1416f48a0:
  *(uint *)(param_1 + 0x290) = uVar1;
  return;
}



// FUNCTION 1416f48c0 FindCDOExportIndex body=105 status=ok
// SIG undefined FindCDOExportIndex(void)

ulonglong FLinkerLoad::FindCDOExportIndex(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  iVar1 = FUN_1417a5490(param_2);
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x18) + 0x10);
    uVar4 = uVar3;
    do {
      if ((((*(byte *)(piVar2 + 4) & 0x10) != 0) && (0 < *piVar2)) && (*piVar2 + -1 == iVar1)) {
        return uVar4;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0x22;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x20));
  }
  return 0xffffffff;
}



// FUNCTION 1416f4930 FindClosestLink body=535 status=ok
// SIG undefined FindClosestLink(void)

undefined8
FArchiveTraceRoute::FindClosestLink
          (undefined8 param_1,longlong param_2,int *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  uint *puVar9;
  int local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  int iStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  uVar8 = 0;
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_2 + 0x58);
    iVar5 = *(int *)(param_2 + 0x80);
    local_78 = (uint *)(param_2 + 0x68);
    local_a8 = 0;
    uStack_a4 = 1;
    iStack_94 = 0;
    iStack_90 = 0;
    if (iVar5 != 0) {
      puVar9 = *(uint **)(param_2 + 0x78);
      if (*(uint **)(param_2 + 0x78) == (uint *)0x0) {
        puVar9 = local_78;
      }
      uVar2 = *puVar9;
      iStack_90 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_a8;
        iStack_90 = iStack_90 + 0x20;
        iVar7 = local_a8 + 1;
        bVar4 = (int)((iVar5 + -1 >> 0x1f & 0x1fU) + iVar5 + -1) >> 5 <= local_a8;
        local_a8 = iVar7;
        if (bVar4) goto LAB_1416f4a10;
        uVar2 = puVar9[lVar6 + 1];
      }
      uStack_a4 = -uVar2 & uVar2;
      iVar7 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_94 = (iStack_90 - iVar7) + 0x1f;
      if (iVar5 < iStack_94) {
LAB_1416f4a10:
        iStack_94 = iVar5;
      }
    }
    uStack_70 = CONCAT44(iStack_94,0xffffffff);
    auStack_30._8_4_ = iStack_90;
    auStack_30._0_8_ = uStack_70;
    auStack_30._12_4_ = uStack_8c;
    iStack_40 = local_a8;
    uStack_3c = uStack_a4;
    local_50 = 0;
    local_20._0_4_ = SUB84(plVar1,0);
    local_20._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    iStack_80 = local_a8;
    uStack_7c = uStack_a4;
    local_68._8_4_ = (undefined4)local_20;
    local_68._0_8_ = auStack_30._8_8_;
    local_68._12_4_ = local_20._4_4_;
    local_58 = plVar1;
    local_48 = plVar1;
    puStack_38 = local_78;
    local_20 = plVar1;
    if (iStack_94 < *(int *)(param_2 + 0x80)) {
      do {
        lVar6 = *plVar1;
        iVar5 = *(int *)(*(longlong *)(lVar6 + 8 + (longlong)iStack_94 * 0x28) + 0xa8);
        if (iVar5 < 0x7fffffff) {
          local_a8 = (int)param_2;
          uStack_a4 = (uint)((ulonglong)param_2 >> 0x20);
          if (iVar5 == 0) {
            iVar5 = *(int *)(param_2 + 0xa8);
            if (iVar5 < *param_3) {
              *param_4 = local_a8;
              param_4[1] = uStack_a4;
              param_4[2] = 0;
              param_4[3] = 0;
              iVar5 = *(int *)(param_2 + 0xa8);
            }
            *param_3 = iVar5 + -1;
            uVar8 = 0;
            break;
          }
          if (iVar5 < *param_3) {
            *param_3 = iVar5;
            uVar8 = 1;
            uVar3 = *(undefined8 *)(lVar6 + (longlong)iStack_94 * 0x28 + 8);
            uStack_a0 = (undefined4)uVar3;
            uStack_9c = (undefined4)((ulonglong)uVar3 >> 0x20);
            *param_4 = local_a8;
            param_4[1] = uStack_a4;
            param_4[2] = uStack_a0;
            param_4[3] = uStack_9c;
          }
        }
        uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
        iStack_94 = uStack_70._4_4_;
      } while (uStack_70._4_4_ < (int)local_78[6]);
      if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
        TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 1416f4b50 FUN_1416f4b50 body=1368 status=ok
// SIG undefined FUN_1416f4b50(void)

undefined8 * FUN_1416f4b50(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  short *psVar8;
  longlong lVar9;
  short *psVar10;
  longlong local_res18;
  longlong local_res20;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48 [2];
  
  puVar4 = (undefined8 *)
           ((longlong)param_2 * 0x38 + *(longlong *)(*(longlong *)(param_1 + 0x50) + 8));
  if (puVar4[4] != 0) {
    return puVar4;
  }
  if (*(char *)((longlong)puVar4 + 0x35) != '\0') {
    return puVar4;
  }
  *(undefined1 *)((longlong)puVar4 + 0x35) = 1;
  if (*(uint *)(puVar4 + 1) == 0) {
    uVar1 = UPackage::GetPrivateStaticClass();
    lVar2 = FUN_141799680(uVar1,0,*puVar4,1,0,0,0);
    puVar4[4] = lVar2;
    if (lVar2 == 0) {
      return puVar4;
    }
  }
  else {
    lVar2 = FUN_1416f4b50(param_1,~*(uint *)(puVar4 + 1));
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      return puVar4;
    }
    uVar1 = UObject::GetPrivateStaticClass();
    lVar9 = 0;
    lVar2 = FUN_141799680(uVar1,*(undefined8 *)(lVar2 + 0x20),*puVar4,0,1,0,0);
    puVar4[4] = lVar2;
    if (lVar2 == 0) {
      return puVar4;
    }
    local_res20 = puVar4[3];
    local_res18 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x18);
    if (local_res18 != local_res20) {
      piVar6 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if ((*piVar6 < DAT_1469e6fb8) && (_Init_thread_header(&DAT_1469e6fb8), DAT_1469e6fb8 == -1)) {
        FName::FName(&DAT_1469e6fb0,"BlueprintGeneratedClass",1);
        _Init_thread_footer(&DAT_1469e6fb8);
      }
      if ((*piVar6 < DAT_1469e6fc8) && (_Init_thread_header(&DAT_1469e6fc8), DAT_1469e6fc8 == -1)) {
        FName::FName(&DAT_1469e6fc0,"DynamicClass",1);
        _Init_thread_footer(&DAT_1469e6fc8);
      }
      if ((*piVar6 < DAT_1469e6fd8) && (_Init_thread_header(&DAT_1469e6fd8), DAT_1469e6fd8 == -1)) {
        FName::FName(&DAT_1469e6fd0,"Function",1);
        _Init_thread_footer(&DAT_1469e6fd8);
      }
      if ((*piVar6 < DAT_1469e6fe8) && (_Init_thread_header(&DAT_1469e6fe8), DAT_1469e6fe8 == -1)) {
        FName::FName(&DAT_1469e6fe0,"DelegateFunction",1);
        _Init_thread_footer(&DAT_1469e6fe8);
      }
      if ((*piVar6 < DAT_1469e6ff8) && (_Init_thread_header(&DAT_1469e6ff8), DAT_1469e6ff8 == -1)) {
        FName::FName(&DAT_1469e6ff0,"EnumProperty",1);
        _Init_thread_footer(&DAT_1469e6ff8);
      }
      if ((*piVar6 < DAT_1469e7008) && (_Init_thread_header(&DAT_1469e7008), DAT_1469e7008 == -1)) {
        FName::FName(&DAT_1469e7000,"ByteProperty",1);
        _Init_thread_footer(&DAT_1469e7008);
      }
      if (((((local_res20 != DAT_1469e6fb0) || (local_res18 != DAT_1469e6fc0)) &&
           ((local_res20 != DAT_1469e6ff0 || (local_res18 != DAT_1469e7000)))) &&
          ((local_res20 != DAT_1469e7000 || (local_res18 != DAT_1469e6ff0)))) &&
         ((local_res20 != DAT_1469e6fd0 || (local_res18 != DAT_1469e6fe0)))) {
        puVar3 = (undefined8 *)FName::ToString(&local_res18,&local_58);
        psVar8 = &DAT_143f3eda8;
        if (*(int *)(puVar3 + 1) == 0) {
          psVar10 = &DAT_143f3eda8;
        }
        else {
          psVar10 = (short *)*puVar3;
        }
        local_60 = 0;
        local_68 = 0;
        lVar2 = -1;
        if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
          lVar7 = -1;
          do {
            lVar7 = lVar7 + 1;
          } while (psVar10[lVar7] != 0);
          uVar5 = (int)lVar7 + 1;
          local_60 = (ulonglong)uVar5;
          if (0 < (int)uVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
          }
          FGenericPlatformString::Memcpy(local_68,psVar10,(longlong)(int)uVar5 * 2);
        }
        if (local_58 != 0) {
          FMemory::Free();
        }
        puVar3 = (undefined8 *)FName::ToString(&local_res20,local_48);
        if (*(int *)(puVar3 + 1) == 0) {
          psVar10 = &DAT_143f3eda8;
        }
        else {
          psVar10 = (short *)*puVar3;
        }
        local_58 = 0;
        local_50 = 0;
        lVar7 = lVar9;
        if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
          lVar7 = -1;
          do {
            lVar7 = lVar7 + 1;
          } while (psVar10[lVar7] != 0);
          uVar5 = (int)lVar7 + 1;
          local_50 = (ulonglong)uVar5;
          if (0 < (int)uVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          }
          lVar7 = local_58;
          FGenericPlatformString::Memcpy(local_58,psVar10,(longlong)(int)uVar5 * 2);
        }
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        puVar3 = (undefined8 *)FName::ToString(param_1 + 0x18,local_48);
        if (*(int *)(puVar3 + 1) != 0) {
          psVar8 = (short *)*puVar3;
        }
        local_58 = 0;
        local_50 = 0;
        if ((psVar8 != (short *)0x0) && (*psVar8 != 0)) {
          do {
            lVar2 = lVar2 + 1;
          } while (psVar8[lVar2] != 0);
          uVar5 = (int)lVar2 + 1;
          local_50 = (ulonglong)uVar5;
          if (0 < (int)uVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          }
          lVar9 = local_58;
          FGenericPlatformString::Memcpy(local_58,psVar8,(longlong)(int)uVar5 * 2);
        }
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        if (lVar9 != 0) {
          FMemory::Free(lVar9);
        }
        if (lVar7 != 0) {
          FMemory::Free(lVar7);
        }
        if (local_68 != 0) {
          FMemory::Free();
        }
      }
    }
    lVar2 = puVar4[4];
  }
  FUN_1416ea3b0(param_1,lVar2);
  return puVar4;
}



// FUNCTION 1416f50b0 FindExistingImportObject body=339 status=ok
// SIG undefined FindExistingImportObject(void)

undefined8 FindExistingImportObject(int param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  longlong local_28 [2];
  longlong local_18 [2];
  
  lVar1 = 0;
  puVar5 = (undefined8 *)((longlong)param_1 * 0x38 + *param_2);
  if ((int)*(uint *)(puVar5 + 1) < 0) {
    uVar8 = ~*(uint *)(puVar5 + 1);
    lVar1 = *(longlong *)((longlong)(int)uVar8 * 0x38 + 0x20 + *param_2);
    if (lVar1 != 0) goto LAB_1416f510b;
    lVar1 = FindExistingImportObject(uVar8);
  }
  if ((lVar1 == 0) && (*(int *)(puVar5 + 1) != 0)) {
    return 0;
  }
LAB_1416f510b:
  puVar2 = (undefined8 *)FName::ToString(puVar5 + 2,local_28);
  puVar7 = &DAT_143f3eda8;
  if (*(int *)(puVar2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar2;
  }
  uVar3 = UPackage::GetPrivateStaticClass();
  lVar4 = FUN_141799410(uVar3,0,puVar6,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (lVar4 != 0) {
    puVar2 = (undefined8 *)FName::ToString(puVar5 + 3,local_18);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar7 = (undefined2 *)*puVar2;
    }
    uVar3 = FUN_14171bfe0();
    lVar4 = FUN_141799410(uVar3,lVar4,puVar7,0);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (((lVar4 != 0) && ((*(uint *)(lVar4 + 8) >> 10 & 1) == 0)) &&
       (*(longlong *)(lVar4 + 0xf8) != 0)) {
      uVar3 = FUN_141799680(lVar4,lVar1,*puVar5,0,0,0,0);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1416f5210 FindExistingPackageAndAddCompletionCallback body=300 status=ok
// SIG undefined FindExistingPackageAndAddCompletionCallback(void)

longlong FAsyncLoadingThread::FindExistingPackageAndAddCompletionCallback
                   (longlong param_1,undefined4 *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_2 + 2);
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    plVar4 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar4 = param_3 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                    (longlong)(int)param_3[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_3;
      do {
        lVar6 = (longlong)iVar3;
        if (*(longlong *)(lVar2 + lVar6 * 0x18) == lVar1) {
          if (iVar3 == -1) {
            return 0;
          }
          lVar2 = lVar2 + lVar6 * 0x18;
          if (lVar2 == 0) {
            return 0;
          }
          lVar1 = *(longlong *)(lVar2 + 8);
          if (lVar1 != 0) {
            if (*(longlong *)(param_2 + 10) != 0) {
              iVar3 = *(int *)(lVar1 + 0x68);
              *(int *)(lVar1 + 0x68) = iVar3 + 1;
              if (*(int *)(lVar1 + 0x6c) < iVar3 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar1 + 0x60,iVar3);
              }
              puVar5 = (undefined2 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 0x60));
              *puVar5 = 0;
              *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_2 + 10);
              *(undefined8 *)(param_2 + 10) = 0;
            }
            FAsyncPackage::AddRequestID(lVar1,*param_2);
            if (param_4 != 0) {
              FAsyncPackage::PopulateFlushTree(lVar1,param_4);
            }
            LOCK();
            *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + -1;
            UNLOCK();
          }
          return lVar1;
        }
        iVar3 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1416f5340 FUN_1416f5340 body=164 status=ok
// SIG undefined FUN_1416f5340(void)

undefined4 * FUN_1416f5340(undefined4 *param_1,longlong param_2,int param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int local_res8 [2];
  undefined4 local_res18 [4];
  undefined8 local_28;
  undefined4 local_20;
  
  *param_1 = 0;
  puVar5 = (undefined8 *)((longlong)param_3 * 0x38 + *param_4);
  uVar1 = *(uint *)(puVar5 + 1);
  if ((int)uVar1 < 0) {
    FUN_1416f5340(local_res18,param_2,~uVar1);
    local_28 = *puVar5;
    lVar2 = *(longlong *)(param_2 + 800);
    local_20 = local_res18[0];
    TSet<TTuple<TTuple<FName,FPackageIndex>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>,FDefaultSetAllocator>
    ::FindId(lVar2 + 0x348,local_res8,&local_28);
    puVar4 = (undefined4 *)0x0;
    if (local_res8[0] != -1) {
      puVar4 = (undefined4 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar2 + 0x348));
    }
    puVar3 = puVar4 + 4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar3 != (undefined4 *)0x0) {
      *param_1 = *puVar3;
    }
  }
  return param_1;
}



// FUNCTION 1416f53f0 FUN_1416f53f0 body=155 status=ok
// SIG undefined FUN_1416f53f0(void)

undefined4 * FUN_1416f53f0(undefined4 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_res8 [2];
  int local_res18 [4];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x20);
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1416f53f0(local_res8);
    local_28 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(longlong *)(param_2 + 800);
    local_20 = local_res8[0];
    TSet<TTuple<TTuple<FName,FPackageIndex>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x348,local_res18,&local_28);
    puVar3 = (undefined4 *)0x0;
    if (local_res18[0] != -1) {
      puVar3 = (undefined4 *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x348));
    }
    puVar2 = puVar3 + 4;
    if (puVar3 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    if (puVar2 != (undefined4 *)0x0) {
      *param_1 = *puVar2;
    }
  }
  return param_1;
}



// FUNCTION 1416f5490 FindId body=275 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x160 + *param_1) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x160 + 0x158 + *param_1);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1416f55b0 FindId body=316 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<TTuple<FName,FPackageIndex>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *(uint *)(param_3 + 1);
    lVar2 = *param_3;
    uVar9 = ((int)((ulonglong)lVar2 >> 0x20) - uVar1) + (int)lVar2 ^ uVar1 >> 0xd;
    uVar8 = (-0x61c88647 - uVar9) - uVar1 ^ uVar9 << 8;
    uVar6 = (uVar1 - uVar8) - uVar9 ^ uVar8 >> 0xd;
    uVar9 = (uVar9 - uVar8) - uVar6 ^ uVar6 >> 0xc;
    uVar8 = (uVar8 - uVar9) - uVar6 ^ uVar9 << 0x10;
    uVar6 = (uVar6 - uVar8) - uVar9 ^ uVar8 >> 5;
    uVar9 = (uVar9 - uVar8) - uVar6 ^ uVar6 >> 3;
    uVar8 = (uVar8 - uVar9) - uVar6 ^ uVar9 << 10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (((longlong)(int)((uVar6 - uVar8) - uVar9) ^ (ulonglong)(uVar8 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        lVar7 = (longlong)iVar4 * 0x20;
        if ((*(longlong *)(lVar7 + lVar3) == lVar2) && (*(uint *)(lVar7 + 8 + lVar3) == uVar1)) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(lVar7 + 0x18 + lVar3);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1416f56f0 FUN_1416f56f0 body=169 status=ok
// SIG undefined FUN_1416f56f0(void)

int * FUN_1416f56f0(longlong param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 300)) {
    lVar2 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      lVar2 = param_1 + 0x130;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0x158) - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar2 = param_1;
      }
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar1 * 0x10) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(lVar2 + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1416f57a0 FindImport body=23 status=ok
// SIG undefined FindImport(void)

void FLinkerLoad::FindImport
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141799410(param_2,param_3,param_4,0);
  return;
}



// FUNCTION 1416f57c0 FindImportFast body=31 status=ok
// SIG undefined FindImportFast(void)

void FLinkerLoad::FindImportFast(void)

{
  FUN_141799680();
  return;
}



// FUNCTION 1416f57e0 FUN_1416f57e0 body=510 status=ok
// SIG undefined FUN_1416f57e0(void)

undefined8 * FUN_1416f57e0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  BOOL BVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  FUN_1416ecf30(param_1);
  if (0 < *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x94)) {
    lVar6 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar6 = param_1 + 0x98;
    }
    iVar5 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0xa8) - 1U) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x60);
      do {
        lVar9 = (longlong)iVar5;
        if (*(longlong *)(lVar6 + lVar9 * 0x18) == param_3) {
          if ((iVar5 != -1) && (lVar6 = lVar6 + lVar9 * 0x18, lVar6 != 0)) {
            local_58 = *(undefined8 *)(lVar6 + 8);
            if (((int)local_58 != 0) || ((int)((ulonglong)local_58 >> 0x20) != 0)) {
              uVar8 = FInternationalization::Get();
              FInternationalization::GetCurrentAssetGroupCulture(uVar8,&local_30,&local_58);
              uVar8 = FCulture::GetName(local_30);
              FUN_1416f61e0(param_1,&local_40,uVar8);
              if (local_40 == 0) {
                local_res8 = 0;
                puVar7 = &local_res8;
              }
              else {
                puVar7 = (undefined8 *)
                         FPackageLocalizationCultureCache::FindLocalizedPackageName
                                   (local_40,local_50,param_3);
              }
              plVar3 = local_38;
              *param_2 = *puVar7;
              if (local_38 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_38 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_38)(local_38);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  iVar5 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*local_38 + 8))(local_38,1);
                  }
                }
              }
              if (local_28 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_28 + 1;
                lVar6 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_28)(local_28);
                  LOCK();
                  piVar2 = (int *)((longlong)local_28 + 0xc);
                  iVar5 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*local_28 + 8))(local_28,1);
                  }
                }
              }
              goto LAB_1416f59bd;
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar6 + 0x10 + lVar9 * 0x18);
      } while (iVar5 != -1);
    }
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_res20 = 0;
    puVar7 = &local_res20;
  }
  else {
    puVar7 = (undefined8 *)
             FPackageLocalizationCultureCache::FindLocalizedPackageName
                       (*(longlong *)(param_1 + 0x30),local_48,param_3);
  }
  *param_2 = *puVar7;
LAB_1416f59bd:
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 1416f59e0 FindLocalizedPackageName body=240 status=ok
// SIG undefined FindLocalizedPackageName(void)

longlong *
FPackageLocalizationCultureCache::FindLocalizedPackageName
          (LPCRITICAL_SECTION param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  HANDLE *ppvVar4;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  PRTL_CRITICAL_SECTION_DEBUG p_Var6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  
  BVar2 = TryEnterCriticalSection(param_1);
  if (BVar2 == 0) {
    EnterCriticalSection(param_1);
  }
  FUN_1416ecbf0(param_1);
  p_Var6 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  if (param_1[4].LockCount != param_1[5].RecursionCount) {
    ppvVar4 = param_1[5].LockSemaphore;
    if (param_1[5].LockSemaphore == (HANDLE *)0x0) {
      ppvVar4 = &param_1[5].OwningThread;
    }
    iVar3 = *(int *)((longlong)ppvVar4 +
                    ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                    (longlong)(int)param_1[5].SpinCount - 1U) * 4);
    if (iVar3 != -1) {
      do {
        p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)
                 (&(param_1[4].DebugInfo)->Type + (longlong)iVar3 * 0x10);
        lVar1._0_2_ = p_Var7->Type;
        lVar1._2_2_ = p_Var7->CreatorBackTraceIndex;
        lVar1._4_4_ = *(undefined4 *)&p_Var7->field_0x4;
        if (lVar1 == param_3) {
          if (iVar3 != -1) goto LAB_1416f5a91;
          break;
        }
        iVar3 = *(int *)&(p_Var7->ProcessLocksList).Blink;
      } while (iVar3 != -1);
    }
  }
  p_Var7 = p_Var6;
LAB_1416f5a91:
  p_Var5 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var7->CriticalSection;
  if (p_Var7 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    p_Var5 = p_Var6;
  }
  if (p_Var5 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    p_Var6 = (*(_RTL_CRITICAL_SECTION **)&p_Var5->Type)->DebugInfo;
  }
  *param_2 = (longlong)p_Var6;
  LeaveCriticalSection(param_1);
  return param_2;
}



// FUNCTION 1416f5ad0 FUN_1416f5ad0 body=326 status=ok
// SIG undefined FUN_1416f5ad0(void)

undefined8 FUN_1416f5ad0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  if ((param_1[10] == 0) && (*(int *)(param_1 + 8) != 0)) {
    plVar7 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar7 = param_1 + 2;
    }
    if (plVar7 != (longlong *)0x0) {
      if (plVar7 == (longlong *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar7 + 8))();
      }
      (*(code *)*param_1)(uVar4,param_1);
    }
  }
  plVar7 = (longlong *)param_1[10];
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7,param_2);
    return param_2;
  }
  lVar5 = FInternationalization::Get();
  plVar7 = *(longlong **)(lVar5 + 0x30);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  puVar6 = (undefined8 *)FCulture::GetName(uVar4);
  local_28 = (void *)0x0;
  local_20 = *(int *)(puVar6 + 1);
  lVar5 = (longlong)local_20;
  _Src = (void *)*puVar6;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
    _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar5 * 2);
  }
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
  FUN_1416f5d00(param_1,param_2,param_3,&local_28);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1416f5c20 FUN_1416f5c20 body=209 status=ok
// SIG undefined FUN_1416f5c20(void)

undefined8 *
FUN_1416f5c20(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  BOOL BVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_28;
  longlong *local_20;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  FUN_1416f61e0(param_1,&local_28,param_4);
  if (local_28 == 0) {
    local_res8 = 0;
    puVar7 = &local_res8;
  }
  else {
    puVar7 = (undefined8 *)
             FPackageLocalizationCultureCache::FindLocalizedPackageName
                       (local_28,local_res10,param_3);
  }
  plVar5 = local_20;
  *param_2 = *puVar7;
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
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 1416f5d00 FUN_1416f5d00 body=1248 status=ok
// SIG undefined FUN_1416f5d00(void)

undefined8 *
FUN_1416f5d00(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t **ppwVar1;
  wchar_t **ppwVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  wchar_t *pwVar11;
  uint uVar12;
  wchar_t *pwVar13;
  wchar_t **ppwVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  wchar_t **ppwVar23;
  wchar_t *pwVar24;
  ulonglong uVar25;
  undefined8 local_res18;
  undefined8 local_res20;
  uint local_98;
  wchar_t **local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined8 local_68;
  wchar_t *local_60;
  uint local_58;
  int local_54;
  longlong *local_50;
  int local_48;
  
  pwVar13 = (wchar_t *)0x0;
  local_60 = (wchar_t *)0x0;
  local_98 = 0;
  local_54 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FName::ToString(&local_res18,&local_80);
  local_90 = (wchar_t **)0x0;
  local_88 = 1;
  lVar4 = FUN_1416f87e0();
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_90,0);
  ppwVar14 = local_90;
  FString::FString(local_90,lVar4 + 0x10);
  uVar17 = local_88;
  lVar22 = (longlong)(int)(uint)local_88;
  iVar6 = (uint)local_88 + 1;
  local_88 = CONCAT44(local_88._4_4_,iVar6);
  if (local_88._4_4_ < iVar6) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_90,uVar17 & 0xffffffff);
    ppwVar14 = local_90;
  }
  FString::FString(ppwVar14 + lVar22 * 2,lVar4 + 0x20);
  TArray<FString,FDefaultAllocator>::Append<FString,FDefaultAllocator>(&local_90,lVar4 + 0x60);
  ppwVar2 = local_90;
  uVar16 = (uint)local_88;
  uVar17 = (ulonglong)(int)(uint)local_88;
  ppwVar23 = local_90 + uVar17 * 2;
  ppwVar14 = local_90;
  while( true ) {
    uVar25 = 0;
    ppwVar1 = ppwVar2;
    pwVar24 = (wchar_t *)0x0;
    if (ppwVar14 == ppwVar23) break;
    cVar3 = FString::StartsWith(&local_80,ppwVar14,1);
    if (cVar3 != '\0') {
      if (&local_60 != ppwVar14) {
        local_98 = *(uint *)(ppwVar14 + 1);
        pwVar24 = *ppwVar14;
        local_58 = local_98;
        if (local_98 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,local_98,0);
          _guard_xfg_dispatch_icall_nop(local_60,pwVar24,(longlong)(int)local_98 * 2);
          local_98 = local_58;
        }
      }
      uVar7 = *(int *)(ppwVar14 + 1) - 1;
      if (*(int *)(ppwVar14 + 1) == 0) {
        uVar7 = 0;
      }
      uVar9 = uVar7 + 0x7fffffff;
      uVar19 = (uint)local_78 - 1;
      if ((uint)local_78 == 0) {
        uVar19 = 0;
      }
      if (uVar7 < uVar19) {
        uVar19 = uVar7;
      }
      uVar7 = (uint)local_78 - 1;
      if ((uint)local_78 == 0) {
        uVar7 = 0;
      }
      uVar12 = uVar19;
      if ((uVar19 <= uVar9) && (uVar12 = uVar7, uVar9 < uVar7)) {
        uVar12 = uVar9;
      }
      local_70 = (wchar_t *)0x0;
      pwVar24 = L"";
      if ((uint)local_78 != 0) {
        pwVar24 = local_80;
      }
      iVar6 = uVar12 - uVar19;
      local_68 = (wchar_t *)(ulonglong)(iVar6 + 1);
      if (iVar6 == 0) {
        local_68 = pwVar13;
      }
      local_90 = (wchar_t **)CONCAT44(local_90._4_4_,(int)local_68);
      if (0 < (int)local_68) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
        pwVar13 = local_70;
        local_90 = (wchar_t **)CONCAT44(local_90._4_4_,(uint)local_68);
        if (0 < (int)(uint)local_68) {
          wcsncpy(local_70,pwVar24 + (int)uVar19,(longlong)iVar6);
          pwVar13[iVar6] = L'\0';
        }
      }
      uVar25 = (ulonglong)local_90 & 0xffffffff;
      pwVar24 = pwVar13;
      break;
    }
    ppwVar14 = ppwVar14 + 2;
  }
  while (uVar16 != 0) {
    if (*ppwVar1 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uVar16 = (int)uVar17 - 1;
    uVar17 = (ulonglong)uVar16;
    ppwVar1 = ppwVar1 + 2;
  }
  if (ppwVar2 != (wchar_t **)0x0) {
    FMemory::Free(ppwVar2);
  }
  if (local_80 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (((int)local_98 < 2) || (iVar6 = (int)uVar25, iVar6 < 2)) {
    *param_2 = 0;
    pwVar13 = local_60;
    if (pwVar24 != (wchar_t *)0x0) {
      FMemory::Free(pwVar24);
      pwVar13 = local_60;
    }
  }
  else {
    uVar5 = FInternationalization::Get();
    FInternationalization::GetPrioritizedCultureNames(uVar5,&local_50,local_res20);
    pwVar13 = local_60;
    plVar18 = local_50 + (longlong)local_48 * 2;
    if (local_50 != plVar18) {
      uVar17 = (ulonglong)(int)local_98;
      local_90 = (wchar_t **)(uVar17 * 2);
      plVar15 = local_50;
      do {
        ppwVar14 = local_90;
        uVar16 = (uint)uVar17;
        local_70 = (wchar_t *)0x0;
        local_68._0_4_ = uVar16;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_70,uVar16 + (6 - (uint)(uVar16 != 0)),0);
        _guard_xfg_dispatch_icall_nop(local_70,pwVar13,(size_t)ppwVar14);
        FString::PathAppend(&local_70,L"L10N",4);
        iVar21 = local_68._4_4_;
        iVar20 = (int)plVar15[1] + -1;
        if ((int)plVar15[1] == 0) {
          iVar20 = 0;
        }
        if (((uint)local_68 != 0) || (iVar8 = 2, iVar20 == -1)) {
          iVar8 = 1;
        }
        local_78._0_4_ = (uint)local_68;
        iVar10 = (uint)local_68 + iVar20;
        local_80 = local_70;
        local_70 = (wchar_t *)0x0;
        local_78._4_4_ = local_68._4_4_;
        local_68 = (wchar_t *)0x0;
        if (iVar21 < iVar10 + iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80);
        }
        FString::PathAppend(&local_80,*plVar15,iVar20);
        iVar20 = local_78._4_4_;
        iVar21 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar21 = 0;
        }
        if (((uint)local_78 != 0) || (iVar8 = 2, iVar21 == -1)) {
          iVar8 = 1;
        }
        local_58 = (uint)local_78;
        iVar21 = (uint)local_78 + iVar21;
        local_60 = local_80;
        local_80 = (wchar_t *)0x0;
        local_54 = local_78._4_4_;
        local_78 = 0;
        if (iVar20 < iVar21 + iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_60);
        }
        FString::PathAppend(&local_60,pwVar24);
        if (local_80 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if (local_70 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        cVar3 = FUN_1416f0740(&local_60,0,0,1);
        if (cVar3 != '\0') {
          pwVar11 = L"";
          if (local_58 != 0) {
            pwVar11 = local_60;
          }
          FName::FName(param_2,pwVar11,1);
          plVar18 = local_50;
          iVar6 = local_48;
          if (local_60 != (wchar_t *)0x0) {
            FMemory::Free();
            plVar18 = local_50;
            iVar6 = local_48;
          }
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            if (*plVar18 != 0) {
              FMemory::Free();
            }
            plVar18 = plVar18 + 2;
          }
          if (local_50 != (longlong *)0x0) {
            FMemory::Free(local_50);
          }
          if (pwVar24 != (wchar_t *)0x0) {
            FMemory::Free(pwVar24);
          }
          goto joined_r0x0001416f61b8;
        }
        if (local_60 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        uVar17 = (ulonglong)local_98;
        plVar15 = plVar15 + 2;
      } while (plVar15 != plVar18);
    }
    *param_2 = 0;
    plVar18 = local_50;
    for (iVar6 = local_48; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar18 != 0) {
        FMemory::Free();
      }
      plVar18 = plVar18 + 2;
    }
    if (local_50 != (longlong *)0x0) {
      FMemory::Free(local_50);
    }
    if (pwVar24 != (wchar_t *)0x0) {
      FMemory::Free(pwVar24);
    }
  }
joined_r0x0001416f61b8:
  if (pwVar13 != (wchar_t *)0x0) {
    FMemory::Free(pwVar13);
  }
  return param_2;
}



// FUNCTION 1416f61e0 FUN_1416f61e0 body=1418 status=ok
// SIG undefined FUN_1416f61e0(void)

undefined8 * FUN_1416f61e0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  ULONG_PTR UVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong local_res20;
  longlong *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  int local_b0;
  int local_ac;
  LPCRITICAL_SECTION local_a8;
  longlong *local_a0;
  undefined2 *local_98;
  int local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  if (*(int *)(param_3 + 1) < 2) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_78 = (longlong *)(param_1 + 0x40);
    puVar7 = *(undefined8 **)(param_1 + 0x40);
    puVar10 = puVar7 + (longlong)*(int *)(param_1 + 0x48) * 4;
    for (; puVar7 != puVar10; puVar7 = puVar7 + 4) {
      if (*(int *)(param_3 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*param_3;
      }
      if (*(int *)(puVar7 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar7;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar12);
      if (iVar3 == 0) {
        *param_2 = puVar7[2];
        lVar5 = puVar7[3];
        param_2[1] = lVar5;
        if (lVar5 == 0) {
          return param_2;
        }
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
        return param_2;
      }
    }
    local_res20 = param_1;
    lVar5 = operator_new(0x100);
    local_a0 = (longlong *)0x0;
    if (lVar5 != 0) {
      local_a0 = (longlong *)
                 SharedPointerInternals::
                 TIntrusiveReferenceController<FPackageLocalizationCultureCache>::
                 TIntrusiveReferenceController<FPackageLocalizationCultureCache><FPackageLocalizationCache_*,FString_const_&>
                           (lVar5,&local_res20,param_3);
    }
    local_a8 = (LPCRITICAL_SECTION)(local_a0 + 2);
    SharedPointerInternals::EnableSharedFromThis(&local_a8,local_a8,local_a8);
    plVar6 = local_a0;
    lpCriticalSection = local_a8;
    local_80 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_a0 + 1;
        lVar5 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_a0)(local_a0);
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
    }
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    plVar6 = (longlong *)FUN_1415c3d50();
    puVar7 = (undefined8 *)FPaths::ProjectContentDir(local_70);
    iVar3 = *(int *)(puVar7 + 1);
    local_d8 = (undefined2 *)*puVar7;
    *puVar7 = 0;
    local_d0._0_4_ = *(int *)(puVar7 + 1);
    local_d0._4_4_ = *(int *)((longlong)puVar7 + 0xc);
    puVar7[1] = 0;
    if (local_d0._4_4_ < (int)((10 - (uint)(iVar3 != 0)) + (int)local_d0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8);
    }
    FString::PathAppend(&local_d8,L"PatchDLC",8);
    iVar3 = local_d0._4_4_;
    local_b0 = (int)local_d0;
    local_b8 = local_d8;
    iVar9 = (int)local_d0 + (3 - (uint)((int)local_d0 != 0));
    local_d8 = (undefined2 *)0x0;
    local_ac = local_d0._4_4_;
    local_d0 = 0;
    if (iVar3 < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
    }
    FString::PathAppend(&local_b8,&DAT_144cf0a0c,1);
    puVar12 = &DAT_143f3eda8;
    if (local_b0 != 0) {
      puVar12 = local_b8;
    }
    (**(code **)(*plVar6 + 0x78))(plVar6,&local_c8,puVar12,0,1);
    if (local_b8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_d8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_70[0] != 0) {
      FMemory::Free();
    }
    local_88 = local_c8 + (longlong)(int)local_c0 * 2;
    plVar6 = local_c8;
    if (local_c8 != local_88) {
      do {
        if ((int)plVar6[1] == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*plVar6;
        }
        FString::PrintfImpl(&local_98,L"/Game/PatchDLC/%ls/",puVar12);
        BVar4 = TryEnterCriticalSection(lpCriticalSection);
        if (BVar4 == 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        puVar7 = lpCriticalSection[1].LockSemaphore;
        UVar2 = lpCriticalSection[1].SpinCount;
        for (puVar10 = puVar7; puVar10 != puVar7 + (longlong)(int)UVar2 * 2; puVar10 = puVar10 + 2)
        {
          puVar12 = &DAT_143f3eda8;
          if (local_90 != 0) {
            puVar12 = local_98;
          }
          if (*(int *)(puVar10 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar10;
          }
          iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar12);
          if (iVar3 == 0) {
            if ((int)((longlong)puVar10 - (longlong)puVar7 >> 4) != -1) goto LAB_1416f654c;
            break;
          }
        }
        iVar3 = (int)lpCriticalSection[1].SpinCount;
        *(int *)&lpCriticalSection[1].SpinCount = iVar3 + 1;
        if (*(int *)((longlong)&lpCriticalSection[1].SpinCount + 4) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                    (&lpCriticalSection[1].LockSemaphore,iVar3);
        }
        puVar12 = local_98;
        puVar7 = (undefined8 *)
                 ((longlong)iVar3 * 0x10 + (longlong)lpCriticalSection[1].LockSemaphore);
        *puVar7 = 0;
        lVar5 = (longlong)local_90;
        *(int *)(puVar7 + 1) = local_90;
        if (local_90 == 0) {
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar7,local_90,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar7,puVar12,lVar5 * 2);
        }
LAB_1416f654c:
        LeaveCriticalSection(lpCriticalSection);
        if (local_98 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      } while (plVar6 != local_88);
    }
    local_e8 = (longlong *)0x0;
    local_e0 = 1;
    lVar5 = FUN_1416f87e0();
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_e8,0);
    plVar6 = local_e8;
    FString::FString(local_e8,lVar5 + 0x10);
    uVar15 = local_e0;
    lVar11 = (longlong)(int)local_e0;
    iVar3 = (int)local_e0 + 1;
    local_e0 = CONCAT44(local_e0._4_4_,iVar3);
    if (local_e0._4_4_ < iVar3) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_e8,uVar15 & 0xffffffff);
      plVar6 = local_e8;
    }
    FString::FString(plVar6 + lVar11 * 2,lVar5 + 0x20);
    TArray<FString,FDefaultAllocator>::Append<FString,FDefaultAllocator>(&local_e8,lVar5 + 0x60);
    plVar13 = local_e8;
    uVar15 = (ulonglong)(int)local_e0;
    plVar16 = local_e8 + uVar15 * 2;
    for (plVar6 = local_e8; plVar6 != plVar16; plVar6 = plVar6 + 2) {
      BVar4 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar4 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      iVar3 = TArray<FString,FDefaultAllocator>::Find(&lpCriticalSection[1].LockSemaphore,plVar6);
      if (iVar3 == -1) {
        iVar3 = (int)lpCriticalSection[1].SpinCount;
        *(int *)&lpCriticalSection[1].SpinCount = iVar3 + 1;
        if (*(int *)((longlong)&lpCriticalSection[1].SpinCount + 4) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                    (&lpCriticalSection[1].LockSemaphore,iVar3);
        }
        FString::FString((HANDLE)((longlong)iVar3 * 0x10 +
                                 (longlong)lpCriticalSection[1].LockSemaphore),plVar6);
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    FString::FString(&local_60,param_3);
    plVar16 = local_78;
    plVar6 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      uVar15 = local_e0 & 0xffffffff;
      plVar13 = local_e8;
    }
    iVar3 = (int)local_78[1];
    *(int *)(local_78 + 1) = iVar3 + 1;
    if (*(int *)((longlong)local_78 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(local_78,iVar3);
    }
    puVar7 = (undefined8 *)((longlong)iVar3 * 0x20 + *plVar16);
    *puVar7 = local_60;
    *(undefined4 *)(puVar7 + 1) = local_58;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_54;
    puVar7[2] = lpCriticalSection;
    puVar7[3] = plVar6;
    *param_2 = lpCriticalSection;
    param_2[1] = plVar6;
    uVar14 = (uint)uVar15;
    plVar6 = plVar13;
    while (uVar14 != 0) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
      uVar14 = (int)uVar15 - 1;
      uVar15 = (ulonglong)uVar14;
    }
    if (plVar13 != (longlong *)0x0) {
      FMemory::Free(plVar13);
    }
    plVar6 = local_c8;
    for (iVar3 = (int)local_c0; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  return param_2;
}



// FUNCTION 1416f6770 FUN_1416f6770 body=541 status=ok
// SIG undefined FUN_1416f6770(void)

undefined8 FUN_1416f6770(undefined8 *param_1,undefined2 **param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined **ppuVar11;
  int iVar12;
  longlong local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  
  plVar3 = (longlong *)FUN_1415c3d50();
  ppuVar11 = &PTR_DAT_1464b48a0;
  uVar10 = 2;
  while( true ) {
    puVar9 = (undefined2 *)0x0;
    puVar1 = (undefined8 *)*ppuVar11;
    iVar12 = *(int *)(param_1 + 1);
    iVar5 = *(int *)(puVar1 + 1);
    if (iVar12 < 2) {
      pvVar2 = (void *)*puVar1;
      local_48 = (undefined2 *)0x0;
      local_40 = iVar5;
      if (iVar5 == 0) {
        local_3c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar5,0);
        puVar9 = local_48;
        _guard_xfg_dispatch_icall_nop(local_48,pvVar2,(longlong)iVar5 * 2);
        iVar5 = local_40;
      }
    }
    else {
      puVar4 = (undefined2 *)(ulonglong)(iVar5 - 1);
      if (iVar5 == 0) {
        puVar4 = puVar9;
      }
      iVar6 = (int)puVar4;
      if ((iVar12 != 0) || (puVar4 = (undefined2 *)0x1, iVar6 == 0)) {
        puVar4 = puVar9;
      }
      pvVar2 = (void *)*param_1;
      local_50 = CONCAT44(local_50._4_4_,iVar12);
      iVar5 = iVar6 + (int)puVar4;
      local_58 = (undefined2 *)0x0;
      if ((iVar12 == 0) && (iVar5 == 0)) {
        local_50 = 0;
        uVar8 = 0;
        puVar4 = puVar9;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar5 + iVar12,0);
        puVar9 = local_58;
        _guard_xfg_dispatch_icall_nop(local_58,pvVar2,(longlong)iVar12 * 2);
        puVar4 = (undefined2 *)(local_50 >> 0x20);
        uVar8 = local_50 & 0xffffffff;
      }
      iVar7 = (int)uVar8;
      iVar12 = (int)puVar4;
      pvVar2 = (void *)*puVar1;
      iVar5 = iVar7;
      if (iVar6 != 0) {
        iVar5 = (uint)(iVar7 == 0) + iVar6 + iVar7;
        local_50._0_4_ = iVar5;
        if (iVar12 < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar8);
          puVar9 = local_58;
          iVar12 = local_50._4_4_;
        }
        iVar5 = (int)local_50;
        _guard_xfg_dispatch_icall_nop
                  (puVar9 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),pvVar2,(longlong)iVar6 * 2);
        (puVar9 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)))[iVar6] = 0;
      }
      local_58 = (undefined2 *)0x0;
      local_50 = 0;
      local_3c = iVar12;
    }
    puVar4 = &DAT_143f3eda8;
    if (iVar5 != 0) {
      puVar4 = puVar9;
    }
    (**(code **)(*plVar3 + 0xb0))(plVar3,&local_60,puVar4);
    if (local_60 != 0) break;
    if (puVar9 != (undefined2 *)0x0) {
      FMemory::Free(puVar9);
    }
    uVar10 = uVar10 + 1;
    ppuVar11 = ppuVar11 + 1;
    if (3 < uVar10) {
      return 0;
    }
  }
  if (param_2 == &local_48) {
    if (puVar9 != (undefined2 *)0x0) {
      FMemory::Free(puVar9);
    }
  }
  else {
    if (*param_2 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *param_2 = puVar9;
    *(int *)(param_2 + 1) = iVar5;
    *(int *)((longlong)param_2 + 0xc) = local_3c;
  }
  return 1;
}



// FUNCTION 1416f6990 FindPackagesInDirectory body=332 status=ok
// SIG undefined FindPackagesInDirectory(void)

bool FPackageName::FindPackagesInDirectory(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong *local_18;
  undefined8 local_10;
  
  iVar6 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  plVar5 = (longlong *)FUN_1415c3d50();
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  (**(code **)(*plVar5 + 0x80))(plVar5,&local_18,puVar7,&DAT_144cf42d8,1,0,1);
  lVar2 = param_1[1];
  if (0 < (int)local_10) {
    do {
      plVar5 = local_18 + (longlong)iVar6 * 2;
      cVar4 = FString::EndsWith(plVar5,&DAT_1464b4428,1);
      if ((cVar4 != '\0') || (cVar4 = FString::EndsWith(plVar5,&DAT_1464b4438,1), cVar4 != '\0')) {
        iVar1 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
        }
        FString::FString((longlong)iVar1 * 0x10 + *param_1,plVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)local_10);
  }
  lVar3 = param_1[1];
  plVar5 = local_18;
  for (iVar6 = (int)local_10; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return (int)lVar2 < (int)lVar3;
}



// FUNCTION 1416f6ae0 FindPair body=367 status=ok
// SIG undefined FindPair(void)

longlong TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
         ::FindPair(longlong *param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] != 0) {
    iVar7 = (int)(param_2 >> 4);
    uVar6 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar4 = -(uVar6 + iVar7) ^ uVar6 >> 0xd;
    uVar8 = (iVar7 - uVar6) - uVar4 ^ uVar4 >> 0xc;
    uVar6 = (uVar6 - uVar8) - uVar4 ^ uVar8 << 0x10;
    uVar4 = (uVar4 - uVar6) - uVar8 ^ uVar6 >> 5;
    uVar8 = (uVar8 - uVar6) - uVar4 ^ uVar4 >> 3;
    uVar6 = (uVar6 - uVar8) - uVar4 ^ uVar8 << 10;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar7 = *(int *)((longlong)plVar3 +
                    (((longlong)(int)((uVar4 - uVar6) - uVar8) ^ (ulonglong)(uVar6 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    iVar5 = iVar7;
    if (iVar7 != -1) {
      do {
        iVar7 = *(int *)(*param_1 + 0x10 + (longlong)iVar5 * 0x18);
        if (*(ulonglong *)(*param_1 + (longlong)iVar5 * 0x18) == param_2) break;
        iVar5 = iVar7;
      } while (iVar7 != -1);
    }
    if (iVar5 != -1) {
      lVar2 = *param_1;
      do {
        if (*(longlong *)(lVar2 + 8 + (longlong)iVar5 * 0x18) == param_3) {
          return lVar2 + ((longlong)iVar5 * 3 + 1) * 8;
        }
        if (iVar7 == -1) {
          return 0;
        }
        do {
          iVar1 = *(int *)(lVar2 + 0x10 + (longlong)iVar7 * 0x18);
          iVar5 = iVar7;
          if (*(ulonglong *)(lVar2 + (longlong)iVar7 * 0x18) == param_2) break;
          iVar5 = iVar1;
          iVar7 = iVar1;
        } while (iVar1 != -1);
        iVar7 = iVar1;
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 1416f6c50 FindScriptPackageName body=166 status=ok
// SIG undefined FindScriptPackageName(void)

longlong FPackageName::FindScriptPackageName(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_1464b45b8 != DAT_1464b45e4) {
    puVar2 = DAT_1464b45f0;
    if (DAT_1464b45f0 == (undefined *)0x0) {
      puVar2 = &DAT_1464b45e8;
    }
    iVar1 = *(int *)(puVar2 + ((longlong)((int)((ulonglong)param_1 >> 0x20) + (int)param_1) &
                              (longlong)DAT_1464b45f8 - 1U) * 4);
    if (iVar1 != -1) {
      while (lVar4 = (longlong)iVar1 * 0x18, *(longlong *)(lVar4 + DAT_1464b45b0) != param_1) {
        iVar1 = *(int *)(lVar4 + 0x10 + DAT_1464b45b0);
        if (iVar1 == -1) {
          return 0;
        }
      }
      lVar4 = lVar4 + DAT_1464b45b0;
      if (iVar1 != -1) goto LAB_1416f6cea;
    }
  }
  lVar4 = 0;
LAB_1416f6cea:
  lVar3 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 1416f6d00 FindShortestRootPath body=633 status=ok
// SIG undefined FindShortestRootPath(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FArchiveTraceRoute::FindShortestRootPath
          (undefined8 *param_1,longlong param_2,undefined1 param_3,uint param_4)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_258 [32];
  uint local_238;
  undefined1 local_228 [8];
  longlong local_220;
  longlong local_218;
  undefined8 local_210;
  longlong *local_208;
  longlong *local_200;
  longlong local_1f8 [2];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  int local_1b4;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  longlong local_158;
  undefined4 local_150;
  undefined1 local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  local_198 = 0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_164 = 0;
  local_158 = 0;
  local_150 = 0;
  local_168 = 0xffffffff;
  local_220 = param_2;
  FScopedObjectFlagMarker::SaveObjectFlags(&local_198);
  local_1e8 = 0;
  local_1e0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_238 = param_4;
  FArchiveTraceRoute(local_148,local_220,&local_1e8,param_3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((0 < (int)local_1e0 - local_1b4) || ((*(uint *)(local_220 + 8) & param_4) != 0)) {
    local_218 = 0;
    local_210 = 0;
    TMapBase<UObject_*,FTraceRouteRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>_>
    ::GenerateValueArray<FDefaultAllocator>(&local_1e8,&local_218);
    local_208 = &local_220;
    local_1f8[0] = 0;
    local_200 = local_1f8;
    TSet<TTuple<UObject_*,UProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,UProperty_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>(param_1,local_228,&local_208,0);
    lVar1 = local_218;
    iVar6 = (int)local_210;
    lVar7 = (longlong)((int)local_210 + -1);
    if (-1 < (int)local_210 + -1) {
      plVar5 = (longlong *)(local_218 + lVar7 * 0x18);
      do {
        if (0 < (int)plVar5[2]) {
          plVar2 = (longlong *)plVar5[1];
          uVar3 = 0;
          uVar4 = 0;
          do {
            if (*plVar2 != 0) {
              local_208 = (longlong *)*plVar5;
              local_200 = (longlong *)plVar5[1] + (int)uVar4;
              TSet<TTuple<UObject_*,UProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,UProperty_*,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>
                        (param_1,local_228,&local_208,0);
              break;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
            uVar3 = uVar3 + 1;
            plVar2 = plVar2 + 1;
          } while ((longlong)uVar3 < (longlong)(int)plVar5[2]);
        }
        plVar5 = plVar5 + -3;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    if (iVar6 != 0) {
      plVar5 = (longlong *)(lVar1 + 8);
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 3;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  }
  ~FArchiveTraceRoute(local_148);
  local_1a0 = 0;
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_1e8);
  FUN_141796f00(&local_198);
  local_150 = 0;
  if (local_158 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_198);
  return param_1;
}



// FUNCTION 1416f6f80 FinishDestroy body=60 status=ok
// SIG undefined FinishDestroy(void)

void UGCObjectReferencer::FinishDestroy(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    DAT_1469e6880 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
    }
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 1416f6fc0 FinishExternalReadDependencies body=562 status=ok
// SIG undefined FinishExternalReadDependencies(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FAsyncPackage::FinishExternalReadDependencies(longlong param_1)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18 [2];
  
  lVar7 = 0;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x74);
  LOCK();
  bVar8 = *piVar1 == 0;
  if (bVar8) {
    *piVar1 = 0;
  }
  UNLOCK();
  if (bVar8) {
    fVar2 = *(float *)(param_1 + 0xc4);
    dVar3 = *(double *)(param_1 + 0xd0);
    if (*(char *)(param_1 + 200) != '\0') {
      QueryPerformanceCounter(&local_res8);
      _DAT_1464b48b8 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
      dVar9 = _DAT_1464b48b8 - dVar3;
      bVar8 = (double)fVar2 < dVar9;
      if ((((bVar8) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar3)) &&
         (((double)DAT_1464b441c < dVar9 && ((double)(DAT_1464b4418 * fVar2) < dVar9)))) {
        DAT_1464b48b0 = dVar3;
      }
      if (bVar8) {
        return 0;
      }
    }
    cVar4 = IsGarbageCollectionWaiting();
    if (cVar4 == '\0') {
      *(wchar_t **)(param_1 + 0xe0) = L"ExternalReadDependencies";
      QueryPerformanceCounter(&local_res10);
      iVar5 = *(int *)(param_1 + 0xb0);
      dVar3 = (double)*(float *)(param_1 + 0xc4) -
              (((double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0) -
              *(double *)(param_1 + 0xd0));
      if (dVar3 <= 0.0010100000072270632) {
        dVar3 = 0.0010100000072270632;
      }
      if (iVar5 < *(int *)(param_1 + 0x120)) {
        do {
          if (((*(longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar5 * 8) != 0) &&
              (lVar6 = FUN_1417a53c0(), lVar6 != 0)) && (lVar6 != lVar7)) {
            dVar9 = dVar3;
            if (*(char *)(param_1 + 200) == '\0') {
              dVar9 = 0.0;
            }
            cVar4 = FUN_1417364d0(lVar6,dVar9);
            if (cVar4 == '\0') {
              return 0;
            }
            lVar7 = lVar6;
            if (*(char *)(param_1 + 200) != '\0') {
              QueryPerformanceCounter(local_res18);
              dVar3 = (double)*(float *)(param_1 + 0xc4) -
                      (((double)local_res18[0].QuadPart * DAT_1468b02f8 + 16777216.0) -
                      *(double *)(param_1 + 0xd0));
              if (dVar3 <= 0.0) {
                return 0;
              }
            }
          }
          iVar5 = *(int *)(param_1 + 0xb0) + 1;
          *(int *)(param_1 + 0xb0) = iVar5;
        } while (iVar5 < *(int *)(param_1 + 0x120));
      }
      return 2;
    }
  }
  return 0;
}



// FUNCTION 1416f7200 FinishLinker body=206 status=ok
// SIG undefined FinishLinker(void)

undefined8 FAsyncPackage::FinishLinker(longlong param_1)

{
  int iVar1;
  LARGE_INTEGER local_res8 [4];
  
  if ((*(longlong *)(param_1 + 0x50) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x50) + 0x764) == '\0')) {
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x58);
    *(wchar_t **)(param_1 + 0xe0) = L"ticking linker";
    QueryPerformanceCounter(local_res8);
    iVar1 = FUN_1417485e0(*(undefined8 *)(param_1 + 0x50),
                          *(float *)(param_1 + 0xc4) -
                          (float)(((double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0) -
                                 *(double *)(param_1 + 0xd0)),*(undefined1 *)(param_1 + 200),
                          *(undefined1 *)(param_1 + 0xc9));
    if (iVar1 != 1) {
      if ((*(char *)(param_1 + 200) != '\0') && (*(char *)(param_1 + 0xc9) == '\0')) {
        *(undefined1 *)(param_1 + 0xca) = 1;
      }
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0xcb) = 1;
      }
      return 0;
    }
  }
  return 2;
}



// FUNCTION 1416f72d0 FUN_1416f72d0 body=875 status=ok
// SIG undefined FUN_1416f72d0(void)

undefined8 FUN_1416f72d0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  undefined2 *puVar14;
  undefined4 uVar15;
  ulonglong local_res8;
  undefined1 local_res10 [8];
  code *local_38;
  ulonglong *puStack_30;
  
  *(wchar_t **)(param_1 + 0xe0) = L"finishing all objects";
  puStack_30 = &local_res8;
  lVar12 = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  local_38 = FUN_1406ddef0;
  local_res8 = local_res8 & 0xffffffffffffff00;
  lVar6 = FUN_1415d8310(&local_38,&DAT_14622e6dc);
  uVar15 = 0;
  if (*(char *)(param_1 + 0xcb) == '\0') {
    *(undefined4 *)(lVar6 + 0x40) = 0;
    if (0x7fffffff < *(uint *)(lVar6 + 0x44)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar6 + 0x38,0);
    }
    uVar15 = 1;
  }
  else {
    iVar4 = *(int *)(lVar6 + 0x40);
    plVar1 = (longlong *)(param_1 + 0x118);
    if (iVar4 != 0) {
      iVar3 = *(int *)(param_1 + 0x120);
      if (*(int *)(param_1 + 0x124) < iVar3 + iVar4) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
        iVar3 = *(int *)(param_1 + 0x120);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + (longlong)iVar3 * 8),*(void **)(lVar6 + 0x38),
                 (longlong)iVar4 << 3);
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + iVar4;
    }
    iVar4 = *(int *)(param_1 + 0x120) + -1;
    lVar6 = (longlong)iVar4;
    if (-1 < iVar4) {
      do {
        lVar8 = *(longlong *)(*plVar1 + lVar6 * 8);
        if ((lVar8 != 0) &&
           (lVar7 = UObjectBaseUtility::GetOutermost(lVar8),
           *(longlong *)(lVar7 + 0x18) == *(longlong *)(param_1 + 0x18))) {
          *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) & 0xffffcbff;
          uVar5 = *(uint *)(lVar8 + 0xc);
          lVar8 = lVar12;
          if ((int)uVar5 < (int)DAT_1469e91c4) {
            uVar13 = uVar5 & 0xffff;
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 0xffff;
              uVar13 = uVar13 - 0x10000;
            }
            lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                    (longlong)(int)uVar13 * 0x18;
          }
          *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x20000000;
          *(undefined8 *)(*plVar1 + lVar6 * 8) = 0;
        }
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
    lVar6 = *(longlong *)(param_1 + 0x58);
    if (lVar6 != 0) {
      iVar4 = *(int *)(lVar6 + 0xc);
      lVar8 = lVar12;
      if (iVar4 < (int)DAT_1469e91c4) {
        uVar13 = iVar4 >> 0x1f & 0xffff;
        uVar5 = iVar4 + uVar13;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)((uVar5 & 0xffff) - uVar13) * 0x18;
      }
      if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) {
        if (*(char *)(param_1 + 0xce) != '\0') {
          *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) & 0xffffcbff;
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x58) + 0xc);
          if (iVar4 < (int)DAT_1469e91c4) {
            uVar13 = iVar4 >> 0x1f & 0xffff;
            uVar5 = iVar4 + uVar13;
            lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                     (longlong)(int)((uVar5 & 0xffff) - uVar13) * 0x18;
          }
          *(uint *)(lVar12 + 8) = *(uint *)(lVar12 + 8) | 0x20000000;
          local_res8 = 0;
          uVar11 = UPackage::GetPrivateStaticClass();
          uVar9 = GetTransientPackage();
          uVar11 = FUN_141791c20(local_res10,uVar9,uVar11,0);
          puVar10 = (undefined8 *)FName::ToString(uVar11,&local_38);
          if (*(int *)(puVar10 + 1) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)*puVar10;
          }
          (**(code **)(**(longlong **)(param_1 + 0x58) + 0x138))
                    (*(longlong **)(param_1 + 0x58),puVar14,0,0x35);
          if (local_38 != (code *)0x0) {
            FMemory::Free();
          }
        }
        if (*(longlong *)(param_1 + 0x50) != 0) {
          FUN_141736700(*(longlong *)(param_1 + 0x50) + 0x200);
          *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 800) = 0;
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
      }
    }
  }
  uVar11 = FUN_1417555a0();
  FUN_141752a10(uVar11);
  puStack_30 = &local_res8;
  local_38 = FUN_1406ddef0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  local_res8 = local_res8 & 0xffffffffffffff00;
  lVar12 = FUN_1415d8310(&local_38,&DAT_14622e6dc);
  plVar2 = (longlong *)(param_1 + 0x128);
  plVar1 = (longlong *)(lVar12 + 0x48);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(lVar12 + 0x50);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(lVar12 + 0x54);
    *(undefined8 *)(lVar12 + 0x50) = 0;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_141736700(*(longlong *)(param_1 + 0x50) + 0x200);
  }
  FAsyncPackage::CallCompletionCallbacks(param_1,1,uVar15);
  return 2;
}



// FUNCTION 1416f7640 FireCompletedCompiledInImports body=581 status=ok
// SIG undefined FireCompletedCompiledInImports(void)

bool FEDLBootNotificationManager::FireCompletedCompiledInImports(longlong param_1)

{
  longlong *plVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  longlong lVar3;
  BOOL BVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int local_70;
  int iStack_6c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd0);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar2 = *(int *)(param_1 + 0xa8);
  plVar7 = *(longlong **)(param_1 + 0xa0);
  uVar8 = 0;
  uVar6 = (longlong)*(int *)(param_1 + 0xa8) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0xa8) < plVar7) {
    uVar6 = uVar8;
  }
  if (uVar6 == 0) {
LAB_1416f7839:
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if (*(int *)(param_1 + 0xac) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo((ulonglong *)(param_1 + 0xa0),0);
    }
    LeaveCriticalSection(lpCriticalSection);
    return iVar2 != 0;
  }
  plVar1 = (longlong *)(param_1 + 0x50);
LAB_1416f76e0:
  lVar3 = *plVar7;
  local_70 = -1;
  iStack_6c = -1;
  TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
  ::ConditionalRehash(plVar1,*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x84),0);
  if (*(int *)(param_1 + 0x98) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar5 = param_1 + 0x88;
    }
    iStack_6c = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                                 (longlong)*(int *)(param_1 + 0x98) - 1U) * 4);
    local_70 = iStack_6c;
    if (iStack_6c != -1) {
      do {
        iStack_6c = *(int *)((longlong)local_70 * 0x20 + 0x18 + *plVar1);
        if (*(longlong *)((longlong)local_70 * 0x20 + *plVar1) == lVar3) break;
        local_70 = iStack_6c;
      } while (iStack_6c != -1);
    }
  }
  do {
    if ((local_70 == -1) ||
       (FUN_1416f7890(*(undefined8 *)((longlong)local_70 * 0x20 + 8 + *plVar1),
                      *plVar1 + 8 + (longlong)local_70 * 0x20), iStack_6c == -1)) break;
    local_70 = iStack_6c;
    do {
      iStack_6c = *(int *)((longlong)local_70 * 0x20 + 0x18 + *plVar1);
      if (*(longlong *)((longlong)local_70 * 0x20 + *plVar1) == lVar3) break;
      local_70 = iStack_6c;
    } while (iStack_6c != -1);
  } while( true );
  TSet<TTuple<FName,FEventLoadNodePtr>,TDefaultMapHashableKeyFuncs<FName,FEventLoadNodePtr,1>,FDefaultSetAllocator>
  ::Remove(plVar1,lVar3);
  plVar7 = plVar7 + 1;
  uVar8 = uVar8 + 1;
  if (uVar8 == uVar6) goto LAB_1416f7839;
  goto LAB_1416f76e0;
}



// FUNCTION 1416f7890 FUN_1416f7890 body=673 status=ok
// SIG undefined FUN_1416f7890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416f7890(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  uint local_108;
  undefined1 local_104 [4];
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_e0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar1 = *(uint *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  if (uVar1 == 0) {
    if (iVar2 == 1) {
      local_100 = *(undefined8 *)(param_1 + 0x18);
      local_84 = *(undefined4 *)(param_1 + 0x1e4);
      lVar4 = *(longlong *)(param_1 + 0x1d8);
      *(undefined1 *)(param_1 + 0x1e0) = 4;
      uStack_f8 = local_84;
      if (DAT_1469e6898 != 0) {
        local_84 = FUN_1416f9b90(0x7fffffff);
      }
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      local_e0 = lVar4;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f4d0b0;
        puVar3[1] = local_100;
        puVar3[2] = CONCAT44(uStack_f4,uStack_f8);
        puVar3[3] = local_e0;
      }
      local_d8[0] = &LAB_1416eb990;
    }
    else {
      if (iVar2 != 2) {
        return;
      }
      local_100 = *(undefined8 *)(param_1 + 0x18);
      local_84 = *(undefined4 *)(param_1 + 0x1e4);
      lVar4 = *(longlong *)(param_1 + 0x1d8);
      uStack_f8 = local_84;
      if (DAT_1469e6898 != 0) {
        local_84 = FUN_1416f9b90(0x7fffffff);
      }
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      local_e0 = lVar4;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f4d0b0;
        puVar3[1] = local_100;
        puVar3[2] = CONCAT44(uStack_f4,uStack_f8);
        puVar3[3] = local_e0;
      }
      local_d8[0] = &LAB_1416eb9c0;
    }
    local_7c = *(int *)(lVar4 + 0x2c0) + 1;
    local_88 = *(undefined4 *)(param_1 + 0x44);
    *(int *)(lVar4 + 0x2c0) = local_7c;
    local_80 = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,local_d8);
    TArray<FAsyncLoadEvent,FDefaultAllocator>::HeapPush(lVar4 + 0x2c8,&local_88,local_104);
    if (local_38 != 0) {
      plVar5 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar5 = local_48;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      plVar5 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar5 = local_a8;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_a8 == (longlong *)0x0) {
      return;
    }
    FMemory::Free();
    return;
  }
  if (iVar2 == 0) {
    if (-1 < (int)uVar1) {
      lVar4 = param_1 + 0x208;
      goto LAB_1416f7b08;
    }
    local_108 = ~uVar1;
    lVar4 = param_1 + 0x1e8;
  }
  else {
    if (iVar2 == 1) {
      if ((int)uVar1 < 0) {
        local_108 = ~uVar1;
        lVar4 = param_1 + 0x1f8;
        goto LAB_1416f7b10;
      }
      lVar4 = param_1 + 0x228;
    }
    else {
      if (iVar2 != 2) goto LAB_1416f7b15;
      lVar4 = param_1 + 0x218;
    }
LAB_1416f7b08:
    local_108 = uVar1 - 1;
  }
LAB_1416f7b10:
  TArray<int,FDefaultAllocator>::HeapPush(lVar4,&local_108);
LAB_1416f7b15:
  if (*(char *)(param_1 + 0x1e0) == '\x06') {
    FUN_1416ec6a0(param_1,0);
  }
  return;
}



// FUNCTION 1416f7b40 FUN_1416f7b40 body=547 status=ok
// SIG undefined FUN_1416f7b40(void)

void FUN_1416f7b40(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  double dVar11;
  LARGE_INTEGER local_res8;
  longlong local_48;
  int local_40;
  int local_3c;
  longlong local_38 [2];
  
  QueryPerformanceCounter(&local_res8);
  dVar11 = (double)local_res8.QuadPart * DAT_1468b02f8;
  *(undefined4 *)(param_1 + 0x110) = 4;
  *(double *)(param_1 + 400) = dVar11 + 16777216.0;
  if (*(char *)(param_1 + 0x114) != '\0') {
    FUN_1416f8100(param_1);
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    plVar6 = (longlong *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x100);
    plVar4 = (longlong *)FUN_141671940(local_38,plVar6,0);
    lVar7 = plVar4[1];
    local_48 = *plVar4;
    *plVar4 = 0;
    local_40 = (int)plVar4[1];
    local_3c = *(int *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
    iVar10 = local_40;
    if (local_3c < (int)((6 - (uint)((int)lVar7 != 0)) + local_40)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
      iVar10 = local_40;
    }
    local_40 = (6 - (uint)(iVar10 != 0)) + iVar10;
    if (local_3c < local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar10);
    }
    iVar3 = local_3c;
    iVar2 = local_40;
    lVar7 = local_48;
    lVar8 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
    *(undefined8 *)(local_48 + lVar8 * 2) = 0x7800650075002e;
    *(undefined2 *)(local_48 + 8 + lVar8 * 2) = 0x70;
    *(undefined2 *)(local_48 + 10 + lVar8 * 2) = 0;
    if (plVar6 == &local_48) {
      if (local_48 != 0) {
        FMemory::Free(local_48);
      }
    }
    else {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      *plVar6 = lVar7;
      *(int *)(param_1 + 0x178) = iVar2;
      *(int *)(param_1 + 0x17c) = iVar3;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    uVar5 = FPlatformFileManager::Get();
    plVar4 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar5);
    if (*(int *)(param_1 + 0x178) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*plVar6;
    }
    plVar6 = (longlong *)(**(code **)(*plVar4 + 0x100))(plVar4,puVar9);
    *(longlong **)(param_1 + 0x90) = plVar6;
    lVar7 = (**(code **)(*plVar6 + 8))(plVar6,0);
    *(longlong *)(param_1 + 0x98) = lVar7;
    if (*(char *)(lVar7 + 0x71) != '\0') {
      FArchiveAsync2::TotalSize(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1416f7d70 FUN_1416f7d70 body=901 status=ok
// SIG undefined FUN_1416f7d70(void)

void FUN_1416f7d70(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  BOOL BVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar12;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  cVar4 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
  if (cVar4 != '\0') {
    lVar7 = FUN_1416f86a0();
    piVar8 = (int *)0x0;
    LOCK();
    bVar11 = *(int *)(lVar7 + 0x74) == 0;
    if (bVar11) {
      *(int *)(lVar7 + 0x74) = 0;
    }
    UNLOCK();
    if (!bVar11) {
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x74);
      if (iVar5 == 0) {
        *(int *)(lVar7 + 0x74) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      LowLevelFatalErrorHandler
                ("Unknown",0x1be3,
                 L"Cannot Flush Async Loading while async loading is suspended (%d)",iVar5);
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x74);
      if (iVar5 == 0) {
        *(int *)(lVar7 + 0x74) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      FDebug::AssertFailed
                (&DAT_144cf0fbe,"Unknown",0x1be3,
                 L"Cannot Flush Async Loading while async loading is suspended (%d)",
                 CONCAT44(uVar12,iVar5));
    }
    if ((param_1 == -1) ||
       (cVar4 = FAsyncLoadingThread::ContainsRequestID(lVar7,param_1), cVar4 != '\0')) {
      TBaseMulticastDelegate<void>::Broadcast(&DAT_1464aeec0);
      QueryPerformanceCounter(&local_res10);
      dVar2 = (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0;
      if (param_1 != -1) {
        piVar8 = (int *)operator_new(0x58);
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          *piVar8 = param_1;
          piVar8[2] = 0;
          piVar8[3] = 0;
          piVar8[4] = 0;
          piVar8[5] = 0;
          piVar8[10] = 0;
          piVar8[0xb] = 0;
          piVar8[0xc] = 0;
          piVar8[0xd] = 0;
          piVar8[0xe] = -1;
          piVar8[0xf] = 0;
          piVar8[0x12] = 0;
          piVar8[0x13] = 0;
          piVar8[0x14] = 0;
        }
      }
      cVar4 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
      dVar3 = dVar2;
      while (cVar4 != '\0') {
        FUN_14170e020(lVar7,0,0,0,piVar8);
        if (param_1 != -1) {
          BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x288));
          if (BVar6 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x288));
          }
          if (*(int *)(lVar7 + 0x240) != *(int *)(lVar7 + 0x26c)) {
            lVar9 = *(longlong *)(lVar7 + 0x278);
            if (*(longlong *)(lVar7 + 0x278) == 0) {
              lVar9 = lVar7 + 0x270;
            }
            iVar5 = *(int *)(lVar9 + ((longlong)*(int *)(lVar7 + 0x280) - 1U & (longlong)param_1) *
                                     4);
            if (iVar5 != -1) {
              do {
                if (*(int *)(*(longlong *)(lVar7 + 0x238) + (longlong)iVar5 * 0xc) == param_1)
                goto LAB_1416f7fab;
                iVar5 = *(int *)(*(longlong *)(lVar7 + 0x238) + 4 + (longlong)iVar5 * 0xc);
              } while (iVar5 != -1);
            }
          }
          iVar5 = -1;
LAB_1416f7fab:
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x288));
          if (iVar5 == -1) break;
        }
        if (DAT_1469e689c != '\0') {
          uVar10 = FUN_1415d80a0();
          FUN_1415df310(uVar10);
          FUN_1416b1810(0x38d1b717);
        }
        QueryPerformanceCounter(&local_res18);
        dVar1 = (double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0;
        if (0.10000000149011612 <= dVar1 - dVar3) {
          FWindowsApplication::PumpMessages();
          dVar3 = dVar1;
        }
        cVar4 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
      }
      if (piVar8 != (int *)0x0) {
        piVar8[0x14] = 0;
        if (*(longlong *)(piVar8 + 0x12) != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (piVar8 + 2);
        FMemory::operator_delete(piVar8,0x58);
      }
      QueryPerformanceCounter(&local_res20);
      DAT_1469e6878 = DAT_1469e6878 + 1;
      DAT_1469e6870 =
           DAT_1469e6870 + (((double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0) - dVar2);
    }
  }
  return;
}



// FUNCTION 1416f8100 FUN_1416f8100 body=239 status=ok
// SIG undefined FUN_1416f8100(void)

void FUN_1416f8100(longlong param_1)

{
  longlong *plVar1;
  LARGE_INTEGER local_res8;
  
  FArchiveAsync2::WaitForIntialPhases(param_1,0);
  FArchiveAsync2::WaitRead(param_1,0);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    QueryPerformanceCounter(&local_res8);
    plVar1 = *(longlong **)(param_1 + 0xc0);
    if (*(char *)((longlong)plVar1 + 0x71) == '\0') {
      (**(code **)(*plVar1 + 8))(plVar1,0);
      plVar1 = *(longlong **)(param_1 + 0xc0);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)*plVar1)(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + (*plVar1 - plVar1[2]);
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  plVar1 = *(longlong **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (plVar1 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar1 + 0x71) == '\0') {
      (**(code **)(*plVar1 + 8))(plVar1,0);
      plVar1 = *(longlong **)(param_1 + 0xa0);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)*plVar1)(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1416f81f0 FlushPrecacheBlock body=93 status=ok
// SIG undefined FlushPrecacheBlock(void)

void FArchiveAsync2::FlushPrecacheBlock(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8);
  *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + (*plVar1 - plVar1[2]);
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}



// FUNCTION 1416f8250 FUN_1416f8250 body=64 status=ok
// SIG undefined FUN_1416f8250(void)

void FUN_1416f8250(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x2e8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2f0) = 0xffffffffffffffff;
  if (*(char *)(lVar1 + 0x295) != '\0') {
    return;
  }
  if (*(char *)(lVar1 + 0x2a2) != '\0') {
    FArchiveAsync2::FlushPrecacheBlock(*(undefined8 *)(lVar1 + 0x318));
    return;
  }
  FArchiveAsync2::FlushPrecacheBlock(0);
  return;
}



// FUNCTION 1416f8290 FUN_1416f8290 body=16 status=ok
// SIG undefined FUN_1416f8290(void)

void FUN_1416f8290(void)

{
  if (DAT_1469e6a98 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416f829c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1469e6a98)();
    return;
  }
  return;
}



// FUNCTION 1416f82b0 ForceRegenerateClass body=138 status=ok
// SIG undefined ForceRegenerateClass(void)

undefined1 FLinkerLoad::ForceRegenerateClass(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1417a53c0(param_2);
  if (lVar2 != 0) {
    FUN_141740c00(param_1 + 0x200,param_2);
    cVar1 = HasUnresolvedDependencies(lVar2);
    if (cVar1 != '\0') {
      FUN_141709ce0(lVar2,param_2);
    }
    if ((*(int *)(lVar2 + 0x78c) != -1) || (*(char *)(lVar2 + 0x788) != '\0')) {
      FUN_1416f46f0(lVar2,param_2);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1416f8340 FUN_1416f8340 body=28 status=ok
// SIG undefined FUN_1416f8340(void)

void FUN_1416f8340(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1416f8770();
  FUN_1416f8360(uVar1,param_1);
  return;
}



// FUNCTION 1416f8360 FUN_1416f8360 body=138 status=ok
// SIG undefined FUN_1416f8360(void)

void FUN_1416f8360(longlong param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  
  if (param_2 != -1) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
    BVar2 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar2 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar1 = *(int *)(param_1 + 0x98);
    *(int *)(param_1 + 0x98) = iVar1 + 1;
    if (*(int *)(param_1 + 0x9c) < iVar1 + 1) {
      TArray<float,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_1 + 0x50,iVar1);
    }
    lVar3 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar3 = param_1 + 0x50;
    }
    *(int *)(lVar3 + (longlong)iVar1 * 4) = param_2;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 1416f83f0 FUN_1416f83f0 body=682 status=ok
// SIG undefined FUN_1416f83f0(void)

void FUN_1416f83f0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int local_res10;
  int local_res18;
  longlong local_res20;
  
  iVar10 = (int)param_2[1];
  iVar6 = *(int *)((longlong)param_2 + 0x34);
  iVar13 = iVar10 - iVar6;
  local_res18 = 0;
  if (0 < iVar13) {
    local_res20 = 0;
    do {
      uVar2 = *(undefined8 *)(local_res20 + *param_2);
      *(undefined8 *)(param_1 + 0xe0) = uVar2;
      FUN_1417a8ce0(uVar2,0x10);
      plVar9 = *(longlong **)(param_1 + 0xe0);
      if ((*(uint *)(plVar9 + 1) >> 4 & 1) == 0) {
        (**(code **)(*plVar9 + 0xa8))(plVar9,param_1);
      }
      else {
        (**(code **)(*(longlong *)plVar9[2] + 0x328))((longlong *)plVar9[2],plVar9,param_1);
      }
      if (0 < *(int *)(param_1 + 0xf0)) {
        FUN_141709200(param_2,((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) +
                              *(int *)(param_1 + 0xf0));
        local_res10 = 0;
        if (0 < *(int *)(param_1 + 0xf0)) {
          lVar12 = 0;
          do {
            uVar2 = *(undefined8 *)(lVar12 + *(longlong *)(param_1 + 0xe8));
            if (*(int *)((longlong)param_2 + 0x34) == 0) {
              iVar10 = (int)param_2[1];
              *(int *)(param_2 + 1) = iVar10 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar10 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
              }
              TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
            }
            else {
              iVar10 = (int)param_2[6];
              iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
              iVar6 = *(int *)(*param_2 + 4 + (longlong)iVar10 * 8);
              *(int *)(param_2 + 6) = iVar6;
              *(int *)((longlong)param_2 + 0x34) = iVar5;
              if (iVar5 != 0) {
                *(undefined4 *)(*param_2 + (longlong)iVar6 * 8) = 0xffffffff;
              }
            }
            plVar9 = (longlong *)param_2[4];
            if ((longlong *)param_2[4] == (longlong *)0x0) {
              plVar9 = param_2 + 2;
            }
            iVar6 = iVar10;
            if (iVar10 < 0) {
              iVar6 = iVar10 + 0x1f;
            }
            local_res10 = local_res10 + 1;
            puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
            lVar12 = lVar12 + 8;
            *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
            *(undefined8 *)(*param_2 + (longlong)iVar10 * 8) = uVar2;
          } while (local_res10 < *(int *)(param_1 + 0xf0));
        }
        *(undefined4 *)(param_1 + 0xf0) = 0;
        if (*(int *)(param_1 + 0xf4) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0xe8),0);
        }
      }
      iVar10 = (int)param_2[1];
      local_res18 = local_res18 + 1;
      iVar6 = *(int *)((longlong)param_2 + 0x34);
      local_res20 = local_res20 + 8;
    } while (local_res18 < iVar10 - iVar6);
  }
  iVar10 = (iVar10 - iVar6) - iVar13;
  if (iVar10 != 0) {
    bVar4 = (byte)iVar13 & 0x1f;
    uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    lVar12 = (longlong)iVar13 * 8;
    do {
      if (*(int *)((longlong)param_2 + 0x34) != 0) {
        *(int *)(*param_2 + (longlong)(int)param_2[6] * 8) = iVar13;
      }
      lVar3 = *param_2;
      *(undefined4 *)(lVar3 + lVar12) = 0xffffffff;
      if (*(int *)((longlong)param_2 + 0x34) < 1) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (undefined4)param_2[6];
      }
      *(undefined4 *)(lVar3 + 4 + lVar12) = uVar7;
      *(int *)((longlong)param_2 + 0x34) = *(int *)((longlong)param_2 + 0x34) + 1;
      *(int *)(param_2 + 6) = iVar13;
      plVar9 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar9 = param_2 + 2;
      }
      iVar6 = iVar13;
      if (iVar13 < 0) {
        iVar6 = iVar13 + 0x1f;
      }
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 8;
      puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
      uVar8 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar8;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 1416f86a0 FUN_1416f86a0 body=123 status=ok
// SIG undefined FUN_1416f86a0(void)

undefined * FUN_1416f86a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e6f40) {
    _Init_thread_header(&DAT_1469e6f40);
    if (DAT_1469e6f40 == -1) {
      FUN_1416e39e0(&DAT_1469e6c60);
      atexit((_func_5014 *)&LAB_143e7c100);
      _Init_thread_footer(&DAT_1469e6f40);
      return &DAT_1469e6c60;
    }
  }
  return &DAT_1469e6c60;
}



// FUNCTION 1416f8720 FUN_1416f8720 body=74 status=ok
// SIG undefined FUN_1416f8720(void)

undefined8 FUN_1416f8720(int param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = FUN_1416f8770();
  if ((-1 < param_1) && (param_1 < *(int *)(lVar2 + 0x48))) {
    uVar3 = param_1 >> 0x1f & 0x7f;
    uVar1 = param_1 + uVar3;
    return *(undefined8 *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x38) + (longlong)((int)uVar1 >> 7) * 8) +
            (ulonglong)((uVar1 & 0x7f) - uVar3) * 8);
  }
  return 0;
}



// FUNCTION 1416f8770 FUN_1416f8770 body=103 status=ok
// SIG undefined FUN_1416f8770(void)

undefined8 FUN_1416f8770(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e6ad0) {
    _Init_thread_header(&DAT_1469e6ad0);
    if (DAT_1469e6ad0 == -1) {
      DAT_1469e6ac8 = FUN_1416e8990(local_res8);
      _Init_thread_footer(&DAT_1469e6ad0);
    }
  }
  return DAT_1469e6ac8;
}



// FUNCTION 1416f87e0 FUN_1416f87e0 body=123 status=ok
// SIG undefined FUN_1416f87e0(void)

undefined * FUN_1416f87e0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e6c40) {
    _Init_thread_header(&DAT_1469e6c40);
    if (DAT_1469e6c40 == -1) {
      FUN_1416e4640(&DAT_1469e6af0);
      atexit((_func_5014 *)&LAB_143e7c310);
      _Init_thread_footer(&DAT_1469e6c40);
      return &DAT_1469e6af0;
    }
  }
  return &DAT_1469e6af0;
}



// FUNCTION 1416f8860 FUN_1416f8860 body=108 status=ok
// SIG undefined FUN_1416f8860(void)

undefined ** FUN_1416f8860(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e6ad4) {
    _Init_thread_header(&DAT_1469e6ad4);
    if (DAT_1469e6ad4 == -1) {
      atexit(FUN_143e7c240);
      _Init_thread_footer(&DAT_1469e6ad4);
      return &PTR_StartProfileThreadUsage_1464b4830;
    }
  }
  return &PTR_StartProfileThreadUsage_1464b4830;
}



// FUNCTION 1416f88d0 GetAddedNodes body=547 status=ok
// SIG undefined GetAddedNodes(void)

void FEventLoadNodeArray::GetAddedNodes(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar4 = 0;
    do {
      local_28 = (undefined4)param_3;
      uStack_24 = (undefined4)((ulonglong)param_3 >> 0x20);
      if (*(char *)(param_1 + 0x15 + (longlong)iVar4 * 0x18) != '\0') {
        iVar6 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar6 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar6);
        }
        puVar1 = (undefined4 *)(*param_2 + (longlong)iVar6 * 0x10);
        *puVar1 = local_28;
        puVar1[1] = uStack_24;
        puVar1[2] = 0;
        puVar1[3] = iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    uVar7 = 0;
    if (0 < *(int *)(param_1 + 0x58)) {
      do {
        iVar4 = 0;
        uVar5 = ~uVar7;
        do {
          if (uVar5 == 0) {
            lVar2 = param_1 + (longlong)iVar4 * 0x18;
          }
          else {
            if ((int)uVar7 < 0) {
              iVar6 = iVar4 + uVar5 * 3 + *(int *)(param_1 + 100) + -3;
            }
            else {
              iVar6 = (iVar4 - (uVar5 * 2 + 2)) + *(int *)(param_1 + 0x60);
            }
            lVar2 = *(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x18;
          }
          if (*(char *)(lVar2 + 0x15) != '\0') {
            iVar6 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar6 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar6);
            }
            puVar1 = (undefined4 *)(*param_2 + (longlong)iVar6 * 0x10);
            *puVar1 = local_28;
            puVar1[1] = uStack_24;
            puVar1[2] = uVar5;
            puVar1[3] = iVar4;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 2);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < *(int *)(param_1 + 0x58));
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x5c)) {
      do {
        iVar4 = iVar4 + 1;
        iVar6 = 0;
        do {
          if (iVar4 == 0) {
            lVar2 = param_1 + (longlong)iVar6 * 0x18;
          }
          else {
            if (iVar4 < 0) {
              iVar3 = (iVar6 - (iVar4 * 2 + 2)) + *(int *)(param_1 + 0x60);
            }
            else {
              iVar3 = iVar6 + iVar4 * 3 + *(int *)(param_1 + 100) + -3;
            }
            lVar2 = *(longlong *)(param_1 + 0x48) + (longlong)iVar3 * 0x18;
          }
          if (*(char *)(lVar2 + 0x15) != '\0') {
            iVar3 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar3 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
            }
            puVar1 = (undefined4 *)(*param_2 + (longlong)iVar3 * 0x10);
            *puVar1 = local_28;
            puVar1[1] = uStack_24;
            puVar1[2] = iVar4;
            puVar1[3] = iVar6;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 3);
      } while (iVar4 < *(int *)(param_1 + 0x5c));
    }
  }
  return;
}



// FUNCTION 1416f8b00 GetArchiveName body=33 status=ok
// SIG undefined GetArchiveName(void)

undefined8 FArchiveAsync2::GetArchiveName(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x170);
  return param_2;
}



// FUNCTION 1416f8b30 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FArchiveTraceRoute::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FArchiveTraceRoute",0x26);
  return param_2;
}



// FUNCTION 1416f8b70 GetAssets body=364 status=ok
// SIG undefined GetAssets(void)

void FConvertedBlueprintsDependencies::GetAssets
               (longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  
  puVar10 = (undefined8 *)0x0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        puVar7 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == param_2) {
          if (iVar4 != -1) goto LAB_1416f8be3;
          break;
        }
        iVar4 = *(int *)(puVar7 + 2);
      } while (iVar4 != -1);
    }
  }
  puVar7 = puVar10;
LAB_1416f8be3:
  puVar6 = puVar7 + 1;
  if (puVar7 == (undefined8 *)0x0) {
    puVar6 = puVar10;
  }
  if ((puVar6 != (undefined8 *)0x0) && ((code *)*puVar6 != (code *)0x0)) {
    (*(code *)*puVar6)(param_3);
    iVar4 = (int)param_3[1];
    if (iVar4 != 0) {
      bVar2 = IsBlueprintDependencyDataNull(*param_3);
      puVar7 = puVar10;
      do {
        bVar2 = bVar2 ^ 1;
        iVar8 = (int)puVar10;
        puVar10 = (undefined8 *)(ulonglong)(iVar8 + 1U);
        if ((int)(iVar8 + 1U) < iVar4) {
          lVar1 = *param_3;
          do {
            bVar3 = IsBlueprintDependencyDataNull((longlong)(int)puVar10 * 0x30 + lVar1);
            if (bVar2 != (bVar3 ^ 1)) break;
            uVar9 = (int)puVar10 + 1;
            puVar10 = (undefined8 *)(ulonglong)uVar9;
          } while ((int)uVar9 < iVar4);
        }
        iVar11 = (int)puVar10 - iVar8;
        if (bVar2 != 0) {
          iVar12 = (int)puVar7;
          if (iVar12 != iVar8) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar12 * 0x30 + *param_3),
                       (void *)((longlong)iVar8 * 0x30 + *param_3),(longlong)iVar11 * 0x30);
          }
          puVar7 = (undefined8 *)(ulonglong)(uint)(iVar12 + iVar11);
        }
      } while ((int)puVar10 < iVar4);
      *(int *)(param_3 + 1) = (int)puVar7;
    }
  }
  return;
}



// FUNCTION 1416f8ce0 GetAsyncLoadPercentage body=30 status=ok
// SIG undefined GetAsyncLoadPercentage(void)

void GetAsyncLoadPercentage(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1416f86a0();
  FAsyncLoadingThread::GetAsyncLoadPercentage(uVar1,param_1);
  return;
}



// FUNCTION 1416f8d00 GetAsyncLoadPercentage body=623 status=ok
// SIG undefined GetAsyncLoadPercentage(void)

float FAsyncLoadingThread::GetAsyncLoadPercentage(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  fVar6 = -1.0;
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x210));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x210));
  }
  lVar1 = *param_2;
  if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
    lVar4 = *(longlong *)(param_1 + 0x1e8);
    if (*(longlong *)(param_1 + 0x1e8) == 0) {
      lVar4 = param_1 + 0x1e0;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0x1f0) - 1U) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x1a8);
      do {
        lVar5 = (longlong)iVar3;
        if (*(longlong *)(lVar4 + lVar5 * 0x18) == lVar1) {
          if (((iVar3 != -1) && (lVar4 = lVar4 + lVar5 * 0x18, lVar4 != 0)) &&
             (lVar1 = *(longlong *)(lVar4 + 8), lVar1 != 0)) {
            fVar6 = *(float *)(lVar1 + 0xf0);
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
      } while (iVar3 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x210));
  if (fVar6 < 0.0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
    }
    lVar1 = *param_2;
    if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
      lVar4 = *(longlong *)(param_1 + 200);
      if (*(longlong *)(param_1 + 200) == 0) {
        lVar4 = param_1 + 0xc0;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                               (longlong)*(int *)(param_1 + 0xd0) - 1U) * 4);
      if (iVar3 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x88);
        do {
          lVar5 = (longlong)iVar3;
          if (*(longlong *)(lVar4 + lVar5 * 0x18) == lVar1) {
            if (((iVar3 != -1) && (lVar4 = lVar4 + lVar5 * 0x18, lVar4 != 0)) &&
               (lVar1 = *(longlong *)(lVar4 + 8), lVar1 != 0)) {
              fVar6 = *(float *)(lVar1 + 0xf0);
            }
            break;
          }
          iVar3 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        } while (iVar3 != -1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
    if ((fVar6 < 0.0) && (lVar1 = *param_2, *(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)))
    {
      lVar4 = *(longlong *)(param_1 + 0x160);
      if (*(longlong *)(param_1 + 0x160) == 0) {
        lVar4 = param_1 + 0x158;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                               (longlong)*(int *)(param_1 + 0x168) - 1U) * 4);
      if (iVar3 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x120);
        do {
          lVar5 = (longlong)iVar3;
          if (*(longlong *)(lVar4 + lVar5 * 0x18) == lVar1) {
            if (iVar3 == -1) {
              return fVar6;
            }
            lVar4 = lVar4 + lVar5 * 0x18;
            if (lVar4 == 0) {
              return fVar6;
            }
            lVar1 = *(longlong *)(lVar4 + 8);
            if (lVar1 == 0) {
              return fVar6;
            }
            return *(float *)(lVar1 + 0xf0);
          }
          iVar3 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        } while (iVar3 != -1);
      }
    }
  }
  return fVar6;
}



// FUNCTION 1416f8f70 FUN_1416f8f70 body=362 status=ok
// SIG undefined FUN_1416f8f70(void)

undefined * FUN_1416f8f70(void)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  char local_res8 [8];
  
  if (DAT_1469e7010 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              )) {
    return &DAT_1469e700c;
  }
  _Init_thread_header(&DAT_1469e7010);
  if (DAT_1469e7010 == -1) {
    local_res8[0] = '\x01';
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"/Script/Engine.StreamingSettings",L"s.AsyncLoadingThreadEnabled",
               local_res8,&DAT_1468e2360);
    uVar3 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar3,L"NoAsyncLoadingThread");
    uVar3 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar3,L"AsyncLoadingThread");
    if ((cVar2 == '\0') &&
       (((local_res8[0] == '\0' || (cVar2 = FUN_141636a40(), cVar2 == '\0')) || (cVar1 != '\0')))) {
      DAT_1469e700c = 0;
    }
    else {
      DAT_1469e700c = 1;
    }
    local_res8[0] = '\x01';
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"/Script/Engine.StreamingSettings",L"s.AsyncPostLoadEnabled",
               local_res8,&DAT_1468e2360);
    uVar3 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar3,L"NoAsyncPostLoad");
    uVar3 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar3,L"AsyncPostLoad");
    if ((cVar2 == '\0') &&
       (((local_res8[0] == '\0' || (cVar2 = FUN_141636a40(), cVar2 == '\0')) || (cVar1 != '\0')))) {
      DAT_1469e700d = 0;
    }
    else {
      DAT_1469e700d = 1;
    }
    _Init_thread_footer(&DAT_1469e7010);
    return &DAT_1469e700c;
  }
  return &DAT_1469e700c;
}



// FUNCTION 1416f90e0 FUN_1416f90e0 body=1371 status=ok
// SIG undefined FUN_1416f90e0(void)

undefined8 * FUN_1416f90e0(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  wchar_t **ppwVar9;
  uint uVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  uint uVar14;
  uint uVar15;
  wchar_t *pwVar16;
  wchar_t **ppwVar17;
  wchar_t *local_68;
  undefined8 local_60;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  wchar_t *local_40;
  
  if (0 < DAT_1468e2260) {
    iVar8 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    local_60 = CONCAT44(local_60._4_4_,iVar8);
    local_68 = (wchar_t *)0x0;
    if (iVar8 == 0) {
      local_60 = 0;
      local_60._0_4_ = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar8,0);
      _guard_xfg_dispatch_icall_nop(local_68,_Src,(longlong)iVar8 * 2);
    }
    pwVar12 = (wchar_t *)0x0;
    for (pwVar5 = local_68; pwVar16 = pwVar12, uVar14 = 0, pwVar5 != local_68 + (int)local_60;
        pwVar5 = pwVar5 + 1) {
      if (*pwVar5 == L'.') {
        iVar8 = (int)((longlong)pwVar5 - (longlong)local_68 >> 1);
        pwVar16 = (wchar_t *)0x0;
        uVar14 = 0;
        if (iVar8 != -1) {
          uVar14 = iVar8 + 0x80000000;
          uVar15 = (int)local_60 - 1;
          if ((int)local_60 == 0) {
            uVar15 = 0;
          }
          if (iVar8 + 1U < uVar15) {
            uVar15 = iVar8 + 1U;
          }
          uVar7 = (int)local_60 - 1;
          if ((int)local_60 == 0) {
            uVar7 = 0;
          }
          uVar10 = uVar15;
          if ((uVar15 <= uVar14) && (uVar10 = uVar7, uVar14 < uVar7)) {
            uVar10 = uVar14;
          }
          local_48 = (wchar_t *)0x0;
          pwVar5 = L"";
          if ((int)local_60 != 0) {
            pwVar5 = local_68;
          }
          iVar4 = uVar10 - uVar15;
          pwVar16 = (wchar_t *)(ulonglong)(iVar4 + 1);
          if (iVar4 == 0) {
            pwVar16 = pwVar12;
          }
          iVar6 = (int)local_60;
          local_40 = pwVar16;
          if (0 < (int)pwVar16) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
            pwVar12 = local_48;
            pwVar16 = (wchar_t *)((ulonglong)local_40 & 0xffffffff);
            if (0 < (int)(uint)local_40) {
              wcsncpy(local_48,pwVar5 + (int)uVar15,(longlong)iVar4);
              pwVar12[iVar4] = L'\0';
            }
            iVar6 = (int)local_60;
          }
          uVar14 = (uint)pwVar16;
          pwVar5 = (wchar_t *)0x0;
          iVar4 = 0;
          if (iVar6 == 0) {
            pwVar16 = L"";
            iVar6 = iVar4;
          }
          else {
            pwVar16 = local_68;
            iVar6 = iVar6 + -1;
          }
          if ((-1 < iVar8) && (iVar4 = iVar6, iVar8 < iVar6)) {
            iVar4 = iVar8;
          }
          local_58 = (wchar_t *)0x0;
          local_4c = 0;
          pwVar13 = (wchar_t *)(ulonglong)(iVar4 + 1);
          if (iVar4 == 0) {
            pwVar13 = pwVar5;
          }
          iVar8 = (int)pwVar13;
          local_50 = iVar8;
          if ((0 < iVar8) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), iVar8 = local_50,
             pwVar5 = local_58, 0 < local_50)) {
            wcsncpy(local_58,pwVar16,(longlong)iVar4);
            pwVar5[iVar4] = L'\0';
          }
          if (local_68 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          local_60 = CONCAT44(local_4c,iVar8);
          pwVar16 = pwVar12;
          local_68 = pwVar5;
        }
        break;
      }
    }
    bVar1 = false;
    ppwVar17 = DAT_1468e2258 + (longlong)DAT_1468e2260 * 2;
    if (DAT_1468e2258 != ppwVar17) {
      ppwVar9 = DAT_1468e2258;
      do {
        local_58 = (wchar_t *)0x0;
        local_50 = 0;
        if (((ppwVar9 != &local_58) && (*(int *)(ppwVar9 + 1) != 0)) &&
           (pwVar5 = *ppwVar9, pwVar5 != (wchar_t *)0x0)) {
          (**(code **)(*(longlong *)pwVar5 + 0x30))(pwVar5,&local_58);
        }
        local_48 = (wchar_t *)0x0;
        local_40 = (wchar_t *)0x0;
        pwVar5 = (wchar_t *)0x0;
        if (local_50 != 0) {
          pwVar5 = local_58;
        }
        cVar3 = (**(code **)(*(longlong *)pwVar5 + 0x38))(pwVar5,&local_68);
        pwVar5 = local_48;
        if (cVar3 != '\0') {
          lVar11 = (longlong)(int)(uint)local_40;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_40);
          if (((uint)local_40 == 0) && (local_60._4_4_ == 0)) {
            local_60 = (ulonglong)local_40 & 0xffffffff;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                      (&local_68,(ulonglong)local_40 & 0xffffffff);
            _guard_xfg_dispatch_icall_nop(local_68,pwVar5,lVar11 * 2);
          }
          bVar1 = true;
        }
        if (local_48 != (wchar_t *)0x0) {
          FMemory::Free(local_48);
        }
        if (local_50 == 0) {
LAB_1416f93e1:
          if (local_58 != (wchar_t *)0x0) {
            FMemory::Free(local_58);
          }
        }
        else if (local_58 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_58 + 0x28))(local_58,0);
          if (local_58 != (wchar_t *)0x0) {
            local_58 = (wchar_t *)FMemory::Realloc(local_58,0);
          }
          local_50 = 0;
          goto LAB_1416f93e1;
        }
        ppwVar9 = ppwVar9 + 2;
      } while (ppwVar9 != ppwVar17);
      if (bVar1) {
        if ((uVar14 != 0) && (uVar14 != 1)) {
          pwVar5 = local_68 + (int)local_60;
          do {
            pwVar12 = pwVar16;
            if (pwVar5 == local_68) goto LAB_1416f9507;
            pwVar5 = pwVar5 + -1;
          } while (*pwVar5 != L'/');
          iVar8 = (int)((longlong)pwVar5 - (longlong)local_68 >> 1);
          if (iVar8 != -1) {
            pwVar12 = (wchar_t *)0x0;
            uVar14 = iVar8 + 0x80000000;
            uVar7 = 0;
            uVar15 = (int)local_60 - 1;
            if ((int)local_60 == 0) {
              uVar15 = uVar7;
            }
            if (iVar8 + 1U < uVar15) {
              uVar15 = iVar8 + 1U;
            }
            if ((int)local_60 != 0) {
              uVar7 = (int)local_60 - 1;
            }
            uVar10 = uVar15;
            if ((uVar15 <= uVar14) && (uVar10 = uVar7, uVar14 < uVar7)) {
              uVar10 = uVar14;
            }
            local_48 = (wchar_t *)0x0;
            pwVar5 = L"";
            if ((int)local_60 != 0) {
              pwVar5 = local_68;
            }
            iVar8 = uVar10 - uVar15;
            uVar14 = iVar8 + 1;
            if (iVar8 == 0) {
              uVar14 = 0;
            }
            local_40 = (wchar_t *)(ulonglong)uVar14;
            if (0 < (int)uVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
              pwVar12 = local_48;
              uVar14 = (uint)local_40;
              if (0 < (int)(uint)local_40) {
                wcsncpy(local_48,pwVar5 + (int)uVar15,(longlong)iVar8);
                pwVar12[iVar8] = L'\0';
              }
            }
            if (pwVar16 != (wchar_t *)0x0) {
              FMemory::Free();
            }
          }
LAB_1416f9507:
          uVar2 = local_60;
          iVar8 = (int)local_60;
          lVar11 = (longlong)(int)local_60;
          iVar4 = (2 - (uint)((int)local_60 != 0)) + (int)local_60;
          local_60 = CONCAT44(local_60._4_4_,iVar4);
          if (local_60._4_4_ < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar2 & 0xffffffff);
          }
          uVar2 = local_60;
          local_68[lVar11 - (ulonglong)(iVar8 != 0)] = L'.';
          (local_68 + (lVar11 - (ulonglong)(iVar8 != 0)))[1] = L'\0';
          pwVar16 = pwVar12;
          if ((uVar14 != 0) && (uVar14 - 1 != 0)) {
            iVar8 = (int)local_60;
            lVar11 = (longlong)(int)local_60;
            iVar4 = (uint)((int)local_60 == 0) + (uVar14 - 1) + (int)local_60;
            local_60 = CONCAT44(local_60._4_4_,iVar4);
            if (local_60._4_4_ < iVar4) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar2 & 0xffffffff);
            }
            pwVar5 = local_68 + (lVar11 - (ulonglong)(iVar8 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar5,pwVar12,(longlong)(int)uVar14 * 2 - 2);
            pwVar5[(longlong)(int)uVar14 + -1] = L'\0';
          }
        }
        *param_1 = local_68;
        *(int *)(param_1 + 1) = (int)local_60;
        *(int *)((longlong)param_1 + 0xc) = local_60._4_4_;
        local_60 = 0;
        local_68 = (wchar_t *)0x0;
        if (pwVar16 == (wchar_t *)0x0) {
          return param_1;
        }
        FMemory::Free(pwVar16);
        if (local_68 == (wchar_t *)0x0) {
          return param_1;
        }
        FMemory::Free();
        return param_1;
      }
    }
    if (pwVar16 != (wchar_t *)0x0) {
      FMemory::Free(pwVar16);
    }
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  FString::FString(param_1,param_2);
  return param_1;
}



// FUNCTION 1416f9640 FUN_1416f9640 body=139 status=ok
// SIG undefined FUN_1416f9640(void)

undefined * FUN_1416f9640(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e6f7c) {
    _Init_thread_header(&DAT_1469e6f7c);
    if (DAT_1469e6f7c == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1464b4990);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1464b4990,4000);
      atexit(`GetGEDLBootNotificationManager'::`2'::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&DAT_1469e6f7c);
      return &DAT_1464b48c0;
    }
  }
  return &DAT_1464b48c0;
}



// FUNCTION 1416f96d0 GetLocalizedPackagePath body=325 status=ok
// SIG undefined GetLocalizedPackagePath(void)

undefined8 * FPackageName::GetLocalizedPackagePath(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void **ppvVar6;
  undefined2 *puVar7;
  int local_res8;
  int local_resc;
  undefined1 local_res10 [8];
  void *local_48;
  int local_40;
  undefined4 uStack_3c;
  longlong local_38 [2];
  
  local_res8 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  bVar3 = true;
  bVar2 = false;
  puVar4 = (undefined8 *)FName::FName(local_res10,puVar7,1);
  uVar5 = FUN_1416f8860();
  FUN_1416f5ad0(uVar5,&local_res8,*puVar4);
  if ((local_res8 == 0) && (local_resc == 0)) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    local_48 = (void *)0x0;
    local_40 = iVar1;
    if (iVar1 == 0) {
      ppvVar6 = &local_48;
      uStack_3c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar1 * 2);
      ppvVar6 = &local_48;
    }
  }
  else {
    ppvVar6 = (void **)FName::ToString(&local_res8,local_38);
    bVar3 = false;
    bVar2 = true;
  }
  *param_1 = 0;
  *param_1 = *ppvVar6;
  *ppvVar6 = (void *)0x0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(ppvVar6 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)ppvVar6 + 0xc);
  ppvVar6[1] = (void *)0x0;
  if (bVar2) {
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_48 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416f9820 GetLongPackageAssetName body=23 status=ok
// SIG undefined GetLongPackageAssetName(void)

undefined8 FPackageName::GetLongPackageAssetName(undefined8 param_1)

{
  FUN_1416f9e30();
  return param_1;
}



// FUNCTION 1416f9840 FUN_1416f9840 body=231 status=ok
// SIG undefined FUN_1416f9840(void)

undefined8 * FUN_1416f9840(undefined8 *param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_2 + 1);
  pwVar1 = (wchar_t *)*param_2;
  pwVar5 = pwVar1 + iVar4;
  do {
    if (pwVar5 == pwVar1) goto LAB_1416f986f;
    pwVar5 = pwVar5 + -1;
  } while (*pwVar5 != L'/');
  iVar2 = (int)((longlong)pwVar5 - (longlong)pwVar1 >> 1);
  if (iVar2 != -1) {
    pwVar5 = L"";
    if (iVar4 != 0) {
      pwVar5 = pwVar1;
    }
    iVar6 = 0;
    iVar3 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar3 = iVar6;
    }
    iVar4 = iVar6;
    if ((-1 < iVar2) && (iVar4 = iVar3, iVar2 < iVar3)) {
      iVar4 = iVar2;
    }
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    iVar2 = iVar4 + 1;
    if (iVar4 == 0) {
      iVar2 = iVar6;
    }
    *(int *)(param_1 + 1) = iVar2;
    if ((0 < iVar2) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0), 0 < *(int *)(param_1 + 1))) {
      pwVar1 = (wchar_t *)*param_1;
      wcsncpy(pwVar1,pwVar5,(longlong)iVar4);
      pwVar1[iVar4] = L'\0';
    }
    return param_1;
  }
LAB_1416f986f:
  FString::FString(param_1);
  return param_1;
}



// FUNCTION 1416f9930 GetNormalizedObjectPath body=140 status=ok
// SIG undefined GetNormalizedObjectPath(void)

undefined8 * FPackageName::GetNormalizedObjectPath(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short *psVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(int *)(param_2 + 1) < 2) {
LAB_1416f99a8:
    FString::FString(param_1,param_2);
    return param_1;
  }
  psVar1 = (short *)*param_2;
  psVar2 = psVar1;
  do {
    if (psVar2 == psVar1 + *(int *)(param_2 + 1)) {
LAB_1416f9970:
      local_18 = 0;
      local_10 = 0;
      FUN_14170f7d0(param_2,&local_18);
      *param_1 = local_18;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_10;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_10._4_4_;
      return param_1;
    }
    if (*psVar2 == 0x2f) {
      if ((int)((longlong)psVar2 - (longlong)psVar1 >> 1) != -1) goto LAB_1416f99a8;
      goto LAB_1416f9970;
    }
    psVar2 = psVar2 + 1;
  } while( true );
}



// FUNCTION 1416f99c0 GetOnMessageTokenActivated body=50 status=ok
// SIG undefined GetOnMessageTokenActivated(void)

longlong * FUObjectToken::GetOnMessageTokenActivated(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if (((*(int *)(param_1 + 0x20) != 0) &&
      (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar1 + 0x18))(), cVar2 != '\0')) {
    return (longlong *)(param_1 + 0x18);
  }
  return &DAT_1469e6970;
}



// FUNCTION 1416f9a00 GetPathName body=76 status=ok
// SIG undefined GetPathName(void)

undefined8 * FLinker::GetPathName(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  if ((int)param_3 < 0) {
    GetImportPathName(param_1,param_2,~param_3);
    return param_2;
  }
  if (0 < (int)param_3) {
    GetExportPathName(param_1,param_2,param_3 - 1,0,0);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1416f9a50 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGCObjectReferencer::GetPrivateStaticClass(void)

{
  if (DAT_1469e6ad8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"GCObjectReferencer",&DAT_1469e6ad8,
                  AK::MemoryMgr::StartProfileThreadUsage,0x60,0x10000008,0,L"Engine",
                  InternalConstructor<UGCObjectReferencer>,
                  InternalVTableHelperCtorCaller<UGCObjectReferencer>,AddReferencedObjects,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469e6ad8;
}



// FUNCTION 1416f9af0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextBuffer::GetPrivateStaticClass(void)

{
  if (DAT_1469e6c48 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"TextBuffer",&DAT_1469e6c48,
                  AK::MemoryMgr::StartProfileThreadUsage,0x50,0x10000000,0,L"Engine",
                  InternalConstructor<UTextBuffer>,InternalVTableHelperCtorCaller<UTextBuffer>,
                  AK::MemoryMgr::StartProfileThreadUsage,&LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469e6c48;
}



// FUNCTION 1416f9b90 FUN_1416f9b90 body=196 status=ok
// SIG undefined FUN_1416f9b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1416f9b90(int param_1)

{
  float fVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e6fa0) {
    _Init_thread_header(&DAT_1469e6fa0);
    if (DAT_1469e6fa0 == -1) {
      _DAT_1469e6f98 = DAT_1469e6898;
      DAT_1469e6f9c = DAT_1469e6898;
      _Init_thread_footer(&DAT_1469e6fa0);
    }
  }
  if (0 < param_1) {
    DAT_1469e6f9c = DAT_1469e6f9c * 0xbb38435 + 0x3619636b;
    fVar1 = (float)(DAT_1469e6f9c & 0x7fffff | 0x3f800000);
    return (int)((fVar1 - (float)(int)fVar1) * ((float)param_1 - 1e-05));
  }
  return 0;
}



// FUNCTION 1416f9c60 GetReferencerName body=80 status=ok
// SIG undefined GetReferencerName(void)

undefined8 FAsyncPackage::GetReferencerName(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FName::ToString(param_1 + 0x18,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"FAsyncPackage %s",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1416f9cb0 GetShortFName body=60 status=ok
// SIG undefined GetShortFName(void)

undefined8 FPackageName::GetShortFName(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  uVar1 = FName::ToString(param_2,local_18);
  FUN_1416f9cf0(param_1,uVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416f9cf0 FUN_1416f9cf0 body=305 status=ok
// SIG undefined FUN_1416f9cf0(void)

undefined8 FUN_1416f9cf0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  wchar_t *pwVar8;
  short *psVar9;
  uint uVar10;
  wchar_t *pwVar11;
  bool bVar12;
  wchar_t *local_38;
  uint local_30;
  undefined4 local_2c;
  
  psVar2 = (short *)*param_2;
  iVar6 = *(int *)(param_2 + 1);
  psVar9 = psVar2 + iVar6;
  do {
    if (psVar9 == psVar2) {
      iVar3 = -1;
      goto LAB_1416f9d35;
    }
    psVar9 = psVar9 + -1;
  } while (*psVar9 != 0x2f);
  iVar3 = (int)((longlong)psVar9 - (longlong)psVar2 >> 1);
LAB_1416f9d35:
  uVar7 = iVar6 - 1;
  if (iVar6 == 0) {
    uVar7 = 0xffffffff;
  }
  pwVar8 = (wchar_t *)0x0;
  uVar1 = iVar3 + 0x80000000;
  uVar10 = 0;
  if (iVar6 == 0) {
    uVar7 = uVar10;
  }
  if (iVar3 + 1U < uVar7) {
    uVar7 = iVar3 + 1U;
  }
  uVar4 = iVar6 - 1;
  if (iVar6 == 0) {
    uVar4 = uVar10;
  }
  uVar5 = uVar7;
  if ((uVar7 <= uVar1) && (uVar5 = uVar4, uVar1 < uVar4)) {
    uVar5 = uVar1;
  }
  local_38 = (wchar_t *)0x0;
  local_2c = 0;
  psVar9 = &DAT_143f3eda8;
  if (iVar6 != 0) {
    psVar9 = psVar2;
  }
  iVar6 = uVar5 - uVar7;
  local_30 = iVar6 + 1;
  if (iVar6 == 0) {
    local_30 = uVar10;
  }
  bVar12 = local_30 == 0;
  if (0 < (int)local_30) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    uVar1 = local_30;
    pwVar8 = local_38;
    bVar12 = local_30 == 0;
    if (0 < (int)local_30) {
      wcsncpy(local_38,psVar9 + (int)uVar7,(longlong)iVar6);
      bVar12 = uVar1 == 0;
      pwVar8[iVar6] = L'\0';
    }
  }
  pwVar11 = L"";
  if (!bVar12) {
    pwVar11 = pwVar8;
  }
  FName::FName(param_1,pwVar11,1);
  if (pwVar8 != (wchar_t *)0x0) {
    FMemory::Free(pwVar8);
  }
  return param_1;
}



// FUNCTION 1416f9e30 FUN_1416f9e30 body=250 status=ok
// SIG undefined FUN_1416f9e30(void)

undefined8 * FUN_1416f9e30(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  wchar_t *_Dest;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  
  psVar1 = (short *)*param_2;
  iVar6 = *(int *)(param_2 + 1);
  psVar8 = psVar1 + iVar6;
  do {
    if (psVar8 == psVar1) {
      iVar2 = -1;
      goto LAB_1416f9e71;
    }
    psVar8 = psVar8 + -1;
  } while (*psVar8 != 0x2f);
  iVar2 = (int)((longlong)psVar8 - (longlong)psVar1 >> 1);
LAB_1416f9e71:
  uVar7 = iVar6 - 1;
  if (iVar6 == 0) {
    uVar7 = 0xffffffff;
  }
  uVar3 = iVar2 + 0x80000000;
  uVar9 = 0;
  if (iVar6 == 0) {
    uVar7 = uVar9;
  }
  if (iVar2 + 1U < uVar7) {
    uVar7 = iVar2 + 1U;
  }
  uVar4 = iVar6 - 1;
  if (iVar6 == 0) {
    uVar4 = uVar9;
  }
  uVar5 = uVar7;
  if ((uVar7 <= uVar3) && (uVar5 = uVar4, uVar3 < uVar4)) {
    uVar5 = uVar3;
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  psVar8 = &DAT_143f3eda8;
  if (iVar6 != 0) {
    psVar8 = psVar1;
  }
  iVar6 = uVar5 - uVar7;
  uVar3 = iVar6 + 1;
  if (iVar6 == 0) {
    uVar3 = uVar9;
  }
  *(uint *)(param_1 + 1) = uVar3;
  if ((0 < (int)uVar3) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0), 0 < *(int *)(param_1 + 1))) {
    _Dest = (wchar_t *)*param_1;
    wcsncpy(_Dest,psVar8 + (int)uVar7,(longlong)iVar6);
    _Dest[iVar6] = L'\0';
  }
  return param_1;
}



// FUNCTION 1416f9f30 GetShortName body=60 status=ok
// SIG undefined GetShortName(void)

undefined8 FPackageName::GetShortName(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  uVar1 = FName::ToString(param_2,local_18);
  FUN_1416f9e30(param_1,uVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416f9f70 GetShortName body=70 status=ok
// SIG undefined GetShortName(void)

undefined8 FPackageName::GetShortName(undefined8 param_1,longlong param_2)

{
  undefined8 local_res8 [4];
  longlong local_18 [2];
  
  local_res8[0] = *(undefined8 *)(param_2 + 0x18);
  FName::ToString(local_res8,local_18);
  FUN_1416f9e30(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416f9fc0 GetShortName body=148 status=ok
// SIG undefined GetShortName(void)

undefined8 FPackageName::GetShortName(undefined8 param_1,short *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar1 * 2);
  }
  FUN_1416f9e30(param_1,&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416fa060 GetSourcePackagePath body=155 status=ok
// SIG undefined GetSourcePackagePath(void)

longlong * FPackageName::GetSourcePackagePath(longlong *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 local_res8 [8];
  int local_res18 [2];
  int local_res20 [2];
  
  FString::FString();
  local_res20[0] = -1;
  local_res18[0] = 0;
  cVar2 = FUN_1416e8f30(local_res8,param_1,local_res20,local_res18);
  iVar1 = local_res18[0];
  if (cVar2 != '\0') {
    if (local_res18[0] != 0) {
      iVar3 = (int)param_1[1];
      iVar4 = (iVar3 - local_res18[0]) - local_res20[0];
      if (iVar4 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)local_res20[0] * 2),
                   (void *)(*param_1 + (longlong)(local_res18[0] + local_res20[0]) * 2),
                   (longlong)iVar4 * 2);
        iVar3 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar3 - iVar1;
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_1);
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1416fa100 GetValidLongPackageRoots body=335 status=ok
// SIG undefined GetValidLongPackageRoots(void)

void FLongPackagePathsSingleton::GetValidLongPackageRoots
               (longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  FString::FString((longlong)iVar1 * 0x10 + *param_2,param_1 + 0x10);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  FString::FString((longlong)iVar1 * 0x10 + *param_2,param_1 + 0x20);
  TArray<FString,FDefaultAllocator>::Append<FString,FDefaultAllocator>(param_2,param_1 + 0x60);
  if (param_3 != '\0') {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
    }
    FString::FString((longlong)iVar1 * 0x10 + *param_2,param_1);
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
    }
    FString::FString((longlong)iVar1 * 0x10 + *param_2,param_1 + 0x30);
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
    }
    FString::FString((longlong)iVar1 * 0x10 + *param_2,param_1 + 0x40);
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
    }
    FString::FString((longlong)iVar1 * 0x10 + *param_2,param_1 + 0x50);
  }
  return;
}



// FUNCTION 1416fa250 HandleContentPathDismounted body=146 status=ok
// SIG undefined HandleContentPathDismounted(void)

void FPackageLocalizationCache::HandleContentPathDismounted(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  longlong lVar2;
  longlong lVar3;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar2 = (longlong)*(int *)(param_1 + 0x48) * 0x20 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x20) {
    FPackageLocalizationCultureCache::RemoveRootSourcePath(*(undefined8 *)(lVar3 + 0x10),param_2);
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001416fa2db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1416fa2f0 HandleContentPathMounted body=236 status=ok
// SIG undefined HandleContentPathMounted(void)

void FPackageLocalizationCache::HandleContentPathMounted(longlong param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar4 = (longlong)*(int *)(param_1 + 0x48) * 0x20 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(lVar3 + 0x10);
    BVar1 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar1 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar2 = TArray<FString,FDefaultAllocator>::Find(&lpCriticalSection[1].LockSemaphore,param_2);
    if (iVar2 == -1) {
      iVar2 = (int)lpCriticalSection[1].SpinCount;
      *(int *)&lpCriticalSection[1].SpinCount = iVar2 + 1;
      if (*(int *)((longlong)&lpCriticalSection[1].SpinCount + 4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&lpCriticalSection[1].LockSemaphore,iVar2);
      }
      FString::FString((HANDLE)((longlong)iVar2 * 0x10 +
                               (longlong)lpCriticalSection[1].LockSemaphore),param_2);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001416fa3d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1416fa3e0 FUN_1416fa3e0 body=560 status=ok
// SIG undefined FUN_1416fa3e0(void)

void FUN_1416fa3e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  void *_Src;
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined8 local_58;
  longlong *local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  puVar1 = (undefined8 *)(param_1 + 0x30);
  local_50 = (longlong *)0x0;
  if (puVar1 != &local_58) {
    *puVar1 = 0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_50);
    plVar4 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x40);
  for (iVar8 = *(int *)(param_1 + 0x48); iVar8 != 0; iVar8 = iVar8 + -1) {
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
              (lVar9);
    lVar9 = lVar9 + 0x20;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x40,0);
  }
  lVar9 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar9 + 0x30);
  uVar5 = *(undefined8 *)(lVar9 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FCulture::GetName(uVar5);
  local_48 = (void *)0x0;
  local_40 = *(int *)(puVar7 + 1);
  lVar9 = (longlong)local_40;
  _Src = (void *)*puVar7;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
    _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar9 * 2);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  puVar7 = (undefined8 *)FUN_1416f61e0(param_1,local_38,&local_48);
  if (puVar1 != puVar7) {
    *puVar1 = *puVar7;
    *puVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,puVar7 + 1);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)local_30 + 0xc);
      iVar8 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    BVar6 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar6 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    FUN_1416ecbf0(lpCriticalSection);
    LeaveCriticalSection(lpCriticalSection);
  }
  FUN_1416ecf30(param_1);
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1416fa610 FUN_1416fa610 body=148 status=ok
// SIG undefined FUN_1416fa610(void)

void FUN_1416fa610(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (param_4 == 0) {
      param_4 = plVar1[0xf];
    }
    plVar2 = plVar1;
    if (param_4 != 0) {
      (**(code **)(*plVar1 + 0x150))
                (plVar1,param_4,*(ulonglong *)(param_4 + 0x38) >> 0x23 & 0xffffffffffffff01);
      plVar2 = *(longlong **)(param_1 + 0x18);
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
    if (param_4 != 0) {
      (**(code **)(*plVar1 + 0x158))
                (plVar1,param_4,*(ulonglong *)(param_4 + 0x38) >> 0x23 & 0xffffffffffffff01);
    }
  }
  return;
}



// FUNCTION 1416fa6b0 HandleObjectReferences body=103 status=ok
// SIG undefined HandleObjectReferences(void)

void FReferenceCollector::HandleObjectReferences
               (longlong *param_1,longlong param_2,uint param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      (**(code **)(*param_1 + 0x38))(param_1,param_2,param_4,param_5);
      param_2 = param_2 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1416fa720 HasUnresolvedDependencies body=459 status=ok
// SIG undefined HasUnresolvedDependencies(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FLinkerLoad::HasUnresolvedDependencies(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  BOOL BVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_50;
  uint uStack_4c;
  undefined *local_48;
  uint uStack_40;
  int iStack_3c;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  uint uStack_18;
  int iStack_14;
  undefined8 uStack_10;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
  }
  uStack_74 = 1;
  local_78 = 0;
  iStack_60 = 0;
  iStack_64 = 0;
  iVar7 = (int)_DAT_1464b4588;
  if (iVar7 != 0) {
    puVar6 = DAT_1464b4580;
    if (DAT_1464b4580 == (uint *)0x0) {
      puVar6 = (uint *)&DAT_1464b4570;
    }
    uVar1 = *puVar6;
    local_78 = 0;
    iStack_60 = 0;
    while (uVar1 == 0) {
      lVar4 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar5 = local_78 + 1;
      bVar2 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar5;
      if (bVar2) goto LAB_1416fa81a;
      uVar1 = puVar6[lVar4 + 1];
    }
    uStack_74 = -uVar1 & uVar1;
    iVar5 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_64 = (iStack_60 - iVar5) + 0x1f;
    if (iVar7 < iStack_64) {
LAB_1416fa81a:
      iStack_64 = iVar7;
    }
  }
  uStack_40 = 0xffffffff;
  iStack_3c = iStack_64;
  local_38 = CONCAT44(uStack_5c,iStack_60);
  uStack_28 = CONCAT44(uStack_74,local_78);
  local_30 = &DAT_1464b4560;
  puStack_20 = &DAT_1464b4570;
  iStack_50 = local_78;
  uStack_4c = uStack_74;
  local_48 = &DAT_1464b4570;
  uStack_10 = local_38;
  uStack_18 = uStack_40;
  iStack_14 = iStack_3c;
  while ((iStack_3c != iVar7 || (local_48 != &DAT_1464b4570))) {
    lVar4 = FUN_1417a53c0(*(undefined8 *)(DAT_1464b4560 + (longlong)iStack_3c * 0x10));
    if (lVar4 == param_1) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
      return 1;
    }
    uStack_40 = uStack_40 & ~uStack_4c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
  return 0;
}



// FUNCTION 1416fa8f0 HeapPop body=337 status=ok
// SIG undefined HeapPop(void)

void FImportOrImportIndexArray::HeapPop(longlong *param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (DAT_1469e6898 != 0) {
    iVar6 = (int)param_1[1] + -1;
    iVar4 = FUN_1416f9b90(iVar6);
    if (iVar4 < 0) {
      iVar6 = 0;
    }
    else if (iVar4 < iVar6) {
      iVar6 = iVar4;
    }
    *param_2 = *(undefined4 *)((longlong)iVar6 * 4 + *param_1);
    iVar4 = (int)param_1[1];
    iVar5 = (iVar4 - iVar6) + -1;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)iVar6 * 4),
                 (void *)(*param_1 + (longlong)(iVar6 + 1) * 4),(longlong)iVar5 << 2);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 + -1;
    return;
  }
  *param_2 = *(undefined4 *)*param_1;
  iVar4 = (int)param_1[1];
  iVar6 = iVar4 + -1;
  if (0 < iVar6) {
    iVar6 = 1;
  }
  if (iVar6 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)*param_1,(void *)(*param_1 + (longlong)(iVar4 - iVar6) * 4),
               (longlong)iVar6 << 2);
    iVar4 = (int)param_1[1];
  }
  iVar4 = iVar4 + -1;
  *(int *)(param_1 + 1) = iVar4;
  if (param_3 != '\0') {
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1);
    iVar4 = (int)param_1[1];
  }
  lVar3 = *param_1;
  iVar6 = 0;
  if (1 < iVar4) {
    do {
      iVar1 = iVar6 * 2;
      iVar5 = iVar1 + 1;
      if (iVar1 + 2 < iVar4) {
        if (*(int *)(lVar3 + (longlong)iVar5 * 4) < *(int *)(lVar3 + 8 + (longlong)iVar1 * 4)) {
          iVar5 = iVar1;
        }
        iVar5 = iVar5 + 1;
      }
      iVar1 = *(int *)(lVar3 + (longlong)iVar5 * 4);
      iVar2 = *(int *)(lVar3 + (longlong)iVar6 * 4);
      if (iVar2 <= iVar1) {
        return;
      }
      *(int *)(lVar3 + (longlong)iVar6 * 4) = iVar1;
      *(int *)(lVar3 + (longlong)iVar5 * 4) = iVar2;
      iVar6 = iVar5;
    } while (iVar5 * 2 + 1 < iVar4);
  }
  return;
}



// FUNCTION 1416faa50 HeapPush body=126 status=ok
// SIG undefined HeapPush(void)

int TArray<int,FDefaultAllocator>::HeapPush(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar4 * 4) = *param_2;
  lVar3 = *param_1;
  iVar4 = (int)param_1[1] + -1;
  while( true ) {
    if (iVar4 < 1) {
      return iVar4;
    }
    iVar5 = (iVar4 + -1) / 2;
    iVar1 = *(int *)(lVar3 + (longlong)iVar5 * 4);
    iVar2 = *(int *)(lVar3 + (longlong)iVar4 * 4);
    if (iVar1 <= iVar2) break;
    *(int *)(lVar3 + (longlong)iVar4 * 4) = iVar1;
    *(int *)(lVar3 + (longlong)iVar5 * 4) = iVar2;
    iVar4 = iVar5;
  }
  return iVar4;
}



// FUNCTION 1416faad0 FUN_1416faad0 body=265 status=ok
// SIG undefined FUN_1416faad0(void)

void FUN_1416faad0(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (param_4 != 2) {
    uVar4 = 0;
    if (0 < *(int *)(param_1 + 0x78)) {
      plVar5 = *(longlong **)(param_1 + 0x70);
      uVar7 = uVar4;
      while (iVar6 = (int)uVar7, *(longlong *)(*plVar5 + 0x18) != *param_2) {
        uVar7 = (ulonglong)(iVar6 + 1);
        uVar4 = uVar4 + 1;
        plVar5 = plVar5 + 1;
        if ((longlong)*(int *)(param_1 + 0x78) <= (longlong)uVar4) {
          return;
        }
      }
      if (iVar6 != -1) {
        iVar2 = *(int *)(param_1 + 0x88);
        lVar1 = *(longlong *)(param_1 + 0x70);
        *(int *)(param_1 + 0x88) = iVar2 + 1;
        if (*(int *)(param_1 + 0x8c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x80,iVar2);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar2 * 8) =
             *(undefined8 *)((longlong)iVar6 * 8 + lVar1);
        iVar2 = *(int *)(param_1 + 0x78);
        iVar3 = (iVar2 - iVar6) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x70)),
                     (void *)(*(longlong *)(param_1 + 0x70) + (longlong)(iVar6 + 1) * 8),
                     (longlong)iVar3 << 3);
          iVar2 = *(int *)(param_1 + 0x78);
        }
        *(int *)(param_1 + 0x78) = iVar2 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x70);
      }
    }
  }
  return;
}



// FUNCTION 1416fabe0 FUN_1416fabe0 body=196 status=ok
// SIG undefined FUN_1416fabe0(void)

void FUN_1416fabe0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)&LAB_1416df420;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464aef08,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_1464aef10;
    lVar3 = (longlong)DAT_1464aef10;
    DAT_1464aef10 = DAT_1464aef10 + 1;
    if (DAT_1464aef14 < DAT_1464aef10) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464aef08,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1464aef08);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  lVar3 = FUN_1416f86a0();
  LOCK();
  *(int *)(lVar3 + 0x2b8) = *(int *)(lVar3 + 0x2b8) + 1;
  UNLOCK();
  return;
}



// FUNCTION 1416facb0 FUN_1416facb0 body=88 status=ok
// SIG undefined FUN_1416facb0(void)

undefined8 FUN_1416facb0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = UField::GetOwnerClass();
  if ((*(uint *)(lVar1 + 0xb4) & 0x10000080) == 0) {
    if ((*(uint *)(param_1 + 7) >> 9 & 1) == 0) {
      (**(code **)(*param_1 + 0x330))(param_1,*(int *)((longlong)param_1 + 0x44) + param_2);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1416fad10 FUN_1416fad10 body=177 status=ok
// SIG undefined FUN_1416fad10(void)

void FUN_1416fad10(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)param_2[1];
  local_18 = *param_2;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  puVar1 = (undefined8 *)(param_1 + 0x50);
  if (puVar1 != &local_18) {
    *puVar1 = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x58,&local_10);
  }
  plVar6 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001416fadbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*puVar1 + 8))();
  return;
}



// FUNCTION 1416fadd0 FUN_1416fadd0 body=405 status=ok
// SIG undefined FUN_1416fadd0(void)

void FUN_1416fadd0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_88;
  longlong *local_80;
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  
  plVar5 = (longlong *)param_2[6];
  local_38 = 0;
  local_48 = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop(local_68,param_2 + 2,0x20);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
    plVar5 = (longlong *)param_2[6];
  }
  param_2[6] = 0;
  local_38 = *(int *)(param_2 + 8);
  local_48 = plVar5;
  *(undefined4 *)(param_2 + 8) = 0;
  if (local_38 != 0) {
    plVar4 = local_68;
    if (plVar5 != (longlong *)0x0) {
      plVar4 = plVar5;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))();
      local_78[0] = (code *)*param_2;
      goto LAB_1416fae6b;
    }
  }
  local_78[0] = AK::MemoryMgr::StartProfileThreadUsage;
LAB_1416fae6b:
  *param_2 = AK::MemoryMgr::StartProfileThreadUsage;
  FGenericPlatformMemory::MemswapGreaterThan8(local_78,param_1,0x50);
  if (local_38 != 0) {
    plVar5 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar5 = local_48;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_80 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x50) != &local_88) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    local_88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x58,&local_80);
    plVar5 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_80 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar5 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar5 = param_2 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416faf70 FUN_1416faf70 body=784 status=ok
// SIG undefined FUN_1416faf70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416faf70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  int iVar3;
  bool bVar4;
  void *_Src;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *local_38;
  int local_30;
  int local_2c;
  longlong local_28 [2];
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  FLongPackagePathsSingleton::ProcessContentMountPoint(&local_38,param_3);
  cVar5 = FString::EndsWith(&local_38,&DAT_144ccf4a0,0);
  iVar3 = local_30;
  uVar8 = 0;
  if (cVar5 == '\0') {
    lVar6 = (longlong)local_30;
    local_30 = (2 - (uint)(local_30 != 0)) + local_30;
    if (local_2c < local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar3);
    }
    puVar2 = (undefined2 *)((longlong)local_38 + (lVar6 - (ulonglong)(iVar3 != 0)) * 2);
    *puVar2 = 0x2f;
    puVar2[1] = 0;
  }
  FString::FString(local_28,param_2);
  _Src = local_38;
  lVar6 = (longlong)local_30;
  local_18 = (void *)0x0;
  local_10 = local_30;
  if (local_30 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_30,0);
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar6 * 2);
  }
  plVar1 = (longlong *)(param_1 + 0x130);
  iVar3 = *(int *)(param_1 + 0x138);
  *(int *)(param_1 + 0x138) = iVar3 + 1;
  if (*(int *)(param_1 + 0x13c) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar1,iVar3);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + 0x20),(void *)*plVar1,(longlong)iVar3 << 5);
  lVar6 = *plVar1;
  FString::FString(lVar6,local_28);
  FString::FString(lVar6 + 0x10,&local_18);
  plVar1 = (longlong *)(param_1 + 0x140);
  iVar3 = *(int *)(param_1 + 0x148);
  *(int *)(param_1 + 0x148) = iVar3 + 1;
  if (*(int *)(param_1 + 0x14c) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar1,iVar3);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + 0x20),(void *)*plVar1,(longlong)iVar3 << 5);
  lVar6 = *plVar1;
  FString::FString(lVar6,local_28);
  FString::FString(lVar6 + 0x10,&local_18);
  iVar3 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar3 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar3);
  }
  FString::FString((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x60),param_2);
  bVar4 = false;
  DAT_1464b447c = DAT_1464b447c + 1;
  lVar6 = (longlong)(DAT_1464b4470 + -1);
  if (-1 < DAT_1464b4470 + -1) {
    lVar7 = lVar6 << 4;
    bVar4 = false;
    do {
      if (((*(int *)(lVar7 + 8 + DAT_1464b4468) == 0) ||
          (plVar1 = *(longlong **)(lVar7 + DAT_1464b4468), plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,&local_38), cVar5 == '\0')) {
        bVar4 = true;
      }
      lVar7 = lVar7 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  iVar3 = DAT_1464b4470;
  DAT_1464b447c = DAT_1464b447c + -1;
  if ((bVar4) && (DAT_1464b447c < 1)) {
    uVar9 = uVar8;
    if (0 < DAT_1464b4470) {
      do {
        if (((*(int *)(uVar8 + 8 + DAT_1464b4468) == 0) ||
            (*(longlong **)(uVar8 + DAT_1464b4468) == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(**(longlong **)(uVar8 + DAT_1464b4468) + 0x10))(), cVar5 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464b4468,uVar9,1,1);
        }
        else {
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar8 = uVar8 + 0x10;
        }
      } while ((int)uVar9 < DAT_1464b4470);
    }
    _DAT_1464b4478 = DAT_1464b4470 * 2;
    if (_DAT_1464b4478 < 3) {
      _DAT_1464b4478 = 2;
    }
    if ((_DAT_1464b4478 < iVar3) && (DAT_1464b4474 != DAT_1464b4470)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464b4468);
    }
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416fb280 InsertPackage body=514 status=ok
// SIG undefined InsertPackage(void)

void FAsyncLoadingThread::InsertPackage(longlong param_1,longlong param_2,char param_3,int param_4)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_res10;
  undefined1 local_res18 [8];
  longlong local_38;
  longlong *local_30;
  
  if (param_3 == '\0') {
    LOCK();
    *(int *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + 1;
    UNLOCK();
  }
  local_res10 = param_2;
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x210));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x210));
  }
  if (param_3 != '\0') {
    plVar5 = *(longlong **)(param_1 + 0x198);
    for (plVar4 = plVar5; plVar4 != plVar5 + *(int *)(param_1 + 0x1a0); plVar4 = plVar4 + 1) {
      if (*plVar4 == local_res10) {
        iVar3 = (int)((longlong)plVar4 - (longlong)plVar5 >> 3);
        if (iVar3 != -1) {
          ::_guard_xfg_dispatch_icall_nop
                    (plVar5 + iVar3,plVar5 + iVar3 + 1,
                     (longlong)((*(int *)(param_1 + 0x1a0) - iVar3) + -1) << 3);
          *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + -1;
        }
        break;
      }
    }
  }
  if (param_4 == 0) {
    plVar5 = *(longlong **)(param_1 + 0x198);
    if (plVar5 != plVar5 + *(int *)(param_1 + 0x1a0)) {
      plVar4 = plVar5;
      do {
        if (*(int *)(*plVar4 + 0x44) <= *(int *)(local_res10 + 0x44)) goto LAB_1416fb3a6;
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar5 + *(int *)(param_1 + 0x1a0));
    }
  }
  else if (param_4 == 1) {
    plVar5 = *(longlong **)(param_1 + 0x198);
    if (plVar5 != plVar5 + *(int *)(param_1 + 0x1a0)) {
      plVar4 = plVar5;
      do {
        if (*(int *)(*plVar4 + 0x44) < *(int *)(local_res10 + 0x44)) goto LAB_1416fb3a6;
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar5 + *(int *)(param_1 + 0x1a0));
    }
  }
LAB_1416fb3b2:
  iVar3 = *(int *)(param_1 + 0x1a0);
LAB_1416fb3b8:
  plVar5 = (longlong *)(param_1 + 0x198);
  iVar1 = *(int *)(param_1 + 0x1a0);
  *(int *)(param_1 + 0x1a0) = iVar1 + 1;
  if (*(int *)(param_1 + 0x1a4) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar1);
  }
  _Src = (void *)(*plVar5 + (longlong)iVar3 * 8);
  ::_guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 8),_Src,(longlong)(iVar1 - iVar3) << 3);
  *(longlong *)((longlong)iVar3 * 8 + *plVar5) = local_res10;
  if (param_3 == '\0') {
    local_38 = local_res10 + 0x18;
    local_30 = &local_res10;
    FUN_1416e1690(param_1 + 0x1a8,local_res18,&local_38,0);
    if (DAT_1468c21ab != '\0') {
      FUN_141705330(param_1,local_res10,0x7fffffff);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x210));
  return;
LAB_1416fb3a6:
  iVar3 = (int)((longlong)plVar4 - (longlong)plVar5 >> 3);
  if (iVar3 != -1) goto LAB_1416fb3b8;
  goto LAB_1416fb3b2;
}



// FUNCTION 1416fb490 FUN_1416fb490 body=1240 status=ok
// SIG undefined FUN_1416fb490(void)

/* WARNING: Removing unreachable block (ram,0x0001416fb69f) */

wchar_t ** FUN_1416fb490(wchar_t **param_1,longlong *param_2)

{
  void *_Src;
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  wchar_t **ppwVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  undefined8 *puVar15;
  wchar_t *pwVar16;
  uint uVar17;
  wchar_t *pwVar18;
  int iVar19;
  wchar_t *local_res18;
  wchar_t *local_68;
  int local_60;
  int local_5c;
  wchar_t *local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  int local_40;
  
  lVar2 = FUN_1416f87e0();
  pwVar13 = (wchar_t *)0x0;
  FString::Replace(param_2,&local_68,&DAT_144cf1224,&DAT_144cf1174,0);
  lVar10 = *(longlong *)(lVar2 + 0x130);
  lVar14 = (longlong)*(int *)(lVar2 + 0x138) * 0x20 + lVar10;
  local_res18 = L"";
  uVar12 = 0;
  for (; lVar10 != lVar14; lVar10 = lVar10 + 0x20) {
    cVar1 = FString::StartsWith(&local_68,lVar10,1);
    if (cVar1 != '\0') goto LAB_1416fb626;
  }
  plVar3 = (longlong *)FUN_1415c3d50();
  pwVar16 = L"";
  if (local_60 != 0) {
    pwVar16 = local_68;
  }
  ppwVar4 = (wchar_t **)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_58,pwVar16);
  if (&local_68 != ppwVar4) {
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_68 = *ppwVar4;
    *ppwVar4 = (wchar_t *)0x0;
    local_60 = *(int *)(ppwVar4 + 1);
    local_5c = *(int *)((longlong)ppwVar4 + 0xc);
    ppwVar4[1] = (wchar_t *)0x0;
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  iVar7 = local_60;
  iVar19 = (int)param_2[1];
  uVar8 = iVar19 - 1;
  uVar17 = iVar19 - 1;
  if (iVar19 == 0) {
    uVar8 = 0xffffffff;
    uVar17 = uVar12;
  }
  if (0 < (int)uVar17) {
    if (iVar19 == 0) {
      uVar8 = uVar12;
    }
    if ((*(short *)(*param_2 + -2 + (longlong)(int)uVar8 * 2) == 0x2f) &&
       (((lVar10 = (longlong)local_60, local_60 == 0 || (local_60 + -1 < 1)) ||
        (local_68[(longlong)(local_60 + -1) + -1] != L'/')))) {
      local_60 = (2 - (uint)(local_60 != 0)) + local_60;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar7);
      }
      local_68[lVar10 - (ulonglong)(iVar7 != 0)] = L'/';
      (local_68 + (lVar10 - (ulonglong)(iVar7 != 0)))[1] = L'\0';
    }
  }
LAB_1416fb626:
  FUN_141671940(&local_48,&local_68,1);
  uVar8 = uVar12;
  if (local_60 != 0) {
    uVar8 = local_60 - 1;
  }
  lVar10 = FUN_141671d50(&local_58,&local_68);
  uVar17 = *(int *)(lVar10 + 8) - 1;
  if (*(int *)(lVar10 + 8) == 0) {
    uVar17 = uVar12;
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  uVar5 = uVar12;
  if (local_40 != 0) {
    uVar5 = local_40 - 1;
  }
  uVar5 = uVar5 + (uVar8 - uVar17);
  uVar8 = local_60 - 1;
  if (local_60 == 0) {
    uVar8 = uVar12;
  }
  if (uVar5 < uVar8) {
    uVar8 = uVar5;
  }
  *param_1 = (wchar_t *)0x0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  pwVar16 = L"";
  if (local_60 != 0) {
    pwVar16 = local_68;
  }
  uVar17 = uVar8 + 1;
  if (uVar8 == 0) {
    uVar17 = uVar12;
  }
  *(uint *)(param_1 + 1) = uVar17;
  if ((0 < (int)uVar17) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0), 0 < *(int *)(param_1 + 1))) {
    pwVar18 = *param_1;
    wcsncpy(pwVar18,pwVar16,(longlong)(int)uVar8);
    pwVar18[(int)uVar8] = L'\0';
  }
  FString::ReplaceInline(param_1,&DAT_144cf1354,&DAT_144cf128c,0);
  puVar15 = *(undefined8 **)(lVar2 + 0x140);
  puVar11 = puVar15 + (longlong)*(int *)(lVar2 + 0x148) * 4;
  do {
    if (puVar15 == puVar11) {
LAB_1416fb931:
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_68 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      return param_1;
    }
    cVar1 = FString::StartsWith(param_1,puVar15 + 2,1);
    if (cVar1 != '\0') {
      iVar19 = *(int *)(param_1 + 1);
      uVar8 = *(int *)(puVar15 + 3) - 1;
      if (*(int *)(puVar15 + 3) == 0) {
        uVar8 = uVar12;
      }
      uVar17 = iVar19 - 1;
      if (iVar19 == 0) {
        uVar17 = uVar12;
      }
      uVar5 = uVar8 + 0x7fffffff;
      if (uVar8 < uVar17) {
        uVar17 = uVar8;
      }
      uVar8 = iVar19 - 1;
      if (iVar19 == 0) {
        uVar8 = uVar12;
      }
      uVar6 = uVar17;
      if ((uVar17 <= uVar5) && (uVar6 = uVar8, uVar5 < uVar8)) {
        uVar6 = uVar5;
      }
      if (iVar19 != 0) {
        local_res18 = *param_1;
      }
      iVar7 = uVar6 - uVar17;
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      iVar19 = iVar7 + 1;
      if (iVar7 == 0) {
        iVar19 = 0;
      }
      pwVar16 = pwVar13;
      local_50 = iVar19;
      if ((0 < iVar19) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), iVar19 = local_50,
         pwVar16 = local_58, 0 < local_50)) {
        wcsncpy(local_58,local_res18 + (int)uVar17,(longlong)iVar7);
        pwVar16[iVar7] = L'\0';
      }
      iVar7 = *(int *)(puVar15 + 1);
      pwVar18 = pwVar16;
      iVar9 = local_4c;
      if (1 < iVar7) {
        uVar8 = iVar19 - 1;
        if (iVar19 == 0) {
          uVar8 = uVar12;
        }
        if ((iVar7 != 0) || (uVar17 = 1, uVar8 == 0)) {
          uVar17 = uVar12;
        }
        _Src = (void *)*puVar15;
        local_58 = (wchar_t *)0x0;
        local_50 = iVar7;
        if ((iVar7 == 0) && (uVar17 + uVar8 == 0)) {
          local_4c = 0;
          pwVar18 = pwVar13;
          iVar7 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar7 + uVar17 + uVar8,0);
          pwVar18 = local_58;
          _guard_xfg_dispatch_icall_nop(local_58,_Src,(longlong)iVar7 * 2);
          iVar7 = local_50;
        }
        pwVar13 = pwVar16;
        iVar9 = local_4c;
        iVar19 = iVar7;
        if (uVar8 != 0) {
          local_50 = iVar7 + (uint)(iVar7 == 0) + uVar8;
          if (local_4c < local_50) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar7);
            pwVar18 = local_58;
          }
          iVar9 = local_4c;
          iVar19 = local_50;
          _guard_xfg_dispatch_icall_nop
                    (pwVar18 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),pwVar16,
                     (longlong)(int)uVar8 * 2);
          (pwVar18 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)))[(int)uVar8] = L'\0';
        }
      }
      if (param_1 == &local_58) {
        if (pwVar18 != (wchar_t *)0x0) {
          FMemory::Free(pwVar18);
        }
      }
      else {
        if (*param_1 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *param_1 = pwVar18;
        *(int *)(param_1 + 1) = iVar19;
        *(int *)((longlong)param_1 + 0xc) = iVar9;
      }
      if (pwVar13 != (wchar_t *)0x0) {
        FMemory::Free(pwVar13);
      }
      goto LAB_1416fb931;
    }
    puVar15 = puVar15 + 4;
  } while( true );
}



// FUNCTION 1416fb970 IsAsyncLoadingCoreUObjectInternal body=55 status=ok
// SIG undefined IsAsyncLoadingCoreUObjectInternal(void)

ulonglong IsAsyncLoadingCoreUObjectInternal(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1416f86a0();
  uVar3 = 0;
  LOCK();
  uVar1 = *(uint *)(lVar2 + 0x2b0);
  if (uVar1 == 0) {
    *(uint *)(lVar2 + 0x2b0) = 0;
  }
  else {
    uVar3 = (ulonglong)uVar1;
  }
  UNLOCK();
  if (uVar1 == 0) {
    uVar3 = 0;
    LOCK();
    uVar1 = *(uint *)(lVar2 + 0x2b4);
    if (uVar1 == 0) {
      *(uint *)(lVar2 + 0x2b4) = 0;
    }
    else {
      uVar3 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar1 == 0) {
      return uVar3 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 1416fb9b0 FUN_1416fb9b0 body=21 status=ok
// SIG undefined FUN_1416fb9b0(void)

undefined1 FUN_1416fb9b0(void)

{
  FUN_1416f86a0();
  return DAT_1469e689c;
}



// FUNCTION 1416fb9d0 IsAsyncLoadingSuspendedInternal body=32 status=ok
// SIG undefined IsAsyncLoadingSuspendedInternal(void)

undefined8 IsAsyncLoadingSuspendedInternal(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1416f86a0();
  uVar3 = 0;
  LOCK();
  uVar1 = *(uint *)(lVar2 + 0x74);
  if (uVar1 == 0) {
    *(uint *)(lVar2 + 0x74) = 0;
  }
  else {
    uVar3 = (ulonglong)uVar1;
  }
  UNLOCK();
  return CONCAT71((int7)(uVar3 >> 8),uVar1 != 0);
}



// FUNCTION 1416fb9f0 IsBlueprintDependencyDataNull body=15 status=ok
// SIG undefined IsBlueprintDependencyDataNull(void)

bool IsBlueprintDependencyDataNull(longlong param_1)

{
  return *(longlong *)(param_1 + 8) == 0;
}



// FUNCTION 1416fba00 IsBlueprintFinalizationPending body=24 status=ok
// SIG undefined IsBlueprintFinalizationPending(void)

undefined1 FLinkerLoad::IsBlueprintFinalizationPending(longlong param_1)

{
  if ((*(int *)(param_1 + 0x78c) == -1) && (*(char *)(param_1 + 0x788) == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1416fba20 FUN_1416fba20 body=139 status=ok
// SIG undefined FUN_1416fba20(void)

undefined8 FUN_1416fba20(void)

{
  char cVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e6abc) {
    _Init_thread_header(&DAT_1469e6abc);
    if (DAT_1469e6abc == -1) {
      FBoolConfigValueHelper::FBoolConfigValueHelper
                (&DAT_1469e6ab8,L"Kismet",L"bForceDisableDeferredCDOInitialization",&DAT_1468e2360);
      _Init_thread_footer(&DAT_1469e6abc);
    }
  }
  cVar1 = FUN_14170fb20();
  if ((cVar1 != '\0') && (DAT_1469e6ab8 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1416fbab0 FUN_1416fbab0 body=139 status=ok
// SIG undefined FUN_1416fbab0(void)

undefined8 FUN_1416fbab0(void)

{
  char cVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e6ab4) {
    _Init_thread_header(&DAT_1469e6ab4);
    if (DAT_1469e6ab4 == -1) {
      FBoolConfigValueHelper::FBoolConfigValueHelper
                (&DAT_1469e6ab0,L"Kismet",L"bForceDisableDeferredExportCreation",&DAT_1468e2360);
      _Init_thread_footer(&DAT_1469e6ab4);
    }
  }
  cVar1 = FUN_14170fb20();
  if ((cVar1 != '\0') && (DAT_1469e6ab0 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1416fbb40 FUN_1416fbb40 body=100 status=ok
// SIG undefined FUN_1416fbb40(void)

undefined1 FUN_1416fbb40(void)

{
  char cVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e701c) {
    _Init_thread_header(&DAT_1469e701c);
    if (DAT_1469e701c == -1) {
      cVar1 = FUN_1416fbbb0();
      DAT_1468c21ab = cVar1 != '\0';
      _Init_thread_footer(&DAT_1469e701c);
    }
  }
  return DAT_1468c21ab;
}



// FUNCTION 1416fbbb0 FUN_1416fbbb0 body=209 status=ok
// SIG undefined FUN_1416fbbb0(void)

undefined1 FUN_1416fbbb0(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_18 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e7018) {
    _Init_thread_header(&DAT_1469e7018);
    if (DAT_1469e7018 == -1) {
      local_18[0] = 0;
      local_18[1] = 0;
      uVar2 = FCommandLine::Get();
      cVar1 = FParse::Value(uVar2,L"filehostip",local_18,1);
      if (cVar1 == '\0') {
        FConfigCacheIni::GetBool
                  (DAT_1468b6148,L"/Script/Engine.StreamingSettings",L"s.EventDrivenLoaderEnabled",
                   &DAT_1469e7015,&DAT_1468e2360);
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_1469e7018);
      return DAT_1469e7015;
    }
  }
  return DAT_1469e7015;
}



// FUNCTION 1416fbc90 FUN_1416fbc90 body=453 status=ok
// SIG undefined FUN_1416fbc90(void)

bool FUN_1416fbc90(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  puStack_50 = local_res10;
  local_58 = &LAB_1416eb8e0;
  local_res10[0] = 0;
  uVar4 = FUN_1415d8310(&local_58,&DAT_1464b49c0);
  cVar2 = FUN_1416fc150(uVar4,param_1,param_2);
  iVar7 = *(int *)((longlong)param_2 * 0x88 + 8 + lVar1);
  if (cVar2 != '\0') {
    return (bool)cVar2;
  }
  do {
    if (iVar7 == 0) {
      return false;
    }
    if (iVar7 + -1 == -1) {
      return false;
    }
    puStack_50 = local_res10;
    local_58 = &LAB_1416eb8e0;
    local_48 = 0x416eb8e0;
    uStack_44 = 1;
    local_res10[0] = 0;
    lVar1 = *(longlong *)(param_1 + 0x18);
    puStack_40 = puStack_50;
    lVar5 = FUN_1415d8310(&local_48,&DAT_1464b49c0);
    TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
    ::FindId(lVar5 + 0x18,local_res8,param_1);
    plVar6 = (longlong *)0x0;
    if (local_res8[0] != -1) {
      plVar6 = (longlong *)((longlong)local_res8[0] * 0x60 + *(longlong *)(lVar5 + 0x18));
    }
    plVar8 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    if (plVar8 == (longlong *)0x0) {
      bVar9 = false;
    }
    else {
      if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
        plVar6 = (longlong *)plVar8[8];
        if ((longlong *)plVar8[8] == (longlong *)0x0) {
          plVar6 = plVar8 + 7;
        }
        iVar3 = *(int *)((longlong)plVar6 +
                        ((longlong)(int)plVar8[9] - 1U & (longlong)iVar7 - 1U) * 4);
        if (iVar3 != -1) {
          do {
            if (*(int *)(*plVar8 + (longlong)iVar3 * 0xc) == iVar7 + -1) goto LAB_1416fbe0c;
            iVar3 = *(int *)(*plVar8 + 4 + (longlong)iVar3 * 0xc);
          } while (iVar3 != -1);
        }
      }
      iVar3 = -1;
LAB_1416fbe0c:
      bVar9 = iVar3 != -1;
    }
    iVar7 = *(int *)(((longlong)iVar7 - 1U) * 0x88 + lVar1 + 8);
    if (bVar9 != false) {
      return bVar9;
    }
  } while( true );
}



// FUNCTION 1416fbe60 FUN_1416fbe60 body=445 status=ok
// SIG undefined FUN_1416fbe60(void)

undefined8 FUN_1416fbe60(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong local_18 [2];
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) & 0x280000) != 0x280000) {
    lVar2 = UPackage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      if ((*(uint *)(param_1 + 8) & 0x8080400) != 0) {
        return 0;
      }
      if ((DAT_1464aaa49 != '\0') &&
         (lVar2 = UObjectBaseUtility::GetOutermost(param_1), (*(uint *)(lVar2 + 0x50) >> 4 & 1) != 0
         )) {
        uVar3 = FUN_1416f9640();
        uVar3 = FUN_1416fc350(uVar3,param_1);
        return uVar3;
      }
      lVar2 = UDynamicClass::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (DAT_1468c21ab == '\0') {
          if (*(longlong *)(param_1 + 0xf8) != 0) {
            if ((*(uint *)(param_1 + 0xb4) >> 0x16 & 1) != 0) {
              return 1;
            }
            puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_18,0);
            puVar5 = &DAT_143f3eda8;
            if (*(int *)(puVar4 + 1) == 0) {
              puVar6 = &DAT_143f3eda8;
            }
            else {
              puVar6 = (undefined2 *)*puVar4;
            }
            LowLevelFatalErrorHandler
                      ("Unknown",0x851,
                       L"Class %s is fully loaded, but does not have its token stream assembled.",
                       puVar6);
            if (local_18[0] != 0) {
              FMemory::Free();
            }
            puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_18,0);
            if (*(int *)(puVar4 + 1) != 0) {
              puVar5 = (undefined2 *)*puVar4;
            }
            FDebug::AssertFailed
                      (&DAT_144cf0eda,"Unknown",0x851,
                       L"Class %s is fully loaded, but does not have its token stream assembled.",
                       puVar5);
            if (local_18[0] == 0) {
              return 1;
            }
            FMemory::Free();
            return 1;
          }
        }
        else if ((*(uint *)(param_1 + 0xb4) & 0x20000000) != 0) {
          return 1;
        }
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1416fc030 FUN_1416fc030 body=103 status=ok
// SIG undefined FUN_1416fc030(void)

undefined4 FUN_1416fc030(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  
  FUN_1416f86a0();
  if ((DAT_1469e689c != '\0') && (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1469e68cc)) {
    return 1;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    return 0;
  }
  lVar1 = FUN_1416f86a0();
  if (*(int *)(lVar1 + 0x2d8) == 0) {
    return 0;
  }
  return 1;
}



// FUNCTION 1416fc0a0 IsInBlueprint body=167 status=ok
// SIG undefined IsInBlueprint(void)

ulonglong UObject::IsInBlueprint(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  
  if (param_1 != 0) {
    if (param_1 == 0) goto LAB_1416fc104;
    do {
      lVar3 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) &&
          (uVar2 = *(uint *)(param_1 + 0xb4) >> 0x12, in_RAX = (ulonglong)uVar2, (uVar2 & 1) != 0))
         && (*(longlong *)(param_1 + 200) != 0)) {
LAB_1416fc13f:
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
LAB_1416fc104:
      uVar2 = *(uint *)(param_1 + 8) >> 4;
      in_RAX = (ulonglong)uVar2;
      if ((((uVar2 & 1) != 0) && (lVar3 = *(longlong *)(param_1 + 0x10), lVar3 != 0)) &&
         ((uVar2 = *(uint *)(lVar3 + 0xb4) >> 0x12, in_RAX = (ulonglong)uVar2, (uVar2 & 1) != 0 &&
          (*(longlong *)(lVar3 + 200) != 0)))) goto LAB_1416fc13f;
      param_1 = *(longlong *)(param_1 + 0x20);
    } while (param_1 != 0);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1416fc150 FUN_1416fc150 body=186 status=ok
// SIG undefined FUN_1416fc150(void)

ulonglong FUN_1416fc150(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int local_res8 [2];
  
  TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x18),local_res8,param_2);
  plVar2 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar2 = (longlong *)((longlong)local_res8[0] * 0x60 + *(longlong *)(param_1 + 0x18));
  }
  plVar4 = plVar2 + 1;
  if (plVar2 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 == (longlong *)0x0) {
    return (ulonglong)plVar2 & 0xffffffffffffff00;
  }
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar2 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar2 = plVar4 + 7;
    }
    uVar1 = *(uint *)((longlong)plVar2 + ((longlong)(int)plVar4[9] - 1U & (longlong)param_3) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        uVar3 = (ulonglong)uVar1;
        if (*(int *)(*plVar4 + (longlong)(int)uVar1 * 0xc) == param_3) goto LAB_1416fc1ec;
        uVar1 = *(uint *)(*plVar4 + 4 + (longlong)(int)uVar1 * 0xc);
      } while (uVar1 != 0xffffffff);
    }
  }
  uVar3 = 0xffffffff;
LAB_1416fc1ec:
  return CONCAT71((int7)(uVar3 >> 8),(int)uVar3 != -1);
}



// FUNCTION 1416fc210 FUN_1416fc210 body=310 status=ok
// SIG undefined FUN_1416fc210(void)

ulonglong FUN_1416fc210(undefined8 *param_1)

{
  wchar_t wVar1;
  wint_t wVar2;
  wint_t wVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 extraout_var_00;
  undefined6 extraout_var;
  ushort *puVar6;
  wchar_t *pwVar7;
  wchar_t *_Str1;
  wint_t *pwVar8;
  
  iVar4 = *(int *)(param_1 + 1);
  uVar5 = (ulonglong)(iVar4 - 1);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  if (6 < (int)uVar5) {
    if (iVar4 == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (ushort *)*param_1;
    }
    uVar5 = (ulonglong)*puVar6;
    _Str1 = (wchar_t *)(puVar6 + 1);
    if (*puVar6 == 0x2f) {
      do {
        pwVar7 = _Str1;
        wVar1 = *pwVar7;
        uVar5 = (ulonglong)(ushort)wVar1;
        if (wVar1 == L'\0') goto LAB_1416fc33e;
        _Str1 = pwVar7 + 1;
      } while (wVar1 != L'/');
      if (*_Str1 != L'\0') {
        iVar4 = _wcsnicmp(_Str1,L"PatchDLC/",9);
        if (iVar4 == 0) {
          _Str1 = pwVar7 + 10;
          do {
            wVar1 = *_Str1;
            uVar5 = (ulonglong)(ushort)wVar1;
            if (wVar1 == L'\0') goto LAB_1416fc33e;
            _Str1 = _Str1 + 1;
          } while (wVar1 != L'/');
          if (*_Str1 == L'\0') goto LAB_1416fc33e;
        }
        iVar4 = _wcsnicmp(_Str1,L"L10N/",5);
        uVar5 = CONCAT44(extraout_var_00,iVar4);
        if (iVar4 != 0) {
          pwVar8 = &DAT_144cf44c0;
          do {
            wVar2 = *(wint_t *)((longlong)(_Str1 + -0xa267a260) + (longlong)pwVar8);
            if ((wVar2 == 0) && (*pwVar8 == 0)) break;
            if (wVar2 != *pwVar8) {
              wVar2 = towlower(wVar2);
              wVar3 = towlower(*pwVar8);
              uVar5 = CONCAT62(extraout_var,wVar3);
              if (wVar2 != wVar3) goto LAB_1416fc310;
            }
            pwVar8 = pwVar8 + 1;
          } while( true );
        }
        goto LAB_1416fc32c;
      }
    }
  }
LAB_1416fc33e:
  return uVar5 & 0xffffffffffffff00;
LAB_1416fc310:
  uVar5 = (ulonglong)wVar3;
  if (wVar2 != wVar3) {
    return (ulonglong)wVar3 & 0xff00;
  }
LAB_1416fc32c:
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 1416fc350 FUN_1416fc350 body=613 status=ok
// SIG undefined FUN_1416fc350(void)

undefined8 FUN_1416fc350(longlong *param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_58;
  undefined2 *local_50;
  int local_48;
  int local_44;
  longlong local_40;
  int local_38;
  longlong local_30 [3];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e6f78) && (_Init_thread_header(&DAT_1469e6f78), DAT_1469e6f78 == -1))
  {
    FName::FName(&DAT_1469e6f70,L"/Script/CoreUObject",1);
    _Init_thread_footer(&DAT_1469e6f78);
  }
  lVar2 = UObjectBaseUtility::GetOutermost(param_2);
  local_res20 = *(longlong *)(lVar2 + 0x18);
  if (local_res20 == DAT_1469e6f70) {
    return 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1a);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_res18 = *(undefined8 *)(param_2 + 0x18);
  FName::ToString(&local_res18,&local_40);
  puVar3 = (undefined8 *)FName::ToString(&local_res20,local_30);
  iVar8 = 0;
  if (local_38 != 0) {
    iVar8 = local_38 + -1;
  }
  if ((*(int *)(puVar3 + 1) != 0) || (iVar6 = 2, iVar8 == -1)) {
    iVar6 = 1;
  }
  local_50 = (undefined2 *)*puVar3;
  *puVar3 = 0;
  local_48 = *(int *)(puVar3 + 1);
  local_44 = *(int *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  if (local_44 < iVar6 + local_48 + iVar8) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_50);
  }
  FString::PathAppend(&local_50,local_40,iVar8);
  puVar7 = &DAT_143f3eda8;
  if (local_48 != 0) {
    puVar7 = local_50;
  }
  FName::FName(&local_58,puVar7,1);
  if (local_50 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar8 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)local_58 >> 0x20) + (int)local_58) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar8 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar8 * 0x28;
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x28) == local_58) {
          if (iVar8 != -1) goto LAB_1416fc533;
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x20);
      } while (iVar8 != -1);
    }
  }
  lVar2 = 0;
LAB_1416fc533:
  lVar5 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  if ((lVar5 == 0) || (*(int *)(lVar5 + 4) == 2)) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar9;
}



// FUNCTION 1416fc5c0 IsScriptPackage body=37 status=ok
// SIG undefined IsScriptPackage(void)

void FPackageName::IsScriptPackage(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416f87e0();
  FString::StartsWith(param_1,lVar1 + 0x30,1);
  return;
}



// FUNCTION 1416fc5f0 IsShortPackageName body=58 status=ok
// SIG undefined IsShortPackageName(void)

undefined8 FPackageName::IsShortPackageName(undefined8 *param_1)

{
  short *psVar1;
  short *psVar2;
  
  psVar1 = (short *)*param_1;
  psVar2 = psVar1;
  while( true ) {
    if (psVar2 == psVar1 + *(int *)(param_1 + 1)) {
      return 0xffffff01;
    }
    if (*psVar2 == 0x2f) break;
    psVar2 = psVar2 + 1;
  }
  return CONCAT71((int7)((longlong)psVar2 - (longlong)psVar1 >> 9),
                  (int)((longlong)psVar2 - (longlong)psVar1 >> 1) == -1);
}



// FUNCTION 1416fc630 IsShortPackageName body=106 status=ok
// SIG undefined IsShortPackageName(void)

bool FPackageName::IsShortPackageName(undefined8 param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  int iVar3;
  short *psVar4;
  undefined8 local_res8 [4];
  longlong local_18 [2];
  
  local_res8[0] = param_1;
  puVar2 = (undefined8 *)FName::ToString(local_res8,local_18);
  psVar1 = (short *)*puVar2;
  psVar4 = psVar1;
  do {
    if (psVar4 == psVar1 + *(int *)(puVar2 + 1)) {
      iVar3 = -1;
LAB_1416fc674:
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      return iVar3 == -1;
    }
    if (*psVar4 == 0x2f) {
      iVar3 = (int)((longlong)psVar4 - (longlong)psVar1 >> 1);
      goto LAB_1416fc674;
    }
    psVar4 = psVar4 + 1;
  } while( true );
}



// FUNCTION 1416fc6a0 IsValidLongPackageName body=2360 status=ok
// SIG undefined IsValidLongPackageName(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FPackageName::IsValidLongPackageName
                    (undefined8 *param_1,undefined1 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  void *pvVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong *puVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  undefined8 local_280;
  longlong *local_278;
  undefined8 local_270;
  undefined4 *local_268;
  undefined4 *puStack_260;
  longlong local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 *local_248;
  ulonglong *puStack_240;
  undefined4 *local_238;
  int local_230;
  undefined8 local_228;
  longlong local_220;
  undefined8 local_218;
  longlong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  ulonglong *local_160;
  undefined1 local_150 [8];
  ulonglong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined4 local_a0 [4];
  undefined1 local_90 [8];
  longlong *local_88;
  char local_78;
  undefined4 local_70 [4];
  undefined1 local_60 [8];
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  iVar15 = *(int *)(param_1 + 1);
  iVar14 = iVar15 + -1;
  uVar8 = iVar15 - 1;
  if (iVar15 == 0) {
    iVar14 = -1;
    uVar8 = 0xffffffff;
  }
  uVar19 = 0;
  uVar13 = (ulonglong)uVar8;
  if (iVar15 == 0) {
    uVar13 = uVar19;
  }
  local_258 = param_3;
  if ((int)uVar13 < 4) {
    if (param_3 == 0) goto LAB_1416fca28;
    local_248 = (undefined4 *)0x0;
    puStack_240 = (ulonglong *)0x0;
    lVar10 = FText::AsNumber(local_d0,4,0,&local_248);
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_180,L"Path should be no less than {0} characters long.",L"Core",
                        L"LongPackageNames_PathTooShort");
    puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar11);
    local_a0[0] = 4;
    FText::FText(local_90,lVar10);
    local_228 = *puVar12;
    local_268 = local_a0;
    puStack_260 = local_70;
    local_220 = puVar12[1];
    local_78 = '\x01';
    if (local_220 != 0) {
      LOCK();
      *(int *)(local_220 + 8) = *(int *)(local_220 + 8) + 1;
      UNLOCK();
    }
    local_208 = local_268;
    uStack_200 = puStack_260;
    uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_1f8,&local_208);
    uVar11 = FText::Format(local_198,&local_228,uVar11);
    FText::FText(local_1c8,uVar11);
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar20 = local_190 + 1;
      lVar5 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)local_190 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_190 + 8))(local_190,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1f8);
    if ((local_78 != '\0') && (local_78 = '\0', local_88 != (longlong *)0x0)) {
      LOCK();
      plVar20 = local_88 + 1;
      lVar5 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    plVar20 = (longlong *)puVar12[1];
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar20 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar20 + 8))(plVar20,1);
        }
      }
    }
    plVar20 = *(longlong **)(lVar10 + 8);
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar20 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar20 + 8))(plVar20,1);
        }
      }
    }
    uVar13 = FText::operator=(param_3,local_1c8);
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar20 = local_1c0 + 1;
      lVar10 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      uVar8 = (int)lVar10 - 1;
      uVar13 = (ulonglong)uVar8;
      if (uVar8 == 0) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)local_1c0 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar13 = (ulonglong)(iVar15 - 1U);
        if (iVar15 - 1U == 0) {
          uVar13 = (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
    puVar17 = puStack_240;
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar20 = local_178 + 1;
      lVar10 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      uVar8 = (int)lVar10 - 1;
      uVar13 = (ulonglong)uVar8;
      if (uVar8 == 0) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar1 = (int *)((longlong)local_178 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar13 = (ulonglong)(iVar15 - 1U);
        puVar17 = puStack_240;
        if (iVar15 - 1U == 0) {
          uVar13 = (**(code **)(*local_178 + 8))(local_178,1);
          puVar17 = puStack_240;
        }
      }
    }
  }
  else if (*(short *)*param_1 == 0x2f) {
    if (iVar15 == 0) {
      iVar14 = 0;
    }
    uVar13 = (ulonglong)iVar14;
    if (((short *)*param_1)[uVar13 - 1] != 0x2f) {
      uVar13 = DoesPackageNameContainInvalidCharacters(param_1,param_3);
      if ((char)uVar13 != '\0') goto LAB_1416fca28;
      uVar11 = FUN_1416f87e0();
      local_278 = (longlong *)0x0;
      local_270 = 0;
      FLongPackagePathsSingleton::GetValidLongPackageRoots(uVar11,&local_278,param_2);
      iVar15 = 0;
      if (0 < (int)local_270) {
        do {
          cVar7 = FString::StartsWith(param_1,local_278 + (longlong)iVar15 * 2,1);
          if (cVar7 != '\0') {
            uVar19 = 1;
            goto LAB_1416fcf7f;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)local_270);
      }
      iVar15 = 0;
      if (param_3 != 0) {
        if ((int)local_270 == 0) {
          uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_138,L"No valid roots exist!",L"Core",
                              L"LongPackageNames_NoValidRoots");
          FText::operator=(param_3,uVar11);
          local_1e8 = (undefined4 *)CONCAT44(local_1e8._4_4_,(undefined4)local_1e8);
          uStack_1e0 = (ulonglong *)CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0);
          if (local_130 != (longlong *)0x0) {
            LOCK();
            plVar20 = local_130 + 1;
            lVar10 = *plVar20;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            local_1e8 = (undefined4 *)CONCAT44(local_1e8._4_4_,(undefined4)local_1e8);
            uStack_1e0 = (ulonglong *)CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0);
            if ((int)lVar10 == 1) {
              (**(code **)*local_130)(local_130);
              LOCK();
              piVar1 = (int *)((longlong)local_130 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*local_130 + 8))(local_130,1);
                uVar19 = 0;
              }
            }
          }
          goto LAB_1416fcfa6;
        }
        local_288 = 0;
        local_280 = 0;
        if ((int)local_270 == 1) {
          if ((int)local_278[1] == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = (undefined2 *)*local_278;
          }
          FString::PrintfImpl(&local_258,L"\'%s\'",puVar18);
          if (local_288 != 0) {
            FMemory::Free();
          }
          local_288 = local_258;
          local_280 = CONCAT44(local_24c,local_250);
        }
        else if (0 < (int)local_270) {
          iVar14 = (int)local_270 + -1;
          plVar20 = local_278;
          do {
            if (iVar15 < iVar14) {
              if ((int)plVar20[1] == 0) {
                puVar18 = &DAT_143f3eda8;
              }
              else {
                puVar18 = (undefined2 *)*plVar20;
              }
              FString::PrintfImpl(&local_238,L"\'%s\', ",puVar18);
              puVar21 = local_238;
              uVar13 = local_280;
              if (local_230 == 0) {
                iVar16 = 0;
              }
              else {
                iVar16 = local_230 + -1;
              }
              if (iVar16 != 0) {
                iVar6 = (int)local_280;
                lVar10 = (longlong)(int)local_280;
                iVar9 = (uint)((int)local_280 == 0) + (int)local_280 + iVar16;
                local_280 = CONCAT44(local_280._4_4_,iVar9);
                if (local_280._4_4_ < iVar9) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,uVar13 & 0xffffffff);
                }
                pvVar4 = (void *)(local_288 + (lVar10 - (ulonglong)(iVar6 != 0)) * 2);
                ::_guard_xfg_dispatch_icall_nop(pvVar4,puVar21,(longlong)iVar16 * 2);
                *(undefined2 *)((longlong)iVar16 * 2 + (longlong)pvVar4) = 0;
                puVar21 = local_238;
              }
            }
            else {
              if ((int)plVar20[1] == 0) {
                puVar18 = &DAT_143f3eda8;
              }
              else {
                puVar18 = (undefined2 *)*plVar20;
              }
              FString::PrintfImpl(&local_268,L"or \'%s\'",puVar18);
              puVar21 = local_268;
              uVar13 = local_280;
              if ((int)puStack_260 == 0) {
                iVar16 = 0;
              }
              else {
                iVar16 = (int)puStack_260 + -1;
              }
              if (iVar16 != 0) {
                iVar6 = (int)local_280;
                lVar10 = (longlong)(int)local_280;
                iVar9 = (uint)((int)local_280 == 0) + (int)local_280 + iVar16;
                local_280 = CONCAT44(local_280._4_4_,iVar9);
                if (local_280._4_4_ < iVar9) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,uVar13 & 0xffffffff);
                }
                pvVar4 = (void *)(local_288 + (lVar10 - (ulonglong)(iVar6 != 0)) * 2);
                ::_guard_xfg_dispatch_icall_nop(pvVar4,puVar21,(longlong)iVar16 * 2);
                *(undefined2 *)((longlong)iVar16 * 2 + (longlong)pvVar4) = 0;
                puVar21 = local_268;
              }
            }
            if (puVar21 != (undefined4 *)0x0) {
              FMemory::Free(puVar21);
            }
            iVar15 = iVar15 + 1;
            plVar20 = plVar20 + 2;
            param_3 = local_258;
          } while (iVar15 < (int)local_270);
        }
        lVar10 = FText::FromString(local_b8,&local_288);
        uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_108,
                            L"Path does not start with a valid root. Path must begin with: {0}",
                            L"Core",L"LongPackageNames_InvalidRoot");
        puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_e0,uVar11);
        local_70[0] = 4;
        FText::FText(local_60,lVar10);
        local_218 = *puVar12;
        local_248 = local_70;
        puStack_240 = &local_40;
        local_210 = puVar12[1];
        local_48 = '\x01';
        if (local_210 != 0) {
          LOCK();
          *(int *)(local_210 + 8) = *(int *)(local_210 + 8) + 1;
          UNLOCK();
        }
        local_1e8 = local_248;
        uStack_1e0 = puStack_240;
        uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8,&local_1e8);
        uVar11 = FText::Format(local_120,&local_218,uVar11);
        FText::FText(local_1b0,uVar11);
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_118 + 1;
          lVar5 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar1 = (int *)((longlong)local_118 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8);
        if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
          LOCK();
          plVar20 = local_58 + 1;
          lVar5 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar1 = (int *)((longlong)local_58 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_58 + 8))(local_58,1);
            }
          }
        }
        plVar20 = (longlong *)puVar12[1];
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar20 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        plVar20 = *(longlong **)(lVar10 + 8);
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar20 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        FText::operator=(param_3,local_1b0);
        if (local_1a8 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_1a8 + 1;
          lVar10 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_1a8)(local_1a8);
            LOCK();
            piVar1 = (int *)((longlong)local_1a8 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_1a8 + 8))(local_1a8,1);
            }
          }
        }
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_100 + 1;
          lVar10 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar1 = (int *)((longlong)local_100 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_100 + 8))(local_100,1);
            }
          }
        }
        if (local_288 != 0) {
          FMemory::Free();
        }
        uVar19 = 0;
      }
LAB_1416fcf7f:
      plVar20 = local_278;
      for (iVar15 = (int)local_270; iVar15 != 0; iVar15 = iVar15 + -1) {
        if (*plVar20 != 0) {
          FMemory::Free();
        }
        plVar20 = plVar20 + 2;
      }
LAB_1416fcfa6:
      if (local_278 == (longlong *)0x0) {
        return uVar19;
      }
      FMemory::Free();
      return uVar19;
    }
    if (param_3 == 0) goto LAB_1416fca28;
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_150,L"Path may not end with a \'/\'",L"Core",
                        L"LongPackageNames_PathWithTrailingSlash");
    uVar13 = FText::operator=(param_3,uVar11);
    puVar17 = local_148;
  }
  else {
    if (param_3 == 0) goto LAB_1416fca28;
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_168,L"Path should start with a \'/\'",L"Core",
                        L"LongPackageNames_PathWithNoStartingSlash");
    uVar13 = FText::operator=(param_3,uVar11);
    puVar17 = local_160;
  }
  if (puVar17 != (ulonglong *)0x0) {
    LOCK();
    puVar3 = puVar17 + 1;
    uVar13 = *puVar3;
    *(int *)puVar3 = (int)*puVar3 + -1;
    UNLOCK();
    uVar8 = (int)uVar13 - 1;
    uVar13 = (ulonglong)uVar8;
    if (uVar8 == 0) {
      uVar13 = (**(code **)*puVar17)(puVar17);
      LOCK();
      piVar1 = (int *)((longlong)puVar17 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        uVar13 = (**(code **)(*puVar17 + 8))(puVar17,1);
        return uVar13 & 0xffffffffffffff00;
      }
    }
  }
LAB_1416fca28:
  return uVar13 & 0xffffffffffffff00;
}



// FUNCTION 1416fcfe0 FUN_1416fcfe0 body=1278 status=ok
// SIG undefined FUN_1416fcfe0(void)

undefined8 FUN_1416fcfe0(wchar_t **param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  wchar_t *pwVar15;
  int iVar16;
  wchar_t *pwVar17;
  int iVar18;
  wchar_t *local_res18;
  wchar_t *local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  int local_c0;
  undefined4 local_bc;
  wchar_t *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8 [2];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  pwVar15 = *param_1;
  pwVar17 = (wchar_t *)0x0;
  uVar14 = *(uint *)(param_1 + 1);
  local_e8 = (wchar_t *)0x0;
  local_e0 = 0;
  local_d8 = (wchar_t *)0x0;
  iVar16 = 0;
  local_d0 = 0;
  uVar10 = 0;
  for (pwVar5 = pwVar15; pwVar5 != pwVar15 + (int)uVar14; pwVar5 = pwVar5 + 1) {
    if (*pwVar5 == L'.') {
      uVar12 = (uint)((longlong)pwVar5 - (longlong)pwVar15 >> 1);
      if (uVar12 != 0xffffffff) {
        uVar7 = uVar14 - 1;
        uVar13 = uVar14 - 2;
        if (uVar14 == 0) {
          uVar7 = 0xffffffff;
          uVar13 = 0xffffffff;
        }
        if (uVar12 == uVar13) {
          if (param_2 == 0) goto LAB_1416fd4d7;
          uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_80,L"Object Path may not end with .",L"Core",
                             L"ObjectPath_EndWithPeriod");
          FText::operator=(param_2,uVar6);
          plVar11 = local_78;
          goto LAB_1416fd4a9;
        }
        if (uVar14 == 0) {
          uVar7 = uVar10;
        }
        uVar13 = uVar7;
        if (uVar7 != 0) {
          uVar13 = uVar10;
        }
        uVar8 = uVar13;
        if ((uVar13 <= uVar12) && (uVar8 = uVar7, uVar12 < uVar7)) {
          uVar8 = uVar12;
        }
        local_c8 = (wchar_t *)0x0;
        local_bc = 0;
        local_res18 = L"";
        pwVar5 = L"";
        if (uVar14 != 0) {
          pwVar5 = pwVar15;
        }
        iVar9 = uVar8 - uVar13;
        iVar18 = iVar9 + 1;
        if (iVar9 == 0) {
          iVar18 = 0;
        }
        local_c0 = iVar18;
        if (iVar18 < 1) {
          pwVar15 = (wchar_t *)0x0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
          iVar18 = local_c0;
          pwVar15 = local_c8;
          if (0 < local_c0) {
            wcsncpy(local_c8,pwVar5 + (int)uVar13,(longlong)iVar9);
            pwVar15[iVar9] = L'\0';
          }
          if (local_e8 != (wchar_t *)0x0) {
            FMemory::Free();
          }
        }
        iVar9 = *(int *)(param_1 + 1);
        local_e0 = CONCAT44(local_bc,iVar18);
        uVar14 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar14 = uVar10;
        }
        uVar7 = uVar12 + 0x80000000;
        if (uVar12 + 1 < uVar14) {
          uVar14 = uVar12 + 1;
        }
        uVar12 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar12 = uVar10;
        }
        uVar10 = uVar14;
        if ((uVar14 <= uVar7) && (uVar10 = uVar12, uVar7 < uVar12)) {
          uVar10 = uVar7;
        }
        if (iVar9 != 0) {
          local_res18 = *param_1;
        }
        iVar9 = uVar10 - uVar14;
        local_b8 = (wchar_t *)0x0;
        local_ac = 0;
        iVar18 = iVar9 + 1;
        if (iVar9 == 0) {
          iVar18 = 0;
        }
        local_e8 = pwVar15;
        local_b0 = iVar18;
        if ((0 < iVar18) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0), iVar18 = local_b0,
           pwVar17 = local_b8, 0 < local_b0)) {
          wcsncpy(local_b8,local_res18 + (int)uVar14,(longlong)iVar9);
          pwVar17[iVar9] = L'\0';
        }
        if (local_d8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_d0 = CONCAT44(local_ac,iVar18);
        local_d8 = pwVar17;
        goto LAB_1416fd278;
      }
      break;
    }
  }
  if (&local_e8 != param_1) {
    local_e0 = (ulonglong)uVar14;
    if (uVar14 == 0) {
      local_e0 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,uVar14,0);
      _guard_xfg_dispatch_icall_nop(local_e8,pwVar15,(longlong)(int)uVar14 * 2);
    }
  }
LAB_1416fd278:
  cVar4 = FPackageName::IsValidLongPackageName(&local_e8,1,param_2);
  if (cVar4 == '\0') {
    uVar6 = 0;
    goto LAB_1416fd3a7;
  }
  if (((int)local_d0 == 0) || ((int)local_d0 + -1 < 1)) {
LAB_1416fd3a5:
    uVar6 = 1;
  }
  else {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_98,L"Object Path",L"Core",L"ObjectPathContext");
    local_a8[0] = 0;
    local_a8[1] = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
    FGenericPlatformString::Memcpy(local_a8[0],L"\"\' ,|&!~\n\r\t@#(){}[]=;^%$`",0x34);
    cVar4 = FName::IsValidXName(&local_d8,local_a8,param_2,local_98);
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
    plVar11 = local_90;
    if (cVar4 != '\0') {
      if ((int)local_d0 != 0) {
        iVar16 = (int)local_d0 + -1;
      }
      if ((local_d8[(longlong)iVar16 + -1] != L'.') && (local_d8[(longlong)iVar16 + -1] != L':')) {
        for (pwVar15 = local_d8; pwVar15 != local_d8 + (int)local_d0; pwVar15 = pwVar15 + 1) {
          if (*pwVar15 == L'/') {
            if ((int)((longlong)pwVar15 - (longlong)local_d8 >> 1) != -1) {
              if (param_2 == 0) goto LAB_1416fd4a9;
              uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_68,L"Object Path may not have / after first .",L"Core",
                                 L"ObjectPath_SlashAfterPeriod");
              FText::operator=(param_2,uVar6);
              goto LAB_1416fd472;
            }
            break;
          }
        }
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_90 + 1;
          lVar3 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)local_90 + 0xc);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*local_90 + 8))(local_90,1);
            }
          }
        }
        goto LAB_1416fd3a5;
      }
      if (param_2 != 0) {
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_50,L"Object Path may not end with : or .",L"Core",
                           L"ObjectPath_PathWithTrailingSeperator");
        FText::operator=(param_2,uVar6);
        local_60 = local_48;
LAB_1416fd472:
        plVar11 = local_90;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_60 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar11 = local_90;
            if (iVar16 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
              plVar11 = local_90;
            }
          }
        }
      }
    }
LAB_1416fd4a9:
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar11 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
LAB_1416fd4d7:
    uVar6 = 0;
  }
LAB_1416fd3a7:
  if (local_d8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_e8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 1416fd4e0 FUN_1416fd4e0 body=219 status=ok
// SIG undefined FUN_1416fd4e0(void)

void FUN_1416fd4e0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar3 == (longlong *)0x0) {
LAB_1416fd5a9:
    *param_1 = (longlong)plVar3;
    param_1[1] = lVar4;
    return;
  }
joined_r0x0001416fd503:
  for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
    if (((*(byte *)(*(longlong *)(lVar4 + 0x10) + 0xb8) & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' ||
         ((*(uint *)(*(longlong *)(lVar4 + 0x10) + 0xb8) >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar4 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_1416fd5a9;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar1 = param_1[2];
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_1 + 2) = iVar2;
    if (iVar2 < (int)plVar3[0x35]) {
      lVar4 = *(longlong *)(plVar3[0x34] + ((longlong)(int)lVar1 + 1) * 0x10);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 0x38);
      }
      goto joined_r0x0001416fd503;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3), plVar3 == (longlong *)0x0))
  goto LAB_1416fd5a9;
  lVar4 = plVar3[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x0001416fd503;
}



// FUNCTION 1416fd5c0 FUN_1416fd5c0 body=1225 status=ok
// SIG undefined FUN_1416fd5c0(void)

void FUN_1416fd5c0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined2 *puVar14;
  ulonglong in_stack_ffffffffffffff78;
  ulonglong uVar15;
  ulonglong in_stack_ffffffffffffff80;
  ulonglong uVar16;
  ulonglong in_stack_ffffffffffffff88;
  ulonglong uVar17;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
  puVar8 = (undefined8 *)((longlong)(int)param_2 * 0x38 + lVar2);
  if ((puVar8[4] == 0) && (*(char *)((longlong)puVar8 + 0x36) == '\0')) {
    if (puVar8[5] == 0) {
      puVar3 = puVar8;
      uVar9 = ~param_2;
      do {
        uVar1 = *(uint *)(puVar3 + 1);
        if (uVar1 == 0) {
          puVar3 = (undefined8 *)((longlong)(int)~uVar9 * 0x38 + lVar2);
          lVar2 = puVar3[4];
          if (lVar2 == 0) {
            *(undefined1 *)((longlong)puVar8 + 0x36) = 1;
          }
          else if (puVar3 != puVar8) {
            uVar15 = in_stack_ffffffffffffff78 & 0xffffffff00000000;
            lVar4 = FindObjectFast<UPackage>(0,puVar8[2],0,0,uVar15);
            if (lVar4 != 0) {
              uVar6 = puVar8[3];
              uVar5 = FUN_14171bfe0();
              puVar14 = (undefined2 *)(in_stack_ffffffffffffff88 & 0xffffffff00000000);
              puVar11 = (undefined2 *)(in_stack_ffffffffffffff80 & 0xffffffff00000000);
              puVar12 = (undefined2 *)(uVar15 & 0xffffffffffffff00);
              lVar4 = FUN_141799680(uVar5,lVar4,uVar6,0,puVar12,puVar11,puVar14);
              if (lVar4 != 0) {
                puVar7 = &DAT_143f3eda8;
                lVar13 = lVar2;
                if (uVar9 != *(uint *)(puVar8 + 1)) {
                  lVar10 = (longlong)(int)~*(uint *)(puVar8 + 1) * 0x38 +
                           *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
                  if (*(longlong *)(lVar10 + 0x20) == 0) {
                    if (*(char *)(lVar10 + 0x36) != '\0') goto LAB_1416fd72b;
                    FUN_1416fd5c0(param_1);
                  }
                  if (*(char *)(lVar10 + 0x36) != '\0') {
LAB_1416fd72b:
                    *(undefined1 *)((longlong)puVar8 + 0x36) = 1;
                    return;
                  }
                  lVar13 = *(longlong *)(lVar10 + 0x20);
                  if (lVar13 == 0) {
                    puVar3 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar2,local_48,0);
                    if (*(int *)(puVar3 + 1) == 0) {
                      puVar14 = &DAT_143f3eda8;
                    }
                    else {
                      puVar14 = (undefined2 *)*puVar3;
                    }
                    puVar3 = (undefined8 *)FName::ToString(lVar10,local_58);
                    if (*(int *)(puVar3 + 1) == 0) {
                      puVar11 = &DAT_143f3eda8;
                    }
                    else {
                      puVar11 = (undefined2 *)*puVar3;
                    }
                    puVar3 = (undefined8 *)FName::ToString(param_1 + 0x20,local_68);
                    if (*(int *)(puVar3 + 1) == 0) {
                      puVar12 = &DAT_143f3eda8;
                    }
                    else {
                      puVar12 = (undefined2 *)*puVar3;
                    }
                    LowLevelFatalErrorHandler
                              ("Unknown",0xbbe,
                               L"Missing outer for import of (%s): %s in %s was not found, but the package exists."
                               ,puVar12,puVar11,puVar14);
                    if (local_68[0] != 0) {
                      FMemory::Free();
                    }
                    if (local_58[0] != 0) {
                      FMemory::Free();
                    }
                    if (local_48[0] != 0) {
                      FMemory::Free();
                    }
                    puVar3 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar2,local_68,0);
                    if (*(int *)(puVar3 + 1) == 0) {
                      puVar14 = &DAT_143f3eda8;
                    }
                    else {
                      puVar14 = (undefined2 *)*puVar3;
                    }
                    puVar3 = (undefined8 *)FName::ToString(lVar10,local_58);
                    if (*(int *)(puVar3 + 1) == 0) {
                      puVar11 = &DAT_143f3eda8;
                    }
                    else {
                      puVar11 = (undefined2 *)*puVar3;
                    }
                    puVar3 = (undefined8 *)FName::ToString(param_1 + 0x20,local_48);
                    if (*(int *)(puVar3 + 1) == 0) {
                      puVar12 = &DAT_143f3eda8;
                    }
                    else {
                      puVar12 = (undefined2 *)*puVar3;
                    }
                    FDebug::AssertFailed
                              (&DAT_144cf0506,"Unknown",0xbbe,
                               L"Missing outer for import of (%s): %s in %s was not found, but the package exists."
                               ,puVar12,puVar11,puVar14);
                    if (local_48[0] != 0) {
                      FMemory::Free();
                    }
                    if (local_58[0] != 0) {
                      FMemory::Free();
                    }
                    if (local_68[0] != 0) {
                      FMemory::Free();
                    }
                  }
                }
                uVar17 = (ulonglong)puVar14 & 0xffffffff00000000;
                uVar16 = (ulonglong)puVar11 & 0xffffffff00000000;
                uVar15 = (ulonglong)puVar12 & 0xffffffffffffff00;
                lVar10 = FUN_141799680(lVar4,lVar13,*puVar8,0,uVar15,uVar16,uVar17);
                puVar8[4] = lVar10;
                if ((lVar10 == 0) &&
                   (lVar10 = UByteProperty::GetPrivateStaticClass(), lVar4 == lVar10)) {
                  lVar4 = UEnumProperty::GetPrivateStaticClass();
                  puVar8[3] = *(undefined8 *)(lVar4 + 0x18);
                  uVar6 = FUN_141799680(lVar4,lVar13,*puVar8,0,uVar15 & 0xffffffffffffff00,
                                        uVar16 & 0xffffffff00000000,uVar17 & 0xffffffff00000000);
                  puVar8[4] = uVar6;
                }
                if (puVar8[4] == 0) {
                  puVar3 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar2,local_68,0);
                  if (*(int *)(puVar3 + 1) == 0) {
                    puVar14 = &DAT_143f3eda8;
                  }
                  else {
                    puVar14 = (undefined2 *)*puVar3;
                  }
                  puVar3 = (undefined8 *)FName::ToString(puVar8,local_58);
                  if (*(int *)(puVar3 + 1) == 0) {
                    puVar11 = &DAT_143f3eda8;
                  }
                  else {
                    puVar11 = (undefined2 *)*puVar3;
                  }
                  puVar3 = (undefined8 *)FName::ToString(param_1 + 0x20,local_48);
                  if (*(int *)(puVar3 + 1) == 0) {
                    puVar12 = &DAT_143f3eda8;
                  }
                  else {
                    puVar12 = (undefined2 *)*puVar3;
                  }
                  LowLevelFatalErrorHandler
                            ("Unknown",0xbcd,
                             L"Missing import of (%s): %s in %s was not found, but the package exists."
                             ,puVar12,puVar11,puVar14);
                  if (local_48[0] != 0) {
                    FMemory::Free();
                  }
                  if (local_58[0] != 0) {
                    FMemory::Free();
                  }
                  if (local_68[0] != 0) {
                    FMemory::Free();
                  }
                  puVar3 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar2,local_68,0);
                  if (*(int *)(puVar3 + 1) == 0) {
                    puVar14 = &DAT_143f3eda8;
                  }
                  else {
                    puVar14 = (undefined2 *)*puVar3;
                  }
                  puVar3 = (undefined8 *)FName::ToString(puVar8,local_58);
                  if (*(int *)(puVar3 + 1) == 0) {
                    puVar11 = &DAT_143f3eda8;
                  }
                  else {
                    puVar11 = (undefined2 *)*puVar3;
                  }
                  puVar3 = (undefined8 *)FName::ToString(param_1 + 0x20,local_48);
                  if (*(int *)(puVar3 + 1) != 0) {
                    puVar7 = (undefined2 *)*puVar3;
                  }
                  FDebug::AssertFailed
                            (&DAT_144cf052e,"Unknown",0xbcd,
                             L"Missing import of (%s): %s in %s was not found, but the package exists."
                             ,puVar7,puVar11,puVar14);
                  if (local_48[0] != 0) {
                    FMemory::Free();
                  }
                  if (local_58[0] != 0) {
                    FMemory::Free();
                  }
                  if (local_68[0] != 0) {
                    FMemory::Free();
                  }
                }
              }
            }
          }
          goto LAB_1416fda50;
        }
        puVar3 = (undefined8 *)((longlong)(int)~uVar1 * 0x38 + lVar2);
        uVar9 = uVar1;
      } while (*(char *)((longlong)puVar3 + 0x36) == '\0');
      *(undefined1 *)((longlong)puVar8 + 0x36) = 1;
    }
    else {
      puVar8[4] = *(undefined8 *)
                   ((longlong)*(int *)(puVar8 + 6) * 0x88 + 0x48 + *(longlong *)(puVar8[5] + 0x18));
LAB_1416fda50:
      if (puVar8[4] != 0) {
        FUN_1416ea3b0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1416fda90 FUN_1416fda90 body=1515 status=ok
// SIG undefined FUN_1416fda90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1416fda90(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  short *psVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  double dVar18;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined1 local_e8 [8];
  longlong local_e0 [2];
  LARGE_INTEGER local_d0;
  short *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x58);
  *(wchar_t **)(param_1 + 0xe0) = L"loading imports";
  FUN_141729b50(local_e8);
  uVar16 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x50) + 0x10) <= *(int *)(param_1 + 0x9c)) {
LAB_1416fe011:
    if (*(int *)(param_1 + 0x78) == 0) {
      if (*(int *)(param_1 + 0x9c) == *(int *)(*(longlong *)(param_1 + 0x50) + 0x10)) {
        uVar16 = 2;
      }
    }
    else {
      if ((*(char *)(param_1 + 200) != '\0') && (*(char *)(param_1 + 0xc9) == '\0')) {
        *(undefined1 *)(param_1 + 0xca) = 1;
      }
      uVar16 = 1;
    }
    FUN_14172a400(local_e8);
    return uVar16;
  }
LAB_1416fdb30:
  piVar1 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x74);
  LOCK();
  bVar17 = *piVar1 == 0;
  if (bVar17) {
    *piVar1 = 0;
  }
  UNLOCK();
  if (bVar17) {
    fVar2 = *(float *)(param_1 + 0xc4);
    dVar3 = *(double *)(param_1 + 0xd0);
    if (*(char *)(param_1 + 200) != '\0') {
      QueryPerformanceCounter(&local_d0);
      _DAT_1464b48b8 = (double)local_d0.QuadPart * DAT_1468b02f8 + 16777216.0;
      dVar18 = _DAT_1464b48b8 - dVar3;
      bVar17 = (double)fVar2 < dVar18;
      if ((((bVar17) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar3)) &&
         (((double)DAT_1464b441c < dVar18 && ((double)(DAT_1464b4418 * fVar2) < dVar18)))) {
        DAT_1464b48b0 = dVar3;
      }
      if (bVar17) goto LAB_1416fdbf6;
    }
    cVar5 = IsGarbageCollectionWaiting();
    bVar17 = false;
    if (cVar5 != '\0') goto LAB_1416fdbf6;
  }
  else {
LAB_1416fdbf6:
    bVar17 = true;
  }
  if (!bVar17) {
    iVar6 = *(int *)(param_1 + 0x9c);
    *(int *)(param_1 + 0x9c) = iVar6 + 1;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
    plVar14 = (longlong *)((longlong)iVar6 * 0x38 + lVar8);
    uVar4 = *(uint *)(plVar14 + 1);
    while ((int)uVar4 < 0) {
      plVar14 = (longlong *)((longlong)(int)~uVar4 * 0x38 + lVar8);
      uVar4 = *(uint *)(plVar14 + 1);
    }
    local_e0[1] = 0xcf;
    if ((plVar14[3] == 0xcf) &&
       (cVar5 = FLinkerLoad::IsKnownMissingPackage(*plVar14), cVar5 == '\0')) {
      local_e0[0] = *plVar14;
      uVar7 = UPackage::GetPrivateStaticClass();
      local_f8 = 0;
      local_100 = 0;
      local_108 = 0;
      lVar8 = FUN_141799680(uVar7,0,local_e0[0],1);
      if (lVar8 == 0) {
LAB_1416fdf2a:
        if (0 < *(int *)(param_1 + 0x78)) {
          plVar10 = *(longlong **)(param_1 + 0x70);
          uVar13 = uVar16;
          uVar15 = uVar16;
          do {
            if (*(longlong *)(*plVar10 + 0x18) == local_e0[0]) {
              if ((int)uVar15 != -1) goto LAB_1416fdfc5;
              break;
            }
            uVar15 = (ulonglong)((int)uVar15 + 1);
            uVar13 = uVar13 + 1;
            plVar10 = plVar10 + 1;
          } while ((longlong)uVar13 < (longlong)*(int *)(param_1 + 0x78));
        }
        FName::ToString(plVar14,&local_c8);
        for (psVar11 = local_c8; psVar11 != local_c8 + local_c0; psVar11 = psVar11 + 1) {
          if (*psVar11 == 0x2f) {
            if ((int)((longlong)psVar11 - (longlong)local_c8 >> 1) != -1) {
              FAsyncPackage::AddImportDependency(param_1,local_e0,param_2);
            }
            break;
          }
        }
        if (local_c8 != (short *)0x0) {
          FMemory::Free(local_c8);
        }
      }
      else {
        lVar9 = UPackage::GetPrivateStaticClass();
        lVar12 = local_e0[0];
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (!bVar17) goto LAB_1416fdf2a;
        if ((*(byte *)(lVar8 + 0x28) & 2) == 0) {
          if ((*(uint *)(lVar8 + 0x50) >> 4 & 1) == 0) {
LAB_1416fdd66:
            lVar8 = FUN_1416f86a0();
            if (*(int *)(lVar8 + 0x1b0) != *(int *)(lVar8 + 0x1dc)) {
              lVar12 = *(longlong *)(lVar8 + 0x1e8);
              if (*(longlong *)(lVar8 + 0x1e8) == 0) {
                lVar12 = lVar8 + 0x1e0;
              }
              iVar6 = *(int *)(lVar12 + ((longlong)
                                         ((int)((ulonglong)local_e0[0] >> 0x20) + (int)local_e0[0])
                                        & (longlong)*(int *)(lVar8 + 0x1f0) - 1U) * 4);
              if (iVar6 != -1) {
                lVar8 = *(longlong *)(lVar8 + 0x1a8);
                do {
                  lVar12 = (longlong)iVar6;
                  if (*(longlong *)(lVar8 + lVar12 * 0x18) == local_e0[0]) {
                    if (((iVar6 != -1) && (lVar8 = lVar8 + lVar12 * 0x18, lVar8 != 0)) &&
                       (lVar8 = *(longlong *)(lVar8 + 8), lVar8 != 0)) {
                      lVar12 = *(longlong *)(lVar8 + 0x50);
                      if ((lVar12 == 0) || (*(char *)(lVar12 + 0x764) == '\0')) {
                        if (*(int *)(param_1 + 0x78) < 1) goto LAB_1416fdf04;
                        plVar14 = *(longlong **)(param_1 + 0x70);
                        uVar13 = uVar16;
                        uVar15 = uVar16;
                        goto LAB_1416fdee0;
                      }
                      LOCK();
                      *(int *)(lVar8 + 0x98) = *(int *)(lVar8 + 0x98) + 1;
                      UNLOCK();
                      iVar6 = *(int *)(param_1 + 0x88);
                      *(int *)(param_1 + 0x88) = iVar6 + 1;
                      if (*(int *)(param_1 + 0x8c) < iVar6 + 1) {
                        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                  (param_1 + 0x80,iVar6);
                      }
                      *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar6 * 8) = lVar8;
                      local_b8 = 0;
                      local_b0 = 0;
                      local_98 = 0;
                      local_90 = 0;
                      local_88 = 0xffffffff;
                      local_84 = 0;
                      local_78 = 0;
                      local_70 = 0;
                      FUN_1416e9e60(param_1,lVar8,&local_b8,param_2);
                      local_70 = 0;
                      if (local_78 != 0) {
                        FMemory::Free();
                      }
                      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                      ::
                      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                                (&local_b8);
                    }
                    break;
                  }
                  iVar6 = *(int *)(lVar8 + (lVar12 * 3 + 2) * 8);
                } while (iVar6 != -1);
              }
            }
          }
          else {
            plVar14 = (longlong *)FUN_14178d740();
            if ((int)plVar14[1] != *(int *)((longlong)plVar14 + 0x34)) {
              plVar10 = (longlong *)plVar14[8];
              if ((longlong *)plVar14[8] == (longlong *)0x0) {
                plVar10 = plVar14 + 7;
              }
              iVar6 = *(int *)((longlong)plVar10 +
                              ((longlong)((int)((ulonglong)lVar12 >> 0x20) + (int)lVar12) &
                              (longlong)(int)plVar14[9] - 1U) * 4);
              if (iVar6 != -1) {
                do {
                  if (*(longlong *)(*plVar14 + (longlong)iVar6 * 0x18) == lVar12) {
                    if (iVar6 != -1) goto LAB_1416fdd66;
                    break;
                  }
                  iVar6 = *(int *)(*plVar14 + 0x10 + (longlong)iVar6 * 0x18);
                } while (iVar6 != -1);
              }
            }
          }
        }
      }
      goto LAB_1416fdfc5;
    }
    goto LAB_1416fdfcd;
  }
  goto LAB_1416fe011;
  while( true ) {
    uVar15 = (ulonglong)((int)uVar15 + 1);
    uVar13 = uVar13 + 1;
    plVar14 = plVar14 + 1;
    if ((longlong)*(int *)(param_1 + 0x78) <= (longlong)uVar13) break;
LAB_1416fdee0:
    if (*(longlong *)(*plVar14 + 0x18) == *(longlong *)(lVar8 + 0x18)) {
      if ((int)uVar15 != -1) goto LAB_1416fdfc5;
      break;
    }
  }
LAB_1416fdf04:
  if ((lVar12 == 0) || (*(char *)(lVar12 + 0x764) == '\0')) {
    FAsyncPackage::AddImportDependency(param_1,lVar8 + 0x18,param_2);
  }
LAB_1416fdfc5:
  FAsyncPackage::UpdateLoadPercentage(param_1);
LAB_1416fdfcd:
  if (*(int *)(*(longlong *)(param_1 + 0x50) + 0x10) <= *(int *)(param_1 + 0x9c))
  goto LAB_1416fe011;
  goto LAB_1416fdb30;
}



// FUNCTION 1416fe080 FUN_1416fe080 body=1391 status=ok
// SIG undefined FUN_1416fe080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1416fe080(longlong param_1)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  double dVar18;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  LARGE_INTEGER local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_f0 [3];
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b8 [2];
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x58);
  *(wchar_t **)(param_1 + 0xe0) = L"loading imports event";
  FUN_141729b50(local_res8);
  lVar16 = 0;
  local_f8 = 0;
  local_f4 = 1;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x10);
  bVar17 = *(int *)(param_1 + 0x9c) == iVar7;
  local_100 = param_1;
  if (*(int *)(param_1 + 0x9c) < iVar7) {
    do {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x74);
      LOCK();
      bVar17 = *piVar1 == 0;
      if (bVar17) {
        *piVar1 = 0;
      }
      UNLOCK();
      if (!bVar17) {
LAB_1416fe58a:
        lVar12 = *(longlong *)(param_1 + 0x50);
        iVar7 = *(int *)(param_1 + 0x9c);
        break;
      }
      fVar2 = *(float *)(param_1 + 0xc4);
      dVar3 = *(double *)(param_1 + 0xd0);
      if (*(char *)(param_1 + 200) != '\0') {
        QueryPerformanceCounter(&local_108);
        dVar4 = (double)fVar2;
        _DAT_1464b48b8 = (double)local_108.QuadPart * DAT_1468b02f8 + 16777216.0;
        dVar18 = _DAT_1464b48b8 - dVar3;
        if ((((dVar4 < dVar18) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar3)) &&
           (((double)DAT_1464b441c < dVar18 && ((double)(DAT_1464b4418 * fVar2) < dVar18)))) {
          DAT_1464b48b0 = dVar3;
        }
        if (dVar4 < dVar18) goto LAB_1416fe58a;
      }
      cVar6 = IsGarbageCollectionWaiting();
      if (cVar6 != '\0') goto LAB_1416fe58a;
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
      plVar8 = (longlong *)FUN_1416f4b50(param_1);
      if ((plVar8[4] == 0) || (cVar6 = FUN_1416fbe60(), cVar6 == '\0')) {
        bVar17 = plVar8[3] != DAT_1469e6a68;
        if ((DAT_1469e68c4 != 0) || (bVar17)) {
          bVar5 = false;
          if (((int)plVar8[1] == 0) || (*(char *)((longlong)plVar8 + 0x36) != '\0')) {
LAB_1416fe2a2:
            local_res10 = 0xcf;
            if (((plVar8[3] == 0xcf) || (!bVar17)) &&
               (cVar6 = FLinkerLoad::IsKnownMissingPackage(), cVar6 == '\0')) {
              lVar12 = plVar8[4];
              lVar13 = lVar16;
              lVar15 = lVar16;
              if (lVar12 != 0) {
                if (*(longlong *)(lVar12 + 0x60) != 0) {
                  lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x60) + 800);
                }
                lVar11 = *(longlong *)(lVar12 + 0x18);
                plVar9 = (longlong *)FUN_14178d740();
                lVar15 = lVar12;
                if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
                  plVar10 = (longlong *)plVar9[8];
                  if ((longlong *)plVar9[8] == (longlong *)0x0) {
                    plVar10 = plVar9 + 7;
                  }
                  iVar7 = *(int *)((longlong)plVar10 +
                                  ((longlong)((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                                  (longlong)(int)plVar9[9] - 1U) * 4);
                  if (iVar7 != -1) {
                    do {
                      if (*(longlong *)(*plVar9 + (longlong)iVar7 * 0x18) == lVar11) {
                        if (iVar7 != -1) {
                          bVar17 = true;
                          goto LAB_1416fe359;
                        }
                        break;
                      }
                      iVar7 = *(int *)(*plVar9 + 0x10 + (longlong)iVar7 * 0x18);
                    } while (iVar7 != -1);
                  }
                }
              }
              bVar17 = false;
              lVar12 = lVar15;
LAB_1416fe359:
              if (((lVar12 == 0) || ((*(uint *)(lVar12 + 0x50) >> 4 & 1) == 0)) || (bVar17)) {
                bVar17 = false;
              }
              else {
                bVar17 = true;
              }
              if (lVar13 == 0) {
                if (!bVar17) {
                  lVar15 = *plVar8;
                  lVar11 = FUN_1416f86a0();
                  lVar13 = lVar16;
                  if (*(int *)(lVar11 + 0x1b0) != *(int *)(lVar11 + 0x1dc)) {
                    lVar13 = *(longlong *)(lVar11 + 0x1e8);
                    if (*(longlong *)(lVar11 + 0x1e8) == 0) {
                      lVar13 = lVar11 + 0x1e0;
                    }
                    iVar7 = *(int *)(lVar13 + ((longlong)
                                               ((int)((ulonglong)lVar15 >> 0x20) + (int)lVar15) &
                                              (longlong)*(int *)(lVar11 + 0x1f0) - 1U) * 4);
                    lVar13 = lVar16;
                    if (iVar7 != -1) {
                      lVar11 = *(longlong *)(lVar11 + 0x1a8);
                      do {
                        lVar14 = (longlong)iVar7;
                        if (*(longlong *)(lVar11 + lVar14 * 0x18) == lVar15) {
                          if ((iVar7 != -1) && (lVar11 = lVar11 + lVar14 * 0x18, lVar11 != 0)) {
                            lVar13 = *(longlong *)(lVar11 + 8);
                          }
                          break;
                        }
                        iVar7 = *(int *)(lVar11 + 0x10 + lVar14 * 0x18);
                      } while (iVar7 != -1);
                    }
                  }
                  if (lVar13 == 0) {
                    if ((lVar12 == 0) || (bVar5)) {
                      local_b0 = *plVar8;
                      local_res18 = 0;
                      local_b8[0] = 0xffffffff;
                      local_a0 = 0;
                      uStack_9c = 0;
                      uStack_98 = 0;
                      uStack_94 = 0;
                      local_90 = 0;
                      local_88 = 0;
                      local_80 = 0xffffffff;
                      local_res20 = 0;
                      local_a8 = local_b0;
                      lVar12 = operator_new(0x510);
                      lVar13 = lVar16;
                      if (lVar12 != 0) {
                        lVar13 = FUN_1416e3de0(lVar12,local_b8);
                      }
                      *(undefined4 *)(lVar13 + 0x44) = *(undefined4 *)(param_1 + 0x44);
                      FAsyncLoadingThread::InsertPackage
                                (*(undefined8 *)(param_1 + 0x1d8),lVar13,0,0);
                    }
                    if (lVar13 == 0) goto LAB_1416fe52f;
                  }
                  goto LAB_1416fe4d2;
                }
              }
              else {
LAB_1416fe4d2:
                if (*(byte *)(lVar13 + 0x1e0) < 2) {
                  local_f0[1] = 0;
                  local_f0[0] = lVar13;
                  FAsyncPackage::AddArc(param_1,local_f0);
                  iVar7 = *(int *)(lVar13 + 0x490);
                  *(int *)(lVar13 + 0x490) = iVar7 + 1;
                  if (*(int *)(lVar13 + 0x494) < iVar7 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (lVar13 + 0x488,iVar7);
                  }
                  *(longlong *)(*(longlong *)(lVar13 + 0x488) + (longlong)iVar7 * 8) = param_1;
                }
                else if (*(byte *)(lVar13 + 0x1e0) < 7) {
                  local_c8 = 0;
                  local_d4 = 2;
                  local_c4 = 1;
                  local_d8 = 0;
                  local_f0[2] = lVar13;
                  local_d0 = param_1;
                  FAsyncPackage::AddArc(param_1,&local_d0);
                }
              }
LAB_1416fe52f:
              FAsyncPackage::UpdateLoadPercentage(param_1);
            }
          }
          else if (*(char *)((longlong)plVar8 + 0x34) == '\0') {
            do {
              if (-1 < (int)*(uint *)(plVar8 + 1)) break;
              *(undefined1 *)((longlong)plVar8 + 0x34) = 1;
              plVar8 = (longlong *)
                       ((longlong)(int)~*(uint *)(plVar8 + 1) * 0x38 +
                       *(longlong *)(*(longlong *)(param_1 + 0x50) + 8));
            } while (*(char *)((longlong)plVar8 + 0x34) == '\0');
            if (*(char *)((longlong)plVar8 + 0x34) == '\0') {
              *(undefined1 *)((longlong)plVar8 + 0x34) = 1;
              bVar5 = true;
              goto LAB_1416fe2a2;
            }
          }
        }
        else {
          *(undefined1 *)((longlong)plVar8 + 0x36) = 1;
        }
      }
      lVar12 = *(longlong *)(param_1 + 0x50);
      iVar7 = *(int *)(param_1 + 0x9c);
    } while (iVar7 < *(int *)(lVar12 + 0x10));
    bVar17 = iVar7 == *(int *)(lVar12 + 0x10);
  }
  if (bVar17) {
    lVar16 = 2;
  }
  FUN_14172a400(local_res8);
  return lVar16;
}



// FUNCTION 1416fe5f0 FUN_1416fe5f0 body=1582 status=ok
// SIG undefined FUN_1416fe5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1416fe5f0(undefined2 **param_1,undefined4 *param_2,short *param_3,longlong *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong **pplVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  BOOL BVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  longlong local_res18;
  longlong *local_res20;
  undefined2 *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  int local_c0;
  int local_bc;
  longlong local_b8 [4];
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_68;
  longlong *local_50 [3];
  
  local_res20 = param_4;
  if ((DAT_1469e7014 == '\0') && (DAT_1468c21ab != '\0')) {
    DAT_1469e7014 = '\x01';
    FGCObject::StaticInit();
  }
  plVar16 = (longlong *)0x0;
  local_d8 = (undefined2 *)0x0;
  local_d0 = 0;
  cVar6 = FPackageName::IsValidLongPackageName(param_1,1,0);
  iVar20 = 0;
  if (cVar6 == '\0') {
    cVar6 = FString::EndsWith(param_1,&DAT_1464b4428,1);
    if (((cVar6 == '\0') && (cVar6 = FString::EndsWith(param_1,&DAT_1464b4438,1), cVar6 == '\0')) ||
       (cVar6 = FPackageName::TryConvertFilenameToLongPackageName(param_1,&local_d8,0),
       cVar6 == '\0')) {
      local_b8[0] = 0;
      local_b8[1] = 0;
      cVar6 = FUN_141700810(&local_d8,local_b8,&local_d8);
      if (cVar6 == '\0') {
        puVar8 = &DAT_143f3eda8;
        if ((int)local_d0 != 0) {
          puVar8 = local_d8;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x1b79,
                   L"LoadPackageAsync failed to begin to load a package because the supplied package name was neither a valid long package name nor a filename of a map within a content folder: \'%s\'"
                   ,puVar8);
        puVar8 = &DAT_143f3eda8;
        if ((int)local_d0 != 0) {
          puVar8 = local_d8;
        }
        FDebug::AssertFailed
                  (&DAT_144cf0edd,"Unknown",0x1b79,
                   L"LoadPackageAsync failed to begin to load a package because the supplied package name was neither a valid long package name nor a filename of a map within a content folder: \'%s\'"
                   ,puVar8);
      }
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
    }
  }
  else if (&local_d8 != param_1) {
    iVar13 = *(int *)(param_1 + 1);
    puVar8 = *param_1;
    local_d0 = CONCAT44(local_d0._4_4_,iVar13);
    if ((iVar13 != 0) || (local_d0._4_4_ != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,iVar13);
      _guard_xfg_dispatch_icall_nop(local_d8,puVar8,(longlong)iVar13 * 2);
    }
  }
  local_c8 = (longlong *)0x0;
  local_bc = 0;
  plVar15 = plVar16;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (param_3[lVar14] != 0);
    iVar13 = (int)lVar14 + 1;
    local_c0 = iVar13;
    if (0 < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    }
    iVar20 = local_bc;
    iVar17 = local_c0;
    plVar15 = local_c8;
    FGenericPlatformString::Memcpy(local_c8,param_3,(longlong)iVar13 * 2);
    if (1 < iVar17) goto LAB_1416fe823;
  }
  puVar8 = local_d8;
  lVar14 = (longlong)(int)local_d0;
  local_c0 = (int)local_d0;
  if (((int)local_d0 != 0) || (iVar17 = (int)local_d0, iVar20 != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_d0 & 0xffffffff,iVar20);
    plVar15 = local_c8;
    _guard_xfg_dispatch_icall_nop(local_c8,puVar8,lVar14 * 2);
    iVar17 = local_c0;
  }
LAB_1416fe823:
  for (plVar12 = plVar15; plVar12 != (longlong *)((longlong)plVar15 + (longlong)iVar17 * 2);
      plVar12 = (longlong *)((longlong)plVar12 + 2)) {
    if ((short)*plVar12 == 0x2f) {
      if ((int)((longlong)plVar12 - (longlong)plVar15 >> 1) != -1) goto LAB_1416fe8ad;
      break;
    }
  }
  plVar12 = (longlong *)&DAT_143f3eda8;
  if (iVar17 != 0) {
    plVar12 = plVar15;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x1b86,L"Async loading code requires long package names (%s).",plVar12);
  plVar12 = (longlong *)&DAT_143f3eda8;
  if (iVar17 != 0) {
    plVar12 = plVar15;
  }
  FDebug::AssertFailed
            (&DAT_144cf0ede,"Unknown",0x1b86,L"Async loading code requires long package names (%s)."
             ,plVar12);
LAB_1416fe8ad:
  plVar15 = DAT_1464aeef0;
  while( true ) {
    if (plVar15 == DAT_1464aeef0 + (longlong)DAT_1464aeef8 * 2) goto LAB_1416fe9e9;
    if (((int)plVar15[1] != 0) && (*plVar15 != 0)) break;
    plVar15 = plVar15 + 2;
  }
  DAT_1464aef04 = DAT_1464aef04 + 1;
  lVar14 = (longlong)(DAT_1464aeef8 + -1);
  bVar4 = false;
  if (-1 < DAT_1464aeef8 + -1) {
    lVar18 = lVar14 << 4;
    bVar4 = false;
    do {
      if (((*(int *)(lVar18 + 8 + (longlong)DAT_1464aeef0) == 0) ||
          (plVar15 = *(longlong **)(lVar18 + (longlong)DAT_1464aeef0), plVar15 == (longlong *)0x0))
         || (cVar6 = (**(code **)(*plVar15 + 0x40))(plVar15,param_1), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar18 = lVar18 + -0x10;
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  iVar20 = DAT_1464aeef8;
  DAT_1464aef04 = DAT_1464aef04 + -1;
  if ((bVar4) && (DAT_1464aef04 < 1)) {
    plVar15 = plVar16;
    plVar12 = plVar16;
    if (0 < DAT_1464aeef8) {
      do {
        if (((*(int *)((longlong)(plVar12 + 1) + (longlong)DAT_1464aeef0) == 0) ||
            (*(longlong **)((longlong)plVar12 + (longlong)DAT_1464aeef0) == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(**(longlong **)((longlong)plVar12 + (longlong)DAT_1464aeef0) + 0x10
                                ))(), cVar6 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464aeef0,plVar15,1,1);
        }
        else {
          plVar15 = (longlong *)(ulonglong)((int)plVar15 + 1);
          plVar12 = plVar12 + 2;
        }
      } while ((int)plVar15 < DAT_1464aeef8);
    }
    _DAT_1464aef00 = DAT_1464aeef8 * 2;
    if (_DAT_1464aef00 < 3) {
      _DAT_1464aef00 = 2;
    }
    if ((_DAT_1464aef00 < iVar20) && (DAT_1464aeefc != DAT_1464aeef8)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464aeef0);
    }
  }
LAB_1416fe9e9:
  LOCK();
  UNLOCK();
  iVar20 = DAT_1469e69a4 + 1;
  DAT_1469e69a4 = DAT_1469e69a4 + 1;
  uVar9 = FUN_1416f86a0();
  FAsyncLoadingThread::AddPendingRequest(uVar9,iVar20);
  plVar15 = local_res20;
  plVar12 = plVar16;
  if ((((int)local_res20[1] != 0) && ((longlong *)*local_res20 != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)*local_res20 + 0x18))(), plVar12 = (longlong *)0x0,
     cVar6 != '\0')) {
    plVar12 = (longlong *)operator_new(0x10);
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
    }
    else {
      *plVar12 = 0;
      *(undefined4 *)(plVar12 + 1) = 0;
      if (((plVar15 != plVar12) && ((int)plVar15[1] != 0)) &&
         (plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0)) {
        (**(code **)(*plVar15 + 0x30))(plVar15,plVar12);
      }
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    local_b8[2] = 0;
    plVar15 = local_b8 + 2;
    local_b8[3] = 0;
  }
  else {
    local_90 = *param_2;
    uStack_8c = param_2[1];
    uStack_88 = param_2[2];
    uStack_84 = param_2[3];
    plVar15 = (longlong *)&local_90;
  }
  puVar8 = &DAT_143f3eda8;
  if ((int)local_d0 != 0) {
    puVar8 = local_d8;
  }
  FName::FName(&local_res18,puVar8,1);
  plVar10 = (longlong *)&DAT_143f3eda8;
  if (local_c0 != 0) {
    plVar10 = local_c8;
  }
  plVar10 = (longlong *)FName::FName(local_98,plVar10,1);
  local_68 = *plVar10;
  if (*plVar10 == 0) {
    local_68 = local_res18;
  }
  local_50[0] = plVar12;
  lVar14 = FUN_1416f86a0();
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar14 + 0x48);
  BVar7 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar7 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  LOCK();
  *(int *)(lVar14 + 0x2b0) = *(int *)(lVar14 + 0x2b0) + 1;
  UNLOCK();
  plVar11 = (longlong *)operator_new(0x40);
  plVar10 = local_50[0];
  plVar19 = plVar16;
  if (plVar11 != (longlong *)0x0) {
    lVar18 = *plVar15;
    uVar2 = *(undefined4 *)((longlong)plVar15 + 4);
    lVar5 = plVar15[1];
    uVar3 = *(undefined4 *)((longlong)plVar15 + 0xc);
    plVar11[1] = local_res18;
    plVar11[2] = local_68;
    pplVar1 = (longlong **)(plVar11 + 5);
    *(int *)plVar11 = iVar20;
    *(int *)(plVar11 + 3) = (int)lVar18;
    *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar2;
    *(int *)(plVar11 + 4) = (int)lVar5;
    *(undefined4 *)((longlong)plVar11 + 0x24) = uVar3;
    *pplVar1 = (longlong *)0x0;
    *(undefined4 *)(plVar11 + 6) = param_5;
    *(undefined4 *)((longlong)plVar11 + 0x34) = param_7;
    *(undefined4 *)(plVar11 + 7) = param_6;
    plVar19 = plVar11;
    if (pplVar1 != local_50) {
      plVar15 = *pplVar1;
      *pplVar1 = plVar12;
      plVar10 = plVar16;
      if (plVar15 != (longlong *)0x0) {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar15);
        FMemory::operator_delete(plVar15,0x10);
      }
    }
  }
  iVar13 = *(int *)(lVar14 + 0x40);
  *(int *)(lVar14 + 0x40) = iVar13 + 1;
  if (*(int *)(lVar14 + 0x44) < iVar13 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar14 + 0x38,iVar13);
  }
  *(longlong **)(*(longlong *)(lVar14 + 0x38) + (longlong)iVar13 * 8) = plVar19;
  LeaveCriticalSection(lpCriticalSection);
  (**(code **)(**(longlong **)(lVar14 + 0x18) + 0x10))();
  if (plVar10 != (longlong *)0x0) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar10);
    FMemory::operator_delete(plVar10,0x10);
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_res20);
  return iVar20;
}



// FUNCTION 1416fec20 FUN_1416fec20 body=148 status=ok
// SIG undefined FUN_1416fec20(void)

undefined4
FUN_1416fec20(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (((param_2 != &local_18) && ((int)param_2[1] != 0)) &&
     (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_18);
  }
  uVar2 = FUN_1416fe5f0(param_1,0,0,&local_18,param_4,param_5,param_3);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return uVar2;
}



// FUNCTION 1416fecc0 FUN_1416fecc0 body=155 status=ok
// SIG undefined FUN_1416fecc0(void)

undefined8 * FUN_1416fecc0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  cVar1 = FUN_14170f420(param_2,param_1);
  if (cVar1 == '\0') {
    puVar2 = &DAT_143f3eda8;
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x1bc,
               L"LongPackageNameToFilename failed to convert \'%s\'. Path does not map to any roots."
               ,puVar3);
    if (*(int *)(param_2 + 1) != 0) {
      puVar2 = (undefined2 *)*param_2;
    }
    FDebug::AssertFailed
              (&DAT_144cf0424,"Unknown",0x1bc,
               L"LongPackageNameToFilename failed to convert \'%s\'. Path does not map to any roots."
               ,puVar2);
  }
  return param_1;
}



// FUNCTION 1416fed60 FUN_1416fed60 body=615 status=ok
// SIG undefined FUN_1416fed60(void)

undefined8 FUN_1416fed60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *_Src;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  LARGE_INTEGER local_res8;
  undefined2 *local_58;
  int local_50;
  int local_4c;
  longlong local_48 [2];
  
  if (*(int *)(param_1 + 0x110) == 3) {
    QueryPerformanceCounter(&local_res8);
    plVar1 = (longlong *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x100);
    puVar3 = (undefined8 *)FUN_141671940(local_48,plVar1,0);
    iVar2 = *(int *)(puVar3 + 1);
    local_58 = (undefined2 *)*puVar3;
    *puVar3 = 0;
    local_50 = *(int *)(puVar3 + 1);
    local_4c = *(int *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    iVar8 = local_50;
    if (local_4c < (int)((6 - (uint)(iVar2 != 0)) + local_50)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
      iVar8 = local_50;
    }
    local_50 = (6 - (uint)(iVar8 != 0)) + iVar8;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar8);
    }
    iVar2 = local_50;
    _Src = local_58;
    lVar6 = (longlong)iVar8 - (ulonglong)(iVar8 != 0);
    *(undefined8 *)(local_58 + lVar6) = 0x7800650075002e;
    local_58[lVar6 + 4] = 0x70;
    local_58[lVar6 + 5] = 0;
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    uVar4 = FPlatformFileManager::Get();
    plVar5 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar4);
    puVar7 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar7 = _Src;
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x100))(plVar5,puVar7);
    uVar4 = (**(code **)(*plVar5 + 0x10))
                      (plVar5,param_2 - *(longlong *)(param_1 + 0x108),param_3,0,param_4,0);
    FUN_1416f8100(param_1);
    puVar3 = *(undefined8 **)(param_1 + 0x90);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    *(longlong **)(param_1 + 0x90) = plVar5;
    if (plVar1 != local_48) {
      *(int *)(param_1 + 0x178) = iVar2;
      if ((iVar2 == 0) && (*(int *)(param_1 + 0x17c) == 0)) {
        *(undefined4 *)(param_1 + 0x17c) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar1,iVar2);
        _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar2 * 2);
      }
    }
    FUN_1416f7b40(param_1);
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x90) + 8))(*(longlong **)(param_1 + 0x90),0);
    *(longlong *)(param_1 + 0x98) = lVar6;
    if (*(char *)(lVar6 + 0x71) != '\0') {
      FArchiveAsync2::TotalSize(param_1);
    }
    if (_Src != (undefined2 *)0x0) {
      FMemory::Free(_Src);
    }
    return uVar4;
  }
  QueryPerformanceCounter(&local_res8);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))
                    (*(longlong **)(param_1 + 0x90),param_2 - *(longlong *)(param_1 + 0x108),param_3
                     ,0,param_4,0);
  return uVar4;
}



// FUNCTION 1416fefd0 FUN_1416fefd0 body=587 status=ok
// SIG undefined FUN_1416fefd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416fefd0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  void *_Dst;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  int local_res8 [2];
  undefined1 local_res10 [8];
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  
  plVar1 = *(longlong **)
            (*(longlong *)(param_1 + 0x238) + -8 + (longlong)*(int *)(param_1 + 0x240) * 8);
  *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + -1;
  TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x248,local_res8,plVar1);
  uVar6 = 0;
  uVar7 = uVar6;
  if (local_res8[0] != -1) {
    uVar7 = (longlong)local_res8[0] * 0x38 + *(longlong *)(param_1 + 0x248);
  }
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(uVar7 + 8);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(uVar7 + 0x10);
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x304)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x2f8,0);
  }
  *(undefined4 *)(param_1 + 0x328) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  iVar2 = *(int *)(param_1 + 800) + 0x1f;
  _Dst = *(void **)(param_1 + 0x318);
  if (*(void **)(param_1 + 0x318) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x308);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 800) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x340)) {
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x340);
    uVar5 = uVar6;
    do {
      lVar4 = *(longlong *)(param_1 + 0x338);
      if (*(longlong *)(param_1 + 0x338) == 0) {
        lVar4 = param_1 + 0x330;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x340) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  _DAT_1464b47c8 = _DAT_1464b47c8 - *(longlong *)(uVar7 + 0x10);
  FUN_1416ec420(&PTR_StartProfileThreadUsage_1464b4680,0);
  uVar5 = uVar6;
  if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x2a2) != '\0') {
    uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x50) + 0x318);
  }
  if (*(char *)((longlong)plVar1 + 0x71) == '\0') {
    (**(code **)(*plVar1 + 8))(plVar1,0);
  }
  FUN_141702230(uVar5,*(undefined8 *)(param_1 + 0x2e8),*(undefined8 *)(param_1 + 0x2f0),0);
  iVar2 = *(int *)(uVar7 + 0x18);
  local_res8[0] = iVar2;
  if (iVar2 <= *(int *)(uVar7 + 0x1c)) {
    do {
      local_res8[0] = iVar2;
      TSet<TTuple<int,UHomeItem_*>,TDefaultMapHashableKeyFuncs<int,UHomeItem_*,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x298,iVar2);
      FUN_14044be50(param_1 + 0x2f8,local_res10,local_res8,0);
      iVar2 = iVar2 + 1;
      local_res8[0] = iVar2;
    } while (iVar2 <= *(int *)(uVar7 + 0x1c));
  }
  piVar8 = *(int **)(uVar7 + 0x20);
  uVar5 = (longlong)*(int *)(uVar7 + 0x28) & 0x3fffffffffffffff;
  if (piVar8 + *(int *)(uVar7 + 0x28) < piVar8) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      local_40 = *piVar8 + 1;
      local_3c = 2;
      local_48 = param_1;
      FUN_1417082b0(&DAT_1464b4630,&local_48);
      uVar6 = uVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar6 != uVar5);
  }
  TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x248,plVar1);
                    /* WARNING: Could not recover jumptable at 0x0001416ff218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar1)(plVar1,1);
  return;
}



// FUNCTION 1416ff220 FUN_1416ff220 body=1228 status=ok
// SIG undefined FUN_1416ff220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1416ff220(longlong *param_1,longlong *param_2,longlong param_3,char param_4,char param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_2d8 [32];
  char local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  undefined8 *local_2a0;
  uint local_298;
  uint local_294;
  ulonglong local_290;
  longlong *local_288;
  undefined8 local_280;
  longlong local_278;
  longlong *local_270;
  longlong *local_268;
  undefined **local_258 [5];
  byte local_22f;
  byte local_22e;
  undefined1 *local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8;
  undefined1 local_1a8 [256];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  int local_7c;
  undefined1 local_78 [32];
  ulonglong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  puVar11 = (undefined8 *)0x0;
  *param_1 = 0;
  if (((int)param_3 != 0) || ((int)((ulonglong)param_3 >> 0x20) != 0)) {
    plVar8 = (longlong *)param_2[1];
    plVar13 = (longlong *)*param_2;
    if ((longlong)plVar8 - (longlong)plVar13 >> 3 != 0) {
      local_a0._0_4_ = 0;
      iVar15 = 0;
      local_a8 = (undefined1 *)0x0;
      local_a0 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0xffffffff;
      local_7c = 0;
      local_58 = 0;
      local_50 = 0;
      local_2a0 = (undefined8 *)0x0;
      local_294 = 0;
      puVar16 = puVar11;
      puVar17 = puVar11;
      local_2b8 = param_4;
      local_2b0 = plVar13;
      local_2a8 = plVar8;
      local_278 = param_3;
      local_270 = param_1;
      local_268 = param_2;
      if (plVar13 != plVar8) {
        do {
          plVar1 = (longlong *)*plVar13;
          if (plVar1 != (longlong *)0x0) {
            local_2b0 = plVar13;
            FArchive::FArchive(local_258);
            local_22e = local_22e | 8;
            local_1c8 = local_1a8;
            local_258[0] = &PTR_FUN_144cfddd8;
            local_1b8 = 0;
            local_1c0 = plVar1;
            FArchive::SetIsPersistent(local_258,0);
            local_22f = local_22f & 0xdf;
            (**(code **)(*plVar1 + 0xa8))(plVar1);
            FArchive::~FArchive(local_258);
            plVar8 = local_2a8;
            if (param_5 != '\0') {
              local_288 = (longlong *)0x0;
              local_280 = 0;
              FUN_141755650(plVar1,&local_288);
              uVar18 = 0;
              uVar12 = (ulonglong)
                       ((longlong)(local_288 + (int)local_280) + (7 - (longlong)local_288)) >> 3;
              if (local_288 + (int)local_280 < local_288) {
                uVar12 = uVar18;
              }
              plVar8 = local_288;
              local_290 = uVar12;
              if (uVar12 != 0) {
                do {
                  lVar6 = 0;
                  lVar2 = *plVar8;
                  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 6 & 1) == 0)) {
                    uVar4 = *(uint *)(lVar2 + 0xc);
                    if ((int)uVar4 < (int)DAT_1469e91c4) {
                      uVar10 = uVar4 & 0xffff;
                      if ((int)uVar4 < 0) {
                        uVar4 = uVar4 + 0xffff;
                        uVar10 = uVar10 - 0x10000;
                      }
                      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                              (longlong)(int)uVar10 * 0x18;
                      uVar12 = local_290;
                    }
                    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
                      uVar7 = GetTransientPackage();
                      cVar3 = UObjectBaseUtility::IsIn(lVar2,uVar7);
                      uVar12 = local_290;
                      if (cVar3 == '\0') {
                        FUN_1416e2370(lVar2,local_1a8);
                        iVar15 = (int)puVar16;
                        local_298 = iVar15 + 1;
                        if ((int)puVar17 < (int)local_298) {
                          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                    (&local_2a0,puVar16);
                          puVar17 = (undefined8 *)(ulonglong)local_294;
                          puVar11 = local_2a0;
                        }
                        puVar16 = (undefined8 *)(ulonglong)local_298;
                        puVar11[iVar15] = lVar2;
                        uVar12 = local_290;
                      }
                    }
                  }
                  plVar8 = plVar8 + 1;
                  uVar18 = uVar18 + 1;
                  plVar13 = local_2b0;
                } while (uVar18 != uVar12);
              }
              plVar8 = local_2a8;
              if (local_288 != (longlong *)0x0) {
                FMemory::Free(local_288);
                plVar8 = local_2a8;
              }
            }
          }
          iVar15 = (int)puVar16;
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar8);
        local_2b0 = plVar13;
      }
      param_1 = local_270;
      iVar14 = 0;
      *local_270 = local_278;
      while( true ) {
        lVar6 = *local_270;
        if ((int)local_a0 == local_7c) break;
        puVar9 = local_78;
        if (local_58 != 0) {
          puVar9 = (undefined1 *)0x0;
        }
        iVar5 = *(int *)(((ulonglong)puVar9 | local_58) +
                        ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                        (longlong)local_50 - 1U) * 4);
        if (iVar5 == -1) break;
        puVar9 = local_1a8;
        if (local_a8 != (undefined1 *)0x0) {
          puVar9 = local_a8;
        }
        while (*(longlong *)(puVar9 + (longlong)iVar5 * 0x10) != lVar6) {
          iVar5 = *(int *)(puVar9 + (longlong)iVar5 * 0x10 + 8);
          if (iVar5 == -1) goto LAB_1416ff59c;
        }
        if (iVar5 == -1) break;
        if (iVar14 == 0x7fffffff) {
          local_2b0 = (longlong *)0x0;
          *local_270 = 0;
          break;
        }
        iVar5 = 0;
        if (*(int *)((longlong)local_270 + 4) != 0x7fffffff) {
          iVar5 = *(int *)((longlong)local_270 + 4) + 1;
        }
        iVar14 = iVar14 + 1;
        *(int *)((longlong)local_270 + 4) = iVar5;
      }
LAB_1416ff59c:
      if (local_2b8 != '\0') {
        plVar8 = (longlong *)local_268[1];
        for (plVar13 = (longlong *)*local_268; plVar13 != plVar8; plVar13 = plVar13 + 1) {
          uVar12 = 0;
          if ((*plVar13 != 0) && (FUN_1417081a0(), param_5 != '\0')) {
            uVar18 = (ulonglong)((longlong)(local_2a0 + iVar15) + (7 - (longlong)local_2a0)) >> 3;
            if (local_2a0 + iVar15 < local_2a0) {
              uVar18 = uVar12;
            }
            puVar11 = local_2a0;
            if (uVar18 != 0) {
              do {
                FUN_1417081a0(*puVar11);
                uVar12 = uVar12 + 1;
                puVar11 = puVar11 + 1;
              } while (uVar12 != uVar18);
            }
          }
        }
      }
      if (local_2a0 != (undefined8 *)0x0) {
        FMemory::Free(local_2a0);
      }
      local_50 = 0;
      if (local_58 != 0) {
        FMemory::Free(local_58);
      }
      FUN_141208d50(local_1a8);
    }
  }
  return param_1;
}



// FUNCTION 1416ff6f0 MarkRequestIDsAsComplete body=374 status=ok
// SIG undefined MarkRequestIDsAsComplete(void)

void FAsyncPackage::MarkRequestIDsAsComplete(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  BOOL BVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  
  lVar3 = *(longlong *)(param_1 + 0x1d8);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x288);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar8 = 0;
  piVar11 = *(int **)(param_1 + 0x148);
  uVar12 = (longlong)*(int *)(param_1 + 0x150) & 0x3fffffffffffffff;
  if (piVar11 + *(int *)(param_1 + 0x150) < piVar11) {
    uVar12 = uVar8;
  }
  if (uVar12 == 0) {
LAB_1416ff82a:
    LeaveCriticalSection(lpCriticalSection);
    *(undefined4 *)(param_1 + 0x150) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x154)) {
      TArray<float,FDefaultAllocator>::ResizeTo((undefined8 *)(param_1 + 0x148),0);
    }
    return;
  }
LAB_1416ff771:
  if (*(int *)(lVar3 + 0x240) != *(int *)(lVar3 + 0x26c)) {
    lVar9 = *(longlong *)(lVar3 + 0x278);
    if (*(longlong *)(lVar3 + 0x278) == 0) {
      lVar9 = lVar3 + 0x270;
    }
    uVar10 = (longlong)*(int *)(lVar3 + 0x280) - 1;
    iVar7 = *(int *)(lVar9 + ((longlong)*piVar11 & uVar10) * 4);
    if (iVar7 != -1) {
      lVar4 = *(longlong *)(lVar3 + 0x238);
      do {
        lVar6 = (longlong)iVar7;
        if (*(int *)(lVar4 + lVar6 * 0xc) == *piVar11) {
          uVar10 = (longlong)*(int *)(lVar4 + 8 + lVar6 * 0xc) & uVar10;
          puVar1 = (undefined4 *)(lVar9 + uVar10 * 4);
          iVar2 = *(int *)(lVar9 + uVar10 * 4);
          goto joined_r0x0001416ff7e4;
        }
        iVar7 = *(int *)(lVar4 + 4 + lVar6 * 0xc);
      } while (iVar7 != -1);
    }
  }
  goto LAB_1416ff81a;
joined_r0x0001416ff7e4:
  if (iVar2 == -1) goto LAB_1416ff80c;
  if (iVar2 == iVar7) {
    *puVar1 = *(undefined4 *)(lVar4 + lVar6 * 0xc + 4);
    goto LAB_1416ff80c;
  }
  lVar9 = (longlong)iVar2 * 3 + 1;
  iVar2 = *(int *)(lVar4 + lVar9 * 4);
  puVar1 = (undefined4 *)(lVar4 + lVar9 * 4);
  goto joined_r0x0001416ff7e4;
LAB_1416ff80c:
  TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized((longlong *)(lVar3 + 0x238),iVar7,1);
LAB_1416ff81a:
  piVar11 = piVar11 + 1;
  uVar8 = uVar8 + 1;
  if (uVar8 == uVar12) goto LAB_1416ff82a;
  goto LAB_1416ff771;
}



// FUNCTION 1416ff870 FUN_1416ff870 body=61 status=ok
// SIG undefined FUN_1416ff870(void)

void FUN_1416ff870(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1416f8770();
  if ((*param_1 != -1) || (*param_2 != -1)) {
    FUN_1416f8360(uVar1);
    *param_1 = *param_2;
    *param_2 = -1;
  }
  return;
}



// FUNCTION 1416ff8b0 NodeWillBeFiredExternally body=118 status=ok
// SIG undefined NodeWillBeFiredExternally(void)

void FAsyncPackage::NodeWillBeFiredExternally(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x4bc + (longlong)param_2 * 0x18) = 1;
    return;
  }
  if (param_3 < 0) {
    iVar1 = (param_2 - (param_3 * 2 + 2)) + *(int *)(param_1 + 0x508);
  }
  else {
    iVar1 = (param_3 + -1) * 3 + param_2 + *(int *)(param_1 + 0x50c);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x4f0) + 0x14 + (longlong)iVar1 * 0x18) = 1;
  return;
}



// FUNCTION 1416ff930 FUN_1416ff930 body=394 status=ok
// SIG undefined FUN_1416ff930(void)

void FUN_1416ff930(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  uint local_res10 [2];
  code *local_18;
  uint uStack_10;
  undefined4 uStack_c;
  
  piVar9 = (int *)0x0;
  if (param_2 == '\0') {
    iVar1 = *(int *)(param_1 + 0xc);
    piVar4 = piVar9;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar8;
      piVar4 = (int *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                      (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18);
    }
    piVar4[2] = piVar4[2] | 0x8000000;
  }
  local_res10[0] = local_res10[0] & 0xffffff00;
  uStack_c = (undefined4)((ulonglong)local_res10 >> 0x20);
  local_18 = FUN_1406ddef0;
  uStack_10 = (uint)local_res10;
  lVar5 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  FUN_1416ea3b0(*(undefined8 *)(lVar5 + 0xa0),param_1);
  if ((((DAT_1468c21ab != '\0') &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0xa0) + 0x58),
       lVar6 = UObjectBaseUtility::GetOutermost(param_1), lVar6 == lVar2)) &&
      ((byte)(*(char *)(*(longlong *)(lVar5 + 0xa0) + 0x1e0) - 2U) < 5)) &&
     ((uVar3 = *(uint *)(param_1 + 8), (uVar3 & 0x8200400) == 0 &&
      (*(longlong *)(param_1 + 0x20) != 0)))) {
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xa0) + 0x50);
    FUN_1416f53f0(local_res10,lVar5);
    local_18 = *(code **)(param_1 + 0x18);
    lVar5 = *(longlong *)(lVar5 + 800);
    _uStack_10 = CONCAT44(uStack_c,local_res10[0]);
    TSet<TTuple<TTuple<FName,FPackageIndex>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>,FDefaultSetAllocator>
    ::FindId(lVar5 + 0x348,local_res10,&local_18);
    piVar4 = piVar9;
    if (local_res10[0] != 0xffffffff) {
      piVar4 = (int *)((longlong)(int)local_res10[0] * 0x20 + *(longlong *)(lVar5 + 0x348));
    }
    piVar7 = piVar4 + 4;
    if (piVar4 == (int *)0x0) {
      piVar7 = piVar9;
    }
    if ((piVar7 != (int *)0x0) && (0 < *piVar7)) {
      *(uint *)(param_1 + 8) = uVar3 | 0x8000000;
    }
  }
  return;
}



// FUNCTION 1416ffac0 FUN_1416ffac0 body=21 status=ok
// SIG undefined FUN_1416ffac0(void)

void FUN_1416ffac0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1416f9640();
  FUN_1416ffae0(uVar1);
  return;
}



// FUNCTION 1416ffae0 FUN_1416ffae0 body=1052 status=ok
// SIG undefined FUN_1416ffae0(void)

void FUN_1416ffae0(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  BOOL BVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined2 *puVar15;
  undefined2 *in_stack_ffffffffffffff48;
  undefined4 uVar16;
  int local_98;
  uint uStack_94;
  uint *puStack_90;
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
  longlong local_50 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  FEDLBootNotificationManager::FireCompletedCompiledInImports(param_1,1);
  FUN_1416f7d70(0xffffffff);
  lVar7 = FUN_1416f86a0();
  if ((*(longlong *)(lVar7 + 8) == 0) && (pcVar8 = (char *)FUN_1416f8f70(), *pcVar8 != '\0')) {
    DAT_1469e689c = 1;
    in_stack_ffffffffffffff48 = (undefined2 *)0xffffffffffffffff;
    uVar9 = FUN_1415d42a0(lVar7,L"FAsyncLoadingThread",0,0,0xffffffffffffffff);
    *(undefined8 *)(lVar7 + 8) = uVar9;
  }
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  }
  uVar2 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar3 = *puVar14;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar11 = local_98 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar11;
      if (bVar5) goto LAB_1416ffc1c;
      uVar3 = puVar14[lVar7 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar11 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_84 = (iStack_80 - iVar11) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1416ffc1c:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_38 = CONCAT44(uStack_94,local_98);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  uVar13 = uVar3 & 0xffffffe0;
  local_40._0_4_ = SUB84(param_1,0);
  local_40._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  local_78 = (undefined4)local_40;
  uStack_74 = local_40._4_4_;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  puStack_90 = puVar1;
  uStack_84 = uVar3;
  local_68 = puVar1;
  local_40 = param_1;
  puStack_30 = puVar1;
  uStack_20 = local_58;
  uStack_28 = uStack_60;
  uStack_24 = uStack_5c;
  if (uVar3 != uVar2) {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = puVar14[(int)uVar3 >> 5] & local_88;
    iVar11 = (int)uVar3 >> 5;
    while (uVar12 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_1416ffce2;
      uVar12 = puVar14[(longlong)iVar11 + 1];
      local_88 = 0xffffffff;
      iVar11 = iVar11 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar11 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_84 = (uVar13 - iVar11) + 0x1f;
    uVar3 = uStack_84;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1416ffce2:
      uStack_84 = uVar2;
      uVar3 = uVar2;
    }
  }
  while( true ) {
    uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
    if (((uStack_5c == uVar3) && (local_68 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_74,local_78) == param_1)) break;
    lVar4 = *(longlong *)CONCAT44(uStack_74,local_78);
    lVar7 = lVar4 + (longlong)(int)uStack_5c * 0x28;
    if (((*(int *)(lVar4 + 0xc + (longlong)(int)uStack_5c * 0x28) != 2) &&
        (*(char *)(lVar7 + 0x18) == '\0')) && (DAT_1468c21ab != '\0')) {
      puVar10 = (undefined8 *)FName::ToString(lVar7,local_50);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar10;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x33a,L"%s (%d) was not complete (%d) after registration was complete.",
                 puVar15,CONCAT44(uVar16,*(undefined4 *)(lVar7 + 8)),*(undefined4 *)(lVar7 + 0xc));
      if (local_50[0] != 0) {
        FMemory::Free();
      }
      puVar10 = (undefined8 *)FName::ToString(lVar7,&local_98);
      if (*(int *)(puVar10 + 1) == 0) {
        in_stack_ffffffffffffff48 = &DAT_143f3eda8;
      }
      else {
        in_stack_ffffffffffffff48 = (undefined2 *)*puVar10;
      }
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x33a,
                 L"%s (%d) was not complete (%d) after registration was complete.",
                 in_stack_ffffffffffffff48,*(undefined4 *)(lVar7 + 8),*(undefined4 *)(lVar7 + 0xc));
      if (CONCAT44(uStack_94,local_98) != 0) {
        FMemory::Free();
      }
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
    LowLevelFatalErrorHandler
              ("Unknown",0x342,L"Initial load is complete, but we still have %d waiting packages.");
    uVar9 = CONCAT44(uVar16,(int)param_1[0xb] - *(int *)((longlong)param_1 + 0x84));
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x342,
               L"Initial load is complete, but we still have %d waiting packages.",uVar9);
    uVar16 = (undefined4)((ulonglong)uVar9 >> 0x20);
  }
  if ((DAT_1468c21ab != '\0') && ((int)param_1[0x15] != 0)) {
    LowLevelFatalErrorHandler
              ("Unknown",0x34a,
               L"Initial load is complete, but we still have %d imports to fire (listed above).");
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x34a,
               L"Initial load is complete, but we still have %d imports to fire (listed above).",
               CONCAT44(uVar16,(int)param_1[0x15]));
  }
  TSet<TTuple<FName,FEDLBootObjectState>,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>,FDefaultSetAllocator>
  ::Empty(param_1,0);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (*(int *)((longlong)param_1 + 0xac) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x14,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416ffef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  return;
}



// FUNCTION 1416fff00 NotifyRegistrationEvent body=98 status=ok
// SIG undefined NotifyRegistrationEvent(void)

void NotifyRegistrationEvent
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1416f9640();
  FUN_1416fff70(uVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 1416fff70 FUN_1416fff70 body=1600 status=ok
// SIG undefined FUN_1416fff70(void)

void FUN_1416fff70(longlong *param_1,short *param_2,longlong param_3,int param_4,int param_5,
                  ulonglong param_6,undefined1 param_7)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar18;
  undefined8 uVar17;
  undefined4 uVar19;
  undefined1 local_68 [8];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined1 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  if (DAT_1464aaa49 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469e6f50) &&
       (_Init_thread_header(&DAT_1469e6f50), DAT_1469e6f50 == -1)) {
      FName::FName(&DAT_1469e6f48,L"/Script/CoreUObject",1);
      _Init_thread_footer(&DAT_1469e6f50);
    }
    FName::FName(&local_58,param_2,1);
    if (local_58 != DAT_1469e6f48) {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
      if (BVar2 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
      }
      plVar4 = (longlong *)0x0;
      local_50 = (longlong *)0x0;
      local_48 = (ulonglong)(uint)local_48;
      uVar7 = 0xffffffffffffffff;
      local_38 = plVar4;
      plVar15 = plVar4;
      if ((param_2 != (short *)0x0) &&
         (plVar4 = (longlong *)0x0, local_38 = (longlong *)0x0, uVar9 = uVar7,
         plVar15 = (longlong *)0x0, *param_2 != 0)) {
        do {
          uVar9 = uVar9 + 1;
        } while (param_2[uVar9] != 0);
        uVar8 = (int)uVar9 + 1;
        local_48 = (ulonglong)uVar8;
        uVar1 = uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50);
          uVar1 = (uint)local_48;
        }
        plVar15 = (longlong *)(ulonglong)uVar1;
        FGenericPlatformString::Memcpy(local_50,param_2,(longlong)(int)uVar8 * 2);
        plVar4 = (longlong *)(local_48 >> 0x20);
        local_38 = local_50;
      }
      do {
        uVar9 = uVar7;
        uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
        lVar10 = 0;
        uVar7 = uVar9 + 1;
      } while (*(short *)(param_3 + uVar7 * 2) != 0);
      iVar14 = (int)plVar15;
      if ((iVar14 != 0) || (iVar3 = 2, (int)uVar9 == -2)) {
        iVar3 = 1;
      }
      local_30 = (undefined8 *)CONCAT44((int)plVar4,iVar14);
      if ((int)plVar4 < iVar14 + iVar3 + (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
      }
      FString::PathAppend(&local_38,param_3,uVar7 & 0xffffffff);
      puVar13 = &DAT_143f3eda8;
      plVar4 = (longlong *)&DAT_143f3eda8;
      if ((int)local_30 != 0) {
        plVar4 = local_38;
      }
      FName::FName(&local_60,plVar4,1);
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = param_1 + 7;
        }
        iVar14 = *(int *)((longlong)plVar4 +
                         ((longlong)((int)((ulonglong)local_58 >> 0x20) + (int)local_58) &
                         (longlong)(int)param_1[9] - 1U) * 4);
        if (iVar14 != -1) {
          do {
            lVar6 = *param_1 + (longlong)iVar14 * 0x28;
            if (*(longlong *)(*param_1 + (longlong)iVar14 * 0x28) == local_58) {
              if (iVar14 != -1) goto LAB_141700183;
              break;
            }
            iVar14 = *(int *)(lVar6 + 0x20);
          } while (iVar14 != -1);
        }
      }
      lVar6 = lVar10;
LAB_141700183:
      lVar16 = lVar6 + 8;
      if (lVar6 == 0) {
        lVar16 = lVar10;
      }
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = param_1 + 7;
        }
        iVar14 = *(int *)((longlong)plVar4 +
                         ((longlong)((int)((ulonglong)local_60 >> 0x20) + (int)local_60) &
                         (longlong)(int)param_1[9] - 1U) * 4);
        if (iVar14 != -1) {
          do {
            lVar6 = *param_1 + (longlong)iVar14 * 0x28;
            if (*(longlong *)(*param_1 + (longlong)iVar14 * 0x28) == local_60) {
              if (iVar14 != -1) goto LAB_1417001f3;
              break;
            }
            iVar14 = *(int *)(lVar6 + 0x20);
          } while (iVar14 != -1);
        }
      }
      lVar6 = lVar10;
LAB_1417001f3:
      piVar11 = (int *)(lVar6 + 8);
      if (lVar6 == 0) {
        piVar11 = (int *)0x0;
      }
      if (piVar11 == (int *)0x0) {
        if (param_5 != 0) {
          puVar5 = (undefined8 *)FName::ToString(&local_60,&local_38);
          if (*(int *)(puVar5 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar5;
          }
          LowLevelFatalErrorHandler
                    ("Unknown",0x2ff,L"Attempt to process %s before it has been added.",puVar12);
          if (local_38 != (longlong *)0x0) {
            FMemory::Free();
          }
          puVar5 = (undefined8 *)FName::ToString(&local_60,&local_38);
          if (*(int *)(puVar5 + 1) != 0) {
            puVar13 = (undefined2 *)*puVar5;
          }
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x2ff,
                     L"Attempt to process %s before it has been added.",puVar13);
          if (local_38 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        local_48 = param_6;
        local_40 = param_7;
        local_38 = &local_60;
        local_30 = &local_50;
        local_50 = (longlong *)CONCAT44(param_5,param_4);
        FUN_1416e1920(param_1,local_68,&local_38,0);
        if (lVar16 == 0) {
          local_38 = &local_58;
          local_50 = (longlong *)CONCAT44(local_50._4_4_,4);
          local_30 = &local_50;
          FUN_1416e1920(param_1,local_68,&local_38,0);
        }
      }
      else {
        if ((piVar11[1] + 1 != param_5) && (DAT_1468c21ab != '\0')) {
          puVar5 = (undefined8 *)FName::ToString(&local_60,&local_38);
          if (*(int *)(puVar5 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar5;
          }
          uVar17 = CONCAT44(uVar18,param_5);
          LowLevelFatalErrorHandler
                    ("Unknown",0x312,
                     L"Invalid state transition %d %d with %s when it has already been processed.",
                     piVar11[1],uVar17,puVar12);
          uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
          uVar19 = (undefined4)((ulonglong)puVar12 >> 0x20);
          if (local_38 != (longlong *)0x0) {
            FMemory::Free();
          }
          puVar5 = (undefined8 *)FName::ToString(&local_60,&local_38);
          if (*(int *)(puVar5 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar5;
          }
          uVar17 = CONCAT44(uVar18,piVar11[1]);
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x312,
                     L"Invalid state transition %d %d with %s when it has already been processed.",
                     uVar17,CONCAT44(uVar19,param_5),puVar12);
          uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
          if (local_38 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        if ((*piVar11 != param_4) && (DAT_1468c21ab != '\0')) {
          puVar5 = (undefined8 *)FName::ToString(&local_60,&local_38);
          if (*(int *)(puVar5 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar5;
          }
          uVar17 = CONCAT44(uVar18,param_4);
          LowLevelFatalErrorHandler
                    ("Unknown",0x316,
                     L"Multiple types %d %d with %s when it has already been processed.",*piVar11,
                     uVar17,puVar12);
          uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
          uVar19 = (undefined4)((ulonglong)puVar12 >> 0x20);
          if (local_38 != (longlong *)0x0) {
            FMemory::Free();
          }
          puVar5 = (undefined8 *)FName::ToString(&local_60,&local_38);
          if (*(int *)(puVar5 + 1) != 0) {
            puVar13 = (undefined2 *)*puVar5;
          }
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x316,
                     L"Multiple types %d %d with %s when it has already been processed.",
                     CONCAT44(uVar18,*piVar11),CONCAT44(uVar19,param_4),puVar13);
          if (local_38 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        piVar11[1] = param_5;
        if (param_5 == 2) {
          piVar11[2] = 0;
          piVar11[3] = 0;
          iVar14 = (int)param_1[0x15];
          *(int *)(param_1 + 0x15) = iVar14 + 1;
          if (*(int *)((longlong)param_1 + 0xac) < iVar14 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x14,iVar14)
            ;
          }
          *(longlong *)(param_1[0x14] + (longlong)iVar14 * 8) = local_60;
        }
        if (((lVar16 != 0) && (*(int *)(lVar16 + 4) < param_5)) &&
           (*(int *)(lVar16 + 4) = param_5, param_5 == 2)) {
          iVar14 = (int)param_1[0x15];
          *(int *)(param_1 + 0x15) = iVar14 + 1;
          if (*(int *)((longlong)param_1 + 0xac) < iVar14 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x14,iVar14)
            ;
          }
          *(longlong *)(param_1[0x14] + (longlong)iVar14 * 8) = local_58;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
    }
  }
  return;
}



// FUNCTION 1417005b0 FUN_1417005b0 body=313 status=ok
// SIG undefined FUN_1417005b0(void)

undefined8 * FUN_1417005b0(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  wchar_t *_Dest;
  short *psVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  uint uVar10;
  
  psVar1 = (short *)*param_2;
  iVar7 = *(int *)(param_2 + 1);
  for (psVar9 = psVar1; psVar2 = psVar1, psVar9 != psVar1 + iVar7; psVar9 = psVar9 + 1) {
    if (*psVar9 == 0x3a) {
      iVar3 = (int)((longlong)psVar9 - (longlong)psVar1 >> 1);
      if (iVar3 != -1) goto LAB_14170064a;
      break;
    }
  }
  do {
    if (psVar2 == psVar1 + iVar7) {
LAB_141700607:
      FString::FString(param_1);
      return param_1;
    }
    if (*psVar2 == 0x2e) {
      iVar3 = (int)((longlong)psVar2 - (longlong)psVar1 >> 1);
      if (iVar3 != -1) {
LAB_14170064a:
        uVar10 = iVar7 - 1;
        if (iVar7 == 0) {
          uVar10 = 0xffffffff;
        }
        uVar4 = iVar3 + 0x80000000;
        uVar8 = 0;
        if (iVar7 == 0) {
          uVar10 = uVar8;
        }
        if (iVar3 + 1U < uVar10) {
          uVar10 = iVar3 + 1U;
        }
        uVar5 = iVar7 - 1;
        if (iVar7 == 0) {
          uVar5 = uVar8;
        }
        uVar6 = uVar10;
        if ((uVar10 <= uVar4) && (uVar6 = uVar5, uVar4 < uVar5)) {
          uVar6 = uVar4;
        }
        *param_1 = 0;
        psVar9 = &DAT_143f3eda8;
        if (iVar7 != 0) {
          psVar9 = psVar1;
        }
        iVar7 = uVar6 - uVar10;
        uVar4 = iVar7 + 1;
        if (iVar7 == 0) {
          uVar4 = uVar8;
        }
        *(uint *)(param_1 + 1) = uVar4;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        if ((0 < (int)uVar4) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0), 0 < *(int *)(param_1 + 1))) {
          _Dest = (wchar_t *)*param_1;
          wcsncpy(_Dest,psVar9 + (int)uVar10,(longlong)iVar7);
          _Dest[iVar7] = L'\0';
        }
        return param_1;
      }
      goto LAB_141700607;
    }
    psVar2 = psVar2 + 1;
  } while( true );
}



// FUNCTION 1417006f0 FUN_1417006f0 body=275 status=ok
// SIG undefined FUN_1417006f0(void)

/* WARNING: Removing unreachable block (ram,0x000141700780) */

undefined8 * FUN_1417006f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  uint uVar3;
  uint uVar4;
  wchar_t *pwVar5;
  
  pwVar2 = (wchar_t *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  pwVar5 = pwVar2;
  do {
    if (pwVar5 == pwVar2 + iVar1) {
LAB_14170071f:
      FString::FString(param_1);
      return param_1;
    }
    if (*pwVar5 == L'.') {
      uVar3 = (uint)((longlong)pwVar5 - (longlong)pwVar2 >> 1);
      if (uVar3 != 0xffffffff) {
        uVar4 = iVar1 - 1;
        if (iVar1 == 0) {
          uVar4 = 0;
        }
        if (uVar3 < uVar4) {
          uVar4 = uVar3;
        }
        *param_1 = 0;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        pwVar5 = L"";
        if (iVar1 != 0) {
          pwVar5 = pwVar2;
        }
        uVar3 = uVar4 + 1;
        if (uVar4 == 0) {
          uVar3 = 0;
        }
        *(uint *)(param_1 + 1) = uVar3;
        if ((0 < (int)uVar3) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0), 0 < *(int *)(param_1 + 1))) {
          pwVar2 = (wchar_t *)*param_1;
          wcsncpy(pwVar2,pwVar5,(longlong)(int)uVar4);
          pwVar2[(int)uVar4] = L'\0';
        }
        return param_1;
      }
      goto LAB_14170071f;
    }
    pwVar5 = pwVar5 + 1;
  } while( true );
}



// FUNCTION 141700810 FUN_141700810 body=390 status=ok
// SIG undefined FUN_141700810(void)

undefined8 FUN_141700810(undefined8 param_1,undefined8 param_2,wchar_t **param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *local_28;
  undefined8 local_20;
  
  local_20 = 2;
  pwVar5 = (wchar_t *)0x0;
  local_28 = (wchar_t *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  pwVar6 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144cf0aec,4);
  cVar1 = FUN_1404e14f0(param_1,&local_28,param_2,param_3,0,0);
  if (pwVar6 != (wchar_t *)0x0) {
    FMemory::Free(pwVar6);
  }
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if ((param_3 != (wchar_t **)0x0) &&
       (cVar1 = FString::EndsWith(param_3,&DAT_144cf0afc,0), cVar1 != '\0')) {
      if (*(int *)(param_3 + 1) == 0) {
        pwVar6 = L"";
        iVar2 = 0;
      }
      else {
        pwVar6 = *param_3;
        iVar2 = *(int *)(param_3 + 1) + -1;
      }
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      local_28 = (wchar_t *)0x0;
      uVar4 = iVar2 + 1;
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      local_20 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        pwVar5 = local_28;
        uVar4 = (uint)local_20;
        if (0 < (int)(uint)local_20) {
          wcsncpy(local_28,pwVar6,(longlong)iVar2);
          pwVar5[iVar2] = L'\0';
        }
      }
      if (param_3 != &local_28) {
        if (*param_3 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *param_3 = pwVar5;
        *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
        *(uint *)(param_3 + 1) = uVar4;
        return 1;
      }
      if (pwVar5 != (wchar_t *)0x0) {
        FMemory::Free(pwVar5);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1417009a0 FUN_1417009a0 body=85 status=ok
// SIG undefined FUN_1417009a0(void)

void FUN_1417009a0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if ((param_1[10] == 0) && (*(int *)(param_1 + 8) != 0)) {
    uVar1 = 0;
    plVar2 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar2 = param_1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      if (plVar2 != (longlong *)0x0) {
        uVar1 = (**(code **)(*plVar2 + 8))();
      }
                    /* WARNING: Could not recover jumptable at 0x0001417009ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_1)(uVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 141700a00 PopProperty body=35 status=ok
// SIG undefined PopProperty(void)

void FSerializedPropertyScope::PopProperty(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141700a1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x158))
              ((longlong *)*param_1,lVar1,*(ulonglong *)(lVar1 + 0x38) >> 0x23 & 0xffffffffffffff01)
    ;
    return;
  }
  return;
}



// FUNCTION 141700a30 PopulateFlushTree body=225 status=ok
// SIG undefined PopulateFlushTree(void)

void FAsyncPackage::PopulateFlushTree(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0x3c)) {
    lVar3 = *(longlong *)(param_2 + 0x48);
    if (*(longlong *)(param_2 + 0x48) == 0) {
      lVar3 = param_2 + 0x40;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_2 + 0x50) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 8) + (longlong)iVar2 * 0x10) == lVar1) {
          if (iVar2 != -1) {
            return;
          }
          break;
        }
        iVar2 = *(int *)(*(longlong *)(param_2 + 8) + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  FUN_140800100(param_2 + 8,local_res8,param_1 + 0x18,0);
  puVar6 = *(undefined8 **)(param_1 + 0x70);
  uVar5 = (longlong)*(int *)(param_1 + 0x78) & 0x1fffffffffffffff;
  if (puVar6 + *(int *)(param_1 + 0x78) < puVar6) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    do {
      PopulateFlushTree(*puVar6,param_2);
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 != uVar5);
  }
  return;
}



// FUNCTION 141700b20 FUN_141700b20 body=3447 status=ok
// SIG undefined FUN_141700b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141700b20(longlong param_1,double param_2,char param_3,float *param_4)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  DWORD DVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  bool bVar25;
  double dVar26;
  float fVar27;
  double dVar28;
  undefined1 local_177;
  undefined1 local_176;
  undefined1 local_175;
  undefined1 local_174;
  longlong *local_170;
  undefined8 local_168;
  longlong *local_160;
  undefined8 local_158;
  longlong local_150;
  LARGE_INTEGER local_148;
  longlong *local_140;
  undefined8 local_138;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128;
  LARGE_INTEGER local_120;
  LARGE_INTEGER local_118;
  undefined8 local_110;
  code *local_108;
  undefined1 *puStack_100;
  code *local_f8;
  undefined1 *puStack_f0;
  code *local_e8;
  undefined1 *puStack_e0;
  code *local_d8;
  undefined1 *puStack_d0;
  code *local_c8;
  undefined1 *puStack_c0;
  code *local_b8;
  undefined1 *puStack_b0;
  longlong local_a8 [2];
  longlong local_98 [12];
  
  puStack_100 = &local_177;
  local_108 = FUN_1406ddef0;
  local_d8 = FUN_1406ddef0;
  local_177 = 0;
  puStack_d0 = puStack_100;
  lVar11 = FUN_1415d8310(&local_d8,&DAT_14622e6dc);
  local_110 = *(undefined8 *)(lVar11 + 0xa0);
  *(longlong *)(lVar11 + 0xa0) = param_1;
  local_174 = *(undefined1 *)(lVar11 + 0x58);
  *(undefined1 *)(lVar11 + 0x58) = 1;
  local_150 = lVar11;
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    bVar6 = false;
    if (DVar8 == DAT_1468c21c0) goto LAB_141700bfd;
  }
  else {
LAB_141700bfd:
    bVar6 = true;
  }
  if (bVar6) {
    lVar12 = FUN_1416f86a0();
    *(int *)(lVar12 + 0x2d8) = *(int *)(lVar12 + 0x2d8) + 1;
  }
  puVar22 = (undefined8 *)(lVar11 + 0x38);
  local_170 = (longlong *)0x0;
  local_168 = 0;
  plVar18 = (longlong *)0x0;
  if (*(int *)(param_1 + 0xb8) < *(int *)(param_1 + 0x100)) {
    do {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x74);
      LOCK();
      bVar25 = *piVar1 == 0;
      if (bVar25) {
        *piVar1 = 0;
      }
      UNLOCK();
      plVar18 = local_170;
      if (!bVar25) break;
      fVar27 = *param_4;
      if (param_3 != '\0') {
        QueryPerformanceCounter(&local_148);
        dVar26 = (double)fVar27;
        _DAT_1464b48b8 = (double)local_148.QuadPart * DAT_1468b02f8 + 16777216.0;
        dVar28 = _DAT_1464b48b8 - param_2;
        if ((((dVar26 < dVar28) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != param_2)) &&
           (((double)DAT_1464b441c < dVar28 && ((double)(fVar27 * DAT_1464b4418) < dVar28)))) {
          DAT_1464b48b0 = param_2;
        }
        plVar18 = local_170;
        if (dVar26 < dVar28) break;
      }
      cVar7 = IsGarbageCollectionWaiting();
      plVar18 = local_170;
      if (cVar7 != '\0') break;
      iVar9 = *(int *)(param_1 + 0xb8);
      local_176 = 0;
      *(int *)(param_1 + 0xb8) = iVar9 + 1;
      local_140 = (longlong *)(param_1 + 0xf8);
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar9 * 8);
      *(wchar_t **)(param_1 + 0xe0) = L"postloading_gamethread";
      puStack_f0 = &local_176;
      local_f8 = FUN_1406ddef0;
      local_c8 = FUN_1406ddef0;
      *(undefined8 *)(param_1 + 0xd8) = uVar3;
      local_138 = uVar3;
      puStack_c0 = puStack_f0;
      lVar11 = FUN_1415d8310(&local_c8,&DAT_14622e6dc);
      uVar4 = *(undefined8 *)(lVar11 + 0x70);
      *(undefined8 *)(lVar11 + 0x70) = uVar3;
      FUN_1417510e0(uVar3);
      puStack_e0 = &local_175;
      local_e8 = FUN_1406ddef0;
      local_b8 = FUN_1406ddef0;
      local_175 = 0;
      puStack_b0 = puStack_e0;
      lVar11 = FUN_1415d8310(&local_b8,&DAT_14622e6dc);
      *(undefined8 *)(lVar11 + 0x70) = uVar4;
      iVar9 = *(int *)(puVar22 + 1);
      plVar18 = local_170;
      plVar17 = local_140;
      if (iVar9 != 0) {
        iVar21 = local_168._4_4_;
        iVar19 = (int)local_168;
        if (local_168._4_4_ < (int)local_168 + iVar9) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_170);
          iVar21 = local_168._4_4_;
          iVar19 = (int)local_168;
        }
        plVar18 = local_170;
        _guard_xfg_dispatch_icall_nop(local_170 + iVar19,(void *)*puVar22,(longlong)iVar9 << 3);
        iVar19 = iVar19 + iVar9;
        local_168 = CONCAT44(local_168._4_4_,iVar19);
        *(undefined4 *)(puVar22 + 1) = 0;
        plVar17 = local_140;
        plVar14 = local_140;
        if (0x7fffffff < *(uint *)((longlong)puVar22 + 0xc)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(puVar22,0);
          plVar17 = local_140;
          plVar14 = local_140;
        }
        while (local_140 = plVar14, plVar14 = local_140, iVar19 != 0) {
          uVar23 = 0;
          iVar9 = (int)local_140[1];
          piVar1 = (int *)((longlong)local_140 + 0xc);
          local_140 = plVar17;
          if (*piVar1 < iVar19 + iVar9) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(plVar14);
            iVar9 = (int)plVar14[1];
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar14 + (longlong)iVar9 * 8),plVar18,(longlong)iVar19 << 3);
          *(int *)(plVar14 + 1) = (int)plVar14[1] + iVar19;
          uVar24 = (ulonglong)((longlong)(plVar18 + iVar19) + (7 - (longlong)plVar18)) >> 3;
          if (plVar18 + iVar19 < plVar18) {
            uVar24 = 0;
          }
          plVar17 = plVar18;
          if (uVar24 != 0) {
            do {
              lVar11 = *plVar17;
              if ((lVar11 != 0) && (lVar12 = FUN_1417a53c0(lVar11), lVar12 != 0)) {
                lVar12 = FUN_1417a53c0(lVar11);
                FUN_141740c00(lVar12 + 0x200,lVar11);
              }
              plVar17 = plVar17 + 1;
              uVar23 = uVar23 + 1;
            } while (uVar23 != uVar24);
          }
          local_168 = local_168 & 0xffffffff00000000;
          iVar19 = 0;
          if ((iVar21 < 0) && (iVar19 = 0, iVar21 != 0)) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(&local_170,0);
            plVar18 = local_170;
            iVar21 = local_168._4_4_;
            iVar19 = (int)local_168;
          }
          lVar11 = local_150;
          puVar22 = (undefined8 *)(local_150 + 0x38);
          iVar9 = *(int *)(local_150 + 0x40);
          if (iVar9 != 0) {
            if (iVar21 < iVar19 + iVar9) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(&local_170);
              plVar18 = local_170;
              iVar21 = local_168._4_4_;
              iVar19 = (int)local_168;
            }
            _guard_xfg_dispatch_icall_nop(plVar18 + iVar19,(void *)*puVar22,(longlong)iVar9 << 3);
            iVar19 = iVar19 + iVar9;
            local_168 = CONCAT44(local_168._4_4_,iVar19);
          }
          *(undefined4 *)(lVar11 + 0x40) = 0;
          plVar17 = local_140;
          if (0x7fffffff < *(uint *)(lVar11 + 0x44)) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(puVar22,0);
            plVar17 = local_140;
          }
        }
      }
      local_140 = plVar17;
      fVar27 = 0.0;
      iVar9 = *(int *)(param_1 + 0x100);
      *(undefined8 *)(param_1 + 0xd8) = local_138;
      lVar11 = *(longlong *)(param_1 + 0x50);
      if (lVar11 == 0) {
        if (0 < iVar9) {
          fVar27 = (float)*(int *)(param_1 + 0xb8);
          iVar19 = iVar9;
          goto LAB_141701004;
        }
      }
      else {
        iVar19 = *(int *)(lVar11 + 0x10);
        iVar21 = iVar19;
        if (iVar19 <= iVar9) {
          iVar21 = iVar9;
        }
        fVar27 = (float)(*(int *)(param_1 + 0xa4) + *(int *)(param_1 + 0x9c) +
                        *(int *)(param_1 + 0xb8)) * 100.0;
        iVar19 = iVar19 + *(int *)(lVar11 + 0x20) + iVar21;
LAB_141701004:
        fVar27 = fVar27 / (float)iVar19;
      }
      fVar5 = *(float *)(param_1 + 0xf0);
      if (*(float *)(param_1 + 0xf0) <= fVar27) {
        fVar5 = fVar27;
      }
      *(float *)(param_1 + 0xf0) = fVar5;
    } while (*(int *)(param_1 + 0xb8) < iVar9);
  }
  uVar23 = 0;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0x100)) goto LAB_1417017b4;
  *(wchar_t **)(param_1 + 0xe0) = L"DeferredFinalizeObjects";
  *(undefined8 *)(param_1 + 0xd8) = 0;
  local_160 = (longlong *)0x0;
  local_158 = 0;
  if (*(int *)(param_1 + 0xbc) < *(int *)(param_1 + 0x110)) {
    do {
      if (*(int *)(param_1 + 0xb8) == (*(int *)(param_1 + 0xb8) / 100) * 100) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x74);
        LOCK();
        bVar25 = *piVar1 == 0;
        if (bVar25) {
          *piVar1 = 0;
        }
        UNLOCK();
        if (!bVar25) break;
        fVar27 = *param_4;
        if (param_3 != '\0') {
          QueryPerformanceCounter(&local_130);
          dVar26 = (double)fVar27;
          _DAT_1464b48b8 = (double)local_130.QuadPart * DAT_1468b02f8 + 16777216.0;
          dVar28 = _DAT_1464b48b8 - param_2;
          if ((((dVar26 < dVar28) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != param_2)) &&
             (((double)DAT_1464b441c < dVar28 && ((double)(fVar27 * DAT_1464b4418) < dVar28)))) {
            DAT_1464b48b0 = param_2;
          }
          if (dVar26 < dVar28) break;
        }
        cVar7 = IsGarbageCollectionWaiting();
        if (cVar7 != '\0') break;
      }
      iVar9 = *(int *)(param_1 + 0xbc);
      *(int *)(param_1 + 0xbc) = iVar9 + 1;
      plVar18 = *(longlong **)(*(longlong *)(param_1 + 0x108) + (longlong)iVar9 * 8);
      if (plVar18 != (longlong *)0x0) {
        iVar9 = *(int *)((longlong)plVar18 + 0xc);
        uVar24 = uVar23;
        if (iVar9 < (int)DAT_1469e91c4) {
          uVar16 = iVar9 >> 0x1f & 0xffff;
          uVar10 = iVar9 + uVar16;
          uVar24 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                   (longlong)(int)((uVar10 & 0xffff) - uVar16) * 0x18;
        }
        uVar10 = *(uint *)(uVar24 + 8);
        while ((uVar10 >> 0x1b & 1) != 0) {
          LOCK();
          bVar25 = uVar10 == *(uint *)(uVar24 + 8);
          if (bVar25) {
            *(uint *)(uVar24 + 8) = uVar10 & 0xf7ffffff;
          }
          UNLOCK();
          if (bVar25) break;
          uVar10 = *(uint *)(uVar24 + 8);
        }
        lVar11 = UDynamicClass::GetPrivateStaticClass();
        if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
            != lVar11 + 0x88)) {
          bVar25 = false;
        }
        else {
          bVar25 = true;
        }
        if (bVar25) {
          plVar17 = (longlong *)plVar18[0x1f];
          if (DAT_1468c21ab == '\0') {
            plVar14 = plVar17;
            if (plVar17 == (longlong *)0x0) {
              (**(code **)(*plVar18 + 0x368))(plVar18);
              plVar14 = (longlong *)plVar18[0x1f];
            }
            if ((plVar17 == plVar14) || (plVar14 == (longlong *)0x0)) goto LAB_141701542;
            iVar9 = *(int *)((longlong)plVar14 + 0xc);
            uVar24 = uVar23;
            if (iVar9 < (int)DAT_1469e91c4) {
              uVar16 = iVar9 >> 0x1f & 0xffff;
              uVar10 = iVar9 + uVar16;
              uVar24 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                       (longlong)(int)((uVar10 & 0xffff) - uVar16) * 0x18;
            }
            uVar10 = *(uint *)(uVar24 + 8);
            while (plVar18 = plVar14, (uVar10 >> 0x1b & 1) != 0) {
              LOCK();
              bVar25 = uVar10 == *(uint *)(uVar24 + 8);
              if (bVar25) {
                *(uint *)(uVar24 + 8) = uVar10 & 0xf7ffffff;
              }
              UNLOCK();
              if (bVar25) break;
              uVar10 = *(uint *)(uVar24 + 8);
            }
          }
          else {
            if (plVar17 == (longlong *)0x0) {
              puVar22 = (undefined8 *)UObjectBaseUtility::GetFullName(plVar18,local_a8,0);
              if (*(int *)(puVar22 + 1) == 0) {
                puVar13 = &DAT_143f3eda8;
              }
              else {
                puVar13 = (undefined2 *)*puVar22;
              }
              LowLevelFatalErrorHandler
                        ("Unknown",0x1a41,
                         L"EDL did not create the CDO for %s before it finished loading.",puVar13);
              if (local_a8[0] != 0) {
                FMemory::Free();
              }
              puVar22 = (undefined8 *)UObjectBaseUtility::GetFullName(plVar18,local_98,0);
              if (*(int *)(puVar22 + 1) == 0) {
                puVar13 = &DAT_143f3eda8;
              }
              else {
                puVar13 = (undefined2 *)*puVar22;
              }
              FDebug::AssertFailed
                        (&DAT_144cf0eca,"Unknown",0x1a41,
                         L"EDL did not create the CDO for %s before it finished loading.",puVar13);
              if (local_98[0] != 0) {
                FMemory::Free();
              }
            }
            iVar9 = *(int *)((longlong)plVar17 + 0xc);
            uVar24 = uVar23;
            if (iVar9 < (int)DAT_1469e91c4) {
              uVar16 = iVar9 >> 0x1f & 0xffff;
              uVar10 = iVar9 + uVar16;
              uVar24 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                       (longlong)(int)((uVar10 & 0xffff) - uVar16) * 0x18;
            }
            uVar10 = *(uint *)(uVar24 + 8);
            while (plVar18 = plVar17, (uVar10 >> 0x1b & 1) != 0) {
              LOCK();
              bVar25 = uVar10 == *(uint *)(uVar24 + 8);
              if (bVar25) {
                *(uint *)(uVar24 + 8) = uVar10 & 0xf7ffffff;
              }
              UNLOCK();
              if (bVar25) break;
              uVar10 = *(uint *)(uVar24 + 8);
            }
          }
        }
        else if ((*(uint *)(plVar18 + 1) >> 4 & 1) == 0) goto LAB_141701542;
        if (plVar18 != (longlong *)0x0) {
          FUN_1417571e0(plVar18,&local_160);
          lVar11 = local_158;
          uVar24 = (ulonglong)((longlong)(local_160 + (int)local_158) + (7 - (longlong)local_160))
                   >> 3;
          if (local_160 + (int)local_158 < local_160) {
            uVar24 = uVar23;
          }
          uVar20 = uVar23;
          lVar12 = DAT_1469e91b0;
          plVar18 = local_160;
          iVar9 = (int)DAT_1469e91c4;
          if (uVar24 != 0) {
            do {
              if (*plVar18 != 0) {
                iVar19 = *(int *)(*plVar18 + 0xc);
                uVar15 = uVar23;
                if (iVar19 < iVar9) {
                  uVar16 = iVar19 >> 0x1f & 0xffff;
                  uVar10 = iVar19 + uVar16;
                  uVar15 = *(longlong *)(lVar12 + (longlong)((int)uVar10 >> 0x10) * 8) +
                           (longlong)(int)((uVar10 & 0xffff) - uVar16) * 0x18;
                }
                if ((*(uint *)(uVar15 + 8) >> 0x1b & 1) != 0) {
                  uVar15 = uVar23;
                  if (iVar19 < iVar9) {
                    uVar16 = iVar19 >> 0x1f & 0xffff;
                    uVar10 = iVar19 + uVar16;
                    uVar15 = *(longlong *)(lVar12 + (longlong)((int)uVar10 >> 0x10) * 8) +
                             (longlong)(int)((uVar10 & 0xffff) - uVar16) * 0x18;
                  }
                  uVar10 = *(uint *)(uVar15 + 8);
                  while ((uVar10 >> 0x1b & 1) != 0) {
                    LOCK();
                    bVar25 = uVar10 == *(uint *)(uVar15 + 8);
                    if (bVar25) {
                      *(uint *)(uVar15 + 8) = uVar10 & 0xf7ffffff;
                    }
                    UNLOCK();
                    lVar12 = DAT_1469e91b0;
                    iVar9 = (int)DAT_1469e91c4;
                    if (bVar25) break;
                    uVar10 = *(uint *)(uVar15 + 8);
                  }
                }
              }
              uVar20 = uVar20 + 1;
              plVar18 = plVar18 + 1;
            } while (uVar20 != uVar24);
          }
          uVar10 = local_158._4_4_;
          local_158 = (ulonglong)local_158._4_4_ << 0x20;
          if ((lVar11 < 0) && (uVar10 != 0)) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(&local_160,0);
          }
        }
      }
LAB_141701542:
    } while (*(int *)(param_1 + 0xbc) < *(int *)(param_1 + 0x110));
  }
  fVar27 = *param_4;
  if (param_3 == '\0') {
LAB_1417015fc:
    IsGarbageCollectionWaiting();
  }
  else {
    QueryPerformanceCounter(&local_128);
    dVar26 = (double)fVar27;
    _DAT_1464b48b8 = (double)local_128.QuadPart * DAT_1468b02f8 + 16777216.0;
    dVar28 = _DAT_1464b48b8 - param_2;
    if ((((dVar26 < dVar28) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != param_2)) &&
       (((double)DAT_1464b441c < dVar28 && ((double)(fVar27 * DAT_1464b4418) < dVar28)))) {
      DAT_1464b48b0 = param_2;
    }
    if (dVar28 <= dVar26) goto LAB_1417015fc;
  }
  uVar24 = uVar23;
  if (*(int *)(param_1 + 0xbc) == *(int *)(param_1 + 0x110)) {
    uVar24 = 2;
    lVar11 = *(longlong *)(param_1 + 0x58);
    if ((lVar11 != 0) && (*(char *)(param_1 + 0xcb) == '\0')) {
      *(longlong *)(param_1 + 0xd8) = lVar11;
      *(wchar_t **)(param_1 + 0xe0) = L"CreateClustersFromPackage";
      iVar9 = *(int *)(lVar11 + 0xc);
      if (iVar9 < (int)DAT_1469e91c4) {
        uVar16 = iVar9 >> 0x1f & 0xffff;
        uVar10 = iVar9 + uVar16;
        uVar23 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                 (longlong)(int)((uVar10 & 0xffff) - uVar16) * 0x18;
      }
      uVar10 = *(uint *)(uVar23 + 8);
      while ((uVar10 >> 0x1b & 1) != 0) {
        LOCK();
        bVar25 = uVar10 == *(uint *)(uVar23 + 8);
        if (bVar25) {
          *(uint *)(uVar23 + 8) = uVar10 & 0xf7ffffff;
        }
        UNLOCK();
        if (bVar25) break;
        uVar10 = *(uint *)(uVar23 + 8);
      }
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x58) + 0x28);
      *pbVar2 = *pbVar2 | 2;
      QueryPerformanceCounter(&local_120);
      *(float *)(*(longlong *)(param_1 + 0x58) + 0x2c) =
           (float)(((double)local_120.QuadPart * DAT_1468b02f8 + 16777216.0) -
                  *(double *)(param_1 + 0xe8));
      if (*(longlong *)(param_1 + 0x50) != 0) {
        CreateClustersFromPackage(*(longlong *)(param_1 + 0x50),param_1 + 0x138);
      }
      fVar27 = *param_4;
      if (param_3 != '\0') {
        QueryPerformanceCounter(&local_118);
        dVar26 = (double)fVar27;
        _DAT_1464b48b8 = (double)local_118.QuadPart * DAT_1468b02f8 + 16777216.0;
        dVar28 = _DAT_1464b48b8 - param_2;
        if ((((dVar26 < dVar28) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != param_2)) &&
           (((double)DAT_1464b441c < dVar28 && ((double)(fVar27 * DAT_1464b4418) < dVar28)))) {
          DAT_1464b48b0 = param_2;
        }
        if (dVar26 < dVar28) goto LAB_141701792;
      }
      IsGarbageCollectionWaiting();
    }
  }
LAB_141701792:
  uVar23 = uVar24;
  LOCK();
  DAT_1464b56f4 = DAT_1464b56f4 + 1;
  UNLOCK();
  LOCK();
  DAT_1464b4c84 = DAT_1464b4c84 + 1;
  UNLOCK();
  plVar18 = local_170;
  if (local_160 != (longlong *)0x0) {
    FMemory::Free();
    plVar18 = local_170;
  }
LAB_1417017b4:
  if (plVar18 != (longlong *)0x0) {
    FMemory::Free(plVar18);
  }
  if (bVar6) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469e6f40) &&
       (_Init_thread_header(&DAT_1469e6f40), DAT_1469e6f40 == -1)) {
      FUN_1416e39e0(&DAT_1469e6c60);
      atexit((_func_5014 *)&LAB_143e7c100);
      _Init_thread_footer(&DAT_1469e6f40);
    }
    _DAT_1469e6f38 = _DAT_1469e6f38 + -1;
  }
  *(undefined1 *)(local_150 + 0x58) = local_174;
  *(undefined8 *)(local_150 + 0xa0) = local_110;
  return uVar23;
}



// FUNCTION 1417018a0 FUN_1417018a0 body=1204 status=ok
// SIG undefined FUN_1417018a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1417018a0(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  float fVar3;
  double dVar4;
  undefined1 uVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  double dVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  bool bVar19;
  double dVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_108;
  undefined1 local_107;
  char local_106;
  undefined1 local_105 [5];
  undefined1 *local_100;
  LARGE_INTEGER local_f8 [2];
  code *local_e8;
  undefined1 *puStack_e0;
  code *local_d8;
  undefined1 *puStack_d0;
  code *local_c8;
  undefined1 *puStack_c0;
  code *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  
  FUN_141729b50(local_105);
  puStack_e0 = local_res18;
  local_res18[0] = 0;
  local_e8 = FUN_1406ddef0;
  local_a8 = 0x406ddef0;
  uStack_a4 = 1;
  puStack_a0 = puStack_e0;
  lVar13 = FUN_1415d8310(&local_a8,&DAT_14622e6dc);
  uVar5 = *(undefined1 *)(lVar13 + 0x58);
  local_d8 = FUN_1406ddef0;
  puVar17 = (undefined1 *)(lVar13 + 0x58);
  local_res20[0] = 0;
  puStack_d0 = local_res20;
  *puVar17 = 1;
  local_98 = 0x406ddef0;
  uStack_94 = 1;
  local_100 = puVar17;
  puStack_90 = puStack_d0;
  lVar13 = FUN_1415d8310(&local_98,&DAT_14622e6dc);
  iVar15 = *(int *)(lVar13 + 0x40);
  puVar1 = (undefined8 *)(lVar13 + 0x38);
  if (iVar15 == 0) {
    if (DAT_1468c21ab != '\0') {
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x120);
    }
    lVar14 = FUN_1416f8f70();
    local_106 = DAT_1469e689c;
    uVar18 = 0;
    iVar15 = *(int *)(param_1 + 0xb4);
    cVar6 = *(char *)(lVar14 + 1);
    cVar11 = DAT_1469e689c;
    if (iVar15 < *(int *)(param_1 + 0x120)) {
      do {
        puVar17 = local_100;
        if (*(int *)(param_1 + 0xa8) <= iVar15) break;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x74);
        LOCK();
        bVar19 = *piVar2 == 0;
        if (bVar19) {
          *piVar2 = 0;
        }
        UNLOCK();
        if (!bVar19) break;
        fVar3 = *(float *)(param_1 + 0xc4);
        dVar4 = *(double *)(param_1 + 0xd0);
        if (*(char *)(param_1 + 200) != '\0') {
          QueryPerformanceCounter(local_f8);
          dVar9 = (double)fVar3;
          _DAT_1464b48b8 = (double)local_f8[0].QuadPart * DAT_1468b02f8 + 16777216.0;
          dVar20 = _DAT_1464b48b8 - dVar4;
          if ((((dVar9 < dVar20) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar4)) &&
             (((double)DAT_1464b441c < dVar20 && ((double)(fVar3 * DAT_1464b4418) < dVar20)))) {
            DAT_1464b48b0 = dVar4;
          }
          puVar17 = local_100;
          if (dVar9 < dVar20) break;
        }
        cVar10 = IsGarbageCollectionWaiting();
        puVar17 = local_100;
        if (cVar10 != '\0') break;
        iVar12 = *(int *)(param_1 + 0xb4);
        iVar15 = iVar12 + 1;
        *(int *)(param_1 + 0xb4) = iVar15;
        plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x118) + (longlong)iVar12 * 8);
        if (plVar7 != (longlong *)0x0) {
          if (cVar11 == '\0') goto LAB_141701b8a;
          if (cVar6 == '\0') {
LAB_141701b52:
            iVar15 = *(int *)(param_1 + 0x100);
            *(int *)(param_1 + 0x100) = iVar15 + 1;
            if (*(int *)(param_1 + 0x104) < iVar15 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0xf8,iVar15);
            }
            *(longlong **)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar15 * 8) = plVar7;
          }
          else {
            cVar11 = (**(code **)(*plVar7 + 0x100))(plVar7);
            if (cVar11 == '\0') goto LAB_141701b52;
            plVar16 = (longlong *)plVar7[4];
            bVar19 = true;
            if (plVar16 != (longlong *)0x0) {
              do {
                if (!bVar19) goto LAB_141701b52;
                if ((*(uint *)(plVar16 + 1) >> 0xc & 1) == 0) {
LAB_141701b43:
                  bVar19 = true;
                }
                else {
                  cVar11 = (**(code **)(*plVar16 + 0x100))(plVar16);
                  bVar19 = false;
                  if (cVar11 != '\0') goto LAB_141701b43;
                }
                plVar16 = (longlong *)plVar16[4];
              } while (plVar16 != (longlong *)0x0);
              if (!bVar19) goto LAB_141701b52;
            }
LAB_141701b8a:
            puStack_c0 = &local_108;
            local_108 = 0;
            local_c8 = FUN_1406ddef0;
            local_88 = 0x406ddef0;
            uStack_84 = 1;
            uStack_80 = puStack_c0;
            lVar14 = FUN_1415d8310(&local_88,&DAT_14622e6dc);
            uVar8 = *(undefined8 *)(lVar14 + 0x70);
            *(longlong **)(lVar14 + 0x70) = plVar7;
            FUN_1417510e0(plVar7);
            puStack_b0 = &local_107;
            local_b8 = FUN_1406ddef0;
            local_78 = 0x406ddef0;
            uStack_74 = 1;
            local_107 = 0;
            uStack_70 = puStack_b0;
            lVar14 = FUN_1415d8310(&local_78,&DAT_14622e6dc);
            *(undefined8 *)(lVar14 + 0x70) = uVar8;
            *(wchar_t **)(param_1 + 0xe0) = L"postloading_async";
            *(longlong **)(param_1 + 0xd8) = plVar7;
            iVar15 = *(int *)(lVar13 + 0x40);
            if (iVar15 != 0) {
              iVar12 = *(int *)(param_1 + 0x120);
              if (*(int *)(param_1 + 0x124) < iVar15 + iVar12) {
                TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0x118));
                iVar12 = *(int *)(param_1 + 0x120);
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar12 * 8),
                         (void *)*puVar1,(longlong)iVar15 << 3);
              *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + iVar15;
              *(undefined4 *)(lVar13 + 0x40) = 0;
              puVar17 = local_100;
              if ((*(int *)(lVar13 + 0x44) < 0) && (*(int *)(lVar13 + 0x44) != 0)) {
                TArray<void_*,FDefaultAllocator>::ResizeTo(puVar1,0);
                puVar17 = local_100;
              }
              goto LAB_141701cb7;
            }
          }
          iVar15 = *(int *)(param_1 + 0x110);
          *(int *)(param_1 + 0x110) = iVar15 + 1;
          if (*(int *)(param_1 + 0x114) < iVar15 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      ((longlong *)(param_1 + 0x108),iVar15);
          }
          *(longlong **)(*(longlong *)(param_1 + 0x108) + (longlong)iVar15 * 8) = plVar7;
          FUN_1416ea3b0(param_1,plVar7);
          iVar15 = *(int *)(param_1 + 0xb4);
          cVar11 = local_106;
        }
        puVar17 = local_100;
      } while (iVar15 < *(int *)(param_1 + 0x120));
    }
    TArray<AActor_*,FDefaultAllocator>::Append<AActor_*,FDefaultAllocator>(param_1 + 0x118,puVar1);
    *(undefined4 *)(lVar13 + 0x40) = 0;
    if ((*(int *)(lVar13 + 0x44) < 0) && (*(int *)(lVar13 + 0x44) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(puVar1,0);
    }
    if ((*(int *)(param_1 + 0xa8) == *(int *)(param_1 + 0x120)) &&
       (*(int *)(param_1 + 0xb4) == *(int *)(param_1 + 0x120))) {
      uVar18 = 2;
    }
  }
  else {
    iVar12 = *(int *)(param_1 + 0x120);
    if (*(int *)(param_1 + 0x124) < iVar12 + iVar15) {
      TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0x118));
      iVar12 = *(int *)(param_1 + 0x120);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar12 * 8),(void *)*puVar1,
               (longlong)iVar15 << 3);
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + iVar15;
    *(undefined4 *)(lVar13 + 0x40) = 0;
    uVar18 = 0;
    if (0x7fffffff < *(uint *)(lVar13 + 0x44)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(puVar1,0);
      uVar18 = 0;
    }
  }
LAB_141701cb7:
  *puVar17 = uVar5;
  FUN_14172a400(local_105);
  return uVar18;
}



// FUNCTION 141701d60 FUN_141701d60 body=708 status=ok
// SIG undefined FUN_141701d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_141701d60(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  double dVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  LARGE_INTEGER local_res18;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  
  FUN_141729b50(local_res10);
  puStack_60 = local_res8;
  local_res8[0] = 0;
  local_68 = 0x406ddef0;
  uStack_64 = 1;
  lVar11 = FUN_1415d8310(&local_68,&DAT_14622e6dc);
  plVar2 = (longlong *)(param_1 + 0x118);
  iVar5 = *(int *)(lVar11 + 0x40);
  if (iVar5 != 0) {
    iVar10 = *(int *)(param_1 + 0x120);
    if (*(int *)(param_1 + 0x124) < iVar10 + iVar5) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2);
      iVar10 = *(int *)(param_1 + 0x120);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar2 + (longlong)iVar10 * 8),*(void **)(lVar11 + 0x38),
               (longlong)iVar5 << 3);
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + iVar5;
  }
  *(undefined4 *)(lVar11 + 0x40) = 0;
  if (0x7fffffff < *(uint *)(lVar11 + 0x44)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar11 + 0x38,0);
  }
  if (*(int *)(param_1 + 0xa8) < *(int *)(param_1 + 0x120)) {
    do {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x74);
      LOCK();
      bVar13 = *piVar1 == 0;
      if (bVar13) {
        *piVar1 = 0;
      }
      UNLOCK();
      if (!bVar13) break;
      fVar3 = *(float *)(param_1 + 0xc4);
      dVar4 = *(double *)(param_1 + 0xd0);
      if (*(char *)(param_1 + 200) != '\0') {
        QueryPerformanceCounter(&local_res18);
        dVar7 = (double)fVar3;
        _DAT_1464b48b8 = (double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0;
        dVar14 = _DAT_1464b48b8 - dVar4;
        if ((((dVar7 < dVar14) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar4)) &&
           (((double)DAT_1464b441c < dVar14 && ((double)(DAT_1464b4418 * fVar3) < dVar14)))) {
          DAT_1464b48b0 = dVar4;
        }
        if (dVar7 < dVar14) break;
      }
      cVar9 = IsGarbageCollectionWaiting();
      if (cVar9 != '\0') break;
      iVar5 = *(int *)(param_1 + 0xa8);
      *(int *)(param_1 + 0xa8) = iVar5 + 1;
      lVar6 = *(longlong *)(*plVar2 + (longlong)iVar5 * 8);
      if (lVar6 != 0) {
        lVar12 = FUN_1417a53c0(lVar6);
        if (lVar12 != 0) {
          lVar12 = FUN_1417a53c0(lVar6);
          FUN_141740c00(lVar12 + 0x200,lVar6);
          *(longlong *)(param_1 + 0xd8) = lVar6;
          *(wchar_t **)(param_1 + 0xe0) = L"preloading";
        }
      }
    } while (*(int *)(param_1 + 0xa8) < *(int *)(param_1 + 0x120));
  }
  iVar5 = *(int *)(lVar11 + 0x40);
  if (iVar5 != 0) {
    iVar10 = *(int *)(param_1 + 0x120);
    if (*(int *)(param_1 + 0x124) < iVar10 + iVar5) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2);
      iVar10 = *(int *)(param_1 + 0x120);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar2 + (longlong)iVar10 * 8),*(void **)(lVar11 + 0x38),
               (longlong)iVar5 << 3);
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + iVar5;
  }
  *(undefined4 *)(lVar11 + 0x40) = 0;
  if ((*(int *)(lVar11 + 0x44) < 0) && (*(int *)(lVar11 + 0x44) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar11 + 0x38,0);
  }
  uVar8 = 0;
  if (*(int *)(param_1 + 0xa8) == *(int *)(param_1 + 0x120)) {
    uVar8 = 2;
  }
  FUN_14172a400(local_res10);
  return uVar8;
}



// FUNCTION 141702030 FUN_141702030 body=425 status=ok
// SIG undefined FUN_141702030(void)

char FUN_141702030(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5,
                  double param_6,float param_7)

{
  char cVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  bool bVar6;
  LARGE_INTEGER local_res8;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  uVar5 = *(uint *)(param_1 + 0x110);
  bVar6 = false;
  if (uVar5 == 2) {
    *(undefined4 *)(param_1 + 0x110) = 3;
    FArchiveAsync2::FlushPrecacheBlock();
    uVar5 = *(uint *)(param_1 + 0x110);
    bVar6 = uVar5 == 2;
  }
  if (uVar5 < 2 || bVar6) {
    puVar4 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0x178) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)(param_1 + 0x170);
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x1f8b,
               L"Invalid LoadPhase (LoadPhase=%d, RequestOffset=%d, RequestSize=%d, Filename=\'%s\', bHasFinishedInitialization=%d)"
               ,uVar5,param_2,param_3,puVar3,CONCAT44(uVar7,(uint)DAT_1469e689d));
    if (*(int *)(param_1 + 0x178) != 0) {
      puVar4 = *(undefined2 **)(param_1 + 0x170);
    }
    FDebug::AssertFailed
              (&DAT_144cf110a,"Unknown",0x1f8b,
               L"Invalid LoadPhase (LoadPhase=%d, RequestOffset=%d, RequestSize=%d, Filename=\'%s\', bHasFinishedInitialization=%d)"
               ,*(undefined4 *)(param_1 + 0x110),param_2,param_3,puVar4,DAT_1469e689d);
    cVar1 = '\0';
  }
  else {
    if (uVar5 == 3) {
      FUN_1416f7b40(param_1);
    }
    if (param_4 == '\0') {
      cVar1 = '\x01';
    }
    else {
      cVar1 = FUN_141702230(param_1,param_2,param_3,1);
      if ((((cVar1 == '\0') && (param_5 != '\0')) &&
          (QueryPerformanceCounter(&local_res8),
          0.00101 < param_7 - (float)(((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
                                     param_6))) &&
         (cVar2 = FArchiveAsync2::WaitRead(param_1), cVar2 != '\0')) {
        cVar1 = '\x01';
      }
    }
  }
  return cVar1;
}



// FUNCTION 141702200 FUN_141702200 body=45 status=ok
// SIG undefined FUN_141702200(void)

undefined1 FUN_141702200(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x95) == '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 200))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141702230 FUN_141702230 body=436 status=ok
// SIG undefined FUN_141702230(void)

undefined8 FUN_141702230(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  LARGE_INTEGER local_res8;
  
  iVar2 = *(int *)(param_1 + 0x110);
  if (iVar2 == 1) goto LAB_1417022f1;
  if ((param_3 == 0) ||
     ((*(longlong *)(param_1 + 0xe0) <= param_2 &&
      (param_3 + param_2 <= *(longlong *)(param_1 + 0xe8))))) {
LAB_141702352:
    uVar4 = 1;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_1417022f1:
      *(longlong *)(param_1 + 0xf0) = param_2;
      *(longlong *)(param_1 + 0xf8) = param_3;
      if (((param_4 != '\0') && (iVar2 != 1)) && (param_3 < DAT_1464b49b8)) {
        *(longlong *)(param_1 + 0xf8) = DAT_1464b49b8;
        param_3 = FArchiveAsync2::TotalSize(param_1);
        lVar5 = *(longlong *)(param_1 + 0xf8) + *(longlong *)(param_1 + 0xf0);
        if (lVar5 <= param_3) {
          param_3 = lVar5;
        }
        param_3 = param_3 - *(longlong *)(param_1 + 0xf0);
        *(longlong *)(param_1 + 0xf8) = param_3;
      }
      if (param_3 < 1) {
        *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
        goto LAB_141702352;
      }
      QueryPerformanceCounter(&local_res8);
      if ((DAT_1468c21ab == '\0') || (iVar2 != 1)) {
        lVar5 = 0;
      }
      else {
        lVar5 = param_1 + 0x1f0;
      }
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))
                        (*(longlong **)(param_1 + 0x90),
                         *(longlong *)(param_1 + 0xf0) - *(longlong *)(param_1 + 0x108),
                         *(undefined8 *)(param_1 + 0xf8),3,lVar5,0);
      *(longlong *)(param_1 + 0xb8) = lVar5;
      if (iVar2 != 1) {
        cVar1 = *(char *)(lVar5 + 0x71);
        goto LAB_1417023c1;
      }
    }
    else {
      if ((param_2 < *(longlong *)(param_1 + 0xf0)) ||
         (*(longlong *)(param_1 + 0xf0) + *(longlong *)(param_1 + 0xf8) < param_3 + param_2)) {
        if (*(char *)((longlong)plVar3 + 0x73) == '\0') {
          *(undefined1 *)((longlong)plVar3 + 0x73) = 1;
          *(undefined1 *)(plVar3 + 0xe) = 1;
          if (*(char *)((longlong)plVar3 + 0x71) == '\0') {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        FUN_1416ec540(param_1);
        *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xb8);
        *(undefined8 *)(param_1 + 0xb8) = 0;
        goto LAB_1417022f1;
      }
      cVar1 = *(char *)((longlong)plVar3 + 0x71);
LAB_1417023c1:
      if (cVar1 != '\0') {
        FArchiveAsync2::CompleteRead(param_1);
        return 1;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1417023f0 PreloadMembers body=305 status=ok
// SIG undefined PreloadMembers(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FPreloadMembersHelper::PreloadMembers(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [64];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_c8 = 1;
  local_d0 = 1;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 1;
  FReferenceFinder::FReferenceFinder(local_a8,&local_b8,param_1,0);
  FReferenceFinder::FindReferences(local_a8,param_1,0,0);
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < (int)local_b0)); iVar3 = iVar3 + 1) {
    lVar1 = *(longlong *)(local_b8 + (longlong)iVar3 * 8);
    if ((*(uint *)(lVar1 + 8) >> 0x15 & 1) == 0) {
      *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | 0x400;
      lVar2 = FUN_1417a53c0(lVar1);
      if (lVar2 != 0) {
        FUN_141740c00(lVar2 + 0x200,lVar1);
        PreloadMembers(lVar1);
      }
    }
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_88);
  FReferenceCollector::~FReferenceCollector(local_a8);
  if (local_b8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141702530 PrintRootPath body=1815 status=ok
// SIG undefined PrintRootPath(void)

longlong * FArchiveTraceRoute::PrintRootPath(longlong *param_1,longlong *param_2,longlong param_3)

{
  void *_Dst;
  longlong lVar1;
  void *_Src;
  wint_t wVar2;
  wint_t wVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined2 *puVar13;
  wint_t *pwVar14;
  undefined2 *puVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined2 *puVar18;
  undefined4 *_Src_00;
  int iVar19;
  ulonglong uVar20;
  undefined4 *local_118;
  uint local_110;
  int local_10c;
  uint local_108;
  uint uStack_104;
  uint *puStack_100;
  undefined4 local_f8;
  int iStack_f4;
  uint uStack_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  uint uStack_b0;
  int iStack_ac;
  uint local_a8;
  longlong local_a0;
  longlong local_98;
  void *local_90;
  int local_88;
  longlong local_80 [2];
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined4 uStack_58;
  int iStack_54;
  uint uStack_50;
  
  uVar20 = 0;
  *param_1 = 0;
  puStack_100 = (uint *)(param_2 + 2);
  param_1[1] = 0;
  iVar12 = (int)param_2[5];
  iVar19 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_104 = 1;
  iStack_f4 = 0;
  if (iVar12 != 0) {
    puVar16 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar16 = puStack_100;
    }
    uVar5 = *puVar16;
    uVar10 = uVar20;
    uVar11 = uVar20;
    while (uVar5 == 0) {
      iVar4 = (int)uVar11;
      uStack_f0 = (int)uVar10 + 0x20;
      uVar10 = (ulonglong)uStack_f0;
      local_108 = iVar4 + 1;
      uVar11 = (ulonglong)local_108;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141702614;
      uVar5 = puVar16[(longlong)iVar4 + 1];
    }
    uStack_104 = -uVar5 & uVar5;
    iVar4 = 0x1f;
    if (uStack_104 != 0) {
      for (; uStack_104 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_104 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    iStack_f4 = (uStack_f0 - iVar4) + 0x1f;
    if (iVar12 < iStack_f4) {
LAB_141702614:
      iStack_f4 = iVar12;
    }
  }
  local_f8 = 0xffffffff;
  uStack_c0 = CONCAT44(uStack_104,local_108);
  uStack_58 = 0xffffffff;
  iStack_54 = iStack_f4;
  uStack_50 = uStack_f0;
  uStack_b0 = 0xffffffff;
  iStack_ac = iStack_f4;
  local_a8 = uStack_f0;
  local_c8 = param_2;
  local_b8 = puStack_100;
  local_70 = param_2;
  uStack_68 = uStack_c0;
  puStack_60 = puStack_100;
  if (iVar12 <= iStack_f4) {
LAB_141702b9c:
    if (((int)param_2[1] == *(int *)((longlong)param_2 + 0x34)) &&
       ((wchar_t *)*param_1 != L"   (Object is not currently rooted)\r\n")) {
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) != 0x26) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x26);
        iVar19 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar19 + 0x26;
      if (*(int *)((longlong)param_1 + 0xc) < iVar19 + 0x26) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar19);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"   (Object is not currently rooted)\r\n",0x26);
    }
    return param_1;
  }
LAB_141702690:
  local_118 = (undefined4 *)0x0;
  local_110 = 0;
  local_10c = 0;
  lVar1 = *(longlong *)(*local_c8 + (longlong)iStack_ac * 0x18);
  local_a0 = *(longlong *)(*local_c8 + 8 + (longlong)iStack_ac * 0x18);
  uVar10 = uVar20;
  local_98 = lVar1;
  if (lVar1 == param_3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_118,10);
    local_110 = local_110 + 10;
    if (local_10c < (int)local_110) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118);
    }
    uVar10 = (ulonglong)local_110;
    *local_118 = 0x5b0020;
    local_118[1] = 0x610074;
    local_118[2] = 0x670072;
    local_118[3] = 0x740065;
    local_118[4] = 0x5d;
  }
  uVar5 = *(uint *)(lVar1 + 0xc);
  uVar11 = uVar20;
  if ((int)uVar5 < (int)DAT_1469e91c4) {
    uVar9 = uVar5 & 0xffff;
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + 0xffff;
      uVar9 = uVar9 - 0x10000;
    }
    uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
             (longlong)(int)uVar9 * 0x18;
  }
  if ((*(uint *)(uVar11 + 8) >> 0x1e & 1) != 0) {
    iVar12 = (int)uVar10;
    local_110 = (8 - (uint)(iVar12 != 0)) + iVar12;
    if (local_10c < (int)local_110) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,uVar10);
    }
    uVar10 = (ulonglong)local_110;
    lVar7 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
    *(undefined8 *)((longlong)local_118 + lVar7 * 2) = 0x6f007200280020;
    *(undefined4 *)((longlong)local_118 + lVar7 * 2 + 8) = 0x74006f;
    *(undefined2 *)((longlong)local_118 + lVar7 * 2 + 0xc) = 0x29;
    *(undefined2 *)((longlong)local_118 + lVar7 * 2 + 0xe) = 0;
  }
  uVar5 = *(uint *)(lVar1 + 0xc);
  uVar11 = uVar20;
  if ((int)uVar5 < (int)DAT_1469e91c4) {
    uVar9 = uVar5 & 0xffff;
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + 0xffff;
      uVar9 = uVar9 - 0x10000;
    }
    uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
             (longlong)(int)uVar9 * 0x18;
  }
  if ((*(uint *)(uVar11 + 8) >> 0x19 & 1) != 0) {
    iVar12 = (int)uVar10;
    local_110 = (10 - (uint)(iVar12 != 0)) + iVar12;
    if (local_10c < (int)local_110) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,uVar10);
    }
    uVar10 = (ulonglong)local_110;
    builtin_wcsncpy((wchar_t *)
                    ((longlong)local_118 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2),
                    L" (native)",10);
  }
  if ((*(uint *)(lVar1 + 8) >> 1 & 1) != 0) {
    iVar12 = (int)uVar10;
    local_110 = (0xe - (uint)(iVar12 != 0)) + iVar12;
    if (local_10c < (int)local_110) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,uVar10);
    }
    uVar10 = (ulonglong)local_110;
    builtin_wcsncpy((wchar_t *)
                    ((longlong)local_118 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2),
                    L" (standalone)",0xe);
  }
  iVar12 = local_10c;
  _Src_00 = local_118;
  pwVar14 = &DAT_144cf10dc;
  puVar17 = (undefined4 *)&DAT_143f3eda8;
  if ((int)uVar10 != 0) {
    puVar17 = local_118;
  }
  do {
    wVar2 = *(wint_t *)((longlong)pwVar14 + (longlong)(puVar17 + -0x5133c437));
    if ((wVar2 == 0) && (*pwVar14 == 0)) goto LAB_14170294c;
    if (wVar2 != *pwVar14) {
      wVar2 = towlower(wVar2);
      wVar3 = towlower(*pwVar14);
      if (wVar2 != wVar3) break;
    }
    pwVar14 = pwVar14 + 1;
  } while( true );
  if (wVar2 == wVar3) {
LAB_14170294c:
    if (_Src_00 != &DAT_144cf10fc) {
      local_110 = 0;
      uVar10 = uVar20;
      if (iVar12 != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_118,2);
        uVar10 = (ulonglong)local_110;
        _Src_00 = local_118;
        iVar12 = local_10c;
      }
      local_110 = (int)uVar10 + 2;
      if (iVar12 < (int)local_110) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118);
        _Src_00 = local_118;
      }
      uVar10 = (ulonglong)local_110;
      *_Src_00 = 0x20;
    }
  }
  puVar13 = (undefined2 *)0x0;
  local_d8 = (undefined2 *)0x0;
  local_cc = 0;
  iVar12 = (int)uVar10;
  if (local_a0 == 0) {
    local_d0 = iVar12;
    if (iVar12 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,uVar10,0);
      puVar13 = local_d8;
      ::_guard_xfg_dispatch_icall_nop(local_d8,_Src_00,(longlong)iVar12 * 2);
      iVar12 = local_d0;
    }
  }
  else {
    puVar8 = (undefined8 *)UObjectBaseUtility::GetFullName(local_a0,local_80,0);
    if (*(int *)(puVar8 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*puVar8;
    }
    puVar17 = (undefined4 *)&DAT_143f3eda8;
    if (iVar12 != 0) {
      puVar17 = _Src_00;
    }
    FString::PrintfImpl(&local_e8,L"%s (%s)",puVar17,puVar13);
    puVar13 = local_e8;
    iVar12 = (int)local_e0;
    local_e8 = (undefined2 *)0x0;
    local_cc = local_e0._4_4_;
    local_e0 = 0;
    if (local_80[0] != 0) {
      FMemory::Free();
    }
  }
  puVar15 = &DAT_143f3eda8;
  if (iVar12 != 0) {
    puVar15 = puVar13;
  }
  puVar8 = (undefined8 *)UObjectBaseUtility::GetFullName(local_98,&local_108,0);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar18 = &DAT_143f3eda8;
  }
  else {
    puVar18 = (undefined2 *)*puVar8;
  }
  FString::PrintfImpl(&local_90,L"   %s%s%s",puVar18,puVar15,&DAT_144cf3eb4);
  _Src = local_90;
  iVar12 = iVar19;
  if (local_88 != 0) {
    iVar12 = local_88 + -1;
  }
  if (iVar12 != 0) {
    iVar4 = (int)param_1[1];
    iVar6 = (uint)(iVar4 == 0) + iVar4 + iVar12;
    *(int *)(param_1 + 1) = iVar6;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    _Dst = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar12 * 2);
    *(undefined2 *)((longlong)iVar12 * 2 + (longlong)_Dst) = 0;
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if (CONCAT44(uStack_104,local_108) != 0) {
    FMemory::Free();
  }
  if (puVar13 != (undefined2 *)0x0) {
    FMemory::Free(puVar13);
  }
  if (_Src_00 != (undefined4 *)0x0) {
    FMemory::Free(_Src_00);
  }
  uStack_b0 = uStack_b0 & ~uStack_c0._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
  if ((int)local_b8[6] <= iStack_ac) goto LAB_141702b9c;
  goto LAB_141702690;
}



// FUNCTION 141702c50 ProcessAsyncLoading body=161 status=ok
// SIG undefined ProcessAsyncLoading(void)

undefined8 ProcessAsyncLoading(undefined1 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = DAT_1468e3590;
  uVar3 = FUN_14168db40();
  FCsvProfiler::BeginStat(uVar3,"AsyncLoadingTime",uVar1);
  uVar3 = FUN_1416f86a0();
  FUN_14170e020(uVar3,param_1,param_2,param_3,0);
  cVar2 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
  uVar3 = 2;
  if (cVar2 != '\0') {
    uVar3 = 0;
  }
  uVar4 = FUN_14168db40();
  FCsvProfiler::EndStat(uVar4,"AsyncLoadingTime",uVar1);
  return uVar3;
}



// FUNCTION 141702d00 FUN_141702d00 body=2869 status=ok
// SIG undefined FUN_141702d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_141702d00(longlong param_1,LARGE_INTEGER param_2,char param_3,char param_4,float param_5,
                 longlong param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LARGE_INTEGER LVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  DWORD DVar9;
  int iVar10;
  BOOL BVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  bool bVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  char local_1d8;
  char local_1d7;
  char local_1d6 [2];
  int local_1d4;
  float local_1d0 [2];
  LARGE_INTEGER local_1c8;
  longlong local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  float local_1a0;
  char local_19c;
  undefined1 local_19b;
  LARGE_INTEGER local_198;
  LARGE_INTEGER local_190;
  LARGE_INTEGER local_188;
  LARGE_INTEGER local_180;
  LARGE_INTEGER local_178;
  LARGE_INTEGER local_170;
  LARGE_INTEGER local_168;
  LARGE_INTEGER local_160;
  LARGE_INTEGER local_158;
  LARGE_INTEGER local_150;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140;
  longlong local_138;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128;
  LARGE_INTEGER local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  code *local_108;
  longlong local_f8 [4];
  longlong *local_d8;
  int local_c8;
  ulonglong local_b8;
  
  lVar13 = param_6;
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1c0 = param_6;
  if ((param_3 != '\0') || (local_1d7 = '\x01', DAT_1469e689c != '\0')) {
    local_1d7 = '\0';
  }
  iVar10 = 2;
  *(int *)param_2 = 0;
  local_1d8 = param_4;
  local_1d6[0] = param_3;
  local_1c8 = param_2;
  QueryPerformanceCounter(&local_198);
  dVar5 = (double)local_198.QuadPart * DAT_1468b02f8 + 16777216.0;
  if (DAT_1468c21ab == '\0') {
    uVar19 = 0;
    uVar21 = uVar19;
    while ((iVar20 = (int)uVar19, iVar10 != 0 && (iVar20 < *(int *)(param_1 + 0x1a0)))) {
      *(int *)param_2 = *(int *)param_2 + 1;
      lVar2 = *(longlong *)(uVar21 + *(longlong *)(param_1 + 0x198));
      local_138 = lVar2;
      if (lVar13 == 0) {
LAB_1417036fd:
        if (*(char *)(lVar2 + 0xcc) == '\0') {
          if (DAT_1468c21ab == '\0') {
            local_1e8 = lVar13;
            iVar10 = FUN_14170e680(lVar2,local_1d6[0],local_1d8,&param_5);
            if (iVar10 == 2) goto LAB_141703746;
          }
          else {
            iVar10 = 1;
          }
        }
        else {
          iVar10 = 2;
LAB_141703746:
          if (*(char *)(lVar2 + 0xcd) == '\0') {
            *(undefined1 *)(lVar2 + 0xcd) = 1;
            FAsyncLoadingThread::AddToLoadedPackages(param_1,lVar2);
            BVar11 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x210));
            if (BVar11 == 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x210));
            }
            TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            ::Remove(param_1 + 0x1a8,*(undefined8 *)(lVar2 + 0x18));
            TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x198,&local_138);
            iVar20 = iVar20 + -1;
            uVar21 = uVar21 - 8;
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x210));
            lVar13 = local_1c0;
          }
        }
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 0x18);
        if (*(int *)(lVar13 + 0x10) != *(int *)(lVar13 + 0x3c)) {
          lVar16 = *(longlong *)(lVar13 + 0x48);
          if (*(longlong *)(lVar13 + 0x48) == 0) {
            lVar16 = lVar13 + 0x40;
          }
          iVar10 = *(int *)(lVar16 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                                     (longlong)*(int *)(lVar13 + 0x50) - 1U) * 4);
          if (iVar10 != -1) {
            do {
              if (*(longlong *)(*(longlong *)(lVar13 + 8) + (longlong)iVar10 * 0x10) == lVar3) {
                if (iVar10 != -1) goto LAB_1417036fd;
                goto LAB_1417036f3;
              }
              iVar10 = *(int *)(*(longlong *)(lVar13 + 8) + 8 + (longlong)iVar10 * 0x10);
            } while (iVar10 != -1);
            iVar10 = 1;
            goto LAB_1417037b8;
          }
        }
LAB_1417036f3:
        iVar10 = 1;
      }
LAB_1417037b8:
      QueryPerformanceCounter(&local_130);
      local_1e8 = 0;
      fVar26 = param_5 - (float)(((double)local_130.QuadPart * DAT_1468b02f8 + 16777216.0) - dVar5);
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      FUN_1416ed9c0(param_1,local_1d6[0],local_1d8,fVar26);
      if (local_1d7 != '\0') {
        uVar15 = FUN_1415d80a0();
        FUN_1415df310(uVar15,0);
      }
      uVar21 = uVar21 + 8;
      param_2 = local_1c8;
      uVar19 = (ulonglong)(iVar20 + 1);
    }
  }
  else {
    bVar6 = false;
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar7 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)) {
      lVar13 = FUN_1416f86a0();
      bVar6 = true;
      *(int *)(lVar13 + 0x2d8) = *(int *)(lVar13 + 0x2d8) + 1;
    }
    local_1d4 = 0;
    fVar26 = param_5;
LAB_141702e50:
    do {
      while( true ) {
        do {
          uVar15 = 0;
          if ((local_1d7 != '\0') && (local_1d4 = local_1d4 + 1, ((byte)local_1d4 & 0x1f) == 0x1f))
          {
            uVar14 = FUN_1415d80a0();
            FUN_1415df310(uVar14,0);
          }
          cVar7 = FUN_141704480(&PTR_StartProfileThreadUsage_1464b4680);
          *(uint *)param_2 = *(int *)param_2 + (uint)(cVar7 != '\0');
          if (param_3 != '\0') {
            QueryPerformanceCounter(&local_190);
            _DAT_1464b48b8 = (double)local_190.QuadPart * DAT_1468b02f8 + 16777216.0;
            dVar23 = _DAT_1464b48b8 - dVar5;
            if ((((double)fVar26 < dVar23) && (DAT_1469e68bc != 0)) &&
               ((DAT_1464b48b0 != dVar5 &&
                (((double)DAT_1464b441c < dVar23 && ((double)(DAT_1464b4418 * fVar26) < dVar23))))))
            {
              DAT_1464b48b0 = dVar5;
            }
            if ((double)fVar26 < dVar23) goto LAB_141703637;
          }
          cVar8 = IsGarbageCollectionWaiting();
          if (cVar8 != '\0') goto LAB_141703637;
          LOCK();
          bVar22 = *(int *)(param_1 + 0x74) == 0;
          if (bVar22) {
            *(int *)(param_1 + 0x74) = 0;
          }
          UNLOCK();
          if (!bVar22) goto LAB_141703637;
          QueryPerformanceCounter(&local_188);
          fVar26 = param_5;
          local_1e8 = 0;
          fVar25 = param_5 - (float)(((double)local_188.QuadPart * DAT_1468b02f8 + 16777216.0) -
                                    dVar5);
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          iVar10 = FUN_1416ed9c0(param_1,param_3,param_4,fVar25);
          *(int *)param_2 = *(int *)param_2 + iVar10;
          if ((0 < iVar10) || (bVar22 = false, cVar7 != '\0')) {
            bVar22 = true;
          }
          if (param_3 != '\0') {
            QueryPerformanceCounter(&local_180);
            _DAT_1464b48b8 = (double)local_180.QuadPart * DAT_1468b02f8 + 16777216.0;
            dVar23 = _DAT_1464b48b8 - dVar5;
            if (((((double)fVar26 < dVar23) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar5)) &&
               (((double)DAT_1464b441c < dVar23 && ((double)(DAT_1464b4418 * fVar26) < dVar23)))) {
              DAT_1464b48b0 = dVar5;
            }
            if ((double)fVar26 < dVar23) goto LAB_141703637;
          }
          cVar7 = IsGarbageCollectionWaiting();
          if (cVar7 != '\0') goto LAB_141703637;
        } while (bVar22);
        local_108 = AK::MemoryMgr::StartProfileThreadUsage;
        local_1b0 = 0;
        uStack_1a8 = 0;
        local_19b = 1;
        local_118 = 0;
        uStack_110 = 0;
        local_1a0 = fVar26;
        local_d8 = (longlong *)0x0;
        local_c8 = 0;
        local_1b8 = dVar5;
        local_19c = param_3;
        if (*(int *)(param_1 + 0x2d0) == 0) break;
        FUN_1416e2410(param_1 + 0x2c8,&local_118,local_1d6,0);
        if (local_c8 != 0) {
          plVar17 = local_f8;
          if (local_d8 != (longlong *)0x0) {
            plVar17 = local_d8;
          }
          if (plVar17 != (longlong *)0x0) {
            uVar15 = (**(code **)(*plVar17 + 8))();
          }
        }
        (*local_108)(uVar15);
        if (local_c8 != 0) {
          plVar17 = local_f8;
          if (local_d8 != (longlong *)0x0) {
            plVar17 = local_d8;
          }
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
        if (local_d8 != (longlong *)0x0) {
          FMemory::Free();
        }
        fVar25 = local_1a0;
        dVar23 = local_1b8;
        *(int *)param_2 = *(int *)param_2 + 1;
        if (local_19c != '\0') {
          QueryPerformanceCounter(&local_178);
          dVar4 = (double)fVar25;
          _DAT_1464b48b8 = (double)local_178.QuadPart * DAT_1468b02f8 + 16777216.0;
          dVar24 = _DAT_1464b48b8 - dVar23;
          if (((dVar4 < dVar24) && (DAT_1469e68bc != 0)) &&
             ((DAT_1464b48b0 != dVar23 &&
              (((double)DAT_1464b441c < dVar24 && ((double)(fVar25 * DAT_1464b4418) < dVar24)))))) {
            DAT_1464b48b0 = dVar23;
          }
          if (dVar4 < dVar24) goto LAB_141703637;
        }
        cVar7 = IsGarbageCollectionWaiting();
        if (cVar7 != '\0') goto LAB_141703637;
      }
      if (*(int *)(param_1 + 0x200) == 0) {
        if ((DAT_1464b4730 == DAT_1464b475c) && (DAT_1464b4780 == DAT_1464b47ac)) {
          if (!bVar6) {
            return 2;
          }
          lVar13 = FUN_1416f86a0();
          *(int *)(lVar13 + 0x2d8) = *(int *)(lVar13 + 0x2d8) + -1;
          return 2;
        }
        QueryPerformanceCounter(&local_158);
        dVar23 = (double)local_158.QuadPart * DAT_1468b02f8;
        QueryPerformanceCounter(&local_128);
        if (param_3 == '\0') {
          cVar7 = FPrecacheCallbackHandler::WaitForIO
                            (&PTR_StartProfileThreadUsage_1464b4680,0x41200000);
          if (cVar7 == '\0') {
            FWindowsPlatformMisc::LocalPrint(L"Waited for 10 seconds on IO....");
          }
          *(int *)param_2 = *(int *)param_2 + 1;
          QueryPerformanceCounter(&local_140);
          DAT_1469e68a8 = DAT_1469e68a8 + ((double)local_140.QuadPart * DAT_1468b02f8 - dVar23);
          goto LAB_141702e50;
        }
        if (param_4 != '\0') {
          QueryPerformanceCounter(&local_150);
          fVar25 = fVar26 - (float)(((double)local_150.QuadPart * DAT_1468b02f8 + 16777216.0) -
                                   dVar5);
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          if (0.0 < fVar25) {
            cVar7 = FPrecacheCallbackHandler::WaitForIO(&PTR_StartProfileThreadUsage_1464b4680);
            if (cVar7 != '\0') {
              *(int *)param_2 = *(int *)param_2 + 1;
              QueryPerformanceCounter(&local_148);
              DAT_1469e68a8 = DAT_1469e68a8 + ((double)local_148.QuadPart * DAT_1468b02f8 - dVar23);
              goto LAB_141702e50;
            }
            QueryPerformanceCounter(&local_120);
          }
        }
        QueryPerformanceCounter(&local_1c8);
        DAT_1469e68a8 = DAT_1469e68a8 + ((double)local_1c8.QuadPart * DAT_1468b02f8 - dVar23);
        break;
      }
      *(int *)param_2 = *(int *)param_2 + 1;
      lVar13 = **(longlong **)(param_1 + 0x1f8);
      if (*(char *)(lVar13 + 0xcc) == '\0') {
        QueryPerformanceCounter(&local_170);
        local_1e8 = local_1c0;
        local_1d0[0] = fVar26 - (float)(((double)local_170.QuadPart * DAT_1468b02f8 + 16777216.0) -
                                       dVar5);
        if (local_1d0[0] <= 0.0) {
          local_1d0[0] = 0.0;
        }
        iVar10 = FUN_14170e680(lVar13,param_3,param_4,local_1d0);
        if (iVar10 != 0) {
          if (iVar10 == 2) goto LAB_141703319;
          goto LAB_141703401;
        }
        if (param_3 != '\0') {
          QueryPerformanceCounter(&local_168);
          LVar1 = local_168;
          goto LAB_141703280;
        }
      }
      else {
LAB_141703319:
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x210);
        BVar11 = TryEnterCriticalSection(lpCriticalSection);
        if (BVar11 == 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
        Remove(param_1 + 0x1a8,*(undefined8 *)(lVar13 + 0x18));
        plVar17 = *(longlong **)(param_1 + 0x198);
        iVar10 = *(int *)(param_1 + 0x1a0);
        for (plVar18 = plVar17; plVar18 != plVar17 + iVar10; plVar18 = plVar18 + 1) {
          if (*plVar18 == lVar13) {
            iVar20 = (int)((longlong)plVar18 - (longlong)plVar17 >> 3);
            goto LAB_141703377;
          }
        }
        iVar20 = -1;
LAB_141703377:
        iVar12 = (iVar10 - iVar20) + -1;
        if (iVar12 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (plVar17 + iVar20,plVar17 + (iVar20 + 1),(longlong)iVar12 << 3);
          iVar10 = *(int *)(param_1 + 0x1a0);
        }
        *(int *)(param_1 + 0x1a0) = iVar10 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x198));
        iVar10 = *(int *)(param_1 + 0x200);
        if (iVar10 + -1 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (*(void **)(param_1 + 0x1f8),(void *)((longlong)*(void **)(param_1 + 0x1f8) + 8)
                     ,(longlong)(iVar10 + -1) << 3);
          iVar10 = *(int *)(param_1 + 0x200);
        }
        *(int *)(param_1 + 0x200) = iVar10 + -1;
        LeaveCriticalSection(lpCriticalSection);
        FAsyncLoadingThread::AddToLoadedPackages(param_1);
        param_4 = local_1d8;
LAB_141703401:
        if (param_3 != '\0') {
          QueryPerformanceCounter(&local_160);
          LVar1 = local_160;
LAB_141703280:
          _DAT_1464b48b8 = (double)LVar1.QuadPart * DAT_1468b02f8 + 16777216.0;
          dVar23 = _DAT_1464b48b8 - dVar5;
          if (((((double)fVar26 < dVar23) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar5)) &&
             (((double)DAT_1464b441c < dVar23 && ((double)(DAT_1464b4418 * fVar26) < dVar23)))) {
            DAT_1464b48b0 = dVar5;
          }
          if ((double)fVar26 < dVar23) break;
        }
      }
      cVar7 = IsGarbageCollectionWaiting();
    } while (cVar7 == '\0');
LAB_141703637:
    if (bVar6) {
      lVar13 = FUN_1416f86a0();
      *(int *)(lVar13 + 0x2d8) = *(int *)(lVar13 + 0x2d8) + -1;
    }
    iVar10 = 0;
  }
  return iVar10;
}



// FUNCTION 141703840 FUN_141703840 body=643 status=ok
// SIG undefined FUN_141703840(void)

undefined8 FUN_141703840(undefined8 *param_1,float param_2)

{
  double dVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  bool bVar8;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  cVar3 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
  if (cVar3 == '\0') {
LAB_141703a4f:
    uVar6 = 2;
  }
  else {
    lVar5 = FUN_1416f86a0();
    LOCK();
    bVar8 = *(int *)(lVar5 + 0x74) == 0;
    if (bVar8) {
      *(int *)(lVar5 + 0x74) = 0;
    }
    UNLOCK();
    if (!bVar8) {
      LOCK();
      iVar4 = *(int *)(lVar5 + 0x74);
      if (iVar4 == 0) {
        *(int *)(lVar5 + 0x74) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      LowLevelFatalErrorHandler
                ("Unknown",0x1c4b,
                 L"Cannot Flush Async Loading while async loading is suspended (%d)",iVar4);
      LOCK();
      iVar4 = *(int *)(lVar5 + 0x74);
      if (iVar4 == 0) {
        *(int *)(lVar5 + 0x74) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      FDebug::AssertFailed
                (&DAT_144cf0fbf,"Unknown",0x1c4b,
                 L"Cannot Flush Async Loading while async loading is suspended (%d)",
                 CONCAT44(uVar9,iVar4));
    }
    if (param_2 <= 0.0) {
      param_2 = 3600.0;
    }
    cVar3 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
    pvVar2 = ThreadLocalStoragePointer;
    if (cVar3 != '\0') {
      uVar7 = (ulonglong)_tls_index;
      do {
        if ((param_2 <= 0.0) || (cVar3 = (*(code *)*param_1)(param_1[1]), cVar3 != '\0')) break;
        QueryPerformanceCounter(&local_res18);
        uVar9 = DAT_1468e3590;
        dVar1 = (double)local_res18.QuadPart * DAT_1468b02f8;
        uVar6 = FUN_14168db40();
        FCsvProfiler::BeginStat(uVar6,"AsyncLoadingTime",uVar9);
        if ((*(int *)(*(longlong *)((longlong)pvVar2 + uVar7 * 8) + 0x38) < DAT_1469e6f40) &&
           (_Init_thread_header(&DAT_1469e6f40), DAT_1469e6f40 == -1)) {
          FUN_1416e39e0(&DAT_1469e6c60);
          atexit((_func_5014 *)&LAB_143e7c100);
          _Init_thread_footer(&DAT_1469e6f40);
        }
        FUN_14170e020(&DAT_1469e6c60,1,1,param_2,0);
        cVar3 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
        uVar6 = FUN_14168db40();
        FCsvProfiler::EndStat(uVar6,"AsyncLoadingTime",uVar9);
        if (cVar3 == '\0') goto LAB_141703a4f;
        if (DAT_1469e689c != '\0') {
          uVar6 = FUN_1415d80a0();
          FUN_1415df310(uVar6,0);
          FUN_1416b1810(0x38d1b717);
        }
        QueryPerformanceCounter(&local_res20);
        param_2 = (float)((double)param_2 - ((double)local_res20.QuadPart * DAT_1468b02f8 - dVar1));
        cVar3 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
      } while (cVar3 != '\0');
    }
    uVar6 = 2;
    if (param_2 <= 0.0) {
      uVar6 = 0;
    }
  }
  return uVar6;
}



// FUNCTION 141703ad0 ProcessAsyncPackageRequest body=754 status=ok
// SIG undefined ProcessAsyncPackageRequest(void)

void FAsyncLoadingThread::ProcessAsyncPackageRequest
               (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  BOOL BVar4;
  longlong lVar5;
  undefined2 *puVar6;
  void *_Src;
  int iVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  
  lVar5 = FindExistingPackageAndAddCompletionCallback(param_1,param_2,param_1 + 0x1a8);
  if (lVar5 == 0) {
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
    }
    lVar5 = FindExistingPackageAndAddCompletionCallback(param_1,param_2,param_1 + 0x88,param_4);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  }
  else {
    iVar2 = *(int *)(param_2 + 0x34);
    local_48 = lVar5;
    if (DAT_1468c21ab == '\0') {
      if (*(int *)(lVar5 + 0x44) < iVar2) {
        TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x198,&local_48);
        *(int *)(local_48 + 0x44) = iVar2;
        InsertPackage(param_1,local_48,0,0);
        LOCK();
        *(int *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + -1;
        UNLOCK();
      }
    }
    else {
      *(int *)(lVar5 + 0x44) = iVar2;
    }
  }
  if (lVar5 == 0) {
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x170));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x170));
    }
    lVar5 = FindExistingPackageAndAddCompletionCallback(param_1,param_2,param_1 + 0x120,param_4);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x170));
    if (lVar5 == 0) {
      FUN_141729b50(local_res8);
      lVar5 = operator_new(0x510);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_1416e3de0(lVar5,param_2);
      }
      FUN_14172a400(local_res8);
      if (*(longlong *)(param_2 + 0x28) != 0) {
        iVar2 = *(int *)(lVar5 + 0x68);
        *(int *)(lVar5 + 0x68) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x6c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar5 + 0x60,iVar2);
        }
        puVar6 = (undefined2 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar5 + 0x60));
        *puVar6 = 0;
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_2 + 0x28) = 0;
      }
      *(undefined8 *)(lVar5 + 0x90) = param_3;
      if (param_4 != 0) {
        FAsyncPackage::PopulateFlushTree(lVar5,param_4);
      }
      LOCK();
      *(int *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + 1;
      UNLOCK();
      local_50 = lVar5;
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x210));
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x210));
      }
      plVar1 = (longlong *)(param_1 + 0x198);
      plVar3 = (longlong *)*plVar1;
      iVar2 = *(int *)(param_1 + 0x1a0);
      if (plVar3 != plVar3 + iVar2) {
        plVar8 = plVar3;
        do {
          if (*(int *)(*plVar8 + 0x44) < *(int *)(local_50 + 0x44)) {
            iVar7 = (int)((longlong)plVar8 - (longlong)plVar3 >> 3);
            if (iVar7 != -1) goto LAB_141703cf7;
            break;
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar3 + iVar2);
      }
      iVar7 = *(int *)(param_1 + 0x1a0);
LAB_141703cf7:
      *(int *)(param_1 + 0x1a0) = iVar2 + 1;
      if (*(int *)(param_1 + 0x1a4) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      _Src = (void *)(*plVar1 + (longlong)iVar7 * 8);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar2 - iVar7) << 3);
      *(longlong *)((longlong)iVar7 * 8 + *plVar1) = local_50;
      local_40 = local_50 + 0x18;
      local_38 = &local_50;
      FUN_1416e1690(param_1 + 0x1a8,local_58,&local_40,0);
      if (DAT_1468c21ab != '\0') {
        FUN_141705330(param_1,local_50,0x7fffffff);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x210));
      LOCK();
      *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + -1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 141703dd0 ProcessContentMountPoint body=367 status=ok
// SIG undefined ProcessContentMountPoint(void)

undefined8
FLongPackagePathsSingleton::ProcessContentMountPoint(undefined8 param_1,undefined2 **param_2)

{
  char cVar1;
  undefined2 **ppuVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  local_20 = *(int *)(param_2 + 1);
  lVar4 = (longlong)local_20;
  puVar5 = *param_2;
  local_28 = (undefined2 *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
    ::_guard_xfg_dispatch_icall_nop(local_28,puVar5,lVar4 * 2);
  }
  cVar1 = FPaths::IsRelative(&local_28);
  if (cVar1 != '\0') {
    ppuVar2 = (undefined2 **)FPaths::ConvertRelativePathToFull(local_18,param_2);
    if (&local_28 != ppuVar2) {
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_28 = *ppuVar2;
      *ppuVar2 = (undefined2 *)0x0;
      local_20 = *(int *)(ppuVar2 + 1);
      local_1c = *(int *)((longlong)ppuVar2 + 0xc);
      ppuVar2[1] = (undefined2 *)0x0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (((local_20 == 0) || (local_20 + -1 < 2)) && (&local_28 != param_2)) {
      local_20 = *(int *)(param_2 + 1);
      lVar4 = (longlong)local_20;
      puVar5 = *param_2;
      if ((local_20 == 0) && (local_1c == 0)) {
        local_1c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20);
        ::_guard_xfg_dispatch_icall_nop(local_28,puVar5,lVar4 * 2);
      }
    }
  }
  plVar3 = (longlong *)FUN_1415c3d50();
  puVar5 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar5 = local_28;
  }
  (**(code **)(*plVar3 + 0xd0))(plVar3,param_1,puVar5);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141703f40 FUN_141703f40 body=1334 status=ok
// SIG undefined FUN_141703f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_141703f40(longlong param_1)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  bool bVar4;
  void *pvVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  double dVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_d8;
  int local_d4;
  int local_d0 [2];
  LARGE_INTEGER local_c8;
  longlong local_c0;
  int local_b8;
  undefined4 local_b4;
  longlong local_b0;
  int local_a8;
  undefined4 local_a4;
  longlong local_a0;
  int local_98;
  undefined4 local_94;
  longlong local_90;
  int local_88;
  undefined4 local_84;
  
  pvVar5 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  iVar9 = 0;
  bVar4 = true;
  while( true ) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x74);
    LOCK();
    bVar11 = *piVar1 == 0;
    if (bVar11) {
      *piVar1 = 0;
    }
    UNLOCK();
    if (!bVar11) break;
    fVar2 = *(float *)(param_1 + 0xc4);
    dVar3 = *(double *)(param_1 + 0xd0);
    if (*(char *)(param_1 + 200) != '\0') {
      QueryPerformanceCounter(&local_c8);
      _DAT_1464b48b8 = (double)local_c8.QuadPart * DAT_1468b02f8 + 16777216.0;
      dVar12 = _DAT_1464b48b8 - dVar3;
      bVar11 = (double)fVar2 < dVar12;
      if ((((bVar11) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar3)) &&
         (((double)DAT_1464b441c < dVar12 && ((double)(DAT_1464b4418 * fVar2) < dVar12)))) {
        DAT_1464b48b0 = dVar3;
      }
      if (bVar11) break;
    }
    cVar6 = IsGarbageCollectionWaiting();
    if ((((cVar6 != '\0') || (!bVar4)) || ((iVar9 != 0 && (DAT_1469e6898 != 0)))) ||
       (iVar9 = iVar9 + 1, iVar9 == 0x14)) break;
    bVar4 = false;
    if ((*(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x27c) < 2) &&
       (*(int *)(param_1 + 0x220) != 0)) {
      iVar7 = (**(code **)(*DAT_1469e6a58 + 0x68))();
      if (0 < iVar7) {
        if ((*(int *)(*(longlong *)((longlong)pvVar5 + uVar10 * 8) + 0x38) < DAT_1469e6fa8) &&
           (_Init_thread_header(&DAT_1469e6fa8), DAT_1469e6fa8 == -1)) {
          DAT_1469e6fa4 = CheckForFileOpenLogCommandLine();
          _Init_thread_footer(&DAT_1469e6fa8);
        }
        if ((DAT_1469e6fa4 != '\0') && (iVar7 <= DAT_1464b4730 - DAT_1464b475c)) goto LAB_141704114;
      }
      bVar4 = true;
      FUN_14170d6f0(param_1);
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(wchar_t **)(param_1 + 0xe0) = L"ProcessImportsAndExports Start IO";
    }
    else {
LAB_141704114:
      if (*(int *)(param_1 + 0x1f0) == 0) {
        if (*(int *)(param_1 + 0x200) == 0) {
          if (*(int *)(param_1 + 0x210) == 0) {
            if (*(int *)(param_1 + 0x220) == 0) {
LAB_1417042cd:
              if (*(int *)(param_1 + 0x230) == 0) {
                if ((0 < *(longlong *)(param_1 + 0x2f0)) &&
                   (*(int *)(param_1 + 0x300) == *(int *)(param_1 + 0x32c))) {
                  FUN_1416f8250(param_1);
                  *(undefined8 *)(param_1 + 0xd8) = 0;
                  *(wchar_t **)(param_1 + 0xe0) = L"ProcessImportsAndExports FlushPrecacheBuffer";
                }
                if (*(int *)(param_1 + 0x240) != 0) {
                  FUN_1416fefd0(param_1);
                  *(undefined8 *)(param_1 + 0xd8) = 0;
                  *(wchar_t **)(param_1 + 0xe0) =
                       L"ProcessImportsAndExports MakeNextPrecacheRequestCurrent";
                }
              }
              else {
                local_d0[0] = -1;
                bVar4 = true;
                FImportOrImportIndexArray::HeapPop(param_1 + 0x228,local_d0,0);
                iVar7 = local_d0[0];
                if ((*(char *)(*(longlong *)(param_1 + 0x50) + 0x295) != '\0') ||
                   (iVar8 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Remove
                                      (param_1 + 0x2f8,local_d0[0]), iVar8 == 1)) {
                  FUN_141729b50(local_res18);
                  _DAT_1464b4410 = iVar7;
                  FUN_1416f22a0(param_1,iVar7);
                  _DAT_1464b4410 = 0xffffffff;
                  FUN_14172a400(local_res18);
                }
                local_88 = iVar7 + 1;
                local_84 = 1;
                local_90 = param_1;
                FUN_1417082b0(&DAT_1464b4630,&local_90);
              }
            }
            else {
              iVar7 = (**(code **)(*DAT_1469e6a58 + 0x68))();
              if (0 < iVar7) {
                if ((*(int *)(*(longlong *)((longlong)pvVar5 + uVar10 * 8) + 0x38) < DAT_1469e6fa8)
                   && (_Init_thread_header(&DAT_1469e6fa8), DAT_1469e6fa8 == -1)) {
                  DAT_1469e6fa4 = CheckForFileOpenLogCommandLine();
                  _Init_thread_footer(&DAT_1469e6fa8);
                }
                if ((DAT_1469e6fa4 != '\0') && (iVar7 <= DAT_1464b4730 - DAT_1464b475c))
                goto LAB_1417042cd;
              }
              bVar4 = true;
              FUN_14170d6f0(param_1);
              *(undefined8 *)(param_1 + 0xd8) = 0;
              *(wchar_t **)(param_1 + 0xe0) = L"ProcessImportsAndExports Start IO";
            }
          }
          else {
            local_d4 = -1;
            bVar4 = true;
            FImportOrImportIndexArray::HeapPop(param_1 + 0x208,&local_d4,0);
            FUN_141729b50(local_res10);
            iVar7 = local_d4;
            FUN_1416f1490(param_1,local_d4);
            FUN_14172a400(local_res10);
            local_98 = iVar7 + 1;
            local_94 = 0;
            local_a0 = param_1;
            FUN_1417082b0(&DAT_1464b4630,&local_a0);
          }
        }
        else {
          local_d8 = -1;
          bVar4 = true;
          FImportOrImportIndexArray::HeapPop(param_1 + 0x1f8,&local_d8,0);
          local_a8 = -1 - local_d8;
          local_a4 = 1;
          local_b0 = param_1;
          FUN_1417082b0(&DAT_1464b4630,&local_b0);
          *(wchar_t **)(param_1 + 0xe0) = L"ProcessImportsAndExports ImportsThatAreNowSerialized";
          *(undefined8 *)(param_1 + 0xd8) = 0;
        }
      }
      else {
        local_res20[0] = -1;
        bVar4 = true;
        FImportOrImportIndexArray::HeapPop(param_1 + 0x1e8,local_res20,0);
        FUN_141729b50(local_res8);
        FUN_1416fd5c0(param_1,local_res20[0]);
        FUN_14172a400(local_res8);
        local_b8 = -1 - local_res20[0];
        local_b4 = 0;
        local_c0 = param_1;
        FUN_1417082b0(&DAT_1464b4630,&local_c0);
        *(undefined8 *)(param_1 + 0xd8) = 0;
        *(wchar_t **)(param_1 + 0xe0) = L"ProcessImportsAndExports LinkImport";
      }
    }
  }
  return (bVar4 ^ 1U) * '\x02';
}



// FUNCTION 141704480 FUN_141704480 body=1231 status=ok
// SIG undefined FUN_141704480(void)

undefined8 FUN_141704480(longlong param_1)

{
  undefined8 **ppuVar1;
  int *piVar2;
  int **ppiVar3;
  longlong *plVar4;
  longlong lVar5;
  BOOL BVar6;
  int iVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  int *piVar12;
  undefined8 uVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  int *local_70;
  ulonglong uStack_68;
  int local_60 [2];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  longlong local_48;
  undefined8 *local_40;
  int *local_38;
  
  puVar18 = (undefined8 *)0x0;
  iVar15 = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  local_70 = (int *)0x0;
  uStack_68 = 0;
  local_48 = param_1;
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  }
  ppuVar1 = (undefined8 **)(param_1 + 0x78);
  if (&local_80 != ppuVar1) {
    puVar18 = *ppuVar1;
    iVar15 = *(int *)(param_1 + 0x80);
    uVar13 = *(undefined8 *)(param_1 + 0x80);
    *ppuVar1 = local_80;
    *(undefined8 *)(param_1 + 0x80) = uStack_78;
    local_80 = puVar18;
    uStack_78 = uVar13;
  }
  ppiVar3 = (int **)(param_1 + 0x88);
  if (&local_70 != ppiVar3) {
    piVar2 = *ppiVar3;
    uVar11 = *(ulonglong *)(param_1 + 0x90);
    *ppiVar3 = local_70;
    *(ulonglong *)(param_1 + 0x90) = uStack_68;
    local_70 = piVar2;
    uStack_68 = uVar11;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  local_40 = puVar18 + iVar15;
  puVar19 = puVar18;
  if (puVar18 != local_40) {
    plVar4 = (longlong *)(param_1 + 0xa8);
    local_88 = 0;
    local_38 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
    do {
      piVar14 = local_38;
      uVar13 = *puVar18;
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(plVar4,local_60,uVar13);
      piVar2 = (int *)((longlong)local_60[0] * 0x20 + 8 + *plVar4);
      local_58 = *piVar2;
      iStack_54 = piVar2[1];
      iStack_50 = piVar2[2];
      iStack_4c = piVar2[3];
      TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
      ::Remove(plVar4);
      if ((*piVar14 < DAT_1469e6f40) && (_Init_thread_header(&DAT_1469e6f40), DAT_1469e6f40 == -1))
      {
        FUN_1416e39e0(&DAT_1469e6c60);
        atexit((_func_5014 *)&LAB_143e7c100);
        _Init_thread_footer(&DAT_1469e6f40);
      }
      if (((CONCAT44(iStack_54,local_58) != 0) && (iStack_50 != 0)) &&
         (DAT_1469e6e10 != DAT_1469e6e3c)) {
        puVar8 = DAT_1469e6e48;
        if (DAT_1469e6e48 == (undefined *)0x0) {
          puVar8 = &DAT_1469e6e40;
        }
        iVar15 = *(int *)(puVar8 + (longlong)(int)(iStack_54 + local_58 & DAT_1469e6e50 - 1U) * 4);
        while (iVar15 != -1) {
          lVar17 = (longlong)iVar15;
          if (*(longlong *)(DAT_1469e6e08 + lVar17 * 0x18) == CONCAT44(iStack_54,local_58)) {
            if (((iVar15 != -1) && (lVar17 = DAT_1469e6e08 + lVar17 * 0x18, lVar17 != 0)) &&
               ((lVar17 = *(longlong *)(lVar17 + 8), lVar17 != 0 &&
                (*(int *)(lVar17 + 0x1e4) == iStack_50)))) goto LAB_14170467f;
            break;
          }
          iVar15 = *(int *)(DAT_1469e6e08 + 0x10 + lVar17 * 0x18);
        }
      }
      lVar17 = 0;
LAB_14170467f:
      iVar15 = *(int *)(lVar17 + 0x240);
      *(int *)(lVar17 + 0x240) = iVar15 + 1;
      if (*(int *)(lVar17 + 0x244) < iVar15 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar17 + 0x238,iVar15);
      }
      *(undefined8 *)(*(longlong *)(lVar17 + 0x238) + (longlong)iVar15 * 8) = uVar13;
      TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
      ::FindId(lVar17 + 0x248,&local_88,uVar13);
      if ((int)local_88 == -1) {
        lVar16 = 0;
      }
      else {
        lVar16 = (longlong)(int)local_88 * 0x38 + *(longlong *)(lVar17 + 0x248);
      }
      lVar16 = *(longlong *)(lVar16 + 0x10);
      FUN_1416ec6a0(lVar17,0);
      puVar18 = puVar18 + 1;
      *(longlong *)(local_48 + 0x148) = *(longlong *)(local_48 + 0x148) + lVar16;
      param_1 = local_48;
      puVar19 = local_80;
    } while (puVar18 != local_40);
  }
  piVar2 = local_70;
  uVar11 = (ulonglong)(int)uStack_68;
  piVar14 = local_70 + uVar11 * 4;
  if (local_70 != piVar14) {
    lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    piVar12 = local_70;
LAB_141704760:
    if ((*(int *)(lVar17 + 0x38) < DAT_1469e6f40) &&
       (_Init_thread_header(&DAT_1469e6f40), DAT_1469e6f40 == -1)) {
      FUN_1416e39e0(&DAT_1469e6c60);
      atexit((_func_5014 *)&LAB_143e7c100);
      _Init_thread_footer(&DAT_1469e6f40);
    }
    local_58 = *piVar12;
    iStack_54 = piVar12[1];
    iStack_50 = piVar12[2];
    iStack_4c = piVar12[3];
    FUN_141705540(&DAT_1469e6c60,&local_58,0x7fffffff);
    if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
      uVar11 = (longlong)*(int *)(param_1 + 0x140) - 1;
      lVar16 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(param_1 + 0x138) == 0) {
        lVar16 = param_1 + 0x130;
      }
      iVar15 = *(int *)(lVar16 + ((longlong)
                                  ((int)((ulonglong)*(undefined8 *)piVar12 >> 0x20) +
                                  (int)*(undefined8 *)piVar12) & uVar11) * 4);
      if (iVar15 != -1) {
        lVar5 = *(longlong *)(param_1 + 0xf8);
        do {
          lVar9 = (longlong)iVar15;
          if (*(int *)(lVar5 + 8 + lVar9 * 0x18) == piVar12[2]) {
            uVar11 = (longlong)*(int *)(lVar5 + 0x14 + lVar9 * 0x18) & uVar11;
            puVar10 = (undefined4 *)(lVar16 + uVar11 * 4);
            iVar7 = *(int *)(lVar16 + uVar11 * 4);
            if (iVar7 != -1) goto LAB_141704817;
            goto LAB_14170483a;
          }
          iVar15 = *(int *)(lVar5 + 0x10 + lVar9 * 0x18);
        } while (iVar15 != -1);
      }
    }
    goto LAB_141704848;
  }
LAB_141704858:
  if ((int)uStack_78 == 0) {
    if ((int)uVar11 == 0) {
      uVar13 = 0;
      goto LAB_14170488a;
    }
  }
  else {
    FUN_1416ec420(param_1,CONCAT71((int7)(uVar11 >> 8),DAT_1464b4424 <= (int)uStack_78));
  }
  uVar13 = 1;
LAB_14170488a:
  if (piVar2 != (int *)0x0) {
    FMemory::Free(piVar2);
  }
  if (puVar19 != (undefined8 *)0x0) {
    FMemory::Free(puVar19);
  }
  return uVar13;
  while( true ) {
    lVar16 = (longlong)iVar7 * 3 + 2;
    iVar7 = *(int *)(lVar5 + lVar16 * 8);
    puVar10 = (undefined4 *)(lVar5 + lVar16 * 8);
    if (iVar7 == -1) break;
LAB_141704817:
    if (iVar7 == iVar15) {
      *puVar10 = *(undefined4 *)(lVar5 + lVar9 * 0x18 + 0x10);
      break;
    }
  }
LAB_14170483a:
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized((longlong *)(param_1 + 0xf8),iVar15,1);
LAB_141704848:
  piVar12 = piVar12 + 4;
  if (piVar12 == piVar14) goto code_r0x000141704855;
  goto LAB_141704760;
code_r0x000141704855:
  uVar11 = uStack_68 & 0xffffffff;
  goto LAB_141704858;
}



// FUNCTION 141704950 FUN_141704950 body=2335 status=ok
// SIG undefined FUN_141704950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_141704950(longlong param_1,char param_2,undefined8 param_3,float param_4,char *param_5,
                 longlong param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  double dVar6;
  char cVar7;
  BOOL BVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  int local_res8;
  float local_res20 [2];
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70 [7];
  
  local_res8 = 2;
  local_res20[0] = param_4;
  QueryPerformanceCounter(&local_a0);
  dVar6 = (double)local_a0.QuadPart * DAT_1468b02f8 + 16777216.0;
  BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  if (BVar8 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x170);
  BVar8 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar8 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar16 = *(int *)(param_1 + 0x80);
  plVar1 = (longlong *)(param_1 + 0x100);
  if (iVar16 != 0) {
    iVar9 = *(int *)(param_1 + 0x108);
    if (*(int *)(param_1 + 0x10c) < iVar9 + iVar16) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
      iVar9 = *(int *)(param_1 + 0x108);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + (longlong)iVar9 * 8),*(void **)(param_1 + 0x78),
               (longlong)iVar16 << 3);
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + iVar16;
  }
  TMap<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,0>_>
  ::Append<FDefaultSetAllocator>(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x84)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x78);
  }
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x88);
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  if (((DAT_1469e689c == '\0') || (DAT_1468c21ab == '\0')) || (DAT_1464a8210 != 2)) {
LAB_141704b91:
    *param_5 = 0 < *(int *)(param_1 + 0x108);
    iVar16 = *(int *)(param_1 + 0x108);
    while (0 < iVar16) {
      LOCK();
      bVar18 = *(int *)(param_1 + 0x74) == 0;
      if (bVar18) {
        *(int *)(param_1 + 0x74) = 0;
      }
      UNLOCK();
      if (!bVar18) break;
      lVar3 = *(longlong *)*plVar1;
      LOCK();
      bVar18 = *(int *)(lVar3 + 0x98) == 0;
      if (bVar18) {
        *(int *)(lVar3 + 0x98) = 0;
      }
      UNLOCK();
      if (!bVar18) {
        local_res8 = 1;
        break;
      }
      local_res8 = FUN_141700b20(lVar3,dVar6,param_2,local_res20);
      if (local_res8 != 2) break;
      QueryPerformanceCounter(&local_90);
      dVar20 = (double)local_90.QuadPart * DAT_1468b02f8;
      BVar8 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar8 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      iVar16 = *(int *)(param_1 + 0x108);
      if (iVar16 + -1 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)*plVar1,(void *)(*plVar1 + 8),(longlong)(iVar16 + -1) << 3);
        iVar16 = *(int *)(param_1 + 0x108);
      }
      *(int *)(param_1 + 0x108) = iVar16 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      plVar14 = (longlong *)*plVar1;
      plVar11 = plVar14 + *(int *)(param_1 + 0x108);
      if (plVar14 != plVar11) {
        do {
          if (*(longlong *)(*plVar14 + 0x18) == *(longlong *)(lVar3 + 0x18)) break;
          plVar14 = plVar14 + 1;
        } while (plVar14 != plVar11);
      }
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      Remove(param_1 + 0x120,*(undefined8 *)(lVar3 + 0x18));
      uVar15 = 0;
      if ((*(int *)(lVar3 + 0x158) < 2) && (*(longlong *)(lVar3 + 0x50) != 0)) {
        *(undefined8 *)(*(longlong *)(lVar3 + 0x50) + 800) = 0;
        FUN_141736700(*(longlong *)(lVar3 + 0x50) + 0x200);
        FUN_141733120(*(undefined8 *)(lVar3 + 0x50));
        uVar12 = FUN_1417555a0();
        FLinkerManager::RemoveLinker(uVar12,*(undefined8 *)(lVar3 + 0x50));
        *(undefined8 *)(lVar3 + 0x50) = 0;
      }
      plVar11 = *(longlong **)(lVar3 + 0x128);
      uVar17 = (longlong)*(int *)(lVar3 + 0x130) & 0x1fffffffffffffff;
      if (plVar11 + *(int *)(lVar3 + 0x130) < plVar11) {
        uVar17 = uVar15;
      }
      if (uVar17 != 0) {
        do {
          lVar4 = *plVar11;
          if (*(longlong *)(lVar4 + 0xa0) != 0) {
            if (DAT_1468c21ab == '\0') {
              cVar7 = FLinkerLoad::HasAnyObjectsPendingLoad(lVar4);
              if (cVar7 == '\0') {
                uVar12 = FUN_1417555a0();
                FUN_14175f2c0(uVar12,*(undefined8 *)(lVar4 + 0xa0));
              }
            }
            else {
              FLinkerLoad::FindExistingLinkerForPackage();
            }
          }
          plVar11 = plVar11 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar17);
      }
      LeaveCriticalSection(lpCriticalSection);
      LOCK();
      piVar2 = (int *)(param_1 + 0x2b4);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 + -1 < 0) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x12d1,
                   L"ExistingAsyncPackagesCounter is negative, this means we loaded more packages then requested so there must be a bug in async loading code."
                  );
        FDebug::AssertFailed
                  (&DAT_144cf0b3b,"Unknown",0x12d1,
                   L"ExistingAsyncPackagesCounter is negative, this means we loaded more packages then requested so there must be a bug in async loading code."
                  );
      }
      FAsyncPackage::CallCompletionCallbacks(lVar3,0,*(char *)(lVar3 + 0xcb) == '\0');
      plVar11 = (longlong *)(param_1 + 0x110);
      plVar14 = (longlong *)*plVar11;
      iVar16 = *(int *)(param_1 + 0x118);
      for (plVar13 = plVar14; plVar13 != plVar14 + iVar16; plVar13 = plVar13 + 1) {
        if (*plVar13 == lVar3) {
          if ((int)((longlong)plVar13 - (longlong)plVar14 >> 3) != -1) goto LAB_141704e3d;
          break;
        }
      }
      *(int *)(param_1 + 0x118) = iVar16 + 1;
      if (*(int *)(param_1 + 0x11c) < iVar16 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11);
      }
      *(longlong *)(*plVar11 + (longlong)iVar16 * 8) = lVar3;
LAB_141704e3d:
      FAsyncPackage::MarkRequestIDsAsComplete(lVar3);
      if (param_2 != '\0') {
        QueryPerformanceCounter(&local_88);
        _DAT_1464b48b8 = (double)local_88.QuadPart * DAT_1468b02f8 + 16777216.0;
        dVar19 = _DAT_1464b48b8 - dVar6;
        if (((((double)local_res20[0] < dVar19) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar6)
            ) && (((double)DAT_1464b441c < dVar19 &&
                  ((double)(DAT_1464b4418 * local_res20[0]) < dVar19)))) {
          DAT_1464b48b0 = dVar6;
        }
        if ((double)local_res20[0] >= dVar19) goto LAB_141704eeb;
LAB_141704f8c:
        QueryPerformanceCounter(&local_78);
        DAT_1469e68b0 = DAT_1469e68b0 + ((double)local_78.QuadPart * DAT_1468b02f8 - dVar20);
        break;
      }
LAB_141704eeb:
      cVar7 = IsGarbageCollectionWaiting();
      if ((cVar7 != '\0') ||
         ((param_6 != 0 && (cVar7 = FAsyncLoadingThread::ContainsRequestID(param_1), cVar7 == '\0'))
         )) goto LAB_141704f8c;
      QueryPerformanceCounter(&local_80);
      DAT_1469e68b0 = DAT_1469e68b0 + ((double)local_80.QuadPart * DAT_1468b02f8 - dVar20);
      iVar16 = *(int *)(param_1 + 0x108);
    }
    uVar15 = 0;
    if ((*param_5 == '\0') && (*(int *)(param_1 + 0x118) < 1)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    *param_5 = cVar7;
    if ((local_res8 != 0) && (uVar17 = uVar15, 0 < *(int *)(param_1 + 0x118))) {
      do {
        iVar16 = (int)uVar17;
        puVar5 = *(undefined8 **)(uVar15 + *(longlong *)(param_1 + 0x110));
        LOCK();
        bVar18 = *(int *)(puVar5 + 0x13) == 0;
        if (bVar18) {
          *(int *)(puVar5 + 0x13) = 0;
        }
        UNLOCK();
        if ((bVar18) && (*(int *)(puVar5 + 0x2b) < 2)) {
          puVar5[0x1b] = 0;
          puVar5[0x1c] = L"CreateClusters";
          if (*(int *)(puVar5 + 0x18) < *(int *)(puVar5 + 0x28)) {
            do {
              LOCK();
              bVar18 = *(int *)(puVar5[0x3b] + 0x74) == 0;
              if (bVar18) {
                *(int *)(puVar5[0x3b] + 0x74) = 0;
              }
              UNLOCK();
              if (!bVar18) break;
              if (param_2 != '\0') {
                QueryPerformanceCounter(local_70);
                _DAT_1464b48b8 = (double)local_70[0].QuadPart * DAT_1468b02f8 + 16777216.0;
                dVar20 = _DAT_1464b48b8 - dVar6;
                if (((((double)local_res20[0] < dVar20) && (DAT_1469e68bc != 0)) &&
                    (DAT_1464b48b0 != dVar6)) &&
                   (((double)DAT_1464b441c < dVar20 &&
                    ((double)(DAT_1464b4418 * local_res20[0]) < dVar20)))) {
                  DAT_1464b48b0 = dVar6;
                }
                if ((double)local_res20[0] < dVar20) break;
              }
              cVar7 = IsGarbageCollectionWaiting();
              if (cVar7 != '\0') break;
              iVar9 = *(int *)(puVar5 + 0x18);
              *(int *)(puVar5 + 0x18) = iVar9 + 1;
              plVar1 = *(longlong **)(puVar5[0x27] + (longlong)iVar9 * 8);
              puVar5[0x1b] = plVar1;
              (**(code **)(*plVar1 + 0x28))();
            } while (*(int *)(puVar5 + 0x18) < *(int *)(puVar5 + 0x28));
          }
          bVar18 = false;
          if (*(int *)((longlong)puVar5 + 0xbc) == *(int *)(puVar5 + 0x22)) {
            *(undefined4 *)((longlong)puVar5 + 0xbc) = 0;
            *(undefined4 *)(puVar5 + 0x28) = 0;
            if ((*(int *)((longlong)puVar5 + 0x144) < 0) &&
               (*(int *)((longlong)puVar5 + 0x144) != 0)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo();
            }
            bVar18 = true;
          }
          puVar5[0x1b] = 0;
          if (!bVar18) {
            return 0;
          }
          iVar9 = *(int *)(param_1 + 0x118);
          iVar10 = (iVar9 - iVar16) + -1;
          if (0 < iVar10) {
            iVar10 = 1;
          }
          if (iVar10 != 0) {
            lVar3 = *(longlong *)(param_1 + 0x110);
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar3 + (longlong)iVar16 * 8),
                       (void *)(lVar3 + (longlong)(iVar9 - iVar10) * 8),(longlong)iVar10 << 3);
            iVar9 = *(int *)(param_1 + 0x118);
          }
          *(int *)(param_1 + 0x118) = iVar9 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x110));
          iVar16 = iVar16 + -1;
          uVar15 = uVar15 - 8;
          (**(code **)*puVar5)(puVar5);
        }
        uVar15 = uVar15 + 8;
        uVar17 = (ulonglong)(iVar16 + 1U);
      } while ((int)(iVar16 + 1U) < *(int *)(param_1 + 0x118));
    }
    if (local_res8 == 2) {
      local_res8 = 2 - (uint)(*(int *)(param_1 + 0x118) != 0);
    }
  }
  else {
    plVar11 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar11 + 0x30))(plVar11);
    if (param_2 == '\0') {
LAB_141704b79:
      cVar7 = IsGarbageCollectionWaiting();
      if (cVar7 == '\0') goto LAB_141704b91;
    }
    else {
      QueryPerformanceCounter(&local_98);
      _DAT_1464b48b8 = (double)local_98.QuadPart * DAT_1468b02f8 + 16777216.0;
      dVar20 = _DAT_1464b48b8 - dVar6;
      if ((((double)local_res20[0] < dVar20) && (DAT_1469e68bc != 0)) &&
         ((DAT_1464b48b0 != dVar6 &&
          (((double)DAT_1464b441c < dVar20 && ((double)(DAT_1464b4418 * local_res20[0]) < dVar20))))
         )) {
        DAT_1464b48b0 = dVar6;
      }
      if ((double)local_res20[0] >= dVar20) goto LAB_141704b79;
    }
    local_res8 = 0;
  }
  return local_res8;
}



// FUNCTION 141705270 FUN_141705270 body=35 status=ok
// SIG undefined FUN_141705270(void)

void FUN_141705270(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014170528b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x150))
              ((longlong *)*param_1,lVar1,*(ulonglong *)(lVar1 + 0x38) >> 0x23 & 0xffffffffffffff01)
    ;
    return;
  }
  return;
}



// FUNCTION 1417052a0 QueryRootContentPaths body=141 status=ok
// SIG undefined QueryRootContentPaths(void)

void FPackageName::QueryRootContentPaths(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1416f87e0();
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  FString::FString((longlong)iVar1 * 0x10 + *param_1,lVar2 + 0x10);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  FString::FString((longlong)iVar1 * 0x10 + *param_1,lVar2 + 0x20);
  TArray<FString,FDefaultAllocator>::Append<FString,FDefaultAllocator>(param_1,lVar2 + 0x60);
  return;
}



// FUNCTION 141705330 FUN_141705330 body=515 status=ok
// SIG undefined FUN_141705330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141705330(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_f0;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e6fa8) {
    _Init_thread_header(&DAT_1469e6fa8);
    if (DAT_1469e6fa8 == -1) {
      DAT_1469e6fa4 = CheckForFileOpenLogCommandLine();
      _Init_thread_footer(&DAT_1469e6fa8);
    }
  }
  local_120 = 0;
  local_128 = 0;
  FAsyncPackage::AddNode(param_2,&local_110,0,0);
  local_110 = 0;
  uStack_108 = 0;
  if (param_2 != 0) {
    local_110 = *(undefined8 *)(param_2 + 0x18);
    uStack_108 = *(undefined4 *)(param_2 + 0x1e4);
  }
  if (DAT_1469e6898 == 0) {
    local_94 = *(undefined4 *)(param_2 + 0x1e4);
  }
  else {
    local_94 = FUN_1416f9b90(0x7fffffff);
  }
  local_b8 = (longlong *)0x0;
  local_a8 = 0;
  local_f0 = param_1;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_d8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f4d0b0;
    puVar1[1] = local_110;
    puVar1[2] = CONCAT44(uStack_104,uStack_108);
    puVar1[3] = local_f0;
  }
  local_8c = *(int *)(param_1 + 0x2c0) + 1;
  local_e8[0] = &LAB_1416eb900;
  local_98 = *(undefined4 *)(param_2 + 0x44);
  *(int *)(param_1 + 0x2c0) = local_8c;
  local_90 = param_3;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,local_e8);
  TArray<FAsyncLoadEvent,FDefaultAllocator>::HeapPush(param_1 + 0x2c8,&local_98,local_118);
  if (local_48 != 0) {
    plVar2 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar2 = local_58;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    plVar2 = local_d8;
    if (local_b8 != (longlong *)0x0) {
      plVar2 = local_b8;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141705540 FUN_141705540 body=581 status=ok
// SIG undefined FUN_141705540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141705540(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  undefined8 local_110;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  longlong local_f8;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  int local_8c;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_108 = (int)*param_2;
  iStack_104 = *(int *)((longlong)param_2 + 4);
  iStack_100 = (int)param_2[1];
  iStack_fc = *(int *)((longlong)param_2 + 0xc);
  local_110 = 0;
  if (((*param_2 != 0) && (iStack_100 != 0)) &&
     (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc))) {
    lVar3 = *(longlong *)(param_1 + 0x1e8);
    if (*(longlong *)(param_1 + 0x1e8) == 0) {
      lVar3 = param_1 + 0x1e0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)(iStack_104 + local_108) &
                             (longlong)*(int *)(param_1 + 0x1f0) - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x1a8);
      do {
        lVar5 = (longlong)iVar2;
        if (*(longlong *)(lVar3 + lVar5 * 0x18) == *param_2) {
          if (iVar2 == -1) {
            return;
          }
          lVar3 = lVar3 + lVar5 * 0x18;
          if (lVar3 == 0) {
            return;
          }
          lVar3 = *(longlong *)(lVar3 + 8);
          if (lVar3 == 0) {
            return;
          }
          local_94 = *(int *)(lVar3 + 0x1e4);
          if (local_94 != iStack_100) {
            return;
          }
          if (DAT_1469e6898 != 0) {
            local_94 = FUN_1416f9b90(0x7fffffff);
          }
          local_b8 = (longlong *)0x0;
          local_a8 = 0;
          local_f8 = param_1;
          puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_d8);
          if (puVar4 != (undefined8 *)0x0) {
            lVar5 = *param_2;
            lVar1 = param_2[1];
            *puVar4 = &PTR_FUN_143f4d0b0;
            puVar4[1] = lVar5;
            puVar4[2] = lVar1;
            puVar4[3] = local_f8;
          }
          local_8c = *(int *)(param_1 + 0x2c0) + 1;
          local_e8[0] = &LAB_1416eb9b0;
          local_98 = *(undefined4 *)(lVar3 + 0x44);
          *(int *)(param_1 + 0x2c0) = local_8c;
          local_90 = param_3;
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,local_e8);
          TArray<FAsyncLoadEvent,FDefaultAllocator>::HeapPush(param_1 + 0x2c8,&local_98,local_118);
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
          if (local_a8 != 0) {
            plVar6 = local_d8;
            if (local_b8 != (longlong *)0x0) {
              plVar6 = local_b8;
            }
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x10))(plVar6,0);
            }
          }
          if (local_b8 == (longlong *)0x0) {
            return;
          }
          FMemory::Free();
          return;
        }
        iVar2 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 141705790 FUN_141705790 body=405 status=ok
// SIG undefined FUN_141705790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141705790(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_e0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_100 = 0;
  uStack_f8 = 0;
  if (param_2 != 0) {
    local_100 = *(undefined8 *)(param_2 + 0x18);
    uStack_f8 = *(undefined4 *)(param_2 + 0x1e4);
  }
  if (DAT_1469e6898 == 0) {
    local_84 = *(undefined4 *)(param_2 + 0x1e4);
  }
  else {
    local_84 = FUN_1416f9b90(0x7fffffff);
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  local_e0 = param_1;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f4d0b0;
    puVar1[1] = local_100;
    puVar1[2] = CONCAT44(uStack_f4,uStack_f8);
    puVar1[3] = local_e0;
  }
  local_7c = *(int *)(param_1 + 0x2c0) + 1;
  local_d8[0] = &LAB_1416eb9a0;
  local_88 = *(undefined4 *)(param_2 + 0x44);
  *(int *)(param_1 + 0x2c0) = local_7c;
  local_80 = param_3;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,local_d8);
  TArray<FAsyncLoadEvent,FDefaultAllocator>::HeapPush(param_1 + 0x2c8,&local_88,local_108);
  if (local_38 != 0) {
    plVar2 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar2 = local_48;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar2 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar2 = local_a8;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141705930 FUN_141705930 body=405 status=ok
// SIG undefined FUN_141705930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141705930(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_e0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_100 = 0;
  uStack_f8 = 0;
  if (param_2 != 0) {
    local_100 = *(undefined8 *)(param_2 + 0x18);
    uStack_f8 = *(undefined4 *)(param_2 + 0x1e4);
  }
  if (DAT_1469e6898 == 0) {
    local_84 = *(undefined4 *)(param_2 + 0x1e4);
  }
  else {
    local_84 = FUN_1416f9b90(0x7fffffff);
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  local_e0 = param_1;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f4d0b0;
    puVar1[1] = local_100;
    puVar1[2] = CONCAT44(uStack_f4,uStack_f8);
    puVar1[3] = local_e0;
  }
  local_7c = *(int *)(param_1 + 0x2c0) + 1;
  local_d8[0] = &LAB_1416eb9d0;
  local_88 = *(undefined4 *)(param_2 + 0x44);
  *(int *)(param_1 + 0x2c0) = local_7c;
  local_80 = param_3;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,local_d8);
  TArray<FAsyncLoadEvent,FDefaultAllocator>::HeapPush(param_1 + 0x2c8,&local_88,local_108);
  if (local_38 != 0) {
    plVar2 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar2 = local_48;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar2 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar2 = local_a8;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141705ad0 FUN_141705ad0 body=706 status=ok
// SIG undefined FUN_141705ad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141705ad0(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  uint local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_160 [2];
  longlong local_150 [3];
  int local_138;
  undefined4 local_134;
  undefined4 local_130;
  longlong local_128 [3];
  longlong local_110;
  longlong local_f8;
  longlong local_a8;
  undefined1 local_98 [16];
  longlong local_88;
  longlong local_68;
  int local_40;
  longlong local_38;
  
  uVar1 = DAT_1468b5d98;
  uStack_1a4 = (undefined4)_DAT_1468b5d90;
  uStack_1a0 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
  local_198 = local_198 & 0xffffff00;
  local_190 = 0;
  local_188 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,0);
  lVar5 = local_190;
  FGenericPlatformString::Memcpy(local_190,L"Uncategorized",0x1c);
  plVar2 = (longlong *)(param_2 + 0xe);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = uStack_1a4;
  param_2[7] = uStack_1a0;
  param_2[8] = uVar1;
  param_2[9] = uStack_1a4;
  *(ulonglong *)(param_2 + 10) = CONCAT44(uVar1,uStack_1a0);
  param_2[0xc] = local_198;
  if (plVar2 != &local_190) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = lVar5;
    param_2[0x10] = (undefined4)local_188;
    param_2[0x11] = local_188._4_4_;
    lVar5 = 0;
  }
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 50000;
  *(undefined1 *)(param_2 + 0x16) = 1;
  plVar2 = (longlong *)(param_2 + 0x1a);
  *(undefined1 *)(param_2 + 0x18) = 0;
  if (plVar2 != local_160) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = 0;
    *(undefined8 *)(param_2 + 0x1c) = 0;
  }
  plVar2 = (longlong *)(param_2 + 0x1e);
  if (plVar2 != local_150) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  param_2[0x22] = 0;
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  plVar2 = (longlong *)FUN_1415c3d50();
  if (*(int *)(param_1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_1;
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2,puVar4,0);
  uVar3 = 0;
  if (plVar2 != (longlong *)0x0) {
    FPackageFileSummary::FPackageFileSummary(&local_138);
    operator<<(plVar2,&local_138);
    if (local_138 == -0x61d57c3f) {
      if (local_40 != 0) {
        (**(code **)(*plVar2 + 0xa8))(plVar2,(longlong)local_40);
        (**(code **)(*plVar2 + 0x1a8))(plVar2,local_134);
        (**(code **)(*plVar2 + 0x1b8))(plVar2,local_98);
        (**(code **)(*plVar2 + 0x1b0))(plVar2,local_130);
        (**(code **)(*plVar2 + 0x128))(plVar2,local_128);
        FUN_1416e71d0(plVar2,param_2);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
    if (local_110 != 0) {
      FMemory::Free();
    }
    if (local_128[0] != 0) {
      FMemory::Free();
    }
    (**(code **)*plVar2)(plVar2,1);
  }
  return uVar3;
}



// FUNCTION 141705da0 FUN_141705da0 body=801 status=ok
// SIG undefined FUN_141705da0(void)

void FUN_141705da0(longlong param_1,char param_2,longlong param_3)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined **local_1e8 [5];
  byte local_1c0;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  char local_140;
  undefined1 local_138 [4];
  int local_134;
  int local_118;
  
  if ((param_2 == '\0') && (-1 < (char)*(byte *)(param_1 + 0x28))) {
    if (*(int *)(param_1 + 0x110) == 0) {
      *(undefined4 *)(param_1 + 0x110) = 1;
      lVar6 = -1;
      if (*(char *)(param_3 + 0x73) == '\0') {
        lVar6 = *(longlong *)(param_3 + 0x10);
      }
      *(longlong *)(param_1 + 0xd0) = lVar6;
      if (lVar6 < 0x20) {
        *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
      }
      else if (DAT_1468c21ab == '\0') {
        lVar3 = FUN_1416f86a0();
        if (*(int *)(lVar3 + 0x208) <= lVar6) {
          lVar6 = (longlong)*(int *)(lVar3 + 0x208);
        }
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))
                          (*(longlong **)(param_1 + 0x90),0,lVar6,3,param_1 + 0x120,0);
        *(undefined8 *)(param_1 + 0xa8) = uVar4;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))
                          (*(longlong **)(param_1 + 0x90),0,lVar6,0,0,0);
        *(undefined8 *)(param_1 + 0xb0) = uVar4;
      }
      else {
        BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6a70);
        if (BVar2 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6a70);
        }
        *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xd0);
        FUN_141702230(param_1,0,*(undefined8 *)(param_1 + 0xd0),1);
        *(undefined4 *)(param_1 + 0x110) = 2;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6a70);
      }
    }
    else if (*(int *)(param_1 + 0x110) == 1) {
      lVar6 = *(longlong *)(param_3 + 0x10);
      if (((*(char *)(param_3 + 0x73) == '\0') || (lVar6 == 0)) &&
         (*(undefined8 *)(param_3 + 0x10) = 0, lVar6 != 0)) {
        lVar3 = *(longlong *)(param_1 + 0xd0);
        lVar5 = FUN_1416f86a0();
        iVar1 = *(int *)(lVar5 + 0x208);
        FArchive::FArchive(local_1e8);
        local_150 = 0;
        local_148 = lVar3;
        if (iVar1 <= lVar3) {
          local_148 = (longlong)iVar1;
        }
        local_1e8[0] = &PTR__scalar_deleting_destructor__143f600f0;
        local_140 = '\0';
        local_158 = lVar6;
        FArchive::SetIsLoading(local_1e8,1);
        FArchive::SetIsPersistent(local_1e8,1);
        local_1e8[0] = &PTR__scalar_deleting_destructor__143f60308;
        FPackageFileSummary::FPackageFileSummary(local_138);
        operator<<(local_1e8,local_138);
        if ((((local_1c0 & 0x80) == 0) && ((longlong)local_118 <= *(longlong *)(param_1 + 0xd0))) &&
           (0xd5 < local_134)) {
          BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6a70);
          if (BVar2 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6a70);
          }
          *(longlong *)(param_1 + 0x100) = (longlong)local_118;
          *(undefined1 *)(param_1 + 0x114) = 0;
          FUN_141702230(param_1,0,(longlong)local_118,1);
          *(undefined4 *)(param_1 + 0x110) = 2;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6a70);
        }
        else {
          *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
        }
        FMemory::Free(lVar6);
        FPackageFileSummary::~FPackageFileSummary(local_138);
        local_1e8[0] = &PTR__scalar_deleting_destructor__143f600f0;
        if (local_140 != '\0') {
          FMemory::Free(local_158);
          local_158 = 0;
        }
        FArchive::~FArchive(local_1e8);
      }
      else {
        *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
        *(undefined4 *)(param_1 + 0x110) = 2;
      }
    }
    return;
  }
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
  return;
}



// FUNCTION 1417060d0 ReadyToStartReadingHeader body=213 status=ok
// SIG undefined ReadyToStartReadingHeader(void)

undefined1
FArchiveAsync2::ReadyToStartReadingHeader
          (longlong param_1,char param_2,char param_3,double param_4,float param_5)

{
  char cVar1;
  undefined1 uVar2;
  LARGE_INTEGER local_res8;
  
  if (*(double *)(param_1 + 0x188) == 0.0) {
    QueryPerformanceCounter(&local_res8);
    *(double *)(param_1 + 0x188) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  }
  if ((param_2 == '\0') || (1 < *(uint *)(param_1 + 0x110))) {
LAB_14170618e:
    uVar2 = 1;
  }
  else {
    if (param_3 != '\0') {
      QueryPerformanceCounter(&local_res8);
      if (0.00101 <=
          param_5 - (float)(((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - param_4)) {
        cVar1 = WaitForIntialPhases(param_1);
        if (cVar1 != '\0') goto LAB_14170618e;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1417061b0 FUN_1417061b0 body=1049 status=ok
// SIG undefined FUN_1417061b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte FUN_1417061b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  code *pcVar6;
  longlong lVar7;
  code *_Src;
  uint uVar8;
  code *pcVar9;
  uint uVar10;
  code *pcVar11;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined1 local_138 [16];
  code *local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 local_110;
  uint local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [32];
  undefined1 local_b8 [64];
  longlong local_78;
  undefined4 local_70;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  pcVar11 = (code *)0x0;
  lVar4 = *(longlong *)(param_2 + 200);
  uVar10 = 0;
  local_158 = 0;
  uVar8 = *(uint *)(lVar4 + 8);
  *(uint *)(lVar4 + 8) = uVar8 | 0x20000;
  local_108 = uVar8 >> 0x11 & 0xffffff01;
  *(undefined8 *)(param_2 + 0xf8) = param_3;
  local_100 = 0;
  local_f8 = 0;
  local_118 = param_1;
  local_f0 = param_2;
  local_e8 = param_3;
  FUN_1417a5b30(param_2,&local_100,CONCAT71((int7)((ulonglong)lVar4 >> 8),1),0);
  param_1 = param_1 + 0x200;
  pcVar6 = pcVar11;
  pcVar9 = pcVar11;
  if (0 < (int)local_f8) {
    do {
      FUN_141740c00(param_1,*(undefined8 *)(pcVar6 + local_100));
      uVar8 = (int)pcVar9 + 1;
      pcVar6 = pcVar6 + 8;
      pcVar9 = (code *)(ulonglong)uVar8;
    } while ((int)uVar8 < (int)local_f8);
  }
  if ((~(byte)(*(uint *)(*(longlong *)(param_2 + 200) + 8) >> 0x11) & 1) == 0) {
    FUN_141740c00(param_1,param_2);
    FUN_141726e60(param_2,1);
    FUN_141740c00(param_1,param_3);
    lVar4 = *(longlong *)(param_2 + 0x30);
    local_128 = (code *)0x0;
    uStack_120._4_4_ = 0;
    pcVar6 = pcVar11;
    pcVar9 = pcVar11;
    _Src = pcVar11;
    lVar7 = local_118;
    for (; (local_118 = lVar7, lVar4 != 0 &&
           (uVar10 = (uint)pcVar6, *(longlong *)(lVar4 + 200) != 0));
        lVar4 = *(longlong *)(lVar4 + 0x30)) {
      lVar7 = (longlong)(int)uVar10;
      uStack_120._0_4_ = uVar10 + 1;
      if ((int)pcVar9 < (int)(uint)uStack_120) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_128,pcVar6);
        pcVar9 = (code *)(ulonglong)uStack_120._4_4_;
        _Src = local_128;
      }
      uVar10 = (uint)uStack_120;
      pcVar6 = (code *)(ulonglong)(uint)uStack_120;
      _guard_xfg_dispatch_icall_nop(_Src + 8,_Src,lVar7 << 3);
      *(longlong *)_Src = lVar4;
      lVar7 = local_118;
    }
    pcVar6 = (code *)((longlong)(int)uVar10 & 0x1fffffffffffffff);
    if (_Src + (longlong)(int)uVar10 * 8 < _Src) {
      pcVar6 = (code *)0x0;
    }
    pcVar9 = _Src;
    if (pcVar6 != (code *)0x0) {
      do {
        iVar5 = 0;
        lVar4 = *(longlong *)_Src;
        lVar1 = *(longlong *)(lVar4 + 200);
        if ((lVar1 != 0) && (uVar8 = *(uint *)(lVar1 + 8), (uVar8 >> 0x11 & 1) != 0)) {
          if ((uVar8 >> 0x15 & 1) == 0) {
            *(uint *)(lVar1 + 8) = uVar8 | 0x400;
            lVar3 = FUN_1417a53c0(lVar1);
            if (lVar3 != 0) {
              FUN_141740c00(lVar3 + 0x200,lVar1);
            }
          }
          local_148 = 1;
          local_150 = 1;
          local_158 = CONCAT31(local_158._1_3_,1);
          local_118 = 0;
          local_110 = 0;
          FReferenceFinder::FReferenceFinder(local_d8,&local_118,lVar1,0);
          FReferenceFinder::FindReferences(local_d8,lVar1,0);
          for (; (-1 < iVar5 && (iVar5 < (int)local_110)); iVar5 = iVar5 + 1) {
            lVar1 = *(longlong *)(local_118 + (longlong)iVar5 * 8);
            if ((*(uint *)(lVar1 + 8) >> 0x15 & 1) == 0) {
              *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | 0x400;
              lVar3 = FUN_1417a53c0(lVar1);
              if (lVar3 != 0) {
                FUN_141740c00(lVar3 + 0x200,lVar1);
                FPreloadMembersHelper::PreloadMembers(lVar1);
              }
            }
          }
          local_70 = 0;
          if (local_78 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (local_b8);
          FReferenceCollector::~FReferenceCollector(local_d8);
          if (local_118 != 0) {
            FMemory::Free();
          }
          FUN_1417061b0(lVar7,lVar4,*(undefined8 *)(lVar4 + 0xf8));
        }
        _Src = _Src + 8;
        pcVar11 = pcVar11 + 1;
        pcVar9 = local_128;
      } while (pcVar11 != pcVar6);
    }
    param_2 = local_f0;
    plVar2 = *(longlong **)(local_f0 + 200);
    if ((plVar2 != (longlong *)0x0) && ((*(uint *)(plVar2 + 1) >> 0x15 & 1) == 0)) {
      *(uint *)(plVar2 + 1) = *(uint *)(plVar2 + 1) | 0x400;
      lVar4 = FUN_1417a53c0(plVar2);
      if (lVar4 != 0) {
        FUN_141740c00(lVar4 + 0x200,plVar2);
      }
    }
    uStack_120 = local_138;
    local_138[0] = 0;
    local_128 = FUN_1406ddef0;
    lVar4 = FUN_1415d8310(&local_128,&DAT_14622e6dc);
    lVar4 = (**(code **)(*plVar2 + 0x228))(plVar2,param_2,local_e8,lVar4 + 0x38);
    if (lVar4 != 0) {
      *(uint *)(plVar2 + 1) = *(uint *)(plVar2 + 1) & 0xfffdffff;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffebff;
    }
    if (pcVar9 != (code *)0x0) {
      FMemory::Free(pcVar9);
    }
  }
  uVar8 = *(uint *)(*(longlong *)(param_2 + 200) + 8);
  if ((char)local_108 == '\0') {
    *(uint *)(*(longlong *)(param_2 + 200) + 8) = uVar8 & 0xfffdffff;
  }
  if (local_100 != 0) {
    FMemory::Free();
  }
  return ~(byte)(uVar8 >> 0x11) & 1;
}



// FUNCTION 1417065d0 RegisterBlueprintWarning body=94 status=ok
// SIG undefined RegisterBlueprintWarning(void)

void FBlueprintSupport::RegisterBlueprintWarning(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  iVar1 = DAT_1469e6938;
  lVar3 = (longlong)DAT_1469e6938;
  DAT_1469e6938 = DAT_1469e6938 + 1;
  if (DAT_1469e693c < DAT_1469e6938) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(&DAT_1469e6930,iVar1);
  }
  puVar2 = (undefined8 *)(lVar3 * 0x20 + DAT_1469e6930);
  *puVar2 = *param_1;
  FText::FText(puVar2 + 1,param_1 + 1);
  return;
}



// FUNCTION 141706630 FUN_141706630 body=905 status=ok
// SIG undefined FUN_141706630(void)

void FUN_141706630(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *local_80;
  uint local_78;
  uint local_74;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined1 local_40;
  
  if (DAT_1468c21ab == '\0') {
    local_50 = UObjectProperty::GetPrivateStaticClass();
    local_58 = 1;
    local_60 = 0;
    local_40 = 0;
    local_48 = 1;
    local_44 = 1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_60,0);
    lVar5 = local_60;
    FUN_1416e2c80(local_60,param_1,1,1,0);
    *(undefined8 *)(lVar5 + 0x18) = param_2;
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined4 *)(lVar5 + 0x30) = 0;
    FPropertyValueIterator::IterateToNext(&local_60);
    while( true ) {
      puVar11 = (undefined8 *)0x0;
      if ((int)local_58 < 1) break;
      lVar5 = (longlong)((int)local_58 + -1) * 0x38 + local_60;
      lVar8 = (longlong)*(int *)(lVar5 + 0x30);
      lVar5 = *(longlong *)(lVar5 + 0x20);
      plVar1 = *(longlong **)(lVar5 + 8 + lVar8 * 0x10);
      uVar2 = *(undefined8 *)(lVar5 + lVar8 * 0x10);
      puVar17 = (undefined8 *)*plVar1;
      if (puVar17 == (undefined8 *)0x0) {
LAB_14170674f:
        puVar14 = puVar11;
      }
      else {
        lVar5 = ULinkerPlaceholderExportObject::GetPrivateStaticClass();
        if ((*(int *)(puVar17[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(puVar17[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
            != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        puVar14 = puVar17;
        if (!bVar3) goto LAB_14170674f;
      }
      if (puVar17 == (undefined8 *)0x0) {
LAB_141706791:
        puVar17 = puVar11;
      }
      else {
        lVar5 = ULinkerPlaceholderClass::GetPrivateStaticClass();
        if ((*(int *)(puVar17[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(puVar17[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
            != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_141706791;
      }
      if ((puVar14 != (undefined8 *)0x0) || (puVar17 != (undefined8 *)0x0)) {
        local_70 = 0;
        local_68 = 0;
        FPropertyValueIterator::GetPropertyChain(&local_60,&local_70);
        local_80 = (undefined8 *)0x0;
        local_74 = 0;
        lVar5 = (longlong)((int)local_68 + -1);
        puVar12 = puVar11;
        puVar16 = puVar11;
        if (-1 < (int)local_68 + -1) {
          do {
            lVar8 = *(longlong *)(local_70 + lVar5 * 8);
            if (lVar8 != 0) {
              lVar6 = UStructProperty::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                lVar6 = operator_new(8);
                if (lVar6 == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = FUN_14174d520(lVar6,lVar8);
                }
                iVar13 = (int)puVar11;
                local_78 = iVar13 + 1;
                if ((int)puVar16 < (int)local_78) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_80,puVar11);
                  puVar16 = (undefined8 *)(ulonglong)local_74;
                  puVar12 = local_80;
                }
                puVar11 = (undefined8 *)(ulonglong)local_78;
                puVar12[iVar13] = uVar7;
              }
            }
            lVar5 = lVar5 + -1;
          } while (-1 < lVar5);
        }
        puVar9 = puVar14 + 5;
        if (puVar14 == (undefined8 *)0x0) {
          puVar9 = puVar17 + 0x40;
        }
        FUN_14174fcc0(puVar9,uVar2,plVar1);
        iVar13 = (int)puVar11 + -1;
        uVar15 = (uint)puVar16;
        if (-1 < iVar13) {
          lVar8 = (longlong)iVar13 << 3;
          lVar5 = (longlong)(int)puVar11 << 3;
          do {
            FUN_14174daa0(*(undefined8 *)((longlong)puVar12 + lVar8));
            FMemory::Free(*(undefined8 *)((longlong)puVar12 + lVar8));
            iVar4 = ((int)puVar11 - iVar13) + -1;
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((undefined8 *)((longlong)puVar12 + lVar8),
                         (void *)((longlong)puVar12 + lVar5),(longlong)iVar4 << 3);
            }
            local_78 = (int)puVar11 - 1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_80);
            puVar11 = (undefined8 *)(ulonglong)local_78;
            lVar5 = lVar5 + -8;
            lVar8 = lVar8 + -8;
            iVar13 = iVar13 + -1;
            puVar12 = local_80;
            uVar15 = local_74;
          } while (-1 < iVar13);
        }
        uVar10 = (uint)puVar11;
        puVar17 = puVar12;
        while (uVar10 != 0) {
          FUN_14174daa0(*puVar17);
          FMemory::Free(*puVar17);
          puVar17 = puVar17 + 1;
          uVar10 = (int)puVar11 - 1;
          puVar11 = (undefined8 *)(ulonglong)uVar10;
        }
        local_78 = 0;
        if (uVar15 != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_80,0);
          puVar12 = local_80;
        }
        if (puVar12 != (undefined8 *)0x0) {
          FMemory::Free(puVar12);
        }
        if (local_70 != 0) {
          FMemory::Free();
        }
      }
      FPropertyValueIterator::IterateToNext(&local_60);
    }
    TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>::
    ~TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>(&local_60);
  }
  return;
}



// FUNCTION 1417069c0 RegisterMountPoint body=45 status=ok
// SIG undefined RegisterMountPoint(void)

void FPackageName::RegisterMountPoint(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1416f87e0();
  FUN_1416faf70(uVar1,param_1,param_2);
  return;
}



// FUNCTION 1417069f0 RegisterShortPackageNamesForUObjectModules body=601 status=ok
// SIG undefined RegisterShortPackageNamesForUObjectModules(void)

void FPackageName::RegisterShortPackageNamesForUObjectModules(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  int iVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined2 *local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  short *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined1 *local_50;
  longlong local_48 [2];
  
  psVar10 = (short *)0x0;
  local_78 = 0;
  local_70 = 0;
  uVar2 = FUN_14168dc80();
  FModuleManager::FindModules(uVar2,&DAT_144cf05dc,&local_78);
  psVar9 = psVar10;
  do {
    iVar12 = (int)psVar9;
    if ((iVar12 < 0) || ((int)local_70 <= iVar12)) {
      if (local_78 != 0) {
        FMemory::Free();
      }
      return;
    }
    puVar3 = (undefined8 *)FName::ToString(local_78 + (longlong)iVar12 * 8,local_48);
    if (*(int *)(puVar3 + 1) == 0) {
      psVar9 = &DAT_143f3eda8;
    }
    else {
      psVar9 = (short *)*puVar3;
    }
    local_68 = (short *)0x0;
    local_5c = 0;
    psVar11 = psVar10;
    iVar8 = 0;
    if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
      lVar4 = -1;
      do {
        lVar1 = lVar4 + 1;
        lVar4 = lVar4 + 1;
      } while (psVar9[lVar1] != 0);
      local_60 = (int)lVar4 + 1;
      lVar4 = (longlong)local_60;
      if (0 < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      }
      iVar8 = local_60;
      psVar11 = local_68;
      FGenericPlatformString::Memcpy(local_68,psVar9,lVar4 * 2);
    }
    for (psVar7 = psVar11; psVar7 != psVar11 + iVar8; psVar7 = psVar7 + 1) {
      if (*psVar7 == 0x2f) {
        iVar8 = (int)((longlong)psVar7 - (longlong)psVar11 >> 1);
        goto LAB_141706b14;
      }
    }
    iVar8 = -1;
LAB_141706b14:
    if (psVar11 != (short *)0x0) {
      FMemory::Free(psVar11);
    }
    if (iVar8 == -1) {
      FString::PrintfImpl(&local_88,L"/Script/%s",psVar9);
LAB_141706b92:
      puVar5 = local_88;
      if ((int)local_80 == 0) goto LAB_141706b9c;
    }
    else {
      local_80 = 0;
      local_88 = (undefined2 *)0x0;
      if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
        lVar4 = -1;
        do {
          lVar1 = lVar4 + 1;
          lVar4 = lVar4 + 1;
        } while (psVar9[lVar1] != 0);
        uVar6 = (int)lVar4 + 1;
        local_80 = (ulonglong)uVar6;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        }
        FGenericPlatformString::Memcpy(local_88,psVar9,(longlong)(int)uVar6 * 2);
        goto LAB_141706b92;
      }
LAB_141706b9c:
      puVar5 = &DAT_143f3eda8;
    }
    FName::FName(local_res10,puVar5,1);
    local_50 = local_res10;
    local_58 = local_78 + (longlong)iVar12 * 8;
    TSet<TTuple<FName,FPtr>,TDefaultMapHashableKeyFuncs<FName,FPtr,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FPtr_const_&>_>(&DAT_1464b45b0,local_res8,&local_58,0);
    if (local_88 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    psVar9 = (short *)(ulonglong)(iVar12 + 1);
  } while( true );
}



// FUNCTION 141706c50 Rehash body=640 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_141706d8f;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar8 < iStack_44) {
LAB_141706d8f:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x160 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x15c) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 0x2b) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141706ed0 Rehash body=535 status=ok
// SIG undefined Rehash(void)

void TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::Rehash
               (longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
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
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar9) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar9;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
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
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar9 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_14170700f;
        uVar9 = puVar13[lVar6 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
LAB_14170700f:
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
        lVar6 = *param_1 + (longlong)iStack_1c * 0x18;
        uVar4 = *(undefined8 *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar9 = (int)((ulonglong)uVar4 >> 0x20) + (int)uVar4 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x14) = uVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x10) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1417070f0 FUN_1417070f0 body=566 status=ok
// SIG undefined FUN_1417070f0(void)

void FUN_1417070f0(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
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
  
  lVar1 = param_1 + 0x130;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    uVar5 = FMemory::Realloc(*(longlong *)(param_1 + 0x150),0,0);
    *(undefined8 *)(param_1 + 0x150) = uVar5;
  }
  puVar2 = (uint *)(param_1 + 0x158);
  uVar7 = *puVar2;
  if (uVar7 != 0) {
    FUN_1406f49a0(lVar1,0);
    if (0 < (int)uVar7) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar7;
      do {
        uVar8 = (longlong)(int)*puVar2 - 1U & uVar10;
        lVar9 = *(longlong *)(param_1 + 0x150);
        if (*(longlong *)(param_1 + 0x150) == 0) {
          lVar9 = lVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)(lVar9 + uVar8 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uStack_54 = 1;
    puStack_28 = (uint *)(param_1 + 0x110);
    local_58 = 0;
    iVar3 = *(int *)(param_1 + 0x120);
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = *(uint **)(param_1 + 0x118);
      if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar7 = *puVar13;
      local_58 = 0;
      iStack_40 = 0;
      while (uVar7 == 0) {
        lVar9 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar6 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar6;
        if (bVar4) goto LAB_14170723f;
        uVar7 = puVar13[lVar9 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
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
      if (iVar3 < iStack_44) {
LAB_14170723f:
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
        lVar9 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar9 = param_1;
        }
        puVar11 = (undefined8 *)(lVar9 + (longlong)iStack_1c * 0x10);
        uVar7 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & *puVar2 - 1;
        *(uint *)((longlong)puVar11 + 0xc) = uVar7;
        lVar9 = *(longlong *)(param_1 + 0x150);
        if (*(longlong *)(param_1 + 0x150) == 0) {
          lVar9 = lVar1;
        }
        *(undefined4 *)(puVar11 + 1) =
             *(undefined4 *)(lVar9 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar7) * 4);
        lVar9 = *(longlong *)(param_1 + 0x150);
        if (*(longlong *)(param_1 + 0x150) == 0) {
          lVar9 = lVar1;
        }
        *(int *)(lVar9 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar7) * 4) = iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        FUN_1406e9690(&local_30);
      } while (iStack_1c < (int)puStack_28[4]);
    }
  }
  return;
}



// FUNCTION 141707330 Remove body=227 status=ok
// SIG undefined Remove(void)

undefined8
TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Remove(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar3 = *(int *)((longlong)plVar6 + ((longlong)param_2 & uVar7) * 4);
  if (iVar3 != -1) {
    lVar5 = *param_1;
    do {
      lVar8 = (longlong)iVar3;
      if (*(int *)(lVar5 + lVar8 * 0xc) == param_2) {
        uVar7 = (longlong)*(int *)(lVar5 + 8 + lVar8 * 0xc) & uVar7;
        puVar1 = (undefined4 *)((longlong)plVar6 + uVar7 * 4);
        iVar4 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x0001417073c2;
      }
      iVar3 = *(int *)(lVar5 + 4 + lVar8 * 0xc);
    } while (iVar3 != -1);
  }
  return 0;
joined_r0x0001417073c2:
  if (iVar4 == -1) {
LAB_1417073ea:
    TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar3,1);
    return 1;
  }
  if (iVar4 == iVar3) {
    *puVar1 = *(undefined4 *)(lVar5 + lVar8 * 0xc + 4);
    goto LAB_1417073ea;
  }
  lVar2 = (longlong)iVar4 * 3 + 1;
  iVar4 = *(int *)(lVar5 + lVar2 * 4);
  puVar1 = (undefined4 *)(lVar5 + lVar2 * 4);
  goto joined_r0x0001417073c2;
}



// FUNCTION 141707420 Remove body=404 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar8 = (int)(param_2 >> 4);
  uVar7 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
  uVar6 = (longlong)(int)param_1[9] - 1;
  uVar5 = -(uVar7 + iVar8) ^ uVar7 >> 0xd;
  uVar9 = (iVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar5 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 10;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar10 +
                  (((longlong)(int)((uVar5 - uVar7) - uVar9) ^ (ulonglong)(uVar7 >> 0xf)) & uVar6) *
                  4);
  if (iVar8 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar8 * 0x60;
      if (*(ulonglong *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar8 * 0x60;
        uVar6 = (longlong)*(int *)(lVar3 + 0x5c + lVar2) & uVar6;
        piVar4 = (int *)((longlong)plVar10 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar10 + uVar6 * 4);
        goto joined_r0x00014170753c;
      }
      iVar8 = *(int *)(lVar3 + 0x58 + lVar2);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x00014170753c:
  if (iVar1 == -1) {
LAB_141707563:
    lVar3 = *param_1 + lVar3;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar3 + 8);
    TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar8,1);
    return 1;
  }
  if (iVar1 == iVar8) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x58);
    goto LAB_141707563;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x60 + 0x58 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x00014170753c;
}



// FUNCTION 1417075c0 Remove body=383 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar8 = (int)(param_2 >> 4);
  uVar7 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
  uVar6 = (longlong)(int)param_1[9] - 1;
  uVar5 = -(uVar7 + iVar8) ^ uVar7 >> 0xd;
  uVar9 = (iVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar5 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 10;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar10 +
                  (((longlong)(int)((uVar5 - uVar7) - uVar9) ^ (ulonglong)(uVar7 >> 0xf)) & uVar6) *
                  4);
  if (iVar8 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar8 * 0x38;
      if (*(ulonglong *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar8 * 0x38;
        uVar6 = (longlong)*(int *)(lVar3 + 0x34 + lVar2) & uVar6;
        piVar4 = (int *)((longlong)plVar10 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar10 + uVar6 * 4);
        goto joined_r0x0001417076d3;
      }
      iVar8 = *(int *)(lVar3 + 0x30 + lVar2);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x0001417076d3:
  if (iVar1 == -1) {
LAB_141707700:
    if (*(longlong *)(lVar3 + 0x20 + *param_1) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar8,1);
    return 1;
  }
  if (iVar1 == iVar8) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x30);
    goto LAB_141707700;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x38 + 0x30 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x0001417076d3;
}



// FUNCTION 141707740 Remove body=419 status=ok
// SIG undefined Remove(void)

int TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
    ::Remove(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  iVar10 = 0;
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar12 = (int)(param_2 >> 4);
  uVar11 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
  uVar6 = -(uVar11 + iVar12) ^ uVar11 >> 0xd;
  uVar13 = (iVar12 - uVar11) - uVar6 ^ uVar6 >> 0xc;
  uVar11 = (uVar11 - uVar13) - uVar6 ^ uVar13 << 0x10;
  uVar6 = (uVar6 - uVar11) - uVar13 ^ uVar11 >> 5;
  uVar13 = (uVar13 - uVar11) - uVar6 ^ uVar6 >> 3;
  uVar11 = (uVar11 - uVar13) - uVar6 ^ uVar13 << 10;
  uVar8 = ((longlong)(int)((uVar6 - uVar11) - uVar13) ^ (ulonglong)(uVar11 >> 0xf)) &
          (longlong)((int)param_1[9] + -1);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  iVar12 = *(int *)((longlong)plVar5 + uVar8 * 4);
  piVar9 = (int *)((longlong)plVar5 + uVar8 * 4);
  do {
    if (iVar12 == -1) {
      return iVar10;
    }
    lVar4 = *param_1;
    lVar1 = lVar4 + (longlong)iVar12 * 0x18;
    if (*(ulonglong *)(lVar4 + (longlong)iVar12 * 0x18) == param_2) {
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        lVar7 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar1 + 0x14));
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = param_1 + 7;
        }
        puVar2 = (undefined4 *)((longlong)plVar5 + lVar7 * 4);
        iVar3 = *(int *)((longlong)plVar5 + lVar7 * 4);
        while (iVar3 != -1) {
          if (iVar3 == iVar12) {
            *puVar2 = *(undefined4 *)(lVar1 + 0x10);
            break;
          }
          lVar7 = (longlong)iVar3 * 3 + 2;
          puVar2 = (undefined4 *)(lVar4 + lVar7 * 8);
          iVar3 = *(int *)(lVar4 + lVar7 * 8);
        }
      }
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar12,1);
      iVar10 = iVar10 + 1;
    }
    else {
      piVar9 = (int *)(lVar1 + 0x10);
    }
    iVar12 = *piVar9;
  } while( true );
}



// FUNCTION 1417078f0 Remove body=396 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar8 = (int)(param_2 >> 4);
  uVar7 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
  uVar6 = (longlong)(int)param_1[9] - 1;
  uVar5 = -(uVar7 + iVar8) ^ uVar7 >> 0xd;
  uVar9 = (iVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar5 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 10;
  plVar11 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar11 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar11 +
                  (((longlong)(int)((uVar5 - uVar7) - uVar9) ^ (ulonglong)(uVar7 >> 0xf)) & uVar6) *
                  4);
  if (iVar8 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar8 * 0x160;
      if (*(ulonglong *)(lVar3 + lVar2) == param_2) {
        lVar10 = (longlong)iVar8 * 0x160;
        lVar3 = lVar10 + lVar2;
        uVar6 = (longlong)*(int *)(lVar3 + 0x15c) & uVar6;
        piVar4 = (int *)((longlong)plVar11 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar11 + uVar6 * 4);
        goto joined_r0x000141707a0e;
      }
      iVar8 = *(int *)(lVar3 + 0x158 + lVar2);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x000141707a0e:
  if (iVar1 == -1) {
LAB_141707a40:
    FUN_141781fc0(*param_1 + 8 + lVar10);
    TSparseArray<TSetElement<TTuple<UObject_*,FObjectInitializer>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar8,1);
    return 1;
  }
  if (iVar1 == iVar8) {
    *piVar4 = *(int *)(lVar3 + 0x158);
    goto LAB_141707a40;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x160 + 0x158 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x000141707a0e;
}



// FUNCTION 141707a80 Remove body=386 status=ok
// SIG undefined Remove(void)

int TSet<TTuple<FName,FEventLoadNodePtr>,TDefaultMapHashableKeyFuncs<FName,FEventLoadNodePtr,1>,FDefaultSetAllocator>
    ::Remove(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  
  iVar9 = 0;
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar8 = (longlong)(int)((int)((ulonglong)param_2 >> 0x20) + (int)param_2 & (int)param_1[9] - 1U);
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  piVar13 = (int *)((longlong)plVar6 + lVar8 * 4);
  iVar7 = *(int *)((longlong)plVar6 + lVar8 * 4);
  if (iVar7 == -1) {
    return 0;
  }
  do {
    lVar3 = *param_1;
    lVar10 = (longlong)iVar7 * 0x20;
    lVar8 = lVar10 + lVar3;
    if (*(longlong *)(lVar10 + lVar3) == param_2) {
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        lVar11 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar8 + 0x1c));
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        piVar12 = (int *)((longlong)plVar6 + lVar11 * 4);
        iVar2 = *(int *)((longlong)plVar6 + lVar11 * 4);
        while (iVar2 != -1) {
          if (iVar2 == iVar7) {
            *piVar12 = *(int *)(lVar8 + 0x18);
            break;
          }
          piVar12 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
          iVar2 = *piVar12;
        }
      }
      bVar4 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar7;
      }
      lVar8 = *param_1;
      *(undefined4 *)(lVar8 + lVar10) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar8 + 4 + lVar10) = uVar5;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar6 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar7 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      iVar9 = iVar9 + 1;
    }
    else {
      piVar13 = (int *)(lVar8 + 0x18);
    }
    iVar7 = *piVar13;
    if (iVar7 == -1) {
      return iVar9;
    }
  } while( true );
}



// FUNCTION 141707c10 Remove body=166 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FName,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar6 = (longlong)param_2 * 0x20;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0x1c + lVar2));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar6 + 0x18 + lVar2);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x18 + (longlong)iVar1 * 0x20);
      iVar1 = *piVar5;
    }
  }
  if (*(longlong *)((longlong)param_2 * 0x20 + *param_1 + 8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 141707cc0 Remove body=170 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar4 = *param_1;
    lVar1 = lVar4 + (longlong)param_2 * 0x28;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar1 + 0x24));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
    iVar3 = *(int *)((longlong)plVar5 + lVar6 * 4);
    while (iVar3 != -1) {
      if (iVar3 == param_2) {
        *puVar2 = *(undefined4 *)(lVar1 + 0x20);
        break;
      }
      lVar6 = (longlong)iVar3 * 5 + 4;
      puVar2 = (undefined4 *)(lVar4 + lVar6 * 8);
      iVar3 = *(int *)(lVar4 + lVar6 * 8);
    }
  }
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
            (*param_1 + (longlong)param_2 * 0x28);
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 141707d70 Remove body=471 status=ok
// SIG undefined Remove(void)

undefined8
TSet<FUnsafeWeakAsyncPackagePtr,DefaultKeyFuncs<FUnsafeWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  iVar12 = (int)(*param_2 >> 4);
  uVar10 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
  uVar7 = -(uVar10 + iVar12) ^ uVar10 >> 0xd;
  uVar13 = (iVar12 - uVar10) - uVar7 ^ uVar7 >> 0xc;
  uVar10 = (uVar10 - uVar13) - uVar7 ^ uVar13 << 0x10;
  uVar7 = (uVar7 - uVar10) - uVar13 ^ uVar10 >> 5;
  uVar13 = (uVar13 - uVar10) - uVar7 ^ uVar7 >> 3;
  uVar10 = (uVar10 - uVar13) - uVar7 ^ uVar13 << 10;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  iVar12 = *(int *)((longlong)plVar9 +
                   (((longlong)(int)((uVar7 - uVar10) - uVar13) ^ (ulonglong)(uVar10 >> 0xf)) &
                   uVar8) * 4);
  if (iVar12 != -1) {
    lVar2 = *param_1;
    do {
      lVar11 = (longlong)iVar12;
      if (*(ulonglong *)(lVar2 + lVar11 * 0x10) == *param_2) {
        uVar8 = (longlong)*(int *)(lVar2 + 0xc + lVar11 * 0x10) & uVar8;
        piVar6 = (int *)((longlong)plVar9 + uVar8 * 4);
        iVar4 = *(int *)((longlong)plVar9 + uVar8 * 4);
        if (iVar4 != -1) goto LAB_141707ea0;
        goto LAB_141707ebf;
      }
      iVar12 = *(int *)(lVar2 + 8 + lVar11 * 0x10);
    } while (iVar12 != -1);
  }
  return 0;
  while( true ) {
    piVar6 = (int *)(lVar2 + 8 + (longlong)iVar4 * 0x10);
    iVar4 = *piVar6;
    if (iVar4 == -1) break;
LAB_141707ea0:
    if (iVar4 == iVar12) {
      *piVar6 = *(int *)(lVar2 + lVar11 * 0x10 + 8);
      break;
    }
  }
LAB_141707ebf:
  bVar3 = (byte)iVar12 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar12;
  }
  lVar2 = *param_1;
  uVar5 = 0xffffffff;
  *(undefined4 *)(lVar2 + lVar11 * 0x10) = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + 4 + lVar11 * 0x10) = uVar5;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = iVar12;
  plVar9 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
  return 1;
}



// FUNCTION 141707f50 RemoveAllNodes body=133 status=ok
// SIG undefined RemoveAllNodes(void)

void FAsyncPackage::RemoveAllNodes(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FEventLoadNodeArray::GetAddedNodes(param_1 + 0x4a8,&local_18,param_1);
  lVar1 = local_18;
  lVar3 = (longlong)(int)local_10 * 0x10 + local_18;
  for (lVar2 = local_18; lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
    FUN_1417082b0(&DAT_1464b4630,lVar2);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 141707fe0 RemoveAtSwapImpl body=243 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<FAsyncLoadEvent,FDefaultAllocator>::RemoveAtSwapImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)(*param_1 + 0x40 + (longlong)param_2 * 0x60);
    iVar4 = param_3;
    do {
      if ((int)plVar3[2] != 0) {
        plVar1 = (longlong *)*plVar3;
        if ((longlong *)*plVar3 == (longlong *)0x0) {
          plVar1 = plVar3 + -4;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0xc;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = (int)param_1[1];
    iVar2 = (iVar4 - param_2) - param_3;
    if (param_3 <= iVar2) {
      iVar2 = param_3;
    }
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x60),
                 (void *)((longlong)(iVar4 - iVar2) * 0x60 + *param_1),(longlong)iVar2 * 0x60);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 - param_3;
    if (param_4 != '\0') {
      TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1417080e0 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<UObject_*,FObjectInitializer>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0x160;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x160 + *param_1) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0x160;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1417081a0 FUN_1417081a0 body=271 status=ok
// SIG undefined FUN_1417081a0(void)

longlong * FUN_1417081a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar9 = 0;
  if ((param_1 != 0) && (((int)param_2 != 0 || ((int)((ulonglong)param_2 >> 0x20) != 0)))) {
    plVar5 = (longlong *)FUN_141799680(0,param_1,param_2,0,0,0,0);
    if (plVar5 != (longlong *)0x0) {
      lVar6 = GetTransientPackage();
      lVar2 = plVar5[2];
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xc0) != 0)) {
        plVar7 = (longlong *)UObject::GetPrivateStaticClass();
        plVar3 = *(longlong **)(lVar2 + 0xc0);
        if ((plVar3 != plVar7) && (lVar6 = plVar3[0x1f], lVar6 == 0)) {
          (**(code **)(*plVar3 + 0x368))(plVar3);
          lVar6 = plVar3[0x1f];
        }
      }
      (**(code **)(*plVar5 + 0x138))(plVar5,0,lVar6,0x35);
      iVar1 = *(int *)((longlong)plVar5 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar8 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar8;
        lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
      }
      *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 0x20000000;
    }
    return plVar5;
  }
  return (longlong *)0x0;
}



// FUNCTION 1417082b0 FUN_1417082b0 body=1108 status=ok
// SIG undefined FUN_1417082b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417082b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 (**ppauVar7) [16];
  int iVar8;
  int *piVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  longlong lVar18;
  longlong local_68;
  int local_60;
  int iStack_5c;
  undefined1 (*local_58) [16];
  undefined1 (*pauStack_50) [16];
  longlong local_48;
  undefined8 uStack_40;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_68 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e6f90) && (_Init_thread_header(&DAT_1469e6f90), DAT_1469e6f90 == -1))
  {
    DAT_1469e6f80 = (int *)0x0;
    _DAT_1469e6f88 = 0;
    atexit((_func_5014 *)&LAB_143e7c220);
    _Init_thread_footer(&DAT_1469e6f90);
  }
  lVar4 = local_48;
  local_58 = (undefined1 (*) [16])0x0;
  pauStack_50 = (undefined1 (*) [16])0x0;
  iVar10 = (int)uStack_40;
  iVar8 = (int)((ulonglong)uStack_40 >> 0x20);
  if (iVar10 == 0) {
    ppauVar7 = (undefined1 (**) [16])(local_48 + ((longlong)iVar8 * 3 + 0x95) * 8);
  }
  else {
    if (iVar10 < 0) {
      iVar6 = (*(int *)(local_48 + 0x508) - (iVar10 * 2 + 2)) + iVar8;
    }
    else {
      iVar6 = iVar8 + -3 + iVar10 * 3 + *(int *)(local_48 + 0x50c);
    }
    ppauVar7 = (undefined1 (**) [16])(*(longlong *)(local_48 + 0x4f0) + (longlong)iVar6 * 0x18);
  }
  pauStack_50._0_4_ = 0;
  if (&local_58 != ppauVar7) {
    local_58 = *ppauVar7;
    pauStack_50 = ppauVar7[1];
    *ppauVar7 = (undefined1 (*) [16])0x0;
    ppauVar7[1] = (undefined1 (*) [16])0x0;
  }
  pauVar3 = local_58;
  pauVar16 = local_58 + (int)pauStack_50;
  for (pauVar12 = local_58; pauVar12 != pauVar16; pauVar12 = pauVar12 + 1) {
    iVar6 = SUB164(*pauVar12,0xc);
    lVar17 = *(longlong *)*pauVar12;
    iVar5 = SUB164(*pauVar12,8);
    if (iVar5 == 0) {
      lVar17 = lVar17 + 0x4a8 + (longlong)iVar6 * 0x18;
    }
    else {
      if (iVar5 < 0) {
        iVar6 = (iVar6 - (iVar5 * 2 + 2)) + *(int *)(lVar17 + 0x508);
      }
      else {
        iVar6 = iVar6 + -3 + iVar5 * 3 + *(int *)(lVar17 + 0x50c);
      }
      lVar17 = *(longlong *)(lVar17 + 0x4f0) + (longlong)iVar6 * 0x18;
    }
    piVar9 = (int *)(lVar17 + 0x10);
    *piVar9 = *piVar9 + -1;
    if (*piVar9 == 0) {
      *(undefined1 *)(lVar17 + 0x14) = 1;
      uVar15 = _DAT_1469e6f88;
      lVar17 = (longlong)DAT_1469e6f88;
      iVar6 = DAT_1469e6f88 + 1;
      _DAT_1469e6f88 = CONCAT44(DAT_1469e6f8c,iVar6);
      if ((int)DAT_1469e6f8c < iVar6) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_1469e6f80,uVar15 & 0xffffffff);
      }
      DAT_1469e6f80[lVar17] = (int)((longlong)pauVar12 - (longlong)pauVar3 >> 4);
    }
    param_1 = local_68;
  }
  if (iVar10 == 0) {
    lVar17 = lVar4 + ((longlong)iVar8 * 3 + 0x95) * 8;
  }
  else {
    if (iVar10 < 0) {
      iVar6 = *(int *)(lVar4 + 0x508) - (iVar10 * 2 + 2);
    }
    else {
      iVar6 = (iVar10 + -1) * 3 + *(int *)(lVar4 + 0x50c);
    }
    lVar17 = *(longlong *)(lVar4 + 0x4f0) + (longlong)(iVar6 + iVar8) * 0x18;
  }
  *(undefined1 *)(lVar17 + 0x15) = 0;
  piVar9 = (int *)(lVar4 + 0x4fc);
  *piVar9 = *piVar9 + -1;
  if (*piVar9 == 0) {
    TSet<FUnsafeWeakAsyncPackagePtr,DefaultKeyFuncs<FUnsafeWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::Remove(param_1,&local_48);
    lVar17 = *(longlong *)(lVar4 + 0x4f0);
    if (lVar17 != 0) {
      lVar13 = *(longlong *)(lVar17 + -8);
      lVar18 = lVar17 + lVar13 * 0x18;
      lVar14 = 0;
      if (lVar13 != 0) {
        do {
          plVar1 = (longlong *)(lVar18 + -0x18);
          lVar18 = lVar18 + -0x18;
          lVar13 = lVar13 + -1;
          if (*plVar1 != 0) {
            FMemory::Free();
          }
        } while (lVar13 != 0);
        lVar14 = *(longlong *)(lVar17 + -8);
      }
      FMemory::operator_delete((longlong *)(lVar17 + -8),lVar14 * 0x18 + 8);
    }
    *(undefined8 *)(lVar4 + 0x4f0) = 0;
  }
  uVar15 = 0;
  if (iVar10 != 0) {
    local_60 = 0;
    local_68 = lVar4;
    if (uStack_40._4_4_ == 1) {
      iStack_5c = 2;
      lVar17 = lVar4 + 0x4d8;
    }
    else {
      if (uStack_40._4_4_ == 0) {
        iStack_5c = (-1 < iVar10) + 1;
      }
      else {
        iStack_5c = 1;
      }
      if (iVar10 < 0) {
        iVar8 = (iStack_5c - (iVar10 * 2 + 2)) + *(int *)(lVar4 + 0x508);
      }
      else {
        iVar8 = iStack_5c + iVar10 * 3 + *(int *)(lVar4 + 0x50c) + -3;
      }
      lVar17 = *(longlong *)(lVar4 + 0x4f0) + (longlong)iVar8 * 0x18;
      local_60 = iVar10;
    }
    piVar9 = (int *)(lVar17 + 0x10);
    *piVar9 = *piVar9 + -1;
    if (*piVar9 == 0) {
      *(undefined1 *)(lVar17 + 0x14) = 1;
      FUN_1416f7890(lVar4,&local_68);
    }
  }
  uVar11 = (ulonglong)((longlong)(DAT_1469e6f80 + DAT_1469e6f88) + (3 - (longlong)DAT_1469e6f80)) >>
           2;
  if (DAT_1469e6f80 + DAT_1469e6f88 < DAT_1469e6f80) {
    uVar11 = uVar15;
  }
  piVar9 = DAT_1469e6f80;
  if (uVar11 != 0) {
    do {
      FUN_1416f7890(*(undefined8 *)pauVar3[*piVar9],pauVar3 + *piVar9);
      uVar15 = uVar15 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar15 != uVar11);
  }
  uVar15 = _DAT_1469e6f88;
  uVar2 = DAT_1469e6f8c;
  _DAT_1469e6f88 = (ulonglong)DAT_1469e6f8c << 0x20;
  if (((longlong)uVar15 < 0) && (uVar2 != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_1469e6f80,0);
  }
  if (pauVar3 != (undefined1 (*) [16])0x0) {
    FMemory::Free(pauVar3);
  }
  return;
}



// FUNCTION 141708710 RemoveObject body=189 status=ok
// SIG undefined RemoveObject(void)

void UGCObjectReferencer::RemoveObject(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  plVar4 = plVar1;
  do {
    if (plVar4 == plVar1 + iVar6) {
LAB_1417087b3:
                    /* WARNING: Could not recover jumptable at 0x0001417087c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
      return;
    }
    if (*plVar4 == param_2) {
      iVar3 = (int)((longlong)plVar4 - (longlong)plVar1 >> 3);
      if (iVar3 != -1) {
        iVar5 = (iVar6 - iVar3) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    (plVar1 + iVar3,plVar1 + (iVar6 - iVar5),(longlong)iVar5 << 3);
          iVar6 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = iVar6 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
      }
      goto LAB_1417087b3;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}



// FUNCTION 1417087d0 FUN_1417087d0 body=215 status=ok
// SIG undefined FUN_1417087d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1417087d0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong in_RAX;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  
  if (param_1 != (longlong *)0x0) {
    lVar6 = GetTransientPackage();
    lVar3 = param_1[2];
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xc0) != 0)) {
      plVar7 = (longlong *)UObject::GetPrivateStaticClass();
      plVar4 = *(longlong **)(lVar3 + 0xc0);
      if ((plVar4 != plVar7) && (lVar6 = plVar4[0x1f], lVar6 == 0)) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        lVar6 = plVar4[0x1f];
      }
    }
    (**(code **)(*param_1 + 0x138))(param_1,0,lVar6,0x35);
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar8 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar8;
      lVar6 = (longlong)(int)((uVar5 & 0xffff) - uVar8);
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
      puVar1 = (uint *)(lVar3 + 8 + lVar6 * 0x18);
      *puVar1 = *puVar1 | 0x20000000;
      return lVar3 + lVar6 * 0x18;
    }
    in_RAX = 0;
    _DAT_00000008 = _DAT_00000008 | 0x20000000;
  }
  return in_RAX;
}



// FUNCTION 1417088b0 RemovePackage body=904 status=ok
// SIG undefined RemovePackage(void)

void FPackageLocalizationCultureCache::RemovePackage(LPCRITICAL_SECTION param_1,undefined8 *param_2)

{
  HANDLE *ppvVar1;
  LPCRITICAL_SECTION p_Var2;
  uint uVar3;
  char cVar4;
  BOOL BVar5;
  PRTL_CRITICAL_SECTION_DEBUG p_Var6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  HANDLE *ppvVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  WORD *pWVar18;
  int iVar19;
  bool bVar20;
  LPCRITICAL_SECTION local_res8;
  PRTL_CRITICAL_SECTION_DEBUG local_res20;
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  uint uStack_7c;
  undefined8 uStack_58;
  HANDLE *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_res8 = param_1;
  BVar5 = TryEnterCriticalSection(param_1);
  if (BVar5 == 0) {
    EnterCriticalSection(param_1);
  }
  cVar4 = FUN_1416fc210(param_2);
  if (cVar4 != '\0') {
    if (*(int *)(param_2 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*param_2;
    }
    FName::FName(&local_res20,puVar10);
    uStack_b4 = 1;
    p_Var2 = param_1 + 4;
    local_b8 = 0;
    uVar3 = *(uint *)&param_1[5].DebugInfo;
    ppvVar1 = &param_1[4].OwningThread;
    uStack_a4 = 0;
    iStack_a0 = 0;
    if (uVar3 != 0) {
      ppvVar12 = (HANDLE *)param_1[4].SpinCount;
      if ((HANDLE *)param_1[4].SpinCount == (HANDLE *)0x0) {
        ppvVar12 = ppvVar1;
      }
      uVar17 = *(uint *)ppvVar12;
      iStack_a0 = 0;
      local_b8 = 0;
      while (uVar17 == 0) {
        lVar11 = (longlong)local_b8;
        iStack_a0 = iStack_a0 + 0x20;
        iVar8 = local_b8 + 1;
        bVar20 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
        local_b8 = iVar8;
        if (bVar20) goto LAB_1417089ec;
        uVar17 = *(uint *)((longlong)ppvVar12 + lVar11 * 4 + 4);
      }
      uStack_b4 = -uVar17 & uVar17;
      iVar8 = 0x1f;
      if (uStack_b4 != 0) {
        for (; uStack_b4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_b4 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_a4 = (iStack_a0 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_a4) {
LAB_1417089ec:
        uStack_a4 = uVar3;
      }
    }
    uStack_7c = *(uint *)&param_1[5].DebugInfo;
    uStack_58 = CONCAT44(uStack_b4,local_b8);
    uStack_48 = CONCAT44(uStack_a4,0xffffffff);
    local_40 = CONCAT44(uStack_9c,iStack_a0);
    uVar17 = uStack_7c & 0xffffffe0;
    local_50 = ppvVar1;
    if (uStack_7c != uVar3) {
      ppvVar12 = (HANDLE *)param_1[4].SpinCount;
      if ((HANDLE *)param_1[4].SpinCount == (HANDLE *)0x0) {
        ppvVar12 = ppvVar1;
      }
      uVar9 = *(uint *)((longlong)ppvVar12 + (longlong)((int)uStack_7c >> 5) * 4) &
              -1 << ((byte)uStack_7c & 0x1f);
      iVar8 = (int)uStack_7c >> 5;
      while (uVar9 == 0) {
        uVar17 = uVar17 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_141708ab1;
        uVar9 = *(uint *)((longlong)ppvVar12 + (longlong)iVar8 * 4 + 4);
        iVar8 = iVar8 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_7c = (uVar17 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_7c) {
LAB_141708ab1:
        uStack_7c = uVar3;
      }
    }
    do {
      if ((uStack_48._4_4_ == uStack_7c) && (param_1 = local_res8, local_50 == ppvVar1))
      goto LAB_141708bf3;
      pWVar18 = &p_Var2->DebugInfo->Type + (longlong)(int)uStack_48._4_4_ * 0x10;
      iVar8 = *(int *)&((LIST_ENTRY *)(pWVar18 + 8))->Flink;
      lVar11 = (longlong)iVar8;
      if (iVar8 != 0) {
        iVar19 = 0;
        bVar20 = (*(_RTL_CRITICAL_SECTION **)(pWVar18 + 4))->DebugInfo != local_res20;
        p_Var6 = local_res20;
        lVar13 = 0;
        iVar15 = 0;
        do {
          lVar14 = lVar13 + 1;
          iVar16 = iVar15 + 1;
          if (lVar14 < lVar11) {
            ppvVar12 = (HANDLE *)
                       (&(*(_RTL_CRITICAL_SECTION **)(pWVar18 + 4))->LockCount + lVar13 * 2);
            do {
              if (bVar20 != (*ppvVar12 != p_Var6)) break;
              iVar16 = iVar16 + 1;
              lVar14 = lVar14 + 1;
              ppvVar12 = ppvVar12 + 1;
            } while (lVar14 < lVar11);
          }
          if (bVar20 != false) {
            if (iVar19 != iVar15) {
              ::_guard_xfg_dispatch_icall_nop
                        (&(*(_RTL_CRITICAL_SECTION **)(pWVar18 + 4))->DebugInfo + iVar19,
                         &(*(_RTL_CRITICAL_SECTION **)(pWVar18 + 4))->DebugInfo + iVar15,
                         (longlong)(iVar16 - iVar15) << 3);
              p_Var6 = local_res20;
            }
            iVar19 = iVar19 + (iVar16 - iVar15);
          }
          bVar20 = (bool)(bVar20 ^ 1);
          lVar13 = lVar14;
          iVar15 = iVar16;
        } while (lVar14 < lVar11);
        *(int *)&((LIST_ENTRY *)(pWVar18 + 8))->Flink = iVar19;
        if (0 < iVar8 - iVar19) goto LAB_141708bb5;
      }
      uStack_48 = CONCAT44(uStack_48._4_4_,(uint)uStack_48 & ~uStack_58._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
    } while( true );
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*param_2;
  }
  puVar7 = (undefined8 *)FName::FName(&local_res8,puVar10,1);
  TSet<TTuple<FName,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 4,*puVar7);
LAB_141708bf3:
                    /* WARNING: Could not recover jumptable at 0x000141708c01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
LAB_141708bb5:
  param_1 = local_res8;
  if (iVar19 == 0) {
    TSet<TTuple<FName,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Remove(p_Var2,*(undefined8 *)pWVar18);
    param_1 = local_res8;
  }
  goto LAB_141708bf3;
}



// FUNCTION 141708c40 RemoveRootSourcePath body=894 status=ok
// SIG undefined RemoveRootSourcePath(void)

void FPackageLocalizationCultureCache::RemoveRootSourcePath
               (LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  BOOL BVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  HANDLE *ppvVar11;
  int iVar12;
  undefined8 local_res8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint uStack_b0;
  int iStack_ac;
  undefined1 local_a8 [16];
  LPCRITICAL_SECTION local_98;
  char local_90;
  char cStack_8f;
  LPCRITICAL_SECTION local_88;
  undefined8 uStack_80;
  HANDLE *ppvStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  LPCRITICAL_SECTION local_58;
  undefined8 uStack_50;
  HANDLE *local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  LPCRITICAL_SECTION local_28;
  char local_20;
  char cStack_1f;
  
  BVar5 = TryEnterCriticalSection(param_1);
  if (BVar5 == 0) {
    EnterCriticalSection(param_1);
  }
  local_res8 = param_2;
  TArray<FString,FDefaultAllocator>::RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>
            (&param_1[1].LockSemaphore,&local_res8);
  iVar12 = 0;
  local_98 = param_1 + 2;
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 1;
  iVar10 = *(int *)&param_1[3].DebugInfo;
  ppvStack_78 = &param_1[2].OwningThread;
  local_b8._4_4_ = 0;
  uStack_b0 = 0;
  if (iVar10 != 0) {
    ppvVar11 = (HANDLE *)param_1[2].SpinCount;
    if ((HANDLE *)param_1[2].SpinCount == (HANDLE *)0x0) {
      ppvVar11 = ppvStack_78;
    }
    uVar6 = *(uint *)ppvVar11;
    uStack_b0 = iVar12;
    local_c8._0_4_ = iVar12;
    while (uVar6 == 0) {
      lVar9 = (longlong)(int)local_c8;
      uStack_b0 = uStack_b0 + 0x20;
      iVar8 = (int)local_c8 + 1;
      bVar1 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_c8;
      local_c8._0_4_ = iVar8;
      if (bVar1) goto LAB_141708d3d;
      uVar6 = *(uint *)((longlong)ppvVar11 + lVar9 * 4 + 4);
    }
    local_c8._4_4_ = -uVar6 & uVar6;
    iVar8 = 0x1f;
    if (local_c8._4_4_ != 0) {
      for (; local_c8._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (local_c8._4_4_ == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_b8._4_4_ = (uStack_b0 - iVar8) + 0x1f;
    if (iVar10 < local_b8._4_4_) {
LAB_141708d3d:
      local_b8._4_4_ = iVar10;
    }
  }
  uStack_70 = CONCAT44(local_b8._4_4_,0xffffffff);
  auVar2._8_4_ = uStack_b0;
  auVar2._0_8_ = uStack_70;
  auVar2._12_4_ = iStack_ac;
  local_60._0_4_ = SUB84(local_98,0);
  local_60._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  uStack_80._0_4_ = (int)local_c8;
  uStack_80._4_4_ = local_c8._4_4_;
  local_90 = '\0';
  cStack_8f = '\0';
  uStack_b0 = 0xffffffff;
  iStack_ac = local_b8._4_4_;
  uStack_c0._0_4_ = (int)local_c8;
  uStack_c0._4_4_ = local_c8._4_4_;
  uStack_68 = auVar2._8_8_;
  local_a8._8_4_ = (undefined4)local_60;
  local_a8._0_8_ = uStack_68;
  local_a8._12_4_ = local_60._4_4_;
  bVar1 = local_b8._4_4_ < *(int *)&param_1[3].DebugInfo;
  local_c8 = local_98;
  local_88 = local_98;
  local_b8 = ppvStack_78;
  local_60 = local_98;
  if (bVar1) {
    do {
      iVar10 = iStack_ac;
      cVar4 = FString::StartsWith(&local_c8->DebugInfo->Type + (longlong)iStack_ac * 0x14,param_2,1)
      ;
      if (cVar4 != '\0') {
        TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
        ::Remove(local_a8._8_8_,iVar10);
        local_90 = '\x01';
      }
      uStack_b0 = uStack_b0 & ~uStack_c0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
    } while (iStack_ac < *(int *)(local_b8 + 3));
    if ((local_90 != '\0') && (cStack_8f != '\0')) {
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,local_98->LockCount - local_98[1].RecursionCount,1);
    }
  }
  local_88 = param_1 + 4;
  iVar10 = *(int *)&param_1[5].DebugInfo;
  uStack_c0 = &param_1[4].OwningThread;
  local_c8 = (LPCRITICAL_SECTION)0x100000000;
  local_b8._4_4_ = 0;
  uStack_b0 = 0;
  if (iVar10 != 0) {
    ppvVar11 = (HANDLE *)param_1[4].SpinCount;
    if ((HANDLE *)param_1[4].SpinCount == (HANDLE *)0x0) {
      ppvVar11 = uStack_c0;
    }
    uVar6 = *(uint *)ppvVar11;
    uStack_b0 = iVar12;
    while (uVar6 == 0) {
      uStack_b0 = uStack_b0 + 0x20;
      local_c8._4_4_ = (uint)((ulonglong)local_c8 >> 0x20);
      local_c8 = (LPCRITICAL_SECTION)CONCAT44(local_c8._4_4_,iVar12 + 1);
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar12) goto LAB_141708ea9;
      uVar6 = *(uint *)((longlong)ppvVar11 + (longlong)iVar12 * 4 + 4);
      iVar12 = iVar12 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    local_c8 = (LPCRITICAL_SECTION)CONCAT44(uVar6,(int)local_c8);
    if (uVar6 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    local_b8._4_4_ = (uStack_b0 - iVar12) + 0x1f;
    if (iVar10 < local_b8._4_4_) {
LAB_141708ea9:
      local_b8._4_4_ = iVar10;
    }
  }
  local_b8._0_4_ = 0xffffffff;
  uStack_70 = CONCAT44(local_b8._4_4_,0xffffffff);
  auVar3._8_4_ = uStack_b0;
  auVar3._0_8_ = uStack_70;
  auVar3._12_4_ = iStack_ac;
  local_60._0_4_ = SUB84(local_88,0);
  local_60._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_68 = auVar3._8_8_;
  uStack_80 = (longlong)local_c8;
  local_20 = '\0';
  cStack_1f = '\0';
  uStack_50 = (longlong)local_c8;
  local_38._8_4_ = (undefined4)local_60;
  local_38._0_8_ = uStack_68;
  local_38._12_4_ = local_60._4_4_;
  iVar10 = local_b8._4_4_;
  ppvStack_78 = uStack_c0;
  local_58 = local_88;
  local_48 = uStack_c0;
  uStack_40 = uStack_70;
  local_28 = local_88;
  local_60 = local_88;
  if (local_b8._4_4_ < *(int *)&param_1[5].DebugInfo) {
    do {
      uVar7 = FName::ToString(&local_58->DebugInfo->Type + (longlong)iVar10 * 0x10,&local_c8);
      cVar4 = FString::StartsWith(uVar7,param_2,1);
      if (local_c8 != (LPCRITICAL_SECTION)0x0) {
        FMemory::Free();
      }
      if (cVar4 != '\0') {
        TSet<TTuple<FName,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>
        ::Remove(local_38._8_8_,iVar10);
        local_20 = '\x01';
      }
      uStack_40 = CONCAT44(uStack_40._4_4_,(uint)uStack_40 & ~uStack_50._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      iVar10 = uStack_40._4_4_;
    } while (uStack_40._4_4_ < *(int *)(local_48 + 3));
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_28,local_28->LockCount - local_28[1].RecursionCount,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141708fb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 141708fc0 FUN_141708fc0 body=568 status=ok
// SIG undefined FUN_141708fc0(void)

undefined8 FUN_141708fc0(longlong param_1,longlong param_2,short *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 local_res20 [8];
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  longlong *local_28;
  longlong **local_20;
  
  plVar4 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  cVar1 = FUN_14170fb20();
  if ((cVar1 != '\0') && ((*(uint *)(param_1 + 0x290) & 0x100000) != 0)) {
    FName::FName(&local_40,param_3,1);
    if (*(int *)(param_1 + 0x7a8) != *(int *)(param_1 + 0x7d4)) {
      lVar3 = *(longlong *)(param_1 + 0x7e0);
      if (*(longlong *)(param_1 + 0x7e0) == 0) {
        lVar3 = param_1 + 0x7d8;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)local_40 >> 0x20) + (int)local_40) &
                               (longlong)*(int *)(param_1 + 0x7e8) - 1U) * 4);
      if (iVar2 != -1) {
        lVar3 = *(longlong *)(param_1 + 0x7a0);
        do {
          plVar7 = (longlong *)(lVar3 + (longlong)iVar2 * 0x18);
          if (*(longlong *)(lVar3 + (longlong)iVar2 * 0x18) == local_40) {
            if (iVar2 != -1) goto LAB_141709093;
            break;
          }
          iVar2 = (int)plVar7[2];
        } while (iVar2 != -1);
      }
    }
    plVar7 = plVar4;
LAB_141709093:
    plVar6 = plVar7 + 1;
    if (plVar7 == (longlong *)0x0) {
      plVar6 = plVar4;
    }
    if (plVar6 == (longlong *)0x0) {
      lVar3 = FUN_14171bfe0();
      for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 0x30)) {
        if (param_2 == lVar3) {
          local_30 = 0;
          local_38 = 0;
          if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
            lVar3 = -1;
            do {
              lVar3 = lVar3 + 1;
            } while (param_3[lVar3] != 0);
            uVar8 = (int)lVar3 + 1;
            local_30 = (ulonglong)uVar8;
            if (0 < (int)uVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
            }
            FGenericPlatformString::Memcpy(local_38,param_3,(longlong)(int)uVar8 * 2);
          }
          lVar3 = FUN_1416f87e0();
          cVar1 = FString::StartsWith(&local_38,lVar3 + 0x30,1);
          if (cVar1 == '\0') {
            FUN_1417005b0(&local_28,&local_38);
            plVar7 = local_28;
            plVar6 = (longlong *)&DAT_143f3eda8;
            if ((int)local_20 != 0) {
              plVar6 = local_28;
            }
            lVar3 = FUN_1416e2a60(*(undefined8 *)(param_1 + 0xa0),plVar6,0xffffffff);
            if (lVar3 != 0) {
              plVar4 = (longlong *)(lVar3 + 0x200);
            }
            local_28 = &local_40;
            local_20 = &local_48;
            local_48 = plVar4;
            FUN_1404a88c0((longlong *)(param_1 + 0x7a0),local_res20,&local_28,0);
            if (plVar7 != (longlong *)0x0) {
              FMemory::Free(plVar7);
            }
          }
          if (local_38 != 0) {
            FMemory::Free();
          }
          break;
        }
      }
    }
    else {
      local_48 = (longlong *)*plVar6;
    }
  }
  if (local_48 != (longlong *)0x0) {
    uVar5 = (**(code **)(*local_48 + 0x18))();
    return uVar5;
  }
  return 0;
}



// FUNCTION 141709200 FUN_141709200 body=345 status=ok
// SIG undefined FUN_141709200(void)

void FUN_141709200(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    iVar8 = param_2 + -1;
    lVar10 = (longlong)iVar8;
    if (iVar6 <= lVar10) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      do {
        if (iVar3 != 0) {
          *(int *)(*param_1 + (longlong)(int)param_1[6] * 8) = iVar8;
        }
        *(undefined4 *)(*param_1 + lVar10 * 8) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(*param_1 + 4 + lVar10 * 8) = uVar5;
        lVar10 = lVar10 + -1;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar8;
        iVar8 = iVar8 + -1;
      } while (iVar6 <= lVar10);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar8 = (int)param_1[5];
        iVar6 = iVar8 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
          uVar2 = (int)(iVar8 + 0x20 + (iVar8 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar8;
        if (iVar8 < 0) {
          iVar6 = iVar8 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 141709360 Reset body=1082 status=ok
// SIG undefined Reset(void)

void FUnresolvedStructTracker::Reset(longlong param_1)

{
  ulonglong uVar1;
  bool bVar2;
  byte bVar3;
  BOOL BVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint *puVar17;
  int *piVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  int local_a8;
  uint uStack_a4;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  ulonglong *local_88;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined *local_68;
  uint uStack_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  uint uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
  }
  iVar14 = DAT_1464b4588;
  puVar20 = (ulonglong *)0x0;
  local_a8 = 0;
  iVar11 = 0;
  local_88 = (ulonglong *)0x0;
  iVar13 = 0;
  local_7c = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  iStack_90 = 0;
  if (DAT_1464b4588 != 0) {
    puVar17 = DAT_1464b4580;
    if (DAT_1464b4580 == (uint *)0x0) {
      puVar17 = (uint *)&DAT_1464b4570;
    }
    uVar8 = *puVar17;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar8 == 0) {
      lVar12 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar7 = local_a8 + 1;
      bVar2 = (int)(DAT_1464b4588 + -1 + (DAT_1464b4588 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar7;
      if (bVar2) goto LAB_14170946c;
      uVar8 = puVar17[lVar12 + 1];
    }
    uStack_a4 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_94 = (iStack_90 - iVar7) + 0x1f;
    if (DAT_1464b4588 < iStack_94) {
LAB_14170946c:
      iStack_94 = DAT_1464b4588;
    }
  }
  uStack_60 = 0xffffffff;
  iStack_5c = iStack_94;
  local_58 = CONCAT44(uStack_8c,iStack_90);
  uStack_48 = CONCAT44(uStack_a4,local_a8);
  local_50 = &DAT_1464b4560;
  puStack_40 = &DAT_1464b4570;
  local_78 = 0x464b4560;
  uStack_74 = 1;
  iStack_70 = local_a8;
  uStack_6c = uStack_a4;
  local_68 = &DAT_1464b4570;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  iStack_34 = iStack_5c;
  while( true ) {
    if (((iStack_5c == iVar14) && (local_68 == &DAT_1464b4570)) &&
       ((longlong *)CONCAT44(uStack_74,local_78) == &DAT_1464b4560)) break;
    uVar1 = *(ulonglong *)(*(longlong *)CONCAT44(uStack_74,local_78) + (longlong)iStack_5c * 0x10);
    lVar12 = FUN_1417a53c0(uVar1);
    if (lVar12 == param_1) {
      local_80 = iVar13 + 1;
      if (iVar11 < local_80) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,iVar13);
        puVar20 = local_88;
        iVar11 = local_7c;
      }
      puVar20[iVar13] = uVar1;
      iVar13 = local_80;
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  puVar19 = puVar20;
  lVar12 = DAT_1464b4560;
  puVar6 = DAT_1464b45a0;
joined_r0x000141709555:
  if (puVar19 == puVar20 + iVar13) {
    if (puVar20 != (ulonglong *)0x0) {
      FMemory::Free(puVar20);
    }
                    /* WARNING: Could not recover jumptable at 0x000141709793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
    return;
  }
  if (DAT_1464b4568 != DAT_1464b4594) {
    iVar14 = (int)(*puVar19 >> 4);
    uVar10 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
    uVar8 = -(iVar14 + uVar10) ^ uVar10 >> 0xd;
    uVar15 = (iVar14 - uVar10) - uVar8 ^ uVar8 >> 0xc;
    uVar10 = (uVar10 - uVar15) - uVar8 ^ uVar15 << 0x10;
    uVar8 = (uVar8 - uVar10) - uVar15 ^ uVar10 >> 5;
    uVar15 = (uVar15 - uVar10) - uVar8 ^ uVar8 >> 3;
    uVar10 = (uVar10 - uVar15) - uVar8 ^ uVar15 << 10;
    puVar5 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      puVar5 = &DAT_1464b4598;
    }
    iVar14 = *(int *)(puVar5 + (((longlong)(int)((uVar8 - uVar10) - uVar15) ^
                                (ulonglong)(uVar10 >> 0xf)) & (longlong)(int)(DAT_1464b45a8 - 1U)) *
                               4);
    while (iVar14 != -1) {
      lVar16 = (longlong)iVar14;
      if (*(ulonglong *)(lVar12 + lVar16 * 0x10) == *puVar19) {
        lVar9 = (longlong)(int)(*(uint *)(lVar12 + 0xc + lVar16 * 0x10) & DAT_1464b45a8 - 1U);
        if (puVar6 == (undefined *)0x0) {
          puVar6 = &DAT_1464b4598;
        }
        piVar18 = (int *)(puVar6 + lVar9 * 4);
        iVar11 = *(int *)(puVar6 + lVar9 * 4);
        if (iVar11 != -1) goto LAB_141709685;
        goto LAB_1417096ad;
      }
      iVar14 = *(int *)(lVar12 + 8 + lVar16 * 0x10);
    }
  }
  goto LAB_141709738;
  while( true ) {
    piVar18 = (int *)(lVar12 + 8 + (longlong)iVar11 * 0x10);
    iVar11 = *piVar18;
    if (iVar11 == -1) break;
LAB_141709685:
    if (iVar11 == iVar14) {
      *piVar18 = *(int *)(lVar12 + lVar16 * 0x10 + 8);
      lVar12 = DAT_1464b4560;
      break;
    }
  }
LAB_1417096ad:
  bVar3 = (byte)iVar14 & 0x1f;
  if (DAT_1464b4594 != 0) {
    *(int *)(lVar12 + (longlong)DAT_1464b4590 * 0x10) = iVar14;
    lVar12 = DAT_1464b4560;
  }
  *(undefined4 *)(lVar12 + lVar16 * 0x10) = 0xffffffff;
  iVar11 = -1;
  if (0 < DAT_1464b4594) {
    iVar11 = DAT_1464b4590;
  }
  *(int *)(lVar12 + 4 + lVar16 * 0x10) = iVar11;
  DAT_1464b4594 = DAT_1464b4594 + 1;
  puVar17 = DAT_1464b4580;
  if (DAT_1464b4580 == (uint *)0x0) {
    puVar17 = (uint *)&DAT_1464b4570;
  }
  iVar11 = iVar14;
  if (iVar14 < 0) {
    iVar11 = iVar14 + 0x1f;
  }
  DAT_1464b4590 = iVar14;
  puVar17[iVar11 >> 5] = puVar17[iVar11 >> 5] & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
  puVar6 = DAT_1464b45a0;
  lVar12 = DAT_1464b4560;
LAB_141709738:
  puVar19 = puVar19 + 1;
  goto joined_r0x000141709555;
}



// FUNCTION 1417097a0 ResetAsyncLoadingStats body=26 status=ok
// SIG undefined ResetAsyncLoadingStats(void)

void ResetAsyncLoadingStats(void)

{
  DAT_1469e6870 = 0;
  DAT_1469e6878 = 0;
  DAT_1469e687c = 0;
  return;
}



// FUNCTION 1417097c0 FUN_1417097c0 body=157 status=ok
// SIG undefined FUN_1417097c0(void)

void FUN_1417097c0(longlong param_1)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  *(undefined4 *)(param_1 + 0x78c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x788) = 0;
  *(undefined4 *)(param_1 + 0x798) = 0;
  if (*(int *)(param_1 + 0x79c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x790,0);
  }
  FUN_1406c5d90(param_1 + 0x7a0,0);
  *(uint *)(param_1 + 0x290) = *(uint *)(param_1 + 0x290) & 0xffefffff;
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = &LAB_1416eb8e0;
  lVar1 = FUN_1415d8310(&local_18,&DAT_1464b49c0);
  TSet<TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Remove(lVar1 + 0x18,param_1);
  FUnresolvedStructTracker::Reset(param_1);
  return;
}



// FUNCTION 141709860 ResizeForCopy body=148 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
     ResizeForCopy(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      uVar2 = 8;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      uVar2 = (uint)(uVar3 >> 4);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    if (uVar2 < 9) {
      if (lVar1 == 0) goto LAB_1417098de;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_1417098de;
      lVar5 = (longlong)(int)uVar2 << 4;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
  }
LAB_1417098de:
  *(uint *)(param_1 + 0x8c) = uVar2;
  return;
}



// FUNCTION 141709900 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<352,8>_>,FDefaultAllocator>::ResizeGrow
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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x160,0);
  iVar4 = (int)(uVar3 / 0x160);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x160,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141709990 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<352,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x160,0);
    iVar3 = (int)(uVar1 / 0x160);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x160,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141709a10 ResolveAllImports body=183 status=ok
// SIG undefined ResolveAllImports(void)

void FLinkerLoad::ResolveAllImports(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  char cVar4;
  BOOL BVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res8 [8];
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      cVar4 = IsBlueprintFinalizationPending(param_1);
      if (cVar4 == '\0') {
        return;
      }
      uVar2 = FUN_141731ec0(param_1,iVar7);
      BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
      if (BVar5 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
      }
      piVar3 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                (&DAT_1464b4560,local_res8,uVar2);
      iVar1 = *piVar3;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
      if ((iVar1 != -1) && (lVar6 = FindExistingLinkerForImport(param_1,iVar7), lVar6 != 0)) {
        FUN_141709ce0(lVar6,uVar2);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 141709ad0 ResolveArchetypeInstances body=521 status=ok
// SIG undefined ResolveArchetypeInstances(void)

void FDeferredInitializationTrackerBase::ResolveArchetypeInstances
               (longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
  ::MultiFind<FDefaultAllocator>(param_1 + 1,param_2,&local_70,0);
  puVar2 = local_70 + (int)local_68;
  if (local_70 != puVar2) {
    plVar1 = param_1 + 0x15;
    puVar12 = local_70;
    do {
      uVar9 = 0;
      iVar3 = (int)param_1[0x16];
      uVar4 = *puVar12;
      *(int *)(param_1 + 0x16) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0xb4) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = uVar4;
      cVar7 = (**(code **)(*param_1 + 0x10))(param_1,param_2,uVar4);
      if (cVar7 != '\0') {
        local_60 = (undefined8 *)0x0;
        local_58 = 0;
        TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
        ::MultiFind<FDefaultAllocator>(param_1 + 0x17,uVar4,&local_60,0);
        puVar6 = local_60;
        uVar10 = (ulonglong)((longlong)(local_60 + (int)local_58) + (7 - (longlong)local_60)) >> 3;
        if (local_60 + (int)local_58 < local_60) {
          uVar10 = 0;
        }
        puVar11 = local_60;
        if (uVar10 != 0) {
          do {
            uVar5 = *puVar11;
            lVar8 = FUN_1417a53c0(uVar5);
            if (lVar8 != 0) {
              FUN_141740c00(lVar8 + 0x200,uVar5);
            }
            uVar9 = uVar9 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != uVar10);
        }
        TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
        ::Remove(param_1 + 0x17,uVar4);
        if (puVar6 != (undefined8 *)0x0) {
          FMemory::Free(puVar6);
        }
      }
      *(int *)(param_1 + 0x16) = (int)param_1[0x16] + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar2);
  }
  puVar2 = local_70;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
  ::Remove(param_1 + 1,param_2);
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free(puVar2);
  }
  return;
}



// FUNCTION 141709ce0 FUN_141709ce0 body=1370 status=ok
// SIG undefined FUN_141709ce0(void)

void FUN_141709ce0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 *puVar14;
  longlong lVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  longlong lVar19;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  int iStack_54;
  
  uVar2 = *(uint *)(param_1 + 0x290);
  *(uint *)(param_1 + 0x290) = uVar2 & 0xffefffff;
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
  }
  local_res18 = param_2;
  FUN_14058cbf0(&DAT_1464b4560,&local_res10);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
  if (param_2 != 0) {
    lVar10 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    lVar10 = param_2;
    if (bVar4) goto LAB_141709db8;
  }
  lVar10 = 0;
LAB_141709db8:
  iVar18 = 0;
  if (0 < *(int *)(param_1 + 0x798)) {
    plVar1 = (longlong *)(param_1 + 0x790);
    if (*(int *)(*(longlong *)*plVar1 + 8) == 0) {
      iVar18 = *(int *)(param_1 + 0x10);
    }
    if (0 < *(int *)(param_1 + 0x798)) {
      local_res10 = 0;
      do {
        iVar9 = *(int *)(param_1 + 0x798);
        lVar19 = *plVar1;
        iVar16 = iVar9 + -1;
        uVar3 = *(undefined8 *)(lVar19 + (longlong)iVar16 * 8);
        iVar7 = (iVar9 - iVar16) + -1;
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar19 + (longlong)iVar16 * 8),(void *)(lVar19 + (longlong)iVar9 * 8),
                     (longlong)iVar7 << 3);
          iVar9 = *(int *)(param_1 + 0x798);
        }
        *(int *)(param_1 + 0x798) = iVar9 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        FUN_14170a9c0(param_1,uVar3);
      } while (0 < *(int *)(param_1 + 0x798));
    }
  }
  if (iVar18 < *(int *)(param_1 + 0x10)) {
    lVar19 = (longlong)iVar18 * 0x38;
    do {
      cVar5 = FLinkerLoad::HasUnresolvedDependencies(param_1);
      if (cVar5 == '\0') break;
      lVar15 = *(longlong *)(param_1 + 8) + lVar19;
      lVar11 = *(longlong *)(lVar15 + 0x28);
      if ((((lVar11 != 0) ||
           ((*(longlong *)(lVar15 + 0x20) != 0 && (lVar11 = FUN_1417a53c0(), lVar11 != 0)))) &&
          (*(longlong *)(lVar11 + 0xa0) != 0)) &&
         ((*(uint *)(*(longlong *)(lVar11 + 0xa0) + 8) >> 0x13 & 1) == 0)) {
        if (*(int *)(lVar11 + 0x1e8) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = *(undefined2 **)(lVar11 + 0x1e0);
        }
        FUN_141790a60(0,puVar14,*(uint *)(param_1 + 0x290) & 0x2082,param_1,0);
      }
      lVar13 = *(longlong *)(lVar15 + 0x20);
      if (lVar13 == 0) {
LAB_141709f66:
        lVar13 = *(longlong *)(lVar15 + 0x20);
        if (lVar13 != 0) {
          lVar12 = ULinkerPlaceholderFunction::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar11 = UField::GetOwnerClass(lVar13);
            if (lVar11 != 0) {
              lVar15 = ULinkerPlaceholderClass::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                local_res18 = 0;
                FUN_14170a9c0(param_1,lVar11 + 0x200,lVar10,0);
              }
            }
            local_res20 = 0;
            FUN_14170a9c0(param_1,lVar13 + 0xb8);
            goto LAB_14170a085;
          }
        }
        lVar15 = *(longlong *)(lVar15 + 0x20);
        if (lVar15 != 0) {
          lVar13 = FUN_14171c950();
          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (lVar11 != 0)) {
            FUN_141709ce0(lVar11,lVar15);
          }
        }
      }
      else {
        lVar12 = ULinkerPlaceholderClass::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_141709f66;
        local_res10 = 0;
        FUN_14170a9c0(param_1,lVar13 + 0x200);
      }
LAB_14170a085:
      iVar18 = iVar18 + 1;
      lVar19 = lVar19 + 0x38;
    } while (iVar18 < *(int *)(param_1 + 0x10));
  }
  iVar18 = *(int *)(param_1 + 0x7a8) - *(int *)(param_1 + 0x7d4);
  do {
    if (iVar18 < 1) {
      lVar10 = *(longlong *)(param_2 + 0x30);
      if (((lVar10 != 0) && (lVar19 = FUN_1417a53c0(lVar10), lVar19 != 0)) &&
         (cVar5 = FLinkerLoad::HasUnresolvedDependencies(lVar19), cVar5 != '\0')) {
        FUN_141709ce0(lVar19,lVar10);
      }
      BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
      if (BVar6 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
      }
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                (&DAT_1464b4560,param_2);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6940);
      *(uint *)(param_1 + 0x290) = uVar2;
      return;
    }
    iStack_54 = 0;
    iVar18 = *(int *)(param_1 + 0x7c8);
    iVar16 = 0;
    if (iVar18 != 0) {
      puVar17 = *(uint **)(param_1 + 0x7c0);
      if (*(uint **)(param_1 + 0x7c0) == (uint *)0x0) {
        puVar17 = (uint *)(param_1 + 0x7b0);
      }
      uVar8 = *puVar17;
      iVar9 = 0;
      while (uVar8 == 0) {
        iVar16 = iVar16 + 0x20;
        if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_14170a158;
        uVar8 = puVar17[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar8 = -uVar8 & uVar8;
      iVar9 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar8 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_54 = (iVar16 - iVar9) + 0x1f;
      if (iVar18 < iStack_54) {
LAB_14170a158:
        iStack_54 = iVar18;
      }
    }
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x7a0) + (longlong)iStack_54 * 0x18);
    FUN_14170a9c0(param_1,*(undefined8 *)
                           (*(longlong *)(param_1 + 0x7a0) + 8 + (longlong)iStack_54 * 0x18));
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Remove(param_1 + 0x7a0,uVar3);
    iVar18 = *(int *)(param_1 + 0x7a8) - *(int *)(param_1 + 0x7d4);
  } while( true );
}


