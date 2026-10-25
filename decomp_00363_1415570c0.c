// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1415570c0 FUN_1415570c0 body=33 status=ok
// SIG undefined FUN_1415570c0(void)

undefined8 FUN_1415570c0(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1415570f0 `scalar_deleting_destructor' body=33 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TRDGLambdaPass<FHairEnvironmentAO::FParameters,<lambda_302df845e88c46dab2e027ca6c4b9462>_>::
_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141557120 `scalar_deleting_destructor' body=33 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TRDGLambdaPass<FVisualizeBufferPS::FParameters,<lambda_083d9d4b27015ba2f4f943077024ca48>_>::
_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141557150 FUN_141557150 body=52 status=ok
// SIG undefined FUN_141557150(void)

undefined8 FUN_141557150(undefined8 param_1,ulonglong param_2)

{
  Chaos::FPBDRigidSpringConstraints::~FPBDRigidSpringConstraints();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141557190 FUN_141557190 body=52 status=ok
// SIG undefined FUN_141557190(void)

undefined8 FUN_141557190(undefined8 param_1,ulonglong param_2)

{
  FUN_142b22800();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1415571d0 FUN_1415571d0 body=52 status=ok
// SIG undefined FUN_1415571d0(void)

undefined8 FUN_1415571d0(undefined8 param_1,ulonglong param_2)

{
  FUN_142b229d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141557210 FUN_141557210 body=52 status=ok
// SIG undefined FUN_141557210(void)

undefined8 FUN_141557210(undefined8 param_1,ulonglong param_2)

{
  FUN_142b229e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141557250 FUN_141557250 body=52 status=ok
// SIG undefined FUN_141557250(void)

undefined8 FUN_141557250(undefined8 param_1,ulonglong param_2)

{
  FUN_142b22c80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141557290 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessMotionBlurCS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1415528a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 1415572d0 FUN_1415572d0 body=196 status=ok
// SIG undefined FUN_1415572d0(void)

longlong FUN_1415572d0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd8);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x90);
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
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1415573a0 FUN_1415573a0 body=336 status=ok
// SIG undefined FUN_1415573a0(void)

void FUN_1415573a0(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18 [2];
  
  if (param_2 != (longlong *)0x0) {
    iVar2 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar2 + 1;
    if (*(int *)(param_1 + 0x34) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar2);
    }
    *(longlong **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 8) = param_2;
    if (param_3 != '\0') {
      *(undefined1 *)(param_1 + 0xf4) = 1;
      plVar1 = param_2 + 5;
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_14419ca48;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        plVar4[2] = (longlong)&LAB_141564a80;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar5;
        *plVar4 = (longlong)&PTR_FUN_14419ca90;
      }
      if (local_18 != plVar1) {
        if (plVar4 == (longlong *)0x0) {
          if (((int)param_2[6] != 0) && (plVar3 = (longlong *)*plVar1, plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x28))(plVar3,0);
            if (*plVar1 != 0) {
              lVar5 = FMemory::Realloc(*plVar1,0,0);
              *plVar1 = lVar5;
            }
            *(undefined4 *)(param_2 + 6) = 0;
          }
        }
        else {
          (**(code **)(*plVar4 + 0x30))(plVar4,plVar1);
        }
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        lVar5 = FMemory::Realloc(plVar4,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
      (**(code **)(*param_2 + 0x280))(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 1415574f0 FUN_1415574f0 body=393 status=ok
// SIG undefined FUN_1415574f0(void)

void FUN_1415574f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *_Src;
  uint uVar9;
  uint local_30;
  void *local_28;
  undefined8 local_20;
  
  if (*(int *)(param_1 + 0x1d0) <= param_2) {
    uVar4 = CONCAT44(DAT_1464a0ebc,DAT_1464a0eb8);
    uVar7 = 0;
    local_28 = (void *)0x0;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
    uVar9 = (param_2 - *(int *)(param_1 + 0x1d0)) + 1;
    if (uVar9 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (&local_28,uVar9);
      uVar7 = local_20 & 0xffffffff;
    }
    uVar6 = (uint)uVar7;
    _Src = local_28;
    if (0 < (int)uVar9) {
      uVar8 = (ulonglong)uVar9;
      do {
        iVar5 = (int)uVar7;
        uVar6 = iVar5 + 1;
        local_20 = CONCAT44(local_20._4_4_,uVar6);
        if (local_20._4_4_ < (int)uVar6) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_28,uVar7);
          _Src = local_28;
          uVar6 = (uint)local_20;
        }
        uVar7 = (ulonglong)uVar6;
        puVar2 = (undefined8 *)((longlong)_Src + (longlong)iVar5 * 0xc);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = uVar4;
          *(uint *)(puVar2 + 1) = local_30;
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    plVar1 = (longlong *)(param_1 + 0x1c8);
    if (*(int *)(param_1 + 0x1d4) < (int)(*(int *)(param_1 + 0x1d0) + uVar6)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (plVar1);
    }
    if (uVar6 != 0) {
      iVar5 = *(int *)(param_1 + 0x1d0);
      if (*(int *)(param_1 + 0x1d4) < (int)(iVar5 + uVar6)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (plVar1);
        iVar5 = *(int *)(param_1 + 0x1d0);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + (longlong)iVar5 * 0xc),_Src,(longlong)(int)uVar6 * 0xc);
      *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + uVar6;
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
  }
  if ((((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1d0))) &&
      (piVar3 = (int *)(*(longlong *)(param_1 + 0x1c8) + (longlong)param_2 * 0xc),
      *piVar3 == DAT_1464a0eb8)) && (piVar3[1] == DAT_1464a0ebc)) {
    piVar3[0] = 0;
    piVar3[1] = 0;
  }
  return;
}



// FUNCTION 141557680 FUN_141557680 body=259 status=ok
// SIG undefined FUN_141557680(void)

ulonglong FUN_141557680(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar4 = FWeakObjectPtr::IsValid(param_1 + 0x68);
  if ((char)uVar4 != '\0') {
    iVar2 = *(int *)(param_1 + 0x70);
    uVar4 = (ulonglong)iVar2;
    if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x80))) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x78) + uVar4 * 4);
      *piVar1 = *piVar1 + 1;
      uVar5 = FWeakObjectPtr::Get(param_1 + 0x68);
      lVar6 = FUN_140cff230(uVar5);
      uVar4 = 0;
      if (lVar6 != 0) {
        TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(lVar6 + 0x210,param_1 + 0x78);
        *(undefined1 *)(lVar6 + 0x28) = 1;
        uVar4 = FUN_14172cc40(lVar6,1);
        if ((*(longlong *)(param_1 + 0xb0) != 0) &&
           (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x80), lVar3 != 0)) {
          iVar2 = *(int *)(param_1 + 0x70);
          if ((-1 < iVar2) && (iVar2 < *(int *)(lVar3 + 0x38))) {
            bVar7 = *(int *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar2 * 4) ==
                    *(int *)(*(longlong *)(lVar3 + 0x30) + 0x78 + (longlong)iVar2 * 0xe8);
            if ((bVar7) && (iVar2 == 0)) {
              *(undefined1 *)(lVar6 + 0x231) = 1;
              *(undefined1 *)(lVar6 + 0x28) = 1;
            }
            FUN_14172cc40(lVar6,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
            return (ulonglong)bVar7;
          }
        }
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 141557790 FUN_141557790 body=72 status=ok
// SIG undefined FUN_141557790(void)

void FUN_141557790(void)

{
  longlong lVar1;
  
  if (*(longlong *)(DAT_1468a64a8 + 0xa8) != 0) {
    lVar1 = FWeakObjectPtr::Get(*(longlong *)(DAT_1468a64a8 + 0xa8) + 0x48);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x82a) = 1;
      if (*(longlong *)(lVar1 + 0x6e0) != 0) {
        FUN_14155a3a0(*(longlong *)(lVar1 + 0x6e0),0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1415577e0 FUN_1415577e0 body=49 status=ok
// SIG undefined FUN_1415577e0(void)

void FUN_1415577e0(void)

{
  longlong lVar1;
  
  if (*(longlong *)(DAT_1468a64a8 + 0xa8) != 0) {
    lVar1 = FWeakObjectPtr::Get(*(longlong *)(DAT_1468a64a8 + 0xa8) + 0x48);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x82b) = 1;
    }
  }
  return;
}



// FUNCTION 141557820 FUN_141557820 body=194 status=ok
// SIG undefined FUN_141557820(void)

void FUN_141557820(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] == 0) {
    iVar2 = 0;
  }
  else if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    iVar2 = _wtoi(L"");
  }
  else {
    iVar2 = _wtoi(*(wchar_t **)*param_1);
  }
  plVar3 = (longlong *)FUN_14155d3c0(param_2,iVar2);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0xfa8))(plVar3);
    if (((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x48))) &&
       (plVar3 = *(longlong **)
                  (*(longlong *)(lVar4 + 0x40) + -8 + (longlong)*(int *)(lVar4 + 0x48) * 8),
       plVar3 != (longlong *)0x0)) {
      lVar4 = (**(code **)(*plVar3 + 0x278))();
      if (lVar4 != 0) {
        lVar5 = FUN_141583770();
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
          FUN_1415684e0(lVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1415578f0 FUN_1415578f0 body=194 status=ok
// SIG undefined FUN_1415578f0(void)

void FUN_1415578f0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] == 0) {
    iVar2 = 0;
  }
  else if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    iVar2 = _wtoi(L"");
  }
  else {
    iVar2 = _wtoi(*(wchar_t **)*param_1);
  }
  plVar3 = (longlong *)FUN_14155d3c0(param_2,iVar2);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0xfa8))(plVar3);
    if (((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x48))) &&
       (plVar3 = *(longlong **)
                  (*(longlong *)(lVar4 + 0x40) + -8 + (longlong)*(int *)(lVar4 + 0x48) * 8),
       plVar3 != (longlong *)0x0)) {
      lVar4 = (**(code **)(*plVar3 + 0x278))();
      if (lVar4 != 0) {
        lVar5 = FUN_141583770();
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
          FUN_14156c0f0(lVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1415579c0 FUN_1415579c0 body=194 status=ok
// SIG undefined FUN_1415579c0(void)

void FUN_1415579c0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] == 0) {
    iVar2 = 0;
  }
  else if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    iVar2 = _wtoi(L"");
  }
  else {
    iVar2 = _wtoi(*(wchar_t **)*param_1);
  }
  plVar3 = (longlong *)FUN_14155d3c0(param_2,iVar2);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0xfa8))(plVar3);
    if (((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x48))) &&
       (plVar3 = *(longlong **)
                  (*(longlong *)(lVar4 + 0x40) + -8 + (longlong)*(int *)(lVar4 + 0x48) * 8),
       plVar3 != (longlong *)0x0)) {
      lVar4 = (**(code **)(*plVar3 + 0x278))();
      if (lVar4 != 0) {
        lVar5 = FUN_141583770();
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
          FUN_141575eb0(lVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 141557a90 FUN_141557a90 body=199 status=ok
// SIG undefined FUN_141557a90(void)

void FUN_141557a90(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *_Str;
  
  if (0 < (int)param_1[1]) {
    _Str = L"";
    if ((int)param_1[1] < 2) {
      iVar1 = 0;
    }
    else if (*(int *)(*param_1 + 0x18) == 0) {
      iVar1 = _wtoi(L"");
    }
    else {
      iVar1 = _wtoi(*(wchar_t **)(*param_1 + 0x10));
    }
    lVar2 = FUN_14155d3c0(param_2,iVar1);
    if ((lVar2 != 0) &&
       ((DAT_1468a64a8 != 0 ||
        ((lVar3 = FUN_14155cb80(), lVar3 != 0 && (FUN_14155ee30(lVar3), DAT_1468a64a8 != 0)))))) {
      lVar3 = DAT_1468a64a8;
      if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
        _Str = *(wchar_t **)*param_1;
      }
      iVar1 = _wtoi(_Str);
      FUN_14155da00(lVar3,lVar2,iVar1);
    }
  }
  return;
}



// FUNCTION 141557b60 FUN_141557b60 body=204 status=ok
// SIG undefined FUN_141557b60(void)

void FUN_141557b60(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  wchar_t *_Str;
  
  if ((int)param_1[1] == 0) {
    uVar2 = 1;
  }
  else {
    _Str = L"";
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)*param_1;
    }
    uVar2 = FToBoolHelper::FromCStringWide(puVar5);
    if (1 < (int)param_1[1]) {
      if (*(int *)(*param_1 + 0x18) != 0) {
        _Str = *(wchar_t **)(*param_1 + 0x10);
      }
      iVar3 = _wtoi(_Str);
      goto LAB_141557bc4;
    }
  }
  iVar3 = 0;
LAB_141557bc4:
  lVar4 = FUN_14155d3c0(param_2,iVar3);
  if (lVar4 == 0) {
    return;
  }
  if (DAT_1468a64a8 == 0) {
    lVar4 = FUN_14155cb80();
    if (lVar4 == 0) {
      return;
    }
    FUN_14155ee30(lVar4);
    if (DAT_1468a64a8 == 0) {
      return;
    }
  }
  plVar1 = (longlong *)(DAT_1468a64a8 + 0xa8);
  *(undefined1 *)(DAT_1468a64a8 + 0xf0) = uVar2;
  if (*plVar1 != 0) {
    *(undefined1 *)(*plVar1 + 0xf5) = uVar2;
  }
  return;
}



// FUNCTION 141557c30 FUN_141557c30 body=1205 status=ok
// SIG undefined FUN_141557c30(void)

void FUN_141557c30(void)

{
  void *pvVar1;
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  float fVar18;
  uint local_res20;
  longlong local_90;
  undefined8 local_88;
  longlong local_80 [2];
  void *local_70;
  undefined8 local_68;
  longlong local_60 [5];
  
  bVar4 = false;
  bVar3 = false;
  iVar7 = 0;
  if ((DAT_1468a64a8 != 0) && (lVar12 = *(longlong *)(DAT_1468a64a8 + 0xa8), lVar12 != 0)) {
    iVar13 = *(int *)(lVar12 + 0xc0);
    if (0 < iVar13) {
      iVar7 = *(int *)(*(longlong *)(lVar12 + 0xb8) + 8);
    }
    local_90 = 0;
    local_88 = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
    lVar11 = local_90;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_90,0x1a,"##=-~ Puzzle score ~-=##\n",0x1a,0x3f);
    iVar7 = iVar7 + -1;
    lVar15 = (longlong)iVar7;
    if (-1 < iVar7) {
      do {
        uVar9 = 0;
        local_res20 = 0;
        uVar14 = uVar9;
        uVar17 = uVar9;
        if (0 < (longlong)iVar13) {
          do {
            uVar10 = (uint)uVar9;
            if ((((-1 < (longlong)uVar17) && ((int)uVar10 < *(int *)(lVar12 + 0xc0))) &&
                (-1 < lVar15)) && (iVar7 < *(int *)(*(longlong *)(lVar12 + 0xb8) + 8 + uVar14))) {
              fVar18 = *(float *)(*(longlong *)(*(longlong *)(lVar12 + 0xb8) + uVar14) + lVar15 * 4)
              ;
              if (fVar18 == 0.0) {
                local_80[0] = 0;
                local_80[1] = 6;
                bVar4 = true;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_80,0);
                FGenericPlatformString::Memcpy(local_80[0],L"---- ",0xc);
                plVar8 = local_80;
              }
              else {
                bVar3 = true;
                FString::PrintfImpl(local_60,L"%.2f ",(double)fVar18);
                plVar8 = local_60;
              }
              uVar9 = local_88;
              pvVar2 = (void *)*plVar8;
              iVar16 = (int)plVar8[1] + -1;
              if ((int)plVar8[1] == 0) {
                iVar16 = 0;
              }
              if (iVar16 != 0) {
                iVar6 = (int)local_88;
                lVar11 = (longlong)(int)local_88;
                iVar5 = (uint)((int)local_88 == 0) + (int)local_88 + iVar16;
                local_88 = CONCAT44(local_88._4_4_,iVar5);
                if (local_88._4_4_ < iVar5) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,uVar9 & 0xffffffff);
                }
                pvVar1 = (void *)(local_90 + (lVar11 - (ulonglong)(iVar6 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar16 * 2);
                *(undefined2 *)((longlong)iVar16 * 2 + (longlong)pvVar1) = 0;
                uVar10 = local_res20;
              }
              if ((bVar3) && (bVar3 = false, local_60[0] != 0)) {
                FMemory::Free();
              }
              if ((bVar4) && (bVar4 = false, local_80[0] != 0)) {
                FMemory::Free(local_80[0]);
              }
            }
            local_res20 = uVar10 + 1;
            uVar9 = (ulonglong)local_res20;
            uVar17 = uVar17 + 1;
            uVar14 = uVar14 + 0x10;
          } while ((longlong)uVar17 < (longlong)iVar13);
        }
        local_70 = (void *)0x0;
        local_68 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
        pvVar2 = local_70;
        FGenericPlatformString::Memcpy(local_70,&DAT_144c68dd4,4);
        uVar14 = local_88;
        if (((int)local_68 != 0) && (iVar16 = (int)local_68 + -1, iVar16 != 0)) {
          iVar6 = (int)local_88;
          lVar11 = (longlong)(int)local_88;
          iVar5 = (uint)((int)local_88 == 0) + (int)local_88 + iVar16;
          local_88 = CONCAT44(local_88._4_4_,iVar5);
          if (local_88._4_4_ < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,uVar14 & 0xffffffff);
          }
          pvVar1 = (void *)(local_90 + (lVar11 - (ulonglong)(iVar6 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar16 * 2);
          *(undefined2 *)((longlong)iVar16 * 2 + (longlong)pvVar1) = 0;
        }
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        iVar7 = iVar7 + -1;
        lVar15 = lVar15 + -1;
        lVar11 = local_90;
      } while (-1 < lVar15);
    }
    fVar18 = (float)FUN_14155d900(lVar12);
    FString::PrintfImpl(&local_70,L"Score: %.2f \n",
                        (double)-((int)ROUND(-0.5 - (fVar18 + fVar18)) >> 1));
    pvVar2 = local_70;
    uVar14 = local_88;
    iVar13 = 0;
    iVar7 = iVar13;
    if ((int)local_68 != 0) {
      iVar7 = (int)local_68 + -1;
    }
    if (iVar7 != 0) {
      iVar16 = (int)local_88;
      lVar15 = (longlong)(int)local_88;
      iVar6 = (uint)((int)local_88 == 0) + (int)local_88 + iVar7;
      local_88 = CONCAT44(local_88._4_4_,iVar6);
      if (local_88._4_4_ < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,uVar14 & 0xffffffff);
        lVar11 = local_90;
      }
      pvVar1 = (void *)(lVar11 + (lVar15 - (ulonglong)(iVar16 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar7 * 2) = 0;
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    fVar18 = (float)FUN_14155d900(lVar12);
    FString::PrintfImpl(&local_70,L"Real Score: %.2f ",(double)fVar18);
    pvVar2 = local_70;
    uVar14 = local_88;
    if ((int)local_68 != 0) {
      iVar13 = (int)local_68 + -1;
    }
    if (iVar13 != 0) {
      iVar7 = (int)local_88;
      lVar12 = (longlong)(int)local_88;
      iVar16 = (uint)((int)local_88 == 0) + (int)local_88 + iVar13;
      local_88 = CONCAT44(local_88._4_4_,iVar16);
      if (local_88._4_4_ < iVar16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,uVar14 & 0xffffffff);
        lVar11 = local_90;
      }
      pvVar1 = (void *)(lVar11 + (lVar12 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar13 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar13 * 2) = 0;
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
  }
  return;
}



// FUNCTION 1415580f0 FUN_1415580f0 body=501 status=ok
// SIG undefined FUN_1415580f0(void)

void FUN_1415580f0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40 [2];
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  longlong local_18 [2];
  
  iVar3 = 0;
  if ((int)param_1[1] != 0) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      iVar3 = _wtoi(L"");
    }
    else {
      iVar3 = _wtoi(*(wchar_t **)*param_1);
    }
  }
  plVar4 = (longlong *)FUN_14155d3c0(param_2,iVar3);
  if ((((plVar4 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar4 + 0xfa8))(plVar4), lVar5 != 0))
      && (0 < *(int *)(lVar5 + 0x48))) &&
     ((plVar4 = *(longlong **)
                 (*(longlong *)(lVar5 + 0x40) + -8 + (longlong)*(int *)(lVar5 + 0x48) * 8),
      plVar4 != (longlong *)0x0 && (lVar6 = (**(code **)(*plVar4 + 0x278))(), lVar6 != 0)))) {
    lVar7 = ACameraActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_68 = 0;
      local_60 = 0x51;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      uVar2 = local_68;
      FGenericPlatformString::Memcpy
                (local_68,
                 L"/Game/PatchDLC/CitizenScience/UI/CS_Reward/MenuData_CS_Reward.MenuData_CS_Reward"
                 ,0xa2);
      local_50 = (undefined4)local_60;
      local_4c = local_60._4_4_;
      local_48 = 0;
      local_40[0] = 0;
      local_40[1] = 0;
      local_58 = uVar2;
      FUN_1417978e0(&local_48,&local_58);
      local_20 = local_48;
      local_30 = 0xffffffff;
      local_2c = 0;
      FString::FString(local_18,local_40);
      lVar7 = FUN_1405ec200(&local_30);
      if (lVar7 != 0) {
        lVar8 = FUN_142f2cf80();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        lVar8 = 0;
        if (bVar1) {
          lVar8 = lVar7;
        }
        FUN_142f00910(lVar5,lVar6,lVar8);
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (local_40[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1415582f0 FUN_1415582f0 body=184 status=ok
// SIG undefined FUN_1415582f0(void)

void FUN_1415582f0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *_Str;
  wchar_t *_Str_00;
  
  if ((int)param_1[1] != 0) {
    _Str_00 = L"";
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar1 = _wtoi(_Str);
    if ((int)param_1[1] < 2) {
      iVar2 = 0;
    }
    else {
      if (*(int *)(*param_1 + 0x18) != 0) {
        _Str_00 = *(wchar_t **)(*param_1 + 0x10);
      }
      iVar2 = _wtoi(_Str_00);
    }
    lVar3 = FUN_14155d3c0(param_2,iVar2);
    if ((lVar3 != 0) &&
       ((DAT_1468a64a8 != 0 ||
        ((lVar3 = FUN_14155cb80(), lVar3 != 0 && (FUN_14155ee30(lVar3), DAT_1468a64a8 != 0)))))) {
      *(int *)(DAT_1468a64a8 + 0xb8) = iVar1;
    }
  }
  return;
}



// FUNCTION 1415583b0 FUN_1415583b0 body=655 status=ok
// SIG undefined FUN_1415583b0(void)

void FUN_1415583b0(longlong *param_1,undefined8 param_2)

{
  void **ppvVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  wchar_t *_Str;
  longlong lVar11;
  ulonglong uVar12;
  wchar_t *_Str_00;
  void *_Src;
  longlong lVar13;
  longlong lVar14;
  void *local_38;
  undefined8 local_30;
  
  if ((int)param_1[1] != 0) {
    _Str_00 = L"";
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar4 = _wtoi(_Str);
    iVar6 = (int)param_1[1];
    if (iVar6 < 2) {
      iVar5 = 0;
    }
    else if (*(int *)(*param_1 + 0x18) == 0) {
      iVar5 = _wtoi(L"");
      iVar6 = (int)param_1[1];
    }
    else {
      iVar5 = _wtoi(*(wchar_t **)(*param_1 + 0x10));
      iVar6 = (int)param_1[1];
    }
    if (iVar6 < 3) {
      iVar6 = 0;
    }
    else {
      if (*(int *)(*param_1 + 0x28) != 0) {
        _Str_00 = *(wchar_t **)(*param_1 + 0x20);
      }
      iVar6 = _wtoi(_Str_00);
    }
    lVar7 = FUN_14155d3c0(param_2,iVar6);
    if (((lVar7 != 0) && (lVar8 = FUN_14155cb80(), lVar8 != 0)) &&
       (lVar8 = *(longlong *)(lVar8 + 0x80), lVar8 != 0)) {
      uVar3 = *(uint *)(lVar8 + 0x38);
      uVar12 = (ulonglong)uVar3;
      if (uVar3 != 0) {
        if (iVar4 < 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = uVar3 - 1;
          if (iVar4 < (int)(uVar3 - 1)) {
            iVar6 = iVar4;
          }
        }
        lVar14 = (longlong)iVar6;
        if (iVar5 < 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(lVar14 * 0xe8 + 0x78 + *(longlong *)(lVar8 + 0x30));
          if (iVar5 < iVar6) {
            iVar6 = iVar5;
          }
        }
        lVar9 = FUN_14155ccd0();
        if (lVar9 != 0) {
          local_38 = (void *)0x0;
          local_30 = 0;
          TArray<float,FDefaultAllocator>::ResizeTo(&local_38);
          _Src = local_38;
          iVar4 = (int)local_30;
          iVar5 = (int)local_30;
          if (0 < (int)uVar3) {
            do {
              iVar5 = iVar4 + 1;
              local_30 = CONCAT44(local_30._4_4_,iVar5);
              if (local_30._4_4_ < iVar5) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_38);
                _Src = local_38;
                iVar5 = (int)local_30;
              }
              puVar2 = (undefined4 *)((longlong)_Src + (longlong)iVar4 * 4);
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = 0;
              }
              uVar12 = uVar12 - 1;
              iVar4 = iVar5;
            } while (uVar12 != 0);
          }
          if (0 < lVar14) {
            lVar11 = 0;
            lVar13 = 0;
            do {
              *(undefined4 *)((longlong)_Src + lVar11 * 4) =
                   *(undefined4 *)(lVar13 + 0x78 + *(longlong *)(lVar8 + 0x30));
              lVar11 = lVar11 + 1;
              lVar13 = lVar13 + 0xe8;
            } while (lVar11 < lVar14);
          }
          *(int *)((longlong)_Src + lVar14 * 4) = iVar6;
          lVar8 = FWeakObjectPtr::Get(lVar9 + 0x68);
          if (lVar7 == lVar8) {
            ppvVar1 = (void **)(lVar9 + 0x78);
            *(undefined1 *)(lVar9 + 0xbc) = 1;
            if (ppvVar1 != &local_38) {
              *(int *)(lVar9 + 0x80) = iVar5;
              if ((iVar5 == 0) && (*(int *)(lVar9 + 0x84) == 0)) {
                *(undefined4 *)(lVar9 + 0x84) = 0;
              }
              else {
                TArray<int,FDefaultAllocator>::ResizeForCopy(ppvVar1,iVar5);
                _guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,(longlong)iVar5 << 2);
              }
            }
            uVar10 = FWeakObjectPtr::Get(lVar9 + 0x68);
            lVar7 = FUN_140cff230(uVar10);
            if (lVar7 != 0) {
              TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(lVar7 + 0x210,ppvVar1);
              *(undefined1 *)(lVar7 + 0x28) = 1;
              FUN_14172cc40(lVar7,1);
            }
          }
          if (_Src != (void *)0x0) {
            FMemory::Free(_Src);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141558640 FUN_141558640 body=268 status=ok
// SIG undefined FUN_141558640(void)

void FUN_141558640(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == 0) {
    iVar3 = 0;
  }
  else if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    iVar3 = _wtoi(L"");
  }
  else {
    iVar3 = _wtoi(*(wchar_t **)*param_1);
  }
  plVar4 = (longlong *)FUN_14155d3c0(param_2,iVar3);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0xfa8))(plVar4);
    if (((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x48))) &&
       (plVar4 = *(longlong **)
                  (*(longlong *)(lVar5 + 0x40) + -8 + (longlong)*(int *)(lVar5 + 0x48) * 8),
       plVar4 != (longlong *)0x0)) {
      lVar5 = (**(code **)(*plVar4 + 0x278))();
      if (lVar5 != 0) {
        lVar6 = FUN_141583770();
        iVar3 = *(int *)(lVar6 + 0x90);
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar3) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)iVar3 * 8)
            != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          cVar1 = *(char *)(lVar5 + 0x82c);
          plVar4 = *(longlong **)(lVar5 + 0x718);
          uVar7 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),cVar1 == '\0');
          *(bool *)(lVar5 + 0x82c) = cVar1 == '\0';
          if (plVar4 != (longlong *)0x0) {
            if (cVar1 == '\0') {
              FUN_1415771c0(lVar5);
              plVar4 = *(longlong **)(lVar5 + 0x718);
              uVar7 = (ulonglong)*(byte *)(lVar5 + 0x82c);
            }
                    /* WARNING: Could not recover jumptable at 0x00014155873f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 0x278))(plVar4,uVar7);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141558750 FUN_141558750 body=158 status=ok
// SIG undefined FUN_141558750(void)

void FUN_141558750(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (0 < (int)param_1[1]) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      iVar1 = _wtoi(L"");
    }
    else {
      iVar1 = _wtoi(*(wchar_t **)*param_1);
    }
  }
  plVar2 = (longlong *)FUN_14155d3c0(param_2,iVar1);
  if ((plVar2 != (longlong *)0x0) &&
     (((DAT_1468a64a8 != 0 ||
       ((lVar3 = FUN_14155cb80(), lVar3 != 0 && (FUN_14155ee30(lVar3), DAT_1468a64a8 != 0)))) &&
      (*(longlong *)(DAT_1468a64a8 + 0xb0) != 0)))) {
    (**(code **)(*plVar2 + 0x148))(plVar2);
  }
  return;
}



// FUNCTION 1415587f0 FUN_1415587f0 body=88 status=ok
// SIG undefined FUN_1415587f0(void)

void FUN_1415587f0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((int)param_1[1] < 1) {
    iVar1 = 0;
  }
  else if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    iVar1 = _wtoi(L"");
  }
  else {
    iVar1 = _wtoi(*(wchar_t **)*param_1);
  }
  lVar2 = FUN_14155d3c0(param_2,iVar1);
  if (lVar2 != 0) {
    FUN_14157ec10(lVar2,1);
    return;
  }
  return;
}



// FUNCTION 141558850 FUN_141558850 body=215 status=ok
// SIG undefined FUN_141558850(void)

void FUN_141558850(longlong param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 400) == 0) {
      param_1 = param_1 + 0x400;
    }
    else {
      param_1 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x98);
    }
    lVar2 = FLatentActionManager::
            FindExistingActionWithPredicate<FStreamLevelAction,_FLatentActionManager::FindExistingAction<FStreamLevelAction>_::_2_::FFirstItemPredicate>
                      (param_1,*(undefined8 *)(param_3 + 4),param_3[1],local_res8);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)operator_new(0x30);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        uVar1 = *(undefined8 *)(DAT_1468a64a8 + 0xa8);
        *puVar3 = &PTR_FUN_144c7de88;
        FWeakObjectPtr::operator=(puVar3 + 1,uVar1);
        uVar1 = *(undefined8 *)(param_3 + 4);
        puVar3[3] = *(undefined8 *)(param_3 + 2);
        *(undefined4 *)(puVar3 + 4) = *param_3;
        *(undefined1 *)(puVar3 + 2) = param_2;
        FWeakObjectPtr::operator=((longlong)puVar3 + 0x24,uVar1);
      }
      FUN_142514cf0(param_1,*(undefined8 *)(param_3 + 4),param_3[1],puVar3);
    }
  }
  return;
}



// FUNCTION 1415589a0 FUN_1415589a0 body=101 status=ok
// SIG undefined FUN_1415589a0(void)

void FUN_1415589a0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  cVar2 = FUN_141576fc0(*param_1);
  if (cVar2 == '\0') {
    TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(*param_1 + 0x38,0);
    return;
  }
  local_18 = 0;
  local_10 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,*param_1 + 0x38);
  lVar1 = *param_1;
  FUN_14157d130(lVar1,&local_18,*(int *)(lVar1 + 0xc4) + -1,*(undefined1 *)(lVar1 + 200));
  return;
}



// FUNCTION 141558ac0 FUN_141558ac0 body=93 status=ok
// SIG undefined FUN_141558ac0(void)

void FUN_141558ac0(longlong *param_1)

{
  char cVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  cVar1 = FUN_141576fc0(*param_1);
  if (cVar1 != '\0') {
    local_18 = 0;
    local_10 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,*param_1 + 0x28);
    FUN_14155cfc0(*param_1,&local_18,*(int *)(*param_1 + 0xc0) + -1);
    return;
  }
  TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(*param_1 + 0x28,0);
  return;
}



// FUNCTION 141558b40 FUN_141558b40 body=97 status=ok
// SIG undefined FUN_141558b40(void)

ulonglong FUN_141558b40(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x680);
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1415833c0();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if (bVar1) {
      return (ulonglong)*(byte *)(lVar2 + 0x63c);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 141558bb0 FUN_141558bb0 body=488 status=ok
// SIG undefined FUN_141558bb0(void)

void FUN_141558bb0(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  
  iVar8 = *param_2;
  lVar6 = (longlong)iVar8;
  if ((((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 0xc0))) && (-1 < iVar8)) &&
     (iVar8 < *(int *)(param_1 + 0x78))) {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar9 = (ulonglong)param_2[1];
    uVar11 = uVar9;
    if (param_2[1] < *(int *)(lVar2 + 8 + lVar6 * 0x10)) {
      do {
        iVar8 = (int)uVar9;
        if (iVar8 < 0) {
LAB_141558d4e:
          *(undefined4 *)(*(longlong *)(lVar2 + lVar6 * 0x10) + uVar11 * 4) = 0;
        }
        else if (((iVar8 < *(int *)(param_1 + 0xd0)) && (iVar8 < *(int *)(param_1 + 0xe0))) &&
                (*(char *)(uVar11 + *(longlong *)(param_1 + 200)) !=
                 *(char *)(uVar11 + *(longlong *)(param_1 + 0xd8)))) {
LAB_141558c8b:
          iVar1 = *param_2;
          iVar7 = 0;
          if (0 < *(int *)(param_1 + 0xc0)) {
            lVar10 = 0;
            do {
              lVar4 = *(longlong *)(param_1 + 0xb8);
              if (iVar8 < *(int *)(lVar10 + 8 + lVar4)) {
                cVar5 = FUN_1415642a0(param_1,uVar9 & 0xffffffff);
                if (iVar7 == iVar1) {
                  if (cVar5 == '\0') {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = *(undefined4 *)(param_1 + 0xa8);
                  }
                }
                else if (cVar5 == '\0') {
                  uVar12 = *(undefined4 *)(param_1 + 0xa4);
                }
                else {
                  uVar12 = *(undefined4 *)(param_1 + 0xa8);
                }
                *(undefined4 *)(*(longlong *)(lVar10 + lVar4) + uVar11 * 4) = uVar12;
              }
              iVar7 = iVar7 + 1;
              lVar10 = lVar10 + 0x10;
            } while (iVar7 < *(int *)(param_1 + 0xc0));
          }
        }
        else {
          if (iVar8 < 0) goto LAB_141558d4e;
          if ((iVar8 < *(int *)(param_1 + 0xd0)) &&
             (*(char *)(uVar11 + *(longlong *)(param_1 + 200)) != '\0')) goto LAB_141558c8b;
          if ((iVar8 < 0) || (*(int *)(lVar3 + 8 + lVar6 * 0x10) <= iVar8)) goto LAB_141558d4e;
          if ((*(byte *)(*(longlong *)(lVar3 + lVar6 * 0x10) + uVar11) &
              *(byte *)(uVar11 + *(longlong *)(param_1 + 0x80))) == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + lVar6 * 0x10) + uVar11 * 4) = 0;
          }
          else {
            *(undefined4 *)(*(longlong *)(lVar2 + lVar6 * 0x10) + uVar11 * 4) =
                 *(undefined4 *)(param_1 + 0xa4);
          }
        }
        uVar9 = (ulonglong)(iVar8 + 1U);
        uVar11 = uVar11 + 1;
      } while ((int)(iVar8 + 1U) < *(int *)(lVar2 + 8 + lVar6 * 0x10));
    }
  }
  return;
}



// FUNCTION 141558da0 FUN_141558da0 body=568 status=ok
// SIG undefined FUN_141558da0(void)

void FUN_141558da0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (((lVar2 != 0) && (lVar3 = *(longlong *)(param_1 + 0xa8), lVar3 != 0)) &&
     (cVar4 = FUN_141564220(lVar3), cVar4 != '\0')) {
    lVar7 = *(longlong *)(lVar2 + 0x80);
    iVar1 = *(int *)(param_1 + 0x70);
    if (((lVar7 != 0) && (-1 < iVar1)) &&
       ((iVar1 < *(int *)(lVar7 + 0x38) &&
        (lVar7 = (longlong)iVar1 * 0xe8 + *(longlong *)(lVar7 + 0x30), lVar7 != 0)))) {
      iVar1 = *(int *)(lVar7 + 0x7c);
      *(int *)(param_1 + 0x50) = iVar1;
      fVar11 = (float)((int)ROUND((*(float *)(lVar3 + 0xb0) + *(float *)(lVar3 + 0xb0)) - 0.5) >> 1)
      ;
      if (1e-08 < ABS(fVar11)) {
        fVar8 = (float)FUN_14155d900(lVar3);
        fVar9 = (float)-((int)ROUND(-0.5 - (fVar8 + fVar8)) >> 1);
        fVar12 = (float)((int)ROUND((*(float *)(lVar3 + 0xac) + *(float *)(lVar3 + 0xac)) - 0.5) >>
                        1);
        fVar8 = fVar9 - fVar12;
        fVar10 = ABS(fVar8);
        if (fVar10 <= 1e-08) {
          if (ABS(fVar9 - fVar11) <= 1e-08) {
            *(int *)(param_1 + 0x5c) = *(int *)(lVar2 + 0x58) * iVar1;
            return;
          }
          if (fVar10 <= 1e-08) {
            return;
          }
        }
        fVar10 = ABS(fVar9 - fVar11);
        if ((fVar10 <= 1e-08) || (fVar11 < fVar9)) {
          iVar5 = *(int *)(lVar2 + 0x58) + -1;
          *(int *)(param_1 + 0x5c) = iVar1;
          if (iVar5 < 2) {
            iVar5 = 1;
          }
          *(int *)(param_1 + 0x58) = iVar5 * iVar1;
          if ((1e-08 < fVar10) && (fVar11 < fVar9)) {
            iVar5 = *(int *)(lVar2 + 0x5c) - *(int *)(lVar2 + 0x58);
            if (iVar5 < 2) {
              iVar5 = 1;
            }
            *(int *)(param_1 + 0x60) = iVar5 * iVar1;
          }
        }
        else {
          iVar5 = *(int *)(lVar2 + 0x58) + -1;
          fVar11 = (fVar8 / (fVar11 - fVar12)) * (float)*(int *)(lVar2 + 0x58);
          iVar6 = -((int)ROUND(-0.5 - (fVar11 + fVar11)) >> 1);
          if (iVar6 < 1) {
            *(int *)(param_1 + 0x58) = iVar1;
          }
          else {
            if (iVar6 < iVar5) {
              iVar5 = iVar6;
            }
            *(int *)(param_1 + 0x58) = iVar5 * iVar1;
          }
        }
      }
      else {
        *(int *)(param_1 + 0x54) = *(int *)(lVar2 + 0x58) * iVar1;
      }
    }
  }
  return;
}



// FUNCTION 141558fe0 FUN_141558fe0 body=840 status=ok
// SIG undefined FUN_141558fe0(void)

void FUN_141558fe0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *_Src;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint local_78;
  void *local_60;
  int local_58;
  int local_54;
  
  uVar1 = *(uint *)(param_1 + 1);
  iVar7 = 0;
  if (0 < (int)uVar1) {
    uVar10 = (ulonglong)uVar1;
    piVar11 = (int *)(*param_1 + 8);
    do {
      iVar6 = *piVar11;
      iVar4 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar4 = 0;
      }
      if ((iVar7 < iVar4) && (iVar7 = 0, iVar6 != 0)) {
        iVar7 = iVar6 + -1;
      }
      piVar11 = piVar11 + 4;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  plVar8 = (longlong *)*param_3;
  for (iVar6 = (int)param_3[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  *(undefined4 *)(param_3 + 1) = 0;
  iVar6 = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
    iVar6 = *(int *)((longlong)param_3 + 0xc);
  }
  if (iVar6 < iVar7) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,iVar7);
  }
  uVar10 = 0;
  local_78 = 0;
  if (0 < iVar7) {
    uVar13 = uVar10;
    do {
      local_60 = (void *)0x0;
      local_58 = 0;
      local_54 = 0;
      if (0 < (int)(uVar1 + 1)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_60,uVar1 + 1);
        uVar10 = (ulonglong)local_78;
      }
      uVar14 = (ulonglong)(int)(uVar1 - 1);
      _Src = local_60;
      iVar6 = local_58;
      if (-1 < (int)(uVar1 - 1)) {
        lVar12 = uVar14 << 4;
        uVar15 = uVar14;
        do {
          if ((((longlong)uVar14 < 0) || ((int)param_1[1] <= (int)uVar15)) || ((longlong)uVar13 < 0)
             ) {
LAB_141559207:
            sVar3 = FUN_14157d870(0);
          }
          else {
            iVar4 = *(int *)(*param_1 + 8 + lVar12);
            iVar5 = iVar4 + -1;
            if (iVar4 == 0) {
              iVar5 = 0;
            }
            if (iVar5 <= (int)uVar10) goto LAB_141559207;
            sVar3 = *(short *)(*(longlong *)(*param_1 + lVar12) + uVar13 * 2);
          }
          if (sVar3 != 0) {
            iVar4 = iVar6 + -1;
            if (iVar6 < 1) {
              iVar4 = 0;
            }
            local_58 = (iVar6 < 1) + 1 + iVar6;
            if (local_54 < local_58) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
              _Src = local_60;
            }
            *(short *)((longlong)_Src + (longlong)iVar4 * 2) = sVar3;
            *(undefined2 *)((longlong)_Src + (longlong)iVar4 * 2 + 2) = 0;
            iVar6 = local_58;
          }
          uVar10 = (ulonglong)local_78;
          uVar15 = (ulonglong)((int)uVar15 - 1);
          lVar12 = lVar12 + -0x10;
          uVar14 = uVar14 - 1;
        } while (-1 < (longlong)uVar14);
      }
      iVar4 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar4);
      }
      puVar9 = (undefined8 *)((longlong)iVar4 * 0x10 + *param_3);
      *puVar9 = 0;
      *(int *)(puVar9 + 1) = iVar6;
      if (iVar6 == 0) {
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,iVar6,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar9,_Src,(longlong)iVar6 * 2);
      }
      if (_Src != (void *)0x0) {
        FMemory::Free();
      }
      uVar13 = uVar13 + 1;
      local_78 = local_78 + 1;
      uVar10 = (ulonglong)local_78;
    } while ((longlong)uVar13 < (longlong)iVar7);
  }
  plVar8 = (longlong *)*param_4;
  for (iVar7 = (int)param_4[1]; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  *(undefined4 *)(param_4 + 1) = 0;
  iVar7 = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_4,0);
    iVar7 = *(int *)((longlong)param_4 + 0xc);
  }
  iVar6 = (int)param_2[1];
  if (iVar7 < iVar6) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_4,iVar6);
    iVar6 = (int)param_2[1];
  }
  iVar6 = iVar6 + -1;
  if (-1 < iVar6) {
    lVar12 = (longlong)iVar6 << 4;
    do {
      iVar7 = (int)param_4[1];
      lVar2 = *param_2;
      *(int *)(param_4 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar7);
      }
      FString::FString((longlong)iVar7 * 0x10 + *param_4,lVar12 + lVar2);
      lVar12 = lVar12 + -0x10;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  return;
}



// FUNCTION 141559330 FUN_141559330 body=98 status=ok
// SIG undefined FUN_141559330(void)

undefined8 * FUN_141559330(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144c7e3e8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
    *(undefined1 *)((longlong)puVar1 + 0x21) = *(undefined1 *)(param_1 + 0x21);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415593a0 FUN_1415593a0 body=95 status=ok
// SIG undefined FUN_1415593a0(void)

undefined8 * FUN_1415593a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144c7e520;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141559400 FUN_141559400 body=82 status=ok
// SIG undefined FUN_141559400(void)

undefined8 * FUN_141559400(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144c7e538;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141559460 FUN_141559460 body=66 status=ok
// SIG undefined FUN_141559460(void)

void FUN_141559460(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144c7e2f8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144c7e340;
  }
  return;
}



// FUNCTION 1415594b0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144c7e1c0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144c7e208;
  }
  return;
}



// FUNCTION 141559500 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144c7e130;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144c7e178;
  }
  return;
}



// FUNCTION 141559550 FUN_141559550 body=83 status=ok
// SIG undefined FUN_141559550(void)

void FUN_141559550(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144c7e0a0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_144c7e0e8;
  }
  return;
}



// FUNCTION 1415595b0 FUN_1415595b0 body=78 status=ok
// SIG undefined FUN_1415595b0(void)

void FUN_1415595b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144c7e400;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_144c7e448;
  }
  return;
}



// FUNCTION 141559600 FUN_141559600 body=78 status=ok
// SIG undefined FUN_141559600(void)

void FUN_141559600(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144c7e268;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_144c7e2b0;
  }
  return;
}



// FUNCTION 141559650 FUN_141559650 body=528 status=ok
// SIG undefined FUN_141559650(void)

void FUN_141559650(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  
  if ((*(longlong *)(param_1 + 0xb0) != 0) &&
     (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x68), cVar3 != '\0')) {
    if ((param_2 == 0) && (0 < *(int *)(param_1 + 0x80))) {
      lVar4 = FUN_14155cc90(param_1,*(undefined4 *)(param_1 + 0x70));
      if (lVar4 != 0) {
        iVar8 = *(int *)(lVar4 + 0x78) + -1;
        if (**(int **)(param_1 + 0x78) < *(int *)(lVar4 + 0x78)) {
          iVar8 = **(int **)(param_1 + 0x78);
        }
        uVar5 = GetTransientPackage();
        lVar4 = NewObject<UMaterialParameterCollectionInstance>(uVar5);
        *(longlong *)(param_1 + 0xa8) = lVar4;
        if ((lVar4 != 0) && (iVar8 < *(int *)(*(longlong *)(param_1 + 0xb0) + 0x78))) {
          plVar7 = (longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + (longlong)iVar8 * 8);
          lVar4 = 0;
          if (*plVar7 != 0) {
            lVar6 = UAIAsyncTaskBlueprintProxy::GetPrivateStaticClass();
            lVar1 = *plVar7;
            for (lVar2 = lVar1; (lVar4 = 0, lVar2 != 0 && (lVar4 = lVar1, lVar2 != lVar6));
                lVar2 = *(longlong *)(lVar2 + 0x30)) {
            }
          }
          uVar5 = GetTransientPackage();
          FUN_1417846f0(uVar5,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          lVar4 = FUN_1417985e0(lVar4,uVar5,0,0,0,0,0,0,0);
          if (lVar4 != 0) {
            uVar5 = FWeakObjectPtr::Get(param_1 + 0x68);
            FUN_141563680(*(undefined8 *)(param_1 + 0xa8),uVar5,lVar4);
            plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x68);
            uVar5 = (**(code **)(*plVar7 + 0x148))(plVar7);
            *(undefined8 *)(lVar4 + 0x28) = uVar5;
          }
        }
      }
    }
    else {
      param_2 = param_2 + -1;
      if ((-1 < param_2) && (param_2 < *(int *)(*(longlong *)(param_1 + 0xb0) + 0x68))) {
        uVar5 = GetTransientPackage();
        lVar4 = NewObject<UMaterialParameterCollectionInstance>(uVar5);
        *(longlong *)(param_1 + 0xa8) = lVar4;
        if (lVar4 != 0) {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x60);
          uVar5 = FWeakObjectPtr::Get(param_1 + 0x68);
          FUN_141563190(*(undefined8 *)(param_1 + 0xa8),uVar5,(longlong)param_2 * 0x38 + lVar4);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0xf5) = *(undefined1 *)(param_1 + 0xf0);
  }
  return;
}



// FUNCTION 141559860 FUN_141559860 body=1273 status=ok
// SIG undefined FUN_141559860(void)

void FUN_141559860(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong *puVar16;
  float fVar17;
  undefined1 local_res8 [4];
  undefined1 local_resc [4];
  undefined1 local_res10 [4];
  undefined1 local_res14 [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  if ((char)param_1[0xd8] == '\x03') {
    local_78 = 0;
    local_70 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468a6870,&local_78);
    if (param_1[0xd9] != 0) {
      thunk_FUN_142eb3990();
      param_1[0xd9] = 0;
    }
    *(undefined1 *)(param_1 + 0xd8) = 4;
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x101);
    if (cVar4 != '\0') {
      lVar6 = FWeakObjectPtr::Get(param_1 + 0x101);
      lVar6 = *(longlong *)(lVar6 + 0xa8);
      if (lVar6 != 0) {
        FWeakObjectPtr::operator=(lVar6 + 0x48,param_1);
        FWeakObjectPtr::operator=(param_1 + 0x102,lVar6);
        FUN_141560f80(param_1[0xdc],lVar6,*(undefined1 *)((longlong)param_1 + 0x82e));
        lVar9 = param_1[0xdc];
        if (*(longlong *)(lVar9 + 0x180) != 0) {
          FUN_142087ad0(*(longlong *)(lVar9 + 0x180),local_res8,local_resc);
          lVar9 = param_1[0xdc];
        }
        FUN_142087ad0(lVar9,local_res10,local_res14);
        lVar9 = param_1[0xda];
        if (lVar9 != 0) {
          FWeakObjectPtr::operator=(lVar9 + 0x7c,lVar6);
          cVar4 = FWeakObjectPtr::IsValid(lVar9 + 0x7c);
          if (cVar4 != '\0') {
            lVar7 = FWeakObjectPtr::Get(lVar9 + 0x7c);
            fVar17 = (float)((int)ROUND((*(float *)(lVar7 + 0xb0) + *(float *)(lVar7 + 0xb0)) - 0.5)
                            >> 1);
            if ((ABS(fVar17) <= 1e-08) || (fVar17 <= 0.0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = 1;
            }
            *(undefined1 *)(lVar9 + 0x159) = uVar5;
            lVar7 = FWeakObjectPtr::Get(lVar9 + 0x7c);
            TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                      (lVar9 + 0x120,lVar7 + 200);
            lVar7 = FWeakObjectPtr::Get(lVar9 + 0x7c);
            iVar2 = *(int *)(lVar7 + 0xa0);
            iVar15 = *(int *)(lVar7 + 0x9c) * iVar2;
            if (*(int *)(lVar9 + 0x104) < iVar15) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(lVar9 + 0xf8,iVar15);
              iVar2 = *(int *)(lVar7 + 0xa0);
            }
            if (*(int *)(lVar9 + 0x13c) < iVar2) {
              TArray<float,FDefaultAllocator>::ResizeTo();
            }
            lVar7 = FWeakObjectPtr::Get(lVar9 + 0x7c);
            uVar8 = FWeakObjectPtr::Get(lVar7 + 0x48);
            FWeakObjectPtr::operator=(lVar9 + 0xec,uVar8);
          }
        }
        plVar10 = (longlong *)param_1[0xf0];
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x278))(plVar10,1);
        }
        lVar9 = FWeakObjectPtr::Get(param_1 + 0x101);
        if (((0 < *(int *)(lVar9 + 0x70)) && (param_1[0xfd] != 0)) &&
           ((longlong *)param_1[0x100] != (longlong *)0x0)) {
          local_68 = (code *)0x0;
          uStack_60 = (longlong *)0x0;
          lVar9 = *(longlong *)param_1[0x100];
          uVar8 = FText::AsNumber(local_48,*(undefined4 *)(lVar6 + 0x90),0,&local_68);
          (**(code **)(lVar9 + 0x2b0))(param_1[0x100],uVar8,1,0);
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_40 + 1;
            lVar6 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar1 = (int *)((longlong)local_40 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_40 + 8))(local_40,1);
              }
            }
          }
          plVar10 = uStack_60;
          if (uStack_60 != (longlong *)0x0) {
            LOCK();
            plVar14 = uStack_60 + 1;
            lVar6 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*uStack_60)(uStack_60);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          (**(code **)(*(longlong *)param_1[0xfd] + 0x278))((longlong *)param_1[0xfd],1);
        }
        FUN_14155f400(param_1);
        if (param_1[0xdb] == 0) {
          if ((param_1[0xdc] != 0) && (lVar6 = *(longlong *)(param_1[0xdc] + 0x180), lVar6 != 0)) {
            puVar16 = *(ulonglong **)(lVar6 + 0x188);
            puVar11 = puVar16 + (longlong)*(int *)(lVar6 + 400) * 2;
            for (; puVar16 != puVar11; puVar16 = puVar16 + 2) {
              plVar10 = (longlong *)*puVar16;
              uVar12 = (longlong)(int)puVar16[1] & 0x1fffffffffffffff;
              if (plVar10 + (int)puVar16[1] < plVar10) {
                uVar12 = 0;
              }
              uVar13 = 0;
              if (uVar12 != 0) {
                do {
                  plVar14 = (longlong *)*plVar10;
                  if (plVar14 != (longlong *)0x0) {
                    (**(code **)(*plVar14 + 0x278))(plVar14,1);
                  }
                  plVar10 = plVar10 + 1;
                  uVar13 = uVar13 + 1;
                } while (uVar13 != uVar12);
              }
            }
          }
          FUN_14156cd40(param_1);
        }
        else {
          FWeakObjectPtr::operator=(param_1[0xdb] + 0x4c,param_1[0xdc]);
          lVar6 = param_1[0xdb];
          local_68 = FUN_14156cd40;
          uStack_60 = (longlong *)((ulonglong)uStack_60 & 0xffffffff00000000);
          plVar14 = (longlong *)(lVar6 + 0x28);
          plVar10 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar10 != (longlong *)0x0) {
            *plVar10 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar10 + 1,param_1);
            *(undefined4 *)(plVar10 + 2) = (undefined4)local_68;
            *(undefined4 *)((longlong)plVar10 + 0x14) = local_68._4_4_;
            *(undefined4 *)(plVar10 + 3) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_60._4_4_;
            lVar9 = FDelegateHandle::GenerateNewID();
            plVar10[5] = lVar9;
            *plVar10 = (longlong)&PTR_FUN_143f77bd0;
          }
          if (local_58 != plVar14) {
            if (plVar10 == (longlong *)0x0) {
              if ((*(int *)(lVar6 + 0x30) != 0) &&
                 (plVar3 = (longlong *)*plVar14, plVar3 != (longlong *)0x0)) {
                (**(code **)(*plVar3 + 0x28))(plVar3,0);
                if (*plVar14 != 0) {
                  lVar9 = FMemory::Realloc(*plVar14,0,0);
                  *plVar14 = lVar9;
                }
                *(undefined4 *)(lVar6 + 0x30) = 0;
              }
            }
            else {
              (**(code **)(*plVar10 + 0x30))(plVar10,plVar14);
            }
          }
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x28))(plVar10,0);
            lVar6 = FMemory::Realloc(plVar10,0,0);
            if (lVar6 != 0) {
              FMemory::Free(lVar6);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141559d60 FUN_141559d60 body=147 status=ok
// SIG undefined FUN_141559d60(void)

undefined8 FUN_141559d60(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
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
      lVar2 = FUN_140cff230(lVar2);
      if ((lVar2 != 0) && (pwVar4 = L"WhatsThis", *(char *)(lVar2 + 0x230) == '\0'))
      goto LAB_141559dd7;
    }
  }
  pwVar4 = L"MainMenu";
LAB_141559dd7:
  FName::FName(param_2,pwVar4,1);
  return param_2;
}



// FUNCTION 141559e00 FUN_141559e00 body=1016 status=ok
// SIG undefined FUN_141559e00(void)

undefined8 * FUN_141559e00(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  
  cVar1 = FUN_142ebdd00(param_3);
  cVar2 = FUN_142ebdcf0(param_3);
  cVar3 = FUN_142ebdcd0(param_3);
  cVar4 = ULowEntryExtendedStandardLibrary::ByteToBoolean(param_3);
  cVar5 = UNF_CustomizationStatics::IsWeaponType(param_3);
  cVar6 = UChaosVehicleMovementComponent::GetUseAutoGears(param_1);
  cVar7 = FUN_142ebda90(param_1);
  if (cVar7 == '\0') {
    if (cVar6 == '\0') {
      if (cVar4 == '\0') {
        if (cVar1 == '\0') {
          if (cVar2 == '\0') {
            if (cVar3 == '\0') goto LAB_14155a1cf;
            pwVar10 = L"down";
            if (cVar5 != '\0') {
              pwVar10 = L"focusedDown";
            }
            *param_2 = 0;
            param_2[1] = 0;
            if (*pwVar10 == L'\0') {
              return param_2;
            }
            lVar9 = -1;
            do {
              lVar9 = lVar9 + 1;
            } while (pwVar10[lVar9] != L'\0');
          }
          else {
            pwVar10 = L"over";
            if (cVar5 != '\0') {
              pwVar10 = L"focusedOver";
            }
            *param_2 = 0;
            param_2[1] = 0;
            if (*pwVar10 == L'\0') {
              return param_2;
            }
            lVar9 = -1;
            do {
              lVar9 = lVar9 + 1;
            } while (pwVar10[lVar9] != L'\0');
          }
        }
        else {
          pwVar10 = L"up";
          if (cVar5 != '\0') {
            pwVar10 = L"focusedUp";
          }
          *param_2 = 0;
          param_2[1] = 0;
          if (*pwVar10 == L'\0') {
            return param_2;
          }
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (pwVar10[lVar9] != L'\0');
        }
      }
      else {
        pwVar10 = L"disabled";
        if (cVar5 != '\0') {
          pwVar10 = L"focusedDisabled";
        }
        *param_2 = 0;
        param_2[1] = 0;
        if (*pwVar10 == L'\0') {
          return param_2;
        }
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (pwVar10[lVar9] != L'\0');
      }
    }
    else if (cVar4 == '\0') {
      if (cVar1 == '\0') {
        if (cVar2 == '\0') {
          if (cVar3 == '\0') {
LAB_14155a1cf:
            *param_2 = 0;
            param_2[1] = 0;
            return param_2;
          }
          pwVar10 = L"lockedFocused";
          if (cVar5 != '\0') {
            pwVar10 = L"lockedFocused";
          }
          *param_2 = 0;
          param_2[1] = 0;
          if (*pwVar10 == L'\0') {
            return param_2;
          }
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (pwVar10[lVar9] != L'\0');
        }
        else {
          pwVar10 = L"lockedFocused";
          if (cVar5 != '\0') {
            pwVar10 = L"lockedFocused";
          }
          *param_2 = 0;
          param_2[1] = 0;
          if (*pwVar10 == L'\0') {
            return param_2;
          }
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (pwVar10[lVar9] != L'\0');
        }
      }
      else {
        pwVar10 = L"lockedUp";
        if (cVar5 != '\0') {
          pwVar10 = L"lockedFocused";
        }
        *param_2 = 0;
        param_2[1] = 0;
        if (*pwVar10 == L'\0') {
          return param_2;
        }
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (pwVar10[lVar9] != L'\0');
      }
    }
    else {
      pwVar10 = L"lockedUp";
      if (cVar5 != '\0') {
        pwVar10 = L"lockedFocused";
      }
      *param_2 = 0;
      param_2[1] = 0;
      if (*pwVar10 == L'\0') {
        return param_2;
      }
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (pwVar10[lVar9] != L'\0');
    }
  }
  else {
    cVar6 = UChaosVehicleMovementComponent::GetUseAutoGears(param_1);
    if ((cVar6 == '\0') && (cVar4 == '\0')) {
      if (cVar1 == '\0') {
        if (cVar2 == '\0') {
          if (cVar3 == '\0') goto LAB_14155a1cf;
          pwVar10 = L"checkedDown";
          if (cVar5 != '\0') {
            pwVar10 = L"checkedFocusedDown";
          }
          *param_2 = 0;
          param_2[1] = 0;
          if (*pwVar10 == L'\0') {
            return param_2;
          }
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (pwVar10[lVar9] != L'\0');
        }
        else {
          pwVar10 = L"checkedOver";
          if (cVar5 != '\0') {
            pwVar10 = L"checkedFocusedOver";
          }
          *param_2 = 0;
          param_2[1] = 0;
          if (*pwVar10 == L'\0') {
            return param_2;
          }
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (pwVar10[lVar9] != L'\0');
        }
      }
      else {
        pwVar10 = L"checkedUp";
        if (cVar5 != '\0') {
          pwVar10 = L"checkedFocusedUp";
        }
        *param_2 = 0;
        param_2[1] = 0;
        if (*pwVar10 == L'\0') {
          return param_2;
        }
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (pwVar10[lVar9] != L'\0');
      }
    }
    else {
      pwVar10 = L"checkedDisabled";
      if (cVar5 != '\0') {
        pwVar10 = L"checkedFocusedDisabled";
      }
      *param_2 = 0;
      param_2[1] = 0;
      if (*pwVar10 == L'\0') {
        return param_2;
      }
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (pwVar10[lVar9] != L'\0');
    }
  }
  iVar8 = (int)lVar9 + 1;
  *(int *)(param_2 + 1) = iVar8;
  if (0 < iVar8) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  }
  FGenericPlatformString::Memcpy(*param_2,pwVar10,(longlong)iVar8 * 2);
  return param_2;
}



// FUNCTION 14155a200 FUN_14155a200 body=411 status=ok
// SIG undefined FUN_14155a200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14155a200(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110 [8];
  longlong *local_108;
  longlong local_f8 [2];
  undefined4 local_e8;
  undefined1 local_e4;
  undefined4 local_e0;
  undefined1 local_d8 [80];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = param_1;
  FText::FText(local_110);
  FString::FString(local_f8,param_5);
  local_e0 = param_6;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_e8 = param_3;
  local_e4 = param_4;
  puVar4 = (undefined8 *)FUN_140438ef0(0x48,local_78);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_14468e680;
    puVar4[1] = local_118;
    FText::FText(puVar4 + 2,local_110);
    FString::FString(puVar4 + 5,local_f8);
    *(undefined4 *)(puVar4 + 7) = local_e8;
    *(undefined1 *)((longlong)puVar4 + 0x3c) = local_e4;
    *(undefined4 *)(puVar4 + 8) = local_e0;
  }
  local_88[0] = &LAB_141558950;
  uVar5 = FUN_1420849a0(param_1,local_d8,local_88);
  FUN_14208c5d0(param_1,uVar5);
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
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_108 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  return;
}



// FUNCTION 14155a3a0 FUN_14155a3a0 body=343 status=ok
// SIG undefined FUN_14155a3a0(void)

void FUN_14155a3a0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x180);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x1e4) != param_2)) {
    *(char *)(lVar1 + 0x1e4) = param_2;
    puVar8 = *(ulonglong **)(lVar1 + 0x188);
    puVar9 = puVar8 + (longlong)*(int *)(lVar1 + 400) * 2;
    uVar6 = 0;
    for (; puVar8 != puVar9; puVar8 = puVar8 + 2) {
      plVar2 = (longlong *)*puVar8;
      uVar7 = (longlong)(int)puVar8[1] & 0x1fffffffffffffff;
      if (plVar2 + (int)puVar8[1] < plVar2) {
        uVar7 = uVar6;
      }
      uVar4 = uVar6;
      if (uVar7 != 0) {
        do {
          if (*plVar2 != 0) {
            *(char *)(*plVar2 + 0x1ba) = param_2;
          }
          plVar2 = plVar2 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar7);
      }
    }
    puVar8 = *(ulonglong **)(lVar1 + 0x198);
    puVar9 = puVar8 + (longlong)*(int *)(lVar1 + 0x1a0) * 2;
    for (; puVar8 != puVar9; puVar8 = puVar8 + 2) {
      plVar2 = (longlong *)*puVar8;
      uVar7 = (longlong)(int)puVar8[1] & 0x1fffffffffffffff;
      if (plVar2 + (int)puVar8[1] < plVar2) {
        uVar7 = uVar6;
      }
      uVar4 = uVar6;
      if (uVar7 != 0) {
        do {
          if (*plVar2 != 0) {
            *(char *)(*plVar2 + 0x1ba) = param_2;
          }
          plVar2 = plVar2 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar7);
      }
    }
    if (0 < *(int *)(lVar1 + 0x1d0)) {
      do {
        lVar3 = FUN_14155d970(lVar1,*(longlong *)(lVar1 + 0x1c8) + (longlong)(int)uVar6 * 0xc);
        if (lVar3 != 0) {
          FUN_14157aa00(lVar3,param_2,uVar6);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < *(int *)(lVar1 + 0x1d0));
    }
  }
  return;
}



// FUNCTION 14155a500 FUN_14155a500 body=360 status=ok
// SIG undefined FUN_14155a500(void)

void FUN_14155a500(undefined8 param_1,undefined1 param_2)

{
  longlong local_58 [2];
  undefined1 local_48;
  undefined1 local_47;
  undefined8 local_44;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_58[0] = 0;
  local_48 = 2;
  local_58[1] = 0xd;
  local_47 = param_2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_58[0],0xd,"mouseEnabled",0xd,0x3f);
  FUN_14208f550(param_1,local_58,&local_48);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_48 = 2;
  local_58[0] = 0;
  local_58[1] = 0xe;
  local_47 = param_2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_58[0],0xe,"mouseChildren",0xe,0x3f);
  FUN_14208f550(param_1,local_58,&local_48);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14155a670 FUN_14155a670 body=360 status=ok
// SIG undefined FUN_14155a670(void)

void FUN_14155a670(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x68) = local_res8;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x6c) = local_resc;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x78,0);
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  local_30 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x88) != &local_38) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x90,&local_30);
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  puVar3 = (undefined8 *)(param_1 + 0x98);
  if ((undefined *)*puVar3 != &DAT_144c687cc) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (*(int *)(param_1 + 0xa4) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar3);
      iVar7 = *(int *)(param_1 + 0xa0);
    }
    *(int *)(param_1 + 0xa0) = iVar7;
    if (*(int *)(param_1 + 0xa4) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar3);
    }
  }
  local_res10 = 0;
  FUN_140e21cd0(&local_28,0);
  if ((local_28 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    (**(code **)(*local_28 + 0x88))(local_28,param_1 + 0x48);
  }
  plVar6 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 14155a7e0 FUN_14155a7e0 body=170 status=ok
// SIG undefined FUN_14155a7e0(void)

undefined8 FUN_14155a7e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    lVar4 = FUN_141581f90();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar5 = *(longlong **)(param_2 + 0x638);
      plVar1 = plVar5 + *(int *)(param_2 + 0x640);
      for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
        if ((*plVar5 != 0) && (*(char *)(*plVar5 + 0x4d4) != '\0')) {
          return 0;
        }
      }
      cVar3 = FUN_1415640c0(param_1,param_2);
      if (cVar3 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14155a8a0 FUN_14155a8a0 body=251 status=ok
// SIG undefined FUN_14155a8a0(void)

void FUN_14155a8a0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [24];
  undefined8 local_18;
  undefined8 local_10;
  
  local_res8 = *(undefined4 *)(param_1 + 8);
  local_resc = *(undefined4 *)(param_1 + 0xc);
  local_res10[0] = param_2;
  FUN_141729b50(local_res10);
  FUN_14172a400(local_res10);
  cVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res8);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
      local_18 = 0;
      local_10 = 0;
      (**(code **)(*plVar5 + 0x4e8))(plVar5,DAT_1468a68a8,&local_18);
      FName::FName(&local_res8,L"Puzzle",1);
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
      (**(code **)(*plVar5 + 0x570))(plVar5,&local_res8,0,1);
    }
  }
  return;
}



// FUNCTION 14155a9a0 FUN_14155a9a0 body=366 status=ok
// SIG undefined FUN_14155a9a0(void)

void FUN_14155a9a0(longlong param_1,char param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [8];
  
  local_res8 = *(undefined4 *)(param_1 + 8);
  local_resc = *(undefined4 *)(param_1 + 0xc);
  FUN_141729b50(local_res10);
  FUN_14172a400(local_res10);
  cVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (cVar2 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res8);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar9;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
       (plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 8), (char)plVar6[0xd8] == '\t')) {
      *(undefined1 *)(plVar6 + 0xd8) = 10;
      if (param_2 != '\0') {
        cVar2 = FWeakObjectPtr::IsValid(plVar6 + 0x103);
        if ((cVar2 != '\0') && (cVar2 = FWeakObjectPtr::IsValid(plVar6 + 0x102), cVar2 != '\0')) {
          uVar7 = FWeakObjectPtr::Get(plVar6 + 0x102);
          uVar8 = FWeakObjectPtr::Get(plVar6 + 0x103);
          uVar3 = FUN_141564040(uVar7);
          FUN_141587ab0(uVar8,uVar3);
        }
        FName::FName(&local_res8,L"Reward",1);
        (**(code **)(*plVar6 + 0x570))(plVar6,&local_res8,1,0);
        return;
      }
      *(undefined1 *)(plVar6 + 0xd8) = 7;
      FUN_14157c390(plVar6);
    }
  }
  return;
}



// FUNCTION 14155ab10 FUN_14155ab10 body=181 status=ok
// SIG undefined FUN_14155ab10(void)

void FUN_14155ab10(longlong param_1,char param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [8];
  
  local_res8 = *(undefined4 *)(param_1 + 0x10);
  local_resc = *(undefined4 *)(param_1 + 0x14);
  FUN_141729b50(local_res10);
  FUN_14172a400(local_res10);
  cVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res8);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      if (param_2 != '\0') {
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x6c0) = 3;
        return;
      }
      FUN_14157c390();
    }
  }
  return;
}



// FUNCTION 14155abd0 Execute body=81 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UGunfireTechRequirementsImpl,TTypeWrapper<void>___cdecl(bool,int,int)>
     ::Execute(longlong param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00014155ac1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14155ac30 FUN_14155ac30 body=80 status=ok
// SIG undefined FUN_14155ac30(void)

void FUN_14155ac30(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00014155ac7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14155ac80 FUN_14155ac80 body=652 status=ok
// SIG undefined FUN_14155ac80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14155ac80(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  void *_Src;
  longlong *plVar10;
  float fVar11;
  longlong local_28 [2];
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_2 + 0x78))) {
      plVar10 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_2 + 0x70));
      iVar1 = *(int *)(param_1 + 0x44);
      iVar2 = (int)plVar10[1];
      *(int *)(plVar10 + 1) = iVar2 + 1;
      if (*(int *)((longlong)plVar10 + 0xc) < iVar2 + 1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar10,iVar2);
      }
      _Src = (void *)(*plVar10 + (longlong)iVar1);
      _guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 1),_Src,(longlong)(iVar2 - iVar1));
      *(undefined1 *)((longlong)iVar1 + *plVar10) = 0x10;
      *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) + -1;
      FUN_14155c2a0(param_2,*(undefined4 *)(param_1 + 0x44));
      FUN_141558bb0(param_2,param_1 + 0x40);
      lVar6 = FWeakObjectPtr::Get(param_2 + 0x48);
      if (lVar6 == 0) {
        TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x28,1);
        return;
      }
      plVar10 = (longlong *)(lVar6 + 0x6a0);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_14419ca48;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        plVar7[2] = (longlong)&LAB_14156cdd0;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[4] = lVar8;
        *plVar7 = (longlong)&PTR_FUN_14419ca90;
      }
      if (local_28 != plVar10) {
        if (plVar7 == (longlong *)0x0) {
          if ((*(int *)(lVar6 + 0x6a8) != 0) &&
             (plVar3 = (longlong *)*plVar10, plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x28))(plVar3,0);
            if (*plVar10 != 0) {
              lVar8 = FMemory::Realloc(*plVar10,0,0);
              *plVar10 = lVar8;
            }
            *(undefined4 *)(lVar6 + 0x6a8) = 0;
          }
        }
        else {
          (**(code **)(*plVar7 + 0x30))(plVar7,plVar10);
        }
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        lVar8 = FMemory::Realloc(plVar7,0,0);
        if (lVar8 != 0) {
          FMemory::Free(lVar8);
        }
      }
      lVar8 = *(longlong *)(lVar6 + 0x6d0);
      *(undefined1 *)(lVar6 + 0x6c0) = 8;
      if (lVar8 != 0) {
        if ((*(char *)(lVar8 + 0x38) == '\0') &&
           (cVar4 = FWeakObjectPtr::IsValid(lVar8 + 0x7c), cVar4 != '\0')) {
          uVar9 = FWeakObjectPtr::Get(lVar8 + 0x7c);
          fVar11 = (float)FUN_14155d900(uVar9);
          *(float *)(lVar8 + 0x150) = (float)-((int)ROUND(-0.5 - (fVar11 + fVar11)) >> 1);
          *(undefined4 *)(lVar8 + 0x140) = *(undefined4 *)(param_1 + 0x40);
          *(undefined4 *)(lVar8 + 0x144) = *(undefined4 *)(param_1 + 0x44);
          uVar5 = 3;
          *(undefined2 *)(lVar8 + 0x108) = 0;
        }
        else {
          *(undefined1 *)(lVar8 + 0x15a) = 0;
          uVar5 = 0x11;
        }
        *(undefined1 *)(lVar8 + 0x38) = uVar5;
        return;
      }
      FUN_14156c9f0(lVar6,0);
      return;
    }
  }
  if (((*(int *)(param_1 + 0x30) != 0) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))(), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014155aef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x40))(*(longlong **)(param_1 + 0x28),0);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014155af08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_00000000 + 0x40))(0,0);
    return;
  }
  return;
}



// FUNCTION 14155af10 FUN_14155af10 body=659 status=ok
// SIG undefined FUN_14155af10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14155af10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  float fVar12;
  longlong local_18 [2];
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    lVar7 = (longlong)iVar2;
    if ((-1 < iVar2) && (iVar2 < *(int *)(param_2 + 0x78))) {
      iVar2 = *(int *)(param_1 + 0x44);
      lVar9 = *(longlong *)(param_2 + 0x70);
      iVar11 = *(int *)(lVar9 + 8 + lVar7 * 0x10);
      iVar6 = (iVar11 - iVar2) + -1;
      if (iVar6 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar2 + *(longlong *)(lVar9 + lVar7 * 0x10)),
                   (void *)((longlong)(iVar2 + 1) + *(longlong *)(lVar9 + lVar7 * 0x10)),
                   (longlong)iVar6);
        iVar11 = *(int *)(lVar9 + 8 + lVar7 * 0x10);
      }
      *(int *)(lVar9 + 8 + lVar7 * 0x10) = iVar11 + -1;
      *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) + 1;
      FUN_14155c2a0(param_2,*(undefined4 *)(param_1 + 0x44));
      FUN_141558bb0(param_2,param_1 + 0x40);
      lVar7 = FWeakObjectPtr::Get(param_2 + 0x48);
      if (lVar7 == 0) {
        TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x28,1);
        return;
      }
      plVar1 = (longlong *)(lVar7 + 0x6a0);
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_14419ca48;
        FWeakObjectPtr::operator=(plVar8 + 1,param_1);
        plVar8[2] = (longlong)&LAB_14156cdd0;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[4] = lVar9;
        *plVar8 = (longlong)&PTR_FUN_14419ca90;
      }
      if (local_18 != plVar1) {
        if (plVar8 == (longlong *)0x0) {
          if ((*(int *)(lVar7 + 0x6a8) != 0) &&
             (plVar3 = (longlong *)*plVar1, plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x28))(plVar3,0);
            if (*plVar1 != 0) {
              lVar9 = FMemory::Realloc(*plVar1,0,0);
              *plVar1 = lVar9;
            }
            *(undefined4 *)(lVar7 + 0x6a8) = 0;
          }
        }
        else {
          (**(code **)(*plVar8 + 0x30))(plVar8,plVar1);
        }
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        lVar9 = FMemory::Realloc(plVar8,0,0);
        if (lVar9 != 0) {
          FMemory::Free(lVar9);
        }
      }
      lVar9 = *(longlong *)(lVar7 + 0x6d0);
      *(undefined1 *)(lVar7 + 0x6c0) = 8;
      if (lVar9 != 0) {
        if ((*(char *)(lVar9 + 0x38) == '\0') &&
           (cVar4 = FWeakObjectPtr::IsValid(lVar9 + 0x7c), cVar4 != '\0')) {
          uVar10 = FWeakObjectPtr::Get(lVar9 + 0x7c);
          fVar12 = (float)FUN_14155d900(uVar10);
          *(float *)(lVar9 + 0x150) = (float)-((int)ROUND(-0.5 - (fVar12 + fVar12)) >> 1);
          *(undefined4 *)(lVar9 + 0x140) = *(undefined4 *)(param_1 + 0x40);
          *(undefined4 *)(lVar9 + 0x144) = *(undefined4 *)(param_1 + 0x44);
          uVar5 = 5;
          *(undefined2 *)(lVar9 + 0x108) = 0;
        }
        else {
          *(undefined1 *)(lVar9 + 0x15a) = 0;
          uVar5 = 0x11;
        }
        *(undefined1 *)(lVar9 + 0x38) = uVar5;
        return;
      }
      FUN_14156c9f0(lVar7,0);
      return;
    }
  }
  if (((*(int *)(param_1 + 0x30) != 0) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))(), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014155b184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x40))(*(longlong **)(param_1 + 0x28),0);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014155b19f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_00000000 + 0x40))(0,0);
    return;
  }
  return;
}



// FUNCTION 14155b1b0 FUN_14155b1b0 body=764 status=ok
// SIG undefined FUN_14155b1b0(void)

void FUN_14155b1b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  void *_Src;
  longlong *plVar10;
  float fVar11;
  longlong local_28 [2];
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    lVar5 = (longlong)iVar1;
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_2 + 0x78))) {
      iVar1 = *(int *)(param_1 + 0x4c);
      lVar7 = *(longlong *)(param_2 + 0x70);
      iVar9 = *(int *)(lVar7 + 8 + lVar5 * 0x10);
      iVar4 = (iVar9 - iVar1) + -1;
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar1 + *(longlong *)(lVar7 + lVar5 * 0x10)),
                   (void *)((longlong)(iVar1 + 1) + *(longlong *)(lVar7 + lVar5 * 0x10)),
                   (longlong)iVar4);
        iVar9 = *(int *)(lVar7 + 8 + lVar5 * 0x10);
      }
      *(int *)(lVar7 + 8 + lVar5 * 0x10) = iVar9 + -1;
    }
    iVar1 = *(int *)(param_1 + 0x50);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_2 + 0x78))) {
      plVar10 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_2 + 0x70));
      iVar1 = *(int *)(param_1 + 0x54);
      iVar9 = (int)plVar10[1];
      *(int *)(plVar10 + 1) = iVar9 + 1;
      if (*(int *)((longlong)plVar10 + 0xc) < iVar9 + 1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar10,iVar9);
      }
      _Src = (void *)(*plVar10 + (longlong)iVar1);
      _guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 1),_Src,(longlong)(iVar9 - iVar1));
      *(undefined1 *)((longlong)iVar1 + *plVar10) = 0x10;
      lVar5 = 0x50;
      if (*(int *)(param_1 + 0x4c) <= *(int *)(param_1 + 0x54)) {
        lVar5 = 0x48;
      }
      FUN_14155c2a0(param_2,*(undefined4 *)(lVar5 + param_1 + 4));
      FUN_141558bb0(param_2,lVar5 + param_1);
      lVar5 = FWeakObjectPtr::Get(param_2 + 0x48);
      if (lVar5 == 0) {
        TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x28,1);
        return;
      }
      plVar10 = (longlong *)(lVar5 + 0x6a0);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_14419ca48;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        plVar6[2] = (longlong)&LAB_14156cdd0;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[4] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_14419ca90;
      }
      if (local_28 != plVar10) {
        if (plVar6 == (longlong *)0x0) {
          if ((*(int *)(lVar5 + 0x6a8) != 0) &&
             (plVar2 = (longlong *)*plVar10, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar10 != 0) {
              lVar7 = FMemory::Realloc(*plVar10,0,0);
              *plVar10 = lVar7;
            }
            *(undefined4 *)(lVar5 + 0x6a8) = 0;
          }
        }
        else {
          (**(code **)(*plVar6 + 0x30))(plVar6,plVar10);
        }
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar7 = FMemory::Realloc(plVar6,0,0);
        if (lVar7 != 0) {
          FMemory::Free(lVar7);
        }
      }
      lVar7 = *(longlong *)(lVar5 + 0x6d0);
      *(undefined1 *)(lVar5 + 0x6c0) = 8;
      if (lVar7 != 0) {
        if (*(char *)(lVar7 + 0x38) == '\0') {
          cVar3 = FWeakObjectPtr::IsValid(lVar7 + 0x7c);
          if (cVar3 != '\0') {
            uVar8 = FWeakObjectPtr::Get(lVar7 + 0x7c);
            fVar11 = (float)FUN_14155d900(uVar8);
            *(float *)(lVar7 + 0x150) = (float)-((int)ROUND(-0.5 - (fVar11 + fVar11)) >> 1);
            *(undefined4 *)(lVar7 + 0x140) = *(undefined4 *)(param_1 + 0x48);
            *(undefined4 *)(lVar7 + 0x144) = *(undefined4 *)(param_1 + 0x4c);
            *(undefined4 *)(lVar7 + 0x148) = *(undefined4 *)(param_1 + 0x50);
            *(undefined4 *)(lVar7 + 0x14c) = *(undefined4 *)(param_1 + 0x54);
            *(undefined1 *)(lVar7 + 0x38) = 7;
            return;
          }
        }
        *(undefined1 *)(lVar7 + 0x15a) = 0;
        *(undefined1 *)(lVar7 + 0x38) = 0x11;
        return;
      }
      FUN_14156c9f0(lVar5,0);
      return;
    }
  }
  if ((*(int *)(param_1 + 0x30) != 0) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x30) == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)(param_1 + 0x28);
      }
      (**(code **)(*plVar10 + 0x40))(plVar10,0);
    }
  }
  return;
}



// FUNCTION 14155b4b0 FUN_14155b4b0 body=20 status=ok
// SIG undefined FUN_14155b4b0(void)

undefined1 FUN_14155b4b0(longlong param_1)

{
  FUN_1415545a0(param_1 + 8);
  return 1;
}



// FUNCTION 14155b4d0 FUN_14155b4d0 body=253 status=ok
// SIG undefined FUN_14155b4d0(void)

undefined8 FUN_14155b4d0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [24];
  undefined8 local_18;
  undefined8 local_10;
  
  local_res8 = *(undefined4 *)(param_1 + 8);
  local_resc = *(undefined4 *)(param_1 + 0xc);
  local_res10[0] = param_2;
  FUN_141729b50(local_res10);
  FUN_14172a400(local_res10);
  cVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res8);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
      local_18 = 0;
      local_10 = 0;
      (**(code **)(*plVar5 + 0x4e8))(plVar5,DAT_1468a68a8,&local_18);
      FName::FName(&local_res8,L"Puzzle",1);
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
      (**(code **)(*plVar5 + 0x570))(plVar5,&local_res8,0,1);
    }
  }
  return 1;
}



// FUNCTION 14155b5d0 FUN_14155b5d0 body=370 status=ok
// SIG undefined FUN_14155b5d0(void)

undefined8 FUN_14155b5d0(longlong param_1,char param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [8];
  
  local_res8 = *(undefined4 *)(param_1 + 8);
  local_resc = *(undefined4 *)(param_1 + 0xc);
  FUN_141729b50(local_res10);
  FUN_14172a400(local_res10);
  cVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (cVar2 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res8);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar9;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
       (plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 8), (char)plVar6[0xd8] == '\t')) {
      *(undefined1 *)(plVar6 + 0xd8) = 10;
      if (param_2 != '\0') {
        cVar2 = FWeakObjectPtr::IsValid(plVar6 + 0x103);
        if ((cVar2 != '\0') && (cVar2 = FWeakObjectPtr::IsValid(plVar6 + 0x102), cVar2 != '\0')) {
          uVar7 = FWeakObjectPtr::Get(plVar6 + 0x102);
          uVar8 = FWeakObjectPtr::Get(plVar6 + 0x103);
          uVar3 = FUN_141564040(uVar7);
          FUN_141587ab0(uVar8,uVar3);
        }
        FName::FName(&local_res8,L"Reward",1);
        (**(code **)(*plVar6 + 0x570))(plVar6,&local_res8,1,0);
        return 1;
      }
      *(undefined1 *)(plVar6 + 0xd8) = 7;
      FUN_14157c390(plVar6);
    }
  }
  return 1;
}



// FUNCTION 14155b750 FUN_14155b750 body=185 status=ok
// SIG undefined FUN_14155b750(void)

undefined8 FUN_14155b750(longlong param_1,char param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [8];
  
  local_res8 = *(undefined4 *)(param_1 + 0x10);
  local_resc = *(undefined4 *)(param_1 + 0x14);
  FUN_141729b50(local_res10);
  FUN_14172a400(local_res10);
  cVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res8);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      if (param_2 != '\0') {
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x6c0) = 3;
        return 1;
      }
      FUN_14157c390();
    }
  }
  return 1;
}



// FUNCTION 14155b810 ExecuteIfSafe body=111 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,UGunfireTechRequirementsImpl,void___cdecl(bool,int,int)>::
ExecuteIfSafe(longlong param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

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



// FUNCTION 14155b880 FUN_14155b880 body=109 status=ok
// SIG undefined FUN_14155b880(void)

undefined1 FUN_14155b880(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

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



// FUNCTION 14155b8f0 FUN_14155b8f0 body=769 status=ok
// SIG undefined FUN_14155b8f0(void)

void FUN_14155b8f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 local_res8;
  int iStackX_c;
  
  if (*(char *)(param_1 + 0x38) != '\x03') goto LAB_14155bbc3;
  *(undefined1 *)(param_1 + 0x38) = 4;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x5c);
  if ((cVar3 == '\0') || (cVar3 = FWeakObjectPtr::IsValid(param_1 + 100), cVar3 == '\0')) {
LAB_14155ba57:
    *(undefined1 *)(param_1 + 0x15a) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0x11;
  }
  else {
    lVar5 = FWeakObjectPtr::Get(param_1 + 100);
    iVar4 = *(int *)(lVar5 + 0x180);
    if (iVar4 < 1) goto LAB_14155ba57;
    lVar9 = **(longlong **)(lVar5 + 0x178);
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x1bb) != '\0')) {
      *(undefined1 *)(lVar9 + 0x1bb) = 0;
      FUN_141576560();
      iVar4 = *(int *)(lVar5 + 0x180);
    }
    if (1 < (longlong)iVar4) {
      lVar9 = 1;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x178) + lVar9 * 8);
        if (lVar2 != 0) {
          iVar1 = *(int *)(param_1 + 0x100);
          iStackX_c = (int)((ulonglong)*(undefined8 *)(lVar2 + 0x1c0) >> 0x20);
          _local_res8 = CONCAT44(iStackX_c + -1,(int)*(undefined8 *)(lVar2 + 0x1c0));
          *(int *)(param_1 + 0x100) = iVar1 + 1;
          if (*(int *)(param_1 + 0x104) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xf8,iVar1);
          }
          *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = lVar2;
          FUN_140747230(lVar2 + 0x1a0,param_1,FUN_141575dd0);
          FUN_141564320(lVar2,lVar2 + 0x1c0,&local_res8,param_1 + 0x4c,
                        *(undefined4 *)(param_1 + 0x48),0);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar4);
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x5c);
  if (cVar3 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x5c);
    plVar7 = (longlong *)FUN_14155d710(uVar6,*(undefined4 *)(param_1 + 0x140));
    uVar10 = (ulonglong)*(int *)(param_1 + 0x144);
    if (*(int *)(param_1 + 0x144) < (int)plVar7[1]) {
      lVar5 = uVar10 * 8;
      do {
        lVar9 = *(longlong *)(lVar5 + *plVar7);
        if (lVar9 != 0) {
          iVar4 = *(int *)(param_1 + 0x100);
          iStackX_c = (int)((ulonglong)*(undefined8 *)(lVar9 + 0x1c0) >> 0x20);
          _local_res8 = CONCAT44(iStackX_c + 1,(int)*(undefined8 *)(lVar9 + 0x1c0));
          *(int *)(param_1 + 0x100) = iVar4 + 1;
          if (*(int *)(param_1 + 0x104) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xf8,iVar4);
          }
          *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar4 * 8) = lVar9;
          FUN_140747230(lVar9 + 0x1a0,param_1,FUN_141575dd0);
          FUN_141564320(lVar9,lVar9 + 0x1c0,&local_res8,param_1 + 0x4c,
                        *(undefined4 *)(param_1 + 0x48),0);
        }
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
        lVar5 = lVar5 + 8;
      } while ((int)uVar8 < (int)plVar7[1]);
    }
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x5c);
    if ((*(longlong *)(lVar5 + 0x180) != 0) &&
       (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x180) + 0x1b0), lVar5 != 0)) {
      lVar9 = FWeakObjectPtr::Get(param_1 + 0x5c);
      if (*(longlong *)(lVar9 + 0x180) != 0) {
        FUN_141563ab0(*(longlong *)(lVar9 + 0x180),param_1 + 0x140);
      }
      if (*(char *)(lVar5 + 0x1bb) != '\0') {
        return;
      }
      *(undefined1 *)(lVar5 + 0x1bb) = 1;
      FUN_141576560(lVar5);
      return;
    }
  }
LAB_14155bbc3:
  *(undefined1 *)(param_1 + 0x15a) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0x11;
  return;
}



// FUNCTION 14155bc00 FUN_14155bc00 body=515 status=ok
// SIG undefined FUN_14155bc00(void)

void FUN_14155bc00(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined4 local_res8;
  int iStackX_c;
  
  if (*(char *)(param_1 + 0x38) == '\x05') {
    *(undefined1 *)(param_1 + 0x38) = 6;
    FUN_141563d80();
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x5c);
    if (cVar3 != '\0') {
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x5c);
      plVar5 = (longlong *)FUN_14155d710(uVar4,*(undefined4 *)(param_1 + 0x140));
      iVar7 = *(int *)(param_1 + 0x144);
      if ((iVar7 < 0) || ((int)plVar5[1] <= iVar7)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar8 = *(longlong *)(*plVar5 + (longlong)iVar7 * 8), lVar8 != 0)) {
        lVar6 = FUN_141582720();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(char *)(lVar8 + 0x1bb) != '\0') {
            *(undefined1 *)(lVar8 + 0x1bb) = 0;
            FUN_141576560(lVar8);
          }
          iVar7 = *(int *)(param_1 + 0x144) + 1;
          if ((int)plVar5[1] <= iVar7) {
            return;
          }
          lVar8 = (longlong)iVar7 * 8;
          do {
            lVar6 = *(longlong *)(lVar8 + *plVar5);
            if (lVar6 != 0) {
              iVar1 = *(int *)(param_1 + 0x100);
              _local_res8 = CONCAT44((int)((ulonglong)*(undefined8 *)(lVar6 + 0x1c0) >> 0x20) + -1,
                                     (int)*(undefined8 *)(lVar6 + 0x1c0));
              *(int *)(param_1 + 0x100) = iVar1 + 1;
              if (*(int *)(param_1 + 0x104) < iVar1 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_1 + 0xf8,iVar1);
              }
              *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = lVar6;
              FUN_140747230(lVar6 + 0x1a0,param_1,FUN_141575dd0);
              FUN_141564320(lVar6,lVar6 + 0x1c0,&local_res8,param_1 + 0x4c,
                            *(undefined4 *)(param_1 + 0x48),0);
            }
            iVar7 = iVar7 + 1;
            lVar8 = lVar8 + 8;
          } while (iVar7 < (int)plVar5[1]);
          return;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x15a) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0x11;
  return;
}



// FUNCTION 14155be10 FUN_14155be10 body=490 status=ok
// SIG undefined FUN_14155be10(void)

void FUN_14155be10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(char *)(param_1 + 0x38) == '\a') {
    *(undefined1 *)(param_1 + 0x38) = 8;
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x5c);
    if (cVar5 != '\0') {
      uVar6 = FWeakObjectPtr::Get(param_1 + 0x5c);
      plVar7 = (longlong *)FUN_14155d710(uVar6,*(undefined4 *)(param_1 + 0x140));
      lVar2 = *(longlong *)(*plVar7 + (longlong)*(int *)(param_1 + 0x144) * 8);
      lVar3 = *(longlong *)(*plVar7 + (longlong)*(int *)(param_1 + 0x14c) * 8);
      if ((lVar2 != 0) && (lVar3 != 0)) {
        plVar7 = (longlong *)(param_1 + 0xf8);
        plVar4 = (longlong *)*plVar7;
        iVar1 = *(int *)(param_1 + 0x100);
        for (plVar8 = plVar4; plVar8 != plVar4 + iVar1; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar2) {
            if ((int)((longlong)plVar8 - (longlong)plVar4 >> 3) != -1) goto LAB_14155befa;
            break;
          }
        }
        *(int *)(param_1 + 0x100) = iVar1 + 1;
        if (*(int *)(param_1 + 0x104) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar1);
        }
        *(longlong *)(*plVar7 + (longlong)iVar1 * 8) = lVar2;
LAB_14155befa:
        FUN_140747230(lVar2 + 0x1a0,param_1,FUN_141575dd0);
        FUN_141564320(lVar2,lVar2 + 0x1c0,lVar3 + 0x1c0,param_1 + 0x4c,
                      *(undefined4 *)(param_1 + 0x48),0);
        plVar4 = (longlong *)*plVar7;
        iVar1 = *(int *)(param_1 + 0x100);
        for (plVar8 = plVar4; plVar8 != plVar4 + iVar1; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar3) {
            if ((int)((longlong)plVar8 - (longlong)plVar4 >> 3) != -1) goto LAB_14155bf86;
            break;
          }
        }
        *(int *)(param_1 + 0x100) = iVar1 + 1;
        if (*(int *)(param_1 + 0x104) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7);
        }
        *(longlong *)(*plVar7 + (longlong)iVar1 * 8) = lVar3;
LAB_14155bf86:
        FUN_140747230(lVar3 + 0x1a0,param_1,FUN_141575dd0);
        FUN_141564320(lVar3,lVar3 + 0x1c0,lVar2 + 0x1c0,param_1 + 0x4c,
                      *(undefined4 *)(param_1 + 0x48),0);
      }
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x15a) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0x11;
  return;
}



// FUNCTION 14155c000 FUN_14155c000 body=346 status=ok
// SIG undefined FUN_14155c000(void)

void FUN_14155c000(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar2 = FUN_1422312c0();
  if (lVar2 != 0) {
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
      plVar4 = (longlong *)UListView::OnItemSelectionChanged(lVar2);
      plVar6 = (longlong *)*plVar4;
      plVar4 = plVar6 + (int)plVar4[1];
      for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
        lVar2 = *plVar6;
        if (lVar2 != 0) {
          uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
          lVar2 = UPlayer::GetPlayerController(lVar2,uVar5);
          if (lVar2 != 0) {
            lVar3 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              FUN_140b93d80(lVar2,DAT_1468a6a30);
              FUN_142dbb5d0(lVar2 + 0x1690,&DAT_1468a6a30);
              FUN_142dbb5d0(lVar2 + 0x15f8,&DAT_1468a6a30);
              FUN_142dbb5d0(lVar2 + 0x1560,&DAT_1468a6a30);
              FUN_140d03d40(lVar2);
            }
          }
        }
      }
    }
  }
  FUN_140ad32c0(param_1);
  return;
}



// FUNCTION 14155c160 FUN_14155c160 body=307 status=ok
// SIG undefined FUN_14155c160(void)

ulonglong FUN_14155c160(undefined8 param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  
  uVar7 = FUN_141592950(param_1,&DAT_144c6871c,0,1,param_2);
  if ((int)uVar7 == -1) {
    FUN_141601d10(&local_18);
    (**(code **)(*local_18 + 0x10))(local_18,param_1);
    FBreakIterator::CreateLineBreakIterator(&local_28);
    (**(code **)(*local_28 + 0x10))();
    uVar6 = 0xffffffff;
    uVar5 = 0;
    do {
      if ((int)param_2 < (int)uVar5) break;
      iVar4 = (**(code **)(*local_18 + 0x58))();
      uVar6 = uVar5;
      if (iVar4 < 1) break;
      uVar5 = (**(code **)(*local_28 + 0x58))(local_28,iVar4 + -1);
    } while (uVar5 != 0xffffffff);
    if (uVar6 == 0xffffffff) {
      uVar6 = (**(code **)(*local_28 + 0x50))(local_28,param_2 + 1);
      if (uVar6 == 0xffffffff) {
        uVar6 = param_2;
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    uVar7 = (ulonglong)uVar6;
  }
  return uVar7;
}



// FUNCTION 14155c2a0 FUN_14155c2a0 body=483 status=ok
// SIG undefined FUN_14155c2a0(void)

void FUN_14155c2a0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  byte *local_48;
  uint local_40;
  uint local_3c;
  
  uVar12 = (ulonglong)param_2;
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_1 + 0xd8,param_1 + 200);
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0xd0))) {
    iVar1 = *(int *)(param_1 + 0x88);
    uVar13 = uVar12;
    for (; (longlong)uVar12 < (longlong)iVar1; uVar12 = uVar12 + 1) {
      pbVar6 = (byte *)0x0;
      iVar4 = *(int *)(param_1 + 0x78);
      lVar2 = (longlong)iVar4;
      local_48 = (byte *)0x0;
      local_3c = 0;
      iVar11 = (int)uVar13;
      pbVar10 = pbVar6;
      pbVar8 = pbVar6;
      pbVar9 = pbVar6;
      if (0 < iVar4) {
        do {
          iVar4 = (int)pbVar6;
          if (((longlong)uVar12 < 0) ||
             (*(int *)(pbVar10 + *(longlong *)(param_1 + 0x70) + 8) <= iVar11)) {
            local_40 = iVar4 + 1;
            if ((int)pbVar9 < (int)local_40) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_48,pbVar6);
              pbVar9 = (byte *)(ulonglong)local_3c;
              pbVar8 = local_48;
            }
            pbVar8[iVar4] = 0;
          }
          else {
            lVar7 = *(longlong *)(pbVar10 + *(longlong *)(param_1 + 0x70));
            local_40 = iVar4 + 1;
            if ((int)pbVar9 < (int)local_40) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_48,pbVar6);
              pbVar9 = (byte *)(ulonglong)local_3c;
              pbVar8 = local_48;
            }
            pbVar8[iVar4] = *(byte *)(uVar12 + lVar7);
          }
          pbVar6 = (byte *)(ulonglong)local_40;
          lVar2 = lVar2 + -1;
          pbVar10 = pbVar10 + 0x10;
        } while (lVar2 != 0);
        iVar4 = *(int *)(param_1 + 0x78);
      }
      lVar2 = 0;
      iVar5 = (int)pbVar6;
      if (((iVar5 == iVar4) && (-1 < (longlong)uVar12)) && (iVar11 < *(int *)(param_1 + 0x88))) {
        lVar7 = (longlong)(pbVar8 + iVar5) - (longlong)pbVar8;
        if (pbVar8 + iVar5 < pbVar8) {
          lVar7 = lVar2;
        }
        lVar3 = lVar2;
        pbVar10 = pbVar8;
        if (lVar7 != 0) {
          do {
            lVar2 = lVar3 + 1;
            if ((*pbVar10 & *(byte *)(uVar12 + *(longlong *)(param_1 + 0x80))) == 0) {
              lVar2 = lVar3;
            }
            pbVar10 = pbVar10 + 1;
            lVar3 = lVar2;
          } while ((longlong)pbVar10 - (longlong)pbVar8 != lVar7);
        }
        bVar14 = lVar2 == iVar5;
      }
      else {
        bVar14 = false;
      }
      if (pbVar8 != (byte *)0x0) {
        FMemory::Free(pbVar8);
      }
      uVar13 = (ulonglong)(iVar11 + 1);
      *(bool *)(uVar12 + *(longlong *)(param_1 + 200)) = bVar14;
    }
  }
  return;
}



// FUNCTION 14155c490 FUN_14155c490 body=1587 status=ok
// SIG undefined FUN_14155c490(void)

void FUN_14155c490(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int local_res10;
  longlong *local_140;
  longlong *local_138;
  longlong *plStack_130;
  longlong *local_128;
  longlong *plStack_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  int local_e8;
  undefined4 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined **local_a0;
  undefined1 *local_98;
  undefined ***local_68;
  
  if (*(char *)(param_1 + 0x38) == '\v') {
    *(undefined1 *)(param_1 + 0x38) = 0xc;
    cVar10 = FWeakObjectPtr::IsValid(param_1 + 0xec);
    if (cVar10 != '\0') {
      plVar12 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xec);
      local_d8 = 0;
      local_d0 = 0;
      (**(code **)(*plVar12 + 0x4e8))(plVar12,DAT_1468a68c0,&local_d8);
    }
    cVar10 = FWeakObjectPtr::IsValid(param_1 + 0x5c);
    if (cVar10 != '\0') {
      puVar17 = *(undefined4 **)(param_1 + 0x130);
      puVar16 = puVar17 + *(int *)(param_1 + 0x138);
      local_e0 = puVar16;
      if (puVar17 != puVar16) {
        do {
          uVar3 = *puVar17;
          local_108 = puVar17;
          uVar13 = FWeakObjectPtr::Get(param_1 + 0x5c);
          FUN_14155d830(uVar13,&local_f0,uVar3);
          local_res10 = 0;
          if (0 < local_e8) {
            local_140 = local_f0;
            do {
              lVar5 = *local_140;
              if (lVar5 != 0) {
                iVar4 = *(int *)(param_1 + 0x100);
                *(int *)(param_1 + 0x100) = iVar4 + 1;
                if (*(int *)(param_1 + 0x104) < iVar4 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (param_1 + 0xf8,iVar4);
                }
                *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar4 * 8) = lVar5;
                FWeakObjectPtr::operator=(&local_110,lVar5);
                FWeakObjectPtr::operator=(&local_118,param_1);
                uVar9 = local_10c;
                uVar8 = local_110;
                uVar7 = local_114;
                uVar3 = local_118;
                uVar11 = *(int *)(param_1 + 0x140) - local_res10;
                uVar15 = (int)uVar11 >> 0x1f;
                plVar12 = (longlong *)operator_new(200);
                if (plVar12 == (longlong *)0x0) {
                  plVar12 = (longlong *)0x0;
                }
                else {
                  *(undefined4 *)(plVar12 + 1) = 1;
                  *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
                  *plVar12 = (longlong)&PTR_FUN_144c7e080;
                  local_a0 = &PTR_FUN_144c7e550;
                  local_98 = &LAB_141580f90;
                  local_68 = &local_a0;
                  FUN_1415524d0(plVar12 + 2,DAT_1468a64b0,&local_a0,0);
                }
                local_100 = plVar12 + 2;
                local_f8 = plVar12;
                if (plVar12 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar14 = plVar12 + 1;
                  lVar5 = *plVar14;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*plVar12)(plVar12);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar12 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar12 + 8))(plVar12);
                    }
                  }
                }
                plVar12[3] = 0x3e45798ee0000000;
                plVar14 = (longlong *)operator_new(0x18);
                if (plVar14 == (longlong *)0x0) {
                  plVar14 = (longlong *)0x0;
                }
                else {
                  *(undefined4 *)(plVar14 + 1) = 1;
                  *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
                  *plVar14 = (longlong)&PTR_StartProfileThreadUsage_144c7e388;
                  *(undefined4 *)(plVar14 + 2) = 0x3f800000;
                }
                plVar2 = plVar14 + 2;
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                  UNLOCK();
                  LOCK();
                  *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                  UNLOCK();
                }
                plVar6 = (longlong *)plVar12[0x16];
                if ((longlong *)plVar12[0x17] == plVar6) {
                  local_138 = plVar2;
                  plStack_130 = plVar14;
                  FUN_141551020(plVar12 + 0x15,plVar6,&local_138);
                  plVar12 = plStack_130;
                  if (plStack_130 != (longlong *)0x0) {
                    LOCK();
                    plVar6 = plStack_130 + 1;
                    lVar5 = *plVar6;
                    *(int *)plVar6 = (int)*plVar6 + -1;
                    UNLOCK();
                    if ((int)lVar5 == 1) {
                      (**(code **)*plStack_130)(plStack_130);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar12 + 0xc);
                      iVar4 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        (**(code **)(*plStack_130 + 8))();
                      }
                    }
                  }
                }
                else {
                  *plVar6 = (longlong)plVar2;
                  plVar6[1] = (longlong)plVar14;
                  plVar12[0x16] = plVar12[0x16] + 0x10;
                  local_138 = (longlong *)0x0;
                  plStack_130 = (longlong *)0x0;
                }
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar12 = plVar14 + 1;
                  lVar5 = *plVar12;
                  *(int *)plVar12 = (int)*plVar12 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*plVar14)(plVar14);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar14 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar14 + 8))(plVar14);
                    }
                  }
                }
                FUN_141551a10(&local_100,local_c8,plVar2,0x41200000,1);
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar12 = plVar14 + 1;
                  lVar5 = *plVar12;
                  *(int *)plVar12 = (int)*plVar12 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*plVar14)(plVar14);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar14 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar14 + 8))(plVar14);
                    }
                  }
                }
                *(double *)(local_b0 + 8) =
                     (double)((float)(int)((uVar11 ^ uVar15) - uVar15) * *(float *)(param_1 + 0x50))
                ;
                plVar12 = (longlong *)operator_new(0x30);
                if (plVar12 == (longlong *)0x0) {
                  plVar12 = (longlong *)0x0;
                }
                else {
                  *(undefined4 *)(plVar12 + 1) = 1;
                  *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
                  *plVar12 = (longlong)&PTR_FUN_144c7e580;
                  plVar12[2] = (longlong)&PTR_FUN_144c7e3a8;
                  plVar12[3] = param_1;
                  *(undefined4 *)((longlong)plVar12 + 0x24) = uVar7;
                  *(undefined4 *)(plVar12 + 4) = uVar3;
                  *(undefined4 *)(plVar12 + 5) = uVar8;
                  *(undefined4 *)((longlong)plVar12 + 0x2c) = uVar9;
                }
                local_128 = plVar12 + 2;
                if (plVar12 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                  UNLOCK();
                }
                plVar14 = *(longlong **)(local_c0 + 0x88);
                if (*(longlong **)(local_c0 + 0x90) == plVar14) {
                  plStack_120 = plVar12;
                  FUN_141551020(local_c0 + 0x80,plVar14,&local_128);
                  plVar14 = plStack_120;
                  if (plStack_120 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = plStack_120 + 1;
                    lVar5 = *plVar2;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)lVar5 == 1) {
                      (**(code **)*plStack_120)(plStack_120);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar14 + 0xc);
                      iVar4 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        (**(code **)(*plStack_120 + 8))();
                      }
                    }
                  }
                }
                else {
                  *plVar14 = (longlong)local_128;
                  plVar14[1] = (longlong)plVar12;
                  *(longlong *)(local_c0 + 0x88) = *(longlong *)(local_c0 + 0x88) + 0x10;
                  local_128 = (longlong *)0x0;
                  plStack_120 = (longlong *)0x0;
                }
                if (plVar12 != (longlong *)0x0) {
                  LOCK();
                  plVar14 = plVar12 + 1;
                  lVar5 = *plVar14;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*plVar12)(plVar12);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar12 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar12 + 8))(plVar12);
                    }
                  }
                }
                plVar12 = local_a8;
                if (local_a8 != (longlong *)0x0) {
                  LOCK();
                  plVar14 = local_a8 + 1;
                  lVar5 = *plVar14;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*local_a8)(local_a8);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar12 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*local_a8 + 8))();
                    }
                  }
                }
                plVar12 = local_b8;
                if (local_b8 != (longlong *)0x0) {
                  LOCK();
                  plVar14 = local_b8 + 1;
                  lVar5 = *plVar14;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*local_b8)(local_b8);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar12 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*local_b8 + 8))();
                    }
                  }
                }
                plVar12 = local_f8;
                if (local_f8 != (longlong *)0x0) {
                  LOCK();
                  plVar14 = local_f8 + 1;
                  lVar5 = *plVar14;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*local_f8)(local_f8);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar12 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*local_f8 + 8))();
                    }
                  }
                }
              }
              local_140 = local_140 + 1;
              local_res10 = local_res10 + 1;
              puVar16 = local_e0;
              puVar17 = local_108;
            } while (local_res10 < local_e8);
          }
          if (local_f0 != (longlong *)0x0) {
            FMemory::Free();
          }
          puVar17 = puVar17 + 1;
        } while (puVar17 != puVar16);
      }
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x15a) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0x11;
  return;
}



// FUNCTION 14155cad0 FUN_14155cad0 body=171 status=ok
// SIG undefined FUN_14155cad0(void)

undefined8 FUN_14155cad0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
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
      lVar2 = FUN_140cff230(lVar2);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x230) == '\0')) {
        pwVar6 = L"SkipText";
        pwVar5 = L"GFxCSWhatsThisMenu";
        pwVar4 = L"SKIP";
        goto LAB_14155cb65;
      }
    }
  }
  pwVar6 = L"QuitText";
  pwVar5 = L"GFxCSWhatsThisMenu";
  pwVar4 = L"QUIT";
LAB_14155cb65:
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_2,pwVar4,pwVar5,pwVar6);
  return param_2;
}



// FUNCTION 14155cb80 FUN_14155cb80 body=268 status=ok
// SIG undefined FUN_14155cb80(void)

longlong FUN_14155cb80(void)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40 [2];
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  longlong local_18 [2];
  
  local_60 = 0x32;
  local_68 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  uVar2 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"/Game/PatchDLC/CitizenScience/CSGlobals.CSGlobals",100);
  local_50 = (undefined4)local_60;
  local_4c = local_60._4_4_;
  local_48 = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_58 = uVar2;
  FUN_1417978e0(&local_48,&local_58);
  local_20 = local_48;
  local_30 = 0xffffffff;
  local_2c = 0;
  FString::FString(local_18,local_40);
  lVar3 = FUN_1405ec200(&local_30);
  if (lVar3 != 0) {
    lVar4 = FUN_1415841b0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14155cc58;
  }
  lVar3 = 0;
LAB_14155cc58:
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 14155cc90 FUN_14155cc90 body=51 status=ok
// SIG undefined FUN_14155cc90(void)

longlong FUN_14155cc90(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if ((((*(longlong *)(param_1 + 0xb0) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x80), lVar1 != 0)) && (-1 < param_2))
     && (param_2 < *(int *)(lVar1 + 0x38))) {
    return (longlong)param_2 * 0xe8 + *(longlong *)(lVar1 + 0x30);
  }
  return 0;
}



// FUNCTION 14155ccd0 FUN_14155ccd0 body=53 status=ok
// SIG undefined FUN_14155ccd0(void)

longlong FUN_14155ccd0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1468a64a8;
  if (DAT_1468a64a8 == 0) {
    lVar1 = FUN_14155cb80();
    if ((lVar1 != 0) && (FUN_14155ee30(lVar1), DAT_1468a64a8 != 0)) {
      return DAT_1468a64a8;
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 14155cd10 GetNextStatesIds body=116 status=ok
// SIG undefined GetNextStatesIds(void)

undefined8 * UQuestState::GetNextStatesIds(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x218);
  _Src = *(void **)(param_1 + 0x210);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<int,FDefaultAllocator>::ResizeForCopy(param_2,iVar1,0);
  ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 2);
  return param_2;
}



// FUNCTION 14155cd90 FUN_14155cd90 body=8 status=ok
// SIG undefined FUN_14155cd90(void)

undefined8 FUN_14155cd90(void)

{
  return DAT_1468a64a8;
}



// FUNCTION 14155cda0 FUN_14155cda0 body=125 status=ok
// SIG undefined FUN_14155cda0(void)

undefined1 FUN_14155cda0(char param_1)

{
  if (DAT_1468a6aac == 0) {
    if (param_1 != '\x01') {
      if (param_1 == '\x02') {
        return 2;
      }
      if (param_1 == '\x04') {
        return 3;
      }
      if (param_1 == '\b') {
        return 1;
      }
    }
  }
  else {
    if (DAT_1468a6aac == 1) {
      if (param_1 == '\x01') {
        return 2;
      }
      if (param_1 == '\x02') {
        return 3;
      }
      if (param_1 == '\x04') {
        return 1;
      }
      return 0;
    }
    if (DAT_1468a6aac == 2) {
      if (param_1 == '\x01') {
        return 3;
      }
      if (param_1 == '\x02') {
        return 1;
      }
      if ((param_1 != '\x04') && (param_1 == '\b')) {
        return 2;
      }
    }
    else if (DAT_1468a6aac == 3) {
      if (param_1 == '\x01') {
        return 1;
      }
      if (param_1 != '\x02') {
        if (param_1 == '\x04') {
          return 2;
        }
        if (param_1 == '\b') {
          return 3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14155ce20 FUN_14155ce20 body=406 status=ok
// SIG undefined FUN_14155ce20(void)

int FUN_14155ce20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong local_18 [2];
  
  if ((((*(longlong *)(param_1 + 0xb0) == 0) || (param_2 == 0)) ||
      (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x80) == 0)) ||
     ((lVar1 = FUN_140cff230(param_2), lVar1 == 0 || (*(char *)(lVar1 + 0x231) == '\0')))) {
    return 0;
  }
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x68);
  if (param_2 == lVar1) {
    iVar4 = *(int *)(param_1 + 0x80);
    iVar3 = 1;
    if (1 < iVar4) {
      lVar1 = 4;
      do {
        if ((((*(longlong *)(param_1 + 0xb0) == 0) ||
             (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x80), lVar5 == 0)) ||
            (iVar3 < 0)) ||
           ((*(int *)(lVar5 + 0x38) <= iVar3 ||
            (lVar5 = (longlong)iVar3 * 0xe8 + *(longlong *)(lVar5 + 0x30), lVar5 == 0)))) {
          return 0;
        }
        if (*(int *)(lVar1 + *(longlong *)(param_1 + 0x78)) < *(int *)(lVar5 + 0x78)) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
        lVar1 = lVar1 + 4;
      } while (iVar3 < iVar4);
    }
    iVar4 = iVar4 + -1;
  }
  else {
    lVar1 = FUN_140cff230(param_2);
    if (lVar1 == 0) {
      return 0;
    }
    plVar2 = (longlong *)UQuestState::GetNextStatesIds(lVar1,local_18);
    iVar4 = 1;
    iVar3 = (int)plVar2[1];
    if (1 < iVar3) {
      lVar1 = 4;
      do {
        if (((*(longlong *)(param_1 + 0xb0) == 0) ||
            (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x80), lVar5 == 0)) ||
           ((iVar4 < 0 ||
            ((*(int *)(lVar5 + 0x38) <= iVar4 ||
             (lVar5 = (longlong)iVar4 * 0xe8 + *(longlong *)(lVar5 + 0x30), lVar5 == 0)))))) {
          iVar4 = 0;
          goto LAB_14155cf85;
        }
        if (*(int *)(lVar1 + *plVar2) < *(int *)(lVar5 + 0x78)) goto LAB_14155cf85;
        iVar4 = iVar4 + 1;
        lVar1 = lVar1 + 4;
      } while (iVar4 < iVar3);
    }
    iVar4 = iVar3 + -1;
LAB_14155cf85:
    if (local_18[0] != 0) {
      FMemory::Free();
      return iVar4;
    }
  }
  return iVar4;
}



// FUNCTION 14155cfc0 FUN_14155cfc0 body=746 status=ok
// SIG undefined FUN_14155cfc0(void)

void FUN_14155cfc0(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8 [7];
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [2];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar7 = (longlong *)0x0;
  if ((((10 < *(uint *)(param_1 + 0x70)) && (*(int *)(param_1 + 0x30) != 0)) &&
      (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + 0x30) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x28);
    }
    (**(code **)(*plVar7 + 0x40))(plVar7,0);
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x28,param_2);
    FUN_141559650(param_1,*(undefined4 *)(param_1 + 0x70));
    uVar6 = 1;
  }
  else {
    if (*(char *)(param_1 + 100) == '\x01') {
      if (*(longlong *)(param_1 + 0x88) != 0) {
        *(int *)(param_1 + 0xc0) = param_3;
        TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x28,param_2);
        FUN_142b49630(*(undefined8 *)(param_1 + 0x88),&local_48);
        local_a8[4] = 0;
        local_a8[5] = 0;
        local_a8[2] = 0;
        local_a8[3] = 0;
        bVar8 = *(int *)(param_1 + 0xb8) != -1;
        if (bVar8) {
          FString::PrintfImpl(local_58,&DAT_144c694c4);
          plVar7 = local_58;
        }
        else {
          local_a8[0] = 0;
          plVar7 = local_a8;
          local_a8[1] = 0;
        }
        local_a8[6] = 0;
        local_70 = 0;
        local_38 = 0;
        uStack_30 = 0;
        puVar5 = (undefined8 *)operator_new(0x28,local_a8 + 6);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &PTR_FUN_143f77df8;
          FWeakObjectPtr::operator=(puVar5 + 1,param_1);
          puVar5[2] = FUN_14155e1d0;
          uVar6 = FDelegateHandle::GenerateNewID();
          puVar5[4] = uVar6;
          *puVar5 = &PTR_FUN_143f77e40;
        }
        lVar2 = *plVar7;
        *plVar7 = 0;
        local_68 = lVar2;
        local_60 = (int)plVar7[1];
        plVar7[1] = 0;
        local_b8 = 0;
        local_b0 = 4;
        local_5c = *(undefined4 *)((longlong)plVar7 + 0xc);
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        FGenericPlatformString::Memcpy(local_b8,&DAT_144c6bd38,8);
        iVar4 = FUN_142afb4b0(local_48,param_1 + 0x98,&local_b8,*(undefined4 *)(param_1 + 0x70),
                              &local_68,local_a8 + 6,local_a8 + 2,local_a8 + 4,&local_38);
        if ((bVar8) && (local_58[0] != 0)) {
          FMemory::Free();
        }
        if ((!bVar8) && (local_a8[0] != 0)) {
          FMemory::Free();
        }
        if (local_a8[2] != 0) {
          FMemory::Free();
        }
        if (local_a8[4] != 0) {
          FMemory::Free();
        }
        if (iVar4 == 0) {
          if (param_3 == 0) {
            TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x28,0);
          }
          else {
            FUN_141578290(param_1);
          }
        }
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_40 + 1;
          lVar2 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
        goto LAB_14155d293;
      }
      if (param_3 != 0) {
        FUN_141578290(param_1);
        goto LAB_14155d293;
      }
    }
    uVar6 = 0;
  }
  TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x28,uVar6);
LAB_14155d293:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 14155d2b0 FUN_14155d2b0 body=261 status=ok
// SIG undefined FUN_14155d2b0(void)

undefined4 FUN_14155d2b0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  void *_Src;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  void *local_18;
  int local_10;
  
  if (param_2 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x68);
    if (param_2 == lVar2) {
      if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x80))) {
        return *(undefined4 *)(*(longlong *)(param_1 + 0x78) + (longlong)param_3 * 4);
      }
    }
    else {
      lVar2 = FUN_140cff230(param_2);
      if (lVar2 != 0) {
        local_10 = *(int *)(lVar2 + 0x218);
        lVar4 = (longlong)local_10;
        pvVar3 = (void *)0x0;
        _Src = *(void **)(lVar2 + 0x210);
        local_18 = (void *)0x0;
        if (local_10 != 0) {
          TArray<int,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
          pvVar3 = local_18;
          _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar4 << 2);
        }
        if ((-1 < param_3) && (param_3 < local_10)) {
          uVar1 = *(undefined4 *)((longlong)pvVar3 + (longlong)param_3 * 4);
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          return uVar1;
        }
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14155d3c0 FUN_14155d3c0 body=117 status=ok
// SIG undefined FUN_14155d3c0(void)

undefined8 FUN_14155d3c0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 400), lVar1 != 0)) {
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
    if (bVar2) {
      uVar4 = FUN_140bbb120(lVar1,param_2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14155d440 FUN_14155d440 body=588 status=ok
// SIG undefined FUN_14155d440(void)

longlong * FUN_14155d440(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  void *_Src;
  longlong lVar12;
  int local_res18;
  void *local_48;
  undefined8 local_40;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  if (0 < iVar2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar2);
    iVar2 = *(int *)(param_1 + 0x78);
  }
  lVar12 = 0;
  local_res18 = 0;
  if (0 < iVar2) {
    do {
      uVar9 = 0;
      lVar3 = *(longlong *)(param_1 + 0x70);
      local_48 = (void *)0x0;
      local_40 = 0;
      if (0 < *(int *)(lVar12 + 8 + lVar3) + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
        lVar3 = *(longlong *)(param_1 + 0x70);
        uVar9 = local_40 & 0xffffffff;
      }
      uVar6 = 0;
      uVar8 = (uint)uVar9;
      uVar11 = uVar6;
      _Src = local_48;
      if (0 < *(int *)(lVar12 + 8 + lVar3)) {
        do {
          cVar1 = *(char *)(*(longlong *)(lVar12 + lVar3) + uVar6);
          if (cVar1 == '\0') {
LAB_14155d558:
            uVar4 = 0x2d;
          }
          else if (cVar1 == '\x01') {
            uVar4 = 0x41;
          }
          else if (cVar1 == '\x02') {
            uVar4 = 0x54;
          }
          else if (cVar1 == '\x04') {
            uVar4 = 0x43;
          }
          else {
            if (cVar1 != '\b') goto LAB_14155d558;
            uVar4 = 0x47;
          }
          iVar2 = (int)uVar9;
          iVar7 = iVar2 + -1;
          if (iVar2 < 1) {
            iVar7 = 0;
          }
          uVar8 = (iVar2 < 1) + 1 + iVar2;
          local_40 = CONCAT44(local_40._4_4_,uVar8);
          if (local_40._4_4_ < (int)uVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
            _Src = local_48;
            uVar8 = (uint)local_40;
          }
          uVar9 = (ulonglong)uVar8;
          uVar10 = (int)uVar11 + 1;
          uVar6 = uVar6 + 1;
          *(undefined2 *)((longlong)_Src + (longlong)iVar7 * 2) = uVar4;
          *(undefined2 *)((longlong)_Src + (longlong)iVar7 * 2 + 2) = 0;
          lVar3 = *(longlong *)(param_1 + 0x70);
          uVar11 = (ulonglong)uVar10;
        } while ((int)uVar10 < *(int *)(lVar12 + 8 + lVar3));
      }
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
      *puVar5 = 0;
      *(uint *)(puVar5 + 1) = uVar8;
      if (uVar8 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar5,uVar8,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar5,_Src,(longlong)(int)uVar8 * 2);
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
      local_res18 = local_res18 + 1;
      lVar12 = lVar12 + 0x10;
    } while (local_res18 < *(int *)(param_1 + 0x78));
  }
  return param_2;
}



// FUNCTION 14155d690 FUN_14155d690 body=128 status=ok
// SIG undefined FUN_14155d690(void)

undefined8 * FUN_14155d690(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    return (undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xf0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468a6ac0) {
    _Init_thread_header(&DAT_1468a6ac0);
    if (DAT_1468a6ac0 == -1) {
      atexit(FUN_143e744f0);
      _Init_thread_footer(&DAT_1468a6ac0);
      return &DAT_1468a6ab0;
    }
  }
  return &DAT_1468a6ab0;
}



// FUNCTION 14155d710 FUN_14155d710 body=129 status=ok
// SIG undefined FUN_14155d710(void)

undefined8 * FUN_14155d710(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    puVar1 = (undefined8 *)FUN_14155d7a0();
    return puVar1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468a6af8) {
    _Init_thread_header(&DAT_1468a6af8);
    if (DAT_1468a6af8 == -1) {
      atexit((_func_5014 *)&LAB_143e74490);
      _Init_thread_footer(&DAT_1468a6af8);
      return &DAT_1468a6ae8;
    }
  }
  return &DAT_1468a6ae8;
}



// FUNCTION 14155d7a0 FUN_14155d7a0 body=139 status=ok
// SIG undefined FUN_14155d7a0(void)

undefined8 * FUN_14155d7a0(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 400))) {
    return (undefined8 *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x188));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468a6b28) {
    _Init_thread_header(&DAT_1468a6b28);
    if (DAT_1468a6b28 == -1) {
      atexit((_func_5014 *)&LAB_143e744b0);
      _Init_thread_footer(&DAT_1468a6b28);
      return &DAT_1468a6b18;
    }
  }
  return &DAT_1468a6b18;
}



// FUNCTION 14155d830 FUN_14155d830 body=197 status=ok
// SIG undefined FUN_14155d830(void)

longlong * FUN_14155d830(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x180);
  *param_2 = 0;
  param_2[1] = 0;
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 400)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
    }
    plVar3 = *(longlong **)(lVar2 + 0x188);
    plVar4 = plVar3 + (longlong)*(int *)(lVar2 + 400) * 2;
    for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
      if ((-1 < param_3) && (param_3 < (int)plVar3[1])) {
        iVar1 = (int)param_2[1];
        lVar2 = *plVar3;
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) =
             *(undefined8 *)(lVar2 + (longlong)param_3 * 8);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 14155d900 FUN_14155d900 body=111 status=ok
// SIG undefined FUN_14155d900(void)

float FUN_14155d900(longlong param_1)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  lVar5 = (longlong)*(int *)(param_1 + 0xc0);
  fVar6 = 0.0;
  if (0 < lVar5) {
    puVar4 = *(undefined8 **)(param_1 + 0xb8);
    do {
      fVar7 = 0.0;
      pfVar1 = (float *)*puVar4;
      uVar3 = (longlong)*(int *)(puVar4 + 1) & 0x3fffffffffffffff;
      if (pfVar1 + *(int *)(puVar4 + 1) < pfVar1) {
        uVar3 = 0;
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        do {
          fVar7 = fVar7 + *pfVar1;
          pfVar1 = pfVar1 + 1;
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar3);
      }
      puVar4 = puVar4 + 2;
      fVar6 = fVar6 + fVar7;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return fVar6;
}



// FUNCTION 14155d970 FUN_14155d970 body=131 status=ok
// SIG undefined FUN_14155d970(void)

longlong FUN_14155d970(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *param_2;
  lVar4 = (longlong)iVar1;
  if (-1 < iVar1) {
    if (iVar1 < *(int *)(param_1 + 400)) {
      iVar2 = param_2[1];
      if (((-1 < iVar2) && (iVar2 < *(int *)(*(longlong *)(param_1 + 0x188) + 8 + lVar4 * 0x10))) &&
         (lVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x188) + lVar4 * 0x10) +
                   (longlong)iVar2 * 8), lVar3 != 0)) {
        return lVar3;
      }
    }
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x1a0))) {
      iVar1 = param_2[1];
      if ((-1 < iVar1) &&
         ((iVar1 < *(int *)(*(longlong *)(param_1 + 0x198) + 8 + lVar4 * 0x10) &&
          (lVar4 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x198) + lVar4 * 0x10) +
                    (longlong)iVar1 * 8), lVar4 != 0)))) {
        return lVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 14155da00 FUN_14155da00 body=183 status=ok
// SIG undefined FUN_14155da00(void)

void FUN_14155da00(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res20);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_48 = 0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x28,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144c7e520;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined4 *)(puVar1 + 3) = local_res20;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_res24;
    *(undefined4 *)(puVar1 + 4) = param_3;
  }
  local_78[0] = &LAB_141558980;
  FUN_14204c280(local_78);
  return;
}



// FUNCTION 14155dac0 FUN_14155dac0 body=93 status=ok
// SIG undefined FUN_14155dac0(void)

void FUN_14155dac0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x68);
  if (cVar7 != '\0') {
    FUN_141558da0(param_1);
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x58);
    iVar5 = *(int *)(param_1 + 0x50);
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x68);
    FUN_14155da00(param_1,uVar6,iVar1 + iVar2 + iVar3 + iVar4 + iVar5);
  }
  return;
}



// FUNCTION 14155db20 FUN_14155db20 body=324 status=ok
// SIG undefined FUN_14155db20(void)

void FUN_14155db20(longlong param_1,longlong param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined **local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  longlong local_18;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0xb0) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x80), lVar2 != 0)) {
    if ((param_3 < 0) || (*(int *)(lVar2 + 0x38) <= param_3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = (longlong)param_3 * 0xe8 + *(longlong *)(lVar2 + 0x30);
      lVar2 = FUN_1405ec200(lVar4 + 0x90);
      if (lVar2 != 0) {
        lVar3 = FUN_14302b3d0();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_68 = &PTR_FUN_144aaf410;
          FText::FText(local_60);
          FText::FText(local_48);
          FText::FText(local_30);
          FText::operator=(local_60,lVar4 + 0x48);
          FText::operator=(local_48,lVar4 + 0xb8);
          FText::operator=(local_30,lVar4 + 0xd0);
          local_18 = lVar2;
          FUN_140ce4cb0(param_2,&local_68);
          FUN_14145d340(&local_68);
        }
      }
    }
  }
  return;
}



// FUNCTION 14155dc70 FUN_14155dc70 body=61 status=ok
// SIG undefined FUN_14155dc70(void)

void FUN_14155dc70(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  FName::FName(local_res8,L"MainMenu",1);
  (**(code **)(*param_1 + 0x570))(param_1,local_res8,1,0);
  return;
}



// FUNCTION 14155dcb0 FUN_14155dcb0 body=61 status=ok
// SIG undefined FUN_14155dcb0(void)

void FUN_14155dcb0(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  FName::FName(local_res8,L"MainMenu",1);
  (**(code **)(*param_1 + 0x570))(param_1,local_res8,1,0);
  return;
}



// FUNCTION 14155dcf0 FUN_14155dcf0 body=94 status=ok
// SIG undefined FUN_14155dcf0(void)

void FUN_14155dcf0(longlong *param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468a68a8,&local_18);
  FName::FName(local_res8,L"Puzzle",1);
  (**(code **)(*param_1 + 0x570))(param_1,local_res8,0,0);
  return;
}



// FUNCTION 14155dd50 FUN_14155dd50 body=61 status=ok
// SIG undefined FUN_14155dd50(void)

void FUN_14155dd50(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  FName::FName(local_res8,L"Reward",1);
  (**(code **)(*param_1 + 0x570))(param_1,local_res8,1,0);
  return;
}



// FUNCTION 14155dda0 FUN_14155dda0 body=487 status=ok
// SIG undefined FUN_14155dda0(void)

undefined8 FUN_14155dda0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *local_58;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_40 [8];
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28;
  
  cVar4 = (**(code **)(*param_1 + 0x40))();
  if (cVar4 != '\0') {
    if (*(char *)((longlong)param_1 + 0x105) == '\0') {
      if (((*(char *)((longlong)param_2 + 0xc) == '\0') && (param_1[0x34] == *param_2)) &&
         (cVar4 = FUN_142088620(param_1 + -0x2e), cVar4 != '\0')) {
        (**(code **)(param_1[-0x2e] + 0x300))(param_1 + -0x2e,param_2);
        return 1;
      }
    }
    else if ((*(char *)((longlong)param_2 + 0xc) == '\x01') && (param_1[0x34] == *param_2)) {
      plVar6 = param_1 + -0x2e;
      cVar4 = FUN_142088620(plVar6);
      if (cVar4 != '\0') {
        if (((int)param_1[7] != 0) || (*(int *)((longlong)param_1 + 0x3c) != 0)) {
          FUN_142f0ad20(plVar6,param_1[7]);
        }
        if (param_1[0x19] != 0) {
          lVar5 = FWeakObjectPtr::Get(param_1 + 0x18);
          if (lVar5 != 0) {
            lVar5 = UObject::FindFunction(lVar5,param_1[0x19]);
            if (lVar5 != 0) {
              FName::FName(local_50,&DAT_143f3eda8,1);
              local_44 = 0;
              local_48 = 0xffffffff;
              FName::FName(local_40,&DAT_143f3eda8,1);
              local_28 = 0;
              local_38 = 0;
              plStack_30 = (longlong *)0x0;
              local_58 = plVar6;
              FUN_140ed08a0(local_50,param_2);
              plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
              uVar7 = FUN_14178ac60(plVar6,param_1[0x19]);
              (**(code **)(*plVar6 + 0x208))(plVar6,uVar7,&local_58);
              plVar6 = plStack_30;
              if (plStack_30 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_30 + 1;
                lVar5 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*plStack_30)(plStack_30);
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
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14155df90 FUN_14155df90 body=568 status=ok
// SIG undefined FUN_14155df90(void)

char FUN_14155df90(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 local_res10;
  
  cVar2 = *(char *)((longlong)param_2 + 0xc);
  if (cVar2 == '\0') {
    if (DAT_1468a64b8 == *param_2) {
      local_res10 = 0x100000000;
      cVar2 = FUN_1415647f0(param_1,&local_res10,param_2);
      return cVar2;
    }
    if (DAT_1468a64c0 == *param_2) {
      local_res10 = 0xffffffff00000000;
      cVar2 = FUN_1415647f0(param_1,&local_res10,param_2);
      return cVar2;
    }
    if (DAT_1468a64c8 == *param_2) {
      local_res10 = 0xffffffff;
      cVar2 = FUN_1415647f0(param_1,&local_res10,param_2);
      return cVar2;
    }
    if (DAT_1468a64d0 == *param_2) {
      local_res10 = 1;
      cVar2 = FUN_1415647f0(param_1,&local_res10,param_2);
      return cVar2;
    }
  }
  if (*(char *)(param_1 + 0x1e4) != '\0') {
    if ((cVar2 == '\0') && (DAT_146b3e2a0 == *param_2)) {
      iVar1 = (int)param_2[1];
      if ((iVar1 < 0) || (*(int *)(param_1 + 0x1d0) <= iVar1)) {
        puVar4 = &DAT_1464a0eb8;
      }
      else {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar1 * 0xc);
      }
      lVar3 = FUN_14155d970(param_1,puVar4);
      if (lVar3 != 0) {
        DAT_1468a6aa0 = *(undefined4 *)(lVar3 + 0x1c0);
        DAT_1468a6aa4 = *(undefined4 *)(lVar3 + 0x1c4);
        DAT_1468a64a0 = *(undefined1 *)(lVar3 + 0x1d0);
        return '\x01';
      }
    }
    else if ((cVar2 == '\x02') && (DAT_146b3e2a0 == *param_2)) {
      iVar1 = (int)param_2[1];
      if ((iVar1 < 0) || (*(int *)(param_1 + 0x1d0) <= iVar1)) {
        puVar4 = &DAT_1464a0eb8;
      }
      else {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar1 * 0xc);
      }
      lVar3 = FUN_14155d970(param_1,puVar4);
      if (lVar3 != 0) {
        cVar2 = FUN_14156b7a0(lVar3);
        if (cVar2 != '\0') {
          return cVar2;
        }
        if (DAT_1468a6aa0 != *(int *)(lVar3 + 0x1c0)) {
          return '\0';
        }
        if (DAT_1468a6aa4 != *(int *)(lVar3 + 0x1c4)) {
          return '\0';
        }
        FUN_14156ce30(param_1,lVar3,(int)param_2[1]);
        return '\x01';
      }
    }
  }
  return '\0';
}



// FUNCTION 14155e1d0 FUN_14155e1d0 body=308 status=ok
// SIG undefined FUN_14155e1d0(void)

void FUN_14155e1d0(longlong param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_18;
  longlong *local_10;
  
  if (param_3 == 200) {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x68);
    if (cVar5 != '\0') {
      uVar6 = GetTransientPackage();
      lVar7 = NewObject<UMaterialParameterCollectionInstance>(uVar6);
      *(longlong *)(param_1 + 0xa8) = lVar7;
      if (lVar7 != 0) {
        local_18 = *param_4;
        plVar4 = (longlong *)param_4[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_10 = plVar4;
        uVar6 = FWeakObjectPtr::Get(param_1 + 0x68);
        FUN_141563350(*(undefined8 *)(param_1 + 0xa8),uVar6,&local_18);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
      }
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0xf5) = *(undefined1 *)(param_1 + 0xf0);
    }
    TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x28,1);
    return;
  }
  if (0 < *(int *)(param_1 + 0xc0)) {
    FUN_141578290();
    return;
  }
  TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x28,0);
  return;
}



// FUNCTION 14155e310 FUN_14155e310 body=565 status=ok
// SIG undefined FUN_14155e310(void)

ulonglong FUN_14155e310(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong *in_RAX;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  byte bVar6;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0xf4) != '\0') goto LAB_14155e534;
  iVar1 = *param_2;
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x78) <= iVar1)) {
LAB_14155e35d:
    bVar6 = 0;
  }
  else {
    in_RAX = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x70));
    iVar2 = param_2[1];
    if ((iVar2 < 0) || ((int)in_RAX[1] <= iVar2)) goto LAB_14155e35d;
    in_RAX = (longlong *)*in_RAX;
    bVar6 = *(byte *)((longlong)iVar2 + (longlong)in_RAX);
  }
  if ((bVar6 & 0xf) == 0) {
    if ((bVar6 & 0x10) == 0) goto LAB_14155e534;
    uVar3 = GetTransientPackage();
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar4 = FUN_141582ae0();
    plVar5 = (longlong *)FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
    in_RAX = (longlong *)0x0;
    if (plVar5 == (longlong *)0x0) goto LAB_14155e534;
    (**(code **)(*plVar5 + 0x278))(plVar5,param_2);
    FUN_1415573a0(param_1,plVar5,1);
    in_RAX = (longlong *)FWeakObjectPtr::IsValid(param_1 + 0x48);
    if ((char)in_RAX == '\0') goto LAB_14155e534;
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x48);
    uVar3 = DAT_1468a6898;
  }
  else if (*(int *)(param_1 + 0x90) < 1) {
    in_RAX = (longlong *)FWeakObjectPtr::IsValid(param_1 + 0x48);
    if ((char)in_RAX == '\0') goto LAB_14155e534;
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x48);
    uVar3 = DAT_1468a68a0;
  }
  else {
    if (((iVar1 < 0) || (*(int *)(param_1 + 0x78) <= iVar1)) ||
       (in_RAX = (longlong *)(ulonglong)*(uint *)(param_1 + 0xa0),
       (int)*(uint *)(param_1 + 0xa0) <=
       *(int *)(*(longlong *)(param_1 + 0x70) + 8 + (longlong)iVar1 * 0x10))) goto LAB_14155e534;
    uVar3 = GetTransientPackage();
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar4 = FUN_1415827d0();
    plVar5 = (longlong *)FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
    in_RAX = (longlong *)0x0;
    if (plVar5 == (longlong *)0x0) goto LAB_14155e534;
    (**(code **)(*plVar5 + 0x278))(plVar5,param_2);
    FUN_1415573a0(param_1,plVar5,1);
    in_RAX = (longlong *)FWeakObjectPtr::IsValid(param_1 + 0x48);
    if ((char)in_RAX == '\0') goto LAB_14155e534;
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x48);
    uVar3 = DAT_1468a6890;
  }
  local_18 = 0;
  local_10 = 0;
  in_RAX = (longlong *)(**(code **)(*plVar5 + 0x4e8))(plVar5,uVar3,&local_18);
LAB_14155e534:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14155e550 FUN_14155e550 body=317 status=ok
// SIG undefined FUN_14155e550(void)

undefined8 FUN_14155e550(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  
  if (*(char *)(param_1 + 0xf4) == '\0') {
    iVar1 = *param_2;
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x78))) {
      if (*(int *)(*(longlong *)(param_1 + 0x70) + 8 + (longlong)iVar1 * 0x10) == param_2[1] + 1)
      goto LAB_14155e5b7;
    }
    iVar1 = *param_3;
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x78))) {
      if (*(int *)(*(longlong *)(param_1 + 0x70) + 8 + (longlong)iVar1 * 0x10) == param_3[1] + 1) {
LAB_14155e5b7:
        uVar2 = FUN_14155e310(param_1,param_2);
        return uVar2;
      }
    }
    uVar2 = GetTransientPackage();
    FUN_1417846f0(uVar2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_res8 = 0;
    uVar3 = FUN_141582c30();
    lVar4 = FUN_1417985e0(uVar3,uVar2,0,0,0,0,0,0,0);
    if (lVar4 != 0) {
      *(int *)(lVar4 + 0x48) = *param_2;
      *(int *)(lVar4 + 0x4c) = param_2[1];
      *(int *)(lVar4 + 0x50) = *param_3;
      *(int *)(lVar4 + 0x54) = param_3[1];
      puVar5 = (undefined8 *)FDateTime::Now(&local_res8);
      *(undefined8 *)(lVar4 + 0x38) = *puVar5;
      FUN_1415573a0(param_1,lVar4,1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14155e690 FUN_14155e690 body=366 status=ok
// SIG undefined FUN_14155e690(void)

void FUN_14155e690(longlong *param_1,byte param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar3 = FUN_1422312c0();
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (iVar2 = FUN_14046e5c0(lVar3), 1 < iVar2)) {
      FUN_140bec3e0(lVar3,param_2 ^ 1);
      plVar5 = (longlong *)UListView::OnItemSelectionChanged(lVar3);
      plVar9 = (longlong *)*plVar5;
      plVar5 = plVar9 + (int)plVar5[1];
      for (; plVar9 != plVar5; plVar9 = plVar9 + 1) {
        lVar3 = *plVar9;
        if (lVar3 != 0) {
          uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
          plVar7 = (longlong *)UPlayer::GetPlayerController(lVar3,uVar6);
          if (plVar7 != (longlong *)0x0) {
            lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
            if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
                lVar3 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              plVar8 = (longlong *)UWidgetComponent::GetRenderTarget(plVar7);
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x6e8))(plVar8,0xffffffff);
              }
              if ((plVar7 != (longlong *)param_1[0x9b]) &&
                 (lVar3 = (**(code **)(*plVar7 + 0xfa8))(plVar7), lVar3 != 0)) {
                FUN_142f0fca0(lVar3,param_2);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14155e800 FUN_14155e800 body=94 status=ok
// SIG undefined FUN_14155e800(void)

void FUN_14155e800(undefined8 param_1)

{
  longlong local_18 [2];
  
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"hide",10);
  FUN_142088910(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14155e860 FUN_14155e860 body=67 status=ok
// SIG undefined FUN_14155e860(void)

void FUN_14155e860(undefined1 param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(DAT_1468a64a8 + 0xa8) != 0) {
    lVar1 = FWeakObjectPtr::Get(*(longlong *)(DAT_1468a64a8 + 0xa8) + 0x48);
    if (lVar1 != 0) {
      FUN_14157c550(lVar1,param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14155e8b0 FUN_14155e8b0 body=90 status=ok
// SIG undefined FUN_14155e8b0(void)

void FUN_14155e8b0(longlong *param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(DAT_1468a64a8 + 0xa8) != 0) {
    lVar1 = FWeakObjectPtr::Get(*(longlong *)(DAT_1468a64a8 + 0xa8) + 0x48);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x7c8) != 0)) {
      FUN_142088910(*(longlong *)(lVar1 + 0x7c8),&DAT_1464a0f80);
    }
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14155e910 FUN_14155e910 body=67 status=ok
// SIG undefined FUN_14155e910(void)

void FUN_14155e910(undefined1 param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(DAT_1468a64a8 + 0xa8) != 0) {
    lVar1 = FWeakObjectPtr::Get(*(longlong *)(DAT_1468a64a8 + 0xa8) + 0x48);
    if (lVar1 != 0) {
      FUN_14155e960(lVar1,param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14155e960 FUN_14155e960 body=790 status=ok
// SIG undefined FUN_14155e960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14155e960(longlong param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong *puVar14;
  undefined1 auStack_188 [32];
  char local_168;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x6e0) != 0) {
      puVar13 = (undefined1 *)0x0;
      local_50 = 0;
      local_58 = (undefined1 *)0x0;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x6e0) + 0x188);
      puVar14 = *(ulonglong **)(lVar8 + 0x170);
      puVar3 = puVar14 + (longlong)*(int *)(lVar8 + 0x178) * 2;
      puVar7 = puVar13;
      for (; local_168 = param_3, puVar14 != puVar3; puVar14 = puVar14 + 2) {
        puVar6 = (undefined8 *)*puVar14;
        puVar9 = (undefined1 *)((longlong)(int)puVar14[1] & 0x1fffffffffffffff);
        if (puVar6 + (int)puVar14[1] < puVar6) {
          puVar9 = puVar13;
        }
        puVar10 = puVar13;
        if (puVar9 != (undefined1 *)0x0) {
          do {
            uVar11 = local_50;
            lVar8 = (longlong)(int)local_50;
            uVar1 = *puVar6;
            iVar2 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar2);
            if (local_50._4_4_ < iVar2) {
              TArray<FInventoryItem_*,TInlineAllocator<32,FDefaultAllocator>_>::ResizeGrow
                        (local_158,uVar11 & 0xffffffff);
              puVar7 = local_58;
            }
            puVar5 = local_158;
            if (puVar7 != (undefined1 *)0x0) {
              puVar5 = puVar7;
            }
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
            *(undefined8 *)(puVar5 + lVar8 * 8) = uVar1;
            puVar7 = local_58;
          } while (puVar10 != puVar9);
        }
        param_3 = local_168;
      }
      puVar9 = local_158;
      if (puVar7 != (undefined1 *)0x0) {
        puVar9 = puVar13;
      }
      plVar4 = (longlong *)((ulonglong)puVar9 | (ulonglong)puVar7);
      puVar9 = (undefined1 *)((longlong)(int)local_50 & 0x1fffffffffffffff);
      if (plVar4 + (int)local_50 < plVar4) {
        puVar9 = puVar13;
      }
      if (puVar9 != (undefined1 *)0x0) {
        do {
          if (param_3 != *(char *)(*plVar4 + 0x1bc)) {
            *(char *)(*plVar4 + 0x1bc) = param_3;
            FUN_141576560();
          }
          plVar4 = plVar4 + 1;
          puVar13 = puVar13 + 1;
          puVar7 = local_58;
        } while (puVar13 != puVar9);
      }
      if (puVar7 != (undefined1 *)0x0) {
        FMemory::Free(puVar7);
      }
    }
  }
  else {
    local_168 = param_3;
    if (param_2 == '\x01') {
      if (*(longlong *)(param_1 + 0x7b8) != 0) {
        puVar6 = &DAT_1464a0f60;
        if (param_3 != '\0') {
          puVar6 = &DAT_1464a0f50;
        }
        FUN_142088910(*(longlong *)(param_1 + 0x7b8),puVar6);
        if (*(longlong *)(param_1 + 0x7b0) != 0) {
          plVar4 = (longlong *)(*(longlong *)(param_1 + 0x7b0) + 0x170);
          (**(code **)(*plVar4 + 0x38))(plVar4,0);
        }
      }
    }
    else if (param_2 == '\x02') {
      plVar4 = *(longlong **)(param_1 + 0x7c0);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x278))(plVar4,1);
        puVar6 = &DAT_1464a0f60;
        if (param_3 != '\0') {
          puVar6 = &DAT_1464a0f50;
        }
        FUN_142088910(*(undefined8 *)(param_1 + 0x7c0),puVar6);
      }
    }
    else if (((param_2 == '\x03') && (*(longlong *)(param_1 + 0x6e0) != 0)) &&
            (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x6e0) + 400), lVar8 != 0)) {
      uVar12 = 0;
      plVar4 = *(longlong **)(lVar8 + 0x178);
      uVar11 = (longlong)*(int *)(lVar8 + 0x180) & 0x1fffffffffffffff;
      if (plVar4 + *(int *)(lVar8 + 0x180) < plVar4) {
        uVar11 = uVar12;
      }
      if (uVar11 != 0) {
        do {
          lVar8 = *plVar4;
          if ((lVar8 != 0) && (param_3 != *(char *)(lVar8 + 0x1bc))) {
            *(char *)(lVar8 + 0x1bc) = param_3;
            FUN_141576560();
          }
          plVar4 = plVar4 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar11);
      }
    }
  }
  return;
}



// FUNCTION 14155ec80 Init body=134 status=ok
// SIG undefined Init(void)

void TArray<int,FDefaultAllocator>::Init(longlong *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(uint *)((longlong)param_1 + 0xc) != param_3) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1,uVar3);
  }
  if (0 < (int)param_3) {
    do {
      iVar2 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
      }
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_2;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 14155ed10 FUN_14155ed10 body=236 status=ok
// SIG undefined FUN_14155ed10(void)

void FUN_14155ed10(longlong *param_1,undefined8 *param_2,uint param_3)

{
  void *_Src;
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  
  plVar1 = (longlong *)*param_1;
  uVar3 = (ulonglong)param_3;
  for (iVar4 = (int)param_1[1]; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(uint *)((longlong)param_1 + 0xc) != param_3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,param_3);
  }
  if (0 < (int)param_3) {
    do {
      iVar4 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar4);
      }
      puVar2 = (undefined8 *)((longlong)iVar4 * 0x10 + *param_1);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        iVar4 = *(int *)(param_2 + 1);
        _Src = (void *)*param_2;
        *(int *)(puVar2 + 1) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2,iVar4,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar4 << 3);
        }
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 14155ee00 FUN_14155ee00 body=43 status=ok
// SIG undefined FUN_14155ee00(void)

void FUN_14155ee00(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = param_2[1];
  puVar1 = (undefined8 *)FDateTime::Now(local_res8);
  *(undefined8 *)(param_1 + 0x38) = *puVar1;
  return;
}



// FUNCTION 14155ee30 FUN_14155ee30 body=226 status=ok
// SIG undefined FUN_14155ee30(void)

void FUN_14155ee30(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (DAT_1468a64a8 == 0) {
    uVar3 = GetTransientPackage();
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar6 = 0;
    uVar4 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
    DAT_1468a64a8 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
    if (DAT_1468a64a8 == 0) {
      return;
    }
    iVar1 = *(int *)(DAT_1468a64a8 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
    if (DAT_1468a64a8 == 0) {
      return;
    }
  }
  *(undefined8 *)(DAT_1468a64a8 + 0xb0) = param_1;
  *(undefined1 *)(DAT_1468a64a8 + 100) = 1;
  return;
}



// FUNCTION 14155ef20 FUN_14155ef20 body=1239 status=ok
// SIG undefined FUN_14155ef20(void)

void FUN_14155ef20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  byte bVar9;
  bool bVar10;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x824);
  if (cVar6 != '\0') {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x824);
    iVar3 = *(int *)(lVar7 + 0x54);
    if (iVar3 == 0) {
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x824);
      uVar4 = *(undefined4 *)(lVar7 + 0x58);
      bVar9 = 0;
      if ((0 < *(int *)(param_1 + 0x7a8)) &&
         (lVar7 = **(longlong **)(param_1 + 0x7a0), bVar9 = 0, lVar7 != 0)) {
        cVar6 = FText::IsEmpty(param_1 + 0x6c8);
        if (cVar6 == '\0') {
          uVar8 = FText::FText(local_a0,param_1 + 0x6c8);
          bVar9 = 4;
        }
        else {
          uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_b8,L"EXTRA POINT",L"GFxCSRewardScreenMenu",L"ExtraPointText");
          bVar9 = 8;
        }
        FUN_141562890(lVar7,uVar8,uVar4);
        if (((bVar9 & 8) != 0) && (bVar9 = bVar9 & 0xf7, local_b0 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_b0 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar2 = (int *)((longlong)local_b0 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_b0 + 8))(local_b0,1);
            }
          }
        }
        if (((bVar9 & 4) != 0) && (bVar9 = bVar9 & 0xfb, local_98 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_98 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar2 = (int *)((longlong)local_98 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_98 + 8))(local_98,1);
            }
          }
        }
        *(undefined1 *)(lVar7 + 0x184) = 1;
      }
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x824);
      uVar4 = *(undefined4 *)(lVar7 + 0x5c);
      if ((1 < *(int *)(param_1 + 0x7a8)) &&
         (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x7a0) + 8), lVar7 != 0)) {
        cVar6 = FText::IsEmpty(param_1 + 0x6e0);
        if (cVar6 == '\0') {
          bVar9 = bVar9 | 0x10;
          uVar8 = FText::FText(local_70,param_1 + 0x6e0);
        }
        else {
          bVar9 = bVar9 | 0x20;
          uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_88,L"HIGH SCORE MATCHED",L"GFxCSRewardScreenMenu",
                             L"HighestScoreMatchedText");
        }
        FUN_141562890(lVar7,uVar8,uVar4);
        if (((bVar9 & 0x20) != 0) && (bVar9 = bVar9 & 0xdf, local_80 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_80 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)local_80 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
        if (((bVar9 & 0x10) != 0) && (bVar9 = bVar9 & 0xef, local_68 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_68 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)local_68 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
        }
        *(undefined1 *)(lVar7 + 0x184) = 1;
      }
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x824);
      uVar4 = *(undefined4 *)(lVar7 + 0x60);
      if ((2 < *(int *)(param_1 + 0x7a8)) &&
         (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x7a0) + 0x10), lVar7 != 0)) {
        cVar6 = FText::IsEmpty(param_1 + 0x6f8);
        if (cVar6 == '\0') {
          bVar9 = bVar9 | 0x40;
          uVar8 = FText::FText(local_40,param_1 + 0x6f8);
        }
        else {
          bVar9 = bVar9 | 0x80;
          uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_58,L"HIGH SCORE BEAT",L"GFxCSRewardScreenMenu",
                             L"HighestScoreBeatenText");
        }
        FUN_141562890(lVar7,uVar8,uVar4);
        if (((char)bVar9 < '\0') && (bVar9 = bVar9 & 0x7f, local_50 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        if (((bVar9 & 0x40) != 0) && (local_38 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_38 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)local_38 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
        }
        *(undefined1 *)(lVar7 + 0x184) = 1;
      }
    }
    else if ((0 < *(int *)(param_1 + 0x7a8)) &&
            (lVar7 = **(longlong **)(param_1 + 0x7a0), lVar7 != 0)) {
      cVar6 = FText::IsEmpty(param_1 + 0x710);
      bVar10 = cVar6 != '\0';
      if (bVar10) {
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_e8,L"PIONEER",L"GFxCSRewardScreenMenu",L"PioneerText");
      }
      else {
        uVar8 = FText::FText(local_d0,param_1 + 0x710);
      }
      FUN_141562890(lVar7,uVar8,iVar3);
      if ((bVar10) && (local_e0 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_e0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)local_e0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
      if ((!bVar10) && (local_c8 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_c8 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar2 = (int *)((longlong)local_c8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
      *(undefined1 *)(lVar7 + 0x184) = 1;
    }
  }
  return;
}



// FUNCTION 14155f400 FUN_14155f400 body=2655 status=ok
// SIG undefined FUN_14155f400(void)

/* WARNING: Removing unreachable block (ram,0x00014155f878) */
/* WARNING: Removing unreachable block (ram,0x00014155f885) */
/* WARNING: Removing unreachable block (ram,0x00014155f892) */
/* WARNING: Removing unreachable block (ram,0x00014155f8a7) */

void FUN_14155f400(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  short *psVar3;
  void *_Dst;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  bool bVar7;
  void *_Src;
  char cVar8;
  ushort uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint *puVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  undefined4 uVar24;
  ulonglong uVar25;
  uint *puVar26;
  ulonglong uVar27;
  uint local_res10;
  longlong local_268;
  undefined8 local_260;
  uint *local_258;
  uint local_250;
  uint local_24c;
  longlong local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong *local_228;
  void *local_220;
  int local_218;
  undefined8 local_210;
  longlong *plStack_208;
  undefined8 local_200;
  longlong *plStack_1f8;
  undefined8 local_1f0;
  longlong *plStack_1e8;
  undefined8 local_1e0;
  longlong *plStack_1d8;
  undefined8 local_1d0;
  longlong *plStack_1c8;
  undefined8 local_1c0;
  longlong *plStack_1b8;
  undefined8 local_1b0;
  longlong *plStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [24];
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [88];
  
  lVar21 = param_1 + 0x810;
  puVar26 = (uint *)0x0;
  cVar8 = FWeakObjectPtr::IsValid(lVar21);
  if (cVar8 != '\0') {
    puVar11 = (undefined8 *)FNumberFormattingOptions::FNumberFormattingOptions(local_98);
    *(undefined4 *)(puVar11 + 2) = 2;
    *(undefined4 *)((longlong)puVar11 + 0x14) = 2;
    local_1a0 = *puVar11;
    uStack_198 = puVar11[1];
    local_190 = puVar11[2];
    local_210 = 0;
    plStack_208 = (longlong *)0x0;
    FWeakObjectPtr::Get(lVar21);
    uVar12 = FText::AsNumber(local_188);
    plVar6 = *(longlong **)(param_1 + 0x730);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x2b0))(plVar6,uVar12,1,0);
    }
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_180 + 1;
      lVar13 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar1 = (int *)((longlong)local_180 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
    plVar6 = plStack_208;
    if (plStack_208 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_208 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_208)(plStack_208);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    local_200 = 0;
    plStack_1f8 = (longlong *)0x0;
    FWeakObjectPtr::Get(lVar21);
    uVar12 = FText::AsNumber(local_170);
    plVar6 = *(longlong **)(param_1 + 0x738);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x2b0))(plVar6,uVar12,1,0);
    }
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_168 + 1;
      lVar13 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar1 = (int *)((longlong)local_168 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_168 + 8))(local_168,1);
        }
      }
    }
    plVar6 = plStack_1f8;
    if (plStack_1f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_1f8 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_1f8)(plStack_1f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    lVar13 = FWeakObjectPtr::Get(lVar21);
    fVar4 = *(float *)(lVar13 + 0xb0);
    lVar13 = FWeakObjectPtr::Get(lVar21);
    fVar5 = *(float *)(lVar13 + 0xb0);
    bVar7 = (float)((int)ROUND((fVar4 + fVar4) - 0.5) >> 1) <= 0.0;
    if (bVar7) {
      local_248 = 0;
      local_240 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
      FGenericPlatformString::Memcpy(local_248,&DAT_144c6ae18,8);
      uVar12 = FText::FromString(local_158,&local_248);
    }
    else {
      local_1f0 = 0;
      plStack_1e8 = (longlong *)0x0;
      uVar12 = FText::AsNumber(local_140);
    }
    plVar6 = *(longlong **)(param_1 + 0x740);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x2b0))(plVar6,uVar12,1,0);
    }
    if ((bVar7) && (local_150 != (longlong *)0x0)) {
      LOCK();
      plVar6 = local_150 + 1;
      lVar13 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)local_150 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    if ((bVar7) && (local_248 != 0)) {
      FMemory::Free();
    }
    if ((!bVar7) && (local_138 != (longlong *)0x0)) {
      LOCK();
      plVar6 = local_138 + 1;
      lVar13 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar1 = (int *)((longlong)local_138 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
    plVar6 = plStack_1e8;
    if ((!bVar7) && (plStack_1e8 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plStack_1e8 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_1e8)(plStack_1e8);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    bVar7 = fVar5 <= 0.0;
    if (bVar7) {
      local_238 = 0;
      local_230 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
      FGenericPlatformString::Memcpy(local_238,&DAT_144c6ae20,8);
      uVar12 = FText::FromString(local_128,&local_238);
    }
    else {
      local_1e0 = 0;
      plStack_1d8 = (longlong *)0x0;
      uVar12 = FText::AsNumber(local_110);
    }
    plVar6 = *(longlong **)(param_1 + 0x748);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x2b0))(plVar6,uVar12,1,0);
    }
    if ((bVar7) && (local_238 != 0)) {
      FMemory::Free();
    }
    if ((!bVar7) && (local_108 != (longlong *)0x0)) {
      LOCK();
      plVar6 = local_108 + 1;
      lVar13 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
    plVar6 = plStack_1d8;
    if ((!bVar7) && (plStack_1d8 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plStack_1d8 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_1d8)(plStack_1d8);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    local_1d0 = 0;
    plStack_1c8 = (longlong *)0x0;
    FWeakObjectPtr::Get(lVar21);
    uVar12 = FText::AsNumber(local_f8);
    plVar6 = *(longlong **)(param_1 + 0x758);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x2b0))(plVar6,uVar12,1,0);
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_f0 + 1;
      lVar13 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    plVar6 = plStack_1c8;
    if (plStack_1c8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_1c8 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_1c8)(plStack_1c8);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    local_1c0 = 0;
    plStack_1b8 = (longlong *)0x0;
    FWeakObjectPtr::Get(lVar21);
    uVar12 = FText::AsNumber(local_e0);
    plVar6 = *(longlong **)(param_1 + 0x760);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x2b0))(plVar6,uVar12,1,0);
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_d8 + 1;
      lVar13 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    plVar6 = plStack_1b8;
    if (plStack_1b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_1b8 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_1b8)(plStack_1b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    local_1b0 = 0;
    plStack_1a8 = (longlong *)0x0;
    lVar13 = FWeakObjectPtr::Get(lVar21);
    if (*(longlong *)(lVar13 + 0x50) == 0) {
      uVar24 = 0xffffffff;
    }
    else {
      uVar24 = *(undefined4 *)(*(longlong *)(lVar13 + 0x50) + 0x48);
    }
    uVar12 = FText::AsNumber(local_c8,uVar24,0,&local_1b0);
    plVar6 = *(longlong **)(param_1 + 0x768);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x2b0))(plVar6,uVar12,1,0);
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_c0 + 1;
      lVar13 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    plVar6 = plStack_1a8;
    if (plStack_1a8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_1a8 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_1a8)(plStack_1a8);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    uVar15 = 0;
    local_268 = 0;
    local_260 = 0;
    uVar12 = FWeakObjectPtr::Get(lVar21);
    local_228 = (longlong *)FUN_14155d690(uVar12);
    if ((int)local_228[1] != 0) {
      iVar20 = 0;
      local_250 = 0;
      local_258 = (uint *)0x0;
      local_24c = 0;
      local_res10 = 0;
      uVar22 = uVar15;
      uVar25 = uVar15;
      uVar27 = uVar15;
      if (0 < (int)local_228[1]) {
        do {
          uVar17 = 0;
          iVar23 = (int)uVar25;
          lVar21 = *local_228;
          iVar16 = *(int *)(lVar21 + 8 + uVar27);
          lVar13 = *(longlong *)(lVar21 + uVar27);
          iVar20 = iVar16 + -1;
          if (iVar16 == 0) {
            iVar20 = 0;
          }
          lVar14 = lVar13 + (longlong)iVar20 * 2;
          do {
            if (lVar14 == lVar13) {
              iVar20 = -1;
              goto LAB_14155fc46;
            }
            psVar3 = (short *)(lVar14 + -2);
            lVar14 = lVar14 + -2;
            uVar9 = *psVar3 - 0x41;
          } while ((0x13 < uVar9) || ((0x80045U >> (uVar9 & 0x1f) & 1) == 0));
          iVar20 = (int)(lVar14 - lVar13 >> 1);
LAB_14155fc46:
          uVar18 = uVar17;
          if (0 < iVar20) {
            do {
              if (*(short *)(*(longlong *)(lVar21 + uVar27) + uVar17 * 2) == 0x2d) {
                iVar16 = (int)uVar15;
                uVar24 = (undefined4)uVar25;
                local_250 = iVar16 + 1;
                if ((int)uVar22 < (int)local_250) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_258,uVar15);
                  uVar22 = (ulonglong)local_24c;
                  uVar25 = (ulonglong)local_res10;
                  puVar26 = local_258;
                }
                uVar15 = (ulonglong)local_250;
                *(ulonglong *)(puVar26 + (longlong)iVar16 * 2) = CONCAT44((int)uVar18,uVar24);
              }
              iVar23 = (int)uVar25;
              uVar18 = (ulonglong)((int)uVar18 + 1);
              uVar17 = uVar17 + 1;
            } while ((longlong)uVar17 < (longlong)iVar20);
          }
          iVar20 = (int)uVar15;
          local_res10 = iVar23 + 1;
          uVar25 = (ulonglong)local_res10;
          uVar27 = uVar27 + 0x10;
        } while ((int)local_res10 < (int)local_228[1]);
      }
      for (puVar19 = puVar26; puVar19 != puVar26 + (longlong)iVar20 * 2; puVar19 = puVar19 + 2) {
        FString::PrintfImpl(&local_220,L"[%d, %d]\n",*puVar19,puVar19[1]);
        _Src = local_220;
        uVar15 = local_260;
        if (local_218 == 0) {
          iVar16 = 0;
        }
        else {
          iVar16 = local_218 + -1;
        }
        if (iVar16 != 0) {
          iVar23 = (int)local_260;
          lVar21 = (longlong)(int)local_260;
          iVar10 = (uint)((int)local_260 == 0) + iVar16 + (int)local_260;
          local_260 = CONCAT44(local_260._4_4_,iVar10);
          if (local_260._4_4_ < iVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,uVar15 & 0xffffffff);
          }
          _Dst = (void *)(local_268 + (lVar21 - (ulonglong)(iVar23 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar16 * 2);
          *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
        }
        if (local_220 != (void *)0x0) {
          FMemory::Free(local_220);
        }
      }
      if (puVar26 != (uint *)0x0) {
        FMemory::Free(puVar26);
      }
    }
    uVar12 = FText::FromString(local_b0,&local_268);
    plVar6 = *(longlong **)(param_1 + 0x770);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x2b0))(plVar6,uVar12,1,0);
    }
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_a8 + 1;
      lVar21 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar21 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    if (local_268 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14155fe60 FUN_14155fe60 body=558 status=ok
// SIG undefined FUN_14155fe60(void)

void FUN_14155fe60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  FWeakObjectPtr::operator=(param_1 + 0x5c,*param_2);
  FWeakObjectPtr::operator=(param_1 + 0x6c,param_2[1]);
  FWeakObjectPtr::operator=(param_1 + 0x74,param_2[2]);
  FWeakObjectPtr::operator=(param_1 + 0x84,param_2[3]);
  FWeakObjectPtr::operator=(param_1 + 0x8c,param_2[4]);
  FWeakObjectPtr::operator=(param_1 + 0x94,param_2[5]);
  FWeakObjectPtr::operator=(param_1 + 0x9c,param_2[6]);
  FWeakObjectPtr::operator=(param_1 + 0xa4,param_2[7]);
  FWeakObjectPtr::operator=(param_1 + 0xac,param_2[8]);
  FWeakObjectPtr::operator=(param_1 + 0xb4,param_2[9]);
  FWeakObjectPtr::operator=(param_1 + 0xbc,param_2[10]);
  FWeakObjectPtr::operator=(param_1 + 0xc4,param_2[0xb]);
  FWeakObjectPtr::operator=(param_1 + 0xcc,param_2[0xc]);
  FWeakObjectPtr::operator=(param_1 + 0xd4,param_2[0xd]);
  FWeakObjectPtr::operator=(param_1 + 0xdc,param_2[0xe]);
  FWeakObjectPtr::operator=(param_1 + 0xe4,param_2[0xf]);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x94);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x94);
    lVar1 = *plVar3;
    uVar4 = FUN_1404b03b0();
    (**(code **)(lVar1 + 0x2b0))(plVar3,uVar4,1,0);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xa4);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xa4);
    lVar1 = *plVar3;
    uVar4 = FUN_1404b03b0();
    (**(code **)(lVar1 + 0x2b0))(plVar3,uVar4,1,0);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
    lVar1 = *plVar3;
    uVar4 = FUN_1404b03b0();
    (**(code **)(lVar1 + 0x2b0))(plVar3,uVar4,1,0);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x6c);
  if (cVar2 != '\0') {
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x6c);
    FUN_14157ae40(uVar4,0);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x5c);
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x5c);
    uVar4 = *(undefined8 *)(lVar1 + 400);
  }
  FWeakObjectPtr::operator=(param_1 + 100,uVar4);
  return;
}



// FUNCTION 141560090 FUN_141560090 body=1532 status=ok
// SIG undefined FUN_141560090(void)

void FUN_141560090(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  uint uVar22;
  void *pvVar23;
  undefined8 local_res8;
  longlong *local_res10;
  undefined8 local_res18;
  longlong *local_res20;
  void *local_68;
  undefined8 local_60;
  
  local_res8 = (longlong *)param_1;
  local_res18 = param_3;
  local_res20 = param_4;
  FWeakObjectPtr::operator=(param_1 + 0x40);
  if ((int)param_3[1] == 0) {
    return;
  }
  if ((int)param_4[1] == 0) {
    return;
  }
  plVar12 = (longlong *)(param_1 + 0x60);
  TArray<FString,FDefaultAllocator>::Empty(plVar12);
  plVar21 = (longlong *)*param_3;
  plVar15 = plVar21 + (longlong)(int)param_3[1] * 2;
  local_res10 = plVar15;
  if (plVar21 != plVar15) {
    do {
      uVar17 = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      iVar14 = (int)plVar21[1] + -1;
      if ((int)plVar21[1] == 0) {
        iVar14 = 0;
      }
      if (0 < iVar14) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_68);
        uVar17 = local_60 & 0xffffffff;
      }
      lVar11 = 0;
      iVar6 = (int)uVar17;
      pvVar23 = local_68;
      if (0 < iVar14) {
        do {
          sVar1 = *(short *)(*plVar21 + lVar11 * 2);
          if (sVar1 != 0x2d) {
            if (sVar1 == 0x41) {
              uVar8 = 1;
            }
            else if (sVar1 == 0x43) {
              uVar8 = 4;
            }
            else if (sVar1 == 0x47) {
              uVar8 = 8;
            }
            else {
              uVar8 = 2;
              if (sVar1 != 0x54) {
                uVar8 = 0;
              }
            }
            iVar6 = (int)uVar17;
            uVar22 = iVar6 + 1;
            local_60 = CONCAT44(local_60._4_4_,uVar22);
            if (local_60._4_4_ < (int)uVar22) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_68);
              pvVar23 = local_68;
              uVar22 = (uint)local_60;
            }
            uVar17 = (ulonglong)uVar22;
            *(undefined1 *)((longlong)iVar6 + (longlong)pvVar23) = uVar8;
          }
          iVar6 = (int)uVar17;
          lVar11 = lVar11 + 1;
          plVar15 = local_res10;
        } while (lVar11 < iVar14);
      }
      plVar12 = (longlong *)((longlong)local_res8 + 0x60);
      iVar14 = *(int *)((longlong)local_res8 + 0x68);
      *(int *)((longlong)local_res8 + 0x68) = iVar14 + 1;
      if (*(int *)((longlong)local_res8 + 0x6c) < iVar14 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar14);
      }
      puVar9 = (undefined8 *)((longlong)iVar14 * 0x10 + *plVar12);
      *puVar9 = 0;
      *(int *)(puVar9 + 1) = iVar6;
      if (iVar6 == 0) {
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar9,iVar6,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar23,(longlong)iVar6);
      }
      if (pvVar23 != (void *)0x0) {
        FMemory::Free(pvVar23);
      }
      plVar21 = plVar21 + 2;
      param_1 = (longlong)local_res8;
      param_4 = local_res20;
    } while (plVar21 != plVar15);
  }
  plVar21 = (longlong *)(param_1 + 0x70);
  lVar11 = param_1;
  if (plVar21 != plVar12) {
    plVar15 = (longlong *)*plVar21;
    lVar11 = (longlong)local_res8;
    for (iVar14 = *(int *)(param_1 + 0x78); local_res8 = (longlong *)lVar11, iVar14 != 0;
        iVar14 = iVar14 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
      lVar11 = (longlong)local_res8;
    }
    iVar14 = (int)plVar12[1];
    puVar9 = (undefined8 *)*plVar12;
    *(int *)(param_1 + 0x78) = iVar14;
    if ((iVar14 == 0) && (*(int *)(param_1 + 0x7c) == 0)) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar21,iVar14);
      puVar10 = (undefined8 *)*plVar21;
      lVar11 = (longlong)local_res8;
      for (; local_res8 = (longlong *)lVar11, iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar10 = 0;
        iVar6 = *(int *)(puVar9 + 1);
        pvVar23 = (void *)*puVar9;
        *(int *)(puVar10 + 1) = iVar6;
        if (iVar6 == 0) {
          *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar10,iVar6,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar10,pvVar23,(longlong)iVar6);
        }
        puVar10 = puVar10 + 2;
        puVar9 = puVar9 + 2;
        lVar11 = (longlong)local_res8;
      }
    }
  }
  plVar12 = (longlong *)(lVar11 + 0x80);
  iVar14 = 0xc;
  if ((int)param_4[1] < 0xd) {
    iVar14 = (int)param_4[1];
  }
  local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar14);
  *(undefined4 *)(lVar11 + 0x88) = 0;
  if (*(int *)(lVar11 + 0x8c) != iVar14) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar12,iVar14);
  }
  plVar21 = local_res20;
  lVar13 = 0;
  lVar16 = lVar13;
  if (0 < iVar14) {
    do {
      iVar6 = *(int *)(lVar11 + 0x88);
      lVar3 = *plVar21;
      *(int *)(lVar11 + 0x88) = iVar6 + 1;
      if (*(int *)(lVar11 + 0x8c) < iVar6 + 1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar12,iVar6);
      }
      uVar20 = 0;
      *(undefined1 *)((longlong)iVar6 + *plVar12) = 0;
      uVar17 = uVar20;
      uVar19 = uVar20;
      while( true ) {
        iVar18 = *(int *)(lVar13 + 8 + lVar3);
        iVar6 = iVar18 + -1;
        if (iVar18 == 0) {
          iVar6 = 0;
        }
        iVar18 = (int)uVar19;
        if (iVar6 <= iVar18) break;
        sVar1 = *(short *)(uVar17 + *(longlong *)(lVar13 + lVar3));
        if (sVar1 == 0x2d) {
          uVar19 = (ulonglong)(iVar18 + 1);
          *(undefined1 *)(lVar16 + *plVar12) = *(undefined1 *)(lVar16 + *plVar12);
          uVar17 = uVar17 + 2;
        }
        else if (sVar1 == 0x41) {
          uVar19 = (ulonglong)(iVar18 + 1);
          *(byte *)(lVar16 + *plVar12) = *(byte *)(lVar16 + *plVar12) | 1;
          uVar17 = uVar17 + 2;
        }
        else if (sVar1 == 0x43) {
          uVar19 = (ulonglong)(iVar18 + 1);
          *(byte *)(lVar16 + *plVar12) = *(byte *)(lVar16 + *plVar12) | 4;
          uVar17 = uVar17 + 2;
        }
        else if (sVar1 == 0x47) {
          uVar19 = (ulonglong)(iVar18 + 1);
          *(byte *)(lVar16 + *plVar12) = *(byte *)(lVar16 + *plVar12) | 8;
          uVar17 = uVar17 + 2;
        }
        else {
          uVar7 = 2;
          if (sVar1 != 0x54) {
            uVar7 = uVar20;
          }
          uVar19 = (ulonglong)(iVar18 + 1);
          *(byte *)(lVar16 + *plVar12) = *(byte *)(lVar16 + *plVar12) | (byte)uVar7;
          uVar17 = uVar17 + 2;
        }
      }
      lVar16 = lVar16 + 1;
      lVar13 = lVar13 + 0x10;
    } while (lVar16 < iVar14);
    lVar11 = (longlong)local_res8;
    iVar14 = (int)local_res10;
  }
  local_res8 = (longlong *)CONCAT44(iVar14,*(undefined4 *)(lVar11 + 0x68));
  *(longlong **)(lVar11 + 0x94) = local_res8;
  puVar9 = (undefined8 *)FDateTime::Now(&local_res8);
  *(undefined8 *)(lVar11 + 0xe8) = *puVar9;
  *(undefined4 *)(lVar11 + 0x90) = param_5;
  iVar6 = 0;
  *(undefined4 *)(lVar11 + 0x30) = 0;
  if (*(int *)(lVar11 + 0x34) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar11 + 0x28,0);
  }
  cVar5 = FWeakObjectPtr::IsValid(lVar11 + 0x40);
  iVar18 = iVar6;
  if ((((cVar5 != '\0') && (DAT_1468a64a8 != 0)) &&
      (lVar16 = FWeakObjectPtr::Get(lVar11 + 0x40), lVar16 != 0)) &&
     (lVar16 = FUN_140cff230(lVar16), lVar16 != 0)) {
    iVar18 = *(int *)(lVar16 + 0x22c);
  }
  *(int *)(lVar11 + 0xf0) = iVar18;
  if (DAT_1468a64a8 == 0) {
    iVar6 = 0xc;
  }
  else {
    if (((*(int *)(DAT_1468a64a8 + 0xb8) == -1) && (*(longlong *)(DAT_1468a64a8 + 0xb0) != 0)) &&
       (lVar16 = *(longlong *)(*(longlong *)(DAT_1468a64a8 + 0xb0) + 0x80), lVar16 != 0)) {
      iVar18 = *(int *)(DAT_1468a64a8 + 0x70);
      if ((iVar18 < 0) || (*(int *)(lVar16 + 0x38) <= iVar18)) goto LAB_141560541;
      lVar16 = (longlong)iVar18 * 0xe8 + *(longlong *)(lVar16 + 0x30);
      local_res8 = (longlong *)
                   CONCAT44(*(undefined4 *)(lVar16 + 0x88),*(undefined4 *)(lVar16 + 0x8c));
    }
    else {
LAB_141560541:
      local_res8 = (longlong *)0xc00000014;
    }
    iVar18 = (int)((ulonglong)local_res8 >> 0x20);
    if (*(longlong *)(lVar11 + 0x50) != 0) {
      if (iVar18 < iVar14) {
        if (0xb < iVar14) {
          iVar14 = 0xc;
        }
        local_res8 = (longlong *)CONCAT44(iVar14,*(undefined4 *)(lVar11 + 0x94));
        plVar12 = local_res8;
      }
      else {
        local_res8 = (longlong *)CONCAT44(iVar18,*(undefined4 *)(lVar11 + 0x94));
        plVar12 = local_res8;
      }
      goto LAB_1415605f6;
    }
    if (*(longlong *)(lVar11 + 0x38) == 0) {
      local_res18 = (longlong *)CONCAT44(iVar18,*(undefined4 *)(lVar11 + 0x94));
      plVar12 = local_res18;
      goto LAB_1415605f6;
    }
    lVar16 = *local_res18;
    lVar13 = (longlong)(int)local_res18[1] * 0x10 + lVar16;
    for (; lVar16 != lVar13; lVar16 = lVar16 + 0x10) {
      iVar2 = *(int *)(lVar16 + 8);
      iVar14 = iVar2 + -1;
      iVar18 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar14 = 0;
        iVar18 = -1;
      }
      if ((iVar6 < iVar14) && (iVar6 = 0, iVar2 != 0)) {
        iVar6 = iVar18;
      }
    }
  }
  local_res8 = (longlong *)CONCAT44(iVar6,*(undefined4 *)(lVar11 + 0x94));
  plVar12 = local_res8;
LAB_1415605f6:
  *(longlong **)(lVar11 + 0x9c) = plVar12;
  uVar4 = param_6[1];
  *(undefined8 *)(lVar11 + 0xa4) = *param_6;
  *(undefined8 *)(lVar11 + 0xac) = uVar4;
  FUN_141563850(lVar11);
  iVar14 = DAT_1468a6aac;
  iVar6 = rand();
  DAT_1468a6aac = 3;
  if ((int)((float)iVar6 * 0.00012207404) < 4) {
    DAT_1468a6aac = (int)((float)iVar6 * 0.00012207404);
  }
  while (DAT_1468a6aac == iVar14) {
    iVar6 = rand();
    DAT_1468a6aac = 3;
    if ((int)((float)iVar6 * 0.00012207404) < 4) {
      DAT_1468a6aac = (int)((float)iVar6 * 0.00012207404);
    }
  }
  return;
}



// FUNCTION 141560690 FUN_141560690 body=392 status=ok
// SIG undefined FUN_141560690(void)

void FUN_141560690(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar4 = *(longlong **)(param_1 + 800);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2 + 0x28,1,0);
  }
  plVar4 = *(longlong **)(param_1 + 0x328);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2 + 0x40,1,0);
  }
  plVar4 = *(longlong **)(param_1 + 0x330);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2 + 0x58,1,0);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  uVar6 = FUN_141601df0();
  uVar6 = FText::AsNumber(local_28,*(undefined4 *)(param_2 + 0x70),uVar6,&local_38);
  plVar4 = *(longlong **)(param_1 + 0x338);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,uVar6,1,0);
  }
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
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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
  uVar6 = FUN_1404b03b0();
  plVar4 = *(longlong **)(param_1 + 0x348);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,uVar6,1,0);
  }
  *(undefined4 *)(param_1 + 0x318) = param_3;
  FUN_14157a430(param_1,param_2);
  *(undefined1 *)(param_1 + 0x380) = 0;
  return;
}



// FUNCTION 141560820 FUN_141560820 body=1879 status=ok
// SIG undefined FUN_141560820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141560820(longlong param_1,undefined8 param_2,longlong param_3,int param_4,
                       char param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  uint uVar14;
  char *pcVar15;
  longlong lVar17;
  undefined1 auStack_408 [32];
  undefined4 local_3e8;
  uint local_3d8;
  int local_3d4;
  int local_3d0;
  longlong local_3c8 [3];
  longlong *local_3b0;
  undefined4 *local_3a8;
  undefined1 *puStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  longlong *local_388;
  uint local_380;
  undefined8 local_378;
  undefined8 local_368;
  longlong *plStack_360;
  undefined8 local_358;
  longlong local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  longlong *local_338;
  uint local_330;
  undefined1 local_328;
  undefined7 uStack_327;
  undefined1 local_318 [16];
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2a8 [16];
  undefined4 local_298 [2];
  longlong local_290;
  undefined1 local_270;
  undefined4 local_268;
  longlong local_260;
  undefined1 local_240;
  undefined1 local_238 [40];
  char local_210 [88];
  longlong local_1b8;
  undefined8 local_1b0;
  undefined1 local_198 [128];
  longlong local_118;
  undefined8 local_110;
  undefined1 local_f8 [128];
  longlong local_78;
  undefined8 local_70;
  ulonglong local_58;
  char *pcVar16;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  local_3d8 = 0;
  *(int *)(param_1 + 0x3c0) = param_4;
  local_3d0 = param_4;
  if (*(longlong **)(param_1 + 0x318) != (longlong *)0x0) {
    local_368 = 0;
    plStack_360 = (longlong *)0x0;
    lVar17 = **(longlong **)(param_1 + 0x318);
    uVar10 = FText::AsNumber(local_2f0,param_4,0,&local_368);
    (**(code **)(lVar17 + 0x2b0))(*(undefined8 *)(param_1 + 0x318),uVar10,1,0);
    if (local_2e8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_2e8 + 1;
      lVar17 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_2e8)(local_2e8);
        LOCK();
        piVar1 = (int *)((longlong)local_2e8 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_2e8 + 8))(local_2e8,1);
        }
      }
    }
    plVar4 = plStack_360;
    if (plStack_360 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_360 + 1;
      lVar17 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plStack_360)(plStack_360);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 800);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_3 + 0x48,1,0);
  }
  plVar4 = *(longlong **)(param_1 + 0x328);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_3 + 0x60,1,0);
  }
  uVar11 = FUN_14157a630(param_1,param_3);
  lVar17 = DAT_1468a64a8;
  if (DAT_1468a64a8 == 0) {
    return uVar11;
  }
  iVar9 = FUN_14155ce20(DAT_1468a64a8,param_2);
  local_3d4 = iVar9;
  uVar11 = FUN_14155d2b0(lVar17,param_2,*(undefined4 *)(param_1 + 0x3c0));
  local_3d8 = (uint)uVar11;
  if (*(longlong *)(param_1 + 0x330) != 0) {
    if ((*(int *)(param_1 + 0x3c0) == 0) || (iVar9 == *(int *)(param_1 + 0x3c0))) {
      uVar14 = *(uint *)(param_3 + 0x78);
    }
    else {
      uVar14 = *(uint *)(param_3 + 0x78);
      uVar11 = (ulonglong)uVar14;
    }
    local_3c8[1] = 8;
    if ((int)(uint)uVar11 <= (int)uVar14) {
      uVar14 = (uint)uVar11;
    }
    local_3c8[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_3c8,0);
    local_3e8 = CONCAT22(local_3e8._2_2_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_3c8[0],8,"{0}/{1}");
    iVar9 = *(int *)(param_3 + 0x78);
    uVar10 = FText::FromString(local_2c0,local_3c8);
    puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_2a8,uVar10);
    local_290 = (longlong)(int)uVar14;
    local_3a8 = local_298;
    local_298[0] = 0;
    puStack_3a0 = local_238;
    local_358 = *puVar12;
    local_350 = puVar12[1];
    local_270 = 0;
    local_268 = 0;
    local_240 = 0;
    if (local_350 != 0) {
      LOCK();
      *(int *)(local_350 + 8) = *(int *)(local_350 + 8) + 1;
      UNLOCK();
    }
    local_260 = (longlong)iVar9;
    uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_318,&local_3a8);
    uVar10 = FText::Format(local_2d8,&local_358,uVar10);
    FText::FText(local_308,uVar10);
    if (local_2d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_2d0 + 1;
      lVar17 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_2d0)(local_2d0);
        LOCK();
        piVar1 = (int *)((longlong)local_2d0 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_2d0 + 8))(local_2d0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_318);
    lVar17 = 2;
    pcVar16 = local_210;
    do {
      pcVar15 = pcVar16 + -0x30;
      lVar17 = lVar17 + -1;
      if (*pcVar15 != '\0') {
        *pcVar15 = '\0';
        plVar4 = *(longlong **)(pcVar16 + -0x40);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
      }
      pcVar16 = pcVar15;
    } while (lVar17 != 0);
    plVar4 = (longlong *)puVar12[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar17 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x330) + 0x2b0))
              (*(longlong **)(param_1 + 0x330),local_308,1,0);
    if (local_300 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_300 + 1;
      lVar17 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_300)(local_300);
        LOCK();
        piVar1 = (int *)((longlong)local_300 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_300 + 8))(local_300,1);
        }
      }
    }
    if (local_2b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_2b8 + 1;
      lVar17 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_2b8)(local_2b8);
        LOCK();
        piVar1 = (int *)((longlong)local_2b8 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_2b8 + 8))(local_2b8,1);
        }
      }
    }
    if (local_3c8[0] != 0) {
      FMemory::Free();
    }
    uVar11 = (ulonglong)local_3d8;
    iVar9 = local_3d4;
    param_4 = local_3d0;
  }
  if (*(longlong *)(param_1 + 0x340) != 0) {
    uVar11 = FUN_14157ae40(*(longlong *)(param_1 + 0x340));
  }
  if (iVar9 < *(int *)(param_1 + 0x3c0)) {
    uVar11 = FUN_142ed3c20(param_1,1);
    return uVar11;
  }
  plVar4 = *(longlong **)(param_1 + 0x348);
  if (plVar4 == (longlong *)0x0) {
    return uVar11;
  }
  if ((param_4 < 1) && (*(int *)(param_3 + 0x10) < 2)) {
    if (param_5 == '\0') {
      uVar11 = (**(code **)(*plVar4 + 0x278))(plVar4,0);
      return uVar11;
    }
LAB_141560cf1:
    plVar4 = *(longlong **)(param_1 + 0x350);
    if (plVar4 != (longlong *)0x0) {
      uVar11 = (**(code **)(*plVar4 + 0x278))(plVar4,0);
    }
  }
  else if (param_5 != '\0') goto LAB_141560cf1;
  if (*(longlong *)(param_1 + 0x358) == 0) {
    return uVar11;
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return uVar11;
  }
  uVar11 = FUN_140ad4c90(*(longlong *)(param_1 + 0x38),local_3c8 + 2);
  if (local_3c8[2] == 0) goto LAB_141560f1a;
  local_388 = (longlong *)0x0;
  local_398 = 0xffffffffffffffff;
  uStack_390 = 0xffffffffffffffff;
  local_380 = 0;
  cVar8 = FUN_142eeb620(*(undefined8 *)(param_1 + 0x358),0,&local_398);
  if (cVar8 != '\0') {
    if (param_5 == '\0') {
      if (*(int *)(param_1 + 0x3c0) < iVar9) {
        puVar13 = &DAT_143f3eda8;
        if (DAT_1464a14b8 != 0) {
          puVar13 = DAT_1464a14b0;
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_f8,puVar13);
        bVar6 = true;
        bVar5 = false;
      }
      else {
        if (*(int *)(param_3 + 0x10) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = *(undefined2 **)(param_3 + 8);
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,puVar13);
        bVar6 = false;
        bVar5 = true;
        local_70 = local_110;
      }
      local_3e8 = 0;
      FUN_142031710(local_3c8[2],param_1 + 0x360,local_70,0);
      if ((bVar5) && (local_118 != 0)) {
        FMemory::Free();
      }
      local_1b8 = local_78;
      if (bVar6) goto LAB_141560e66;
    }
    else {
      puVar13 = &DAT_143f3eda8;
      if (DAT_1464a14c8 != 0) {
        puVar13 = DAT_1464a14c0;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_238,puVar13);
      local_3e8 = 0;
      FUN_142031710(local_3c8[2],param_1 + 0x360,local_1b0,0);
LAB_141560e66:
      if (local_1b8 != 0) {
        FMemory::Free();
      }
    }
    local_3e8._0_1_ = ((byte)local_380 & 0x8f) == 10;
    (**(code **)(*local_388 + 0x28))(local_388,local_378,"bitmapData",param_1 + 0x360);
    local_348 = 0xffffffffffffffff;
    uStack_340 = 0xffffffffffffffff;
    local_338 = (longlong *)0x0;
    local_330 = 2;
    local_328 = 0;
    local_3e8 = CONCAT31(local_3e8._1_3_,((byte)local_380 & 0x8f) == 10);
    (**(code **)(*local_388 + 0x28))(local_388,local_378,"smoothing",&local_348);
    if ((local_330 >> 6 & 1) != 0) {
      (**(code **)(*local_338 + 0x10))(local_338,&local_348,CONCAT71(uStack_327,local_328));
    }
  }
  uVar11 = (ulonglong)(local_380 >> 6);
  if ((local_380 >> 6 & 1) != 0) {
    uVar11 = (**(code **)(*local_388 + 0x10))(local_388,&local_398,local_378);
  }
LAB_141560f1a:
  plVar4 = local_3b0;
  if (local_3b0 != (longlong *)0x0) {
    LOCK();
    puVar3 = (uint *)(local_3b0 + 1);
    uVar14 = *puVar3;
    uVar11 = (ulonglong)uVar14;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if (uVar14 == 1) {
      uVar11 = (**(code **)*local_3b0)(local_3b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        uVar11 = (**(code **)(*local_3b0 + 8))(local_3b0,1);
      }
    }
  }
  return uVar11;
}



// FUNCTION 141560f80 FUN_141560f80 body=660 status=ok
// SIG undefined FUN_141560f80(void)

void FUN_141560f80(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  float local_res8;
  undefined4 local_resc;
  float local_res10;
  undefined4 local_res14;
  float local_res20;
  undefined1 local_res24 [4];
  
  FWeakObjectPtr::operator=(param_1 + 0x198);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x198);
  if ((((cVar2 != '\0') && (*(longlong *)(param_1 + 0x180) != 0)) &&
      (*(longlong *)(param_1 + 0x188) != 0)) && (*(longlong *)(param_1 + 400) != 0)) {
    FUN_142087ad0(*(longlong *)(param_1 + 0x180),&local_res20,local_res24);
    FUN_142087ad0(*(undefined8 *)(param_1 + 0x188),&local_res10,&local_res14);
    FUN_1415628d0(*(undefined8 *)(param_1 + 400),param_2,param_1);
    FUN_141561220(*(undefined8 *)(param_1 + 0x180),param_2,param_1);
    FUN_1415621f0(*(undefined8 *)(param_1 + 0x188),param_2,param_1);
    if (param_3 != '\0') {
      uVar5 = 0;
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 400) + 0x178);
      uVar3 = (ulonglong)*(int *)(*(longlong *)(param_1 + 400) + 0x180);
      uVar6 = uVar3 & 0x1fffffffffffffff;
      if (plVar4 + uVar3 < plVar4) {
        uVar6 = uVar5;
      }
      uVar3 = uVar5;
      if (uVar6 != 0) {
        do {
          if (*plVar4 != 0) {
            *(char *)(*plVar4 + 0x228) = param_3;
          }
          plVar4 = plVar4 + 1;
          uVar3 = uVar3 + 1;
        } while (uVar3 != uVar6);
      }
      lVar1 = *(longlong *)(param_1 + 0x180);
      puVar7 = *(ulonglong **)(lVar1 + 0x188);
      puVar8 = puVar7 + (longlong)*(int *)(lVar1 + 400) * 2;
      for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
        plVar4 = (longlong *)*puVar7;
        uVar6 = (longlong)(int)puVar7[1] & 0x1fffffffffffffff;
        if (plVar4 + (int)puVar7[1] < plVar4) {
          uVar6 = uVar5;
        }
        uVar3 = uVar5;
        if (uVar6 != 0) {
          do {
            if (*plVar4 != 0) {
              *(char *)(*plVar4 + 0x228) = param_3;
            }
            plVar4 = plVar4 + 1;
            uVar3 = uVar3 + 1;
          } while (uVar3 != uVar6);
        }
      }
      puVar7 = *(ulonglong **)(lVar1 + 0x198);
      puVar8 = puVar7 + (longlong)*(int *)(lVar1 + 0x1a0) * 2;
      for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
        plVar4 = (longlong *)*puVar7;
        uVar6 = (longlong)(int)puVar7[1] & 0x1fffffffffffffff;
        if (plVar4 + (int)puVar7[1] < plVar4) {
          uVar6 = uVar5;
        }
        uVar3 = uVar5;
        if (uVar6 != 0) {
          do {
            if (*plVar4 != 0) {
              *(char *)(*plVar4 + 0x228) = param_3;
            }
            plVar4 = plVar4 + 1;
            uVar3 = uVar3 + 1;
          } while (uVar3 != uVar6);
        }
      }
      if (*(longlong *)(lVar1 + 0x1b0) != 0) {
        *(char *)(*(longlong *)(lVar1 + 0x1b0) + 0x228) = param_3;
      }
    }
    FUN_142087ad0(*(undefined8 *)(param_1 + 0x180),&local_res8,&local_resc);
    FUN_14208ff10(*(undefined8 *)(param_1 + 0x188),local_res8 - (local_res20 - local_res10),
                  local_res14);
    FUN_1420900f0(*(undefined8 *)(param_1 + 400),
                  CONCAT44(local_resc,
                           (float)*(int *)(*(longlong *)(param_1 + 0x180) + 0x1c0) *
                           *(float *)(*(longlong *)(param_1 + 0x180) + 0x1dc) + local_res8 + 30.0));
  }
  return;
}



// FUNCTION 141561220 FUN_141561220 body=4045 status=ok
// SIG undefined FUN_141561220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141561220(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong **pplVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char cVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  bool bVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_5e8 [32];
  longlong *local_5c8;
  undefined1 local_5c0;
  longlong **local_5b8;
  char local_5a8;
  int local_5a4;
  int local_5a0;
  int local_59c;
  longlong local_598;
  longlong local_590;
  longlong local_588;
  longlong *local_580;
  float local_578;
  undefined4 local_574;
  longlong local_570;
  longlong local_568;
  ulonglong local_560;
  longlong local_558;
  ulonglong local_550;
  longlong local_548;
  longlong *local_540;
  longlong local_538;
  ulonglong local_530;
  longlong *local_528;
  undefined8 local_520;
  longlong *local_518;
  undefined8 local_510;
  longlong *local_508;
  undefined8 local_500;
  int local_4f8;
  int local_4f4;
  int local_4f0;
  int local_4ec;
  longlong local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  longlong *plStack_4d0;
  longlong local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined2 *local_4a0;
  int local_498;
  undefined2 *local_490;
  int local_488;
  undefined8 local_480;
  longlong local_478;
  longlong *local_470 [2];
  longlong *local_460 [2];
  longlong *local_450 [3];
  undefined1 local_438 [128];
  undefined1 *local_3b8;
  undefined1 *local_3b0;
  undefined4 local_3a8;
  char local_398 [128];
  char *local_318;
  char *local_310;
  undefined4 local_308;
  undefined1 local_2f8 [128];
  longlong local_278;
  undefined1 *local_270;
  undefined4 local_268;
  undefined1 local_258 [128];
  longlong local_1d8;
  undefined1 *local_1d0;
  undefined4 local_1c8;
  undefined1 local_1b8 [128];
  longlong local_138;
  char *local_130;
  undefined1 local_118 [128];
  longlong local_98;
  char *local_90;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_5e8;
  local_59c = 0;
  local_590 = param_2;
  FWeakObjectPtr::operator=(param_1 + 0x1b8,param_3);
  if (param_2 == 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar18 = *piVar1;
    if (iVar18 == 0) {
      *piVar1 = 0;
      iVar18 = 0;
    }
    UNLOCK();
    if (0 < iVar18) {
      local_580 = *(longlong **)(param_1 + 0x30);
      bVar6 = true;
      bVar5 = false;
      local_588 = 0;
      if (local_580 == (longlong *)0x0) {
LAB_1415612f7:
        plVar14 = &local_588;
        local_548 = local_588;
      }
      else {
        LOCK();
        iVar18 = (int)local_580[1];
        bVar22 = iVar18 == 0;
        if (bVar22) {
          *(int *)(local_580 + 1) = 0;
          iVar18 = 0;
        }
        UNLOCK();
        while (!bVar22) {
          LOCK();
          bVar22 = iVar18 == (int)local_580[1];
          if (bVar22) {
            *(int *)(local_580 + 1) = iVar18 + 1;
          }
          UNLOCK();
          if (bVar22) {
            if (local_580 != (longlong *)0x0) {
              local_588 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_1415612f7;
          }
          LOCK();
          iVar18 = (int)local_580[1];
          bVar22 = iVar18 == 0;
          if (bVar22) {
            *(int *)(local_580 + 1) = 0;
            iVar18 = 0;
          }
          UNLOCK();
        }
        plVar14 = &local_588;
        local_580 = (longlong *)0x0;
        local_548 = 0;
      }
      goto LAB_141561317;
    }
  }
  plVar14 = &local_4d8;
  local_4d8 = 0;
  plStack_4d0 = (longlong *)0x0;
  bVar6 = false;
  bVar5 = true;
  local_548 = 0;
LAB_141561317:
  plVar12 = (longlong *)plVar14[1];
  plVar14[1] = 0;
  plVar17 = plStack_4d0;
  local_540 = plVar12;
  *plVar14 = 0;
  if ((bVar5) && (plStack_4d0 != (longlong *)0x0)) {
    LOCK();
    plVar14 = plStack_4d0 + 1;
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_4d0)();
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plStack_4d0 + 8))(plStack_4d0,1);
      }
    }
  }
  plVar14 = local_580;
  if ((bVar6) && (local_580 != (longlong *)0x0)) {
    LOCK();
    plVar12 = local_580 + 1;
    lVar13 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_580)();
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_580 + 8))(local_580,1);
      }
    }
  }
  if (local_548 != 0) {
    uVar10 = *(ulonglong *)(param_2 + 0x9c);
    *(ulonglong *)(param_1 + 0x1c0) = uVar10;
    local_5a8 = '\0';
    if (*(int *)(param_1 + 0x194) < (int)uVar10) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x188,uVar10 & 0xffffffff);
      uVar10 = (ulonglong)*(uint *)(param_1 + 0x1c0);
    }
    local_4c8 = 0;
    local_4c0 = 0;
    FUN_14155ed10(param_1 + 0x198,&local_4c8,uVar10 & 0xffffffff);
    if (local_4c8 != 0) {
      FMemory::Free();
    }
    local_59c = *(int *)(param_1 + 0x1c4) * *(int *)(param_1 + 0x1c0);
    local_5a0 = 1;
    local_5a4 = 0;
    if (0 < *(int *)(param_1 + 0x1c0)) {
      local_4e0 = 0;
      do {
        lVar13 = local_4e0;
        iVar19 = local_5a4;
        plVar14 = (longlong *)(param_1 + 0x188);
        iVar18 = *(int *)(param_1 + 400);
        *(int *)(param_1 + 400) = iVar18 + 1;
        if (*(int *)(param_1 + 0x194) < iVar18 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar18);
        }
        iVar21 = 0;
        puVar11 = (undefined8 *)((longlong)iVar18 * 0x10 + *plVar14);
        *puVar11 = 0;
        puVar11[1] = 0;
        if ((iVar19 < 0) || (*(int *)(param_2 + 0x68) <= iVar19)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (((bVar5) && (0 < *(int *)(lVar13 * 0x10 + 8 + *(longlong *)(param_2 + 0x60)))) &&
           (*(int *)(lVar13 * 0x10 + *plVar14 + 0xc) < *(int *)(param_1 + 0x1c4))) {
          TArray<void_*,FDefaultAllocator>::ResizeTo();
        }
        iVar18 = *(int *)(param_1 + 0x1c4);
        local_598 = lVar13 * 0x10;
        lVar20 = *(longlong *)(param_1 + 0x198) + local_598;
        if (*(int *)(lVar20 + 0xc) < iVar18) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(lVar20,iVar18);
          iVar18 = *(int *)(param_1 + 0x1c4);
        }
        local_570 = 0;
        if (0 < iVar18) {
          local_4e8 = local_548;
          do {
            lVar13 = local_4e8;
            FString::PrintfImpl(&local_490,L"gridTile_%d_%d",iVar19,iVar21);
            puVar15 = &DAT_143f3eda8;
            if (local_488 != 0) {
              puVar15 = local_490;
            }
            TStringConversion<TStringConvert<wchar_t,char>,128>::
            TStringConversion<TStringConvert<wchar_t,char>,128>(local_1b8,puVar15);
            pcVar8 = local_130;
            local_530 = 0;
            local_538 = 0;
            if ((local_130 != (char *)0x0) && (*local_130 != '\0')) {
              lVar20 = -1;
              do {
                lVar20 = lVar20 + 1;
              } while (local_130[lVar20] != '\0');
              uVar16 = (int)lVar20 + 1;
              local_530 = (ulonglong)uVar16;
              if (0 < (int)uVar16) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_538,0);
              }
              local_5c8 = (longlong *)CONCAT62(local_5c8._2_6_,0x3f);
              FGenericPlatformString::Convert<char,wchar_t>(local_538,uVar16,pcVar8,uVar16);
            }
            local_278 = 0;
            local_270 = local_2f8;
            local_268 = 0xe;
            local_5c8 = (longlong *)CONCAT71(local_5c8._1_7_,0x3f);
            FGenericPlatformString::Convert<wchar_t,char>(local_270,0xf,L"PuzzleGridTile");
            puVar7 = local_270;
            local_4b8 = FUN_1415824f0();
            uVar4 = *(undefined8 *)(lVar13 + 0x78);
            plVar14 = *(longlong **)(lVar13 + 0x80);
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
            }
            local_5b8 = &local_528;
            local_528 = (longlong *)0x0;
            local_5c8 = &local_538;
            local_5c0 = 6;
            local_520 = 0;
            plVar12 = (longlong *)FUN_14202a0e0(uVar4,local_4b8,param_1,puVar7);
            if (plVar12 == (longlong *)0x0) {
LAB_1415616a2:
              plVar12 = (longlong *)0x0;
            }
            else {
              lVar13 = FUN_1415824f0();
              if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
                  lVar13 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (!bVar5) goto LAB_1415616a2;
            }
            plVar17 = local_528;
            for (iVar18 = (int)local_520; iVar18 != 0; iVar18 = iVar18 + -1) {
              if (*plVar17 != 0) {
                FMemory::Free();
              }
              plVar17 = plVar17 + 2;
            }
            if (local_528 != (longlong *)0x0) {
              FMemory::Free(local_528);
            }
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar17 = plVar14 + 1;
              lVar13 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar18 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar18 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            if (local_278 != 0) {
              FMemory::Free();
            }
            if (local_538 != 0) {
              FMemory::Free();
            }
            if (local_138 != 0) {
              FMemory::Free();
            }
            if (local_5a8 == '\0') {
              lVar13 = local_598;
              if (plVar12 != (longlong *)0x0) {
                dVar23 = (double)FUN_142eeca30(plVar12);
                *(float *)(param_1 + 0x1d8) = (float)dVar23;
                dVar23 = (double)FUN_142eeea40(plVar12);
                iVar18 = *(int *)(param_1 + 0x1c0);
                *(float *)(param_1 + 0x1dc) = (float)dVar23;
                dVar24 = (double)FUN_142eeea40(param_1);
                FUN_142087ad0(param_1,&local_578,&local_574);
                FUN_14208ff10(param_1,((float)dVar24 - (float)iVar18 * (float)dVar23) * 0.5 +
                                      local_578,local_574);
                local_5a8 = '\x01';
                goto LAB_1415617d6;
              }
            }
            else {
LAB_1415617d6:
              lVar13 = local_598;
              if (plVar12 != (longlong *)0x0) {
                uVar3 = *(undefined4 *)(param_1 + 0x1d8);
                *(undefined4 *)(plVar12 + 0x39) = *(undefined4 *)(param_1 + 0x1dc);
                *(undefined4 *)((longlong)plVar12 + 0x1cc) = uVar3;
                local_4f8 = local_5a4;
                local_4f4 = iVar21;
                (**(code **)(*plVar12 + 0x2a8))(plVar12,&local_4f8);
                pplVar2 = (longlong **)(plVar12 + 0x30);
                plVar14 = (longlong *)FMemory::Realloc(0,0x30);
                local_470[0] = plVar14;
                if (plVar14 != (longlong *)0x0) {
                  *plVar14 = (longlong)&PTR_FUN_143f4d290;
                  FWeakObjectPtr::operator=(plVar14 + 1,param_1);
                  plVar14[2] = (longlong)FUN_141575d00;
                  lVar13 = FDelegateHandle::GenerateNewID();
                  plVar14[4] = lVar13;
                  *plVar14 = (longlong)&PTR_FUN_143f4d2d8;
                }
                if (local_470 == pplVar2) {
LAB_141561891:
                  if (plVar14 != (longlong *)0x0) {
                    (**(code **)(*plVar14 + 0x28))(plVar14,0);
                    local_470[0] = (longlong *)FMemory::Realloc(plVar14,0,0);
                    if (local_470[0] != (longlong *)0x0) {
                      FMemory::Free(local_470[0]);
                    }
                  }
                }
                else {
                  if (plVar14 != (longlong *)0x0) {
                    (**(code **)(*plVar14 + 0x30))(plVar14,pplVar2);
                    goto LAB_141561891;
                  }
                  if (((int)plVar12[0x31] != 0) && (plVar14 = *pplVar2, plVar14 != (longlong *)0x0))
                  {
                    (**(code **)(*plVar14 + 0x28))(plVar14,0);
                    if (*pplVar2 != (longlong *)0x0) {
                      plVar14 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
                      *pplVar2 = plVar14;
                    }
                    *(undefined4 *)(plVar12 + 0x31) = 0;
                  }
                }
                iVar18 = local_5a0;
                FUN_142f0bc30(param_1,plVar12,local_5a0);
                lVar13 = local_598;
                local_5a0 = iVar18 + 1;
                plVar14 = (longlong *)(*(longlong *)(param_1 + 0x198) + local_598);
                iVar18 = (int)plVar14[1];
                *(int *)(plVar14 + 1) = iVar18 + 1;
                if (*(int *)((longlong)plVar14 + 0xc) < iVar18 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar18);
                }
                *(longlong **)(*plVar14 + (longlong)iVar18 * 8) = plVar12;
              }
            }
            if ((local_5a4 < 0) || (*(int *)(local_590 + 0x68) <= local_5a4)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              if ((iVar21 < 0) || (*(int *)(lVar13 + 8 + *(longlong *)(local_590 + 0x60)) <= iVar21)
                 ) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                FString::PrintfImpl(&local_4a0,L"puzzleTile_%d_%d",local_5a4,iVar21);
                puVar15 = &DAT_143f3eda8;
                if (local_498 != 0) {
                  puVar15 = local_4a0;
                }
                TStringConversion<TStringConvert<wchar_t,char>,128>::
                TStringConversion<TStringConvert<wchar_t,char>,128>(local_118,puVar15);
                pcVar8 = local_90;
                local_560 = 0;
                local_568 = 0;
                if ((local_90 != (char *)0x0) && (*local_90 != '\0')) {
                  lVar13 = -1;
                  do {
                    lVar13 = lVar13 + 1;
                  } while (local_90[lVar13] != '\0');
                  uVar16 = (int)lVar13 + 1;
                  local_560 = (ulonglong)uVar16;
                  if (0 < (int)uVar16) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_568,0);
                  }
                  local_5c8 = (longlong *)CONCAT62(local_5c8._2_6_,0x3f);
                  FGenericPlatformString::Convert<char,wchar_t>(local_568,uVar16,pcVar8,uVar16);
                }
                local_1d8 = 0;
                local_1d0 = local_258;
                local_1c8 = 10;
                local_5c8 = (longlong *)CONCAT71(local_5c8._1_7_,0x3f);
                FGenericPlatformString::Convert<wchar_t,char>(local_1d0,0xb,L"PuzzleTile");
                puVar7 = local_1d0;
                local_4b0 = FUN_141581d30();
                uVar4 = *(undefined8 *)(local_4e8 + 0x78);
                plVar14 = *(longlong **)(local_4e8 + 0x80);
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                  UNLOCK();
                }
                local_5b8 = &local_518;
                local_518 = (longlong *)0x0;
                local_5c8 = &local_568;
                local_5c0 = 6;
                local_510 = 0;
                plVar12 = (longlong *)FUN_14202a0e0(uVar4,local_4b0,param_1,puVar7);
                if (plVar12 == (longlong *)0x0) {
LAB_141561ad8:
                  plVar12 = (longlong *)0x0;
                }
                else {
                  lVar13 = FUN_141581d30();
                  if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
                      lVar13 + 0x88)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if (!bVar5) goto LAB_141561ad8;
                }
                plVar17 = local_518;
                for (iVar18 = (int)local_510; iVar18 != 0; iVar18 = iVar18 + -1) {
                  if (*plVar17 != 0) {
                    FMemory::Free();
                  }
                  plVar17 = plVar17 + 2;
                }
                if (local_518 != (longlong *)0x0) {
                  FMemory::Free(local_518);
                }
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar17 = plVar14 + 1;
                  lVar13 = *plVar17;
                  *(int *)plVar17 = (int)*plVar17 + -1;
                  UNLOCK();
                  if ((int)lVar13 == 1) {
                    (**(code **)*plVar14)(plVar14);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar14 + 0xc);
                    iVar18 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar18 == 1) {
                      (**(code **)(*plVar14 + 8))(plVar14,1);
                    }
                  }
                }
                if (local_1d8 != 0) {
                  FMemory::Free();
                }
                if (local_568 != 0) {
                  FMemory::Free();
                }
                if (local_98 != 0) {
                  FMemory::Free();
                }
                if (plVar12 != (longlong *)0x0) {
                  (**(code **)(*plVar12 + 0x278))(plVar12,0);
                  lVar13 = local_598;
                  FUN_14157b1a0(plVar12,*(undefined1 *)
                                         (*(longlong *)(local_598 + *(longlong *)(local_590 + 0x60))
                                         + local_570));
                  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
                  *(undefined4 *)(plVar12 + 0x39) = *(undefined4 *)(param_1 + 0x1dc);
                  local_4f0 = local_5a4;
                  *(undefined4 *)((longlong)plVar12 + 0x1cc) = uVar3;
                  local_4ec = iVar21;
                  (**(code **)(*plVar12 + 0x2a8))(plVar12,&local_4f0);
                  pplVar2 = (longlong **)(plVar12 + 0x2e);
                  plVar14 = (longlong *)FMemory::Realloc(0,0x30);
                  local_460[0] = plVar14;
                  if (plVar14 != (longlong *)0x0) {
                    *plVar14 = (longlong)&PTR_FUN_143f4d290;
                    FWeakObjectPtr::operator=(plVar14 + 1,param_1);
                    plVar14[2] = (longlong)&LAB_14156cec0;
                    lVar20 = FDelegateHandle::GenerateNewID();
                    plVar14[4] = lVar20;
                    *plVar14 = (longlong)&PTR_FUN_143f4d2d8;
                  }
                  if (local_460 == pplVar2) {
LAB_141561c60:
                    if (plVar14 != (longlong *)0x0) {
                      (**(code **)(*plVar14 + 0x28))(plVar14,0);
                      local_460[0] = (longlong *)FMemory::Realloc(plVar14,0,0);
                      if (local_460[0] != (longlong *)0x0) {
                        FMemory::Free(local_460[0]);
                      }
                    }
                  }
                  else {
                    if (plVar14 != (longlong *)0x0) {
                      (**(code **)(*plVar14 + 0x30))(plVar14,pplVar2);
                      goto LAB_141561c60;
                    }
                    if (((int)plVar12[0x2f] != 0) &&
                       (plVar14 = *pplVar2, plVar14 != (longlong *)0x0)) {
                      (**(code **)(*plVar14 + 0x28))(plVar14,0);
                      if (*pplVar2 != (longlong *)0x0) {
                        plVar14 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
                        *pplVar2 = plVar14;
                      }
                      *(undefined4 *)(plVar12 + 0x2f) = 0;
                    }
                  }
                  pplVar2 = (longlong **)(plVar12 + 0x30);
                  plVar14 = (longlong *)FMemory::Realloc(0,0x30);
                  local_450[0] = plVar14;
                  if (plVar14 != (longlong *)0x0) {
                    *plVar14 = (longlong)&PTR_FUN_143f4d290;
                    FWeakObjectPtr::operator=(plVar14 + 1,param_1);
                    plVar14[2] = (longlong)FUN_141575d00;
                    lVar20 = FDelegateHandle::GenerateNewID();
                    plVar14[4] = lVar20;
                    *plVar14 = (longlong)&PTR_FUN_143f4d2d8;
                  }
                  if (local_450 == pplVar2) {
LAB_141561d0a:
                    if (plVar14 != (longlong *)0x0) {
                      (**(code **)(*plVar14 + 0x28))(plVar14,0);
                      local_450[0] = (longlong *)FMemory::Realloc(plVar14,0,0);
                      if (local_450[0] != (longlong *)0x0) {
                        FMemory::Free(local_450[0]);
                      }
                    }
                  }
                  else {
                    if (plVar14 != (longlong *)0x0) {
                      (**(code **)(*plVar14 + 0x30))(plVar14,pplVar2);
                      goto LAB_141561d0a;
                    }
                    if (((int)plVar12[0x31] != 0) &&
                       (plVar14 = *pplVar2, plVar14 != (longlong *)0x0)) {
                      (**(code **)(*plVar14 + 0x28))(plVar14,0);
                      if (*pplVar2 != (longlong *)0x0) {
                        plVar14 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
                        *pplVar2 = plVar14;
                      }
                      *(undefined4 *)(plVar12 + 0x31) = 0;
                    }
                  }
                  FUN_142f0bc30(param_1,plVar12,local_59c + local_5a0);
                  plVar14 = (longlong *)(*(longlong *)(param_1 + 0x188) + lVar13);
                  iVar18 = (int)plVar14[1];
                  *(int *)(plVar14 + 1) = iVar18 + 1;
                  if (*(int *)((longlong)plVar14 + 0xc) < iVar18 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (plVar14,iVar18);
                  }
                  *(longlong **)(*plVar14 + (longlong)iVar18 * 8) = plVar12;
                }
                if (local_4a0 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
              }
            }
            iVar19 = local_5a4;
            if (local_490 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            local_570 = local_570 + 1;
            iVar21 = iVar21 + 1;
            param_2 = local_590;
            lVar13 = local_4e0;
          } while (iVar21 < *(int *)(param_1 + 0x1c4));
        }
        local_5a4 = iVar19 + 1;
        local_4e0 = lVar13 + 1;
      } while (local_5a4 < *(int *)(param_1 + 0x1c0));
    }
    *(int *)(param_1 + 0x1e0) = local_5a0 + 1 + local_59c;
    if ((*(longlong *)(param_1 + 0x1a8) != 0) &&
       (cVar9 = FWeakObjectPtr::IsValid(param_1 + 0x1b8), cVar9 != '\0')) {
      lVar13 = FWeakObjectPtr::Get(param_1 + 0x1b8);
      if (*(longlong *)(lVar13 + 400) == 0) {
        iVar18 = *(int *)(param_1 + 0x1c4);
      }
      else {
        iVar18 = *(int *)(*(longlong *)(lVar13 + 400) + 400);
        if (iVar18 <= *(int *)(param_1 + 0x1c4)) {
          iVar18 = *(int *)(param_1 + 0x1c4);
        }
      }
      FUN_142f0da80(*(undefined8 *)(param_1 + 0x1a8),
                    (double)((float)iVar18 * *(float *)(param_1 + 0x1d8)));
      FUN_142f113c0(*(undefined8 *)(param_1 + 0x1a8),
                    (double)((float)*(int *)(param_1 + 0x1c0) * *(float *)(param_1 + 0x1dc)));
    }
    local_308 = 10;
    local_318 = (char *)0x0;
    TInlineAllocator<128,FDefaultAllocator>::ForElementType<char>::ResizeAllocation
              (local_398,0,0xb,1);
    local_5c8 = (longlong *)CONCAT71(local_5c8._1_7_,0x3f);
    local_310 = local_398;
    if (local_318 != (char *)0x0) {
      local_310 = local_318;
    }
    FGenericPlatformString::Convert<wchar_t,char>(local_310,0xb,L"LooseToken");
    pcVar8 = local_310;
    local_558 = 0;
    local_550 = 0;
    if ((local_310 != (char *)0x0) && (*local_310 != '\0')) {
      lVar13 = -1;
      do {
        lVar13 = lVar13 + 1;
      } while (local_310[lVar13] != '\0');
      uVar16 = (int)lVar13 + 1;
      local_550 = (ulonglong)uVar16;
      if (0 < (int)uVar16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_558,0);
      }
      local_5c8 = (longlong *)CONCAT62(local_5c8._2_6_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_558,uVar16,pcVar8,uVar16);
    }
    local_3b8 = (undefined1 *)0x0;
    local_3a8 = 10;
    TInlineAllocator<128,FDefaultAllocator>::ForElementType<char>::ResizeAllocation
              (local_438,0,0xb,1);
    local_5c8 = (longlong *)CONCAT71(local_5c8._1_7_,0x3f);
    local_3b0 = local_438;
    if (local_3b8 != (undefined1 *)0x0) {
      local_3b0 = local_3b8;
    }
    FGenericPlatformString::Convert<wchar_t,char>(local_3b0,0xb,L"PuzzleTile");
    puVar7 = local_3b0;
    local_4a8 = FUN_141582720();
    local_478 = *(longlong *)(local_548 + 0x80);
    local_480 = *(undefined8 *)(local_548 + 0x78);
    if (local_478 != 0) {
      LOCK();
      *(int *)(local_478 + 8) = *(int *)(local_478 + 8) + 1;
      UNLOCK();
    }
    local_5b8 = &local_508;
    local_508 = (longlong *)0x0;
    local_5c8 = &local_558;
    local_5c0 = 6;
    local_500 = 0;
    lVar13 = FUN_14202a0e0(local_480,local_4a8,param_1,puVar7);
    if ((lVar13 == 0) || (cVar9 = UObjectBaseUtility::IsA<UActorChannel>(lVar13), cVar9 == '\0')) {
      lVar13 = 0;
    }
    plVar14 = local_508;
    for (iVar18 = (int)local_500; iVar18 != 0; iVar18 = iVar18 + -1) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 2;
    }
    if (local_508 != (longlong *)0x0) {
      FMemory::Free(local_508);
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_480);
    if (local_3b8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_558 != 0) {
      FMemory::Free();
    }
    if (local_318 != (char *)0x0) {
      FMemory::Free();
    }
    if (lVar13 != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x1dc);
      *(undefined4 *)(lVar13 + 0x1cc) = *(undefined4 *)(param_1 + 0x1d8);
      *(undefined4 *)(lVar13 + 0x1c8) = uVar3;
      *(undefined1 *)(lVar13 + 0x1bb) = 0;
      FUN_142f0bc30(param_1,lVar13,0xf1);
      FUN_14157ab50(param_1,lVar13);
    }
  }
  plVar14 = local_540;
  if (local_540 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_540 + 1;
    lVar13 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_540)(local_540);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_540 + 8))(local_540,1);
      }
    }
  }
  return;
}



// FUNCTION 1415621f0 FUN_1415621f0 body=1680 status=ok
// SIG undefined FUN_1415621f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415621f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  byte bVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  byte bVar16;
  int iVar17;
  longlong lVar18;
  undefined1 *puVar19;
  int iVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_2c8 [32];
  longlong *local_2a8;
  undefined1 local_2a0;
  longlong **local_298;
  char local_288;
  int local_284;
  undefined1 *local_280;
  int local_278;
  uint local_274;
  ulonglong local_270;
  longlong *local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  ulonglong local_248;
  longlong *local_240;
  undefined8 local_238;
  ulonglong local_230;
  longlong *local_228;
  ulonglong local_220;
  longlong *plStack_218;
  longlong local_210;
  undefined8 local_208;
  undefined8 local_200;
  longlong local_1f8;
  longlong *local_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined2 *local_1d0;
  int local_1c8;
  undefined1 local_1b8 [128];
  longlong local_138;
  undefined1 *local_130;
  undefined4 local_128;
  undefined1 local_118 [128];
  longlong local_98;
  char *local_90;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  uVar7 = 0;
  local_284 = 0;
  local_1f8 = param_1;
  local_1d8 = param_2;
  FWeakObjectPtr::operator=(param_1 + 0x180,param_3);
  if (param_2 == 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar20 = *piVar1;
    if (iVar20 == 0) {
      *piVar1 = 0;
      iVar20 = 0;
    }
    UNLOCK();
    if (0 < iVar20) {
      local_268 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar4 = false;
      local_270 = 0;
      if (local_268 != (longlong *)0x0) {
        LOCK();
        uVar12 = *(uint *)(local_268 + 1);
        bVar21 = uVar12 == 0;
        if (bVar21) {
          *(uint *)(local_268 + 1) = 0;
        }
        else {
          uVar7 = (ulonglong)uVar12;
        }
        UNLOCK();
        while (!bVar21) {
          iVar20 = (int)uVar7;
          LOCK();
          bVar21 = iVar20 == (int)local_268[1];
          if (bVar21) {
            *(int *)(local_268 + 1) = iVar20 + 1;
          }
          UNLOCK();
          if (bVar21) {
            uVar7 = *(ulonglong *)(param_1 + 0x28);
            puVar8 = &local_270;
            local_270 = uVar7;
            goto LAB_1415622db;
          }
          uVar7 = 0;
          LOCK();
          uVar12 = *(uint *)(local_268 + 1);
          bVar21 = uVar12 == 0;
          if (bVar21) {
            *(uint *)(local_268 + 1) = 0;
          }
          else {
            uVar7 = (ulonglong)uVar12;
          }
          UNLOCK();
        }
        local_268 = (longlong *)0x0;
      }
      uVar7 = 0;
      puVar8 = &local_270;
      goto LAB_1415622db;
    }
  }
  puVar8 = &local_220;
  local_220 = 0;
  plStack_218 = (longlong *)0x0;
  bVar5 = false;
  bVar4 = true;
LAB_1415622db:
  local_230 = uVar7;
  plVar15 = (longlong *)puVar8[1];
  puVar8[1] = 0;
  plVar14 = plStack_218;
  local_228 = plVar15;
  *puVar8 = 0;
  if ((bVar4) && (plStack_218 != (longlong *)0x0)) {
    LOCK();
    plVar15 = plStack_218 + 1;
    lVar13 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_218)(plStack_218);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*plStack_218 + 8))(plStack_218,1);
      }
    }
  }
  plVar15 = local_268;
  if ((bVar5) && (local_268 != (longlong *)0x0)) {
    LOCK();
    plVar14 = local_268 + 1;
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_268)(local_268);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*local_268 + 8))(local_268,1);
      }
    }
  }
  if (local_230 != 0) {
    iVar20 = *(int *)(param_2 + 0x88);
    local_288 = '\0';
    local_1f0 = (longlong *)(param_1 + 0x170);
    local_210 = 0;
    fVar22 = 0.0;
    local_208 = 0;
    fVar23 = 0.0;
    FUN_14155ed10(local_1f0,&local_210,iVar20);
    if (local_210 != 0) {
      FMemory::Free();
    }
    local_284 = 0;
    local_260 = 0;
    local_1e0 = (longlong)iVar20;
    if (0 < iVar20) {
      local_258 = 0;
      do {
        puVar9 = (undefined1 *)0x0;
        local_280 = (undefined1 *)0x0;
        bVar16 = 0;
        local_274 = 0;
        local_278 = 0;
        lVar13 = *(longlong *)(param_2 + 0x80);
        iVar20 = 0xf;
        lVar18 = local_260;
        puVar19 = puVar9;
        do {
          iVar17 = local_278;
          bVar11 = '\x01' << (bVar16 & 0x1f);
          if ((*(byte *)(lVar18 + lVar13) & bVar11) != 0) {
            lVar18 = (longlong)local_278;
            local_278 = local_278 + 1;
            if ((int)puVar9 < local_278) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_280,iVar17);
              puVar9 = (undefined1 *)(ulonglong)local_274;
              puVar19 = local_280;
            }
            puVar19[lVar18] = bVar11;
            lVar18 = local_260;
          }
          bVar16 = bVar16 + 1;
          iVar20 = iVar20 >> 1;
        } while (iVar20 != 0);
        iVar20 = 0;
        puVar9 = puVar19;
        if (0 < local_278) {
          local_1e8 = local_230;
          do {
            uVar7 = local_1e8;
            FString::PrintfImpl(&local_1d0,L"guideTile_%d_%d",iVar20,local_284);
            puVar10 = &DAT_143f3eda8;
            if (local_1c8 != 0) {
              puVar10 = local_1d0;
            }
            TStringConversion<TStringConvert<wchar_t,char>,128>::
            TStringConversion<TStringConvert<wchar_t,char>,128>(local_118,puVar10);
            pcVar6 = local_90;
            local_250 = 0;
            local_248 = 0;
            if ((local_90 != (char *)0x0) && (*local_90 != '\0')) {
              lVar13 = -1;
              do {
                lVar13 = lVar13 + 1;
              } while (local_90[lVar13] != '\0');
              uVar12 = (int)lVar13 + 1;
              local_248 = (ulonglong)uVar12;
              if (0 < (int)uVar12) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0);
              }
              local_2a8 = (longlong *)CONCAT62(local_2a8._2_6_,0x3f);
              FGenericPlatformString::Convert<char,wchar_t>(local_250,uVar12,pcVar6,uVar12);
            }
            local_138 = 0;
            local_130 = local_1b8;
            local_128 = 9;
            local_2a8 = (longlong *)CONCAT71(local_2a8._1_7_,0x3f);
            FGenericPlatformString::Convert<wchar_t,char>(local_1b8,10,L"GuideTile");
            puVar9 = local_130;
            local_200 = FUN_141582660();
            uVar2 = *(undefined8 *)(uVar7 + 0x78);
            plVar15 = *(longlong **)(uVar7 + 0x80);
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
            }
            local_298 = &local_240;
            local_2a8 = &local_250;
            local_2a0 = 6;
            local_240 = (longlong *)0x0;
            local_238 = 0;
            lVar13 = FUN_14202a0e0(uVar2,local_200,local_1f8,puVar9);
            if (lVar13 == 0) {
LAB_141562619:
              lVar13 = 0;
            }
            else {
              lVar18 = FUN_141582660();
              if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) goto LAB_141562619;
            }
            plVar14 = local_240;
            for (iVar17 = (int)local_238; iVar17 != 0; iVar17 = iVar17 + -1) {
              if (*plVar14 != 0) {
                FMemory::Free();
              }
              plVar14 = plVar14 + 2;
            }
            if (local_240 != (longlong *)0x0) {
              FMemory::Free(local_240);
            }
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar14 = plVar15 + 1;
              lVar18 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)lVar18 == 1) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                iVar17 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar17 == 1) {
                  (**(code **)(*plVar15 + 8))(plVar15,1);
                }
              }
            }
            if (local_138 != 0) {
              FMemory::Free();
            }
            if (local_250 != 0) {
              FMemory::Free();
            }
            if (local_98 != 0) {
              FMemory::Free();
            }
            if (lVar13 != 0) {
              FUN_14157b1a0(lVar13,*puVar19);
              if (local_288 == '\0') {
                dVar3 = (double)FUN_142eeca30(lVar13);
                fVar22 = (float)dVar3;
                dVar3 = (double)FUN_142eeea40(lVar13);
                local_288 = '\x01';
                fVar23 = (float)dVar3;
              }
              *(float *)(lVar13 + 0x1c8) = fVar23;
              *(float *)(lVar13 + 0x1cc) = fVar22;
              if ((*(int *)(lVar13 + 0x1c0) == iVar20) && (*(int *)(lVar13 + 0x1c4) == local_284)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                *(int *)(lVar13 + 0x1c4) = local_284;
                *(int *)(lVar13 + 0x1c0) = iVar20;
                FUN_14208ff10(lVar13);
              }
              plVar15 = (longlong *)(local_258 + *local_1f0);
              iVar17 = (int)plVar15[1];
              *(int *)(plVar15 + 1) = iVar17 + 1;
              if (*(int *)((longlong)plVar15 + 0xc) < iVar17 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar17);
              }
              *(longlong *)(*plVar15 + (longlong)iVar17 * 8) = lVar13;
            }
            if (local_1d0 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            iVar20 = iVar20 + 1;
            puVar19 = puVar19 + 1;
            puVar9 = local_280;
          } while (iVar20 < local_278);
        }
        if (puVar9 != (undefined1 *)0x0) {
          FMemory::Free(puVar9);
        }
        local_284 = local_284 + 1;
        local_260 = local_260 + 1;
        local_258 = local_258 + 0x10;
        param_2 = local_1d8;
      } while (local_260 < local_1e0);
    }
  }
  plVar15 = local_228;
  if (local_228 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_228 + 1;
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_228)(local_228);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*local_228 + 8))(local_228,1);
      }
    }
  }
  return;
}



// FUNCTION 141562890 FUN_141562890 body=63 status=ok
// SIG undefined FUN_141562890(void)

void FUN_141562890(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,1,0);
  }
  FUN_14157af60(param_1,param_3);
  return;
}



// FUNCTION 1415628d0 FUN_1415628d0 body=2235 status=ok
// SIG undefined FUN_1415628d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415628d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong *puVar13;
  int iVar14;
  undefined2 *puVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  bool bVar22;
  double dVar23;
  float fVar24;
  undefined1 auStack_408 [32];
  longlong *local_3e8;
  undefined1 local_3e0;
  longlong **local_3d8;
  int local_3c8;
  int local_3c4;
  longlong local_3c0;
  int local_3b8;
  ulonglong local_3b0;
  longlong *local_3a8;
  ulonglong local_3a0;
  undefined2 *local_398;
  undefined8 local_390;
  longlong local_388;
  ulonglong local_380;
  undefined2 *local_378;
  int local_370;
  int local_36c;
  longlong local_368;
  ulonglong local_360;
  ulonglong local_358;
  longlong *local_350;
  longlong *local_348;
  undefined8 local_340;
  longlong *local_338;
  undefined8 local_330;
  undefined4 local_328;
  int local_324;
  undefined4 local_320;
  int local_31c;
  ulonglong local_318;
  longlong *plStack_310;
  undefined8 local_308;
  undefined8 local_300;
  longlong local_2f8;
  undefined2 *local_2f0;
  int local_2e8;
  undefined1 local_2d8 [128];
  longlong local_258;
  undefined1 *local_250;
  undefined4 local_248;
  undefined1 local_238 [128];
  longlong local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined1 local_198 [128];
  longlong local_118;
  char *local_110;
  undefined1 local_f8 [128];
  longlong local_78;
  char *local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  uVar21 = 0;
  local_3c4 = 0;
  local_3c0 = param_1;
  local_2f8 = param_2;
  FWeakObjectPtr::operator=(param_1 + 0x198,param_3);
  if (param_2 == 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar14 = *piVar1;
    if (iVar14 == 0) {
      *piVar1 = 0;
      iVar14 = 0;
    }
    UNLOCK();
    if (0 < iVar14) {
      local_3a8 = *(longlong **)(param_1 + 0x30);
      bVar6 = true;
      bVar5 = false;
      local_3b0 = 0;
      if (local_3a8 != (longlong *)0x0) {
        LOCK();
        uVar16 = *(uint *)(local_3a8 + 1);
        bVar22 = uVar16 == 0;
        if (bVar22) {
          *(uint *)(local_3a8 + 1) = 0;
          uVar10 = uVar21;
        }
        else {
          uVar10 = (ulonglong)uVar16;
        }
        UNLOCK();
        while (!bVar22) {
          iVar14 = (int)uVar10;
          LOCK();
          bVar22 = iVar14 == (int)local_3a8[1];
          if (bVar22) {
            *(int *)(local_3a8 + 1) = iVar14 + 1;
          }
          UNLOCK();
          if (bVar22) {
            local_3b0 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_3b0;
            local_358 = local_3b0;
            goto LAB_1415629bc;
          }
          uVar10 = 0;
          LOCK();
          uVar16 = *(uint *)(local_3a8 + 1);
          bVar22 = uVar16 == 0;
          if (bVar22) {
            *(uint *)(local_3a8 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar16;
          }
          UNLOCK();
        }
        local_3a8 = (longlong *)0x0;
      }
      puVar13 = &local_3b0;
      local_358 = 0;
      goto LAB_1415629bc;
    }
  }
  puVar13 = &local_318;
  local_318 = 0;
  plStack_310 = (longlong *)0x0;
  bVar6 = false;
  bVar5 = true;
  local_358 = uVar21;
LAB_1415629bc:
  plVar2 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  plVar3 = plStack_310;
  local_350 = plVar2;
  *puVar13 = 0;
  if ((bVar5) && (plStack_310 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_310 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_310)(plStack_310);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plStack_310 + 8))(plStack_310,1);
      }
    }
  }
  plVar2 = local_3a8;
  if ((bVar6) && (local_3a8 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_3a8 + 1;
    lVar12 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_3a8)(local_3a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_3a8 + 8))(local_3a8,1);
      }
    }
  }
  if (local_358 != 0) {
    iVar14 = *(int *)(param_2 + 0x90);
    plVar2 = (longlong *)(param_1 + 0x188);
    iVar20 = 0xc;
    if (iVar14 < 0xd) {
      iVar20 = iVar14;
    }
    fVar24 = 0.0;
    local_3c8 = 1;
    local_3c4 = iVar20;
    local_3b8 = iVar14;
    if (*(int *)(param_1 + 0x194) < iVar20) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2,iVar20);
    }
    lVar12 = param_1;
    if (0 < iVar20) {
      local_3a0 = local_358;
      do {
        uVar10 = local_3a0;
        FString::PrintfImpl(&local_398,L"gridTile_%d");
        iVar20 = (int)uVar21;
        if (((int)local_390 == 0) && (iVar20 != 0)) {
          iVar14 = 1;
        }
        else {
          iVar14 = 0;
        }
        iVar14 = iVar14 + (int)local_390;
        local_378 = local_398;
        iVar7 = local_390._4_4_;
        local_398 = (undefined2 *)0x0;
        local_370 = (int)local_390;
        local_36c = local_390._4_4_;
        local_390 = 0;
        if ((iVar7 < iVar14 + iVar20) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_378), local_398 != (undefined2 *)0x0)
           ) {
          FMemory::Free();
        }
        puVar15 = &DAT_143f3eda8;
        if (local_370 != 0) {
          puVar15 = local_378;
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,puVar15);
        pcVar9 = local_110;
        local_388 = 0;
        local_380 = 0;
        if ((local_110 != (char *)0x0) && (*local_110 != '\0')) {
          lVar17 = -1;
          do {
            lVar17 = lVar17 + 1;
          } while (local_110[lVar17] != '\0');
          uVar16 = (int)lVar17 + 1;
          local_380 = (ulonglong)uVar16;
          if (0 < (int)uVar16) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,0);
          }
          local_3e8 = (longlong *)CONCAT62(local_3e8._2_6_,0x3f);
          FGenericPlatformString::Convert<char,wchar_t>(local_388,uVar16,pcVar9,uVar16);
        }
        local_258 = 0;
        local_250 = local_2d8;
        local_248 = 0xe;
        local_3e8 = (longlong *)CONCAT71(local_3e8._1_7_,0x3f);
        FGenericPlatformString::Convert<wchar_t,char>(local_2d8,0xf,L"PuzzleGridTile");
        puVar8 = local_250;
        local_308 = FUN_1415824f0();
        plVar3 = *(longlong **)(uVar10 + 0x80);
        uVar4 = *(undefined8 *)(uVar10 + 0x78);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_3d8 = &local_348;
        local_3e8 = &local_388;
        local_3e0 = 6;
        local_348 = (longlong *)0x0;
        local_340 = 0;
        plVar11 = (longlong *)FUN_14202a0e0(uVar4,local_308,lVar12,puVar8);
        if (plVar11 == (longlong *)0x0) {
LAB_141562c85:
          plVar11 = (longlong *)0x0;
        }
        else {
          lVar12 = FUN_1415824f0();
          if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
              lVar12 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_141562c85;
        }
        plVar18 = local_348;
        for (iVar14 = (int)local_340; iVar14 != 0; iVar14 = iVar14 + -1) {
          if (*plVar18 != 0) {
            FMemory::Free();
          }
          plVar18 = plVar18 + 2;
        }
        if (local_348 != (longlong *)0x0) {
          FMemory::Free(local_348);
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar18 = plVar3 + 1;
          lVar12 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if (local_258 != 0) {
          FMemory::Free();
        }
        if (local_388 != 0) {
          FMemory::Free();
        }
        if (local_118 != 0) {
          FMemory::Free();
        }
        if (plVar11 != (longlong *)0x0) {
          dVar23 = (double)FUN_142eeca30(plVar11);
          fVar24 = (float)dVar23;
          dVar23 = (double)FUN_142eeea40(plVar11);
          local_328 = 0;
          *(float *)((longlong)plVar11 + 0x1cc) = fVar24;
          *(float *)(plVar11 + 0x39) = (float)dVar23;
          local_324 = iVar20;
          (**(code **)(*plVar11 + 0x2a8))(plVar11,&local_328);
          iVar14 = local_3c8;
          FUN_142f0bc30(local_3c0,plVar11,local_3c8);
          local_3c8 = iVar14 + 1;
          iVar14 = *(int *)(param_1 + 400);
          *(int *)(param_1 + 400) = iVar14 + 1;
          if (*(int *)(param_1 + 0x194) < iVar14 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar14);
          }
          *(longlong **)(*plVar2 + (longlong)iVar14 * 8) = plVar11;
        }
        if (local_378 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        uVar21 = (ulonglong)(iVar20 + 1U);
        lVar12 = local_3c0;
        iVar14 = local_3b8;
      } while ((int)(iVar20 + 1U) < local_3c4);
    }
    plVar2 = (longlong *)(lVar12 + 0x178);
    if (*(int *)(lVar12 + 0x184) < iVar14) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2,iVar14);
    }
    iVar20 = 0;
    lVar17 = lVar12;
    if (0 < iVar14) {
      local_3a0 = local_358;
      do {
        uVar21 = local_3a0;
        FString::PrintfImpl(&local_2f0,L"tokenTile_%d",iVar20);
        puVar15 = &DAT_143f3eda8;
        if (local_2e8 != 0) {
          puVar15 = local_2f0;
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_f8,puVar15);
        pcVar9 = local_70;
        local_368 = 0;
        local_360 = 0;
        if ((local_70 != (char *)0x0) && (*local_70 != '\0')) {
          lVar19 = -1;
          do {
            lVar19 = lVar19 + 1;
          } while (local_70[lVar19] != '\0');
          uVar16 = (int)lVar19 + 1;
          local_360 = (ulonglong)uVar16;
          if (0 < (int)uVar16) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
          }
          local_3e8 = (longlong *)CONCAT62(local_3e8._2_6_,0x3f);
          FGenericPlatformString::Convert<char,wchar_t>(local_368,uVar16,pcVar9,uVar16);
        }
        local_1b8 = 0;
        local_1b0 = local_238;
        local_1a8 = 10;
        local_3e8 = (longlong *)CONCAT71(local_3e8._1_7_,0x3f);
        FGenericPlatformString::Convert<wchar_t,char>(local_238,0xb,L"PuzzleTile");
        puVar8 = local_1b0;
        local_300 = FUN_141582720();
        plVar3 = *(longlong **)(uVar21 + 0x80);
        uVar4 = *(undefined8 *)(uVar21 + 0x78);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_3d8 = &local_338;
        local_3e8 = &local_368;
        local_3e0 = 6;
        local_338 = (longlong *)0x0;
        local_330 = 0;
        plVar11 = (longlong *)FUN_14202a0e0(uVar4,local_300,lVar17,puVar8);
        if (plVar11 == (longlong *)0x0) {
LAB_141562f6d:
          plVar11 = (longlong *)0x0;
        }
        else {
          lVar17 = FUN_141582720();
          if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar17 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8) !=
              lVar17 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_141562f6d;
        }
        plVar18 = local_338;
        for (iVar14 = (int)local_330; iVar14 != 0; iVar14 = iVar14 + -1) {
          if (*plVar18 != 0) {
            FMemory::Free();
          }
          plVar18 = plVar18 + 2;
        }
        if (local_338 != (longlong *)0x0) {
          FMemory::Free(local_338);
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar18 = plVar3 + 1;
          lVar17 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if (local_1b8 != 0) {
          FMemory::Free();
        }
        if (local_368 != 0) {
          FMemory::Free();
        }
        if (local_78 != 0) {
          FMemory::Free();
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x278))(plVar11,0);
          dVar23 = (double)FUN_142eeca30(plVar11);
          fVar24 = (float)dVar23;
          dVar23 = (double)FUN_142eeea40(plVar11);
          local_320 = 0;
          *(float *)((longlong)plVar11 + 0x1cc) = fVar24;
          *(float *)(plVar11 + 0x39) = (float)dVar23;
          local_31c = iVar20;
          (**(code **)(*plVar11 + 0x2a8))(plVar11,&local_320);
          iVar14 = local_3c8;
          FUN_142f0bc30(local_3c0,plVar11,local_3c8);
          local_3c8 = iVar14 + 1;
          iVar14 = *(int *)(lVar12 + 0x180);
          *(int *)(lVar12 + 0x180) = iVar14 + 1;
          if (*(int *)(lVar12 + 0x184) < iVar14 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar14);
          }
          *(longlong **)(*plVar2 + (longlong)iVar14 * 8) = plVar11;
        }
        if (local_2f0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        iVar20 = iVar20 + 1;
        lVar17 = local_3c0;
      } while (iVar20 < local_3b8);
    }
    if (*(longlong *)(lVar17 + 0x170) != 0) {
      iVar14 = *(int *)(local_2f8 + 0xa0);
      if (*(int *)(local_2f8 + 0xa0) <= local_3c4) {
        iVar14 = local_3c4;
      }
      FUN_142f0da80(*(longlong *)(lVar17 + 0x170),(double)((float)iVar14 * fVar24));
    }
  }
  plVar2 = local_350;
  if (local_350 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_350 + 1;
    lVar12 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_350)(local_350);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_350 + 8))(local_350,1);
      }
    }
  }
  return;
}



// FUNCTION 141563190 FUN_141563190 body=438 status=ok
// SIG undefined FUN_141563190(void)

void FUN_141563190(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FString::ParseIntoArrayLines(param_3,&local_48,1);
  FString::ParseIntoArrayLines(param_3 + 0x10,&local_58,1);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_141558fe0(&local_48,&local_58,&local_28,&local_38);
  local_14 = *(undefined4 *)(param_3 + 0x28);
  local_18 = (float)*(int *)(param_3 + 0x24);
  local_10 = (float)*(int *)(param_3 + 0x2c);
  local_c = (float)*(int *)(param_3 + 0x30);
  FUN_141560090(param_1,param_2,&local_28,&local_38,*(undefined4 *)(param_3 + 0x20),&local_18);
  plVar1 = local_38;
  plVar2 = local_38;
  for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  plVar1 = local_28;
  plVar2 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  plVar2 = local_58;
  for (iVar3 = (int)local_50; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  plVar2 = local_48;
  for (iVar3 = (int)local_40; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}



// FUNCTION 141563350 FUN_141563350 body=804 status=ok
// SIG undefined FUN_141563350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141563350(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  int iVar3;
  void *_Src;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  float *local_b0;
  uint local_a8;
  longlong *local_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar12 = *param_3;
  if (lVar12 != 0) {
    plVar9 = (longlong *)(param_1 + 0x50);
    uStack_80 = (longlong *)param_3[1];
    if (uStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_80 + 1) = (int)uStack_80[1] + 1;
      UNLOCK();
    }
    local_88 = lVar12;
    if (&local_88 != plVar9) {
      local_88._0_4_ = (undefined4)lVar12;
      local_88._4_4_ = (undefined4)((ulonglong)lVar12 >> 0x20);
      uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
      lVar4 = *plVar9;
      plVar10 = *(longlong **)(param_1 + 0x58);
      uStack_50 = (undefined4)uStack_80;
      uStack_4c = uStack_80._4_4_;
      *(undefined4 *)plVar9 = (undefined4)local_88;
      *(undefined4 *)(param_1 + 0x54) = local_88._4_4_;
      *(undefined4 *)(param_1 + 0x58) = (undefined4)uStack_80;
      *(undefined4 *)(param_1 + 0x5c) = uStack_80._4_4_;
      local_88 = lVar4;
      uStack_80 = plVar10;
      local_58 = lVar12;
    }
    plVar10 = uStack_80;
    local_68 = param_2;
    local_60 = param_1;
    if (uStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_80 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*uStack_80)(uStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*uStack_80 + 8))(uStack_80,1);
        }
      }
    }
    lVar12 = *plVar9;
    if (lVar12 != 0) {
      iVar13 = *(int *)(lVar12 + 0xb0);
      uVar7 = 0;
      local_a0 = (longlong *)0x0;
      local_98 = 0;
      uVar15 = uVar7;
      local_88 = lVar12;
      if (0 < iVar13) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_a0,iVar13);
        iVar13 = *(int *)(lVar12 + 0xb0);
        uVar15 = local_98 & 0xffffffff;
      }
      local_a8 = 0;
      plVar9 = local_a0;
      if (0 < iVar13) {
        local_58 = 0;
        do {
          lVar4 = local_58;
          iVar13 = (int)uVar15;
          local_90 = iVar13 + 1;
          local_98 = CONCAT44(local_98._4_4_,local_90);
          plVar10 = plVar9;
          uVar14 = local_90;
          uVar6 = (uint)uVar7;
          if (local_98._4_4_ < (int)local_90) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_a0,uVar15);
            plVar10 = local_a0;
            uVar14 = (uint)local_98;
            uVar6 = local_a8;
          }
          plVar10[(longlong)iVar13 * 2] = 0;
          plVar10[(longlong)iVar13 * 2 + 1] = 0;
          puVar8 = *(undefined8 **)(*(longlong *)(lVar12 + 0xa8) + 8 + lVar4);
          puVar11 = puVar8 + (longlong)*(int *)(*(longlong *)(lVar12 + 0xa8) + 0x10 + lVar4) * 2;
          plVar9 = plVar10;
          local_90 = uVar14;
          for (; puVar8 != puVar11; puVar8 = puVar8 + 2) {
            _Src = (void *)*puVar8;
            iVar13 = *(int *)(puVar8 + 1) + -1;
            if (*(int *)(puVar8 + 1) == 0) {
              iVar13 = 0;
            }
            if (iVar13 != 0) {
              iVar3 = (int)plVar10[(longlong)(int)uVar14 * 2 + -1];
              iVar5 = (uint)(iVar3 == 0) + iVar3 + iVar13;
              *(int *)(plVar10 + (longlong)(int)uVar14 * 2 + -1) = iVar5;
              if (*(int *)((longlong)plVar10 + (longlong)(int)uVar14 * 0x10 + -4) < iVar5) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                          (plVar10 + (longlong)(int)uVar14 * 2 + -2,iVar3);
              }
              _Dst = (void *)(plVar10[(longlong)(int)uVar14 * 2 + -2] +
                             ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar13 * 2);
              *(undefined2 *)((longlong)iVar13 * 2 + (longlong)_Dst) = 0;
            }
            plVar9 = local_a0;
            lVar12 = local_88;
            uVar6 = local_a8;
          }
          uVar15 = (ulonglong)local_90;
          local_a8 = uVar6 + 1;
          uVar7 = (ulonglong)local_a8;
          local_58 = local_58 + 0x18;
        } while ((int)local_a8 < *(int *)(lVar12 + 0xb0));
      }
      local_b0 = &local_78;
      local_74 = (float)*(double *)(lVar12 + 0x28);
      local_b8 = *(undefined4 *)(lVar12 + 0x20);
      local_78 = (float)*(int *)(lVar12 + 0x30);
      local_6c = (float)*(double *)(lVar12 + 0x100);
      local_70 = (float)*(double *)(lVar12 + 0xe8);
      FUN_141560090(local_60,local_68,lVar12 + 0xd0,&local_a0);
      uVar14 = (uint)uVar15;
      plVar10 = plVar9;
      while (uVar14 != 0) {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 2;
        uVar14 = (int)uVar15 - 1;
        uVar15 = (ulonglong)uVar14;
      }
      if (plVar9 != (longlong *)0x0) {
        FMemory::Free(plVar9);
      }
    }
  }
  return;
}



// FUNCTION 141563680 FUN_141563680 body=455 status=ok
// SIG undefined FUN_141563680(void)

void FUN_141563680(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  
  if (param_3 != 0) {
    *(longlong *)(param_1 + 0x38) = param_3;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    FString::ParseIntoArrayLines(param_3 + 0x30,&local_48,1);
    FString::ParseIntoArrayLines(param_3 + 0x40,&local_58,1);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_141558fe0(&local_48,&local_58,&local_28,&local_38);
    local_14 = *(undefined4 *)(param_3 + 0x58);
    local_18 = (float)*(int *)(param_3 + 0x54);
    local_10 = (float)*(int *)(param_3 + 0x5c);
    local_c = (float)*(int *)(param_3 + 0x60);
    FUN_141560090(param_1,param_2,&local_28,&local_38,*(undefined4 *)(param_3 + 0x50),&local_18);
    plVar1 = local_38;
    plVar2 = local_38;
    for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
    plVar1 = local_28;
    plVar2 = local_28;
    for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
    plVar2 = local_58;
    for (iVar3 = (int)local_50; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    plVar2 = local_48;
    for (iVar3 = (int)local_40; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}



// FUNCTION 141563850 FUN_141563850 body=597 status=ok
// SIG undefined FUN_141563850(void)

void FUN_141563850(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  void *_Src;
  ulonglong uVar8;
  int iVar9;
  int local_res8;
  undefined4 local_resc;
  void *local_38;
  undefined8 local_30;
  
  pvVar4 = (void *)0x0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  uVar3 = *(uint *)(param_1 + 0x98);
  local_38 = (void *)0x0;
  local_30 = 0;
  _Src = pvVar4;
  iVar7 = 0;
  if (uVar3 != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_38,uVar3);
    _Src = local_38;
    iVar7 = (int)local_30;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      iVar9 = (int)local_30;
      do {
        iVar7 = iVar9 + 1;
        local_30 = CONCAT44(local_30._4_4_,iVar7);
        if (local_30._4_4_ < iVar7) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_38,iVar9);
          _Src = local_38;
          iVar7 = (int)local_30;
        }
        puVar2 = (undefined4 *)((longlong)_Src + (longlong)iVar9 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
        }
        uVar8 = uVar8 - 1;
        iVar9 = iVar7;
      } while (uVar8 != 0);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x94);
  uVar8 = (ulonglong)uVar3;
  plVar1 = (longlong *)(param_1 + 0xb8);
  plVar5 = (longlong *)*plVar1;
  for (iVar9 = *(int *)(param_1 + 0xc0); iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(uint *)(param_1 + 0xc4) != uVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1,uVar3);
  }
  if (0 < (int)uVar3) {
    do {
      iVar9 = *(int *)(param_1 + 0xc0);
      *(int *)(param_1 + 0xc0) = iVar9 + 1;
      if (*(int *)(param_1 + 0xc4) < iVar9 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar9);
      }
      puVar6 = (undefined8 *)((longlong)iVar9 * 0x10 + *plVar1);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        *(int *)(puVar6 + 1) = iVar7;
        if (iVar7 == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(puVar6,iVar7,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,(longlong)iVar7 << 2);
        }
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x98);
  uVar8 = (ulonglong)uVar3;
  plVar1 = (longlong *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(uint *)(param_1 + 0xd4) != uVar3) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar1,uVar3);
  }
  if (0 < (int)uVar3) {
    do {
      iVar7 = *(int *)(param_1 + 0xd0);
      *(int *)(param_1 + 0xd0) = iVar7 + 1;
      if (*(int *)(param_1 + 0xd4) < iVar7 + 1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
      }
      if ((undefined1 *)((longlong)iVar7 + *plVar1) != (undefined1 *)0x0) {
        *(undefined1 *)((longlong)iVar7 + *plVar1) = 0;
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x98);
  uVar8 = (ulonglong)uVar3;
  plVar1 = (longlong *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(uint *)(param_1 + 0xe4) != uVar3) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar1,uVar3);
  }
  if (0 < (int)uVar3) {
    do {
      iVar7 = *(int *)(param_1 + 0xe0);
      *(int *)(param_1 + 0xe0) = iVar7 + 1;
      if (*(int *)(param_1 + 0xe4) < iVar7 + 1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
      }
      if ((undefined1 *)((longlong)iVar7 + *plVar1) != (undefined1 *)0x0) {
        *(undefined1 *)((longlong)iVar7 + *plVar1) = 0;
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_14155c2a0(param_1,0);
  if (0 < *(int *)(param_1 + 0xc0)) {
    local_resc = 0;
    do {
      local_res8 = (int)pvVar4;
      FUN_141558bb0(param_1,&local_res8);
      uVar3 = (int)pvVar4 + 1;
      pvVar4 = (void *)(ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)(param_1 + 0xc0));
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 141563ab0 FUN_141563ab0 body=707 status=ok
// SIG undefined FUN_141563ab0(void)

void FUN_141563ab0(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  void *_Src;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x1b0);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x278))(plVar8,1);
    (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x2a8))(*(longlong **)(param_1 + 0x1b0),param_2)
    ;
    *(undefined1 *)(*(longlong *)(param_1 + 0x1b0) + 0x1ba) = 1;
    FUN_14155a500(*(undefined8 *)(param_1 + 0x1b0),1);
    FUN_140747230(*(longlong *)(param_1 + 0x1b0) + 0x170,param_1,&LAB_14156cec0);
    FUN_140747230(*(longlong *)(param_1 + 0x1b0) + 0x180,param_1,FUN_141575d00);
    lVar5 = FUN_14155d970(param_1,param_2);
    if ((lVar5 != 0) && (iVar7 = 0, 0 < *(int *)(param_1 + 0x1d0))) {
      lVar10 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + lVar10);
        iVar4 = (int)lVar2;
        if (iVar4 == *param_2) {
          iVar6 = (int)((ulonglong)lVar2 >> 0x20);
          if (iVar6 == param_2[1]) {
            FUN_14157aa00(lVar5,0,iVar7);
            FUN_14157aa00(*(undefined8 *)(param_1 + 0x1b0),1,iVar7);
          }
          else if ((iVar4 == *param_2) && (param_2[1] < iVar6)) {
            if (-1 < iVar4) {
              if ((iVar4 < *(int *)(param_1 + 400)) && (-1 < lVar2)) {
                if ((*(int *)(*(longlong *)(param_1 + 0x188) + 8 + (longlong)iVar4 * 0x10) <= iVar6)
                   || (lVar9 = *(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(param_1 + 0x188) + (longlong)iVar4 * 0x10) +
                                (longlong)iVar6 * 8), lVar9 == 0)) goto LAB_141563c18;
LAB_141563c56:
                if (*(char *)(lVar9 + 0x1d0) == '\0') {
                  iVar6 = iVar6 + -1;
                  if (((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 400))) && (-1 < iVar6)) {
                    if ((iVar6 < *(int *)(*(longlong *)(param_1 + 0x188) + 8 +
                                         (longlong)iVar4 * 0x10)) &&
                       (lVar2 = *(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(param_1 + 0x188) + (longlong)iVar4 * 0x10) +
                                 (longlong)iVar6 * 8), lVar2 != 0)) {
                      FUN_14157aa00(lVar2,CONCAT71((int7)(int3)((uint)iVar6 >> 8),1),iVar7);
                      FUN_14157aa00(lVar9,0,iVar7);
                    }
                  }
                }
                else {
                  piVar1 = (int *)(*(longlong *)(param_1 + 0x1c8) + 4 + lVar10);
                  *piVar1 = *piVar1 + 1;
                }
                *(undefined1 *)(lVar10 + 8 + *(longlong *)(param_1 + 0x1c8)) = 0;
              }
              else {
LAB_141563c18:
                if (((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x1a0))) && (-1 < lVar2)) {
                  if ((iVar6 < *(int *)(*(longlong *)(param_1 + 0x198) + 8 + (longlong)iVar4 * 0x10)
                      ) && (lVar9 = *(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 0x10) +
                                     (longlong)iVar6 * 8), lVar9 != 0)) goto LAB_141563c56;
                }
              }
            }
          }
        }
        iVar7 = iVar7 + 1;
        lVar10 = lVar10 + 0xc;
      } while (iVar7 < *(int *)(param_1 + 0x1d0));
    }
    iVar7 = *param_2;
    if ((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 400))) {
      iVar4 = param_2[1];
      plVar8 = (longlong *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x188));
      uVar3 = *(undefined8 *)(param_1 + 0x1b0);
      iVar7 = (int)plVar8[1];
      *(int *)(plVar8 + 1) = iVar7 + 1;
      if (*(int *)((longlong)plVar8 + 0xc) < iVar7 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar7);
      }
      lVar5 = (longlong)iVar4 * 8;
      _Src = (void *)(*plVar8 + lVar5);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar7 - iVar4) << 3);
      *(undefined8 *)(lVar5 + *plVar8) = uVar3;
    }
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 141563d80 FUN_141563d80 body=694 status=ok
// SIG undefined FUN_141563d80(void)

void FUN_141563d80(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 local_res8;
  longlong local_res10;
  
  if (*(char *)(param_1 + 0x38) == '\x06') {
    lVar9 = param_1 + 0x5c;
    local_res10 = lVar9;
    cVar2 = FWeakObjectPtr::IsValid(lVar9);
    if ((cVar2 != '\0') && (cVar2 = FWeakObjectPtr::IsValid(param_1 + 100), cVar2 != '\0')) {
      lVar3 = FWeakObjectPtr::Get(param_1 + 100);
      uVar6 = 0;
      plVar7 = *(longlong **)(lVar3 + 0x178);
      uVar8 = (longlong)*(int *)(lVar3 + 0x180) & 0x1fffffffffffffff;
      if (plVar7 + *(int *)(lVar3 + 0x180) < plVar7) {
        uVar8 = uVar6;
      }
      if (uVar8 != 0) {
        do {
          lVar9 = *plVar7;
          if (lVar9 != 0) {
            iVar1 = *(int *)(param_1 + 0x100);
            local_res8._4_4_ = (int)((ulonglong)*(undefined8 *)(lVar9 + 0x1c0) >> 0x20);
            local_res8 = CONCAT44(local_res8._4_4_ + 1,(int)*(undefined8 *)(lVar9 + 0x1c0));
            *(int *)(param_1 + 0x100) = iVar1 + 1;
            if (*(int *)(param_1 + 0x104) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0xf8,iVar1);
            }
            *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = lVar9;
            FUN_140747230(lVar9 + 0x1a0,param_1,FUN_141575dd0);
            FUN_141564320(lVar9,lVar9 + 0x1c0,&local_res8,param_1 + 0x4c,
                          *(undefined4 *)(param_1 + 0x48),0);
          }
          plVar7 = plVar7 + 1;
          uVar6 = uVar6 + 1;
          lVar9 = local_res10;
        } while (uVar6 != uVar8);
      }
      lVar3 = FWeakObjectPtr::Get(lVar9);
      if ((*(longlong *)(lVar3 + 0x180) != 0) &&
         (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x180) + 0x1b0), lVar3 != 0)) {
        lVar4 = FWeakObjectPtr::Get(lVar9);
        lVar9 = *(longlong *)(lVar4 + 0x180);
        if ((lVar9 != 0) &&
           ((*(longlong *)(lVar4 + 400) != 0 &&
            (plVar7 = *(longlong **)(lVar9 + 0x1b0), plVar7 != (longlong *)0x0)))) {
          (**(code **)(*plVar7 + 0x278))(plVar7,1);
          FUN_142f05ef0(lVar9,*(undefined8 *)(lVar9 + 0x1b0),0);
          *(undefined8 *)(lVar9 + 0x1b0) = 0;
          lVar9 = *(longlong *)(lVar4 + 400);
          FUN_142ee17b0(lVar9,plVar7);
          puVar5 = (undefined8 *)(lVar9 + 0x178);
          iVar1 = *(int *)(lVar9 + 0x180);
          *(int *)(lVar9 + 0x180) = iVar1 + 1;
          if (*(int *)(lVar9 + 0x184) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar5,iVar1);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)*puVar5 + 8),(void *)*puVar5,(longlong)iVar1 << 3);
          local_res8 = 0;
          *(longlong **)*puVar5 = plVar7;
          (**(code **)(*plVar7 + 0x2a8))(plVar7,&local_res8);
        }
        if (*(char *)(lVar3 + 0x1bb) == '\0') {
          *(undefined1 *)(lVar3 + 0x1bb) = 1;
          FUN_141576560(lVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 141564040 FUN_141564040 body=122 status=ok
// SIG undefined FUN_141564040(void)

longlong FUN_141564040(longlong param_1)

{
  int iVar1;
  uint7 uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)FUN_14155d900();
  fVar4 = (float)-((int)ROUND(-0.5 - (fVar3 + fVar3)) >> 1);
  iVar1 = (int)ROUND((*(float *)(param_1 + 0xb0) + *(float *)(param_1 + 0xb0)) - 0.5);
  fVar3 = (float)(iVar1 >> 1);
  uVar2 = (uint7)(uint3)(iVar1 >> 9);
  if ((1e-08 < ABS(fVar4 - fVar3)) && (fVar4 <= fVar3)) {
    return (ulonglong)uVar2 << 8;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 1415640c0 FUN_1415640c0 body=347 status=ok
// SIG undefined FUN_1415640c0(void)

undefined8 FUN_1415640c0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_141581f90();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_1422312c0(param_2);
      if (lVar2 != 0) {
        lVar3 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          plVar4 = (longlong *)UListView::OnItemSelectionChanged(lVar2);
          plVar7 = (longlong *)*plVar4;
          plVar4 = plVar7 + (int)plVar4[1];
          for (; plVar7 != plVar4; plVar7 = plVar7 + 1) {
            lVar2 = *plVar7;
            if (lVar2 != 0) {
              uVar5 = (**(code **)(*param_2 + 0x148))(param_2);
              plVar6 = (longlong *)UPlayer::GetPlayerController(lVar2,uVar5);
              if (plVar6 != (longlong *)0x0) {
                lVar2 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
                if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
                    lVar2 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  lVar2 = (**(code **)(*plVar6 + 0xfa8))(plVar6);
                  if (lVar2 != 0) {
                    lVar2 = FUN_140cde000(lVar2);
                    if (lVar2 != 0) {
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 141564220 FUN_141564220 body=122 status=ok
// SIG undefined FUN_141564220(void)

longlong FUN_141564220(longlong param_1)

{
  int iVar1;
  uint7 uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)FUN_14155d900();
  fVar4 = (float)-((int)ROUND(-0.5 - (fVar3 + fVar3)) >> 1);
  iVar1 = (int)ROUND((*(float *)(param_1 + 0xac) + *(float *)(param_1 + 0xac)) - 0.5);
  fVar3 = (float)(iVar1 >> 1);
  uVar2 = (uint7)(uint3)(iVar1 >> 9);
  if ((1e-08 < ABS(fVar4 - fVar3)) && (fVar4 <= fVar3)) {
    return (ulonglong)uVar2 << 8;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 1415642a0 FUN_1415642a0 body=34 status=ok
// SIG undefined FUN_1415642a0(void)

ulonglong FUN_1415642a0(longlong param_1,int param_2)

{
  ulonglong in_RAX;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0xd0))) &&
     (in_RAX = *(ulonglong *)(param_1 + 200), *(char *)((longlong)param_2 + in_RAX) != '\0')) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415642d0 FUN_1415642d0 body=73 status=ok
// SIG undefined FUN_1415642d0(void)

bool FUN_1415642d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((((*(longlong *)(param_1 + 0xb0) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x80), lVar1 != 0)) &&
      (0 < *(int *)(lVar1 + 0x38))) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) {
    iVar2 = FUN_14155d2b0(param_1,param_2,0);
    return *(int *)(lVar1 + 0x78) <= iVar2;
  }
  return false;
}



// FUNCTION 141564320 FUN_141564320 body=1199 status=ok
// SIG undefined FUN_141564320(void)

void FUN_141564320(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4,
                  float param_5,float param_6)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [72];
  
  if ((1e-08 < ABS(param_5)) && (1e-08 < param_5)) {
    (**(code **)(*param_1 + 0x2a8))();
    fVar3 = *(float *)((longlong)param_1 + 0x1cc);
    uVar7 = *(int *)((longlong)param_3 + 4) - *(int *)((longlong)param_2 + 4);
    uVar10 = (int)uVar7 >> 0x1f;
    *(float *)((longlong)param_1 + 0x224) = -((float)*(int *)((longlong)param_1 + 0x1c4) * fVar3);
    *(float *)(param_1 + 0x44) = (float)(int)param_1[0x38] * *(float *)(param_1 + 0x39);
    *(undefined1 *)((longlong)param_1 + 0x22a) = 1;
    FWeakObjectPtr::operator=(&local_d4,param_1);
    local_80 = *param_2;
    local_78 = *param_3;
    FWeakObjectPtr::operator=(&local_cc,param_1);
    plVar8 = (longlong *)FUN_141580d60(local_a0);
    *(double *)(*plVar8 + 8) = (double)(((float)(int)((uVar7 ^ uVar10) - uVar10) * fVar3) / param_5)
    ;
    lVar9 = FUN_141551a10(plVar8,local_70,(longlong)param_1 + 0x224);
    *(double *)(*(longlong *)(lVar9 + 0x18) + 8) = (double)param_6;
    lVar5 = *(longlong *)(lVar9 + 0x18);
    plVar8 = (longlong *)operator_new(0x28);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_144c7e5a0;
      plVar8[2] = (longlong)&PTR_FUN_144c7e4b0;
      plVar8[3] = (longlong)param_1;
      *(undefined4 *)(plVar8 + 4) = local_cc;
      *(undefined4 *)((longlong)plVar8 + 0x24) = local_c8;
    }
    local_c0 = plVar8 + 2;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(lVar5 + 0x38);
    local_b8 = plVar8;
    if (*(longlong **)(lVar5 + 0x40) == plVar6) {
      FUN_141550e20(lVar5 + 0x30,plVar6,&local_c0);
      plVar6 = local_b8;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b8 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_b8 + 8))();
          }
        }
      }
    }
    else {
      *plVar6 = (longlong)local_c0;
      plVar6[1] = (longlong)plVar8;
      *(longlong *)(lVar5 + 0x38) = *(longlong *)(lVar5 + 0x38) + 0x10;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    lVar5 = *(longlong *)(lVar9 + 8);
    plVar8 = (longlong *)operator_new(0x38);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_144c7e5c0;
      plVar8[2] = (longlong)&PTR_FUN_144c7e4c0;
      plVar8[3] = (longlong)param_1;
      *(undefined4 *)(plVar8 + 4) = local_d4;
      *(undefined4 *)((longlong)plVar8 + 0x24) = local_d0;
      plVar8[5] = local_80;
      plVar8[6] = local_78;
    }
    local_b0 = plVar8 + 2;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(lVar5 + 0x88);
    local_a8 = plVar8;
    if (*(longlong **)(lVar5 + 0x90) == plVar6) {
      FUN_141551020(lVar5 + 0x80,plVar6,&local_b0);
      plVar6 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a8 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_a8 + 8))();
          }
        }
      }
    }
    else {
      *plVar6 = (longlong)local_b0;
      plVar6[1] = (longlong)plVar8;
      *(longlong *)(lVar5 + 0x88) = *(longlong *)(lVar5 + 0x88) + 0x10;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    plVar8 = (longlong *)0x0;
    if (*(longlong *)(lVar9 + 0x10) != 0) {
      LOCK();
      piVar2 = (int *)(*(longlong *)(lVar9 + 0x10) + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar9 + 0x10);
    }
    lVar5 = *(longlong *)(lVar9 + 8);
    FUN_141552790(local_70);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_98 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)local_98 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_98 + 8))(local_98);
        }
      }
    }
    switch(*param_4) {
    case 0:
      FUN_14154dfe0(lVar5 + 0x38,AK::MemoryMgr::StartProfileThreadUsage);
      break;
    case 1:
      FUN_14154dfe0(lVar5 + 0x38,&LAB_141580f90);
      break;
    case 2:
      FUN_14154dfe0(lVar5 + 0x38,&LAB_1415808c0);
      break;
    case 3:
      FUN_14154dfe0(lVar5 + 0x38,&LAB_141580910);
      break;
    case 4:
      FUN_14154dfe0(lVar5 + 0x38,FUN_1415808e0);
      break;
    case 5:
      FUN_14154dfe0(lVar5 + 0x38,&LAB_141580940);
      break;
    case 6:
      FUN_14154dfe0(lVar5 + 0x38,FUN_141580f60);
      *(undefined1 *)(lVar5 + 0x19) = 1;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1415647f0 FUN_1415647f0 body=643 status=ok
// SIG undefined FUN_1415647f0(void)

undefined8 FUN_1415647f0(longlong param_1,int *param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int local_res18;
  int iStackX_1c;
  longlong *local_res20;
  
  iVar2 = *(int *)(param_3 + 8);
  lVar7 = (longlong)iVar2;
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x1d0) <= iVar2)) {
    local_res20 = (longlong *)&DAT_1464a0eb8;
  }
  else {
    local_res20 = (longlong *)(*(longlong *)(param_1 + 0x1c8) + lVar7 * 0xc);
  }
  local_res20 = (longlong *)*local_res20;
  iVar5 = (int)local_res20;
  if ((((iVar5 < 0) || (*(int *)(param_1 + 0x1c0) <= iVar5)) ||
      (iVar6 = (int)((ulonglong)local_res20 >> 0x20), (longlong)local_res20 < 0)) ||
     (*(int *)(param_1 + 0x1c4) <= iVar6)) {
    if (((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x1d0))) &&
       (((*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + lVar7 * 0xc) = 0,
         0 < *(int *)(param_1 + 400) &&
         ((0 < *(int *)(*(undefined8 **)(param_1 + 0x188) + 1) &&
          (lVar4 = *(longlong *)**(undefined8 **)(param_1 + 0x188), lVar4 != 0)))) ||
        ((0 < *(int *)(param_1 + 0x1a0) &&
         ((0 < *(int *)(*(undefined8 **)(param_1 + 0x198) + 1) &&
          (lVar4 = *(longlong *)**(undefined8 **)(param_1 + 0x198), lVar4 != 0)))))))) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x1c8) + lVar7 * 0xc + 8);
      *pbVar1 = *pbVar1 | *(byte *)(lVar4 + 0x22a);
    }
    if (((*(int *)(param_1 + 400) < 1) || (*(int *)(*(undefined8 **)(param_1 + 0x188) + 1) < 1)) ||
       (lVar7 = *(longlong *)**(undefined8 **)(param_1 + 0x188), lVar7 == 0)) {
      if (*(int *)(param_1 + 0x1a0) < 1) {
        return 0;
      }
      if (*(int *)(*(undefined8 **)(param_1 + 0x198) + 1) < 1) {
        return 0;
      }
      lVar7 = *(longlong *)**(undefined8 **)(param_1 + 0x198);
      if (lVar7 == 0) {
        return 0;
      }
    }
    FUN_14157aa00(lVar7,1,*(undefined4 *)(param_3 + 8));
    return 0;
  }
  iVar5 = *param_2 + iVar5;
  iVar6 = iVar6 + param_2[1];
  _local_res18 = CONCAT44(iVar6,iVar5);
  if (iVar5 < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c0) <= iVar5) {
    return 0;
  }
  if (iVar6 < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c4) <= iVar6) {
    return 0;
  }
  FUN_14157b030(param_1,&local_res20,0,iVar2);
  iVar2 = *(int *)(param_3 + 8);
  if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x1d0))) {
    lVar4 = *(longlong *)(param_1 + 0x1c8);
    lVar7 = (longlong)iVar2 * 0xc;
    *(int *)(lVar7 + lVar4) = iVar5;
    *(int *)(lVar7 + 4 + lVar4) = iVar6;
    if ((((iVar5 < *(int *)(param_1 + 400)) &&
         ((-1 < iVar6 &&
          (plVar3 = (longlong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 0x10),
          iVar6 < (int)plVar3[1])))) &&
        (lVar4 = *(longlong *)(*plVar3 + (longlong)iVar6 * 8), lVar4 != 0)) ||
       ((((iVar5 < *(int *)(param_1 + 0x1a0) && (-1 < iVar6)) &&
         (plVar3 = (longlong *)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 0x10),
         iVar6 < (int)plVar3[1])) &&
        (lVar4 = *(longlong *)(*plVar3 + (longlong)iVar6 * 8), lVar4 != 0)))) {
      pbVar1 = (byte *)(lVar7 + *(longlong *)(param_1 + 0x1c8) + 8);
      *pbVar1 = *pbVar1 | *(byte *)(lVar4 + 0x22a);
    }
  }
  FUN_14157b030(param_1,&local_res18,1,*(undefined4 *)(param_3 + 8));
  return 1;
}



// FUNCTION 141564a90 FUN_141564a90 body=425 status=ok
// SIG undefined FUN_141564a90(void)

void FUN_141564a90(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  if ((((char)param_1[0xd4] == '\t') && ((char)param_1[0x111] == '\0')) &&
     (*(char *)((longlong)param_1 + 0x889) == '\0')) {
    if (*(char *)((longlong)param_1 + 0x88b) != '\0') {
      local_18[0] = 0;
      local_18[1] = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468a6910,local_18);
      if (param_1[0xee] != 0) {
        local_18[0] = 0;
        local_18[1] = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Memcpy(local_18[0],&DAT_144c779c4,6);
        FUN_142088910(param_1[0xee],local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
      }
      if (((param_1[0xef] != 0) &&
          (cVar2 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x824), cVar2 != '\0')) &&
         (lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x824), 0 < *(int *)(lVar3 + 0x70))) {
        local_18[0] = 0;
        local_18[1] = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Memcpy(local_18[0],&DAT_144c77c64,6);
        FUN_142088910(param_1[0xef],local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
      }
      lVar3 = FUN_140e971d0(param_1);
      if ((lVar3 != 0) && (lVar3 = FUN_140cfc7b0(lVar3), lVar3 != 0)) {
        lVar4 = FUN_1415825a0();
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
          FUN_141587930(lVar3);
        }
      }
    }
    *(undefined1 *)(param_1 + 0xd4) = 10;
  }
  return;
}



// FUNCTION 141564c40 FUN_141564c40 body=180 status=ok
// SIG undefined FUN_141564c40(void)

void FUN_141564c40(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x5cc);
  if (lVar2 != 0) {
    lVar3 = FUN_142937720();
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
      FUN_142880530(*(undefined8 *)(lVar2 + 0x90),param_1 + 0xe1);
      param_1[0xe1] = 0;
    }
  }
  FName::FName(local_res8,"MainMenu",1);
  (**(code **)(*param_1 + 0x570))(param_1,local_res8,1,0);
  return;
}



// FUNCTION 141564d00 FUN_141564d00 body=61 status=ok
// SIG undefined FUN_141564d00(void)

void FUN_141564d00(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  FName::FName(local_res8,"MainMenu",1);
  (**(code **)(*param_1 + 0x570))(param_1,local_res8,1,0);
  return;
}



// FUNCTION 141564d40 thunk_FUN_141576aa0 body=5 status=ok
// SIG undefined thunk_FUN_141576aa0(void)

void thunk_FUN_141576aa0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x680);
  if (lVar2 != 0) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
    if (lVar3 != 0) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar3 = FUN_140cfc7b0(lVar3);
        if (lVar3 != 0) {
          lVar4 = FUN_1415825a0();
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
            FUN_141587a70(lVar3);
          }
        }
      }
    }
    FUN_142ebe450(lVar2);
  }
  return;
}



// FUNCTION 141564d50 FUN_141564d50 body=843 status=ok
// SIG undefined FUN_141564d50(void)

void FUN_141564d50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  longlong local_res18 [2];
  undefined1 local_98 [8];
  longlong local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  if (((*(char *)(param_1 + 0x6c0) == '\a') &&
      (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x808), cVar6 != '\0')) &&
     (lVar7 = FWeakObjectPtr::Get(param_1 + 0x808), *(longlong *)(lVar7 + 0xb0) != 0)) {
    FWeakObjectPtr::operator=(local_98,0);
    local_90 = 0;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxCSPuzzleMenu::OnQuitConfirmed",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(local_res18,pwVar5 + 2,1);
    FWeakObjectPtr::operator=(local_98,param_1);
    local_90 = local_res18[0];
    if ((local_res18[0] != 0) && (lVar7 = FWeakObjectPtr::Get(local_98), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_90);
    }
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x808);
    lVar7 = *(longlong *)(lVar7 + 0xb0);
    lVar9 = FWeakObjectPtr::Get(param_1 + 0x808);
    lVar9 = *(longlong *)(lVar9 + 0xb0);
    cVar6 = FText::IsEmpty(lVar9 + 0x198);
    bVar13 = cVar6 != '\0';
    if (bVar13) {
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_58,
                          L"Do you want to quit this puzzle? You current solution will be discarded."
                          ,L"GFxCSPuzzleMenu",L"QuitPuzzleMessageText");
    }
    else {
      uVar10 = FText::FText(local_40,lVar9 + 0x198);
    }
    cVar6 = FText::IsEmpty(lVar7 + 0x180);
    bVar14 = cVar6 != '\0';
    if (bVar14) {
      uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_88,L"Quit Puzzle?",L"GFxCSPuzzleMenu",L"QuitPuzzleTitleText");
    }
    else {
      uVar11 = FText::FText(local_70,lVar7 + 0x180);
    }
    uVar12 = FWeakObjectPtr::Get(param_1 + 0x58c);
    FUN_1410f47a0(uVar12,uVar11,uVar10,local_98,1,0,0,1,1);
    if ((bVar14) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    if ((!bVar14) && (local_68 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    if ((bVar13) && (local_50 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if ((!bVar13) && (local_38 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1415650a0 FUN_1415650a0 body=61 status=ok
// SIG undefined FUN_1415650a0(void)

void FUN_1415650a0(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  FName::FName(local_res8,L"MainMenu",1);
  (**(code **)(*param_1 + 0x570))(param_1,local_res8,1,0);
  return;
}



// FUNCTION 1415650e0 FUN_1415650e0 body=109 status=ok
// SIG undefined FUN_1415650e0(void)

void FUN_1415650e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x680);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar2 + 0x580))(plVar2,param_3);
    }
  }
  return;
}



// FUNCTION 141565150 FUN_141565150 body=716 status=ok
// SIG undefined FUN_141565150(void)

void FUN_141565150(longlong param_1,wchar_t *param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  pwVar8 = (wchar_t *)0x0;
  if (param_2 != (wchar_t *)0x0) {
    lVar4 = FUN_1415838e0();
    if ((*(int *)(*(longlong *)(param_2 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14156519e;
  }
  param_2 = pwVar8;
LAB_14156519e:
  *(wchar_t **)(param_1 + 0x6e8) = param_2;
  if ((param_2 != (wchar_t *)0x0) &&
     (cVar3 = UChaosVehicleMovementComponent::GetUseAutoGears(param_2), cVar3 == '\0')) {
    if (*(int *)(param_1 + 0x700) == -1) {
      FWeakObjectPtr::operator=(local_28,0);
      local_20 = 0;
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGFxCSBoosterShopMenu::OnConfirmPurchase",L"::");
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar8 = pwVar2;
      }
      FName::FName(&local_res10,pwVar8 + 2,1);
      FWeakObjectPtr::operator=(local_28,param_1);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar4 = FWeakObjectPtr::Get(local_28), lVar4 != 0)) {
        UObject::FindFunction(lVar4,local_20);
      }
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x6f0);
      if (cVar3 == '\0') {
        return;
      }
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x6f0);
      if (*(longlong *)(lVar4 + 0xb0) == 0) {
        return;
      }
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x6f0);
      lVar4 = *(longlong *)(lVar4 + 0xb0);
      lVar6 = FWeakObjectPtr::Get(param_1 + 0x6f0);
      lVar6 = *(longlong *)(lVar6 + 0xb0);
      uVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
      lVar4 = lVar4 + 0x138;
      lVar6 = lVar6 + 0x120;
    }
    else {
      FWeakObjectPtr::operator=(local_28,0);
      local_20 = 0;
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGFxCSBoosterShopMenu::OnConfirmPurchase",L"::");
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar8 = pwVar2;
      }
      FName::FName(&local_res10,pwVar8 + 2,1);
      FWeakObjectPtr::operator=(local_28,param_1);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar4 = FWeakObjectPtr::Get(local_28), lVar4 != 0)) {
        UObject::FindFunction(lVar4,local_20);
      }
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x6f0);
      if (cVar3 == '\0') {
        return;
      }
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x6f0);
      if (*(longlong *)(lVar4 + 0xb0) == 0) {
        return;
      }
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x6f0);
      lVar4 = *(longlong *)(lVar4 + 0xb0);
      lVar6 = FWeakObjectPtr::Get(param_1 + 0x6f0);
      lVar6 = *(longlong *)(lVar6 + 0xb0);
      uVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
      lVar4 = lVar4 + 0x168;
      lVar6 = lVar6 + 0x150;
    }
    FUN_1410f47a0(uVar7,lVar6,lVar4,local_28,1,0,0,0,1);
  }
  return;
}



// FUNCTION 141565420 FUN_141565420 body=61 status=ok
// SIG undefined FUN_141565420(void)

void FUN_141565420(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  FName::FName(local_res8,L"BoosterShop",1);
  (**(code **)(*param_1 + 0x570))(param_1,local_res8,1,0);
  return;
}



// FUNCTION 141565460 thunk_FUN_14157ed70 body=5 status=ok
// SIG undefined thunk_FUN_14157ed70(void)

void thunk_FUN_14157ed70(longlong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    iVar5 = 0;
    iVar2 = FUN_142eb7440();
    if (0 < iVar2) {
      lVar6 = 0;
      do {
        lVar3 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6e0),iVar5);
        if (lVar3 != 0) {
          lVar4 = FUN_1415838e0();
          iVar2 = *(int *)(lVar4 + 0x90);
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar2) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar2 * 8)
              != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_142ed3c20(lVar3,CONCAT71((int7)(int3)((uint)iVar2 >> 8),
                                         param_2 < *(int *)(*(longlong *)
                                                             (*(longlong *)(param_1 + 0x6d8) + 0x30)
                                                            + 0x70 + lVar6)),1);
          }
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x90;
        iVar2 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x6e0));
      } while (iVar5 < iVar2);
    }
  }
  return;
}



// FUNCTION 141565470 thunk_FUN_14157ef00 body=5 status=ok
// SIG undefined thunk_FUN_14157ef00(void)

void thunk_FUN_14157ef00(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong alStack_18 [2];
  
  if (((*(longlong *)(param_1 + 0x6c8) != 0) && (DAT_1468a64a8 != 0)) &&
     (lVar1 = FUN_140e971d0(), lVar1 != 0)) {
    lVar1 = FUN_140cff230();
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 0x22c);
    }
    alStack_18[0] = 0;
    alStack_18[1] = 0;
    FString::AppendInt(alStack_18,uVar2);
    (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x2a8))
              (*(longlong **)(param_1 + 0x6c8),alStack_18,1,0);
    if (alStack_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141565480 FUN_141565480 body=857 status=ok
// SIG undefined FUN_141565480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141565480(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118 [2];
  undefined1 local_108 [224];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  FUN_140adde20();
  if (*(char *)(param_1 + 0x4d4) == '\0') {
    return;
  }
  if (*(longlong **)(param_1 + 0x4d8) == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0xfa8))();
  if (lVar2 == 0) {
    return;
  }
  lVar5 = param_1 + 0x4f0;
  lVar3 = FWeakObjectPtr::Get(lVar5);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x4f8)) &&
       (local_128 = (undefined1 *)0x0, *(longlong *)(param_1 + 0x500) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x4f8) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar5);
      if (lVar3 != 0) goto LAB_141565571;
    }
LAB_1415655a7:
    FUN_14282a800(local_108);
    FUN_14283c290(local_108,param_1 + 0x500,1,0);
    FUN_14282cc40(local_108);
  }
  else {
LAB_141565571:
    lVar4 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1415655a7;
  }
  lVar3 = FWeakObjectPtr::Get(lVar5);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x4f8)) &&
       (local_128 = (undefined1 *)0x0, *(longlong *)(param_1 + 0x500) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x4f8) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar5);
      if (lVar3 != 0) goto LAB_141565644;
    }
  }
  else {
LAB_141565644:
    lVar5 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14156567d;
  }
  lVar3 = 0;
LAB_14156567d:
  lVar2 = FUN_142f02280(lVar2,lVar3);
  if (lVar2 != 0) {
    lVar5 = FUN_1415833c0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uStack_120 = 0;
      local_128 = &LAB_14156bb00;
      plVar7 = (longlong *)(lVar2 + 0x6a0);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_128;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_128._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_120;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_11c;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar5;
        *plVar6 = (longlong)&PTR_FUN_143f77bd0;
      }
      if (local_118 != plVar7) {
        if (plVar6 == (longlong *)0x0) {
          if (*(int *)(lVar2 + 0x6a8) == 0) {
            return;
          }
          plVar6 = (longlong *)*plVar7;
          if (plVar6 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          if (*plVar7 != 0) {
            lVar5 = FMemory::Realloc(*plVar7,0,0);
            *plVar7 = lVar5;
          }
          *(undefined4 *)(lVar2 + 0x6a8) = 0;
          return;
        }
        (**(code **)(*plVar6 + 0x30))(plVar6,plVar7);
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar2 = FMemory::Realloc(plVar6,0,0);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 1415657e0 FUN_1415657e0 body=938 status=ok
// SIG undefined FUN_1415657e0(void)

void FUN_1415657e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  longlong local_res8;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  
  uVar4 = FWeakObjectPtr::Get(param_1 + 0x58c);
  uVar13 = 0;
  if (uVar4 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_141565840;
  }
  uVar4 = uVar13;
LAB_141565840:
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = *(longlong *)(DAT_146b33f38 + 0x90);
  if ((((uVar4 != 0) && (lVar5 != 0)) && (*(longlong *)(lVar5 + 0x1110) != 0)) &&
     (plVar2 = *(longlong **)(uVar4 + 0x848), plVar2 != (longlong *)0x0)) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      fVar14 = 0.0;
      uVar7 = FUN_141477fa0();
      lVar6 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar7);
      if (lVar6 != 0) {
        lVar8 = *(longlong *)(lVar5 + 0x1110);
        cVar1 = *(char *)(lVar6 + 0x480);
        iVar10 = *(int *)(lVar8 + 0x38);
        if (0 < iVar10) {
          do {
            iVar12 = (int)uVar13;
            if (cVar1 == iVar12) {
              if ((cVar1 < 0) || (iVar10 <= cVar1)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                puVar11 = (undefined8 *)((longlong)cVar1 * 0x90 + *(longlong *)(lVar8 + 0x30));
                local_d8 = *puVar11;
                FString::FString(local_d0,puVar11 + 1);
                FString::FString(local_c0,puVar11 + 3);
                FText::FText(local_b0,puVar11 + 5);
                FText::FText(local_98,puVar11 + 8);
                FText::FText(local_80,puVar11 + 0xb);
                local_68 = *(undefined4 *)(puVar11 + 0xe);
                local_60 = puVar11[0xf];
                local_58 = *(undefined4 *)(puVar11 + 0x10);
                local_50 = puVar11[0x11];
                if (0.0 < *(float *)(lVar6 + 0x484)) {
                  fVar14 = *(float *)(lVar6 + 0x488);
                }
                if ((*(longlong *)(param_1 + 0x6e0) != 0) &&
                   (lVar8 = FUN_142eb6a30(*(longlong *)(param_1 + 0x6e0),(int)cVar1), lVar8 != 0)) {
                  lVar9 = FUN_1415838e0();
                  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (bVar3) {
                    local_res8 = lVar8;
                    if (*(char *)(lVar8 + 0x380) == '\x01') {
                      FUN_141555020(&local_res8,(int)fVar14);
                      FUN_140ce28e0(&local_d8);
                      goto LAB_141565b38;
                    }
                    FUN_142ed2820(lVar8,1);
                    FUN_141555020(&local_res8,(int)fVar14);
                    *(undefined1 *)(lVar8 + 0x380) = 1;
                  }
                }
                FUN_140ce28e0(&local_d8);
              }
            }
            else if ((*(longlong *)(param_1 + 0x6e0) != 0) &&
                    (lVar8 = FUN_142eb6a30(*(longlong *)(param_1 + 0x6e0),uVar13), lVar8 != 0)) {
              lVar9 = FUN_1415838e0();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                FUN_14157ee50(lVar8,(longlong)iVar12 * 0x90 +
                                    *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x30),0,0);
              }
            }
LAB_141565b38:
            lVar8 = *(longlong *)(lVar5 + 0x1110);
            uVar13 = (ulonglong)(iVar12 + 1U);
            iVar10 = *(int *)(lVar8 + 0x38);
          } while ((int)(iVar12 + 1U) < iVar10);
        }
      }
    }
  }
  return;
}



// FUNCTION 141565b90 FUN_141565b90 body=552 status=ok
// SIG undefined FUN_141565b90(void)

void FUN_141565b90(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  longlong local_res10;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  local_res10 = param_2;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x198);
  if ((((cVar3 != '\0') && (*(longlong *)(param_1 + 0x1b8) != 0)) &&
      (*(int *)(param_1 + 0x1c8) != 0)) && ((byte)(*(char *)(param_1 + 0x1b0) - 2U) < 2)) {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x198);
    if (*(int *)(lVar5 + 0x128) != *(int *)(lVar5 + 0x154)) {
      lVar6 = *(longlong *)(lVar5 + 0x160);
      if (*(longlong *)(lVar5 + 0x160) == 0) {
        lVar6 = lVar5 + 0x158;
      }
      iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)local_res10 >> 0x20) + (int)local_res10)
                               & (longlong)*(int *)(lVar5 + 0x168) - 1U) * 4);
      if (iVar4 != -1) {
        do {
          lVar6 = *(longlong *)(lVar5 + 0x120) + (longlong)iVar4 * 0x28;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x120) + (longlong)iVar4 * 0x28) == local_res10) {
            if (iVar4 != -1) goto LAB_141565c84;
            break;
          }
          iVar4 = *(int *)(lVar6 + 0x20);
        } while (iVar4 != -1);
      }
    }
    lVar6 = 0;
LAB_141565c84:
    lVar5 = lVar6 + 8;
    if (lVar6 == 0) {
      lVar5 = 0;
    }
    FText::FText(local_38,lVar5);
    cVar3 = FText::IsEmpty(local_38);
    if (cVar3 != '\0') {
      puVar7 = (undefined8 *)FName::ToString(&local_res10,local_48);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(local_58,
                          L"[DEBUG] Missing entry for %s in UIGlobals\' ClosedCaptioning Table!",
                          puVar9);
      uVar8 = FText::FromString(local_20,local_58);
      FText::operator=(local_38,uVar8);
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_18 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar2 = (int *)((longlong)local_18 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
    FUN_14157c030(param_1,local_38);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  FUN_140591060(param_3);
  return;
}



// FUNCTION 141565dc0 FUN_141565dc0 body=63 status=ok
// SIG undefined FUN_141565dc0(void)

void FUN_141565dc0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 local_res18 [16];
  
  plVar1 = (longlong *)FName::FName(local_res18,&DAT_144c697e4,1);
  if (param_3 == *plVar1) {
    FUN_141576720(param_1);
  }
  return;
}



// FUNCTION 141565e00 FUN_141565e00 body=309 status=ok
// SIG undefined FUN_141565e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141565e00(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)FName::FName(&local_78,&DAT_144c689c4,1);
  if (param_3 == *plVar1) {
    *(undefined1 *)(param_1 + 0x82f) = 0;
    if (*(longlong *)(param_1 + 0x6e0) != 0) {
      FUN_14155a3a0(*(longlong *)(param_1 + 0x6e0),0);
    }
    FWeakObjectPtr::operator=(&local_78,param_1);
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444f8920;
      puVar2[1] = param_1;
      *(undefined4 *)(puVar2 + 2) = local_78;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_74;
    }
    local_68[0] = &LAB_141558960;
    FUN_14208c260(param_1,local_68);
    if (local_28 != 0) {
      plVar1 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar1 = local_38;
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141565f40 FUN_141565f40 body=147 status=ok
// SIG undefined FUN_141565f40(void)

void FUN_141565f40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_141558a70;
  FUN_14208c5d0(param_1,local_58);
  FUN_142ec05c0(param_1);
  return;
}



// FUNCTION 141565fe0 FUN_141565fe0 body=140 status=ok
// SIG undefined FUN_141565fe0(void)

void FUN_141565fe0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_141558970;
  FUN_14208c5d0(param_1,local_58);
  return;
}



// FUNCTION 141566070 FUN_141566070 body=90 status=ok
// SIG undefined FUN_141566070(void)

void FUN_141566070(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x178) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x170), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x170) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x170),0,0);
      *(undefined8 *)(param_1 + 0x170) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1415660d0 FUN_1415660d0 body=424 status=ok
// SIG undefined FUN_1415660d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415660d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  
  lVar8 = *(longlong *)(param_1 + 0x180);
  iVar6 = 0;
  iVar4 = DAT_1464aef58;
  if (0 < DAT_1464aef58) {
    lVar9 = 0;
    do {
      plVar7 = (longlong *)(DAT_1464aef50 + lVar9);
      if ((((int)plVar7[1] != 0) && (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar4 = DAT_1464aef58, *plVar2 == lVar8)) {
        if (((int)plVar7[1] != 0) && (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar7 != 0) {
            lVar8 = FMemory::Realloc(*plVar7,0,0);
            *plVar7 = lVar8;
          }
          *(undefined4 *)(plVar7 + 1) = 0;
          iVar4 = DAT_1464aef58;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      lVar9 = lVar9 + 0x10;
    } while (iVar6 < iVar4);
  }
  if (DAT_1464aef64 < 1) {
    iVar5 = 0;
    iVar6 = iVar4;
    if (0 < iVar4) {
      lVar8 = 0;
      do {
        if (((*(int *)(lVar8 + 8 + DAT_1464aef50) == 0) ||
            (*(longlong **)(lVar8 + DAT_1464aef50) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(lVar8 + DAT_1464aef50) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464aef50,iVar5,1,1);
        }
        else {
          iVar5 = iVar5 + 1;
          lVar8 = lVar8 + 0x10;
        }
        iVar6 = DAT_1464aef58;
      } while (iVar5 < DAT_1464aef58);
    }
    _DAT_1464aef60 = iVar6 * 2;
    if (_DAT_1464aef60 < 3) {
      _DAT_1464aef60 = 2;
    }
    if ((_DAT_1464aef60 < iVar4) && (DAT_1464aef5c != iVar6)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464aef50);
    }
  }
  if ((*(int *)(param_1 + 0x178) != 0) &&
     (plVar7 = *(longlong **)(param_1 + 0x170), plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    if (*(longlong *)(param_1 + 0x170) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_1 + 0x170),0,0);
      *(undefined8 *)(param_1 + 0x170) = uVar3;
    }
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 141566280 FUN_141566280 body=327 status=ok
// SIG undefined FUN_141566280(void)

void FUN_141566280(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_142f06340(param_1,param_1 + 0x1f8);
  FUN_142f06340(param_1,param_1 + 0x200);
  FUN_142f06340(param_1,param_1 + 0x208);
  if ((*(int *)(param_1 + 0x178) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x170), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x170) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x170),0,0);
      *(undefined8 *)(param_1 + 0x170) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  if ((*(int *)(param_1 + 0x188) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x180), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x180) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x180),0,0);
      *(undefined8 *)(param_1 + 0x180) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  if ((*(int *)(param_1 + 0x198) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 400), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 400) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 400),0,0);
      *(undefined8 *)(param_1 + 400) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  if ((*(int *)(param_1 + 0x1a8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x1a0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x1a0),0,0);
      *(undefined8 *)(param_1 + 0x1a0) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1415663d0 FUN_1415663d0 body=279 status=ok
// SIG undefined FUN_1415663d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415663d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_141558940;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c300(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1415664f0 FUN_1415664f0 body=61 status=ok
// SIG undefined FUN_1415664f0(void)

void FUN_1415664f0(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  FName::FName(local_res8,L"MainMenu",1);
  (**(code **)(*param_1 + 0x570))(param_1,local_res8,1,0);
  return;
}



// FUNCTION 141566530 FUN_141566530 body=118 status=ok
// SIG undefined FUN_141566530(void)

void FUN_141566530(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  FUN_142ec19b0();
  lVar1 = *(longlong *)(param_1 + -0x138);
  if (lVar1 != 0) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar3 = FUN_142eb62a0(lVar1);
      FUN_14156b520(param_1 + -0x170,uVar3);
    }
  }
  return;
}



// FUNCTION 1415665b0 FUN_1415665b0 body=95 status=ok
// SIG undefined FUN_1415665b0(void)

void FUN_1415665b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  FUN_1415674c0();
  FUN_142ecd4d0(param_1);
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  local_18 = lVar1;
  if (lVar1 == 0) {
    local_10 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
  }
  FUN_142ed36d0(param_1,&local_18,0);
  return;
}



// FUNCTION 141566610 FUN_141566610 body=975 status=ok
// SIG undefined FUN_141566610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141566610(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  int local_e8 [2];
  undefined8 local_e0;
  longlong local_d8;
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  longlong local_48;
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_142ec1f90();
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x680);
  if (lVar6 != 0) {
    lVar7 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_142eba510(lVar6);
    }
  }
  FUN_14157ef00(param_1);
  FUN_142ecd4d0(param_1);
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      iVar5 = FUN_14046e5c0(lVar6);
      if (1 < iVar5) {
        *(undefined1 *)(param_1 + 0x710) = 1;
        lVar6 = FWeakObjectPtr::Get(param_1 + 0x58c);
        if (lVar6 != 0) {
          lVar7 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (((bVar4) && (*(longlong *)(param_1 + 0x6f0) != 0)) &&
             (*(longlong *)(param_1 + 0x6f8) != 0)) {
            FUN_142710360(lVar6,local_e8);
            uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_78,L"P{0}",L"GFxCSMenuBase",L"PlayerText");
            puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_60,uVar8);
            local_48 = (longlong)(local_e8[0] + 1);
            local_f8 = local_50;
            puStack_f0 = &local_20;
            local_d8 = puVar9[1];
            local_e0 = *puVar9;
            local_50[0] = 0;
            local_28 = '\0';
            if (local_d8 != 0) {
              LOCK();
              *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
              UNLOCK();
            }
            local_c8 = local_f8;
            puStack_c0 = puStack_f0;
            uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                    TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
            uVar8 = FText::Format(local_90,&local_e0,uVar8);
            FText::FText(local_a8,uVar8);
            if (local_88 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_88 + 1;
              lVar6 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_88)(local_88);
                LOCK();
                piVar1 = (int *)((longlong)local_88 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_88 + 8))(local_88,1);
                }
              }
            }
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8);
            if (local_28 != '\0') {
              local_28 = '\0';
              if (local_38 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_38 + 1;
                lVar6 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_38)(local_38);
                  LOCK();
                  piVar1 = (int *)((longlong)local_38 + 0xc);
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*local_38 + 8))(local_38,1);
                  }
                }
              }
            }
            plVar3 = (longlong *)puVar9[1];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar3 + 1;
              lVar6 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plVar3)(plVar3);
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
            (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x2b0))
                      (*(longlong **)(param_1 + 0x6f8),local_a8,1,0);
            if (local_a0 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_a0 + 1;
              lVar6 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_a0)(local_a0);
                LOCK();
                piVar1 = (int *)((longlong)local_a0 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_a0 + 8))(local_a0,1);
                }
              }
            }
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_70 + 1;
              lVar6 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar1 = (int *)((longlong)local_70 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_70 + 8))(local_70,1);
                }
              }
            }
            local_f8 = (undefined4 *)0x0;
            puStack_f0 = (ulonglong *)0x5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
            FGenericPlatformString::Memcpy(local_f8,L"show",10);
            FUN_142088910(*(undefined8 *)(param_1 + 0x6f0),&local_f8);
            if (local_f8 != (undefined4 *)0x0) {
              FMemory::Free();
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1415669e0 FUN_1415669e0 body=65 status=ok
// SIG undefined FUN_1415669e0(void)

void FUN_1415669e0(longlong param_1)

{
  longlong lVar1;
  
  FUN_142ec1f90();
  FUN_142ecd4d0(param_1);
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x59c);
  if (lVar1 != 0) {
    lVar1 = FUN_14154e2c0(lVar1);
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0x7a1) = 0;
    }
  }
  return;
}



// FUNCTION 141566a30 FUN_141566a30 body=95 status=ok
// SIG undefined FUN_141566a30(void)

void FUN_141566a30(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  FUN_1415674c0();
  FUN_142ecd4d0(param_1);
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  local_18 = lVar1;
  if (lVar1 == 0) {
    local_10 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
  }
  FUN_142ed36d0(param_1,&local_18,0);
  return;
}



// FUNCTION 141566a90 FUN_141566a90 body=95 status=ok
// SIG undefined FUN_141566a90(void)

void FUN_141566a90(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  FUN_1415674c0();
  FUN_142ecd4d0(param_1);
  lVar1 = *(longlong *)(param_1 + 0x6a0);
  local_18 = lVar1;
  if (lVar1 == 0) {
    local_10 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
  }
  FUN_142ed36d0(param_1,&local_18,0);
  return;
}



// FUNCTION 141566af0 FUN_141566af0 body=963 status=ok
// SIG undefined FUN_141566af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141566af0(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined7 uVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_1415674c0();
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar5 = FUN_14046e5c0(lVar6);
      *(bool *)(param_1 + 0x82e) = 1 < iVar5;
      if (1 < iVar5) {
        *(undefined1 *)(param_1 + 0x698) = 0;
      }
    }
  }
  if (*(char *)(param_1 + 0x6c0) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x6c0) = 1;
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0x54) = 0;
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x808);
  if ((cVar4 != '\0') && (*(longlong *)(param_1 + 0x7a0) != 0)) {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x808);
    lVar6 = **(longlong **)(param_1 + 0x7a0);
    (**(code **)(lVar6 + 0x278))(*(longlong **)(param_1 + 0x7a0),*(int *)(lVar7 + 0x70) != 0);
    uVar11 = (undefined7)((ulonglong)lVar6 >> 8);
    FUN_142ed3c20(*(undefined8 *)(param_1 + 0x7a0),1);
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x7a0) + 0x170);
    (**(code **)(*plVar9 + 0x38))(plVar9,0);
    plVar9 = *(longlong **)(param_1 + 0x7a8);
    if (plVar9 != (longlong *)0x0) {
      local_b8 = (code *)0x0;
      uStack_b0 = 0;
      (**(code **)(*plVar9 + 0x2a8))(plVar9,&local_b8,CONCAT71(uVar11,1),0);
      if (local_b8 != (code *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    local_a8 = *(undefined1 **)(param_1 + 0x6e0);
    local_a0 = *(undefined8 *)(param_1 + 0x780);
    local_98 = *(longlong *)(param_1 + 0x7c0);
    local_90 = *(undefined8 *)(param_1 + 0x778);
    local_88 = *(undefined8 *)(param_1 + 0x6e8);
    local_80 = *(undefined8 *)(param_1 + 0x6f0);
    local_78 = *(longlong **)(param_1 + 0x6f8);
    local_70 = *(undefined8 *)(param_1 + 0x700);
    local_68 = *(ulonglong *)(param_1 + 0x708);
    local_60 = *(undefined8 *)(param_1 + 0x710);
    local_58 = *(undefined8 *)(param_1 + 0x788);
    local_50 = *(undefined8 *)(param_1 + 0x790);
    local_48 = *(undefined8 *)(param_1 + 0x7d8);
    local_40 = *(undefined8 *)(param_1 + 0x7e0);
    local_38 = *(undefined8 *)(param_1 + 0x7f0);
    local_30 = *(undefined8 *)(param_1 + 0x7f8);
    FUN_14155fe60(*(longlong *)(param_1 + 0x6d0),&local_a8);
    lVar6 = *(longlong *)(param_1 + 0x6d0);
    local_b8 = FUN_14156c9f0;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    plVar10 = (longlong *)(lVar6 + 0x28);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143fcff50;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_b0._4_4_;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar7;
      *plVar9 = (longlong)&PTR_FUN_143fcff98;
    }
    if (&local_b8 != plVar10) {
      if (plVar9 == (longlong *)0x0) {
        if ((*(int *)(lVar6 + 0x30) != 0) &&
           (plVar9 = (longlong *)*plVar10, plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          if (*plVar10 != 0) {
            lVar7 = FMemory::Realloc(*plVar10,0,0);
            *plVar10 = lVar7;
          }
          *(undefined4 *)(lVar6 + 0x30) = 0;
        }
        goto LAB_141566dc5;
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar10);
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      lVar6 = FMemory::Realloc(plVar9,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
  }
LAB_141566dc5:
  FWeakObjectPtr::operator=(&local_b8,param_1);
  uVar2 = (undefined4)local_b8;
  uVar3 = local_b8._4_4_;
  local_78 = (longlong *)0x0;
  local_68 = local_68 & 0xffffffff00000000;
  puVar8 = (undefined8 *)FUN_140438ef0(0x18,&local_98);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_FUN_1444f8920;
    puVar8[1] = param_1;
    *(undefined4 *)(puVar8 + 2) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0x14) = uVar3;
  }
  local_a8 = &LAB_141558a10;
  FUN_14208c260(param_1,&local_a8);
  if ((int)local_68 != 0) {
    plVar9 = &local_98;
    if (local_78 != (longlong *)0x0) {
      plVar9 = local_78;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141566ec0 FUN_141566ec0 body=1521 status=ok
// SIG undefined FUN_141566ec0(void)

void FUN_141566ec0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  bool bVar12;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_158 [5];
  undefined8 local_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  uVar6 = 0;
  local_res8 = 0;
  FUN_1415674c0();
  lVar7 = *(longlong *)(param_1 + 0x7b0);
  local_158[4] = lVar7;
  if (lVar7 != 0) {
    uVar6 = UBlendableInterface::GetPrivateStaticClass();
    uVar6 = UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar6);
  }
  local_130 = uVar6;
  FUN_142ed36d0(param_1,local_158 + 4,0);
  FUN_142ecd4d0(param_1);
  if (*(longlong *)(param_1 + 0x770) != 0) {
    pwVar11 = L"NewCharacterUnlockedText";
    pwVar10 = L"NEW CHARACTER UNLOCKED";
    if (*(int *)(param_1 + 0x868) != 0) {
      pwVar11 = L"NewCharacterAndRewardUnlockedText";
      pwVar10 = L"NEW CHARACTER AND REWARD UNLOCKED";
    }
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_108,pwVar10,L"GFxCSRewardScreenMenu",pwVar11);
    local_158[0] = 0;
    local_158[1] = 0x1e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158,0);
    FGenericPlatformString::Memcpy(local_158[0],L"PNL_Txt_Feedback.TXT_Feedback",0x3c);
    FUN_142f100e0(*(undefined8 *)(param_1 + 0x770),local_158,local_108);
    if (local_158[0] != 0) {
      FMemory::Free();
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_100 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x818) != 0) &&
      (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x824), cVar5 != '\0')) &&
     (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x82c), cVar5 != '\0')) {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x730);
    if ((cVar5 != '\0') && (lVar7 = FUN_140e971d0(param_1), lVar7 != 0)) {
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x82c);
      *(undefined4 *)(param_1 + 0x870) = *(undefined4 *)(lVar7 + 0xf0);
      plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x730);
      local_158[2] = 0;
      local_158[3] = 0;
      FString::AppendInt(local_158 + 2,*(undefined4 *)(param_1 + 0x870));
      (**(code **)(*plVar8 + 0x2a8))(plVar8,local_158 + 2,1,0);
      if (local_158[2] != 0) {
        FMemory::Free();
      }
    }
    if ((*(longlong *)(param_1 + 0x728) == 0) ||
       (*(int *)(param_1 + 0x868) != *(int *)(*(longlong *)(param_1 + 0x728) + 0x38) + -1)) {
      if (*(longlong **)(param_1 + 0x758) != (longlong *)0x0) {
        local_128 = 0;
        plStack_120 = (longlong *)0x0;
        lVar7 = **(longlong **)(param_1 + 0x758);
        uVar6 = FText::AsNumber(local_f0,*(undefined4 *)(param_1 + 0x820),0,&local_128);
        (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(param_1 + 0x758),uVar6,1,0);
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_e8 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar1 = (int *)((longlong)local_e8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_e8 + 8))(local_e8,1);
            }
          }
        }
        plVar8 = plStack_120;
        if (plStack_120 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_120 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_120)(plStack_120);
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
      if (*(longlong **)(param_1 + 0x760) != (longlong *)0x0) {
        local_118 = 0;
        plStack_110 = (longlong *)0x0;
        lVar7 = **(longlong **)(param_1 + 0x760);
        uVar6 = FText::AsNumber(local_d8,*(undefined4 *)(*(longlong *)(param_1 + 0x818) + 0x78),0,
                                &local_118);
        (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(param_1 + 0x760),uVar6,1,0);
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_d0 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        plVar8 = plStack_110;
        if (plStack_110 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_110 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_110)(plStack_110);
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
      if ((*(longlong *)(param_1 + 0x768) != 0) &&
         (iVar3 = *(int *)(*(longlong *)(param_1 + 0x818) + 0x78), 0 < iVar3)) {
        FUN_14157ae40(*(longlong *)(param_1 + 0x768),(float)*(int *)(param_1 + 0x820) / (float)iVar3
                     );
      }
    }
    else {
      plVar8 = *(longlong **)(param_1 + 0x748);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x278))(plVar8,0);
      }
      plVar8 = *(longlong **)(param_1 + 0x768);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x278))(plVar8,0);
      }
    }
    if (*(longlong *)(param_1 + 0x790) != 0) {
      cVar5 = FText::IsEmpty(param_1 + 0x6b0);
      bVar12 = cVar5 != '\0';
      if (bVar12) {
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_c0,L"REWARD",L"GFxCSRewardScreenMenu",L"RewardText");
      }
      else {
        uVar6 = FText::FText(local_a8,param_1 + 0x6b0);
      }
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x824);
      FUN_141562890(*(undefined8 *)(param_1 + 0x790),uVar6,*(undefined4 *)(lVar7 + 0x50));
      if ((bVar12) && (local_b8 != (longlong *)0x0)) {
        LOCK();
        plVar8 = local_b8 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      if ((!bVar12) && (local_a0 != (longlong *)0x0)) {
        LOCK();
        plVar8 = local_a0 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
    }
    if (*(longlong *)(param_1 + 0x798) != 0) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_90,L"TOTAL",L"GFxCSRewardScreenMenu",L"TotalText");
      FUN_141562890(*(undefined8 *)(param_1 + 0x798),uVar6,0);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_88 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
    }
    FUN_14155ef20(param_1);
    FWeakObjectPtr::operator=(&local_res8,param_1);
    uVar4 = local_res8;
    local_48 = 0;
    local_38 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_68);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_FUN_1444f8920;
      puVar9[1] = param_1;
      *(undefined4 *)(puVar9 + 2) = uVar4;
      *(undefined4 *)((longlong)puVar9 + 0x14) = local_resc;
    }
    local_78[0] = &LAB_141558a90;
    FUN_14208c4f0(param_1,local_78);
  }
  return;
}



// FUNCTION 1415674c0 FUN_1415674c0 body=200 status=ok
// SIG undefined FUN_1415674c0(void)

void FUN_1415674c0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142ec1f90();
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x680);
  if (lVar3 != 0) {
    lVar4 = FUN_1415833c0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_141574e10(lVar3,param_1);
    }
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = FUN_14046e5c0(lVar3);
      *(bool *)(param_1 + 0x698) = 1 < iVar2;
    }
  }
  return;
}



// FUNCTION 141567590 FUN_141567590 body=418 status=ok
// SIG undefined FUN_141567590(void)

void FUN_141567590(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 local_res8;
  code *local_18;
  ulonglong uStack_10;
  
  FUN_1415674c0();
  if ((param_1[0xd4] != 0) && (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) {
    FUN_14157bd20(param_1,param_1[0xd4]);
    if (param_1[0xde] != 0) {
      uStack_10 = uStack_10 & 0xffffffff00000000;
      local_18 = FUN_14156bce0;
      pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieMediaOpened",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res8,pwVar2 + 2,1);
      FUN_140ddbc10(param_1[0xde] + 0x378,param_1,&local_18,local_res8);
      FUN_141f587d0(param_1[0xde],0);
      FUN_141f5abf0(param_1[0xde]);
      uStack_10 = uStack_10 & 0xffffffff00000000;
      local_18 = FUN_14156bc40;
      pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieEndReached",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res8,pwVar2 + 2,1);
      FUN_140ddbc10(param_1[0xde] + 0x398,param_1,&local_18,local_res8);
    }
    if (param_1[0xdb] != 0) {
      FUN_141576610(param_1);
    }
  }
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 141567740 FUN_141567740 body=86 status=ok
// SIG undefined FUN_141567740(void)

void FUN_141567740(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x6f0);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x6f0);
    TBaseMulticastDelegate<void>::Remove(lVar1 + 0xd8,*(undefined8 *)(param_1 + 0x6f8));
  }
  FUN_142ecd3f0(param_1);
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 1415677a0 FUN_1415677a0 body=127 status=ok
// SIG undefined FUN_1415677a0(void)

void FUN_1415677a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x6a8) != 0) && (*(longlong **)(param_1 + 0x6a0) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6a0) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x6a8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x6a0);
      }
      (**(code **)(*plVar3 + 0x40))();
    }
  }
  lVar1 = DAT_1468a64a8;
  if (DAT_1468a64a8 != 0) {
    FUN_14155a670(DAT_1468a64a8);
    TBaseMulticastDelegate<void>::Remove(lVar1 + 0xd8,*(undefined8 *)(param_1 + 0x700));
  }
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 141567820 FUN_141567820 body=27 status=ok
// SIG undefined FUN_141567820(void)

void FUN_141567820(undefined8 param_1)

{
  FUN_142ecd3f0();
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 141567840 FUN_141567840 body=295 status=ok
// SIG undefined FUN_141567840(void)

void FUN_141567840(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    thunk_FUN_142eb3990();
    *(undefined8 *)(param_1 + 0x6c8) = 0;
  }
  if ((*(int *)(param_1 + 0x6a8) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x6a0), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    if (*(longlong *)(param_1 + 0x6a0) != 0) {
      uVar5 = FMemory::Realloc(*(longlong *)(param_1 + 0x6a0),0,0);
      *(undefined8 *)(param_1 + 0x6a0) = uVar5;
    }
    *(undefined4 *)(param_1 + 0x6a8) = 0;
  }
  *(undefined1 *)(param_1 + 0x82a) = 0;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x810);
  if (cVar3 != '\0') {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x810);
    if (*(longlong *)(lVar6 + 0x38) != 0) {
      FUN_141587af0();
      iVar1 = *(int *)(*(longlong *)(lVar6 + 0x38) + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar8 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar8;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
      }
      else {
        lVar7 = 0;
      }
      *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x20000000;
      *(undefined8 *)(lVar6 + 0x38) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x82f) = 1;
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    FUN_14155a3a0(*(longlong *)(param_1 + 0x6e0),*(char *)(param_1 + 0x82a) == '\0');
  }
  FUN_142ecd3f0(param_1);
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 141567970 FUN_141567970 body=469 status=ok
// SIG undefined FUN_141567970(void)

void FUN_141567970(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar9 = 0;
  local_38 = 0;
  local_28 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1444f8920;
    puVar5[1] = param_1;
    *(undefined4 *)(puVar5 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_resc;
  }
  local_68[0] = &LAB_141558b20;
  FUN_14208c4f0(param_1,local_68);
  if (*(char *)(param_1 + 0x6a0) != '\n') {
    FUN_141580830(param_1 + 0x838);
    *(undefined1 *)(param_1 + 0x6a0) = 10;
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x824);
    if (cVar4 != '\0') {
      cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x730);
      if (cVar4 != '\0') {
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x730);
        FWeakObjectPtr::Get(param_1 + 0x824);
        lVar7 = FUN_140e971d0(param_1);
        if (lVar7 != 0) {
          lVar7 = FUN_140cff230(lVar7);
          if (lVar7 != 0) {
            uVar9 = *(undefined4 *)(lVar7 + 0x22c);
          }
        }
        lVar7 = *plVar6;
        uVar8 = FText::AsNumber(local_88,uVar9,0,&local_98);
        (**(code **)(lVar7 + 0x2b0))(plVar6,uVar8,1,0);
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_80 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)local_80 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
        plVar6 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_90 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_90)(plStack_90);
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
    }
  }
  FUN_142ecd3f0(param_1);
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 141567b50 FUN_141567b50 body=665 status=ok
// SIG undefined FUN_141567b50(void)

void FUN_141567b50(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  FUN_142ecd3f0();
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    FUN_141576610(param_1);
  }
  if (*(longlong *)(param_1 + 0x6e8) != 0) {
    FUN_142e724b0(*(longlong *)(param_1 + 0x6e8),*(undefined8 *)(param_1 + 0x6c8),
                  *(undefined8 *)(param_1 + 0x6c0),0);
    *(undefined8 *)(param_1 + 0x6e8) = 0;
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x680);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = FUN_1415833c0();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar5 = (**(code **)(*plVar3 + 0x148))(plVar3);
        lVar4 = FUN_140c12480(uVar5);
        if (lVar4 != 0) {
          lVar4 = FHdrImageWrapper::GetHeight(lVar4);
          if (lVar4 != 0) {
            FUN_1411ea9e0(lVar4);
          }
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x6f0);
    plVar3 = (longlong *)(lVar4 + 0x398);
    iVar9 = *(int *)(lVar4 + 0x3a0) + -1;
    if (-1 < iVar9) {
      lVar10 = (longlong)iVar9 << 4;
      lVar11 = lVar10;
      do {
        lVar8 = *plVar3 + lVar10;
        lVar6 = FWeakObjectPtr::Get(lVar8);
        if (param_1 == lVar6) {
LAB_141567cb3:
          iVar1 = *(int *)(lVar4 + 0x3a0);
          iVar7 = (iVar1 - iVar9) + -1;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar11 + *plVar3),
                       (void *)((longlong)(iVar1 - iVar7) * 0x10 + *plVar3),(longlong)iVar7 << 4);
            iVar1 = *(int *)(lVar4 + 0x3a0);
          }
          *(int *)(lVar4 + 0x3a0) = iVar1 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar3);
        }
        else {
          if (*(longlong *)(lVar8 + 8) == 0) {
LAB_141567cab:
            bVar2 = true;
          }
          else {
            lVar6 = FWeakObjectPtr::Get(lVar8,1);
            if (lVar6 == 0) goto LAB_141567cab;
            bVar2 = false;
          }
          if (bVar2) goto LAB_141567cb3;
        }
        lVar11 = lVar11 + -0x10;
        lVar10 = lVar10 + -0x10;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
      lVar4 = *(longlong *)(param_1 + 0x6f0);
    }
    FUN_141f66f00(lVar4);
    FUN_141f587d0(*(undefined8 *)(param_1 + 0x6f0),0);
    *(undefined8 *)(param_1 + 0x6f0) = 0;
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0x6f8),0,1);
  }
  FUN_141580830(param_1 + 0x700);
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar4 != 0) {
    lVar11 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = FUN_140cff230(lVar4);
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x230) == '\0')) {
        *(undefined1 *)(lVar4 + 0x230) = 1;
        *(undefined1 *)(lVar4 + 0x28) = 1;
        FUN_14172cc40(lVar4,1);
      }
    }
  }
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 141567df0 FUN_141567df0 body=666 status=ok
// SIG undefined FUN_141567df0(void)

void FUN_141567df0(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  switch(*(char *)(param_1 + 0x6c0)) {
  case '\x01':
    if (*(char *)(param_1 + 0x6c0) == '\x01') {
      *(undefined1 *)(param_1 + 0x6c0) = 2;
      cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x808);
      if (cVar4 != '\0') {
        FWeakObjectPtr::operator=(&local_res8,param_1);
        local_38 = 0;
        local_30 = 0;
        puVar5 = (undefined8 *)operator_new(0x28,&local_38);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &PTR_GetPoolName_144c7e0a0;
          puVar5[1] = param_1;
          *(undefined4 *)(puVar5 + 2) = local_res8;
          *(undefined4 *)((longlong)puVar5 + 0x14) = local_resc;
          uVar6 = FDelegateHandle::GenerateNewID();
          puVar5[4] = uVar6;
          *puVar5 = &PTR_GetPoolName_144c7e0e8;
        }
        uVar6 = FWeakObjectPtr::Get(param_1 + 0x808);
        FUN_14155cfc0(uVar6,&local_38,5);
      }
    }
    break;
  case '\x02':
  case '\a':
    break;
  case '\x03':
    if (*(char *)(param_1 + 0x621) != '\0') {
      FUN_141559860(param_1);
    }
    break;
  case '\x04':
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x810);
    if ((cVar4 != '\0') &&
       (lVar7 = FWeakObjectPtr::Get(param_1 + 0x810), *(longlong *)(lVar7 + 0x38) != 0)) {
      FUN_141587b30();
    }
    *(undefined1 *)(param_1 + 0x6c0) = 5;
    FUN_142ecd4d0(param_1);
    *(undefined1 *)(param_1 + 0x828) = 1;
    *(undefined4 *)(param_1 + 0x824) = 0x41200000;
    FUN_14157fb10(param_1);
    break;
  case '\x05':
    if ((*(char *)(param_1 + 0x82b) == '\0') && (lVar7 = *(longlong *)(param_1 + 0x6d8), lVar7 != 0)
       ) {
      if (*(int *)(lVar7 + 0x54) == 0) {
        FUN_14157c660(lVar7);
      }
      else if (*(int *)(lVar7 + 0x54) == 2) {
        TBaseDelegate<void>::ExecuteIfBound(lVar7 + 0x28);
        *(undefined4 *)(lVar7 + 0x54) = 3;
      }
      FUN_140ad4c90(param_1,&local_48);
      if (local_48 != 0) {
        FUN_142033230();
      }
      plVar8 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    break;
  case '\x06':
  case '\b':
    if (*(longlong *)(param_1 + 0x6d0) != 0) {
      FUN_141575850();
    }
    break;
  default:
    goto switchD_141567e32_default;
  }
switchD_141567e32_default:
  if (*(char *)(param_1 + 0x828) != '\0') {
    *(float *)(param_1 + 0x824) = *(float *)(param_1 + 0x824) - param_2;
    FUN_14157fb10(param_1);
    if (*(float *)(param_1 + 0x824) <= 0.0) {
      FUN_142ed3c20(*(undefined8 *)(param_1 + 0x7a0),0,1);
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0x7a0) + 0x170);
      (**(code **)(*plVar8 + 0x38))(plVar8,1);
      *(undefined1 *)(param_1 + 0x828) = 0;
    }
  }
  return;
}



// FUNCTION 1415680b0 FUN_1415680b0 body=848 status=ok
// SIG undefined FUN_1415680b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415680b0(longlong *param_1,float param_2)

{
  PSRWLOCK SRWLock;
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong uStack_90;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  cVar1 = (char)param_1[0xd4];
  switch(cVar1) {
  case '\0':
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xd4) = 1;
      local_98 = (code *)0x0;
      uStack_90 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468a68f0,&local_98);
      if (param_1[0xe7] != 0) {
        local_98 = (code *)0x0;
        uStack_90 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        FGenericPlatformString::Memcpy(local_98,&DAT_144c76c44,6);
        lVar3 = param_1[0xe7];
        goto LAB_141568296;
      }
    }
    break;
  case '\x01':
  case '\x03':
  case '\x05':
  case '\a':
    break;
  case '\x02':
    if (cVar1 == '\x02') {
      *(undefined1 *)(param_1 + 0xd4) = 3;
      FWeakObjectPtr::operator=(&local_98,param_1);
      local_58 = (longlong *)0x0;
      local_48 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_78);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444f8920;
        puVar2[1] = param_1;
        *(undefined4 *)(puVar2 + 2) = (undefined4)local_98;
        *(undefined4 *)((longlong)puVar2 + 0x14) = local_98._4_4_;
      }
      local_88[0] = &LAB_141558aa0;
      FUN_14208c260(param_1,local_88);
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
    }
    break;
  case '\x04':
    if ((cVar1 == '\x04') && (*(undefined1 *)(param_1 + 0xd4) = 5, param_1[0xea] != 0)) {
      uStack_90 = 3;
      local_98 = (code *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      FGenericPlatformString::Memcpy(local_98,&DAT_144c777b4,6);
      lVar3 = param_1[0xea];
LAB_141568296:
      FUN_142088910(lVar3,&local_98);
      if (local_98 != (code *)0x0) {
        FMemory::Free();
      }
    }
    break;
  case '\x06':
    if (cVar1 == '\x06') {
      *(undefined1 *)(param_1 + 0xd4) = 7;
      local_98 = (code *)0x0;
      uStack_90 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      FGenericPlatformString::Memcpy(local_98,L"show1",0xc);
      if (param_1[0xe8] != 0) {
        *(undefined1 *)(param_1 + 0x111) = 1;
        FUN_142088910(param_1[0xe8],&local_98);
      }
      if (local_98 != (code *)0x0) {
        FMemory::Free();
      }
      local_98 = (code *)0x0;
      uStack_90 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468a68f8,&local_98);
      if (param_1[0x103] != 0) {
        local_98 = FUN_14156c560;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        FUN_14157e730(param_1,&local_98,*(undefined4 *)(param_1[0x103] + 0x7c));
      }
    }
    break;
  case '\b':
  case '\t':
    SRWLock = (PSRWLOCK)(param_1 + 0x109);
    AcquireSRWLockShared(SRWLock);
    cVar1 = *(char *)((longlong)param_1 + 0x865);
    ReleaseSRWLockShared(SRWLock);
    if (cVar1 != '\0') {
      AcquireSRWLockExclusive(SRWLock);
      if (*(char *)((longlong)param_1 + 0x864) == '\0') {
        param_2 = *(float *)(param_1 + 0x10c) - param_2;
        *(float *)(param_1 + 0x10c) = param_2;
        *(bool *)((longlong)param_1 + 0x864) = param_2 < 1e-08;
        if (param_2 < 1e-08) {
          *(undefined1 *)((longlong)param_1 + 0x865) = 0;
          TBaseDelegate<void>::ExecuteIfBound(param_1 + 0x10a);
        }
      }
      ReleaseSRWLockExclusive(SRWLock);
    }
    break;
  default:
    goto switchD_14156810a_default;
  }
switchD_14156810a_default:
  return;
}



// FUNCTION 141568430 FUN_141568430 body=61 status=ok
// SIG undefined FUN_141568430(void)

void FUN_141568430(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  FName::FName(local_res8,L"Help",1);
  (**(code **)(*param_1 + 0x570))(param_1,local_res8,1,0);
  return;
}



// FUNCTION 141568470 FUN_141568470 body=101 status=ok
// SIG undefined FUN_141568470(void)

void FUN_141568470(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_res8 [8];
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar3 != '\0') {
    FName::FName(local_res8,L"Help",1);
    uVar1 = FUN_142eb6ed0(param_1,local_res8);
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x59c);
    FUN_142f02280(uVar2,uVar1);
  }
  return;
}



// FUNCTION 1415684e0 FUN_1415684e0 body=265 status=ok
// SIG undefined FUN_1415684e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415684e0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468a68e0,&local_78);
  FWeakObjectPtr::operator=(&local_78,param_1);
  uVar1 = (undefined4)local_78;
  uVar2 = local_78._4_4_;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8920;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uVar2;
  }
  local_68[0] = &LAB_141558a60;
  FUN_14208c260(param_1,local_68);
  if (local_28 != 0) {
    plVar4 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar4 = local_38;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415685f0 FUN_1415685f0 body=975 status=ok
// SIG undefined FUN_1415685f0(void)

void FUN_1415685f0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_1415689c0();
  local_10 = 0xc;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"boosterName",0x18);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 800) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"boosterDescription",0x26);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x328) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"boosterUnlocked",0x20);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x330) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"boosterCost",0x18);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x338) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"boosterPicture",0x1e);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x340) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"boosterTimer",0x1a);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x348) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415689c0 FUN_1415689c0 body=457 status=ok
// SIG undefined FUN_1415689c0(void)

void FUN_1415689c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_res10;
  longlong *local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  FUN_142ec5080();
  local_20 = 10;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"hintGlyph",0x14);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar6 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_38);
  *(undefined8 *)(param_1 + 0x308) = uVar6;
  plVar9 = local_38;
  for (iVar10 = (int)local_30; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar7 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxCSButton::OnInputDeviceChanged",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res10,pwVar4 + 2,1);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = local_res10;
      if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_30);
      }
      FUN_1406a5aa0(lVar1 + 0x560,&local_38);
      uVar5 = FUN_142eb62a0(lVar1);
      FUN_14156b520(param_1,uVar5);
    }
  }
  return;
}



// FUNCTION 141568b90 FUN_141568b90 body=36 status=ok
// SIG undefined FUN_141568b90(void)

void FUN_141568b90(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  FUN_1415698c0();
  FUN_14157b1a0(param_1,0);
  return;
}



// FUNCTION 141568be0 FUN_141568be0 body=1640 status=ok
// SIG undefined FUN_141568be0(void)

void FUN_141568be0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_1415689c0();
  local_170 = 9;
  local_178 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  FGenericPlatformString::Memcpy(local_178,L"numLevel",0x12);
  local_188 = (longlong *)0x0;
  local_180 = 0;
  uVar3 = FUN_140ecc7d0(param_1,&local_178,0,6,&local_188);
  *(undefined8 *)(param_1 + 0x318) = uVar3;
  plVar5 = local_188;
  for (iVar4 = (int)local_180; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  local_158 = 0;
  local_150 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
  FGenericPlatformString::Memcpy(local_158,L"characterName",0x1c);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  uVar3 = FUN_140ecc7d0(param_1,&local_158,0,6,&local_168);
  *(undefined8 *)(param_1 + 800) = uVar3;
  plVar5 = local_168;
  for (iVar4 = (int)local_160; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  local_138 = 0;
  local_130 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"levelDifficulty",0x20);
  local_148 = (longlong *)0x0;
  local_140 = 0;
  uVar3 = FUN_140ecc7d0(param_1,&local_138,0,6,&local_148);
  *(undefined8 *)(param_1 + 0x328) = uVar3;
  plVar5 = local_148;
  for (iVar4 = (int)local_140; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free(local_148);
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  local_118 = 0;
  local_110 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"puzzleCompletedNum",0x26);
  local_128 = (longlong *)0x0;
  local_120 = 0;
  uVar3 = FUN_140ecc7d0(param_1,&local_118,0,6,&local_128);
  *(undefined8 *)(param_1 + 0x330) = uVar3;
  plVar5 = local_128;
  for (iVar4 = (int)local_120; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  local_f8 = 0;
  local_f0 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  FGenericPlatformString::Memcpy(local_f8,L"characterPicture",0x22);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  local_68 = 0;
  uVar3 = FUN_140ecbdf0(param_1,&local_f8,0,6,&local_108);
  *(undefined8 *)(param_1 + 0x338) = uVar3;
  plVar5 = local_108;
  for (iVar4 = (int)local_100; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  local_d8 = 0;
  local_d0 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"meter",0xc);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_60 = 0;
  uVar3 = FUN_14154ee60(param_1,&local_d8,0,6,&local_e8);
  *(undefined8 *)(param_1 + 0x340) = uVar3;
  plVar5 = local_e8;
  for (iVar4 = (int)local_e0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  local_b8 = 0;
  local_b0 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"PNL_Reward",0x16);
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  local_58 = 0;
  uVar3 = FUN_140ecbdf0(param_1,&local_b8,0,6,&local_c8);
  *(undefined8 *)(param_1 + 0x348) = uVar3;
  plVar5 = local_c8;
  for (iVar4 = (int)local_c0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x348) != 0) {
    local_98 = 0;
    local_90 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"TXT_Reward",0x16);
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    local_50 = 0;
    uVar3 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x348),&local_98,0,6,&local_a8);
    *(undefined8 *)(param_1 + 0x350) = uVar3;
    plVar5 = local_a8;
    for (iVar4 = (int)local_a0; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    if (*(longlong **)(param_1 + 0x350) != (longlong *)0x0) {
      lVar2 = **(longlong **)(param_1 + 0x350);
      uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_48,L"REWARD",L"GFxCSLevelSelectorMenu",L"RewardText");
      (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x350),uVar3,1,0);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    local_78 = 0;
    local_70 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"CONT_Reward",0x18);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    uVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x348),&local_78,0,6,&local_88);
    *(undefined8 *)(param_1 + 0x358) = uVar3;
    plVar5 = local_88;
    for (iVar4 = (int)local_80; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141569250 FUN_141569250 body=399 status=ok
// SIG undefined FUN_141569250(void)

void FUN_141569250(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  double dVar4;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 8;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"barMask",0x10);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    dVar4 = (double)FUN_142eeea40();
    *(float *)(param_1 + 0x180) = (float)dVar4;
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"PNL_Marker",0x16);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415693e0 FUN_1415693e0 body=730 status=ok
// SIG undefined FUN_1415693e0(void)

void FUN_1415693e0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong **pplVar7;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 0xc;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"puzzleGuide",0x18);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_14154f840(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x188) = uVar1;
  plVar2 = local_28;
  for (iVar6 = (int)local_20; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"puzzleGrid",0x16);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_14154f4a0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  plVar2 = local_18;
  for (iVar6 = (int)local_10; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"puzzleTokenPool",0x20);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_141550320(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 400) = uVar1;
  plVar2 = local_18;
  for (iVar6 = (int)local_10; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar5 = *(longlong *)(param_1 + 0x180);
  if (lVar5 != 0) {
    pplVar7 = (longlong **)(lVar5 + 0x170);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      plVar2[2] = (longlong)FUN_14156cde0;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f4d2d8;
    }
    if (&local_18 != pplVar7) {
      if (plVar2 == (longlong *)0x0) {
        if ((*(int *)(lVar5 + 0x178) != 0) && (plVar4 = *pplVar7, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*pplVar7 != (longlong *)0x0) {
            plVar4 = (longlong *)FMemory::Realloc(*pplVar7,0,0);
            *pplVar7 = plVar4;
          }
          *(undefined4 *)(lVar5 + 0x178) = 0;
        }
      }
      else {
        (**(code **)(*plVar2 + 0x30))(plVar2,pplVar7);
      }
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar5 = FMemory::Realloc(plVar2,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 1415696c0 FUN_1415696c0 body=506 status=ok
// SIG undefined FUN_1415696c0(void)

void FUN_1415696c0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  FUN_142ef9e70();
  uVar6 = 0;
  local_20 = 9;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"gridMask",0x12);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_38);
  *(undefined8 *)(param_1 + 0x1a8) = uVar1;
  plVar4 = local_38;
  for (iVar7 = (int)local_30; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_142f0bc30(param_1,*(longlong *)(param_1 + 0x1a8),0);
  }
  lVar2 = FUN_140eccb70(param_1);
  if (lVar2 != 0) {
    puVar3 = (ulonglong *)UListView::OnItemSelectionChanged(lVar2);
    plVar4 = (longlong *)*puVar3;
    uVar9 = (longlong)(int)puVar3[1] & 0x1fffffffffffffff;
    if (plVar4 + (int)puVar3[1] < plVar4) {
      uVar9 = uVar6;
    }
    uVar8 = uVar6;
    if (uVar9 != 0) {
      do {
        if (*plVar4 != 0) {
          FUN_1415574f0(param_1,*(undefined4 *)(*plVar4 + 0x108));
        }
        plVar4 = plVar4 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar9);
    }
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_144c7e400;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)&LAB_14155dd90;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar2;
    *plVar4 = (longlong)&PTR_FUN_144c7e448;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464aef50,1);
    puVar3 = (ulonglong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar7 = DAT_1464aef58;
    lVar2 = (longlong)DAT_1464aef58;
    uVar6 = *puVar3;
    DAT_1464aef58 = DAT_1464aef58 + 1;
    if (DAT_1464aef5c < DAT_1464aef58) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464aef50,iVar7);
    }
    puVar5 = (undefined8 *)(lVar2 * 0x10 + DAT_1464aef50);
    *puVar5 = plVar4;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  *(ulonglong *)(param_1 + 0x180) = uVar6;
  return;
}



// FUNCTION 1415698c0 FUN_1415698c0 body=2802 status=ok
// SIG undefined FUN_1415698c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415698c0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 auStack_308 [32];
  longlong **local_2e8;
  longlong *local_2d8;
  int local_2d0;
  longlong *local_2c8;
  int local_2c0;
  longlong *local_2b8;
  int local_2b0;
  longlong *local_2a8;
  int local_2a0;
  longlong *local_298;
  int local_290;
  int local_288;
  longlong local_280;
  longlong *local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined2 local_200 [2];
  undefined8 local_1fc;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined2 local_1c8 [2];
  undefined8 local_1c4;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined2 local_190 [2];
  undefined8 local_18c;
  longlong local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined2 local_158 [2];
  undefined8 local_154;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120 [3];
  undefined4 *local_108;
  ulonglong *puStack_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [16];
  undefined4 local_60 [2];
  longlong local_58;
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  FUN_142ef9e70();
  iVar12 = 0;
  local_260 = 0xb;
  local_268 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
  FGenericPlatformString::Memcpy(local_268,L"FB_Focused",0x16);
  local_2e8 = &local_278;
  local_278 = (longlong *)0x0;
  local_270 = 0;
  local_e8 = 0;
  lVar4 = FUN_140ecbdf0(param_1,&local_268,0,6);
  param_1[0x3b] = lVar4;
  plVar9 = local_278;
  for (iVar10 = (int)local_270; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_278 != (longlong *)0x0) {
    FMemory::Free(local_278);
  }
  if (local_268 != 0) {
    FMemory::Free();
  }
  if (param_1[0x3b] != 0) {
    local_1fc = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_200[0] = 2;
    local_258 = 0;
    local_250 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
    local_2e8 = (longlong **)CONCAT62(local_2e8._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_258,0xd,"mouseEnabled");
    FUN_14208f550(param_1[0x3b],&local_258,local_200);
    if (local_258 != 0) {
      FMemory::Free();
    }
    if (local_1e0 != 0) {
      FMemory::Free();
    }
    if (local_1f0 != 0) {
      FMemory::Free();
    }
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_1c8[0] = 2;
    local_248 = 0;
    local_240 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
    local_2e8 = (longlong **)CONCAT62(local_2e8._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_248,0xe,"mouseChildren");
    FUN_14208f550(param_1[0x3b],&local_248,local_1c8);
    if (local_248 != 0) {
      FMemory::Free();
    }
    if (local_1a8 != 0) {
      FMemory::Free();
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,(undefined4)local_d8);
  uStack_d0 = (ulonglong *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
  if ((lVar4 != 0) &&
     (lVar4 = *(longlong *)(lVar4 + 400),
     local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,(undefined4)local_d8),
     uStack_d0 = (ulonglong *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0), lVar4 != 0)) {
    lVar5 = FUN_142937720();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar4 = UGameInstance::GetGameViewportClient(lVar4);
      if (lVar4 != 0) {
        iVar10 = *(int *)(lVar4 + 0x78);
        plVar9 = param_1 + 0x3c;
        local_288 = iVar10;
        if (*(int *)((longlong)param_1 + 0x1ec) < iVar10) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar9,iVar10);
        }
        if (0 < iVar10) {
          local_208 = 0;
          local_280 = 1;
          do {
            iVar12 = iVar12 + 1;
            local_238 = (longlong *)0x0;
            local_230 = 0;
            FString::PrintfImpl(local_120,&DAT_144c6f610,iVar12);
            local_2e8 = &local_238;
            plVar6 = (longlong *)FUN_140ecc7d0(param_1,local_120,local_208,6);
            if (local_120[0] != 0) {
              FMemory::Free();
            }
            plVar11 = local_238;
            for (iVar10 = (int)local_230; iVar10 != 0; iVar10 = iVar10 + -1) {
              if (*plVar11 != 0) {
                FMemory::Free();
              }
              plVar11 = plVar11 + 2;
            }
            if (local_238 != (longlong *)0x0) {
              FMemory::Free(local_238);
            }
            if (plVar6 != (longlong *)0x0) {
              uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_88,L"P{0}",L"GFxCSPuzzleTile",L"PlayerIdText");
              puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_70,uVar7);
              local_60[0] = 0;
              local_58 = local_280;
              local_108 = local_60;
              puStack_100 = &local_30;
              local_f8 = *puVar8;
              local_f0 = puVar8[1];
              local_38 = '\0';
              if (local_f0 != 0) {
                LOCK();
                *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
                UNLOCK();
              }
              local_d8 = local_108;
              uStack_d0 = puStack_100;
              uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                      TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_d8);
              uVar7 = FText::Format(local_a0,&local_f8,uVar7);
              FText::FText(local_b8,uVar7);
              plVar11 = local_98;
              if (local_98 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_98 + 1;
                lVar4 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*local_98)(local_98);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar11 + 0xc);
                  iVar10 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar10 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11,1);
                  }
                }
              }
              TArray<FFormatArgumentValue,FDefaultAllocator>::
              ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8);
              plVar11 = local_48;
              if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
                LOCK();
                plVar1 = local_48 + 1;
                lVar4 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*local_48)(local_48);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar11 + 0xc);
                  iVar10 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar10 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11,1);
                  }
                }
              }
              plVar11 = (longlong *)puVar8[1];
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar11 + 1;
                lVar4 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*plVar11)(plVar11);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar11 + 0xc);
                  iVar10 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar10 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11,1);
                  }
                }
              }
              (**(code **)(*plVar6 + 0x2b0))(plVar6,local_b8,1,0);
              plVar11 = local_b0;
              if (local_b0 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_b0 + 1;
                lVar4 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*local_b0)(local_b0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar11 + 0xc);
                  iVar10 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar10 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11,1);
                  }
                }
              }
              plVar11 = local_80;
              if (local_80 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_80 + 1;
                lVar4 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*local_80)(local_80);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar11 + 0xc);
                  iVar10 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar10 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11,1);
                  }
                }
              }
              local_18c = 0;
              local_180 = 0;
              local_178 = 0;
              local_170 = 0;
              local_168 = 0;
              local_160 = 0;
              local_190[0] = 2;
              local_228 = 0;
              local_220 = 0xd;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
              local_2e8 = (longlong **)CONCAT62(local_2e8._2_6_,0x3f);
              FGenericPlatformString::Convert<char,wchar_t>(local_228,0xd,"mouseEnabled");
              FUN_14208f550(plVar6,&local_228,local_190);
              if (local_228 != 0) {
                FMemory::Free();
              }
              if (local_170 != 0) {
                FMemory::Free();
              }
              if (local_180 != 0) {
                FMemory::Free();
              }
              local_154 = 0;
              local_148 = 0;
              local_140 = 0;
              local_138 = 0;
              local_130 = 0;
              local_128 = 0;
              local_158[0] = 2;
              local_218 = 0;
              local_210 = 0xe;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
              local_2e8 = (longlong **)CONCAT62(local_2e8._2_6_,0x3f);
              FGenericPlatformString::Convert<char,wchar_t>(local_218,0xe,"mouseChildren");
              FUN_14208f550(plVar6,&local_218,local_158);
              if (local_218 != 0) {
                FMemory::Free();
              }
              if (local_138 != 0) {
                FMemory::Free();
              }
              if (local_148 != 0) {
                FMemory::Free();
              }
            }
            iVar10 = (int)param_1[0x3d];
            *(int *)(param_1 + 0x3d) = iVar10 + 1;
            if (*(int *)((longlong)param_1 + 0x1ec) < iVar10 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar10);
            }
            local_280 = local_280 + 1;
            *(longlong **)(*plVar9 + (longlong)iVar10 * 8) = plVar6;
          } while (iVar12 < local_288);
        }
      }
    }
  }
  if ((char)param_1[0x37] != '\0') {
    local_2d8 = (longlong *)0x0;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_2d0 = 3;
    local_2d8 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      plVar9[2] = (longlong)&LAB_14156c090;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar4;
      *plVar9 = (longlong)&PTR_FUN_143f4d2d8;
    }
    FUN_142ee1c00(param_1,PTR_s_mouseDown_1464a0f28,param_1 + 0x42,&local_2d8);
    if (local_2d0 == 0) {
LAB_14156a099:
      if (local_2d8 != (longlong *)0x0) {
        FMemory::Free(local_2d8);
      }
    }
    else if (local_2d8 != (longlong *)0x0) {
      (**(code **)(*local_2d8 + 0x28))(local_2d8,0);
      if (local_2d8 != (longlong *)0x0) {
        local_2d8 = (longlong *)FMemory::Realloc(local_2d8,0,0);
      }
      local_2d0 = 0;
      goto LAB_14156a099;
    }
    local_2c8 = (longlong *)0x0;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_2c0 = 3;
    local_2c8 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      plVar9[2] = (longlong)&LAB_14156c0e0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar4;
      *plVar9 = (longlong)&PTR_FUN_143f4d2d8;
    }
    FUN_142ee1c00(param_1,PTR_s_mouseUp_1464a0f40,param_1 + 0x43,&local_2c8);
    if (local_2c0 == 0) {
LAB_14156a14e:
      if (local_2c8 != (longlong *)0x0) {
        FMemory::Free(local_2c8);
      }
    }
    else if (local_2c8 != (longlong *)0x0) {
      (**(code **)(*local_2c8 + 0x28))(local_2c8,0);
      if (local_2c8 != (longlong *)0x0) {
        local_2c8 = (longlong *)FMemory::Realloc(local_2c8,0,0);
      }
      local_2c0 = 0;
      goto LAB_14156a14e;
    }
    local_2b8 = (longlong *)0x0;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_2b0 = 3;
    local_2b8 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      plVar9[2] = (longlong)&LAB_14156c070;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar4;
      *plVar9 = (longlong)&PTR_FUN_143f4d2d8;
    }
    FUN_142ee1c00(param_1,PTR_s_click_1464a0f20,param_1 + 0x41,&local_2b8);
    if (local_2b0 != 0) {
      if (local_2b8 == (longlong *)0x0) goto LAB_14156a210;
      (**(code **)(*local_2b8 + 0x28))(local_2b8,0);
      if (local_2b8 != (longlong *)0x0) {
        local_2b8 = (longlong *)FMemory::Realloc(local_2b8,0,0);
      }
      local_2b0 = 0;
    }
    if (local_2b8 != (longlong *)0x0) {
      FMemory::Free(local_2b8);
    }
  }
LAB_14156a210:
  if (*(char *)((longlong)param_1 + 0x1b9) == '\0') {
    return;
  }
  local_2a8 = (longlong *)0x0;
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_2a0 = 3;
  local_2a8 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    plVar9[2] = (longlong)&LAB_14156c0c0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar9[4] = lVar4;
    *plVar9 = (longlong)&PTR_FUN_143f4d2d8;
  }
  FUN_142ee1c00(param_1,PTR_s_rollOver_1464a0f38,param_1 + 0x3f,&local_2a8);
  if (local_2a0 != 0) {
    if (local_2a8 == (longlong *)0x0) goto LAB_14156a2d2;
    (**(code **)(*local_2a8 + 0x28))(local_2a8,0);
    if (local_2a8 != (longlong *)0x0) {
      local_2a8 = (longlong *)FMemory::Realloc(local_2a8,0,0);
    }
    local_2a0 = 0;
  }
  if (local_2a8 != (longlong *)0x0) {
    FMemory::Free(local_2a8);
  }
LAB_14156a2d2:
  local_298 = (longlong *)0x0;
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_290 = 3;
  local_298 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    plVar9[2] = (longlong)&LAB_14156c0d0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar9[4] = lVar4;
    *plVar9 = (longlong)&PTR_FUN_143f4d2d8;
  }
  FUN_142ee1c00(param_1,PTR_s_rollOut_1464a0f30,param_1 + 0x40,&local_298);
  if (local_290 != 0) {
    if (local_298 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_298 + 0x28))(local_298,0);
    if (local_298 != (longlong *)0x0) {
      local_298 = (longlong *)FMemory::Realloc(local_298,0,0);
    }
    local_290 = 0;
  }
  if (local_298 != (longlong *)0x0) {
    FMemory::Free(local_298);
  }
  return;
}



// FUNCTION 14156a3c0 FUN_14156a3c0 body=367 status=ok
// SIG undefined FUN_14156a3c0(void)

void FUN_14156a3c0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 6;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"label",0xc);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"value",0xc);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14156a530 FUN_14156a530 body=2390 status=ok
// SIG undefined FUN_14156a530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14156a530(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined1 auStack_2c8 [32];
  longlong **local_2a8;
  int local_298;
  longlong local_290;
  longlong *local_288;
  longlong *local_280;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  longlong *local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong local_230;
  undefined8 local_228;
  longlong *local_220;
  undefined8 local_218;
  longlong local_210;
  undefined8 local_208;
  longlong *local_200;
  undefined8 local_1f8;
  undefined2 *local_1f0;
  int local_1e8;
  longlong local_1e0 [2];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  longlong *local_188;
  undefined1 *local_178 [2];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined1 *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 local_d8 [16];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  FUN_142ef9e70();
  plVar9 = (longlong *)(param_1 + 0x178);
  iVar11 = *(int *)(param_1 + 0x180);
  *(int *)(param_1 + 0x180) = iVar11 + 1;
  if (*(int *)(param_1 + 0x184) < iVar11 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar11);
  }
  *(undefined4 *)(*plVar9 + (longlong)iVar11 * 4) = 0x44a64000;
  iVar11 = *(int *)(param_1 + 0x180);
  *(int *)(param_1 + 0x180) = iVar11 + 1;
  if (*(int *)(param_1 + 0x184) < iVar11 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar11);
  }
  *(undefined4 *)(*plVar9 + (longlong)iVar11 * 4) = 0x448f1b33;
  iVar11 = *(int *)(param_1 + 0x180);
  *(int *)(param_1 + 0x180) = iVar11 + 1;
  if (*(int *)(param_1 + 0x184) < iVar11 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar11);
  }
  *(undefined4 *)(*plVar9 + (longlong)iVar11 * 4) = 0x446d3333;
  iVar11 = *(int *)(param_1 + 0x180);
  *(int *)(param_1 + 0x180) = iVar11 + 1;
  if (*(int *)(param_1 + 0x184) < iVar11 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar11);
  }
  *(undefined4 *)(*plVar9 + (longlong)iVar11 * 4) = 0x443bb000;
  iVar11 = *(int *)(param_1 + 0x180);
  *(int *)(param_1 + 0x180) = iVar11 + 1;
  if (*(int *)(param_1 + 0x184) < iVar11 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar11);
  }
  *(undefined4 *)(*plVar9 + (longlong)iVar11 * 4) = 0x440a2666;
  lVar7 = *(longlong *)(param_1 + 0x38);
  if (lVar7 == 0) goto LAB_14156a721;
  lVar5 = UInputKeySelector::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_14156a721;
  uVar6 = FUN_140e971d0(lVar7);
  FWeakObjectPtr::operator=(param_1 + 0x188,uVar6);
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x188);
  if (cVar4 == '\0') goto LAB_14156a721;
  uVar6 = FWeakObjectPtr::Get(param_1 + 0x188);
  uVar6 = FUN_140cff230(uVar6);
  FWeakObjectPtr::operator=(param_1 + 400,uVar6);
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x188);
  lVar7 = (**(code **)(*(longlong *)(lVar7 + 0x980) + 0x10))();
  if (lVar7 == 0) {
LAB_14156a70f:
    lVar7 = 0;
  }
  else {
    lVar5 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14156a70f;
  }
  FWeakObjectPtr::operator=(param_1 + 0x198,lVar7);
LAB_14156a721:
  local_270 = 0;
  local_268 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270,0);
  FGenericPlatformString::Memcpy(local_270,L"subtitleField",0x1c);
  local_2a8 = &local_280;
  local_280 = (longlong *)0x0;
  local_278 = 0;
  local_1d0 = 0;
  uVar6 = FUN_140ecc7d0(param_1,&local_270,0,6);
  *(undefined8 *)(param_1 + 0x1a0) = uVar6;
  plVar9 = local_280;
  for (iVar11 = (int)local_278; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_280 != (longlong *)0x0) {
    FMemory::Free(local_280);
  }
  if (local_270 != 0) {
    FMemory::Free();
  }
  plVar9 = *(longlong **)(param_1 + 0x1a0);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x278))(plVar9,0);
    FUN_142f0de70(*(undefined8 *)(param_1 + 0x1a0),PTR_DAT_1464a0f48);
  }
  local_250 = 0;
  local_248 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0);
  FGenericPlatformString::Memcpy(local_250,L"subtitleBGAdjustable",0x2a);
  local_2a8 = &local_260;
  local_260 = (longlong *)0x0;
  local_258 = 0;
  local_1c8 = 0;
  uVar6 = FUN_140ecbdf0(param_1,&local_250,0,6);
  *(undefined8 *)(param_1 + 0x1a8) = uVar6;
  plVar9 = local_260;
  for (iVar11 = (int)local_258; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_260 != (longlong *)0x0) {
    FMemory::Free(local_260);
  }
  if (local_250 != 0) {
    FMemory::Free();
  }
  plVar9 = *(longlong **)(param_1 + 0x1a8);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x278))(plVar9,0);
  }
  local_230 = 0;
  local_228 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_230,0);
  FGenericPlatformString::Memcpy(local_230,L"closedCaptioning",0x22);
  local_2a8 = &local_240;
  local_240 = (longlong *)0x0;
  local_238 = 0;
  local_1c0 = 0;
  uVar6 = FUN_140ecbdf0(param_1,&local_230,0,6);
  *(undefined8 *)(param_1 + 0x1b8) = uVar6;
  plVar9 = local_240;
  for (iVar11 = (int)local_238; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_240 != (longlong *)0x0) {
    FMemory::Free(local_240);
  }
  if (local_230 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    local_298 = 0;
    local_210 = 0;
    local_208 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,0);
    FGenericPlatformString::Memcpy(local_210,L"line0",0xc);
    local_2a8 = &local_220;
    local_220 = (longlong *)0x0;
    local_218 = 0;
    local_1b8 = 0;
    plVar8 = (longlong *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x1b8),&local_210,0,6);
    plVar9 = local_220;
    for (iVar11 = (int)local_218; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_220 != (longlong *)0x0) {
      FMemory::Free(local_220);
    }
    if (local_210 != 0) {
      FMemory::Free();
    }
    FUN_142085870(*(undefined8 *)(param_1 + 0x1b8),&local_290,L"lineBackground0");
    while ((plVar8 != (longlong *)0x0 && (local_290 != 0))) {
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x278))(plVar8,0);
        FUN_142056670(local_290,0);
      }
      plVar9 = local_288;
      lVar7 = local_290;
      if (local_288 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_288 + 1) = (int)local_288[1] + 1;
        UNLOCK();
      }
      local_188 = (longlong *)0x0;
      if (local_288 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_288 + 0xc) = *(int *)((longlong)local_288 + 0xc) + 1;
        UNLOCK();
        local_188 = local_288;
        LOCK();
        plVar1 = local_288 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_288)(local_288);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      iVar11 = *(int *)(param_1 + 0x1c8);
      *(int *)(param_1 + 0x1c8) = iVar11 + 1;
      if (*(int *)(param_1 + 0x1cc) < iVar11 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_1 + 0x1c0,iVar11);
      }
      local_200 = (longlong *)0x0;
      puVar10 = (undefined8 *)((longlong)iVar11 * 0x20 + *(longlong *)(param_1 + 0x1c0));
      local_1f8 = 0;
      local_1b0 = 0;
      *puVar10 = plVar8;
      puVar10[1] = lVar7;
      puVar10[2] = local_188;
      iVar11 = local_298 + 1;
      *(undefined4 *)(puVar10 + 3) = 0xbf800000;
      local_298 = iVar11;
      FString::PrintfImpl(local_1e0,L"line%i",iVar11);
      local_2a8 = &local_200;
      plVar8 = (longlong *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x1b8),local_1e0,0,6);
      if (local_1e0[0] != 0) {
        FMemory::Free();
      }
      plVar9 = local_200;
      for (iVar12 = (int)local_1f8; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_200 != (longlong *)0x0) {
        FMemory::Free(local_200);
      }
      FString::PrintfImpl(&local_1f0,L"lineBackground%i",iVar11);
      puVar13 = &DAT_143f3eda8;
      if (local_1e8 != 0) {
        puVar13 = local_1f0;
      }
      plVar9 = (longlong *)FUN_142085870(*(undefined8 *)(param_1 + 0x1b8),local_1a8,puVar13);
      if (&local_290 != plVar9) {
        local_290 = *plVar9;
        *plVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_288);
      }
      plVar9 = local_1a0;
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1a0 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
      if (local_1f0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (local_288 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_288 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_288)(local_288);
        LOCK();
        piVar2 = (int *)((longlong)local_288 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_288 + 8))(local_288,1);
        }
      }
    }
  }
  FUN_14156d0e0(param_1);
  local_148 = (longlong *)0x0;
  local_138 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_168);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = param_1;
    *puVar10 = &PTR_FUN_143f77b70;
  }
  local_178[0] = &LAB_141558a80;
  uVar6 = FUN_1420849a0(param_1,local_d8,local_178);
  FUN_14208c300(param_1,uVar6);
  if (local_98 != 0) {
    plVar9 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar9 = local_a8;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_138 != 0) {
    plVar9 = local_168;
    if (local_148 != (longlong *)0x0) {
      plVar9 = local_148;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142f10940(param_1,1);
  local_f8 = (longlong *)0x0;
  local_e8 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_118);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = param_1;
    *puVar10 = &PTR_FUN_143f77b70;
  }
  local_128[0] = &LAB_141558b30;
  uVar6 = FUN_1420849a0(param_1,local_88,local_128);
  FUN_14208c300(param_1,uVar6);
  if (local_48 != 0) {
    plVar9 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar9 = local_58;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_e8 != 0) {
    plVar9 = local_118;
    if (local_f8 != (longlong *)0x0) {
      plVar9 = local_f8;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14156ae90 FUN_14156ae90 body=228 status=ok
// SIG undefined FUN_14156ae90(void)

void FUN_14156ae90(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 10;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"tokenMask",0x14);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  plVar2 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_142f0bc30(param_1,*(longlong *)(param_1 + 0x170),500);
  }
  return;
}



// FUNCTION 14156af80 FUN_14156af80 body=46 status=ok
// SIG undefined FUN_14156af80(void)

void FUN_14156af80(longlong param_1)

{
  FUN_1415698c0();
  *(undefined1 *)(param_1 + 0x1bb) = 1;
  FUN_14157b1a0(param_1,0x10);
  FUN_14155a500(param_1,0);
  return;
}



// FUNCTION 14156afb0 FUN_14156afb0 body=483 status=ok
// SIG undefined FUN_14156afb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_14156afb0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_168 [32];
  longlong local_148 [32];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_40 = 1;
  local_48 = (longlong *)0x0;
  FUN_14157a330(local_148,0);
  plVar7 = local_148;
  if (local_48 != (longlong *)0x0) {
    plVar7 = local_48;
  }
  *plVar7 = *(longlong *)(param_1 + 0x200);
  lVar9 = (longlong)(int)local_40;
  iVar5 = (int)local_40 + 1;
  if (local_40._4_4_ < iVar5) {
    uVar8 = local_40 & 0xffffffff;
    local_40._0_4_ = iVar5;
    FUN_14157a330(local_148,uVar8);
    iVar5 = (int)local_40;
  }
  local_40._0_4_ = iVar5;
  plVar7 = local_148;
  if (local_48 != (longlong *)0x0) {
    plVar7 = local_48;
  }
  plVar7[lVar9] = *(longlong *)(param_1 + 0x208);
  lVar9 = FWeakObjectPtr::Get(param_1 + 0x1a8);
  if (lVar9 != 0) {
    lVar6 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar5 = *(int *)(lVar9 + 0x690);
      if (iVar5 != 0) {
        if (local_40._4_4_ < (int)local_40 + iVar5) {
          TArray<FSkeletalMeshSkinningData_*,TInlineAllocator<32,TSizedDefaultAllocator<32>_>_>::
          ResizeTo(local_148,(int)local_40 + iVar5);
        }
        plVar7 = local_148;
        if (local_48 != (longlong *)0x0) {
          plVar7 = local_48;
        }
        _guard_xfg_dispatch_icall_nop
                  (plVar7 + (int)local_40,*(void **)(lVar9 + 0x688),(longlong)iVar5 << 3);
        local_40._0_4_ = (int)local_40 + iVar5;
      }
    }
  }
  plVar7 = local_148;
  if (local_48 != (longlong *)0x0) {
    plVar7 = local_48;
  }
  plVar1 = plVar7 + (int)local_40;
  do {
    if (plVar7 == plVar1) {
      uVar4 = FUN_142ec6030(param_1,param_2);
LAB_14156b15b:
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      return uVar4;
    }
    lVar9 = *plVar7;
    if (((lVar9 != 0) && (*(longlong *)(lVar9 + 0x310) != DAT_146b3e2a0)) &&
       (cVar3 = (**(code **)(*(longlong *)(lVar9 + 0x170) + 0x20))
                          ((longlong *)(lVar9 + 0x170),param_2), cVar3 != '\0')) {
      uVar4 = 1;
      goto LAB_14156b15b;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 14156b1a0 FUN_14156b1a0 body=241 status=ok
// SIG undefined FUN_14156b1a0(void)

undefined1 FUN_14156b1a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x2c9) != '\0') &&
     (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xb4), cVar1 != '\0')) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0xb4);
    lVar3 = FUN_14270bb10(uVar2);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x108) != (int)param_2[1])) {
      return 1;
    }
  }
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
    FUN_142ebe4a0(param_1 + -0x4d8);
  }
  cVar1 = FUN_142eb62a0(param_1 + -0x4d8);
  if ((cVar1 == '\x01') && (*(char *)((longlong)param_2 + 0xc) == '\0')) {
    if (DAT_1468a6548 == *param_2) {
      FUN_14157fbc0(param_1 + -0x4d8,1);
      return 1;
    }
    if (DAT_1468a6540 == *param_2) {
      FUN_14157fbc0(param_1 + -0x4d8,2);
      return 1;
    }
  }
  cVar1 = FUN_142ec6030(param_1,param_2);
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}



// FUNCTION 14156b2a0 FUN_14156b2a0 body=409 status=ok
// SIG undefined FUN_14156b2a0(void)

undefined8 FUN_14156b2a0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x352) != '\0') {
    return 1;
  }
  if (*(char *)(param_1 + 0x1e8) != '\a') {
    if (*(char *)(param_1 + 0x1e8) != '\b') {
      return 1;
    }
    cVar2 = *(char *)((longlong)param_2 + 0xc);
    if ((cVar2 == '\0') && (DAT_1468a64b8 == *param_2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      if ((cVar2 == '\0') && (DAT_1468a64c0 == *param_2)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        if ((cVar2 == '\0') && (DAT_1468a64c8 == *param_2)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          if ((cVar2 == '\0') && (DAT_1468a64d0 == *param_2)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) {
            return 1;
          }
        }
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x208) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x180) != 0)) &&
     (cVar2 = FUN_14155df90(), cVar2 != '\0')) {
    return 1;
  }
  if ((*(char *)(param_1 + 0x1c0) != '\0') &&
     (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xb4), cVar2 != '\0')) {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0xb4);
    lVar4 = FUN_14270bb10(uVar3);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x108) != (int)param_2[1])) {
      return 1;
    }
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x1a8);
  if (lVar4 != 0) {
    lVar5 = FUN_1415833c0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = FUN_14156afb0(lVar4 + 0x4d8,param_2), cVar2 != '\0')) {
      return 1;
    }
  }
  uVar3 = FUN_142ec6340(param_1,param_2);
  return uVar3;
}



// FUNCTION 14156b440 FUN_14156b440 body=215 status=ok
// SIG undefined FUN_14156b440(void)

undefined8 FUN_14156b440(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(char *)(param_1 + 0x1c0) != '\0') &&
     (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xb4), cVar2 != '\0')) {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0xb4);
    lVar4 = FUN_14270bb10(uVar3);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x108) != *(int *)(param_2 + 8))) {
      return 1;
    }
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x1a8);
  if (lVar4 != 0) {
    lVar5 = FUN_1415833c0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = FUN_14156afb0(lVar4 + 0x4d8,param_2), cVar2 != '\0')) {
      return 1;
    }
  }
  uVar3 = FUN_142ec6340(param_1,param_2);
  return uVar3;
}



// FUNCTION 14156b520 FUN_14156b520 body=497 status=ok
// SIG undefined FUN_14156b520(void)

void FUN_14156b520(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar10 = *(longlong *)(param_1 + 0x38);
  if (lVar10 == 0) {
LAB_14156b575:
    lVar10 = 0;
  }
  else {
    lVar9 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14156b575;
  }
  if (*(longlong *)(param_1 + 0x308) == 0) {
    return;
  }
  if (lVar10 == 0) {
    return;
  }
  lVar10 = FWeakObjectPtr::Get(lVar10 + 0x58c);
  if (lVar10 == 0) {
    return;
  }
  lVar9 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
      != lVar9 + 0x88)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  lVar9 = **(longlong **)(param_1 + 0x308);
  uVar11 = FUN_142ef30e0(local_28,*(undefined8 *)(param_1 + 0x310),lVar10,0,0xbf800000,0);
  (**(code **)(lVar9 + 0x2b0))(*(undefined8 *)(param_1 + 0x308),uVar11,1,0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (param_2 == '\x01') {
    if (*(longlong *)(param_1 + 0x310) == DAT_146b3e2a0) {
      uVar7 = (**(code **)(*(longlong *)(param_1 + 0x170) + 0x10))();
      cVar8 = UNF_CustomizationStatics::IsWeaponType(uVar7);
      if (cVar8 == '\0') goto LAB_14156b69c;
    }
    uVar11 = 1;
  }
  else {
LAB_14156b69c:
    uVar11 = 0;
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x308) + 0x178);
  uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x308) + 0x170);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  FUN_142056670(uVar5,uVar11);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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



// FUNCTION 14156b720 FUN_14156b720 body=122 status=ok
// SIG undefined FUN_14156b720(void)

void FUN_14156b720(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  
  FUN_142ec64e0();
  cVar2 = FUN_142eb62a0(param_1 + -0x4d8);
  plVar1 = *(longlong **)(param_1 + 0x1a8);
  bVar3 = cVar2 == '\x01';
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x278))(plVar1,bVar3);
  }
  plVar1 = *(longlong **)(param_1 + 0x1b0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x278))(plVar1,bVar3);
  }
  if (!bVar3) {
    FUN_14157fbc0(param_1 + -0x4d8,1);
  }
  return;
}



// FUNCTION 14156b7a0 FUN_14156b7a0 body=200 status=ok
// SIG undefined FUN_14156b7a0(void)

undefined1 FUN_14156b7a0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  
  uVar5 = 0;
  if (*(char *)(param_1 + 0x228) == '\0') {
    piVar1 = (int *)(param_1 + 0x1c0);
    if ((((DAT_1468a6aa0 == *piVar1) && (DAT_1468a6aa4 != *(int *)(param_1 + 0x1c4))) &&
        (DAT_1468a6aa0 == *piVar1)) &&
       (uVar3 = DAT_1468a6aa4 - *(int *)(param_1 + 0x1c4), uVar4 = (int)uVar3 >> 0x1f,
       (uVar3 ^ uVar4) - uVar4 == 1)) {
      if (((((DAT_1468a64a0 & 0x10) != 0) && ((*(byte *)(param_1 + 0x1d0) & 0xf) != 0)) ||
          (((DAT_1468a64a0 & 0xf) != 0 && ((*(byte *)(param_1 + 0x1d0) & 0x10) != 0)))) &&
         ((DAT_1468a64a8 != 0 && (lVar2 = *(longlong *)(DAT_1468a64a8 + 0xa8), lVar2 != 0)))) {
        if (DAT_1468a64a0 == 0x10) {
          FUN_14155e550(lVar2,&DAT_1468a6aa0,piVar1);
          return 1;
        }
        FUN_14155e550(lVar2,piVar1,&DAT_1468a6aa0);
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}



// FUNCTION 14156b870 FUN_14156b870 body=392 status=ok
// SIG undefined FUN_14156b870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14156b870(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  if (param_2 != 0) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
    lVar3 = AGameModeBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = UChaosVehicleMovementComponent::GetUseAutoGears(param_2), cVar2 == '\0')
       ) {
      if (DAT_1468a64a8 != 0) {
        FUN_14157a830(DAT_1468a64a8,*(undefined4 *)(param_2 + 0x3c0));
      }
      FWeakObjectPtr::operator=(&local_88,param_1);
      local_48 = (longlong *)0x0;
      local_38 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_68);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_1444f8920;
        puVar4[1] = param_1;
        *(undefined4 *)(puVar4 + 2) = local_88;
        *(undefined4 *)((longlong)puVar4 + 0x14) = local_84;
      }
      local_78[0] = &LAB_141558a40;
      FUN_14208c260(param_1,local_78);
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
      FName::FName(&local_88,L"Puzzle",1);
      (**(code **)(*param_1 + 0x570))(param_1,&local_88,0,0);
    }
  }
  return;
}



// FUNCTION 14156ba00 FUN_14156ba00 body=242 status=ok
// SIG undefined FUN_14156ba00(void)

void FUN_14156ba00(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined **local_38 [2];
  longlong *local_28;
  longlong local_20;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x68);
  if (cVar5 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x68);
    lVar7 = FUN_14270bb10(uVar6);
    if (lVar7 != 0) {
      lVar7 = FUN_142547b50(lVar7,local_38);
      local_38[0] = &PTR_FUN_143f740c8;
      if (local_20 != 0) {
        FMemory::Free();
      }
      local_38[0] = &PTR_FUN_143f73d18;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
      if ((*(longlong *)(lVar7 + 8) != 0) &&
         (cVar5 = (*(code *)**(undefined8 **)*param_2)(), cVar5 != '\0')) {
        FUN_141576fc0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 14156bb20 FUN_14156bb20 body=111 status=ok
// SIG undefined FUN_14156bb20(void)

void FUN_14156bb20(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
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
      FUN_14145ff60(lVar2,0);
    }
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 14156bbb0 FUN_14156bbb0 body=53 status=ok
// SIG undefined FUN_14156bbb0(void)

void FUN_14156bbb0(longlong param_1,undefined4 param_2)

{
  FUN_142ec8c70();
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_141f67590(*(longlong *)(param_1 + 0x218),param_2);
  }
  return;
}



// FUNCTION 14156bc10 FUN_14156bc10 body=39 status=ok
// SIG undefined FUN_14156bc10(void)

void FUN_14156bc10(longlong param_1)

{
  FUN_14157aa00(param_1,0,0);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 400,param_1);
  return;
}



// FUNCTION 14156bc40 FUN_14156bc40 body=61 status=ok
// SIG undefined FUN_14156bc40(void)

void FUN_14156bc40(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  FName::FName(local_res8,L"MainMenu",1);
  (**(code **)(*param_1 + 0x570))(param_1,local_res8,1,0);
  return;
}



// FUNCTION 14156bc80 FUN_14156bc80 body=86 status=ok
// SIG undefined FUN_14156bc80(void)

void FUN_14156bc80(longlong *param_1,longlong *param_2)

{
  undefined1 local_res8 [8];
  
  FName::FName(local_res8,L"MainMenu",1);
  (**(code **)(*param_1 + 0x570))(param_1,local_res8,1,0);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14156bce0 FUN_14156bce0 body=900 status=ok
// SIG undefined FUN_14156bce0(void)

void FUN_14156bce0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar11;
  undefined8 uVar10;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [64];
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x58c);
  if (plVar7 != (longlong *)0x0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      local_res10 = FUN_142e71aa0();
      lVar8 = (**(code **)(*plVar7 + 0x628))(plVar7,local_res10);
      *(longlong *)(param_1 + 0x6e8) = lVar8;
      if ((lVar8 != 0) && (*(longlong *)(param_1 + 0x6a8) != 0)) {
        *(undefined4 *)(param_1 + 0x710) = 0;
        FUN_142d9e0d0(lVar8,*(undefined8 *)(param_1 + 0x6c8),0,0x4110000041800000,
                      CONCAT44(uVar11,*(undefined4 *)(param_1 + 0x6d0)),6,1,1,
                      *(undefined8 *)(param_1 + 0x6c0),0,1,0,0);
        uVar10 = *(undefined8 *)(param_1 + 0x6a8);
        FUN_142e725c0(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(param_1 + 0x6c8),
                      *(undefined8 *)(param_1 + 0x6c0),*(undefined8 *)(param_1 + 0x6b0),uVar10);
        uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),*(undefined4 *)(param_1 + 0x710));
        FUN_142e72560(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(param_1 + 0x6c8),
                      *(undefined8 *)(param_1 + 0x6c0),*(undefined8 *)(param_1 + 0x6b8),uVar10);
        uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
        FWeakObjectPtr::operator=(&local_res8,param_1);
        fVar3 = *(float *)(param_1 + 0x6d4);
        local_80 = local_res8;
        local_7c = local_resc;
        plVar7 = (longlong *)FUN_141580d60(local_78);
        *(double *)(*plVar7 + 8) = (double)fVar3;
        lVar9 = FUN_141551a10(plVar7,local_68,param_1 + 0x710,0x3f800000,CONCAT44(uVar11,1));
        lVar8 = *(longlong *)(lVar9 + 0x18);
        plVar7 = (longlong *)operator_new(0x28);
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plVar7 + 1) = 1;
          *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
          *plVar7 = (longlong)&PTR_FUN_144c7e5a0;
          plVar7[2] = (longlong)&PTR_FUN_144c7e510;
          plVar7[3] = param_1;
          *(undefined4 *)(plVar7 + 4) = local_res8;
          *(undefined4 *)((longlong)plVar7 + 0x24) = local_resc;
        }
        local_98 = plVar7 + 2;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        plVar5 = *(longlong **)(lVar8 + 0x38);
        local_90 = plVar7;
        if (*(longlong **)(lVar8 + 0x40) == plVar5) {
          FUN_141550e20(lVar8 + 0x30,plVar5,&local_98);
          plVar5 = local_90;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_90 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_90 + 8))();
              }
            }
          }
        }
        else {
          *plVar5 = (longlong)local_98;
          plVar5[1] = (longlong)plVar7;
          *(longlong *)(lVar8 + 0x38) = *(longlong *)(lVar8 + 0x38) + 0x10;
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar7 + 1;
          lVar8 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7);
            }
          }
        }
        std::shared_ptr<gte::ETManifoldMesh::Triangle>::operator=(param_1 + 0x700,lVar9 + 8);
        FUN_141552790(local_68);
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_70 + 1;
          lVar8 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)local_70 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_70 + 8))(local_70);
            }
          }
        }
        FUN_141580fb0(param_1 + 0x700);
      }
    }
  }
  return;
}



// FUNCTION 14156c0f0 FUN_14156c0f0 body=265 status=ok
// SIG undefined FUN_14156c0f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14156c0f0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468a68d8,&local_78);
  FWeakObjectPtr::operator=(&local_78,param_1);
  uVar1 = (undefined4)local_78;
  uVar2 = local_78._4_4_;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8920;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uVar2;
  }
  local_68[0] = &LAB_141558a20;
  FUN_14208c260(param_1,local_68);
  if (local_28 != 0) {
    plVar4 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar4 = local_38;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14156c200 FUN_14156c200 body=95 status=ok
// SIG undefined FUN_14156c200(void)

void FUN_14156c200(longlong param_1)

{
  code *local_18;
  undefined4 uStack_10;
  
  if (((*(char *)(param_1 + 0x6a0) == '\t') && (*(char *)(param_1 + 0x888) == '\0')) &&
     (*(char *)(param_1 + 0x889) == '\0')) {
    local_18 = FUN_141575fe0;
    uStack_10 = 0;
    FUN_141550ab0(param_1 + 0x848,param_1,&local_18,*(undefined4 *)(param_1 + 0x6a8));
  }
  return;
}



// FUNCTION 14156c260 FUN_14156c260 body=387 status=ok
// SIG undefined FUN_14156c260(void)

void FUN_14156c260(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_res20;
  
  lVar2 = DAT_1468a64a8;
  if (DAT_1468a64a8 != 0) {
    lVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
    if (lVar4 != 0) {
      lVar5 = FUN_14145f370();
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
        lVar5 = FUN_140cff230(lVar4);
        if ((lVar5 == 0) || (*(char *)(lVar5 + 0x231) == '\0')) {
          lVar4 = FUN_140cfc7b0(lVar4);
          if (lVar4 != 0) {
            lVar5 = FUN_1415825a0();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              FUN_14157a830(lVar2);
              iVar1 = *(int *)(lVar2 + 0x70);
              if ((*(longlong *)(lVar2 + 0xb0) == 0) ||
                 (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xb0) + 0x80), lVar2 == 0)) {
LAB_14156c37b:
                uVar7 = 0;
                local_res20 = 0;
              }
              else {
                if ((iVar1 < 0) || (*(int *)(lVar2 + 0x38) <= iVar1)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if ((!bVar3) ||
                   (puVar6 = (undefined8 *)((longlong)iVar1 * 0xe8 + *(longlong *)(lVar2 + 0x30)),
                   puVar6 == (undefined8 *)0x0)) goto LAB_14156c37b;
                uVar7 = *puVar6;
              }
              *(undefined8 *)(lVar4 + 0x4e8) = uVar7;
              FName::FName(&local_res20,L"Puzzle",1);
              uVar7 = 0;
              goto LAB_14156c3bf;
            }
          }
        }
      }
    }
  }
  FName::FName(&local_res20,L"LevelSelect",1);
  uVar7 = 1;
LAB_14156c3bf:
  (**(code **)(*param_1 + 0x570))(param_1,&local_res20,uVar7,0);
  return;
}



// FUNCTION 14156c3f0 FUN_14156c3f0 body=361 status=ok
// SIG undefined FUN_14156c3f0(void)

void FUN_14156c3f0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x824);
  if (cVar3 == '\0') {
    return;
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar4 = FUN_140cfc7b0(lVar4);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_1415825a0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x824);
  iVar1 = *(int *)(lVar5 + 0x70);
  uVar6 = FWeakObjectPtr::Get(param_1 + 0x824);
  FUN_14157a830(uVar6,iVar1 + 1);
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x824);
  iVar1 = *(int *)(lVar5 + 0x70);
  if ((*(longlong *)(lVar5 + 0xb0) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xb0) + 0x80), lVar5 != 0)) {
    if ((iVar1 < 0) || (*(int *)(lVar5 + 0x38) <= iVar1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (puVar7 = (undefined8 *)((longlong)iVar1 * 0xe8 + *(longlong *)(lVar5 + 0x30)),
       puVar7 != (undefined8 *)0x0)) {
      uVar6 = *puVar7;
      goto LAB_14156c52d;
    }
  }
  uVar6 = 0;
LAB_14156c52d:
  *(undefined8 *)(lVar4 + 0x4e8) = uVar6;
  FUN_141587970(lVar4);
  FUN_14155dcf0(param_1);
  return;
}



// FUNCTION 14156c560 FUN_14156c560 body=106 status=ok
// SIG undefined FUN_14156c560(void)

void FUN_14156c560(longlong param_1)

{
  code *local_18;
  undefined4 uStack_10;
  
  if (((*(char *)(param_1 + 0x6a0) == '\a') && (*(char *)(param_1 + 0x888) == '\0')) &&
     (*(char *)(param_1 + 0x889) == '\0')) {
    *(undefined1 *)(param_1 + 0x6a0) = 8;
    *(undefined4 *)(param_1 + 0x86c) = 0;
    local_18 = FUN_141575fe0;
    uStack_10 = 0;
    FUN_141550ab0(param_1 + 0x848,param_1,&local_18,*(undefined4 *)(param_1 + 0x6a8));
  }
  return;
}



// FUNCTION 14156c5d0 FUN_14156c5d0 body=703 status=ok
// SIG undefined FUN_14156c5d0(void)

void FUN_14156c5d0(longlong param_1,longlong param_2)

{
  short sVar1;
  short sVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  short *psVar8;
  uint uVar9;
  undefined2 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 local_res10;
  undefined2 *local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  short *local_58;
  int local_50;
  undefined1 local_48 [32];
  ulonglong uVar10;
  
  uVar10 = 0;
  if (param_2 != 0) {
    lVar6 = FUN_1415825a0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar6 = *(longlong *)(param_1 + 0x660);
      if (lVar6 == 0) {
        *(undefined4 *)(param_2 + 0x4f0) = 0xffffffff;
        *(undefined4 *)(param_2 + 0x4f4) = 0;
        *(undefined8 *)(param_2 + 0x500) = 0;
        local_res10 = 0;
        *(undefined4 *)(param_2 + 0x510) = 0;
        if (0x7fffffff < *(uint *)(param_2 + 0x514)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 0x508,0);
        }
        if (*(undefined2 **)(param_2 + 0x508) != (undefined2 *)0x0) {
          **(undefined2 **)(param_2 + 0x508) = 0;
        }
        *(undefined4 *)(param_2 + 0x4f8) = 0;
      }
      else {
        uVar7 = FSoftObjectPath::FSoftObjectPath(local_48,lVar6);
        FSoftObjectPath::operator=(param_2 + 0x500,uVar7);
        FWeakObjectPtr::operator=((undefined4 *)(param_2 + 0x4f0),lVar6);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0x4f8) = DAT_1464b56f4;
      }
    }
  }
  uVar7 = FUN_142e80f20();
  AActor::GetComponentsByClass(param_1,&local_68,uVar7);
  uVar12 = uVar10;
  uVar13 = uVar10;
  uVar14 = uVar10;
  if (0 < local_60) {
    do {
      uVar3 = *(ulonglong *)(uVar13 + local_68);
      uVar15 = uVar14;
      if (uVar3 != 0) {
        lVar6 = FUN_142e80f20();
        if ((*(int *)(*(longlong *)(uVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_78 = (undefined2 *)0x0;
          local_70 = 0x21;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
          puVar5 = local_78;
          FGenericPlatformString::Memcpy(local_78,L"BP_CitizenScienceUsableComponent",0x42);
          local_res10 = *(undefined8 *)(uVar3 + 0x18);
          FName::ToString(&local_res10,&local_58);
          puVar11 = &DAT_143f3eda8;
          if ((int)local_70 != 0) {
            puVar11 = puVar5;
          }
          psVar8 = &DAT_143f3eda8;
          if (local_50 != 0) {
            psVar8 = local_58;
          }
          lVar6 = (longlong)puVar11 - (longlong)psVar8;
          do {
            sVar1 = *psVar8;
            sVar2 = *(short *)((longlong)psVar8 + lVar6);
            if (sVar1 != sVar2) break;
            psVar8 = psVar8 + 1;
          } while (sVar2 != 0);
          if (local_58 != (short *)0x0) {
            FMemory::Free();
          }
          if (puVar5 != (undefined2 *)0x0) {
            FMemory::Free(puVar5);
          }
          uVar15 = uVar3;
          if (sVar1 == sVar2) {
            uVar12 = uVar3;
            uVar15 = uVar14;
          }
        }
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar13 = uVar13 + 8;
      uVar14 = uVar15;
    } while ((int)uVar9 < local_60);
    if ((uVar12 != 0) && (uVar15 != 0)) {
      *(undefined8 *)(uVar15 + 0x1a0) = *(undefined8 *)(uVar12 + 0x1a0);
      *(undefined1 *)(uVar15 + 0x198) = 1;
      *(undefined1 *)(uVar15 + 0x25c) = 0;
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14156c890 FUN_14156c890 body=342 status=ok
// SIG undefined FUN_14156c890(void)

void FUN_14156c890(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int *piVar8;
  longlong lVar9;
  longlong *plVar10;
  
  cVar2 = *(char *)(param_1 + 0x38);
  if (cVar2 == '\x04') {
LAB_14156c8be:
    if (cVar2 != '\x06') {
      if (cVar2 == '\b') {
        lVar9 = FWeakObjectPtr::Get(param_1 + 0x5c);
        lVar9 = *(longlong *)(lVar9 + 0x180);
        if (lVar9 != 0) {
          iVar3 = *(int *)(param_1 + 0x140);
          if ((-1 < iVar3) && (iVar3 < *(int *)(lVar9 + 400))) {
            iVar4 = *(int *)(param_1 + 0x144);
            plVar10 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar9 + 0x188));
            if ((-1 < iVar4) && (iVar3 = (int)plVar10[1], iVar4 < iVar3)) {
              iVar5 = *(int *)(param_1 + 0x14c);
              if (((-1 < iVar5) && (iVar5 < iVar3)) && (iVar4 != iVar5)) {
                lVar6 = *plVar10;
                puVar1 = (undefined8 *)(lVar6 + (longlong)iVar4 * 8);
                uVar7 = *puVar1;
                *puVar1 = *(undefined8 *)(lVar6 + (longlong)iVar5 * 8);
                *(undefined8 *)(lVar6 + (longlong)iVar5 * 8) = uVar7;
              }
            }
          }
          if (0 < *(int *)(lVar9 + 0x1d0)) {
            piVar8 = *(int **)(lVar9 + 0x1c8);
            if ((*piVar8 == *(int *)(param_1 + 0x140)) && (piVar8[1] == *(int *)(param_1 + 0x144)))
            {
              *piVar8 = *(int *)(param_1 + 0x148);
              piVar8[1] = *(int *)(param_1 + 0x14c);
              *(undefined1 *)(param_1 + 0x38) = 9;
              return;
            }
            if ((*piVar8 == *(int *)(param_1 + 0x148)) && (piVar8[1] == *(int *)(param_1 + 0x14c)))
            {
              *piVar8 = *(int *)(param_1 + 0x140);
              piVar8[1] = *(int *)(param_1 + 0x144);
              *(undefined1 *)(param_1 + 0x38) = 9;
              return;
            }
          }
        }
      }
      goto LAB_14156c9dc;
    }
  }
  else if (cVar2 != '\x06') {
    if (cVar2 != '\b') {
      *(undefined1 *)(param_1 + 0x15a) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0x11;
      return;
    }
    goto LAB_14156c8be;
  }
  lVar9 = FWeakObjectPtr::Get(param_1 + 0x5c);
  if (*(longlong *)(lVar9 + 0x180) != 0) {
    FUN_141578970(*(longlong *)(lVar9 + 0x180),param_1 + 0x140);
  }
LAB_14156c9dc:
  *(undefined1 *)(param_1 + 0x38) = 9;
  return;
}



// FUNCTION 14156c9f0 FUN_14156c9f0 body=844 status=ok
// SIG undefined FUN_14156c9f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14156c9f0(longlong param_1,undefined1 param_2)

{
  float fVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  longlong local_68 [12];
  
  _DAT_1468a6aa0 = _DAT_1464a0eb8;
  DAT_1468a64a0 = 0;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x818);
  if (cVar2 != '\0') {
    lVar6 = param_1 + 0x810;
    cVar2 = FWeakObjectPtr::IsValid(lVar6);
    if (cVar2 != '\0') {
      uVar4 = FWeakObjectPtr::Get(lVar6);
      fVar8 = (float)FUN_14155d900(uVar4);
      fVar9 = (float)-((int)ROUND(-0.5 - (fVar8 + fVar8)) >> 1);
      lVar5 = FWeakObjectPtr::Get(lVar6);
      fVar8 = (float)((int)ROUND((*(float *)(lVar5 + 0xac) + *(float *)(lVar5 + 0xac)) - 0.5) >> 1);
      FWeakObjectPtr::Get(lVar6);
      if (1e-08 < ABS(*(float *)(param_1 + 0x820) - fVar9)) {
        lVar5 = FWeakObjectPtr::Get(lVar6);
        fVar1 = *(float *)(lVar5 + 0xb0);
        uVar4 = FWeakObjectPtr::Get(lVar6);
        if (1e-08 < ABS((float)((int)ROUND((fVar1 + fVar1) - 0.5) >> 1))) {
          cVar2 = FUN_141564040(uVar4);
          if (cVar2 == '\0') {
            uVar4 = FWeakObjectPtr::Get(lVar6);
            fVar1 = *(float *)(param_1 + 0x820);
            cVar2 = FUN_141564220(uVar4);
            if (cVar2 == '\0') {
              if ((ABS(fVar1 - fVar8) <= 1e-08) || (fVar8 < fVar1)) {
                FUN_141575eb0(param_1);
              }
            }
            else if (fVar1 < fVar8) {
              FUN_14156c0f0(param_1);
            }
          }
          else if (*(float *)(param_1 + 0x820) <= fVar9 && fVar9 != *(float *)(param_1 + 0x820)) {
            FUN_1415684e0(param_1);
          }
        }
        else {
          cVar2 = FUN_141564220();
          if (cVar2 != '\0') {
            if ((fVar8 <= *(float *)(param_1 + 0x820)) || (1e-08 < ABS(fVar9 - fVar8))) {
              if (*(float *)(param_1 + 0x820) < fVar9) {
                FUN_1415684e0(param_1);
              }
            }
            else {
              FUN_14156c0f0(param_1);
            }
          }
        }
      }
      *(float *)(param_1 + 0x820) = fVar9;
      if ((*(longlong *)(param_1 + 0x7b8) != 0) && (*(longlong *)(param_1 + 0x7b0) != 0)) {
        cVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x7b0) + 0x170) + 0x40))();
        lVar6 = FWeakObjectPtr::Get(lVar6);
        if (*(char *)(lVar6 + 0xf5) == '\0') {
          cVar3 = FUN_141564220(lVar6);
        }
        else {
          cVar3 = '\x01';
        }
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x7b0) + 0x170);
        (**(code **)(*plVar7 + 0x38))(plVar7,cVar3);
        if (((*(char *)(param_1 + 0x829) == '\0') && (cVar2 == '\0')) && (cVar3 != '\0')) {
          local_68[1] = 0xe;
          local_68[0] = 0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
          FGenericPlatformString::Memcpy(local_68[0],L"highlightFull",0x1c);
          FUN_142088910(*(undefined8 *)(param_1 + 0x7b8),local_68);
          if (local_68[0] != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  FUN_1415771c0(param_1);
  *(undefined1 *)(param_1 + 0x6c0) = 7;
  *(undefined1 *)(param_1 + 0x82f) = 1;
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    FUN_14155a3a0(*(longlong *)(param_1 + 0x6e0),*(char *)(param_1 + 0x82a) == '\0');
  }
  TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x6a0,param_2);
  return;
}



// FUNCTION 14156cd40 FUN_14156cd40 body=141 status=ok
// SIG undefined FUN_14156cd40(void)

void FUN_14156cd40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0x6c0) == '\x05') {
    lVar1 = *(longlong *)(param_1 + 0x6d0);
    *(undefined1 *)(param_1 + 0x6c0) = 6;
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x38) == '\0') {
        *(undefined1 *)(lVar1 + 0x158) = 1;
        uVar2 = FWeakObjectPtr::Get(lVar1 + 0x7c);
        fVar3 = (float)FUN_14155d900(uVar2);
        *(undefined1 *)(lVar1 + 0x38) = 1;
        *(float *)(lVar1 + 0x150) = (float)-((int)ROUND(-0.5 - (fVar3 + fVar3)) >> 1);
        return;
      }
      *(undefined1 *)(lVar1 + 0x15a) = 0;
      *(undefined1 *)(lVar1 + 0x38) = 0x11;
    }
  }
  return;
}



// FUNCTION 14156cde0 FUN_14156cde0 body=71 status=ok
// SIG undefined FUN_14156cde0(void)

void FUN_14156cde0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (param_2 != 0) {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x198);
    if (cVar2 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x198);
      FUN_14155e310(uVar1,param_2 + 0x1c0);
    }
  }
  return;
}



// FUNCTION 14156ce30 FUN_14156ce30 body=138 status=ok
// SIG undefined FUN_14156ce30(void)

void FUN_14156ce30(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_2 == 0) {
    return;
  }
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1d0)) {
    uVar3 = uVar2;
    uVar5 = uVar2;
    do {
      if (((uVar3 != (longlong)param_3) &&
          (lVar1 = *(longlong *)(param_1 + 0x1c8),
          *(int *)(lVar1 + uVar2) == *(int *)(param_2 + 0x1c0))) &&
         (*(int *)(param_2 + 0x1c4) < *(int *)(lVar1 + 4 + uVar2))) {
        *(undefined1 *)(lVar1 + 8 + uVar2) = 1;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 0xc;
    } while ((int)uVar4 < *(int *)(param_1 + 0x1d0));
  }
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x170,param_2);
  return;
}



// FUNCTION 14156ced0 FUN_14156ced0 body=383 status=ok
// SIG undefined FUN_14156ced0(void)

void FUN_14156ced0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_res20;
  undefined1 local_28 [8];
  longlong local_20;
  
  if (((*(char *)(param_1 + 0x6c0) == '\a') &&
      (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x808), cVar3 != '\0')) &&
     (lVar4 = FWeakObjectPtr::Get(param_1 + 0x808), *(longlong *)(lVar4 + 0xb0) != 0)) {
    FWeakObjectPtr::operator=(local_28,0);
    local_20 = 0;
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGFxCSPuzzleMenu::OnConfirmQuickPass",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res20,pwVar2 + 2,1);
    FWeakObjectPtr::operator=(local_28,param_1);
    local_20 = local_res20;
    if ((local_res20 != 0) && (lVar4 = FWeakObjectPtr::Get(local_28), lVar4 != 0)) {
      UObject::FindFunction(lVar4,local_20);
    }
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x808);
    lVar4 = *(longlong *)(lVar4 + 0xb0);
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x808);
    lVar6 = *(longlong *)(lVar6 + 0xb0);
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
    FUN_1410f47a0(uVar7,lVar6 + 0x1b0,lVar4 + 0x1c8,local_28,1,0,0,0,0);
  }
  return;
}



// FUNCTION 14156d050 FUN_14156d050 body=144 status=ok
// SIG undefined FUN_14156d050(void)

void FUN_14156d050(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 local_res18 [16];
  undefined8 local_18;
  undefined8 local_10;
  
  plVar1 = (longlong *)FName::FName(local_res18,&DAT_144c68a34,1);
  if (param_3 == *plVar1) {
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468a6868,&local_18);
    *(undefined1 *)(param_1 + 0xd8) = 10;
    FName::FName(local_res18,L"MainMenu",1);
    (**(code **)(*param_1 + 0x570))(param_1,local_res18,1,0);
  }
  return;
}



// FUNCTION 14156d0e0 FUN_14156d0e0 body=417 status=ok
// SIG undefined FUN_14156d0e0(void)

void FUN_14156d0e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 400);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(param_1 + 400);
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(lVar6 + 0x1c8);
    lVar6 = FWeakObjectPtr::Get(param_1 + 400);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(lVar6 + 0x1c4);
    if ((*(longlong *)(param_1 + 0x1a8) != 0) && (*(longlong *)(param_1 + 0x1a0) != 0)) {
      FUN_142f0b170(*(longlong *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1fc));
      FUN_142090300(*(undefined8 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1f8),
                    *(undefined4 *)(param_1 + 0x1f8));
    }
    plVar7 = *(longlong **)(param_1 + 0x1c0);
    plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x1c8) * 4;
    for (; plVar7 != plVar8; plVar7 = plVar7 + 4) {
      plVar3 = (longlong *)plVar7[2];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar5 == (int)plVar3[1];
          if (bVar9) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar9) {
            lVar6 = plVar7[1];
            if ((lVar6 != 0) && (*plVar7 != 0)) {
              FUN_14204ff20(lVar6,*(undefined4 *)(param_1 + 0x1fc));
              FUN_142055060(lVar6,CONCAT44(*(undefined4 *)(param_1 + 0x1f8),
                                           *(undefined4 *)(param_1 + 0x1f8)));
              FUN_142090300(*plVar7,*(undefined4 *)(param_1 + 0x1f8),
                            *(undefined4 *)(param_1 + 0x1f8));
            }
            LOCK();
            plVar1 = plVar3 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
            break;
          }
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar9 = iVar5 == 0;
          if (bVar9) {
            *(int *)(plVar3 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
    }
  }
  return;
}



// FUNCTION 14156d290 FUN_14156d290 body=502 status=ok
// SIG undefined FUN_14156d290(void)

void FUN_14156d290(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong local_res18;
  undefined1 local_28 [8];
  longlong local_20;
  
  uVar6 = (**(code **)(*param_1 + 0x148))();
  plVar7 = (longlong *)FUN_140d3a420(uVar6);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x88))(plVar7);
  }
  if (param_1[0xdb] != 0) {
    thunk_FUN_142eb3990();
  }
  if (DAT_1468a64a8 != 0) {
    plVar7 = *(longlong **)(DAT_1468a64a8 + 0x88);
    if ((plVar7 == (longlong *)0x0) || ((char)plVar7[3] == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((((!bVar2) || (plVar7 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar7 + 0x10))(), cVar5 == '\0')) &&
        ((DAT_1468a64a8 != 0 && (lVar1 = *(longlong *)(DAT_1468a64a8 + 0xb0), lVar1 != 0)))) &&
       (lVar8 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c), lVar8 != 0)) {
      lVar9 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FWeakObjectPtr::operator=(local_28,0);
        local_20 = 0;
        pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnErrorDialogClicked",L"::");
        pwVar4 = (wchar_t *)0x0;
        while (pwVar3 = pwVar10, pwVar3 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(&local_res18,pwVar4 + 2,1);
        FWeakObjectPtr::operator=(local_28,param_1);
        local_20 = local_res18;
        if ((local_res18 != 0) && (lVar9 = FWeakObjectPtr::Get(local_28), lVar9 != 0)) {
          UObject::FindFunction(lVar9,local_20);
        }
        FUN_1410f3960(lVar8,lVar1 + 0x90,lVar1 + 0xa8,local_28,0,0,2);
      }
    }
  }
  return;
}



// FUNCTION 14156d490 FUN_14156d490 body=1120 status=ok
// SIG undefined FUN_14156d490(void)

void FUN_14156d490(longlong param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_142ecbc80();
  uVar13 = 0;
  *(undefined4 *)(param_1 + 0x690) = 0;
  if (*(int *)(param_1 + 0x694) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x688,0);
  }
  local_38 = (code *)0x0;
  uStack_30 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"contentPanel",0x1a);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  uVar4 = FUN_140ecb410(param_1,&local_38,0,6,&local_58);
  *(undefined8 *)(param_1 + 0x6e0) = uVar4;
  plVar14 = local_58;
  for (iVar15 = (int)local_50; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar14 != 0) {
      FMemory::Free();
    }
    plVar14 = plVar14 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_38 != (code *)0x0) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x6e0) != 0) && (*(longlong *)(param_1 + 0x6d8) != 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x6e0) + 0x1e4) = *(undefined4 *)(param_1 + 0x6d0);
    *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x1c8) = 0;
    lVar9 = *(longlong *)(param_1 + 0x6d8);
    uVar8 = uVar13;
    if (0 < *(int *)(lVar9 + 0x38)) {
      do {
        local_38 = (code *)0x0;
        uStack_30 = 0xc;
        lVar11 = *(longlong *)(lVar9 + 0x30);
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        FGenericPlatformString::Memcpy(local_38,L"BTN_Booster",0x18);
        uVar4 = *(undefined8 *)(param_1 + 0x6e0);
        uVar5 = FUN_1415838e0();
        uVar6 = FUN_142ebcee0(uVar4,&local_38,uVar5,0);
        if (uVar6 == 0) {
LAB_14156d659:
          uVar6 = uVar13;
        }
        else {
          lVar7 = FUN_1415838e0();
          if ((*(int *)(*(longlong *)(uVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_14156d659;
        }
        if (local_38 != (code *)0x0) {
          FMemory::Free();
        }
        if (uVar6 != 0) {
          FUN_141560690(uVar6,(longlong)(int)uVar8 * 0x90 + lVar11,uVar8);
          FUN_142ed2600(uVar6,3);
          uVar4 = FName::FName(local_res8,L"OnBoosterItemClicked",1);
          uVar5 = FUN_1404b03b0();
          FUN_14157ba50(param_1,uVar6,uVar5,uVar4,&DAT_146b3e2a0);
        }
        uVar16 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar16;
      } while ((int)uVar16 < *(int *)(lVar9 + 0x38));
    }
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_58,0);
    FWeakObjectPtr::operator=(&local_50,0);
    FWeakObjectPtr::operator=(&local_48,0);
    FWeakObjectPtr::operator=(&local_40,0);
    pcVar1 = *(code **)(param_1 + 0x6e0);
    uVar8 = uVar13;
    local_38 = pcVar1;
    if (pcVar1 != (code *)0x0) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      uVar8 = UObjectBaseUtility::GetInterfaceAddress(pcVar1,uVar4);
    }
    uStack_30 = uVar8;
    FUN_142ecfd10(param_1,&local_38,&local_58);
  }
  FWeakObjectPtr::operator=(param_1 + 0x6f0,DAT_1468a64a8);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x6f0);
  if (cVar3 != '\0') {
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = thunk_FUN_14157ed70;
    lVar9 = FWeakObjectPtr::Get(param_1 + 0x6f0);
    plVar14 = (longlong *)(lVar9 + 0xd8);
    plVar10 = (longlong *)FMemory::Realloc(0,0x30);
    uVar8 = uVar13;
    if (plVar10 != (longlong *)0x0) {
      *plVar10 = (longlong)&PTR_FUN_1442cc120;
      FWeakObjectPtr::operator=(plVar10 + 1,param_1);
      *(undefined4 *)(plVar10 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar10 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar10 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_30._4_4_;
      lVar11 = FDelegateHandle::GenerateNewID();
      plVar10[5] = lVar11;
      *plVar10 = (longlong)&PTR_FUN_1442cc168;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14,1);
      puVar12 = (ulonglong *)(**(code **)(*plVar10 + 0x20))(plVar10,local_res8);
      iVar15 = *(int *)(lVar9 + 0xe0);
      uVar8 = *puVar12;
      *(int *)(lVar9 + 0xe0) = iVar15 + 1;
      if (*(int *)(lVar9 + 0xe4) < iVar15 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar15);
      }
      lVar9 = *plVar14;
      *(longlong **)(lVar9 + (longlong)iVar15 * 0x10) = plVar10;
      *(undefined4 *)(lVar9 + 8 + (longlong)iVar15 * 0x10) = 3;
    }
    *(ulonglong *)(param_1 + 0x6f8) = uVar8;
    lVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
    if (lVar9 != 0) {
      lVar11 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FWeakObjectPtr::Get(param_1 + 0x6f0);
        lVar9 = FUN_140cff230(lVar9);
        if (lVar9 != 0) {
          uVar13 = (ulonglong)*(uint *)(lVar9 + 0x22c);
        }
        FUN_14157ed70(param_1,uVar13);
      }
    }
  }
  plVar14 = *(longlong **)(param_1 + 0x6e0);
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x2c8))(plVar14,0,0);
  }
  FUN_14157caf0(param_1);
  return;
}



// FUNCTION 14156d8f0 FUN_14156d8f0 body=3576 status=ok
// SIG undefined FUN_14156d8f0(void)

void FUN_14156d8f0(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  longlong *plVar12;
  bool bVar13;
  longlong local_318;
  longlong *local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 local_2f0;
  longlong *local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  longlong local_288 [4];
  longlong *local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  longlong *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  longlong *local_160;
  undefined2 local_158 [2];
  undefined8 local_154;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined2 local_120 [2];
  undefined8 local_11c;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined2 local_e8 [2];
  undefined8 local_e4;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  uVar10 = 0;
  FUN_142ecbc80();
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_154 = 0;
    local_148 = 0;
    local_140 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_158[0] = 0x102;
    local_2f8 = 0;
    local_2f0 = 0x21;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f8,0);
    FGenericPlatformString::Memcpy(local_2f8,L"scaleform.gfx.Extensions.enabled",0x42);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x38),&local_2f8,local_158);
    if (local_2f8 != 0) {
      FMemory::Free();
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
    if (local_148 != 0) {
      FMemory::Free();
    }
  }
  local_258 = 0;
  local_250 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
  FGenericPlatformString::Memcpy(local_258,L"echoContentWrapper",0x26);
  local_268 = (longlong *)0x0;
  local_260 = 0;
  uVar4 = FUN_1415506c0(param_1,&local_258,0,6,&local_268);
  *(undefined8 *)(param_1 + 0x6b8) = uVar4;
  plVar8 = local_268;
  for (iVar11 = (int)local_260; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_268 != (longlong *)0x0) {
    FMemory::Free(local_268);
  }
  if (local_258 != 0) {
    FMemory::Free();
  }
  local_238 = 0;
  local_230 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
  FGenericPlatformString::Memcpy(local_238,L"subtitlesWidgetWrapper",0x2e);
  local_248 = (longlong *)0x0;
  local_240 = 0;
  lVar5 = FUN_140e96f30(param_1,&local_238,0,6,&local_248);
  plVar8 = local_248;
  for (iVar11 = (int)local_240; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_248 != (longlong *)0x0) {
    FMemory::Free(local_248);
  }
  if (local_238 != 0) {
    FMemory::Free();
  }
  if (lVar5 == 0) goto LAB_14156deaf;
  local_218 = 0;
  local_210 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
  FGenericPlatformString::Memcpy(local_218,L"subtitles",0x14);
  local_228 = (longlong *)0x0;
  local_220 = 0;
  uVar4 = FUN_14154ff80(lVar5,&local_218,0,6,&local_228);
  *(undefined8 *)(param_1 + 0x6c0) = uVar4;
  plVar8 = local_228;
  for (iVar11 = (int)local_220; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_228 != (longlong *)0x0) {
    FMemory::Free(local_228);
  }
  if (local_218 != 0) {
    FMemory::Free();
  }
  local_11c = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_120[0] = 2;
  local_208 = 0;
  local_200 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
  FGenericPlatformString::Memcpy(local_208,L"mouseEnabled",0x1a);
  FUN_14208f550(*(undefined8 *)(param_1 + 0x6c0),&local_208,local_120);
  if (local_208 != 0) {
    FMemory::Free();
  }
  if (local_100 != 0) {
    FMemory::Free();
  }
  if (local_110 != 0) {
    FMemory::Free();
  }
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_e8[0] = 2;
  local_1f8 = 0;
  local_1f0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
  FGenericPlatformString::Memcpy(local_1f8,L"mouseChildren",0x1c);
  FUN_14208f550(*(undefined8 *)(param_1 + 0x6c0),&local_1f8,local_e8);
  if (local_1f8 != 0) {
    FMemory::Free();
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  lVar5 = *(longlong *)(param_1 + 0x6c0);
  if ((*(longlong *)(lVar5 + 0x28) == 0) || (*(longlong *)(lVar5 + 0x30) == 0)) {
LAB_14156dd93:
    plVar8 = &local_308;
    local_308 = (code *)0x0;
    uStack_300 = (longlong *)0x0;
    bVar3 = false;
    bVar2 = true;
    local_168 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(lVar5 + 0x30) + 8);
    LOCK();
    iVar11 = *piVar1;
    if (iVar11 == 0) {
      *piVar1 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (iVar11 < 1) goto LAB_14156dd93;
    local_310 = *(longlong **)(lVar5 + 0x30);
    bVar3 = true;
    bVar2 = false;
    local_318 = 0;
    if (local_310 == (longlong *)0x0) {
LAB_14156dd87:
      plVar8 = &local_318;
      local_168 = local_318;
    }
    else {
      LOCK();
      iVar11 = (int)local_310[1];
      bVar13 = iVar11 == 0;
      if (bVar13) {
        *(int *)(local_310 + 1) = 0;
        iVar11 = 0;
      }
      UNLOCK();
      while (!bVar13) {
        LOCK();
        bVar13 = iVar11 == (int)local_310[1];
        if (bVar13) {
          *(int *)(local_310 + 1) = iVar11 + 1;
        }
        UNLOCK();
        if (bVar13) {
          if (local_310 != (longlong *)0x0) {
            local_318 = *(longlong *)(lVar5 + 0x28);
          }
          goto LAB_14156dd87;
        }
        LOCK();
        iVar11 = (int)local_310[1];
        bVar13 = iVar11 == 0;
        if (bVar13) {
          *(int *)(local_310 + 1) = 0;
          iVar11 = 0;
        }
        UNLOCK();
      }
      plVar8 = &local_318;
      local_310 = (longlong *)0x0;
      local_168 = 0;
    }
  }
  local_160 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8 = uStack_300;
  if ((bVar2) && (uStack_300 != (longlong *)0x0)) {
    LOCK();
    plVar12 = uStack_300 + 1;
    lVar5 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_300)(uStack_300);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*uStack_300 + 8))(uStack_300,1);
      }
    }
  }
  plVar8 = local_310;
  if ((bVar3) && (local_310 != (longlong *)0x0)) {
    LOCK();
    plVar12 = local_310 + 1;
    lVar5 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_310)(local_310);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_310 + 8))(local_310,1);
      }
    }
  }
  if (local_168 != 0) {
    FUN_142051fa0(local_168,1);
  }
  plVar8 = local_160;
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_160 + 1;
    lVar5 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
LAB_14156deaf:
  local_1d8 = 0;
  local_1d0 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  FGenericPlatformString::Memcpy(local_1d8,L"PNL_Currency_TotalNum",0x2c);
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  local_70 = 0;
  uVar4 = FUN_140e96f30(param_1,&local_1d8,0,6,&local_1e8);
  *(undefined8 *)(param_1 + 0x6e8) = uVar4;
  plVar8 = local_1e8;
  for (iVar11 = (int)local_1e0; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_1e8 != (longlong *)0x0) {
    FMemory::Free(local_1e8);
  }
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6e8) != 0) {
    local_1b8 = 0;
    local_1b0 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"TXT_Currency_TotalNum",0x2c);
    local_2a8 = (longlong *)0x0;
    local_2a0 = 0;
    local_b0 = 0;
    uVar4 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x6e8),&local_1b8,0,6,&local_2a8);
    *(undefined8 *)(param_1 + 0x6c8) = uVar4;
    plVar8 = local_2a8;
    for (iVar11 = (int)local_2a0; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_2a8 != (longlong *)0x0) {
      FMemory::Free(local_2a8);
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    local_1a8 = 0;
    local_1a0 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
    FGenericPlatformString::Memcpy(local_1a8,&DAT_144c699dc,4);
    (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x2a8))
              (*(longlong **)(param_1 + 0x6c8),&local_1a8,1,0);
    if (local_1a8 != 0) {
      FMemory::Free();
    }
  }
  local_188 = 0;
  local_180 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
  FGenericPlatformString::Memcpy(local_188,L"PNL_Title",0x14);
  local_198 = (longlong *)0x0;
  local_190 = 0;
  local_a8 = 0;
  lVar5 = FUN_140e96f30(param_1,&local_188,0,6,&local_198);
  plVar8 = local_198;
  for (iVar11 = (int)local_190; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_198 != (longlong *)0x0) {
    FMemory::Free(local_198);
  }
  if (local_188 != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    local_178 = 0;
    local_170 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_178,5,&DAT_144c7cf8c,5,0x3f);
    FUN_142088910(lVar5,&local_178);
    if (local_178 != 0) {
      FMemory::Free();
    }
    local_2d8 = 0;
    local_2d0 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
    FGenericPlatformString::Memcpy(local_2d8,L"label",0xc);
    local_2e8 = (longlong *)0x0;
    local_2e0 = 0;
    local_a0 = 0;
    uVar4 = FUN_140ecc7d0(lVar5,&local_2d8,0,6,&local_2e8);
    *(undefined8 *)(param_1 + 0x6d0) = uVar4;
    plVar8 = local_2e8;
    for (iVar11 = (int)local_2e0; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_2e8 != (longlong *)0x0) {
      FMemory::Free(local_2e8);
    }
    if (local_2d8 != 0) {
      FMemory::Free();
    }
    if (*(longlong **)(param_1 + 0x6d0) != (longlong *)0x0) {
      lVar5 = **(longlong **)(param_1 + 0x6d0);
      uVar4 = FUN_1404b03b0();
      (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x6d0),uVar4,1,0);
    }
  }
  local_2b8 = 0;
  local_2b0 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
  FGenericPlatformString::Memcpy(local_2b8,L"PNL_Player",0x16);
  local_2c8 = (longlong *)0x0;
  local_2c0 = 0;
  local_98 = 0;
  uVar4 = FUN_140e96f30(param_1,&local_2b8,0,6,&local_2c8);
  *(undefined8 *)(param_1 + 0x6f0) = uVar4;
  plVar8 = local_2c8;
  for (iVar11 = (int)local_2c0; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_2c8 != (longlong *)0x0) {
    FMemory::Free(local_2c8);
  }
  if (local_2b8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    local_298 = 0;
    local_290 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
    FGenericPlatformString::Memcpy(local_298,L"label",0xc);
    local_1c8 = (longlong *)0x0;
    local_1c0 = 0;
    local_78 = 0;
    uVar4 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x6f0),&local_298,0,6,&local_1c8);
    *(undefined8 *)(param_1 + 0x6f8) = uVar4;
    plVar8 = local_1c8;
    for (iVar11 = (int)local_1c0; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_1c8 != (longlong *)0x0) {
      FMemory::Free(local_1c8);
    }
    if (local_298 != 0) {
      FMemory::Free();
    }
  }
  local_288[0] = 0;
  local_288[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_288,0);
  FGenericPlatformString::Memcpy(local_288[0],L"BTN_Help",0x12);
  uVar4 = FName::FName(local_90,L"OnHelpClicked",1);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_68,L"HELP",L"GFxCSMenuBase",L"HelpText");
  uVar4 = FUN_14157b350(param_1,local_288,uVar6,uVar4,&DAT_1468a6520);
  *(undefined8 *)(param_1 + 0x6e0) = uVar4;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_60 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (local_288[0] != 0) {
    FMemory::Free();
  }
  local_288[2] = 0;
  local_288[3] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_288 + 2,0);
  FGenericPlatformString::Memcpy(local_288[2],L"BTN_Quit",0x12);
  uVar4 = FName::FName(local_88,L"OnBackClicked",1);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_50,L"QUIT",L"GFxCSMenuBase",L"QuitText");
  uVar4 = FUN_14157b350(param_1,local_288 + 2,uVar6,uVar4,&DAT_146b3e2b8);
  *(undefined8 *)(param_1 + 0x6d8) = uVar4;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_48 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  if (local_288[2] != 0) {
    FMemory::Free();
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar5 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (FUN_14155ee30(*(undefined8 *)(param_1 + 0x6b0)), lVar5 = DAT_1468a64a8, DAT_1468a64a8 != 0))
    {
      uVar4 = FUN_140e971d0(param_1);
      FUN_14157aba0(lVar5,uVar4);
      uStack_300 = (longlong *)((ulonglong)uStack_300 & 0xffffffff00000000);
      local_308 = thunk_FUN_14157ef00;
      plVar12 = (longlong *)(lVar5 + 0xd8);
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_1442cc120;
        FWeakObjectPtr::operator=(plVar8 + 1,param_1);
        *(undefined4 *)(plVar8 + 2) = (undefined4)local_308;
        *(undefined4 *)((longlong)plVar8 + 0x14) = local_308._4_4_;
        *(undefined4 *)(plVar8 + 3) = (undefined4)uStack_300;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_300._4_4_;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar7;
        *plVar8 = (longlong)&PTR_FUN_1442cc168;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar12,1);
        puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x20))(plVar8,local_80);
        iVar11 = *(int *)(lVar5 + 0xe0);
        uVar10 = *puVar9;
        *(int *)(lVar5 + 0xe0) = iVar11 + 1;
        if (*(int *)(lVar5 + 0xe4) < iVar11 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar11);
        }
        puVar9 = (undefined8 *)((longlong)iVar11 * 0x10 + *plVar12);
        *puVar9 = plVar8;
        *(undefined4 *)(puVar9 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x700) = uVar10;
    }
  }
  return;
}



// FUNCTION 14156e6f0 FUN_14156e6f0 body=4630 status=ok
// SIG undefined FUN_14156e6f0(void)

void FUN_14156e6f0(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  undefined8 local_390;
  longlong local_388;
  undefined8 local_380;
  longlong *local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 local_360;
  longlong *local_358;
  undefined8 local_350;
  longlong local_348;
  undefined8 local_340;
  longlong local_338;
  undefined8 local_330;
  longlong *local_328;
  undefined8 local_320;
  longlong local_318;
  undefined8 local_310;
  longlong *local_308;
  undefined8 local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  longlong *local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  longlong local_2b8 [6];
  longlong *local_288;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  longlong *local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  longlong *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  
  FUN_142ecbc80();
  local_2b8[3] = 0xe;
  local_2b8[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2b8 + 2,0);
  FGenericPlatformString::Memcpy(local_2b8[2],L"BTN_Tab_Rules",0x1c);
  local_res8 = 0;
  uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_c0,L"RULES",L"GFxCSHelpMenu",L"RulesTabBtn");
  uVar3 = FUN_14157b610(param_1,local_2b8 + 2,uVar3,&local_res8,&DAT_1468a6548);
  *(undefined8 *)(param_1 + 0x680) = uVar3;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_b8 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  if (local_2b8[2] != 0) {
    FMemory::Free();
  }
  local_2b8[4] = 0;
  local_2b8[5] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2b8 + 4,0);
  FGenericPlatformString::Memcpy(local_2b8[4],L"BTN_Tab_Controls",0x22);
  local_res10 = 0;
  uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a8,L"Controls",L"GFxCSHelpMenu",L"ControlsTabBtn");
  uVar3 = FUN_14157b610(param_1,local_2b8 + 4,uVar3,&local_res10,&DAT_1468a6540);
  *(undefined8 *)(param_1 + 0x688) = uVar3;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_a0 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (local_2b8[4] != 0) {
    FMemory::Free();
  }
  local_278 = 0;
  local_270 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
  FGenericPlatformString::Memcpy(local_278,L"PNL_Help",0x12);
  local_288 = (longlong *)0x0;
  local_280 = 0;
  local_res18 = 0;
  uVar3 = FUN_140e96f30(param_1,&local_278,0,6,&local_288);
  *(undefined8 *)(param_1 + 0x698) = uVar3;
  plVar9 = local_288;
  for (iVar10 = (int)local_280; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_288 != (longlong *)0x0) {
    FMemory::Free(local_288);
  }
  if (local_278 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x698) != 0) {
    local_258 = 0;
    local_250 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
    FGenericPlatformString::Memcpy(local_258,L"PNL_Rules",0x14);
    local_268 = (longlong *)0x0;
    local_260 = 0;
    local_res20 = 0;
    uVar3 = FUN_140e96f30(param_1,&local_258,0,6,&local_268);
    *(undefined8 *)(param_1 + 0x690) = uVar3;
    plVar9 = local_268;
    for (iVar10 = (int)local_260; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_268 != (longlong *)0x0) {
      FMemory::Free(local_268);
    }
    if (local_258 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x690) != 0) {
      local_238 = 0;
      local_230 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
      FGenericPlatformString::Memcpy(local_238,L"PNL_Rules0",0x16);
      local_248 = (longlong *)0x0;
      local_240 = 0;
      local_148 = 0;
      lVar4 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x690),&local_238,0,6,&local_248);
      plVar9 = local_248;
      for (iVar10 = (int)local_240; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_248 != (longlong *)0x0) {
        FMemory::Free(local_248);
      }
      if (local_238 != 0) {
        FMemory::Free();
      }
      if (lVar4 != 0) {
        local_218 = 0;
        local_210 = 0x11;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
        FGenericPlatformString::Memcpy(local_218,L"CONT_RulesImages",0x22);
        local_228 = (longlong *)0x0;
        local_220 = 0;
        local_140 = 0;
        lVar5 = FUN_140ecbdf0(lVar4,&local_218,0,6,&local_228);
        plVar9 = local_228;
        for (iVar10 = (int)local_220; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_228 != (longlong *)0x0) {
          FMemory::Free(local_228);
        }
        if (local_218 != 0) {
          FMemory::Free();
        }
        if (lVar5 != 0) {
          FUN_142088ee0(lVar5,1);
        }
        local_1f8 = 0;
        local_1f0 = 0x10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
        FGenericPlatformString::Memcpy(local_1f8,L"TXT_Rules_Title",0x20);
        local_208 = (longlong *)0x0;
        local_200 = 0;
        local_138 = 0;
        plVar6 = (longlong *)FUN_140ecc7d0(lVar4,&local_1f8,0,6,&local_208);
        plVar9 = local_208;
        for (iVar10 = (int)local_200; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_208 != (longlong *)0x0) {
          FMemory::Free(local_208);
        }
        if (local_1f8 != 0) {
          FMemory::Free();
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x6b0,1,0);
        }
        local_348 = 0;
        local_340 = 0x16;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,0);
        FGenericPlatformString::Memcpy(local_348,L"TXT_Rules_Description",0x2c);
        local_1e8 = (longlong *)0x0;
        local_1e0 = 0;
        local_130 = 0;
        plVar6 = (longlong *)FUN_140ecc7d0(lVar4,&local_348,0,6,&local_1e8);
        plVar9 = local_1e8;
        for (iVar10 = (int)local_1e0; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_1e8 != (longlong *)0x0) {
          FMemory::Free(local_1e8);
        }
        if (local_348 != 0) {
          FMemory::Free();
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x6c8,1,0);
        }
      }
      local_1b8 = 0;
      local_1b0 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
      FGenericPlatformString::Memcpy(local_1b8,L"PNL_Rules1",0x16);
      local_1c8 = (longlong *)0x0;
      local_1c0 = 0;
      local_128 = 0;
      lVar5 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x690),&local_1b8,0,6,&local_1c8);
      plVar9 = local_1c8;
      for (iVar10 = (int)local_1c0; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_1c8 != (longlong *)0x0) {
        FMemory::Free(local_1c8);
      }
      if (local_1b8 != 0) {
        FMemory::Free();
      }
      if (lVar5 != 0) {
        local_198 = 0;
        local_190 = 0x11;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
        FGenericPlatformString::Memcpy(local_198,L"CONT_RulesImages",0x22);
        local_1a8 = (longlong *)0x0;
        local_1a0 = 0;
        local_120 = 0;
        lVar7 = FUN_140ecbdf0(lVar5,&local_198,0,6,&local_1a8);
        plVar9 = local_1a8;
        for (iVar10 = (int)local_1a0; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_1a8 != (longlong *)0x0) {
          FMemory::Free(local_1a8);
        }
        if (local_198 != 0) {
          FMemory::Free();
        }
        if (lVar7 != 0) {
          FUN_142088ee0(lVar7,3);
        }
        local_178 = 0;
        local_170 = 0x10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
        FGenericPlatformString::Memcpy(local_178,L"TXT_Rules_Title",0x20);
        local_188 = (longlong *)0x0;
        local_180 = 0;
        local_118 = 0;
        plVar6 = (longlong *)FUN_140ecc7d0(lVar5,&local_178,0,6,&local_188);
        plVar9 = local_188;
        for (iVar10 = (int)local_180; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_188 != (longlong *)0x0) {
          FMemory::Free(local_188);
        }
        if (local_178 != 0) {
          FMemory::Free();
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x6e0,1,0);
        }
        local_158 = 0;
        local_150 = 0x16;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
        FGenericPlatformString::Memcpy(local_158,L"TXT_Rules_Description",0x2c);
        local_168 = (longlong *)0x0;
        local_160 = 0;
        local_c8 = 0;
        plVar6 = (longlong *)FUN_140ecc7d0(lVar5,&local_158,0,6,&local_168);
        plVar9 = local_168;
        for (iVar10 = (int)local_160; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_168 != (longlong *)0x0) {
          FMemory::Free(local_168);
        }
        if (local_158 != 0) {
          FMemory::Free();
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x6f8,1,0);
        }
      }
      local_3a8 = 0;
      local_3a0 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8,0);
      FGenericPlatformString::Memcpy(local_3a8,L"PNL_Rules2",0x16);
      local_3b8 = (longlong *)0x0;
      local_3b0 = 0;
      local_110 = 0;
      uVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x690),&local_3a8,0,6,&local_3b8);
      plVar9 = local_3b8;
      for (iVar10 = (int)local_3b0; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_3b8 != (longlong *)0x0) {
        FMemory::Free(local_3b8);
      }
      if (local_3a8 != 0) {
        FMemory::Free();
      }
      if (lVar4 != 0) {
        local_388 = 0;
        local_380 = 0x11;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,0);
        FGenericPlatformString::Memcpy(local_388,L"CONT_RulesImages",0x22);
        local_398 = (longlong *)0x0;
        local_390 = 0;
        local_108 = 0;
        lVar4 = FUN_140ecbdf0(uVar3,&local_388,0,6,&local_398);
        plVar9 = local_398;
        for (iVar10 = (int)local_390; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_398 != (longlong *)0x0) {
          FMemory::Free(local_398);
        }
        if (local_388 != 0) {
          FMemory::Free();
        }
        if (lVar4 != 0) {
          FUN_142088ee0(lVar4,5);
        }
        local_368 = 0;
        local_360 = 0x10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
        FGenericPlatformString::Memcpy(local_368,L"TXT_Rules_Title",0x20);
        local_378 = (longlong *)0x0;
        local_370 = 0;
        local_100 = 0;
        plVar6 = (longlong *)FUN_140ecc7d0(uVar3,&local_368,0,6,&local_378);
        plVar9 = local_378;
        for (iVar10 = (int)local_370; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_378 != (longlong *)0x0) {
          FMemory::Free(local_378);
        }
        if (local_368 != 0) {
          FMemory::Free();
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x710,1,0);
        }
        local_338 = 0;
        local_330 = 0x16;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
        FGenericPlatformString::Memcpy(local_338,L"TXT_Rules_Description",0x2c);
        local_358 = (longlong *)0x0;
        local_350 = 0;
        local_f8 = 0;
        plVar6 = (longlong *)FUN_140ecc7d0(uVar3,&local_338,0,6,&local_358);
        plVar9 = local_358;
        for (iVar10 = (int)local_350; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_358 != (longlong *)0x0) {
          FMemory::Free(local_358);
        }
        if (local_338 != 0) {
          FMemory::Free();
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x728,1,0);
        }
      }
      local_318 = 0;
      local_310 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,0);
      FGenericPlatformString::Memcpy(local_318,L"PNL_Rules3",0x16);
      local_328 = (longlong *)0x0;
      local_320 = 0;
      local_f0 = 0;
      lVar4 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x690),&local_318,0,6,&local_328);
      plVar9 = local_328;
      for (iVar10 = (int)local_320; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_328 != (longlong *)0x0) {
        FMemory::Free(local_328);
      }
      if (local_318 != 0) {
        FMemory::Free();
      }
      if (lVar4 != 0) {
        local_2f8 = 0;
        local_2f0 = 0x11;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f8,0);
        FGenericPlatformString::Memcpy(local_2f8,L"CONT_RulesImages",0x22);
        local_308 = (longlong *)0x0;
        local_300 = 0;
        local_e8 = 0;
        lVar5 = FUN_140ecbdf0(lVar4,&local_2f8,0,6,&local_308);
        plVar9 = local_308;
        for (iVar10 = (int)local_300; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_308 != (longlong *)0x0) {
          FMemory::Free(local_308);
        }
        if (local_2f8 != 0) {
          FMemory::Free();
        }
        if (lVar5 != 0) {
          FUN_142088ee0(lVar5,7);
        }
        local_2d8 = 0;
        local_2d0 = 0x10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
        FGenericPlatformString::Memcpy(local_2d8,L"TXT_Rules_Title",0x20);
        local_2e8 = (longlong *)0x0;
        local_2e0 = 0;
        local_e0 = 0;
        plVar6 = (longlong *)FUN_140ecc7d0(lVar4,&local_2d8,0,6,&local_2e8);
        plVar9 = local_2e8;
        for (iVar10 = (int)local_2e0; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_2e8 != (longlong *)0x0) {
          FMemory::Free(local_2e8);
        }
        if (local_2d8 != 0) {
          FMemory::Free();
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x740,1,0);
        }
        local_2c8 = 0;
        local_2c0 = 0x16;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
        FGenericPlatformString::Memcpy(local_2c8,L"TXT_Rules_Description",0x2c);
        local_1d8 = (longlong *)0x0;
        local_1d0 = 0;
        local_d8 = 0;
        plVar6 = (longlong *)FUN_140ecc7d0(lVar4,&local_2c8,0,6,&local_1d8);
        plVar9 = local_1d8;
        for (iVar10 = (int)local_1d0; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_1d8 != (longlong *)0x0) {
          FMemory::Free(local_1d8);
        }
        if (local_2c8 != 0) {
          FMemory::Free();
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x758,1,0);
        }
      }
    }
  }
  local_2b8[0] = 0;
  local_2b8[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2b8,0);
  FGenericPlatformString::Memcpy(local_2b8[0],L"btnClose",0x12);
  uVar3 = FName::FName(local_d0,L"OnCloseClicked",1);
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_90,L"CLOSE",L"GFxCSHelpMenu",L"CloseTextCaps");
  uVar3 = FUN_14157b610(param_1,local_2b8,uVar8,uVar3,&DAT_146b3e2b8);
  *(undefined8 *)(param_1 + 0x6a8) = uVar3;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_88 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  if (local_2b8[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x680) != 0) {
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_78,L"RULES",L"GFxCSHelpMenu",L"RulesText");
    FUN_142ed3af0(*(undefined8 *)(param_1 + 0x680),uVar3,0);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_70 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    FUN_142ed2600(*(undefined8 *)(param_1 + 0x680),3);
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x680) + 0x170);
    (**(code **)(*plVar9 + 0x38))(plVar9,0);
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_60,L"CONTROLS",L"GFxCSHelpMenu",L"ControlsText");
    FUN_142ed3af0(*(undefined8 *)(param_1 + 0x688),uVar3,0);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_58 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    FUN_142ed2600(*(undefined8 *)(param_1 + 0x688),3);
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x688) + 0x170);
    (**(code **)(*plVar9 + 0x38))(plVar9,0);
  }
  FUN_14157fbc0(param_1,1);
  lVar4 = *(longlong *)(param_1 + 0x4d8);
  uVar2 = FUN_142eb62a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014156f903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0xd8))(param_1 + 0x4d8,uVar2);
  return;
}



// FUNCTION 14156f910 FUN_14156f910 body=1075 status=ok
// SIG undefined FUN_14156f910(void)

void FUN_14156f910(longlong param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  wchar_t *pwVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 local_res10 [8];
  longlong *local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  FUN_142ecbc80();
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x690) = 0;
  if (*(int *)(param_1 + 0x694) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x688,0);
  }
  local_48 = 0;
  local_40 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"contentPanel",0x1a);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  uVar3 = FUN_14154e920(param_1,&local_48,0,6,&local_68);
  *(undefined8 *)(param_1 + 0x6b0) = uVar3;
  plVar12 = local_68;
  for (iVar9 = (int)local_60; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x6a0);
    if ((lVar6 != 0) && (iVar9 = *(int *)(lVar6 + 0x38) + -1, -1 < iVar9)) {
      lVar14 = (longlong)iVar9 * 0xe8;
      do {
        pwVar10 = L"BTN_Level";
        local_68 = (longlong *)0x0;
        local_60 = 0;
        if (iVar9 == *(int *)(lVar6 + 0x38) + -1) {
          pwVar10 = L"BTN_TopLevel";
        }
        if (*pwVar10 != L'\0') {
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (pwVar10[lVar13] != L'\0');
          uVar11 = (int)lVar13 + 1;
          local_60 = (ulonglong)uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
          }
          FGenericPlatformString::Memcpy(local_68,pwVar10,(longlong)(int)uVar11 * 2);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x6b0);
        uVar4 = AGameModeBase::GetPrivateStaticClass();
        uVar5 = FUN_142ebcee0(uVar3,&local_68,uVar4,1);
        if (uVar5 == 0) {
LAB_14156faeb:
          uVar5 = uVar8;
        }
        else {
          lVar13 = AGameModeBase::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_14156faeb;
        }
        if (local_68 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (uVar5 != 0) {
          iVar1 = *(int *)(lVar6 + 0x38);
          lVar13 = *(longlong *)(lVar6 + 0x30);
          uVar3 = FUN_140e971d0(param_1);
          FUN_141560820(uVar5,uVar3,lVar13 + lVar14,iVar9,iVar9 == iVar1 + -1);
          uVar3 = FName::FName(local_res10,L"OnLevelItemClicked",1);
          uVar4 = FUN_1404b03b0();
          FUN_14157ba50(param_1,uVar5,uVar4,uVar3,&DAT_146b3e2a0);
        }
        lVar14 = lVar14 + -0xe8;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    local_68 = (longlong *)0x0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FWeakObjectPtr::operator=(&local_68,0);
    FWeakObjectPtr::operator=(&local_60,0);
    FWeakObjectPtr::operator=(&local_58,0);
    FWeakObjectPtr::operator=(&local_50,0);
    lVar6 = *(longlong *)(param_1 + 0x6b0);
    uVar5 = uVar8;
    local_48 = lVar6;
    if (lVar6 != 0) {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      uVar5 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar3);
    }
    local_40 = uVar5;
    FUN_142ecfd10(param_1,&local_48,&local_68);
    lVar6 = DAT_1468a64a8;
    if (DAT_1468a64a8 != 0) {
      uVar11 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x6b0));
      uVar3 = FUN_140e971d0(param_1);
      iVar9 = FUN_14155ce20(lVar6,uVar3);
      uVar7 = (uVar11 - iVar9) - 1;
      uVar5 = uVar8;
      if ((-1 < (int)uVar7) && (uVar5 = (ulonglong)uVar11, (int)uVar7 < (int)uVar11)) {
        uVar5 = (ulonglong)uVar7;
      }
      plVar12 = *(longlong **)(param_1 + 0x6b0);
      (**(code **)(*plVar12 + 0x330))(plVar12);
      (**(code **)(*plVar12 + 0x338))(plVar12);
      *(undefined1 *)((longlong)plVar12 + 0x2ec) = 0;
      (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x2b8))
                (*(longlong **)(param_1 + 0x6b0),uVar5,1,0);
    }
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar6 == 0) {
    return;
  }
  lVar14 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8)
      != lVar14 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  uVar5 = FUN_140cfc7b0(lVar6);
  if (uVar5 != 0) {
    lVar6 = FUN_1415825a0();
    if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14156fd2a;
  }
  uVar5 = uVar8;
LAB_14156fd2a:
  FWeakObjectPtr::operator=(param_1 + 0x6b8,uVar5);
  return;
}



// FUNCTION 14156fd50 FUN_14156fd50 body=2049 status=ok
// SIG undefined FUN_14156fd50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14156fd50(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 auStack_228 [32];
  longlong **local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  FUN_142ecbc80();
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x690) = 0;
  if (*(int *)(param_1 + 0x694) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x688,0);
  }
  local_1f8 = 0;
  local_1f0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
  FGenericPlatformString::Memcpy(local_1f8,L"BTN_Play",0x12);
  uVar5 = FName::FName(local_130,L"OnPlayClicked",1);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_e8,L"PLAY",L"GFxCSMainMenu",L"PlayText");
  uVar5 = FUN_14157b990(param_1,&local_1f8,uVar6,uVar5);
  *(undefined8 *)(param_1 + 0x6a0) = uVar5;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_e0 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  if (local_1f8 != 0) {
    FMemory::Free();
  }
  local_1e8 = 0;
  local_1e0 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8,L"BTN_Booster",0x18);
  uVar5 = FName::FName(local_128,L"OnBuyBoosterClicked",1);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_d0,L"BUY BOOSTER",L"GFxCSMainMenu",L"BuyBoosterText");
  uVar5 = FUN_14157b990(param_1,&local_1e8,uVar6,uVar5);
  *(undefined8 *)(param_1 + 0x6a8) = uVar5;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_c8 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  if (local_1e8 != 0) {
    FMemory::Free();
  }
  local_1d8 = 0;
  local_1d0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  FGenericPlatformString::Memcpy(local_1d8,L"BTN_WhatsThis",0x1c);
  uVar5 = FName::FName(local_120,L"OnWhatsThisClicked",1);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_b8,L"WHAT\'S THIS",L"GFxCSMainMenu",L"WhatsThisText");
  uVar5 = FUN_14157b990(param_1,&local_1d8,uVar6,uVar5);
  *(undefined8 *)(param_1 + 0x6b0) = uVar5;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_b0 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  local_1b8 = 0;
  local_1b0 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
  FGenericPlatformString::Memcpy(local_1b8,L"PNL_Notification",0x22);
  local_208 = &local_1c8;
  local_1c8 = (longlong *)0x0;
  local_1c0 = 0;
  local_118 = 0;
  lVar7 = FUN_140e96f30(param_1,&local_1b8,0,6);
  plVar11 = local_1c8;
  for (iVar12 = (int)local_1c0; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_1c8 != (longlong *)0x0) {
    FMemory::Free(local_1c8);
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  if (lVar7 != 0) {
    local_198 = 0;
    local_190 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    FGenericPlatformString::Memcpy(local_198,L"TXT_Notifications_Title",0x30);
    local_208 = &local_1a8;
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    local_110 = 0;
    uVar5 = FUN_140ecc7d0(lVar7,&local_198,0,6);
    *(undefined8 *)(param_1 + 0x6c8) = uVar5;
    plVar11 = local_1a8;
    for (iVar12 = (int)local_1a0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
    if (local_198 != 0) {
      FMemory::Free();
    }
    if (*(longlong **)(param_1 + 0x6c8) != (longlong *)0x0) {
      lVar10 = **(longlong **)(param_1 + 0x6c8);
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_a0,L"Did You Know?",L"GFxCSMainMenu",L"DidYouKnowTitleText");
      (**(code **)(lVar10 + 0x2b0))(*(undefined8 *)(param_1 + 0x6c8),uVar5,1,0);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_98 + 1;
        lVar10 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)local_98 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
    }
    local_178 = 0;
    local_170 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    FGenericPlatformString::Memcpy(local_178,L"TXT_Notifications",0x24);
    local_208 = &local_188;
    local_188 = (longlong *)0x0;
    local_180 = 0;
    local_108 = 0;
    uVar5 = FUN_140ecc7d0(lVar7,&local_178,0,6);
    *(undefined8 *)(param_1 + 0x6d0) = uVar5;
    plVar11 = local_188;
    for (iVar12 = (int)local_180; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_178 != 0) {
      FMemory::Free();
    }
    lVar7 = DAT_1468a64a8;
    if (*(longlong **)(param_1 + 0x6d0) != (longlong *)0x0) {
      if ((DAT_1468a64a8 == 0) || (lVar10 = *(longlong *)(DAT_1468a64a8 + 0xb0), lVar10 == 0)) {
        lVar7 = **(longlong **)(param_1 + 0x6d0);
        uVar5 = FUN_1404b03b0();
        (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(param_1 + 0x6d0),uVar5,1,0);
      }
      else {
        iVar12 = *(int *)(lVar10 + 0x1e8);
        iVar3 = 0;
        if (0 < iVar12) {
          iVar3 = rand();
          lVar10 = *(longlong *)(lVar7 + 0xb0);
          iVar4 = (int)((float)iVar3 * 3.051851e-05 * (float)iVar12);
          iVar3 = iVar12 + -1;
          if (iVar4 <= iVar12 + -1) {
            iVar3 = iVar4;
          }
        }
        FText::FText(local_100,*(longlong *)(lVar10 + 0x1e0) + (longlong)iVar3 * 0x18);
        (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x2b0))
                  (*(longlong **)(param_1 + 0x6d0),local_100,1,0);
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_f8 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar1 = (int *)((longlong)local_f8 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_f8 + 8))(local_f8,1);
            }
          }
        }
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x6a0);
  local_158 = uVar8;
  local_160 = lVar7;
  if (lVar7 != 0) {
    uVar5 = UBlendableInterface::GetPrivateStaticClass();
    local_158 = UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar5);
  }
  local_200 = 0;
  local_208 = (longlong **)0x0;
  FUN_142ecfdd0(param_1,&local_160,0,*(undefined8 *)(param_1 + 0x6a8));
  lVar7 = *(longlong *)(param_1 + 0x6a8);
  local_148 = uVar8;
  local_150 = lVar7;
  if (lVar7 != 0) {
    uVar5 = UBlendableInterface::GetPrivateStaticClass();
    local_148 = UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar5);
  }
  local_200 = 0;
  local_208 = (longlong **)0x0;
  FUN_142ecfdd0(param_1,&local_150,*(undefined8 *)(param_1 + 0x6a0),*(undefined8 *)(param_1 + 0x6b0)
               );
  lVar7 = *(longlong *)(param_1 + 0x6b0);
  local_140 = lVar7;
  if (lVar7 != 0) {
    uVar8 = UBlendableInterface::GetPrivateStaticClass();
    uVar8 = UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar8);
  }
  local_200 = 0;
  local_208 = (longlong **)0x0;
  local_138 = uVar8;
  FUN_142ecfdd0(param_1,&local_140,*(undefined8 *)(param_1 + 0x6a8),0);
  if ((((DAT_1468a64a8 == 0) ||
       (plVar11 = *(longlong **)(DAT_1468a64a8 + 0x88), plVar11 == (longlong *)0x0)) ||
      ((char)plVar11[3] == '\0')) || (cVar2 = (**(code **)(*plVar11 + 0x10))(), cVar2 == '\0')) {
    FWeakObjectPtr::operator=(&local_168,param_1);
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_78);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_FUN_1444f8920;
      puVar9[1] = param_1;
      *(undefined4 *)(puVar9 + 2) = local_168;
      *(undefined4 *)((longlong)puVar9 + 0x14) = local_164;
    }
    local_88[0] = &LAB_141558a30;
    FUN_14208c260(param_1,local_88);
    if (local_48 != 0) {
      plVar11 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar11 = local_58;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141570560 FUN_141570560 body=11819 status=ok
// SIG undefined FUN_141570560(void)

void FUN_141570560(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong local_d28;
  undefined8 local_d20;
  longlong *local_d18;
  undefined8 local_d10;
  longlong local_d08;
  undefined8 local_d00;
  longlong local_cf8;
  undefined8 local_cf0;
  longlong local_ce8;
  undefined8 local_ce0;
  longlong local_cd8;
  undefined8 local_cd0;
  longlong *local_cc8;
  undefined8 local_cc0;
  longlong local_cb8;
  undefined8 local_cb0;
  longlong *local_ca8;
  undefined8 local_ca0;
  longlong local_c98;
  undefined8 local_c90;
  longlong *local_c88;
  undefined8 local_c80;
  longlong local_c78;
  undefined8 local_c70;
  longlong *local_c68;
  undefined8 local_c60;
  longlong local_c58;
  undefined8 local_c50;
  longlong *local_c48;
  undefined8 local_c40;
  longlong local_c38;
  undefined8 local_c30;
  longlong *local_c28;
  undefined8 local_c20;
  longlong local_c18;
  undefined8 local_c10;
  longlong *local_c08;
  undefined8 local_c00;
  longlong local_bf8;
  undefined8 local_bf0;
  longlong local_be8;
  undefined8 local_be0;
  longlong *local_bd8;
  undefined8 local_bd0;
  longlong local_bc8;
  undefined8 local_bc0;
  longlong *local_bb8;
  undefined8 local_bb0;
  longlong local_ba8;
  undefined8 local_ba0;
  longlong *local_b98;
  undefined8 local_b90;
  longlong local_b88;
  undefined8 local_b80;
  longlong *local_b78;
  undefined8 local_b70;
  longlong local_b68;
  undefined8 local_b60;
  longlong *local_b58;
  undefined8 local_b50;
  longlong local_b48;
  undefined8 local_b40;
  longlong local_b38;
  undefined8 local_b30;
  longlong *local_b28;
  undefined8 local_b20;
  longlong local_b18;
  undefined8 local_b10;
  longlong *local_b08;
  undefined8 local_b00;
  longlong local_af8;
  undefined8 local_af0;
  longlong local_ae8;
  undefined8 local_ae0;
  longlong local_ad8;
  undefined8 local_ad0;
  longlong local_ac8;
  undefined8 local_ac0;
  longlong *local_ab8;
  undefined8 local_ab0;
  longlong local_aa8;
  undefined8 local_aa0;
  longlong *local_a98;
  undefined8 local_a90;
  longlong local_a88;
  undefined8 local_a80;
  longlong local_a78;
  undefined8 local_a70;
  longlong local_a68;
  undefined8 local_a60;
  longlong local_a58;
  undefined8 local_a50;
  longlong *local_a48;
  undefined8 local_a40;
  longlong local_a38;
  undefined8 local_a30;
  longlong *local_a28;
  undefined8 local_a20;
  longlong local_a18;
  undefined8 local_a10;
  longlong *local_a08;
  undefined8 local_a00;
  longlong local_9f8;
  undefined8 local_9f0;
  longlong local_9e8;
  undefined8 local_9e0;
  longlong *local_9d8;
  undefined8 local_9d0;
  longlong local_9c8;
  undefined8 local_9c0;
  longlong local_9b8;
  undefined8 local_9b0;
  longlong local_9a8;
  undefined8 local_9a0;
  longlong local_998;
  undefined8 local_990;
  longlong local_988;
  undefined8 local_980;
  longlong local_978;
  undefined8 local_970;
  longlong *local_968;
  undefined8 local_960;
  longlong local_958;
  undefined8 local_950;
  longlong local_948;
  undefined8 local_940;
  longlong local_938;
  undefined8 local_930;
  longlong local_928;
  undefined8 local_920;
  longlong local_918 [58];
  undefined2 local_748 [2];
  undefined8 local_744;
  longlong local_738;
  undefined8 local_730;
  longlong local_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined2 local_710 [2];
  undefined8 local_70c;
  longlong local_700;
  undefined8 local_6f8;
  longlong local_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined2 local_6d8 [2];
  undefined8 local_6d4;
  longlong local_6c8;
  undefined8 local_6c0;
  longlong local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined2 local_6a0 [2];
  undefined8 local_69c;
  longlong local_690;
  undefined8 local_688;
  longlong local_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined2 local_668 [2];
  undefined8 local_664;
  longlong local_658;
  undefined8 local_650;
  longlong local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined2 local_630 [2];
  undefined8 local_62c;
  longlong local_620;
  undefined8 local_618;
  longlong local_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined2 local_5f8 [2];
  undefined8 local_5f4;
  longlong local_5e8;
  undefined8 local_5e0;
  longlong local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined2 local_5c0 [2];
  undefined8 local_5bc;
  longlong local_5b0;
  undefined8 local_5a8;
  longlong local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined2 local_588 [2];
  undefined8 local_584;
  longlong local_578;
  undefined8 local_570;
  longlong local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined2 local_550 [2];
  undefined8 local_54c;
  longlong local_540;
  undefined8 local_538;
  longlong local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined2 local_518 [2];
  undefined8 local_514;
  longlong local_508;
  undefined8 local_500;
  longlong local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined2 local_4e0 [2];
  undefined8 local_4dc;
  longlong local_4d0;
  undefined8 local_4c8;
  longlong local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined2 local_4a8 [2];
  undefined8 local_4a4;
  longlong local_498;
  undefined8 local_490;
  longlong local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined2 local_470 [2];
  undefined8 local_46c;
  longlong local_460;
  undefined8 local_458;
  longlong local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined2 local_438 [2];
  undefined8 local_434;
  longlong local_428;
  undefined8 local_420;
  longlong local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined2 local_400 [2];
  undefined8 local_3fc;
  longlong local_3f0;
  undefined8 local_3e8;
  longlong local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined2 local_3c8 [2];
  undefined8 local_3c4;
  longlong local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined2 local_390 [2];
  undefined8 local_38c;
  longlong local_380;
  undefined8 local_378;
  longlong local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0 [8];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8 [8];
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [24];
  undefined1 local_220 [24];
  undefined1 local_208 [24];
  undefined1 local_1f0 [24];
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
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [32];
  undefined1 local_128 [24];
  undefined1 local_110 [104];
  undefined1 local_a8;
  undefined2 local_a5;
  
  FUN_142ecbc80();
  *(undefined4 *)(param_1 + 0x690) = 0;
  if (*(int *)(param_1 + 0x694) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x688,0);
  }
  FWeakObjectPtr::operator=(param_1 + 0x808,DAT_1468a64a8);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x808);
  if ((cVar2 == '\0') || (lVar4 = FWeakObjectPtr::Get(param_1 + 0x808), *(int *)(lVar4 + 0x70) != 0)
     ) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x829) = uVar3;
  local_b18 = 0;
  local_b10 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b18,0);
  FGenericPlatformString::Memcpy(local_b18,L"PNL_TargetScore",0x20);
  local_b28 = (longlong *)0x0;
  local_b20 = 0;
  uVar5 = FUN_140e96f30(param_1,&local_b18,0,6,&local_b28);
  *(undefined8 *)(param_1 + 0x6e8) = uVar5;
  plVar7 = local_b28;
  for (iVar8 = (int)local_b20; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_b28 != (longlong *)0x0) {
    FMemory::Free(local_b28);
  }
  if (local_b18 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6e8) != 0) {
    local_af8 = 0;
    local_af0 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_af8,0);
    FGenericPlatformString::Memcpy(local_af8,L"txtTargetScoreNum",0x24);
    local_b08 = (longlong *)0x0;
    local_b00 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x6e8),&local_af8,0,6,&local_b08);
    *(undefined8 *)(param_1 + 0x6f0) = uVar5;
    plVar7 = local_b08;
    for (iVar8 = (int)local_b00; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_b08 != (longlong *)0x0) {
      FMemory::Free(local_b08);
    }
    if (local_af8 != 0) {
      FMemory::Free();
    }
    local_ae8 = 0;
    local_ae0 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_ae8,0);
    FGenericPlatformString::Memcpy(local_ae8,L"txtTargetScoreTitle",0x28);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1d8,L"TARGET SCORE",L"GFxCSPuzzleMenu",L"TargetScoreText");
    FUN_142f100e0(*(undefined8 *)(param_1 + 0x6e8),&local_ae8,uVar5);
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1d0 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)local_1d0 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    if (local_ae8 != 0) {
      FMemory::Free();
    }
    local_744 = 0;
    local_738 = 0;
    local_730 = 0;
    local_728 = 0;
    local_720 = 0;
    local_718 = 0;
    local_748[0] = 2;
    local_ad8 = 0;
    local_ad0 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_ad8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_ad8,0xd,"mouseEnabled",0xd,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x6e8),&local_ad8,local_748);
    if (local_ad8 != 0) {
      FMemory::Free();
    }
    if (local_728 != 0) {
      FMemory::Free();
    }
    if (local_738 != 0) {
      FMemory::Free();
    }
    local_70c = 0;
    local_700 = 0;
    local_6f8 = 0;
    local_6f0 = 0;
    local_6e8 = 0;
    local_6e0 = 0;
    local_710[0] = 2;
    local_d28 = 0;
    local_d20 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d28,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_d28,0xe,"mouseChildren",0xe,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x6e8),&local_d28,local_710);
    if (local_d28 != 0) {
      FMemory::Free();
    }
    if (local_6f0 != 0) {
      FMemory::Free();
    }
    if (local_700 != 0) {
      FMemory::Free();
    }
  }
  local_aa8 = 0;
  local_aa0 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_aa8,0);
  FGenericPlatformString::Memcpy(local_aa8,L"PNL_CurrentScore",0x22);
  local_ab8 = (longlong *)0x0;
  local_ab0 = 0;
  uVar5 = FUN_140e96f30(param_1,&local_aa8,0,6,&local_ab8);
  *(undefined8 *)(param_1 + 0x6f8) = uVar5;
  plVar7 = local_ab8;
  for (iVar8 = (int)local_ab0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_ab8 != (longlong *)0x0) {
    FMemory::Free(local_ab8);
  }
  if (local_aa8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    local_a88 = 0;
    local_a80 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a88,0);
    FGenericPlatformString::Memcpy(local_a88,L"txtCurrentScoreNum",0x26);
    local_a98 = (longlong *)0x0;
    local_a90 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x6f8),&local_a88,0,6,&local_a98);
    *(undefined8 *)(param_1 + 0x700) = uVar5;
    plVar7 = local_a98;
    for (iVar8 = (int)local_a90; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_a98 != (longlong *)0x0) {
      FMemory::Free(local_a98);
    }
    if (local_a88 != 0) {
      FMemory::Free();
    }
    local_a78 = 0;
    local_a70 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a78,0);
    FGenericPlatformString::Memcpy(local_a78,L"txtCurrentScoreTitle",0x2a);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1c0,L"YOUR SCORE",L"GFxCSPuzzleMenu",L"YourScoreText");
    FUN_142f100e0(*(undefined8 *)(param_1 + 0x6f8),&local_a78,uVar5);
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1b8 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar1 = (int *)((longlong)local_1b8 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
    if (local_a78 != 0) {
      FMemory::Free();
    }
    local_6d4 = 0;
    local_6c8 = 0;
    local_6c0 = 0;
    local_6b8 = 0;
    local_6b0 = 0;
    local_6a8 = 0;
    local_6d8[0] = 2;
    local_a68 = 0;
    local_a60 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a68,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_a68,0xd,"mouseEnabled",0xd,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x6f8),&local_a68,local_6d8);
    if (local_a68 != 0) {
      FMemory::Free();
    }
    if (local_6b8 != 0) {
      FMemory::Free();
    }
    if (local_6c8 != 0) {
      FMemory::Free();
    }
    local_69c = 0;
    local_690 = 0;
    local_688 = 0;
    local_680 = 0;
    local_678 = 0;
    local_670 = 0;
    local_6a0[0] = 2;
    local_a58 = 0;
    local_a50 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a58,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_a58,0xe,"mouseChildren",0xe,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x6f8),&local_a58,local_6a0);
    if (local_a58 != 0) {
      FMemory::Free();
    }
    if (local_680 != 0) {
      FMemory::Free();
    }
    if (local_690 != 0) {
      FMemory::Free();
    }
  }
  local_a38 = 0;
  local_a30 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a38,0);
  FGenericPlatformString::Memcpy(local_a38,L"PNL_Highscore",0x1c);
  local_a48 = (longlong *)0x0;
  local_a40 = 0;
  local_250 = 0;
  uVar5 = FUN_140e96f30(param_1,&local_a38,0,6,&local_a48);
  *(undefined8 *)(param_1 + 0x708) = uVar5;
  plVar7 = local_a48;
  for (iVar8 = (int)local_a40; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_a48 != (longlong *)0x0) {
    FMemory::Free(local_a48);
  }
  if (local_a38 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
    local_d08 = 0;
    local_d00 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d08,0);
    FGenericPlatformString::Memcpy(local_d08,L"txtHighscoreNum",0x20);
    local_d18 = (longlong *)0x0;
    local_d10 = 0;
    local_248 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x708),&local_d08,0,6,&local_d18);
    *(undefined8 *)(param_1 + 0x710) = uVar5;
    plVar7 = local_d18;
    for (iVar8 = (int)local_d10; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_d18 != (longlong *)0x0) {
      FMemory::Free(local_d18);
    }
    if (local_d08 != 0) {
      FMemory::Free();
    }
    local_cf8 = 0;
    local_cf0 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_cf8,0);
    FGenericPlatformString::Memcpy(local_cf8,L"txtHighscoreTitle",0x24);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1a8,L"HIGH SCORE",L"GFxCSPuzzleMenu",L"HighScoreText");
    FUN_142f100e0(*(undefined8 *)(param_1 + 0x708),&local_cf8,uVar5);
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1a0 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)local_1a0 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    if (local_cf8 != 0) {
      FMemory::Free();
    }
    local_664 = 0;
    local_658 = 0;
    local_650 = 0;
    local_648 = 0;
    local_640 = 0;
    local_638 = 0;
    local_668[0] = 2;
    local_ce8 = 0;
    local_ce0 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_ce8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_ce8,0xd,"mouseEnabled",0xd,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x708),&local_ce8,local_668);
    if (local_ce8 != 0) {
      FMemory::Free();
    }
    if (local_648 != 0) {
      FMemory::Free();
    }
    if (local_658 != 0) {
      FMemory::Free();
    }
    local_62c = 0;
    local_620 = 0;
    local_618 = 0;
    local_610 = 0;
    local_608 = 0;
    local_600 = 0;
    local_630[0] = 2;
    local_cd8 = 0;
    local_cd0 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_cd8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_cd8,0xe,"mouseChildren",0xe,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x708),&local_cd8,local_630);
    if (local_cd8 != 0) {
      FMemory::Free();
    }
    if (local_610 != 0) {
      FMemory::Free();
    }
    if (local_620 != 0) {
      FMemory::Free();
    }
  }
  local_cb8 = 0;
  local_cb0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_cb8,0);
  FGenericPlatformString::Memcpy(local_cb8,L"pnlDebug",0x12);
  local_cc8 = (longlong *)0x0;
  local_cc0 = 0;
  local_240 = 0;
  uVar5 = FUN_140ac4770(param_1,&local_cb8,0,6,&local_cc8);
  *(undefined8 *)(param_1 + 0x718) = uVar5;
  plVar7 = local_cc8;
  for (iVar8 = (int)local_cc0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_cc8 != (longlong *)0x0) {
    FMemory::Free(local_cc8);
  }
  if (local_cb8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x718) != 0) {
    local_c98 = 0;
    local_c90 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c98,0);
    FGenericPlatformString::Memcpy(local_c98,L"txtDebugCurrentScore",0x2a);
    local_ca8 = (longlong *)0x0;
    local_ca0 = 0;
    local_338 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x718),&local_c98,0,6,&local_ca8);
    *(undefined8 *)(param_1 + 0x720) = uVar5;
    plVar7 = local_ca8;
    for (iVar8 = (int)local_ca0; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_ca8 != (longlong *)0x0) {
      FMemory::Free(local_ca8);
    }
    if (local_c98 != 0) {
      FMemory::Free();
    }
    local_c78 = 0;
    local_c70 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c78,0);
    FGenericPlatformString::Memcpy(local_c78,L"txtDebugRealCurrentScore",0x32);
    local_c88 = (longlong *)0x0;
    local_c80 = 0;
    local_330 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x718),&local_c78,0,6,&local_c88);
    *(undefined8 *)(param_1 + 0x728) = uVar5;
    plVar7 = local_c88;
    for (iVar8 = (int)local_c80; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_c88 != (longlong *)0x0) {
      FMemory::Free(local_c88);
    }
    if (local_c78 != 0) {
      FMemory::Free();
    }
    local_c58 = 0;
    local_c50 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c58,0);
    FGenericPlatformString::Memcpy(local_c58,L"txtDebugParScore",0x22);
    local_c68 = (longlong *)0x0;
    local_c60 = 0;
    local_328 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x718),&local_c58,0,6,&local_c68);
    *(undefined8 *)(param_1 + 0x730) = uVar5;
    plVar7 = local_c68;
    for (iVar8 = (int)local_c60; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_c68 != (longlong *)0x0) {
      FMemory::Free(local_c68);
    }
    if (local_c58 != 0) {
      FMemory::Free();
    }
    local_c38 = 0;
    local_c30 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c38,0);
    FGenericPlatformString::Memcpy(local_c38,L"txtDebugRealParScore",0x2a);
    local_c48 = (longlong *)0x0;
    local_c40 = 0;
    local_320 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x718),&local_c38,0,6,&local_c48);
    *(undefined8 *)(param_1 + 0x738) = uVar5;
    plVar7 = local_c48;
    for (iVar8 = (int)local_c40; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_c48 != (longlong *)0x0) {
      FMemory::Free(local_c48);
    }
    if (local_c38 != 0) {
      FMemory::Free();
    }
    local_c18 = 0;
    local_c10 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c18,0);
    FGenericPlatformString::Memcpy(local_c18,L"txtDebugHighestScore",0x2a);
    local_c28 = (longlong *)0x0;
    local_c20 = 0;
    local_318 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x718),&local_c18,0,6,&local_c28);
    *(undefined8 *)(param_1 + 0x740) = uVar5;
    plVar7 = local_c28;
    for (iVar8 = (int)local_c20; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_c28 != (longlong *)0x0) {
      FMemory::Free(local_c28);
    }
    if (local_c18 != 0) {
      FMemory::Free();
    }
    local_be8 = 0;
    local_be0 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_be8,0);
    FGenericPlatformString::Memcpy(local_be8,L"txtDebugRealHighestScore",0x32);
    local_c08 = (longlong *)0x0;
    local_c00 = 0;
    local_310 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x718),&local_be8,0,6,&local_c08);
    *(undefined8 *)(param_1 + 0x748) = uVar5;
    plVar7 = local_c08;
    for (iVar8 = (int)local_c00; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_c08 != (longlong *)0x0) {
      FMemory::Free(local_c08);
    }
    if (local_be8 != 0) {
      FMemory::Free();
    }
    local_bc8 = 0;
    local_bc0 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_bc8,0);
    FGenericPlatformString::Memcpy(local_bc8,L"txtDebugTokenLeft",0x24);
    local_bd8 = (longlong *)0x0;
    local_bd0 = 0;
    local_308 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x718),&local_bc8,0,6,&local_bd8);
    *(undefined8 *)(param_1 + 0x750) = uVar5;
    plVar7 = local_bd8;
    for (iVar8 = (int)local_bd0; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_bd8 != (longlong *)0x0) {
      FMemory::Free(local_bd8);
    }
    if (local_bc8 != 0) {
      FMemory::Free();
    }
    local_ba8 = 0;
    local_ba0 = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_ba8,0);
    FGenericPlatformString::Memcpy(local_ba8,L"txtDebugMatchingTileValue",0x34);
    local_bb8 = (longlong *)0x0;
    local_bb0 = 0;
    local_300 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x718),&local_ba8,0,6,&local_bb8);
    *(undefined8 *)(param_1 + 0x758) = uVar5;
    plVar7 = local_bb8;
    for (iVar8 = (int)local_bb0; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_bb8 != (longlong *)0x0) {
      FMemory::Free(local_bb8);
    }
    if (local_ba8 != 0) {
      FMemory::Free();
    }
    local_b88 = 0;
    local_b80 = 0x21;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b88,0);
    FGenericPlatformString::Memcpy(local_b88,L"txtDebugPerfectAlignmentModifier",0x42);
    local_b98 = (longlong *)0x0;
    local_b90 = 0;
    local_2f8 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x718),&local_b88,0,6,&local_b98);
    *(undefined8 *)(param_1 + 0x760) = uVar5;
    plVar7 = local_b98;
    for (iVar8 = (int)local_b90; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_b98 != (longlong *)0x0) {
      FMemory::Free(local_b98);
    }
    if (local_b88 != 0) {
      FMemory::Free();
    }
    local_b68 = 0;
    local_b60 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b68,0);
    FGenericPlatformString::Memcpy(local_b68,L"txtDebugPuzzleId",0x22);
    local_b78 = (longlong *)0x0;
    local_b70 = 0;
    local_2f0 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x718),&local_b68,0,6,&local_b78);
    *(undefined8 *)(param_1 + 0x768) = uVar5;
    plVar7 = local_b78;
    for (iVar8 = (int)local_b70; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_b78 != (longlong *)0x0) {
      FMemory::Free(local_b78);
    }
    if (local_b68 != 0) {
      FMemory::Free();
    }
    local_b48 = 0;
    local_b40 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b48,0);
    FGenericPlatformString::Memcpy(local_b48,L"txtDebugTokenPos",0x22);
    local_b58 = (longlong *)0x0;
    local_b50 = 0;
    local_2e8 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x718),&local_b48,0,6,&local_b58);
    *(undefined8 *)(param_1 + 0x770) = uVar5;
    plVar7 = local_b58;
    for (iVar8 = (int)local_b50; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_b58 != (longlong *)0x0) {
      FMemory::Free(local_b58);
    }
    if (local_b48 != 0) {
      FMemory::Free();
    }
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x278))(*(longlong **)(param_1 + 0x718),0);
    local_5f4 = 0;
    local_5e8 = 0;
    local_5e0 = 0;
    local_5d8 = 0;
    local_5d0 = 0;
    local_5c8 = 0;
    local_5f8[0] = 2;
    local_b38 = 0;
    local_b30 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b38,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_b38,0xd,"mouseEnabled",0xd,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x718),&local_b38,local_5f8);
    if (local_b38 != 0) {
      FMemory::Free();
    }
    if (local_5d8 != 0) {
      FMemory::Free();
    }
    if (local_5e8 != 0) {
      FMemory::Free();
    }
    local_5bc = 0;
    local_5b0 = 0;
    local_5a8 = 0;
    local_5a0 = 0;
    local_598 = 0;
    local_590 = 0;
    local_5c0[0] = 2;
    local_ac8 = 0;
    local_ac0 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_ac8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_ac8,0xe,"mouseChildren",0xe,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x718),&local_ac8,local_5c0);
    if (local_ac8 != 0) {
      FMemory::Free();
    }
    if (local_5a0 != 0) {
      FMemory::Free();
    }
    if (local_5b0 != 0) {
      FMemory::Free();
    }
  }
  local_bf8 = 0;
  local_bf0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_bf8,0);
  FGenericPlatformString::Memcpy(local_bf8,L"BTN_Reset",0x14);
  uVar5 = FName::FName(local_2e0,L"OnQuickPassClicked",1);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_190,L"QUICK PASS",L"GFxCSPuzzleMenu",L"QuickPassText");
  uVar5 = FUN_14157b8e0(param_1,&local_bf8,uVar6,uVar5,&DAT_1468a6618);
  *(undefined8 *)(param_1 + 0x7a0) = uVar5;
  if (local_188 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_188 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_188)(local_188);
      LOCK();
      piVar1 = (int *)((longlong)local_188 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_188 + 8))(local_188,1);
      }
    }
  }
  if (local_bf8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_a18 = 0;
    local_a10 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a18,0);
    FGenericPlatformString::Memcpy(local_a18,L"boosterTimer",0x1a);
    local_a28 = (longlong *)0x0;
    local_a20 = 0;
    local_2d8 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x7a0),&local_a18,0,6,&local_a28);
    *(undefined8 *)(param_1 + 0x7a8) = uVar5;
    plVar7 = local_a28;
    for (iVar8 = (int)local_a20; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_a28 != (longlong *)0x0) {
      FMemory::Free(local_a28);
    }
    if (local_a18 != 0) {
      FMemory::Free();
    }
  }
  local_9f8 = 0;
  local_9f0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9f8,0);
  FGenericPlatformString::Memcpy(local_9f8,L"ANIM_Btn_Submit",0x20);
  local_a08 = (longlong *)0x0;
  local_a00 = 0;
  local_2d0 = 0;
  uVar5 = FUN_140e96f30(param_1,&local_9f8,0,6,&local_a08);
  *(undefined8 *)(param_1 + 0x7b8) = uVar5;
  plVar7 = local_a08;
  for (iVar8 = (int)local_a00; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_a08 != (longlong *)0x0) {
    FMemory::Free(local_a08);
  }
  if (local_9f8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7b8) != 0) {
    local_9e8 = 0;
    local_9e0 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9e8,0);
    FGenericPlatformString::Memcpy(local_9e8,L"BTN_Submit",0x16);
    uVar5 = FName::FName(local_2c8,L"OnSubmitClicked",1);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_178,L"SUBMIT",L"GFxCSPuzzleMenu",L"SubmitText");
    uVar5 = FUN_14157b8e0(param_1,&local_9e8,uVar6,uVar5,&DAT_1468a6518);
    *(undefined8 *)(param_1 + 0x7b0) = uVar5;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_170 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)local_170 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
    if (local_9e8 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x7b0) != 0) {
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x7b0) + 0x170);
      (**(code **)(*plVar7 + 0x38))(plVar7,0);
    }
  }
  local_9c8 = 0;
  local_9c0 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9c8,0);
  FGenericPlatformString::Memcpy(local_9c8,L"ANIM_ProgressBar",0x22);
  local_9d8 = (longlong *)0x0;
  local_9d0 = 0;
  local_2c0 = 0;
  uVar5 = FUN_140e96f30(param_1,&local_9c8,0,6,&local_9d8);
  *(undefined8 *)(param_1 + 0x7c0) = uVar5;
  plVar7 = local_9d8;
  for (iVar8 = (int)local_9d0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_9d8 != (longlong *)0x0) {
    FMemory::Free(local_9d8);
  }
  if (local_9c8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7c0) != 0) {
    local_584 = 0;
    local_578 = 0;
    local_570 = 0;
    local_568 = 0;
    local_560 = 0;
    local_558 = 0;
    local_588[0] = 2;
    local_9b8 = 0;
    local_9b0 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9b8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_9b8,0xd,"mouseEnabled",0xd,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x7c0),&local_9b8,local_588);
    if (local_9b8 != 0) {
      FMemory::Free();
    }
    if (local_568 != 0) {
      FMemory::Free();
    }
    if (local_578 != 0) {
      FMemory::Free();
    }
    local_54c = 0;
    local_540 = 0;
    local_538 = 0;
    local_530 = 0;
    local_528 = 0;
    local_520 = 0;
    local_550[0] = 2;
    local_9a8 = 0;
    local_9a0 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9a8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_9a8,0xe,"mouseChildren",0xe,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x7c0),&local_9a8,local_550);
    if (local_9a8 != 0) {
      FMemory::Free();
    }
    if (local_530 != 0) {
      FMemory::Free();
    }
    if (local_540 != 0) {
      FMemory::Free();
    }
    local_998 = 0;
    local_990 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_998,0);
    FGenericPlatformString::Memcpy(local_998,L"pbScore",0x10);
    local_918[0x22] = 0;
    local_918[0x23] = 0;
    local_258 = 0;
    uVar5 = FUN_14154ee60(*(undefined8 *)(param_1 + 0x7c0),&local_998,0,6,local_918 + 0x22);
    *(undefined8 *)(param_1 + 0x780) = uVar5;
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_918 + 0x22);
    if (local_998 != 0) {
      FMemory::Free();
    }
    local_988 = 0;
    local_980 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_988,0);
    FGenericPlatformString::Memcpy(local_988,L"ANIM_BonusScore",0x20);
    local_918[0x24] = 0;
    local_918[0x25] = 0;
    local_2b8 = 0;
    uVar5 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x7c0),&local_988,0,6,local_918 + 0x24);
    *(undefined8 *)(param_1 + 0x788) = uVar5;
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_918 + 0x24);
    if (local_988 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x788) != 0) {
      local_978 = 0;
      local_970 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_978,0);
      FGenericPlatformString::Memcpy(local_978,L"txtBonusScore",0x1c);
      local_918[0x26] = 0;
      local_918[0x27] = 0;
      local_2b0 = 0;
      uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x7c0),&local_978,0,6,local_918 + 0x26);
      *(undefined8 *)(param_1 + 0x790) = uVar5;
      TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_918 + 0x26);
      if (local_978 != 0) {
        FMemory::Free();
      }
      if (*(char *)(param_1 + 0x829) != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x788) + 0x278))(*(longlong **)(param_1 + 0x788),0);
      }
    }
  }
  local_958 = 0;
  local_950 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_958,0);
  FGenericPlatformString::Memcpy(local_958,L"PNL_Notification",0x22);
  local_968 = (longlong *)0x0;
  local_960 = 0;
  local_2a8 = 0;
  uVar5 = FUN_140e96f30(param_1,&local_958,0,6,&local_968);
  *(undefined8 *)(param_1 + 0x7c8) = uVar5;
  plVar7 = local_968;
  for (iVar8 = (int)local_960; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_968 != (longlong *)0x0) {
    FMemory::Free(local_968);
  }
  if (local_958 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7c8) != 0) {
    local_514 = 0;
    local_508 = 0;
    local_500 = 0;
    local_4f8 = 0;
    local_4f0 = 0;
    local_4e8 = 0;
    local_518[0] = 2;
    local_948 = 0;
    local_940 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_948,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_948,0xd,"mouseEnabled",0xd,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x7c8),&local_948,local_518);
    if (local_948 != 0) {
      FMemory::Free();
    }
    if (local_4f8 != 0) {
      FMemory::Free();
    }
    if (local_508 != 0) {
      FMemory::Free();
    }
    local_4dc = 0;
    local_4d0 = 0;
    local_4c8 = 0;
    local_4c0 = 0;
    local_4b8 = 0;
    local_4b0 = 0;
    local_4e0[0] = 2;
    local_938 = 0;
    local_930 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_938,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_938,0xe,"mouseChildren",0xe,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x7c8),&local_938,local_4e0);
    if (local_938 != 0) {
      FMemory::Free();
    }
    if (local_4c0 != 0) {
      FMemory::Free();
    }
    if (local_4d0 != 0) {
      FMemory::Free();
    }
    local_928 = 0;
    local_920 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_928,0);
    FGenericPlatformString::Memcpy(local_928,L"TXT_Notifications",0x24);
    local_918[0x28] = 0;
    local_918[0x29] = 0;
    local_2a0 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x7c8),&local_928,0,6,local_918 + 0x28);
    *(undefined8 *)(param_1 + 2000) = uVar5;
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_918 + 0x28);
    if (local_928 != 0) {
      FMemory::Free();
    }
  }
  local_918[0] = 0;
  local_918[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918,0);
  FGenericPlatformString::Memcpy(local_918[0],L"PNL_BonusScore",0x1e);
  local_918[0x2a] = 0;
  local_918[0x2b] = 0;
  local_298 = 0;
  uVar5 = FUN_140e96f30(param_1,local_918,0,6,local_918 + 0x2a);
  *(undefined8 *)(param_1 + 0x7d8) = uVar5;
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_918 + 0x2a);
  if (local_918[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    local_4a4 = 0;
    local_498 = 0;
    local_490 = 0;
    local_488 = 0;
    local_480 = 0;
    local_478 = 0;
    local_4a8[0] = 2;
    local_918[2] = 0;
    local_918[3] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 2,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_918[2],0xd,"mouseEnabled",0xd,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x7d8),local_918 + 2,local_4a8);
    if (local_918[2] != 0) {
      FMemory::Free();
    }
    if (local_488 != 0) {
      FMemory::Free();
    }
    if (local_498 != 0) {
      FMemory::Free();
    }
    local_46c = 0;
    local_460 = 0;
    local_458 = 0;
    local_450 = 0;
    local_448 = 0;
    local_440 = 0;
    local_470[0] = 2;
    local_918[4] = 0;
    local_918[5] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 4,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_918[4],0xe,"mouseChildren",0xe,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x7d8),local_918 + 4,local_470);
    if (local_918[4] != 0) {
      FMemory::Free();
    }
    if (local_450 != 0) {
      FMemory::Free();
    }
    if (local_460 != 0) {
      FMemory::Free();
    }
    local_918[6] = 0;
    local_918[7] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 6,0);
    FGenericPlatformString::Memcpy(local_918[6],L"txtBonusScoreTitle",0x26);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_160,L"BONUS",L"GFxCSPuzzleMenu",L"BonusText");
    FUN_142f100e0(*(undefined8 *)(param_1 + 0x7d8),local_918 + 6,uVar5);
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_158 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar1 = (int *)((longlong)local_158 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_158 + 8))(local_158,1);
        }
      }
    }
    if (local_918[6] != 0) {
      FMemory::Free();
    }
    local_918[8] = 0;
    local_918[9] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 8,0);
    FGenericPlatformString::Memcpy(local_918[8],L"TXT_BonusScore",0x1e);
    local_918[0x2c] = 0;
    local_918[0x2d] = 0;
    local_290 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x7d8),local_918 + 8,0,6,local_918 + 0x2c);
    *(undefined8 *)(param_1 + 0x7e0) = uVar5;
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_918 + 0x2c);
    if (local_918[8] != 0) {
      FMemory::Free();
    }
    if (*(longlong **)(param_1 + 0x7e0) != (longlong *)0x0) {
      local_358 = 0;
      uStack_350 = 0;
      lVar4 = **(longlong **)(param_1 + 0x7e0);
      uVar5 = FText::AsNumber(local_148,0,0,&local_358);
      (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x7e0),uVar5,1,0);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_148);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_358);
    }
    if (*(char *)(param_1 + 0x829) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x278))(*(longlong **)(param_1 + 0x7d8),0);
    }
  }
  local_918[10] = 0;
  local_918[0xb] = 0x22;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 10,0);
  FGenericPlatformString::Memcpy(local_918[10],L"puzzle.puzzleTokenPool.PNL_Tokens",0x44);
  local_918[0x2e] = 0;
  local_918[0x2f] = 0;
  local_288 = 0;
  uVar5 = FUN_140e96f30(param_1,local_918 + 10,0,6,local_918 + 0x2e);
  *(undefined8 *)(param_1 + 0x7e8) = uVar5;
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_918 + 0x2e);
  if (local_918[10] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7e8) != 0) {
    local_434 = 0;
    local_428 = 0;
    local_420 = 0;
    local_418 = 0;
    local_410 = 0;
    local_408 = 0;
    local_438[0] = 2;
    local_918[0xc] = 0;
    local_918[0xd] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 0xc,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_918[0xc],0xd,"mouseEnabled",0xd,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x7e8),local_918 + 0xc,local_438);
    if (local_918[0xc] != 0) {
      FMemory::Free();
    }
    if (local_418 != 0) {
      FMemory::Free();
    }
    if (local_428 != 0) {
      FMemory::Free();
    }
    local_3fc = 0;
    local_3f0 = 0;
    local_3e8 = 0;
    local_3e0 = 0;
    local_3d8 = 0;
    local_3d0 = 0;
    local_400[0] = 2;
    local_918[0xe] = 0;
    local_918[0xf] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 0xe,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_918[0xe],0xe,"mouseChildren",0xe,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x7e8),local_918 + 0xe,local_400);
    if (local_918[0xe] != 0) {
      FMemory::Free();
    }
    if (local_3e0 != 0) {
      FMemory::Free();
    }
    if (local_3f0 != 0) {
      FMemory::Free();
    }
    local_918[0x10] = 0;
    local_918[0x11] = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 0x10,0);
    FGenericPlatformString::Memcpy(local_918[0x10],L"TXT_TotalTokens",0x20);
    local_918[0x30] = 0;
    local_918[0x31] = 0;
    local_280 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x7e8),local_918 + 0x10,0,6,local_918 + 0x30);
    *(undefined8 *)(param_1 + 0x800) = uVar5;
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_918 + 0x30);
    if (local_918[0x10] != 0) {
      FMemory::Free();
    }
    local_918[0x12] = 0;
    local_918[0x13] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 0x12,0);
    FGenericPlatformString::Memcpy(local_918[0x12],L"PNL_NumTokens",0x1c);
    local_918[0x32] = 0;
    local_918[0x33] = 0;
    local_278 = 0;
    uVar5 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x7e8),local_918 + 0x12,0,6,local_918 + 0x32);
    *(undefined8 *)(param_1 + 0x7f0) = uVar5;
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_918 + 0x32);
    if (local_918[0x12] != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x7f0) != 0) {
      local_918[0x14] = 0;
      local_918[0x15] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 0x14,0);
      FGenericPlatformString::Memcpy(local_918[0x14],L"TXT_NumTokens",0x1c);
      local_918[0x34] = 0;
      local_918[0x35] = 0;
      local_270 = 0;
      uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x7f0),local_918 + 0x14,0,6,local_918 + 0x34);
      *(undefined8 *)(param_1 + 0x7f8) = uVar5;
      TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_918 + 0x34);
      if (local_918[0x14] != 0) {
        FMemory::Free();
      }
      if (*(longlong **)(param_1 + 0x7f8) != (longlong *)0x0) {
        local_348 = 0;
        uStack_340 = 0;
        lVar4 = **(longlong **)(param_1 + 0x7f8);
        uVar5 = FText::AsNumber(local_238,0,0,&local_348);
        (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x7f8),uVar5,1,0);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_238);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_348);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x278))(*(longlong **)(param_1 + 0x7e8),0);
  }
  local_918[0x16] = 0;
  local_918[0x17] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 0x16,0);
  FGenericPlatformString::Memcpy(local_918[0x16],L"puzzle",0xe);
  local_918[0x36] = 0;
  local_918[0x37] = 0;
  local_268 = 0;
  uVar5 = FUN_14154f200(param_1,local_918 + 0x16,0,6,local_918 + 0x36);
  *(undefined8 *)(param_1 + 0x6e0) = uVar5;
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_918 + 0x36);
  if (local_918[0x16] != 0) {
    FMemory::Free();
  }
  local_918[0x18] = 0;
  local_918[0x19] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 0x18,0);
  FGenericPlatformString::Memcpy(local_918[0x18],L"ANIM_Txt_Feedback",0x24);
  local_918[0x38] = 0;
  local_918[0x39] = 0;
  local_260 = 0;
  uVar5 = FUN_140e96f30(param_1,local_918 + 0x18,0,6,local_918 + 0x38);
  *(undefined8 *)(param_1 + 0x778) = uVar5;
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_918 + 0x38);
  if (local_918[0x18] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x778) != 0) {
    local_918[0x1a] = 0;
    local_918[0x1b] = 0x1e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 0x1a,0);
    FGenericPlatformString::Memcpy(local_918[0x1a],L"PNL_Txt_Feedback.TXT_Feedback",0x3c);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_220,L"TARGET REACHED!",L"GFxCSPuzzleMenu",L"TargetReachedText");
    FUN_142f100e0(*(undefined8 *)(param_1 + 0x778),local_918 + 0x1a,uVar5);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_220);
    if (local_918[0x1a] != 0) {
      FMemory::Free();
    }
    local_918[0x1c] = 0;
    local_918[0x1d] = 0x25;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 0x1c,0);
    FGenericPlatformString::Memcpy(local_918[0x1c],L"PNL_Txt_Feedback.TXT_Feedback_Shadow",0x4a);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_208,L"TARGET REACHED!",L"GFxCSPuzzleMenu",L"TargetReachedText");
    FUN_142f100e0(*(undefined8 *)(param_1 + 0x778),local_918 + 0x1c,uVar5);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_208);
    if (local_918[0x1c] != 0) {
      FMemory::Free();
    }
    local_3c4 = 0;
    local_3b8 = 0;
    local_3b0 = 0;
    local_3a8 = 0;
    local_3a0 = 0;
    local_398 = 0;
    local_3c8[0] = 2;
    local_918[0x1e] = 0;
    local_918[0x1f] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 0x1e,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_918[0x1e],0xd,"mouseEnabled",0xd,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x778),local_918 + 0x1e,local_3c8);
    if (local_918[0x1e] != 0) {
      FMemory::Free();
    }
    if (local_3a8 != 0) {
      FMemory::Free();
    }
    if (local_3b8 != 0) {
      FMemory::Free();
    }
    local_38c = 0;
    local_380 = 0;
    local_378 = 0;
    local_370 = 0;
    local_368 = 0;
    local_360 = 0;
    local_390[0] = 2;
    local_918[0x20] = 0;
    local_918[0x21] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_918 + 0x20,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_918[0x20],0xe,"mouseChildren",0xe,0x3f);
    FUN_14208f550(*(undefined8 *)(param_1 + 0x778),local_918 + 0x20,local_390);
    if (local_918[0x20] != 0) {
      FMemory::Free();
    }
    if (local_370 != 0) {
      FMemory::Free();
    }
    if (local_380 != 0) {
      FMemory::Free();
    }
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if ((lVar4 != 0) && (cVar2 = FUN_140f57dd0(lVar4), cVar2 != '\0')) {
    lVar4 = FUN_140cfc7b0(lVar4);
    if ((lVar4 == 0) || (cVar2 = FUN_141550960(lVar4), cVar2 == '\0')) {
      lVar4 = 0;
    }
    FWeakObjectPtr::operator=(param_1 + 0x818,lVar4);
  }
  if (*(longlong *)(param_1 + 0x6c8) == 0) {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x58c);
    if ((lVar4 != 0) && (cVar2 = FUN_140f57dd0(lVar4), cVar2 != '\0')) {
      FUN_140b99f70(local_128);
      uVar5 = FUN_1404b03b0();
      FText::operator=(local_128,uVar5);
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_1f0,L"Please wait...",L"OakGameInstance",
                         L"SplitscreenJoinDescription");
      FText::operator=(local_110,uVar5);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1f0);
      local_a5 = 0;
      local_a8 = 0;
      lVar4 = FUN_1410f3080(lVar4,local_128);
      *(longlong *)(param_1 + 0x6c8) = lVar4;
      if (lVar4 != 0) {
        FUN_1410f3b70(lVar4);
      }
      FUN_140b9d1a0(local_128);
    }
    *(undefined1 *)(param_1 + 0x828) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x828) = 0;
  }
  return;
}



// FUNCTION 141573390 FUN_141573390 body=6712 status=ok
// SIG undefined FUN_141573390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141573390(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_668 [32];
  longlong **local_648;
  undefined8 local_640;
  longlong local_638;
  undefined8 local_630;
  longlong *local_628;
  undefined8 local_620;
  longlong local_618;
  undefined8 local_610;
  longlong local_608 [4];
  longlong *local_5e8;
  undefined8 local_5e0;
  longlong local_5d8;
  undefined8 local_5d0;
  longlong local_5c8;
  undefined8 local_5c0;
  longlong *local_5b8;
  undefined8 local_5b0;
  longlong local_5a8;
  undefined8 local_5a0;
  longlong *local_598;
  undefined8 local_590;
  longlong local_588;
  undefined8 local_580;
  longlong local_578;
  undefined8 local_570;
  longlong *local_568;
  undefined8 local_560;
  longlong local_558;
  undefined8 local_550;
  longlong *local_548;
  undefined8 local_540;
  longlong local_538;
  undefined8 local_530;
  longlong *local_528;
  undefined8 local_520;
  longlong local_518;
  undefined8 local_510;
  longlong *local_508;
  undefined8 local_500;
  longlong local_4f8;
  undefined8 local_4f0;
  longlong *local_4e8;
  undefined8 local_4e0;
  longlong local_4d8;
  undefined8 local_4d0;
  longlong *local_4c8;
  undefined8 local_4c0;
  longlong local_4b8;
  undefined8 local_4b0;
  longlong *local_4a8;
  undefined8 local_4a0;
  longlong local_498;
  undefined8 local_490;
  longlong *local_488;
  undefined8 local_480;
  longlong *local_478;
  undefined8 local_470;
  longlong local_468;
  undefined8 local_460;
  longlong local_458;
  undefined8 local_450;
  longlong local_448;
  undefined8 local_440;
  longlong *local_438;
  undefined8 local_430;
  longlong local_428;
  undefined8 local_420;
  longlong local_418;
  undefined8 local_410;
  longlong local_408;
  undefined8 local_400;
  longlong *local_3f8;
  undefined8 local_3f0;
  longlong local_3e8;
  undefined8 local_3e0;
  longlong *local_3d8;
  undefined8 local_3d0;
  longlong local_3c8;
  undefined8 local_3c0;
  longlong *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  undefined8 local_390;
  longlong local_388;
  undefined8 local_380;
  longlong *local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 local_360;
  longlong *local_358;
  undefined8 local_350;
  undefined4 *local_348;
  ulonglong *puStack_340;
  longlong *local_338;
  longlong *local_330;
  undefined2 local_328 [2];
  undefined8 local_324;
  longlong local_318;
  undefined8 local_310;
  longlong local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined2 local_2f0 [2];
  undefined8 local_2ec;
  longlong local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined2 local_2b8 [2];
  undefined8 local_2b4;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined2 local_280 [2];
  undefined8 local_27c;
  longlong local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  longlong local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined1 local_198 [8];
  undefined8 local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [24];
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [8];
  undefined8 local_148;
  undefined1 local_140 [24];
  undefined1 local_128 [24];
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined4 local_60 [4];
  undefined1 local_50 [24];
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_668;
  FUN_142ecbc80();
  lVar14 = 0;
  *(undefined4 *)(param_1 + 0x690) = 0;
  if (*(int *)(param_1 + 0x694) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x688,0);
  }
  lVar12 = param_1 + 0x824;
  FWeakObjectPtr::operator=(lVar12,DAT_1468a64a8);
  cVar4 = FWeakObjectPtr::IsValid(lVar12);
  if (cVar4 == '\0') {
    return;
  }
  lVar7 = FWeakObjectPtr::Get(lVar12);
  FWeakObjectPtr::operator=(param_1 + 0x82c,*(undefined8 *)(lVar7 + 0xa8));
  lVar8 = FWeakObjectPtr::Get(lVar12);
  lVar7 = *(longlong *)(param_1 + 0x728);
  iVar16 = *(int *)(lVar8 + 0x70);
  *(int *)(param_1 + 0x868) = iVar16;
  if (lVar7 != 0) {
    if ((iVar16 < 0) || (*(int *)(lVar7 + 0x38) <= iVar16)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (lVar8 = (longlong)iVar16 * 0xe8 + *(longlong *)(lVar7 + 0x30),
       *(longlong *)(param_1 + 0x818) = lVar8, lVar8 != 0)) {
      iVar17 = *(int *)(lVar7 + 0x38) + -1;
      uVar9 = FWeakObjectPtr::Get(lVar12);
      uVar10 = FUN_140e971d0(param_1);
      iVar6 = FUN_14155d2b0(uVar9,uVar10,*(undefined4 *)(param_1 + 0x868));
      lVar7 = *(longlong *)(param_1 + 0x818);
      iVar2 = *(int *)(lVar7 + 0x78);
      if (iVar6 + -1 <= *(int *)(lVar7 + 0x78)) {
        iVar2 = iVar6 + -1;
      }
      *(int *)(param_1 + 0x820) = iVar2;
      if ((*(int *)(lVar7 + 0x78) == iVar2 + 1) && (iVar16 != iVar17)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      *(undefined1 *)(param_1 + 0x88b) = uVar5;
      if ((iVar2 < *(int *)(lVar7 + 0x78)) && (iVar16 != iVar17)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      *(undefined1 *)(param_1 + 0x88a) = uVar5;
    }
  }
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x680);
  if (lVar7 != 0) {
    lVar8 = FUN_1415833c0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FWeakObjectPtr::operator=(param_1 + 0x730,*(undefined8 *)(lVar7 + 0x6c8));
    }
  }
  local_468 = 0;
  local_460 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_468,0);
  FGenericPlatformString::Memcpy(local_468,L"PNL_Currency_TotalNum",0x2c);
  local_648 = &local_478;
  local_478 = (longlong *)0x0;
  local_470 = 0;
  local_1b0 = 0;
  lVar7 = FUN_140e96f30(param_1,&local_468,0,6);
  plVar15 = local_478;
  for (iVar16 = (int)local_470; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar15 != 0) {
      FMemory::Free();
    }
    plVar15 = plVar15 + 2;
  }
  if (local_478 != (longlong *)0x0) {
    FMemory::Free(local_478);
  }
  if (local_468 != 0) {
    FMemory::Free();
  }
  if (lVar7 != 0) {
    local_2ec = 0;
    local_2e0 = 0;
    local_2d8 = 0;
    local_2d0 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2f0[0] = 2;
    local_458 = 0;
    local_450 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_458,0);
    local_648 = (longlong **)CONCAT62(local_648._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_458,0xd,"mouseEnabled");
    FUN_14208f550(lVar7,&local_458,local_2f0);
    if (local_458 != 0) {
      FMemory::Free();
    }
    if (local_2d0 != 0) {
      FMemory::Free();
    }
    if (local_2e0 != 0) {
      FMemory::Free();
    }
    local_2b4 = 0;
    local_2a8 = 0;
    local_2a0 = 0;
    local_298 = 0;
    local_290 = 0;
    local_288 = 0;
    local_2b8[0] = 2;
    local_448 = 0;
    local_440 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_448,0);
    local_648 = (longlong **)CONCAT62(local_648._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_448,0xe,"mouseChildren");
    FUN_14208f550(lVar7,&local_448,local_2b8);
    if (local_448 != 0) {
      FMemory::Free();
    }
    if (local_298 != 0) {
      FMemory::Free();
    }
    if (local_2a8 != 0) {
      FMemory::Free();
    }
  }
  local_428 = 0;
  local_420 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_428,0);
  FGenericPlatformString::Memcpy(local_428,L"contentPanel",0x1a);
  local_648 = &local_438;
  local_438 = (longlong *)0x0;
  local_430 = 0;
  local_1b8 = 0;
  uVar9 = FUN_140e96f30(param_1,&local_428,0,6);
  *(undefined8 *)(param_1 + 0x740) = uVar9;
  plVar15 = local_438;
  for (iVar16 = (int)local_430; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar15 != 0) {
      FMemory::Free();
    }
    plVar15 = plVar15 + 2;
  }
  if (local_438 != (longlong *)0x0) {
    FMemory::Free(local_438);
  }
  if (local_428 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x740) != 0) {
    local_27c = 0;
    local_270 = 0;
    local_268 = 0;
    local_260 = 0;
    local_258 = 0;
    local_250 = 0;
    local_280[0] = 2;
    local_418 = 0;
    local_410 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_418,0);
    local_648 = (longlong **)CONCAT62(local_648._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_418,0xd,"mouseEnabled");
    FUN_14208f550(*(undefined8 *)(param_1 + 0x740),&local_418,local_280);
    if (local_418 != 0) {
      FMemory::Free();
    }
    if (local_260 != 0) {
      FMemory::Free();
    }
    if (local_270 != 0) {
      FMemory::Free();
    }
    local_324 = 0;
    local_318 = 0;
    local_310 = 0;
    local_308 = 0;
    local_300 = 0;
    local_2f8 = 0;
    local_328[0] = 2;
    local_408 = 0;
    local_400 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_408,0);
    local_648 = (longlong **)CONCAT62(local_648._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_408,0xe,"mouseChildren");
    FUN_14208f550(*(undefined8 *)(param_1 + 0x740),&local_408,local_328);
    if (local_408 != 0) {
      FMemory::Free();
    }
    if (local_308 != 0) {
      FMemory::Free();
    }
    if (local_318 != 0) {
      FMemory::Free();
    }
    local_3e8 = 0;
    local_3e0 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
    FGenericPlatformString::Memcpy(local_3e8,L"PNL_Txt_PuzzleCompleted",0x30);
    local_648 = &local_3f8;
    local_3f8 = (longlong *)0x0;
    local_3f0 = 0;
    local_1c0 = 0;
    uVar9 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x740),&local_3e8,0,6);
    *(undefined8 *)(param_1 + 0x738) = uVar9;
    plVar15 = local_3f8;
    for (iVar16 = (int)local_3f0; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_3f8 != (longlong *)0x0) {
      FMemory::Free(local_3f8);
    }
    if (local_3e8 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x738) != 0) {
      local_3c8 = 0;
      local_3c0 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c8,0);
      FGenericPlatformString::Memcpy(local_3c8,L"TXT_PuzzleCompleted",0x28);
      local_648 = &local_3d8;
      local_3d8 = (longlong *)0x0;
      local_3d0 = 0;
      local_1c8 = 0;
      plVar11 = (longlong *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x740),&local_3c8,0,6);
      plVar15 = local_3d8;
      for (iVar16 = (int)local_3d0; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
      }
      if (local_3d8 != (longlong *)0x0) {
        FMemory::Free(local_3d8);
      }
      if (local_3c8 != 0) {
        FMemory::Free();
      }
      if (plVar11 != (longlong *)0x0) {
        lVar7 = *plVar11;
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_c8,L"PUZZLE COMPLETED!",L"GFxCSRewardScreenMenu",
                           L"PuzzleCompletedText");
        (**(code **)(lVar7 + 0x2b0))(plVar11,uVar9,1,0);
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_c0 + 1;
          lVar7 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar1 = (int *)((longlong)local_c0 + 0xc);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*local_c0 + 8))(local_c0,1);
            }
          }
        }
      }
    }
    local_3a8 = 0;
    local_3a0 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8,0);
    FGenericPlatformString::Memcpy(local_3a8,L"PNL_Reward",0x16);
    local_648 = &local_3b8;
    local_3b8 = (longlong *)0x0;
    local_3b0 = 0;
    local_1d0 = 0;
    uVar9 = FUN_14154fbe0(*(undefined8 *)(param_1 + 0x740),&local_3a8,0,6);
    *(undefined8 *)(param_1 + 0x790) = uVar9;
    plVar15 = local_3b8;
    for (iVar16 = (int)local_3b0; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_3b8 != (longlong *)0x0) {
      FMemory::Free(local_3b8);
    }
    if (local_3a8 != 0) {
      FMemory::Free();
    }
    local_388 = 0;
    local_380 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,0);
    FGenericPlatformString::Memcpy(local_388,L"PNL_RewardTotal",0x20);
    local_648 = &local_398;
    local_398 = (longlong *)0x0;
    local_390 = 0;
    local_1d8 = 0;
    uVar9 = FUN_14154fbe0(*(undefined8 *)(param_1 + 0x740),&local_388,0,6);
    *(undefined8 *)(param_1 + 0x798) = uVar9;
    plVar15 = local_398;
    for (iVar16 = (int)local_390; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_398 != (longlong *)0x0) {
      FMemory::Free(local_398);
    }
    if (local_388 != 0) {
      FMemory::Free();
    }
    local_638 = 0;
    local_630 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_638,0);
    FGenericPlatformString::Memcpy(local_638,L"bonus0",0xe);
    local_648 = &local_378;
    local_378 = (longlong *)0x0;
    local_370 = 0;
    local_1e0 = 0;
    lVar7 = FUN_14154fbe0(*(undefined8 *)(param_1 + 0x740),&local_638,0,6);
    plVar15 = local_378;
    for (iVar16 = (int)local_370; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_378 != (longlong *)0x0) {
      FMemory::Free(local_378);
    }
    if (local_638 != 0) {
      FMemory::Free();
    }
    if (lVar7 != 0) {
      *(undefined1 *)(lVar7 + 0x184) = 0;
      iVar16 = *(int *)(param_1 + 0x7a8);
      *(int *)(param_1 + 0x7a8) = iVar16 + 1;
      if (*(int *)(param_1 + 0x7ac) < iVar16 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x7a0,iVar16);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x7a0) + (longlong)iVar16 * 8) = lVar7;
    }
    local_588 = 0;
    local_580 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_588,0);
    FGenericPlatformString::Memcpy(local_588,L"bonus1",0xe);
    local_648 = &local_628;
    local_628 = (longlong *)0x0;
    local_620 = 0;
    local_1e8 = 0;
    lVar7 = FUN_14154fbe0(*(undefined8 *)(param_1 + 0x740),&local_588,0,6);
    plVar15 = local_628;
    for (iVar16 = (int)local_620; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_628 != (longlong *)0x0) {
      FMemory::Free(local_628);
    }
    if (local_588 != 0) {
      FMemory::Free();
    }
    if (lVar7 != 0) {
      *(undefined1 *)(lVar7 + 0x184) = 0;
      iVar16 = *(int *)(param_1 + 0x7a8);
      *(int *)(param_1 + 0x7a8) = iVar16 + 1;
      if (*(int *)(param_1 + 0x7ac) < iVar16 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x7a0,iVar16);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x7a0) + (longlong)iVar16 * 8) = lVar7;
    }
    local_498 = 0;
    local_490 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_498,0);
    FGenericPlatformString::Memcpy(local_498,L"bonus2",0xe);
    local_648 = &local_488;
    local_488 = (longlong *)0x0;
    local_480 = 0;
    local_1f0 = 0;
    lVar7 = FUN_14154fbe0(*(undefined8 *)(param_1 + 0x740),&local_498,0,6);
    plVar15 = local_488;
    for (iVar16 = (int)local_480; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_488 != (longlong *)0x0) {
      FMemory::Free(local_488);
    }
    if (local_498 != 0) {
      FMemory::Free();
    }
    if (lVar7 != 0) {
      *(undefined1 *)(lVar7 + 0x184) = 0;
      iVar16 = *(int *)(param_1 + 0x7a8);
      *(int *)(param_1 + 0x7a8) = iVar16 + 1;
      if (*(int *)(param_1 + 0x7ac) < iVar16 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x7a0,iVar16);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x7a0) + (longlong)iVar16 * 8) = lVar7;
    }
    local_4b8 = 0;
    local_4b0 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b8,0);
    FGenericPlatformString::Memcpy(local_4b8,L"PNL_Character",0x1c);
    local_648 = &local_4a8;
    local_4a8 = (longlong *)0x0;
    local_4a0 = 0;
    local_160 = 0;
    lVar7 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x740),&local_4b8,0,6);
    plVar15 = local_4a8;
    for (iVar16 = (int)local_4a0; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_4a8 != (longlong *)0x0) {
      FMemory::Free(local_4a8);
    }
    if (local_4b8 != 0) {
      FMemory::Free();
    }
    if (lVar7 != 0) {
      local_4d8 = 0;
      local_4d0 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d8,0);
      FGenericPlatformString::Memcpy(local_4d8,L"PNL_TXT_Progress",0x22);
      local_648 = &local_4c8;
      local_4c8 = (longlong *)0x0;
      local_4c0 = 0;
      local_1f8 = 0;
      uVar9 = FUN_140ecbdf0(lVar7,&local_4d8,0,6);
      *(undefined8 *)(param_1 + 0x748) = uVar9;
      plVar15 = local_4c8;
      for (iVar16 = (int)local_4c0; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
      }
      if (local_4c8 != (longlong *)0x0) {
        FMemory::Free(local_4c8);
      }
      if (local_4d8 != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_1 + 0x748) != 0) {
        local_4f8 = 0;
        local_4f0 = 0x15;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4f8,0);
        FGenericPlatformString::Memcpy(local_4f8,L"puzzleCompletedDenom",0x2a);
        local_648 = &local_4e8;
        local_4e8 = (longlong *)0x0;
        local_4e0 = 0;
        local_200 = 0;
        uVar9 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x748),&local_4f8,0,6);
        *(undefined8 *)(param_1 + 0x760) = uVar9;
        plVar15 = local_4e8;
        for (iVar16 = (int)local_4e0; iVar16 != 0; iVar16 = iVar16 + -1) {
          if (*plVar15 != 0) {
            FMemory::Free();
          }
          plVar15 = plVar15 + 2;
        }
        if (local_4e8 != (longlong *)0x0) {
          FMemory::Free(local_4e8);
        }
        if (local_4f8 != 0) {
          FMemory::Free();
        }
        local_518 = 0;
        local_510 = 0x15;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,0);
        FGenericPlatformString::Memcpy(local_518,L"PNL_Txt_CompletedNum",0x2a);
        local_648 = &local_508;
        local_508 = (longlong *)0x0;
        local_500 = 0;
        local_208 = 0;
        uVar9 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x748),&local_518,0,6);
        *(undefined8 *)(param_1 + 0x750) = uVar9;
        plVar15 = local_508;
        for (iVar16 = (int)local_500; iVar16 != 0; iVar16 = iVar16 + -1) {
          if (*plVar15 != 0) {
            FMemory::Free();
          }
          plVar15 = plVar15 + 2;
        }
        if (local_508 != (longlong *)0x0) {
          FMemory::Free(local_508);
        }
        if (local_518 != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(param_1 + 0x750) != 0) {
          local_538 = 0;
          local_530 = 0x13;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_538,0);
          FGenericPlatformString::Memcpy(local_538,L"puzzleCompletedNum",0x26);
          local_648 = &local_528;
          local_528 = (longlong *)0x0;
          local_520 = 0;
          local_210 = 0;
          uVar9 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x750),&local_538,0,6);
          *(undefined8 *)(param_1 + 0x758) = uVar9;
          plVar15 = local_528;
          for (iVar16 = (int)local_520; iVar16 != 0; iVar16 = iVar16 + -1) {
            if (*plVar15 != 0) {
              FMemory::Free();
            }
            plVar15 = plVar15 + 2;
          }
          if (local_528 != (longlong *)0x0) {
            FMemory::Free(local_528);
          }
          if (local_538 != 0) {
            FMemory::Free();
          }
        }
      }
      local_558 = 0;
      local_550 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_558,0);
      FGenericPlatformString::Memcpy(local_558,L"meter",0xc);
      local_648 = &local_548;
      local_548 = (longlong *)0x0;
      local_540 = 0;
      local_218 = 0;
      uVar9 = FUN_14154ebc0(param_1,&local_558,0,6);
      *(undefined8 *)(param_1 + 0x768) = uVar9;
      plVar15 = local_548;
      for (iVar16 = (int)local_540; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
      }
      if (local_548 != (longlong *)0x0) {
        FMemory::Free(local_548);
      }
      if (local_558 != 0) {
        FMemory::Free();
      }
      local_578 = 0;
      local_570 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_578,0);
      FGenericPlatformString::Memcpy(local_578,L"ANIM_Feedback",0x1c);
      local_568 = (longlong *)0x0;
      local_560 = 0;
      local_220 = 0;
      local_648 = &local_568;
      uVar9 = FUN_140ecbdf0(lVar7,&local_578,0,6);
      *(undefined8 *)(param_1 + 0x770) = uVar9;
      plVar15 = local_568;
      for (iVar16 = (int)local_560; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
      }
      if (local_568 != (longlong *)0x0) {
        FMemory::Free(local_568);
      }
      if (local_578 != 0) {
        FMemory::Free();
      }
      local_5a8 = 0;
      local_5a0 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5a8,0);
      FGenericPlatformString::Memcpy(local_5a8,L"ANIM_Reward",0x18);
      local_648 = &local_598;
      local_598 = (longlong *)0x0;
      local_590 = 0;
      local_228 = 0;
      uVar9 = FUN_140ecbdf0(lVar7,&local_5a8,0,6);
      *(undefined8 *)(param_1 + 0x778) = uVar9;
      plVar15 = local_598;
      for (iVar16 = (int)local_590; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
      }
      if (local_598 != (longlong *)0x0) {
        FMemory::Free(local_598);
      }
      if (local_5a8 != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_1 + 0x778) != 0) {
        local_5c8 = 0;
        local_5c0 = 0x11;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5c8,0);
        FGenericPlatformString::Memcpy(local_5c8,L"characterPicture",0x22);
        local_648 = &local_5b8;
        local_5b8 = (longlong *)0x0;
        local_5b0 = 0;
        local_230 = 0;
        uVar9 = FUN_140ecbdf0(lVar7,&local_5c8,0,6);
        *(undefined8 *)(param_1 + 0x780) = uVar9;
        plVar15 = local_5b8;
        for (iVar16 = (int)local_5b0; iVar16 != 0; iVar16 = iVar16 + -1) {
          if (*plVar15 != 0) {
            FMemory::Free();
          }
          plVar15 = plVar15 + 2;
        }
        if (local_5b8 != (longlong *)0x0) {
          FMemory::Free(local_5b8);
        }
        if (local_5c8 != 0) {
          FMemory::Free();
        }
        local_5d8 = 0;
        local_5d0 = 0x15;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5d8,0);
        FGenericPlatformString::Memcpy(local_5d8,L"customizationPicture",0x2a);
        local_648 = &local_358;
        local_358 = (longlong *)0x0;
        local_350 = 0;
        local_238 = 0;
        uVar9 = FUN_140ecbdf0(lVar7,&local_5d8,0,6);
        *(undefined8 *)(param_1 + 0x788) = uVar9;
        TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_358);
        if (local_5d8 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  local_608[2] = 0;
  local_608[3] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_608 + 2,0);
  FGenericPlatformString::Memcpy(local_608[2],L"contentButtons",0x1e);
  local_648 = &local_5e8;
  local_5e8 = (longlong *)0x0;
  local_5e0 = 0;
  local_190 = 0;
  uVar9 = FUN_140ecb410(param_1,local_608 + 2,0,6);
  *(undefined8 *)(param_1 + 0x7b0) = uVar9;
  plVar15 = local_5e8;
  for (iVar16 = (int)local_5e0; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar15 != 0) {
      FMemory::Free();
    }
    plVar15 = plVar15 + 2;
  }
  if (local_5e8 != (longlong *)0x0) {
    FMemory::Free(local_5e8);
  }
  if (local_608[2] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7b0) == 0) {
    return;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x7b0) + 0x1e2) = 2;
  local_608[0] = 0;
  local_608[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_608,0);
  FGenericPlatformString::Memcpy(local_608[0],L"BTN_RewardButton",0x22);
  local_148 = UGameInstanceGameParameters::GetPrivateStaticClass();
  lVar7 = FUN_142ebcee0(*(undefined8 *)(param_1 + 0x7b0),local_608,local_148,0);
  if ((lVar7 == 0) || (cVar4 = FUN_1415509b0(lVar7), cVar4 == '\0')) {
    lVar7 = lVar14;
  }
  if (local_608[0] != 0) {
    FMemory::Free();
  }
  if (lVar7 != 0) {
    uVar9 = FName::FName(local_150,L"OnMainMenuButtonClicked",1);
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_b0,L"MAIN MENU",L"GFxCSRewardScreenMenu",L"MainMenuText");
    local_338 = DAT_146b3e2a0;
    local_648 = &local_338;
    FUN_14157ba50(param_1,lVar7,uVar10,uVar9);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_a8 + 1;
      lVar7 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x868) < 1) {
    uVar9 = FWeakObjectPtr::Get(lVar12);
    uVar10 = FUN_140e971d0(param_1);
    cVar4 = FUN_1415642d0(uVar9,uVar10);
    if (cVar4 != '\0') goto LAB_141574a6e;
  }
  local_618 = 0;
  local_610 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_618,0);
  FGenericPlatformString::Memcpy(local_618,L"BTN_RewardButton",0x22);
  local_158 = UGameInstanceGameParameters::GetPrivateStaticClass();
  lVar12 = FUN_142ebcee0(*(undefined8 *)(param_1 + 0x7b0),&local_618,local_158,0);
  if ((lVar12 == 0) || (cVar4 = FUN_1415509b0(lVar12), cVar4 == '\0')) {
    lVar12 = lVar14;
  }
  if (local_618 != 0) {
    FMemory::Free();
  }
  if (lVar12 != 0) {
    uVar9 = FName::FName(local_198,L"OnPlayAgainClicked",1);
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_140,L"NEXT PUZZLE",L"GFxCSRewardScreenMenu",L"NextPuzzleText");
    local_330 = DAT_146b3e2a0;
    local_648 = &local_330;
    FUN_14157ba50(param_1,lVar12,uVar10,uVar9);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_140);
  }
LAB_141574a6e:
  if (*(longlong *)(param_1 + 0x818) != 0) {
    if (*(char *)(param_1 + 0x88b) != '\0') {
      local_368 = 0;
      local_360 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
      FGenericPlatformString::Memcpy(local_368,L"BTN_RewardButton",0x22);
      local_1a0 = UGameInstanceGameParameters::GetPrivateStaticClass();
      lVar12 = FUN_142ebcee0(*(undefined8 *)(param_1 + 0x7b0),&local_368,local_1a0,0);
      if ((lVar12 == 0) || (cVar4 = FUN_1415509b0(lVar12), cVar4 == '\0')) {
        lVar12 = lVar14;
      }
      if (local_368 != 0) {
        FMemory::Free();
      }
      if (lVar12 != 0) {
        uVar9 = FName::FName(local_1a8,L"OnPlayNextCharacterClicked",1);
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_128,L"PLAY NEXT CHARACTER",L"GFxCSRewardScreenMenu",
                            L"PlayNextCharacterText");
        FUN_14157bcf0(param_1,lVar12,uVar10,uVar9);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_128);
        iVar16 = *(int *)(param_1 + 0x868) + 1;
        if ((iVar16 < 0) || (*(int *)(*(longlong *)(param_1 + 0x728) + 0x38) <= iVar16)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          uVar9 = FText::FText(local_78,(longlong)iVar16 * 0xe8 + 0x48 +
                                        *(longlong *)(*(longlong *)(param_1 + 0x728) + 0x30));
          uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_e0,L"PLAY {0}",L"GFxCSRewardScreenMenu",L"PlayCharacterText");
          puVar13 = (undefined8 *)FTextFormat::FTextFormat(local_98,uVar10);
          local_60[0] = 4;
          FText::FText(local_50,uVar9);
          local_248 = *puVar13;
          local_348 = local_60;
          puStack_340 = &local_30;
          local_240 = puVar13[1];
          local_38 = 1;
          if (local_240 != 0) {
            LOCK();
            *(int *)(local_240 + 8) = *(int *)(local_240 + 8) + 1;
            UNLOCK();
          }
          uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_188,&local_348);
          uVar10 = FText::Format(local_110,&local_248,uVar10);
          FText::FText(local_178,uVar10);
          if (local_108 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_108 + 1;
            lVar14 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_108)(local_108);
              LOCK();
              piVar1 = (int *)((longlong)local_108 + 0xc);
              iVar16 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*local_108 + 8))(local_108,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_188);
          TOptional<FExpressionError>::Reset(local_50);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar13);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar9);
          uVar9 = FText::ToUpper(local_178,local_f8);
          FUN_142ed3af0(lVar12,uVar9,0);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_f8);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_178);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_e0);
        }
      }
    }
    uVar9 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (local_88,*(undefined8 *)(param_1 + 0x7b0));
    local_640 = 0;
    local_648 = (longlong **)0x0;
    FUN_142ecfdd0(param_1,uVar9,0,0);
    lVar14 = **(longlong **)(param_1 + 0x7b0);
    iVar16 = FUN_142eb7440();
    (**(code **)(lVar14 + 0x2b8))(*(undefined8 *)(param_1 + 0x7b0),iVar16 + -1,0,0);
  }
  return;
}



// FUNCTION 141574dd0 FUN_141574dd0 body=52 status=ok
// SIG undefined FUN_141574dd0(void)

void FUN_141574dd0(longlong param_1)

{
  FUN_142ecbc80();
  *(undefined4 *)(param_1 + 0x690) = 0;
  if (*(int *)(param_1 + 0x694) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x688,0);
    return;
  }
  return;
}



// FUNCTION 141574e10 FUN_141574e10 body=441 status=ok
// SIG undefined FUN_141574e10(void)

void FUN_141574e10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (param_2 != (longlong *)0x0) {
    if (*(longlong **)(param_1 + 0x6d0) != (longlong *)0x0) {
      lVar4 = **(longlong **)(param_1 + 0x6d0);
      uVar7 = (**(code **)(*param_2 + 0x5b0))(param_2,local_38);
      (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x6d0),uVar7,1,0);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
    }
    if (*(longlong **)(param_1 + 0x6e0) != (longlong *)0x0) {
      lVar4 = **(longlong **)(param_1 + 0x6e0);
      uVar5 = (**(code **)(*param_2 + 0x590))(param_2);
      (**(code **)(lVar4 + 0x278))(*(undefined8 *)(param_1 + 0x6e0),uVar5);
    }
    if (*(longlong **)(param_1 + 0x6d8) != (longlong *)0x0) {
      lVar4 = **(longlong **)(param_1 + 0x6d8);
      uVar5 = (**(code **)(*param_2 + 0x578))(param_2);
      (**(code **)(lVar4 + 0x278))(*(undefined8 *)(param_1 + 0x6d8),uVar5);
      uVar7 = (**(code **)(*param_2 + 0x588))(param_2,local_20);
      FUN_142ed3af0(*(undefined8 *)(param_1 + 0x6d8),uVar7,0);
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
    if (*(longlong **)(param_1 + 0x6e8) != (longlong *)0x0) {
      lVar4 = **(longlong **)(param_1 + 0x6e8);
      uVar5 = (**(code **)(*param_2 + 0x5a0))(param_2);
      (**(code **)(lVar4 + 0x278))(*(undefined8 *)(param_1 + 0x6e8),uVar5);
    }
    if (*(longlong *)(param_1 + 0x6f8) != 0) {
      if ((*(char *)(param_1 + 0x710) == '\0') ||
         (cVar6 = (**(code **)(*param_2 + 0x5a8))(param_2), cVar6 == '\0')) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x278))(*(longlong **)(param_1 + 0x6f8),uVar7)
      ;
    }
  }
  return;
}



// FUNCTION 141574fd0 FUN_141574fd0 body=389 status=ok
// SIG undefined FUN_141574fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141574fd0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((((char)param_1[0xd8] == '\a') &&
      (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x102), cVar3 != '\0')) &&
     ((lVar4 = FWeakObjectPtr::Get(param_1 + 0x102), *(char *)(lVar4 + 0xf5) != '\0' ||
      (cVar3 = FUN_141564220(lVar4), cVar3 != '\0')))) {
    *(undefined1 *)(param_1 + 0xd8) = 9;
    *(undefined1 *)((longlong)param_1 + 0x82f) = 0;
    if (param_1[0xdc] != 0) {
      FUN_14155a3a0(param_1[0xdc],0);
    }
    local_78 = 0;
    local_70 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468a68d0,&local_78);
    FWeakObjectPtr::operator=(&local_78,param_1);
    uVar1 = (undefined4)local_78;
    uVar2 = local_78._4_4_;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_1444f8920;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = uVar1;
      *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
    }
    local_68[0] = &LAB_141558ab0;
    FUN_14208c260(param_1,local_68);
    if (local_28 != 0) {
      plVar6 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar6 = local_38;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141575160 FUN_141575160 body=1769 status=ok
// SIG undefined FUN_141575160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141575160(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 auStack_268 [32];
  longlong *local_248;
  float local_240;
  longlong local_238 [4];
  undefined1 local_218 [4];
  undefined1 local_214 [12];
  longlong local_208;
  undefined4 local_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0;
  float local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined1 local_1cc;
  undefined1 local_1c8 [16];
  undefined4 local_1b8;
  undefined4 local_1b0;
  char local_1ac;
  char local_1ab;
  undefined1 local_1aa;
  undefined8 *local_1a8;
  undefined4 *local_1a0;
  undefined8 *local_198;
  undefined4 *local_190;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_c8 [4];
  undefined1 local_b8 [8];
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  *(undefined1 *)(param_1 + 0x1f1) = 0;
  if (((int)param_2[1] < 1) ||
     ((param_2 = (longlong *)*param_2, *(char *)((longlong)param_2 + 0x5d) != '\0' &&
      (*(float *)(param_2 + 6) == 0.0)))) {
    plVar8 = *(longlong **)(param_1 + 0x1a0);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x278))(plVar8,0);
    }
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1e0));
    FUN_14107fa40(param_1 + 0x1d0,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x1e0));
    return;
  }
  local_208 = *param_2;
  local_200 = (undefined4)param_2[1];
  FText::FText(local_1f8,param_2 + 2);
  local_1e0 = (undefined1)param_2[5];
  local_1dc = *(float *)((longlong)param_2 + 0x2c);
  local_1d8 = (undefined4)param_2[6];
  local_1d4 = *(undefined4 *)((longlong)param_2 + 0x34);
  local_1d0 = (undefined4)param_2[7];
  local_1cc = *(undefined1 *)((longlong)param_2 + 0x3c);
  FUN_14058f8f0(local_1c8,param_2 + 8);
  local_1b8 = (undefined4)param_2[10];
  local_1b0 = (undefined4)param_2[0xb];
  local_1ac = *(char *)((longlong)param_2 + 0x5c);
  local_1ab = *(char *)((longlong)param_2 + 0x5d);
  local_1aa = *(undefined1 *)((longlong)param_2 + 0x5e);
  lVar5 = *(longlong *)(param_1 + 0x1e8);
  if (local_208 != lVar5) {
    if ((local_1ac == '\0') && (local_1ab == '\0')) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1e0));
      FUN_14107fa40(param_1 + 0x1d0,0);
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x1e0));
      *(longlong *)(param_1 + 0x1e8) = local_208;
      FText::FText(local_188,local_1f8);
      fVar9 = local_1dc;
      if (local_1dc <= 0.1) {
        fVar9 = 0.0;
      }
      lVar5 = FWeakObjectPtr::Get(&local_1d4);
      if (lVar5 == 0) {
LAB_14157530f:
        lVar5 = 0;
      }
      else {
        lVar6 = FUN_1412f58e0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14157530f;
      }
      local_238[0] = 0;
      local_238[1] = 0;
      if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x40) != 0)) &&
         (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x198), cVar4 != '\0')) {
        lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if ((*(int *)(lVar6 + 0x38) < DAT_1468a6b44) &&
           (_Init_thread_header(&DAT_1468a6b44), DAT_1468a6b44 == -1)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a14e0,0);
          FGenericPlatformString::Memcpy(DAT_1464a14e0,L"Speaker",0x10);
          atexit((_func_5014 *)&LAB_143e73ef0);
          _Init_thread_footer(&DAT_1468a6b44);
        }
        if ((*(int *)(lVar6 + 0x38) < DAT_1468a6b48) &&
           (_Init_thread_header(&DAT_1468a6b48), DAT_1468a6b48 == -1)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a14f0,0);
          FGenericPlatformString::Memcpy(DAT_1464a14f0,L"Text",10);
          atexit((_func_5014 *)&LAB_143e73f10);
          _Init_thread_footer(&DAT_1468a6b48);
        }
        plVar8 = (longlong *)(*(longlong *)(lVar5 + 0x40) + 0x30);
        local_118 = 0;
        local_110 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0xffffffff;
        local_e4 = 0;
        local_d8 = 0;
        local_d0 = 0;
        uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,local_170);
        local_c8[0] = 4;
        FText::FText(local_b8,uVar7);
        local_a0 = '\x01';
        local_1a8 = &DAT_1464a14e0;
        local_1a0 = local_c8;
        FUN_1405df450(&local_118,local_218,&local_1a8,0);
        if ((local_a0 != '\0') && (local_a0 = '\0', local_b0 != (longlong *)0x0)) {
          LOCK();
          plVar8 = local_b0 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar1 = (int *)((longlong)local_b0 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_b0 + 8))(local_b0,1);
            }
          }
        }
        if (local_168 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_168 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_168)(local_168);
            LOCK();
            piVar1 = (int *)((longlong)local_168 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_168 + 8))(local_168,1);
            }
          }
        }
        local_238[2] = 0;
        local_238[3] = 0;
        uVar7 = FText::FromString(local_158,local_238 + 2);
        local_98[0] = 4;
        FText::FText(local_88,uVar7);
        local_190 = local_98;
        local_70 = '\x01';
        local_198 = &DAT_1464a14f0;
        FUN_1405df450(&local_118,local_214,&local_198,0);
        if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
          LOCK();
          plVar8 = local_80 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)local_80 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_150 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar1 = (int *)((longlong)local_150 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_150 + 8))(local_150,1);
            }
          }
        }
        if (local_238[2] != 0) {
          FMemory::Free();
        }
        lVar5 = FWeakObjectPtr::Get(param_1 + 0x198);
        uVar7 = FTextFormat::FTextFormat(local_128,lVar5 + 0x1080);
        uVar7 = FText::Format(local_140,uVar7,&local_118);
        uVar7 = FText::ToString(uVar7);
        FString::operator=(local_238,uVar7);
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_138 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar1 = (int *)((longlong)local_138 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_138 + 8))(local_138,1);
            }
          }
        }
        local_d0 = 0;
        if (local_d8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_118);
      }
      local_248 = local_238;
      local_240 = fVar9;
      FUN_14155a200(param_1,local_188,local_1d8,0);
      if (local_238[0] != 0) {
        FMemory::Free();
      }
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_180 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar1 = (int *)((longlong)local_180 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_180 + 8))(local_180,1);
          }
        }
      }
      goto LAB_1415756ee;
    }
    if (local_208 != lVar5) goto LAB_1415756ee;
  }
  if ((local_1ac == '\0') && (local_1ab == '\0')) {
    if ((local_208 == lVar5) && (*(char *)(param_1 + 0x1f0) != '\0')) {
      *(undefined1 *)(param_1 + 0x1f0) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1f0) = 1;
  }
LAB_1415756ee:
  FUN_140591060(local_1c8);
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1f0 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar1 = (int *)((longlong)local_1f0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
  }
  return;
}



// FUNCTION 141575850 FUN_141575850 body=349 status=ok
// SIG undefined FUN_141575850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141575850(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  switch(*(char *)(param_1 + 0x38)) {
  case '\x01':
    FUN_1415775b0(param_1);
    return;
  case '\x03':
    FUN_14155b8f0(param_1);
    return;
  case '\x05':
    FUN_14155bc00(param_1);
    return;
  case '\a':
    FUN_14155be10(param_1);
    return;
  case '\t':
    FUN_1415786b0(param_1);
    return;
  case '\v':
    FUN_14155c490(param_1);
    return;
  case '\r':
    FUN_141576110(param_1);
    return;
  case '\x0f':
    FUN_141576380(param_1);
    return;
  case '\x11':
    if ((*(char *)(param_1 + 0x38) == '\x11') && (cVar1 = FWeakObjectPtr::IsValid(), cVar1 != '\0'))
    {
      *(undefined4 *)(param_1 + 0x138) = 0;
      if (*(int *)(param_1 + 0x13c) != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x130,0);
      }
      lVar2 = FWeakObjectPtr::Get(param_1 + 0x7c);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (param_1 + 0x120,lVar2 + 200);
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x150);
      *(undefined1 *)(param_1 + 0x38) = 0;
      TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound
                (param_1 + 0x28,*(undefined1 *)(param_1 + 0x15a));
      return;
    }
    if (((*(int *)(param_1 + 0x30) != 0) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))(), cVar1 != '\0')) {
      if (*(int *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141575994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x40))(*(longlong **)(param_1 + 0x28),0);
        return;
      }
      (**(code **)(_DAT_00000000 + 0x40))(0,0);
    }
  }
  return;
}



// FUNCTION 141575a00 FUN_141575a00 body=765 status=ok
// SIG undefined FUN_141575a00(void)

void FUN_141575a00(longlong param_1,float param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined4 local_40;
  undefined1 local_3c;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  plVar10 = (longlong *)0x0;
  if ((((1e-08 < *(float *)(param_1 + 500)) &&
       (fVar12 = *(float *)(param_1 + 500) - param_2, *(float *)(param_1 + 500) = fVar12,
       fVar12 <= 1e-08)) && (*(longlong *)(param_1 + 0x1a0) != 0)) &&
     (*(longlong *)(param_1 + 0x1a8) != 0)) {
    if (*(char *)(param_1 + 0x1f0) != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1e0));
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      FUN_14107fa40(param_1 + 0x1d0,0);
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x1e0));
    }
    if (*(int *)(param_1 + 0x1d8) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x278))(*(longlong **)(param_1 + 0x1a0),0);
      (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x278))(*(longlong **)(param_1 + 0x1a8),0);
    }
    else {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1e0));
      lVar2 = *(longlong *)(param_1 + 0x1d0);
      FText::FText(local_58,lVar2);
      local_40 = *(undefined4 *)(lVar2 + 0x18);
      local_3c = *(undefined1 *)(lVar2 + 0x1c);
      TArray<FStreamInteractionDelayedMessage,FDefaultAllocator>::RemoveAtImpl
                (param_1 + 0x1d0,0,1,1);
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x1e0));
      local_68 = 0;
      local_60 = 0;
      FUN_14155a200(param_1,local_58,local_40,local_3c,&local_68,0);
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_50 + 1;
        lVar2 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x1c0);
  plVar9 = plVar7 + (longlong)*(int *)(param_1 + 0x1c8) * 4;
  do {
    if (plVar7 == plVar9) {
      return;
    }
    if (1e-08 < *(float *)(plVar7 + 3)) {
      *(float *)(plVar7 + 3) = *(float *)(plVar7 + 3) - param_2;
      plVar3 = (longlong *)plVar7[2];
      plVar6 = plVar10;
      plVar8 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(plVar3 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar10, !bVar11) {
          LOCK();
          bVar11 = iVar4 == (int)plVar3[1];
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar11) {
            plVar6 = (longlong *)plVar7[1];
            plVar8 = plVar3;
            break;
          }
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(plVar3 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      if (((*(float *)(plVar7 + 3) <= 1e-08) && ((longlong *)*plVar7 != (longlong *)0x0)) &&
         (plVar6 != (longlong *)0x0)) {
        lVar2 = *(longlong *)*plVar7;
        uVar5 = FUN_1404b03b0();
        (**(code **)(lVar2 + 0x2b0))(*plVar7,uVar5,1,0);
        (**(code **)(*(longlong *)*plVar7 + 0x278))((longlong *)*plVar7,0);
        FUN_142056670(plVar6,0);
        *(undefined4 *)(plVar7 + 3) = 0xbf800000;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar8 + 1;
        lVar2 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    plVar7 = plVar7 + 4;
  } while( true );
}



// FUNCTION 141575d00 FUN_141575d00 body=198 status=ok
// SIG undefined FUN_141575d00(void)

void FUN_141575d00(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x1d0) < 1) {
      piVar4 = &DAT_1464a0eb8;
    }
    else {
      piVar4 = *(int **)(param_1 + 0x1c8);
    }
    if (((*piVar4 != *(int *)(param_2 + 0x1c0)) || (piVar4[1] != *(int *)(param_2 + 0x1c4))) &&
       (lVar3 = FUN_14155d970(), lVar3 != 0)) {
      FUN_14157aa00(lVar3,0,0);
    }
    FUN_14157aa00(param_2,1,0);
    if (0 < *(int *)(param_1 + 0x1d0)) {
      puVar2 = *(undefined4 **)(param_1 + 0x1c8);
      *puVar2 = *(undefined4 *)(param_2 + 0x1c0);
      puVar2[1] = *(undefined4 *)(param_2 + 0x1c4);
      lVar3 = FUN_14155d970(param_1,param_2 + 0x1c0);
      if (lVar3 != 0) {
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0x1c8) + 8);
        *pbVar1 = *pbVar1 | *(byte *)(lVar3 + 0x22a);
      }
    }
  }
  return;
}



// FUNCTION 141575dd0 FUN_141575dd0 body=161 status=ok
// SIG undefined FUN_141575dd0(void)

void FUN_141575dd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if ((*(int *)(param_2 + 0x1a8) != 0) &&
       (plVar1 = *(longlong **)(param_2 + 0x1a0), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*(longlong *)(param_2 + 0x1a0) != 0) {
        uVar2 = FMemory::Realloc(*(longlong *)(param_2 + 0x1a0),0,0);
        *(undefined8 *)(param_2 + 0x1a0) = uVar2;
      }
      *(undefined4 *)(param_2 + 0x1a8) = 0;
    }
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0xf8,local_res10);
    if (((*(char *)(param_1 + 0x108) != '\0') && (*(char *)(param_1 + 0x109) != '\0')) &&
       (*(int *)(param_1 + 0x100) == 0)) {
      FUN_14156c890(param_1);
    }
  }
  return;
}



// FUNCTION 141575e80 FUN_141575e80 body=46 status=ok
// SIG undefined FUN_141575e80(void)

void FUN_141575e80(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x58,local_res10);
  if (*(int *)(param_1 + 0x60) == 0) {
    *(undefined4 *)(param_1 + 0x54) = 2;
  }
  return;
}



// FUNCTION 141575eb0 FUN_141575eb0 body=234 status=ok
// SIG undefined FUN_141575eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141575eb0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FWeakObjectPtr::operator=(&local_78,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_78;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_74;
  }
  local_68[0] = &LAB_141558990;
  FUN_14208c260(param_1,local_68);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141575fa0 FUN_141575fa0 body=61 status=ok
// SIG undefined FUN_141575fa0(void)

void FUN_141575fa0(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  FName::FName(local_res8,L"WhatsThis",1);
  (**(code **)(*param_1 + 0x570))(param_1,local_res8,1,0);
  return;
}



// FUNCTION 141575fe0 FUN_141575fe0 body=291 status=ok
// SIG undefined FUN_141575fe0(void)

void FUN_141575fe0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  code *local_18;
  ulonglong uStack_10;
  
  if ((byte)((char)param_1[0xd4] - 8U) < 2) {
    iVar1 = *(int *)((longlong)param_1 + 0x86c);
    *(undefined1 *)(param_1 + 0xd4) = 9;
    if ((((-1 < iVar1) && (iVar1 < (int)param_1[0xf5])) &&
        (lVar2 = *(longlong *)(param_1[0xf4] + (longlong)iVar1 * 8), lVar2 != 0)) &&
       (*(char *)(lVar2 + 0x184) != '\0')) {
      FString::PrintfImpl(&local_18,L"show%d",iVar1 + 2);
      if (param_1[0xe8] != 0) {
        *(undefined1 *)(param_1 + 0x111) = 1;
        FUN_142088910(param_1[0xe8],&local_18);
      }
      if (local_18 != (code *)0x0) {
        FMemory::Free();
      }
      local_18 = (code *)0x0;
      uStack_10 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468a6900,&local_18);
      local_18 = FUN_14156c200;
      uStack_10 = uStack_10 & 0xffffffff00000000;
      FUN_14157e730(param_1,&local_18,*(undefined4 *)(lVar2 + 0x180));
      *(int *)((longlong)param_1 + 0x86c) = *(int *)((longlong)param_1 + 0x86c) + 1;
      return;
    }
    FUN_141564a90();
  }
  return;
}



// FUNCTION 141576110 FUN_141576110 body=619 status=ok
// SIG undefined FUN_141576110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141576110(longlong param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulonglong uVar9;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  undefined4 *local_48;
  
  if (*(char *)(param_1 + 0x38) == '\r') {
    *(undefined1 *)(param_1 + 0x38) = 0xe;
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x5c);
    if (cVar4 != '\0') {
      local_res8[0] = *(undefined4 *)(param_1 + 0x54);
      FWeakObjectPtr::operator=(&local_res10,param_1);
      pvVar3 = ThreadLocalStoragePointer;
      piVar8 = *(int **)(param_1 + 0x130);
      local_58 = local_res10;
      local_54 = local_res14;
      local_48 = local_res8;
      piVar1 = piVar8 + *(int *)(param_1 + 0x138);
      if (piVar8 != piVar1) {
        uVar9 = (ulonglong)_tls_index;
        local_50 = param_1;
        do {
          iVar2 = *piVar8;
          lVar5 = FWeakObjectPtr::Get(param_1 + 0x5c);
          lVar5 = *(longlong *)(lVar5 + 0x188);
          if (lVar5 == 0) {
            if ((*(int *)(*(longlong *)((longlong)pvVar3 + uVar9 * 8) + 0x38) < DAT_1468a6b10) &&
               (_Init_thread_header(&DAT_1468a6b10), DAT_1468a6b10 == -1)) {
              DAT_1468a6b00 = 0;
              _DAT_1468a6b08 = 0;
              atexit((_func_5014 *)&LAB_143e74470);
              _Init_thread_footer(&DAT_1468a6b10);
            }
            puVar7 = &DAT_1468a6b00;
          }
          else if ((iVar2 < 0) || (*(int *)(lVar5 + 0x178) <= iVar2)) {
            if ((*(int *)(*(longlong *)((longlong)pvVar3 + uVar9 * 8) + 0x38) < DAT_1468a6b40) &&
               (_Init_thread_header(&DAT_1468a6b40), DAT_1468a6b40 == -1)) {
              DAT_1468a6b30 = 0;
              _DAT_1468a6b38 = 0;
              atexit((_func_5014 *)&LAB_143e744d0);
              _Init_thread_footer(&DAT_1468a6b40);
              puVar7 = &DAT_1468a6b30;
            }
            else {
              puVar7 = &DAT_1468a6b30;
            }
          }
          else {
            puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar5 + 0x170));
          }
          uVar6 = FWeakObjectPtr::Get(param_1 + 0x5c);
          FUN_14155d830(uVar6,local_68,iVar2);
          FUN_1415565c0(&local_58,puVar7);
          FUN_1415565c0(&local_58,local_68);
          local_res8[0] = *(undefined4 *)(param_1 + 0x54);
          if (local_68[0] != 0) {
            FMemory::Free();
          }
          piVar8 = piVar8 + 1;
        } while (piVar8 != piVar1);
      }
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x15a) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0x11;
  return;
}



// FUNCTION 141576380 FUN_141576380 body=466 status=ok
// SIG undefined FUN_141576380(void)

void FUN_141576380(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_48 [3];
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(char *)(param_1 + 0x38) != '\x0f') {
    *(undefined1 *)(param_1 + 0x15a) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0x11;
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 0x10;
  FUN_141577960();
  FUN_141576b70(param_1);
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x7c);
  if (((cVar5 != '\0') && (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xdc), cVar5 != '\0')) &&
     (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xe4), cVar5 != '\0')) {
    local_48[2] = 0;
    plStack_30 = (longlong *)0x0;
    plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xe4);
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x7c);
    lVar4 = *plVar6;
    uVar8 = FText::AsNumber(local_28,*(undefined4 *)(lVar7 + 0x90),0,local_48 + 2);
    (**(code **)(lVar4 + 0x2b0))(plVar6,uVar8,1,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_30 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
    local_48[1] = 3;
    local_48[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],&DAT_144c7d514,6);
    uVar8 = FWeakObjectPtr::Get(param_1 + 0xdc);
    FUN_142088910(uVar8,local_48);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  FUN_14157e200(param_1);
  *(undefined1 *)(param_1 + 0x15a) = 1;
  *(undefined1 *)(param_1 + 0x38) = 0x11;
  return;
}



// FUNCTION 141576560 FUN_141576560 body=164 status=ok
// SIG undefined FUN_141576560(void)

void FUN_141576560(longlong param_1)

{
  undefined8 *puVar1;
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    if (*(char *)(param_1 + 0x1bc) == '\0') {
      puVar1 = &DAT_1464a13e0;
      if (*(char *)(param_1 + 0x1bb) != '\0') {
        puVar1 = &DAT_1464a13d0;
      }
      FUN_142088910(*(longlong *)(param_1 + 0x1b0),puVar1);
      return;
    }
    local_18[1] = 5;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"Tuto",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x1b0),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 141576610 FUN_141576610 body=267 status=ok
// SIG undefined FUN_141576610(void)

void FUN_141576610(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined1 local_20 [24];
  
  FUN_140590080(local_38);
  if (param_2 != 0) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
    if (lVar3 != 0) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar3 = FUN_140cfc7b0(lVar3);
        if (lVar3 != 0) {
          lVar4 = FUN_1415825a0();
          iVar1 = *(int *)(lVar4 + 0x90);
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar1 * 8)
              != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lVar3 = FUN_14059b7e0(lVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
            if (lVar3 != 0) {
              lVar3 = FUN_1405a3150(lVar3,local_20,param_2,0);
              FUN_1405913a0(local_38,lVar3);
              local_28 = *(undefined4 *)(lVar3 + 0x10);
              FUN_140591060(local_20);
            }
          }
        }
      }
    }
  }
  FUN_140591060(local_38);
  return;
}



// FUNCTION 141576720 FUN_141576720 body=885 status=ok
// SIG undefined FUN_141576720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141576720(longlong *param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (((param_1[0xdd] != 0) && (param_1[0xdc] != 0)) && (param_1[0xdb] != 0)) {
    iVar4 = (int)param_1[0xe0];
    if (iVar4 != -1) {
      if ((iVar4 < 0) || (*(int *)(param_1[0xdb] + 0x38) <= iVar4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar5 = FUN_142eb6a30(), lVar5 != 0)) {
        lVar6 = FUN_1415838e0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_14157ee50(lVar5,(longlong)(int)param_1[0xe0] * 0x90 +
                              *(longlong *)(param_1[0xdb] + 0x30),0,0);
        }
      }
    }
    iVar4 = *(int *)(param_1[0xdd] + 0x318);
    if ((iVar4 < 0) || (*(int *)(param_1[0xdb] + 0x38) <= iVar4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = (longlong)iVar4 * 0x90 + *(longlong *)(param_1[0xdb] + 0x30);
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xde);
      if ((cVar3 != '\0') && (lVar6 = FUN_140e971d0(param_1), lVar6 != 0)) {
        FWeakObjectPtr::Get(param_1 + 0xde);
        lVar7 = FUN_140cff230(lVar6);
        uVar12 = 0;
        iVar4 = 0;
        if (lVar7 != 0) {
          iVar4 = *(int *)(lVar7 + 0x22c);
        }
        if (*(int *)(lVar5 + 0x70) <= iVar4) {
          lVar7 = FWeakObjectPtr::Get(param_1 + 0xde);
          iVar4 = *(int *)(lVar5 + 0x70);
          lVar8 = FUN_140cff230(lVar6);
          if (lVar8 != 0) {
            iVar11 = *(int *)(lVar8 + 0x22c) - iVar4;
            iVar10 = 0;
            if (iVar4 < *(int *)(lVar8 + 0x22c)) {
              iVar10 = iVar11;
            }
            *(int *)(lVar8 + 0x22c) = iVar10;
            *(undefined1 *)(lVar8 + 0x28) = 1;
            FUN_14172cc40(lVar8,CONCAT71((uint7)(uint3)((uint)iVar11 >> 8),1));
            lVar6 = FUN_140cff230(lVar6);
            if (lVar6 != 0) {
              uVar12 = *(undefined4 *)(lVar6 + 0x22c);
            }
            TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast
                      (lVar7 + 0xd8,uVar12);
            uStack_9c = *(undefined4 *)(lVar5 + 0x80);
            uStack_a0 = *(undefined4 *)(param_1[0xdd] + 0x318);
            local_98 = *(undefined1 *)(param_1[0xdb] + 0x40);
            local_a8 = param_1;
            FWeakObjectPtr::operator=(&local_b8,param_1);
            local_58 = (longlong *)0x0;
            local_48 = 0;
            puVar9 = (undefined8 *)FUN_140438ef0(0x28,local_78);
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = &PTR_FUN_144c7e538;
              *(undefined4 *)(puVar9 + 1) = (undefined4)local_a8;
              *(undefined4 *)((longlong)puVar9 + 0xc) = local_a8._4_4_;
              *(undefined4 *)(puVar9 + 2) = uStack_a0;
              *(undefined4 *)((longlong)puVar9 + 0x14) = uStack_9c;
              puVar9[3] = CONCAT71(uStack_97,local_98);
              *(undefined4 *)(puVar9 + 4) = (undefined4)local_b8;
              *(undefined4 *)((longlong)puVar9 + 0x24) = local_b8._4_4_;
            }
            local_88[0] = &LAB_141558a50;
            FUN_14208c260(param_1,local_88);
            if (local_48 != 0) {
              plVar13 = local_78;
              if (local_58 != (longlong *)0x0) {
                plVar13 = local_58;
              }
              if (plVar13 != (longlong *)0x0) {
                (**(code **)(*plVar13 + 0x10))(plVar13,0);
              }
            }
            if (local_58 != (longlong *)0x0) {
              FMemory::Free();
            }
            local_b8 = 0;
            local_b0 = 0;
            (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468a68e8,&local_b8);
            lVar6 = param_1[0xdd];
            fVar1 = *(float *)(lVar5 + 0x80);
            local_b8 = lVar6;
            if (*(char *)(lVar6 + 0x380) == '\x01') {
              FUN_141555020(&local_b8,(int)fVar1);
            }
            else {
              FUN_142ed2820(lVar6,1);
              FUN_141555020(&local_b8,(int)fVar1);
              *(undefined1 *)(lVar6 + 0x380) = 1;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141576aa0 FUN_141576aa0 body=200 status=ok
// SIG undefined FUN_141576aa0(void)

void FUN_141576aa0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x680);
  if (lVar2 != 0) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
    if (lVar3 != 0) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar3 = FUN_140cfc7b0(lVar3);
        if (lVar3 != 0) {
          lVar4 = FUN_1415825a0();
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
            FUN_141587a70(lVar3);
          }
        }
      }
    }
    FUN_142ebe450(lVar2);
  }
  return;
}



// FUNCTION 141576b70 FUN_141576b70 body=1046 status=ok
// SIG undefined FUN_141576b70(void)

void FUN_141576b70(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  float fVar9;
  longlong local_d8 [5];
  longlong *plStack_b0;
  longlong local_a8 [2];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x7c);
  if ((((cVar5 != '\0') && (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xcc), cVar5 != '\0')) &&
      (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xd4), cVar5 != '\0')) &&
     ((cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xbc), cVar5 != '\0' &&
      (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xc4), cVar5 != '\0')))) {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x7c);
    fVar9 = (float)((int)ROUND((*(float *)(lVar6 + 0xac) + *(float *)(lVar6 + 0xac)) - 0.5) >> 1);
    if (*(float *)(param_1 + 0x150) <= fVar9) {
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xd4);
      lVar6 = *plVar8;
      uVar7 = FText::AsNumber(local_58,0,0,&local_98);
      (**(code **)(lVar6 + 0x2b0))(plVar8,uVar7,1,0);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_50 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
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
      plVar8 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_90 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_90)(plStack_90);
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
    else {
      local_d8[1] = 3;
      local_d8[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
      FGenericPlatformString::Memcpy(local_d8[0],&DAT_144c7d4f4,6);
      uVar7 = FWeakObjectPtr::Get(param_1 + 0xcc);
      FUN_142088910(uVar7,local_d8);
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
      local_d8[4] = 0;
      plStack_b0 = (longlong *)0x0;
      plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xd4);
      lVar6 = *plVar8;
      uVar7 = FText::AsNumber(local_88,*(float *)(param_1 + 0x150) - fVar9,0,local_d8 + 4);
      (**(code **)(lVar6 + 0x2b0))(plVar8,uVar7,1,0);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_80 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      plVar8 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_b0 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_b0)(plStack_b0);
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
      fVar4 = *(float *)(param_1 + 0x154);
      if (fVar4 < *(float *)(param_1 + 0x150)) {
        if ((1e-08 < ABS(fVar4 - fVar9)) && (fVar9 <= fVar4)) {
          fVar9 = fVar4;
        }
        fVar9 = *(float *)(param_1 + 0x150) - fVar9;
        plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xc4);
        FString::PrintfImpl(local_a8,&DAT_144c7d500,(int)ROUND((fVar9 + fVar9) - 0.5) >> 1);
        lVar6 = *plVar8;
        uVar7 = FText::FromString(local_70,local_a8);
        (**(code **)(lVar6 + 0x2b0))(plVar8,uVar7,1,0);
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_68 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
        }
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
        local_d8[2] = 0;
        local_d8[3] = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 2,0);
        FGenericPlatformString::Memcpy(local_d8[2],L"Play",10);
        uVar7 = FWeakObjectPtr::Get(param_1 + 0xbc);
        FUN_142088910(uVar7,local_d8 + 2);
        if (local_d8[2] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 141576f90 FUN_141576f90 body=43 status=ok
// SIG undefined FUN_141576f90(void)

void FUN_141576f90(longlong *param_1)

{
  (**(code **)(*param_1 + 0x330))();
  (**(code **)(*param_1 + 0x338))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x2ec) = 0;
  return;
}


