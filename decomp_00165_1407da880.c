// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1407da880 FUN_1407da880 body=30 status=ok
// SIG undefined FUN_1407da880(void)

void FUN_1407da880(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x8e9) = *param_2;
  *(undefined2 *)(param_1 + 0x8ed) = *(undefined2 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x8ef) = *(undefined1 *)((longlong)param_2 + 6);
  return;
}



// FUNCTION 1407da8a0 FUN_1407da8a0 body=113 status=ok
// SIG undefined FUN_1407da8a0(void)

void FUN_1407da8a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_1407ddd80();
  plVar1 = *(longlong **)(param_1 + 0x8f8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x300))(plVar1,param_2);
  }
  FUN_1407ddb90(param_1);
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = UAnimMontage::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_1407c58e0(lVar3,param_1);
    }
  }
  return;
}



// FUNCTION 1407da920 FUN_1407da920 body=5 status=ok
// SIG undefined FUN_1407da920(void)

void FUN_1407da920(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}



// FUNCTION 1407da930 FUN_1407da930 body=127 status=ok
// SIG undefined FUN_1407da930(void)

void FUN_1407da930(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_48 [64];
  
  puVar5 = (undefined8 *)FUN_142c625b0(local_48,&DAT_14685c1b8,param_2);
  iVar2 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar2 + 1;
  if (*(int *)(param_1 + 0x2c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x20,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar4 = puVar5[1];
  lVar6 = (longlong)iVar2 * 0x38;
  *(undefined8 *)(lVar6 + lVar3) = *puVar5;
  ((undefined8 *)(lVar6 + lVar3))[1] = uVar4;
  uVar4 = puVar5[3];
  puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar3);
  *puVar1 = puVar5[2];
  puVar1[1] = uVar4;
  uVar4 = puVar5[5];
  puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar3);
  *puVar1 = puVar5[4];
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar6 + 0x30 + lVar3) = puVar5[6];
  return;
}



// FUNCTION 1407da9b0 FUN_1407da9b0 body=131 status=ok
// SIG undefined FUN_1407da9b0(void)

void FUN_1407da9b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  
  plVar1 = param_1 + 0x12e;
  *(undefined1 *)(param_1 + 0x12d) = 1;
  if (plVar1 != param_2) {
    _Src = (void *)*param_2;
    iVar2 = (int)param_2[1];
    *(int *)(param_1 + 0x12f) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x97c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x97c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar2 << 3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001407daa2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x900))(param_1);
  return;
}



// FUNCTION 1407daa40 FUN_1407daa40 body=20 status=ok
// SIG undefined FUN_1407daa40(void)

void FUN_1407daa40(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x488) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x8e0) = param_2;
  }
  return;
}



// FUNCTION 1407daa60 FUN_1407daa60 body=17 status=ok
// SIG undefined FUN_1407daa60(void)

void FUN_1407daa60(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  *(undefined8 *)(param_1 + 0x280) = param_2;
  *(undefined4 *)(param_1 + 0x288) = *param_3;
  return;
}



// FUNCTION 1407daa80 FUN_1407daa80 body=20 status=ok
// SIG undefined FUN_1407daa80(void)

void FUN_1407daa80(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x588) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x588) + 0x8f8) = param_2;
  }
  return;
}



// FUNCTION 1407daaa0 FUN_1407daaa0 body=8 status=ok
// SIG undefined FUN_1407daaa0(void)

void FUN_1407daaa0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x8f8) = param_2;
  return;
}



// FUNCTION 1407daab0 FUN_1407daab0 body=75 status=ok
// SIG undefined FUN_1407daab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407daab0(longlong param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = uRam000000014685c0dc;
  if ((*(char *)(param_1 + 0x8e8) == '\0') && (param_2 != '\0')) {
    *(undefined4 *)(param_1 + 0x920) = 0;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x928) = 0;
    *(uint *)(param_1 + 0x92c) = uVar1;
    *(undefined8 *)(param_1 + 0x930) = 0;
    *(undefined8 *)(param_1 + 0x938) = 0;
    uVar1 = uRam000000014685c0d4 & uRam000000014685c0e4;
    uVar2 = uRam000000014685c0d8 & uRam000000014685c0e8;
    uVar3 = uRam000000014685c0dc & uRam000000014685c0ec;
    *(uint *)(param_1 + 0x940) = _DAT_14685c0d0 & _DAT_14685c0e0;
    *(uint *)(param_1 + 0x944) = uVar1;
    *(uint *)(param_1 + 0x948) = uVar2;
    *(uint *)(param_1 + 0x94c) = uVar3;
  }
  *(char *)(param_1 + 0x8e8) = param_2;
  return;
}



// FUNCTION 1407dab00 FUN_1407dab00 body=74 status=ok
// SIG undefined FUN_1407dab00(void)

void FUN_1407dab00(longlong param_1,longlong param_2)

{
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x5a0) != 0)) &&
     (*(longlong *)(param_1 + 0x588) != 0)) {
    FUN_142df2ca0();
    FUN_1407dab50(*(undefined8 *)(param_1 + 0x588),param_2);
  }
  return;
}



// FUNCTION 1407dab50 FUN_1407dab50 body=443 status=ok
// SIG undefined FUN_1407dab50(void)

void FUN_1407dab50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int local_res8 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0();
  }
  uVar9 = 0;
  uVar7 = uVar9;
  if (lVar4 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14625a720,local_res8,lVar4);
    if ((local_res8[0] != -1) &&
       (lVar4 = DAT_14625a720 + (longlong)local_res8[0] * 0x18, lVar4 != 0)) {
      uVar7 = *(ulonglong *)(lVar4 + 8);
    }
  }
  if (uVar7 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x930);
  lVar4 = (longlong)iVar1;
  if ((-1 < iVar1) && (iVar1 < *(int *)(uVar7 + 600))) {
    while ((iVar8 = (int)uVar9, -1 < iVar8 &&
           ((lVar6 = lVar4 * 0x140 + *(longlong *)(uVar7 + 0x250), iVar8 < *(int *)(lVar6 + 0x78) &&
            (*(longlong *)((longlong)iVar8 * 0xa8 + *(longlong *)(lVar6 + 0x70)) == 0))))) {
      uVar9 = (ulonglong)(iVar8 + 1);
    }
  }
  do {
    iVar8 = (int)uVar9;
    if (iVar1 == -1) {
      if (iVar8 == -1) {
        return;
      }
LAB_1407dac21:
      bVar3 = false;
    }
    else {
      if ((((iVar1 < 0) || (*(int *)(uVar7 + 600) <= iVar1)) || (iVar8 < 0)) ||
         (*(int *)(lVar4 * 0x140 + 0x78 + *(longlong *)(uVar7 + 0x250)) <= iVar8))
      goto LAB_1407dac21;
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    lVar10 = lVar4 * 0x140;
    plVar2 = *(longlong **)
              ((longlong)iVar8 * 0xa8 + *(longlong *)(*(longlong *)(uVar7 + 0x250) + 0x70 + lVar10))
    ;
    uVar5 = UCircularThrobber::GetPrivateStaticClass();
    lVar6 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar5);
    if (lVar6 != 0) {
      FUN_142df2ca0(lVar6,param_2);
    }
    uVar9 = (ulonglong)(iVar8 + 1);
    if ((-1 < iVar1) && (iVar1 < *(int *)(uVar7 + 600))) {
      while ((iVar8 = (int)uVar9, -1 < iVar8 &&
             ((iVar8 < *(int *)(*(longlong *)(uVar7 + 0x250) + 0x78 + lVar10) &&
              (*(longlong *)
                ((longlong)iVar8 * 0xa8 +
                *(longlong *)(*(longlong *)(uVar7 + 0x250) + lVar10 + 0x70)) == 0))))) {
        uVar9 = (ulonglong)(iVar8 + 1);
      }
    }
  } while( true );
}



// FUNCTION 1407dad10 FUN_1407dad10 body=83 status=ok
// SIG undefined FUN_1407dad10(void)

void FUN_1407dad10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x5a0);
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 0x1b8) = param_2;
    *(bool *)(lVar1 + 0x1c0) = param_2 != 0;
    if (param_2 == 0) {
      param_2 = *(longlong *)(lVar1 + 0x1d0);
    }
    *(longlong *)(lVar1 + 0x180) = param_2;
    if (param_2 != 0) {
      *(undefined8 *)(lVar1 + 0x1c8) = *(undefined8 *)(param_2 + 0x18);
      return;
    }
    *(undefined8 *)(lVar1 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 1407dad70 FUN_1407dad70 body=81 status=ok
// SIG undefined FUN_1407dad70(void)

void FUN_1407dad70(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x218) = param_2;
  *(undefined4 *)(param_1 + 0x278) = 0;
  if (*(int *)(param_1 + 0x27c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x270,0);
  }
  *(undefined4 *)(param_1 + 0x268) = 0;
  if (*(int *)(param_1 + 0x26c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x260,0);
    return;
  }
  return;
}



// FUNCTION 1407dade0 FUN_1407dade0 body=65 status=ok
// SIG undefined FUN_1407dade0(void)

void FUN_1407dade0(longlong *param_1,int *param_2)

{
  if ((char)*param_2 == '\0') {
    (**(code **)(*param_1 + 0x340))(param_1,param_2);
    *param_2 = *param_2 + 1;
  }
  else if ((char)*param_2 == '\x01') {
    (**(code **)(*param_1 + 0x348))(param_1,param_2);
    *param_2 = 0x7fffffff;
    return;
  }
  return;
}



// FUNCTION 1407dae30 FUN_1407dae30 body=866 status=ok
// SIG undefined FUN_1407dae30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1407dae30(longlong *param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             longlong param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int local_res8 [2];
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  int local_b8;
  undefined4 local_b4;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_38;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar7 = (**(code **)(*param_1 + 0x148))();
  lVar8 = FUN_1407c74b0(uVar7);
  if (lVar8 == 0) {
    return 0;
  }
  if (param_5 != 0) goto LAB_1407daf55;
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar9 == 0) {
LAB_1407daeec:
    lVar9 = 0;
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14625a720,local_res8,lVar9);
    if ((local_res8[0] == -1) ||
       (lVar9 = DAT_14625a720 + (longlong)local_res8[0] * 0x18, lVar9 == 0)) goto LAB_1407daeec;
    lVar9 = *(longlong *)(lVar9 + 8);
  }
  if (lVar9 == 0) {
LAB_1407daf4a:
    param_5 = 0;
  }
  else {
    local_98 = FUN_1407e27e0();
    param_5 = (**(code **)(*param_1 + 0x628))(param_1,local_98);
    if (param_5 == 0) {
      FUN_1407c7790(lVar9,&local_b8,param_1);
      if (((local_b8 < 0) || (*(int *)(lVar9 + 600) <= local_b8)) ||
         (lVar9 = (longlong)local_b8 * 0x140 + *(longlong *)(lVar9 + 0x250), lVar9 == 0))
      goto LAB_1407daf4a;
      param_5 = *(longlong *)(lVar9 + 0x40);
    }
  }
  if (param_5 == 0) {
    return 0;
  }
LAB_1407daf55:
  FUN_1407bbfc0(local_88,param_3);
  local_50 = param_5;
  local_68 = (**(code **)(*param_1 + 0x148))(param_1);
  local_60 = param_6;
  local_c8 = *param_4;
  local_c4 = *(undefined2 *)(param_4 + 1);
  local_c2 = *(undefined1 *)((longlong)param_4 + 6);
  local_b4 = *(undefined4 *)(param_5 + 0x930);
  local_b0 = (undefined8 *)0x0;
  local_a8 = 0;
  local_58 = param_1;
  uVar7 = FUN_1407dbb40(lVar8,&local_b4,param_2,local_88,&local_b0,&local_c8);
  puVar3 = local_b0 + (int)local_a8;
  iVar11 = DAT_14625a6f8;
  for (puVar13 = local_b0; local_a0 = uVar7, puVar13 != puVar3; puVar13 = puVar13 + 1) {
    uVar7 = *puVar13;
    DAT_14625a704 = DAT_14625a704 + 1;
    bVar5 = false;
    lVar8 = (longlong)(iVar11 + -1);
    iVar10 = iVar11;
    if (-1 < iVar11 + -1) {
      lVar9 = lVar8 << 4;
      bVar5 = false;
      do {
        if (((*(int *)(lVar9 + 8 + DAT_14625a6f0) == 0) ||
            (plVar4 = *(longlong **)(lVar9 + DAT_14625a6f0), plVar4 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,param_1,uVar7), cVar6 == '\0')) {
          bVar5 = true;
        }
        lVar9 = lVar9 + -0x10;
        lVar8 = lVar8 + -1;
        iVar10 = DAT_14625a6f8;
      } while (-1 < lVar8);
    }
    DAT_14625a704 = DAT_14625a704 + -1;
    iVar11 = iVar10;
    if ((bVar5) && (DAT_14625a704 < 1)) {
      iVar12 = 0;
      if (0 < iVar10) {
        lVar8 = 0;
        do {
          if (((*(int *)(lVar8 + 8 + DAT_14625a6f0) == 0) ||
              (*(longlong **)(lVar8 + DAT_14625a6f0) == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(**(longlong **)(lVar8 + DAT_14625a6f0) + 0x10))(), cVar6 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_14625a6f0,iVar12,1,1);
          }
          else {
            iVar12 = iVar12 + 1;
            lVar8 = lVar8 + 0x10;
          }
          iVar11 = DAT_14625a6f8;
        } while (iVar12 < DAT_14625a6f8);
      }
      _DAT_14625a700 = iVar11 * 2;
      if (_DAT_14625a700 < 3) {
        _DAT_14625a700 = 2;
      }
      if ((_DAT_14625a700 < iVar10) && (DAT_14625a6fc != iVar11)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_14625a6f0);
        iVar11 = DAT_14625a6f8;
      }
    }
    uVar7 = local_a0;
  }
  if (local_b0 != (undefined8 *)0x0) {
    FMemory::Free(local_b0);
  }
  plVar4 = local_38;
  if (local_38 == (longlong *)0x0) {
    return uVar7;
  }
  LOCK();
  plVar1 = local_38 + 1;
  lVar8 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar8 != 1) {
    return uVar7;
  }
  (**(code **)*local_38)(local_38);
  LOCK();
  piVar2 = (int *)((longlong)plVar4 + 0xc);
  iVar11 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar11 == 1) {
    (**(code **)(*local_38 + 8))(local_38,1);
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 1407db1a0 FUN_1407db1a0 body=114 status=ok
// SIG undefined FUN_1407db1a0(void)

undefined8 FUN_1407db1a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (param_2 != 0) {
    local_18 = *(undefined4 *)(param_2 + 0x40);
    local_14 = *(undefined2 *)(param_2 + 0x44);
    local_12 = *(undefined1 *)(param_2 + 0x46);
    uVar1 = FUN_1407ca270(param_2,param_1);
    uVar1 = FUN_1407dae30(param_1,uVar1,param_3,&local_18,0,0);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1407db220 FUN_1407db220 body=570 status=ok
// SIG undefined FUN_1407db220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1407db220(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0 [16];
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar7 = -1;
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  uVar8 = 0;
  uVar6 = uVar8;
  if (lVar3 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14625a720,&local_c8,lVar3);
    if (((int)local_c8 != -1) &&
       (lVar1 = DAT_14625a720 + (longlong)(int)local_c8 * 0x18, lVar1 != 0)) {
      uVar6 = *(ulonglong *)(lVar1 + 8);
    }
  }
  if ((((lVar3 != 0) && (iVar2 = FUN_1428cf800(lVar3), iVar2 != 3)) && (uVar6 != 0)) &&
     ((*param_2 != 0 && (param_2[3] != 0)))) {
    if (param_2[2] == 0) {
      if ((longlong *)param_2[1] == (longlong *)0x0) goto LAB_1407db3d2;
      (**(code **)(*(longlong *)param_2[1] + 0x330))();
    }
    else {
      FUN_1407c80f0(param_2[2],local_c0);
      plVar4 = local_c0;
      if (local_40 != (longlong *)0x0) {
        plVar4 = local_40;
      }
      uVar9 = (longlong)local_38 & 0x1fffffffffffffff;
      if (plVar4 + local_38 < plVar4) {
        uVar9 = uVar8;
      }
      if (uVar9 != 0) {
        do {
          if ((longlong *)*plVar4 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar4 + 0x330))();
          }
          plVar4 = plVar4 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar9);
      }
      if (local_40 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    plVar4 = (longlong *)(uVar6 + 0x188);
    iVar7 = *(int *)(uVar6 + 400);
    *(int *)(uVar6 + 400) = iVar7 + 1;
    if (*(int *)(uVar6 + 0x194) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar4,iVar7);
    }
    FUN_1407bbd10(*plVar4 + (longlong)iVar7 * 0x70,param_2,*(undefined4 *)(uVar6 + 0x180));
    *(int *)(uVar6 + 0x180) = *(int *)(uVar6 + 0x180) + 1;
    iVar7 = *(int *)((longlong)iVar7 * 0x70 + 0x68 + *plVar4);
    if (iVar7 != -1) goto LAB_1407db431;
  }
LAB_1407db3d2:
  local_c8 = 0;
  if (((param_2[8] != 0) && (lVar3 = FWeakObjectPtr::Get(param_2 + 7), lVar3 != 0)) &&
     (lVar3 = UObject::FindFunction(lVar3,param_2[8]), lVar3 != 0)) {
    local_c8 = 0;
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_2 + 7);
    uVar5 = FUN_14178ac60(plVar4,param_2[8]);
    (**(code **)(*plVar4 + 0x208))(plVar4,uVar5,&local_c8);
  }
LAB_1407db431:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 9);
  return iVar7;
}



// FUNCTION 1407db460 FUN_1407db460 body=585 status=ok
// SIG undefined FUN_1407db460(void)

longlong FUN_1407db460(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_res8;
  int local_res20 [2];
  longlong local_100;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined1 local_f2;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong *local_98;
  longlong local_90;
  longlong *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    uVar4 = (**(code **)(*param_1 + 0x148))();
    plVar5 = (longlong *)FUN_1407c74b0(uVar4);
    if ((plVar5 != (longlong *)0x0) && (lVar6 = FUN_1407ca270(param_2), lVar6 != 0)) {
      _guard_xfg_dispatch_icall_nop(&local_c8,0,0x58);
      local_c8 = 0xffffffff;
      local_a8 = (**(code **)(*param_1 + 0x148))(param_1);
      local_e0 = param_3[4];
      uStack_dc = param_3[5];
      local_d8 = param_3[6];
      uStack_2c = param_3[7];
      local_58 = *param_3;
      uStack_54 = param_3[1];
      uStack_50 = param_3[2];
      uStack_4c = param_3[3];
      local_c4 = local_e0;
      uStack_c0 = uStack_dc;
      local_bc = local_d8;
      local_98 = param_1;
      local_38 = local_e0;
      uStack_34 = uStack_dc;
      uStack_30 = local_d8;
      puVar7 = (undefined8 *)FQuat::Rotator(&local_58,local_48);
      local_b8 = *puVar7;
      local_b0 = *(undefined4 *)(puVar7 + 1);
      local_68 = FUN_1407e27e0();
      local_90 = (**(code **)(*param_1 + 0x628))(param_1,local_68);
      lVar9 = 0;
      if (local_90 == 0) {
        lVar8 = (**(code **)(*plVar5 + 0x148))(plVar5);
        if (lVar8 == 0) {
          local_100 = 0;
        }
        else {
          lVar8 = AActor::GetLevel(param_1);
          if ((lVar8 == 0) || (lVar8 = UObjectBaseUtility::GetOutermost(lVar8), lVar8 == 0)) {
            local_e8 = 0;
            local_100 = lVar9;
          }
          else {
            local_100 = *(longlong *)(lVar8 + 0x18);
          }
        }
        local_res8 = 0;
        if (local_100 == 0) {
          local_res20[0] = -1;
        }
        else {
          FUN_1407bff30(plVar5,&local_res8,&local_100);
          local_res20[0] = (int)local_res8;
        }
      }
      else {
        local_res20[0] = *(int *)(local_90 + 0x930);
      }
      if (local_res20[0] != -1) {
        local_f8 = 0x102;
        local_f4 = 0x101;
        local_f2 = 0;
        lVar9 = FUN_1407dbb40(plVar5,local_res20,lVar6,&local_c8,0,&local_f8);
      }
      plVar5 = local_78;
      if (local_78 == (longlong *)0x0) {
        return lVar9;
      }
      LOCK();
      plVar1 = local_78 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 != 1) {
        return lVar9;
      }
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return lVar9;
      }
      (**(code **)(*local_78 + 8))(local_78,1);
      return lVar9;
    }
  }
  return 0;
}



// FUNCTION 1407db6b0 FUN_1407db6b0 body=49 status=ok
// SIG undefined FUN_1407db6b0(void)

void FUN_1407db6b0(void)

{
  FUN_1407dae30();
  return;
}



// FUNCTION 1407db6f0 FUN_1407db6f0 body=1092 status=ok
// SIG undefined FUN_1407db6f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407db6f0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  byte bVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong local_180;
  undefined4 local_178;
  undefined2 local_174;
  uint local_168;
  ushort local_164;
  undefined1 local_162;
  longlong local_158 [2];
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_120 [8];
  longlong local_118;
  undefined1 local_110 [8];
  longlong local_108;
  longlong *local_100;
  int local_f8;
  longlong local_f0;
  undefined4 local_e8;
  ushort local_e4;
  undefined1 local_e2;
  undefined4 local_e0;
  char local_dc;
  char local_db;
  char local_da;
  char local_d9;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [128];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar12 = 0;
  if (0 < *(int *)(param_1 + 400)) {
    uVar4 = uVar12;
    iVar2 = 0;
    do {
      iVar14 = (int)uVar4;
      if (*(int *)(param_1 + 0x1cc) <= *(int *)(param_1 + 0x240)) {
        return;
      }
      plVar6 = (longlong *)(param_1 + 0x188);
      plVar1 = *(longlong **)(*plVar6 + 8 + uVar12);
      if (plVar1 == (longlong *)0x0) {
        lVar10 = *(longlong *)(*plVar6 + 0x10 + uVar12);
        if (lVar10 != 0) {
          uVar4 = FUN_1407c80f0(lVar10,local_c8);
          plVar9 = (longlong *)
                   ((ulonglong)(*(ulonglong *)(uVar4 + 0x80) != 0) - 1 & uVar4 |
                   *(ulonglong *)(uVar4 + 0x80));
          plVar1 = plVar9 + *(int *)(uVar4 + 0x88);
          for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
            if (((longlong *)*plVar9 != (longlong *)0x0) &&
               (cVar3 = (**(code **)(*(longlong *)*plVar9 + 800))(), cVar3 == '\0')) {
              cVar3 = '\0';
              goto LAB_1407db7d9;
            }
          }
          cVar3 = '\x01';
LAB_1407db7d9:
          if (local_48 != 0) {
            FMemory::Free();
          }
          goto LAB_1407db7e9;
        }
LAB_1407db7f1:
        lVar10 = *plVar6 + uVar12;
        FUN_1407bbbe0(&local_148,lVar10);
        local_e0 = *(undefined4 *)(lVar10 + 0x68);
        local_dc = *(char *)(lVar10 + 0x6c);
        local_db = *(char *)(lVar10 + 0x6d);
        local_da = *(char *)(lVar10 + 0x6e);
        local_d9 = *(char *)(lVar10 + 0x6f);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(*plVar6 + 0x48 + (longlong)iVar14 * 0x70);
        iVar13 = *(int *)(param_1 + 400);
        iVar8 = (iVar13 - iVar14) + -1;
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar6 + (longlong)iVar14 * 0x70),
                     (void *)((longlong)(iVar2 + 1) * 0x70 + *plVar6),(longlong)iVar8 * 0x70);
          iVar13 = *(int *)(param_1 + 400);
        }
        *(int *)(param_1 + 400) = iVar13 + -1;
        TArray<FSvoNode,FDefaultAllocator>::ResizeShrink(plVar6);
        iVar14 = iVar14 + -1;
        uVar12 = uVar12 - 0x70;
        if ((((((local_148 == 0) || (local_130 == 0)) || ((local_d9 != '\0' && (local_f0 == 0)))) ||
             ((local_dc != '\0' &&
              (cVar3 = TScriptDelegate<FWeakObjectPtr>::IsBound(local_120), cVar3 == '\0')))) ||
            ((local_db != '\0' &&
             (cVar3 = TScriptDelegate<FWeakObjectPtr>::IsBound(local_110), cVar3 == '\0')))) ||
           ((local_da != '\0' &&
            (((local_f8 == 0 || (local_100 == (longlong *)0x0)) ||
             (cVar3 = (**(code **)(*local_100 + 0x18))(), cVar3 == '\0')))))) {
          lVar10 = 0;
        }
        else {
          lVar10 = local_140;
          if ((local_140 == 0) && (local_138 != 0)) {
            lVar10 = FUN_1407ca270(local_138,local_148);
          }
          local_174 = local_e4;
          local_178 = local_e8;
          if (local_138 != 0) {
            if (local_e8._1_1_ == '\0') {
              bVar11 = *(byte *)(local_138 + 0x40);
              if (*(byte *)(local_138 + 0x40) <= (byte)local_e8) {
                bVar11 = (byte)local_e8;
              }
              local_178 = CONCAT31((int3)(local_e8 >> 8),bVar11);
            }
            if (local_178._3_1_ == '\0') {
              bVar11 = *(byte *)(local_138 + 0x42);
              if (*(byte *)(local_138 + 0x42) <= local_178._2_1_) {
                bVar11 = local_178._2_1_;
              }
              local_178 = (uint)CONCAT12(bVar11,(undefined2)local_178);
            }
            local_174._1_1_ = (char)(local_e4 >> 8);
            bVar15 = local_174._1_1_ == '\0';
            if (bVar15) {
              local_174._0_1_ = (byte)local_e4;
              bVar11 = *(byte *)(local_138 + 0x44);
              if (*(byte *)(local_138 + 0x44) <= (byte)local_174) {
                bVar11 = (byte)local_174;
              }
              local_174 = (ushort)bVar11;
            }
          }
          local_168 = local_178;
          local_180 = local_f0;
          local_188 = local_128;
          local_162 = local_e2;
          local_164 = local_174;
          lVar10 = FUN_1407dae30(local_148,lVar10,local_130,&local_168);
        }
        if (((local_f8 != 0) && (local_100 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*local_100 + 0x18))(), cVar3 != '\0')) {
          plVar6 = (longlong *)0x0;
          if (local_f8 != 0) {
            plVar6 = local_100;
          }
          (**(code **)(*plVar6 + 0x38))(plVar6,lVar10);
        }
        if (lVar10 == 0) {
          local_d0 = 0;
          if (((local_108 != 0) && (lVar10 = FWeakObjectPtr::Get(local_110), lVar10 != 0)) &&
             (lVar10 = UObject::FindFunction(lVar10,local_108), lVar10 != 0)) {
            local_158[0] = 0;
            plVar6 = (longlong *)FWeakObjectPtr::Get(local_110);
            lVar10 = local_108;
            goto LAB_1407dbaba;
          }
        }
        else {
          *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + 1;
          local_d8 = 0;
          if (((local_118 != 0) && (lVar5 = FWeakObjectPtr::Get(local_120), lVar5 != 0)) &&
             (lVar5 = UObject::FindFunction(lVar5,local_118), lVar5 != 0)) {
            local_158[0] = lVar10;
            plVar6 = (longlong *)FWeakObjectPtr::Get(local_120);
            lVar10 = local_118;
LAB_1407dbaba:
            uVar7 = FUN_14178ac60(plVar6,lVar10);
            (**(code **)(*plVar6 + 0x208))(plVar6,uVar7,local_158);
          }
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_100);
        iVar13 = iVar2;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 800))();
