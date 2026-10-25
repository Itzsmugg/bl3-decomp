// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1404b08e0 GetType body=62 status=ok
// SIG undefined GetType(void)

undefined8 * FJsonValueObject::GetType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Object",0xe);
  return param_2;
}



// FUNCTION 1404b0920 GetType body=62 status=ok
// SIG undefined GetType(void)

undefined8 * FJsonValueString::GetType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"String",0xe);
  return param_2;
}



// FUNCTION 1404b0960 GetValue body=18 status=ok
// SIG undefined GetValue(void)

void FVariantData::GetValue(int *param_1,int *param_2)

{
  if (*param_1 == 1) {
    *param_2 = param_1[2];
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1404b0980 GetValue body=18 status=ok
// SIG undefined GetValue(void)

void FVariantData::GetValue(int *param_1,int *param_2)

{
  if (*param_1 == 2) {
    *param_2 = param_1[2];
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1404b09a0 GetValue body=23 status=ok
// SIG undefined GetValue(void)

void FVariantData::GetValue(int *param_1,int *param_2)

{
  if (*param_1 == 7) {
    *param_2 = param_1[2];
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1404b09c0 FUN_1404b09c0 body=23 status=ok
// SIG undefined FUN_1404b09c0(void)

void FUN_1404b09c0(int *param_1,undefined8 *param_2)

{
  if (*param_1 == 5) {
    *param_2 = *(undefined8 *)(param_1 + 2);
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1404b09e0 GetValue body=129 status=ok
// SIG undefined GetValue(void)

void FVariantData::GetValue(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*param_1 == 8) {
    iVar1 = param_1[4];
    iVar3 = *(int *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_2 + 1) = 0;
    if (iVar3 != iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2,iVar1);
      iVar2 = *(int *)(param_2 + 1);
      iVar3 = *(int *)((longlong)param_2 + 0xc);
    }
    iVar1 = param_1[4];
    *(int *)(param_2 + 1) = iVar1 + iVar2;
    if (iVar3 < iVar1 + iVar2) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)*param_2,*(void **)(param_1 + 2),(ulonglong)(uint)param_1[4]);
    return;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2);
  }
  return;
}



// FUNCTION 1404b0a70 FUN_1404b0a70 body=215 status=ok
// SIG undefined FUN_1404b0a70(void)

void FUN_1404b0a70(int *param_1,undefined8 *param_2)

{
  short *_Src;
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (((*param_1 - 6U & 0xfffffffb) == 0) && (_Src = *(short **)(param_1 + 2), _Src != (short *)0x0)
     ) {
    if ((short *)*param_2 != _Src) {
      iVar1 = 0;
      iVar2 = iVar1;
      if (*_Src != 0) {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (_Src[lVar3] != 0);
        iVar2 = (int)lVar3 + 1;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,iVar2);
        iVar1 = *(int *)(param_2 + 1);
      }
      *(int *)(param_2 + 1) = iVar1 + iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      if (iVar2 != 0) {
        _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  else if ((undefined *)*param_2 != &DAT_143f5ab54) {
    iVar1 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2);
      iVar1 = *(int *)(param_2 + 1);
    }
    *(int *)(param_2 + 1) = iVar1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1404b0b50 FUN_1404b0b50 body=21 status=ok
// SIG undefined FUN_1404b0b50(void)

void FUN_1404b0b50(int *param_1,undefined8 *param_2)

{
  if (*param_1 == 4) {
    *param_2 = *(undefined8 *)(param_1 + 2);
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1404b0b70 GetValue body=16 status=ok
// SIG undefined GetValue(void)

void FVariantData::GetValue(int *param_1,undefined1 *param_2)

{
  if (*param_1 == 9) {
    *param_2 = (char)param_1[2];
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1404b0b80 FUN_1404b0b80 body=5 status=ok
// SIG undefined FUN_1404b0b80(void)

longlong FUN_1404b0b80(longlong param_1)

{
  return param_1 + 0x48;
}



// FUNCTION 1404b0b90 FUN_1404b0b90 body=120 status=ok
// SIG undefined FUN_1404b0b90(void)

undefined8 FUN_1404b0b90(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  if (param_1[5] != 0) {
    FUN_1404b6bd0();
  }
  lVar2 = operator_new(0x38);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1404ac0f0(lVar2);
  }
  param_1[5] = lVar3;
  cVar1 = FUN_1404b0d70(lVar3,(int)param_1[1]);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 8))(param_1,local_res8,param_2);
    *(undefined4 *)(param_1 + 6) = 1;
    return 1;
  }
  return 0;
}



// FUNCTION 1404b0c10 IncrementFloatStat body=176 status=ok
// SIG undefined IncrementFloatStat(void)

void FOnlineStats::IncrementFloatStat(longlong param_1,undefined8 param_2,float param_3)

{
  int *piVar1;
  undefined1 local_res20 [8];
  undefined8 local_48;
  int *local_40;
  int local_38 [2];
  ulonglong local_30;
  undefined8 local_28;
  
  piVar1 = (int *)FindStatByName();
  if ((piVar1 != (int *)0x0) && (*piVar1 == 7)) {
    piVar1[2] = (int)(param_3 + (float)piVar1[2]);
    return;
  }
  local_38[0] = 7;
  local_28 = 0;
  local_40 = local_38;
  local_30 = (ulonglong)(uint)param_3;
  local_48 = param_2;
  FUN_1404a8f80(param_1 + 8,local_res20,&local_48,0);
  if ((local_38[0] == 6) || ((local_38[0] == 8 || (local_38[0] == 10)))) {
    FMemory::operator_delete(local_30);
  }
  return;
}



// FUNCTION 1404b0cc0 IncrementIntStat body=164 status=ok
// SIG undefined IncrementIntStat(void)

void FOnlineStats::IncrementIntStat(longlong param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  undefined1 local_res20 [8];
  undefined8 local_38;
  int *local_30;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  piVar1 = (int *)FindStatByName();
  if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
    piVar1[2] = piVar1[2] + param_3;
    return;
  }
  local_28[0] = 1;
  local_18 = 0;
  local_30 = local_28;
  local_20 = (ulonglong)param_3;
  local_38 = param_2;
  FUN_1404a8f80(param_1 + 8,local_res20,&local_38,0);
  if ((local_28[0] == 6) || ((local_28[0] == 8 || (local_28[0] == 10)))) {
    FMemory::operator_delete(local_20);
  }
  return;
}



// FUNCTION 1404b0d70 FUN_1404b0d70 body=810 status=ok
// SIG undefined FUN_1404b0d70(void)

undefined8 FUN_1404b0d70(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  uVar7 = FName::FName(local_res18,L"WINDOWS",1);
  plVar8 = (longlong *)FUN_1419c6b80(uVar7);
  puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x70))(plVar8,local_68,0,0);
  local_90 = (longlong *)puVar9[1];
  local_98 = *puVar9;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  if (param_1 != &local_98) {
    *param_1 = local_98;
    local_98 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&local_90);
  }
  plVar3 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  (**(code **)(*(longlong *)*param_1 + 0x60))();
  (**(code **)(*(longlong *)*param_1 + 0x30))((longlong *)*param_1,param_2);
  puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0xb0))(plVar8,local_58,DAT_1468b6160);
  local_80 = (longlong *)puVar9[1];
  local_88 = *puVar9;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  puVar9 = param_1 + 3;
  if (puVar9 != &local_88) {
    *puVar9 = local_88;
    local_88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 4,&local_80);
  }
  plVar3 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  (**(code **)(*(longlong *)*puVar9 + 0x30))((longlong *)*puVar9,param_2);
  puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x70))(plVar8,local_48,0,0);
  uVar7 = param_1[5];
  param_1[5] = *puVar10;
  *puVar10 = uVar7;
  uVar7 = param_1[6];
  param_1[6] = puVar10[1];
  puVar10[1] = uVar7;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  local_78[0] = 0;
  local_78[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
  FGenericPlatformString::Memcpy(local_78[0],L"LAN beacon",0x16);
  local_res8 = 0x118;
  uVar7 = (**(code **)(*plVar8 + 0x18))(plVar8,&local_res8,local_78,1);
  param_1[2] = uVar7;
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  plVar8 = (longlong *)param_1[2];
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8,1);
    (**(code **)(*(longlong *)param_1[2] + 0x88))((longlong *)param_1[2],1);
    (**(code **)(*(longlong *)param_1[2] + 200))((longlong *)param_1[2],1);
    cVar6 = (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],*puVar9);
    if (((cVar6 != '\0') &&
        (cVar6 = (**(code **)(*(longlong *)param_1[2] + 0x90))((longlong *)param_1[2],1),
        cVar6 != '\0')) && (param_1[2] != 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1404b10a0 Init body=105 status=ok
// SIG undefined Init(void)

bool FOnlineAsyncTaskManager::Init(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  uint local_res8 [8];
  
  uVar2 = FUN_1415ab270(0);
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  local_res8[0] = 0x32;
  cVar1 = FConfigCacheIni::GetInt
                    (DAT_1468b6148,L"OnlineSubsystem",L"PollingIntervalInMs",local_res8,
                     &DAT_1468e2360);
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 0xf0) = local_res8[0];
  }
  return *(longlong *)(param_1 + 0xe8) != 0;
}



// FUNCTION 1404b1110 FUN_1404b1110 body=641 status=ok
// SIG undefined FUN_1404b1110(void)

void FUN_1404b1110(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined2 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong local_res8 [3];
  
  local_res8[0] = param_1;
  uVar3 = GetTransientPackage();
  FUN_1417846f0(uVar3,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar15 = 0;
  local_res8[1] = 0;
  uVar4 = UNamedInterfaces::GetPrivateStaticClass();
  lVar5 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x38) = lVar5;
  if (lVar5 != 0) {
    uVar14 = uVar15;
    uVar17 = uVar15;
    if (0 < *(int *)(lVar5 + 0x40)) {
      do {
        lVar8 = *(longlong *)(lVar5 + 0x38);
        if (*(int *)(lVar8 + 0x10 + uVar17) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = *(undefined2 **)(lVar8 + 8 + uVar17);
        }
        uVar3 = UObject::GetPrivateStaticClass();
        lVar6 = FUN_141799830(uVar3,0,puVar12,0,0,0);
        if (lVar6 != 0) {
          iVar1 = *(int *)(lVar5 + 0x30);
          iVar9 = iVar1 + 1;
          *(int *)(lVar5 + 0x30) = iVar9;
          if (*(int *)(lVar5 + 0x34) < iVar9) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar5 + 0x28);
          }
          lVar2 = *(longlong *)(lVar5 + 0x28);
          lVar10 = (longlong)iVar1 * 0x10;
          local_res8[1] = 0;
          *(undefined8 *)(lVar10 + lVar2) = 0;
          *(undefined8 *)(lVar10 + 8 + lVar2) = 0;
          puVar16 = (undefined8 *)(*(longlong *)(lVar5 + 0x28) + lVar10);
          *puVar16 = *(undefined8 *)(lVar8 + uVar17);
          uVar3 = GetTransientPackage();
          local_res8[2] = 0;
          FUN_1417846f0(uVar3,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          uVar3 = FUN_1417985e0(lVar6,uVar3,0,0,0,0,0,0,0);
          puVar16[1] = uVar3;
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        uVar17 = uVar17 + 0x18;
      } while ((int)uVar13 < *(int *)(lVar5 + 0x40));
      lVar5 = *(longlong *)(local_res8[0] + 0x38);
      param_1 = local_res8[0];
    }
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = param_1;
      *plVar7 = (longlong)&DAT_143f3ed00;
      plVar7[2] = (longlong)FUN_1404b2750;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0x48,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
      iVar1 = *(int *)(lVar5 + 0x50);
      *(int *)(lVar5 + 0x50) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x54) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar5 + 0x48,iVar1);
      }
      puVar16 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar5 + 0x48));
      *puVar16 = plVar7;
      *(undefined4 *)(puVar16 + 1) = 3;
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar11 = iVar1 >> 0x1f & 0xffff;
      uVar13 = iVar1 + uVar11;
      uVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar13 >> 0x10) * 8) +
               (longlong)(int)((uVar13 & 0xffff) - uVar11) * 0x18;
    }
    *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) | 0x40000000;
  }
  return;
}



// FUNCTION 1404b13a0 FUN_1404b13a0 body=266 status=ok
// SIG undefined FUN_1404b13a0(void)

undefined8 * FUN_1404b13a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x168);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f60040;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    *(undefined4 *)(puVar1 + 0x15) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
    puVar1[0x17] = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    *(undefined4 *)(puVar1 + 0x1f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xfc) = 0;
    puVar1[0x21] = 0;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    *(undefined4 *)(puVar1 + 0x29) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14c) = 0;
    puVar1[0x2b] = 0;
    *(undefined4 *)(puVar1 + 0x2c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1404b14c0 IsLoaded body=138 status=ok
// SIG undefined IsLoaded(void)

undefined1 IOnlineSubsystem::IsLoaded(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined8 *)FName::FName(local_res10,"OnlineSubsystem",1);
  uVar2 = FUN_14168dc80();
  cVar4 = FModuleManager::IsModuleLoaded(uVar2,*puVar1);
  if (cVar4 != '\0') {
    puVar1 = (undefined8 *)FName::FName(local_res10,"OnlineSubsystem",1);
    uVar2 = *puVar1;
    uVar3 = FUN_14168dc80();
    plVar6 = (longlong *)FModuleManager::GetModule(uVar3,uVar2);
    uVar5 = (**(code **)(*plVar6 + 0x70))(plVar6,*param_1);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1404b1550 FUN_1404b1550 body=317 status=ok
// SIG undefined FUN_1404b1550(void)

ulonglong FUN_1404b1550(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong *local_10;
  
  uVar8 = (**(code **)(*param_1 + 0xe0))();
  if ((char)uVar8 == '\0') {
    uVar8 = (**(code **)(*param_1 + 0x50))(param_1,&local_18);
    if (local_18 != (longlong *)0x0) {
      local_28 = (undefined8 *)0x0;
      local_20 = 0;
      (**(code **)(*local_18 + 0x70))(local_18,&local_28);
      uVar4 = *param_2;
      puVar9 = local_28 + (longlong)(int)local_20 * 2;
      for (puVar10 = local_28; puVar10 != puVar9; puVar10 = puVar10 + 2) {
        cVar6 = (*(code *)**(undefined8 **)*puVar10)((undefined8 *)*puVar10,uVar4);
        if (cVar6 != '\0') goto LAB_1404b15ea;
      }
      puVar10 = (undefined8 *)0x0;
LAB_1404b15ea:
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      return (ulonglong)(puVar10 != (undefined8 *)0x0);
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar7 = (int)lVar5 - 1;
      uVar8 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        uVar8 = (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          uVar8 = (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 1404b1690 FUN_1404b1690 body=223 status=ok
// SIG undefined FUN_1404b1690(void)

undefined8 FUN_1404b1690(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_res10;
  longlong local_18;
  undefined8 local_10;
  
  local_res10 = param_2;
  lVar4 = (**(code **)(*param_1 + 0x10))();
  if (lVar4 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar4 + 8) == 0) {
    local_18 = 0;
    local_10 = 0;
    FName::ToString(&local_res10,&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  if ((*(longlong *)(lVar4 + 8) == 0) ||
     (cVar3 = (*(code *)**(undefined8 **)*param_3)(), cVar3 == '\0')) {
    puVar2 = *(undefined8 **)(lVar4 + 0xf0);
    iVar1 = *(int *)(lVar4 + 0xf8);
    uVar5 = *param_3;
    for (puVar6 = puVar2; puVar6 != puVar2 + (longlong)iVar1 * 2; puVar6 = puVar6 + 2) {
      cVar3 = (*(code *)**(undefined8 **)*puVar6)((undefined8 *)*puVar6,uVar5);
      if (cVar3 != '\0') {
        if ((int)((longlong)puVar6 - (longlong)puVar2 >> 4) != -1) goto LAB_1404b1760;
        break;
      }
    }
    uVar5 = 0;
  }
  else {
LAB_1404b1760:
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1404b1780 FUN_1404b1780 body=632 status=ok
// SIG undefined FUN_1404b1780(void)

int FUN_1404b1780(longlong param_1,char *param_2,int param_3,undefined8 *param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined2 *puVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  char cVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  undefined1 local_res10 [8];
  undefined2 *local_58;
  undefined8 local_50;
  char *local_48;
  int local_40;
  int local_3c;
  char local_38;
  
  iVar14 = 0;
  bVar2 = false;
  *param_4 = 0;
  bVar7 = false;
  if (param_3 < 1) {
LAB_1404b19be:
    bVar2 = bVar7;
    local_38 = '\x01';
    iVar13 = iVar14;
  }
  else {
    local_3c = 1;
    local_38 = '\0';
    iVar13 = 1;
    if (*param_2 == '\v') {
      local_38 = param_3 < 2;
      if (!(bool)local_38) {
        local_3c = 2;
      }
      local_58 = (undefined2 *)0x0;
      local_50 = 0;
      local_48 = param_2;
      local_40 = param_3;
      FUN_1404acbf0(&local_48,&local_58);
      puVar4 = local_58;
      puVar12 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar12 = local_58;
      }
      plVar9 = (longlong *)FName::FName(local_res10,puVar12,1);
      lVar1 = *plVar9;
      if (puVar4 != (undefined2 *)0x0) {
        FMemory::Free(puVar4);
      }
      iVar6 = local_40;
      pcVar5 = local_48;
      plVar10 = *(longlong **)(param_1 + 0x10);
      plVar9 = plVar10 + *(int *)(param_1 + 0x18);
      for (; iVar13 = local_3c, plVar10 != plVar9; plVar10 = plVar10 + 1) {
        if (*plVar10 == lVar1) {
          iVar14 = -1;
          if ((local_38 == '\0') && (local_3c + 4 <= local_40)) {
            iVar14 = CONCAT31(CONCAT21(CONCAT11(local_48[local_3c],local_48[local_3c + 1]),
                                       local_48[local_3c + 2]),local_48[local_3c + 3]);
            cVar15 = local_38;
            iVar13 = local_3c + 4;
          }
          else {
            cVar15 = '\x01';
          }
          iVar8 = FUN_1404b0120();
          local_38 = cVar15;
          if (iVar14 == iVar8) {
            cVar11 = '\0';
            if ((cVar15 == '\0') && (iVar8 = iVar13 + 1, iVar8 <= iVar6)) {
              iVar14 = iVar13 + 2;
              cVar11 = pcVar5[iVar13];
              iVar13 = iVar8;
              if (iVar6 < iVar14) goto LAB_1404b1902;
              cVar15 = pcVar5[iVar8];
              bVar3 = false;
            }
            else {
LAB_1404b1902:
              iVar14 = iVar13;
              bVar3 = true;
              cVar15 = '\0';
            }
            if ((cVar11 == 'S') && (cVar15 == 'Q')) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            bVar7 = bVar2;
            if ((bVar3) || (iVar6 < iVar14 + 8)) goto LAB_1404b19be;
            *param_4 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(pcVar5[iVar14]
                                                                                      ,pcVar5[iVar14
                                                                                              + 1]),
                                                                             pcVar5[iVar14 + 2]),
                                                                    pcVar5[iVar14 + 3]),
                                                           pcVar5[iVar14 + 4]),pcVar5[iVar14 + 5]),
                                         pcVar5[iVar14 + 6]),pcVar5[iVar14 + 7]);
            local_38 = '\0';
            iVar13 = iVar14 + 8;
          }
          break;
        }
      }
    }
  }
  iVar14 = 0;
  if ((bVar2) && (local_38 == '\0')) {
    iVar14 = iVar13;
  }
  return iVar14;
}



// FUNCTION 1404b1a00 FUN_1404b1a00 body=652 status=ok
// SIG undefined FUN_1404b1a00(void)

int FUN_1404b1a00(longlong param_1,char *param_2,int param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  char *pcVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  undefined1 local_res10 [8];
  undefined2 *local_58;
  undefined8 local_50;
  char *local_48;
  int local_40;
  int local_3c;
  char local_38;
  
  bVar13 = false;
  if (param_3 < 1) {
    local_38 = '\x01';
    iVar9 = 0;
  }
  else {
    local_3c = 1;
    local_38 = '\0';
    iVar9 = 1;
    if (*param_2 == '\v') {
      local_38 = param_3 < 2;
      if (!(bool)local_38) {
        local_3c = 2;
      }
      local_58 = (undefined2 *)0x0;
      local_50 = 0;
      local_48 = param_2;
      local_40 = param_3;
      FUN_1404acbf0(&local_48,&local_58);
      puVar2 = local_58;
      puVar8 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar8 = local_58;
      }
      plVar5 = (longlong *)FName::FName(local_res10,puVar8,1);
      lVar1 = *plVar5;
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      iVar10 = local_40;
      pcVar3 = local_48;
      plVar6 = *(longlong **)(param_1 + 0x10);
      plVar5 = plVar6 + *(int *)(param_1 + 0x18);
      for (; iVar9 = local_3c, plVar6 != plVar5; plVar6 = plVar6 + 1) {
        if (*plVar6 == lVar1) {
          iVar11 = -1;
          if ((local_38 == '\0') && (local_3c + 4 <= local_40)) {
            iVar11 = CONCAT31(CONCAT21(CONCAT11(local_48[local_3c],local_48[local_3c + 1]),
                                       local_48[local_3c + 2]),local_48[local_3c + 3]);
            cVar12 = local_38;
            iVar9 = local_3c + 4;
          }
          else {
            cVar12 = '\x01';
          }
          iVar4 = FUN_1404b0120();
          local_38 = cVar12;
          if (iVar11 == iVar4) {
            cVar7 = '\0';
            if ((cVar12 == '\0') && (iVar11 = iVar9 + 1, iVar11 <= iVar10)) {
              iVar4 = iVar9 + 2;
              cVar7 = pcVar3[iVar9];
              iVar9 = iVar11;
              if (iVar10 < iVar4) goto LAB_1404b1b8a;
              cVar12 = pcVar3[iVar11];
            }
            else {
LAB_1404b1b8a:
              iVar4 = iVar9;
              local_38 = '\x01';
              cVar12 = '\0';
            }
            iVar9 = iVar4;
            if ((cVar7 == 'S') && (cVar12 == 'R')) {
              if ((local_38 == '\0') && (iVar4 + 8 <= iVar10)) {
                bVar13 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(pcVar3[iVar4
                                                  ],pcVar3[iVar4 + 1]),pcVar3[iVar4 + 2]),
                                                  pcVar3[iVar4 + 3]),pcVar3[iVar4 + 4]),
                                                  pcVar3[iVar4 + 5]),pcVar3[iVar4 + 6]),
                                  pcVar3[iVar4 + 7]) == *(longlong *)(param_1 + 0x38);
                iVar9 = iVar4 + 8;
              }
              else {
                bVar13 = *(longlong *)(param_1 + 0x38) == 0;
                local_38 = '\x01';
              }
            }
          }
          break;
        }
      }
    }
  }
  iVar10 = 0;
  if ((bVar13) && (local_38 == '\0')) {
    iVar10 = iVar9;
  }
  return iVar10;
}



// FUNCTION 1404b1c90 FUN_1404b1c90 body=704 status=ok
// SIG undefined FUN_1404b1c90(void)

void FUN_1404b1c90(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined8 *local_38;
  undefined8 local_30;
  
  iVar4 = 0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FConfigCacheIni::GetString
            (DAT_1468b6148,L"OnlineSubsystem",L"DefaultPlatformService",&local_38,&DAT_1468e2360);
  if (((int)local_30 != 0) && (0 < (int)local_30 + -1)) {
    plVar5 = (longlong *)FName::FName(local_res10,local_38,1);
    lVar10 = *plVar5;
    uVar6 = FUN_14168dc80();
    puVar7 = (undefined8 *)GetOnlineModuleName(local_res18,&local_38);
    uVar1 = *puVar7;
    cVar2 = FModuleManager::IsModuleLoaded(uVar6,uVar1);
    if (cVar2 == '\0') {
      FUN_141690010(uVar6,uVar1);
    }
    lVar8 = FModuleManager::GetModule(uVar6,uVar1);
    if ((lVar8 != 0) && ((int)param_1[0x10] != *(int *)((longlong)param_1 + 0xac))) {
      plVar5 = (longlong *)param_1[0x17];
      if ((longlong *)param_1[0x17] == (longlong *)0x0) {
        plVar5 = param_1 + 0x16;
      }
      iVar3 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar10 >> 0x20) + (int)lVar10) &
                      (longlong)(int)param_1[0x18] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          if (*(longlong *)(param_1[0xf] + (longlong)iVar3 * 0x18) == lVar10) {
            if ((iVar3 != -1) &&
               (lVar8 = (**(code **)(*param_1 + 0x50))(param_1,lVar10), lVar8 != 0))
            goto LAB_1404b1f1f;
            break;
          }
          iVar3 = *(int *)(param_1[0xf] + 0x10 + (longlong)iVar3 * 0x18);
        } while (iVar3 != -1);
      }
    }
  }
  if (local_38 != (undefined8 *)&DAT_143f5c190) {
    uVar9 = local_30._4_4_;
    local_30 = (ulonglong)local_30._4_4_ << 0x20;
    if (uVar9 != 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,5);
      iVar4 = (int)local_30;
      uVar9 = local_30._4_4_;
    }
    local_30 = CONCAT44(local_30._4_4_,iVar4 + 5);
    if ((int)uVar9 < iVar4 + 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
    }
    *local_38 = 0x6c006c0075004e;
    *(undefined2 *)(local_38 + 1) = 0;
  }
  puVar7 = (undefined8 *)&DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar7 = local_38;
  }
  plVar5 = (longlong *)FName::FName(local_res10,puVar7,1);
  lVar10 = *plVar5;
  uVar6 = FUN_14168dc80();
  puVar7 = (undefined8 *)GetOnlineModuleName(local_res18,&local_38);
  uVar1 = *puVar7;
  cVar2 = FModuleManager::IsModuleLoaded(uVar6,uVar1);
  if (cVar2 == '\0') {
    FUN_141690010(uVar6,uVar1);
  }
  lVar8 = FModuleManager::GetModule(uVar6,uVar1);
  if ((lVar8 != 0) && ((int)param_1[0x10] != *(int *)((longlong)param_1 + 0xac))) {
    plVar5 = (longlong *)param_1[0x17];
    if ((longlong *)param_1[0x17] == (longlong *)0x0) {
      plVar5 = param_1 + 0x16;
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)lVar10 >> 0x20) + (int)lVar10) &
                    (longlong)(int)param_1[0x18] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(param_1[0xf] + (longlong)iVar4 * 0x18) == lVar10) {
          if ((iVar4 != -1) && (lVar8 = (**(code **)(*param_1 + 0x50))(param_1,lVar10), lVar8 != 0))
          {
LAB_1404b1f1f:
            param_1[1] = lVar10;
          }
          break;
        }
        iVar4 = *(int *)(param_1[0xf] + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404b1f50 FUN_1404b1f50 body=550 status=ok
// SIG undefined FUN_1404b1f50(void)

void FUN_1404b1f50(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong *local_48;
  undefined8 local_40;
  
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FConfigCacheIni::GetArray
            (DAT_1468b6148,L"OnlineSubsystem",L"PlatformServices",&local_48,&DAT_1468e2360);
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  }
  plVar12 = local_48 + (longlong)(int)local_40 * 2;
  plVar11 = local_48;
  do {
    if (plVar11 == plVar12) {
LAB_1404b2121:
      plVar11 = local_48;
      for (iVar10 = (int)local_40; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
      return;
    }
    iVar10 = (int)plVar11[1];
    iVar4 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar10 == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*plVar11;
      }
      plVar5 = (longlong *)FName::FName(local_res8,puVar9,1);
      lVar1 = *plVar5;
      uVar6 = FUN_14168dc80();
      puVar7 = (undefined8 *)GetOnlineModuleName(local_res10,plVar11);
      uVar2 = *puVar7;
      cVar3 = FModuleManager::IsModuleLoaded(uVar6,uVar2);
      if (cVar3 == '\0') {
        FUN_141690010(uVar6,uVar2);
      }
      lVar8 = FModuleManager::GetModule(uVar6,uVar2);
      if ((lVar8 != 0) && ((int)param_1[0x10] != *(int *)((longlong)param_1 + 0xac))) {
        plVar5 = (longlong *)param_1[0x17];
        if ((longlong *)param_1[0x17] == (longlong *)0x0) {
          plVar5 = param_1 + 0x16;
        }
        iVar10 = *(int *)((longlong)plVar5 +
                         ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                         (longlong)(int)param_1[0x18] - 1U) * 4);
        if (iVar10 != -1) {
          do {
            if (*(longlong *)(param_1[0xf] + (longlong)iVar10 * 0x18) == lVar1) {
              if ((iVar10 != -1) &&
                 (lVar8 = (**(code **)(*param_1 + 0x50))(param_1,lVar1), lVar8 != 0)) {
                iVar10 = (int)param_1[3];
                *(int *)(param_1 + 3) = iVar10 + 1;
                if (*(int *)((longlong)param_1 + 0x1c) < iVar10 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (param_1 + 2,iVar10);
                }
                *(longlong *)(param_1[2] + (longlong)iVar10 * 8) = lVar1;
                goto LAB_1404b2121;
              }
              break;
            }
            iVar10 = *(int *)(param_1[0xf] + 0x10 + (longlong)iVar10 * 0x18);
          } while (iVar10 != -1);
        }
      }
    }
    plVar11 = plVar11 + 2;
  } while( true );
}



// FUNCTION 1404b2180 LoadSubsystemModule body=84 status=ok
// SIG undefined LoadSubsystemModule(void)

void LoadSubsystemModule(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 local_res10 [24];
  
  uVar2 = FUN_14168dc80();
  puVar3 = (undefined8 *)GetOnlineModuleName(local_res10,param_1);
  uVar1 = *puVar3;
  cVar4 = FModuleManager::IsModuleLoaded(uVar2,uVar1);
  if (cVar4 == '\0') {
    FUN_141690010(uVar2,uVar1);
  }
  FModuleManager::GetModule(uVar2,uVar1);
  return;
}



// FUNCTION 1404b21e0 FUN_1404b21e0 body=1252 status=ok
// SIG undefined FUN_1404b21e0(void)

undefined8 FUN_1404b21e0(longlong param_1,undefined4 *param_2)

