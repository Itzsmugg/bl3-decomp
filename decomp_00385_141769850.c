// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141769850 FUN_141769850 body=52 status=ok
// SIG undefined FUN_141769850(void)

undefined8 FUN_141769850(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 141769890 FUN_141769890 body=52 status=ok
// SIG undefined FUN_141769890(void)

undefined8 FUN_141769890(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1417698f0 FUN_1417698f0 body=261 status=ok
// SIG undefined FUN_1417698f0(void)

int FUN_1417698f0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  
  iVar4 = FUN_141769b40(param_1[2],param_1 + 4);
  uVar2 = *(uint *)(param_1[1] + 0x38) >> 9;
  uVar3 = *(uint *)(*param_1 + 0x38) >> 9;
  _Dst = (void *)((longlong)((int)param_1[7] * iVar4) + *(longlong *)param_1[2]);
  if (((uVar3 & 1) != 0) || ((uVar2 & 1) != 0)) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)*(int *)((longlong)param_1 + 0x2c));
    if ((uVar3 & 1) != 0) goto LAB_14176999b;
  }
  plVar1 = (longlong *)*param_1;
  if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar1 + 0x330))();
  }
  else {
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)*(int *)((longlong)plVar1 + 0x44) + (longlong)_Dst),0,
               (longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
  }
LAB_14176999b:
  if ((uVar2 & 1) == 0) {
    plVar1 = (longlong *)param_1[1];
    if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
      (**(code **)(*plVar1 + 0x330))
                (plVar1,(longlong)*(int *)((longlong)plVar1 + 0x44) + (longlong)_Dst);
    }
    else {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)*(int *)((longlong)plVar1 + 0x44) + (longlong)_Dst),0,
                 (longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
    }
  }
  return iVar4;
}



// FUNCTION 141769a00 FUN_141769a00 body=169 status=ok
// SIG undefined FUN_141769a00(void)

int FUN_141769a00(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  
  iVar2 = FUN_141769b40(param_1[1],param_1 + 2);
  plVar1 = (longlong *)*param_1;
  _Dst = (void *)((longlong)((int)param_1[5] * iVar2) + *(longlong *)param_1[1]);
  if (((ulonglong)plVar1[7] >> 9 & 1) != 0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)*(int *)((longlong)param_1 + 0x1c));
    return iVar2;
  }
  if (((ulonglong)plVar1[7] >> 9 & 1) != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)*(int *)((longlong)plVar1 + 0x44) + (longlong)_Dst),0,
               (longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
    return iVar2;
  }
  (**(code **)(*plVar1 + 0x330))
            (plVar1,(longlong)*(int *)((longlong)plVar1 + 0x44) + (longlong)_Dst);
  return iVar2;
}



// FUNCTION 141769ab0 AddReferencedObjects body=56 status=ok
// SIG undefined AddReferencedObjects(void)

void USoftClassProperty::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x78,param_1,0);
  UArrayProperty::AddReferencedObjects(param_1,param_2);
  return;
}



// FUNCTION 141769af0 AddReferencedObjects body=75 status=ok
// SIG undefined AddReferencedObjects(void)

void UMapProperty::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x70,param_1,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x78,param_1,0);
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 141769b40 FUN_141769b40 body=276 status=ok
// SIG undefined FUN_141769b40(void)

int FUN_141769b40(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      FScriptArray::ResizeGrow(param_1,iVar5,uVar4);
    }
    iVar1 = (int)param_1[5];
    *(int *)(param_1 + 5) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x2c) < iVar1 + 1) {
      FScriptBitArray::ReallocGrow(param_1 + 2,iVar1);
    }
    plVar6 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar6 = param_1 + 2;
    }
    puVar2 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar2 = *puVar2 & ~(1 << ((byte)iVar1 & 0x1f));
  }
  else {
    iVar5 = (int)param_1[6];
    iVar3 = *(int *)((longlong)(*(int *)(param_2 + 0x18) * iVar5) + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)(*(int *)(param_2 + 0x18) * iVar3) + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
  return iVar5;
}



// FUNCTION 141769c60 FUN_141769c60 body=573 status=ok
// SIG undefined FUN_141769c60(void)

longlong * FUN_141769c60(longlong *param_1,longlong param_2,ulonglong param_3)

{
  DWORD dwTlsIndex;
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *plVar7;
  
  dwTlsIndex = DAT_1464b56e4;
  plVar8 = (longlong *)0x1;
  lpTlsValue = TlsGetValue(DAT_1464b56e4);
  plVar11 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0xd0);
    lpTlsValue = plVar11;
    if (plVar4 != (longlong *)0x0) {
      plVar4[0x18] = 0;
      plVar4[0x19] = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  iVar3 = (int)lpTlsValue[0x19];
  lVar9 = (longlong)iVar3;
  plVar4 = (longlong *)lpTlsValue[0x18];
  if ((longlong *)lpTlsValue[0x18] == (longlong *)0x0) {
    plVar4 = lpTlsValue;
  }
  plVar7 = plVar4 + lVar9 * 3;
  for (; plVar4 != plVar7; plVar4 = plVar4 + 3) {
    if ((((longlong *)*plVar4 == param_1) && (plVar4[1] == param_2)) && (plVar4[2] == param_3)) {
      return (longlong *)0x1;
    }
  }
  *(int *)(lpTlsValue + 0x19) = iVar3 + 1;
  if (*(int *)((longlong)lpTlsValue + 0xcc) < iVar3 + 1) {
    TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lpTlsValue,iVar3);
  }
  local_48 = SUB84(param_1,0);
  uStack_44 = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_40 = (undefined4)param_2;
  uStack_3c = (undefined4)((ulonglong)param_2 >> 0x20);
  plVar4 = (longlong *)lpTlsValue[0x18];
  if ((longlong *)lpTlsValue[0x18] == (longlong *)0x0) {
    plVar4 = lpTlsValue;
  }
  plVar7 = plVar4 + lVar9 * 3;
  *(undefined4 *)plVar7 = local_48;
  *(undefined4 *)((longlong)plVar7 + 4) = uStack_44;
  *(undefined4 *)(plVar7 + 1) = uStack_40;
  *(undefined4 *)((longlong)plVar7 + 0xc) = uStack_3c;
  plVar4[lVar9 * 3 + 2] = param_3;
  plVar4 = *(longlong **)(param_1[2] + 0x58);
  if (plVar4 != (longlong *)0x0) {
    do {
      if ((char)plVar8 == '\0') goto LAB_141769e61;
      cVar1 = FUN_141764b90(plVar4,0);
      if (cVar1 == '\0') {
LAB_141769dc0:
        bVar2 = 0;
      }
      else {
        lVar9 = UObject::GetPrivateStaticClass();
        lVar5 = UField::GetOwnerClass(plVar4);
        if (lVar5 == lVar9) goto LAB_141769dc0;
        bVar2 = 1;
      }
      if ((param_3 >> 0xb & 1) != 0) {
        bVar2 = *(byte *)(plVar4 + 7) & 1;
      }
      if ((param_3 >> 0x13 & 1) != 0) {
        bVar2 = *(byte *)(plVar4 + 7) & 1;
      }
      if ((bVar2 != 0) && (plVar7 = plVar11, 0 < (int)plVar4[6])) {
        do {
          if ((char)plVar8 == '\0') break;
          iVar3 = *(int *)((longlong)plVar4 + 0x34) * (int)plVar7;
          plVar10 = plVar11;
          if (param_2 != 0) {
            plVar10 = (longlong *)
                      ((longlong)iVar3 + (longlong)*(int *)((longlong)plVar4 + 0x44) + param_2);
          }
          cVar1 = (**(code **)(*plVar4 + 0x2b8))
                            (plVar4,(longlong)iVar3 + (longlong)*(int *)((longlong)plVar4 + 0x44) +
                                    (longlong)param_1,plVar10,param_3);
          if (cVar1 == '\0') {
            plVar8 = plVar11;
          }
          uVar6 = (int)plVar7 + 1;
          plVar7 = (longlong *)(ulonglong)uVar6;
        } while ((int)uVar6 < (int)plVar4[6]);
      }
      plVar4 = (longlong *)plVar4[10];
    } while (plVar4 != (longlong *)0x0);
    if ((char)plVar8 == '\0') goto LAB_141769e61;
  }
  bVar2 = (**(code **)(*param_1 + 0x170))(param_1,param_2);
  plVar8 = (longlong *)(ulonglong)bVar2;
LAB_141769e61:
  *(int *)(lpTlsValue + 0x19) = (int)lpTlsValue[0x19] + -1;
  TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::ResizeShrink
            (lpTlsValue);
  return plVar8;
}



// FUNCTION 141769ea0 FUN_141769ea0 body=109 status=ok
// SIG undefined FUN_141769ea0(void)

void FUN_141769ea0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    lVar3 = ULinkerPlaceholderClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                (lVar1 + 0x2c8,param_1);
    }
  }
  FUN_1417503d0(param_1);
  return;
}



// FUNCTION 141769f10 BeginDestroy body=109 status=ok
// SIG undefined BeginDestroy(void)

void UDelegateProperty::BeginDestroy(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    lVar3 = ULinkerPlaceholderFunction::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                (lVar1 + 0x180,param_1);
    }
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 14176a200 ClearValueInternal body=40 status=ok
// SIG undefined ClearValueInternal(void)

void TProperty<FLazyObjectPtr,UObjectPropertyBase>::ClearValueInternal
               (undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 1) = 0;
  *(undefined8 *)(param_2 + 3) = 0;
  *(undefined8 *)(param_2 + 5) = 0;
  return;
}



// FUNCTION 14176a230 ClearValueInternal body=113 status=ok
// SIG undefined ClearValueInternal(void)

void TProperty<FSoftObjectPtr,UObjectPropertyBase>::ClearValueInternal
               (undefined8 param_1,undefined4 *param_2)

{
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  longlong local_18 [2];
  
  *param_2 = 0xffffffff;
  local_18[0] = 0;
  local_18[1] = 0;
  local_30 = 0xffffffff;
  *(undefined8 *)(param_2 + 1) = 0;
  local_2c = 0;
  local_20 = 0;
  local_48 = 0;
  FString::FString(local_40,local_18);
  FSoftObjectPath::operator=(param_2 + 4,&local_48);
  if (local_18[0] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14176a2c0 FUN_14176a2c0 body=58 status=ok
// SIG undefined FUN_14176a2c0(void)

void FUN_14176a2c0(undefined8 param_1,undefined1 *param_2)

{
  undefined1 local_18 [24];
  
  if (param_2 == local_18) {
    return;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    return;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,0);
  return;
}



// FUNCTION 14176a300 ClearValueInternal body=56 status=ok
// SIG undefined ClearValueInternal(void)

void TProperty<TScriptDelegate<FWeakObjectPtr>,UProperty>::ClearValueInternal
               (undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  FWeakObjectPtr::operator=(&local_18,0);
  *param_2 = local_18;
  param_2[1] = local_14;
  *(undefined8 *)(param_2 + 2) = 0;
  return;
}



// FUNCTION 14176a350 FUN_14176a350 body=58 status=ok
// SIG undefined FUN_14176a350(void)

void FUN_14176a350(undefined8 param_1,undefined1 *param_2)

{
  undefined1 local_18 [24];
  
  if (param_2 == local_18) {
    return;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    return;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,0);
  return;
}



// FUNCTION 14176a390 ClearValueInternal body=235 status=ok
// SIG undefined ClearValueInternal(void)

void UMapProperty::ClearValueInternal(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  local_48 = *(undefined8 *)(param_1 + 0x70);
  local_30 = *(undefined4 *)(param_1 + 0x80);
  uStack_2c = *(undefined4 *)(param_1 + 0x84);
  uStack_28 = *(undefined4 *)(param_1 + 0x88);
  uStack_24 = *(undefined4 *)(param_1 + 0x8c);
  local_20 = *(undefined4 *)(param_1 + 0x90);
  uStack_1c = *(undefined4 *)(param_1 + 0x94);
  uStack_18 = *(undefined4 *)(param_1 + 0x98);
  uStack_14 = *(undefined4 *)(param_1 + 0x9c);
  uVar1 = *(undefined4 *)(param_1 + 0xa0);
  local_40 = *(undefined8 *)(param_1 + 0x78);
  if (*(int *)(param_2 + 8) != *(int *)(param_2 + 0x34)) {
    local_38 = param_2;
    local_10 = uVar1;
    FUN_14176f320(&local_48,0);
    *(undefined4 *)(param_2 + 8) = 0;
    if (*(int *)(param_2 + 0xc) != 0) {
      FScriptArray::ResizeTo(param_2,0,uVar1);
    }
    *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    if (*(int *)(param_2 + 0x2c) != 0) {
      *(undefined4 *)(param_2 + 0x2c) = 0;
      FScriptBitArray::Realloc(param_2 + 0x10,0);
    }
    puVar3 = *(undefined4 **)(param_2 + 0x40);
    if (*(undefined4 **)(param_2 + 0x40) == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(param_2 + 0x38);
    }
    uVar2 = (longlong)*(int *)(param_2 + 0x48) & 0x3fffffffffffffff;
    if (puVar3 + *(int *)(param_2 + 0x48) < puVar3) {
      uVar2 = 0;
    }
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0xffffffff;
        puVar3 = puVar3 + 1;
      }
    }
  }
  return;
}



// FUNCTION 14176a480 FUN_14176a480 body=372 status=ok
// SIG undefined FUN_14176a480(void)

void FUN_14176a480(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  
  uVar3 = *(ulonglong *)(param_1 + 0x80);
  plVar8 = *(longlong **)(param_1 + 0x70);
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  iVar5 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if (iVar5 != 0) {
    iVar7 = 0;
    if ((plVar8[7] & 0x1040000000U) == 0) {
      uVar6 = 1;
      lVar9 = *param_2;
      do {
        if ((-1 < iVar7) && (iVar7 < (int)param_2[5])) {
          plVar4 = (longlong *)param_2[4];
          if ((longlong *)param_2[4] == (longlong *)0x0) {
            plVar4 = param_2 + 2;
          }
          iVar2 = iVar7;
          if (iVar7 < 0) {
            iVar2 = iVar7 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar4 + (longlong)(iVar2 >> 5) * 4) & uVar6) != 0) {
            if ((~(byte)((ulonglong)plVar8[7] >> 0x24) & 1) != 0) {
              (**(code **)(*plVar8 + 0x328))(plVar8,*(int *)((longlong)plVar8 + 0x44) + lVar9);
            }
            iVar5 = iVar5 + -1;
          }
        }
        lVar9 = lVar9 + (uVar3 >> 0x20);
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
        iVar7 = iVar7 + 1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FScriptArray::ResizeTo(param_2,0,uVar1);
    }
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    if (*(int *)((longlong)param_2 + 0x2c) != 0) {
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
      FScriptBitArray::Realloc(param_2 + 2,0);
    }
    plVar8 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar8 = param_2 + 7;
    }
    uVar3 = (longlong)(int)param_2[9] & 0x3fffffffffffffff;
    if ((longlong *)((longlong)plVar8 + (longlong)(int)param_2[9] * 4) < plVar8) {
      uVar3 = 0;
    }
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)plVar8 = 0xffffffff;
        plVar8 = (longlong *)((longlong)plVar8 + 4);
      }
    }
  }
  return;
}



// FUNCTION 14176a610 FUN_14176a610 body=482 status=ok
// SIG undefined FUN_14176a610(void)

undefined8 FUN_14176a610(longlong param_1,longlong *param_2,longlong *param_3)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar4 = *(int *)(param_1 + 0xa0);
  iVar10 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  if (iVar10 == (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    iVar9 = 0;
    if (iVar10 != 0) {
      iVar12 = 0;
      iVar13 = 0;
      do {
        if ((-1 < iVar9) && (iVar9 < (int)param_3[5])) {
          uVar11 = 1 << ((byte)iVar9 & 0x1f);
          iVar6 = iVar9;
          if (iVar9 < 0) {
            iVar6 = iVar9 + 0x1f;
          }
          lVar3 = (longlong)(iVar6 >> 5) * 4;
          plVar7 = (longlong *)param_3[4];
          if ((longlong *)param_3[4] == (longlong *)0x0) {
            plVar7 = param_3 + 2;
          }
          if ((*(uint *)((longlong)plVar7 + lVar3) & uVar11) != 0) {
            if ((int)param_2[5] <= iVar9) goto LAB_14176a7d5;
            plVar7 = (longlong *)param_2[4];
            if ((longlong *)param_2[4] == (longlong *)0x0) {
              plVar7 = param_2 + 2;
            }
            if ((*(uint *)((longlong)plVar7 + lVar3) & uVar11) == 0) goto LAB_14176a7d5;
            plVar7 = *(longlong **)(param_1 + 0x70);
            lVar3 = *param_3;
            lVar5 = *param_2;
            pvVar1 = (void *)((longlong)*(int *)((longlong)plVar7 + 0x44) + iVar13 + lVar3);
            pvVar2 = (void *)((longlong)*(int *)((longlong)plVar7 + 0x44) + iVar12 + lVar5);
            if (pvVar2 != pvVar1) {
              if ((*(uint *)(plVar7 + 7) >> 0x1e & 1) == 0) {
                iVar6 = (**(code **)(*plVar7 + 0x2f0))(plVar7,pvVar2,pvVar1,(int)plVar7[6]);
              }
              else {
                iVar6 = _guard_xfg_dispatch_icall_nop
                                  (pvVar2,pvVar1,
                                   (longlong)(*(int *)((longlong)plVar7 + 0x34) * (int)plVar7[6]));
              }
              if (iVar6 != 0) goto LAB_14176a7d5;
            }
            plVar7 = *(longlong **)(param_1 + 0x78);
            pvVar1 = (void *)((longlong)*(int *)((longlong)plVar7 + 0x44) + iVar13 + lVar3);
            pvVar2 = (void *)((longlong)*(int *)((longlong)plVar7 + 0x44) + iVar12 + lVar5);
            if (pvVar2 != pvVar1) {
              if ((*(uint *)(plVar7 + 7) >> 0x1e & 1) == 0) {
                iVar6 = (**(code **)(*plVar7 + 0x2f0))(plVar7,pvVar2,pvVar1,(int)plVar7[6]);
              }
              else {
                iVar6 = _guard_xfg_dispatch_icall_nop
                                  (pvVar2,pvVar1,
                                   (longlong)(*(int *)((longlong)plVar7 + 0x34) * (int)plVar7[6]));
              }
              if (iVar6 != 0) goto LAB_14176a7d5;
            }
            iVar10 = iVar10 + -1;
          }
        }
        iVar9 = iVar9 + 1;
        iVar13 = iVar13 + iVar4;
        iVar12 = iVar12 + iVar4;
      } while (iVar10 != 0);
    }
    uVar8 = 0;
  }
  else {
LAB_14176a7d5:
    uVar8 = 0xffffffff;
  }
  return uVar8;
}



// FUNCTION 14176a800 FUN_14176a800 body=357 status=ok
// SIG undefined FUN_14176a800(void)

undefined8 FUN_14176a800(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  void *_Buf1;
  void *_Buf2;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar9 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar9 == (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    iVar6 = 0;
    if (iVar9 != 0) {
      iVar8 = 0;
      iVar7 = 0;
      do {
        if ((-1 < iVar6) && (iVar6 < (int)param_3[5])) {
          uVar10 = 1 << ((byte)iVar6 & 0x1f);
          iVar3 = iVar6;
          if (iVar6 < 0) {
            iVar3 = iVar6 + 0x1f;
          }
          lVar1 = (longlong)(iVar3 >> 5) * 4;
          plVar4 = (longlong *)param_3[4];
          if ((longlong *)param_3[4] == (longlong *)0x0) {
            plVar4 = param_3 + 2;
          }
          if ((*(uint *)((longlong)plVar4 + lVar1) & uVar10) != 0) {
            if ((int)param_2[5] <= iVar6) goto LAB_14176a942;
            plVar4 = (longlong *)param_2[4];
            if ((longlong *)param_2[4] == (longlong *)0x0) {
              plVar4 = param_2 + 2;
            }
            if ((*(uint *)((longlong)plVar4 + lVar1) & uVar10) == 0) goto LAB_14176a942;
            plVar4 = *(longlong **)(param_1 + 0x70);
            _Buf2 = (void *)((longlong)iVar7 + *param_3 +
                            (longlong)*(int *)((longlong)plVar4 + 0x44));
            _Buf1 = (void *)((longlong)iVar8 + *param_2 +
                            (longlong)*(int *)((longlong)plVar4 + 0x44));
            if (_Buf1 != _Buf2) {
              if ((*(uint *)(plVar4 + 7) >> 0x1e & 1) == 0) {
                iVar3 = (**(code **)(*plVar4 + 0x2f0))(plVar4,_Buf1,_Buf2,(int)plVar4[6]);
              }
              else {
                iVar3 = _guard_xfg_dispatch_icall_nop
                                  (_Buf1,_Buf2,
                                   (longlong)(*(int *)((longlong)plVar4 + 0x34) * (int)plVar4[6]));
              }
              if (iVar3 != 0) goto LAB_14176a942;
            }
            iVar9 = iVar9 + -1;
          }
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + iVar2;
        iVar8 = iVar8 + iVar2;
      } while (iVar9 != 0);
    }
    uVar5 = 0;
  }
  else {
LAB_14176a942:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// FUNCTION 14176a970 FUN_14176a970 body=29 status=ok
// SIG undefined FUN_14176a970(void)

int FUN_14176a970(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_141717e70(*(undefined8 *)(param_1 + 0x70),param_2,param_3,0);
  return (cVar1 != '\0') - 1;
}



// FUNCTION 14176a990 FUN_14176a990 body=748 status=ok
// SIG undefined FUN_14176a990(void)

undefined8
FUN_14176a990(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  double local_res10;
  
  lVar1 = *param_2;
  local_res10 = 1.28457067918724e-322;
  if (lVar1 == 0x1a) {
LAB_14176aa14:
    FUN_14174a8f0(param_1,param_3,param_4,param_2);
    return 2;
  }
  local_res10 = 1.23516411460312e-322;
  if (lVar1 == 0x19) {
LAB_14176aa62:
    plVar2 = (longlong *)param_3[1];
    if ((ushort *)*plVar2 + 1 <= (ushort *)plVar2[1]) {
      local_res10 = (double)(ulonglong)*(ushort *)*plVar2;
      *plVar2 = *plVar2 + 2;
      goto LAB_14176ab55;
    }
    (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) == 0) goto LAB_14176ab55;
    uVar4 = 2;
  }
  else {
    local_res10 = 9.88131291682493e-324;
    if (lVar1 == 2) {
LAB_14176aabd:
      plVar2 = (longlong *)param_3[1];
      if ((uint *)*plVar2 + 1 <= (uint *)plVar2[1]) {
        local_res10 = (double)(ulonglong)*(uint *)*plVar2;
        *plVar2 = *plVar2 + 4;
        goto LAB_14176ab55;
      }
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) == 0) goto LAB_14176ab55;
      uVar4 = 4;
    }
    else {
      local_res10 = 1.13635098543487e-322;
      if (lVar1 != 0x17) {
        if (lVar1 == 1) {
          local_res10 = 0.0;
          if (param_2[4] == 0) goto LAB_14176aa14;
        }
        else {
          local_res10 = 1.67982319586024e-322;
          if (lVar1 != 0x22) {
            local_res10 = 1.08694442085074e-322;
            if (lVar1 == 0x16) goto LAB_14176aa62;
            local_res10 = 1.03753785626662e-322;
            if (lVar1 == 0x15) goto LAB_14176aabd;
            local_res10 = 9.88131291682493e-323;
            if (lVar1 != 0x14) {
              local_res10 = 1.97626258336499e-323;
              if (lVar1 != 4) {
                local_res10 = 3.95252516672997e-323;
                if (lVar1 == 8) {
                  plVar2 = (longlong *)param_3[1];
                  if ((double *)plVar2[1] < (double *)*plVar2 + 1) {
                    (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
                    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                      FArchive::ByteSwap(param_3,&local_res10,8);
                    }
                  }
                  else {
                    local_res10 = *(double *)*plVar2;
                    *plVar2 = *plVar2 + 8;
                  }
                  *(char *)((longlong)*(int *)(param_1 + 0x44) +
                           *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4)
                       = (char)(int)local_res10;
                  return 2;
                }
                return 0;
              }
              plVar2 = (longlong *)param_3[1];
              if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res10,4);
                }
              }
              else {
                local_res10 = (double)(ulonglong)*(uint *)*plVar2;
                *plVar2 = *plVar2 + 4;
              }
              uVar3 = (undefined1)(int)local_res10._0_4_;
              goto LAB_14176abd3;
            }
            goto LAB_14176ab0c;
          }
        }
        uVar3 = FUN_14177b480(param_3,param_5,param_2);
LAB_14176abd3:
        *(undefined1 *)
         ((longlong)*(int *)(param_1 + 0x44) +
         *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = uVar3;
        return 2;
      }
LAB_14176ab0c:
      plVar2 = (longlong *)param_3[1];
      if ((double *)*plVar2 + 1 <= (double *)plVar2[1]) {
        local_res10 = *(double *)*plVar2;
        *plVar2 = *plVar2 + 8;
        goto LAB_14176ab55;
      }
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) == 0) goto LAB_14176ab55;
      uVar4 = 8;
    }
  }
  FArchive::ByteSwap(param_3,&local_res10,uVar4);
LAB_14176ab55:
  *(undefined1 *)
   ((longlong)*(int *)(param_1 + 0x44) +
   *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = local_res10._0_1_;
  return 2;
}



// FUNCTION 14176ac80 FUN_14176ac80 body=751 status=ok
// SIG undefined FUN_14176ac80(void)

undefined8
FUN_14176ac80(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  double local_res10;
  
  lVar1 = *param_2;
  local_res10 = 1.28457067918724e-322;
  if (lVar1 == 0x1a) {
LAB_14176ad04:
    FUN_141767800(param_1,param_3,param_4,param_2);
    return 2;
  }
  local_res10 = 1.23516411460312e-322;
  if (lVar1 == 0x19) {
LAB_14176ad52:
    plVar2 = (longlong *)param_3[1];
    if ((ushort *)*plVar2 + 1 <= (ushort *)plVar2[1]) {
      local_res10 = (double)(ulonglong)*(ushort *)*plVar2;
      *plVar2 = *plVar2 + 2;
      goto LAB_14176ae45;
    }
    (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) == 0) goto LAB_14176ae45;
    uVar4 = 2;
  }
  else {
    local_res10 = 9.88131291682493e-324;
    if (lVar1 == 2) {
LAB_14176adad:
      plVar2 = (longlong *)param_3[1];
      if ((uint *)*plVar2 + 1 <= (uint *)plVar2[1]) {
        local_res10 = (double)(ulonglong)*(uint *)*plVar2;
        *plVar2 = *plVar2 + 4;
        goto LAB_14176ae45;
      }
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) == 0) goto LAB_14176ae45;
      uVar4 = 4;
    }
    else {
      local_res10 = 1.13635098543487e-322;
      if (lVar1 != 0x17) {
        if (lVar1 == 1) {
          local_res10 = 0.0;
          if (param_2[4] == 0) goto LAB_14176ad04;
        }
        else {
          local_res10 = 1.67982319586024e-322;
          if (lVar1 != 0x22) {
            local_res10 = 1.08694442085074e-322;
            if (lVar1 == 0x16) goto LAB_14176ad52;
            local_res10 = 1.03753785626662e-322;
            if (lVar1 == 0x15) goto LAB_14176adad;
            local_res10 = 9.88131291682493e-323;
            if (lVar1 != 0x14) {
              local_res10 = 1.97626258336499e-323;
              if (lVar1 != 4) {
                local_res10 = 3.95252516672997e-323;
                if (lVar1 == 8) {
                  plVar2 = (longlong *)param_3[1];
                  if ((double *)plVar2[1] < (double *)*plVar2 + 1) {
                    (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
                    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                      FArchive::ByteSwap(param_3,&local_res10,8);
                    }
                  }
                  else {
                    local_res10 = *(double *)*plVar2;
                    *plVar2 = *plVar2 + 8;
                  }
                  *(short *)((longlong)*(int *)(param_1 + 0x44) +
                            *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4)
                       = (short)(int)local_res10;
                  return 2;
                }
                return 0;
              }
              plVar2 = (longlong *)param_3[1];
              if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res10,4);
                }
              }
              else {
                local_res10 = (double)(ulonglong)*(uint *)*plVar2;
                *plVar2 = *plVar2 + 4;
              }
              uVar3 = (undefined2)(int)local_res10._0_4_;
              goto LAB_14176aec4;
            }
            goto LAB_14176adfc;
          }
        }
        uVar3 = FUN_14177b480(param_3,param_5,param_2);
LAB_14176aec4:
        *(undefined2 *)
         ((longlong)*(int *)(param_1 + 0x44) +
         *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = uVar3;
        return 2;
      }
LAB_14176adfc:
      plVar2 = (longlong *)param_3[1];
      if ((double *)*plVar2 + 1 <= (double *)plVar2[1]) {
        local_res10 = *(double *)*plVar2;
        *plVar2 = *plVar2 + 8;
        goto LAB_14176ae45;
      }
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) == 0) goto LAB_14176ae45;
      uVar4 = 8;
    }
  }
  FArchive::ByteSwap(param_3,&local_res10,uVar4);
LAB_14176ae45:
  *(undefined2 *)
   ((longlong)*(int *)(param_1 + 0x44) +
   *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = local_res10._0_2_;
  return 2;
}



// FUNCTION 14176af70 FUN_14176af70 body=853 status=ok
// SIG undefined FUN_14176af70(void)

undefined8
FUN_14176af70(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  short sVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  double local_res10;
  
  lVar3 = *param_2;
  local_res10 = 1.28457067918724e-322;
  if (lVar3 == 0x1a) {
LAB_14176b050:
    FUN_141767880(param_1,param_3,param_4,param_2);
    return 2;
  }
  local_res10 = 1.23516411460312e-322;
  if (lVar3 == 0x19) {
    plVar4 = (longlong *)param_3[1];
    if ((short *)plVar4[1] < (short *)*plVar4 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,&local_res10,2);
      }
      uVar5 = (uint)(short)local_res10._0_2_;
    }
    else {
      sVar1 = *(short *)*plVar4;
      *plVar4 = *plVar4 + 2;
      uVar5 = (uint)sVar1;
    }
LAB_14176b21c:
    *(uint *)((longlong)*(int *)(param_1 + 0x44) +
             *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = uVar5;
  }
  else {
    local_res10 = 9.88131291682493e-324;
    if (lVar3 == 2) {
LAB_14176b107:
      plVar4 = (longlong *)param_3[1];
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          uVar6 = 4;
LAB_14176b197:
          FArchive::ByteSwap(param_3,&local_res10,uVar6);
        }
      }
      else {
        local_res10 = (double)(ulonglong)*(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
    }
    else {
      local_res10 = 1.13635098543487e-322;
      if (lVar3 != 0x17) {
        if (lVar3 == 1) {
          local_res10 = 0.0;
          if (param_2[4] == 0) goto LAB_14176b050;
        }
        else {
          local_res10 = 1.67982319586024e-322;
          if (lVar3 != 0x22) {
            local_res10 = 1.08694442085074e-322;
            if (lVar3 == 0x16) {
              plVar4 = (longlong *)param_3[1];
              if ((ushort *)plVar4[1] < (ushort *)*plVar4 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res10,2);
                }
                uVar5 = (uint)local_res10._0_2_;
              }
              else {
                uVar2 = *(ushort *)*plVar4;
                *plVar4 = *plVar4 + 2;
                uVar5 = (uint)uVar2;
              }
            }
            else {
              local_res10 = 1.03753785626662e-322;
              if (lVar3 == 0x15) goto LAB_14176b107;
              local_res10 = 9.88131291682493e-323;
              if (lVar3 == 0x14) goto LAB_14176b156;
              local_res10 = 1.97626258336499e-323;
              if (lVar3 != 4) {
                local_res10 = 3.95252516672997e-323;
                if (lVar3 == 8) {
                  plVar4 = (longlong *)param_3[1];
                  if ((double *)plVar4[1] < (double *)*plVar4 + 1) {
                    (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
                    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                      FArchive::ByteSwap(param_3,&local_res10,8);
                    }
                  }
                  else {
                    local_res10 = *(double *)*plVar4;
                    *plVar4 = *plVar4 + 8;
                  }
                  *(int *)((longlong)*(int *)(param_1 + 0x44) +
                          *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) =
                       (int)local_res10;
                  return 2;
                }
                return 0;
              }
              plVar4 = (longlong *)param_3[1];
              if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res10,4);
                }
              }
              else {
                local_res10 = (double)(ulonglong)*(uint *)*plVar4;
                *plVar4 = *plVar4 + 4;
              }
              uVar5 = (uint)local_res10._0_4_;
            }
            goto LAB_14176b21c;
          }
        }
        uVar5 = FUN_14177b480(param_3,param_5,param_2);
        goto LAB_14176b21c;
      }
LAB_14176b156:
      plVar4 = (longlong *)param_3[1];
      if ((double *)plVar4[1] < (double *)*plVar4 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          uVar6 = 8;
          goto LAB_14176b197;
        }
      }
      else {
        local_res10 = *(double *)*plVar4;
        *plVar4 = *plVar4 + 8;
      }
    }
    *(float *)((longlong)*(int *)(param_1 + 0x44) +
              *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) =
         local_res10._0_4_;
  }
  return 2;
}



// FUNCTION 14176b2d0 FUN_14176b2d0 body=853 status=ok
// SIG undefined FUN_14176b2d0(void)

undefined8
FUN_14176b2d0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  short sVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  double local_res10;
  
  lVar3 = *param_2;
  local_res10 = 1.28457067918724e-322;
  if (lVar3 == 0x1a) {
LAB_14176b3b0:
    FUN_141767880(param_1,param_3,param_4,param_2);
    return 2;
  }
  local_res10 = 1.23516411460312e-322;
  if (lVar3 == 0x19) {
    plVar4 = (longlong *)param_3[1];
    if ((short *)plVar4[1] < (short *)*plVar4 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,&local_res10,2);
      }
      uVar5 = (uint)(short)local_res10._0_2_;
    }
    else {
      sVar1 = *(short *)*plVar4;
      *plVar4 = *plVar4 + 2;
      uVar5 = (uint)sVar1;
    }
LAB_14176b57c:
    *(uint *)((longlong)*(int *)(param_1 + 0x44) +
             *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = uVar5;
  }
  else {
    local_res10 = 9.88131291682493e-324;
    if (lVar3 == 2) {
LAB_14176b467:
      plVar4 = (longlong *)param_3[1];
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          uVar6 = 4;
LAB_14176b4f7:
          FArchive::ByteSwap(param_3,&local_res10,uVar6);
        }
      }
      else {
        local_res10 = (double)(ulonglong)*(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
    }
    else {
      local_res10 = 1.13635098543487e-322;
      if (lVar3 != 0x17) {
        if (lVar3 == 1) {
          local_res10 = 0.0;
          if (param_2[4] == 0) goto LAB_14176b3b0;
        }
        else {
          local_res10 = 1.67982319586024e-322;
          if (lVar3 != 0x22) {
            local_res10 = 1.08694442085074e-322;
            if (lVar3 == 0x16) {
              plVar4 = (longlong *)param_3[1];
              if ((ushort *)plVar4[1] < (ushort *)*plVar4 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res10,2);
                }
                uVar5 = (uint)local_res10._0_2_;
              }
              else {
                uVar2 = *(ushort *)*plVar4;
                *plVar4 = *plVar4 + 2;
                uVar5 = (uint)uVar2;
              }
            }
            else {
              local_res10 = 1.03753785626662e-322;
              if (lVar3 == 0x15) goto LAB_14176b467;
              local_res10 = 9.88131291682493e-323;
              if (lVar3 == 0x14) goto LAB_14176b4b6;
              local_res10 = 1.97626258336499e-323;
              if (lVar3 != 4) {
                local_res10 = 3.95252516672997e-323;
                if (lVar3 == 8) {
                  plVar4 = (longlong *)param_3[1];
                  if ((double *)plVar4[1] < (double *)*plVar4 + 1) {
                    (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
                    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                      FArchive::ByteSwap(param_3,&local_res10,8);
                    }
                  }
                  else {
                    local_res10 = *(double *)*plVar4;
                    *plVar4 = *plVar4 + 8;
                  }
                  *(int *)((longlong)*(int *)(param_1 + 0x44) +
                          *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) =
                       (int)(longlong)local_res10;
                  return 2;
                }
                return 0;
              }
              plVar4 = (longlong *)param_3[1];
              if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res10,4);
                }
              }
              else {
                local_res10 = (double)(ulonglong)*(uint *)*plVar4;
                *plVar4 = *plVar4 + 4;
              }
              uVar5 = (uint)(longlong)local_res10._0_4_;
            }
            goto LAB_14176b57c;
          }
        }
        uVar5 = FUN_14177b480(param_3,param_5,param_2);
        goto LAB_14176b57c;
      }
LAB_14176b4b6:
      plVar4 = (longlong *)param_3[1];
      if ((double *)plVar4[1] < (double *)*plVar4 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          uVar6 = 8;
          goto LAB_14176b4f7;
        }
      }
      else {
        local_res10 = *(double *)*plVar4;
        *plVar4 = *plVar4 + 8;
      }
    }
    *(float *)((longlong)*(int *)(param_1 + 0x44) +
              *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) =
         local_res10._0_4_;
  }
  return 2;
}



// FUNCTION 14176b630 FUN_14176b630 body=1135 status=ok
// SIG undefined FUN_14176b630(void)

undefined8
FUN_14176b630(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  double local_res10;
  
  lVar6 = *param_2;
  local_res10 = 1.28457067918724e-322;
  if (lVar6 == 0x1a) {
LAB_14176b7d6:
    FUN_141767900(param_1,param_3,param_4,param_2);
    return 2;
  }
  local_res10 = 1.23516411460312e-322;
  if (lVar6 == 0x19) {
    plVar5 = (longlong *)param_3[1];
    if ((short *)plVar5[1] < (short *)*plVar5 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,&local_res10,2);
      }
      fVar7 = (float)(int)(short)local_res10._0_2_;
    }
    else {
      sVar1 = *(short *)*plVar5;
      *plVar5 = *plVar5 + 2;
      fVar7 = (float)(int)sVar1;
    }
  }
  else {
    local_res10 = 9.88131291682493e-324;
    if (lVar6 == 2) {
      plVar5 = (longlong *)param_3[1];
      if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,&local_res10,4);
        }
        fVar7 = (float)local_res10._0_4_;
      }
      else {
        iVar3 = *(int *)*plVar5;
        *plVar5 = *plVar5 + 4;
        fVar7 = (float)iVar3;
      }
    }
    else {
      local_res10 = 1.13635098543487e-322;
      if (lVar6 == 0x17) {
        plVar5 = (longlong *)param_3[1];
        if ((longlong *)plVar5[1] < (longlong *)*plVar5 + 1) {
          (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
          if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_3,&local_res10,8);
          }
          fVar7 = (float)(longlong)local_res10;
        }
        else {
          lVar6 = *(longlong *)*plVar5;
          *plVar5 = *plVar5 + 8;
          fVar7 = (float)lVar6;
        }
      }
      else {
        if (lVar6 == 1) {
          local_res10 = 0.0;
          if (param_2[4] == 0) goto LAB_14176b7d6;
        }
        else {
          local_res10 = 1.67982319586024e-322;
          if (lVar6 != 0x22) {
            local_res10 = 1.08694442085074e-322;
            if (lVar6 == 0x16) {
              plVar5 = (longlong *)param_3[1];
              if ((ushort *)plVar5[1] < (ushort *)*plVar5 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res10,2);
                }
                fVar7 = (float)local_res10._0_2_;
              }
              else {
                uVar2 = *(ushort *)*plVar5;
                *plVar5 = *plVar5 + 2;
                fVar7 = (float)uVar2;
              }
            }
            else {
              local_res10 = 1.03753785626662e-322;
              if (lVar6 == 0x15) {
                plVar5 = (longlong *)param_3[1];
                if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
                  (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
                  if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                    FArchive::ByteSwap(param_3,&local_res10,4);
                  }
                  fVar7 = (float)((ulonglong)local_res10 & 0xffffffff);
                }
                else {
                  uVar4 = *(uint *)*plVar5;
                  *plVar5 = *plVar5 + 4;
                  fVar7 = (float)uVar4;
                }
              }
              else {
                local_res10 = 9.88131291682493e-323;
                if (lVar6 != 0x14) {
                  local_res10 = 1.97626258336499e-323;
                  if (lVar6 == 4) {
                    plVar5 = (longlong *)param_3[1];
                    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
                      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
                      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                        FArchive::ByteSwap(param_3,&local_res10,4);
                      }
                    }
                    else {
                      local_res10 = (double)(ulonglong)*(uint *)*plVar5;
                      *plVar5 = *plVar5 + 4;
                    }
                    *(int *)((longlong)*(int *)(param_1 + 0x44) +
                            *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4)
                         = local_res10._0_4_;
                    return 2;
                  }
                  local_res10 = 3.95252516672997e-323;
                  if (lVar6 == 8) {
                    plVar5 = (longlong *)param_3[1];
                    if ((double *)plVar5[1] < (double *)*plVar5 + 1) {
                      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
                      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                        FArchive::ByteSwap(param_3,&local_res10,8);
                      }
                    }
                    else {
                      local_res10 = *(double *)*plVar5;
                      *plVar5 = *plVar5 + 8;
                    }
                    *(float *)((longlong)*(int *)(param_1 + 0x44) +
                              *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) +
                              param_4) = (float)local_res10;
                    return 2;
                  }
                  return 0;
                }
                plVar5 = (longlong *)param_3[1];
                if ((double *)plVar5[1] < (double *)*plVar5 + 1) {
                  (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
                  if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                    FArchive::ByteSwap(param_3,&local_res10,8);
                  }
                }
                else {
                  local_res10 = *(double *)*plVar5;
                  *plVar5 = *plVar5 + 8;
                }
                fVar7 = (float)(longlong)local_res10;
                if ((longlong)local_res10 < 0) {
                  fVar7 = fVar7 + 1.8446744e+19;
                }
              }
            }
            goto LAB_14176b974;
          }
        }
        lVar6 = FUN_14177b480(param_3,param_5,param_2);
        fVar7 = (float)lVar6;
      }
    }
  }
LAB_14176b974:
  *(float *)((longlong)*(int *)(param_1 + 0x44) +
            *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = fVar7;
  return 2;
}



// FUNCTION 14176baa0 FUN_14176baa0 body=1107 status=ok
// SIG undefined FUN_14176baa0(void)

undefined8
FUN_14176baa0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  ulonglong local_res10;
  
  lVar6 = *param_2;
  local_res10 = 0x1a;
  if (lVar6 == 0x1a) {
LAB_14176bc4a:
    FUN_141767980(param_1,param_3,param_4,param_2);
    return 2;
  }
  local_res10 = 0x19;
  if (lVar6 == 0x19) {
    plVar5 = (longlong *)param_3[1];
    if ((short *)plVar5[1] < (short *)*plVar5 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,&local_res10,2);
      }
      dVar7 = (double)(int)(short)(ushort)local_res10;
    }
    else {
      sVar1 = *(short *)*plVar5;
      *plVar5 = *plVar5 + 2;
      dVar7 = (double)(int)sVar1;
    }
  }
  else {
    local_res10 = 2;
    if (lVar6 == 2) {
      plVar5 = (longlong *)param_3[1];
      if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,&local_res10,4);
        }
        dVar7 = (double)(int)(float)local_res10;
      }
      else {
        iVar3 = *(int *)*plVar5;
        *plVar5 = *plVar5 + 4;
        dVar7 = (double)iVar3;
      }
    }
    else {
      local_res10 = 0x17;
      if (lVar6 == 0x17) {
        plVar5 = (longlong *)param_3[1];
        if ((longlong *)plVar5[1] < (longlong *)*plVar5 + 1) {
          (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
          if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_3,&local_res10,8);
          }
          dVar7 = (double)(longlong)local_res10;
        }
        else {
          lVar6 = *(longlong *)*plVar5;
          *plVar5 = *plVar5 + 8;
          dVar7 = (double)lVar6;
        }
      }
      else {
        if (lVar6 == 1) {
          local_res10 = 0;
          if (param_2[4] == 0) goto LAB_14176bc4a;
        }
        else {
          local_res10 = 0x22;
          if (lVar6 != 0x22) {
            local_res10 = 0x16;
            if (lVar6 == 0x16) {
              plVar5 = (longlong *)param_3[1];
              if ((ushort *)plVar5[1] < (ushort *)*plVar5 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res10,2);
                }
                dVar7 = (double)(ushort)local_res10;
              }
              else {
                uVar2 = *(ushort *)*plVar5;
                *plVar5 = *plVar5 + 2;
                dVar7 = (double)uVar2;
              }
            }
            else {
              local_res10 = 0x15;
              if (lVar6 == 0x15) {
                plVar5 = (longlong *)param_3[1];
                if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
                  (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
                  if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                    FArchive::ByteSwap(param_3,&local_res10,4);
                  }
                  dVar7 = (double)(local_res10 & 0xffffffff);
                }
                else {
                  uVar4 = *(uint *)*plVar5;
                  *plVar5 = *plVar5 + 4;
                  dVar7 = (double)uVar4;
                }
              }
              else {
                local_res10 = 0x14;
                if (lVar6 == 0x14) {
                  plVar5 = (longlong *)param_3[1];
                  if ((ulonglong *)plVar5[1] < (ulonglong *)*plVar5 + 1) {
                    (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
                    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                      FArchive::ByteSwap(param_3,&local_res10,8);
                    }
                  }
                  else {
                    local_res10 = *(ulonglong *)*plVar5;
                    *plVar5 = *plVar5 + 8;
                  }
                  dVar7 = (double)(longlong)local_res10;
                  if ((longlong)local_res10 < 0) {
                    dVar7 = dVar7 + 1.8446744073709552e+19;
                  }
                }
                else {
                  local_res10 = 4;
                  if (lVar6 != 4) {
                    local_res10 = 8;
                    if (lVar6 == 8) {
                      plVar5 = (longlong *)param_3[1];
                      if ((ulonglong *)plVar5[1] < (ulonglong *)*plVar5 + 1) {
                        (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
                        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                          FArchive::ByteSwap(param_3,&local_res10,8);
                        }
                      }
                      else {
                        local_res10 = *(ulonglong *)*plVar5;
                        *plVar5 = *plVar5 + 8;
                      }
                      *(ulonglong *)
                       ((longlong)*(int *)(param_1 + 0x44) +
                       *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) =
                           local_res10;
                      return 2;
                    }
                    return 0;
                  }
                  plVar5 = (longlong *)param_3[1];
                  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
                    (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
                    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                      FArchive::ByteSwap(param_3,&local_res10,4);
                    }
                  }
                  else {
                    local_res10 = (ulonglong)*(uint *)*plVar5;
                    *plVar5 = *plVar5 + 4;
                  }
                  dVar7 = (double)(float)local_res10;
                }
              }
            }
            goto LAB_14176be48;
          }
        }
        lVar6 = FUN_14177b480(param_3,param_5,param_2);
        dVar7 = (double)lVar6;
      }
    }
  }
LAB_14176be48:
  *(double *)
   ((longlong)*(int *)(param_1 + 0x44) +
   *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = dVar7;
  return 2;
}



// FUNCTION 14176bf00 FUN_14176bf00 body=959 status=ok
// SIG undefined FUN_14176bf00(void)

undefined8
FUN_14176bf00(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  double local_res10;
  
  lVar5 = *param_2;
  local_res10 = 1.28457067918724e-322;
  if (lVar5 == 0x1a) {
LAB_14176c033:
    FUN_141767a00(param_1,param_3,param_4,param_2);
    return 2;
  }
  local_res10 = 1.23516411460312e-322;
  if (lVar5 == 0x19) {
    plVar6 = (longlong *)param_3[1];
    if ((short *)plVar6[1] < (short *)*plVar6 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,&local_res10,2);
      }
      uVar7 = (ulonglong)local_res10._0_2_;
    }
    else {
      sVar1 = *(short *)*plVar6;
      *plVar6 = *plVar6 + 2;
      uVar7 = (ulonglong)sVar1;
    }
  }
  else {
    local_res10 = 9.88131291682493e-324;
    if (lVar5 == 2) {
      plVar6 = (longlong *)param_3[1];
      if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,&local_res10,4);
        }
        uVar7 = (ulonglong)(int)local_res10._0_4_;
      }
      else {
        iVar3 = *(int *)*plVar6;
        *plVar6 = *plVar6 + 4;
        uVar7 = (ulonglong)iVar3;
      }
    }
    else {
      local_res10 = 1.13635098543487e-322;
      if (lVar5 == 0x17) {
LAB_14176c14f:
        plVar6 = (longlong *)param_3[1];
        if ((double *)plVar6[1] < (double *)*plVar6 + 1) {
          (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
          if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_3,&local_res10,8);
          }
        }
        else {
          local_res10 = *(double *)*plVar6;
          *plVar6 = *plVar6 + 8;
        }
        *(double *)
         ((longlong)*(int *)(param_1 + 0x44) +
         *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = local_res10;
        return 2;
      }
      if (lVar5 == 1) {
        local_res10 = 0.0;
        if (param_2[4] == 0) goto LAB_14176c033;
      }
      else {
        local_res10 = 1.67982319586024e-322;
        if (lVar5 != 0x22) {
          local_res10 = 1.08694442085074e-322;
          if (lVar5 == 0x16) {
            plVar6 = (longlong *)param_3[1];
            if ((ushort *)plVar6[1] < (ushort *)*plVar6 + 1) {
              (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
              if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_3,&local_res10,2);
              }
              uVar7 = (ulonglong)local_res10 & 0xffff;
            }
            else {
              uVar2 = *(ushort *)*plVar6;
              *plVar6 = *plVar6 + 2;
              uVar7 = (ulonglong)uVar2;
            }
          }
          else {
            local_res10 = 1.03753785626662e-322;
            if (lVar5 == 0x15) {
              plVar6 = (longlong *)param_3[1];
              if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res10,4);
                }
                uVar7 = (ulonglong)local_res10 & 0xffffffff;
              }
              else {
                uVar4 = *(uint *)*plVar6;
                *plVar6 = *plVar6 + 4;
                uVar7 = (ulonglong)uVar4;
              }
            }
            else {
              local_res10 = 9.88131291682493e-323;
              if (lVar5 == 0x14) goto LAB_14176c14f;
              local_res10 = 1.97626258336499e-323;
              if (lVar5 != 4) {
                local_res10 = 3.95252516672997e-323;
                if (lVar5 == 8) {
                  plVar6 = (longlong *)param_3[1];
                  if ((double *)plVar6[1] < (double *)*plVar6 + 1) {
                    (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
                    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                      FArchive::ByteSwap(param_3,&local_res10,8);
                    }
                  }
                  else {
                    local_res10 = *(double *)*plVar6;
                    *plVar6 = *plVar6 + 8;
                  }
                  *(longlong *)
                   ((longlong)*(int *)(param_1 + 0x44) +
                   *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) =
                       (longlong)local_res10;
                  return 2;
                }
                return 0;
              }
              plVar6 = (longlong *)param_3[1];
              if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res10,4);
                }
              }
              else {
                local_res10 = (double)(ulonglong)*(uint *)*plVar6;
                *plVar6 = *plVar6 + 4;
              }
              uVar7 = (ulonglong)local_res10._0_4_;
            }
          }
          goto LAB_14176c216;
        }
      }
      uVar7 = FUN_14177b480(param_3,param_5,param_2);
    }
  }
LAB_14176c216:
  *(ulonglong *)
   ((longlong)*(int *)(param_1 + 0x44) +
   *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = uVar7;
  return 2;
}



// FUNCTION 14176c2c0 FUN_14176c2c0 body=1060 status=ok
// SIG undefined FUN_14176c2c0(void)

undefined8
FUN_14176c2c0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  double local_res10;
  
  lVar6 = *param_2;
  local_res10 = 1.28457067918724e-322;
  if (lVar6 == 0x1a) {
LAB_14176c3f3:
    FUN_141767a00(param_1,param_3,param_4,param_2);
    return 2;
  }
  local_res10 = 1.23516411460312e-322;
  if (lVar6 == 0x19) {
    plVar5 = (longlong *)param_3[1];
    if ((short *)plVar5[1] < (short *)*plVar5 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,&local_res10,2);
      }
      uVar7 = (ulonglong)local_res10._0_2_;
    }
    else {
      sVar1 = *(short *)*plVar5;
      *plVar5 = *plVar5 + 2;
      uVar7 = (ulonglong)sVar1;
    }
  }
  else {
    local_res10 = 9.88131291682493e-324;
    if (lVar6 == 2) {
      plVar5 = (longlong *)param_3[1];
      if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,&local_res10,4);
        }
        uVar7 = (ulonglong)(int)local_res10._0_4_;
      }
      else {
        iVar3 = *(int *)*plVar5;
        *plVar5 = *plVar5 + 4;
        uVar7 = (ulonglong)iVar3;
      }
    }
    else {
      local_res10 = 1.13635098543487e-322;
      if (lVar6 == 0x17) {
LAB_14176c50f:
        plVar5 = (longlong *)param_3[1];
        if ((double *)plVar5[1] < (double *)*plVar5 + 1) {
          (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
          if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_3,&local_res10,8);
          }
        }
        else {
          local_res10 = *(double *)*plVar5;
          *plVar5 = *plVar5 + 8;
        }
        *(double *)
         ((longlong)*(int *)(param_1 + 0x44) +
         *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = local_res10;
        return 2;
      }
      if (lVar6 == 1) {
        local_res10 = 0.0;
        if (param_2[4] == 0) goto LAB_14176c3f3;
      }
      else {
        local_res10 = 1.67982319586024e-322;
        if (lVar6 != 0x22) {
          local_res10 = 1.08694442085074e-322;
          if (lVar6 == 0x16) {
            plVar5 = (longlong *)param_3[1];
            if ((ushort *)plVar5[1] < (ushort *)*plVar5 + 1) {
              (**(code **)(*param_3 + 0x50))(param_3,&local_res10,2);
              if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_3,&local_res10,2);
              }
              uVar7 = (ulonglong)local_res10 & 0xffff;
            }
            else {
              uVar2 = *(ushort *)*plVar5;
              *plVar5 = *plVar5 + 2;
              uVar7 = (ulonglong)uVar2;
            }
          }
          else {
            local_res10 = 1.03753785626662e-322;
            if (lVar6 == 0x15) {
              plVar5 = (longlong *)param_3[1];
              if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res10,4);
                }
                uVar7 = (ulonglong)local_res10 & 0xffffffff;
              }
              else {
                uVar4 = *(uint *)*plVar5;
                *plVar5 = *plVar5 + 4;
                uVar7 = (ulonglong)uVar4;
              }
            }
            else {
              local_res10 = 9.88131291682493e-323;
              if (lVar6 == 0x14) goto LAB_14176c50f;
              local_res10 = 1.97626258336499e-323;
              if (lVar6 != 4) {
                local_res10 = 3.95252516672997e-323;
                if (lVar6 == 8) {
                  plVar5 = (longlong *)param_3[1];
                  if ((double *)plVar5[1] < (double *)*plVar5 + 1) {
                    (**(code **)(*param_3 + 0x50))(param_3,&local_res10,8);
                    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                      FArchive::ByteSwap(param_3,&local_res10,8);
                    }
                  }
                  else {
                    local_res10 = *(double *)*plVar5;
                    *plVar5 = *plVar5 + 8;
                  }
                  lVar6 = 0;
                  if ((9.223372036854776e+18 <= local_res10) &&
                     (local_res10 = local_res10 - 9.223372036854776e+18,
                     local_res10 < 9.223372036854776e+18)) {
                    lVar6 = -0x8000000000000000;
                  }
                  *(longlong *)
                   ((longlong)*(int *)(param_1 + 0x44) +
                   *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) =
                       (longlong)local_res10 + lVar6;
                  return 2;
                }
                return 0;
              }
              plVar5 = (longlong *)param_3[1];
              if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res10,4);
                }
              }
              else {
                local_res10 = (double)(ulonglong)*(uint *)*plVar5;
                *plVar5 = *plVar5 + 4;
              }
              lVar6 = 0;
              if ((9.223372e+18 <= local_res10._0_4_) &&
                 (local_res10._0_4_ = local_res10._0_4_ - 9.223372e+18,
                 local_res10._0_4_ < 9.223372e+18)) {
                lVar6 = -0x8000000000000000;
              }
              uVar7 = (longlong)local_res10._0_4_ + lVar6;
            }
          }
          goto LAB_14176c606;
        }
      }
      uVar7 = FUN_14177b480(param_3,param_5,param_2);
    }
  }
LAB_14176c606:
  *(ulonglong *)
   ((longlong)*(int *)(param_1 + 0x44) +
   *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = uVar7;
  return 2;
}



// FUNCTION 14176c6f0 FUN_14176c6f0 body=2791 status=ok
// SIG undefined FUN_14176c6f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_14176c6f0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  void *pvVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  char local_1a8;
  void *local_1a0;
  int local_198;
  int local_194;
  undefined8 *local_190;
  undefined8 local_188;
  undefined1 *local_178;
  undefined8 **ppuStack_170;
  longlong local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_10c;
  undefined8 local_104;
  longlong local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_188 = param_5;
  local_190 = param_1;
  (**(code **)(*param_3 + 0x70))(param_3,param_1[0xe]);
  (**(code **)(*param_3 + 0x70))(param_3,param_1[0xf]);
  if (*param_2 != 0x1c) {
    return '\0';
  }
  local_1a0 = (void *)0x0;
  if (((param_2[5] == 0) ||
      (plVar9 = (longlong *)
                (**(code **)(*(longlong *)param_1[0xe] + 0x338))
                          ((longlong *)param_1[0xe],&local_1a0), param_2[5] == *plVar9)) &&
     ((local_1a0 = (void *)0x0, param_2[6] == 0 ||
      (plVar9 = (longlong *)
                (**(code **)(*(longlong *)param_1[0xf] + 0x338))
                          ((longlong *)param_1[0xf],&local_1a0), param_2[6] == *plVar9)))) {
    lVar17 = param_1[0xe];
    if (lVar17 == 0) {
      return '\0';
    }
    lVar11 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    if (!bVar19) {
      return '\0';
    }
    if (*(longlong *)(lVar17 + 0x70) != 0) {
      plVar9 = *(longlong **)(*(longlong *)(lVar17 + 0x70) + 0x90);
      if (plVar9 == (longlong *)0x0) {
        return '\0';
      }
      cVar5 = (**(code **)(*plVar9 + 0xf8))();
      if (cVar5 != '\0') {
        return '\0';
      }
    }
    local_88 = param_1[0xe];
    local_70 = *(undefined4 *)(param_1 + 0x10);
    uStack_6c = *(undefined4 *)((longlong)param_1 + 0x84);
    uStack_68 = *(undefined4 *)(param_1 + 0x11);
    uStack_64 = *(undefined4 *)((longlong)param_1 + 0x8c);
    param_4 = *(int *)((longlong)param_1 + 0x44) + param_4;
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    local_60 = *(undefined4 *)(param_1 + 0x12);
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0x94);
    uStack_58 = *(undefined4 *)(param_1 + 0x13);
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0x9c);
    local_80 = param_1[0xf];
    if (*(int *)(param_4 + 8) != *(int *)(param_4 + 0x34)) {
      local_78 = (longlong *)param_4;
      local_50 = uVar2;
      FUN_14176f320(&local_88,0);
      *(undefined4 *)(param_4 + 8) = 0;
      if (*(int *)(param_4 + 0xc) != 0) {
        FScriptArray::ResizeTo(param_4,0,uVar2);
      }
      *(undefined4 *)(param_4 + 0x30) = 0xffffffff;
      *(undefined4 *)(param_4 + 0x34) = 0;
      *(undefined4 *)(param_4 + 0x28) = 0;
      if (*(int *)(param_4 + 0x2c) != 0) {
        *(undefined4 *)(param_4 + 0x2c) = 0;
        FScriptBitArray::Realloc(param_4 + 0x10,0);
      }
      puVar14 = *(undefined4 **)(param_4 + 0x40);
      if (*(undefined4 **)(param_4 + 0x40) == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)(param_4 + 0x38);
      }
      uVar12 = (longlong)*(int *)(param_4 + 0x48) & 0x3fffffffffffffff;
      if (puVar14 + *(int *)(param_4 + 0x48) < puVar14) {
        uVar12 = 0;
      }
      if (uVar12 != 0) {
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar14 = 0xffffffff;
          puVar14 = puVar14 + 1;
        }
      }
    }
    return '\x01';
  }
  local_88 = param_1[0xe];
  plVar9 = (longlong *)param_3[1];
  local_70 = *(undefined4 *)(param_1 + 0x10);
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0x84);
  uStack_68 = *(undefined4 *)(param_1 + 0x11);
  uStack_64 = *(undefined4 *)((longlong)param_1 + 0x8c);
  local_80 = param_1[0xf];
  local_60 = *(undefined4 *)(param_1 + 0x12);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x94);
  uStack_58 = *(undefined4 *)(param_1 + 0x13);
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x9c);
  local_78 = (longlong *)(*(int *)((longlong)param_1 + 0x44) + param_4);
  local_1a0 = (void *)0x0;
  local_50 = *(int *)(param_1 + 0x14);
  local_168 = param_2[5];
  local_f8 = param_2[6];
  cVar5 = '\x01';
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_10c = 0;
  local_104 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffffffffffff;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_94 = 0;
  local_198 = 0;
  local_1a8 = '\x01';
  if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
    (**(code **)(*param_3 + 0x50))(param_3,&local_198,4);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_3,&local_198,4);
    }
  }
  else {
    local_198 = *(int *)*plVar9;
    *plVar9 = *plVar9 + 4;
  }
  iVar18 = 1;
  if (local_198 != 0) {
    local_1a0 = (void *)FMemory::Malloc((longlong)*(int *)((longlong)param_1 + 0x94));
    plVar9 = (longlong *)param_1[0xe];
    if ((*(uint *)(plVar9 + 7) >> 9 & 1) == 0) {
      (**(code **)(*plVar9 + 0x330))(plVar9,local_1a0);
    }
    else {
      _guard_xfg_dispatch_icall_nop
                (local_1a0,0,(longlong)(*(int *)((longlong)plVar9 + 0x34) * (int)plVar9[6]));
    }
    pvVar1 = local_1a0;
    plVar9 = (longlong *)param_1[0xe];
    plVar10 = (longlong *)(**(code **)(*plVar9 + 0x338))(plVar9,&local_178);
    if (*plVar10 == local_168) {
      (**(code **)(*plVar9 + 0x2c0))
                (plVar9,param_3,
                 (longlong)pvVar1 +
                 (longlong)*(int *)((longlong)plVar9 + 0x44) +
                 (longlong)(*(int *)((longlong)plVar9 + 0x34) * local_130._4_4_),0);
    }
    else {
      local_1b8 = param_5;
      iVar6 = (**(code **)(*plVar9 + 0x2b0))(plVar9,&local_168,param_3,pvVar1);
      if (iVar6 != 2) {
        cVar5 = '\0';
        local_1a8 = '\0';
        goto LAB_14176cb92;
      }
    }
    iVar6 = FUN_141771a10(&local_88,local_1a0,0);
    if (iVar6 != -1) {
      iVar16 = 1;
      FUN_14176f320(&local_88,iVar6,1);
      bVar3 = (byte)iVar6 & 0x1f;
      uVar15 = 1 << bVar3 | 1U >> 0x20 - bVar3;
      plVar9 = local_78;
      do {
        if ((iVar6 < 0) || ((int)plVar9[5] <= iVar6)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        if (bVar19) {
          plVar10 = (longlong *)plVar9[4];
          if ((longlong *)plVar9[4] == (longlong *)0x0) {
            plVar10 = plVar9 + 2;
          }
          iVar7 = iVar6;
          if (iVar6 < 0) {
            iVar7 = iVar6 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar10 + (longlong)(iVar7 >> 5) * 4) & uVar15) == 0)
          goto LAB_14176ca38;
          bVar19 = true;
        }
        else {
LAB_14176ca38:
          bVar19 = false;
        }
        if (bVar19) {
          FScriptSet::RemoveAt(plVar9,iVar6,&uStack_68);
          iVar16 = iVar16 + -1;
          plVar9 = local_78;
        }
        iVar6 = iVar6 + 1;
        uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
        param_5 = local_188;
      } while (iVar16 != 0);
    }
    iVar6 = 1;
    if (1 < local_198) {
      do {
        pvVar1 = local_1a0;
        plVar9 = (longlong *)local_190[0xe];
        plVar10 = (longlong *)(**(code **)(*plVar9 + 0x338))(plVar9,&local_178);
        if (*plVar10 == local_168) {
          (**(code **)(*plVar9 + 0x2c0))
                    (plVar9,param_3,
                     (longlong)pvVar1 +
                     (longlong)*(int *)((longlong)plVar9 + 0x44) +
                     (longlong)(*(int *)((longlong)plVar9 + 0x34) * local_130._4_4_),0);
        }
        else {
          local_1b8 = param_5;
          (**(code **)(*plVar9 + 0x2b0))(plVar9,&local_168,param_3,pvVar1);
        }
        iVar16 = FUN_141771a10(&local_88,local_1a0,0);
        if (iVar16 != -1) {
          iVar7 = 1;
          FUN_14176f320(&local_88,iVar16,1);
          bVar3 = (byte)iVar16 & 0x1f;
          uVar15 = 1 << bVar3 | 1U >> 0x20 - bVar3;
          plVar9 = local_78;
          do {
            if ((iVar16 < 0) || ((int)plVar9[5] <= iVar16)) {
              bVar19 = false;
            }
            else {
              bVar19 = true;
            }
            if (bVar19) {
              plVar10 = (longlong *)plVar9[4];
              if ((longlong *)plVar9[4] == (longlong *)0x0) {
                plVar10 = plVar9 + 2;
              }
              iVar8 = iVar16;
              if (iVar16 < 0) {
                iVar8 = iVar16 + 0x1f;
              }
              if ((*(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) & uVar15) == 0)
              goto LAB_14176cb54;
              bVar19 = true;
            }
            else {
LAB_14176cb54:
              bVar19 = false;
            }
            if (bVar19) {
              FScriptSet::RemoveAt(plVar9,iVar16,&uStack_68);
              iVar7 = iVar7 + -1;
              plVar9 = local_78;
            }
            iVar16 = iVar16 + 1;
            uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
          } while (iVar7 != 0);
        }
        iVar6 = iVar6 + 1;
        param_5 = local_188;
      } while (iVar6 < local_198);
    }
    cVar5 = '\x01';
    param_1 = local_190;
  }
LAB_14176cb92:
  plVar9 = (longlong *)param_3[1];
  local_194 = 0;
  if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
    (**(code **)(*param_3 + 0x50))(param_3,&local_194,4);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_3,&local_194,4);
    }
  }
  else {
    local_194 = *(int *)*plVar9;
    *plVar9 = *plVar9 + 4;
  }
  bVar19 = true;
  if (cVar5 == '\0') goto LAB_14176d013;
  if (local_194 != 0) {
    if (local_1a0 == (void *)0x0) {
      local_1a0 = (void *)FMemory::Malloc((longlong)*(int *)((longlong)param_1 + 0x94));
      plVar9 = (longlong *)param_1[0xe];
      if ((*(uint *)(plVar9 + 7) >> 9 & 1) == 0) {
        (**(code **)(*plVar9 + 0x330))(plVar9,local_1a0);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  (local_1a0,0,(longlong)(*(int *)((longlong)plVar9 + 0x34) * (int)plVar9[6]));
      }
    }
    pvVar1 = local_1a0;
    plVar9 = (longlong *)param_1[0xe];
    plVar10 = (longlong *)(**(code **)(*plVar9 + 0x338))(plVar9,&local_178);
    if (*plVar10 == local_168) {
      (**(code **)(*plVar9 + 0x2c0))
                (plVar9,param_3,
                 (longlong)pvVar1 +
                 (longlong)*(int *)((longlong)plVar9 + 0x44) +
                 (longlong)(*(int *)((longlong)plVar9 + 0x34) * local_130._4_4_),0);
LAB_14176ccc4:
      iVar6 = FUN_141771a10(&local_88,local_1a0,0);
      bVar19 = iVar6 == -1;
      if (bVar19) {
        iVar6 = FUN_1417698f0(&local_88);
      }
      plVar9 = (longlong *)param_1[0xe];
      pvVar13 = (void *)((longlong)local_1a0 + (longlong)*(int *)((longlong)plVar9 + 0x44));
      lVar17 = (longlong)(iVar6 * local_50) + *local_78;
      pvVar1 = (void *)(*(int *)((longlong)plVar9 + 0x44) + lVar17);
      if (pvVar1 != pvVar13) {
        if ((*(uint *)(plVar9 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*plVar9 + 0x2e8))(plVar9,pvVar1,pvVar13,(int)plVar9[6]);
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    (pvVar1,pvVar13,(longlong)(*(int *)((longlong)plVar9 + 0x34) * (int)plVar9[6]));
        }
      }
      plVar9 = (longlong *)param_1[0xf];
      plVar10 = (longlong *)(**(code **)(*plVar9 + 0x338))(plVar9,&local_178);
      if (*plVar10 == local_f8) {
        (**(code **)(*plVar9 + 0x2c0))
                  (plVar9,param_3,
                   (longlong)*(int *)((longlong)plVar9 + 0x44) +
                   *(int *)((longlong)plVar9 + 0x34) * local_c0._4_4_ + lVar17,0);
      }
      else {
        local_1b8 = local_188;
        iVar6 = (**(code **)(*plVar9 + 0x2b0))(plVar9,&local_f8,param_3,lVar17);
        if (iVar6 != 2) {
          if ((bVar19) && ((int)local_78[1] != *(int *)((longlong)local_78 + 0x34))) {
            FUN_14176f320(&local_88,0);
            plVar9 = local_78;
            *(undefined4 *)(local_78 + 1) = 0;
            if (*(int *)((longlong)local_78 + 0xc) != 0) {
              FScriptArray::ResizeTo(local_78,0,local_50);
            }
            *(undefined4 *)(plVar9 + 6) = 0xffffffff;
            *(undefined4 *)((longlong)plVar9 + 0x34) = 0;
            *(undefined4 *)(plVar9 + 5) = 0;
            if (*(int *)((longlong)plVar9 + 0x2c) != 0) {
              *(undefined4 *)((longlong)plVar9 + 0x2c) = 0;
              FScriptBitArray::Realloc(plVar9 + 2,0);
            }
            plVar10 = (longlong *)plVar9[8];
            if ((longlong *)plVar9[8] == (longlong *)0x0) {
              plVar10 = plVar9 + 7;
            }
            uVar12 = (longlong)(int)plVar9[9] & 0x3fffffffffffffff;
            if ((longlong *)((longlong)(int)plVar9[9] * 4 + (longlong)plVar10) < plVar10) {
              uVar12 = 0;
            }
            if (uVar12 != 0) {
              for (; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)plVar10 = 0xffffffff;
                plVar10 = (longlong *)((longlong)plVar10 + 4);
              }
            }
          }
          goto LAB_14176cfd1;
        }
      }
      uVar4 = local_188;
      cVar5 = local_1a8;
      if (1 < local_194) {
        do {
          pvVar1 = local_1a0;
          plVar9 = (longlong *)param_1[0xe];
          plVar10 = (longlong *)(**(code **)(*plVar9 + 0x338))(plVar9,&local_178);
          if (*plVar10 == local_168) {
            (**(code **)(*plVar9 + 0x2c0))
                      (plVar9,param_3,
                       (longlong)pvVar1 +
                       (longlong)*(int *)((longlong)plVar9 + 0x44) +
                       (longlong)(*(int *)((longlong)plVar9 + 0x34) * local_130._4_4_),0);
          }
          else {
            local_1b8 = uVar4;
            (**(code **)(*plVar9 + 0x2b0))(plVar9,&local_168,param_3,pvVar1);
          }
          iVar6 = FUN_141771a10(&local_88,local_1a0,0);
          if (iVar6 == -1) {
            iVar6 = FUN_1417698f0(&local_88);
          }
          plVar9 = (longlong *)param_1[0xe];
          pvVar13 = (void *)((longlong)local_1a0 + (longlong)*(int *)((longlong)plVar9 + 0x44));
          lVar17 = (longlong)(iVar6 * local_50) + *local_78;
          pvVar1 = (void *)(*(int *)((longlong)plVar9 + 0x44) + lVar17);
          if (pvVar1 != pvVar13) {
            if ((*(uint *)(plVar9 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar9 + 0x2e8))(plVar9,pvVar1,pvVar13);
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (pvVar1,pvVar13,
                         (longlong)(*(int *)((longlong)plVar9 + 0x34) * (int)plVar9[6]));
            }
          }
          plVar9 = (longlong *)param_1[0xf];
          plVar10 = (longlong *)(**(code **)(*plVar9 + 0x338))(plVar9,&local_190);
          if (*plVar10 == local_f8) {
            (**(code **)(*plVar9 + 0x2c0))
                      (plVar9,param_3,
                       (longlong)*(int *)((longlong)plVar9 + 0x44) +
                       *(int *)((longlong)plVar9 + 0x34) * local_c0._4_4_ + lVar17);
          }
          else {
            local_1b8 = uVar4;
            (**(code **)(*plVar9 + 0x2b0))(plVar9,&local_f8,param_3);
          }
          iVar18 = iVar18 + 1;
          cVar5 = local_1a8;
        } while (iVar18 < local_194);
      }
    }
    else {
      local_1b8 = local_188;
      iVar6 = (**(code **)(*plVar9 + 0x2b0))(plVar9,&local_168,param_3,pvVar1);
      if (iVar6 == 2) goto LAB_14176ccc4;
LAB_14176cfd1:
      cVar5 = '\0';
    }
    local_190 = &local_88;
    ppuStack_170 = &local_190;
    local_178 = &LAB_141769f80;
    FScriptSet::Rehash(local_78,&uStack_68,&local_178);
  }
  bVar19 = cVar5 == '\0';
LAB_14176d013:
  if (local_1a0 != (void *)0x0) {
    plVar9 = (longlong *)param_1[0xe];
    if ((~(byte)((ulonglong)plVar9[7] >> 0x24) & 1) != 0) {
      (**(code **)(*plVar9 + 0x328))(plVar9,local_1a0);
    }
    FMemory::Free(local_1a0);
  }
  return !bVar19 + '\x01';
}



// FUNCTION 14176d1e0 FUN_14176d1e0 body=367 status=ok
// SIG undefined FUN_14176d1e0(void)

undefined8 FUN_14176d1e0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined2 *local_30;
  undefined8 local_28;
  undefined1 local_20 [8];
  longlong *local_18;
  
  local_res10 = 0xd;
  if (*param_2 == 0xd) {
    local_30 = (undefined2 *)0x0;
    local_28 = 0;
    FUN_14158ce90(param_3,&local_30);
    iVar3 = *(int *)((longlong)param_2 + 0x3c);
    puVar6 = &DAT_143f3eda8;
    if ((int)local_28 != 0) {
      puVar6 = local_30;
    }
    puVar5 = (undefined8 *)FName::FName(local_38,puVar6,1);
    *(undefined8 *)((longlong)*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x34) * iVar3 + param_4)
         = *puVar5;
    if (local_30 != (undefined2 *)0x0) {
      FMemory::Free();
      return 2;
    }
  }
  else {
    local_res10 = 0xe;
    if (*param_2 != 0xe) {
      return 0;
    }
    FText::FText(local_20);
    (**(code **)(*param_3 + 0x38))(param_3,local_20);
    puVar5 = (undefined8 *)FText::ToString(local_20);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar5;
    }
    FName::FName(&local_res10,puVar6,1);
    *(undefined8 *)
     ((longlong)*(int *)(param_1 + 0x44) +
     *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4) = local_res10;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
  }
  return 2;
}



// FUNCTION 14176d350 FUN_14176d350 body=451 status=ok
// SIG undefined FUN_14176d350(void)

undefined8 FUN_14176d350(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_48;
  undefined8 local_44;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e7d00) && (_Init_thread_header(&DAT_1469e7d00), DAT_1469e7d00 == -1))
  {
    FName::FName(&DAT_1469e7cf8,"AssetObjectProperty",1);
    _Init_thread_footer(&DAT_1469e7d00);
  }
  if ((*param_2 == 0x13) || (*param_2 == DAT_1469e7cf8)) {
    local_30 = 0;
    local_38 = 0;
    local_28 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    (**(code **)(*param_3 + 0x20))(param_3,&local_48);
    cVar1 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
    if (cVar1 == '\0') {
      lVar2 = FUN_1405ec200(&local_48);
    }
    else {
      lVar2 = FWeakObjectPtr::Get();
      if (lVar2 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != local_44._4_4_) && (local_38 != 0)) {
          lVar2 = FUN_141796df0(&local_38);
          FWeakObjectPtr::operator=(&local_48,lVar2);
          if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_44 = CONCAT44(DAT_1464b56f4,(undefined4)local_44);
          }
          lVar2 = FWeakObjectPtr::Get(&local_48);
        }
      }
    }
    *(longlong *)
     ((longlong)*(int *)((longlong)param_1 + 0x44) +
     *(int *)((longlong)param_2 + 0x3c) * *(int *)((longlong)param_1 + 0x34) + param_4) = lVar2;
    (**(code **)(*param_1 + 0x390))
              (param_1,(longlong)*(int *)((longlong)param_1 + 0x44) +
                       *(int *)((longlong)param_2 + 0x3c) * *(int *)((longlong)param_1 + 0x34) +
                       param_4);
    if (local_30 != 0) {
      FMemory::Free();
    }
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14176d520 FUN_14176d520 body=1787 status=ok
// SIG undefined FUN_14176d520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_14176d520(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  void *pvVar10;
  void *pvVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  void *local_118;
  int local_110;
  int local_10c;
  undefined8 *local_108 [2];
  undefined1 *local_f8;
  undefined8 **ppuStack_f0;
  longlong local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  (**(code **)(*param_3 + 0x70))(param_3,*(undefined8 *)(param_1 + 0x70));
  if (*param_2 == 0x1d) {
    local_118 = (void *)0x0;
    if (param_2[5] != 0) {
      plVar5 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x70) + 0x338))
                         (*(longlong **)(param_1 + 0x70),local_108);
      local_e8 = param_2[5];
      if (local_e8 != *plVar5) {
        local_78 = *(undefined8 *)(param_1 + 0x70);
        bVar1 = true;
        local_68 = *(undefined4 *)(param_1 + 0x78);
        uStack_64 = *(undefined4 *)(param_1 + 0x7c);
        uStack_60 = *(undefined4 *)(param_1 + 0x80);
        uStack_5c = *(undefined4 *)(param_1 + 0x84);
        local_58 = *(undefined8 *)(param_1 + 0x88);
        local_70 = (longlong *)(*(int *)(param_1 + 0x44) + param_4);
        local_50 = *(int *)(param_1 + 0x90);
        plVar5 = (longlong *)param_3[1];
        local_118 = (void *)0x0;
        local_e0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0xffffffffffffffff;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_8c = 0;
        local_84 = 0;
        local_10c = 0;
        if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
          (**(code **)(*param_3 + 0x50))(param_3,&local_10c,4);
          if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_3,&local_10c,4);
          }
        }
        else {
          local_10c = *(int *)*plVar5;
          *plVar5 = *plVar5 + 4;
        }
        iVar13 = 1;
        if (local_10c != 0) {
          local_118 = (void *)FMemory::Malloc((longlong)*(int *)(param_1 + 0x84));
          plVar5 = *(longlong **)(param_1 + 0x70);
          if ((*(uint *)(plVar5 + 7) >> 9 & 1) == 0) {
            (**(code **)(*plVar5 + 0x330))(plVar5,local_118);
          }
          else {
            _guard_xfg_dispatch_icall_nop
                      (local_118,0,(longlong)(*(int *)((longlong)plVar5 + 0x34) * (int)plVar5[6]));
          }
          local_128 = param_5;
          iVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2b0))
                            (*(longlong **)(param_1 + 0x70),&local_e8,param_3,local_118);
          if (iVar3 == 2) {
            iVar3 = FUN_141771940(&local_78,local_118,0);
            if (iVar3 != -1) {
              FScriptSetHelper::RemoveAt(&local_78,iVar3,1);
            }
            iVar3 = 1;
            if (1 < local_10c) {
              do {
                local_128 = param_5;
                (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2b0))
                          (*(longlong **)(param_1 + 0x70),&local_e8,param_3,local_118);
                iVar4 = FUN_141771940(&local_78,local_118,0);
                if (iVar4 != -1) {
                  FScriptSetHelper::RemoveAt(&local_78,iVar4,1);
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < local_10c);
            }
          }
          else {
            bVar1 = false;
          }
        }
        plVar5 = (longlong *)param_3[1];
        local_110 = 0;
        if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
          (**(code **)(*param_3 + 0x50))(param_3,&local_110,4);
          if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_3,&local_110,4);
          }
        }
        else {
          local_110 = *(int *)*plVar5;
          *plVar5 = *plVar5 + 4;
        }
        bVar15 = !bVar1;
        if (!bVar15) {
          if (local_110 != 0) {
            if (local_118 == (void *)0x0) {
              local_118 = (void *)FMemory::Malloc((longlong)*(int *)(param_1 + 0x84));
              plVar5 = *(longlong **)(param_1 + 0x70);
              if ((*(uint *)(plVar5 + 7) >> 9 & 1) == 0) {
                (**(code **)(*plVar5 + 0x330))(plVar5,local_118);
              }
              else {
                _guard_xfg_dispatch_icall_nop
                          (local_118,0,
                           (longlong)(*(int *)((longlong)plVar5 + 0x34) * (int)plVar5[6]));
              }
            }
            local_128 = param_5;
            iVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2b0))
                              (*(longlong **)(param_1 + 0x70),&local_e8,param_3,local_118);
            if (iVar3 == 2) {
              iVar3 = FUN_141771940(&local_78,local_118,0);
              if (iVar3 == -1) {
                iVar3 = FUN_141769a00(&local_78);
                plVar5 = *(longlong **)(param_1 + 0x70);
                pvVar11 = (void *)((longlong)local_118 + (longlong)*(int *)((longlong)plVar5 + 0x44)
                                  );
                pvVar10 = (void *)((longlong)(local_50 * iVar3) +
                                   (longlong)*(int *)((longlong)plVar5 + 0x44) + *local_70);
                if (pvVar10 != pvVar11) {
                  if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) == 0) {
                    (**(code **)(*plVar5 + 0x2e8))(plVar5,pvVar10,pvVar11,(int)plVar5[6]);
                  }
                  else {
                    _guard_xfg_dispatch_icall_nop
                              (pvVar10,pvVar11,
                               (longlong)(*(int *)((longlong)plVar5 + 0x34) * (int)plVar5[6]));
                  }
                }
              }
              if (1 < local_110) {
                do {
                  local_128 = param_5;
                  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2b0))
                            (*(longlong **)(param_1 + 0x70),&local_e8,param_3,local_118);
                  iVar3 = FUN_141771940(&local_78,local_118,0);
                  if (iVar3 == -1) {
                    iVar3 = FUN_141769a00(&local_78);
                    plVar5 = *(longlong **)(param_1 + 0x70);
                    pvVar11 = (void *)((longlong)local_118 +
                                      (longlong)*(int *)((longlong)plVar5 + 0x44));
                    pvVar10 = (void *)((longlong)(local_50 * iVar3) +
                                       (longlong)*(int *)((longlong)plVar5 + 0x44) + *local_70);
                    if (pvVar10 != pvVar11) {
                      if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) == 0) {
                        (**(code **)(*plVar5 + 0x2e8))(plVar5,pvVar10,pvVar11,(int)plVar5[6]);
                      }
                      else {
                        _guard_xfg_dispatch_icall_nop
                                  (pvVar10,pvVar11,
                                   (longlong)(*(int *)((longlong)plVar5 + 0x34) * (int)plVar5[6]));
                      }
                    }
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar13 < local_110);
              }
            }
            else {
              bVar1 = false;
            }
          }
          local_108[0] = &local_78;
          ppuStack_f0 = local_108;
          local_f8 = &LAB_141769f80;
          FScriptSet::Rehash(local_70,&local_68,&local_f8);
          bVar15 = !bVar1;
        }
        if (local_118 != (void *)0x0) {
          plVar5 = *(longlong **)(param_1 + 0x70);
          if ((~(byte)((ulonglong)plVar5[7] >> 0x24) & 1) != 0) {
            (**(code **)(*plVar5 + 0x328))(plVar5,local_118);
          }
          FMemory::Free(local_118);
        }
        return !bVar15 + '\x01';
      }
    }
    lVar14 = *(longlong *)(param_1 + 0x70);
    if (lVar14 != 0) {
      lVar6 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) &&
         ((*(longlong *)(lVar14 + 0x70) == 0 ||
          ((plVar5 = *(longlong **)(*(longlong *)(lVar14 + 0x70) + 0x90), plVar5 != (longlong *)0x0
           && (cVar2 = (**(code **)(*plVar5 + 0xf8))(), cVar2 == '\0')))))) {
        local_68 = *(undefined4 *)(param_1 + 0x78);
        uStack_64 = *(undefined4 *)(param_1 + 0x7c);
        uStack_60 = *(undefined4 *)(param_1 + 0x80);
        uStack_5c = *(undefined4 *)(param_1 + 0x84);
        local_110 = *(int *)(param_1 + 0x90);
        plVar12 = (longlong *)(*(int *)(param_1 + 0x44) + param_4);
        plVar5 = *(longlong **)(param_1 + 0x70);
        iVar13 = (int)plVar12[1] - *(int *)((longlong)plVar12 + 0x34);
        if (iVar13 != 0) {
          if ((plVar5[7] & 0x1040000000U) == 0) {
            uVar9 = 1;
            lVar14 = *plVar12;
            pvVar10 = (void *)(*(ulonglong *)(param_1 + 0x80) >> 0x20);
            uVar7 = 0;
            local_118 = pvVar10;
            do {
              iVar3 = (int)uVar7;
              if ((iVar3 < 0) || ((int)plVar12[5] <= iVar3)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                plVar8 = (longlong *)plVar12[4];
                if ((longlong *)plVar12[4] == (longlong *)0x0) {
                  plVar8 = plVar12 + 2;
                }
                iVar4 = iVar3;
                if (iVar3 < 0) {
                  iVar4 = iVar3 + 0x1f;
                }
                if ((*(uint *)((longlong)plVar8 + (longlong)(iVar4 >> 5) * 4) & uVar9) == 0)
                goto LAB_14176db32;
                bVar1 = true;
              }
              else {
LAB_14176db32:
                bVar1 = false;
              }
              if (bVar1) {
                if ((~(byte)((ulonglong)plVar5[7] >> 0x24) & 1) != 0) {
                  (**(code **)(*plVar5 + 0x328))(plVar5,*(int *)((longlong)plVar5 + 0x44) + lVar14);
                  pvVar10 = local_118;
                }
                iVar13 = iVar13 + -1;
              }
              lVar14 = lVar14 + (longlong)pvVar10;
              uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
              uVar7 = (ulonglong)(iVar3 + 1);
            } while (iVar13 != 0);
          }
          *(undefined4 *)(plVar12 + 1) = 0;
          if (*(int *)((longlong)plVar12 + 0xc) != 0) {
            FScriptArray::ResizeTo(plVar12,0,local_110);
          }
          *(undefined4 *)(plVar12 + 6) = 0xffffffff;
          *(undefined4 *)((longlong)plVar12 + 0x34) = 0;
          *(undefined4 *)(plVar12 + 5) = 0;
          if (*(int *)((longlong)plVar12 + 0x2c) != 0) {
            *(undefined4 *)((longlong)plVar12 + 0x2c) = 0;
            FScriptBitArray::Realloc(plVar12 + 2,0);
          }
          plVar5 = (longlong *)plVar12[8];
          if ((longlong *)plVar12[8] == (longlong *)0x0) {
            plVar5 = plVar12 + 7;
          }
          uVar7 = (longlong)(int)plVar12[9] & 0x3fffffffffffffff;
          if ((longlong *)((longlong)plVar5 + (longlong)(int)plVar12[9] * 4) < plVar5) {
            uVar7 = 0;
          }
          if (uVar7 != 0) {
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)plVar5 = 0xffffffff;
              plVar5 = (longlong *)((longlong)plVar5 + 4);
            }
          }
        }
        return '\x01';
      }
    }
  }
  return '\0';
}



// FUNCTION 14176dc20 FUN_14176dc20 body=1006 status=ok
// SIG undefined FUN_14176dc20(void)

byte FUN_14176dc20(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  ulonglong local_54;
  longlong local_48;
  longlong local_40 [3];
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_1469e7d40) && (_Init_thread_header(&DAT_1469e7d40), DAT_1469e7d40 == -1)) {
    FName::FName(&DAT_1469e7d38,"AssetObjectProperty",1);
    _Init_thread_footer(&DAT_1469e7d40);
  }
  if ((*piVar6 < DAT_1469e7d50) && (_Init_thread_header(&DAT_1469e7d50), DAT_1469e7d50 == -1)) {
    FName::FName(&DAT_1469e7d48,"SoftObjectPath",1);
    _Init_thread_footer(&DAT_1469e7d50);
  }
  if ((*piVar6 < DAT_1469e7d60) && (_Init_thread_header(&DAT_1469e7d60), DAT_1469e7d60 == -1)) {
    FName::FName(&DAT_1469e7d58,"SoftClassPath",1);
    _Init_thread_footer(&DAT_1469e7d60);
  }
  if ((*piVar6 < DAT_1469e7d70) && (_Init_thread_header(&DAT_1469e7d70), DAT_1469e7d70 == -1)) {
    FName::FName(&DAT_1469e7d68,"StringAssetReference",1);
    _Init_thread_footer(&DAT_1469e7d70);
  }
  if ((*piVar6 < DAT_1469e7d80) && (_Init_thread_header(&DAT_1469e7d80), DAT_1469e7d80 == -1)) {
    FName::FName(&DAT_1469e7d78,"StringClassReference",1);
    _Init_thread_footer(&DAT_1469e7d80);
  }
  lVar1 = *param_2;
  if (lVar1 == DAT_1469e7d38) {
    lVar1 = param_1[2];
    lVar8 = (longlong)*(int *)((longlong)param_1 + 0x44) +
            *(int *)((longlong)param_2 + 0x3c) * *(int *)((longlong)param_1 + 0x34) + param_4;
    lVar4 = UBoolProperty::GetPrivateStaticClass();
    if (lVar1 == lVar4) {
      if ((*(byte *)(param_3 + 0x28) & 1) != 0) {
        uVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x71);
        if ((char)param_2[1] == '\0') {
          *(byte *)(uVar5 + lVar8) = ~*(byte *)((longlong)param_1 + 0x73) & *(byte *)(uVar5 + lVar8)
          ;
        }
        else {
          *(byte *)(uVar5 + lVar8) =
               ~*(byte *)((longlong)param_1 + 0x73) & *(byte *)(uVar5 + lVar8) |
               *(byte *)((longlong)param_1 + 0x72);
        }
      }
    }
    else {
      local_88 = param_3;
      local_80 = param_1;
      FUN_141705270(&local_88);
      (**(code **)(*param_1 + 0x2c0))(param_1,param_3,lVar8,0);
      FSerializedPropertyScope::PopProperty(&local_88);
    }
    if ((*(byte *)(param_3 + 0x29) & 1) != 0) {
      return 1;
    }
  }
  else {
    if (lVar1 == 5) {
      cVar3 = FUN_141797630(*(int *)((longlong)param_2 + 0x3c) * *(int *)((longlong)param_1 + 0x34)
                            + param_4 + (longlong)*(int *)((longlong)param_1 + 0x44) + 0x10,param_2,
                            param_3);
      return -(cVar3 != '\0') & 2;
    }
    if ((lVar1 != 10) ||
       ((((lVar1 = param_2[3], lVar1 != DAT_1469e7d48 && (lVar1 != DAT_1469e7d58)) &&
         (lVar1 != DAT_1469e7d68)) && (lVar1 != DAT_1469e7d78)))) {
      return 0;
    }
    local_88 = 0;
    local_80 = (longlong *)0x0;
    local_78 = 0;
    FUN_141797610(&local_88,param_3);
    local_40[0] = 0;
    local_70 = local_88;
    local_40[1] = 0;
    local_48 = 0;
    local_54 = 0;
    local_58 = 0xffffffff;
    FString::FString(local_68,&local_80);
    FSoftObjectPath::operator=(&local_48,&local_70);
    uVar5 = local_54;
    local_54 = local_54 & 0xffffffff;
    uVar2 = local_54;
    puVar7 = (undefined4 *)
             ((longlong)*(int *)((longlong)param_1 + 0x44) +
             *(int *)((longlong)param_2 + 0x3c) * *(int *)((longlong)param_1 + 0x34) + param_4);
    *puVar7 = local_58;
    local_54._0_4_ = (undefined4)uVar5;
    puVar7[1] = (undefined4)local_54;
    puVar7[2] = 0;
    local_70 = local_48;
    local_54 = uVar2;
    FString::FString(local_68,local_40);
    FSoftObjectPath::operator=(puVar7 + 4,&local_70);
    if (local_40[0] != 0) {
      FMemory::Free();
    }
    if (local_80 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return 2;
}



// FUNCTION 14176e010 FUN_14176e010 body=570 status=ok
// SIG undefined FUN_14176e010(void)

undefined8 FUN_14176e010(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  void **ppvVar9;
  void *pvVar10;
  void *_Src;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  void *local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if (*param_2 == 0xe) {
    FText::FText(local_48);
    (**(code **)(*param_3 + 0x38))(param_3,local_48);
    lVar7 = FTextInspector::GetSourceString(local_48);
    if (lVar7 == 0) {
      local_58 = (void *)0x0;
      bVar6 = false;
      bVar5 = true;
      local_50 = 0;
      ppvVar9 = &local_58;
      pvVar10 = local_78;
    }
    else {
      puVar8 = (undefined8 *)FTextInspector::GetSourceString(local_48);
      local_78 = (void *)0x0;
      iVar3 = *(int *)(puVar8 + 1);
      pvVar4 = (void *)*puVar8;
      local_70 = iVar3;
      if (iVar3 == 0) {
        bVar6 = true;
        bVar5 = false;
        local_6c = 0;
        ppvVar9 = &local_78;
        pvVar10 = (void *)0x0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar3,0);
        pvVar10 = local_78;
        _guard_xfg_dispatch_icall_nop(local_78,pvVar4,(longlong)iVar3 * 2);
        ppvVar9 = &local_78;
        bVar6 = true;
        bVar5 = false;
      }
    }
    pvVar4 = local_58;
    local_60 = *(int *)(ppvVar9 + 1);
    lVar7 = (longlong)local_60;
    local_68 = (void *)0x0;
    if (local_60 == 0) {
      _Src = (void *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
      _Src = local_68;
      _guard_xfg_dispatch_icall_nop(local_68,*ppvVar9,lVar7 * 2);
    }
    iVar3 = local_60;
    if ((bVar5) && (pvVar4 != (void *)0x0)) {
      FMemory::Free(pvVar4);
    }
    if ((bVar6) && (pvVar10 != (void *)0x0)) {
      FMemory::Free(pvVar10);
    }
    ppvVar9 = (void **)((longlong)*(int *)(param_1 + 0x44) +
                       *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4);
    if (ppvVar9 != &local_68) {
      *(int *)(ppvVar9 + 1) = iVar3;
      if ((iVar3 == 0) && (*(int *)((longlong)ppvVar9 + 0xc) == 0)) {
        *(undefined4 *)((longlong)ppvVar9 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar9,iVar3);
        _guard_xfg_dispatch_icall_nop(*ppvVar9,_Src,(longlong)iVar3 * 2);
      }
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 2;
  }
  return 0;
}



// FUNCTION 14176e250 FUN_14176e250 body=564 status=ok
// SIG undefined FUN_14176e250(void)

undefined8 FUN_14176e250(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 == 0) {
    return 0;
  }
  if (((*(uint *)(lVar1 + 0x88) & 0x80000) == 0) ||
     ((local_res8 = 10, *param_2 == 10 && (param_2[3] == *(longlong *)(lVar1 + 0x18))))) {
    local_res8 = 10;
    if (*param_2 != 10) {
      return 0;
    }
    if (param_2[3] == *(longlong *)(lVar1 + 0x18)) {
      return 0;
    }
    cVar3 = FUN_1417697a0(&local_res8,param_3,param_2,param_1);
    if (cVar3 != '\0') {
      return 0;
    }
    if ((param_2[3] == 0x3b) &&
       (local_res8 = 0x39, *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) == 0x39)) {
      plVar2 = (longlong *)param_3[1];
      puVar4 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) +
               *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4);
      if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_28,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,&local_28,4);
        }
      }
      else {
        local_28 = *(undefined4 *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      plVar2 = (longlong *)param_3[1];
      if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_24,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,&local_24,4);
        }
      }
      else {
        local_24 = *(undefined4 *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      plVar2 = (longlong *)param_3[1];
      if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,local_20,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,local_20,4);
        }
      }
      else {
        local_20[0] = *(undefined4 *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      *puVar4 = local_28;
      puVar4[1] = local_24;
      puVar4[2] = local_20[0];
      return 2;
    }
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x90) + 0xf0))
                      (*(longlong **)(lVar1 + 0x90),param_2,param_3,
                       (longlong)*(int *)(param_1 + 0x44) +
                       *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4);
    if (cVar3 != '\0') {
      return 2;
    }
  }
  return 1;
}



// FUNCTION 14176e4f0 FUN_14176e4f0 body=126 status=ok
// SIG undefined FUN_14176e4f0(void)

void FUN_14176e4f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_4;
  lVar5 = 0;
  if (3 < lVar4) {
    puVar1 = (undefined4 *)(param_2 + 4);
    lVar3 = param_3 - param_2;
    lVar2 = (lVar4 - 4U >> 2) + 1;
    lVar5 = lVar2 * 4;
    do {
      puVar1[-1] = *(undefined4 *)(lVar3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(lVar3 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(lVar3 + 4 + (longlong)puVar1);
      puVar1[2] = *(undefined4 *)(lVar3 + 8 + (longlong)puVar1);
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (lVar5 < lVar4) {
    puVar1 = (undefined4 *)(param_2 + lVar5 * 4);
    lVar4 = lVar4 - lVar5;
    do {
      *puVar1 = *(undefined4 *)((longlong)puVar1 + (param_3 - param_2));
      puVar1 = puVar1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14176e570 FUN_14176e570 body=146 status=ok
// SIG undefined FUN_14176e570(void)

void FUN_14176e570(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_4;
  lVar5 = 0;
  if (3 < lVar4) {
    puVar1 = (undefined8 *)(param_2 + 8);
    lVar3 = param_3 - param_2;
    lVar2 = (lVar4 - 4U >> 2) + 1;
    lVar5 = lVar2 * 4;
    do {
      puVar1[-1] = *(undefined8 *)(lVar3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(lVar3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(lVar3 + 8 + (longlong)puVar1);
      puVar1[2] = *(undefined8 *)(lVar3 + 0x10 + (longlong)puVar1);
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (lVar5 < lVar4) {
    puVar1 = (undefined8 *)(param_2 + lVar5 * 8);
    lVar4 = lVar4 - lVar5;
    do {
      *puVar1 = *(undefined8 *)((longlong)puVar1 + (param_3 - param_2));
      puVar1 = puVar1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14176e680 CopyValuesInternal body=133 status=ok
// SIG undefined CopyValuesInternal(void)

void TProperty<FSoftObjectPtr,UObjectPropertyBase>::CopyValuesInternal
               (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (0 < param_4) {
    param_2 = param_2 - param_3;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined4 *)(param_3 + 4);
    do {
      *(undefined4 *)(param_2 + -4 + (longlong)puVar1) = puVar1[-1];
      *(undefined4 *)(param_2 + (longlong)puVar1) = *puVar1;
      *(undefined4 *)(param_2 + 4 + (longlong)puVar1) = puVar1[1];
      local_28 = *(undefined8 *)(puVar1 + 3);
      FString::FString(local_20,puVar1 + 5);
      FSoftObjectPath::operator=(param_2 + 0xc + (longlong)puVar1,&local_28);
      puVar1 = puVar1 + 10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14176e740 CopyValuesInternal body=219 status=ok
// SIG undefined CopyValuesInternal(void)

void TProperty<TMulticastScriptDelegate<FWeakObjectPtr>,UProperty>::CopyValuesInternal
               (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  
  if (0 < param_4) {
    piVar8 = (int *)(param_2 + 0xc);
    lVar7 = (longlong)param_4;
    do {
      plVar3 = (longlong *)((param_3 - param_2) + -0xc + (longlong)piVar8);
      plVar1 = (longlong *)(piVar8 + -3);
      if (plVar1 != plVar3) {
        iVar6 = *(int *)((longlong)piVar8 + (param_3 - param_2) + -4);
        lVar2 = *plVar3;
        piVar8[-1] = iVar6;
        if ((iVar6 == 0) && (*piVar8 == 0)) {
          *piVar8 = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
          if (iVar6 != 0) {
            puVar4 = (undefined8 *)(lVar2 + 8);
            puVar5 = (undefined4 *)*plVar1;
            do {
              *puVar5 = *(undefined4 *)(puVar4 + -1);
              puVar5[1] = *(undefined4 *)((longlong)puVar4 + -4);
              *(undefined8 *)(puVar5 + 2) = *puVar4;
              iVar6 = iVar6 + -1;
              puVar4 = puVar4 + 2;
              puVar5 = puVar5 + 4;
            } while (iVar6 != 0);
          }
        }
      }
      piVar8 = piVar8 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 14176e890 CopyValuesInternal body=178 status=ok
// SIG undefined CopyValuesInternal(void)

void TProperty<FString,UProperty>::CopyValuesInternal
               (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  
  if (0 < param_4) {
    piVar4 = (int *)(param_2 + 0xc);
    lVar5 = (longlong)param_4;
    do {
      piVar3 = (int *)((param_3 - param_2) + -0xc + (longlong)piVar4);
      piVar1 = piVar4 + -3;
      if (piVar1 != piVar3) {
        iVar2 = *(int *)((longlong)piVar4 + (param_3 - param_2) + -4);
        _Src = *(void **)piVar3;
        piVar4[-1] = iVar2;
        if ((iVar2 == 0) && (*piVar4 == 0)) {
          *piVar4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      piVar4 = piVar4 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14176e950 FUN_14176e950 body=809 status=ok
// SIG undefined FUN_14176e950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14176e950(longlong **param_1,longlong *param_2,longlong *param_3)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong **pplVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  longlong *local_98;
  longlong ***ppplStack_90;
  longlong **local_88 [2];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8 = *(int *)(param_1 + 0x14);
  local_60 = *(undefined4 *)(param_1 + 0x10);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x84);
  uStack_58 = *(undefined4 *)(param_1 + 0x11);
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x8c);
  local_50 = *(undefined4 *)(param_1 + 0x12);
  iStack_4c = *(int *)((longlong)param_1 + 0x94);
  uStack_48 = *(undefined4 *)(param_1 + 0x13);
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x9c);
  local_78 = param_1[0xe];
  local_70 = param_1[0xf];
  local_40 = *(int *)(param_1 + 0x14);
  iVar12 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  local_98 = param_3;
  local_88[0] = param_1;
  local_68 = param_2;
  if ((int)param_2[1] == *(int *)((longlong)param_2 + 0x34)) {
    if (iVar12 == 0) {
      return;
    }
  }
  else {
    FUN_14176f320(&local_78,0);
  }
  FScriptSet::Empty(local_68,iVar12,&uStack_58);
  if (iVar12 != 0) {
    iVar9 = 0;
    iVar13 = 0;
    uVar14 = 1;
    iVar6 = local_a8;
    do {
      if ((-1 < iVar9) && (iVar9 < (int)param_3[5])) {
        plVar8 = (longlong *)param_3[4];
        if ((longlong *)param_3[4] == (longlong *)0x0) {
          plVar8 = param_3 + 2;
        }
        iVar7 = iVar9;
        if (iVar9 < 0) {
          iVar7 = iVar9 + 0x1f;
        }
        iVar6 = local_a8;
        if ((*(uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4) & uVar14) != 0) {
          local_a4 = FUN_141769b40(local_68);
          uVar2 = *(uint *)(local_70 + 7);
          uVar3 = *(uint *)(local_78 + 7);
          pvVar11 = (void *)((longlong)(local_40 * local_a4) + *local_68);
          if ((((uVar3 >> 9 & 1) == 0) && ((uVar2 >> 9 & 1) == 0)) ||
             (_guard_xfg_dispatch_icall_nop(pvVar11,0,(longlong)iStack_4c), (uVar3 >> 9 & 1) == 0))
          {
            if ((*(uint *)(local_78 + 7) >> 9 & 1) == 0) {
              (**(code **)(*local_78 + 0x330))(local_78);
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)*(int *)((longlong)local_78 + 0x44) + (longlong)pvVar11)
                         ,0,(longlong)(*(int *)((longlong)local_78 + 0x34) * (int)local_78[6]));
            }
          }
          if ((uVar2 >> 9 & 1) == 0) {
            if ((*(uint *)(local_70 + 7) >> 9 & 1) == 0) {
              (**(code **)(*local_70 + 0x330))
                        (local_70,(longlong)*(int *)((longlong)local_70 + 0x44) + (longlong)pvVar11)
              ;
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)*(int *)((longlong)local_70 + 0x44) + (longlong)pvVar11)
                         ,0,(longlong)(*(int *)((longlong)local_70 + 0x34) * (int)local_70[6]));
            }
          }
          pplVar5 = local_88[0];
          lVar4 = *local_98;
          plVar8 = local_88[0][0xe];
          lVar10 = (longlong)(local_40 * local_a4) + *local_68;
          pvVar11 = (void *)((longlong)*(int *)((longlong)plVar8 + 0x44) + iVar13 + lVar4);
          pvVar1 = (void *)(*(int *)((longlong)plVar8 + 0x44) + lVar10);
          if (pvVar1 != pvVar11) {
            if ((*(uint *)(plVar8 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar8 + 0x2e8))(plVar8,pvVar1,pvVar11,(int)plVar8[6]);
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (pvVar1,pvVar11,
                         (longlong)(*(int *)((longlong)plVar8 + 0x34) * (int)plVar8[6]));
            }
          }
          plVar8 = pplVar5[0xf];
          pvVar11 = (void *)((longlong)*(int *)((longlong)plVar8 + 0x44) + iVar13 + lVar4);
          pvVar1 = (void *)(*(int *)((longlong)plVar8 + 0x44) + lVar10);
          if (pvVar1 != pvVar11) {
            if ((*(uint *)(plVar8 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar8 + 0x2e8))(plVar8,pvVar1,pvVar11,(int)plVar8[6]);
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (pvVar1,pvVar11,
                         (longlong)(*(int *)((longlong)plVar8 + 0x34) * (int)plVar8[6]));
            }
          }
          iVar12 = iVar12 + -1;
          param_3 = local_98;
          iVar6 = local_a8;
        }
      }
      iVar9 = iVar9 + 1;
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      iVar13 = iVar13 + iVar6;
    } while (iVar12 != 0);
    local_88[0] = &local_78;
    ppplStack_90 = local_88;
    local_98 = (longlong *)&LAB_141769f80;
    FScriptSet::Rehash(local_68,&uStack_58,&local_98);
  }
  return;
}



// FUNCTION 14176ec80 FUN_14176ec80 body=739 status=ok
// SIG undefined FUN_14176ec80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14176ec80(longlong **param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  void *_Dst;
  int iVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong **local_80;
  undefined1 *local_78;
  longlong ***ppplStack_70;
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  longlong *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_58 = *(undefined4 *)(param_1 + 0xf);
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x7c);
  uStack_50 = *(undefined4 *)(param_1 + 0x10);
  iStack_4c = *(int *)((longlong)param_1 + 0x84);
  local_88 = *(int *)(param_1 + 0x12);
  local_48 = param_1[0x11];
  plVar4 = param_1[0xe];
  uVar6 = 1;
  iVar9 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  iVar10 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  local_80 = param_1;
  local_68 = plVar4;
  local_60 = param_2;
  local_40 = local_88;
  if (iVar10 == 0) {
    if (iVar9 == 0) {
      return;
    }
  }
  else {
    iVar5 = 0;
    if ((plVar4[7] & 0x1040000000U) == 0) {
      uVar7 = 1;
      local_78 = (undefined1 *)((ulonglong)param_1[0x10] >> 0x20);
      do {
        if ((-1 < iVar5) && (iVar5 < (int)param_2[5])) {
          plVar3 = (longlong *)param_2[4];
          if ((longlong *)param_2[4] == (longlong *)0x0) {
            plVar3 = param_2 + 2;
          }
          iVar1 = iVar5;
          if (iVar5 < 0) {
            iVar1 = iVar5 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar3 + (longlong)(iVar1 >> 5) * 4) & uVar7) != 0) {
            if ((~(byte)((ulonglong)plVar4[7] >> 0x24) & 1) != 0) {
              (**(code **)(*plVar4 + 0x328))(plVar4);
              plVar4 = local_68;
              param_2 = local_60;
            }
            iVar10 = iVar10 + -1;
          }
        }
        uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
        iVar5 = iVar5 + 1;
      } while (iVar10 != 0);
    }
  }
  iVar10 = local_88;
  FScriptSet::Empty(param_2,iVar9,&local_58);
  if (iVar9 != 0) {
    iVar5 = 0;
    iVar1 = 0;
    do {
      if ((-1 < iVar5) && (iVar5 < (int)param_3[5])) {
        plVar4 = (longlong *)param_3[4];
        if ((longlong *)param_3[4] == (longlong *)0x0) {
          plVar4 = param_3 + 2;
        }
        iVar2 = iVar5;
        if (iVar5 < 0) {
          iVar2 = iVar5 + 0x1f;
        }
        if ((*(uint *)((longlong)plVar4 + (longlong)(iVar2 >> 5) * 4) & uVar6) != 0) {
          iVar2 = FUN_141769b40(local_60,&local_58);
          pvVar8 = (void *)((longlong)(local_40 * iVar2) + *local_60);
          if (((ulonglong)local_68[7] >> 9 & 1) == 0) {
            if (((ulonglong)local_68[7] >> 9 & 1) == 0) {
              (**(code **)(*local_68 + 0x330))
                        (local_68,(longlong)*(int *)((longlong)local_68 + 0x44) + (longlong)pvVar8);
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)*(int *)((longlong)local_68 + 0x44) + (longlong)pvVar8),
                         0,(longlong)(*(int *)((longlong)local_68 + 0x34) * (int)local_68[6]));
            }
          }
          else {
            _guard_xfg_dispatch_icall_nop(pvVar8,0,(longlong)iStack_4c);
          }
          plVar4 = local_80[0xe];
          pvVar8 = (void *)((longlong)iVar1 + (longlong)*(int *)((longlong)plVar4 + 0x44) + *param_3
                           );
          _Dst = (void *)((longlong)(local_40 * iVar2) + (longlong)*(int *)((longlong)plVar4 + 0x44)
                         + *local_60);
          if (_Dst != pvVar8) {
            if ((*(uint *)(plVar4 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar4 + 0x2e8))(plVar4,_Dst,pvVar8,(int)plVar4[6]);
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (_Dst,pvVar8,(longlong)(*(int *)((longlong)plVar4 + 0x34) * (int)plVar4[6]))
              ;
            }
          }
          iVar9 = iVar9 + -1;
        }
      }
      iVar5 = iVar5 + 1;
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      iVar1 = iVar1 + iVar10;
    } while (iVar9 != 0);
    local_80 = &local_68;
    ppplStack_70 = &local_80;
    local_78 = &LAB_141769f80;
    FScriptSet::Rehash(local_60,&local_58,&local_78);
  }
  return;
}



// FUNCTION 14176ef80 DestroyValueInternal body=79 status=ok
// SIG undefined DestroyValueInternal(void)

void TProperty<FSoftObjectPtr,UObjectPropertyBase>::DestroyValueInternal
               (longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      if (*(longlong *)((longlong)(iVar1 * *(int *)(param_1 + 0x34)) + 0x18 + param_2) != 0) {
        FMemory::Free();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 14176efd0 DestroyValueInternal body=78 status=ok
// SIG undefined DestroyValueInternal(void)

void TProperty<TMulticastScriptDelegate<FWeakObjectPtr>,UProperty>::DestroyValueInternal
               (longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      if (*(longlong *)(iVar1 * *(int *)(param_1 + 0x34) + param_2) != 0) {
        FMemory::Free();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 14176f020 DestroyValueInternal body=281 status=ok
// SIG undefined DestroyValueInternal(void)

void UMapProperty::DestroyValueInternal(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  local_48 = *(undefined8 *)(param_1 + 0x70);
  local_30 = *(undefined4 *)(param_1 + 0x80);
  uStack_2c = *(undefined4 *)(param_1 + 0x84);
  uStack_28 = *(undefined4 *)(param_1 + 0x88);
  uStack_24 = *(undefined4 *)(param_1 + 0x8c);
  local_20 = *(undefined4 *)(param_1 + 0x90);
  uStack_1c = *(undefined4 *)(param_1 + 0x94);
  uStack_18 = *(undefined4 *)(param_1 + 0x98);
  uStack_14 = *(undefined4 *)(param_1 + 0x9c);
  local_40 = *(undefined8 *)(param_1 + 0x78);
  uVar1 = *(undefined4 *)(param_1 + 0xa0);
  local_38 = param_2;
  local_10 = uVar1;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    FUN_14176f320(&local_48,0);
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FScriptArray::ResizeTo(param_2,0,uVar1);
    }
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    if (*(int *)((longlong)param_2 + 0x2c) != 0) {
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
      FScriptBitArray::Realloc(param_2 + 2,0);
    }
    plVar3 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar3 = param_2 + 7;
    }
    uVar2 = (longlong)(int)param_2[9] & 0x3fffffffffffffff;
    if ((longlong *)((longlong)plVar3 + (longlong)(int)param_2[9] * 4) < plVar3) {
      uVar2 = 0;
    }
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)plVar3 = 0xffffffff;
        plVar3 = (longlong *)((longlong)plVar3 + 4);
      }
    }
  }
  if (param_2[8] != 0) {
    FMemory::Free();
  }
  if (param_2[4] != 0) {
    FMemory::Free();
  }
  if (*param_2 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14176f140 FUN_14176f140 body=447 status=ok
// SIG undefined FUN_14176f140(void)

void FUN_14176f140(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  
  uVar3 = *(ulonglong *)(param_1 + 0x80);
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  plVar8 = *(longlong **)(param_1 + 0x70);
  iVar5 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if (iVar5 != 0) {
    iVar7 = 0;
    if ((plVar8[7] & 0x1040000000U) == 0) {
      uVar6 = 1;
      lVar9 = *param_2;
      do {
        if ((-1 < iVar7) && (iVar7 < (int)param_2[5])) {
          plVar4 = (longlong *)param_2[4];
          if ((longlong *)param_2[4] == (longlong *)0x0) {
            plVar4 = param_2 + 2;
          }
          iVar2 = iVar7;
          if (iVar7 < 0) {
            iVar2 = iVar7 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar4 + (longlong)(iVar2 >> 5) * 4) & uVar6) != 0) {
            if ((~(byte)((ulonglong)plVar8[7] >> 0x24) & 1) != 0) {
              (**(code **)(*plVar8 + 0x328))(plVar8,*(int *)((longlong)plVar8 + 0x44) + lVar9);
            }
            iVar5 = iVar5 + -1;
          }
        }
        lVar9 = lVar9 + (uVar3 >> 0x20);
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
        iVar7 = iVar7 + 1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FScriptArray::ResizeTo(param_2,0,uVar1);
    }
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    if (*(int *)((longlong)param_2 + 0x2c) != 0) {
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
      FScriptBitArray::Realloc(param_2 + 2,0);
    }
    plVar8 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar8 = param_2 + 7;
    }
    uVar3 = (longlong)(int)param_2[9] & 0x3fffffffffffffff;
    if ((longlong *)((longlong)plVar8 + (longlong)(int)param_2[9] * 4) < plVar8) {
      uVar3 = 0;
    }
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)plVar8 = 0xffffffff;
        plVar8 = (longlong *)((longlong)plVar8 + 4);
      }
    }
  }
  if (param_2[8] != 0) {
    FMemory::Free();
  }
  if (param_2[4] != 0) {
    FMemory::Free();
  }
  if (*param_2 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14176f320 FUN_14176f320 body=494 status=ok
// SIG undefined FUN_14176f320(void)

void FUN_14176f320(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_3 != 0) {
    uVar4 = *(ulonglong *)(param_1[1] + 0x38) & 0x1040000000;
    uVar7 = *(ulonglong *)(*param_1 + 0x38) & 0x1040000000;
    if ((uVar7 == 0) || (uVar4 == 0)) {
      bVar2 = (byte)param_2 & 0x1f;
      uVar6 = 1 << bVar2 | 1U >> 0x20 - bVar2;
      if (uVar7 == 0) {
        if (uVar4 == 0) {
          do {
            lVar1 = param_1[2];
            if ((-1 < param_2) && (param_2 < *(int *)(lVar1 + 0x28))) {
              lVar5 = *(longlong *)(lVar1 + 0x20);
              if (*(longlong *)(lVar1 + 0x20) == 0) {
                lVar5 = lVar1 + 0x10;
              }
              iVar3 = param_2;
              if (param_2 < 0) {
                iVar3 = param_2 + 0x1f;
              }
              if ((*(uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4) & uVar6) != 0) {
                if ((~(byte)((ulonglong)((longlong *)*param_1)[7] >> 0x24) & 1) != 0) {
                  (**(code **)(*(longlong *)*param_1 + 0x328))();
                }
                if ((~(byte)((ulonglong)((longlong *)param_1[1])[7] >> 0x24) & 1) != 0) {
                  (**(code **)(*(longlong *)param_1[1] + 0x328))();
                }
                param_3 = param_3 + -1;
              }
            }
            uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
            param_2 = param_2 + 1;
          } while (param_3 != 0);
        }
        else {
          do {
            lVar1 = param_1[2];
            if ((-1 < param_2) && (param_2 < *(int *)(lVar1 + 0x28))) {
              lVar5 = *(longlong *)(lVar1 + 0x20);
              if (*(longlong *)(lVar1 + 0x20) == 0) {
                lVar5 = lVar1 + 0x10;
              }
              iVar3 = param_2;
              if (param_2 < 0) {
                iVar3 = param_2 + 0x1f;
              }
              if ((*(uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4) & uVar6) != 0) {
                if ((~(byte)((ulonglong)((longlong *)*param_1)[7] >> 0x24) & 1) != 0) {
                  (**(code **)(*(longlong *)*param_1 + 0x328))();
                }
                param_3 = param_3 + -1;
              }
            }
            uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
            param_2 = param_2 + 1;
          } while (param_3 != 0);
        }
      }
      else {
        do {
          lVar1 = param_1[2];
          if ((-1 < param_2) && (param_2 < *(int *)(lVar1 + 0x28))) {
            lVar5 = *(longlong *)(lVar1 + 0x20);
            if (*(longlong *)(lVar1 + 0x20) == 0) {
              lVar5 = lVar1 + 0x10;
            }
            iVar3 = param_2;
            if (param_2 < 0) {
              iVar3 = param_2 + 0x1f;
            }
            if ((*(uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4) & uVar6) != 0) {
              if ((~(byte)((ulonglong)((longlong *)param_1[1])[7] >> 0x24) & 1) != 0) {
                (**(code **)(*(longlong *)param_1[1] + 0x328))();
              }
              param_3 = param_3 + -1;
            }
          }
          uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
          param_2 = param_2 + 1;
        } while (param_3 != 0);
      }
    }
  }
  return;
}



// FUNCTION 14176f510 FUN_14176f510 body=218 status=ok
// SIG undefined FUN_14176f510(void)

void FUN_14176f510(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  if ((param_3 != 0) && ((*(ulonglong *)(*param_1 + 0x38) & 0x1040000000) == 0)) {
    bVar2 = (byte)param_2 & 0x1f;
    uVar5 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    do {
      lVar1 = param_1[1];
      if ((-1 < param_2) && (param_2 < *(int *)(lVar1 + 0x28))) {
        lVar4 = *(longlong *)(lVar1 + 0x20);
        if (*(longlong *)(lVar1 + 0x20) == 0) {
          lVar4 = lVar1 + 0x10;
        }
        iVar3 = param_2;
        if (param_2 < 0) {
          iVar3 = param_2 + 0x1f;
        }
        if ((*(uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4) & uVar5) != 0) {
          if ((~(byte)((ulonglong)((longlong *)*param_1)[7] >> 0x24) & 1) != 0) {
            (**(code **)(*(longlong *)*param_1 + 0x328))();
          }
          param_3 = param_3 + -1;
        }
      }
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14176f5f0 Empty body=280 status=ok
// SIG undefined Empty(void)

void FScriptSet::Empty(longlong param_1,ulonglong param_2,longlong param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  
  uVar1 = *(undefined4 *)(param_3 + 0x18);
  uVar6 = (uint)param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  if (uVar6 != *(uint *)(param_1 + 0xc)) {
    FScriptArray::ResizeTo(param_1,param_2,uVar1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = uVar6 + 0x1f + ((int)(uVar6 + 0x1f) >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    FScriptBitArray::Realloc(param_1 + 0x10,0);
  }
  if (uVar6 < 4) {
    iVar9 = 1;
  }
  else {
    uVar3 = (uint)(param_2 >> 1) & 0x7fffffff;
    uVar2 = uVar3 + 8;
    iVar9 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar4 = 0x20;
    cVar8 = '\0';
    if (uVar2 != 0) {
      iVar4 = 0x1f - iVar9;
    }
    uVar3 = uVar3 + 7;
    iVar9 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar8 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if ((uVar6 != 0) && ((*(int *)(param_1 + 0x48) == 0 || (*(int *)(param_1 + 0x48) != iVar9)))) {
    *(int *)(param_1 + 0x48) = iVar9;
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation
              (param_1 + 0x38,0,iVar9,4);
  }
  puVar7 = *(undefined4 **)(param_1 + 0x40);
  if (*(undefined4 **)(param_1 + 0x40) == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)(param_1 + 0x38);
  }
  uVar5 = (longlong)*(int *)(param_1 + 0x48) & 0x3fffffffffffffff;
  if (puVar7 + *(int *)(param_1 + 0x48) < puVar7) {
    uVar5 = 0;
  }
  if (uVar5 != 0) {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
  }
  return;
}



// FUNCTION 14176f710 FUN_14176f710 body=1006 status=ok
// SIG undefined FUN_14176f710(void)

longlong * FUN_14176f710(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  int iVar13;
  uint uVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined2 *local_68;
  int local_60;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  
  FString::ReplaceCharWithEscapedChar(param_2,&local_68,0);
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar14 = *(int *)(param_2 + 8) - 1;
  if (*(int *)(param_2 + 8) == 0) {
    uVar14 = uVar16;
  }
  uVar9 = uVar16;
  if (0x1000 < (int)uVar14) {
    *(undefined4 *)(param_1 + 1) = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    builtin_wcsncpy((wchar_t *)*param_1,L"*(FString(",0xb);
  }
  do {
    if (uVar9 != 0) {
      iVar13 = (int)param_1[1];
      iVar4 = (2 - (uint)(iVar13 != 0)) + iVar13;
      *(int *)(param_1 + 1) = iVar4;
      if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
      }
      puVar15 = (undefined2 *)(*param_1 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
      *puVar15 = 10;
      puVar15[1] = 0;
      pvVar3 = (void *)*param_3;
      iVar13 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar13 = 0;
      }
      if (iVar13 != 0) {
        iVar4 = (int)param_1[1];
        iVar5 = (uint)(iVar4 == 0) + iVar4 + iVar13;
        *(int *)(param_1 + 1) = iVar5;
        if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar13 * 2);
        *(undefined2 *)((longlong)iVar13 * 2 + (longlong)pvVar1) = 0;
      }
    }
    uVar16 = uVar16 + 1;
    if (0x1000 < (int)uVar14) {
      uVar6 = uVar16 & 0x8000000f;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
      }
      if (uVar6 == 0) {
        iVar13 = (int)param_1[1];
        iVar4 = (0xd - (uint)(iVar13 != 0)) + iVar13;
        *(int *)(param_1 + 1) = iVar4;
        if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
        }
        lVar7 = (longlong)iVar13 - (ulonglong)(iVar13 != 0);
        lVar8 = *param_1;
        builtin_wcsncpy((wchar_t *)(lVar8 + lVar7 * 2),L") + FStr",8);
        builtin_wcsncpy((wchar_t *)(lVar8 + 0x10 + lVar7 * 2),L"ing(",4);
        *(undefined2 *)(lVar8 + 0x18 + lVar7 * 2) = 0;
      }
    }
    uVar10 = 0;
    uVar6 = local_60 - 1;
    if (local_60 == 0) {
      uVar6 = uVar10;
    }
    iVar13 = 0x100;
    if ((int)(uVar6 - uVar9) < 0x101) {
      iVar13 = uVar6 - uVar9;
    }
    lVar8 = (longlong)iVar13;
    iVar4 = iVar13 + uVar9;
    while( true ) {
      iVar5 = local_60 + -1;
      if (local_60 == 0) {
        iVar5 = 0;
      }
      if ((iVar5 <= iVar4) || (local_68[lVar8 + (int)uVar9 + -1] != 0x5c)) break;
      iVar13 = iVar13 + 1;
      iVar4 = iVar4 + 1;
      lVar8 = lVar8 + 1;
    }
    uVar17 = iVar13 + uVar9;
    uVar6 = local_60 - 1;
    if (local_60 == 0) {
      uVar6 = uVar10;
    }
    if (uVar9 < uVar6) {
      uVar6 = uVar9;
    }
    uVar9 = local_60 - 1;
    if (local_60 == 0) {
      uVar9 = uVar10;
    }
    uVar10 = uVar6;
    if ((uVar6 <= uVar17) && (uVar10 = uVar9, uVar17 < uVar9)) {
      uVar10 = uVar17;
    }
    local_58 = (wchar_t *)0x0;
    puVar15 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar15 = local_68;
    }
    iVar4 = uVar10 - uVar6;
    local_4c = 0;
    iVar13 = iVar4 + 1;
    if (iVar4 == 0) {
      iVar13 = 0;
    }
    pwVar11 = local_58;
    local_50 = iVar13;
    if ((0 < iVar13) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), iVar13 = local_50,
       pwVar11 = local_58, 0 < local_50)) {
      wcsncpy(local_58,puVar15 + (int)uVar6,(longlong)iVar4);
      pwVar11[iVar4] = L'\0';
    }
    pwVar12 = L"";
    if (iVar13 != 0) {
      pwVar12 = pwVar11;
    }
    FString::PrintfImpl(&local_48,L"TEXT(\"%s\")",pwVar12);
    pvVar3 = local_48;
    iVar13 = 0;
    if (local_40 != 0) {
      iVar13 = local_40 + -1;
    }
    if (iVar13 != 0) {
      iVar4 = (int)param_1[1];
      iVar5 = (uint)(iVar4 == 0) + iVar4 + iVar13;
      *(int *)(param_1 + 1) = iVar5;
      if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
      }
      pvVar1 = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar13 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar13 * 2) = 0;
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    if (pwVar11 != (wchar_t *)0x0) {
      FMemory::Free(pwVar11);
    }
    iVar13 = local_60 + -1;
    if (local_60 == 0) {
      iVar13 = 0;
    }
    uVar9 = uVar17;
  } while ((int)uVar17 < iVar13);
  if (0x1000 < (int)uVar14) {
    iVar13 = (int)param_1[1];
    iVar4 = (3 - (uint)(iVar13 != 0)) + iVar13;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
    }
    puVar2 = (undefined4 *)(*param_1 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
    *puVar2 = 0x290029;
    *(undefined2 *)(puVar2 + 1) = 0;
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14176fb00 FUN_14176fb00 body=462 status=ok
// SIG undefined FUN_14176fb00(void)

void FUN_14176fb00(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  undefined4 *puVar1;
  void *_Dst;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  bool bVar9;
  ulonglong local_58;
  void *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  longlong local_30 [3];
  
  bVar9 = false;
  iVar6 = 0;
  local_58 = local_58 & 0xffffffff00000000;
  if ((param_6 & 0x10000000) == 0) {
    lVar4 = FWeakObjectPtr::Get(param_3);
    puVar7 = &DAT_143f3eda8;
    if (lVar4 == 0) {
      pwVar8 = L"(null)";
    }
    else {
      lVar4 = FWeakObjectPtr::Get(param_3);
      param_6 = *(ulonglong *)(lVar4 + 0x18);
      FName::ToString(&param_6,&local_40);
      bVar9 = true;
      pwVar8 = L"";
      if (local_38 != 0) {
        pwVar8 = local_40;
      }
    }
    local_58 = *(ulonglong *)(param_3 + 8);
    puVar5 = (undefined8 *)FName::ToString(&local_58,local_30);
    if (*(int *)(puVar5 + 1) != 0) {
      puVar7 = (undefined2 *)*puVar5;
    }
    FString::PrintfImpl(&local_50,L"%s.%s",pwVar8,puVar7);
    _Src = local_50;
    if (local_48 != 0) {
      iVar6 = local_48 + -1;
    }
    if (iVar6 != 0) {
      iVar2 = (int)param_2[1];
      iVar3 = (uint)(iVar2 == 0) + iVar2 + iVar6;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
    }
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    if (local_30[0] != 0) {
      FMemory::Free();
    }
    if ((bVar9) && (local_40 != (wchar_t *)0x0)) {
      FMemory::Free();
    }
  }
  else {
    iVar6 = (int)param_2[1];
    iVar2 = (3 - (uint)(iVar6 != 0)) + iVar6;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
    }
    puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
    *puVar1 = 0x7d007b;
    *(undefined2 *)(puVar1 + 1) = 0;
  }
  return;
}



// FUNCTION 14176fcd0 FUN_14176fcd0 body=945 status=ok
// SIG undefined FUN_14176fcd0(void)

void FUN_14176fcd0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5,ulonglong param_6,wchar_t *param_7)

{
  void *pvVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  wchar_t **ppwVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  undefined2 *puVar19;
  wchar_t *local_68;
  int local_60;
  wchar_t *local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  uVar6 = param_6;
  pwVar18 = (wchar_t *)0x0;
  lVar14 = *param_3;
  iVar16 = 0;
  if ((param_6 >> 0x1c & 1) != 0) {
    if (lVar14 == 0) {
      local_50 = 0;
      ppwVar12 = &local_58;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar2 = true;
    }
    else {
      uVar10 = UObjectBaseUtility::GetPathName(lVar14,local_38,0);
      puVar11 = (undefined8 *)FString::ReplaceCharWithEscapedChar(uVar10,local_48,0);
      if (*(int *)(puVar11 + 1) == 0) {
        puVar19 = &DAT_143f3eda8;
      }
      else {
        puVar19 = (undefined2 *)*puVar11;
      }
      FString::PrintfImpl(&local_68,L"LoadObject<UObject>(nullptr, TEXT(\"%s\"))",puVar19);
      ppwVar12 = &local_68;
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
      bVar2 = false;
      pwVar18 = local_68;
    }
    *ppwVar12 = (wchar_t *)0x0;
    iVar15 = *(int *)(ppwVar12 + 1);
    ppwVar12[1] = (wchar_t *)0x0;
    if ((bVar2) && (local_58 != (wchar_t *)0x0)) {
      FMemory::Free();
    }
    if ((bVar3) && (local_68 != (wchar_t *)0x0)) {
      FMemory::Free();
    }
    if ((bVar4) && (local_48[0] != 0)) {
      FMemory::Free();
    }
    if ((bVar5) && (local_38[0] != 0)) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x70) == 0) {
      pwVar13 = L"Interface";
    }
    else {
      param_6 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x18);
      FName::ToString(&param_6,&local_58);
      iVar16 = 0x10;
      pwVar13 = L"";
      if (local_50 != 0) {
        pwVar13 = local_58;
      }
    }
    pwVar17 = L"";
    if (iVar15 != 0) {
      pwVar17 = pwVar18;
    }
    FString::PrintfImpl(&local_68,L"TScriptInterface<I%s>(%s)",pwVar13,pwVar17);
    pwVar13 = local_68;
    if (local_60 == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = local_60 + -1;
    }
    if (iVar15 != 0) {
      iVar9 = (int)param_2[1];
      iVar8 = (uint)(iVar9 == 0) + iVar9 + iVar15;
      *(int *)(param_2 + 1) = iVar8;
      if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar9);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pwVar13,(longlong)iVar15 * 2);
      *(undefined2 *)((longlong)iVar15 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free(local_68);
    }
    if ((iVar16 != 0) && (local_58 != (wchar_t *)0x0)) {
      FMemory::Free();
    }
    if (pwVar18 == (wchar_t *)0x0) {
      return;
    }
    FMemory::Free(pwVar18);
    return;
  }
  if (lVar14 == 0) {
    iVar16 = (int)param_2[1];
    iVar15 = (5 - (uint)(iVar16 != 0)) + iVar16;
    *(int *)(param_2 + 1) = iVar15;
    if (*(int *)((longlong)param_2 + 0xc) < iVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar16);
    }
    lVar14 = (longlong)iVar16 - (ulonglong)(iVar16 != 0);
    builtin_wcsncpy((wchar_t *)(*param_2 + lVar14 * 2),L"None",4);
    *(undefined2 *)(*param_2 + 8 + lVar14 * 2) = 0;
    return;
  }
  if ((param_6 & 8) != 0) {
    pwVar13 = param_7;
    if ((param_7 == (wchar_t *)0x0) && (param_5 != 0)) {
      pwVar13 = (wchar_t *)UObjectBaseUtility::GetOutermost(param_5);
    }
    cVar7 = UObjectBaseUtility::IsIn(lVar14,pwVar13);
    if (cVar7 != '\0') goto LAB_14176ff28;
  }
  pwVar13 = pwVar18;
  if (((uVar6 >> 0xd & 1) != 0) && (param_5 != 0)) {
    pwVar13 = (wchar_t *)UObjectBaseUtility::GetOutermost(param_5);
  }
LAB_14176ff28:
  puVar11 = (undefined8 *)UObjectBaseUtility::GetPathName(lVar14,local_38,pwVar13);
  if (*(int *)(puVar11 + 1) == 0) {
    puVar19 = &DAT_143f3eda8;
  }
  else {
    puVar19 = (undefined2 *)*puVar11;
  }
  param_6 = *(undefined8 *)(*(longlong *)(lVar14 + 0x10) + 0x18);
  FName::ToString(&param_6,&local_68);
  pwVar18 = L"";
  if (local_60 != 0) {
    pwVar18 = local_68;
  }
  FString::PrintfImpl(&local_58,L"%s\'%s\'",pwVar18,puVar19);
  pwVar18 = local_58;
  if (local_50 != 0) {
    iVar16 = local_50 + -1;
  }
  if (iVar16 != 0) {
    iVar15 = (int)param_2[1];
    iVar9 = (uint)(iVar15 == 0) + iVar15 + iVar16;
    *(int *)(param_2 + 1) = iVar9;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar15);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pwVar18,(longlong)iVar16 * 2);
    *(undefined2 *)((longlong)iVar16 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141770090 FUN_141770090 body=1895 status=ok
// SIG undefined FUN_141770090(void)

void FUN_141770090(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  void *_Dst;
  longlong lVar15;
  uint uVar16;
  int local_b4;
  ulonglong local_a0;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_40;
  
  if ((param_6 >> 0x1c & 1) != 0) {
    iVar3 = (int)param_2[1];
    iVar9 = (3 - (uint)(iVar3 != 0)) + iVar3;
    *(int *)(param_2 + 1) = iVar9;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
    *puVar1 = 0x7d007b;
    *(undefined2 *)(puVar1 + 1) = 0;
    return;
  }
  if ((int)param_3[1] == *(int *)((longlong)param_3 + 0x34)) {
    iVar3 = (int)param_2[1];
    iVar9 = (3 - (uint)(iVar3 != 0)) + iVar3;
    *(int *)(param_2 + 1) = iVar9;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
    *puVar1 = 0x290028;
    *(undefined2 *)(puVar1 + 1) = 0;
    return;
  }
  lVar15 = *(longlong *)(param_1 + 0x78);
  uVar14 = 0;
  local_a0 = 0;
  if (lVar15 != 0) {
    lVar8 = UStructProperty::GetPrivateStaticClass();
    lVar15 = *(longlong *)(lVar15 + 0x10);
    if ((*(int *)(lVar15 + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar15 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_a0 = FMemory::Malloc((longlong)*(int *)(param_1 + 0x94));
      plVar12 = *(longlong **)(param_1 + 0x78);
      _Dst = (void *)((longlong)*(int *)(param_1 + 0x84) + local_a0);
      if ((*(uint *)(plVar12 + 7) >> 9 & 1) == 0) {
        (**(code **)(*plVar12 + 0x330))(plVar12,_Dst);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  (_Dst,0,(longlong)(*(int *)((longlong)plVar12 + 0x34) * (int)plVar12[6]));
      }
    }
  }
  local_78 = *(undefined8 *)(param_1 + 0x70);
  bVar4 = true;
  local_b4 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  lVar15 = *param_3;
  local_70 = *(undefined8 *)(param_1 + 0x78);
  iVar3 = *(int *)(param_1 + 0xa0);
  bVar6 = true;
  local_60 = *(undefined4 *)(param_1 + 0x80);
  uStack_5c = *(undefined4 *)(param_1 + 0x84);
  uStack_58 = *(undefined4 *)(param_1 + 0x88);
  uStack_54 = *(undefined4 *)(param_1 + 0x8c);
  local_50 = *(undefined8 *)(param_1 + 0x90);
  uStack_48 = *(undefined8 *)(param_1 + 0x98);
  local_68 = param_4;
  local_40 = iVar3;
  if ((param_6 >> 0x19 & 1) == 0) {
    if (local_b4 != 0) {
      uVar16 = 1;
      uVar13 = uVar14;
      do {
        iVar9 = (int)uVar13;
        if ((iVar9 < 0) || ((int)param_3[5] <= iVar9)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          plVar12 = (longlong *)param_3[4];
          if ((longlong *)param_3[4] == (longlong *)0x0) {
            plVar12 = param_3 + 2;
          }
          iVar7 = iVar9;
          if (iVar9 < 0) {
            iVar7 = iVar9 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4) & uVar16) == 0)
          goto LAB_141770526;
          bVar5 = true;
        }
        else {
LAB_141770526:
          bVar5 = false;
        }
        if (bVar5) {
          iVar7 = (int)param_2[1];
          iVar10 = iVar7 + -1;
          if (bVar4) {
            if (iVar7 < 1) {
              iVar10 = 0;
            }
            iVar7 = (iVar7 < 1) + 1 + iVar7;
            *(int *)(param_2 + 1) = iVar7;
            if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
            }
            uVar11 = 0x28;
            bVar6 = false;
          }
          else {
            if (iVar7 < 1) {
              iVar10 = 0;
            }
            iVar7 = (iVar7 < 1) + 1 + iVar7;
            *(int *)(param_2 + 1) = iVar7;
            if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
            }
            uVar11 = 0x2c;
          }
          *(undefined2 *)(*param_2 + (longlong)iVar10 * 2) = uVar11;
          *(undefined2 *)(*param_2 + 2 + (longlong)iVar10 * 2) = 0;
          iVar7 = (int)param_2[1];
          iVar10 = (2 - (uint)(iVar7 != 0)) + iVar7;
          *(int *)(param_2 + 1) = iVar10;
          if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
          }
          puVar2 = (undefined2 *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
          *puVar2 = 0x28;
          puVar2[1] = 0;
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2d8))
                    (*(longlong **)(param_1 + 0x70),param_2,lVar15,0,param_5,param_6 | 2,param_7);
          iVar7 = (int)param_2[1];
          iVar10 = (3 - (uint)(iVar7 != 0)) + iVar7;
          *(int *)(param_2 + 1) = iVar10;
          if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
          }
          puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
          *puVar1 = 0x20002c;
          *(undefined2 *)(puVar1 + 1) = 0;
          uVar13 = local_a0;
          if ((((local_a0 == 0) && (uVar13 = uVar14, param_4 != (longlong *)0x0)) &&
              (iVar7 = FUN_141771a10(&local_78,lVar15,0), -1 < iVar7)) &&
             ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34))) {
            uVar13 = (longlong)(iVar3 * iVar7) + *param_4;
          }
          (**(code **)(**(longlong **)(param_1 + 0x78) + 0x2d8))
                    (*(longlong **)(param_1 + 0x78),param_2,*(int *)(param_1 + 0x84) + lVar15,
                     (longlong)*(int *)(param_1 + 0x84) + uVar13,param_5,param_6 | 2,param_7);
          iVar7 = (int)param_2[1];
          iVar10 = (2 - (uint)(iVar7 != 0)) + iVar7;
          *(int *)(param_2 + 1) = iVar10;
          if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
          }
          puVar2 = (undefined2 *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
          local_b4 = local_b4 + -1;
          *puVar2 = 0x29;
          puVar2[1] = 0;
          bVar4 = bVar6;
        }
        uVar13 = (ulonglong)(iVar9 + 1);
        lVar15 = lVar15 + *(int *)(param_1 + 0x94);
        uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
      } while (local_b4 != 0);
    }
    iVar3 = (int)param_2[1];
    iVar9 = (2 - (uint)(iVar3 != 0)) + iVar3;
    *(int *)(param_2 + 1) = iVar9;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar2 = (undefined2 *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
    *puVar2 = 0x29;
    puVar2[1] = 0;
  }
  else if (local_b4 != 0) {
    uVar16 = 1;
    uVar13 = uVar14;
    do {
      iVar9 = (int)uVar13;
      if ((iVar9 < 0) || ((int)param_3[5] <= iVar9)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        plVar12 = (longlong *)param_3[4];
        if ((longlong *)param_3[4] == (longlong *)0x0) {
          plVar12 = param_3 + 2;
        }
        iVar7 = iVar9;
        if (iVar9 < 0) {
          iVar7 = iVar9 + 0x1f;
        }
        if ((*(uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4) & uVar16) == 0)
        goto LAB_141770301;
        bVar5 = true;
      }
      else {
LAB_141770301:
        bVar5 = false;
      }
      if (bVar5) {
        if (bVar4) {
          bVar4 = false;
        }
        else {
          iVar7 = (int)param_2[1];
          iVar10 = iVar7 + -1;
          if (iVar7 < 1) {
            iVar10 = 0;
          }
          iVar7 = (iVar7 < 1) + 1 + iVar7;
          *(int *)(param_2 + 1) = iVar7;
          if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(undefined2 *)(*param_2 + (longlong)iVar10 * 2) = 10;
          *(undefined2 *)(*param_2 + 2 + (longlong)iVar10 * 2) = 0;
          bVar4 = bVar6;
        }
        iVar7 = (int)param_2[1];
        iVar10 = (2 - (uint)(iVar7 != 0)) + iVar7;
        *(int *)(param_2 + 1) = iVar10;
        if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
        }
        puVar2 = (undefined2 *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
        *puVar2 = 0x5b;
        puVar2[1] = 0;
        (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2d8))
                  (*(longlong **)(param_1 + 0x70),param_2,lVar15,0,param_5,param_6 | 2,param_7);
        iVar7 = (int)param_2[1];
        iVar10 = (3 - (uint)(iVar7 != 0)) + iVar7;
        *(int *)(param_2 + 1) = iVar10;
        if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
        }
        puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
        *puVar1 = 0x20005d;
        *(undefined2 *)(puVar1 + 1) = 0;
        uVar13 = local_a0;
        if (((local_a0 == 0) && (uVar13 = uVar14, param_4 != (longlong *)0x0)) &&
           ((iVar7 = FUN_141771a10(&local_78,lVar15,0), -1 < iVar7 &&
            ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34))))) {
          uVar13 = (longlong)(iVar3 * iVar7) + *param_4;
        }
        (**(code **)(**(longlong **)(param_1 + 0x78) + 0x2d8))
                  (*(longlong **)(param_1 + 0x78),param_2,*(int *)(param_1 + 0x84) + lVar15,
                   (longlong)*(int *)(param_1 + 0x84) + uVar13,param_5,param_6 | 2,param_7);
        local_b4 = local_b4 + -1;
        bVar6 = bVar4;
      }
      uVar13 = (ulonglong)(iVar9 + 1);
      lVar15 = lVar15 + *(int *)(param_1 + 0x94);
      uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
    } while (local_b4 != 0);
  }
  if (local_a0 != 0) {
    plVar12 = *(longlong **)(param_1 + 0x78);
    if ((~(byte)((ulonglong)plVar12[7] >> 0x24) & 1) != 0) {
      (**(code **)(*plVar12 + 0x328))(plVar12,(longlong)*(int *)(param_1 + 0x84) + local_a0);
    }
    FMemory::Free(local_a0);
  }
  return;
}



// FUNCTION 141770800 FUN_141770800 body=815 status=ok
// SIG undefined FUN_141770800(void)

void FUN_141770800(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  undefined4 *puVar1;
  void *_Dst;
  bool bVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  ulonglong local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  longlong local_38 [2];
  
  iVar3 = 0;
  local_68 = local_68 & 0xffffffff00000000;
  iVar13 = (int)param_2[1];
  if ((param_6 & 0x10000000) == 0) {
    iVar4 = (2 - (uint)(iVar13 != 0)) + iVar13;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
    }
    bVar2 = true;
    puVar12 = (undefined2 *)(*param_2 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
    *puVar12 = 0x28;
    puVar12[1] = 0;
    iVar13 = iVar3;
    for (; (-1 < iVar3 && (iVar3 < (int)param_3[1])); iVar3 = iVar3 + 1) {
      lVar8 = *param_3;
      lVar11 = (longlong)iVar3 * 0x10;
      if ((*(longlong *)(lVar8 + lVar11 + 8) != 0) &&
         ((lVar7 = FWeakObjectPtr::Get(), lVar7 != 0 &&
          (lVar8 = UObject::FindFunction(lVar7,*(undefined8 *)(lVar8 + lVar11 + 8)), lVar8 != 0))))
      {
        if (!bVar2) {
          iVar4 = (int)param_2[1];
          iVar5 = (2 - (uint)(iVar4 != 0)) + iVar4;
          *(int *)(param_2 + 1) = iVar5;
          if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
          }
          puVar12 = (undefined2 *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
          *puVar12 = 0x2c;
          puVar12[1] = 0;
        }
        bVar2 = false;
        lVar8 = FWeakObjectPtr::Get(*param_3 + lVar11);
        if (lVar8 == 0) {
          pwVar10 = L"(null)";
        }
        else {
          iVar13 = 1;
          lVar8 = FWeakObjectPtr::Get(*param_3 + lVar11);
          local_68 = *(ulonglong *)(lVar8 + 0x18);
          FName::ToString(&local_68,&local_48);
          pwVar10 = L"";
          if (local_40 != 0) {
            pwVar10 = local_48;
          }
        }
        local_60 = *(undefined8 *)(lVar11 + 8 + *param_3);
        puVar9 = (undefined8 *)FName::ToString(&local_60,local_38);
        if (*(int *)(puVar9 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar9;
        }
        FString::PrintfImpl(&local_58,L"%s.%s",pwVar10,puVar12);
        _Src = local_58;
        if (local_50 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = local_50 + -1;
        }
        if (iVar4 != 0) {
          iVar5 = (int)param_2[1];
          iVar6 = (uint)(iVar5 == 0) + iVar5 + iVar4;
          *(int *)(param_2 + 1) = iVar6;
          if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
          }
          _Dst = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
          *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
        }
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        if ((iVar13 != 0) && (iVar13 = 0, local_48 != (wchar_t *)0x0)) {
          FMemory::Free();
        }
      }
    }
    iVar13 = (int)param_2[1];
    iVar3 = (2 - (uint)(iVar13 != 0)) + iVar13;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
    }
    puVar12 = (undefined2 *)(*param_2 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
    *puVar12 = 0x29;
    puVar12[1] = 0;
    return;
  }
  iVar3 = (3 - (uint)(iVar13 != 0)) + iVar13;
  *(int *)(param_2 + 1) = iVar3;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
  }
  puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
  *puVar1 = 0x7d007b;
  *(undefined2 *)(puVar1 + 1) = 0;
  return;
}



// FUNCTION 141770b30 FUN_141770b30 body=878 status=ok
// SIG undefined FUN_141770b30(void)

void FUN_141770b30(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  void *_Dst;
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  void **ppvVar11;
  int iVar12;
  undefined2 *puVar13;
  void *pvVar14;
  longlong local_res18;
  void *local_68;
  undefined8 local_60;
  void *local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  
  iVar12 = 0;
  local_res18 = *param_3;
  if ((param_6 >> 0x1c & 1) == 0) {
    if ((param_6 & 2) == 0) {
      puVar10 = (undefined8 *)FName::ToString(&local_res18,local_38);
      pvVar14 = (void *)*puVar10;
      iVar12 = *(int *)(puVar10 + 1) + -1;
      if (*(int *)(puVar10 + 1) == 0) {
        iVar12 = 0;
      }
      if (iVar12 != 0) {
        iVar8 = (int)param_2[1];
        iVar7 = (uint)(iVar8 == 0) + iVar8 + iVar12;
        *(int *)(param_2 + 1) = iVar7;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
        }
        pvVar2 = (void *)(*param_2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar14,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar2) = 0;
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    else if (local_res18 == 0) {
      iVar12 = (int)param_2[1];
      iVar8 = (3 - (uint)(iVar12 != 0)) + iVar12;
      *(int *)(param_2 + 1) = iVar8;
      if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar12);
      }
      puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
      *puVar1 = 0x220022;
      *(undefined2 *)(puVar1 + 1) = 0;
    }
    else {
      uVar9 = FName::ToString(&local_res18,local_48);
      puVar10 = (undefined8 *)FString::ReplaceCharWithEscapedChar(uVar9,local_38,0);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*puVar10;
      }
      FString::PrintfImpl(&local_68,L"\"%s\"",puVar13);
      pvVar14 = local_68;
      if ((int)local_60 != 0) {
        iVar12 = (int)local_60 + -1;
      }
      if (iVar12 != 0) {
        iVar8 = (int)param_2[1];
        iVar7 = (uint)(iVar8 == 0) + iVar8 + iVar12;
        *(int *)(param_2 + 1) = iVar7;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
        }
        pvVar2 = (void *)(*param_2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar14,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar2) = 0;
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
  }
  else {
    if (local_res18 == 0) {
      local_68 = (void *)0x0;
      local_60 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      pvVar14 = local_68;
      FGenericPlatformString::Memcpy(local_68,L"FName()",0x10);
      ppvVar11 = &local_68;
      bVar6 = true;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
    }
    else {
      uVar9 = FName::ToString(&local_res18,local_38);
      puVar10 = (undefined8 *)FString::ReplaceCharWithEscapedChar(uVar9,local_48,0);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*puVar10;
      }
      FString::PrintfImpl(local_58,L"FName(TEXT(\"%s\"))",puVar13);
      ppvVar11 = local_58;
      bVar6 = false;
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
      pvVar14 = local_68;
    }
    pvVar2 = *ppvVar11;
    iVar12 = *(int *)(ppvVar11 + 1) + -1;
    if (*(int *)(ppvVar11 + 1) == 0) {
      iVar12 = 0;
    }
    if (iVar12 != 0) {
      iVar8 = (int)param_2[1];
      iVar7 = (uint)(iVar8 == 0) + iVar8 + iVar12;
      *(int *)(param_2 + 1) = iVar7;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar12 * 2);
      *(undefined2 *)((longlong)iVar12 * 2 + (longlong)_Dst) = 0;
    }
    if ((bVar3) && (local_58[0] != (void *)0x0)) {
      FMemory::Free();
    }
    if ((bVar4) && (local_48[0] != 0)) {
      FMemory::Free();
    }
    if ((bVar5) && (local_38[0] != 0)) {
      FMemory::Free();
    }
    if ((bVar6) && (pvVar14 != (void *)0x0)) {
      FMemory::Free(pvVar14);
    }
  }
  return;
}



// FUNCTION 141770ea0 FUN_141770ea0 body=194 status=ok
// SIG undefined FUN_141770ea0(void)

void FUN_141770ea0(longlong *param_1,longlong *param_2)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong local_18 [2];
  
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x3c0))(param_1,local_18);
  _Src = (void *)*puVar3;
  iVar4 = *(int *)(puVar3 + 1) + -1;
  if (*(int *)(puVar3 + 1) == 0) {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    iVar1 = (int)param_2[1];
    iVar2 = (uint)(iVar1 == 0) + iVar4 + iVar1;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
    *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141770f70 FUN_141770f70 body=1366 status=ok
// SIG undefined FUN_141770f70(void)

void FUN_141770f70(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined2 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  void *_Dst;
  longlong lVar14;
  uint uVar15;
  int local_98;
  ulonglong local_80;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_40;
  
  if ((param_6 >> 0x1c & 1) != 0) {
    iVar12 = (int)param_2[1];
    iVar8 = (3 - (uint)(iVar12 != 0)) + iVar12;
    *(int *)(param_2 + 1) = iVar8;
    if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar12);
    }
    puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
    *puVar1 = 0x7d007b;
    *(undefined2 *)(puVar1 + 1) = 0;
    return;
  }
  if ((int)param_3[1] == *(int *)((longlong)param_3 + 0x34)) {
    iVar12 = (int)param_2[1];
    iVar8 = (3 - (uint)(iVar12 != 0)) + iVar12;
    *(int *)(param_2 + 1) = iVar8;
    if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar12);
    }
    puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
    *puVar1 = 0x290028;
    *(undefined2 *)(puVar1 + 1) = 0;
    return;
  }
  lVar14 = *(longlong *)(param_1 + 0x70);
  uVar13 = 0;
  local_80 = 0;
  if (lVar14 != 0) {
    lVar7 = UStructProperty::GetPrivateStaticClass();
    lVar14 = *(longlong *)(lVar14 + 0x10);
    if ((*(int *)(lVar14 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar14 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_80 = FMemory::Malloc((longlong)*(int *)(param_1 + 0x84));
      plVar10 = *(longlong **)(param_1 + 0x70);
      _Dst = (void *)((longlong)*(int *)(param_1 + 0x78) + local_80);
      if ((*(uint *)(plVar10 + 7) >> 9 & 1) == 0) {
        (**(code **)(*plVar10 + 0x330))(plVar10,_Dst);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  (_Dst,0,(longlong)(*(int *)((longlong)plVar10 + 0x34) * (int)plVar10[6]));
      }
    }
  }
  local_68 = *(undefined8 *)(param_1 + 0x70);
  iVar8 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  local_48 = *(undefined8 *)(param_1 + 0x88);
  lVar14 = *param_3;
  iVar12 = *(int *)(param_1 + 0x90);
  local_58 = *(undefined4 *)(param_1 + 0x78);
  uStack_54 = *(undefined4 *)(param_1 + 0x7c);
  uStack_50 = *(undefined4 *)(param_1 + 0x80);
  uStack_4c = *(undefined4 *)(param_1 + 0x84);
  local_98 = iVar8;
  local_60 = param_4;
  local_40 = iVar12;
  if ((param_6 >> 0x19 & 1) == 0) {
    bVar3 = true;
    if (iVar8 != 0) {
      uVar15 = 1;
      do {
        iVar12 = (int)uVar13;
        if ((iVar12 < 0) || ((int)param_3[5] <= iVar12)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          plVar10 = (longlong *)param_3[4];
          if ((longlong *)param_3[4] == (longlong *)0x0) {
            plVar10 = param_3 + 2;
          }
          iVar6 = iVar12;
          if (iVar12 < 0) {
            iVar6 = iVar12 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar10 + (longlong)(iVar6 >> 5) * 4) & uVar15) == 0)
          goto LAB_141771393;
          bVar4 = true;
        }
        else {
LAB_141771393:
          bVar4 = false;
        }
        if (bVar4) {
          iVar8 = (int)param_2[1];
          iVar6 = iVar8 + -1;
          if (bVar3) {
            if (iVar8 < 1) {
              iVar6 = 0;
            }
            iVar8 = (iVar8 < 1) + 1 + iVar8;
            *(int *)(param_2 + 1) = iVar8;
            if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
            }
            uVar9 = 0x28;
            bVar3 = false;
          }
          else {
            if (iVar8 < 1) {
              iVar6 = 0;
            }
            iVar8 = (iVar8 < 1) + 1 + iVar8;
            *(int *)(param_2 + 1) = iVar8;
            if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
            }
            uVar9 = 0x2c;
          }
          *(undefined2 *)(*param_2 + (longlong)iVar6 * 2) = uVar9;
          *(undefined2 *)(*param_2 + 2 + (longlong)iVar6 * 2) = 0;
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2d8))
                    (*(longlong **)(param_1 + 0x70),param_2,lVar14,0,param_5,param_6 | 2,param_7);
          local_98 = local_98 + -1;
          iVar8 = local_98;
        }
        uVar13 = (ulonglong)(iVar12 + 1);
        lVar14 = lVar14 + *(int *)(param_1 + 0x84);
        uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
      } while (iVar8 != 0);
    }
    iVar12 = (int)param_2[1];
    iVar8 = (2 - (uint)(iVar12 != 0)) + iVar12;
    *(int *)(param_2 + 1) = iVar8;
    if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar12);
    }
    puVar2 = (undefined2 *)(*param_2 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
    *puVar2 = 0x29;
    puVar2[1] = 0;
  }
  else {
    bVar3 = true;
    if (iVar8 != 0) {
      uVar15 = 1;
      uVar11 = uVar13;
      do {
        iVar6 = (int)uVar11;
        if ((iVar6 < 0) || ((int)param_3[5] <= iVar6)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          plVar10 = (longlong *)param_3[4];
          if ((longlong *)param_3[4] == (longlong *)0x0) {
            plVar10 = param_3 + 2;
          }
          iVar5 = iVar6;
          if (iVar6 < 0) {
            iVar5 = iVar6 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) & uVar15) == 0)
          goto LAB_1417711d9;
          bVar4 = true;
        }
        else {
LAB_1417711d9:
          bVar4 = false;
        }
        if (bVar4) {
          if (bVar3) {
            bVar3 = false;
            local_98 = iVar8;
          }
          else {
            iVar8 = (int)param_2[1];
            iVar5 = iVar8 + -1;
            if (iVar8 < 1) {
              iVar5 = 0;
            }
            iVar8 = (iVar8 < 1) + 1 + iVar8;
            *(int *)(param_2 + 1) = iVar8;
            if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
            }
            *(undefined2 *)(*param_2 + (longlong)iVar5 * 2) = 10;
            *(undefined2 *)(*param_2 + 2 + (longlong)iVar5 * 2) = 0;
          }
          uVar11 = local_80;
          if ((((local_80 == 0) && (uVar11 = uVar13, param_4 != (longlong *)0x0)) &&
              (iVar8 = FUN_141771940(&local_68,lVar14), -1 < iVar8)) &&
             ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34))) {
            uVar11 = (longlong)(iVar12 * iVar8) + *param_4;
          }
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2d8))
                    (*(longlong **)(param_1 + 0x70),param_2,lVar14,uVar11,param_5,param_6 | 2,
                     param_7);
          iVar8 = local_98 + -1;
          local_98 = iVar8;
        }
        uVar11 = (ulonglong)(iVar6 + 1);
        uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
        lVar14 = lVar14 + *(int *)(param_1 + 0x84);
      } while (iVar8 != 0);
    }
  }
  if (local_80 != 0) {
    plVar10 = *(longlong **)(param_1 + 0x70);
    if ((~(byte)((ulonglong)plVar10[7] >> 0x24) & 1) != 0) {
      (**(code **)(*plVar10 + 0x328))(plVar10,(longlong)*(int *)(param_1 + 0x78) + local_80);
    }
    FMemory::Free(local_80);
  }
  return;
}



// FUNCTION 1417714d0 FUN_1417714d0 body=540 status=ok
// SIG undefined FUN_1417714d0(void)

void FUN_1417714d0(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  void *local_80;
  int local_78;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  lVar3 = FWeakObjectPtr::Get(param_3);
  iVar6 = 0;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_3 + 8)) && (*(longlong *)(param_3 + 0x10) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_3,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_3 + 8) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(param_3);
      if (lVar3 != 0) goto LAB_141771586;
    }
    local_50 = *(undefined8 *)(param_3 + 0x10);
    FString::FString(local_48,param_3 + 0x18);
    puVar5 = &local_50;
  }
  else {
LAB_141771586:
    puVar5 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(local_38,lVar3);
  }
  FSoftObjectPath::operator=(&local_98,puVar5);
  if ((param_6 >> 0x1c & 1) == 0) {
    FUN_14178a720(&local_98,param_2,&local_98,param_5,param_6,param_7);
  }
  else {
    uVar4 = FSoftObjectPath::ToString(&local_98,local_60);
    puVar5 = (undefined8 *)FString::ReplaceCharWithEscapedChar(uVar4,local_70,0);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar5;
    }
    FString::PrintfImpl(&local_80,L"FSoftObjectPath(TEXT(\"%s\"))",puVar7);
    _Src = local_80;
    if (local_78 != 0) {
      iVar6 = local_78 + -1;
    }
    if (iVar6 != 0) {
      iVar1 = (int)param_2[1];
      iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar6;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
    }
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    if (local_70[0] != 0) {
      FMemory::Free();
    }
    if (local_60[0] != 0) {
      FMemory::Free();
    }
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1417716f0 FUN_1417716f0 body=516 status=ok
// SIG undefined FUN_1417716f0(void)

void FUN_1417716f0(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined8 local_38;
  undefined8 local_30;
  void *local_28;
  int local_20;
  longlong local_18 [2];
  
  iVar8 = 0;
  if ((param_6 >> 0x1c & 1) == 0) {
    iVar4 = *(int *)(param_3 + 1);
    if ((param_6 & 2) == 0) {
      pvVar3 = (void *)*param_3;
      iVar5 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar5 = iVar8;
      }
      if (iVar5 == 0) {
        return;
      }
      iVar8 = (int)param_2[1];
      iVar4 = (uint)(iVar8 == 0) + iVar8 + iVar5;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
      return;
    }
    iVar5 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar5 = iVar8;
    }
    if (iVar5 < 1) {
      iVar8 = (int)param_2[1];
      iVar4 = (3 - (uint)(iVar8 != 0)) + iVar8;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
      }
      puVar2 = (undefined4 *)(*param_2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      *puVar2 = 0x220022;
      *(undefined2 *)(puVar2 + 1) = 0;
      return;
    }
    puVar6 = (undefined8 *)FString::ReplaceCharWithEscapedChar(param_3,local_18,0);
    if (*(int *)(puVar6 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar6;
    }
    pwVar7 = L"\"%s\"";
  }
  else {
    local_38 = 0;
    local_30 = 0;
    puVar6 = (undefined8 *)FUN_14176f710(local_18,param_3,&local_38);
    if (*(int *)(puVar6 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
      pwVar7 = L"FString(%s)";
    }
    else {
      puVar9 = (undefined2 *)*puVar6;
      pwVar7 = L"FString(%s)";
    }
  }
  FString::PrintfImpl(&local_28,pwVar7,puVar9);
  pvVar3 = local_28;
  if (local_20 != 0) {
    iVar8 = local_20 + -1;
  }
  if (iVar8 != 0) {
    iVar4 = (int)param_2[1];
    iVar5 = (uint)(iVar4 == 0) + iVar4 + iVar8;
    *(int *)(param_2 + 1) = iVar5;
    if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar8 * 2);
    *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141771900 FUN_141771900 body=56 status=ok
// SIG undefined FUN_141771900(void)

void FUN_141771900(longlong param_1)

{
  FUN_141719670(*(undefined8 *)(param_1 + 0x70));
  return;
}



// FUNCTION 141771940 FUN_141771940 body=196 status=ok
// SIG undefined FUN_141771940(void)

uint FUN_141771940(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  
  uVar1 = *(uint *)(param_1[1] + 8);
  if (uVar1 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar6 = param_3;
    do {
      plVar3 = (longlong *)param_1[1];
      if ((-1 < (int)uVar6) && ((int)uVar6 < (int)plVar3[5])) {
        plVar7 = (longlong *)plVar3[4];
        if ((longlong *)plVar3[4] == (longlong *)0x0) {
          plVar7 = plVar3 + 2;
        }
        uVar5 = uVar6;
        if ((int)uVar6 < 0) {
          uVar5 = uVar6 + 0x1f;
        }
        if (((*(uint *)((longlong)plVar7 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar6 & 0x1f) & 1)
             != 0) &&
           (cVar4 = (**(code **)(*plVar2 + 0x2b8))
                              (plVar2,param_2,
                               (longlong)(int)(*(int *)(param_1 + 5) * uVar6) + *plVar3,0),
           cVar4 != '\0')) {
          return uVar6;
        }
      }
      uVar5 = uVar6 + 1;
      uVar6 = 0;
      if (uVar5 != uVar1) {
        uVar6 = uVar5;
      }
    } while (uVar6 != param_3);
  }
  return 0xffffffff;
}



// FUNCTION 141771a10 FUN_141771a10 body=196 status=ok
// SIG undefined FUN_141771a10(void)

uint FUN_141771a10(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  
  uVar1 = *(uint *)(param_1[2] + 8);
  if (uVar1 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar6 = param_3;
    do {
      plVar3 = (longlong *)param_1[2];
      if ((-1 < (int)uVar6) && ((int)uVar6 < (int)plVar3[5])) {
        plVar7 = (longlong *)plVar3[4];
        if ((longlong *)plVar3[4] == (longlong *)0x0) {
          plVar7 = plVar3 + 2;
        }
        uVar5 = uVar6;
        if ((int)uVar6 < 0) {
          uVar5 = uVar6 + 0x1f;
        }
        if (((*(uint *)((longlong)plVar7 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar6 & 0x1f) & 1)
             != 0) &&
           (cVar4 = (**(code **)(*plVar2 + 0x2b8))
                              (plVar2,param_2,
                               (longlong)(int)(*(int *)(param_1 + 7) * uVar6) + *plVar3,0),
           cVar4 != '\0')) {
          return uVar6;
        }
      }
      uVar5 = uVar6 + 1;
      uVar6 = 0;
      if (uVar5 != uVar1) {
        uVar6 = uVar5;
      }
    } while (uVar6 != param_3);
  }
  return 0xffffffff;
}



// FUNCTION 141771ae0 GetCPPMacroType body=175 status=ok
// SIG undefined GetCPPMacroType(void)

undefined8 *
UClassProperty::GetCPPMacroType(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  
  if ((wchar_t *)*param_3 != L"UClass") {
    iVar1 = 0;
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,7);
      iVar1 = (int)param_3[1];
    }
    *(int *)(param_3 + 1) = iVar1 + 7;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
    }
    builtin_wcsncpy((wchar_t *)*param_3,L"UClass",7);
  }
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"OBJECT",0xe);
  return param_2;
}



// FUNCTION 141771b90 GetCPPMacroType body=264 status=ok
// SIG undefined GetCPPMacroType(void)

undefined8 *
UInterfaceProperty::GetCPPMacroType(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  longlong local_28;
  undefined8 local_20;
  undefined2 *local_18;
  int local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  while ((lVar1 != 0 && ((*(uint *)(lVar1 + 0xb4) >> 7 & 1) == 0))) {
    lVar1 = *(longlong *)(lVar1 + 0x30);
  }
  local_res8 = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  FString::PrintfImpl(&local_28,&DAT_144d1ea60,puVar2);
  if (param_3 == &local_28) {
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *param_2 = 0;
  param_2[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"TINTERFACE",0x16);
  return param_2;
}



// FUNCTION 141771ca0 FUN_141771ca0 body=270 status=ok
// SIG undefined FUN_141771ca0(void)

undefined8 * FUN_141771ca0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  longlong local_28;
  undefined8 local_20;
  undefined2 *local_18;
  int local_10;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2c0))();
  FString::PrintfImpl(&local_28,L"TLazyObjectPtr<%s%s>",uVar1,puVar2);
  if (param_3 == &local_28) {
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *param_2 = 0;
  param_2[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"LAZYOBJECT",0x16);
  return param_2;
}



// FUNCTION 141771db0 FUN_141771db0 body=312 status=ok
// SIG undefined FUN_141771db0(void)

undefined8 * FUN_141771db0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x78) + 0x298))
                     (*(longlong **)(param_1 + 0x78),local_18,0,0);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x70) + 0x298))
                     (*(longlong **)(param_1 + 0x70),local_28,0,0);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(&local_38,L"%s,%s",puVar3,puVar2);
  if (param_3 == &local_38) {
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_30._4_4_;
    local_30 = 0;
    local_38 = 0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  *param_2 = 0;
  param_2[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"TMAP",10);
  return param_2;
}



// FUNCTION 141771ef0 FUN_141771ef0 body=270 status=ok
// SIG undefined FUN_141771ef0(void)

undefined8 * FUN_141771ef0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  longlong local_28;
  undefined8 local_20;
  undefined2 *local_18;
  int local_10;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2c0))();
  FString::PrintfImpl(&local_28,L"%s%s",uVar1,puVar2);
  if (param_3 == &local_28) {
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"OBJECT",0xe);
  return param_2;
}



// FUNCTION 141772000 FUN_141772000 body=230 status=ok
// SIG undefined FUN_141772000(void)

undefined8 * FUN_141772000(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x70) + 0x298))
                     (*(longlong **)(param_1 + 0x70),local_18,0,0);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(&local_28,&DAT_144d1d0e4,puVar2);
  if (param_3 == &local_28) {
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  *param_2 = 0;
  param_2[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"TSET",10);
  return param_2;
}



// FUNCTION 1417720f0 FUN_1417720f0 body=270 status=ok
// SIG undefined FUN_1417720f0(void)

undefined8 * FUN_1417720f0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  longlong local_28;
  undefined8 local_20;
  undefined2 *local_18;
  int local_10;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x2c0))();
  FString::PrintfImpl(&local_28,L"TSoftClassPtr<%s%s> ",uVar1,puVar2);
  if (param_3 == &local_28) {
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *param_2 = 0;
  param_2[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"SOFTCLASS",0x14);
  return param_2;
}



// FUNCTION 141772200 FUN_141772200 body=270 status=ok
// SIG undefined FUN_141772200(void)

undefined8 * FUN_141772200(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  longlong local_28;
  undefined8 local_20;
  undefined2 *local_18;
  int local_10;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2c0))();
  FString::PrintfImpl(&local_28,L"TSoftObjectPtr<%s%s>",uVar1,puVar2);
  if (param_3 == &local_28) {
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *param_2 = 0;
  param_2[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"SOFTOBJECT",0x16);
  return param_2;
}



// FUNCTION 141772310 FUN_141772310 body=175 status=ok
// SIG undefined FUN_141772310(void)

undefined8 * FUN_141772310(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x298))(param_1,local_18,0,0);
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
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"STRUCT",0xe);
  return param_2;
}



// FUNCTION 1417723c0 FUN_1417723c0 body=447 status=ok
// SIG undefined FUN_1417723c0(void)

undefined8 * FUN_1417723c0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  longlong local_38;
  undefined8 local_30;
  undefined2 *local_28;
  int local_20;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  if ((*(ulonglong *)(param_1 + 0x38) & 0x4000000000) == 0) {
    FName::ToString(&local_res8,&local_28);
    puVar3 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar3 = local_28;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2c0))();
    FString::PrintfImpl(&local_38,L"TWeakObjectPtr<%s%s>",uVar1,puVar3);
    if (param_3 == &local_38) {
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_3 != 0) {
        FMemory::Free();
      }
      *param_3 = local_38;
      *(undefined4 *)(param_3 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_30._4_4_;
      local_30 = 0;
      local_38 = 0;
    }
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *param_2 = 0;
    param_2[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    uVar1 = 0x16;
    pwVar2 = L"WEAKOBJECT";
  }
  else {
    FName::ToString(&local_res8,&local_28);
    puVar3 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar3 = local_28;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2c0))();
    FString::PrintfImpl(&local_38,L"TAutoWeakObjectPtr<%s%s>",uVar1,puVar3);
    if (param_3 == &local_38) {
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_3 != 0) {
        FMemory::Free();
      }
      *param_3 = local_38;
      *(undefined4 *)(param_3 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_30._4_4_;
      local_30 = 0;
      local_38 = 0;
    }
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *param_2 = 0;
    param_2[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    uVar1 = 0x1e;
    pwVar2 = L"AUTOWEAKOBJECT";
  }
  FGenericPlatformString::Memcpy(*param_2,pwVar2,uVar1);
  return param_2;
}



// FUNCTION 141772580 GetCPPType body=62 status=ok
// SIG undefined GetCPPType(void)

undefined8 *
TProperty<signed_char,UNumericProperty>::GetCPPType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"int8",10);
  return param_2;
}



// FUNCTION 1417725c0 GetCPPType body=62 status=ok
// SIG undefined GetCPPType(void)

undefined8 * TProperty<short,UNumericProperty>::GetCPPType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"int16",0xc);
  return param_2;
}



// FUNCTION 141772600 GetCPPType body=62 status=ok
// SIG undefined GetCPPType(void)

undefined8 *
TProperty<unsigned_short,UNumericProperty>::GetCPPType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"uint16",0xe);
  return param_2;
}



// FUNCTION 141772640 GetCPPType body=62 status=ok
// SIG undefined GetCPPType(void)

undefined8 * TProperty<int,UNumericProperty>::GetCPPType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"int32",0xc);
  return param_2;
}



// FUNCTION 141772680 GetCPPType body=62 status=ok
// SIG undefined GetCPPType(void)

undefined8 *
TProperty<unsigned_int,UNumericProperty>::GetCPPType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"uint32",0xe);
  return param_2;
}



// FUNCTION 1417726c0 GetCPPType body=62 status=ok
// SIG undefined GetCPPType(void)

undefined8 * TProperty<float,UNumericProperty>::GetCPPType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"float",0xc);
  return param_2;
}



// FUNCTION 141772700 GetCPPType body=62 status=ok
// SIG undefined GetCPPType(void)

undefined8 * TProperty<double,UNumericProperty>::GetCPPType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"double",0xe);
  return param_2;
}



// FUNCTION 141772740 GetCPPType body=62 status=ok
// SIG undefined GetCPPType(void)

undefined8 * TProperty<FName,UProperty>::GetCPPType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FName",0xc);
  return param_2;
}



// FUNCTION 141772780 GetCPPType body=62 status=ok
// SIG undefined GetCPPType(void)

undefined8 * TProperty<FString,UProperty>::GetCPPType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FString",0x10);
  return param_2;
}



// FUNCTION 1417727c0 GetCPPType body=62 status=ok
// SIG undefined GetCPPType(void)

undefined8 * TProperty<__int64,UNumericProperty>::GetCPPType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"int64",0xc);
  return param_2;
}



// FUNCTION 141772800 GetCPPType body=62 status=ok
// SIG undefined GetCPPType(void)

undefined8 *
TProperty<unsigned___int64,UNumericProperty>::GetCPPType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"uint64",0xe);
  return param_2;
}



// FUNCTION 141772840 FUN_141772840 body=198 status=ok
// SIG undefined FUN_141772840(void)

undefined8 FUN_141772840(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  
  local_res8 = *(undefined8 *)(param_1[0xe] + 0x18);
  FName::ToString(&local_res8,&local_38);
  puVar2 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  uVar1 = (**(code **)(*(longlong *)param_1[0xe] + 0x2c0))();
  FString::PrintfImpl(local_28,L"%s%s",uVar1,puVar2);
  (**(code **)(*param_1 + 0x370))(param_1,param_2,param_3,param_4,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141772910 FUN_141772910 body=198 status=ok
// SIG undefined FUN_141772910(void)

undefined8 FUN_141772910(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  
  local_res8 = *(undefined8 *)(param_1[0xf] + 0x18);
  FName::ToString(&local_res8,&local_38);
  puVar2 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  uVar1 = (**(code **)(*(longlong *)param_1[0xf] + 0x2c0))();
  FString::PrintfImpl(local_28,L"%s%s",uVar1,puVar2);
  (**(code **)(*param_1 + 0x370))(param_1,param_2,param_3,param_4,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1417729e0 FUN_1417729e0 body=1390 status=ok
// SIG undefined FUN_1417729e0(void)

undefined8 *
FUN_1417729e0(longlong param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined2 *_Dst;
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t **ppwVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  int iVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  longlong local_res8;
  undefined2 *local_68;
  int local_60;
  int local_5c;
  wchar_t *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  int local_30;
  
  local_40 = 0x14;
  local_48 = (undefined2 *)0x0;
  local_res8 = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar13 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"__DelegateSignature",0x28);
  if ((int)local_40 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = (int)local_40 + -1;
  }
  local_68 = *(undefined2 **)(*(longlong *)(param_1 + 0x70) + 0x18);
  FName::ToString(&local_68);
  if (local_30 == 0) {
    pwVar16 = L"";
    iVar10 = 0;
  }
  else {
    iVar10 = local_30 + -1;
    pwVar16 = local_38;
  }
  iVar11 = 0;
  local_58 = (wchar_t *)0x0;
  iVar12 = iVar10 - iVar12;
  local_4c = 0;
  if (iVar12 < 0) {
LAB_141772aa7:
    local_50 = 0;
  }
  else {
    iVar11 = iVar10;
    if (iVar12 < iVar10) {
      iVar11 = iVar12;
    }
    local_50 = iVar11 + 1;
    if (iVar11 == 0) goto LAB_141772aa7;
  }
  if ((0 < local_50) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), pwVar15 = local_58, 0 < local_50))
  {
    wcsncpy(local_58,pwVar16,(longlong)iVar11);
    pwVar15[iVar11] = L'\0';
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (puVar13 != (undefined2 *)0x0) {
    FMemory::Free(puVar13);
  }
  lVar5 = local_res8;
  uVar2 = (param_4 & 0xffffffff) >> 7;
  iVar12 = *(int *)(*(longlong *)(local_res8 + 0x70) + 0xc);
  lVar7 = 0;
  if (iVar12 < (int)DAT_1469e91c4) {
    uVar9 = iVar12 >> 0x1f & 0xffff;
    uVar4 = iVar12 + uVar9;
    lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
  }
  iVar12 = 0;
  if (((uVar2 & 1) == 0) || (((byte)((uint)*(undefined4 *)(lVar7 + 8) >> 0x19) & 1) == 0)) {
    lVar7 = UField::GetOwnerClass();
    if ((lVar7 == 0) ||
       (lVar7 = UField::GetOwnerClass(*(undefined8 *)(lVar5 + 0x70)),
       (*(uint *)(lVar7 + 0xb4) >> 7 & 1) != 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((uVar2 & 1) != 0) && (bVar3)) {
      ppwVar8 = (wchar_t **)UnicodeToCPPIdentifier(&local_68,&local_58,0,&DAT_144d1d19c);
      if (&local_58 != ppwVar8) {
        if (local_58 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_58 = *ppwVar8;
        *ppwVar8 = (wchar_t *)0x0;
        local_50 = *(int *)(ppwVar8 + 1);
        local_4c = *(int *)((longlong)ppwVar8 + 0xc);
        ppwVar8[1] = (wchar_t *)0x0;
      }
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      lVar5 = UField::GetOwnerClass(*(undefined8 *)(lVar5 + 0x70));
      local_res8 = *(longlong *)(lVar5 + 0x18);
      FName::ToString(&local_res8,&local_68);
      UnicodeToCPPIdentifier(&local_48,&local_68,0,&DAT_144d1d1c4);
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      puVar13 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        puVar13 = local_48;
      }
      pwVar16 = L"";
      if (local_50 != 0) {
        pwVar16 = local_58;
      }
      FString::PrintfImpl(&local_38,L"%s__%s",pwVar16,puVar13);
      pwVar16 = local_38;
      local_50 = local_30;
      if ((local_30 == 0) && (local_4c == 0)) {
        local_4c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_30);
        _guard_xfg_dispatch_icall_nop(local_58,pwVar16,(longlong)local_30 * 2);
      }
      if (local_38 != (wchar_t *)0x0) {
        FMemory::Free(local_38);
      }
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    iVar10 = local_50;
    if ((param_4 & 8) != 0) {
      lVar5 = (longlong)local_50;
      local_50 = (0x15 - (uint)(local_50 != 0)) + local_50;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar10);
      }
      builtin_wcsncpy(local_58 + (lVar5 - (ulonglong)(iVar10 != 0)),L"__SinglecastDelegate",0x15);
    }
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(local_res8 + 0x70) + 0x20);
    if (plVar1 != (longlong *)0x0) {
      lVar5 = FUN_14171cb10();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_res8 = plVar1[3];
        pwVar16 = L"";
        if (local_50 != 0) {
          pwVar16 = local_58;
        }
        FName::ToString(&local_res8,&local_38);
        pwVar15 = L"";
        if (local_30 != 0) {
          pwVar15 = local_38;
        }
        uVar6 = (**(code **)(*plVar1 + 0x2c0))(plVar1);
        FString::PrintfImpl(param_2,L"%s%s::F%s",uVar6,pwVar15,pwVar16);
        if (local_38 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        goto LAB_141772f1c;
      }
    }
  }
  local_48 = (undefined2 *)0x0;
  local_40 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar13 = local_48;
  FGenericPlatformString::Memcpy(local_48,&DAT_144d1d1ec,4);
  pwVar16 = local_58;
  if ((int)local_40 < 2) {
    lVar5 = (longlong)local_50;
    *param_2 = 0;
    *(int *)(param_2 + 1) = local_50;
    if (local_50 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_50,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,pwVar16,lVar5 * 2);
    }
    if (puVar13 != (undefined2 *)0x0) {
      FMemory::Free(puVar13);
    }
  }
  else {
    if (local_50 != 0) {
      iVar12 = local_50 + -1;
    }
    if (((int)local_40 != 0) || (lVar5 = 1, iVar12 == 0)) {
      lVar5 = 0;
    }
    local_68 = puVar13;
    local_60 = (int)local_40;
    local_5c = local_40._4_4_;
    if (local_40._4_4_ < (int)lVar5 + (int)local_40 + iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    }
    pwVar16 = local_58;
    iVar10 = local_60;
    puVar13 = local_68;
    iVar14 = local_5c;
    iVar11 = local_60;
    if (iVar12 != 0) {
      lVar5 = (longlong)local_60;
      local_60 = iVar12 + (uint)(local_60 == 0) + local_60;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
      }
      iVar14 = local_5c;
      iVar11 = local_60;
      puVar13 = local_68;
      _Dst = local_68 + (lVar5 - (ulonglong)(iVar10 != 0));
      _guard_xfg_dispatch_icall_nop(_Dst,pwVar16,(longlong)iVar12 * 2);
      _Dst[iVar12] = 0;
    }
    *param_2 = puVar13;
    *(int *)(param_2 + 1) = iVar11;
    *(int *)((longlong)param_2 + 0xc) = iVar14;
  }
LAB_141772f1c:
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141772f50 GetCPPType body=293 status=ok
// SIG undefined GetCPPType(void)

undefined8 *
UInterfaceProperty::GetCPPType(longlong param_1,undefined8 *param_2,longlong *param_3,byte param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined8 local_res10;
  longlong local_28;
  undefined8 local_20;
  undefined2 *local_18;
  int local_10;
  
  if (param_3 != (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((param_4 & 0x80) == 0) {
      while ((lVar1 != 0 && ((*(uint *)(lVar1 + 0xb4) >> 7 & 1) == 0))) {
        lVar1 = *(longlong *)(lVar1 + 0x30);
      }
    }
    local_res10 = *(undefined8 *)(lVar1 + 0x18);
    FName::ToString(&local_res10,&local_18);
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    FString::PrintfImpl(&local_28,L"<I%s>",puVar2);
    if (param_3 == &local_28) {
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_3 != 0) {
        FMemory::Free();
      }
      *param_3 = local_28;
      *(undefined4 *)(param_3 + 1) = (undefined4)local_20;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
      local_20 = 0;
      local_28 = 0;
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  *param_2 = 0;
  param_2[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"TScriptInterface",0x22);
  return param_2;
}



// FUNCTION 141773080 FUN_141773080 body=135 status=ok
// SIG undefined FUN_141773080(void)

undefined8 FUN_141773080(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2c0))();
  FString::PrintfImpl(param_2,L"TLazyObjectPtr<%s%s>",uVar1,puVar2);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141773110 FUN_141773110 body=415 status=ok
// SIG undefined FUN_141773110(void)

undefined8 FUN_141773110(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58 [6];
  
  lVar2 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_78 = 0;
  local_70 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  lVar3 = lVar2;
  if (param_3 != 0) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x70) + 0x298))
                       (*(longlong **)(param_1 + 0x70),local_58 + 4,local_58 + 2,
                        param_4 & 0xfffffffd);
    if (&local_68 != plVar1) {
      lVar3 = *plVar1;
      *plVar1 = 0;
      local_60 = plVar1[1];
      plVar1[1] = 0;
      local_68 = lVar3;
    }
    if (local_58[4] != 0) {
      FMemory::Free();
    }
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x78) + 0x298))
                       (*(longlong **)(param_1 + 0x78),local_58 + 4,local_58,param_4 & 0xfffffffd);
    if (&local_78 != plVar1) {
      lVar2 = *plVar1;
      *plVar1 = 0;
      local_70 = plVar1[1];
      plVar1[1] = 0;
      local_78 = lVar2;
    }
    if (local_58[4] != 0) {
      FMemory::Free();
    }
  }
  UMapProperty::GetCPPTypeCustom
            (param_1,param_2,param_3,param_4,&local_68,local_58 + 2,&local_78,local_58);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  if (local_58[2] != 0) {
    FMemory::Free();
  }
  if (lVar3 != 0) {
    FMemory::Free(lVar3);
  }
  return param_2;
}



// FUNCTION 1417732b0 FUN_1417732b0 body=1387 status=ok
// SIG undefined FUN_1417732b0(void)

undefined8 *
FUN_1417732b0(longlong param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined2 *_Dst;
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t **ppwVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  int iVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  longlong local_res8;
  undefined2 *local_68;
  int local_60;
  int local_5c;
  wchar_t *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  int local_30;
  
  local_40 = 0x14;
  local_48 = (undefined2 *)0x0;
  local_res8 = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar13 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"__DelegateSignature",0x28);
  if ((int)local_40 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = (int)local_40 + -1;
  }
  local_68 = *(undefined2 **)(*(longlong *)(param_1 + 0x70) + 0x18);
  FName::ToString(&local_68);
  if (local_30 == 0) {
    pwVar15 = L"";
    iVar10 = 0;
  }
  else {
    iVar10 = local_30 + -1;
    pwVar15 = local_38;
  }
  iVar11 = 0;
  local_58 = (wchar_t *)0x0;
  iVar12 = iVar10 - iVar12;
  local_4c = 0;
  if (iVar12 < 0) {
LAB_141773376:
    local_50 = 0;
  }
  else {
    iVar11 = iVar10;
    if (iVar12 < iVar10) {
      iVar11 = iVar12;
    }
    local_50 = iVar11 + 1;
    if (iVar11 == 0) goto LAB_141773376;
  }
  if ((0 < local_50) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), pwVar16 = local_58, 0 < local_50))
  {
    wcsncpy(local_58,pwVar15,(longlong)iVar11);
    pwVar16[iVar11] = L'\0';
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (puVar13 != (undefined2 *)0x0) {
    FMemory::Free(puVar13);
  }
  lVar6 = local_res8;
  lVar4 = UField::GetOwnerClass();
  iVar12 = *(int *)(*(longlong *)(lVar6 + 0x70) + 0xc);
  lVar5 = 0;
  if (iVar12 < (int)DAT_1469e91c4) {
    uVar9 = iVar12 >> 0x1f & 0xffff;
    uVar3 = iVar12 + uVar9;
    lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
  }
  iVar12 = 0;
  if ((((param_4 & 0xffffffff) >> 7 & 1) == 0) ||
     (((byte)((uint)*(undefined4 *)(lVar5 + 8) >> 0x19) & 1) == 0)) {
    if (((param_4 & 0x80) != 0) && ((lVar4 != 0 && ((*(uint *)(lVar4 + 0xb4) >> 7 & 1) == 0)))) {
      ppwVar8 = (wchar_t **)UnicodeToCPPIdentifier(&local_68,&local_58,0,&DAT_144d1db44);
      if (&local_58 != ppwVar8) {
        if (local_58 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_58 = *ppwVar8;
        *ppwVar8 = (wchar_t *)0x0;
        local_50 = *(int *)(ppwVar8 + 1);
        local_4c = *(int *)((longlong)ppwVar8 + 0xc);
        ppwVar8[1] = (wchar_t *)0x0;
      }
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_res8 = *(longlong *)(lVar4 + 0x18);
      FName::ToString(&local_res8,&local_68);
      UnicodeToCPPIdentifier(&local_48,&local_68,0,&DAT_144d1dca4);
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      puVar13 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        puVar13 = local_48;
      }
      pwVar15 = L"";
      if (local_50 != 0) {
        pwVar15 = local_58;
      }
      FString::PrintfImpl(&local_38,L"%s__%s",pwVar15,puVar13);
      pwVar15 = local_38;
      local_50 = local_30;
      if ((local_30 == 0) && (local_4c == 0)) {
        local_4c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_30);
        _guard_xfg_dispatch_icall_nop(local_58,pwVar15,(longlong)local_30 * 2);
      }
      if (local_38 != (wchar_t *)0x0) {
        FMemory::Free(local_38);
      }
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    iVar10 = local_50;
    if ((param_4 & 8) != 0) {
      lVar6 = (longlong)local_50;
      local_50 = (0x14 - (uint)(local_50 != 0)) + local_50;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar10);
      }
      builtin_wcsncpy(local_58 + (lVar6 - (ulonglong)(iVar10 != 0)),L"__MulticastDelegate",0x14);
    }
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0x70) + 0x20);
    if (plVar1 != (longlong *)0x0) {
      lVar6 = FUN_14171cb10();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_res8 = plVar1[3];
        pwVar15 = L"";
        if (local_50 != 0) {
          pwVar15 = local_58;
        }
        FName::ToString(&local_res8,&local_38);
        pwVar16 = L"";
        if (local_30 != 0) {
          pwVar16 = local_38;
        }
        uVar7 = (**(code **)(*plVar1 + 0x2c0))(plVar1);
        FString::PrintfImpl(param_2,L"%s%s::F%s",uVar7,pwVar16,pwVar15);
        if (local_38 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        goto LAB_1417737e9;
      }
    }
  }
  local_48 = (undefined2 *)0x0;
  local_40 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar13 = local_48;
  FGenericPlatformString::Memcpy(local_48,&DAT_144d1ddec,4);
  pwVar15 = local_58;
  if ((int)local_40 < 2) {
    lVar6 = (longlong)local_50;
    *param_2 = 0;
    *(int *)(param_2 + 1) = local_50;
    if (local_50 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_50,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,pwVar15,lVar6 * 2);
    }
    if (puVar13 != (undefined2 *)0x0) {
      FMemory::Free(puVar13);
    }
  }
  else {
    if (local_50 != 0) {
      iVar12 = local_50 + -1;
    }
    if (((int)local_40 != 0) || (lVar6 = 1, iVar12 == 0)) {
      lVar6 = 0;
    }
    local_68 = puVar13;
    local_60 = (int)local_40;
    local_5c = local_40._4_4_;
    if (local_40._4_4_ < (int)lVar6 + (int)local_40 + iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    }
    pwVar15 = local_58;
    iVar10 = local_60;
    puVar13 = local_68;
    iVar14 = local_5c;
    iVar11 = local_60;
    if (iVar12 != 0) {
      lVar6 = (longlong)local_60;
      local_60 = local_60 + (uint)(local_60 == 0) + iVar12;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
      }
      iVar14 = local_5c;
      iVar11 = local_60;
      puVar13 = local_68;
      _Dst = local_68 + (lVar6 - (ulonglong)(iVar10 != 0));
      _guard_xfg_dispatch_icall_nop(_Dst,pwVar15,(longlong)iVar12 * 2);
      _Dst[iVar12] = 0;
    }
    *param_2 = puVar13;
    *(int *)(param_2 + 1) = iVar11;
    *(int *)((longlong)param_2 + 0xc) = iVar14;
  }
LAB_1417737e9:
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141773820 FUN_141773820 body=248 status=ok
// SIG undefined FUN_141773820(void)

undefined8 FUN_141773820(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_48;
  longlong local_40;
  longlong local_38 [4];
  
  lVar2 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_3 != 0) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x70) + 0x298))
                       (*(longlong **)(param_1 + 0x70),local_38 + 2,local_38,param_4 & 0xfffffffd);
    if (&local_48 != plVar1) {
      lVar2 = *plVar1;
      *plVar1 = 0;
      local_40 = plVar1[1];
      plVar1[1] = 0;
      local_48 = lVar2;
    }
    if (local_38[2] != 0) {
      FMemory::Free();
    }
  }
  USetProperty::GetCPPTypeCustom(param_1,param_2,param_3,param_4,&local_48,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  return param_2;
}



// FUNCTION 141773920 FUN_141773920 body=198 status=ok
// SIG undefined FUN_141773920(void)

undefined8 FUN_141773920(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  
  local_res8 = *(undefined8 *)(param_1[0xf] + 0x18);
  FName::ToString(&local_res8,&local_38);
  puVar2 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  uVar1 = (**(code **)(*(longlong *)param_1[0xf] + 0x2c0))();
  FString::PrintfImpl(local_28,L"%s%s",uVar1,puVar2);
  (**(code **)(*param_1 + 0x370))(param_1,param_2,param_3,param_4,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1417739f0 FUN_1417739f0 body=31 status=ok
// SIG undefined FUN_1417739f0(void)

undefined8 FUN_1417739f0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x310))();
  return param_2;
}



// FUNCTION 141773a10 FUN_141773a10 body=196 status=ok
// SIG undefined FUN_141773a10(void)

undefined8 FUN_141773a10(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  if ((*(ulonglong *)(param_1 + 0x38) & 0x4000000000) == 0) {
    FName::ToString(&local_res8,&local_18);
    puVar3 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar3 = local_18;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2c0))();
    pwVar2 = L"TWeakObjectPtr<%s%s>";
  }
  else {
    FName::ToString(&local_res8,&local_18);
    puVar3 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar3 = local_18;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2c0))();
    pwVar2 = L"TAutoWeakObjectPtr<%s%s>";
  }
  FString::PrintfImpl(param_2,pwVar2,uVar1,puVar3);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141773ae0 GetCPPTypeCustom body=147 status=ok
// SIG undefined GetCPPTypeCustom(void)

undefined8 *
UClassProperty::GetCPPTypeCustom
          (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5)

{
  if ((*(ulonglong *)(param_1 + 0x38) & 0x4000000000000) == 0) {
    *param_2 = 0;
    param_2[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"UClass*",0x10);
    return param_2;
  }
  if (*(int *)(param_5 + 1) != 0) {
    FString::PrintfImpl(param_2,L"TSubclassOf<%s> ",*param_5);
    return param_2;
  }
  FString::PrintfImpl(param_2,L"TSubclassOf<%s> ",&DAT_143f3eda8);
  return param_2;
}



// FUNCTION 141773b80 GetCPPTypeCustom body=1827 status=ok
// SIG undefined GetCPPTypeCustom(void)

undefined8 *
UMapProperty::GetCPPTypeCustom
          (undefined8 param_1,undefined8 *param_2,undefined2 **param_3,undefined8 param_4,
          undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  short *psVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  wint_t wVar7;
  wint_t wVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  longlong lVar14;
  wint_t *pwVar15;
  uint uVar16;
  undefined2 *puVar17;
  longlong lVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  int iVar21;
  undefined2 *puVar22;
  int local_88;
  undefined2 *local_80;
  undefined8 local_78;
  undefined2 *local_70;
  int local_68;
  int local_64;
  undefined2 *local_60;
  ulonglong local_58;
  undefined2 *local_50;
  undefined8 local_48;
  
  puVar17 = (undefined2 *)0x0;
  if (param_3 == (undefined2 **)0x0) goto LAB_141774269;
  local_70 = (undefined2 *)0x0;
  local_68 = *(int *)(param_6 + 1);
  lVar18 = (longlong)local_68;
  pvVar3 = (void *)*param_6;
  if (local_68 == 0) {
    local_64 = 0;
    puVar20 = puVar17;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,local_68,0);
    puVar20 = local_70;
    ::_guard_xfg_dispatch_icall_nop(local_70,pvVar3,lVar18 * 2);
  }
  local_88 = local_68;
  lVar18 = -1;
  puVar22 = local_80;
  if (local_68 != 0) {
    iVar21 = local_68 + -1;
    if (iVar21 != 0) {
      local_80 = (undefined2 *)0x0;
      iVar10 = iVar21;
      if (1 < iVar21) {
        iVar10 = 1;
      }
      local_78 = 0;
      psVar1 = puVar20 + ((longlong)iVar21 - (longlong)iVar10);
      if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
        lVar14 = -1;
        do {
          lVar14 = lVar14 + 1;
        } while (psVar1[lVar14] != 0);
        uVar13 = (int)lVar14 + 1;
        local_78 = (ulonglong)uVar13;
        uVar16 = uVar13;
        if (0 < (int)uVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
          uVar16 = (uint)local_78;
        }
        puVar20 = local_80;
        FGenericPlatformString::Memcpy(local_80,psVar1,(longlong)(int)uVar13 * 2);
        puVar17 = puVar20;
        puVar22 = puVar20;
        if (uVar16 != 0) goto LAB_141773cb0;
      }
      puVar20 = &DAT_143f3eda8;
      puVar22 = puVar17;
LAB_141773cb0:
      pwVar15 = &DAT_144d1d22c;
      do {
        wVar7 = *(wint_t *)((longlong)(puVar20 + -0xa268e916) + (longlong)pwVar15);
        if ((wVar7 == 0) && (*pwVar15 == 0)) {
          iVar10 = 0;
          goto LAB_141773d01;
        }
        if (wVar7 != *pwVar15) {
          wVar7 = towlower(wVar7);
          wVar8 = towlower(*pwVar15);
          if (wVar7 != wVar8) goto LAB_141773cf7;
        }
        pwVar15 = pwVar15 + 1;
      } while( true );
    }
    goto LAB_141773d25;
  }
  goto LAB_141773dc3;
LAB_141773cf7:
  iVar10 = (uint)wVar7 - (uint)wVar8;
LAB_141773d01:
  puVar17 = (undefined2 *)0x1;
  if (iVar10 == 0) {
    bVar4 = true;
    puVar20 = local_80;
    goto LAB_141773d34;
  }
LAB_141773d25:
  puVar20 = local_80;
  if (iVar21 != 0) goto LAB_141773d32;
LAB_141773dc3:
  puVar11 = (undefined2 *)0x0;
  puVar19 = &DAT_143f3eda8;
  iVar10 = *(int *)(param_5 + 1);
  iVar21 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar21 = -1;
  }
  puVar12 = (undefined2 *)(ulonglong)(iVar10 - 1);
  if (iVar10 == 0) {
    iVar21 = 0;
    puVar12 = (undefined2 *)0xffffffff;
  }
  puVar20 = local_80;
  if (iVar21 == 0) {
LAB_141773d32:
    bVar4 = false;
LAB_141773d34:
    if ((((ulonglong)puVar17 & 2) != 0) &&
       (puVar17 = (undefined2 *)(ulonglong)((uint)puVar17 & 0xfffffffd),
       puVar20 != (undefined2 *)0x0)) {
      FMemory::Free(puVar20);
    }
    if ((((ulonglong)puVar17 & 1) != 0) && (puVar22 != (undefined2 *)0x0)) {
      FMemory::Free(puVar22);
    }
    bVar6 = false;
    if (bVar4) {
      local_68 = (2 - (uint)(local_88 != 0)) + local_88;
      if (local_64 < local_68) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,local_88);
      }
      local_70[(longlong)local_88 - (ulonglong)(local_88 != 0)] = 0x20;
      (local_70 + ((longlong)local_88 - (ulonglong)(local_88 != 0)))[1] = 0;
      local_88 = local_68;
    }
    puVar17 = (undefined2 *)0x0;
    local_80 = (undefined2 *)0x0;
    iVar21 = *(int *)(param_8 + 1);
    pvVar3 = (void *)*param_8;
    local_78 = CONCAT44(local_78._4_4_,iVar21);
    if (iVar21 == 0) {
      local_78 = 0;
      iVar21 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,iVar21,0);
      puVar17 = local_80;
      ::_guard_xfg_dispatch_icall_nop(local_80,pvVar3,(longlong)iVar21 * 2);
      iVar21 = (int)local_78;
    }
    if ((iVar21 == 0) || (iVar10 = iVar21 + -1, iVar10 == 0)) {
LAB_141774000:
      iVar2 = *(int *)(param_7 + 1);
      iVar10 = iVar2 + -1;
      iVar9 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar10 = 0;
        iVar9 = -1;
      }
      if (iVar10 == 0) {
LAB_141774105:
        bVar4 = false;
        puVar17 = local_60;
LAB_141774109:
        bVar5 = false;
LAB_14177410b:
        if ((bVar4) && (puVar17 != (undefined2 *)0x0)) {
          FMemory::Free(puVar17);
        }
        if ((bVar6) && (local_50 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if (bVar5) {
          iVar10 = (2 - (uint)(iVar21 != 0)) + iVar21;
          local_78 = CONCAT44(local_78._4_4_,iVar10);
          if (local_78._4_4_ < iVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80);
            iVar10 = (uint)local_78;
          }
          local_80[(longlong)iVar21 - (ulonglong)(iVar21 != 0)] = 0x20;
          (local_80 + ((longlong)iVar21 - (ulonglong)(iVar21 != 0)))[1] = 0;
          iVar21 = iVar10;
        }
        puVar22 = local_70;
        puVar20 = local_80;
        puVar17 = &DAT_143f3eda8;
        puVar19 = &DAT_143f3eda8;
        if (iVar21 != 0) {
          puVar19 = local_80;
        }
        if (*(int *)(param_7 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*param_7;
        }
        puVar12 = &DAT_143f3eda8;
        if (local_88 != 0) {
          puVar12 = local_70;
        }
        if (*(int *)(param_5 + 1) != 0) {
          puVar17 = (undefined2 *)*param_5;
        }
        FString::PrintfImpl(&local_50,L"<%s%s,%s%s>",puVar17,puVar12,puVar11,puVar19);
        if (param_3 == &local_50) {
          if (local_50 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        else {
          if (*param_3 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          *param_3 = local_50;
          *(uint *)(param_3 + 1) = (uint)local_48;
          *(undefined4 *)((longlong)param_3 + 0xc) = local_48._4_4_;
        }
        if (puVar20 != (undefined2 *)0x0) {
          FMemory::Free(puVar20);
        }
        if (puVar22 != (undefined2 *)0x0) {
          FMemory::Free(puVar22);
        }
LAB_141774269:
        *param_2 = 0;
        param_2[1] = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
        FGenericPlatformString::Memcpy(*param_2,L"TMap",10);
        return param_2;
      }
      bVar4 = true;
      if (iVar2 == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*param_7;
      }
      local_60 = (undefined2 *)0x0;
      local_58 = 0;
      if (iVar2 == 0) {
        iVar9 = 0;
      }
      iVar10 = iVar9;
      if (1 < iVar9) {
        iVar10 = 1;
      }
      psVar1 = puVar17 + ((longlong)iVar9 - (longlong)iVar10);
      puVar17 = (undefined2 *)0x0;
      if ((psVar1 != (short *)0x0) && (puVar17 = (undefined2 *)0x0, *psVar1 != 0)) {
        do {
          lVar18 = lVar18 + 1;
        } while (psVar1[lVar18] != 0);
        uVar13 = (int)lVar18 + 1;
        local_58 = (ulonglong)uVar13;
        uVar16 = uVar13;
        if (0 < (int)uVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
          uVar16 = (uint)local_58;
        }
        puVar20 = local_60;
        FGenericPlatformString::Memcpy(local_60,psVar1,(longlong)(int)uVar13 * 2);
        puVar17 = puVar20;
        if (uVar16 != 0) goto LAB_1417740bd;
      }
      puVar20 = &DAT_143f3eda8;
LAB_1417740bd:
      pwVar15 = &DAT_144d1d64c;
      do {
        wVar7 = *(wint_t *)((longlong)(puVar20 + -0xa268eb26) + (longlong)pwVar15);
        if ((wVar7 == 0) && (*pwVar15 == 0)) goto LAB_141774101;
        if (wVar7 != *pwVar15) {
          wVar7 = towlower(wVar7);
          wVar8 = towlower(*pwVar15);
          if (wVar7 != wVar8) goto LAB_1417740f7;
        }
        pwVar15 = pwVar15 + 1;
      } while( true );
    }
    bVar6 = true;
    bVar4 = false;
    local_50 = (undefined2 *)0x0;
    local_48 = 0;
    iVar9 = iVar10;
    if (1 < iVar10) {
      iVar9 = 1;
    }
    psVar1 = puVar17 + ((longlong)iVar10 - (longlong)iVar9);
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (psVar1[lVar14] != 0);
      uVar13 = (int)lVar14 + 1;
      local_48 = (ulonglong)uVar13;
      uVar16 = uVar13;
      if (0 < (int)uVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
        uVar16 = (uint)local_48;
      }
      puVar17 = local_50;
      FGenericPlatformString::Memcpy(local_50,psVar1,(longlong)(int)uVar13 * 2);
      if (uVar16 != 0) goto LAB_141773fa6;
    }
    puVar17 = &DAT_143f3eda8;
LAB_141773fa6:
    pwVar15 = &DAT_144d1d62c;
    do {
      wVar7 = *(wint_t *)((longlong)(puVar17 + -0xa268eb16) + (longlong)pwVar15);
      if ((wVar7 == 0) && (*pwVar15 == 0)) goto LAB_141773fea;
      if (wVar7 != *pwVar15) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*pwVar15);
        if (wVar7 != wVar8) goto LAB_141773fe0;
      }
      pwVar15 = pwVar15 + 1;
    } while( true );
  }
  puVar17 = (undefined2 *)(ulonglong)((uint)puVar17 | 2);
  puVar20 = puVar11;
  if (iVar10 != 0) {
    puVar19 = (undefined2 *)*param_5;
    puVar20 = puVar12;
  }
  local_80 = (undefined2 *)0x0;
  iVar21 = (int)puVar20;
  lVar14 = (longlong)iVar21;
  local_78 = 0;
  if (1 < iVar21) {
    iVar21 = 1;
  }
  psVar1 = puVar19 + (lVar14 - iVar21);
  puVar20 = puVar11;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (psVar1[lVar14] != 0);
    uVar13 = (int)lVar14 + 1;
    local_78 = (ulonglong)uVar13;
    uVar16 = uVar13;
    if (0 < (int)uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
      uVar16 = (uint)local_78;
    }
    puVar19 = local_80;
    FGenericPlatformString::Memcpy(local_80,psVar1,(longlong)(int)uVar13 * 2);
    puVar20 = puVar19;
    if (uVar16 != 0) goto LAB_141773e6c;
  }
  puVar19 = &DAT_143f3eda8;
LAB_141773e6c:
  pwVar15 = &DAT_144d1d43c;
  do {
    wVar7 = *(wint_t *)((longlong)(puVar19 + -0xa268ea1e) + (longlong)pwVar15);
    if ((wVar7 == 0) && (*pwVar15 == 0)) goto LAB_141773eb4;
    if (wVar7 != *pwVar15) {
      wVar7 = towlower(wVar7);
      wVar8 = towlower(*pwVar15);
      if (wVar7 != wVar8) break;
    }
    pwVar15 = pwVar15 + 1;
  } while( true );
  if (wVar7 != wVar8) goto LAB_141773d32;
LAB_141773eb4:
  bVar4 = true;
  goto LAB_141773d34;
LAB_141773fe0:
  if (wVar7 == wVar8) {
LAB_141773fea:
    bVar5 = true;
    puVar17 = local_60;
    goto LAB_14177410b;
  }
  if (iVar10 == 0) goto LAB_141774000;
  goto LAB_141774105;
LAB_1417740f7:
  if (wVar7 != wVar8) goto LAB_141774109;
LAB_141774101:
  bVar5 = true;
  goto LAB_14177410b;
}



// FUNCTION 1417742b0 GetCPPTypeCustom body=57 status=ok
// SIG undefined GetCPPTypeCustom(void)

undefined8
UObjectProperty::GetCPPTypeCustom
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_5 + 1) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)*param_5;
  }
  FString::PrintfImpl(param_2,&DAT_144d22530,puVar1);
  return param_2;
}



// FUNCTION 1417742f0 GetCPPTypeCustom body=1038 status=ok
// SIG undefined GetCPPTypeCustom(void)

undefined8 *
USetProperty::GetCPPTypeCustom
          (undefined8 param_1,undefined8 *param_2,undefined2 **param_3,undefined8 param_4,
          undefined8 *param_5,undefined8 *param_6)

{
  short *psVar1;
  void *_Src;
  bool bVar2;
  wint_t wVar3;
  wint_t wVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  wint_t *pwVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined2 *puVar14;
  uint uVar15;
  undefined2 *puVar16;
  undefined2 *local_70;
  int local_68;
  int local_64;
  undefined2 *local_60;
  ulonglong local_58;
  undefined2 *local_50;
  undefined8 local_48;
  undefined2 *puVar17;
  
  if (param_3 == (undefined2 **)0x0) goto LAB_1417746c6;
  local_70 = (undefined2 *)0x0;
  local_68 = *(int *)(param_6 + 1);
  lVar10 = (longlong)local_68;
  _Src = (void *)*param_6;
  if (local_68 == 0) {
    local_64 = 0;
    puVar14 = (undefined2 *)0x0;
    iVar9 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,local_68,0,param_4,0);
    puVar14 = local_70;
    ::_guard_xfg_dispatch_icall_nop(local_70,_Src,lVar10 * 2);
    iVar9 = local_68;
  }
  lVar10 = -1;
  puVar16 = (undefined2 *)0x0;
  if ((iVar9 != 0) && (iVar13 = iVar9 + -1, puVar16 = (undefined2 *)0x0, iVar13 != 0)) {
    iVar5 = iVar13;
    if (1 < iVar13) {
      iVar5 = 1;
    }
    local_50 = (undefined2 *)0x0;
    local_48 = 0;
    psVar1 = puVar14 + ((longlong)iVar13 - (longlong)iVar5);
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (psVar1[lVar7] != 0);
      uVar6 = (int)lVar7 + 1;
      local_48 = (ulonglong)uVar6;
      uVar15 = uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
        uVar15 = (uint)local_48;
      }
      puVar16 = local_50;
      FGenericPlatformString::Memcpy(local_50,psVar1,(longlong)(int)uVar6 * 2);
      if (uVar15 != 0) goto LAB_14177441e;
    }
    puVar16 = &DAT_143f3eda8;
LAB_14177441e:
    pwVar8 = &DAT_144d1d0ec;
    do {
      wVar3 = *(wint_t *)((longlong)(puVar16 + -0xa268e876) + (longlong)pwVar8);
      if ((wVar3 == 0) && (*pwVar8 == 0)) {
        iVar5 = 0;
        goto LAB_141774477;
      }
      if (wVar3 != *pwVar8) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar8);
        if (wVar3 != wVar4) goto LAB_14177446b;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
  goto LAB_1417744a1;
LAB_14177446b:
  iVar5 = (uint)wVar3 - (uint)wVar4;
LAB_141774477:
  puVar17 = (undefined2 *)0x1;
  puVar16 = (undefined2 *)0x1;
  puVar12 = local_60;
  if (iVar5 == 0) {
    bVar2 = true;
    goto LAB_1417745aa;
  }
  if (iVar13 != 0) goto LAB_1417745a8;
LAB_1417744a1:
  iVar5 = *(int *)(param_5 + 1);
  iVar13 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar13 = -1;
  }
  iVar11 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar11 = -1;
    iVar13 = 0;
  }
  puVar12 = local_60;
  puVar17 = puVar16;
  if (iVar13 == 0) {
LAB_1417745a8:
    bVar2 = false;
LAB_1417745aa:
    if ((((ulonglong)puVar17 & 2) != 0) &&
       (puVar17 = (undefined2 *)(ulonglong)((uint)puVar17 & 0xfffffffd),
       puVar12 != (undefined2 *)0x0)) {
      FMemory::Free(puVar12);
    }
    if ((((ulonglong)puVar17 & 1) != 0) && (local_50 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if (bVar2) {
      local_68 = (2 - (uint)(iVar9 != 0)) + iVar9;
      if (local_64 < local_68) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,iVar9);
        puVar14 = local_70;
      }
      lVar10 = (longlong)iVar9 - (ulonglong)(iVar9 != 0);
      puVar14[lVar10] = 0x20;
      puVar14[lVar10 + 1] = 0;
      iVar9 = local_68;
    }
    puVar16 = &DAT_143f3eda8;
    puVar12 = &DAT_143f3eda8;
    if (iVar9 != 0) {
      puVar12 = puVar14;
    }
    if (*(int *)(param_5 + 1) != 0) {
      puVar16 = (undefined2 *)*param_5;
    }
    FString::PrintfImpl(&local_50,L"<%s%s>",puVar16,puVar12);
    if (param_3 == &local_50) {
      if (local_50 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_3 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *param_3 = local_50;
      *(uint *)(param_3 + 1) = (uint)local_48;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_48._4_4_;
    }
    if (puVar14 != (undefined2 *)0x0) {
      FMemory::Free(puVar14);
    }
LAB_1417746c6:
    *param_2 = 0;
    param_2[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"TSet",10);
    return param_2;
  }
  puVar17 = (undefined2 *)(ulonglong)((uint)puVar16 | 2);
  if (iVar5 == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = (undefined2 *)*param_5;
  }
  local_60 = (undefined2 *)0x0;
  local_58 = 0;
  if (iVar5 == 0) {
    iVar11 = 0;
  }
  iVar13 = iVar11;
  if (1 < iVar11) {
    iVar13 = 1;
  }
  psVar1 = puVar16 + ((longlong)iVar11 - (longlong)iVar13);
  puVar12 = (undefined2 *)0x0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    do {
      lVar10 = lVar10 + 1;
    } while (psVar1[lVar10] != 0);
    uVar6 = (int)lVar10 + 1;
    local_58 = (ulonglong)uVar6;
    uVar15 = uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
      uVar15 = (uint)local_58;
    }
    puVar16 = local_60;
    FGenericPlatformString::Memcpy(local_60,psVar1,(longlong)(int)uVar6 * 2);
    puVar12 = puVar16;
    if (uVar15 != 0) goto LAB_141774559;
  }
  puVar16 = &DAT_143f3eda8;
LAB_141774559:
  pwVar8 = &DAT_144d1d0fc;
  do {
    wVar3 = *(wint_t *)((longlong)(puVar16 + -0xa268e87e) + (longlong)pwVar8);
    if ((wVar3 == 0) && (*pwVar8 == 0)) goto LAB_1417745a0;
    if (wVar3 != *pwVar8) {
      wVar3 = towlower(wVar3);
      wVar4 = towlower(*pwVar8);
      if (wVar3 != wVar4) break;
    }
    pwVar8 = pwVar8 + 1;
  } while( true );
  if (wVar3 != wVar4) goto LAB_1417745a8;
LAB_1417745a0:
  bVar2 = true;
  goto LAB_1417745aa;
}



// FUNCTION 141774700 GetCPPTypeCustom body=57 status=ok
// SIG undefined GetCPPTypeCustom(void)

undefined8
USoftClassProperty::GetCPPTypeCustom
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_5 + 1) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)*param_5;
  }
  FString::PrintfImpl(param_2,L"TSoftClassPtr<%s> ",puVar1);
  return param_2;
}



// FUNCTION 141774740 GetCPPTypeCustom body=57 status=ok
// SIG undefined GetCPPTypeCustom(void)

undefined8
USoftObjectProperty::GetCPPTypeCustom
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_5 + 1) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)*param_5;
  }
  FString::PrintfImpl(param_2,L"TSoftObjectPtr<%s>",puVar1);
  return param_2;
}



// FUNCTION 141774780 GetCPPTypeForwardDeclaration body=135 status=ok
// SIG undefined GetCPPTypeForwardDeclaration(void)

undefined8 FObjectProperty::GetCPPTypeForwardDeclaration(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x2c0))();
  FString::PrintfImpl(param_2,L"class %s%s;",uVar1,puVar2);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141774810 GetCPPTypeForwardDeclaration body=122 status=ok
// SIG undefined GetCPPTypeForwardDeclaration(void)

undefined8 UInterfaceProperty::GetCPPTypeForwardDeclaration(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined8 local_res8 [4];
  undefined2 *local_18;
  int local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  while ((lVar1 != 0 && ((*(uint *)(lVar1 + 0xb4) >> 7 & 1) == 0))) {
    lVar1 = *(longlong *)(lVar1 + 0x30);
  }
  local_res8[0] = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(local_res8,&local_18);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  FString::PrintfImpl(param_2,L"class I%s;",puVar2);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141774890 FUN_141774890 body=167 status=ok
// SIG undefined FUN_141774890(void)

undefined8 FUN_141774890(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x78) + 0x2a0))
                     (*(longlong **)(param_1 + 0x78),local_18);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2a0))
                     (*(longlong **)(param_1 + 0x70),local_28);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s %s",puVar3,puVar2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141774940 FUN_141774940 body=135 status=ok
// SIG undefined FUN_141774940(void)

undefined8 FUN_141774940(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2c0))();
  FString::PrintfImpl(param_2,L"class %s%s;",uVar1,puVar2);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1417749d0 GetCPPTypeForwardDeclaration body=135 status=ok
// SIG undefined GetCPPTypeForwardDeclaration(void)

undefined8 FObjectProperty::GetCPPTypeForwardDeclaration(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x2c0))();
  FString::PrintfImpl(param_2,L"class %s%s;",uVar1,puVar2);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141774a60 FUN_141774a60 body=135 status=ok
// SIG undefined FUN_141774a60(void)

undefined8 FUN_141774a60(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2c0))();
  FString::PrintfImpl(param_2,L"class %s%s;",uVar1,puVar2);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141774af0 GetCPPTypeForwardDeclaration body=94 status=ok
// SIG undefined GetCPPTypeForwardDeclaration(void)

undefined8 UStructProperty::GetCPPTypeForwardDeclaration(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined8 local_res8 [4];
  undefined2 *local_18;
  int local_10;
  
  local_res8[0] = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FName::ToString(local_res8,&local_18);
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"struct F%s;",puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141774b50 FUN_141774b50 body=135 status=ok
// SIG undefined FUN_141774b50(void)

undefined8 FUN_141774b50(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2c0))();
  FString::PrintfImpl(param_2,L"class %s%s;",uVar1,puVar2);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141774cb0 GetNumericPropertyValueToString body=37 status=ok
// SIG undefined GetNumericPropertyValueToString(void)

undefined8
TProperty_Numeric<signed_char>::GetNumericPropertyValueToString
          (undefined8 param_1,undefined8 param_2,char *param_3)

{
  FString::PrintfImpl(param_2,&DAT_1447540a8,(int)*param_3);
  return param_2;
}



// FUNCTION 141774ce0 GetNumericPropertyValueToString body=37 status=ok
// SIG undefined GetNumericPropertyValueToString(void)

undefined8
TProperty_Numeric<short>::GetNumericPropertyValueToString
          (undefined8 param_1,undefined8 param_2,short *param_3)

{
  FString::PrintfImpl(param_2,&DAT_144ca01b8,(int)*param_3);
  return param_2;
}



// FUNCTION 141774d10 GetNumericPropertyValueToString body=37 status=ok
// SIG undefined GetNumericPropertyValueToString(void)

undefined8
TProperty_Numeric<unsigned_short>::GetNumericPropertyValueToString
          (undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  FString::PrintfImpl(param_2,&DAT_144ca0188,*param_3);
  return param_2;
}



// FUNCTION 141774d40 FUN_141774d40 body=36 status=ok
// SIG undefined FUN_141774d40(void)

undefined8 FUN_141774d40(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FString::PrintfImpl(param_2,&DAT_1440da628,*param_3);
  return param_2;
}



// FUNCTION 141774d70 FUN_141774d70 body=36 status=ok
// SIG undefined FUN_141774d70(void)

undefined8 FUN_141774d70(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FString::PrintfImpl(param_2,&DAT_144ca0198,*param_3);
  return param_2;
}



// FUNCTION 141774da0 GetNumericPropertyValueToString body=46 status=ok
// SIG undefined GetNumericPropertyValueToString(void)

undefined8
TProperty_Numeric<float>::GetNumericPropertyValueToString
          (undefined8 param_1,undefined8 param_2,float *param_3)

{
  FString::PrintfImpl(param_2,&DAT_144114f48,(double)*param_3);
  return param_2;
}



// FUNCTION 141774dd0 GetNumericPropertyValueToString body=43 status=ok
// SIG undefined GetNumericPropertyValueToString(void)

undefined8
TProperty_Numeric<double>::GetNumericPropertyValueToString
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FString::PrintfImpl(param_2,&DAT_144ca01d8,*param_3);
  return param_2;
}



// FUNCTION 141774e00 GetNumericPropertyValueToString body=36 status=ok
// SIG undefined GetNumericPropertyValueToString(void)

undefined8
TProperty_Numeric<__int64>::GetNumericPropertyValueToString
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FString::PrintfImpl(param_2,L"%lld",*param_3);
  return param_2;
}



// FUNCTION 141774e30 GetNumericPropertyValueToString body=36 status=ok
// SIG undefined GetNumericPropertyValueToString(void)

undefined8
TProperty_Numeric<unsigned___int64>::GetNumericPropertyValueToString
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FString::PrintfImpl(param_2,L"%llu",*param_3);
  return param_2;
}



// FUNCTION 141774e60 GetObjectPropertyValue body=150 status=ok
// SIG undefined GetObjectPropertyValue(void)

longlong ULazyObjectProperty::GetObjectPropertyValue(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_2);
  if (lVar1 == 0) {
    LOCK();
    if (DAT_1464b4c84 == 0) {
      DAT_1464b4c84 = 0;
    }
    UNLOCK();
    if ((DAT_1464b4c84 != *(int *)(param_2 + 8)) &&
       (((*(int *)(param_2 + 0x18) != 0 || *(int *)(param_2 + 0x14) != 0) ||
        *(int *)(param_2 + 0x10) != 0) || *(int *)(param_2 + 0xc) != 0)) {
      lVar1 = FUniqueObjectGuid::ResolveObject();
      FWeakObjectPtr::operator=(param_2,lVar1);
      if ((lVar1 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b4c84 == 0) {
          DAT_1464b4c84 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 8) = DAT_1464b4c84;
      }
      lVar1 = FWeakObjectPtr::Get(param_2);
      return lVar1;
    }
  }
  return lVar1;
}



// FUNCTION 141774f00 FUN_141774f00 body=4 status=ok
// SIG undefined FUN_141774f00(void)

undefined8 FUN_141774f00(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



// FUNCTION 141774f10 GetObjectPropertyValue body=149 status=ok
// SIG undefined GetObjectPropertyValue(void)

longlong USoftObjectProperty::GetObjectPropertyValue(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_2);
  if (lVar1 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 8)) && (*(longlong *)(param_2 + 0x10) != 0)) {
      lVar1 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_2,lVar1);
      if ((lVar1 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 8) = DAT_1464b56f4;
      }
      lVar1 = FWeakObjectPtr::Get(param_2);
      return lVar1;
    }
  }
  return lVar1;
}



// FUNCTION 141774fc0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UClassProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7b70 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"ClassProperty",&DAT_1469e7b70,
                  AK::MemoryMgr::StartProfileThreadUsage,0x80,0x10000000,0x400,L"Engine",
                  FUN_141767a80,InternalVTableHelperCtorCaller<UClassProperty>,
                  USoftClassProperty::AddReferencedObjects,UObjectProperty::GetPrivateStaticClass,
                  FUN_14171c410,0);
  }
  return DAT_1469e7b70;
}



// FUNCTION 141775070 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDelegateProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7c28 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"DelegateProperty",&DAT_1469e7c28,
                  AK::MemoryMgr::StartProfileThreadUsage,0x78,0x10000000,0x800000,L"Engine",
                  FUN_141767ab0,InternalVTableHelperCtorCaller<UDelegateProperty>,
                  AK::MemoryMgr::StartProfileThreadUsage,UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e7c28;
}



// FUNCTION 141775120 GetPrivateStaticClass body=168 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDoubleProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7c38 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"DoubleProperty",&DAT_1469e7c38,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000000,0x100000000,L"Engine",
                  FUN_141767ae0,InternalVTableHelperCtorCaller<UDoubleProperty>,
                  AK::MemoryMgr::StartProfileThreadUsage,UNumericProperty::StaticClass,FUN_14171c410
                  ,0);
  }
  return DAT_1469e7c38;
}



// FUNCTION 1417751d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFloatProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7c48 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"FloatProperty",&DAT_1469e7c48,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000000,0x100,L"Engine",
                  FUN_141767b10,InternalVTableHelperCtorCaller<UFloatProperty>,
                  AK::MemoryMgr::StartProfileThreadUsage,UNumericProperty::StaticClass,FUN_14171c410
                  ,0);
  }
  return DAT_1469e7c48;
}



// FUNCTION 141775280 GetPrivateStaticClass body=163 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInt16Property::GetPrivateStaticClass(void)

{
  if (DAT_1469e7c68 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"Int16Property",&DAT_1469e7c68,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000000,0x80000000,L"Engine",
                  FUN_141767b40,InternalVTableHelperCtorCaller<UInt16Property>,
                  AK::MemoryMgr::StartProfileThreadUsage,UNumericProperty::StaticClass,FUN_14171c410
                  ,0);
  }
  return DAT_1469e7c68;
}



// FUNCTION 141775330 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInt64Property::GetPrivateStaticClass(void)

{
  if (DAT_1469e7c78 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"Int64Property",&DAT_1469e7c78,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000000,0x400000,L"Engine",
                  FUN_141767b70,InternalVTableHelperCtorCaller<UInt64Property>,
                  AK::MemoryMgr::StartProfileThreadUsage,UNumericProperty::StaticClass,FUN_14171c410
                  ,0);
  }
  return DAT_1469e7c78;
}



// FUNCTION 1417753e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInt8Property::GetPrivateStaticClass(void)

{
  if (DAT_1469e7c88 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"Int8Property",&DAT_1469e7c88,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000000,2,L"Engine",
                  InternalConstructor<UInt8Property>,InternalVTableHelperCtorCaller<UInt8Property>,
                  AK::MemoryMgr::StartProfileThreadUsage,UNumericProperty::StaticClass,FUN_14171c410
                  ,0);
  }
  return DAT_1469e7c88;
}



// FUNCTION 141775490 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UIntProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7c58 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"IntProperty",&DAT_1469e7c58,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000000,0x80,L"Engine",
                  FUN_141767bd0,InternalVTableHelperCtorCaller<UIntProperty>,
                  AK::MemoryMgr::StartProfileThreadUsage,UNumericProperty::StaticClass,FUN_14171c410
                  ,0);
  }
  return DAT_1469e7c58;
}



// FUNCTION 141775540 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInterfaceProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7c98 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"InterfaceProperty",&DAT_1469e7c98,
                  AK::MemoryMgr::StartProfileThreadUsage,0x78,0x10000000,0x1000,L"Engine",
                  FUN_141767c00,InternalVTableHelperCtorCaller<UInterfaceProperty>,
                  UArrayProperty::AddReferencedObjects,UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e7c98;
}



// FUNCTION 1417755f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULazyObjectProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7ca8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"LazyObjectProperty",&DAT_1469e7ca8,
                  AK::MemoryMgr::StartProfileThreadUsage,0x78,0x10000000,0x10000000,L"Engine",
                  InternalConstructor<ULazyObjectProperty>,
                  InternalVTableHelperCtorCaller<ULazyObjectProperty>,
                  UArrayProperty::AddReferencedObjects,UObjectPropertyBase::GetPrivateStaticClass,
                  FUN_14171c410,0);
  }
  return DAT_1469e7ca8;
}



// FUNCTION 1417756a0 GetPrivateStaticClass body=168 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMapProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7cb8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"MapProperty",&DAT_1469e7cb8,
                  AK::MemoryMgr::StartProfileThreadUsage,0xa8,0x10000000,0x400000000000,L"Engine",
                  FUN_141767c60,InternalVTableHelperCtorCaller<UMapProperty>,AddReferencedObjects,
                  UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e7cb8;
}



// FUNCTION 141775750 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMulticastDelegateProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7cc8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"MulticastDelegateProperty",&DAT_1469e7cc8,
                  AK::MemoryMgr::StartProfileThreadUsage,0x78,0x10000000,0x2000000,L"Engine",
                  FUN_141767c90,InternalVTableHelperCtorCaller<UMulticastDelegateProperty>,
                  AK::MemoryMgr::StartProfileThreadUsage,UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e7cc8;
}



// FUNCTION 141775800 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNameProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7cd8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"NameProperty",&DAT_1469e7cd8,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000000,0x2000,L"Engine",
                  FUN_141767cc0,InternalVTableHelperCtorCaller<UNameProperty>,
                  AK::MemoryMgr::StartProfileThreadUsage,UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e7cd8;
}



// FUNCTION 1417758b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNumericProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7ce8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"NumericProperty",&DAT_1469e7ce8,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000001,0x1000000,L"Engine",
                  FUN_141767cf0,InternalVTableHelperCtorCaller<UNumericProperty>,
                  AK::MemoryMgr::StartProfileThreadUsage,UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e7ce8;
}



// FUNCTION 141775960 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UObjectProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7d08 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"ObjectProperty",&DAT_1469e7d08,
                  AK::MemoryMgr::StartProfileThreadUsage,0x78,0x10000000,0x10000,L"Engine",
                  FUN_141767d20,InternalVTableHelperCtorCaller<UObjectProperty>,
                  UArrayProperty::AddReferencedObjects,UObjectPropertyBase::GetPrivateStaticClass,
                  FUN_14171c410,0);
  }
  return DAT_1469e7d08;
}



// FUNCTION 141775a10 GetPrivateStaticClass body=168 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USetProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7d18 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"SetProperty",&DAT_1469e7d18,
                  AK::MemoryMgr::StartProfileThreadUsage,0x98,0x10000000,0x800000000000,L"Engine",
                  FUN_141767d50,InternalVTableHelperCtorCaller<USetProperty>,
                  UArrayProperty::AddReferencedObjects,UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e7d18;
}



// FUNCTION 141775ac0 GetPrivateStaticClass body=168 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoftClassProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7d28 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"SoftClassProperty",&DAT_1469e7d28,
                  AK::MemoryMgr::StartProfileThreadUsage,0x80,0x10000000,0x200000000,L"Engine",
                  FUN_141767d80,InternalVTableHelperCtorCaller<USoftClassProperty>,
                  AddReferencedObjects,USoftObjectProperty::GetPrivateStaticClass,FUN_14171c410,0);
  }
  return DAT_1469e7d28;
}



// FUNCTION 141775b70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoftObjectProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7d88 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"SoftObjectProperty",&DAT_1469e7d88,
                  AK::MemoryMgr::StartProfileThreadUsage,0x78,0x10000000,0x20000000,L"Engine",
                  FUN_141767db0,InternalVTableHelperCtorCaller<USoftObjectProperty>,
                  UArrayProperty::AddReferencedObjects,UObjectPropertyBase::GetPrivateStaticClass,
                  FUN_14171c410,0);
  }
  return DAT_1469e7d88;
}



// FUNCTION 141775c20 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UStrProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7d98 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"StrProperty",&DAT_1469e7d98,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000000,0x4000,L"Engine",
                  FUN_141767de0,InternalVTableHelperCtorCaller<UStrProperty>,
                  AK::MemoryMgr::StartProfileThreadUsage,UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e7d98;
}



// FUNCTION 141775cd0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UStructProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7db8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"StructProperty",&DAT_1469e7db8,
                  AK::MemoryMgr::StartProfileThreadUsage,0x78,0x10000000,0x100000,L"Engine",
                  FUN_141767e10,InternalVTableHelperCtorCaller<UStructProperty>,
                  UArrayProperty::AddReferencedObjects,UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e7db8;
}



// FUNCTION 141775d80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUInt16Property::GetPrivateStaticClass(void)

{
  if (DAT_1469e7dc8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"UInt16Property",&DAT_1469e7dc8,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000000,0x40000,L"Engine",
                  FUN_141767e40,InternalVTableHelperCtorCaller<UUInt16Property>,
                  AK::MemoryMgr::StartProfileThreadUsage,UNumericProperty::StaticClass,FUN_14171c410
                  ,0);
  }
  return DAT_1469e7dc8;
}



// FUNCTION 141775e30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUInt32Property::GetPrivateStaticClass(void)

{
  if (DAT_1469e7dd8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"UInt32Property",&DAT_1469e7dd8,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000000,0x800,L"Engine",
                  FUN_141767e70,InternalVTableHelperCtorCaller<UUInt32Property>,
                  AK::MemoryMgr::StartProfileThreadUsage,UNumericProperty::StaticClass,FUN_14171c410
                  ,0);
  }
  return DAT_1469e7dd8;
}



// FUNCTION 141775ee0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUInt64Property::GetPrivateStaticClass(void)

{
  if (DAT_1469e7de8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"UInt64Property",&DAT_1469e7de8,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000000,0x200,L"Engine",
                  FUN_141767ea0,InternalVTableHelperCtorCaller<UUInt64Property>,
                  AK::MemoryMgr::StartProfileThreadUsage,UNumericProperty::StaticClass,FUN_14171c410
                  ,0);
  }
  return DAT_1469e7de8;
}



// FUNCTION 141775f90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWeakObjectProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7df8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"WeakObjectProperty",&DAT_1469e7df8,
                  AK::MemoryMgr::StartProfileThreadUsage,0x78,0x10000000,0x8000000,L"Engine",
                  FUN_141767ed0,InternalVTableHelperCtorCaller<UWeakObjectProperty>,
                  UArrayProperty::AddReferencedObjects,UObjectPropertyBase::GetPrivateStaticClass,
                  FUN_14171c410,0);
  }
  return DAT_1469e7df8;
}



// FUNCTION 141776080 FUN_141776080 body=3 status=ok
// SIG undefined FUN_141776080(void)

undefined4 FUN_141776080(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}



// FUNCTION 141776240 GetValueTypeHashInternal body=279 status=ok
// SIG undefined GetValueTypeHashInternal(void)

uint USoftObjectProperty::GetValueTypeHashInternal(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (int)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
          (int)*(undefined8 *)(param_2 + 0x10);
  uVar5 = uVar4 >> 0xd ^ -uVar4;
  uVar2 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 10;
  if (*(int *)(param_2 + 0x20) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)(param_2 + 0x18);
  }
  uVar1 = FUN_140438070(puVar3);
  uVar4 = ((uVar4 - uVar2) - uVar5 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar5 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar2 = (uVar1 - uVar5) - uVar4 ^ uVar5 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar2 >> 0xc;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 << 0x10;
  uVar2 = (uVar2 - uVar5) - uVar4 ^ uVar5 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar2 >> 3;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 << 10;
  return (uVar2 - uVar5) - uVar4 ^ uVar5 >> 0xf;
}



// FUNCTION 141776430 Identical body=264 status=ok
// SIG undefined Identical(void)

bool TProperty_WithEqualityAndSerializer<FString,UProperty>::Identical
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined2 **ppuVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *local_38;
  int local_30;
  undefined4 uStack_2c;
  void *local_28;
  undefined4 local_20;
  
  puVar7 = (undefined2 *)0x0;
  if (param_3 == (undefined8 *)0x0) {
    local_20 = 0;
    ppuVar4 = &local_28;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    iVar3 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    local_38 = (undefined2 *)0x0;
    local_30 = iVar3;
    if (iVar3 == 0) {
      uStack_2c = 0;
      ppuVar4 = &local_38;
      bVar2 = true;
      bVar1 = false;
      puVar7 = (undefined2 *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar3,0);
      puVar7 = local_38;
      ::_guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar3 * 2);
      ppuVar4 = &local_38;
      bVar2 = true;
      bVar1 = false;
    }
  }
  *ppuVar4 = (undefined2 *)0x0;
  iVar3 = *(int *)(ppuVar4 + 1);
  ppuVar4[1] = (undefined2 *)0x0;
  if (bVar1) {
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_38 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  puVar5 = &DAT_143f3eda8;
  puVar6 = &DAT_143f3eda8;
  if (iVar3 != 0) {
    puVar6 = puVar7;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  return iVar3 == 0;
}



// FUNCTION 141776560 FUN_141776560 body=100 status=ok
// SIG undefined FUN_141776560(void)

bool FUN_141776560(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  lVar1 = lVar2;
  if (param_2 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x378))();
  }
  if (param_3 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x378))(param_1,param_3);
  }
  return lVar1 == lVar2;
}



// FUNCTION 1417765d0 Identical body=116 status=ok
// SIG undefined Identical(void)

ulonglong UDelegateProperty::Identical(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_3 == 0) {
    return (ulonglong)(*(longlong *)(param_2 + 8) == 0);
  }
  uVar1 = FWeakObjectPtr::Get(param_2);
  uVar2 = FWeakObjectPtr::Get(param_3);
  if ((uVar1 == uVar2) &&
     (uVar2 = *(ulonglong *)(param_3 + 8), *(ulonglong *)(param_2 + 8) == uVar2)) {
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141776690 FUN_141776690 body=1815 status=ok
// SIG undefined FUN_141776690(void)

undefined1
FUN_141776690(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,ulonglong param_4)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined1 uVar11;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  uint local_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60 [5];
  undefined4 local_4c;
  int local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_a0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  if (param_2 == (undefined4 *)0x0) {
    local_88 = 0xffffffff;
    local_84 = 0;
    puVar9 = &local_7c;
    local_74 = 0;
    local_7c = 0;
    local_c8 = 0xffffffff;
    local_80 = 0;
    local_c4 = local_a4;
    local_c0 = local_a0;
  }
  else {
    local_c8 = *param_2;
    puVar9 = &local_44;
    local_44 = *(undefined8 *)(param_2 + 3);
    uStack_3c = *(undefined8 *)(param_2 + 5);
    local_60[4] = local_c8;
    local_4c = param_2[1];
    local_48 = param_2[2];
    local_c4 = param_2[1];
    local_c0 = param_2[2];
  }
  local_bc = *puVar9;
  uStack_b4 = puVar9[1];
  if (param_3 == (undefined4 *)0x0) {
    local_6c = 0xffffffff;
    local_68 = 0;
    local_64 = 0;
    puVar10 = local_60;
    local_60[2] = 0;
    local_60[3] = 0;
    local_60[0] = 0;
    local_60[1] = 0;
  }
  else {
    local_a8 = *param_3;
    local_a4 = param_3[1];
    local_a0 = param_3[2];
    puVar10 = (uint *)&local_28;
    local_28 = *(undefined8 *)(param_3 + 3);
    uStack_20 = *(undefined8 *)(param_3 + 5);
    local_34 = local_a8;
    local_30 = local_a4;
    local_2c = local_a0;
  }
  local_9c = *puVar10;
  uStack_98 = puVar10[1];
  uStack_94 = puVar10[2];
  uStack_90 = puVar10[3];
  if ((param_4 >> 0x16 & 1) == 0) {
    uVar8 = (uint)((ulonglong)local_bc >> 0x20) ^ uStack_98;
    uVar7 = uStack_90 ^ (uint)((ulonglong)uStack_b4 >> 0x20);
    uVar11 = ((uVar8 == 0 && uVar7 == 0) && (uStack_94 ^ (uint)uStack_b4) == 0) &&
             (local_9c ^ (uint)local_bc) == 0;
    if (((uVar8 == 0 && uVar7 == 0) && (uStack_94 ^ (uint)uStack_b4) == 0) &&
        (local_9c ^ (uint)local_bc) == 0) {
      return (bool)uVar11;
    }
  }
  else {
    uVar11 = false;
  }
  lVar5 = FWeakObjectPtr::Get(&local_c8);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b4c84 == 0) {
      DAT_1464b4c84 = 0;
    }
    UNLOCK();
    if (DAT_1464b4c84 == local_c0) {
      return (bool)uVar11;
    }
    if (((uStack_b4._4_4_ == 0 && (uint)uStack_b4 == 0) && local_bc._4_4_ == 0) &&
        (uint)local_bc == 0) {
      return (bool)uVar11;
    }
    lVar5 = FUniqueObjectGuid::ResolveObject(&local_bc);
    FWeakObjectPtr::operator=(&local_c8,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b4c84 == 0) {
        DAT_1464b4c84 = 0;
      }
      UNLOCK();
      local_c0 = DAT_1464b4c84;
    }
    lVar5 = FWeakObjectPtr::Get(&local_c8);
    if (lVar5 == 0) {
      return (bool)uVar11;
    }
  }
  lVar5 = FWeakObjectPtr::Get(&local_a8);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b4c84 == 0) {
      DAT_1464b4c84 = 0;
    }
    UNLOCK();
    if (DAT_1464b4c84 == local_a0) {
      return (bool)uVar11;
    }
    if (((uStack_90 == 0 && uStack_94 == 0) && uStack_98 == 0) && local_9c == 0) {
      return (bool)uVar11;
    }
    lVar5 = FUniqueObjectGuid::ResolveObject(&local_9c);
    FWeakObjectPtr::operator=(&local_a8,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b4c84 == 0) {
        DAT_1464b4c84 = 0;
      }
      UNLOCK();
      local_a0 = DAT_1464b4c84;
    }
    lVar5 = FWeakObjectPtr::Get(&local_a8);
    if (lVar5 == 0) {
      return (bool)uVar11;
    }
  }
  lVar5 = FWeakObjectPtr::Get(&local_c8);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b4c84 == 0) {
      DAT_1464b4c84 = 0;
    }
    UNLOCK();
    if (DAT_1464b4c84 != local_c0) {
      if (((uStack_b4._4_4_ != 0 || (uint)uStack_b4 != 0) || local_bc._4_4_ != 0) ||
          (uint)local_bc != 0) {
        lVar5 = FUniqueObjectGuid::ResolveObject(&local_bc);
        FWeakObjectPtr::operator=(&local_c8,lVar5);
        if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b4c84 == 0) {
            DAT_1464b4c84 = 0;
          }
          UNLOCK();
          local_c0 = DAT_1464b4c84;
        }
        lVar5 = FWeakObjectPtr::Get(&local_c8);
      }
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x10);
  lVar6 = FWeakObjectPtr::Get(&local_a8);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b4c84 == 0) {
      DAT_1464b4c84 = 0;
    }
    UNLOCK();
    if ((DAT_1464b4c84 != local_a0) &&
       (((uStack_90 != 0 || uStack_94 != 0) || uStack_98 != 0) || local_9c != 0)) {
      lVar6 = FUniqueObjectGuid::ResolveObject(&local_9c);
      FWeakObjectPtr::operator=(&local_a8,lVar6);
      if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b4c84 == 0) {
          DAT_1464b4c84 = 0;
        }
        UNLOCK();
        local_a0 = DAT_1464b4c84;
      }
      lVar6 = FWeakObjectPtr::Get(&local_a8);
    }
  }
  if (lVar5 != *(longlong *)(lVar6 + 0x10)) {
    return (bool)uVar11;
  }
  bVar2 = (bool)((byte)(param_4 >> 9) & 1);
  if ((param_4 >> 10 & 1) != 0) {
    if ((param_4 >> 9 & 1) != 0) goto LAB_141776ab8;
    lVar5 = FWeakObjectPtr::Get(&local_c8);
    if (lVar5 == 0) {
      LOCK();
      if (DAT_1464b4c84 == 0) {
        DAT_1464b4c84 = 0;
      }
      UNLOCK();
      if (DAT_1464b4c84 != local_c0) {
        if (((uStack_b4._4_4_ != 0 || (uint)uStack_b4 != 0) || local_bc._4_4_ != 0) ||
            (uint)local_bc != 0) {
          lVar5 = FUniqueObjectGuid::ResolveObject(&local_bc);
          FWeakObjectPtr::operator=(&local_c8,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b4c84 == 0) {
              DAT_1464b4c84 = 0;
            }
            UNLOCK();
            local_c0 = DAT_1464b4c84;
          }
          lVar5 = FWeakObjectPtr::Get(&local_c8);
        }
      }
    }
    lVar6 = FWeakObjectPtr::Get(&local_a8);
    if (lVar6 == 0) {
      LOCK();
      if (DAT_1464b4c84 == 0) {
        DAT_1464b4c84 = 0;
      }
      UNLOCK();
      if ((DAT_1464b4c84 != local_a0) &&
         (((uStack_90 != 0 || uStack_94 != 0) || uStack_98 != 0) || local_9c != 0)) {
        lVar6 = FUniqueObjectGuid::ResolveObject(&local_9c);
        FWeakObjectPtr::operator=(&local_a8,lVar6);
        if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b4c84 == 0) {
            DAT_1464b4c84 = 0;
          }
          UNLOCK();
          local_a0 = DAT_1464b4c84;
        }
        lVar6 = FWeakObjectPtr::Get(&local_a8);
      }
    }
    cVar3 = UObjectBaseUtility::IsTemplate(lVar6,0x30);
    cVar4 = UObjectBaseUtility::IsTemplate(lVar5,0x30);
    bVar2 = cVar4 != cVar3;
  }
  if (bVar2 == false) {
    return (bool)uVar11;
  }
LAB_141776ab8:
  lVar5 = FWeakObjectPtr::Get(&local_a8);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b4c84 == 0) {
      DAT_1464b4c84 = 0;
    }
    UNLOCK();
    if ((DAT_1464b4c84 != local_a0) &&
       (((uStack_90 != 0 || uStack_94 != 0) || uStack_98 != 0) || local_9c != 0)) {
      lVar5 = FUniqueObjectGuid::ResolveObject(&local_9c);
      FWeakObjectPtr::operator=(&local_a8,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b4c84 == 0) {
          DAT_1464b4c84 = 0;
        }
        UNLOCK();
        local_a0 = DAT_1464b4c84;
      }
      lVar5 = FWeakObjectPtr::Get(&local_a8);
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x18);
  lVar6 = FWeakObjectPtr::Get(&local_c8);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b4c84 == 0) {
      DAT_1464b4c84 = 0;
    }
    UNLOCK();
    if (DAT_1464b4c84 != local_c0) {
      if (((uStack_b4._4_4_ != 0 || (uint)uStack_b4 != 0) || local_bc._4_4_ != 0) ||
          (uint)local_bc != 0) {
        lVar6 = FUniqueObjectGuid::ResolveObject(&local_bc);
        FWeakObjectPtr::operator=(&local_c8,lVar6);
        if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b4c84 == 0) {
            DAT_1464b4c84 = 0;
          }
          UNLOCK();
          local_c0 = DAT_1464b4c84;
        }
        lVar6 = FWeakObjectPtr::Get(&local_c8);
      }
    }
  }
  if (*(longlong *)(lVar6 + 0x18) == lVar5) {
    lVar5 = FWeakObjectPtr::Get(&local_c8);
    if (lVar5 == 0) {
      LOCK();
      if (DAT_1464b4c84 == 0) {
        DAT_1464b4c84 = 0;
      }
      UNLOCK();
      if (DAT_1464b4c84 != local_c0) {
        if (((uStack_b4._4_4_ != 0 || (uint)uStack_b4 != 0) || local_bc._4_4_ != 0) ||
            (uint)local_bc != 0) {
          lVar5 = FUniqueObjectGuid::ResolveObject(&local_bc);
          FWeakObjectPtr::operator=(&local_c8,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b4c84 == 0) {
              DAT_1464b4c84 = 0;
            }
            UNLOCK();
            local_c0 = DAT_1464b4c84;
          }
          lVar5 = FWeakObjectPtr::Get(&local_c8);
        }
      }
    }
    uVar1 = *(undefined8 *)(lVar5 + 0x18);
    lVar5 = FWeakObjectPtr::Get(&local_c8);
    if (lVar5 == 0) {
      LOCK();
      if (DAT_1464b4c84 == 0) {
        DAT_1464b4c84 = 0;
      }
      UNLOCK();
      if (DAT_1464b4c84 != local_c0) {
        if (((uStack_b4._4_4_ != 0 || (uint)uStack_b4 != 0) || local_bc._4_4_ != 0) ||
            (uint)local_bc != 0) {
          lVar5 = FUniqueObjectGuid::ResolveObject(&local_bc);
          FWeakObjectPtr::operator=(&local_c8,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b4c84 == 0) {
              DAT_1464b4c84 = 0;
            }
            UNLOCK();
            local_c0 = DAT_1464b4c84;
          }
          lVar5 = FWeakObjectPtr::Get(&local_c8);
        }
      }
    }
    lVar5 = UClass::GetDefaultSubobjectByName(*(undefined8 *)(lVar5 + 0x10),uVar1);
    if (lVar5 != 0) {
      lVar5 = FWeakObjectPtr::Get(&local_a8);
      if (lVar5 == 0) {
        LOCK();
        if (DAT_1464b4c84 == 0) {
          DAT_1464b4c84 = 0;
        }
        UNLOCK();
        if ((DAT_1464b4c84 != local_a0) &&
           (((uStack_90 != 0 || uStack_94 != 0) || uStack_98 != 0) || local_9c != 0)) {
          lVar5 = FUniqueObjectGuid::ResolveObject(&local_9c);
          FWeakObjectPtr::operator=(&local_a8,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b4c84 == 0) {
              DAT_1464b4c84 = 0;
            }
            UNLOCK();
            local_a0 = DAT_1464b4c84;
          }
          lVar5 = FWeakObjectPtr::Get(&local_a8);
        }
      }
      lVar6 = FWeakObjectPtr::Get(&local_c8);
      if (lVar6 == 0) {
        LOCK();
        if (DAT_1464b4c84 == 0) {
          DAT_1464b4c84 = 0;
        }
        UNLOCK();
        if (DAT_1464b4c84 != local_c0) {
          if (((uStack_b4._4_4_ != 0 || (uint)uStack_b4 != 0) || local_bc._4_4_ != 0) ||
              (uint)local_bc != 0) {
            lVar6 = FUniqueObjectGuid::ResolveObject(&local_bc);
            FWeakObjectPtr::operator=(&local_c8,lVar6);
            if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b4c84 == 0) {
                DAT_1464b4c84 = 0;
              }
              UNLOCK();
              local_c0 = DAT_1464b4c84;
            }
            lVar6 = FWeakObjectPtr::Get(&local_c8);
          }
        }
      }
      uVar11 = FUN_141769c60(lVar6,lVar5,param_4);
    }
  }
  return uVar11;
}



// FUNCTION 141776db0 FUN_141776db0 body=177 status=ok
// SIG undefined FUN_141776db0(void)

ulonglong FUN_141776db0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  local_70 = *(undefined4 *)(param_1 + 0x80);
  uStack_6c = *(undefined4 *)(param_1 + 0x84);
  uStack_68 = *(undefined4 *)(param_1 + 0x88);
  uStack_64 = *(undefined4 *)(param_1 + 0x8c);
  local_88 = *(undefined8 *)(param_1 + 0x70);
  local_60 = *(undefined4 *)(param_1 + 0x90);
  uStack_5c = *(undefined4 *)(param_1 + 0x94);
  uStack_58 = *(undefined4 *)(param_1 + 0x98);
  uStack_54 = *(undefined4 *)(param_1 + 0x9c);
  local_80 = *(undefined8 *)(param_1 + 0x78);
  local_50 = *(undefined4 *)(param_1 + 0xa0);
  if (param_3 == 0) {
    return (ulonglong)
           CONCAT31((int3)((uint)local_50 >> 8),*(int *)(param_2 + 8) == *(int *)(param_2 + 0x34));
  }
  iVar1 = *(int *)(param_3 + 8) - *(int *)(param_3 + 0x34);
  if (*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34) != iVar1) {
    return (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
  }
  local_78 = param_3;
  local_48 = local_88;
  local_40 = local_80;
  local_38 = param_2;
  local_30 = local_70;
  uStack_2c = uStack_6c;
  uStack_28 = uStack_68;
  uStack_24 = uStack_64;
  local_20 = local_60;
  uStack_1c = uStack_5c;
  uStack_18 = uStack_58;
  uStack_14 = uStack_54;
  local_10 = local_50;
  uVar2 = FUN_14177a380(&local_48,&local_88,param_4);
  return uVar2;
}



// FUNCTION 141776e70 Identical body=201 status=ok
// SIG undefined Identical(void)

ulonglong UMulticastDelegateProperty::Identical
                    (undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  iVar1 = (int)param_2[1];
  uVar4 = (ulonglong)iVar1;
  if (param_3 == (longlong *)0x0) {
    return CONCAT71((int7)(int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  uVar6 = uVar4;
  if (iVar1 == (int)param_3[1]) {
    if (iVar1 != 0) {
      uVar7 = 0;
      uVar8 = uVar7;
      do {
        lVar2 = *param_2;
        lVar3 = *param_3;
        uVar5 = FWeakObjectPtr::Get(lVar2 + uVar8);
        uVar6 = FWeakObjectPtr::Get(lVar3 + uVar8);
        if ((uVar5 != uVar6) ||
           (uVar6 = *(ulonglong *)(lVar3 + uVar8 + 8), *(ulonglong *)(lVar2 + uVar8 + 8) != uVar6))
        goto LAB_141776f10;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + 0x10;
      } while (uVar7 != uVar4);
    }
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  else {
LAB_141776f10:
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  return uVar6;
}



// FUNCTION 141776f40 FUN_141776f40 body=158 status=ok
// SIG undefined FUN_141776f40(void)

ulonglong FUN_141776f40(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  local_58 = *(undefined4 *)(param_1 + 0x78);
  uStack_54 = *(undefined4 *)(param_1 + 0x7c);
  uStack_50 = *(undefined4 *)(param_1 + 0x80);
  uStack_4c = *(undefined4 *)(param_1 + 0x84);
  local_68 = *(undefined8 *)(param_1 + 0x70);
  local_48 = *(undefined8 *)(param_1 + 0x88);
  local_40 = *(undefined4 *)(param_1 + 0x90);
  if (param_3 == 0) {
    return (ulonglong)
           CONCAT31((int3)((uint)local_40 >> 8),*(int *)(param_2 + 8) == *(int *)(param_2 + 0x34));
  }
  iVar1 = *(int *)(param_3 + 8) - *(int *)(param_3 + 0x34);
  if (*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34) != iVar1) {
    return (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
  }
  local_60 = param_3;
  local_38 = local_68;
  local_30 = param_2;
  local_28 = local_58;
  uStack_24 = uStack_54;
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  local_18 = local_48;
  local_10 = local_40;
  uVar2 = FUN_14177a740(&local_38,&local_68,param_4);
  return uVar2;
}



// FUNCTION 141776fe0 Identical body=587 status=ok
// SIG undefined Identical(void)

undefined1
USoftObjectProperty::Identical
          (undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  
  uVar3 = 0xffffffff;
  bVar6 = param_2 == (undefined4 *)0x0;
  uVar5 = 0;
  if (bVar6) {
    local_80 = 0;
    local_94 = 0;
    local_90 = 0;
    puVar4 = &local_88;
    local_78 = 0;
    local_98 = 0xffffffff;
    local_88 = 0;
    local_44 = uVar5;
    local_40 = uVar5;
    local_48 = uVar3;
  }
  else {
    local_c8 = 0;
    uVar7 = *param_2;
    uVar1 = param_2[1];
    uVar8 = param_2[2];
    local_b0 = *(undefined8 *)(param_2 + 4);
    local_c0 = 0;
    local_b8 = 0;
    FString::FString(local_a8,param_2 + 6,param_3,param_4,uVar7,uVar8);
    FSoftObjectPath::operator=(&local_c8,&local_b0);
    puVar4 = &local_c8;
    local_44 = uVar1;
    local_40 = uVar8;
    local_48 = uVar7;
  }
  local_38 = 0;
  local_b0 = *puVar4;
  local_30 = 0;
  local_28 = 0;
  FString::FString(local_a8,puVar4 + 1);
  FSoftObjectPath::operator=(&local_38,&local_b0);
  if (bVar6) {
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  if (!bVar6) {
    if (local_c0 != 0) {
      FMemory::Free();
    }
  }
  bVar6 = param_3 == (undefined4 *)0x0;
  if (bVar6) {
    local_80 = 0;
    local_94 = 0;
    local_90 = 0;
    puVar4 = &local_88;
    local_78 = 0;
    local_98 = 0xffffffff;
    local_88 = 0;
    local_68 = uVar5;
  }
  else {
    local_c8 = 0;
    uVar3 = *param_3;
    uVar5 = param_3[1];
    uVar7 = param_3[2];
    local_b0 = *(undefined8 *)(param_3 + 4);
    local_c0 = 0;
    local_b8 = 0;
    FString::FString(local_a8,param_3 + 6);
    FSoftObjectPath::operator=(&local_c8,&local_b0);
    puVar4 = &local_c8;
    local_68 = uVar7;
  }
  local_60 = 0;
  local_b0 = *puVar4;
  local_58 = 0;
  local_50 = 0;
  local_70 = uVar3;
  local_6c = uVar5;
  FString::FString(local_a8,puVar4 + 1);
  FSoftObjectPath::operator=(&local_60,&local_b0);
  if (bVar6) {
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar6) && (local_c0 != 0)) {
    FMemory::Free();
  }
  uVar2 = FSoftObjectPath::operator==(&local_38,&local_60);
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 141777240 FUN_141777240 body=1541 status=ok
// SIG undefined FUN_141777240(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * FUN_141777240(longlong param_1,wchar_t *param_2,wchar_t *param_3,ulonglong param_4,
                       undefined8 param_5)

{
  undefined2 *puVar1;
  longlong lVar2;
  wchar_t wVar3;
  int iVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  size_t _Count;
  wchar_t *pwVar10;
  undefined1 auStack_10d8 [32];
  wchar_t *local_10b8;
  undefined2 *local_10b0;
  wchar_t *local_10a8;
  wchar_t *local_10a0;
  undefined4 local_1098;
  undefined2 local_1094;
  undefined1 local_1092;
  undefined2 *local_1090;
  undefined8 local_1088;
  longlong local_1080;
  wchar_t *local_1078;
  longlong local_1070;
  undefined4 local_1068;
  undefined2 local_1064;
  undefined1 local_1062;
  longlong local_1060;
  wchar_t local_1058 [1024];
  wchar_t local_858 [1024];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_10d8;
  local_1060 = param_1;
  iVar4 = iswspace(*param_3);
  while (iVar4 != 0) {
    pwVar6 = param_3 + 1;
    param_3 = param_3 + 1;
    iVar4 = iswspace(*pwVar6);
  }
  wVar3 = *param_3;
  while (wVar3 == L'(') {
    pwVar6 = param_3 + 1;
    param_3 = param_3 + 1;
    wVar3 = *pwVar6;
  }
  uVar7 = 0;
  uVar8 = uVar7;
  if (wVar3 != L'\0') {
    pwVar6 = local_1058;
    do {
      if (((ushort)wVar3 < 0x2f) &&
         ((0x520000000000U >> ((ulonglong)(ushort)wVar3 & 0x3f) & 1) != 0)) break;
      param_3 = param_3 + 1;
      *pwVar6 = wVar3;
      uVar8 = (ulonglong)((int)uVar8 + 1);
      pwVar6 = pwVar6 + 1;
      wVar3 = *param_3;
    } while (wVar3 != L'\0');
  }
  _Count = (size_t)(int)uVar8;
  if (0x7ff < _Count * 2) {
LAB_141777840:
                    /* WARNING: Subroutine does not return */
    __report_rangecheckfailure();
  }
  wVar3 = *param_3;
  local_1058[_Count] = L'\0';
  if (wVar3 == L'.') {
    wVar3 = param_3[1];
    param_3 = param_3 + 1;
    uVar8 = uVar7;
    if (wVar3 != L'\0') {
      pwVar6 = local_858;
      do {
        if ((wVar3 == L')') || (wVar3 == L',')) break;
        param_3 = param_3 + 1;
        *pwVar6 = wVar3;
        uVar8 = (ulonglong)((int)uVar8 + 1);
        pwVar6 = pwVar6 + 1;
        wVar3 = *param_3;
      } while (wVar3 != L'\0');
    }
    if (0x7ff < (ulonglong)((longlong)(int)uVar8 * 2)) goto LAB_141777840;
    local_858[(int)uVar8] = L'\0';
LAB_141777418:
    uVar5 = FUN_14171bfe0();
    pwVar6 = (wchar_t *)FUN_141799410(uVar5,0xffffffffffffffff,local_1058);
    if (pwVar6 == (wchar_t *)0x0) {
      while (uVar7 == 0) {
        if (param_4 == 0) {
          uVar5 = UObject::GetPrivateStaticClass();
          uVar7 = FUN_141799410(uVar5,0xffffffffffffffff,local_1058,0);
          if (uVar7 == 0) goto LAB_1417774b3;
          break;
        }
        uVar5 = UObject::GetPrivateStaticClass();
        uVar7 = FUN_141799410(uVar5,param_4,local_1058,0);
        param_4 = *(ulonglong *)(param_4 + 0x20);
      }
      pwVar6 = *(wchar_t **)(uVar7 + 0x10);
    }
    else {
      uVar7 = *(ulonglong *)(pwVar6 + 0x7c);
      if (uVar7 == 0) {
        (**(code **)(*(longlong *)pwVar6 + 0x368))(pwVar6);
        uVar7 = *(ulonglong *)(pwVar6 + 0x7c);
      }
    }
  }
  else {
    if (param_4 == 0) {
      FOutputDevice::LogfImpl
                (param_5,3,L"Cannot import unqualified delegate name; no object to search");
      return (wchar_t *)0x0;
    }
    if (((*(uint *)(param_4 + 8) >> 4 & 1) == 0) &&
       (uVar7 = *(ulonglong *)(param_4 + 0x20), (*(uint *)(uVar7 + 8) >> 4 & 1) != 0)) {
      pwVar6 = *(wchar_t **)(uVar7 + 0x10);
    }
    else {
      pwVar6 = *(wchar_t **)(param_4 + 0x10);
      uVar7 = param_4;
    }
    wcsncpy(local_858,local_1058,_Count);
    local_858[_Count] = L'\0';
    if (pwVar6 == (wchar_t *)0x0) goto LAB_141777418;
  }
LAB_1417774b3:
  FName::FName(&local_1090,local_858,0);
  puVar1 = local_1090;
  if (((int)local_1090 == 0) && ((int)((ulonglong)local_1090 >> 0x20) == 0)) {
    pwVar10 = (wchar_t *)0x0;
LAB_1417774df:
    if (pwVar6 == (wchar_t *)0x0) {
      local_1090 = (undefined2 *)0x0;
      local_1088 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1090,0);
      FGenericPlatformString::Memcpy(local_1090,&DAT_143f3edc8,10);
    }
    else {
      local_1080 = *(longlong *)(pwVar6 + 0xc);
      FName::ToString(&local_1080,&local_1090);
    }
    local_10b8 = local_1058;
    local_10b0 = &DAT_143f3eda8;
    if ((int)local_1088 != 0) {
      local_10b0 = local_1090;
    }
    FOutputDevice::LogfImpl
              (param_5,3,L"Unable to find function %s in object %s for delegate (found class: %s)",
               local_858);
    if (local_1090 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (pwVar6 == (wchar_t *)0x0) {
      local_10a0 = (wchar_t *)0x0;
    }
    else {
      local_10a0 = *(wchar_t **)(pwVar6 + 0x1c);
    }
    local_1098 = 0xffffffff;
    local_1094 = 0x101;
    local_1092 = 0;
    local_10a8 = pwVar6;
    FUN_140cbbd90();
    while (local_10a0 != (wchar_t *)0x0) {
      pwVar10 = local_10a0;
      if (*(undefined2 **)(local_10a0 + 0xc) == puVar1) goto LAB_14177758b;
      local_10a0 = *(wchar_t **)(local_10a0 + 0x14);
      FUN_140cbbd90();
    }
    pwVar10 = (wchar_t *)0x0;
LAB_14177758b:
    iVar4 = 0;
    if (pwVar10 == (wchar_t *)0x0) goto LAB_1417774df;
    if ((char)pwVar10[0x46] == (char)param_2[0x46]) {
      local_10a0 = *(wchar_t **)(pwVar10 + 0x1c);
      local_1098 = 0xffffffff;
      local_1094 = 0x101;
      local_1092 = 0;
      local_10a8 = pwVar10;
      FUN_140472e10(&local_10a8);
      local_1070 = *(longlong *)(param_2 + 0x1c);
      local_1068 = 0xffffffff;
      local_1064 = 0x101;
      local_1062 = 0;
      local_1078 = param_2;
      FUN_140472e10(&local_1078);
      if ((char)param_2[0x46] != '\0') {
        do {
          lVar9 = local_1070;
          if ((*(longlong *)(local_10a0 + 8) != *(longlong *)(local_1070 + 0x10)) ||
             (((*(uint *)(local_1070 + 0x38) ^ *(uint *)(local_10a0 + 0x1c)) >> 8 & 1) != 0)) {
            local_1080 = *(longlong *)(param_2 + 0xc);
            FName::ToString(&local_1080,&local_10a8);
            local_1090 = *(undefined2 **)(pwVar10 + 0xc);
            local_10b8 = L"";
            if ((int)local_10a0 != 0) {
              local_10b8 = local_10a8;
            }
            FName::ToString(&local_1090,&local_1078);
            pwVar6 = L"";
            if ((int)local_1070 != 0) {
              pwVar6 = local_1078;
            }
            FOutputDevice::LogfImpl
                      (param_5,3,
                       L"Function %s does not match param types with delegate signature %s",pwVar6);
            if (local_1078 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            if (local_10a8 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            goto LAB_141777703;
          }
          local_10a0 = *(wchar_t **)(local_10a0 + 0x14);
          FUN_140472e10(&local_10a8);
          local_1070 = *(longlong *)(lVar9 + 0x28);
          FUN_140472e10(&local_1078);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)(byte)param_2[0x46]);
      }
      lVar9 = *(longlong *)(pwVar10 + 0xc);
      goto LAB_141777812;
    }
    local_1080 = *(longlong *)(param_2 + 0xc);
    FName::ToString(&local_1080,&local_1078);
    local_1090 = *(undefined2 **)(pwVar10 + 0xc);
    local_10b8 = L"";
    if ((int)local_1070 != 0) {
      local_10b8 = local_1078;
    }
    FName::ToString(&local_1090,&local_10a8);
    pwVar6 = L"";
    if ((int)local_10a0 != 0) {
      pwVar6 = local_10a8;
    }
    FOutputDevice::LogfImpl
              (param_5,3,L"Function %s does not match number of params with delegate signature %s",
               pwVar6);
    if (local_10a8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_1078 == (wchar_t *)0x0) {
LAB_141777703:
      pwVar10 = (wchar_t *)0x0;
    }
    else {
      FMemory::Free();
      pwVar10 = (wchar_t *)0x0;
    }
  }
  local_1090 = (undefined2 *)0x0;
  lVar9 = 0;
LAB_141777812:
  lVar2 = local_1060;
  uVar8 = 0;
  if (pwVar10 != (wchar_t *)0x0) {
    uVar8 = uVar7;
  }
  FWeakObjectPtr::operator=(local_1060,uVar8);
  *(longlong *)(lVar2 + 8) = lVar9;
  if ((pwVar10 == (wchar_t *)0x0) || (uVar7 == 0)) {
    param_3 = (wchar_t *)0x0;
  }
  return param_3;
}



// FUNCTION 141777850 FUN_141777850 body=238 status=ok
// SIG undefined FUN_141777850(void)

wint_t * FUN_141777850(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  wint_t *pwVar1;
  char cVar2;
  int iVar3;
  wint_t *pwVar4;
  undefined4 *puVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  cVar2 = FUN_141766f20(param_1,param_4,param_6);
  if (cVar2 != '\0') {
    FWeakObjectPtr::operator=(&local_18,0);
    local_10 = 0;
    pwVar4 = (wint_t *)
             FUN_141777240(&local_18,*(undefined8 *)(param_1 + 0x70),param_2,param_5,param_6);
    if (pwVar4 != (wint_t *)0x0) {
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_3);
      iVar3 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar3);
      }
      puVar5 = (undefined4 *)((longlong)iVar3 * 0x10 + *param_3);
      *puVar5 = local_18;
      puVar5[1] = local_14;
      *(undefined8 *)(puVar5 + 2) = local_10;
      iVar3 = iswspace(*pwVar4);
      while (iVar3 != 0) {
        pwVar1 = pwVar4 + 1;
        pwVar4 = pwVar4 + 1;
        iVar3 = iswspace(*pwVar1);
      }
      return pwVar4;
    }
  }
  return (wint_t *)0x0;
}



// FUNCTION 141777940 FUN_141777940 body=602 status=ok
// SIG undefined FUN_141777940(void)

longlong FUN_141777940(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      longlong param_5,undefined8 param_6)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong local_48;
  undefined2 *local_40;
  int local_38;
  longlong local_30 [3];
  
  lVar3 = FUN_1417787d0();
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = (**(code **)(*param_1 + 0x378))(param_1,param_3);
  if (lVar4 == 0) {
    return lVar3;
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
    return lVar3;
  }
  plVar9 = param_1;
  if (param_5 != 0) {
    plVar9 = *(longlong **)(param_5 + 0x10);
  }
  lVar6 = FUN_1417a53c0(plVar9);
  lVar5 = param_1[0xf];
  if (lVar5 == 0) {
LAB_141777a53:
    bVar1 = false;
  }
  else {
    lVar7 = ULinkerPlaceholderClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (cVar2 = FUN_14175bc20(lVar5 + 0x200), cVar2 != '\0')) goto LAB_141777a53;
    bVar1 = true;
  }
  if (bVar1) {
LAB_141777abf:
    bVar1 = true;
  }
  else {
    if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x290) & 0x100000) != 0)) {
      lVar5 = ULinkerPlaceholderClass::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (cVar2 = FUN_14175bc20(lVar4 + 0x200), cVar2 == '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) goto LAB_141777abf;
    }
    bVar1 = false;
  }
  lVar5 = lVar4;
  do {
    if (lVar5 == param_1[0xf]) {
      return lVar3;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  } while (lVar5 != 0);
  if (!bVar1) {
    local_48 = param_1[3];
    FName::ToString(&local_48,&local_40);
    puVar10 = &DAT_143f3eda8;
    puVar11 = &DAT_143f3eda8;
    if (local_38 != 0) {
      puVar11 = local_40;
    }
    puVar8 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar4,local_30,0);
    if (*(int *)(puVar8 + 1) != 0) {
      puVar10 = (undefined2 *)*puVar8;
    }
    FOutputDevice::LogfImpl
              (param_6,L"Invalid object \'%s\' specified for property \'%s\'",puVar10,puVar11);
    if (local_30[0] != 0) {
      FMemory::Free();
    }
    if (local_40 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    (**(code **)(*param_1 + 0x380))(param_1,param_3,0);
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 141777bd0 FUN_141777bd0 body=373 status=ok
// SIG undefined FUN_141777bd0(void)

undefined8
FUN_141777bd0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong local_res10;
  undefined8 local_res18 [2];
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  longlong local_30 [3];
  
  local_res10 = *param_3;
  local_res18[0] = param_2;
  uVar2 = UObject::GetPrivateStaticClass();
  cVar1 = FUN_14175d640(param_1,param_5,uVar2,param_4,local_res18,&local_res10);
  if (cVar1 == '\0') {
    *param_3 = local_res10;
    if (local_res10 != 0) {
      return 0;
    }
    param_3[1] = 0;
    return 0;
  }
  if (local_res10 == 0) {
    local_res10 = 0;
    param_3[1] = 0;
  }
  else {
    lVar3 = UObjectBaseUtility::GetInterfaceAddress(local_res10,*(undefined8 *)(param_1 + 0x70));
    if (lVar3 == 0) {
      local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
      FName::ToString(&local_48,&local_40);
      puVar5 = &DAT_143f3eda8;
      puVar6 = &DAT_143f3eda8;
      if (local_38 != 0) {
        puVar6 = local_40;
      }
      puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_30,0);
      if (*(int *)(puVar4 + 1) != 0) {
        puVar5 = (undefined2 *)*puVar4;
      }
      FOutputDevice::LogfImpl
                (param_6,
                 L"%s: specified object doesn\'t implement the required interface class \'%s\': %s",
                 puVar5,puVar6,param_2);
      if (local_30[0] != 0) {
        FMemory::Free();
      }
      if (local_40 == (undefined2 *)0x0) {
        return 0;
      }
      FMemory::Free();
      return 0;
    }
    param_3[1] = lVar3;
  }
  *param_3 = local_res10;
  return local_res18[0];
}



// FUNCTION 141777d50 FUN_141777d50 body=1477 status=ok
// SIG undefined FUN_141777d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wint_t * FUN_141777d50(longlong param_1,short *param_2,longlong *param_3,undefined8 *param_4,
                      undefined1 *param_5,undefined8 param_6)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  wint_t *pwVar5;
  wint_t *pwVar6;
  longlong *plVar7;
  void *pvVar8;
  wint_t *pwVar9;
  void *pvVar10;
  wint_t *pwVar11;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  void *local_f0;
  undefined8 *local_e8 [2];
  undefined1 *local_d8;
  undefined8 **ppuStack_d0;
  void **local_c8;
  undefined1 *puStack_c0;
  undefined8 *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_70;
  void **local_68;
  undefined1 *puStack_60;
  undefined8 *local_58;
  undefined1 local_50;
  ulonglong local_48;
  wint_t *pwVar12;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  pwVar12 = (wint_t *)0x0;
  pwVar11 = (wint_t *)0x0;
  local_90 = *(undefined4 *)(param_1 + 0x80);
  uStack_8c = *(undefined4 *)(param_1 + 0x84);
  uStack_88 = *(undefined4 *)(param_1 + 0x88);
  uStack_84 = *(undefined4 *)(param_1 + 0x8c);
  local_80 = *(undefined4 *)(param_1 + 0x90);
  uStack_7c = *(undefined4 *)(param_1 + 0x94);
  uStack_78 = *(undefined4 *)(param_1 + 0x98);
  uStack_74 = *(undefined4 *)(param_1 + 0x9c);
  local_d8 = param_5;
  local_a8 = *(undefined8 *)(param_1 + 0x70);
  local_a0 = *(undefined8 *)(param_1 + 0x78);
  local_70 = *(int *)(param_1 + 0xa0);
  iVar3 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  local_e8[0] = param_4;
  local_98 = param_3;
  if (iVar3 != 0) {
    FUN_14176f320(&local_a8,0,iVar3);
    plVar1 = local_98;
    *(undefined4 *)(local_98 + 1) = 0;
    if (*(int *)((longlong)local_98 + 0xc) != 0) {
      FScriptArray::ResizeTo(local_98,0,local_70);
    }
    *(undefined4 *)(plVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)plVar1 + 0x34) = 0;
    *(undefined4 *)(plVar1 + 5) = 0;
    if (*(int *)((longlong)plVar1 + 0x2c) != 0) {
      *(undefined4 *)((longlong)plVar1 + 0x2c) = 0;
      FScriptBitArray::Realloc(plVar1 + 2,0);
    }
    plVar7 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar7 = plVar1 + 7;
    }
    pwVar6 = (wint_t *)((longlong)(int)plVar1[9] & 0x3fffffffffffffff);
    if ((longlong *)((longlong)plVar7 + (longlong)(int)plVar1[9] * 4) < plVar7) {
      pwVar6 = pwVar12;
    }
    if (pwVar6 != (wint_t *)0x0) {
      for (; pwVar6 != (wint_t *)0x0; pwVar6 = (wint_t *)((longlong)pwVar6 + -1)) {
        *(undefined4 *)plVar7 = 0xffffffff;
        plVar7 = (longlong *)((longlong)plVar7 + 4);
      }
    }
  }
  pwVar6 = (wint_t *)(param_2 + 1);
  if (*param_2 == 0x28) {
    iVar3 = iswspace(*pwVar6);
    while (iVar3 != 0) {
      pwVar5 = pwVar6 + 1;
      pwVar6 = pwVar6 + 1;
      iVar3 = iswspace(*pwVar5);
    }
    if (*pwVar6 == 0x29) {
      pwVar5 = pwVar6 + 1;
    }
    else {
      local_f0 = (void *)FMemory::Malloc((longlong)
                                         (*(int *)(*(longlong *)(param_1 + 0x78) + 0x34) +
                                         *(int *)(param_1 + 0x84)));
      local_c8 = &local_f0;
      local_f8[0] = 0;
      puStack_c0 = local_f8;
      local_b8 = &local_a8;
      local_50 = 1;
      local_58 = local_b8;
      local_68 = local_c8;
      puStack_60 = puStack_c0;
      while( true ) {
        plVar1 = *(longlong **)(param_1 + 0x70);
        if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
          (**(code **)(*plVar1 + 0x330))();
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    (local_f0,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
        }
        plVar1 = *(longlong **)(param_1 + 0x78);
        pvVar10 = (void *)((longlong)*(int *)(param_1 + 0x84) + (longlong)local_f0);
        if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
          (**(code **)(*plVar1 + 0x330))(plVar1,pvVar10);
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    (pvVar10,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
        }
        pwVar9 = pwVar6 + 1;
        pwVar5 = pwVar12;
        if (*pwVar6 != 0x28) goto LAB_14177829b;
        iVar3 = iswspace(*pwVar9);
        pvVar10 = local_f0;
        while (local_f0 = pvVar10, iVar3 != 0) {
          pwVar6 = pwVar9 + 1;
          pwVar9 = pwVar9 + 1;
          iVar3 = iswspace(*pwVar6);
          pvVar10 = local_f0;
        }
        plVar1 = *(longlong **)(param_1 + 0x70);
        uVar13 = (ulonglong)param_4 | 2;
        cVar2 = FUN_141766f20(plVar1,uVar13,param_6);
        pwVar6 = pwVar12;
        if (cVar2 != '\0') {
          local_100 = param_6;
          local_108 = local_d8;
          pwVar6 = (wint_t *)(**(code **)(*plVar1 + 0x2e0))(plVar1,pwVar9,pvVar10,uVar13);
        }
        if (pwVar6 == (wint_t *)0x0) goto LAB_14177829b;
        iVar3 = FUN_141771a10(&local_a8,local_f0,0);
        iVar4 = iswspace(*pwVar6);
        while (iVar4 != 0) {
          pwVar9 = pwVar6 + 1;
          pwVar6 = pwVar6 + 1;
          iVar4 = iswspace(*pwVar9);
        }
        pwVar9 = pwVar6 + 1;
        if (*pwVar6 != 0x2c) goto LAB_14177829b;
        iVar4 = iswspace(*pwVar9);
        while (iVar4 != 0) {
          pwVar6 = pwVar9 + 1;
          pwVar9 = pwVar9 + 1;
          iVar4 = iswspace(*pwVar6);
        }
        local_100 = param_6;
        local_108 = local_d8;
        pwVar6 = (wint_t *)
                 FUN_141759d00(*(undefined8 *)(param_1 + 0x78),pwVar9,
                               (longlong)*(int *)(param_1 + 0x84) + (longlong)local_f0,uVar13);
        pwVar5 = pwVar11;
        if (pwVar6 == (wint_t *)0x0) goto LAB_14177829b;
        iVar4 = iswspace(*pwVar6);
        while (iVar4 != 0) {
          pwVar9 = pwVar6 + 1;
          pwVar6 = pwVar6 + 1;
          iVar4 = iswspace(*pwVar9);
        }
        pwVar9 = pwVar6 + 1;
        if (*pwVar6 != 0x29) goto LAB_14177829b;
        if (iVar3 == -1) {
          iVar3 = FUN_1417698f0(&local_a8);
          plVar1 = *(longlong **)(param_1 + 0x70);
          lVar14 = (longlong)(local_70 * iVar3) + *local_98;
          pvVar8 = (void *)((longlong)local_f0 + (longlong)*(int *)((longlong)plVar1 + 0x44));
          pvVar10 = (void *)(*(int *)((longlong)plVar1 + 0x44) + lVar14);
          if (pvVar10 != pvVar8) {
            if ((*(uint *)(plVar1 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar1 + 0x2e8))(plVar1,pvVar10,pvVar8,(int)plVar1[6]);
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (pvVar10,pvVar8,
                         (longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
            }
          }
          plVar1 = *(longlong **)(param_1 + 0x78);
          pvVar8 = (void *)((longlong)local_f0 + (longlong)*(int *)((longlong)plVar1 + 0x44));
          pvVar10 = (void *)(*(int *)((longlong)plVar1 + 0x44) + lVar14);
          if (pvVar10 != pvVar8) {
            if ((*(uint *)(plVar1 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar1 + 0x2e8))(plVar1,pvVar10,pvVar8,(int)plVar1[6]);
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (pvVar10,pvVar8,
                         (longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
            }
          }
        }
        iVar3 = iswspace(*pwVar9);
        while (iVar3 != 0) {
          pwVar6 = pwVar9 + 1;
          pwVar9 = pwVar9 + 1;
          iVar3 = iswspace(*pwVar6);
        }
        pwVar6 = pwVar9 + 1;
        if (*pwVar9 == 0x29) break;
        if (*pwVar9 != 0x2c) goto LAB_14177829b;
        iVar3 = iswspace(*pwVar6);
        while (iVar3 != 0) {
          pwVar5 = pwVar6 + 1;
          pwVar6 = pwVar6 + 1;
          iVar3 = iswspace(*pwVar5);
        }
        if ((~(byte)((ulonglong)(*(longlong **)(param_1 + 0x78))[7] >> 0x24) & 1) != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x78) + 0x328))();
        }
        param_4 = local_e8[0];
        if ((~(byte)((ulonglong)(*(longlong **)(param_1 + 0x70))[7] >> 0x24) & 1) != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x328))();
          param_4 = local_e8[0];
        }
      }
      local_e8[0] = &local_a8;
      ppuStack_d0 = local_e8;
      local_d8 = &LAB_141769f80;
      FScriptSet::Rehash(local_98,&uStack_88,&local_d8);
      local_f8[0] = 1;
      pwVar5 = pwVar6;
LAB_14177829b:
      plVar1 = *(longlong **)(param_1 + 0x78);
      if ((~(byte)((ulonglong)plVar1[7] >> 0x24) & 1) != 0) {
        (**(code **)(*plVar1 + 0x328))
                  (plVar1,(longlong)*(int *)(param_1 + 0x84) + (longlong)local_f0);
      }
      plVar1 = *(longlong **)(param_1 + 0x70);
      if ((~(byte)((ulonglong)plVar1[7] >> 0x24) & 1) != 0) {
        (**(code **)(*plVar1 + 0x328))(plVar1,local_f0);
      }
      ScopeExitSupport::TScopeGuard<<lambda_cc398b2de9d740b7c7d364e9d851487c>_>::
      ~TScopeGuard<<lambda_cc398b2de9d740b7c7d364e9d851487c>_>(&local_68);
    }
  }
  else {
    pwVar5 = (wint_t *)0x0;
  }
  return pwVar5;
}



// FUNCTION 141778320 ImportText_Internal body=476 status=ok
// SIG undefined ImportText_Internal(void)

wint_t * UMulticastDelegateProperty::ImportText_Internal
                   (longlong param_1,wint_t *param_2,longlong *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  wint_t *pwVar4;
  int *piVar5;
  int *piVar6;
  wint_t *pwVar7;
  int local_38;
  int local_34;
  longlong local_30;
  
  if (*param_2 == 0x28) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
    }
    iVar3 = iswspace(param_2[1]);
    while (pwVar7 = param_2 + 1, iVar3 != 0) {
      iVar3 = iswspace(param_2[2]);
      param_2 = pwVar7;
    }
    if (*pwVar7 == 0x29) {
      return pwVar7;
    }
    do {
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      pwVar4 = (wint_t *)
               FUN_141777240(&local_38,*(undefined8 *)(param_1 + 0x70),pwVar7,param_5,param_6);
      if (pwVar4 == (wint_t *)0x0) {
        return (wint_t *)0x0;
      }
      piVar5 = (int *)*param_3;
      lVar1 = param_3[1];
      for (piVar6 = piVar5; piVar6 != piVar5 + (longlong)(int)lVar1 * 4; piVar6 = piVar6 + 4) {
        if ((((*piVar6 == local_38) && (piVar6[1] == local_34)) ||
            ((cVar2 = FWeakObjectPtr::IsValid(piVar6), cVar2 == '\0' &&
             (cVar2 = FWeakObjectPtr::IsValid(&local_38), cVar2 == '\0')))) &&
           (*(longlong *)(piVar6 + 2) == local_30)) {
          if ((int)((longlong)piVar6 - (longlong)piVar5 >> 4) != -1) goto LAB_141778488;
          break;
        }
      }
      lVar1 = param_3[1];
      iVar3 = (int)lVar1 + 1;
      *(int *)(param_3 + 1) = iVar3;
      if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3);
      }
      piVar5 = (int *)((longlong)(int)lVar1 * 0x10 + *param_3);
      *piVar5 = local_38;
      piVar5[1] = local_34;
      *(longlong *)(piVar5 + 2) = local_30;
LAB_141778488:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_3);
      iVar3 = iswspace(*pwVar4);
      while (iVar3 != 0) {
        pwVar7 = pwVar4 + 1;
        pwVar4 = pwVar4 + 1;
        iVar3 = iswspace(*pwVar7);
      }
      pwVar7 = pwVar4 + 1;
    } while (*pwVar4 == 0x2c);
    if (*pwVar4 == 0x29) {
      if (0 < (int)param_3[1]) {
        return pwVar7;
      }
      return (wint_t *)0x0;
    }
  }
  return (wint_t *)0x0;
}



// FUNCTION 141778500 FUN_141778500 body=214 status=ok
// SIG undefined FUN_141778500(void)

longlong FUN_141778500(undefined8 param_1,longlong param_2,undefined8 *param_3,byte param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 local_res20 [8];
  undefined2 *local_18;
  undefined8 local_10;
  
  if ((param_4 & 2) == 0) {
    puVar1 = (undefined8 *)FName::FName(local_res20,param_2,1);
    lVar2 = -1;
    *param_3 = *puVar1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(short *)(param_2 + lVar2 * 2) != 0);
    return param_2 + (longlong)(int)lVar2 * 2;
  }
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  lVar2 = UPropertyHelpers::ReadToken(param_2,&local_18,1);
  if (lVar2 == 0) {
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    return 0;
  }
  puVar3 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar3 = local_18;
  }
  puVar1 = (undefined8 *)FName::FName(local_res20,puVar3,1);
  *param_3 = *puVar1;
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return lVar2;
}



// FUNCTION 1417785e0 FUN_1417785e0 body=477 status=ok
// SIG undefined FUN_1417785e0(void)

wchar_t * FUN_1417785e0(longlong *param_1,wchar_t *param_2,undefined8 param_3)

{
  wchar_t wVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  wchar_t *local_res10;
  
  if (param_2 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  local_res10 = param_2;
  cVar2 = (**(code **)(*param_1 + 0x378))();
  if (cVar2 == '\0') {
    while (((ushort)*local_res10 < 0x3a &&
           ((0x3ff680000000000U >> ((ulonglong)(ushort)*local_res10 & 0x3f) & 1) != 0))) {
      local_res10 = local_res10 + 1;
    }
    if ((*local_res10 + L'ﾺ' & 0xffdfU) == 0) {
      local_res10 = local_res10 + 1;
    }
    goto LAB_14177879a;
  }
  iVar3 = iswalpha(*local_res10);
  if (iVar3 != 0) {
    lVar4 = UEnum::ParseEnum(&local_res10);
    if (lVar4 == -1) {
      return (wchar_t *)0x0;
    }
    (**(code **)(*param_1 + 0x388))(param_1,param_3,lVar4);
    return local_res10;
  }
  iVar3 = _wcsnicmp(param_2,L"0x",2);
  if (iVar3 == 0) {
    for (local_res10 = local_res10 + 2; local_res10 != (wchar_t *)0x0; local_res10 = local_res10 + 1
        ) {
      wVar1 = *local_res10;
      uVar5 = (uint)(ushort)wVar1;
      if ((ushort)(wVar1 + L'￐') < 10) {
        iVar3 = uVar5 - 0x30;
LAB_1417786d4:
        if (iVar3 == 0) goto LAB_1417786d8;
      }
      else {
        if ((ushort)(wVar1 + L'ﾟ') < 6) {
          iVar3 = uVar5 - 0x57;
          goto LAB_1417786d4;
        }
        if ((ushort)(wVar1 + L'﾿') < 6) {
          iVar3 = uVar5 - 0x37;
          goto LAB_1417786d4;
        }
LAB_1417786d8:
        if (wVar1 != L'0') break;
      }
    }
  }
  else {
    for (; local_res10 != (wchar_t *)0x0; local_res10 = local_res10 + 1) {
      if ((*local_res10 + L'ￕ' & 0xfffdU) != 0) goto LAB_141778720;
    }
  }
  goto LAB_14177873d;
  while (local_res10 = local_res10 + 1, local_res10 != (wchar_t *)0x0) {
LAB_141778720:
    iVar3 = iswdigit(*local_res10);
    if (iVar3 == 0) break;
  }
LAB_14177873d:
  if (param_2 == local_res10) {
    return (wchar_t *)0x0;
  }
LAB_14177879a:
  (**(code **)(*param_1 + 0x3a0))(param_1,param_3,param_2);
  return local_res10;
}



// FUNCTION 1417787d0 FUN_1417787d0 body=958 status=ok
// SIG undefined FUN_1417787d0(void)

longlong FUN_1417787d0(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                      longlong param_5,undefined8 param_6)

{
  wint_t *pwVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  wint_t *pwVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong local_res20;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar16;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar18;
  undefined8 uVar17;
  longlong local_78 [2];
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  
  local_res20 = param_4;
  if ((((param_4 & 0x400000000000000) != 0) && (param_1[0xe] != 0)) &&
     ((*(uint *)(param_1[0xe] + 0xb4) >> 0xc & 1) != 0)) {
    uVar12 = 0;
    lVar5 = (**(code **)(*param_1 + 0x378))(param_1,param_3);
    if (lVar5 == 0) {
      uVar14 = uVar12;
      if (param_5 != 0) {
        uVar15 = *(uint *)(param_5 + 8) & 0x69;
        uVar12 = (ulonglong)uVar15;
        cVar3 = UObjectBaseUtility::IsTemplate(param_5,0x30);
        uVar14 = 0;
        if (cVar3 != '\0') {
          uVar12 = (ulonglong)(uVar15 | 0x40020);
        }
      }
    }
    else {
      uVar12 = (ulonglong)*(uint *)(lVar5 + 8);
      uVar14 = *(ulonglong *)(lVar5 + 0x10);
    }
    local_48 = (undefined2 *)0x0;
    local_40 = 0;
    pwVar6 = (wint_t *)UPropertyHelpers::ReadToken(param_2,&local_48,1);
    puVar13 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar13 = local_48;
    }
    uVar7 = FUN_14171bfe0();
    uVar8 = FUN_141799410(uVar7,0xffffffffffffffff,puVar13);
    if ((uVar8 != 0) && (uVar8 != uVar14)) {
      iVar4 = iswspace(*pwVar6);
      uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
      uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
      while (iVar4 != 0) {
        pwVar1 = pwVar6 + 1;
        pwVar6 = pwVar6 + 1;
        iVar4 = iswspace(*pwVar1);
        uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
        uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
      }
      local_58 = (undefined2 *)0x0;
      local_50 = 0;
      iVar4 = 0;
      if (*pwVar6 == 0x27) {
        UPropertyHelpers::ReadToken(pwVar6 + 1,&local_58,1);
        iVar4 = (int)local_50;
      }
      puVar13 = local_58;
      local_68 = (undefined2 *)0x0;
      local_60 = iVar4;
      if (iVar4 == 0) {
        local_5c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar4,0);
        _guard_xfg_dispatch_icall_nop(local_68,puVar13,(longlong)iVar4 * 2);
      }
      local_78[0] = 0;
      local_78[1] = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
      lVar5 = local_78[0];
      FGenericPlatformString::Memcpy(local_78[0],&DAT_144d1de84,4);
      uVar17 = CONCAT44(uVar18,1);
      uVar7 = CONCAT44(uVar16,1);
      FUN_1404e14f0(&local_68,local_78,0,&local_68,uVar7,uVar17);
      uVar18 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar16 = (undefined4)((ulonglong)uVar17 >> 0x20);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
      local_78[0] = 0;
      local_78[1] = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
      lVar5 = local_78[0];
      FGenericPlatformString::Memcpy(local_78[0],&DAT_144d1dea4,4);
      uVar14 = CONCAT44(uVar18,1);
      FUN_1404e14f0(&local_68,local_78,0,&local_68,uVar14,CONCAT44(uVar16,1));
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
      puVar13 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar13 = local_58;
      }
      lVar5 = FUN_141799780(param_1[0xe],0,puVar13,0);
      if (lVar5 == 0) {
        puVar13 = &DAT_143f3eda8;
        if (local_60 != 0) {
          puVar13 = local_68;
        }
        plVar9 = (longlong *)FName::FName(local_78,puVar13,1);
        lVar5 = *plVar9;
        if (lVar5 == 0) {
          FUN_1417846f0(param_5,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        FUN_1417985e0(uVar8,param_5,lVar5,uVar12,uVar14 & 0xffffffff00000000,0,0,0,0);
      }
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  lVar5 = FUN_14175a8a0(param_1,param_2,param_3,local_res20,param_5,param_6);
  if (lVar5 != 0) {
    (**(code **)(*param_1 + 0x390))(param_1,param_3);
    lVar10 = (**(code **)(*param_1 + 0x378))(param_1,param_3);
    if (lVar10 != 0) {
      lVar11 = ULinkerPlaceholderClass::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_14174d490(&local_res20,param_5);
        FUN_14174fcc0(lVar10 + 0x200,param_1,param_3);
        FUN_14174da50(&local_res20);
      }
    }
  }
  return lVar5;
}



// FUNCTION 141778b90 FUN_141778b90 body=1210 status=ok
// SIG undefined FUN_141778b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wint_t * FUN_141778b90(longlong **param_1,short *param_2,longlong *param_3,ulonglong param_4,
                      undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  longlong **pplVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  wint_t *pwVar6;
  wint_t *pwVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  wint_t *pwVar11;
  longlong *plVar12;
  void *_Dst;
  void *_Src;
  int iVar13;
  uint uVar14;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  longlong **local_e0;
  ulonglong local_d8;
  longlong **local_d0;
  undefined8 local_c8;
  longlong ***ppplStack_c0;
  undefined1 *local_b8;
  longlong **pplStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong ***ppplStack_60;
  undefined1 *local_58;
  longlong **pplStack_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_88 = *(undefined4 *)(param_1 + 0xf);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x7c);
  uStack_80 = *(undefined4 *)(param_1 + 0x10);
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x84);
  plVar10 = param_1[0xe];
  pwVar6 = (wint_t *)0x0;
  local_78 = param_1[0x11];
  local_a0 = param_5;
  local_a8 = param_6;
  local_70 = *(int *)(param_1 + 0x12);
  iVar13 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  local_d8 = param_4;
  local_d0 = param_1;
  local_98 = plVar10;
  local_90 = param_3;
  if (iVar13 != 0) {
    if ((plVar10[7] & 0x1040000000U) == 0) {
      uVar14 = 1;
      local_c8 = (longlong **)((ulonglong)param_1[0x10] >> 0x20);
      pwVar7 = pwVar6;
      do {
        iVar9 = (int)pwVar7;
        if ((-1 < iVar9) && (iVar9 < (int)param_3[5])) {
          plVar8 = (longlong *)param_3[4];
          if ((longlong *)param_3[4] == (longlong *)0x0) {
            plVar8 = param_3 + 2;
          }
          iVar4 = iVar9;
          if (iVar9 < 0) {
            iVar4 = iVar9 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar8 + (longlong)(iVar4 >> 5) * 4) & uVar14) != 0) {
            if ((~(byte)((ulonglong)plVar10[7] >> 0x24) & 1) != 0) {
              (**(code **)(*plVar10 + 0x328))(plVar10);
              plVar10 = local_98;
              param_3 = local_90;
            }
            iVar13 = iVar13 + -1;
          }
        }
        uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
        pwVar7 = (wint_t *)(ulonglong)(iVar9 + 1);
      } while (iVar13 != 0);
    }
    param_1 = local_d0;
    param_4 = local_d8;
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 0) {
      FScriptArray::ResizeTo(param_3,0,local_70);
    }
    *(undefined4 *)(param_3 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_3 + 0x34) = 0;
    *(undefined4 *)(param_3 + 5) = 0;
    if (*(int *)((longlong)param_3 + 0x2c) != 0) {
      *(undefined4 *)((longlong)param_3 + 0x2c) = 0;
      FScriptBitArray::Realloc();
    }
    plVar10 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar10 = param_3 + 7;
    }
    pwVar7 = (wint_t *)((longlong)(int)param_3[9] & 0x3fffffffffffffff);
    if ((longlong *)((longlong)(int)param_3[9] * 4 + (longlong)plVar10) < plVar10) {
      pwVar7 = pwVar6;
    }
    if (pwVar7 != (wint_t *)0x0) {
      for (; pwVar7 != (wint_t *)0x0; pwVar7 = (wint_t *)((longlong)pwVar7 + -1)) {
        *(undefined4 *)plVar10 = 0xffffffff;
        plVar10 = (longlong *)((longlong)plVar10 + 4);
      }
    }
  }
  pwVar7 = (wint_t *)(param_2 + 1);
  if (*param_2 == 0x28) {
    iVar13 = iswspace(*pwVar7);
    while (iVar13 != 0) {
      pwVar11 = pwVar7 + 1;
      pwVar7 = pwVar7 + 1;
      iVar13 = iswspace(*pwVar11);
    }
    if (*pwVar7 == 0x29) {
      pwVar6 = pwVar7 + 1;
    }
    else {
      local_e0 = (longlong **)FMemory::Malloc((longlong)*(int *)((longlong)param_1[0xe] + 0x34));
      plVar10 = param_1[0xe];
      if ((*(uint *)(plVar10 + 7) >> 9 & 1) == 0) {
        (**(code **)(*plVar10 + 0x330))(plVar10,local_e0);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  (local_e0,0,(longlong)(*(int *)((longlong)plVar10 + 0x34) * (int)plVar10[6]));
      }
      ppplStack_c0 = &local_e0;
      local_d8 = param_4 | 2;
      local_b8 = local_e8;
      local_c8._0_4_ = SUB84(param_1,0);
      local_c8._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
      pplStack_b0 = &local_98;
      local_e8[0] = 0;
      local_f0 = local_a8;
      local_f8 = local_a0;
      local_68 = (undefined4)local_c8;
      uStack_64 = local_c8._4_4_;
      local_48 = 1;
      local_c8 = param_1;
      ppplStack_60 = ppplStack_c0;
      local_58 = local_b8;
      pplStack_50 = pplStack_b0;
      pwVar7 = (wint_t *)FUN_141759d00(param_1[0xe],pwVar7,local_e0,local_d8);
      pplVar2 = local_e0;
      plVar10 = local_98;
      while (local_e0 = pplVar2, local_98 = plVar10, pwVar7 != (wint_t *)0x0) {
        uVar14 = *(uint *)(local_90 + 1);
        pwVar11 = pwVar6;
        uVar5 = 0;
        plVar8 = local_90;
        uVar1 = uVar14;
        while (uVar1 != 0) {
          uVar1 = (uint)pwVar11;
          if ((-1 < (int)uVar5) && ((int)uVar1 < (int)plVar8[5])) {
            plVar12 = (longlong *)plVar8[4];
            if ((longlong *)plVar8[4] == (longlong *)0x0) {
              plVar12 = plVar8 + 2;
            }
            uVar5 = uVar1;
            if ((int)uVar1 < 0) {
              uVar5 = uVar1 + 0x1f;
            }
            if ((*(uint *)((longlong)plVar12 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar1 & 0x1f) &
                1) != 0) {
              cVar3 = (**(code **)(*plVar10 + 0x2b8))
                                (plVar10,pplVar2,(longlong)(int)(local_70 * uVar1) + *plVar8,0);
              plVar8 = local_90;
              if (cVar3 != '\0') {
                if (uVar1 != 0xffffffff) goto LAB_141778f38;
                break;
              }
            }
          }
          pwVar11 = pwVar6;
          if (uVar1 + 1 != uVar14) {
            pwVar11 = (wint_t *)(ulonglong)(uVar1 + 1);
          }
          uVar5 = (uint)pwVar11;
          uVar1 = uVar5;
        }
        iVar13 = FUN_141769a00(&local_98);
        plVar10 = param_1[0xe];
        _Src = (void *)((longlong)local_e0 + (longlong)*(int *)((longlong)plVar10 + 0x44));
        _Dst = (void *)((longlong)(local_70 * iVar13) + (longlong)*(int *)((longlong)plVar10 + 0x44)
                       + *local_90);
        if (_Dst != _Src) {
          if ((*(uint *)(plVar10 + 7) >> 0x1e & 1) == 0) {
            (**(code **)(*plVar10 + 0x2e8))(plVar10,_Dst,_Src,(int)plVar10[6]);
          }
          else {
            _guard_xfg_dispatch_icall_nop
                      (_Dst,_Src,(longlong)(*(int *)((longlong)plVar10 + 0x34) * (int)plVar10[6]));
          }
        }
LAB_141778f38:
        iVar13 = iswspace(*pwVar7);
        while (iVar13 != 0) {
          pwVar11 = pwVar7 + 1;
          pwVar7 = pwVar7 + 1;
          iVar13 = iswspace(*pwVar11);
        }
        pwVar11 = pwVar7 + 1;
        if (*pwVar7 == 0x29) {
          local_d0 = &local_98;
          ppplStack_c0 = &local_d0;
          local_c8 = (longlong **)&LAB_141769f80;
          FScriptSet::Rehash(local_90,&local_88,&local_c8);
          local_e8[0] = 1;
          pwVar6 = pwVar11;
          break;
        }
        if (*pwVar7 != 0x2c) break;
        iVar13 = iswspace(*pwVar11);
        while (iVar13 != 0) {
          pwVar7 = pwVar11 + 1;
          pwVar11 = pwVar11 + 1;
          iVar13 = iswspace(*pwVar7);
        }
        local_f8 = local_a0;
        local_f0 = local_a8;
        pwVar7 = (wint_t *)FUN_141759d00(param_1[0xe],pwVar11,local_e0,local_d8);
        pplVar2 = local_e0;
        plVar10 = local_98;
      }
      FUN_1417691d0(&local_68);
    }
  }
  else {
    pwVar6 = (wint_t *)0x0;
  }
  return pwVar6;
}



// FUNCTION 141779050 FUN_141779050 body=228 status=ok
// SIG undefined FUN_141779050(void)

undefined8
FUN_141779050(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_38;
  longlong local_30 [3];
  undefined1 local_18 [16];
  
  uVar2 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_res10 = param_2;
  cVar1 = FSoftObjectPath::ImportTextItem(&local_38,&local_res10,param_4,param_5,param_6);
  *param_3 = 0xffffffff;
  param_3[1] = 0;
  if (cVar1 == '\0') {
    local_res18 = 0;
    *(undefined8 *)(param_3 + 4) = 0;
    param_3[8] = 0;
    if (((int)param_3[9] < 0) && (param_3[9] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3 + 6,0);
    }
    if (*(undefined2 **)(param_3 + 6) != (undefined2 *)0x0) {
      **(undefined2 **)(param_3 + 6) = 0;
    }
  }
  else {
    local_30[2] = local_38;
    FString::FString(local_18,local_30);
    FSoftObjectPath::operator=(param_3 + 4,local_30 + 2);
    uVar2 = local_res10;
  }
  param_3[2] = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 141779140 ImportText_Internal body=415 status=ok
// SIG undefined ImportText_Internal(void)

short * UStrProperty::ImportText_Internal
                  (undefined8 param_1,short *param_2,void **param_3,byte param_4,undefined8 param_5,
                  undefined8 param_6)

{
  void *_Src;
  short *psVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  void *local_18;
  ulonglong local_10;
  
  if ((param_4 & 2) == 0) {
    lVar3 = -1;
    if (*param_3 != param_2) {
      iVar2 = 0;
      if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
        iVar4 = 0;
      }
      else {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (param_2[lVar5] != 0);
        iVar4 = (int)lVar5 + 1;
      }
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) != iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,iVar4);
        iVar2 = *(int *)(param_3 + 1);
      }
      *(int *)(param_3 + 1) = iVar4 + iVar2;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4 + iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      if (iVar4 != 0) {
        ::_guard_xfg_dispatch_icall_nop(*param_3,param_2,(longlong)iVar4 * 2);
      }
    }
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != 0);
    param_2 = param_2 + (int)lVar3;
  }
  else {
    if (*param_2 == 0x22) {
      local_18 = (void *)0x0;
      local_10 = 0;
      psVar1 = (short *)UPropertyHelpers::ReadToken(param_2,&local_18,0);
      _Src = local_18;
      if (psVar1 != (short *)0x0) {
        if ((psVar1 <= param_2) || (psVar1[-1] == 0x22)) {
          if (param_3 != &local_18) {
            lVar3 = (longlong)(int)local_10;
            *(int *)(param_3 + 1) = (int)local_10;
            if (((int)local_10 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
              *(undefined4 *)((longlong)param_3 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_3,local_10 & 0xffffffff);
              ::_guard_xfg_dispatch_icall_nop(*param_3,_Src,lVar3 * 2);
            }
          }
          if (local_18 == (void *)0x0) {
            return psVar1;
          }
          FMemory::Free(local_18);
          return psVar1;
        }
        FOutputDevice::LogfImpl
                  (param_6,L"Missing terminating \'\"\' in string property value: %s",param_2);
      }
      if (local_18 != (void *)0x0) {
        FMemory::Free();
      }
    }
    else {
      FOutputDevice::LogfImpl
                (param_6,L"Missing opening \'\"\' in string property value: %s",param_2);
    }
    param_2 = (short *)0x0;
  }
  return param_2;
}



// FUNCTION 1417792e0 FUN_1417792e0 body=262 status=ok
// SIG undefined FUN_1417792e0(void)

undefined8
FUN_1417792e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_res8;
  undefined1 local_48 [8];
  longlong local_40 [3];
  
  FUN_14174d520(local_48,param_1);
  uVar3 = 0;
  uVar4 = 0;
  lVar1 = FUN_1417a53c0(param_1);
  if (lVar1 != 0) {
    uVar4 = *(uint *)(lVar1 + 0x290) & 0x100000;
  }
  lVar1 = FUN_1417a53c0(*(undefined8 *)(param_1 + 0x70));
  if (lVar1 != 0) {
    uVar3 = *(uint *)(lVar1 + 0x290);
    *(uint *)(lVar1 + 0x290) = uVar3 | uVar4;
  }
  local_res8 = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(&local_res8,local_40);
  uVar2 = FUN_14171d9a0(*(undefined8 *)(param_1 + 0x70),param_2,param_3,param_5,param_4,param_6,
                        local_40,1);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x290) = uVar3;
  }
  FUN_14174daa0(local_48);
  return uVar2;
}



// FUNCTION 1417793f0 FUN_1417793f0 body=383 status=ok
// SIG undefined FUN_1417793f0(void)

wint_t * FUN_1417793f0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  wint_t *pwVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  wint_t *pwVar7;
  int iVar8;
  int *piVar9;
  int local_18;
  int local_14;
  longlong local_10;
  
  cVar5 = FUN_141766f20(param_1,param_4,param_6);
  if (cVar5 != '\0') {
    FWeakObjectPtr::operator=(&local_18,0);
    local_10 = 0;
    pwVar7 = (wint_t *)
             FUN_141777240(&local_18,*(undefined8 *)(param_1 + 0x70),param_2,param_5,param_6);
    if (pwVar7 != (wint_t *)0x0) {
      lVar4 = param_3[1];
      piVar3 = (int *)*param_3;
      piVar9 = piVar3;
      do {
        if (piVar9 == piVar3 + (longlong)(int)lVar4 * 4) {
LAB_14177951a:
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_3);
          iVar6 = iswspace(*pwVar7);
          while (iVar6 != 0) {
            pwVar1 = pwVar7 + 1;
            pwVar7 = pwVar7 + 1;
            iVar6 = iswspace(*pwVar1);
          }
          return pwVar7;
        }
        if ((((*piVar9 == local_18) && (piVar9[1] == local_14)) ||
            ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
             (cVar5 = FWeakObjectPtr::IsValid(&local_18), cVar5 == '\0')))) &&
           (*(longlong *)(piVar9 + 2) == local_10)) {
          iVar6 = (int)((longlong)piVar9 - (longlong)piVar3 >> 4);
          if (iVar6 != -1) {
            iVar2 = (int)param_3[1];
            iVar8 = (iVar2 - iVar6) + -1;
            if (0 < iVar8) {
              iVar8 = 1;
            }
            if (iVar8 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar6 * 0x10 + *param_3),
                         (void *)((longlong)(iVar2 - iVar8) * 0x10 + *param_3),(longlong)iVar8 << 4)
              ;
              iVar2 = (int)param_3[1];
            }
            *(int *)(param_3 + 1) = iVar2 + -1;
            TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_3);
          }
          goto LAB_14177951a;
        }
        piVar9 = piVar9 + 4;
      } while( true );
    }
  }
  return (wint_t *)0x0;
}



// FUNCTION 141779640 InitializeValueInternal body=169 status=ok
// SIG undefined InitializeValueInternal(void)

void TProperty<FSoftObjectPtr,UObjectPropertyBase>::InitializeValueInternal
               (longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      puVar2 = (undefined4 *)(iVar1 * *(int *)(param_1 + 0x34) + param_2);
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 8) = 0;
      *puVar2 = 0xffffffff;
      puVar2[1] = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      puVar2[8] = 0;
      if (0x7fffffff < (uint)puVar2[9]) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2 + 6,0);
      }
      if (*(undefined2 **)(puVar2 + 6) != (undefined2 *)0x0) {
        **(undefined2 **)(puVar2 + 6) = 0;
      }
      iVar1 = iVar1 + 1;
      puVar2[2] = 0;
    } while (iVar1 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 141779720 InitializeValueInternal body=108 status=ok
// SIG undefined InitializeValueInternal(void)

void TProperty<TScriptDelegate<FWeakObjectPtr>,UProperty>::InitializeValueInternal
               (longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      lVar1 = iVar2 * *(int *)(param_1 + 0x34) + param_2;
      FWeakObjectPtr::operator=(lVar1,0);
      iVar2 = iVar2 + 1;
      *(undefined8 *)(lVar1 + 8) = 0;
    } while (iVar2 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 141779860 InstanceSubobjects body=205 status=ok
// SIG undefined InstanceSubobjects(void)

void UDelegateProperty::InstanceSubobjects
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
               undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      lVar1 = FWeakObjectPtr::Get(param_2);
      if (lVar1 != 0) {
        uVar2 = 0;
        if (param_3 != 0) {
          uVar2 = FWeakObjectPtr::Get((longlong)iVar4 * 0x10 + param_3);
        }
        uVar3 = FUN_14171e0d0(param_5,uVar2,lVar1,param_4,
                              (byte)(*(uint *)(param_1 + 0x38) >> 0xd) & 1,0,1);
        uVar2 = *(undefined8 *)(param_2 + 8);
        FWeakObjectPtr::operator=(param_2,uVar3);
        *(undefined8 *)(param_2 + 8) = uVar2;
      }
      iVar4 = iVar4 + 1;
      param_2 = param_2 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 141779930 FUN_141779930 body=805 status=ok
// SIG undefined FUN_141779930(void)

void FUN_141779930(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_40;
  
  if (param_2 != (longlong *)0x0) {
    local_78 = *(longlong *)(param_1 + 0x70);
    local_70 = *(longlong *)(param_1 + 0x78);
    uVar9 = *(ulonglong *)(local_78 + 0x38) & 0x8000080000;
    uVar4 = *(ulonglong *)(local_70 + 0x38) & 0x8000080000;
    if ((uVar9 != 0) || (uVar4 != 0)) {
      iVar1 = *(int *)(param_1 + 0xa0);
      local_60 = *(undefined4 *)(param_1 + 0x80);
      uStack_5c = *(undefined4 *)(param_1 + 0x84);
      uStack_58 = *(undefined4 *)(param_1 + 0x88);
      uStack_54 = *(undefined4 *)(param_1 + 0x8c);
      local_50 = *(undefined8 *)(param_1 + 0x90);
      uStack_48 = *(undefined8 *)(param_1 + 0x98);
      if (param_3 == (longlong *)0x0) {
        iVar7 = 0;
        iVar10 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
        if (iVar10 != 0) {
          uVar6 = 1;
          iVar3 = 0;
          do {
            if ((-1 < iVar7) && (iVar7 < (int)param_2[5])) {
              plVar5 = (longlong *)param_2[4];
              if ((longlong *)param_2[4] == (longlong *)0x0) {
                plVar5 = param_2 + 2;
              }
              iVar2 = iVar7;
              if (iVar7 < 0) {
                iVar2 = iVar7 + 0x1f;
              }
              if ((*(uint *)((longlong)plVar5 + (longlong)(iVar2 >> 5) * 4) & uVar6) != 0) {
                if ((int)param_2[1] == *(int *)((longlong)param_2 + 0x34)) {
                  lVar11 = 0;
                }
                else {
                  lVar11 = (longlong)iVar3 + *param_2;
                }
                if (uVar9 != 0) {
                  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x340))
                            (*(longlong **)(param_1 + 0x70),lVar11,0,param_4,param_5);
                }
                if (uVar4 != 0) {
                  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x340))
                            (*(longlong **)(param_1 + 0x78),*(int *)(param_1 + 0x84) + lVar11,0,
                             param_4,param_5);
                }
                iVar10 = iVar10 + -1;
              }
            }
            iVar7 = iVar7 + 1;
            uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
            iVar3 = iVar3 + iVar1;
          } while (iVar10 != 0);
        }
      }
      else {
        iVar7 = 0;
        iVar10 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
        if (iVar10 != 0) {
          uVar6 = 1;
          local_68 = param_3;
          local_40 = iVar1;
          do {
            if ((-1 < iVar7) && (iVar7 < (int)param_2[5])) {
              plVar5 = (longlong *)param_2[4];
              if ((longlong *)param_2[4] == (longlong *)0x0) {
                plVar5 = param_2 + 2;
              }
              iVar3 = iVar7;
              if (iVar7 < 0) {
                iVar3 = iVar7 + 0x1f;
              }
              if ((*(uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4) & uVar6) != 0) {
                if ((int)param_2[1] == *(int *)((longlong)param_2 + 0x34)) {
                  lVar11 = 0;
                }
                else {
                  lVar11 = (longlong)(iVar1 * iVar7) + *param_2;
                }
                iVar2 = (int)param_3[1] + -1;
                iVar3 = iVar7;
                if (iVar2 <= iVar7) {
                  iVar3 = iVar2;
                }
                iVar3 = FUN_141771a10(&local_78,lVar11,iVar3);
                if ((iVar3 < 0) || ((int)param_3[1] == *(int *)((longlong)param_3 + 0x34))) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = (longlong)(iVar1 * iVar3) + *param_3;
                }
                if (uVar9 != 0) {
                  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x340))
                            (*(longlong **)(param_1 + 0x70),lVar11,lVar8,param_4,param_5);
                }
                if (uVar4 != 0) {
                  if (lVar8 == 0) {
                    lVar8 = 0;
                  }
                  else {
                    lVar8 = *(int *)(param_1 + 0x84) + lVar8;
                  }
                  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x340))
                            (*(longlong **)(param_1 + 0x78),*(int *)(param_1 + 0x84) + lVar11,lVar8,
                             param_4,param_5);
                }
                iVar10 = iVar10 + -1;
              }
            }
            iVar7 = iVar7 + 1;
            uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
          } while (iVar10 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 141779c60 InstanceSubobjects body=594 status=ok
// SIG undefined InstanceSubobjects(void)

void UMulticastDelegateProperty::InstanceSubobjects
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
               undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int local_48;
  
  if (param_3 == 0) {
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      do {
        plVar4 = (longlong *)((longlong)iVar7 * 0x10 + param_2);
        for (iVar5 = 0; (-1 < iVar5 && (iVar5 < (int)plVar4[1])); iVar5 = iVar5 + 1) {
          lVar6 = (longlong)iVar5 * 0x10 + *plVar4;
          lVar2 = FWeakObjectPtr::Get(lVar6);
          if (lVar2 != 0) {
            FUN_14171e0d0(param_5,0,lVar2,param_4,(byte)(*(uint *)(param_1 + 0x38) >> 0xd) & 1,0,1);
            uVar3 = *(undefined8 *)(lVar6 + 8);
            FWeakObjectPtr::operator=(lVar6);
            *(undefined8 *)(lVar6 + 8) = uVar3;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x30));
    }
  }
  else {
    local_48 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      do {
        plVar4 = (longlong *)(param_2 + (longlong)local_48 * 0x10);
        plVar1 = (longlong *)(param_3 + (longlong)local_48 * 0x10);
        for (iVar7 = 0; ((-1 < iVar7 && (iVar7 < (int)plVar4[1])) && (iVar7 < (int)plVar1[1]));
            iVar7 = iVar7 + 1) {
          lVar6 = *plVar4 + (longlong)iVar7 * 0x10;
          lVar2 = FWeakObjectPtr::Get(lVar6);
          if (lVar2 != 0) {
            uVar3 = FWeakObjectPtr::Get(*plVar1 + (longlong)iVar7 * 0x10);
            FUN_14171e0d0(param_5,uVar3,lVar2,param_4,(byte)(*(uint *)(param_1 + 0x38) >> 0xd) & 1,0
                          ,1);
            uVar3 = *(undefined8 *)(lVar6 + 8);
            FWeakObjectPtr::operator=(lVar6);
            *(undefined8 *)(lVar6 + 8) = uVar3;
          }
        }
        for (; (-1 < iVar7 && (iVar7 < (int)plVar4[1])); iVar7 = iVar7 + 1) {
          lVar6 = (longlong)iVar7 * 0x10 + *plVar4;
          lVar2 = FWeakObjectPtr::Get(lVar6);
          if (lVar2 != 0) {
            FUN_14171e0d0(param_5,0,lVar2,param_4,(byte)(*(uint *)(param_1 + 0x38) >> 0xd) & 1,0,1);
            uVar3 = *(undefined8 *)(lVar6 + 8);
            FWeakObjectPtr::operator=(lVar6);
            *(undefined8 *)(lVar6 + 8) = uVar3;
          }
        }
        local_48 = local_48 + 1;
      } while (local_48 < *(int *)(param_1 + 0x30));
    }
  }
  return;
}



// FUNCTION 141779ec0 FUN_141779ec0 body=557 status=ok
// SIG undefined FUN_141779ec0(void)

void FUN_141779ec0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  int local_48;
  
  if ((param_2 != (longlong *)0x0) &&
     (local_70 = *(longlong *)(param_1 + 0x70),
     (*(ulonglong *)(local_70 + 0x38) & 0x8000080000) != 0)) {
    local_60 = *(undefined4 *)(param_1 + 0x78);
    uStack_5c = *(undefined4 *)(param_1 + 0x7c);
    uStack_58 = *(undefined4 *)(param_1 + 0x80);
    uStack_54 = *(undefined4 *)(param_1 + 0x84);
    local_50 = *(undefined8 *)(param_1 + 0x88);
    iVar6 = 0;
    iVar1 = *(int *)(param_1 + 0x90);
    if (param_3 == (longlong *)0x0) {
      iVar8 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
      if (iVar8 != 0) {
        uVar5 = 1;
        iVar9 = 0;
        do {
          if ((-1 < iVar6) && (iVar6 < (int)param_2[5])) {
            plVar3 = (longlong *)param_2[4];
            if ((longlong *)param_2[4] == (longlong *)0x0) {
              plVar3 = param_2 + 2;
            }
            iVar2 = iVar6;
            if (iVar6 < 0) {
              iVar2 = iVar6 + 0x1f;
            }
            if ((*(uint *)((longlong)plVar3 + (longlong)(iVar2 >> 5) * 4) & uVar5) != 0) {
              if ((int)param_2[1] == *(int *)((longlong)param_2 + 0x34)) {
                lVar4 = 0;
              }
              else {
                lVar4 = (longlong)iVar9 + *param_2;
              }
              (**(code **)(**(longlong **)(param_1 + 0x70) + 0x340))
                        (*(longlong **)(param_1 + 0x70),lVar4,0,param_4,param_5);
              iVar8 = iVar8 + -1;
            }
          }
          iVar6 = iVar6 + 1;
          uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
          iVar9 = iVar9 + iVar1;
        } while (iVar8 != 0);
      }
    }
    else {
      iVar8 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
      if (iVar8 != 0) {
        uVar5 = 1;
        iVar9 = 0;
        local_68 = param_3;
        local_48 = iVar1;
        do {
          if ((-1 < iVar6) && (iVar6 < (int)param_2[5])) {
            plVar3 = (longlong *)param_2[4];
            if ((longlong *)param_2[4] == (longlong *)0x0) {
              plVar3 = param_2 + 2;
            }
            iVar2 = iVar6;
            if (iVar6 < 0) {
              iVar2 = iVar6 + 0x1f;
            }
            if ((*(uint *)((longlong)plVar3 + (longlong)(iVar2 >> 5) * 4) & uVar5) != 0) {
              if ((int)param_2[1] == *(int *)((longlong)param_2 + 0x34)) {
                lVar4 = 0;
              }
              else {
                lVar4 = (longlong)iVar9 + *param_2;
              }
              iVar2 = FUN_141771940(&local_70,lVar4,iVar6);
              if ((iVar2 < 0) || ((int)param_3[1] == *(int *)((longlong)param_3 + 0x34))) {
                lVar7 = 0;
              }
              else {
                lVar7 = (longlong)(iVar1 * iVar2) + *param_3;
              }
              (**(code **)(**(longlong **)(param_1 + 0x70) + 0x340))
                        (*(longlong **)(param_1 + 0x70),lVar4,lVar7,param_4,param_5);
              iVar8 = iVar8 + -1;
            }
          }
          iVar6 = iVar6 + 1;
          uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
          iVar9 = iVar9 + iVar1;
        } while (iVar8 != 0);
      }
    }
  }
  return;
}



// FUNCTION 14177a0f0 InstanceSubobjects body=130 status=ok
// SIG undefined InstanceSubobjects(void)

void UStructProperty::InstanceSubobjects
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      iVar1 = iVar2 * *(int *)(param_1 + 0x34);
      if (param_3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = iVar1 + param_3;
      }
      FUN_14171e2d0(*(undefined8 *)(param_1 + 0x70),iVar1 + param_2,lVar3,
                    *(undefined8 *)(param_1 + 0x70),param_4,param_5);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 14177a180 FUN_14177a180 body=502 status=ok
// SIG undefined FUN_14177a180(void)

undefined8 FUN_14177a180(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong local_48;
  uint local_40;
  undefined8 *local_38;
  uint local_28;
  uint local_24;
  
  if (param_1 == 0) {
LAB_14177a355:
    uVar3 = 0;
  }
  else {
    cVar1 = UPackage::IsFullyLoaded();
    if (cVar1 == '\0') {
      UPackage::FullyLoad(param_1);
    }
    uVar3 = UObject::GetPrivateStaticClass();
    FObjectIterator::FObjectIterator(&local_48,uVar3,0,0x10,0);
    if (param_2 == (longlong *)0x0) {
      while (local_38 != (undefined8 *)0x0) {
        plVar7 = (longlong *)*local_38;
        cVar1 = UObjectBaseUtility::IsIn(plVar7,param_1);
        if ((cVar1 != '\0') && (cVar1 = (**(code **)(*plVar7 + 0x180))(plVar7), cVar1 != '\0'))
        goto LAB_14177a355;
        TObjectIterator<UObject>::operator++(&local_48);
      }
    }
    else if (local_38 != (undefined8 *)0x0) {
      while( true ) {
        uVar6 = local_40;
        if (local_38 == (undefined8 *)0x0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)*local_38;
        }
        cVar1 = UObjectBaseUtility::IsIn(plVar7,param_1);
        if (((cVar1 != '\0') && (cVar1 = (**(code **)(*plVar7 + 0x180))(plVar7), cVar1 != '\0')) &&
           (plVar7 != param_2)) break;
        do {
          do {
            uVar6 = uVar6 + 1;
            if (*(int *)(local_48 + 0x24) <= (int)uVar6) goto LAB_14177a351;
            while( true ) {
              uVar4 = uVar6 & 0xffff;
              uVar2 = uVar6;
              if ((int)uVar6 < 0) {
                uVar2 = uVar6 + 0xffff;
                uVar4 = (uVar6 & 0xffff) - 0x10000;
              }
              lVar5 = *(longlong *)
                       (*(longlong *)(local_48 + 0x10) + (longlong)((int)uVar2 >> 0x10) * 8);
              local_38 = (undefined8 *)(lVar5 + (longlong)(int)uVar4 * 0x18);
              lVar5 = *(longlong *)(lVar5 + (longlong)(int)uVar4 * 0x18);
              if (lVar5 != 0) break;
              uVar6 = uVar6 + 1;
              if (*(int *)(local_48 + 0x24) <= (int)uVar6) {
                return 1;
              }
            }
          } while ((*(uint *)(lVar5 + 8) & local_28) != 0);
          uVar2 = *(uint *)(lVar5 + 0xc);
          if ((int)uVar2 < (int)DAT_1469e91c4) {
            uVar4 = uVar2 & 0xffff;
            if ((int)uVar2 < 0) {
              uVar2 = uVar2 + 0xffff;
              uVar4 = uVar4 - 0x10000;
            }
            lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                    (longlong)(int)uVar4 * 0x18;
          }
          else {
            lVar5 = 0;
          }
          local_40 = uVar6;
        } while ((*(uint *)(lVar5 + 8) & local_24) != 0);
      }
      goto LAB_14177a355;
    }
LAB_14177a351:
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14177a380 FUN_14177a380 body=957 status=ok
// SIG undefined FUN_14177a380(void)

undefined8 FUN_14177a380(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  int local_res8;
  int local_res20;
  
  plVar2 = (longlong *)*param_1;
  plVar3 = (longlong *)param_1[1];
  local_res8 = *(int *)(param_1[2] + 8) - *(int *)(param_1[2] + 0x34);
  if (local_res8 ==
      *(int *)(*(longlong *)(param_2 + 0x10) + 8) - *(int *)(*(longlong *)(param_2 + 0x10) + 0x34))
  {
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
    uVar9 = 0;
    uVar13 = 0;
    if (local_res8 != 0) {
LAB_14177a3e0:
      plVar4 = (longlong *)param_1[2];
      do {
        if ((-1 < (int)uVar9) && ((int)uVar9 < (int)plVar4[5])) {
          plVar14 = (longlong *)plVar4[4];
          if ((longlong *)plVar4[4] == (longlong *)0x0) {
            plVar14 = plVar4 + 2;
          }
          uVar10 = uVar9;
          if ((int)uVar9 < 0) {
            uVar10 = uVar9 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar14 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar9 & 0x1f) & 1
              ) != 0) goto LAB_14177a424;
        }
        uVar9 = uVar9 + 1;
      } while( true );
    }
LAB_14177a4fc:
    uVar7 = 1;
  }
  else {
LAB_14177a65b:
    uVar7 = 0;
  }
  return uVar7;
LAB_14177a424:
  plVar14 = *(longlong **)(param_2 + 0x10);
  do {
    if ((-1 < (int)uVar13) && ((int)uVar13 < (int)plVar14[5])) {
      plVar15 = (longlong *)plVar14[4];
      if ((longlong *)plVar14[4] == (longlong *)0x0) {
        plVar15 = plVar14 + 2;
      }
      uVar10 = uVar13;
      if ((int)uVar13 < 0) {
        uVar10 = uVar13 + 0x1f;
      }
      if ((*(uint *)((longlong)plVar15 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar13 & 0x1f) & 1)
          != 0) break;
    }
    uVar13 = uVar13 + 1;
  } while( true );
  if ((int)plVar4[1] == *(int *)((longlong)plVar4 + 0x34)) {
    lVar16 = 0;
  }
  else {
    lVar16 = (longlong)(int)(*(int *)(param_1 + 7) * uVar9) + *plVar4;
  }
  if ((int)plVar14[1] == *(int *)((longlong)plVar14 + 0x34)) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)(int)(*(int *)(param_2 + 0x38) * uVar13) + *plVar14;
  }
  cVar5 = (**(code **)(*plVar2 + 0x2b8))(plVar2,lVar16,lVar8);
  if ((cVar5 == '\0') ||
     (cVar5 = (**(code **)(*plVar3 + 0x2b8))(plVar3,iVar1 + lVar16), cVar5 == '\0')) {
    local_res20 = 0;
    uVar10 = uVar9;
LAB_14177a514:
    plVar2 = (longlong *)param_1[2];
    if ((int)plVar2[1] == *(int *)((longlong)plVar2 + 0x34)) {
      lVar16 = 0;
    }
    else {
      lVar16 = (longlong)(int)(*(int *)(param_1 + 7) * uVar10) + *plVar2;
    }
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
    plVar2 = (longlong *)*param_1;
    plVar3 = (longlong *)param_1[1];
    uVar12 = uVar9;
    iVar11 = local_res20;
joined_r0x00014177a549:
    if (iVar11 != 0) {
      do {
        plVar4 = (longlong *)param_1[2];
        if ((-1 < (int)uVar12) && ((int)uVar12 < (int)plVar4[5])) {
          plVar14 = (longlong *)plVar4[4];
          if ((longlong *)plVar4[4] == (longlong *)0x0) {
            plVar14 = plVar4 + 2;
          }
          uVar6 = uVar12;
          if ((int)uVar12 < 0) {
            uVar6 = uVar12 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar14 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar12 & 0x1f) & 1
              ) != 0) goto code_r0x00014177a59c;
        }
        uVar12 = uVar12 + 1;
      } while( true );
    }
    cVar5 = FUN_14177b280(param_1,uVar10,param_2,uVar13,local_res8,lVar16,param_3);
    if (cVar5 == '\0') goto LAB_14177a65b;
LAB_14177a67d:
    local_res8 = local_res8 + -1;
    local_res20 = local_res20 + 1;
    if (local_res8 == 0) goto LAB_14177a4fc;
    lVar16 = param_1[2];
    do {
      if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(lVar16 + 0x28))) {
        lVar8 = *(longlong *)(lVar16 + 0x20);
        if (*(longlong *)(lVar16 + 0x20) == 0) {
          lVar8 = lVar16 + 0x10;
        }
        uVar12 = uVar10;
        if ((int)uVar10 < 0) {
          uVar12 = uVar10 + 0x1f;
        }
        if ((*(uint *)(lVar8 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar10 & 0x1f) & 1) != 0)
        goto LAB_14177a6f0;
      }
      uVar10 = uVar10 + 1;
    } while( true );
  }
  uVar9 = uVar9 + 1;
  uVar13 = uVar13 + 1;
  local_res8 = local_res8 + -1;
  if (local_res8 == 0) goto LAB_14177a4fc;
  goto LAB_14177a3e0;
code_r0x00014177a59c:
  if ((int)plVar4[1] == *(int *)((longlong)plVar4 + 0x34)) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)(int)(*(int *)(param_1 + 7) * uVar12) + *plVar4;
  }
  cVar5 = (**(code **)(*plVar2 + 0x2b8))(plVar2,lVar8,lVar16);
  if (cVar5 != '\0') {
    plVar4 = (longlong *)param_1[2];
    if ((int)plVar4[1] == *(int *)((longlong)plVar4 + 0x34)) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)(int)(*(int *)(param_1 + 7) * uVar12) + *plVar4;
    }
    cVar5 = (**(code **)(*plVar3 + 0x2b8))(plVar3,lVar8 + iVar1);
    if (cVar5 != '\0') goto LAB_14177a67d;
  }
  uVar12 = uVar12 + 1;
  iVar11 = iVar11 + -1;
  goto joined_r0x00014177a549;
LAB_14177a6f0:
  lVar16 = *(longlong *)(param_2 + 0x10);
  do {
    if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(lVar16 + 0x28))) {
      lVar8 = *(longlong *)(lVar16 + 0x20);
      if (*(longlong *)(lVar16 + 0x20) == 0) {
        lVar8 = lVar16 + 0x10;
      }
      uVar12 = uVar13;
      if ((int)uVar13 < 0) {
        uVar12 = uVar13 + 0x1f;
      }
      if ((*(uint *)(lVar8 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar13 & 0x1f) & 1) != 0)
      goto LAB_14177a514;
    }
    uVar13 = uVar13 + 1;
  } while( true );
}



// FUNCTION 14177a740 FUN_14177a740 body=1164 status=ok
// SIG undefined FUN_14177a740(void)

undefined8 FUN_14177a740(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int local_res20;
  int local_60;
  
  plVar15 = (longlong *)*param_1;
  local_res20 = *(int *)(param_1[1] + 8) - *(int *)(param_1[1] + 0x34);
  if (local_res20 ==
      *(int *)(*(longlong *)(param_2 + 8) + 8) - *(int *)(*(longlong *)(param_2 + 8) + 0x34)) {
    uVar8 = 0;
    uVar17 = 0;
    if (local_res20 != 0) {
LAB_14177a7a0:
      lVar14 = param_1[1];
      do {
        if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(lVar14 + 0x28))) {
          lVar6 = *(longlong *)(lVar14 + 0x20);
          if (*(longlong *)(lVar14 + 0x20) == 0) {
            lVar6 = lVar14 + 0x10;
          }
          uVar9 = uVar8;
          if ((int)uVar8 < 0) {
            uVar9 = uVar8 + 0x1f;
          }
          if ((*(uint *)(lVar6 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0)
          goto LAB_14177a7e4;
        }
        uVar8 = uVar8 + 1;
      } while( true );
    }
LAB_14177a89a:
    uVar5 = 1;
  }
  else {
LAB_14177abb9:
    uVar5 = 0;
  }
  return uVar5;
LAB_14177a7e4:
  lVar14 = *(longlong *)(param_2 + 8);
  do {
    if ((-1 < (int)uVar17) && ((int)uVar17 < *(int *)(lVar14 + 0x28))) {
      lVar6 = *(longlong *)(lVar14 + 0x20);
      if (*(longlong *)(lVar14 + 0x20) == 0) {
        lVar6 = lVar14 + 0x10;
      }
      uVar9 = uVar17;
      if ((int)uVar17 < 0) {
        uVar9 = uVar17 + 0x1f;
      }
      if ((*(uint *)(lVar6 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar17 & 0x1f) & 1) != 0) break;
    }
    uVar17 = uVar17 + 1;
  } while( true );
  cVar2 = (**(code **)(*plVar15 + 0x2b8))(plVar15);
  if (cVar2 != '\0') {
    uVar8 = uVar8 + 1;
    uVar17 = uVar17 + 1;
    local_res20 = local_res20 + -1;
    if (local_res20 == 0) goto LAB_14177a89a;
    goto LAB_14177a7a0;
  }
  local_60 = 0;
  uVar9 = uVar8;
LAB_14177a8b0:
  plVar15 = (longlong *)param_1[1];
  if ((int)plVar15[1] == *(int *)((longlong)plVar15 + 0x34)) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)(int)(*(int *)(param_1 + 5) * uVar9) + *plVar15;
  }
  plVar15 = (longlong *)*param_1;
  uVar7 = uVar8;
  iVar11 = local_60;
  if (local_60 != 0) {
    do {
      for (; (plVar1 = (longlong *)param_1[1], (int)uVar7 < 0 || ((int)plVar1[5] <= (int)uVar7));
          uVar7 = uVar7 + 1) {
LAB_14177a97e:
      }
      plVar12 = (longlong *)plVar1[4];
      if ((longlong *)plVar1[4] == (longlong *)0x0) {
        plVar12 = plVar1 + 2;
      }
      uVar3 = uVar7;
      if ((int)uVar7 < 0) {
        uVar3 = uVar7 + 0x1f;
      }
      if ((*(uint *)((longlong)plVar12 + (longlong)((int)uVar3 >> 5) * 4) >> (uVar7 & 0x1f) & 1) ==
          0) goto LAB_14177a97e;
      if ((int)plVar1[1] == *(int *)((longlong)plVar1 + 0x34)) {
        lVar6 = 0;
      }
      else {
        lVar6 = (longlong)(int)(*(int *)(param_1 + 5) * uVar7) + *plVar1;
      }
      cVar2 = (**(code **)(*plVar15 + 0x2b8))(plVar15,lVar6);
      if (cVar2 != '\0') goto LAB_14177aaf6;
      uVar7 = uVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    plVar15 = (longlong *)*param_1;
  }
  iVar16 = 0;
  iVar18 = 0;
  iVar11 = local_res20;
  uVar7 = uVar9;
  uVar3 = uVar17;
  if (local_res20 != 0) {
LAB_14177a9b7:
    plVar1 = (longlong *)param_1[1];
    do {
      if ((-1 < (int)uVar7) && ((int)uVar7 < (int)plVar1[5])) {
        plVar12 = (longlong *)plVar1[4];
        if ((longlong *)plVar1[4] == (longlong *)0x0) {
          plVar12 = plVar1 + 2;
        }
        uVar4 = uVar7;
        if ((int)uVar7 < 0) {
          uVar4 = uVar7 + 0x1f;
        }
        if ((*(uint *)((longlong)plVar12 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar7 & 0x1f) & 1)
            != 0) goto LAB_14177aa00;
      }
      uVar7 = uVar7 + 1;
    } while( true );
  }
  goto LAB_14177aaf6;
LAB_14177aa00:
  plVar12 = *(longlong **)(param_2 + 8);
  do {
    if ((-1 < (int)uVar3) && ((int)uVar3 < (int)plVar12[5])) {
      plVar13 = (longlong *)plVar12[4];
      if ((longlong *)plVar12[4] == (longlong *)0x0) {
        plVar13 = plVar12 + 2;
      }
      uVar4 = uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar3 + 0x1f;
      }
      if ((*(uint *)((longlong)plVar13 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar3 & 0x1f) & 1) !=
          0) break;
    }
    uVar3 = uVar3 + 1;
  } while( true );
  if ((int)plVar1[1] == *(int *)((longlong)plVar1 + 0x34)) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)(int)(*(int *)(param_1 + 5) * uVar7) + *plVar1;
  }
  if ((int)plVar12[1] == *(int *)((longlong)plVar12 + 0x34)) {
    lVar10 = 0;
  }
  else {
    lVar10 = (longlong)(int)(*(int *)(param_2 + 0x28) * uVar3) + *plVar12;
  }
  cVar2 = (**(code **)(*plVar15 + 0x2b8))(plVar15,lVar6,lVar14,param_3);
  if (cVar2 != '\0') {
    iVar16 = iVar16 + 1;
  }
  cVar2 = (**(code **)(*plVar15 + 0x2b8))(plVar15,lVar10,lVar14,param_3);
  if (cVar2 != '\0') {
    iVar18 = iVar18 + 1;
  }
  iVar11 = iVar11 + -1;
  uVar7 = uVar7 + 1;
  uVar3 = uVar3 + 1;
  if (iVar11 == 0) goto code_r0x00014177aad4;
  goto LAB_14177a9b7;
code_r0x00014177aad4:
  if (iVar16 != iVar18) goto LAB_14177abb9;
LAB_14177aaf6:
  local_60 = local_60 + 1;
  local_res20 = local_res20 + -1;
  if (local_res20 != 0) {
    lVar14 = param_1[1];
    do {
      if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(lVar14 + 0x28))) {
        lVar6 = *(longlong *)(lVar14 + 0x20);
        if (*(longlong *)(lVar14 + 0x20) == 0) {
          lVar6 = lVar14 + 0x10;
        }
        uVar7 = uVar9;
        if ((int)uVar9 < 0) {
          uVar7 = uVar9 + 0x1f;
        }
        if ((*(uint *)(lVar6 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0)
        goto LAB_14177ab56;
      }
      uVar9 = uVar9 + 1;
    } while( true );
  }
  goto LAB_14177a89a;
LAB_14177ab56:
  lVar14 = *(longlong *)(param_2 + 8);
  do {
    if ((-1 < (int)uVar17) && ((int)uVar17 < *(int *)(lVar14 + 0x28))) {
      lVar6 = *(longlong *)(lVar14 + 0x20);
      if (*(longlong *)(lVar14 + 0x20) == 0) {
        lVar6 = lVar14 + 0x10;
      }
      uVar7 = uVar17;
      if ((int)uVar17 < 0) {
        uVar7 = uVar17 + 0x1f;
      }
      if ((*(uint *)(lVar6 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar17 & 0x1f) & 1) != 0)
      goto LAB_14177a8b0;
    }
    uVar17 = uVar17 + 1;
  } while( true );
}



// FUNCTION 14177abd0 FUN_14177abd0 body=218 status=ok
// SIG undefined FUN_14177abd0(void)

void FUN_14177abd0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14177ac98:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x00014177abf3:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if ((((byte)uVar1 >> 2 & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_14177ac98;
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
      goto joined_r0x00014177abf3;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_14177ac98;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x00014177abf3;
}



// FUNCTION 14177add0 FUN_14177add0 body=477 status=ok
// SIG undefined FUN_14177add0(void)

void FUN_14177add0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar7 = FUN_1417a53c0();
  if (lVar7 != 0) {
    FUN_141740c00(lVar7 + 0x200,param_1);
  }
  (**(code **)(*param_2 + 0x70))(param_2,*(undefined8 *)(param_1 + 0x70));
  (**(code **)(*param_2 + 0x70))(param_2,*(undefined8 *)(param_1 + 0x78));
  plVar1 = *(longlong **)(param_1 + 0x70);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2);
  FUN_141764ac0(plVar1);
  plVar1 = *(longlong **)(param_1 + 0x78);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2);
  FUN_141764ac0(plVar1);
  plVar1 = *(longlong **)(param_1 + 0x70);
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x34);
  iVar12 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x30);
  iVar13 = *(int *)((longlong)plVar1 + 0x34);
  lVar7 = plVar1[6];
  iVar3 = (**(code **)(*plVar1 + 0x348))();
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x348))();
  uVar10 = iVar3 - 1U & -iVar3;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  uVar14 = iVar13 * (int)lVar7 + -1 + uVar10 + iVar4 & -iVar4;
  if (iVar4 <= iVar3) {
    iVar4 = iVar3;
  }
  uVar11 = iVar4 - 1U & -iVar4;
  iVar13 = iVar4;
  if (iVar4 < 1) {
    iVar13 = 0;
  }
  uVar5 = uVar11 + 3 + (iVar8 * iVar12 + -1 + iVar4 + uVar14 & -iVar4);
  uVar6 = uVar5 & 0xfffffffc;
  iVar8 = 4;
  if (3 < iVar13) {
    iVar8 = iVar13;
  }
  iVar12 = 4;
  if (3 < iVar8) {
    iVar12 = iVar8;
  }
  uVar9 = ~(iVar12 - 1U) & uVar6 + 7 + iVar12;
  uVar2 = CONCAT44(uVar5,uVar11) & 0xfffffffcffffffff;
  iVar8 = 4;
  if (3 < iVar12) {
    iVar8 = iVar12;
  }
  uVar11 = 8;
  if (7 < (int)uVar9) {
    uVar11 = uVar9;
  }
  uStack_30 = (undefined4)uVar2;
  uStack_2c = (undefined4)(uVar2 >> 0x20);
  *(uint *)(param_1 + 0x80) = uVar10;
  *(uint *)(param_1 + 0x84) = uVar14;
  *(undefined4 *)(param_1 + 0x88) = uStack_30;
  *(undefined4 *)(param_1 + 0x8c) = uStack_2c;
  *(uint *)(param_1 + 0x90) = uVar6 + 4;
  *(uint *)(param_1 + 0x94) = uVar9;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(int *)(param_1 + 0x9c) = iVar8;
  *(uint *)(param_1 + 0xa0) = uVar11;
  FArchive::SetLicenseeUE4Ver(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x84));
  *(undefined4 *)(param_1 + 0x34) = 0x50;
  *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) | 0x200;
  return;
}



// FUNCTION 14177afb0 FUN_14177afb0 body=280 status=ok
// SIG undefined FUN_14177afb0(void)

void FUN_14177afb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar6 = FUN_1417a53c0();
  if (lVar6 != 0) {
    FUN_141740c00(lVar6 + 0x200,param_1);
  }
  (**(code **)(*param_2 + 0x70))(param_2,*(undefined8 *)(param_1 + 0x70));
  plVar2 = *(longlong **)(param_1 + 0x70);
  (**(code **)(*plVar2 + 0x2a8))(plVar2,param_2);
  FUN_141764ac0(plVar2);
  plVar2 = *(longlong **)(param_1 + 0x70);
  iVar1 = *(int *)((longlong)plVar2 + 0x34);
  lVar6 = plVar2[6];
  uVar3 = (**(code **)(*plVar2 + 0x348))();
  *(undefined4 *)(param_1 + 0x34) = 0x50;
  uVar9 = uVar3 - 1 & -uVar3;
  if ((int)uVar3 < 1) {
    uVar3 = 0;
  }
  uVar4 = iVar1 * (int)lVar6 + 3 + uVar9;
  uVar5 = uVar4 & 0xfffffffc;
  uVar7 = 4;
  if (3 < (int)uVar3) {
    uVar7 = uVar3;
  }
  uVar3 = 4;
  if (3 < (int)uVar7) {
    uVar3 = uVar7;
  }
  uVar8 = uVar5 + 7 + uVar3 & ~(uVar3 - 1);
  uVar7 = 4;
  if (3 < (int)uVar3) {
    uVar7 = uVar3;
  }
  uVar3 = 8;
  if (7 < (int)uVar8) {
    uVar3 = uVar8;
  }
  *(ulonglong *)(param_1 + 0x78) = CONCAT44(uVar4,uVar9) & 0xfffffffcffffffff;
  *(ulonglong *)(param_1 + 0x80) = CONCAT44(uVar8,uVar5 + 4);
  *(ulonglong *)(param_1 + 0x88) = (ulonglong)uVar7 << 0x20;
  *(uint *)(param_1 + 0x90) = uVar3;
  *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) | 0x200;
  return;
}



// FUNCTION 14177b0d0 FUN_14177b0d0 body=166 status=ok
// SIG undefined FUN_14177b0d0(void)

void FUN_14177b0d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if ((*(uint *)(param_1 + 8) >> 10 & 1) != 0) {
    lVar1 = FUN_1417a53c0();
    FUN_141740c00(lVar1 + 0x200,param_1);
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    uVar2 = thunk_FUN_14171a370();
    *(undefined8 *)(param_1 + 0x70) = uVar2;
  }
  else {
    (**(code **)(*param_2 + 0x70))(param_2);
  }
  FUN_14177b200(param_1);
  lVar1 = *(longlong *)(param_1 + 0x70);
  *(int *)(param_1 + 0x34) =
       *(int *)(lVar1 + 0x44) + -1 + *(int *)(lVar1 + 0x40) & -*(int *)(lVar1 + 0x44);
  if (*(longlong **)(lVar1 + 0x90) != (longlong *)0x0) {
    uVar3 = (**(code **)(**(longlong **)(lVar1 + 0x90) + 0x108))();
    *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) | uVar3;
    return;
  }
  *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) | 0x8000000000000;
  return;
}



// FUNCTION 14177b180 NetSerializeItem body=116 status=ok
// SIG undefined NetSerializeItem(void)

undefined8 UStructProperty::NetSerializeItem(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x70) + 0x88) & 0x400) != 0) {
    uVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x70) + 0x90) + 0x60))();
    return uVar1;
  }
  LowLevelFatalErrorHandler("Unknown",0x89,L"Deprecated code path");
  FDebug::AssertFailed(&DAT_144d1d0fb,"Unknown",0x89,L"Deprecated code path");
  return 1;
}



// FUNCTION 14177b200 FUN_14177b200 body=127 status=ok
// SIG undefined FUN_14177b200(void)

void FUN_14177b200(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = 0;
  lVar3 = FUN_1417a53c0();
  if (lVar3 != 0) {
    uVar4 = *(uint *)(lVar3 + 0x290) & 0x100000;
  }
  plVar2 = *(longlong **)(param_1 + 0x70);
  if ((plVar2 != (longlong *)0x0) && (lVar3 = FUN_1417a53c0(plVar2), lVar3 != 0)) {
    uVar1 = *(uint *)(lVar3 + 0x290);
    *(uint *)(lVar3 + 0x290) = uVar1 | uVar4;
    (**(code **)(*plVar2 + 0x300))(plVar2);
    *(uint *)(lVar3 + 0x290) = uVar1;
  }
  return;
}



// FUNCTION 14177b280 FUN_14177b280 body=497 status=ok
// SIG undefined FUN_14177b280(void)

bool FUN_14177b280(undefined8 *param_1,uint param_2,longlong param_3,uint param_4,int param_5,
                  longlong param_6,undefined8 param_7)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  
  plVar2 = (longlong *)param_1[1];
  iVar11 = 0;
  plVar3 = (longlong *)*param_1;
  iVar12 = 0;
  iVar1 = *(int *)((longlong)param_1 + 0x1c);
joined_r0x00014177b2c3:
  if (param_5 == 0) {
    return iVar11 == iVar12;
  }
  plVar4 = (longlong *)param_1[2];
  do {
    if ((-1 < (int)param_2) && ((int)param_2 < (int)plVar4[5])) {
      plVar9 = (longlong *)plVar4[4];
      if ((longlong *)plVar4[4] == (longlong *)0x0) {
        plVar9 = plVar4 + 2;
      }
      uVar6 = param_2;
      if ((int)param_2 < 0) {
        uVar6 = param_2 + 0x1f;
      }
      if ((*(uint *)((longlong)plVar9 + (longlong)((int)uVar6 >> 5) * 4) >> (param_2 & 0x1f) & 1) !=
          0) break;
    }
    param_2 = param_2 + 1;
  } while( true );
  plVar9 = *(longlong **)(param_3 + 0x10);
  do {
    if ((-1 < (int)param_4) && ((int)param_4 < (int)plVar9[5])) {
      plVar10 = (longlong *)plVar9[4];
      if ((longlong *)plVar9[4] == (longlong *)0x0) {
        plVar10 = plVar9 + 2;
      }
      uVar6 = param_4;
      if ((int)param_4 < 0) {
        uVar6 = param_4 + 0x1f;
      }
      if ((*(uint *)((longlong)plVar10 + (longlong)((int)uVar6 >> 5) * 4) >> (param_4 & 0x1f) & 1)
          != 0) break;
    }
    param_4 = param_4 + 1;
  } while( true );
  if ((int)plVar4[1] == *(int *)((longlong)plVar4 + 0x34)) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)(int)(*(int *)(param_1 + 7) * param_2) + *plVar4;
  }
  if ((int)plVar9[1] == *(int *)((longlong)plVar9 + 0x34)) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)(int)(*(int *)(param_3 + 0x38) * param_4) + *plVar9;
  }
  cVar5 = (**(code **)(*plVar3 + 0x2b8))(plVar3,lVar7,param_6,param_7);
  if ((cVar5 != '\0') &&
     (cVar5 = (**(code **)(*plVar2 + 0x2b8))(plVar2,iVar1 + lVar7,param_6 + iVar1,param_7),
     cVar5 != '\0')) {
    iVar11 = iVar11 + 1;
  }
  cVar5 = (**(code **)(*plVar3 + 0x2b8))(plVar3,lVar8,param_6,param_7);
  if ((cVar5 != '\0') &&
     (cVar5 = (**(code **)(*plVar2 + 0x2b8))(plVar2,iVar1 + lVar8,iVar1 + param_6,param_7),
     cVar5 != '\0')) {
    iVar12 = iVar12 + 1;
  }
  param_2 = param_2 + 1;
  param_4 = param_4 + 1;
  param_5 = param_5 + -1;
  goto joined_r0x00014177b2c3;
}



// FUNCTION 14177b480 FUN_14177b480 body=425 status=ok
// SIG undefined FUN_14177b480(void)

undefined8 FUN_14177b480(longlong *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 local_res8;
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  local_res8 = 0;
  (**(code **)(*param_1 + 0x40))(param_1,&local_res8);
  if (param_2 != 0) {
    lVar3 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14177b500;
  }
  uVar4 = FUN_14171bfe0();
  param_2 = UObjectBaseUtility::GetTypedOuter(param_2,uVar4);
LAB_14177b500:
  lVar3 = *(longlong *)(param_3 + 0x20);
  if (((int)lVar3 == 0) && ((int)((ulonglong)lVar3 >> 0x20) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if (param_2 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_2 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_2;
    FUN_14177abd0(&local_28);
    lVar6 = local_20;
    while (local_20 = lVar6, lVar6 != 0) {
      if (*(longlong *)(lVar6 + 0x18) == lVar3) goto LAB_14177b5d8;
      local_20 = *(longlong *)(lVar6 + 0x28);
      FUN_14177abd0(&local_28);
      lVar6 = local_20;
    }
  }
  puVar5 = (undefined8 *)FName::ToString(param_3 + 0x20,&local_28);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar5;
  }
  uVar4 = UEnum::GetPrivateStaticClass();
  lVar6 = FUN_141799410(uVar4,0xffffffffffffffff,puVar7);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (lVar6 == 0) {
    uVar4 = 0;
  }
  else {
LAB_14177b5d8:
    (**(code **)(*param_1 + 0x70))(param_1,lVar6);
    uVar4 = UEnum::GetValueByName(lVar6,local_res8,0);
    cVar2 = UEnum::IsValidEnumValue(lVar6,uVar4);
    if (cVar2 == '\0') {
      uVar4 = UEnum::GetMaxEnumValue(lVar6);
    }
  }
  return uVar4;
}



// FUNCTION 14177b630 Realloc body=192 status=ok
// SIG undefined Realloc(void)

void FScriptBitArray::Realloc(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x1c) + 0x1f;
  uVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5;
  if (uVar2 < 5) {
    uVar6 = 4;
  }
  else {
    uVar3 = FMemory::QuantizeSize((longlong)(int)uVar2 << 2,0);
    uVar6 = uVar3 >> 2 & 0xffffffff;
    if ((int)(uVar3 >> 2) < (int)uVar2) {
      uVar6 = 0x7fffffff;
    }
  }
  uVar5 = (uint)uVar6;
  *(uint *)(param_1 + 0x1c) = uVar5 << 5;
  uVar2 = (int)(param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
  TInlineAllocator<4,FDefaultAllocator>::ForElementType<unsigned_int>::ResizeAllocation
            (param_1,uVar2,uVar6,4);
  if ((uVar5 != 0) && (uVar2 < uVar5)) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = param_1;
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(lVar4 + (ulonglong)uVar2 * 4),0,(ulonglong)(uVar5 - uVar2) << 2);
  }
  return;
}



// FUNCTION 14177b6f0 Rehash body=65 status=ok
// SIG undefined Rehash(void)

void FScriptMapHelper::Rehash(longlong param_1)

{
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  plStack_10 = local_res8;
  local_18 = &LAB_141769f80;
  local_res8[0] = param_1;
  FScriptSet::Rehash(*(undefined8 *)(param_1 + 0x10),param_1 + 0x20,&local_18);
  return;
}



// FUNCTION 14177b740 Rehash body=476 status=ok
// SIG undefined Rehash(void)

void FScriptSet::Rehash(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar2 < 4) {
    iVar10 = 1;
  }
  else {
    uVar2 = uVar2 >> 1;
    uVar3 = uVar2 + 8;
    iVar10 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar9 = '\0';
    if (uVar3 != 0) {
      iVar8 = 0x1f - iVar10;
    }
    uVar2 = uVar2 + 7;
    iVar10 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar2 != 0) {
      cVar9 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  uVar2 = 1;
  *(int *)(param_1 + 9) = iVar10;
  if (iVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation
              (plVar1,0,iVar10,4);
    iVar10 = 0;
    if (0 < (int)param_1[9]) {
      do {
        uVar6 = (ulonglong)iVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        iVar10 = iVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4) =
             0xffffffff;
      } while (iVar10 < (int)param_1[9]);
    }
    iVar8 = 0;
    iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    while (iVar10 != 0) {
      if ((-1 < iVar8) && (iVar8 < (int)param_1[5])) {
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar4 = iVar8;
        if (iVar8 < 0) {
          iVar4 = iVar8 + 0x1f;
        }
        if ((*(uint *)((longlong)plVar7 + (longlong)(iVar4 >> 5) * 4) & uVar2) != 0) {
          lVar5 = (longlong)(*(int *)(param_2 + 0x18) * iVar8) + *param_1;
          uVar3 = (*(code *)*param_3)(param_3[1]);
          uVar3 = (int)param_1[9] - 1U & uVar3;
          *(uint *)(*(int *)(param_2 + 8) + lVar5) = uVar3;
          plVar7 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar7 = plVar1;
          }
          *(undefined4 *)(*(int *)(param_2 + 4) + lVar5) =
               *(undefined4 *)
                ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
          plVar7 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar7 = plVar1;
          }
          iVar10 = iVar10 + -1;
          *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
               iVar8;
        }
      }
      iVar8 = iVar8 + 1;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    }
  }
  return;
}



// FUNCTION 14177b920 Rehash body=65 status=ok
// SIG undefined Rehash(void)

void FScriptSetHelper::Rehash(longlong param_1)

{
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  plStack_10 = local_res8;
  local_18 = &LAB_141769f80;
  local_res8[0] = param_1;
  FScriptSet::Rehash(*(undefined8 *)(param_1 + 8),param_1 + 0x10,&local_18);
  return;
}



// FUNCTION 14177b970 RemoveAt body=286 status=ok
// SIG undefined RemoveAt(void)

void FScriptSet::RemoveAt(longlong *param_1,int param_2,longlong param_3)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int *piVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = (longlong)(*(int *)(param_3 + 0x18) * param_2) + *param_1;
  lVar8 = (longlong)(int)(*(uint *)(*(int *)(param_3 + 8) + lVar9) & (int)param_1[9] - 1U);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
  piVar6 = (int *)((longlong)plVar5 + lVar8 * 4);
  do {
    if (iVar2 == -1) {
LAB_14177ba04:
      bVar3 = (byte)param_2 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(*(int *)(param_3 + 0x18) * (int)param_1[6]) + *param_1) = param_2;
      }
      uVar4 = 0xffffffff;
      puVar7 = (undefined4 *)((longlong)(param_2 * *(int *)(param_3 + 0x18)) + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      puVar7[1] = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = param_2;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar5 +
                       (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      return;
    }
    if (iVar2 == param_2) {
      *piVar6 = *(int *)(*(int *)(param_3 + 4) + lVar9);
      goto LAB_14177ba04;
    }
    piVar6 = (int *)((longlong)(*(int *)(param_3 + 0x18) * iVar2) + *param_1 +
                    (longlong)*(int *)(param_3 + 4));
    iVar2 = *piVar6;
  } while( true );
}



// FUNCTION 14177ba90 RemoveAt body=393 status=ok
// SIG undefined RemoveAt(void)

void FScriptSetHelper::RemoveAt(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  
  FUN_14176f510();
  if (param_3 != 0) {
    bVar4 = (byte)param_2 & 0x1f;
    uVar12 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    do {
      plVar3 = *(longlong **)(param_1 + 8);
      if ((-1 < param_2) && (param_2 < (int)plVar3[5])) {
        iVar5 = param_2;
        if (param_2 < 0) {
          iVar5 = param_2 + 0x1f;
        }
        lVar2 = (longlong)(iVar5 >> 5) * 4;
        plVar7 = (longlong *)plVar3[4];
        if ((longlong *)plVar3[4] == (longlong *)0x0) {
          plVar7 = plVar3 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + lVar2) & uVar12) != 0) {
          lVar11 = (longlong)(*(int *)(param_1 + 0x28) * param_2) + *plVar3;
          lVar8 = (longlong)
                  (int)(*(uint *)(*(int *)(param_1 + 0x18) + lVar11) & (int)plVar3[9] - 1U);
          plVar7 = (longlong *)plVar3[8];
          if ((longlong *)plVar3[8] == (longlong *)0x0) {
            plVar7 = plVar3 + 7;
          }
          piVar10 = (int *)((longlong)plVar7 + lVar8 * 4);
          iVar5 = *(int *)((longlong)plVar7 + lVar8 * 4);
          while (iVar5 != -1) {
            if (iVar5 == param_2) {
              *piVar10 = *(int *)(*(int *)(param_1 + 0x14) + lVar11);
              break;
            }
            piVar10 = (int *)((longlong)(*(int *)(param_1 + 0x28) * iVar5) + *plVar3 +
                             (longlong)*(int *)(param_1 + 0x14));
            iVar5 = *piVar10;
          }
          bVar4 = (byte)param_2 & 0x1f;
          if (*(int *)((longlong)plVar3 + 0x34) != 0) {
            *(int *)((longlong)(*(int *)(param_1 + 0x28) * (int)plVar3[6]) + *plVar3) = param_2;
          }
          puVar9 = (undefined4 *)((longlong)(*(int *)(param_1 + 0x28) * param_2) + *plVar3);
          *puVar9 = 0xffffffff;
          if (*(int *)((longlong)plVar3 + 0x34) < 1) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (undefined4)plVar3[6];
          }
          puVar9[1] = uVar6;
          *(int *)((longlong)plVar3 + 0x34) = *(int *)((longlong)plVar3 + 0x34) + 1;
          *(int *)(plVar3 + 6) = param_2;
          plVar7 = (longlong *)plVar3[4];
          if ((longlong *)plVar3[4] == (longlong *)0x0) {
            plVar7 = plVar3 + 2;
          }
          puVar1 = (uint *)((longlong)plVar7 + lVar2);
          *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
          param_3 = param_3 + -1;
        }
      }
      param_2 = param_2 + 1;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14177bc20 SameType body=61 status=ok
// SIG undefined SameType(void)

ulonglong USoftClassProperty::SameType(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_141761700();
  if (((char)uVar1 != '\0') &&
     (uVar1 = *(ulonglong *)(param_2 + 0x78), *(ulonglong *)(param_1 + 0x78) == uVar1)) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 14177bc60 FUN_14177bc60 body=61 status=ok
// SIG undefined FUN_14177bc60(void)

ulonglong FUN_14177bc60(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = UProperty::SameType();
  if (((char)uVar1 != '\0') &&
     (uVar1 = *(ulonglong *)(param_2 + 0x70), *(ulonglong *)(param_1 + 0x70) == uVar1)) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 14177bca0 FUN_14177bca0 body=105 status=ok
// SIG undefined FUN_14177bca0(void)

undefined8 FUN_14177bca0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = UProperty::SameType();
  if (((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x70), plVar1 != (longlong *)0x0)) &&
     (*(longlong *)(param_1 + 0x78) != 0)) {
    cVar2 = (**(code **)(*plVar1 + 0x368))(plVar1,*(undefined8 *)(param_2 + 0x70));
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x368))
                        (*(longlong **)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x78));
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14177bd10 FUN_14177bd10 body=77 status=ok
// SIG undefined FUN_14177bd10(void)

undefined8 FUN_14177bd10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = UProperty::SameType();
  if ((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x70), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x368))(plVar1,*(undefined8 *)(param_2 + 0x70));
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14177bd60 FUN_14177bd60 body=275 status=ok
// SIG undefined FUN_14177bd60(void)

void FUN_14177bd60(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  FUN_141763ae0();
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x78);
  if ((((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 8) != 0)) &&
     (lVar3 = *(longlong *)(param_1 + 0x78), lVar3 != 0)) {
    lVar2 = ULinkerPlaceholderClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_res10 = param_1;
      FUN_14174ab50(lVar3 + 0x2c8,local_res8,&local_res10,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x78) == 0) && ((*(uint *)(param_1 + 8) >> 4 & 1) == 0)) {
    lVar3 = UField::GetOwnerStruct(param_1);
    if (lVar3 != 0) {
      lVar2 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && ((*(uint *)(lVar3 + 0xb4) >> 7 & 1) != 0)) &&
         (-1 < (int)*(uint *)(lVar3 + 0xb4))) {
        UObjectBaseUtility::GetOutermost(lVar3);
        GetTransientPackage();
      }
    }
  }
  return;
}



// FUNCTION 14177be80 FUN_14177be80 body=160 status=ok
// SIG undefined FUN_14177be80(void)

void FUN_14177be80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  FUN_141763bf0();
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x70);
  if ((((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 8) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 0x70), lVar1 != 0)) {
    lVar3 = ULinkerPlaceholderFunction::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_res10 = param_1;
      FUN_14174ab50(lVar1 + 0x180,local_res8,&local_res10,0);
    }
  }
  return;
}



// FUNCTION 14177bf20 FUN_14177bf20 body=275 status=ok
// SIG undefined FUN_14177bf20(void)

void FUN_14177bf20(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  FUN_141763bf0();
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x70);
  if ((((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 8) != 0)) &&
     (lVar3 = *(longlong *)(param_1 + 0x70), lVar3 != 0)) {
    lVar2 = ULinkerPlaceholderClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_res10 = param_1;
      FUN_14174ab50(lVar3 + 0x2c8,local_res8,&local_res10,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x70) == 0) && ((*(uint *)(param_1 + 8) >> 4 & 1) == 0)) {
    lVar3 = UField::GetOwnerStruct(param_1);
    if (lVar3 != 0) {
      lVar2 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && ((*(uint *)(lVar3 + 0xb4) >> 7 & 1) != 0)) &&
         (-1 < (int)*(uint *)(lVar3 + 0xb4))) {
        UObjectBaseUtility::GetOutermost(lVar3);
        GetTransientPackage();
      }
    }
  }
  return;
}



// FUNCTION 14177c040 FUN_14177c040 body=58 status=ok
// SIG undefined FUN_14177c040(void)

void FUN_14177c040(longlong param_1,longlong *param_2)

{
  FUN_141763bf0();
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00014177c076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x78);
  return;
}



// FUNCTION 14177c080 FUN_14177c080 body=204 status=ok
// SIG undefined FUN_14177c080(void)

void FUN_14177c080(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_141763bf0();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e7db0) {
    _Init_thread_header(&DAT_1469e7db0);
    if (DAT_1469e7db0 == -1) {
      DAT_1469e7da8 = thunk_FUN_14171a370();
      _Init_thread_footer(&DAT_1469e7db0);
    }
  }
  if ((*(byte *)(param_2 + 5) & 0x40) != 0) {
    lVar1 = (**(code **)(*param_2 + 0x88))(param_2);
    if (((lVar1 != 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) &&
       (*(longlong *)(param_1 + 0x70) == 0)) {
      *(undefined8 *)(param_1 + 0x70) = DAT_1469e7da8;
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14177b200(param_1);
  }
  return;
}



// FUNCTION 14177c190 FUN_14177c190 body=111 status=ok
// SIG undefined FUN_14177c190(void)

void FUN_14177c190(undefined8 param_1,longlong *param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_2[1];
  if (puVar1 + 1 <= (undefined2 *)((undefined8 *)param_2[1])[1]) {
    *param_3 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_3,2);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_3,2);
  }
  return;
}



// FUNCTION 14177c200 FUN_14177c200 body=109 status=ok
// SIG undefined FUN_14177c200(void)

void FUN_14177c200(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *param_3 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_3,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_3,4);
  }
  return;
}



// FUNCTION 14177c270 FUN_14177c270 body=110 status=ok
// SIG undefined FUN_14177c270(void)

void FUN_14177c270(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_2[1];
  if (puVar1 + 1 <= (undefined8 *)((longlong *)param_2[1])[1]) {
    *param_3 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_3,8);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_3,8);
  }
  return;
}



// FUNCTION 14177c310 FUN_14177c310 body=40 status=ok
// SIG undefined FUN_14177c310(void)

void FUN_14177c310(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014177c334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,param_3 + 8);
  return;
}



// FUNCTION 14177c340 FUN_14177c340 body=109 status=ok
// SIG undefined FUN_14177c340(void)

void FUN_14177c340(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0x30))(param_2,param_3);
  if (((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 8) != 0)) {
    if (*param_3 != 0) {
      lVar1 = UObjectBaseUtility::GetInterfaceAddress(*param_3,*(undefined8 *)(param_1 + 0x70));
      param_3[1] = lVar1;
      return;
    }
    param_3[1] = 0;
  }
  return;
}



// FUNCTION 14177c3b0 FUN_14177c3b0 body=138 status=ok
// SIG undefined FUN_14177c3b0(void)

void FUN_14177c3b0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(byte *)((longlong)param_2 + 0x2a) & 8) == 0) ||
     ((*(byte *)((longlong)param_2 + 0x2a) & 0x10) != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x378))(param_1,param_3);
    (**(code **)(*param_2 + 0x28))(param_2,param_3);
    if ((((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 0x10) != 0))
       && (lVar2 = (**(code **)(*param_1 + 0x378))(param_1,param_3), lVar1 != lVar2)) {
      (**(code **)(*param_1 + 0x390))(param_1,param_3);
    }
  }
  return;
}



// FUNCTION 14177c440 FUN_14177c440 body=4222 status=ok
// SIG undefined FUN_14177c440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14177c440(longlong **param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  void *_Src;
  undefined1 *puVar10;
  uint uVar11;
  void *pvVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_208 [32];
  int local_1e8;
  uint local_1e4 [3];
  longlong *local_1d8;
  longlong ***ppplStack_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  uint local_1b0;
  uint uStack_1ac;
  uint *puStack_1a8;
  int local_1a0;
  int iStack_19c;
  uint uStack_198;
  undefined4 uStack_194;
  int local_190 [2];
  longlong **local_188;
  longlong *local_180;
  uint uStack_178;
  uint uStack_174;
  uint *local_170;
  uint uStack_168;
  int iStack_164;
  undefined8 local_160;
  longlong *local_158;
  undefined8 uStack_150;
  uint *puStack_148;
  uint uStack_140;
  int iStack_13c;
  undefined8 uStack_138;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  longlong local_a8;
  int local_a0;
  uint local_9c;
  uint local_98 [4];
  uint *local_88;
  ulonglong local_80;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  undefined1 *local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1c0 = param_2;
  local_188 = param_1;
  (**(code **)(*param_2 + 0x70))(param_2,param_1[0xe]);
  (**(code **)(*param_2 + 0x70))(param_2,param_1[0xf]);
  local_110 = *(undefined4 *)(param_1 + 0x10);
  uStack_10c = *(undefined4 *)((longlong)param_1 + 0x84);
  uStack_108 = *(undefined4 *)(param_1 + 0x11);
  uStack_104 = *(undefined4 *)((longlong)param_1 + 0x8c);
  local_128 = param_1[0xe];
  uVar7 = 0;
  local_100 = *(undefined4 *)(param_1 + 0x12);
  iStack_fc = *(int *)((longlong)param_1 + 0x94);
  uStack_f8 = *(undefined4 *)(param_1 + 0x13);
  uStack_f4 = *(undefined4 *)((longlong)param_1 + 0x9c);
  local_120 = param_1[0xf];
  iVar19 = *(int *)(param_1 + 0x14);
  local_e8 = local_128;
  local_e0 = local_120;
  local_d8 = param_3;
  local_d0 = local_110;
  uStack_cc = uStack_10c;
  uStack_c8 = uStack_108;
  uStack_c4 = uStack_104;
  local_c0 = local_100;
  iStack_bc = iStack_fc;
  uStack_b8 = uStack_f8;
  uStack_b4 = uStack_f4;
  local_b0 = iVar19;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_a0 = 0;
    local_74 = 0;
    local_a8 = 0;
    local_9c = 0;
    local_88 = (uint *)0x0;
    local_80 = 0;
    local_78 = 0xffffffff;
    local_68 = (undefined1 *)0x0;
    local_60 = 0;
    local_1e8 = iVar19;
    local_118 = param_4;
    local_f0 = iVar19;
    if (param_4 != (longlong *)0x0) {
      local_1e4[0] = 0;
      iVar18 = (int)param_4[1] - *(int *)((longlong)param_4 + 0x34);
      uVar6 = uVar7;
      while (iVar18 != 0) {
        uVar11 = (uint)uVar6;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (int)param_4[5])) {
          plVar8 = (longlong *)param_4[4];
          if ((longlong *)param_4[4] == (longlong *)0x0) {
            plVar8 = param_4 + 2;
          }
          uVar3 = uVar11;
          if ((int)uVar11 < 0) {
            uVar3 = uVar11 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar8 + (longlong)((int)uVar3 >> 5) * 4) >> (uVar11 & 0x1f) & 1)
              != 0) {
            iVar4 = FUN_141771a10(&local_e8,(longlong)(int)(iVar19 * uVar11) + *param_4,0);
            if (((iVar4 < 0) || ((int)local_d8[1] == *(int *)((longlong)local_d8 + 0x34))) ||
               ((longlong)(iVar4 * local_b0) + *local_d8 == 0)) {
              FUN_14044be50(&local_a8,&local_1c8,local_1e4,0);
            }
            iVar18 = iVar18 + -1;
          }
        }
        local_1e4[0] = uVar11 + 1;
        uVar6 = (ulonglong)local_1e4[0];
        param_1 = local_188;
      }
    }
    iVar19 = local_1e8;
    local_190[0] = local_a0 - local_74;
    plVar8 = (longlong *)param_2[1];
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_190,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_190,4);
      }
    }
    else {
      local_190[0] = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    ppplStack_1d0 = (longlong ***)param_1[0xe];
    if ((longlong **)param_2[0xf] == param_1) {
      local_1d8 = param_2;
      FUN_141705270(&local_1d8);
    }
    else {
      ppplStack_1d0 = (longlong ***)0x0;
      local_1d8 = param_2;
    }
    iVar18 = (int)local_80;
    local_1e4[0] = 1;
    uStack_1ac = 1;
    puStack_1a8 = local_98;
    local_1b0 = 0;
    iStack_19c = 0;
    uStack_198 = 0;
    if ((int)local_80 != 0) {
      puVar17 = local_98;
      if (local_88 != (uint *)0x0) {
        puVar17 = local_88;
      }
      uVar11 = *puVar17;
      uVar6 = uVar7;
      uVar14 = uVar7;
      while (uVar11 == 0) {
        iVar4 = (int)uVar6;
        uStack_198 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_198;
        local_1b0 = iVar4 + 1;
        uVar6 = (ulonglong)local_1b0;
        if ((int)((int)local_80 + -1 + ((int)local_80 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) {
          iStack_19c = (int)local_80;
          goto LAB_14177cda6;
        }
        uVar11 = puVar17[(longlong)iVar4 + 1];
      }
      uStack_1ac = -uVar11 & uVar11;
      iVar4 = 0x1f;
      if (uStack_1ac != 0) {
        for (; uStack_1ac >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_1ac == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      iStack_19c = (uStack_198 - iVar4) + 0x1f;
      if ((int)local_80 < iStack_19c) {
        iStack_19c = (int)local_80;
      }
    }
LAB_14177cda6:
    uStack_168 = 0xffffffff;
    iStack_164 = iStack_19c;
    local_160 = CONCAT44(uStack_194,uStack_198);
    local_158 = &local_a8;
    uStack_150 = CONCAT44(uStack_1ac,local_1b0);
    iStack_19c = (int)local_80;
    local_1a0 = -1 << ((byte)local_80 & 0x1f);
    uStack_178 = local_1b0;
    uStack_174 = uStack_1ac;
    local_170 = puStack_1a8;
    puStack_148 = puStack_1a8;
    uStack_138 = local_160;
    uStack_140 = uStack_168;
    iStack_13c = iStack_164;
    local_180 = local_158;
    while (((iStack_164 != iVar18 || (local_170 != local_98)) || (local_180 != &local_a8))) {
      uVar6 = uVar7;
      if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
        uVar6 = (longlong)(*(int *)(*local_180 + (longlong)iStack_164 * 0xc) * iVar19) + *param_4;
      }
      (**(code **)(*param_1[0xe] + 0x2c0))(param_1[0xe],param_2,uVar6,0);
      uStack_168 = uStack_168 & ~uStack_174;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_178);
    }
    FSerializedPropertyScope::PopProperty(&local_1d8);
    if (param_4 == (longlong *)0x0) {
      local_1e8 = (int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34);
      plVar8 = (longlong *)param_2[1];
      if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_1e8,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&local_1e8,4);
        }
      }
      else {
        local_1e8 = *(int *)*plVar8;
        *plVar8 = *plVar8 + 4;
      }
      if (local_1e8 != 0) {
        uVar11 = 1;
        plVar8 = local_d8;
        iVar19 = local_1e8;
        do {
          iVar18 = (int)uVar7;
          if ((-1 < iVar18) && (iVar18 < (int)plVar8[5])) {
            plVar9 = (longlong *)plVar8[4];
            if ((longlong *)plVar8[4] == (longlong *)0x0) {
              plVar9 = plVar8 + 2;
            }
            iVar4 = iVar18;
            if (iVar18 < 0) {
              iVar4 = iVar18 + 0x1f;
            }
            uVar11 = local_1e4[0];
            if ((*(uint *)((longlong)plVar9 + (longlong)(iVar4 >> 5) * 4) & local_1e4[0]) != 0) {
              plVar9 = param_1[0xe];
              lVar13 = (longlong)(local_b0 * iVar18) + *plVar8;
              if ((longlong **)param_2[0xf] == param_1) {
                local_1d8 = param_2;
                ppplStack_1d0 = (longlong ***)plVar9;
                FUN_141705270(&local_1d8);
                plVar9 = param_1[0xe];
              }
              else {
                ppplStack_1d0 = (longlong ***)0x0;
                local_1d8 = param_2;
              }
              (**(code **)(*plVar9 + 0x2c0))(plVar9,param_2,lVar13,0);
              FSerializedPropertyScope::PopProperty(&local_1d8);
              plVar8 = param_1[0xf];
              if ((longlong **)param_2[0xf] == param_1) {
                local_1c0 = param_2;
                local_1b8 = plVar8;
                FUN_141705270(&local_1c0);
                plVar8 = param_1[0xf];
              }
              else {
                local_1b8 = (longlong *)0x0;
                local_1c0 = param_2;
              }
              (**(code **)(*plVar8 + 0x2c0))
                        (plVar8,param_2,*(int *)((longlong)param_1 + 0x84) + lVar13,0);
              FSerializedPropertyScope::PopProperty(&local_1c0);
              local_1e8 = local_1e8 + -1;
              plVar8 = local_d8;
              uVar11 = local_1e4[0];
              iVar19 = local_1e8;
            }
          }
          uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
          uVar7 = (ulonglong)(iVar18 + 1);
          local_1e4[0] = uVar11;
        } while (iVar19 != 0);
      }
    }
    else {
      uVar11 = local_a0 - local_74;
      local_a0 = 0;
      if (local_9c != uVar11) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (&local_a8,uVar11);
      }
      local_78 = 0xffffffff;
      local_74 = 0;
      uVar6 = local_80 >> 0x20;
      local_80 = local_80 & 0xffffffff00000000;
      uVar3 = uVar11 + 0x1f + ((int)(uVar11 + 0x1f) >> 0x1f & 0x1fU);
      if ((uint)uVar6 != (uVar3 & 0xffffffe0)) {
        local_80 = ((ulonglong)uVar3 & 0xffffffe0) << 0x20;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(local_98,0);
      }
      if (uVar11 < 4) {
        uVar3 = 1;
      }
      else {
        uVar3 = (uVar11 >> 1) + 8;
        iVar19 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar19 == 0; iVar19 = iVar19 + -1) {
          }
        }
        if (uVar3 == 0) {
          iVar19 = 0x20;
        }
        else {
          iVar19 = 0x1f - iVar19;
        }
        uVar3 = (uVar11 >> 1) + 7;
        iVar18 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar18 == 0; iVar18 = iVar18 + -1) {
          }
        }
        if (uVar3 == 0) {
          cVar2 = '\0';
        }
        else {
          cVar2 = '\x1f' - (char)iVar18;
        }
        uVar3 = 1 << (~(byte)((iVar19 << 0x1a) >> 0x1f) & 0x20U - cVar2 & 0x1f);
      }
      uVar6 = (ulonglong)local_60;
      if (((int)uVar11 < 1) ||
         (((local_60 != 0 && ((int)uVar3 <= (int)local_60)) && ((int)local_60 <= (int)uVar3)))) {
        uVar14 = uVar7;
        uVar16 = uVar6;
        if (0 < (int)local_60) {
          while( true ) {
            puVar10 = local_70;
            if (local_68 != (undefined1 *)0x0) {
              puVar10 = local_68;
            }
            *(undefined4 *)(puVar10 + ((longlong)((int)uVar6 + -1) & uVar14) * 4) = 0xffffffff;
            if (uVar16 - 1 == 0) break;
            uVar6 = (ulonglong)local_60;
            uVar14 = uVar14 + 1;
            uVar16 = uVar16 - 1;
          }
        }
      }
      else {
        local_60 = uVar3;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(&local_a8);
      }
      iVar18 = local_1e8;
      local_1c8 = (void *)((ulonglong)local_1c8._4_4_ << 0x20);
      iVar19 = (int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34);
      local_188 = (longlong **)CONCAT44(local_188._4_4_,iVar19);
      uVar6 = uVar7;
      plVar8 = local_d8;
      while (iVar19 != 0) {
        uVar11 = (uint)uVar6;
        if ((-1 < (int)uVar11) && ((int)uVar11 < (int)plVar8[5])) {
          plVar9 = (longlong *)plVar8[4];
          if ((longlong *)plVar8[4] == (longlong *)0x0) {
            plVar9 = plVar8 + 2;
          }
          uVar3 = uVar11;
          if ((int)uVar11 < 0) {
            uVar3 = uVar11 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar9 + (longlong)((int)uVar3 >> 5) * 4) >> (uVar11 & 0x1f) & 1)
              != 0) {
            lVar13 = (longlong)(int)(local_b0 * uVar11) + *plVar8;
            iVar19 = FUN_141771a10(&local_128,lVar13,0);
            uVar6 = uVar7;
            if ((-1 < iVar19) && ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34))) {
              uVar6 = (longlong)(iVar18 * iVar19) + *param_4;
            }
            if (uVar6 == 0) {
LAB_14177d065:
              FUN_14044be50(&local_a8,&local_1e8,&local_1c8,0);
            }
            else {
              cVar2 = (**(code **)(*param_1[0xf] + 0x2b8))
                                (param_1[0xf],*(int *)((longlong)param_1 + 0x84) + lVar13,
                                 (longlong)*(int *)((longlong)param_1 + 0x84) + uVar6,0);
              if (cVar2 == '\0') goto LAB_14177d065;
            }
            iVar19 = (int)local_188 + -1;
            local_188 = (longlong **)CONCAT44(local_188._4_4_,iVar19);
            plVar8 = local_d8;
          }
        }
        uVar6 = (ulonglong)(uVar11 + 1);
        local_1c8 = (void *)CONCAT44(local_1c8._4_4_,uVar11 + 1);
        param_2 = local_1c0;
      }
      local_1e4[0] = local_a0 - local_74;
      plVar8 = (longlong *)param_2[1];
      if ((uint *)plVar8[1] < (uint *)*plVar8 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_1e4,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_1e4,4);
        }
      }
      else {
        local_1e4[0] = *(uint *)*plVar8;
        *plVar8 = *plVar8 + 4;
      }
      iVar19 = (int)local_80;
      puStack_1a8 = local_98;
      local_1b0 = 0;
      uStack_1ac = 1;
      iStack_19c = 0;
      uStack_198 = 0;
      if ((int)local_80 != 0) {
        puVar17 = local_98;
        if (local_88 != (uint *)0x0) {
          puVar17 = local_88;
        }
        uVar11 = *puVar17;
        uVar6 = uVar7;
        while (uVar11 == 0) {
          iVar18 = (int)uVar7;
          uStack_198 = (int)uVar6 + 0x20;
          uVar6 = (ulonglong)uStack_198;
          local_1b0 = iVar18 + 1;
          uVar7 = (ulonglong)local_1b0;
          if ((int)((int)local_80 + -1 + ((int)local_80 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar18) {
            iStack_19c = (int)local_80;
            goto LAB_14177d1b6;
          }
          uVar11 = puVar17[(longlong)iVar18 + 1];
        }
        uStack_1ac = -uVar11 & uVar11;
        iVar18 = 0x1f;
        if (uStack_1ac != 0) {
          for (; uStack_1ac >> iVar18 == 0; iVar18 = iVar18 + -1) {
          }
        }
        if (uStack_1ac == 0) {
          iVar18 = 0x20;
        }
        else {
          iVar18 = 0x1f - iVar18;
        }
        iStack_19c = (uStack_198 - iVar18) + 0x1f;
        if ((int)local_80 < iStack_19c) {
          iStack_19c = (int)local_80;
        }
      }
LAB_14177d1b6:
      iStack_164 = iStack_19c;
      local_160 = CONCAT44(uStack_194,uStack_198);
      local_158 = &local_a8;
      uStack_150 = CONCAT44(uStack_1ac,local_1b0);
      uStack_140 = 0xffffffff;
      iStack_13c = iStack_19c;
      local_1a0 = -1 << ((byte)local_80 & 0x1f);
      iStack_19c = (int)local_80;
      uStack_178 = local_1b0;
      uStack_174 = uStack_1ac;
      uStack_168 = 0xffffffff;
      local_170 = puStack_1a8;
      puStack_148 = puStack_1a8;
      uStack_138 = local_160;
      local_180 = local_158;
      while (((iStack_164 != iVar19 || (local_170 != local_98)) || (local_180 != &local_a8))) {
        plVar8 = param_1[0xe];
        lVar13 = (longlong)(*(int *)(*local_180 + (longlong)iStack_164 * 0xc) * local_b0) +
                 *local_d8;
        local_1d8 = param_2;
        if ((longlong **)param_2[0xf] == param_1) {
          ppplStack_1d0 = (longlong ***)plVar8;
          FUN_141705270(&local_1d8);
          plVar8 = param_1[0xe];
        }
        else {
          ppplStack_1d0 = (longlong ***)0x0;
        }
        (**(code **)(*plVar8 + 0x2c0))(plVar8,param_2,lVar13,0);
        FSerializedPropertyScope::PopProperty(&local_1d8);
        plVar8 = param_1[0xf];
        local_1c0 = param_2;
        if ((longlong **)param_2[0xf] == param_1) {
          local_1b8 = plVar8;
          FUN_141705270(&local_1c0);
          plVar8 = param_1[0xf];
        }
        else {
          local_1b8 = (longlong *)0x0;
        }
        (**(code **)(*plVar8 + 0x2c0))(plVar8,param_2,*(int *)((longlong)param_1 + 0x84) + lVar13);
        FSerializedPropertyScope::PopProperty(&local_1c0);
        uStack_168 = uStack_168 & ~uStack_174;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_178);
      }
    }
    local_60 = 0;
    if (local_68 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_a8);
  }
  else {
    if (param_4 == (longlong *)0x0) {
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        FUN_14176f320(&local_e8,0);
        plVar8 = local_d8;
        *(undefined4 *)(local_d8 + 1) = 0;
        if (*(int *)((longlong)local_d8 + 0xc) != 0) {
          FScriptArray::ResizeTo(local_d8,0,local_b0);
        }
        *(undefined4 *)(plVar8 + 6) = 0xffffffff;
        *(undefined4 *)((longlong)plVar8 + 0x34) = 0;
        *(undefined4 *)(plVar8 + 5) = 0;
        if (*(int *)((longlong)plVar8 + 0x2c) != 0) {
          *(undefined4 *)((longlong)plVar8 + 0x2c) = 0;
          FScriptBitArray::Realloc(plVar8 + 2,0);
        }
        plVar9 = (longlong *)plVar8[8];
        if ((longlong *)plVar8[8] == (longlong *)0x0) {
          plVar9 = plVar8 + 7;
        }
        uVar6 = (longlong)(int)plVar8[9] & 0x3fffffffffffffff;
        if ((longlong *)((longlong)(int)plVar8[9] * 4 + (longlong)plVar9) < plVar9) {
          uVar6 = uVar7;
        }
        if (uVar6 != 0) {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)plVar9 = 0xffffffff;
            plVar9 = (longlong *)((longlong)plVar9 + 4);
          }
        }
      }
    }
    else {
      (*(code *)(*param_1)[0x5d])(param_1,param_3,param_4,1);
    }
    plVar8 = (longlong *)param_2[1];
    local_1c8 = (void *)0x0;
    local_1e4[0] = 0;
    if ((uint *)plVar8[1] < (uint *)*plVar8 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_1e4,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_1e4,4);
      }
    }
    else {
      local_1e4[0] = *(uint *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    if (local_1e4[0] != 0) {
      local_1c8 = (void *)FMemory::Malloc((longlong)*(int *)((longlong)param_1 + 0x94));
      plVar8 = param_1[0xe];
      if ((*(uint *)(plVar8 + 7) >> 9 & 1) == 0) {
        (**(code **)(*plVar8 + 0x330))(plVar8,local_1c8);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  (local_1c8,0,(longlong)(*(int *)((longlong)plVar8 + 0x34) * (int)plVar8[6]));
      }
      ppplStack_1d0 = (longlong ***)param_1[0xe];
      if ((longlong **)param_2[0xf] == param_1) {
        local_1d8 = param_2;
        FUN_141705270(&local_1d8);
      }
      else {
        ppplStack_1d0 = (longlong ***)0x0;
        local_1d8 = param_2;
      }
      for (; local_1e4[0] != 0; local_1e4[0] = local_1e4[0] - 1) {
        (**(code **)(*param_1[0xe] + 0x2c0))(param_1[0xe],param_2,local_1c8,0);
        plVar9 = local_e8;
        pvVar12 = local_1c8;
        uVar11 = *(uint *)(local_d8 + 1);
        uVar6 = uVar7;
        uVar3 = 0;
        plVar8 = local_d8;
        uVar5 = uVar11;
        while (uVar5 != 0) {
          uVar5 = (uint)uVar6;
          if ((-1 < (int)uVar3) && ((int)uVar5 < (int)plVar8[5])) {
            plVar15 = (longlong *)plVar8[4];
            if ((longlong *)plVar8[4] == (longlong *)0x0) {
              plVar15 = plVar8 + 2;
            }
            uVar3 = uVar5;
            if ((int)uVar5 < 0) {
              uVar3 = uVar5 + 0x1f;
            }
            if (((*(uint *)((longlong)plVar15 + (longlong)((int)uVar3 >> 5) * 4) >> (uVar5 & 0x1f) &
                 1) != 0) &&
               (cVar2 = (**(code **)(*plVar9 + 0x2b8))
                                  (plVar9,pvVar12,(longlong)(int)(local_b0 * uVar5) + *plVar8),
               plVar8 = local_d8, cVar2 != '\0')) {
              if (uVar5 != 0xffffffff) {
                iVar19 = 1;
                FUN_14176f320(&local_e8,uVar6,1);
                bVar1 = (byte)uVar6 & 0x1f;
                uVar11 = 1 << bVar1 | 1U >> 0x20 - bVar1;
                plVar8 = local_d8;
                do {
                  iVar18 = (int)uVar6;
                  if ((-1 < iVar18) && (iVar18 < (int)plVar8[5])) {
                    plVar9 = (longlong *)plVar8[4];
                    if ((longlong *)plVar8[4] == (longlong *)0x0) {
                      plVar9 = plVar8 + 2;
                    }
                    iVar4 = iVar18;
                    if (iVar18 < 0) {
                      iVar4 = iVar18 + 0x1f;
                    }
                    if ((*(uint *)((longlong)plVar9 + (longlong)(iVar4 >> 5) * 4) & uVar11) != 0) {
                      FScriptSet::RemoveAt(plVar8,uVar6,&uStack_c8);
                      iVar19 = iVar19 + -1;
                      plVar8 = local_d8;
                    }
                  }
                  uVar6 = (ulonglong)(iVar18 + 1);
                  uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
                } while (iVar19 != 0);
              }
              break;
            }
          }
          uVar6 = uVar7;
          if (uVar5 + 1 != uVar11) {
            uVar6 = (ulonglong)(uVar5 + 1);
          }
          uVar3 = (uint)uVar6;
          uVar5 = uVar3;
        }
      }
      FSerializedPropertyScope::PopProperty(&local_1d8);
    }
    plVar8 = (longlong *)param_2[1];
    local_1e8 = 0;
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_1e8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_1e8,4);
      }
    }
    else {
      local_1e8 = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    if (local_1e8 != 0) {
      if (local_1c8 == (void *)0x0) {
        local_1c8 = (void *)FMemory::Malloc((longlong)*(int *)((longlong)param_1 + 0x94));
        plVar8 = param_1[0xe];
        if ((*(uint *)(plVar8 + 7) >> 9 & 1) == 0) {
          (**(code **)(*plVar8 + 0x330))(plVar8,local_1c8);
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    (local_1c8,0,(longlong)(*(int *)((longlong)plVar8 + 0x34) * (int)plVar8[6]));
        }
      }
      for (; local_1e8 != 0; local_1e8 = local_1e8 + -1) {
        plVar8 = param_1[0xe];
        if ((longlong **)param_2[0xf] == param_1) {
          local_1d8 = param_2;
          ppplStack_1d0 = (longlong ***)plVar8;
          FUN_141705270(&local_1d8);
          plVar8 = param_1[0xe];
        }
        else {
          ppplStack_1d0 = (longlong ***)0x0;
          local_1d8 = param_2;
        }
        (**(code **)(*plVar8 + 0x2c0))(plVar8,param_2,local_1c8,0);
        FSerializedPropertyScope::PopProperty(&local_1d8);
        plVar9 = local_e8;
        pvVar12 = local_1c8;
        uVar11 = *(uint *)(local_d8 + 1);
        uVar6 = uVar7;
        uVar3 = 0;
        plVar8 = local_d8;
        uVar5 = uVar11;
        while (uVar5 != 0) {
          uVar5 = (uint)uVar6;
          if ((-1 < (int)uVar3) && ((int)uVar5 < (int)plVar8[5])) {
            plVar15 = (longlong *)plVar8[4];
            if ((longlong *)plVar8[4] == (longlong *)0x0) {
              plVar15 = plVar8 + 2;
            }
            uVar3 = uVar5;
            if ((int)uVar5 < 0) {
              uVar3 = uVar5 + 0x1f;
            }
            if (((*(uint *)((longlong)plVar15 + (longlong)((int)uVar3 >> 5) * 4) >> (uVar5 & 0x1f) &
                 1) != 0) &&
               (cVar2 = (**(code **)(*plVar9 + 0x2b8))
                                  (plVar9,pvVar12,(longlong)(int)(local_b0 * uVar5) + *plVar8),
               plVar8 = local_d8, cVar2 != '\0')) {
              if (uVar5 != 0xffffffff) goto LAB_14177ca17;
              break;
            }
          }
          uVar6 = uVar7;
          if (uVar5 + 1 != uVar11) {
            uVar6 = (ulonglong)(uVar5 + 1);
          }
          uVar3 = (uint)uVar6;
          uVar5 = uVar3;
        }
        uVar5 = FUN_141769b40(plVar8);
        uVar11 = *(uint *)(local_e0 + 7);
        uVar3 = *(uint *)(local_e8 + 7);
        pvVar12 = (void *)((longlong)(int)(local_b0 * uVar5) + *local_d8);
        if ((((uVar3 >> 9 & 1) == 0) && ((uVar11 >> 9 & 1) == 0)) ||
           (_guard_xfg_dispatch_icall_nop(pvVar12,0,(longlong)iStack_bc), (uVar3 >> 9 & 1) == 0)) {
          if ((*(uint *)(local_e8 + 7) >> 9 & 1) == 0) {
            (**(code **)(*local_e8 + 0x330))(local_e8);
          }
          else {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)*(int *)((longlong)local_e8 + 0x44) + (longlong)pvVar12),0
                       ,(longlong)(*(int *)((longlong)local_e8 + 0x34) * (int)local_e8[6]));
          }
        }
        if ((uVar11 >> 9 & 1) == 0) {
          if ((*(uint *)(local_e0 + 7) >> 9 & 1) == 0) {
            (**(code **)(*local_e0 + 0x330))
                      (local_e0,(longlong)*(int *)((longlong)local_e0 + 0x44) + (longlong)pvVar12);
          }
          else {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)*(int *)((longlong)local_e0 + 0x44) + (longlong)pvVar12),0
                       ,(longlong)(*(int *)((longlong)local_e0 + 0x34) * (int)local_e0[6]));
          }
        }
LAB_14177ca17:
        plVar8 = param_1[0xe];
        _Src = (void *)((longlong)local_1c8 + (longlong)*(int *)((longlong)plVar8 + 0x44));
        lVar13 = (longlong)(int)(local_b0 * uVar5) + *local_d8;
        pvVar12 = (void *)(*(int *)((longlong)plVar8 + 0x44) + lVar13);
        if (pvVar12 != _Src) {
          if ((*(uint *)(plVar8 + 7) >> 0x1e & 1) == 0) {
            (**(code **)(*plVar8 + 0x2e8))(plVar8,pvVar12,_Src);
          }
          else {
            _guard_xfg_dispatch_icall_nop
                      (pvVar12,_Src,(longlong)(*(int *)((longlong)plVar8 + 0x34) * (int)plVar8[6]));
          }
        }
        plVar8 = param_1[0xf];
        if ((longlong **)param_2[0xf] == param_1) {
          local_1c0 = param_2;
          local_1b8 = plVar8;
          FUN_141705270(&local_1c0);
          plVar8 = param_1[0xf];
        }
        else {
          local_1b8 = (longlong *)0x0;
          local_1c0 = param_2;
        }
        (**(code **)(*plVar8 + 0x2c0))(plVar8,param_2,*(int *)((longlong)param_1 + 0x84) + lVar13);
        FSerializedPropertyScope::PopProperty(&local_1c0);
      }
    }
    local_188 = &local_e8;
    ppplStack_1d0 = &local_188;
    local_1d8 = (longlong *)&LAB_141769f80;
    FScriptSet::Rehash(local_d8,&uStack_c8,&local_1d8);
    if (local_1c8 != (void *)0x0) {
      plVar8 = param_1[0xe];
      if ((~(byte)((ulonglong)plVar8[7] >> 0x24) & 1) != 0) {
        (**(code **)(*plVar8 + 0x328))(plVar8,local_1c8);
      }
      FMemory::Free(local_1c8);
    }
  }
  return;
}



// FUNCTION 14177d4c0 SerializeItem body=66 status=ok
// SIG undefined SerializeItem(void)

void UMulticastDelegateProperty::SerializeItem
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  if ((*(byte *)(param_2 + 0x28) & 2) != 0) {
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_3);
  }
  FUN_1417695f0(param_2,param_3);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_3);
  }
  return;
}



// FUNCTION 14177d510 FUN_14177d510 body=320 status=ok
// SIG undefined FUN_14177d510(void)

void FUN_14177d510(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res10;
  
  if ((*(byte *)((longlong)param_2 + 0x2a) & 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014177d546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_2,param_3);
    return;
  }
  local_res10 = (**(code **)(*param_1 + 0x378))(param_1,param_3);
  (**(code **)(*param_2 + 0x30))(param_2,&local_res10);
  lVar3 = (**(code **)(*param_1 + 0x378))(param_1,param_3);
  if (local_res10 == lVar3) {
    return;
  }
  (**(code **)(*param_1 + 0x380))(param_1,param_3);
  lVar3 = local_res10;
  if (local_res10 == 0) goto LAB_14177d631;
  lVar4 = ULinkerPlaceholderExportObject::GetPrivateStaticClass();
  lVar2 = local_res10;
  lVar5 = *(longlong *)(lVar3 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar3 = lVar3 + 0x28;
  }
  else {
    if (local_res10 == 0) goto LAB_14177d631;
    lVar5 = ULinkerPlaceholderClass::GetPrivateStaticClass();
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14177d631;
    lVar3 = lVar2 + 0x200;
  }
  FUN_14174fcc0(lVar3,param_1,param_3);
LAB_14177d631:
  (**(code **)(*param_1 + 0x390))(param_1,param_3);
  return;
}



// FUNCTION 14177d650 FUN_14177d650 body=3841 status=ok
// SIG undefined FUN_14177d650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14177d650(longlong **param_1,longlong **param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  longlong **pplVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  void *pvVar17;
  void *_Dst;
  longlong lVar18;
  longlong **pplVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStack_1f8 [32];
  uint local_1d8 [2];
  int local_1d0 [2];
  void *local_1c8 [2];
  longlong **local_1b8;
  longlong ***ppplStack_1b0;
  longlong **local_1a8;
  longlong **local_1a0;
  longlong *local_198;
  uint local_190;
  uint uStack_18c;
  uint *puStack_188;
  int local_180;
  int iStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  int local_170 [2];
  ulonglong local_168;
  longlong *local_160;
  uint uStack_158;
  uint uStack_154;
  uint *local_150;
  uint uStack_148;
  int iStack_144;
  undefined8 local_140;
  longlong *local_138;
  undefined8 uStack_130;
  uint *puStack_128;
  uint uStack_120;
  int iStack_11c;
  undefined8 uStack_118;
  longlong *local_110;
  longlong *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  longlong *local_f0;
  int local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  longlong *local_c0;
  int local_b8;
  longlong local_a8;
  undefined8 local_a0;
  uint local_98 [4];
  uint *local_88;
  ulonglong local_80;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  undefined1 *local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_1b8 = param_1;
  local_1a8 = param_2;
  (*(code *)(*param_2)[0xe])(param_2,param_1[0xe]);
  pplVar19 = local_1b8;
  local_100 = *(undefined4 *)(param_1 + 0xf);
  uStack_fc = *(undefined4 *)((longlong)param_1 + 0x7c);
  uStack_f8 = *(undefined4 *)(param_1 + 0x10);
  uStack_f4 = *(uint *)((longlong)param_1 + 0x84);
  plVar13 = param_1[0xe];
  uVar10 = 0;
  local_f0 = param_1[0x11];
  iVar6 = *(int *)(param_1 + 0x12);
  uVar21 = 0;
  local_e0 = plVar13;
  local_d8 = param_3;
  local_d0 = local_100;
  uStack_cc = uStack_fc;
  uStack_c8 = uStack_f8;
  uStack_c4 = uStack_f4;
  local_c0 = local_f0;
  local_b8 = iVar6;
  if (((ulonglong)param_2[5] & 1) == 0) {
    local_a8 = 0;
    local_a0 = 0;
    local_88 = (uint *)0x0;
    local_80 = 0;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (undefined1 *)0x0;
    local_60 = 0;
    local_a0._0_4_ = uVar21;
    local_1d0[0] = iVar6;
    local_110 = plVar13;
    local_108 = param_4;
    local_e8 = iVar6;
    if (param_4 != (longlong *)0x0) {
      iVar16 = (int)param_4[1] - *(int *)((longlong)param_4 + 0x34);
      local_168 = CONCAT44(local_168._4_4_,iVar16);
      local_1d8[0] = 0;
      uVar7 = uVar10;
      if (iVar16 != 0) {
        do {
          uVar20 = (uint)uVar7;
          iVar4 = iVar6 * uVar20;
          lVar18 = *param_4;
          if ((-1 < (int)uVar20) && ((int)uVar20 < (int)param_4[5])) {
            plVar12 = (longlong *)param_4[4];
            if ((longlong *)param_4[4] == (longlong *)0x0) {
              plVar12 = param_4 + 2;
            }
            uVar5 = uVar20;
            if ((int)uVar20 < 0) {
              uVar5 = uVar20 + 0x1f;
            }
            iVar6 = local_1d0[0];
            if ((*(uint *)((longlong)plVar12 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar20 & 0x1f) &
                1) != 0) {
              uVar20 = *(uint *)(param_3 + 1);
              uVar7 = uVar10;
              uVar5 = uVar21;
              uVar1 = uVar20;
              while (uVar1 != 0) {
                uVar1 = (uint)uVar7;
                if ((-1 < (int)uVar5) && ((int)uVar1 < (int)param_3[5])) {
                  plVar12 = (longlong *)param_3[4];
                  if ((longlong *)param_3[4] == (longlong *)0x0) {
                    plVar12 = param_3 + 2;
                  }
                  uVar5 = uVar1;
                  if ((int)uVar1 < 0) {
                    uVar5 = uVar1 + 0x1f;
                  }
                  if (((*(uint *)((longlong)plVar12 + (longlong)((int)uVar5 >> 5) * 4) >>
                        (uVar1 & 0x1f) & 1) != 0) &&
                     (cVar3 = (**(code **)(*plVar13 + 0x2b8))
                                        (plVar13,iVar4 + lVar18,
                                         (longlong)(int)(uVar1 * local_b8) + *param_3,0),
                     param_3 = local_d8, cVar3 != '\0')) {
                    if (uVar1 != 0xffffffff) goto LAB_14177de48;
                    break;
                  }
                }
                uVar7 = uVar10;
                if (uVar1 + 1 != uVar20) {
                  uVar7 = (ulonglong)(uVar1 + 1);
                }
                uVar5 = (uint)uVar7;
                uVar1 = uVar5;
              }
              FUN_14044be50(&local_a8,local_1c8,local_1d8,0);
LAB_14177de48:
              iVar16 = (int)local_168 + -1;
              local_168 = CONCAT44(local_168._4_4_,iVar16);
              param_3 = local_d8;
              plVar13 = local_e0;
              iVar6 = local_1d0[0];
              uVar20 = local_1d8[0];
            }
          }
          local_1d8[0] = uVar20 + 1;
          uVar7 = (ulonglong)local_1d8[0];
        } while (iVar16 != 0);
        param_1 = local_1b8;
        param_2 = local_1a8;
      }
    }
    local_170[0] = (uint)local_a0 - local_74;
    plVar13 = param_2[1];
    if ((int *)plVar13[1] < (int *)*plVar13 + 1) {
      (*(code *)(*param_2)[10])(param_2,local_170,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_170,4);
      }
    }
    else {
      local_170[0] = *(int *)*plVar13;
      *plVar13 = *plVar13 + 4;
    }
    local_198 = param_1[0xe];
    local_1a0 = param_2;
    if ((longlong **)param_2[0xf] == param_1) {
      FUN_141705270(&local_1a0);
    }
    else {
      local_198 = (longlong *)0x0;
    }
    pplVar2 = local_1a8;
    pplVar19 = local_1b8;
    iVar6 = local_1d0[0];
    iVar16 = (int)local_80;
    puStack_188 = local_98;
    local_190 = 0;
    uVar21 = 1;
    uStack_18c = 1;
    iStack_17c = 0;
    uStack_178 = 0;
    if ((int)local_80 != 0) {
      puVar8 = local_98;
      if (local_88 != (uint *)0x0) {
        puVar8 = local_88;
      }
      uVar20 = *puVar8;
      uVar7 = uVar10;
      uVar15 = uVar10;
      while (uVar20 == 0) {
        iVar4 = (int)uVar7;
        uStack_178 = (int)uVar15 + 0x20;
        uVar15 = (ulonglong)uStack_178;
        local_190 = iVar4 + 1;
        uVar7 = (ulonglong)local_190;
        if ((int)((int)local_80 + -1 + ((int)local_80 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) {
          iStack_17c = (int)local_80;
          goto LAB_14177dfb3;
        }
        uVar20 = puVar8[(longlong)iVar4 + 1];
      }
      uStack_18c = -uVar20 & uVar20;
      iVar4 = 0x1f;
      if (uStack_18c != 0) {
        for (; uStack_18c >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_18c == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      iStack_17c = (uStack_178 - iVar4) + 0x1f;
      if ((int)local_80 < iStack_17c) {
        iStack_17c = (int)local_80;
      }
    }
LAB_14177dfb3:
    uStack_148 = 0xffffffff;
    iStack_144 = iStack_17c;
    local_140 = CONCAT44(uStack_174,uStack_178);
    uStack_130 = CONCAT44(uStack_18c,local_190);
    local_138 = &local_a8;
    iStack_17c = (int)local_80;
    local_180 = -1 << ((byte)local_80 & 0x1f);
    uStack_158 = local_190;
    uStack_154 = uStack_18c;
    local_150 = puStack_188;
    puStack_128 = puStack_188;
    uStack_118 = local_140;
    uStack_120 = uStack_148;
    iStack_11c = iStack_144;
    local_160 = local_138;
    while (((iStack_144 != iVar16 || (local_150 != local_98)) || (local_160 != &local_a8))) {
      uVar7 = uVar10;
      if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
        uVar7 = (longlong)(*(int *)(*local_160 + (longlong)iStack_144 * 0xc) * iVar6) + *param_4;
      }
      (**(code **)(*pplVar19[0xe] + 0x2c0))(pplVar19[0xe],pplVar2,uVar7,0);
      uStack_148 = uStack_148 & ~uStack_154;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_158);
    }
    FSerializedPropertyScope::PopProperty(&local_1a0);
    lVar18 = local_a0;
    if (param_4 == (longlong *)0x0) {
      local_1d0[0] = (int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34);
      plVar13 = pplVar2[1];
      if ((int *)plVar13[1] < (int *)*plVar13 + 1) {
        (*(code *)(*pplVar2)[10])(pplVar2,local_1d0,4);
        if ((*(byte *)((longlong)pplVar2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(pplVar2,local_1d0,4);
        }
      }
      else {
        local_1d0[0] = *(int *)*plVar13;
        *plVar13 = *plVar13 + 4;
      }
      local_1a0 = pplVar2;
      local_198 = local_1b8[0xe];
      if ((longlong **)pplVar2[0xf] == local_1b8) {
        FUN_141705270(&local_1a0);
        iVar6 = local_1d0[0];
        plVar13 = local_d8;
      }
      else {
        local_198 = (longlong *)0x0;
        iVar6 = local_1d0[0];
        plVar13 = local_d8;
      }
      while (iVar6 != 0) {
        iVar16 = (int)uVar10;
        if ((-1 < iVar16) && (iVar16 < (int)plVar13[5])) {
          plVar12 = (longlong *)plVar13[4];
          if ((longlong *)plVar13[4] == (longlong *)0x0) {
            plVar12 = plVar13 + 2;
          }
          iVar4 = iVar16;
          if (iVar16 < 0) {
            iVar4 = iVar16 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) & uVar21) != 0) {
            (**(code **)(*local_1b8[0xe] + 0x2c0))
                      (local_1b8[0xe],pplVar2,(longlong)(local_b8 * iVar16) + *plVar13,0);
            iVar6 = local_1d0[0] + -1;
            plVar13 = local_d8;
            local_1d0[0] = iVar6;
          }
        }
        uVar10 = (ulonglong)(iVar16 + 1);
        uVar21 = uVar21 << 1 | (uint)((int)uVar21 < 0);
      }
      FSerializedPropertyScope::PopProperty(&local_1a0);
    }
    else {
      uVar21 = local_a0._4_4_;
      local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
      if ((lVar18 < 0) && (uVar21 != 0)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (&local_a8,0);
      }
      local_78 = 0xffffffff;
      local_74 = 0;
      puVar8 = local_98;
      if (local_88 != (uint *)0x0) {
        puVar8 = local_88;
      }
      _guard_xfg_dispatch_icall_nop
                (puVar8,0,(longlong)
                          ((int)((int)local_80 + 0x1f + ((int)local_80 + 0x1f >> 0x1f & 0x1fU)) >> 5
                          ) << 2);
      iVar6 = local_1d0[0];
      local_80 = local_80 & 0xffffffff00000000;
      if (0 < (int)local_60) {
        uVar15 = (ulonglong)local_60;
        uVar7 = uVar10;
        do {
          puVar11 = local_70;
          if (local_68 != (undefined1 *)0x0) {
            puVar11 = local_68;
          }
          uVar9 = (longlong)(int)(local_60 - 1) & uVar7;
          uVar7 = uVar7 + 1;
          *(undefined4 *)(puVar11 + uVar9 * 4) = 0xffffffff;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      local_168 = local_168 & 0xffffffff00000000;
      iVar16 = (int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34);
      uVar7 = uVar10;
      pplVar19 = local_1a8;
      plVar13 = local_d8;
      while (local_1a8 = pplVar19, iVar16 != 0) {
        uVar21 = (uint)uVar7;
        if ((-1 < (int)uVar21) && ((int)uVar21 < (int)plVar13[5])) {
          plVar12 = (longlong *)plVar13[4];
          if ((longlong *)plVar13[4] == (longlong *)0x0) {
            plVar12 = plVar13 + 2;
          }
          uVar20 = uVar21;
          if ((int)uVar21 < 0) {
            uVar20 = uVar21 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar12 + (longlong)((int)uVar20 >> 5) * 4) >> (uVar21 & 0x1f) &
              1) != 0) {
            iVar4 = FUN_141771940(&local_110,(longlong)(int)(local_b8 * uVar21) + *plVar13,0);
            if (((iVar4 < 0) || ((int)param_4[1] == *(int *)((longlong)param_4 + 0x34))) ||
               ((longlong)(iVar4 * iVar6) + *param_4 == 0)) {
              FUN_14044be50(&local_a8,local_1c8,&local_168,0);
            }
            iVar16 = iVar16 + -1;
            plVar13 = local_d8;
          }
        }
        uVar7 = (ulonglong)(uVar21 + 1);
        local_168 = CONCAT44(local_168._4_4_,uVar21 + 1);
        pplVar19 = local_1a8;
      }
      local_1d8[0] = (uint)local_a0 - local_74;
      plVar13 = pplVar19[1];
      if ((uint *)plVar13[1] < (uint *)*plVar13 + 1) {
        (*(code *)(*pplVar19)[10])(pplVar19,local_1d8,4);
        if ((*(byte *)((longlong)pplVar19 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(pplVar19,local_1d8,4);
        }
      }
      else {
        local_1d8[0] = *(uint *)*plVar13;
        *plVar13 = *plVar13 + 4;
      }
      local_198 = local_1b8[0xe];
      local_1a0 = pplVar19;
      if ((longlong **)pplVar19[0xf] == local_1b8) {
        FUN_141705270(&local_1a0);
      }
      else {
        local_198 = (longlong *)0x0;
      }
      pplVar2 = local_1b8;
      iVar6 = (int)local_80;
      puStack_188 = local_98;
      local_190 = 0;
      uStack_18c = 1;
      iStack_17c = 0;
      uStack_178 = 0;
      if ((int)local_80 != 0) {
        puVar8 = local_98;
        if (local_88 != (uint *)0x0) {
          puVar8 = local_88;
        }
        uVar21 = *puVar8;
        uVar7 = uVar10;
        while (uVar21 == 0) {
          iVar16 = (int)uVar10;
          uStack_178 = (int)uVar7 + 0x20;
          uVar7 = (ulonglong)uStack_178;
          local_190 = iVar16 + 1;
          uVar10 = (ulonglong)local_190;
          if ((int)((int)local_80 + -1 + ((int)local_80 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar16) {
            iStack_17c = (int)local_80;
            goto LAB_14177e333;
          }
          uVar21 = puVar8[(longlong)iVar16 + 1];
        }
        uStack_18c = -uVar21 & uVar21;
        iVar16 = 0x1f;
        if (uStack_18c != 0) {
          for (; uStack_18c >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        if (uStack_18c == 0) {
          iVar16 = 0x20;
        }
        else {
          iVar16 = 0x1f - iVar16;
        }
        iStack_17c = (uStack_178 - iVar16) + 0x1f;
        if ((int)local_80 < iStack_17c) {
          iStack_17c = (int)local_80;
        }
      }
LAB_14177e333:
      iStack_11c = iStack_17c;
      local_140 = CONCAT44(uStack_174,uStack_178);
      uStack_130 = CONCAT44(uStack_18c,local_190);
      iStack_17c = (int)local_80;
      uStack_120 = 0xffffffff;
      local_180 = -1 << ((byte)local_80 & 0x1f);
      local_138 = &local_a8;
      uStack_158 = local_190;
      uStack_154 = uStack_18c;
      uStack_148 = 0xffffffff;
      iStack_144 = iStack_11c;
      local_150 = puStack_188;
      puStack_128 = puStack_188;
      uStack_118 = local_140;
      local_160 = local_138;
      while (((iStack_144 != iVar6 || (local_150 != local_98)) || (local_160 != &local_a8))) {
        (**(code **)(*pplVar2[0xe] + 0x2c0))
                  (pplVar2[0xe],pplVar19,
                   (longlong)(*(int *)(*local_160 + (longlong)iStack_144 * 0xc) * local_b8) +
                   *local_d8,0);
        uStack_148 = uStack_148 & ~uStack_154;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_158);
      }
      FSerializedPropertyScope::PopProperty(&local_1a0);
    }
    local_60 = 0;
    if (local_68 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_a8);
  }
  else {
    if (param_4 == (longlong *)0x0) {
      iVar6 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
      if (iVar6 != 0) {
        if ((plVar13[7] & 0x1040000000U) == 0) {
          uVar15 = (ulonglong)uStack_f4;
          uVar20 = 1;
          lVar18 = *param_3;
          uVar7 = uVar10;
          local_168 = uVar15;
          do {
            iVar16 = (int)uVar7;
            if ((-1 < iVar16) && (iVar16 < (int)param_3[5])) {
              plVar12 = (longlong *)param_3[4];
              if ((longlong *)param_3[4] == (longlong *)0x0) {
                plVar12 = param_3 + 2;
              }
              iVar4 = iVar16;
              if (iVar16 < 0) {
                iVar4 = iVar16 + 0x1f;
              }
              if ((*(uint *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) & uVar20) != 0) {
                if ((~(byte)((ulonglong)plVar13[7] >> 0x24) & 1) != 0) {
                  (**(code **)(*plVar13 + 0x328))
                            (plVar13,*(int *)((longlong)plVar13 + 0x44) + lVar18);
                  param_3 = local_d8;
                  uVar15 = local_168;
                  plVar13 = local_e0;
                }
                iVar6 = iVar6 + -1;
              }
            }
            lVar18 = lVar18 + uVar15;
            uVar20 = uVar20 << 1 | (uint)((int)uVar20 < 0);
            uVar7 = (ulonglong)(iVar16 + 1);
            param_2 = local_1a8;
          } while (iVar6 != 0);
        }
        *(undefined4 *)(param_3 + 1) = 0;
        if (*(int *)((longlong)param_3 + 0xc) != 0) {
          FScriptArray::ResizeTo(param_3,0,local_b8);
        }
        *(undefined4 *)(param_3 + 6) = 0xffffffff;
        *(undefined4 *)((longlong)param_3 + 0x34) = 0;
        *(undefined4 *)(param_3 + 5) = 0;
        if (*(int *)((longlong)param_3 + 0x2c) != 0) {
          *(undefined4 *)((longlong)param_3 + 0x2c) = 0;
          FScriptBitArray::Realloc(param_3 + 2,0);
        }
        plVar13 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar13 = param_3 + 7;
        }
        uVar7 = (longlong)(int)param_3[9] & 0x3fffffffffffffff;
        if ((longlong *)((longlong)plVar13 + (longlong)(int)param_3[9] * 4) < plVar13) {
          uVar7 = uVar10;
        }
        pplVar19 = local_1b8;
        if (uVar7 != 0) {
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)plVar13 = 0xffffffff;
            plVar13 = (longlong *)((longlong)plVar13 + 4);
          }
        }
      }
    }
    else {
      (*(code *)(*local_1b8)[0x5d])(local_1b8,param_3,param_4,1);
    }
    plVar13 = param_2[1];
    local_1c8[0] = (void *)0x0;
    local_1d8[0] = 0;
    if ((uint *)plVar13[1] < (uint *)*plVar13 + 1) {
      (*(code *)(*param_2)[10])(param_2,local_1d8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_1d8,4);
      }
    }
    else {
      local_1d8[0] = *(uint *)*plVar13;
      *plVar13 = *plVar13 + 4;
    }
    if (local_1d8[0] != 0) {
      local_1c8[0] = (void *)FMemory::Malloc((longlong)*(int *)((longlong)pplVar19 + 0x84));
      plVar13 = pplVar19[0xe];
      if ((*(uint *)(plVar13 + 7) >> 9 & 1) == 0) {
        (**(code **)(*plVar13 + 0x330))(plVar13,local_1c8[0]);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  (local_1c8[0],0,(longlong)(*(int *)((longlong)plVar13 + 0x34) * (int)plVar13[6]));
      }
      ppplStack_1b0 = (longlong ***)pplVar19[0xe];
      local_1b8 = param_2;
      if ((longlong **)param_2[0xf] == pplVar19) {
        FUN_141705270(&local_1b8);
      }
      else {
        ppplStack_1b0 = (longlong ***)0x0;
      }
      for (; local_1d8[0] != 0; local_1d8[0] = local_1d8[0] - 1) {
        (**(code **)(*pplVar19[0xe] + 0x2c0))(pplVar19[0xe],param_2,local_1c8[0],0);
        plVar12 = local_e0;
        pvVar17 = local_1c8[0];
        uVar20 = *(uint *)(local_d8 + 1);
        uVar7 = uVar10;
        uVar5 = uVar21;
        plVar13 = local_d8;
        uVar1 = uVar20;
        while (uVar1 != 0) {
          uVar1 = (uint)uVar7;
          if ((-1 < (int)uVar5) && ((int)uVar1 < (int)plVar13[5])) {
            plVar14 = (longlong *)plVar13[4];
            if ((longlong *)plVar13[4] == (longlong *)0x0) {
              plVar14 = plVar13 + 2;
            }
            uVar5 = uVar1;
            if ((int)uVar1 < 0) {
              uVar5 = uVar1 + 0x1f;
            }
            if (((*(uint *)((longlong)plVar14 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar1 & 0x1f) &
                 1) != 0) &&
               (cVar3 = (**(code **)(*plVar12 + 0x2b8))
                                  (plVar12,pvVar17,(longlong)(int)(local_b8 * uVar1) + *plVar13),
               plVar13 = local_d8, cVar3 != '\0')) {
              if (uVar1 != 0xffffffff) {
                FScriptSetHelper::RemoveAt(&local_e0,uVar7,1);
              }
              break;
            }
          }
          uVar7 = uVar10;
          if (uVar1 + 1 != uVar20) {
            uVar7 = (ulonglong)(uVar1 + 1);
          }
          uVar5 = (uint)uVar7;
          uVar1 = uVar5;
        }
        param_2 = local_1a8;
      }
      FSerializedPropertyScope::PopProperty(&local_1b8);
    }
    plVar13 = param_2[1];
    local_1d0[0] = 0;
    if ((int *)plVar13[1] < (int *)*plVar13 + 1) {
      (*(code *)(*param_2)[10])(param_2,local_1d0,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_1d0,4);
      }
    }
    else {
      local_1d0[0] = *(int *)*plVar13;
      *plVar13 = *plVar13 + 4;
    }
    if ((local_1d0[0] != 0) && (local_1c8[0] == (void *)0x0)) {
      local_1c8[0] = (void *)FMemory::Malloc((longlong)*(int *)((longlong)pplVar19 + 0x84));
      plVar13 = pplVar19[0xe];
      if ((*(uint *)(plVar13 + 7) >> 9 & 1) == 0) {
        (**(code **)(*plVar13 + 0x330))(plVar13,local_1c8[0]);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  (local_1c8[0],0,(longlong)(*(int *)((longlong)plVar13 + 0x34) * (int)plVar13[6]));
      }
    }
    local_198 = pplVar19[0xe];
    local_1a0 = param_2;
    if ((longlong **)param_2[0xf] == pplVar19) {
      FUN_141705270(&local_1a0);
    }
    else {
      local_198 = (longlong *)0x0;
    }
    for (; local_1d0[0] != 0; local_1d0[0] = local_1d0[0] + -1) {
      (**(code **)(*pplVar19[0xe] + 0x2c0))(pplVar19[0xe],param_2,local_1c8[0],0);
      plVar12 = local_e0;
      pvVar17 = local_1c8[0];
      uVar20 = *(uint *)(local_d8 + 1);
      uVar7 = uVar10;
      uVar5 = uVar21;
      plVar13 = local_d8;
      uVar1 = uVar20;
      while (uVar1 != 0) {
        uVar1 = (uint)uVar7;
        if ((-1 < (int)uVar5) && ((int)uVar1 < (int)plVar13[5])) {
          plVar14 = (longlong *)plVar13[4];
          if ((longlong *)plVar13[4] == (longlong *)0x0) {
            plVar14 = plVar13 + 2;
          }
          uVar5 = uVar1;
          if ((int)uVar1 < 0) {
            uVar5 = uVar1 + 0x1f;
          }
          if (((*(uint *)((longlong)plVar14 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar1 & 0x1f) & 1
               ) != 0) &&
             (cVar3 = (**(code **)(*plVar12 + 0x2b8))
                                (plVar12,pvVar17,(longlong)(int)(local_b8 * uVar1) + *plVar13),
             plVar13 = local_d8, cVar3 != '\0')) {
            if (uVar1 != 0xffffffff) goto LAB_14177dc59;
            break;
          }
        }
        uVar7 = uVar10;
        if (uVar1 + 1 != uVar20) {
          uVar7 = (ulonglong)(uVar1 + 1);
        }
        uVar5 = (uint)uVar7;
        uVar1 = uVar5;
      }
      iVar6 = FUN_141769b40(plVar13,&local_d0);
      pvVar17 = (void *)((longlong)(local_b8 * iVar6) + *local_d8);
      if (((ulonglong)local_e0[7] >> 9 & 1) == 0) {
        if (((ulonglong)local_e0[7] >> 9 & 1) == 0) {
          (**(code **)(*local_e0 + 0x330))
                    (local_e0,(longlong)*(int *)((longlong)local_e0 + 0x44) + (longlong)pvVar17);
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)*(int *)((longlong)local_e0 + 0x44) + (longlong)pvVar17),0,
                     (longlong)(*(int *)((longlong)local_e0 + 0x34) * (int)local_e0[6]));
        }
      }
      else {
        _guard_xfg_dispatch_icall_nop(pvVar17,0,(longlong)(int)uStack_c4);
      }
      plVar13 = pplVar19[0xe];
      pvVar17 = (void *)((longlong)local_1c8[0] + (longlong)*(int *)((longlong)plVar13 + 0x44));
      _Dst = (void *)((longlong)(local_b8 * iVar6) + (longlong)*(int *)((longlong)plVar13 + 0x44) +
                     *local_d8);
      if (_Dst != pvVar17) {
        if ((*(uint *)(plVar13 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*plVar13 + 0x2e8))(plVar13,_Dst,pvVar17);
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    (_Dst,pvVar17,(longlong)(*(int *)((longlong)plVar13 + 0x34) * (int)plVar13[6]));
        }
      }
LAB_14177dc59:
      param_2 = local_1a8;
    }
    local_1a8 = &local_e0;
    ppplStack_1b0 = &local_1a8;
    local_1b8 = (longlong **)&LAB_141769f80;
    FScriptSet::Rehash(local_d8,&local_d0,&local_1b8);
    FSerializedPropertyScope::PopProperty(&local_1a0);
    if (local_1c8[0] != (void *)0x0) {
      plVar13 = pplVar19[0xe];
      if ((~(byte)((ulonglong)plVar13[7] >> 0x24) & 1) != 0) {
        (**(code **)(*plVar13 + 0x328))(plVar13,local_1c8[0]);
      }
      FMemory::Free(local_1c8[0]);
    }
  }
  return;
}



// FUNCTION 14177e560 FUN_14177e560 body=231 status=ok
// SIG undefined FUN_14177e560(void)

void FUN_14177e560(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  if ((((*(byte *)((longlong)param_2 + 0x2a) & 8) == 0) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 0x10) != 0)) || ((*(byte *)(param_2 + 5) & 0x40) != 0)
     ) {
    local_18 = 0;
    local_30 = *param_3;
    local_2c = param_3[1];
    local_28 = param_3[2];
    local_48 = *(undefined8 *)(param_3 + 4);
    local_10 = 0;
    local_20 = 0;
    FString::FString(local_40,param_3 + 6);
    FSoftObjectPath::operator=(&local_20,&local_48);
    (**(code **)(*param_2 + 0x20))(param_2,param_3);
    if (((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 0x10) != 0))
    {
      cVar1 = FSoftObjectPath::operator==(&local_20,param_3 + 4);
      if (cVar1 == '\0') {
        (**(code **)(*param_1 + 0x390))(param_1,param_3);
      }
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14177e650 SerializeItem body=94 status=ok
// SIG undefined SerializeItem(void)

void UStructProperty::SerializeItem
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_res8 [8];
  
  FUN_14174d520(local_res8,param_1);
  FUN_141725e50(*(undefined8 *)(param_1 + 0x70),param_2,param_3,param_4);
  FUN_14174daa0(local_res8);
  return;
}



// FUNCTION 14177e6b0 FUN_14177e6b0 body=126 status=ok
// SIG undefined FUN_14177e6b0(void)

void FUN_14177e6b0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x378))(param_1,param_3);
  (**(code **)(*param_2 + 0x10))(param_2,param_3);
  if (((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 0x10) != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x378))(param_1,param_3);
    if (lVar1 != lVar2) {
      (**(code **)(*param_1 + 0x390))(param_1,param_3);
    }
  }
  return;
}



// FUNCTION 14177e730 FUN_14177e730 body=187 status=ok
// SIG undefined FUN_14177e730(void)

void FUN_14177e730(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong local_18;
  longlong *local_10;
  
  lVar1 = param_3[2];
  lVar2 = UBoolProperty::GetPrivateStaticClass();
  if (lVar1 == lVar2) {
    if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
      uVar3 = (ulonglong)*(byte *)((longlong)param_3 + 0x71);
      if (*(char *)(param_1 + 8) == '\0') {
        *(byte *)(uVar3 + param_4) =
             ~*(byte *)((longlong)param_3 + 0x73) & *(byte *)(uVar3 + param_4);
      }
      else {
        *(byte *)(uVar3 + param_4) =
             ~*(byte *)((longlong)param_3 + 0x73) & *(byte *)(uVar3 + param_4) |
             *(byte *)((longlong)param_3 + 0x72);
      }
    }
  }
  else {
    local_18 = param_2;
    local_10 = param_3;
    FUN_141705270(&local_18);
    (**(code **)(*param_3 + 0x2c0))(param_3,param_2,param_4,param_5);
    FSerializedPropertyScope::PopProperty(&local_18);
  }
  return;
}



// FUNCTION 14177e920 SetNumericPropertyValueFromString body=27 status=ok
// SIG undefined SetNumericPropertyValueFromString(void)

void TProperty_Numeric<short>::SetNumericPropertyValueFromString
               (undefined8 param_1,undefined2 *param_2,wchar_t *param_3)

{
  int iVar1;
  
  iVar1 = _wtoi(param_3);
  *param_2 = (short)iVar1;
  return;
}



// FUNCTION 14177e940 FUN_14177e940 body=26 status=ok
// SIG undefined FUN_14177e940(void)

void FUN_14177e940(undefined8 param_1,int *param_2,wchar_t *param_3)

{
  int iVar1;
  
  iVar1 = _wtoi(param_3);
  *param_2 = iVar1;
  return;
}



// FUNCTION 14177e960 FUN_14177e960 body=26 status=ok
// SIG undefined FUN_14177e960(void)

void FUN_14177e960(undefined8 param_1,undefined4 *param_2,wchar_t *param_3)

{
  longlong lVar1;
  
  lVar1 = _wtoi64(param_3);
  *param_2 = (int)lVar1;
  return;
}



// FUNCTION 14177e980 SetNumericPropertyValueFromString body=35 status=ok
// SIG undefined SetNumericPropertyValueFromString(void)

void TProperty_Numeric<float>::SetNumericPropertyValueFromString
               (undefined8 param_1,float *param_2,wchar_t *param_3)

{
  double dVar1;
  
  dVar1 = _wtof(param_3);
  *param_2 = (float)dVar1;
  return;
}



// FUNCTION 14177e9b0 SetNumericPropertyValueFromString body=30 status=ok
// SIG undefined SetNumericPropertyValueFromString(void)

void TProperty_Numeric<double>::SetNumericPropertyValueFromString
               (undefined8 param_1,double *param_2,wchar_t *param_3)

{
  double dVar1;
  
  dVar1 = wcstod(param_3,(wchar_t **)0x0);
  *param_2 = dVar1;
  return;
}



// FUNCTION 14177e9d0 SetNumericPropertyValueFromString body=27 status=ok
// SIG undefined SetNumericPropertyValueFromString(void)

void TProperty_Numeric<__int64>::SetNumericPropertyValueFromString
               (undefined8 param_1,longlong *param_2,wchar_t *param_3)

{
  longlong lVar1;
  
  lVar1 = _wtoi64(param_3);
  *param_2 = lVar1;
  return;
}



// FUNCTION 14177e9f0 SetNumericPropertyValueFromString body=32 status=ok
// SIG undefined SetNumericPropertyValueFromString(void)

void TProperty_Numeric<unsigned___int64>::SetNumericPropertyValueFromString
               (undefined8 param_1,ulonglong *param_2,wchar_t *param_3)

{
  ulonglong uVar1;
  
  uVar1 = _wcstoui64(param_3,(wchar_t **)0x0,0);
  *param_2 = uVar1;
  return;
}



// FUNCTION 14177ea10 SetObjectPropertyValue body=143 status=ok
// SIG undefined SetObjectPropertyValue(void)

void ULazyObjectProperty::SetObjectPropertyValue
               (undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 uStack_14;
  
  uVar1 = 0xffffffff;
  local_28 = 0xffffffff;
  local_24 = 0;
  uStack_14 = 0;
  local_1c = 0;
  iVar3 = 0;
  local_24._0_4_ = iVar3;
  if (param_3 != 0) {
    puVar2 = (undefined8 *)FUniqueObjectGuid::GetOrCreateIDForObject(local_38,param_3);
    local_1c = *puVar2;
    uStack_14 = puVar2[1];
    FWeakObjectPtr::operator=(&local_28,param_3);
    LOCK();
    if (DAT_1464b4c84 == 0) {
      DAT_1464b4c84 = 0;
    }
    UNLOCK();
    uVar1 = local_28;
    iVar3 = DAT_1464b4c84;
  }
  param_2[1] = (int)local_24;
  *param_2 = uVar1;
  *(undefined8 *)(param_2 + 3) = local_1c;
  *(undefined8 *)(param_2 + 5) = uStack_14;
  param_2[2] = iVar3;
  return;
}



// FUNCTION 14177eaa0 SetObjectPropertyValue body=223 status=ok
// SIG undefined SetObjectPropertyValue(void)

void USoftObjectProperty::SetObjectPropertyValue
               (undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_28;
  longlong local_20 [3];
  
  local_20[0] = 0;
  local_38 = 0xffffffff;
  local_20[1] = 0;
  local_34 = 0;
  local_28 = 0;
  iVar1 = 0;
  if (param_3 == 0) {
    local_28 = 0;
    local_34 = 0;
    iVar3 = iVar1;
  }
  else {
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_50,param_3);
    FSoftObjectPath::operator=(&local_28,uVar2);
    FWeakObjectPtr::operator=(&local_38,param_3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    local_34 = CONCAT44(DAT_1464b56f4,(int)local_34);
    iVar1 = DAT_1464b56f4;
    iVar3 = (int)local_34;
  }
  *param_2 = local_38;
  param_2[1] = iVar3;
  param_2[2] = iVar1;
  local_68 = local_28;
  FString::FString(local_60,local_20);
  FSoftObjectPath::operator=(param_2 + 4,&local_68);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14177eb80 SetObjectPropertyValue body=41 status=ok
// SIG undefined SetObjectPropertyValue(void)

void UWeakObjectProperty::SetObjectPropertyValue
               (undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 local_res10;
  undefined4 local_res14;
  
  FWeakObjectPtr::operator=(&local_res10,param_3);
  *param_2 = local_res10;
  param_2[1] = local_res14;
  return;
}



// FUNCTION 14177ebd0 Z_Construct_UClass_UClassProperty body=118 status=ok
// SIG undefined Z_Construct_UClass_UClassProperty(void)

longlong Z_Construct_UClass_UClassProperty(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = DAT_1469e7b78;
  if (DAT_1469e7b78 == 0) {
    Z_Construct_UClass_UObjectProperty();
    lVar1 = UClassProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FName::FName(local_res8,L"MetaClass",1);
    UClass::EmitObjectReference(lVar1,0x78,local_res8);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7b78 = lVar1;
  return lVar1;
}



// FUNCTION 14177ec50 FUN_14177ec50 body=118 status=ok
// SIG undefined FUN_14177ec50(void)

longlong FUN_14177ec50(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = DAT_1469e7c30;
  if (DAT_1469e7c30 == 0) {
    Z_Construct_UClass_UProperty();
    lVar1 = UDelegateProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FName::FName(local_res8,L"SignatureFunction",1);
    UClass::EmitObjectReference(lVar1,0x70,local_res8);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7c30 = lVar1;
  return lVar1;
}



// FUNCTION 14177ecd0 Z_Construct_UClass_UDoubleProperty body=72 status=ok
// SIG undefined Z_Construct_UClass_UDoubleProperty(void)

longlong Z_Construct_UClass_UDoubleProperty(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7c40;
  if (DAT_1469e7c40 == 0) {
    Z_Construct_UClass_UNumericProperty();
    lVar1 = UDoubleProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7c40 = lVar1;
  return lVar1;
}



// FUNCTION 14177ed20 Z_Construct_UClass_UFloatProperty body=72 status=ok
// SIG undefined Z_Construct_UClass_UFloatProperty(void)

longlong Z_Construct_UClass_UFloatProperty(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7c50;
  if (DAT_1469e7c50 == 0) {
    Z_Construct_UClass_UNumericProperty();
    lVar1 = UFloatProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7c50 = lVar1;
  return lVar1;
}



// FUNCTION 14177ed70 Z_Construct_UClass_UInt16Property body=72 status=ok
// SIG undefined Z_Construct_UClass_UInt16Property(void)

longlong Z_Construct_UClass_UInt16Property(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7c70;
  if (DAT_1469e7c70 == 0) {
    Z_Construct_UClass_UNumericProperty();
    lVar1 = UInt16Property::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7c70 = lVar1;
  return lVar1;
}



// FUNCTION 14177edc0 Z_Construct_UClass_UInt64Property body=72 status=ok
// SIG undefined Z_Construct_UClass_UInt64Property(void)

longlong Z_Construct_UClass_UInt64Property(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7c80;
  if (DAT_1469e7c80 == 0) {
    Z_Construct_UClass_UNumericProperty();
    lVar1 = UInt64Property::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7c80 = lVar1;
  return lVar1;
}



// FUNCTION 14177ee10 Z_Construct_UClass_UInt8Property body=72 status=ok
// SIG undefined Z_Construct_UClass_UInt8Property(void)

longlong Z_Construct_UClass_UInt8Property(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7c90;
  if (DAT_1469e7c90 == 0) {
    Z_Construct_UClass_UNumericProperty();
    lVar1 = UInt8Property::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7c90 = lVar1;
  return lVar1;
}



// FUNCTION 14177ee60 Z_Construct_UClass_UIntProperty body=72 status=ok
// SIG undefined Z_Construct_UClass_UIntProperty(void)

longlong Z_Construct_UClass_UIntProperty(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7c60;
  if (DAT_1469e7c60 == 0) {
    Z_Construct_UClass_UNumericProperty();
    lVar1 = UIntProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7c60 = lVar1;
  return lVar1;
}



// FUNCTION 14177eeb0 Z_Construct_UClass_UInterfaceProperty body=118 status=ok
// SIG undefined Z_Construct_UClass_UInterfaceProperty(void)

longlong Z_Construct_UClass_UInterfaceProperty(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = DAT_1469e7ca0;
  if (DAT_1469e7ca0 == 0) {
    Z_Construct_UClass_UProperty();
    lVar1 = UInterfaceProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FName::FName(local_res8,L"InterfaceClass",1);
    UClass::EmitObjectReference(lVar1,0x70,local_res8);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7ca0 = lVar1;
  return lVar1;
}



// FUNCTION 14177ef30 Z_Construct_UClass_ULazyObjectProperty body=72 status=ok
// SIG undefined Z_Construct_UClass_ULazyObjectProperty(void)

longlong Z_Construct_UClass_ULazyObjectProperty(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7cb0;
  if (DAT_1469e7cb0 == 0) {
    Z_Construct_UClass_UObjectPropertyBase();
    lVar1 = ULazyObjectProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7cb0 = lVar1;
  return lVar1;
}



// FUNCTION 14177ef80 Z_Construct_UClass_UMapProperty body=168 status=ok
// SIG undefined Z_Construct_UClass_UMapProperty(void)

longlong Z_Construct_UClass_UMapProperty(void)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  lVar1 = DAT_1469e7cc0;
  if (DAT_1469e7cc0 == 0) {
    Z_Construct_UClass_UProperty();
    lVar1 = UMapProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FName::FName(local_res8,L"KeyProp",1);
    UClass::EmitObjectReference(lVar1,0x70,local_res8);
    FName::FName(local_res10,L"ValueProp",1);
    UClass::EmitObjectReference(lVar1,0x78,local_res10);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7cc0 = lVar1;
  return lVar1;
}



// FUNCTION 14177f030 Z_Construct_UClass_UMulticastDelegateProperty body=118 status=ok
// SIG undefined Z_Construct_UClass_UMulticastDelegateProperty(void)

longlong Z_Construct_UClass_UMulticastDelegateProperty(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = DAT_1469e7cd0;
  if (DAT_1469e7cd0 == 0) {
    Z_Construct_UClass_UProperty();
    lVar1 = UMulticastDelegateProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FName::FName(local_res8,L"SignatureFunction",1);
    UClass::EmitObjectReference(lVar1,0x70,local_res8);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7cd0 = lVar1;
  return lVar1;
}



// FUNCTION 14177f0b0 Z_Construct_UClass_UNameProperty body=72 status=ok
// SIG undefined Z_Construct_UClass_UNameProperty(void)

longlong Z_Construct_UClass_UNameProperty(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7ce0;
  if (DAT_1469e7ce0 == 0) {
    Z_Construct_UClass_UProperty();
    lVar1 = UNameProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7ce0 = lVar1;
  return lVar1;
}



// FUNCTION 14177f100 Z_Construct_UClass_UNumericProperty body=72 status=ok
// SIG undefined Z_Construct_UClass_UNumericProperty(void)

longlong Z_Construct_UClass_UNumericProperty(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7cf0;
  if (DAT_1469e7cf0 == 0) {
    Z_Construct_UClass_UProperty();
    lVar1 = UNumericProperty::StaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7cf0 = lVar1;
  return lVar1;
}



// FUNCTION 14177f150 Z_Construct_UClass_UObjectProperty body=72 status=ok
// SIG undefined Z_Construct_UClass_UObjectProperty(void)

longlong Z_Construct_UClass_UObjectProperty(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7d10;
  if (DAT_1469e7d10 == 0) {
    Z_Construct_UClass_UObjectPropertyBase();
    lVar1 = UObjectProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7d10 = lVar1;
  return lVar1;
}



// FUNCTION 14177f1a0 Z_Construct_UClass_USetProperty body=118 status=ok
// SIG undefined Z_Construct_UClass_USetProperty(void)

longlong Z_Construct_UClass_USetProperty(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = DAT_1469e7d20;
  if (DAT_1469e7d20 == 0) {
    Z_Construct_UClass_UProperty();
    lVar1 = USetProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FName::FName(local_res8,L"ElementProp",1);
    UClass::EmitObjectReference(lVar1,0x70,local_res8);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7d20 = lVar1;
  return lVar1;
}



// FUNCTION 14177f220 Z_Construct_UClass_USoftClassProperty body=118 status=ok
// SIG undefined Z_Construct_UClass_USoftClassProperty(void)

longlong Z_Construct_UClass_USoftClassProperty(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = DAT_1469e7d30;
  if (DAT_1469e7d30 == 0) {
    Z_Construct_UClass_USoftObjectProperty();
    lVar1 = USoftClassProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FName::FName(local_res8,L"MetaClass",1);
    UClass::EmitObjectReference(lVar1,0x78,local_res8);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7d30 = lVar1;
  return lVar1;
}



// FUNCTION 14177f2a0 Z_Construct_UClass_USoftObjectProperty body=72 status=ok
// SIG undefined Z_Construct_UClass_USoftObjectProperty(void)

longlong Z_Construct_UClass_USoftObjectProperty(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7d90;
  if (DAT_1469e7d90 == 0) {
    Z_Construct_UClass_UObjectPropertyBase();
    lVar1 = USoftObjectProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7d90 = lVar1;
  return lVar1;
}



// FUNCTION 14177f2f0 Z_Construct_UClass_UStrProperty body=72 status=ok
// SIG undefined Z_Construct_UClass_UStrProperty(void)

longlong Z_Construct_UClass_UStrProperty(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7da0;
  if (DAT_1469e7da0 == 0) {
    Z_Construct_UClass_UProperty();
    lVar1 = UStrProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7da0 = lVar1;
  return lVar1;
}



// FUNCTION 14177f340 Z_Construct_UClass_UStructProperty body=118 status=ok
// SIG undefined Z_Construct_UClass_UStructProperty(void)

longlong Z_Construct_UClass_UStructProperty(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = DAT_1469e7dc0;
  if (DAT_1469e7dc0 == 0) {
    Z_Construct_UClass_UProperty();
    lVar1 = UStructProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FName::FName(local_res8,L"Struct",1);
    UClass::EmitObjectReference(lVar1,0x70,local_res8);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7dc0 = lVar1;
  return lVar1;
}



// FUNCTION 14177f3c0 Z_Construct_UClass_UUInt16Property body=114 status=ok
// SIG undefined Z_Construct_UClass_UUInt16Property(void)

longlong Z_Construct_UClass_UUInt16Property(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7dd0;
  if (DAT_1469e7dd0 == 0) {
    if (DAT_1469e7cf0 == 0) {
      Z_Construct_UClass_UProperty();
      lVar1 = UNumericProperty::StaticClass();
      UObjectForceRegistration(lVar1);
      FUN_141726e60(lVar1,0);
      DAT_1469e7cf0 = lVar1;
    }
    lVar1 = UUInt16Property::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7dd0 = lVar1;
  return lVar1;
}



// FUNCTION 14177f440 Z_Construct_UClass_UUInt32Property body=114 status=ok
// SIG undefined Z_Construct_UClass_UUInt32Property(void)

longlong Z_Construct_UClass_UUInt32Property(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7de0;
  if (DAT_1469e7de0 == 0) {
    if (DAT_1469e7cf0 == 0) {
      Z_Construct_UClass_UProperty();
      lVar1 = UNumericProperty::StaticClass();
      UObjectForceRegistration(lVar1);
      FUN_141726e60(lVar1,0);
      DAT_1469e7cf0 = lVar1;
    }
    lVar1 = UUInt32Property::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7de0 = lVar1;
  return lVar1;
}



// FUNCTION 14177f4c0 Z_Construct_UClass_UUInt64Property body=114 status=ok
// SIG undefined Z_Construct_UClass_UUInt64Property(void)

longlong Z_Construct_UClass_UUInt64Property(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7df0;
  if (DAT_1469e7df0 == 0) {
    if (DAT_1469e7cf0 == 0) {
      Z_Construct_UClass_UProperty();
      lVar1 = UNumericProperty::StaticClass();
      UObjectForceRegistration(lVar1);
      FUN_141726e60(lVar1,0);
      DAT_1469e7cf0 = lVar1;
    }
    lVar1 = UUInt64Property::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7df0 = lVar1;
  return lVar1;
}



// FUNCTION 14177f540 Z_Construct_UClass_UWeakObjectProperty body=72 status=ok
// SIG undefined Z_Construct_UClass_UWeakObjectProperty(void)

longlong Z_Construct_UClass_UWeakObjectProperty(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7e00;
  if (DAT_1469e7e00 == 0) {
    Z_Construct_UClass_UObjectPropertyBase();
    lVar1 = UWeakObjectProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7e00 = lVar1;
  return lVar1;
}



// FUNCTION 14177f5a0 NotifyUObjectDeleted body=154 status=ok
// SIG undefined NotifyUObjectDeleted(void)

void FUObjectAnnotationSparse<FBoolAnnotation,1>::NotifyUObjectDeleted
               (longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined1 *)(param_1 + 0x88) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  TSet<TTuple<UObjectBase_const_*,FBoolAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 8,param_2);
  if ((0 < iVar1 - iVar2) && (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c))) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014177f633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}