LAB_1407db7e9:
        iVar13 = iVar2 + 1;
        if (cVar3 != '\0') goto LAB_1407db7f1;
      }
      uVar4 = (ulonglong)(iVar14 + 1U);
      uVar12 = uVar12 + 0x70;
      iVar2 = iVar13;
    } while ((int)(iVar14 + 1U) < *(int *)(param_1 + 400));
  }
  return;
}



// FUNCTION 1407dbb40 FUN_1407dbb40 body=709 status=ok
// SIG undefined FUN_1407dbb40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1407dbb40(longlong param_1,int *param_2,longlong *param_3,longlong param_4,
                      longlong *param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_158 [32];
  int *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined1 local_120 [24];
  longlong local_108;
  undefined1 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  longlong *local_b8;
  longlong local_b0;
  undefined4 local_a0;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  longlong *local_78;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  iVar7 = *param_2;
  if ((iVar7 < 0) || (*(int *)(param_1 + 600) <= iVar7)) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar7 * 0x140 + *(longlong *)(param_1 + 0x250);
    local_138 = param_2;
    _guard_xfg_dispatch_icall_nop(&local_108,0,0xa8);
    local_f4 = 0xffffffff;
    local_100 = 0;
    local_b8 = param_3;
    local_a0 = (**(code **)(*param_3 + 0x288))(param_3,0);
    puVar5 = (undefined8 *)(**(code **)(*param_3 + 0x290))(param_3,local_120);
    local_d4 = *puVar5;
    local_cc = *(undefined4 *)(puVar5 + 1);
    local_ec = *(undefined8 *)(param_4 + 4);
    local_e4 = *(undefined4 *)(param_4 + 0xc);
    local_e0 = *(undefined8 *)(param_4 + 0x10);
    local_d8 = *(undefined4 *)(param_4 + 0x18);
    plVar2 = *(longlong **)(lVar8 + 0x48);
    if (plVar2 == (longlong *)0x0) {
      local_fc = 0;
    }
    else {
      local_130 = *(undefined8 *)(lVar8 + 0x50);
      local_128 = lVar8;
      local_fc = (**(code **)(*plVar2 + 0x2c8))(plVar2,&local_130);
    }
    lVar8 = *(longlong *)(lVar8 + 0x40);
    if (lVar8 != 0) {
      plVar2 = *(longlong **)(lVar8 + 0x970);
      if (plVar2 != plVar2 + *(int *)(lVar8 + 0x978)) {
        plVar6 = plVar2;
        do {
          if (*plVar6 == *(longlong *)(param_4 + 0x40)) {
            local_f8 = (undefined4)((longlong)plVar6 - (longlong)plVar2 >> 3);
            goto LAB_1407dbc9a;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar2 + *(int *)(lVar8 + 0x978));
      }
    }
    local_f8 = 0xffffffff;
LAB_1407dbc9a:
    FWeakObjectPtr::operator=(local_68,*(undefined8 *)(param_4 + 0x40));
    local_f0 = 1;
    FUN_1407c3840(param_6,param_3 + 10);
    local_8c = *param_6;
    local_88 = *(undefined2 *)(param_6 + 1);
    local_86 = *(undefined1 *)((longlong)param_6 + 6);
    local_f4 = 0xfffffffe;
    FUN_1407dc070(param_1,local_138,&local_108,param_4);
    FUN_1407c69d0(param_1);
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x170)) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x168);
        if (*(longlong *)(param_1 + 0x168) == 0) {
          lVar8 = param_1 + 0xa8;
        }
        lVar8 = FWeakObjectPtr::Get(lVar8 + (longlong)iVar7 * 0x18);
        if (lVar8 != 0) {
          if (iVar7 == 0) {
            local_108 = lVar8;
          }
          if (param_5 != (longlong *)0x0) {
            lVar3 = param_5[1];
            iVar4 = (int)lVar3 + 1;
            *(int *)(param_5 + 1) = iVar4;
            if (*(int *)((longlong)param_5 + 0xc) < iVar4) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_5);
            }
            *(longlong *)(*param_5 + (longlong)(int)lVar3 * 8) = lVar8;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x170));
    }
    lVar8 = local_108;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_78 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    if (local_b0 != 0) {
      FMemory::Free();
    }
  }
  return lVar8;
}



// FUNCTION 1407dbe10 FUN_1407dbe10 body=602 status=ok
// SIG undefined FUN_1407dbe10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407dbe10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_158 [32];
  undefined4 local_138 [2];
  undefined8 local_130;
  longlong local_128;
  undefined1 local_120 [80];
  longlong *local_d0;
  undefined1 local_c8 [12];
  undefined4 local_bc;
  undefined4 local_b4;
  longlong local_70;
  int local_60;
  char local_4c;
  longlong *local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  iVar7 = *(int *)(param_1 + 0x244);
  if (iVar7 < *(int *)(param_1 + 600)) {
    do {
      cVar5 = FUN_1407c3110(param_1);
      if (cVar5 == '\0') {
        return;
      }
      lVar8 = (longlong)iVar7 * 0x140 + *(longlong *)(param_1 + 0x250);
      if (((((*(char *)(lVar8 + 8) != '\0') && (*(char *)(lVar8 + 9) != '\0')) &&
           (*(longlong **)(lVar8 + 0x40) != (longlong *)0x0)) &&
          ((*(longlong *)(lVar8 + 0x48) != 0 && (*(int *)(lVar8 + 0xa0) != 0)))) &&
         ((*(char *)(lVar8 + 0x5c) == '\0' &&
          (cVar5 = (**(code **)(**(longlong **)(lVar8 + 0x40) + 0x8e8))(), cVar5 != '\0')))) {
        local_130 = *(undefined8 *)(lVar8 + 0x50);
        local_128 = lVar8;
        cVar5 = (**(code **)(**(longlong **)(lVar8 + 0x48) + 0x290))();
        if (cVar5 != '\0') {
          _guard_xfg_dispatch_icall_nop(local_c8,0,0xa8);
          local_b4 = 0xffffffff;
          local_bc = 0xffffffff;
          cVar5 = FUN_1407c94c0(lVar8,local_c8,0);
          if (cVar5 != '\0') {
            if (((local_4c == '\0') && (local_60 != 0)) &&
               (*(int *)(param_1 + 0x1c0) < local_60 + *(int *)(param_1 + 0x23c))) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              local_138[0] = *(undefined4 *)(param_1 + 0x244);
              uVar6 = FUN_1407bc120(local_120,lVar8,local_c8);
              FUN_1407dc070(param_1,local_138,local_c8,uVar6);
              plVar4 = local_d0;
              if (local_d0 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_d0 + 1;
                lVar8 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_d0)(local_d0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar4 + 0xc);
                  iVar7 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar4 + 8))(plVar4,1);
                  }
                }
              }
            }
          }
          plVar4 = local_38;
          if (local_38 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_38 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_38)(local_38);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_38 + 8))(local_38,1);
              }
            }
          }
          if (local_70 != 0) {
            FMemory::Free();
          }
        }
      }
      iVar7 = *(int *)(param_1 + 0x244) + 1;
      *(int *)(param_1 + 0x244) = iVar7;
    } while (iVar7 < *(int *)(param_1 + 600));
  }
  return;
}



// FUNCTION 1407dc070 FUN_1407dc070 body=569 status=ok
// SIG undefined FUN_1407dc070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407dc070(longlong param_1,int *param_2,longlong param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FUN_1407c69d0();
  *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + 1;
  if (*(char *)(param_3 + 0x19) == '\0') {
    lVar7 = (longlong)*param_2 * 0x140 + *(longlong *)(param_1 + 0x250);
    iVar4 = *(int *)(lVar7 + 0x78);
    *(int *)(lVar7 + 0x78) = iVar4 + 1;
    if (*(int *)(lVar7 + 0x7c) < iVar4 + 1) {
      TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(lVar7 + 0x70,iVar4);
    }
    FUN_1407bc410((longlong)iVar4 * 0xa8 + *(longlong *)(lVar7 + 0x70),param_3);
  }
  puVar3 = (undefined8 *)(param_1 + 0x98);
  *(int *)(param_1 + 0x44) = *param_2;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = *param_4;
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_4 + 1);
  *(undefined4 *)(param_1 + 0x5c) = param_4[3];
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_4 + 4);
  *(undefined4 *)(param_1 + 0x68) = param_4[6];
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_4 + 10);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_4 + 0xc);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_4 + 0xe);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_4 + 0x10);
  plVar5 = *(longlong **)(param_4 + 0x14);
  uVar6 = *(undefined8 *)(param_4 + 0x12);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_58 = uVar6;
  plStack_50 = plVar5;
  if (&local_58 != puVar3) {
    local_58 = *puVar3;
    plStack_50 = *(longlong **)(param_1 + 0xa0);
    *puVar3 = uVar6;
    *(longlong **)(param_1 + 0xa0) = plVar5;
    local_48 = uVar6;
    plStack_40 = plVar5;
  }
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  lVar7 = param_1 + 0xa8;
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x174)) {
    TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo(lVar7,0)
    ;
  }
  iVar4 = *(int *)(param_1 + 0x170);
  *(int *)(param_1 + 0x170) = iVar4 + 1;
  if (*(int *)(param_1 + 0x174) < iVar4 + 1) {
    TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lVar7,iVar4);
  }
  lVar8 = *(longlong *)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x168) == 0) {
    lVar8 = lVar7;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x50);
  lVar8 = lVar8 + (longlong)iVar4 * 0x18;
  FWeakObjectPtr::operator=(lVar8,0);
  FWeakObjectPtr::operator=(lVar8 + 8,uVar6);
  *(undefined4 *)(lVar8 + 0x10) = *(undefined4 *)(param_3 + 0x7c);
  *(undefined2 *)(lVar8 + 0x14) = *(undefined2 *)(param_3 + 0x80);
  *(undefined1 *)(lVar8 + 0x16) = *(undefined1 *)(param_3 + 0x82);
  FUN_1407c43b0(param_1);
  if (*(char *)(param_1 + 0x210) == '\0') {
    FUN_1407c69d0(param_1);
  }
  return;
}



// FUNCTION 1407dc2b0 FUN_1407dc2b0 body=382 status=ok
// SIG undefined FUN_1407dc2b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407dc2b0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined1 auStack_188 [32];
  undefined4 local_168 [22];
  longlong *local_110;
  undefined4 local_108 [48];
  undefined4 *local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if ((-1 < param_2) && (param_2 < (int)param_1[0x4a])) {
    puVar4 = *(undefined4 **)(param_1 + 0x48);
    if (*(undefined4 **)(param_1 + 0x48) == (undefined4 *)0x0) {
      puVar4 = param_1 + 0x18;
    }
    plVar5 = (longlong *)FWeakObjectPtr::Get(puVar4 + (longlong)param_2 * 6 + 2);
    if (plVar5 != (longlong *)0x0) {
      FUN_1407cbd10(param_1,local_168,param_2);
      (**(code **)(*plVar5 + 0x278))(plVar5,local_168);
      *param_1 = local_168[0];
      if (param_2 < (int)param_1[0x4a]) {
        puVar4 = local_108;
        if (local_48 != (undefined4 *)0x0) {
          puVar4 = local_48;
        }
        puVar6 = *(undefined4 **)(param_1 + 0x48);
        if (*(undefined4 **)(param_1 + 0x48) == (undefined4 *)0x0) {
          puVar6 = param_1 + 0x18;
        }
        puVar6 = puVar6 + (longlong)param_2 * 6;
        *puVar6 = *puVar4;
        puVar6[1] = puVar4[1];
        puVar6[2] = puVar4[2];
        puVar6[3] = puVar4[3];
        puVar6[4] = puVar4[4];
        *(undefined2 *)(puVar6 + 5) = *(undefined2 *)(puVar4 + 5);
        *(undefined1 *)((longlong)puVar6 + 0x16) = *(undefined1 *)((longlong)puVar4 + 0x16);
      }
      if (local_48 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      if (local_110 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar5 = local_110 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return;
      }
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)local_110 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return;
      }
      (**(code **)(*local_110 + 8))(local_110,1);
      return;
    }
  }
  *param_1 = 0x7fffffff;
  return;
}



// FUNCTION 1407dc430 FUN_1407dc430 body=980 status=ok
// SIG undefined FUN_1407dc430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407dc430(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  longlong local_7c;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [16];
  
  if (((((char)param_2[3] == '\0') && (*(char *)((longlong)param_1 + 0x2c) != '\x01')) &&
      (plVar11 = (longlong *)param_2[10], plVar11 != (longlong *)0x0)) &&
     ((*(char *)((longlong)plVar11 + 0x54) != '\x01' &&
      (cVar6 = (**(code **)(*plVar11 + 0x2f0))(plVar11,*param_2), cVar6 != '\0')))) {
    *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + 1;
    *(undefined1 *)((longlong)param_2 + 0x19) = 1;
    if ((param_2[0x13] == 0) || (cVar6 = FUN_1407cd900(), cVar6 != '\0')) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    *(undefined1 *)((longlong)param_2 + 0x1b) = uVar7;
    *(undefined1 *)(param_2 + 1) = 2;
    lVar10 = (**(code **)(*(longlong *)param_2[10] + 0x280))((longlong *)param_2[10],*param_2);
    plVar11 = (longlong *)operator_new(0x18);
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar11 + 1) = 1;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_FUN_143f3f2e0;
      plVar11[2] = lVar10;
    }
    local_98 = lVar10;
    local_90 = plVar11;
    SharedPointerInternals::EnableSharedFromThis(&local_98,lVar10,lVar10);
    if (param_2 + 0x11 != &local_98) {
      param_2[0x11] = lVar10;
      local_98 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x12,&local_90);
      plVar11 = local_90;
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar11 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    plVar11 = (longlong *)param_2[10];
    if (((plVar11 != (longlong *)0x0) &&
        (lVar10 = (**(code **)(*plVar11 + 0x2a0))(plVar11,*param_2), (char)lVar10 != '\0')) ||
       ((lVar10 = param_1[8], lVar10 == 0 ||
        (((int)param_2[2] < 0 || (*(int *)(lVar10 + 0x978) <= (int)param_2[2])))))) {
      lVar13 = *param_2;
      lVar4 = *(longlong *)(lVar13 + 0x168);
      if (lVar4 == 0) {
        local_68 = DAT_1468b5da8;
        plVar11 = &local_70;
        local_70 = DAT_1468b5da0;
      }
      else {
        local_38 = *(float *)(lVar4 + 0x210);
        fStack_34 = *(float *)(lVar4 + 0x214);
        fStack_30 = *(float *)(lVar4 + 0x218);
        fStack_2c = *(float *)(lVar4 + 0x21c);
        auVar5._4_4_ = -(uint)(*(float *)(lVar4 + 0x254) != fStack_34);
        auVar5._0_4_ = -(uint)(*(float *)(lVar4 + 0x250) != local_38);
        auVar5._8_4_ = -(uint)(*(float *)(lVar4 + 600) != fStack_30);
        auVar5._12_4_ = -(uint)(*(float *)(lVar4 + 0x25c) != fStack_2c);
        iVar8 = movmskps((int)lVar10,auVar5);
        if (iVar8 != 0) {
          *(float *)(lVar4 + 0x250) = local_38;
          *(float *)(lVar4 + 0x254) = fStack_34;
          *(float *)(lVar4 + 600) = fStack_30;
          *(float *)(lVar4 + 0x25c) = fStack_2c;
          puVar12 = (undefined8 *)FQuat::Rotator(&local_38,local_28);
          *(undefined8 *)(lVar4 + 0x260) = *puVar12;
          *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(puVar12 + 1);
          lVar13 = *param_2;
        }
        local_74 = *(undefined4 *)(lVar4 + 0x268);
        plVar11 = &local_7c;
        local_7c = *(longlong *)(lVar4 + 0x260);
      }
      lVar10 = plVar11[1];
      param_2[5] = *plVar11;
      *(int *)(param_2 + 6) = (int)lVar10;
      lVar10 = *(longlong *)(lVar13 + 0x168);
      if (lVar10 == 0) {
        local_5c = DAT_1468b5d98;
        puVar12 = &local_64;
        local_64 = _DAT_1468b5d90;
      }
      else {
        puVar12 = (undefined8 *)&local_88;
        local_88 = *(undefined4 *)(lVar10 + 0x220);
        local_80 = *(undefined4 *)(lVar10 + 0x228);
        uStack_84 = *(undefined4 *)(lVar10 + 0x224);
      }
      uVar3 = *(undefined4 *)(puVar12 + 1);
      *(undefined8 *)((longlong)param_2 + 0x1c) = *puVar12;
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar3;
      *(float *)((longlong)param_2 + 0x1c) =
           *(float *)((longlong)param_2 + 0x1c) - *(float *)(param_2 + 8);
      *(float *)(param_2 + 4) = *(float *)(param_2 + 4) - *(float *)((longlong)param_2 + 0x44);
      *(float *)((longlong)param_2 + 0x24) =
           *(float *)((longlong)param_2 + 0x24) - *(float *)(param_2 + 9);
      *(undefined4 *)(param_2 + 2) = 0xffffffff;
    }
    lVar10 = *param_2;
    if (lVar10 != 0) {
      iVar8 = *(int *)(lVar10 + 0xc);
      if (iVar8 < (int)DAT_1469e91c4) {
        uVar14 = iVar8 >> 0x1f & 0xffff;
        uVar9 = iVar8 + uVar14;
        lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                 (longlong)(int)((uVar9 & 0xffff) - uVar14) * 0x18;
      }
      else {
        lVar13 = 0;
      }
      if ((*(uint *)(lVar13 + 8) >> 0x1d & 1) == 0) {
        lVar13 = param_1[8];
        if (lVar13 != 0) {
          local_58 = lVar13;
          local_50 = lVar10;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (lVar13 + 0x7a8,&local_58);
          FUN_1407c27c0(param_1[8] + 0x858,param_1[8],param_2);
        }
        lVar10 = param_1[7];
        if (lVar10 != 0) {
          local_40 = *param_2;
          local_48 = lVar10;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (lVar10 + 0x490,&local_48);
          FUN_1407c27c0(param_1[7] + 0x578,param_1[7],param_2);
        }
      }
    }
    *(int *)(*param_1 + 0x23c) = *(int *)(*param_1 + 0x23c) - (int)param_2[0xd];
    (**(code **)(*(longlong *)param_2[10] + 0x2f8))((longlong *)param_2[10],*param_2);
    *param_2 = 0;
    return;
  }
  lVar10 = *param_2;
  FUN_1407d70b0(param_1,param_2);
  (**(code **)(*(longlong *)param_2[10] + 0x2f8))((longlong *)param_2[10],lVar10);
  return;
}



// FUNCTION 1407dc810 FUN_1407dc810 body=45 status=ok
// SIG undefined FUN_1407dc810(void)