{
  wchar_t _C;
  longlong lVar1;
  ushort uVar2;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  wint_t *pwVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  int iVar13;
  ushort local_res8 [4];
  undefined4 *local_res10;
  ushort *local_48;
  undefined8 local_40;
  
  local_res10 = param_2;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
  do {
    if (cVar3 != '\0') {
switchD_1404b232c_caseD_23:
      local_48 = (ushort *)0x0;
      local_40 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"Invalid Json Token.",0x28);
      TJsonReader<wchar_t>::SetErrorMessage(param_1,&local_48);
      if (local_48 != (ushort *)0x0) {
        FMemory::Free();
      }
      return 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
              (*(longlong **)(param_1 + 0x20),local_res8,2);
    uVar2 = local_res8[0];
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if (local_res8[0] == 0) goto switchD_1404b232c_caseD_23;
    if (local_res8[0] == 10) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    else if ((0x20 < local_res8[0]) ||
            ((0x100002200U >> ((ulonglong)local_res8[0] & 0x3f) & 1) == 0)) {
      if (((ushort)(local_res8[0] - 0x2b) < 0x3b) &&
         ((0x400000004007fedU >> ((ulonglong)(local_res8[0] - 0x2b) & 0x3f) & 1) != 0)) {
        cVar3 = FUN_1404b39e0(param_1,local_res8[0]);
        if (cVar3 == '\0') {
          return 0;
        }
        *param_2 = 8;
        return 1;
      }
      switch(local_res8[0]) {
      case 0x22:
        cVar3 = FUN_1404b3d30(param_1);
        if (cVar3 == '\0') {
          return 0;
        }
        *param_2 = 7;
        return 1;
      default:
        goto switchD_1404b232c_caseD_23;
      case 0x2c:
        *param_2 = 1;
        return 1;
      case 0x3a:
        *param_2 = 6;
        return 1;
      case 0x46:
      case 0x4e:
      case 0x54:
      case 0x66:
      case 0x6e:
      case 0x74:
        local_48 = (ushort *)0x0;
        local_40 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        puVar11 = local_48;
        *local_48 = uVar2;
        local_48[1] = 0;
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
        iVar10 = (int)local_40;
        goto joined_r0x0001404b2464;
      case 0x5b:
        *param_2 = 4;
        iVar10 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar10 + 1;
        if (*(int *)(param_1 + 0x14) < iVar10 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar10);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar10 * 4) = 5;
        return 1;
      case 0x5d:
        *param_2 = 5;
        break;
      case 0x7b:
        *param_2 = 2;
        iVar10 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar10 + 1;
        if (*(int *)(param_1 + 0x14) < iVar10 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar10);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar10 * 4) = 6;
        return 1;
      case 0x7d:
        *param_2 = 3;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
      return 1;
    }
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
  } while( true );
joined_r0x0001404b2464:
  if (cVar3 != '\0') goto LAB_1404b2514;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))(*(longlong **)(param_1 + 0x20),local_res8,2)
  ;
  uVar2 = local_res8[0];
  if ((0x19 < (ushort)(local_res8[0] - 0x61)) && (0x19 < (ushort)(local_res8[0] - 0x41))) {
    lVar1 = **(longlong **)(param_1 + 0x20);
    lVar6 = (**(code **)(lVar1 + 0x90))();
    (**(code **)(lVar1 + 0xa8))(*(undefined8 *)(param_1 + 0x20),lVar6 + -2);
    goto LAB_1404b2514;
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  if (local_res8[0] != 0) {
    iVar13 = iVar10 + -1;
    if (iVar10 < 1) {
      iVar13 = 0;
    }
    iVar10 = (iVar10 < 1) + 1 + iVar10;
    local_40 = CONCAT44(local_40._4_4_,iVar10);
    if (local_40._4_4_ < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
      puVar11 = local_48;
      iVar10 = (int)local_40;
    }
    puVar11[iVar13] = uVar2;
    puVar11[(longlong)iVar13 + 1] = 0;
  }
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
  goto joined_r0x0001404b2464;
LAB_1404b2514:
  pwVar7 = L"False";
  puVar12 = &DAT_143f3eda8;
  if (iVar10 != 0) {
    puVar12 = puVar11;
  }
  do {
    _C = *(wchar_t *)((longlong)(puVar12 + -0xa1fb0548) + (longlong)pwVar7);
    if ((_C == L'\0') && (*pwVar7 == L'\0')) goto LAB_1404b256e;
    if (_C != *pwVar7) {
      wVar4 = towlower(_C);
      wVar5 = towlower(*pwVar7);
      if (wVar4 != wVar5) break;
    }
    pwVar7 = pwVar7 + 1;
  } while( true );
  if (wVar4 != wVar5) {
    pwVar9 = &DAT_143f60aa0;
    puVar12 = &DAT_143f3eda8;
    if (iVar10 != 0) {
      puVar12 = puVar11;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar12 + -0xa1fb0550) + (longlong)pwVar9);
      if ((wVar4 == 0) && (*pwVar9 == 0)) goto LAB_1404b25de;
      if (wVar4 != *pwVar9) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar9);
        if (wVar4 != wVar5) goto LAB_1404b25d3;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
LAB_1404b256e:
  *(undefined1 *)(param_1 + 0x68) = 0;
  uVar8 = 1;
  *local_res10 = 10;
  goto LAB_1404b269a;
LAB_1404b2636:
  if (wVar4 == wVar5) {
LAB_1404b2640:
    uVar8 = 1;
    *local_res10 = 0xb;
  }
  else {
    local_40 = 0x4a;
    local_48 = (ushort *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy
              (local_48,L"Invalid Json Token. Check that your member names have quotes around them!"
               ,0x94);
    TJsonReader<wchar_t>::SetErrorMessage(param_1,&local_48);
    if (local_48 != (ushort *)0x0) {
      FMemory::Free();
    }
    uVar8 = 0;
  }
  goto LAB_1404b269a;
LAB_1404b25d3:
  if (wVar4 != wVar5) {
    pwVar9 = &DAT_143f60758;
    puVar12 = &DAT_143f3eda8;
    if (iVar10 != 0) {
      puVar12 = puVar11;
    }
    do {
      wVar4 = *(wint_t *)((longlong)pwVar9 + (longlong)(puVar12 + -0xa1fb03ac));
      if ((wVar4 == 0) && (*pwVar9 == 0)) goto LAB_1404b2640;
      if (wVar4 != *pwVar9) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar9);
        if (wVar4 != wVar5) goto LAB_1404b2636;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
LAB_1404b25de:
  *(undefined1 *)(param_1 + 0x68) = 1;
  uVar8 = 1;
  *local_res10 = 9;
LAB_1404b269a:
  if (puVar11 != (ushort *)0x0) {
    FMemory::Free(puVar11);
  }
  return uVar8;
}



// FUNCTION 1404b2750 FUN_1404b2750 body=110 status=ok
// SIG undefined FUN_1404b2750(void)

void FUN_1404b2750(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) & 0xbfffffff;
    FUN_140483870(*(longlong *)(param_1 + 0x38) + 0x48,param_1);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1404b27c0 FUN_1404b27c0 body=4630 status=ok
// SIG undefined FUN_1404b27c0(void)

void FUN_1404b27c0(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int *piVar6;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146852c88) && (_Init_thread_header(&DAT_146852c88), DAT_146852c88 == -1)) {
    FName::FName(&DAT_146852c80,"Online",1);
    _Init_thread_footer(&DAT_146852c88);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852c80), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x188))(param_1,param_3,param_4,param_5,param_6);
  }
  if ((*piVar6 < DAT_146852c98) && (_Init_thread_header(&DAT_146852c98), DAT_146852c98 == -1)) {
    FName::FName(&DAT_146852c90,"OnlineSession",1);
    _Init_thread_footer(&DAT_146852c98);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852c90), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x18))(param_1,&local_158);
    if (local_158 != (longlong *)0x0) {
      (**(code **)(*local_158 + 8))(local_158,param_3,param_4,param_5,param_6);
    }
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)local_150 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
  }
  if ((*piVar6 < DAT_146852ca8) && (_Init_thread_header(&DAT_146852ca8), DAT_146852ca8 == -1)) {
    FName::FName(&DAT_146852ca0,"OnlineFriends",1);
    _Init_thread_footer(&DAT_146852ca8);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852ca0), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_148);
    if (local_148 != (longlong *)0x0) {
      (**(code **)(*local_148 + 8))(local_148,param_3,param_4,param_5,param_6);
    }
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_140 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar2 = (int *)((longlong)local_140 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
  }
  if ((*piVar6 < DAT_146852cb8) && (_Init_thread_header(&DAT_146852cb8), DAT_146852cb8 == -1)) {
    FName::FName(&DAT_146852cb0,"OnlineParty",1);
    _Init_thread_footer(&DAT_146852cb8);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852cb0), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x30))(param_1,&local_138);
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 8))(local_138,param_3,param_4,param_5,param_6);
    }
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_130 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)local_130 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
  }
  if ((*piVar6 < DAT_146852cc8) && (_Init_thread_header(&DAT_146852cc8), DAT_146852cc8 == -1)) {
    FName::FName(&DAT_146852cc0,"OnlineLeaderboard",1);
    _Init_thread_footer(&DAT_146852cc8);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852cc0), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x38))(param_1,&local_128);
    if (local_128 != (longlong *)0x0) {
      (**(code **)(*local_128 + 8))(local_128,param_3,param_4,param_5,param_6);
    }
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)local_120 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
  }
  if ((*piVar6 < DAT_146852cd8) && (_Init_thread_header(&DAT_146852cd8), DAT_146852cd8 == -1)) {
    FName::FName(&DAT_146852cd0,"OnlineVoice",1);
    _Init_thread_footer(&DAT_146852cd8);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852cd0), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x40))(param_1,&local_118);
    if (local_118 != (longlong *)0x0) {
      (**(code **)(*local_118 + 8))(local_118,param_3,param_4,param_5,param_6);
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_110 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)local_110 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
  }
  if ((*piVar6 < DAT_146852ce8) && (_Init_thread_header(&DAT_146852ce8), DAT_146852ce8 == -1)) {
    FName::FName(&DAT_146852ce0,"OnlineExternalUI",1);
    _Init_thread_footer(&DAT_146852ce8);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852ce0), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x48))(param_1,&local_108);
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 8))(local_108,param_3,param_4,param_5,param_6);
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)local_100 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
  }
  if ((*piVar6 < DAT_146852cf8) && (_Init_thread_header(&DAT_146852cf8), DAT_146852cf8 == -1)) {
    FName::FName(&DAT_146852cf0,"OnlineIdentity",1);
    _Init_thread_footer(&DAT_146852cf8);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852cf0), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_f8);
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 8))(local_f8,param_3,param_4,param_5,param_6);
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
  }
  if ((*piVar6 < DAT_146852d08) && (_Init_thread_header(&DAT_146852d08), DAT_146852d08 == -1)) {
    FName::FName(&DAT_146852d00,"OnlineTitleFile",1);
    _Init_thread_footer(&DAT_146852d08);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852d00), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x58))(param_1,&local_e8);
    if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 8))(local_e8,param_3,param_4,param_5,param_6);
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  if ((*piVar6 < DAT_146852d18) && (_Init_thread_header(&DAT_146852d18), DAT_146852d18 == -1)) {
    FName::FName(&DAT_146852d10,"OnlineEvents",1);
    _Init_thread_footer(&DAT_146852d18);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852d10), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x60))(param_1,&local_d8);
    if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 8))(local_d8,param_3,param_4,param_5,param_6);
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
  }
  if ((*piVar6 < DAT_146852d28) && (_Init_thread_header(&DAT_146852d28), DAT_146852d28 == -1)) {
    FName::FName(&DAT_146852d20,"OnlineAchievements",1);
    _Init_thread_footer(&DAT_146852d28);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852d20), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x68))(param_1,&local_c8);
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 8))(local_c8,param_3,param_4,param_5,param_6);
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
  }
  if ((*piVar6 < DAT_146852d38) && (_Init_thread_header(&DAT_146852d38), DAT_146852d38 == -1)) {
    FName::FName(&DAT_146852d30,"OnlinePresence",1);
    _Init_thread_footer(&DAT_146852d38);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852d30), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x70))(param_1,&local_b8);
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 8))(local_b8,param_3,param_4,param_5,param_6);
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  if ((*piVar6 < DAT_146852d48) && (_Init_thread_header(&DAT_146852d48), DAT_146852d48 == -1)) {
    FName::FName(&DAT_146852d40,"OnlineGameClip",1);
    _Init_thread_footer(&DAT_146852d48);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852d40), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x78))(param_1,&local_a8);
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 8))(local_a8,param_3,param_4,param_5,param_6);
    }
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
  }
  if ((*piVar6 < DAT_146852d58) && (_Init_thread_header(&DAT_146852d58), DAT_146852d58 == -1)) {
    FName::FName(&DAT_146852d50,"OnlineSystem",1);
    _Init_thread_footer(&DAT_146852d58);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852d50), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x80))(param_1,&local_98);
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 8))(local_98,param_3,param_4,param_5,param_6);
    }
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
  }
  if ((*piVar6 < DAT_146852d68) && (_Init_thread_header(&DAT_146852d68), DAT_146852d68 == -1)) {
    FName::FName(&DAT_146852d60,"OnlineFeed",1);
    _Init_thread_footer(&DAT_146852d68);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852d60), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x88))(param_1,&local_88);
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 8))(local_88,param_3,param_4,param_5,param_6);
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  if ((*piVar6 < DAT_146852d78) && (_Init_thread_header(&DAT_146852d78), DAT_146852d78 == -1)) {
    FName::FName(&DAT_146852d70,"OnlineTransaction",1);
    _Init_thread_footer(&DAT_146852d78);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852d70), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x90))(param_1,&local_78);
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 8))(local_78,param_3,param_4,param_5,param_6);
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  if ((*piVar6 < DAT_146852d88) && (_Init_thread_header(&DAT_146852d88), DAT_146852d88 == -1)) {
    FName::FName(&DAT_146852d80,"OnlineBroadcasting",1);
    _Init_thread_footer(&DAT_146852d88);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852d80), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x98))(param_1,&local_68);
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 8))(local_68,param_3,param_4,param_5,param_6);
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  if ((*piVar6 < DAT_146852d98) && (_Init_thread_header(&DAT_146852d98), DAT_146852d98 == -1)) {
    FName::FName(&DAT_146852d90,"OnlineStats",1);
    _Init_thread_footer(&DAT_146852d98);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852d90), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0xc0))(param_1,&local_58);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 8))(local_58,param_3,param_4,param_5,param_6);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  if ((*piVar6 < DAT_146852da8) && (_Init_thread_header(&DAT_146852da8), DAT_146852da8 == -1)) {
    FName::FName(&DAT_146852da0,"OnlineStreaming",1);
    _Init_thread_footer(&DAT_146852da8);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852da0), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0xa0))(param_1,&local_48);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 8))(local_48,param_3,param_4,param_5,param_6);
    }
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
  }
  if ((*piVar6 < DAT_146852db8) && (_Init_thread_header(&DAT_146852db8), DAT_146852db8 == -1)) {
    FName::FName(&DAT_146852db0,"OnlineContent",1);
    _Init_thread_footer(&DAT_146852db8);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852db0), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0xa8))(param_1,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 8))(local_38,param_3,param_4,param_5,param_6);
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar6 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1404b39e0 FUN_1404b39e0 body=803 status=ok
// SIG undefined FUN_1404b39e0(void)

undefined8 FUN_1404b39e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  wchar_t *pwVar4;
  wchar_t wVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar10;
  wchar_t *pwVar11;
  double dVar12;
  ushort local_res8 [4];
  ushort local_res10;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *pwVar9;
  
  local_res10 = (ushort)param_2;
  pwVar4 = (wchar_t *)0x0;
  param_2 = param_2 & 0xffff;
  local_48 = (wchar_t *)0x0;
  local_40 = (ulonglong)(uint)local_40;
  bVar2 = true;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
  pwVar9 = pwVar4;
  pwVar11 = pwVar4;
  do {
    if (cVar3 != '\0') {
      local_48 = (wchar_t *)0x0;
      local_40 = 0x1d;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar6 = 0x3a;
      pwVar4 = L"Number Token Abruptly Ended.";
LAB_1404b3c15:
      FGenericPlatformString::Memcpy(local_48,pwVar4,uVar6);
      TJsonReader<wchar_t>::SetErrorMessage(param_1,&local_48);
      if (local_48 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      uVar6 = 0;
LAB_1404b3c3a:
      if (pwVar11 != (wchar_t *)0x0) {
        FMemory::Free(pwVar11);
      }
      return uVar6;
    }
    iVar10 = 0;
    if (bVar2) {
      local_res8[0] = (ushort)param_2;
      bVar2 = false;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                (*(longlong **)(param_1 + 0x20),local_res8,2);
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      param_2 = (uint)local_res8[0];
    }
    iVar7 = (int)pwVar9;
    uVar8 = (uint)pwVar4;
    if ((0x3a < (ushort)(param_2 - 0x2b)) ||
       ((0x400000004007fedU >> ((ulonglong)(param_2 - 0x2b & 0xffff) & 0x3f) & 1) == 0)) {
      lVar1 = **(longlong **)(param_1 + 0x20);
      (**(code **)(lVar1 + 0x90))();
      (**(code **)(lVar1 + 0xa8))(*(undefined8 *)(param_1 + 0x20));
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
      if ((8 < uVar8) || ((0x14cU >> uVar8 & 1) == 0)) {
LAB_1404b3cda:
        local_48 = (wchar_t *)0x0;
        local_40 = 0x21;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        uVar6 = 0x42;
        pwVar4 = L"Poorly formed Json Number Token.";
        goto LAB_1404b3c15;
      }
      pwVar4 = L"";
      if (iVar7 != 0) {
        pwVar4 = pwVar11;
      }
      dVar12 = wcstod(pwVar4,(wchar_t **)0x0);
      *(double *)(param_1 + 0x58) = dVar12;
      uVar6 = 1;
      goto LAB_1404b3c3a;
    }
    wVar5 = (wchar_t)param_2;
    switch(uVar8) {
    case 0:
      if (wVar5 != L'-') goto switchD_1404b3ac4_caseD_1;
      pwVar4 = (wchar_t *)0x1;
      goto LAB_1404b3b76;
    case 1:
switchD_1404b3ac4_caseD_1:
      if (wVar5 != L'0') {
        if (8 < (ushort)(wVar5 + L'ￏ')) goto LAB_1404b3cda;
        pwVar4 = (wchar_t *)0x3;
        break;
      }
      pwVar4 = (wchar_t *)0x2;
      goto LAB_1404b3b76;
    case 2:
switchD_1404b3ac4_caseD_2:
      if (wVar5 == L'.') {
        pwVar4 = (wchar_t *)&DAT_00000004;
        goto LAB_1404b3b76;
      }
LAB_1404b3b07:
      if ((wVar5 + L'ﾻ' & 0xffdfU) != 0) goto LAB_1404b3cda;
      pwVar4 = (wchar_t *)0x5;
      break;
    case 3:
      if (9 < (ushort)(wVar5 + L'￐')) goto switchD_1404b3ac4_caseD_2;
      pwVar4 = (wchar_t *)0x3;
      break;
    case 4:
      if (9 < (ushort)(wVar5 + L'￐')) goto LAB_1404b3cda;
      pwVar4 = (wchar_t *)&DAT_00000006;
      break;
    case 5:
      if ((wVar5 + L'ￕ' & 0xfffdU) != 0) goto switchD_1404b3ac4_caseD_7;
      pwVar4 = (wchar_t *)0x7;
      break;
    case 6:
      if (9 < (ushort)(wVar5 + L'￐')) goto LAB_1404b3b07;
      pwVar4 = (wchar_t *)&DAT_00000006;
      break;
    case 7:
    case 8:
switchD_1404b3ac4_caseD_7:
      if (9 < (ushort)(wVar5 + L'￐')) goto LAB_1404b3cda;
      pwVar4 = (wchar_t *)&DAT_00000008;
      break;
    default:
      local_48 = (wchar_t *)0x0;
      local_40 = 0x2c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar6 = 0x58;
      pwVar4 = L"Unknown state reached in Json Number Token.";
      goto LAB_1404b3c15;
    }
    if (wVar5 != L'\0') {
LAB_1404b3b76:
      if (0 < iVar7) {
        iVar10 = iVar7 + -1;
      }
      uVar8 = (iVar7 < 1) + 1 + iVar7;
      local_40 = CONCAT44(local_40._4_4_,uVar8);
      if (local_40._4_4_ < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
        pwVar11 = local_48;
        uVar8 = (uint)local_40;
      }
      pwVar9 = (wchar_t *)(ulonglong)uVar8;
      pwVar11[iVar10] = wVar5;
      pwVar11[(longlong)iVar10 + 1] = L'\0';
    }
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
    param_2 = (uint)local_res10;
  } while( true );
}



// FUNCTION 1404b3d30 FUN_1404b3d30 body=534 status=ok
// SIG undefined FUN_1404b3d30(void)

/* WARNING: Exceeded maximum restarts with more pending */

undefined8 FUN_1404b3d30(longlong param_1)

{
  short sVar1;
  char cVar2;
  wchar_t *pwVar3;
  ulonglong *puVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  short local_res8 [4];
  ulonglong local_48;
  uint local_40;
  uint uStack_3c;
  
  uVar8 = 0;
  local_48 = 0;
  uStack_3c = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
  uVar6 = uVar8;
  uVar9 = uVar8;
  uVar11 = uVar8;
  do {
    if (cVar2 != '\0') {
      local_48 = 0;
      local_40 = 0x1d;
      uStack_3c = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      pwVar3 = L"String Token Abruptly Ended.";
      uVar7 = 0x3a;
LAB_1404b40ee:
      FGenericPlatformString::Memcpy(local_48,pwVar3,uVar7);
      TJsonReader<wchar_t>::SetErrorMessage(param_1,&local_48);
      if (local_48 != 0) {
        FMemory::Free();
      }
      uVar7 = 0;
LAB_1404b4113:
      if (uVar11 != 0) {
        FMemory::Free(uVar11);
      }
      return uVar7;
    }
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
              (*(longlong **)(param_1 + 0x20),local_res8,2);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    iVar5 = (int)uVar6;
    if (local_res8[0] == 0x22) {
      puVar4 = (ulonglong *)(param_1 + 0x48);
      if (puVar4 != &local_48) {
        if (*puVar4 != 0) {
          FMemory::Free();
        }
        *puVar4 = uVar11;
        *(int *)(param_1 + 0x50) = iVar5;
        *(int *)(param_1 + 0x54) = (int)uVar9;
        uVar11 = uVar8;
      }
      uVar7 = 1;
      goto LAB_1404b4113;
    }
    if (local_res8[0] == 0x5c) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                (*(longlong **)(param_1 + 0x20),local_res8,2);
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      switch(local_res8[0]) {
      default:
        local_48 = 0;
        local_40 = 0x17;
        uStack_3c = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        uVar7 = 0x2e;
        pwVar3 = L"Bad Json escaped char.";
        goto LAB_1404b40ee;
      case -0xbad1abe1bad1541f:
        break;
      }
    }
    sVar1 = local_res8[0];
                    /* WARNING: Calculation of case label failed */
    if (local_res8[0] != 0) {
      iVar10 = iVar5 + -1;
      if (iVar5 < 1) {
        iVar10 = 0;
      }
      local_40 = (iVar5 < 1) + 1 + iVar5;
      if ((int)uVar9 < (int)local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
        uVar9 = (ulonglong)uStack_3c;
        uVar11 = local_48;
      }
      uVar6 = (ulonglong)local_40;
      *(short *)(uVar11 + (longlong)iVar10 * 2) = sVar1;
      *(undefined2 *)(uVar11 + 2 + (longlong)iVar10 * 2) = 0;
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
  } while( true );
}



// FUNCTION 1404b4250 FUN_1404b4250 body=197 status=ok
// SIG undefined FUN_1404b4250(void)

void FUN_1404b4250(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  ushort local_res8 [4];
  
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
  while( true ) {
    if (cVar3 != '\0') {
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
              (*(longlong **)(param_1 + 0x20),local_res8,2);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if (local_res8[0] == 10) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      bVar2 = true;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    else if ((local_res8[0] < 0x21) &&
            ((0x100002200U >> ((ulonglong)local_res8[0] & 0x3f) & 1) != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    lVar1 = **(longlong **)(param_1 + 0x20);
    if (!bVar2) break;
    cVar3 = (**(code **)(lVar1 + 0xa0))();
  }
  lVar4 = (**(code **)(lVar1 + 0x90))();
  (**(code **)(lVar1 + 0xa8))(*(undefined8 *)(param_1 + 0x20),lVar4 + -2);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  return;
}



// FUNCTION 1404b4320 FUN_1404b4320 body=1849 status=ok
// SIG undefined FUN_1404b4320(void)

void FUN_1404b4320(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined2 *puVar3;
  wint_t wVar4;
  wint_t wVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  wint_t *pwVar16;
  wchar_t *pwVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  undefined1 local_res10 [8];
  longlong *local_res18;
  longlong local_res20;
  undefined8 *puVar23;
  undefined4 uVar24;
  wchar_t *local_108;
  int local_100;
  int local_fc;
  wchar_t *local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  ulonglong local_e0;
  wchar_t *local_d8;
  ulonglong local_d0;
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  ulonglong local_b0;
  wchar_t *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  ulonglong local_90;
  wchar_t *local_88;
  int local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  ulonglong local_70;
  undefined2 *local_68;
  undefined8 local_60;
  longlong *local_58;
  wchar_t **local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  
  local_98 = (longlong *)0x0;
  local_90 = 0;
  puVar23 = &DAT_1468e2360;
  FConfigCacheIni::GetArray
            (DAT_1468b6148,L"OnlineSubsystem",L"ConfigDefinedPlatformServices",&local_98,
             &DAT_1468e2360);
  uVar15 = (ulonglong)(int)local_90;
  local_res18 = local_98;
  local_58 = local_98 + uVar15 * 2;
  if (local_98 != local_58) {
    local_res20 = param_1 + 0x28;
LAB_1404b43d0:
    pwVar21 = (wchar_t *)0x0;
    FString::TrimStartAndEnd(local_res18,&local_108);
    local_a8 = (wchar_t *)0x0;
    local_a0 = 0;
    local_c8 = (wchar_t *)0x0;
    local_c0 = 0;
    iVar6 = 0;
    if (local_100 == 0) {
      pwVar20 = L"";
      iVar7 = iVar6;
    }
    else {
      pwVar20 = local_108;
      iVar7 = local_100 + -1;
    }
    local_88 = (wchar_t *)0x0;
    local_7c = 0;
    if (1 < iVar7) {
      iVar7 = 1;
    }
    pwVar17 = (wchar_t *)(ulonglong)(iVar7 + 1);
    if (iVar7 == 0) {
      pwVar17 = pwVar21;
    }
    iVar10 = (int)pwVar17;
    pwVar17 = pwVar21;
    local_80 = iVar10;
    if ((0 < iVar10) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0), iVar10 = local_80,
       pwVar17 = local_88, 0 < local_80)) {
      wcsncpy(local_88,pwVar20,(longlong)iVar7);
      pwVar17[iVar7] = L'\0';
    }
    pwVar16 = &DAT_143f5aaa4;
    pwVar20 = L"";
    if (iVar10 != 0) {
      pwVar20 = pwVar17;
    }
    do {
      wVar4 = *(wint_t *)((longlong)pwVar16 + (longlong)(pwVar20 + -0xa1fad552));
      if ((wVar4 == 0) && (iVar7 = iVar6, *pwVar16 == 0)) goto LAB_1404b44b0;
      if (wVar4 != *pwVar16) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar16);
        if (wVar4 != wVar5) goto LAB_1404b44a8;
      }
      pwVar16 = pwVar16 + 1;
    } while( true );
  }
LAB_1404b4a0b:
  uVar14 = (uint)uVar15;
  plVar18 = local_98;
  while (uVar14 != 0) {
    if (*plVar18 != 0) {
      FMemory::Free();
    }
    plVar18 = plVar18 + 2;
    uVar14 = (int)uVar15 - 1;
    uVar15 = (ulonglong)uVar14;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  return;
LAB_1404b44a8:
  iVar7 = (uint)wVar4 - (uint)wVar5;
LAB_1404b44b0:
  if (pwVar17 != (wchar_t *)0x0) {
    FMemory::Free(pwVar17);
  }
  if (iVar7 == 0) {
    if (local_100 == 0) {
      pwVar20 = L"";
      pwVar17 = pwVar21;
    }
    else {
      pwVar17 = (wchar_t *)(ulonglong)(local_100 - 1);
      pwVar20 = local_108;
    }
    iVar10 = (int)pwVar17 + -1;
    local_b8 = (wchar_t *)0x0;
    local_b0 = local_b0 & 0xffffffff;
    iVar7 = iVar6;
    if (-1 < iVar10) {
      iVar7 = iVar10;
    }
    pwVar20 = pwVar20 + ((longlong)(int)pwVar17 - (longlong)iVar7);
    pwVar19 = pwVar21;
    pwVar17 = pwVar21;
    iVar7 = iVar6;
    if ((pwVar20 != (wchar_t *)0x0) && (*pwVar20 != L'\0')) {
      lVar9 = -1;
      do {
        lVar2 = lVar9 + 1;
        lVar9 = lVar9 + 1;
      } while (pwVar20[lVar2] != L'\0');
      uVar12 = (int)lVar9 + 1;
      local_b0 = (ulonglong)uVar12;
      pwVar22 = pwVar21;
      uVar14 = uVar12;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        pwVar22 = (wchar_t *)(local_b0 >> 0x20);
        uVar14 = (uint)local_b0;
      }
      pwVar17 = local_b8;
      pwVar19 = (wchar_t *)(ulonglong)uVar14;
      iVar7 = (int)pwVar22;
      FGenericPlatformString::Memcpy(local_b8,pwVar20,(longlong)(int)uVar12 * 2);
    }
    if (local_108 != (wchar_t *)0x0) {
      FMemory::Free(local_108);
    }
    local_b8 = (wchar_t *)0x0;
    local_b0 = 0;
    local_108 = pwVar17;
    local_100 = (int)pwVar19;
    local_fc = iVar7;
  }
  if (local_100 == 0) {
    pwVar20 = L"";
    iVar7 = iVar6;
  }
  else {
    pwVar20 = local_108;
    iVar7 = local_100 + -1;
  }
  local_78 = (wchar_t *)0x0;
  local_70 = 0;
  iVar10 = iVar7;
  if (1 < iVar7) {
    iVar10 = 1;
  }
  pwVar20 = pwVar20 + ((longlong)iVar7 - (longlong)iVar10);
  pwVar17 = pwVar21;
  if ((pwVar20 != (wchar_t *)0x0) && (*pwVar20 != L'\0')) {
    lVar9 = -1;
    do {
      lVar2 = lVar9 + 1;
      lVar9 = lVar9 + 1;
    } while (pwVar20[lVar2] != L'\0');
    uVar12 = (int)lVar9 + 1;
    local_70 = (ulonglong)uVar12;
    uVar14 = uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      uVar14 = (uint)local_70;
    }
    pwVar19 = local_78;
    FGenericPlatformString::Memcpy(local_78,pwVar20,(longlong)(int)uVar12 * 2);
    pwVar17 = pwVar19;
    if (uVar14 != 0) goto LAB_1404b4639;
  }
  pwVar19 = L"";
LAB_1404b4639:
  pwVar16 = &DAT_143f5aab4;
  do {
    uVar24 = (undefined4)((ulonglong)puVar23 >> 0x20);
    wVar4 = *(wint_t *)((longlong)pwVar16 + (longlong)(pwVar19 + -0xa1fad55a));
    if ((wVar4 == 0) && (pwVar20 = pwVar21, *pwVar16 == 0)) goto LAB_1404b467d;
    if (wVar4 != *pwVar16) {
      wVar4 = towlower(wVar4);
      wVar5 = towlower(*pwVar16);
      uVar24 = (undefined4)((ulonglong)puVar23 >> 0x20);
      if (wVar4 != wVar5) break;
    }
    pwVar16 = pwVar16 + 1;
  } while( true );
  pwVar20 = (wchar_t *)(ulonglong)((uint)wVar4 - (uint)wVar5);
