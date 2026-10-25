// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1406773f0 FUN_1406773f0 body=62 status=ok
// SIG undefined FUN_1406773f0(void)

undefined8 * FUN_1406773f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144039390;
  FUN_140676a00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 140677430 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * TaskBattleResult::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144039580;
  FUN_140676a00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140677470 FUN_140677470 body=43 status=ok
// SIG undefined FUN_140677470(void)

undefined8 * FUN_140677470(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440385e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1406774a0 FUN_1406774a0 body=43 status=ok
// SIG undefined FUN_1406774a0(void)

undefined8 * FUN_1406774a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144038628;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1406774d0 FUN_1406774d0 body=70 status=ok
// SIG undefined FUN_1406774d0(void)

longlong FUN_1406774d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140677520 FUN_140677520 body=298 status=ok
// SIG undefined FUN_140677520(void)

longlong FUN_140677520(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x2d8);
  iVar1 = *(int *)(param_1 + 0x2e0);
  if (iVar1 != 0) {
    lVar2 = lVar2 + 8;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2);
      lVar2 = lVar2 + 0x40;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0x2d8);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  FUN_1406763e0(param_1 + 0x2c8);
  FUN_140676580(param_1 + 0x2a0);
  FUN_140676750(param_1 + 0x290);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x270);
  lVar2 = *(longlong *)(param_1 + 0x268);
  if (iVar1 != 0) {
    lVar2 = lVar2 + 8;
    do {
      FUN_140676450(lVar2);
      lVar2 = lVar2 + 0x18;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0x268);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x208);
  *(undefined ***)(param_1 + 0x200) = &PTR_FUN_144038628;
  FUN_140676a70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2f0);
  }
  return param_1;
}



// FUNCTION 140677650 FUN_140677650 body=244 status=ok
// SIG undefined FUN_140677650(void)

undefined8 FUN_140677650(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x2d8);
  iVar3 = *(int *)(param_1 + 0x2e0);
  lVar5 = *plVar1;
  lVar2 = lVar5 + (longlong)iVar3 * 0x40;
  if (lVar5 != lVar2) {
    piVar4 = (int *)(lVar5 + 0x38);
    do {
      if (((piVar4[-2] != 0 || piVar4[-1] != 0) || piVar4[1] != 0) || *piVar4 != 0) {
        if ((((*(int *)(param_2 + 0x30) != 0 || *(int *)(param_2 + 0x34) != 0) ||
             *(int *)(param_2 + 0x38) != 0) || *(int *)(param_2 + 0x3c) != 0) &&
           (((piVar4[-2] == *(int *)(param_2 + 0x30) && piVar4[-1] == *(int *)(param_2 + 0x34)) &&
            piVar4[1] == *(int *)(param_2 + 0x3c)) && *piVar4 == *(int *)(param_2 + 0x38))) {
          return 0;
        }
      }
      lVar5 = lVar5 + 0x40;
      piVar4 = piVar4 + 0x10;
    } while (lVar5 != lVar2);
  }
  *(int *)(param_1 + 0x2e0) = iVar3 + 1;
  if (*(int *)(param_1 + 0x2e4) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar3);
  }
  FUN_140675b40(*plVar1 + (longlong)iVar3 * 0x40,param_2);
  return 1;
}



// FUNCTION 140677750 FUN_140677750 body=247 status=ok
// SIG undefined FUN_140677750(void)

undefined8 FUN_140677750(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x2c8);
  lVar5 = *plVar1;
  iVar3 = *(int *)(param_1 + 0x2d0);
  lVar2 = (longlong)iVar3 * 0x58 + lVar5;
  if (lVar5 != lVar2) {
    piVar4 = (int *)(lVar5 + 0x50);
    do {
      if (((piVar4[-2] != 0 || piVar4[-1] != 0) || piVar4[1] != 0) || *piVar4 != 0) {
        if ((((*(int *)(param_2 + 0x48) != 0 || *(int *)(param_2 + 0x4c) != 0) ||
             *(int *)(param_2 + 0x50) != 0) || *(int *)(param_2 + 0x54) != 0) &&
           (((piVar4[-2] == *(int *)(param_2 + 0x48) && piVar4[-1] == *(int *)(param_2 + 0x4c)) &&
            piVar4[1] == *(int *)(param_2 + 0x54)) && *piVar4 == *(int *)(param_2 + 0x50))) {
          return 0;
        }
      }
      lVar5 = lVar5 + 0x58;
      piVar4 = piVar4 + 0x16;
    } while (lVar5 != lVar2);
  }
  *(int *)(param_1 + 0x2d0) = iVar3 + 1;
  if (*(int *)(param_1 + 0x2d4) < iVar3 + 1) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  FUN_140675bd0((longlong)iVar3 * 0x58 + *plVar1,param_2);
  return 1;
}



// FUNCTION 140677850 FUN_140677850 body=338 status=ok
// SIG undefined FUN_140677850(void)

undefined8 FUN_140677850(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  float fVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  plVar6 = (longlong *)param_2[2];
  lVar7 = *param_2;
  lVar8 = param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  uVar12 = *param_3;
  plVar1 = (longlong *)(param_1 + 0x10);
  fVar4 = *(float *)(param_3 + 1);
  plVar11 = (longlong *)*plVar1;
  iVar5 = *(int *)(param_1 + 0x18);
  lVar13 = (longlong)iVar5;
  plVar3 = plVar11 + lVar13 * 5;
  if (plVar11 != plVar3) {
    pfVar10 = (float *)(plVar11 + 4);
    do {
      if ((((*plVar11 == lVar7) && ((float)uVar12 == pfVar10[-2])) &&
          ((float)((ulonglong)uVar12 >> 0x20) == pfVar10[-1])) && (fVar4 == *pfVar10)) {
        uVar12 = 0;
        goto LAB_140677941;
      }
      plVar11 = plVar11 + 5;
      pfVar10 = pfVar10 + 10;
    } while (plVar11 != plVar3);
  }
  *(int *)(param_1 + 0x18) = iVar5 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar5 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
  }
  lVar9 = *plVar1;
  *(longlong *)(lVar9 + lVar13 * 0x28) = lVar7;
  *(longlong *)(lVar9 + 8 + lVar13 * 0x28) = lVar8;
  *(longlong **)(lVar9 + 0x10 + lVar13 * 0x28) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar9 + 0x18 + lVar13 * 0x28) = uVar12;
  *(float *)(lVar9 + 0x20 + lVar13 * 0x28) = fVar4;
  uVar12 = 1;
LAB_140677941:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  return uVar12;
}



// FUNCTION 1406779b0 FUN_1406779b0 body=160 status=ok
// SIG undefined FUN_1406779b0(void)

ulonglong FUN_1406779b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x18);
  lVar2 = (longlong)iVar3 * 0x18;
  plVar1 = plVar6 + (longlong)iVar3 * 3;
  if (plVar6 != plVar1) {
    do {
      if (*plVar6 == *param_2) {
        return (ulonglong)plVar6 & 0xffffffffffffff00;
      }
      plVar6 = plVar6 + 3;
    } while (plVar6 != plVar1);
  }
  *(int *)(param_1 + 0x18) = iVar3 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x10));
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  *(longlong *)(lVar4 + lVar2) = *param_2;
  *(longlong *)(lVar4 + 8 + lVar2) = param_2[1];
  lVar5 = param_2[2];
  *(longlong *)(lVar4 + 0x10 + lVar2) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
}



// FUNCTION 140677a50 FUN_140677a50 body=85 status=ok
// SIG undefined FUN_140677a50(void)

ulonglong FUN_140677a50(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  uVar1 = (ulonglong)*(int *)(param_1 + 0x58);
  lVar4 = uVar1 * 0x30 + lVar2;
  for (; lVar2 != lVar4; lVar2 = lVar2 + 0x30) {
    if (*(char *)(lVar2 + 0x28) != '\0') goto LAB_140677aa2;
  }
  uVar1 = *(ulonglong *)(param_1 + 0x60);
  uVar3 = (longlong)*(int *)(param_1 + 0x68) * 0x30 + uVar1;
  while( true ) {
    if (uVar1 == uVar3) {
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
    if (*(char *)(uVar1 + 0x28) != '\0') break;
    uVar1 = uVar1 + 0x30;
  }
LAB_140677aa2:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140677ab0 FUN_140677ab0 body=291 status=ok
// SIG undefined FUN_140677ab0(void)

ulonglong FUN_140677ab0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = *param_1;
  uVar4 = 0;
  fVar3 = *param_2;
  fVar1 = *param_3;
  fVar6 = fVar1 + fVar3;
  fVar7 = ABS(fVar2);
  if ((((((0.0001 <= fVar7) && (0.0 < fVar6)) && (uVar5 = 0x3f800000, fVar7 <= 1.0)) &&
       ((0.0 <= fVar3 && (fVar3 <= 1.0)))) && ((0.0 <= fVar1 && ((fVar1 <= 1.0 && (0.0 < fVar6))))))
     && (fVar6 < 1.0)) {
    if ((0.0 < fVar3) && (fVar7 <= fVar3)) {
      return 0;
    }
    if ((0.0 < fVar1) && (1.0 - fVar7 <= fVar1)) {
      if (fVar2 <= 0.0) {
        uVar5 = 0xbf800000;
      }
      return (ulonglong)uVar5;
    }
    if (0.0 < fVar2) {
      fVar2 = fVar2 - fVar3;
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      return (ulonglong)(uint)(fVar2 / (1.0 - fVar6));
    }
    uVar4 = 0x80000000;
    fVar3 = -fVar2 - fVar3;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar2 = fVar3 / (fVar6 - 1.0);
  }
  return CONCAT44(uVar4,fVar2);
}



// FUNCTION 140677be0 FUN_140677be0 body=266 status=ok
// SIG undefined FUN_140677be0(void)

void FUN_140677be0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 8))();
    lVar3 = UObject::GetPrivateStaticClass();
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
      lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
      FUN_140677e10(lVar2,*(undefined8 *)(lVar2 + 0x10),lVar3);
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
      if ((lVar3 != 0) && (plVar4 != (longlong *)0x0)) {
        lVar2 = *plVar4;
        lVar5 = (longlong)(int)plVar4[1] * 0x40 + lVar2;
        for (; lVar2 != lVar5; lVar2 = lVar2 + 0x40) {
          FUN_140677650(lVar3,lVar2);
        }
      }
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
      if ((lVar3 != 0) && (plVar4 != (longlong *)0x0)) {
        lVar2 = *plVar4;
        lVar5 = (longlong)(int)plVar4[1] * 0x58 + lVar2;
        for (; lVar2 != lVar5; lVar2 = lVar2 + 0x58) {
          FUN_140677750(lVar3,lVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 140677cf0 FUN_140677cf0 body=138 status=ok
// SIG undefined FUN_140677cf0(void)

ulonglong FUN_140677cf0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar3 = *(longlong **)(param_1 + 0x60);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x68) * 6;
  if (plVar3 != plVar4) {
    while (*plVar3 != param_4) {
      plVar3 = plVar3 + 6;
      if (plVar3 == plVar4) {
        uVar2 = FUN_14067bb70(param_1);
        return uVar2;
      }
    }
    if (plVar3 != (longlong *)0x0) {
      cVar1 = FUN_140677850(plVar3 + 1);
      if (cVar1 != '\0') {
        *(undefined1 *)(plVar3 + 5) = 1;
      }
      *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | cVar1 != '\0';
    }
  }
  uVar2 = FUN_14067bb70(param_1);
  return uVar2;
}



// FUNCTION 140677d80 FUN_140677d80 body=138 status=ok
// SIG undefined FUN_140677d80(void)

ulonglong FUN_140677d80(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x58) * 6;
  if (plVar3 != plVar4) {
    while (*plVar3 != param_3) {
      plVar3 = plVar3 + 6;
      if (plVar3 == plVar4) {
        uVar2 = FUN_14067bb70(param_1);
        return uVar2;
      }
    }
    if (plVar3 != (longlong *)0x0) {
      cVar1 = FUN_1406779b0(plVar3 + 1);
      if (cVar1 != '\0') {
        *(undefined1 *)(plVar3 + 5) = 1;
      }
      *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | cVar1 != '\0';
    }
  }
  uVar2 = FUN_14067bb70(param_1);
  return uVar2;
}



// FUNCTION 140677e10 FUN_140677e10 body=240 status=ok
// SIG undefined FUN_140677e10(void)

void FUN_140677e10(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146857730) && (_Init_thread_header(&DAT_146857730), DAT_146857730 == -1))
  {
    DAT_146857720 = FUN_1406802b0();
    DAT_146857728 = FUN_14067ffb0();
    _Init_thread_footer(&DAT_146857730);
  }
  if (param_2 != 0) {
    FUN_140677e10(param_1,*(undefined8 *)(param_2 + 0x30),param_3);
    uVar2 = 0;
    puVar3 = &DAT_146857720;
    do {
      plVar1 = (longlong *)FUN_1422f1ac0(param_2,*puVar3);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x290))(plVar1,param_1,param_3);
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < 2);
  }
  return;
}



// FUNCTION 140677f00 FUN_140677f00 body=549 status=ok
// SIG undefined FUN_140677f00(void)

void FUN_140677f00(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong local_98;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  int local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_3 != 0) {
    uVar6 = 0;
    puVar10 = *(undefined8 **)(param_1 + 0x28);
    puVar2 = puVar10 + (longlong)*(int *)(param_1 + 0x30) * 4;
    local_98 = 0;
    local_8c = 0;
    uVar4 = uVar6;
    uVar9 = uVar6;
    for (; iVar7 = (int)uVar6, puVar10 != puVar2; puVar10 = puVar10 + 4) {
      local_88 = *(undefined4 *)(puVar10 + 2);
      uStack_84 = *(undefined4 *)((longlong)puVar10 + 0x14);
      uStack_80 = *(undefined4 *)(puVar10 + 3);
      uStack_7c = *(undefined4 *)((longlong)puVar10 + 0x1c);
      local_78 = *puVar10;
      local_70 = (longlong *)0x0;
      local_68 = 0;
      FWeakObjectPtr::operator=(&local_60,0);
      local_58 = 0;
      FWeakObjectPtr::operator=(&local_50,param_2);
      uVar1 = puVar10[1];
      local_48 = local_88;
      uStack_44 = uStack_84;
      uStack_40 = uStack_80;
      uStack_3c = uStack_7c;
      if ((local_68 != 0) && (local_70 != (longlong *)0x0)) {
        (**(code **)(*local_70 + 0x28))(local_70,0);
        if (local_70 != (longlong *)0x0) {
          local_70 = (longlong *)FMemory::Realloc(local_70,0,0);
        }
        local_68 = 0;
      }
      FWeakObjectPtr::operator=(&local_60,param_2);
      local_90 = iVar7 + 1;
      local_58 = uVar1;
      if ((int)uVar4 < (int)local_90) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_98);
        uVar4 = (ulonglong)local_8c;
        uVar9 = local_98;
      }
      uVar6 = (ulonglong)local_90;
      puVar3 = (undefined8 *)((longlong)iVar7 * 0x40 + uVar9);
      *puVar3 = local_78;
      puVar3[1] = (longlong *)0x0;
      *(undefined4 *)(puVar3 + 2) = 0;
      if (((&local_70 != (longlong **)(puVar3 + 1)) && (local_68 != 0)) &&
         (local_70 != (longlong *)0x0)) {
        (**(code **)(*local_70 + 0x30))();
      }
      *(undefined4 *)(puVar3 + 3) = local_60;
      *(undefined4 *)((longlong)puVar3 + 0x1c) = local_5c;
      puVar3[4] = local_58;
      *(undefined4 *)(puVar3 + 5) = local_50;
      *(undefined4 *)((longlong)puVar3 + 0x2c) = local_4c;
      *(undefined4 *)(puVar3 + 6) = local_48;
      *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_44;
      *(undefined4 *)(puVar3 + 7) = uStack_40;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_3c;
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_70);
    }
    for (uVar4 = uVar9; uVar4 != (longlong)iVar7 * 0x40 + uVar9; uVar4 = uVar4 + 0x40) {
      FUN_140677650(param_3,uVar4);
    }
    if (iVar7 != 0) {
      lVar5 = uVar9 + 8;
      do {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5);
        lVar5 = lVar5 + 0x40;
        uVar8 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar8;
      } while (uVar8 != 0);
    }
    if (uVar9 != 0) {
      FMemory::Free(uVar9);
    }
  }
  return;
}



// FUNCTION 140678130 FUN_140678130 body=544 status=ok
// SIG undefined FUN_140678130(void)

void FUN_140678130(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong local_b8;
  uint local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_90;
  longlong *local_88;
  int local_80;
  longlong *local_78;
  int local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (param_3 != 0) {
    uVar3 = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x28);
    local_b8 = 0;
    local_ac = 0;
    puVar1 = puVar6 + (longlong)*(int *)(param_1 + 0x30) * 5;
    uVar9 = uVar3;
    uVar4 = uVar3;
    for (; iVar7 = (int)uVar3, puVar6 != puVar1; puVar6 = puVar6 + 5) {
      local_98 = *puVar6;
      local_a8 = *(undefined4 *)(puVar6 + 3);
      uStack_a4 = *(undefined4 *)((longlong)puVar6 + 0x1c);
      uStack_a0 = *(undefined4 *)(puVar6 + 4);
      uStack_9c = *(undefined4 *)((longlong)puVar6 + 0x24);
      local_90 = *(undefined1 *)(puVar6 + 1);
      local_88 = (longlong *)0x0;
      local_80 = 0;
      local_78 = (longlong *)0x0;
      local_70 = 0;
      FWeakObjectPtr::operator=(local_68,0);
      local_60 = 0;
      FWeakObjectPtr::operator=(local_58,param_2);
      uVar2 = puVar6[2];
      local_50 = local_a8;
      uStack_4c = uStack_a4;
      uStack_48 = uStack_a0;
      uStack_44 = uStack_9c;
      if ((local_80 != 0) && (local_88 != (longlong *)0x0)) {
        (**(code **)(*local_88 + 0x28))(local_88,0);
        if (local_88 != (longlong *)0x0) {
          local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
        }
        local_80 = 0;
      }
      if ((local_70 != 0) && (local_78 != (longlong *)0x0)) {
        (**(code **)(*local_78 + 0x28))(local_78,0);
        if (local_78 != (longlong *)0x0) {
          local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
        }
        local_70 = 0;
      }
      FWeakObjectPtr::operator=(local_68,param_2);
      local_b0 = iVar7 + 1;
      local_60 = uVar2;
      if ((int)uVar4 < (int)local_b0) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_b8,uVar3);
        uVar4 = (ulonglong)local_ac;
        uVar9 = local_b8;
      }
      uVar3 = (ulonglong)local_b0;
      FUN_140675bd0((longlong)iVar7 * 0x58 + uVar9);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_78);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    }
    for (uVar4 = uVar9; uVar4 != (longlong)iVar7 * 0x58 + uVar9; uVar4 = uVar4 + 0x58) {
      FUN_140677750(param_3,uVar4);
    }
    if (iVar7 != 0) {
      lVar5 = uVar9 + 0x10;
      do {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5 + 0x10);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5);
        lVar5 = lVar5 + 0x58;
        uVar8 = (int)uVar3 - 1;
        uVar3 = (ulonglong)uVar8;
      } while (uVar8 != 0);
    }
    if (uVar9 != 0) {
      FMemory::Free(uVar9);
    }
  }
  return;
}



// FUNCTION 140678350 FUN_140678350 body=47 status=ok
// SIG undefined FUN_140678350(void)

void FUN_140678350(longlong *param_1)

{
  char cVar1;
  
  FUN_14067efd0(param_1,&DAT_1468576f8,0);
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x42) = 1;
  }
  return;
}



// FUNCTION 140678380 FUN_140678380 body=68 status=ok
// SIG undefined FUN_140678380(void)

void FUN_140678380(longlong *param_1)

{
  char cVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = (undefined4)param_1[0xf];
  *(undefined4 *)(param_1 + 0x12) = local_res8[0];
  FUN_14067efd0(local_res8[0],&DAT_1468576d8,local_res8);
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x42) = 1;
  }
  return;
}



// FUNCTION 1406783f0 FUN_1406783f0 body=40 status=ok
// SIG undefined FUN_1406783f0(void)

void FUN_1406783f0(longlong param_1)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x90);
  FUN_14067efd0(local_res8[0],&DAT_1468576f0,local_res8);
  return;
}



// FUNCTION 140678430 FUN_140678430 body=476 status=ok
// SIG undefined FUN_140678430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140678430(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if (*(char *)(param_3 + 0x10) == '\0') {
    return;
  }
  lVar1 = param_1[0x56];
  param_1[0x56] = param_2;
  lVar2 = *(longlong *)(param_3 + 0x20);
  if (lVar2 != 0) {
    lVar5 = FUN_1406810f0();
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
      plVar8 = (longlong *)param_1[0x5b];
      plVar10 = plVar8 + (longlong)(int)param_1[0x5c] * 8;
      if (plVar8 != plVar10) {
        plVar9 = plVar8 + 4;
        do {
          if (*plVar8 == lVar2) {
            if ((((int)plVar9[-2] == 0) || ((longlong *)plVar9[-3] == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*(longlong *)plVar9[-3] + 0x18))(), cVar4 == '\0')) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              if ((int)plVar9[-2] == 0) {
                (**(code **)(_DAT_00000000 + 0x38))(0,lVar2,param_4);
              }
              else {
                (**(code **)(*(longlong *)plVar9[-3] + 0x38))((longlong *)plVar9[-3],lVar2,param_4);
              }
            }
            else if (((*plVar9 != 0) && (lVar5 = FWeakObjectPtr::Get(), lVar5 != 0)) &&
                    (lVar5 = UObject::FindFunction(lVar5,*plVar9), lVar5 != 0)) {
              local_40 = *param_4;
              local_38 = *(undefined4 *)(param_4 + 1);
              local_48 = lVar2;
              plVar6 = (longlong *)FWeakObjectPtr::Get(plVar9 + -1);
              uVar7 = FUN_14178ac60(plVar6,*plVar9);
              (**(code **)(*plVar6 + 0x208))(plVar6,uVar7,&local_48);
            }
          }
          plVar8 = plVar8 + 8;
          plVar9 = plVar9 + 8;
        } while (plVar8 != plVar10);
      }
      goto LAB_1406785e7;
    }
  }
  (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(param_3 + 0x30),param_5);
LAB_1406785e7:
  param_1[0x56] = lVar1;
  return;
}



// FUNCTION 140678610 FUN_140678610 body=5 status=ok
// SIG undefined FUN_140678610(void)

undefined1 FUN_140678610(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



// FUNCTION 140678620 FUN_140678620 body=470 status=ok
// SIG undefined FUN_140678620(void)

void FUN_140678620(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong local_res8;
  
  if (*(char *)((longlong)param_1 + 700) != '\0') {
    *(undefined1 *)((longlong)param_1 + 700) = 0;
    (**(code **)(*param_1 + 0x400))();
    plVar9 = (longlong *)param_1[0x52];
    for (iVar7 = (int)param_1[0x53]; iVar7 != 0; iVar7 = iVar7 + -1) {
      plVar4 = (longlong *)plVar9[0xb];
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
      plVar9[4] = (longlong)&PTR__scalar_deleting_destructor__1440385f8;
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(plVar9 + 6);
      plVar9[4] = (longlong)&PTR_FUN_1440385e0;
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(plVar9 + 2);
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 0xc;
    }
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x53) = 0;
    if (*(int *)((longlong)param_1 + 0x29c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x52,0);
    }
    plVar9 = (longlong *)param_1[0x54];
    for (iVar7 = (int)param_1[0x55]; iVar7 != 0; iVar7 = iVar7 + -1) {
      plVar9[4] = (longlong)&PTR__scalar_deleting_destructor__144038610;
      FUN_140676620(plVar9 + 6);
      plVar9[4] = (longlong)&PTR_FUN_1440385e0;
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(plVar9 + 2);
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 10;
    }
    *(undefined4 *)(param_1 + 0x55) = 0;
    if (*(int *)((longlong)param_1 + 0x2ac) != 0) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 0x54,0);
    }
    plVar9 = (longlong *)param_1[0x50];
    uVar8 = (longlong)(int)param_1[0x51] & 0x1fffffffffffffff;
    if (plVar9 + (int)param_1[0x51] < plVar9) {
      uVar8 = uVar6;
    }
    if (uVar8 != 0) {
      do {
        plVar4 = (longlong *)*plVar9;
        if (*(char *)((longlong)plVar4 + 0x43) != '\0') {
          local_res8 = plVar4[5];
          (**(code **)(*plVar4 + 0x68))(plVar4,&local_res8);
        }
        plVar9 = plVar9 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar8);
    }
  }
  return;
}



// FUNCTION 140678800 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
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



// FUNCTION 1406788b0 FUN_1406788b0 body=528 status=ok
// SIG undefined FUN_1406788b0(void)

void FUN_1406788b0(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  void *_Src;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong lVar8;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar6 = (undefined8 *)*param_2;
  puVar5 = puVar6 + (longlong)(int)param_2[1] * 8;
  uVar3 = local_a0;
  do {
    if (puVar6 == puVar5) {
      return;
    }
    pvVar7 = (void *)0x0;
    local_a0._0_4_ = *(int *)(puVar6 + 1);
    lVar8 = (longlong)(int)local_a0;
    local_a8 = (void *)0x0;
    _Src = (void *)*puVar6;
    local_a0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((int)local_a0 == 0) {
      local_90 = (int)local_a0;
      local_8c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,(int)local_a0,0);
      pvVar7 = local_a8;
      _guard_xfg_dispatch_icall_nop(local_a8,_Src,lVar8 * 2);
      local_90 = (int)local_a0;
      local_8c = local_a0._4_4_;
    }
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_98 = pvVar7;
    FUN_1417978e0(&local_88,&local_98);
    lVar8 = FSoftObjectPath::TryLoad(&local_88);
    if (lVar8 == 0) {
LAB_1406789b5:
      lVar8 = 0;
    }
    else {
      lVar4 = FUN_140680770();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1406789b5;
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
    if (param_3 == lVar8) {
      iVar1 = (int)param_4[1];
      *(int *)(param_4 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_4 + 0xc) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(param_4,iVar1);
      }
      local_70 = 0;
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x40 + *param_4);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      FUN_140676e20(puVar5,puVar6);
      TArray<FSaveGameUserSetting,FDefaultAllocator>::
      ~TArray<FSaveGameUserSetting,FDefaultAllocator>(&local_40);
      TArray<FSaveGameUserSetting,FDefaultAllocator>::
      ~TArray<FSaveGameUserSetting,FDefaultAllocator>(&local_50);
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (local_70 == 0) {
        return;
      }
      FMemory::Free();
      return;
    }
    puVar6 = puVar6 + 8;
    uVar3 = local_a0;
  } while( true );
}



// FUNCTION 140678ac0 OnComponentDestroyed body=46 status=ok
// SIG undefined OnComponentDestroyed(void)

void UBasicInputComponent::OnComponentDestroyed(longlong *param_1,undefined1 param_2)

{
  (**(code **)(*param_1 + 0x400))();
  FUN_142339120(param_1,param_2);
  return;
}



// FUNCTION 140678af0 FUN_140678af0 body=266 status=ok
// SIG undefined FUN_140678af0(void)