void FUN_1407dc810(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x588) != 0) {
    lVar1 = FUN_1407cb650();
    if (lVar1 != 0) {
      FUN_1407dc840(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1407dc840 FUN_1407dc840 body=259 status=ok
// SIG undefined FUN_1407dc840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407dc840(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  int local_e8;
  longlong *local_e0;
  longlong local_d8;
  char local_d0;
  char local_5c;
  char local_58;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar3 = 0;
    plVar1 = (longlong *)(param_1 + 0x70);
    do {
      local_e8 = iVar2;
      local_e0 = plVar1;
      FUN_1407bc410(&local_d8,(longlong)iVar2 * 0xa8 + *plVar1);
      if (((local_d0 == '\x01') && (local_d8 != 0)) &&
         ((param_2 != '\0' || ((local_58 != '\x02' && (local_5c != '\x02')))))) {
        *(undefined1 *)(*plVar1 + 0x1a + lVar3) = 1;
        FUN_1407dc430(param_1,&local_d8);
      }
      FUN_1407be530((longlong)local_e8 * 0xa8 + *local_e0,&local_d8);
      FUN_1407be070(&local_d8);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0xa8;
    } while (iVar2 < *(int *)(param_1 + 0x78));
  }
  return;
}



// FUNCTION 1407dc950 ToggleCharacterSummary body=33 status=ok
// SIG undefined ToggleCharacterSummary(void)

void AIndianaPlayerController::ToggleCharacterSummary(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cb650();
  if (lVar1 != 0) {
    FUN_1407dc840(lVar1,0);
    return;
  }
  return;
}



// FUNCTION 1407dc980 FUN_1407dc980 body=859 status=ok
// SIG undefined FUN_1407dc980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407dc980(longlong param_1)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 uVar7;
  char cVar8;
  undefined8 *puVar9;
  float *pfVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_178 [32];
  undefined4 local_158 [2];
  undefined8 local_150;
  float local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  int local_128;
  longlong *local_120;
  longlong local_118;
  char local_110;
  longlong *local_c8;
  float local_a8;
  float local_a4;
  char local_a0;
  char local_9c;
  char local_98;
  ulonglong local_68;
  
  uVar7 = DAT_14685c0c2;
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  DAT_14685c0c2 = 1;
  lVar12 = *(longlong *)(param_1 + 0x250);
  lVar13 = (longlong)*(int *)(param_1 + 600) * 0x140 + lVar12;
  do {
    if (lVar12 == lVar13) {
      DAT_14685c0c2 = uVar7;
      return;
    }
    if (((((*(char *)(lVar12 + 0x14) != '\x01') && (*(char *)(lVar12 + 0x2c) != '\x02')) &&
         (*(char *)(lVar12 + 0x28) != '\x02')) &&
        ((*(char *)(lVar12 + 8) == '\0' && (*(longlong *)(lVar12 + 0x40) != 0)))) &&
       (iVar11 = 0, 0 < *(int *)(lVar12 + 0x78))) {
      lVar14 = 0;
      do {
        plVar1 = (longlong *)(lVar12 + 0x70);
        local_128 = iVar11;
        local_120 = plVar1;
        FUN_1407bc410(&local_118,(longlong)iVar11 * 0xa8 + *plVar1);
        if (((local_118 != 0) && (local_110 == '\x01')) &&
           ((local_98 != '\x02' && (local_9c != '\x02')))) {
          local_158[0] = *(undefined4 *)(*(longlong *)(lVar12 + 0x40) + 0x930);
          lVar6 = *(longlong *)(local_118 + 0x168);
          if (lVar6 == 0) {
            local_12c = DAT_1468b5d98;
            puVar9 = &local_134;
            local_134 = _DAT_1468b5d90;
          }
          else {
            puVar9 = (undefined8 *)&local_140;
            local_140 = *(undefined4 *)(lVar6 + 0x220);
            local_138 = *(undefined4 *)(lVar6 + 0x228);
            uStack_13c = *(undefined4 *)(lVar6 + 0x224);
          }
          uVar5 = *puVar9;
          fVar16 = 3.4028235e+38;
          local_148 = *(float *)(puVar9 + 1);
          pfVar10 = *(float **)(param_1 + 0x260);
          pfVar4 = pfVar10 + (longlong)*(int *)(param_1 + 0x268) * 3;
          if (pfVar10 != pfVar4) {
            local_150._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
            local_150._0_4_ = (float)uVar5;
            do {
              pfVar2 = pfVar10 + 2;
              fVar15 = *pfVar10;
              pfVar3 = pfVar10 + 1;
              pfVar10 = pfVar10 + 3;
              fVar15 = SQRT((*pfVar3 - local_150._4_4_) * (*pfVar3 - local_150._4_4_) +
                            (fVar15 - (float)local_150) * (fVar15 - (float)local_150) +
                            (*pfVar2 - local_148) * (*pfVar2 - local_148));
              if (fVar16 <= fVar15) {
                fVar15 = fVar16;
              }
              fVar16 = fVar15;
            } while (pfVar10 != pfVar4);
          }
          local_150 = uVar5;
          if ((fVar16 < (float)*(int *)(param_1 + 0x1dc)) ||
             ((local_c8 != (longlong *)0x0 &&
              (cVar8 = (**(code **)(*local_c8 + 0x300))(local_c8,local_118), cVar8 != '\0')))) {
LAB_1407dcc00:
            local_a8 = *(float *)(param_1 + 0x230);
          }
          else {
            if (fVar16 <= (float)*(int *)(param_1 + 0x1e0)) {
              if (4.0 <= *(float *)(param_1 + 0x230) - local_a4) {
                local_a4 = *(float *)(param_1 + 0x230);
                FUN_1407c0120(param_1,&local_118,local_158);
              }
              if (local_a0 != '\0') goto LAB_1407dcc00;
            }
            fVar16 = (float)*(int *)(param_1 + 0x1d8) + local_a8;
            if (fVar16 < *(float *)(param_1 + 0x230) || fVar16 == *(float *)(param_1 + 0x230)) {
              *(undefined1 *)(lVar14 + 0x1a + *plVar1) = 1;
              FUN_1407dc430(lVar12,&local_118);
            }
          }
        }
        FUN_1407be530((longlong)local_128 * 0xa8 + *local_120,&local_118);
        FUN_1407be070(&local_118);
        iVar11 = iVar11 + 1;
        lVar14 = lVar14 + 0xa8;
      } while (iVar11 < *(int *)(lVar12 + 0x78));
    }
    lVar12 = lVar12 + 0x140;
  } while( true );
}



// FUNCTION 1407dcce0 FUN_1407dcce0 body=206 status=ok
// SIG undefined FUN_1407dcce0(void)

void FUN_1407dcce0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14625a720,local_res8,lVar1);
    if ((local_res8[0] != -1) &&
       (lVar1 = DAT_14625a720 + (longlong)local_res8[0] * 0x18, lVar1 != 0)) {
      lVar1 = *(longlong *)(lVar1 + 8);
      goto LAB_1407dcd33;
    }
  }
  lVar1 = 0;
LAB_1407dcd33:
  if (lVar1 != 0) {
    iVar3 = *(int *)(lVar1 + 600);
    iVar4 = 0;
    if (0 < iVar3) {
      lVar5 = 0;
      do {
        if (*(char *)(lVar5 + 9 + *(longlong *)(lVar1 + 0x250)) != '\0') {
          if ((iVar4 < 0) || (iVar3 <= iVar4)) {
            lVar2 = 0;
          }
          else {
            lVar2 = (longlong)iVar4 * 0x140 + *(longlong *)(lVar1 + 0x250);
          }
          if (lVar2 != 0) {
            FUN_1407dc840(lVar2,0);
            iVar3 = *(int *)(lVar1 + 600);
          }
        }
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 0x140;
      } while (iVar4 < iVar3);
    }
  }
  return;
}



// FUNCTION 1407dcdb0 FUN_1407dcdb0 body=235 status=ok
// SIG undefined FUN_1407dcdb0(void)

void FUN_1407dcdb0(longlong *param_1,float param_2)

{
  float fVar1;
  char cVar2;
  
  if (((char)param_1[1] != '\0') && (*(char *)((longlong)param_1 + 0xd1) != '\0')) {
    FUN_1407c1690();
  }
  if (((char)param_1[0x1a] == '\0') && (cVar2 = FUN_142de1370(param_1), cVar2 == '\0')) {
    return;
  }
  FUN_142de0ad0(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x19);
  *(float *)(param_1 + 0x19) = param_2 + fVar1;
  if (*(float *)((longlong)param_1 + 0xcc) <= param_2 + fVar1) {
    *(undefined1 *)(param_1 + 0x1a) = 0;
    if (*(char *)((longlong)param_1 + 0xb4) != '\0') {
      (**(code **)(*param_1 + 0x28))(param_1,1);
      *(undefined4 *)((longlong)param_1 + 0xcc) = 0x40a00000;
      return;
    }
    if (*(char *)((longlong)param_1 + 0xd3) != '\0') {
      FUN_1407c1690(param_1);
      return;
    }
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0x7f7fffff;
    if ((char)param_1[1] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001407dce83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1);
      return;
    }
    FUN_142dc8e80(param_1 + 2);
  }
  return;
}



// FUNCTION 1407dcea0 FUN_1407dcea0 body=725 status=ok
// SIG undefined FUN_1407dcea0(void)

void FUN_1407dcea0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  undefined8 local_res8;
  
  cVar4 = FUN_1407ce080(param_1 + -0x28);
  if (cVar4 != '\0') {
    lVar7 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
    *(float *)(param_1 + 0x208) = *(float *)(lVar7 + 0x7b0) + *(float *)(param_1 + 0x208);
    FUN_1407ded40(param_1 + -0x28);
    if (0 < *(int *)(param_1 + 0x178)) {
      plVar1 = (longlong *)(param_1 + 0x170);
      uVar8 = 0;
      iVar2 = 0;
      do {
        iVar10 = (int)uVar8;
        lVar7 = (longlong)iVar10 * 0xc0;
        cVar4 = FUN_1407c5c80(param_1 + -0x28,*plVar1 + lVar7);
        iVar11 = iVar2 + 1;
        if (cVar4 != '\0') {
          if (*(longlong *)(lVar7 + 0xb0 + *plVar1) != 0) {
            FMemory::Free();
          }
          iVar11 = *(int *)(param_1 + 0x178);
          iVar5 = (iVar11 - iVar10) + -1;
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + lVar7),(void *)((longlong)(iVar2 + 1) * 0xc0 + *plVar1),
                       (longlong)iVar5 * 0xc0);
            iVar11 = *(int *)(param_1 + 0x178);
          }
          *(int *)(param_1 + 0x178) = iVar11 + -1;
          TArray<FPakPrecacher::FPakData,FDefaultAllocator>::ResizeShrink(plVar1);
          iVar10 = iVar10 + -1;
          iVar11 = iVar2;
        }
        uVar8 = (ulonglong)(iVar10 + 1U);
        iVar2 = iVar11;
      } while ((int)(iVar10 + 1U) < *(int *)(param_1 + 0x178));
    }
    local_res8 = 0;
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 8,&local_res8);
    uVar3 = DAT_14685c0c2;
    fVar13 = *(float *)(param_1 + 0x208);
    if (*(float *)(param_1 + 0x20c) <= fVar13 && fVar13 != *(float *)(param_1 + 0x20c)) {
      DAT_14685c0c2 = 1;
      lVar7 = *(longlong *)(param_1 + 0x228);
      lVar12 = (longlong)*(int *)(param_1 + 0x230) * 0x140 + lVar7;
      for (; lVar7 != lVar12; lVar7 = lVar7 + 0x140) {
        FUN_1407de040(lVar7);
      }
      *(undefined8 *)(param_1 + 0x21c) = 0;
      fVar13 = *(float *)(param_1 + 0x208);
      DAT_14685c0c2 = uVar3;
      *(float *)(param_1 + 0x20c) = fVar13 + *(float *)(param_1 + 0x1a8);
    }
    if (*(float *)(param_1 + 0x210) <= fVar13 && fVar13 != *(float *)(param_1 + 0x210)) {
      FUN_1407dc980(param_1 + -0x28);
      uVar3 = DAT_14685c0c2;
      DAT_14685c0c2 = 1;
      lVar7 = *(longlong *)(param_1 + 0x228);
      lVar12 = (longlong)*(int *)(param_1 + 0x230) * 0x140 + lVar7;
      for (; lVar7 != lVar12; lVar7 = lVar7 + 0x140) {
        if (*(char *)(lVar7 + 0x14) == '\x03') {
          if (*(longlong *)(lVar7 + 0x30) != 0) {
            uVar6 = *(uint *)(*(longlong *)(lVar7 + 0x30) + 0xc);
            uVar8 = 0;
            if ((int)uVar6 < (int)DAT_1469e91c4) {
              uVar9 = uVar6 & 0xffff;
              if ((int)uVar6 < 0) {
                uVar6 = uVar6 + 0xffff;
                uVar9 = uVar9 - 0x10000;
              }
              uVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                      (longlong)(int)uVar9 * 0x18;
            }
            if ((*(uint *)(uVar8 + 8) >> 0x1d & 1) == 0) goto LAB_1407dd0f7;
          }
          *(undefined1 *)(lVar7 + 0x14) = 0;
          *(undefined8 *)(lVar7 + 0x30) = 0;
          FUN_1407d7830(lVar7);
        }
LAB_1407dd0f7:
      }
      DAT_14685c0c2 = uVar3;
      *(float *)(param_1 + 0x210) = (float)*(int *)(param_1 + 0x1ac) + *(float *)(param_1 + 0x208);
    }
    *(undefined4 *)(param_1 + 0x218) = 0;
    if (*(int *)(param_1 + 0x1c) != -1) {
      FUN_1407c43b0();
      return;
    }
    FUN_1407db6f0(param_1 + -0x28);
    FUN_1407d99e0(param_1 + -0x28);
    FUN_1407dbe10(param_1 + -0x28);
  }
  return;
}



// FUNCTION 1407dd180 FUN_1407dd180 body=931 status=ok
// SIG undefined FUN_1407dd180(void)

void FUN_1407dd180(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int local_res8 [2];
  int local_res10 [2];
  int local_res20 [2];
  int local_68;
  int local_64;
  int local_60 [2];
  undefined8 local_58;
  undefined8 *local_50;
  ulonglong local_48;
  longlong *local_40;
  
  plVar3 = (longlong *)param_1[9];
  if (plVar3 != (longlong *)0x0) {
    local_48 = param_1[10];
    local_40 = param_1;
    (**(code **)(*plVar3 + 0x2b8))(plVar3,&local_48,param_2);
  }
  plVar3 = (longlong *)*param_2;
  if (plVar3 != (longlong *)0x0) {
    iVar2 = *(int *)((longlong)plVar3 + 0xc);
    uVar12 = 0;
    uVar7 = uVar12;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar11 = iVar2 >> 0x1f & 0xffff;
      uVar6 = iVar2 + uVar11;
      uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar11) * 0x18;
    }
    if (((*(uint *)(uVar7 + 8) >> 0x1d & 1) == 0) && (param_3 != '\0')) {
      local_48 = param_1[8];
      if (local_48 != 0) {
        local_40 = plVar3;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (local_48 + 0x798,&local_48);
        FUN_1407c27c0(param_1[8] + 0x848,param_1[8],param_2);
      }
      local_48 = param_1[7];
      if (local_48 != 0) {
        local_40 = (longlong *)*param_2;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (local_48 + 0x470,&local_48);
        FUN_1407c27c0(param_1[7] + 0x548,param_1[7],param_2);
      }
      lVar8 = param_1[8];
      if (lVar8 != 0) {
        iVar2 = (int)param_2[2];
        if ((iVar2 < 0) || (*(int *)(lVar8 + 0x978) <= iVar2)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) &&
           (uVar7 = *(ulonglong *)(*(longlong *)(lVar8 + 0x970) + (longlong)iVar2 * 8), uVar7 != 0))
        {
          local_40 = (longlong *)*param_2;
          local_48 = uVar7;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (uVar7 + 0x708,&local_48);
          uVar7 = *(ulonglong *)(uVar7 + 0x20);
          if (uVar7 != 0) {
            lVar8 = FUN_1407e7ae0();
            if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              local_40 = (longlong *)*param_2;
              local_48 = uVar7;
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (uVar7 + 0x470,&local_48);
            }
          }
        }
      }
      puVar13 = (undefined8 *)param_1[0x1b];
      local_48 = (longlong)(int)param_1[0x1c] & 0x1fffffffffffffff;
      if (puVar13 + (int)param_1[0x1c] < puVar13) {
        local_48 = uVar12;
      }
      if (local_48 != 0) {
        plVar3 = param_1 + 0x1e;
        do {
          uVar4 = *puVar13;
          local_58 = uVar4;
          TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
          ::FindId(plVar3,local_res8,uVar4);
          if (local_res8[0] != -1) {
            lVar8 = *plVar3;
            lVar9 = (longlong)local_res8[0] * 0x20 + lVar8;
            if ((lVar9 != 0) && (lVar9 != -8)) {
              TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
              ::FindId(plVar3,local_res10,uVar4);
              if (local_res10[0] == -1) {
                lVar8 = 0;
              }
              else {
                lVar8 = (longlong)local_res10[0] * 0x20 + lVar8;
              }
              plVar10 = *(longlong **)(lVar8 + 8);
              plVar1 = plVar10 + *(int *)(lVar8 + 0x10);
              if (plVar10 != plVar1) {
                do {
                  if (*plVar10 == *param_2) {
                    FUN_1407e29a0(uVar4,param_1[8]);
                    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                    ::FindId(plVar3,local_res20,local_58);
                    if ((local_res20[0] == -1) ||
                       (lVar8 = (longlong)local_res20[0] * 0x20 + *plVar3, lVar8 == 0)) {
                      local_50 = &local_58;
                      FUN_1407b9130(plVar3,&local_68,&local_50,0);
                      lVar8 = (longlong)local_68 * 0x20 + *plVar3;
                    }
                    TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                              (lVar8 + 8,param_2);
                    lVar8 = *param_1;
                    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                    ::FindId(lVar8 + 0x2e0,&local_64,local_58);
                    if ((local_64 == -1) ||
                       (lVar9 = (longlong)local_64 * 0x20 + *(longlong *)(lVar8 + 0x2e0), lVar9 == 0
                       )) {
                      local_50 = &local_58;
                      FUN_1407b9130(lVar8 + 0x2e0,local_60,&local_50,0);
                      lVar9 = (longlong)local_60[0] * 0x20 + *(longlong *)(lVar8 + 0x2e0);
                    }
                    TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                              (lVar9 + 8,param_2);
                    break;
                  }
                  plVar10 = plVar10 + 1;
                } while (plVar10 != plVar1);
              }
            }
          }
          puVar13 = puVar13 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar12 != local_48);
      }
    }
  }
  return;
}



// FUNCTION 1407dd530 FUN_1407dd530 body=1271 status=ok
// SIG undefined FUN_1407dd530(void)

void FUN_1407dd530(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int local_res8 [2];
  undefined8 *local_res10;
  int local_res18 [2];
  int local_res20 [2];
  undefined8 local_98;
  undefined8 *local_90;
  ulonglong local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 *local_58;
  
  uVar11 = param_1[8];
  local_res10 = param_2;
  if (uVar11 != 0) {
    local_80 = *param_2;
    local_88 = uVar11;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (uVar11 + 0x788,&local_88);
    FUN_1407c27c0(param_1[8] + 0x838,param_1[8],param_2);
  }
  lVar6 = param_1[7];
  if (lVar6 != 0) {
    uVar9 = *param_2;
    *(int *)(lVar6 + 0x534) = *(int *)(lVar6 + 0x534) + 1;
    bVar3 = false;
    iVar7 = *(int *)(lVar6 + 0x534);
    iVar5 = *(int *)(lVar6 + 0x528) + -1;
    lVar10 = (longlong)iVar5;
    if (-1 < iVar5) {
      lVar8 = lVar10 << 4;
      do {
        lVar1 = *(longlong *)(lVar6 + 0x520);
        if (((*(int *)(lVar8 + 8 + lVar1) == 0) ||
            (plVar2 = *(longlong **)(lVar8 + lVar1), plVar2 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,lVar6,uVar9), cVar4 == '\0')) {
          bVar3 = true;
        }
        lVar8 = lVar8 + -0x10;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
      iVar7 = *(int *)(lVar6 + 0x534);
    }
    *(int *)(lVar6 + 0x534) = iVar7 + -1;
    if (bVar3) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar6 + 0x520),0);
    }
    param_2 = local_res10;
    local_88 = param_1[7];
    local_80 = *local_res10;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (local_88 + 0x460,&local_88);
    FUN_1407c27c0(param_1[7] + 0x510,param_1[7],param_2);
  }
  lVar6 = param_1[8];
  iVar7 = *(int *)(param_2 + 2);
  if (((((lVar6 != 0) && (-1 < iVar7)) &&
       ((iVar7 < *(int *)(lVar6 + 0x978) &&
        (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x970) + (longlong)iVar7 * 8), lVar6 != 0))))
      || (lVar6 = FWeakObjectPtr::Get(param_2 + 0x14), lVar6 != 0)) &&
     (uVar11 = *(ulonglong *)(lVar6 + 0x8d0), uVar11 != 0)) {
    local_80 = *param_2;
    local_88 = uVar11;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (uVar11 + 0x460,&local_88);
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
            (&DAT_14625a708,param_1[8],*param_2);
  local_58 = (undefined8 *)param_1[0x1b];
  uVar11 = 0;
  local_88 = (longlong)(int)param_1[0x1c] & 0x1fffffffffffffff;
  if (local_58 + (int)param_1[0x1c] < local_58) {
    local_88 = uVar11;
  }
  if (local_88 != 0) {
    do {
      uVar9 = *local_58;
      lVar6 = *param_1;
      local_98 = uVar9;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(lVar6 + 0x290,&local_res10,uVar9);
      if (((int)local_res10 == -1) ||
         (lVar10 = *(longlong *)(lVar6 + 0x290) + (longlong)(int)local_res10 * 0x18, lVar10 == 0)) {
        local_90 = &local_98;
        FUN_140608300(lVar6 + 0x290,local_res8,&local_90,0);
        lVar10 = *(longlong *)(lVar6 + 0x290) + (longlong)local_res8[0] * 0x18;
        uVar9 = local_98;
      }
      if (*(int *)(lVar10 + 8) < 1) {
LAB_1407dd859:
        iVar7 = (int)param_1[0x1d];
        if (0 < iVar7) {
          TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x1e,&local_70,uVar9);
          if ((local_70 == -1) || (lVar6 = (longlong)local_70 * 0x20 + param_1[0x1e], lVar6 == 0)) {
            local_90 = &local_98;
            FUN_1407b9130(param_1 + 0x1e,&local_6c,&local_90);
            iVar7 = (int)param_1[0x1d];
            lVar6 = (longlong)local_6c * 0x20 + param_1[0x1e];
            uVar9 = local_98;
          }
          if (iVar7 <= *(int *)(lVar6 + 0x10)) goto LAB_1407dd9e9;
        }
        FUN_1407e29f0(uVar9,param_1[8],*param_2);
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x1e,&local_68,local_98);
        if ((local_68 == -1) || (lVar6 = (longlong)local_68 * 0x20 + param_1[0x1e], lVar6 == 0)) {
          local_90 = &local_98;
          FUN_1407b9130(param_1 + 0x1e,&local_64,&local_90);
          lVar6 = (longlong)local_64 * 0x20 + param_1[0x1e];
        }
        iVar7 = *(int *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x10) = iVar7 + 1;
        if (*(int *)(lVar6 + 0x14) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    ((longlong *)(lVar6 + 8),iVar7);
        }
        *(undefined8 *)(*(longlong *)(lVar6 + 8) + (longlong)iVar7 * 8) = *param_2;
        lVar6 = *param_1;
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(lVar6 + 0x2e0,&local_60,local_98);
        if ((local_60 == -1) ||
           (lVar10 = (longlong)local_60 * 0x20 + *(longlong *)(lVar6 + 0x2e0), lVar10 == 0)) {
          local_90 = &local_98;
          FUN_1407b9130(lVar6 + 0x2e0,&local_5c,&local_90);
          lVar10 = (longlong)local_5c * 0x20 + *(longlong *)(lVar6 + 0x2e0);
        }
        iVar7 = *(int *)(lVar10 + 0x10);
        *(int *)(lVar10 + 0x10) = iVar7 + 1;
        if (*(int *)(lVar10 + 0x14) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    ((longlong *)(lVar10 + 8),iVar7);
        }
        *(undefined8 *)(*(longlong *)(lVar10 + 8) + (longlong)iVar7 * 8) = *param_2;
      }
      else {
        lVar6 = *param_1;
        plVar2 = (longlong *)(lVar6 + 0x2e0);
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(plVar2,local_res18,uVar9);
        if ((local_res18[0] == -1) ||
           (lVar10 = (longlong)local_res18[0] * 0x20 + *plVar2, lVar10 == 0)) {
          local_90 = &local_98;
          FUN_1407b9130(plVar2,local_res20,&local_90);
          lVar6 = *param_1;
          lVar10 = (longlong)local_res20[0] * 0x20 + *plVar2;
          uVar9 = local_98;
        }
        iVar7 = *(int *)(lVar10 + 0x10);
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(lVar6 + 0x290,&local_78,uVar9);
        if ((local_78 == -1) ||
           (lVar10 = *(longlong *)(lVar6 + 0x290) + (longlong)local_78 * 0x18, lVar10 == 0)) {
          local_90 = &local_98;
          FUN_140608300(lVar6 + 0x290,&local_74,&local_90,0);
          lVar10 = *(longlong *)(lVar6 + 0x290) + (longlong)local_74 * 0x18;
          uVar9 = local_98;
        }
        if (iVar7 < *(int *)(lVar10 + 8)) goto LAB_1407dd859;
      }
LAB_1407dd9e9:
      uVar11 = uVar11 + 1;
      local_58 = local_58 + 1;
    } while (uVar11 != local_88);
  }
  return;
}



// FUNCTION 1407dda30 FUN_1407dda30 body=176 status=ok
// SIG undefined FUN_1407dda30(void)

void FUN_1407dda30(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    local_res8 = lVar1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x7d8,&local_res8);
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    local_res8 = lVar1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x4c0,&local_res8);
  }
  uVar3 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xd8);
  uVar4 = (longlong)*(int *)(param_1 + 0xe0) & 0x1fffffffffffffff;
  if (puVar2 + *(int *)(param_1 + 0xe0) < puVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      FUN_1407e2a40(*puVar2,*(undefined8 *)(param_1 + 0x40));
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != uVar4);
  }
  return;
}



// FUNCTION 1407ddae0 FUN_1407ddae0 body=176 status=ok
// SIG undefined FUN_1407ddae0(void)

void FUN_1407ddae0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    local_res8 = lVar1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x7c8,&local_res8);
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    local_res8 = lVar1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x4b0,&local_res8);
  }
  uVar3 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xd8);
  uVar4 = (longlong)*(int *)(param_1 + 0xe0) & 0x1fffffffffffffff;
  if (puVar2 + *(int *)(param_1 + 0xe0) < puVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      FUN_1407e2a80(*puVar2,*(undefined8 *)(param_1 + 0x40));
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != uVar4);
  }
  return;
}