LAB_1404b467d:
  if (pwVar17 != (wchar_t *)0x0) {
    FMemory::Free(pwVar17);
  }
  if ((int)pwVar20 == 0) {
    if (local_100 == 0) {
      pwVar20 = L"";
    }
    else {
      iVar6 = local_100 + -1;
      pwVar20 = local_108;
    }
    local_f8 = (wchar_t *)0x0;
    pwVar17 = pwVar21;
    if (-1 < (int)(iVar6 - 1U)) {
      pwVar17 = (wchar_t *)(ulonglong)(iVar6 - 1U);
    }
    iVar6 = (int)pwVar17;
    local_f0 = (wchar_t *)(ulonglong)(iVar6 + 1);
    if (iVar6 == 0) {
      local_f0 = pwVar21;
    }
    iVar7 = (int)local_f0;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
      pwVar21 = local_f8;
      iVar7 = (int)local_f0;
      if (0 < (int)local_f0) {
        wcsncpy(local_f8,pwVar20,(longlong)iVar6);
        pwVar21[iVar6] = L'\0';
      }
    }
    if (local_108 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_fc = local_f0._4_4_;
    local_f0 = (wchar_t *)0x0;
    local_f8 = (wchar_t *)0x0;
    local_108 = pwVar21;
    local_100 = iVar7;
  }
  local_68 = (undefined2 *)0x0;
  local_60 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  puVar3 = local_68;
  FGenericPlatformString::Memcpy(local_68,&DAT_143f5ab44,4);
  iVar6 = (int)local_60;
  puVar23 = (undefined8 *)CONCAT44(uVar24,0xffffffff);
  puVar11 = &DAT_143f3eda8;
  if ((int)local_60 != 0) {
    puVar11 = puVar3;
  }
  iVar7 = FUN_141592950(&local_108,puVar11,1,0,puVar23);
  if (iVar7 < 0) {
    bVar1 = false;
  }
  else {
    if (local_100 == 0) {
      pwVar21 = L"";
      iVar10 = 0;
    }
    else {
      iVar10 = local_100 + -1;
      pwVar21 = local_108;
    }
    local_e8 = (wchar_t *)0x0;
    if (iVar7 < iVar10) {
      iVar10 = iVar7;
    }
    uVar14 = iVar10 + 1;
    if (iVar10 == 0) {
      uVar14 = 0;
    }
    local_e0 = (ulonglong)uVar14;
    pwVar20 = local_e8;
    if (0 < (int)uVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      pwVar20 = local_e8;
      uVar14 = (uint)local_e0;
      if (0 < (int)(uint)local_e0) {
        wcsncpy(local_e8,pwVar21,(longlong)iVar10);
        pwVar20[iVar10] = L'\0';
      }
    }
    if (local_a8 != (wchar_t *)0x0) {
      FMemory::Free(local_a8);
    }
    iVar10 = iVar6 + -1;
    local_e8 = (wchar_t *)0x0;
    local_a0 = CONCAT44((int)(local_e0 >> 0x20),uVar14);
    local_e0 = 0;
    if (iVar6 == 0) {
      iVar10 = 0;
    }
    uVar8 = iVar10 + iVar7;
    pwVar21 = (wchar_t *)0x0;
    uVar14 = uVar8 + 0x7fffffff;
    uVar12 = local_100 - 1;
    if (local_100 == 0) {
      uVar12 = 0;
    }
    if (uVar8 < uVar12) {
      uVar12 = uVar8;
    }
    uVar8 = local_100 - 1;
    if (local_100 == 0) {
      uVar8 = 0;
    }
    uVar13 = uVar12;
    if ((uVar12 <= uVar14) && (uVar13 = uVar8, uVar14 < uVar8)) {
      uVar13 = uVar14;
    }
    local_d8 = (wchar_t *)0x0;
    pwVar17 = L"";
    if (local_100 != 0) {
      pwVar17 = local_108;
    }
    iVar6 = uVar13 - uVar12;
    uVar14 = iVar6 + 1;
    if (iVar6 == 0) {
      uVar14 = 0;
    }
    local_d0 = (ulonglong)uVar14;
    local_a8 = pwVar20;
    if (0 < (int)uVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
      pwVar21 = local_d8;
      uVar14 = (uint)local_d0;
      if (0 < (int)(uint)local_d0) {
        wcsncpy(local_d8,pwVar17 + (int)uVar12,(longlong)iVar6);
        pwVar21[iVar6] = L'\0';
      }
    }
    if (local_c8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    bVar1 = true;
    uVar15 = local_d0 >> 0x20;
    local_d0 = 0;
    local_d8 = (wchar_t *)0x0;
    local_c0 = CONCAT44((int)uVar15,uVar14);
    local_c8 = pwVar21;
  }
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  if (bVar1) {
    FString::TrimStartAndEndInline(&local_a8);
    FString::TrimStartAndEndInline(&local_c8);
  }
  local_50 = &local_a8;
  pwVar21 = L"";
  if ((int)local_c0 != 0) {
    pwVar21 = local_c8;
  }
  local_48 = FName::FName(local_40,pwVar21,1);
  FUN_1404a9290(local_res20,local_res10,&local_50);
  if (local_c8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_a8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_108 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  local_res18 = local_res18 + 2;
  if (local_res18 == local_58) goto code_r0x0001404b49ec;
  goto LAB_1404b43d0;
code_r0x0001404b49ec:
  uVar15 = local_90 & 0xffffffff;
  goto LAB_1404b4a0b;
}



// FUNCTION 1404b4a60 FUN_1404b4a60 body=944 status=ok
// SIG undefined FUN_1404b4a60(void)

char FUN_1404b4a60(longlong param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  longlong local_28 [2];
  
  if (1 < *(int *)(param_1 + 0x40)) {
    *param_2 = 8;
    return '\0';
  }
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    *param_2 = 8;
    local_28[1] = 0xc;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    uVar6 = 0x18;
    pwVar5 = L"Null Stream";
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x69) == '\0') {
        *(undefined4 *)(param_1 + 0x30) = 0;
        if (*(int *)(param_1 + 0x34) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
        }
        do {
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x10)) {
            iVar4 = *(int *)(*(longlong *)(param_1 + 8) + -4 +
                            (longlong)*(int *)(param_1 + 0x10) * 4);
          }
          if (iVar4 == 5) {
            iVar4 = *(int *)(param_1 + 0x18);
            *(undefined4 *)(param_1 + 0x18) = 0;
            cVar1 = FUN_1404b21e0(param_1,param_1 + 0x18);
            if (cVar1 != '\0') {
              if ((*(int *)(param_1 + 0x18) == 5) || (iVar4 == 4)) goto LAB_1404b4cd2;
              if (*(int *)(param_1 + 0x18) != 1) {
LAB_1404b4d06:
                local_28[0] = 0;
                local_28[1] = 0x25;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
                pwVar5 = L"Comma token expected, but not found.";
LAB_1404b4d24:
                uVar6 = 0x4a;
                goto LAB_1404b4d2a;
              }
LAB_1404b4cbf:
              *(undefined4 *)(param_1 + 0x18) = 0;
              cVar1 = FUN_1404b21e0(param_1,param_1 + 0x18);
              if (cVar1 != '\0') goto LAB_1404b4cd2;
            }
LAB_1404b4d4d:
            cVar1 = '\0';
            break;
          }
          if (iVar4 == 6) {
            iVar4 = *(int *)(param_1 + 0x18);
            *(undefined4 *)(param_1 + 0x18) = 0;
            cVar1 = FUN_1404b21e0(param_1,param_1 + 0x18);
            if (cVar1 != '\0') {
              iVar3 = *(int *)(param_1 + 0x18);
              if (iVar3 == 3) goto LAB_1404b4cd2;
              if (iVar4 != 2) {
                if (iVar3 != 1) goto LAB_1404b4d06;
                *(undefined4 *)(param_1 + 0x18) = 0;
                cVar1 = FUN_1404b21e0(param_1,param_1 + 0x18);
                if (cVar1 == '\0') goto LAB_1404b4d4d;
                iVar3 = *(int *)(param_1 + 0x18);
              }
              if (iVar3 != 7) {
                local_28[0] = 0;
                local_28[1] = 0x26;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
                uVar6 = 0x4c;
                pwVar5 = L"String token expected, but not found.";
                goto LAB_1404b4d2a;
              }
              FString::operator=(param_1 + 0x28,param_1 + 0x48);
              *(undefined4 *)(param_1 + 0x18) = 0;
              cVar1 = FUN_1404b21e0(param_1,param_1 + 0x18);
              if (cVar1 != '\0') {
                if (*(int *)(param_1 + 0x18) == 6) goto LAB_1404b4cbf;
                local_28[0] = 0;
                local_28[1] = 0x25;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
                pwVar5 = L"Colon token expected, but not found.";
                goto LAB_1404b4d24;
              }
            }
            goto LAB_1404b4d4d;
          }
          FUN_1404b4250();
          *(undefined4 *)(param_1 + 0x18) = 0;
          cVar1 = FUN_1404b21e0(param_1,param_1 + 0x18);
          if (cVar1 == '\0') goto LAB_1404b4d4d;
          if ((*(int *)(param_1 + 0x18) - 2U & 0xfffffffd) != 0) {
            local_28[0] = 0;
            local_28[1] = 0x3a;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
            uVar6 = 0x74;
            pwVar5 = L"Open Curly or Square Brace token expected, but not found.";
LAB_1404b4d2a:
            FGenericPlatformString::Memcpy(local_28[0],pwVar5,uVar6);
            TJsonReader<wchar_t>::SetErrorMessage(param_1,local_28);
            if (local_28[0] != 0) {
              FMemory::Free();
            }
            goto LAB_1404b4d4d;
          }
LAB_1404b4cd2:
          cVar1 = '\x01';
        } while (*(int *)(param_1 + 0x18) == 0);
        *param_2 = *(int *)(&DAT_1461fb410 + (longlong)*(int *)(param_1 + 0x18) * 4);
        *(bool *)(param_1 + 0x69) = *(int *)(param_1 + 0x10) == 0;
        if ((cVar1 != '\0') && (*param_2 != 8)) {
          if (*(int *)(param_1 + 0x10) != 0) {
            return cVar1;
          }
          cVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
          if (cVar2 == '\0') {
            FUN_1404b4250(param_1);
            return cVar1;
          }
          return cVar1;
        }
        *param_2 = 8;
        if (1 < *(int *)(param_1 + 0x40)) {
          return '\x01';
        }
        local_28[0] = 0;
        local_28[1] = 0x17;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        uVar6 = 0x2e;
        pwVar5 = L"Unknown Error Occurred";
        goto LAB_1404b4dd8;
      }
    }
    else if (*(char *)(param_1 + 0x69) == '\0') {
      *param_2 = 8;
      local_28[0] = 0;
      local_28[1] = 0x16;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      uVar6 = 0x2c;
      pwVar5 = L"Improperly formatted.";
      goto LAB_1404b4dd8;
    }
    if (cVar1 != '\0') {
      return '\0';
    }
    *param_2 = 8;
    local_28[0] = 0;
    local_28[1] = 0x23;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    uVar6 = 0x46;
    pwVar5 = L"Unexpected additional input found.";
  }
LAB_1404b4dd8:
  FGenericPlatformString::Memcpy(local_28[0],pwVar5,uVar6);
  TJsonReader<wchar_t>::SetErrorMessage(param_1,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return '\x01';
}



// FUNCTION 1404b4e10 FUN_1404b4e10 body=535 status=ok
// SIG undefined FUN_1404b4e10(void)

void FUN_1404b4e10(longlong *param_1)

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
        if (bVar5) goto LAB_1404b4f4f;
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
LAB_1404b4f4f:
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



// FUNCTION 1404b5030 Rehash body=534 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
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
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
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
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_1404b516f;
        uVar8 = puVar13[lVar5 + 1];
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
LAB_1404b516f:
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
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0x30 + *param_1);
        uVar8 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 0x2c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 5) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
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



// FUNCTION 1404b5250 Rehash body=530 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
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
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
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
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_1404b538f;
        uVar8 = puVar13[lVar5 + 1];
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
LAB_1404b538f:
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
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0x38 + *param_1);
        uVar8 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 0x34) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 6) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
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



// FUNCTION 1404b5470 Rehash body=535 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
        if (bVar5) goto LAB_1404b55af;
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
LAB_1404b55af:
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
        lVar6 = *param_1 + (longlong)iStack_1c * 0x28;
        uVar4 = *(undefined8 *)(*param_1 + (longlong)iStack_1c * 0x28);
        uVar9 = (int)((ulonglong)uVar4 >> 0x20) + (int)uVar4 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x24) = uVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x20) =
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



// FUNCTION 1404b5690 Rehash body=547 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_1404b57bf;
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
LAB_1404b57bf:
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
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0x30 + *param_1);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        uVar5 = FUN_140438070(puVar9);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar11 + 0x2c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 5) =
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



// FUNCTION 1404b58c0 Remove body=231 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Remove
          (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  iVar3 = *(int *)((longlong)plVar6 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar7) * 4);
  if (iVar3 != -1) {
    lVar5 = *param_1;
    do {
      lVar8 = (longlong)iVar3;
      if (*(longlong *)(lVar5 + lVar8 * 0x18) == param_2) {
        uVar7 = (longlong)*(int *)(lVar5 + 0x14 + lVar8 * 0x18) & uVar7;
        puVar2 = (undefined4 *)((longlong)plVar6 + uVar7 * 4);
        iVar4 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x0001404b5956;
      }
      iVar3 = *(int *)(lVar5 + 0x10 + lVar8 * 0x18);
    } while (iVar3 != -1);
  }
  return 0;
joined_r0x0001404b5956:
  if (iVar4 == -1) {
LAB_1404b597b:
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar3,1);
    return 1;
  }
  if (iVar4 == iVar3) {
    *puVar2 = *(undefined4 *)(lVar5 + lVar8 * 0x18 + 0x10);
    goto LAB_1404b597b;
  }
  lVar1 = (longlong)iVar4 * 3 + 2;
  iVar4 = *(int *)(lVar5 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar5 + lVar1 * 8);
  goto joined_r0x0001404b5956;
}



// FUNCTION 1404b59b0 Remove body=229 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar7 = (longlong)param_2 * 0x20;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar7 + 0x1c + lVar3));
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    piVar6 = (int *)((longlong)plVar4 + lVar5 * 4);
    iVar2 = *(int *)((longlong)plVar4 + lVar5 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar6 = *(int *)(lVar7 + 0x18 + lVar3);
        break;
      }
      piVar6 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
      iVar2 = *piVar6;
    }
  }
  plVar4 = *(longlong **)((longlong)param_2 * 0x20 + *param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar6 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 1404b5aa0 RemoveAtUninitialized body=179 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0x30;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar9;
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
      lVar8 = lVar8 + 0x30;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1404b5b60 RemoveAtUninitialized body=178 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar9 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar10 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar11 = uVar9 << 5;
    do {
      iVar8 = (int)uVar9;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar8;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar11) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar11) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar8;
      if (iVar8 < 0) {
        iVar5 = iVar8 + 0x1f;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      lVar11 = lVar11 + 0x20;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar10;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1404b5c30 ResizeAllocation body=163 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<64,TSizedDefaultAllocator<32>_>::
     ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xa00);
  if (param_3 < 0x41) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x28);
    pvVar1 = *(void **)((longlong)param_1 + 0xa00);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0xa00) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x28);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xa00) = uVar2;
  return;
}



// FUNCTION 1404b5ce0 ResizeGrow body=157 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>
     ::ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0xa08);
  if (uVar1 < 0x41) {
    iVar4 = 0x40;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0xa0c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x28,0);
    iVar4 = (int)(uVar3 / 0x28);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xa0c) = iVar4;
  TInlineAllocator<64,TSizedDefaultAllocator<32>_>::
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>::ResizeAllocation
            (param_1,param_2,iVar4,0x28);
  return;
}



// FUNCTION 1404b5d80 ResizeShrink body=137 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if ((0x3fff < (ulonglong)((longlong)(iVar4 - iVar3) << 3)) || (iVar3 * 3 < iVar4 * 2)) {
    if (0x40 < (uint)(iVar4 - iVar3)) {
      if (0 < iVar3) {
        uVar1 = FMemory::QuantizeSize((longlong)iVar3 << 3,0);
        iVar4 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = (int)(uVar1 >> 3);
      }
      goto LAB_1404b5ddd;
    }
    if (iVar3 == 0) goto LAB_1404b5ddd;
  }
  iVar3 = iVar4;
LAB_1404b5ddd:
  if (iVar3 != iVar4) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 << 3,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1404b5e10 ResizeTo body=127 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>
     ::ResizeTo(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x41) {
      iVar2 = 0x40;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x28,0);
      iVar2 = (int)(uVar1 / 0x28);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xa0c)) {
    *(int *)(param_1 + 0xa0c) = iVar2;
    TInlineAllocator<64,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0xa08),iVar2,0x28);
  }
  return;
}



// FUNCTION 1404b5e90 Run body=118 status=ok
// SIG undefined Run(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FOnlineAsyncTaskManager::Run(longlong param_1)

{
  DWORD DVar1;
  bool bVar2;
  
  _DAT_146852b90 = _DAT_146852b90 + 1;
  DVar1 = GetCurrentThreadId();
  LOCK();
  *(DWORD *)(param_1 + 0xf8) = DVar1;
  UNLOCK();
  do {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x20))
              (*(longlong **)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0),0);
    LOCK();
    bVar2 = *(int *)(param_1 + 0xf4) == 0;
    if (bVar2) {
      *(int *)(param_1 + 0xf4) = 0;
    }
    UNLOCK();
    if (bVar2) {
      (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8);
    }
    LOCK();
    bVar2 = *(int *)(param_1 + 0xf4) == 0;
    if (bVar2) {
      *(int *)(param_1 + 0xf4) = 0;
    }
    UNLOCK();
  } while (bVar2);
  return 0;
}



// FUNCTION 1404b5f10 FUN_1404b5f10 body=278 status=ok
// SIG undefined FUN_1404b5f10(void)

ulonglong FUN_1404b5f10(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int local_res8 [2];
  
  if (param_1[5] != 0) {
    FUN_1404b6bd0();
  }
  lVar4 = operator_new(0x38);
  lVar5 = 0;
  if (lVar4 != 0) {
    lVar5 = FUN_1404ac0f0(lVar4);
  }
  param_1[5] = lVar5;
  cVar3 = FUN_1404b0d70(lVar5,(int)param_1[1]);
  puVar2 = (undefined8 *)param_1[5];
  if ((puVar2 != (undefined8 *)0x0) && (cVar3 != '\0')) {
    local_res8[0] = 0;
    iVar1 = *(int *)(param_2 + 2);
    uVar6 = (**(code **)(*(longlong *)puVar2[2] + 0x48))
                      ((longlong *)puVar2[2],*param_2,iVar1,local_res8,*puVar2);
    if (((char)uVar6 == '\0') || (local_res8[0] != iVar1)) {
      uVar6 = uVar6 & 0xffffffffffffff00;
    }
    else {
      *(int *)(param_1 + 8) = (int)param_1[4];
      *(undefined4 *)(param_1 + 6) = 2;
      (**(code **)(*param_1 + 0x28))(param_1,local_res8,param_3);
      (**(code **)(*param_1 + 0x48))(param_1,local_res8,param_4);
      uVar6 = 1;
    }
    return uVar6;
  }
  return (ulonglong)(cVar3 != '\0');
}



// FUNCTION 1404b6040 Serialize body=59 status=ok
// SIG undefined Serialize(void)

void FBufferReaderBase::Serialize(longlong param_1,void *param_2,size_t param_3)

{
  ::_guard_xfg_dispatch_icall_nop
            (param_2,(void *)(*(longlong *)(param_1 + 0x90) + *(longlong *)(param_1 + 0x98)),param_3
            );
  *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + param_3;
  return;
}



// FUNCTION 1404b6080 FUN_1404b6080 body=512 status=ok
// SIG undefined FUN_1404b6080(void)

void FUN_1404b6080(longlong param_1,longlong param_2,longlong *param_3)

{
  short *psVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_38;
  longlong *local_30;
  
  plVar6 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar5 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      lVar5 = param_1 + 0x60;
    }
    iVar2 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x70) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x28));
        if (*plVar3 == param_2) {
          if (iVar2 != -1) goto LAB_1404b6105;
          break;
        }
        iVar2 = (int)plVar3[5];
      } while (iVar2 != -1);
    }
  }
  plVar3 = plVar6;
LAB_1404b6105:
  plVar7 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_res10 = param_2;
  if (plVar7 == (longlong *)0x0) {
    local_38 = &local_res10;
    local_30 = param_3;
    FUN_1404a8b00((longlong *)(param_1 + 0x28),local_res8,&local_38,0);
    return;
  }
  if (plVar7 == param_3) goto LAB_1404b6243;
  iVar2 = (int)*param_3;
  if (iVar2 == 6) {
    FVariantData::SetValue(plVar7,param_3[1]);
    *(int *)(plVar7 + 3) = (int)param_3[3];
    return;
  }
  if (iVar2 != 10) {
    if (iVar2 == 8) {
      FVariantData::SetValue(plVar7,(int)param_3[2],param_3[1]);
      *(int *)(plVar7 + 3) = (int)param_3[3];
      return;
    }
    FVariantData::Empty(plVar7);
    lVar5 = param_3[1];
    *plVar7 = *param_3;
    plVar7[1] = lVar5;
    plVar7[2] = param_3[2];
    goto LAB_1404b6243;
  }
  psVar1 = (short *)param_3[1];
  local_38 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
LAB_1404b61d0:
    plVar3 = (longlong *)&DAT_143f3eda8;
  }
  else {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar1[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_30 = (longlong *)(ulonglong)uVar4;
    uVar8 = uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar8 = (uint)local_30;
    }
    plVar3 = local_38;
    FGenericPlatformString::Memcpy(local_38,psVar1,(longlong)(int)uVar4 * 2);
    plVar6 = plVar3;
    if (uVar8 == 0) goto LAB_1404b61d0;
  }
  FVariantData::SetValue(plVar7,plVar3);
  *(int *)plVar7 = 10;
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
    *(int *)(plVar7 + 3) = (int)param_3[3];
    return;
  }
LAB_1404b6243:
  *(int *)(plVar7 + 3) = (int)param_3[3];
  return;
}



// FUNCTION 1404b6280 SetErrorMessage body=445 status=ok
// SIG undefined SetErrorMessage(void)

void TJsonReader<wchar_t>::SetErrorMessage(longlong param_1,undefined8 *param_2)

{
  void **ppvVar1;
  void *_Dst;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  void *local_48;
  int local_40;
  int local_3c;
  void *local_38;
  undefined8 local_30;
  
  FString::PrintfImpl(&local_38,L" Line: %u Ch: %u",*(undefined4 *)(param_1 + 0x60),
                      *(undefined4 *)(param_1 + 100));
  pvVar7 = local_38;
  iVar6 = *(int *)(param_2 + 1);
  iVar3 = (int)local_30;
  if (iVar6 < 2) {
    iVar5 = local_30._4_4_;
    local_38 = (void *)0x0;
    local_30 = 0;
  }
  else {
    iVar4 = 0;
    if ((int)local_30 != 0) {
      iVar4 = (int)local_30 + -1;
    }
    if ((iVar6 != 0) || (iVar3 = 1, iVar4 == 0)) {
      iVar3 = 0;
    }
    pvVar2 = (void *)*param_2;
    local_48 = (void *)0x0;
    local_40 = iVar6;
    if ((iVar6 == 0) && (iVar3 + iVar4 == 0)) {
      local_3c = 0;
      pvVar7 = (void *)0x0;
      iVar6 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar6 + iVar3 + iVar4,0);
      pvVar7 = local_48;
      ::_guard_xfg_dispatch_icall_nop(local_48,pvVar2,(longlong)iVar6 * 2);
      iVar6 = local_40;
    }
    pvVar2 = local_38;
    iVar5 = local_3c;
    iVar3 = iVar6;
    if (iVar4 != 0) {
      local_40 = iVar6 + (uint)(iVar6 == 0) + iVar4;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar6);
        pvVar7 = local_48;
      }
      iVar5 = local_3c;
      iVar3 = local_40;
      _Dst = (void *)((longlong)pvVar7 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
    }
  }
  ppvVar1 = (void **)(param_1 + 0x38);
  if (ppvVar1 == &local_48) {
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
  }
  else {
    if (*ppvVar1 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar1 = pvVar7;
    *(int *)(param_1 + 0x40) = iVar3;
    *(int *)(param_1 + 0x44) = iVar5;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404b6440 SetFloatStat body=189 status=ok
// SIG undefined SetFloatStat(void)

void FOnlineStats::SetFloatStat(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 local_res20 [8];
  undefined8 local_48;
  int *local_40;
  int local_38 [2];
  ulonglong local_30;
  int *local_28;
  
  local_28 = (int *)FindStatByName();
  if (local_28 == (int *)0x0) {
    local_40 = local_38;
    local_30 = (ulonglong)param_3;
    local_38[0] = 7;
    local_48 = param_2;
    FUN_1404a8f80(param_1 + 8,local_res20,&local_48,0);
    if (((local_38[0] == 6) || (local_38[0] == 8)) || (local_38[0] == 10)) {
      FMemory::operator_delete(local_30);
    }
  }
  else if (*local_28 == 7) {
    local_28[2] = 0;
    local_28[3] = 0;
    local_28[4] = 0;
    local_28[5] = 0;
    local_28[2] = param_3;
    *local_28 = 7;
    return;
  }
  return;
}



// FUNCTION 1404b6500 SetTickGroup body=4 status=ok
// SIG undefined SetTickGroup(void)

void AActor::SetTickGroup(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x30) = param_2;
  return;
}



// FUNCTION 1404b6510 SetIntStat body=180 status=ok
// SIG undefined SetIntStat(void)

void FOnlineStats::SetIntStat(longlong param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  undefined1 local_res20 [8];
  undefined8 local_38;
  int *local_30;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  piVar1 = (int *)FindStatByName();
  if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    *piVar1 = 1;
    piVar1[2] = param_3;
    return;
  }
  local_28[0] = 1;
  local_18 = 0;
  local_30 = local_28;
  local_20 = (ulonglong)param_3;
  local_38 = param_2;
  FUN_1404a8f80(param_1 + 8,local_res20,&local_38,0);
  if ((local_28[0] == 6) || ((local_28[0] == 8 || (local_28[0] == 10)))) {
    FMemory::operator_delete(local_20);
  }
  return;
}



// FUNCTION 1404b65d0 FUN_1404b65d0 body=186 status=ok
// SIG undefined FUN_1404b65d0(void)

void FUN_1404b65d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar8;
  ulonglong uVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 == 0) {
    FUN_1404b1110();
    lVar4 = *(longlong *)(param_1 + 0x38);
    if (lVar4 == 0) {
      return;
    }
  }
  iVar2 = *(int *)(lVar4 + 0x30);
  uVar5 = 0;
  uVar6 = 0;
  if (0 < iVar2) {
    plVar3 = *(longlong **)(lVar4 + 0x28);
    uVar7 = uVar5;
    do {
      uVar6 = (uint)uVar7;
      if (*plVar3 == param_2) break;
      uVar6 = uVar6 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar5 = uVar5 + 1;
      plVar3 = plVar3 + 2;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  if ((int)uVar6 < iVar2) {
    lVar4 = *(longlong *)(lVar4 + 0x28);
    lVar8 = (longlong)(int)uVar6;
  }
  else {
    lVar8 = (longlong)*(int *)(lVar4 + 0x30);
    iVar2 = *(int *)(lVar4 + 0x30) + 1;
    *(int *)(lVar4 + 0x30) = iVar2;
    if (*(int *)(lVar4 + 0x34) < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x28);
    }
    lVar1 = *(longlong *)(lVar4 + 0x28);
    *(undefined8 *)(lVar1 + lVar8 * 0x10) = 0;
    *(undefined8 *)(lVar1 + 8 + lVar8 * 0x10) = 0;
    lVar4 = *(longlong *)(lVar4 + 0x28);
    *(longlong *)(lVar4 + lVar8 * 0x10) = param_2;
  }
  *(undefined8 *)(lVar4 + 8 + lVar8 * 0x10) = param_3;
  return;
}



// FUNCTION 1404b6690 SetValue body=26 status=ok
// SIG undefined SetValue(void)

void FVariantData::SetValue(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 0) {
    SetValue(param_1,*param_2);
    return;
  }
  SetValue(param_1,&DAT_143f3eda8);
  return;
}



// FUNCTION 1404b66b0 SetValue body=71 status=ok
// SIG undefined SetValue(void)

void FVariantData::SetValue(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 == 6) || (iVar1 == 8)) || (iVar1 == 10)) {
    FMemory::operator_delete(*(undefined8 *)(param_1 + 2));
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 1;
  param_1[2] = param_2;
  return;
}



// FUNCTION 1404b6700 SetValue body=71 status=ok
// SIG undefined SetValue(void)

void FVariantData::SetValue(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 == 6) || (iVar1 == 8)) || (iVar1 == 10)) {
    FMemory::operator_delete(*(undefined8 *)(param_1 + 2));
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 2;
  param_1[2] = param_2;
  return;
}



// FUNCTION 1404b6750 SetValue body=114 status=ok
// SIG undefined SetValue(void)

void FVariantData::SetValue(int *param_1,uint param_2,void *param_3)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = *param_1;
  if (((iVar1 == 6) || (iVar1 == 8)) || (iVar1 == 10)) {
    FMemory::operator_delete(*(undefined8 *)(param_1 + 2));
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 8;
  if (param_2 != 0) {
    param_1[4] = param_2;
    _Dst = (void *)operator_new((ulonglong)param_2);
    *(void **)(param_1 + 2) = _Dst;
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_3,(ulonglong)param_2);
  }
  return;
}



// FUNCTION 1404b67d0 SetValue body=75 status=ok
// SIG undefined SetValue(void)

void FVariantData::SetValue(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 == 6) || (iVar1 == 8)) || (iVar1 == 10)) {
    FMemory::operator_delete(*(undefined8 *)(param_1 + 2));
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = param_2;
  *param_1 = 7;
  return;
}



// FUNCTION 1404b6820 SetValue body=71 status=ok
// SIG undefined SetValue(void)

void FVariantData::SetValue(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 == 6) || (iVar1 == 8)) || (iVar1 == 10)) {
    FMemory::operator_delete(*(undefined8 *)(param_1 + 2));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  *param_1 = 5;
  return;
}



// FUNCTION 1404b6870 SetValue body=174 status=ok
// SIG undefined SetValue(void)