void FUN_140678af0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 8))();
    lVar3 = UObject::GetPrivateStaticClass();
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
      lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
      FUN_14067f600(lVar2,*(undefined8 *)(lVar2 + 0x10),lVar3);
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
      if ((lVar3 != 0) && (plVar4 != (longlong *)0x0)) {
        lVar2 = *plVar4;
        lVar5 = (longlong)(int)plVar4[1] * 0x40 + lVar2;
        for (; lVar2 != lVar5; lVar2 = lVar2 + 0x40) {
          FUN_14067d850(lVar3,lVar2);
        }
      }
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
      if ((lVar3 != 0) && (plVar4 != (longlong *)0x0)) {
        lVar2 = *plVar4;
        lVar5 = (longlong)(int)plVar4[1] * 0x58 + lVar2;
        for (; lVar2 != lVar5; lVar2 = lVar2 + 0x58) {
          FUN_14067d970(lVar3,lVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 140678c00 FUN_140678c00 body=1732 status=ok
// SIG undefined FUN_140678c00(void)

void FUN_140678c00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined *_Dst;
  float fVar2;
  ulonglong uVar3;
  uint uVar4;
  void *_Src;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  longlong lVar16;
  int iVar17;
  double dVar18;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [6];
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_2 + 0x98);
    local_78 = (undefined2 *)
               CONCAT44((float)DAT_1464aa738._1_1_ * 0.003921569,
                        (float)DAT_1464aa738._2_1_ * 0.003921569);
    local_70 = CONCAT44((float)DAT_1464aa738._3_1_ * 0.003921569,
                        (float)(byte)DAT_1464aa738 * 0.003921569);
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_78);
    local_88 = *(undefined **)(param_1 + 0x18);
    FName::ToString(&local_88,&local_78);
    puVar15 = &DAT_143f3eda8;
    if ((int)local_70 != 0) {
      puVar15 = local_78;
    }
    pwVar14 = L"";
    if (*(char *)(param_1 + 0x2b9) != '\0') {
      pwVar14 = L"-- FLUSHED --";
    }
    FString::PrintfImpl(local_68,L"GBX INPUT COMPONENT: {c:g}%s{c}  {c:r}%s{c}",puVar15,pwVar14);
    FUN_1428c0170(plVar1,local_68);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_78 = (undefined2 *)
               CONCAT44((float)DAT_1464aa740._1_1_ * 0.003921569,
                        (float)DAT_1464aa740._2_1_ * 0.003921569);
    local_70 = CONCAT44((float)DAT_1464aa740._3_1_ * 0.003921569,
                        (float)(byte)DAT_1464aa740 * 0.003921569);
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_78);
    iVar17 = 0;
    local_88 = (undefined *)((ulonglong)local_88 & 0xffffffff00000000);
    local_78 = (undefined2 *)0x0;
    local_70 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"==== BINDINGS ====",0x26);
    FUN_1428a6fb0(plVar1,&local_78,&local_88);
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FString::PrintfImpl(local_68,L"Discrete Events: {c:g}%d{c}",*(undefined4 *)(param_1 + 0x2d0));
    FUN_1428c0170(plVar1,local_68);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    FString::PrintfImpl(local_68,L"    Axis Events: {c:g}%d{c}",*(undefined4 *)(param_1 + 0x2e0));
    FUN_1428c0170(plVar1,local_68);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    local_78 = (undefined2 *)
               CONCAT44((float)DAT_1464aa740._1_1_ * 0.003921569,
                        (float)DAT_1464aa740._2_1_ * 0.003921569);
    local_70 = CONCAT44((float)DAT_1464aa740._3_1_ * 0.003921569,
                        (float)(byte)DAT_1464aa740 * 0.003921569);
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_78);
    local_88 = (undefined *)((ulonglong)local_88 & 0xffffffff00000000);
    local_78 = (void *)0x0;
    local_70 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"==== BUTTONS ====",0x24);
    FUN_1428a6fb0(plVar1,&local_78,&local_88);
    if (local_78 != (void *)0x0) {
      FMemory::Free();
    }
    fVar2 = *(float *)(param_2 + 0x240);
    local_88 = (undefined *)0x0;
    local_80 = 0;
    *(float *)(param_2 + 0x240) = fVar2 + 15.0;
    lVar10 = *(longlong *)(param_1 + 0x290);
    lVar16 = (longlong)*(int *)(param_1 + 0x298) * 0x60 + lVar10;
    if (lVar10 != lVar16) {
      do {
        puVar6 = (undefined8 *)FName::ToString(lVar10 + 0x28,local_68);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar6;
        }
        uVar12 = 0x67;
        if (*(char *)(lVar10 + 0x40) != '\0') {
          uVar12 = 0x72;
        }
        FString::PrintfImpl(&local_78,L"[{c:%c}%s{c}] ",uVar12,puVar15);
        _Src = local_78;
        uVar3 = local_80;
        if ((int)local_70 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)local_70 + -1;
        }
        if (iVar8 != 0) {
          iVar7 = (int)local_80;
          lVar11 = (longlong)(int)local_80;
          iVar5 = (uint)((int)local_80 == 0) + iVar8 + (int)local_80;
          local_80 = CONCAT44(local_80._4_4_,iVar5);
          if ((int)local_80._4_4_ < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,uVar3 & 0xffffffff);
          }
          _Dst = local_88 + (lVar11 - (ulonglong)(iVar7 != 0)) * 2;
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar8 * 2);
          *(undefined2 *)(_Dst + (longlong)iVar8 * 2) = 0;
        }
        if (local_78 != (void *)0x0) {
          FMemory::Free(local_78);
        }
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        iVar17 = iVar17 + 1;
        if (9 < iVar17) {
          FUN_1428c0170(plVar1,&local_88);
          iVar17 = 0;
          if (local_88 != &DAT_1440364cc) {
            uVar4 = local_80._4_4_;
            local_80 = (ulonglong)local_80._4_4_ << 0x20;
            iVar8 = 0;
            iVar7 = 0;
            if (uVar4 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
              iVar8 = local_80._4_4_;
              iVar7 = (int)local_80;
            }
            iVar17 = 0;
            if (iVar8 < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88);
            }
          }
        }
        lVar10 = lVar10 + 0x60;
      } while (lVar10 != lVar16);
      if (0 < iVar17) {
        FUN_1428c0170(plVar1,&local_88);
      }
    }
    *(float *)(param_2 + 0x240) = fVar2;
    if (local_88 != (undefined *)0x0) {
      FMemory::Free();
    }
    local_78 = (undefined2 *)
               CONCAT44((float)DAT_1464aa740._1_1_ * 0.003921569,
                        (float)DAT_1464aa740._2_1_ * 0.003921569);
    local_70 = CONCAT44((float)DAT_1464aa740._3_1_ * 0.003921569,
                        (float)(byte)DAT_1464aa740 * 0.003921569);
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_78);
    local_88 = (undefined *)((ulonglong)local_88 & 0xffffffff00000000);
    local_78 = (undefined2 *)0x0;
    local_70 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"==== AXES ====",0x1e);
    FUN_1428a6fb0(plVar1,&local_78,&local_88);
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    fVar2 = *(float *)(param_2 + 0x240);
    *(float *)(param_2 + 0x240) = fVar2 + 15.0;
    lVar10 = *(longlong *)(param_1 + 0x2a0);
    lVar16 = (longlong)*(int *)(param_1 + 0x2a8) * 0x50 + lVar10;
    if (lVar10 != lVar16) {
      pfVar9 = (float *)(lVar10 + 0x44);
      do {
        dVar18 = (double)pfVar9[1];
        FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)pfVar9[-1],(double)*pfVar9,
                            dVar18);
        puVar15 = &DAT_143f3eda8;
        if ((int)local_70 != 0) {
          puVar15 = local_78;
        }
        puVar6 = (undefined8 *)FName::ToString(pfVar9 + -7,&local_88);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*puVar6;
        }
        FString::PrintfImpl(local_68,L"{c:g}%s{c} - %s",puVar13,puVar15,dVar18);
        FUN_1428c0170(plVar1,local_68);
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        if (local_88 != (undefined *)0x0) {
          FMemory::Free();
        }
        if (local_78 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        lVar10 = lVar10 + 0x50;
        pfVar9 = pfVar9 + 0x14;
      } while (lVar10 != lVar16);
    }
    *(float *)(param_2 + 0x240) = fVar2;
  }
  return;
}



// FUNCTION 1406792d0 FUN_1406792d0 body=168 status=ok
// SIG undefined FUN_1406792d0(void)

void FUN_1406792d0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x10);
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
      plVar7 = plVar7 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 140679380 Empty body=451 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_140679451;
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
LAB_140679451:
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
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 140679550 FUN_140679550 body=494 status=ok
// SIG undefined FUN_140679550(void)

void FUN_140679550(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar4 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar6) goto LAB_140679624;
      uVar7 = puVar10[lVar8 + 1];
    }
    uStack_64 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_54 = (iStack_50 - iVar9) + 0x1f;
    if (iVar4 < iStack_54) {
LAB_140679624:
      iStack_54 = iVar4;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar4) {
    do {
      lVar8 = (longlong)iStack_2c * 0x30 + *param_1;
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar8 + 0x18);
      plVar5 = *(longlong **)(lVar8 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar7 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140679740 FUN_140679740 body=424 status=ok
// SIG undefined FUN_140679740(void)

void FUN_140679740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10;
  int local_res20 [2];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28 [2];
  
  local_res10 = param_2;
  FWeakObjectPtr::operator=(&local_38,param_1);
  local_30 = local_38;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146229440,local_res20,&local_30);
  if ((local_res20[0] == -1) || ((longlong)local_res20[0] * 0x60 + DAT_146229440 == 0)) {
    local_30 = &local_38;
    FUN_1406749a0(&DAT_146229440,local_res20,&local_30,0);
  }
  FWeakObjectPtr::operator=(&local_30,param_1);
  local_38 = local_30;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146229440,local_res20,&local_38);
  lVar3 = 0;
  lVar2 = lVar3;
  if (local_res20[0] != -1) {
    lVar2 = (longlong)local_res20[0] * 0x60 + DAT_146229440;
  }
  plVar1 = (longlong *)(lVar2 + 8);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res20,local_res10);
  if ((local_res20[0] == -1) || (*plVar1 + (longlong)local_res20[0] * 0x18 == 0)) {
    local_38 = &local_res10;
    FUN_140674c20(plVar1,local_res20,&local_38,0);
  }
  FWeakObjectPtr::operator=(&local_38,param_3);
  FWeakObjectPtr::operator=(&local_30,param_1);
  local_28[0] = local_30;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146229440,local_res20,local_28);
  lVar2 = lVar3;
  if (local_res20[0] != -1) {
    lVar2 = (longlong)local_res20[0] * 0x60 + DAT_146229440;
  }
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(lVar2 + 8),local_res20,local_res10);
  if (local_res20[0] != -1) {
    lVar3 = *(longlong *)(lVar2 + 8) + (longlong)local_res20[0] * 0x18;
  }
  *(undefined4 *)(lVar3 + 8) = (undefined4)local_38;
  *(undefined4 *)(lVar3 + 0xc) = local_38._4_4_;
  return;
}



// FUNCTION 1406798f0 FindId body=203 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint local_res8;
  uint local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    ((longlong)(int)(param_3[1] ^ *param_3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_res8 = *param_3;
        lVar5 = (longlong)iVar4 * 0x60;
        local_res20 = *(undefined4 *)(lVar5 + lVar3);
        local_res24 = *(undefined4 *)(lVar5 + 4 + lVar3);
        local_resc = param_3[1];
        cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res20,&local_res8);
        if (cVar1 != '\0') {
          *param_2 = iVar4;
          return param_2;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar5 + 0x58 + lVar3);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1406799c0 FUN_1406799c0 body=95 status=ok
// SIG undefined FUN_1406799c0(void)

longlong FUN_1406799c0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x60);
    plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x68) * 6;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 6) {
      if (*plVar2 == param_3) {
        if (plVar2 != (longlong *)0x0) {
          FUN_140675ca0(param_2,plVar2 + 1);
          *(undefined1 *)(param_2 + 0x20) = 1;
          return param_2;
        }
        break;
      }
    }
  }
  *(undefined1 *)(param_2 + 0x20) = 0;
  return param_2;
}



// FUNCTION 140679a20 FUN_140679a20 body=95 status=ok
// SIG undefined FUN_140679a20(void)

longlong FUN_140679a20(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x50);
    plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x58) * 6;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 6) {
      if (*plVar2 == param_3) {
        if (plVar2 != (longlong *)0x0) {
          FUN_140675d60(param_2,plVar2 + 1);
          *(undefined1 *)(param_2 + 0x20) = 1;
          return param_2;
        }
        break;
      }
    }
  }
  *(undefined1 *)(param_2 + 0x20) = 0;
  return param_2;
}



// FUNCTION 140679a80 FUN_140679a80 body=152 status=ok
// SIG undefined FUN_140679a80(void)

void FUN_140679a80(ulonglong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  plVar3 = (longlong *)*param_1;
  uVar5 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
  if (plVar3 + (int)param_1[1] < plVar3) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar3;
      lVar2 = plVar1[1];
      plVar1[1] = (longlong)param_1;
      (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3);
      uVar4 = uVar4 + 1;
      plVar1[1] = lVar2;
      plVar3 = plVar3 + 1;
    } while (uVar4 != uVar5);
  }
  return;
}



// FUNCTION 140679b20 FUN_140679b20 body=7 status=ok
// SIG undefined FUN_140679b20(void)

void FUN_140679b20(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140679b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}



// FUNCTION 140679b30 FUN_140679b30 body=39 status=ok
// SIG undefined FUN_140679b30(void)

void FUN_140679b30(longlong *param_1)