// FUNCTION 1407ddb90 FUN_1407ddb90 body=483 status=ok
// SIG undefined FUN_1407ddb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407ddb90(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  longlong local_c0 [16];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar2 = FUN_1407c85f0(param_1,0);
  if (cVar2 == '\0') {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    uVar4 = 0;
    uVar7 = uVar4;
    if (lVar3 != 0) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_14625a720,local_c8,lVar3);
      if ((local_c8[0] != -1) && (lVar3 = DAT_14625a720 + (longlong)local_c8[0] * 0x18, lVar3 != 0))
      {
        uVar7 = *(ulonglong *)(lVar3 + 8);
      }
    }
    if (uVar7 == 0) {
      FUN_1407c10b0(param_1);
    }
    else {
      if ((DAT_1468b616c == '\0') &&
         (plVar1 = *(longlong **)(param_1 + 0x8f8), plVar1 != (longlong *)0x0)) {
        local_40 = (longlong *)0x0;
        local_38 = 0;
        (**(code **)(*plVar1 + 0x2f8))(plVar1,local_c0);
        plVar1 = local_40;
        if (*(char *)(param_1 + 0x8ea) == '\0') {
          *(undefined1 *)(param_1 + 0x8e9) = 0;
        }
        if (*(char *)(param_1 + 0x8ec) == '\0') {
          *(undefined1 *)(param_1 + 0x8eb) = 0;
        }
        if (*(char *)(param_1 + 0x8ee) == '\0') {
          *(undefined1 *)(param_1 + 0x8ed) = 0;
        }
        plVar5 = local_c0;
        if (local_40 != (longlong *)0x0) {
          plVar5 = local_40;
        }
        uVar6 = (longlong)(int)local_38 & 0x1fffffffffffffff;
        if (plVar5 + (int)local_38 < plVar5) {
          uVar6 = uVar4;
        }
        if (uVar6 != 0) {
          do {
            if (*plVar5 != 0) {
              FUN_1407c3840((undefined1 *)(param_1 + 0x8e9),*plVar5 + 0x40);
            }
            plVar5 = plVar5 + 1;
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar6);
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
      }
      FUN_1407c2c60(param_1);
      FUN_1407c3b00(uVar7,param_1);
    }
  }
  return;
}



// FUNCTION 1407ddd80 FUN_1407ddd80 body=648 status=ok
// SIG undefined FUN_1407ddd80(void)

void FUN_1407ddd80(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  ulonglong local_res8;
  longlong *local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  longlong local_58;
  longlong local_50;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  uVar6 = 0;
  uVar5 = uVar6;
  if (lVar2 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14625a720,&local_res8,lVar2);
    if (((int)local_res8 != -1) &&
       (lVar2 = DAT_14625a720 + (longlong)(int)local_res8 * 0x18, lVar2 != 0)) {
      uVar5 = *(ulonglong *)(lVar2 + 8);
    }
  }
  local_res8 = uVar5;
  cVar1 = FUN_1407c85f0(param_1,0);
  if (((cVar1 == '\0') && (uVar5 != 0)) && (iVar8 = *(int *)(param_1 + 0x930), iVar8 != -1)) {
    local_res10 = *(longlong **)(param_1 + 0x940);
    local_res18 = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0x948) & 0x1fffffffffffffff;
    if (local_res10 + *(int *)(param_1 + 0x948) < local_res10) {
      uVar5 = uVar6;
    }
    local_res20 = uVar5;
    if (uVar5 != 0) {
      do {
        uVar6 = 0;
        lVar2 = *local_res10;
        if ((lVar2 != 0) &&
           (lVar3 = (longlong)*(int *)(lVar2 + 0x498), *(int *)(lVar2 + 0x498) != 0)) {
          bVar11 = **(longlong **)(lVar2 + 0x490) != param_1;
          uVar5 = uVar6;
          uVar10 = uVar6;
          do {
            iVar8 = (int)uVar5;
            uVar6 = uVar6 + 1;
            uVar5 = (ulonglong)(iVar8 + 1);
            if ((longlong)uVar6 < lVar3) {
              plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x490) + uVar6 * 8);
              do {
                if (bVar11 != (*plVar4 != param_1)) break;
                uVar5 = (ulonglong)((int)uVar5 + 1);
                uVar6 = uVar6 + 1;
                plVar4 = plVar4 + 1;
              } while ((longlong)uVar6 < lVar3);
            }
            iVar7 = (int)uVar5 - iVar8;
            if (bVar11 != false) {
              iVar9 = (int)uVar10;
              if (iVar9 != iVar8) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(lVar2 + 0x490) + (longlong)iVar9 * 8),
                           (void *)(*(longlong *)(lVar2 + 0x490) + (longlong)iVar8 * 8),
                           (longlong)iVar7 << 3);
              }
              uVar10 = (ulonglong)(uint)(iVar9 + iVar7);
            }
            bVar11 = (bool)(bVar11 ^ 1);
          } while ((longlong)uVar6 < lVar3);
          *(int *)(lVar2 + 0x498) = (int)uVar10;
          uVar5 = local_res20;
        }
        local_res10 = local_res10 + 1;
        local_res18 = local_res18 + 1;
      } while (local_res18 != uVar5);
      iVar8 = *(int *)(param_1 + 0x930);
    }
    lVar2 = (longlong)iVar8 * 0x140 + *(longlong *)(local_res8 + 0x250);
    plVar4 = *(longlong **)(lVar2 + 0x48);
    if (((plVar4 != (longlong *)0x0) && (local_58 = *(longlong *)(lVar2 + 0x50), local_58 != 0)) &&
       (*(char *)(lVar2 + 0x14) == '\x03')) {
      local_50 = lVar2;
      (**(code **)(*plVar4 + 0x2f0))(plVar4,&local_58);
      *(undefined8 *)(lVar2 + 0x50) = 0;
    }
    *(undefined4 *)(*(longlong *)(lVar2 + 0x40) + 0x930) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1407de010 FUN_1407de010 body=41 status=ok
// SIG undefined FUN_1407de010(void)

void FUN_1407de010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_3);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001407de02d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x310))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 1407de040 FUN_1407de040 body=836 status=ok
// SIG undefined FUN_1407de040(void)

ulonglong FUN_1407de040(ulonglong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong *puVar11;
  longlong lVar12;
  float fVar13;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong local_48;
  ulonglong *local_40;
  
  uVar4 = param_1[1];
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_1407bacb0(param_1 + 0xe,&local_res8);
  local_res8 = 0;
  uVar8 = TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x19,&local_res8);
  plVar2 = (longlong *)param_1[8];
  if ((((plVar2 != (longlong *)0x0) && ((char)plVar2[0x111] != '\0')) && (param_1[9] != 0)) &&
     (((int)param_1[0x14] != 0 && (*(char *)((longlong)param_1 + 9) != '\0')))) {
    if ((*(char *)((longlong)param_1 + 10) == '\0') &&
       (cVar5 = (**(code **)(*plVar2 + 0x8e8))(), cVar5 != '\0')) {
      FUN_1407ce570(param_1);
      *(undefined1 *)((longlong)param_1 + 10) = 1;
    }
    cVar5 = *(char *)((longlong)param_1 + 0x5c);
    if (cVar5 != '\0') {
      uVar7 = (int)param_1[0xc] + (int)param_1[0xd];
      uVar8 = (ulonglong)uVar7;
      if ((((int)uVar7 < 1) && (uVar8 = *param_1, *(char *)(uVar8 + 0x1c4) != '\0')) &&
         ((*(char *)((longlong)param_1 + 0x2a) == '\0' &&
          ((*(float *)(param_1 + 0xb) <= 0.0 ||
           (fVar13 = *(float *)(param_1 + 0xb) + *(float *)(uVar8 + 0x1c8),
           fVar13 < *(float *)(uVar8 + 0x230) || fVar13 == *(float *)(uVar8 + 0x230))))))) {
        uVar8 = FUN_1407d7830(param_1);
        cVar5 = *(char *)((longlong)param_1 + 0x5c);
      }
      if (((cVar5 != '\0') && (*(int *)((longlong)param_1 + 0x6c) < 1)) && ((int)param_1[0xc] < 1))
      {
        return uVar8;
      }
    }
    uVar8 = param_1[8];
    if ((uVar8 == 0) || (uVar3 = *param_1, uVar3 == 0)) {
      cVar5 = '\0';
    }
    else if (*(char *)(uVar8 + 0x8c8) == '\0') {
      if ((*(float *)((longlong)param_1 + 0xc) <= 0.0) ||
         (*(float *)(uVar8 + 0x8f0) <=
          *(float *)(uVar3 + 0x230) - *(float *)((longlong)param_1 + 0xc))) {
        lVar12 = *(longlong *)(uVar3 + 0x260);
        lVar1 = lVar12 + (longlong)*(int *)(uVar3 + 0x268) * 0xc;
        for (; cVar5 = '\0', lVar12 != lVar1; lVar12 = lVar12 + 0xc) {
          cVar5 = FUN_1407dfea0(param_1[8],lVar12);
          if (cVar5 != '\0') {
            cVar5 = '\x01';
            break;
          }
        }
      }
      else {
        cVar5 = '\x01';
      }
    }
    else {
      cVar5 = '\x01';
    }
    *(char *)(param_1 + 1) = cVar5;
    if ((((char)uVar4 == '\0') && (cVar5 != '\0')) && (*param_1 != 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(*param_1 + 0x230);
    }
    uVar8 = FUN_1407c33f0(param_1);
    if (((char)param_1[1] != '\0') && (uVar8 = FUN_1407cd3c0(param_1,0), (char)uVar8 == '\0')) {
      local_48 = param_1[10];
      local_40 = param_1;
      (**(code **)(*(longlong *)param_1[9] + 0x288))((longlong *)param_1[9],&local_48);
      FUN_1407c36b0(param_1);
      uVar8 = param_1[8];
      uVar4 = param_1[0x12];
      if (((uVar8 != 0) &&
          ((0 < *(int *)(uVar8 + 0x960) &&
           (bVar6 = *(char *)(uVar8 + 0x968) - 2, uVar8 = (ulonglong)bVar6, bVar6 < 2)))) &&
         (plVar2 = (longlong *)param_1[9], plVar2 != (longlong *)0x0)) {
        local_48 = param_1[10];
        *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
        local_40 = param_1;
        (**(code **)(*plVar2 + 0x2d8))(plVar2,&local_res10,&local_48);
        local_res8 = 0;
        if (local_res10 != 0) {
          iVar10 = *(int *)(param_1[8] + 0x960);
          if (0 < iVar10) {
            puVar11 = *(ulonglong **)(param_1[8] + 0x958);
            iVar9 = 0;
            do {
              if (*puVar11 == local_res10) {
                *(int *)(param_1 + 0x12) = iVar9;
                break;
              }
              iVar9 = iVar9 + 1;
              puVar11 = puVar11 + 6;
            } while (iVar9 < iVar10);
          }
        }
        if ((int)param_1[0x12] == -1) {
          local_48 = param_1[10];
          local_40 = param_1;
          local_res10 = (**(code **)(*(longlong *)param_1[9] + 0x2c8))
                                  ((longlong *)param_1[9],&local_48);
          if (-1 < (int)local_res10) {
            uVar8 = (ulonglong)(uint)((int)local_res10 >> 0x1f) << 0x20 | local_res10 & 0xffffffff;
            local_res10 = (longlong)uVar8 / (longlong)*(int *)(param_1[8] + 0x960) & 0xffffffff;
            *(int *)(param_1 + 0x12) =
                 (int)((longlong)uVar8 % (longlong)*(int *)(param_1[8] + 0x960));
          }
        }
        iVar10 = (int)param_1[0x12];
        if ((int)param_1[0x12] == -1) {
          *(undefined4 *)(param_1 + 0x12) = 0;
          iVar10 = 0;
        }
        uVar8 = local_res10;
        if (iVar10 != (int)uVar4) {
          uVar8 = FUN_1407c11b0(param_1,iVar10,param_1[8]);
        }
      }
    }
  }
  return uVar8;
}



// FUNCTION 1407de390 SetContent body=42 status=ok
// SIG undefined SetContent(void)

void UContentWidget::SetContent(undefined8 param_1,undefined8 param_2)

{
  FUN_1407de3c0();
  FUN_1407c3590(param_1,param_2);
  return;
}



// FUNCTION 1407de3c0 FUN_1407de3c0 body=272 status=ok
// SIG undefined FUN_1407de3c0(void)

void FUN_1407de3c0(longlong param_1,longlong *param_2)

{
  float fVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 local_48;
  longlong local_40;
  
  piVar2 = (int *)*param_2;
  uVar6 = 0;
  piVar2[1] = -1;
  iVar5 = *(int *)(param_1 + 0x38) + -1;
  iVar9 = *piVar2;
  if (iVar5 <= *piVar2) {
    iVar9 = iVar5;
  }
  uVar7 = uVar6;
  uVar8 = uVar6;
  if (-1 < iVar9) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x30);
      iVar5 = (int)uVar8;
      if (((iVar5 != *piVar2) || (fVar1 = *(float *)(uVar6 + 0x18 + lVar3), fVar1 <= 0.0)) ||
         (fVar1 <= *(float *)(*(longlong *)param_2[1] + 0x230) - (float)piVar2[2])) {
        local_48 = *(undefined8 *)(uVar6 + *(longlong *)(*param_2 + 0x10));
        local_40 = param_2[1];
        cVar4 = (**(code **)(**(longlong **)(uVar6 + lVar3) + 0x298))
                          (*(longlong **)(uVar6 + lVar3),&local_48);
        if ((cVar4 == '\0') &&
           (cVar4 = (**(code **)(**(longlong **)(uVar6 + lVar3) + 0x290))
                              (*(longlong **)(uVar6 + lVar3),&local_48), cVar4 != '\0')) {
          piVar2[1] = iVar5;
          return;
        }
      }
      uVar7 = uVar7 + 1;
      uVar6 = uVar6 + 0x38;
      uVar8 = (ulonglong)(iVar5 + 1);
    } while ((longlong)uVar7 <= (longlong)iVar9);
  }
  return;
}



// FUNCTION 1407de4d0 FUN_1407de4d0 body=2151 status=ok
// SIG undefined FUN_1407de4d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407de4d0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  void *_Src;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  void *pvVar23;
  byte bVar24;
  undefined8 *puVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  longlong *plVar29;
  int iVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined1 auStack_78f8 [32];
  char local_78d8;
  int local_78d4;
  ulonglong local_78d0;
  uint local_78c8;
  uint local_78c4;
  longlong local_78c0;
  longlong local_78b8;
  longlong *local_78b0;
  undefined8 local_78a8;
  longlong *local_78a0;
  undefined8 local_7898;
  longlong local_7890;
  longlong lStack_7888;
  longlong local_7880;
  longlong lStack_7878;
  longlong local_7870;
  undefined8 local_7868 [1280];
  undefined8 *local_5068;
  ulonglong local_5060;
  longlong local_5058 [1280];
  longlong *local_2858;
  undefined8 local_2850;
  undefined8 local_2848 [1280];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78f8;
  if ((*(longlong *)(param_1 + 0x118) != 0) && (lVar12 = AActor::GetLevel(), lVar12 != 0)) {
    lVar20 = (longlong)*(int *)(param_1 + 0x708);
    iVar27 = 0;
    if (*(int *)(param_1 + 0x708) != 0) {
      local_78d4 = 0;
      if ((**(longlong **)(param_1 + 0x700) == 0) || (lVar13 = AActor::GetLevel(), lVar13 == lVar12)
         ) {
        bVar24 = 1;
      }
      else {
        bVar24 = 0;
      }
      lVar13 = 0;
      do {
        lVar13 = lVar13 + 1;
        iVar26 = iVar27 + 1;
        local_78c0 = CONCAT44(local_78c0._4_4_,iVar27);
        iVar10 = iVar27;
        iVar27 = iVar26;
        if (lVar13 < lVar20) {
          do {
            if ((*(longlong *)(*(longlong *)(param_1 + 0x700) + lVar13 * 8) == 0) ||
               (lVar14 = AActor::GetLevel(), lVar14 == lVar12)) {
              bVar8 = 1;
            }
            else {
              bVar8 = 0;
            }
            if (bVar24 != bVar8) break;
            iVar27 = iVar27 + 1;
            lVar13 = lVar13 + 1;
          } while (lVar13 < lVar20);
          iVar10 = (int)local_78c0;
        }
        if (bVar24 != 0) {
          if (local_78d4 != iVar10) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x700) + (longlong)local_78d4 * 8),
                       (void *)(*(longlong *)(param_1 + 0x700) + (longlong)iVar10 * 8),
                       (longlong)(iVar27 - iVar10) << 3);
          }
          local_78d4 = local_78d4 + (iVar27 - iVar10);
        }
        bVar24 = bVar24 ^ 1;
      } while (lVar13 < lVar20);
      *(int *)(param_1 + 0x708) = local_78d4;
    }
    uVar21 = 0;
    local_78b8 = *(longlong *)(param_1 + 0x120);
    local_2858 = (longlong *)0x0;
    local_2850 = 0;
    if (local_78b8 == 0) {
      local_78b8 = FUN_1423407b0(param_1);
    }
    local_78b0 = &local_78b8;
    local_78a8 = FUN_14073d760(&local_78b8,DAT_14685c220);
    plVar29 = local_78b0;
    local_78a0 = &local_78b8;
    local_7898 = 0;
    lVar20 = FUN_14073d760(local_78b0,local_78a8);
    lVar13 = FUN_14073d760(local_78a0);
    while (lVar20 != lVar13) {
      FUN_1407bc910(&local_7890,*(undefined8 *)(*(longlong *)(lVar20 + 0x10) + 0x118));
      if ((local_7890 != 0) && (lVar20 = AActor::GetLevel(), uVar28 = local_2850, lVar20 == lVar12))
      {
        lVar20 = (longlong)(int)local_2850;
        iVar27 = (int)local_2850 + 1;
        local_2850 = CONCAT44(local_2850._4_4_,iVar27);
        if (local_2850._4_4_ < iVar27) {
          FUN_1407d8d40(local_5058,uVar28 & 0xffffffff);
        }
        plVar18 = local_5058;
        if (local_2858 != (longlong *)0x0) {
          plVar18 = local_2858;
        }
        plVar18[lVar20 * 5] = local_7890;
        (plVar18 + lVar20 * 5)[1] = lStack_7888;
        plVar18[lVar20 * 5 + 2] = local_7880;
        (plVar18 + lVar20 * 5 + 2)[1] = lStack_7878;
        plVar18[lVar20 * 5 + 4] = local_7870;
      }
      lVar20 = FUN_14073d760(plVar29);
    }
    local_5068 = (undefined8 *)0x0;
    local_5060 = 0;
    plVar29 = local_5058;
    if (local_2858 != (longlong *)0x0) {
      plVar29 = local_2858;
    }
    local_78d0 = 0;
    local_78c4 = 0;
    plVar18 = plVar29 + (longlong)(int)local_2850 * 5;
    uVar31 = uVar21;
    uVar28 = uVar21;
    uVar15 = uVar21;
    uVar33 = uVar21;
    if (plVar29 != plVar18) {
      do {
        lVar12 = 0;
        lVar20 = *plVar29;
        if ((((lVar20 == 0) || (plVar29[3] == 0)) || (plVar29[2] == 0)) ||
           (((plVar29[4] == 0 || (*(char *)(plVar29[4] + 0x740) != '\0')) ||
            ((*(byte *)(lVar20 + 0x94) & 2) != 0)))) {
LAB_1407de8db:
          iVar27 = (int)uVar31;
          local_5060 = CONCAT44(local_5060._4_4_,iVar27 + 1);
          if ((int)uVar28 < iVar27 + 1) {
            FUN_1407d8d40(local_7868,uVar31);
          }
          puVar19 = local_7868;
          if (local_5068 != (undefined8 *)0x0) {
            puVar19 = local_5068;
          }
        }
        else {
          uVar11 = *(uint *)(lVar20 + 0xc);
          if ((int)uVar11 < (int)DAT_1469e91c4) {
            uVar17 = uVar11 & 0xffff;
            if ((int)uVar11 < 0) {
              uVar11 = uVar11 + 0xffff;
              uVar17 = uVar17 - 0x10000;
            }
            lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8) +
                     (longlong)(int)uVar17 * 0x18;
          }
          if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_1407de8db;
          iVar27 = (int)uVar33;
          local_78c8 = iVar27 + 1;
          if ((int)uVar15 < (int)local_78c8) {
            FUN_1407d8f10(&local_78d0);
            uVar15 = (ulonglong)local_78c4;
            uVar21 = local_78d0;
          }
          uVar33 = (ulonglong)local_78c8;
          puVar25 = (undefined8 *)((longlong)iVar27 * 0x2810 + uVar21);
          _guard_xfg_dispatch_icall_nop(puVar25,0,0x2810);
          iVar27 = *(int *)(puVar25 + 0x501);
          *(int *)(puVar25 + 0x501) = iVar27 + 1;
          if (*(int *)((longlong)puVar25 + 0x280c) < iVar27 + 1) {
            FUN_1407d8d40(puVar25);
          }
          puVar19 = (undefined8 *)puVar25[0x500];
          if ((undefined8 *)puVar25[0x500] == (undefined8 *)0x0) {
            puVar19 = puVar25;
          }
        }
        lVar12 = (longlong)iVar27;
        lVar20 = plVar29[1];
        puVar19[lVar12 * 5] = *plVar29;
        (puVar19 + lVar12 * 5)[1] = lVar20;
        lVar20 = plVar29[3];
        puVar19[lVar12 * 5 + 2] = plVar29[2];
        (puVar19 + lVar12 * 5 + 2)[1] = lVar20;
        plVar1 = plVar29 + 4;
        plVar29 = plVar29 + 5;
        puVar19[lVar12 * 5 + 4] = *plVar1;
        if (plVar29 == plVar18) break;
        uVar28 = local_5060 >> 0x20;
        uVar31 = local_5060 & 0xffffffff;
      } while( true );
    }
    do {
      local_78d8 = '\0';
      if ((int)uVar33 < 1) break;
      local_78c0 = 0;
      local_78d4 = 1;
      do {
        lVar20 = local_78c0;
        lVar12 = local_78c0;
        iVar27 = local_78d4;
        iVar10 = local_78d4;
        if (local_78d4 < (int)uVar33) {
          do {
            lVar32 = lVar12 + 0x2810;
            lVar13 = uVar21 + lVar32;
            lVar14 = lVar20 + uVar21;
            lVar22 = *(longlong *)(lVar13 + 0x2800);
            if (*(longlong *)(lVar13 + 0x2800) == 0) {
              lVar22 = lVar13;
            }
            lVar13 = lVar22 + (longlong)*(int *)(lVar13 + 0x2808) * 0x28;
            for (; iVar26 = iVar10 + 1, lVar22 != lVar13; lVar22 = lVar22 + 0x28) {
              cVar9 = FUN_1407ce950(lVar22,lVar14);
              if (cVar9 != '\0') {
                local_78d8 = '\x01';
                pvVar23 = (void *)(local_78d0 + lVar32);
                iVar26 = *(int *)((longlong)pvVar23 + 0x2808);
                if (iVar26 != 0) {
                  iVar30 = *(int *)(lVar14 + 0x2808);
                  if (*(int *)(lVar14 + 0x280c) < iVar30 + iVar26) {
                    FUN_1407d9700(lVar14);
                    iVar30 = *(int *)(lVar14 + 0x2808);
                  }
                  _Src = *(void **)((longlong)pvVar23 + 0x2800);
                  if (*(void **)((longlong)pvVar23 + 0x2800) == (void *)0x0) {
                    _Src = pvVar23;
                  }
                  lVar20 = *(longlong *)(lVar14 + 0x2800);
                  if (*(longlong *)(lVar14 + 0x2800) == 0) {
                    lVar20 = lVar14;
                  }
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar20 + (longlong)iVar30 * 0x28),_Src,(longlong)iVar26 * 0x28
                            );
                  *(int *)(lVar14 + 0x2808) = *(int *)(lVar14 + 0x2808) + iVar26;
                }
                pvVar23 = (void *)((longlong)iVar27 * 0x2810 + local_78d0);
                if (*(longlong *)((longlong)pvVar23 + 0x2800) != 0) {
                  FMemory::Free();
                }
                iVar26 = ((int)uVar33 - iVar27) + -1;
                if (iVar26 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            (pvVar23,(void *)((longlong)(iVar10 + 1) * 0x2810 + local_78d0),
                             (longlong)iVar26 * 0x2810);
                }
                local_78c8 = (int)uVar33 - 1;
                FUN_1407d93d0(&local_78d0);
                uVar33 = (ulonglong)local_78c8;
                iVar27 = iVar27 + -1;
                lVar20 = local_78c0;
                lVar32 = lVar12;
                iVar26 = iVar10;
                break;
              }
              lVar20 = local_78c0;
            }
            iVar27 = iVar27 + 1;
            uVar21 = local_78d0;
            lVar12 = lVar32;
            iVar10 = iVar26;
          } while (iVar27 < (int)uVar33);
        }
        iVar27 = local_78d4 + 1;
        local_78c0 = lVar20 + 0x2810;
        bVar3 = local_78d4 < (int)uVar33;
        local_78d4 = iVar27;
      } while (bVar3);
    } while (local_78d8 != '\0');
    uVar31 = (longlong)(int)uVar33 * 0x2810 + uVar21;
    for (uVar28 = uVar21; uVar15 = uVar21, uVar28 != uVar31; uVar28 = uVar28 + 0x2810) {
      uVar15 = *(ulonglong *)(uVar28 + 0x2800);
      if (*(ulonglong *)(uVar28 + 0x2800) == 0) {
        uVar15 = uVar28;
      }
      FUN_1407c4610(*(undefined8 *)(uVar15 + 0x20),uVar28);
    }
    for (; uVar15 != uVar31; uVar15 = uVar15 + 0x2810) {
      uVar28 = *(ulonglong *)(uVar15 + 0x2800);
      if (*(ulonglong *)(uVar15 + 0x2800) == 0) {
        uVar28 = uVar15;
      }
      uVar2 = uVar28 + (longlong)*(int *)(uVar15 + 0x2808) * 0x28;
      for (; uVar28 != uVar2; uVar28 = uVar28 + 0x28) {
        FUN_1407da4b0(*(undefined8 *)(uVar28 + 0x20),uVar15);
      }
    }
    puVar19 = local_7868;
    if (local_5068 != (undefined8 *)0x0) {
      puVar19 = local_5068;
    }
    puVar25 = puVar19 + (longlong)(int)local_5060 * 5;
    for (; puVar19 != puVar25; puVar19 = puVar19 + 5) {
      if (puVar19[4] != 0) {
        local_48 = (undefined8 *)0x0;
        local_40 = 1;
        FUN_1407d8d40(local_2848,0);
        uVar7 = puVar19[1];
        puVar16 = local_2848;
        if (local_48 != (undefined8 *)0x0) {
          puVar16 = local_48;
        }
        *puVar16 = *puVar19;
        puVar16[1] = uVar7;
        uVar4 = *(undefined4 *)((longlong)puVar19 + 0x14);
        uVar5 = *(undefined4 *)(puVar19 + 3);
        uVar6 = *(undefined4 *)((longlong)puVar19 + 0x1c);
        *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(puVar19 + 2);
        *(undefined4 *)((longlong)puVar16 + 0x14) = uVar4;
        *(undefined4 *)(puVar16 + 3) = uVar5;
        *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar6;
        puVar16[4] = puVar19[4];
        FUN_1407da4b0(puVar19[4]);
        if (local_48 != (undefined8 *)0x0) {
          FMemory::Free();
        }
      }
    }
    if ((int)uVar33 != 0) {
      plVar29 = (longlong *)(uVar21 + 0x2800);
      do {
        if (*plVar29 != 0) {
          FMemory::Free();
        }
        plVar29 = plVar29 + 0x502;
        uVar11 = (int)uVar33 - 1;
        uVar33 = (ulonglong)uVar11;
      } while (uVar11 != 0);
    }
    if (uVar21 != 0) {
      FMemory::Free(uVar21);
    }
    if (local_5068 != (undefined8 *)0x0) {
      FMemory::Free(local_5068);
    }
    if (local_2858 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407ded40 FUN_1407ded40 body=520 status=ok
// SIG undefined FUN_1407ded40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407ded40(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  plVar1 = param_1 + 0x4e;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  if (*(int *)((longlong)param_1 + 0x27c) < 4) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,4);
  }
  plVar2 = param_1 + 0x4c;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  if (*(int *)((longlong)param_1 + 0x26c) < 4) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar2,4);
  }
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar7 = *(longlong *)(lVar7 + 0x148);
  if (lVar7 != 0) {
    lVar8 = ARemnantQuest::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_1407dede8;
  }
  lVar7 = 0;