void FVariantData::SetValue(int *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  longlong lVar4;
  
  iVar2 = *param_1;
  if (((iVar2 == 6) || (iVar2 == 8)) || (iVar2 == 10)) {
    FMemory::operator_delete(*(undefined8 *)(param_1 + 2));
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 6;
  if (param_2 != (short *)0x0) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    psVar3 = (short *)operator_new();
    *(short **)(param_1 + 2) = psVar3;
    if (0 < (int)lVar4) {
      do {
        sVar1 = *param_2;
        param_2 = param_2 + 1;
        *psVar3 = sVar1;
        psVar3 = psVar3 + 1;
      } while (sVar1 != 0);
      return;
    }
    *psVar3 = 0;
  }
  return;
}



// FUNCTION 1404b6920 SetValue body=69 status=ok
// SIG undefined SetValue(void)

void FVariantData::SetValue(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 == 6) || (iVar1 == 8)) || (iVar1 == 10)) {
    FMemory::operator_delete(*(undefined8 *)(param_1 + 2));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 1404b6970 SetValue body=69 status=ok
// SIG undefined SetValue(void)

void FVariantData::SetValue(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 == 6) || (iVar1 == 8)) || (iVar1 == 10)) {
    FMemory::operator_delete(*(undefined8 *)(param_1 + 2));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 4;
  *(undefined8 *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 1404b69c0 SetValue body=73 status=ok
// SIG undefined SetValue(void)

void FVariantData::SetValue(int *param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 == 6) || (iVar1 == 8)) || (iVar1 == 10)) {
    FMemory::operator_delete(*(undefined8 *)(param_1 + 2));
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 9;
  *(undefined1 *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 1404b6a10 FUN_1404b6a10 body=54 status=ok
// SIG undefined FUN_1404b6a10(void)

undefined1 FUN_1404b6a10(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1404b2750();
  if (*(longlong *)(param_1 + 0x60) != 0) {
    uVar1 = FUN_14164ab60();
    FUN_141597530(uVar1,*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return 1;
}



// FUNCTION 1404b6a50 FUN_1404b6a50 body=241 status=ok
// SIG undefined FUN_1404b6a50(void)

void FUN_1404b6a50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  if (*(longlong *)(param_1 + 0x60) == 0) {
    local_18 = (longlong *)0x0;
    plVar1 = (longlong *)FMemory::Realloc(0,0x30);
    local_10 = 3;
    local_18 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      plVar1[1] = param_1;
      *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
      plVar1[2] = (longlong)&LAB_1404acf9c;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[4] = lVar2;
    }
    uVar3 = FUN_14164ab60();
    puVar4 = (undefined8 *)FUN_14158f860(uVar3,local_res8,&local_18,L"FOnlineSubsystemImpl_Tick",0);
    *(undefined8 *)(param_1 + 0x60) = *puVar4;
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_18 + 0x28))(local_18,0);
      if (local_18 != (longlong *)0x0) {
        local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
      }
      local_10 = 0;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 1404b6b50 Stop body=125 status=ok
// SIG undefined Stop(void)

void FOnlineAsyncTaskManager::Stop(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  LOCK();
  *(undefined4 *)(param_1 + 0xf4) = 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001404b6bc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
  return;
}



// FUNCTION 1404b6bd0 FUN_1404b6bd0 body=322 status=ok
// SIG undefined FUN_1404b6bd0(void)

void FUN_1404b6bd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (lVar4 != 0) {
    uVar6 = FName::FName(local_res8,L"WINDOWS",1);
    plVar7 = (longlong *)FUN_1419c6b80(uVar6);
    (**(code **)(*plVar7 + 0x28))(plVar7,*(undefined8 *)(lVar4 + 0x10));
    plVar7 = *(longlong **)(lVar4 + 0x30);
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
    plVar7 = *(longlong **)(lVar4 + 0x20);
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
    plVar7 = *(longlong **)(lVar4 + 8);
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
    FMemory::operator_delete(lVar4,0x38);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0x50);
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0x68);
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0x80);
  return;
}



// FUNCTION 1404b6d20 Tell body=8 status=ok
// SIG undefined Tell(void)

undefined8 FBufferReaderBase::Tell(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// FUNCTION 1404b6d30 FUN_1404b6d30 body=350 status=ok
// SIG undefined FUN_1404b6d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404b6d30(longlong *param_1,float param_2)

{
  float fVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  undefined4 local_440;
  int local_438 [2];
  undefined8 local_430;
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  if ((int)param_1[6] != 0) {
    while( true ) {
      local_438[0] = 0;
      plVar2 = *(longlong **)(param_1[5] + 0x10);
      if (plVar2 == (longlong *)0x0) break;
      local_448 = *(undefined8 *)(param_1[5] + 0x28);
      local_440 = 0;
      (**(code **)(*plVar2 + 0x58))(plVar2,local_428,0x400,local_438);
      iVar3 = local_438[0];
      if (local_438[0] < 1) break;
      if ((int)param_1[6] == 1) {
        uVar4 = FUN_1404b1780(param_1,local_428,local_438[0],&local_430);
        if (uVar4 != 0) {
          (**(code **)(*param_1 + 0x20))(param_1,local_428 + uVar4,iVar3 - uVar4,local_430);
        }
      }
      else if (((int)param_1[6] == 2) &&
              (uVar4 = FUN_1404b1a00(param_1,local_428,local_438[0]), uVar4 != 0)) {
        (**(code **)(*param_1 + 0x40))(param_1,local_428 + uVar4,iVar3 - uVar4);
      }
    }
    if (((int)param_1[6] == 2) &&
       (fVar1 = *(float *)(param_1 + 8), *(float *)(param_1 + 8) = fVar1 - param_2,
       fVar1 - param_2 <= 0.0)) {
      (**(code **)(*param_1 + 0x60))(param_1);
    }
  }
  return;
}



// FUNCTION 1404b6e90 Tick body=660 status=ok
// SIG undefined Tick(void)

void FOnlineAsyncTaskManager::Tick(longlong param_1)

{
  longlong lVar1;
  void **ppvVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  void *_Src;
  longlong *plVar3;
  char cVar4;
  BOOL BVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  bool bVar15;
  uint local_res10;
  void *local_60;
  uint local_58;
  undefined4 local_54;
  
  lVar1 = param_1 + -8;
  (**(code **)(*(longlong *)(param_1 + -8) + 0x30))(lVar1);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x80);
  uVar10 = 0;
  pvVar14 = (void *)0x0;
  local_res10 = 0;
  local_60 = (void *)0x0;
  local_54 = 0;
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  ppvVar2 = (void **)(param_1 + 0x70);
  if (&local_60 != ppvVar2) {
    local_res10 = *(uint *)(param_1 + 0x78);
    uVar10 = (ulonglong)(int)local_res10;
    _Src = *ppvVar2;
    local_58 = local_res10;
    if (local_res10 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_60,local_res10,0)
      ;
      pvVar14 = local_60;
      ::_guard_xfg_dispatch_icall_nop(local_60,_Src,uVar10 << 3);
      uVar10 = (ulonglong)local_58;
      local_res10 = local_58;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  iVar8 = 0;
  do {
    if ((iVar8 < 0) || ((int)uVar10 <= iVar8)) {
      if (pvVar14 != (void *)0x0) {
        FMemory::Free(pvVar14);
      }
      BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      if (BVar5 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      plVar3 = *(longlong **)(param_1 + 8);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3);
        cVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
        if (cVar4 != '\0') {
          (**(code **)(*plVar3 + 0x30))(plVar3);
          AddToOutQueue(lVar1,plVar3);
          BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
          if (BVar5 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
          }
          *(undefined8 *)(param_1 + 8) = 0;
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
        }
      }
      return;
    }
    plVar3 = *(longlong **)((longlong)pvVar14 + (longlong)iVar8 * 8);
    (**(code **)(*plVar3 + 0x38))(plVar3);
    cVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar4 != '\0') {
      (**(code **)(*plVar3 + 0x30))(plVar3);
      BVar5 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar5 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      lVar6 = (longlong)*(int *)(param_1 + 0x78);
      if (*(int *)(param_1 + 0x78) != 0) {
        iVar13 = 0;
        lVar9 = 0;
        bVar15 = *(longlong **)*ppvVar2 != plVar3;
        iVar11 = 0;
        do {
          lVar9 = lVar9 + 1;
          iVar12 = iVar11 + 1;
          if (lVar9 < lVar6) {
            puVar7 = (undefined8 *)((longlong)*ppvVar2 + lVar9 * 8);
            do {
              if (bVar15 != ((longlong *)*puVar7 != plVar3)) break;
              iVar12 = iVar12 + 1;
              lVar9 = lVar9 + 1;
              puVar7 = puVar7 + 1;
            } while (lVar9 < lVar6);
          }
          if (bVar15 != false) {
            if (iVar13 != iVar11) {
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)*ppvVar2 + (longlong)iVar13 * 8),
                         (void *)((longlong)*ppvVar2 + (longlong)iVar11 * 8),
                         (longlong)(iVar12 - iVar11) << 3);
            }
            iVar13 = iVar13 + (iVar12 - iVar11);
          }
          bVar15 = (bool)(bVar15 ^ 1);
          iVar11 = iVar12;
        } while (lVar9 < lVar6);
        uVar10 = (ulonglong)local_res10;
        *(int *)(param_1 + 0x78) = iVar13;
      }
      LeaveCriticalSection(lpCriticalSection);
      AddToOutQueue(lVar1,plVar3);
    }
    iVar8 = iVar8 + 1;
    pvVar14 = local_60;
  } while( true );
}



// FUNCTION 1404b7130 FUN_1404b7130 body=702 status=ok
// SIG undefined FUN_1404b7130(void)

undefined8 FUN_1404b7130(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong **pplVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong *local_28;
  int local_20;
  longlong *local_18 [2];
  
  if (**(longlong **)(param_1 + 0x48) == 0) {
    return 1;
  }
  local_28 = (longlong *)0x0;
  local_20 = 0;
  while (lVar8 = **(longlong **)(param_1 + 0x48), lVar8 != 0) {
    pplVar6 = (longlong **)(lVar8 + 8);
    if (pplVar6 != &local_28) {
      if ((*(int *)(lVar8 + 0x10) == 0) || (plVar3 = *pplVar6, plVar3 == (longlong *)0x0)) {
        if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
          (**(code **)(*local_28 + 0x28))(local_28,0);
          if (local_28 != (longlong *)0x0) {
            local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
          }
          local_20 = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x48);
    *(longlong *)(param_1 + 0x48) = lVar8;
    if (((local_18 != pplVar6) && (*(int *)(lVar8 + 0x10) != 0)) &&
       (plVar3 = *pplVar6, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      if (*pplVar6 != (longlong *)0x0) {
        plVar3 = (longlong *)FMemory::Realloc(*pplVar6,0,0);
        *pplVar6 = plVar3;
      }
      *(undefined4 *)(lVar8 + 0x10) = 0;
    }
    if (lVar1 != 0) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + 8);
      FMemory::operator_delete(lVar1,0x18);
    }
    iVar10 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar10 + 1;
    if (*(int *)(param_1 + 0x5c) < iVar10 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x50,iVar10);
    }
    pplVar6 = (longlong **)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x50));
    *pplVar6 = (longlong *)0x0;
    *(undefined4 *)(pplVar6 + 1) = 0;
    if (((&local_28 != pplVar6) && (local_20 != 0)) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x30))();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
  iVar10 = *(int *)(param_1 + 0x58);
  plVar9 = plVar3 + (longlong)iVar10 * 2;
  if (plVar3 != plVar9) {
    do {
      if ((((int)plVar3[1] != 0) && ((longlong *)*plVar3 != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(*(longlong *)*plVar3 + 0x18))(), cVar2 != '\0')) {
        plVar5 = (longlong *)0x0;
        if ((int)plVar3[1] != 0) {
          plVar5 = (longlong *)*plVar3;
        }
        (**(code **)(*plVar5 + 0x40))();
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != plVar9);
    iVar10 = *(int *)(param_1 + 0x58);
  }
  if (iVar10 < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    iVar7 = -iVar10;
    if (*(int *)(param_1 + 0x5c) < 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x50,iVar10);
    }
    puVar4 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x50));
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4 = puVar4 + 2;
    }
  }
  else if ((0 < iVar10) && (iVar10 != 0)) {
    lVar8 = *(longlong *)(param_1 + 0x50);
    iVar7 = iVar10;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar8);
      lVar8 = lVar8 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = *(int *)(param_1 + 0x58);
    if (iVar7 - iVar10 != 0) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x50),
                 (void *)((longlong)iVar10 * 0x10 + (longlong)*(void **)(param_1 + 0x50)),
                 (longlong)(iVar7 - iVar10) << 4);
      iVar7 = *(int *)(param_1 + 0x58);
    }
    *(int *)(param_1 + 0x58) = iVar7 - iVar10;
  }
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return 1;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return 1;
}



// FUNCTION 1404b73f0 FUN_1404b73f0 body=451 status=ok
// SIG undefined FUN_1404b73f0(void)

undefined8 * FUN_1404b73f0(int *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar2 = *param_1;
  switch(iVar2) {
  case 1:
    if (iVar2 == 1) {
      iVar2 = param_1[2];
    }
    else {
      iVar2 = 0;
    }
    FString::PrintfImpl(param_2,&DAT_143f5c43c,iVar2);
    return param_2;
  case 2:
    if (iVar2 == 2) {
      iVar2 = param_1[2];
    }
    else {
      iVar2 = 0;
    }
    FString::PrintfImpl(param_2,&DAT_143f5c444,iVar2);
    return param_2;
  case 3:
    if (iVar2 == 3) {
      uVar3 = *(undefined8 *)(param_1 + 2);
    }
    else {
      uVar3 = 0;
    }
    FString::PrintfImpl(param_2,L"%lld",uVar3);
    return param_2;
  case 4:
    if (iVar2 == 4) {
      uVar3 = *(undefined8 *)(param_1 + 2);
    }
    else {
      uVar3 = 0;
    }
    FString::PrintfImpl(param_2,L"%lld",uVar3);
    return param_2;
  case 5:
    if (iVar2 == 5) {
      uVar6 = (undefined4)*(undefined8 *)(param_1 + 2);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
    }
    else {
      uVar6 = 0;
      uVar7 = 0;
    }
    FString::PrintfImpl(param_2,&DAT_143f5c46c,CONCAT44(uVar7,uVar6));
    return param_2;
  case 6:
  case 10:
    local_18 = 0;
    local_10 = 0;
    FUN_1404b0a70(param_1,&local_18);
    *param_2 = local_18;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_10._4_4_;
    return param_2;
  case 7:
    if (iVar2 == 7) {
      fVar5 = (float)param_1[2];
    }
    else {
      fVar5 = 0.0;
    }
    FString::PrintfImpl(param_2,&DAT_143f5c274,(double)fVar5);
    return param_2;
  case 8:
    FString::PrintfImpl(param_2,L"%d byte blob",param_1[4]);
    return param_2;
  case 9:
    break;
  default:
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  if (iVar2 == 9) {
    cVar1 = (char)param_1[2];
  }
  else {
    cVar1 = '\0';
  }
  pwVar4 = L"false";
  if (cVar1 != '\0') {
    pwVar4 = L"true";
  }
  FString::PrintfImpl(param_2,&DAT_143f5bc04,pwVar4);
  return param_2;
}



// FUNCTION 1404b75e0 FUN_1404b75e0 body=8 status=ok
// SIG undefined FUN_1404b75e0(void)

undefined8 FUN_1404b75e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// FUNCTION 1404b75f0 FUN_1404b75f0 body=180 status=ok
// SIG undefined FUN_1404b75f0(void)

void FUN_1404b75f0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  iVar6 = *(int *)(param_1 + 0x1c);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x10) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404b765b:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_1404b765b;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x1c);
  }
  *(int *)(param_1 + 0x1c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 8),0);
    return;
  }
  return;
}



// FUNCTION 1404b76c0 FUN_1404b76c0 body=196 status=ok
// SIG undefined FUN_1404b76c0(void)

void FUN_1404b76c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  iVar6 = *(int *)(param_1 + 100);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x58) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x50);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404b7736:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404b7736;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 100) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x50),0);
    return;
  }
  return;
}



// FUNCTION 1404b7790 FUN_1404b7790 body=176 status=ok
// SIG undefined FUN_1404b7790(void)

void FUN_1404b7790(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  iVar6 = *(int *)(param_1 + 0x7c);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x70) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x68);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404b77f7:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_1404b77f7;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x7c);
  }
  *(int *)(param_1 + 0x7c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x68),0);
    return;
  }
  return;
}



// FUNCTION 1404b7880 FUN_1404b7880 body=28 status=ok
// SIG undefined FUN_1404b7880(void)

undefined1 FUN_1404b7880(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FString::ToBool(param_1 + 0x10);
  *param_2 = uVar1;
  return 1;
}



// FUNCTION 1404b78d0 TryGetNumber body=108 status=ok
// SIG undefined TryGetNumber(void)

undefined1 FJsonValueString::TryGetNumber(longlong param_1,double *param_2)

{
  char cVar1;
  double dVar2;
  
  cVar1 = FString::IsNumeric((undefined8 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    dVar2 = wcstod(*(wchar_t **)(param_1 + 0x10),(wchar_t **)0x0);
    *param_2 = dVar2;
    return 1;
  }
  dVar2 = wcstod(L"",(wchar_t **)0x0);
  *param_2 = dVar2;
  return 1;
}



// FUNCTION 1404b7940 TryGetString body=171 status=ok
// SIG undefined TryGetString(void)

undefined * FJsonValueBoolean::TryGetString(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *_Src;
  
  _Src = L"false";
  if (*(char *)(param_1 + 0x10) != '\0') {
    _Src = L"true";
  }
  if ((wchar_t *)*param_2 == _Src) {
    return &DAT_143f60001;
  }
  iVar1 = 0;
  iVar2 = iVar1;
  if (*_Src != L'\0') {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (_Src[lVar3] != L'\0');
    iVar2 = (int)lVar3 + 1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,iVar2);
    iVar1 = *(int *)(param_2 + 1);
  }
  *(int *)(param_2 + 1) = iVar1 + iVar2;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
  }
  if (iVar2 != 0) {
    ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 * 2);
  }
  return (undefined *)0x1;
}



// FUNCTION 1404b79f0 TryGetString body=107 status=ok
// SIG undefined TryGetString(void)

undefined8 FJsonValueNumber::TryGetString(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  plVar1 = (longlong *)FString::SanitizeFloat(local_18,*(undefined8 *)(param_1 + 0x10),0);
  if (param_2 != plVar1) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_2 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1404b7a60 FUN_1404b7a60 body=26 status=ok
// SIG undefined FUN_1404b7a60(void)

undefined8 FUN_1404b7a60(longlong param_1,undefined8 param_2)

{
  FString::operator=(param_2,param_1 + 0x10);
  return 1;
}



// FUNCTION 1404b7a80 FUN_1404b7a80 body=137 status=ok
// SIG undefined FUN_1404b7a80(void)

void FUN_1404b7a80(longlong *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *local_18;
  undefined8 local_10;
  
  local_10 = 3;
  local_18 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  puVar1 = local_18;
  iVar3 = 0;
  FGenericPlatformString::Memcpy(local_18,&DAT_143f600e4,6);
  if ((int)local_10 == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    iVar3 = (int)local_10 + -1;
    puVar2 = puVar1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,puVar2,(longlong)iVar3 * 2);
  if (puVar1 != (undefined2 *)0x0) {
    FMemory::Free(puVar1);
  }
  return;
}



// FUNCTION 1404b7b10 FUN_1404b7b10 body=1070 status=ok
// SIG undefined FUN_1404b7b10(void)

void FUN_1404b7b10(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  ulonglong uVar7;
  int iVar8;
  short *local_38;
  undefined8 local_30;
  
  iVar5 = *(int *)(param_2 + 1) + 0x10;
  uVar7 = 0;
  iVar3 = 0;
  local_38 = (short *)0x0;
  iVar8 = 0;
  local_30 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0x11;
  }
  if (0 < iVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
    uVar7 = local_30 >> 0x20;
    iVar3 = (int)local_30;
  }
  iVar5 = (2 - (uint)(iVar3 != 0)) + iVar3;
  if ((int)uVar7 < iVar5) {
    local_30._0_4_ = iVar5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
    uVar7 = (ulonglong)local_30._4_4_;
  }
  iVar5 = (int)uVar7;
  local_38[(longlong)iVar3 - (ulonglong)(iVar3 != 0)] = 0x22;
  (local_38 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)))[1] = 0;
  psVar6 = local_38;
  if (*(int *)(param_2 + 1) != 0) {
    psVar4 = (short *)*param_2;
    sVar2 = *psVar4;
    while (sVar2 != 0) {
      iVar5 = (int)uVar7;
      switch(sVar2) {
      case 8:
        local_30._0_4_ = 3;
        if (iVar5 < 3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
          uVar7 = (ulonglong)local_30._4_4_;
          psVar6 = local_38;
        }
        psVar6[0] = 0x5c;
        psVar6[1] = 0x62;
        psVar6[2] = 0;
        break;
      case 9:
        local_30._0_4_ = 3;
        if (iVar5 < 3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
          uVar7 = (ulonglong)local_30._4_4_;
          psVar6 = local_38;
        }
        psVar6[0] = 0x5c;
        psVar6[1] = 0x74;
        psVar6[2] = 0;
        break;
      case 10:
        local_30._0_4_ = 3;
        if (iVar5 < 3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
          uVar7 = (ulonglong)local_30._4_4_;
          psVar6 = local_38;
        }
        psVar6[0] = 0x5c;
        psVar6[1] = 0x6e;
        psVar6[2] = 0;
        break;
      default:
        if (sVar2 != 0) {
          local_30._0_4_ = 2;
          if (iVar5 < 2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
            uVar7 = (ulonglong)local_30._4_4_;
            psVar6 = local_38;
          }
          *psVar6 = sVar2;
          psVar6[1] = 0;
        }
        break;
      case 0xc:
        local_30._0_4_ = 3;
        if (iVar5 < 3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
          uVar7 = (ulonglong)local_30._4_4_;
          psVar6 = local_38;
        }
        psVar6[0] = 0x5c;
        psVar6[1] = 0x66;
        psVar6[2] = 0;
        break;
      case 0xd:
        local_30._0_4_ = 3;
        if (iVar5 < 3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
          uVar7 = (ulonglong)local_30._4_4_;
          psVar6 = local_38;
        }
        psVar6[0] = 0x5c;
        psVar6[1] = 0x72;
        psVar6[2] = 0;
        break;
      case 0x22:
        local_30._0_4_ = 3;
        if (iVar5 < 3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
          uVar7 = (ulonglong)local_30._4_4_;
          psVar6 = local_38;
        }
        psVar6[0] = 0x5c;
        psVar6[1] = 0x22;
        psVar6[2] = 0;
        break;
      case 0x5c:
        local_30._0_4_ = 3;
        if (iVar5 < 3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
          uVar7 = (ulonglong)local_30._4_4_;
          psVar6 = local_38;
        }
        psVar6[0] = 0x5c;
        psVar6[1] = 0x5c;
        psVar6[2] = 0;
      }
      iVar5 = (int)uVar7;
      psVar1 = psVar4 + 1;
      psVar4 = psVar4 + 1;
      sVar2 = *psVar1;
    }
  }
  local_30 = CONCAT44(local_30._4_4_,2);
  iVar3 = 2;
  if (iVar5 < 2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    psVar6 = local_38;
    iVar3 = (int)local_30;
  }
  *psVar6 = 0x22;
  psVar6[1] = 0;
  if (iVar3 == 0) {
    psVar4 = &DAT_143f3eda8;
  }
  else {
    iVar8 = iVar3 + -1;
    psVar4 = psVar6;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))
            (*(longlong **)(param_1 + 8),psVar4,(longlong)iVar8 * 2);
  if (psVar6 != (short *)0x0) {
    FMemory::Free(psVar6);
  }
  return;
}



// FUNCTION 1404b7fc0 FUN_1404b7fc0 body=79 status=ok
// SIG undefined FUN_1404b7fc0(void)

void FUN_1404b7fc0(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined2 local_res10 [4];
  
  if (0 < (int)param_2) {
    uVar1 = (ulonglong)param_2;
    do {
      local_res10[0] = 9;
      (**(code **)(*param_1 + 0x50))(param_1,local_res10,2);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1404b8010 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNamedInterfaces::GetPrivateStaticClass(void)

{
  if (DAT_146852e00 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystem",L"NamedInterfaces",&DAT_146852e00,FUN_140447710,0x60,
                  0x1000000c,0,L"Engine",&LAB_1404b8180,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146852e00;
}



// FUNCTION 1404b80b0 FUN_1404b80b0 body=47 status=ok
// SIG undefined FUN_1404b80b0(void)

longlong FUN_1404b80b0(void)

{
  if (DAT_146852e10 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146852e10,&PTR_s__Script_OnlineSubsystem_143f61d10);
  }
  return DAT_146852e10;
}



// FUNCTION 1404b80e0 FUN_1404b80e0 body=53 status=ok
// SIG undefined FUN_1404b80e0(void)

void FUN_1404b80e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_143f61ab0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1404b8120 FUN_1404b8120 body=53 status=ok
// SIG undefined FUN_1404b8120(void)

void FUN_1404b8120(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_143f61bc8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1404b81b0 FUN_1404b81b0 body=188 status=ok
// SIG undefined FUN_1404b81b0(void)

undefined8 FUN_1404b81b0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      puVar1 = param_2 + 1;
      *param_2 = puVar3[-1];
      if (puVar1 != puVar3) {
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        *(int *)(param_2 + 2) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x14) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      puVar3 = puVar3 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1404b8270 FUN_1404b8270 body=85 status=ok
// SIG undefined FUN_1404b8270(void)

void FUN_1404b8270(void)

{
  if (DAT_146852dc0 == 0) {
    if (DAT_146852e10 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146852e10,&PTR_s__Script_OnlineSubsystem_143f61d10)
      ;
    }
    DAT_146852dc0 = GetStaticEnum(FUN_1404b8420,DAT_146852e10,L"EOnlineActivityOutcome");
  }
  return;
}



// FUNCTION 1404b82d0 Get_Z_Construct_UScriptStruct_FNamedInterfaceDef_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNamedInterfaceDef_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNamedInterfaceDef_CRC(void)

{
  return 0x9800e6e7;
}



// FUNCTION 1404b82e0 Get_Z_Construct_UScriptStruct_FNamedInterface_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNamedInterface_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNamedInterface_CRC(void)

{
  return 0xa55ceb08;
}



// FUNCTION 1404b82f0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNamedInterface::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146852de8 == 0) {
    if (DAT_146852e10 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146852e10,&PTR_s__Script_OnlineSubsystem_143f61d10)
      ;
    }
    lVar1 = DAT_146852e10;
    uVar2 = Get_Z_Construct_UScriptStruct_FNamedInterface_CRC();
    DAT_146852de8 = GetStaticStruct(FUN_1404b8450,lVar1,L"NamedInterface",0x10,uVar2);
  }
  return;
}



// FUNCTION 1404b8370 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNamedInterfaceDef::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146852dc8 == 0) {
    if (DAT_146852e10 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146852e10,&PTR_s__Script_OnlineSubsystem_143f61d10)
      ;
    }
    lVar1 = DAT_146852e10;
    uVar2 = Get_Z_Construct_UScriptStruct_FNamedInterfaceDef_CRC();
    DAT_146852dc8 = GetStaticStruct(FUN_1404b8480,lVar1,L"NamedInterfaceDef",0x18,uVar2);
  }
  return;
}



// FUNCTION 1404b83f0 FUN_1404b83f0 body=47 status=ok
// SIG undefined FUN_1404b83f0(void)

longlong FUN_1404b83f0(void)

{
  if (DAT_146852df8 == 0) {
    FUN_141786440(&DAT_146852df8,&PTR_GetPrivateStaticClass_143f617d0);
  }
  return DAT_146852df8;
}



// FUNCTION 1404b8420 FUN_1404b8420 body=47 status=ok
// SIG undefined FUN_1404b8420(void)

longlong FUN_1404b8420(void)

{
  if (DAT_146852e08 == 0) {
    FUN_1417866a0(&DAT_146852e08,&PTR_FUN_1461fb780);
  }
  return DAT_146852e08;
}



// FUNCTION 1404b8450 FUN_1404b8450 body=47 status=ok
// SIG undefined FUN_1404b8450(void)

longlong FUN_1404b8450(void)

{
  if (DAT_146852df0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146852df0,&PTR_FUN_1461fb620);
  }
  return DAT_146852df0;
}



// FUNCTION 1404b8480 FUN_1404b8480 body=47 status=ok
// SIG undefined FUN_1404b8480(void)

longlong FUN_1404b8480(void)

{
  if (DAT_146852de0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146852de0,&PTR_FUN_1461fb560);
  }
  return DAT_146852de0;
}



// FUNCTION 1404b84b0 FUN_1404b84b0 body=626 status=ok
// SIG undefined FUN_1404b84b0(void)

void FUN_1404b84b0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar2 = (undefined8 *)operator_new(0xa8);
  puVar7 = (undefined8 *)0x0;
  puVar4 = puVar7;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f77990;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
    puVar2[9] = 0;
    *(undefined4 *)(puVar2 + 10) = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    *(undefined4 *)(puVar2 + 0x11) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x8c) = 0;
    puVar2[0x13] = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    puVar4 = puVar2;
  }
  FUN_1404c8c20(puVar4);
  *(undefined8 **)(param_1 + 8) = puVar4;
  lVar3 = operator_new(0xe8);
  puVar4 = puVar7;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1404bdda0(lVar3);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar4;
  puVar2 = (undefined8 *)operator_new(0x70);
  puVar4 = puVar7;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR__purecall_143f740d8;
    plVar5 = (longlong *)FUN_1404cfca0();
    iVar1 = (int)plVar5[1];
    *(int *)(plVar5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar1);
    }
    *(undefined8 **)(*plVar5 + (longlong)iVar1 * 8) = puVar2;
    *puVar2 = &PTR_FUN_143f76df0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 2;
    *(undefined1 *)(puVar2 + 4) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar4 = puVar2;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar4;
  puVar4 = (undefined8 *)operator_new(0x60);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    *puVar4 = &PTR__purecall_143f740d8;
    plVar5 = (longlong *)FUN_1404cfca0();
    iVar1 = (int)plVar5[1];
    *(int *)(plVar5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar1);
    }
    *(undefined8 **)(*plVar5 + (longlong)iVar1 * 8) = puVar4;
    *puVar4 = &PTR_LAB_143f76d90;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 2;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 2;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 2;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar2 = (undefined8 *)operator_new(0x108);
    if (puVar2 != (undefined8 *)0x0) {
      FOnlineAsyncTaskManager::FOnlineAsyncTaskManager(puVar2);
      puVar2[0x20] = puVar4;
      *puVar2 = &PTR_Init_143f76c48;
      puVar2[1] = &PTR_LAB_143f76c80;
      puVar7 = puVar2;
    }
    puVar4[10] = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = FUN_1415d42a0(puVar7,L"OnlineFileCacheThread",0,0xffffffff,0xffffffffffffffff);
      puVar4[0xb] = uVar6;
    }
    *(undefined8 **)(param_1 + 0x20) = puVar4;
  }
  return;
}



