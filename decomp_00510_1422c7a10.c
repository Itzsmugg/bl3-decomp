// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1422c7a10 EnableRadioEffect body=22 status=ok
// SIG undefined EnableRadioEffect(void)

void FAudioDevice::EnableRadioEffect(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 == '\0') {
    uVar1 = 7;
  }
  SetMixDebugState(param_1,uVar1);
  return;
}



// FUNCTION 1422c7a30 Evaluate body=254 status=ok
// SIG undefined Evaluate(void)

undefined8
FBaseAttenuationSettings::Evaluate
          (longlong param_1,longlong param_2,float *param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_18;
  float local_10;
  
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\0') {
    fVar4 = *param_3 - *(float *)(param_2 + 0x10);
    fVar5 = param_3[1] - *(float *)(param_2 + 0x14);
    fVar3 = param_3[2] - *(float *)(param_2 + 0x18);
    fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) - *(float *)(param_1 + 0x10);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    uVar2 = FUN_1422c2330(0,fVar3,*(undefined4 *)(param_1 + 0x20),param_4);
    return uVar2;
  }
  if (cVar1 == '\x01') {
    local_18 = *(undefined8 *)param_3;
    local_10 = param_3[2];
    uVar2 = AttenuationEvalCapsule(local_18,param_2,&local_18);
    return uVar2;
  }
  if (cVar1 == '\x02') {
    local_18 = *(undefined8 *)param_3;
    local_10 = param_3[2];
    uVar2 = AttenuationEvalBox(local_18,param_2,&local_18);
    return uVar2;
  }
  if (cVar1 == '\x03') {
    local_18 = *(undefined8 *)param_3;
    local_10 = param_3[2];
    uVar2 = AttenuationEvalCone(local_18,param_2,&local_18);
    return uVar2;
  }
  return 0x3f800000;
}



// FUNCTION 1422c7b30 Execute body=80 status=ok
// SIG undefined Execute(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_430d6071732268f25176845919c8111c>_>
     ::Execute(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001422c7b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),1);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001422c7b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))(0,1);
      return;
    }
  }
  return;
}



// FUNCTION 1422c7b80 Execute body=80 status=ok
// SIG undefined Execute(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_c9c4bc6a2eda1f62ec4a49dbc46861d2>_>
     ::Execute(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001422c7bb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001422c7bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))(0,0);
      return;
    }
  }
  return;
}



// FUNCTION 1422c7bd0 FUN_1422c7bd0 body=156 status=ok
// SIG undefined FUN_1422c7bd0(void)

void FUN_1422c7bd0(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar3 = FWeakObjectPtr::Get(param_1 + 8);
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  pcVar1 = *(code **)(param_1 + 0x10);
  local_38 = 0;
  local_30 = 0;
  if ((((longlong *)(param_1 + 0x38) != &local_38) && (*(int *)(param_1 + 0x40) != 0)) &&
     (plVar2 = *(longlong **)(param_1 + 0x38), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_38);
  }
  local_28 = *(undefined8 *)(param_1 + 0x28);
  local_20 = *(longlong *)(param_1 + 0x30);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)(uVar3,&local_18,&local_28,&local_38);
  return;
}



// FUNCTION 1422c7c70 Execute body=76 status=ok
// SIG undefined Execute(void)

undefined8 *
TBaseUObjectMethodDelegateInstance<0,UAssetManager,FPrimaryAssetId___cdecl(UObject_const_*)>::
Execute(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
  puVar2 = (undefined8 *)(**(code **)(param_1 + 0x10))(uVar1,local_18,param_3);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1422c7cc0 ExecuteIfSafe body=78 status=ok
// SIG undefined ExecuteIfSafe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
TBaseFunctorDelegateInstance<void___cdecl(void),<lambda_430d6071732268f25176845919c8111c>_>::
ExecuteIfSafe(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) != 0) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),1);
        return 1;
      }
      (**(code **)(_DAT_00000000 + 0x40))(0,1);
    }
  }
  return 1;
}



// FUNCTION 1422c7d10 ExecuteIfSafe body=78 status=ok
// SIG undefined ExecuteIfSafe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
TBaseFunctorDelegateInstance<void___cdecl(void),<lambda_c9c4bc6a2eda1f62ec4a49dbc46861d2>_>::
ExecuteIfSafe(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) != 0) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),0);
        return 1;
      }
      (**(code **)(_DAT_00000000 + 0x40))(0,0);
    }
  }
  return 1;
}



// FUNCTION 1422c7d60 FUN_1422c7d60 body=187 status=ok
// SIG undefined FUN_1422c7d60(void)

undefined8 FUN_1422c7d60(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 != 0) {
    uVar4 = FWeakObjectPtr::Get(param_1 + 8);
    local_18 = *(undefined4 *)(param_1 + 0x18);
    uStack_14 = *(undefined4 *)(param_1 + 0x1c);
    uStack_10 = *(undefined4 *)(param_1 + 0x20);
    uStack_c = *(undefined4 *)(param_1 + 0x24);
    pcVar1 = *(code **)(param_1 + 0x10);
    local_38 = 0;
    local_30 = 0;
    if ((((longlong *)(param_1 + 0x38) != &local_38) && (*(int *)(param_1 + 0x40) != 0)) &&
       (plVar2 = *(longlong **)(param_1 + 0x38), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_38);
    }
    local_28 = *(undefined8 *)(param_1 + 0x28);
    local_20 = *(longlong *)(param_1 + 0x30);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    (*pcVar1)(uVar4,&local_18,&local_28,&local_38);
    return 1;
  }
  return 0;
}



// FUNCTION 1422c7e20 FUN_1422c7e20 body=237 status=ok
// SIG undefined FUN_1422c7e20(void)

void FUN_1422c7e20(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1422c6660(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_14502dcd8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 1422c7f10 ExpandFile body=312 status=ok
// SIG undefined ExpandFile(void)

void IStreamedCompressedInfo::ExpandFile(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_28 [8];
  int local_20;
  
  uVar5 = 0;
  *(int *)((longlong)param_1 + 0x14) = (int)param_1[3];
  if (*(int *)(param_3 + 0xc) != 0) {
    do {
      uVar1 = (**(code **)(*param_1 + 0x90))(param_1);
      uVar7 = *(uint *)((longlong)param_1 + 0x14);
      uVar3 = uVar7 + uVar1;
      iVar4 = (int)uVar5;
      if (*(uint *)(param_1 + 2) < uVar3) {
LAB_1422c8009:
        uVar3 = *(int *)(param_3 + 0xc) - iVar4;
        uVar7 = 0;
        if (uVar3 != 0) {
          ::_guard_xfg_dispatch_icall_nop((void *)(uVar5 + param_2),0,(ulonglong)uVar3);
          uVar7 = uVar3;
        }
      }
      else {
        *(uint *)((longlong)param_1 + 0x14) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
        (**(code **)(*param_1 + 0x80))
                  (param_1,local_28,(ulonglong)uVar7 + param_1[1],uVar1,param_1[7],(int)param_1[8]);
        if (local_20 < 0) goto LAB_1422c8009;
        iVar6 = *(int *)((longlong)param_1 + 0x24);
        uVar3 = *(uint *)(param_1 + 4);
        uVar7 = local_20 + iVar6;
        uVar2 = uVar3;
        if (uVar7 <= uVar3) {
          uVar2 = uVar7;
        }
        *(uint *)((longlong)param_1 + 0x24) = uVar2;
        iVar6 = uVar3 - iVar6;
        if (uVar7 <= uVar3) {
          iVar6 = local_20;
        }
        iVar6 = iVar6 * (int)param_1[6];
        *(int *)(param_1 + 9) = iVar6;
        uVar7 = iVar6 - *(uint *)((longlong)param_1 + 0x4c);
        uVar3 = *(int *)(param_3 + 0xc) - iVar4;
        if (uVar3 <= uVar7) {
          uVar7 = uVar3;
        }
        if (uVar7 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(uVar5 + param_2),
                     (void *)((ulonglong)*(uint *)((longlong)param_1 + 0x4c) + param_1[7]),
                     (ulonglong)uVar7);
          *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + uVar7;
          if (*(uint *)(param_1 + 9) <= *(uint *)((longlong)param_1 + 0x4c)) {
            param_1[9] = 0;
          }
        }
      }
      uVar5 = (ulonglong)(iVar4 + uVar7);
    } while (iVar4 + uVar7 < *(uint *)(param_3 + 0xc));
  }
  return;
}



// FUNCTION 1422c8050 FUN_1422c8050 body=399 status=ok
// SIG undefined FUN_1422c8050(void)

longlong * FUN_1422c8050(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong local_40;
  longlong lStack_38;
  undefined1 local_30 [8];
  longlong local_28;
  
  FAssetData::GetPrimaryAssetId(param_3,&local_40);
  if ((((local_40 == 0) || (lStack_38 == 0)) && (*(char *)((longlong)param_1 + 0x271) != '\0')) &&
     (param_4 != 0)) {
    if ((int)param_1[0x70] != *(int *)((longlong)param_1 + 0x3ac)) {
      plVar5 = (longlong *)param_1[0x77];
      if ((longlong *)param_1[0x77] == (longlong *)0x0) {
        plVar5 = param_1 + 0x76;
      }
      iVar2 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)param_4 >> 0x20) + (int)param_4) &
                      (longlong)(int)param_1[0x78] - 1U) * 4);
      if (iVar2 != -1) {
        do {
          plVar5 = (longlong *)((longlong)iVar2 * 0x20 + param_1[0x6f]);
          if (*plVar5 == param_4) {
            if (iVar2 != -1) goto LAB_1422c8131;
            break;
          }
          iVar2 = (int)plVar5[3];
        } while (iVar2 != -1);
      }
    }
    plVar5 = (longlong *)0x0;
LAB_1422c8131:
    plVar3 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 != (longlong *)0x0) {
      lVar1 = *param_1;
      uVar4 = (**(code **)(lVar1 + 0x3d8))(param_1,local_30,param_3);
      (**(code **)(lVar1 + 0x2e8))(param_1,&local_40,uVar4);
      if (local_28 != 0) {
        FMemory::Free();
      }
      if ((local_40 == 0) || (lStack_38 == 0)) {
        if (param_4 == DAT_146aef398) {
          param_2[1] = *(longlong *)(param_3 + 8);
          *param_2 = param_4;
          return param_2;
        }
        param_2[1] = *(longlong *)(param_3 + 0x18);
        *param_2 = param_4;
        return param_2;
      }
    }
  }
  *param_2 = local_40;
  param_2[1] = lStack_38;
  return param_2;
}



// FUNCTION 1422c81e0 ExtractSoftObjectPaths body=822 status=ok
// SIG undefined ExtractSoftObjectPaths(void)

void UAssetManager::ExtractSoftObjectPaths
               (undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
               longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    local_48 = UProperty::GetPrivateStaticClass();
    local_50 = 1;
    local_58 = 0;
    local_38 = 0;
    local_40 = 1;
    local_3c = 1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_58,0);
    lVar3 = local_58;
    FUN_1416e2c80(local_58,param_2,1,1,0);
    *(longlong *)(lVar3 + 0x18) = param_3;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined4 *)(lVar3 + 0x30) = 0;
    FPropertyValueIterator::IterateToNext(&local_58);
LAB_1422c82a0:
    if (0 < (int)local_50) {
      lVar8 = (longlong)((int)local_50 + -1) * 0x38 + local_58;
      lVar3 = *(longlong *)(lVar8 + 0x20);
      lVar8 = (longlong)*(int *)(lVar8 + 0x30);
      puVar4 = *(undefined8 **)(lVar3 + 8 + lVar8 * 0x10);
      lVar3 = *(longlong *)(lVar3 + lVar8 * 0x10);
      plVar9 = (longlong *)*param_5;
      plVar1 = plVar9 + (int)param_5[1];
      for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
        if (*plVar9 == *(longlong *)(lVar3 + 0x18)) {
          local_38 = 1;
          FPropertyValueIterator::IterateToNext(&local_58);
          goto LAB_1422c82a0;
        }
      }
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      lVar8 = USoftClassProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
LAB_1422c8388:
        if (puVar4 != (undefined8 *)0x0) {
          local_70 = puVar4[2];
          FString::FString(local_68,puVar4 + 3);
          FSoftObjectPath::operator=(&local_88,&local_70);
        }
      }
      else {
        lVar8 = USoftObjectProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) goto LAB_1422c8388;
        lVar8 = UStructProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) &&
           ((lVar8 = FUN_14171a5f0(), *(longlong *)(lVar3 + 0x70) == lVar8 ||
            (lVar8 = FUN_14171a570(), *(longlong *)(lVar3 + 0x70) == lVar8)))) {
          if (puVar4 != (undefined8 *)0x0) {
            local_70 = *puVar4;
            FString::FString(local_68,puVar4 + 1);
            FSoftObjectPath::operator=(&local_88,&local_70);
          }
          local_38 = 1;
        }
      }
      if (local_88 != 0) {
        lVar3 = *param_4;
        lVar6 = param_4[1];
        for (lVar8 = lVar3; lVar8 != lVar3 + (longlong)(int)lVar6 * 0x18; lVar8 = lVar8 + 0x18) {
          cVar7 = FSoftObjectPath::operator==(lVar8,&local_88);
          if (cVar7 != '\0') {
            if ((int)((lVar8 - lVar3) / 0x18) != -1) goto LAB_1422c84c4;
            break;
          }
        }
        iVar2 = (int)param_4[1];
        *(int *)(param_4 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_4,iVar2);
        }
        plVar1 = (longlong *)(*param_4 + (longlong)iVar2 * 0x18);
        *plVar1 = local_88;
        FString::FString(plVar1 + 1,&local_80);
      }
LAB_1422c84c4:
      if (local_80 != 0) {
        FMemory::Free();
      }
      FPropertyValueIterator::IterateToNext(&local_58);
      goto LAB_1422c82a0;
    }
    TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>::
    ~TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>(&local_58);
  }
  return;
}



// FUNCTION 1422c8520 FUN_1422c8520 body=412 status=ok
// SIG undefined FUN_1422c8520(void)

undefined8 FUN_1422c8520(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong local_28 [2];
  
  lVar8 = 0;
  if ((*param_1 != 0) && (param_1[3] != 0)) {
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    lVar4 = FUN_1405ec200();
    lVar10 = lVar8;
    if (lVar4 != 0) {
      lVar5 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar6 = UObject::GetPrivateStaticClass();
        lVar5 = lVar4;
        do {
          lVar10 = lVar4;
          if (lVar5 == lVar6) break;
          lVar5 = *(longlong *)(lVar5 + 0x30);
          lVar10 = lVar8;
        } while (lVar5 != 0);
      }
    }
    param_1[6] = lVar10;
    if (lVar10 != 0) {
      plVar9 = (longlong *)param_1[10];
      plVar1 = plVar9 + (longlong)(int)param_1[0xb] * 3;
      for (; plVar9 != plVar1; plVar9 = plVar9 + 3) {
        if (*plVar9 != 0) {
          uVar7 = FSoftObjectPath::ToString(plVar9,local_28);
          TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(param_1 + 0xe,uVar7);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
        }
      }
      lVar8 = param_1[8];
      lVar10 = (longlong)(int)param_1[9] * 0x10 + lVar8;
      for (; lVar8 != lVar10; lVar8 = lVar8 + 0x10) {
        if ((1 < *(int *)(lVar8 + 8)) &&
           (iVar3 = TArray<FString,FDefaultAllocator>::Find(param_1 + 0xe,lVar8), iVar3 == -1)) {
          iVar3 = (int)param_1[0xf];
          *(int *)(param_1 + 0xf) = iVar3 + 1;
          if (*(int *)((longlong)param_1 + 0x7c) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xe,iVar3);
          }
          FString::FString((longlong)iVar3 * 0x10 + param_1[0xe],lVar8);
        }
      }
      if (((int)param_1[0xf] != 0) || ((char)param_1[0x11] != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1422c86c0 FUN_1422c86c0 body=155 status=ok
// SIG undefined FUN_1422c86c0(void)

undefined8 FUN_1422c86c0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x440) != *(int *)(param_1 + 0x46c)) {
    lVar2 = *(longlong *)(param_1 + 0x478);
    if (*(longlong *)(param_1 + 0x478) == 0) {
      lVar2 = param_1 + 0x470;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x480) - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x438);
      do {
        lVar3 = (longlong)iVar1;
        if (*(longlong *)(lVar2 + lVar3 * 0x18) == param_2) {
          if (iVar1 == -1) {
            return 0;
          }
          lVar2 = lVar2 + lVar3 * 0x18;
          if (lVar2 == 0) {
            return 0;
          }
          return *(undefined8 *)(lVar2 + 8);
        }
        iVar1 = *(int *)(lVar2 + 0x10 + lVar3 * 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1422c8760 FUN_1422c8760 body=841 status=ok
// SIG undefined FUN_1422c8760(void)

ulonglong FUN_1422c8760(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  DWORD DVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  cVar6 = IsInAudioThread();
  if (cVar6 != '\0') {
    uVar9 = FAudioDevice::FindClosestListenerIndex(param_2,param_1 + 0x128);
    return uVar9;
  }
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar6 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
    return 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 0x98);
  uVar9 = 0;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    uVar11 = 1;
    fVar3 = *(float *)(param_2 + 0x10);
    fVar4 = *(float *)(param_2 + 0x14);
    fVar5 = *(float *)(param_2 + 0x18);
    fVar15 = *(float *)(lVar2 + 0x14) - fVar4;
    fVar13 = *(float *)(lVar2 + 0x10) - fVar3;
    fVar14 = *(float *)(lVar2 + 0x18) - fVar5;
    fVar13 = fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14;
    if (1 < iVar1) {
      if (4 < iVar1) {
        pfVar12 = (float *)(lVar2 + 0x70);
        do {
          fVar14 = (pfVar12[-0xb] - fVar4) * (pfVar12[-0xb] - fVar4) +
                   (pfVar12[-0xc] - fVar3) * (pfVar12[-0xc] - fVar3) +
                   (pfVar12[-10] - fVar5) * (pfVar12[-10] - fVar5);
          uVar10 = uVar11;
          if (fVar13 <= fVar14) {
            uVar10 = (uint)uVar9;
            fVar14 = fVar13;
          }
          fVar15 = (pfVar12[1] - fVar4) * (pfVar12[1] - fVar4) +
                   (*pfVar12 - fVar3) * (*pfVar12 - fVar3) +
                   (pfVar12[2] - fVar5) * (pfVar12[2] - fVar5);
          fVar13 = fVar14;
          if (fVar15 <= fVar14) {
            fVar13 = fVar15;
          }
          uVar8 = uVar11 + 1;
          if (fVar14 <= fVar15) {
            uVar8 = uVar10;
          }
          fVar14 = (pfVar12[0xd] - fVar4) * (pfVar12[0xd] - fVar4) +
                   (pfVar12[0xc] - fVar3) * (pfVar12[0xc] - fVar3) +
                   (pfVar12[0xe] - fVar5) * (pfVar12[0xe] - fVar5);
          uVar10 = uVar11 + 2;
          if (fVar13 <= fVar14) {
            uVar10 = uVar8;
            fVar14 = fVar13;
          }
          fVar15 = (pfVar12[0x19] - fVar4) * (pfVar12[0x19] - fVar4) +
                   (pfVar12[0x18] - fVar3) * (pfVar12[0x18] - fVar3) +
                   (pfVar12[0x1a] - fVar5) * (pfVar12[0x1a] - fVar5);
          fVar13 = fVar14;
          if (fVar15 <= fVar14) {
            fVar13 = fVar15;
          }
          uVar8 = uVar11 + 3;
          if (fVar14 <= fVar15) {
            uVar8 = uVar10;
          }
          uVar9 = (ulonglong)uVar8;
          pfVar12 = pfVar12 + 0x30;
          uVar11 = uVar11 + 4;
        } while ((int)uVar11 < iVar1 + -3);
      }
      if ((int)uVar11 < iVar1) {
        pfVar12 = (float *)(lVar2 + 0x10 + (longlong)(int)uVar11 * 0x30);
        do {
          fVar14 = (pfVar12[1] - fVar4) * (pfVar12[1] - fVar4) +
                   (*pfVar12 - fVar3) * (*pfVar12 - fVar3) +
                   (pfVar12[2] - fVar5) * (pfVar12[2] - fVar5);
          uVar10 = uVar11;
          if (fVar13 <= fVar14) {
            uVar10 = (uint)uVar9;
            fVar14 = fVar13;
          }
          fVar13 = fVar14;
          pfVar12 = pfVar12 + 0xc;
          uVar11 = uVar11 + 1;
          uVar9 = (ulonglong)uVar10;
        } while ((int)uVar11 < iVar1);
      }
    }
  }
  return uVar9;
}



// FUNCTION 1422c8ab0 FindClosestListenerIndex body=722 status=ok
// SIG undefined FindClosestListenerIndex(void)

int FAudioDevice::FindClosestListenerIndex(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar1 = (int)param_2[1];
  iVar6 = 0;
  if (0 < iVar1) {
    lVar2 = *param_2;
    iVar8 = 1;
    fVar3 = *(float *)(param_1 + 0x10);
    fVar4 = *(float *)(param_1 + 0x14);
    fVar5 = *(float *)(param_1 + 0x18);
    fVar12 = *(float *)(lVar2 + 0x14) - fVar4;
    fVar10 = *(float *)(lVar2 + 0x10) - fVar3;
    fVar11 = *(float *)(lVar2 + 0x18) - fVar5;
    fVar10 = fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11;
    if (1 < iVar1) {
      if (4 < iVar1) {
        pfVar9 = (float *)(lVar2 + 0x170);
        do {
          fVar11 = (pfVar9[-0x2b] - fVar4) * (pfVar9[-0x2b] - fVar4) +
                   (pfVar9[-0x2c] - fVar3) * (pfVar9[-0x2c] - fVar3) +
                   (pfVar9[-0x2a] - fVar5) * (pfVar9[-0x2a] - fVar5);
          iVar7 = iVar8;
          if (fVar10 <= fVar11) {
            iVar7 = iVar6;
            fVar11 = fVar10;
          }
          fVar12 = (pfVar9[1] - fVar4) * (pfVar9[1] - fVar4) + (*pfVar9 - fVar3) * (*pfVar9 - fVar3)
                   + (pfVar9[2] - fVar5) * (pfVar9[2] - fVar5);
          fVar10 = fVar11;
          if (fVar12 <= fVar11) {
            fVar10 = fVar12;
          }
          iVar6 = iVar8 + 1;
          if (fVar11 <= fVar12) {
            iVar6 = iVar7;
          }
          fVar11 = (pfVar9[0x2d] - fVar4) * (pfVar9[0x2d] - fVar4) +
                   (pfVar9[0x2c] - fVar3) * (pfVar9[0x2c] - fVar3) +
                   (pfVar9[0x2e] - fVar5) * (pfVar9[0x2e] - fVar5);
          iVar7 = iVar8 + 2;
          if (fVar10 <= fVar11) {
            iVar7 = iVar6;
            fVar11 = fVar10;
          }
          fVar12 = (pfVar9[0x59] - fVar4) * (pfVar9[0x59] - fVar4) +
                   (pfVar9[0x58] - fVar3) * (pfVar9[0x58] - fVar3) +
                   (pfVar9[0x5a] - fVar5) * (pfVar9[0x5a] - fVar5);
          fVar10 = fVar11;
          if (fVar12 <= fVar11) {
            fVar10 = fVar12;
          }
          iVar6 = iVar8 + 3;
          if (fVar11 <= fVar12) {
            iVar6 = iVar7;
          }
          pfVar9 = pfVar9 + 0xb0;
          iVar8 = iVar8 + 4;
        } while (iVar8 < iVar1 + -3);
      }
      if (iVar8 < iVar1) {
        pfVar9 = (float *)(lVar2 + 0x10 + (longlong)iVar8 * 0xb0);
        iVar7 = iVar6;
        do {
          fVar11 = (pfVar9[1] - fVar4) * (pfVar9[1] - fVar4) + (*pfVar9 - fVar3) * (*pfVar9 - fVar3)
                   + (pfVar9[2] - fVar5) * (pfVar9[2] - fVar5);
          iVar6 = iVar8;
          if (fVar10 <= fVar11) {
            iVar6 = iVar7;
            fVar11 = fVar10;
          }
          fVar10 = fVar11;
          pfVar9 = pfVar9 + 0x2c;
          iVar8 = iVar8 + 1;
          iVar7 = iVar6;
        } while (iVar8 < iVar1);
      }
    }
    return iVar6;
  }
  return 0;
}



// FUNCTION 1422c8d90 FindId body=179 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FPrimaryAssetId,FPrimaryAssetRules>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRules,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar3 = (longlong *)0x0;
    if (param_1[8] == 0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)(((ulonglong)plVar3 | param_1[8]) +
                    ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((*(longlong *)(lVar1 + lVar4 * 0x28) == *param_3) &&
           (*(longlong *)(lVar1 + 8 + lVar4 * 0x28) == param_3[1])) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar1 + 0x20 + lVar4 * 0x28);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1422c8e50 FindId body=179 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar3 = (longlong *)0x0;
    if (param_1[8] == 0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)(((ulonglong)plVar3 | param_1[8]) +
                    ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x68;
        if ((*(longlong *)(lVar4 + lVar1) == *param_3) &&
           (*(longlong *)(lVar4 + 8 + lVar1) == param_3[1])) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x60 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1422c8f10 FindId body=179 status=ok
// SIG undefined FindId(void)

int * TSet<FPrimaryAssetId,DefaultKeyFuncs<FPrimaryAssetId,0>,FDefaultSetAllocator>::FindId
                (longlong *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar3 = (longlong *)0x0;
    if (param_1[8] == 0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)(((ulonglong)plVar3 | param_1[8]) +
                    ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((*(longlong *)(lVar1 + lVar4 * 0x18) == *param_3) &&
           (*(longlong *)(lVar1 + 8 + lVar4 * 0x18) == param_3[1])) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + lVar4 * 0x18);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1422c8fd0 FUN_1422c8fd0 body=1849 status=ok
// SIG undefined FUN_1422c8fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1422c8fd0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_2f8 [32];
  undefined4 local_2d8 [2];
  uint local_2d0;
  uint uStack_2cc;
  undefined1 *puStack_2c8;
  undefined4 local_2c0;
  int iStack_2bc;
  int iStack_2b8;
  undefined4 uStack_2b4;
  uint local_2b0;
  uint uStack_2ac;
  undefined1 *puStack_2a8;
  undefined4 local_2a0;
  int iStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  longlong local_290;
  longlong *local_288;
  undefined1 local_280 [4];
  undefined1 local_27c [4];
  undefined1 local_278 [4];
  int local_274;
  int local_270;
  longlong *local_268;
  longlong *local_260;
  longlong local_258;
  longlong *local_250;
  undefined8 local_248;
  uint uStack_240;
  uint uStack_23c;
  undefined1 *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  uint uStack_218;
  uint uStack_214;
  undefined1 *local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined4 *puStack_1c0;
  undefined8 local_1b8;
  longlong *local_198;
  undefined8 uStack_190;
  int iStack_188;
  int iStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  longlong *local_170;
  undefined8 uStack_168;
  int iStack_160;
  int iStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  ulonglong local_128;
  undefined8 local_120;
  undefined4 local_118;
  int local_114;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  ulonglong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  int local_c4;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  local_288 = param_3;
  local_260 = param_4;
  local_250 = param_1;
  local_268 = (longlong *)FWindowsPlatformMisc::GetPlatformChunkInstall();
  if ((local_268 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x273) != '\0')) {
    local_290 = *param_2;
    local_258 = local_290 + (longlong)(int)param_2[1] * 0x18;
    if (local_290 != local_258) {
      do {
        uVar11 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1c8 = (longlong *)0x0;
        puStack_1c0 = (undefined4 *)0x0;
        local_1b8 = 0;
        (**(code **)(*param_1 + 0x3c8))(param_1,local_290,&local_1f8);
        plVar5 = local_268;
        local_a0._0_4_ = 0;
        local_f0._0_4_ = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0xffffffff;
        local_74 = 0;
        local_68 = 0;
        uVar15 = (ulonglong)((longlong)(puStack_1c0 + (int)local_1b8) + (3 - (longlong)puStack_1c0))
                 >> 2;
        local_60 = 0;
        local_f8 = 0;
        if (puStack_1c0 + (int)local_1b8 < puStack_1c0) {
          uVar15 = 0;
        }
        local_f0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0xffffffff;
        local_c4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_148 = 0;
        local_140 = 0;
        local_128 = 0;
        local_120 = 0;
        local_118 = 0xffffffff;
        local_114 = 0;
        local_108 = 0;
        local_100 = 0;
        puVar13 = puStack_1c0;
        iVar6 = (int)local_f0;
        local_140._0_4_ = (int)local_f0;
        iVar7 = 0;
        if (uVar15 != 0) {
          do {
            local_2d8[0] = *puVar13;
            iVar6 = (**(code **)(*plVar5 + 8))(plVar5);
            if (iVar6 == 0) {
              puVar10 = local_278;
              plVar9 = &local_148;
LAB_1422c9217:
              FUN_14044be50(plVar9,puVar10,local_2d8,0);
            }
            else {
              if (iVar6 == 1) {
                puVar10 = local_27c;
                plVar9 = &local_f8;
                goto LAB_1422c9217;
              }
              if (iVar6 - 2U < 2) {
                puVar10 = local_280;
                plVar9 = &local_a8;
                goto LAB_1422c9217;
              }
            }
            uVar11 = uVar11 + 1;
            puVar13 = puVar13 + 1;
          } while (uVar11 != uVar15);
          param_4 = local_260;
          iVar6 = (int)local_d0;
          iVar7 = (int)local_120;
        }
        plVar5 = local_288;
        if ((int)local_a0 == local_74) {
          puVar10 = (undefined1 *)0x0;
          if ((int)local_f0 - local_c4 < 1) {
            if (0 < (int)local_140 - local_114) {
              uStack_2ac = 1;
              local_2b0 = 0;
              puStack_2a8 = local_138;
              iStack_29c = 0;
              iStack_298 = 0;
              if (iVar7 != 0) {
                puVar14 = local_138;
                if (local_128 != 0) {
                  puVar14 = puVar10;
                }
                uVar2 = *(uint *)((ulonglong)puVar14 | local_128);
                iStack_298 = 0;
                while (uVar2 == 0) {
                  iVar6 = (int)puVar10;
                  iStack_298 = iStack_298 + 0x20;
                  local_2b0 = iVar6 + 1;
                  puVar10 = (undefined1 *)(ulonglong)local_2b0;
                  iStack_29c = iVar7;
                  if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6)
                  goto LAB_1422c9512;
                  uVar2 = ((uint *)((ulonglong)puVar14 | local_128))[(longlong)iVar6 + 1];
                }
                uStack_2ac = -uVar2 & uVar2;
                local_270 = 0x1f;
                if (uStack_2ac != 0) {
                  for (; uStack_2ac >> local_270 == 0; local_270 = local_270 + -1) {
                  }
                }
                if (uStack_2ac == 0) {
                  iVar6 = 0x20;
                }
                else {
                  iVar6 = 0x1f - local_270;
                }
                iStack_29c = (iStack_298 - iVar6) + 0x1f;
                if (iVar7 < iStack_29c) {
                  iStack_29c = iVar7;
                }
              }
LAB_1422c9512:
              local_2a0 = 0xffffffff;
              uStack_168 = CONCAT44(uStack_2ac,local_2b0);
              local_170 = &local_148;
              uStack_208 = CONCAT44(iStack_29c,0xffffffff);
              local_200 = CONCAT44(uStack_294,iStack_298);
              _iStack_160 = CONCAT44(iVar7,-1 << ((byte)iVar7 & 0x1f));
              uStack_218 = local_2b0;
              uStack_214 = uStack_2ac;
              local_210 = puStack_2a8;
              uStack_158 = uStack_208;
              uStack_150 = local_200;
              local_220 = local_170;
              while( true ) {
                if (((uStack_208._4_4_ == iVar7) && (local_210 == local_138)) &&
                   (local_220 == &local_148)) break;
                iVar6 = (int)param_4[1];
                uVar3 = *(undefined4 *)(*local_220 + (longlong)uStack_208._4_4_ * 0xc);
                *(int *)(param_4 + 1) = iVar6 + 1;
                if (*(int *)((longlong)param_4 + 0xc) < iVar6 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4,iVar6);
                }
                *(undefined4 *)(*param_4 + (longlong)iVar6 * 4) = uVar3;
                uStack_208 = CONCAT44(uStack_208._4_4_,(uint)uStack_208 & ~uStack_214);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_218);
              }
            }
          }
          else {
            uStack_2cc = 1;
            local_2d0 = 0;
            puStack_2c8 = local_e8;
            iStack_2bc = 0;
            iStack_2b8 = 0;
            if (iVar6 != 0) {
              puVar14 = local_e8;
              if (local_d8 != 0) {
                puVar14 = puVar10;
              }
              uVar2 = *(uint *)((ulonglong)puVar14 | local_d8);
              iStack_2b8 = 0;
              while (uVar2 == 0) {
                iVar7 = (int)puVar10;
                iStack_2b8 = iStack_2b8 + 0x20;
                local_2d0 = iVar7 + 1;
                puVar10 = (undefined1 *)(ulonglong)local_2d0;
                iStack_2bc = iVar6;
                if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7)
                goto LAB_1422c9350;
                uVar2 = ((uint *)((ulonglong)puVar14 | local_d8))[(longlong)iVar7 + 1];
              }
              uStack_2cc = -uVar2 & uVar2;
              local_274 = 0x1f;
              if (uStack_2cc != 0) {
                for (; uStack_2cc >> local_274 == 0; local_274 = local_274 + -1) {
                }
              }
              if (uStack_2cc == 0) {
                iVar7 = 0x20;
              }
              else {
                iVar7 = 0x1f - local_274;
              }
              iStack_2bc = (iStack_2b8 - iVar7) + 0x1f;
              if (iVar6 < iStack_2bc) {
                iStack_2bc = iVar6;
              }
            }
LAB_1422c9350:
            local_2c0 = 0xffffffff;
            uStack_190 = CONCAT44(uStack_2cc,local_2d0);
            uStack_230 = CONCAT44(iStack_2bc,0xffffffff);
            local_228 = CONCAT44(uStack_2b4,iStack_2b8);
            local_198 = &local_f8;
            _iStack_188 = CONCAT44(iVar6,-1 << ((byte)iVar6 & 0x1f));
            uStack_240 = local_2d0;
            uStack_23c = uStack_2cc;
            iVar7 = -1;
            local_238 = puStack_2c8;
            uStack_180 = uStack_230;
            uStack_178 = local_228;
            local_248 = local_198;
            while( true ) {
              iVar12 = iVar7;
              if (((uStack_230._4_4_ == iVar6) && (local_238 == local_e8)) &&
                 (local_248 == &local_f8)) break;
              iVar7 = *(int *)(*local_248 + (longlong)uStack_230._4_4_ * 0xc);
              piVar8 = (int *)*plVar5;
              piVar1 = piVar8 + (int)plVar5[1];
              for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
                if (*piVar8 == iVar7) goto LAB_1422c95e5;
              }
              uStack_230 = CONCAT44(uStack_230._4_4_,(uint)uStack_230 & ~uStack_23c);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_240);
              if (iVar12 != -1) {
                iVar7 = iVar12;
              }
            }
            if (iVar12 != -1) {
              iVar6 = (int)plVar5[1];
              *(int *)(plVar5 + 1) = iVar6 + 1;
              if (*(int *)((longlong)plVar5 + 0xc) < iVar6 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar5,iVar6);
              }
              *(int *)(*plVar5 + (longlong)iVar6 * 4) = iVar12;
            }
          }
        }
LAB_1422c95e5:
        local_100 = 0;
        if (local_108 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_148);
        local_b0 = 0;
        if (local_b8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_f8);
        local_60 = 0;
        if (local_68 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_a8);
        if (puStack_1c0 != (undefined4 *)0x0) {
          FMemory::Free();
        }
        plVar5 = local_1c8;
        if (local_1c8 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_1c8 + 1;
          lVar4 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_1c8)(local_1c8);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        local_290 = local_290 + 0x18;
        param_3 = local_288;
        param_1 = local_250;
      } while (local_290 != local_258);
    }
    if ((0 < (int)param_3[1]) || (0 < (int)param_4[1])) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1422c9710 FindNextHighestEQPrioritySoundMix body=494 status=ok
// SIG undefined FindNextHighestEQPrioritySoundMix(void)

ulonglong FAudioDevice::FindNextHighestEQPrioritySoundMix(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  double *pdVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  uVar9 = 0;
  plVar1 = (longlong *)(param_1 + 0x218);
  local_78 = 0;
  uStack_74 = 1;
  iVar3 = *(int *)(param_1 + 0x240);
  puStack_28 = (uint *)(param_1 + 0x228);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x238);
    if (*(uint **)(param_1 + 0x238) == (uint *)0x0) {
      puVar12 = puStack_28;
    }
    uVar4 = *puVar12;
    uVar10 = uVar9;
    uVar11 = uVar9;
    while (uVar4 == 0) {
      iVar7 = (int)uVar10;
      uStack_60 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uStack_60;
      local_78 = iVar7 + 1;
      uVar10 = (ulonglong)local_78;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 <= iVar7) goto LAB_1422c97f0;
      uVar4 = puVar12[(longlong)iVar7 + 1];
    }
    uStack_74 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_68._4_4_ = (uStack_60 - iVar7) + 0x1f;
    if (iVar3 < local_68._4_4_) {
LAB_1422c97f0:
      local_68._4_4_ = iVar3;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar6 = local_68._4_4_ < *(int *)(param_1 + 0x240);
  uVar10 = uVar9;
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar6) {
    do {
      lVar8 = (longlong)iStack_5c * 0x50;
      lVar5 = *plVar1;
      uVar11 = *(ulonglong *)(lVar8 + lVar5);
      if ((uVar11 != param_2) && (*(int *)(lVar8 + 0x44 + lVar5) < 3)) {
        if (uVar9 != 0) {
          if ((*(float *)(uVar11 + 0x2c) <= *(float *)(uVar9 + 0x2c)) &&
             ((*(float *)(uVar11 + 0x2c) != *(float *)(uVar9 + 0x2c) ||
              (pdVar2 = (double *)(lVar8 + 0x18 + lVar5),
              *(double *)(uVar10 + 0x10) < *pdVar2 || *(double *)(uVar10 + 0x10) == *pdVar2))))
          goto LAB_1422c98a3;
        }
        uVar10 = lVar5 + 8 + lVar8;
        uVar9 = uVar11;
      }
LAB_1422c98a3:
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<USoundMix_*,FSoundMixState>,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return uVar9;
}



// FUNCTION 1422c9900 FUN_1422c9900 body=566 status=ok
// SIG undefined FUN_1422c9900(void)

void FUN_1422c9900(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
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
  
  plVar2 = param_1 + 0x6f;
  local_98 = 0;
  uVar3 = *(uint *)(param_1 + 0x74);
  puVar1 = (uint *)(param_1 + 0x71);
  bVar6 = false;
  uStack_84 = 0;
  uStack_94 = 1;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar11 = (uint *)param_1[0x73];
    if ((uint *)param_1[0x73] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar5) goto LAB_1422c99db;
      uVar4 = puVar11[lVar8 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar9 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (iStack_80 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1422c99db:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x74);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = (uint *)param_1[0x73];
    if ((uint *)param_1[0x73] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar7 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar9 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1422c9aa3;
      uVar7 = puVar11[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar10 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1422c9aa3:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    if (*(int *)(*(longlong *)((longlong)(int)uStack_5c * 0x20 + 8 + *plVar2) + 0xe8) != 0) {
      bVar6 = true;
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  if (!bVar6) {
    (**(code **)(*param_1 + 0x460))(param_1);
  }
  return;
}



// FUNCTION 1422c9b40 FUN_1422c9b40 body=1293 status=ok
// SIG undefined FUN_1422c9b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422c9b40(longlong *param_1,longlong param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined1 local_164 [4];
  longlong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [8];
  longlong local_140;
  undefined1 *local_138 [2];
  undefined1 local_128 [32];
  undefined8 local_108;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  cVar5 = IsInAudioThread();
  if (cVar5 == '\0') {
    local_108 = 0;
    local_f8 = 0;
    local_158 = param_1;
    uStack_150 = param_2;
    puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_128);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar7 + 1) = (undefined4)local_158;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_158._4_4_;
      *(undefined4 *)(puVar7 + 2) = (undefined4)uStack_150;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_150._4_4_;
    }
    local_138[0] = &LAB_1422c2b70;
    FUN_1422f8a30(local_138,local_168);
    local_160 = 0;
    FAudioCommandFence::BeginFence(&local_160);
    FAudioCommandFence::Wait(&local_160,0);
    plVar16 = param_1 + 0x12;
    *(undefined4 *)(param_1 + 0x13) = 0;
    if ((*(int *)((longlong)param_1 + 0x9c) < 0) && (*(int *)((longlong)param_1 + 0x9c) != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(plVar16,0);
    }
    iVar14 = (int)param_1[0x13];
    *(int *)(param_1 + 0x13) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0x9c) < iVar14 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar16,iVar14);
    }
    uVar18 = uRam0000000146aef45c;
    puVar9 = (undefined4 *)((longlong)iVar14 * 0x30 + *plVar16);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = uVar18;
    *(undefined8 *)(puVar9 + 4) = 0;
    *(undefined8 *)(puVar9 + 6) = 0;
    uVar18 = uRam0000000146aef454 & uRam0000000146aef404;
    uVar19 = uRam0000000146aef458 & uRam0000000146aef408;
    uVar20 = uRam0000000146aef45c & uRam0000000146aef40c;
    puVar9[8] = _DAT_146aef450 & _DAT_146aef400;
    puVar9[9] = uVar18;
    puVar9[10] = uVar19;
    puVar9[0xb] = uVar20;
    if (local_160 != 0) {
      LOCK();
      piVar1 = (int *)(local_160 + 0x48);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  else {
    iVar14 = (int)param_1[0x73] + -1;
    if (-1 < iVar14) {
      lVar12 = (longlong)iVar14 * 8;
      lVar17 = lVar12;
      do {
        cVar5 = USoundWave::CleanupDecompressor(*(undefined8 *)(lVar12 + param_1[0x72]),1);
        if (cVar5 != '\0') {
          iVar2 = (int)param_1[0x73];
          iVar6 = (iVar2 - iVar14) + -1;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[0x72] + lVar17),
                       (void *)(param_1[0x72] + (longlong)(iVar2 - iVar6) * 8),(longlong)iVar6 << 3)
            ;
            iVar2 = (int)param_1[0x73];
          }
          *(int *)(param_1 + 0x73) = iVar2 + -1;
        }
        lVar17 = lVar17 + -8;
        lVar12 = lVar12 + -8;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
    if (param_2 == 0) {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
    bVar3 = false;
    iVar14 = (int)param_1[0x6f] + -1;
    lVar12 = (longlong)iVar14;
    bVar4 = false;
    if (-1 < iVar14) {
      do {
        bVar3 = bVar4;
        lVar17 = *(longlong *)(param_1[0x6e] + lVar12 * 8);
        if (param_2 == 0) {
          local_158 = (longlong *)lVar17;
          if (*(longlong *)(lVar17 + 0x18) != 0) {
            TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
            ::Remove(param_1 + 0x87);
          }
          plVar16 = &local_158;
          puVar10 = local_148;
LAB_1422c9dca:
          FUN_14058cbf0(param_1 + 0x78,puVar10,plVar16,0);
        }
        else if ((*(byte *)(lVar17 + 0x99) & 0x20) == 0) {
          lVar8 = FWeakObjectPtr::Get(lVar17);
          if ((lVar8 == 0) || (lVar8 == param_2)) {
            local_140 = lVar17;
            if (*(longlong *)(lVar17 + 0x18) != 0) {
              TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
              ::Remove(param_1 + 0x87);
            }
            plVar16 = &local_140;
            puVar10 = local_164;
            goto LAB_1422c9dca;
          }
        }
        else {
          bVar3 = true;
        }
        lVar12 = lVar12 + -1;
        bVar4 = bVar3;
      } while (-1 < lVar12);
    }
    if ((param_2 == 0) || ((*(uint *)(param_2 + 0x830) & 0x400) != 0)) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
    FUN_1422d3680(param_1,uVar11);
    plVar16 = param_1 + 0x25;
    uVar13 = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    if ((*(int *)((longlong)param_1 + 0x134) < 0) && (*(int *)((longlong)param_1 + 0x134) != 0)) {
      TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(plVar16,0);
    }
    local_e8 = _DAT_1468b5b70;
    uStack_e0 = uRam00000001468b5b78;
    local_c8 = _DAT_1468b5b90;
    uStack_c4 = uRam00000001468b5b94;
    uStack_c0 = uRam00000001468b5b98;
    uStack_bc = uRam00000001468b5b9c;
    local_d8 = _DAT_1468b5b80;
    uStack_d4 = uRam00000001468b5b84;
    uStack_d0 = uRam00000001468b5b88;
    uStack_cc = uRam00000001468b5b8c;
    local_b8 = 0;
    local_b0 = 0;
    FInteriorSettings::FInteriorSettings(&local_ac);
    iVar14 = (int)param_1[0x26];
    local_80 = 0;
    local_88 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    *(int *)(param_1 + 0x26) = iVar14 + 1;
    local_48 = param_1;
    if (*(int *)((longlong)param_1 + 0x134) < iVar14 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(plVar16,iVar14);
    }
    puVar7 = (undefined8 *)((longlong)iVar14 * 0xb0 + *plVar16);
    *puVar7 = local_e8;
    puVar7[1] = uStack_e0;
    puVar7[2] = CONCAT44(uStack_d4,local_d8);
    puVar7[3] = CONCAT44(uStack_cc,uStack_d0);
    puVar7[4] = CONCAT44(uStack_c4,local_c8);
    puVar7[5] = CONCAT44(uStack_bc,uStack_c0);
    puVar7[6] = local_b8;
    *(undefined4 *)(puVar7 + 7) = local_b0;
    *(undefined8 *)((longlong)puVar7 + 0x3c) = local_ac;
    *(undefined8 *)((longlong)puVar7 + 0x44) = uStack_a4;
    *(undefined8 *)((longlong)puVar7 + 0x4c) = local_9c;
    *(undefined8 *)((longlong)puVar7 + 0x54) = uStack_94;
    *(undefined4 *)((longlong)puVar7 + 0x5c) = local_8c;
    *(undefined4 *)(puVar7 + 0xc) = local_88;
    *(undefined4 *)((longlong)puVar7 + 100) = local_84;
    puVar7[0xd] = local_80;
    puVar7[0xe] = local_78;
    puVar7[0xf] = uStack_70;
    puVar7[0x10] = local_68;
    puVar7[0x11] = uStack_60;
    *(undefined4 *)(puVar7 + 0x12) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar7 + 0x94) = local_58._4_4_;
    *(undefined4 *)(puVar7 + 0x13) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)puVar7 + 0x9c) = uStack_50._4_4_;
    puVar7[0x14] = local_48;
    if (param_3 != '\0') {
      TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>
      ::Reset(param_1 + 0x5c);
      *(byte *)(param_1 + 0x6d) = *(byte *)(param_1 + 0x6d) & 0xfd;
    }
    if (param_2 == 0) {
      if (bVar3) {
        uVar15 = uVar13;
        if (0 < (int)param_1[0x2a]) {
          do {
            lVar12 = (*(longlong **)(uVar13 + param_1[0x29]))[2];
            if ((lVar12 == 0) || ((*(byte *)(*(longlong *)(lVar12 + 0x60) + 0x99) & 0x20) == 0)) {
              (**(code **)(**(longlong **)(uVar13 + param_1[0x29]) + 0x38))();
            }
            uVar18 = (int)uVar15 + 1;
            uVar13 = uVar13 + 8;
            uVar15 = (ulonglong)uVar18;
          } while ((int)uVar18 < (int)param_1[0x2a]);
        }
      }
      else {
        uVar15 = uVar13;
        if (0 < (int)param_1[0x2a]) {
          do {
            (**(code **)(**(longlong **)(uVar13 + param_1[0x29]) + 0x38))();
            uVar18 = (int)uVar15 + 1;
            uVar13 = uVar13 + 8;
            uVar15 = (ulonglong)uVar18;
          } while ((int)uVar18 < (int)param_1[0x2a]);
        }
        TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
        ::Reset(param_1 + 0x2d);
      }
    }
    if (((*(byte *)(param_1 + 0x6b) & 0x20) != 0) &&
       ((param_2 == 0 || ((*(uint *)(param_2 + 0x830) & 0x400) != 0)))) {
      (**(code **)(*param_1 + 0x118))(param_1);
    }
  }
  return;
}



// FUNCTION 1422ca050 FUN_1422ca050 body=184 status=ok
// SIG undefined FUN_1422ca050(void)

void FUN_1422ca050(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(DAT_146b17150 + 0x2c0) == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0xbb,L"Cannot use AssetManager if no AssetManagerClassName is defined!");
    FDebug::AssertFailed
              (&DAT_1450279c6,"Unknown",0xbb,
               L"Cannot use AssetManager if no AssetManagerClassName is defined!");
    uVar1 = GetTransientPackage();
    FUN_1417846f0(uVar1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar2 = FUN_1428fbb40();
    FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  }
  return;
}



// FUNCTION 1422ca110 GetActualVolume body=21 status=ok
// SIG undefined GetActualVolume(void)

float FWaveInstance::GetActualVolume(longlong param_1)

{
  return *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x74) *
         *(float *)(param_1 + 0x6c);
}



// FUNCTION 1422ca130 GetAssetBundleEntries body=637 status=ok
// SIG undefined GetAssetBundleEntries(void)

undefined8
UAssetManager::GetAssetBundleEntries(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  uint *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int local_res8 [2];
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
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
  
  uVar12 = 0;
  TSet<TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x118),local_res8,param_2);
  plVar9 = (longlong *)0x0;
  plVar6 = plVar9;
  if (local_res8[0] != -1) {
    plVar6 = (longlong *)((longlong)local_res8[0] * 0x68 + *(longlong *)(param_1 + 0x118));
  }
  plVar13 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar13 = plVar9;
  }
  if (plVar13 != (longlong *)0x0) {
    uVar2 = *(uint *)(plVar13 + 5);
    puVar1 = (uint *)(plVar13 + 2);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar2 != 0) {
      puVar11 = (uint *)plVar13[4];
      if ((uint *)plVar13[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar3 = *puVar11;
      plVar6 = plVar9;
      while (uVar3 == 0) {
        iVar5 = (int)plVar9;
        uStack_80 = (int)plVar6 + 0x20;
        plVar6 = (longlong *)(ulonglong)uStack_80;
        local_98 = iVar5 + 1;
        plVar9 = (longlong *)(ulonglong)local_98;
        if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 <= iVar5)
        goto LAB_1422ca24c;
        uVar3 = puVar11[(longlong)iVar5 + 1];
      }
      uStack_94 = -uVar3 & uVar3;
      iVar5 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_84 = (uStack_80 - iVar5) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_1422ca24c:
        uStack_84 = uVar2;
      }
    }
    uVar2 = *(uint *)(plVar13 + 5);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,uStack_80);
    uVar3 = *(uint *)(plVar13 + 5);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar8 = uVar2 & 0xffffffe0;
    uStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar1;
    local_50 = plVar13;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_84 = uVar2;
    if (uVar2 != uVar3) {
      puVar11 = (uint *)plVar13[4];
      if ((uint *)plVar13[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar10 = puVar11[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar5 = (int)uVar2 >> 5;
      while (uVar10 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar5)
        goto LAB_1422ca311;
        uVar10 = puVar11[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar10 = -uVar10 & uVar10;
      iVar5 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar10 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_84 = (uVar8 - iVar5) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_1422ca311:
        uStack_84 = uVar3;
      }
    }
    while ((lVar7 = (longlong)(int)uStack_5c, uStack_5c != uStack_84 || (local_68 != puVar1))) {
      iVar5 = (int)param_3[1];
      uVar12 = 1;
      lVar4 = *plVar13;
      *(int *)(param_3 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_3,iVar5);
      }
      FAssetBundleEntry::FAssetBundleEntry
                (*param_3 + (longlong)iVar5 * 0x28,lVar7 * 0x38 + lVar4 + 8);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
  }
  return uVar12;
}



// FUNCTION 1422ca3b0 GetAssetBundleEntry body=294 status=ok
// SIG undefined GetAssetBundleEntry(void)

undefined4 *
UAssetManager::GetAssetBundleEntry
          (longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res8 [2];
  undefined8 local_20;
  undefined8 local_18;
  
  plVar4 = (longlong *)0x0;
  local_20 = 0;
  local_18 = 0;
  TSet<TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x118),local_res8);
  plVar2 = plVar4;
  if (local_res8[0] != -1) {
    plVar2 = (longlong *)((longlong)local_res8[0] * 0x68 + *(longlong *)(param_1 + 0x118));
  }
  plVar3 = plVar2 + 2;
  if (plVar2 == (longlong *)0x0) {
    plVar3 = plVar4;
  }
  if (plVar3 != (longlong *)0x0) {
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar2 = (longlong *)plVar3[8];
      if ((longlong *)plVar3[8] == (longlong *)0x0) {
        plVar2 = plVar3 + 7;
      }
      iVar1 = *(int *)((longlong)plVar2 +
                      ((longlong)((int)((ulonglong)param_4 >> 0x20) + (int)param_4) &
                      (longlong)(int)plVar3[9] - 1U) * 4);
      if (iVar1 != -1) {
        do {
          plVar2 = (longlong *)((longlong)iVar1 * 0x38 + *plVar3);
          if (*plVar2 == param_4) {
            if (iVar1 != -1) goto LAB_1422ca481;
            break;
          }
          iVar1 = (int)plVar2[6];
        } while (iVar1 != -1);
      }
    }
    plVar2 = plVar4;
LAB_1422ca481:
    plVar3 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar3 = plVar4;
    }
    if (plVar3 != (longlong *)0x0) {
      FAssetBundleEntry::FAssetBundleEntry(param_2);
      goto LAB_1422ca4b4;
    }
  }
  *(undefined8 *)(param_2 + 4) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
LAB_1422ca4b4:
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (&local_20);
  return param_2;
}



// FUNCTION 1422ca4e0 FUN_1422ca4e0 body=311 status=ok
// SIG undefined FUN_1422ca4e0(void)

bool FUN_1422ca4e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48 [2];
  longlong local_38;
  longlong local_30;
  
  if (*param_2 == 0) {
    return false;
  }
  uVar2 = UAssetManager::GetAssetRegistry();
  FSoftObjectPath::ToString(param_2,&local_58);
  (**(code **)(*param_1 + 0x3f8))(param_1,&local_38,param_2);
  if (local_38 != 0) {
    plVar3 = (longlong *)FSoftObjectPath::ToString(&local_38,local_48);
    if (&local_58 != plVar3) {
      if (local_58 != 0) {
        FMemory::Free();
      }
      local_58 = *plVar3;
      *plVar3 = 0;
      local_50 = (undefined4)plVar3[1];
      local_4c = *(undefined4 *)((longlong)plVar3 + 0xc);
      plVar3[1] = 0;
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  (**(code **)(*param_1 + 0x420))(param_1,uVar2,&local_58,param_3);
  lVar1 = *param_3;
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return lVar1 != 0;
}



// FUNCTION 1422ca620 FUN_1422ca620 body=614 status=ok
// SIG undefined FUN_1422ca620(void)

void FUN_1422ca620(longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  wchar_t *pwVar14;
  wchar_t *local_118;
  int local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [48];
  longlong *local_c0;
  longlong local_b8;
  undefined1 local_98 [48];
  longlong *local_68;
  longlong local_60;
  
  cVar5 = FString::EndsWith(param_3,&DAT_14502c6ec,0);
  puVar13 = &DAT_143f3eda8;
  if ((cVar5 != '\0') && (iVar6 = FUN_141592950(param_3,&DAT_14502c6f8,0,0,0xffffffff), iVar6 == -1)
     ) {
    iVar6 = *(int *)(param_3 + 1);
    if (iVar6 == 0) {
      pwVar14 = L"";
      iVar11 = -1;
    }
    else {
      pwVar14 = (wchar_t *)*param_3;
      iVar11 = iVar6 + -1;
    }
    pwVar10 = (wchar_t *)0x0;
    iVar7 = iVar11;
    if (iVar6 == 0) {
      iVar7 = 0;
    }
    iVar12 = 0;
    if (iVar6 == 0) {
      iVar11 = iVar12;
    }
    iVar7 = iVar7 + -2;
    if ((-1 < iVar7) && (iVar12 = iVar11, iVar7 < iVar11)) {
      iVar12 = iVar7;
    }
    local_118 = (wchar_t *)0x0;
    local_10c = 0;
    iVar6 = iVar12 + 1;
    if (iVar12 == 0) {
      iVar6 = 0;
    }
    local_110 = iVar6;
    if ((0 < iVar6) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118), iVar6 = local_110,
       pwVar10 = local_118, 0 < local_110)) {
      wcsncpy(local_118,pwVar14,(longlong)iVar12);
      pwVar10[iVar12] = L'\0';
    }
    pwVar14 = L"";
    if (iVar6 != 0) {
      pwVar14 = pwVar10;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x279);
    lVar4 = *param_2;
    puVar8 = (undefined8 *)FName::FName(local_100,pwVar14,1);
    uVar9 = (**(code **)(lVar4 + 0x48))(param_2,local_f0,*puVar8,uVar3);
    FUN_1421cd1f0(param_4,uVar9);
    if (local_b8 != 0) {
      FMemory::Free();
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      pwVar10 = local_118;
      if ((int)lVar4 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        pwVar10 = local_118;
        if (iVar6 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
          pwVar10 = local_118;
        }
      }
    }
    if (pwVar10 != (wchar_t *)0x0) {
      FMemory::Free(pwVar10);
    }
    local_108 = 0;
    if (*param_4 != 0) {
      return;
    }
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar13 = (undefined2 *)*param_3;
  }
  lVar4 = *param_2;
  uVar3 = *(undefined1 *)(param_1 + 0x279);
  puVar8 = (undefined8 *)FName::FName(local_f8,puVar13,1);
  uVar9 = (**(code **)(lVar4 + 0x48))(param_2,local_98,*puVar8,uVar3);
  FUN_1421cd1f0(param_4,uVar9);
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  return;
}



// FUNCTION 1422ca890 GetAssetPathForData body=431 status=ok
// SIG undefined GetAssetPathForData(void)

undefined8 *
UAssetManager::GetAssetPathForData(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  void **ppvVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  void *_Src;
  void *pvVar8;
  bool bVar9;
  void *local_58;
  uint local_50;
  int local_4c;
  void *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  pvVar8 = (void *)0x0;
  bVar9 = *param_3 == 0;
  if (bVar9) {
    local_40 = 0;
    ppvVar4 = &local_48;
    _Src = pvVar8;
  }
  else {
    ppvVar4 = (void **)FName::ToString(param_3,local_38);
    _Src = *ppvVar4;
  }
  *ppvVar4 = (void *)0x0;
  iVar6 = *(int *)((longlong)ppvVar4 + 0xc);
  iVar2 = *(int *)(ppvVar4 + 1);
  ppvVar4[1] = (void *)0x0;
  local_58 = _Src;
  local_4c = iVar6;
  if (bVar9) {
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((!bVar9) && (local_38[0] != 0)) {
    FMemory::Free();
  }
  uVar5 = FName::ToString(param_3 + 4,local_38);
  cVar3 = FString::EndsWith(uVar5,L"Blueprint",1);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  uVar7 = (longlong)iVar2;
  if (cVar3 != '\0') {
    local_50 = (3 - (uint)(iVar2 != 0)) + iVar2;
    if (iVar6 < (int)local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar2);
      _Src = local_58;
    }
    uVar7 = (ulonglong)local_50;
    puVar1 = (undefined4 *)((longlong)_Src + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    *puVar1 = 0x43005f;
    *(undefined2 *)(puVar1 + 1) = 0;
  }
  local_58 = (void *)0x0;
  iVar6 = (int)uVar7;
  local_50 = iVar6;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,uVar7 & 0xffffffff,0);
    pvVar8 = local_58;
    ::_guard_xfg_dispatch_icall_nop(local_58,_Src,(longlong)iVar6 * 2);
    iVar6 = local_4c;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_40 = CONCAT44(iVar6,local_50);
  local_48 = pvVar8;
  FUN_1417978e0(param_2,&local_48);
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return param_2;
}



// FUNCTION 1422caa40 GetAssetRegistry body=93 status=ok
// SIG undefined GetAssetRegistry(void)

void UAssetManager::GetAssetRegistry(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x3c8) == 0) {
    puVar1 = (undefined8 *)FName::FName(local_res8,L"AssetRegistry",1);
    uVar4 = *puVar1;
    uVar2 = FUN_14168dc80();
    plVar3 = (longlong *)FUN_141690010(uVar2,uVar4);
    uVar4 = (**(code **)(*plVar3 + 0x48))(plVar3);
    *(undefined8 *)(param_1 + 0x3c8) = uVar4;
  }
  return;
}



// FUNCTION 1422caaa0 FUN_1422caaa0 body=538 status=ok
// SIG undefined FUN_1422caaa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422caaa0(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(char *)(param_2 + 9) != '\0') {
    return;
  }
  if (param_5 == (undefined8 *)0x0) {
    iVar3 = FUN_1422c8760(param_1,param_3);
    cVar2 = IsInAudioThread();
    if (cVar2 == '\0') {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) goto LAB_1422cab77;
      puVar5 = (undefined8 *)((longlong)iVar3 * 0x30 + *(longlong *)(param_1 + 0x90));
    }
    else {
      puVar5 = (undefined8 *)((longlong)iVar3 * 0xb0 + *(longlong *)(param_1 + 0x128));
    }
    uVar1 = puVar5[1];
    param_2[2] = *puVar5;
    param_2[3] = uVar1;
    uVar1 = puVar5[3];
    param_2[4] = puVar5[2];
    param_2[5] = uVar1;
    uVar1 = puVar5[5];
    param_2[6] = puVar5[4];
    param_2[7] = uVar1;
  }
  else {
    uVar1 = param_5[1];
    param_2[2] = *param_5;
    param_2[3] = uVar1;
    uVar1 = param_5[3];
    param_2[4] = param_5[2];
    param_2[5] = uVar1;
    uVar1 = param_5[5];
    param_2[6] = param_5[4];
    param_2[7] = uVar1;
  }
LAB_1422cab77:
  fVar9 = *(float *)(param_3 + 0x10) - *(float *)(param_2 + 4);
  fVar8 = *(float *)(param_3 + 0x14) - *(float *)((longlong)param_2 + 0x24);
  fVar7 = *(float *)(param_3 + 0x18) - *(float *)(param_2 + 5);
  fVar6 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7);
  *(float *)((longlong)param_2 + 0x44) = fVar6;
  if (fVar6 <= 1e-08) {
    *param_2 = _DAT_1468b5d90;
    fVar6 = DAT_1468b5d98;
  }
  else {
    fVar6 = 1.0 / fVar6;
    *param_2 = CONCAT44(fVar8 * fVar6,fVar9 * fVar6);
    fVar6 = fVar7 * fVar6;
  }
  *(float *)(param_2 + 1) = fVar6;
  if (*(char *)(param_1 + 0x144) != '\0') {
    fVar6 = *(float *)(param_3 + 0x10) - *(float *)(param_1 + 0x138);
    fVar7 = *(float *)(param_3 + 0x14) - *(float *)(param_1 + 0x13c);
    fVar8 = *(float *)(param_3 + 0x18) - *(float *)(param_1 + 0x140);
    *(float *)((longlong)param_2 + 0x44) = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
  }
  *(undefined4 *)(param_2 + 8) = 0;
  if ((((*(byte *)(param_4 + 0xa0) & 1) != 0) && (*(char *)(param_4 + 9) == '\0')) ||
     ((*(byte *)(param_4 + 0xa0) & 4) != 0)) {
    fVar6 = *(float *)((longlong)param_2 + 0x44) - *(float *)(param_4 + 0x10);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    *(float *)(param_2 + 8) = fVar6;
  }
  *(undefined1 *)(param_2 + 9) = 1;
  return;
}



// FUNCTION 1422cacc0 GetAudioPluginCustomSettingsClass body=89 status=ok
// SIG undefined GetAudioPluginCustomSettingsClass(void)

undefined8 GetAudioPluginCustomSettingsClass(char param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_1 == '\0') {
    plVar1 = (longlong *)FUN_1422f18c0(0);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001422cad0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
      return uVar2;
    }
  }
  else {
    if (param_1 == '\x01') {
      plVar1 = (longlong *)FUN_1422f16c0(0);
    }
    else {
      if (param_1 != '\x02') {
        return 0;
      }
      plVar1 = (longlong *)FUN_1422f13a0(0);
    }
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001422cacf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1422cad20 FUN_1422cad20 body=886 status=ok
// SIG undefined FUN_1422cad20(void)

void FUN_1422cad20(longlong param_1,uint param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  float local_d8 [2];
  int local_d0;
  uint uStack_cc;
  uint *puStack_c8;
  uint local_c0;
  uint uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  longlong *local_b0;
  int iStack_a8;
  uint uStack_a4;
  uint *local_a0;
  uint uStack_98;
  uint uStack_94;
  undefined8 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  uint *puStack_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined1 local_60 [40];
  
  plVar1 = (longlong *)(param_1 + 0x488);
  uVar7 = *(uint *)(param_1 + 0x4b0);
  puVar9 = (uint *)(param_1 + 0x498);
  local_d0 = 0;
  uStack_cc = 1;
  uStack_bc = 0;
  iStack_b8 = 0;
  if (uVar7 != 0) {
    puVar11 = *(uint **)(param_1 + 0x4a8);
    if (*(uint **)(param_1 + 0x4a8) == (uint *)0x0) {
      puVar11 = puVar9;
    }
    uVar3 = *puVar11;
    iStack_b8 = 0;
    local_d0 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_d0;
      iStack_b8 = iStack_b8 + 0x20;
      iVar13 = local_d0 + 1;
      bVar4 = (int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d0;
      local_d0 = iVar13;
      if (bVar4) goto LAB_1422cadfe;
      uVar3 = puVar11[lVar8 + 1];
    }
    uStack_cc = -uVar3 & uVar3;
    iVar13 = 0x1f;
    if (uStack_cc != 0) {
      for (; uStack_cc >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_cc == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_bc = (iStack_b8 - iVar13) + 0x1f;
    if ((int)uVar7 < (int)uStack_bc) {
LAB_1422cadfe:
      uStack_bc = uVar7;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x4b0);
  uStack_98 = 0xffffffff;
  uStack_94 = uStack_bc;
  local_90 = CONCAT44(uStack_b4,iStack_b8);
  uStack_80 = CONCAT44(uStack_cc,local_d0);
  local_c0 = -1 << ((byte)uVar3 & 0x1f);
  uVar14 = uVar3 & 0xffffffe0;
  iStack_a8 = local_d0;
  uStack_a4 = uStack_cc;
  puStack_c8 = puVar9;
  uStack_bc = uVar3;
  local_a0 = puVar9;
  local_88 = plVar1;
  puStack_78 = puVar9;
  uStack_68 = local_90;
  local_b0 = plVar1;
  uStack_70 = uStack_98;
  uStack_6c = uStack_94;
  if (uVar3 != uVar7) {
    puVar11 = *(uint **)(param_1 + 0x4a8);
    if (*(uint **)(param_1 + 0x4a8) == (uint *)0x0) {
      puVar11 = puVar9;
    }
    uVar10 = puVar11[(int)uVar3 >> 5] & local_c0;
    iVar13 = (int)uVar3 >> 5;
    while (uVar10 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_1422caed1;
      uVar10 = puVar11[(longlong)iVar13 + 1];
      local_c0 = 0xffffffff;
      iVar13 = iVar13 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar13 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_bc = (uVar14 - iVar13) + 0x1f;
    uVar3 = uStack_bc;
    if ((int)uVar7 < (int)uStack_bc) {
LAB_1422caed1:
      uStack_bc = uVar7;
      uVar3 = uVar7;
    }
  }
  do {
    if (((uStack_94 == uVar3) && (local_a0 == puVar9)) && (local_b0 == plVar1)) {
      *param_4 = 0;
      if (*(int *)(param_1 + 0x4e0) == *(int *)(param_1 + 0x50c)) goto LAB_1422cafbe;
      lVar8 = *(longlong *)(param_1 + 0x518);
      if (*(longlong *)(param_1 + 0x518) == 0) {
        lVar8 = param_1 + 0x510;
      }
      uVar7 = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x520) - 1U & (longlong)(int)param_2)
                                * 4);
      if (uVar7 == 0xffffffff) goto LAB_1422cafbe;
      goto LAB_1422cafa0;
    }
    lVar8 = *local_b0;
    lVar12 = (longlong)(int)uStack_94 * 0x70;
    if (*(uint *)(lVar12 + 0xc + lVar8) == param_2) {
      local_d8[0] = 0.0;
      cVar6 = FUN_142698df0(*(undefined8 *)(lVar12 + 0x60 + lVar8),param_3,local_d8,local_60,0);
      if ((cVar6 != '\0') && (local_d8[0] == 0.0)) break;
    }
    uStack_98 = uStack_98 & ~uStack_a4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a8);
  } while( true );
  *param_4 = *(undefined4 *)(lVar12 + 8 + lVar8);
  param_4[1] = *(undefined4 *)(lVar12 + 0x10 + lVar8);
  param_4[2] = param_4[2] ^ (param_4[2] ^ *(uint *)(lVar12 + 0x18 + lVar8)) & 1;
  *(undefined1 *)(param_4 + 3) = *(undefined1 *)(lVar12 + 0x1c + lVar8);
  *(undefined8 *)(param_4 + 4) = *(undefined8 *)(lVar12 + 0x20 + lVar8);
  *(undefined8 *)(param_4 + 6) = *(undefined8 *)(lVar12 + 0x28 + lVar8);
  param_4[8] = *(undefined4 *)(lVar12 + 0x30 + lVar8);
  param_4[9] = *(undefined4 *)(lVar12 + 0x34 + lVar8);
  puVar2 = (undefined8 *)(lVar12 + 0x38 + lVar8);
  uVar5 = puVar2[1];
  *(undefined8 *)(param_4 + 10) = *puVar2;
  *(undefined8 *)(param_4 + 0xc) = uVar5;
  puVar2 = (undefined8 *)(lVar12 + 0x48 + lVar8);
  uVar5 = puVar2[1];
  *(undefined8 *)(param_4 + 0xe) = *puVar2;
  *(undefined8 *)(param_4 + 0x10) = uVar5;
  uVar7 = *(uint *)(lVar12 + 0x58 + lVar8);
  goto LAB_1422cb070;
  while (uVar7 = puVar9[0x14], uVar7 != 0xffffffff) {
LAB_1422cafa0:
    puVar9 = (uint *)((longlong)(int)uVar7 * 0x58 + *(longlong *)(param_1 + 0x4d8));
    if (*puVar9 == param_2) {
      if (uVar7 != 0xffffffff) goto LAB_1422cafc1;
      break;
    }
  }
LAB_1422cafbe:
  puVar9 = (uint *)0x0;
LAB_1422cafc1:
  puVar11 = puVar9 + 2;
  if (puVar9 == (uint *)0x0) {
    puVar11 = (uint *)0x0;
  }
  if (puVar11 == (uint *)0x0) {
    return;
  }
  param_4[2] = param_4[2] ^ (*puVar11 ^ param_4[2]) & 1;
  *(char *)(param_4 + 3) = (char)puVar11[1];
  *(undefined8 *)(param_4 + 4) = *(undefined8 *)(puVar11 + 2);
  *(undefined8 *)(param_4 + 6) = *(undefined8 *)(puVar11 + 4);
  param_4[8] = puVar11[6];
  param_4[9] = puVar11[7];
  uVar5 = *(undefined8 *)(puVar11 + 10);
  *(undefined8 *)(param_4 + 10) = *(undefined8 *)(puVar11 + 8);
  *(undefined8 *)(param_4 + 0xc) = uVar5;
  uVar5 = *(undefined8 *)(puVar11 + 0xe);
  *(undefined8 *)(param_4 + 0xe) = *(undefined8 *)(puVar11 + 0xc);
  *(undefined8 *)(param_4 + 0x10) = uVar5;
  uVar7 = puVar11[0x10];
LAB_1422cb070:
  param_4[0x12] = uVar7;
  return;
}



// FUNCTION 1422cb0a0 FUN_1422cb0a0 body=640 status=ok
// SIG undefined FUN_1422cb0a0(void)

void FUN_1422cb0a0(undefined4 param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,float *param_7,float *param_8)

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
  
  FUN_1422caaa0(param_1,param_2,param_4,param_5,param_6);
  fVar1 = param_2[4];
  fVar9 = param_2[5];
  fVar8 = param_2[6];
  fVar6 = param_2[7];
  fVar2 = fVar9 * 0.0 - fVar8 * 0.0;
  fVar3 = fVar8 * 1.0 - fVar1 * 0.0;
  fVar4 = fVar1 * 0.0 - fVar9 * 1.0;
  fVar2 = fVar2 + fVar2;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  fVar9 = ((fVar2 * fVar8 - fVar4 * fVar1) + fVar6 * fVar3 + 0.0) * param_2[1] +
          ((fVar4 * fVar9 - fVar3 * fVar8) + fVar6 * fVar2 + 1.0) * *param_2 +
          ((fVar3 * fVar1 - fVar2 * fVar9) + fVar6 * fVar4 + 0.0) * param_2[2];
  fVar1 = -1.0;
  if ((-1.0 <= fVar9) && (fVar1 = fVar9, 1.0 <= fVar9)) {
    fVar1 = 1.0;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
  *param_7 = fVar1 * 57.295776;
  fVar1 = param_2[4];
  fVar8 = param_2[5];
  fVar6 = param_2[6];
  fVar2 = param_2[7];
  fVar3 = fVar8 * 0.0 - fVar6 * 1.0;
  fVar4 = fVar6 * 0.0 - fVar1 * 0.0;
  fVar5 = fVar1 * 1.0 - fVar8 * 0.0;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  fVar5 = fVar5 + fVar5;
  fVar8 = ((fVar3 * fVar6 - fVar5 * fVar1) + fVar2 * fVar4 + 1.0) * param_2[1] +
          ((fVar5 * fVar8 - fVar4 * fVar6) + fVar2 * fVar3 + 0.0) * *param_2 +
          ((fVar4 * fVar1 - fVar3 * fVar8) + fVar2 * fVar5 + 0.0) * param_2[2];
  fVar1 = fVar8 * fVar8 + fVar9 * fVar9;
  if (1e-08 < fVar1) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar1 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar1 * 0.5 * fVar6 * fVar6);
    fVar8 = fVar6 * fVar8;
    fVar9 = fVar6 * fVar9;
  }
  if (1e-08 < ABS(fVar9)) {
    fVar1 = _guard_xfg_dispatch_icall_nop(fVar8 / fVar9);
  }
  else {
    fVar1 = 1.5707964;
  }
  fVar1 = ABS(fVar1 * 57.295776);
  *param_8 = fVar1;
  if ((fVar9 <= 0.0) || (0.0 <= fVar8)) {
    if (0.0 <= fVar9) {
      return;
    }
    if (fVar8 < 0.0) {
      *param_8 = fVar1 + 180.0;
      return;
    }
    if (fVar8 <= 0.0) {
      return;
    }
    fVar9 = 180.0;
  }
  else {
    fVar9 = 360.0;
  }
  *param_8 = fVar9 - fVar1;
  return;
}



// FUNCTION 1422cb320 FUN_1422cb320 body=642 status=ok
// SIG undefined FUN_1422cb320(void)

undefined8 * FUN_1422cb320(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  
  iVar4 = IStreamingManager::GetNumWantingResourcesID(param_1 + 0x360);
  if (iVar4 != 0) {
    iVar4 = IStreamingManager::GetNumWantingResourcesID(param_1 + 0x3d0);
    if (iVar4 != 0) {
      iVar4 = IStreamingManager::GetNumWantingResourcesID(param_1 + 0x440);
      if ((iVar4 != 0) && (*(int *)(param_1 + 0x340) == 2)) {
        puVar6 = (undefined8 *)operator_new(0x1e0);
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          FUN_14237e540(puVar6,param_1);
          *puVar6 = &PTR_FUN_14502dce8;
          *(undefined4 *)(puVar6 + 0xc) = 0x3f000000;
          *(undefined4 *)((longlong)puVar6 + 100) = 0x3f000000;
          *(undefined4 *)(puVar6 + 0xd) = 4;
          *(undefined4 *)((longlong)puVar6 + 0x6c) = 0x100;
          *(undefined4 *)(puVar6 + 0xe) = 0x40;
          *(undefined4 *)((longlong)puVar6 + 0x74) = 0x40;
          *(undefined4 *)(puVar6 + 0xf) = 0x10;
          *(undefined4 *)((longlong)puVar6 + 0x7c) = 2;
          *(undefined4 *)(puVar6 + 0x10) = 0x80;
          *(undefined4 *)((longlong)puVar6 + 0x84) = 0x20;
          *(undefined4 *)(puVar6 + 0x11) = 8;
          FUntypedBulkData::FUntypedBulkData(puVar6 + 0x12);
          puVar6[0x12] = &PTR__scalar_deleting_destructor__143f48b90;
          FUntypedBulkData::FUntypedBulkData(puVar6 + 0x20);
          puVar6[0x20] = &PTR__scalar_deleting_destructor__143f48b90;
          FUntypedBulkData::FUntypedBulkData(puVar6 + 0x2e);
          puVar6[0x2e] = &PTR__scalar_deleting_destructor__143f48b90;
        }
        uVar3 = *(undefined8 *)(param_1 + 0x30c);
        puVar6[0xc] = *(undefined8 *)(param_1 + 0x304);
        puVar6[0xd] = uVar3;
        uVar5 = *(undefined4 *)(param_1 + 0x318);
        uVar1 = *(undefined4 *)(param_1 + 0x31c);
        uVar2 = *(undefined4 *)(param_1 + 800);
        *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(param_1 + 0x314);
        *(undefined4 *)((longlong)puVar6 + 0x74) = uVar5;
        *(undefined4 *)(puVar6 + 0xf) = uVar1;
        *(undefined4 *)((longlong)puVar6 + 0x7c) = uVar2;
        puVar6[0x10] = *(undefined8 *)(param_1 + 0x324);
        *(undefined4 *)(puVar6 + 0x11) = *(undefined4 *)(param_1 + 0x32c);
        uVar5 = FUntypedBulkData::GetBulkDataSize(param_1 + 0x360);
        FUN_14171efb0(puVar6 + 0x12,2);
        local_res8 = FUntypedBulkData::Realloc(puVar6 + 0x12,uVar5);
        FUntypedBulkData::GetCopy(param_1 + 0x360,&local_res8,0);
        FUntypedBulkData::Unlock(puVar6 + 0x12);
        uVar5 = FUntypedBulkData::GetBulkDataSize(param_1 + 0x3d0);
        FUN_14171efb0(puVar6 + 0x20,2);
        local_res8 = FUntypedBulkData::Realloc(puVar6 + 0x20,uVar5);
        FUntypedBulkData::GetCopy(param_1 + 0x3d0,&local_res8,0);
        FUntypedBulkData::Unlock(puVar6 + 0x20);
        uVar5 = FUntypedBulkData::GetBulkDataSize(param_1 + 0x440);
        FUN_14171efb0(puVar6 + 0x2e,2);
        local_res8 = FUntypedBulkData::Realloc(puVar6 + 0x2e,uVar5);
        FUntypedBulkData::GetCopy(param_1 + 0x440,&local_res8,0);
        FUntypedBulkData::Unlock(puVar6 + 0x2e);
        return puVar6;
      }
    }
  }
  puVar6 = (undefined8 *)FUN_14238b660(param_1);
  return puVar6;
}



// FUNCTION 1422cb5b0 GetDeviceDeltaTime body=17 status=ok
// SIG undefined GetDeviceDeltaTime(void)

float FAudioDevice::GetDeviceDeltaTime(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x36c);
  if (0.5 <= fVar1) {
    fVar1 = 0.5;
  }
  return fVar1;
}



// FUNCTION 1422cb5d0 FUN_1422cb5d0 body=6 status=ok
// SIG undefined FUN_1422cb5d0(void)

undefined4 FUN_1422cb5d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}



// FUNCTION 1422cb5e0 GetFocusFactor body=133 status=ok
// SIG undefined GetFocusFactor(void)

float FAudioDevice::GetFocusFactor
                (longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,
                longlong param_5)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_5 + 0x1b8) * *(float *)(param_1 + 0xd4);
  if (0.0 <= fVar2) {
    if (180.0 <= fVar2) {
      fVar2 = 180.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  fVar1 = *(float *)(param_5 + 0x1bc) * *(float *)(param_1 + 0xd8);
  if (0.0 <= fVar1) {
    if (180.0 <= fVar1) {
      fVar1 = 180.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  if (fVar2 == fVar1) {
    if (fVar2 <= param_4) {
      return 1.0;
    }
  }
  else {
    fVar2 = (param_4 - fVar2) / (fVar1 - fVar2);
    if (0.0 <= fVar2) {
      if (1.0 <= fVar2) {
        return 1.0;
      }
      return fVar2;
    }
  }
  return 0.0;
}



// FUNCTION 1422cb670 GetGlobalFocusSettings body=38 status=ok
// SIG undefined GetGlobalFocusSettings(void)

longlong FAudioDevice::GetGlobalFocusSettings(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = IsInAudioThread();
  lVar2 = param_1 + 0xd4;
  if (cVar1 == '\0') {
    lVar2 = param_1 + 0xf4;
  }
  return lVar2;
}



// FUNCTION 1422cb6a0 GetHashForNode body=41 status=ok
// SIG undefined GetHashForNode(void)

longlong FNotifyBufferFinishedHooks::GetHashForNode(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = plVar1 + (longlong)(int)param_1[1] * 2;
  while( true ) {
    if (plVar1 == plVar2) {
      return 0;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 2;
  }
  return plVar1[1];
}



// FUNCTION 1422cb6d0 FUN_1422cb6d0 body=27 status=ok
// SIG undefined FUN_1422cb6d0(void)

longlong FUN_1422cb6d0(void)

{
  longlong lVar1;
  
  if ((DAT_146b17150 == 0) || (lVar1 = *(longlong *)(DAT_146b17150 + 0x2c0), lVar1 == 0)) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1422cb6f0 FUN_1422cb6f0 body=465 status=ok
// SIG undefined FUN_1422cb6f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1422cb6f0(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *param_3;
  fVar2 = param_3[1];
  fVar1 = param_3[2];
  fVar4 = *(float *)(param_1 + 0x700) * 1.0 + fVar1 * *(float *)(param_1 + 0x6f0) +
          fVar2 * *(float *)(param_1 + 0x6e0) + fVar6 * *(float *)(param_1 + 0x6d0);
  fVar5 = *(float *)(param_1 + 0x704) * 1.0 + fVar1 * *(float *)(param_1 + 0x6f4) +
          fVar2 * *(float *)(param_1 + 0x6e4) + fVar6 * *(float *)(param_1 + 0x6d4);
  fVar6 = *(float *)(param_1 + 0x708) * 1.0 + fVar1 * *(float *)(param_1 + 0x6f8) +
          fVar2 * *(float *)(param_1 + 0x6e8) + fVar6 * *(float *)(param_1 + 0x6d8);
  if (param_4 != (float *)0x0) {
    *param_4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
  }
  fVar2 = DAT_1468b5d98;
  fVar1 = fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6;
  if (fVar1 == 1.0) {
    *(ulonglong *)param_2 = CONCAT44(fVar5,fVar4);
    param_2[2] = fVar6;
  }
  else if (1e-08 <= fVar1) {
    auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar2 = auVar3._0_4_;
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    *param_2 = fVar4 * fVar2;
    param_2[1] = fVar5 * fVar2;
    param_2[2] = fVar6 * fVar2;
  }
  else {
    *(undefined8 *)param_2 = _DAT_1468b5d90;
    param_2[2] = fVar2;
  }
  return param_2;
}



// FUNCTION 1422cb8d0 FUN_1422cb8d0 body=9 status=ok
// SIG undefined FUN_1422cb8d0(void)

undefined8 FUN_1422cb8d0(void)

{
  return 0x3f666666;
}



// FUNCTION 1422cb8e0 FUN_1422cb8e0 body=335 status=ok
// SIG undefined FUN_1422cb8e0(void)

undefined8 FUN_1422cb8e0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 local_res8;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  plVar5 = *(longlong **)(param_1 + 0x3c8);
  uVar7 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  if (plVar5 == (longlong *)0x0) {
    puVar3 = (undefined8 *)FName::FName(&local_res8,L"AssetRegistry",1);
    uVar2 = *puVar3;
    uVar4 = FUN_14168dc80();
    plVar5 = (longlong *)FUN_141690010(uVar4,uVar2);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x48))(plVar5);
    *(longlong **)(param_1 + 0x3c8) = plVar5;
  }
  local_40 = *param_2;
  local_38 = param_2[1];
  local_30 = 0;
  local_res8 = 0;
  local_48 = 0;
  local_28 = 0;
  (**(code **)(*plVar5 + 0x60))(plVar5,&local_48,&local_58,0x18);
  plVar5 = local_58 + (longlong)(int)local_50 * 5;
  if (local_58 != plVar5) {
    local_res8 = 0;
    plVar6 = local_58;
    do {
      if (*plVar6 != 0) {
        iVar1 = (int)param_3[1];
        uVar7 = 1;
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(longlong *)(*param_3 + (longlong)iVar1 * 8) = *plVar6;
      }
      plVar6 = plVar6 + 5;
    } while (plVar6 != plVar5);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return uVar7;
}



// FUNCTION 1422cba30 GetMaxChannels body=22 status=ok
// SIG undefined GetMaxChannels(void)

int FAudioDevice::GetMaxChannels(longlong param_1)

{
  int iVar1;
  
  if ((DAT_146aef384 < 1) || (iVar1 = DAT_146aef384, *(int *)(param_1 + 0x150) <= DAT_146aef384)) {
    iVar1 = *(int *)(param_1 + 8);
  }
  return iVar1;
}



// FUNCTION 1422cba50 GetMaxDimension body=78 status=ok
// SIG undefined GetMaxDimension(void)

float FBaseAttenuationSettings::GetMaxDimension(longlong param_1)

{
  float fVar1;
  char cVar2;
  float fVar3;
  
  cVar2 = *(char *)(param_1 + 9);
  fVar1 = *(float *)(param_1 + 0x20);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      fVar3 = *(float *)(param_1 + 0x14);
      if (*(float *)(param_1 + 0x14) <= *(float *)(param_1 + 0x10)) {
        fVar3 = *(float *)(param_1 + 0x10);
      }
      return fVar1 + fVar3;
    }
    if (cVar2 == '\x02') {
      fVar3 = *(float *)(param_1 + 0x14);
      if (*(float *)(param_1 + 0x14) <= *(float *)(param_1 + 0x10)) {
        fVar3 = *(float *)(param_1 + 0x10);
      }
      if (fVar3 <= *(float *)(param_1 + 0x18)) {
        fVar3 = *(float *)(param_1 + 0x18);
      }
      return fVar1 + fVar3;
    }
    if (cVar2 != '\x03') {
      return fVar1;
    }
  }
  return fVar1 + *(float *)(param_1 + 0x10);
}



// FUNCTION 1422cbaa0 FUN_1422cbaa0 body=739 status=ok
// SIG undefined FUN_1422cbaa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422cbaa0(longlong param_1,longlong *param_2,longlong param_3,undefined1 (*param_4) [12],
                  longlong param_5,float *param_6,float *param_7)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_res18 [4];
  undefined4 local_b8 [4];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 local_48 [16];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if ((((param_3 != 0) && (cVar1 = UWorld::IsGameWorld(param_3), cVar1 == '\0')) &&
      ((*(byte *)(param_1 + 0x368) & 8) == 0)) ||
     (uStack_6c = uRam0000000146aef40c, uStack_70 = uRam0000000146aef408,
     uStack_74 = uRam0000000146aef404, local_78 = _DAT_146aef400, param_5 == 0)) {
    fVar4 = (float)(**(code **)(*param_2 + 0x298))(param_2);
    *param_6 = fVar4;
    *param_7 = 1.0;
    return;
  }
  local_38 = _DAT_146aef450 & _DAT_146aef400;
  uStack_34 = uRam0000000146aef454 & uRam0000000146aef404;
  uStack_30 = uRam0000000146aef458 & uRam0000000146aef408;
  uStack_2c = uRam0000000146aef45c & uRam0000000146aef40c;
  cVar1 = *(char *)(param_5 + 9);
  fVar4 = *(float *)(param_5 + 0x20);
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = uRam0000000146aef45c;
  local_48._12_4_ = 0;
  local_48._0_12_ = *param_4;
  if (cVar1 == '\0') {
LAB_1422cbb7a:
    fVar4 = fVar4 + *(float *)(param_5 + 0x10);
  }
  else if (cVar1 == '\x01') {
    fVar5 = *(float *)(param_5 + 0x14);
    if (*(float *)(param_5 + 0x14) <= *(float *)(param_5 + 0x10)) {
      fVar5 = *(float *)(param_5 + 0x10);
    }
    fVar4 = fVar4 + fVar5;
  }
  else if (cVar1 == '\x02') {
    fVar5 = *(float *)(param_5 + 0x14);
    if (*(float *)(param_5 + 0x14) <= *(float *)(param_5 + 0x10)) {
      fVar5 = *(float *)(param_5 + 0x10);
    }
    if (fVar5 <= *(float *)(param_5 + 0x18)) {
      fVar5 = *(float *)(param_5 + 0x18);
    }
    fVar4 = fVar4 + fVar5;
  }
  else if (cVar1 == '\x03') goto LAB_1422cbb7a;
  *param_6 = fVar4;
  if ((*(byte *)(param_5 + 0xa0) & 10) == 10) {
    local_78 = _DAT_146aef450 & local_78;
    uStack_74 = uRam0000000146aef454 & uStack_74;
    uStack_70 = uRam0000000146aef458 & uStack_70;
    uStack_6c = uRam0000000146aef45c & uStack_6c;
    local_a8 = _DAT_1468b5d90;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = uRam0000000146aef45c;
    local_a0 = DAT_1468b5d98;
    local_88 = 0;
    uStack_80 = 0;
    local_68 = 0;
    local_60 = 0;
    local_res18[0] = 0.0;
    local_b8[0] = 0;
    iVar2 = FUN_1422c8760(param_1,&local_58);
    FUN_1422cb0a0(param_1,&local_a8,param_2,&local_58,param_5,
                  (longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x90),local_res18,local_b8);
    fVar4 = 0.0;
    fVar5 = *(float *)(param_5 + 0x1b8) * *(float *)(param_1 + 0xd4);
    if (0.0 <= fVar5) {
      if (180.0 <= fVar5) {
        fVar5 = 180.0;
      }
    }
    else {
      fVar5 = 0.0;
    }
    fVar3 = *(float *)(param_5 + 0x1bc) * *(float *)(param_1 + 0xd8);
    if (0.0 <= fVar3) {
      if (180.0 <= fVar3) {
        fVar3 = 180.0;
      }
    }
    else {
      fVar3 = 0.0;
    }
    if (fVar5 != fVar3) {
      fVar4 = (local_res18[0] - fVar5) / (fVar3 - fVar5);
      if (fVar4 < 0.0) {
        *param_7 = 0.0;
        return;
      }
      if (1.0 <= fVar4) {
        *param_7 = 1.0;
        return;
      }
      goto LAB_1422cbd37;
    }
    if (local_res18[0] < fVar5) goto LAB_1422cbd37;
  }
  fVar4 = 1.0;
LAB_1422cbd37:
  *param_7 = fVar4;
  return;
}



// FUNCTION 1422cbd90 FUN_1422cbd90 body=399 status=ok
// SIG undefined FUN_1422cbd90(void)

longlong * FUN_1422cbd90(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_18;
  longlong local_10;
  
  plVar6 = (longlong *)0x0;
  lVar1 = *param_2;
  if ((int)param_1[0x70] != *(int *)((longlong)param_1 + 0x3ac)) {
    plVar7 = (longlong *)param_1[0x77];
    if ((longlong *)param_1[0x77] == (longlong *)0x0) {
      plVar7 = param_1 + 0x76;
    }
    iVar3 = *(int *)((longlong)plVar7 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                    (longlong)(int)param_1[0x78] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar3 * 0x20 + param_1[0x6f]);
        if (*plVar7 == lVar1) {
          if (iVar3 != -1) goto LAB_1422cbe22;
          break;
        }
        iVar3 = (int)plVar7[3];
      } while (iVar3 != -1);
    }
  }
  plVar7 = plVar6;
LAB_1422cbe22:
  plVar5 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  if (plVar5 != (longlong *)0x0) {
    lVar1 = *plVar5;
    lVar2 = param_2[1];
    if (*(int *)(lVar1 + 0x98) != *(int *)(lVar1 + 0xc4)) {
      lVar4 = *(longlong *)(lVar1 + 0xd0);
      if (*(longlong *)(lVar1 + 0xd0) == 0) {
        lVar4 = lVar1 + 200;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                               (longlong)*(int *)(lVar1 + 0xd8) - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar7 = (longlong *)((longlong)iVar3 * 0x80 + *(longlong *)(lVar1 + 0x90));
          if (*plVar7 == lVar2) {
            if (iVar3 != -1) goto LAB_1422cbeb2;
            break;
          }
          iVar3 = (int)plVar7[0xf];
        } while (iVar3 != -1);
      }
    }
    plVar7 = plVar6;
LAB_1422cbeb2:
    plVar5 = plVar7 + 1;
    if (plVar7 == (longlong *)0x0) {
      plVar5 = plVar6;
    }
    if (plVar5 != (longlong *)0x0) {
      return plVar5;
    }
  }
  if (((param_3 == '\0') ||
      ((**(code **)(*param_1 + 0x3e0))(param_1,&local_18,param_2), local_18 == 0)) ||
     (local_10 == 0)) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)FUN_1422cbd90(param_1,&local_18,0);
  }
  return plVar6;
}



// FUNCTION 1422cbf20 FUN_1422cbf20 body=818 status=ok
// SIG undefined FUN_1422cbf20(void)

undefined1 FUN_1422cbf20(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  undefined1 uVar13;
  undefined8 *puVar14;
  undefined1 local_res10 [8];
  char local_res18;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  int local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_40 [8];
  
  plVar9 = *(longlong **)(param_1 + 0x3c8);
  local_res18 = param_3;
  if (plVar9 == (longlong *)0x0) {
    puVar7 = (undefined8 *)FName::FName(local_res10,L"AssetRegistry",1);
    uVar2 = *puVar7;
    uVar8 = FUN_14168dc80();
    plVar9 = (longlong *)FUN_141690010(uVar8,uVar2);
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x48))(plVar9);
    *(longlong **)(param_1 + 0x3c8) = plVar9;
  }
  local_a8 = 0;
  local_a0 = 0;
  uVar13 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_res10[0] = 0;
  local_80 = param_2;
  (**(code **)(*plVar9 + 0x70))(plVar9,&local_80,&local_a8);
  lVar12 = 0;
  local_98 = 0;
  if (0 < (int)local_a0) {
    local_b0 = 0;
    local_b8 = 0;
    local_48 = 0;
    do {
      local_90 = *(longlong *)(local_a8 + 8 + local_48);
      if (local_90 == lVar12) {
        local_90 = 0;
        local_88 = 0;
      }
      else {
        local_88 = *(longlong *)(local_a8 + 0x10 + local_48);
      }
      lVar5 = local_88;
      lVar4 = local_90;
      uVar13 = local_res10[0];
      if ((local_90 != 0) && (local_58 = 0, local_88 != 0)) {
        uVar13 = 1;
        local_res10[0] = 1;
        FUN_1422b75e0(param_4,local_40,&local_90);
        if (local_res18 != '\0') {
          if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
            lVar10 = *(longlong *)(param_1 + 0x108);
            iVar6 = GetTypeHash(&local_90);
            if (lVar10 == 0) {
              lVar10 = param_1 + 0x100;
            }
            iVar6 = *(int *)(lVar10 + ((longlong)iVar6 & (longlong)*(int *)(param_1 + 0x110) - 1U) *
                                      4);
            if (iVar6 != -1) {
              do {
                lVar10 = *(longlong *)(param_1 + 200) + (longlong)iVar6 * 0x28;
                if ((*(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar6 * 0x28) == lVar4)
                   && (*(longlong *)(lVar10 + 8) == lVar5)) {
                  if (iVar6 != -1) goto LAB_1422cc11e;
                  break;
                }
                iVar6 = *(int *)(lVar10 + 0x20);
              } while (iVar6 != -1);
            }
          }
          lVar10 = 0;
LAB_1422cc11e:
          plVar9 = (longlong *)(lVar10 + 0x10);
          if (lVar10 == 0) {
            plVar9 = (longlong *)0x0;
          }
          uVar13 = local_res10[0];
          if (plVar9 != (longlong *)0x0) {
            puVar7 = (undefined8 *)*plVar9;
            puVar14 = puVar7 + (longlong)(int)plVar9[1] * 2;
            for (; local_res10[0] = uVar13, puVar7 != puVar14; puVar7 = puVar7 + 2) {
              piVar11 = (int *)TSet<FPrimaryAssetId,DefaultKeyFuncs<FPrimaryAssetId,0>,FDefaultSetAllocator>
                               ::FindId(param_4,&local_b8,puVar7);
              uVar3 = local_a0;
              if (*piVar11 == -1) {
                uStack_78 = *puVar7;
                lVar12 = (longlong)(int)local_a0;
                local_70 = puVar7[1];
                uStack_68 = 0;
                iVar6 = (int)local_a0 + 1;
                local_50 = 0;
                local_80 = 0;
                local_60 = 0;
                local_a0 = CONCAT44(local_a0._4_4_,iVar6);
                if (local_a0._4_4_ < iVar6) {
                  TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow
                            (&local_a8,uVar3 & 0xffffffff);
                }
                puVar1 = (undefined8 *)(local_a8 + lVar12 * 0x28);
                *puVar1 = local_80;
                puVar1[1] = uStack_78;
                puVar1 = (undefined8 *)(local_a8 + 0x10 + lVar12 * 0x28);
                *puVar1 = local_70;
                puVar1[1] = uStack_68;
                *(undefined8 *)(local_a8 + 0x20 + lVar12 * 0x28) = local_60;
              }
              lVar12 = local_b0;
              uVar13 = local_res10[0];
            }
          }
        }
      }
      local_98 = local_98 + 1;
      local_48 = local_48 + 0x28;
    } while (local_98 < (int)local_a0);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  return uVar13;
}



// FUNCTION 1422cc280 FUN_1422cc280 body=131 status=ok
// SIG undefined FUN_1422cc280(void)

void FUN_1422cc280(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x10) + 0x2a0))();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x9c) == 0) &&
     (0.0 <= (1.0 / fVar1) * *(float *)(param_1 + 0x38))) {
    return;
  }
  return;
}



// FUNCTION 1422cc310 GetPreviousPrimaryAssetIds body=1587 status=ok
// SIG undefined GetPreviousPrimaryAssetIds(void)

void UAssetManager::GetPreviousPrimaryAssetIds(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  longlong *plVar20;
  int local_f8;
  uint uStack_f4;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  int iStack_98;
  uint uStack_94;
  uint *local_90;
  uint uStack_88;
  uint uStack_84;
  undefined8 local_80;
  longlong local_78 [2];
  undefined2 *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  undefined2 *local_48;
  int local_40;
  
  FPrimaryAssetId::ToString(param_2,&local_48);
  iVar16 = 0;
  uStack_f4 = 1;
  plVar20 = (longlong *)(param_1 + 0x2d0);
  local_f8 = 0;
  uVar3 = *(uint *)(param_1 + 0x2f8);
  puVar2 = (uint *)(param_1 + 0x2e0);
  uStack_e4 = 0;
  iStack_e0 = 0;
  if (uVar3 != 0) {
    puVar17 = *(uint **)(param_1 + 0x2f0);
    if (*(uint **)(param_1 + 0x2f0) == (uint *)0x0) {
      puVar17 = puVar2;
    }
    uVar10 = *puVar17;
    iStack_e0 = iVar16;
    local_f8 = iVar16;
    while (uVar10 == 0) {
      lVar12 = (longlong)local_f8;
      iStack_e0 = iStack_e0 + 0x20;
      iVar18 = local_f8 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f8;
      local_f8 = iVar18;
      if (bVar6) goto LAB_1422cc410;
      uVar10 = puVar17[lVar12 + 1];
    }
    uStack_f4 = -uVar10 & uVar10;
    iVar18 = 0x1f;
    if (uStack_f4 != 0) {
      for (; uStack_f4 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    if (uStack_f4 == 0) {
      iVar18 = 0x20;
    }
    else {
      iVar18 = 0x1f - iVar18;
    }
    uStack_e4 = (iStack_e0 - iVar18) + 0x1f;
    if ((int)uVar3 < (int)uStack_e4) {
LAB_1422cc410:
      uStack_e4 = uVar3;
    }
  }
  uStack_c8._4_4_ = *(uint *)(param_1 + 0x2f8);
  uStack_d0 = CONCAT44(uStack_f4,local_f8);
  uStack_88 = 0xffffffff;
  uStack_84 = uStack_e4;
  uStack_b8 = CONCAT44(uStack_dc,iStack_e0);
  uStack_c8._0_4_ = -1 << ((byte)uStack_c8._4_4_ & 0x1f);
  uVar19 = uStack_c8._4_4_ & 0xffffffe0;
  iStack_98 = local_f8;
  uStack_94 = uStack_f4;
  local_d8 = plVar20;
  local_90 = puVar2;
  local_80 = uStack_b8;
  local_a0 = plVar20;
  uStack_c0 = uStack_88;
  uStack_bc = uStack_84;
  uVar10 = uStack_c8._4_4_;
  if (uStack_c8._4_4_ != uVar3) {
    puVar17 = *(uint **)(param_1 + 0x2f0);
    if (*(uint **)(param_1 + 0x2f0) == (uint *)0x0) {
      puVar17 = puVar2;
    }
    uVar10 = puVar17[(int)uStack_c8._4_4_ >> 5] & (uint)uStack_c8;
    iVar18 = (int)uStack_c8._4_4_ >> 5;
    while (uVar10 == 0) {
      uVar19 = uVar19 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar18)
      goto LAB_1422cc4e3;
      uVar10 = puVar17[(longlong)iVar18 + 1];
      uStack_c8._0_4_ = 0xffffffff;
      iVar18 = iVar18 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar18 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar18 = 0x20;
    }
    else {
      iVar18 = 0x1f - iVar18;
    }
    uStack_c8._4_4_ = (uVar19 - iVar18) + 0x1f;
    uVar10 = uStack_c8._4_4_;
    if ((int)uVar3 < (int)uStack_c8._4_4_) {
LAB_1422cc4e3:
      uStack_c8._4_4_ = uVar3;
      uVar10 = uVar3;
    }
  }
  while (((uStack_84 != uVar10 || (local_90 != puVar2)) || (local_a0 != plVar20))) {
    puVar13 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar13 = local_48;
    }
    lVar12 = *local_a0 + (longlong)(int)uStack_84 * 0x28;
    if (*(int *)(lVar12 + 0x18) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(lVar12 + 0x10);
    }
    iVar18 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar13);
    if (iVar18 == 0) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_68 = (undefined2 *)0x0;
      local_60 = 0;
      local_d8 = (longlong *)0x0;
      uStack_d0 = 0;
      local_78[0] = 0;
      local_78[1] = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
      lVar7 = local_78[0];
      FGenericPlatformString::Memcpy(local_78[0],&DAT_144ca0610,4);
      cVar8 = FUN_1404e14f0(lVar12,local_78,local_78 + 2,&local_d8,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
      puVar13 = local_68;
      plVar4 = local_d8;
      lVar12 = local_b0;
      if (cVar8 != '\0') {
        puVar9 = &DAT_143f3eda8;
        if ((int)local_60 != 0) {
          puVar9 = local_68;
        }
        FName::FName(&local_58,puVar9,1);
        lVar12 = local_58;
        plVar14 = (longlong *)&DAT_143f3eda8;
        if ((int)uStack_d0 != 0) {
          plVar14 = plVar4;
        }
        local_b0 = local_58;
        FName::FName(&local_50,plVar14,1);
        uStack_a8 = local_50;
      }
      lVar7 = uStack_a8;
      if (plVar4 != (longlong *)0x0) {
        FMemory::Free(plVar4);
      }
      if (puVar13 != (undefined2 *)0x0) {
        FMemory::Free(puVar13);
      }
      plVar4 = (longlong *)*param_3;
      iVar18 = (int)param_3[1];
      for (plVar14 = plVar4; plVar14 != plVar4 + (longlong)iVar18 * 2; plVar14 = plVar14 + 2) {
        if ((*plVar14 == lVar12) && (plVar14[1] == lVar7)) {
          if ((int)((longlong)plVar14 - (longlong)plVar4 >> 4) != -1) goto LAB_1422cc69f;
          break;
        }
      }
      *(int *)(param_3 + 1) = iVar18 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar18 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar18);
      }
      puVar1 = (undefined4 *)(*param_3 + (longlong)iVar18 * 0x10);
      *puVar1 = (undefined4)local_b0;
      puVar1[1] = local_b0._4_4_;
      puVar1[2] = (undefined4)uStack_a8;
      puVar1[3] = uStack_a8._4_4_;
    }
LAB_1422cc69f:
    uStack_88 = uStack_88 & ~uStack_94;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_98);
  }
  plVar20 = (longlong *)(param_1 + 0x280);
  local_f8 = 0;
  uVar3 = *(uint *)(param_1 + 0x2a8);
  puVar2 = (uint *)(param_1 + 0x290);
  uStack_f4 = 1;
  uStack_e4 = 0;
  iStack_e0 = 0;
  if (uVar3 != 0) {
    puVar17 = *(uint **)(param_1 + 0x2a0);
    if (*(uint **)(param_1 + 0x2a0) == (uint *)0x0) {
      puVar17 = puVar2;
    }
    uVar10 = *puVar17;
    iStack_e0 = iVar16;
    while (uVar10 == 0) {
      iStack_e0 = iStack_e0 + 0x20;
      local_f8 = iVar16 + 1;
      uStack_e4 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar16)
      goto LAB_1422cc78e;
      uVar10 = puVar17[(longlong)iVar16 + 1];
      iVar16 = local_f8;
    }
    uStack_f4 = -uVar10 & uVar10;
    iVar18 = 0x1f;
    if (uStack_f4 != 0) {
      for (; uStack_f4 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    if (uStack_f4 == 0) {
      iVar18 = 0x20;
    }
    else {
      iVar18 = 0x1f - iVar18;
    }
    uStack_e4 = (iStack_e0 - iVar18) + 0x1f;
    local_f8 = iVar16;
    if ((int)uVar3 < (int)uStack_e4) {
      uStack_e4 = uVar3;
    }
  }
LAB_1422cc78e:
  uVar10 = *(uint *)(param_1 + 0x2a8);
  uStack_88 = 0xffffffff;
  uStack_84 = uStack_e4;
  uStack_b8 = CONCAT44(uStack_dc,iStack_e0);
  uStack_d0 = CONCAT44(uStack_f4,local_f8);
  uVar19 = uVar10 & 0xffffffe0;
  iStack_98 = local_f8;
  uStack_94 = uStack_f4;
  local_d8 = plVar20;
  uStack_c8 = puVar2;
  local_90 = puVar2;
  local_80 = uStack_b8;
  local_a0 = plVar20;
  uStack_c0 = uStack_88;
  uStack_bc = uStack_84;
  uStack_e4 = uVar10;
  if (uVar10 != uVar3) {
    puVar17 = *(uint **)(param_1 + 0x2a0);
    if (*(uint **)(param_1 + 0x2a0) == (uint *)0x0) {
      puVar17 = puVar2;
    }
    uVar11 = puVar17[(int)uVar10 >> 5] & -1 << ((byte)uVar10 & 0x1f);
    iVar16 = (int)uVar10 >> 5;
    while (uVar11 == 0) {
      uVar19 = uVar19 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar16)
      goto LAB_1422cc853;
      uVar11 = puVar17[(longlong)iVar16 + 1];
      iVar16 = iVar16 + 1;
    }
    uVar11 = -uVar11 & uVar11;
    iVar16 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar16 = 0x20;
    }
    else {
      iVar16 = 0x1f - iVar16;
    }
    uStack_e4 = (uVar19 - iVar16) + 0x1f;
    if ((int)uVar3 < (int)uStack_e4) {
LAB_1422cc853:
      uStack_e4 = uVar3;
    }
  }
  do {
    if (((uStack_84 == uStack_e4) && (local_90 == puVar2)) && (local_a0 == plVar20)) {
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return;
    }
    puVar15 = (undefined8 *)(*local_a0 + (longlong)(int)uStack_84 * 0x18);
    if (puVar15[1] == *param_2) {
      puVar5 = (undefined8 *)*param_3;
      local_d8 = (longlong *)*puVar15;
      iVar16 = (int)param_3[1];
      uStack_d0 = param_2[1];
      for (puVar15 = puVar5; puVar15 != puVar5 + (longlong)iVar16 * 2; puVar15 = puVar15 + 2) {
        if (((longlong *)*puVar15 == local_d8) && (puVar15[1] == uStack_d0)) {
          if ((int)((longlong)puVar15 - (longlong)puVar5 >> 4) != -1) goto LAB_1422cc904;
          break;
        }
      }
      *(int *)(param_3 + 1) = iVar16 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar16 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar16);
      }
      puVar1 = (undefined4 *)(*param_3 + (longlong)iVar16 * 0x10);
      *puVar1 = (undefined4)local_d8;
      puVar1[1] = local_d8._4_4_;
      puVar1[2] = (int)uStack_d0;
      puVar1[3] = uStack_d0._4_4_;
    }
LAB_1422cc904:
    uStack_88 = uStack_88 & ~uStack_94;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_98);
  } while( true );
}



// FUNCTION 1422cc950 FUN_1422cc950 body=344 status=ok
// SIG undefined FUN_1422cc950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1422cc950(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  puVar6 = (undefined8 *)FUN_1422cbd90(param_1,param_2,1);
  if (puVar6 != (undefined8 *)0x0) {
    plVar7 = (longlong *)UAssetManager::GetAssetRegistry(param_1);
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x1f0))(plVar7,*puVar6);
    if ((plVar7 != (longlong *)0x0) && (*plVar7 != 0)) {
      *param_3 = *plVar7;
      plVar1 = param_3 + 5;
      param_3[1] = plVar7[1];
      param_3[2] = plVar7[2];
      param_3[3] = plVar7[3];
      param_3[4] = plVar7[4];
      plVar4 = (longlong *)plVar7[6];
      lVar5 = plVar7[5];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_48 = lVar5;
      plStack_40 = plVar4;
      if (&local_48 != plVar1) {
        local_48 = *plVar1;
        plStack_40 = (longlong *)param_3[6];
        *plVar1 = lVar5;
        param_3[6] = (longlong)plVar4;
        local_38 = lVar5;
        plStack_30 = plVar4;
      }
      plVar1 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_40 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_40 + 8))(plStack_40,1);
          }
        }
      }
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_3 + 7,plVar7 + 7);
      *(int *)(param_3 + 9) = (int)plVar7[9];
      lVar5 = plVar7[10];
      param_3[10] = lVar5;
      return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1422ccab0 FUN_1422ccab0 body=852 status=ok
// SIG undefined FUN_1422ccab0(void)

undefined1 FUN_1422ccab0(longlong param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  uint local_a8;
  uint uStack_a4;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
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
  
  plVar8 = *(longlong **)(param_1 + 0x3c8);
  if (plVar8 == (longlong *)0x0) {
    puVar6 = (undefined8 *)FName::FName(local_res8,L"AssetRegistry",1);
    uVar4 = *puVar6;
    uVar7 = FUN_14168dc80();
    plVar8 = (longlong *)FUN_141690010(uVar7,uVar4);
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x48))(plVar8);
    *(longlong **)(param_1 + 0x3c8) = plVar8;
  }
  plVar11 = (longlong *)0x0;
  local_res8[0] = 0;
  if (*(int *)(param_1 + 0x380) != *(int *)(param_1 + 0x3ac)) {
    lVar9 = *(longlong *)(param_1 + 0x3b8);
    if (*(longlong *)(param_1 + 0x3b8) == 0) {
      lVar9 = param_1 + 0x3b0;
    }
    iVar5 = *(int *)(lVar9 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x3c0) - 1U) * 4);
    if (iVar5 != -1) {
      do {
        plVar13 = (longlong *)((longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x378));
        if (*plVar13 == param_2) {
          if (iVar5 != -1) goto LAB_1422ccb91;
          break;
        }
        iVar5 = (int)plVar13[3];
      } while (iVar5 != -1);
    }
  }
  plVar13 = plVar11;
LAB_1422ccb91:
  plVar10 = plVar13 + 1;
  if (plVar13 == (longlong *)0x0) {
    plVar10 = plVar11;
  }
  if (plVar10 == (longlong *)0x0) {
    return 0;
  }
  lVar9 = *plVar10;
  plVar13 = (longlong *)(lVar9 + 0x90);
  local_a8 = 0;
  uVar2 = *(uint *)(lVar9 + 0xb8);
  puVar1 = (uint *)(lVar9 + 0xa0);
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar2 != 0) {
    puVar15 = *(uint **)(lVar9 + 0xb0);
    if (*(uint **)(lVar9 + 0xb0) == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar3 = *puVar15;
    plVar10 = plVar11;
    while (uVar3 == 0) {
      iVar5 = (int)plVar11;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar5 + 1;
      plVar11 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1422ccc6c;
      uVar3 = puVar15[(longlong)iVar5 + 1];
    }
    uStack_a4 = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_94 = (uStack_90 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_94) {
LAB_1422ccc6c:
      uStack_94 = uVar2;
    }
  }
  uVar3 = *(uint *)(lVar9 + 0xb8);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar14 = uVar3 & 0xffffffe0;
  uStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = puVar1;
  local_60 = plVar13;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_94 = uVar3;
  if (uVar3 != uVar2) {
    puVar15 = *(uint **)(lVar9 + 0xb0);
    if (*(uint **)(lVar9 + 0xb0) == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = puVar15[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar5 = (int)uVar3 >> 5;
    while (uVar12 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1422ccd31;
      uVar12 = puVar15[(longlong)iVar5 + 1];
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
    uStack_94 = (uVar14 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_94) {
LAB_1422ccd31:
      uStack_94 = uVar2;
    }
  }
  while ((uStack_6c != uStack_94 || (local_78 != puVar1))) {
    plVar11 = (longlong *)
              (**(code **)(*plVar8 + 0x1f0))
                        (plVar8,*(undefined8 *)((longlong)(int)uStack_6c * 0x80 + 8 + *plVar13));
    if ((plVar11 != (longlong *)0x0) && (local_res10 = 0, *plVar11 != 0)) {
      iVar5 = (int)param_3[1];
      local_res8[0] = 1;
      *(int *)(param_3 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_3,iVar5);
      }
      FUN_14063dd00((longlong)iVar5 * 0x58 + *param_3,plVar11);
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
  }
  return local_res8[0];
}



// FUNCTION 1422cce10 GetPrimaryAssetHandle body=150 status=ok
// SIG undefined GetPrimaryAssetHandle(void)

undefined8 *
UAssetManager::GetPrimaryAssetHandle
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,char param_4,longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_1422cbd90(param_1,param_3,1);
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  if (param_4 == '\0') {
    puVar3 = (undefined8 *)(lVar2 + 0x50);
    lVar1 = *(longlong *)(lVar2 + 0x50);
    if (((lVar1 != 0) && (*(char *)(lVar1 + 0x12) == '\0')) && (*(char *)(lVar1 + 0x11) == '\0'))
    goto LAB_1422cce6e;
  }
  puVar3 = (undefined8 *)(lVar2 + 0x30);
LAB_1422cce6e:
  if (param_5 != 0) {
    TArray<FName,FDefaultAllocator>::operator=(param_5,puVar3 + 2);
  }
  *param_2 = *puVar3;
  lVar2 = puVar3[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1422cceb0 GetPrimaryAssetId body=310 status=ok
// SIG undefined GetPrimaryAssetId(void)

longlong * FAssetData::GetPrimaryAssetId(undefined8 param_1,longlong *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res18;
  longlong local_res20;
  undefined2 *local_38;
  undefined8 local_30;
  
  local_res18 = 0;
  local_res20 = 0;
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  cVar2 = FUN_1421b9bc0(param_1,DAT_1469e7758,&local_38);
  puVar1 = local_38;
  if (cVar2 == '\0') {
    lVar5 = local_res18;
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
      lVar5 = local_res18;
    }
  }
  else {
    puVar3 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar3 = local_38;
    }
    FName::FName(&local_res18,puVar3,1);
    lVar5 = local_res18;
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
  }
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  cVar2 = FUN_1421b9bc0(param_1,DAT_1469e78c8,&local_38);
  puVar1 = local_38;
  if (cVar2 == '\0') {
    lVar4 = local_res20;
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
      lVar4 = local_res20;
    }
  }
  else {
    puVar3 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar3 = local_38;
    }
    FName::FName(&local_res18,puVar3,1);
    lVar4 = local_res18;
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
  }
  if ((lVar5 != 0) && (lVar4 != 0)) {
    *param_2 = lVar5;
    param_2[1] = lVar4;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1422ccff0 FUN_1422ccff0 body=84 status=ok
// SIG undefined FUN_1422ccff0(void)

undefined8 FUN_1422ccff0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_28 [8];
  longlong local_20;
  
  lVar1 = *param_1;
  uVar2 = (**(code **)(lVar1 + 0x3d8))(param_1,local_28);
  (**(code **)(lVar1 + 0x2e8))(param_1,param_2,uVar2);
  if (local_20 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1422cd050 GetPrimaryAssetIdForObject body=126 status=ok
// SIG undefined GetPrimaryAssetIdForObject(void)

undefined8
UAssetManager::GetPrimaryAssetIdForObject(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 local_res8 [8];
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)UObjectBaseUtility::GetPathName(param_3,local_18,0);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  lVar1 = *param_1;
  puVar2 = (undefined8 *)FName::FName(local_res8,puVar3,1);
  (**(code **)(lVar1 + 0x2e0))(param_1,param_2,*puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1422cd0d0 FUN_1422cd0d0 body=408 status=ok
// SIG undefined FUN_1422cd0d0(void)

undefined4 * FUN_1422cd0d0(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res18;
  longlong local_res20;
  undefined2 *local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  
  local_res18 = param_3;
  FName::ToString(&local_res18,&local_48);
  FUN_1416f9e30(&local_38,&local_48);
  local_58 = 0;
  puVar2 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  uStack_50 = 0;
  puVar3 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar3 = local_48;
  }
  FString::PrintfImpl(&local_68,L"%s.%s",puVar3,puVar2);
  puVar2 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar2 = local_68;
  }
  FName::FName(&local_res20,puVar2,0);
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_68 = (undefined2 *)0x0;
  if (local_res20 != 0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x2e0))(param_1,&local_28);
    local_58 = *plVar1;
    uStack_50 = plVar1[1];
    if ((local_58 != 0) && (local_68 = (undefined2 *)0x0, uStack_50 != 0)) goto LAB_1422cd22d;
  }
  local_68 = (undefined2 *)0x0;
  puVar2 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  puVar3 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar3 = local_48;
  }
  FString::PrintfImpl(&local_28,L"%s.%s_C",puVar3,puVar2);
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  plVar1 = (longlong *)FName::FName(&local_68,puVar2,0);
  local_res20 = *plVar1;
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_68 = (undefined2 *)0x0;
  if (local_res20 != 0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x2e0))(param_1,&local_28);
    local_58 = *plVar1;
    uStack_50 = plVar1[1];
  }
LAB_1422cd22d:
  *param_2 = (undefined4)local_58;
  param_2[1] = local_58._4_4_;
  param_2[2] = (undefined4)uStack_50;
  param_2[3] = uStack_50._4_4_;
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1422cd270 GetPrimaryAssetIdForPath body=30 status=ok
// SIG undefined GetPrimaryAssetIdForPath(void)

undefined8
UAssetManager::GetPrimaryAssetIdForPath(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  (**(code **)(*param_1 + 0x2e0))(param_1,param_2,*param_3);
  return param_2;
}



// FUNCTION 1422cd290 FUN_1422cd290 body=357 status=ok
// SIG undefined FUN_1422cd290(void)

longlong * FUN_1422cd290(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_res20;
  
  plVar5 = (longlong *)0x0;
  if ((int)param_1[6] != *(int *)((longlong)param_1 + 0x5c)) {
    plVar4 = (longlong *)param_1[0xd];
    if ((longlong *)param_1[0xd] == (longlong *)0x0) {
      plVar4 = param_1 + 0xc;
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                    (longlong)(int)param_1[0xe] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x20 + param_1[5]);
        if (*plVar4 == param_3) {
          if (iVar2 != -1) goto LAB_1422cd311;
          break;
        }
        iVar2 = (int)plVar4[3];
      } while (iVar2 != -1);
    }
  }
  plVar4 = plVar5;
LAB_1422cd311:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = plVar5;
  }
  if (plVar3 != (longlong *)0x0) {
LAB_1422cd3dc:
    lVar1 = plVar3[1];
    *param_2 = *plVar3;
    param_2[1] = lVar1;
    return param_2;
  }
  (**(code **)(*param_1 + 0x400))(param_1,&local_res20);
  if (local_res20 != 0) {
    if ((int)param_1[6] != *(int *)((longlong)param_1 + 0x5c)) {
      plVar4 = (longlong *)param_1[0xd];
      if ((longlong *)param_1[0xd] == (longlong *)0x0) {
        plVar4 = param_1 + 0xc;
      }
      iVar2 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)local_res20 >> 0x20) + (int)local_res20) &
                      (longlong)(int)param_1[0xe] - 1U) * 4);
      if (iVar2 != -1) {
        do {
          plVar4 = (longlong *)((longlong)iVar2 * 0x20 + param_1[5]);
          if (*plVar4 == local_res20) {
            if (iVar2 != -1) goto LAB_1422cd3b2;
            break;
          }
          iVar2 = (int)plVar4[3];
        } while (iVar2 != -1);
      }
    }
    plVar4 = plVar5;
LAB_1422cd3b2:
    plVar3 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = plVar5;
    }
    if (plVar3 != (longlong *)0x0) goto LAB_1422cd3dc;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1422cd400 FUN_1422cd400 body=756 status=ok
// SIG undefined FUN_1422cd400(void)

undefined8 FUN_1422cd400(longlong param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  uint *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint local_98;
  uint uStack_94;
  int iStack_90;
  int iStack_8c;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  uint uStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  plVar15 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x380);
  plVar9 = (longlong *)0x0;
  iVar6 = (int)((ulonglong)param_2 >> 0x20);
  if (*(uint *)(param_1 + 0x380) != *(uint *)(param_1 + 0x3ac)) {
    lVar8 = *(longlong *)(param_1 + 0x3b8);
    if (*(longlong *)(param_1 + 0x3b8) == 0) {
      lVar8 = param_1 + 0x3b0;
    }
    uVar3 = *(uint *)(lVar8 + ((longlong)(iVar6 + (int)param_2) &
                              (longlong)*(int *)(param_1 + 0x3c0) - 1U) * 4);
    plVar15 = (longlong *)(ulonglong)uVar3;
    if (uVar3 != 0xffffffff) {
      do {
        plVar11 = (longlong *)((longlong)(int)plVar15 * 0x20 + *(longlong *)(param_1 + 0x378));
        if (*plVar11 == param_2) {
          if ((int)plVar15 != -1) goto LAB_1422cd491;
          break;
        }
        plVar15 = (longlong *)(ulonglong)*(uint *)(plVar11 + 3);
      } while (*(uint *)(plVar11 + 3) != 0xffffffff);
    }
  }
  plVar11 = plVar9;
LAB_1422cd491:
  plVar14 = plVar11 + 1;
  if (plVar11 == (longlong *)0x0) {
    plVar14 = plVar9;
  }
  if (plVar14 != (longlong *)0x0) {
    lVar8 = *plVar14;
    plVar15 = (longlong *)(lVar8 + 0x90);
    puVar1 = (uint *)(lVar8 + 0xa0);
    uVar3 = *(uint *)(lVar8 + 0xb8);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar3 != 0) {
      puVar13 = *(uint **)(lVar8 + 0xb0);
      if (*(uint **)(lVar8 + 0xb0) == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar4 = *puVar13;
      plVar11 = plVar9;
      while (uVar4 == 0) {
        iVar7 = (int)plVar9;
        uStack_80 = (int)plVar11 + 0x20;
        plVar11 = (longlong *)(ulonglong)uStack_80;
        local_98 = iVar7 + 1;
        plVar9 = (longlong *)(ulonglong)local_98;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_1422cd57d;
        uVar4 = puVar13[(longlong)iVar7 + 1];
      }
      uStack_94 = -uVar4 & uVar4;
      iVar7 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_84 = (uStack_80 - iVar7) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_1422cd57d:
        uStack_84 = uVar3;
      }
    }
    uVar4 = *(uint *)(lVar8 + 0xb8);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,uStack_80);
    uStack_48 = local_98;
    uStack_44 = uStack_94;
    uVar12 = uVar4 & 0xffffffe0;
    uStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar1;
    local_50 = plVar15;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_84 = uVar4;
    if (uVar4 != uVar3) {
      puVar13 = *(uint **)(lVar8 + 0xb0);
      if (*(uint **)(lVar8 + 0xb0) == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar10 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar7 = (int)uVar4 >> 5;
      while (uVar10 == 0) {
        uVar12 = uVar12 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_1422cd644;
        uVar10 = puVar13[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar10 = -uVar10 & uVar10;
      iVar7 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar10 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_84 = (uVar12 - iVar7) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_1422cd644:
        uStack_84 = uVar3;
      }
    }
    while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
      iVar7 = (int)param_3[1];
      uVar5 = *(undefined8 *)((longlong)(int)uStack_5c * 0x80 + *plVar15);
      *(int *)(param_3 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar7);
      }
      iStack_90 = (int)uVar5;
      iStack_8c = (int)((ulonglong)uVar5 >> 0x20);
      piVar2 = (int *)(*param_3 + (longlong)iVar7 * 0x10);
      *piVar2 = (int)param_2;
      piVar2[1] = iVar6;
      piVar2[2] = iStack_90;
      piVar2[3] = iStack_8c;
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
  }
  return CONCAT71((int7)((ulonglong)plVar15 >> 8),0 < (int)param_3[1]);
}



// FUNCTION 1422cd700 FUN_1422cd700 body=607 status=ok
// SIG undefined FUN_1422cd700(void)

bool FUN_1422cd700(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  char param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  int *piVar12;
  bool bVar13;
  undefined8 local_88;
  longlong local_80;
  int *local_70;
  undefined8 local_68;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  longlong local_50;
  undefined8 *local_48;
  int local_40;
  
  local_80 = FUN_1422cbd90(param_1,param_3,1);
  bVar13 = local_80 == 0;
  if (!bVar13) {
    local_88 = 0;
    if (*(longlong *)(local_80 + 0x18) != 0) {
      FUN_1422b78e0(param_2,&local_88,(longlong *)(local_80 + 0x18),0);
    }
    puVar11 = (undefined8 *)*param_4;
    local_70 = (int *)0x0;
    local_68 = 0;
    puVar2 = puVar11 + (int)param_4[1];
    if (puVar11 != puVar2) {
      local_88 = 0;
      do {
        (**(code **)(*param_1 + 0x368))(param_1,&local_60,param_3,*puVar11);
        uVar3 = local_68;
        if (local_50 != 0) {
          lVar8 = (longlong)(int)local_68;
          iVar4 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar4);
          if (local_68._4_4_ < iVar4) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_70,uVar3 & 0xffffffff);
          }
          iVar4 = local_40;
          puVar7 = local_48;
          piVar12 = local_70 + lVar8 * 10;
          *piVar12 = local_60;
          piVar12[1] = iStack_5c;
          piVar12[2] = iStack_58;
          piVar12[3] = iStack_54;
          *(longlong *)(local_70 + lVar8 * 10 + 4) = local_50;
          piVar12 = local_70 + lVar8 * 10 + 6;
          piVar12[0] = 0;
          piVar12[1] = 0;
          local_70[lVar8 * 10 + 8] = local_40;
          if (local_40 == 0) {
            local_70[lVar8 * 10 + 9] = 0;
          }
          else {
            TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(piVar12,local_40,0);
            puVar9 = *(undefined8 **)piVar12;
            do {
              *puVar9 = *puVar7;
              FString::FString(puVar9 + 1,puVar7 + 1);
              puVar9 = puVar9 + 3;
              puVar7 = puVar7 + 3;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (&local_48);
        puVar11 = puVar11 + 1;
      } while (puVar11 != puVar2);
    }
    if (param_5 != '\0') {
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_70);
    }
    piVar12 = local_70 + (longlong)(int)local_68 * 10;
    if (local_70 != piVar12) {
      piVar10 = local_70 + 8;
      do {
        iVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
        iVar4 = *piVar10;
        if (iVar5 < iVar4 + iVar5) {
          FUN_14089d3b0(param_2);
          iVar4 = *piVar10;
        }
        lVar6 = *(longlong *)(piVar10 + -2);
        lVar8 = lVar6 + (longlong)iVar4 * 0x18;
        for (; lVar6 != lVar8; lVar6 = lVar6 + 0x18) {
          FUN_1422b78e0(param_2,&local_88,lVar6,0);
        }
        piVar1 = piVar10 + 2;
        piVar10 = piVar10 + 10;
      } while (piVar1 != piVar12);
    }
    if ((int)local_68 != 0) {
      piVar12 = local_70 + 6;
      iVar4 = (int)local_68;
      do {
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (piVar12);
        piVar12 = piVar12 + 10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (local_70 != (int *)0x0) {
      FMemory::Free(local_70);
    }
    bVar13 = local_80 == 0;
  }
  return !bVar13;
}



// FUNCTION 1422cd960 GetPrimaryAssetObject body=172 status=ok
// SIG undefined GetPrimaryAssetObject(void)

longlong UAssetManager::GetPrimaryAssetObject(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1422cbd90(param_1,param_2,1);
  if (lVar2 == 0) {
    return 0;
  }
  lVar1 = lVar2 + 8;
  lVar3 = FWeakObjectPtr::Get(lVar1);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar2 + 0x10)) && (*(longlong *)(lVar2 + 0x18) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar1,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar2 + 0x10) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar1);
    }
  }
  return lVar3;
}



// FUNCTION 1422cda10 FUN_1422cda10 body=906 status=ok
// SIG undefined FUN_1422cda10(void)

undefined8 FUN_1422cda10(longlong param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint *puVar12;
  undefined8 uVar13;
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
  
  uVar13 = 0;
  plVar8 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x380) != *(int *)(param_1 + 0x3ac)) {
    lVar4 = *(longlong *)(param_1 + 0x3b8);
    if (*(longlong *)(param_1 + 0x3b8) == 0) {
      lVar4 = param_1 + 0x3b0;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x3c0) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar11 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x378));
        if (*plVar11 == param_2) {
          if (iVar3 != -1) goto LAB_1422cdaa2;
          break;
        }
        iVar3 = (int)plVar11[3];
      } while (iVar3 != -1);
    }
  }
  plVar11 = plVar8;
LAB_1422cdaa2:
  plVar5 = plVar11 + 1;
  if (plVar11 == (longlong *)0x0) {
    plVar5 = plVar8;
  }
  if (plVar5 != (longlong *)0x0) {
    lVar4 = *plVar5;
    local_a8 = 0;
    uVar2 = *(uint *)(lVar4 + 0xb8);
    puVar1 = (uint *)(lVar4 + 0xa0);
    uStack_a4 = 1;
    uStack_94 = 0;
    uStack_90 = 0;
    if (uVar2 != 0) {
      puVar12 = *(uint **)(lVar4 + 0xb0);
      if (*(uint **)(lVar4 + 0xb0) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar7 = *puVar12;
      plVar11 = plVar8;
      while (uVar7 == 0) {
        iVar3 = (int)plVar8;
        uStack_90 = (int)plVar11 + 0x20;
        plVar11 = (longlong *)(ulonglong)uStack_90;
        local_a8 = iVar3 + 1;
        plVar8 = (longlong *)(ulonglong)local_a8;
        if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 <= iVar3)
        goto LAB_1422cdba0;
        uVar7 = puVar12[(longlong)iVar3 + 1];
      }
      uStack_a4 = -uVar7 & uVar7;
      iVar3 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uStack_94 = (uStack_90 - iVar3) + 0x1f;
      if ((int)uVar2 < (int)uStack_94) {
LAB_1422cdba0:
        uStack_94 = uVar2;
      }
    }
    uStack_74 = *(uint *)(lVar4 + 0xb8);
    uStack_48 = 0xffffffff;
    uStack_44 = uStack_94;
    local_40 = CONCAT44(uStack_8c,uStack_90);
    uVar7 = uStack_74 & 0xffffffe0;
    uStack_58 = local_a8;
    uStack_54 = uStack_a4;
    local_50 = puVar1;
    if (uStack_74 != uVar2) {
      puVar12 = *(uint **)(lVar4 + 0xb0);
      if (*(uint **)(lVar4 + 0xb0) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar9 = puVar12[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
      iVar3 = (int)uStack_74 >> 5;
      while (uVar9 == 0) {
        uVar7 = uVar7 + 0x20;
        if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 <= iVar3)
        goto LAB_1422cdc7b;
        uVar9 = puVar12[(longlong)iVar3 + 1];
        iVar3 = iVar3 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar3 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uStack_74 = (uVar7 - iVar3) + 0x1f;
      if ((int)uVar2 < (int)uStack_74) {
LAB_1422cdc7b:
        uStack_74 = uVar2;
      }
    }
    while ((uStack_44 != uStack_74 || (local_50 != puVar1))) {
      lVar10 = *(longlong *)(lVar4 + 0x90) + (longlong)(int)uStack_44 * 0x80 + 0x10;
      lVar6 = FWeakObjectPtr::Get();
      if (lVar6 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar10 + 8)) && (*(longlong *)(lVar10 + 0x10) != 0)) {
          lVar6 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar10,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar10 + 8) = DAT_1464b56f4;
          }
          lVar6 = FWeakObjectPtr::Get(lVar10);
          if (lVar6 != 0) goto LAB_1422cdd29;
        }
      }
      else {
LAB_1422cdd29:
        iVar3 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar3);
        }
        uVar13 = 1;
        *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar6;
      }
      uStack_48 = uStack_48 & ~uStack_54;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
    }
  }
  return uVar13;
}



// FUNCTION 1422cdda0 GetPrimaryAssetPath body=76 status=ok
// SIG undefined GetPrimaryAssetPath(void)

undefined8 *
UAssetManager::GetPrimaryAssetPath(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1422cbd90(param_1,param_3,1);
  if (lVar1 != 0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x18);
    FString::FString(param_2 + 1,lVar1 + 0x20);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1422cddf0 FUN_1422cddf0 body=721 status=ok
// SIG undefined FUN_1422cddf0(void)

undefined8 FUN_1422cddf0(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
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
  
  plVar9 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x380);
  plVar6 = (longlong *)0x0;
  if (*(uint *)(param_1 + 0x380) != *(uint *)(param_1 + 0x3ac)) {
    lVar5 = *(longlong *)(param_1 + 0x3b8);
    if (*(longlong *)(param_1 + 0x3b8) == 0) {
      lVar5 = param_1 + 0x3b0;
    }
    uVar2 = *(uint *)(lVar5 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                              (longlong)*(int *)(param_1 + 0x3c0) - 1U) * 4);
    plVar9 = (longlong *)(ulonglong)uVar2;
    if (uVar2 != 0xffffffff) {
      do {
        plVar10 = (longlong *)((longlong)(int)plVar9 * 0x20 + *(longlong *)(param_1 + 0x378));
        if (*plVar10 == param_2) {
          if ((int)plVar9 != -1) goto LAB_1422cde82;
          break;
        }
        plVar9 = (longlong *)(ulonglong)*(uint *)(plVar10 + 3);
      } while (*(uint *)(plVar10 + 3) != 0xffffffff);
    }
  }
  plVar10 = plVar6;
LAB_1422cde82:
  plVar8 = plVar10 + 1;
  if (plVar10 == (longlong *)0x0) {
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    lVar5 = *plVar8;
    plVar9 = (longlong *)(lVar5 + 0x90);
    uVar2 = *(uint *)(lVar5 + 0xb8);
    puVar1 = (uint *)(lVar5 + 0xa0);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar2 != 0) {
      puVar12 = *(uint **)(lVar5 + 0xb0);
      if (*(uint **)(lVar5 + 0xb0) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar3 = *puVar12;
      plVar10 = plVar6;
      while (uVar3 == 0) {
        iVar4 = (int)plVar6;
        uStack_80 = (int)plVar10 + 0x20;
        plVar10 = (longlong *)(ulonglong)uStack_80;
        local_98 = iVar4 + 1;
        plVar6 = (longlong *)(ulonglong)local_98;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_1422cdf6c;
        uVar3 = puVar12[(longlong)iVar4 + 1];
      }
      uStack_94 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_84 = (uStack_80 - iVar4) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_1422cdf6c:
        uStack_84 = uVar2;
      }
    }
    uVar3 = *(uint *)(lVar5 + 0xb8);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,uStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar11 = uVar3 & 0xffffffe0;
    uStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar1;
    local_50 = plVar9;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_84 = uVar3;
    if (uVar3 != uVar2) {
      puVar12 = *(uint **)(lVar5 + 0xb0);
      if (*(uint **)(lVar5 + 0xb0) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar7 = puVar12[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
      iVar4 = (int)uVar3 >> 5;
      while (uVar7 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_1422ce032;
        uVar7 = puVar12[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar4 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar7 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_84 = (uVar11 - iVar4) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_1422ce032:
        uStack_84 = uVar2;
      }
    }
    while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
      if (*(longlong *)(*plVar9 + 0x20 + (longlong)(int)uStack_5c * 0x80) != 0) {
        TArray<FSoftObjectPath,FDefaultAllocator>::AddUniqueImpl<FSoftObjectPath_const_&>(param_3);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
  }
  return CONCAT71((int7)((ulonglong)plVar9 >> 8),0 < *(int *)(param_3 + 8));
}



// FUNCTION 1422ce0d0 FUN_1422ce0d0 body=357 status=ok
// SIG undefined FUN_1422ce0d0(void)

int * FUN_1422ce0d0(longlong param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int local_res8 [2];
  
  iVar4 = *(int *)(param_1 + 0x380);
  plVar8 = (longlong *)0x0;
  lVar1 = *param_3;
  *param_2 = -1;
  *(undefined1 *)(param_2 + 1) = 1;
  param_2[2] = -1;
  *(undefined1 *)(param_2 + 3) = 0;
  if (iVar4 != *(int *)(param_1 + 0x3ac)) {
    lVar5 = *(longlong *)(param_1 + 0x3b8);
    if (*(longlong *)(param_1 + 0x3b8) == 0) {
      lVar5 = param_1 + 0x3b0;
    }
    iVar4 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0x3c0) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x378));
        if (*plVar7 == lVar1) {
          if (iVar4 != -1) goto LAB_1422ce171;
          break;
        }
        iVar4 = (int)plVar7[3];
      } while (iVar4 != -1);
    }
  }
  plVar7 = plVar8;
LAB_1422ce171:
  plVar6 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  if (plVar6 != (longlong *)0x0) {
    lVar1 = *plVar6;
    iVar4 = *(int *)(lVar1 + 100);
    iVar2 = *(int *)(lVar1 + 0x68);
    iVar3 = *(int *)(lVar1 + 0x6c);
    *param_2 = *(int *)(lVar1 + 0x60);
    param_2[1] = iVar4;
    param_2[2] = iVar2;
    param_2[3] = iVar3;
    TSet<TTuple<FPrimaryAssetId,FPrimaryAssetRules>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRules,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x78),local_res8,param_3);
    plVar7 = plVar8;
    if (local_res8[0] != -1) {
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)local_res8[0] * 0x28);
    }
    plVar6 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar6 = plVar8;
    }
    if (plVar6 != (longlong *)0x0) {
      if ((int)*plVar6 != DAT_146531ab0) {
        *param_2 = (int)*plVar6;
      }
      if (*(char *)((longlong)plVar6 + 4) != DAT_146531ab4) {
        *(char *)(param_2 + 1) = *(char *)((longlong)plVar6 + 4);
      }
      if ((int)plVar6[1] != DAT_146531ab8) {
        param_2[2] = (int)plVar6[1];
      }
      if (*(char *)((longlong)plVar6 + 0xc) != DAT_146531abc) {
        *(char *)(param_2 + 3) = *(char *)((longlong)plVar6 + 0xc);
      }
    }
    if (*param_2 < 0) {
      *param_2 = 1;
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1422ce240 GetPrimaryAssetTypeInfo body=183 status=ok
// SIG undefined GetPrimaryAssetTypeInfo(void)

undefined8
UAssetManager::GetPrimaryAssetTypeInfo(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x380) != *(int *)(param_1 + 0x3ac)) {
    lVar2 = *(longlong *)(param_1 + 0x3b8);
    if (*(longlong *)(param_1 + 0x3b8) == 0) {
      lVar2 = param_1 + 0x3b0;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x3c0) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x378));
        if (*plVar4 == param_2) {
          if (iVar1 != -1) goto LAB_1422ce2c2;
          break;
        }
        iVar1 = (int)plVar4[3];
      } while (iVar1 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1422ce2c2:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  FUN_1422be9d0(param_3,*plVar3);
  return 1;
}



// FUNCTION 1422ce300 FUN_1422ce300 body=563 status=ok
// SIG undefined FUN_1422ce300(void)

void FUN_1422ce300(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
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
  
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0x378);
  uVar3 = *(uint *)(param_1 + 0x3a0);
  puVar1 = (uint *)(param_1 + 0x388);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x398);
    if (*(uint **)(param_1 + 0x398) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar6) goto LAB_1422ce3dc;
      uVar4 = puVar11[lVar9 + 1];
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
LAB_1422ce3dc:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x3a0);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar4 & 0xffffffe0;
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
    puVar11 = *(uint **)(param_1 + 0x398);
    if (*(uint **)(param_1 + 0x398) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1422ce4a2;
      uVar8 = puVar11[(longlong)iVar7 + 1];
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
    uStack_74 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1422ce4a2:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    iVar7 = (int)param_2[1];
    uVar5 = *(undefined8 *)((longlong)(int)uStack_4c * 0x20 + 8 + *plVar2);
    *(int *)(param_2 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
    }
    FUN_1422bcca0((longlong)iVar7 * 0x90 + *param_2,uVar5);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 1422ce540 FUN_1422ce540 body=1430 status=ok
// SIG undefined FUN_1422ce540(void)

undefined1
FUN_1422ce540(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,char param_6)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  uint *puVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined1 local_res8;
  uint local_118;
  int local_110;
  uint uStack_10c;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  uint uStack_ec;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_c8;
  uint *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  longlong *local_a0;
  int iStack_98;
  uint uStack_94;
  uint *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar21 = (longlong *)(param_1 + 0x378);
  uStack_ec = 1;
  uVar3 = *(uint *)(param_1 + 0x3a0);
  puVar1 = (uint *)(param_1 + 0x388);
  uVar14 = 0;
  local_f0 = 0;
  local_res8 = 0;
  uStack_dc = 0;
  iStack_d8 = 0;
  if (uVar3 != 0) {
    puVar17 = *(uint **)(param_1 + 0x398);
    if (*(uint **)(param_1 + 0x398) == (uint *)0x0) {
      puVar17 = puVar1;
    }
    uVar10 = *puVar17;
    iStack_d8 = 0;
    local_f0 = 0;
    while (uVar10 == 0) {
      lVar6 = (longlong)local_f0;
      iStack_d8 = iStack_d8 + 0x20;
      iVar9 = local_f0 + 1;
      bVar5 = (int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= local_f0;
      local_f0 = iVar9;
      if (bVar5) goto LAB_1422ce635;
      uVar10 = puVar17[lVar6 + 1];
    }
    uStack_ec = -uVar10 & uVar10;
    iVar9 = 0x1f;
    if (uStack_ec != 0) {
      for (; uStack_ec >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_ec == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_dc = (iStack_d8 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_dc) {
LAB_1422ce635:
      uStack_dc = uVar3;
    }
  }
  local_118 = *(uint *)(param_1 + 0x3a0);
  uStack_c8 = CONCAT44(uStack_ec,local_f0);
  uStack_b8 = CONCAT44(uStack_dc,0xffffffff);
  uStack_b0 = CONCAT44(uStack_d4,iStack_d8);
  uVar10 = local_118 & 0xffffffe0;
  iStack_98 = local_f0;
  uStack_94 = uStack_ec;
  puStack_c0 = puVar1;
  local_a8 = plVar21;
  local_90 = puVar1;
  uStack_88 = uStack_b8;
  local_80 = uStack_b0;
  local_a0 = plVar21;
  if (local_118 != uVar3) {
    puVar17 = *(uint **)(param_1 + 0x398);
    if (*(uint **)(param_1 + 0x398) == (uint *)0x0) {
      puVar17 = puVar1;
    }
    uVar12 = puVar17[(int)local_118 >> 5] & -1 << ((byte)local_118 & 0x1f);
    iVar9 = (int)local_118 >> 5;
    while (uVar12 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar9) goto LAB_1422ce6fe;
      uVar12 = puVar17[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar9 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_118 = (uVar10 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)local_118) {
LAB_1422ce6fe:
      local_118 = uVar3;
    }
  }
  do {
    if (((uStack_88._4_4_ == local_118) && (local_90 == puVar1)) && (local_a0 == plVar21)) {
      return uVar14;
    }
    plVar19 = (longlong *)((longlong)(int)uStack_88._4_4_ * 0x20 + *local_a0);
    if ((int)param_3[1] < 1) {
LAB_1422ce764:
      lVar6 = plVar19[1];
      plVar20 = (longlong *)(lVar6 + 0x90);
      local_110 = 0;
      iVar9 = *(int *)(lVar6 + 0xb8);
      puStack_c0 = (uint *)(lVar6 + 0xa0);
      uStack_10c = 1;
      uStack_fc = 0;
      iStack_f8 = 0;
      if (iVar9 != 0) {
        puVar17 = *(uint **)(lVar6 + 0xb0);
        if (*(uint **)(lVar6 + 0xb0) == (uint *)0x0) {
          puVar17 = puStack_c0;
        }
        uVar3 = *puVar17;
        iStack_f8 = 0;
        local_110 = 0;
        while (uVar3 == 0) {
          lVar7 = (longlong)local_110;
          iStack_f8 = iStack_f8 + 0x20;
          iVar11 = local_110 + 1;
          bVar5 = (int)((iVar9 + -1 >> 0x1f & 0x1fU) + iVar9 + -1) >> 5 <= local_110;
          local_110 = iVar11;
          if (bVar5) goto LAB_1422ce825;
          uVar3 = puVar17[lVar7 + 1];
        }
        uStack_10c = -uVar3 & uVar3;
        iVar11 = 0x1f;
        if (uStack_10c != 0) {
          for (; uStack_10c >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uStack_10c == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        uStack_fc = (iStack_f8 - iVar11) + 0x1f;
        if (iVar9 < (int)uStack_fc) {
LAB_1422ce825:
          uStack_fc = iVar9;
        }
      }
      uVar3 = *(uint *)(lVar6 + 0xb8);
      uStack_b8 = CONCAT44(uStack_fc,0xffffffff);
      uStack_b0 = CONCAT44(uStack_f4,iStack_f8);
      uVar10 = *(uint *)(lVar6 + 0xb8);
      uStack_60 = CONCAT44(uStack_10c,local_110);
      uVar12 = uVar3 & 0xffffffe0;
      uStack_c8 = CONCAT44(uStack_10c,local_110);
      local_68 = plVar20;
      puStack_58 = puStack_c0;
      uStack_50 = uStack_b8;
      uStack_48 = uStack_b0;
      uStack_fc = uVar3;
      if (uVar3 != uVar10) {
        puVar17 = *(uint **)(lVar6 + 0xb0);
        if (*(uint **)(lVar6 + 0xb0) == (uint *)0x0) {
          puVar17 = puStack_c0;
        }
        uVar13 = puVar17[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
        iVar9 = (int)uVar3 >> 5;
        while (uVar13 == 0) {
          uVar12 = uVar12 + 0x20;
          if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 <= iVar9)
          goto LAB_1422ce905;
          uVar13 = puVar17[(longlong)iVar9 + 1];
          iVar9 = iVar9 + 1;
        }
        uVar13 = -uVar13 & uVar13;
        iVar9 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (uVar13 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        uStack_fc = (uVar12 - iVar9) + 0x1f;
        if ((int)uVar10 < (int)uStack_fc) {
LAB_1422ce905:
          uStack_fc = uVar10;
        }
      }
      while( true ) {
        if ((uStack_b8._4_4_ == uStack_fc) &&
           (plVar21 = local_a8, puStack_c0 == (uint *)(lVar6 + 0xa0))) break;
        puVar15 = (undefined8 *)((longlong)(int)uStack_b8._4_4_ * 0x80 + *plVar20);
        if (param_6 == '\0') {
          lVar7 = puVar15[0xb];
          puVar18 = puVar15 + 0xb;
          if (((lVar7 == 0) || (*(char *)(lVar7 + 0x12) != '\0')) ||
             (*(char *)(lVar7 + 0x11) != '\0')) goto LAB_1422ce958;
        }
        else {
LAB_1422ce958:
          lVar7 = puVar15[7];
          puVar18 = puVar15 + 7;
        }
        if (((lVar7 != 0) && (*(char *)(lVar7 + 0x12) == '\0')) && (*(char *)(lVar7 + 0x11) == '\0')
           ) {
          bVar5 = false;
          plVar16 = (longlong *)*param_4;
          plVar21 = plVar16 + (int)param_4[1];
          if (plVar16 != plVar21) {
            plVar4 = (longlong *)puVar18[2];
            do {
              if (plVar4 == plVar4 + *(int *)(puVar18 + 3)) {
LAB_1422ce9c5:
                bVar5 = true;
                break;
              }
              plVar8 = plVar4;
              while (*plVar8 != *plVar16) {
                plVar8 = plVar8 + 1;
                if (plVar8 == plVar4 + *(int *)(puVar18 + 3)) goto LAB_1422ce9c5;
              }
              plVar16 = plVar16 + 1;
            } while (plVar16 != plVar21);
          }
          plVar16 = (longlong *)*param_5;
          plVar21 = plVar16 + (int)param_5[1];
          uVar14 = local_res8;
          if (plVar16 != plVar21) {
            plVar4 = (longlong *)puVar18[2];
            do {
              if (plVar4 != plVar4 + *(int *)(puVar18 + 3)) {
                plVar8 = plVar4;
                do {
                  if (*plVar8 == *plVar16) goto LAB_1422cea76;
                  plVar8 = plVar8 + 1;
                } while (plVar8 != plVar4 + *(int *)(puVar18 + 3));
              }
              plVar16 = plVar16 + 1;
            } while (plVar16 != plVar21);
          }
          if (!bVar5) {
            local_78 = *plVar19;
            iVar9 = (int)param_2[1];
            uStack_70 = *puVar15;
            *(int *)(param_2 + 1) = iVar9 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
            }
            local_res8 = 1;
            puVar2 = (undefined4 *)(*param_2 + (longlong)iVar9 * 0x10);
            *puVar2 = (undefined4)local_78;
            puVar2[1] = local_78._4_4_;
            puVar2[2] = (undefined4)uStack_70;
            puVar2[3] = uStack_70._4_4_;
            uVar14 = 1;
          }
        }
LAB_1422cea76:
        uStack_b8 = CONCAT44(uStack_b8._4_4_,(uint)uStack_b8 & ~uStack_c8._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c8);
      }
    }
    else {
      plVar16 = (longlong *)*param_3;
      plVar20 = plVar16 + (int)param_3[1];
      for (; plVar16 != plVar20; plVar16 = plVar16 + 1) {
        if (*plVar16 == *plVar19) goto LAB_1422ce764;
      }
    }
    uStack_88 = CONCAT44(uStack_88._4_4_,(uint)uStack_88 & ~uStack_94);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_98);
  } while( true );
}



// FUNCTION 1422ceae0 FUN_1422ceae0 body=122 status=ok
// SIG undefined FUN_1422ceae0(void)

longlong FUN_1422ceae0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar3 = plVar1[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar3 = plVar1[0x1f];
  }
  lVar2 = FUN_142874ac0(DAT_146b17150);
  lVar3 = UAudioSettings::GetQualityLevelSettings(lVar3,*(undefined4 *)(lVar2 + 0xa8));
  FText::FText(param_1,lVar3);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
  return param_1;
}



// FUNCTION 1422ceb60 FUN_1422ceb60 body=209 status=ok
// SIG undefined FUN_1422ceb60(void)

longlong * FUN_1422ceb60(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_res20;
  undefined1 local_18 [16];
  
  if (*param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  (**(code **)(*param_1 + 0x400))(param_1,&local_res20);
  if (local_res20 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  plVar1 = (longlong *)FString::FString(local_18,param_3 + 1);
  *param_2 = local_res20;
  param_2[1] = 0;
  param_2[1] = *plVar1;
  *plVar1 = 0;
  *(int *)(param_2 + 2) = (int)plVar1[1];
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1422cec40 GetRedirectedAssetPath body=174 status=ok
// SIG undefined GetRedirectedAssetPath(void)

undefined8 *
UAssetManager::GetRedirectedAssetPath(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x328) != *(int *)(param_1 + 0x354)) {
    lVar2 = *(longlong *)(param_1 + 0x360);
    if (*(longlong *)(param_1 + 0x360) == 0) {
      lVar2 = param_1 + 0x358;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0x368) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 800) + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 800) + (longlong)iVar1 * 0x18) == param_3) {
          if (iVar1 != -1) goto LAB_1422cecc3;
          break;
        }
        iVar1 = *(int *)(puVar4 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_1422cecc3:
  puVar3 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 == (undefined8 *)0x0) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = *puVar3;
  return param_2;
}



// FUNCTION 1422cecf0 GetRedirectedPrimaryAssetId body=322 status=ok
// SIG undefined GetRedirectedPrimaryAssetId(void)

undefined8 *
UAssetManager::GetRedirectedPrimaryAssetId(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int local_res8 [2];
  longlong local_18 [2];
  
  FPrimaryAssetId::ToString(param_3,local_18);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x2d0,local_res8,local_18);
  puVar6 = (undefined8 *)0x0;
  puVar5 = puVar6;
  if (local_res8[0] != -1) {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x2d0) + (longlong)local_res8[0] * 0x28);
  }
  puVar4 = puVar5 + 2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar4 = puVar6;
  }
  if (puVar4 == (undefined8 *)0x0) {
    lVar1 = *param_3;
    if (*(int *)(param_1 + 0x288) != *(int *)(param_1 + 0x2b4)) {
      lVar3 = *(longlong *)(param_1 + 0x2c0);
      if (*(longlong *)(param_1 + 0x2c0) == 0) {
        lVar3 = param_1 + 0x2b8;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                               (longlong)*(int *)(param_1 + 0x2c8) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x280) + (longlong)iVar2 * 0x18);
          if (*(longlong *)(*(longlong *)(param_1 + 0x280) + (longlong)iVar2 * 0x18) == lVar1) {
            if (iVar2 != -1) goto LAB_1422cede3;
            break;
          }
          iVar2 = *(int *)(puVar5 + 2);
        } while (iVar2 != -1);
      }
    }
    puVar5 = puVar6;
LAB_1422cede3:
    puVar4 = puVar5 + 1;
    if (puVar5 == (undefined8 *)0x0) {
      puVar4 = puVar6;
    }
    if (puVar4 == (undefined8 *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      lVar1 = param_3[1];
      *param_2 = *puVar4;
      param_2[1] = lVar1;
    }
  }
  else {
    FPrimaryAssetId::FPrimaryAssetId(param_2);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1422ceea0 GetSize body=85 status=ok
// SIG undefined GetSize(void)

undefined8 FSoundBuffer::GetSize(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\Audio.h",0x218,
             L"Pure virtual not implemented (%s)",L"FSoundBuffer::GetSize");
  FDebug::AssertFailed
            (&DAT_143f3f584,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\Audio.h",0x218,
             L"Pure virtual not implemented (%s)",L"FSoundBuffer::GetSize");
  return 0;
}



// FUNCTION 1422cef00 FUN_1422cef00 body=786 status=ok
// SIG undefined FUN_1422cef00(void)

longlong * FUN_1422cef00(longlong param_1,longlong *param_2,int param_3)

{
  void *_Src;
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_78;
  uint local_70;
  
  plVar11 = (longlong *)0x0;
  local_70 = *(uint *)(param_1 + 0x378);
  lVar7 = (longlong)(int)local_70;
  _Src = *(void **)(param_1 + 0x370);
  local_78 = (longlong *)0x0;
  plVar12 = plVar11;
  if (local_70 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_78,local_70,0);
    plVar12 = local_78;
    _guard_xfg_dispatch_icall_nop(local_78,_Src,lVar7 << 3);
  }
  if (0 < (int)local_70) {
    uVar8 = (ulonglong)local_70;
    plVar9 = plVar12;
    do {
      lVar7 = *plVar9;
      if (lVar7 != 0) {
        if (*(longlong *)(lVar7 + 0x10) == 0) {
          local_res10 = lVar7;
          if (*(longlong *)(lVar7 + 0x18) != 0) {
            TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
            ::Remove(param_1 + 0x438);
          }
          FUN_14058cbf0(param_1 + 0x3c0,local_res8,&local_res10,0);
        }
        else {
          lVar10 = FWeakObjectPtr::Get(lVar7);
          if ((lVar10 == 0) || (cVar2 = FUN_1428c5af0(lVar10), cVar2 != '\0')) {
            if (((*(longlong *)(lVar7 + 0x10) == 0) ||
                (cVar2 = USoundBase::IsLooping(), cVar2 == '\0')) &&
               ((*(byte *)(lVar7 + 0x9a) & 0x10) == 0)) {
              lVar10 = (*(longlong **)(lVar7 + 0x10))[0x10];
              if (((lVar10 == 0) || ((*(byte *)(lVar10 + 0x38) & 1) == 0)) ||
                 (*(int *)(lVar10 + 0x30) == 0)) {
                fVar13 = (float)(**(code **)(**(longlong **)(lVar7 + 0x10) + 0x2a0))();
                cVar2 = FUN_1427ff6d0(*(undefined8 *)(lVar7 + 0x10));
                if ((cVar2 == '\0') &&
                   (cVar2 = USoundBase::HasConcatenatorNode(*(undefined8 *)(lVar7 + 0x10)),
                   cVar2 == '\0')) {
                  if ((*(byte *)(lVar7 + 0x9b) & 8) == 0) {
LAB_1422cf202:
                    FAudioDevice::AddSoundToStop(param_1,lVar7);
                    goto LAB_1422cf0c6;
                  }
                }
                else if ((1.0 < fVar13) && (fVar13 + 1.0 < *(float *)(lVar7 + 0xa8)))
                goto LAB_1422cf202;
              }
            }
            fVar13 = (float)DAT_1464a97d0;
            if (0.5 <= fVar13) {
              fVar13 = 0.5;
            }
            if ((param_3 == 2) || ((param_3 == 1 && ((*(byte *)(lVar7 + 0x9a) & 1) == 0)))) {
              fVar13 = 0.0;
            }
            FUN_142241560(lVar7,param_2,fVar13);
          }
        }
      }
LAB_1422cf0c6:
      plVar9 = plVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FSoundConcurrencyManager::StopQuietSoundsDueToMaxConcurrency(param_1 + 0x538);
  iVar4 = (int)param_2[1];
  iVar6 = iVar4 + -1;
  if (-1 < iVar6) {
    lVar7 = (longlong)iVar6 * 8;
    lVar10 = lVar7;
    do {
      lVar1 = *param_2;
      iVar4 = (int)param_2[1];
      if (*(char *)(*(longlong *)(*(longlong *)(lVar10 + lVar1) + 0x60) + 0x98) < '\0') {
        iVar3 = (iVar4 - iVar6) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar1 + lVar7),(void *)(lVar1 + (longlong)(iVar4 - iVar3) * 8),
                     (longlong)iVar3 << 3);
          iVar4 = (int)param_2[1];
        }
        iVar4 = iVar4 + -1;
        *(int *)(param_2 + 1) = iVar4;
      }
      lVar7 = lVar7 + -8;
      lVar10 = lVar10 + -8;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  if (-1 < iVar4) {
    FUN_1422ba3d0(*param_2,(longlong)iVar4,local_res8[0],local_res8);
    if ((DAT_146aef384 < 1) || (iVar4 = DAT_146aef384, *(int *)(param_1 + 0x150) <= DAT_146aef384))
    {
      iVar4 = *(int *)(param_1 + 8);
    }
    uVar5 = (int)param_2[1] - iVar4;
    if (-1 < (int)uVar5) {
      plVar11 = (longlong *)(ulonglong)uVar5;
    }
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  return plVar11;
}



// FUNCTION 1422cf220 GetSoundClassCurrentProperties body=92 status=ok
// SIG undefined GetSoundClassCurrentProperties(void)

longlong FAudioDevice::GetSoundClassCurrentProperties(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_res10 [6];
  
  if (param_2 == 0) {
    return 0;
  }
  TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x1b8),local_res10,param_2);
  lVar2 = 0;
  if (local_res10[0] != -1) {
    lVar2 = (longlong)local_res10[0] * 0x40 + *(longlong *)(param_1 + 0x1b8);
  }
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1422cf280 FUN_1422cf280 body=868 status=ok
// SIG undefined FUN_1422cf280(void)

undefined8 * FUN_1422cf280(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  ulonglong local_40;
  int local_38;
  ulonglong uVar8;
  
  local_38 = -1;
  local_48 = 0;
  local_40 = 0;
  uVar4 = USoundBase::GetPrivateStaticClass();
  FUN_1417a5560(uVar4,&local_48,1,0x10,0);
  uVar9 = local_40 & 0xffffffff;
  do {
    local_38 = local_38 + 1;
    lVar5 = local_48;
    if ((int)local_40 <= local_38) break;
  } while (*(longlong *)(local_48 + (longlong)local_38 * 8) == 0);
  do {
    uVar8 = 0;
    if ((local_38 < 0) || ((int)uVar9 <= local_38)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
      *param_2 = 0;
      return param_2;
    }
    plVar1 = *(longlong **)(lVar5 + (longlong)local_38 * 8);
    if (plVar1 == (longlong *)0x0) {
LAB_1422cf4a1:
      plVar1 = *(longlong **)(lVar5 + (longlong)local_38 * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar5 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && ((int)plVar1[0x3b] == *(int *)(param_1 + 8))) {
          lVar5 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
          if (lVar5 == 0) {
            *param_2 = 0;
          }
          else {
            lVar5 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
            *param_2 = *(undefined8 *)(lVar5 + 0x18);
          }
LAB_1422cf59e:
          if (local_48 != 0) {
            FMemory::Free();
          }
          return param_2;
        }
        goto LAB_1422cf4f3;
      }
    }
    else {
      lVar5 = USoundCue::GetPrivateStaticClass();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar9 = local_40 & 0xffffffff;
        lVar5 = local_48;
        goto LAB_1422cf4a1;
      }
      plVar10 = (longlong *)plVar1[0x16];
      local_58 = (longlong *)0x0;
      local_50 = 0;
      local_4c = 0;
      if (plVar10 != (longlong *)0x0) {
        lVar5 = USoundNodeWavePlayer::GetPrivateStaticClass();
        iVar3 = local_50;
        if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
            != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar5 = (longlong)local_50;
          for (plVar6 = local_58; plVar6 != local_58 + lVar5; plVar6 = plVar6 + 1) {
            if ((longlong *)*plVar6 == plVar10) {
              if ((int)((longlong)plVar6 - (longlong)local_58 >> 3) != -1) goto LAB_1422cf40c;
              break;
            }
          }
          local_50 = local_50 + 1;
          if (local_4c < local_50) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,iVar3);
          }
          local_58[lVar5] = (longlong)plVar10;
        }
LAB_1422cf40c:
        iVar3 = (**(code **)(*plVar10 + 0x2c0))(plVar10);
        if (0 < (int)plVar10[6]) {
          uVar9 = uVar8;
          do {
            if ((longlong)iVar3 <= (longlong)uVar9) break;
            FUN_1422bb980(plVar1,*(undefined8 *)(plVar10[5] + uVar9 * 8),&local_58);
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            uVar9 = uVar9 + 1;
          } while ((int)uVar7 < (int)plVar10[6]);
        }
      }
      iVar3 = 0;
      plVar10 = local_58;
      if (0 < local_50) {
        do {
          if ((*(longlong *)(*plVar10 + 0x60) != 0) &&
             (*(int *)(*(longlong *)(*plVar10 + 0x60) + 0x1d8) == *(int *)(param_1 + 8))) {
            lVar5 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
            if (lVar5 == 0) {
              *param_2 = 0;
            }
            else {
              lVar5 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
              *param_2 = *(undefined8 *)(lVar5 + 0x18);
            }
            if (local_58 != (longlong *)0x0) {
              FMemory::Free();
            }
            goto LAB_1422cf59e;
          }
          iVar3 = iVar3 + 1;
          plVar10 = plVar10 + 1;
        } while (iVar3 < local_50);
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
LAB_1422cf4f3:
      uVar9 = local_40 & 0xffffffff;
      lVar5 = local_48;
    }
    do {
      local_38 = local_38 + 1;
      if ((int)uVar9 <= local_38) break;
    } while (*(longlong *)(lVar5 + (longlong)local_38 * 8) == 0);
  } while( true );
}



// FUNCTION 1422cf5f0 GetSoundSource body=73 status=ok
// SIG undefined GetSoundSource(void)

undefined8 FAudioDevice::GetSoundSource(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_res8 [8];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x168),local_res8,param_2);
  if ((local_res8[0] != -1) &&
     (lVar1 = *(longlong *)(param_1 + 0x168) + (longlong)local_res8[0] * 0x18, lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 8);
  }
  return 0;
}



// FUNCTION 1422cf640 GetSpatializationParams body=649 status=ok
// SIG undefined GetSpatializationParams(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FSoundSource::GetSpatializationParams(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_18;
  undefined4 local_10;
  
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  *(undefined4 *)(param_2 + 2) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_2 + 0x14) = DAT_1464aa814;
  *(undefined4 *)(param_2 + 3) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_2 + 0x1c) = DAT_1464aa81c;
  param_2[4] = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 5) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_2 + 0x2c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_2 + 0x34) = DAT_1468b5d98;
  *(undefined4 *)(param_2 + 8) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_2 + 0x44) = DAT_1464aa814;
  *(undefined4 *)(param_2 + 9) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_2 + 0x4c) = DAT_1464aa81c;
  param_2[10] = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 0xb) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_2 + 0x5c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_2 + 100) = DAT_1468b5d98;
  param_2[0xd] = 0;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xa4) & 0x20) == 0) {
    param_2[4] = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 5) = DAT_1468b5d98;
  }
  else {
    FUN_1422cb6f0(*(undefined8 *)(param_1 + 8),&local_18,*(longlong *)(param_1 + 0x10) + 0xe4,
                  param_2 + 0xd);
    if (*(float *)(*(longlong *)(param_1 + 0x10) + 0xf0) <= 0.0) {
      *(undefined4 *)((longlong)param_2 + 0x6c) = 0;
    }
    else {
      *(undefined4 *)((longlong)param_2 + 0x6c) = 0x49742400;
      if (0.0 < *(float *)(param_2 + 0xd)) {
        fVar4 = *(float *)(*(longlong *)(param_1 + 0x10) + 0xf0) / *(float *)(param_2 + 0xd);
        fVar5 = 0.0;
        if ((0.0 <= fVar4) && (fVar5 = fVar4, 1e+06 <= fVar4)) {
          fVar5 = 1e+06;
        }
        *(float *)((longlong)param_2 + 0x6c) = fVar5;
      }
    }
    if (*(int *)(*(longlong *)(param_1 + 0x18) + 0xc) == 2) {
      puVar3 = (undefined8 *)FUN_1422cb6f0(*(undefined8 *)(param_1 + 8),&local_18,param_1 + 0x4c,0);
      param_2[10] = *puVar3;
      *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)(puVar3 + 1);
      puVar3 = (undefined8 *)FUN_1422cb6f0(*(undefined8 *)(param_1 + 8),&local_18,param_1 + 0x58,0);
      *(undefined8 *)((longlong)param_2 + 0x5c) = *puVar3;
      *(undefined4 *)((longlong)param_2 + 100) = *(undefined4 *)(puVar3 + 1);
      param_2[4] = _DAT_1468b5d90;
      *(undefined4 *)(param_2 + 5) = DAT_1468b5d98;
    }
    else {
      param_2[4] = local_18;
      *(undefined4 *)(param_2 + 5) = local_10;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)((longlong)param_2 + 0x2c) = *(undefined8 *)(lVar1 + 0xe4);
  *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(lVar1 + 0xec);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
  uVar6 = DAT_1464aa810;
  uVar7 = DAT_1464aa814;
  uVar8 = DAT_1464aa818;
  uVar9 = DAT_1464aa81c;
  if (lVar1 != 0) {
    uVar6 = *(undefined4 *)(lVar1 + 0x130);
    uVar7 = *(undefined4 *)(lVar1 + 0x134);
    uVar8 = *(undefined4 *)(lVar1 + 0x138);
    uVar9 = *(undefined4 *)(lVar1 + 0x13c);
  }
  *(undefined4 *)(param_2 + 8) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar7;
  *(undefined4 *)(param_2 + 9) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar9;
  puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x128);
  uVar2 = puVar3[1];
  param_2[2] = *puVar3;
  param_2[3] = uVar2;
  uVar6 = *(undefined4 *)((longlong)puVar3 + 0x14);
  uVar7 = *(undefined4 *)(puVar3 + 3);
  *(undefined4 *)param_2 = *(undefined4 *)(puVar3 + 2);
  *(undefined4 *)((longlong)param_2 + 4) = uVar6;
  *(undefined4 *)(param_2 + 1) = uVar7;
  return param_2;
}



// FUNCTION 1422cf8d0 GetStreamBufferSize body=6 status=ok
// SIG undefined GetStreamBufferSize(void)

undefined8 FVorbisAudioInfo::GetStreamBufferSize(void)

{
  return 0x4000;
}



// FUNCTION 1422cf8e0 GetVolume body=11 status=ok
// SIG undefined GetVolume(void)

float FWaveInstance::GetVolume(longlong param_1)

{
  return *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x68);
}



// FUNCTION 1422cf8f0 GetVolumeWeightedPriority body=97 status=ok
// SIG undefined GetVolumeWeightedPriority(void)

float FWaveInstance::GetVolumeWeightedPriority(longlong *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0xe) * *(float *)(param_1 + 0xd) *
          *(float *)((longlong)param_1 + 0x6c);
  if (fVar1 <= 0.0) {
    if ((*(byte *)((longlong)param_1 + 0xa6) & 1) != 0) {
      return *(float *)((longlong)param_1 + 0x84) * fVar1 - 101.0;
    }
    return *(float *)((longlong)param_1 + 0x84) - 201.0;
  }
  if ((*param_1 != 0) && (*(char *)(*param_1 + 0x30) < '\0')) {
    return *(float *)((longlong)param_1 + 0x84);
  }
  return fVar1 * *(float *)((longlong)param_1 + 0x84);
}



// FUNCTION 1422cf960 GetVolumeWithDistanceAttenuation body=16 status=ok
// SIG undefined GetVolumeWithDistanceAttenuation(void)

float FWaveInstance::GetVolumeWithDistanceAttenuation(longlong param_1)

{
  return *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x6c);
}



// FUNCTION 1422cf970 HandleLoadCompleted body=30 status=ok
// SIG undefined HandleLoadCompleted(void)

void UAsyncActionChangePrimaryAssetBundles::HandleLoadCompleted(longlong param_1)

{
  FUN_1422cf9e0();
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x78,0);
  return;
}



// FUNCTION 1422cf990 HandleLoadCompleted body=70 status=ok
// SIG undefined HandleLoadCompleted(void)

void UAsyncActionLoadPrimaryAsset::HandleLoadCompleted(longlong param_1)

{
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_res8 = FStreamableHandle::GetLoadedAsset();
  }
  FUN_1422cf9e0(param_1);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x78,&local_res8);
  return;
}



// FUNCTION 1422cf9e0 FUN_1422cf9e0 body=153 status=ok
// SIG undefined FUN_1422cf9e0(void)

void FUN_1422cf9e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if (param_1 + 0xc != &local_18) {
    param_1[0xc] = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd,&local_10);
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
                    /* WARNING: Could not recover jumptable at 0x0001422cfa72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x290))(param_1);
  return;
}



// FUNCTION 1422cfa80 HandleLoadCompleted body=138 status=ok
// SIG undefined HandleLoadCompleted(void)

void UAsyncActionLoadPrimaryAssetClass::HandleLoadCompleted(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  
  lVar4 = 0;
  if ((*(longlong *)(param_1 + 0x60) != 0) &&
     (lVar2 = FStreamableHandle::GetLoadedAsset(), lVar2 != 0)) {
    lVar3 = FUN_14171bfe0();
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
      lVar4 = lVar2;
    }
  }
  FUN_1422cf9e0(param_1);
  local_res8 = lVar4;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x78,&local_res8);
  return;
}



// FUNCTION 1422cfb10 FUN_1422cfb10 body=392 status=ok
// SIG undefined FUN_1422cfb10(void)

void FUN_1422cfb10(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  void *pvVar6;
  void *_Src;
  longlong *plVar7;
  void *pvVar8;
  void *local_48;
  uint local_40;
  uint local_3c;
  longlong *local_38;
  undefined8 local_30;
  
  _Src = (void *)0x0;
  iVar5 = 0;
  local_48 = (void *)0x0;
  local_3c = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_14283a300(*(longlong *)(param_1 + 0x60),&local_38);
    plVar1 = local_38 + (int)local_30;
    pvVar6 = _Src;
    pvVar8 = _Src;
    iVar5 = 0;
    for (plVar7 = local_38; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      lVar2 = *plVar7;
      if (lVar2 != 0) {
        lVar4 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          iVar5 = (int)pvVar6;
          local_40 = iVar5 + 1;
          if ((int)pvVar8 < (int)local_40) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,pvVar6);
            pvVar8 = (void *)(ulonglong)local_3c;
            _Src = local_48;
          }
          pvVar6 = (void *)(ulonglong)local_40;
          *(longlong *)((longlong)_Src + (longlong)iVar5 * 8) = lVar2;
        }
      }
      iVar5 = (int)pvVar6;
    }
  }
  FUN_1422cf9e0(param_1);
  local_48 = (void *)0x0;
  local_3c = 0;
  local_40 = iVar5;
  if (iVar5 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,iVar5,0);
    _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar5 << 3);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x78,&local_48);
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 1422cfca0 HandleLoadCompleted body=179 status=ok
// SIG undefined HandleLoadCompleted(void)

void UAsyncActionLoadPrimaryAssetList::HandleLoadCompleted(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  void *local_18;
  ulonglong local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_14283a300(*(longlong *)(param_1 + 0x60),&local_18);
  }
  FUN_1422cf9e0(param_1);
  _Src = local_18;
  local_28 = (void *)0x0;
  local_1c = 0;
  lVar1 = (longlong)(int)local_10;
  local_20 = (int)local_10;
  if ((int)local_10 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_28,local_10 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_28,_Src,lVar1 << 3);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x78,&local_28);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422cfd60 FUN_1422cfd60 body=459 status=ok
// SIG undefined FUN_1422cfd60(void)

void FUN_1422cfd60(longlong param_1,char param_2,char param_3)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res20;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  cVar3 = IsInAudioThread();
  if (cVar3 == '\0') {
    uStack_70._0_2_ = CONCAT11(param_3,param_2);
    local_38 = 0;
    local_28 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar4 != (undefined8 *)0x0) {
      local_78 = (undefined4)param_1;
      uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
      *puVar4 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar4 + 1) = local_78;
      *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_74;
      *(undefined4 *)(puVar4 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_6c;
    }
    local_68[0] = &LAB_1422c2e00;
    FUN_1422f8a30(local_68,local_res20);
  }
  else {
    if (param_2 == '\0') {
      if ((((*(byte *)(param_1 + 0x358) & 2) != 0) || (param_3 != '\0')) &&
         (iVar5 = 0, 0 < *(int *)(param_1 + 0x150))) {
        lVar6 = 0;
        do {
          plVar2 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x148));
          bVar1 = *(byte *)(plVar2 + 0xf);
          if (((bVar1 & 2) == 0) &&
             (((param_3 != '\0' ||
               ((plVar2[2] != 0 && ((*(uint *)(plVar2[2] + 0xa4) & 0x200) == 0)))) &&
              (*(byte *)(plVar2 + 0xf) = bVar1 | 2, (bVar1 & 8) == 0)))) {
            (**(code **)(*plVar2 + 0x78))();
          }
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 8;
        } while (iVar5 < *(int *)(param_1 + 0x150));
      }
    }
    else if ((((*(byte *)(param_1 + 0x358) & 2) == 0) || (param_3 != '\0')) &&
            (iVar5 = 0, 0 < *(int *)(param_1 + 0x150))) {
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x148));
        bVar1 = *(byte *)(plVar2 + 0xf);
        if (((bVar1 & 2) != 0) &&
           ((param_3 != '\0' || ((plVar2[2] != 0 && ((*(uint *)(plVar2[2] + 0xa4) & 0x200) == 0)))))
           ) {
          *(byte *)(plVar2 + 0xf) = bVar1 & 0xfd;
          if (((bVar1 & 8) == 0) || ((bVar1 & 4) != 0)) {
            if (((bVar1 & 8) == 0) && ((bVar1 & 4) != 0)) {
              (**(code **)(*plVar2 + 0x78))();
            }
          }
          else {
            (**(code **)(*plVar2 + 0x30))();
          }
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (iVar5 < *(int *)(param_1 + 0x150));
    }
    *(byte *)(param_1 + 0x358) = *(byte *)(param_1 + 0x358) & 0xfd;
    *(byte *)(param_1 + 0x358) = *(byte *)(param_1 + 0x358) | param_2 * '\x02';
  }
  return;
}



// FUNCTION 1422cff30 FUN_1422cff30 body=2771 status=ok
// SIG undefined FUN_1422cff30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1422cff30(longlong *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  float fVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined8 local_210;
  undefined1 local_208;
  char local_1f8 [4];
  float local_1f4;
  longlong local_1f0;
  ulonglong local_1e8;
  int local_1e0;
  longlong local_1d8;
  ulonglong local_1d0;
  int local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190 [2];
  longlong *local_180;
  longlong local_178;
  longlong local_170 [2];
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined1 local_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  if ((*(byte *)((longlong)param_1 + 0x35a) & 1) != 0) {
    return CONCAT71((int7)(local_38 >> 8),1);
  }
  local_1f8[0] = '\0';
  TArray<TSharedPtr<IAudioPluginListener,1>,FDefaultAllocator>::Reset(param_1 + 0x10,0);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0xf8))(param_1,local_108);
  uVar17 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *(undefined4 *)(param_1 + 3) = *puVar7;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar17;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = puVar7[4];
  iVar16 = *(int *)((longlong)param_1 + 0x24);
  if ((0 < iVar16) && (iVar16 <= param_2)) {
    param_2 = iVar16;
  }
  *(int *)(param_1 + 1) = param_2;
  *(int *)((longlong)param_1 + 0x14) = (int)param_1[3];
  local_218 = &DAT_1468e2360;
  FConfigCacheIni::GetInt(DAT_1468b6148,L"Audio",L"CommonAudioPoolSize",(longlong)param_1 + 0x2c);
  local_218 = &DAT_1468e2360;
  FConfigCacheIni::GetBool(DAT_1468b6148,L"Audio",L"DeferStartupPrecache",local_1f8);
  local_1f4 = 0.0;
  local_218 = &DAT_1468e2360;
  cVar5 = FConfigCacheIni::GetFloat(DAT_1468b6148,L"Audio",L"PlatformHeadroomDB",&local_1f4);
  if (cVar5 != '\0') {
    fVar19 = _guard_xfg_dispatch_icall_nop(10.0,local_1f4 * 0.05);
    *(float *)(param_1 + 0x5b) = fVar19;
  }
  iVar18 = 0;
  uVar17 = 0;
  iVar16 = iVar18;
  if (DAT_146aef388 == 0) {
    iVar16 = 0x10;
  }
  *(byte *)(param_1 + 0x6b) = (byte)iVar16 | *(byte *)(param_1 + 0x6b) & 0xef;
  plVar8 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar11 = plVar8[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar11 = plVar8[0x1f];
  }
  *(byte *)(param_1 + 0x6d) =
       *(byte *)(param_1 + 0x6d) ^
       ((byte)(*(uint *)(lVar11 + 0xd0) >> 2) ^ *(byte *)(param_1 + 0x6d)) & 1;
  *(byte *)(param_1 + 0x6d) =
       (*(char *)(lVar11 + 0xd0) << 2 ^ *(byte *)(param_1 + 0x6d)) & 4 ^ *(byte *)(param_1 + 0x6d);
  *(undefined4 *)((longlong)param_1 + 0x2dc) = *(undefined4 *)(lVar11 + 0xb8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar11 + 0xd4);
  plVar8 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar11 = plVar8[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar11 = plVar8[0x1f];
  }
  local_198 = *(longlong *)(lVar11 + 0x80);
  FString::FString(local_190,lVar11 + 0x88);
  local_1c0 = 0;
  if (local_198 != 0) {
    puVar9 = (undefined8 *)FSoftObjectPath::ToString(&local_198,local_170);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar9;
    }
    uVar10 = USoundMix::GetPrivateStaticClass();
    local_208 = 1;
    local_210 = 0;
    local_218 = (undefined8 *)((ulonglong)local_218 & 0xffffffff00000000);
    lVar11 = FUN_141799c90(uVar10,0,puVar15,0);
    param_1[0x42] = lVar11;
    if (local_170[0] != 0) {
      FMemory::Free();
    }
  }
  plVar8 = (longlong *)USoundGroups::GetPrivateStaticClass();
  lVar11 = plVar8[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar11 = plVar8[0x1f];
  }
  USoundGroups::Initialize(lVar11);
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = -1;
  uVar10 = USoundClass::GetPrivateStaticClass();
  local_218 = (undefined8 *)((ulonglong)local_218 & 0xffffffff00000000);
  FUN_1417a5560(uVar10,&local_1f0,1,0x10);
  uVar14 = local_1e8 & 0xffffffff;
  do {
    local_1e0 = local_1e0 + 1;
    if ((int)local_1e8 <= local_1e0) break;
  } while (*(longlong *)(local_1f0 + (longlong)local_1e0 * 8) == 0);
  do {
    if ((local_1e0 < 0) || ((int)uVar14 <= local_1e0)) goto LAB_1422d02a9;
    local_180 = &local_1a0;
    local_1a0 = *(longlong *)(local_1f0 + (longlong)local_1e0 * 8);
    local_178 = local_1a0 + 0x28;
    TSet<TTuple<USoundClass_*,FSoundClassProperties>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<USoundClass_*_const_&,FSoundClassProperties_&&>_>
              (param_1 + 0x37,&local_1c0,&local_180,0);
    uVar14 = local_1e8 & 0xffffffff;
    do {
      local_1e0 = local_1e0 + 1;
      if ((int)local_1e8 <= local_1e0) break;
    } while (*(longlong *)(local_1f0 + (longlong)local_1e0 * 8) == 0);
  } while( true );
LAB_1422d099b:
  if (local_1d8 != 0) {
    FMemory::Free(local_1d8);
  }
  *(byte *)((longlong)param_1 + 0x359) = *(byte *)((longlong)param_1 + 0x359) | 2;
  goto LAB_1422d09af;
LAB_1422d02a9:
  if (local_1f0 != 0) {
    FMemory::Free(local_1f0);
  }
  FAudioDevice::ParseSoundClasses(param_1);
  (**(code **)(*param_1 + 0x70))(param_1);
  if ((*(byte *)(param_1 + 0x6b) & 0x30) == 0x30) {
    lVar11 = (**(code **)(*param_1 + 0x120))(param_1);
    param_1[0x59] = lVar11;
    plVar8 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar11 = plVar8[0x1f];
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      lVar11 = plVar8[0x1f];
    }
    uVar17 = *(undefined4 *)(lVar11 + 0xd8);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar17;
  FAudioDevice::UpdateAudioPluginSettingsObjectCache(param_1);
  plVar8 = (longlong *)FUN_1422f18c0(0);
  if (plVar8 != (longlong *)0x0) {
    plVar12 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,local_160,param_1);
    plVar13 = param_1 + 8;
    if (plVar13 != plVar12) {
      *plVar13 = *plVar12;
      *plVar12 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 9,plVar12 + 1);
    }
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_158 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar1 = (int *)((longlong)local_158 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_158 + 8))(local_158,1);
        }
      }
    }
    if ((*(byte *)(param_1 + 0x6b) & 0x20) == 0) {
      uStack_1b0 = *(undefined4 *)((longlong)param_1 + 0x14);
      local_1b8 = (undefined4)param_1[1];
      uStack_1ac = *(undefined4 *)((longlong)param_1 + 0x1c);
      uStack_1b4 = 0;
      uStack_124 = 0;
      local_1a8 = param_1;
      local_128 = local_1b8;
      uStack_120 = uStack_1b0;
      uStack_11c = uStack_1ac;
      local_118 = param_1;
      (**(code **)(*(longlong *)*plVar13 + 0x68))((longlong *)*plVar13,&local_128);
    }
    *(byte *)((longlong)param_1 + 0x359) = *(byte *)((longlong)param_1 + 0x359) | 4;
    bVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
    *(byte *)(param_1 + 0x6b) = *(byte *)(param_1 + 0x6b) & 0xbf;
    *(byte *)(param_1 + 0x6b) = *(byte *)(param_1 + 0x6b) | (bVar6 & 1) << 6;
  }
  plVar8 = (longlong *)FUN_1422f16c0(0);
  if (plVar8 != (longlong *)0x0) {
    plVar13 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,local_150,param_1);
    if (param_1 + 10 != plVar13) {
      param_1[10] = *plVar13;
      *plVar13 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb,plVar13 + 1);
    }
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_148 + 1;
      lVar11 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
    *(byte *)((longlong)param_1 + 0x359) = *(byte *)((longlong)param_1 + 0x359) | 0x10;
    bVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
    *(byte *)((longlong)param_1 + 0x359) = *(byte *)((longlong)param_1 + 0x359) & 0xfe;
    *(byte *)((longlong)param_1 + 0x359) = *(byte *)((longlong)param_1 + 0x359) | bVar6 & 1;
  }
  plVar8 = (longlong *)FUN_1422f13a0(0);
  if (plVar8 != (longlong *)0x0) {
    plVar13 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,local_140,param_1);
    if (param_1 + 0xc != plVar13) {
      param_1[0xc] = *plVar13;
      *plVar13 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd,plVar13 + 1);
    }
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_138 + 1;
      lVar11 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar1 = (int *)((longlong)local_138 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
    *(byte *)((longlong)param_1 + 0x359) = *(byte *)((longlong)param_1 + 0x359) | 8;
    cVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
    *(byte *)(param_1 + 0x6b) = *(byte *)(param_1 + 0x6b) & 0x7f;
    *(byte *)(param_1 + 0x6b) = *(byte *)(param_1 + 0x6b) | cVar5 << 7;
  }
  cVar5 = (**(code **)(*param_1 + 0x100))(param_1);
  if (cVar5 == '\0') {
    FUN_1422da700(param_1);
    uVar10 = 0;
    goto LAB_1422d09b8;
  }
  if ((*(byte *)(param_1 + 0x6b) & 0x20) == 0) {
    lVar11 = (**(code **)(*param_1 + 0x120))(param_1);
    param_1[0x59] = lVar11;
  }
  if (((int)param_1[0x2a] == 0) &&
     (iVar16 = (int)param_1[1] + *(int *)((longlong)param_1 + 0xc), 0 < iVar16)) {
    do {
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x128))(param_1);
      (**(code **)(*plVar8 + 0x60))(plVar8,iVar18);
      iVar2 = (int)param_1[0x2a];
      *(int *)(param_1 + 0x2a) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x154) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x29,iVar2);
      }
      *(longlong **)(param_1[0x29] + (longlong)iVar2 * 8) = plVar8;
      iVar2 = (int)param_1[0x2c];
      *(int *)(param_1 + 0x2c) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x164) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x2b,iVar2);
      }
      iVar18 = iVar18 + 1;
      *(longlong **)(param_1[0x2b] + (longlong)iVar2 * 8) = plVar8;
    } while (iVar18 < iVar16);
  }
  local_e8 = _DAT_1468b5b70;
  uStack_e0 = uRam00000001468b5b78;
  local_c8 = _DAT_1468b5b90;
  uStack_c4 = uRam00000001468b5b94;
  uStack_c0 = uRam00000001468b5b98;
  uStack_bc = uRam00000001468b5b9c;
  local_d8 = _DAT_1468b5b80;
  uStack_d4 = uRam00000001468b5b84;
  uStack_d0 = uRam00000001468b5b88;
  uStack_cc = uRam00000001468b5b8c;
  local_b8 = 0;
  local_b0 = 0;
  FInteriorSettings::FInteriorSettings(&local_ac);
  iVar16 = (int)param_1[0x26];
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(int *)(param_1 + 0x26) = iVar16 + 1;
  local_48 = param_1;
  if (*(int *)((longlong)param_1 + 0x134) < iVar16 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_1 + 0x25,iVar16);
  }
  puVar9 = (undefined8 *)((longlong)iVar16 * 0xb0 + param_1[0x25]);
  *puVar9 = local_e8;
  puVar9[1] = uStack_e0;
  puVar9[2] = CONCAT44(uStack_d4,local_d8);
  puVar9[3] = CONCAT44(uStack_cc,uStack_d0);
  puVar9[4] = CONCAT44(uStack_c4,local_c8);
  puVar9[5] = CONCAT44(uStack_bc,uStack_c0);
  puVar9[6] = local_b8;
  *(undefined4 *)(puVar9 + 7) = local_b0;
  *(undefined8 *)((longlong)puVar9 + 0x3c) = local_ac;
  *(undefined8 *)((longlong)puVar9 + 0x44) = uStack_a4;
  *(undefined8 *)((longlong)puVar9 + 0x4c) = local_9c;
  *(undefined8 *)((longlong)puVar9 + 0x54) = uStack_94;
  *(undefined4 *)((longlong)puVar9 + 0x5c) = local_8c;
  *(undefined4 *)(puVar9 + 0xc) = local_88;
  *(undefined4 *)((longlong)puVar9 + 100) = local_84;
  puVar9[0xd] = local_80;
  puVar9[0xe] = local_78;
  puVar9[0xf] = uStack_70;
  puVar9[0x10] = local_68;
  puVar9[0x11] = uStack_60;
  *(undefined4 *)(puVar9 + 0x12) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar9 + 0x94) = local_58._4_4_;
  *(undefined4 *)(puVar9 + 0x13) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar9 + 0x9c) = uStack_50._4_4_;
  puVar9[0x14] = local_48;
  iVar16 = (int)param_1[0x13];
  *(int *)(param_1 + 0x13) = iVar16 + 1;
  if (*(int *)((longlong)param_1 + 0x9c) < iVar16 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x12,iVar16);
  }
  uVar20 = uRam0000000146aef45c;
  puVar7 = (undefined4 *)((longlong)iVar16 * 0x30 + param_1[0x12]);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = uVar20;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  uVar20 = uRam0000000146aef454 & uRam0000000146aef404;
  uVar21 = uRam0000000146aef458 & uRam0000000146aef408;
  uVar22 = uRam0000000146aef45c & uRam0000000146aef40c;
  puVar7[8] = _DAT_146aef450 & _DAT_146aef400;
  puVar7[9] = uVar20;
  puVar7[10] = uVar21;
  puVar7[0xb] = uVar22;
  param_1[0xda] = 0x3f800000;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x6ec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0;
  param_1[0xdf] = 0x3f800000;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70c) = 0x3f800000;
  if (((local_1f8[0] == '\0') && (DAT_146b17150 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar5 != '\0')) {
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = -1;
    uVar10 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
    local_218 = (undefined8 *)((ulonglong)local_218 & 0xffffffff00000000);
    FUN_1417a5560(uVar10,&local_1d8,1,0x10);
    uVar14 = local_1d0 & 0xffffffff;
    do {
      local_1c8 = local_1c8 + 1;
      if ((int)local_1d0 <= local_1c8) break;
    } while (*(longlong *)(local_1d8 + (longlong)local_1c8 * 8) == 0);
    do {
      if ((local_1c8 < 0) || ((int)uVar14 <= local_1c8)) goto LAB_1422d099b;
      local_218 = (undefined8 *)((ulonglong)local_218 & 0xffffffffffffff00);
      (**(code **)(*param_1 + 0x30))
                (param_1,*(undefined8 *)(local_1d8 + (longlong)local_1c8 * 8),0,1);
      uVar14 = local_1d0 & 0xffffffff;
      do {
        local_1c8 = local_1c8 + 1;
        if ((int)local_1d0 <= local_1c8) break;
      } while (*(longlong *)(local_1d8 + (longlong)local_1c8 * 8) == 0);
    } while( true );
  }
LAB_1422d09af:
  *(byte *)((longlong)param_1 + 0x35a) = *(byte *)((longlong)param_1 + 0x35a) | 1;
  uVar10 = 1;
LAB_1422d09b8:
  if (local_190[0] != 0) {
    FMemory::Free();
  }
  return uVar10;
}



// FUNCTION 1422d0a10 InitCommon body=13 status=ok
// SIG undefined InitCommon(void)

void FSoundSource::InitCommon(longlong param_1)

{
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xf9;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 1422d0a20 FUN_1422d0a20 body=636 status=ok
// SIG undefined FUN_1422d0a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422d0a20(longlong param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined **local_70;
  longlong local_68;
  int local_60;
  undefined ***local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_68 = *(longlong *)(param_1 + 0x50);
  if (local_68 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 8) == 4) {
      iVar1 = DAT_1464c9c14;
    }
    if (1 < iVar1) {
      local_a8 = *(int *)(param_1 + 0x44);
      local_70 = &PTR_FUN_1445109b8;
      local_48 = 1;
      local_44 = _DAT_1468b5d78;
      uStack_40 = uRam00000001468b5d7c;
      uStack_3c = uRam00000001468b5d80;
      uStack_38 = uRam00000001468b5d84;
      if (*(int *)(param_1 + 0x30) == 1) {
        local_80 = &local_58;
        local_88 = 8;
        local_90 = 1;
        local_50 = 0;
        local_34 = 0;
        local_60 = *(int *)(param_1 + 0x40) * local_a8 * 4;
        local_58 = &local_70;
        local_30 = 0;
        local_28 = 0;
        local_20 = 0;
        local_98 = 1;
        local_a0 = CONCAT31(local_a0._1_3_,2);
        (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,&local_78,&DAT_146ab6e78);
        TRefCountPtr<FRHITexture>::operator=(param_1 + 0x38,local_78);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_78);
        pwVar2 = L"E_Irradiance";
      }
      else {
        local_60 = *(int *)(param_1 + 0x40) * local_a8;
        if (*(int *)(param_1 + 0x30) == 2) {
          local_a0 = *(int *)(param_1 + 0x48);
          local_80 = &local_58;
          local_88 = 8;
          local_90 = 1;
          local_50 = 0;
          local_34 = 0;
          local_60 = local_60 * local_a0 * 8;
          local_58 = &local_70;
          local_30 = 0;
          local_28 = 0;
          local_20 = 0;
          local_98 = CONCAT31(local_98._1_3_,10);
          (**(code **)(*DAT_146ab6358 + 0x5f8))(DAT_146ab6358,&local_78,&DAT_146ab6e78);
          TRefCountPtr<FRHITexture>::operator=(param_1 + 0x38,local_78);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_78);
          pwVar2 = L"E_Inscatter";
        }
        else {
          local_60 = local_60 * 4;
          local_80 = &local_58;
          local_58 = &local_70;
          local_88 = 8;
          local_90 = 1;
          local_50 = 0;
          local_34 = 0;
          local_30 = 0;
          local_28 = 0;
          local_20 = 0;
          local_98 = 1;
          local_a0 = CONCAT31(local_a0._1_3_,2);
          (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,&local_78,&DAT_146ab6e78);
          TRefCountPtr<FRHITexture>::operator=(param_1 + 0x38,local_78);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_78);
          pwVar2 = L"E_Transmittance";
        }
      }
      (**(code **)(*DAT_146ab6358 + 0x300))(DAT_146ab6358,*(undefined8 *)(param_1 + 0x38),pwVar2);
      FMemory::Free(*(undefined8 *)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  return;
}



// FUNCTION 1422d0ca0 FUN_1422d0ca0 body=323 status=ok
// SIG undefined FUN_1422d0ca0(void)

void FUN_1422d0ca0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*DAT_146aef420 != 0) && (1 < *(uint *)(param_1 + 0x340))) {
    iVar1 = IStreamingManager::GetNumWantingResourcesID(param_1 + 0x360);
    uVar4 = 0;
    if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x348) == 0)) {
      lVar2 = operator_new(0x58);
      uVar3 = uVar4;
      if (lVar2 != 0) {
        uVar3 = FUN_1422bc4d0(lVar2,param_1 + 0x304,param_1 + 0x360,0);
      }
      *(undefined8 *)(param_1 + 0x348) = uVar3;
      FUN_141edf270(uVar3);
    }
    iVar1 = IStreamingManager::GetNumWantingResourcesID(param_1 + 0x3d0);
    if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x350) == 0)) {
      lVar2 = operator_new(0x58);
      uVar3 = uVar4;
      if (lVar2 != 0) {
        uVar3 = FUN_1422bc4d0(lVar2,param_1 + 0x304,param_1 + 0x3d0,1);
      }
      *(undefined8 *)(param_1 + 0x350) = uVar3;
      FUN_141edf270(uVar3);
    }
    iVar1 = IStreamingManager::GetNumWantingResourcesID(param_1 + 0x440);
    if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x358) == 0)) {
      lVar2 = operator_new(0x58);
      if (lVar2 != 0) {
        uVar4 = FUN_1422bc4d0(lVar2,param_1 + 0x304,param_1 + 0x440,2);
      }
      *(undefined8 *)(param_1 + 0x358) = uVar4;
      FUN_141edf270(uVar4);
    }
  }
  return;
}



// FUNCTION 1422d0df0 InitSoundSources body=257 status=ok
// SIG undefined InitSoundSources(void)

void FAudioDevice::InitSoundSources(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  if ((int)param_1[0x2a] == 0) {
    iVar3 = 0;
    iVar4 = (int)param_1[1] + *(int *)((longlong)param_1 + 0xc);
    if (0 < iVar4) {
      do {
        plVar2 = (longlong *)(**(code **)(*param_1 + 0x128))(param_1);
        (**(code **)(*plVar2 + 0x60))(plVar2,iVar3);
        iVar1 = (int)param_1[0x2a];
        *(int *)(param_1 + 0x2a) = iVar1 + 1;
        if (*(int *)((longlong)param_1 + 0x154) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x29,iVar1);
        }
        *(longlong **)(param_1[0x29] + (longlong)iVar1 * 8) = plVar2;
        iVar1 = (int)param_1[0x2c];
        *(int *)(param_1 + 0x2c) = iVar1 + 1;
        if (*(int *)((longlong)param_1 + 0x164) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x2b,iVar1);
        }
        iVar3 = iVar3 + 1;
        *(longlong **)(param_1[0x2b] + (longlong)iVar1 * 8) = plVar2;
      } while (iVar3 < iVar4);
    }
  }
  return;
}



// FUNCTION 1422d0f00 FUN_1422d0f00 body=71 status=ok
// SIG undefined FUN_1422d0f00(void)

void FUN_1422d0f00(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x370);
  uVar3 = 0;
  uVar4 = (longlong)*(int *)(param_1 + 0x378) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x378) < plVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      lVar1 = *plVar2;
      plVar2 = plVar2 + 1;
      uVar3 = uVar3 + 1;
      *(byte *)(lVar1 + 0x9a) = *(byte *)(lVar1 + 0x9a) & 0xdf;
    } while (uVar3 != uVar4);
  }
  return;
}



// FUNCTION 1422d0f50 IsAssetDataBlueprintOfClassSet body=411 status=ok
// SIG undefined IsAssetDataBlueprintOfClassSet(void)

undefined8
UAssetManager::IsAssetDataBlueprintOfClassSet
          (undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong local_res20;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  local_38 = 0;
  local_30 = 0;
  FUN_1421b9bc0(param_2,DAT_1469e68d8,&local_38);
  if (1 < (int)local_30) {
    FPackageName::ExportTextPathToObjectPath(local_18,&local_38);
    puVar3 = (undefined8 *)FUN_1417005b0(&local_28,local_18);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar3;
    }
    FName::FName(&local_res20,puVar5,1);
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_28 = (longlong *)0x0;
    local_20 = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_28,0);
    *local_28 = local_res20;
    if (local_28 != local_28 + (int)local_20) {
      plVar7 = local_28;
      do {
        lVar1 = *plVar7;
        if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
          plVar4 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar4 = param_3 + 7;
          }
          iVar2 = *(int *)((longlong)plVar4 +
                          ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                          (longlong)(int)param_3[9] - 1U) * 4);
          if (iVar2 != -1) {
            do {
              if (*(longlong *)(*param_3 + (longlong)iVar2 * 0x10) == lVar1) {
                if (iVar2 != -1) {
                  if (local_28 != (longlong *)0x0) {
                    FMemory::Free(local_28);
                  }
                  if (local_18[0] != 0) {
                    FMemory::Free();
                  }
                  uVar6 = 1;
                  goto LAB_1422d10a4;
                }
                break;
              }
              iVar2 = *(int *)(*param_3 + 8 + (longlong)iVar2 * 0x10);
            } while (iVar2 != -1);
          }
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != local_28 + (int)local_20);
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  uVar6 = 0;
LAB_1422d10a4:
  if (local_38 != 0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 1422d10f0 IsAudioDeviceMuted body=59 status=ok
// SIG undefined IsAudioDeviceMuted(void)

ulonglong FAudioDevice::IsAudioDeviceMuted(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1428742d0(DAT_146b17150);
  if ((uVar1 != 0) && (*(char *)(uVar1 + 0x108) != '\0')) {
    return uVar1 & 0xffffffffffffff00;
  }
  return (ulonglong)(*(byte *)(param_1 + 0x359) >> 7);
}



// FUNCTION 1422d1130 IsHRTFEnabledForAll body=72 status=ok
// SIG undefined IsHRTFEnabledForAll(void)

bool FAudioDevice::IsHRTFEnabledForAll(longlong param_1)

{
  char cVar1;
  
  cVar1 = IsInAudioThread();
  if (cVar1 != '\0') {
    return (*(byte *)(param_1 + 0x359) & 0x44) == 0x44;
  }
  if (((*(byte *)(param_1 + 0x358) & 1) != 0) && ((*(byte *)(param_1 + 0x359) & 4) != 0)) {
    return true;
  }
  return false;
}



// FUNCTION 1422d1180 FUN_1422d1180 body=241 status=ok
// SIG undefined FUN_1422d1180(void)

undefined8 FUN_1422d1180(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x3d0);
  if (lVar3 == 0) {
    plVar2 = (longlong *)UAssetManagerSettings::GetPrivateStaticClass();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    *(longlong *)(param_1 + 0x3d0) = lVar3;
    if (lVar3 == 0) {
      plVar2 = (longlong *)UAssetManagerSettings::GetPrivateStaticClass();
      lVar3 = plVar2[0x1f];
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
        lVar3 = plVar2[0x1f];
      }
      *(longlong *)(param_1 + 0x3d0) = lVar3;
    }
  }
  puVar5 = *(undefined8 **)(lVar3 + 0x48);
  puVar6 = puVar5 + (longlong)*(int *)(lVar3 + 0x50) * 2;
  while( true ) {
    if (puVar5 == puVar6) {
      return 0;
    }
    if (*(int *)(puVar5 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar5;
    }
    iVar1 = FUN_141592950(param_2,puVar4,1,0,0xffffffff);
    if (iVar1 != -1) break;
    puVar5 = puVar5 + 2;
  }
  return 1;
}



// FUNCTION 1422d1280 IsStreaming body=35 status=ok
// SIG undefined IsStreaming(void)

undefined1 FWaveInstance::IsStreaming(longlong *param_1)

{
  char cVar1;
  
  if (*param_1 != 0) {
    cVar1 = USoundWave::IsStreaming();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1422d12b0 FUN_1422d12b0 body=660 status=ok
// SIG undefined FUN_1422d12b0(void)

longlong *
FUN_1422d12b0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar7;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38;
  longlong lStack_30;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  local_90 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98 = 0;
  local_8c = 0;
  local_88 = 0;
  local_80 = 0;
  if (*(char *)((longlong)param_1 + 0x274) != '\0') {
    (**(code **)(*param_1 + 0x378))(param_1,param_3,&local_98,&local_88);
    if (0 < (int)local_80) {
      *param_2 = 0;
      param_2[1] = 0;
      goto LAB_1422d14f7;
    }
  }
  iVar2 = local_90;
  if ((*(char *)((longlong)param_1 + 0x272) == '\0') || (local_90 != 0)) {
    local_78 = 0;
    local_70 = 0;
    if ((param_4 != &local_78) &&
       (((int)param_4[1] != 0 && (plVar4 = (longlong *)*param_4, plVar4 != (longlong *)0x0)))) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_78);
    }
    plVar4 = (longlong *)
             FUN_142840b00(param_1 + 0x2f,local_48,param_3,&local_78,CONCAT44(uVar7,param_5),0,
                           0 < iVar2,param_6);
    lVar5 = 0;
    lVar6 = 0;
    if (&local_a8 != plVar4) {
      local_a8 = *plVar4;
      *plVar4 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&lStack_a0,plVar4 + 1);
      lVar5 = local_a8;
      lVar6 = lStack_a0;
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      lVar5 = local_a8;
      lVar6 = lStack_a0;
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar5 = local_a8;
        lVar6 = lStack_a0;
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
          lVar5 = local_a8;
          lVar6 = lStack_a0;
        }
      }
    }
    if ((0 < local_90) && (local_a8 = lVar5, lVar5 != 0)) {
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      local_68 = 0;
      local_60 = 0;
      lStack_a0 = lVar6;
      local_38 = lVar5;
      lStack_30 = lVar6;
      (**(code **)(*param_1 + 0x470))(param_1,&local_98,&local_68,0,&local_38);
    }
  }
  else {
    plVar4 = (longlong *)
             FStreamableManager::RequestSyncLoad(param_1 + 0x2f,local_58,param_3,0,param_6);
    if (&local_a8 != plVar4) {
      local_a8 = *plVar4;
      *plVar4 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&lStack_a0,plVar4 + 1);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  *param_2 = local_a8;
  param_2[1] = lStack_a0;
LAB_1422d14f7:
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return param_2;
}



// FUNCTION 1422d1550 FUN_1422d1550 body=236 status=ok
// SIG undefined FUN_1422d1550(void)

undefined8
FUN_1422d1550(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             longlong *param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined4 *local_38;
  undefined4 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_28 = 0;
  local_20 = 0;
  if (((param_5 != &local_28) && ((int)param_5[1] != 0)) &&
     (plVar1 = (longlong *)*param_5, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_28);
  }
  local_38 = (undefined4 *)0x0;
  local_30 = 1;
  TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_38,1);
  *local_38 = local_18;
  local_38[1] = uStack_14;
  local_38[2] = uStack_10;
  local_38[3] = uStack_c;
  (**(code **)(*param_1 + 0x318))(param_1,param_2,&local_38,param_4,&local_28,param_6);
  if (local_38 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return param_2;
}



// FUNCTION 1422d1640 FUN_1422d1640 body=208 status=ok
// SIG undefined FUN_1422d1640(void)

undefined8
FUN_1422d1640(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong local_38;
  undefined4 local_30;
  longlong local_28 [2];
  
  local_38 = 0;
  local_30 = 0;
  if (((param_5 != &local_38) && ((int)param_5[1] != 0)) &&
     (plVar1 = (longlong *)*param_5, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_38);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  (**(code **)(*param_1 + 0x348))(param_1,param_2,param_3,param_4,local_28,1,&local_38,param_6);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return param_2;
}



// FUNCTION 1422d1710 FUN_1422d1710 body=206 status=ok
// SIG undefined FUN_1422d1710(void)

undefined8
FUN_1422d1710(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong local_28 [3];
  undefined4 local_10;
  
  local_28[0] = 0;
  local_28[1] = 0;
  (**(code **)(*param_1 + 0x300))(param_1,param_3,local_28);
  local_28[2] = 0;
  local_10 = 0;
  if (((param_5 != local_28 + 2) && ((int)param_5[1] != 0)) &&
     (plVar1 = (longlong *)*param_5, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,local_28 + 2);
  }
  (**(code **)(*param_1 + 0x318))(param_1,param_2,local_28,param_4,local_28 + 2,param_6);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return param_2;
}



// FUNCTION 1422d17e0 FUN_1422d17e0 body=502 status=ok
// SIG undefined FUN_1422d17e0(void)

void FUN_1422d17e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_48;
  longlong local_40;
  
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 800);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x2d0);
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x280);
  lVar3 = *(longlong *)(param_1 + 0x3d0);
  if (lVar3 == 0) {
    plVar1 = (longlong *)UAssetManagerSettings::GetPrivateStaticClass();
    lVar3 = plVar1[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar3 = plVar1[0x1f];
    }
    *(longlong *)(param_1 + 0x3d0) = lVar3;
  }
  puVar6 = *(undefined8 **)(lVar3 + 0x80);
  puVar8 = puVar6 + (longlong)*(int *)(lVar3 + 0x88) * 4;
  for (; puVar6 != puVar8; puVar6 = puVar6 + 4) {
    if (*(int *)(puVar6 + 3) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)puVar6[2];
    }
    if (*(int *)(puVar6 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar6;
    }
    lVar2 = FName::FName(local_res10,puVar4,1);
    local_48 = FName::FName(local_res18,puVar5,1);
    local_40 = lVar2;
    TSet<TTuple<FName,FPtr>,TDefaultMapHashableKeyFuncs<FName,FPtr,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FPtr_const_&>_>(param_1 + 0x280,local_res8,&local_48,0);
  }
  lVar2 = *(longlong *)(lVar3 + 0x70);
  lVar7 = (longlong)*(int *)(lVar3 + 0x78) * 0x20 + lVar2;
  for (; lVar2 != lVar7; lVar2 = lVar2 + 0x20) {
    local_40 = lVar2 + 0x10;
    local_48 = lVar2;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              (param_1 + 0x2d0,local_res8,&local_48,0);
  }
  puVar6 = *(undefined8 **)(lVar3 + 0x90);
  puVar8 = puVar6 + (longlong)*(int *)(lVar3 + 0x98) * 4;
  for (; puVar6 != puVar8; puVar6 = puVar6 + 4) {
    if (*(int *)(puVar6 + 3) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)puVar6[2];
    }
    if (*(int *)(puVar6 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar6;
    }
    lVar3 = FName::FName(local_res10,puVar4,1);
    local_48 = FName::FName(local_res18,puVar5,1);
    local_40 = lVar3;
    TSet<TTuple<FName,FPtr>,TDefaultMapHashableKeyFuncs<FName,FPtr,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FPtr_const_&>_>(param_1 + 800,local_res8,&local_48,0);
  }
  return;
}



// FUNCTION 1422d19e0 LocationIsAudible body=143 status=ok
// SIG undefined LocationIsAudible(void)

bool FAudioDevice::LocationIsAudible(longlong param_1,float *param_2,longlong param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float local_18;
  
  if (2097152.0 <= param_4) {
    return true;
  }
  if (*(char *)(param_1 + 0x144) == '\0') {
    local_18 = *(float *)(param_3 + 0x10);
    fVar1 = *(float *)(param_3 + 0x14);
    fVar2 = *(float *)(param_3 + 0x18);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x140);
    fVar1 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x138) >> 0x20);
    local_18 = (float)*(undefined8 *)(param_1 + 0x138);
  }
  return (fVar1 - param_2[1]) * (fVar1 - param_2[1]) + (local_18 - *param_2) * (local_18 - *param_2)
         + (fVar2 - param_2[2]) * (fVar2 - param_2[2]) < param_4 * param_4;
}



// FUNCTION 1422d1a70 FUN_1422d1a70 body=255 status=ok
// SIG undefined FUN_1422d1a70(void)

undefined1 FUN_1422d1a70(longlong param_1,undefined8 param_2,float param_3)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (2097152.0 <= param_3) {
LAB_1422d1b53:
    uVar3 = 1;
  }
  else {
    cVar1 = IsInAudioThread();
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      GetCurrentThreadId();
    }
    if (cVar1 == '\0') {
      lVar4 = *(longlong *)(param_1 + 0x90);
      lVar5 = (longlong)*(int *)(param_1 + 0x98) * 0x30 + lVar4;
      for (; lVar4 != lVar5; lVar4 = lVar4 + 0x30) {
        cVar1 = FAudioDevice::LocationIsAudible(param_1,param_2,lVar4,param_3);
        if (cVar1 != '\0') goto LAB_1422d1b53;
      }
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x128);
      lVar5 = (longlong)*(int *)(param_1 + 0x130) * 0xb0 + lVar4;
      if (lVar4 != lVar5) {
        while (cVar1 = FAudioDevice::LocationIsAudible(param_1,param_2,lVar4,param_3), cVar1 == '\0'
              ) {
          lVar4 = lVar4 + 0xb0;
          if (lVar4 == lVar5) {
            return 0;
          }
        }
        goto LAB_1422d1b53;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1422d1b70 FUN_1422d1b70 body=129 status=ok
// SIG undefined FUN_1422d1b70(void)

void FUN_1422d1b70(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(uint *)(param_1 + 0xa4) & 0x10) == 0) {
    *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 0x18;
    iVar3 = *(int *)(param_1 + 0x58) + -1;
    lVar4 = (longlong)iVar3;
    if (-1 < iVar3) {
      lVar5 = lVar4 << 4;
      do {
        plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x50));
        if (((plVar1 != (longlong *)0x0) &&
            (cVar2 = (**(code **)(*plVar1 + 0x278))(plVar1,param_1), cVar2 != '\0')) &&
           (param_2 == '\0')) {
          return;
        }
        lVar5 = lVar5 + -0x10;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
  }
  return;
}



// FUNCTION 1422d1c00 FUN_1422d1c00 body=376 status=ok
// SIG undefined FUN_1422d1c00(void)

void FUN_1422d1c00(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 local_res8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  puVar2 = (undefined8 *)param_1[2];
  lVar1 = *(longlong *)(puVar2[0xc] + 0x18);
  if (lVar1 != 0) {
    local_78 = (undefined4)lVar1;
    uStack_74 = (undefined4)((ulonglong)lVar1 >> 0x20);
    uStack_70 = (undefined4)*puVar2;
    uStack_6c = (undefined4)((ulonglong)*puVar2 >> 0x20);
    if ((*(byte *)(puVar2[0xc] + 0x9b) & 1) != 0) {
      uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
      local_28 = 0;
      local_18 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 1) = local_78;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_74;
        *(undefined4 *)(puVar2 + 2) = uStack_70;
        *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
        *puVar2 = &PTR_FUN_143f4d0b0;
        puVar2[3] = CONCAT44(uStack_64,uVar3);
      }
      local_58[0] = &LAB_1422c2b60;
      FUN_1422f8d80(local_58,local_res8);
      puVar2 = (undefined8 *)param_1[2];
    }
    if ((*(byte *)(puVar2[0xc] + 0x9b) & 2) != 0) {
      uVar3 = (**(code **)(*param_1 + 0x70))(param_1);
      local_28 = 0;
      local_18 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 1) = local_78;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_74;
        *(undefined4 *)(puVar2 + 2) = uStack_70;
        *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
        *puVar2 = &PTR_FUN_143f4d0b0;
        puVar2[3] = CONCAT44(uStack_64,uVar3);
      }
      local_58[0] = &LAB_1422c2c80;
      FUN_1422f8d80(local_58,local_res8);
      puVar2 = (undefined8 *)param_1[2];
    }
    if ((*(byte *)(puVar2[0xc] + 0x9b) & 4) != 0) {
      uVar3 = (**(code **)(*param_1 + 0x70))(param_1);
      *(undefined4 *)(param_1[2] + 0x78) = uVar3;
    }
  }
  return;
}



// FUNCTION 1422d1d80 FUN_1422d1d80 body=337 status=ok
// SIG undefined FUN_1422d1d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422d1d80(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar6 = FUN_1422cbd90(param_1,param_2,1);
  if ((lVar6 != 0) && (lVar4 = *(longlong *)(lVar6 + 0x50), lVar4 == *param_3)) {
    plVar5 = *(longlong **)(lVar6 + 0x58);
    plVar1 = (longlong *)(lVar6 + 0x30);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_68 = lVar4;
    plStack_60 = plVar5;
    if (&local_68 != plVar1) {
      local_68 = *plVar1;
      plStack_60 = *(longlong **)(lVar6 + 0x38);
      *plVar1 = lVar4;
      *(longlong **)(lVar6 + 0x38) = plVar5;
      local_58 = lVar4;
      plStack_50 = plVar5;
    }
    plVar1 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_60 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
    TArray<FName,FDefaultAllocator>::operator=(lVar6 + 0x40,lVar6 + 0x60);
    TBaseDelegate<void>::ExecuteIfBound(param_4);
    FUN_1422d6620(lVar6 + 0x50,0);
  }
  plVar1 = (longlong *)param_3[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar1 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return;
}



// FUNCTION 1422d1ee0 FUN_1422d1ee0 body=922 status=ok
// SIG undefined FUN_1422d1ee0(void)

void FUN_1422d1ee0(longlong param_1,int param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  byte bVar11;
  longlong lVar12;
  void **ppvVar13;
  int iVar14;
  void *pvVar15;
  byte local_res20;
  int local_c8;
  longlong local_c0;
  void *local_b0;
  undefined8 local_a8;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  int *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  int local_60;
  longlong *local_58;
  
  local_58 = (longlong *)FWindowsPlatformMisc::GetPlatformChunkInstall();
  local_c8 = 0;
  if (0 < *(int *)(param_1 + 600)) {
    plVar3 = (longlong *)(param_1 + 0x250);
    local_c0 = 0;
    do {
      puVar10 = (undefined8 *)(*plVar3 + local_c0);
      local_98 = (void *)0x0;
      local_90 = *(int *)(puVar10 + 1);
      lVar12 = (longlong)local_90;
      pvVar15 = (void *)*puVar10;
      if (local_90 == 0) {
        local_8c = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
        _guard_xfg_dispatch_icall_nop(local_98,pvVar15,lVar12 << 2);
      }
      local_88 = (int *)0x0;
      local_80 = *(int *)(puVar10 + 3);
      lVar12 = (longlong)local_80;
      pvVar15 = (void *)puVar10[2];
      if (local_80 == 0) {
        local_7c = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
        _guard_xfg_dispatch_icall_nop(local_88,pvVar15,lVar12 << 2);
      }
      local_78 = puVar10[4];
      local_70 = (longlong *)puVar10[5];
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      local_68 = (longlong *)0x0;
      local_60 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_68,puVar10 + 6);
      piVar2 = local_88 + local_80;
      piVar7 = local_88;
      if (local_88 != piVar2) {
LAB_1422d2011:
        if (*piVar7 != param_2) goto code_r0x0001422d2016;
        pvVar15 = (void *)0x0;
        bVar11 = param_3 ^ 1;
        local_b0 = (void *)0x0;
        iVar9 = 0;
        iVar14 = 0;
        local_a8 = 0;
        local_res20 = bVar11;
        for (piVar7 = local_88; piVar7 != piVar2; piVar7 = piVar7 + 1) {
          iVar4 = *piVar7;
          iVar6 = (**(code **)(*local_58 + 8))(local_58,iVar4);
          if (iVar6 == 0) {
            bVar11 = 1;
            local_res20 = 1;
          }
          else if (iVar6 == 1) {
            iVar6 = iVar9 + 1;
            local_a8 = CONCAT44(local_a8._4_4_,iVar6);
            if (iVar14 < iVar6) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_b0,iVar9);
              pvVar15 = local_b0;
              iVar14 = local_a8._4_4_;
              iVar6 = (int)local_a8;
            }
            *(int *)((longlong)pvVar15 + (longlong)iVar9 * 4) = iVar4;
            bVar11 = local_res20;
            iVar9 = iVar6;
          }
        }
        if (bVar11 == 0) {
          if (iVar9 == 0) {
            FUN_1422d64b0(plVar3,local_c8,1,1);
            local_c8 = local_c8 + -1;
            local_c0 = local_c0 + -0x40;
            if (local_78 != 0) {
              FStreamableHandle::StartStalledHandle();
            }
            if (((local_60 != 0) && (local_68 != (longlong *)0x0)) &&
               (cVar5 = (**(code **)(*local_68 + 0x18))(), cVar5 != '\0')) {
              plVar8 = (longlong *)0x0;
              if (local_60 != 0) {
                plVar8 = local_68;
              }
              (**(code **)(*plVar8 + 0x40))(plVar8,1);
            }
          }
          else {
            ppvVar13 = (void **)(local_c0 + 0x10 + *plVar3);
            if (ppvVar13 != &local_b0) {
              *(int *)(ppvVar13 + 1) = iVar9;
              TArray<int,FDefaultAllocator>::ResizeForCopy
                        (ppvVar13,iVar9,*(undefined4 *)((longlong)ppvVar13 + 0xc));
              _guard_xfg_dispatch_icall_nop(*ppvVar13,pvVar15,(longlong)iVar9 << 2);
            }
          }
        }
        else {
          FUN_1422d64b0(plVar3,local_c8,1,1);
          local_c8 = local_c8 + -1;
          local_c0 = local_c0 + -0x40;
          if (local_78 != 0) {
            FUN_142833de0();
          }
          if (((local_60 != 0) && (local_68 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*local_68 + 0x18))(), cVar5 != '\0')) {
            plVar8 = (longlong *)0x0;
            if (local_60 != 0) {
              plVar8 = local_68;
            }
            (**(code **)(*plVar8 + 0x40))(plVar8,0);
          }
        }
        if (pvVar15 != (void *)0x0) {
          FMemory::Free(pvVar15);
        }
      }
LAB_1422d21c6:
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
      plVar8 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (local_88 != (int *)0x0) {
        FMemory::Free();
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free();
      }
      local_c8 = local_c8 + 1;
      local_c0 = local_c0 + 0x40;
    } while (local_c8 < *(int *)(param_1 + 600));
  }
  return;
code_r0x0001422d2016:
  piVar7 = piVar7 + 1;
  if (piVar7 == piVar2) goto LAB_1422d21c6;
  goto LAB_1422d2011;
}



// FUNCTION 1422d2280 ParseSoundClasses body=810 status=ok
// SIG undefined ParseSoundClasses(void)

void FAudioDevice::ParseSoundClasses(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint *puVar12;
  int local_res8 [2];
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  uint local_60;
  uint local_5c;
  longlong *local_58;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  plVar10 = (longlong *)0x0;
  plVar1 = (longlong *)(param_1 + 0x1b8);
  local_68 = (longlong *)0x0;
  iVar9 = *(int *)(param_1 + 0x1e0);
  puStack_48 = (uint *)(param_1 + 0x1c8);
  local_5c = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  if (iVar9 != 0) {
    puVar12 = *(uint **)(param_1 + 0x1d8);
    if (*(uint **)(param_1 + 0x1d8) == (uint *)0x0) {
      puVar12 = puStack_48;
    }
    uVar5 = *puVar12;
    plVar6 = plVar10;
    plVar11 = plVar10;
    while (uVar5 == 0) {
      iVar4 = (int)plVar11;
      uStack_90 = (int)plVar6 + 0x20;
      plVar6 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar11 = (longlong *)(ulonglong)local_a8;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1422d235d;
      uVar5 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = -uVar5 & uVar5;
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
    local_98._4_4_ = (uStack_90 - iVar4) + 0x1f;
    if (iVar9 < local_98._4_4_) {
LAB_1422d235d:
      local_98._4_4_ = iVar9;
    }
  }
  auStack_40._4_4_ = local_98._4_4_;
  auStack_40._0_4_ = 0xffffffff;
  auStack_40._8_4_ = uStack_90;
  auStack_40._12_4_ = iStack_8c;
  uStack_50 = local_a8;
  uStack_4c = uStack_a4;
  local_70 = 0;
  local_30._0_4_ = SUB84(plVar1,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_90 = 0xffffffff;
  iStack_8c = local_98._4_4_;
  uStack_a0 = local_a8;
  uStack_9c = uStack_a4;
  local_88._8_4_ = (undefined4)local_30;
  local_88._0_8_ = auStack_40._8_8_;
  local_88._12_4_ = local_30._4_4_;
  bVar3 = local_98._4_4_ < *(int *)(param_1 + 0x1e0);
  plVar6 = plVar10;
  plVar11 = plVar10;
  local_78 = plVar1;
  local_58 = plVar1;
  local_30 = plVar1;
  local_98 = puStack_48;
  if (bVar3) {
    do {
      lVar8 = (longlong)iStack_8c * 0x40;
      lVar2 = *plVar1;
      lVar7 = *(longlong *)(lVar8 + lVar2);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar8 + 8 + lVar2) = *(undefined4 *)(lVar7 + 0x28);
        *(undefined4 *)(lVar8 + 0xc + lVar2) = *(undefined4 *)(lVar7 + 0x2c);
        *(undefined4 *)(lVar8 + 0x10 + lVar2) = *(undefined4 *)(lVar7 + 0x30);
        *(undefined4 *)(lVar8 + 0x14 + lVar2) = *(undefined4 *)(lVar7 + 0x34);
        *(undefined4 *)(lVar8 + 0x18 + lVar2) = *(undefined4 *)(lVar7 + 0x38);
        *(undefined4 *)(lVar8 + 0x1c + lVar2) = *(undefined4 *)(lVar7 + 0x3c);
        *(undefined4 *)(lVar8 + 0x20 + lVar2) = *(undefined4 *)(lVar7 + 0x40);
        puVar12 = (uint *)(lVar8 + 0x24 + lVar2);
        *puVar12 = *puVar12 ^ (*(uint *)(lVar8 + 0x24 + lVar2) ^ *(uint *)(lVar7 + 0x44)) & 1;
        uVar5 = (*(uint *)(lVar8 + 0x24 + lVar2) ^ *(uint *)(lVar7 + 0x44)) & 2 ^
                *(uint *)(lVar8 + 0x24 + lVar2);
        *(uint *)(lVar8 + 0x24 + lVar2) = uVar5;
        uVar5 = (*(uint *)(lVar7 + 0x44) ^ uVar5) & 4 ^ uVar5;
        *(uint *)(lVar8 + 0x24 + lVar2) = uVar5;
        uVar5 = (*(uint *)(lVar7 + 0x44) ^ uVar5) & 8 ^ uVar5;
        *(uint *)(lVar8 + 0x24 + lVar2) = uVar5;
        *(uint *)(lVar8 + 0x24 + lVar2) = (*(uint *)(lVar7 + 0x44) ^ uVar5) & 0x10 ^ uVar5;
        *(undefined4 *)(lVar8 + 0x28 + lVar2) = *(undefined4 *)(lVar7 + 0x48);
        puVar12 = (uint *)(lVar8 + 0x2c + lVar2);
        *puVar12 = *puVar12 ^ (*(uint *)(lVar8 + 0x2c + lVar2) ^ *(uint *)(lVar7 + 0x4c)) & 1;
        puVar12 = (uint *)(lVar8 + 0x2c + lVar2);
        *puVar12 = *puVar12 ^ (*(uint *)(lVar8 + 0x2c + lVar2) ^ *(uint *)(lVar7 + 0x4c)) & 2;
        *(undefined1 *)(lVar8 + 0x30 + lVar2) = *(undefined1 *)(lVar7 + 0x50);
        if (*(longlong *)(lVar7 + 0x78) == 0) {
          iVar9 = (int)plVar10;
          local_60 = iVar9 + 1;
          if ((int)plVar6 < (int)local_60) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,plVar10);
            plVar6 = (longlong *)(ulonglong)local_5c;
            plVar11 = local_68;
          }
          plVar10 = (longlong *)(ulonglong)local_60;
          plVar11[iVar9] = lVar7;
        }
      }
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
    } while (iStack_8c < (int)local_98[6]);
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
    if (0 < (int)plVar10) {
      plVar6 = plVar11;
      do {
        lVar2 = *plVar6;
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::FindId(plVar1,local_res8,lVar2);
        lVar7 = 0;
        if (local_res8[0] != -1) {
          lVar7 = (longlong)local_res8[0] * 0x40 + *plVar1;
        }
        lVar8 = lVar7 + 8;
        if (lVar7 == 0) {
          lVar8 = 0;
        }
        if ((lVar2 != 0) && (lVar8 != 0)) {
          FUN_1422d44d0(param_1,lVar2);
        }
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)((longlong)plVar10 + -1);
      } while (plVar10 != (longlong *)0x0);
    }
    if (plVar11 != (longlong *)0x0) {
      FMemory::Free(plVar11);
    }
  }
  return;
}



// FUNCTION 1422d25b0 PauseActiveSound body=42 status=ok
// SIG undefined PauseActiveSound(void)

void FAudioDevice::PauseActiveSound(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1422c86c0();
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x98) = *(byte *)(lVar1 + 0x98) & 0xbf;
    *(byte *)(lVar1 + 0x98) = *(byte *)(lVar1 + 0x98) | param_3 << 6;
  }
  return;
}



// FUNCTION 1422d25e0 FUN_1422d25e0 body=896 status=ok
// SIG undefined FUN_1422d25e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422d25e0(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,float param_6,undefined1 (*param_7) [12],undefined8 param_8,
                  longlong param_9,undefined8 param_10,longlong *param_11,undefined8 param_12)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined4 *puVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_648 [32];
  longlong local_628;
  undefined4 *local_620;
  undefined4 *local_618;
  undefined4 local_608;
  undefined4 local_604;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [80];
  undefined8 local_588;
  byte local_540;
  byte local_53f;
  byte local_53e;
  float local_528;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4b0;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined1 local_498 [16];
  undefined1 local_460 [968];
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_648;
  local_600 = param_8;
  local_5f8 = param_10;
  local_5f0 = param_12;
  if (((param_2 != (longlong *)0x0) && (param_3 != 0)) &&
     ((lVar4 = UWorld::GetActiveLevelCollection(param_3), lVar4 == 0 ||
      (lVar4 = UWorld::GetActiveLevelCollection(param_3), *(char *)(lVar4 + 0x78) != '\0')))) {
    if (param_9 == 0) {
      param_9 = (**(code **)(*param_2 + 0x290))(param_2);
    }
    else {
      param_9 = param_9 + 0x28;
    }
    local_618 = &local_604;
    local_608 = 0;
    local_620 = &local_608;
    local_604 = 0;
    local_628 = param_9;
    FUN_1422cbaa0(param_1,param_2,param_3,param_7);
    cVar3 = USoundBase::IsLooping(param_2);
    uVar2 = local_604;
    uVar1 = local_608;
    if ((cVar3 == '\0') && (cVar3 = USoundBase::IsVirtualizeWhenSilent(param_2), cVar3 == '\0')) {
      local_618 = (undefined4 *)CONCAT44(local_618._4_4_,uVar2);
      local_620 = (undefined4 *)CONCAT44(local_620._4_4_,uVar1);
      local_628 = param_9;
      cVar3 = FUN_1422d9160(param_1,param_2,param_3,param_7);
      if (cVar3 == '\0') {
        return;
      }
    }
    cVar3 = UWorld::IsGameWorld(param_3);
    FUN_14221fee0(local_5d8);
    FActiveSound::SetWorld(local_5d8,param_3);
    FUN_14223f150(local_5d8,param_2);
    local_514 = param_5;
    if (0.0 < param_6) {
      local_528 = param_6;
    }
    else {
      local_528 = 0.0;
    }
    local_53f = local_53f | 0x10;
    local_498._12_4_ = 0;
    local_498._0_12_ = *param_7;
    local_518 = param_4;
    puVar5 = (undefined4 *)FRotator::Quaternion(local_600,local_5e8);
    local_4a8 = *puVar5;
    uStack_4a4 = puVar5[1];
    uStack_4a0 = puVar5[2];
    uStack_49c = puVar5[3];
    local_53e = cVar3 == '\0' | local_53e & 0xfe;
    local_4cc = (**(code **)(*param_2 + 0x2b8))(param_2);
    cVar3 = UWorld::IsGameWorld();
    if (((cVar3 == '\0') && ((*(byte *)(param_1 + 0x368) & 8) == 0)) || (param_9 == 0)) {
      bVar6 = 0;
    }
    else {
      bVar6 = 4;
    }
    local_540 = local_540 & 0xfb | bVar6;
    if (bVar6 != 0) {
      cVar3 = IsInAudioThread();
      lVar4 = 0xf4;
      if (cVar3 != '\0') {
        lVar4 = 0xd4;
      }
      FSoundAttenuationSettings::operator=(local_460,param_9);
      local_4c4 = FSoundAttenuationSettings::GetFocusPriorityScale(param_9,lVar4 + param_1,uVar2);
      local_4c0 = FSoundAttenuationSettings::GetFocusDistanceScale(param_9,lVar4 + param_1,uVar2);
    }
    local_4c8 = *(undefined4 *)((longlong)param_2 + 0x5c);
    local_588 = local_5f8;
    local_4b0 = uVar1;
    FActiveSound::SetOwner(local_5d8,local_5f0);
    if (param_11 != (longlong *)0x0) {
      lVar4 = *param_11;
      lVar7 = (longlong)(int)param_11[1] * 0x20 + lVar4;
      for (; lVar4 != lVar7; lVar4 = lVar4 + 0x20) {
        FActiveSound::SetSoundParameter(local_5d8,lVar4);
      }
    }
    FUN_1422c0900(param_1,local_5d8);
    FActiveSound::~FActiveSound(local_5d8);
  }
  return;
}



// FUNCTION 1422d2960 FUN_1422d2960 body=317 status=ok
// SIG undefined FUN_1422d2960(void)

void FUN_1422d2960(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res10 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined7 uStack_67;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (param_2 != 0) {
    cVar1 = IsInAudioThread();
    if (cVar1 == '\0') {
      local_28 = 0;
      local_18 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        local_78 = (undefined4)param_1;
        uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_70 = (undefined4)param_2;
        uStack_6c = (undefined4)((ulonglong)param_2 >> 0x20);
        *(undefined4 *)(puVar2 + 1) = local_78;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_74;
        *(undefined4 *)(puVar2 + 2) = uStack_70;
        *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
        *puVar2 = &PTR_FUN_143f4d0b0;
        puVar2[3] = CONCAT71(uStack_67,param_3);
      }
      local_58[0] = &LAB_1422c2c60;
      FUN_1422f8a30(local_58,(undefined1)local_res10[0]);
    }
    else {
      TSet<TTuple<FRHIBlendState_*,FBlendStateInitializerRHI>,TDefaultMapHashableKeyFuncs<FRHIBlendState_*,FBlendStateInitializerRHI,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x218,local_res10,param_2);
      lVar3 = 0;
      if (local_res10[0] != -1) {
        lVar3 = (longlong)local_res10[0] * 0x50 + *(longlong *)(param_1 + 0x218);
      }
      lVar4 = lVar3 + 8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      if (lVar4 != 0) {
        if (param_3 == '\0') {
          if (*(int *)(lVar4 + 4) != 0) {
            *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
          }
        }
        else if (*(int *)(lVar4 + 8) != 0) {
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
        }
        FAudioDevice::TryClearingSoundMix(param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 1422d2aa0 FUN_1422d2aa0 body=389 status=ok
// SIG undefined FUN_1422d2aa0(void)

void FUN_1422d2aa0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar4 = param_1[0x7a];
    if (lVar4 == 0) {
      plVar1 = (longlong *)UAssetManagerSettings::GetPrivateStaticClass();
      lVar4 = plVar1[0x1f];
      if (lVar4 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        lVar4 = plVar1[0x1f];
      }
      param_1[0x7a] = lVar4;
    }
    *(undefined1 *)((longlong)param_1 + 0x271) = 0;
    uVar2 = FPlatformFileManager::Get();
    lVar3 = FPlatformFileManager::FindPlatformFile(uVar2,L"PakFile");
    *(bool *)((longlong)param_1 + 0x273) = lVar3 != 0;
    *(undefined1 *)((longlong)param_1 + 0x274) = *(undefined1 *)(lVar4 + 0x6b);
    *(undefined1 *)((longlong)param_1 + 0x272) = DAT_1468b616c;
    if (*(char *)(lVar4 + 0x69) != '\0') {
      plVar1 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar1 == (longlong *)0x0) {
        if ((DAT_1469e9040 != 0) && (DAT_1469e9038 != (longlong *)0x0)) {
          (**(code **)(*DAT_1469e9038 + 0x28))(DAT_1469e9038,0);
          if (DAT_1469e9038 != (longlong *)0x0) {
            DAT_1469e9038 = (longlong *)FMemory::Realloc(DAT_1469e9038,0,0);
          }
          DAT_1469e9040 = 0;
        }
      }
      else {
        *plVar1 = (longlong)&PTR_FUN_14502e108;
        FWeakObjectPtr::operator=(plVar1 + 1,param_1);
        plVar1[2] = (longlong)&LAB_1422bf1b8;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar1[4] = lVar4;
        (**(code **)(*plVar1 + 0x30))(plVar1,&DAT_1469e9038);
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        lVar4 = FMemory::Realloc(plVar1,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
    }
    (**(code **)(*param_1 + 0x430))(param_1);
  }
  return;
}



// FUNCTION 1422d2c30 FUN_1422d2c30 body=27 status=ok
// SIG undefined FUN_1422d2c30(void)

void FUN_1422d2c30(undefined8 param_1)

{
  FUN_142394530();
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 1422d2c50 PostLoad body=50 status=ok
// SIG undefined PostLoad(void)

void UVectorFieldStatic::PostLoad(undefined8 param_1)

{
  char cVar1;
  
  FUN_142349c80();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    FUN_1422d0ca0(param_1);
    return;
  }
  return;
}



// FUNCTION 1422d2c90 thunk_FUN_1423424e0 body=5 status=ok
// SIG undefined thunk_FUN_1423424e0(void)

void thunk_FUN_1423424e0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  BOOL BVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  bVar1 = *(byte *)(param_1 + 0x17);
  if (((bVar1 & 1) != 0) && ((bVar1 & 2) != 0)) {
    if (((bVar1 & 0x40) != 0) && (lVar6 = FUN_14046f570(), lVar6 != 0)) {
      return;
    }
    *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 0x40;
    if ((*(byte *)((longlong)param_1 + 0xb9) & 0x40) == 0) {
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
      }
      lVar6 = FUN_14046f570(param_1);
      if (lVar6 == 0) {
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        if (iVar2 < (int)DAT_1469e91c4) {
          uVar7 = iVar2 >> 0x1f & 0xffff;
          uVar5 = iVar2 + uVar7;
          lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                  (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) {
          FUN_14233a2e0(param_1);
        }
      }
      else {
        uVar3 = (**(code **)(*param_1 + 0x388))(param_1);
        FUN_14254b910(lVar6,param_1,uVar3);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
    }
  }
  return;
}



// FUNCTION 1422d2ca0 FUN_1422d2ca0 body=1345 status=ok
// SIG undefined FUN_1422d2ca0(void)

void FUN_1422d2ca0(longlong *param_1,longlong *param_2,char param_3,char param_4,char param_5)

{
  byte *pbVar1;
  float fVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  byte bVar12;
  bool bVar13;
  longlong *local_res10;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  longlong local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  code *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  pbVar1 = (byte *)((longlong)param_2 + 0xb1);
  if (*pbVar1 == 0) {
    if (param_5 == '\0') goto LAB_1422d2d0b;
  }
  else if (param_5 == '\0') {
    return;
  }
  LOCK();
  *(undefined4 *)(param_2 + 0x17) = 0;
  UNLOCK();
LAB_1422d2d0b:
  local_res10 = param_2;
  if (param_3 == '\0') {
    LOCK();
    bVar13 = (int)param_2[0x17] == 0;
    if (bVar13) {
      *(int *)(param_2 + 0x17) = 0;
    }
    UNLOCK();
    if (bVar13) {
      cVar6 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar6 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)) {
        LOCK();
        *(undefined4 *)(param_2 + 0x17) = 1;
        UNLOCK();
        iVar4 = (int)param_1[0x71];
        *(int *)(param_1 + 0x71) = iVar4 + 1;
        if (*(int *)((longlong)param_1 + 0x38c) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x70,iVar4);
        }
        *(longlong **)(param_1[0x70] + (longlong)iVar4 * 8) = local_res10;
      }
      param_2 = local_res10;
      cVar6 = IsInAudioThread();
      if (cVar6 == '\0') {
        uStack_f0 = param_2;
        local_e8 = (ulonglong)CONCAT52(local_e8._3_5_,CONCAT11(param_5,param_4)) << 8;
        local_58 = 0;
        local_48 = 0;
        puVar8 = (undefined8 *)FUN_140438ef0(0x20,local_78);
        if (puVar8 != (undefined8 *)0x0) {
          local_f8 = SUB84(param_1,0);
          uStack_f4 = (undefined4)((ulonglong)param_1 >> 0x20);
          *(undefined4 *)(puVar8 + 1) = local_f8;
          *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_f4;
          *(undefined4 *)(puVar8 + 2) = (undefined4)uStack_f0;
          *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_f0._4_4_;
          *puVar8 = &PTR_FUN_143f4d0b0;
          puVar8[3] = local_e8;
        }
        local_88[0] = UE4Function_Private::
                      TFunctionRefCaller<<lambda_0c4d56017f412b8eed52d047551087b8>,void___cdecl(void)>
                      ::Call;
        FUN_1422f8a30(local_88,(ulonglong)local_res10 & 0xff);
        return;
      }
    }
  }
  if (*(int *)((longlong)param_2 + 0xe4) == 0) {
    *pbVar1 = 1;
  }
  else if (param_2[0x26] == 0) {
    if ((*(byte *)((longlong)param_2 + 0xb3) & 4) == 0) {
      if ((*(byte *)((longlong)param_2 + 0xb3) & 0x10) == 0) {
        cVar6 = (**(code **)(*param_1 + 0x80))(param_1,param_2);
        if (cVar6 == '\0') {
          *pbVar1 = 3;
        }
        else {
          uVar3 = *(undefined1 *)((longlong)param_2 + 0xb2);
          uVar9 = GetDefault<USoundGroups>();
          lVar10 = USoundGroups::GetSoundGroup(uVar9,uVar3);
          fVar2 = *(float *)(lVar10 + 0x1c);
          cVar6 = USoundWave::IsStreaming(param_2);
          if (cVar6 == '\0') {
            if (((param_5 != '\0') ||
                (cVar6 = (**(code **)(*param_1 + 0x88))(param_1), cVar6 == '\0')) ||
               ((((*(byte *)(param_1 + 0x6b) & 4) == 0 &&
                 (cVar6 = (**(code **)(*param_1 + 0x90))(param_1), cVar6 == '\0')) &&
                (((*(byte *)(lVar10 + 0x18) & 1) != 0 || (*(float *)(param_2 + 10) <= fVar2)))))) {
              *pbVar1 = 3;
            }
            else {
              *pbVar1 = 4;
            }
          }
          else {
            *pbVar1 = 7;
            *(byte *)((longlong)param_2 + 0xb3) = *(byte *)((longlong)param_2 + 0xb3) & 0xdf;
          }
          lVar10 = *param_2;
          puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x78))(param_1,local_98,param_2);
          (**(code **)(lVar10 + 0x300))(param_2,*puVar8);
          if ((param_2[0x24] == 0) && ((byte)(*pbVar1 - 3) < 2)) {
            if (param_3 == '\0') {
              lVar10 = operator_new(0x30);
              if (lVar10 == 0) {
                lVar10 = 0;
              }
              else {
                lVar10 = FAsyncTask<FAsyncAudioDecompressWorker>::
                         FAsyncTask<FAsyncAudioDecompressWorker><USoundWave_*_&>
                                   (lVar10,&local_res10);
              }
              param_2[0x24] = lVar10;
              lVar5 = DAT_1468b5010;
              LOCK();
              *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
              UNLOCK();
              plVar11 = *(longlong **)(lVar10 + 0x20);
              *(longlong *)(lVar10 + 0x28) = lVar5;
              if (lVar5 == 0) {
                FUN_1415b5910();
                *(undefined8 *)(lVar10 + 0x20) = 0;
                FUN_1422c66d0(lVar10 + 8);
                LOCK();
                *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + -1;
                UNLOCK();
              }
              else {
                if (plVar11 == (longlong *)0x0) {
                  plVar11 = (longlong *)FUN_1415ab270(1);
                  *(longlong **)(lVar10 + 0x20) = plVar11;
                }
                (**(code **)(*plVar11 + 0x18))();
                (**(code **)(**(longlong **)(lVar10 + 0x28) + 0x10))
                          (*(longlong **)(lVar10 + 0x28),lVar10);
              }
              iVar4 = (int)param_1[0x73];
              *(int *)(param_1 + 0x73) = iVar4 + 1;
              if (*(int *)((longlong)param_1 + 0x39c) < iVar4 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_1 + 0x72,iVar4);
              }
              *(longlong **)(param_1[0x72] + (longlong)iVar4 * 8) = local_res10;
            }
            else {
              local_e8 = 0;
              uStack_f0 = param_2;
              if ((DAT_146b17150 != 0) && (lVar10 = FUN_142875430(), lVar10 != 0)) {
                plVar11 = (longlong *)FUN_142875430(DAT_146b17150);
                local_e8 = (**(code **)(*plVar11 + 0x98))(plVar11,uStack_f0);
              }
              local_d8 = 0;
              LOCK();
              local_e0 = 1;
              UNLOCK();
              uStack_d0 = 0;
              FUN_1415b5910(0);
              local_d8 = 0;
              FUN_1422c66d0(&uStack_f0);
              LOCK();
              local_e0 = local_e0 + -1;
              UNLOCK();
              FUN_1415b5910(local_d8);
            }
            param_2 = local_res10;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38)
                 < DAT_146aef560) && (_Init_thread_header(&DAT_146aef560), DAT_146aef560 == -1)) {
              FName::FName(&DAT_146aef558,&DAT_14502cbe8,1);
              _Init_thread_footer(&DAT_146aef560);
            }
            plVar11 = (longlong *)(**(code **)(*param_1 + 0x78))(param_1,local_90,param_2);
            bVar12 = 0;
            if (*plVar11 == DAT_146aef558) {
              bVar12 = 0x10;
            }
            *(byte *)((longlong)param_2 + 0xb4) =
                 bVar12 | *(byte *)((longlong)param_2 + 0xb4) & 0xef;
            if (*pbVar1 == 3) {
              param_4 = '\0';
            }
          }
        }
      }
      else {
        *pbVar1 = (*(byte *)(param_1 + 0x6b) & 0x20 | 8) >> 3;
      }
    }
    else {
      *pbVar1 = 5;
    }
  }
  else {
    *pbVar1 = 2;
  }
  if (param_2[0x24] == 0) {
    LOCK();
    *(undefined4 *)(param_2 + 0x17) = 2;
    UNLOCK();
    param_2 = local_res10;
  }
  if (param_4 != '\0') {
    local_c8[0] = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    (**(code **)(*param_2 + 0x158))(param_2,local_c8);
    *(int *)(param_2 + 0x3c) =
         (int)param_2[0x3c] +
         (int)local_c0 + (int)local_b8 + (int)local_b0 + (int)local_a8 + (int)local_a0;
  }
  return;
}



// FUNCTION 1422d31f0 FUN_1422d31f0 body=1160 status=ok
// SIG undefined FUN_1422d31f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1422d31f0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined1 param_5,longlong *****param_6,undefined4 param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Dst;
  longlong ****pppplVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  void *_Src;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  longlong *local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  longlong *plStack_128;
  undefined4 local_120;
  void *local_118;
  undefined8 local_110;
  longlong ****local_108;
  undefined4 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  int local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined2 *local_d0;
  int local_c8;
  longlong local_c0 [3];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  plVar10 = (longlong *)*param_3;
  plVar14 = plVar10 + (longlong)(int)param_3[1] * 2;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  plStack_128 = (longlong *)0x0;
  local_e0 = param_1;
  local_138 = param_4;
  local_120 = param_7;
  do {
    local_f0 = param_2;
    if (plVar10 == plVar14) {
      local_108 = (longlong ****)0x0;
      local_100 = 0;
      if (((param_6 != &local_108) && (*(int *)(param_6 + 1) != 0)) &&
         (pppplVar3 = *param_6, pppplVar3 != (longlong ****)0x0)) {
        (*(code *)(*pppplVar3)[6])(pppplVar3,&local_108);
      }
      lVar12 = *param_1;
      uVar9 = TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::Array
                        (&local_a8,&local_f0);
      local_150 = &local_148;
      local_158 = local_120;
      plVar10 = (longlong *)(**(code **)(lVar12 + 0x360))(param_1,&local_e0,uVar9,&local_108);
      if (&local_130 != plVar10) {
        local_130 = *plVar10;
        *plVar10 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_128,plVar10 + 1);
      }
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_d8 + 1;
        lVar12 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar1 = (int *)((longlong)local_d8 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_d8 + 8))(local_d8,1);
          }
        }
      }
      if (local_e8 != 0) {
        plVar10 = local_f0 + 1;
        iVar11 = local_e8;
        do {
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          plVar10 = plVar10 + 3;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      if (local_f0 != (longlong *)0x0) {
        FMemory::Free();
      }
      plVar10 = plStack_128;
      if (local_130 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
        if (plStack_128 != (longlong *)0x0) {
          LOCK();
          plVar14 = plStack_128 + 1;
          lVar12 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_128)(plStack_128);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plStack_128 + 8))(plStack_128,1);
            }
          }
        }
      }
      else {
        *param_2 = local_130;
        param_2[1] = (longlong)plStack_128;
      }
      if (local_148 != 0) {
        FMemory::Free();
      }
      local_60 = 0;
      if (local_68 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_a8);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
      return param_2;
    }
    uVar4 = (uint)local_158 >> 8;
    local_158 = CONCAT31((int3)uVar4,param_5);
    local_108 = (longlong ****)param_6;
    cVar7 = FUN_1422cd700(param_1,&local_a8,plVar10);
    uVar6 = local_140;
    if (cVar7 != '\0') {
      iVar11 = (int)local_140;
      lVar12 = (longlong)(int)local_140;
      if ((int)local_140 < 2) {
        local_140._0_4_ = (0xc - (uint)((int)local_140 != 0)) + (int)local_140;
        if (local_140._4_4_ < (int)local_140) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,uVar6 & 0xffffffff);
        }
        lVar12 = lVar12 - (ulonglong)(iVar11 != 0);
        puVar2 = (undefined4 *)(local_148 + lVar12 * 2);
        *puVar2 = 0x720050;
        puVar2[1] = 0x6c0065;
        puVar2[2] = 0x61006f;
        puVar2[3] = 0x690064;
        lVar12 = local_148 + lVar12 * 2;
        *(undefined4 *)(lVar12 + 0x10) = 0x67006e;
        *(undefined2 *)(lVar12 + 0x14) = 0x20;
        *(undefined2 *)(lVar12 + 0x16) = 0;
      }
      else {
        local_140._0_4_ = (3 - (uint)((int)local_140 != 0)) + (int)local_140;
        if (local_140._4_4_ < (int)local_140) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,uVar6 & 0xffffffff);
        }
        puVar2 = (undefined4 *)(local_148 + (lVar12 - (ulonglong)(iVar11 != 0)) * 2);
        *puVar2 = 0x20002c;
        *(undefined2 *)(puVar2 + 1) = 0;
      }
      local_f8 = 0;
      if (*plVar10 == 0) {
LAB_1422d3420:
        local_118 = (void *)0x0;
        local_110 = 0;
LAB_1422d3431:
        iVar11 = 0;
      }
      else {
        local_138 = 0;
        if (plVar10[1] == 0) goto LAB_1422d3420;
        FName::ToString(plVar10 + 1,local_c0);
        FName::ToString(plVar10,&local_d0);
        puVar13 = &DAT_143f3eda8;
        if (local_c8 != 0) {
          puVar13 = local_d0;
        }
        FString::PrintfImpl(&local_118,L"%s:%s",puVar13);
        if (local_d0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_c0[0] != 0) {
          FMemory::Free();
        }
        if ((int)local_110 == 0) goto LAB_1422d3431;
        iVar11 = (int)local_110 + -1;
      }
      _Src = local_118;
      uVar6 = local_140;
      if (iVar11 != 0) {
        iVar5 = (int)local_140;
        lVar12 = (longlong)(int)local_140;
        iVar8 = (uint)((int)local_140 == 0) + (int)local_140 + iVar11;
        local_140 = CONCAT44(local_140._4_4_,iVar8);
        if (local_140._4_4_ < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,uVar6 & 0xffffffff);
        }
        _Dst = (void *)(local_148 + (lVar12 - (ulonglong)(iVar5 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar11 * 2);
        *(undefined2 *)((longlong)_Dst + (longlong)iVar11 * 2) = 0;
        param_1 = local_e0;
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free(local_118);
      }
    }
    plVar10 = plVar10 + 2;
    param_2 = local_f0;
    param_6 = (longlong *****)local_108;
  } while( true );
}



// FUNCTION 1422d3680 FUN_1422d3680 body=1208 status=ok
// SIG undefined FUN_1422d3680(void)

void FUN_1422d3680(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  void *_Dst;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  uint uStack_94;
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
  
  iVar13 = *(int *)(param_1 + 0x430) + -1;
  if (-1 < iVar13) {
    lVar18 = (longlong)iVar13 * 8;
    lVar19 = lVar18;
    do {
      lVar4 = *(longlong *)(lVar18 + *(longlong *)(param_1 + 0x428));
      if (lVar4 != 0) {
        bVar6 = *(byte *)(lVar4 + 0x9b) & 0x10;
        if (param_2 == '\0') {
          if (bVar6 == 0) {
            LOCK();
            bVar20 = *(int *)(lVar4 + 0xa4) == 0;
            if (bVar20) {
              *(int *)(lVar4 + 0xa4) = 0;
            }
            UNLOCK();
          }
          else {
            cVar7 = FActiveSound::UpdateStoppingSources(lVar4,*(undefined8 *)(param_1 + 0xa0),0);
            if (cVar7 == '\0') goto LAB_1422d37b1;
            LOCK();
            bVar20 = *(int *)(lVar4 + 0xa4) == 0;
            if (bVar20) {
              *(int *)(lVar4 + 0xa4) = 0;
            }
            UNLOCK();
          }
          if (!bVar20) goto LAB_1422d37b1;
        }
        else if (bVar6 != 0) {
          FActiveSound::UpdateStoppingSources(lVar4,*(undefined8 *)(param_1 + 0xa0),1);
        }
        LOCK();
        *(undefined4 *)(lVar4 + 0xa4) = 0;
        UNLOCK();
        iVar10 = *(int *)(param_1 + 0x430);
        iVar8 = (iVar10 - iVar13) + -1;
        if (0 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar19 + *(longlong *)(param_1 + 0x428)),
                     (void *)(*(longlong *)(param_1 + 0x428) + (longlong)(iVar10 - iVar8) * 8),
                     (longlong)iVar8 << 3);
          iVar10 = *(int *)(param_1 + 0x430);
        }
        *(int *)(param_1 + 0x430) = iVar10 + -1;
        FActiveSound::~FActiveSound(lVar4);
        FMemory::operator_delete(lVar4,0x540);
      }
LAB_1422d37b1:
      lVar19 = lVar19 + -8;
      lVar18 = lVar18 + -8;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  plVar1 = (longlong *)(param_1 + 0x3c0);
  uStack_c4 = 1;
  uVar3 = *(uint *)(param_1 + 1000);
  local_78 = (uint *)(param_1 + 0x3d0);
  local_c8 = 0;
  uStack_b4 = 0;
  iStack_b0 = 0;
  if (uVar3 != 0) {
    puVar16 = *(uint **)(param_1 + 0x3e0);
    if (*(uint **)(param_1 + 0x3e0) == (uint *)0x0) {
      puVar16 = local_78;
    }
    uVar15 = *puVar16;
    iStack_b0 = 0;
    local_c8 = 0;
    while (uVar15 == 0) {
      lVar18 = (longlong)local_c8;
      iStack_b0 = iStack_b0 + 0x20;
      iVar13 = local_c8 + 1;
      bVar20 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
      local_c8 = iVar13;
      if (bVar20) goto LAB_1422d387f;
      uVar15 = puVar16[lVar18 + 1];
    }
    uStack_c4 = -uVar15 & uVar15;
    iVar13 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_b4 = (iStack_b0 - iVar13) + 0x1f;
    if ((int)uVar3 < (int)uStack_b4) {
LAB_1422d387f:
      uStack_b4 = uVar3;
    }
  }
  uStack_94 = *(uint *)(param_1 + 1000);
  uStack_58 = CONCAT44(uStack_c4,local_c8);
  uVar3 = *(uint *)(param_1 + 1000);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_b4;
  local_68 = CONCAT44(uStack_ac,iStack_b0);
  uVar15 = uStack_94 & 0xffffffe0;
  iStack_80 = local_c8;
  uStack_7c = uStack_c4;
  local_60 = plVar1;
  puStack_50 = local_78;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  if (uStack_94 != uVar3) {
    lVar18 = *(longlong *)(param_1 + 0x3e0);
    if (*(longlong *)(param_1 + 0x3e0) == 0) {
      lVar18 = param_1 + 0x3d0;
    }
    uVar11 = *(uint *)(lVar18 + (longlong)((int)uStack_94 >> 5) * 4) &
             -1 << ((byte)uStack_94 & 0x1f);
    iVar13 = (int)uStack_94 >> 5;
    while (uVar11 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_1422d396b;
      uVar11 = *(uint *)(lVar18 + 4 + (longlong)iVar13 * 4);
      iVar13 = iVar13 + 1;
    }
    uVar11 = -uVar11 & uVar11;
    iVar13 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_94 = (uVar15 - iVar13) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_1422d396b:
      uStack_94 = uVar3;
    }
  }
  do {
    if ((uStack_6c == uStack_94) && (local_78 == (uint *)(param_1 + 0x3d0))) {
      uVar14 = 0;
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      if ((*(int *)(param_1 + 0x3cc) < 0) && (*(int *)(param_1 + 0x3cc) != 0)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1,0);
      }
      *(undefined4 *)(param_1 + 0x3f0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x3f4) = 0;
      iVar13 = *(int *)(param_1 + 1000) + 0x1f;
      _Dst = *(void **)(param_1 + 0x3e0);
      if (*(void **)(param_1 + 0x3e0) == (void *)0x0) {
        _Dst = (void *)(param_1 + 0x3d0);
      }
      _guard_xfg_dispatch_icall_nop
                (_Dst,0,(longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) << 2);
      *(undefined4 *)(param_1 + 1000) = 0;
      if (0 < (int)*(uint *)(param_1 + 0x408)) {
        uVar17 = (ulonglong)*(uint *)(param_1 + 0x408);
        do {
          uVar12 = (longlong)*(int *)(param_1 + 0x408) - 1U & uVar14;
          lVar18 = *(longlong *)(param_1 + 0x400);
          if (*(longlong *)(param_1 + 0x400) == 0) {
            lVar18 = param_1 + 0x3f8;
          }
          uVar14 = uVar14 + 1;
          *(undefined4 *)(lVar18 + uVar12 * 4) = 0xffffffff;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      return;
    }
    lVar18 = *(longlong *)(*plVar1 + (longlong)(int)uStack_6c * 0x10);
    FUN_14223f5f0(lVar18);
    if ((*(longlong *)(lVar18 + 0x10) != 0) && (cVar7 = USoundBase::IsLooping(), cVar7 == '\0')) {
      *(int *)(param_1 + 0x710) = *(int *)(param_1 + 0x710) + -1;
    }
    if (param_2 == '\0') {
      LOCK();
      bVar20 = *(int *)(lVar18 + 0xa4) == 0;
      if (bVar20) {
        *(int *)(lVar18 + 0xa4) = 0;
      }
      UNLOCK();
      if ((bVar20) && ((*(byte *)(lVar18 + 0x9b) & 0x10) == 0)) goto LAB_1422d3a4c;
      plVar2 = (longlong *)(param_1 + 0x428);
      plVar5 = (longlong *)*plVar2;
      iVar13 = *(int *)(param_1 + 0x430);
      for (plVar9 = plVar5; plVar9 != plVar5 + iVar13; plVar9 = plVar9 + 1) {
        if (*plVar9 == lVar18) {
          if ((int)((longlong)plVar9 - (longlong)plVar5 >> 3) != -1) goto LAB_1422d3a69;
          break;
        }
      }
      *(int *)(param_1 + 0x430) = iVar13 + 1;
      if (*(int *)(param_1 + 0x434) < iVar13 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2);
      }
      *(longlong *)((longlong)iVar13 * 8 + *plVar2) = lVar18;
    }
    else {
LAB_1422d3a4c:
      LOCK();
      *(undefined4 *)(lVar18 + 0xa4) = 0;
      UNLOCK();
      FActiveSound::~FActiveSound(lVar18);
      FMemory::operator_delete(lVar18);
    }
LAB_1422d3a69:
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  } while( true );
}



// FUNCTION 1422d3b40 FUN_1422d3b40 body=663 status=ok
// SIG undefined FUN_1422d3b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422d3b40(longlong param_1,longlong param_2,char param_3,char param_4)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  int local_b4;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char local_98;
  undefined7 uStack_97;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  if (param_2 == 0) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_b0 = param_2;
  cVar6 = IsInAudioThread();
  lVar5 = local_b0;
  if (cVar6 == '\0') {
    local_58 = 0;
    local_48 = 0;
    uStack_a0 = (undefined1 **)local_b0;
    local_a8 = (longlong *)param_1;
    local_98 = param_3;
    puVar7 = (undefined8 *)FUN_140438ef0(0x20,&local_78);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar7 + 1) = (undefined4)local_a8;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_a8._4_4_;
      *(undefined4 *)(puVar7 + 2) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_a0._4_4_;
      *puVar7 = &PTR_FUN_143f4d0b0;
      puVar7[3] = CONCAT71(uStack_97,local_98);
    }
    local_88 = &LAB_1422c2c30;
    FUN_1422f8a30(&local_88,local_b8);
    return;
  }
  TSet<TTuple<FRHIBlendState_*,FBlendStateInitializerRHI>,TDefaultMapHashableKeyFuncs<FRHIBlendState_*,FBlendStateInitializerRHI,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x218,&local_b4,local_b0);
  lVar8 = 0;
  if (local_b4 != -1) {
    lVar8 = (longlong)local_b4 * 0x50 + *(longlong *)(param_1 + 0x218);
  }
  lVar9 = lVar8 + 8;
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  if (lVar9 == 0) {
    local_88 = (undefined1 *)0x0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_a8 = &local_b0;
    uStack_a0 = &local_88;
    FUN_1422b9260(param_1 + 0x218,&local_b4,&local_a8,0);
    lVar9 = *(longlong *)(param_1 + 0x218) + (longlong)local_b4 * 0x50 + 8;
    FAudioDevice::ApplySoundMix(param_1,local_b0,lVar9);
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
      FAudioEffectsManager::SetMixSettings(*(longlong *)(param_1 + 0x2c8),local_b0,0,0);
    }
  }
  else if (0.0 < *(double *)(lVar9 + 0x28) || *(double *)(lVar9 + 0x28) == 0.0) {
    dVar10 = *(double *)(param_1 + 0x360);
    iVar2 = *(int *)(lVar9 + 0x3c);
    *(double *)(lVar9 + 0x10) = dVar10;
    if (iVar2 != 0) {
      *(undefined8 *)(lVar9 + 0x28) = 0xbff0000000000000;
      *(undefined8 *)(lVar9 + 0x30) = 0xbff0000000000000;
      fVar1 = *(float *)(lVar5 + 0x80);
      if (0.0 <= fVar1) {
        if (iVar2 - 1U < 2) {
          dVar10 = (double)*(float *)(lVar5 + 0x7c) + dVar10;
        }
        else {
          if ((iVar2 != 3) && (iVar2 != 4)) goto LAB_1422d3d9b;
          *(undefined4 *)(lVar9 + 0x3c) = 1;
          *(undefined4 *)(lVar9 + 0x38) = 0;
          uVar3 = *(undefined4 *)(param_1 + 0x360);
          uVar4 = *(undefined4 *)(param_1 + 0x364);
          *(undefined4 *)(lVar9 + 0x10) = uVar3;
          *(undefined4 *)(lVar9 + 0x14) = uVar4;
          *(undefined4 *)(lVar9 + 0x18) = uVar3;
          *(undefined4 *)(lVar9 + 0x1c) = uVar4;
          fVar1 = *(float *)(lVar5 + 0x80);
          dVar10 = (double)*(float *)(lVar5 + 0x7c) + *(double *)(param_1 + 0x360);
        }
        *(double *)(lVar9 + 0x28) = dVar10 + (double)fVar1;
        *(double *)(lVar9 + 0x30) = (double)*(float *)(lVar5 + 0x84) + dVar10 + (double)fVar1;
      }
    }
  }
LAB_1422d3d9b:
  if (param_4 == '\0') {
    if (param_3 == '\0') {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    }
    else {
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    }
  }
  return;
}



// FUNCTION 1422d3de0 Read body=68 status=ok
// SIG undefined Read(void)

uint IStreamedCompressedInfo::Read(longlong param_1,void *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x10) - *(uint *)(param_1 + 0x14);
  if (param_3 <= uVar1) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              (param_2,(void *)((ulonglong)*(uint *)(param_1 + 0x14) + *(longlong *)(param_1 + 8)),
               (ulonglong)uVar1);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar1;
  }
  return uVar1;
}



// FUNCTION 1422d3e30 ReadCompressedData body=248 status=ok
// SIG undefined ReadCompressedData(void)

undefined8
IStreamedCompressedInfo::ReadCompressedData
          (longlong *param_1,void *param_2,char param_3,uint param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int local_28;
  int local_24;
  
  uVar1 = 0;
  uVar3 = 0;
  if (param_4 != 0) {
    uVar2 = *(uint *)((longlong)param_1 + 0x14);
    do {
      (**(code **)(*param_1 + 0x80))
                (param_1,&local_28,(ulonglong)uVar2 + param_1[1],(int)param_1[2] - uVar2,param_2,
                 param_4 - uVar3);
      if (local_24 == 0) {
        uVar1 = 1;
        if (param_3 == '\0') {
          ::_guard_xfg_dispatch_icall_nop(param_2,0,(ulonglong)(param_4 - uVar3));
          return 1;
        }
        *(int *)((longlong)param_1 + 0x14) = (int)param_1[3];
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
        (**(code **)(*param_1 + 0x88))(param_1);
      }
      else if (local_24 < 0) {
        ::_guard_xfg_dispatch_icall_nop(param_2,0,(ulonglong)(param_4 - uVar3));
        return 1;
      }
      uVar3 = uVar3 + local_24;
      *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + local_28;
      uVar2 = *(uint *)((longlong)param_1 + 0x14);
      param_2 = (void *)((longlong)param_2 + (longlong)local_24);
    } while (uVar3 < param_4);
  }
  return uVar1;
}



// FUNCTION 1422d3f30 ReadCompressedInfo body=135 status=ok
// SIG undefined ReadCompressedInfo(void)

void IStreamedCompressedInfo::ReadCompressedInfo(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x70))();
  if (cVar1 == '\0') {
    return;
  }
  *(uint *)(param_1 + 6) = (uint)*(byte *)(param_1 + 5) * 2;
  iVar2 = (**(code **)(*param_1 + 0x98))(param_1);
  iVar3 = 0;
  *(int *)((longlong)param_1 + 0x2c) = iVar2;
  iVar2 = (int)param_1[6] * iVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 7,iVar2);
    iVar3 = (int)param_1[8];
  }
  iVar3 = (int)param_1[6] * *(int *)((longlong)param_1 + 0x2c) + iVar3;
  *(int *)(param_1 + 8) = iVar3;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x0001422d3fb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}



// FUNCTION 1422d3fc0 FUN_1422d3fc0 body=1293 status=ok
// SIG undefined FUN_1422d3fc0(void)

void FUN_1422d3fc0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  longlong local_res20;
  int local_138;
  uint uStack_134;
  uint uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  uint uStack_114;
  uint uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f0;
  uint *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  int iStack_b8;
  uint uStack_b4;
  uint *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 *local_80;
  longlong *local_78;
  undefined8 uStack_70;
  uint *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_14089dba0();
  plVar2 = (longlong *)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 0x268) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x26c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2,0);
  }
  uStack_114 = 1;
  local_c8 = (longlong *)(param_1 + 0x378);
  local_118 = 0;
  uVar3 = *(uint *)(param_1 + 0x3a0);
  puVar1 = (uint *)(param_1 + 0x388);
  uStack_104 = 0;
  iStack_100 = 0;
  if (uVar3 != 0) {
    puVar14 = *(uint **)(param_1 + 0x398);
    if (*(uint **)(param_1 + 0x398) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = *puVar14;
    iStack_100 = 0;
    local_118 = 0;
    while (uVar13 == 0) {
      lVar11 = (longlong)local_118;
      iStack_100 = iStack_100 + 0x20;
      iVar7 = local_118 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_118;
      local_118 = iVar7;
      if (bVar5) goto LAB_1422d40c6;
      uVar13 = puVar14[lVar11 + 1];
    }
    uStack_114 = -uVar13 & uVar13;
    iVar7 = 0x1f;
    if (uStack_114 != 0) {
      for (; uStack_114 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_114 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_104 = (iStack_100 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_104) {
LAB_1422d40c6:
      uStack_104 = uVar3;
    }
  }
  uStack_124 = *(uint *)(param_1 + 0x3a0);
  uStack_f0 = CONCAT44(uStack_114,local_118);
  uStack_e0 = CONCAT44(uStack_104,0xffffffff);
  uStack_d8 = CONCAT44(uStack_fc,iStack_100);
  uVar13 = uStack_124 & 0xffffffe0;
  iStack_b8 = local_118;
  uStack_b4 = uStack_114;
  if (uStack_124 != uVar3) {
    puVar14 = *(uint **)(param_1 + 0x398);
    if (*(uint **)(param_1 + 0x398) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar9 = puVar14[(int)uStack_124 >> 5] & -1 << ((byte)uStack_124 & 0x1f);
    iVar7 = (int)uStack_124 >> 5;
    while (uVar9 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1422d41a7;
      uVar9 = puVar14[(longlong)iVar7 + 1];
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
    uStack_124 = (uVar13 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_124) {
LAB_1422d41a7:
      uStack_124 = uVar3;
    }
  }
  local_d0 = (ulonglong)uStack_124;
  puStack_e8 = puVar1;
  local_b0 = puVar1;
  uStack_a8 = uStack_e0;
  local_a0 = uStack_d8;
  local_c0 = local_c8;
  do {
    if (((uStack_a8._4_4_ == (int)local_d0) && (local_b0 == puVar1)) && (local_c0 == local_c8)) {
      *(undefined1 *)(param_1 + 0x277) = 0;
      return;
    }
    puVar16 = (undefined8 *)((longlong)uStack_a8._4_4_ * 0x20 + *local_c0);
    lVar11 = puVar16[1];
    if (*(char *)(lVar11 + 0x80) == '\0') {
      plVar4 = (longlong *)*plVar2;
      iVar7 = *(int *)(param_1 + 0x268);
      lVar12 = *(longlong *)(lVar11 + 0x30);
      for (plVar8 = plVar4; plVar8 != plVar4 + iVar7; plVar8 = plVar8 + 1) {
        if (*plVar8 == lVar12) {
          if ((int)((longlong)plVar8 - (longlong)plVar4 >> 3) != -1) goto LAB_1422d4252;
          break;
        }
      }
      *(int *)(param_1 + 0x268) = iVar7 + 1;
      if (*(int *)(param_1 + 0x26c) < iVar7 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar7);
      }
      *(longlong *)((longlong)iVar7 * 8 + *plVar2) = lVar12;
    }
LAB_1422d4252:
    plVar4 = (longlong *)(lVar11 + 0x90);
    puVar14 = (uint *)(lVar11 + 0xa0);
    *(int *)(lVar11 + 0x84) = *(int *)(lVar11 + 0x98) - *(int *)(lVar11 + 0xc4);
    uVar3 = *(uint *)(lVar11 + 0xb8);
    local_138 = 0;
    uStack_134 = 1;
    uStack_124 = 0;
    iStack_120 = 0;
    if (uVar3 != 0) {
      puVar15 = *(uint **)(lVar11 + 0xb0);
      if (*(uint **)(lVar11 + 0xb0) == (uint *)0x0) {
        puVar15 = puVar14;
      }
      uVar13 = *puVar15;
      iStack_120 = 0;
      local_138 = 0;
      while (uVar13 == 0) {
        lVar12 = (longlong)local_138;
        iStack_120 = iStack_120 + 0x20;
        iVar7 = local_138 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_138;
        local_138 = iVar7;
        if (bVar5) goto LAB_1422d4324;
        uVar13 = puVar15[lVar12 + 1];
      }
      uStack_134 = -uVar13 & uVar13;
      iVar7 = 0x1f;
      if (uStack_134 != 0) {
        for (; uStack_134 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_134 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_124 = (iStack_120 - iVar7) + 0x1f;
      if ((int)uVar3 < (int)uStack_124) {
LAB_1422d4324:
        uStack_124 = uVar3;
      }
    }
    uVar13 = *(uint *)(lVar11 + 0xb8);
    uStack_e0 = CONCAT44(uStack_124,0xffffffff);
    uStack_d8 = CONCAT44(uStack_11c,iStack_120);
    uStack_70 = CONCAT44(uStack_134,local_138);
    uVar9 = uVar13 & 0xffffffe0;
    uStack_f0 = CONCAT44(uStack_134,local_138);
    puStack_e8 = puVar14;
    local_78 = plVar4;
    puStack_68 = puVar14;
    uStack_60 = uStack_e0;
    uStack_58 = uStack_d8;
    uStack_124 = uVar13;
    if (uVar13 != uVar3) {
      puVar15 = *(uint **)(lVar11 + 0xb0);
      if (*(uint **)(lVar11 + 0xb0) == (uint *)0x0) {
        puVar15 = puVar14;
      }
      uVar10 = puVar15[(int)uVar13 >> 5] & -1 << ((byte)uVar13 & 0x1f);
      iVar7 = (int)uVar13 >> 5;
      while (uVar10 == 0) {
        uVar9 = uVar9 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_1422d43f8;
        uVar10 = puVar15[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar10 = -uVar10 & uVar10;
      iVar7 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar10 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_124 = (uVar9 - iVar7) + 0x1f;
      if ((int)uVar3 < (int)uStack_124) {
LAB_1422d43f8:
        uStack_124 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_e0._4_4_ == uStack_124) && (puStack_e8 == puVar14)) break;
      puVar6 = (undefined8 *)((longlong)(int)uStack_e0._4_4_ * 0x80 + *plVar4);
      local_res18 = 0;
      lVar11 = puVar6[4];
      if (lVar11 != 0) {
        local_98 = *puVar16;
        local_90 = *puVar6;
        local_88 = &local_res20;
        local_80 = &local_98;
        local_res20 = lVar11;
        TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FLinearColor_const_&>_>(param_1 + 0x28,local_res10)
        ;
      }
      uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
    }
    uStack_a8 = CONCAT44(uStack_a8._4_4_,(uint)uStack_a8 & ~uStack_b4);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b8);
  } while( true );
}



// FUNCTION 1422d44d0 FUN_1422d44d0 body=264 status=ok
// SIG undefined FUN_1422d44d0(void)

void FUN_1422d44d0(longlong param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  longlong *plVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int local_res10 [2];
  
  pfVar6 = (float *)0x0;
  plVar4 = *(longlong **)(param_2 + 0x58);
  pfVar7 = (float *)((longlong)*(int *)(param_2 + 0x60) & 0x1fffffffffffffff);
  if (plVar4 + *(int *)(param_2 + 0x60) < plVar4) {
    pfVar7 = pfVar6;
  }
  pfVar3 = pfVar6;
  if (pfVar7 != (float *)0x0) {
    do {
      lVar1 = *plVar4;
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x1b8,local_res10,lVar1);
      pfVar2 = pfVar6;
      if (local_res10[0] != -1) {
        pfVar2 = (float *)((longlong)local_res10[0] * 0x40 + *(longlong *)(param_1 + 0x1b8));
      }
      pfVar5 = pfVar2 + 2;
      if (pfVar2 == (float *)0x0) {
        pfVar5 = pfVar6;
      }
      if ((lVar1 != 0) && (pfVar5 != (float *)0x0)) {
        *pfVar5 = *param_3 * *pfVar5;
        pfVar5[1] = param_3[1] * pfVar5[1];
        pfVar5[7] = (float)((uint)pfVar5[7] | (uint)param_3[7] & 4);
        pfVar5[7] = (float)((uint)pfVar5[7] | (uint)param_3[7] & 8);
        FUN_1422d44d0(param_1,lVar1);
      }
      plVar4 = plVar4 + 1;
      pfVar3 = (float *)((longlong)pfVar3 + 1);
    } while (pfVar3 != pfVar7);
  }
  return;
}



// FUNCTION 1422d45e0 RecursiveApplyAdjuster body=201 status=ok
// SIG undefined RecursiveApplyAdjuster(void)

void FAudioDevice::RecursiveApplyAdjuster(longlong param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int local_res8 [2];
  
  TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1b8,local_res8);
  pfVar3 = (float *)0x0;
  pfVar4 = pfVar3;
  if (local_res8[0] != -1) {
    pfVar4 = (float *)((longlong)local_res8[0] * 0x40 + *(longlong *)(param_1 + 0x1b8));
  }
  pfVar1 = pfVar4 + 2;
  if (pfVar4 == (float *)0x0) {
    pfVar1 = pfVar3;
  }
  if ((param_3 != 0) && (pfVar1 != (float *)0x0)) {
    *pfVar1 = *(float *)(param_2 + 8) * *pfVar1;
    pfVar1[1] = *(float *)(param_2 + 0xc) * pfVar1[1];
    pfVar1[4] = *(float *)(param_2 + 0x14) * pfVar1[4];
    pfVar4 = pfVar3;
    if (0 < *(int *)(param_3 + 0x60)) {
      do {
        if (*(longlong *)((longlong)pfVar4 + *(longlong *)(param_3 + 0x58)) != 0) {
          RecursiveApplyAdjuster(param_1,param_2);
        }
        uVar2 = (int)pfVar3 + 1;
        pfVar3 = (float *)(ulonglong)uVar2;
        pfVar4 = pfVar4 + 2;
      } while ((int)uVar2 < *(int *)(param_3 + 0x60));
    }
  }
  return;
}



// FUNCTION 1422d46b0 FUN_1422d46b0 body=1227 status=ok
// SIG undefined FUN_1422d46b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422d46b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_128 [32];
  int local_108 [2];
  longlong *local_100;
  ulonglong local_f8;
  uint local_f0;
  int local_ec;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar11 = 0;
  plVar7 = (longlong *)*param_2;
  local_e8 = plVar7 + (longlong)(int)param_2[1] * 5;
  local_f8 = 0;
  local_ec = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar15 = uVar11;
  local_100 = plVar7;
  local_d0 = param_2;
  local_c0 = param_1;
  if (plVar7 != local_e8) {
    do {
      local_100 = plVar7;
      FUN_140800100(&local_98,local_108,plVar7 + 2,0);
      puVar10 = (undefined8 *)plVar7[3];
      puVar2 = puVar10 + (longlong)(int)plVar7[4] * 3;
      iVar13 = local_ec;
      for (; puVar10 != puVar2; puVar10 = puVar10 + 3) {
        iVar8 = (int)uVar15;
        for (uVar6 = uVar11; uVar6 != uVar11 + (longlong)iVar8 * 0x18; uVar6 = uVar6 + 0x18) {
          cVar4 = FSoftObjectPath::operator==(uVar6,puVar10);
          if (cVar4 != '\0') {
            if ((int)((longlong)(uVar6 - uVar11) / 0x18) != -1) goto LAB_1422d4828;
            break;
          }
        }
        local_f0 = iVar8 + 1;
        if (iVar13 < (int)local_f0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_f8,uVar15);
          uVar11 = local_f8;
          iVar13 = local_ec;
        }
        uVar15 = (ulonglong)local_f0;
        *(undefined8 *)(uVar11 + (longlong)iVar8 * 0x18) = *puVar10;
        FString::FString(uVar11 + ((longlong)iVar8 * 3 + 1) * 8,puVar10 + 1);
LAB_1422d4828:
        plVar7 = local_100;
      }
      plVar7 = plVar7 + 5;
      local_100 = plVar7;
    } while (plVar7 != local_e8);
  }
  local_108[0] = 0;
  if (0 < (int)uVar15) {
    local_100 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
    do {
      plVar12 = local_c0;
      plVar9 = local_d0;
      iVar13 = local_108[0];
      (**(code **)(*local_c0 + 0x2e8))(local_c0,&local_b0,uVar11 + (longlong)local_108[0] * 0x18);
      local_d8 = 0;
      local_e0 = (longlong *)0x0;
      if (((local_b0 != plVar7) && (local_c8 = 0, local_a8 != 0)) &&
         (cVar4 = (**(code **)(*plVar12 + 0x370))(plVar12,&local_b0,&local_e0), cVar4 != '\0')) {
        local_b8 = local_e0 + (longlong)(int)local_d8 * 5;
        if (local_e0 != local_b8) {
          plVar12 = local_e0 + 2;
          iVar8 = local_ec;
          do {
            lVar3 = *plVar12;
            if ((int)local_90 != local_64) {
              puVar5 = local_60;
              if (local_58 != (undefined1 *)0x0) {
                puVar5 = local_58;
              }
              for (iVar13 = *(int *)(puVar5 + (longlong)
                                              (int)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3 &
                                                   local_50 - 1U) * 4); iVar13 != -1;
                  iVar13 = *(int *)(local_98 + 8 + (longlong)iVar13 * 0x10)) {
                if (*(longlong *)(local_98 + (longlong)iVar13 * 0x10) == lVar3) {
                  if (iVar13 != -1) {
                    local_e8 = plVar12;
                    FAssetBundleData::AddBundleAssets(plVar9,lVar3,plVar12 + 1);
                    puVar10 = (undefined8 *)plVar12[1];
                    puVar2 = puVar10 + (longlong)(int)plVar12[2] * 3;
                    for (; puVar10 != puVar2; puVar10 = puVar10 + 3) {
                      iVar13 = (int)uVar15;
                      for (uVar6 = uVar11; uVar6 != uVar11 + (longlong)iVar13 * 0x18;
                          uVar6 = uVar6 + 0x18) {
                        cVar4 = FSoftObjectPath::operator==(uVar6,puVar10);
                        if (cVar4 != '\0') {
                          if ((int)((longlong)(uVar6 - uVar11) / 0x18) != -1) goto LAB_1422d4a57;
                          break;
                        }
                      }
                      local_f0 = iVar13 + 1;
                      if (iVar8 < (int)local_f0) {
                        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                        ::ResizeGrow(&local_f8,uVar15);
                        uVar11 = local_f8;
                        iVar8 = local_ec;
                      }
                      uVar15 = (ulonglong)local_f0;
                      *(undefined8 *)(uVar11 + (longlong)iVar13 * 0x18) = *puVar10;
                      FString::FString(uVar11 + ((longlong)iVar13 * 3 + 1) * 8,puVar10 + 1);
LAB_1422d4a57:
                      plVar12 = local_e8;
                    }
                  }
                  break;
                }
              }
            }
            local_e8 = plVar12 + 5;
            plVar1 = plVar12 + 3;
            plVar7 = local_100;
            plVar9 = local_d0;
            plVar12 = local_e8;
            iVar13 = local_108[0];
          } while (plVar1 != local_b8);
        }
      }
      if ((int)local_d8 != 0) {
        plVar9 = local_e0 + 3;
        iVar8 = (int)local_d8;
        do {
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar9);
          plVar9 = plVar9 + 5;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if (local_e0 != (longlong *)0x0) {
        FMemory::Free(local_e0);
      }
      local_108[0] = iVar13 + 1;
    } while (local_108[0] < (int)uVar15);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_98);
  if ((int)uVar15 != 0) {
    plVar7 = (longlong *)(uVar11 + 8);
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 3;
      uVar14 = (int)uVar15 - 1;
      uVar15 = (ulonglong)uVar14;
    } while (uVar14 != 0);
  }
  if (uVar11 != 0) {
    FMemory::Free(uVar11);
  }
  return;
}



// FUNCTION 1422d4b80 FUN_1422d4b80 body=279 status=ok
// SIG undefined FUN_1422d4b80(void)

void FUN_1422d4b80(longlong param_1,ulonglong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  int *piVar3;
  ulonglong local_res10;
  undefined1 local_res18 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_18;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    cVar1 = IsInAudioThread();
    if (cVar1 == '\0') {
      uStack_60 = (undefined1 **)local_res10;
      local_28 = 0;
      local_18 = 0;
      local_68 = (ulonglong *)param_1;
      puVar2 = (undefined8 *)FUN_140438ef0(0x18,&local_48);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar2 + 1) = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar2 + 0xc) = local_68._4_4_;
        *(undefined4 *)(puVar2 + 2) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_60._4_4_;
      }
      local_58 = &LAB_1422c2ca0;
      FUN_1422f8a30(&local_58,local_res10 & 0xff);
      return;
    }
    piVar3 = (int *)TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
                    ::FindId(param_1 + 0x1b8,local_res18,local_res10);
    if (*piVar3 == -1) {
      local_34 = local_34 & 0xfffffffc;
      local_48 = 0;
      local_3c = local_3c & 0xfffffff0 | 0x10;
      local_40 = 0;
      local_68 = &local_res10;
      local_30 = 0;
      uStack_60 = &local_58;
      local_58 = (undefined1 *)0x3f8000003f800000;
      uStack_50 = 0x3f0000003e800000;
      local_38 = 0x3f000000;
      TSet<TTuple<USoundClass_*,FSoundClassProperties>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<USoundClass_*_const_&,FSoundClassProperties_&&>_>
                (param_1 + 0x1b8,local_res18,&local_68,0);
    }
  }
  return;
}



// FUNCTION 1422d4ca0 Rehash body=516 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned_int,UAITacticalPointManager::FOccupiedPoint>,TDefaultMapHashableKeyFuncs<unsigned_int,UAITacticalPointManager::FOccupiedPoint,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_1422d4ddf;
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
LAB_1422d4ddf:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0x58 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0x15] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0x14] =
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



// FUNCTION 1422d4eb0 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FPrimaryAssetId,FPrimaryAssetRules>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRules,0>,FDefaultSetAllocator>
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
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1422d4fef;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_1422d4fef:
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
        iVar3 = iStack_1c;
        lVar6 = *param_1 + (longlong)iStack_1c * 0x28;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x24) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x20) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1422d50c0 Rehash body=525 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>,0>,FDefaultSetAllocator>
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
  ulonglong uVar11;
  uint *puVar12;
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
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_1422d51ef;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_1422d51ef:
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
        lVar6 = (longlong)iStack_2c * 0x68 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 100) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x60) =
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



// FUNCTION 1422d52d0 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<FPrimaryAssetId,DefaultKeyFuncs<FPrimaryAssetId,0>,FDefaultSetAllocator>::Rehash
               (longlong *param_1)

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
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1422d540f;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_1422d540f:
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
        iVar3 = iStack_1c;
        lVar6 = *param_1 + (longlong)iStack_1c * 0x18;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x14) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x10) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1422d54f0 FUN_1422d54f0 body=1586 status=ok
// SIG undefined FUN_1422d54f0(void)

void FUN_1422d54f0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  longlong *plVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  undefined8 local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  undefined8 local_80;
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  plVar5 = (longlong *)FUN_14233fea0();
  lVar13 = 0x1f;
  iVar12 = 0x20;
  if (*(longlong *)(param_1 + 0x348) != 0) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      plVar7 = *(longlong **)(param_1 + 0x348);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_a0);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 400))(plVar5);
      }
      (**(code **)(*plVar7 + 0x30))(plVar7);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)*plVar7)(plVar7);
      }
      QueryPerformanceCounter(&local_a8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_a8.s.LowPart - local_a0._0_4_);
    }
    else {
      pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar7 = TlsGetValue(*pDVar6);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          *plVar7 = 0;
          plVar7[1] = 0;
          *(undefined4 *)(plVar7 + 2) = 0;
        }
        TlsSetValue(*pDVar6,plVar7);
      }
      plVar10 = (longlong *)plVar7[1];
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)*plVar7;
        iVar11 = iVar12;
        if (plVar10 == (longlong *)0x0) {
          lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
          plVar7[1] = lVar8;
          if (lVar8 == 0) {
            puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar7[1] = (longlong)puVar9;
            lVar8 = 0x1f;
            do {
              puVar2 = puVar9 + 0x20;
              *puVar9 = puVar2;
              lVar8 = lVar8 + -1;
              puVar9 = puVar2;
            } while (lVar8 != 0);
            *puVar2 = 0;
          }
          plVar10 = (longlong *)plVar7[1];
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
        else {
          *plVar7 = 0;
          plVar7[1] = (longlong)plVar10;
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
      }
      else {
        iVar11 = (int)plVar7[2];
      }
      plVar7[1] = *plVar10;
      *(int *)(plVar7 + 2) = iVar11 + -1;
      *(undefined4 *)(plVar10 + 1) = 0xff;
      *plVar10 = (longlong)&PTR_FUN_143f3edd8;
      local_68 = 0;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_14502dcd8;
      *(undefined1 *)(plVar10 + 4) = 0;
      plVar10[5] = 0;
      plVar10[2] = *(longlong *)(param_1 + 0x348);
      plVar10[3] = (longlong)plVar5;
      lVar8 = plVar10[5];
      local_98 = 0;
      piVar1 = (int *)(lVar8 + 0x48);
      if (lVar8 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_1409421c0(plVar10,0,0xff,1);
      if (lVar8 != 0) {
        LOCK();
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          FGraphEvent::Recycle(lVar8);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x348) = 0;
  }
  if (*(longlong *)(param_1 + 0x350) != 0) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      plVar7 = *(longlong **)(param_1 + 0x350);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_88);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 400))(plVar5);
      }
      (**(code **)(*plVar7 + 0x30))(plVar7);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)*plVar7)(plVar7);
      }
      QueryPerformanceCounter(&local_90);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_90.s.LowPart - local_88._0_4_);
    }
    else {
      pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar7 = TlsGetValue(*pDVar6);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          *plVar7 = 0;
          plVar7[1] = 0;
          *(undefined4 *)(plVar7 + 2) = 0;
        }
        TlsSetValue(*pDVar6,plVar7);
      }
      plVar10 = (longlong *)plVar7[1];
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)*plVar7;
        iVar11 = iVar12;
        if (plVar10 == (longlong *)0x0) {
          lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
          plVar7[1] = lVar8;
          if (lVar8 == 0) {
            puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar7[1] = (longlong)puVar9;
            lVar8 = 0x1f;
            do {
              puVar2 = puVar9 + 0x20;
              *puVar9 = puVar2;
              lVar8 = lVar8 + -1;
              puVar9 = puVar2;
            } while (lVar8 != 0);
            *puVar2 = 0;
          }
          plVar10 = (longlong *)plVar7[1];
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
        else {
          *plVar7 = 0;
          plVar7[1] = (longlong)plVar10;
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
      }
      else {
        iVar11 = (int)plVar7[2];
      }
      plVar7[1] = *plVar10;
      *(int *)(plVar7 + 2) = iVar11 + -1;
      *(undefined4 *)(plVar10 + 1) = 0xff;
      *plVar10 = (longlong)&PTR_FUN_143f3edd8;
      local_60 = 0;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_14502dcd8;
      *(undefined1 *)(plVar10 + 4) = 0;
      plVar10[5] = 0;
      plVar10[2] = *(longlong *)(param_1 + 0x350);
      plVar10[3] = (longlong)plVar5;
      lVar8 = plVar10[5];
      local_80 = 0;
      piVar1 = (int *)(lVar8 + 0x48);
      if (lVar8 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_1409421c0(plVar10,0,0xff,1);
      if (lVar8 != 0) {
        LOCK();
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          FGraphEvent::Recycle(lVar8);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x350) = 0;
  }
  if (*(longlong *)(param_1 + 0x358) != 0) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      plVar7 = *(longlong **)(param_1 + 0x358);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_70);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 400))(plVar5,plVar7);
      }
      (**(code **)(*plVar7 + 0x30))(plVar7);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)*plVar7)(plVar7,1);
      }
      QueryPerformanceCounter(&local_78);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_78.s.LowPart - local_70._0_4_);
    }
    else {
      pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar7 = TlsGetValue(*pDVar6);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          *plVar7 = 0;
          plVar7[1] = 0;
          *(undefined4 *)(plVar7 + 2) = 0;
        }
        TlsSetValue(*pDVar6,plVar7);
      }
      plVar10 = (longlong *)plVar7[1];
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)*plVar7;
        if (plVar10 == (longlong *)0x0) {
          lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
          plVar7[1] = lVar8;
          if (lVar8 == 0) {
            puVar9 = (undefined8 *)FMemory::Malloc(0x2000);
            plVar7[1] = (longlong)puVar9;
            do {
              puVar2 = puVar9 + 0x20;
              *puVar9 = puVar2;
              lVar13 = lVar13 + -1;
              puVar9 = puVar2;
            } while (lVar13 != 0);
            *puVar2 = 0;
          }
          plVar10 = (longlong *)plVar7[1];
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
        else {
          *plVar7 = 0;
          plVar7[1] = (longlong)plVar10;
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
      }
      else {
        iVar12 = (int)plVar7[2];
      }
      plVar7[1] = *plVar10;
      *(int *)(plVar7 + 2) = iVar12 + -1;
      *plVar10 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar10 + 1) = 0xff;
      local_58 = 0;
      local_50 = 0;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_14502dcd8;
      *(undefined1 *)(plVar10 + 4) = 0;
      plVar10[5] = 0;
      plVar10[2] = *(longlong *)(param_1 + 0x358);
      plVar10[3] = (longlong)plVar5;
      lVar13 = plVar10[5];
      piVar1 = (int *)(lVar13 + 0x48);
      if (lVar13 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_1409421c0(plVar10,0,0xff,1);
      if (lVar13 != 0) {
        LOCK();
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          FGraphEvent::Recycle(lVar13);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x358) = 0;
    return;
  }
  return;
}



// FUNCTION 1422d5b30 Remove body=431 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<USoundClass_*,FSoundMixClassOverride>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar12 = (int)(param_2 >> 4);
  uVar9 = (longlong)(int)param_1[9] - 1;
  uVar11 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
  uVar8 = -(uVar11 + iVar12) ^ uVar11 >> 0xd;
  uVar13 = (iVar12 - uVar11) - uVar8 ^ uVar8 >> 0xc;
  uVar11 = (uVar11 - uVar13) - uVar8 ^ uVar13 << 0x10;
  uVar8 = (uVar8 - uVar11) - uVar13 ^ uVar11 >> 5;
  uVar13 = (uVar13 - uVar11) - uVar8 ^ uVar8 >> 3;
  uVar11 = (uVar11 - uVar13) - uVar8 ^ uVar13 << 10;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar12 = *(int *)((longlong)plVar10 +
                   (((longlong)(int)((uVar8 - uVar11) - uVar13) ^ (ulonglong)(uVar11 >> 0xf)) &
                   uVar9) * 4);
  if (iVar12 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar12 * 0x68;
      if (*(ulonglong *)(lVar6 + lVar3) == param_2) {
        lVar6 = (longlong)iVar12 * 0x68;
        uVar9 = (longlong)*(int *)(lVar6 + 100 + lVar3) & uVar9;
        piVar7 = (int *)((longlong)plVar10 + uVar9 * 4);
        iVar2 = *(int *)((longlong)plVar10 + uVar9 * 4);
        goto joined_r0x0001422d5c40;
      }
      iVar12 = *(int *)(lVar6 + 0x60 + lVar3);
    } while (iVar12 != -1);
  }
  return 0;
joined_r0x0001422d5c40:
  if (iVar2 == -1) {
LAB_1422d5c62:
    bVar4 = (byte)iVar12 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x68 + *param_1) = iVar12;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar3 + 4 + lVar6) = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar12;
    plVar10 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar10 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar10 +
                     (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar12) {
    *piVar7 = *(int *)(lVar6 + lVar3 + 0x60);
    goto LAB_1422d5c62;
  }
  piVar7 = (int *)((longlong)iVar2 * 0x68 + 0x60 + lVar3);
  iVar2 = *piVar7;
  goto joined_r0x0001422d5c40;
}



// FUNCTION 1422d5ce0 Remove body=356 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<USoundMix_*,FSoundMixState>,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar9 = (int)(param_2 >> 4);
  uVar6 = (longlong)(int)param_1[9] - 1;
  uVar7 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
  uVar4 = -(uVar7 + iVar9) ^ uVar7 >> 0xd;
  uVar10 = (iVar9 - uVar7) - uVar4 ^ uVar4 >> 0xc;
  uVar7 = (uVar7 - uVar10) - uVar4 ^ uVar10 << 0x10;
  uVar4 = (uVar4 - uVar7) - uVar10 ^ uVar7 >> 5;
  uVar10 = (uVar10 - uVar7) - uVar4 ^ uVar4 >> 3;
  uVar7 = (uVar7 - uVar10) - uVar4 ^ uVar10 << 10;
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar5 +
                  (((longlong)(int)((uVar4 - uVar7) - uVar10) ^ (ulonglong)(uVar7 >> 0xf)) & uVar6)
                  * 4);
  if (iVar9 != -1) {
    lVar2 = *param_1;
    do {
      lVar8 = (longlong)iVar9;
      if (*(ulonglong *)(lVar2 + lVar8 * 0x50) == param_2) {
        uVar6 = (longlong)*(int *)(lVar2 + 0x4c + lVar8 * 0x50) & uVar6;
        piVar3 = (int *)((longlong)plVar5 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar5 + uVar6 * 4);
        goto joined_r0x0001422d5df4;
      }
      iVar9 = *(int *)(lVar2 + 0x48 + lVar8 * 0x50);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x0001422d5df4:
  if (iVar1 == -1) {
LAB_1422d5e1b:
    TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar9,1);
    return 1;
  }
  if (iVar1 == iVar9) {
    *piVar3 = *(int *)(lVar2 + 0x48 + lVar8 * 0x50);
    goto LAB_1422d5e1b;
  }
  piVar3 = (int *)((longlong)iVar1 * 0x50 + 0x48 + lVar2);
  iVar1 = *piVar3;
  goto joined_r0x0001422d5df4;
}



// FUNCTION 1422d5e50 Remove body=404 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>,TDefaultMapHashableKeyFuncs<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,0>,FDefaultSetAllocator>
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
        goto joined_r0x0001422d5f6c;
      }
      iVar8 = *(int *)(lVar3 + 0x58 + lVar2);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x0001422d5f6c:
  if (iVar1 == -1) {
LAB_1422d5f93:
    lVar3 = *param_1 + lVar3;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FGraphicsMinimalPipelineStateInitializer>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FGraphicsMinimalPipelineStateInitializer>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (lVar3 + 8);
    TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar8,1);
    return 1;
  }
  if (iVar1 == iVar8) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x58);
    goto LAB_1422d5f93;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x60 + 0x58 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x0001422d5f6c;
}



// FUNCTION 1422d5ff0 Remove body=245 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FPrimaryAssetId,FPrimaryAssetRules>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRules,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  iVar6 = ::GetTypeHash(param_2);
  iVar6 = *(int *)((longlong)plVar8 + ((longlong)iVar6 & uVar7) * 4);
  if (iVar6 != -1) {
    lVar5 = *param_1;
    do {
      lVar2 = lVar5 + (longlong)iVar6 * 0x28;
      if ((*(longlong *)(lVar5 + (longlong)iVar6 * 0x28) == *param_2) &&
         (*(longlong *)(lVar2 + 8) == param_2[1])) {
        uVar7 = (longlong)*(int *)(lVar2 + 0x24) & uVar7;
        puVar3 = (undefined4 *)((longlong)plVar8 + uVar7 * 4);
        iVar4 = *(int *)((longlong)plVar8 + uVar7 * 4);
        goto joined_r0x0001422d609c;
      }
      iVar6 = *(int *)(lVar2 + 0x20);
    } while (iVar6 != -1);
  }
  return 0;
joined_r0x0001422d609c:
  if (iVar4 == -1) {
LAB_1422d60c3:
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar6,1);
    return 1;
  }
  if (iVar4 == iVar6) {
    *puVar3 = *(undefined4 *)(lVar2 + 0x20);
    goto LAB_1422d60c3;
  }
  lVar1 = (longlong)iVar4 * 5 + 4;
  iVar4 = *(int *)(lVar5 + lVar1 * 8);
  puVar3 = (undefined4 *)(lVar5 + lVar1 * 8);
  goto joined_r0x0001422d609c;
}



// FUNCTION 1422d60f0 Remove body=315 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar6 = (longlong)(int)param_1[9] - 1;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  iVar3 = ::GetTypeHash(param_2);
  iVar3 = *(int *)((longlong)plVar7 + ((longlong)iVar3 & uVar6) * 4);
  if (iVar3 != -1) {
    lVar2 = *param_1;
    do {
      lVar5 = (longlong)iVar3 * 0x68;
      if ((*(longlong *)(lVar5 + lVar2) == *param_2) &&
         (*(longlong *)(lVar5 + 8 + lVar2) == param_2[1])) {
        uVar6 = (longlong)*(int *)(lVar5 + 100 + lVar2) & uVar6;
        piVar4 = (int *)((longlong)plVar7 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar7 + uVar6 * 4);
        goto joined_r0x0001422d61b1;
      }
      iVar3 = *(int *)(lVar5 + 0x60 + lVar2);
    } while (iVar3 != -1);
  }
  return 0;
joined_r0x0001422d61b1:
  if (iVar1 == -1) {
LAB_1422d61e0:
    lVar5 = *param_1 + lVar5;
    *(undefined4 *)(lVar5 + 0x58) = 0;
    if (*(longlong *)(lVar5 + 0x50) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FAssetBundleEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FName,FAssetBundleEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar5 + 0x10);
    TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar3,1);
    return 1;
  }
  if (iVar1 == iVar3) {
    *piVar4 = *(int *)(lVar5 + 0x60 + lVar2);
    goto LAB_1422d61e0;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x68 + 0x60 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x0001422d61b1;
}



// FUNCTION 1422d6230 Remove body=347 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar9 = (longlong)(int)param_1[9] - 1;
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  iVar10 = *(int *)((longlong)plVar8 +
                   ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar9) * 4);
  if (iVar10 != -1) {
    lVar2 = *param_1;
    do {
      lVar6 = (longlong)iVar10 * 0x38;
      if (*(longlong *)(lVar6 + lVar2) == param_2) {
        lVar6 = (longlong)iVar10 * 0x38;
        uVar9 = (longlong)*(int *)(lVar6 + 0x34 + lVar2) & uVar9;
        piVar7 = (int *)((longlong)plVar8 + uVar9 * 4);
        iVar4 = *(int *)((longlong)plVar8 + uVar9 * 4);
        if (iVar4 != -1) goto LAB_1422d62e0;
        goto LAB_1422d6300;
      }
      iVar10 = *(int *)(lVar6 + 0x30 + lVar2);
    } while (iVar10 != -1);
  }
  return 0;
  while( true ) {
    piVar7 = (int *)((longlong)iVar4 * 0x38 + 0x30 + lVar2);
    iVar4 = *piVar7;
    if (iVar4 == -1) break;
LAB_1422d62e0:
    if (iVar4 == iVar10) {
      *piVar7 = *(int *)(lVar6 + lVar2 + 0x30);
      break;
    }
  }
LAB_1422d6300:
  bVar3 = (byte)iVar10 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar10;
  }
  lVar2 = *param_1;
  uVar5 = 0xffffffff;
  *(undefined4 *)(lVar2 + lVar6) = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  ((undefined4 *)(lVar2 + lVar6))[1] = uVar5;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = iVar10;
  plVar8 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
  return 1;
}



// FUNCTION 1422d6390 RemoveActiveSound body=273 status=ok
// SIG undefined RemoveActiveSound(void)

void FAudioDevice::RemoveActiveSound(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  FSoundConcurrencyManager::RemoveActiveSound(param_1 + 0x538);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    UAudioComponent::PlaybackCompleted(*(longlong *)(param_2 + 0x18),0);
  }
  lVar1 = (longlong)*(int *)(param_1 + 0x378);
  if (*(int *)(param_1 + 0x378) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x370) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar1) {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x370) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar2 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar2 = plVar2 + 1;
        } while (lVar3 < lVar1);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x370) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x370) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar1);
    *(int *)(param_1 + 0x378) = iVar6;
  }
  return;
}



// FUNCTION 1422d64b0 FUN_1422d64b0 body=275 status=ok
// SIG undefined FUN_1422d64b0(void)

void FUN_1422d64b0(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + (longlong)param_2 * 0x40);
    iVar6 = param_3;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar7 + 6);
      plVar3 = (longlong *)plVar7[5];
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
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
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



// FUNCTION 1422d65d0 FUN_1422d65d0 body=69 status=ok
// SIG undefined FUN_1422d65d0(void)

void FUN_1422d65d0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (param_2 == *(longlong *)(param_1 + 0x210)) {
      *(undefined8 *)(param_1 + 0x210) = 0;
    }
    FUN_1422c4630();
    if (*(longlong *)(param_1 + 0x208) == 0) {
      FUN_1422d7d20(param_1,*(undefined8 *)(param_1 + 0x210));
    }
  }
  return;
}



// FUNCTION 1422d6620 FUN_1422d6620 body=211 status=ok
// SIG undefined FUN_1422d6620(void)

void FUN_1422d6620(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    if (((*(char *)(lVar4 + 0x12) == '\0') && (*(char *)(lVar4 + 0x11) == '\0')) &&
       (param_2 != '\0')) {
      FUN_142833de0();
    }
    local_10 = (longlong *)0x0;
    if (param_1 != &local_18) {
      *param_1 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&local_10);
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
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(uint *)((longlong)param_1 + 0x1c) < 0x80000000) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  return;
}



// FUNCTION 1422d6700 ScanPathForPrimaryAssets body=360 status=ok
// SIG undefined ScanPathForPrimaryAssets(void)

undefined4
UAssetManager::ScanPathForPrimaryAssets
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
          undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  void *pvVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *local_38;
  int local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_20 = *(int *)(param_3 + 1);
  lVar5 = (longlong)local_20;
  pvVar1 = (void *)*param_3;
  local_28 = (void *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
    ::_guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar5 * 2);
  }
  local_38 = (longlong *)0x0;
  local_30 = 1;
  TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_38,1);
  pvVar1 = local_28;
  plVar3 = local_38;
  *local_38 = 0;
  lVar5 = (longlong)local_20;
  *(int *)(local_38 + 1) = local_20;
  if (local_20 == 0) {
    *(undefined4 *)((longlong)local_38 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(local_38,local_20,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*plVar3,pvVar1,lVar5 * 2);
  }
  uVar2 = (**(code **)(*param_1 + 0x278))(param_1,param_2,&local_38,param_4,param_5,param_6,param_7)
  ;
  plVar3 = local_38;
  for (iVar4 = local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 1422d6870 FUN_1422d6870 body=2987 status=ok
// SIG undefined FUN_1422d6870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1422d6870(longlong *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                 char param_5,char param_6)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  short *psVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong local_res10 [3];
  undefined1 auStack_338 [32];
  undefined1 local_318;
  longlong *local_308;
  undefined8 local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  int local_2c0 [2];
  longlong local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  undefined8 *local_298;
  undefined8 local_290;
  undefined2 *local_288;
  int local_280;
  longlong local_278;
  longlong *plStack_270;
  longlong *local_268;
  longlong local_260;
  longlong local_258;
  longlong *local_250;
  longlong *local_248;
  longlong local_238;
  longlong *plStack_230;
  undefined1 local_228 [8];
  undefined1 local_220 [8];
  longlong local_218 [2];
  longlong local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  longlong local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  longlong local_138;
  undefined4 local_130;
  undefined4 local_128;
  longlong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  char local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
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
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  plVar12 = param_1 + 0x6f;
  local_308 = (longlong *)0x0;
  local_300 = 0;
  local_2f8 = (longlong *)0x0;
  local_2f0 = 0;
  if ((int)param_1[0x70] != *(int *)((longlong)param_1 + 0x3ac)) {
    plVar21 = (longlong *)param_1[0x77];
    if ((longlong *)param_1[0x77] == (longlong *)0x0) {
      plVar21 = param_1 + 0x76;
    }
    iVar9 = *(int *)((longlong)plVar21 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                    (longlong)(int)param_1[0x78] - 1U) * 4);
    if (iVar9 != -1) {
      do {
        plVar21 = (longlong *)((longlong)iVar9 * 0x20 + *plVar12);
        if (*plVar21 == param_2) {
          if (iVar9 != -1) goto LAB_1422d6942;
          break;
        }
        iVar9 = (int)plVar21[3];
      } while (iVar9 != -1);
    }
  }
  plVar21 = (longlong *)0x0;
LAB_1422d6942:
  plVar11 = plVar21 + 1;
  if (plVar21 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  local_res10[0] = param_2;
  local_2e8 = param_4;
  local_268 = param_1;
  if (param_6 == '\0') {
    if (plVar11 == (longlong *)0x0) {
      lVar10 = operator_new(0xf0);
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        local_318 = 0;
        FPrimaryAssetTypeInfo::FPrimaryAssetTypeInfo(lVar10,local_res10[0],param_4,param_5);
        *(undefined8 *)(lVar10 + 0x90) = 0;
        *(undefined8 *)(lVar10 + 0x98) = 0;
        *(undefined8 *)(lVar10 + 0xb0) = 0;
        *(undefined8 *)(lVar10 + 0xb8) = 0;
        *(undefined4 *)(lVar10 + 0xc0) = 0xffffffff;
        *(undefined4 *)(lVar10 + 0xc4) = 0;
        *(undefined8 *)(lVar10 + 0xd0) = 0;
        *(undefined4 *)(lVar10 + 0xd8) = 0;
        *(undefined8 *)(lVar10 + 0xe0) = 0;
        *(undefined8 *)(lVar10 + 0xe8) = 0;
      }
      plVar21 = (longlong *)0x0;
      plVar11 = (longlong *)operator_new(0x18);
      if (plVar11 != (longlong *)0x0) {
        *(undefined4 *)(plVar11 + 1) = 1;
        *plVar11 = (longlong)&PTR_FUN_14502e148;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        plVar11[2] = lVar10;
        plVar21 = plVar11;
      }
      local_278 = lVar10;
      plStack_270 = plVar21;
      SharedPointerInternals::EnableSharedFromThis(&local_278,lVar10,lVar10);
      local_238 = local_278;
      plStack_230 = plStack_270;
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_270 + 1) = (int)plStack_270[1] + 1;
        UNLOCK();
      }
      local_250 = local_res10;
      local_248 = &local_238;
      FUN_1416871a0(plVar12,local_2c0,&local_250,0);
      plVar21 = plStack_230;
      plVar11 = (longlong *)(*plVar12 + (longlong)local_2c0[0] * 0x20 + 8);
      if (plStack_230 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_230 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_230)(plStack_230);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar21 + 8))(plVar21,1);
          }
        }
      }
      plVar12 = plStack_270;
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        plVar21 = plStack_270 + 1;
        lVar10 = *plVar21;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_270)(plStack_270);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
    }
    lVar10 = *plVar11;
    if (((*(longlong *)(lVar10 + 0x30) == param_4) && (*(char *)(lVar10 + 0x38) == param_5)) &&
       (*(char *)(lVar10 + 0x39) == '\0')) {
      puVar13 = (undefined8 *)*param_3;
      puVar22 = puVar13 + (longlong)*(int *)(param_3 + 1) * 2;
      local_298 = puVar22;
      if (puVar13 != puVar22) {
        plVar12 = (longlong *)(lVar10 + 0x70);
        plVar21 = local_308;
        plVar11 = local_2f8;
LAB_1422d6b50:
        iVar9 = TArray<FString,FDefaultAllocator>::Find(plVar12,puVar13);
        if (iVar9 == -1) {
          iVar9 = *(int *)(lVar10 + 0x78);
          *(int *)(lVar10 + 0x78) = iVar9 + 1;
          if (*(int *)(lVar10 + 0x7c) < iVar9 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar9);
          }
          FString::FString((longlong)iVar9 * 0x10 + *plVar12,puVar13);
        }
        psVar3 = (short *)*puVar13;
        for (psVar15 = psVar3; psVar15 != psVar3 + *(int *)(puVar13 + 1); psVar15 = psVar15 + 1) {
          if (*psVar15 == 0x2e) {
            if ((int)((longlong)psVar15 - (longlong)psVar3 >> 1) != -1) {
              FUN_1417006f0(&local_288,puVar13);
              lVar20 = (longlong)(int)local_2f0;
              plVar18 = plVar11;
              if (plVar11 == plVar11 + lVar20 * 2) goto LAB_1422d6c52;
              goto LAB_1422d6c10;
            }
            break;
          }
        }
        lVar20 = (longlong)(int)local_300;
        for (plVar18 = plVar21; plVar18 != plVar21 + lVar20 * 2; plVar18 = plVar18 + 2) {
          if (*(int *)(puVar13 + 1) == 0) {
            puVar17 = &DAT_143f3eda8;
          }
          else {
            puVar17 = (undefined2 *)*puVar13;
          }
          if ((int)plVar18[1] == 0) {
            puVar16 = &DAT_143f3eda8;
          }
          else {
            puVar16 = (undefined2 *)*plVar18;
          }
          iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar16,puVar17);
          if (iVar9 == 0) {
            if ((int)((longlong)plVar18 - (longlong)plVar21 >> 4) != -1) goto LAB_1422d6d39;
            break;
          }
        }
        uVar23 = local_300;
        lVar20 = (longlong)(int)local_300;
        iVar9 = (int)local_300 + 1;
        local_300 = CONCAT44(local_300._4_4_,iVar9);
        if (local_300._4_4_ < iVar9) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_308,uVar23 & 0xffffffff);
          plVar21 = local_308;
        }
        FString::FString(plVar21 + lVar20 * 2,puVar13);
        goto LAB_1422d6d39;
      }
LAB_1422d6d56:
      plVar12 = (longlong *)UAssetManager::GetAssetRegistry(param_1);
      uVar23 = 0;
      local_198 = 0xffffffff;
      local_208 = 0;
      local_200 = 0;
      local_1f8 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_194 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = 0;
      local_170 = 0;
      local_158 = 0;
      local_150 = 0;
      local_148 = 0xffffffff;
      local_144 = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_2d0 = 0;
      local_2c8 = 0;
      if (param_4 != 0) {
        if (*(char *)((longlong)param_1 + 0x271) == '\0') {
          FName::ToString(local_res10,&local_2b8);
          local_118 = local_2b8;
          local_110 = (undefined4)local_2b0;
          local_10c = local_2b0._4_4_;
          local_2b0 = 0;
          local_2b8 = 0;
          local_108 = '\x01';
          TMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
          ::Emplace<FName,TOptional<FString>_>(&local_1c8,&DAT_1469e7758,&local_118);
          if ((local_108 != '\0') && (local_118 != 0)) {
            FMemory::Free();
          }
          if (local_2b8 != 0) {
            FMemory::Free();
          }
        }
        uVar24 = local_1d0;
        if (param_5 == '\0') {
          lVar10 = (longlong)(int)local_1d0;
          uVar14 = *(undefined8 *)(param_4 + 0x18);
          iVar9 = (int)local_1d0 + 1;
          local_1d0 = CONCAT44(local_1d0._4_4_,iVar9);
          if (local_1d0._4_4_ < iVar9) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_1d8,uVar24 & 0xffffffff);
          }
          *(undefined8 *)(local_1d8 + lVar10 * 8) = uVar14;
          local_128._0_2_ = CONCAT11(1,(undefined1)local_128);
        }
        else {
          local_2a8 = (longlong *)0x0;
          local_2a0 = 0;
          uVar14 = UBlueprintCore::GetPrivateStaticClass();
          FUN_1417a5100(uVar14,&local_2a8,1);
          uVar24 = (ulonglong)((longlong)(local_2a8 + (int)local_2a0) + (7 - (longlong)local_2a8))
                   >> 3;
          if (local_2a8 + (int)local_2a0 < local_2a8) {
            uVar24 = uVar23;
          }
          plVar21 = local_2a8;
          if (uVar24 != 0) {
            do {
              uVar6 = local_1d0;
              lVar10 = (longlong)(int)local_1d0;
              iVar9 = (int)local_1d0 + 1;
              uVar14 = *(undefined8 *)(*plVar21 + 0x18);
              local_1d0 = CONCAT44(local_1d0._4_4_,iVar9);
              if (local_1d0._4_4_ < iVar9) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&local_1d8,uVar6 & 0xffffffff);
              }
              plVar21 = plVar21 + 1;
              uVar23 = uVar23 + 1;
              *(undefined8 *)(local_1d8 + lVar10 * 8) = uVar14;
            } while (uVar23 != uVar24);
          }
          uVar23 = local_2c8;
          lVar10 = (longlong)(int)local_2c8;
          iVar9 = (int)local_2c8 + 1;
          uVar14 = *(undefined8 *)(local_2e8 + 0x18);
          local_2c8 = CONCAT44(local_2c8._4_4_,iVar9);
          if (local_2c8._4_4_ < iVar9) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_2d0,uVar23 & 0xffffffff);
          }
          local_78 = 0xffffffff;
          *(undefined8 *)(local_2d0 + lVar10 * 8) = uVar14;
          local_a8 = 0;
          local_a0 = 0;
          local_88 = 0;
          local_80 = 0;
          local_74 = 0;
          local_68 = 0;
          local_60 = 0;
          (**(code **)(*plVar12 + 0x90))(plVar12,&local_2d0,&local_a8,&local_f8);
          local_60 = 0;
          if (local_68 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (&local_a8);
          if (local_2a8 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
      }
      plVar11 = local_308;
      plVar18 = local_308 + (longlong)(int)local_300 * 2;
      for (plVar21 = local_308; plVar21 != plVar18; plVar21 = plVar21 + 2) {
        if ((int)plVar21[1] == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*plVar21;
        }
        puVar13 = (undefined8 *)FName::FName(local_228,puVar17,1);
        uVar23 = local_1f0;
        lVar10 = (longlong)(int)local_1f0;
        iVar9 = (int)local_1f0 + 1;
        local_1f0 = CONCAT44(local_1f0._4_4_,iVar9);
        if (local_1f0._4_4_ < iVar9) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_1f8,uVar23 & 0xffffffff);
        }
        *(undefined8 *)(local_1f8 + lVar10 * 8) = *puVar13;
      }
      plVar18 = local_2f8 + (longlong)(int)local_2f0 * 2;
      uVar5 = local_128;
      for (plVar21 = local_2f8; plVar21 != plVar18; plVar21 = plVar21 + 2) {
        if ((int)plVar21[1] == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*plVar21;
        }
        local_128 = uVar5;
        puVar13 = (undefined8 *)FName::FName(local_220,puVar17,1);
        uVar23 = local_200;
        lVar10 = (longlong)(int)local_200;
        iVar9 = (int)local_200 + 1;
        local_200 = CONCAT44(local_200._4_4_,iVar9);
        if (local_200._4_4_ < iVar9) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_208,uVar23 & 0xffffffff);
        }
        *(undefined8 *)(local_208 + lVar10 * 8) = *puVar13;
        uVar5 = local_128;
      }
      iVar9 = 0;
      local_128 = CONCAT31((int3)((uint)uVar5 >> 8),1);
      uVar7 = local_128;
      local_2e0 = 0;
      local_2d8 = 0;
      local_128._3_1_ = (undefined1)((uint)uVar5 >> 0x18);
      local_128._0_2_ = (undefined2)uVar7;
      local_128._0_3_ = CONCAT12(1,(undefined2)local_128);
      (**(code **)(*plVar12 + 0x40))(plVar12,&local_208,&local_2e0);
      lVar20 = (longlong)(int)local_2d8 * 0x58 + local_2e0;
      for (lVar10 = local_2e0; lVar10 != lVar20; lVar10 = lVar10 + 0x58) {
        lVar4 = *param_1;
        uVar14 = FName::ToString(lVar10 + 8,local_218);
        cVar8 = (**(code **)(lVar4 + 0x468))(param_1,uVar14);
        if (local_218[0] != 0) {
          FMemory::Free();
        }
        if ((cVar8 == '\0') &&
           ((param_5 == '\0' ||
            (cVar8 = (**(code **)(*param_1 + 0x3d0))(param_1,lVar10,&local_f8), cVar8 != '\0')))) {
          (**(code **)(*param_1 + 0x3c0))(param_1,&local_260,lVar10,local_res10[0]);
          local_290 = 0;
          if ((local_260 != 0) && ((local_2e8 = 0, local_258 != 0 && (local_260 == local_res10[0])))
             ) {
            iVar9 = iVar9 + 1;
            (**(code **)(*param_1 + 0x428))(param_1,&local_260,lVar10,0);
          }
        }
        plVar11 = local_308;
      }
      if (*(char *)((longlong)param_1 + 0x276) == '\0') {
        (**(code **)(*param_1 + 0x438))(param_1);
      }
      if ((int)local_2d8 != 0) {
        plVar12 = (longlong *)(local_2e0 + 0x30);
        iVar19 = (int)local_2d8;
        do {
          if (plVar12[1] != 0) {
            FMemory::Free();
          }
          plVar21 = (longlong *)*plVar12;
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar21 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar21 + 8))(plVar21,1);
              }
            }
          }
          plVar12 = plVar12 + 0xb;
          iVar19 = iVar19 + -1;
          plVar11 = local_308;
        } while (iVar19 != 0);
      }
      if (local_2e0 != 0) {
        FMemory::Free(local_2e0);
      }
      if (local_2d0 != 0) {
        FMemory::Free();
      }
      local_b0 = 0;
      if (local_b8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_f8);
      local_130 = 0;
      if (local_138 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_178);
      local_180 = 0;
      if (local_188 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(&local_1c8,0);
      if (local_1a8 != 0) {
        FMemory::Free();
      }
      if (local_1c8 != 0) {
        FMemory::Free();
      }
      if (local_1d8 != 0) {
        FMemory::Free();
      }
      if (local_1e8 != 0) {
        FMemory::Free();
      }
      if (local_1f8 != 0) {
        FMemory::Free();
      }
      if (local_208 != 0) {
        FMemory::Free();
      }
      goto LAB_1422d7394;
    }
  }
  iVar9 = 0;
  plVar11 = local_308;
LAB_1422d7394:
  plVar21 = local_2f8;
  plVar12 = local_2f8;
  for (iVar19 = (int)local_2f0; iVar19 != 0; iVar19 = iVar19 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (plVar21 != (longlong *)0x0) {
    FMemory::Free(plVar21);
  }
  plVar12 = plVar11;
  for (iVar19 = (int)local_300; iVar19 != 0; iVar19 = iVar19 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return iVar9;
  while (plVar18 = plVar18 + 2, plVar18 != plVar11 + lVar20 * 2) {
LAB_1422d6c10:
    puVar17 = &DAT_143f3eda8;
    if (local_280 != 0) {
      puVar17 = local_288;
    }
    if ((int)plVar18[1] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*plVar18;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar16,puVar17);
    if (iVar9 == 0) {
      if ((int)((longlong)plVar18 - (longlong)plVar11 >> 4) != -1) goto LAB_1422d6cb7;
      break;
    }
  }
LAB_1422d6c52:
  uVar23 = local_2f0;
  lVar20 = (longlong)(int)local_2f0;
  iVar9 = (int)local_2f0 + 1;
  local_2f0 = CONCAT44(local_2f0._4_4_,iVar9);
  if (local_2f0._4_4_ < iVar9) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_2f8,uVar23 & 0xffffffff);
    plVar11 = local_2f8;
  }
  puVar17 = local_288;
  plVar18 = plVar11 + lVar20 * 2;
  *plVar18 = 0;
  lVar20 = (longlong)local_280;
  *(int *)(plVar18 + 1) = local_280;
  if (local_280 == 0) {
    *(undefined4 *)((longlong)plVar18 + 0xc) = 0;
    puVar22 = local_298;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar18,local_280,0);
    _guard_xfg_dispatch_icall_nop((void *)*plVar18,puVar17,lVar20 * 2);
    puVar22 = local_298;
  }
LAB_1422d6cb7:
  if (local_288 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_1422d6d39:
  puVar13 = puVar13 + 2;
  param_1 = local_268;
  param_4 = local_2e8;
  if (puVar13 == puVar22) goto LAB_1422d6d56;
  goto LAB_1422d6b50;
}



// FUNCTION 1422d7420 FUN_1422d7420 body=668 status=ok
// SIG undefined FUN_1422d7420(void)

void FUN_1422d7420(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined8 local_c8 [4];
  longlong local_a8;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_8f;
  longlong *local_88;
  int local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  longlong *local_58;
  int local_50;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1[0x79] == 0) {
    puVar3 = (undefined8 *)FName::FName(local_res8,L"AssetRegistry",1);
    uVar1 = *puVar3;
    uVar4 = FUN_14168dc80();
    plVar5 = (longlong *)FUN_141690010(uVar4,uVar1);
    lVar6 = (**(code **)(*plVar5 + 0x48))(plVar5);
    param_1[0x79] = lVar6;
  }
  lVar6 = param_1[0x7a];
  if (lVar6 == 0) {
    plVar5 = (longlong *)UAssetManagerSettings::GetPrivateStaticClass();
    lVar6 = plVar5[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar6 = plVar5[0x1f];
    }
    param_1[0x7a] = lVar6;
  }
  (**(code **)(*param_1 + 0x288))(param_1);
  lVar10 = *(longlong *)(lVar6 + 0x38);
  lVar9 = (longlong)*(int *)(lVar6 + 0x40) * 0x90 + lVar10;
  for (; lVar10 != lVar9; lVar10 = lVar10 + 0x90) {
    FUN_1422bcca0(local_c8,lVar10);
    cVar2 = (**(code **)(*param_1 + 0x450))(param_1,local_c8);
    plVar5 = local_58;
    iVar7 = local_50;
    if (cVar2 == '\0') {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (local_78);
      plVar5 = local_88;
      for (iVar7 = local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
    }
    else {
      (**(code **)(*param_1 + 0x278))(param_1,local_c8[0],&local_58,local_98,local_90,local_8f,0);
      (**(code **)(*param_1 + 0x398))(param_1,local_c8[0],local_68);
      plVar5 = local_58;
      for (iVar7 = local_50; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (local_78);
      plVar5 = local_88;
      for (iVar7 = local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
  }
  (**(code **)(*param_1 + 0x290))(param_1);
  plVar5 = *(longlong **)(lVar6 + 0x58);
  plVar8 = plVar5 + (longlong)*(int *)(lVar6 + 0x60) * 4;
  for (; plVar5 != plVar8; plVar5 = plVar5 + 4) {
    if (*plVar5 != DAT_146aef3a0) {
      local_38 = (undefined4)*plVar5;
      uStack_34 = *(undefined4 *)((longlong)plVar5 + 4);
      uStack_30 = (undefined4)plVar5[1];
      uStack_2c = *(undefined4 *)((longlong)plVar5 + 0xc);
      (**(code **)(*param_1 + 0x3a0))(param_1,&local_38,plVar5 + 2);
    }
  }
  return;
}



// FUNCTION 1422d76c0 FUN_1422d76c0 body=66 status=ok
// SIG undefined FUN_1422d76c0(void)

void FUN_1422d76c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  (**(code **)(**(longlong **)(lVar1 + 0x1b8) + 0x188))(*(longlong **)(lVar1 + 0x1b8),param_1);
  FUN_1422c0870(param_1);
  UActorComponent::SendRenderDynamicData_Concurrent(param_1);
  return;
}



// FUNCTION 1422d7710 thunk_FUN_1422f8fd0 body=5 status=ok
// SIG undefined thunk_FUN_1422f8fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_1422f8fd0(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  undefined4 uStack_58;
  undefined2 *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  ulonglong uStack_20;
  ulonglong uVar9;
  
  uStack_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FUN_141763960();
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x39);
  uVar9 = 0;
  iVar8 = 0;
  if (((int)param_2[8] < 0xf0) && ((int)param_2[8] != 0xdd)) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar3 = UObject::GetPrivateStaticClass();
      for (lVar6 = *(longlong *)(param_1 + 0x28); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar3) {
          if (*(longlong *)(param_1 + 0x28) != 0) {
            uVar4 = UObject::GetPrivateStaticClass();
            for (uVar11 = *(ulonglong *)(param_1 + 0x28);
                (uVar5 = uVar9, uVar11 != 0 &&
                (uVar5 = *(ulonglong *)(param_1 + 0x28), uVar11 != uVar4));
                uVar11 = *(ulonglong *)(uVar11 + 0x30)) {
            }
            *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) | 0x40;
            puStack_48 = (undefined2 *)0x0;
            uStack_40 = 0;
            uVar11 = uVar9;
            if (*(longlong *)(param_1 + 0x28) != 0) {
              uVar5 = UObject::GetPrivateStaticClass();
              for (uVar4 = *(ulonglong *)(param_1 + 0x28);
                  (uVar11 = uVar9, uVar4 != 0 &&
                  (uVar11 = *(ulonglong *)(param_1 + 0x28), uVar4 != uVar5));
                  uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
              }
            }
            uStack_58 = 0;
            FUN_1417a5b30(uVar11,&puStack_48,1,0);
            while( true ) {
              iVar10 = (int)uVar9;
              if ((iVar10 < 0) || ((int)uStack_40 <= iVar10)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) break;
              *(uint *)(*(longlong *)(puStack_48 + (longlong)iVar10 * 4) + 8) =
                   *(uint *)(*(longlong *)(puStack_48 + (longlong)iVar10 * 4) + 8) | 0x40;
              uVar9 = (ulonglong)(iVar10 + 1);
            }
            if (puStack_48 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          break;
        }
      }
    }
    puVar1 = param_1;
    if (param_1 != (undefined1 *)0x0) {
      lVar6 = UBlueprint::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && ((*(byte *)(param_2 + 5) & 1) != 0)) && ((param_1[0x68] & 1) != 0)) {
        puStack_48 = (undefined2 *)0x0;
        puVar1 = auStack_78;
      }
    }
    (**(code **)(*param_2 + 0x30))(param_2,puVar1 + 0x30);
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (((*(int *)(param_1 + 0x48) == 0 && *(int *)(param_1 + 0x44) == 0) &&
      *(int *)(param_1 + 0x40) == 0) && *(int *)(param_1 + 0x3c) == 0)) {
    UObjectBaseUtility::GetPathName(param_1,&puStack_48,0);
    if (uStack_40._4_4_ != (int)uStack_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&puStack_48,uStack_40 & 0xffffffff);
    }
    if ((int)uStack_40 != 0) {
      iVar8 = (int)uStack_40 + -1;
    }
    puVar7 = &DAT_143f3eda8;
    if ((int)uStack_40 != 0) {
      puVar7 = puStack_48;
    }
    FSHA1::HashBuffer(puVar7,iVar8 * 2,auStack_38);
    *(undefined4 *)(param_1 + 0x3c) = uStack_34;
    *(undefined4 *)(param_1 + 0x40) = uStack_30;
    *(undefined4 *)(param_1 + 0x44) = uStack_2c;
    *(undefined4 *)(param_1 + 0x48) = uStack_28;
    if (puStack_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1422d7720 FUN_1422d7720 body=441 status=ok
// SIG undefined FUN_1422d7720(void)

void FUN_1422d7720(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int local_res8 [2];
  
  FUN_14234e7d0();
  if (((*(byte *)(param_2 + 5) & 1) != 0) && ((int)param_2[8] < 0xd9)) {
    *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x308);
  }
  if (0x118 < (int)param_2[8]) {
    FUN_1417225e0(param_1 + 0x360,param_2,param_1,0xffffffff);
    FUN_1417225e0(param_1 + 0x3d0,param_2,param_1,0xffffffff);
  }
  FUN_1417225e0(param_1 + 0x440,param_2,param_1,0xffffffff);
  plVar1 = (longlong *)param_2[1];
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_res8[0] = *(int *)(param_1 + 0x340);
    if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
  }
  else {
    if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if (1 < local_res8[0]) {
      iVar2 = IStreamingManager::GetNumWantingResourcesID(param_1 + 0x360);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x340) = local_res8[0];
        goto LAB_1422d7873;
      }
    }
    *(undefined4 *)(param_1 + 0x340) = 0;
  }
LAB_1422d7873:
  if ((((*(byte *)(param_2 + 5) & 1) != 0) && ((int)param_2[8] < 0x119)) &&
     (*(int *)(param_1 + 0x340) == 2)) {
    iVar2 = FUntypedBulkData::GetBulkDataSize(param_1 + 0x440);
    iVar2 = (int)(((ulonglong)(longlong)iVar2 >> 3) /
                 (ulonglong)
                 (longlong)
                 (*(int *)(param_1 + 0x32c) * *(int *)(param_1 + 0x328) * *(int *)(param_1 + 0x324))
                 );
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 800) = iVar2;
  }
  return;
}



// FUNCTION 1422d78e0 FUN_1422d78e0 body=440 status=ok
// SIG undefined FUN_1422d78e0(void)

void FUN_1422d78e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  
  cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar3 == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x1e8);
    piVar6 = (int *)0x0;
    if (lVar2 != 0) {
      TIndirectArray<FStreamedAudioChunk,FDefaultAllocator>::
      ~TIndirectArray<FStreamedAudioChunk,FDefaultAllocator>(lVar2 + 0x10);
      FMemory::operator_delete(lVar2,0x20);
      *(undefined8 *)(param_1 + 0x1e8) = 0;
    }
    piVar4 = (int *)operator_new(0x20);
    piVar8 = piVar6;
    if (piVar4 != (int *)0x0) {
      piVar4[2] = 0;
      piVar4[3] = 0;
      piVar4[4] = 0;
      piVar4[5] = 0;
      piVar4[6] = 0;
      piVar4[7] = 0;
      piVar8 = piVar4;
    }
    *(int **)(param_1 + 0x1e8) = piVar8;
    piVar4 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,piVar8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,piVar8,4);
      }
    }
    else {
      *piVar8 = *piVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    (**(code **)(*param_2 + 0x40))(param_2,piVar8 + 2);
    if (((*(byte *)(param_2 + 5) & 1) != 0) &&
       (TIndirectArray<FStreamedAudioChunk,FDefaultAllocator>::Empty(piVar8 + 4,*piVar8),
       piVar4 = piVar6, 0 < *piVar8)) {
      do {
        uVar5 = FMemory::Malloc(0x78);
        iVar1 = piVar8[6];
        piVar8[6] = iVar1 + 1;
        if (piVar8[7] < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(piVar8 + 4);
        }
        *(undefined8 *)(*(longlong *)(piVar8 + 4) + (longlong)iVar1 * 8) = uVar5;
        lVar2 = *(longlong *)(*(longlong *)(piVar8 + 4) + (longlong)iVar1 * 8);
        if (lVar2 != 0) {
          FUntypedBulkData::FUntypedBulkData(lVar2 + 8);
          *(undefined ***)(lVar2 + 8) = &PTR__scalar_deleting_destructor__143f48b90;
        }
        uVar7 = (int)piVar4 + 1;
        piVar4 = (int *)(ulonglong)uVar7;
      } while ((int)uVar7 < *piVar8);
    }
    piVar4 = piVar6;
    if (0 < *piVar8) {
      do {
        FUN_14280f420(*(undefined8 *)(*(longlong *)(piVar8 + 4) + (longlong)piVar6),param_2,param_1,
                      piVar4);
        uVar7 = (int)piVar4 + 1;
        piVar6 = piVar6 + 2;
        piVar4 = (int *)(ulonglong)uVar7;
      } while ((int)uVar7 < *piVar8);
    }
  }
  return;
}



// FUNCTION 1422d7aa0 SerializeWaveFile body=519 status=ok
// SIG undefined SerializeWaveFile(void)

void SerializeWaveFile(longlong *param_1,void *param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = (int)param_3;
  *(undefined4 *)(param_1 + 1) = 0;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = iVar4 + 0x2c;
  if (iVar1 != iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1);
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + iVar2;
  if (iVar1 < iVar3 + iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar3 + *param_1),0,(longlong)iVar2);
  iVar1 = iVar4 + 0x24;
  *(undefined1 *)*param_1 = 0x52;
  *(undefined1 *)(*param_1 + 1) = 0x49;
  *(undefined1 *)(*param_1 + 2) = 0x46;
  *(undefined1 *)(*param_1 + 3) = 0x46;
  *(char *)(*param_1 + 4) = (char)iVar1;
  *(char *)(*param_1 + 5) = (char)((uint)iVar1 >> 8);
  *(char *)(*param_1 + 6) = (char)((uint)iVar1 >> 0x10);
  *(char *)(*param_1 + 7) = (char)((uint)iVar1 >> 0x18);
  *(undefined1 *)(*param_1 + 8) = 0x57;
  *(undefined1 *)(*param_1 + 9) = 0x41;
  *(undefined1 *)(*param_1 + 10) = 0x56;
  *(undefined1 *)(*param_1 + 0xb) = 0x45;
  *(undefined1 *)(*param_1 + 0xc) = 0x66;
  *(undefined1 *)(*param_1 + 0xd) = 0x6d;
  *(undefined1 *)(*param_1 + 0xe) = 0x74;
  *(undefined1 *)(*param_1 + 0xf) = 0x20;
  *(undefined1 *)(*param_1 + 0x10) = 0x10;
  *(undefined1 *)(*param_1 + 0x11) = 0;
  *(undefined1 *)(*param_1 + 0x12) = 0;
  *(undefined1 *)(*param_1 + 0x13) = 0;
  *(undefined1 *)(*param_1 + 0x14) = 1;
  *(undefined1 *)(*param_1 + 0x15) = 0;
  *(char *)(*param_1 + 0x16) = (char)param_4;
  *(char *)(*param_1 + 0x17) = (char)((uint)param_4 >> 8);
  *(char *)(*param_1 + 0x18) = (char)param_5;
  *(char *)(*param_1 + 0x19) = (char)((uint)param_5 >> 8);
  *(char *)(*param_1 + 0x1a) = (char)((uint)param_5 >> 0x10);
  iVar1 = param_4 * param_5 * 2;
  *(char *)(*param_1 + 0x1b) = (char)((uint)param_5 >> 0x18);
  *(char *)(*param_1 + 0x1c) = (char)iVar1;
  *(char *)(*param_1 + 0x1d) = (char)((uint)iVar1 >> 8);
  *(char *)(*param_1 + 0x1e) = (char)((uint)iVar1 >> 0x10);
  *(char *)(*param_1 + 0x1f) = (char)((uint)iVar1 >> 0x18);
  *(undefined1 *)(*param_1 + 0x20) = 2;
  *(undefined1 *)(*param_1 + 0x21) = 0;
  *(undefined1 *)(*param_1 + 0x22) = 0x10;
  *(undefined1 *)(*param_1 + 0x23) = 0;
  *(undefined1 *)(*param_1 + 0x24) = 100;
  *(undefined1 *)(*param_1 + 0x25) = 0x61;
  *(undefined1 *)(*param_1 + 0x26) = 0x74;
  *(undefined1 *)(*param_1 + 0x27) = 0x61;
  *(char *)(*param_1 + 0x28) = (char)param_3;
  *(char *)(*param_1 + 0x29) = (char)((ulonglong)param_3 >> 8);
  *(char *)(*param_1 + 0x2a) = (char)((ulonglong)param_3 >> 0x10);
  *(char *)(*param_1 + 0x2b) = (char)((ulonglong)param_3 >> 0x18);
  _guard_xfg_dispatch_icall_nop((void *)(*param_1 + 0x2c),param_2,(longlong)iVar4);
  return;
}



// FUNCTION 1422d7cb0 Set body=70 status=ok
// SIG undefined Set(void)

void FDynamicParameter::Set(float *param_1,float param_2,float param_3)

{
  if ((param_2 != param_1[6]) || (param_3 != param_1[4])) {
    param_1[6] = param_2;
    if (0.0 < param_3) {
      param_1[1] = *param_1;
      param_1[4] = param_3;
      param_1[3] = 0.0;
      param_1[2] = param_2 - *param_1;
      return;
    }
    param_1[1] = param_2;
    *param_1 = param_2;
    param_1[2] = 0.0;
    param_1[4] = 0.0;
  }
  return;
}



// FUNCTION 1422d7d00 SetVolumetricFogExtinctionScale body=23 status=ok
// SIG undefined SetVolumetricFogExtinctionScale(void)

void UExponentialHeightFogComponent::SetVolumetricFogExtinctionScale(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x2e4)) {
    *(float *)(param_1 + 0x2e4) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1422d7d20 FUN_1422d7d20 body=515 status=ok
// SIG undefined FUN_1422d7d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422d7d20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined1 local_94;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_90 = param_2;
  cVar2 = IsInAudioThread();
  if (cVar2 == '\0') {
    uStack_80 = (undefined1 **)local_90;
    local_48 = 0;
    local_38 = 0;
    local_88 = (longlong *)param_1;
    puVar3 = (undefined8 *)FUN_140438ef0(0x18,&local_68);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar3 + 1) = (undefined4)local_88;
      *(undefined4 *)((longlong)puVar3 + 0xc) = local_88._4_4_;
      *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_80._4_4_;
    }
    local_78 = &LAB_1422c2b80;
    FUN_1422f8a30(&local_78,local_94);
  }
  else if ((local_90 != 0) && (lVar1 = *(longlong *)(param_1 + 0x208), local_90 != lVar1)) {
    puVar5 = (undefined1 *)0x0;
    *(longlong *)(param_1 + 0x208) = local_90;
    if (lVar1 != 0) {
      TSet<TTuple<FRHIBlendState_*,FBlendStateInitializerRHI>,TDefaultMapHashableKeyFuncs<FRHIBlendState_*,FBlendStateInitializerRHI,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x218,&local_98,lVar1);
      puVar4 = puVar5;
      if (local_98 != -1) {
        puVar4 = (undefined1 *)((longlong)local_98 * 0x50 + *(longlong *)(param_1 + 0x218));
      }
      puVar6 = puVar4 + 8;
      if (puVar4 == (undefined1 *)0x0) {
        puVar6 = puVar5;
      }
      *puVar6 = 0;
      FAudioDevice::TryClearingSoundMix(param_1,lVar1);
    }
    TSet<TTuple<FRHIBlendState_*,FBlendStateInitializerRHI>,TDefaultMapHashableKeyFuncs<FRHIBlendState_*,FBlendStateInitializerRHI,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x218,&local_98,local_90);
    puVar4 = puVar5;
    if (local_98 != -1) {
      puVar4 = (undefined1 *)((longlong)local_98 * 0x50 + *(longlong *)(param_1 + 0x218));
    }
    puVar6 = puVar4 + 8;
    if (puVar4 == (undefined1 *)0x0) {
      puVar6 = puVar5;
    }
    if (puVar6 == (undefined1 *)0x0) {
      local_78 = (undefined1 *)0x0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_88 = &local_90;
      uStack_80 = &local_78;
      FUN_1422b9260(param_1 + 0x218,&local_98,&local_88,0);
      puVar6 = (undefined1 *)(*(longlong *)(param_1 + 0x218) + (longlong)local_98 * 0x50 + 8);
      FAudioDevice::ApplySoundMix(param_1,local_90,puVar6);
      if (*(longlong *)(param_1 + 0x2c8) != 0) {
        FAudioEffectsManager::SetMixSettings(*(longlong *)(param_1 + 0x2c8),local_90,0,0);
      }
    }
    *puVar6 = 1;
  }
  return;
}



// FUNCTION 1422d7f30 FUN_1422d7f30 body=272 status=ok
// SIG undefined FUN_1422d7f30(void)

void FUN_1422d7f30(undefined8 param_1,longlong param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined1 local_res8;
  undefined1 *local_c8 [2];
  uint local_b8 [8];
  undefined8 local_98;
  undefined4 local_88;
  
  uVar3 = *param_3;
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar12 = param_3[1];
  uVar6 = *(undefined8 *)(param_3 + 2);
  uVar7 = *(undefined8 *)(param_3 + 4);
  uVar5 = *(undefined4 *)(param_4 + 4);
  uVar1 = param_3[6];
  uVar2 = param_3[7];
  uVar8 = *param_4;
  uVar9 = param_4[1];
  uVar10 = param_4[2];
  uVar11 = param_4[3];
  local_98 = 0;
  local_88 = 0;
  puVar13 = (undefined8 *)FUN_140438ef0(0x60,local_b8);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_FUN_14502e0d8;
    puVar13[1] = param_1;
    *(undefined4 *)(puVar13 + 2) = uVar4;
    *(uint *)(puVar13 + 3) = *(uint *)(puVar13 + 3) & 0xfffffffe;
    *(uint *)(puVar13 + 3) = *(uint *)(puVar13 + 3) | ((uVar3 ^ local_b8[0]) & 1 ^ local_b8[0]) & 1;
    *(char *)((longlong)puVar13 + 0x1c) = (char)uVar12;
    *(uint *)(puVar13 + 6) = uVar1;
    *(uint *)((longlong)puVar13 + 0x34) = uVar2;
    puVar13[4] = uVar6;
    puVar13[5] = uVar7;
    puVar13[7] = uVar8;
    puVar13[8] = uVar9;
    puVar13[9] = uVar10;
    puVar13[10] = uVar11;
    *(undefined4 *)(puVar13 + 0xb) = uVar5;
  }
  local_c8[0] = &LAB_1422c2d40;
  FUN_1422f8a30(local_c8,local_res8);
  return;
}



// FUNCTION 1422d8040 FUN_1422d8040 body=432 status=ok
// SIG undefined FUN_1422d8040(void)

void FUN_1422d8040(longlong param_1,longlong param_2)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 local_res18;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong local_70 [3];
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) goto LAB_1422d815d;
  }
  if (param_2 == 0) {
    plVar3 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar6 = plVar3[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar6 = plVar3[0x1f];
    }
    local_78 = *(longlong *)(lVar6 + 0x80);
    FString::FString(local_70,lVar6 + 0x88);
    local_res18 = 0;
    if (local_78 != 0) {
      puVar4 = (undefined8 *)FSoftObjectPath::ToString(&local_78,&local_88);
      if (*(int *)(puVar4 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar4;
      }
      uVar5 = USoundMix::GetPrivateStaticClass();
      param_2 = FUN_141799c90(uVar5,0,puVar7,0,0,0,1);
      if (local_88 != 0) {
        FMemory::Free();
      }
    }
    if (local_70[0] != 0) {
      FMemory::Free();
    }
  }
LAB_1422d815d:
  cVar1 = IsInAudioThread();
  if (cVar1 == '\0') {
    local_28 = 0;
    local_18 = 0;
    local_88 = param_1;
    uStack_80 = param_2;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar4 + 1) = (undefined4)local_88;
      *(undefined4 *)((longlong)puVar4 + 0xc) = local_88._4_4_;
      *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_80._4_4_;
    }
    local_58[0] = &LAB_1422c2b50;
    FUN_1422f8a30(local_58,local_res18);
  }
  else {
    *(longlong *)(param_1 + 0x210) = param_2;
    FUN_1422d7d20(param_1,param_2);
  }
  return;
}



// FUNCTION 1422d81f0 FUN_1422d81f0 body=23 status=ok
// SIG undefined FUN_1422d81f0(void)

void FUN_1422d81f0(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x2f8)) {
    *(float *)(param_1 + 0x2f8) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1422d8210 FUN_1422d8210 body=60 status=ok
// SIG undefined FUN_1422d8210(void)

void FUN_1422d8210(longlong param_1,undefined8 param_2)

{
  int local_res8 [8];
  
  FLinearColor::ToFColor(param_2,local_res8,1);
  if (*(int *)(param_1 + 0x2fc) != local_res8[0]) {
    *(int *)(param_1 + 0x2fc) = local_res8[0];
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 1422d8250 FUN_1422d8250 body=23 status=ok
// SIG undefined FUN_1422d8250(void)

void FUN_1422d8250(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x2d8)) {
    *(float *)(param_1 + 0x2d8) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1422d8270 SetVolumetricFogScatteringDistribution body=23 status=ok
// SIG undefined SetVolumetricFogScatteringDistribution(void)

void UExponentialHeightFogComponent::SetVolumetricFogScatteringDistribution
               (longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x2dc)) {
    *(float *)(param_1 + 0x2dc) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1422d8290 FUN_1422d8290 body=168 status=ok
// SIG undefined FUN_1422d8290(void)

void FUN_1422d8290(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_res18;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  cVar1 = IsInAudioThread();
  if (cVar1 == '\0') {
    uStack_60 = CONCAT31(uStack_60._1_3_,param_2);
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      local_68 = (undefined4)param_1;
      uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
      *puVar2 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar2 + 1) = local_68;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_64;
      *(undefined4 *)(puVar2 + 2) = uStack_60;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_5c;
    }
    local_58[0] = &LAB_1422c2b90;
    FUN_1422f8a30(local_58,local_res18);
    return;
  }
  *(byte *)(param_1 + 0x359) = *(byte *)(param_1 + 0x359) & 0x7f;
  *(byte *)(param_1 + 0x359) = *(byte *)(param_1 + 0x359) | param_2 << 7;
  return;
}



// FUNCTION 1422d8340 SetVolumetricFogDistance body=23 status=ok
// SIG undefined SetVolumetricFogDistance(void)

void UExponentialHeightFogComponent::SetVolumetricFogDistance(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x2e8)) {
    *(float *)(param_1 + 0x2e8) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1422d8360 SetDirectionalInscatteringStartDistance body=23 status=ok
// SIG undefined SetDirectionalInscatteringStartDistance(void)

void UExponentialHeightFogComponent::SetDirectionalInscatteringStartDistance
               (longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x2e0)) {
    *(float *)(param_1 + 0x2e0) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1422d8380 SetFilterFrequency body=135 status=ok
// SIG undefined SetFilterFrequency(void)

void FSoundSource::SetFilterFrequency(longlong param_1)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  
  *(undefined4 *)(param_1 + 0x28) = 0x469c4000;
  cVar2 = *(char *)(*(longlong *)(param_1 + 8) + 0xb0);
  if (cVar2 == '\x03') {
    *(undefined4 *)(param_1 + 0x28) = 0x41a00000;
    return;
  }
  if (cVar2 != '\x06') {
    lVar3 = *(longlong *)(param_1 + 0x10);
    fVar4 = *(float *)(lVar3 + 0xd0);
    *(float *)(param_1 + 0x28) = fVar4;
    if (((*(byte *)(lVar3 + 0xa4) & 0x40) != 0) && (fVar1 = *(float *)(lVar3 + 0xcc), fVar1 < fVar4)
       ) {
      *(float *)(param_1 + 0x28) = fVar1;
      fVar4 = fVar1;
    }
    fVar1 = *(float *)(lVar3 + 0xd4);
    if (fVar1 < fVar4) {
      *(float *)(param_1 + 0x28) = fVar1;
      fVar4 = fVar1;
    }
    if (*(float *)(lVar3 + 0xd8) < fVar4) {
      *(float *)(param_1 + 0x28) = *(float *)(lVar3 + 0xd8);
    }
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar3 + 0xdc);
  }
  return;
}



// FUNCTION 1422d8410 SetFogCutoffDistance body=23 status=ok
// SIG undefined SetFogCutoffDistance(void)

void UExponentialHeightFogComponent::SetFogCutoffDistance(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x2d4)) {
    *(float *)(param_1 + 0x2d4) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1422d8430 SetGlobalFocusSettings body=157 status=ok
// SIG undefined SetGlobalFocusSettings(void)

void FAudioDevice::SetGlobalFocusSettings(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_res8;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar1 = param_2[1];
  local_28 = 0;
  *(undefined8 *)(param_1 + 0xf4) = *param_2;
  *(undefined8 *)(param_1 + 0xfc) = uVar1;
  local_18 = 0;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x104) = param_2[2];
  *(undefined8 *)(param_1 + 0x10c) = uVar1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  puVar5 = (undefined8 *)FUN_140438ef0(0x30,local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f4d098;
    puVar5[1] = param_1;
    puVar5[2] = uVar1;
    puVar5[3] = uVar2;
    puVar5[4] = uVar3;
    puVar5[5] = uVar4;
  }
  local_58[0] = &LAB_1422c2c10;
  FUN_1422f8a30(local_58,local_res8);
  return;
}



// FUNCTION 1422d84d0 SetGlobalPitchModulation body=267 status=ok
// SIG undefined SetGlobalPitchModulation(void)

void FAudioDevice::SetGlobalPitchModulation(longlong param_1,float param_2,float param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_res20;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  cVar1 = IsInAudioThread();
  if (cVar1 == '\0') {
    local_48 = 0;
    local_38 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_68);
    if (puVar2 != (undefined8 *)0x0) {
      local_88 = (undefined4)param_1;
      uStack_84 = (undefined4)((ulonglong)param_1 >> 0x20);
      *puVar2 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar2 + 1) = local_88;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_84;
      *(float *)(puVar2 + 2) = param_2;
      *(float *)((longlong)puVar2 + 0x14) = param_3;
    }
    local_78[0] = &LAB_1422c2bb0;
    FUN_1422f8a30(local_78,local_res20);
  }
  else if ((param_2 != *(float *)(param_1 + 0xd0)) || (param_3 != *(float *)(param_1 + 200))) {
    *(float *)(param_1 + 0xd0) = param_2;
    if (param_3 <= 0.0) {
      *(float *)(param_1 + 0xbc) = param_2;
      *(float *)(param_1 + 0xb8) = param_2;
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 200) = 0;
    }
    else {
      *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0xb8);
      *(float *)(param_1 + 200) = param_3;
      *(undefined4 *)(param_1 + 0xc4) = 0;
      *(float *)(param_1 + 0xc0) = param_2 - *(float *)(param_1 + 0xb8);
    }
  }
  return;
}



// FUNCTION 1422d85e0 SetLFEBleed body=46 status=ok
// SIG undefined SetLFEBleed(void)

undefined4 FSoundSource::SetLFEBleed(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x98);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  if (*(char *)(*(longlong *)(param_1 + 8) + 0xb0) == '\x05') {
    uVar1 = 0x41200000;
    *(undefined4 *)(param_1 + 0x24) = 0x41200000;
  }
  return uVar1;
}



// FUNCTION 1422d8610 FUN_1422d8610 body=1009 status=ok
// SIG undefined FUN_1422d8610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422d8610(longlong param_1,longlong param_2,int param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  int *piVar1;
  float *pfVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte bVar16;
  char cVar17;
  undefined4 uVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 *local_118;
  undefined1 *local_108 [2];
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar22 = (longlong)param_3;
  local_124 = 0xffffffff;
  local_118 = param_4;
  if (param_2 != 0) {
    local_124 = *(undefined4 *)(param_2 + 0xc);
    bVar16 = *(byte *)(param_1 + 0x359);
    if ((bVar16 & 0x20) == 0) {
      puVar20 = *(undefined8 **)(param_1 + 0x80);
      puVar23 = puVar20 + (longlong)*(int *)(param_1 + 0x88) * 2;
      if (puVar20 != puVar23) {
        do {
          plVar3 = (longlong *)puVar20[1];
          plVar4 = (longlong *)*puVar20;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar4 + 0x10))(plVar4,param_1,param_2);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar3 + 1;
            lVar21 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar21 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar19 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar19 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          puVar20 = puVar20 + 2;
        } while (puVar20 != puVar23);
        bVar16 = *(byte *)(param_1 + 0x359);
      }
      *(byte *)(param_1 + 0x359) = bVar16 | 0x20;
    }
  }
  local_b8 = *local_118;
  uStack_b0 = local_118[1];
  local_a8 = *(float *)(local_118 + 2);
  fStack_a4 = *(float *)((longlong)local_118 + 0x14);
  fStack_a0 = *(float *)(local_118 + 3);
  fStack_9c = *(float *)((longlong)local_118 + 0x1c);
  local_98 = *(float *)(local_118 + 4);
  fStack_94 = *(float *)((longlong)local_118 + 0x24);
  fStack_90 = *(float *)(local_118 + 5);
  fStack_8c = *(float *)((longlong)local_118 + 0x2c);
  cVar17 = FUN_140618120(&local_b8);
  if (((cVar17 == '\0') && (cVar17 = FUN_140618120(&local_a8), cVar17 == '\0')) &&
     (uVar18 = FUN_140618120(&local_98), (char)uVar18 == '\0')) {
    fVar24 = (float)local_b8 * (float)local_b8 + (float)uStack_b0 * (float)uStack_b0;
    fVar25 = local_b8._4_4_ * local_b8._4_4_ + uStack_b0._4_4_ * uStack_b0._4_4_;
    fVar26 = (float)uStack_b0 * (float)uStack_b0 + (float)local_b8 * (float)local_b8;
    fVar27 = uStack_b0._4_4_ * uStack_b0._4_4_ + local_b8._4_4_ * local_b8._4_4_;
    auVar5._4_4_ = -(uint)(fRam0000000146aef4a4 <
                          (float)((uint)(fRam0000000146aef454 - (fVar26 + fVar25)) &
                                 uRam0000000146aef3f4));
    auVar5._0_4_ = -(uint)(_DAT_146aef4a0 <
                          (float)((uint)(_DAT_146aef450 - (fVar25 + fVar24)) & _DAT_146aef3f0));
    auVar5._8_4_ = -(uint)(fRam0000000146aef4a8 <
                          (float)((uint)(fRam0000000146aef458 - (fVar27 + fVar26)) &
                                 uRam0000000146aef3f8));
    auVar5._12_4_ =
         -(uint)(fRam0000000146aef4ac <
                (float)((uint)(fRam0000000146aef45c - (fVar24 + fVar27)) & uRam0000000146aef3fc));
    iVar19 = movmskps(uVar18,auVar5);
    fVar24 = (float)local_b8;
    fVar25 = local_b8._4_4_;
    fVar26 = (float)uStack_b0;
    fVar27 = uStack_b0._4_4_;
    if (iVar19 == 0) goto LAB_1422d87c3;
  }
  local_b8 = CONCAT44(fRam00000001468b5b74,_DAT_1468b5b70);
  uStack_b0 = CONCAT44(fRam00000001468b5b7c,fRam00000001468b5b78);
  local_a8 = _DAT_1468b5b80;
  fStack_a4 = fRam00000001468b5b84;
  fStack_a0 = fRam00000001468b5b88;
  fStack_9c = fRam00000001468b5b8c;
  local_98 = _DAT_1468b5b90;
  fStack_94 = fRam00000001468b5b94;
  fStack_90 = fRam00000001468b5b98;
  fStack_8c = fRam00000001468b5b9c;
  fVar24 = _DAT_1468b5b70;
  fVar25 = fRam00000001468b5b74;
  fVar26 = fRam00000001468b5b78;
  fVar27 = fRam00000001468b5b7c;
LAB_1422d87c3:
  iVar19 = *(int *)(param_1 + 0x98);
  if (param_3 < iVar19) {
    lVar21 = *(longlong *)(param_1 + 0x90);
    local_120 = 0x38d1b717;
    pfVar2 = (float *)(lVar21 + 0x10 + lVar22 * 0x30);
    auVar6._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar2[1] - fStack_a4) & uRam0000000146aef3f4));
    auVar6._0_4_ = -(uint)(0.0001 < (float)((uint)(*pfVar2 - local_a8) & _DAT_146aef3f0));
    auVar6._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar2[2] - fStack_a0) & uRam0000000146aef3f8));
    auVar6._12_4_ = -(uint)(0.0001 < (float)((uint)(pfVar2[3] - fStack_9c) & uRam0000000146aef3fc));
    iVar19 = movmskps(iVar19,auVar6);
    if (iVar19 == 0) {
      pfVar2 = (float *)(lVar21 + lVar22 * 0x30);
      auVar7._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar2[1] - fVar25) & uRam0000000146aef3f4));
      auVar7._0_4_ = -(uint)(0.0001 < (float)((uint)(*pfVar2 - fVar24) & _DAT_146aef3f0));
      auVar7._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar2[2] - fVar26) & uRam0000000146aef3f8));
      auVar7._12_4_ = -(uint)(0.0001 < (float)((uint)(pfVar2[3] - fVar27) & uRam0000000146aef3fc));
      iVar19 = movmskps(0,auVar7);
      if ((iVar19 == 0) ||
         (auVar8._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar2[1] + fVar25) & uRam0000000146aef3f4)
                                ),
         auVar8._0_4_ = -(uint)(0.0001 < (float)((uint)(*pfVar2 + fVar24) & _DAT_146aef3f0)),
         auVar8._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar2[2] + fVar26) & uRam0000000146aef3f8))
         , auVar8._12_4_ =
                -(uint)(0.0001 < (float)((uint)(pfVar2[3] + fVar27) & uRam0000000146aef3fc)),
         iVar19 = movmskps(iVar19,auVar8), iVar19 == 0)) {
        pfVar2 = (float *)(lVar21 + 0x20 + lVar22 * 0x30);
        auVar9._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar2[1] - fStack_94) & uRam0000000146aef3f4
                                               ));
        auVar9._0_4_ = -(uint)(0.0001 < (float)((uint)(*pfVar2 - local_98) & _DAT_146aef3f0));
        auVar9._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar2[2] - fStack_90) & uRam0000000146aef3f8
                                               ));
        auVar9._12_4_ =
             -(uint)(0.0001 < (float)((uint)(pfVar2[3] - fStack_8c) & uRam0000000146aef3fc));
        iVar19 = movmskps(0,auVar9);
        if (iVar19 == 0) {
          return;
        }
      }
    }
  }
  else {
    TArray<FTransform,FDefaultAllocator>::AddDefaulted
              ((longlong *)(param_1 + 0x90),(param_3 - iVar19) + 1);
    lVar21 = *(longlong *)(param_1 + 0x90);
    fVar24 = (float)local_b8;
    fVar25 = local_b8._4_4_;
    fVar26 = (float)uStack_b0;
    fVar27 = uStack_b0._4_4_;
  }
  pfVar2 = (float *)(lVar21 + lVar22 * 0x30);
  *pfVar2 = fVar24;
  pfVar2[1] = fVar25;
  pfVar2[2] = fVar26;
  pfVar2[3] = fVar27;
  pfVar2 = (float *)(lVar21 + 0x10 + lVar22 * 0x30);
  *pfVar2 = local_a8;
  pfVar2[1] = fStack_a4;
  pfVar2[2] = fStack_a0;
  pfVar2[3] = fStack_9c;
  puVar20 = (undefined8 *)(lVar21 + 0x20 + lVar22 * 0x30);
  *puVar20 = CONCAT44(fStack_94,local_98);
  puVar20[1] = CONCAT44(fStack_8c,fStack_90);
  if (param_2 != 0) {
    puVar20 = *(undefined8 **)(param_1 + 0x80);
    puVar23 = puVar20 + (longlong)*(int *)(param_1 + 0x88) * 2;
    for (; puVar20 != puVar23; puVar20 = puVar20 + 2) {
      plVar3 = (longlong *)puVar20[1];
      plVar4 = (longlong *)*puVar20;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_138 = param_5;
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2,param_3,&local_b8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        lVar22 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar22 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  uVar15 = uStack_b0;
  uVar14 = local_b8;
  uVar10 = CONCAT44(fStack_a4,local_a8);
  uVar11 = CONCAT44(fStack_9c,fStack_a0);
  uVar12 = CONCAT44(fStack_94,local_98);
  uVar13 = CONCAT44(fStack_8c,fStack_90);
  local_d8 = 0;
  local_c8 = 0;
  puVar20 = (undefined8 *)FUN_140438ef0(0x60,local_f8);
  if (puVar20 != (undefined8 *)0x0) {
    *puVar20 = &PTR_CopyToEmptyStorage_14502e0c0;
    *(undefined4 *)(puVar20 + 3) = local_124;
    puVar20[2] = param_1;
    *(int *)((longlong)puVar20 + 0x1c) = param_3;
    puVar20[4] = uVar14;
    puVar20[5] = uVar15;
    puVar20[6] = uVar10;
    puVar20[7] = uVar11;
    puVar20[8] = uVar12;
    puVar20[9] = uVar13;
    *(undefined4 *)(puVar20 + 10) = param_5;
  }
  local_108[0] = &LAB_1422c2e40;
  FUN_1422f8a30(local_108,local_128);
  return;
}



// FUNCTION 1422d8a10 FUN_1422d8a10 body=129 status=ok
// SIG undefined FUN_1422d8a10(void)

void FUN_1422d8a10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 local_res8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar1 = *param_2;
  local_28 = 0;
  local_18 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar3 != (undefined8 *)0x0) {
    local_78 = (undefined4)param_1;
    uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_70 = (undefined4)uVar1;
    uStack_6c = (undefined4)((ulonglong)uVar1 >> 0x20);
    *(undefined4 *)(puVar3 + 1) = local_78;
    *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_74;
    *(undefined4 *)(puVar3 + 2) = uStack_70;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_6c;
    *puVar3 = &PTR_FUN_143f4d0b0;
    puVar3[3] = CONCAT44(uStack_64,uVar2);
  }
  local_58[0] = &LAB_1422c2dc0;
  FUN_1422f8a30(local_58,local_res8);
  return;
}



// FUNCTION 1422d8aa0 SetLocation body=27 status=ok
// SIG undefined SetLocation(void)

void FAudioDevice::FCreateComponentParams::SetLocation(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 0x3c) = *param_2;
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return;
}



// FUNCTION 1422d8ad0 SetMixDebugState body=154 status=ok
// SIG undefined SetMixDebugState(void)

void FAudioDevice::SetMixDebugState(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_res18;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  cVar1 = IsInAudioThread();
  if (cVar1 == '\0') {
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      local_68 = (undefined4)param_1;
      uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
      *puVar2 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar2 + 1) = local_68;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_64;
      *(undefined4 *)(puVar2 + 2) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_5c;
    }
    local_58[0] = &LAB_1422c2df0;
    FUN_1422f8a30(local_58,local_res18);
    return;
  }
  *(char *)(param_1 + 0xb0) = (char)param_2;
  return;
}



// FUNCTION 1422d8b70 FUN_1422d8b70 body=51 status=ok
// SIG undefined FUN_1422d8b70(void)

void FUN_1422d8b70(longlong *param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xf) & 0xfb | param_2 << 2;
  *(byte *)(param_1 + 0xf) = bVar1;
  if (((bVar1 & 8) != 0) && ((bVar1 & 6) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001422d8b8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  }
  if (((bVar1 & 8) == 0) && ((bVar1 & 6) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001422d8b9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x78))();
    return;
  }
  return;
}



// FUNCTION 1422d8bb0 SetPrimaryAssetRules body=103 status=ok
// SIG undefined SetPrimaryAssetRules(void)

void UAssetManager::SetPrimaryAssetRules(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  int *local_10;
  
  if ((((*param_3 == -1) && ((char)param_3[1] == '\x01')) && (param_3[2] == -1)) &&
     ((char)param_3[3] == '\0')) {
    TSet<TTuple<FPrimaryAssetId,FPrimaryAssetRules>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,FPrimaryAssetRules,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x277) = 0;
    return;
  }
  local_18 = param_2;
  local_10 = param_3;
  FUN_1422b94d0(param_1 + 0x78,local_res8,&local_18,0);
  *(undefined1 *)(param_1 + 0x277) = 0;
  return;
}



// FUNCTION 1422d8c20 SetPrimaryAssetTypeRules body=162 status=ok
// SIG undefined SetPrimaryAssetTypeRules(void)

void UAssetManager::SetPrimaryAssetTypeRules(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x380) != *(int *)(param_1 + 0x3ac)) {
    lVar3 = *(longlong *)(param_1 + 0x3b8);
    if (*(longlong *)(param_1 + 0x3b8) == 0) {
      lVar3 = param_1 + 0x3b0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x3c0) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x378));
        if (*plVar5 == param_2) {
          if (iVar2 != -1) goto LAB_1422d8ca1;
          break;
        }
        iVar2 = (int)plVar5[3];
      } while (iVar2 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1422d8ca1:
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    lVar3 = *plVar4;
    uVar1 = param_3[1];
    *(undefined8 *)(lVar3 + 0x60) = *param_3;
    *(undefined8 *)(lVar3 + 0x68) = uVar1;
  }
  return;
}



// FUNCTION 1422d8cd0 SetReverbApplied body=81 status=ok
// SIG undefined SetReverbApplied(void)

byte FSoundSource::SetReverbApplied(longlong param_1,char param_2)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (((*(uint *)((longlong)plVar1 + 0xa4) & 0x800) == 0) || (param_2 == '\0')) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  bVar2 = *(byte *)(param_1 + 0x78) & 0xfe;
  *(byte *)(param_1 + 0x78) = bVar2 | bVar3;
  bVar3 = bVar2 | bVar3;
  if ((*(uint *)((longlong)plVar1 + 0xa4) & 0x400) != 0) {
    *(byte *)(param_1 + 0x78) = bVar2;
    bVar3 = bVar2;
  }
  if (2 < *(int *)(*plVar1 + 0xe4)) {
    bVar3 = bVar3 & 0xfe;
    *(byte *)(param_1 + 0x78) = bVar3;
  }
  return bVar3 & 1;
}



// FUNCTION 1422d8d30 FUN_1422d8d30 body=596 status=ok
// SIG undefined FUN_1422d8d30(void)

void FUN_1422d8d30(longlong param_1,ulonglong param_2,undefined1 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,byte param_7)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined1 *local_res18;
  int local_b8 [2];
  undefined1 **local_b0;
  undefined1 **local_a8;
  longlong local_a0;
  ulonglong uStack_98;
  undefined1 *local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68 [12];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  byte local_24;
  
  if ((param_2 != 0) && (param_3 != (undefined1 *)0x0)) {
    local_res10 = param_2;
    local_res18 = param_3;
    cVar3 = IsInAudioThread();
    if (cVar3 == '\0') {
      uStack_98 = local_res10;
      local_90 = local_res18;
      local_68[8] = 0;
      local_68[9] = 0;
      local_38 = (ulonglong)local_38._4_4_ << 0x20;
      uStack_7c = CONCAT31(uStack_7c._1_3_,param_7);
      uStack_84 = param_5;
      local_80 = param_6;
      local_a0 = param_1;
      uStack_88 = param_4;
      puVar4 = (undefined8 *)FUN_140438ef0(0x30,local_68);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_143f4d098;
        puVar4[1] = local_a0;
        puVar4[2] = uStack_98;
        puVar4[3] = local_90;
        puVar4[4] = CONCAT44(uStack_84,uStack_88);
        puVar4[5] = CONCAT44(uStack_7c,local_80);
      }
      local_78 = &LAB_1422c2ba0;
      FUN_1422f8a30(&local_78,local_res10 & 0xff);
    }
    else {
      TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x268,local_b8,local_res10);
      if ((local_b8[0] == -1) ||
         (lVar5 = (longlong)local_b8[0] * 0x60 + *(longlong *)(param_1 + 0x268), lVar5 == 0)) {
        local_b0 = (undefined1 **)&local_res10;
        FUN_1422b7ca0(param_1 + 0x268,local_b8,&local_b0,0);
        lVar5 = (longlong)local_b8[0] * 0x60 + *(longlong *)(param_1 + 0x268);
      }
      puVar2 = local_res18;
      plVar1 = (longlong *)(lVar5 + 8);
      TSet<TTuple<USoundClass_*,FSoundMixClassOverride>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>,FDefaultSetAllocator>
      ::FindId(plVar1,local_b8,local_res18);
      plVar6 = (longlong *)0x0;
      if (local_b8[0] != -1) {
        plVar6 = (longlong *)((longlong)local_b8[0] * 0x68 + *plVar1);
      }
      plVar7 = plVar6 + 1;
      if (plVar6 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      if (plVar7 == (longlong *)0x0) {
        local_24 = local_24 & 0xf0;
        local_68[0] = local_68[0] & 0xfffffffe | (uint)param_7;
        local_68[4] = 0;
        local_68[5] = 0;
        local_68[6] = 0;
        local_68[7] = 0;
        local_38 = 0;
        uStack_30 = 0x3f80000000000000;
        local_b0 = &local_res18;
        local_a8 = &local_78;
        local_6c = param_5;
        local_28 = param_6;
        local_68[1] = 0x3f800000;
        local_68[2] = 0x3f800000;
        local_68[3] = 0x3f800000;
        local_68[8] = 0x3f800000;
        local_68[9] = 0x3f800000;
        local_68[10] = 0x3f800000;
        local_68[0xb] = 0;
        local_78 = puVar2;
        local_70 = param_4;
        FUN_1422b8f90(plVar1,local_b8,&local_b0,0);
      }
      else {
        *(uint *)(plVar7 + 2) = *(uint *)(plVar7 + 2) & 0xfffffffe;
        *(uint *)(plVar7 + 2) = *(uint *)(plVar7 + 2) | (uint)param_7;
        *(undefined4 *)((longlong)plVar7 + 0xc) = param_5;
        *(byte *)((longlong)plVar7 + 0x54) = *(byte *)((longlong)plVar7 + 0x54) & 0xfb | 2;
        *(undefined4 *)(plVar7 + 1) = param_4;
        *(undefined4 *)(plVar7 + 10) = param_6;
        *plVar7 = (longlong)puVar2;
      }
    }
  }
  return;
}



// FUNCTION 1422d8f90 SetFogCutoffDistance body=23 status=ok
// SIG undefined SetFogCutoffDistance(void)

void UExponentialHeightFogComponent::SetFogCutoffDistance(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x2f0)) {
    *(float *)(param_1 + 0x2f0) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1422d8fb0 SetStereoBleed body=69 status=ok
// SIG undefined SetStereoBleed(void)

undefined4 FSoundSource::SetStereoBleed(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(**(longlong **)(param_1 + 0x10) + 0xe4) == 2) {
    uVar1 = *(undefined4 *)((longlong)*(longlong **)(param_1 + 0x10) + 0x94);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    if (*(char *)(*(longlong *)(param_1 + 8) + 0xb0) == '\x04') {
      *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
      return 0x3f800000;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1422d9000 FUN_1422d9000 body=23 status=ok
// SIG undefined FUN_1422d9000(void)

void FUN_1422d9000(longlong param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x2d0)) {
    *(float *)(param_1 + 0x2d0) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1422d9020 SetTransientMasterVolume body=163 status=ok
// SIG undefined SetTransientMasterVolume(void)

void FAudioDevice::SetTransientMasterVolume(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_res18;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  cVar1 = IsInAudioThread();
  if (cVar1 == '\0') {
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      local_78 = (undefined4)param_1;
      uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
      *puVar2 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar2 + 1) = local_78;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_74;
      *(undefined4 *)(puVar2 + 2) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
    }
    local_68[0] = &LAB_1422c2d00;
    FUN_1422f8a30(local_68,local_res18);
    return;
  }
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  return;
}



// FUNCTION 1422d90d0 ShouldScanPrimaryAssetType body=48 status=ok
// SIG undefined ShouldScanPrimaryAssetType(void)

undefined8 UAssetManager::ShouldScanPrimaryAssetType(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  if ((*param_2 != DAT_146aef3a8) && (*(char *)((longlong)param_2 + 0x39) == '\0')) {
    cVar1 = FUN_1422c8520(param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1422d9100 FUN_1422d9100 body=88 status=ok
// SIG undefined FUN_1422d9100(void)

bool FUN_1422d9100(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146aef470;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 1422d9160 FUN_1422d9160 body=356 status=ok
// SIG undefined FUN_1422d9160(void)

undefined8
FUN_1422d9160(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             longlong param_5,float param_6,undefined4 param_7)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  if ((((param_3 == 0) || (cVar1 = UWorld::IsGameWorld(param_3), cVar1 != '\0')) ||
      ((*(byte *)(param_1 + 0x368) & 8) != 0)) && (param_5 != 0)) {
    cVar1 = IsInAudioThread();
    lVar4 = 0xf4;
    if (cVar1 != '\0') {
      lVar4 = 0xd4;
    }
    fVar6 = (float)FSoundAttenuationSettings::GetFocusDistanceScale(param_5,lVar4 + param_1,param_7)
    ;
  }
  else {
    fVar6 = 1.0;
  }
  if (fVar6 <= 0.0001) {
    fVar6 = 0.0001;
  }
  param_6 = param_6 / fVar6;
  if (2097152.0 <= param_6) {
    uVar3 = 1;
  }
  else {
    cVar1 = IsInAudioThread();
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      GetCurrentThreadId();
    }
    if (cVar1 == '\0') {
      lVar4 = *(longlong *)(param_1 + 0x90);
      lVar5 = (longlong)*(int *)(param_1 + 0x98) * 0x30 + lVar4;
      for (; lVar4 != lVar5; lVar4 = lVar4 + 0x30) {
        cVar1 = FAudioDevice::LocationIsAudible(param_1,param_4,lVar4,param_6);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x128);
      lVar5 = (longlong)*(int *)(param_1 + 0x130) * 0xb0 + lVar4;
      for (; lVar4 != lVar5; lVar4 = lVar4 + 0xb0) {
        cVar1 = FAudioDevice::LocationIsAudible(param_1,param_4,lVar4,param_6);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1422d92f0 FUN_1422d92f0 body=10 status=ok
// SIG undefined FUN_1422d92f0(void)

void FUN_1422d92f0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001422d92f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x458))();
  return;
}



// FUNCTION 1422d9300 FUN_1422d9300 body=1154 status=ok
// SIG undefined FUN_1422d9300(void)

void FUN_1422d9300(longlong param_1,longlong *param_2,uint param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  uint local_res18;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  int local_90 [2];
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong **local_68;
  longlong **local_60;
  
  uVar13 = (ulonglong)(int)param_3;
  if ((int)param_3 < (int)param_2[1]) {
    lVar9 = uVar13 * 8;
    local_res18 = param_3;
    do {
      plVar7 = (longlong *)0x0;
      uVar12 = (uint)uVar13;
      plVar6 = *(longlong **)(lVar9 + *param_2);
      LOCK();
      iVar4 = *(int *)(*plVar6 + 0xb8);
      if (iVar4 == 0) {
        *(int *)(*plVar6 + 0xb8) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (((iVar4 != 1) && (-1 < *(char *)(plVar6[0xc] + 0x98))) &&
         ((param_4 != '\0' || ((*(uint *)((longlong)plVar6 + 0xa4) & 0x200) != 0)))) {
        plVar8 = (longlong *)(param_1 + 0x168);
        local_a0 = plVar6;
        local_98 = lVar9;
        local_80 = plVar8;
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(plVar8,local_90,plVar6);
        local_a8 = plVar7;
        if ((local_90[0] != -1) && (lVar1 = *plVar8 + (longlong)local_90[0] * 0x18, lVar1 != 0)) {
          local_a8 = *(longlong **)(lVar1 + 8);
        }
        if (local_a8 == (longlong *)0x0) {
          if ((*plVar6 != 0) && (cVar3 = USoundWave::IsStreaming(), cVar3 != '\0')) {
            uVar5 = IStreamingManager::Get();
            plVar6 = (longlong *)UNiagaraSystem::GetEffectType(uVar5);
            cVar3 = (**(code **)(*plVar6 + 0xb8))(plVar6,local_a0);
            if (cVar3 == '\0') {
              if (local_a8 == (longlong *)0x0) {
                if ((*(int *)((longlong)local_a0 + 0x9c) == 2) ||
                   ((*(byte *)(local_a0[0xc] + 0x98) & 8) != 0)) {
                  *(uint *)((longlong)local_a0 + 0xa4) =
                       *(uint *)((longlong)local_a0 + 0xa4) & 0xfffffff7;
                }
                else {
                  *(uint *)((longlong)local_a0 + 0xa4) = *(uint *)((longlong)local_a0 + 0xa4) | 8;
                }
                goto LAB_1422d9736;
              }
              goto LAB_1422d96b3;
            }
          }
          if (((*(byte *)(param_1 + 0x358) & 0x20) != 0) && (*(int *)(param_1 + 0x160) == 0)) {
            plVar6 = *(longlong **)(param_1 + 0x148);
            local_88 = (longlong *)0x0;
            local_70 = (longlong *)((longlong)*(int *)(param_1 + 0x150) & 0x1fffffffffffffff);
            if (plVar6 + *(int *)(param_1 + 0x150) < plVar6) {
              local_70 = plVar7;
            }
            plVar8 = plVar7;
            plVar10 = plVar7;
            plVar14 = plVar7;
            uVar12 = local_res18;
            if (local_70 == (longlong *)0x0) {
LAB_1422d95b2:
              (**(code **)(*plVar7 + 0x40))(plVar7);
              plVar8 = (longlong *)(param_1 + 0x168);
              lVar9 = local_98;
            }
            else {
              do {
                plVar2 = (longlong *)*plVar6;
                cVar3 = (**(code **)(*plVar2 + 0x48))(plVar2);
                plVar7 = plVar8;
                plVar11 = plVar10;
                if (cVar3 == '\0') {
                  lVar9 = plVar2[2];
                  if (lVar9 != 0) {
                    if ((*(int *)(lVar9 + 0x9c) != 2) && ((*(uint *)(lVar9 + 0xa4) & 0x200) == 0)) {
                      if (plVar14 != (longlong *)0x0) {
                        fVar15 = (float)FWaveInstance::GetVolumeWeightedPriority(lVar9);
                        fVar16 = (float)FWaveInstance::GetVolumeWeightedPriority(plVar14[2]);
                        if (fVar16 <= fVar15) goto LAB_1422d953f;
                      }
                      plVar14 = plVar2;
                    }
LAB_1422d953f:
                    plVar7 = plVar2;
                    if (plVar8 != (longlong *)0x0) {
                      fVar15 = (float)FWaveInstance::GetVolumeWeightedPriority(lVar9);
                      fVar16 = (float)FWaveInstance::GetVolumeWeightedPriority(plVar8[2]);
                      plVar7 = plVar8;
                      if (fVar15 < fVar16) {
                        plVar7 = plVar2;
                      }
                    }
                  }
                }
                else {
                  plVar11 = plVar2;
                  if (plVar10 != (longlong *)0x0) {
                    fVar15 = (float)FWaveInstance::GetVolumeWeightedPriority(plVar2[2]);
                    fVar16 = (float)FWaveInstance::GetVolumeWeightedPriority(plVar10[2]);
                    plVar11 = plVar10;
                    if (fVar15 < fVar16) {
                      plVar11 = plVar2;
                    }
                  }
                }
                plVar6 = plVar6 + 1;
                local_88 = (longlong *)((longlong)local_88 + 1);
                plVar8 = plVar7;
                plVar10 = plVar11;
              } while (local_88 != local_70);
              if (plVar11 == (longlong *)0x0) {
                if (plVar14 == (longlong *)0x0) goto LAB_1422d95b2;
                (**(code **)(*plVar14 + 0x40))(plVar14);
                lVar9 = local_98;
                plVar8 = local_80;
              }
              else {
                (**(code **)(*plVar11 + 0x40))(plVar11);
                lVar9 = local_98;
                plVar8 = local_80;
              }
            }
          }
          plVar6 = *(longlong **)
                    (*(longlong *)(param_1 + 0x158) + -8 + (longlong)*(int *)(param_1 + 0x160) * 8);
          *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
          local_a8 = plVar6;
          cVar3 = (**(code **)(*plVar6 + 8))(plVar6,local_a0);
          if (cVar3 == '\0') {
LAB_1422d96a2:
            (**(code **)(*local_a8 + 0x38))();
          }
          else {
            cVar3 = (**(code **)(*local_a8 + 0x10))();
            if (cVar3 != '\0') {
              cVar3 = (**(code **)(*local_a8 + 0x18))(local_a8,local_a0);
              if (cVar3 == '\0') goto LAB_1422d96a2;
              FUN_1422d8b70(local_a8,*(uint *)(local_a8[2] + 0xa4) >> 0xd & 0xffffff01);
              (**(code **)(*local_a8 + 0x28))();
              if ((*(byte *)(local_a8 + 0xf) & 8) == 0) {
                (**(code **)(*local_a8 + 0x30))();
              }
            }
            uVar5 = IStreamingManager::Get();
            plVar6 = (longlong *)UNiagaraSystem::GetEffectType(uVar5);
            (**(code **)(*plVar6 + 0xc0))(plVar6,local_a8);
            local_68 = &local_a0;
            local_60 = &local_a8;
            FUN_1405c0510(plVar8,local_78,&local_68,0);
          }
        }
        else {
LAB_1422d96b3:
          cVar3 = (**(code **)(*local_a8 + 0x20))();
          if ((cVar3 == '\0') && (cVar3 = (**(code **)(*local_a8 + 0x10))(), cVar3 != '\0')) {
            cVar3 = (**(code **)(*local_a8 + 0x18))(local_a8,local_a0);
            if (cVar3 == '\0') {
              FWaveInstance::StopWithoutNotification(local_a0);
              iVar4 = *(int *)(param_1 + 0x160);
              *(int *)(param_1 + 0x160) = iVar4 + 1;
              if (*(int *)(param_1 + 0x164) < iVar4 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          ((longlong *)(param_1 + 0x158),iVar4);
              }
              *(longlong **)(*(longlong *)(param_1 + 0x158) + (longlong)iVar4 * 8) = local_a8;
            }
            else {
              (**(code **)(*local_a8 + 0x28))();
              if ((*(byte *)(local_a8 + 0xf) & 8) == 0) {
                (**(code **)(*local_a8 + 0x30))();
              }
            }
          }
        }
      }
LAB_1422d9736:
      local_res18 = uVar12 + 1;
      uVar13 = (ulonglong)local_res18;
      lVar9 = lVar9 + 8;
    } while ((int)local_res18 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1422d9790 FUN_1422d9790 body=263 status=ok
// SIG undefined FUN_1422d9790(void)

void FUN_1422d9790(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x78) = 0;
    FUN_1422d1c00();
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(*(longlong *)(param_1 + 8) + 0x168,*(undefined8 *)(param_1 + 0x10));
    lVar1 = *(longlong *)(param_1 + 0x10);
    if ((*(uint *)(lVar1 + 0xa4) & 0x10) == 0) {
      *(uint *)(lVar1 + 0xa4) = *(uint *)(lVar1 + 0xa4) | 0x18;
      iVar3 = *(int *)(lVar1 + 0x58) + -1;
      lVar7 = (longlong)iVar3;
      if (-1 < iVar3) {
        lVar5 = lVar7 << 4;
        do {
          plVar2 = *(longlong **)(lVar5 + *(longlong *)(lVar1 + 0x50));
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x278))(plVar2,lVar1);
          }
          lVar5 = lVar5 + -0x10;
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  plVar6 = (longlong *)(lVar1 + 0x158);
  plVar2 = (longlong *)*plVar6;
  iVar3 = *(int *)(lVar1 + 0x160);
  plVar4 = plVar2;
  do {
    if (plVar4 == plVar2 + iVar3) {
LAB_1422d986d:
      *(int *)(lVar1 + 0x160) = iVar3 + 1;
      if (*(int *)(lVar1 + 0x164) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
      }
      *(longlong *)(*plVar6 + (longlong)iVar3 * 8) = param_1;
      return;
    }
    if (*plVar4 == param_1) {
      if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) {
        return;
      }
      goto LAB_1422d986d;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}



// FUNCTION 1422d98a0 StopActiveSound body=66 status=ok
// SIG undefined StopActiveSound(void)

void FAudioDevice::StopActiveSound(longlong param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x438);
  }
  FUN_14058cbf0(param_1 + 0x3c0,local_res8,local_res10,0);
  return;
}



// FUNCTION 1422d98f0 FUN_1422d98f0 body=226 status=ok
// SIG undefined FUN_1422d98f0(void)

void FUN_1422d98f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
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
    local_58[0] = &LAB_1422c2cf0;
    FUN_1422f8a30(local_58,local_res18[0]);
    return;
  }
  local_res20 = FUN_1422c86c0(param_1,param_2);
  if (local_res20 != 0) {
    if (*(longlong *)(local_res20 + 0x18) != 0) {
      TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x438);
    }
    FUN_14058cbf0(param_1 + 0x3c0,local_res18,&local_res20,0);
  }
  return;
}



// FUNCTION 1422d99e0 FUN_1422d99e0 body=668 status=ok
// SIG undefined FUN_1422d99e0(void)

void FUN_1422d99e0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined8 uStack_a0;
  uint *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong *local_78;
  longlong lStack_70;
  uint *puStack_68;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_48;
  undefined4 local_38;
  
  cVar3 = IsInAudioThread();
  if (cVar3 == '\0') {
    uStack_c0 = (uint *)CONCAT71(uStack_c0._1_7_,param_2);
    local_48 = 0;
    local_38 = 0;
    local_c8 = param_1;
    puVar7 = (undefined8 *)FUN_140438ef0(0x18,&puStack_68);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar7 + 1) = (undefined4)local_c8;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_c8._4_4_;
      *(undefined4 *)(puVar7 + 2) = (undefined4)uStack_c0;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_c0._4_4_;
    }
    local_78 = (longlong *)&LAB_1422c2e30;
    FUN_1422f8a30(&local_78,local_res18[0]);
    return;
  }
  iVar4 = *(int *)(param_1 + 0x378) + -1;
  lVar11 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x370) + lVar11 * 8);
      if (param_2 == '\0') {
        if ((*(byte *)(lVar1 + 0x9a) & 1) == 0) {
          local_a8 = (longlong *)(lVar1 + 0x468);
          iVar4 = *(int *)(lVar1 + 0x490);
          uStack_c0 = (uint *)(lVar1 + 0x478);
          uVar9 = 0;
          local_c8 = 0x100000000;
          uStack_b4 = 0;
          if (iVar4 != 0) {
            puVar10 = *(uint **)(lVar1 + 0x488);
            if (*(uint **)(lVar1 + 0x488) == (uint *)0x0) {
              puVar10 = uStack_c0;
            }
            uVar5 = *puVar10;
            iVar6 = 0;
            while (uVar5 == 0) {
              uVar9 = uVar9 + 0x20;
              uStack_b4 = (ulonglong)uVar9 << 0x20;
              local_c8._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
              local_c8 = CONCAT44(local_c8._4_4_,iVar6 + 1);
              if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6)
              goto LAB_1422d9b7f;
              uVar5 = puVar10[(longlong)iVar6 + 1];
              iVar6 = iVar6 + 1;
            }
            uVar5 = -uVar5 & uVar5;
            iVar6 = 0x1f;
            if (uVar5 != 0) {
              for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
              }
            }
            local_c8 = CONCAT44(uVar5,(undefined4)local_c8);
            if (uVar5 == 0) {
              iVar6 = 0x20;
            }
            else {
              iVar6 = 0x1f - iVar6;
            }
            iVar6 = (uVar9 - iVar6) + 0x1f;
            uStack_b4._4_4_ = (undefined4)((ulonglong)uStack_b4 >> 0x20);
            uStack_b4 = CONCAT44(uStack_b4._4_4_,iVar6);
            if (iVar4 < iVar6) {
LAB_1422d9b7f:
              uStack_b4 = CONCAT44(uStack_b4._4_4_,iVar4);
            }
          }
          local_b8 = 0xffffffff;
          uStack_60 = 0xffffffff;
          iStack_5c = (int)uStack_b4;
          uStack_58 = uStack_b4._4_4_;
          uStack_54 = uStack_ac;
          lStack_70 = local_c8;
          uStack_90 = CONCAT44((int)uStack_b4,0xffffffff);
          uStack_a0 = local_c8;
          local_88 = uStack_b4._4_4_;
          uStack_84 = uStack_ac;
          iVar6 = (int)uStack_b4;
          local_98 = uStack_c0;
          local_78 = local_a8;
          puStack_68 = uStack_c0;
          if ((int)uStack_b4 < iVar4) {
            do {
              lVar2 = *(longlong *)(*local_a8 + 8 + (longlong)iVar6 * 0x18);
              if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0xa4) & 0x200) == 0)) {
                local_c8 = lVar1;
                if (*(longlong *)(lVar1 + 0x18) != 0) {
                  TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
                  ::Remove(param_1 + 0x438);
                }
                puVar8 = local_res20;
                goto LAB_1422d9c30;
              }
              uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_a0._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
              iVar6 = uStack_90._4_4_;
            } while (uStack_90._4_4_ < (int)local_98[6]);
          }
        }
      }
      else {
        local_c8 = lVar1;
        if (*(longlong *)(lVar1 + 0x18) != 0) {
          TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
          ::Remove(param_1 + 0x438);
        }
        puVar8 = local_res18;
LAB_1422d9c30:
        FUN_14058cbf0(param_1 + 0x3c0,puVar8,&local_c8,0);
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  FUN_1422d3680(param_1,0);
  return;
}



// FUNCTION 1422d9ca0 FUN_1422d9ca0 body=124 status=ok
// SIG undefined FUN_1422d9ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1422d9ca0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aef550) {
    _Init_thread_header(&DAT_146aef550);
    if (DAT_146aef550 == -1) {
      DAT_146aef540 = 0;
      _DAT_146aef548 = 0;
      atexit((_func_5014 *)&LAB_143ea8560);
      _Init_thread_footer(&DAT_146aef550);
      return &DAT_146aef540;
    }
  }
  return &DAT_146aef540;
}



// FUNCTION 1422d9d20 FUN_1422d9d20 body=953 status=ok
// SIG undefined FUN_1422d9d20(void)

void FUN_1422d9d20(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res18;
  undefined1 local_res20 [8];
  longlong local_128;
  int local_120;
  uint uStack_11c;
  uint *puStack_118;
  undefined4 local_110;
  uint uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  longlong *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  int iStack_c0;
  uint uStack_bc;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  if (param_3 == (longlong *)0x0) {
    cVar9 = IsInAudioThread();
    if (cVar9 == '\0') {
      local_68 = 0;
      local_58 = 0;
      local_100 = param_1;
      uStack_f8 = param_2;
      puVar11 = (undefined8 *)FUN_140438ef0(0x18,local_88);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar11 + 1) = (undefined4)local_100;
        *(undefined4 *)((longlong)puVar11 + 0xc) = local_100._4_4_;
        *(undefined4 *)(puVar11 + 2) = (undefined4)uStack_f8;
        *(undefined4 *)((longlong)puVar11 + 0x14) = uStack_f8._4_4_;
      }
      local_98[0] = &LAB_1422c2c50;
      FUN_1422f8a30(local_98,local_res18);
      return;
    }
  }
  else {
    local_128 = 0;
    FAudioCommandFence::BeginFence(&local_128);
    FAudioCommandFence::Wait(&local_128,0);
    if (local_128 != 0) {
      LOCK();
      piVar1 = (int *)(local_128 + 0x48);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  iVar10 = *(int *)(param_1 + 0x378) + -1;
  lVar12 = (longlong)iVar10;
  if (-1 < iVar10) {
    do {
      uStack_11c = 1;
      uStack_10c = 0;
      iStack_108 = 0;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x370) + lVar12 * 8);
      local_120 = 0;
      plVar3 = (longlong *)(lVar6 + 0x468);
      uVar4 = *(uint *)(lVar6 + 0x490);
      puVar2 = (uint *)(lVar6 + 0x478);
      if (uVar4 != 0) {
        puVar15 = *(uint **)(lVar6 + 0x488);
        if (*(uint **)(lVar6 + 0x488) == (uint *)0x0) {
          puVar15 = puVar2;
        }
        uVar5 = *puVar15;
        iStack_108 = 0;
        local_120 = 0;
        while (uVar5 == 0) {
          lVar13 = (longlong)local_120;
          iStack_108 = iStack_108 + 0x20;
          iVar10 = local_120 + 1;
          bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_120;
          local_120 = iVar10;
          if (bVar7) goto LAB_1422d9ee4;
          uVar5 = puVar15[lVar13 + 1];
        }
        uStack_11c = -uVar5 & uVar5;
        iVar10 = 0x1f;
        if (uStack_11c != 0) {
          for (; uStack_11c >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uStack_11c == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_10c = (iStack_108 - iVar10) + 0x1f;
        if ((int)uVar4 < (int)uStack_10c) {
LAB_1422d9ee4:
          uStack_10c = uVar4;
        }
      }
      local_110 = 0xffffffff;
      uVar5 = *(uint *)(lVar6 + 0x490);
      uStack_e8 = CONCAT44(uStack_11c,local_120);
      uStack_d8 = CONCAT44(uStack_10c,0xffffffff);
      uStack_d0 = CONCAT44(uStack_104,iStack_108);
      uVar16 = -1 << ((byte)uVar5 & 0x1f);
      uVar14 = uVar5 & 0xffffffe0;
      uStack_e0 = CONCAT44(uVar5,uVar16);
      iStack_c0 = local_120;
      uStack_bc = uStack_11c;
      puStack_118 = puVar2;
      local_f0 = plVar3;
      local_b8 = puVar2;
      uStack_b0 = uStack_d8;
      local_a8 = uStack_d0;
      local_c8 = plVar3;
      uVar8 = uStack_e0;
      if (uVar5 != uVar4) {
        puVar15 = *(uint **)(lVar6 + 0x488);
        if (*(uint **)(lVar6 + 0x488) == (uint *)0x0) {
          puVar15 = puVar2;
        }
        uVar16 = puVar15[(int)uVar5 >> 5] & uVar16;
        iVar10 = (int)uVar5 >> 5;
        while (uVar16 == 0) {
          uVar14 = uVar14 + 0x20;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
          goto LAB_1422d9fc8;
          uVar16 = puVar15[(longlong)iVar10 + 1];
          uStack_e0 = 0xffffffff;
          iVar10 = iVar10 + 1;
        }
        uVar16 = -uVar16 & uVar16;
        iVar10 = 0x1f;
        if (uVar16 != 0) {
          for (; uVar16 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uVar16 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        iVar10 = (uVar14 - iVar10) + 0x1f;
        uStack_e0 = CONCAT44(iVar10,(undefined4)uStack_e0);
        uVar8 = uStack_e0;
        if ((int)uVar4 < iVar10) {
LAB_1422d9fc8:
          uStack_e0 = CONCAT44(uVar4,(undefined4)uStack_e0);
          uVar8 = uStack_e0;
        }
      }
      while( true ) {
        if (((uStack_b0._4_4_ == (int)((ulonglong)uVar8 >> 0x20)) && (local_b8 == puVar2)) &&
           (local_c8 == plVar3)) goto LAB_1422da097;
        if (**(longlong **)(*local_c8 + 8 + (longlong)uStack_b0._4_4_ * 0x18) == param_2) break;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_c0);
      }
      if (param_3 != (longlong *)0x0) {
        lVar13 = UAudioComponent::GetAudioComponentFromID(*(undefined8 *)(lVar6 + 0x18));
        if (lVar13 != 0) {
          iVar10 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar10 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar10);
          }
          *(longlong *)(*param_3 + (longlong)iVar10 * 8) = lVar13;
        }
      }
      local_100 = lVar6;
      if (*(longlong *)(lVar6 + 0x18) != 0) {
        TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 0x438);
      }
      FUN_14058cbf0(param_1 + 0x3c0,local_res20,&local_100,0);
LAB_1422da097:
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  FUN_1422d3680(param_1,0);
  return;
}



// FUNCTION 1422da0e0 FUN_1422da0e0 body=525 status=ok
// SIG undefined FUN_1422da0e0(void)

void FUN_1422da0e0(longlong param_1,longlong *param_2,int param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int local_res18 [4];
  
  lVar11 = (longlong)param_3;
  if (param_3 < (int)param_2[1]) {
    lVar12 = lVar11 * 8;
    do {
      lVar3 = *(longlong *)(lVar12 + *param_2);
      pbVar1 = (byte *)(*(longlong *)(lVar3 + 0x60) + 0x9b);
      *pbVar1 = *pbVar1 | 8;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x168,local_res18,lVar3);
      if ((((local_res18[0] != -1) &&
           (lVar2 = *(longlong *)(param_1 + 0x168) + (longlong)local_res18[0] * 0x18, lVar2 != 0))
          && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) &&
         (*(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(param_1 + 0xa0),
         0.0 < *(float *)(lVar3 + 0x70) * *(float *)(lVar3 + 0x68) * *(float *)(lVar3 + 0x6c))) {
        *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(param_1 + 0xa0);
      }
      param_3 = param_3 + 1;
      lVar12 = lVar12 + 8;
    } while (param_3 < (int)param_2[1]);
  }
  uVar10 = 0;
  uVar9 = uVar10;
  uVar13 = uVar10;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      plVar4 = *(longlong **)(uVar13 + *(longlong *)(param_1 + 0x148));
      lVar12 = plVar4[2];
      if (lVar12 != 0) {
        if ((*(char *)(*(longlong *)(lVar12 + 0x60) + 0x98) < '\0') ||
           ((longlong)(int)plVar4[8] != *(longlong *)(param_1 + 0xa0))) {
          cVar6 = (**(code **)(*plVar4 + 0x48))(plVar4);
          if (cVar6 == '\0') {
            (**(code **)(*plVar4 + 0x38))();
          }
          else {
            (**(code **)(*plVar4 + 0x28))(plVar4);
          }
        }
        else {
          *(byte *)(plVar4 + 0xf) =
               *(byte *)(plVar4 + 0xf) ^
               ((char)(*(uint *)(lVar12 + 0xa4) >> 0xd) << 2 ^ *(byte *)(plVar4 + 0xf)) & 4;
          bVar5 = *(byte *)(plVar4 + 0xf) & 6;
          bVar7 = *(byte *)(plVar4 + 0xf) & 8;
          if ((bVar7 == 0) || (bVar5 != 0)) {
            if ((bVar7 == 0) && (bVar5 != 0)) {
              (**(code **)(*plVar4 + 0x78))(plVar4);
            }
          }
          else {
            (**(code **)(*plVar4 + 0x30))(plVar4);
          }
          FUN_1422d1c00(plVar4);
          (**(code **)(*plVar4 + 0x28))(plVar4);
        }
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar13 = uVar13 + 8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x150));
  }
  if (0 < lVar11) {
    do {
      lVar12 = *(longlong *)(*param_2 + uVar10 * 8);
      if ((*(int *)(lVar12 + 0x9c) == 2) ||
         ((*(byte *)(*(longlong *)(lVar12 + 0x60) + 0x98) & 8) != 0)) {
        *(uint *)(lVar12 + 0xa4) = *(uint *)(lVar12 + 0xa4) & 0xfffffff7;
      }
      else {
        *(uint *)(lVar12 + 0xa4) = *(uint *)(lVar12 + 0xa4) | 8;
      }
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < lVar11);
  }
  return;
}



// FUNCTION 1422da2f0 FUN_1422da2f0 body=68 status=ok
// SIG undefined FUN_1422da2f0(void)

void FUN_1422da2f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x150))) {
    plVar3 = *(longlong **)(param_1 + 0x148);
    lVar2 = 0;
    do {
      plVar1 = (longlong *)*plVar3;
      if ((plVar1 != (longlong *)0x0) && (plVar1[3] == param_2)) {
                    /* WARNING: Could not recover jumptable at 0x0001422da32f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x40))();
        return;
      }
      lVar2 = lVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x150));
  }
  return;
}



// FUNCTION 1422da340 StopWithoutNotification body=38 status=ok
// SIG undefined StopWithoutNotification(void)

void FWaveInstance::StopWithoutNotification(longlong param_1)

{
  if ((*(int *)(param_1 + 0x9c) != 2) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x60) + 0x98) & 8) == 0)) {
    *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 8;
    return;
  }
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xfffffff7;
  return;
}



// FUNCTION 1422da370 FUN_1422da370 body=754 status=ok
// SIG undefined FUN_1422da370(void)

ulonglong FUN_1422da370(longlong *param_1,void *param_2,char param_3,uint param_4)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  ulonglong _Size;
  uint uVar10;
  ulonglong uVar11;
  undefined1 local_38 [8];
  int local_30;
  
  uVar9 = (int)param_1[9] - *(uint *)((longlong)param_1 + 0x4c);
  if (param_4 <= uVar9) {
    uVar9 = param_4;
  }
  _Size = (ulonglong)uVar9;
  if (uVar9 != 0) {
    _guard_xfg_dispatch_icall_nop
              (param_2,(void *)((ulonglong)*(uint *)((longlong)param_1 + 0x4c) + param_1[7]),_Size);
    *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + uVar9;
    if (*(uint *)(param_1 + 9) <= *(uint *)((longlong)param_1 + 0x4c)) {
      param_1[9] = 0;
    }
  }
  if (param_1[1] == 0) {
    uVar4 = IStreamingManager::Get();
    plVar5 = (longlong *)UNiagaraSystem::GetEffectType(uVar4);
    lVar6 = (**(code **)(*plVar5 + 0xd8))(plVar5,param_1[0xb],(int)param_1[0xc],0);
    param_1[1] = lVar6;
    if (lVar6 == 0) {
      pvVar7 = (void *)0x0;
      if (*(char *)((longlong)param_1 + 100) != '\0') {
        *(undefined1 *)((longlong)param_1 + 100) = 0;
      }
      goto LAB_1422da64b;
    }
    *(undefined1 *)((longlong)param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 2) =
         *(undefined4 *)
          (*(longlong *)
            (*(longlong *)(*(longlong *)(param_1[0xb] + 0x1e8) + 0x10) +
            (longlong)(int)param_1[0xc] * 8) + 4);
    uVar10 = 0;
    if ((int)param_1[0xc] == 0) {
      uVar10 = *(uint *)(param_1 + 3);
    }
    *(uint *)((longlong)param_1 + 0x14) = uVar10;
  }
  uVar11 = 0;
  if (((char)param_1[10] != '\0') && ((int)param_1[9] != 0)) {
    uVar11 = 1;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  while( true ) {
    if (param_4 <= uVar9) {
      return uVar11;
    }
    uVar9 = (uint)_Size;
    uVar2 = (**(code **)(*param_1 + 0x90))(param_1);
    uVar10 = *(uint *)((longlong)param_1 + 0x14);
    pvVar7 = (void *)(ulonglong)uVar10;
    if (*(uint *)(param_1 + 2) < uVar10 + uVar2) break;
    *(uint *)((longlong)param_1 + 0x14) = uVar10 + uVar2;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    pvVar7 = (void *)(**(code **)(*param_1 + 0x80))
                               (param_1,local_38,(ulonglong)uVar10 + param_1[1],uVar2,param_1[7],
                                (int)param_1[8]);
    if (local_30 < 0) break;
    iVar1 = *(int *)((longlong)param_1 + 0x24);
    uVar8 = *(uint *)(param_1 + 4);
    uVar10 = iVar1 + local_30;
    uVar3 = uVar8;
    if (uVar10 <= uVar8) {
      uVar3 = uVar10;
    }
    *(uint *)((longlong)param_1 + 0x24) = uVar3;
    iVar1 = uVar8 - iVar1;
    if (uVar10 <= uVar8) {
      iVar1 = local_30;
    }
    uVar10 = iVar1 * (int)param_1[6];
    *(uint *)(param_1 + 9) = uVar10;
    uVar8 = uVar10 - *(uint *)((longlong)param_1 + 0x4c);
    if (param_4 - uVar9 <= uVar8) {
      uVar8 = param_4 - uVar9;
    }
    if (uVar8 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(_Size + (longlong)param_2),
                 (void *)((ulonglong)*(uint *)((longlong)param_1 + 0x4c) + param_1[7]),
                 (ulonglong)uVar8);
      *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + uVar8;
      uVar10 = *(uint *)(param_1 + 9);
      if (uVar10 <= *(uint *)((longlong)param_1 + 0x4c)) {
        param_1[9] = 0;
        uVar10 = 0;
      }
    }
    uVar9 = uVar9 + uVar8;
    _Size = (ulonglong)uVar9;
    if (*(uint *)(param_1 + 2) <= *(uint *)((longlong)param_1 + 0x14)) {
      if ((int)param_1[0xc] == **(int **)(param_1[0xb] + 0x1e8) + -1) {
        if (uVar10 == 0) {
          uVar11 = 1;
        }
        else {
          *(undefined1 *)(param_1 + 10) = 1;
        }
        if (param_3 == '\0') {
          if (param_4 - uVar9 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((ulonglong)uVar9 + (longlong)param_2),0,(ulonglong)(param_4 - uVar9)
                      );
            _Size = (ulonglong)param_4;
          }
        }
        else {
          *(int *)((longlong)param_1 + 0x14) = (int)param_1[3];
          *(undefined4 *)(param_1 + 0xc) = 0;
          *(undefined4 *)((longlong)param_1 + 0x24) = 0;
          (**(code **)(*param_1 + 0x88))(param_1);
        }
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      }
      uVar4 = IStreamingManager::Get();
      plVar5 = (longlong *)UNiagaraSystem::GetEffectType(uVar4);
      lVar6 = (**(code **)(*plVar5 + 0xd8))(plVar5,param_1[0xb],(int)param_1[0xc],0);
      param_1[1] = lVar6;
      if (lVar6 == 0) {
        *(undefined4 *)(param_1 + 2) = 0;
        uVar10 = param_4 - (int)_Size;
        uVar9 = 0;
        if (uVar10 != 0) {
          _guard_xfg_dispatch_icall_nop((void *)(_Size + (longlong)param_2),0,(ulonglong)uVar10);
          uVar9 = uVar10;
        }
        _Size = (ulonglong)((int)_Size + uVar9);
      }
      else {
        *(undefined4 *)(param_1 + 2) =
             *(undefined4 *)
              (*(longlong *)
                (*(longlong *)(*(longlong *)(param_1[0xb] + 0x1e8) + 0x10) +
                (longlong)(int)param_1[0xc] * 8) + 4);
      }
    }
    uVar9 = (uint)_Size;
  }
  *(undefined4 *)(param_1 + 9) = 0;
LAB_1422da64b:
  if (param_4 - uVar9 != 0) {
    pvVar7 = _guard_xfg_dispatch_icall_nop
                       ((void *)((ulonglong)uVar9 + (longlong)param_2),0,
                        (ulonglong)(param_4 - uVar9));
  }
  return (ulonglong)pvVar7 & 0xffffffffffffff00;
}



// FUNCTION 1422da670 StreamCompressedInfo body=142 status=ok
// SIG undefined StreamCompressedInfo(void)

void IStreamedCompressedInfo::StreamCompressedInfo
               (longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  param_1[0xb] = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = IStreamingManager::Get();
  plVar2 = (longlong *)UNiagaraSystem::GetEffectType(uVar1);
  lVar3 = (**(code **)(*plVar2 + 0xd8))(plVar2,param_1[0xb],(int)param_1[0xc],0);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001422da6ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))
              (param_1,lVar3,
               *(undefined4 *)(**(longlong **)(*(longlong *)(param_2 + 0x1e8) + 0x10) + 4),param_3);
    return;
  }
  return;
}



// FUNCTION 1422da700 FUN_1422da700 body=766 status=ok
// SIG undefined FUN_1422da700(void)

void FUN_1422da700(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong uVar7;
  
  (**(code **)(*param_1 + 0x20))();
  FUN_1422c9b40(param_1,0,1);
  puVar9 = (undefined8 *)param_1[0x59];
  uVar7 = 0;
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9,1);
    param_1[0x59] = 0;
  }
  puVar9 = (undefined8 *)param_1[0x10];
  puVar10 = puVar9 + (longlong)(int)param_1[0x11] * 2;
  for (; puVar9 != puVar10; puVar9 = puVar9 + 2) {
    plVar3 = (longlong *)puVar9[1];
    plVar4 = (longlong *)*puVar9;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x108))(param_1);
  TSet<TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>,TDefaultMapHashableKeyFuncs<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x4d,0);
  if (((*(byte *)(param_1 + 0x6b) & 0x20) != 0) && (uVar8 = uVar7, 0 < (int)param_1[0x2a])) {
    do {
      (**(code **)(**(longlong **)(uVar8 + param_1[0x29]) + 0x40))();
      puVar9 = *(undefined8 **)(uVar8 + param_1[0x29]);
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,1);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = uVar8 + 8;
    } while ((int)uVar6 < (int)param_1[0x2a]);
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x154)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x29,0);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(int *)((longlong)param_1 + 0x164) < 0) && (*(int *)((longlong)param_1 + 0x164) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2b,0);
  }
  local_50 = (longlong *)0x0;
  if (param_1 + 8 != &local_58) {
    param_1[8] = 0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 9,&local_50);
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  *(byte *)((longlong)param_1 + 0x359) = *(byte *)((longlong)param_1 + 0x359) & 0xfb;
  local_40 = (longlong *)0x0;
  if (param_1 + 10 != &local_48) {
    param_1[10] = 0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb,&local_40);
    plVar3 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  *(byte *)((longlong)param_1 + 0x359) = *(byte *)((longlong)param_1 + 0x359) & 0xef;
  local_30 = (longlong *)0x0;
  if (param_1 + 0xc != &local_38) {
    param_1[0xc] = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd,&local_30);
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  *(byte *)((longlong)param_1 + 0x359) = *(byte *)((longlong)param_1 + 0x359) & 0xf7;
  TArray<TSharedPtr<IAudioPluginListener,1>,FDefaultAllocator>::Reset(param_1 + 0x10,0);
  return;
}



// FUNCTION 1422daa00 TryClearingEQSoundMix body=95 status=ok
// SIG undefined TryClearingEQSoundMix(void)

undefined8 FAudioDevice::TryClearingEQSoundMix(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x2c8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x2c8) + 0x140) == param_2)) {
    lVar1 = FindNextHighestEQPrioritySoundMix();
    if (lVar1 != 0) {
      FAudioEffectsManager::SetMixSettings(*(undefined8 *)(param_1 + 0x2c8),lVar1,1,0);
      return 1;
    }
    FAudioEffectsManager::ClearMixSettings(*(undefined8 *)(param_1 + 0x2c8));
    return 1;
  }
  return 0;
}



// FUNCTION 1422daa60 TryClearingSoundMix body=270 status=ok
// SIG undefined TryClearingSoundMix(void)

undefined8 FAudioDevice::TryClearingSoundMix(longlong param_1,longlong param_2,char *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  if (((((param_2 == 0) || (param_3 == (char *)0x0)) ||
       (0.0 < *(float *)(param_2 + 0x80) || *(float *)(param_2 + 0x80) == 0.0)) ||
      ((*(int *)(param_3 + 4) != 0 || (*(int *)(param_3 + 8) != 0)))) || (*param_3 != '\0')) {
    return 0;
  }
  if ((*(float *)(param_2 + 0x84) <= 0.0) || (iVar1 = *(int *)(param_3 + 0x3c), iVar1 == 0)) {
    FUN_1422c4630();
    return 1;
  }
  if (iVar1 == 1) {
    dVar3 = *(double *)(param_1 + 0x360) -
            (double)((1.0 - *(float *)(param_3 + 0x38)) * *(float *)(param_2 + 0x84));
    *(double *)(param_3 + 0x28) = dVar3;
    dVar4 = dVar3 - 1.0;
    *(double *)(param_3 + 0x30) = (double)*(float *)(param_2 + 0x84) + dVar3;
    *(double *)(param_3 + 0x10) = dVar4;
    auVar2._8_4_ = SUB84(dVar4,0);
    auVar2._0_8_ = dVar4;
    auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])(param_3 + 0x18) = auVar2;
    TryClearingEQSoundMix();
    return 1;
  }
  if (iVar1 != 2) {
    return 1;
  }
  dVar3 = *(double *)(param_1 + 0x360);
  *(double *)(param_3 + 0x28) = dVar3;
  *(double *)(param_3 + 0x30) = (double)*(float *)(param_2 + 0x84) + dVar3;
  TryClearingEQSoundMix();
  return 1;
}



// FUNCTION 1422dab70 TryLoadChunk body=112 status=ok
// SIG undefined TryLoadChunk(void)

undefined8 FStreamedAudioPlatformData::TryLoadChunk(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 8) + 8;
  iVar1 = FUntypedBulkData::GetBulkDataSize(lVar3);
  if (0 < iVar1) {
    if (param_3 != (longlong *)0x0) {
      if (*param_3 == 0) {
        iVar1 = FUntypedBulkData::GetBulkDataSize(lVar3);
        lVar2 = FMemory::Malloc((longlong)iVar1,0);
        *param_3 = lVar2;
      }
      FUntypedBulkData::GetCopy(lVar3,param_3,1);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1422dabe0 UnloadPrimaryAsset body=106 status=ok
// SIG undefined UnloadPrimaryAsset(void)

ulonglong UAssetManager::UnloadPrimaryAsset(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 *local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  local_28 = (undefined4 *)0x0;
  local_20 = 1;
  TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_28,1);
  *local_28 = local_18;
  local_28[1] = uStack_14;
  local_28[2] = uStack_10;
  local_28[3] = uStack_c;
  uVar1 = (**(code **)(*param_1 + 0x330))(param_1,&local_28);
  if (local_28 != (undefined4 *)0x0) {
    FMemory::Free();
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 1422dac50 FUN_1422dac50 body=509 status=ok
// SIG undefined FUN_1422dac50(void)

int FUN_1422dac50(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  
  lVar8 = *param_2;
  iVar9 = 0;
  lVar10 = (longlong)(int)param_2[1] * 0x10 + lVar8;
  for (; lVar8 != lVar10; lVar8 = lVar8 + 0x10) {
    lVar7 = FUN_1422cbd90(param_1,lVar8,1);
    if (lVar7 != 0) {
      lVar4 = *(longlong *)(lVar7 + 0x30);
      if ((((lVar4 != 0) && (*(char *)(lVar4 + 0x12) == '\0')) && (*(char *)(lVar4 + 0x11) == '\0'))
         || (((lVar5 = *(longlong *)(lVar7 + 0x50), lVar5 != 0 && (*(char *)(lVar5 + 0x12) == '\0'))
             && (*(char *)(lVar5 + 0x11) == '\0')))) {
        iVar9 = iVar9 + 1;
        if (lVar4 != 0) {
          if ((*(char *)(lVar4 + 0x12) == '\0') && (*(char *)(lVar4 + 0x11) == '\0')) {
            FUN_142833de0();
          }
          local_48 = 0;
          plStack_40 = (longlong *)0x0;
          if ((undefined8 *)(lVar7 + 0x30) != &local_48) {
            *(undefined8 *)(lVar7 + 0x30) = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(lVar7 + 0x38,&plStack_40);
            plVar6 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_40 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plStack_40)(plStack_40);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plStack_40 + 8))(plStack_40,1);
                }
              }
            }
          }
        }
        *(undefined4 *)(lVar7 + 0x48) = 0;
        if (0x7fffffff < *(uint *)(lVar7 + 0x4c)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(lVar7 + 0x40,0);
        }
        lVar4 = *(longlong *)(lVar7 + 0x50);
        if (lVar4 != 0) {
          if ((*(char *)(lVar4 + 0x12) == '\0') && (*(char *)(lVar4 + 0x11) == '\0')) {
            FUN_142833de0();
          }
          local_38 = 0;
          plStack_30 = (longlong *)0x0;
          if ((undefined8 *)(lVar7 + 0x50) != &local_38) {
            *(undefined8 *)(lVar7 + 0x50) = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(lVar7 + 0x58,&plStack_30);
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
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plStack_30 + 8))(plStack_30,1);
                }
              }
            }
          }
        }
        *(undefined4 *)(lVar7 + 0x68) = 0;
        if ((*(int *)(lVar7 + 0x6c) < 0) && (*(int *)(lVar7 + 0x6c) != 0)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(lVar7 + 0x60,0);
        }
      }
    }
  }
  return iVar9;
}



// FUNCTION 1422dae50 FUN_1422dae50 body=77 status=ok
// SIG undefined FUN_1422dae50(void)

ulonglong FUN_1422dae50(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  (**(code **)(*param_1 + 0x300))(param_1,param_2,local_18);
  uVar1 = (**(code **)(*param_1 + 0x330))(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 1422daea0 UnRegisterForBreakEvents body=18 status=ok
// SIG undefined UnRegisterForBreakEvents(void)

void UChaosGameplayEventDispatcher::UnRegisterForBreakEvents(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    TSet<TTuple<FRHIShaderResourceView_*,FShaderResourceKey>,TDefaultMapHashableKeyFuncs<FRHIShaderResourceView_*,FShaderResourceKey,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x1b8);
    return;
  }
  return;
}



// FUNCTION 1422daec0 FUN_1422daec0 body=2844 status=ok
// SIG undefined FUN_1422daec0(void)

void FUN_1422daec0(longlong *param_1,byte param_2)

{
  int *piVar1;
  double dVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  float *pfVar16;
  ulonglong uVar17;
  longlong lVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  undefined1 local_res18 [8];
  LARGE_INTEGER local_res20;
  uint local_238;
  undefined1 local_234;
  longlong local_230;
  longlong lStack_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  int local_208;
  float local_204;
  uint local_200;
  undefined1 local_1fc;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  uint local_1e0;
  undefined4 uStack_1dc;
  float fStack_1d8;
  undefined4 uStack_1d4;
  float local_1d0;
  undefined4 uStack_1cc;
  float fStack_1c8;
  undefined4 uStack_1c4;
  float local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  undefined4 local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  float local_190;
  undefined4 local_18c;
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_17c;
  undefined1 *local_178 [2];
  undefined1 local_168 [32];
  undefined8 local_148;
  undefined4 local_138;
  code *local_128 [2];
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined4 local_e8;
  undefined1 local_d8 [160];
  
  cVar5 = IsInAudioThread();
  if (cVar5 == '\0') {
    iVar12 = (int)param_1[0x71] + -1;
    if (-1 < iVar12) {
      lVar15 = (longlong)iVar12 * 8;
      lVar18 = lVar15;
      do {
        piVar1 = (int *)(*(longlong *)(lVar15 + param_1[0x70]) + 0xb8);
        LOCK();
        iVar6 = *piVar1;
        if (iVar6 == 0) {
          *piVar1 = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (iVar6 == 2) {
          iVar6 = (int)param_1[0x71];
          iVar7 = (iVar6 - iVar12) + -1;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[0x70] + lVar18),
                       (void *)(param_1[0x70] + (longlong)(iVar6 - iVar7) * 8),(longlong)iVar7 << 3)
            ;
            iVar6 = (int)param_1[0x71];
          }
          *(int *)(param_1 + 0x71) = iVar6 + -1;
        }
        lVar18 = lVar18 + -8;
        lVar15 = lVar15 + -8;
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
    }
    uStack_210 = CONCAT71(uStack_210._1_7_,param_2);
    local_148 = 0;
    local_138 = 0;
    local_218 = param_1;
    puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_168);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar9 + 1) = (undefined4)local_218;
      *(undefined4 *)((longlong)puVar9 + 0xc) = local_218._4_4_;
      *(undefined4 *)(puVar9 + 2) = (undefined4)uStack_210;
      *(undefined4 *)((longlong)puVar9 + 0x14) = uStack_210._4_4_;
    }
    local_178[0] = &LAB_1422c2d10;
    FUN_1422f8a30(local_178,local_res18[0]);
    FAudioThread::ProcessAllCommands();
  }
  else {
    iVar12 = (int)param_1[0x73] + -1;
    if (-1 < iVar12) {
      lVar15 = (longlong)iVar12 * 8;
      lVar18 = lVar15;
      do {
        cVar5 = USoundWave::CleanupDecompressor(*(undefined8 *)(lVar15 + param_1[0x72]),0);
        if (cVar5 != '\0') {
          iVar6 = (int)param_1[0x73];
          iVar7 = (iVar6 - iVar12) + -1;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[0x72] + lVar18),
                       (void *)(param_1[0x72] + (longlong)(iVar6 - iVar7) * 8),(longlong)iVar7 << 3)
            ;
            iVar6 = (int)param_1[0x73];
          }
          *(int *)(param_1 + 0x73) = iVar6 + -1;
        }
        lVar18 = lVar18 + -8;
        lVar15 = lVar15 + -8;
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
    }
    uVar10 = 0;
    uVar13 = uVar10;
    if (DAT_146aef388 == 0) {
      uVar13 = 0x10;
    }
    *(byte *)(param_1 + 0x6b) = (byte)uVar13 | *(byte *)(param_1 + 0x6b) & 0xef;
    FAudioDevice::UpdateAudioPluginSettingsObjectCache(param_1);
    (**(code **)(*param_1 + 0x110))(param_1);
    QueryPerformanceCounter(&local_res20);
    dVar2 = (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0;
    dVar26 = (double)param_1[0x23];
    param_1[0x23] = (longlong)dVar2;
    *(float *)((longlong)param_1 + 0x36c) = (float)(dVar2 - dVar26);
    (**(code **)(*param_1 + 0x130))(param_1);
    if (param_2 != 0) {
      fVar21 = *(float *)((longlong)param_1 + 0x36c);
      if (0.5 <= fVar21) {
        fVar21 = 0.5;
      }
      if (0.0 < *(float *)(param_1 + 0x19)) {
        fVar25 = *(float *)((longlong)param_1 + 0xc4) / *(float *)(param_1 + 0x19);
        fVar20 = *(float *)(param_1 + 0x18);
        if (1.0 <= fVar25) {
          *(undefined4 *)(param_1 + 0x19) = 0;
        }
        else {
          fVar20 = fVar20 * fVar25;
        }
        *(float *)(param_1 + 0x17) = fVar20 + *(float *)((longlong)param_1 + 0xbc);
        *(float *)((longlong)param_1 + 0xc4) = fVar21 + *(float *)((longlong)param_1 + 0xc4);
      }
    }
    param_1[0x14] = param_1[0x14] + 1;
    FUN_1422cfd60(param_1,param_2,0);
    bVar4 = false;
    lVar15 = param_1[0x25];
    local_238 = local_238 | 1;
    fVar21 = 0.0;
    local_230 = 0;
    lStack_228 = 0;
    uVar13 = 1;
    cVar5 = '\x01';
    lVar18 = (longlong)(int)param_1[0x26] * 0xb0 + lVar15;
    local_234 = 0;
    local_220 = 0x3f000000;
    local_21c = 0x40000000;
    for (; lVar15 != lVar18; lVar15 = lVar15 + 0xb0) {
      local_200 = local_200 | 1;
      local_1fc = 0;
      local_1f8 = 0;
      lStack_1f0 = 0;
      local_1e8 = 0x3f000000;
      local_1e4 = 0x40000000;
      FInteriorSettings::FInteriorSettings(&local_1e0);
      local_218 = *(longlong **)(lVar15 + 0x10);
      uStack_210 = CONCAT44(uStack_210._4_4_,*(undefined4 *)(lVar15 + 0x18));
      FUN_1422cad20(param_1,*(undefined4 *)(lVar15 + 100),&local_218,&local_208);
      iVar12 = local_208;
      if ((local_208 == *(int *)(lVar15 + 0x60)) &&
         (cVar5 = FInteriorSettings::operator!=(&local_1e0,lVar15 + 0x3c), cVar5 == '\0')) {
        dVar26 = *(double *)(lVar15 + 0x68);
      }
      else {
        *(double *)(lVar15 + 0x68) = DAT_1468b5a78;
        uVar14 = local_1e0 & 1;
        fVar20 = fStack_1c8;
        if (uVar14 != 0) {
          fVar20 = *(float *)(lVar15 + 0x54);
        }
        dVar26 = *(double *)(lVar15 + 0x68);
        *(double *)(lVar15 + 0x70) = (double)fVar20 + dVar26;
        fVar20 = fStack_1d8;
        if (uVar14 != 0) {
          fVar20 = *(float *)(lVar15 + 0x44);
        }
        *(double *)(lVar15 + 0x78) = (double)fVar20 + dVar26;
        fVar20 = local_1c0;
        if (uVar14 != 0) {
          fVar20 = *(float *)(lVar15 + 0x5c);
        }
        *(double *)(lVar15 + 0x80) = (double)fVar20 + dVar26;
        fVar20 = local_1d0;
        if (uVar14 != 0) {
          fVar20 = *(float *)(lVar15 + 0x4c);
        }
        *(int *)(lVar15 + 0x60) = iVar12;
        *(double *)(lVar15 + 0x88) = (double)fVar20 + dVar26;
        *(ulonglong *)(lVar15 + 0x3c) = CONCAT44(uStack_1dc,local_1e0);
        *(ulonglong *)(lVar15 + 0x44) = CONCAT44(uStack_1d4,fStack_1d8);
        *(ulonglong *)(lVar15 + 0x4c) = CONCAT44(uStack_1cc,local_1d0);
        *(ulonglong *)(lVar15 + 0x54) = CONCAT44(uStack_1c4,fStack_1c8);
        *(float *)(lVar15 + 0x5c) = local_1c0;
      }
      if (dVar26 <= DAT_1468b5a78) {
        if (DAT_1468b5a78 < *(double *)(lVar15 + 0x70)) {
          fVar20 = (float)((DAT_1468b5a78 - dVar26) / (*(double *)(lVar15 + 0x70) - dVar26));
          if (0.0 <= fVar20) {
            if (1.0 <= fVar20) {
              fVar20 = 1.0;
            }
          }
          else {
            fVar20 = 0.0;
          }
        }
        else {
          fVar20 = 1.0;
        }
      }
      else {
        fVar20 = 0.0;
      }
      *(float *)(lVar15 + 0x90) = fVar20;
      if (dVar26 <= DAT_1468b5a78) {
        if (DAT_1468b5a78 < *(double *)(lVar15 + 0x78)) {
          fVar20 = (float)((DAT_1468b5a78 - dVar26) / (*(double *)(lVar15 + 0x78) - dVar26));
          if (0.0 <= fVar20) {
            if (1.0 <= fVar20) {
              fVar20 = 1.0;
            }
          }
          else {
            fVar20 = 0.0;
          }
        }
        else {
          fVar20 = 1.0;
        }
      }
      else {
        fVar20 = 0.0;
      }
      *(float *)(lVar15 + 0x98) = fVar20;
      if (dVar26 <= DAT_1468b5a78) {
        if (DAT_1468b5a78 < *(double *)(lVar15 + 0x80)) {
          fVar20 = (float)((DAT_1468b5a78 - dVar26) / (*(double *)(lVar15 + 0x80) - dVar26));
          if (0.0 <= fVar20) {
            if (1.0 <= fVar20) {
              fVar20 = 1.0;
            }
          }
          else {
            fVar20 = 0.0;
          }
        }
        else {
          fVar20 = 1.0;
        }
      }
      else {
        fVar20 = 0.0;
      }
      *(float *)(lVar15 + 0x94) = fVar20;
      if (dVar26 <= DAT_1468b5a78) {
        if (DAT_1468b5a78 < *(double *)(lVar15 + 0x88)) {
          fVar20 = (float)((DAT_1468b5a78 - dVar26) / (*(double *)(lVar15 + 0x88) - dVar26));
          if (0.0 <= fVar20) {
            if (1.0 <= fVar20) {
              fVar20 = 1.0;
            }
          }
          else {
            fVar20 = 0.0;
          }
        }
        else {
          fVar20 = 1.0;
        }
      }
      else {
        fVar20 = 0.0;
      }
      *(float *)(lVar15 + 0x9c) = fVar20;
      if ((!bVar4) || ((local_208 != 0 && (((char)uVar13 != '\0' || (fVar21 < local_204)))))) {
        bVar4 = true;
        local_238 = local_238 ^ (local_200 ^ local_238) & 1;
        local_234 = local_1fc;
        if (local_208 != 0) {
          uVar13 = uVar10;
        }
        local_230 = local_1f8;
        lStack_228 = lStack_1f0;
        local_220 = local_1e8;
        local_21c = local_1e4;
        fVar21 = local_204;
      }
      cVar5 = (char)uVar13;
    }
    if (((*(byte *)(param_1 + 0x6d) & 2) != 0) &&
       ((fVar21 < *(float *)(param_1 + 0x6a) || (cVar5 != '\0')))) {
      local_220 = (undefined4)param_1[0x69];
      local_21c = *(undefined4 *)((longlong)param_1 + 0x34c);
      local_238 = local_238 ^ (*(uint *)(param_1 + 0x66) ^ local_238) & 1;
      local_234 = *(undefined1 *)((longlong)param_1 + 0x334);
      local_230 = param_1[0x67];
      lStack_228 = param_1[0x68];
    }
    if (param_1[0x59] != 0) {
      FUN_1422f9f10(param_1[0x59],&local_238,0);
      FAudioEffectsManager::Update(param_1[0x59]);
    }
    fVar21 = *(float *)((longlong)param_1 + 0x36c);
    if (0.5 <= fVar21) {
      fVar21 = 0.5;
    }
    FAudioDevice::UpdateSoundClassProperties(param_1,fVar21);
    FUN_1422d3680(param_1,0);
    if (0 < (int)param_1[0x26]) {
      pfVar16 = (float *)param_1[0x25];
      fVar21 = *pfVar16;
      fVar20 = pfVar16[1];
      fVar25 = pfVar16[2];
      fVar3 = pfVar16[3];
      local_188 = pfVar16[4];
      local_184 = pfVar16[5];
      local_180 = pfVar16[6];
      local_1ac = 0;
      local_19c = 0;
      fVar22 = fVar20 * 1.0 - fVar25 * 0.0;
      fVar23 = fVar25 * 0.0 - fVar21 * 1.0;
      fVar24 = fVar21 * 0.0 - fVar20 * 0.0;
      fVar22 = fVar22 + fVar22;
      fVar23 = fVar23 + fVar23;
      fVar24 = fVar24 + fVar24;
      local_1b8 = (fVar24 * fVar20 - fVar23 * fVar25) + fVar22 * fVar3 + 0.0;
      local_1b4 = (fVar22 * fVar25 - fVar24 * fVar21) + fVar23 * fVar3 + 0.0;
      local_1b0 = (fVar23 * fVar21 - fVar22 * fVar20) + fVar24 * fVar3 + 1.0;
      fVar22 = fVar20 * 0.0 - fVar25 * 1.0;
      fVar23 = fVar25 * 0.0 - fVar21 * 0.0;
      fVar24 = fVar21 * 1.0 - fVar20 * 0.0;
      fVar22 = fVar22 + fVar22;
      fVar23 = fVar23 + fVar23;
      fVar24 = fVar24 + fVar24;
      local_1a8 = (fVar24 * fVar20 - fVar23 * fVar25) + fVar22 * fVar3 + 0.0;
      local_1a4 = (fVar22 * fVar25 - fVar24 * fVar21) + fVar23 * fVar3 + 1.0;
      local_1a0 = (fVar23 * fVar21 - fVar22 * fVar20) + fVar24 * fVar3 + 0.0;
      local_198 = local_1a0 * local_1b4 - local_1a4 * local_1b0;
      local_194 = local_1a8 * local_1b0 - local_1a0 * local_1b8;
      local_190 = local_1a4 * local_1b8 - local_1a8 * local_1b4;
      local_18c = 0;
      local_17c = 0x3f800000;
      puVar9 = (undefined8 *)FMatrix::Inverse(&local_1b8,local_d8);
      pfVar16 = (float *)(param_1 + 0xda);
      lVar15 = puVar9[1];
      *(undefined8 *)pfVar16 = *puVar9;
      param_1[0xdb] = lVar15;
      lVar15 = puVar9[3];
      param_1[0xdc] = puVar9[2];
      param_1[0xdd] = lVar15;
      lVar15 = puVar9[5];
      param_1[0xde] = puVar9[4];
      param_1[0xdf] = lVar15;
      lVar15 = puVar9[7];
      param_1[0xe0] = puVar9[6];
      param_1[0xe1] = lVar15;
      uVar13 = uVar10;
      pfVar19 = pfVar16;
      uVar17 = uVar10;
      do {
        do {
          iVar12 = _finite((double)*pfVar16);
          if (iVar12 == 0) goto LAB_1422db7bb;
          uVar13 = uVar13 + 1;
          pfVar16 = pfVar16 + 1;
        } while ((longlong)uVar13 < 4);
        uVar17 = uVar17 + 1;
        pfVar16 = pfVar19 + 4;
        uVar13 = uVar10;
        pfVar19 = pfVar16;
      } while ((longlong)uVar17 < 4);
    }
LAB_1422db7bb:
    if ((int)param_1[0x2a] != 0) {
      uVar13 = uVar10;
      uVar17 = uVar10;
      if (0 < (int)param_1[0x2a]) {
        do {
          cVar5 = (**(code **)(**(longlong **)(uVar13 + param_1[0x29]) + 0x50))();
          if (cVar5 != '\0') {
            (**(code **)(**(longlong **)(uVar13 + param_1[0x29]) + 0x38))();
          }
          uVar14 = (int)uVar17 + 1;
          uVar13 = uVar13 + 8;
          uVar17 = (ulonglong)uVar14;
        } while ((int)uVar14 < (int)param_1[0x2a]);
      }
      plVar11 = param_1 + 0x74;
      *(undefined4 *)(param_1 + 0x75) = 0;
      if ((*(int *)((longlong)param_1 + 0x3ac) < 0) && (*(int *)((longlong)param_1 + 0x3ac) != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar11,0);
      }
      uVar8 = FUN_1422cef00(param_1,plVar11,param_2 ^ 1);
      FUN_1422da0e0(param_1,plVar11,uVar8);
      FUN_1422d9300(param_1,plVar11,uVar8,param_2);
      FUN_1422dc790(param_1,plVar11,uVar8);
      if ((int)param_1[2] < (int)param_1[0x75]) {
        FUN_1422ba8b0(*plVar11,(longlong)(int)param_1[0x75],local_res18[0],local_res18);
        uVar8 = *(undefined4 *)(*(longlong *)(*plVar11 + (longlong)(int)param_1[2] * 8) + 0x84);
      }
      else {
        uVar8 = 0xbf800000;
      }
      *(undefined4 *)((longlong)param_1 + 0x714) = uVar8;
      if (param_2 != 0) {
        plVar11 = (longlong *)param_1[0x6e];
        uVar13 = (longlong)(int)param_1[0x6f] & 0x1fffffffffffffff;
        if (plVar11 + (int)param_1[0x6f] < plVar11) {
          uVar13 = uVar10;
        }
        uVar17 = uVar10;
        if (uVar13 != 0) {
          do {
            lVar15 = *plVar11;
            uVar17 = uVar17 + 1;
            fVar21 = *(float *)((longlong)param_1 + 0x36c);
            plVar11 = plVar11 + 1;
            if (0.5 <= fVar21) {
              fVar21 = 0.5;
            }
            *(float *)(lVar15 + 0xa8) =
                 fVar21 * *(float *)(lVar15 + 0xac) + *(float *)(lVar15 + 0xa8);
          } while (uVar17 != uVar13);
        }
      }
    }
    (**(code **)(*param_1 + 0x118))(param_1);
    if (param_1[0x59] != 0) {
      uVar10 = *(ulonglong *)(param_1[0x59] + 0x18);
    }
    local_f8 = 0;
    local_e8 = 0;
    uStack_210 = uVar10;
    local_218._0_4_ = *(undefined4 *)((longlong)param_1 + 0x3c);
    puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_118);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar9 + 1) = (undefined4)local_218;
      *(undefined4 *)((longlong)puVar9 + 0xc) = local_218._4_4_;
      *(undefined4 *)(puVar9 + 2) = (undefined4)uStack_210;
      *(undefined4 *)((longlong)puVar9 + 0x14) = uStack_210._4_4_;
    }
    local_128[0] = UE4Function_Private::
                   TFunctionRefCaller<<lambda_4e84b627b36beea749ba7086a6493f9c>,void___cdecl(void)>
                   ::Call;
    FUN_1422f8d80(local_128,local_res18[0]);
  }
  return;
}



// FUNCTION 1422db9e0 Update body=90 status=ok
// SIG undefined Update(void)

void FDynamicParameter::Update(float *param_1,float param_2)

{
  float fVar1;
  
  if (0.0 < param_1[4]) {
    fVar1 = param_1[3] / param_1[4];
    if (fVar1 < 1.0) {
      *param_1 = param_1[1] + param_1[2] * fVar1;
      param_1[3] = param_2 + param_1[3];
      return;
    }
    param_1[4] = 0.0;
    *param_1 = param_1[1] + param_1[2];
    param_1[3] = param_2 + param_1[3];
  }
  return;
}



// FUNCTION 1422dba70 UpdateAudioPluginSettingsObjectCache body=699 status=ok
// SIG undefined UpdateAudioPluginSettingsObjectCache(void)

void FAudioDevice::UpdateAudioPluginSettingsObjectCache(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  plVar1 = (longlong *)(param_1 + 0x2b8);
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2c4)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_28 = 0;
  local_20 = 0;
  local_18 = -1;
  uVar3 = USpatializationPluginSourceSettingsBase::GetPrivateStaticClass();
  FUN_1417a5560(uVar3,&local_28,1,0x10,0);
  uVar4 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    if ((local_18 < 0) || ((int)uVar4 <= local_18)) break;
    iVar2 = *(int *)(param_1 + 0x2c0);
    uVar3 = *(undefined8 *)(local_28 + (longlong)local_18 * 8);
    *(int *)(param_1 + 0x2c0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2c4) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar3;
    uVar4 = local_20 & 0xffffffff;
    do {
      local_18 = local_18 + 1;
      if ((int)local_20 <= local_18) break;
    } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  } while( true );
  if (local_28 != 0) {
    FMemory::Free(local_28);
  }
  local_28 = 0;
  local_20 = 0;
  local_18 = -1;
  uVar3 = UOcclusionPluginSourceSettingsBase::GetPrivateStaticClass();
  FUN_1417a5560(uVar3,&local_28,1,0x10,0);
  uVar4 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    if ((local_18 < 0) || ((int)uVar4 <= local_18)) break;
    iVar2 = *(int *)(param_1 + 0x2c0);
    uVar3 = *(undefined8 *)(local_28 + (longlong)local_18 * 8);
    *(int *)(param_1 + 0x2c0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2c4) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar3;
    uVar4 = local_20 & 0xffffffff;
    do {
      local_18 = local_18 + 1;
      if ((int)local_20 <= local_18) break;
    } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  } while( true );
  if (local_28 != 0) {
    FMemory::Free(local_28);
  }
  local_28 = 0;
  local_20 = 0;
  local_18 = -1;
  uVar3 = UReverbPluginSourceSettingsBase::GetPrivateStaticClass();
  FUN_1417a5560(uVar3,&local_28,1,0x10,0);
  uVar4 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar4 <= local_18)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        return;
      }
      iVar2 = *(int *)(param_1 + 0x2c0);
      uVar3 = *(undefined8 *)(local_28 + (longlong)local_18 * 8);
      *(int *)(param_1 + 0x2c0) = iVar2 + 1;
      if (*(int *)(param_1 + 0x2c4) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar3;
      uVar4 = local_20 & 0xffffffff;
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 1422dbd30 FUN_1422dbd30 body=1300 status=ok
// SIG undefined FUN_1422dbd30(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1422dbd30(longlong *param_1,code ***param_2,ulonglong *param_3)

{
  code ***pppcVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong *puVar10;
  longlong lVar11;
  code **ppcVar12;
  code **ppcVar13;
  code *local_res8;
  code ***local_res10;
  code ****local_d8;
  code ***pppcStack_d0;
  ulonglong local_c8;
  code **local_c0;
  undefined8 local_b8;
  code ***local_a8;
  code **appcStack_a0 [3];
  longlong local_88;
  undefined4 local_80;
  undefined8 local_7c;
  code ***local_70;
  longlong local_68 [2];
  code ***local_58;
  longlong local_50 [3];
  
  puVar10 = (ulonglong *)0x0;
  ppcVar13 = *param_2;
  if ((int)param_1[0x70] != *(int *)((longlong)param_1 + 0x3ac)) {
    plVar6 = (longlong *)param_1[0x77];
    if ((longlong *)param_1[0x77] == (longlong *)0x0) {
      plVar6 = param_1 + 0x76;
    }
    iVar9 = *(int *)((longlong)plVar6 +
                    ((longlong)((int)((ulonglong)ppcVar13 >> 0x20) + (int)ppcVar13) &
                    (longlong)(int)param_1[0x78] - 1U) * 4);
    if (iVar9 != -1) {
      do {
        puVar8 = (ulonglong *)((longlong)iVar9 * 0x20 + param_1[0x6f]);
        if ((code **)*puVar8 == ppcVar13) {
          if (iVar9 != -1) goto LAB_1422dbdc2;
          break;
        }
        iVar9 = (int)puVar8[3];
      } while (iVar9 != -1);
    }
  }
  puVar8 = puVar10;
LAB_1422dbdc2:
  puVar5 = puVar8 + 1;
  if (puVar8 == (ulonglong *)0x0) {
    puVar5 = puVar10;
  }
  if (puVar5 != (ulonglong *)0x0) {
    uVar3 = *puVar5;
    ppcVar13 = param_2[1];
    plVar6 = (longlong *)(uVar3 + 0x90);
    pppcVar1 = param_2 + 1;
    if (*(int *)(uVar3 + 0x98) != *(int *)(uVar3 + 0xc4)) {
      lVar7 = *(longlong *)(uVar3 + 0xd0);
      if (*(longlong *)(uVar3 + 0xd0) == 0) {
        lVar7 = uVar3 + 200;
      }
      iVar9 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)ppcVar13 >> 0x20) + (int)ppcVar13) &
                               (longlong)*(int *)(uVar3 + 0xd8) - 1U) * 4);
      if (iVar9 != -1) {
        do {
          puVar8 = (ulonglong *)((longlong)iVar9 * 0x80 + *plVar6);
          if ((code **)*puVar8 == ppcVar13) {
            if (iVar9 != -1) goto LAB_1422dbe72;
            break;
          }
          iVar9 = (int)puVar8[0xf];
        } while (iVar9 != -1);
      }
    }
    puVar8 = puVar10;
LAB_1422dbe72:
    puVar5 = puVar8 + 1;
    if (puVar8 == (ulonglong *)0x0) {
      puVar5 = puVar10;
    }
    local_c8 = uVar3;
    (**(code **)(*param_1 + 0x3d8))(param_1,&local_58,param_3);
    if (puVar5 != (ulonglong *)0x0) {
      FSoftObjectPath::operator==(puVar5 + 3,&local_58);
    }
    ppcVar13 = *pppcVar1;
    if (*(int *)(uVar3 + 0x98) != *(int *)(uVar3 + 0xc4)) {
      lVar7 = *(longlong *)(uVar3 + 0xd0);
      if (*(longlong *)(uVar3 + 0xd0) == 0) {
        lVar7 = uVar3 + 200;
      }
      iVar9 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)ppcVar13 >> 0x20) + (int)ppcVar13) &
                               (longlong)*(int *)(uVar3 + 0xd8) - 1U) * 4);
      if (iVar9 != -1) {
        do {
          puVar10 = (ulonglong *)((longlong)iVar9 * 0x80 + *plVar6);
          if ((code **)*puVar10 == ppcVar13) {
            if ((iVar9 != -1) && (puVar10 != (ulonglong *)0x0)) goto LAB_1422dbf35;
            break;
          }
          iVar9 = (int)puVar10[0xf];
        } while (iVar9 != -1);
      }
    }
    local_res10 = pppcVar1;
    FUN_1422b8480(plVar6,&local_res8,&local_res10,0);
    puVar10 = (ulonglong *)((longlong)(int)local_res8 * 0x80 + *plVar6);
LAB_1422dbf35:
    puVar10[1] = *param_3;
    local_70 = local_58;
    local_80 = 0xffffffff;
    local_7c = 0;
    FString::FString(local_68,local_50);
    *(undefined4 *)(puVar10 + 2) = local_80;
    *(undefined4 *)((longlong)puVar10 + 0x14) = (undefined4)local_7c;
    *(undefined4 *)(puVar10 + 3) = local_7c._4_4_;
    local_a8 = local_70;
    FString::FString(appcStack_a0,local_68);
    FSoftObjectPath::operator=(puVar10 + 4,&local_a8);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    FAssetData::GetPrimaryAssetId(param_3,&local_d8);
    if ((local_d8 != (code ****)*param_2) || (pppcStack_d0 != (code ***)*pppcVar1)) {
      plVar6 = (longlong *)UAssetManager::GetAssetRegistry(param_1);
      local_a8 = (code ***)*param_2;
      appcStack_a0[0] = param_2[1];
      (**(code **)(*plVar6 + 0x1e8))(plVar6,puVar10[1],&local_a8);
    }
    if (*(char *)((longlong)param_1 + 0x276) != '\0') {
      local_res10 = local_58;
      local_d8 = &local_res10;
      pppcStack_d0 = param_2;
      TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FLinearColor_const_&>_>
                (param_1 + 5,&local_res8,&local_d8,0);
    }
    if (puVar5 != (ulonglong *)0x0) {
      TSet<TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x23,param_2);
    }
    local_88 = 0;
    local_res10 = (code ***)0x0;
    local_res8 = (code *)((ulonglong)local_res8 & 0xffffffffffffff00);
    cVar4 = *(char *)(local_c8 + 0x39);
    pppcStack_d0 = (code ***)&local_res8;
    local_d8 = (code ****)FUN_1421afad0;
    local_a8 = (code ***)FUN_1421afad0;
    appcStack_a0[0] = (code **)pppcStack_d0;
    lVar7 = FUN_1415d8310(&local_a8,&DAT_1465273d8);
    iVar9 = *(int *)(lVar7 + 0x20);
    lVar11 = (longlong)iVar9;
    *(int *)(lVar7 + 0x20) = iVar9 + 1;
    if (*(int *)(lVar7 + 0x24) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (lVar7 + 0x18,iVar9);
    }
    lVar7 = *(longlong *)(lVar7 + 0x18);
    *(char *)(lVar7 + 0x10 + lVar11 * 0x18) = (cVar4 == '\0') + '\x01';
    *(undefined1 *)(lVar7 + 0x11 + lVar11 * 0x18) = 2;
    puVar2 = (undefined8 *)(lVar7 + lVar11 * 0x18);
    *puVar2 = local_res10;
    puVar2[1] = local_88;
    local_c0 = (code **)0x0;
    local_b8 = 0;
    cVar4 = FUN_1421c9470(&local_c0,param_3);
    if (cVar4 != '\0') {
      ppcVar13 = local_c0 + (longlong)(int)local_b8 * 5;
      if (local_c0 != ppcVar13) {
        local_res8 = (code *)0x0;
        ppcVar12 = local_c0;
        do {
          if ((code **)*ppcVar12 != (code **)0x0) {
            local_c8 = 0;
            if ((((code **)ppcVar12[1] != (code **)0x0) && ((code **)*ppcVar12 == *param_2)) &&
               ((code **)ppcVar12[1] == *pppcVar1)) {
              TSet<TTuple<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,TMap<FName,FAssetBundleEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>_>,0>,FDefaultSetAllocator>
              ::FindId(param_1 + 0x23,&local_res8,param_2);
              if (((int)local_res8 == -1) ||
                 (lVar7 = (longlong)(int)local_res8 * 0x68 + param_1[0x23], lVar7 == 0)) {
                local_d8 = (code ****)param_2;
                FUN_1422b7f30(param_1 + 0x23,&local_res10,&local_d8,0);
                lVar7 = (longlong)(int)local_res10 * 0x68 + param_1[0x23];
              }
              local_a8 = (code ***)(ppcVar12 + 2);
              appcStack_a0[0] = ppcVar12;
              TSet<TTuple<FName,FAssetBundleEntry>,TDefaultMapHashableKeyFuncs<FName,FAssetBundleEntry,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_&,FAssetBundleEntry_&>_>
                        (lVar7 + 0x10,&local_88,&local_a8);
            }
          }
          ppcVar12 = ppcVar12 + 5;
        } while (ppcVar12 != ppcVar13);
      }
    }
    if ((int)local_b8 != 0) {
      ppcVar13 = local_c0 + 3;
      iVar9 = (int)local_b8;
      do {
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (ppcVar13);
        ppcVar13 = ppcVar13 + 5;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (local_c0 != (code **)0x0) {
      FMemory::Free(local_c0);
    }
    appcStack_a0[0] = &local_res8;
    local_res8 = (code *)((ulonglong)local_res8 & 0xffffffffffffff00);
    local_a8 = (code ***)FUN_1421afad0;
    lVar7 = FUN_1415d8310(&local_a8,&DAT_1465273d8);
    *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + -1;
    TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(lVar7 + 0x18);
    if (local_50[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1422dc250 UpdateClassAdjustorOverrideEntry body=610 status=ok
// SIG undefined UpdateClassAdjustorOverrideEntry(void)

void UpdateClassAdjustorOverrideEntry(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  float fVar6;
  
  if ((*(byte *)((longlong)param_2 + 0x54) & 1) == 0) {
    fVar6 = *(float *)(param_2 + 6);
    pfVar1 = (float *)(param_2 + 3);
    fVar2 = *(float *)(param_1 + 1);
    if ((fVar6 != fVar2) || (*(float *)(param_2 + 5) != 0.0)) {
      *(float *)(param_2 + 6) = fVar2;
      *(undefined4 *)(param_2 + 5) = 0;
      *(float *)((longlong)param_2 + 0x1c) = fVar2;
      *pfVar1 = fVar2;
      *(undefined4 *)(param_2 + 4) = 0;
      fVar6 = *(float *)(param_2 + 6);
    }
    fVar2 = *(float *)(param_2 + 1);
    fVar3 = *(float *)(param_2 + 10);
    if ((fVar6 != fVar2) || (fVar3 != *(float *)(param_2 + 5))) {
      *(float *)(param_2 + 6) = fVar2;
      if (fVar3 <= 0.0) {
        *(float *)((longlong)param_2 + 0x1c) = fVar2;
        *pfVar1 = fVar2;
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined4 *)(param_2 + 5) = 0;
      }
      else {
        *(float *)((longlong)param_2 + 0x1c) = *pfVar1;
        *(float *)(param_2 + 5) = fVar3;
        *(undefined4 *)((longlong)param_2 + 0x24) = 0;
        *(float *)(param_2 + 4) = fVar2 - *pfVar1;
      }
    }
    fVar6 = *(float *)((longlong)param_2 + 0x4c);
    pfVar1 = (float *)((longlong)param_2 + 0x34);
    fVar2 = *(float *)((longlong)param_1 + 0xc);
    if ((fVar6 != fVar2) || (*(float *)((longlong)param_2 + 0x44) != 0.0)) {
      *(float *)((longlong)param_2 + 0x4c) = fVar2;
      *(undefined4 *)((longlong)param_2 + 0x44) = 0;
      *(float *)(param_2 + 7) = fVar2;
      *pfVar1 = fVar2;
      *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
      fVar6 = *(float *)((longlong)param_2 + 0x4c);
    }
    fVar2 = *(float *)((longlong)param_2 + 0xc);
    fVar3 = *(float *)(param_2 + 10);
    if ((fVar6 != fVar2) || (fVar3 != *(float *)((longlong)param_2 + 0x44))) {
      *(float *)((longlong)param_2 + 0x4c) = fVar2;
      if (fVar3 <= 0.0) {
        *(float *)(param_2 + 7) = fVar2;
        *pfVar1 = fVar2;
        *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
        *(undefined4 *)((longlong)param_2 + 0x44) = 0;
      }
      else {
        *(float *)(param_2 + 7) = *pfVar1;
        *(float *)((longlong)param_2 + 0x44) = fVar3;
        *(undefined4 *)(param_2 + 8) = 0;
        *(float *)((longlong)param_2 + 0x3c) = fVar2 - *pfVar1;
      }
    }
  }
  else {
    pfVar1 = (float *)((longlong)param_2 + 0x34);
    if ((*(byte *)((longlong)param_2 + 0x54) & 2) == 0) {
      FDynamicParameter::Update(pfVar1,param_3);
      FDynamicParameter::Update(param_2 + 3,param_3);
    }
    else {
      fVar6 = *(float *)((longlong)param_2 + 0xc);
      fVar2 = *(float *)(param_2 + 10);
      if ((fVar6 != *(float *)((longlong)param_2 + 0x4c)) ||
         (fVar2 != *(float *)((longlong)param_2 + 0x44))) {
        *(float *)((longlong)param_2 + 0x4c) = fVar6;
        if (fVar2 <= 0.0) {
          *(float *)(param_2 + 7) = fVar6;
          *pfVar1 = fVar6;
          *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
          *(undefined4 *)((longlong)param_2 + 0x44) = 0;
        }
        else {
          *(float *)(param_2 + 7) = *pfVar1;
          *(float *)((longlong)param_2 + 0x44) = fVar2;
          *(undefined4 *)(param_2 + 8) = 0;
          *(float *)((longlong)param_2 + 0x3c) = fVar6 - *pfVar1;
        }
      }
      fVar6 = *(float *)(param_2 + 1);
      fVar2 = *(float *)(param_2 + 10);
      if ((fVar6 != *(float *)(param_2 + 6)) || (fVar2 != *(float *)(param_2 + 5))) {
        *(float *)(param_2 + 6) = fVar6;
        if (fVar2 <= 0.0) {
          *(float *)((longlong)param_2 + 0x1c) = fVar6;
          *(float *)(param_2 + 3) = fVar6;
          *(undefined4 *)(param_2 + 4) = 0;
          *(undefined4 *)(param_2 + 5) = 0;
        }
        else {
          fVar3 = *(float *)(param_2 + 3);
          *(float *)((longlong)param_2 + 0x1c) = fVar3;
          *(float *)(param_2 + 5) = fVar2;
          *(undefined4 *)((longlong)param_2 + 0x24) = 0;
          *(float *)(param_2 + 4) = fVar6 - fVar3;
        }
      }
    }
  }
  if (*param_1 == 0) {
    *param_1 = *param_2;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(int *)(param_1 + 1) = (int)param_2[3];
  *(uint *)(param_1 + 2) =
       *(uint *)(param_1 + 2) ^ (*(uint *)(param_2 + 2) ^ *(uint *)(param_1 + 2)) & 1;
  bVar4 = *(byte *)((longlong)param_2 + 0x54);
  bVar5 = bVar4 & 0xfd;
  *(byte *)((longlong)param_2 + 0x54) = bVar5 | 1;
  if (((bVar4 & 4) != 0) &&
     (*(float *)(param_2 + 5) < *(float *)((longlong)param_2 + 0x24) ||
      *(float *)(param_2 + 5) == *(float *)((longlong)param_2 + 0x24))) {
    *(byte *)((longlong)param_2 + 0x54) = bVar5 | 9;
  }
  return;
}



// FUNCTION 1422dc4c0 UpdateCommon body=101 status=ok
// SIG undefined UpdateCommon(void)

void FSoundSource::UpdateCommon(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x10) + 0xe0);
  *(float *)(param_1 + 0x3c) = fVar1;
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0xa4) & 0x200) == 0) {
    fVar1 = fVar1 * *(float *)(*(longlong *)(param_1 + 8) + 0xb8);
  }
  fVar2 = 0.4;
  if ((0.4 <= fVar1) && (fVar2 = fVar1, 2.0 <= fVar1)) {
    fVar2 = 2.0;
  }
  *(float *)(param_1 + 0x3c) = fVar2;
  fVar1 = *(float *)(*(longlong *)(param_1 + 8) + 0x36c);
  if (0.5 <= fVar1) {
    fVar1 = 0.5;
  }
  *(float *)(param_1 + 0x38) = fVar1 * fVar2 + *(float *)(param_1 + 0x38);
  return;
}



// FUNCTION 1422dc530 FUN_1422dc530 body=598 status=ok
// SIG undefined FUN_1422dc530(void)

void FUN_1422dc530(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  undefined1 **local_res18;
  undefined1 ***local_res20;
  int iStack_c4;
  undefined1 *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  
  if (*(int *)(param_1 + 0x2e8) - *(int *)(param_1 + 0x314) < 1) {
    local_88 = 0;
    local_78 = 0;
    puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[1] = param_1;
      *puVar12 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_1422c2da0;
    FUN_1422f8a30(local_b8,local_res8[0]);
    return;
  }
  local_res10 = local_res8;
  plVar1 = (longlong *)(param_1 + 0x2e0);
  local_res18 = &local_res10;
  local_res8[0] = 0;
  TSparseArray<TSetElement<TTuple<FName,FActivatedReverb>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Compact(plVar1);
  local_res20 = &local_res18;
  AlgoImpl::
  IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<FName,FActivatedReverb>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FActivatedReverb,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>_>::FValueComparisonClass<<lambda_6a63a3bd87c137504a1d5d9f46b4839a>_>_>_>_>_>
            (*plVar1,(longlong)(*(int *)(param_1 + 0x2e8) - *(int *)(param_1 + 0x314)),local_res8[0]
             ,&local_res20);
  TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
  ::Rehash(plVar1);
  iVar6 = *(int *)(param_1 + 0x308);
  iVar14 = 0;
  iStack_c4 = 0;
  if (iVar6 != 0) {
    puVar15 = *(uint **)(param_1 + 0x300);
    if (*(uint **)(param_1 + 0x300) == (uint *)0x0) {
      puVar15 = (uint *)(param_1 + 0x2f0);
    }
    uVar10 = *puVar15;
    iVar11 = 0;
    while (uVar10 == 0) {
      iVar14 = iVar14 + 0x20;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11) goto LAB_1422dc655;
      uVar10 = puVar15[(longlong)iVar11 + 1];
      iVar11 = iVar11 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar11 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    iStack_c4 = (iVar14 - iVar11) + 0x1f;
    if (iVar6 < iStack_c4) {
LAB_1422dc655:
      iStack_c4 = iVar6;
    }
  }
  lVar13 = (longlong)iStack_c4 * 0x38;
  lVar7 = *plVar1;
  local_88 = 0;
  local_78 = 0;
  uVar10 = *(uint *)(lVar13 + 8 + lVar7);
  uVar5 = *(undefined1 *)(lVar13 + 0xc + lVar7);
  uVar8 = *(undefined8 *)(lVar13 + 0x10 + lVar7);
  uVar9 = *(undefined8 *)(lVar13 + 0x18 + lVar7);
  uVar2 = *(undefined4 *)(lVar13 + 0x20 + lVar7);
  uVar3 = *(undefined4 *)(lVar13 + 0x24 + lVar7);
  uVar4 = *(undefined4 *)(lVar13 + 0x28 + lVar7);
  puVar12 = (undefined8 *)FUN_140438ef0(0x38,local_a8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &PTR_FUN_14502e0a8;
    puVar12[1] = param_1;
    *(uint *)(puVar12 + 2) = *(uint *)(puVar12 + 2) & 0xfffffffe;
    *(uint *)(puVar12 + 2) = *(uint *)(puVar12 + 2) | uVar10 & 1;
    *(undefined1 *)((longlong)puVar12 + 0x14) = uVar5;
    *(undefined4 *)(puVar12 + 5) = uVar2;
    *(undefined4 *)((longlong)puVar12 + 0x2c) = uVar3;
    puVar12[3] = uVar8;
    puVar12[4] = uVar9;
    *(undefined4 *)(puVar12 + 6) = uVar4;
  }
  local_b8[0] = &LAB_1422c2d50;
  FUN_1422f8a30(local_b8,local_res8[0]);
  return;
}



// FUNCTION 1422dc790 FUN_1422dc790 body=759 status=ok
// SIG undefined FUN_1422dc790(void)

void FUN_1422dc790(longlong param_1,longlong *param_2,int param_3)

{
  longlong **pplVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *_Src;
  float fVar14;
  int local_res18;
  longlong *local_68;
  uint local_60;
  uint local_5c;
  
  plVar6 = (longlong *)0x0;
  iVar5 = 0;
  local_68 = (longlong *)0x0;
  local_5c = 0;
  _Src = plVar6;
  if (param_3 < (int)param_2[1]) {
    lVar8 = (longlong)param_3 * 8;
    plVar12 = plVar6;
    local_res18 = param_3;
    do {
      lVar2 = *(longlong *)(lVar8 + *param_2);
      if ((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 8), lVar3 != 0)) {
        plVar9 = *(longlong **)(lVar3 + 0x68);
        plVar13 = plVar9 + (longlong)*(int *)(lVar3 + 0x70) * 2;
        fVar14 = *(float *)(lVar2 + 0x70) * *(float *)(lVar2 + 0x68) * *(float *)(lVar2 + 0x6c);
        for (; plVar9 != plVar13; plVar9 = plVar9 + 2) {
          if ((*(float *)(plVar9 + 1) <= fVar14) &&
             (fVar14 < *(float *)((longlong)plVar9 + 0xc) ||
              fVar14 == *(float *)((longlong)plVar9 + 0xc))) {
            if ((*(float *)(*(longlong *)(lVar2 + 0x60) + 0xa8) == 0.0) && (*plVar9 != 0)) {
              FUN_1422d3b40(param_1,*plVar9,1);
            }
            iVar5 = (int)plVar12;
            if (_Src != _Src + iVar5) {
              plVar7 = _Src;
              do {
                if (*plVar7 == *plVar9) {
                  if ((int)((longlong)plVar7 - (longlong)_Src >> 3) != -1) goto LAB_1422dc8de;
                  break;
                }
                plVar7 = plVar7 + 1;
              } while (plVar7 != _Src + iVar5);
            }
            local_60 = iVar5 + 1;
            if ((int)plVar6 < (int)local_60) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,plVar12);
              plVar6 = (longlong *)(ulonglong)local_5c;
              _Src = local_68;
            }
            plVar12 = (longlong *)(ulonglong)local_60;
            _Src[iVar5] = *plVar9;
          }
LAB_1422dc8de:
        }
      }
      iVar5 = (int)plVar12;
      local_res18 = local_res18 + 1;
      lVar8 = lVar8 + 8;
    } while (local_res18 < (int)param_2[1]);
  }
  uVar10 = 0;
  plVar6 = _Src + iVar5;
  uVar11 = (ulonglong)((longlong)plVar6 + (7 - (longlong)_Src)) >> 3;
  if (plVar6 < _Src) {
    uVar11 = uVar10;
  }
  plVar12 = _Src;
  if (uVar11 != 0) {
    do {
      plVar9 = *(longlong **)(param_1 + 0x528);
      for (plVar13 = plVar9; plVar13 != plVar9 + *(int *)(param_1 + 0x530); plVar13 = plVar13 + 1) {
        if (*plVar13 == *plVar12) {
          if ((int)((longlong)plVar13 - (longlong)plVar9 >> 3) != -1) goto LAB_1422dc9ad;
          break;
        }
      }
      FUN_1422d3b40(param_1,*plVar12,CONCAT71((int7)((ulonglong)plVar9 >> 8),1),0);
LAB_1422dc9ad:
      plVar12 = plVar12 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar11);
  }
  iVar4 = *(int *)(param_1 + 0x530) + -1;
  lVar8 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x528) + lVar8 * 8);
      for (plVar12 = _Src; plVar12 != plVar6; plVar12 = plVar12 + 1) {
        if (*plVar12 == lVar2) {
          if ((int)((longlong)plVar12 - (longlong)_Src >> 3) != -1) goto LAB_1422dca0c;
          break;
        }
      }
      FUN_1422d2960(param_1,lVar2,1);
LAB_1422dca0c:
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  pplVar1 = (longlong **)(param_1 + 0x528);
  if (pplVar1 != &local_68) {
    *(int *)(param_1 + 0x530) = iVar5;
    if ((iVar5 == 0) && (*(int *)(param_1 + 0x534) == 0)) {
      *(undefined4 *)(param_1 + 0x534) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(pplVar1,iVar5);
      _guard_xfg_dispatch_icall_nop(*pplVar1,_Src,(longlong)iVar5 * 8);
    }
  }
  if (_Src != (longlong *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 1422dca90 UpdateSoundClassProperties body=821 status=ok
// SIG undefined UpdateSoundClassProperties(void)

void FAudioDevice::UpdateSoundClassProperties(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  float fVar13;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  longlong *local_78;
  uint uStack_70;
  uint uStack_6c;
  uint *puStack_68;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  
  ParseSoundClasses();
  plVar1 = (longlong *)(param_1 + 0x218);
  local_b8 = 0;
  uStack_b4 = 1;
  iVar6 = *(int *)(param_1 + 0x240);
  puStack_68 = (uint *)(param_1 + 0x228);
  local_a8._4_4_ = 0;
  uStack_a0 = 0;
  if (iVar6 != 0) {
    puVar12 = *(uint **)(param_1 + 0x238);
    if (*(uint **)(param_1 + 0x238) == (uint *)0x0) {
      puVar12 = puStack_68;
    }
    uVar11 = *puVar12;
    local_b8 = 0;
    uStack_a0 = 0;
    while (uVar11 == 0) {
      lVar10 = (longlong)(int)local_b8;
      uStack_a0 = uStack_a0 + 0x20;
      uVar11 = local_b8 + 1;
      bVar7 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_b8;
      local_b8 = uVar11;
      if (bVar7) goto LAB_1422dcb6d;
      uVar11 = puVar12[lVar10 + 1];
    }
    uStack_b4 = -uVar11 & uVar11;
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
    local_a8._4_4_ = (uStack_a0 - iVar8) + 0x1f;
    if (iVar6 < local_a8._4_4_) {
LAB_1422dcb6d:
      local_a8._4_4_ = iVar6;
    }
  }
  auStack_60._4_4_ = local_a8._4_4_;
  auStack_60._0_4_ = 0xffffffff;
  auStack_60._8_4_ = uStack_a0;
  auStack_60._12_4_ = iStack_9c;
  uStack_70 = local_b8;
  uStack_6c = uStack_b4;
  local_80 = 0;
  local_50._0_4_ = SUB84(plVar1,0);
  local_50._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_a0 = 0xffffffff;
  iStack_9c = local_a8._4_4_;
  uStack_b0 = local_b8;
  uStack_ac = uStack_b4;
  local_98._8_4_ = (undefined4)local_50;
  local_98._0_8_ = auStack_60._8_8_;
  local_98._12_4_ = local_50._4_4_;
  bVar7 = local_a8._4_4_ < *(int *)(param_1 + 0x240);
  local_88 = plVar1;
  local_78 = plVar1;
  local_50 = plVar1;
  local_a8 = puStack_68;
  if (bVar7) {
    do {
      dVar3 = *(double *)(param_1 + 0x360);
      lVar9 = (longlong)iStack_9c;
      lVar10 = *plVar1;
      if ((dVar3 < *(double *)(lVar10 + 0x18 + lVar9 * 0x50)) ||
         (*(double *)(lVar10 + 0x20 + lVar9 * 0x50) <= dVar3)) {
        dVar4 = *(double *)(lVar10 + 0x20 + lVar9 * 0x50);
        if ((dVar3 < dVar4) || (dVar5 = *(double *)(lVar10 + 0x28 + lVar9 * 0x50), dVar5 <= dVar3))
        {
          if ((dVar3 < *(double *)(lVar10 + 0x28 + lVar9 * 0x50)) ||
             ((*(char *)(lVar10 + 8 + lVar9 * 0x50) == '\0' &&
              ((((*(int *)(lVar10 + 0x10 + lVar9 * 0x50) == 0 &&
                 (*(int *)(lVar10 + 0xc + lVar9 * 0x50) == 0)) ||
                (pdVar2 = (double *)(lVar10 + 0x30 + lVar9 * 0x50), 0.0 < *pdVar2 || *pdVar2 == 0.0)
                ) && (*(double *)(lVar10 + 0x30 + lVar9 * 0x50) <= dVar3)))))) {
            dVar4 = *(double *)(lVar10 + 0x30 + lVar9 * 0x50);
            if ((dVar3 < dVar4) ||
               (dVar5 = *(double *)(lVar10 + 0x38 + lVar9 * 0x50), dVar5 <= dVar3)) {
              *(undefined4 *)(lVar10 + 0x40 + lVar9 * 0x50) = 0;
              *(undefined4 *)(lVar10 + 0x44 + lVar9 * 0x50) = 4;
              goto LAB_1422dcd19;
            }
            fVar13 = 1.0 - (float)((dVar3 - dVar4) / (dVar5 - dVar4));
            *(float *)(lVar10 + 0x40 + lVar9 * 0x50) = fVar13;
            if (*(int *)(lVar10 + 0x44 + lVar9 * 0x50) != 3) {
              *(undefined4 *)(lVar10 + 0x44 + lVar9 * 0x50) = 3;
              TryClearingEQSoundMix(param_1,*(undefined8 *)(*plVar1 + lVar9 * 0x50));
              fVar13 = *(float *)(lVar10 + 0x40 + lVar9 * 0x50);
            }
          }
          else {
            *(undefined4 *)(lVar10 + 0x40 + lVar9 * 0x50) = 0x3f800000;
            fVar13 = 1.0;
            *(undefined4 *)(lVar10 + 0x44 + lVar9 * 0x50) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar10 + 0x44 + lVar9 * 0x50) = 1;
          fVar13 = (float)((dVar3 - dVar4) / (dVar5 - dVar4));
          *(float *)(lVar10 + 0x40 + lVar9 * 0x50) = fVar13;
        }
      }
      else {
        *(undefined8 *)(lVar10 + 0x40 + lVar9 * 0x50) = 0;
LAB_1422dcd19:
        fVar13 = 0.0;
      }
      FUN_1422c0fd0(param_1,*(undefined8 *)(*plVar1 + lVar9 * 0x50),fVar13,param_2);
      if ((*(int *)(lVar10 + 0x44 + lVar9 * 0x50) == 4) &&
         (*(int *)(lVar10 + 0x10 + lVar9 * 0x50) == 0)) {
        FUN_1422c4630(param_1,*(undefined8 *)(*plVar1 + lVar9 * 0x50));
      }
      uStack_a0 = uStack_a0 & ~uStack_ac;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
    } while (iStack_9c < (int)local_a8[6]);
    if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
      TSet<TTuple<USoundMix_*,FSoundMixState>,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1422dcdd0 UpdateStereoEmitterPositions body=596 status=ok
// SIG undefined UpdateStereoEmitterPositions(void)

void FSoundSource::UpdateStereoEmitterPositions(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(float *)(lVar1 + 0xf4) <= 0.0) {
    *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(lVar1 + 0xe4);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar1 + 0xec);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar1 + 0xe4);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar1 + 0xec);
    return;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x128);
  fVar6 = *(float *)(lVar1 + 0xe4) - *(float *)(lVar2 + 0x10);
  fVar10 = *(float *)(lVar1 + 0xe8) - *(float *)(lVar2 + 0x14);
  fVar8 = *(float *)(lVar1 + 0xec) - *(float *)(lVar2 + 0x18);
  fVar3 = fVar10 * fVar10 + fVar6 * fVar6 + fVar8 * fVar8;
  fVar7 = fVar6;
  fVar9 = fVar8;
  fVar4 = fVar10;
  if ((fVar3 != 1.0) &&
     (fVar7 = DAT_1468b5d90, fVar9 = DAT_1468b5d98, fVar4 = DAT_1468b5d94, 1e-08 <= fVar3)) {
    auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar4 = auVar5._0_4_;
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar7 = fVar6 * fVar4;
    fVar9 = fVar8 * fVar4;
    fVar4 = fVar10 * fVar4;
  }
  fVar6 = *(float *)(lVar1 + 0xf4) * 0.5;
  fVar3 = (fVar4 * DAT_1464aa7a0 - fVar9 * DAT_1464aa798._4_4_) * fVar6;
  fVar9 = (fVar9 * (float)DAT_1464aa798 - fVar7 * DAT_1464aa7a0) * fVar6;
  fVar6 = (fVar7 * DAT_1464aa798._4_4_ - fVar4 * (float)DAT_1464aa798) * fVar6;
  fVar7 = *(float *)(lVar1 + 0xec);
  *(ulonglong *)(param_1 + 0x4c) =
       CONCAT44(fVar9 + *(float *)(lVar1 + 0xe8),fVar3 + *(float *)(lVar1 + 0xe4));
  *(float *)(param_1 + 0x54) = fVar6 + fVar7;
  fVar7 = *(float *)(lVar1 + 0xec);
  *(ulonglong *)(param_1 + 0x58) =
       CONCAT44(*(float *)(lVar1 + 0xe8) - fVar9,*(float *)(lVar1 + 0xe4) - fVar3);
  *(float *)(param_1 + 0x60) = fVar7 - fVar6;
  return;
}



// FUNCTION 1422dd030 FUN_1422dd030 body=889 status=ok
// SIG undefined FUN_1422dd030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1422dd030(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_168 [32];
  undefined2 *local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined2 *local_120;
  int local_118;
  undefined2 *local_110;
  int local_108;
  longlong local_100 [3];
  undefined1 local_e8 [128];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  uVar6 = 0;
  local_128 = param_2;
  if ((int)param_3[1] != 0) {
    puVar1 = (undefined8 *)FUN_14167d0d0(local_100);
    iVar9 = 0;
    iVar3 = *(int *)(puVar1 + 1);
    local_148 = (undefined2 *)*puVar1;
    *puVar1 = 0;
    local_140._0_4_ = *(int *)(puVar1 + 1);
    local_140._4_4_ = *(int *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
    iVar5 = (int)local_140;
    if (local_140._4_4_ < (int)((9 - (uint)(iVar3 != 0)) + (int)local_140)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_148);
      iVar5 = (int)local_140;
    }
    iVar3 = (9 - (uint)(iVar5 != 0)) + iVar5;
    local_140 = CONCAT44(local_140._4_4_,iVar3);
    iVar7 = local_140._4_4_;
    if (local_140._4_4_ < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,iVar5);
      iVar3 = (int)local_140;
      iVar7 = local_140._4_4_;
    }
    lVar10 = 0;
    builtin_wcsncpy(local_148 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)),L"Reports/",9);
    local_130 = CONCAT44(iVar7,iVar3);
    local_138 = local_148;
    FPaths::ConvertRelativePathToFull(&local_110,&local_138);
    if (local_138 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_100[0] != 0) {
      FMemory::Free();
    }
    if ((int)param_2[1] == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_2;
    }
    puVar4 = &DAT_143f3eda8;
    if (local_108 != 0) {
      puVar4 = local_110;
    }
    FString::PrintfImpl(&local_120,L"%s%s",puVar4,puVar8);
    plVar2 = (longlong *)FUN_1415c3d50();
    puVar8 = &DAT_143f3eda8;
    if (local_118 != 0) {
      puVar8 = local_120;
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,puVar8,0);
    if (plVar2 != (longlong *)0x0) {
      if (0 < (int)param_3[1]) {
        do {
          if (*(int *)(lVar10 + 8 + *param_3) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = *(undefined2 **)(lVar10 + *param_3);
          }
          FString::PrintfImpl(&local_138,&DAT_14502c72c,puVar8);
          iVar3 = (int)local_130;
          iVar5 = local_130._4_4_;
          bVar11 = (int)local_130 != 0;
          local_148 = local_138;
          local_138 = (undefined2 *)0x0;
          local_140._0_4_ = (int)local_130;
          local_140._4_4_ = local_130._4_4_;
          local_130 = 0;
          if (iVar5 < (int)((3 - (uint)bVar11) + iVar3)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_148);
            iVar3 = (int)local_140;
          }
          iVar5 = (3 - (uint)(iVar3 != 0)) + iVar3;
          local_140 = CONCAT44(local_140._4_4_,iVar5);
          puVar8 = local_148;
          if (local_140._4_4_ < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148);
            puVar8 = local_148;
            iVar5 = (int)local_140;
          }
          local_148 = (undefined2 *)0x0;
          local_140 = 0;
          *(undefined4 *)(puVar8 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0))) = 0xa000d;
          *(undefined2 *)((longlong)(puVar8 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0))) + 4) = 0;
          if (local_138 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          iVar3 = 0;
          if (iVar5 == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            iVar3 = iVar5 + -1;
            puVar4 = puVar8;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_e8,puVar4);
          (**(code **)(*plVar2 + 0x50))(plVar2,local_60,(longlong)iVar3);
          if (local_68 != 0) {
            FMemory::Free();
          }
          if (puVar8 != (undefined2 *)0x0) {
            FMemory::Free(puVar8);
          }
          iVar9 = iVar9 + 1;
          lVar10 = lVar10 + 0x10;
          param_2 = local_128;
        } while (iVar9 < (int)param_3[1]);
      }
      (**(code **)(*plVar2 + 0xe8))(plVar2);
      (**(code **)*plVar2)(plVar2,1);
      uVar6 = 1;
    }
    if (local_120 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_110 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 1422dd3c0 FUN_1422dd3c0 body=89 status=ok
// SIG undefined FUN_1422dd3c0(void)

undefined8 * FUN_1422dd3c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145033188;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_1450331c8;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1422dd420 FUN_1422dd420 body=479 status=ok
// SIG undefined FUN_1422dd420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1422dd420(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_168 [32];
  longlong local_148 [2];
  undefined2 local_138;
  undefined4 local_136;
  undefined2 local_132 [125];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_38 = 1;
  lVar9 = 0;
  TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,0);
  lVar8 = (longlong)(int)local_38;
  local_138 = 0;
  local_136 = 0x2c0004;
  local_132[0] = 0;
  iVar5 = (int)local_38 + 1;
  if (local_38._4_4_ < iVar5) {
    uVar7 = local_38 & 0xffffffff;
    local_38._0_4_ = iVar5;
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,uVar7);
    iVar5 = (int)local_38;
  }
  local_38._0_4_ = iVar5;
  (&local_138)[lVar8 * 4] = 0x1000;
  *(undefined4 *)((longlong)local_132 + (lVar8 * 2 + -1) * 4) = 0x2c0102;
  *(undefined2 *)((longlong)local_132 + lVar8 * 2 * 4) = 0;
  iVar5 = (int)local_38;
  lVar8 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,iVar5);
  }
  (&local_138)[lVar8 * 4] = 0x1800;
  *(undefined4 *)((longlong)local_132 + (lVar8 * 2 + -1) * 4) = 0x2c0204;
  *(undefined2 *)((longlong)local_132 + lVar8 * 2 * 4) = 0;
  iVar5 = (int)local_38;
  lVar8 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,iVar5);
  }
  (&local_138)[lVar8 * 4] = 0x2800;
  *(undefined4 *)((longlong)local_132 + (lVar8 * 2 + -1) * 4) = 0x2c0308;
  *(undefined2 *)((longlong)local_132 + lVar8 * 2 * 4) = 0;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_148,&DAT_146ab6e78,&local_138);
  plVar1 = (longlong *)(param_1 + 0x30);
  if (plVar1 != local_148) {
    puVar3 = (undefined8 *)*plVar1;
    *plVar1 = local_148[0];
    local_148[0] = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar3 + 1);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar6 != 0) {
              lVar9 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar9 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_148);
  return;
}



// FUNCTION 1422dd600 FUN_1422dd600 body=74 status=ok
// SIG undefined FUN_1422dd600(void)

undefined8 * FUN_1422dd600(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1450331c8;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1422dd650 FUN_1422dd650 body=176 status=ok
// SIG undefined FUN_1422dd650(void)

longlong FUN_1422dd650(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = (int)param_2[2];
  iVar3 = iVar1;
  if (iVar1 == (iVar1 / 20000) * 20000) {
    uVar2 = FMemory::Malloc(880000,0);
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar2;
    iVar3 = (int)param_2[2];
  }
  *(int *)(param_2 + 2) = iVar3 + 1;
  return (ulonglong)(uint)(iVar1 % 20000) * 0x2c +
         *(longlong *)(*param_2 + (longlong)(iVar1 / 20000) * 8);
}



// FUNCTION 1422dd700 FUN_1422dd700 body=223 status=ok
// SIG undefined FUN_1422dd700(void)

undefined8 * FUN_1422dd700(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_res10;
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = param_3;
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[2] = param_4;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  *param_2 = 0;
  if (plVar1 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(param_1,&local_res10,&local_28);
    plVar1 = local_28;
    *param_2 = local_res10;
    if (local_20 != 0) {
      if (local_28 == (longlong *)0x0) {
        return param_2;
      }
      (**(code **)(*local_28 + 0x28))(local_28,0);
      plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
  }
  return param_2;
}



// FUNCTION 1422dd7e0 FUN_1422dd7e0 body=618 status=ok
// SIG undefined FUN_1422dd7e0(void)

uint * FUN_1422dd7e0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  uint local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar12 = (ulonglong)*(uint *)(param_1 + 1);
    iVar11 = *(uint *)(param_1 + 1) + 1;
    *(int *)(param_1 + 1) = iVar11;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar12 = (ulonglong)(int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar11 = *(int *)(*param_1 + 4 + uVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x28) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  uVar7 = (uint)uVar12;
  *param_2 = uVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)(int)uVar7 * 0x28);
  uVar2 = *(ulonglong *)*param_3;
  *_Src = uVar2;
  _Src[1] = 0;
  _Src[2] = 0;
  *(undefined1 *)(_Src + 3) = 0;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar2);
    uVar7 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      lVar3 = *param_1;
      if (*(longlong *)(lVar3 + 8 + lVar10 * 0x28) != 0) {
        FMemory::Free();
        uVar12 = (ulonglong)*param_2;
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + lVar10 * 0x28),_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar12 & 0xffffffff,1);
      *param_2 = uVar7;
      uVar9 = (undefined1)local_res8[0];
      goto LAB_1422dda20;
    }
  }
  uVar9 = 0;
  cVar4 = TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar4 == '\0') {
    iVar11 = (int)(*_Src >> 4);
    uVar8 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar13 = -(iVar11 + uVar8) ^ uVar8 >> 0xd;
    uVar7 = (iVar11 - uVar8) - uVar13 ^ uVar13 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar13 ^ uVar7 << 0x10;
    uVar13 = (uVar13 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar8) - uVar13 ^ uVar13 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar13 ^ uVar7 << 10;
    uVar7 = ((uVar13 - uVar8) - uVar7 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar7;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1422dda20:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar9;
  }
  return param_2;
}



// FUNCTION 1422dda50 FUN_1422dda50 body=788 status=ok
// SIG undefined FUN_1422dda50(void)

int * FUN_1422dda50(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  bool local_res8;
  
  iVar7 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x30);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x30) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_res8 = false;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  plVar13 = (longlong *)((longlong)iVar10 * 0x30 + *param_1);
  lVar2 = *(longlong *)*param_3;
  *plVar13 = lVar2;
  plVar13[1] = 0;
  plVar13[2] = 0;
  plVar13[3] = 0;
  plVar13[4] = 0;
  *(undefined4 *)(plVar13 + 5) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x30) == lVar2) break;
          iVar8 = *(int *)(*param_1 + 0x28 + (longlong)iVar8 * 0x30);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x30 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar13,0x28);
      iVar7 = *param_2;
      bVar3 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar7;
      }
      puVar5 = (undefined4 *)((longlong)iVar7 * 0x30 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar5[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1422ddd3b;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar14;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x2c) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 5) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1422ddd3b:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1422ddd70 FUN_1422ddd70 body=702 status=ok
// SIG undefined FUN_1422ddd70(void)

int * FUN_1422ddd70(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint *_Src;
  uint uVar10;
  bool bVar11;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)((longlong)iVar7 * 0x70 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0x70 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar11 = false;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  puVar1 = (uint *)param_3[1];
  _Src = (uint *)((longlong)iVar7 * 0x70 + *param_1);
  *_Src = *(uint *)*param_3;
  _Src[2] = *puVar1;
  _Src[3] = puVar1[1];
  _Src[4] = puVar1[2];
  _Src[6] = _Src[6] ^ (puVar1[4] ^ _Src[6]) & 1;
  *(char *)(_Src + 7) = (char)puVar1[5];
  *(undefined8 *)(_Src + 8) = *(undefined8 *)(puVar1 + 6);
  *(undefined8 *)(_Src + 10) = *(undefined8 *)(puVar1 + 8);
  _Src[0xc] = puVar1[10];
  _Src[0xd] = puVar1[0xb];
  uVar10 = puVar1[0xd];
  uVar4 = puVar1[0xe];
  uVar2 = puVar1[0xf];
  _Src[0xe] = puVar1[0xc];
  _Src[0xf] = uVar10;
  _Src[0x10] = uVar4;
  _Src[0x11] = uVar2;
  uVar10 = puVar1[0x11];
  uVar4 = puVar1[0x12];
  uVar2 = puVar1[0x13];
  _Src[0x12] = puVar1[0x10];
  _Src[0x13] = uVar10;
  _Src[0x14] = uVar4;
  _Src[0x15] = uVar2;
  _Src[0x16] = puVar1[0x14];
  *(undefined8 *)(_Src + 0x18) = *(undefined8 *)(puVar1 + 0x16);
  _Src[0x1a] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    if (uVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)((longlong)iVar6 * 0x70 + *param_1) == *_Src) goto LAB_1422ddf1b;
          iVar6 = *(int *)((longlong)iVar6 * 0x70 + 0x68 + *param_1);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_1422ddf1b:
    bVar11 = iVar6 != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar6 * 0x70 + *param_1),_Src,0x68);
      TSparseArray<TSetElement<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,0>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar6;
      goto LAB_1422de005;
    }
  }
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *_Src;
    _Src[0x1b] = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    _Src[0x1a] = *(uint *)((longlong)plVar5 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1422de005:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1422de030 FUN_1422de030 body=256 status=ok
// SIG undefined FUN_1422de030(void)

undefined8 FUN_1422de030(char param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  if (param_1 == '\0') {
switchD_1422de060_caseD_7:
    local_18 = &DAT_146b0b5f0;
  }
  else {
    switch(param_2) {
    case 0:
      local_18 = &DAT_146b10de0;
      break;
    case 1:
      local_18 = &DAT_146b10f30;
      break;
    case 2:
      local_18 = &DAT_146b11080;
      break;
    case 3:
      local_18 = &DAT_146b111d0;
      break;
    case 4:
      local_18 = &DAT_146b11320;
      break;
    case 5:
      local_18 = &DAT_146b11470;
      break;
    case 6:
      local_18 = &DAT_146b115c0;
      break;
    default:
      goto switchD_1422de060_caseD_7;
    case 9:
      local_18 = &DAT_146b11860;
      break;
    case 10:
      local_18 = &DAT_146b11b00;
      break;
    case 0xb:
      local_18 = &DAT_146b11c50;
      break;
    case 0xc:
      local_18 = &DAT_146b11da0;
    }
  }
  local_10 = 0;
  lVar1 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_res8,&local_18);
  puVar3 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar3 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  puVar2 = puVar3 + 2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  return *puVar2;
}



// FUNCTION 1422de170 FUN_1422de170 body=256 status=ok
// SIG undefined FUN_1422de170(void)

undefined8 FUN_1422de170(char param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  if (param_1 == '\0') {
switchD_1422de1a0_caseD_7:
    local_18 = &DAT_146b0b740;
  }
  else {
    switch(param_2) {
    case 0:
      local_18 = &DAT_146b11ef0;
      break;
    case 1:
      local_18 = &DAT_146b12040;
      break;
    case 2:
      local_18 = &DAT_146b12190;
      break;
    case 3:
      local_18 = &DAT_146b122e0;
      break;
    case 4:
      local_18 = &DAT_146b12430;
      break;
    case 5:
      local_18 = &DAT_146b12580;
      break;
    case 6:
      local_18 = &DAT_146b126d0;
      break;
    default:
      goto switchD_1422de1a0_caseD_7;
    case 9:
      local_18 = &DAT_146b12970;
      break;
    case 10:
      local_18 = &DAT_146b12c10;
      break;
    case 0xb:
      local_18 = &DAT_146b12d60;
      break;
    case 0xc:
      local_18 = &DAT_146b12eb0;
    }
  }
  local_10 = 0;
  lVar1 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_res8,&local_18);
  puVar3 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar3 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  puVar2 = puVar3 + 2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  return *puVar2;
}



// FUNCTION 1422de2b0 FUN_1422de2b0 body=256 status=ok
// SIG undefined FUN_1422de2b0(void)

undefined8 FUN_1422de2b0(char param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  if (param_1 == '\0') {
switchD_1422de2e0_caseD_7:
    local_18 = &DAT_146b0ab30;
  }
  else {
    switch(param_2) {
    case 0:
      local_18 = &DAT_146b0c9a0;
      break;
    case 1:
      local_18 = &DAT_146b0caf0;
      break;
    case 2:
      local_18 = &DAT_146b0cc40;
      break;
    case 3:
      local_18 = &DAT_146b0cd90;
      break;
    case 4:
      local_18 = &DAT_146b0cee0;
      break;
    case 5:
      local_18 = &DAT_146b0d030;
      break;
    case 6:
      local_18 = &DAT_146b0d180;
      break;
    default:
      goto switchD_1422de2e0_caseD_7;
    case 9:
      local_18 = &DAT_146b0d420;
      break;
    case 10:
      local_18 = &DAT_146b0d6c0;
      break;
    case 0xb:
      local_18 = &DAT_146b0d810;
      break;
    case 0xc:
      local_18 = &DAT_146b0d960;
    }
  }
  local_10 = 0;
  lVar1 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_res8,&local_18);
  puVar3 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar3 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  puVar2 = puVar3 + 2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  return *puVar2;
}



// FUNCTION 1422de3f0 FUN_1422de3f0 body=256 status=ok
// SIG undefined FUN_1422de3f0(void)

undefined8 FUN_1422de3f0(char param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  if (param_1 == '\0') {
switchD_1422de420_caseD_7:
    local_18 = &DAT_146b0ac80;
  }
  else {
    switch(param_2) {
    case 0:
      local_18 = &DAT_146b0fcd0;
      break;
    case 1:
      local_18 = &DAT_146b0fe20;
      break;
    case 2:
      local_18 = &DAT_146b0ff70;
      break;
    case 3:
      local_18 = &DAT_146b100c0;
      break;
    case 4:
      local_18 = &DAT_146b10210;
      break;
    case 5:
      local_18 = &DAT_146b10360;
      break;
    case 6:
      local_18 = &DAT_146b104b0;
      break;
    default:
      goto switchD_1422de420_caseD_7;
    case 9:
      local_18 = &DAT_146b10750;
      break;
    case 10:
      local_18 = &DAT_146b109f0;
      break;
    case 0xb:
      local_18 = &DAT_146b10b40;
      break;
    case 0xc:
      local_18 = &DAT_146b10c90;
    }
  }
  local_10 = 0;
  lVar1 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_res8,&local_18);
  puVar3 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar3 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  puVar2 = puVar3 + 2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  return *puVar2;
}



// FUNCTION 1422de530 FUN_1422de530 body=432 status=ok
// SIG undefined FUN_1422de530(void)

void FUN_1422de530(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar9 = iVar7 * 2 + 1;
    iVar13 = iVar9;
    iVar14 = iVar7;
joined_r0x0001422de55a:
    do {
      if (iVar9 < param_2) {
        iVar11 = iVar7 * 2 + 1;
        iVar9 = iVar7 * 2 + 2;
        iVar12 = iVar11;
        if ((iVar9 < param_2) &&
           (iVar12 = iVar9,
           *(float *)(param_1[(longlong)iVar11 * 2] + 0x490) <=
           *(float *)(param_1[(longlong)iVar9 * 2] + 0x490) &&
           *(float *)(param_1[(longlong)iVar9 * 2] + 0x490) !=
           *(float *)(param_1[(longlong)iVar11 * 2] + 0x490))) {
          iVar12 = iVar11;
        }
        plVar8 = param_1 + (longlong)iVar12 * 2;
        plVar15 = param_1 + (longlong)iVar7 * 2;
        if (*(float *)(*plVar8 + 0x490) < *(float *)(*plVar15 + 0x490)) {
          if (plVar15 != plVar8) {
            lVar1 = plVar8[1];
            lVar2 = *plVar15;
            lVar3 = plVar15[1];
            *plVar15 = *plVar8;
            plVar15[1] = lVar1;
            *plVar8 = lVar2;
            plVar8[1] = lVar3;
          }
          iVar9 = iVar12 * 2 + 1;
          iVar7 = iVar12;
          goto joined_r0x0001422de55a;
        }
      }
      iVar9 = iVar13 + -2;
      iVar7 = iVar14 + -1;
      iVar13 = iVar9;
      iVar14 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar10) {
        uVar4 = puVar10[1];
        uVar5 = *param_1;
        uVar6 = param_1[1];
        *param_1 = *puVar10;
        param_1[1] = uVar4;
        *puVar10 = uVar5;
        puVar10[1] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar9 = iVar7 * 2 + 1;
          iVar14 = iVar7 * 2 + 2;
          iVar13 = iVar9;
          if ((iVar14 < param_2) &&
             (iVar13 = iVar14,
             *(float *)(param_1[(longlong)iVar9 * 2] + 0x490) <=
             *(float *)(param_1[(longlong)iVar14 * 2] + 0x490) &&
             *(float *)(param_1[(longlong)iVar14 * 2] + 0x490) !=
             *(float *)(param_1[(longlong)iVar9 * 2] + 0x490))) {
            iVar13 = iVar9;
          }
          plVar8 = param_1 + (longlong)iVar13 * 2;
          plVar15 = param_1 + (longlong)iVar7 * 2;
          if (*(float *)(*plVar15 + 0x490) <= *(float *)(*plVar8 + 0x490)) break;
          if (plVar15 != plVar8) {
            lVar1 = plVar8[1];
            lVar2 = *plVar15;
            lVar3 = plVar15[1];
            *plVar15 = *plVar8;
            plVar15[1] = lVar1;
            *plVar8 = lVar2;
            plVar8[1] = lVar3;
          }
          iVar7 = iVar13;
        } while (iVar13 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1422de6e0 HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<<lambda_7945e159cc296d55399f795510545d4b>_>_>_>_>_> body=736 status=ok
// SIG undefined HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<<lambda_7945e159cc296d55399f795510545d4b>_>_>_>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<<lambda_7945e159cc296d55399f795510545d4b>_>_>_>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  
  iVar16 = (param_2 + -2) / 2;
  if (-1 < iVar16) {
    iVar19 = iVar16 * 2 + 1;
    iVar24 = iVar19;
    iVar23 = iVar16;
joined_r0x0001422de725:
    do {
      if (iVar19 < param_2) {
        iVar21 = iVar16 * 2 + 1;
        iVar19 = iVar16 * 2 + 2;
        iVar22 = iVar21;
        if ((iVar19 < param_2) &&
           (iVar22 = iVar19,
           *(float *)(param_1 + (longlong)iVar21 * 0xe + 2) <=
           *(float *)(param_1 + (longlong)iVar19 * 0xe + 2) &&
           *(float *)(param_1 + (longlong)iVar19 * 0xe + 2) !=
           *(float *)(param_1 + (longlong)iVar21 * 0xe + 2))) {
          iVar22 = iVar21;
        }
        puVar17 = param_1 + (longlong)iVar16 * 0xe;
        puVar20 = param_1 + (longlong)iVar22 * 0xe;
        if (*(float *)(puVar20 + 2) < *(float *)(puVar17 + 2)) {
          if (puVar17 != puVar20) {
            uVar1 = puVar20[1];
            uVar2 = *puVar17;
            uVar3 = puVar17[1];
            uVar4 = puVar17[2];
            uVar5 = puVar17[3];
            uVar6 = puVar17[4];
            uVar7 = puVar17[5];
            uVar8 = puVar17[6];
            uVar9 = puVar17[7];
            uVar10 = puVar17[8];
            uVar11 = puVar17[9];
            uVar12 = puVar17[10];
            uVar13 = puVar17[0xb];
            uVar14 = puVar17[0xc];
            uVar15 = puVar17[0xd];
            *puVar17 = *puVar20;
            puVar17[1] = uVar1;
            uVar1 = puVar20[3];
            puVar17[2] = puVar20[2];
            puVar17[3] = uVar1;
            uVar1 = puVar20[5];
            puVar17[4] = puVar20[4];
            puVar17[5] = uVar1;
            uVar1 = puVar20[7];
            puVar17[6] = puVar20[6];
            puVar17[7] = uVar1;
            uVar1 = puVar20[9];
            puVar17[8] = puVar20[8];
            puVar17[9] = uVar1;
            uVar1 = puVar20[0xb];
            puVar17[10] = puVar20[10];
            puVar17[0xb] = uVar1;
            uVar1 = puVar20[0xd];
            puVar17[0xc] = puVar20[0xc];
            puVar17[0xd] = uVar1;
            *puVar20 = uVar2;
            puVar20[1] = uVar3;
            puVar20[2] = uVar4;
            puVar20[3] = uVar5;
            puVar20[4] = uVar6;
            puVar20[5] = uVar7;
            puVar20[6] = uVar8;
            puVar20[7] = uVar9;
            puVar20[8] = uVar10;
            puVar20[9] = uVar11;
            puVar20[10] = uVar12;
            puVar20[0xb] = uVar13;
            puVar20[0xc] = uVar14;
            puVar20[0xd] = uVar15;
          }
          iVar19 = iVar22 * 2 + 1;
          iVar16 = iVar22;
          goto joined_r0x0001422de725;
        }
      }
      iVar19 = iVar24 + -2;
      iVar16 = iVar23 + -1;
      iVar24 = iVar19;
      iVar23 = iVar16;
    } while (-1 < iVar16);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar20 = param_1 + (longlong)param_2 * 0xe;
    do {
      if (param_1 != puVar20) {
        uVar1 = puVar20[1];
        uVar2 = *param_1;
        uVar3 = param_1[1];
        uVar4 = param_1[2];
        uVar5 = param_1[3];
        uVar6 = param_1[4];
        uVar7 = param_1[5];
        uVar8 = param_1[6];
        uVar9 = param_1[7];
        uVar10 = param_1[8];
        uVar11 = param_1[9];
        uVar12 = param_1[10];
        uVar13 = param_1[0xb];
        uVar14 = param_1[0xc];
        uVar15 = param_1[0xd];
        *param_1 = *puVar20;
        param_1[1] = uVar1;
        uVar1 = puVar20[3];
        param_1[2] = puVar20[2];
        param_1[3] = uVar1;
        uVar1 = puVar20[5];
        param_1[4] = puVar20[4];
        param_1[5] = uVar1;
        uVar1 = puVar20[7];
        param_1[6] = puVar20[6];
        param_1[7] = uVar1;
        uVar1 = puVar20[9];
        param_1[8] = puVar20[8];
        param_1[9] = uVar1;
        uVar1 = puVar20[0xb];
        param_1[10] = puVar20[10];
        param_1[0xb] = uVar1;
        uVar1 = puVar20[0xd];
        param_1[0xc] = puVar20[0xc];
        param_1[0xd] = uVar1;
        *puVar20 = uVar2;
        puVar20[1] = uVar3;
        puVar20[2] = uVar4;
        puVar20[3] = uVar5;
        puVar20[4] = uVar6;
        puVar20[5] = uVar7;
        puVar20[6] = uVar8;
        puVar20[7] = uVar9;
        puVar20[8] = uVar10;
        puVar20[9] = uVar11;
        puVar20[10] = uVar12;
        puVar20[0xb] = uVar13;
        puVar20[0xc] = uVar14;
        puVar20[0xd] = uVar15;
      }
      iVar16 = 0;
      if (1 < param_2) {
        do {
          iVar23 = iVar16 * 2 + 1;
          iVar19 = iVar16 * 2 + 2;
          iVar24 = iVar23;
          if ((iVar19 < param_2) &&
             (iVar24 = iVar19,
             *(float *)(param_1 + (longlong)iVar23 * 0xe + 2) <=
             *(float *)(param_1 + (longlong)iVar19 * 0xe + 2) &&
             *(float *)(param_1 + (longlong)iVar19 * 0xe + 2) !=
             *(float *)(param_1 + (longlong)iVar23 * 0xe + 2))) {
            iVar24 = iVar23;
          }
          puVar18 = param_1 + (longlong)iVar16 * 0xe;
          puVar17 = param_1 + (longlong)iVar24 * 0xe;
          if (*(float *)(puVar18 + 2) <= *(float *)(puVar17 + 2)) break;
          if (puVar18 != puVar17) {
            uVar1 = puVar17[1];
            uVar2 = *puVar18;
            uVar3 = puVar18[1];
            uVar4 = puVar18[2];
            uVar5 = puVar18[3];
            uVar6 = puVar18[4];
            uVar7 = puVar18[5];
            uVar8 = puVar18[6];
            uVar9 = puVar18[7];
            uVar10 = puVar18[8];
            uVar11 = puVar18[9];
            uVar12 = puVar18[10];
            uVar13 = puVar18[0xb];
            uVar14 = puVar18[0xc];
            uVar15 = puVar18[0xd];
            *puVar18 = *puVar17;
            puVar18[1] = uVar1;
            uVar1 = puVar17[3];
            puVar18[2] = puVar17[2];
            puVar18[3] = uVar1;
            uVar1 = puVar17[5];
            puVar18[4] = puVar17[4];
            puVar18[5] = uVar1;
            uVar1 = puVar17[7];
            puVar18[6] = puVar17[6];
            puVar18[7] = uVar1;
            uVar1 = puVar17[9];
            puVar18[8] = puVar17[8];
            puVar18[9] = uVar1;
            uVar1 = puVar17[0xb];
            puVar18[10] = puVar17[10];
            puVar18[0xb] = uVar1;
            uVar1 = puVar17[0xd];
            puVar18[0xc] = puVar17[0xc];
            puVar18[0xd] = uVar1;
            *puVar17 = uVar2;
            puVar17[1] = uVar3;
            puVar17[2] = uVar4;
            puVar17[3] = uVar5;
            puVar17[4] = uVar6;
            puVar17[5] = uVar7;
            puVar17[6] = uVar8;
            puVar17[7] = uVar9;
            puVar17[8] = uVar10;
            puVar17[9] = uVar11;
            puVar17[10] = uVar12;
            puVar17[0xb] = uVar13;
            puVar17[0xc] = uVar14;
            puVar17[0xd] = uVar15;
          }
          iVar16 = iVar24;
        } while (iVar24 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar20 = puVar20 + -0xe;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1422de9c0 FUN_1422de9c0 body=733 status=ok
// SIG undefined FUN_1422de9c0(void)

void FUN_1422de9c0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  
  iVar15 = (param_2 + -2) / 2;
  if (-1 < iVar15) {
    iVar16 = iVar15 * 2 + 1;
    iVar4 = iVar16;
    iVar18 = iVar15;
joined_r0x0001422de9f5:
    do {
      if (iVar16 < param_2) {
        iVar16 = iVar15 * 2;
        iVar17 = iVar16 + 1;
        if (iVar16 + 2 < param_2) {
          if ((param_1[((longlong)iVar16 + 2) * 9 + 3] == param_1[(longlong)iVar17 * 9 + 3]) &&
             (*(char *)((longlong)param_1 + ((longlong)iVar16 + 2) * 0x48 + 0x44) ==
              *(char *)((longlong)param_1 + (longlong)iVar17 * 0x48 + 0x44))) {
            bVar14 = false;
          }
          else {
            bVar14 = true;
          }
          if (bVar14) {
            iVar17 = iVar16;
          }
          iVar17 = iVar17 + 1;
        }
        puVar19 = param_1 + (longlong)iVar15 * 9;
        puVar1 = param_1 + (longlong)iVar17 * 9;
        if ((puVar19[3] != param_1[(longlong)iVar17 * 9 + 3]) ||
           (*(char *)((longlong)puVar19 + 0x44) != *(char *)((longlong)puVar1 + 0x44))) {
          if (puVar19 != puVar1) {
            uVar5 = puVar1[1];
            uVar6 = *puVar19;
            uVar7 = puVar19[1];
            uVar8 = puVar19[2];
            uVar9 = puVar19[3];
            uVar10 = puVar19[4];
            uVar11 = puVar19[5];
            uVar12 = puVar19[6];
            uVar13 = puVar19[7];
            uVar3 = puVar19[8];
            *puVar19 = *puVar1;
            puVar19[1] = uVar5;
            uVar5 = puVar1[3];
            puVar19[2] = puVar1[2];
            puVar19[3] = uVar5;
            uVar5 = puVar1[5];
            puVar19[4] = puVar1[4];
            puVar19[5] = uVar5;
            uVar5 = puVar1[7];
            puVar19[6] = puVar1[6];
            puVar19[7] = uVar5;
            puVar19[8] = puVar1[8];
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
            puVar1[4] = uVar10;
            puVar1[5] = uVar11;
            puVar1[6] = uVar12;
            puVar1[7] = uVar13;
            puVar1[8] = uVar3;
          }
          iVar16 = iVar17 * 2 + 1;
          iVar15 = iVar17;
          goto joined_r0x0001422de9f5;
        }
      }
      iVar16 = iVar4 + -2;
      iVar15 = iVar18 + -1;
      iVar4 = iVar16;
      iVar18 = iVar15;
    } while (-1 < iVar15);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar19 = param_1 + (longlong)param_2 * 9;
    do {
      if (param_1 != puVar19) {
        uVar5 = puVar19[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar8 = param_1[2];
        uVar9 = param_1[3];
        uVar10 = param_1[4];
        uVar11 = param_1[5];
        uVar12 = param_1[6];
        uVar13 = param_1[7];
        uVar3 = param_1[8];
        *param_1 = *puVar19;
        param_1[1] = uVar5;
        uVar5 = puVar19[3];
        param_1[2] = puVar19[2];
        param_1[3] = uVar5;
        uVar5 = puVar19[5];
        param_1[4] = puVar19[4];
        param_1[5] = uVar5;
        uVar5 = puVar19[7];
        param_1[6] = puVar19[6];
        param_1[7] = uVar5;
        param_1[8] = puVar19[8];
        *puVar19 = uVar6;
        puVar19[1] = uVar7;
        puVar19[2] = uVar8;
        puVar19[3] = uVar9;
        puVar19[4] = uVar10;
        puVar19[5] = uVar11;
        puVar19[6] = uVar12;
        puVar19[7] = uVar13;
        puVar19[8] = uVar3;
      }
      iVar15 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar15 * 2;
          iVar16 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if ((param_1[((longlong)iVar4 + 2) * 9 + 3] == param_1[(longlong)iVar16 * 9 + 3]) &&
               (*(char *)((longlong)param_1 + ((longlong)iVar4 + 2) * 0x48 + 0x44) ==
                *(char *)((longlong)param_1 + (longlong)iVar16 * 0x48 + 0x44))) {
              bVar14 = false;
            }
            else {
              bVar14 = true;
            }
            if (bVar14) {
              iVar16 = iVar4;
            }
            iVar16 = iVar16 + 1;
          }
          puVar1 = param_1 + (longlong)iVar15 * 9;
          puVar2 = param_1 + (longlong)iVar16 * 9;
          if ((puVar1[3] == param_1[(longlong)iVar16 * 9 + 3]) &&
             (*(char *)((longlong)puVar1 + 0x44) == *(char *)((longlong)puVar2 + 0x44))) break;
          if (puVar1 != puVar2) {
            uVar5 = puVar2[1];
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            uVar10 = puVar1[4];
            uVar11 = puVar1[5];
            uVar12 = puVar1[6];
            uVar13 = puVar1[7];
            uVar3 = puVar1[8];
            *puVar1 = *puVar2;
            puVar1[1] = uVar5;
            uVar5 = puVar2[3];
            puVar1[2] = puVar2[2];
            puVar1[3] = uVar5;
            uVar5 = puVar2[5];
            puVar1[4] = puVar2[4];
            puVar1[5] = uVar5;
            uVar5 = puVar2[7];
            puVar1[6] = puVar2[6];
            puVar1[7] = uVar5;
            puVar1[8] = puVar2[8];
            *puVar2 = uVar6;
            puVar2[1] = uVar7;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
            puVar2[4] = uVar10;
            puVar2[5] = uVar11;
            puVar2[6] = uVar12;
            puVar2[7] = uVar13;
            puVar2[8] = uVar3;
          }
          iVar15 = iVar16;
        } while (iVar16 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar19 = puVar19 + -9;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1422deca0 FUN_1422deca0 body=659 status=ok
// SIG undefined FUN_1422deca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422deca0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x10 + -0x10 + param_1;
    fVar14 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar14 = fVar14 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar14 = _guard_xfg_dispatch_icall_nop(fVar14);
    local_318 = (undefined4)(longlong)(fVar14 + fVar14);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar8 = &local_328;
    do {
      plVar13 = (longlong *)*plVar8;
      plVar11 = (longlong *)plVar8[1];
      lVar1 = plVar8[2];
      local_338._0_4_ = (int)lVar1;
      lVar6 = ((longlong)plVar11 - (longlong)plVar13 >> 4) + 1;
      plVar12 = plVar13;
      if ((int)local_338 != 0) {
LAB_1422ded70:
        if (8 < lVar6) {
          plVar13 = plVar12 + (lVar6 / 2) * 2;
          if (plVar13 != plVar12) {
            uVar2 = *(undefined4 *)((longlong)plVar12 + 4);
            lVar5 = plVar12[1];
            uVar3 = *(undefined4 *)((longlong)plVar12 + 0xc);
            lVar6 = *plVar13;
            lVar4 = plVar13[1];
            *(int *)plVar13 = (int)*plVar12;
            *(undefined4 *)((longlong)plVar13 + 4) = uVar2;
            *(int *)(plVar13 + 1) = (int)lVar5;
            *(undefined4 *)((longlong)plVar13 + 0xc) = uVar3;
            *plVar12 = lVar6;
            plVar12[1] = lVar4;
          }
          plVar9 = plVar11 + 2;
          plVar13 = plVar12;
LAB_1422deda6:
          plVar7 = plVar13;
          plVar13 = plVar7 + 2;
          if (plVar13 <= plVar11) goto code_r0x0001422dedaf;
          goto LAB_1422dedc6;
        }
        for (; plVar9 = plVar12, plVar13 = plVar12, plVar12 < plVar11; plVar11 = plVar11 + -2) {
          while (plVar13 = plVar13 + 2, plVar13 <= plVar11) {
            if (*(float *)(*plVar13 + 0x490) < *(float *)(*plVar9 + 0x490)) {
              plVar9 = plVar13;
            }
          }
          if (plVar9 != plVar11) {
            lVar4 = plVar11[1];
            lVar1 = *plVar9;
            lVar6 = plVar9[1];
            *plVar9 = *plVar11;
            plVar9[1] = lVar4;
            *plVar11 = lVar1;
            plVar11[1] = lVar6;
          }
        }
        goto LAB_1422dee9e;
      }
LAB_1422dee8f:
      local_338 = lVar1;
      FUN_1422de530(plVar13,lVar6,param_3,param_4);
LAB_1422dee9e:
      plVar8 = plVar8 + -3;
    } while (&local_328 <= plVar8);
  }
  return;
code_r0x0001422dedaf:
  if (*(float *)(*plVar12 + 0x490) <= *(float *)(*plVar13 + 0x490)) goto LAB_1422deda6;
LAB_1422dedc6:
  do {
    plVar10 = plVar9;
    plVar9 = plVar10 + -2;
    if (plVar9 <= plVar12) break;
  } while (*(float *)(*plVar9 + 0x490) <= *(float *)(*plVar12 + 0x490));
  if (plVar13 <= plVar9) {
    if (plVar13 != plVar9) {
      uVar2 = *(undefined4 *)((longlong)plVar10 + -0xc);
      lVar5 = plVar10[-1];
      uVar3 = *(undefined4 *)((longlong)plVar10 + -4);
      lVar6 = *plVar13;
      lVar4 = plVar7[3];
      *(int *)plVar13 = (int)*plVar9;
      *(undefined4 *)((longlong)plVar7 + 0x14) = uVar2;
      *(int *)(plVar7 + 3) = (int)lVar5;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar3;
      *plVar9 = lVar6;
      plVar10[-1] = lVar4;
    }
    goto LAB_1422deda6;
  }
  if (plVar12 != plVar9) {
    uVar2 = *(undefined4 *)((longlong)plVar10 + -0xc);
    lVar5 = plVar10[-1];
    uVar3 = *(undefined4 *)((longlong)plVar10 + -4);
    lVar6 = *plVar12;
    lVar4 = plVar12[1];
    *(int *)plVar12 = (int)*plVar9;
    *(undefined4 *)((longlong)plVar12 + 4) = uVar2;
    *(int *)(plVar12 + 1) = (int)lVar5;
    *(undefined4 *)((longlong)plVar12 + 0xc) = uVar3;
    *plVar9 = lVar6;
    plVar10[-1] = lVar4;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)plVar9 + (-0x10 - (longlong)plVar12) & 0xfffffffffffffff0U) <
      (longlong)((longlong)plVar11 - (longlong)plVar13 & 0xfffffffffffffff0U)) {
    if (plVar13 < plVar11) {
      *plVar8 = (longlong)plVar13;
      plVar8[1] = (longlong)plVar11;
      *(int *)(plVar8 + 2) = (int)local_338;
      plVar8 = plVar8 + 3;
    }
    if (plVar9 <= plVar12 + 2) goto LAB_1422dee9e;
    plVar11 = plVar10 + -4;
    plVar13 = plVar12;
  }
  else {
    if (plVar12 + 2 < plVar9) {
      *plVar8 = (longlong)plVar12;
      plVar8[1] = (longlong)(plVar10 + -4);
      *(int *)(plVar8 + 2) = (int)local_338;
      plVar8 = plVar8 + 3;
    }
    if (plVar11 <= plVar13) goto LAB_1422dee9e;
  }
  lVar6 = ((longlong)plVar11 - (longlong)plVar13 >> 4) + 1;
  plVar12 = plVar13;
  if ((int)local_338 == 0) goto LAB_1422dee8f;
  goto LAB_1422ded70;
}



// FUNCTION 1422def40 IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<<lambda_7945e159cc296d55399f795510545d4b>_>_>_>_>_> body=1243 status=ok
// SIG undefined IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<<lambda_7945e159cc296d55399f795510545d4b>_>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<<lambda_7945e159cc296d55399f795510545d4b>_>_>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  longlong *plVar31;
  float fVar32;
  undefined1 auStack_3a8 [48];
  longlong local_378;
  longlong local_368;
  longlong lStack_360;
  undefined4 local_358;
  undefined1 local_350 [744];
  ulonglong local_68;
  
  if (1 < param_2) {
    local_68 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
    fVar32 = (float)(longlong)param_2;
    lStack_360 = param_1 + -0x70 + param_2 * 0x70;
    if ((longlong)param_2 < 0) {
      fVar32 = fVar32 + 1.8446744e+19;
    }
    local_368 = param_1;
    fVar32 = ::_guard_xfg_dispatch_icall_nop(fVar32);
    local_358 = (undefined4)(longlong)(fVar32 + fVar32);
    ::_guard_xfg_dispatch_icall_nop(local_350,0,0x2e8);
    plVar31 = &local_368;
    do {
      puVar30 = (undefined8 *)*plVar31;
      puVar25 = (undefined8 *)plVar31[1];
      lVar1 = plVar31[2];
      local_378._0_4_ = (int)lVar1;
      lVar24 = ((longlong)puVar25 - (longlong)puVar30) / 0x70 + 1;
      puVar29 = puVar30;
      if ((int)local_378 != 0) {
LAB_1422df040:
        if (8 < lVar24) {
          puVar30 = puVar29 + (lVar24 / 2) * 0xe;
          if (puVar30 != puVar29) {
            uVar9 = puVar29[1];
            uVar2 = *(undefined4 *)puVar30;
            uVar3 = *(undefined4 *)((longlong)puVar30 + 4);
            uVar4 = *(undefined4 *)(puVar30 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar30 + 0xc);
            uVar10 = puVar30[2];
            uVar11 = puVar30[3];
            uVar12 = puVar30[4];
            uVar13 = puVar30[5];
            uVar14 = puVar30[6];
            uVar15 = puVar30[7];
            uVar16 = puVar30[8];
            uVar17 = puVar30[9];
            uVar18 = puVar30[10];
            uVar19 = puVar30[0xb];
            uVar20 = puVar30[0xc];
            uVar21 = puVar30[0xd];
            *puVar30 = *puVar29;
            puVar30[1] = uVar9;
            uVar9 = puVar29[3];
            puVar30[2] = puVar29[2];
            puVar30[3] = uVar9;
            uVar9 = puVar29[5];
            puVar30[4] = puVar29[4];
            puVar30[5] = uVar9;
            uVar9 = puVar29[7];
            puVar30[6] = puVar29[6];
            puVar30[7] = uVar9;
            uVar9 = puVar29[9];
            puVar30[8] = puVar29[8];
            puVar30[9] = uVar9;
            uVar9 = puVar29[0xb];
            puVar30[10] = puVar29[10];
            puVar30[0xb] = uVar9;
            uVar6 = *(undefined4 *)((longlong)puVar29 + 100);
            uVar7 = *(undefined4 *)(puVar29 + 0xd);
            uVar8 = *(undefined4 *)((longlong)puVar29 + 0x6c);
            *(undefined4 *)(puVar30 + 0xc) = *(undefined4 *)(puVar29 + 0xc);
            *(undefined4 *)((longlong)puVar30 + 100) = uVar6;
            *(undefined4 *)(puVar30 + 0xd) = uVar7;
            *(undefined4 *)((longlong)puVar30 + 0x6c) = uVar8;
            *(undefined4 *)puVar29 = uVar2;
            *(undefined4 *)((longlong)puVar29 + 4) = uVar3;
            *(undefined4 *)(puVar29 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar29 + 0xc) = uVar5;
            puVar29[2] = uVar10;
            puVar29[3] = uVar11;
            puVar29[4] = uVar12;
            puVar29[5] = uVar13;
            puVar29[6] = uVar14;
            puVar29[7] = uVar15;
            puVar29[8] = uVar16;
            puVar29[9] = uVar17;
            puVar29[10] = uVar18;
            puVar29[0xb] = uVar19;
            puVar29[0xc] = uVar20;
            puVar29[0xd] = uVar21;
          }
          puVar27 = puVar25 + 0xe;
          puVar30 = puVar29;
LAB_1422df0e3:
          puVar26 = puVar30;
          puVar30 = puVar26 + 0xe;
          if (puVar30 <= puVar25) goto code_r0x0001422df0ec;
          goto LAB_1422df100;
        }
        for (; puVar27 = puVar29, puVar30 = puVar29, puVar29 < puVar25; puVar25 = puVar25 + -0xe) {
          while (puVar30 = puVar30 + 0xe, puVar30 <= puVar25) {
            if (*(float *)(puVar30 + 2) < *(float *)(puVar27 + 2)) {
              puVar27 = puVar30;
            }
          }
          if (puVar27 != puVar25) {
            uVar9 = puVar25[1];
            uVar10 = *puVar27;
            uVar11 = puVar27[1];
            uVar12 = puVar27[2];
            uVar13 = puVar27[3];
            uVar14 = puVar27[4];
            uVar15 = puVar27[5];
            uVar16 = puVar27[6];
            uVar17 = puVar27[7];
            uVar18 = puVar27[8];
            uVar19 = puVar27[9];
            uVar20 = puVar27[10];
            uVar21 = puVar27[0xb];
            uVar22 = puVar27[0xc];
            uVar23 = puVar27[0xd];
            *puVar27 = *puVar25;
            puVar27[1] = uVar9;
            uVar9 = puVar25[3];
            puVar27[2] = puVar25[2];
            puVar27[3] = uVar9;
            uVar9 = puVar25[5];
            puVar27[4] = puVar25[4];
            puVar27[5] = uVar9;
            uVar9 = puVar25[7];
            puVar27[6] = puVar25[6];
            puVar27[7] = uVar9;
            uVar9 = puVar25[9];
            puVar27[8] = puVar25[8];
            puVar27[9] = uVar9;
            uVar9 = puVar25[0xb];
            puVar27[10] = puVar25[10];
            puVar27[0xb] = uVar9;
            uVar9 = puVar25[0xd];
            puVar27[0xc] = puVar25[0xc];
            puVar27[0xd] = uVar9;
            *puVar25 = uVar10;
            puVar25[1] = uVar11;
            puVar25[2] = uVar12;
            puVar25[3] = uVar13;
            puVar25[4] = uVar14;
            puVar25[5] = uVar15;
            puVar25[6] = uVar16;
            puVar25[7] = uVar17;
            puVar25[8] = uVar18;
            puVar25[9] = uVar19;
            puVar25[10] = uVar20;
            puVar25[0xb] = uVar21;
            puVar25[0xc] = uVar22;
            puVar25[0xd] = uVar23;
          }
        }
        goto LAB_1422df2fc;
      }
LAB_1422df2ed:
      local_378 = lVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FAudioVolumeProxy>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FAudioVolumeProxy>,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FAudioVolumeProxy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAudioVolumeProxy,0>_>::FValueComparisonClass<<lambda_7945e159cc296d55399f795510545d4b>_>_>_>_>_>
                (puVar30,lVar24,param_3,param_4);
LAB_1422df2fc:
      plVar31 = plVar31 + -3;
    } while (&local_368 <= plVar31);
  }
  return;
code_r0x0001422df0ec:
  if (*(float *)(puVar29 + 2) <= *(float *)(puVar26 + 0x10)) goto LAB_1422df0e3;
LAB_1422df100:
  do {
    puVar28 = puVar27;
    puVar27 = puVar28 + -0xe;
    if (puVar27 <= puVar29) break;
  } while (*(float *)(puVar28 + -0xc) <= *(float *)(puVar29 + 2));
  if (puVar30 <= puVar27) {
    if (puVar30 != puVar27) {
      uVar9 = puVar28[-0xd];
      uVar2 = *(undefined4 *)puVar30;
      uVar3 = *(undefined4 *)((longlong)puVar26 + 0x74);
      uVar4 = *(undefined4 *)(puVar26 + 0xf);
      uVar5 = *(undefined4 *)((longlong)puVar26 + 0x7c);
      uVar10 = puVar26[0x10];
      uVar11 = puVar26[0x11];
      uVar12 = puVar26[0x12];
      uVar13 = puVar26[0x13];
      uVar14 = puVar26[0x14];
      uVar15 = puVar26[0x15];
      uVar16 = puVar26[0x16];
      uVar17 = puVar26[0x17];
      uVar18 = puVar26[0x18];
      uVar19 = puVar26[0x19];
      uVar20 = puVar26[0x1a];
      uVar21 = puVar26[0x1b];
      *puVar30 = *puVar27;
      puVar26[0xf] = uVar9;
      uVar9 = puVar28[-0xb];
      puVar26[0x10] = puVar28[-0xc];
      puVar26[0x11] = uVar9;
      uVar9 = puVar28[-9];
      puVar26[0x12] = puVar28[-10];
      puVar26[0x13] = uVar9;
      uVar9 = puVar28[-7];
      puVar26[0x14] = puVar28[-8];
      puVar26[0x15] = uVar9;
      uVar9 = puVar28[-5];
      puVar26[0x16] = puVar28[-6];
      puVar26[0x17] = uVar9;
      uVar9 = puVar28[-3];
      puVar26[0x18] = puVar28[-4];
      puVar26[0x19] = uVar9;
      uVar6 = *(undefined4 *)((longlong)puVar28 + -0xc);
      uVar7 = *(undefined4 *)(puVar28 + -1);
      uVar8 = *(undefined4 *)((longlong)puVar28 + -4);
      *(undefined4 *)(puVar26 + 0x1a) = *(undefined4 *)(puVar28 + -2);
      *(undefined4 *)((longlong)puVar26 + 0xd4) = uVar6;
      *(undefined4 *)(puVar26 + 0x1b) = uVar7;
      *(undefined4 *)((longlong)puVar26 + 0xdc) = uVar8;
      *(undefined4 *)puVar27 = uVar2;
      *(undefined4 *)((longlong)puVar28 + -0x6c) = uVar3;
      *(undefined4 *)(puVar28 + -0xd) = uVar4;
      *(undefined4 *)((longlong)puVar28 + -100) = uVar5;
      puVar28[-0xc] = uVar10;
      puVar28[-0xb] = uVar11;
      puVar28[-10] = uVar12;
      puVar28[-9] = uVar13;
      puVar28[-8] = uVar14;
      puVar28[-7] = uVar15;
      puVar28[-6] = uVar16;
      puVar28[-5] = uVar17;
      puVar28[-4] = uVar18;
      puVar28[-3] = uVar19;
      puVar28[-2] = uVar20;
      puVar28[-1] = uVar21;
    }
    goto LAB_1422df0e3;
  }
  if (puVar29 != puVar27) {
    uVar9 = puVar28[-0xd];
    uVar2 = *(undefined4 *)puVar29;
    uVar3 = *(undefined4 *)((longlong)puVar29 + 4);
    uVar4 = *(undefined4 *)(puVar29 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar29 + 0xc);
    uVar10 = puVar29[2];
    uVar11 = puVar29[3];
    uVar12 = puVar29[4];
    uVar13 = puVar29[5];
    uVar14 = puVar29[6];
    uVar15 = puVar29[7];
    uVar16 = puVar29[8];
    uVar17 = puVar29[9];
    uVar18 = puVar29[10];
    uVar19 = puVar29[0xb];
    uVar20 = puVar29[0xc];
    uVar21 = puVar29[0xd];
    *puVar29 = *puVar27;
    puVar29[1] = uVar9;
    uVar9 = puVar28[-0xb];
    puVar29[2] = puVar28[-0xc];
    puVar29[3] = uVar9;
    uVar9 = puVar28[-9];
    puVar29[4] = puVar28[-10];
    puVar29[5] = uVar9;
    uVar9 = puVar28[-7];
    puVar29[6] = puVar28[-8];
    puVar29[7] = uVar9;
    uVar9 = puVar28[-5];
    puVar29[8] = puVar28[-6];
    puVar29[9] = uVar9;
    uVar9 = puVar28[-3];
    puVar29[10] = puVar28[-4];
    puVar29[0xb] = uVar9;
    uVar6 = *(undefined4 *)((longlong)puVar28 + -0xc);
    uVar7 = *(undefined4 *)(puVar28 + -1);
    uVar8 = *(undefined4 *)((longlong)puVar28 + -4);
    *(undefined4 *)(puVar29 + 0xc) = *(undefined4 *)(puVar28 + -2);
    *(undefined4 *)((longlong)puVar29 + 100) = uVar6;
    *(undefined4 *)(puVar29 + 0xd) = uVar7;
    *(undefined4 *)((longlong)puVar29 + 0x6c) = uVar8;
    *(undefined4 *)puVar27 = uVar2;
    *(undefined4 *)((longlong)puVar28 + -0x6c) = uVar3;
    *(undefined4 *)(puVar28 + -0xd) = uVar4;
    *(undefined4 *)((longlong)puVar28 + -100) = uVar5;
    puVar28[-0xc] = uVar10;
    puVar28[-0xb] = uVar11;
    puVar28[-10] = uVar12;
    puVar28[-9] = uVar13;
    puVar28[-8] = uVar14;
    puVar28[-7] = uVar15;
    puVar28[-6] = uVar16;
    puVar28[-5] = uVar17;
    puVar28[-4] = uVar18;
    puVar28[-3] = uVar19;
    puVar28[-2] = uVar20;
    puVar28[-1] = uVar21;
  }
  local_378._0_4_ = (int)local_378 + -1;
  if (((longlong)puVar27 + (-0x70 - (longlong)puVar29)) / 0x70 <
      ((longlong)puVar25 - (longlong)puVar30) / 0x70) {
    if (puVar30 < puVar25) {
      *plVar31 = (longlong)puVar30;
      plVar31[1] = (longlong)puVar25;
      *(int *)(plVar31 + 2) = (int)local_378;
      plVar31 = plVar31 + 3;
    }
    if (puVar27 <= puVar29 + 0xe) goto LAB_1422df2fc;
    puVar25 = puVar28 + -0x1c;
    puVar30 = puVar29;
  }
  else {
    if (puVar29 + 0xe < puVar27) {
      *plVar31 = (longlong)puVar29;
      plVar31[1] = (longlong)(puVar28 + -0x1c);
      *(int *)(plVar31 + 2) = (int)local_378;
      plVar31 = plVar31 + 3;
    }
    if (puVar25 <= puVar30) goto LAB_1422df2fc;
  }
  lVar24 = ((longlong)puVar25 - (longlong)puVar30) / 0x70 + 1;
  puVar29 = puVar30;
  if ((int)local_378 == 0) goto LAB_1422df2ed;
  goto LAB_1422df040;
}



// FUNCTION 1422df420 FUN_1422df420 body=1096 status=ok
// SIG undefined FUN_1422df420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422df420(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  float fVar21;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + param_2 * 0x48 + -0x48;
    fVar21 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar21 = fVar21 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar21 = _guard_xfg_dispatch_icall_nop(fVar21);
    local_338 = (undefined4)(longlong)(fVar21 + fVar21);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar20 = &local_348;
    do {
      puVar19 = (undefined8 *)*plVar20;
      puVar14 = (undefined8 *)plVar20[1];
      lVar1 = plVar20[2];
      local_358._0_4_ = (int)lVar1;
      lVar13 = ((longlong)puVar14 - (longlong)puVar19) / 0x48 + 1;
      puVar18 = puVar19;
      if ((int)local_358 != 0) {
LAB_1422df510:
        if (8 < lVar13) {
          if (lVar13 < 0) {
            lVar13 = lVar13 + 1;
          }
          puVar19 = puVar18 + (lVar13 >> 1) * 9;
          if (puVar19 != puVar18) {
            uVar3 = puVar18[1];
            uVar4 = *puVar19;
            uVar5 = puVar19[1];
            uVar6 = puVar19[2];
            uVar7 = puVar19[3];
            uVar8 = puVar19[4];
            uVar9 = puVar19[5];
            uVar10 = puVar19[6];
            uVar11 = puVar19[7];
            uVar2 = puVar19[8];
            *puVar19 = *puVar18;
            puVar19[1] = uVar3;
            uVar3 = puVar18[3];
            puVar19[2] = puVar18[2];
            puVar19[3] = uVar3;
            uVar3 = puVar18[5];
            puVar19[4] = puVar18[4];
            puVar19[5] = uVar3;
            uVar3 = puVar18[7];
            puVar19[6] = puVar18[6];
            puVar19[7] = uVar3;
            puVar19[8] = puVar18[8];
            *puVar18 = uVar4;
            puVar18[1] = uVar5;
            puVar18[2] = uVar6;
            puVar18[3] = uVar7;
            puVar18[4] = uVar8;
            puVar18[5] = uVar9;
            puVar18[6] = uVar10;
            puVar18[7] = uVar11;
            puVar18[8] = uVar2;
          }
          puVar16 = puVar14 + 9;
          puVar19 = puVar18;
LAB_1422df593:
          puVar15 = puVar19;
          puVar19 = puVar15 + 9;
          if ((puVar19 <= puVar14) && (puVar18[3] == puVar15[0xc])) goto code_r0x0001422df5a6;
          goto LAB_1422df5b1;
        }
        for (; puVar19 = puVar18, puVar16 = puVar18, puVar18 < puVar14; puVar14 = puVar14 + -9) {
          while (puVar15 = puVar19, puVar19 = puVar16 + 9, puVar19 <= puVar14) {
            if ((puVar15[3] == puVar16[0xc]) &&
               (*(char *)((longlong)puVar15 + 0x44) == *(char *)((longlong)puVar16 + 0x8c))) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            puVar16 = puVar19;
            if (!bVar12) {
              puVar19 = puVar15;
            }
          }
          if (puVar15 != puVar14) {
            uVar3 = puVar14[1];
            uVar4 = *puVar15;
            uVar5 = puVar15[1];
            uVar6 = puVar15[2];
            uVar7 = puVar15[3];
            uVar8 = puVar15[4];
            uVar9 = puVar15[5];
            uVar10 = puVar15[6];
            uVar11 = puVar15[7];
            uVar2 = puVar15[8];
            *puVar15 = *puVar14;
            puVar15[1] = uVar3;
            uVar3 = puVar14[3];
            puVar15[2] = puVar14[2];
            puVar15[3] = uVar3;
            uVar3 = puVar14[5];
            puVar15[4] = puVar14[4];
            puVar15[5] = uVar3;
            uVar3 = puVar14[7];
            puVar15[6] = puVar14[6];
            puVar15[7] = uVar3;
            puVar15[8] = puVar14[8];
            *puVar14 = uVar4;
            puVar14[1] = uVar5;
            puVar14[2] = uVar6;
            puVar14[3] = uVar7;
            puVar14[4] = uVar8;
            puVar14[5] = uVar9;
            puVar14[6] = uVar10;
            puVar14[7] = uVar11;
            puVar14[8] = uVar2;
          }
        }
        goto LAB_1422df765;
      }
LAB_1422df756:
      local_358 = lVar1;
      FUN_1422de9c0(puVar19,lVar13,param_3,param_4);
LAB_1422df765:
      plVar20 = plVar20 + -3;
    } while (&local_348 <= plVar20);
  }
  return;
code_r0x0001422df5a6:
  if (*(char *)((longlong)puVar18 + 0x44) == *(char *)((longlong)puVar15 + 0x8c))
  goto LAB_1422df593;
LAB_1422df5b1:
  do {
    puVar17 = puVar16;
    puVar16 = puVar17 + -9;
    if ((puVar16 <= puVar18) || (puVar17[-6] != puVar18[3])) break;
  } while (*(char *)((longlong)puVar17 + -4) == *(char *)((longlong)puVar18 + 0x44));
  if (puVar19 <= puVar16) {
    if (puVar19 != puVar16) {
      uVar3 = puVar17[-8];
      uVar4 = *puVar19;
      uVar5 = puVar15[10];
      uVar6 = puVar15[0xb];
      uVar7 = puVar15[0xc];
      uVar8 = puVar15[0xd];
      uVar9 = puVar15[0xe];
      uVar10 = puVar15[0xf];
      uVar11 = puVar15[0x10];
      uVar2 = puVar15[0x11];
      *puVar19 = *puVar16;
      puVar15[10] = uVar3;
      uVar3 = puVar17[-6];
      puVar15[0xb] = puVar17[-7];
      puVar15[0xc] = uVar3;
      uVar3 = puVar17[-4];
      puVar15[0xd] = puVar17[-5];
      puVar15[0xe] = uVar3;
      uVar3 = puVar17[-2];
      puVar15[0xf] = puVar17[-3];
      puVar15[0x10] = uVar3;
      puVar15[0x11] = puVar17[-1];
      *puVar16 = uVar4;
      puVar17[-8] = uVar5;
      puVar17[-7] = uVar6;
      puVar17[-6] = uVar7;
      puVar17[-5] = uVar8;
      puVar17[-4] = uVar9;
      puVar17[-3] = uVar10;
      puVar17[-2] = uVar11;
      puVar17[-1] = uVar2;
    }
    goto LAB_1422df593;
  }
  if (puVar18 != puVar16) {
    uVar3 = puVar17[-8];
    uVar4 = *puVar18;
    uVar5 = puVar18[1];
    uVar6 = puVar18[2];
    uVar7 = puVar18[3];
    uVar8 = puVar18[4];
    uVar9 = puVar18[5];
    uVar10 = puVar18[6];
    uVar11 = puVar18[7];
    uVar2 = puVar18[8];
    *puVar18 = *puVar16;
    puVar18[1] = uVar3;
    uVar3 = puVar17[-6];
    puVar18[2] = puVar17[-7];
    puVar18[3] = uVar3;
    uVar3 = puVar17[-4];
    puVar18[4] = puVar17[-5];
    puVar18[5] = uVar3;
    uVar3 = puVar17[-2];
    puVar18[6] = puVar17[-3];
    puVar18[7] = uVar3;
    puVar18[8] = puVar17[-1];
    *puVar16 = uVar4;
    puVar17[-8] = uVar5;
    puVar17[-7] = uVar6;
    puVar17[-6] = uVar7;
    puVar17[-5] = uVar8;
    puVar17[-4] = uVar9;
    puVar17[-3] = uVar10;
    puVar17[-2] = uVar11;
    puVar17[-1] = uVar2;
  }
  local_358._0_4_ = (int)local_358 + -1;
  lVar13 = (longlong)puVar16 + (-0x48 - (longlong)puVar18);
  lVar13 = lVar13 / 0x12 + (lVar13 >> 0x3f);
  if ((lVar13 >> 2) - (lVar13 >> 0x3f) < ((longlong)puVar14 - (longlong)puVar19) / 0x48) {
    if (puVar19 < puVar14) {
      *plVar20 = (longlong)puVar19;
      plVar20[1] = (longlong)puVar14;
      *(int *)(plVar20 + 2) = (int)local_358;
      plVar20 = plVar20 + 3;
    }
    if (puVar16 <= puVar18 + 9) goto LAB_1422df765;
    puVar14 = puVar17 + -0x12;
    puVar19 = puVar18;
  }
  else {
    if (puVar18 + 9 < puVar16) {
      *plVar20 = (longlong)puVar18;
      plVar20[1] = (longlong)(puVar17 + -0x12);
      *(int *)(plVar20 + 2) = (int)local_358;
      plVar20 = plVar20 + 3;
    }
    if (puVar14 <= puVar19) goto LAB_1422df765;
  }
  lVar13 = ((longlong)puVar14 - (longlong)puVar19) / 0x48 + 1;
  puVar18 = puVar19;
  if ((int)local_358 == 0) goto LAB_1422df756;
  goto LAB_1422df510;
}



// FUNCTION 1422df870 FUN_1422df870 body=69 status=ok
// SIG undefined FUN_1422df870(void)

ulonglong FUN_1422df870(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1429d7ab0();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1422df8c0 FUN_1422df8c0 body=248 status=ok
// SIG undefined FUN_1422df8c0(void)

undefined8 * FUN_1422df8c0(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_145033ec8;
  *(uint *)(param_1 + 0x93) = *(uint *)(param_1 + 0x93) | 1;
  *(undefined1 *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x40000000;
  *(uint *)(param_1 + 0x97) = *(uint *)(param_1 + 0x97) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x98) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0x469c4000;
  *(undefined4 *)(param_1 + 0x99) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9a) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0x469c4000;
  *(undefined4 *)(param_1 + 0x9b) = 0x3f000000;
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146aefc58);
  *(byte *)(param_1[0x8e] + 0x2ee) = *(byte *)(param_1[0x8e] + 0x2ee) | 0x80;
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) | 1;
  *(uint *)((longlong)param_1 + 0x494) = *(uint *)((longlong)param_1 + 0x494) | 1;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0xffffff00;
  return param_1;
}



// FUNCTION 1422df9c0 FUN_1422df9c0 body=70 status=ok
// SIG undefined FUN_1422df9c0(void)

undefined8 * FUN_1422df9c0(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_1440f1c20;
  FUN_14234fe40(param_1[0x8e],1);
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146aef6f8);
  return param_1;
}



// FUNCTION 1422dfa10 FUN_1422dfa10 body=210 status=ok
// SIG undefined FUN_1422dfa10(void)

undefined8 * FUN_1422dfa10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_145033718;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BrushComponent0",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14290da60();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8e] = lVar4;
  *(undefined1 *)(lVar4 + 0x24e) = 0;
  FUN_1423974f0(param_1[0x8e],0);
  FUN_14234fe40(param_1[0x8e],0);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) & 0xfffffff7;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0x3f;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x80;
  param_1[0x2d] = param_1[0x8e];
  *(undefined1 *)((longlong)param_1 + 0x12a) = 3;
  return param_1;
}



// FUNCTION 1422dfaf0 FUN_1422dfaf0 body=264 status=ok
// SIG undefined FUN_1422dfaf0(void)

undefined8 * FUN_1422dfaf0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_145033718;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  puVar3 = (undefined8 *)FName::FName(local_res8,L"BrushComponent0",1);
  uVar1 = *puVar3;
  uVar4 = FUN_14290da60();
  lVar5 = FUN_141752410(param_1,uVar1,uVar4,uVar4,1,0,0);
  param_1[0x8e] = lVar5;
  *(undefined1 *)(lVar5 + 0x24e) = 0;
  FUN_1423974f0(param_1[0x8e],0);
  FUN_14234fe40(param_1[0x8e],0);
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0x3f;
  plVar2 = (longlong *)param_1[0x8e];
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) & 0xfffffff7;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x80;
  param_1[0x2d] = plVar2;
  *(undefined1 *)((longlong)param_1 + 0x12a) = 3;
  *param_1 = &PTR_FUN_145035918;
  (**(code **)(*plVar2 + 0x640))(plVar2,DAT_146aefc58);
  *(byte *)(param_1[0x8e] + 0x2f8) = *(byte *)(param_1[0x8e] + 0x2f8) | 0x10;
  *(byte *)(param_1[0x8e] + 0x2f8) = *(byte *)(param_1[0x8e] + 0x2f8) & 0xdf;
  return param_1;
}



// FUNCTION 1422dfc00 FUN_1422dfc00 body=349 status=ok
// SIG undefined FUN_1422dfc00(void)

undefined8 * FUN_1422dfc00(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_145036038;
  *(undefined4 *)(param_1 + 0x8e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  FUN_142741540(param_1 + 0x92);
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SceneComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8d] = uVar3;
  param_1[0x2d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"CameraComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_14290f3e0();
  lVar4 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = lVar4;
  local_res8 = 0;
  *(undefined4 *)(lVar4 + 0x2d0) = 0x42b40000;
  *(uint *)(param_1[0x8c] + 0x2e8) = *(uint *)(param_1[0x8c] + 0x2e8) | 1;
  *(undefined4 *)(param_1[0x8c] + 0x2e4) = 0x3fe38e3b;
  *(undefined4 *)(param_1[0x8c] + 0x2f0) = 0x3f800000;
  FUN_142399e30(param_1[0x8c],param_1[0x8d],0);
  *(uint *)(param_1 + 0x8f) = *(uint *)(param_1 + 0x8f) | 1;
  *(undefined4 *)(param_1 + 0x90) = 0x42b40000;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0x3fe38e3b;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0x3f800000;
  return param_1;
}



// FUNCTION 1422dfd60 FUN_1422dfd60 body=576 status=ok
// SIG undefined FUN_1422dfd60(void)

undefined8 * FUN_1422dfd60(undefined8 *param_1)

{
  char cVar1;
  wint_t wVar2;
  wint_t wVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  wint_t *pwVar11;
  short *_Src;
  int iVar12;
  undefined2 *puVar13;
  short *local_28;
  undefined8 local_20;
  
  lVar10 = -1;
  puVar8 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  iVar12 = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0;
  puVar5 = (undefined8 *)operator_new(0x10);
  puVar6 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar6 = puVar5;
  }
  param_1[0x11] = puVar6;
  param_1[0x10] = puVar6;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffffffffffff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  local_28 = (short *)0x0;
  local_20 = 0;
  uVar7 = FCommandLine::Get();
  cVar1 = FParse::Value(uVar7,L"DebugSound=",&local_28,1);
  if (cVar1 != '\0') {
    puVar6 = param_1 + 0x1e;
    puVar13 = &DAT_143f3eda8;
    _Src = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      _Src = local_28;
    }
    if ((short *)*puVar6 != _Src) {
      puVar5 = puVar8;
      if ((_Src != (short *)0x0) && (*_Src != 0)) {
        do {
          lVar10 = lVar10 + 1;
        } while (_Src[lVar10] != 0);
        puVar5 = (undefined8 *)(ulonglong)((int)lVar10 + 1);
      }
      *(undefined4 *)(param_1 + 0x1f) = 0;
      iVar9 = (int)puVar5;
      if (*(int *)((longlong)param_1 + 0xfc) != iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar6,puVar5);
        puVar8 = (undefined8 *)(ulonglong)*(uint *)(param_1 + 0x1f);
      }
      iVar4 = (int)puVar8 + iVar9;
      *(int *)(param_1 + 0x1f) = iVar4;
      if (*(int *)((longlong)param_1 + 0xfc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar6);
      }
      if (iVar9 != 0) {
        _guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,(longlong)iVar9 * 2);
      }
    }
    if (*(int *)(param_1 + 0x1f) != 0) {
      puVar13 = (undefined2 *)*puVar6;
    }
    pwVar11 = &DAT_14502e5bc;
    do {
      wVar2 = *(wint_t *)((longlong)(puVar13 + -0xa28172de) + (longlong)pwVar11);
      if ((wVar2 == 0) && (*pwVar11 == 0)) goto LAB_1422dff69;
      if (wVar2 != *pwVar11) {
        wVar2 = towlower(wVar2);
        wVar3 = towlower(*pwVar11);
        if (wVar2 != wVar3) goto LAB_1422dff61;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_1422dff7e:
  if (local_28 != (short *)0x0) {
    FMemory::Free();
  }
  return param_1;
LAB_1422dff61:
  iVar12 = (uint)wVar2 - (uint)wVar3;
LAB_1422dff69:
  *(bool *)(param_1 + 0x20) = iVar12 != 0;
  goto LAB_1422dff7e;
}



// FUNCTION 1422dffa0 FAudioEffectsManager body=928 status=ok
// SIG undefined FAudioEffectsManager(void)

undefined8 * FAudioEffectsManager::FAudioEffectsManager(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__145034c38;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3ea3d70a;
  *(undefined4 *)(param_1 + 7) = 0x3f63d70a;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3fbeb852;
  *(undefined4 *)(param_1 + 8) = 0x3f547ae1;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 9) = 0x3be56042;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3fa147ae;
  *(undefined4 *)(param_1 + 10) = 0x3c343958;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x3f7e76c9;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3ea3d70a;
  *(undefined4 *)(param_1 + 0xf) = 0x3f63d70a;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3fbeb852;
  *(undefined4 *)(param_1 + 0x10) = 0x3f547ae1;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x11) = 0x3be56042;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3fa147ae;
  *(undefined4 *)(param_1 + 0x12) = 0x3c343958;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x3f7e76c9;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3ea3d70a;
  *(undefined4 *)(param_1 + 0x17) = 0x3f63d70a;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3fbeb852;
  *(undefined4 *)(param_1 + 0x18) = 0x3f547ae1;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x19) = 0x3be56042;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3fa147ae;
  *(undefined4 *)(param_1 + 0x1a) = 0x3c343958;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x3f7e76c9;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3ea3d70a;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f63d70a;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3fbeb852;
  *(undefined4 *)(param_1 + 0x20) = 0x3f547ae1;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x21) = 0x3be56042;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3fa147ae;
  *(undefined4 *)(param_1 + 0x22) = 0x3c343958;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0x3f7e76c9;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
  *(undefined1 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x40000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x44160000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2d) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0x44160000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x32) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3f800000;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x44160000;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3b) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3e) = 0x10000;
  FUN_1422f35e0();
  return param_1;
}



// FUNCTION 1422e0340 FAudioReverbEffect body=90 status=ok
// SIG undefined FAudioReverbEffect(void)

undefined8 * FAudioReverbEffect::FAudioReverbEffect(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3ea3d70a;
  *(undefined4 *)(param_1 + 3) = 0x3f63d70a;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3fbeb852;
  *(undefined4 *)(param_1 + 4) = 0x3f547ae1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 5) = 0x3be56042;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3fa147ae;
  *(undefined4 *)(param_1 + 6) = 0x3c343958;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f7e76c9;
  return param_1;
}