LAB_1407dede8:
  plVar9 = *(longlong **)(lVar7 + 0x470);
  plVar3 = plVar9 + *(int *)(lVar7 + 0x478);
  for (; plVar9 != plVar3; plVar9 = plVar9 + 1) {
    if ((*plVar9 != 0) && (lVar7 = *(longlong *)(*plVar9 + 0x118), lVar7 != 0)) {
      lVar8 = FUN_14291fb80();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && (lVar8 = *(longlong *)(lVar7 + 0x488), lVar8 != 0)) {
        iVar4 = (int)param_1[0x4f];
        *(int *)(param_1 + 0x4f) = iVar4 + 1;
        if (*(int *)((longlong)param_1 + 0x27c) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
        }
        *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = lVar7;
        lVar7 = *(longlong *)(lVar8 + 0x168);
        if (lVar7 == 0) {
          puVar10 = &local_2c;
          local_2c = _DAT_1468b5d90;
          local_24 = DAT_1468b5d98;
        }
        else {
          puVar10 = (undefined8 *)&local_38;
          local_38 = *(undefined4 *)(lVar7 + 0x220);
          local_30 = *(undefined4 *)(lVar7 + 0x228);
          uStack_34 = *(undefined4 *)(lVar7 + 0x224);
        }
        iVar4 = (int)param_1[0x4d];
        *(int *)(param_1 + 0x4d) = iVar4 + 1;
        if (*(int *)((longlong)param_1 + 0x26c) < iVar4 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
        }
        lVar7 = *plVar2;
        uVar5 = *(undefined4 *)(puVar10 + 1);
        *(undefined8 *)(lVar7 + (longlong)iVar4 * 0xc) = *puVar10;
        *(undefined4 *)(lVar7 + 8 + (longlong)iVar4 * 0xc) = uVar5;
      }
    }
  }
  return;
}



// FUNCTION 1407def50 FUN_1407def50 body=113 status=ok
// SIG undefined FUN_1407def50(void)

void FUN_1407def50(longlong param_1)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_40;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x8e8) == '\x02') {
    FUN_1407cb7a0(*(longlong *)(param_1 + 0xd8),local_38);
    local_40 = uStack_20;
    local_58 = local_28;
    uStack_54 = uStack_24;
    local_50 = uStack_20;
    FUN_142ddc240(param_1 + 0x10,&local_58);
    return;
  }
  FUN_142de0da0(param_1);
  return;
}



// FUNCTION 1407defd0 FUN_1407defd0 body=1509 status=ok
// SIG undefined FUN_1407defd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1407defd0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  float *pfVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  longlong local_188;
  undefined8 local_180;
  int local_178;
  longlong *local_170 [2];
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  undefined4 local_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_120 [40];
  undefined1 local_f8 [48];
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if ((char)param_1[0x1e] != '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,local_170);
  if (local_170[0] == (longlong *)0x0) {
    return;
  }
  plVar7 = (longlong *)FUN_1428dfc70();
  plVar13 = local_170[0];
  plVar14 = local_170[0];
  while( true ) {
    if (plVar14 == (longlong *)0x0) {
      return;
    }
    if (plVar14 == plVar7) break;
    plVar14 = (longlong *)plVar14[6];
  }
  param_1[0x1b] = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(float *)(param_1 + 0x1c) = DAT_1468b5d98;
  *(ulonglong *)((longlong)param_1 + 0xe4) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(float *)((longlong)param_1 + 0xec) = DAT_1468b5d98;
  plVar14 = (longlong *)local_170[0][0x1f];
  if (plVar14 == (longlong *)0x0) {
    (**(code **)(*local_170[0] + 0x368))(local_170[0]);
    plVar14 = (longlong *)plVar13[0x1f];
  }
  plVar13 = (longlong *)0x0;
  if (plVar14 != (longlong *)0x0) {
    lVar8 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1407df131;
  }
  plVar14 = plVar13;
LAB_1407df131:
  fVar15 = DAT_1468b5d98;
  fVar16 = DAT_1468b5d94;
  fVar17 = DAT_1468b5d90;
  bVar3 = false;
  local_188 = 0;
  local_180 = 0;
  local_178 = -1;
  uVar9 = FUN_1429f11d0();
  local_198 = 0;
  FUN_1417a5560(uVar9,&local_188,1,0x10);
  do {
    local_178 = local_178 + 1;
    fVar18 = fVar15;
    fVar19 = fVar16;
    fVar20 = fVar17;
    if ((int)local_180 <= local_178) break;
  } while (*(longlong *)(local_188 + (longlong)local_178 * 8) == 0);
  do {
    if ((local_178 < 0) || ((int)local_180 <= local_178)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      if (local_188 != 0) {
        FMemory::Free();
      }
      *(ulonglong *)((longlong)param_1 + 0xe4) =
           CONCAT44((fVar16 - fVar19) * 0.5,(fVar17 - fVar20) * 0.5);
      *(float *)((longlong)param_1 + 0xec) = (fVar15 - fVar18) * 0.5;
      param_1[0x1b] =
           CONCAT44(fVar19 + *(float *)(param_1 + 0x1d),
                    fVar20 + *(float *)((longlong)param_1 + 0xe4));
      *(float *)(param_1 + 0x1c) = fVar18 + *(float *)((longlong)param_1 + 0xec);
      return;
    }
    plVar7 = *(longlong **)(local_188 + (longlong)local_178 * 8);
    if ((plVar7 != (longlong *)0x0) && (plVar7[4] != 0)) {
      plVar1 = *(longlong **)(plVar7[4] + 0x10);
      plVar11 = plVar13;
      if (local_170[0] != (longlong *)0x0) {
        plVar10 = (longlong *)FUN_1428dfc70();
        for (plVar2 = local_170[0];
            (plVar11 = plVar13, plVar2 != (longlong *)0x0 &&
            (plVar11 = local_170[0], plVar2 != plVar10)); plVar2 = (longlong *)plVar2[6]) {
        }
      }
      if (((plVar1 == plVar11) && (iVar6 = (**(code **)(*plVar7 + 0x4e8))(plVar7), iVar6 != 0)) &&
         (cVar5 = UObjectBaseUtility::IsTemplate(plVar7,0x30), cVar5 != '\0')) {
        if (plVar14 != (longlong *)0x0) {
          lVar8 = FUN_142912e90();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((!bVar4) || (plVar7[3] != DAT_146aefb00)) goto LAB_1407df452;
        }
        lVar8 = FUN_142a07000();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (*(char *)((longlong)param_1 + 0xa9) == '\0') goto LAB_1407df452;
          FUN_1423b4660(plVar7);
          if (plVar7[0xe3] != 0) {
            FUN_14276e770();
          }
        }
        lVar8 = *plVar7;
        uVar9 = FUN_14238d0c0(plVar7,local_f8);
        pfVar12 = (float *)(**(code **)(lVar8 + 0x4a8))(plVar7,local_120,uVar9);
        local_148 = CONCAT31(local_148._1_3_,1);
        fStack_154 = pfVar12[3] + *pfVar12;
        local_150 = pfVar12[4] + pfVar12[1];
        fStack_14c = pfVar12[5] + pfVar12[2];
        local_160 = *pfVar12 - pfVar12[3];
        fStack_15c = pfVar12[1] - pfVar12[4];
        fStack_158 = pfVar12[2] - pfVar12[5];
        if (bVar3) {
          if (local_160 < fVar20) {
            fVar20 = local_160;
          }
          if (fStack_15c < fVar19) {
            fVar19 = fStack_15c;
          }
          if (fStack_158 < fVar18) {
            fVar18 = fStack_158;
          }
          if (fVar17 < fStack_154) {
            fVar17 = fStack_154;
          }
          if (fVar16 < local_150) {
            fVar16 = local_150;
          }
          if (fVar15 < fStack_14c) {
            fVar15 = fStack_14c;
          }
        }
        else {
          local_130 = CONCAT44(fStack_14c,local_150);
          bVar3 = true;
          local_128 = local_148;
          fVar15 = fStack_14c;
          fVar16 = local_150;
          fVar17 = fStack_154;
          fVar18 = fStack_158;
          fVar19 = fStack_15c;
          fVar20 = local_160;
          local_140 = local_160;
          fStack_13c = fStack_15c;
          fStack_138 = fStack_158;
          fStack_134 = fStack_154;
        }
      }
    }
LAB_1407df452:
    do {
      local_178 = local_178 + 1;
      if ((int)local_180 <= local_178) break;
    } while (*(longlong *)(local_188 + (longlong)local_178 * 8) == 0);
  } while( true );
}



// FUNCTION 1407df5c0 FUN_1407df5c0 body=1014 status=ok
// SIG undefined FUN_1407df5c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407df5c0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_1528 [32];
  uint local_1508;
  longlong local_1500;
  undefined4 local_14f8;
  longlong local_14f0;
  undefined4 local_14e8;
  longlong local_14e0;
  undefined4 local_14d8;
  undefined4 local_14c8 [100];
  undefined4 *local_1338;
  undefined8 local_1330;
  undefined1 local_1328 [400];
  undefined1 *local_1198;
  ulonglong local_1190;
  undefined1 local_1188 [400];
  longlong local_ff8;
  undefined8 local_ff0;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1528;
  if (*(char *)(param_1 + 0x968) == '\x03') {
    plVar5 = *(longlong **)(param_1 + 0x940);
    uVar11 = 0;
    local_ff8 = 0;
    local_ff0 = 0;
    local_48 = 0;
    uVar12 = (longlong)*(int *)(param_1 + 0x948) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(param_1 + 0x948) < plVar5) {
      uVar12 = uVar11;
    }
    local_40 = 0;
    uVar10 = uVar11;
    if (uVar12 != 0) {
      do {
        lVar6 = *plVar5;
        if (lVar6 != 0) {
          lVar13 = *(longlong *)(lVar6 + 0x168);
          if (lVar13 == 0) {
            local_14e8 = DAT_1468b5d98;
            plVar2 = &local_14f0;
            local_14f0 = _DAT_1468b5d90;
          }
          else {
            plVar2 = &local_1500;
            local_14f8 = *(undefined4 *)(lVar13 + 0x228);
            local_1500 = *(longlong *)(lVar13 + 0x220);
          }
          local_14e0 = *plVar2;
          local_14d8 = (undefined4)plVar2[1];
          FUN_142470bf0(local_1188,lVar6,&local_14e0);
        }
        plVar5 = plVar5 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar12);
    }
    cVar1 = FUN_142486bb0(local_1188);
    if (cVar1 == '\0') {
      iVar8 = *(int *)(param_1 + 0x960);
      if (iVar8 != 0) {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x958) + 0x18);
        do {
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 6;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      *(undefined4 *)(param_1 + 0x960) = 0;
      if (*(int *)(param_1 + 0x964) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(param_1 + 0x958,0);
      }
    }
    else {
      FUN_1424757a0(local_1188);
      local_1198 = (undefined1 *)0x0;
      local_1190 = 0;
      FUN_14247e160(local_1188,*(undefined4 *)(param_1 + 0x96c),local_1328);
      iVar8 = *(int *)(param_1 + 0x960);
      if (iVar8 < (int)local_1190) {
        FUN_1407bfe80(param_1 + 0x958,(int)local_1190 - iVar8);
      }
      else if ((int)local_1190 < iVar8) {
        TArray<FInvItem,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_1 + 0x958,local_1190 & 0xffffffff,iVar8 - (int)local_1190,1);
      }
      local_1508 = 0;
      if (0 < *(int *)(param_1 + 0x960)) {
        local_14f0 = 0;
        local_1500 = 0;
        do {
          lVar13 = local_1500;
          uVar12 = 0;
          lVar6 = *(longlong *)(param_1 + 0x958);
          puVar4 = local_1328;
          if (local_1198 != (undefined1 *)0x0) {
            puVar4 = local_1198;
          }
          local_1338 = (undefined4 *)0x0;
          local_1330 = 0;
          FUN_142480360(local_1188,*(undefined4 *)(puVar4 + local_14f0),local_14c8);
          lVar6 = lVar6 + lVar13;
          *(undefined4 *)(lVar6 + 0x20) = 0;
          if (0x7fffffff < *(uint *)(lVar6 + 0x24)) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(lVar6 + 0x18,0);
          }
          puVar7 = local_14c8;
          if (local_1338 != (undefined4 *)0x0) {
            puVar7 = local_1338;
          }
          uVar10 = (longlong)(int)local_1330 & 0x3fffffffffffffff;
          if (puVar7 + (int)local_1330 < puVar7) {
            uVar10 = 0;
          }
          uVar9 = (uint)uVar11;
          if (uVar10 != 0) {
            do {
              uVar3 = FUN_142480fd0(local_1188,*puVar7);
              iVar8 = *(int *)(lVar6 + 0x20);
              *(int *)(lVar6 + 0x20) = iVar8 + 1;
              if (*(int *)(lVar6 + 0x24) < iVar8 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (lVar6 + 0x18,iVar8);
              }
              puVar7 = puVar7 + 1;
              uVar12 = uVar12 + 1;
              *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + (longlong)iVar8 * 8) = uVar3;
              lVar13 = local_1500;
              uVar9 = local_1508;
            } while (uVar12 != uVar10);
          }
          if (local_1338 != (undefined4 *)0x0) {
            FMemory::Free();
          }
          local_1508 = uVar9 + 1;
          uVar11 = (ulonglong)local_1508;
          local_14f0 = local_14f0 + 4;
          local_1500 = lVar13 + 0x30;
        } while ((int)local_1508 < *(int *)(param_1 + 0x960));
      }
      if (local_1198 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_ff8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407df9c0 FUN_1407df9c0 body=980 status=ok
// SIG undefined FUN_1407df9c0(void)

void FUN_1407df9c0(longlong param_1)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  wchar_t *_Str;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 local_res8;
  int *local_res10;
  undefined8 *local_68;
  int local_60;
  longlong local_58 [2];
  undefined8 local_48 [2];
  undefined8 *puVar11;
  
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar5 = FUN_1423407b0(), lVar5 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    cVar2 = UWorld::IsGameWorld(lVar5);
    if (cVar2 != '\0') {
      return;
    }
  }
  cVar2 = *(char *)(param_1 + 0x968);
  puVar11 = (undefined8 *)0x0;
  if (cVar2 == '\x03') {
    FUN_1407df5c0(param_1);
  }
  else if (cVar2 == '\x02') {
    if ((*(int *)(param_1 + 0x960) == 0) && (0 < *(int *)(param_1 + 0x948))) {
      FUN_1407bfe80(param_1 + 0x958,1);
      lVar5 = *(longlong *)(param_1 + 0x958);
      puVar8 = (undefined8 *)(lVar5 + 0x18);
      if (puVar8 != (undefined8 *)(param_1 + 0x940)) {
        iVar4 = *(int *)(param_1 + 0x948);
        pvVar1 = *(void **)(param_1 + 0x940);
        *(int *)(lVar5 + 0x20) = iVar4;
        if ((iVar4 == 0) && (*(int *)(lVar5 + 0x24) == 0)) {
          *(undefined4 *)(lVar5 + 0x24) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar8,iVar4);
          _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar1,(longlong)iVar4 << 3);
        }
      }
    }
    else {
      plVar14 = (longlong *)(param_1 + 0x940);
      *(undefined4 *)(param_1 + 0x948) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x94c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar14,0);
      }
      lVar5 = *(longlong *)(param_1 + 0x958);
      lVar15 = (longlong)*(int *)(param_1 + 0x960) * 0x30 + lVar5;
      for (; lVar5 != lVar15; lVar5 = lVar5 + 0x30) {
        iVar4 = *(int *)(lVar5 + 0x20);
        if (iVar4 != 0) {
          iVar3 = *(int *)(param_1 + 0x948);
          if (*(int *)(param_1 + 0x94c) < iVar3 + iVar4) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(plVar14);
            iVar3 = *(int *)(param_1 + 0x948);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar14 + (longlong)iVar3 * 8),*(void **)(lVar5 + 0x18),
                     (longlong)iVar4 << 3);
          *(int *)(param_1 + 0x948) = *(int *)(param_1 + 0x948) + iVar4;
        }
      }
    }
  }
  else if (cVar2 == '\0') {
    local_60 = *(int *)(param_1 + 0x948);
    lVar5 = (longlong)local_60;
    pvVar1 = *(void **)(param_1 + 0x940);
    local_68 = (undefined8 *)0x0;
    puVar8 = puVar11;
    if (local_60 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_68,local_60,0);
      puVar8 = local_68;
      _guard_xfg_dispatch_icall_nop(local_68,pvVar1,lVar5 << 3);
    }
    puVar6 = (undefined8 *)((longlong)local_60 & 0x1fffffffffffffff);
    if (puVar8 + local_60 < puVar8) {
      puVar6 = puVar11;
    }
    puVar9 = puVar11;
    puVar12 = puVar8;
    if (puVar6 != (undefined8 *)0x0) {
      do {
        FUN_1407d74d0(param_1,*puVar12);
        puVar9 = (undefined8 *)((longlong)puVar9 + 1);
        puVar12 = puVar12 + 1;
      } while (puVar9 != puVar6);
    }
    if (puVar8 != (undefined8 *)0x0) {
      FMemory::Free(puVar8);
    }
  }
  if (0 < *(int *)(param_1 + 0x960)) {
    local_res10 = (int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38)
    ;
    local_res8 = 0;
    puVar8 = puVar11;
    do {
      pwVar13 = (wchar_t *)0x0;
      plVar14 = (longlong *)(*(longlong *)(param_1 + 0x958) + (longlong)puVar8);
      if ((*local_res10 < DAT_14685c430) &&
         (_Init_thread_header(&DAT_14685c430), DAT_14685c430 == -1)) {
        FName::FName(&DAT_14685c428,&DAT_1440d7da4,1);
        _Init_thread_footer(&DAT_14685c430);
      }
      iVar4 = 0;
      if ((*plVar14 == 0) || (*plVar14 == DAT_14685c428)) {
LAB_1407dfcb1:
        FString::PrintfImpl(local_58,&DAT_1440d7ef4,puVar11);
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        plVar7 = (longlong *)FName::FName(&local_res8,&DAT_143f3eda8,1);
        *plVar14 = *plVar7;
      }
      else {
        puVar6 = (undefined8 *)FName::ToString(plVar14,&local_68);
        if (local_48 != puVar6) {
          pwVar13 = (wchar_t *)*puVar6;
          *puVar6 = 0;
          iVar4 = *(int *)(puVar6 + 1);
          puVar6[1] = 0;
        }
        if (local_68 != (undefined8 *)0x0) {
          FMemory::Free();
        }
        _Str = L"";
        if (iVar4 != 0) {
          _Str = pwVar13;
        }
        iVar4 = _wtoi(_Str);
        if (iVar4 != 0) goto LAB_1407dfcb1;
      }
      if (pwVar13 != (wchar_t *)0x0) {
        FMemory::Free(pwVar13);
      }
      uVar10 = (int)puVar11 + 1;
      puVar11 = (undefined8 *)(ulonglong)uVar10;
      puVar8 = puVar8 + 6;
    } while ((int)uVar10 < *(int *)(param_1 + 0x960));
  }
  return;
}



// FUNCTION 1407dfdc0 FUN_1407dfdc0 body=109 status=ok
// SIG undefined FUN_1407dfdc0(void)

void FUN_1407dfdc0(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x90 + lVar3;
  if (lVar3 != lVar2) {
    pfVar1 = (float *)(lVar3 + 0x80);
    do {
      if (pfVar1[-0x1d] != *pfVar1) {
        pfVar1[-0x16] = pfVar1[-0x1d];
        FUN_142df3150(pfVar1 + -0x1e,7);
      }
      lVar3 = lVar3 + 0x90;
      pfVar1 = pfVar1 + 0x24;
    } while (lVar3 != lVar2);
  }
  return;
}



// FUNCTION 1407dfe30 FUN_1407dfe30 body=107 status=ok
// SIG undefined FUN_1407dfe30(void)

void FUN_1407dfe30(longlong param_1)

{
  if (*(float *)(param_1 + 0x44) != *(float *)(param_1 + 0xb8)) {
    *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x44);
    FUN_142df3150(param_1 + 0x40,7);
  }
  if (*(float *)(param_1 + 0xc4) != *(float *)(param_1 + 0x138)) {
    *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xc4);
    FUN_142df3150(param_1 + 0xc0,7);
  }
  if (*(float *)(param_1 + 0x144) != *(float *)(param_1 + 0x1b8)) {
    *(float *)(param_1 + 0x160) = *(float *)(param_1 + 0x144);
    FUN_142df3150(param_1 + 0x140,7);
    return;
  }
  return;
}



// FUNCTION 1407dfea0 FUN_1407dfea0 body=234 status=ok
// SIG undefined FUN_1407dfea0(void)