// FUNCTION 1404b8730 FUN_1404b8730 body=142 status=ok
// SIG undefined FUN_1404b8730(void)

void FUN_1404b8730(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1404b87c0 FUN_1404b87c0 body=43 status=ok
// SIG undefined FUN_1404b87c0(void)

undefined8 * FUN_1404b87c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1404b87f0 FUN_1404b87f0 body=535 status=ok
// SIG undefined FUN_1404b87f0(void)

void FUN_1404b87f0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
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
  
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar8 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar4) goto LAB_1404b88ce;
      uVar3 = puVar8[lVar5 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
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
    if ((int)uVar2 < (int)uStack_84) {
LAB_1404b88ce:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar7 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar8 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar6 = puVar8[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar9 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar7 = uVar7 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1404b8991;
      uVar6 = puVar8[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar7 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1404b8991:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    (**(code **)(*param_1 + 0x38))
              (param_1,*param_2 + (longlong)(int)uStack_5c * 0x18,param_3,param_4);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1404b8a10 FUN_1404b8a10 body=140 status=ok
// SIG undefined FUN_1404b8a10(void)

ulonglong FUN_1404b8a10(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_1404cc060();
  if ((int)uVar4 == -1) {
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar2 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar2);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)(int)uVar2 * 0x28);
    *puVar1 = &PTR_FUN_143f73d18;
    puVar1[1] = *(undefined8 *)(param_2 + 8);
    lVar3 = *(longlong *)(param_2 + 0x10);
    puVar1[2] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    *puVar1 = &PTR_FUN_143f740c8;
    puVar1[3] = 0;
    puVar1[4] = 0;
    uVar4 = (ulonglong)uVar2;
  }
  return uVar4;
}



// FUNCTION 1404b8aa0 FUN_1404b8aa0 body=120 status=ok
// SIG undefined FUN_1404b8aa0(void)

void FUN_1404b8aa0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar4 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + iVar1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
      iVar4 = (int)param_1[1];
    }
    param_2 = (undefined8 *)*param_2;
    puVar3 = (undefined8 *)((longlong)iVar4 * 0x10 + *param_1);
    iVar4 = iVar1;
    do {
      *puVar3 = *param_2;
      lVar2 = param_2[1];
      puVar3[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar3 = puVar3 + 2;
      param_2 = param_2 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 1404b8b20 FUN_1404b8b20 body=230 status=ok
// SIG undefined FUN_1404b8b20(void)

void FUN_1404b8b20(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = param_2;
    *plVar2 = (longlong)&DAT_143f3ed00;
    plVar2[2] = param_3;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f3ed48;
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



// FUNCTION 1404b8c10 FUN_1404b8c10 body=382 status=ok
// SIG undefined FUN_1404b8c10(void)

void FUN_1404b8c10(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong **param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_58;
  int local_50;
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28 [2];
  
  local_58 = (longlong *)0x0;
  local_50 = 0;
  if (((param_4 != &local_58) && (*(int *)(param_4 + 1) != 0)) &&
     (plVar1 = *param_4, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_58);
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x30))(local_58,&local_48);
  }
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar1 != (longlong *)0x0) {
    local_38 = 0;
    local_30 = 0;
    if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x30))(local_48,&local_38);
    }
    FUN_1404bcf70(plVar1,param_2,param_3,&local_38);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
  if (local_28 != param_1) {
    if (plVar1 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar2 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar2;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
      goto LAB_1404b8d3c;
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    lVar2 = FMemory::Realloc(plVar1,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
LAB_1404b8d3c:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return;
}



// FUNCTION 1404b8d90 FUN_1404b8d90 body=182 status=ok
// SIG undefined FUN_1404b8d90(void)

void FUN_1404b8d90(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5);
  puVar3 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar4 = (undefined8 *)(param_2 + 8);
    puVar2 = puVar3 + 4;
    do {
      *puVar3 = &PTR_FUN_143f73d18;
      puVar2[-3] = *puVar4;
      lVar1 = puVar4[1];
      puVar2[-2] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      *puVar3 = &PTR_FUN_143f740c8;
      puVar4 = puVar4 + 5;
      puVar2[-1] = 0;
      puVar3 = puVar3 + 5;
      *puVar2 = 0;
      puVar2 = puVar2 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1404b8e50 FUN_1404b8e50 body=418 status=ok
// SIG undefined FUN_1404b8e50(void)

undefined8 * FUN_1404b8e50(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int *piVar12;
  bool bVar13;
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar10 = plVar1;
  plVar11 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar1[1];
    bVar13 = iVar7 == 0;
    if (bVar13) {
      *(int *)(plVar1 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (plVar10 = (longlong *)0x0, plVar11 = (longlong *)0x0, !bVar13) {
      LOCK();
      bVar13 = iVar7 == (int)plVar1[1];
      if (bVar13) {
        *(int *)(plVar1 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar10 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          plVar11 = *(longlong **)(param_2 + 8);
          LOCK();
          *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          UNLOCK();
          LOCK();
          plVar10 = plVar1 + 1;
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar1)(plVar1);
            LOCK();
            piVar12 = (int *)((longlong)plVar1 + 0xc);
            iVar7 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
            }
          }
          LOCK();
          *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          UNLOCK();
          plVar10 = plVar1;
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar1[1];
      bVar13 = iVar7 == 0;
      if (bVar13) {
        *(int *)(plVar1 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  puVar8 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_GetPoolName_143f77e98;
    puVar8[1] = plVar11;
    puVar8[2] = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar8 + 3) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar3;
    *(undefined4 *)(puVar8 + 4) = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0x24) = uVar5;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[6] = uVar9;
    *puVar8 = &PTR_GetPoolName_143f77ee0;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar10)(plVar10);
      piVar12 = (int *)((longlong)plVar10 + 0xc);
      LOCK();
      iVar7 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    piVar12 = (int *)((longlong)plVar10 + 0xc);
    LOCK();
    plVar1 = plVar10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      iVar7 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      iVar7 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1404b9000 FUN_1404b9000 body=239 status=ok
// SIG undefined FUN_1404b9000(void)

undefined8 *
FUN_1404b9000(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong **param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_38;
  int local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  if (((param_5 != &local_38) && (*(int *)(param_5 + 1) != 0)) &&
     (plVar1 = *param_5, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_38);
  }
  lVar2 = operator_new(0x38,param_1);
  if (lVar2 != 0) {
    local_28 = 0;
    local_20 = 0;
    if ((local_30 != 0) && (local_38 != (longlong *)0x0)) {
      (**(code **)(*local_38 + 0x30))(local_38,&local_28);
    }
    FUN_1404bce90(lVar2,param_2,param_3,param_4,&local_28);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return param_1;
}



// FUNCTION 1404b90f0 FUN_1404b90f0 body=666 status=ok
// SIG undefined FUN_1404b90f0(void)

int * FUN_1404b90f0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  void *_Dst;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  bool local_res8;
  
  uVar10 = 0xffffffff;
  iVar9 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x30);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x30) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  plVar13 = (longlong *)((longlong)iVar12 * 0x30 + *param_1);
  *plVar13 = *param_3;
  FVariantData::FVariantData(plVar13 + 1,param_3 + 1);
  *(int *)(plVar13 + 4) = (int)param_3[4];
  *(undefined4 *)(plVar13 + 5) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar12 != 1) {
    lVar2 = *plVar13;
    iVar8 = iVar9;
    if (iVar12 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          iVar8 = iVar5;
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x30) == lVar2) break;
          iVar5 = *(int *)(*param_1 + 0x28 + (longlong)iVar5 * 0x30);
          iVar8 = iVar9;
        } while (iVar5 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x30 + *param_1);
      FVariantData::Empty((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar13,0x28);
      iVar9 = *param_2;
      bVar3 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar9;
      }
      puVar6 = (undefined4 *)((longlong)iVar9 * 0x30 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1404b9361;
    }
  }
  cVar4 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar4 == '\0') {
    uVar11 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x2c) = uVar11;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 5) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1404b9361:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1404b9390 FUN_1404b9390 body=765 status=ok
// SIG undefined FUN_1404b9390(void)

uint * FUN_1404b9390(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uVar16;
  bool bVar17;
  uint local_res8 [2];
  ulonglong *local_res10;
  
  iVar11 = 1;
  uVar16 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)(int)uVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar6 = (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar15 = (uint *)((longlong)plVar7 + lVar6);
  *puVar15 = *puVar15 | 1 << ((byte)uVar10 & 0x1f);
  lVar1 = (longlong)(int)uVar10 * 0x18;
  local_res10 = (ulonglong *)(*param_1 + lVar1);
  uVar2 = *(ulonglong *)*param_3;
  *local_res10 = uVar2;
  local_res10[1] = 0;
  *(undefined4 *)(local_res10 + 2) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar2);
    uVar5 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar9 * 0x18),local_res10,0x10);
      bVar3 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = uVar10;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar1 + lVar9) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar9) = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar7 = (longlong *)param_1[4];
      *param_2 = uVar5;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar7 + lVar6);
      *puVar15 = *puVar15 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1404b965e;
    }
  }
  if (3 < uVar14) {
    uVar5 = (uVar14 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar11;
    }
    uVar5 = (uVar14 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar11 = (int)(*local_res10 >> 4);
    uVar5 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar13 = -(uVar5 + iVar11) ^ uVar5 >> 0xd;
    uVar14 = (iVar11 - uVar5) - uVar13 ^ uVar13 >> 0xc;
    uVar5 = (uVar5 - uVar14) - uVar13 ^ uVar14 << 0x10;
    uVar13 = (uVar13 - uVar5) - uVar14 ^ uVar5 >> 5;
    uVar14 = (uVar14 - uVar5) - uVar13 ^ uVar13 >> 3;
    uVar5 = (uVar5 - uVar14) - uVar13 ^ uVar14 << 10;
    uVar14 = ((uVar13 - uVar5) - uVar14 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_res10 + 0x14) = uVar14;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_res10 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         uVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1404b965e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1404b9690 FUN_1404b9690 body=784 status=ok
// SIG undefined FUN_1404b9690(void)

int * FUN_1404b9690(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  bool local_res8;
  undefined8 local_48;
  undefined8 local_40;
  
  iVar7 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar9 * 0x20 + 4 + *param_1);
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar9;
  local_48 = 0;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  local_40 = 0;
  puVar1 = (uint *)((longlong)plVar13 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  plVar13 = (longlong *)((longlong)iVar9 * 0x20 + *param_1);
  *plVar13 = *(longlong *)*param_3;
  plVar13[1] = 0;
  plVar13[2] = 0;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_48);
  *(undefined4 *)(plVar13 + 3) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar12 != 1) {
    lVar3 = *plVar13;
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar6 +
                       ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar9 = iVar10;
          if (*(longlong *)((longlong)iVar10 * 0x20 + *param_1) == lVar3) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *param_1);
          iVar9 = iVar14;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x20 + *param_1);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>((longlong)_Dst + 8)
      ;
      _guard_xfg_dispatch_icall_nop(_Dst,plVar13,0x18);
      iVar7 = *param_2;
      bVar4 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar7;
      }
      puVar8 = (undefined4 *)((longlong)iVar7 * 0x20 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar8[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1404b997c;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar14;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x1c) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1404b997c:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1404b99a0 FUN_1404b99a0 body=666 status=ok
// SIG undefined FUN_1404b99a0(void)

int * FUN_1404b99a0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int *_Src;
  int *piVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x14);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x14) = 0xffffffff;
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
  _Src = (int *)(*param_1 + (longlong)iVar11 * 0x14);
  piVar2 = (int *)param_3[1];
  bVar13 = false;
  *(undefined8 *)_Src = *(undefined8 *)*param_3;
  _Src[2] = *piVar2;
  _Src[3] = -1;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar11 = iVar12;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar7 = FCrc::MemCrc32(_Src,8,0);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar7) * 4);
      if (iVar7 != -1) {
        lVar3 = *param_1;
        do {
          lVar9 = (longlong)iVar7;
          iVar11 = iVar7;
          if (*(int *)(lVar3 + 4 + lVar9 * 0x14) == _Src[1] &&
              *_Src == *(int *)(lVar3 + lVar9 * 0x14)) break;
          iVar7 = *(int *)(lVar3 + lVar9 * 0x14 + 0xc);
          iVar11 = iVar12;
        } while (iVar7 != -1);
      }
    }
    bVar13 = iVar11 != -1;
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar11 * 0x14),_Src,0xc);
      iVar7 = *param_2;
      bVar4 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x14) = iVar7;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar3 + (longlong)iVar7 * 0x14) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x14) = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1404b9c0d;
    }
  }
  cVar5 = FUN_1404c8080(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    iVar12 = *param_2;
    uVar8 = FCrc::MemCrc32(_Src,8);
    uVar8 = (int)param_1[9] - 1U & uVar8;
    _Src[4] = uVar8;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    _Src[3] = *(int *)((longlong)plVar10 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         iVar12;
  }
LAB_1404b9c0d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1404b9c40 FUN_1404b9c40 body=726 status=ok
// SIG undefined FUN_1404b9c40(void)

int * FUN_1404b9c40(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  bool bVar17;
  
  iVar8 = 1;
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar6 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  bVar17 = false;
  puVar15 = (uint *)((longlong)plVar14 + lVar6);
  *puVar15 = *puVar15 | 1 << ((byte)iVar11 & 0x1f);
  puVar2 = (undefined1 *)param_3[1];
  lVar1 = (longlong)iVar11 * 0x18;
  plVar14 = (longlong *)(*param_1 + lVar1);
  lVar3 = *(longlong *)*param_3;
  *plVar14 = lVar3;
  *(undefined1 *)(plVar14 + 1) = *puVar2;
  *(undefined4 *)(plVar14 + 2) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar16;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x18) == lVar3) break;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
          iVar10 = iVar16;
        } while (iVar9 != -1);
      }
    }
    bVar17 = iVar10 != -1;
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x18),plVar14,0x10);
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar14 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar14 + lVar6);
      *puVar15 = *puVar15 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1404b9ef1;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar16 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar16;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar16 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar16;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*plVar14 >> 0x20) + (int)*plVar14 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar14 + 0x14) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar14 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_1404b4e10(param_1);
  }
LAB_1404b9ef1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar17;
  }
  return param_2;
}



// FUNCTION 1404b9f20 FUN_1404b9f20 body=699 status=ok
// SIG undefined FUN_1404b9f20(void)

int * FUN_1404b9f20(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  byte *_Src;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar8 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar6 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar7 + lVar6);
  *puVar14 = *puVar14 | 1 << ((byte)iVar11 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  lVar1 = (longlong)iVar11 * 0x18;
  _Src = (byte *)(*param_1 + lVar1);
  bVar2 = *(byte *)*param_3;
  *_Src = bVar2;
  *(undefined8 *)(_Src + 8) = *puVar3;
  _Src[0x10] = 0xff;
  _Src[0x11] = 0xff;
  _Src[0x12] = 0xff;
  _Src[0x13] = 0xff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)bVar2) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(byte *)(*param_1 + (longlong)iVar9 * 0x18) == bVar2) break;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x18),_Src,0x10);
      bVar2 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar1 + lVar4) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar4) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar7 + lVar6);
      *puVar14 = *puVar14 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1404ba1b6;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar15;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar15;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 0x14) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x10) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar13) * 4) = iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1404ba1b6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 1404ba1e0 Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_> body=726 status=ok
// SIG undefined Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>(void)

int * TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  longlong *_Src;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  
  iVar7 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar5 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar15 = false;
  puVar13 = (uint *)((longlong)plVar6 + lVar5);
  *puVar13 = *puVar13 | 1 << ((byte)iVar10 & 0x1f);
  plVar6 = (longlong *)param_3[1];
  lVar1 = (longlong)iVar10 * 0x18;
  _Src = (longlong *)(*param_1 + lVar1);
  lVar2 = *(longlong *)*param_3;
  *_Src = lVar2;
  _Src[1] = *plVar6;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
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
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x18) == lVar2) break;
          iVar8 = *(int *)(*param_1 + 0x10 + (longlong)iVar8 * 0x18);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    bVar15 = iVar9 != -1;
    if (bVar15) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x18),_Src,0x10);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar6 + lVar5);
      *puVar13 = *puVar13 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1404ba491;
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
    uVar12 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    FUN_1404b4e10(param_1);
  }
LAB_1404ba491:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 1404ba4c0 Emplace<TPairInitializer<FString_const_&,FString_const_&>_> body=400 status=ok
// SIG undefined Emplace<TPairInitializer<FString_const_&,FString_const_&>_>(void)

int * TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  *param_2 = local_38[0];
  FString::FString(local_30,uVar2);
  FString::FString(local_30 + 2,uVar3);
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  bVar8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      plVar6 = (longlong *)(*param_1 + (longlong)local_res8[0] * 0x28);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)local_res8[0] * 0x28) != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar6,local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1404ba62b;
    }
  }
  cVar4 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar4 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*local_30;
    }
    uVar5 = FUN_140438070(puVar7);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)local_30 + 0x24) = uVar5;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar1
    ;
  }
LAB_1404ba62b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1404ba650 FUN_1404ba650 body=166 status=ok
// SIG undefined FUN_1404ba650(void)

longlong FUN_1404ba650(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_1;
  lVar5 = (longlong)(int)param_1[1] * 0x30 + lVar4;
  while( true ) {
    if (lVar4 == lVar5) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      return 0;
    }
    if ((int)param_2[1] == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    if (*(int *)(lVar4 + 0x10) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = *(undefined2 **)(lVar4 + 8);
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    if (iVar1 == 0) break;
    lVar4 = lVar4 + 0x30;
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return lVar4;
}



// FUNCTION 1404ba700 FUN_1404ba700 body=459 status=ok
// SIG undefined FUN_1404ba700(void)

void FUN_1404ba700(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  
  iVar3 = (param_2 + -2) / 2;
  if (-1 < iVar3) {
    iVar6 = iVar3 * 2 + 1;
    iVar10 = iVar6;
    iVar7 = iVar3;
joined_r0x0001404ba746:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar3 * 2;
        iVar8 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          plVar1 = (longlong *)param_1[iVar8];
          iVar4 = (**(code **)(*(longlong *)param_1[(longlong)iVar6 + 2] + 8))();
          iVar5 = (**(code **)(*plVar1 + 8))(plVar1);
          if (iVar5 < iVar4) {
            iVar8 = iVar6;
          }
          iVar8 = iVar8 + 1;
        }
        plVar1 = (longlong *)param_1[iVar8];
        iVar6 = (**(code **)(*(longlong *)param_1[iVar3] + 8))();
        iVar4 = (**(code **)(*plVar1 + 8))(plVar1);
        if (iVar4 < iVar6) {
          uVar2 = param_1[iVar3];
          param_1[iVar3] = param_1[iVar8];
          iVar6 = iVar8 * 2 + 1;
          param_1[iVar8] = uVar2;
          iVar3 = iVar8;
          goto joined_r0x0001404ba746;
        }
      }
      iVar3 = iVar7 + -1;
      iVar6 = iVar10 + -2;
      iVar10 = iVar6;
      iVar7 = iVar3;
    } while (-1 < iVar3);
  }
  param_2 = param_2 + -1;
  lVar9 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar3 = 0;
      uVar2 = *param_1;
      *param_1 = param_1[lVar9];
      param_1[lVar9] = uVar2;
      if (1 < param_2) {
        do {
          iVar10 = iVar3 * 2;
          iVar6 = iVar10 + 1;
          if (iVar10 + 2 < param_2) {
            plVar1 = (longlong *)param_1[iVar6];
            iVar7 = (**(code **)(*(longlong *)param_1[(longlong)iVar10 + 2] + 8))();
            iVar8 = (**(code **)(*plVar1 + 8))(plVar1);
            if (iVar8 < iVar7) {
              iVar6 = iVar10;
            }
            iVar6 = iVar6 + 1;
          }
          plVar1 = (longlong *)param_1[iVar6];
          iVar10 = (**(code **)(*(longlong *)param_1[iVar3] + 8))();
          iVar7 = (**(code **)(*plVar1 + 8))(plVar1);
          if (iVar10 <= iVar7) break;
          uVar2 = param_1[iVar3];
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = uVar2;
          iVar3 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar9 = lVar9 + -1;
    } while (0 < lVar9);
  }
  return;
}



// FUNCTION 1404ba8d0 FUN_1404ba8d0 body=508 status=ok
// SIG undefined FUN_1404ba8d0(void)

void FUN_1404ba8d0(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar6 = iVar8;
    iVar10 = iVar7;
    do {
      while (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar9 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          lVar11 = *(longlong *)(param_1[(longlong)iVar8 + 2] + 0x30);
          if ((lVar11 == 0) || (lVar1 = *(longlong *)(param_1[iVar9] + 0x30), lVar1 == 0)) {
            bVar12 = true;
          }
          else if (lVar11 == lVar1) {
            bVar12 = *(uint *)(param_1[(longlong)iVar8 + 2] + 0x58) <
                     *(uint *)(param_1[iVar9] + 0x58);
          }
          else {
            bVar12 = *(uint *)(lVar11 + 0x30) < *(uint *)(lVar1 + 0x30);
          }
          if (bVar12) {
            iVar9 = iVar8;
          }
          iVar9 = iVar9 + 1;
        }
        lVar11 = param_1[iVar9];
        lVar1 = param_1[iVar7];
        lVar2 = *(longlong *)(lVar1 + 0x30);
        if ((lVar2 != 0) && (lVar3 = *(longlong *)(lVar11 + 0x30), lVar3 != 0)) {
          if (lVar2 == lVar3) {
            bVar12 = *(uint *)(lVar1 + 0x58) < *(uint *)(lVar11 + 0x58);
          }
          else {
            bVar12 = *(uint *)(lVar2 + 0x30) < *(uint *)(lVar3 + 0x30);
          }
          if (!bVar12) break;
        }
        param_1[iVar7] = lVar11;
        param_1[iVar9] = lVar1;
        iVar7 = iVar9;
        iVar8 = iVar9 * 2 + 1;
      }
      iVar8 = iVar6 + -2;
      iVar7 = iVar10 + -1;
      iVar6 = iVar8;
      iVar10 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  lVar11 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar4 = *param_1;
      *param_1 = param_1[lVar11];
      param_1[lVar11] = uVar4;
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar6 = iVar7 * 2;
          iVar8 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            lVar1 = *(longlong *)(param_1[(longlong)iVar6 + 2] + 0x30);
            if ((lVar1 == 0) || (lVar2 = *(longlong *)(param_1[iVar8] + 0x30), lVar2 == 0)) {
              bVar12 = true;
            }
            else if (lVar1 == lVar2) {
              bVar12 = *(uint *)(param_1[(longlong)iVar6 + 2] + 0x58) <
                       *(uint *)(param_1[iVar8] + 0x58);
            }
            else {
              bVar12 = *(uint *)(lVar1 + 0x30) < *(uint *)(lVar2 + 0x30);
            }
            if (bVar12) {
              iVar8 = iVar6;
            }
            iVar8 = iVar8 + 1;
          }
          lVar1 = param_1[iVar8];
          lVar2 = param_1[iVar7];
          lVar3 = *(longlong *)(lVar2 + 0x30);
          if ((lVar3 != 0) && (lVar5 = *(longlong *)(lVar1 + 0x30), lVar5 != 0)) {
            if (lVar3 == lVar5) {
              bVar12 = *(uint *)(lVar2 + 0x58) < *(uint *)(lVar1 + 0x58);
            }
            else {
              bVar12 = *(uint *)(lVar3 + 0x30) < *(uint *)(lVar5 + 0x30);
            }
            if (!bVar12) break;
          }
          param_1[iVar7] = lVar1;
          param_1[iVar8] = lVar2;
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar11 = lVar11 + -1;
    } while (0 < lVar11);
  }
  return;
}



// FUNCTION 1404baad0 FUN_1404baad0 body=759 status=ok
// SIG undefined FUN_1404baad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404baad0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_398 [32];
  longlong *local_378;
  int local_370;
  undefined8 local_368;
  longlong local_350;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_398;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_368 = param_4;
    local_348 = param_1;
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    local_378 = &local_348;
    do {
      puVar9 = (undefined8 *)*local_378;
      puVar10 = (undefined8 *)local_378[1];
      local_350 = local_378[2];
      local_370 = (int)local_350;
      lVar5 = ((longlong)puVar10 - (longlong)puVar9 >> 3) + 1;
      puVar8 = puVar9;
      if ((int)local_350 != 0) {
LAB_1404babb0:
        if (8 < lVar5) {
          if (lVar5 < 0) {
            lVar5 = lVar5 + 1;
          }
          puVar6 = puVar10 + 1;
          uVar1 = puVar8[lVar5 >> 1];
          puVar8[lVar5 >> 1] = *puVar8;
          *puVar8 = uVar1;
          puVar9 = puVar8;
LAB_1404babe0:
          puVar9 = puVar9 + 1;
          if (puVar9 <= puVar10) goto code_r0x0001404babe9;
          goto LAB_1404bac05;
        }
        for (; puVar6 = puVar8, puVar9 = puVar8, puVar8 < puVar10; puVar10 = puVar10 + -1) {
          while (puVar9 = puVar9 + 1, puVar9 <= puVar10) {
            plVar2 = (longlong *)*puVar9;
            iVar3 = (**(code **)(*(longlong *)*puVar6 + 8))();
            iVar4 = (**(code **)(*plVar2 + 8))(plVar2);
            if (iVar4 < iVar3) {
              puVar6 = puVar9;
            }
          }
          uVar1 = *puVar6;
          *puVar6 = *puVar10;
          *puVar10 = uVar1;
          param_4 = local_368;
        }
        goto LAB_1404bacfd;
      }
LAB_1404bace9:
      FUN_1404ba700(puVar9,lVar5,param_3,param_4);
LAB_1404bacfd:
      local_378 = local_378 + -3;
    } while (&local_348 <= local_378);
  }
  return;
code_r0x0001404babe9:
  plVar2 = (longlong *)*puVar9;
  iVar3 = (**(code **)(*(longlong *)*puVar8 + 8))();
  iVar4 = (**(code **)(*plVar2 + 8))(plVar2);
  if (iVar3 <= iVar4) goto LAB_1404babe0;
LAB_1404bac05:
  do {
    puVar7 = puVar6;
    puVar6 = puVar7 + -1;
    if (puVar6 <= puVar8) break;
    plVar2 = (longlong *)*puVar6;
    iVar3 = (**(code **)(*(longlong *)*puVar8 + 8))();
    iVar4 = (**(code **)(*plVar2 + 8))(plVar2);
  } while (iVar4 <= iVar3);
  if (puVar9 <= puVar6) {
    uVar1 = *puVar9;
    *puVar9 = *puVar6;
    *puVar6 = uVar1;
    goto LAB_1404babe0;
  }
  uVar1 = *puVar8;
  *puVar8 = *puVar6;
  local_370 = local_370 + -1;
  *puVar6 = uVar1;
  if ((longlong)((longlong)puVar6 + (-8 - (longlong)puVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar10 - (longlong)puVar9 & 0xfffffffffffffff8U)) {
    if (puVar9 < puVar10) {
      *local_378 = (longlong)puVar9;
      local_378[1] = (longlong)puVar10;
      *(int *)(local_378 + 2) = local_370;
      local_378 = local_378 + 3;
    }
    if (puVar6 <= puVar8 + 1) goto LAB_1404bacfd;
    puVar10 = puVar7 + -2;
    puVar9 = puVar8;
  }
  else {
    if (puVar8 + 1 < puVar6) {
      *local_378 = (longlong)puVar8;
      local_378[1] = (longlong)(puVar7 + -2);
      *(int *)(local_378 + 2) = local_370;
      local_378 = local_378 + 3;
    }
    if (puVar10 <= puVar9) goto LAB_1404bacfd;
  }
  lVar5 = ((longlong)puVar10 - (longlong)puVar9 >> 3) + 1;
  puVar8 = puVar9;
  if (local_370 == 0) goto LAB_1404bace9;
  goto LAB_1404babb0;
}



// FUNCTION 1404badd0 FUN_1404badd0 body=742 status=ok
// SIG undefined FUN_1404badd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404badd0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (param_2 < 2) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  lStack_330 = param_1 + (param_2 - 1) * 8;
  fVar12 = (float)(longlong)param_2;
  if ((longlong)param_2 < 0) {
    fVar12 = fVar12 + 1.8446744e+19;
  }
  local_338 = param_1;
  fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
  local_328 = (undefined4)(longlong)(fVar12 + fVar12);
  _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
  plVar10 = &local_338;
LAB_1404bae60:
  plVar1 = (longlong *)plVar10[1];
  local_348 = plVar10[2];
  lVar3 = (longlong)plVar1 - *plVar10;
  plVar2 = (longlong *)*plVar10;
  plVar9 = plVar1;
  iVar7 = (int)local_348;
  while (iVar7 != 0) {
    lVar4 = (lVar3 >> 3) + 1;
    if (lVar4 < 9) goto joined_r0x0001404bb03d;
    if (lVar4 < 0) {
      lVar4 = (lVar3 >> 3) + 2;
    }
    lVar3 = plVar2[lVar4 >> 1];
    plVar2[lVar4 >> 1] = *plVar2;
    plVar5 = plVar9 + 1;
    *plVar2 = lVar3;
    plVar8 = plVar2;
LAB_1404baed0:
    do {
      plVar8 = plVar8 + 1;
      if (plVar9 < plVar8) break;
      lVar3 = *(longlong *)(*plVar2 + 0x30);
      if ((lVar3 == 0) || (lVar4 = *(longlong *)(*plVar8 + 0x30), lVar4 == 0)) break;
      if (lVar3 == lVar4) {
        bVar11 = *(uint *)(*plVar2 + 0x58) < *(uint *)(*plVar8 + 0x58);
      }
      else {
        bVar11 = *(uint *)(lVar3 + 0x30) < *(uint *)(lVar4 + 0x30);
      }
    } while (!bVar11);
    while (plVar6 = plVar5, plVar5 = plVar6 + -1, plVar2 < plVar5) {
      lVar3 = *(longlong *)(*plVar5 + 0x30);
      if ((lVar3 == 0) || (lVar4 = *(longlong *)(*plVar2 + 0x30), lVar4 == 0)) break;
      if (lVar3 == lVar4) {
        bVar11 = *(uint *)(*plVar5 + 0x58) < *(uint *)(*plVar2 + 0x58);
      }
      else {
        bVar11 = *(uint *)(lVar3 + 0x30) < *(uint *)(lVar4 + 0x30);
      }
      if (bVar11) break;
    }
    if (plVar8 <= plVar5) {
      lVar3 = *plVar8;
      *plVar8 = *plVar5;
      *plVar5 = lVar3;
      goto LAB_1404baed0;
    }
    lVar3 = *plVar2;
    iVar7 = iVar7 + -1;
    *plVar2 = *plVar5;
    *plVar5 = lVar3;
    if ((longlong)((longlong)plVar5 + (-8 - (longlong)plVar2) & 0xfffffffffffffff8U) <
        (longlong)((longlong)plVar9 - (longlong)plVar8 & 0xfffffffffffffff8U)) {
      if (plVar8 < plVar9) {
        *plVar10 = (longlong)plVar8;
        plVar10[1] = (longlong)plVar9;
        *(int *)(plVar10 + 2) = iVar7;
        plVar10 = plVar10 + 3;
      }
      if (plVar5 <= plVar2 + 1) goto LAB_1404baff6;
      plVar9 = plVar6 + -2;
      plVar8 = plVar2;
    }
    else {
      if (plVar2 + 1 < plVar5) {
        *plVar10 = (longlong)plVar2;
        plVar10[1] = (longlong)(plVar6 + -2);
        *(int *)(plVar10 + 2) = iVar7;
        plVar10 = plVar10 + 3;
      }
      if (plVar9 <= plVar8) goto LAB_1404baff6;
    }
    lVar3 = (longlong)plVar9 - (longlong)plVar8;
    plVar2 = plVar8;
  }
  FUN_1404ba8d0(plVar2,plVar1,param_3,param_4);
  goto LAB_1404baff6;