{
  if ((char)param_1[0xe] != '\0') {
    (**(code **)(*param_1 + 0x80))();
  }
                    /* WARNING: Could not recover jumptable at 0x000140679b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



// FUNCTION 140679b60 FUN_140679b60 body=251 status=ok
// SIG undefined FUN_140679b60(void)

void FUN_140679b60(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (*(char *)(param_1 + 0x2ba) == '\0') {
    if (*(char *)(param_1 + 0x2b9) == '\0') {
      puVar3 = *(ulonglong **)(param_1 + 0x290);
      puVar2 = puVar3 + (longlong)*(int *)(param_1 + 0x298) * 0xc;
      if (puVar3 != puVar2) {
        do {
          if ((char)puVar3[8] != '\0') {
            *(undefined1 *)(puVar3 + 8) = 0;
            FKey::operator=(puVar3 + 9,&DAT_1469eae28);
            puVar1 = (undefined8 *)*puVar3;
            uVar5 = (longlong)(int)puVar3[1] & 0x1fffffffffffffff;
            if (puVar1 + (int)puVar3[1] < puVar1) {
              uVar5 = 0;
            }
            uVar4 = 0;
            if (uVar5 != 0) {
              do {
                (**(code **)(*(longlong *)*puVar1 + 0x38))();
                uVar4 = uVar4 + 1;
                puVar1 = puVar1 + 1;
              } while (uVar4 != uVar5);
            }
          }
          puVar3 = puVar3 + 0xc;
        } while (puVar3 != puVar2);
      }
      *(undefined1 *)(param_1 + 0x2b9) = 1;
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x2b8) = 1;
  return;
}



// FUNCTION 140679c60 FUN_140679c60 body=327 status=ok
// SIG undefined FUN_140679c60(void)

longlong FUN_140679c60(void)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar2 = (longlong *)FUN_140681280();
  lVar4 = plVar2[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar4 = plVar2[0x1f];
    if (lVar4 == 0) {
      return 0;
    }
  }
  lVar7 = lVar4 + 0x28;
  plVar2 = (longlong *)FWeakObjectPtr::Get(lVar7);
  if (plVar2 == (longlong *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar4 + 0x30)) {
      return 0;
    }
    if (*(longlong *)(lVar4 + 0x38) == 0) {
      return 0;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar7,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 0x30) = DAT_1464b56f4;
    }
    plVar2 = (longlong *)FWeakObjectPtr::Get(lVar7);
    if (plVar2 == (longlong *)0x0) {
      return 0;
    }
  }
  lVar4 = FUN_14171bfe0();
  if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    plVar5 = (longlong *)FUN_140681280();
    plVar6 = plVar2;
    do {
      if (plVar6 == plVar5) {
        if (plVar2[0x1f] != 0) {
          return plVar2[0x1f];
        }
        (**(code **)(*plVar2 + 0x368))(plVar2);
        return plVar2[0x1f];
      }
      plVar6 = (longlong *)plVar6[6];
    } while (plVar6 != (longlong *)0x0);
  }
  return 0;
}



// FUNCTION 140679dc0 FUN_140679dc0 body=37 status=ok
// SIG undefined FUN_140679dc0(void)

longlong * FUN_140679dc0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  plVar1 = plVar2 + (longlong)(int)param_1[1] * 3;
  while( true ) {
    if (plVar2 == plVar1) {
      return (longlong *)0x0;
    }
    if (*plVar2 == param_2) break;
    plVar2 = plVar2 + 3;
  }
  return plVar2;
}



// FUNCTION 140679df0 FUN_140679df0 body=61 status=ok
// SIG undefined FUN_140679df0(void)

longlong * FUN_140679df0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x18) * 5;
  if (plVar3 != plVar1) {
    while (*plVar3 != *param_3) {
      plVar3 = plVar3 + 5;
      if (plVar3 == plVar1) {
        return param_2;
      }
    }
    lVar2 = plVar3[4];
    *param_2 = plVar3[3];
    *(int *)(param_2 + 1) = (int)lVar2;
  }
  return param_2;
}



// FUNCTION 140679e30 FUN_140679e30 body=84 status=ok
// SIG undefined FUN_140679e30(void)

float * FUN_140679e30(longlong param_1,float *param_2,longlong *param_3,float param_4)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  plVar1 = plVar4 + (longlong)*(int *)(param_1 + 0x18) * 5;
  if (plVar4 != plVar1) {
    while (*plVar4 != *param_3) {
      plVar4 = plVar4 + 5;
      if (plVar4 == plVar1) {
        return param_2;
      }
    }
    fVar2 = *(float *)((longlong)plVar4 + 0x1c);
    fVar3 = *(float *)(plVar4 + 4);
    *param_2 = param_4 * *(float *)(plVar4 + 3);
    param_2[1] = param_4 * fVar2;
    param_2[2] = param_4 * fVar3;
  }
  return param_2;
}



// FUNCTION 140679e90 FUN_140679e90 body=859 status=ok
// SIG undefined FUN_140679e90(void)

char FUN_140679e90(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  void *_Src;
  longlong lVar5;
  wint_t wVar6;
  wint_t wVar7;
  longlong lVar8;
  undefined8 *puVar9;
  wint_t *pwVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *local_48;
  int local_40;
  
  if (DAT_146857590 != '\0') {
    return DAT_146857590;
  }
  lVar8 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar8 + 0x30);
  lVar8 = *(longlong *)(lVar8 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
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
  if (lVar8 != 0) {
    puVar9 = (undefined8 *)FUN_140573010(lVar8);
    puVar12 = (undefined2 *)0x0;
    local_48 = (undefined2 *)0x0;
    local_40 = *(int *)(puVar9 + 1);
    lVar8 = (longlong)local_40;
    _Src = (void *)*puVar9;
    if (local_40 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
      puVar12 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar8 * 2);
    }
    iVar3 = local_40;
    pwVar10 = &DAT_144035cf0;
    puVar11 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar11 = puVar12;
    }
    do {
      wVar6 = *(wint_t *)((longlong)(puVar11 + -0xa201ae78) + (longlong)pwVar10);
      if ((wVar6 == 0) && (*pwVar10 == 0)) goto LAB_140679fda;
      if (wVar6 != *pwVar10) {
        wVar6 = towlower(wVar6);
        wVar7 = towlower(*pwVar10);
        if (wVar6 != wVar7) goto LAB_140679fd0;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
  goto LAB_14067a179;
LAB_140679fd0:
  if (wVar6 != wVar7) {
    pwVar10 = &DAT_144035cf8;
    puVar11 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar11 = puVar12;
    }
    do {
      wVar6 = *(wint_t *)((longlong)(puVar11 + -0xa201ae7c) + (longlong)pwVar10);
      if ((wVar6 == 0) && (*pwVar10 == 0)) goto LAB_14067a03a;
      if (wVar6 != *pwVar10) {
        wVar6 = towlower(wVar6);
        wVar7 = towlower(*pwVar10);
        if (wVar6 != wVar7) goto LAB_14067a030;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
LAB_140679fda:
  DAT_146857590 = '\x01';
  goto LAB_14067a158;
LAB_14067a030:
  if (wVar6 != wVar7) {
    pwVar10 = &DAT_144035d00;
    puVar11 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar11 = puVar12;
    }
    do {
      wVar6 = *(wint_t *)((longlong)(puVar11 + -0xa201ae80) + (longlong)pwVar10);
      if ((wVar6 == 0) && (*pwVar10 == 0)) goto LAB_14067a09a;
      if (wVar6 != *pwVar10) {
        wVar6 = towlower(wVar6);
        wVar7 = towlower(*pwVar10);
        if (wVar6 != wVar7) goto LAB_14067a090;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
LAB_14067a03a:
  DAT_146857590 = '\x03';
  goto LAB_14067a158;
LAB_14067a090:
  if (wVar6 != wVar7) {
    pwVar10 = &DAT_144035d08;
    puVar11 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar11 = puVar12;
    }
    do {
      wVar6 = *(wint_t *)((longlong)(puVar11 + -0xa201ae84) + (longlong)pwVar10);
      if ((wVar6 == 0) && (*pwVar10 == 0)) goto LAB_14067a0fa;
      if (wVar6 != *pwVar10) {
        wVar6 = towlower(wVar6);
        wVar7 = towlower(*pwVar10);
        if (wVar6 != wVar7) goto LAB_14067a0f0;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
LAB_14067a09a:
  DAT_146857590 = '\x05';
  goto LAB_14067a158;
LAB_14067a147:
  if (wVar6 == wVar7) {
LAB_14067a151:
    DAT_146857590 = '\x02';
  }
  goto LAB_14067a158;
LAB_14067a0f0:
  if (wVar6 != wVar7) {
    pwVar10 = &DAT_144035d10;
    puVar11 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar11 = puVar12;
    }
    do {
      wVar6 = *(wint_t *)((longlong)(puVar11 + -0xa201ae88) + (longlong)pwVar10);
      if ((wVar6 == 0) && (*pwVar10 == 0)) goto LAB_14067a151;
      if (wVar6 != *pwVar10) {
        wVar6 = towlower(wVar6);
        wVar7 = towlower(*pwVar10);
        if (wVar6 != wVar7) goto LAB_14067a147;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
LAB_14067a0fa:
  DAT_146857590 = '\x04';
LAB_14067a158:
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
LAB_14067a179:
  if (DAT_146857590 == '\0') {
    DAT_146857590 = '\x01';
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return DAT_146857590;
}



// FUNCTION 14067a1f0 FUN_14067a1f0 body=345 status=ok
// SIG undefined FUN_14067a1f0(void)

longlong FUN_14067a1f0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  
  plVar1 = (longlong *)(param_1 + 0x290);
  lVar9 = *plVar1;
  lVar6 = (longlong)*(int *)(param_1 + 0x298) * 0x60 + lVar9;
  if (lVar9 != lVar6) {
    piVar8 = (int *)(lVar9 + 0x38);
    do {
      if (piVar8 + -6 == param_2) {
LAB_14067a33b:
        if (lVar9 != 0) {
          return lVar9;
        }
        break;
      }
      if (*piVar8 == param_2[6]) {
        plVar7 = *(longlong **)(piVar8 + -2);
        plVar2 = plVar7 + (longlong)*piVar8 * 3;
        if (plVar7 == plVar2) goto LAB_14067a33b;
        plVar4 = *(longlong **)(param_2 + 4);
        while (plVar4 != plVar4 + (longlong)param_2[6] * 3) {
          plVar5 = plVar4;
          while (*plVar5 != *plVar7) {
            plVar5 = plVar5 + 3;
            if (plVar5 == plVar4 + (longlong)param_2[6] * 3) goto LAB_14067a292;
          }
          plVar7 = plVar7 + 3;
          if (plVar7 == plVar2) goto LAB_14067a33b;
        }
      }
LAB_14067a292:
      lVar9 = lVar9 + 0x60;
      piVar8 = piVar8 + 0x18;
    } while (lVar9 != lVar6);
  }
  iVar3 = *(int *)(param_1 + 0x298);
  *(int *)(param_1 + 0x298) = iVar3 + 1;
  if (*(int *)(param_1 + 0x29c) < iVar3 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  lVar6 = *plVar1 + (longlong)iVar3 * 0x60;
  FUN_140676020(lVar6,param_2);
  FUN_140675d60(lVar6 + 0x20,param_2);
  *(undefined1 *)(lVar6 + 0x40) = 0;
  *(undefined8 *)(lVar6 + 0x48) = DAT_1469eae28;
  *(undefined8 *)(lVar6 + 0x50) = DAT_1469eae30;
  lVar9 = DAT_1469eae38;
  *(longlong *)(lVar6 + 0x58) = DAT_1469eae38;
  if (lVar9 != 0) {
    LOCK();
    piVar8 = (int *)(lVar9 + 8);
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  return *plVar1 + (longlong)iVar3 * 0x60;
}



// FUNCTION 14067a350 FUN_14067a350 body=45 status=ok
// SIG undefined FUN_14067a350(void)

longlong FUN_14067a350(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x60);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x68) * 2;
  if (plVar1 != plVar2) {
    do {
      if (*plVar1 == *param_3) break;
      plVar1 = plVar1 + 2;
    } while (plVar1 != plVar2);
  }
  *(undefined1 *)(param_2 + 4) = 0;
  return param_2;
}



// FUNCTION 14067a380 FUN_14067a380 body=67 status=ok
// SIG undefined FUN_14067a380(void)

longlong * FUN_14067a380(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x48) * 2;
  if (plVar1 != plVar2) {
    do {
      if (*plVar1 == *param_3) goto LAB_14067a3a7;
      plVar1 = plVar1 + 2;
    } while (plVar1 != plVar2);
  }
  plVar1 = (longlong *)0x0;
LAB_14067a3a7:
  if (plVar1 != (longlong *)0x0) {
    *param_2 = plVar1[1];
    *(undefined1 *)(param_2 + 1) = 1;
    return param_2;
  }
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 14067a3d0 FUN_14067a3d0 body=105 status=ok
// SIG undefined FUN_14067a3d0(void)

undefined8 FUN_14067a3d0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x20), plVar1 != (longlong *)0x0)) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00014067a42a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0xfd8))(plVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14067a440 FUN_14067a440 body=8 status=ok
// SIG undefined FUN_14067a440(void)

undefined8 FUN_14067a440(longlong param_1)

{
  return *(undefined8 *)(param_1 + 600);
}



// FUNCTION 14067a450 FUN_14067a450 body=20 status=ok
// SIG undefined FUN_14067a450(void)

longlong FUN_14067a450(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x278);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x260);
  }
  return lVar1;
}



// FUNCTION 14067a470 FUN_14067a470 body=322 status=ok
// SIG undefined FUN_14067a470(void)

longlong FUN_14067a470(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong *local_28;
  longlong *local_20;
  
  local_res18 = 0;
  if (param_2 == 0) {
    return 0;
  }
  local_res20 = param_2;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x3d8,&local_res10,param_2);
  local_res18 = 0;
  if (((int)local_res10 != -1) &&
     (lVar1 = *(longlong *)(param_1 + 0x3d8) + (longlong)(int)local_res10 * 0x18, lVar1 != 0)) {
    local_res18 = *(longlong *)(lVar1 + 8);
  }
  if (local_res18 == 0) {
    uVar2 = GetTransientPackage();
    FUN_1417846f0(uVar2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_res10 = 0;
    uVar3 = FUN_140680830();
    local_res18 = FUN_1417985e0(uVar3,uVar2,0,0,0,0,0,0,0);
    local_28 = &local_res20;
    local_20 = &local_res18;
    TSet<TTuple<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,UFlareSimulatedSpacecraft_*_const_&>_>
              (param_1 + 0x3d8,&local_res10,&local_28,0);
    FUN_14067e100(param_1,local_res20,local_res18);
  }
  return local_res18;
}



// FUNCTION 14067a5c0 FUN_14067a5c0 body=392 status=ok
// SIG undefined FUN_14067a5c0(void)

void FUN_14067a5c0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  byte local_res8 [8];
  
  lVar8 = *(longlong *)param_1[2];
  lVar6 = (longlong)(int)((longlong *)param_1[2])[1] * 0x60 + lVar8;
  for (; lVar8 != lVar6; lVar8 = lVar8 + 0x60) {
    lVar5 = *(longlong *)(lVar8 + 0x10);
    lVar1 = lVar5 + (longlong)*(int *)(lVar8 + 0x18) * 0x18;
    for (; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
      FUN_14067cc50(param_1,lVar8,lVar5,0);
      FUN_14067cc50(param_1,lVar8,lVar5);
    }
  }
  FUN_140675450(DAT_1468576b0,(longlong)DAT_1468576b8,local_res8[0],local_res8);
  plVar7 = DAT_1468576b0 + (longlong)DAT_1468576b8 * 6;
  plVar9 = DAT_1468576b0;
  do {
    if (plVar9 == plVar7) {
      return;
    }
    uVar3 = *param_1;
    lVar8 = *plVar9;
    if ((int)plVar9[5] == 0) {
      if (*(char *)(lVar8 + 0x40) == '\0') {
        plVar4 = *(longlong **)(lVar8 + 0x10);
        plVar2 = plVar4 + (longlong)*(int *)(lVar8 + 0x18) * 3;
        if (plVar4 != plVar2) {
          do {
            if (*plVar4 == plVar9[2]) {
              FKey::operator=(lVar8 + 0x48,plVar9 + 2);
              if (*(char *)(lVar8 + 0x40) == '\0') {
                *(undefined1 *)(lVar8 + 0x40) = 1;
                uVar10 = 0;
                goto LAB_14067a71d;
              }
              break;
            }
            plVar4 = plVar4 + 3;
          } while (plVar4 != plVar2);
        }
      }
    }
    else if (((((int)plVar9[5] == 1) && (*(char *)(lVar8 + 0x40) != '\0')) &&
             (*(longlong *)(lVar8 + 0x48) == plVar9[2])) &&
            (FKey::operator=((longlong *)(lVar8 + 0x48),&DAT_1469eae28),
            *(char *)(lVar8 + 0x40) != '\0')) {
      *(undefined1 *)(lVar8 + 0x40) = 0;
      uVar10 = 1;
LAB_14067a71d:
      FUN_140679a80(lVar8,uVar3,uVar10);
    }
    plVar9 = plVar9 + 6;
  } while( true );
}



// FUNCTION 14067a750 FUN_14067a750 body=145 status=ok
// SIG undefined FUN_14067a750(void)

void FUN_14067a750(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar5 + (longlong)*(int *)(param_1 + 0x18) * 5;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 5) {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar3);
    }
    puVar2 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x18);
    *puVar2 = *puVar5;
    puVar2[1] = puVar5[1];
    lVar4 = puVar5[2];
    puVar2[2] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 14067a7f0 FUN_14067a7f0 body=144 status=ok
// SIG undefined FUN_14067a7f0(void)

void FUN_14067a7f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar5 = (int)param_2[1];
    if (*(int *)((longlong)param_2 + 0xc) < iVar5 + iVar1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_2);
      iVar5 = (int)param_2[1];
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar5 * 0x18);
    iVar5 = iVar1;
    do {
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      lVar2 = puVar4[2];
      puVar3[2] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar3 = puVar3 + 3;
      puVar4 = puVar4 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
  }
  return;
}



// FUNCTION 14067a880 FUN_14067a880 body=448 status=ok
// SIG undefined FUN_14067a880(void)

void FUN_14067a880(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  if (((*(longlong *)(param_1 + 600) != 0) && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0))
     && (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x670))(), lVar4 != 0)) {
    lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar4 = *(longlong *)(lVar4 + 0x5b8), lVar4 != 0)) {
      lVar5 = FUN_140681420();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar4 = FUN_14067a470(lVar4,*(undefined8 *)(param_1 + 600));
        *(longlong *)(param_1 + 0x278) = lVar4;
        if (lVar4 != 0) {
          plVar1 = (longlong *)(lVar4 + 0x30);
          plVar6 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar6 != (longlong *)0x0) {
            *plVar6 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar6 + 1,param_1);
            *(undefined4 *)(plVar6 + 2) = 0x4067cf50;
            *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
            *(undefined4 *)(plVar6 + 3) = 0;
            *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_c;
            lVar5 = FDelegateHandle::GenerateNewID();
            plVar6[5] = lVar5;
            *plVar6 = (longlong)&PTR_FUN_143f77bd0;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
            (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
            iVar2 = *(int *)(lVar4 + 0x38);
            *(int *)(lVar4 + 0x38) = iVar2 + 1;
            if (*(int *)(lVar4 + 0x3c) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
            }
            puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
            *puVar7 = plVar6;
            *(undefined4 *)(puVar7 + 1) = 3;
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x278) == 0) {
    *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x260);
  }
  return;
}



// FUNCTION 14067aa40 FUN_14067aa40 body=674 status=ok
// SIG undefined FUN_14067aa40(void)

void FUN_14067aa40(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_res8;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (*(char *)(param_1 + 699) == '\0') {
    local_38 = *(longlong *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 699) = 1;
    if (local_38 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = *(longlong *)(local_38 + 0x38);
    }
    local_28 = 0xffffffff;
    local_24 = 0x101;
    local_22 = 0;
    FUN_14067b390(&local_38);
    if (local_30 != 0) {
LAB_14067aab7:
      lVar6 = local_30;
      lVar4 = FUN_140684c10();
      for (lVar5 = *(longlong *)(lVar6 + 0x70); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar4) {
          iVar2 = *(int *)(param_1 + 0x288);
          plVar9 = (longlong *)(*(int *)(lVar6 + 0x44) + param_1);
          *(int *)(param_1 + 0x288) = iVar2 + 1;
          if (*(int *)(param_1 + 0x28c) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x280,iVar2)
            ;
          }
          *(longlong **)(*(longlong *)(param_1 + 0x280) + (longlong)iVar2 * 8) = plVar9;
          plVar9[5] = param_1;
          lVar5 = *(longlong *)(lVar6 + 0x20);
          if (lVar5 == 0) {
LAB_14067ab60:
            lVar5 = 0;
          }
          else {
            lVar4 = UBlueprintGeneratedClass::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_14067ab60;
          }
          plVar9[4] = lVar5;
          plVar7 = (longlong *)plVar9[2];
          lVar5 = plVar9[3];
          if (plVar7 == plVar7 + (longlong)(int)lVar5 * 7) goto LAB_14067aba8;
          plVar8 = plVar7 + 6;
          goto LAB_14067ab80;
        }
      }
      goto LAB_14067abc3;
    }
  }
LAB_14067abe9:
  plVar9 = (longlong *)(param_1 + 0x200);
  if (plVar9 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar9 + 8))(plVar9);
    lVar6 = UObject::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar6 = (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_140677e10(lVar5,*(undefined8 *)(lVar5 + 0x10),lVar6);
      plVar7 = (longlong *)(**(code **)(*plVar9 + 0x18))(plVar9);
      if ((lVar6 != 0) && (plVar7 != (longlong *)0x0)) {
        lVar5 = *plVar7;
        lVar4 = (longlong)(int)plVar7[1] * 0x40 + lVar5;
        for (; lVar5 != lVar4; lVar5 = lVar5 + 0x40) {
          FUN_140677650(lVar6,lVar5);
        }
      }
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9);
      if ((lVar6 != 0) && (plVar9 != (longlong *)0x0)) {
        lVar5 = *plVar9;
        lVar4 = (longlong)(int)plVar9[1] * 0x58 + lVar5;
        for (; lVar5 != lVar4; lVar5 = lVar5 + 0x58) {
          FUN_140677750(lVar6,lVar5);
        }
      }
    }
  }
  return;
  while (plVar1 = plVar8 + 1, plVar8 = plVar8 + 7, plVar1 != plVar7 + (longlong)(int)lVar5 * 7) {
LAB_14067ab80:
    lVar4 = FUN_141719c60(plVar9[4],plVar8[-5],1);
    *plVar8 = lVar4;
    if (lVar4 == 0) goto LAB_14067abc3;
  }
LAB_14067aba8:
  local_res8 = plVar9[5];
  *(undefined1 *)((longlong)plVar9 + 0x43) = 1;
  (**(code **)(*plVar9 + 0x68))(plVar9,&local_res8);
LAB_14067abc3:
  local_30 = *(longlong *)(lVar6 + 0x28);
  FUN_14067b390(&local_38);
  if (local_30 == 0) goto LAB_14067abe9;
  goto LAB_14067aab7;
}



// FUNCTION 14067acf0 BeginDestroy body=35 status=ok
// SIG undefined BeginDestroy(void)

void UPawnAction_Move::BeginDestroy(undefined8 param_1)

{
  FUN_142340f20();
  FUN_14067a880(param_1);
  FUN_14067aa40(param_1);
  return;
}



// FUNCTION 14067ad20 FUN_14067ad20 body=39 status=ok
// SIG undefined FUN_14067ad20(void)

void FUN_14067ad20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143fdd7f8;
    return;
  }
  return;
}



// FUNCTION 14067ad50 FUN_14067ad50 body=324 status=ok
// SIG undefined FUN_14067ad50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14067ad50(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if (param_2 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x2d8);
    plVar7 = plVar5 + (longlong)*(int *)(param_1 + 0x2e0) * 8;
    if (plVar5 != plVar7) {
      plVar6 = plVar5 + 4;
      do {
        if (*plVar5 == param_2) {
          if ((((int)plVar6[-2] == 0) || ((longlong *)plVar6[-3] == (longlong *)0x0)) ||
             (cVar1 = (**(code **)(*(longlong *)plVar6[-3] + 0x18))(), cVar1 == '\0')) {
            if (((*plVar6 != 0) && (lVar2 = FWeakObjectPtr::Get(plVar6 + -1), lVar2 != 0)) &&
               (lVar2 = UObject::FindFunction(lVar2,*plVar6), lVar2 != 0)) {
              local_40 = *param_3;
              local_38 = *(undefined4 *)(param_3 + 1);
              local_48 = param_2;
              plVar3 = (longlong *)FWeakObjectPtr::Get(plVar6 + -1);
              uVar4 = FUN_14178ac60(plVar3,*plVar6);
              (**(code **)(*plVar3 + 0x208))(plVar3,uVar4,&local_48);
            }
          }
          else if ((int)plVar6[-2] == 0) {
            (**(code **)(_DAT_00000000 + 0x38))(0,param_2,param_3);
          }
          else {
            (**(code **)(*(longlong *)plVar6[-3] + 0x38))((longlong *)plVar6[-3],param_2,param_3);
          }
        }
        plVar5 = plVar5 + 8;
        plVar6 = plVar6 + 8;
      } while (plVar5 != plVar7);
    }
  }
  return;
}



// FUNCTION 14067aea0 FUN_14067aea0 body=1020 status=ok
// SIG undefined FUN_14067aea0(void)

undefined8 FUN_14067aea0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint *puVar12;
  int local_128;
  uint uStack_124;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_100;
  uint *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  longlong *local_d8;
  undefined2 local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 *local_98;
  undefined2 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  uint *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 *local_60;
  undefined1 local_38 [16];
  
  local_128 = 0;
  uStack_124 = 1;
  iStack_114 = 0;
  iStack_110 = 0;
  if (DAT_146229468 != 0) {
    puVar12 = DAT_146229460;
    if (DAT_146229460 == (uint *)0x0) {
      puVar12 = (uint *)&DAT_146229450;
    }
    uVar1 = *puVar12;
    iStack_110 = 0;
    while (uVar1 == 0) {
      lVar8 = (longlong)local_128;
      iStack_110 = iStack_110 + 0x20;
      iVar11 = local_128 + 1;
      bVar2 = (int)(DAT_146229468 + -1 + (DAT_146229468 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_128;
      local_128 = iVar11;
      if (bVar2) goto LAB_14067af77;
      uVar1 = puVar12[lVar8 + 1];
    }
    uStack_124 = -uVar1 & uVar1;
    iVar11 = 0x1f;
    if (uStack_124 != 0) {
      for (; uStack_124 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_124 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    iStack_114 = (iStack_110 - iVar11) + 0x1f;
    if (DAT_146229468 < iStack_114) {
LAB_14067af77:
      iStack_114 = DAT_146229468;
    }
  }
  uStack_b0 = CONCAT44(iStack_114,0xffffffff);
  auVar3._8_4_ = iStack_110;
  auVar3._0_8_ = uStack_b0;
  auVar3._12_4_ = uStack_10c;
  uStack_c0 = CONCAT44(uStack_124,local_128);
  local_60 = &DAT_146229440;
  local_98 = &DAT_146229440;
  local_b8 = &DAT_146229450;
  local_c8 = &DAT_146229440;
  local_a8._8_4_ = 0x46229440;
  local_a8._0_8_ = auVar3._8_8_;
  local_a8._12_4_ = 1;
  local_90 = 0;
  iVar11 = iStack_114;
  if (iStack_114 < DAT_146229468) {
    do {
      plVar4 = local_c8;
      local_128 = 0;
      uStack_124 = 1;
      iStack_114 = 0;
      iStack_110 = 0;
      lVar8 = (longlong)iVar11 * 0x60;
      plVar10 = (longlong *)(*local_c8 + 8 + lVar8);
      iVar11 = (int)plVar10[5];
      local_f8 = (uint *)(plVar10 + 2);
      if (iVar11 != 0) {
        puVar12 = (uint *)plVar10[4];
        if ((uint *)plVar10[4] == (uint *)0x0) {
          puVar12 = local_f8;
        }
        uVar1 = *puVar12;
        local_128 = 0;
        iStack_110 = 0;
        while (uVar1 == 0) {
          lVar9 = (longlong)local_128;
          iStack_110 = iStack_110 + 0x20;
          iVar7 = local_128 + 1;
          bVar2 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_128;
          local_128 = iVar7;
          if (bVar2) goto LAB_14067b0d6;
          uVar1 = puVar12[lVar9 + 1];
        }
        uStack_124 = -uVar1 & uVar1;
        iVar7 = 0x1f;
        if (uStack_124 != 0) {
          for (; uStack_124 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uStack_124 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        iStack_114 = (iStack_110 - iVar7) + 0x1f;
        if (iVar11 < iStack_114) {
LAB_14067b0d6:
          iStack_114 = iVar11;
        }
      }
      uStack_f0 = CONCAT44(iStack_114,0xffffffff);
      auStack_70._8_4_ = iStack_110;
      auStack_70._0_8_ = uStack_f0;
      auStack_70._12_4_ = uStack_10c;
      uStack_100 = CONCAT44(uStack_124,local_128);
      local_d0 = 0;
      local_38._8_4_ = SUB84(plVar10,0);
      local_38._12_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
      local_e8._8_4_ = local_38._8_4_;
      local_e8._0_8_ = auStack_70._8_8_;
      local_e8._12_4_ = local_38._12_4_;
      local_38._0_8_ = auStack_70._8_8_;
      local_d8 = plVar10;
      local_88 = plVar10;
      uStack_80 = uStack_100;
      puStack_78 = local_f8;
      if (iStack_114 < iVar11) {
        do {
          lVar9 = (longlong)iStack_114;
          cVar5 = FWeakObjectPtr::IsValid(*plVar10 + lVar9 * 0x18 + 8);
          if ((((cVar5 != '\0') &&
               (lVar6 = FWeakObjectPtr::Get(*plVar10 + 8 + lVar9 * 0x18), lVar6 == param_3)) &&
              (*(longlong *)(*plVar10 + lVar9 * 0x18) != param_2)) &&
             ((cVar5 = FWeakObjectPtr::IsValid(*plVar4 + lVar8), cVar5 != '\0' &&
              (lVar9 = FWeakObjectPtr::Get(*plVar4 + lVar8), lVar9 == param_1)))) {
            if (((char)local_d0 != '\0') && (local_d0._1_1_ != '\0')) {
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::ConditionalRehash(local_d8,(int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34),1)
              ;
            }
            if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
              TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::ConditionalRehash(local_98,*(int *)(local_98 + 1) -
                                           *(int *)((longlong)local_98 + 0x34),1);
            }
            return 0;
          }
          uStack_f0 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0 & ~uStack_100._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
          iStack_114 = uStack_f0._4_4_;
        } while (uStack_f0._4_4_ < (int)local_f8[6]);
        if (((char)local_d0 != '\0') && (local_d0._1_1_ != '\0')) {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_d8,(int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34));
        }
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      iVar11 = uStack_b0._4_4_;
    } while (uStack_b0._4_4_ < *(int *)(local_b8 + 0x18));
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,*(int *)(local_98 + 1) - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  return 1;
}



// FUNCTION 14067b2b0 FUN_14067b2b0 body=219 status=ok
// SIG undefined FUN_14067b2b0(void)

void FUN_14067b2b0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14067b379:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x00014067b2d3:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if (((uVar1 >> 0x15 & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_14067b379;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar3;
    if (iVar3 < (int)plVar4[0x35]) {
      lVar5 = *(longlong *)(plVar4[0x34] + ((longlong)(int)lVar2 + 1) * 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x00014067b2d3;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_14067b379;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x00014067b2d3;
}



// FUNCTION 14067b390 FUN_14067b390 body=219 status=ok
// SIG undefined FUN_14067b390(void)

void FUN_14067b390(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14067b459:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x00014067b3b3:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if (((uVar1 >> 0x14 & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_14067b459;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar3;
    if (iVar3 < (int)plVar4[0x35]) {
      lVar5 = *(longlong *)(plVar4[0x34] + ((longlong)(int)lVar2 + 1) * 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x00014067b3b3;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_14067b459;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x00014067b3b3;
}



// FUNCTION 14067b470 FUN_14067b470 body=60 status=ok
// SIG undefined FUN_14067b470(void)

void FUN_14067b470(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x60) * 0x28;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    FUN_14067b4f0(lVar2);
  }
  return;
}



// FUNCTION 14067b4b0 FUN_14067b4b0 body=60 status=ok
// SIG undefined FUN_14067b4b0(void)

void FUN_14067b4b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x60) * 0x18;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_14067b4f0(lVar2);
  }
  return;
}



// FUNCTION 14067b4f0 FUN_14067b4f0 body=1655 status=ok
// SIG undefined FUN_14067b4f0(void)

void FUN_14067b4f0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FKey::IsGamepadKey();
  if (cVar1 != '\0') {
    return;
  }
  cVar1 = FUN_140679e90();
  if (cVar1 == '\x02') {
    lVar2 = *param_1;
    if (lVar2 == DAT_1469ea1f8) {
LAB_14067ba82:
      FKey::operator=(param_1,&DAT_1469ea240);
      return;
    }
    if (lVar2 == DAT_1469ea198) goto LAB_14067ba9f;
    if (lVar2 == DAT_1469ea168) goto LAB_14067babc;
    if (lVar2 == DAT_1469ea210) {
LAB_14067bad9:
      FKey::operator=(param_1,&DAT_1469ea150);
      return;
    }
    if (lVar2 == DAT_1469ea258) {
LAB_14067baf6:
      FKey::operator=(param_1,&DAT_1469ea168);
      return;
    }
    if (lVar2 == DAT_1469ea240) {
LAB_14067bb13:
      FKey::operator=(param_1,&DAT_1469ea1e0);
      return;
    }
    if (lVar2 == DAT_1469ea150) {
LAB_14067bb30:
      FKey::operator=(param_1,&DAT_1469ea1f8);
      return;
    }
  }
  else if (cVar1 == '\x03') {
    lVar2 = *param_1;
    if (lVar2 == DAT_1469ea1f8) goto LAB_14067ba82;
    if (lVar2 == DAT_1469ea198) goto LAB_14067ba9f;
    if (lVar2 == DAT_1469ea168) goto LAB_14067babc;
    if (lVar2 == DAT_1469ea210) goto LAB_14067bad9;
    if (lVar2 == DAT_1469ea258) goto LAB_14067baf6;
    if (lVar2 == DAT_1469ea240) goto LAB_14067bb13;
    if (lVar2 == DAT_1469ea150) goto LAB_14067bb30;
    if (lVar2 == DAT_1469ea2a0) goto LAB_14067ba62;
  }
  else {
    if (cVar1 != '\x04') {
      if (cVar1 == '\x05') {
        lVar2 = *param_1;
        if (lVar2 == DAT_1469ea1f8) {
LAB_14067ba62:
          FKey::operator=(param_1,&DAT_1469ea2a0);
          return;
        }
        if (lVar2 != DAT_1469ea198) {
          if (lVar2 == DAT_1469e9ce8) {
            FKey::operator=(param_1,&DAT_1469e9b68);
            return;
          }
          if (lVar2 == DAT_1469e9d78) goto LAB_14067b992;
          if (lVar2 != DAT_1469ea210) {
            if (lVar2 == DAT_1469ea258) goto LAB_14067bad9;
            if (lVar2 == DAT_1469e9b68) {
LAB_14067b8a9:
              FKey::operator=(param_1,&DAT_1469e9ce8);
              return;
            }
            if (lVar2 == DAT_1469ea150) {
              FKey::operator=(param_1,&DAT_1469e9c88);
              return;
            }
            if (lVar2 == DAT_1469ea2a0) goto LAB_14067bb30;
            if (lVar2 == DAT_1469e9dc0) {
LAB_14067b8f0:
              FKey::operator=(param_1,&DAT_1469e9d78);
              return;
            }
            if (lVar2 != DAT_1469e9c88) {
              if (lVar2 != DAT_1469ea180) {
                if (lVar2 != DAT_1469ea1c8) {
                  return;
                }
                FKey::operator=(param_1,&DAT_1469ea1e0);
                return;
              }
              goto LAB_14067b92a;
            }
LAB_14067b90d:
            FKey::operator=(param_1,&DAT_1469ea180);
            return;
          }
LAB_14067babc:
          FKey::operator=(param_1,&DAT_1469ea258);
          return;
        }
LAB_14067ba9f:
        FKey::operator=(param_1,&DAT_1469ea210);
        return;
      }
      if (cVar1 != '\x06') {
        return;
      }
      lVar2 = *param_1;
      if (lVar2 == DAT_1469ea198) goto LAB_14067ba9f;
      if (lVar2 == DAT_1469ea168) goto LAB_14067babc;
      if (lVar2 == DAT_1469e9ce8) goto LAB_14067ba62;
      if (lVar2 == DAT_1469e9d78) goto LAB_14067b90d;
      if (lVar2 == DAT_1469e9bc8) {
LAB_14067b92a:
        FKey::operator=(param_1,&DAT_1469ea1c8);
        return;
      }
      if (lVar2 == DAT_1469e9d00) {
        FKey::operator=(param_1,&DAT_1469e9cd0);
        return;
      }
      if (lVar2 == DAT_1469e9d30) {
LAB_14067b9e7:
        FKey::operator=(param_1,&DAT_1469e9da8);
        return;
      }
      if (lVar2 == DAT_1469e9da8) {
        FKey::operator=(param_1,&DAT_1469e9be0);
        return;
      }
      if (lVar2 == DAT_1469e9d48) {
        FKey::operator=(param_1,&DAT_1469e9bf8);
        return;
      }
      if (lVar2 == DAT_1469e9c28) {
        FKey::operator=(param_1,&DAT_1469e9b98);
        return;
      }
      if (lVar2 == DAT_1469e9cb8) {
        FKey::operator=(param_1,&DAT_1469e9d00);
        return;
      }
      if (lVar2 == DAT_1469e9cd0) {
        FKey::operator=(param_1,&DAT_1469e9c70);
        return;
      }
      if (lVar2 == DAT_1469ea210) goto LAB_14067bb13;
      if (lVar2 == DAT_1469ea258) goto LAB_14067baf6;
      if (lVar2 == DAT_1469e9d18) {
        FKey::operator=(param_1,&DAT_1469e9cb8);
        return;
      }
      if (lVar2 == DAT_1469e9bb0) {
        FKey::operator=(param_1,&DAT_1469e9bc8);
        return;
      }
      if (lVar2 == DAT_1469e9be0) {
        FKey::operator=(param_1,&DAT_1469e9d48);
        return;
      }
      if (lVar2 == DAT_1469e9bf8) {
        FKey::operator=(param_1,&DAT_1469e9c28);
        return;
      }
      if (lVar2 == DAT_1469e9c10) {
        FKey::operator=(param_1,&DAT_1469e9bb0);
        return;
      }
      if (lVar2 == DAT_1469e9c40) {
        FKey::operator=(param_1,&DAT_1469e9c10);
        return;
      }
      if (lVar2 == DAT_1469e9c58) {
        FKey::operator=(param_1,&DAT_1469e9d30);
        return;
      }
      if (lVar2 == DAT_1469e9c70) {
        FKey::operator=(param_1,&DAT_1469e9ca0);
        return;
      }
      if (lVar2 == DAT_1469ea150) {
        FKey::operator=(param_1,&DAT_1469e9d18);
        return;
      }
      if (lVar2 != DAT_1469ea2a0) {
        if (lVar2 != DAT_1469e9dc0) {
          if (lVar2 != DAT_1469e9d90) {
            if (lVar2 == DAT_1469e9b98) {
              FKey::operator=(param_1,&DAT_1469e9c40);
              return;
            }
            if (lVar2 == DAT_1469e9d60) {
              FKey::operator=(param_1,&DAT_1469e9c58);
              return;
            }
            if (lVar2 == DAT_1469e9b80) {
              FKey::operator=(param_1,&DAT_1469e9d90);
              return;
            }
            if (lVar2 == DAT_1469e9ca0) {
              FKey::operator=(param_1,&DAT_1469e9b80);
              return;
            }
            if (lVar2 != DAT_1469ea180) {
              if (lVar2 == DAT_1469ea1c8) {
                FKey::operator=(param_1,&DAT_1469e9d60);
                return;
              }
              if (lVar2 != DAT_1469ea1e0) {
                return;
              }
              FKey::operator=(param_1,&DAT_1469e9dc0);
              return;
            }
            goto LAB_14067b8f0;
          }
          goto LAB_14067b8a9;
        }
        goto LAB_14067bad9;
      }
      goto LAB_14067bb4d;
    }
    lVar2 = *param_1;
    if (lVar2 == DAT_1469ea1f8) goto LAB_14067ba82;
    if (lVar2 == DAT_1469ea198) goto LAB_14067ba9f;
    if (lVar2 == DAT_1469ea168) goto LAB_14067babc;
    if (lVar2 == DAT_1469e9da8) {
LAB_14067b992:
      FKey::operator=(param_1,&DAT_1469e9dc0);
      return;
    }
    if (lVar2 == DAT_1469ea210) goto LAB_14067bad9;
    if (lVar2 == DAT_1469ea258) goto LAB_14067baf6;
    if (lVar2 == DAT_1469ea240) goto LAB_14067bb13;
    if (lVar2 == DAT_1469ea150) goto LAB_14067bb30;
    if (lVar2 == DAT_1469e9dc0) goto LAB_14067b9e7;
  }
  if (lVar2 != DAT_1469ea1e0) {
    return;
  }
LAB_14067bb4d:
  FKey::operator=(param_1,&DAT_1469ea198);
  return;
}



// FUNCTION 14067bb70 FUN_14067bb70 body=169 status=ok
// SIG undefined FUN_14067bb70(void)

undefined8 FUN_14067bb70(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(char *)(param_1 + 0x79) == '\0') {
    return 0;
  }
  bVar3 = false;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  iVar5 = *(int *)(param_1 + 0x38) + -1;
  iVar6 = *(int *)(param_1 + 0x44);
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x30);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_14067bbd2:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))();
        if (cVar4 == '\0') goto LAB_14067bbd2;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x44);
  }
  *(int *)(param_1 + 0x44) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x30),0);
  }
  return 1;
}



// FUNCTION 14067bc20 FUN_14067bc20 body=115 status=ok
// SIG undefined FUN_14067bc20(void)

void FUN_14067bc20(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  local_10 = *(undefined4 *)(param_4 + 0x178);
  local_18 = *(undefined8 *)(param_4 + 0x170);
  plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x18) * 7;
  if (plVar2 != plVar1) {
    while (*plVar2 != DAT_1468576d0) {
      plVar2 = plVar2 + 7;
      if (plVar2 == plVar1) {
        return;
      }
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_140678430(*(undefined8 *)(param_1 + 0x28),param_1,plVar2,(undefined8 *)(param_4 + 0x170),
                    &local_18);
    }
  }
  return;
}



// FUNCTION 14067bca0 FUN_14067bca0 body=106 status=ok
// SIG undefined FUN_14067bca0(void)

void FUN_14067bca0(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  
  if (param_3 == '\0') {
    if ((char)param_1[0xe] == '\0') {
      *(undefined1 *)(param_1 + 0xe) = 1;
      uVar1 = FUN_14236eb50(param_2);
      *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00014067bd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x78))(param_1);
      return;
    }
  }
  else if ((param_3 == '\x01') && ((char)param_1[0xe] != '\0')) {
    (**(code **)(*param_1 + 0x80))(param_1);
    if ((char)param_1[0xe] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014067bcda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x50))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14067bd10 FUN_14067bd10 body=181 status=ok
// SIG undefined FUN_14067bd10(void)

void FUN_14067bd10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  FUN_142349c80();
  local_28 = *(longlong *)(param_1 + 0x10);
  if (local_28 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = *(longlong *)(local_28 + 0x38);
  }
  local_18 = 0xffffffff;
  local_14 = 0x101;
  local_12 = 0;
  FUN_14067b390(&local_28);
  lVar2 = local_20;
  do {
    if (lVar2 == 0) {
      return;
    }
    local_20 = lVar2;
    lVar3 = FUN_140684c10();
    for (lVar1 = *(longlong *)(lVar2 + 0x70); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) {
        (**(code **)(*(longlong *)(*(int *)(lVar2 + 0x44) + param_1) + 0x18))();
        break;
      }
    }
    local_20 = *(longlong *)(lVar2 + 0x28);
    FUN_14067b390(&local_28);
    lVar2 = local_20;
  } while( true );
}



// FUNCTION 14067bdd0 FUN_14067bdd0 body=1974 status=ok
// SIG undefined FUN_14067bdd0(void)

void FUN_14067bdd0(ulonglong param_1)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  wchar_t _C;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  wint_t wVar11;
  wint_t wVar12;
  short *psVar13;
  undefined8 uVar14;
  void *pvVar15;
  longlong *plVar16;
  int iVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  longlong *plVar23;
  longlong lVar24;
  undefined2 *puVar25;
  longlong lVar26;
  void *pvVar27;
  longlong local_res10;
  ulonglong in_stack_ffffffffffffff68;
  short *local_78;
  int local_70;
  undefined2 *local_68;
  longlong local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined2 *local_50;
  undefined8 local_48;
  
  pvVar27 = (void *)0x0;
  local_res10 = *(longlong *)(param_1 + 0x18);
  FName::ToString(&local_res10,&local_78);
  local_50 = (undefined2 *)0x0;
  local_48 = 0x22;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
  FGenericPlatformString::Memcpy(local_50,L"InputRebindContext_Player_Classic",0x44);
  puVar22 = &DAT_143f3eda8;
  if ((int)local_48 != 0) {
    puVar22 = local_50;
  }
  bVar8 = false;
  psVar13 = &DAT_143f3eda8;
  if (local_70 != 0) {
    psVar13 = local_78;
  }
  lVar24 = (longlong)puVar22 - (longlong)psVar13;
  do {
    sVar2 = *psVar13;
    sVar3 = *(short *)((longlong)psVar13 + lVar24);
    if (sVar2 != sVar3) break;
    psVar13 = psVar13 + 1;
  } while (sVar3 != 0);
  puVar22 = local_68;
  if (sVar2 == sVar3) {
LAB_14067c001:
    bVar7 = false;
    puVar20 = local_68;
LAB_14067c005:
    bVar6 = false;
    puVar21 = local_68;
LAB_14067c009:
    bVar9 = true;
  }
  else {
    local_68 = (undefined2 *)0x0;
    local_60 = 0x2b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    puVar22 = local_68;
    FGenericPlatformString::Memcpy(local_68,L"InputRebindContext_Player_Classic_Southpaw",0x56);
    bVar8 = true;
    puVar20 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar20 = puVar22;
    }
    psVar13 = &DAT_143f3eda8;
    if (local_70 != 0) {
      psVar13 = local_78;
    }
    lVar24 = (longlong)puVar20 - (longlong)psVar13;
    do {
      sVar2 = *psVar13;
      sVar3 = *(short *)((longlong)psVar13 + lVar24);
      if (sVar2 != sVar3) break;
      psVar13 = psVar13 + 1;
    } while (sVar3 != 0);
    if (sVar2 == sVar3) goto LAB_14067c001;
    local_68 = (undefined2 *)0x0;
    local_60 = 0x2c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    puVar20 = local_68;
    FGenericPlatformString::Memcpy(local_68,L"InputRebindContext_Player_Classic_OldSchool",0x58);
    bVar8 = true;
    bVar7 = true;
    puVar21 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar21 = puVar20;
    }
    psVar13 = &DAT_143f3eda8;
    if (local_70 != 0) {
      psVar13 = local_78;
    }
    lVar24 = (longlong)puVar21 - (longlong)psVar13;
    do {
      sVar2 = *psVar13;
      sVar3 = *(short *)((longlong)psVar13 + lVar24);
      if (sVar2 != sVar3) break;
      psVar13 = psVar13 + 1;
    } while (sVar3 != 0);
    if (sVar2 == sVar3) goto LAB_14067c005;
    local_68 = (undefined2 *)0x0;
    local_60 = 0x34;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    puVar21 = local_68;
    FGenericPlatformString::Memcpy
              (local_68,L"InputRebindContext_Player_Classic_OldSchoolSouthpaw",0x68);
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    puVar25 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar25 = puVar21;
    }
    psVar13 = &DAT_143f3eda8;
    if (local_70 != 0) {
      psVar13 = local_78;
    }
    lVar24 = (longlong)puVar25 - (longlong)psVar13;
    do {
      sVar2 = *psVar13;
      sVar3 = *(short *)((longlong)psVar13 + lVar24);
      if (sVar2 != sVar3) break;
      psVar13 = psVar13 + 1;
    } while (sVar3 != 0);
    if (sVar2 == sVar3) goto LAB_14067c009;
    bVar9 = false;
  }
  if ((bVar6) && (puVar21 != (undefined2 *)0x0)) {
    FMemory::Free(puVar21);
  }
  if ((bVar7) && (puVar20 != (undefined2 *)0x0)) {
    FMemory::Free(puVar20);
  }
  if ((bVar8) && (puVar22 != (undefined2 *)0x0)) {
    FMemory::Free(puVar22);
  }
  if (local_50 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (bVar9) {
    local_68 = *(undefined2 **)(param_1 + 0x10);
    if (local_68 == (undefined2 *)0x0) {
      local_60 = 0;
    }
    else {
      local_60 = *(longlong *)(local_68 + 0x1c);
    }
    local_58 = 0xffffffff;
    local_54 = 0x101;
    local_52 = 0;
    FUN_14067b2b0(&local_68);
    if (local_60 != 0) {
LAB_14067c0b0:
      lVar24 = local_60;
      local_res10 = *(longlong *)(local_60 + 0x18);
      FName::ToString(&local_res10,&local_50);
      pwVar18 = L"ButtonBindings";
      puVar22 = &DAT_143f3eda8;
      if ((int)local_48 != 0) {
        puVar22 = local_50;
      }
      do {
        _C = *(wchar_t *)((longlong)(puVar22 + -0xa201af54) + (longlong)pwVar18);
        if ((_C == L'\0') && (iVar17 = 0, *pwVar18 == L'\0')) goto LAB_14067c11e;
        if (_C != *pwVar18) {
          wVar11 = towlower(_C);
          wVar12 = towlower(*pwVar18);
          if (wVar11 != wVar12) goto LAB_14067c116;
        }
        pwVar18 = pwVar18 + 1;
      } while( true );
    }
  }
LAB_14067c496:
  UObject::PostLoad(param_1);
  *(undefined1 *)(param_1 + 0x78) = 1;
  lVar24 = *(longlong *)(param_1 + 0x50);
  lVar26 = (longlong)*(int *)(param_1 + 0x58) * 0x30 + lVar24;
  for (; lVar24 != lVar26; lVar24 = lVar24 + 0x30) {
    lVar19 = *(longlong *)(lVar24 + 0x18);
    lVar1 = lVar19 + (longlong)*(int *)(lVar24 + 0x20) * 0x18;
    for (; lVar19 != lVar1; lVar19 = lVar19 + 0x18) {
      FUN_14067b4f0(lVar19);
    }
  }
  lVar24 = *(longlong *)(param_1 + 0x60);
  lVar26 = (longlong)*(int *)(param_1 + 0x68) * 0x30 + lVar24;
  for (; lVar24 != lVar26; lVar24 = lVar24 + 0x30) {
    lVar19 = *(longlong *)(lVar24 + 0x18);
    lVar1 = lVar19 + (longlong)*(int *)(lVar24 + 0x20) * 0x28;
    for (; lVar19 != lVar1; lVar19 = lVar19 + 0x28) {
      FUN_14067b4f0(lVar19);
    }
  }
  if (local_78 != (short *)0x0) {
    FMemory::Free();
  }
  return;
LAB_14067c116:
  iVar17 = (uint)wVar11 - (uint)wVar12;
LAB_14067c11e:
  if (local_50 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (iVar17 == 0) {
    uVar14 = FUN_1406804e0();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    lVar26 = FUN_141799c90(uVar14,0,
                           L"/Game/PlayerCharacters/_Shared/_Design/Input/Bindings/InputRebind_Button_TrackNextMission_OnFoot.InputRebind_Button_TrackNextMission_OnFoot"
                           ,0,in_stack_ffffffffffffff68,0,1);
    if (lVar26 == 0) goto LAB_14067c271;
    plVar16 = *(longlong **)(param_1 + 0x50);
    plVar23 = plVar16 + (longlong)*(int *)(param_1 + 0x58) * 6;
    goto joined_r0x00014067c19e;
  }
  local_60 = *(longlong *)(lVar24 + 0x28);
  FUN_14067b2b0(&local_68);
  if (local_60 == 0) goto LAB_14067c496;
  goto LAB_14067c0b0;
joined_r0x00014067c19e:
  local_res10 = lVar26;
  if (plVar16 == plVar23) goto LAB_14067c1b2;
  if (*plVar16 == lVar26) goto LAB_14067c271;
  plVar16 = plVar16 + 6;
  goto joined_r0x00014067c19e;
LAB_14067c1b2:
  plVar16 = *(longlong **)(lVar24 + 0x70);
  plVar23 = (longlong *)((longlong)*(int *)(lVar24 + 0x44) + param_1);
  iVar4 = (int)plVar23[1];
  iVar5 = *(int *)((longlong)plVar16 + 0x34);
  iVar17 = iVar4 + 1;
  *(int *)(plVar23 + 1) = iVar17;
  if (*(int *)((longlong)plVar23 + 0xc) < iVar17) {
    FScriptArray::ResizeGrow(plVar23,iVar4,iVar5);
    iVar17 = (int)plVar23[1];
  }
  pvVar15 = pvVar27;
  if (iVar17 != 0) {
    pvVar15 = (void *)((longlong)(iVar5 * iVar4) + *plVar23);
  }
  if ((*(uint *)(plVar16 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar16 + 0x330))(plVar16,pvVar15);
  }
  else {
    _guard_xfg_dispatch_icall_nop(pvVar15,0,(longlong)iVar5);
  }
  uVar14 = DAT_1468b6160;
  pvVar15 = pvVar27;
  if ((int)plVar23[1] != 0) {
    pvVar15 = (void *)((longlong)(iVar5 * iVar4) + *plVar23);
  }
  plVar16 = *(longlong **)(lVar24 + 0x70);
  cVar10 = FUN_141766f20(plVar16,0,DAT_1468b6160);
  if (cVar10 != '\0') {
    in_stack_ffffffffffffff68 = param_1;
    (**(code **)(*plVar16 + 0x2e0))
              (plVar16,
               L"(Binding=GbxInputKeyRebindData_Button\'\"/Game/PlayerCharacters/_Shared/_Design/Input/Bindings/InputRebind_Button_TrackNextMission_OnFoot.InputRebind_Button_TrackNextMission_OnFoot\"\',Button=(Keys=,KeyName=\"Track Next Mission\"))"
               ,pvVar15,0,param_1,uVar14);
  }
LAB_14067c271:
  uVar14 = FUN_1406804e0();
  in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
  lVar26 = FUN_141799c90(uVar14,0,
                         L"/Game/PlayerCharacters/_Shared/_Design/Input/Bindings/InputRebind_Button_TrackPreviousMission_OnFoot.InputRebind_Button_TrackPreviousMission_OnFoot"
                         ,0,in_stack_ffffffffffffff68,0,1);
  if (lVar26 != 0) {
    plVar16 = *(longlong **)(param_1 + 0x50);
    plVar23 = plVar16 + (longlong)*(int *)(param_1 + 0x58) * 6;
    for (; plVar16 != plVar23; plVar16 = plVar16 + 6) {
      if (*plVar16 == lVar26) goto LAB_14067c387;
    }
    plVar16 = *(longlong **)(lVar24 + 0x70);
    plVar23 = (longlong *)((longlong)*(int *)(lVar24 + 0x44) + param_1);
    iVar4 = (int)plVar23[1];
    iVar5 = *(int *)((longlong)plVar16 + 0x34);
    iVar17 = iVar4 + 1;
    *(int *)(plVar23 + 1) = iVar17;
    if (*(int *)((longlong)plVar23 + 0xc) < iVar17) {
      FScriptArray::ResizeGrow(plVar23,iVar4,iVar5);
      iVar17 = (int)plVar23[1];
    }
    pvVar15 = pvVar27;
    if (iVar17 != 0) {
      pvVar15 = (void *)((longlong)(iVar4 * iVar5) + *plVar23);
    }
    if ((*(uint *)(plVar16 + 7) >> 9 & 1) == 0) {
      (**(code **)(*plVar16 + 0x330))(plVar16,pvVar15);
    }
    else {
      _guard_xfg_dispatch_icall_nop(pvVar15,0,(longlong)iVar5);
    }
    uVar14 = DAT_1468b6160;
    pvVar15 = pvVar27;
    if ((int)plVar23[1] != 0) {
      pvVar15 = (void *)((longlong)(iVar4 * iVar5) + *plVar23);
    }
    plVar16 = *(longlong **)(lVar24 + 0x70);
    cVar10 = FUN_141766f20(plVar16,0,DAT_1468b6160);
    if (cVar10 != '\0') {
      in_stack_ffffffffffffff68 = param_1;
      (**(code **)(*plVar16 + 0x2e0))
                (plVar16,
                 L"(Binding=GbxInputKeyRebindData_Button\'\"/Game/PlayerCharacters/_Shared/_Design/Input/Bindings/InputRebind_Button_TrackPreviousMission_OnFoot.InputRebind_Button_TrackPreviousMission_OnFoot\"\',Button=(Keys=,KeyName=\"Track Previous Mission\"))"
                 ,pvVar15,0,param_1,uVar14);
    }
  }
LAB_14067c387:
  uVar14 = FUN_1406804e0();
  lVar26 = FUN_141799c90(uVar14,0,
                         L"/Game/Common/_Design/Input/Bindings/InputRebind_Button_MarkTarget_OnFoot.InputRebind_Button_MarkTarget_OnFoot"
                         ,0,in_stack_ffffffffffffff68 & 0xffffffff00000000,0,1);
  if (lVar26 != 0) {
    plVar16 = *(longlong **)(param_1 + 0x50);
    plVar23 = plVar16 + (longlong)*(int *)(param_1 + 0x58) * 6;
    for (; plVar16 != plVar23; plVar16 = plVar16 + 6) {
      if (*plVar16 == lVar26) goto LAB_14067c496;
    }
    plVar16 = *(longlong **)(lVar24 + 0x70);
    plVar23 = (longlong *)((longlong)*(int *)(lVar24 + 0x44) + param_1);
    iVar4 = (int)plVar23[1];
    iVar5 = *(int *)((longlong)plVar16 + 0x34);
    iVar17 = iVar4 + 1;
    *(int *)(plVar23 + 1) = iVar17;
    if (*(int *)((longlong)plVar23 + 0xc) < iVar17) {
      FScriptArray::ResizeGrow(plVar23,iVar4,iVar5);
      iVar17 = (int)plVar23[1];
    }
    pvVar15 = pvVar27;
    if (iVar17 != 0) {
      pvVar15 = (void *)((longlong)(iVar4 * iVar5) + *plVar23);
    }
    if ((*(uint *)(plVar16 + 7) >> 9 & 1) == 0) {
      (**(code **)(*plVar16 + 0x330))(plVar16,pvVar15);
    }
    else {
      _guard_xfg_dispatch_icall_nop(pvVar15,0,(longlong)iVar5);
    }
    uVar14 = DAT_1468b6160;
    if ((int)plVar23[1] != 0) {
      pvVar27 = (void *)((longlong)(iVar4 * iVar5) + *plVar23);
    }
    plVar16 = *(longlong **)(lVar24 + 0x70);
    cVar10 = FUN_141766f20(plVar16,0,DAT_1468b6160);
    if (cVar10 != '\0') {
      (**(code **)(*plVar16 + 0x2e0))
                (plVar16,
                 L"(Binding=GbxInputKeyRebindData_Button\'\"/Game/Common/_Design/Input/Bindings/InputRebind_Button_MarkTarget_OnFoot.InputRebind_Button_MarkTarget_OnFoot\"\',Button=(Keys=,KeyName=\"Mark Target\"))"
                 ,pvVar27,0,param_1,uVar14);
    }
  }
  goto LAB_14067c496;
}



// FUNCTION 14067c590 FUN_14067c590 body=649 status=ok
// SIG undefined FUN_14067c590(void)

void FUN_14067c590(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res10;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  float local_68;
  
  iVar4 = DAT_1468576a8;
  lVar7 = (longlong)DAT_1468576a8;
  DAT_1468576a8 = DAT_1468576a8 + 1;
  if (DAT_1468576ac < DAT_1468576a8) {
    TArray<FEnvQueryInstanceCache,FDefaultAllocator>::ResizeGrow(&DAT_1468576a0,iVar4);
  }
  lVar5 = DAT_1468576a0;
  lVar7 = lVar7 * 0x188;
  *(longlong *)(lVar7 + DAT_1468576a0) = param_2;
  *(undefined8 *)(lVar7 + 0x148 + lVar5) = 0;
  *(undefined8 *)(lVar7 + 0x150 + lVar5) = 0;
  *(undefined8 *)(lVar7 + 0x160 + lVar5) = 0;
  *(undefined ***)(lVar7 + 0x158 + lVar5) = &PTR__scalar_deleting_destructor__144038610;
  *(undefined8 *)(lVar7 + 0x168 + lVar5) = 0;
  *(undefined8 *)(lVar7 + 0x170 + lVar5) = 0;
  *(undefined8 *)(lVar7 + 0x178 + lVar5) = 0;
  *(undefined4 *)(lVar7 + 0x180 + lVar5) = 0;
  plVar8 = *(longlong **)(param_2 + 0x10);
  lVar7 = DAT_1468576a0 + lVar7;
  plVar2 = plVar8 + (longlong)*(int *)(param_2 + 0x18) * 3;
  fVar10 = local_res10;
  fVar11 = local_res10;
  do {
    if (plVar8 == plVar2) {
      return;
    }
    local_98 = *plVar8;
    local_90 = plVar8[1];
    local_88 = plVar8[2];
    if (local_88 != 0) {
      LOCK();
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      UNLOCK();
    }
    fVar9 = (float)FUN_1428ad940(*(undefined8 *)*param_1,&local_98);
    local_80 = *plVar8;
    local_78 = plVar8[1];
    local_70 = (longlong *)plVar8[2];
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    local_68 = fVar9;
    FUN_140674640(lVar7 + 8,&local_80);
    plVar3 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_70 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    plVar6 = *(longlong **)(param_2 + 0x30);
    plVar3 = plVar6 + (longlong)*(int *)(param_2 + 0x38) * 5;
    if (plVar6 != plVar3) {
      do {
        if (*plVar6 == *plVar8) {
          fVar10 = fVar9 * *(float *)(plVar6 + 3);
          fVar11 = fVar9 * *(float *)((longlong)plVar6 + 0x1c);
          local_res10 = fVar9 * *(float *)(plVar6 + 4);
          break;
        }
        plVar6 = plVar6 + 5;
      } while (plVar6 != plVar3);
    }
    *(float *)(lVar7 + 0x178) = fVar10 + *(float *)(lVar7 + 0x178);
    *(float *)(lVar7 + 0x17c) = fVar11 + *(float *)(lVar7 + 0x17c);
    *(float *)(lVar7 + 0x180) = local_res10 + *(float *)(lVar7 + 0x180);
    TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>(param_1[1],plVar8);
    plVar8 = plVar8 + 3;
  } while( true );
}



// FUNCTION 14067c820 FUN_14067c820 body=1067 status=ok
// SIG undefined FUN_14067c820(void)

void FUN_14067c820(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  
  uVar4 = *(undefined1 *)((longlong)param_1 + 0x2ba);
  *(undefined2 *)((longlong)param_1 + 0x2b9) = 0x100;
  lVar5 = param_1[0x58];
  param_1[0x58] = param_3;
  FUN_140678620();
  local_70 = param_1 + 0x52;
  local_80 = param_2;
  local_78 = param_3;
  FUN_14067a5c0(&local_80);
  if (DAT_1468576bc < 0) {
    if (DAT_1468576b8 != 0) {
      plVar15 = (longlong *)(DAT_1468576b0 + 0x20);
      iVar10 = DAT_1468576b8;
      do {
        plVar7 = (longlong *)*plVar15;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar7 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
        plVar15 = plVar15 + 6;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    DAT_1468576b8 = 0;
    if (DAT_1468576bc != 0) {
      FUN_14067e080(&DAT_1468576b0,0);
    }
  }
  else {
    if (DAT_1468576b8 != 0) {
      plVar15 = (longlong *)(DAT_1468576b0 + 0x20);
      iVar10 = DAT_1468576b8;
      do {
        plVar7 = (longlong *)*plVar15;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar7 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
        plVar15 = plVar15 + 6;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    DAT_1468576b8 = 0;
  }
  DAT_1468576c8._0_4_ = 0;
  if ((DAT_1468576c8._4_4_ < 0) && (DAT_1468576c8._4_4_ != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_1468576c0,0);
  }
  local_58 = param_1 + 0x54;
  lVar8 = *local_58;
  lVar12 = (longlong)(int)param_1[0x55] * 0x50 + lVar8;
  local_68 = param_2;
  local_60 = param_3;
  plVar15 = DAT_1468576a0;
  for (; DAT_1468576a0 = plVar15, lVar8 != lVar12; lVar8 = lVar8 + 0x50) {
    FUN_14067c590(&local_68,lVar8);
    plVar15 = DAT_1468576a0;
  }
  uVar13 = (ulonglong)(int)DAT_1468576a8;
  plVar7 = plVar15 + uVar13 * 0x31;
  if (plVar15 != plVar7) {
    do {
      uVar14 = 0;
      puVar6 = (ulonglong *)*plVar15;
      puVar9 = (undefined8 *)*puVar6;
      uVar13 = (longlong)(int)puVar6[1] & 0x1fffffffffffffff;
      if (puVar9 + (int)puVar6[1] < puVar9) {
        uVar13 = uVar14;
      }
      if (uVar13 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar9 + 0x10))
                    ((longlong *)*puVar9,param_2,puVar6 + 4,plVar15 + 1);
          uVar14 = uVar14 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar14 != uVar13);
      }
      puVar6[8] = plVar15[0x2f];
      plVar1 = plVar15 + 0x30;
      plVar15 = plVar15 + 0x31;
      *(int *)(puVar6 + 9) = (int)*plVar1;
    } while (plVar15 != plVar7);
    uVar13 = (ulonglong)DAT_1468576a8;
  }
  uVar14 = 0;
  if (DAT_1468576ac < 0) {
    if ((int)uVar13 != 0) {
      plVar15 = DAT_1468576a0 + 0x2b;
      do {
        *plVar15 = (longlong)&PTR__scalar_deleting_destructor__144038610;
        FUN_140676620(plVar15 + 2);
        *plVar15 = (longlong)&PTR_FUN_1440385e0;
        FUN_140676320(plVar15 + -0x2a);
        plVar15 = plVar15 + 0x31;
        uVar11 = (int)uVar13 - 1;
        uVar13 = (ulonglong)uVar11;
      } while (uVar11 != 0);
    }
    DAT_1468576a8 = 0;
    if (DAT_1468576ac != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<392,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(&DAT_1468576a0,0);
    }
  }
  else {
    if ((int)uVar13 != 0) {
      plVar15 = DAT_1468576a0 + 0x2b;
      do {
        *plVar15 = (longlong)&PTR__scalar_deleting_destructor__144038610;
        FUN_140676620(plVar15 + 2);
        *plVar15 = (longlong)&PTR_FUN_1440385e0;
        FUN_140676320(plVar15 + -0x2a);
        plVar15 = plVar15 + 0x31;
        uVar11 = (int)uVar13 - 1;
        uVar13 = (ulonglong)uVar11;
      } while (uVar11 != 0);
    }
    DAT_1468576a8 = 0;
  }
  plVar15 = (longlong *)param_1[0x50];
  uVar13 = (longlong)(int)param_1[0x51] & 0x1fffffffffffffff;
  if (plVar15 + (int)param_1[0x51] < plVar15) {
    uVar13 = uVar14;
  }
  if (uVar13 != 0) {
    do {
      plVar7 = (longlong *)*plVar15;
      if ((plVar7 != (longlong *)0x0) && (*(char *)((longlong)plVar7 + 0x42) != '\0')) {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
      plVar15 = plVar15 + 1;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar13);
  }
  param_1[0x58] = lVar5;
  *(undefined1 *)((longlong)param_1 + 0x2ba) = uVar4;
  if ((char)param_1[0x57] != '\0') {
    *(undefined1 *)(param_1 + 0x57) = 0;
    (**(code **)(*param_1 + 0x400))(param_1);
  }
  return;
}



// FUNCTION 14067cc50 FUN_14067cc50 body=443 status=ok
// SIG undefined FUN_14067cc50(void)

void FUN_14067cc50(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_58 = *param_3;
  local_50 = param_3[1];
  local_48 = param_3[2];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_1423725a0(*param_1,&local_58);
  if (cVar4 == '\0') {
    local_40 = *param_3;
    local_38 = param_3[1];
    local_30 = param_3[2];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    cVar4 = FUN_142372860(*param_1,&local_40,param_4,&DAT_1468576c0);
    if (cVar4 != '\0') {
      iVar6 = (int)DAT_1468576c8;
      if (DAT_1468576bc < iVar6 + DAT_1468576b8) {
        FUN_14067e080(&DAT_1468576b0);
        iVar6 = (int)DAT_1468576c8;
      }
      iVar3 = DAT_1468576b8;
      uVar8 = 0;
      uVar9 = (longlong)iVar6 & 0x3fffffffffffffff;
      if (DAT_1468576c0 + iVar6 < DAT_1468576c0) {
        uVar9 = uVar8;
      }
      puVar7 = DAT_1468576c0;
      iVar6 = DAT_1468576b8;
      if (uVar9 != 0) {
        do {
          uVar1 = *puVar7;
          DAT_1468576b8 = iVar6 + 1;
          if (DAT_1468576bc < DAT_1468576b8) {
            FUN_14067df60(&DAT_1468576b0,iVar6);
          }
          puVar5 = (undefined8 *)((longlong)iVar6 * 0x30 + DAT_1468576b0);
          *puVar5 = param_2;
          *(undefined4 *)(puVar5 + 1) = uVar1;
          *(int *)((longlong)puVar5 + 0xc) = iVar3;
          puVar5[2] = *param_3;
          puVar5[3] = param_3[1];
          lVar2 = param_3[2];
          puVar5[4] = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          puVar7 = puVar7 + 1;
          *(undefined4 *)(puVar5 + 5) = param_4;
          uVar8 = uVar8 + 1;
          iVar6 = DAT_1468576b8;
        } while (uVar8 != uVar9);
      }
    }
  }
  return;
}



// FUNCTION 14067ce10 FUN_14067ce10 body=85 status=ok
// SIG undefined FUN_14067ce10(void)

void FUN_14067ce10(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  float fVar2;
  
  if (((char)param_1[0xe] != '\0') && ((char)param_1[0xf] == '\0')) {
    fVar2 = (float)FUN_14236eb50(param_2);
    if (*(float *)((longlong)param_1 + 0x7c) <= fVar2 - *(float *)((longlong)param_1 + 0x74)) {
      *(undefined1 *)(param_1 + 0xf) = 1;
      FUN_14067efd0(param_1,&DAT_146857708,0);
      cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
      if (cVar1 != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x42) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14067ce70 FUN_14067ce70 body=209 status=ok
// SIG undefined FUN_14067ce70(void)

void FUN_14067ce70(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float local_res8 [8];
  
  if (*(char *)(param_1 + 0x70) != '\0') {
    fVar1 = (float)FUN_14236eb50(param_2);
    fVar1 = fVar1 - *(float *)(param_1 + 0x74);
    if (*(char *)(param_1 + 0x88) == '\0') {
      if (*(float *)(param_1 + 0x78) <= fVar1) {
        local_res8[0] = *(float *)(param_1 + 0x7c);
        *(float *)(param_1 + 0x90) = local_res8[0];
        *(undefined1 *)(param_1 + 0x88) = 1;
        *(float *)(param_1 + 0x8c) = local_res8[0] + fVar1;
        FUN_14067efd0(param_1,&DAT_1468576e0,local_res8);
        return;
      }
    }
    else if (*(float *)(param_1 + 0x8c) <= fVar1) {
      local_res8[0] = *(float *)(param_1 + 0x90) - *(float *)(param_1 + 0x80);
      if (local_res8[0] <= *(float *)(param_1 + 0x84)) {
        local_res8[0] = *(float *)(param_1 + 0x84);
      }
      *(float *)(param_1 + 0x90) = local_res8[0];
      *(float *)(param_1 + 0x8c) = local_res8[0] + fVar1;
      FUN_14067efd0(param_1,&DAT_1468576e8,local_res8);
    }
  }
  return;
}



// FUNCTION 14067cfc0 FUN_14067cfc0 body=294 status=ok
// SIG undefined FUN_14067cfc0(void)

void FUN_14067cfc0(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  cVar2 = (**(code **)(*param_3 + 0x10))(param_3);
  if (cVar2 != '\0') {
    plVar5 = (longlong *)(param_1 + 0x2a0);
    plVar4 = (longlong *)*plVar5;
    plVar6 = plVar4 + (longlong)*(int *)(param_1 + 0x2a8) * 10;
    for (; plVar4 != plVar6; plVar4 = plVar4 + 10) {
      cVar2 = FUN_140677120(plVar4 + 4,param_3);
      if (cVar2 != '\0') {
        if (plVar4 != (longlong *)0x0) goto LAB_14067d076;
        break;
      }
    }
    iVar1 = *(int *)(param_1 + 0x2a8);
    *(int *)(param_1 + 0x2a8) = iVar1 + 1;
    if (*(int *)(param_1 + 0x2ac) < iVar1 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar5,iVar1);
    }
    lVar3 = *plVar5 + (longlong)iVar1 * 0x50;
    FUN_140676020(lVar3,param_3);
    FUN_140675ca0(lVar3 + 0x20,param_3);
    plVar4 = (longlong *)(*plVar5 + (longlong)iVar1 * 0x50);
LAB_14067d076:
    plVar5 = (longlong *)*plVar4;
    iVar1 = (int)plVar4[1];
    for (plVar6 = plVar5; plVar6 != plVar5 + iVar1; plVar6 = plVar6 + 1) {
      if (*plVar6 == param_2) {
        if ((int)((longlong)plVar6 - (longlong)plVar5 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    *(int *)(plVar4 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar1);
    }
    *(longlong *)((longlong)iVar1 * 8 + *plVar4) = param_2;
  }
  return;
}



// FUNCTION 14067d0f0 FUN_14067d0f0 body=772 status=ok
// SIG undefined FUN_14067d0f0(void)

void FUN_14067d0f0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  ulonglong local_res20;
  longlong *local_50;
  uint local_48;
  uint local_44;
  
  cVar2 = (**(code **)(*param_3 + 0x10))(param_3);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FUN_14067a1f0(param_1,param_3);
    plVar12 = (longlong *)0x0;
    iVar8 = 0;
    local_50 = (longlong *)0x0;
    local_44 = 0;
    plVar11 = (longlong *)*plVar3;
    iVar9 = (int)plVar3[1];
    plVar5 = plVar11 + iVar9;
    plVar13 = plVar12;
    plVar4 = plVar12;
    if (plVar11 != plVar5) {
      do {
        lVar1 = *plVar11;
        if ((lVar1 != param_2) && (*(longlong *)(lVar1 + 0x20) != *(longlong *)(param_2 + 0x20))) {
          if (*(char *)(param_2 + 0x40) != '\0') {
            for (lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10); lVar15 != 0;
                lVar15 = *(longlong *)(lVar15 + 0x30)) {
              if (lVar15 == *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0x10)) {
                iVar9 = (int)plVar12;
                local_48 = iVar9 + 1;
                if ((int)plVar13 < (int)local_48) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_50,plVar12);
                  plVar13 = (longlong *)(ulonglong)local_44;
                  plVar4 = local_50;
                }
                plVar12 = (longlong *)(ulonglong)local_48;
                plVar4[iVar9] = lVar1;
                break;
              }
            }
          }
          if (*(char *)(lVar1 + 0x40) != '\0') {
            for (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0x10); lVar1 != 0;
                lVar1 = *(longlong *)(lVar1 + 0x30)) {
              if (lVar1 == *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10)) goto LAB_14067d3c2;
            }
          }
        }
        iVar8 = (int)plVar12;
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar5);
      iVar9 = (int)plVar3[1];
      plVar11 = (longlong *)*plVar3;
    }
    if (0 < iVar8) {
      local_res20 = 0;
      uVar6 = (ulonglong)((longlong)(plVar4 + iVar8) + (7 - (longlong)plVar4)) >> 3;
      if (plVar4 + iVar8 < plVar4) {
        uVar6 = 0;
      }
      if (uVar6 != 0) {
        do {
          uVar7 = 0;
          lVar15 = (longlong)(int)plVar3[1];
          lVar1 = *plVar4;
          iVar9 = 0;
          if ((int)plVar3[1] != 0) {
            bVar17 = *(longlong *)*plVar3 != lVar1;
            uVar10 = uVar7;
            uVar16 = uVar7;
            do {
              iVar9 = (int)uVar10;
              uVar7 = uVar7 + 1;
              uVar10 = (ulonglong)(iVar9 + 1);
              if ((longlong)uVar7 < lVar15) {
                plVar5 = (longlong *)(*plVar3 + uVar7 * 8);
                do {
                  if (bVar17 != (*plVar5 != lVar1)) break;
                  uVar10 = (ulonglong)((int)uVar10 + 1);
                  uVar7 = uVar7 + 1;
                  plVar5 = plVar5 + 1;
                } while ((longlong)uVar7 < lVar15);
              }
              iVar8 = (int)uVar10 - iVar9;
              if (bVar17 != false) {
                iVar14 = (int)uVar16;
                if (iVar14 != iVar9) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*plVar3 + (longlong)iVar14 * 8),
                             (void *)(*plVar3 + (longlong)iVar9 * 8),(longlong)iVar8 << 3);
                }
                uVar16 = (ulonglong)(uint)(iVar14 + iVar8);
              }
              iVar9 = (int)uVar16;
              bVar17 = (bool)(bVar17 ^ 1);
            } while ((longlong)uVar7 < lVar15);
            *(int *)(plVar3 + 1) = iVar9;
          }
          local_res20 = local_res20 + 1;
          plVar4 = plVar4 + 1;
        } while (local_res20 != uVar6);
        plVar11 = (longlong *)*plVar3;
        plVar4 = local_50;
      }
    }
    for (plVar5 = plVar11; plVar5 != plVar11 + iVar9; plVar5 = plVar5 + 1) {
      if (*plVar5 == param_2) {
        if ((int)((longlong)plVar5 - (longlong)plVar11 >> 3) != -1) goto LAB_14067d3c2;
        break;
      }
    }
    iVar8 = (int)plVar3[1] + 1;
    *(int *)(plVar3 + 1) = iVar8;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3);
    }
    *(longlong *)((longlong)iVar9 * 8 + *plVar3) = param_2;
LAB_14067d3c2:
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
  }
  return;
}



// FUNCTION 14067d400 FUN_14067d400 body=455 status=ok
// SIG undefined FUN_14067d400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14067d400(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined **local_50 [2];
  undefined1 local_40 [16];
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar5 = *(longlong *)(param_1 + 0x278);
  if (((lVar5 != 0) || (lVar5 = *(longlong *)(param_1 + 0x260), lVar5 != 0)) && (param_3 != 0)) {
    lVar2 = FUN_1406804e0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar4 = *(longlong **)(lVar5 + 0x50);
      plVar3 = plVar4 + (longlong)*(int *)(lVar5 + 0x58) * 6;
      for (; local_58 = param_3, plVar4 != plVar3; plVar4 = plVar4 + 6) {
        if (*plVar4 == param_3) {
          if (plVar4 != (longlong *)0x0) {
            FUN_140675d60(local_50,plVar4 + 1);
            local_30 = '\x01';
            FUN_14067d0f0(param_1,param_2,local_50);
            if (local_30 != '\0') {
              local_30 = '\0';
              local_50[0] = &PTR__scalar_deleting_destructor__1440385f8;
              TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
              ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(local_40);
            }
          }
          break;
        }
      }
    }
    lVar2 = FUN_140680590();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar4 = *(longlong **)(lVar5 + 0x60);
      plVar3 = plVar4 + (longlong)*(int *)(lVar5 + 0x68) * 6;
      for (; plVar4 != plVar3; plVar4 = plVar4 + 6) {
        if (*plVar4 == param_3) {
          if (plVar4 == (longlong *)0x0) {
            return;
          }
          local_58 = param_3;
          FUN_140675ca0(local_50,plVar4 + 1);
          local_30 = '\x01';
          FUN_14067cfc0(param_1,param_2,local_50);
          if (local_30 == '\0') {
            return;
          }
          local_30 = 0;
          local_50[0] = &PTR__scalar_deleting_destructor__144038610;
          FUN_140676620(local_40);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14067d5d0 FUN_14067d5d0 body=91 status=ok
// SIG undefined FUN_14067d5d0(void)

void FUN_14067d5d0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x18))();
  if (plVar2 != (longlong *)0x0) {
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar2,iVar1);
    }
    FUN_140675b40((longlong)iVar1 * 0x40 + *plVar2,param_2);
  }
  return;
}



// FUNCTION 14067d630 Rehash body=529 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_14067d76f;
        uVar8 = puVar12[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
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
      if (iVar3 < iStack_44) {
LAB_14067d76f:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x60 + *param_1);
        uVar8 = (puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[0x17] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[0x16] =
             *(uint *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 14067d850 FUN_14067d850 body=285 status=ok
// SIG undefined FUN_14067d850(void)

bool FUN_14067d850(longlong param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x2e0);
  iVar5 = 0;
  if (iVar1 != 0) {
    iVar8 = 0;
    bVar2 = FUN_140677020(*(undefined8 *)(param_1 + 0x2d8));
    do {
      bVar2 = bVar2 ^ 1;
      iVar4 = iVar5 + 1;
      if (iVar4 < iVar1) {
        lVar6 = *(longlong *)(param_1 + 0x2d8);
        do {
          bVar3 = FUN_140677020((longlong)iVar4 * 0x40 + lVar6,param_2);
          if (bVar2 != (bVar3 ^ 1)) break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      iVar7 = iVar4 - iVar5;
      if (bVar2 == 0) {
        if (iVar7 != 0) {
          lVar6 = (longlong)iVar5 * 0x40 + 8 + *(longlong *)(param_1 + 0x2d8);
          do {
            TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar6);
            lVar6 = lVar6 + 0x40;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      else {
        if (iVar8 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x40 + *(longlong *)(param_1 + 0x2d8)),
                     (void *)((longlong)iVar5 * 0x40 + *(longlong *)(param_1 + 0x2d8)),
                     (longlong)iVar7 << 6);
        }
        iVar8 = iVar8 + iVar7;
      }
      iVar5 = iVar4;
    } while (iVar4 < iVar1);
    iVar5 = iVar1 - iVar8;
    *(int *)(param_1 + 0x2e0) = iVar8;
  }
  return 0 < iVar5;
}



// FUNCTION 14067d970 FUN_14067d970 body=294 status=ok
// SIG undefined FUN_14067d970(void)

bool FUN_14067d970(longlong param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x2d0);
  iVar5 = 0;
  if (iVar1 != 0) {
    iVar8 = 0;
    bVar2 = FUN_1406770a0(*(undefined8 *)(param_1 + 0x2c8));
    do {
      bVar2 = bVar2 ^ 1;
      iVar4 = iVar5 + 1;
      if (iVar4 < iVar1) {
        lVar7 = *(longlong *)(param_1 + 0x2c8);
        do {
          bVar3 = FUN_1406770a0((longlong)iVar4 * 0x58 + lVar7,param_2);
          if (bVar2 != (bVar3 ^ 1)) break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      iVar6 = iVar4 - iVar5;
      if (bVar2 == 0) {
        if (iVar6 != 0) {
          lVar7 = (longlong)iVar5 * 0x58 + 0x10 + *(longlong *)(param_1 + 0x2c8);
          do {
            TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7 + 0x10);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
            lVar7 = lVar7 + 0x58;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else {
        if (iVar8 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x58 + *(longlong *)(param_1 + 0x2c8)),
                     (void *)((longlong)iVar5 * 0x58 + *(longlong *)(param_1 + 0x2c8)),
                     (longlong)iVar6 * 0x58);
        }
        iVar8 = iVar8 + iVar6;
      }
      iVar5 = iVar4;
    } while (iVar4 < iVar1);
    iVar5 = iVar1 - iVar8;
    *(int *)(param_1 + 0x2d0) = iVar8;
  }
  return 0 < iVar5;
}



// FUNCTION 14067daa0 FUN_14067daa0 body=511 status=ok
// SIG undefined FUN_14067daa0(void)

void FUN_14067daa0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    iVar6 = *(int *)(param_1 + 0x58);
    if (iVar6 != 0) {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + 8);
      do {
        *puVar3 = &PTR__scalar_deleting_destructor__1440385f8;
        TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
        ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(puVar3 + 2);
        *puVar3 = &PTR_FUN_1440385e0;
        puVar3 = puVar3 + 6;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x50,0);
    }
    iVar6 = *(int *)(param_1 + 0x68);
    if (iVar6 != 0) {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + 8);
      do {
        *puVar3 = &PTR__scalar_deleting_destructor__144038610;
        FUN_140676620(puVar3 + 2);
        *puVar3 = &PTR_FUN_1440385e0;
        puVar3 = puVar3 + 6;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x60,0);
    }
    for (lVar2 = *(longlong *)(param_1 + 0x70); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x48)) {
      iVar6 = *(int *)(lVar2 + 0x58);
      if (iVar6 != 0) {
        iVar5 = *(int *)(param_1 + 0x58);
        if (*(int *)(param_1 + 0x5c) < iVar5 + iVar6) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(param_1 + 0x50);
          iVar5 = *(int *)(param_1 + 0x58);
        }
        puVar3 = *(undefined8 **)(lVar2 + 0x50);
        puVar4 = (undefined8 *)((longlong)iVar5 * 0x30 + *(longlong *)(param_1 + 0x50));
        iVar5 = iVar6;
        do {
          *puVar4 = *puVar3;
          FUN_140675d60(puVar4 + 1,puVar3 + 1);
          puVar1 = puVar3 + 5;
          puVar3 = puVar3 + 6;
          *(undefined1 *)(puVar4 + 5) = *(undefined1 *)puVar1;
          puVar4 = puVar4 + 6;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
      }
      iVar6 = *(int *)(lVar2 + 0x68);
      if (iVar6 != 0) {
        iVar5 = *(int *)(param_1 + 0x68);
        if (*(int *)(param_1 + 0x6c) < iVar5 + iVar6) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(param_1 + 0x60);
          iVar5 = *(int *)(param_1 + 0x68);
        }
        puVar3 = *(undefined8 **)(lVar2 + 0x60);
        puVar4 = (undefined8 *)((longlong)iVar5 * 0x30 + *(longlong *)(param_1 + 0x60));
        iVar5 = iVar6;
        do {
          *puVar4 = *puVar3;
          FUN_140675ca0(puVar4 + 1,puVar3 + 1);
          puVar1 = puVar3 + 5;
          puVar3 = puVar3 + 6;
          *(undefined1 *)(puVar4 + 5) = *(undefined1 *)puVar1;
          puVar4 = puVar4 + 6;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar6;
      }
    }
    *(undefined1 *)(param_1 + 0x79) = 1;
    FUN_14067bb70(param_1);
  }
  return;
}



// FUNCTION 14067dca0 FUN_14067dca0 body=24 status=ok
// SIG undefined FUN_14067dca0(void)

void FUN_14067dca0(longlong param_1)

{
  FUN_14067eb50();
  *(undefined1 *)(param_1 + 0x41) = 0;
  return;
}



// FUNCTION 14067dcc0 FUN_14067dcc0 body=52 status=ok
// SIG undefined FUN_14067dcc0(void)

void FUN_14067dcc0(longlong *param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  }
  FUN_14067eb50(param_1);
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  return;
}



// FUNCTION 14067dd00 FUN_14067dd00 body=56 status=ok
// SIG undefined FUN_14067dd00(void)

void FUN_14067dd00(longlong *param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  }
  FUN_14067eb50(param_1);
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  return;
}



// FUNCTION 14067dd40 FUN_14067dd40 body=63 status=ok
// SIG undefined FUN_14067dd40(void)

void FUN_14067dd40(longlong *param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  }
  FUN_14067eb50(param_1);
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  return;
}



// FUNCTION 14067dd80 FUN_14067dd80 body=43 status=ok
// SIG undefined FUN_14067dd80(void)

void FUN_14067dd80(longlong *param_1)

{
  if ((char)param_1[0xf] == '\0') {
    (**(code **)(*param_1 + 0x288))();
    FUN_14067bb70(param_1);
    return;
  }
  return;
}



// FUNCTION 14067ddb0 FUN_14067ddb0 body=257 status=ok
// SIG undefined FUN_14067ddb0(void)

void FUN_14067ddb0(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x148);
  if (uVar1 < 0xb) {
    uVar2 = 10;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x14c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 5,0);
    uVar2 = (uint)(uVar3 >> 5);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x14c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x140);
  if (uVar2 < 0xb) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 5);
    pvVar4 = *(void **)((longlong)param_1 + 0x140);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 5,0);
        *(void **)((longlong)param_1 + 0x140) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 5);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 5;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x140) = uVar5;
  return;
}



// FUNCTION 14067dec0 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FEnvQueryInstanceCache,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x188,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x4e5e0a72f0539783) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 8);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x188,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 14067df60 FUN_14067df60 body=140 status=ok
// SIG undefined FUN_14067df60(void)

void FUN_14067df60(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x30,0);
  iVar4 = (int)(uVar3 / 0x30);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x30,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 14067dff0 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<392,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x188,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x4e5e0a72f0539783) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x188,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 14067e080 FUN_14067e080 body=120 status=ok
// SIG undefined FUN_14067e080(void)

void FUN_14067e080(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x30,0);
    iVar3 = (int)(uVar1 / 0x30);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x30,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 14067e100 FUN_14067e100 body=400 status=ok
// SIG undefined FUN_14067e100(void)

void FUN_14067e100(undefined8 param_1,void *param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  lVar3 = FUN_14067a3d0();
  if (lVar3 != 0) {
    puVar5 = *(undefined8 **)(lVar3 + 0x80);
    puVar7 = puVar5 + (longlong)*(int *)(lVar3 + 0x88) * 8;
    if (puVar5 != puVar7) {
      do {
        iVar1 = *(int *)(puVar5 + 1);
        pvVar4 = (void *)*puVar5;
        local_68 = (void *)0x0;
        if (iVar1 == 0) {
          pvVar6 = (void *)0x0;
          local_50 = iVar1;
          local_4c = 0;
        }
        else {
          local_60._0_4_ = iVar1;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar1,0);
          pvVar6 = local_68;
          _guard_xfg_dispatch_icall_nop(local_68,pvVar4,(longlong)iVar1 * 2);
          local_50 = (int)local_60;
          local_4c = local_60._4_4_;
        }
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        local_68 = (void *)0x0;
        local_60 = 0;
        local_58 = pvVar6;
        FUN_1417978e0(&local_48,&local_58);
        pvVar4 = (void *)FSoftObjectPath::TryLoad(&local_48);
        if (pvVar4 == (void *)0x0) {
LAB_14067e213:
          pvVar4 = (void *)0x0;
        }
        else {
          lVar3 = FUN_140680770();
          if ((*(int *)(*(longlong *)((longlong)pvVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)((longlong)pvVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_14067e213;
        }
        if (local_40 != 0) {
          FMemory::Free();
        }
        if (param_2 == pvVar4) {
          (**(code **)(*param_3 + 0x280))(param_3,puVar5);
          return;
        }
        puVar5 = puVar5 + 8;
      } while (puVar5 != puVar7);
    }
  }
  lVar3 = *(longlong *)((longlong)param_2 + 0x68);
  if ((((char)param_3[0xf] == '\0') && (lVar3 != 0)) && (*(longlong *)(lVar3 + 0x10) == param_3[2]))
  {
    param_3[0xe] = lVar3;
    (**(code **)(*param_3 + 0x288))(param_3);
  }
  return;
}



// FUNCTION 14067e290 FUN_14067e290 body=1461 status=ok
// SIG undefined FUN_14067e290(void)

void FUN_14067e290(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  void *pvVar14;
  longlong *plVar15;
  void *pvVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  ulonglong *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  void *local_128;
  undefined8 local_120;
  void *local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  longlong *plStack_80;
  void *local_78;
  undefined1 local_70 [16];
  longlong local_60;
  
  if ((char)param_1[0xf] != '\0') {
    return;
  }
  plVar11 = (longlong *)FString::FString(local_70,param_2 + 0x10);
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_c0 = *plVar11;
  *plVar11 = 0;
  local_b8 = (undefined4)plVar11[1];
  local_b4 = *(undefined4 *)((longlong)plVar11 + 0xc);
  plVar11[1] = 0;
  FUN_1417978e0(&local_108,&local_c0);
  if (*plVar11 != 0) {
    FMemory::Free();
  }
  lVar12 = FSoftObjectPath::TryLoad(&local_108);
  if (lVar12 != 0) {
    lVar13 = FUN_140680830();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_14067e364;
  }
  lVar12 = 0;
LAB_14067e364:
  param_1[0xe] = lVar12;
  if (local_100 != 0) {
    FMemory::Free();
  }
  (**(code **)(*param_1 + 0x288))(param_1);
  puVar7 = *(ulonglong **)(param_2 + 0x20);
  iVar6 = *(int *)(param_2 + 0x28);
  if (puVar7 != puVar7 + (longlong)iVar6 * 4) {
    puVar19 = puVar7 + 2;
    do {
      iVar22 = (int)puVar19[-1];
      pvVar14 = (void *)puVar19[-2];
      local_128 = (void *)0x0;
      if (iVar22 == 0) {
        pvVar16 = (void *)0x0;
        local_a8 = iVar22;
        local_a4 = 0;
      }
      else {
        local_120._0_4_ = iVar22;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,iVar22,0);
        pvVar16 = local_128;
        _guard_xfg_dispatch_icall_nop(local_128,pvVar14,(longlong)iVar22 * 2);
        local_a8 = (int)local_120;
        local_a4 = local_120._4_4_;
      }
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_128 = (void *)0x0;
      local_120 = 0;
      local_b0 = pvVar16;
      FUN_1417978e0(&local_f0,&local_b0);
      pvVar14 = (void *)FSoftObjectPath::TryLoad(&local_f0);
      if (pvVar14 == (void *)0x0) {
LAB_14067e48d:
        pvVar14 = (void *)0x0;
      }
      else {
        lVar12 = FUN_1406804e0();
        if ((*(int *)(*(longlong *)((longlong)pvVar14 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)((longlong)pvVar14 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (!bVar10) goto LAB_14067e48d;
      }
      if (local_e8 != 0) {
        FMemory::Free();
      }
      if (pvVar14 != (void *)0x0) {
        plVar11 = (longlong *)param_1[10];
        plVar20 = plVar11 + (longlong)(int)param_1[0xb] * 6;
        for (; local_78 = pvVar14, plVar11 != plVar20; plVar11 = plVar11 + 6) {
          if ((void *)*plVar11 == pvVar14) {
            if (plVar11 != (longlong *)0x0) {
              FUN_1406792d0(plVar11 + 3,0);
              uVar23 = 0;
              plVar20 = (longlong *)*puVar19;
              uVar21 = (longlong)(int)puVar19[1] & 0x1fffffffffffffff;
              if (plVar20 + (int)puVar19[1] < plVar20) {
                uVar21 = uVar23;
              }
              if (uVar21 != 0) {
                do {
                  plVar17 = (longlong *)plVar11[3];
                  iVar22 = (int)plVar11[4];
                  lVar13 = *plVar20;
                  lVar12 = (longlong)iVar22 * 0x18;
                  plVar15 = plVar17 + (longlong)iVar22 * 3;
                  for (; local_60 = lVar13, plVar17 != plVar15; plVar17 = plVar17 + 3) {
                    if (*plVar17 == lVar13) goto LAB_14067e57f;
                  }
                  *(int *)(plVar11 + 4) = iVar22 + 1;
                  if (*(int *)((longlong)plVar11 + 0x24) < iVar22 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(plVar11 + 3,iVar22);
                  }
                  lVar8 = plVar11[3];
                  *(longlong *)(lVar8 + lVar12) = lVar13;
                  *(undefined8 *)(lVar8 + 8 + lVar12) = 0;
                  *(undefined8 *)(lVar8 + 0x10 + lVar12) = 0;
LAB_14067e57f:
                  plVar20 = plVar20 + 1;
                  uVar23 = uVar23 + 1;
                } while (uVar23 != uVar21);
              }
              *(undefined1 *)(plVar11 + 5) = 1;
            }
            break;
          }
        }
      }
      puVar4 = puVar19 + 2;
      puVar19 = puVar19 + 4;
    } while (puVar4 != puVar7 + (longlong)iVar6 * 4);
  }
  plVar11 = *(longlong **)(param_2 + 0x30);
  iVar6 = *(int *)(param_2 + 0x38);
  if (plVar11 != plVar11 + (longlong)iVar6 * 4) {
    plVar20 = plVar11 + 2;
    do {
      iVar22 = (int)plVar20[-1];
      pvVar14 = (void *)plVar20[-2];
      local_118 = (void *)0x0;
      if (iVar22 == 0) {
        pvVar16 = (void *)0x0;
        local_98 = iVar22;
        local_94 = 0;
      }
      else {
        local_110._0_4_ = iVar22;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,iVar22,0);
        pvVar16 = local_118;
        _guard_xfg_dispatch_icall_nop(local_118,pvVar14,(longlong)iVar22 * 2);
        local_98 = (int)local_110;
        local_94 = local_110._4_4_;
      }
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_118 = (void *)0x0;
      local_110 = 0;
      local_a0 = pvVar16;
      FUN_1417978e0(&local_d8,&local_a0);
      pvVar14 = (void *)FSoftObjectPath::TryLoad(&local_d8);
      if (pvVar14 == (void *)0x0) {
LAB_14067e69d:
        pvVar14 = (void *)0x0;
      }
      else {
        lVar12 = FUN_140680590();
        if ((*(int *)(*(longlong *)((longlong)pvVar14 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)((longlong)pvVar14 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (!bVar10) goto LAB_14067e69d;
      }
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (pvVar14 != (void *)0x0) {
        plVar15 = (longlong *)param_1[0xc];
        plVar17 = plVar15 + (longlong)(int)param_1[0xd] * 6;
        for (; plVar15 != plVar17; plVar15 = plVar15 + 6) {
          if ((void *)*plVar15 == pvVar14) {
            if (plVar15 != (longlong *)0x0) {
              iVar22 = (int)plVar15[4];
              if (iVar22 != 0) {
                plVar17 = (longlong *)(plVar15[3] + 0x10);
                do {
                  plVar9 = (longlong *)*plVar17;
                  if (plVar9 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plVar9 + 1;
                    lVar12 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar12 == 1) {
                      (**(code **)*plVar9)(plVar9);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar9 + 0xc);
                      iVar5 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar5 == 1) {
                        (**(code **)(*plVar9 + 8))(plVar9,1);
                      }
                    }
                  }
                  plVar17 = plVar17 + 5;
                  iVar22 = iVar22 + -1;
                } while (iVar22 != 0);
              }
              *(undefined4 *)(plVar15 + 4) = 0;
              if (*(int *)((longlong)plVar15 + 0x24) != 0) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::
                ResizeTo(plVar15 + 3,0);
              }
              puVar18 = (undefined8 *)*plVar20;
              puVar3 = puVar18 + (longlong)(int)plVar20[1] * 3;
              for (; puVar18 != puVar3; puVar18 = puVar18 + 3) {
                local_90 = *puVar18;
                local_88 = 0;
                plStack_80 = (longlong *)0x0;
                FUN_140677850(plVar15 + 1,&local_90);
                plVar17 = plStack_80;
                if (plStack_80 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = plStack_80 + 1;
                  lVar12 = *plVar9;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)lVar12 == 1) {
                    (**(code **)*plStack_80)(plStack_80);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar17 + 0xc);
                    iVar22 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar22 == 1) {
                      (**(code **)(*plStack_80 + 8))(plStack_80,1);
                    }
                  }
                }
              }
              *(undefined1 *)(plVar15 + 5) = 1;
            }
            break;
          }
        }
      }
      plVar15 = plVar20 + 2;
      plVar20 = plVar20 + 4;
    } while (plVar15 != plVar11 + (longlong)iVar6 * 4);
  }
  FUN_14067bb70(param_1);
  return;
}



// FUNCTION 14067e850 FUN_14067e850 body=36 status=ok
// SIG undefined FUN_14067e850(void)

void FUN_14067e850(longlong *param_1,longlong param_2)

{
  if ((((char)param_1[0xf] == '\0') && (param_2 != 0)) &&
     (*(longlong *)(param_2 + 0x10) == param_1[2])) {
    param_1[0xe] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014067e86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x288))();
    return;
  }
  return;
}



// FUNCTION 14067e880 FUN_14067e880 body=485 status=ok
// SIG undefined FUN_14067e880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14067e880(longlong *param_1,longlong param_2,char param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_res20;
  
  if ((((param_1[5] != 0) && (param_2 != 0)) && (*(char *)((longlong)param_1 + 0x41) == '\0')) &&
     ((cVar2 = (**(code **)(*param_1 + 0x60))(), cVar2 != '\0' &&
      (cVar2 = (**(code **)(*param_1 + 0x58))(param_1,param_2), cVar2 != '\0')))) {
    iVar1 = (int)param_1[7];
    *(int *)(param_1 + 7) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x3c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 6,iVar1);
    }
    *(longlong *)(param_1[6] + (longlong)iVar1 * 8) = param_2;
    plVar7 = *(longlong **)(param_1[5] + 0x2c8);
    plVar8 = plVar7 + (longlong)*(int *)(param_1[5] + 0x2d0) * 0xb;
    if (plVar7 != plVar8) {
      plVar6 = plVar7 + 7;
      do {
        if (((char)plVar6[-6] == '\0') && (*plVar7 == param_2)) {
          if (((int)plVar6[-4] == 0) ||
             (((longlong *)plVar6[-5] == (longlong *)0x0 ||
              (cVar2 = (**(code **)(*(longlong *)plVar6[-5] + 0x18))(), cVar2 == '\0')))) {
            if ((((int)plVar6[-2] == 0) || ((longlong *)plVar6[-3] == (longlong *)0x0)) ||
               (cVar2 = (**(code **)(*(longlong *)plVar6[-3] + 0x18))(), cVar2 == '\0')) {
              if (((*plVar6 != 0) && (lVar3 = FWeakObjectPtr::Get(plVar6 + -1), lVar3 != 0)) &&
                 (lVar3 = UObject::FindFunction(lVar3,*plVar6), lVar3 != 0)) {
                local_res20 = param_2;
                plVar4 = (longlong *)FWeakObjectPtr::Get(plVar6 + -1);
                uVar5 = FUN_14178ac60(plVar4,*plVar6);
                (**(code **)(*plVar4 + 0x208))(plVar4,uVar5,&local_res20);
              }
            }
            else if ((int)plVar6[-2] == 0) {
              (**(code **)(_DAT_00000000 + 0x38))(0,param_2);
            }
            else {
              (**(code **)(*(longlong *)plVar6[-3] + 0x38))((longlong *)plVar6[-3],param_2);
            }
          }
          else if ((int)plVar6[-4] == 0) {
            (**(code **)(_DAT_00000000 + 0x38))();
          }
          else {
            (**(code **)(*(longlong *)plVar6[-5] + 0x38))();
          }
        }
        plVar7 = plVar7 + 0xb;
        plVar6 = plVar6 + 0xb;
      } while (plVar7 != plVar8);
    }
    if (param_3 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x41) = 1;
    }
  }
  return;
}



// FUNCTION 14067ea70 FUN_14067ea70 body=165 status=ok
// SIG undefined FUN_14067ea70(void)

void FUN_14067ea70(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x2b0) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    cVar3 = FUN_14067aea0(uVar1,*(longlong *)(param_1 + 0x2b0),param_2);
    if (cVar3 != '\0') {
      FUN_140679740(uVar1,*(undefined8 *)(param_1 + 0x2b0),param_2);
      FUN_14067e880(*(undefined8 *)(param_1 + 0x2b0),param_2,param_3);
      if ((*(longlong *)(param_1 + 0x2c0) != 0) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 8), lVar2 != 0)) {
        TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                  (*(longlong *)(param_1 + 0x2c0),lVar2 + 0x48);
      }
    }
  }
  return;
}



// FUNCTION 14067eb50 FUN_14067eb50 body=778 status=ok
// SIG undefined FUN_14067eb50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14067eb50(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50 [2];
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x30);
    plVar4 = plVar9 + *(int *)(param_1 + 0x38);
    local_80 = plVar4;
    if (plVar9 != plVar4) {
      do {
        lVar1 = *plVar9;
        if (lVar1 != 0) {
          if (*(longlong *)(param_1 + 0x28) != 0) {
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20);
            FWeakObjectPtr::operator=(&local_68,uVar5);
            local_60 = local_68;
            piVar3 = (int *)TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                            ::FindId(&DAT_146229440,local_res20,&local_60);
            plVar4 = local_80;
            if (*piVar3 != -1) {
              FWeakObjectPtr::operator=(&local_58,uVar5);
              local_60 = local_58;
              TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::FindId(&DAT_146229440,local_res8,&local_60);
              if (local_res8[0] == -1) {
                lVar6 = 0;
              }
              else {
                lVar6 = (longlong)local_res8[0] * 0x60 + DAT_146229440;
              }
              piVar3 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                              ::FindId(lVar6 + 8,local_88,param_1);
              plVar4 = local_80;
              if (*piVar3 != -1) {
                FWeakObjectPtr::operator=(&local_78,0);
                FWeakObjectPtr::operator=(local_50,uVar5);
                local_60 = local_50[0];
                TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                ::FindId(&DAT_146229440,local_res10,&local_60);
                if (local_res10[0] == -1) {
                  lVar6 = 0;
                }
                else {
                  lVar6 = (longlong)local_res10[0] * 0x60 + DAT_146229440;
                }
                TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                ::FindId((longlong *)(lVar6 + 8),local_res18,param_1);
                if (local_res18[0] == -1) {
                  lVar6 = 0;
                }
                else {
                  lVar6 = *(longlong *)(lVar6 + 8) + (longlong)local_res18[0] * 0x18;
                }
                *(undefined4 *)(lVar6 + 8) = local_78;
                *(undefined4 *)(lVar6 + 0xc) = local_74;
                plVar4 = local_80;
              }
            }
          }
          plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x2c8);
          plVar10 = plVar8 + (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x2d0) * 0xb;
          if (plVar8 != plVar10) {
            plVar7 = plVar8 + 7;
            do {
              if (((char)plVar7[-6] == '\x01') && (*plVar8 == lVar1)) {
                if (((int)plVar7[-4] == 0) ||
                   (((longlong *)plVar7[-5] == (longlong *)0x0 ||
                    (cVar2 = (**(code **)(*(longlong *)plVar7[-5] + 0x18))(), cVar2 == '\0')))) {
                  if ((((int)plVar7[-2] == 0) || ((longlong *)plVar7[-3] == (longlong *)0x0)) ||
                     (cVar2 = (**(code **)(*(longlong *)plVar7[-3] + 0x18))(), cVar2 == '\0')) {
                    local_70 = 0;
                    if (((*plVar7 != 0) && (lVar6 = FWeakObjectPtr::Get(plVar7 + -1), lVar6 != 0))
                       && (lVar6 = UObject::FindFunction(lVar6,*plVar7), lVar6 != 0)) {
                      local_60 = lVar1;
                      plVar4 = (longlong *)FWeakObjectPtr::Get(plVar7 + -1);
                      uVar5 = FUN_14178ac60(plVar4,*plVar7);
                      (**(code **)(*plVar4 + 0x208))(plVar4,uVar5,&local_60);
                    }
                  }
                  else if ((int)plVar7[-2] == 0) {
                    (**(code **)(_DAT_00000000 + 0x38))(0,lVar1);
                  }
                  else {
                    (**(code **)(*(longlong *)plVar7[-3] + 0x38))((longlong *)plVar7[-3],lVar1);
                  }
                }
                else if ((int)plVar7[-4] == 0) {
                  (**(code **)(_DAT_00000000 + 0x38))();
                }
                else {
                  (**(code **)(*(longlong *)plVar7[-5] + 0x38))();
                }
              }
              plVar8 = plVar8 + 0xb;
              plVar7 = plVar7 + 0xb;
              plVar4 = local_80;
            } while (plVar8 != plVar10);
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x30,0);
  }
  return;
}



// FUNCTION 14067ee60 FUN_14067ee60 body=121 status=ok
// SIG undefined FUN_14067ee60(void)

bool FUN_14067ee60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FKey::IsValid(param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_1417c87c0(param_2);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x38) == '\0') {
        cVar1 = FKey::IsGamepadKey(param_2);
        return cVar1 == '\0';
      }
      if (*(char *)(param_1 + 0x38) != '\x01') {
        return true;
      }
      uVar2 = FKey::IsGamepadKey(param_2);
      return (bool)uVar2;
    }
  }
  return false;
}



// FUNCTION 14067eee0 FUN_14067eee0 body=60 status=ok
// SIG undefined FUN_14067eee0(void)

void FUN_14067eee0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FKey::IsFloatAxis(param_2);
  if (cVar1 == '\0') {
    return;
  }
  FUN_14067ee60(param_1,param_2);
  return;
}



// FUNCTION 14067ef20 FUN_14067ef20 body=74 status=ok
// SIG undefined FUN_14067ef20(void)

undefined1 FUN_14067ef20(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FKey::IsFloatAxis(param_2);
  if (cVar1 == '\0') {
    cVar1 = FKey::IsVectorAxis(param_2);
    if (cVar1 == '\0') {
      uVar2 = FUN_14067ee60(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14067ef70 FUN_14067ef70 body=87 status=ok
// SIG undefined FUN_14067ef70(void)

undefined8 FUN_14067ef70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x18) * 7;
  while( true ) {
    if (plVar1 == plVar2) {
      return 0;
    }
    if (*plVar1 == DAT_1468576d0) break;
    plVar1 = plVar1 + 7;
  }
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  FUN_140678430(*(undefined8 *)(param_1 + 0x28),param_1,plVar1,param_2,param_3);
  return 1;
}



// FUNCTION 14067efd0 FUN_14067efd0 body=347 status=ok
// SIG undefined FUN_14067efd0(void)

undefined8 FUN_14067efd0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x18) * 7;
  if (plVar7 != plVar8) {
    do {
      if (*plVar7 == *param_2) {
        if (plVar7 == (longlong *)0x0) {
          return 0;
        }
        plVar8 = *(longlong **)(param_1 + 0x28);
        if ((char)plVar7[2] == '\0') {
          return 1;
        }
        lVar1 = plVar8[0x56];
        plVar8[0x56] = param_1;
        lVar2 = plVar7[4];
        if (lVar2 != 0) {
          lVar6 = FUN_1406811b0();
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
            lVar6 = plVar7[5];
            if (plVar8[0x56] != 0) {
              lVar3 = plVar8[4];
              cVar5 = FUN_14067aea0(lVar3,plVar8[0x56],lVar2);
              if (cVar5 != '\0') {
                FUN_140679740(lVar3,plVar8[0x56],lVar2);
                FUN_14067e880(plVar8[0x56],lVar2,(char)lVar6);
                if ((plVar8[0x58] != 0) && (*(longlong *)(plVar8[0x56] + 8) != 0)) {
                  TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                            (plVar8[0x58],*(longlong *)(plVar8[0x56] + 8) + 0x48);
                }
              }
            }
            goto LAB_14067f107;
          }
        }
        (**(code **)(*plVar8 + 0x208))(plVar8,plVar7[6],param_3);
LAB_14067f107:
        plVar8[0x56] = lVar1;
        return 1;
      }
      plVar7 = plVar7 + 7;
    } while (plVar7 != plVar8);
  }
  return 0;
}



// FUNCTION 14067f130 FUN_14067f130 body=148 status=ok
// SIG undefined FUN_14067f130(void)

ulonglong FUN_14067f130(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 local_res8;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar3 = *(longlong **)(param_1 + 0x60);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x68) * 6;
  if (plVar3 != plVar4) {
    while (*plVar3 != param_3) {
      plVar3 = plVar3 + 6;
      if (plVar3 == plVar4) {
        uVar2 = FUN_14067bb70(param_1);
        return uVar2;
      }
    }
    if (plVar3 != (longlong *)0x0) {
      local_res8 = param_2;
      iVar1 = FUN_1406759a0(plVar3 + 3,&local_res8);
      if (0 < iVar1) {
        *(undefined1 *)(plVar3 + 5) = 1;
      }
      *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | 0 < iVar1;
    }
  }
  uVar2 = FUN_14067bb70(param_1);
  return uVar2;
}



// FUNCTION 14067f1d0 FUN_14067f1d0 body=148 status=ok
// SIG undefined FUN_14067f1d0(void)

ulonglong FUN_14067f1d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 local_res8;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x58) * 6;
  if (plVar3 != plVar4) {
    while (*plVar3 != param_3) {
      plVar3 = plVar3 + 6;
      if (plVar3 == plVar4) {
        uVar2 = FUN_14067bb70(param_1);
        return uVar2;
      }
    }
    if (plVar3 != (longlong *)0x0) {
      local_res8 = param_2;
      iVar1 = FUN_140675800(plVar3 + 3,&local_res8);
      if (0 < iVar1) {
        *(undefined1 *)(plVar3 + 5) = 1;
      }
      *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | 0 < iVar1;
    }
  }
  uVar2 = FUN_14067bb70(param_1);
  return uVar2;
}



// FUNCTION 14067f270 FUN_14067f270 body=225 status=ok
// SIG undefined FUN_14067f270(void)

ulonglong FUN_14067f270(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res8;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    lVar5 = *(longlong *)(param_1 + 0x50);
    lVar6 = (longlong)*(int *)(param_1 + 0x58) * 0x30 + lVar5;
    uVar2 = param_2;
    uVar1 = local_res8;
    for (; local_res8 = uVar2, lVar5 != lVar6; lVar5 = lVar5 + 0x30) {
      iVar3 = FUN_140675800(lVar5 + 0x18,&local_res8);
      if (0 < iVar3) {
        *(undefined1 *)(lVar5 + 0x28) = 1;
      }
      *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | 0 < iVar3;
      uVar2 = local_res8;
      uVar1 = local_res8;
    }
    lVar5 = *(longlong *)(param_1 + 0x60);
    lVar6 = (longlong)*(int *)(param_1 + 0x68) * 0x30 + lVar5;
    local_res8 = param_2;
    for (; lVar5 != lVar6; lVar5 = lVar5 + 0x30) {
      iVar3 = FUN_1406759a0(lVar5 + 0x18,&local_res8);
      if (0 < iVar3) {
        *(undefined1 *)(lVar5 + 0x28) = 1;
      }
      *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | 0 < iVar3;
      uVar1 = local_res8;
    }
    local_res8 = uVar1;
    uVar4 = FUN_14067bb70(param_1);
    return uVar4;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14067f360 FUN_14067f360 body=297 status=ok
// SIG undefined FUN_14067f360(void)

void FUN_14067f360(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_50;
  int local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_3 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x28);
    lVar6 = (longlong)*(int *)(param_1 + 0x30) * 0x20 + lVar7;
    for (; lVar7 != lVar6; lVar7 = lVar7 + 0x20) {
      uVar2 = *(undefined4 *)(lVar7 + 0x10);
      uVar3 = *(undefined4 *)(lVar7 + 0x14);
      uVar4 = *(undefined4 *)(lVar7 + 0x18);
      uVar5 = *(undefined4 *)(lVar7 + 0x1c);
      local_50 = (longlong *)0x0;
      local_48 = 0;
      FWeakObjectPtr::operator=(local_40,0);
      local_38 = 0;
      FWeakObjectPtr::operator=(local_30,param_2);
      uVar1 = *(undefined8 *)(lVar7 + 8);
      local_28 = uVar2;
      uStack_24 = uVar3;
      uStack_20 = uVar4;
      uStack_1c = uVar5;
      if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
        (**(code **)(*local_50 + 0x28))(local_50,0);
        if (local_50 != (longlong *)0x0) {
          local_50 = (longlong *)FMemory::Realloc(local_50,0,0);
        }
        local_48 = 0;
      }
      FWeakObjectPtr::operator=(local_40,param_2);
      local_38 = uVar1;
      FUN_14067d850(param_3);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
    }
  }
  return;
}



// FUNCTION 14067f490 FUN_14067f490 body=360 status=ok
// SIG undefined FUN_14067f490(void)

void FUN_14067f490(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *local_68;
  int local_60;
  longlong *local_58;
  int local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_3 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x28);
    lVar1 = lVar7 + (longlong)*(int *)(param_1 + 0x30) * 0x28;
    for (; lVar7 != lVar1; lVar7 = lVar7 + 0x28) {
      uVar3 = *(undefined4 *)(lVar7 + 0x18);
      uVar4 = *(undefined4 *)(lVar7 + 0x1c);
      uVar5 = *(undefined4 *)(lVar7 + 0x20);
      uVar6 = *(undefined4 *)(lVar7 + 0x24);
      local_68 = (longlong *)0x0;
      local_60 = 0;
      local_58 = (longlong *)0x0;
      local_50 = 0;
      FWeakObjectPtr::operator=(local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(local_38,param_2);
      uVar2 = *(undefined8 *)(lVar7 + 0x10);
      local_30 = uVar3;
      uStack_2c = uVar4;
      uStack_28 = uVar5;
      uStack_24 = uVar6;
      if ((local_60 != 0) && (local_68 != (longlong *)0x0)) {
        (**(code **)(*local_68 + 0x28))(local_68,0);
        if (local_68 != (longlong *)0x0) {
          local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
        }
        local_60 = 0;
      }
      if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
        (**(code **)(*local_58 + 0x28))(local_58,0);
        if (local_58 != (longlong *)0x0) {
          local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
        }
        local_50 = 0;
      }
      FWeakObjectPtr::operator=(local_48,param_2);
      local_40 = uVar2;
      FUN_14067d970(param_3);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
    }
  }
  return;
}



// FUNCTION 14067f600 FUN_14067f600 body=240 status=ok
// SIG undefined FUN_14067f600(void)

void FUN_14067f600(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146857748) && (_Init_thread_header(&DAT_146857748), DAT_146857748 == -1))
  {
    DAT_146857738 = FUN_1406802b0();
    DAT_146857740 = FUN_14067ffb0();
    _Init_thread_footer(&DAT_146857748);
  }
  if (param_2 != 0) {
    FUN_14067f600(param_1,*(undefined8 *)(param_2 + 0x30),param_3);
    uVar2 = 0;
    puVar3 = &DAT_146857738;
    do {
      plVar1 = (longlong *)FUN_1422f1ac0(param_2,*puVar3);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x298))(plVar1,param_1,param_3);
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < 2);
  }
  return;
}



// FUNCTION 14067f6f0 FUN_14067f6f0 body=610 status=ok
// SIG undefined FUN_14067f6f0(void)

void FUN_14067f6f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int local_res10 [2];
  longlong local_res18;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined1 local_98 [8];
  longlong local_90;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_res18 = FUN_14067a3d0();
  if (local_res18 != 0) {
    uVar11 = 0;
    plVar10 = *(longlong **)(param_1 + 0x3c8);
    local_b8 = 0;
    local_b0 = 0;
    uVar9 = (longlong)*(int *)(param_1 + 0x3d0) & 0x1fffffffffffffff;
    if (plVar10 + *(int *)(param_1 + 0x3d0) < plVar10) {
      uVar9 = uVar11;
    }
    if (uVar9 != 0) {
      do {
        lVar1 = *plVar10;
        if (lVar1 != 0) {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x3d8,local_res10,lVar1);
          uVar3 = local_b0;
          if (((local_res10[0] == -1) ||
              (lVar7 = *(longlong *)(param_1 + 0x3d8) + (longlong)local_res10[0] * 0x18, lVar7 == 0)
              ) || (plVar2 = *(longlong **)(lVar7 + 8), plVar2 == (longlong *)0x0)) {
            FUN_1406788b0(param_1,local_res18 + 0x80,lVar1,&local_b8);
          }
          else {
            lVar7 = (longlong)(int)local_b0;
            iVar4 = (int)local_b0 + 1;
            local_b0 = CONCAT44(local_b0._4_4_,iVar4);
            if (local_b0._4_4_ < iVar4) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_b8,uVar3 & 0xffffffff);
            }
            plVar8 = (longlong *)(lVar7 * 0x40 + local_b8);
            local_80 = 0;
            local_78 = 0;
            local_70 = 0;
            *plVar8 = 0;
            plVar8[1] = 0;
            plVar8[2] = 0;
            plVar8[3] = 0;
            plVar8[4] = 0;
            plVar8[5] = 0;
            plVar8[6] = 0;
            plVar8[7] = 0;
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
            local_48 = 0;
            TArray<FSaveGameUserSetting,FDefaultAllocator>::
            ~TArray<FSaveGameUserSetting,FDefaultAllocator>(&local_50);
            TArray<FSaveGameUserSetting,FDefaultAllocator>::
            ~TArray<FSaveGameUserSetting,FDefaultAllocator>(&local_60);
            if (local_70 != 0) {
              FMemory::Free();
            }
            if (local_80 != 0) {
              FMemory::Free();
            }
            uVar5 = FSoftObjectPath::FSoftObjectPath(local_98,lVar1);
            plVar6 = (longlong *)FSoftObjectPath::ToString(uVar5);
            if (plVar8 != plVar6) {
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              *plVar8 = *plVar6;
              *plVar6 = 0;
              *(int *)(plVar8 + 1) = (int)plVar6[1];
              *(undefined4 *)((longlong)plVar8 + 0xc) = *(undefined4 *)((longlong)plVar6 + 0xc);
              plVar6[1] = 0;
            }
            if (local_a8 != 0) {
              FMemory::Free();
            }
            if (local_90 != 0) {
              FMemory::Free();
            }
            (**(code **)(*plVar2 + 0x278))(plVar2,plVar8);
          }
        }
        plVar10 = plVar10 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar9);
    }
    FUN_142d91d60(local_res18,&local_b8);
    TArray<FControllerIcons,TSizedDefaultAllocator<32>_>::
    ~TArray<FControllerIcons,TSizedDefaultAllocator<32>_>(&local_b8);
  }
  return;
}



// FUNCTION 14067f960 FUN_14067f960 body=935 status=ok
// SIG undefined FUN_14067f960(void)

void FUN_14067f960(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  void *pvVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  void *_Src;
  void *pvVar16;
  undefined1 local_90 [8];
  void *local_88;
  uint local_80;
  uint local_7c;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong local_60;
  
  uVar2 = FSoftObjectPath::FSoftObjectPath(local_68,*(undefined8 *)(param_1 + 0x70));
  plVar3 = (longlong *)FSoftObjectPath::ToString(uVar2,&local_88);
  plVar11 = (longlong *)(param_2 + 0x10);
  if (plVar11 != plVar3) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    *plVar11 = *plVar3;
    *plVar3 = 0;
    *(int *)(param_2 + 0x18) = (int)plVar3[1];
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)((longlong)plVar3 + 0xc);
    plVar3[1] = 0;
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  puVar14 = *(undefined8 **)(param_1 + 0x50);
  puVar15 = puVar14 + (longlong)*(int *)(param_1 + 0x58) * 6;
  for (; puVar14 != puVar15; puVar14 = puVar14 + 6) {
    pvVar12 = (void *)0x0;
    if (*(char *)(puVar14 + 5) != '\0') {
      FSoftObjectPath::FSoftObjectPath(local_68,*puVar14);
      lVar6 = puVar14[3];
      local_88 = (void *)0x0;
      local_7c = 0;
      lVar7 = lVar6 + (longlong)*(int *)(puVar14 + 4) * 0x18;
      _Src = pvVar12;
      pvVar16 = pvVar12;
      for (; iVar9 = (int)pvVar12, lVar6 != lVar7; lVar6 = lVar6 + 0x18) {
        puVar4 = (undefined8 *)FKey::GetFName(lVar6,local_90);
        local_80 = iVar9 + 1;
        if ((int)pvVar16 < (int)local_80) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,pvVar12);
          pvVar16 = (void *)(ulonglong)local_7c;
          _Src = local_88;
        }
        pvVar12 = (void *)(ulonglong)local_80;
        *(undefined8 *)((longlong)_Src + (longlong)iVar9 * 8) = *puVar4;
      }
      uVar2 = FSoftObjectPath::ToString(local_68,local_78);
      iVar1 = *(int *)(param_2 + 0x28);
      *(int *)(param_2 + 0x28) = iVar1 + 1;
      if (*(int *)(param_2 + 0x2c) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2 + 0x20,iVar1);
      }
      lVar7 = (longlong)iVar1 * 0x20 + *(longlong *)(param_2 + 0x20);
      FString::FString(lVar7,uVar2);
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(int *)(lVar7 + 0x18) = iVar9;
      if (iVar9 == 0) {
        *(undefined4 *)(lVar7 + 0x1c) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (lVar7 + 0x10,pvVar12,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(lVar7 + 0x10),_Src,(longlong)iVar9 << 3);
      }
      if (local_78[0] != 0) {
        FMemory::Free();
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
      if (local_60 != 0) {
        FMemory::Free();
      }
    }
  }
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  puVar15 = puVar14 + (longlong)*(int *)(param_1 + 0x68) * 6;
  for (; puVar14 != puVar15; puVar14 = puVar14 + 6) {
    if (*(char *)(puVar14 + 5) != '\0') {
      FSoftObjectPath::FSoftObjectPath(local_68,*puVar14);
      pvVar12 = (void *)0x0;
      lVar6 = puVar14[3];
      uVar13 = 0;
      local_88 = (void *)0x0;
      local_7c = 0;
      lVar7 = lVar6 + (longlong)*(int *)(puVar14 + 4) * 0x28;
      uVar10 = 0;
      if (lVar6 != lVar7) {
        puVar4 = (undefined8 *)(lVar6 + 0x18);
        do {
          puVar5 = (undefined8 *)FKey::GetFName(lVar6,local_90);
          lVar8 = (longlong)(int)uVar10;
          local_80 = uVar10 + 1;
          if ((int)uVar13 < (int)local_80) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_88,uVar10);
            pvVar12 = local_88;
            uVar13 = local_7c;
          }
          lVar6 = lVar6 + 0x28;
          *(undefined8 *)((longlong)pvVar12 + lVar8 * 0x18) = *puVar5;
          *(undefined8 *)((longlong)pvVar12 + lVar8 * 0x18 + 8) = *puVar4;
          puVar5 = puVar4 + 1;
          puVar4 = puVar4 + 5;
          *(undefined4 *)((longlong)pvVar12 + lVar8 * 0x18 + 0x10) = *(undefined4 *)puVar5;
          uVar10 = local_80;
        } while (lVar6 != lVar7);
      }
      uVar2 = FSoftObjectPath::ToString(local_68,local_78);
      iVar9 = *(int *)(param_2 + 0x38);
      *(int *)(param_2 + 0x38) = iVar9 + 1;
      if (*(int *)(param_2 + 0x3c) < iVar9 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2 + 0x30,iVar9);
      }
      lVar7 = (longlong)iVar9 * 0x20 + *(longlong *)(param_2 + 0x30);
      FString::FString(lVar7,uVar2);
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(uint *)(lVar7 + 0x18) = uVar10;
      if (uVar10 == 0) {
        *(undefined4 *)(lVar7 + 0x1c) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(lVar7 + 0x10,uVar10,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(lVar7 + 0x10),pvVar12,(longlong)(int)uVar10 * 0x18)
        ;
      }
      if (local_78[0] != 0) {
        FMemory::Free();
      }
      if (pvVar12 != (void *)0x0) {
        FMemory::Free(pvVar12);
      }
      if (local_60 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14067fd20 FUN_14067fd20 body=53 status=ok
// SIG undefined FUN_14067fd20(void)

void FUN_14067fd20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_14403f308;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14067fd60 FUN_14067fd60 body=53 status=ok
// SIG undefined FUN_14067fd60(void)

void FUN_14067fd60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14403f420;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14067fda0 FUN_14067fda0 body=47 status=ok
// SIG undefined FUN_14067fda0(void)

longlong FUN_14067fda0(void)

{
  if (DAT_146857ad0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857ad0,&PTR_FUN_14622b090);
  }
  return DAT_146857ad0;
}



// FUNCTION 14067fdd0 FUN_14067fdd0 body=53 status=ok
// SIG undefined FUN_14067fdd0(void)

void FUN_14067fdd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_14403f538;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14067fe10 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UUGGameViewportClient::StaticClass(void)

{
  if (DAT_1468579e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputComponent",&DAT_1468579e8,FUN_140684530,0x2f0,
                  0x10000008,0,L"Game",&LAB_140681960,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142956f50,&LAB_140447700,0);
  }
  return DAT_1468579e8;
}



// FUNCTION 14067fec0 FUN_14067fec0 body=53 status=ok
// SIG undefined FUN_14067fec0(void)

void FUN_14067fec0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_14403f650;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14067ff00 FUN_14067ff00 body=47 status=ok
// SIG undefined FUN_14067ff00(void)

longlong FUN_14067ff00(void)

{
  if (DAT_146857ae0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857ae0,&PTR_FUN_14622b190);
  }
  return DAT_146857ae0;
}



// FUNCTION 14067ff30 FUN_14067ff30 body=53 status=ok
// SIG undefined FUN_14067ff30(void)

void FUN_14067ff30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_14403f768;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14067ff70 FUN_14067ff70 body=53 status=ok
// SIG undefined FUN_14067ff70(void)

void FUN_14067ff70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_14403f8b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14067ffb0 FUN_14067ffb0 body=162 status=ok
// SIG undefined FUN_14067ffb0(void)

longlong FUN_14067ffb0(void)

{
  if (DAT_146857950 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputActionReceiverDelegateBinding_Continuous_Vector",
                  &DAT_146857950,FUN_140447710,0x38,0x10000000,0,L"Engine",&LAB_140681920,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140681330,&LAB_140447700,0);
  }
  return DAT_146857950;
}



// FUNCTION 140680060 FUN_140680060 body=53 status=ok
// SIG undefined FUN_140680060(void)

void FUN_140680060(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &PTR_FUN_14403fa10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406800a0 FUN_1406800a0 body=53 status=ok
// SIG undefined FUN_1406800a0(void)

void FUN_1406800a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_14403fb48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406800e0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFGRemoteCallObject::GetPrivateStaticClass(void)

{
  if (DAT_146857b68 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputEventHelpers",&DAT_146857b68,
                  StaticRegisterNativesUFGRemoteCallObject,0x28,0x10000001,0,L"Engine",FUN_1405b6450
                  ,TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                   ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146857b68;
}



// FUNCTION 140680180 FUN_140680180 body=53 status=ok
// SIG undefined FUN_140680180(void)

void FUN_140680180(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14403e7c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406801c0 FUN_1406801c0 body=47 status=ok
// SIG undefined FUN_1406801c0(void)

longlong FUN_1406801c0(void)

{
  if (DAT_146857b60 == 0) {
    FUN_141786440(&DAT_146857b60,&PTR_GetPrivateStaticClass_14403ab00);
  }
  return DAT_146857b60;
}



// FUNCTION 1406801f0 FUN_1406801f0 body=47 status=ok
// SIG undefined FUN_1406801f0(void)

longlong FUN_1406801f0(void)

{
  if (DAT_146857b50 == 0) {
    FUN_141786a30(&DAT_146857b50,&PTR_FUN_14622b4d0);
  }
  return DAT_146857b50;
}



// FUNCTION 140680220 FUN_140680220 body=47 status=ok
// SIG undefined FUN_140680220(void)

longlong FUN_140680220(void)

{
  if (DAT_146857b58 == 0) {
    FUN_141786a30(&DAT_146857b58,&PTR_FUN_14622b510);
  }
  return DAT_146857b58;
}



// FUNCTION 140680270 FUN_140680270 body=53 status=ok
// SIG undefined FUN_140680270(void)

void FUN_140680270(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_14403fc60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1406802b0 FUN_1406802b0 body=162 status=ok
// SIG undefined FUN_1406802b0(void)

longlong FUN_1406802b0(void)

{
  if (DAT_146857970 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputActionReceiverDelegateBinding_Discrete",
                  &DAT_146857970,FUN_140447710,0x38,0x10000000,0,L"Engine",&LAB_140681940,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140681330,&LAB_140447700,0);
  }
  return DAT_146857970;
}



// FUNCTION 140680360 FUN_140680360 body=53 status=ok
// SIG undefined FUN_140680360(void)

void FUN_140680360(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_14403fd78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1406803b0 FUN_1406803b0 body=53 status=ok
// SIG undefined FUN_1406803b0(void)

void FUN_1406803b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_14403feb0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406803f0 FUN_1406803f0 body=162 status=ok
// SIG undefined FUN_1406803f0(void)

longlong FUN_1406803f0(void)

{
  if (DAT_146857b90 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputKeyRebindData",&DAT_146857b90,FUN_140447710,0x40,
                  0x10000001,0,L"Engine",FUN_140681980,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146857b90;
}



// FUNCTION 1406804a0 FUN_1406804a0 body=53 status=ok
// SIG undefined FUN_1406804a0(void)

void FUN_1406804a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_14403e8e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406804e0 FUN_1406804e0 body=162 status=ok
// SIG undefined FUN_1406804e0(void)

longlong FUN_1406804e0(void)

{
  if (DAT_146857ba0 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputKeyRebindData_Button",&DAT_146857ba0,FUN_140447710,
                  0x40,0x10000000,0,L"Engine",FUN_140681a00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1406803f0,&LAB_140447700,0);
  }
  return DAT_146857ba0;
}



// FUNCTION 140680590 FUN_140680590 body=162 status=ok
// SIG undefined FUN_140680590(void)

longlong FUN_140680590(void)

{
  if (DAT_146857bb0 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputKeyRebindData_Axis",&DAT_146857bb0,FUN_140447710,
                  0x40,0x10000000,0,L"Engine",FUN_1406819c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1406803f0,&LAB_140447700,0);
  }
  return DAT_146857bb0;
}



// FUNCTION 140680650 FUN_140680650 body=47 status=ok
// SIG undefined FUN_140680650(void)

longlong FUN_140680650(void)

{
  if (DAT_146857b88 == 0) {
    FUN_141786440(&DAT_146857b88,&PTR_FUN_14403b250);
  }
  return DAT_146857b88;
}



// FUNCTION 140680680 FUN_140680680 body=162 status=ok
// SIG undefined FUN_140680680(void)

longlong FUN_140680680(void)

{
  if (DAT_146857980 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputActionReceiverInterface",&DAT_146857980,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146857980;
}



// FUNCTION 140680770 FUN_140680770 body=162 status=ok
// SIG undefined FUN_140680770(void)

longlong FUN_140680770(void)

{
  if (DAT_146857bc0 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputRebindCategory",&DAT_146857bc0,FUN_140447710,0x70,
                  0x10000000,0,L"Engine",FUN_140681a40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146857bc0;
}



// FUNCTION 140680830 FUN_140680830 body=162 status=ok
// SIG undefined FUN_140680830(void)

longlong FUN_140680830(void)

{
  if (DAT_146857bf0 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputRebindContext",&DAT_146857bf0,FUN_140447710,0x80,
                  0x10000000,0,L"Engine",FUN_140681a80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146857bf0;
}



// FUNCTION 1406808e0 FUN_1406808e0 body=47 status=ok
// SIG undefined FUN_1406808e0(void)

longlong FUN_1406808e0(void)

{
  if (DAT_146857b78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857b78,&PTR_FUN_14622b550);
  }
  return DAT_146857b78;
}



// FUNCTION 140680910 FUN_140680910 body=47 status=ok
// SIG undefined FUN_140680910(void)

longlong FUN_140680910(void)

{
  if (DAT_1468579e0 == 0) {
    FUN_141786440(&DAT_1468579e0,&PTR_StaticClass_14403bcc0);
  }
  return DAT_1468579e0;
}



// FUNCTION 140680940 FUN_140680940 body=47 status=ok
// SIG undefined FUN_140680940(void)

longlong FUN_140680940(void)

{
  if (DAT_1468579c8 == 0) {
    FUN_141786a30(&DAT_1468579c8,&PTR_FUN_146229f20);
  }
  return DAT_1468579c8;
}



// FUNCTION 140680970 FUN_140680970 body=47 status=ok
// SIG undefined FUN_140680970(void)

longlong FUN_140680970(void)

{
  if (DAT_1468579d0 == 0) {
    FUN_141786a30(&DAT_1468579d0,&PTR_FUN_14622a020);
  }
  return DAT_1468579d0;
}



// FUNCTION 1406809a0 FUN_1406809a0 body=47 status=ok
// SIG undefined FUN_1406809a0(void)

longlong FUN_1406809a0(void)

{
  if (DAT_1468579d8 == 0) {
    FUN_141786a30(&DAT_1468579d8,&PTR_FUN_14622a060);
  }
  return DAT_1468579d8;
}



// FUNCTION 1406809d0 FUN_1406809d0 body=47 status=ok
// SIG undefined FUN_1406809d0(void)

longlong FUN_1406809d0(void)

{
  if (DAT_1468578b0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
  }
  return DAT_1468578b0;
}



// FUNCTION 140680a00 FUN_140680a00 body=53 status=ok
// SIG undefined FUN_140680a00(void)

void FUN_140680a00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14403e9f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140680a40 FUN_140680a40 body=53 status=ok
// SIG undefined FUN_140680a40(void)

void FUN_140680a40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_14403eb10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140680a90 FUN_140680a90 body=47 status=ok
// SIG undefined FUN_140680a90(void)

longlong FUN_140680a90(void)

{
  if (DAT_146857a70 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857a70,&PTR_FUN_14622a930);
  }
  return DAT_146857a70;
}



// FUNCTION 140680ac0 FUN_140680ac0 body=53 status=ok
// SIG undefined FUN_140680ac0(void)

void FUN_140680ac0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_14403ed90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140680b00 FUN_140680b00 body=53 status=ok
// SIG undefined FUN_140680b00(void)

void FUN_140680b00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14403eea8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140680b40 FUN_140680b40 body=53 status=ok
// SIG undefined FUN_140680b40(void)

void FUN_140680b40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14403ec28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140680b80 FUN_140680b80 body=53 status=ok
// SIG undefined FUN_140680b80(void)

void FUN_140680b80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144040c80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140680bc0 FUN_140680bc0 body=53 status=ok
// SIG undefined FUN_140680bc0(void)

void FUN_140680bc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_14403efc0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140680c00 FUN_140680c00 body=53 status=ok
// SIG undefined FUN_140680c00(void)

void FUN_140680c00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144040d98;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140680c50 FUN_140680c50 body=53 status=ok
// SIG undefined FUN_140680c50(void)

void FUN_140680c50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_14403f0d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140680c90 FUN_140680c90 body=162 status=ok
// SIG undefined FUN_140680c90(void)

longlong FUN_140680c90(void)

{
  if (DAT_1468578c0 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputAction",&DAT_1468578c0,FUN_140447710,0x30,0x12000001
                  ,0,L"Engine",FUN_1405fc740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468578c0;
}



// FUNCTION 140680d40 FUN_140680d40 body=47 status=ok
// SIG undefined FUN_140680d40(void)

longlong FUN_140680d40(void)

{
  if (DAT_1468578b8 == 0) {
    FUN_141786440(&DAT_1468578b8,&PTR_FUN_14403cb70);
  }
  return DAT_1468578b8;
}



// FUNCTION 140680d80 FUN_140680d80 body=53 status=ok
// SIG undefined FUN_140680d80(void)

void FUN_140680d80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_14402d378;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140680dc0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UDEPRECATED_HasTargetCondition::StaticClass(void)

{
  if (DAT_1468578d0 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputAction_ConsoleCommand",&DAT_1468578d0,FUN_140447710,
                  0x30,0x12000000,0,L"Engine",FUN_1405fc740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140680c90,&LAB_140447700,0);
  }
  return DAT_1468578d0;
}



// FUNCTION 140680e70 FUN_140680e70 body=162 status=ok
// SIG undefined FUN_140680e70(void)

longlong FUN_140680e70(void)

{
  if (DAT_146857a80 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputDevice",&DAT_146857a80,FUN_140447710,0x38,0x10000000
                  ,0,L"Engine",InternalConstructor<UAIDataProvider_QueryParams>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146857a80;
}



// FUNCTION 140680f40 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UDEPRECATED_HasTargetCondition::StaticClass(void)

{
  if (DAT_1468578e0 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputActionCollection",&DAT_1468578e0,FUN_140447710,0x30,
                  0x12000000,0,L"Engine",FUN_1405fc740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468578e0;
}



// FUNCTION 140681000 FUN_140681000 body=162 status=ok
// SIG undefined FUN_140681000(void)

longlong FUN_140681000(void)

{
  if (DAT_1468578f0 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputActionData",&DAT_1468578f0,FUN_140447710,0x38,
                  0x10000001,0,L"Engine",InternalConstructor<UAIDataProvider_QueryParams>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468578f0;
}



// FUNCTION 1406810b0 FUN_1406810b0 body=47 status=ok
// SIG undefined FUN_1406810b0(void)

longlong FUN_1406810b0(void)

{
  if (DAT_1468578e8 == 0) {
    FUN_141786440(&DAT_1468578e8,&PTR_FUN_14403d140);
  }
  return DAT_1468578e8;
}



// FUNCTION 1406810f0 FUN_1406810f0 body=162 status=ok
// SIG undefined FUN_1406810f0(void)

longlong FUN_1406810f0(void)

{
  if (DAT_146857900 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputActionData_Continuous_Vector",&DAT_146857900,
                  FUN_140447710,0x38,0x10000000,0,L"Engine",FUN_140681850,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140681000,&LAB_140447700,0);
  }
  return DAT_146857900;
}



// FUNCTION 1406811b0 FUN_1406811b0 body=162 status=ok
// SIG undefined FUN_1406811b0(void)

longlong FUN_1406811b0(void)

{
  if (DAT_146857910 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputActionData_Discrete",&DAT_146857910,FUN_140447710,
                  0x38,0x10000000,0,L"Engine",FUN_140681850,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140681000,&LAB_140447700,0);
  }
  return DAT_146857910;
}



// FUNCTION 140681280 FUN_140681280 body=151 status=ok
// SIG undefined FUN_140681280(void)

longlong FUN_140681280(void)

{
  if (DAT_146857920 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputActionEventInterpreter",&DAT_146857920,FUN_140447710
                  ,0x50,0x10000005,0,L"Input",InternalConstructor<UAnimationSharingStateProcessor>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146857920;
}



// FUNCTION 140681330 FUN_140681330 body=162 status=ok
// SIG undefined FUN_140681330(void)

longlong FUN_140681330(void)

{
  if (DAT_146857930 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxInputActionReceiverDelegateBinding",&DAT_146857930,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",&LAB_140681900,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDynamicBlueprintBinding::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146857930;
}



// FUNCTION 1406813e0 FUN_1406813e0 body=47 status=ok
// SIG undefined FUN_1406813e0(void)

longlong FUN_1406813e0(void)

{
  if (DAT_146857928 == 0) {
    FUN_141786440(&DAT_146857928,&PTR_FUN_14403d820);
  }
  return DAT_146857928;
}



// FUNCTION 140681420 FUN_140681420 body=162 status=ok
// SIG undefined FUN_140681420(void)

longlong FUN_140681420(void)

{
  if (DAT_146857c00 == 0) {
    FUN_14171ccd0(L"/Script/GbxInput",L"GbxPlayerInput",&DAT_146857c00,FUN_140447710,0x428,
                  0x1000000c,0,L"Input",FUN_140681ad0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140684520,thunk_FUN_1429e18b0,0);
  }
  return DAT_146857c00;
}



// FUNCTION 1406814d0 FUN_1406814d0 body=47 status=ok
// SIG undefined FUN_1406814d0(void)

longlong FUN_1406814d0(void)

{
  if (DAT_146857a90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146857a90,&PTR_FUN_14622abd0);
  }
  return DAT_146857a90;
}



// FUNCTION 140681500 FUN_140681500 body=53 status=ok
// SIG undefined FUN_140681500(void)

void FUN_140681500(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_14403f1f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140681540 FUN_140681540 body=546 status=ok
// SIG undefined FUN_140681540(void)

void FUN_140681540(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FSimpleLinkNavModifier,FDefaultAllocator>::ResizeForCopy(param_1,param_5 + param_3,param_4)
  ;
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    piVar5 = (int *)(param_2 + 0x28);
    puVar2 = (undefined4 *)((longlong)param_1 + 0x2c);
    do {
      *param_1 = 0;
      FUN_140674870(param_1,*(undefined8 *)(piVar5 + -10),piVar5[-8],0,0);
      *(undefined8 *)(puVar2 + -7) = 0;
      FUN_140674730(puVar2 + -7,*(undefined8 *)(piVar5 + -6),piVar5[-4],0,0);
      *(undefined8 *)(puVar2 + -3) = 0;
      iVar6 = *piVar5;
      pvVar1 = *(void **)(piVar5 + -2);
      puVar2[-1] = iVar6;
      if (iVar6 == 0) {
        *puVar2 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2 + -3,iVar6,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar2 + -3),pvVar1,(longlong)iVar6 << 3);
      }
      *(undefined8 *)(puVar2 + 1) = 0;
      iVar6 = piVar5[4];
      puVar4 = *(undefined8 **)(piVar5 + 2);
      puVar2[3] = iVar6;
      if (iVar6 == 0) {
        puVar2[4] = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar2 + 1,iVar6,0);
        puVar3 = *(undefined8 **)(puVar2 + 1);
        do {
          *puVar3 = *puVar4;
          FString::FString(puVar3 + 1,puVar4 + 1);
          puVar3 = puVar3 + 3;
          puVar4 = puVar4 + 3;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *(undefined8 *)(puVar2 + 5) = 0;
      iVar6 = piVar5[8];
      pvVar1 = *(void **)(piVar5 + 6);
      puVar2[7] = iVar6;
      if (iVar6 == 0) {
        puVar2[8] = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 5,iVar6,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar2 + 5),pvVar1,(longlong)iVar6 << 4);
      }
      *(undefined8 *)(puVar2 + 9) = 0;
      iVar6 = piVar5[0xc];
      pvVar1 = *(void **)(piVar5 + 10);
      puVar2[0xb] = iVar6;
      if (iVar6 == 0) {
        puVar2[0xc] = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 9,iVar6,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar2 + 9),pvVar1,(longlong)iVar6 << 4);
      }
      *(undefined8 *)(puVar2 + 0xd) = 0;
      iVar6 = piVar5[0x10];
      pvVar1 = *(void **)(piVar5 + 0xe);
      puVar2[0xf] = iVar6;
      if (iVar6 == 0) {
        puVar2[0x10] = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 0xd,iVar6,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar2 + 0xd),pvVar1,(longlong)iVar6 << 4);
      }
      param_1 = param_1 + 0xe;
      puVar2 = puVar2 + 0x1c;
      piVar5 = piVar5 + 0x1c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140681770 FUN_140681770 body=172 status=ok
// SIG undefined FUN_140681770(void)

void FUN_140681770(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_2 + 8);
    do {
      *param_1 = puVar3[-1];
      param_1[1] = *puVar3;
      lVar2 = puVar3[1];
      param_1[2] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      param_1[3] = puVar3[2];
      puVar1 = puVar3 + 3;
      puVar3 = puVar3 + 5;
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)puVar1;
      param_1 = param_1 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140681820 InternalConstructor<UAIDataProvider_QueryParams> body=47 status=ok
// SIG undefined InternalConstructor<UAIDataProvider_QueryParams>(void)

void InternalConstructor<UAIDataProvider_QueryParams>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_14403e2c0;
    puVar1[6] = 0;
  }
  return;
}



// FUNCTION 140681850 FUN_140681850 body=47 status=ok
// SIG undefined FUN_140681850(void)

void FUN_140681850(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    puVar1[6] = 0;
    *puVar1 = &PTR_FUN_14403e2c0;
  }
  return;
}



// FUNCTION 140681880 InternalConstructor<UAnimationSharingStateProcessor> body=127 status=ok
// SIG undefined InternalConstructor<UAnimationSharingStateProcessor>(void)

void InternalConstructor<UAnimationSharingStateProcessor>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_14403e540;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x4c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 8,0);
    }
    if ((undefined2 *)puVar1[8] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[8] = 0;
    }
    *(undefined4 *)(puVar1 + 6) = 0;
  }
  return;
}



// FUNCTION 140681980 FUN_140681980 body=51 status=ok
// SIG undefined FUN_140681980(void)

void FUN_140681980(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR_FUN_14403ffc8;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 2;
  }
  return;
}



// FUNCTION 1406819c0 FUN_1406819c0 body=51 status=ok
// SIG undefined FUN_1406819c0(void)

void FUN_1406819c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    puVar1[6] = 0;
    *puVar1 = &PTR_FUN_1440404c8;
    *(undefined1 *)(puVar1 + 7) = 2;
  }
  return;
}



// FUNCTION 140681a00 FUN_140681a00 body=51 status=ok
// SIG undefined FUN_140681a00(void)

void FUN_140681a00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    puVar1[6] = 0;
    *puVar1 = &PTR_FUN_144040248;
    *(undefined1 *)(puVar1 + 7) = 2;
  }
  return;
}



// FUNCTION 140681a40 FUN_140681a40 body=64 status=ok
// SIG undefined FUN_140681a40(void)

void FUN_140681a40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144040778;
    FText::FText(puVar1 + 6);
    FText::FText(puVar1 + 9);
    return;
  }
  return;
}



// FUNCTION 140681a80 FUN_140681a80 body=79 status=ok
// SIG undefined FUN_140681a80(void)

void FUN_140681a80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440409f0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 2;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *(undefined2 *)(puVar1 + 0xf) = 0;
  }
  return;
}



// FUNCTION 140681ad0 FUN_140681ad0 body=111 status=ok
// SIG undefined FUN_140681ad0(void)

void FUN_140681ad0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14289c820(puVar1);
    *puVar1 = &PTR_FUN_144040eb0;
    puVar1[0x79] = 0;
    puVar1[0x7a] = 0;
    puVar1[0x7b] = 0;
    puVar1[0x7c] = 0;
    puVar1[0x7f] = 0;
    puVar1[0x80] = 0;
    *(undefined4 *)(puVar1 + 0x81) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x40c) = 0;
    puVar1[0x83] = 0;
    *(undefined4 *)(puVar1 + 0x84) = 0;
  }
  return;
}



// FUNCTION 140681b40 FUN_140681b40 body=135 status=ok
// SIG undefined FUN_140681b40(void)

void FUN_140681b40(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 8);
    do {
      *puVar2 = &PTR__scalar_deleting_destructor__144038610;
      FUN_140676620(puVar2 + 2);
      *puVar2 = &PTR_FUN_1440385e0;
      puVar2 = puVar2 + 6;
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



// FUNCTION 140681bd0 FUN_140681bd0 body=135 status=ok
// SIG undefined FUN_140681bd0(void)

void FUN_140681bd0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 8);
    do {
      *puVar2 = &PTR__scalar_deleting_destructor__1440385f8;
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(puVar2 + 2);
      *puVar2 = &PTR_FUN_1440385e0;
      puVar2 = puVar2 + 6;
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



// FUNCTION 140681c60 ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_> body=159 status=ok
// SIG undefined ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>(void)

void TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>::
     ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x20);
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



// FUNCTION 140681d00 ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 140681d70 ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=396 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

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
      if (bVar4) goto LAB_140681e31;
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
LAB_140681e31:
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
      TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>::
      ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>
                (*param_1 + ((longlong)iStack_1c * 5 + 1) * 8);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
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



// FUNCTION 140681f00 FUN_140681f00 body=96 status=ok
// SIG undefined FUN_140681f00(void)

void FUN_140681f00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  FUN_1406764f0(param_1 + 0x10);
  FUN_1406766c0(param_1);
  return;
}



// FUNCTION 140681f60 FUN_140681f60 body=633 status=ok
// SIG undefined FUN_140681f60(void)

void FUN_140681f60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_1 + 0x3b0);
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x2b8,0);
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  FUN_140683ca0(param_1 + 0x260,0);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 600) = 0;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  FUN_140683f10(param_1 + 0x1c0,0);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,EKeys::FCategoryDisplayInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x170,0);
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>::
  ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>(param_1 + 0x150);
  TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>::
  ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x128);
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x10);
    do {
      if (plVar7[1] != 0) {
        FMemory::Free();
      }
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
      plVar7 = plVar7 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x120);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb0);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1406821e0 FUN_1406821e0 body=640 status=ok
// SIG undefined FUN_1406821e0(void)

undefined8 * FUN_1406821e0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  int iVar6;
  
  if (param_1 != param_2) {
    puVar2 = (undefined8 *)*param_1;
    for (iVar6 = *(int *)(param_1 + 1); iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar2 = &PTR__scalar_deleting_destructor__1440385f8;
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(puVar2 + 2);
      *puVar2 = &PTR_FUN_1440385e0;
      puVar2 = puVar2 + 4;
    }
    FUN_140674870(param_1,*param_2,*(undefined4 *)(param_2 + 1),
                  *(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  puVar2 = param_1 + 2;
  if (puVar2 != param_2 + 2) {
    puVar3 = (undefined8 *)*puVar2;
    for (iVar6 = *(int *)(param_1 + 3); iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar3 = &PTR__scalar_deleting_destructor__144038610;
      FUN_140676620(puVar3 + 2);
      *puVar3 = &PTR_FUN_1440385e0;
      puVar3 = puVar3 + 4;
    }
    FUN_140674730(puVar2,param_2[2],*(undefined4 *)(param_2 + 3),
                  *(undefined4 *)((longlong)param_1 + 0x1c),0);
  }
  puVar2 = param_1 + 4;
  if (puVar2 != param_2 + 4) {
    iVar6 = *(int *)(param_2 + 5);
    pvVar4 = (void *)param_2[4];
    *(int *)(param_1 + 5) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0x2c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2,iVar6);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar4,(longlong)iVar6 << 3);
    }
  }
  plVar1 = param_1 + 6;
  if (plVar1 != param_2 + 6) {
    iVar6 = *(int *)(param_1 + 7);
    if (iVar6 != 0) {
      plVar5 = (longlong *)(*plVar1 + 8);
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 3;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_2 + 7);
    puVar2 = (undefined8 *)param_2[6];
    *(int *)(param_1 + 7) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0x3c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
      puVar3 = (undefined8 *)*plVar1;
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar3 = *puVar2;
        FString::FString(puVar3 + 1,puVar2 + 1);
        puVar3 = puVar3 + 3;
        puVar2 = puVar2 + 3;
      }
    }
  }
  puVar2 = param_1 + 8;
  if (puVar2 != param_2 + 8) {
    iVar6 = *(int *)(param_2 + 9);
    pvVar4 = (void *)param_2[8];
    *(int *)(param_1 + 9) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0x4c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2,iVar6);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar4,(longlong)iVar6 << 4);
    }
  }
  puVar2 = param_1 + 10;
  if (puVar2 != param_2 + 10) {
    iVar6 = *(int *)(param_2 + 0xb);
    pvVar4 = (void *)param_2[10];
    *(int *)(param_1 + 0xb) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0x5c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2,iVar6);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar4,(longlong)iVar6 << 4);
    }
  }
  puVar2 = param_1 + 0xc;
  if (puVar2 != param_2 + 0xc) {
    iVar6 = *(int *)(param_2 + 0xd);
    pvVar4 = (void *)param_2[0xc];
    *(int *)(param_1 + 0xd) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0x6c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2,iVar6);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar4,(longlong)iVar6 << 4);
    }
  }
  return param_1;
}



// FUNCTION 140682460 FUN_140682460 body=192 status=ok
// SIG undefined FUN_140682460(void)

longlong FUN_140682460(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  if (plVar1 != (longlong *)(param_2 + 0x10)) {
    iVar7 = *(int *)(param_1 + 0x18);
    if (iVar7 != 0) {
      plVar8 = (longlong *)(*plVar1 + 0x10);
      do {
        plVar5 = (longlong *)*plVar8;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar8 = plVar8 + 5;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_140681770(plVar1,*(longlong *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18),
                  *(undefined4 *)(param_1 + 0x1c),0);
  }
  return param_1;
}



// FUNCTION 140682520 FUN_140682520 body=260 status=ok
// SIG undefined FUN_140682520(void)

longlong FUN_140682520(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  if (plVar1 != (longlong *)(param_2 + 0x10)) {
    iVar9 = *(int *)(param_1 + 0x18);
    if (iVar9 != 0) {
      plVar10 = (longlong *)(*plVar1 + 0x10);
      do {
        plVar5 = (longlong *)*plVar10;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar10 = plVar10 + 3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = *(int *)(param_2 + 0x18);
    lVar6 = *(longlong *)(param_2 + 0x10);
    *(int *)(param_1 + 0x18) = iVar9;
    if ((iVar9 == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar9);
      puVar8 = (undefined8 *)*plVar1;
      if (iVar9 != 0) {
        puVar7 = (undefined8 *)(lVar6 + 8);
        do {
          *puVar8 = puVar7[-1];
          puVar8[1] = *puVar7;
          lVar6 = puVar7[1];
          puVar8[2] = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
          puVar8 = puVar8 + 3;
          puVar7 = puVar7 + 3;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 140682630 FUN_140682630 body=249 status=ok
// SIG undefined FUN_140682630(void)

longlong FUN_140682630(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  if (puVar1 != (undefined8 *)(param_2 + 0x10)) {
    iVar2 = *(int *)(param_2 + 0x18);
    pvVar3 = *(void **)(param_2 + 0x10);
    *(int *)(param_1 + 0x18) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    else {
      TArray<FDragonData_FootData,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 * 0x38);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  if (puVar1 != (undefined8 *)(param_2 + 0x30)) {
    iVar2 = *(int *)(param_2 + 0x38);
    pvVar3 = *(void **)(param_2 + 0x30);
    *(int *)(param_1 + 0x38) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x3c) == 0)) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
    }
  }
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
  return param_1;
}



// FUNCTION 140682730 FUN_140682730 body=70 status=ok
// SIG undefined FUN_140682730(void)

longlong FUN_140682730(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140682780 `scalar_deleting_destructor' body=184 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UItemUpgradeCategory::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x38);
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
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 140682840 FUN_140682840 body=82 status=ok
// SIG undefined FUN_140682840(void)

longlong FUN_140682840(longlong param_1,ulonglong param_2)

{
  FUN_140681b40(param_1 + 0x60);
  FUN_140681bd0(param_1 + 0x50);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1406828a0 FUN_1406828a0 body=122 status=ok
// SIG undefined FUN_1406828a0(void)

longlong FUN_1406828a0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x420) = 0;
  if (*(longlong *)(param_1 + 0x418) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x3d8);
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    FMemory::Free();
  }
  FUN_140681f60(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x428);
  }
  return param_1;
}



// FUNCTION 140682b50 FUN_140682b50 body=275 status=ok
// SIG undefined FUN_140682b50(void)

undefined8 FUN_140682b50(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar3 = (int)param_2[1];
      if (iVar3 != 0) {
        lVar1 = *param_2 + 8;
        do {
          FUN_140676450(lVar1);
          lVar1 = lVar1 + 0x18;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = (int)param_3[1];
      lVar1 = *param_3;
      *(int *)(param_2 + 1) = iVar3;
      if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_2,iVar3);
        puVar4 = (undefined8 *)*param_2;
        if (iVar3 != 0) {
          puVar2 = (undefined8 *)(lVar1 + 8);
          do {
            *puVar4 = puVar2[-1];
            puVar4[1] = 0;
            FUN_140681540(puVar4 + 1,*puVar2,*(undefined4 *)(puVar2 + 1),0,0);
            puVar4 = puVar4 + 3;
            puVar2 = puVar2 + 3;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 140682c70 FUN_140682c70 body=261 status=ok
// SIG undefined FUN_140682c70(void)

undefined8 FUN_140682c70(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_4 != 0) {
    plVar3 = (longlong *)(param_3 + 8);
    do {
      plVar1 = param_2 + 1;
      *param_2 = plVar3[-1];
      if (plVar1 != plVar3) {
        lVar2 = *plVar1;
        for (iVar4 = (int)param_2[2]; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*(longlong *)(lVar2 + 0x60) != 0) {
            FMemory::Free();
          }
          if (*(longlong *)(lVar2 + 0x50) != 0) {
            FMemory::Free();
          }
          if (*(longlong *)(lVar2 + 0x40) != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(lVar2 + 0x30);
          if (*(longlong *)(lVar2 + 0x20) != 0) {
            FMemory::Free();
          }
          FUN_1406764f0(lVar2 + 0x10);
          FUN_1406766c0(lVar2);
          lVar2 = lVar2 + 0x70;
        }
        FUN_140681540(plVar1,*plVar3,(int)plVar3[1],*(undefined4 *)((longlong)param_2 + 0x14),0);
      }
      plVar3 = plVar3 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140682d80 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FNodeHierarchyData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1406821e0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140682dd0 FUN_140682dd0 body=250 status=ok
// SIG undefined FUN_140682dd0(void)

undefined8 FUN_140682dd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (param_4 != 0) {
    plVar9 = (longlong *)(param_3 + 0x10);
    do {
      plVar1 = (longlong *)(param_2 + 0x10);
      *(longlong *)(param_2 + 8) = plVar9[-1];
      if (plVar1 != plVar9) {
        iVar7 = *(int *)(param_2 + 0x18);
        if (iVar7 != 0) {
          plVar8 = (longlong *)(*plVar1 + 0x10);
          do {
            plVar5 = (longlong *)*plVar8;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              lVar6 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar3 = (int *)((longlong)plVar5 + 0xc);
                iVar4 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar8 = plVar8 + 5;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        FUN_140681770(plVar1,*plVar9,(int)plVar9[1],*(undefined4 *)(param_2 + 0x1c),0);
      }
      plVar9 = plVar9 + 4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x20;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140682ed0 Copy body=89 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FGColorSwatchEntry>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FKey::operator=(param_2,param_3 + param_2);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18 + param_2);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20 + param_2);
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140682f30 FUN_140682f30 body=338 status=ok
// SIG undefined FUN_140682f30(void)

undefined8 FUN_140682f30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (param_4 != 0) {
    plVar11 = (longlong *)(param_3 + 0x10);
    do {
      plVar1 = (longlong *)(param_2 + 0x10);
      *(longlong *)(param_2 + 8) = plVar11[-1];
      if (plVar1 != plVar11) {
        iVar9 = *(int *)(param_2 + 0x18);
        if (iVar9 != 0) {
          plVar10 = (longlong *)(*plVar1 + 0x10);
          do {
            plVar5 = (longlong *)*plVar10;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              lVar6 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar3 = (int *)((longlong)plVar5 + 0xc);
                iVar4 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar10 = plVar10 + 3;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        iVar9 = (int)plVar11[1];
        lVar6 = *plVar11;
        *(int *)(param_2 + 0x18) = iVar9;
        if ((iVar9 == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar9);
          puVar8 = (undefined8 *)*plVar1;
          if (iVar9 != 0) {
            puVar7 = (undefined8 *)(lVar6 + 8);
            do {
              *puVar8 = puVar7[-1];
              puVar8[1] = *puVar7;
              lVar6 = puVar7[1];
              puVar8[2] = lVar6;
              if (lVar6 != 0) {
                LOCK();
                *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
                UNLOCK();
              }
              puVar8 = puVar8 + 3;
              puVar7 = puVar7 + 3;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
      }
      plVar11 = plVar11 + 4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x20;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140683090 FUN_140683090 body=314 status=ok
// SIG undefined FUN_140683090(void)

undefined8 FUN_140683090(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  
  if (param_4 != 0) {
    piVar5 = (int *)(param_3 + 0x38);
    do {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(piVar5 + -0xc);
      piVar1 = (int *)(param_2 + 0x10);
      if (piVar1 != piVar5 + -10) {
        iVar3 = piVar5[-8];
        pvVar4 = *(void **)(piVar5 + -10);
        *(int *)(param_2 + 0x18) = iVar3;
        if ((iVar3 == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        else {
          TArray<FDragonData_FootData,FDefaultAllocator>::ResizeForCopy(piVar1,iVar3);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar4,(longlong)iVar3 * 0x38);
        }
      }
      piVar1 = (int *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(piVar5 + -6);
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(piVar5 + -4);
      if (piVar1 != piVar5 + -2) {
        iVar3 = *piVar5;
        pvVar4 = *(void **)(piVar5 + -2);
        *(int *)(param_2 + 0x38) = iVar3;
        if ((iVar3 == 0) && (*(int *)(param_2 + 0x3c) == 0)) {
          *(undefined4 *)(param_2 + 0x3c) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar3);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar4,(longlong)iVar3 << 3);
        }
      }
      *(char *)(param_2 + 0x40) = (char)piVar5[2];
      *(undefined1 *)(param_2 + 0x41) = *(undefined1 *)((longlong)piVar5 + 9);
      *(undefined1 *)(param_2 + 0x42) = *(undefined1 *)((longlong)piVar5 + 10);
      puVar2 = (undefined1 *)((longlong)piVar5 + 0xb);
      piVar5 = piVar5 + 0x12;
      *(undefined1 *)(param_2 + 0x43) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x48;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140683240 FUN_140683240 body=114 status=ok
// SIG undefined FUN_140683240(void)

undefined8 FUN_140683240(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x68);
    do {
      FUN_140682630(puVar1 + -0xd,param_3 + -0x68 + (longlong)puVar1);
      FUN_140682460(puVar1 + -4,param_3 + -0x20 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1 = puVar1 + 0xe;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1406832c0 FUN_1406832c0 body=129 status=ok
// SIG undefined FUN_1406832c0(void)

undefined8 FUN_1406832c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x68);
    do {
      FUN_140682630(puVar1 + -0xd,param_3 + -0x68 + (longlong)puVar1);
      FUN_140682520(puVar1 + -4,param_3 + -0x20 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_3 + 0xc + (longlong)puVar1);
      puVar1 = puVar1 + 0xf;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140683350 FUN_140683350 body=144 status=ok
// SIG undefined FUN_140683350(void)

undefined8 FUN_140683350(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x68);
    do {
      FUN_140682630(puVar1 + -0xd,param_3 + -0x68 + (longlong)puVar1);
      FUN_140682520(puVar1 + -4,param_3 + -0x20 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_3 + 0xc + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_3 + 0x10 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_3 + 0x14 + (longlong)puVar1);
      puVar1 = puVar1 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1406833e0 FUN_1406833e0 body=182 status=ok
// SIG undefined FUN_1406833e0(void)

undefined8 FUN_1406833e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x68);
    do {
      FUN_140682630(puVar1 + -0xd,param_3 + -0x68 + (longlong)puVar1);
      FUN_140682520(puVar1 + -4,param_3 + -0x20 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_3 + 0xc + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_3 + 0x10 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_3 + 0x14 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_3 + 0x18 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_3 + 0x20 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_3 + 0x24 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_3 + 0x28 + (longlong)puVar1);
      puVar1 = puVar1 + 0x13;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1406834d0 FUN_1406834d0 body=106 status=ok
// SIG undefined FUN_1406834d0(void)

undefined8 FUN_1406834d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x28);
    do {
      *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + param_3 + -0x28);
      FUN_140682460(puVar1 + -0x20,puVar1 + param_3 + -0x20);
      *puVar1 = puVar1[param_3];
      puVar1 = puVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140683540 FUN_140683540 body=106 status=ok
// SIG undefined FUN_140683540(void)

undefined8 FUN_140683540(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x28);
    do {
      *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + param_3 + -0x28);
      FUN_140682520(puVar1 + -0x20,puVar1 + param_3 + -0x20);
      *puVar1 = puVar1[param_3];
      puVar1 = puVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1406835b0 Destruct body=90 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FAssetBundleData>::Destruct(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  iVar2 = (int)param_2[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FUN_140676450(lVar1);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_2;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140683630 FUN_140683630 body=77 status=ok
// SIG undefined FUN_140683630(void)

void FUN_140683630(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_2 + 0x10);
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



// FUNCTION 140683680 FUN_140683680 body=46 status=ok
// SIG undefined FUN_140683680(void)

void FUN_140683680(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 8) = &PTR__scalar_deleting_destructor__144038610;
  FUN_140676620(param_2 + 0x18);
  *(undefined ***)(param_2 + 8) = &PTR_FUN_1440385e0;
  return;
}



// FUNCTION 1406836b0 FUN_1406836b0 body=46 status=ok
// SIG undefined FUN_1406836b0(void)

void FUN_1406836b0(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 8) = &PTR__scalar_deleting_destructor__1440385f8;
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_2 + 0x18);
  *(undefined ***)(param_2 + 8) = &PTR_FUN_1440385e0;
  return;
}



// FUNCTION 1406836e0 FUN_1406836e0 body=85 status=ok
// SIG undefined FUN_1406836e0(void)

void FUN_1406836e0(void)

{
  if (DAT_146857788 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    DAT_146857788 = GetStaticEnum(FUN_140685610,DAT_1468578b0,L"EGbxButtonEvent");
  }
  return;
}



// FUNCTION 140683740 FUN_140683740 body=85 status=ok
// SIG undefined FUN_140683740(void)

void FUN_140683740(void)

{
  if (DAT_146857768 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    DAT_146857768 =
         GetStaticEnum(FUN_140685640,DAT_1468578b0,L"EGbxInputEvent_Button_PressHoldRelease_Events")
    ;
  }
  return;
}



// FUNCTION 1406837a0 FUN_1406837a0 body=85 status=ok
// SIG undefined FUN_1406837a0(void)

void FUN_1406837a0(void)

{
  if (DAT_146857770 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    DAT_146857770 =
         GetStaticEnum(FUN_140685670,DAT_1468578b0,L"EGbxInputEvent_Button_PressPulse_Events");
  }
  return;
}



// FUNCTION 140683800 FUN_140683800 body=85 status=ok
// SIG undefined FUN_140683800(void)

void FUN_140683800(void)

{
  if (DAT_146857778 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    DAT_146857778 =
         GetStaticEnum(FUN_1406856a0,DAT_1468578b0,L"EGbxInputEvent_Button_PressRelease_Events");
  }
  return;
}



// FUNCTION 140683860 FUN_140683860 body=85 status=ok
// SIG undefined FUN_140683860(void)

void FUN_140683860(void)

{
  if (DAT_146857780 == 0) {
    if (DAT_1468578b0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468578b0,&PTR_s__Script_GbxInput_14403e270);
    }
    DAT_146857780 = GetStaticEnum(FUN_1406856d0,DAT_1468578b0,L"EGbxInputRebindPlatformSupportType")
    ;
  }
  return;
}



// FUNCTION 1406838c0 Empty body=482 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar4 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar6) goto LAB_140683994;
      uVar7 = puVar10[lVar8 + 1];
    }
    uStack_64 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_54 = (iStack_50 - iVar9) + 0x1f;
    if (iVar4 < iStack_54) {
LAB_140683994:
      iStack_54 = iVar4;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar4) {
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iStack_2c * 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar7 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140683ab0 Empty body=485 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,EKeys::FCategoryDisplayInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar4 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar6) goto LAB_140683b84;
      uVar7 = puVar10[lVar8 + 1];
    }
    uStack_64 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_54 = (iStack_50 - iVar9) + 0x1f;
    if (iVar4 < iStack_54) {
LAB_140683b84:
      iStack_54 = iVar4;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar4) {
    do {
      plVar5 = *(longlong **)((longlong)iStack_2c * 0x30 + *param_1 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar7 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140683ca0 FUN_140683ca0 body=616 status=ok
// SIG undefined FUN_140683ca0(void)

void FUN_140683ca0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar5 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar5 != 0) {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar7 = *puVar12;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar11 = local_78 + 1;
      bVar6 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar11;
      if (bVar6) goto LAB_140683d74;
      uVar7 = puVar12[lVar8 + 1];
    }
    uStack_74 = -uVar7 & uVar7;
    iVar11 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    iStack_64 = (iStack_60 - iVar11) + 0x1f;
    if (iVar5 < iStack_64) {
LAB_140683d74:
      iStack_64 = iVar5;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar5) {
    do {
      lVar9 = 5;
      lVar10 = (longlong)iStack_3c * 0xf0 + *param_1;
      lVar8 = lVar10 + 0xd8;
      do {
        plVar2 = (longlong *)(lVar8 + -0x10);
        lVar8 = lVar8 + -0x10;
        lVar9 = lVar9 + -1;
        if (*plVar2 != 0) {
          FMemory::Free();
        }
      } while (lVar9 != 0);
      lVar9 = 5;
      lVar8 = lVar10 + 0x88;
      do {
        plVar2 = (longlong *)(lVar8 + -0x10);
        lVar8 = lVar8 + -0x10;
        lVar9 = lVar9 + -1;
        if (*plVar2 != 0) {
          FMemory::Free();
        }
      } while (lVar9 != 0);
      plVar2 = *(longlong **)(lVar10 + 0x10);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar2 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar4 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar7 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140683f10 FUN_140683f10 body=517 status=ok
// SIG undefined FUN_140683f10(void)

void FUN_140683f10(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar4 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = *puVar11;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar8 == 0) {
      lVar9 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar10 = local_78 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar10;
      if (bVar6) goto LAB_140683fe4;
      uVar8 = puVar11[lVar9 + 1];
    }
    uStack_74 = -uVar8 & uVar8;
    iVar10 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_64 = (iStack_60 - iVar10) + 0x1f;
    if (iVar4 < iStack_64) {
LAB_140683fe4:
      iStack_64 = iVar4;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar4) {
    do {
      lVar9 = (longlong)iStack_3c * 0x40 + *param_1;
      plVar5 = *(longlong **)(lVar9 + 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>::
      ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>(lVar9 + 8);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar8 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar8) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar8;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140684120 FUN_140684120 body=6 status=ok
// SIG undefined FUN_140684120(void)

undefined8 FUN_140684120(void)

{
  return 0xdc7b76c1;
}



// FUNCTION 140684130 FUN_140684130 body=6 status=ok
// SIG undefined FUN_140684130(void)

undefined8 FUN_140684130(void)

{
  return 0x5fea195c;
}



// FUNCTION 140684140 FUN_140684140 body=6 status=ok
// SIG undefined FUN_140684140(void)

undefined8 FUN_140684140(void)

{
  return 0xc64e08d4;
}



// FUNCTION 140684150 FUN_140684150 body=6 status=ok
// SIG undefined FUN_140684150(void)

undefined8 FUN_140684150(void)

{
  return 0xa228211a;
}



// FUNCTION 140684160 FUN_140684160 body=6 status=ok
// SIG undefined FUN_140684160(void)

undefined8 FUN_140684160(void)

{
  return 0x878b8b8a;
}



// FUNCTION 140684170 FUN_140684170 body=6 status=ok
// SIG undefined FUN_140684170(void)

undefined8 FUN_140684170(void)

{
  return 0xead5d69d;
}



// FUNCTION 140684180 FUN_140684180 body=6 status=ok
// SIG undefined FUN_140684180(void)

undefined8 FUN_140684180(void)

{
  return 0x7cd6ade6;
}



// FUNCTION 140684190 FUN_140684190 body=6 status=ok
// SIG undefined FUN_140684190(void)

undefined8 FUN_140684190(void)

{
  return 0xfa4d49;
}



// FUNCTION 1406841a0 FUN_1406841a0 body=6 status=ok
// SIG undefined FUN_1406841a0(void)

undefined8 FUN_1406841a0(void)

{
  return 0x199cb273;
}



// FUNCTION 1406841b0 FUN_1406841b0 body=6 status=ok
// SIG undefined FUN_1406841b0(void)

undefined8 FUN_1406841b0(void)

{
  return 0x38410104;
}



// FUNCTION 1406841c0 FUN_1406841c0 body=6 status=ok
// SIG undefined FUN_1406841c0(void)

undefined8 FUN_1406841c0(void)

{
  return 0x6d6ace;
}



// FUNCTION 1406841d0 FUN_1406841d0 body=6 status=ok
// SIG undefined FUN_1406841d0(void)

undefined8 FUN_1406841d0(void)

{
  return 0xc3f8831f;
}



// FUNCTION 1406841e0 FUN_1406841e0 body=6 status=ok
// SIG undefined FUN_1406841e0(void)

undefined8 FUN_1406841e0(void)

{
  return 0x444a33b9;
}



// FUNCTION 1406841f0 FUN_1406841f0 body=6 status=ok
// SIG undefined FUN_1406841f0(void)

undefined8 FUN_1406841f0(void)

{
  return 0xd9f583c1;
}



// FUNCTION 140684200 FUN_140684200 body=6 status=ok
// SIG undefined FUN_140684200(void)

undefined8 FUN_140684200(void)

{
  return 0x1b7e082b;
}



// FUNCTION 140684210 FUN_140684210 body=6 status=ok
// SIG undefined FUN_140684210(void)

undefined8 FUN_140684210(void)

{
  return 0x31208aa7;
}



// FUNCTION 140684220 FUN_140684220 body=6 status=ok
// SIG undefined FUN_140684220(void)

undefined8 FUN_140684220(void)

{
  return 0x56698c83;
}



// FUNCTION 140684230 FUN_140684230 body=6 status=ok
// SIG undefined FUN_140684230(void)

undefined8 FUN_140684230(void)

{
  return 0x2bdb1971;
}



// FUNCTION 140684240 FUN_140684240 body=6 status=ok
// SIG undefined FUN_140684240(void)

undefined8 FUN_140684240(void)

{
  return 0x5d08c31d;
}



// FUNCTION 140684250 FUN_140684250 body=6 status=ok
// SIG undefined FUN_140684250(void)

undefined8 FUN_140684250(void)

{
  return 0x29228bea;
}



// FUNCTION 140684260 FUN_140684260 body=6 status=ok
// SIG undefined FUN_140684260(void)

undefined8 FUN_140684260(void)

{
  return 0x84218940;
}



// FUNCTION 140684270 FUN_140684270 body=6 status=ok
// SIG undefined FUN_140684270(void)

undefined8 FUN_140684270(void)

{
  return 0xe1d43b77;
}



// FUNCTION 140684280 FUN_140684280 body=6 status=ok
// SIG undefined FUN_140684280(void)

undefined8 FUN_140684280(void)

{
  return 0x212ab2b2;
}



// FUNCTION 140684290 FUN_140684290 body=6 status=ok
// SIG undefined FUN_140684290(void)

undefined8 FUN_140684290(void)

{
  return 0xbb909fab;
}