undefined8 FUN_1407dfea0(longlong param_1,float *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_18;
  float local_10;
  
  if ((*(char *)(param_1 + 0x8d0) != '\0') &&
     (fVar5 = *param_2 - *(float *)(param_1 + 0x220),
     fVar6 = param_2[1] - *(float *)(param_1 + 0x224),
     fVar4 = param_2[2] - *(float *)(param_1 + 0x228),
     fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 <=
     *(float *)(param_1 + 0x8cc) * *(float *)(param_1 + 0x8cc))) {
    return 1;
  }
  if (*(char *)(param_1 + 0x8e8) != '\0') {
    plVar3 = *(longlong **)(param_1 + 0x8d8);
    plVar1 = plVar3 + *(int *)(param_1 + 0x8e0);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*plVar3 != 0) {
        local_18 = *(undefined8 *)param_2;
        local_10 = param_2[2];
        cVar2 = FUN_1428ca150(*plVar3,&local_18,0,0);
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1407dffb0 FUN_1407dffb0 body=15 status=ok
// SIG undefined FUN_1407dffb0(void)

void FUN_1407dffb0(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    FMemory::operator_delete(param_1,0x10);
    return;
  }
  return;
}



// FUNCTION 1407dffc0 FUN_1407dffc0 body=426 status=ok
// SIG undefined FUN_1407dffc0(void)

undefined8 FUN_1407dffc0(longlong param_1,undefined8 *param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong *local_38;
  int local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = *param_2;
  plVar4 = (longlong *)FUN_142c71cc0(*(undefined8 *)(param_1 + 8),*param_3);
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    lVar5 = UMaterialInstanceConstant::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar6 = FUN_1423ac7e0(uVar1);
      lVar5 = *(longlong *)(param_1 + 8);
      if ((lVar6 != 0) && (lVar7 = FUN_142c6f130(lVar5), lVar7 != 0)) {
        FWeakObjectPtr::operator=(&local_res8,lVar7);
        uVar1 = *(undefined8 *)(lVar5 + 0x10);
        local_28 = FUN_1407de010;
        uStack_20 = 0;
        local_38 = (longlong *)0x0;
        local_res10 = local_res8;
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        local_30 = 3;
        local_38 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_FUN_1440e00b8;
          FWeakObjectPtr::operator=(plVar4 + 1,uVar1);
          *(undefined4 *)(plVar4 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)plVar4 + 0x14) = local_28._4_4_;
          *(undefined4 *)(plVar4 + 3) = uStack_20;
          *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_1c;
          *(int *)(plVar4 + 4) = (int)local_res8;
          *(undefined4 *)((longlong)plVar4 + 0x24) = local_res10._4_4_;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar4[5] = lVar5;
          *plVar4 = (longlong)&PTR_FUN_1440e0100;
        }
        FUN_142279220(lVar6,&local_38,lVar2);
        if (local_30 != 0) {
          if (local_38 == (longlong *)0x0) {
            return 1;
          }
          (**(code **)(*local_38 + 0x28))(local_38,0);
          if (local_38 != (longlong *)0x0) {
            local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
          }
          local_30 = 0;
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free(local_38);
        }
      }
      return 1;
    }
  }
  return 1;
}



// FUNCTION 1407e0180 FUN_1407e0180 body=54 status=ok
// SIG undefined FUN_1407e0180(void)

undefined8 * FUN_1407e0180(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)((longlong)param_1 + 0xc);
  *param_2 = *param_1;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + 1);
  *(undefined1 *)(param_2 + 2) = uVar1;
  FUN_1407c0ab0(param_2);
  return param_2;
}



// FUNCTION 1407e01c0 FUN_1407e01c0 body=116 status=ok
// SIG undefined FUN_1407e01c0(void)

uint * FUN_1407e01c0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  uVar4 = 0;
  *param_2 = 0;
  uVar5 = uVar4;
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x980), lVar1 != 0)) {
    uVar5 = *(ulonglong *)(lVar1 + 0x590);
  }
  *(ulonglong *)(param_2 + 2) = uVar5;
  if (uVar5 != 0) {
    while (((iVar3 = (int)uVar4, -1 < iVar3 && (iVar3 < *(int *)(uVar5 + 0x6f8))) &&
           (cVar2 = FUN_1407bead0(param_2), cVar2 == '\0'))) {
      *param_2 = iVar3 + 1U;
      uVar4 = (ulonglong)(iVar3 + 1U);
    }
  }
  return param_2;
}



// FUNCTION 1407e0240 FUN_1407e0240 body=49 status=ok
// SIG undefined FUN_1407e0240(void)

undefined8 * FUN_1407e0240(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)((longlong)param_1 + 0xc);
  *param_2 = *param_1;
  *(undefined1 *)(param_2 + 2) = uVar1;
  param_2[1] = 0xffffffffffffffff;
  FUN_1407c0ab0(param_2);
  return param_2;
}



// FUNCTION 1407e0280 FUN_1407e0280 body=18 status=ok
// SIG undefined FUN_1407e0280(void)