joined_r0x0001404bb03d:
  for (; plVar5 = plVar2, plVar1 = plVar2, plVar2 < plVar9; plVar9 = plVar9 + -1) {
    while (plVar8 = plVar5, plVar1 = plVar1 + 1, plVar1 <= plVar9) {
      lVar3 = *(longlong *)(*plVar8 + 0x30);
      if ((lVar3 == 0) || (lVar4 = *(longlong *)(*plVar1 + 0x30), lVar4 == 0)) {
        bVar11 = true;
      }
      else if (lVar3 == lVar4) {
        bVar11 = *(uint *)(*plVar8 + 0x58) < *(uint *)(*plVar1 + 0x58);
      }
      else {
        bVar11 = *(uint *)(lVar3 + 0x30) < *(uint *)(lVar4 + 0x30);
      }
      plVar5 = plVar1;
      if (!bVar11) {
        plVar5 = plVar8;
      }
    }
    lVar3 = *plVar8;
    *plVar8 = *plVar9;
    *plVar9 = lVar3;
  }
LAB_1404baff6:
  plVar10 = plVar10 + -3;
  if (plVar10 < &local_338) {
    return;
  }
  goto LAB_1404bae60;
}



// FUNCTION 1404bb0c0 FUN_1404bb0c0 body=69 status=ok
// SIG undefined FUN_1404bb0c0(void)

ulonglong FUN_1404bb0c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1404e6fc0();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1404bb110 LoadObject<USoundClass> body=94 status=ok
// SIG undefined LoadObject<USoundClass>(void)

void LoadObject<USoundClass>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = USoundClass::GetPrivateStaticClass();
  FUN_141799c90(uVar1,param_1,param_2,param_3,param_4,param_5,1);
  return;
}



// FUNCTION 1404bb170 NewObject<USaveGame> body=149 status=ok
// SIG undefined NewObject<USaveGame>(void)

void NewObject<USaveGame>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  if (param_3 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  FUN_1417985e0(param_2,param_1,param_3,param_4,0,param_5,param_6,param_7,0);
  return;
}



// FUNCTION 1404bb210 FUN_1404bb210 body=434 status=ok
// SIG undefined FUN_1404bb210(void)

int FUN_1404bb210(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  int local_res18;
  
  iVar1 = (int)param_1[1];
  lVar10 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  local_res18 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  if (*(int *)(*param_1 + 0x10) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = *(undefined2 **)(*param_1 + 8);
  }
  iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
  bVar11 = iVar2 != 0;
  lVar9 = 0;
  iVar2 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar8 = iVar2 + 1;
    if (lVar9 < lVar10) {
      lVar6 = lVar9 * 0x30;
      do {
        if (*(int *)(param_2 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*param_2;
        }
        if (*(int *)(lVar6 + 0x10 + *param_1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = *(undefined2 **)(lVar6 + 8 + *param_1);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
        if (bVar11 != (iVar3 != 0)) break;
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 1;
        lVar6 = lVar6 + 0x30;
      } while (lVar9 < lVar10);
    }
    iVar3 = iVar8 - iVar2;
    if (bVar11 == false) {
      puVar7 = (undefined4 *)((longlong)iVar2 * 0x30 + *param_1);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (*(longlong *)(puVar7 + 2) != 0) {
          FMemory::Free();
        }
        FUN_1416f8340(*puVar7);
        puVar7 = puVar7 + 0xc;
      }
    }
    else {
      if (local_res18 != iVar2) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)local_res18 * 0x30 + *param_1),
                   (void *)((longlong)iVar2 * 0x30 + *param_1),(longlong)iVar3 * 0x30);
      }
      local_res18 = local_res18 + iVar3;
    }
    bVar11 = (bool)(bVar11 ^ 1);
    iVar2 = iVar8;
    if (lVar10 <= lVar9) {
      *(int *)(param_1 + 1) = local_res18;
      return iVar1 - local_res18;
    }
  } while( true );
}



// FUNCTION 1404bb3d0 FUN_1404bb3d0 body=414 status=ok
// SIG undefined FUN_1404bb3d0(void)

int FUN_1404bb3d0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  iVar3 = (int)param_1[1];
  lVar6 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar11 = 0;
  cVar5 = (**(code **)**(undefined8 **)*param_1)(*(undefined8 **)*param_1,*param_2);
  bVar14 = cVar5 == '\0';
  lVar10 = 0;
  iVar12 = 0;
  do {
    iVar13 = iVar12 + 1;
    lVar10 = lVar10 + 1;
    if (lVar10 < lVar6) {
      lVar7 = lVar10 * 0x10;
      do {
        cVar5 = (**(code **)**(undefined8 **)(lVar7 + *param_1))
                          (*(undefined8 **)(lVar7 + *param_1),*param_2);
        if (bVar14 != (cVar5 == '\0')) break;
        iVar13 = iVar13 + 1;
        lVar10 = lVar10 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar10 < lVar6);
    }
    iVar8 = iVar13 - iVar12;
    if (bVar14 == false) {
      if (iVar8 != 0) {
        plVar9 = (longlong *)((longlong)iVar12 * 0x10 + 8 + *param_1);
        do {
          plVar4 = (longlong *)*plVar9;
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
              iVar12 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar9 = plVar9 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      if (iVar11 != iVar12) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0x10 + *param_1),
                   (void *)((longlong)iVar12 * 0x10 + *param_1),(longlong)iVar8 << 4);
      }
      iVar11 = iVar11 + iVar8;
    }
    bVar14 = (bool)(bVar14 ^ 1);
    iVar12 = iVar13;
    if (lVar6 <= lVar10) {
      *(int *)(param_1 + 1) = iVar11;
      return iVar3 - iVar11;
    }
  } while( true );
}



// FUNCTION 1404bb570 FUN_1404bb570 body=415 status=ok
// SIG undefined FUN_1404bb570(void)

int FUN_1404bb570(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  byte bVar4;
  int *piVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  byte bVar14;
  
  iVar1 = (int)param_1[1];
  lVar11 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *param_1;
  piVar3 = (int *)*param_2;
  uVar8 = 0;
  uVar9 = uVar8;
  uVar13 = uVar8;
  if ((((*(int *)(lVar2 + 0x1c) == piVar3[3] && *(int *)(lVar2 + 0x18) == piVar3[2]) &&
       *(int *)(lVar2 + 0x14) == piVar3[1]) && *(int *)(lVar2 + 0x10) == *piVar3) &&
     (*(longlong *)(lVar2 + 0x38) == 0)) {
    bVar14 = 0;
  }
  else {
    bVar14 = 1;
  }
  do {
    iVar7 = (int)uVar8;
    uVar9 = uVar9 + 1;
    uVar8 = (ulonglong)(iVar7 + 1);
    if ((longlong)uVar9 < lVar11) {
      piVar3 = (int *)*param_2;
      piVar5 = (int *)(*param_1 + 0x18 + uVar9 * 0x40);
      do {
        if ((((piVar5[-2] == *piVar3 && piVar5[-1] == piVar3[1]) && piVar5[1] == piVar3[3]) &&
             piVar3[2] == *piVar5) && (*(longlong *)(piVar5 + 8) == 0)) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        if (bVar14 != bVar4) break;
        uVar8 = (ulonglong)((int)uVar8 + 1);
        uVar9 = uVar9 + 1;
        piVar5 = piVar5 + 0x10;
      } while ((longlong)uVar9 < lVar11);
    }
    iVar10 = (int)uVar8 - iVar7;
    if (bVar14 == 0) {
      plVar6 = (longlong *)((longlong)iVar7 * 0x40 + *param_1);
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 8;
      }
    }
    else {
      iVar12 = (int)uVar13;
      if (iVar12 != iVar7) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar12 * 0x40 + *param_1),
                   (void *)((longlong)iVar7 * 0x40 + *param_1),(longlong)iVar10 << 6);
      }
      uVar13 = (ulonglong)(uint)(iVar12 + iVar10);
    }
    bVar14 = bVar14 ^ 1;
    if (lVar11 <= (longlong)uVar9) {
      *(int *)(param_1 + 1) = (int)uVar13;
      return iVar1 - (int)uVar13;
    }
  } while( true );
}



// FUNCTION 1404bb710 FUN_1404bb710 body=405 status=ok
// SIG undefined FUN_1404bb710(void)

int FUN_1404bb710(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  bool bVar12;
  
  iVar3 = (int)param_1[1];
  if (iVar3 == 0) {
    return 0;
  }
  iVar11 = 0;
  cVar7 = FUniqueNetIdWrapper::operator==(*param_1,*param_2);
  bVar12 = cVar7 == '\0';
  iVar9 = 0;
  do {
    iVar5 = iVar9;
    do {
      iVar5 = iVar5 + 1;
      if (iVar3 <= iVar5) break;
      cVar7 = FUniqueNetIdWrapper::operator==(*param_1 + (longlong)iVar5 * 0x28,*param_2);
    } while (bVar12 == (cVar7 == '\0'));
    iVar8 = iVar5 - iVar9;
    if (bVar12 == false) {
      puVar10 = (undefined8 *)(*param_1 + (longlong)iVar9 * 0x28);
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = &PTR_FUN_143f740c8;
        if (puVar10[3] != 0) {
          FMemory::Free();
        }
        *puVar10 = &PTR_FUN_143f73d18;
        plVar4 = (longlong *)puVar10[2];
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
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        puVar10 = puVar10 + 5;
      }
    }
    else {
      if (iVar11 != iVar9) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar11 * 0x28),
                   (void *)(*param_1 + (longlong)iVar9 * 0x28),(longlong)iVar8 * 0x28);
      }
      iVar11 = iVar11 + iVar8;
    }
    bVar12 = (bool)(bVar12 ^ 1);
    iVar9 = iVar5;
    if (iVar3 <= iVar5) {
      *(int *)(param_1 + 1) = iVar11;
      return iVar3 - iVar11;
    }
  } while( true );
}



// FUNCTION 1404bb8b0 FUN_1404bb8b0 body=361 status=ok
// SIG undefined FUN_1404bb8b0(void)

int FUN_1404bb8b0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  iVar3 = (int)param_1[1];
  if (iVar3 == 0) {
    return 0;
  }
  iVar11 = 0;
  cVar7 = (**(code **)(**(longlong **)*param_2 + 0xf8))(*(longlong **)*param_2,*param_1);
  bVar12 = cVar7 == '\0';
  iVar10 = 0;
  do {
    iVar5 = iVar10;
    do {
      iVar5 = iVar5 + 1;
      if (iVar3 <= iVar5) break;
      cVar7 = (**(code **)(**(longlong **)*param_2 + 0xf8))
                        (*(longlong **)*param_2,(longlong)iVar5 * 0x10 + *param_1);
    } while (bVar12 == (cVar7 == '\0'));
    iVar8 = iVar5 - iVar10;
    if (bVar12 == false) {
      if (iVar8 != 0) {
        plVar9 = (longlong *)((longlong)iVar10 * 0x10 + 8 + *param_1);
        do {
          plVar4 = (longlong *)*plVar9;
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
              iVar10 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar9 = plVar9 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      if (iVar11 != iVar10) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0x10 + *param_1),
                   (void *)((longlong)iVar10 * 0x10 + *param_1),(longlong)iVar8 << 4);
      }
      iVar11 = iVar11 + iVar8;
    }
    bVar12 = (bool)(bVar12 ^ 1);
    iVar10 = iVar5;
    if (iVar3 <= iVar5) {
      *(int *)(param_1 + 1) = iVar11;
      return iVar3 - iVar11;
    }
  } while( true );
}



// FUNCTION 1404bba20 FUN_1404bba20 body=530 status=ok
// SIG undefined FUN_1404bba20(void)

int FUN_1404bba20(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  bool bVar15;
  char local_res18 [8];
  int local_res20;
  
  iVar3 = (int)param_1[1];
  if (iVar3 == 0) {
    return 0;
  }
  iVar10 = 0;
  local_res20 = 0;
  cVar7 = FUN_1404c1a90(param_2,*param_1);
  bVar15 = cVar7 == '\0';
  iVar13 = 0;
  iVar11 = iVar10;
joined_r0x0001404bba8c:
  do {
    iVar10 = iVar10 + 1;
    if (iVar10 < iVar3) {
      lVar4 = *param_2;
      lVar5 = *param_1;
      cVar7 = DAT_1461fb7e0;
      if (((*(int *)(lVar4 + 0x10) == 0) ||
          (cVar7 = DAT_1461fb7e0, *(longlong **)(lVar4 + 8) == (longlong *)0x0)) ||
         (local_res18[0] = DAT_1461fb7e0, cVar8 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x18))()
         , cVar7 = DAT_1461fb7e0, cVar8 == '\0')) {
LAB_1404bbb72:
        local_res18[0] = cVar7;
        cVar7 = (**(code **)(**(longlong **)param_2[1] + 0x18))();
        if (local_res18[0] != cVar7) goto LAB_1404bbb05;
        bVar9 = true;
      }
      else {
        if (*(int *)(lVar4 + 0x10) == 0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = *(longlong **)(lVar4 + 8);
        }
        cVar8 = (**(code **)(*plVar14 + 0x38))(plVar14,(longlong)iVar10 * 0x10 + lVar5,local_res18);
        cVar7 = local_res18[0];
        if (cVar8 != '\0') goto LAB_1404bbb72;
LAB_1404bbb05:
        bVar9 = false;
      }
      iVar13 = local_res20;
      if (bVar15 == bVar9) goto joined_r0x0001404bba8c;
    }
    iVar12 = iVar10 - iVar11;
    if (bVar15 == false) {
      if (iVar12 != 0) {
        plVar14 = (longlong *)((longlong)iVar11 * 0x10 + 8 + *param_1);
        do {
          plVar6 = (longlong *)*plVar14;
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
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          plVar14 = plVar14 + 2;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
    else {
      if (iVar13 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar13 * 0x10 + *param_1),
                   (void *)((longlong)iVar11 * 0x10 + *param_1),(longlong)iVar12 << 4);
      }
      local_res20 = iVar13 + iVar12;
    }
    bVar15 = (bool)(bVar15 ^ 1);
    iVar13 = local_res20;
    iVar11 = iVar10;
    if (iVar3 <= iVar10) {
      *(int *)(param_1 + 1) = local_res20;
      return iVar3 - local_res20;
    }
  } while( true );
}



// FUNCTION 1404bbc40 FUN_1404bbc40 body=547 status=ok
// SIG undefined FUN_1404bbc40(void)

int FUN_1404bbc40(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int local_res20;
  
  iVar3 = (int)param_1[1];
  lVar7 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  local_res20 = 0;
  cVar6 = FUN_1404c1eb0(param_2,*param_1);
  bVar16 = cVar6 == '\0';
  lVar8 = 0;
  iVar14 = 0;
  do {
    iVar15 = iVar14 + 1;
    lVar8 = lVar8 + 1;
    if (lVar8 < lVar7) {
      lVar13 = lVar8 * 0x10;
      do {
        puVar11 = *(undefined8 **)*param_2;
        uVar4 = *(undefined8 *)(lVar13 + *param_1);
        puVar10 = puVar11 + (longlong)(int)((longlong *)*param_2)[1] * 2;
        for (; puVar11 != puVar10; puVar11 = puVar11 + 2) {
          cVar6 = (*(code *)**(undefined8 **)*puVar11)((undefined8 *)*puVar11,uVar4);
          if (cVar6 != '\0') goto LAB_1404bbd2a;
        }
        puVar11 = (undefined8 *)0x0;
LAB_1404bbd2a:
        if (bVar16 != (puVar11 != (undefined8 *)0x0)) break;
        iVar15 = iVar15 + 1;
        lVar8 = lVar8 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar8 < lVar7);
    }
    iVar9 = iVar15 - iVar14;
    if (bVar16 == false) {
      if (iVar9 != 0) {
        plVar12 = (longlong *)((longlong)iVar14 * 0x10 + 8 + *param_1);
        do {
          plVar5 = (longlong *)*plVar12;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar13 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar14 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar12 = plVar12 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      if (local_res20 != iVar14) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)local_res20 * 0x10 + *param_1),
                   (void *)((longlong)iVar14 * 0x10 + *param_1),(longlong)iVar9 << 4);
      }
      local_res20 = local_res20 + iVar9;
    }
    bVar16 = (bool)(bVar16 ^ 1);
    iVar14 = iVar15;
    if (lVar7 <= lVar8) {
      *(int *)(param_1 + 1) = local_res20;
      return iVar3 - local_res20;
    }
  } while( true );
}



// FUNCTION 1404bbe70 FUN_1404bbe70 body=262 status=ok
// SIG undefined FUN_1404bbe70(void)

void FUN_1404bbe70(longlong *param_1,char param_2,undefined4 param_3)

{
  undefined1 local_res8 [8];
  undefined4 local_res18 [4];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  local_res18[0] = param_3;
  FUN_1423e4ec0(&local_118,param_1,0);
  local_30 = local_30 & 0xdf | param_2 << 5;
  if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
    (**(code **)(local_118 + 0x50))(&local_118,local_res18,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*local_110;
    *local_110 = *local_110 + 4;
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,&local_118,0);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_118);
  return;
}



// FUNCTION 1404bbf80 FUN_1404bbf80 body=350 status=ok
// SIG undefined FUN_1404bbf80(void)

void FUN_1404bbf80(longlong *param_1,char param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  local_res18[0] = param_3;
  FUN_1423e4ec0(&local_118,param_1,0);
  local_30 = local_30 & 0xdf | param_2 << 5;
  if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
    (**(code **)(local_118 + 0x50))(&local_118,local_res18,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*local_110;
    *local_110 = *local_110 + 4;
  }
  if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
    (**(code **)(local_118 + 0x50))(&local_118,param_4,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,param_4,4);
    }
  }
  else {
    *param_4 = *(undefined4 *)*local_110;
    *local_110 = *local_110 + 4;
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,&local_118,0);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_118);
  return;
}



// FUNCTION 1404bc0e0 FUN_1404bc0e0 body=287 status=ok
// SIG undefined FUN_1404bc0e0(void)

void FUN_1404bc0e0(longlong *param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  local_res18[0] = param_3;
  FUN_1423e4ec0(&local_118,param_1,0);
  local_30 = local_30 & 0xdf | param_2 << 5;
  if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
    (**(code **)(local_118 + 0x50))(&local_118,local_res18,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*local_110;
    *local_110 = *local_110 + 4;
  }
  FUN_1404c0d00(&local_118,param_4);
  (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,&local_118,0);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_118);
  return;
}



// FUNCTION 1404bc200 FUN_1404bc200 body=297 status=ok
// SIG undefined FUN_1404bc200(void)

void FUN_1404bc200(longlong *param_1,char param_2,undefined4 param_3,char *param_4)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  longlong local_128;
  longlong *local_120;
  byte local_ff;
  longlong local_98;
  byte local_40;
  longlong local_38;
  longlong local_28;
  
  local_res18[0] = param_3;
  FUN_1423e4ec0(&local_128,param_1,0);
  local_40 = local_40 & 0xdf | param_2 << 5;
  if ((undefined4 *)local_120[1] < (undefined4 *)*local_120 + 1) {
    (**(code **)(local_128 + 0x50))(&local_128,local_res18,4);
    if ((local_ff & 0x10) != 0) {
      FArchive::ByteSwap(&local_128,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*local_120;
    *local_120 = *local_120 + 4;
  }
  local_res10[0] = *param_4 != '\0';
  if ((undefined1 *)local_120[1] < (undefined1 *)*local_120 + 1) {
    (**(code **)(local_128 + 0x50))(&local_128,local_res10,1);
  }
  else {
    local_res10[0] = *(undefined1 *)*local_120;
    *local_120 = *local_120 + 1;
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,&local_128,0);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_128);
  return;
}



// FUNCTION 1404bc330 FUN_1404bc330 body=423 status=ok
// SIG undefined FUN_1404bc330(void)

void FUN_1404bc330(longlong *param_1,char param_2,undefined4 param_3,char *param_4,char *param_5,
                  char *param_6)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  longlong local_128;
  longlong *local_120;
  byte local_ff;
  longlong local_98;
  byte local_40;
  longlong local_38;
  longlong local_28;
  
  local_res18[0] = param_3;
  FUN_1423e4ec0(&local_128,param_1,0);
  local_40 = local_40 & 0xdf | param_2 << 5;
  if ((undefined4 *)local_120[1] < (undefined4 *)*local_120 + 1) {
    (**(code **)(local_128 + 0x50))(&local_128,local_res18,4);
    if ((local_ff & 0x10) != 0) {
      FArchive::ByteSwap(&local_128,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*local_120;
    *local_120 = *local_120 + 4;
  }
  local_res10[0] = *param_4 != '\0';
  if ((ulonglong)local_120[1] < *local_120 + 1U) {
    (**(code **)(local_128 + 0x50))(&local_128,local_res10,1);
  }
  else {
    *local_120 = *local_120 + 1;
  }
  local_res10[0] = *param_5 != '\0';
  if ((ulonglong)local_120[1] < *local_120 + 1U) {
    (**(code **)(local_128 + 0x50))(&local_128,local_res10,1);
  }
  else {
    *local_120 = *local_120 + 1;
  }
  local_res10[0] = *param_6 != '\0';
  if ((undefined1 *)local_120[1] < (undefined1 *)*local_120 + 1) {
    (**(code **)(local_128 + 0x50))(&local_128,local_res10,1);
  }
  else {
    local_res10[0] = *(undefined1 *)*local_120;
    *local_120 = *local_120 + 1;
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,&param_5,&local_128,0);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_128);
  return;
}



// FUNCTION 1404bc4e0 FUN_1404bc4e0 body=534 status=ok
// SIG undefined FUN_1404bc4e0(void)

void FUN_1404bc4e0(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_res8 [2];
  undefined1 local_138 [16];
  longlong local_128;
  longlong *local_120;
  byte local_ff;
  longlong local_98;
  byte local_40;
  longlong local_38;
  longlong local_28;
  
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar2 != '\0')) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar3 = plVar5 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar4 = *plVar5;
      if ((lVar4 != 0) &&
         (cVar2 = FUniqueNetIdWrapper::operator==(lVar4 + 0x158,param_2), cVar2 != '\0')) {
        plVar3 = (longlong *)FUN_1425bd330(lVar4,6);
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        lVar4 = FUN_1404e6fc0();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return;
        }
        local_res8[0] = param_4;
        FUN_1423e4ec0(&local_128,plVar3,0);
        local_40 = param_3 << 5 | local_40 & 0xdf;
        if ((undefined4 *)local_120[1] < (undefined4 *)*local_120 + 1) {
          (**(code **)(local_128 + 0x50))(&local_128,local_res8,4);
          if ((local_ff & 0x10) != 0) {
            FArchive::ByteSwap(&local_128,local_res8,4);
          }
        }
        else {
          local_res8[0] = *(undefined4 *)*local_120;
          *local_120 = *local_120 + 4;
        }
        FUN_1425da060(&local_128,param_5);
        FUN_14158ce90(&local_128,param_6);
        (**(code **)(*plVar3 + 0x2c8))(plVar3,local_138,&local_128,0);
        if (local_28 != 0) {
          FMemory::Free();
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
        if (local_98 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(&local_128);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1404bc700 FUN_1404bc700 body=536 status=ok
// SIG undefined FUN_1404bc700(void)

void FUN_1404bc700(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_res8 [2];
  undefined1 local_138 [16];
  longlong local_128;
  longlong *local_120;
  byte local_ff;
  longlong local_98;
  byte local_40;
  longlong local_38;
  longlong local_28;
  
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar2 != '\0')) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar3 = plVar5 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar4 = *plVar5;
      if ((lVar4 != 0) &&
         (cVar2 = FUniqueNetIdWrapper::operator==(lVar4 + 0x158,param_2), cVar2 != '\0')) {
        plVar3 = (longlong *)FUN_1425bd330(lVar4,6);
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        lVar4 = FUN_1404e6fc0();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return;
        }
        local_res8[0] = param_4;
        FUN_1423e4ec0(&local_128,plVar3,0);
        local_40 = local_40 & 0xdf | param_3 << 5;
        if ((undefined4 *)local_120[1] < (undefined4 *)*local_120 + 1) {
          (**(code **)(local_128 + 0x50))(&local_128,local_res8,4);
          if ((local_ff & 0x10) != 0) {
            FArchive::ByteSwap(&local_128,local_res8,4);
          }
        }
        else {
          local_res8[0] = *(undefined4 *)*local_120;
          *local_120 = *local_120 + 4;
        }
        (**(code **)(local_128 + 0x40))(&local_128,param_5);
        FUN_14158ce90(&local_128,param_6);
        (**(code **)(*plVar3 + 0x2c8))(plVar3,local_138,&local_128,0);
        if (local_28 != 0) {
          FMemory::Free();
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
        if (local_98 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(&local_128);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1404bc920 FUN_1404bc920 body=579 status=ok
// SIG undefined FUN_1404bc920(void)

void FUN_1404bc920(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,char *param_8)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined4 local_148 [4];
  longlong local_138;
  longlong *local_130;
  byte local_10f;
  longlong local_a8;
  byte local_50;
  longlong local_48;
  longlong local_38;
  
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar2 != '\0')) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar3 = plVar5 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar4 = *plVar5;
      if ((lVar4 != 0) &&
         (cVar2 = FUniqueNetIdWrapper::operator==(lVar4 + 0x158,param_2), cVar2 != '\0')) {
        plVar3 = (longlong *)FUN_1425bd330(lVar4,6);
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        lVar4 = FUN_1404e6fc0();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return;
        }
        local_148[0] = param_4;
        FUN_1423e4ec0(&local_138,plVar3,0);
        local_50 = local_50 & 0xdf | param_3 << 5;
        if ((undefined4 *)local_130[1] < (undefined4 *)*local_130 + 1) {
          (**(code **)(local_138 + 0x50))(&local_138,local_148,4);
          if ((local_10f & 0x10) != 0) {
            FArchive::ByteSwap(&local_138,local_148,4);
          }
        }
        else {
          local_148[0] = *(undefined4 *)*local_130;
          *local_130 = *local_130 + 4;
        }
        (**(code **)(local_138 + 0x40))(&local_138,param_5);
        FUN_14158ce90(&local_138,param_6);
        FUN_14158ce90(&local_138,param_7);
        local_res8[0] = *param_8 != '\0';
        if ((undefined1 *)local_130[1] < (undefined1 *)*local_130 + 1) {
          (**(code **)(local_138 + 0x50))(&local_138,local_res8,1);
        }
        else {
          local_res8[0] = *(undefined1 *)*local_130;
          *local_130 = *local_130 + 1;
        }
        (**(code **)(*plVar3 + 0x2c8))(plVar3,local_res8,&local_138,0);
        if (local_38 != 0) {
          FMemory::Free();
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
        if (local_a8 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(&local_138);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1404bcb70 FUN_1404bcb70 body=397 status=ok
// SIG undefined FUN_1404bcb70(void)

void FUN_1404bcb70(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  undefined1 local_128 [16];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  if ((*(longlong *)(param_1 + 200) != 0) &&
     (plVar2 = (longlong *)FUN_1425bd330(*(longlong *)(param_1 + 200),6), plVar2 != (longlong *)0x0)
     ) {
    lVar3 = FUN_1404e6fc0();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_res8[0] = param_3;
      FUN_1423e4ec0(&local_118,plVar2,0);
      local_30 = param_2 << 5 | local_30 & 0xdf;
      if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
        (**(code **)(local_118 + 0x50))(&local_118,local_res8,4);
        if ((local_ef & 0x10) != 0) {
          FArchive::ByteSwap(&local_118,local_res8,4);
        }
      }
      else {
        local_res8[0] = *(undefined4 *)*local_110;
        *local_110 = *local_110 + 4;
      }
      FUN_1425da060(&local_118,param_4);
      (**(code **)(*plVar2 + 0x2c8))(plVar2,local_128,&local_118,0);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(&local_118);
    }
  }
  return;
}



// FUNCTION 1404bcd00 FUN_1404bcd00 body=397 status=ok
// SIG undefined FUN_1404bcd00(void)

void FUN_1404bcd00(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  undefined1 local_128 [16];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  if ((*(longlong *)(param_1 + 200) != 0) &&
     (plVar2 = (longlong *)FUN_1425bd330(*(longlong *)(param_1 + 200),6), plVar2 != (longlong *)0x0)
     ) {
    lVar3 = FUN_1404e6fc0();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_res8[0] = param_3;
      FUN_1423e4ec0(&local_118,plVar2,0);
      local_30 = param_2 << 5 | local_30 & 0xdf;
      if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
        (**(code **)(local_118 + 0x50))(&local_118,local_res8,4);
        if ((local_ef & 0x10) != 0) {
          FArchive::ByteSwap(&local_118,local_res8,4);
        }
      }
      else {
        local_res8[0] = *(undefined4 *)*local_110;
        *local_110 = *local_110 + 4;
      }
      FUN_14158ce90(&local_118,param_4);
      (**(code **)(*plVar2 + 0x2c8))(plVar2,local_128,&local_118,0);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(&local_118);
    }
  }
  return;
}



// FUNCTION 1404bce90 FUN_1404bce90 body=224 status=ok
// SIG undefined FUN_1404bce90(void)

undefined8 *
FUN_1404bce90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong **param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *local_28;
  int local_20;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  if (((param_5 != &local_28) && (*(int *)(param_5 + 1) != 0)) &&
     (plVar1 = *param_5, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_28);
  }
  *param_1 = &PTR_FUN_143f77c48;
  FWeakObjectPtr::operator=(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((&local_28 != (longlong **)(param_1 + 4)) && (local_20 != 0)) &&
     (local_28 != (longlong *)0x0)) {
    (**(code **)(*local_28 + 0x30))();
  }
  uVar2 = FDelegateHandle::GenerateNewID();
  param_1[6] = uVar2;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  *param_1 = &PTR_FUN_143f77c90;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return param_1;
}



// FUNCTION 1404bcf70 FUN_1404bcf70 body=218 status=ok
// SIG undefined FUN_1404bcf70(void)

undefined8 *
FUN_1404bcf70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong **param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  if (((param_4 != &local_18) && (*(int *)(param_4 + 1) != 0)) &&
     (plVar1 = *param_4, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_18);
  }
  *param_1 = &PTR_FUN_143f78168;
  FWeakObjectPtr::operator=(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (((&local_18 != (longlong **)(param_1 + 3)) && (local_10 != 0)) &&
     (local_18 != (longlong *)0x0)) {
    (**(code **)(*local_18 + 0x30))();
  }
  uVar2 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar2;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  *param_1 = &PTR_FUN_143f781b0;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return param_1;
}



// FUNCTION 1404bd050 FUN_1404bd050 body=2403 status=ok
// SIG undefined FUN_1404bd050(void)

/* WARNING: Removing unreachable block (ram,0x0001404bd841) */
/* WARNING: Removing unreachable block (ram,0x0001404bd82c) */
/* WARNING: Removing unreachable block (ram,0x0001404bd865) */

undefined8 * FUN_1404bd050(undefined8 *param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined4 uStack_fc;
  longlong *local_f8;
  int local_f0;
  longlong *local_e8;
  int local_e0;
  longlong *local_d8;
  int local_d0;
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  
  FGCObject::FGCObject();
  FSelfRegisteringExec::FSelfRegisteringExec(param_1 + 2);
  puVar8 = param_1 + 3;
  *puVar8 = &PTR__purecall_143f740d8;
  plVar4 = (longlong *)FUN_1404cfca0();
  iVar3 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar3 + 1;
  if (*(int *)((longlong)plVar4 + 0xc) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar3);
  }
  pplVar2 = (longlong **)(param_1 + 0x17);
  plVar6 = (longlong *)0x0;
  *(undefined8 **)(*plVar4 + (longlong)iVar3 * 8) = puVar8;
  *param_1 = &PTR__scalar_deleting_destructor__143f74700;
  param_1[2] = &PTR_LAB_143f74750;
  *puVar8 = &PTR_FUN_143f74760;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *pplVar2 = (longlong *)0x0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x1c,0);
  *(undefined4 *)(param_1 + 0x1f) = 0x80;
  puVar8 = (undefined8 *)param_1[0x1e];
  if ((undefined8 *)param_1[0x1e] == (undefined8 *)0x0) {
    puVar8 = param_1 + 0x1c;
  }
  *puVar8 = 0;
  puVar8[1] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x20,0);
  *(undefined4 *)(param_1 + 0x23) = 0x80;
  puVar8 = (undefined8 *)param_1[0x22];
  if ((undefined8 *)param_1[0x22] == (undefined8 *)0x0) {
    puVar8 = param_1 + 0x20;
  }
  *puVar8 = 0;
  puVar8[1] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x24,0);
  *(undefined4 *)(param_1 + 0x27) = 0x80;
  puVar8 = (undefined8 *)param_1[0x26];
  if ((undefined8 *)param_1[0x26] == (undefined8 *)0x0) {
    puVar8 = param_1 + 0x24;
  }
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  plVar5 = (longlong *)operator_new(0x50);
  plVar4 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (longlong)&PTR_FUN_143f746c0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar5[5] = 2;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    *(undefined4 *)(plVar5 + 9) = 0;
    *(undefined1 *)((longlong)plVar5 + 0x4c) = 1;
    plVar4 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar4;
    plVar6 = plVar5;
  }
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  local_b8 = plVar4;
  local_b0 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_1404bd38f;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar11 = (longlong *)plVar5[1];
    if (plVar6 != plVar11) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar11 = (longlong *)plVar5[1];
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      plVar5[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar6)(plVar6);
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
LAB_1404bd38f:
  uVar10 = 0;
  if (pplVar2 != &local_b8) {
    *pplVar2 = plVar4;
    local_b8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x18,&local_b0);
  }
  plVar4 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_b0 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  plVar4 = *pplVar2;
  local_f8 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_f0 = 3;
  local_f8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_GetPoolName_143f77a38;
    plVar6[1] = (longlong)param_1;
    *(undefined4 *)(plVar6 + 2) = 0x404dd8d0;
    *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
    *(undefined4 *)(plVar6 + 3) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_fc;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143f77a80;
  }
  puVar8 = (undefined8 *)(**(code **)(*plVar4 + 8))(plVar4,local_res20,&local_f8);
  param_1[0x2c] = *puVar8;
  if (local_f0 == 0) {
LAB_1404bd4b6:
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free(local_f8);
    }
  }
  else if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x28))(local_f8,0);
    if (local_f8 != (longlong *)0x0) {
      local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
    }
    local_f0 = 0;
    goto LAB_1404bd4b6;
  }
  FUN_1404cdd50(&local_88,0);
  if (local_88 != (longlong *)0x0) {
    local_e8 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_e0 = 3;
    local_e8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_143f77a38;
      plVar4[1] = (longlong)param_1;
      *(undefined4 *)(plVar4 + 2) = 0x404d9160;
      *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_fc;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar7;
      *plVar4 = (longlong)&PTR_GetPoolName_143f77a80;
    }
    puVar8 = (undefined8 *)(**(code **)(*local_88 + 0x148))(local_88,local_68,&local_e8);
    param_1[0x2d] = *puVar8;
    if (local_e0 == 0) {
LAB_1404bd59e:
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free(local_e8);
      }
    }
    else if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 0x28))(local_e8,0);
      if (local_e8 != (longlong *)0x0) {
        local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
      }
      local_e0 = 0;
      goto LAB_1404bd59e;
    }
    local_d8 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_d0 = 3;
    local_d8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_143f77a38;
      plVar4[1] = (longlong)param_1;
      *(undefined4 *)(plVar4 + 2) = 0x404d9160;
      *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_fc;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar7;
      *plVar4 = (longlong)&PTR_GetPoolName_143f77a80;
    }
    puVar8 = (undefined8 *)(**(code **)(*local_88 + 0x168))(local_88,local_60,&local_d8);
    param_1[0x2e] = *puVar8;
    if (local_d0 != 0) {
      if (local_d8 == (longlong *)0x0) goto LAB_1404bd667;
      (**(code **)(*local_d8 + 0x28))(local_d8,0);
      if (local_d8 != (longlong *)0x0) {
        local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
      }
      local_d0 = 0;
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
  }
LAB_1404bd667:
  FUN_1404cf890(&local_98,0);
  if (local_98 != (longlong *)0x0) {
    local_c8 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_c0 = 3;
    local_c8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar4[1] = (longlong)param_1;
      *plVar4 = (longlong)&PTR_GetPoolName_143f77ac8;
      *(undefined4 *)(plVar4 + 2) = 0x404d9160;
      *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_fc;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar7;
      *plVar4 = (longlong)&PTR_GetPoolName_143f77b10;
    }
    puVar8 = (undefined8 *)(**(code **)(*local_98 + 0x80))(local_98,local_58,&local_c8);
    param_1[0x31] = *puVar8;
    if (local_c0 != 0) {
      if (local_c8 == (longlong *)0x0) goto LAB_1404bd74c;
      (**(code **)(*local_c8 + 0x28))(local_c8,0);
      if (local_c8 != (longlong *)0x0) {
        local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
      }
      local_c0 = 0;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
LAB_1404bd74c:
  lVar7 = FUN_142b45e90();
  lVar7 = *(longlong *)(lVar7 + 0x18);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = (longlong)param_1;
    *plVar4 = (longlong)&PTR_GetPoolName_143f77a38;
    *(undefined4 *)(plVar4 + 2) = 0x40437760;
    *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
    *(undefined4 *)(plVar4 + 3) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_fc;
    local_78 = plVar4;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar9;
    *plVar4 = (longlong)&PTR_GetPoolName_143f77a80;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar7 + 0x28,1);
    puVar8 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_50);
    iVar3 = *(int *)(lVar7 + 0x30);
    uVar10 = *puVar8;
    *(int *)(lVar7 + 0x30) = iVar3 + 1;
    if (*(int *)(lVar7 + 0x34) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar7 + 0x28,iVar3);
    }
    puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar7 + 0x28));
    *puVar8 = plVar4;
    *(undefined4 *)(puVar8 + 1) = 3;
  }
  param_1[0x2f] = uVar10;
  local_78 = (longlong *)0x0;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  puVar8 = (undefined8 *)operator_new(0x30,&local_a8);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = param_1;
    *puVar8 = &PTR_GetPoolName_143f77a38;
    *(undefined4 *)(puVar8 + 2) = 0x404d9160;
    *(undefined4 *)((longlong)puVar8 + 0x14) = 1;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_fc;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[5] = uVar10;
    *puVar8 = &PTR_GetPoolName_143f77a80;
  }
  TBaseMulticastDelegate<void>::Add(&DAT_1464af3b8,&local_res18,&local_a8);
  plVar4 = local_a8;
  if (local_a0 != 0) {
    if (local_a8 == (longlong *)0x0) goto LAB_1404bd918;
    (**(code **)(*local_a8 + 0x28))(local_a8,0);
    local_a8 = (longlong *)FMemory::Realloc(plVar4,0,0);
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
LAB_1404bd918:
  plVar4 = local_90;
  param_1[0x30] = local_res18;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_90 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  plVar4 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_80 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1404bd9c0 FGCObject body=241 status=ok
// SIG undefined FGCObject(void)

undefined8 * FGCObject::FGCObject(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if (DAT_1468c217e == '\0') {
    if (DAT_1469e6880 == 0) {
      uVar3 = GetTransientPackage();
      FUN_1417846f0(uVar3,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      lVar6 = 0;
      uVar4 = UGCObjectReferencer::GetPrivateStaticClass();
      DAT_1469e6880 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
      iVar1 = *(int *)(DAT_1469e6880 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar5;
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
      }
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
    }
    UGCObjectReferencer::AddObject(DAT_1469e6880,param_1);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}



// FUNCTION 1404bdac0 FUN_1404bdac0 body=107 status=ok
// SIG undefined FUN_1404bdac0(void)

undefined8 * FUN_1404bdac0(undefined8 *param_1,undefined8 param_2)

{
  double dVar1;
  LARGE_INTEGER local_res8;
  
  *param_1 = &PTR_FUN_143f76b48;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * DAT_1468b02f8;
  *param_1 = &PTR_FUN_143f76c90;
  param_1[2] = param_2;
  param_1[1] = dVar1 + 16777216.0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 7;
  return param_1;
}



// FUNCTION 1404bdb30 FUN_1404bdb30 body=612 status=ok
// SIG undefined FUN_1404bdb30(void)

undefined8 * FUN_1404bdb30(undefined8 *param_1)

{
  FGCObject::FGCObject();
  *param_1 = &PTR_FUN_143f76288;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 2;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 2;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 2;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 2;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 2;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 2;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 2;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 2;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 2;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 2;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 2;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 2;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 2;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 2;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 2;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 2;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  return param_1;
}



// FUNCTION 1404bdda0 FUN_1404bdda0 body=409 status=ok
// SIG undefined FUN_1404bdda0(void)

undefined8 * FUN_1404bdda0(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  *param_1 = &PTR__purecall_143f740d8;
  plVar2 = (longlong *)FUN_1404cfca0();
  iVar1 = (int)plVar2[1];
  *(int *)(plVar2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
  }
  uVar5 = 0;
  *(undefined8 **)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  *param_1 = &PTR_FUN_143f74a48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  param_1[0x1c] = 0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = (longlong)param_1;
    *plVar2 = (longlong)&PTR_GetPoolName_143f61570;
    plVar2[2] = (longlong)FUN_1404da3e0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f615b8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146533130,1);
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_146533138;
    lVar3 = (longlong)DAT_146533138;
    uVar5 = *puVar4;
    DAT_146533138 = DAT_146533138 + 1;
    if (DAT_14653313c < DAT_146533138) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146533130,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_146533130);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  param_1[0x1c] = uVar5;
  return param_1;
}



// FUNCTION 1404bdf40 FUN_1404bdf40 body=248 status=ok
// SIG undefined FUN_1404bdf40(void)

undefined8 * FUN_1404bdf40(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_143f74338;
  param_1[1] = &PTR_FUN_143f73d18;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  lVar1 = *(longlong *)(param_2 + 0x18);
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[1] = &PTR_FUN_143f740c8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  iVar4 = *(int *)(param_2 + 0x38);
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1 + 6,iVar4,0);
    puVar3 = (undefined8 *)param_1[6];
    puVar5 = (undefined8 *)(lVar1 + 8);
    puVar2 = puVar3 + 4;
    do {
      *puVar3 = &PTR_FUN_143f73d18;
      puVar2[-3] = *puVar5;
      lVar1 = puVar5[1];
      puVar2[-2] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      *puVar3 = &PTR_FUN_143f740c8;
      puVar5 = puVar5 + 5;
      puVar2[-1] = 0;
      puVar3 = puVar3 + 5;
      *puVar2 = 0;
      puVar2 = puVar2 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_1;
}



// FUNCTION 1404be040 FUN_1404be040 body=280 status=ok
// SIG undefined FUN_1404be040(void)

undefined8 * FUN_1404be040(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  
  FUN_1425ae280();
  *param_1 = &PTR__scalar_deleting_destructor__143f74a90;
  puVar2 = param_1 + 0xa8;
  param_1[5] = &PTR_LAB_143f74eb8;
  *puVar2 = &PTR_LAB_143f74ec8;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  if (((*(uint *)(param_1 + 1) >> 4 & 1) == 0) && (lVar5 = FUN_1404cd630(), lVar5 != 0)) {
    iVar4 = *(int *)(lVar5 + 0x20);
    plVar1 = (longlong *)(lVar5 + 0x18);
    plVar6 = *(longlong **)(lVar5 + 0x18);
    plVar3 = plVar6 + iVar4;
    for (; plVar6 != plVar3; plVar6 = plVar6 + 1) {
      if ((undefined8 *)*plVar6 == puVar2) goto LAB_1404be11f;
    }
    *(int *)(lVar5 + 0x20) = iVar4 + 1;
    if (*(int *)(lVar5 + 0x24) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    local_res8[0] = 0;
    *(undefined8 **)((longlong)iVar4 * 8 + *plVar1) = puVar2;
    FUN_1404baad0(*plVar1,(longlong)*(int *)(lVar5 + 0x20),0,local_res8);
  }
LAB_1404be11f:
  *param_1 = &PTR__scalar_deleting_destructor__143f74f10;
  param_1[5] = &PTR_LAB_143f74eb8;
  *puVar2 = &PTR_LAB_143f75338;
  uVar7 = FUN_1404e6fc0();
  param_1[0x2b] = uVar7;
  return param_1;
}



// FUNCTION 1404be160 FUN_1404be160 body=95 status=ok
// SIG undefined FUN_1404be160(void)

undefined8 * FUN_1404be160(undefined8 *param_1)

{
  FUN_1425adbf0();
  *param_1 = &PTR_FUN_143f75380;
  param_1[5] = &PTR_LAB_143f75700;
  param_1[0x32e] = &PTR_FUN_143f75710;
  param_1[0x32f] = 0;
  param_1[0x330] = 0;
  param_1[0x331] = 0;
  param_1[0x332] = 0;
  *(undefined1 *)((longlong)param_1 + 0x193c) = 1;
  return param_1;
}



// FUNCTION 1404be1c0 FUN_1404be1c0 body=266 status=ok
// SIG undefined FUN_1404be1c0(void)

undefined8 * FUN_1404be1c0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  FUN_1425ae280();
  *param_1 = &PTR__scalar_deleting_destructor__143f74a90;
  puVar2 = param_1 + 0xa8;
  param_1[5] = &PTR_LAB_143f74eb8;
  *puVar2 = &PTR_LAB_143f74ec8;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  if (((*(uint *)(param_1 + 1) >> 4 & 1) == 0) && (lVar5 = FUN_1404cd630(), lVar5 != 0)) {
    plVar6 = *(longlong **)(lVar5 + 0x18);
    iVar4 = *(int *)(lVar5 + 0x20);
    plVar1 = (longlong *)(lVar5 + 0x18);
    plVar3 = plVar6 + iVar4;
    while( true ) {
      if (plVar6 == plVar3) {
        *(int *)(lVar5 + 0x20) = iVar4 + 1;
        if (*(int *)(lVar5 + 0x24) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        local_res8[0] = 0;
        *(undefined8 **)((longlong)iVar4 * 8 + *plVar1) = puVar2;
        FUN_1404baad0(*plVar1,(longlong)*(int *)(lVar5 + 0x20),0,local_res8);
        return param_1;
      }
      if ((undefined8 *)*plVar6 == puVar2) break;
      plVar6 = plVar6 + 1;
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1404be2d0 FUN_1404be2d0 body=335 status=ok
// SIG undefined FUN_1404be2d0(void)

undefined8 * FUN_1404be2d0(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  FUN_141781840();
  param_1[5] = &PTR_FUN_143f73f50;
  puVar7 = param_1 + 6;
  *puVar7 = &PTR__purecall_143f740d8;
  plVar5 = (longlong *)FUN_1404cfca0();
  iVar1 = (int)plVar5[1];
  *(int *)(plVar5 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar1);
  }
  *(undefined8 **)(*plVar5 + (longlong)iVar1 * 8) = puVar7;
  *param_1 = &PTR_FUN_143f74388;
  param_1[5] = &PTR_LAB_143f74658;
  *puVar7 = &PTR_StartProfileThreadUsage_143f74678;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    puVar6 = (undefined4 *)FGuid::NewGuid(local_18);
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *(undefined4 *)((longlong)param_1 + 0xac) = *puVar6;
    *(undefined4 *)(param_1 + 0x16) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xb4) = uVar3;
    *(undefined4 *)(param_1 + 0x17) = uVar4;
    *(int *)(param_1 + 0x15) = DAT_146852e20;
    DAT_146852e20 = DAT_146852e20 + 1;
    puVar7 = (undefined8 *)
             FName::FName(local_res8,L"BeaconDriver",*(undefined4 *)(param_1 + 0x15),1);
    param_1[8] = *puVar7;
  }
  return param_1;
}



// FUNCTION 1404be420 FUN_1404be420 body=286 status=ok
// SIG undefined FUN_1404be420(void)

undefined8 * FUN_1404be420(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  FUN_1404be2d0();
  *param_1 = &PTR_FUN_143f75ac8;
  param_1[5] = &PTR_LAB_143f75da8;
  param_1[6] = &PTR_StartProfileThreadUsage_143f75dc8;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  uVar1 = UXSparseGridManager::GetPrivateStaticClass();
  param_1[0x1c] = uVar1;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    puVar2 = (undefined8 *)
             FName::FName(local_res8,L"BeaconDriverClient",*(undefined4 *)(param_1 + 0x15),1);
    param_1[8] = *puVar2;
  }
  return param_1;
}



// FUNCTION 1404be540 FUN_1404be540 body=241 status=ok
// SIG undefined FUN_1404be540(void)

undefined8 * FUN_1404be540(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  FUN_1404be2d0();
  *param_1 = &PTR_FUN_143f75768;
  param_1[5] = &PTR_LAB_143f75a60;
  param_1[6] = &PTR_FUN_143f75a80;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    puVar1 = (undefined8 *)
             FName::FName(local_res8,L"BeaconDriverHost",*(undefined4 *)(param_1 + 0x15),1);
    param_1[8] = *puVar1;
  }
  return param_1;
}



// FUNCTION 1404be640 FUN_1404be640 body=380 status=ok
// SIG undefined FUN_1404be640(void)

undefined8 * FUN_1404be640(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 local_res8 [8];
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 *local_18;
  undefined8 local_10;
  
  FUN_1425d8b80();
  *param_1 = &PTR_FUN_143f76580;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  FConfigCacheIni::GetString
            (DAT_1468b6148,L"OnlineSubsystem",L"DefaultPlatformService",&local_18,&DAT_1468e2360);
  puVar3 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar3 = local_18;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,puVar3,1);
  param_1[5] = *puVar2;
  local_28 = (undefined2 *)0x0;
  local_20 = 0;
  cVar1 = FConfigCacheIni::GetString
                    (DAT_1468b6148,L"OnlineSubsystem",L"SessionInterfaceSubsystemName",&local_28,
                     &DAT_1468e2360);
  if (cVar1 != '\0') {
    puVar3 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar3 = local_28;
    }
    puVar2 = (undefined8 *)FName::FName(local_res8,puVar3,1);
    param_1[6] = *puVar2;
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1404be7c0 UOnlinePIESettings body=74 status=ok
// SIG undefined UOnlinePIESettings(void)

undefined8 * UOnlinePIESettings::UOnlinePIESettings(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  UDeveloperSettings::UDeveloperSettings();
  *param_1 = &PTR__scalar_deleting_destructor__143f76e58;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LevelEditor",1);
  param_1[5] = *puVar1;
  return param_1;
}



// FUNCTION 1404be810 FUN_1404be810 body=328 status=ok
// SIG undefined FUN_1404be810(void)

undefined8 * FUN_1404be810(undefined8 *param_1)

{
  FUN_1425d8bb0();
  *param_1 = &PTR_FUN_143f770f0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = &PTR_FUN_143f769a8;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = &PTR_FUN_143f769a0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 9999;
  *(undefined2 *)(param_1 + 0x32) = 0;
  return param_1;
}



// FUNCTION 1404be960 FUN_1404be960 body=173 status=ok
// SIG undefined FUN_1404be960(void)

void FUN_1404be960(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x30);
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
      plVar7 = plVar7 + 0xb;
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



// FUNCTION 1404bea10 FUN_1404bea10 body=94 status=ok
// SIG undefined FUN_1404bea10(void)

void FUN_1404bea10(undefined8 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  puVar1 = (undefined4 *)*param_1;
  if (iVar2 != 0) {
    do {
      if (*(longlong *)(puVar1 + 2) != 0) {
        FMemory::Free();
      }
      FUN_1416f8340(*puVar1);
      puVar1 = puVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined4 *)*param_1;
  }
  if (puVar1 != (undefined4 *)0x0) {
    FMemory::Free(puVar1);
  }
  return;
}



// FUNCTION 1404bea70 ~TArray<FMediaTextureResource::TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_> body=168 status=ok
// SIG undefined ~TArray<FMediaTextureResource::TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>(void)

void TArray<FMediaTextureResource::TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>
     ::
     ~TArray<FMediaTextureResource::TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>
               (longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(plVar7 + 1);
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
      plVar7 = plVar7 + 4;
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



// FUNCTION 1404beb20 ~TArray<TTLCharaEdit_EditItem,FDefaultAllocator> body=159 status=ok
// SIG undefined ~TArray<TTLCharaEdit_EditItem,FDefaultAllocator>(void)

void TArray<TTLCharaEdit_EditItem,FDefaultAllocator>::
     ~TArray<TTLCharaEdit_EditItem,FDefaultAllocator>(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 8);
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
      plVar7 = plVar7 + 7;
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



// FUNCTION 1404bebc0 FUN_1404bebc0 body=206 status=ok
// SIG undefined FUN_1404bebc0(void)

void FUN_1404bebc0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  
  puVar6 = (undefined8 *)*param_1;
  iVar7 = *(int *)(param_1 + 1);
  if (iVar7 != 0) {
    do {
      *puVar6 = &PTR_FUN_143f740c8;
      if (puVar6[3] != 0) {
        FMemory::Free();
      }
      *puVar6 = &PTR_FUN_143f73d18;
      plVar4 = (longlong *)puVar6[2];
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
      puVar6 = puVar6 + 5;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    puVar6 = (undefined8 *)*param_1;
  }
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar6);
  return;
}



// FUNCTION 1404bec90 FUN_1404bec90 body=120 status=ok
// SIG undefined FUN_1404bec90(void)

void FUN_1404bec90(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_143f74338;
      FUN_1404bebc0(puVar1 + 6);
      FUN_1404bf980(puVar1 + 1);
      puVar1 = puVar1 + 8;
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



// FUNCTION 1404bed10 FUN_1404bed10 body=120 status=ok
// SIG undefined FUN_1404bed10(void)

void FUN_1404bed10(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_143f74338;
      FUN_1404bebc0(puVar1 + 6);
      FUN_1404bf980(puVar1 + 1);
      puVar1 = puVar1 + 9;
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



// FUNCTION 1404bed90 FUN_1404bed90 body=70 status=ok
// SIG undefined FUN_1404bed90(void)

void FUN_1404bed90(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x10);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1404bede0 ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1404bee50 FUN_1404bee50 body=196 status=ok
// SIG undefined FUN_1404bee50(void)

void FUN_1404bee50(longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>
                ((longlong)local_1c * 0x20 + 8 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1404bef20 ~FPakFileVisitor body=97 status=ok
// SIG undefined ~FPakFileVisitor(void)

void FPakFileVisitor::~FPakFileVisitor(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 2);
  plVar1 = (longlong *)param_1[1];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[1];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 1404bef90 FUN_1404bef90 body=818 status=ok
// SIG undefined FUN_1404bef90(void)

void FUN_1404bef90(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  *param_1 = &PTR__scalar_deleting_destructor__143f74700;
  param_1[2] = &PTR_LAB_143f74750;
  param_1[3] = &PTR_FUN_143f74760;
  lVar3 = FUN_142b45e90();
  TBaseMulticastDelegate<void>::Remove(*(longlong *)(lVar3 + 0x18) + 0x28,param_1[0x2f]);
  param_1[0x2f] = 0;
  FUN_1404cdd50(&local_38,0);
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x150))(local_38,param_1 + 0x2d);
    (**(code **)(*local_38 + 0x170))(local_38,param_1 + 0x2e);
  }
  FUN_1404cf890(&local_48,0);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x88))(local_48,param_1 + 0x31);
  }
  plVar4 = param_1 + 0x17;
  plVar2 = (longlong *)*plVar4;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1 + 0x2c);
  }
  local_50 = (longlong *)0x0;
  if (plVar4 != &local_58) {
    *plVar4 = 0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x18,&local_50);
    plVar4 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  TBaseMulticastDelegate<void>::Remove(&DAT_1464af3b8,param_1[0x30]);
  plVar4 = local_40;
  param_1[0x30] = 0;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  iVar5 = *(int *)(param_1 + 0x1a);
  plVar4 = (longlong *)param_1[0x19];
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = (longlong *)param_1[0x19];
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  plVar4 = (longlong *)param_1[0x18];
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
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xd);
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  FUN_1404bf750(param_1 + 3);
  FSelfRegisteringExec::~FSelfRegisteringExec(param_1 + 2);
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
  }
  return;
}



// FUNCTION 1404bf2d0 ~FGCObject body=40 status=ok
// SIG undefined ~FGCObject(void)

void FGCObject::~FGCObject(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
    return;
  }
  return;
}



// FUNCTION 1404bf300 FUN_1404bf300 body=361 status=ok
// SIG undefined FUN_1404bf300(void)

void FUN_1404bf300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f76288;
  if (param_1[0x49] != 0) {
    FMemory::Free();
  }
  if (param_1[0x47] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x44);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x41);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3e);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3b);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x35);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x32);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2f);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2c);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x29);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x26);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x23);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x20);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1d);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1a);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x17);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x14);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x11);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xe);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xb);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 5);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 2);
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
    return;
  }
  return;
}



// FUNCTION 1404bf470 FUN_1404bf470 body=479 status=ok
// SIG undefined FUN_1404bf470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404bf470(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  lVar7 = param_1[0x1c];
  iVar5 = 0;
  *param_1 = &PTR_FUN_143f74a48;
  iVar3 = DAT_146533138;
  if (0 < DAT_146533138) {
    lVar8 = 0;
    do {
      plVar6 = (longlong *)(DAT_146533130 + lVar8);
      if ((((int)plVar6[1] != 0) && (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar3 = DAT_146533138, *plVar2 == lVar7)) {
        if (((int)plVar6[1] != 0) && (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar6 != 0) {
            lVar7 = FMemory::Realloc(*plVar6,0,0);
            *plVar6 = lVar7;
          }
          *(undefined4 *)(plVar6 + 1) = 0;
          iVar3 = DAT_146533138;
        }
        break;
      }
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + 0x10;
    } while (iVar5 < iVar3);
  }
  if (DAT_146533144 < 1) {
    iVar4 = 0;
    iVar5 = iVar3;
    if (0 < iVar3) {
      lVar7 = 0;
      do {
        if (((*(int *)(lVar7 + 8 + DAT_146533130) == 0) ||
            (*(longlong **)(lVar7 + DAT_146533130) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(lVar7 + DAT_146533130) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146533130,iVar4,1,1);
        }
        else {
          iVar4 = iVar4 + 1;
          lVar7 = lVar7 + 0x10;
        }
        iVar5 = DAT_146533138;
      } while (iVar4 < DAT_146533138);
    }
    _DAT_146533140 = iVar5 * 2;
    if (_DAT_146533140 < 3) {
      _DAT_146533140 = 2;
    }
    if ((_DAT_146533140 < iVar3) && (DAT_14653313c != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146533130);
    }
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  FUN_1404bee50(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  FUN_1404bee50(param_1 + 7);
  TArray<FMediaTextureResource::TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>
  ::
  ~TArray<FMediaTextureResource::TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>
            (param_1 + 5);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  FUN_1404bf750(param_1);
  return;
}



// FUNCTION 1404bf650 FUN_1404bf650 body=246 status=ok
// SIG undefined FUN_1404bf650(void)

void FUN_1404bf650(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f769a8;
  plVar4 = (longlong *)param_1[0x15];
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
  param_1[5] = &PTR_FUN_143f769a0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 10,0);
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[2];
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



// FUNCTION 1404bf750 FUN_1404bf750 body=547 status=ok
// SIG undefined FUN_1404bf750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404bf750(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  *param_1 = &PTR__purecall_143f740d8;
  plVar2 = (longlong *)FUN_1404cfca0();
  iVar4 = (int)plVar2[1];
  lVar3 = (longlong)iVar4;
  if (iVar4 != 0) {
    iVar7 = 0;
    bVar8 = *(undefined8 **)*plVar2 != param_1;
    lVar5 = 0;
    iVar1 = 0;
    do {
      lVar5 = lVar5 + 1;
      iVar6 = iVar1 + 1;
      if (lVar5 < lVar3) {
        do {
          if (bVar8 != (*(undefined8 **)(*plVar2 + lVar5 * 8) != param_1)) break;
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + 1;
        } while (lVar5 < lVar3);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar1) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar2 + (longlong)iVar7 * 8),(void *)(*plVar2 + (longlong)iVar1 * 8)
                     ,(longlong)(iVar6 - iVar1) << 3);
        }
        iVar7 = iVar7 + (iVar6 - iVar1);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar1 = iVar6;
    } while (lVar5 < lVar3);
    *(int *)(plVar2 + 1) = iVar7;
    if (iVar4 != iVar7) {
      return;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146852f10) && (_Init_thread_header(&DAT_146852f10), DAT_146852f10 == -1))
  {
    DAT_146852f00 = (longlong *)0x0;
    _DAT_146852f08 = 0;
    atexit((_func_5014 *)&LAB_143e3ec40);
    _Init_thread_footer(&DAT_146852f10);
  }
  plVar2 = DAT_146852f00;
  if (DAT_146852f00 != DAT_146852f00 + (longlong)DAT_146852f08 * 2) {
    while ((undefined8 *)*plVar2 != param_1) {
      plVar2 = plVar2 + 2;
      if (plVar2 == DAT_146852f00 + (longlong)DAT_146852f08 * 2) {
        return;
      }
    }
    iVar4 = (int)((longlong)plVar2 - (longlong)DAT_146852f00 >> 4);
    if (iVar4 != -1) {
      if (DAT_146afc8d0 != '\0') {
        DAT_146852f00[(longlong)iVar4 * 2] = 0;
        return;
      }
      iVar1 = (DAT_146852f08 - iVar4) + -1;
      if (iVar1 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (DAT_146852f00 + (longlong)iVar4 * 2,DAT_146852f00 + (longlong)(iVar4 + 1) * 2,
                   (longlong)iVar1 << 4);
      }
      _DAT_146852f08 = CONCAT44(DAT_146852f08_4,DAT_146852f08 + -1);
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&DAT_146852f00);
    }
  }
  return;
}