undefined4 * FUN_1407e0280(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 1407e02a0 FUN_1407e02a0 body=151 status=ok
// SIG undefined FUN_1407e02a0(void)

longlong FUN_1407e02a0(void)

{
  if (DAT_14685c6e0 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnDLCScript",&DAT_14685c6e0,FUN_140447710,0x28,0x10000001
                  ,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14685c6e0;
}



// FUNCTION 1407e0340 FUN_1407e0340 body=162 status=ok
// SIG undefined FUN_1407e0340(void)

longlong FUN_1407e0340(void)

{
  if (DAT_14685c6f0 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnDLCData",&DAT_14685c6f0,FUN_140447710,0x248,0x10000000,
                  0,L"Engine",FUN_1407e1800,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14685c6f0;
}



// FUNCTION 1407e0410 FUN_1407e0410 body=162 status=ok
// SIG undefined FUN_1407e0410(void)

longlong FUN_1407e0410(void)

{
  if (DAT_14685c840 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnerBlueprintLibrary",&DAT_14685c840,FUN_1407e2b30,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_14685c840;
}



// FUNCTION 1407e04c0 FUN_1407e04c0 body=47 status=ok
// SIG undefined FUN_1407e04c0(void)

longlong FUN_1407e04c0(void)

{
  if (DAT_14685c838 == 0) {
    FUN_141786440(&DAT_14685c838,&PTR_FUN_1440e1120);
  }
  return DAT_14685c838;
}



// FUNCTION 1407e04f0 FUN_1407e04f0 body=47 status=ok
// SIG undefined FUN_1407e04f0(void)

longlong FUN_1407e04f0(void)

{
  if (DAT_14685c7f0 == 0) {
    FUN_141786a30(&DAT_14685c7f0,&PTR_FUN_14625cbf0);
  }
  return DAT_14685c7f0;
}



// FUNCTION 1407e0520 FUN_1407e0520 body=47 status=ok
// SIG undefined FUN_1407e0520(void)

longlong FUN_1407e0520(void)

{
  if (DAT_14685c7f8 == 0) {
    FUN_141786a30(&DAT_14685c7f8,&PTR_FUN_14625cc70);
  }
  return DAT_14685c7f8;
}



// FUNCTION 1407e0550 FUN_1407e0550 body=47 status=ok
// SIG undefined FUN_1407e0550(void)

longlong FUN_1407e0550(void)

{
  if (DAT_14685c800 == 0) {
    FUN_141786a30(&DAT_14685c800,&PTR_FUN_14625ccf0);
  }
  return DAT_14685c800;
}



// FUNCTION 1407e0580 FUN_1407e0580 body=47 status=ok
// SIG undefined FUN_1407e0580(void)

longlong FUN_1407e0580(void)

{
  if (DAT_14685c808 == 0) {
    FUN_141786a30(&DAT_14685c808,&PTR_FUN_14625cd70);
  }
  return DAT_14685c808;
}



// FUNCTION 1407e05b0 FUN_1407e05b0 body=47 status=ok
// SIG undefined FUN_1407e05b0(void)

longlong FUN_1407e05b0(void)

{
  if (DAT_14685c810 == 0) {
    FUN_141786a30(&DAT_14685c810,&PTR_FUN_14625cf30);
  }
  return DAT_14685c810;
}



// FUNCTION 1407e05e0 FUN_1407e05e0 body=47 status=ok
// SIG undefined FUN_1407e05e0(void)

longlong FUN_1407e05e0(void)

{
  if (DAT_14685c818 == 0) {
    FUN_141786a30(&DAT_14685c818,&PTR_FUN_14625d070);
  }
  return DAT_14685c818;
}



// FUNCTION 1407e0610 FUN_1407e0610 body=47 status=ok
// SIG undefined FUN_1407e0610(void)

longlong FUN_1407e0610(void)

{
  if (DAT_14685c820 == 0) {
    FUN_141786a30(&DAT_14685c820,&PTR_FUN_14625d130);
  }
  return DAT_14685c820;
}



// FUNCTION 1407e0640 FUN_1407e0640 body=47 status=ok
// SIG undefined FUN_1407e0640(void)

longlong FUN_1407e0640(void)

{
  if (DAT_14685c828 == 0) {
    FUN_141786a30(&DAT_14685c828,&PTR_FUN_14625d270);
  }
  return DAT_14685c828;
}



// FUNCTION 1407e0670 FUN_1407e0670 body=47 status=ok
// SIG undefined FUN_1407e0670(void)

longlong FUN_1407e0670(void)

{
  if (DAT_14685c830 == 0) {
    FUN_141786a30(&DAT_14685c830,&PTR_FUN_14625d2f0);
  }
  return DAT_14685c830;
}



// FUNCTION 1407e06a0 FUN_1407e06a0 body=162 status=ok
// SIG undefined FUN_1407e06a0(void)

longlong FUN_1407e06a0(void)

{
  if (DAT_14685c620 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"AnimNotify_SpawnAnim",&DAT_14685c620,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",&LAB_1407e1700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotify::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685c620;
}



// FUNCTION 1407e0760 FUN_1407e0760 body=47 status=ok
// SIG undefined FUN_1407e0760(void)

longlong FUN_1407e0760(void)

{
  if (DAT_14685c918 == 0) {
    FUN_141786440(&DAT_14685c918,&PTR_LAB_1440e2440);
  }
  return DAT_14685c918;
}



// FUNCTION 1407e0790 FUN_1407e0790 body=47 status=ok
// SIG undefined FUN_1407e0790(void)

longlong FUN_1407e0790(void)

{
  if (DAT_14685c878 == 0) {
    FUN_141786a30(&DAT_14685c878,&PTR_FUN_14625d790);
  }
  return DAT_14685c878;
}



// FUNCTION 1407e07c0 FUN_1407e07c0 body=47 status=ok
// SIG undefined FUN_1407e07c0(void)

longlong FUN_1407e07c0(void)

{
  if (DAT_14685c880 == 0) {
    FUN_141786a30(&DAT_14685c880,&PTR_FUN_14625d7d0);
  }
  return DAT_14685c880;
}



// FUNCTION 1407e07f0 FUN_1407e07f0 body=47 status=ok
// SIG undefined FUN_1407e07f0(void)

longlong FUN_1407e07f0(void)

{
  if (DAT_14685c888 == 0) {
    FUN_141786a30(&DAT_14685c888,&PTR_FUN_14625d810);
  }
  return DAT_14685c888;
}



// FUNCTION 1407e0820 FUN_1407e0820 body=47 status=ok
// SIG undefined FUN_1407e0820(void)

longlong FUN_1407e0820(void)

{
  if (DAT_14685c890 == 0) {
    FUN_141786a30(&DAT_14685c890,&PTR_FUN_14625d850);
  }
  return DAT_14685c890;
}



// FUNCTION 1407e0850 FUN_1407e0850 body=47 status=ok
// SIG undefined FUN_1407e0850(void)

longlong FUN_1407e0850(void)

{
  if (DAT_14685c898 == 0) {
    FUN_141786a30(&DAT_14685c898,&PTR_FUN_14625d890);
  }
  return DAT_14685c898;
}



// FUNCTION 1407e0880 FUN_1407e0880 body=47 status=ok
// SIG undefined FUN_1407e0880(void)

longlong FUN_1407e0880(void)

{
  if (DAT_14685c8a0 == 0) {
    FUN_141786a30(&DAT_14685c8a0,&PTR_FUN_14625d910);
  }
  return DAT_14685c8a0;
}



// FUNCTION 1407e08b0 FUN_1407e08b0 body=47 status=ok
// SIG undefined FUN_1407e08b0(void)

longlong FUN_1407e08b0(void)

{
  if (DAT_14685c8a8 == 0) {
    FUN_141786a30(&DAT_14685c8a8,&PTR_FUN_14625da50);
  }
  return DAT_14685c8a8;
}



// FUNCTION 1407e08e0 FUN_1407e08e0 body=47 status=ok
// SIG undefined FUN_1407e08e0(void)

longlong FUN_1407e08e0(void)

{
  if (DAT_14685c8b0 == 0) {
    FUN_141786a30(&DAT_14685c8b0,&PTR_FUN_14625db90);
  }
  return DAT_14685c8b0;
}



// FUNCTION 1407e0910 FUN_1407e0910 body=47 status=ok
// SIG undefined FUN_1407e0910(void)

longlong FUN_1407e0910(void)

{
  if (DAT_14685c8b8 == 0) {
    FUN_141786a30(&DAT_14685c8b8,&PTR_FUN_14625dcd0);
  }
  return DAT_14685c8b8;
}



// FUNCTION 1407e0940 FUN_1407e0940 body=47 status=ok
// SIG undefined FUN_1407e0940(void)

longlong FUN_1407e0940(void)

{
  if (DAT_14685c8c0 == 0) {
    FUN_141786a30(&DAT_14685c8c0,&PTR_FUN_14625dd10);
  }
  return DAT_14685c8c0;
}



// FUNCTION 1407e0970 FUN_1407e0970 body=47 status=ok
// SIG undefined FUN_1407e0970(void)

longlong FUN_1407e0970(void)

{
  if (DAT_14685c8c8 == 0) {
    FUN_141786a30(&DAT_14685c8c8,&PTR_FUN_14625dd90);
  }
  return DAT_14685c8c8;
}



// FUNCTION 1407e09a0 FUN_1407e09a0 body=47 status=ok
// SIG undefined FUN_1407e09a0(void)

longlong FUN_1407e09a0(void)

{
  if (DAT_14685c8d0 == 0) {
    FUN_141786a30(&DAT_14685c8d0,&PTR_FUN_14625de10);
  }
  return DAT_14685c8d0;
}



// FUNCTION 1407e09d0 FUN_1407e09d0 body=47 status=ok
// SIG undefined FUN_1407e09d0(void)

longlong FUN_1407e09d0(void)

{
  if (DAT_14685c8d8 == 0) {
    FUN_141786a30(&DAT_14685c8d8,&PTR_FUN_14625de50);
  }
  return DAT_14685c8d8;
}



// FUNCTION 1407e0a00 FUN_1407e0a00 body=47 status=ok
// SIG undefined FUN_1407e0a00(void)

longlong FUN_1407e0a00(void)

{
  if (DAT_14685c8e0 == 0) {
    FUN_141786a30(&DAT_14685c8e0,&PTR_FUN_14625df10);
  }
  return DAT_14685c8e0;
}



// FUNCTION 1407e0a30 FUN_1407e0a30 body=47 status=ok
// SIG undefined FUN_1407e0a30(void)

longlong FUN_1407e0a30(void)

{
  if (DAT_14685c8e8 == 0) {
    FUN_141786a30(&DAT_14685c8e8,&PTR_FUN_14625e050);
  }
  return DAT_14685c8e8;
}



// FUNCTION 1407e0a60 FUN_1407e0a60 body=47 status=ok
// SIG undefined FUN_1407e0a60(void)

longlong FUN_1407e0a60(void)

{
  if (DAT_14685c8f0 == 0) {
    FUN_141786a30(&DAT_14685c8f0,&PTR_FUN_14625e0d0);
  }
  return DAT_14685c8f0;
}



// FUNCTION 1407e0a90 FUN_1407e0a90 body=47 status=ok
// SIG undefined FUN_1407e0a90(void)

longlong FUN_1407e0a90(void)

{
  if (DAT_14685c8f8 == 0) {
    FUN_141786a30(&DAT_14685c8f8,&PTR_FUN_14625e110);
  }
  return DAT_14685c8f8;
}



// FUNCTION 1407e0ac0 FUN_1407e0ac0 body=47 status=ok
// SIG undefined FUN_1407e0ac0(void)

longlong FUN_1407e0ac0(void)

{
  if (DAT_14685c900 == 0) {
    FUN_141786a30(&DAT_14685c900,&PTR_FUN_14625e190);
  }
  return DAT_14685c900;
}



// FUNCTION 1407e0af0 FUN_1407e0af0 body=47 status=ok
// SIG undefined FUN_1407e0af0(void)

longlong FUN_1407e0af0(void)

{
  if (DAT_14685c908 == 0) {
    FUN_141786a30(&DAT_14685c908,&PTR_FUN_14625e210);
  }
  return DAT_14685c908;
}



// FUNCTION 1407e0b20 FUN_1407e0b20 body=47 status=ok
// SIG undefined FUN_1407e0b20(void)

longlong FUN_1407e0b20(void)

{
  if (DAT_14685c910 == 0) {
    FUN_141786a30(&DAT_14685c910,&PTR_FUN_14625e250);
  }
  return DAT_14685c910;
}



// FUNCTION 1407e0b50 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryTest_Random::StaticClass(void)

{
  if (DAT_14685c638 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"GbxAction_SpawnAnim",&DAT_14685c638,FUN_1407e2b00,0x1c0,
                  0x10000000,0,L"Engine",&LAB_1407e1750,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UThrobber::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685c638;
}



// FUNCTION 1407e0c00 Z_Construct_UPackage__Script_AnimGraphRuntime body=47 status=ok
// SIG undefined Z_Construct_UPackage__Script_AnimGraphRuntime(void)

longlong Z_Construct_UPackage__Script_AnimGraphRuntime(void)

{
  if (DAT_14685c650 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_14685c650,&PTR_s__Script_GbxSpawn_1440e47e8);
  }
  return DAT_14685c650;
}



// FUNCTION 1407e0c30 FUN_1407e0c30 body=47 status=ok
// SIG undefined FUN_1407e0c30(void)

longlong FUN_1407e0c30(void)

{
  if (DAT_14685c630 == 0) {
    FUN_141786440(&DAT_14685c630,&PTR_StaticClass_1440e1cf0);
  }
  return DAT_14685c630;
}



// FUNCTION 1407e0c60 FUN_1407e0c60 body=47 status=ok
// SIG undefined FUN_1407e0c60(void)

longlong FUN_1407e0c60(void)

{
  if (DAT_14685c628 == 0) {
    FUN_141786a30(&DAT_14685c628,&PTR_FUN_14625a940);
  }
  return DAT_14685c628;
}



// FUNCTION 1407e0c90 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FHyperlinkStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x4f8;
    *puVar1 = &PTR_FUN_1440e43e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e0cf0 FUN_1407e0cf0 body=162 status=ok
// SIG undefined FUN_1407e0cf0(void)

longlong FUN_1407e0cf0(void)

{
  if (DAT_14685c700 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"GlobalSpawnDLCData",&DAT_14685c700,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",FUN_1407e17c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14685c700;
}



// FUNCTION 1407e0da0 FUN_1407e0da0 body=162 status=ok
// SIG undefined FUN_1407e0da0(void)

longlong FUN_1407e0da0(void)

{
  if (DAT_14685c710 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"DLCScriptedSpawerExpansionList",&DAT_14685c710,FUN_140447710
                  ,0x40,0x10000000,0,L"Engine",FUN_1407e1710,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14685c710;
}



// FUNCTION 1407e0e50 FUN_1407e0e50 body=47 status=ok
// SIG undefined FUN_1407e0e50(void)

longlong FUN_1407e0e50(void)

{
  if (DAT_14685c6d8 == 0) {
    FUN_141786440(&DAT_14685c6d8,&PTR_FUN_1440e3080);
  }
  return DAT_14685c6d8;
}



// FUNCTION 1407e0e80 FUN_1407e0e80 body=47 status=ok
// SIG undefined FUN_1407e0e80(void)

longlong FUN_1407e0e80(void)

{
  if (DAT_14685c6b8 == 0) {
    FUN_141786a30(&DAT_14685c6b8,&PTR_FUN_14625b230);
  }
  return DAT_14685c6b8;
}



// FUNCTION 1407e0eb0 FUN_1407e0eb0 body=47 status=ok
// SIG undefined FUN_1407e0eb0(void)

longlong FUN_1407e0eb0(void)

{
  if (DAT_14685c6c0 == 0) {
    FUN_141786a30(&DAT_14685c6c0,&PTR_FUN_14625b2f0);
  }
  return DAT_14685c6c0;
}



// FUNCTION 1407e0ee0 FUN_1407e0ee0 body=47 status=ok
// SIG undefined FUN_1407e0ee0(void)

longlong FUN_1407e0ee0(void)

{
  if (DAT_14685c6c8 == 0) {
    FUN_141786a30(&DAT_14685c6c8,&PTR_FUN_14625b370);
  }
  return DAT_14685c6c8;
}



// FUNCTION 1407e0f10 FUN_1407e0f10 body=47 status=ok
// SIG undefined FUN_1407e0f10(void)

longlong FUN_1407e0f10(void)

{
  if (DAT_14685c6d0 == 0) {
    FUN_141786a30(&DAT_14685c6d0,&PTR_FUN_14625b3f0);
  }
  return DAT_14685c6d0;
}



// FUNCTION 1407e0f40 FUN_1407e0f40 body=53 status=ok
// SIG undefined FUN_1407e0f40(void)

void FUN_1407e0f40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_1440e4f90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e0f80 FUN_1407e0f80 body=53 status=ok
// SIG undefined FUN_1407e0f80(void)

void FUN_1407e0f80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &PTR_FUN_1440e50a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e0fd0 FUN_1407e0fd0 body=53 status=ok
// SIG undefined FUN_1407e0fd0(void)

void FUN_1407e0fd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1440e51c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e1010 FUN_1407e1010 body=53 status=ok
// SIG undefined FUN_1407e1010(void)

void FUN_1407e1010(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1440e52d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e1050 FUN_1407e1050 body=53 status=ok
// SIG undefined FUN_1407e1050(void)

void FUN_1407e1050(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1440e53f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e10a0 FUN_1407e10a0 body=162 status=ok
// SIG undefined FUN_1407e10a0(void)

longlong FUN_1407e10a0(void)

{
  if (DAT_14685c648 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"GbxCondition_SpawnCostAvailable",&DAT_14685c648,
                  FUN_140447710,0x90,0x10000000,0,L"Engine",FUN_1407e1760,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_14685c648;
}



// FUNCTION 1407e1190 FUN_1407e1190 body=162 status=ok
// SIG undefined FUN_1407e1190(void)

longlong FUN_1407e1190(void)

{
  if (DAT_14685c720 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnedActorInterface",&DAT_14685c720,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_14685c720;
}



// FUNCTION 1407e1250 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AFGPoleHologram::GetPrivateStaticClass(void)

{
  if (DAT_14685c660 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"MultiSpawnPoint",&DAT_14685c660,FUN_140447710,0x4d0,
                  0x10000000,0,L"Engine",&LAB_1407e16d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407b5e00,&LAB_140447700,0);
  }
  return DAT_14685c660;
}



// FUNCTION 1407e1310 FUN_1407e1310 body=47 status=ok
// SIG undefined FUN_1407e1310(void)

longlong FUN_1407e1310(void)

{
  if (DAT_14685c7e0 == 0) {
    FUN_141786440(&DAT_14685c7e0,&PTR_thunk_FUN_1407e2730_1440e0610);
  }
  return DAT_14685c7e0;
}



// FUNCTION 1407e1340 FUN_1407e1340 body=47 status=ok
// SIG undefined FUN_1407e1340(void)

longlong FUN_1407e1340(void)

{
  if (DAT_14685c748 == 0) {
    FUN_141786a30(&DAT_14685c748,&PTR_FUN_14625bd40);
  }
  return DAT_14685c748;
}



// FUNCTION 1407e1370 FUN_1407e1370 body=47 status=ok
// SIG undefined FUN_1407e1370(void)

longlong FUN_1407e1370(void)

{
  if (DAT_14685c750 == 0) {
    FUN_141786a30(&DAT_14685c750,&PTR_FUN_14625bd80);
  }
  return DAT_14685c750;
}



// FUNCTION 1407e13a0 FUN_1407e13a0 body=47 status=ok
// SIG undefined FUN_1407e13a0(void)

longlong FUN_1407e13a0(void)

{
  if (DAT_14685c758 == 0) {
    FUN_141786a30(&DAT_14685c758,&PTR_FUN_14625bdc0);
  }
  return DAT_14685c758;
}



// FUNCTION 1407e13d0 FUN_1407e13d0 body=47 status=ok
// SIG undefined FUN_1407e13d0(void)

longlong FUN_1407e13d0(void)

{
  if (DAT_14685c760 == 0) {
    FUN_141786a30(&DAT_14685c760,&PTR_FUN_14625be00);
  }
  return DAT_14685c760;
}



// FUNCTION 1407e1400 FUN_1407e1400 body=47 status=ok
// SIG undefined FUN_1407e1400(void)

longlong FUN_1407e1400(void)

{
  if (DAT_14685c768 == 0) {
    FUN_141786a30(&DAT_14685c768,&PTR_FUN_14625be40);
  }
  return DAT_14685c768;
}



// FUNCTION 1407e1430 FUN_1407e1430 body=47 status=ok
// SIG undefined FUN_1407e1430(void)

longlong FUN_1407e1430(void)

{
  if (DAT_14685c770 == 0) {
    FUN_141786a30(&DAT_14685c770,&PTR_FUN_14625bf00);
  }
  return DAT_14685c770;
}



// FUNCTION 1407e1460 FUN_1407e1460 body=47 status=ok
// SIG undefined FUN_1407e1460(void)

longlong FUN_1407e1460(void)

{
  if (DAT_14685c778 == 0) {
    FUN_141786a30(&DAT_14685c778,&PTR_FUN_14625bf80);
  }
  return DAT_14685c778;
}



// FUNCTION 1407e1490 FUN_1407e1490 body=47 status=ok
// SIG undefined FUN_1407e1490(void)

longlong FUN_1407e1490(void)

{
  if (DAT_14685c780 == 0) {
    FUN_141786a30(&DAT_14685c780,&PTR_FUN_14625c000);
  }
  return DAT_14685c780;
}



// FUNCTION 1407e14c0 FUN_1407e14c0 body=47 status=ok
// SIG undefined FUN_1407e14c0(void)

longlong FUN_1407e14c0(void)

{
  if (DAT_14685c788 == 0) {
    FUN_141786a30(&DAT_14685c788,&PTR_FUN_14625c080);
  }
  return DAT_14685c788;
}



// FUNCTION 1407e14f0 FUN_1407e14f0 body=47 status=ok
// SIG undefined FUN_1407e14f0(void)

longlong FUN_1407e14f0(void)

{
  if (DAT_14685c790 == 0) {
    FUN_141786a30(&DAT_14685c790,&PTR_FUN_14625c100);
  }
  return DAT_14685c790;
}



// FUNCTION 1407e1520 FUN_1407e1520 body=47 status=ok
// SIG undefined FUN_1407e1520(void)

longlong FUN_1407e1520(void)

{
  if (DAT_14685c798 == 0) {
    FUN_141786a30(&DAT_14685c798,&PTR_FUN_14625c1b0);
  }
  return DAT_14685c798;
}



// FUNCTION 1407e1550 FUN_1407e1550 body=47 status=ok
// SIG undefined FUN_1407e1550(void)

longlong FUN_1407e1550(void)

{
  if (DAT_14685c7a0 == 0) {
    FUN_141786a30(&DAT_14685c7a0,&PTR_FUN_14625c270);
  }
  return DAT_14685c7a0;
}



// FUNCTION 1407e1580 FUN_1407e1580 body=47 status=ok
// SIG undefined FUN_1407e1580(void)

longlong FUN_1407e1580(void)

{
  if (DAT_14685c7a8 == 0) {
    FUN_141786a30(&DAT_14685c7a8,&PTR_FUN_14625c2f0);
  }
  return DAT_14685c7a8;
}



// FUNCTION 1407e15b0 FUN_1407e15b0 body=47 status=ok
// SIG undefined FUN_1407e15b0(void)

longlong FUN_1407e15b0(void)

{
  if (DAT_14685c7b0 == 0) {
    FUN_141786a30(&DAT_14685c7b0,&PTR_FUN_14625c370);
  }
  return DAT_14685c7b0;
}



// FUNCTION 1407e15e0 FUN_1407e15e0 body=47 status=ok
// SIG undefined FUN_1407e15e0(void)

longlong FUN_1407e15e0(void)

{
  if (DAT_14685c7b8 == 0) {
    FUN_141786a30(&DAT_14685c7b8,&PTR_FUN_14625c3b0);
  }
  return DAT_14685c7b8;
}



// FUNCTION 1407e1610 FUN_1407e1610 body=47 status=ok
// SIG undefined FUN_1407e1610(void)

longlong FUN_1407e1610(void)

{
  if (DAT_14685c7c0 == 0) {
    FUN_141786a30(&DAT_14685c7c0,&PTR_FUN_14625c470);
  }
  return DAT_14685c7c0;
}



// FUNCTION 1407e1640 FUN_1407e1640 body=47 status=ok
// SIG undefined FUN_1407e1640(void)

longlong FUN_1407e1640(void)

{
  if (DAT_14685c7c8 == 0) {
    FUN_141786a30(&DAT_14685c7c8,&PTR_FUN_14625c4f0);
  }
  return DAT_14685c7c8;
}



// FUNCTION 1407e1670 FUN_1407e1670 body=47 status=ok
// SIG undefined FUN_1407e1670(void)

longlong FUN_1407e1670(void)

{
  if (DAT_14685c7d0 == 0) {
    FUN_141786a30(&DAT_14685c7d0,&PTR_FUN_14625c570);
  }
  return DAT_14685c7d0;
}



// FUNCTION 1407e16a0 FUN_1407e16a0 body=47 status=ok
// SIG undefined FUN_1407e16a0(void)

longlong FUN_1407e16a0(void)

{
  if (DAT_14685c7d8 == 0) {
    FUN_141786a30(&DAT_14685c7d8,&PTR_FUN_14625c5b0);
  }
  return DAT_14685c7d8;
}



// FUNCTION 1407e1710 FUN_1407e1710 body=51 status=ok
// SIG undefined FUN_1407e1710(void)

void FUN_1407e1710(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440e4d10;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 1407e1760 FUN_1407e1760 body=90 status=ok
// SIG undefined FUN_1407e1760(void)

void FUN_1407e1760(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x29) = 3;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__1440e4508;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 1407e17c0 FUN_1407e17c0 body=51 status=ok
// SIG undefined FUN_1407e17c0(void)

void FUN_1407e17c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440e4a90;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 1407e1800 FUN_1407e1800 body=175 status=ok
// SIG undefined FUN_1407e1800(void)

void FUN_1407e1800(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440e4810;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    FUN_142de2eb0(puVar1 + 0x15);
    FUN_142de2eb0(puVar1 + 0x25);
    FUN_142de2eb0(puVar1 + 0x35);
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
  }
  return;
}



// FUNCTION 1407e18c0 FUN_1407e18c0 body=341 status=ok
// SIG undefined FUN_1407e18c0(void)

undefined8 * FUN_1407e18c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_142c62180();
  *param_1 = &PTR_FUN_1440cd0e0;
  puVar1 = param_1 + 0x24;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 2;
  lVar2 = 4;
  *(uint *)(param_1 + 0x1f) = *(uint *)(param_1 + 0x1f) & 0xfffffe00;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  do {
    FWeakObjectPtr::operator=(puVar1,0);
    FWeakObjectPtr::operator=(puVar1 + 1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1 = puVar1 + 0x18;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *param_1 = &PTR_FUN_1440e40f8;
  *(undefined4 *)(param_1 + 0x8d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0x3e800000;
  FUN_142c622d0(param_1 + 0x8f);
  *(uint *)((longlong)param_1 + 0x4f4) = *(uint *)((longlong)param_1 + 0x4f4) & 0xffffffe0;
  *param_1 = &PTR_FUN_1440e4270;
  *(undefined4 *)(param_1 + 0x9e) = 0x3f800000;
  return param_1;
}



// FUNCTION 1407e1a20 FUN_1407e1a20 body=132 status=ok
// SIG undefined FUN_1407e1a20(void)

undefined4 * FUN_1407e1a20(undefined4 *param_1)

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
  param_1[10] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0x3f800000;
  return param_1;
}



// FUNCTION 1407e1ab0 FUN_1407e1ab0 body=167 status=ok
// SIG undefined FUN_1407e1ab0(void)

void FUN_1407e1ab0(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      iVar4 = (int)plVar3[3];
      lVar1 = plVar3[2];
      if (iVar4 != 0) {
        do {
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(lVar1);
          lVar1 = lVar1 + 0x20;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = plVar3[2];
      }
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar3);
  return;
}



// FUNCTION 1407e1b60 ~TArray<FHairStrandsProjectionHairData::HairGroup,TSizedDefaultAllocator<32>_> body=95 status=ok
// SIG undefined ~TArray<FHairStrandsProjectionHairData::HairGroup,TSizedDefaultAllocator<32>_>(void)

void TArray<FHairStrandsProjectionHairData::HairGroup,TSizedDefaultAllocator<32>_>::
     ~TArray<FHairStrandsProjectionHairData::HairGroup,TSizedDefaultAllocator<32>_>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
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



// FUNCTION 1407e1bc0 FUN_1407e1bc0 body=101 status=ok
// SIG undefined FUN_1407e1bc0(void)

void FUN_1407e1bc0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar1 + 0x12);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1407e1c30 ~TArray<FNamedInterfaceDef,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FNamedInterfaceDef,FDefaultAllocator>(void)

void TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
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



// FUNCTION 1407e1c90 ~FInternal body=95 status=ok
// SIG undefined ~FInternal(void)

void `UPaintProjectFunctionLibrary::TreeView_CreateJsonStructureFromPathStrings'::`2'::FInternal::
     ~FInternal(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[3];
  lVar1 = param_1[2];
  if (iVar2 != 0) {
    do {
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (lVar1);
      lVar1 = lVar1 + 0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407e1cf0 operator= body=190 status=ok
// SIG undefined operator=(void)

longlong * TArray<FSoftObjectPath,FDefaultAllocator>::operator=(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    iVar4 = (int)param_1[1];
    if (iVar4 != 0) {
      plVar3 = (longlong *)(*param_1 + 8);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = (int)param_2[1];
    puVar1 = (undefined8 *)*param_2;
    *(int *)(param_1 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar4);
      puVar2 = (undefined8 *)*param_1;
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = *puVar1;
        FString::FString(puVar2 + 1,puVar1 + 1);
        puVar2 = puVar2 + 3;
        puVar1 = puVar1 + 3;
      }
    }
  }
  return param_1;
}



// FUNCTION 1407e1db0 FUN_1407e1db0 body=83 status=ok
// SIG undefined FUN_1407e1db0(void)

undefined8 * FUN_1407e1db0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440e40f8;
  if (param_1[0x9b] != 0) {
    FMemory::Free();
  }
  FUN_1407af170(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4f8);
  }
  return param_1;
}



// FUNCTION 1407e1e10 FUN_1407e1e10 body=64 status=ok
// SIG undefined FUN_1407e1e10(void)

longlong FUN_1407e1e10(longlong param_1,ulonglong param_2)

{
  FUN_1407e1bc0(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1407e1e50 FUN_1407e1e50 body=64 status=ok
// SIG undefined FUN_1407e1e50(void)

longlong FUN_1407e1e50(longlong param_1,ulonglong param_2)

{
  TArray<FHairStrandsProjectionHairData::HairGroup,TSizedDefaultAllocator<32>_>::
  ~TArray<FHairStrandsProjectionHairData::HairGroup,TSizedDefaultAllocator<32>_>(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1407e1e90 FUN_1407e1e90 body=137 status=ok
// SIG undefined FUN_1407e1e90(void)

longlong FUN_1407e1e90(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  FUN_1407e1bc0(param_1 + 0x228);
  FUN_1407e1ab0(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 1407e1f30 Construct body=36 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FSubtitleInfo>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  FUN_1407e1a20(param_2);
  return;
}



// FUNCTION 1407e1f60 FUN_1407e1f60 body=84 status=ok
// SIG undefined FUN_1407e1f60(void)

void FUN_1407e1f60(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2 + 2,0,0xb0);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_142de2eb0(param_2 + 2);
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  FUN_1407bb8d0(param_2 + 0x15);
  return;
}



// FUNCTION 1407e1fc0 FUN_1407e1fc0 body=451 status=ok
// SIG undefined FUN_1407e1fc0(void)

undefined8 FUN_1407e1fc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  if (param_4 != 0) {
    puVar9 = (undefined8 *)(param_3 + 0x490);
    do {
      FUN_1407af670(param_2,puVar9 + -0x92);
      puVar2 = (undefined8 *)(param_2 + 0x4d8);
      *(undefined4 *)(param_2 + 0x468) = *(undefined4 *)(puVar9 + -5);
      *(undefined4 *)(param_2 + 0x46c) = *(undefined4 *)((longlong)puVar9 + -0x24);
      *(undefined1 *)(param_2 + 0x470) = *(undefined1 *)(puVar9 + -4);
      uVar7 = puVar9[-2];
      *(undefined8 *)(param_2 + 0x478) = puVar9[-3];
      *(undefined8 *)(param_2 + 0x480) = uVar7;
      *(undefined8 *)(param_2 + 0x488) = puVar9[-1];
      uVar7 = puVar9[1];
      *(undefined8 *)(param_2 + 0x490) = *puVar9;
      *(undefined8 *)(param_2 + 0x498) = uVar7;
      *(undefined8 *)(param_2 + 0x4a0) = puVar9[2];
      uVar7 = puVar9[4];
      *(undefined8 *)(param_2 + 0x4a8) = puVar9[3];
      *(undefined8 *)(param_2 + 0x4b0) = uVar7;
      *(undefined8 *)(param_2 + 0x4b8) = puVar9[5];
      uVar4 = *(undefined4 *)((longlong)puVar9 + 0x34);
      uVar5 = *(undefined4 *)(puVar9 + 7);
      uVar6 = *(undefined4 *)((longlong)puVar9 + 0x3c);
      *(undefined4 *)(param_2 + 0x4c0) = *(undefined4 *)(puVar9 + 6);
      *(undefined4 *)(param_2 + 0x4c4) = uVar4;
      *(undefined4 *)(param_2 + 0x4c8) = uVar5;
      *(undefined4 *)(param_2 + 0x4cc) = uVar6;
      *(undefined8 *)(param_2 + 0x4d0) = puVar9[8];
      if (puVar2 != puVar9 + 9) {
        iVar3 = *(int *)(puVar9 + 10);
        _Src = (void *)puVar9[9];
        *(int *)(param_2 + 0x4e0) = iVar3;
        if ((iVar3 == 0) && (*(int *)(param_2 + 0x4e4) == 0)) {
          *(undefined4 *)(param_2 + 0x4e4) = 0;
        }
        else {
          TArray<FPropChildSocketData,FDefaultAllocator>::ResizeForCopy(puVar2,iVar3);
          _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar3 << 6);
        }
      }
      *(undefined2 *)(param_2 + 0x4e8) = *(undefined2 *)(puVar9 + 0xb);
      *(undefined4 *)(param_2 + 0x4f0) = *(undefined4 *)(puVar9 + 0xc);
      *(uint *)(param_2 + 0x4f4) =
           *(uint *)(param_2 + 0x4f4) ^
           (*(uint *)((longlong)puVar9 + 100) ^ *(uint *)(param_2 + 0x4f4)) & 1;
      uVar8 = (*(uint *)(param_2 + 0x4f4) ^ *(uint *)((longlong)puVar9 + 100)) & 2 ^
              *(uint *)(param_2 + 0x4f4);
      *(uint *)(param_2 + 0x4f4) = uVar8;
      uVar8 = (uVar8 ^ *(uint *)((longlong)puVar9 + 100)) & 4 ^ uVar8;
      *(uint *)(param_2 + 0x4f4) = uVar8;
      uVar8 = (uVar8 ^ *(uint *)((longlong)puVar9 + 100)) & 8 ^ uVar8;
      *(uint *)(param_2 + 0x4f4) = uVar8;
      puVar1 = (uint *)((longlong)puVar9 + 100);
      puVar9 = puVar9 + 0x9f;
      *(uint *)(param_2 + 0x4f4) = (uVar8 ^ *puVar1) & 0x10 ^ uVar8;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x4f8;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407e2190 FUN_1407e2190 body=364 status=ok
// SIG undefined FUN_1407e2190(void)

undefined8 FUN_1407e2190(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_4 != 0) {
    plVar7 = (longlong *)(param_3 + 0x10);
    do {
      FString::operator=(param_2,plVar7 + -2);
      plVar1 = (longlong *)(param_2 + 0x10);
      if (plVar1 != plVar7) {
        lVar2 = *plVar1;
        for (iVar5 = *(int *)(param_2 + 0x18); iVar5 != 0; iVar5 = iVar5 + -1) {
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(lVar2);
          lVar2 = lVar2 + 0x20;
        }
        iVar5 = (int)plVar7[1];
        lVar2 = *plVar7;
        *(int *)(param_2 + 0x18) = iVar5;
        if ((iVar5 == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        else {
          TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
          puVar8 = (undefined8 *)*plVar1;
          if (iVar5 != 0) {
            puVar9 = (undefined8 *)(lVar2 + 0x10);
            do {
              *puVar8 = 0;
              iVar4 = *(int *)(puVar9 + -1);
              puVar3 = (undefined8 *)puVar9[-2];
              *(int *)(puVar8 + 1) = iVar4;
              if (iVar4 == 0) {
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
              }
              else {
                TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar8,iVar4,0);
                puVar6 = (undefined8 *)*puVar8;
                do {
                  *puVar6 = *puVar3;
                  FString::FString(puVar6 + 1,puVar3 + 1);
                  puVar6 = puVar6 + 3;
                  puVar3 = puVar3 + 3;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
              puVar8[2] = *puVar9;
              puVar3 = puVar9 + 1;
              puVar9 = puVar9 + 4;
              *(undefined1 *)(puVar8 + 3) = *(undefined1 *)puVar3;
              puVar8 = puVar8 + 4;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
      }
      plVar7 = plVar7 + 4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x20;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407e2300 FUN_1407e2300 body=106 status=ok
// SIG undefined FUN_1407e2300(void)

undefined8 FUN_1407e2300(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x18);
    do {
      TArray<FSoftObjectPath,FDefaultAllocator>::operator=(puVar1 + -0x18,puVar1 + param_3 + -0x18);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + param_3 + -8);
      *puVar1 = puVar1[param_3];
      puVar1 = puVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407e2370 FUN_1407e2370 body=173 status=ok
// SIG undefined FUN_1407e2370(void)

undefined8 FUN_1407e2370(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined4 *)(param_2 + 8);
    do {
      puVar7[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar7);
      puVar7[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar7);
      *puVar7 = *(undefined4 *)(param_3 + (longlong)puVar7);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar7);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar7);
      FSoftObjectPath::operator=(puVar7 + 2,&local_28);
      puVar1 = (undefined8 *)(param_3 + 0x20 + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + 8) = *puVar1;
      *(undefined8 *)(puVar7 + 10) = uVar6;
      puVar1 = (undefined8 *)(param_3 + 0x30 + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + 0xc) = *puVar1;
      *(undefined8 *)(puVar7 + 0xe) = uVar6;
      puVar2 = (undefined4 *)(param_3 + 0x40 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar7[0x10] = *puVar2;
      puVar7[0x11] = uVar3;
      puVar7[0x12] = uVar4;
      puVar7[0x13] = uVar5;
      *(undefined8 *)(puVar7 + 0x14) = *(undefined8 *)(param_3 + 0x50 + (longlong)puVar7);
      puVar7 = puVar7 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407e2420 FUN_1407e2420 body=310 status=ok
// SIG undefined FUN_1407e2420(void)

undefined8 FUN_1407e2420(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar6 = (undefined1 *)(param_2 + 0x11);
    do {
      FString::operator=(puVar6 + -0x11,puVar6 + param_3 + -0x11);
      puVar6[-1] = puVar6[param_3 + -1];
      *puVar6 = puVar6[param_3];
      puVar6[1] = puVar6[param_3 + 1];
      puVar6[2] = puVar6[param_3 + 2];
      *(undefined8 *)(puVar6 + 3) = *(undefined8 *)(puVar6 + param_3 + 3);
      *(undefined8 *)(puVar6 + 0xf) = *(undefined8 *)(puVar6 + param_3 + 0xf);
      *(undefined8 *)(puVar6 + 0x17) = *(undefined8 *)(puVar6 + param_3 + 0x17);
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + 0x1f) + 8);
      *(undefined8 *)(puVar6 + 0x1f) = *(undefined8 *)(puVar6 + param_3 + 0x1f);
      *(undefined8 *)(puVar6 + 0x27) = uVar5;
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + 0x2f) + 8);
      *(undefined8 *)(puVar6 + 0x2f) = *(undefined8 *)(puVar6 + param_3 + 0x2f);
      *(undefined8 *)(puVar6 + 0x37) = uVar5;
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + 0x3f) + 8);
      *(undefined8 *)(puVar6 + 0x3f) = *(undefined8 *)(puVar6 + param_3 + 0x3f);
      *(undefined8 *)(puVar6 + 0x47) = uVar5;
      *(undefined8 *)(puVar6 + 0x4f) = *(undefined8 *)(puVar6 + param_3 + 0x4f);
      puVar1 = (undefined4 *)(puVar6 + param_3 + 0x57);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar6 + 0x57) = *puVar1;
      *(undefined4 *)(puVar6 + 0x5b) = uVar2;
      *(undefined4 *)(puVar6 + 0x5f) = uVar3;
      *(undefined4 *)(puVar6 + 99) = uVar4;
      *(undefined8 *)(puVar6 + 0x67) = *(undefined8 *)(puVar6 + param_3 + 0x67);
      *(undefined4 *)(puVar6 + 0x6f) = *(undefined4 *)(puVar6 + param_3 + 0x6f);
      *(undefined4 *)(puVar6 + 0x73) = *(undefined4 *)(puVar6 + param_3 + 0x73);
      *(undefined4 *)(puVar6 + 0x77) = *(undefined4 *)(puVar6 + param_3 + 0x77);
      TArray<FSoftObjectPath,FDefaultAllocator>::operator=(puVar6 + 0x7f,puVar6 + param_3 + 0x7f);
      puVar6[0x8f] = puVar6[param_3 + 0x8f];
      puVar6[0x90] = puVar6[param_3 + 0x90];
      puVar1 = (undefined4 *)(puVar6 + param_3 + 0x97);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar6 + 0x97) = *puVar1;
      *(undefined4 *)(puVar6 + 0x9b) = uVar2;
      *(undefined4 *)(puVar6 + 0x9f) = uVar3;
      *(undefined4 *)(puVar6 + 0xa3) = uVar4;
      *(undefined8 *)(puVar6 + 0xa7) = *(undefined8 *)(puVar6 + param_3 + 0xa7);
      puVar6 = puVar6 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407e2560 Copy body=82 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FNamedInterfaceDef>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = *(undefined8 *)(param_3 + (longlong)param_2);
      FString::operator=(param_2 + 1,param_3 + 8 + (longlong)param_2);
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407e25e0 FUN_1407e25e0 body=45 status=ok
// SIG undefined FUN_1407e25e0(void)

void FUN_1407e25e0(undefined8 param_1,longlong *param_2)

{
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_2 + 0x12);
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1407e2610 FUN_1407e2610 body=85 status=ok
// SIG undefined FUN_1407e2610(void)

void FUN_1407e2610(void)

{
  if (DAT_14685c550 == 0) {
    if (DAT_14685c650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685c650,&PTR_s__Script_GbxSpawn_1440e47e8);
    }
    DAT_14685c550 = GetStaticEnum(FUN_1407e3160,DAT_14685c650,L"EScriptedWarmup");
  }
  return;
}



// FUNCTION 1407e2670 FUN_1407e2670 body=85 status=ok
// SIG undefined FUN_1407e2670(void)

void FUN_1407e2670(void)

{
  if (DAT_14685c548 == 0) {
    if (DAT_14685c650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685c650,&PTR_s__Script_GbxSpawn_1440e47e8);
    }
    DAT_14685c548 = GetStaticEnum(FUN_1407e3190,DAT_14685c650,L"ESpawnAnimNotifyAction");
  }
  return;
}



// FUNCTION 1407e26d0 FUN_1407e26d0 body=85 status=ok
// SIG undefined FUN_1407e26d0(void)

void FUN_1407e26d0(void)

{
  if (DAT_14685c558 == 0) {
    if (DAT_14685c650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685c650,&PTR_s__Script_GbxSpawn_1440e47e8);
    }
    DAT_14685c558 = GetStaticEnum(FUN_1407e31c0,DAT_14685c650,L"ESpawnerDrawStyle");
  }
  return;
}



// FUNCTION 1407e2730 FUN_1407e2730 body=162 status=ok
// SIG undefined FUN_1407e2730(void)

longlong FUN_1407e2730(void)

{
  if (DAT_14685c7e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"Spawner",&DAT_14685c7e8,
                  UKismetArrayLibrary::StaticRegisterNativesUKismetArrayLibrary,0x5e8,0x10000005,0,
                  L"Editor",&LAB_1407e16e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14685c7e8;
}



// FUNCTION 1407e27e0 FUN_1407e27e0 body=162 status=ok
// SIG undefined FUN_1407e27e0(void)

longlong FUN_1407e27e0(void)

{
  if (DAT_14685c920 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnerComponent",&DAT_14685c920,FUN_1407e2b60,0x990,
                  0x10000004,0,L"Editor",&LAB_1407e18b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_14685c920;
}



// FUNCTION 1407e2890 FUN_1407e2890 body=6 status=ok
// SIG undefined FUN_1407e2890(void)

undefined8 FUN_1407e2890(void)

{
  return 0x96523e07;
}



// FUNCTION 1407e28a0 FUN_1407e28a0 body=6 status=ok
// SIG undefined FUN_1407e28a0(void)

undefined8 FUN_1407e28a0(void)

{
  return 0xb84f4a5d;
}



// FUNCTION 1407e28b0 FUN_1407e28b0 body=6 status=ok
// SIG undefined FUN_1407e28b0(void)

undefined8 FUN_1407e28b0(void)

{
  return 0x2d33be55;
}



// FUNCTION 1407e28c0 FUN_1407e28c0 body=6 status=ok
// SIG undefined FUN_1407e28c0(void)

undefined8 FUN_1407e28c0(void)

{
  return 0x58b42641;
}



// FUNCTION 1407e28d0 FUN_1407e28d0 body=6 status=ok
// SIG undefined FUN_1407e28d0(void)

undefined8 FUN_1407e28d0(void)

{
  return 0xb426511d;
}



// FUNCTION 1407e28e0 FUN_1407e28e0 body=6 status=ok
// SIG undefined FUN_1407e28e0(void)

undefined8 FUN_1407e28e0(void)

{
  return 0x1cb63a91;
}



// FUNCTION 1407e29a0 FUN_1407e29a0 body=66 status=ok
// SIG undefined FUN_1407e29a0(void)

void FUN_1407e29a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_14685c580);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1407e29f0 FUN_1407e29f0 body=66 status=ok
// SIG undefined FUN_1407e29f0(void)

void FUN_1407e29f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_14685c588);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1407e2a40 FUN_1407e2a40 body=61 status=ok
// SIG undefined FUN_1407e2a40(void)

void FUN_1407e2a40(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14685c590);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1407e2a80 FUN_1407e2a80 body=61 status=ok
// SIG undefined FUN_1407e2a80(void)

void FUN_1407e2a80(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14685c598);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1407e2ac0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UThrobber::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1407e2ad0 StaticRegisterNativesUKismetArrayLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUKismetArrayLibrary(void)

void UKismetArrayLibrary::StaticRegisterNativesUKismetArrayLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407e2730();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AreAllDead_1440e5510,0x13);
  return;
}



// FUNCTION 1407e2b00 FUN_1407e2b00 body=34 status=ok
// SIG undefined FUN_1407e2b00(void)

void FUN_1407e2b00(void)

{
  undefined8 uVar1;
  
  uVar1 = UEnvQueryTest_Random::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_K2_GetSpawnPoint_1440e44f8,1);
  return;
}



// FUNCTION 1407e2b30 FUN_1407e2b30 body=34 status=ok
// SIG undefined FUN_1407e2b30(void)

void FUN_1407e2b30(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407e0410();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_CancelSpawnActorWithOptionsAsync_1440e5640,9);
  return;
}



// FUNCTION 1407e2b60 FUN_1407e2b60 body=34 status=ok
// SIG undefined FUN_1407e2b60(void)

void FUN_1407e2b60(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407e27e0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AreAllDead_1440e5740,0x14);
  return;
}



// FUNCTION 1407e2b90 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FHyperlinkStyle::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685c608 == 0) {
    if (DAT_14685c650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685c650,&PTR_s__Script_GbxSpawn_1440e47e8);
    }
    lVar1 = DAT_14685c650;
    uVar2 = FUN_1407e2890();
    DAT_14685c608 = GetStaticStruct(FUN_1407e31f0,lVar1,L"ActionState_SpawnAnim",0x4f8,uVar2);
  }
  return;
}



// FUNCTION 1407e2c10 FUN_1407e2c10 body=113 status=ok
// SIG undefined FUN_1407e2c10(void)

void FUN_1407e2c10(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685c688 == 0) {
    if (DAT_14685c650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685c650,&PTR_s__Script_GbxSpawn_1440e47e8);
    }
    lVar1 = DAT_14685c650;
    uVar2 = FUN_1407e28b0();
    DAT_14685c688 = GetStaticStruct(FUN_1407e3220,lVar1,L"SpawnDLCGroup",0x20,uVar2);
  }
  return;
}



// FUNCTION 1407e2c90 FUN_1407e2c90 body=113 status=ok
// SIG undefined FUN_1407e2c90(void)

void FUN_1407e2c90(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685c698 == 0) {
    if (DAT_14685c650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685c650,&PTR_s__Script_GbxSpawn_1440e47e8);
    }
    lVar1 = DAT_14685c650;
    uVar2 = FUN_1407e28a0();
    DAT_14685c698 = GetStaticStruct(FUN_1407e3250,lVar1,L"SpawnDLCGroupItem",0x20,uVar2);
  }
  return;
}



// FUNCTION 1407e2d10 FUN_1407e2d10 body=113 status=ok
// SIG undefined FUN_1407e2d10(void)

void FUN_1407e2d10(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685c668 == 0) {
    if (DAT_14685c650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685c650,&PTR_s__Script_GbxSpawn_1440e47e8);
    }
    lVar1 = DAT_14685c650;
    uVar2 = FUN_1407e28c0();
    DAT_14685c668 = GetStaticStruct(FUN_1407e3280,lVar1,L"SpawnDLCItem",0x60,uVar2);
  }
  return;
}



// FUNCTION 1407e2d90 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSlomoSectionTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685c678 == 0) {
    if (DAT_14685c650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685c650,&PTR_s__Script_GbxSpawn_1440e47e8);
    }
    lVar1 = DAT_14685c650;
    uVar2 = FUN_1407e28d0();
    DAT_14685c678 = GetStaticStruct(FUN_1407e32b0,lVar1,L"SpawnDLCScriptGroup",0xc0,uVar2);
  }
  return;
}



// FUNCTION 1407e2e10 FUN_1407e2e10 body=113 status=ok
// SIG undefined FUN_1407e2e10(void)

void FUN_1407e2e10(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685c6a8 == 0) {
    if (DAT_14685c650 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685c650,&PTR_s__Script_GbxSpawn_1440e47e8);
    }
    lVar1 = DAT_14685c650;
    uVar2 = FUN_1407e28e0();
    DAT_14685c6a8 = GetStaticStruct(FUN_1407e32e0,lVar1,L"SpawnerSoftPath",0x18,uVar2);
  }
  return;
}



// FUNCTION 1407e2e90 FUN_1407e2e90 body=47 status=ok
// SIG undefined FUN_1407e2e90(void)

longlong FUN_1407e2e90(void)

{
  if (DAT_14685c658 == 0) {
    FUN_141786440(&DAT_14685c658,&PTR_GetPrivateStaticClass_1440e3a90);
  }
  return DAT_14685c658;
}



// FUNCTION 1407e2ec0 FUN_1407e2ec0 body=47 status=ok
// SIG undefined FUN_1407e2ec0(void)

longlong FUN_1407e2ec0(void)

{
  if (DAT_14685c618 == 0) {
    FUN_141786440(&DAT_14685c618,&PTR_FUN_1440e1a40);
  }
  return DAT_14685c618;
}



// FUNCTION 1407e2ef0 FUN_1407e2ef0 body=47 status=ok
// SIG undefined FUN_1407e2ef0(void)

longlong FUN_1407e2ef0(void)

{
  if (DAT_14685c708 == 0) {
    FUN_141786440(&DAT_14685c708,&PTR_FUN_1440e37e0);
  }
  return DAT_14685c708;
}



// FUNCTION 1407e2f20 FUN_1407e2f20 body=47 status=ok
// SIG undefined FUN_1407e2f20(void)

longlong FUN_1407e2f20(void)

{
  if (DAT_14685c640 == 0) {
    FUN_141786440(&DAT_14685c640,&PTR_FUN_1440e3390);
  }
  return DAT_14685c640;
}



// FUNCTION 1407e2f50 FUN_1407e2f50 body=47 status=ok
// SIG undefined FUN_1407e2f50(void)

longlong FUN_1407e2f50(void)

{
  if (DAT_14685c6f8 == 0) {
    FUN_141786440(&DAT_14685c6f8,&PTR_FUN_1440e3690);
  }
  return DAT_14685c6f8;
}



// FUNCTION 1407e2f80 FUN_1407e2f80 body=47 status=ok
// SIG undefined FUN_1407e2f80(void)

longlong FUN_1407e2f80(void)

{
  if (DAT_14685c6e8 == 0) {
    FUN_141786440(&DAT_14685c6e8,&PTR_FUN_1440e3230);
  }
  return DAT_14685c6e8;
}



// FUNCTION 1407e2fb0 FUN_1407e2fb0 body=47 status=ok
// SIG undefined FUN_1407e2fb0(void)

longlong FUN_1407e2fb0(void)

{
  if (DAT_14685c718 == 0) {
    FUN_141786440(&DAT_14685c718,&PTR_FUN_1440e3970);
  }
  return DAT_14685c718;
}



// FUNCTION 1407e2fe0 FUN_1407e2fe0 body=47 status=ok
// SIG undefined FUN_1407e2fe0(void)

longlong FUN_1407e2fe0(void)

{
  if (DAT_14685c848 == 0) {
    FUN_141786a30(&DAT_14685c848,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625d410);
  }
  return DAT_14685c848;
}



// FUNCTION 1407e3010 FUN_1407e3010 body=47 status=ok
// SIG undefined FUN_1407e3010(void)

longlong FUN_1407e3010(void)

{
  if (DAT_14685c860 == 0) {
    FUN_141786a30(&DAT_14685c860,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625d5d0);
  }
  return DAT_14685c860;
}



// FUNCTION 1407e3040 FUN_1407e3040 body=47 status=ok
// SIG undefined FUN_1407e3040(void)

longlong FUN_1407e3040(void)

{
  if (DAT_14685c858 == 0) {
    FUN_141786a30(&DAT_14685c858,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625d550);
  }
  return DAT_14685c858;
}



// FUNCTION 1407e3070 FUN_1407e3070 body=47 status=ok
// SIG undefined FUN_1407e3070(void)

longlong FUN_1407e3070(void)

{
  if (DAT_14685c850 == 0) {
    FUN_141786a30(&DAT_14685c850,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625d490);
  }
  return DAT_14685c850;
}



// FUNCTION 1407e30a0 FUN_1407e30a0 body=47 status=ok
// SIG undefined FUN_1407e30a0(void)

longlong FUN_1407e30a0(void)

{
  if (DAT_14685c728 == 0) {
    FUN_141786a30(&DAT_14685c728,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625ba40);
  }
  return DAT_14685c728;
}



// FUNCTION 1407e30d0 FUN_1407e30d0 body=47 status=ok
// SIG undefined FUN_1407e30d0(void)

longlong FUN_1407e30d0(void)

{
  if (DAT_14685c740 == 0) {
    FUN_141786a30(&DAT_14685c740,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625bc00);
  }
  return DAT_14685c740;
}



// FUNCTION 1407e3100 FUN_1407e3100 body=47 status=ok
// SIG undefined FUN_1407e3100(void)

longlong FUN_1407e3100(void)

{
  if (DAT_14685c738 == 0) {
    FUN_141786a30(&DAT_14685c738,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625bb80);
  }
  return DAT_14685c738;
}



// FUNCTION 1407e3130 FUN_1407e3130 body=47 status=ok
// SIG undefined FUN_1407e3130(void)

longlong FUN_1407e3130(void)

{
  if (DAT_14685c730 == 0) {
    FUN_141786a30(&DAT_14685c730,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625bac0);
  }
  return DAT_14685c730;
}



// FUNCTION 1407e3160 FUN_1407e3160 body=47 status=ok
// SIG undefined FUN_1407e3160(void)

longlong FUN_1407e3160(void)

{
  if (DAT_14685c868 == 0) {
    FUN_1417866a0(&DAT_14685c868,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625eda0);
  }
  return DAT_14685c868;
}



// FUNCTION 1407e3190 FUN_1407e3190 body=47 status=ok
// SIG undefined FUN_1407e3190(void)

longlong FUN_1407e3190(void)

{
  if (DAT_14685c600 == 0) {
    FUN_1417866a0(&DAT_14685c600,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625a7c0);
  }
  return DAT_14685c600;
}



// FUNCTION 1407e31c0 FUN_1407e31c0 body=47 status=ok
// SIG undefined FUN_1407e31c0(void)

longlong FUN_1407e31c0(void)

{
  if (DAT_14685c870 == 0) {
    FUN_1417866a0(&DAT_14685c870,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625edf0);
  }
  return DAT_14685c870;
}



// FUNCTION 1407e31f0 FUN_1407e31f0 body=47 status=ok
// SIG undefined FUN_1407e31f0(void)

longlong FUN_1407e31f0(void)

{
  if (DAT_14685c610 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685c610,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625a810);
  }
  return DAT_14685c610;
}



// FUNCTION 1407e3220 FUN_1407e3220 body=47 status=ok
// SIG undefined FUN_1407e3220(void)

longlong FUN_1407e3220(void)

{
  if (DAT_14685c690 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685c690,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625af40);
  }
  return DAT_14685c690;
}



// FUNCTION 1407e3250 FUN_1407e3250 body=47 status=ok
// SIG undefined FUN_1407e3250(void)

longlong FUN_1407e3250(void)

{
  if (DAT_14685c6a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685c6a0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625b0c0);
  }
  return DAT_14685c6a0;
}



// FUNCTION 1407e3280 FUN_1407e3280 body=47 status=ok
// SIG undefined FUN_1407e3280(void)

longlong FUN_1407e3280(void)

{
  if (DAT_14685c670 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685c670,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625ac90);
  }
  return DAT_14685c670;
}



// FUNCTION 1407e32b0 FUN_1407e32b0 body=47 status=ok
// SIG undefined FUN_1407e32b0(void)

longlong FUN_1407e32b0(void)

{
  if (DAT_14685c680 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685c680,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625ae10);
  }
  return DAT_14685c680;
}



// FUNCTION 1407e32e0 FUN_1407e32e0 body=47 status=ok
// SIG undefined FUN_1407e32e0(void)

longlong FUN_1407e32e0(void)

{
  if (DAT_14685c6b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685c6b0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625b130);
  }
  return DAT_14685c6b0;
}



// FUNCTION 1407e3310 FUN_1407e3310 body=144 status=ok
// SIG undefined FUN_1407e3310(void)

void FUN_1407e3310(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407c1350(param_1,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e33a0 FUN_1407e33a0 body=211 status=ok
// SIG undefined FUN_1407e33a0(void)

void FUN_1407e33a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407c14c0(param_1,bVar2,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3480 execSetPlayerControllerID body=173 status=ok
// SIG undefined execSetPlayerControllerID(void)

void UGameplayStatics::execSetPlayerControllerID(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1407c3340(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1407e3630 FUN_1407e3630 body=122 status=ok
// SIG undefined FUN_1407e3630(void)

void FUN_1407e3630(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_1407c7930(param_1,local_18);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407e36b0 execGetTotalSpawns body=144 status=ok
// SIG undefined execGetTotalSpawns(void)

void URemnantQuestAIDirector::execGetTotalSpawns
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407c9a40(param_1,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3740 FUN_1407e3740 body=211 status=ok
// SIG undefined FUN_1407e3740(void)

void FUN_1407e3740(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407c9b90(param_1,bVar2,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3820 FUN_1407e3820 body=211 status=ok
// SIG undefined FUN_1407e3820(void)

void FUN_1407e3820(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407c9e10(param_1,bVar2,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3900 FUN_1407e3900 body=211 status=ok
// SIG undefined FUN_1407e3900(void)

void FUN_1407e3900(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407c9e50(param_1,bVar2,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e39e0 FUN_1407e39e0 body=43 status=ok
// SIG undefined FUN_1407e39e0(void)

void FUN_1407e39e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407c9f60();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3a10 FUN_1407e3a10 body=44 status=ok
// SIG undefined FUN_1407e3a10(void)

void FUN_1407e3a10(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = SWindow::GetHittestGrid();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3a40 FUN_1407e3a40 body=44 status=ok
// SIG undefined FUN_1407e3a40(void)

void FUN_1407e3a40(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407cadf0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3a70 FUN_1407e3a70 body=44 status=ok
// SIG undefined FUN_1407e3a70(void)

void FUN_1407e3a70(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407caf40();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3aa0 execGetAttachedActor body=44 status=ok
// SIG undefined execGetAttachedActor(void)

void UCableComponent::execGetAttachedActor(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetAttachedActor();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3ad0 FUN_1407e3ad0 body=44 status=ok
// SIG undefined FUN_1407e3ad0(void)

void FUN_1407e3ad0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407cb700();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3b00 FUN_1407e3b00 body=44 status=ok
// SIG undefined FUN_1407e3b00(void)

void FUN_1407e3b00(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407cb730();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3b50 FUN_1407e3b50 body=43 status=ok
// SIG undefined FUN_1407e3b50(void)

void FUN_1407e3b50(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407cd390();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3b80 FUN_1407e3b80 body=43 status=ok
// SIG undefined FUN_1407e3b80(void)

void FUN_1407e3b80(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = AIndianaPlayerController::ToggleCharacterSummary();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3bb0 FUN_1407e3bb0 body=43 status=ok
// SIG undefined FUN_1407e3bb0(void)

void FUN_1407e3bb0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407cde20();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3be0 FUN_1407e3be0 body=143 status=ok
// SIG undefined FUN_1407e3be0(void)

void FUN_1407e3be0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = BuildSettings::IsPromotedBuild(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3c70 FUN_1407e3c70 body=44 status=ok
// SIG undefined FUN_1407e3c70(void)

void FUN_1407e3c70(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407ce140();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e3ca0 FUN_1407e3ca0 body=128 status=ok
// SIG undefined FUN_1407e3ca0(void)

void FUN_1407e3ca0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1407d1020(param_1,local_res10);
  return;
}



// FUNCTION 1407e3d20 FUN_1407e3d20 body=128 status=ok
// SIG undefined FUN_1407e3d20(void)

void FUN_1407e3d20(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1407d14f0(param_1,local_res10);
  return;
}



// FUNCTION 1407e3da0 FUN_1407e3da0 body=128 status=ok
// SIG undefined FUN_1407e3da0(void)

void FUN_1407e3da0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1407d1550(param_1,local_res10);
  return;
}



// FUNCTION 1407e3e20 FUN_1407e3e20 body=112 status=ok
// SIG undefined FUN_1407e3e20(void)

void FUN_1407e3e20(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1407d7290(local_res10[0]);
  return;
}



// FUNCTION 1407e3ed0 FUN_1407e3ed0 body=112 status=ok
// SIG undefined FUN_1407e3ed0(void)

void FUN_1407e3ed0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1407d9b90(local_res10[0]);
  return;
}



// FUNCTION 1407e3f40 FUN_1407e3f40 body=130 status=ok
// SIG undefined FUN_1407e3f40(void)

void FUN_1407e3f40(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1407da230(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1407e3fd0 execSetPlayerControllerID body=173 status=ok
// SIG undefined execSetPlayerControllerID(void)

void UGameplayStatics::execSetPlayerControllerID(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1407da790(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1407e4080 FUN_1407e4080 body=128 status=ok
// SIG undefined FUN_1407e4080(void)

void FUN_1407e4080(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1407da8a0(param_1,local_res10);
  return;
}



// FUNCTION 1407e4100 FUN_1407e4100 body=128 status=ok
// SIG undefined FUN_1407e4100(void)

void FUN_1407e4100(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1407dab00(param_1,local_res10);
  return;
}



// FUNCTION 1407e4180 FUN_1407e4180 body=128 status=ok
// SIG undefined FUN_1407e4180(void)

void FUN_1407e4180(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1407dab50(param_1,local_res10);
  return;
}



// FUNCTION 1407e4200 FUN_1407e4200 body=128 status=ok
// SIG undefined FUN_1407e4200(void)

void FUN_1407e4200(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1407dad10(param_1,local_res10);
  return;
}



// FUNCTION 1407e4280 FUN_1407e4280 body=239 status=ok
// SIG undefined FUN_1407e4280(void)

void FUN_1407e4280(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407db1a0(local_res20,local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e4370 FUN_1407e4370 body=368 status=ok
// SIG undefined FUN_1407e4370(void)

void FUN_1407e4370(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_res10;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong *local_a0;
  int local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FUN_1407bbca0(&local_e8);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_30 = 0;
  local_28 = 0;
  local_78 = local_e8;
  local_70 = local_e0;
  local_68 = local_d8;
  local_60 = local_d0;
  local_58 = local_c8;
  local_50 = local_c0;
  local_4c = local_bc;
  local_48 = local_b8;
  local_40 = local_b0;
  local_3c = local_ac;
  local_38 = local_a8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if ((local_98 != 0) && (local_a0 != (longlong *)0x0)) {
    (**(code **)(*local_a0 + 0x30))(local_a0,&local_30);
  }
  local_20 = local_90;
  local_18 = local_88;
  local_14 = local_84;
  local_12 = local_82;
  uVar1 = FUN_1407db220(local_res10,&local_78);
  *param_3 = uVar1;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a0);
  return;
}



// FUNCTION 1407e44e0 FUN_1407e44e0 body=372 status=ok
// SIG undefined FUN_1407e44e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e44e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_28 = _DAT_14685c5a0 & _DAT_14685c5b0;
  uStack_24 = uRam000000014685c5a4 & uRam000000014685c5b4;
  uStack_20 = uRam000000014685c5a8 & uRam000000014685c5b8;
  uStack_1c = uRam000000014685c5ac & uRam000000014685c5bc;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014685c5ac;
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_78 = CONCAT44(uStack_44,local_48);
  uStack_70 = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_68 = (undefined4)local_38;
  uStack_64 = local_38._4_4_;
  uStack_60 = (undefined4)uStack_30;
  uStack_5c = uStack_30._4_4_;
  local_58 = local_28;
  uStack_54 = uStack_24;
  uStack_50 = uStack_20;
  uStack_4c = uStack_1c;
  uVar1 = FUN_1407db460(local_80,local_88,&local_78);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e4660 execStartDialogue4 body=370 status=ok
// SIG undefined execStartDialogue4(void)

void UDlgManager::execStartDialogue4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407db6b0(local_20,local_28,local_res20,local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e4820 FUN_1407e4820 body=112 status=ok
// SIG undefined FUN_1407e4820(void)

void FUN_1407e4820(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1407dcce0(local_res10[0]);
  return;
}



// FUNCTION 1407e4890 FUN_1407e4890 body=162 status=ok
// SIG undefined FUN_1407e4890(void)

longlong FUN_1407e4890(void)

{
  if (DAT_14685cbd8 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnSystemEditorSettings",&DAT_14685cbd8,FUN_140447710,0x40
                  ,0x10000004,0,L"EditorPerProjectUserSettings",FUN_1407e6690,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDeveloperSettings::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685cbd8;
}



// FUNCTION 1407e4940 FUN_1407e4940 body=47 status=ok
// SIG undefined FUN_1407e4940(void)

longlong FUN_1407e4940(void)

{
  if (DAT_14685cbc0 == 0) {
    FUN_141786440(&DAT_14685cbc0,&PTR_FUN_1440e5ad0);
  }
  return DAT_14685cbc0;
}



// FUNCTION 1407e4970 FUN_1407e4970 body=47 status=ok
// SIG undefined FUN_1407e4970(void)

longlong FUN_1407e4970(void)

{
  if (DAT_14685cbb8 == 0) {
    FUN_141786a30(&DAT_14685cbb8,&PTR_FUN_146260f00);
  }
  return DAT_14685cbb8;
}



// FUNCTION 1407e49a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAnimMontage::GetPrivateStaticClass(void)

{
  if (DAT_14685cb50 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnerTeamComponent",&DAT_14685cb50,FUN_140447710,0x1d8,
                  0x10000000,0,L"Engine",&LAB_1407e6840,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UCircularThrobber::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685cb50;
}



// FUNCTION 1407e4a80 FUN_1407e4a80 body=47 status=ok
// SIG undefined FUN_1407e4a80(void)

longlong FUN_1407e4a80(void)

{
  if (DAT_14685cc00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685cc00,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1462618f0);
  }
  return DAT_14685cc00;
}



// FUNCTION 1407e4ab0 FUN_1407e4ab0 body=53 status=ok
// SIG undefined FUN_1407e4ab0(void)

void FUN_1407e4ab0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_1440ebe00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}