// FUNCTION 1404bf980 FUN_1404bf980 body=114 status=ok
// SIG undefined FUN_1404bf980(void)

void FUN_1404bf980(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f740c8;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f73d18;
  plVar4 = (longlong *)param_1[2];
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



// FUNCTION 1404bfa00 FUN_1404bfa00 body=125 status=ok
// SIG undefined FUN_1404bfa00(void)

void FUN_1404bfa00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x568);
  plVar4 = *(longlong **)(param_1 + 0x558);
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
  *(undefined ***)(param_1 + 0x540) = &PTR_FUN_143f74a00;
  FUN_1404bfe50(param_1);
  return;
}



// FUNCTION 1404bfa80 FUN_1404bfa80 body=966 status=ok
// SIG undefined FUN_1404bfa80(void)

void FUN_1404bfa80(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x1960) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1950) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1940) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1928) = 0;
  if (*(longlong *)(param_1 + 0x1920) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x18e0);
  *(undefined4 *)(param_1 + 0x18d8) = 0;
  if (*(longlong *)(param_1 + 0x18d0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1890,0);
  if (*(longlong *)(param_1 + 0x18b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1890) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1880) = 0;
  if (*(longlong *)(param_1 + 0x1878) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1838);
  if (*(longlong *)(param_1 + 0x1800) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x17f0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x17e0) = 0;
  if (*(longlong *)(param_1 + 0x17d8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1798);
  *(undefined4 *)(param_1 + 0x1790) = 0;
  if (*(longlong *)(param_1 + 0x1788) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1748);
  *(undefined4 *)(param_1 + 0x1740) = 0;
  if (*(longlong *)(param_1 + 0x1738) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x16f8,0);
  if (*(longlong *)(param_1 + 0x1718) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x16f8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x16f0) = 0;
  if (*(longlong *)(param_1 + 0x16e8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x16a8);
  *(undefined4 *)(param_1 + 0x16a0) = 0;
  if (*(longlong *)(param_1 + 0x1698) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1658);
  *(undefined4 *)(param_1 + 0x1648) = 0;
  if (*(longlong *)(param_1 + 0x1640) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1600);
  if (*(longlong *)(param_1 + 0x15d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x15c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x15b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x15a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1590) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1580) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1 + 0x4b0);
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1 + 0x360);
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1 + 0x250);
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(param_1 + 0x158);
  plVar3 = *(longlong **)(param_1 + 0x148);
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
  puVar4 = *(undefined8 **)(param_1 + 0x138);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  FURL::~FURL(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FExec::~FExec(param_1 + 0x28);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1404bfe50 FUN_1404bfe50 body=927 status=ok
// SIG undefined FUN_1404bfe50(void)

void FUN_1404bfe50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  plVar4 = *(longlong **)(param_1 + 0x530);
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
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x4a0);
  *(undefined4 *)(param_1 + 0x498) = 0;
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x450);
  *(undefined4 *)(param_1 + 0x440) = 0;
  if (*(longlong *)(param_1 + 0x438) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x3f8,0);
  if (*(longlong *)(param_1 + 0x418) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3f8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  if (*(longlong *)(param_1 + 1000) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x3a8,0);
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  if (*(longlong *)(param_1 + 0x398) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x358,0);
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x348) = 0;
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x300,0);
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x260,0);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xf8);
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
  plVar4 = *(longlong **)(param_1 + 0xe8);
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
  plVar4 = *(longlong **)(param_1 + 200);
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
  plVar4 = *(longlong **)(param_1 + 0xb8);
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
  puVar5 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FExec::~FExec(param_1 + 0x28);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1404c01f0 FUN_1404c01f0 body=536 status=ok
// SIG undefined FUN_1404c01f0(void)

void FUN_1404c01f0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x648);
  while (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x648);
    *(undefined8 *)(param_1 + 0x648) = *puVar2;
    FMemory::operator_delete(puVar2,0x10);
    lVar1 = *(longlong *)(param_1 + 0x648);
  }
  lVar1 = *(longlong *)(param_1 + 0x638);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x638) = **(undefined8 **)(param_1 + 0x638);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x50) != 0) {
        plVar3 = *(longlong **)(lVar1 + 0x40);
        if (*(longlong **)(lVar1 + 0x40) == (longlong *)0x0) {
          plVar3 = (longlong *)(lVar1 + 0x20);
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,0);
        }
      }
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(lVar1,0x60);
    }
    lVar1 = *(longlong *)(param_1 + 0x638);
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x5f8);
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FMemory::Free();
  }
  FUN_1404584f0(param_1 + 0x2e0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2b0);
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1404c0410 operator= body=109 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 1404c0480 FUN_1404c0480 body=233 status=ok
// SIG undefined FUN_1404c0480(void)

undefined8 * FUN_1404c0480(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (param_1 != param_2) {
    puVar7 = (undefined8 *)*param_1;
    for (iVar6 = *(int *)(param_1 + 1); iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = &PTR_FUN_143f740c8;
      if (puVar7[3] != 0) {
        FMemory::Free();
      }
      *puVar7 = &PTR_FUN_143f73d18;
      plVar4 = (longlong *)puVar7[2];
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
      puVar7 = puVar7 + 5;
    }
    FUN_1404b8d90(param_1,*param_2,*(undefined4 *)(param_2 + 1),
                  *(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  return param_1;
}



// FUNCTION 1404c0570 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
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
    TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1404c06ad;
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
LAB_1404c06ad:
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
        FUN_1404b90f0(param_1,local_res8,(longlong)iStack_3c * 0x30 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1404c0750 FUN_1404c0750 body=487 status=ok
// SIG undefined FUN_1404c0750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1404c0750(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)(param_1 + 8);
  uStack_60 = *(longlong **)(param_2 + 0x10);
  local_68 = *(undefined8 *)(param_2 + 8);
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
    UNLOCK();
  }
  if (&local_68 != puVar1) {
    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uVar6 = *puVar1;
    plVar5 = *(longlong **)(param_1 + 0x10);
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = (undefined4)uStack_60;
    uStack_3c = uStack_60._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_68;
    *(undefined4 *)(param_1 + 0xc) = local_68._4_4_;
    *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_60;
    *(undefined4 *)(param_1 + 0x14) = uStack_60._4_4_;
    local_68 = uVar6;
    uStack_60 = plVar5;
  }
  plVar5 = uStack_60;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_60 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_60 + 8))(uStack_60,1);
      }
    }
  }
  FString::operator=(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_2 + 0x39);
  *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0x3a);
  *(undefined1 *)(param_1 + 0x3b) = *(undefined1 *)(param_2 + 0x3b);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(param_2 + 0x3f);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x50,param_2 + 0x50);
  plVar5 = *(longlong **)(param_2 + 0xa8);
  puVar1 = (undefined8 *)(param_1 + 0xa0);
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_58 = uVar6;
  plStack_50 = plVar5;
  if (&local_58 != puVar1) {
    local_58 = *puVar1;
    plStack_50 = *(longlong **)(param_1 + 0xa8);
    *puVar1 = uVar6;
    *(longlong **)(param_1 + 0xa8) = plVar5;
    local_38 = uVar6;
    plStack_30 = plVar5;
  }
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_50 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  return param_1;
}



// FUNCTION 1404c0940 FUN_1404c0940 body=230 status=ok
// SIG undefined FUN_1404c0940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1404c0940(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_2 != param_1) {
    local_48 = *(undefined8 *)(param_2 + 8);
    puVar1 = (undefined8 *)(param_1 + 8);
    uStack_40 = *(longlong **)(param_2 + 0x10);
    if (uStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
      UNLOCK();
    }
    if (&local_48 != puVar1) {
      local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
      uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
      uVar5 = *puVar1;
      plVar6 = *(longlong **)(param_1 + 0x10);
      local_38 = (undefined4)local_48;
      uStack_34 = local_48._4_4_;
      uStack_30 = (undefined4)uStack_40;
      uStack_2c = uStack_40._4_4_;
      *(undefined4 *)puVar1 = (undefined4)local_48;
      *(undefined4 *)(param_1 + 0xc) = local_48._4_4_;
      *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_40;
      *(undefined4 *)(param_1 + 0x14) = uStack_40._4_4_;
      local_48 = uVar5;
      uStack_40 = plVar6;
    }
    plVar6 = uStack_40;
    if (uStack_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_40 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*uStack_40)(uStack_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*uStack_40 + 8))(uStack_40,1);
        }
      }
    }
  }
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_1 + 0x18,param_2 + 0x18)
  ;
  return param_1;
}



// FUNCTION 1404c0a30 FUN_1404c0a30 body=716 status=ok
// SIG undefined FUN_1404c0a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1404c0a30(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30 [16];
  undefined1 *local_20;
  undefined1 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar2 = (**(code **)(*param_1 + 0x98))();
  lVar3 = (**(code **)(*param_1 + 0x90))(param_1);
  if (((*(byte *)(param_1 + 5) & 2) == 0) && (lVar2 - lVar3 < 8)) {
    param_2[1] = local_38;
    *param_2 = 0;
    FEngineVersion::Empty(param_2 + 2);
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  else {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2,4);
      }
    }
    else {
      *(undefined4 *)param_2 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,(longlong)param_2 + 4,4);
      }
    }
    else {
      *(undefined4 *)((longlong)param_2 + 4) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    FUN_1404c11e0(param_1,param_2 + 1);
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_30,param_1);
    local_20 = local_30;
    local_18 = &local_20;
    FUN_141661f40(&local_20,param_2 + 6);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_30);
    operator<<(param_1,param_2 + 2);
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 8,4);
      }
    }
    else {
      *(undefined4 *)(param_2 + 8) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0x44,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,(longlong)param_2 + 0x44,4);
      }
    }
    else {
      *(undefined4 *)((longlong)param_2 + 0x44) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 9,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 9,4);
      }
    }
    else {
      *(undefined4 *)(param_2 + 9) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0x4c,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,(longlong)param_2 + 0x4c,4);
      }
    }
    else {
      *(undefined4 *)((longlong)param_2 + 0x4c) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    FUN_141661e90(param_1,param_2 + 10);
  }
  return param_1;
}



// FUNCTION 1404c0d00 FUN_1404c0d00 body=437 status=ok
// SIG undefined FUN_1404c0d00(void)

longlong * FUN_1404c0d00(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  puVar6 = (undefined8 *)0x0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x40000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1404c0ec0(param_1,(longlong)(int)puVar6 * 0x40 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  FUN_1404ca6b0(param_2,local_res8[0]);
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x40 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f74338;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[1] = &PTR_FUN_143f740c8;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar5 = puVar4;
    }
    FUN_1404c0ec0(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1404c0ec0 FUN_1404c0ec0 body=797 status=ok
// SIG undefined FUN_1404c0ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1404c0ec0(longlong *param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  int *piVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  int iVar6;
  longlong *plVar7;
  undefined **ppuVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined4 local_94;
  undefined **local_90;
  undefined **ppuStack_88;
  undefined **local_80;
  undefined **local_78;
  undefined **ppuStack_70;
  longlong local_68 [2];
  undefined **local_58;
  undefined **ppuStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(param_1 + 5) & 2) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1425da060(param_1,param_2 + 8);
      plVar7 = (longlong *)param_1[1];
      iVar11 = 0;
      local_98 = 0;
      if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,&local_98,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,&local_98,4);
        }
      }
      else {
        local_98 = *(int *)*plVar7;
        *plVar7 = *plVar7 + 4;
      }
      iVar6 = *(int *)(param_2 + 0x38);
      plVar7 = (longlong *)(param_2 + 0x30);
      if (iVar6 < local_98) {
        *(int *)(param_2 + 0x38) = local_98;
        iVar10 = local_98 - iVar6;
        if (*(int *)(param_2 + 0x3c) < local_98) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar7);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar7 + (longlong)iVar6 * 0x28),0,(longlong)iVar10 * 0x28);
      }
      else if (local_98 < iVar6) {
        FUN_1404de5f0(plVar7,local_98,iVar6 - local_98,1);
      }
      if (0 < local_98) {
        do {
          local_80 = &PTR_FUN_143f740c8;
          local_68[0] = 0;
          local_68[1] = 0;
          local_78 = (undefined **)0x0;
          ppuStack_70 = (undefined **)0x0;
          FUN_1425da060(param_1,&local_80);
          pppuVar5 = (undefined ***)(*plVar7 + (longlong)iVar11 * 0x28);
          if (&local_80 != pppuVar5) {
            pppuVar1 = pppuVar5 + 1;
            local_90 = local_78;
            if (ppuStack_70 != (undefined **)0x0) {
              LOCK();
              *(int *)(ppuStack_70 + 1) = *(int *)(ppuStack_70 + 1) + 1;
              UNLOCK();
            }
            ppuVar8 = ppuStack_70;
            if (&local_90 != pppuVar1) {
              local_90 = *pppuVar1;
              ppuVar8 = pppuVar5[2];
              local_58 = local_78;
              ppuStack_50 = ppuStack_70;
              *pppuVar1 = local_78;
              pppuVar5[2] = ppuStack_70;
            }
            ppuStack_88 = ppuVar8;
            if (ppuVar8 != (undefined **)0x0) {
              LOCK();
              ppuVar2 = ppuVar8 + 1;
              iVar6 = *(int *)ppuVar2;
              *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)*ppuVar8)(ppuVar8);
                LOCK();
                piVar3 = (int *)((longlong)ppuVar8 + 0xc);
                iVar6 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*ppuStack_88 + 8))(ppuStack_88,1);
                }
              }
            }
          }
          TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(pppuVar5 + 3,local_68)
          ;
          local_80 = &PTR_FUN_143f740c8;
          if (local_68[0] != 0) {
            FMemory::Free();
          }
          ppuVar8 = ppuStack_70;
          local_80 = &PTR_FUN_143f73d18;
          if (ppuStack_70 != (undefined **)0x0) {
            LOCK();
            ppuVar2 = ppuStack_70 + 1;
            iVar6 = *(int *)ppuVar2;
            *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)*ppuStack_70)(ppuStack_70);
              LOCK();
              piVar3 = (int *)((longlong)ppuVar8 + 0xc);
              iVar6 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*ppuVar8 + 8))(ppuVar8,1);
              }
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_98);
      }
    }
  }
  else {
    FUN_1425da060(param_1,param_2 + 8);
    plVar7 = (longlong *)param_1[1];
    local_94 = *(undefined4 *)(param_2 + 0x38);
    if ((undefined4 *)plVar7[1] < (undefined4 *)*plVar7 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,&local_94,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,&local_94,4);
      }
    }
    else {
      local_94 = *(undefined4 *)*plVar7;
      *plVar7 = *plVar7 + 4;
    }
    lVar9 = *(longlong *)(param_2 + 0x30);
    lVar4 = lVar9 + (longlong)*(int *)(param_2 + 0x38) * 0x28;
    for (; lVar9 != lVar4; lVar9 = lVar9 + 0x28) {
      FUN_1425da060(param_1,lVar9);
    }
  }
  return param_1;
}



// FUNCTION 1404c11e0 FUN_1404c11e0 body=113 status=ok
// SIG undefined FUN_1404c11e0(void)

longlong * FUN_1404c11e0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1[1];
  if (puVar1 + 1 <= (undefined8 *)((longlong *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2,8);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2,8);
  }
  return param_1;
}



// FUNCTION 1404c1260 operator== body=160 status=ok
// SIG undefined operator==(void)

undefined8 FUniqueNetIdWrapper::operator==(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  
  if ((((*(longlong **)(param_1 + 8) == (longlong *)0x0) ||
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(), cVar2 == '\0')) ||
      (*(longlong **)(param_2 + 8) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((*(longlong **)(param_1 + 8) == (longlong *)0x0) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(), cVar2 == '\0')) {
    if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
      return 1;
    }
    cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
    if (cVar2 == '\0') {
      return 1;
    }
  }
  if ((bVar1) &&
     (cVar2 = (**(code **)**(undefined8 **)(param_2 + 8))
                        (*(undefined8 **)(param_2 + 8),*(undefined8 *)(param_1 + 8)), cVar2 != '\0')
     ) {
    return 1;
  }
  return 0;
}



// FUNCTION 1404c1300 FUN_1404c1300 body=180 status=ok
// SIG undefined FUN_1404c1300(void)

void FUN_1404c1300(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_1404c3ad0(*param_1,param_3);
  local_28[3] = 0x1c;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Duplicate party reservation",0x38);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"reason",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404c13c0 FUN_1404c13c0 body=356 status=ok
// SIG undefined FUN_1404c13c0(void)

void FUN_1404c13c0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  FUN_1404c3ad0(*param_1,param_3);
  psVar1 = (short *)FUN_1404e45c0(*(undefined4 *)(param_1 + 1));
  local_20 = 0;
  local_28 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_20 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)(int)uVar2 * 2);
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"failure_type",0x1a);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"error_key",0x14);
  (**(code **)(*param_3 + 8))(param_3,local_18,param_1 + 2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404c1530 FUN_1404c1530 body=180 status=ok
// SIG undefined FUN_1404c1530(void)

void FUN_1404c1530(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_1404c3ad0(*param_1,param_3);
  local_28[3] = 0x31;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy
            (local_28[2],L"Reservation sent invalid PrimaryPartyReservation",0x62);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"reason",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404c15f0 FUN_1404c15f0 body=180 status=ok
// SIG undefined FUN_1404c15f0(void)

void FUN_1404c15f0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_1404c3ad0(*param_1,param_3);
  local_28[3] = 0x38;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy
            (local_28[2],L"PendingReservation included AdditionalPartyReservations",0x70);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"reason",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404c16b0 FUN_1404c16b0 body=180 status=ok
// SIG undefined FUN_1404c16b0(void)

void FUN_1404c16b0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_1404c3ad0(*param_1,param_3);
  local_28[3] = 0x16;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"No valid local player",0x2c);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"reason",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404c1770 FUN_1404c1770 body=348 status=ok
// SIG undefined FUN_1404c1770(void)

void FUN_1404c1770(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_1404c3ad0(*param_1,param_3);
  local_28[3] = 0x1e;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Mismatched beacon net version",0x3c);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"reason",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"version_received",0x22);
  (**(code **)(*param_3 + 0x18))(param_3,local_28 + 2,*(undefined4 *)(param_1 + 1));
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"version_expected",0x22);
  (**(code **)(*param_3 + 0x18))(param_3,local_28 + 2,5);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404c18d0 FUN_1404c18d0 body=123 status=ok
// SIG undefined FUN_1404c18d0(void)

void FUN_1404c18d0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  FUN_1404c3ad0(*param_1,param_3);
  local_18[1] = 0xd;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"message_type",0x1a);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*(undefined1 *)(param_1 + 1));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404c1950 FUN_1404c1950 body=128 status=ok
// SIG undefined FUN_1404c1950(void)

void FUN_1404c1950(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong local_18 [2];
  
  FUN_1404c3ad0(*param_1,param_3);
  local_18[1] = 0xe;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"party_host_id",0x1c);
  (**(code **)*param_3)(param_3,local_18,param_1[1] + 0x160);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404c19d0 FUN_1404c19d0 body=180 status=ok
// SIG undefined FUN_1404c19d0(void)

void FUN_1404c19d0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_1404c3ad0(*param_1,param_3);
  local_28[3] = 0x2d;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Reservation included invalid AdditionalParty",0x5a);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"reason",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404c1a90 FUN_1404c1a90 body=158 status=ok
// SIG undefined FUN_1404c1a90(void)

undefined8 FUN_1404c1a90(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  char local_res8 [8];
  
  lVar1 = *param_1;
  local_res8[0] = DAT_1461fb7e0;
  cVar3 = DAT_1461fb7e0;
  if (((*(int *)(lVar1 + 0x10) != 0) &&
      (cVar3 = DAT_1461fb7e0, *(longlong **)(lVar1 + 8) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x18))(), cVar3 = DAT_1461fb7e0,
     cVar2 != '\0')) {
    if (*(int *)(lVar1 + 0x10) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(lVar1 + 8);
    }
    cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,param_2,local_res8);
    cVar3 = local_res8[0];
    if (cVar2 == '\0') {
      return 1;
    }
  }
  local_res8[0] = cVar3;
  cVar3 = (**(code **)(**(longlong **)param_1[1] + 0x18))();
  if (local_res8[0] != cVar3) {
    return 1;
  }
  return 0;
}



// FUNCTION 1404c1b30 FUN_1404c1b30 body=346 status=ok
// SIG undefined FUN_1404c1b30(void)

void FUN_1404c1b30(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_1404c3ad0(*param_1,param_3);
  local_28[3] = 0x1e;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Client not network compatible",0x3c);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"reason",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"local_network_version",0x2c);
  (**(code **)(*param_3 + 0x18))(param_3,local_28 + 2,*(undefined4 *)(param_1 + 1));
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"remote_network_version",0x2e);
  (**(code **)(*param_3 + 0x18))(param_3,local_28 + 2,*(undefined4 *)((longlong)param_1 + 0xc));
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404c1c90 FUN_1404c1c90 body=346 status=ok
// SIG undefined FUN_1404c1c90(void)

void FUN_1404c1c90(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_1404c3ad0(*param_1,param_3);
  local_28[3] = 0x1b;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Invalid client beacon type",0x36);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"reason",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"host_beacon_type",0x22);
  (**(code **)(*param_3 + 8))(param_3,local_28 + 2,param_1 + 1);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"client_beacon_type",0x26);
  (**(code **)(*param_3 + 8))(param_3,local_28 + 2,param_1 + 3);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404c1df0 FUN_1404c1df0 body=180 status=ok
// SIG undefined FUN_1404c1df0(void)

void FUN_1404c1df0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_1404c3ad0(*param_1,param_3);
  local_28[3] = 0x3f;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy
            (local_28[2],L"PendingReservation had too invalid players or too many players",0x7e);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"reason",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404c1eb0 FUN_1404c1eb0 body=96 status=ok
// SIG undefined FUN_1404c1eb0(void)

bool FUN_1404c1eb0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *param_2;
  puVar4 = *(undefined8 **)*param_1;
  puVar3 = puVar4 + (longlong)(int)((longlong *)*param_1)[1] * 2;
  for (; puVar4 != puVar3; puVar4 = puVar4 + 2) {
    cVar2 = (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,uVar1);
    if (cVar2 != '\0') goto LAB_1404c1efa;
  }
  puVar4 = (undefined8 *)0x0;
LAB_1404c1efa:
  return puVar4 == (undefined8 *)0x0;
}



// FUNCTION 1404c1f10 FUN_1404c1f10 body=180 status=ok
// SIG undefined FUN_1404c1f10(void)

void FUN_1404c1f10(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_1404c3ad0(*param_1,param_3);
  local_28[3] = 0x12;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Empty beacon type",0x24);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"reason",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404c1fd0 operator() body=155 status=ok
// SIG undefined operator()(void)

void TDefaultDelete<FVoicePacketBuffer>::operator()(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x38);
    while (lVar1 != 0) {
      puVar2 = *(undefined8 **)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x38) = *puVar2;
      FMemory::operator_delete(puVar2,0x10);
      lVar1 = *(longlong *)(param_2 + 0x38);
    }
    iVar4 = *(int *)(param_2 + 0x28);
    plVar3 = *(longlong **)(param_2 + 0x20);
    if (iVar4 != 0) {
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 7;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      plVar3 = *(longlong **)(param_2 + 0x20);
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
    FMemory::operator_delete(param_2,0x40);
  }
  return;
}



// FUNCTION 1404c2128 FUN_1404c2128 body=6 status=ok
// SIG undefined FUN_1404c2128(void)

void FUN_1404c2128(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001404c212b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}



// FUNCTION 1404c2138 FUN_1404c2138 body=9 status=ok
// SIG undefined FUN_1404c2138(void)

void FUN_1404c2138(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001404c213b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}



// FUNCTION 1404c2210 FUN_1404c2210 body=43 status=ok
// SIG undefined FUN_1404c2210(void)

undefined8 * FUN_1404c2210(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1404c2240 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,TTypeWrapper<void>___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FName,TBaseDelegate<void,int,bool,FString_const_&>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 4);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1404c2290 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,TTypeWrapper<void>___cdecl(void),TArray<FAsyncPathFindingQuery,FDefaultAllocator>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1404c22e0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TImagePixelData<FColor>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1404c2330 FUN_1404c2330 body=43 status=ok
// SIG undefined FUN_1404c2330(void)

undefined8 * FUN_1404c2330(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1404c2360 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FGunfireNavigationGeometryExport::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1404c23c0 FUN_1404c23c0 body=43 status=ok
// SIG undefined FUN_1404c23c0(void)

undefined8 * FUN_1404c23c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1404c23f0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FArrayReader::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1404c2440 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FPakFileVisitor::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FPakFileVisitor();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1404c2480 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FLightVPLsCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404bef90();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 1404c24c0 FUN_1404c24c0 body=116 status=ok
// SIG undefined FUN_1404c24c0(void)

undefined8 * FUN_1404c24c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_143f746c0;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 6);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 3);
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1404c2540 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FGCObject::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1404c25a0 FUN_1404c25a0 body=43 status=ok
// SIG undefined FUN_1404c25a0(void)

undefined8 * FUN_1404c25a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1404c25d0 FUN_1404c25d0 body=43 status=ok
// SIG undefined FUN_1404c25d0(void)

undefined8 * FUN_1404c25d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1404c2600 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
Audio::FSpectrumBandExtractor::FCQTBandSpec::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1404c2660 FUN_1404c2660 body=72 status=ok
// SIG undefined FUN_1404c2660(void)

undefined8 * FUN_1404c2660(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1404c26b0 FUN_1404c26b0 body=86 status=ok
// SIG undefined FUN_1404c26b0(void)

undefined8 * FUN_1404c26b0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1404c2710 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOnlineAsyncTaskManagerNull::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_Init_143f76c48;
  param_1[1] = &PTR_LAB_143f76c80;
  FOnlineAsyncTaskManager::~FOnlineAsyncTaskManager();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 1404c2760 FUN_1404c2760 body=389 status=ok
// SIG undefined FUN_1404c2760(void)

undefined8 * FUN_1404c2760(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f76288;
  if (param_1[0x49] != 0) {
    FMemory::Free();
  }
  if (param_1[0x47] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x44);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x41);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3e);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3b);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x35);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x32);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2f);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2c);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x29);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x26);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x23);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x20);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1d);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1a);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x17);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x14);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x11);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xe);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xb);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 5);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 2);
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 1404c28f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TCapsuleShadowingUpsamplePS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404bf470();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1404c2930 FUN_1404c2930 body=149 status=ok
// SIG undefined FUN_1404c2930(void)

undefined8 * FUN_1404c2930(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_143f76d90;
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  plVar1 = (longlong *)param_1[10];
  param_1[0xb] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  param_1[10] = 0;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  FUN_1404bf750(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1404c29d0 FUN_1404c29d0 body=156 status=ok
// SIG undefined FUN_1404c29d0(void)

undefined8 * FUN_1404c29d0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143f76df0;
  iVar2 = *(int *)(param_1 + 9);
  plVar1 = (longlong *)param_1[8];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[8];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_1404bea10(param_1 + 5);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  FUN_1404bf750(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1404c2a70 FUN_1404c2a70 body=52 status=ok
// SIG undefined FUN_1404c2a70(void)

undefined8 FUN_1404c2a70(undefined8 param_1,ulonglong param_2)

{
  FUN_1404bf650();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1404c2ab0 FUN_1404c2ab0 body=128 status=ok
// SIG undefined FUN_1404c2ab0(void)

undefined8 * FUN_1404c2ab0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f769a0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 5,0);
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1404c2b30 FUN_1404c2b30 body=144 status=ok
// SIG undefined FUN_1404c2b30(void)

undefined8 * FUN_1404c2b30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f77990;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = &PTR_FUN_143f74308;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1404c2bc0 FUN_1404c2bc0 body=75 status=ok
// SIG undefined FUN_1404c2bc0(void)

undefined8 * FUN_1404c2bc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f74338;
  FUN_1404bebc0(param_1 + 6);
  FUN_1404bf980(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1404c2c10 FUN_1404c2c10 body=75 status=ok
// SIG undefined FUN_1404c2c10(void)

undefined8 * FUN_1404c2c10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f74338;
  FUN_1404bebc0(param_1 + 6);
  FUN_1404bf980(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1404c2c60 FUN_1404c2c60 body=52 status=ok
// SIG undefined FUN_1404c2c60(void)

undefined8 FUN_1404c2c60(undefined8 param_1,ulonglong param_2)

{
  FUN_1404bf750();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1404c2ca0 FUN_1404c2ca0 body=98 status=ok
// SIG undefined FUN_1404c2ca0(void)

undefined8 * FUN_1404c2ca0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_143f73cd8;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1404c2d10 FUN_1404c2d10 body=52 status=ok
// SIG undefined FUN_1404c2d10(void)

undefined8 FUN_1404c2d10(undefined8 param_1,ulonglong param_2)

{
  FUN_1404bf980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1404c2d50 FUN_1404c2d50 body=112 status=ok
// SIG undefined FUN_1404c2d50(void)

undefined8 * FUN_1404c2d50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f73cd8;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1404c2dc0 FUN_1404c2dc0 body=134 status=ok
// SIG undefined FUN_1404c2dc0(void)

undefined8 * FUN_1404c2dc0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f73d18;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1404c2e50 FUN_1404c2e50 body=43 status=ok
// SIG undefined FUN_1404c2e50(void)

undefined8 * FUN_1404c2e50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f749b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1404c2e80 FUN_1404c2e80 body=43 status=ok
// SIG undefined FUN_1404c2e80(void)

undefined8 * FUN_1404c2e80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f74308;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1404c2eb0 FUN_1404c2eb0 body=85 status=ok
// SIG undefined FUN_1404c2eb0(void)

undefined8 * FUN_1404c2eb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f76a58;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1404c2f10 FUN_1404c2f10 body=43 status=ok
// SIG undefined FUN_1404c2f10(void)

undefined8 * FUN_1404c2f10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f769b0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1404c2f40 FUN_1404c2f40 body=43 status=ok
// SIG undefined FUN_1404c2f40(void)

undefined8 * FUN_1404c2f40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f74a00;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1404c2f70 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
AARSharedWorldPlayerController::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404bfa00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x578);
  }
  return param_1;
}


