// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140dafc80 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_03b1468653a5a071ae43c076471e17dd>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140dafce0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TCompositeObjectDistanceFieldsCS<1,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140da9150();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 140dafd20 FUN_140dafd20 body=66 status=ok
// SIG undefined FUN_140dafd20(void)

undefined8 * FUN_140dafd20(undefined8 *param_1,ulonglong param_2)

{
  FUN_1404bf980(param_1 + 1);
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140dafd70 FUN_140dafd70 body=43 status=ok
// SIG undefined FUN_140dafd70(void)

undefined8 * FUN_140dafd70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140dafda0 FUN_140dafda0 body=43 status=ok
// SIG undefined FUN_140dafda0(void)

undefined8 * FUN_140dafda0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144550e08;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140dafdd0 FUN_140dafdd0 body=116 status=ok
// SIG undefined FUN_140dafdd0(void)

undefined8 * FUN_140dafdd0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144550a58;
  FUN_1404bf650(param_1 + 5);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
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
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 140dafe50 FUN_140dafe50 body=75 status=ok
// SIG undefined FUN_140dafe50(void)

undefined8 * FUN_140dafe50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f74338;
  FUN_1404bebc0(param_1 + 6);
  FUN_1404bf980(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140dafea0 FUN_140dafea0 body=94 status=ok
// SIG undefined FUN_140dafea0(void)

undefined8 * FUN_140dafea0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144550e28;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 4);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 2);
  *param_1 = &PTR_FUN_144550e08;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 140daff00 FUN_140daff00 body=103 status=ok
// SIG undefined FUN_140daff00(void)

undefined8 * FUN_140daff00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144550e68;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xb);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 4);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 2);
  *param_1 = &PTR_FUN_144550e08;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 140daff70 FUN_140daff70 body=90 status=ok
// SIG undefined FUN_140daff70(void)

undefined8 * FUN_140daff70(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f74338;
  FUN_1404bebc0(param_1 + 6);
  FUN_1404bf980(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140daffd0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateCanvasRenderTarget::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144550ef8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140db0020 FUN_140db0020 body=66 status=ok
// SIG undefined FUN_140db0020(void)

undefined8 * FUN_140db0020(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144550ef8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140db0070 FUN_140db0070 body=66 status=ok
// SIG undefined FUN_140db0070(void)

undefined8 * FUN_140db0070(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144550ef8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140db00c0 FUN_140db00c0 body=76 status=ok
// SIG undefined FUN_140db00c0(void)

longlong FUN_140db00c0(longlong param_1,ulonglong param_2)

{
  FUN_140da9010(param_1 + 0xe0);
  FUN_140b9d680(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 140db0110 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TConeTraceScreenGridGlobalOcclusionCS<1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140da94e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 140db0150 FUN_140db0150 body=109 status=ok
// SIG undefined FUN_140db0150(void)

longlong FUN_140db0150(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1b0);
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  FUN_140da94e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 140db01c0 FUN_140db01c0 body=97 status=ok
// SIG undefined FUN_140db01c0(void)

longlong FUN_140db01c0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x198);
  FUN_140da94e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 140db0230 FUN_140db0230 body=124 status=ok
// SIG undefined FUN_140db0230(void)

undefined8 * FUN_140db0230(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144553750;
  param_1[5] = &PTR_FUN_1445539c8;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  FUN_1404bf750(param_1 + 5);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 140db02b0 FUN_140db02b0 body=52 status=ok
// SIG undefined FUN_140db02b0(void)

undefined8 FUN_140db02b0(undefined8 param_1,ulonglong param_2)

{
  FUN_140da95b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 140db02f0 FUN_140db02f0 body=97 status=ok
// SIG undefined FUN_140db02f0(void)

longlong FUN_140db02f0(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x198);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x188);
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  FUN_140da95b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 140db0360 FUN_140db0360 body=85 status=ok
// SIG undefined FUN_140db0360(void)

longlong FUN_140db0360(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x170);
  FUN_140da95b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 140db03c0 FUN_140db03c0 body=256 status=ok
// SIG undefined FUN_140db03c0(void)

longlong FUN_140db03c0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x1b8);
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
  plVar4 = *(longlong **)(param_1 + 0x1a0);
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
  FUN_1404bf650(param_1 + 0xd0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x48);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 140db04c0 FUN_140db04c0 body=466 status=ok
// SIG undefined FUN_140db04c0(void)

void FUN_140db04c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  if (param_2 != 0) {
    FUN_1404b8b20(param_2 + 0x1b0,param_1,&LAB_140dafaec);
    plVar1 = (longlong *)(param_2 + 0x1c0);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)&LAB_140dafaf8;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0x1c8) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 0x1c8) = 0;
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
    plVar1 = (longlong *)(param_2 + 0x1d0);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)&LAB_140dafb10;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0x1d8) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 0x1d8) = 0;
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



// FUNCTION 140db06a0 FUN_140db06a0 body=576 status=ok
// SIG undefined FUN_140db06a0(void)

void FUN_140db06a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong local_28 [4];
  
  local_28[1] = 0x11;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"matchmaking_guid",0x22);
  FUN_141682af0(param_1 + 0x50,local_28 + 2,0);
  (**(code **)(*param_2 + 8))(param_2,local_28,local_28 + 2);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"activity_guid",0x1c);
  (**(code **)(*param_2 + 8))(param_2,local_28,param_1 + 0x60);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"is_backfill_only",0x22);
  (**(code **)(*param_2 + 0x40))(param_2,local_28,*(undefined1 *)(param_1 + 0x70));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"is_content_accessible",0x2c);
  (**(code **)(*param_2 + 0x40))(param_2,local_28,*(undefined1 *)(param_1 + 0x2f8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"content_count",0x1c);
  (**(code **)(*param_2 + 0x18))(param_2,local_28,*(undefined4 *)(param_1 + 0x308));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar2 != '\0') {
    local_28[0] = 0;
    local_28[1] = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"crossplay_matchmaking",0x2c);
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar1 = *param_2;
    cVar2 = FUN_140bb68a0(uVar3);
    (**(code **)(lVar1 + 0x40))(param_2,local_28,cVar2 == '\x01');
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140db08e0 FUN_140db08e0 body=178 status=ok
// SIG undefined FUN_140db08e0(void)

void FUN_140db08e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 local_res10 [4];
  uint local_res20 [2];
  undefined4 local_18 [2];
  undefined1 local_10 [8];
  
  if (param_2 != 0) {
    local_res10[0] = FUN_140bb8dc0(param_2,param_3);
    param_1 = param_1 + 0x20;
    FUN_1404ab0b0(param_1,DAT_14686f240,local_res10,0);
    cVar2 = FUN_140bca8a0(param_2);
    local_res20[0] = (uint)(cVar2 != '\0');
    if (cVar2 == '\0') {
      FUN_1404ab0b0(param_1,DAT_14686f248,local_res20,0);
    }
    local_18[0] = FUN_140bb9090(param_2);
    puVar1 = (undefined8 *)FName::FName(local_10,L"SEARCHCROSSPLAY",1);
    FUN_1404ab0b0(param_1,*puVar1,local_18,0);
  }
  return;
}



// FUNCTION 140db09a0 FUN_140db09a0 body=459 status=ok
// SIG undefined FUN_140db09a0(void)

void FUN_140db09a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 local_res10 [2];
  uint local_res20 [2];
  undefined4 local_28 [2];
  undefined1 local_20 [8];
  longlong local_18 [2];
  
  if (param_2 != 0) {
    local_res10[0] = FUN_140bb8dc0(param_2,param_3);
    FUN_1404ab210(param_1,DAT_14686f240,local_res10,2);
    cVar3 = FUN_140bca8a0(param_2);
    local_res20[0] = (uint)(cVar3 != '\0');
    FUN_1404ab210(param_1,DAT_14686f248,local_res20,2);
    local_28[0] = FUN_140bb90b0(param_2);
    FUN_1404ab210(param_1,DAT_14686f250,local_28,2);
    local_28[0] = FUN_140bb91c0(param_2);
    FUN_1404ab210(param_1,DAT_14686f258,local_28,2);
    local_28[0] = FUN_140bb9330(param_2);
    FUN_1404ab210(param_1,DAT_14686f260,local_28,2);
    local_28[0] = FUN_140bb93e0(param_2);
    FUN_1404ab210(param_1,DAT_14686f278,local_28,2);
    local_28[0] = FUN_140bb9430(param_2);
    FUN_1404ab210(param_1,DAT_14686f290,local_28,2);
    local_28[0] = FUN_140bb9090(param_2);
    puVar1 = (undefined8 *)FName::FName(local_20,L"SEARCHCROSSPLAY",1);
    FUN_1404ab210(param_1,*puVar1,local_28,2);
    if (*(char *)(param_1 + 0x12) != '\0') {
      puVar1 = (undefined8 *)FName::FName(local_20,L"USERDISPLAYNAME",1);
      uVar2 = FUN_140bb90d0(param_2,local_18);
      FUN_1404ab4c0(param_1,*puVar1,uVar2,2);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140db0b70 FUN_140db0b70 body=99 status=ok
// SIG undefined FUN_140db0b70(void)

void FUN_140db0b70(longlong param_1,int param_2,undefined8 param_3)

{
  int local_res10 [6];
  undefined **local_48 [7];
  undefined ***local_10;
  
  if (-1 < param_2) {
    local_res10[0] = param_2;
    TArray<unsigned_int,FDefaultAllocator>::Remove(param_1 + 0x10,local_res10);
    local_48[0] = &PTR_LAB_144554140;
    local_10 = local_48;
    FUN_140db81c0(param_1,local_res10[0],param_3,local_48);
    FUN_140db55b0(param_1);
  }
  return;
}



// FUNCTION 140db0be0 FUN_140db0be0 body=444 status=ok
// SIG undefined FUN_140db0be0(void)

void FUN_140db0be0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_2 + 0x188);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)&LAB_140dafad4;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 400) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 400) = 0;
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
    plVar1 = (longlong *)(param_2 + 0x198);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)&LAB_140dafae0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0x1a0) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_2 + 0x1a0) = 0;
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



// FUNCTION 140db0da0 FUN_140db0da0 body=986 status=ok
// SIG undefined FUN_140db0da0(void)

void FUN_140db0da0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  longlong *local_d8;
  int local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined **local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined ***local_88;
  undefined1 *local_80;
  undefined1 local_78 [16];
  longlong *local_68;
  
  plVar10 = (longlong *)*param_2;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)(param_1 + 0x108);
  local_68 = plVar10;
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    if ((plVar10 == (longlong *)0x0) || (cVar5 = (**(code **)(*plVar10 + 0x20))(), cVar5 == '\0')) {
      iVar6 = -1;
    }
    else {
      iVar6 = GetTypeHash(plVar10);
    }
    lVar9 = *(longlong *)(param_1 + 0x148);
    if (*(longlong *)(param_1 + 0x148) == 0) {
      lVar9 = param_1 + 0x140;
    }
    iVar6 = *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 0x150) - 1U & (longlong)iVar6) * 4);
    if (iVar6 != -1) {
      lVar9 = *plVar2;
      do {
        lVar11 = (longlong)iVar6 * 0x38;
        plVar3 = *(longlong **)(lVar11 + 8 + lVar9);
        if ((((plVar3 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar3 + 0x20))(), cVar5 == '\0')) ||
            (plVar10 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*plVar10 + 0x20))(plVar10), cVar5 == '\0')) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        plVar3 = *(longlong **)(lVar11 + lVar9 + 8);
        if ((((plVar3 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar3 + 0x20))(), cVar5 == '\0')) &&
            ((plVar10 == (longlong *)0x0 ||
             (cVar5 = (**(code **)(*plVar10 + 0x20))(plVar10), cVar5 == '\0')))) ||
           ((bVar4 && (cVar5 = (**(code **)*plVar10)(plVar10,*(undefined8 *)(lVar11 + lVar9 + 8)),
                      cVar5 != '\0')))) {
          if (iVar6 != -1) {
            lVar11 = *plVar2 + lVar11;
            goto LAB_140db0ef7;
          }
          break;
        }
        lVar9 = *plVar2;
        iVar6 = *(int *)(lVar11 + 0x30 + lVar9);
      } while (iVar6 != -1);
    }
  }
  lVar11 = 0;
LAB_140db0ef7:
  lVar9 = lVar11 + 0x28;
  if (lVar11 == 0) {
    lVar9 = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (lVar9 != 0) {
    return;
  }
  puVar7 = (undefined8 *)FName::FName(local_78,L"SPARK",1);
  FUN_1404d0c50(&local_c8,*puVar7);
  plVar10 = local_c8;
  if (local_c8 == (longlong *)0x0) {
    TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
              (param_1 + 0x78,param_2,2);
    goto LAB_140db1124;
  }
  local_d8 = (longlong *)0x0;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  local_d0 = 3;
  local_d8 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&DAT_143f3ed00;
    plVar8[1] = param_1;
    plVar8[2] = (longlong)FUN_140dc9d60;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  (**(code **)(*plVar10 + 0x2d8))(plVar10,local_90,&local_d8);
  if (local_d0 == 0) {
LAB_140db104a:
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  else if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x28))(local_d8,0);
    if (local_d8 != (longlong *)0x0) {
      local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
    }
    local_d0 = 0;
    goto LAB_140db104a;
  }
  local_b0 = *param_2;
  local_a8 = (longlong *)param_2[1];
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    UNLOCK();
    plVar10 = local_c8;
  }
  local_88 = &local_b8;
  local_a0 = 0;
  local_80 = local_90;
  local_b8 = &PTR_FUN_143f740c8;
  local_98 = 0;
  FUN_140da61b0(plVar2,local_res18,&local_88,0);
  local_b8 = &PTR_FUN_143f740c8;
  if (local_a0 != 0) {
    FMemory::Free();
  }
  plVar8 = local_a8;
  local_b8 = &PTR_FUN_143f73d18;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_a8 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    plVar10 = local_c8;
    if ((int)lVar9 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar10 = local_c8;
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
        plVar10 = local_c8;
      }
    }
  }
  local_res20 = 0x11f;
  (**(code **)(*plVar10 + 0x2d0))(plVar10,0x11f,param_2);
LAB_140db1124:
  plVar10 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_c0 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return;
}



// FUNCTION 140db1180 FUN_140db1180 body=2199 status=ok
// SIG undefined FUN_140db1180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140db1180(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined **ppuVar7;
  char cVar8;
  wint_t wVar9;
  wint_t wVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  wint_t *pwVar19;
  longlong *plVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined ***pppuVar23;
  longlong lVar24;
  undefined8 *puVar25;
  uint uVar26;
  int iVar27;
  undefined1 auStack_208 [32];
  uint local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 *local_1d0;
  undefined **local_1c8;
  undefined **ppuStack_1c0;
  undefined2 *local_1b8;
  ulonglong local_1b0;
  undefined8 *local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  undefined2 *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined **local_160;
  undefined **local_158;
  undefined **local_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong *local_138;
  longlong *local_130;
  longlong local_128;
  undefined **local_118;
  undefined **local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b0;
  longlong *local_a8;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined **local_58;
  undefined **ppuStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  uVar26 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_168 = param_1;
  puVar13 = (undefined8 *)FName::FName(local_90,L"SPARK",1);
  FUN_1404d0c50(&local_138,*puVar13);
  if ((local_138 == (longlong *)0x0) ||
     (iVar11 = (**(code **)(*local_138 + 0x3a8))(local_138), iVar11 != 1)) goto LAB_140db18f2;
  local_1a8 = (undefined8 *)0x0;
  local_1a0 = 0;
  (**(code **)(*local_138 + 0x3b0))(local_138,param_2,&local_1a8);
  uVar22 = (ulonglong)(int)local_1a0;
  puVar13 = local_1a8 + uVar22 * 2;
  local_1d0 = puVar13;
  if (local_1a8 != puVar13) {
    local_128 = local_168 + 0x14;
    puVar25 = local_1a8;
LAB_140db1280:
    lVar16 = local_128;
    iVar11 = 0;
    local_1b8 = (undefined2 *)0x0;
    local_1b0 = 0;
    local_198 = 0;
    local_190 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    FGenericPlatformString::Memcpy(local_198,L"DeviceId",0x12);
    (**(code **)(*(longlong *)*puVar25 + 0x20))((longlong *)*puVar25,&local_198,&local_1b8);
    if (local_198 != 0) {
      FMemory::Free();
    }
    local_178 = (undefined2 *)0x0;
    local_170 = 0;
    local_188 = 0;
    local_180 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
    FGenericPlatformString::Memcpy(local_188,L"IsPrimary",0x14);
    (**(code **)(*(longlong *)*puVar25 + 0x20))((longlong *)*puVar25,&local_188,&local_178);
    if (local_188 != 0) {
      FMemory::Free();
    }
    cVar8 = FWeakObjectPtr::IsValid(lVar16);
    if (cVar8 == '\0') {
LAB_140db1397:
      bVar6 = false;
    }
    else {
      uVar26 = uVar26 | 1;
      local_1e8 = uVar26;
      puVar14 = (undefined8 *)
                (**(code **)(*(longlong *)*puVar25 + 8))((longlong *)*puVar25,local_88);
      local_c8 = *puVar14;
      local_c0 = puVar14[1];
      if (local_c0 != 0) {
        LOCK();
        *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        UNLOCK();
      }
      uVar15 = FWeakObjectPtr::Get(lVar16);
      lVar16 = FUN_14244c070(uVar15);
      if (lVar16 != 0) goto LAB_140db1397;
      bVar6 = true;
    }
    plVar20 = local_80;
    if (((uVar26 & 1) != 0) &&
       (uVar26 = uVar26 & 0xfffffffe, local_1e8 = uVar26, local_80 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_80 + 1;
      lVar16 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        iVar27 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar27 == 1) {
          (**(code **)(*plVar20 + 8))(plVar20);
        }
      }
    }
    if (bVar6) {
      iVar27 = -1;
      if (0 < (int)local_1d8) {
        puVar14 = (undefined8 *)(local_1e0 + 0x40);
        do {
          puVar18 = &DAT_143f3eda8;
          if ((int)local_1b0 != 0) {
            puVar18 = local_1b8;
          }
          if (*(int *)(puVar14 + 1) == 0) {
            puVar17 = &DAT_143f3eda8;
          }
          else {
            puVar17 = (undefined2 *)*puVar14;
          }
          iVar12 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar17,puVar18);
          iVar27 = iVar11;
          if (iVar12 == 0) break;
          iVar11 = iVar11 + 1;
          puVar14 = puVar14 + 10;
          iVar27 = -1;
        } while (iVar11 < (int)local_1d8);
      }
      puVar18 = local_1b8;
      if (iVar27 != -1) {
LAB_140db153c:
        pwVar19 = &DAT_144542c00;
        puVar18 = &DAT_143f3eda8;
        if ((int)local_170 != 0) {
          puVar18 = local_178;
        }
        do {
          wVar9 = *(wint_t *)((longlong)(puVar18 + -0xa22a1600) + (longlong)pwVar19);
          if ((wVar9 == 0) && (*pwVar19 == 0)) {
            iVar11 = 0;
            goto LAB_140db15a0;
          }
          if (wVar9 != *pwVar19) {
            wVar9 = towlower(wVar9);
            wVar10 = towlower(*pwVar19);
            if (wVar9 != wVar10) goto LAB_140db1596;
          }
          pwVar19 = pwVar19 + 1;
        } while( true );
      }
      lVar16 = (longlong)(int)local_1b0;
      local_110 = &PTR_FUN_143f740c8;
      local_118 = &PTR_FUN_144552f90;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = (void *)0x0;
      local_cc = 0;
      local_d0 = (int)local_1b0;
      if ((int)local_1b0 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,local_1b0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_d8,puVar18,lVar16 * 2);
      }
      uVar22 = local_1d8;
      iVar27 = (int)local_1d8;
      lVar16 = (longlong)(int)local_1d8;
      iVar11 = (int)local_1d8 + 1;
      local_1d8 = CONCAT44(local_1d8._4_4_,iVar11);
      if (local_1d8._4_4_ < iVar11) {
        TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(&local_1e0,uVar22 & 0xffffffff);
      }
      puVar14 = (undefined8 *)(lVar16 * 0x50 + local_1e0);
      FUN_1404bdf40(puVar14,&local_118);
      *puVar14 = &PTR_FUN_144552f90;
      FString::FString(puVar14 + 8);
      if (local_d8 != (void *)0x0) {
        FMemory::Free();
      }
      local_118 = &PTR_FUN_143f74338;
      FUN_1404bebc0(&local_e8);
      FUN_1404bf980(&local_110);
      uVar26 = local_1e8;
      if (iVar27 != -1) goto LAB_140db153c;
    }
    goto LAB_140db184b;
  }
LAB_140db1882:
  if ((int)uVar22 != 0) {
    plVar20 = local_1a8 + 1;
    do {
      plVar5 = (longlong *)*plVar20;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        lVar16 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar20 = plVar20 + 2;
      uVar26 = (int)uVar22 - 1;
      uVar22 = (ulonglong)uVar26;
    } while (uVar26 != 0);
  }
  if (local_1a8 != (undefined8 *)0x0) {
    FMemory::Free(local_1a8);
  }
LAB_140db18f2:
  lVar16 = local_168;
  cVar8 = FWeakObjectPtr::IsValid(local_168 + 0x14);
  if (cVar8 != '\0') {
    uVar15 = FWeakObjectPtr::Get(lVar16 + 0x14);
    lVar16 = FUN_140bb7900(uVar15);
    if (lVar16 != 0) {
      lVar24 = (longlong)(int)local_1d8 * 0x50 + local_1e0;
      for (lVar21 = local_1e0; lVar21 != lVar24; lVar21 = lVar21 + 0x50) {
        FUN_1404c5c30(lVar16,lVar21);
      }
    }
  }
  plVar20 = local_130;
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_130 + 1;
    lVar16 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  if ((int)local_1d8 != 0) {
    lVar16 = local_1e0 + 0x30;
    iVar11 = (int)local_1d8;
    do {
      if (*(longlong *)(lVar16 + 0x10) != 0) {
        FMemory::Free();
      }
      *(undefined ***)(lVar16 + -0x30) = &PTR_FUN_143f74338;
      FUN_1404bebc0(lVar16);
      FUN_1404bf980(lVar16 + -0x28);
      lVar16 = lVar16 + 0x50;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (local_1e0 != 0) {
    FMemory::Free(local_1e0);
  }
  return;
LAB_140db1596:
  iVar11 = (uint)wVar9 - (uint)wVar10;
LAB_140db15a0:
  plVar20 = (longlong *)*puVar25;
  if (iVar11 == 0) {
    puVar14 = (undefined8 *)(**(code **)(*plVar20 + 8))(plVar20,local_78);
    local_150 = (undefined **)puVar14[1];
    local_158 = (undefined **)*puVar14;
    if (local_150 != (undefined **)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = *(int *)(local_150 + 1) + 1;
      UNLOCK();
    }
    local_160 = &PTR_FUN_143f740c8;
    local_148 = 0;
    local_140 = 0;
    pppuVar23 = (undefined ***)(local_1e0 + 8 + (longlong)iVar27 * 0x50);
    if (&local_160 != pppuVar23) {
      pppuVar2 = pppuVar23 + 1;
      if (local_150 != (undefined **)0x0) {
        LOCK();
        *(int *)(local_150 + 1) = *(int *)(local_150 + 1) + 1;
        UNLOCK();
      }
      local_1c8 = local_158;
      ppuStack_1c0 = local_150;
      if (&local_1c8 != pppuVar2) {
        local_1c8 = *pppuVar2;
        ppuStack_1c0 = pppuVar23[2];
        *pppuVar2 = local_158;
        pppuVar23[2] = local_150;
        local_58 = local_158;
        ppuStack_50 = local_150;
      }
      ppuVar7 = ppuStack_1c0;
      if (ppuStack_1c0 != (undefined **)0x0) {
        LOCK();
        ppuVar3 = ppuStack_1c0 + 1;
        iVar11 = *(int *)ppuVar3;
        *(int *)ppuVar3 = *(int *)ppuVar3 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)*ppuStack_1c0)(ppuStack_1c0);
          LOCK();
          piVar1 = (int *)((longlong)ppuVar7 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*ppuStack_1c0 + 8))(ppuStack_1c0,1);
          }
        }
      }
    }
    TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(pppuVar23 + 3);
    ppuVar7 = local_150;
    if (local_150 != (undefined **)0x0) {
      LOCK();
      ppuVar3 = local_150 + 1;
      iVar11 = *(int *)ppuVar3;
      *(int *)ppuVar3 = *(int *)ppuVar3 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)ppuVar7 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_150 + 8))();
        }
      }
    }
    plVar20 = local_70;
    uVar26 = local_1e8;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_70 + 1;
      lVar16 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar26 = local_1e8;
        if (iVar11 == 1) {
          (**(code **)(*plVar20 + 8))(plVar20);
          uVar26 = local_1e8;
        }
      }
    }
  }
  else {
    puVar13 = (undefined8 *)(**(code **)(*plVar20 + 8))(plVar20,local_68);
    plVar20 = (longlong *)puVar13[1];
    uVar15 = *puVar13;
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
    }
    lVar16 = (longlong)iVar27 * 0x50 + local_1e0;
    iVar11 = *(int *)(lVar16 + 0x38);
    lVar21 = (longlong)iVar11;
    *(int *)(lVar16 + 0x38) = iVar11 + 1;
    local_b0 = uVar15;
    local_a8 = plVar20;
    if (*(int *)(lVar16 + 0x3c) < iVar11 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(lVar16 + 0x30,iVar11);
    }
    plVar5 = local_a8;
    lVar16 = *(longlong *)(lVar16 + 0x30);
    *(undefined ***)(lVar16 + lVar21 * 0x28) = &PTR_FUN_143f73d18;
    *(undefined8 *)(lVar16 + 8 + lVar21 * 0x28) = uVar15;
    *(longlong **)(lVar16 + 0x10 + lVar21 * 0x28) = plVar20;
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
      plVar20 = local_a8;
    }
    *(undefined ***)(lVar16 + lVar21 * 0x28) = &PTR_FUN_143f740c8;
    *(undefined8 *)(lVar16 + 0x18 + lVar21 * 0x28) = 0;
    *(undefined8 *)(lVar16 + 0x20 + lVar21 * 0x28) = 0;
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      plVar20 = plVar20 + 1;
      lVar16 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_a8 + 8))();
        }
      }
    }
    plVar20 = local_60;
    puVar13 = local_1d0;
    uVar26 = local_1e8;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_60 + 1;
      lVar16 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        puVar13 = local_1d0;
        uVar26 = local_1e8;
        if (iVar11 == 1) {
          (**(code **)(*plVar20 + 8))(plVar20);
          puVar13 = local_1d0;
          uVar26 = local_1e8;
        }
      }
    }
  }
LAB_140db184b:
  if (local_178 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_1b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar25 = puVar25 + 2;
  if (puVar25 == puVar13) goto code_r0x000140db1879;
  goto LAB_140db1280;
code_r0x000140db1879:
  uVar22 = local_1a0 & 0xffffffff;
  goto LAB_140db1882;
}



// FUNCTION 140db1a20 FUN_140db1a20 body=171 status=ok
// SIG undefined FUN_140db1a20(void)

bool FUN_140db1a20(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x70) != '\0') {
    return false;
  }
  uVar1 = FWeakObjectPtr::Get(param_1 + 0x14);
  cVar2 = FUN_140bca8a0(uVar1);
  if ((cVar2 == '\0') && (cVar2 = FUN_140db24b0(param_1 + 0x88), cVar2 == '\0')) {
    return false;
  }
  cVar2 = FUN_140db2d50(param_1);
  if ((cVar2 != '\0') && (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x14), cVar2 != '\0')) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar5 = FUN_140bb7900(uVar1);
    if (lVar5 != 0) {
      iVar3 = FUN_140dbc490(param_1);
      iVar4 = FUN_1404cfb00(lVar5);
      return iVar4 < iVar3 + -1;
    }
  }
  return true;
}



// FUNCTION 140db1ad0 FUN_140db1ad0 body=61 status=ok
// SIG undefined FUN_140db1ad0(void)

void FUN_140db1ad0(longlong param_1,char *param_2)

{
  char cVar1;
  
  *(bool *)(param_1 + 0x12) = *param_2 == '\x01';
  *(bool *)(param_1 + 0x15) = *param_2 == '\x02';
  cVar1 = param_2[1];
  if (cVar1 == '\0') {
    *(undefined2 *)(param_1 + 0x17) = 1;
  }
  else {
    if (cVar1 == '\x01') {
      *(undefined2 *)(param_1 + 0x17) = 0;
      return;
    }
    if (cVar1 == '\x02') {
      *(undefined2 *)(param_1 + 0x17) = 0x101;
      return;
    }
  }
  return;
}



// FUNCTION 140db1b10 FUN_140db1b10 body=2458 status=ok
// SIG undefined FUN_140db1b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140db1b10(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int *piVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auStack_388 [32];
  longlong *local_368;
  undefined8 local_360;
  longlong local_358;
  longlong local_350;
  undefined8 local_348;
  longlong local_340;
  undefined8 local_338;
  longlong local_330;
  undefined8 local_328;
  longlong local_320;
  undefined8 local_318;
  longlong local_310;
  undefined8 local_308;
  longlong local_300 [6];
  int *local_2d0;
  longlong local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_298;
  longlong *local_290;
  undefined1 local_278 [16];
  undefined1 *local_268 [2];
  longlong local_258 [4];
  longlong *local_238;
  int local_228;
  undefined1 *local_218 [2];
  longlong local_208 [4];
  longlong *local_1e8;
  int local_1d8;
  undefined1 *local_1c8 [2];
  longlong local_1b8 [4];
  longlong *local_198;
  int local_188;
  undefined1 *local_178 [2];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined1 *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  local_358 = param_1;
  if (((*(longlong *)(param_1 + 0x1e8) == 0) && (*(longlong *)(param_1 + 0x1f0) == 0)) &&
     (*(longlong *)(param_1 + 0x1f8) == 0)) {
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x14);
    if (cVar4 != '\0') {
      uVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
      lVar7 = FUN_140bb7900(uVar6);
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)FName::FName(local_278,L"SPARK",1);
        FUN_1404d0c50(&local_2c0,*puVar8);
        if (local_2c0 == (longlong *)0x0) {
          local_238 = (longlong *)0x0;
          local_228 = 0;
          puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_258);
          if (puVar8 != (undefined8 *)0x0) {
            puVar8[1] = param_1;
            *puVar8 = &PTR_FUN_143f77b70;
          }
          local_350 = 0;
          local_268[0] = &LAB_140db2c20;
          local_348 = 0x33;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_350,0);
          FGenericPlatformString::Memcpy
                    (local_350,L"are_all_matchmaking_clients_in_matchmaking_session",0x66);
          FUN_140dcdc50(param_1,&local_350,local_268);
          if (local_350 != 0) {
            FMemory::Free();
          }
          plVar10 = local_238;
          if (local_228 != 0) {
            plVar13 = local_258;
            if (local_238 != (longlong *)0x0) {
              plVar13 = local_238;
            }
            if (plVar13 != (longlong *)0x0) {
              (**(code **)(*plVar13 + 0x10))(plVar13,0);
              plVar10 = local_238;
            }
          }
        }
        else {
          local_300[4] = 0x120;
          local_2c8 = (**(code **)(*local_2c0 + 0x10))(local_2c0,0x120);
          if (local_2c8 != 0) {
            local_300[5] = *(longlong *)(lVar7 + 0x60);
            local_2a8 = (longlong)*(int *)(lVar7 + 0x68) * 0x40 + local_300[5];
            local_368 = (longlong *)0x0;
            local_360 = 0;
            if (local_300[5] != local_2a8) {
              piVar11 = (int *)(local_300[5] + 0x38);
              do {
                uVar9 = local_360;
                lVar7 = (longlong)(int)local_360;
                iVar5 = (int)local_360 + 1;
                local_360 = CONCAT44(local_360._4_4_,iVar5);
                local_2d0 = piVar11;
                if (local_360._4_4_ < iVar5) {
                  TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow
                            (&local_368,uVar9 & 0xffffffff);
                }
                plVar10 = local_368 + lVar7 * 5;
                *plVar10 = (longlong)&PTR_FUN_143f73d18;
                plVar10[1] = *(longlong *)(piVar11 + -10);
                lVar7 = *(longlong *)(piVar11 + -8);
                plVar10[2] = lVar7;
                if (lVar7 != 0) {
                  LOCK();
                  *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
                  UNLOCK();
                }
                *plVar10 = (longlong)&PTR_FUN_143f740c8;
                plVar10[3] = 0;
                plVar10[4] = 0;
                lVar7 = *(longlong *)(piVar11 + -2);
                local_2b0 = lVar7 + (longlong)*piVar11 * 0x28;
                if (lVar7 != local_2b0) {
                  do {
                    uVar9 = local_360;
                    plVar10 = *(longlong **)(lVar7 + 0x10);
                    lVar2 = *(longlong *)(lVar7 + 8);
                    if (plVar10 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                      UNLOCK();
                    }
                    lVar15 = (longlong)(int)local_360;
                    iVar5 = (int)local_360 + 1;
                    local_360 = CONCAT44(local_360._4_4_,iVar5);
                    local_298 = lVar2;
                    local_290 = plVar10;
                    if (local_360._4_4_ < iVar5) {
                      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow
                                (&local_368,uVar9 & 0xffffffff);
                    }
                    plVar13 = local_290;
                    local_368[lVar15 * 5] = (longlong)&PTR_FUN_143f73d18;
                    local_368[lVar15 * 5 + 1] = lVar2;
                    local_368[lVar15 * 5 + 2] = (longlong)plVar10;
                    if (plVar10 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                      UNLOCK();
                      plVar10 = local_290;
                    }
                    local_368[lVar15 * 5] = (longlong)&PTR_FUN_143f740c8;
                    local_368[lVar15 * 5 + 3] = 0;
                    local_368[lVar15 * 5 + 4] = 0;
                    if (plVar10 != (longlong *)0x0) {
                      LOCK();
                      plVar10 = plVar10 + 1;
                      lVar2 = *plVar10;
                      *(int *)plVar10 = (int)*plVar10 + -1;
                      UNLOCK();
                      if ((int)lVar2 == 1) {
                        (**(code **)*local_290)(local_290);
                        LOCK();
                        piVar11 = (int *)((longlong)plVar13 + 0xc);
                        iVar5 = *piVar11;
                        *piVar11 = *piVar11 + -1;
                        UNLOCK();
                        if (iVar5 == 1) {
                          (**(code **)(*local_290 + 8))(local_290,1);
                        }
                      }
                    }
                    lVar7 = lVar7 + 0x28;
                    piVar11 = local_2d0;
                  } while (lVar7 != local_2b0);
                }
                local_300[5] = local_300[5] + 0x40;
                piVar11 = piVar11 + 0x10;
                local_2d0 = piVar11;
              } while (local_300[5] != local_2a8);
            }
            plVar10 = local_368 + (longlong)(int)local_360 * 5;
            if (local_368 != plVar10) {
              plVar13 = local_368 + 1;
              do {
                lVar7 = local_2c8;
                if (((longlong *)*plVar13 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*(longlong *)*plVar13 + 0x20))(), cVar4 == '\0')) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (!bVar3) {
                  local_148 = (longlong *)0x0;
                  local_138 = 0;
                  puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_168);
                  lVar7 = local_358;
                  if (puVar8 != (undefined8 *)0x0) {
                    puVar8[1] = local_358;
                    *puVar8 = &PTR_FUN_143f77b70;
                  }
                  local_320 = 0;
                  local_178[0] = &LAB_140db2c40;
                  local_318 = 0x33;
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_320,0);
                  FGenericPlatformString::Memcpy
                            (local_320,L"are_all_matchmaking_clients_in_matchmaking_session",0x66);
                  FUN_140dcdc50(lVar7,&local_320,local_178);
                  if (local_320 != 0) {
                    FMemory::Free();
                  }
                  plVar10 = local_148;
                  if (local_138 != 0) {
                    plVar13 = local_168;
                    if (local_148 != (longlong *)0x0) {
                      plVar13 = local_148;
                    }
                    if (plVar13 != (longlong *)0x0) {
                      (**(code **)(*plVar13 + 0x10))(plVar13,0);
                      plVar10 = local_148;
                    }
                  }
LAB_140db22e2:
                  if (plVar10 != (longlong *)0x0) {
                    FMemory::Free();
                  }
                  uVar9 = 0;
                  goto LAB_140db20cd;
                }
                puVar8 = *(undefined8 **)(lVar7 + 0xf0);
                lVar2 = *plVar13;
                puVar14 = puVar8 + (longlong)*(int *)(lVar7 + 0xf8) * 2;
                while ((puVar12 = (undefined8 *)0x0, puVar8 != puVar14 &&
                       (cVar4 = (*(code *)**(undefined8 **)*puVar8)((undefined8 *)*puVar8,lVar2),
                       puVar12 = puVar8, cVar4 == '\0'))) {
                  puVar8 = puVar8 + 2;
                }
                if (puVar12 == (undefined8 *)0x0) {
                  local_198 = (longlong *)0x0;
                  local_188 = 0;
                  puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_1b8);
                  lVar7 = local_358;
                  if (puVar8 != (undefined8 *)0x0) {
                    puVar8[1] = local_358;
                    *puVar8 = &PTR_FUN_143f77b70;
                  }
                  local_330 = 0;
                  local_1c8[0] = &LAB_140db2c00;
                  local_328 = 0x33;
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_330,0);
                  FGenericPlatformString::Memcpy
                            (local_330,L"are_all_matchmaking_clients_in_matchmaking_session",0x66);
                  FUN_140dcdc50(lVar7,&local_330,local_1c8);
                  if (local_330 != 0) {
                    FMemory::Free();
                  }
                  plVar10 = local_198;
                  if (local_188 != 0) {
                    plVar13 = local_1b8;
                    if (local_198 != (longlong *)0x0) {
                      plVar13 = local_198;
                    }
                    if (plVar13 != (longlong *)0x0) {
                      (**(code **)(*plVar13 + 0x10))(plVar13,0);
                      plVar10 = local_198;
                    }
                  }
                  goto LAB_140db22e2;
                }
                plVar1 = plVar13 + 4;
                plVar13 = plVar13 + 5;
              } while (plVar1 != plVar10);
            }
            local_f8 = (longlong *)0x0;
            local_e8 = 0;
            puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_118);
            lVar7 = local_358;
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[1] = local_358;
              *puVar8 = &PTR_FUN_143f77b70;
            }
            local_310 = 0;
            local_128[0] = &LAB_140db2ab0;
            local_308 = 0x33;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_310,0);
            FGenericPlatformString::Memcpy
                      (local_310,L"are_all_matchmaking_clients_in_matchmaking_session",0x66);
            FUN_140dcdc50(lVar7,&local_310,local_128);
            if (local_310 != 0) {
              FMemory::Free();
            }
            if (local_e8 != 0) {
              plVar10 = local_118;
              if (local_f8 != (longlong *)0x0) {
                plVar10 = local_f8;
              }
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x10))(plVar10,0);
              }
            }
            if (local_f8 != (longlong *)0x0) {
              FMemory::Free();
            }
            uVar9 = 1;
LAB_140db20cd:
            FUN_1404bebc0(&local_368);
            goto LAB_140db20e7;
          }
          local_1e8 = (longlong *)0x0;
          local_1d8 = 0;
          puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_208);
          if (puVar8 != (undefined8 *)0x0) {
            puVar8[1] = param_1;
            *puVar8 = &PTR_FUN_143f77b70;
          }
          local_340 = 0;
          local_218[0] = &LAB_140db2c30;
          local_338 = 0x33;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_340,0);
          FGenericPlatformString::Memcpy
                    (local_340,L"are_all_matchmaking_clients_in_matchmaking_session",0x66);
          FUN_140dcdc50(param_1,&local_340,local_218);
          if (local_340 != 0) {
            FMemory::Free();
          }
          plVar10 = local_1e8;
          if (local_1d8 != 0) {
            plVar13 = local_208;
            if (local_1e8 != (longlong *)0x0) {
              plVar13 = local_1e8;
            }
            if (plVar13 != (longlong *)0x0) {
              (**(code **)(*plVar13 + 0x10))(plVar13,0);
              plVar10 = local_1e8;
            }
          }
        }
        if (plVar10 != (longlong *)0x0) {
          FMemory::Free();
        }
        uVar9 = 0;
LAB_140db20e7:
        plVar10 = local_2b8;
        if (local_2b8 == (longlong *)0x0) {
          return uVar9;
        }
        LOCK();
        plVar13 = local_2b8 + 1;
        lVar7 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return uVar9;
        }
        (**(code **)*local_2b8)(local_2b8);
        LOCK();
        piVar11 = (int *)((longlong)plVar10 + 0xc);
        iVar5 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar5 != 1) {
          return uVar9;
        }
        (**(code **)(*local_2b8 + 8))(local_2b8,1);
        return uVar9;
      }
    }
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_FUN_143f77b70;
    }
    local_300[0] = 0;
    local_d8[0] = &LAB_140db2b40;
    local_300[1] = 0x33;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_300,0);
    FGenericPlatformString::Memcpy
              (local_300[0],L"are_all_matchmaking_clients_in_matchmaking_session",0x66);
    uVar9 = FUN_140dcdc50(param_1,local_300,local_d8);
    if (local_300[0] != 0) {
      uVar9 = FMemory::Free();
    }
    plVar10 = local_a8;
    if (local_98 != 0) {
      plVar13 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar13 = local_a8;
      }
      if (plVar13 != (longlong *)0x0) {
        uVar9 = (**(code **)(*plVar13 + 0x10))(plVar13,0);
        plVar10 = local_a8;
      }
    }
  }
  else {
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_FUN_143f77b70;
    }
    local_300[2] = 0;
    local_88[0] = &LAB_140db2b60;
    local_300[3] = 0x33;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_300 + 2,0);
    FGenericPlatformString::Memcpy
              (local_300[2],L"are_all_matchmaking_clients_in_matchmaking_session",0x66);
    uVar9 = FUN_140dcdc50(param_1,local_300 + 2,local_88);
    if (local_300[2] != 0) {
      uVar9 = FMemory::Free();
    }
    plVar10 = local_58;
    if (local_48 != 0) {
      plVar13 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar13 = local_58;
      }
      if (plVar13 != (longlong *)0x0) {
        uVar9 = (**(code **)(*plVar13 + 0x10))(plVar13,0);
        plVar10 = local_58;
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    uVar9 = FMemory::Free();
  }
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 140db24b0 FUN_140db24b0 body=110 status=ok
// SIG undefined FUN_140db24b0(void)

undefined8 FUN_140db24b0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_140dbbc10();
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x470);
    puVar1 = puVar3 + *(int *)(lVar2 + 0x478);
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      lVar2 = (**(code **)(*(longlong *)*puVar3 + 0x670))();
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x488) == 0)) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 140db2520 FUN_140db2520 body=1194 status=ok
// SIG undefined FUN_140db2520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140db2520(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e8 [2];
  longlong *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_e8[0] = 0;
  local_88[0] = &LAB_140db2a60;
  local_e8[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"backup_matchmaking",0x26);
  FUN_140dcdc50(param_1,local_e8,local_88);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
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
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    return;
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar3 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
    cVar3 = FUN_140bc9f60(uVar6);
    if (cVar3 != '\0') {
      return;
    }
  }
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
  FUN_1404c9880(*(undefined8 *)(lVar7 + 0xae8),DAT_14686f220);
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
  FUN_1404c9880(*(undefined8 *)(lVar7 + 0xae8),DAT_14686f228);
  FUN_140db2e80(param_1 + 0x2d8);
  puVar5 = (undefined8 *)FName::FName(local_98,L"SPARK",1);
  FUN_1404d0c50(&local_108,*puVar5);
  FUN_140db5aa0(param_1);
  FUN_140db5980(param_1);
  FUN_140db5ba0(param_1);
  plVar9 = local_108;
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x40))(local_108,param_1 + 0xb8);
    (**(code **)(*plVar9 + 0x1b8))(plVar9,param_1 + 0x390);
    (**(code **)(*plVar9 + 0x360))(plVar9,param_1 + 0x1f8);
    (**(code **)(*plVar9 + 0xe0))(plVar9,param_1 + 0x1e8);
    (**(code **)(*plVar9 + 0x168))(plVar9,param_1 + 0x1f0);
    iVar4 = (**(code **)(*plVar9 + 0x3a8))(plVar9);
    if ((iVar4 == 1) && (iVar4 = (**(code **)(*plVar9 + 0x378))(plVar9), iVar4 != 0)) {
      FUN_140dbc950(param_1,&local_f8);
      plVar8 = plStack_f0;
      if (local_f8 != 0) {
        local_a8 = local_f8;
        plStack_a0 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
          UNLOCK();
          plVar9 = local_108;
        }
        (**(code **)(*plVar9 + 0x380))(plVar9,&local_a8);
        plVar2 = plStack_a0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_a0 + 1;
          lVar7 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          plVar8 = plStack_f0;
          plVar9 = local_108;
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar8 = plStack_f0;
            plVar9 = local_108;
            if (iVar4 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
              plVar8 = plStack_f0;
              plVar9 = local_108;
            }
          }
        }
      }
      plVar2 = plStack_f0;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar8 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar9 = local_108;
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar9 = local_108;
          if (iVar4 == 1) {
            (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
            plVar9 = local_108;
          }
        }
      }
    }
    local_c8 = 0x120;
    lVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,0x120);
    if (lVar7 != 0) {
      lVar7 = *plVar9;
      uVar6 = FUN_140da5ad0(&local_d8,param_1,FUN_140dc5ae0);
      puVar5 = (undefined8 *)(**(code **)(lVar7 + 0xd8))(plVar9,local_90,uVar6);
      *(undefined8 *)(param_1 + 0x3b8) = *puVar5;
      if (local_d0 == 0) {
LAB_140db28d3:
        if (local_d8 != (longlong *)0x0) {
          FMemory::Free(local_d8);
        }
      }
      else if (local_d8 != (longlong *)0x0) {
        (**(code **)(*local_d8 + 0x28))(local_d8,0);
        if (local_d8 != (longlong *)0x0) {
          local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
        }
        local_d0 = 0;
        goto LAB_140db28d3;
      }
      local_c0 = 0x120;
      (**(code **)(*plVar9 + 0xd0))(plVar9,0x120);
      goto LAB_140db2918;
    }
  }
  local_b8 = 0x120;
  FUN_140dc5ae0(param_1,0x120,1);
LAB_140db2918:
  cVar3 = FUN_140bca8a0(*(undefined8 *)(param_1 + 0x88));
  if (cVar3 == '\0') {
    lVar7 = FUN_140dbbc10(param_1 + 0x88);
    if (lVar7 != 0) {
      FUN_141426000(lVar7);
    }
  }
  else {
    lVar7 = FUN_140bb7870(*(undefined8 *)(param_1 + 0x88));
    if (lVar7 != 0) {
      FUN_140dd4640(lVar7);
    }
  }
  plVar9 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_100 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  return;
}



// FUNCTION 140db2d50 FUN_140db2d50 body=190 status=ok
// SIG undefined FUN_140db2d50(void)

ulonglong FUN_140db2d50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong in_RAX;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  longlong *local_18;
  longlong *local_10;
  
  if (*(char *)(param_1 + 0x2f8) != '\0') {
    puVar6 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
    Online::GetIdentityInterface(&local_18,*puVar6);
    if (local_18 == (longlong *)0x0) {
      bVar7 = false;
    }
    else {
      iVar5 = (**(code **)(*local_18 + 0x38))();
      bVar7 = iVar5 - 1U < 2;
    }
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    return (ulonglong)bVar7;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140db2e10 FUN_140db2e10 body=103 status=ok
// SIG undefined FUN_140db2e10(void)

void FUN_140db2e10(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  param_1 = param_1 + 0xe8;
  cVar2 = FWeakObjectPtr::IsValid(param_1);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1);
    if (*(longlong *)(lVar3 + 0xae8) != 0) {
      FUN_1404c9880(*(longlong *)(lVar3 + 0xae8),DAT_14686f228);
    }
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1);
    lVar3 = FUN_140bb7900(uVar1);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x50) = 0;
    }
  }
  return;
}



// FUNCTION 140db2e80 FUN_140db2e80 body=152 status=ok
// SIG undefined FUN_140db2e80(void)

void FUN_140db2e80(undefined2 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  longlong *local_18;
  longlong *local_10;
  
  *param_1 = 0;
  puVar6 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  FUN_1404d0c50(&local_18,*puVar6);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x90))(local_18,param_1 + 4);
  }
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
  return;
}



// FUNCTION 140db2f20 FUN_140db2f20 body=1762 status=ok
// SIG undefined FUN_140db2f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140db2f20(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong *plStack_1b0;
  longlong local_1a8 [3];
  longlong *local_190;
  undefined8 local_188;
  longlong *local_180;
  longlong local_178 [2];
  longlong *local_168;
  longlong *local_160;
  longlong local_158;
  longlong *plStack_150;
  undefined1 local_148 [8];
  undefined1 local_140 [56];
  undefined1 local_108 [64];
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if ((byte)(*(char *)(param_1 + 0x10) - 1U) < 4) {
    FUN_140dd0a90(param_1,5);
    *(undefined2 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0xd0,0);
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0xe0,0);
    iVar8 = *(int *)(param_1 + 0x120);
    if (iVar8 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x118) + 8;
      do {
        FUN_1404bf980(lVar5);
        lVar5 = lVar5 + 0x30;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (*(int *)(param_1 + 0x124) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x118,0);
    }
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
      local_190 = (longlong *)0x0;
      if ((longlong *)(param_1 + 0x40) != local_1a8 + 2) {
        *(longlong *)(param_1 + 0x40) = 0;
        local_1a8[2] = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x48,&local_190);
        plVar7 = local_190;
        if (local_190 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_190 + 1;
          lVar5 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_190)(local_190);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_190 + 8))(local_190,1);
            }
          }
        }
      }
    }
    local_180 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x20) != &local_188) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      local_188 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_180);
      plVar7 = local_180;
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_180 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_180 + 8))(local_180,1);
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      uVar4 = FUN_14164ab60();
      FUN_141597530(uVar4,*(undefined8 *)(param_1 + 0xa8));
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    FUN_140db5aa0(param_1);
    FUN_140db5980(param_1);
    FUN_140db5ba0(param_1);
    FUN_140bafce0(param_1 + 0x358,0);
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
      *(undefined4 *)(param_1 + 0x2e8) = 0;
      uVar4 = FUN_14164ab60();
      FUN_141597530(uVar4,*(undefined8 *)(param_1 + 0x2f0));
      *(undefined8 *)(param_1 + 0x2f0) = 0;
    }
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x14);
    if (cVar2 != '\0') {
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x14);
      lVar5 = *(longlong *)(lVar5 + 0xae8);
      if (lVar5 != 0) {
        FUN_1404c9880(lVar5,DAT_14686f228);
        FUN_1404c9880(lVar5,DAT_14686f220);
      }
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x14);
      TBaseMulticastDelegate<void>::Remove(lVar5 + 0x9a0,*(undefined8 *)(param_1 + 0xf0));
      *(undefined8 *)(param_1 + 0xf0) = 0;
      if (*(longlong *)(param_1 + 0x2c8) != 0) {
        lVar5 = FWeakObjectPtr::Get(param_1 + 0x14);
        TBaseMulticastDelegate<void>::Remove(lVar5 + 0x608,*(undefined8 *)(param_1 + 0x2c8));
        *(undefined8 *)(param_1 + 0x2c8) = 0;
        uVar4 = FUN_140b99a90(local_140);
        TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x478,uVar4);
        FUN_140b9cdd0(local_140);
      }
      if (*(longlong *)(param_1 + 0x2c0) != 0) {
        lVar5 = FWeakObjectPtr::Get(param_1 + 0x14);
        TBaseMulticastDelegate<void>::Remove(lVar5 + 0x620,*(undefined8 *)(param_1 + 0x2c0));
        *(undefined8 *)(param_1 + 0x2c0) = 0;
        uVar4 = FUN_140b99a90(local_108);
        TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x478,uVar4);
        FUN_140b9cdd0(local_108);
      }
    }
    FUN_140db2e80(param_1 + 0x2d8);
    puVar3 = (undefined8 *)FName::FName(local_148,L"SPARK",1);
    FUN_1404d0c50(&local_168,*puVar3);
    plVar7 = local_168;
    if (local_168 != (longlong *)0x0) {
      (**(code **)(*local_168 + 0x40))(local_168,param_1 + 0xb8);
      (**(code **)(*plVar7 + 0x1b8))(plVar7,param_1 + 0x390);
      (**(code **)(*plVar7 + 0x360))(plVar7,param_1 + 0x1f8);
      (**(code **)(*plVar7 + 0xe0))(plVar7,param_1 + 0x1e8);
      (**(code **)(*plVar7 + 0x168))(plVar7,param_1 + 0x1f0);
      (**(code **)(*plVar7 + 0x1b8))(plVar7,param_1 + 0x3c0);
      (**(code **)(*plVar7 + 0xe0))(plVar7,param_1 + 0x3b8);
    }
    if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
      if ((plVar7 != (longlong *)0x0) &&
         (iVar8 = (**(code **)(*plVar7 + 0x3a8))(plVar7), iVar8 == 1)) {
        FUN_140dbc950(param_1,&local_1b8);
        plVar6 = plStack_1b0;
        if (local_1b8 != 0) {
          local_158 = local_1b8;
          plStack_150 = plStack_1b0;
          if (plStack_1b0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_1b0 + 1) = (int)plStack_1b0[1] + 1;
            UNLOCK();
            plVar7 = local_168;
          }
          (**(code **)(*plVar7 + 0x380))(plVar7,&local_158);
          plVar7 = plStack_150;
          if (plStack_150 != (longlong *)0x0) {
            LOCK();
            plVar6 = plStack_150 + 1;
            lVar5 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            plVar6 = plStack_1b0;
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_150)(plStack_150);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar6 = plStack_1b0;
              if (iVar8 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
                plVar6 = plStack_1b0;
              }
            }
          }
        }
        plVar7 = plStack_1b0;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar6 + 1;
          lVar5 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_1b0)(plStack_1b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plStack_1b0 + 8))(plStack_1b0,1);
            }
          }
        }
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    }
    FUN_140db39c0(param_1);
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = param_1;
      *puVar3 = &PTR_FUN_143f77b70;
    }
    local_178[0] = 0;
    local_78[0] = &LAB_140db2ab0;
    local_178[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_178,0);
    FGenericPlatformString::Memcpy(local_178[0],L"cancel_matchmaking",0x26);
    FUN_140dcdc50(param_1,local_178,local_78);
    if (local_178[0] != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      plVar7 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar7 = local_48;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar7 = local_160;
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_160 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
    uVar4 = 1;
  }
  else {
    local_98 = (longlong *)0x0;
    local_88 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = param_1;
      *puVar3 = &PTR_FUN_143f77b70;
    }
    local_1a8[0] = 0;
    local_c8[0] = &LAB_140db2ad0;
    local_1a8[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a8,0);
    FGenericPlatformString::Memcpy(local_1a8[0],L"cancel_matchmaking",0x26);
    FUN_140dcdc50(param_1,local_1a8,local_c8);
    if (local_1a8[0] != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      plVar7 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar7 = local_98;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 140db3610 FUN_140db3610 body=88 status=ok
// SIG undefined FUN_140db3610(void)

void FUN_140db3610(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
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
    if (bVar2) {
      FUN_140ba8040(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140db3670 FUN_140db3670 body=833 status=ok
// SIG undefined FUN_140db3670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140db3670(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  short *psVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_138;
  longlong local_128;
  ulonglong local_120;
  longlong local_118 [2];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [64];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar11 = 0;
  lVar13 = -1;
  if (*(char *)(param_1 + 0x70) != '\0') goto LAB_140db3807;
  uVar5 = FWeakObjectPtr::Get(param_1 + 0x14);
  lVar6 = FUN_14244f490(uVar5,0);
  if (lVar6 == 0) {
LAB_140db3704:
    lVar6 = lVar11;
  }
  else {
    lVar7 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140db3704;
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_f8,L"Matchmaking Error",L"Matchmaking",L"MatchmakingErrorCaption");
  uVar5 = FUN_140dbc170(param_1,local_e0,param_2);
  FUN_140b99a50(local_c8,local_f8,uVar5);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_f0 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_d8 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  FWeakObjectPtr::operator=(&local_108,0);
  uStack_100 = 0;
  uVar5 = FAvfMediaFactoryModule::GetSupportedPlatforms(local_c8);
  uVar8 = UE4Function_Private::TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>::
          GetAddress(local_c8);
  local_138 = 2;
  local_140 = 0;
  local_148 = 1;
  FUN_1410f3960(lVar6,uVar8,uVar5,&local_108);
  FUN_140b9cdd0(local_c8);
LAB_140db3807:
  uStack_100 = CONCAT71(uStack_100._1_7_,param_2);
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_108 = param_1;
  puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_78);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar9 + 1) = (undefined4)local_108;
    *(undefined4 *)((longlong)puVar9 + 0xc) = local_108._4_4_;
    *(undefined4 *)(puVar9 + 2) = (undefined4)uStack_100;
    *(undefined4 *)((longlong)puVar9 + 0x14) = uStack_100._4_4_;
  }
  local_118[0] = 0;
  local_88[0] = &LAB_140db2a10;
  local_118[1] = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_118,0);
  FGenericPlatformString::Memcpy(local_118[0],L"cancel_matchmaking_with_error",0x3c);
  FUN_140dcdc50(param_1,local_118,local_88);
  if (local_118[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    plVar14 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar14 = local_58;
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
    if (*(longlong *)(lVar6 + 0xcb0) != 0) {
      psVar10 = (short *)FUN_140dd55c0(param_2);
      local_120 = 0;
      local_128 = 0;
      if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
        do {
          lVar13 = lVar13 + 1;
        } while (psVar10[lVar13] != 0);
        uVar12 = (int)lVar13 + 1;
        local_120 = (ulonglong)uVar12;
        if (0 < (int)uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
        }
        FGenericPlatformString::Memcpy(local_128,psVar10,(longlong)(int)uVar12 * 2);
      }
      cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x14);
      if (cVar4 != '\0') {
        lVar13 = FWeakObjectPtr::Get(param_1 + 0x14);
        lVar11 = *(longlong *)(lVar13 + 0xcb0);
      }
      FUN_1413c8ce0(lVar11,&local_128);
      if (local_128 != 0) {
        FMemory::Free();
      }
    }
  }
  FUN_140db2f20(param_1);
  return;
}



// FUNCTION 140db39c0 FUN_140db39c0 body=422 status=ok
// SIG undefined FUN_140db39c0(void)

void FUN_140db39c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  int local_40;
  longlong local_38 [2];
  
  if (*(char *)(param_1 + 0x10) != '\x05') {
    return;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    return;
  }
  puVar5 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404d0c50(&local_58,*puVar5);
  if ((local_58 == (longlong *)0x0) ||
     (lVar6 = (**(code **)(*local_58 + 0x10))(local_58,0x120), lVar6 == 0)) {
    FUN_140dc2b80(param_1);
    plVar1 = (longlong *)(param_1 + 0x60);
    if (plVar1 != local_38) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    FUN_140dd0a90(param_1,0);
    goto LAB_140db3b14;
  }
  lVar6 = *local_58;
  uVar7 = FUN_140da5ad0(&local_48,param_1,FUN_140dc5c30);
  puVar5 = (undefined8 *)(**(code **)(lVar6 + 0xd8))(local_58,local_res20,uVar7);
  *(undefined8 *)(param_1 + 0x3c8) = *puVar5;
  if (local_40 == 0) {
LAB_140db3aba:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140db3aba;
  }
  (**(code **)(*local_58 + 0xd0))(local_58,0x120);
LAB_140db3b14:
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140db3b70 FUN_140db3b70 body=444 status=ok
// SIG undefined FUN_140db3b70(void)

void FUN_140db3b70(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  undefined4 local_res8 [2];
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar4 != '\0') {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar6 = FUN_140bb7900(uVar5);
    if (lVar6 != 0) {
      cVar4 = FUN_1404d5760(lVar6);
      if ((cVar4 == '\0') && (cVar4 = FUN_140dc1330(param_1), cVar4 == '\0')) {
        *(undefined4 *)(param_1 + 0xc0) = 0;
        FUN_140dd0a90(param_1,2);
        if (0 < *(int *)(param_1 + 0xd8)) {
          TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
                    (param_1 + 0xd0,0);
        }
        local_res8[0] = 3;
        if ((*(longlong **)(lVar6 + 0x48) != (longlong *)0x0) &&
           (cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x48) + 0x390))(), cVar4 != '\0')) {
          plVar8 = *(longlong **)(*(longlong *)(lVar6 + 0x48) + 0x98);
          plVar1 = plVar8 + *(int *)(*(longlong *)(lVar6 + 0x48) + 0xa0);
          for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
            if ((*plVar8 != 0) && (lVar6 = FUN_1425bd330(*plVar8,6), lVar6 != 0)) {
              lVar7 = FUN_1404e6fc0();
              iVar2 = *(int *)(lVar7 + 0x90);
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar2) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar2 * 8) !=
                  lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                FUN_1404bbf80(lVar6,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),0x1e,local_res8);
              }
            }
          }
        }
        FUN_140dd1fe0(param_1);
        if (*(longlong *)(param_1 + 0x20) == 0) {
          FUN_140dd3890(param_1);
        }
        FUN_140db86e0(param_1);
        return;
      }
      if (*(int *)(param_1 + 0xd8) == 0) {
        if (0.0 < *(float *)(param_1 + 0xc0)) {
          lVar6 = FUN_140da64d0();
          fVar9 = *(float *)(param_1 + 0xc0);
          if (*(float *)(lVar6 + 0x48) <= *(float *)(param_1 + 0xc0)) {
            fVar9 = *(float *)(lVar6 + 0x48);
          }
          *(float *)(param_1 + 0xc0) = fVar9;
          return;
        }
        FUN_140dd2c60(param_1);
      }
    }
  }
  return;
}



// FUNCTION 140db3d30 FUN_140db3d30 body=712 status=ok
// SIG undefined FUN_140db3d30(void)

void FUN_140db3d30(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 local_res20 [8];
  longlong *local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  FUN_1404cf890(&local_48,0);
  if (local_48 != (longlong *)0x0) {
    lVar9 = *(longlong *)(param_1 + 0x20);
    lVar11 = (longlong)*(int *)(param_1 + 0x28) * 0x10 + lVar9;
    plVar10 = local_48;
    for (; lVar9 != lVar11; lVar9 = lVar9 + 0x10) {
      iVar5 = (**(code **)(*plVar10 + 0x78))(plVar10,lVar9);
      if (iVar5 != 2) {
        if (*(char *)(param_1 + 0x31) != '\0') {
          FUN_1404cf2e0(&local_58,0);
          plVar2 = local_58;
          if ((local_58 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*local_58 + 0x10))(local_58,8), plVar7 = local_50, cVar4 == '\0')
             ) {
            FUN_140dbf430(param_1,lVar9,2);
          }
          else {
            if (*(longlong *)(param_1 + 0x158) != 0) {
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar10 = local_50 + 1;
                lVar3 = *plVar10;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                plVar10 = local_48;
                if ((int)lVar3 == 1) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  plVar10 = local_48;
                  if (iVar5 == 1) {
                    (**(code **)(*local_50 + 8))(local_50,1);
                    plVar10 = local_48;
                  }
                }
              }
              goto LAB_140db3e3e;
            }
            local_68 = (longlong *)0x0;
            plVar7 = (longlong *)FMemory::Realloc(0,0x30);
            local_60 = 3;
            local_68 = plVar7;
            if (plVar7 != (longlong *)0x0) {
              plVar7[1] = param_1;
              *plVar7 = (longlong)&DAT_143f3ed00;
              plVar7[2] = (longlong)FUN_140dcb850;
              lVar11 = FDelegateHandle::GenerateNewID();
              plVar7[4] = lVar11;
              *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
            }
            puVar8 = (undefined8 *)(**(code **)(*plVar2 + 0x218))(plVar2,local_res20,&local_68);
            *(undefined8 *)(param_1 + 0x158) = *puVar8;
            if (local_60 == 0) {
LAB_140db3eff:
              if (local_68 != (longlong *)0x0) {
                FMemory::Free(local_68);
              }
            }
            else if (local_68 != (longlong *)0x0) {
              (**(code **)(*local_68 + 0x28))(local_68,0);
              if (local_68 != (longlong *)0x0) {
                local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
              }
              local_60 = 0;
              goto LAB_140db3eff;
            }
            lVar11 = *plVar2;
            uVar6 = (**(code **)(*plVar10 + 0x68))(plVar10,lVar9);
            (**(code **)(lVar11 + 0x60))(plVar2,uVar6,1);
          }
          plVar10 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_50 + 1;
            lVar9 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_50 + 8))(local_50,1);
              }
            }
          }
          goto LAB_140db3f98;
        }
        if (iVar5 == 0) {
          FUN_140dbf430(param_1,lVar9,2);
          goto LAB_140db3f98;
        }
      }
LAB_140db3e3e:
    }
  }
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  FUN_140dcce40(param_1);
LAB_140db3f98:
  plVar10 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140db4000 FUN_140db4000 body=919 status=ok
// SIG undefined FUN_140db4000(void)

void FUN_140db4000(longlong param_1)

{
  longlong **pplVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong **pplVar12;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  longlong *local_28 [2];
  longlong *local_18;
  longlong local_10;
  
  iVar6 = *(int *)(param_1 + 0x150);
  do {
    if ((iVar6 < 0) || (*(int *)(param_1 + 0x28) <= iVar6)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
      FUN_140dcce40(param_1);
      return;
    }
    puVar10 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x20));
    if (*(char *)(param_1 + 0x32) == '\0') {
      lVar8 = *(longlong *)(param_1 + 0x38);
      if (lVar8 != 0) {
        local_48 = *puVar10;
        local_40 = puVar10[1];
        if (local_40 != 0) {
          LOCK();
          *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
          UNLOCK();
          lVar8 = *(longlong *)(param_1 + 0x38);
        }
        cVar5 = FUN_140bcaa10(lVar8,&local_48);
        if (cVar5 != '\0') goto LAB_140db4082;
      }
      uVar11 = 0;
    }
    else {
LAB_140db4082:
      uVar11 = 1;
    }
    lVar8 = *(longlong *)(param_1 + 0x38);
    if (lVar8 != 0) {
      local_38 = *puVar10;
      local_30 = puVar10[1];
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
        lVar8 = *(longlong *)(param_1 + 0x38);
      }
      cVar5 = FUN_140baf970(lVar8,&local_38,uVar11);
      if (cVar5 != '\0') break;
    }
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
    iVar6 = *(int *)(param_1 + 0x150);
  } while( true );
  if (*(char *)(param_1 + 0x31) == '\0') {
    FUN_140dbf430(param_1,puVar10,10);
    return;
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  plStack_50 = (longlong *)operator_new(0xa0);
  if (plStack_50 == (longlong *)0x0) {
    plStack_50 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plStack_50 + 1) = 1;
    *(undefined4 *)((longlong)plStack_50 + 0xc) = 1;
    *plStack_50 = (longlong)&PTR_FUN_1444f84d8;
    FUN_140ddbea0(plStack_50 + 2,*(undefined8 *)(param_1 + 0x38),puVar10,uVar11);
  }
  local_58 = plStack_50 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
  local_68 = local_58;
  plStack_60 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
  }
  pplVar1 = (longlong **)(param_1 + 0x68);
  if (pplVar1 != &local_68) {
    *pplVar1 = local_58;
    local_68 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x70,&plStack_60);
  }
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_60 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_50 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = *pplVar1;
  pplVar12 = (longlong **)(plVar3 + 7);
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_28[0] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    plVar7[1] = param_1;
    *plVar7 = (longlong)&PTR_GetPoolName_1445540b0;
    plVar7[2] = (longlong)FUN_140dca400;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_1445540f8;
  }
  if (local_28 != pplVar12) {
    if (plVar7 == (longlong *)0x0) {
      if (((int)plVar3[8] != 0) && (plVar7 = *pplVar12, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*pplVar12 != (longlong *)0x0) {
          plVar7 = (longlong *)FMemory::Realloc(*pplVar12,0,0);
          *pplVar12 = plVar7;
        }
        *(undefined4 *)(plVar3 + 8) = 0;
      }
      goto LAB_140db429b;
    }
    (**(code **)(*plVar7 + 0x30))(plVar7,pplVar12);
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_28[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_28[0] != (longlong *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
LAB_140db429b:
  lVar8 = FUN_142d61b30(*(undefined8 *)(param_1 + 0x38));
  if ((lVar8 != 0) && (lVar8 = FUN_14270bb10(lVar8), lVar8 != 0)) {
    lVar9 = FUN_141432660();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_18 = *pplVar1;
      local_10 = *(longlong *)(param_1 + 0x70);
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      FUN_140e57f40(lVar8,&local_18);
    }
  }
  return;
}



// FUNCTION 140db43a0 FUN_140db43a0 body=355 status=ok
// SIG undefined FUN_140db43a0(void)

void FUN_140db43a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [16];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_1404cf890(&local_28,0);
  if (local_28 == (longlong *)0x0) goto LAB_140db44b3;
  if (*(int *)(param_1 + 0x48) < 1) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    goto LAB_140db44b3;
  }
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140dc96d0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_28 + 0x178))(local_28,local_res18,&local_38);
  *(undefined8 *)(param_1 + 0x50) = *puVar6;
  if (local_30 == 0) {
LAB_140db448d:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140db448d;
  }
  (**(code **)(*local_28 + 0x170))(local_28,*(undefined8 *)(param_1 + 0x40));
LAB_140db44b3:
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
  return;
}



// FUNCTION 140db4510 FUN_140db4510 body=442 status=ok
// SIG undefined FUN_140db4510(void)

void FUN_140db4510(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong local_28 [2];
  
  puVar4 = (undefined8 *)operator_new(0x60);
  puVar8 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined1 *)(param_1 + 0x31);
    *(undefined1 *)(puVar4 + 1) = 0;
    *puVar4 = &PTR_FUN_144550e28;
    puVar4[2] = 0;
    *(undefined4 *)(puVar4 + 3) = 0;
    puVar4[4] = 0;
    iVar9 = *(int *)(param_1 + 0x28);
    puVar8 = *(undefined8 **)(param_1 + 0x20);
    *(int *)(puVar4 + 5) = iVar9;
    if (iVar9 == 0) {
      *(undefined4 *)((longlong)puVar4 + 0x2c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar4 + 4,iVar9,0);
      puVar7 = (undefined8 *)puVar4[4];
      do {
        *puVar7 = *puVar8;
        lVar6 = puVar8[1];
        puVar7[1] = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        puVar7 = puVar7 + 2;
        puVar8 = puVar8 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *(undefined1 *)(puVar4 + 6) = uVar2;
    *(undefined4 *)((longlong)puVar4 + 0x34) = 4;
    *(undefined1 *)(puVar4 + 7) = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar8 = puVar4;
  }
  *(undefined8 **)(param_1 + 0x80) = puVar8;
  plVar1 = puVar8 + 2;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&DAT_143f3ed00;
    plVar5[2] = (longlong)&LAB_140dc9790;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (local_28 != plVar1) {
    if (plVar5 == (longlong *)0x0) {
      if ((*(int *)(puVar8 + 3) != 0) && (plVar3 = (longlong *)*plVar1, plVar3 != (longlong *)0x0))
      {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        if (*plVar1 != 0) {
          lVar6 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar6;
        }
        *(undefined4 *)(puVar8 + 3) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar1);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    lVar6 = FMemory::Realloc(plVar5,0,0);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  FUN_140dcdb10(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x80));
  return;
}



// FUNCTION 140db46d0 FUN_140db46d0 body=818 status=ok
// SIG undefined FUN_140db46d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140db46d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  int iStack_7c;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FUN_140dd0a90(param_1,1);
  cVar1 = FUN_140dbfc60(param_1 + 0x88);
  if (cVar1 == '\0') {
    cVar1 = FUN_140dc1420(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_140dd3890(param_1);
      if (cVar1 != '\0') {
        cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x14);
        uStack_80 = 0;
        if (cVar1 != '\0') {
          uVar3 = FWeakObjectPtr::Get(param_1 + 0x14);
          uStack_80 = FUN_14046e5c0(uVar3);
        }
        local_88 = param_1;
        iVar2 = FUN_140bba270(*(undefined8 *)(param_1 + 0x88));
        iStack_7c = FUN_14046e5c0(*(undefined8 *)(param_1 + 0x88));
        iStack_7c = iVar2 - iStack_7c;
        local_48 = (longlong *)0x0;
        local_38 = 0;
        puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_68);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &PTR_FUN_143f77c18;
          *(undefined4 *)(puVar4 + 1) = (undefined4)local_88;
          *(undefined4 *)((longlong)puVar4 + 0xc) = local_88._4_4_;
          *(undefined4 *)(puVar4 + 2) = uStack_80;
          *(int *)((longlong)puVar4 + 0x14) = iStack_7c;
        }
        local_98 = 0;
        local_78[0] = &LAB_140db2a70;
        local_90 = 0x1c;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        FGenericPlatformString::Memcpy(local_98,L"check_pending_lobby_parties",0x38);
        FUN_140dcdc50(param_1,&local_98,local_78);
        if (local_98 != 0) {
          FMemory::Free();
        }
        if (local_38 != 0) {
          plVar6 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar6 = local_48;
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,0);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_140dd2ef0(param_1);
        return;
      }
      local_48 = (longlong *)0x0;
      local_38 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_68);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = param_1;
        *puVar4 = &PTR_FUN_143f77b70;
      }
      local_98 = 0;
      local_78[0] = &LAB_140db2a40;
      local_90 = 0x1c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      pwVar5 = L"check_pending_lobby_parties";
    }
    else {
      local_48 = (longlong *)0x0;
      local_38 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_68);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = param_1;
        *puVar4 = &PTR_FUN_143f77b70;
      }
      local_98 = 0;
      local_78[0] = &LAB_140db2b20;
      local_90 = 0x1c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      pwVar5 = L"check_pending_lobby_parties";
    }
    FGenericPlatformString::Memcpy(local_98,pwVar5,0x38);
    FUN_140dcdc50(param_1,&local_98,local_78);
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  else {
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_68);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_98 = 0;
    local_78[0] = &LAB_140db2a80;
    local_90 = 0x1c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"check_pending_lobby_parties",0x38);
    FUN_140dcdc50(param_1,&local_98,local_78);
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  if (local_38 != 0) {
    plVar6 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar6 = local_48;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140db4a10 FUN_140db4a10 body=1109 status=ok
// SIG undefined FUN_140db4a10(void)

void FUN_140db4a10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong local_res8;
  undefined1 local_res10 [8];
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8 [18];
  
  local_res8 = param_1;
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar5 != '\0') {
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar9 = FUN_140bb7900(uVar8);
    if (lVar9 != 0) {
      cVar5 = FUN_1404d2e60(lVar9);
      if ((cVar5 == '\0') && (cVar5 = FUN_140db1b10(param_1), cVar5 != '\0')) {
        FName::FName(local_res10,L"SPARK",1);
        FUN_1404d0c50(&local_c8);
        if ((local_c8 == (longlong *)0x0) ||
           (iVar7 = (**(code **)(*local_c8 + 0x3a8))(), plVar4 = local_c0, iVar7 != 1)) {
          cVar5 = FUN_140db1a20(param_1);
          plVar4 = local_c0;
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_c0 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_c0)(local_c0);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_c0 + 8))();
              }
            }
          }
        }
        else {
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_c0 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_c0)(local_c0);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_c0 + 8))();
              }
            }
          }
          cVar5 = '\x01';
        }
        if (*(int *)(param_1 + 0x360) < 1) {
          cVar6 = FUN_140dc1420(param_1);
          if (cVar6 == '\0') {
            cVar6 = FUN_1404d5760(lVar9);
            if (cVar6 != '\0') {
              local_b8[5] = 0x1f;
              local_b8[4] = 0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 4,0);
              FGenericPlatformString::Memcpy(local_b8[4],L"Full beacon, starting gameplay",0x3e);
              FUN_140dabb90(&local_res8,local_b8 + 4);
              if (local_b8[4] != 0) {
                FMemory::Free();
              }
              FUN_140db5cc0(param_1);
              return;
            }
            if ((*(longlong *)(param_1 + 0x20) != 0) &&
               (*(float *)(*(longlong *)(param_1 + 0x20) + 0x10) == 0.0)) {
              local_b8[7] = 0x1a;
              local_b8[6] = 0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 6,0);
              FGenericPlatformString::Memcpy(local_b8[6],L"Matchmaking round expired",0x34);
              FUN_140dabb90(&local_res8,local_b8 + 6);
              if (local_b8[6] != 0) {
                FMemory::Free();
              }
              FUN_140dc7e90(param_1);
              return;
            }
            if (cVar5 == '\0') {
              local_b8[0xe] = 0;
              local_b8[0xf] = 0x1c;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 0xe);
              FGenericPlatformString::Memcpy(local_b8[0xe],L"Waiting for one more player",0x38);
              FUN_140dabb90(&local_res8,local_b8 + 0xe);
              lVar9 = local_b8[0xe];
            }
            else if (*(longlong *)(param_1 + 0xa8) == 0) {
              if (*(longlong *)(param_1 + 0x30) == 0) {
                local_b8[10] = 0;
                local_b8[0xb] = 0x10;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 10);
                FGenericPlatformString::Memcpy(local_b8[10],L"Starting search",0x20);
                FUN_140dabb90(&local_res8,local_b8 + 10);
                if (local_b8[10] != 0) {
                  FMemory::Free();
                }
                FUN_140dd3c40(param_1);
                return;
              }
              local_b8[0xc] = 0;
              local_b8[0xd] = 0x12;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 0xc);
              FGenericPlatformString::Memcpy(local_b8[0xc],L"Continuing search",0x24);
              FUN_140dabb90(&local_res8,local_b8 + 0xc);
              lVar9 = local_b8[0xc];
            }
            else {
              local_b8[8] = 0;
              local_b8[9] = 0x1c;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 8);
              FGenericPlatformString::Memcpy(local_b8[8],L"Wait for search retry timer",0x38);
              FUN_140dabb90(&local_res8,local_b8 + 8);
              lVar9 = local_b8[8];
            }
          }
          else {
            local_b8[3] = 0x23;
            local_b8[2] = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 2,0);
            FGenericPlatformString::Memcpy(local_b8[2],L"Waiting for splitscreen join/leave",0x46);
            FUN_140dabb90(&local_res8,local_b8 + 2);
            lVar9 = local_b8[2];
          }
        }
        else {
          local_b8[1] = 0x2b;
          local_b8[0] = 0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
          FGenericPlatformString::Memcpy
                    (local_b8[0],L"Waiting for disconnected player processing",0x56);
          FUN_140dabb90(&local_res8,local_b8);
          lVar9 = local_b8[0];
        }
        if (lVar9 != 0) {
          FMemory::Free();
        }
      }
      else {
        local_b8[0x11] = 0x1c;
        local_b8[0x10] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 0x10,0);
        FGenericPlatformString::Memcpy(local_b8[0x10],L"Waiting for Pending Clients",0x38);
        FUN_140dabb90(&local_res8,local_b8 + 0x10);
        if (local_b8[0x10] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 140db4e70 FUN_140db4e70 body=1850 status=ok
// SIG undefined FUN_140db4e70(void)

void FUN_140db4e70(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int local_res18;
  undefined1 local_res20 [8];
  longlong *local_128;
  int local_120;
  longlong *local_118;
  int local_110;
  longlong *local_108;
  int local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  longlong *local_88;
  undefined1 *local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [32];
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    FUN_140dcce40();
    return;
  }
  local_e0 = (longlong *)(param_1 + 0x98);
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(local_e0,param_1 + 0x20);
  lVar5 = FUN_142b45e90();
  plVar13 = *(longlong **)(param_1 + 0x20);
  lVar5 = *(longlong *)(lVar5 + 0x18);
  plVar12 = plVar13 + (longlong)*(int *)(param_1 + 0x28) * 2;
  local_d8 = lVar5;
  local_c8 = plVar12;
  if (plVar13 != plVar12) {
    do {
      local_f8 = plVar13;
      FUN_142b4a990(lVar5,&local_f0,plVar13);
      if (((local_f0 == 0) || (*(char *)(local_f0 + 0x18) == '\0')) ||
         (cVar4 = FBuildPatchAppManifest::NeedsResaving(), cVar4 == '\0')) {
        if (*(longlong *)(param_1 + 0x40) != 0) {
          if (*(longlong *)(param_1 + 0x148) == 0) {
            local_128 = (longlong *)0x0;
            local_120 = 0;
            plVar8 = (longlong *)FMemory::Realloc(0,0x30);
            local_120 = 3;
            local_128 = plVar8;
            if (plVar8 != (longlong *)0x0) {
              plVar8[1] = param_1;
              *plVar8 = (longlong)&PTR_GetPoolName_143f3f4f8;
              plVar8[2] = (longlong)FUN_140dcbb80;
              lVar9 = FDelegateHandle::GenerateNewID();
              plVar8[4] = lVar9;
            }
            uVar6 = FUN_14164ab60();
            puVar7 = (undefined8 *)
                     FUN_14158f860(uVar6,local_68,&local_128,
                                   L"FCanPlayOnlineTask_OnSparkAuthenticationFailsafeTimeout",
                                   0x41700000);
            *(undefined8 *)(param_1 + 0x148) = *puVar7;
            if (local_120 != 0) {
              if (local_128 == (longlong *)0x0) goto LAB_140db5205;
              (**(code **)(*local_128 + 0x28))(local_128,0);
              if (local_128 != (longlong *)0x0) {
                local_128 = (longlong *)FMemory::Realloc(local_128,0,0);
              }
              local_120 = 0;
            }
            if (local_128 != (longlong *)0x0) {
              FMemory::Free(local_128);
            }
          }
LAB_140db5205:
          FUN_142b48170(lVar5,&local_78,plVar13);
          if ((local_78 == 0) || (cVar4 = FUN_142b547b0(), cVar4 == '\0')) {
            if (((local_f0 == 0) ||
                ((*(char *)(local_f0 + 0x18) == '\0' ||
                 (cVar4 = FBuildPatchAppManifest::NeedsResaving(), cVar4 != '\0')))) ||
               (*(longlong *)(local_f0 + 8) == 0)) {
              local_108 = (longlong *)0x0;
              local_100 = 0;
              plVar8 = (longlong *)FMemory::Realloc(0,0x30);
              local_100 = 3;
              local_108 = plVar8;
              if (plVar8 != (longlong *)0x0) {
                plVar8[1] = param_1;
                *plVar8 = (longlong)&DAT_143f3ed00;
                plVar8[2] = (longlong)FUN_140dc6230;
                lVar9 = FDelegateHandle::GenerateNewID();
                plVar8[4] = lVar9;
                *plVar8 = (longlong)&PTR_GetPoolName_143f3ed48;
              }
              (**(code **)(**(longlong **)(param_1 + 0x40) + 0x80))
                        (*(longlong **)(param_1 + 0x40),local_b0,&local_108);
              if (local_100 == 0) {
LAB_140db54cf:
                if (local_108 != (longlong *)0x0) {
                  FMemory::Free(local_108);
                }
              }
              else if (local_108 != (longlong *)0x0) {
                (**(code **)(*local_108 + 0x28))(local_108,0);
                if (local_108 != (longlong *)0x0) {
                  local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
                }
                local_100 = 0;
                goto LAB_140db54cf;
              }
              local_80 = local_b0;
              local_88 = plVar13;
              FUN_140b956f0(param_1 + 0xa8,local_bc,&local_88,0);
              FUN_140d2abc0(*(undefined8 *)(param_1 + 0x40),plVar13,0);
            }
            else {
              plVar13 = (longlong *)(lVar5 + 0xd0);
              plVar12 = (longlong *)FMemory::Realloc(0,0x30);
              if (plVar12 != (longlong *)0x0) {
                *plVar12 = (longlong)&DAT_143f3ed00;
                plVar12[1] = param_1;
                plVar12[2] = (longlong)FUN_140dcbf20;
                lVar9 = FDelegateHandle::GenerateNewID();
                plVar12[4] = lVar9;
                *plVar12 = (longlong)&PTR_GetPoolName_143f3ed48;
              }
              local_d0 = 0;
              if (plVar12 != (longlong *)0x0) {
                FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar13,1);
                puVar7 = (undefined8 *)(**(code **)(*plVar12 + 0x20))(plVar12,local_60);
                iVar10 = *(int *)(lVar5 + 0xd8);
                uVar6 = *puVar7;
                *(int *)(lVar5 + 0xd8) = iVar10 + 1;
                if (*(int *)(lVar5 + 0xdc) < iVar10 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar10);
                }
                puVar7 = (undefined8 *)((longlong)iVar10 * 0x10 + *plVar13);
                *puVar7 = plVar12;
                *(undefined4 *)(puVar7 + 1) = 3;
                lVar5 = local_d8;
                local_d0 = uVar6;
              }
              plVar13 = local_f8;
              local_90 = &local_d0;
              local_98 = local_f8;
              FUN_140b956f0(param_1 + 0xf8,local_c0,&local_98,0);
              FUN_142b64c70(local_f0);
              plVar12 = local_c8;
            }
          }
          else {
            local_118 = (longlong *)0x0;
            local_110 = 0;
            plVar8 = (longlong *)FMemory::Realloc(0,0x30);
            local_110 = 3;
            local_118 = plVar8;
            if (plVar8 != (longlong *)0x0) {
              plVar8[1] = param_1;
              *plVar8 = (longlong)&DAT_143f3ed00;
              plVar8[2] = (longlong)FUN_140dc6230;
              lVar9 = FDelegateHandle::GenerateNewID();
              plVar8[4] = lVar9;
              *plVar8 = (longlong)&PTR_GetPoolName_143f3ed48;
            }
            (**(code **)(**(longlong **)(param_1 + 0x40) + 0x80))
                      (*(longlong **)(param_1 + 0x40),local_b8,&local_118);
            if (local_110 == 0) {
LAB_140db52de:
              if (local_118 != (longlong *)0x0) {
                FMemory::Free(local_118);
              }
            }
            else if (local_118 != (longlong *)0x0) {
              (**(code **)(*local_118 + 0x28))(local_118,0);
              if (local_118 != (longlong *)0x0) {
                local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
              }
              local_110 = 0;
              goto LAB_140db52de;
            }
            local_a0 = local_b8;
            local_a8 = plVar13;
            FUN_140b956f0(param_1 + 0xa8,local_res20,&local_a8,0);
          }
          plVar8 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_70 + 1;
            lVar9 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
        }
      }
      else {
        lVar9 = (longlong)*(int *)(param_1 + 0xa0);
        if (*(int *)(param_1 + 0xa0) != 0) {
          iVar10 = 0;
          lVar5 = 0;
          local_res18 = 0;
          bVar16 = **(longlong **)(param_1 + 0x98) != *plVar13;
          plVar12 = (longlong *)(param_1 + 0x98);
          iVar14 = 0;
          do {
            lVar5 = lVar5 + 1;
            iVar15 = iVar14 + 1;
            if (lVar5 < lVar9) {
              plVar8 = (longlong *)(lVar5 * 0x10 + *plVar12);
              do {
                if (bVar16 != (*plVar8 != *plVar13)) break;
                iVar15 = iVar15 + 1;
                lVar5 = lVar5 + 1;
                plVar8 = plVar8 + 2;
              } while (lVar5 < lVar9);
            }
            iVar11 = iVar15 - iVar14;
            if (bVar16 == false) {
              plVar13 = local_f8;
              if (iVar11 != 0) {
                plVar12 = (longlong *)((longlong)iVar14 * 0x10 + 8 + *plVar12);
                do {
                  plVar13 = (longlong *)*plVar12;
                  if (plVar13 != (longlong *)0x0) {
                    LOCK();
                    plVar8 = plVar13 + 1;
                    lVar3 = *plVar8;
                    *(int *)plVar8 = (int)*plVar8 + -1;
                    UNLOCK();
                    if ((int)lVar3 == 1) {
                      (**(code **)*plVar13)(plVar13);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar13 + 0xc);
                      iVar10 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar10 == 1) {
                        (**(code **)(*plVar13 + 8))(plVar13,1);
                      }
                    }
                  }
                  plVar12 = plVar12 + 2;
                  iVar11 = iVar11 + -1;
                  plVar13 = local_f8;
                  iVar10 = local_res18;
                } while (iVar11 != 0);
              }
            }
            else {
              if (iVar10 != iVar14) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar10 * 0x10 + *plVar12),
                           (void *)((longlong)iVar14 * 0x10 + *plVar12),(longlong)iVar11 << 4);
              }
              local_res18 = iVar10 + iVar11;
              iVar10 = local_res18;
            }
            bVar16 = (bool)(bVar16 ^ 1);
            plVar12 = local_e0;
            iVar14 = iVar15;
          } while (lVar5 < lVar9);
          *(int *)(local_e0 + 1) = iVar10;
          plVar12 = local_c8;
          lVar5 = local_d8;
        }
        if (*(int *)(param_1 + 0xa0) == 0) {
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
          FUN_140dcce40(param_1);
          if (local_e8 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar13 = local_e8 + 1;
          lVar5 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar5 != 1) {
            return;
          }
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar1 = (int *)((longlong)local_e8 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 != 1) {
            return;
          }
          (**(code **)(*local_e8 + 8))(local_e8,1);
          return;
        }
      }
      plVar8 = local_e8;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_e8 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      plVar13 = plVar13 + 2;
    } while (plVar13 != plVar12);
  }
  return;
}



// FUNCTION 140db55b0 FUN_140db55b0 body=270 status=ok
// SIG undefined FUN_140db55b0(void)

void FUN_140db55b0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar6 = (int)param_1[1] + -1;
  if (-1 < iVar6) {
    lVar5 = (longlong)iVar6 * 0x28;
    lVar8 = (longlong)(int)param_1[1] * 0x28;
    lVar7 = lVar5;
    do {
      lVar1 = *param_1;
      if ((((*(int *)(lVar1 + 8 + lVar5) == 0) &&
           (cVar2 = FWeakObjectPtr::IsValid(lVar1 + 0x18 + lVar5), cVar2 == '\0')) &&
          (cVar2 = FWeakObjectPtr::IsValid(lVar1 + 0x10 + lVar5), cVar2 == '\0')) ||
         (((*(char *)(lVar1 + 0x20 + lVar5) != '\0' &&
           (cVar2 = FWeakObjectPtr::IsValid(lVar1 + 0x18 + lVar5), cVar2 == '\0')) &&
          (cVar2 = FWeakObjectPtr::IsValid(lVar1 + 0x10 + lVar5), cVar2 == '\0')))) {
        if (*(longlong *)(lVar7 + *param_1) != 0) {
          FMemory::Free();
        }
        iVar4 = (int)param_1[1];
        iVar3 = (iVar4 - iVar6) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_1 + lVar7),(void *)(lVar8 + *param_1),(longlong)iVar3 * 0x28);
          iVar4 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar4 + -1;
        TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
      }
      lVar8 = lVar8 + -0x28;
      lVar7 = lVar7 + -0x28;
      lVar5 = lVar5 + -0x28;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  return;
}



// FUNCTION 140db56c0 FUN_140db56c0 body=114 status=ok
// SIG undefined FUN_140db56c0(void)

void FUN_140db56c0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 != '\0') {
    param_1 = param_1 + 0xe8;
    cVar2 = FWeakObjectPtr::IsValid(param_1);
    if (cVar2 != '\0') {
      lVar3 = FWeakObjectPtr::Get(param_1);
      if (*(longlong *)(lVar3 + 0xae8) != 0) {
        FUN_1404c9880(*(longlong *)(lVar3 + 0xae8),DAT_14686f228);
      }
    }
    cVar2 = FWeakObjectPtr::IsValid(param_1);
    if (cVar2 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1);
      lVar3 = FUN_140bb7900(uVar1);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x50) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140db5740 Reset body=146 status=ok
// SIG undefined Reset(void)

void TArray<Chaos::TAABBTreeLeafArray<int,0>,TSizedDefaultAllocator<32>_>::Reset
               (undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  plVar2 = (longlong *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (-1 < iVar1) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 5;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  if (iVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar1 = *(int *)((longlong)param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (iVar1 != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  return;
}



// FUNCTION 140db57e0 FUN_140db57e0 body=27 status=ok
// SIG undefined FUN_140db57e0(void)

void FUN_140db57e0(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  TArray<unsigned_int,FDefaultAllocator>::Remove(param_1 + 0x10,local_res10);
  return;
}



// FUNCTION 140db5800 FUN_140db5800 body=369 status=ok
// SIG undefined FUN_140db5800(void)

void FUN_140db5800(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  lVar1 = DAT_146b17150;
  lVar3 = *(longlong *)(param_1 + 0x1c8);
  iVar4 = 0;
  if (0 < *(int *)(DAT_146b17150 + 0x9f0)) {
    lVar6 = 0;
    do {
      plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x9e8) + lVar6);
      if ((((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == lVar3))
      {
        if (((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar5 != 0) {
            lVar3 = FMemory::Realloc(*plVar5,0,0);
            *plVar5 = lVar3;
          }
          *(undefined4 *)(plVar5 + 1) = 0;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar4 < *(int *)(lVar1 + 0x9f0));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x9e8,0);
  lVar1 = DAT_146b17150;
  iVar4 = 0;
  lVar3 = *(longlong *)(param_1 + 0x1d0);
  if (0 < *(int *)(DAT_146b17150 + 0x9d8)) {
    lVar6 = 0;
    do {
      plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x9d0) + lVar6);
      if ((((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == lVar3))
      {
        if (((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar5 != 0) {
            lVar3 = FMemory::Realloc(*plVar5,0,0);
            *plVar5 = lVar3;
          }
          *(undefined4 *)(plVar5 + 1) = 0;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar4 < *(int *)(lVar1 + 0x9d8));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x9d0,0);
  FUN_1404c7f50(param_1);
  return;
}



// FUNCTION 140db5980 FUN_140db5980 body=282 status=ok
// SIG undefined FUN_140db5980(void)

void FUN_140db5980(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined8 local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  
  puVar6 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  FUN_1404d0c50(&local_18,*puVar6);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x2e0))(local_18,param_1 + 0x338);
  }
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x328) != &local_28) {
    *(undefined8 *)(param_1 + 0x328) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x330,&local_20);
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
  plVar5 = local_10;
  *(undefined8 *)(param_1 + 0x338) = 0;
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
  return;
}



// FUNCTION 140db5aa0 FUN_140db5aa0 body=247 status=ok
// SIG undefined FUN_140db5aa0(void)

void FUN_140db5aa0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 local_18;
  longlong *local_10;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar5 != '\0') {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
    if (*(longlong *)(lVar6 + 0xae8) != 0) {
      lVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
      (**(code **)(**(longlong **)(lVar6 + 0xae8) + 0x100))
                (*(longlong **)(lVar6 + 0xae8),param_1 + 800);
    }
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x310) != &local_18) {
    *(undefined8 *)(param_1 + 0x310) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x318,&local_10);
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
      *(undefined8 *)(param_1 + 800) = 0;
      return;
    }
  }
  *(undefined8 *)(param_1 + 800) = 0;
  return;
}



// FUNCTION 140db5ba0 FUN_140db5ba0 body=282 status=ok
// SIG undefined FUN_140db5ba0(void)

void FUN_140db5ba0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined8 local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  
  puVar6 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  FUN_1404d0c50(&local_18,*puVar6);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x308))(local_18,param_1 + 0x350);
  }
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x340) != &local_28) {
    *(undefined8 *)(param_1 + 0x340) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x348,&local_20);
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
  plVar5 = local_10;
  *(undefined8 *)(param_1 + 0x350) = 0;
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
  return;
}



// FUNCTION 140db5cc0 FUN_140db5cc0 body=1103 status=ok
// SIG undefined FUN_140db5cc0(void)

void FUN_140db5cc0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined4 local_res10 [2];
  longlong *local_res18;
  longlong local_res20;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong **local_60;
  longlong local_58;
  longlong *local_50;
  
  if (*(char *)(param_1 + 0x10) != '\x03') {
    plVar9 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
    lVar11 = plVar9[0x1f];
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x368))(plVar9);
      lVar11 = plVar9[0x1f];
    }
    if (0.0 < *(float *)(lVar11 + 0x44)) {
      plVar9 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
      lVar11 = plVar9[0x1f];
      if (lVar11 == 0) {
        (**(code **)(*plVar9 + 0x368))(plVar9);
        lVar11 = plVar9[0x1f];
      }
      fVar5 = *(float *)(lVar11 + 0x44);
      *(float *)(param_1 + 0xc0) = fVar5;
      FUN_140dd1240(param_1,-((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1));
      FUN_140dd0a90(param_1,3);
      local_70 = (longlong *)0x0;
      if ((undefined8 *)(param_1 + 0x20) != &local_78) {
        *(undefined8 *)(param_1 + 0x20) = 0;
        local_78 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_70);
        plVar9 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_70 + 1;
          lVar11 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_70 + 8))(local_70,1);
            }
          }
        }
      }
      if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
      }
      plVar9 = (longlong *)(param_1 + 0xd0);
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(plVar9,0);
      plVar3 = (longlong *)(param_1 + 0xe0);
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(plVar3,0);
      FUN_140dbbf60(param_1,plVar3);
      cVar8 = FWeakObjectPtr::IsValid(param_1 + 0x14);
      if (cVar8 != '\0') {
        uVar10 = FWeakObjectPtr::Get(param_1 + 0x14);
        lVar11 = FUN_140bb7900(uVar10);
        if (lVar11 != 0) {
          *(undefined4 *)(lVar11 + 0x50) = 1;
          local_res10[0] = 0;
          FUN_140da7560(lVar11,1,0x1e,local_res10,param_1 + 0xc4);
          local_88 = 0;
          local_80 = 0;
          FUN_140dbcac0(param_1 + 0x88,&local_88);
          lVar15 = *(longlong *)(lVar11 + 0x60);
          local_res18 = &local_88;
          local_60 = &local_res18;
          lVar11 = (longlong)*(int *)(lVar11 + 0x68) * 0x40 + lVar15;
          local_68 = param_1;
          for (; local_res20 = lVar15, lVar15 != lVar11; lVar15 = lVar15 + 0x40) {
            FUN_140daf630(&local_68,lVar15 + 0x10);
            lVar13 = *(longlong *)(lVar15 + 0x30);
            lVar4 = lVar13 + (longlong)*(int *)(lVar15 + 0x38) * 0x28;
            lVar7 = local_58;
            for (; lVar13 != lVar4; lVar13 = lVar13 + 0x28) {
              local_58 = *(longlong *)(lVar13 + 8);
              if (local_58 != 0) {
                plVar6 = *(longlong **)(lVar13 + 0x10);
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                  UNLOCK();
                }
                local_50 = plVar6;
                cVar8 = FUN_140dade30(&local_res18,&local_58);
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar6 + 1;
                  lVar15 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar15 == 1) {
                    (**(code **)*plVar6)(plVar6);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar6 + 0xc);
                    iVar14 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar14 == 1) {
                      (**(code **)(*plVar6 + 8))(plVar6,1);
                    }
                  }
                }
                uVar10 = *(undefined8 *)(lVar13 + 8);
                plVar6 = *(longlong **)(lVar13 + 0x10);
                if (cVar8 == '\0') {
                  if (plVar6 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                    UNLOCK();
                  }
                  iVar14 = *(int *)(param_1 + 0xd8);
                  *(int *)(param_1 + 0xd8) = iVar14 + 1;
                  if (*(int *)(param_1 + 0xdc) < iVar14 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar14);
                  }
                  puVar12 = (undefined8 *)((longlong)iVar14 * 0x10 + *plVar9);
                }
                else {
                  if (plVar6 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                    UNLOCK();
                  }
                  iVar14 = *(int *)(param_1 + 0xe8);
                  *(int *)(param_1 + 0xe8) = iVar14 + 1;
                  if (*(int *)(param_1 + 0xec) < iVar14 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar14);
                  }
                  puVar12 = (undefined8 *)((longlong)iVar14 * 0x10 + *plVar3);
                }
                *puVar12 = uVar10;
                puVar12[1] = plVar6;
                lVar7 = local_58;
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar2 = plVar6 + 1;
                  lVar15 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar15 == 1) {
                    (**(code **)*plVar6)(plVar6);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar6 + 0xc);
                    iVar14 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    lVar7 = local_58;
                    if ((iVar14 == 1) && (plVar6 != (longlong *)0x0)) {
                      (**(code **)(*plVar6 + 8))(plVar6,1);
                      lVar7 = local_58;
                    }
                  }
                }
              }
              local_58 = lVar7;
              lVar15 = local_res20;
              lVar7 = local_58;
            }
            local_58 = lVar7;
          }
          if ((int)local_80 != 0) {
            lVar11 = local_88 + 8;
            iVar14 = (int)local_80;
            do {
              *(undefined ***)(lVar11 + -8) = &PTR_FUN_143f74338;
              FUN_1404bebc0(lVar11 + 0x28);
              FUN_1404bf980(lVar11);
              lVar11 = lVar11 + 0x40;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          if (local_88 != 0) {
            FMemory::Free();
          }
        }
      }
      FUN_140db86e0(param_1);
      return;
    }
    FUN_140dd2c60(param_1);
  }
  return;
}



// FUNCTION 140db6110 FUN_140db6110 body=885 status=ok
// SIG undefined FUN_140db6110(void)

void FUN_140db6110(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  void *local_a8;
  int local_a0;
  undefined1 local_98 [112];
  
  FUN_1404c0750(param_1 + 0x28);
  lVar12 = param_1 + 0xe8;
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xb8);
  cVar5 = FWeakObjectPtr::IsValid(lVar12);
  if (cVar5 != '\0') {
    plVar7 = (longlong *)FWeakObjectPtr::Get(lVar12);
    lVar8 = (**(code **)(*plVar7 + 0x148))(plVar7);
    if (lVar8 != 0) {
      *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(lVar8 + 0x798);
    }
    FUN_1404d0c50(&local_b8,*(undefined8 *)(param_1 + 0xf0));
    if (local_b8 != (longlong *)0x0) {
      local_c8 = (undefined2 *)0x0;
      local_c0 = 0;
      cVar5 = (**(code **)(*local_b8 + 0x288))(local_b8,param_1 + 0x28,&local_c8);
      if (cVar5 != '\0') {
        lVar8 = FWeakObjectPtr::Get(lVar12);
        lVar8 = *(longlong *)(lVar8 + 0xae8);
        if ((lVar8 != 0) && (lVar9 = FUN_140da5480(lVar8,DAT_14686f228), lVar9 != 0)) {
          FUN_1404b8b20(lVar9 + 0x198,lVar8,&LAB_140dafb04);
          FUN_1404b8b20(lVar9 + 0x1a8,lVar8,&LAB_140dafb1c);
          lVar10 = FWeakObjectPtr::Get(lVar12);
          iVar13 = 0;
          if (*(int *)(lVar10 + 0xb08) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = *(undefined2 **)(lVar10 + 0xb00);
          }
          FString::PrintfImpl(&local_a8,L"?Template=%s?matchmakingclient",puVar14);
          _Src = local_a8;
          uVar4 = local_c0;
          if (local_a0 != 0) {
            iVar13 = local_a0 + -1;
          }
          if (iVar13 != 0) {
            iVar3 = (int)local_c0;
            lVar10 = (longlong)(int)local_c0;
            iVar6 = (uint)((int)local_c0 == 0) + (int)local_c0 + iVar13;
            local_c0 = CONCAT44(local_c0._4_4_,iVar6);
            if (local_c0._4_4_ < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar4 & 0xffffffff);
            }
            puVar14 = local_c8 + (lVar10 - (ulonglong)(iVar3 != 0));
            _guard_xfg_dispatch_icall_nop(puVar14,_Src,(longlong)iVar13 * 2);
            puVar14[iVar13] = 0;
          }
          if (local_a8 != (void *)0x0) {
            FMemory::Free(local_a8);
          }
          puVar14 = &DAT_143f3eda8;
          if ((int)local_c0 != 0) {
            puVar14 = local_c8;
          }
          FUN_14289aca0(local_98,0,puVar14,0);
          cVar5 = FUN_1404d3a70(lVar9,local_98);
          if (cVar5 != '\0') {
            FUN_1404c9e30(lVar9);
            lVar8 = FWeakObjectPtr::Get(lVar12);
            plVar7 = *(longlong **)(lVar8 + 0x4e8);
            lVar8 = *(longlong *)(lVar8 + 0x4e0);
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
            FString::operator=(lVar9 + 0x1b8,lVar8 + 0x60);
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
                iVar13 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar7 + 8))(plVar7,1);
                }
              }
            }
            cVar5 = FWeakObjectPtr::IsValid(lVar12);
            if (cVar5 != '\0') {
              uVar11 = FWeakObjectPtr::Get(lVar12);
              lVar12 = FUN_140bb7900(uVar11);
              if (lVar12 != 0) {
                *(undefined4 *)(lVar12 + 0x50) = 1;
              }
            }
            FURL::~FURL(local_98);
            if (local_c8 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            plVar7 = local_b0;
            if (local_b0 == (longlong *)0x0) {
              return;
            }
            LOCK();
            plVar1 = local_b0 + 1;
            lVar12 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar12 != 1) {
              return;
            }
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 != 1) {
              return;
            }
            (**(code **)(*local_b0 + 8))(local_b0,1);
            return;
          }
          FUN_1404c9620(lVar8,lVar9);
          FURL::~FURL(local_98);
        }
      }
      if (local_c8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    plVar7 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  FUN_140dd5aa0(param_1,0);
  return;
}



// FUNCTION 140db6490 FUN_140db6490 body=108 status=ok
// SIG undefined FUN_140db6490(void)

undefined8 * FUN_140db6490(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x88);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144553d20;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FUN_1404e8890(puVar1 + 2,param_1 + 0x10);
    puVar1[2] = &PTR_FUN_143f769a0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140db6500 FUN_140db6500 body=121 status=ok
// SIG undefined FUN_140db6500(void)

undefined8 * FUN_140db6500(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144553d50;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    FString::FString(puVar1 + 4,param_1 + 0x20);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    FString::FString(puVar1 + 7,param_1 + 0x38);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140db6580 FUN_140db6580 body=108 status=ok
// SIG undefined FUN_140db6580(void)

undefined8 * FUN_140db6580(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144553d38;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    FString::FString(puVar1 + 4,param_1 + 0x20);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140db65f0 CopyToEmptyStorage body=87 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_dcc84150135aed10dbae96ae61e03753>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144553d08;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140db6650 FUN_140db6650 body=106 status=ok
// SIG undefined FUN_140db6650(void)

undefined8 * FUN_140db6650(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144553d68;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    FString::FString(puVar1 + 4,param_1 + 0x20);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140db66c0 FUN_140db66c0 body=571 status=ok
// SIG undefined FUN_140db66c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140db66c0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  longlong *local_108;
  int local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [16];
  undefined **local_c8 [5];
  longlong local_a0 [4];
  longlong local_80;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if ((*(longlong *)(param_1 + 0xe0) != 0) || (*(int *)(param_4 + 8) == 0)) {
    TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1,2);
    return;
  }
  puVar4 = (undefined8 *)FName::FName(local_e0,L"SPARK",1);
  FUN_1404d0c50(&local_f0,*puVar4);
  if (local_f0 == (longlong *)0x0) {
    TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1,2);
    goto LAB_140db688d;
  }
  FUN_140da8910(local_c8,param_5);
  FUN_140db09a0(local_c8,param_2,param_3);
  local_108 = (longlong *)0x0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_100 = 3;
  local_108 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&DAT_143f3ed00;
    plVar5[2] = (longlong)FUN_140dc57f0;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar4 = (undefined8 *)(**(code **)(*local_f0 + 0x38))(local_f0,local_d8,&local_108);
  *(undefined8 *)(param_1 + 0xe0) = *puVar4;
  if (local_100 == 0) {
LAB_140db681e:
    if (local_108 != (longlong *)0x0) {
      FMemory::Free(local_108);
    }
  }
  else if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x28))(local_108,0);
    if (local_108 != (longlong *)0x0) {
      local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
    }
    local_100 = 0;
    goto LAB_140db681e;
  }
  local_f8 = 0x11f;
  (**(code **)(*local_f0 + 0x28))(local_f0,param_4,0x11f,local_c8);
  local_c8[0] = &PTR_FUN_143f769a0;
  local_58 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_a0,0);
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_a0[0] != 0) {
    FMemory::Free();
  }
LAB_140db688d:
  plVar5 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  return;
}



// FUNCTION 140db6900 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445540b0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1445540f8;
  }
  return;
}



// FUNCTION 140db6950 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144553d80;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_144553dc8;
  }
  return;
}



// FUNCTION 140db69a0 FUN_140db69a0 body=94 status=ok
// SIG undefined FUN_140db69a0(void)

void FUN_140db69a0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144554250;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_144554298;
  }
  return;
}



// FUNCTION 140db6a00 FUN_140db6a00 body=94 status=ok
// SIG undefined FUN_140db6a00(void)

void FUN_140db6a00(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144553e70;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_144553eb8;
  }
  return;
}



// FUNCTION 140db6a60 FUN_140db6a60 body=94 status=ok
// SIG undefined FUN_140db6a60(void)

void FUN_140db6a60(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144553f00;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_144553f48;
  }
  return;
}



// FUNCTION 140db6ac0 FUN_140db6ac0 body=94 status=ok
// SIG undefined FUN_140db6ac0(void)

void FUN_140db6ac0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144553f90;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_144553fd8;
  }
  return;
}



// FUNCTION 140db6b20 FUN_140db6b20 body=94 status=ok
// SIG undefined FUN_140db6b20(void)

void FUN_140db6b20(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144554020;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_144554068;
  }
  return;
}



// FUNCTION 140db6b80 FUN_140db6b80 body=94 status=ok
// SIG undefined FUN_140db6b80(void)

void FUN_140db6b80(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1445542e0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_144554328;
  }
  return;
}



// FUNCTION 140db6be0 FUN_140db6be0 body=56 status=ok
// SIG undefined FUN_140db6be0(void)

void FUN_140db6be0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144553e10;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 140db6c20 FUN_140db6c20 body=1652 status=ok
// SIG undefined FUN_140db6c20(void)

longlong FUN_140db6c20(longlong param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined1 uVar3;
  void *pvVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  int iVar21;
  longlong lVar22;
  int local_res10;
  undefined8 local_res20;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  int local_c8;
  int local_c4;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  longlong *local_b0;
  longlong *local_a8;
  void *local_a0;
  int local_98;
  void *local_90;
  int local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  longlong local_70 [2];
  longlong local_60 [4];
  
  cVar7 = FUN_14044af00(param_1 + 0x14,0);
  if (cVar7 == '\0') {
    return 0;
  }
  uVar10 = FWeakObjectPtr::Get(param_1 + 0x14);
  lVar11 = FUN_140bb7900(uVar10);
  puVar20 = &DAT_143f3eda8;
  if (lVar11 == 0) {
    lVar11 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar17 = *(longlong *)(lVar11 + 0xae8);
    if (lVar17 == 0) {
      return 0;
    }
    uVar10 = FWeakObjectPtr::Get(param_1 + 0x14);
    FUN_140bb7dd0(uVar10,&local_d0);
    local_res20 = 0x120;
    puVar12 = (undefined8 *)FName::ToString(&local_res20,local_70);
    iVar14 = 0;
    if (*(int *)(puVar12 + 1) == 0) {
      puVar19 = &DAT_143f3eda8;
    }
    else {
      puVar19 = (undefined2 *)*puVar12;
    }
    FString::PrintfImpl(&local_a0,L"?SessionName=%s",puVar19);
    pvVar4 = local_a0;
    iVar16 = local_c8;
    if (local_98 != 0) {
      iVar14 = local_98 + -1;
    }
    if (iVar14 != 0) {
      lVar11 = (longlong)local_c8;
      local_c8 = (uint)(local_c8 == 0) + local_c8 + iVar14;
      if (local_c4 < local_c8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d0,iVar16);
      }
      pvVar2 = (void *)(local_d0 + (lVar11 - (ulonglong)(iVar16 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar4,(longlong)iVar14 * 2);
      *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar2) = 0;
    }
    if (local_a0 != (void *)0x0) {
      FMemory::Free(local_a0);
    }
    if (local_70[0] != 0) {
      FMemory::Free();
    }
    uVar8 = FUN_140dbc490(param_1);
    lVar11 = FUN_140da5630(lVar17,DAT_14686f220,&local_d0,uVar8);
    if (lVar11 != 0) {
      FUN_1404b8b20(lVar11 + 0x170,lVar17,&LAB_140dafb1c);
      FUN_1404c9e30(lVar11);
      FString::operator=(lVar11 + 0x180,param_1 + 0x60);
    }
    if (local_d0 != 0) {
      FMemory::Free();
    }
    if (lVar11 == 0) {
      return 0;
    }
  }
  FUN_1404cfa50(lVar11);
  *(undefined4 *)(lVar11 + 0x50) = 0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_140dbcac0(param_1 + 0x88,&local_f8);
  iVar16 = (int)local_f0;
  iVar21 = (int)local_f0;
  local_res10 = (int)local_f0;
  iVar14 = (int)local_f0;
  while (iVar14 = iVar14 + -1, -1 < iVar14) {
    puVar12 = (undefined8 *)((longlong)iVar14 * 0x40 + local_f8);
    cVar7 = FUN_1404d2fa0(lVar11,puVar12 + 1);
    if ((cVar7 == '\0') && (cVar7 = FUN_1404d2ee0(lVar11,puVar12 + 1), cVar7 == '\0')) {
      cVar7 = FUN_1404c5c30(lVar11,puVar12);
      if (cVar7 == '\0') {
        if (iVar21 != 0) {
          lVar11 = local_f8 + 8;
          do {
            *(undefined ***)(lVar11 + -8) = &PTR_FUN_143f74338;
            FUN_1404bebc0(lVar11 + 0x28);
            FUN_1404bf980(lVar11);
            lVar11 = lVar11 + 0x40;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
        }
        if (local_f8 == 0) {
          return 0;
        }
        FMemory::Free(local_f8);
        return 0;
      }
    }
    else {
      *puVar12 = &PTR_FUN_143f74338;
      FUN_1404bebc0(puVar12 + 6);
      FUN_1404bf980(puVar12 + 1);
      iVar9 = (iVar21 - iVar14) + -1;
      if (iVar9 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (puVar12,(void *)((longlong)iVar16 * 0x40 + local_f8),(longlong)iVar9 << 6);
      }
      local_f0 = CONCAT44(local_f0._4_4_,iVar21 + -1);
      TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(&local_f8);
      local_res10 = (int)local_f0;
      iVar21 = (int)local_f0;
    }
    iVar16 = iVar16 + -1;
  }
  local_e0 = 0;
  local_d8 = 0;
  puVar12 = (undefined8 *)FName::FName(local_80,L"SPARK",1);
  FUN_1404d0c50(&local_b0,*puVar12);
  if (local_b0 != (longlong *)0x0) {
    local_e8 = 0x120;
    cVar7 = (**(code **)(*local_b0 + 0x290))(local_b0,0x120,&local_e0);
    if (cVar7 != '\0') {
      plVar13 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x14);
      uVar10 = (**(code **)(*plVar13 + 0x338))(plVar13,local_78);
      puVar12 = (undefined8 *)FName::ToString(uVar10,local_60);
      if (*(int *)(puVar12 + 1) != 0) {
        puVar20 = (undefined2 *)*puVar12;
      }
      FString::PrintfImpl(&local_90,L"?HostPlatform=%s",puVar20);
      pvVar4 = local_90;
      uVar6 = local_d8;
      if (local_88 == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = local_88 + -1;
      }
      if (iVar14 != 0) {
        iVar16 = (int)local_d8;
        lVar17 = (longlong)(int)local_d8;
        iVar9 = (uint)((int)local_d8 == 0) + iVar14 + (int)local_d8;
        local_d8 = CONCAT44(local_d8._4_4_,iVar9);
        if (local_d8._4_4_ < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,uVar6 & 0xffffffff);
        }
        pvVar2 = (void *)(local_e0 + (lVar17 - (ulonglong)(iVar16 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar4,(longlong)iVar14 * 2);
        *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar2) = 0;
      }
      if (local_90 != (void *)0x0) {
        FMemory::Free(local_90);
      }
      if (local_60[0] != 0) {
        FMemory::Free();
      }
      lVar17 = (longlong)iVar21 * 0x40 + local_f8;
      local_e8 = lVar17;
      if (local_f8 != lVar17) {
        lVar22 = local_f8 + 8;
        do {
          local_b8 = *(int *)(param_1 + 0x68);
          lVar15 = (longlong)local_b8;
          local_c0 = (void *)0x0;
          pvVar4 = *(void **)(param_1 + 0x60);
          if (local_b8 == 0) {
            local_b4 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c0,local_b8,0);
            _guard_xfg_dispatch_icall_nop(local_c0,pvVar4,lVar15 * 2);
          }
          uVar10 = DAT_14686f220;
          uVar3 = *(undefined1 *)(param_1 + 0x70);
          cVar7 = FUN_140bca8a0(*(undefined8 *)(param_1 + 0x88));
          if (cVar7 == '\0') {
            lVar15 = FUN_140dbbc10(param_1 + 0x88);
            if (lVar15 != 0) {
              plVar18 = *(longlong **)(lVar15 + 0x470);
              plVar13 = plVar18 + *(int *)(lVar15 + 0x478);
              for (; plVar18 != plVar13; plVar18 = plVar18 + 1) {
                lVar17 = *plVar18;
                if (lVar17 != 0) {
                  lVar15 = UInputKeySelector::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if ((bVar5) &&
                     (cVar7 = FUniqueNetIdWrapper::operator==(lVar17 + 0x4b0,lVar22), cVar7 != '\0')
                     ) {
                    FUN_14146cf00(lVar17,uVar10,&local_e0,&local_c0,uVar3);
                    lVar17 = local_e8;
                    break;
                  }
                }
                lVar17 = local_e8;
              }
            }
          }
          else {
            lVar15 = FUN_140bb7870(*(undefined8 *)(param_1 + 0x88));
            if (lVar15 != 0) {
              FUN_1404e2320(lVar15,lVar22,uVar10,&local_e0,&local_c0,uVar3);
            }
          }
          if (local_c0 != (void *)0x0) {
            FMemory::Free();
          }
          lVar15 = lVar22 + 0x38;
          lVar22 = lVar22 + 0x40;
          iVar21 = local_res10;
        } while (lVar15 != lVar17);
      }
    }
  }
  plVar13 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_a8 + 1;
    lVar17 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
    iVar21 = (int)local_f0;
  }
  if (local_e0 != 0) {
    FMemory::Free();
  }
  if (iVar21 != 0) {
    lVar17 = local_f8 + 8;
    do {
      *(undefined ***)(lVar17 + -8) = &PTR_FUN_143f74338;
      FUN_1404bebc0(lVar17 + 0x28);
      FUN_1404bf980(lVar17);
      lVar17 = lVar17 + 0x40;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  if (local_f8 != 0) {
    FMemory::Free(local_f8);
  }
  return lVar11;
}



// FUNCTION 140db72a0 FUN_140db72a0 body=1706 status=ok
// SIG undefined FUN_140db72a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140db72a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_338 [32];
  longlong local_318 [6];
  longlong *local_2e8;
  int local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  longlong local_2c8 [4];
  longlong *local_2a8;
  longlong *local_2a0;
  undefined4 local_298 [2];
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  undefined1 *local_268 [2];
  longlong local_258 [4];
  longlong *local_238;
  int local_228;
  undefined1 *local_218 [2];
  longlong local_208 [4];
  longlong *local_1e8;
  int local_1d8;
  undefined1 *local_1c8 [2];
  longlong local_1b8 [4];
  longlong *local_198;
  int local_188;
  undefined1 *local_178 [2];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined **local_128 [2];
  undefined1 local_118;
  undefined1 local_112;
  longlong local_100 [4];
  longlong local_e0;
  longlong local_c0;
  undefined4 local_b8;
  longlong local_a8;
  undefined **local_a0 [5];
  longlong local_78 [4];
  longlong local_58;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    local_238 = (longlong *)0x0;
    local_228 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_258);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_318[0] = 0;
    local_268[0] = &LAB_140db2a20;
    local_318[1] = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_318,0);
    FGenericPlatformString::Memcpy(local_318[0],L"create_matchmaking_session",0x36);
    FUN_140dcdc50(param_1,local_318,local_268);
    if (local_318[0] != 0) {
      FMemory::Free();
    }
    if (local_228 != 0) {
      plVar8 = local_258;
      if (local_238 != (longlong *)0x0) {
        plVar8 = local_238;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_238 != (longlong *)0x0) {
      FMemory::Free();
    }
    return 1;
  }
  puVar5 = (undefined8 *)FName::FName(local_278,L"SPARK",1);
  FUN_1404d0c50(&local_2a8,*puVar5);
  if (local_2a8 == (longlong *)0x0) {
    local_148 = (longlong *)0x0;
    local_138 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_168);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_2c8[0] = 0;
    local_178[0] = &LAB_140db29d0;
    local_2c8[1] = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2c8,0);
    FGenericPlatformString::Memcpy(local_2c8[0],L"create_matchmaking_session",0x36);
    FUN_140dcdc50(param_1,local_2c8,local_178);
    if (local_2c8[0] != 0) {
      FMemory::Free();
    }
    if (local_138 != 0) {
      plVar8 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar8 = local_148;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_140db3670(param_1,1);
    uVar7 = 0;
    goto LAB_140db78de;
  }
  local_2c8[2] = 0x120;
  lVar6 = (**(code **)(*local_2a8 + 0x10))(local_2a8,0x120);
  if (lVar6 != 0) {
    local_1e8 = (longlong *)0x0;
    local_1d8 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_208);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_318[2] = 0;
    local_218[0] = &LAB_140db2c10;
    local_318[3] = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_318 + 2,0);
    FGenericPlatformString::Memcpy(local_318[2],L"create_matchmaking_session",0x36);
    FUN_140dcdc50(param_1,local_318 + 2,local_218);
    if (local_318[2] != 0) {
      FMemory::Free();
    }
    if (local_1d8 != 0) {
      plVar8 = local_208;
      if (local_1e8 != (longlong *)0x0) {
        plVar8 = local_1e8;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_1e8 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined1 *)(param_1 + 0x2d9) = 1;
    FUN_140dd6120(param_1);
    uVar7 = 1;
    goto LAB_140db78de;
  }
  local_2d8 = 0;
  local_2d0 = 0;
  FUN_140dbbf60(param_1,&local_2d8);
  if (0 < (int)local_2d0) {
    FUN_140da8910(local_128,&DAT_146297e34);
    local_112 = 0;
    local_118 = 1;
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
    FUN_140db09a0(local_128,uVar7,param_1 + 0x60);
    FUN_1404a9610(local_128,DAT_14686f290,param_1 + 0x74);
    iVar4 = (**(code **)(*local_2a8 + 0x3a8))(local_2a8);
    if ((iVar4 != 1) &&
       ((cVar3 = FUN_140db2d50(param_1), cVar3 == '\0' || (*(char *)(param_1 + 0x78) != '\0')))) {
      local_298[0] = 0;
      local_290 = 0;
      local_288 = 0;
      FVariantData::SetValue(local_298,1);
      local_280 = 0;
      FUN_1404b6080(local_128,DAT_14686f240,local_298);
      FVariantData::Empty(local_298);
    }
    local_a8 = param_1;
    FUN_1404e8890(local_a0,local_128);
    local_198 = (longlong *)0x0;
    local_a0[0] = &PTR_FUN_143f769a0;
    local_188 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x88,local_1b8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144553d20;
      puVar5[1] = local_a8;
      FUN_1404e8890(puVar5 + 2,local_a0);
      puVar5[2] = &PTR_FUN_143f769a0;
    }
    local_318[4] = 0;
    local_1c8[0] = &LAB_140db2a00;
    local_318[5] = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_318 + 4,0);
    FGenericPlatformString::Memcpy(local_318[4],L"create_matchmaking_session",0x36);
    FUN_140dcdc50(param_1,local_318 + 4,local_1c8);
    if (local_318[4] != 0) {
      FMemory::Free();
    }
    if (local_188 != 0) {
      plVar8 = local_1b8;
      if (local_198 != (longlong *)0x0) {
        plVar8 = local_198;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_198 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_a0[0] = &PTR_FUN_143f769a0;
    local_30 = 0;
    if (local_38 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_78,0);
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    lVar6 = *local_2a8;
    uVar7 = FUN_140da5ad0(&local_2e8,param_1,FUN_140dc91e0);
    puVar5 = (undefined8 *)(**(code **)(lVar6 + 0x38))(local_2a8,local_270,uVar7);
    *(undefined8 *)(param_1 + 0xb8) = *puVar5;
    if (local_2e0 == 0) {
LAB_140db776a:
      if (local_2e8 != (longlong *)0x0) {
        FMemory::Free(local_2e8);
      }
    }
    else if (local_2e8 != (longlong *)0x0) {
      (**(code **)(*local_2e8 + 0x28))(local_2e8,0);
      if (local_2e8 != (longlong *)0x0) {
        local_2e8 = (longlong *)FMemory::Realloc(local_2e8,0,0);
      }
      local_2e0 = 0;
      goto LAB_140db776a;
    }
    local_2c8[3] = 0x120;
    (**(code **)(*local_2a8 + 0x28))(local_2a8,&local_2d8,0x120,local_128);
    local_128[0] = &PTR_FUN_143f769a0;
    local_b8 = 0;
    if (local_c0 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_100,0);
    if (local_e0 != 0) {
      FMemory::Free();
    }
    if (local_100[0] != 0) {
      FMemory::Free();
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_2d8);
  uVar7 = 1;
LAB_140db78de:
  plVar8 = local_2a0;
  if (local_2a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2a0 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_2a0)(local_2a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2a0 + 8))(local_2a0,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 140db7950 FUN_140db7950 body=113 status=ok
// SIG undefined FUN_140db7950(void)

undefined8 * FUN_140db7950(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  iVar1 = DAT_14686f4b0;
  lVar3 = (longlong)DAT_14686f4b0;
  DAT_14686f4b0 = DAT_14686f4b0 + 1;
  if (DAT_14686f4b4 < DAT_14686f4b0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_14686f4a8,iVar1);
  }
  *(undefined8 **)(DAT_14686f4a8 + lVar3 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 140db79d0 FUN_140db79d0 body=35 status=ok
// SIG undefined FUN_140db79d0(void)

void FUN_140db79d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plStack_a8;
  int iStack_a0;
  longlong *plStack_98;
  int iStack_90;
  longlong *plStack_88;
  int iStack_80;
  longlong *plStack_78;
  int iStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  
  if (((*(longlong *)(param_1 + 0x100) != 0) || (*(longlong *)(param_1 + 0xf0) != 0)) ||
     (*(longlong *)(param_1 + 0xf8) != 0)) {
    return;
  }
  puVar4 = (undefined8 *)FName::FName(auStack_58,L"SPARK",1);
  FUN_1404d0c50(&plStack_68,*puVar4);
  if (plStack_68 == (longlong *)0x0) {
    TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0x30,2);
    goto switchD_140db7b61_default;
  }
  lVar5 = (**(code **)(*plStack_68 + 0x10))(plStack_68,0x11f);
  if (lVar5 == 0) {
    TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0x30,1);
    goto switchD_140db7b61_default;
  }
  switch(*(undefined4 *)(lVar5 + 0x110)) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
    plStack_78 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    iStack_70 = 3;
    plStack_78 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = param_1;
      *plVar6 = (longlong)&DAT_143f3ed00;
      plVar6[2] = (longlong)FUN_140dc5dc0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar5;
      *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar4 = (undefined8 *)(**(code **)(*plStack_68 + 0xd8))(plStack_68,auStack_38,&plStack_78);
    *(undefined8 *)(param_1 + 0x100) = *puVar4;
    if (iStack_70 == 0) {
LAB_140db7e58:
      if (plStack_78 != (longlong *)0x0) {
        FMemory::Free(plStack_78);
      }
    }
    else if (plStack_78 != (longlong *)0x0) {
      (**(code **)(*plStack_78 + 0x28))(plStack_78,0);
      if (plStack_78 != (longlong *)0x0) {
        plStack_78 = (longlong *)FMemory::Realloc(plStack_78,0,0);
      }
      iStack_70 = 0;
      goto LAB_140db7e58;
    }
    (**(code **)(*plStack_68 + 0xd0))(plStack_68,0x11f);
    goto switchD_140db7b61_default;
  case 3:
    plStack_a8 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    iStack_a0 = 3;
    plStack_a8 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = param_1;
      *plVar6 = (longlong)&DAT_143f3ed00;
      plVar6[2] = (longlong)FUN_140dc5dc0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar5;
      *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar4 = (undefined8 *)(**(code **)(*plStack_68 + 0x60))(plStack_68,auStack_50,&plStack_a8);
    *(undefined8 *)(param_1 + 0xf0) = *puVar4;
    plVar6 = plStack_a8;
    if (iStack_a0 != 0) {
      if (plStack_a8 == (longlong *)0x0) goto switchD_140db7b61_default;
      (**(code **)(*plStack_a8 + 0x28))(plStack_a8,0);
      if (plStack_a8 != (longlong *)0x0) {
        plStack_a8 = (longlong *)FMemory::Realloc(plStack_a8,0,0);
      }
      iStack_a0 = 0;
      plVar6 = plStack_a8;
    }
    break;
  case 4:
    plStack_98 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    iStack_90 = 3;
    plStack_98 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = param_1;
      *plVar6 = (longlong)&DAT_143f3ed00;
      plVar6[2] = (longlong)FUN_140dc5dc0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar5;
      *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar4 = (undefined8 *)(**(code **)(*plStack_68 + 0xb0))(plStack_68,auStack_48,&plStack_98);
    *(undefined8 *)(param_1 + 0xf8) = *puVar4;
    if (iStack_90 == 0) {
LAB_140db7cc0:
      if (plStack_98 != (longlong *)0x0) {
        FMemory::Free(plStack_98);
      }
    }
    else if (plStack_98 != (longlong *)0x0) {
      (**(code **)(*plStack_98 + 0x28))(plStack_98,0);
      if (plStack_98 != (longlong *)0x0) {
        plStack_98 = (longlong *)FMemory::Realloc(plStack_98,0,0);
      }
      iStack_90 = 0;
      goto LAB_140db7cc0;
    }
    (**(code **)(*plStack_68 + 0xa8))(plStack_68,0x11f);
    goto switchD_140db7b61_default;
  case 5:
    plStack_88 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    iStack_80 = 3;
    plStack_88 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = param_1;
      *plVar6 = (longlong)&DAT_143f3ed00;
      plVar6[2] = (longlong)FUN_140dc5dc0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar5;
      *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar4 = (undefined8 *)(**(code **)(*plStack_68 + 0xb0))(plStack_68,auStack_40,&plStack_88);
    *(undefined8 *)(param_1 + 0xf8) = *puVar4;
    plVar6 = plStack_88;
    if (iStack_80 != 0) {
      if (plStack_88 == (longlong *)0x0) goto switchD_140db7b61_default;
      (**(code **)(*plStack_88 + 0x28))(plStack_88,0);
      if (plStack_88 != (longlong *)0x0) {
        plStack_88 = (longlong *)FMemory::Realloc(plStack_88,0,0);
      }
      iStack_80 = 0;
      plVar6 = plStack_88;
    }
    break;
  default:
    goto switchD_140db7b61_default;
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
switchD_140db7b61_default:
  plVar6 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  return;
}



// FUNCTION 140db7a00 FUN_140db7a00 body=20 status=ok
// SIG undefined FUN_140db7a00(void)

void FUN_140db7a00(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR__scalar_deleting_destructor__144550ef8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x18);
  return;
}



// FUNCTION 140db7a20 DestroyObject body=109 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<BattleSystem::LearningScreenStateCommand,SharedPointerInternals::DefaultDeleter<BattleSystem::LearningScreenStateCommand>_>
     ::DestroyObject(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(lVar4 + 0x10);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
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
    FMemory::operator_delete(lVar4,0x18);
  }
  return;
}



// FUNCTION 140db7a90 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FMessageTracerTypeInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerTypeInfo>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
    FMemory::operator_delete(lVar1,0x18);
    return;
  }
  return;
}



// FUNCTION 140db7ac0 FUN_140db7ac0 body=1060 status=ok
// SIG undefined FUN_140db7ac0(void)

void FUN_140db7ac0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  int local_90;
  longlong *local_88;
  int local_80;
  longlong *local_78;
  int local_70;
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  
  puVar4 = (undefined8 *)FName::FName(local_58,L"SPARK",1);
  FUN_1404d0c50(&local_68,*puVar4);
  if (local_68 == (longlong *)0x0) {
    TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0x30,2);
    goto switchD_140db7b61_default;
  }
  lVar5 = (**(code **)(*local_68 + 0x10))(local_68,0x11f);
  if (lVar5 == 0) {
    TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0x30,1);
    goto switchD_140db7b61_default;
  }
  switch(*(undefined4 *)(lVar5 + 0x110)) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
    local_78 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_70 = 3;
    local_78 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = param_1;
      *plVar6 = (longlong)&DAT_143f3ed00;
      plVar6[2] = (longlong)FUN_140dc5dc0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar5;
      *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar4 = (undefined8 *)(**(code **)(*local_68 + 0xd8))(local_68,local_38,&local_78);
    *(undefined8 *)(param_1 + 0x100) = *puVar4;
    if (local_70 == 0) {
LAB_140db7e58:
      if (local_78 != (longlong *)0x0) {
        FMemory::Free(local_78);
      }
    }
    else if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x28))(local_78,0);
      if (local_78 != (longlong *)0x0) {
        local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
      }
      local_70 = 0;
      goto LAB_140db7e58;
    }
    (**(code **)(*local_68 + 0xd0))(local_68,0x11f);
    goto switchD_140db7b61_default;
  case 3:
    local_a8 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_a0 = 3;
    local_a8 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = param_1;
      *plVar6 = (longlong)&DAT_143f3ed00;
      plVar6[2] = (longlong)FUN_140dc5dc0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar5;
      *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar4 = (undefined8 *)(**(code **)(*local_68 + 0x60))(local_68,local_50,&local_a8);
    *(undefined8 *)(param_1 + 0xf0) = *puVar4;
    plVar6 = local_a8;
    if (local_a0 != 0) {
      if (local_a8 == (longlong *)0x0) goto switchD_140db7b61_default;
      (**(code **)(*local_a8 + 0x28))(local_a8,0);
      if (local_a8 != (longlong *)0x0) {
        local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
      }
      local_a0 = 0;
      plVar6 = local_a8;
    }
    break;
  case 4:
    local_98 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_90 = 3;
    local_98 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = param_1;
      *plVar6 = (longlong)&DAT_143f3ed00;
      plVar6[2] = (longlong)FUN_140dc5dc0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar5;
      *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar4 = (undefined8 *)(**(code **)(*local_68 + 0xb0))(local_68,local_48,&local_98);
    *(undefined8 *)(param_1 + 0xf8) = *puVar4;
    if (local_90 == 0) {
LAB_140db7cc0:
      if (local_98 != (longlong *)0x0) {
        FMemory::Free(local_98);
      }
    }
    else if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x28))(local_98,0);
      if (local_98 != (longlong *)0x0) {
        local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
      }
      local_90 = 0;
      goto LAB_140db7cc0;
    }
    (**(code **)(*local_68 + 0xa8))(local_68,0x11f);
    goto switchD_140db7b61_default;
  case 5:
    local_88 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_80 = 3;
    local_88 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = param_1;
      *plVar6 = (longlong)&DAT_143f3ed00;
      plVar6[2] = (longlong)FUN_140dc5dc0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar5;
      *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar4 = (undefined8 *)(**(code **)(*local_68 + 0xb0))(local_68,local_40,&local_88);
    *(undefined8 *)(param_1 + 0xf8) = *puVar4;
    plVar6 = local_88;
    if (local_80 != 0) {
      if (local_88 == (longlong *)0x0) goto switchD_140db7b61_default;
      (**(code **)(*local_88 + 0x28))(local_88,0);
      if (local_88 != (longlong *)0x0) {
        local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
      }
      local_80 = 0;
      plVar6 = local_88;
    }
    break;
  default:
    goto switchD_140db7b61_default;
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
switchD_140db7b61_default:
  plVar6 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 140db7f10 FUN_140db7f10 body=518 status=ok
// SIG undefined FUN_140db7f10(void)

void FUN_140db7f10(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  longlong *local_38;
  int local_30;
  
  iVar1 = DAT_14686f4b0;
  if ((param_1 != 0) && (lVar8 = (longlong)DAT_14686f4b0, DAT_14686f4b0 != 0)) {
    iVar9 = 0;
    bVar10 = *DAT_14686f4a8 != param_1;
    lVar5 = 0;
    plVar3 = DAT_14686f4a8;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar7 = iVar7 + 1;
        if (lVar8 <= lVar5) break;
      } while (bVar10 == (plVar3[lVar5] != param_1));
      if (bVar10 != false) {
        if (iVar9 != iVar6) {
          _guard_xfg_dispatch_icall_nop
                    (plVar3 + iVar9,plVar3 + iVar6,(longlong)(iVar7 - iVar6) << 3);
          plVar3 = DAT_14686f4a8;
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      iVar2 = DAT_14686f4c0;
      bVar10 = (bool)(bVar10 ^ 1);
      iVar6 = iVar7;
    } while (lVar5 < lVar8);
    DAT_14686f4b0 = iVar9;
    if (0 < iVar1 - iVar9) {
      lVar8 = (longlong)DAT_14686f4c0;
      DAT_14686f4c0 = DAT_14686f4c0 + 1;
      if (DAT_14686f4c4 < DAT_14686f4c0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_14686f4b8,iVar2);
      }
      *(longlong *)(DAT_14686f4b8 + lVar8 * 8) = param_1;
      if (DAT_14686f3b8 == 0) {
        local_38 = (longlong *)0x0;
        plVar3 = (longlong *)FMemory::Realloc(0,0x20,0);
        local_30 = 2;
        local_38 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          *plVar3 = (longlong)&PTR_GetPoolName_144553e10;
          plVar3[1] = (longlong)FUN_140dcd7d0;
          lVar8 = FDelegateHandle::GenerateNewID();
          plVar3[3] = lVar8;
        }
        uVar4 = FUN_14164ab60();
        plVar3 = (longlong *)
                 FUN_14158f860(uVar4,local_res8,&local_38,L"ProcessPendingDeleteTaskQueues",0);
        DAT_14686f3b8 = *plVar3;
        if (local_30 != 0) {
          if (local_38 == (longlong *)0x0) {
            return;
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
    }
  }
  return;
}



// FUNCTION 140db8120 FUN_140db8120 body=152 status=ok
// SIG undefined FUN_140db8120(void)

void FUN_140db8120(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  iVar4 = 0;
  if (0 < (int)param_1[1]) {
    lVar5 = 0;
    do {
      cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x10 + (longlong)iVar4 * 0x28);
      if (cVar2 != '\0') {
        uVar3 = FWeakObjectPtr::Get(*param_1 + 0x10 + (longlong)iVar4 * 0x28);
        thunk_FUN_142eb3990(uVar3);
        FWeakObjectPtr::operator=(&local_res8,0);
        lVar1 = *param_1;
        *(undefined4 *)(lVar1 + 0x10 + lVar5) = local_res8;
        *(undefined4 *)(lVar1 + 0x14 + lVar5) = local_resc;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x28;
    } while (iVar4 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 140db81c0 FUN_140db81c0 body=682 status=ok
// SIG undefined FUN_140db81c0(void)

void FUN_140db81c0(longlong *param_1,int param_2,longlong param_3,longlong *param_4)

{
  void *_Src;
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int local_res10 [2];
  void *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  
  if (param_2 < 0) {
    plVar4 = (longlong *)param_4[7];
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != param_4);
    param_4[7] = 0;
    return;
  }
  iVar3 = FUN_140db9600(param_2,param_1);
  if ((iVar3 < 0) || ((int)param_1[1] <= iVar3)) {
LAB_140db8294:
    iVar3 = FUN_140db9680(param_3,param_1);
    if ((iVar3 < 0) || ((int)param_1[1] <= iVar3)) {
      if (param_3 != 0) {
        local_58 = (void *)0x0;
        local_50 = 0;
        FWeakObjectPtr::operator=(&local_48,0);
        FWeakObjectPtr::operator=(&local_40,0);
        uVar1 = local_50;
        lVar5 = (longlong)(int)local_50;
        local_38 = 1;
        iVar3 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar3);
        if (local_50._4_4_ < iVar3) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_58,uVar1 & 0xffffffff);
        }
        *(int *)((longlong)local_58 + lVar5 * 4) = param_2;
        FWeakObjectPtr::operator=(&local_40,param_3);
        iVar3 = (int)param_1[1];
        local_38 = 1;
        *(int *)(param_1 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
          FUN_140d979d0(param_1,iVar3);
        }
        _Src = local_58;
        puVar6 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x28);
        *puVar6 = 0;
        lVar5 = (longlong)(int)local_50;
        *(int *)(puVar6 + 1) = (int)local_50;
        if ((int)local_50 == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(puVar6,local_50 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,lVar5 << 2);
        }
        *(undefined4 *)(puVar6 + 2) = local_48;
        *(undefined4 *)((longlong)puVar6 + 0x14) = local_44;
        *(undefined4 *)(puVar6 + 3) = local_40;
        *(undefined4 *)((longlong)puVar6 + 0x1c) = local_3c;
        *(undefined1 *)(puVar6 + 4) = local_38;
        if (local_58 != (void *)0x0) {
          FMemory::Free();
        }
        if ((-1 < iVar3) && (iVar3 < (int)param_1[1])) {
          plVar4 = (longlong *)param_4[7];
          if (plVar4 == (longlong *)0x0) goto LAB_140db8465;
          (**(code **)(*plVar4 + 0x10))(plVar4,*param_1 + (longlong)iVar3 * 0x28);
        }
      }
      plVar4 = (longlong *)param_4[7];
      if (plVar4 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != param_4);
      goto LAB_140db8446;
    }
    local_res10[0] = param_2;
    TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
              (*param_1 + (longlong)iVar3 * 0x28,local_res10);
    FUN_140db55b0(param_1);
    plVar4 = (longlong *)param_4[7];
    if (plVar4 == (longlong *)0x0) {
LAB_140db8465:
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    lVar5 = *param_1 + (longlong)iVar3 * 0x28;
  }
  else {
    cVar2 = FUN_14058c1e0(*param_1 + 0x18 + (longlong)iVar3 * 0x28,param_3);
    if (cVar2 == '\0') {
      FUN_140dce6f0(param_2,iVar3,1,param_1);
      goto LAB_140db8294;
    }
    plVar4 = (longlong *)param_4[7];
    if (plVar4 == (longlong *)0x0) goto LAB_140db8465;
    lVar5 = *param_1 + (longlong)iVar3 * 0x28;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,lVar5);
  plVar4 = (longlong *)param_4[7];
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != param_4);
LAB_140db8446:
  param_4[7] = 0;
  return;
}



// FUNCTION 140db8470 FUN_140db8470 body=533 status=ok
// SIG undefined FUN_140db8470(void)

void FUN_140db8470(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  
  lVar3 = *param_3;
  for (iVar5 = (int)param_3[1]; iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_140da9460(lVar3);
    lVar3 = lVar3 + 0x38;
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_3,0);
  }
  pcVar4 = *(char **)(param_2 + 0x90);
  pcVar7 = pcVar4 + (longlong)*(int *)(param_2 + 0x98) * 0x30;
  do {
    if (pcVar4 == pcVar7) {
      return;
    }
    cVar1 = *pcVar4;
    if (cVar1 == '\x01') {
      bVar8 = false;
      if (param_1 != 0) {
        iVar5 = FUN_140bb9330(param_1);
LAB_140db85d2:
        cVar1 = pcVar4[1];
        bVar8 = false;
        if (cVar1 == '\x01') {
          bVar8 = iVar5 == *(int *)(pcVar4 + 4);
        }
        else if (cVar1 == '\x02') {
          bVar8 = iVar5 != *(int *)(pcVar4 + 4);
        }
        else if (cVar1 == '\x03') {
          bVar8 = iVar5 < *(int *)(pcVar4 + 4);
        }
        else if (cVar1 == '\x04') {
          bVar8 = *(int *)(pcVar4 + 4) < iVar5;
        }
      }
LAB_140db860f:
      iVar5 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(param_3,iVar5);
      }
      pcVar6 = (char *)((longlong)iVar5 * 0x38 + *param_3);
      *pcVar6 = *pcVar4;
      pcVar6[1] = pcVar4[1];
      *(undefined4 *)(pcVar6 + 4) = *(undefined4 *)(pcVar4 + 4);
      FString::FString(pcVar6 + 8,pcVar4 + 8);
      FText::FText(pcVar6 + 0x18,pcVar4 + 0x18);
      pcVar6[0x30] = bVar8;
    }
    else {
      if (cVar1 == '\x02') {
        bVar8 = false;
        if (param_1 != 0) {
          iVar5 = FUN_140bb7840(param_1);
          goto LAB_140db85d2;
        }
        goto LAB_140db860f;
      }
      if (cVar1 == '\x03') {
        bVar8 = false;
        lVar3 = UMagicLeapARPinFunctionLibrary::IsTrackerValid();
        if (lVar3 != 0) {
          if (*(int *)(pcVar4 + 4) == 6) {
            plVar2 = (longlong *)FUN_1404cf110(lVar3,6,1);
            if (plVar2 != (longlong *)0x0) {
              cVar1 = (**(code **)(*plVar2 + 0x288))(plVar2);
              if (cVar1 != '\0') {
                cVar1 = (**(code **)(*plVar2 + 0x280))(plVar2,0);
LAB_140db8598:
                if (cVar1 != '\0') {
                  bVar8 = true;
                  goto LAB_140db860f;
                }
              }
LAB_140db85a1:
              bVar8 = false;
            }
          }
          else {
            plVar2 = (longlong *)FUN_1404cf150(lVar3);
            if (plVar2 != (longlong *)0x0) {
              cVar1 = (**(code **)(*plVar2 + 0x288))(plVar2);
              if (cVar1 != '\0') {
                cVar1 = (**(code **)(*plVar2 + 0x280))(plVar2);
                goto LAB_140db8598;
              }
              goto LAB_140db85a1;
            }
          }
        }
        goto LAB_140db860f;
      }
    }
    pcVar4 = pcVar4 + 0x30;
  } while( true );
}



// FUNCTION 140db8690 FUN_140db8690 body=67 status=ok
// SIG undefined FUN_140db8690(void)

undefined1 FUN_140db8690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140db9720(param_2);
  if (lVar1 != 0) {
    FUN_140db8470(param_1,lVar1,param_3);
    return 1;
  }
  return 0;
}



// FUNCTION 140db86e0 FUN_140db86e0 body=147 status=ok
// SIG undefined FUN_140db86e0(void)

void FUN_140db86e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\x05') {
    FUN_140db39c0();
    return;
  }
  if (cVar1 != '\x04') {
    if (cVar1 == '\x01') {
      FUN_140db46d0();
      return;
    }
    if (cVar1 == '\x02') {
      cVar1 = FUN_140dc1420();
      if ((cVar1 == '\0') && (*(int *)(param_1 + 0x360) == 0)) {
        if ((*(longlong *)(param_1 + 0x20) != 0) &&
           (*(float *)(*(longlong *)(param_1 + 0x20) + 0x10) <= 0.0)) {
          FUN_140dc7e90(param_1);
          return;
        }
        cVar1 = FUN_140dbfc60(param_1 + 0x88);
        if (cVar1 == '\0') {
          FUN_140dd2ef0(param_1);
          return;
        }
      }
    }
    else if (cVar1 == '\x03') {
      FUN_140db3b70();
      return;
    }
  }
  return;
}



// FUNCTION 140db8780 FUN_140db8780 body=144 status=ok
// SIG undefined FUN_140db8780(void)

void FUN_140db8780(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_3;
  uVar4 = *(undefined8 *)(param_1 + 8);
  pcVar5 = *(code **)(param_1 + 0x10);
  local_10 = param_3[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar5)(uVar4,param_2,&local_18,param_4,param_5,param_6);
  plVar6 = (longlong *)param_3[1];
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 140db8810 FUN_140db8810 body=163 status=ok
// SIG undefined FUN_140db8810(void)

void FUN_140db8810(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar6, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  (**(code **)(param_1 + 0x18))(plVar6);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1,param_3,param_4,param_5,param_6);
      }
    }
  }
  return;
}



// FUNCTION 140db88c0 Execute body=142 status=ok
// SIG undefined Execute(void)

void TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,TTypeWrapper<void>___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&)>
     ::Execute(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar6, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  (**(code **)(param_1 + 0x18))(plVar6);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140db8950 FUN_140db8950 body=162 status=ok
// SIG undefined FUN_140db8950(void)

void FUN_140db8950(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar6, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  (**(code **)(param_1 + 0x18))(plVar6);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1,param_3,param_4,param_5,param_6);
      }
    }
  }
  return;
}



// FUNCTION 140db8a00 FUN_140db8a00 body=312 status=ok
// SIG undefined FUN_140db8a00(void)

void FUN_140db8a00(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  plVar5 = plVar3;
  plVar9 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar10 = iVar6 == 0;
    if (bVar10) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar5 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar6 == (int)plVar3[1];
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar5 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          plVar9 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(plVar3 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  iVar6 = (int)param_3[1];
  pcVar4 = *(code **)(param_1 + 0x18);
  lVar7 = *param_3;
  local_48 = (undefined8 *)0x0;
  local_40 = iVar6;
  if (iVar6 == 0) {
    local_3c = 0;
  }
  else {
    TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(&local_48,iVar6,0);
    puVar8 = local_48;
    do {
      FUN_1404bdf40(puVar8,lVar7);
      *puVar8 = &PTR_FUN_143f74340;
      puVar1 = (undefined4 *)(lVar7 + 0x40);
      lVar7 = lVar7 + 0x48;
      *(undefined4 *)(puVar8 + 8) = *puVar1;
      puVar8 = puVar8 + 9;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  (*pcVar4)(plVar9,param_2,&local_48);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FUN_1404bed10(param_3);
  return;
}



// FUNCTION 140db8b40 Execute body=141 status=ok
// SIG undefined Execute(void)

void TBaseSPMethodDelegateInstance<0,`UMaterial::CheckMaterialUsage_Concurrent'::`10'::FCallSMU,1,TTypeWrapper<void>___cdecl(void)>
     ::Execute(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar5 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar5, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar5 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  (**(code **)(param_1 + 0x18))(plVar5);
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
  }
  return;
}



// FUNCTION 140db8be0 FUN_140db8be0 body=225 status=ok
// SIG undefined FUN_140db8be0(void)

undefined8
FUN_140db8be0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 local_18;
  longlong *local_10;
  
  plVar4 = (longlong *)param_3[1];
  local_18 = *param_3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  pcVar6 = *(code **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_10 = plVar4;
  (*pcVar6)(uVar5,param_2,&local_18,param_4,param_5,param_6);
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
  plVar4 = (longlong *)param_3[1];
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
  return 1;
}



// FUNCTION 140db8cd0 ExecuteIfSafe body=30 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseRawMethodDelegateInstance<0,UWSCFNSearchQueryUtil::FMyListTagQuery,void___cdecl(bool,int,enum_OSSKiwi::EMyListCategory,int)>
::ExecuteIfSafe(longlong param_1)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 140db8cf0 FUN_140db8cf0 body=299 status=ok
// SIG undefined FUN_140db8cf0(void)

undefined8 FUN_140db8cf0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar4 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar5[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar5 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar4 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar5[1];
      if (bVar9) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar4 = plVar5;
        if ((plVar5 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar4 = *(longlong **)(param_1 + 0x10);
          plVar7 = plVar4;
          if (plVar4 == (longlong *)0x0) goto LAB_140db8dc2;
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar4 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          goto joined_r0x000140db8d9a;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar6 = 0;
  plVar5 = plVar4;
LAB_140db8d3a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar6;
joined_r0x000140db8d9a:
  plVar7 = plVar8;
  if (bVar9) goto LAB_140db8dc2;
  LOCK();
  bVar9 = iVar3 == (int)plVar4[1];
  if (bVar9) {
    *(int *)(plVar4 + 1) = iVar3 + 1;
  }
  UNLOCK();
  if (bVar9) {
    plVar7 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 8);
    }
    goto LAB_140db8dc2;
  }
  LOCK();
  iVar3 = (int)plVar4[1];
  bVar9 = iVar3 == 0;
  if (bVar9) {
    *(int *)(plVar4 + 1) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  goto joined_r0x000140db8d9a;
LAB_140db8dc2:
  (**(code **)(param_1 + 0x18))(plVar8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  uVar6 = 1;
  goto LAB_140db8d3a;
}



// FUNCTION 140db8e20 ExecuteIfSafe body=278 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseSPMethodDelegateInstance<0,BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1,void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&)>
::ExecuteIfSafe(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar4 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar5[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar5 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar4 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar5[1];
      if (bVar9) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar4 = plVar5;
        if ((plVar5 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar4 = *(longlong **)(param_1 + 0x10);
          plVar7 = plVar4;
          if (plVar4 == (longlong *)0x0) goto LAB_140db8ef2;
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar4 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          goto joined_r0x000140db8eca;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar6 = 0;
  plVar5 = plVar4;
LAB_140db8e6a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar6;
joined_r0x000140db8eca:
  plVar7 = plVar8;
  if (bVar9) goto LAB_140db8ef2;
  LOCK();
  bVar9 = iVar3 == (int)plVar4[1];
  if (bVar9) {
    *(int *)(plVar4 + 1) = iVar3 + 1;
  }
  UNLOCK();
  if (bVar9) {
    plVar7 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 8);
    }
    goto LAB_140db8ef2;
  }
  LOCK();
  iVar3 = (int)plVar4[1];
  bVar9 = iVar3 == 0;
  if (bVar9) {
    *(int *)(plVar4 + 1) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  goto joined_r0x000140db8eca;
LAB_140db8ef2:
  (**(code **)(param_1 + 0x18))(plVar8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  uVar6 = 1;
  goto LAB_140db8e6a;
}



// FUNCTION 140db8f40 FUN_140db8f40 body=298 status=ok
// SIG undefined FUN_140db8f40(void)

undefined8 FUN_140db8f40(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar4 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar5[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar5 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar4 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar5[1];
      if (bVar9) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar4 = plVar5;
        if ((plVar5 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar4 = *(longlong **)(param_1 + 0x10);
          plVar7 = plVar4;
          if (plVar4 == (longlong *)0x0) goto LAB_140db9012;
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar4 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          goto joined_r0x000140db8fea;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar6 = 0;
  plVar5 = plVar4;
LAB_140db8f8a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar6;
joined_r0x000140db8fea:
  plVar7 = plVar8;
  if (bVar9) goto LAB_140db9012;
  LOCK();
  bVar9 = iVar3 == (int)plVar4[1];
  if (bVar9) {
    *(int *)(plVar4 + 1) = iVar3 + 1;
  }
  UNLOCK();
  if (bVar9) {
    plVar7 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 8);
    }
    goto LAB_140db9012;
  }
  LOCK();
  iVar3 = (int)plVar4[1];
  bVar9 = iVar3 == 0;
  if (bVar9) {
    *(int *)(plVar4 + 1) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  goto joined_r0x000140db8fea;
LAB_140db9012:
  (**(code **)(param_1 + 0x18))(plVar8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  uVar6 = 1;
  goto LAB_140db8f8a;
}



// FUNCTION 140db9070 FUN_140db9070 body=278 status=ok
// SIG undefined FUN_140db9070(void)

undefined8 FUN_140db9070(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar4 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar5[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar5 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar4 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar5[1];
      if (bVar9) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar4 = plVar5;
        if ((plVar5 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar4 = *(longlong **)(param_1 + 0x10);
          plVar7 = plVar4;
          if (plVar4 == (longlong *)0x0) goto LAB_140db9142;
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar4 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          goto joined_r0x000140db911a;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar6 = 0;
  plVar5 = plVar4;
LAB_140db90ba:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar6;
joined_r0x000140db911a:
  plVar7 = plVar8;
  if (bVar9) goto LAB_140db9142;
  LOCK();
  bVar9 = iVar3 == (int)plVar4[1];
  if (bVar9) {
    *(int *)(plVar4 + 1) = iVar3 + 1;
  }
  UNLOCK();
  if (bVar9) {
    plVar7 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 8);
    }
    goto LAB_140db9142;
  }
  LOCK();
  iVar3 = (int)plVar4[1];
  bVar9 = iVar3 == 0;
  if (bVar9) {
    *(int *)(plVar4 + 1) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  goto joined_r0x000140db911a;
LAB_140db9142:
  (**(code **)(param_1 + 0x18))(plVar8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  uVar6 = 1;
  goto LAB_140db90ba;
}



// FUNCTION 140db9190 FUN_140db9190 body=613 status=ok
// SIG undefined FUN_140db9190(void)

undefined8 FUN_140db9190(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  bool bVar13;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar10 = (int)plVar3[1];
    bVar13 = iVar10 == 0;
    if (bVar13) {
      *(int *)(plVar3 + 1) = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (!bVar13) {
      while( true ) {
        LOCK();
        bVar13 = iVar10 == (int)plVar3[1];
        if (bVar13) {
          *(int *)(plVar3 + 1) = iVar10 + 1;
        }
        UNLOCK();
        if (bVar13) break;
        LOCK();
        iVar10 = (int)plVar3[1];
        bVar13 = iVar10 == 0;
        if (bVar13) {
          *(int *)(plVar3 + 1) = 0;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar13) goto LAB_140db93e0;
      }
      if (plVar3 == (longlong *)0x0) goto LAB_140db93e0;
      if (*(longlong *)(param_1 + 8) == 0) {
        LOCK();
        plVar4 = plVar3 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        goto LAB_140db93e0;
      }
      iVar10 = (int)param_3[1];
      lVar9 = *param_3;
      local_58 = 0;
      local_50 = iVar10;
      if (iVar10 == 0) {
        local_4c = 0;
      }
      else {
        TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
                  (&local_58,iVar10,0);
        lVar11 = local_58 - lVar9;
        do {
          puVar12 = (undefined8 *)(lVar11 + lVar9);
          FUN_1404bdf40(puVar12);
          *puVar12 = &PTR_FUN_143f74340;
          *(undefined4 *)(lVar11 + 0x40 + lVar9) = *(undefined4 *)(lVar9 + 0x40);
          lVar9 = lVar9 + 0x48;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      iVar10 = local_50;
      plVar7 = (longlong *)0x0;
      plVar4 = *(longlong **)(param_1 + 0x10);
      plVar8 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar13 = iVar6 == 0;
        if (bVar13) {
          *(int *)(plVar4 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar7, !bVar13) {
          LOCK();
          bVar13 = iVar6 == (int)plVar4[1];
          if (bVar13) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar13) {
            plVar8 = plVar4;
            plVar7 = (longlong *)0x0;
            if (plVar4 != (longlong *)0x0) {
              plVar7 = *(longlong **)(param_1 + 8);
            }
            break;
          }
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar13 = iVar6 == 0;
          if (bVar13) {
            *(int *)(plVar4 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
      }
      pcVar5 = *(code **)(param_1 + 0x18);
      local_48 = (undefined8 *)0x0;
      local_40 = local_50;
      if (local_50 == 0) {
        local_3c = 0;
      }
      else {
        TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
                  (&local_48,local_50,0);
        lVar9 = local_58;
        puVar12 = local_48;
        do {
          FUN_1404bdf40(puVar12,lVar9);
          *puVar12 = &PTR_FUN_143f74340;
          puVar1 = (undefined4 *)(lVar9 + 0x40);
          lVar9 = lVar9 + 0x48;
          *(undefined4 *)(puVar12 + 8) = *puVar1;
          puVar12 = puVar12 + 9;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      (*pcVar5)(plVar7,param_2,&local_48);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar8 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      FUN_1404bed10(&local_58);
      LOCK();
      plVar4 = plVar3 + 1;
      lVar9 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      FUN_1404bed10(param_3);
      return 1;
    }
  }
LAB_140db93e0:
  FUN_1404bed10(param_3);
  return 0;
}



// FUNCTION 140db9400 ExecuteIfSafe body=277 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseSPMethodDelegateInstance<0,`UMaterial::CheckMaterialUsage_Concurrent'::`10'::FCallSMU,1,void___cdecl(void)>
::ExecuteIfSafe(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  plVar4 = (longlong *)0x0;
  plVar5 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar6[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar6 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar4, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar6[1];
      if (bVar9) {
        *(int *)(plVar6 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar5 = plVar6;
        if ((plVar6 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar5 = *(longlong **)(param_1 + 0x10);
          plVar8 = plVar5;
          if (plVar5 == (longlong *)0x0) goto LAB_140db94d1;
          LOCK();
          iVar3 = (int)plVar5[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar5 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          goto joined_r0x000140db94a8;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar6 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar7 = 0;
  plVar6 = plVar5;
LAB_140db9449:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  return uVar7;
joined_r0x000140db94a8:
  plVar8 = plVar4;
  if (bVar9) goto LAB_140db94d1;
  LOCK();
  bVar9 = iVar3 == (int)plVar5[1];
  if (bVar9) {
    *(int *)(plVar5 + 1) = iVar3 + 1;
  }
  UNLOCK();
  if (bVar9) {
    plVar8 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 8);
    }
    goto LAB_140db94d1;
  }
  LOCK();
  iVar3 = (int)plVar5[1];
  bVar9 = iVar3 == 0;
  if (bVar9) {
    *(int *)(plVar5 + 1) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  goto joined_r0x000140db94a8;
LAB_140db94d1:
  (**(code **)(param_1 + 0x18))(plVar4);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  uVar7 = 1;
  goto LAB_140db9449;
}



// FUNCTION 140db9520 FUN_140db9520 body=17 status=ok
// SIG undefined FUN_140db9520(void)

undefined8 FUN_140db9520(longlong *param_1)

{
  (**(code **)(*param_1 + 0x30))();
  return 1;
}



// FUNCTION 140db9540 FUN_140db9540 body=187 status=ok
// SIG undefined FUN_140db9540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140db9540(undefined8 param_1)

{
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_b0;
  undefined1 local_9c;
  undefined1 local_88;
  undefined1 local_74;
  undefined1 local_60;
  undefined1 local_4c;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_9c = 0;
  local_88 = 0;
  local_74 = 0;
  local_60 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  FUN_140e4a660(&local_e8);
  FUN_140e47960(&local_e8,param_1);
  if (lStack_30 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140db9600 FUN_140db9600 body=113 status=ok
// SIG undefined FUN_140db9600(void)

longlong FUN_140db9600(int param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)*param_2;
  puVar4 = puVar2;
  do {
    if (puVar4 == puVar2 + (longlong)*(int *)(param_2 + 1) * 5) {
      return 0xffffffff;
    }
    piVar3 = (int *)*puVar4;
    piVar1 = piVar3 + *(int *)(puVar4 + 1);
    for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      if (*piVar3 == param_1) {
        if (puVar4 == puVar2 + (longlong)*(int *)(param_2 + 1) * 5) {
          return 0xffffffff;
        }
        return ((longlong)puVar4 - (longlong)puVar2) / 0x28;
      }
    }
    puVar4 = puVar4 + 5;
  } while( true );
}



// FUNCTION 140db9680 FUN_140db9680 body=151 status=ok
// SIG undefined FUN_140db9680(void)

longlong FUN_140db9680(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  lVar2 = *param_2;
  lVar1 = lVar2 + (longlong)(int)param_2[1] * 0x28;
  lVar4 = lVar2;
  while( true ) {
    if (lVar4 == lVar1) {
      return 0xffffffff;
    }
    cVar3 = FUN_14058c1e0(lVar4 + 0x18,param_1);
    if (cVar3 != '\0') break;
    lVar4 = lVar4 + 0x28;
  }
  if (lVar4 == lVar1) {
    return 0xffffffff;
  }
  return (lVar4 - lVar2) / 0x28;
}



// FUNCTION 140db9720 FUN_140db9720 body=206 status=ok
// SIG undefined FUN_140db9720(void)

undefined8 * FUN_140db9720(undefined8 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  puVar2 = &DAT_143f3eda8;
  if (DAT_14686f2c8 != 0) {
    puVar2 = DAT_14686f2c0;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  if (iVar1 != 0) {
    puVar5 = DAT_14686f3a8 + (longlong)DAT_14686f3b0 * 0x1d;
    puVar4 = DAT_14686f3a8;
    while( true ) {
      if (puVar4 == puVar5) {
        return (undefined8 *)0x0;
      }
      if (*(int *)(param_1 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*param_1;
      }
      if (*(int *)(puVar4 + 1) == 0) {
        puVar2 = &DAT_143f3eda8;
      }
      else {
        puVar2 = (undefined2 *)*puVar4;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
      if (iVar1 == 0) break;
      puVar4 = puVar4 + 0x1d;
    }
    return puVar4;
  }
  return &DAT_14686f2c0;
}



// FUNCTION 140db97f0 FUN_140db97f0 body=927 status=ok
// SIG undefined FUN_140db97f0(void)

void FUN_140db97f0(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  undefined4 local_res8 [2];
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined **local_60 [2];
  longlong *local_50;
  longlong local_48;
  
  iVar8 = (int)param_1[1];
  iVar15 = 0;
  if (0 < iVar8) {
    lVar16 = 0;
    do {
      plVar14 = (longlong *)(*param_1 + lVar16);
      *(undefined4 *)(plVar14 + 1) = 0;
      if (*(int *)((longlong)plVar14 + 0xc) != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar14,0);
      }
      cVar7 = FWeakObjectPtr::IsValid(plVar14 + 2);
      if (cVar7 != '\0') {
        uVar9 = FWeakObjectPtr::Get(plVar14 + 2);
        thunk_FUN_142eb3990(uVar9);
        FWeakObjectPtr::operator=(&local_80,0);
        *(undefined4 *)(plVar14 + 2) = local_80;
        *(undefined4 *)((longlong)plVar14 + 0x14) = local_7c;
      }
      lVar10 = FWeakObjectPtr::Get(plVar14 + 3);
      if (lVar10 == 0) {
LAB_140db9954:
        FWeakObjectPtr::operator=(&local_78,0);
        *(undefined4 *)(plVar14 + 3) = local_78;
        *(undefined4 *)((longlong)plVar14 + 0x1c) = local_74;
      }
      else {
        lVar10 = FUN_142547b50(lVar10,local_60);
        plVar5 = *(longlong **)(lVar10 + 0x10);
        lVar10 = *(longlong *)(lVar10 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_60[0] = &PTR_FUN_143f740c8;
        if (local_48 != 0) {
          FMemory::Free();
        }
        plVar3 = local_50;
        local_60[0] = &PTR_FUN_143f73d18;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if (lVar10 == 0) {
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            lVar10 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          goto LAB_140db9954;
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          lVar10 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        lVar10 = FWeakObjectPtr::Get(plVar14 + 3);
        iVar8 = *(int *)(lVar10 + 0x108);
        *(byte *)(plVar14 + 4) = (byte)((uint)iVar8 >> 0x1f) ^ 1;
        if (-1 < iVar8) {
          piVar2 = (int *)*plVar14;
          iVar4 = (int)plVar14[1];
          for (piVar11 = piVar2; piVar11 != piVar2 + iVar4; piVar11 = piVar11 + 1) {
            if (*piVar11 == iVar8) {
              if ((int)((longlong)piVar11 - (longlong)piVar2 >> 2) != -1) goto LAB_140db996e;
              break;
            }
          }
          *(int *)(plVar14 + 1) = iVar4 + 1;
          if (*(int *)((longlong)plVar14 + 0xc) < iVar4 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar4);
          }
          *(int *)((longlong)iVar4 * 4 + *plVar14) = iVar8;
        }
      }
LAB_140db996e:
      FUN_140dc2cf0(plVar14);
      iVar8 = (int)param_1[1];
      iVar15 = iVar15 + 1;
      lVar16 = lVar16 + 0x28;
    } while (iVar15 < iVar8);
  }
  iVar15 = 0;
  if (0 < iVar8) {
    lVar16 = 0;
    do {
      puVar12 = (undefined8 *)(*param_1 + lVar16);
      cVar7 = FWeakObjectPtr::IsValid(puVar12 + 3);
      if (cVar7 != '\0') {
        if (*(int *)(puVar12 + 1) < 1) {
          lVar10 = FWeakObjectPtr::Get(puVar12 + 3);
          uVar13 = *(undefined4 *)(lVar10 + 0x108);
        }
        else {
          uVar13 = *(undefined4 *)*puVar12;
        }
        if (*(char *)(puVar12 + 4) == '\0') {
          local_68 = FWeakObjectPtr::Get(puVar12 + 3);
          plVar14 = (longlong *)param_3[7];
          local_88[0] = uVar13;
          if (plVar14 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_guard_xfg_dispatch_icall_nop();
          }
          (**(code **)(*plVar14 + 0x10))(plVar14,local_88,&local_68);
        }
        else {
          local_70 = FWeakObjectPtr::Get(puVar12 + 3);
          plVar14 = (longlong *)param_4[7];
          local_res8[0] = uVar13;
          if (plVar14 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_guard_xfg_dispatch_icall_nop();
          }
          (**(code **)(*plVar14 + 0x10))(plVar14,local_res8,&local_70);
        }
      }
      iVar15 = iVar15 + 1;
      lVar16 = lVar16 + 0x28;
    } while (iVar15 < (int)param_1[1]);
  }
  FUN_140db55b0(param_1);
  plVar14 = (longlong *)param_3[7];
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14,plVar14 != param_3);
    param_3[7] = 0;
  }
  plVar14 = (longlong *)param_4[7];
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14,plVar14 != param_4);
    param_4[7] = 0;
  }
  return;
}



// FUNCTION 140db9ba0 FUN_140db9ba0 body=780 status=ok
// SIG undefined FUN_140db9ba0(void)

longlong FUN_140db9ba0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [96];
  longlong local_158;
  int local_150;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [192];
  longlong *local_40;
  longlong *local_28;
  
  plVar6 = (longlong *)FUN_1413c6930();
  lVar10 = plVar6[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar10 = plVar6[0x1f];
  }
  FUN_140da8520(param_1);
  plVar6 = (longlong *)(param_1 + 0xe8);
  *plVar6 = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  lVar7 = FUN_140da8460(local_100,lVar10 + 0x28);
  FUN_140da9970(param_1,lVar7);
  FText::operator=(param_1 + 0xb8,lVar7 + 0xb8);
  FText::operator=(param_1 + 0xd0,lVar7 + 0xd0);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  FUN_140b9d680(local_100);
  lVar7 = *(longlong *)(lVar10 + 0xe0);
  lVar10 = (longlong)*(int *)(lVar10 + 0xe8) * 0xb8 + lVar7;
  for (; lVar7 != lVar10; lVar7 = lVar7 + 0xb8) {
    FUN_140da85c0(local_1e8,lVar7);
    FText::FText(local_130);
    FText::FText(local_118);
    FUN_141606040(&DAT_14629b790,local_1c8,local_130,0);
    FUN_141606040(&DAT_14629b790,local_1b8,local_118);
    lVar9 = (longlong)local_150 * 0x30 + local_158;
    if (local_158 != lVar9) {
      lVar8 = local_158 + 8;
      do {
        FUN_141606040(&DAT_14629b790,lVar8,lVar8 + 0x10,0);
        lVar3 = lVar8 + 0x28;
        lVar8 = lVar8 + 0x30;
      } while (lVar3 != lVar9);
    }
    iVar5 = *(int *)(param_1 + 0xf0);
    *(int *)(param_1 + 0xf0) = iVar5 + 1;
    if (*(int *)(param_1 + 0xf4) < iVar5 + 1) {
      FUN_140a131a0(plVar6,iVar5);
    }
    lVar9 = (longlong)iVar5 * 0xe8 + *plVar6;
    FUN_140b9a160(lVar9,local_1e8);
    FText::FText(lVar9 + 0xb8,local_130);
    FText::FText(lVar9 + 0xd0,local_118);
    plVar1 = local_110;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_110 + 1;
      lVar9 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    plVar1 = local_128;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_128 + 1;
      lVar9 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    FUN_140b9d680(local_1e8);
  }
  return param_1;
}



// FUNCTION 140db9eb0 FUN_140db9eb0 body=1748 status=ok
// SIG undefined FUN_140db9eb0(void)

void FUN_140db9eb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  void *pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  char cVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong local_168;
  longlong *plStack_160;
  void *local_158;
  int local_150;
  undefined4 local_14c;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  void *local_e0;
  undefined8 local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  FString::operator=(param_1,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x8c);
  FString::operator=(param_1 + 0x40,param_2 + 0x48);
  FString::operator=(param_1 + 0x50,param_2 + 200);
  uVar12 = FText::FromString(local_88,param_2 + 0x58);
  FText::operator=(param_1 + 0xb8,uVar12);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar14 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  uVar12 = FText::FromString(local_70,param_2 + 8);
  FText::operator=(param_1 + 0xd0,uVar12);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar14 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  FString::operator=(param_1 + 0x60,param_2 + 0x78);
  puVar15 = *(undefined8 **)(param_2 + 0xa8);
  puVar4 = puVar15 + (longlong)*(int *)(param_2 + 0xb0) * 9;
  if (puVar15 != puVar4) {
    do {
      local_118 = 0;
      FText::FText(local_110);
      FText::FText(local_f8);
      local_118 = *puVar15;
      local_e0 = (void *)0x0;
      local_d8 = 0;
      FText::operator=(local_110,puVar15 + 1);
      FText::operator=(local_f8,puVar15 + 4);
      puVar13 = (undefined8 *)puVar15[7];
      puVar16 = puVar13 + (longlong)*(int *)(puVar15 + 8) * 4;
      uVar9 = local_d8;
      for (; puVar13 != puVar16; puVar13 = puVar13 + 4) {
        local_a8 = *puVar13;
        local_d8._0_4_ = (int)uVar9;
        lVar14 = (longlong)(int)local_d8;
        uStack_90 = *(undefined4 *)(puVar13 + 3);
        uStack_a0 = puVar13[1];
        local_98 = puVar13[2];
        local_d8._0_4_ = (int)local_d8 + 1;
        local_d8._4_4_ = (int)(uVar9 >> 0x20);
        if (local_d8._4_4_ < (int)local_d8) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(&local_e0,uVar9 & 0xffffffff);
        }
        puVar5 = (undefined4 *)(lVar14 * 0x20 + (longlong)local_e0);
        *puVar5 = (undefined4)local_a8;
        puVar5[1] = local_a8._4_4_;
        puVar5[2] = (undefined4)uStack_a0;
        puVar5[3] = uStack_a0._4_4_;
        puVar6 = (undefined8 *)(lVar14 * 0x20 + 0x10 + (longlong)local_e0);
        *puVar6 = local_98;
        puVar6[1] = CONCAT44(uStack_8c,uStack_90);
        uVar9 = local_d8;
      }
      iVar7 = *(int *)(param_1 + 0xb0);
      lVar14 = (longlong)iVar7;
      *(int *)(param_1 + 0xb0) = iVar7 + 1;
      local_d8 = uVar9;
      if (*(int *)(param_1 + 0xb4) < iVar7 + 1) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_1 + 0xa8),iVar7);
      }
      lVar17 = *(longlong *)(param_1 + 0xa8);
      *(undefined8 *)(lVar17 + lVar14 * 0x48) = local_118;
      FText::FText(lVar17 + 8 + lVar14 * 0x48,local_110);
      FText::FText(lVar17 + 0x20 + lVar14 * 0x48,local_f8);
      pvVar8 = local_e0;
      lVar17 = lVar17 + lVar14 * 0x48;
      *(undefined8 *)(lVar17 + 0x38) = 0;
      lVar14 = (longlong)(int)local_d8;
      *(int *)(lVar17 + 0x40) = (int)local_d8;
      if ((int)local_d8 == 0) {
        *(undefined4 *)(lVar17 + 0x44) = 0;
      }
      else {
        TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy
                  (lVar17 + 0x38,local_d8 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(lVar17 + 0x38),pvVar8,lVar14 << 5);
      }
      if (local_e0 != (void *)0x0) {
        FMemory::Free();
      }
      plVar1 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_f0 + 1;
        lVar14 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      plVar1 = local_108;
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_108 + 1;
        lVar14 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      puVar15 = puVar15 + 9;
    } while (puVar15 != puVar4);
  }
  if (0 < *(int *)(param_2 + 0xe0)) {
    lVar14 = *(longlong *)(*(longlong *)(param_2 + 0xd8) + 0x30);
    lVar17 = (longlong)*(int *)(*(longlong *)(param_2 + 0xd8) + 0x38) * 0x40 + lVar14;
    for (; lVar14 != lVar17; lVar14 = lVar14 + 0x40) {
      if (1 < *(int *)(lVar14 + 0x30)) {
        iVar7 = *(int *)(param_1 + 0x88);
        *(int *)(param_1 + 0x88) = iVar7 + 1;
        if (*(int *)(param_1 + 0x8c) < iVar7 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x80,iVar7);
        }
        FString::FString((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x80),lVar14 + 0x28);
      }
    }
  }
  local_150 = *(int *)(param_2 + 0xa0);
  lVar14 = (longlong)local_150;
  pvVar8 = *(void **)(param_2 + 0x98);
  local_158 = (void *)0x0;
  if (local_150 == 0) {
    local_14c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,local_150,0);
    _guard_xfg_dispatch_icall_nop(local_158,pvVar8,lVar14 * 2);
  }
  if (1 < local_150) {
    local_168 = 0;
    plStack_160 = (longlong *)0x0;
    TJsonReaderFactory<wchar_t>::Create(local_c8,&local_158);
    cVar11 = FUN_1404a7f60(local_c8,&local_168);
    lVar14 = local_168;
    if ((cVar11 != '\0') && (local_168 != 0)) {
      FUN_140dba740(&local_168,param_1 + 0x70);
      FUN_140dba5a0(&local_168,param_1 + 0x90);
      local_148 = 0;
      local_140 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
      FGenericPlatformString::Memcpy(local_148,L"parent_guid",0x18);
      FUN_1416b40a0(lVar14,&local_148,param_1 + 0x10);
      if (local_148 != 0) {
        FMemory::Free();
      }
    }
    plVar1 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_c0 + 1;
      lVar14 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    plVar1 = plStack_160;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_160 + 1;
      lVar14 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plStack_160)(plStack_160);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_160 + 8))(plStack_160,1);
        }
      }
    }
  }
  if (1 < *(int *)(param_2 + 0x20)) {
    local_128 = 0;
    plStack_120 = (longlong *)0x0;
    TJsonReaderFactory<wchar_t>::Create(local_b8,param_2 + 0x18);
    cVar11 = FUN_1404a7f60(local_b8,&local_128);
    if ((cVar11 != '\0') && (local_128 != 0)) {
      lVar14 = *(longlong *)(param_1 + 0x90);
      lVar17 = (longlong)*(int *)(param_1 + 0x98) * 0x30 + lVar14;
      for (; lVar14 != lVar17; lVar14 = lVar14 + 0x30) {
        if (1 < *(int *)(lVar14 + 0x10)) {
          local_138 = 0;
          local_130 = 0;
          cVar11 = FUN_1416b40a0(local_128,lVar14 + 8,&local_138);
          if ((cVar11 != '\0') && (1 < (int)local_130)) {
            uVar12 = FText::FromString(local_58,&local_138);
            FText::operator=(lVar14 + 0x18,uVar12);
            plVar1 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_50 + 1;
              lVar10 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_50)(local_50);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar1 + 8))(plVar1,1);
                }
              }
            }
          }
          if (local_138 != 0) {
            FMemory::Free();
          }
        }
      }
    }
    plVar1 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_b0 + 1;
      lVar14 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    plVar1 = plStack_120;
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_120 + 1;
      lVar14 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plStack_120)(plStack_120);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_120 + 8))(plStack_120,1);
        }
      }
    }
  }
  if (local_158 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dba5a0 FUN_140dba5a0 body=404 status=ok
// SIG undefined FUN_140dba5a0(void)

void FUN_140dba5a0(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_res8;
  longlong *local_res18 [2];
  longlong local_38 [2];
  
  local_38[1] = 0x19;
  lVar8 = 0;
  local_res8 = (longlong *)0x0;
  local_38[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"matchmaking_requirements",0x32);
  FUN_1416b3850(*param_1,local_38,&local_res8);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if ((local_res8 != (longlong *)0x0) && (lVar6 = (longlong)(int)local_res8[1], 0 < lVar6)) {
    do {
      plVar3 = *(longlong **)(lVar8 + 8 + *local_res8);
      plVar4 = *(longlong **)(lVar8 + *local_res8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (plVar4 != (longlong *)0x0) {
        local_res18[0] = (longlong *)0x0;
        (**(code **)(*plVar4 + 0x28))(plVar4,local_res18);
        if ((local_res18[0] != (longlong *)0x0) && (*local_res18[0] != 0)) {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
          }
          lVar5 = *param_2;
          lVar7 = (longlong)iVar2 * 0x30;
          *(undefined2 *)(lVar7 + lVar5) = 0;
          *(undefined4 *)(lVar7 + 4 + lVar5) = 0;
          *(undefined8 *)(lVar7 + 8 + lVar5) = 0;
          *(undefined8 *)(lVar7 + 0x10 + lVar5) = 0;
          FText::FText(lVar5 + 0x18 + lVar7);
          FUN_140dba8d0(*param_2 + lVar7,local_res18[0]);
        }
      }
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
      lVar8 = lVar8 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 140dba740 FUN_140dba740 body=399 status=ok
// SIG undefined FUN_140dba740(void)

/* WARNING: Removing unreachable block (ram,0x000140dba81d) */
/* WARNING: Removing unreachable block (ram,0x000140dba822) */
/* WARNING: Removing unreachable block (ram,0x000140dba831) */
/* WARNING: Removing unreachable block (ram,0x000140dba83b) */

void FUN_140dba740(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_res8;
  longlong local_38 [2];
  
  if (*param_1 != 0) {
    lVar7 = 0;
    local_38[1] = 0x11;
    local_res8 = (longlong *)0x0;
    local_38[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"ordered_searches",0x22);
    FUN_1416b3850(*param_1,local_38,&local_res8);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if ((local_res8 != (longlong *)0x0) && (lVar6 = (longlong)(int)local_res8[1], 0 < lVar6)) {
      do {
        plVar3 = *(longlong **)(lVar7 + 8 + *local_res8);
        plVar4 = *(longlong **)(lVar7 + *local_res8);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4);
        }
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
        lVar7 = lVar7 + 0x10;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  return;
}



// FUNCTION 140dba8d0 FUN_140dba8d0 body=454 status=ok
// SIG undefined FUN_140dba8d0(void)

void FUN_140dba8d0(undefined1 *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong local_38 [6];
  
  if (*param_2 != 0) {
    local_38[1] = 5;
    local_38[4] = 0;
    local_38[5] = 0;
    local_38[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"type",10);
    cVar1 = FUN_1416b40a0(*param_2,local_38,local_38 + 4);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      uVar2 = FUN_140dc3130(local_38 + 4);
      *param_1 = uVar2;
    }
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[0] = 0;
    local_38[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"comparison_op",0x1c);
    cVar1 = FUN_1416b40a0(*param_2,local_38,local_38 + 2);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      uVar2 = FUN_140dc2f90(local_38 + 2);
      param_1[1] = uVar2;
    }
    local_38[0] = 0;
    local_38[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"value",0xc);
    FUN_1416b3b00(*param_2,local_38,param_1 + 4);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    local_38[0] = 0;
    local_38[1] = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"description_key",0x20);
    FUN_1416b40a0(*param_2,local_38,param_1 + 8);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_38[2] != 0) {
      FMemory::Free();
    }
    if (local_38[4] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140dbaaa0 FUN_140dbaaa0 body=1143 status=ok
// SIG undefined FUN_140dbaaa0(void)

void FUN_140dbaaa0(undefined8 *param_1,longlong *param_2)

{
  wchar_t wVar1;
  char cVar2;
  undefined1 uVar3;
  wint_t wVar4;
  wint_t wVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  wchar_t *pwVar9;
  wint_t *pwVar10;
  undefined1 local_res10 [8];
  undefined2 *local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  if (*param_2 == 0) {
    return;
  }
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  local_58[0] = 0;
  local_58[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"param_name",0x16);
  cVar2 = FUN_1416b40a0(*param_2,local_58,&local_38);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  iVar7 = 0;
  if (cVar2 != '\0') {
    puVar8 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar8 = local_38;
    }
    puVar6 = (undefined8 *)FName::FName(local_res10,puVar8,1);
    *param_1 = *puVar6;
  }
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  local_58[0] = 0;
  local_58[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"target_param_name",0x24);
  cVar2 = FUN_1416b40a0(*param_2,local_58,local_58 + 2);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    puVar8 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar8 = local_48;
    }
    puVar6 = (undefined8 *)FName::FName(local_res10,puVar8,1);
    param_1[1] = *puVar6;
  }
  local_68 = (undefined2 *)0x0;
  local_60 = 0;
  local_58[0] = 0;
  local_58[1] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],&DAT_14453ab74,6);
  cVar2 = FUN_1416b40a0(*param_2,local_58,&local_68);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    pwVar9 = L"Equals";
    puVar8 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar8 = local_68;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar8 + -0xa22a1f70) + (longlong)pwVar9);
      if ((wVar1 == L'\0') && (*pwVar9 == L'\0')) goto LAB_140dbac90;
      if (wVar1 != *pwVar9) {
        wVar4 = towlower(wVar1);
        wVar5 = towlower(*pwVar9);
        if (wVar4 != wVar5) goto LAB_140dbac86;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
  goto LAB_140dbae85;
LAB_140dbac86:
  if (wVar4 != wVar5) {
    pwVar10 = &DAT_144543ef8;
    puVar8 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar8 = local_68;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar8 + -0xa22a1f7c) + (longlong)pwVar10);
      if ((wVar4 == 0) && (*pwVar10 == 0)) goto LAB_140dbaceb;
      if (wVar4 != *pwVar10) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar10);
        if (wVar4 != wVar5) goto LAB_140dbace1;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
LAB_140dbac90:
  *(undefined1 *)(param_1 + 2) = 1;
  goto LAB_140dbae85;
LAB_140dbace1:
  if (wVar4 != wVar5) {
    pwVar9 = L"GreaterThan";
    puVar8 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar8 = local_68;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar8 + -0xa22a1fa4) + (longlong)pwVar9);
      if ((wVar1 == L'\0') && (*pwVar9 == L'\0')) goto LAB_140dbad4b;
      if (wVar1 != *pwVar9) {
        wVar4 = towlower(wVar1);
        wVar5 = towlower(*pwVar9);
        if (wVar4 != wVar5) goto LAB_140dbad41;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
LAB_140dbaceb:
  *(undefined1 *)(param_1 + 2) = 2;
  goto LAB_140dbae85;
LAB_140dbad41:
  if (wVar4 != wVar5) {
    pwVar10 = &DAT_144543f68;
    puVar8 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar8 = local_68;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar8 + -0xa22a1fb4) + (longlong)pwVar10);
      if ((wVar4 == 0) && (*pwVar10 == 0)) goto LAB_140dbadab;
      if (wVar4 != *pwVar10) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar10);
        if (wVar4 != wVar5) goto LAB_140dbada1;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
LAB_140dbad4b:
  *(undefined1 *)(param_1 + 2) = 3;
  goto LAB_140dbae85;
LAB_140dbada1:
  if (wVar4 != wVar5) {
    pwVar9 = L"LessThan";
    puVar8 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar8 = local_68;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar8 + -0xa22a1fd8) + (longlong)pwVar9);
      if ((wVar1 == L'\0') && (*pwVar9 == L'\0')) goto LAB_140dbae0b;
      if (wVar1 != *pwVar9) {
        wVar4 = towlower(wVar1);
        wVar5 = towlower(*pwVar9);
        if (wVar4 != wVar5) goto LAB_140dbae01;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
LAB_140dbadab:
  *(undefined1 *)(param_1 + 2) = 4;
  goto LAB_140dbae85;
LAB_140dbae5c:
  iVar7 = (uint)wVar4 - (uint)wVar5;
LAB_140dbae64:
  uVar3 = 0;
  if (iVar7 == 0) {
    uVar3 = 6;
  }
  *(undefined1 *)(param_1 + 2) = uVar3;
  goto LAB_140dbae85;
LAB_140dbae01:
  if (wVar4 != wVar5) {
    pwVar9 = L"LessThanEquals";
    puVar8 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar8 = local_68;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar8 + -0xa22a1ff0) + (longlong)pwVar9);
      if ((wVar1 == L'\0') && (*pwVar9 == L'\0')) goto LAB_140dbae64;
      if (wVar1 != *pwVar9) {
        wVar4 = towlower(wVar1);
        wVar5 = towlower(*pwVar9);
        if (wVar4 != wVar5) goto LAB_140dbae5c;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
LAB_140dbae0b:
  *(undefined1 *)(param_1 + 2) = 5;
LAB_140dbae85:
  local_58[0] = 0;
  local_58[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"value_range",0x18);
  FUN_1416b3b00(*param_2,local_58,(longlong)param_1 + 0x14);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dbaf20 FUN_140dbaf20 body=571 status=ok
// SIG undefined FUN_140dbaf20(void)

void FUN_140dbaf20(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *local_res10;
  longlong *local_res18;
  longlong local_68 [6];
  
  if (*param_2 != 0) {
    uVar8 = 0;
    local_68[1] = 0xc;
    local_68[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    FGenericPlatformString::Memcpy(local_68[0],L"search_name",0x18);
    FUN_1416b40a0(*param_2,local_68,param_1);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    local_68[2] = 0;
    local_68[3] = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
    FGenericPlatformString::Memcpy(local_68[2],L"match_game_settings",0x28);
    FUN_1416b3900(*param_2,local_68 + 2,param_1 + 0x10);
    if (local_68[2] != 0) {
      FMemory::Free();
    }
    local_res10 = (longlong *)0x0;
    local_68[4] = 0;
    local_68[5] = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 4,0);
    FGenericPlatformString::Memcpy(local_68[4],L"search_parameters",0x24);
    FUN_1416b3850(*param_2,local_68 + 4,&local_res10);
    if (local_68[4] != 0) {
      FMemory::Free();
    }
    if ((local_res10 != (longlong *)0x0) &&
       (lVar7 = (longlong)(int)local_res10[1], uVar9 = uVar8, 0 < lVar7)) {
      do {
        plVar2 = *(longlong **)(uVar8 + 8 + *local_res10);
        plVar3 = *(longlong **)(uVar8 + *local_res10);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        if (plVar3 != (longlong *)0x0) {
          local_res18 = (longlong *)0x0;
          (**(code **)(*plVar3 + 0x28))(plVar3);
          if ((local_res18 != (longlong *)0x0) && (*local_res18 != 0)) {
            lVar6 = (longlong)*(int *)(param_1 + 0x20);
            iVar5 = *(int *)(param_1 + 0x20) + 1;
            *(int *)(param_1 + 0x20) = iVar5;
            if (*(int *)(param_1 + 0x24) < iVar5) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(param_1 + 0x18);
            }
            lVar4 = *(longlong *)(param_1 + 0x18);
            *(undefined8 *)(lVar4 + lVar6 * 0x18) = 0;
            *(undefined8 *)(lVar4 + 8 + lVar6 * 0x18) = 0;
            *(undefined8 *)(lVar4 + 0x10 + lVar6 * 0x18) = 0;
            FUN_140dbaaa0(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar9 * 0x18,local_res18);
          }
        }
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar2 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        uVar8 = uVar8 + 0x10;
        lVar7 = lVar7 + -1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
      } while (lVar7 != 0);
    }
  }
  return;
}



// FUNCTION 140dbb160 FUN_140dbb160 body=393 status=ok
// SIG undefined FUN_140dbb160(void)

longlong FUN_140dbb160(longlong param_1,longlong param_2)

{
  wchar_t _C;
  int iVar1;
  wint_t wVar2;
  wint_t wVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  FUN_140da8520();
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  lVar11 = *(longlong *)(param_2 + 0x28);
  lVar8 = (longlong)*(int *)(param_2 + 0x30) * 0x128 + lVar11;
  while( true ) {
    if (lVar11 == lVar8) {
      return param_1;
    }
    puVar10 = *(undefined8 **)(lVar11 + 0x108);
    puVar7 = puVar10 + (longlong)*(int *)(lVar11 + 0x110) * 2;
    if (puVar10 != puVar7) break;
LAB_140dbb25b:
    iVar1 = *(int *)(param_1 + 0xf0);
    iVar4 = iVar1 + 1;
    *(int *)(param_1 + 0xf0) = iVar4;
    if (*(int *)(param_1 + 0xf4) < iVar4) {
      FUN_140a131a0(param_1 + 0xe8);
    }
    lVar6 = (longlong)iVar1 * 0xe8;
    _guard_xfg_dispatch_icall_nop((void *)(*(longlong *)(param_1 + 0xe8) + lVar6),0,0xe8);
    lVar6 = *(longlong *)(param_1 + 0xe8) + lVar6;
LAB_140dbb2ab:
    FUN_140db9eb0(lVar6);
    lVar11 = lVar11 + 0x128;
  }
LAB_140dbb1e0:
  if (*(int *)(puVar10 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar10;
  }
  pwVar5 = L"campaign";
  do {
    _C = *(wchar_t *)((longlong)(puVar9 + -0xa22a1334) + (longlong)pwVar5);
    lVar6 = param_1;
    if ((_C == L'\0') && (*pwVar5 == L'\0')) goto LAB_140dbb2ab;
    if (_C != *pwVar5) {
      wVar2 = towlower(_C);
      wVar3 = towlower(*pwVar5);
      if (wVar2 != wVar3) break;
    }
    pwVar5 = pwVar5 + 1;
  } while( true );
  if (wVar2 == wVar3) goto LAB_140dbb2ab;
  puVar10 = puVar10 + 2;
  if (puVar10 == puVar7) goto LAB_140dbb25b;
  goto LAB_140dbb1e0;
}



// FUNCTION 140dbb2f0 FUN_140dbb2f0 body=798 status=ok
// SIG undefined FUN_140dbb2f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dbb2f0(longlong *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined4 uVar12;
  void **local_res8;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  plVar6 = (longlong *)*param_1;
  iVar11 = (int)param_1[1];
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if (iVar2 < 0) {
    if (iVar11 != 0) {
      do {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      iVar2 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar2 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,0);
    }
  }
  else {
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  pvVar1 = DAT_14686f2c0;
  puVar9 = (undefined2 *)0x0;
  local_38 = (undefined2 *)0x0;
  iVar11 = (int)_DAT_14686f2c8;
  uVar12 = 0;
  local_30 = iVar11;
  if (iVar11 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,_DAT_14686f2c8 & 0xffffffff,0);
    puVar9 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,(longlong)iVar11 * 2);
    uVar12 = local_2c;
  }
  iVar11 = local_30;
  puVar3 = (undefined8 *)*param_1;
  lVar8 = param_1[1];
  puVar7 = puVar3;
  do {
    if (puVar7 == puVar3 + (longlong)(int)lVar8 * 2) {
LAB_140dbb426:
      iVar2 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
      }
      puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_1);
      *puVar3 = puVar9;
      *(int *)(puVar3 + 1) = iVar11;
      *(undefined4 *)((longlong)puVar3 + 0xc) = uVar12;
LAB_140dbb454:
      lVar10 = (longlong)DAT_14686f3b0 * 0xe8 + DAT_14686f3a8;
      for (lVar8 = DAT_14686f3a8; lVar8 != lVar10; lVar8 = lVar8 + 0xe8) {
        iVar11 = TArray<FString,FDefaultAllocator>::Find(param_1,lVar8);
        if (iVar11 == -1) {
          iVar11 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar11 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar11);
          }
          FString::FString(*param_1 + (longlong)iVar11 * 0x10,lVar8);
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_14686f660) &&
         (_Init_thread_header(&DAT_14686f660), DAT_14686f660 == -1)) {
        DAT_14629b7e0 = (void *)0x0;
        _DAT_14629b7e8 = 0x21;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629b7e0,0);
        FGenericPlatformString::Memcpy(DAT_14629b7e0,L"2cf9a2ba9e68496ebefefc9013f8b389",0x42);
        atexit((_func_5014 *)&LAB_143e54270);
        _Init_thread_footer(&DAT_14686f660);
      }
      pvVar1 = DAT_14629b7e0;
      lVar8 = (longlong)DAT_14629b7e8;
      local_38 = (undefined2 *)0x0;
      local_30 = DAT_14629b7e8;
      if (DAT_14629b7e8 == 0) {
        local_2c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,_DAT_14629b7e8 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar8 * 2);
      }
      local_res8 = &local_38;
      TArray<FString,FDefaultAllocator>::RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>
                (param_1,&local_res8);
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return;
    }
    puVar5 = &DAT_143f3eda8;
    if (iVar11 != 0) {
      puVar5 = puVar9;
    }
    if (*(int *)(puVar7 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar7;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if (iVar2 == 0) {
      if ((int)((longlong)puVar7 - (longlong)puVar3 >> 4) != -1) {
        if (puVar9 != (undefined2 *)0x0) {
          FMemory::Free(puVar9);
        }
        goto LAB_140dbb454;
      }
      goto LAB_140dbb426;
    }
    puVar7 = puVar7 + 2;
  } while( true );
}



// FUNCTION 140dbb610 FUN_140dbb610 body=120 status=ok
// SIG undefined FUN_140dbb610(void)

undefined8 FUN_140dbb610(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x1a8) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 0x1a0);
  }
  puVar1 = (undefined8 *)UPawnAction::GetDisplayName(param_1,local_18);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s;%s",puVar3,puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140dbb690 FUN_140dbb690 body=120 status=ok
// SIG undefined FUN_140dbb690(void)

undefined8 FUN_140dbb690(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x1c0) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 0x1b8);
  }
  puVar1 = (undefined8 *)UPawnAction::GetDisplayName(param_1,local_18);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s,%s",puVar3,puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140dbb710 FUN_140dbb710 body=112 status=ok
// SIG undefined FUN_140dbb710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140dbb710(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  
  *param_1 = 0;
  uVar1 = _DAT_14686f2c8;
  _Src = DAT_14686f2c0;
  iVar2 = (int)_DAT_14686f2c8;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,uVar1 & 0xffffffff,0);
  _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar2 * 2);
  return param_1;
}



// FUNCTION 140dbb780 FUN_140dbb780 body=51 status=ok
// SIG undefined FUN_140dbb780(void)

undefined8 FUN_140dbb780(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x14);
    uVar2 = FUN_140bb6200(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140dbb7c0 FUN_140dbb7c0 body=44 status=ok
// SIG undefined FUN_140dbb7c0(void)

void FUN_140dbb7c0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (*(char *)(param_1 + 0x10) == '\x03') {
    *param_2 = *(undefined4 *)(param_1 + 0xc4);
    *param_3 = *(undefined4 *)(param_1 + 0xd8);
    *param_4 = *(undefined4 *)(param_1 + 0xe8);
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  return;
}



// FUNCTION 140dbb7f0 FUN_140dbb7f0 body=223 status=ok
// SIG undefined FUN_140dbb7f0(void)

undefined1 FUN_140dbb7f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_38 [8];
  longlong *local_30;
  longlong *local_28;
  
  uVar8 = 0;
  puVar6 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  FUN_1404d0c50(&local_30,*puVar6);
  if (local_30 != (longlong *)0x0) {
    local_res18 = 0x11f;
    lVar7 = (**(code **)(*local_30 + 0x10))(local_30,0x11f);
    if ((lVar7 != 0) && (lVar7 + 0x28 != 0)) {
      local_res10[0] = 0xffffffff;
      puVar6 = (undefined8 *)FName::FName(local_38,L"SEARCHCROSSPLAY",1);
      cVar5 = FUN_1404a9610(lVar7 + 0x28,*puVar6,local_res10);
      uVar8 = 0;
      if (cVar5 != '\0') {
        uVar8 = (undefined1)local_res10[0];
      }
    }
  }
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 140dbb8d0 FUN_140dbb8d0 body=63 status=ok
// SIG undefined FUN_140dbb8d0(void)

undefined8 FUN_140dbb8d0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FText::FText();
  lVar1 = FUN_140db9720(param_2);
  if (lVar1 != 0) {
    FText::operator=(param_1,lVar1 + 0xd0);
  }
  return param_1;
}



// FUNCTION 140dbb910 FUN_140dbb910 body=28 status=ok
// SIG undefined FUN_140dbb910(void)

undefined8 FUN_140dbb910(undefined4 *param_1,undefined8 param_2)

{
  FUN_140dbb930(param_2,*param_1);
  return param_2;
}



// FUNCTION 140dbb930 FUN_140dbb930 body=687 status=ok
// SIG undefined FUN_140dbb930(void)

undefined8 FUN_140dbb930(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FText::FText();
  switch(param_2) {
  case 1:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_f8,L"This action is unavailable without a valid network connection.",
                       L"OakOnlineAsync",L"CannotPlayOnline_NoLinkConnection");
    FText::operator=(param_1,uVar5);
    plVar6 = local_f0;
    break;
  case 2:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e0,L"You must connect to the online service to play online.",
                       L"OakOnlineAsync",L"CannotPlayOnline_NotLoggedIn");
    FText::operator=(param_1,uVar5);
    plVar6 = local_d8;
    break;
  case 3:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b0,L"Unable to use online features; the title is still installing.",
                       L"OakOnlineAsync",L"CannotPlayOnline_GameNotInstalled");
    FText::operator=(param_1,uVar5);
    plVar6 = local_a8;
    break;
  case 4:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c8,
                       L"This feature requires all active players to meet the minimum age requirements to play this game."
                       ,L"OakOnlineAsync",L"CannotPlayOnline_AgeRestriction");
    FText::operator=(param_1,uVar5);
    plVar6 = local_c0;
    break;
  case 5:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,
                       L"A required game patch is available. Please update to access online features."
                       ,L"OakOnlineAsync",L"CannotPlayOnline_PatchRequired");
    FText::operator=(param_1,uVar5);
    plVar6 = local_90;
    break;
  case 6:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,
                       L"A required system update is available.  Please update to access online features."
                       ,L"OakOnlineAsync",L"CannotPlayOnline_SystemUpdateRequired");
    FText::operator=(param_1,uVar5);
    plVar6 = local_78;
    break;
  case 7:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,
                       L"This feature requires all active players to have multiplayer privileges.",
                       L"OakOnlineAsync",L"CannotPlayOnline_NoPrivilege");
    FText::operator=(param_1,uVar5);
    plVar6 = local_60;
    break;
  case 8:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,
                       L"This feature requires all active players to have cross-play privileges.",
                       L"OakOnlineAsync",L"CannotPlayOnline_NoCrossplayPrivilege");
    FText::operator=(param_1,uVar5);
    plVar6 = local_48;
    break;
  case 9:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Cannot play online.  Check your network connection.",
                       L"OakOnlineAsync",L"CannotPlayOnline_GenericFailure");
    FText::operator=(param_1,uVar5);
    plVar6 = local_18;
    break;
  case 10:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Cannot play online without a valid SHiFT display name.",
                       L"OakOnlineAsync",L"CannotPlayOnline_ShiftFirstBootFailure");
    FText::operator=(param_1,uVar5);
    plVar6 = local_30;
    break;
  default:
    goto switchD_140dbb96d_default;
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
switchD_140dbb96d_default:
  return param_1;
}



// FUNCTION 140dbbc10 FUN_140dbbc10 body=122 status=ok
// SIG undefined FUN_140dbbc10(void)

longlong FUN_140dbbc10(undefined8 *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar2 + 0x148);
  if (lVar2 != 0) {
    lVar3 = FUN_141424d10();
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



// FUNCTION 140dbbc90 FUN_140dbbc90 body=224 status=ok
// SIG undefined FUN_140dbbc90(void)

undefined8 FUN_140dbbc90(undefined8 param_1,undefined8 param_2)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  void **ppvVar4;
  longlong lVar5;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  void *local_18;
  undefined8 local_10;
  
  lVar3 = FUN_140db9720(param_2);
  if (lVar3 == 0) {
    local_18 = (void *)0x0;
    ppvVar4 = &local_18;
    local_10 = 0;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    local_20 = *(int *)(lVar3 + 0x58);
    lVar5 = (longlong)local_20;
    _Src = *(void **)(lVar3 + 0x50);
    local_28 = (void *)0x0;
    if (local_20 == 0) {
      ppvVar4 = &local_28;
      local_1c = 0;
      bVar2 = true;
      bVar1 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
      _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar5 * 2);
      ppvVar4 = &local_28;
      bVar2 = true;
      bVar1 = false;
    }
  }
  FString::FString(param_1,ppvVar4);
  if (bVar1) {
    if (local_18 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_28 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140dbbd70 FUN_140dbbd70 body=51 status=ok
// SIG undefined FUN_140dbbd70(void)

undefined8 FUN_140dbbd70(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x14);
    uVar2 = FUN_140bb7900(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140dbbdb0 FUN_140dbbdb0 body=150 status=ok
// SIG undefined FUN_140dbbdb0(void)

undefined8 * FUN_140dbbdb0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  lVar2 = FUN_140db9720(param_2);
  if (lVar2 != 0) {
    FString::FString(param_1,lVar2 + 0x40);
    return param_1;
  }
  puVar3 = &DAT_143f3eda8;
  puVar4 = &DAT_143f3eda8;
  if (DAT_14686f3c8 != 0) {
    puVar4 = DAT_14686f3c0;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar3 = (undefined2 *)*param_2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
  if (iVar1 == 0) {
    FString::FString(param_1,&DAT_14686f400);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 140dbbe50 FUN_140dbbe50 body=195 status=ok
// SIG undefined FUN_140dbbe50(void)

void FUN_140dbbe50(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_20 [8];
  longlong *local_18;
  longlong *local_10;
  
  puVar5 = (undefined8 *)FName::FName(local_20,L"SPARK",1);
  FUN_1404d0c50(&local_18,*puVar5);
  if (local_18 != (longlong *)0x0) {
    lVar6 = (**(code **)(*local_18 + 0x2c8))(local_18,0x11f);
    if (lVar6 != 0) {
      *param_2 = *(undefined1 *)(lVar6 + 0x15);
      *param_3 = *(undefined1 *)(lVar6 + 0x17);
      *param_4 = *(undefined1 *)(lVar6 + 0x18);
    }
  }
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 140dbbf20 FUN_140dbbf20 body=51 status=ok
// SIG undefined FUN_140dbbf20(void)

undefined8 FUN_140dbbf20(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x14);
    uVar2 = FUN_14046e5c0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140dbbf60 FUN_140dbbf60 body=514 status=ok
// SIG undefined FUN_140dbbf60(void)

void FUN_140dbbf60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined **local_58 [2];
  longlong *local_48;
  longlong local_40;
  
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar6 != '\0') {
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
    puVar8 = (ulonglong *)UListView::OnItemSelectionChanged(uVar7);
    uVar11 = 0;
    puVar13 = (undefined8 *)*puVar8;
    uVar12 = (longlong)(int)puVar8[1] & 0x1fffffffffffffff;
    if (puVar13 + (int)puVar8[1] < puVar13) {
      uVar12 = uVar11;
    }
    if (uVar12 != 0) {
      do {
        lVar9 = FUN_142547b50(*puVar13,local_58);
        plVar4 = *(longlong **)(lVar9 + 0x10);
        lVar9 = *(longlong *)(lVar9 + 8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_58[0] = &PTR_FUN_143f740c8;
        if (local_40 != 0) {
          FMemory::Free();
        }
        plVar10 = local_48;
        local_58[0] = &PTR_FUN_143f73d18;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        if (lVar9 == 0) {
LAB_140dbc0dc:
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar4 + 1;
            lVar9 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
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
        else {
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
          }
          plVar10 = (longlong *)((longlong)iVar3 * 0x10 + *param_2);
          *plVar10 = lVar9;
          plVar10[1] = (longlong)plVar4;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            LOCK();
            plVar10 = plVar4 + 1;
            lVar9 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
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
            goto LAB_140dbc0dc;
          }
        }
        puVar13 = puVar13 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar12);
    }
  }
  return;
}



// FUNCTION 140dbc170 FUN_140dbc170 body=388 status=ok
// SIG undefined FUN_140dbc170(void)

undefined8 FUN_140dbc170(undefined8 param_1,undefined8 param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_3 == 0xe) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,
               L"You cannot enter this playlist with a full party because you have not yet unlocked any of the playlist content."
               ,L"Matchmaking",L"NoPlaylistContentAvailable");
    return param_2;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,
                     L"An error occurred during matchmaking. Please check your network connection and try again.\nError Code: {0}"
                     ,L"Matchmaking",L"MatchmakingError");
  lVar6 = FTextFormat::FTextFormat(local_38,uVar5);
  local_48 = 0;
  local_40 = 0;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
  ResizeTo(&local_48,1);
  uVar4 = local_40;
  lVar9 = (longlong)(int)local_40;
  iVar7 = (int)local_40 + 1;
  local_40 = CONCAT44(local_40._4_4_,iVar7);
  if (local_40._4_4_ < iVar7) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,uVar4 & 0xffffffff);
  }
  puVar8 = (undefined4 *)(lVar9 * 0x30 + local_48);
  *puVar8 = 0;
  *(undefined1 *)(puVar8 + 10) = 0;
  *(ulonglong *)(puVar8 + 2) = (ulonglong)param_3;
  FText::FormatNamedImpl(param_2,lVar6,&local_48);
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (&local_48);
  plVar3 = *(longlong **)(lVar6 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140dbc300 FUN_140dbc300 body=93 status=ok
// SIG undefined FUN_140dbc300(void)

undefined4 FUN_140dbc300(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  lVar2 = FUN_140db9720((undefined8 *)(param_1 + 0x60));
  if (lVar2 != 0) {
    return *(undefined4 *)(lVar2 + 0xa4);
  }
  puVar4 = &DAT_143f3eda8;
  puVar5 = &DAT_143f3eda8;
  if (DAT_14686f3c8 != 0) {
    puVar5 = DAT_14686f3c0;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    puVar4 = *(undefined2 **)(param_1 + 0x60);
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
  uVar3 = 0;
  if (iVar1 == 0) {
    uVar3 = DAT_14686f464;
  }
  return uVar3;
}



// FUNCTION 140dbc360 FUN_140dbc360 body=231 status=ok
// SIG undefined FUN_140dbc360(void)

int FUN_140dbc360(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 local_res10 [8];
  longlong *local_18;
  longlong *local_10;
  
  iVar9 = 0;
  puVar6 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
  FUN_1404d0c50(&local_18,*puVar6);
  if (local_18 != (longlong *)0x0) {
    lVar7 = (**(code **)(*local_18 + 0x10))(local_18,0x120);
    if (lVar7 != 0) {
      iVar9 = *(int *)(lVar7 + 0xf8);
      uVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
      iVar4 = FUN_14046e5c0(uVar8);
      iVar9 = iVar9 - iVar4;
    }
  }
  iVar4 = FUN_140bba270(*(undefined8 *)(param_1 + 0x88));
  iVar5 = FUN_14046e5c0(*(undefined8 *)(param_1 + 0x88));
  plVar3 = local_10;
  iVar5 = (iVar9 - iVar4) + iVar5;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return iVar5;
}



// FUNCTION 140dbc450 FUN_140dbc450 body=51 status=ok
// SIG undefined FUN_140dbc450(void)

undefined8 FUN_140dbc450(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x14);
    return *(undefined8 *)(lVar2 + 0xcb0);
  }
  return 0;
}



// FUNCTION 140dbc490 FUN_140dbc490 body=153 status=ok
// SIG undefined FUN_140dbc490(void)

int FUN_140dbc490(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar1 == '\0') {
    iVar2 = 1;
  }
  else {
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x14);
    iVar2 = FUN_14046e5c0(uVar4);
  }
  lVar5 = FUN_140db9720(param_1 + 0x60);
  if (lVar5 != 0) {
    return *(int *)(lVar5 + 0xa4) - iVar2;
  }
  puVar7 = &DAT_143f3eda8;
  puVar8 = &DAT_143f3eda8;
  if (DAT_14686f3c8 != 0) {
    puVar8 = DAT_14686f3c0;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    puVar7 = *(undefined2 **)(param_1 + 0x60);
  }
  iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
  iVar6 = 0;
  if (iVar3 == 0) {
    iVar6 = DAT_14686f464;
  }
  return iVar6 - iVar2;
}



// FUNCTION 140dbc530 FUN_140dbc530 body=89 status=ok
// SIG undefined FUN_140dbc530(void)

undefined4 FUN_140dbc530(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  lVar2 = FUN_140db9720();
  if (lVar2 != 0) {
    return *(undefined4 *)(lVar2 + 0xa4);
  }
  puVar4 = &DAT_143f3eda8;
  puVar5 = &DAT_143f3eda8;
  if (DAT_14686f3c8 != 0) {
    puVar5 = DAT_14686f3c0;
  }
  if (*(int *)(param_1 + 1) != 0) {
    puVar4 = (undefined2 *)*param_1;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
  uVar3 = 0;
  if (iVar1 == 0) {
    uVar3 = DAT_14686f464;
  }
  return uVar3;
}



// FUNCTION 140dbc590 FUN_140dbc590 body=7 status=ok
// SIG undefined FUN_140dbc590(void)

undefined4 FUN_140dbc590(void)

{
  return DAT_14686ee10;
}



// FUNCTION 140dbc5a0 FUN_140dbc5a0 body=45 status=ok
// SIG undefined FUN_140dbc5a0(void)

void FUN_140dbc5a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140db9720();
  if (lVar1 != 0) {
    FUN_140da9680(param_2,lVar1 + 0xa8);
    return;
  }
  return;
}



// FUNCTION 140dbc5d0 FUN_140dbc5d0 body=223 status=ok
// SIG undefined FUN_140dbc5d0(void)

char * FUN_140dbc5d0(undefined8 param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char cVar8;
  undefined1 local_res20 [8];
  longlong *local_18;
  longlong *local_10;
  
  puVar6 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  FUN_1404d0c50(&local_18,*puVar6);
  if (local_18 != (longlong *)0x0) {
    lVar7 = (**(code **)(*local_18 + 0x10))(local_18,0x11f);
    if (lVar7 != 0) {
      cVar8 = (*(char *)(lVar7 + 0x3a) == '\0') + '\x01';
      if (*(char *)(lVar7 + 0x3f) == '\0') {
        *param_2 = cVar8;
        param_2[1] = '\x01';
      }
      else {
        cVar4 = *(char *)(lVar7 + 0x40);
        *param_2 = cVar8;
        param_2[1] = -(cVar4 != '\0') & 2;
      }
      goto LAB_140dbc65d;
    }
  }
  *(undefined2 *)param_2 = DAT_14686a12c;
LAB_140dbc65d:
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return param_2;
}



// FUNCTION 140dbc6b0 FUN_140dbc6b0 body=50 status=ok
// SIG undefined FUN_140dbc6b0(void)

char * FUN_140dbc6b0(char *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  
  cVar2 = (*(char *)(param_2 + 0x12) == '\0') + '\x01';
  if (*(char *)(param_2 + 0x17) != '\0') {
    cVar1 = *(char *)(param_2 + 0x18);
    *param_1 = cVar2;
    param_1[1] = -(cVar1 != '\0') & 2;
    return param_1;
  }
  *param_1 = cVar2;
  param_1[1] = '\x01';
  return param_1;
}



// FUNCTION 140dbc6f0 FUN_140dbc6f0 body=46 status=ok
// SIG undefined FUN_140dbc6f0(void)

int FUN_140dbc6f0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_140bba270(*param_1);
  iVar2 = FUN_14046e5c0(*param_1);
  return iVar1 - iVar2;
}



// FUNCTION 140dbc720 FUN_140dbc720 body=27 status=ok
// SIG undefined FUN_140dbc720(void)

undefined4 FUN_140dbc720(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140db9720();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x78);
  }
  return 0;
}



// FUNCTION 140dbc740 FUN_140dbc740 body=52 status=ok
// SIG undefined FUN_140dbc740(void)

undefined8 * FUN_140dbc740(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_140db9720(param_2);
  if (lVar1 != 0) {
    FString::operator=(param_1,lVar1 + 0x10);
  }
  return param_1;
}



// FUNCTION 140dbc780 FUN_140dbc780 body=118 status=ok
// SIG undefined FUN_140dbc780(void)

int FUN_140dbc780(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  param_1 = param_1 + 0x14;
  cVar1 = FWeakObjectPtr::IsValid(param_1);
  if (cVar1 == '\0') {
    iVar2 = 1;
  }
  else {
    uVar4 = FWeakObjectPtr::Get(param_1);
    iVar2 = FUN_14046e5c0(uVar4);
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1);
  if (cVar1 != '\0') {
    uVar4 = FWeakObjectPtr::Get(param_1);
    lVar5 = FUN_140bb7900(uVar4);
    if (lVar5 != 0) {
      iVar3 = FUN_1404cfb00(lVar5);
      return iVar3 + iVar2;
    }
  }
  return iVar2;
}



// FUNCTION 140dbc800 FUN_140dbc800 body=325 status=ok
// SIG undefined FUN_140dbc800(void)

undefined8 * FUN_140dbc800(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar10 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar7 = FUN_14244f490(*(longlong *)(param_1 + 0x10),0);
    if (lVar7 != 0) {
      lVar8 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        bVar6 = true;
        bVar5 = false;
        puVar9 = (undefined8 *)FUN_142dcf3a0(lVar7,local_18);
        uVar10 = *puVar9;
        goto LAB_140dbc897;
      }
    }
  }
  puVar9 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar6 = false;
  bVar5 = true;
LAB_140dbc897:
  *param_2 = uVar10;
  param_2[1] = puVar9[1];
  puVar9[1] = 0;
  *puVar9 = 0;
  plVar3 = plStack_20;
  if (bVar5) {
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  if ((bVar6) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return param_2;
}



// FUNCTION 140dbc950 FUN_140dbc950 body=367 status=ok
// SIG undefined FUN_140dbc950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140dbc950(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  undefined8 local_20;
  longlong *plStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar5 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar7 = UGameInstance::GetFirstGamePlayer(uVar6);
    if (lVar7 != 0) {
      lVar7 = FUN_142547b50(lVar7,local_48);
      uVar6 = *(undefined8 *)(lVar7 + 8);
      plVar4 = *(longlong **)(lVar7 + 0x10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_58 = uVar6;
      plStack_50 = plVar4;
      if (&local_58 != param_2) {
        local_58 = *param_2;
        plStack_50 = (longlong *)param_2[1];
        *param_2 = uVar6;
        param_2[1] = plVar4;
        local_20 = uVar6;
        plStack_18 = plVar4;
      }
      plVar4 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
      local_48[0] = &PTR_FUN_143f740c8;
      if (local_30 != 0) {
        FMemory::Free();
      }
      local_48[0] = &PTR_FUN_143f73d18;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_38 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
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
  }
  return param_2;
}



// FUNCTION 140dbcac0 FUN_140dbcac0 body=1039 status=ok
// SIG undefined FUN_140dbcac0(void)

void FUN_140dbcac0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  int local_80;
  undefined **local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  cVar2 = FUN_140bca8a0(*param_1);
  if (cVar2 == '\0') {
    iVar10 = 0;
    lVar4 = 0;
    local_98 = 0;
    local_90 = 0;
    lVar5 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    if (lVar5 != 0) {
      UWorld::GetPlayerControllerIterator(lVar5,&local_88);
LAB_140dbcb73:
      do {
        if ((local_80 < 0) || (*(int *)(local_88 + 8) <= local_80)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (!bVar12) break;
        lVar5 = FWeakObjectPtr::Get();
        if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x508) != 0)) &&
           (*(longlong *)(lVar5 + 0x460) != 0)) {
          plVar8 = *(longlong **)(*(longlong *)(lVar5 + 0x460) + 0x4b8);
          if ((plVar8 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar8 + 0x20))(), cVar2 == '\0')) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if (bVar12) {
            lVar7 = *(longlong *)(lVar5 + 0x508);
            lVar11 = 0;
            if (lVar7 == 0) {
LAB_140dbcc3b:
              lVar6 = *(longlong *)(lVar5 + 0x508);
              if (lVar6 != 0) {
                lVar7 = FUN_1429c30a0();
                if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                }
                if (bVar12) goto LAB_140dbcc85;
              }
            }
            else {
              lVar6 = UIpConnection::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                bVar12 = false;
              }
              else {
                bVar12 = true;
              }
              if (!bVar12) goto LAB_140dbcc3b;
              lVar6 = *(longlong *)(lVar7 + 0x1970);
              lVar11 = lVar7;
LAB_140dbcc85:
              if (lVar6 != 0) {
                iVar3 = 0;
                iVar9 = -1;
                if (0 < iVar10) {
                  plVar8 = (longlong *)(lVar4 + 0x40);
                  do {
                    iVar9 = iVar3;
                    if (*plVar8 == lVar6) break;
                    iVar3 = iVar3 + 1;
                    plVar8 = plVar8 + 9;
                    iVar9 = -1;
                  } while (iVar3 < iVar10);
                }
                iVar3 = iVar10;
                if (iVar9 == -1) {
                  local_70 = &PTR_FUN_143f740c8;
                  local_68 = 0;
                  uStack_60 = 0;
                  local_58 = 0;
                  iVar3 = iVar10 + 1;
                  local_50 = 0;
                  local_48 = 0;
                  local_40 = 0;
                  local_78 = &PTR_FUN_1445530c8;
                  local_90 = CONCAT44(local_90._4_4_,iVar3);
                  local_38 = lVar6;
                  if (local_90._4_4_ < iVar3) {
                    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_98,iVar10);
                    lVar4 = local_98;
                    iVar3 = (int)local_90;
                  }
                  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar10 * 0x48);
                  FUN_1404bdf40(puVar1,&local_78);
                  *puVar1 = &PTR_FUN_1445530c8;
                  puVar1[8] = local_38;
                  local_78 = &PTR_FUN_143f74338;
                  FUN_1404bebc0(&local_48);
                  FUN_1404bf980();
                  bVar12 = iVar10 == -1;
                  iVar9 = iVar10;
                  iVar10 = iVar3;
                  if (bVar12) goto LAB_140dbce02;
                }
                lVar7 = *(longlong *)(lVar5 + 0x460);
                lVar5 = (longlong)iVar9 * 0x48;
                iVar10 = iVar3;
                if (lVar11 != 0) {
                  iVar9 = *(int *)(lVar5 + 0x38 + lVar4);
                  lVar5 = lVar5 + lVar4;
                  *(int *)(lVar5 + 0x38) = iVar9 + 1;
                  if (*(int *)(lVar5 + 0x3c) < iVar9 + 1) {
                    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(lVar5 + 0x30,iVar9);
                  }
                  puVar1 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 0x28);
                  *puVar1 = &PTR_FUN_143f73d18;
                  puVar1[1] = *(undefined8 *)(lVar7 + 0x4b8);
                  lVar5 = *(longlong *)(lVar7 + 0x4c0);
                  puVar1[2] = lVar5;
                  if (lVar5 != 0) {
                    LOCK();
                    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
                    UNLOCK();
                    lVar4 = local_98;
                    iVar10 = (int)local_90;
                  }
                  *puVar1 = &PTR_FUN_143f740c8;
                  puVar1[3] = 0;
                  puVar1[4] = 0;
                  local_80 = local_80 + 1;
                  goto LAB_140dbcb73;
                }
                FUN_1404c0940(lVar5 + 8 + lVar4,lVar7 + 0x4b0);
              }
            }
          }
        }
LAB_140dbce02:
        local_80 = local_80 + 1;
      } while( true );
    }
    for (lVar5 = lVar4; lVar5 != lVar4 + (longlong)iVar10 * 0x48; lVar5 = lVar5 + 0x48) {
      iVar9 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar9 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar9);
      }
      FUN_1404bdf40((longlong)iVar9 * 0x40 + *param_2,lVar5);
    }
    if (iVar10 != 0) {
      lVar5 = lVar4 + 8;
      do {
        *(undefined ***)(lVar5 + -8) = &PTR_FUN_143f74338;
        FUN_1404bebc0(lVar5 + 0x28);
        FUN_1404bf980(lVar5);
        lVar5 = lVar5 + 0x48;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  else {
    lVar4 = FUN_140bb7870();
    if (lVar4 != 0) {
      FUN_140da9790(param_2,lVar4 + 0x60);
      return;
    }
  }
  return;
}



// FUNCTION 140dbced0 FUN_140dbced0 body=196 status=ok
// SIG undefined FUN_140dbced0(void)

undefined1 FUN_140dbced0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined1 local_res20 [8];
  longlong *local_18;
  longlong *local_10;
  
  puVar7 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  FUN_1404d0c50(&local_18,*puVar7);
  if (local_18 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*local_18 + 0x290))(local_18,0x11f,param_2);
  }
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 140dbcfa0 FUN_140dbcfa0 body=317 status=ok
// SIG undefined FUN_140dbcfa0(void)

undefined8 * FUN_140dbcfa0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  ulonglong local_res8;
  undefined1 local_res18 [16];
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar8 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  puVar5 = (ulonglong *)FName::FName(local_res18,L"SPARK",1);
  local_res8 = *puVar5;
  plVar6 = (longlong *)FUN_1404b0000(&local_res8);
  bVar9 = plVar6 != (longlong *)0x0;
  if (bVar9) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x18))(plVar6,local_28);
    uVar8 = *puVar7;
  }
  else {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    puVar7 = &local_38;
  }
  *param_2 = uVar8;
  param_2[1] = puVar7[1];
  puVar7[1] = 0;
  *puVar7 = 0;
  if (bVar9) {
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
  }
  plVar6 = plStack_30;
  if ((!bVar9) && (plStack_30 != (longlong *)0x0)) {
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
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140dbd0e0 FUN_140dbd0e0 body=222 status=ok
// SIG undefined FUN_140dbd0e0(void)

undefined8 * FUN_140dbd0e0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_28;
  longlong *local_20;
  
  *param_2 = 0;
  param_2[1] = 0;
  puVar5 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404d0c50(&local_28,*puVar5);
  if (local_28 != (longlong *)0x0) {
    lVar6 = (**(code **)(*local_28 + 0x10))(local_28,0x11f);
    if (lVar6 != 0) {
      puVar5 = (undefined8 *)FName::FName(local_res20,L"FRIENDPASSCODE",1);
      FUN_1404a96c0(lVar6 + 0x28,*puVar5,param_2);
    }
  }
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 140dbd1c0 FUN_140dbd1c0 body=115 status=ok
// SIG undefined FUN_140dbd1c0(void)

undefined8 FUN_140dbd1c0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  
  FText::FText();
  lVar2 = FUN_140db9720(param_2);
  if (lVar2 == 0) {
    puVar3 = &DAT_143f3eda8;
    puVar4 = &DAT_143f3eda8;
    if (DAT_14686f3c8 != 0) {
      puVar4 = DAT_14686f3c0;
    }
    if (*(int *)(param_2 + 1) != 0) {
      puVar3 = (undefined2 *)*param_2;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
    if (iVar1 != 0) {
      return param_1;
    }
    puVar5 = &DAT_14686f478;
  }
  else {
    puVar5 = (undefined *)(lVar2 + 0xb8);
  }
  FText::operator=(param_1,puVar5);
  return param_1;
}



// FUNCTION 140dbd240 FUN_140dbd240 body=224 status=ok
// SIG undefined FUN_140dbd240(void)

undefined8 FUN_140dbd240(undefined8 param_1,undefined8 param_2)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  void **ppvVar4;
  longlong lVar5;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  void *local_18;
  undefined8 local_10;
  
  lVar3 = FUN_140db9720(param_2);
  if (lVar3 == 0) {
    local_18 = (void *)0x0;
    ppvVar4 = &local_18;
    local_10 = 0;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    local_20 = *(int *)(lVar3 + 0x68);
    lVar5 = (longlong)local_20;
    _Src = *(void **)(lVar3 + 0x60);
    local_28 = (void *)0x0;
    if (local_20 == 0) {
      ppvVar4 = &local_28;
      local_1c = 0;
      bVar2 = true;
      bVar1 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
      _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar5 * 2);
      ppvVar4 = &local_28;
      bVar2 = true;
      bVar1 = false;
    }
  }
  FString::FString(param_1,ppvVar4);
  if (bVar1) {
    if (local_18 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_28 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140dbd320 FUN_140dbd320 body=1905 status=ok
// SIG undefined FUN_140dbd320(void)

void FUN_140dbd320(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138 [21];
  longlong *plStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  lVar11 = 0;
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (lVar8 = FUN_14244f490(*(longlong *)(param_1 + 0x10),0), lVar8 != 0)) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      bVar6 = true;
      bVar5 = false;
      plVar10 = (longlong *)FUN_142dcf3a0(lVar8,local_68);
      lVar11 = *plVar10;
      goto LAB_140dbd3c4;
    }
  }
  plVar10 = local_138 + 0x14;
  local_138[0x14] = 0;
  plStack_90 = (longlong *)0x0;
  bVar6 = false;
  bVar5 = true;
LAB_140dbd3c4:
  plVar3 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_90;
  if ((bVar5) && (plStack_90 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_90 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  if ((bVar6) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_60 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (lVar11 != 0) {
    lVar8 = FUN_142b45e90();
    local_148 = (undefined4)lVar11;
    uStack_144 = (undefined4)((ulonglong)lVar11 >> 0x20);
    uStack_140 = SUB84(plVar3,0);
    uStack_13c = (undefined4)((ulonglong)plVar3 >> 0x20);
    local_88 = local_148;
    uStack_84 = uStack_144;
    uStack_80 = uStack_140;
    uStack_7c = uStack_13c;
    uVar4 = *(undefined8 *)(lVar8 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    FUN_142b4a990(uVar4,&local_78,&local_88);
    plVar10 = (longlong *)CONCAT44(uStack_7c,uStack_80);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar10)(plVar10);
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
    if ((local_78 != 0) && (*(char *)(local_78 + 0x18) != '\0')) {
      plVar12 = (longlong *)FUN_142b4b6c0(local_78,local_58);
      plVar10 = *(longlong **)(*plVar12 + 0x10);
      lVar11 = *(longlong *)(*plVar12 + 8);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_50 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      if (lVar11 != 0) {
        local_138[0] = 0;
        local_138[1] = 0x1a;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138,0);
        FGenericPlatformString::Memcpy(local_138[0],L"WhisperDelayJitter_Events",0x34);
        uVar13 = FUN_142afb1f0(lVar11,local_138,0x40400000,0,0x42f00000);
        *(undefined4 *)(param_1 + 0x74) = uVar13;
        if (local_138[0] != 0) {
          FMemory::Free();
        }
        local_138[2] = 0;
        local_138[3] = 0x1c;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138 + 2,0);
        FGenericPlatformString::Memcpy(local_138[2],L"FetchEventsFromWhisperDelay",0x38);
        uVar13 = FUN_142afb1f0(lVar11,local_138 + 2,0x40400000,0,0x42f00000);
        *(undefined4 *)(param_1 + 0x78) = uVar13;
        if (local_138[2] != 0) {
          FMemory::Free();
        }
        local_138[4] = 0;
        local_138[5] = 0x1e;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138 + 4,0);
        FGenericPlatformString::Memcpy(local_138[4],L"FetchEventsForAllFriendsDelay",0x3c);
        uVar13 = FUN_142afb1f0(lVar11,local_138 + 4,0x43960000,0x41f00000,0x44160000);
        *(undefined4 *)(param_1 + 0x7c) = uVar13;
        if (local_138[4] != 0) {
          FMemory::Free();
        }
        local_138[6] = 0;
        local_138[7] = 0x1d;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138 + 6,0);
        FGenericPlatformString::Memcpy(local_138[6],L"NumPlayersToFetchFromWhisper",0x3a);
        uVar13 = FUN_142afb390(lVar11,local_138 + 6,100,0,200);
        *(undefined4 *)(param_1 + 0x80) = uVar13;
        if (local_138[6] != 0) {
          FMemory::Free();
        }
        local_138[8] = 0;
        local_138[9] = 0x25;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138 + 8,0);
        FGenericPlatformString::Memcpy(local_138[8],L"NumPlayersToFetchFromWhisperPerFetch",0x4a);
        uVar13 = FUN_142afb390(lVar11,local_138 + 8,3,0,0x32);
        *(undefined4 *)(param_1 + 0x84) = uVar13;
        if (local_138[8] != 0) {
          FMemory::Free();
        }
        local_138[10] = 0;
        local_138[0xb] = 0x25;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138 + 10,0);
        FGenericPlatformString::Memcpy(local_138[10],L"NumEventsPerPlayerToFetchFromWhisper",0x4a);
        uVar13 = FUN_142afb390(lVar11,local_138 + 10,0x32,0,200);
        *(undefined4 *)(param_1 + 0x88) = uVar13;
        if (local_138[10] != 0) {
          FMemory::Free();
        }
        local_138[0xc] = 0;
        local_138[0xd] = 0x1a;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138 + 0xc,0);
        FGenericPlatformString::Memcpy(local_138[0xc],L"bGearSoldByFriendsEnabled",0x34);
        uVar7 = FUN_142afaf00(lVar11,local_138 + 0xc,1);
        *(undefined1 *)(param_1 + 0x8c) = uVar7;
        if (local_138[0xc] != 0) {
          FMemory::Free();
        }
        local_138[0xe] = 0;
        local_138[0xf] = 0x1c;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138 + 0xe,0);
        FGenericPlatformString::Memcpy(local_138[0xe],L"WhisperDelayJitter_Statuses",0x38);
        uVar13 = FUN_142afb1f0(lVar11,local_138 + 0xe,0x40400000,0,0x42f00000);
        *(undefined4 *)(param_1 + 0x90) = uVar13;
        if (local_138[0xe] != 0) {
          FMemory::Free();
        }
        local_138[0x10] = 0;
        local_138[0x11] = 0x1c;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138 + 0x10,0);
        FGenericPlatformString::Memcpy(local_138[0x10],L"FetchStatusFromWhisperDelay",0x38);
        uVar13 = FUN_142afb1f0(lVar11,local_138 + 0x10,0x43960000,0x41f00000,0x44160000);
        *(undefined4 *)(param_1 + 0x94) = uVar13;
        if (local_138[0x10] != 0) {
          FMemory::Free();
        }
        local_138[0x12] = 0;
        local_138[0x13] = 0x19;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138 + 0x12,0);
        FGenericPlatformString::Memcpy(local_138[0x12],L"SendStatusToWhisperDelay",0x32);
        uVar13 = FUN_142afb1f0(lVar11,local_138 + 0x12,0x43340000,0x41f00000,0x44160000);
        *(undefined4 *)(param_1 + 0x98) = uVar13;
        if (local_138[0x12] != 0) {
          FMemory::Free();
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar10 + 1;
        lVar11 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar10)(plVar10);
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
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_70 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  fVar14 = (float)FGenericPlatformMath::SRand();
  *(float *)(param_1 + 0x78) = fVar14 * *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x78);
  fVar14 = (float)FGenericPlatformMath::SRand();
  *(float *)(param_1 + 0x7c) = fVar14 * *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x7c);
  fVar14 = (float)FGenericPlatformMath::SRand();
  *(float *)(param_1 + 0x98) = fVar14 * *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x98);
  fVar14 = (float)FGenericPlatformMath::SRand();
  *(float *)(param_1 + 0x94) = fVar14 * *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x94);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 140dbdaa0 FUN_140dbdaa0 body=70 status=ok
// SIG undefined FUN_140dbdaa0(void)

undefined4 FUN_140dbdaa0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x14);
    lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
    if (lVar3 != 0) {
      return *(undefined4 *)(lVar3 + 0x798);
    }
  }
  return 0;
}



// FUNCTION 140dbdaf0 FUN_140dbdaf0 body=194 status=ok
// SIG undefined FUN_140dbdaf0(void)

void FUN_140dbdaf0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  lVar3 = *(longlong *)(lVar3 + 400);
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
    if ((bVar1) && (0 < (int)param_1[0xd])) {
      lVar4 = param_1[0xc];
      uVar5 = FUN_140bb7630(lVar3);
      cVar2 = FUN_140d85050(uVar5,lVar4 + 8,param_3,param_4);
      if (cVar2 != '\0') {
        return;
      }
    }
  }
  FUN_1404d1700(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140dbdbc0 FUN_140dbdbc0 body=1670 status=ok
// SIG undefined FUN_140dbdbc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dbdbc0(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res18 [8];
  int local_1c8;
  undefined1 local_1c4 [4];
  longlong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0 [2];
  longlong *local_1a0;
  longlong *local_198;
  undefined **local_190;
  longlong *local_188;
  longlong *plStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined **local_168;
  longlong *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [8];
  undefined1 local_138 [40];
  undefined1 local_110 [64];
  longlong local_d0;
  longlong local_b8;
  longlong local_30;
  
  switch(param_3) {
  case 0x17:
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x36,param_1);
    break;
  case 0x18:
    plVar13 = (longlong *)param_4[1];
    if ((undefined1 *)plVar13[1] < (undefined1 *)*plVar13 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_res18,1);
    }
    else {
      local_res18[0] = *(undefined1 *)*plVar13;
      *plVar13 = *plVar13 + 1;
    }
    uVar6 = local_res18[0];
    if ((((int)param_1[0x39] == 0) || ((longlong *)param_1[0x38] == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(*(longlong *)param_1[0x38] + 0x18))(), cVar7 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      if ((int)param_1[0x39] == 0) {
        (**(code **)(_DAT_00000000 + 0x40))(0,param_1,uVar6);
      }
      else {
        (**(code **)(*(longlong *)param_1[0x38] + 0x40))((longlong *)param_1[0x38],param_1,uVar6);
      }
    }
    break;
  case 0x1a:
    plVar13 = param_1 + 0x33;
    puVar3 = *(undefined1 **)param_4[1];
    if ((undefined1 *)((undefined8 *)param_4[1])[1] < puVar3 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,plVar13,1);
    }
    else {
      *(undefined1 *)plVar13 = *puVar3;
      *(longlong *)param_4[1] = *(longlong *)param_4[1] + 1;
    }
    lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar11 = *(longlong *)(lVar11 + 400);
    if (lVar11 != 0) {
      lVar10 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar10 = *plVar13;
        bVar5 = false;
        *(int *)(lVar11 + 0xccc) = *(int *)(lVar11 + 0xccc) + 1;
        iVar12 = *(int *)(lVar11 + 0xccc);
        iVar8 = *(int *)(lVar11 + 0xcc0) + -1;
        lVar15 = (longlong)iVar8;
        if (-1 < iVar8) {
          lVar14 = lVar15 << 4;
          bVar5 = false;
          do {
            lVar4 = *(longlong *)(lVar11 + 0xcb8);
            if (((*(int *)(lVar14 + 8 + lVar4) == 0) ||
                (plVar13 = *(longlong **)(lVar14 + lVar4), plVar13 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar13 + 0x40))(plVar13,(char)lVar10), cVar7 == '\0')) {
              bVar5 = true;
            }
            lVar14 = lVar14 + -0x10;
            lVar15 = lVar15 + -1;
          } while (-1 < lVar15);
          iVar12 = *(int *)(lVar11 + 0xccc);
        }
        *(int *)(lVar11 + 0xccc) = iVar12 + -1;
        if (bVar5) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                    ((longlong *)(lVar11 + 0xcb8),0);
        }
      }
    }
    break;
  case 0x1b:
    local_1b0[0] = 0;
    local_1b0[1] = 0;
    FUN_14158ce90(param_4,local_1b0);
    lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar11 = *(longlong *)(lVar11 + 400);
    if (lVar11 != 0) {
      lVar10 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        uVar9 = FUN_140dbc5d0(lVar11 + 0x5f0,local_1c4);
        FUN_140bace80(lVar11,uVar9,local_1b0);
      }
    }
    if (local_1b0[0] != 0) {
      FMemory::Free();
    }
    break;
  case 0x1c:
    FUN_140da87c0(local_138);
    FUN_140daa0d0(param_4,local_138);
    if ((((int)param_1[0x3b] == 0) || ((longlong *)param_1[0x3a] == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(*(longlong *)param_1[0x3a] + 0x18))(), cVar7 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      if ((int)param_1[0x3b] == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = (longlong *)param_1[0x3a];
      }
      (**(code **)(*plVar13 + 0x40))(plVar13,param_1,local_138);
    }
    if (local_30 != 0) {
      FMemory::Free();
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
    if (local_d0 != 0) {
      FMemory::Free();
    }
    FUN_1404bf980(local_110);
    FUN_1404bf980(local_138);
    break;
  case 0x1d:
    local_178 = 0;
    local_170 = 0;
    local_190 = &PTR_FUN_143f740c8;
    local_188 = (longlong *)0x0;
    plStack_180 = (longlong *)0x0;
    FUN_1425da060(param_4,&local_190);
    if ((local_188 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*local_188 + 0x20))(), cVar7 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar11 = *(longlong *)(lVar11 + 400);
      if (lVar11 != 0) {
        lVar10 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          local_1a0 = local_188;
          local_198 = plStack_180;
          if (plStack_180 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
            UNLOCK();
          }
          FUN_140bdaee0(lVar11,&local_1a0);
          plVar13 = local_198;
          if (local_198 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_198 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_198)(local_198);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              iVar12 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
        }
      }
    }
    FUN_1404bf980(&local_190);
    break;
  case 0x1f:
    local_150 = 0;
    local_148 = 0;
    local_140[0] = 0;
    local_160 = (longlong *)0x0;
    uStack_158 = 0;
    local_168 = &PTR_FUN_143f740c8;
    FUN_1425da060(param_4,&local_168);
    plVar13 = (longlong *)param_4[1];
    if ((undefined1 *)plVar13[1] < (undefined1 *)*plVar13 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_140,1);
    }
    else {
      local_140[0] = *(undefined1 *)*plVar13;
      *plVar13 = *plVar13 + 1;
    }
    if ((local_160 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*local_160 + 0x20))(), cVar7 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar11 = *(longlong *)(lVar11 + 400);
      if (lVar11 != 0) {
        lVar10 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          FUN_140bdaf40(lVar11,&local_168);
        }
      }
    }
    FUN_1404bf980(&local_168);
    break;
  case 0x20:
    plVar13 = (longlong *)param_4[1];
    if ((int *)plVar13[1] < (int *)*plVar13 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,&local_1c8,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_4,&local_1c8,4);
      }
    }
    else {
      local_1c8 = *(int *)*plVar13;
      *plVar13 = *plVar13 + 4;
    }
    if (-1 < local_1c8) {
      lVar11 = (**(code **)(*param_1 + 0x148))();
      lVar11 = *(longlong *)(lVar11 + 400);
      if (lVar11 != 0) {
        lVar10 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          FUN_1411f58b0(lVar11 + 0x7a0,local_1c8);
        }
      }
    }
  case 0x21:
    local_1c0 = 0;
    local_1b8 = 0;
    FUN_14158ce90(param_4,&local_1c0);
    if (1 < (int)local_1b8) {
      lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar11 = *(longlong *)(lVar11 + 400);
      if ((lVar11 != 0) && (cVar7 = FUN_140c2da80(lVar11), cVar7 != '\0')) {
        FUN_1411fbe40(lVar11 + 0x7a0,&local_1c0);
      }
    }
    if (local_1c0 != 0) {
      FMemory::Free();
    }
  default:
    FUN_1404d1700(param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 140dbe280 FUN_140dbe280 body=1427 status=ok
// SIG undefined FUN_140dbe280(void)

void FUN_140dbe280(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int local_res18 [4];
  undefined4 local_a8;
  undefined4 local_a4 [3];
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *plStack_30;
  
  plVar7 = (longlong *)0x0;
  local_res18[0] = 0;
  if (param_3 == 0x19) {
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x198,param_1);
    return;
  }
  if (param_3 != 0x1e) {
    FUN_1404d1700();
    return;
  }
  plVar5 = (longlong *)param_4[1];
  if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
    (**(code **)(*param_4 + 0x50))(param_4,local_res18,4);
    if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_4,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(int *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  local_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  plVar5 = plVar7;
  if (local_res18[0] == 0) {
    plVar4 = (longlong *)param_4[1];
    if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_a4,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_4,local_a4,4);
      }
    }
    else {
      local_a4[0] = *(undefined4 *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar6 = (longlong *)operator_new(0x18);
    plVar4 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0x10);
      local_78 = plVar7;
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_1445515c0;
        *(undefined4 *)(plVar5 + 1) = local_a4[0];
        local_78 = plVar5;
      }
      plVar5 = (longlong *)operator_new(0x18);
      local_70 = plVar7;
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
        plVar5[2] = (longlong)local_78;
        local_70 = plVar5;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
      *(undefined4 *)plVar6 = 0;
      plVar6[1] = (longlong)local_78;
      plVar6[2] = (longlong)local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      plVar4 = plVar6;
      plVar5 = (longlong *)0x1;
    }
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *plVar6 = (longlong)&PTR_DestroyObject_144554230;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      plVar6[2] = (longlong)plVar4;
      plVar7 = plVar6;
    }
    local_40 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_48,plVar4,plVar4);
    local_48 = 0;
    local_98 = plVar4;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_90,&local_40);
    plVar4 = local_40;
    plVar7 = local_70;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar7 = local_70;
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
          plVar7 = local_70;
        }
      }
    }
joined_r0x000140dbe6e0:
    if (plVar5 == (longlong *)0x0) goto LAB_140dbe719;
  }
  else {
    if (local_res18[0] == 2) {
      plVar4 = (longlong *)param_4[1];
      if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
        (**(code **)(*param_4 + 0x50))(param_4,&local_a8,4);
        if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_4,&local_a8,4);
        }
      }
      else {
        local_a8 = *(undefined4 *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = (longlong *)operator_new(0x18);
      if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)operator_new(0x10);
        local_88 = plVar7;
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)&PTR_FUN_1445515c0;
          *(undefined4 *)(plVar5 + 1) = local_a8;
          local_88 = plVar5;
        }
        plVar5 = (longlong *)operator_new(0x18);
        local_80 = plVar7;
        if (plVar5 != (longlong *)0x0) {
          *(undefined4 *)(plVar5 + 1) = 1;
          *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
          plVar5[2] = (longlong)local_88;
          local_80 = plVar5;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
        *(undefined4 *)plVar4 = 2;
        plVar4[1] = (longlong)local_88;
        plVar4[2] = (longlong)local_80;
        plVar5 = (longlong *)0x2;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
      }
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 != (longlong *)0x0) {
        *(undefined4 *)(plVar6 + 1) = 1;
        *plVar6 = (longlong)&PTR_DestroyObject_144554230;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        plVar6[2] = (longlong)plVar4;
        plVar7 = plVar6;
      }
      local_50 = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_58,plVar4,plVar4);
      local_58 = 0;
      local_98 = plVar4;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_90,&local_50);
      plVar4 = local_50;
      plVar7 = local_80;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_50 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar7 = local_80;
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
            plVar7 = local_80;
          }
        }
      }
      goto joined_r0x000140dbe6e0;
    }
    if (local_res18[0] != 3) {
      return;
    }
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)plVar4 = 3;
      plVar4[1] = 0;
      plVar4[2] = 0;
      plVar5 = plVar4;
    }
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_DestroyObject_144554230;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      plVar4[2] = (longlong)plVar5;
      plVar7 = plVar4;
    }
    local_60 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_68,plVar5,plVar5);
    local_68 = 0;
    local_98 = plVar5;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_90,&local_60);
    plVar7 = local_60;
  }
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
LAB_140dbe719:
  plVar7 = plStack_90;
  if (local_98 != (longlong *)0x0) {
    local_38 = local_98;
    plStack_30 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
    }
    FUN_1404cb7e0(param_1 + 0x1a8,param_1,&local_38);
    plVar5 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_30 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      plVar7 = plStack_90;
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar7 = plStack_90;
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
          plVar7 = plStack_90;
        }
      }
    }
  }
  plVar5 = plStack_90;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar7 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  return;
}



// FUNCTION 140dbe820 FUN_140dbe820 body=319 status=ok
// SIG undefined FUN_140dbe820(void)

void FUN_140dbe820(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  lVar6 = *(longlong *)(lVar6 + 400);
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
      uVar8 = FUN_1404d0440(param_2,local_48);
      uVar9 = FUN_140bb7630(lVar6);
      cVar5 = FUN_140d85050(uVar9,uVar8,param_3,param_4);
      local_48[0] = &PTR_FUN_143f740c8;
      if (local_30 != 0) {
        FMemory::Free();
      }
      local_48[0] = &PTR_FUN_143f73d18;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      if (cVar5 != '\0') {
        return;
      }
    }
  }
  FUN_1404d1bf0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140dbe960 FUN_140dbe960 body=1097 status=ok
// SIG undefined FUN_140dbe960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dbe960(longlong *param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_res18 [16];
  undefined **local_1a8;
  longlong *local_1a0;
  longlong *plStack_198;
  longlong local_190;
  undefined8 local_188;
  undefined **local_180;
  longlong *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  longlong *local_148;
  undefined1 local_138 [40];
  undefined1 local_110 [64];
  longlong local_d0;
  longlong local_b8;
  longlong local_30;
  
  if (param_3 == 0x16) {
    plVar9 = (longlong *)param_4[1];
    if ((undefined1 *)plVar9[1] < (undefined1 *)*plVar9 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_res18,1);
    }
    else {
      local_res18[0] = *(undefined1 *)*plVar9;
      *plVar9 = *plVar9 + 1;
    }
    uVar5 = local_res18[0];
    if ((((int)param_1[0x32] == 0) || ((longlong *)param_1[0x31] == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*(longlong *)param_1[0x31] + 0x18))(), cVar6 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if ((int)param_1[0x32] == 0) {
        (**(code **)(_DAT_00000000 + 0x40))(0,param_1,uVar5);
        return;
      }
      (**(code **)(*(longlong *)param_1[0x31] + 0x40))((longlong *)param_1[0x31],param_1,uVar5);
      return;
    }
  }
  else {
    if (param_3 == 0x1c) {
      FUN_140da87c0(local_138);
      FUN_140daa0d0(param_4,local_138);
      FUN_140da7140(param_1,1,0x1c,local_138);
      if ((((int)param_1[0x34] == 0) || ((longlong *)param_1[0x33] == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*(longlong *)param_1[0x33] + 0x18))(), cVar6 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if ((int)param_1[0x34] == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)param_1[0x33];
        }
        (**(code **)(*plVar9 + 0x40))(plVar9,param_1,local_138);
      }
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_b8 != 0) {
        FMemory::Free();
      }
      if (local_d0 != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(local_110);
      FUN_1404bf980(local_138);
      return;
    }
    if (param_3 == 0x1d) {
      local_190 = 0;
      local_188 = 0;
      local_1a8 = &PTR_FUN_143f740c8;
      local_1a0 = (longlong *)0x0;
      plStack_198 = (longlong *)0x0;
      FUN_1425da060(param_4,&local_1a8);
      if ((local_1a0 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*local_1a0 + 0x20))(), cVar6 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar7 = *(longlong *)(lVar7 + 400);
        if (lVar7 != 0) {
          lVar8 = FUN_14141f270();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            local_150 = local_1a0;
            local_148 = plStack_198;
            if (plStack_198 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_198 + 1) = (int)plStack_198[1] + 1;
              UNLOCK();
            }
            FUN_140bdaee0(lVar7,&local_150);
            plVar9 = local_148;
            if (local_148 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_148 + 1;
              lVar7 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_148)(local_148);
                LOCK();
                piVar2 = (int *)((longlong)plVar9 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
            }
          }
        }
        FUN_140da6f50(param_1,0,0x1d,&local_1a8);
      }
      local_1a8 = &PTR_FUN_143f740c8;
      if (local_190 != 0) {
        FMemory::Free();
      }
      plVar9 = plStack_198;
      local_1a8 = &PTR_FUN_143f73d18;
      if (plStack_198 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_198 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_198)(plStack_198);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    else if (param_3 == 0x1f) {
      local_168 = 0;
      local_160 = 0;
      local_158[0] = 0;
      local_178 = (longlong *)0x0;
      uStack_170 = 0;
      local_180 = &PTR_FUN_143f740c8;
      FUN_1425da060(param_4,&local_180);
      plVar9 = (longlong *)param_4[1];
      if ((undefined1 *)plVar9[1] < (undefined1 *)*plVar9 + 1) {
        (**(code **)(*param_4 + 0x50))(param_4,local_158,1);
      }
      else {
        local_158[0] = *(undefined1 *)*plVar9;
        *plVar9 = *plVar9 + 1;
      }
      if ((local_178 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*local_178 + 0x20))(), cVar6 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar7 = *(longlong *)(lVar7 + 400);
        if (lVar7 != 0) {
          lVar8 = FUN_14141f270();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            FUN_140bdaf40(lVar7,&local_180);
          }
        }
        FUN_140da7330(param_1,1,0x1f,&local_180);
      }
      FUN_1404bf980(&local_180);
    }
    else {
      FUN_1404d1bf0(param_1);
    }
  }
  return;
}



// FUNCTION 140dbedb0 FUN_140dbedb0 body=965 status=ok
// SIG undefined FUN_140dbedb0(void)

void FUN_140dbedb0(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int local_res18 [2];
  longlong *plStack_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 *local_68;
  longlong *plStack_60;
  undefined **local_58 [2];
  longlong *local_48;
  longlong local_40;
  
  plVar10 = (longlong *)0x0;
  local_res18[0] = 0;
  bVar4 = false;
  bVar3 = false;
  if (param_3 == 0x1e) {
    plVar9 = (longlong *)param_4[1];
    if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_res18,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_4,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(int *)*plVar9;
      *plVar9 = *plVar9 + 4;
    }
    plStack_90 = (longlong *)0x0;
    if (local_res18[0] == 1) {
      puVar6 = (undefined4 *)operator_new(0x18);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        plVar7 = (longlong *)operator_new(0x30);
        plVar9 = plVar10;
        bVar4 = false;
        if (plVar7 != (longlong *)0x0) {
          lVar8 = FUN_1404d0440(param_2,local_58);
          *plVar7 = (longlong)&PTR_FUN_1445515b8;
          plVar7[1] = (longlong)&PTR_FUN_143f73d18;
          plVar7[2] = *(longlong *)(lVar8 + 8);
          lVar8 = *(longlong *)(lVar8 + 0x10);
          plVar7[3] = lVar8;
          if (lVar8 != 0) {
            LOCK();
            *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            UNLOCK();
          }
          plVar7[1] = (longlong)&PTR_FUN_143f740c8;
          plVar7[4] = 0;
          plVar7[5] = 0;
          plVar9 = plVar7;
          bVar4 = true;
        }
        plVar7 = (longlong *)operator_new(0x18);
        local_80 = plVar10;
        if (plVar7 != (longlong *)0x0) {
          *(undefined4 *)(plVar7 + 1) = 1;
          *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
          plVar7[2] = (longlong)plVar9;
          local_80 = plVar7;
        }
        local_88 = plVar9;
        SharedPointerInternals::EnableSharedFromThis(&local_88,plVar9,plVar9);
        *puVar6 = 1;
        bVar3 = true;
        *(longlong **)(puVar6 + 2) = local_88;
        *(longlong **)(puVar6 + 4) = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
      }
      plVar9 = (longlong *)operator_new(0x18);
      local_70 = plVar10;
      if (plVar9 != (longlong *)0x0) {
        *(undefined4 *)(plVar9 + 1) = 1;
        *plVar9 = (longlong)&PTR_DestroyObject_144554230;
        *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
        plVar9[2] = (longlong)puVar6;
        local_70 = plVar9;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_78,puVar6,puVar6);
      local_78 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_90,&local_70);
      plVar9 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_70 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar9 = local_80;
      if ((bVar3) && (local_80 != (longlong *)0x0)) {
        LOCK();
        plVar7 = local_80 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      if (bVar4) {
        local_58[0] = &PTR_FUN_143f740c8;
        if (local_40 != 0) {
          FMemory::Free();
        }
        local_58[0] = &PTR_FUN_143f73d18;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_48 + 1;
          lVar8 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar1 = (int *)((longlong)local_48 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_48 + 8))(local_48,1);
            }
          }
        }
      }
      plVar9 = plStack_90;
      if (puVar6 != (undefined4 *)0x0) {
        plStack_60 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
          UNLOCK();
        }
        local_68 = puVar6;
        if (((*(int *)(param_1 + 0x178) != 0) &&
            (*(longlong **)(param_1 + 0x170) != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x18))(), cVar5 != '\0')) {
          if (*(int *)(param_1 + 0x178) != 0) {
            plVar10 = *(longlong **)(param_1 + 0x170);
          }
          (**(code **)(*plVar10 + 0x40))(plVar10,param_1,&local_68);
        }
        plVar10 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_60 + 1;
          lVar8 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          plVar9 = plStack_90;
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_60)(plStack_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar9 = plStack_90;
            if (iVar2 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
              plVar9 = plStack_90;
            }
          }
        }
      }
      plVar10 = plStack_90;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar9 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_90 + 8))(plStack_90,1);
          }
        }
      }
    }
  }
  else {
    FUN_1404d1bf0();
  }
  return;
}



// FUNCTION 140dbf180 FUN_140dbf180 body=686 status=ok
// SIG undefined FUN_140dbf180(void)

void FUN_140dbf180(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [64];
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if (param_2 == lVar6) {
    lVar6 = (**(code **)(*param_1 + 0x2b0))(param_1);
    if (lVar6 != 0) {
      lVar7 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FText::FText(local_90);
        cVar5 = FText::IsEmpty(param_1 + 0x33);
        if (cVar5 == '\0') {
          FText::operator=(local_90,param_1 + 0x33);
          uVar8 = FUN_1404b03b0();
          FText::operator=(param_1 + 0x33,uVar8);
        }
        cVar5 = FText::IsEmpty(local_90);
        if (cVar5 != '\0') {
          uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_78,L"Connection Error",L"OakOnlineSessionClient",
                             L"ConnectionError");
          FText::operator=(local_90,uVar8);
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_70 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
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
        FText::FText(local_a8);
        param_1 = param_1 + 0x36;
        cVar5 = FText::IsEmpty(param_1);
        if (cVar5 == '\0') {
          FText::operator=(local_a8,param_1);
          uVar8 = FUN_1404b03b0();
          FText::operator=(param_1,uVar8);
        }
        cVar5 = FText::IsEmpty(local_a8);
        if (cVar5 != '\0') {
          uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_60,L"An error was encountered.",L"OakOnlineSessionClient",
                             L"GenericFailure");
          FText::operator=(local_a8,uVar8);
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_58 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar2 = (int *)((longlong)local_58 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_58 + 8))(local_58,1);
              }
            }
          }
        }
        uVar8 = FUN_140b99a50(local_48,local_90,local_a8);
        FUN_140bbf3a0(lVar6,uVar8);
        FUN_140b9cdd0(local_48);
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
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
        }
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_88 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
    }
  }
  else {
    FUN_142876830(DAT_146b17150,param_2,param_3);
  }
  return;
}



// FUNCTION 140dbf430 FUN_140dbf430 body=194 status=ok
// SIG undefined FUN_140dbf430(void)

void FUN_140dbf430(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_20;
  longlong *local_18 [2];
  
  local_18[0] = (longlong *)param_2[1];
  local_20 = *param_2;
  if (local_18[0] != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18[0] + 1) = (int)local_18[0][1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x50) = param_3;
  if ((undefined8 *)(param_1 + 0x58) != &local_20) {
    *(undefined8 *)(param_1 + 0x58) = local_20;
    local_20 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (param_1 + 0x60,local_18,param_3,local_18[0],param_3);
  }
  plVar5 = local_18[0];
  if (local_18[0] != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18[0] + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18[0])(local_18[0]);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18[0] + 8))(local_18[0],1);
      }
    }
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 140dbf500 FUN_140dbf500 body=200 status=ok
// SIG undefined FUN_140dbf500(void)

void FUN_140dbf500(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar5 = (**(code **)(*param_1 + 0x2b0))();
  if (lVar5 != 0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar7 = FUN_140bb9ce0(lVar5,local_28,param_4,param_5);
      FText::operator=(param_1 + 0x36,uVar7);
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
    }
  }
  return;
}



// FUNCTION 140dbf5d0 FUN_140dbf5d0 body=1596 status=ok
// SIG undefined FUN_140dbf5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dbf5d0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  short *psVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_298 [32];
  undefined2 local_278;
  longlong local_268;
  ulonglong local_260;
  longlong local_258 [2];
  undefined4 *local_248;
  undefined1 *puStack_240;
  undefined4 *local_238;
  ulonglong *puStack_230;
  undefined8 local_228;
  longlong local_220;
  undefined8 local_218;
  longlong local_210;
  undefined4 *local_208;
  undefined1 *puStack_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
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
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined4 local_e0 [2];
  undefined8 local_d8;
  longlong *local_c8;
  char local_b8;
  undefined1 local_b0 [8];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_298;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_1a8,L"Travel Failed",L"OakOnlineSessionClient",L"TravelFailed");
  FText::operator=(param_1 + 0x198,uVar7);
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1a0 + 1;
    lVar13 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar1 = (int *)((longlong)local_1a0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
  if (param_3 - 2U < 2) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_178,
                       L"You cannot travel to the map the host is currently in. You do not have the necessary {0}|platform(default=add-ons, xbox=add-ons, playstation=add-ons, stadia=add-ons) installed."
                       ,L"OakOnlineSessionClient",L"TravelFailed_PackageMissing");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_130,uVar7);
    local_248 = local_e0;
    local_e0[0] = 0;
    puStack_240 = local_b0;
    local_228 = *puVar8;
    local_220 = puVar8[1];
    local_b8 = '\0';
    local_d8 = 0;
    if (local_220 != 0) {
      LOCK();
      *(int *)(local_220 + 8) = *(int *)(local_220 + 8) + 1;
      UNLOCK();
    }
    local_208 = local_248;
    puStack_200 = puStack_240;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1f8,&local_208);
    uVar7 = FText::Format(local_190,&local_228,uVar7);
    FText::FText(local_1d8,uVar7);
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_188 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar1 = (int *)((longlong)local_188 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_188 + 8))(local_188,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1f8);
    if (local_b8 != '\0') {
      local_b8 = '\0';
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_c8 + 1;
        lVar13 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
    }
    plVar5 = (longlong *)puVar8[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FText::operator=(param_1 + 0x1b0,local_1d8);
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1d0 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)local_1d0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_170 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)local_170 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
  }
  else {
    local_258[0] = 0;
    local_258[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_258,0);
    local_278 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_258[0],8,"{0} {1}");
    psVar9 = (short *)FUN_140dd5860(param_3);
    local_268 = 0;
    local_260 = 0;
    if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
      lVar13 = -1;
      do {
        lVar13 = lVar13 + 1;
      } while (psVar9[lVar13] != 0);
      uVar12 = (int)lVar13 + 1;
      local_260 = (ulonglong)uVar12;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
      }
      FGenericPlatformString::Memcpy(local_268,psVar9,(longlong)(int)uVar12 * 2);
    }
    lVar13 = FText::FromString(local_110,param_4);
    local_248 = (undefined4 *)lVar13;
    lVar10 = FText::FromString(local_f8,&local_268);
    uVar7 = FText::FromString(local_148,local_258);
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_120,uVar7);
    local_a8[0] = 4;
    FText::FText(local_98,lVar10);
    local_80 = 1;
    local_78 = 4;
    FText::FText(local_68,lVar13);
    local_238 = local_a8;
    local_50 = 1;
    puStack_230 = local_48;
    local_218 = *puVar8;
    local_210 = puVar8[1];
    if (local_210 != 0) {
      LOCK();
      *(int *)(local_210 + 8) = *(int *)(local_210 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1e8,&local_238);
    uVar7 = FText::Format(local_160,&local_218,uVar7);
    FText::FText(local_1c0,uVar7);
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_158 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar1 = (int *)((longlong)local_158 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_158 + 8))(local_158,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1e8);
    lVar13 = 2;
    pcVar11 = &stack0xffffffffffffffe0;
    do {
      lVar13 = lVar13 + -1;
      pcVar3 = pcVar11 + -0x30;
      if (*pcVar3 != '\0') {
        *pcVar3 = '\0';
        plVar5 = *(longlong **)(pcVar11 + -0x40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      pcVar11 = pcVar3;
    } while (lVar13 != 0);
    plVar5 = (longlong *)puVar8[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(lVar10 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)((longlong)local_248 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FText::operator=(param_1 + 0x1b0,local_1c0);
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1b8 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar1 = (int *)((longlong)local_1b8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_140 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)local_140 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
    if (local_268 != 0) {
      FMemory::Free();
    }
    if (local_258[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140dbfc10 FUN_140dbfc10 body=80 status=ok
// SIG undefined FUN_140dbfc10(void)

undefined8 FUN_140dbfc10(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  lVar1 = lVar3 + (longlong)(int)param_1[1] * 0x28;
  while( true ) {
    if (lVar3 == lVar1) {
      return 0;
    }
    cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x10);
    if (cVar2 != '\0') break;
    lVar3 = lVar3 + 0x28;
  }
  return 1;
}



// FUNCTION 140dbfc60 FUN_140dbfc60 body=120 status=ok
// SIG undefined FUN_140dbfc60(void)

bool FUN_140dbfc60(undefined8 *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = FUN_140bb7870(*param_1);
  if (lVar4 == 0) {
    return false;
  }
  cVar1 = FUN_1404d2e60(lVar4);
  if (cVar1 == '\0') {
    cVar2 = FUN_140bca8a0(*param_1);
    if (cVar2 == '\0') {
      iVar3 = FUN_1404cfb00(lVar4);
      return 0 < iVar3;
    }
  }
  return (bool)cVar1;
}



// FUNCTION 140dbfcf0 FUN_140dbfcf0 body=345 status=ok
// SIG undefined FUN_140dbfcf0(void)

void FUN_140dbfcf0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  longlong local_18 [2];
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  lVar5 = FUN_142b45e90();
  puVar6 = (undefined8 *)
           FOnlineSubsystemEOS::GetLeaderboardsInterface(*(undefined8 *)(lVar5 + 0x18),local_28);
  if ((undefined8 *)(param_1 + 0x18) != puVar6) {
    *(undefined8 *)(param_1 + 0x18) = *puVar6;
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,puVar6 + 1);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  FUN_140dbd320(param_1);
  *(undefined8 *)(param_1 + 0x40) = 0;
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    plVar7[1] = param_1;
    *plVar7 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar7[2] = (longlong)FUN_140db9520;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar5;
  }
  plVar2 = (longlong *)(param_1 + 0x60);
  if (local_18 != plVar2) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x68) != 0) &&
         (plVar4 = (longlong *)*plVar2, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar2 != 0) {
          lVar5 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar5;
        }
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar2);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar5 = FMemory::Realloc(plVar7,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  return;
}



// FUNCTION 140dbfe50 FUN_140dbfe50 body=2652 status=ok
// SIG undefined FUN_140dbfe50(void)

void FUN_140dbfe50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_1e8;
  int local_1e0;
  longlong *local_1d8;
  int local_1d0;
  longlong *local_1c8;
  int local_1c0;
  longlong *local_1b8;
  int local_1b0;
  longlong *local_1a8;
  int local_1a0;
  longlong *local_198;
  int local_190;
  longlong *local_188;
  int local_180;
  longlong *local_178;
  int local_170;
  longlong *local_168;
  int local_160;
  longlong *local_158;
  int local_150;
  longlong *local_148;
  int local_140;
  longlong *local_138;
  int local_130;
  longlong *local_128;
  int local_120;
  longlong *local_118;
  int local_110;
  longlong *local_108;
  int local_100;
  longlong *local_f8;
  int local_f0;
  longlong *local_e8;
  int local_e0;
  longlong *local_d8;
  int local_d0;
  longlong *local_c8;
  int local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  
  puVar4 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  FUN_1404d0c50(local_b8,*puVar4);
  plVar5 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_b0 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  plVar5 = (longlong *)FUN_140da5970(&local_e8,param_1,FUN_140dca4a0);
  if (((int)plVar5[1] != 0) && (*plVar5 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146533130,1);
    if (((int)plVar5[1] != 0) && (plVar7 = (longlong *)*plVar5, plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
    }
    iVar2 = DAT_146533138;
    lVar8 = (longlong)DAT_146533138;
    DAT_146533138 = DAT_146533138 + 1;
    if (DAT_14653313c < DAT_146533138) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146533130,iVar2);
    }
    plVar7 = (longlong *)(lVar8 * 0x10 + DAT_146533130);
    *plVar7 = 0;
    *plVar7 = *plVar5;
    *plVar5 = 0;
    *(int *)(plVar7 + 1) = (int)plVar5[1];
    *(undefined4 *)(plVar5 + 1) = 0;
  }
  if (local_e0 == 0) {
LAB_140dbff9c:
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
    goto LAB_140dbff9c;
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar3 == '\0') {
    return;
  }
  uVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
  plVar5 = *(longlong **)(lVar8 + 0xae8);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_140da5ad0(&local_d8,param_1,FUN_140dc4b90);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x38))(plVar5,local_res18,uVar6);
  *(undefined8 *)(param_1 + 0x370) = *puVar4;
  if (local_d0 == 0) {
LAB_140dc004e:
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  else if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x28))(local_d8,0);
    if (local_d8 != (longlong *)0x0) {
      local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
    }
    local_d0 = 0;
    goto LAB_140dc004e;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_140da5d90(&local_1e8,param_1,FUN_140dc4030);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x138))(plVar5,local_res20,uVar6);
  *(undefined8 *)(param_1 + 0x378) = *puVar4;
  if (local_1e0 == 0) {
LAB_140dc00d0:
    if (local_1e8 != (longlong *)0x0) {
      FMemory::Free(local_1e8);
    }
  }
  else if (local_1e8 != (longlong *)0x0) {
    (**(code **)(*local_1e8 + 0x28))(local_1e8,0);
    if (local_1e8 != (longlong *)0x0) {
      local_1e8 = (longlong *)FMemory::Realloc(local_1e8,0,0);
    }
    local_1e0 = 0;
    goto LAB_140dc00d0;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_140531690(&local_f8,param_1,FUN_140dc49e0);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0xd8))(plVar5,local_30,uVar6);
  *(undefined8 *)(param_1 + 0x380) = *puVar4;
  if (local_f0 == 0) {
LAB_140dc014b:
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
    goto LAB_140dc014b;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_140da5c30(&local_108,param_1,FUN_140dc44a0);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x158))(plVar5,local_40,uVar6);
  *(undefined8 *)(param_1 + 0x388) = *puVar4;
  if (local_100 == 0) {
LAB_140dc01c6:
    if (local_108 != (longlong *)0x0) {
      FMemory::Free(local_108);
    }
  }
  else if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x28))(local_108,0);
    if (local_108 != (longlong *)0x0) {
      local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
    }
    local_100 = 0;
    goto LAB_140dc01c6;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_140da5c30(&local_118,param_1,FUN_140dc5020);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x178))(plVar5,local_48,uVar6);
  *(undefined8 *)(param_1 + 0x398) = *puVar4;
  if (local_110 == 0) {
LAB_140dc0241:
    if (local_118 != (longlong *)0x0) {
      FMemory::Free(local_118);
    }
  }
  else if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x28))(local_118,0);
    if (local_118 != (longlong *)0x0) {
      local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
    }
    local_110 = 0;
    goto LAB_140dc0241;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_140da5ef0(&local_128,param_1,FUN_140dc4da0);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x1f8))(plVar5,local_50,uVar6);
  *(undefined8 *)(param_1 + 0x3a0) = *puVar4;
  if (local_120 == 0) {
LAB_140dc02bc:
    if (local_128 != (longlong *)0x0) {
      FMemory::Free(local_128);
    }
  }
  else if (local_128 != (longlong *)0x0) {
    (**(code **)(*local_128 + 0x28))(local_128,0);
    if (local_128 != (longlong *)0x0) {
      local_128 = (longlong *)FMemory::Realloc(local_128,0,0);
    }
    local_120 = 0;
    goto LAB_140dc02bc;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_1405317f0(&local_138,param_1,FUN_140dc3e50);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x58))(plVar5,local_58,uVar6);
  *(undefined8 *)(param_1 + 0x3a8) = *puVar4;
  if (local_130 == 0) {
LAB_140dc0334:
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
  }
  else if (local_138 != (longlong *)0x0) {
    (**(code **)(*local_138 + 0x28))(local_138,0);
    if (local_138 != (longlong *)0x0) {
      local_138 = (longlong *)FMemory::Realloc(local_138,0,0);
    }
    local_130 = 0;
    goto LAB_140dc0334;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_140da5ad0(&local_148,param_1,FUN_140dc3e00);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x78))(plVar5,local_60,uVar6);
  *(undefined8 *)(param_1 + 0x3b0) = *puVar4;
  if (local_140 == 0) {
LAB_140dc03ac:
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
  }
  else if (local_148 != (longlong *)0x0) {
    (**(code **)(*local_148 + 0x28))(local_148,0);
    if (local_148 != (longlong *)0x0) {
      local_148 = (longlong *)FMemory::Realloc(local_148,0,0);
    }
    local_140 = 0;
    goto LAB_140dc03ac;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_140da5ad0(&local_158,param_1,&LAB_140dc3820);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x2f8))(plVar5,local_68,uVar6);
  *(undefined8 *)(param_1 + 0x3d0) = *puVar4;
  if (local_150 == 0) {
LAB_140dc0427:
    if (local_158 != (longlong *)0x0) {
      FMemory::Free(local_158);
    }
  }
  else if (local_158 != (longlong *)0x0) {
    (**(code **)(*local_158 + 0x28))(local_158,0);
    if (local_158 != (longlong *)0x0) {
      local_158 = (longlong *)FMemory::Realloc(local_158,0,0);
    }
    local_150 = 0;
    goto LAB_140dc0427;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_1405317f0(&local_168,param_1,&LAB_140dc3ea0);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x338))(plVar5,local_70,uVar6);
  *(undefined8 *)(param_1 + 0x3d8) = *puVar4;
  if (local_160 == 0) {
LAB_140dc04a2:
    if (local_168 != (longlong *)0x0) {
      FMemory::Free(local_168);
    }
  }
  else if (local_168 != (longlong *)0x0) {
    (**(code **)(*local_168 + 0x28))(local_168,0);
    if (local_168 != (longlong *)0x0) {
      local_168 = (longlong *)FMemory::Realloc(local_168,0,0);
    }
    local_160 = 0;
    goto LAB_140dc04a2;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_140da5ad0(&local_178,param_1,&LAB_140dc3eb0);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x358))(plVar5,local_78,uVar6);
  *(undefined8 *)(param_1 + 0x3e0) = *puVar4;
  if (local_170 == 0) {
LAB_140dc051d:
    if (local_178 != (longlong *)0x0) {
      FMemory::Free(local_178);
    }
  }
  else if (local_178 != (longlong *)0x0) {
    (**(code **)(*local_178 + 0x28))(local_178,0);
    if (local_178 != (longlong *)0x0) {
      local_178 = (longlong *)FMemory::Realloc(local_178,0,0);
    }
    local_170 = 0;
    goto LAB_140dc051d;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_1405317f0(&local_188,param_1,FUN_140dc3ec0);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x378))(plVar5,local_80,uVar6);
  *(undefined8 *)(param_1 + 1000) = *puVar4;
  if (local_180 == 0) {
LAB_140dc0598:
    if (local_188 != (longlong *)0x0) {
      FMemory::Free(local_188);
    }
  }
  else if (local_188 != (longlong *)0x0) {
    (**(code **)(*local_188 + 0x28))(local_188,0);
    if (local_188 != (longlong *)0x0) {
      local_188 = (longlong *)FMemory::Realloc(local_188,0,0);
    }
    local_180 = 0;
    goto LAB_140dc0598;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_140da5ad0(&local_198,param_1,FUN_140dc3770);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x218))(plVar5,local_88,uVar6);
  *(undefined8 *)(param_1 + 0x3f0) = *puVar4;
  if (local_190 == 0) {
LAB_140dc061a:
    if (local_198 != (longlong *)0x0) {
      FMemory::Free(local_198);
    }
  }
  else if (local_198 != (longlong *)0x0) {
    (**(code **)(*local_198 + 0x28))(local_198,0);
    if (local_198 != (longlong *)0x0) {
      local_198 = (longlong *)FMemory::Realloc(local_198,0,0);
    }
    local_190 = 0;
    goto LAB_140dc061a;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_140da5ad0(&local_1a8,param_1,&LAB_140dc3760);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x238))(plVar5,local_90,uVar6);
  *(undefined8 *)(param_1 + 0x3f8) = *puVar4;
  if (local_1a0 == 0) {
LAB_140dc0699:
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
  }
  else if (local_1a8 != (longlong *)0x0) {
    (**(code **)(*local_1a8 + 0x28))(local_1a8,0);
    if (local_1a8 != (longlong *)0x0) {
      local_1a8 = (longlong *)FMemory::Realloc(local_1a8,0,0);
    }
    local_1a0 = 0;
    goto LAB_140dc0699;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_140da5ad0(&local_1b8,param_1,FUN_140dc54b0);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 600))(plVar5,local_98,uVar6);
  *(undefined8 *)(param_1 + 0x400) = *puVar4;
  if (local_1b0 == 0) {
LAB_140dc0718:
    if (local_1b8 != (longlong *)0x0) {
      FMemory::Free(local_1b8);
    }
  }
  else if (local_1b8 != (longlong *)0x0) {
    (**(code **)(*local_1b8 + 0x28))(local_1b8,0);
    if (local_1b8 != (longlong *)0x0) {
      local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
    }
    local_1b0 = 0;
    goto LAB_140dc0718;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_140da5ad0(&local_1c8,param_1,&LAB_140dc3840);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x278))(plVar5,local_a0,uVar6);
  *(undefined8 *)(param_1 + 0x408) = *puVar4;
  if (local_1c0 == 0) {
LAB_140dc0797:
    if (local_1c8 != (longlong *)0x0) {
      FMemory::Free(local_1c8);
    }
  }
  else if (local_1c8 != (longlong *)0x0) {
    (**(code **)(*local_1c8 + 0x28))(local_1c8,0);
    if (local_1c8 != (longlong *)0x0) {
      local_1c8 = (longlong *)FMemory::Realloc(local_1c8,0,0);
    }
    local_1c0 = 0;
    goto LAB_140dc0797;
  }
  lVar8 = *plVar5;
  uVar6 = FUN_140da5ad0(&local_1d8,param_1,FUN_140dc3860);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x298))(plVar5,local_a8,uVar6);
  *(undefined8 *)(param_1 + 0x410) = *puVar4;
  if (local_1d0 != 0) {
    if (local_1d8 == (longlong *)0x0) goto LAB_140dc0823;
    (**(code **)(*local_1d8 + 0x28))(local_1d8,0);
    if (local_1d8 != (longlong *)0x0) {
      local_1d8 = (longlong *)FMemory::Realloc(local_1d8,0,0);
    }
    local_1d0 = 0;
  }
  if (local_1d8 != (longlong *)0x0) {
    FMemory::Free(local_1d8);
  }
LAB_140dc0823:
  lVar8 = *plVar5;
  uVar6 = FUN_140da5ad0(&local_c8,param_1,FUN_140dc39b0);
  puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x3b8))(plVar5,local_38,uVar6);
  *(undefined8 *)(param_1 + 0x418) = *puVar4;
  if (local_c0 != 0) {
    if (local_c8 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_c8 + 0x28))(local_c8,0);
    if (local_c8 != (longlong *)0x0) {
      local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
    }
    local_c0 = 0;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}



// FUNCTION 140dc08b0 FUN_140dc08b0 body=112 status=ok
// SIG undefined FUN_140dc08b0(void)

void FUN_140dc08b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_108 [232];
  undefined1 local_20 [24];
  
  FUN_140db9ba0(local_108);
  FUN_140dd6ba0(local_108);
  plVar1 = (longlong *)FUN_1413c6930();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  DAT_14686ee10 = *(undefined4 *)(lVar2 + 0xf0);
  FUN_140b9c710(local_20);
  FUN_140b9d5e0(local_108);
  return;
}



// FUNCTION 140dc0920 FUN_140dc0920 body=517 status=ok
// SIG undefined FUN_140dc0920(void)

void FUN_140dc0920(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  longlong local_68 [6];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  *(undefined8 *)(param_1 + 0x30) = param_2;
  lVar2 = FUN_1407fccd0();
  if (lVar2 != 0) {
    uVar6 = 0;
    local_38 = FUN_140dc5ea0;
    uStack_30 = 0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_30;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_2c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x48,1);
      puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
      iVar1 = *(int *)(lVar2 + 0x50);
      uVar6 = *puVar5;
      *(int *)(lVar2 + 0x50) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x54) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x48,iVar1);
      }
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x48));
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    local_68[4] = 0;
    local_68[5] = 0;
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    FConfigCacheIni::GetString(DAT_1468b6148,L"Discord",L"DiscordAppId",local_68 + 4,&DAT_1468e2360)
    ;
    FConfigCacheIni::GetString(DAT_1468b6148,L"Discord",L"SteamAppId",local_68 + 2,&DAT_1468e2360);
    puVar5 = &DAT_1468e2360;
    FConfigCacheIni::GetString(DAT_1468b6148,L"Discord",L"EpicAppId",local_68,&DAT_1468e2360);
    FUN_1407fd450(lVar2,local_68 + 4,local_68 + 2,local_68,(ulonglong)puVar5 & 0xffffffffffffff00);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_68[2] != 0) {
      FMemory::Free();
    }
    if (local_68[4] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140dc0b30 FUN_140dc0b30 body=52 status=ok
// SIG undefined FUN_140dc0b30(void)

void FUN_140dc0b30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FString::operator=(param_1 + 0x1a0,param_3);
  FUN_1404d3a70(param_1,param_2);
  return;
}



// FUNCTION 140dc0b70 FUN_140dc0b70 body=468 status=ok
// SIG undefined FUN_140dc0b70(void)

void FUN_140dc0b70(longlong param_1)

{
  wchar_t _C;
  wint_t wVar1;
  wint_t wVar2;
  int iVar3;
  undefined1 *puVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 local_128 [232];
  longlong local_40;
  undefined8 local_38;
  
  FUN_140da8520(local_128);
  lVar11 = *(longlong *)(param_1 + 0x28);
  local_40 = 0;
  local_38 = 0;
  lVar9 = (longlong)*(int *)(param_1 + 0x30) * 0x128 + lVar11;
  while( true ) {
    if (lVar11 == lVar9) {
      FUN_140dd6ba0(local_128);
      FUN_140b9c710(&local_40);
      FUN_140b9d5e0(local_128);
      return;
    }
    puVar10 = *(undefined8 **)(lVar11 + 0x108);
    puVar7 = puVar10 + (longlong)*(int *)(lVar11 + 0x110) * 2;
    if (puVar10 != puVar7) break;
LAB_140dc0c7b:
    lVar6 = (longlong)(int)local_38;
    iVar3 = (int)local_38 + 1;
    local_38 = CONCAT44(local_38._4_4_,iVar3);
    if (local_38._4_4_ < iVar3) {
      FUN_140a131a0(&local_40);
    }
    _guard_xfg_dispatch_icall_nop((void *)(local_40 + lVar6 * 0xe8),0,0xe8);
    puVar4 = (undefined1 *)(local_40 + lVar6 * 0xe8);
LAB_140dc0ccf:
    FUN_140db9eb0(puVar4);
    lVar11 = lVar11 + 0x128;
  }
LAB_140dc0c10:
  if (*(int *)(puVar10 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*puVar10;
  }
  pwVar5 = L"campaign";
  do {
    _C = *(wchar_t *)((longlong)(puVar8 + -0xa22a1334) + (longlong)pwVar5);
    if ((_C == L'\0') && (*pwVar5 == L'\0')) goto LAB_140dc0d3d;
    if (_C != *pwVar5) {
      wVar1 = towlower(_C);
      wVar2 = towlower(*pwVar5);
      if (wVar1 != wVar2) break;
    }
    pwVar5 = pwVar5 + 1;
  } while( true );
  if (wVar1 == wVar2) {
LAB_140dc0d3d:
    puVar4 = local_128;
    goto LAB_140dc0ccf;
  }
  puVar10 = puVar10 + 2;
  if (puVar10 == puVar7) goto LAB_140dc0c7b;
  goto LAB_140dc0c10;
}



// FUNCTION 140dc0d50 FUN_140dc0d50 body=107 status=ok
// SIG undefined FUN_140dc0d50(void)

void FUN_140dc0d50(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x14);
    lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
    if (lVar3 != 0) {
      uVar4 = *(undefined4 *)(lVar3 + 0x798);
      goto LAB_140dc0d91;
    }
  }
  uVar4 = 0;
LAB_140dc0d91:
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  return;
}



// FUNCTION 140dc0dc0 FUN_140dc0dc0 body=165 status=ok
// SIG undefined FUN_140dc0dc0(void)

void FUN_140dc0dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  longlong *local_18;
  
  puVar6 = (undefined8 *)FName::FName(local_28,L"SPARK",1);
  FUN_1404d0c50(&local_20,*puVar6);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x1d8))(local_20,param_2,0x11f,param_3);
  }
  plVar5 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 140dc0e70 FUN_140dc0e70 body=165 status=ok
// SIG undefined FUN_140dc0e70(void)

void FUN_140dc0e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  longlong *local_18;
  
  puVar6 = (undefined8 *)FName::FName(local_28,L"SPARK",1);
  FUN_1404d0c50(&local_20,*puVar6);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x1e0))(local_20,param_2,0x11f,param_3);
  }
  plVar5 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 140dc0f20 FUN_140dc0f20 body=88 status=ok
// SIG undefined FUN_140dc0f20(void)

ulonglong FUN_140dc0f20(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *param_1;
  uVar2 = uVar1 + (longlong)(int)param_1[1] * 0x28;
  uVar3 = uVar1;
  do {
    if (uVar3 == uVar2) {
LAB_140dc0f46:
      return uVar2 & 0xffffffffffffff00;
    }
    if (*(char *)(uVar3 + 0x20) == '\0') {
      if (uVar3 != uVar2) {
        lVar4 = uVar3 - uVar1;
        uVar2 = -(lVar4 >> 0x3f);
        iVar5 = (int)(lVar4 / 0x28) + (int)(lVar4 >> 0x3f) + (int)uVar2;
        if ((-1 < iVar5) && (iVar5 < (int)param_1[1])) {
          return 1;
        }
      }
      goto LAB_140dc0f46;
    }
    uVar3 = uVar3 + 0x28;
  } while( true );
}



// FUNCTION 140dc0f80 FUN_140dc0f80 body=51 status=ok
// SIG undefined FUN_140dc0f80(void)

undefined1 FUN_140dc0f80(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x14);
    uVar3 = FUN_140bc9f60(uVar1);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140dc0fc0 FUN_140dc0fc0 body=58 status=ok
// SIG undefined FUN_140dc0fc0(void)

bool FUN_140dc0fc0(undefined8 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  puVar2 = &DAT_143f3eda8;
  if (DAT_14686f3c8 != 0) {
    puVar2 = DAT_14686f3c0;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  return iVar1 == 0;
}



// FUNCTION 140dc1000 FUN_140dc1000 body=237 status=ok
// SIG undefined FUN_140dc1000(void)

undefined8 FUN_140dc1000(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  plVar2 = (longlong *)FUN_1413c6930();
  lVar6 = plVar2[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar6 = plVar2[0x1f];
    if (lVar6 == 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_1;
  }
  if (*(int *)(lVar6 + 0x30) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)(lVar6 + 0x28);
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
  if (iVar1 != 0) {
    puVar5 = *(undefined8 **)(lVar6 + 0xe0);
    puVar7 = puVar5 + (longlong)*(int *)(lVar6 + 0xe8) * 0x17;
    while( true ) {
      if (puVar5 == puVar7) {
        return 0;
      }
      if (*(int *)(param_1 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_1;
      }
      if (*(int *)(puVar5 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*puVar5;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
      if (iVar1 == 0) break;
      puVar5 = puVar5 + 0x17;
    }
    return 1;
  }
  return 1;
}



// FUNCTION 140dc10f0 FUN_140dc10f0 body=415 status=ok
// SIG undefined FUN_140dc10f0(void)

undefined1 FUN_140dc10f0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined **_Src;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined **local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined ***local_20;
  
  local_58 = &PTR_LAB_144554200;
  local_20 = &local_58;
  iVar4 = FUN_140db9680(param_2,param_1);
  if ((iVar4 < 0) || ((int)param_1[1] <= iVar4)) {
    if (local_20 != (undefined ***)0x0) {
      (*(code *)(*local_20)[4])
                (local_20,CONCAT71((int7)((ulonglong)&local_58 >> 8),local_20 != &local_58));
    }
    uVar3 = 0;
    if (param_2 != 0) {
      local_58 = (undefined **)0x0;
      local_50 = 0;
      FWeakObjectPtr::operator=(&local_48,0);
      FWeakObjectPtr::operator=(&local_40,0);
      local_38 = 1;
      FWeakObjectPtr::operator=(&local_40,param_2);
      iVar4 = (int)param_1[1];
      lVar5 = (longlong)iVar4;
      local_38 = 0;
      *(int *)(param_1 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
        FUN_140d979d0(param_1,iVar4);
      }
      _Src = local_58;
      lVar2 = *param_1;
      *(undefined8 *)(lVar2 + lVar5 * 0x28) = 0;
      lVar6 = (longlong)(int)local_50;
      *(int *)(lVar2 + 8 + lVar5 * 0x28) = (int)local_50;
      puVar1 = (undefined8 *)(lVar2 + lVar5 * 0x28);
      if ((int)local_50 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,local_50 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,lVar6 << 2);
      }
      *(undefined4 *)(puVar1 + 2) = local_48;
      *(undefined4 *)((longlong)puVar1 + 0x14) = local_44;
      *(undefined4 *)(puVar1 + 3) = local_40;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = local_3c;
      *(undefined1 *)(puVar1 + 4) = local_38;
      if (local_58 != (undefined **)0x0) {
        FMemory::Free();
      }
    }
  }
  else {
    if (local_20 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    uVar3 = (*(code *)(*local_20)[2])(local_20,*param_1 + (longlong)iVar4 * 0x28);
    if (local_20 != (undefined ***)0x0) {
      (*(code *)(*local_20)[4])
                (local_20,CONCAT71((int7)((ulonglong)&local_58 >> 8),local_20 != &local_58));
    }
  }
  return uVar3;
}



// FUNCTION 140dc1290 FUN_140dc1290 body=149 status=ok
// SIG undefined FUN_140dc1290(void)

uint FUN_140dc1290(longlong *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  undefined **local_48 [7];
  undefined ***local_10;
  
  if ((int)param_2 < 0) {
    return param_2 & 0xffffff00;
  }
  local_48[0] = &PTR_LAB_1445541d0;
  local_10 = local_48;
  iVar2 = FUN_140db9600(param_2,param_1);
  if ((iVar2 < 0) || ((int)param_1[1] <= iVar2)) {
    FUN_1407dffb0(local_48,0);
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_140dd7b40(local_48,*param_1 + (longlong)iVar2 * 0x28);
    if (local_10 != (undefined ***)0x0) {
      (*(code *)(*local_10)[4])
                (local_10,CONCAT71((int7)((ulonglong)local_48 >> 8),local_10 != local_48));
      return (uint)bVar1;
    }
  }
  return (uint)bVar1;
}



// FUNCTION 140dc1330 FUN_140dc1330 body=80 status=ok
// SIG undefined FUN_140dc1330(void)

undefined4 FUN_140dc1330(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = FUN_140dbc360();
  if (0 < iVar1) {
    lVar3 = FUN_140db9720(param_1 + 0x60);
    if (lVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(lVar3 + 0xa0);
    }
    iVar2 = FUN_140dbc780(param_1);
    if (iVar1 <= iVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140dc1380 FUN_140dc1380 body=150 status=ok
// SIG undefined FUN_140dc1380(void)

undefined1 FUN_140dc1380(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  cVar1 = FUN_140dc18f0();
  if (cVar1 != '\0') {
    cVar1 = FUN_140daa6a0(&DAT_14686f2c0,param_1);
    if ((cVar1 == '\0') || (DAT_14686f3b0 != *(int *)(param_1 + 0xf0))) {
      return 1;
    }
    lVar2 = *(longlong *)(param_1 + 0xe8);
    lVar4 = DAT_14686f3a8;
    for (iVar3 = DAT_14686f3b0; iVar3 != 0; iVar3 = iVar3 + -1) {
      cVar1 = FUN_140daa6a0(lVar4,lVar2);
      if (cVar1 == '\0') {
        return 1;
      }
      lVar4 = lVar4 + 0xe8;
      lVar2 = lVar2 + 0xe8;
    }
  }
  return 0;
}



// FUNCTION 140dc1420 FUN_140dc1420 body=103 status=ok
// SIG undefined FUN_140dc1420(void)

undefined1 FUN_140dc1420(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x14);
    cVar2 = FUN_140bcae30(uVar1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  if (((*(longlong *)(param_1 + 0x338) == 0) && (*(longlong *)(param_1 + 800) == 0)) &&
     (*(longlong *)(param_1 + 0x350) == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 140dc1490 FUN_140dc1490 body=106 status=ok
// SIG undefined FUN_140dc1490(void)

undefined8 FUN_140dc1490(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + -0x1c);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
    cVar2 = UObjectBaseUtility::IsTemplate(param_1 + -0x28,0x30);
    if (cVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140dc1500 FUN_140dc1500 body=1006 status=ok
// SIG undefined FUN_140dc1500(void)

undefined8 FUN_140dc1500(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  lVar4 = FName::GetNames();
  if (*param_1 < 0) {
    return 0;
  }
  if (*(int *)(lVar4 + 0x400) <= *param_1) {
    return 0;
  }
  iVar3 = *param_1;
  uVar8 = iVar3 >> 0x1f & 0x3fff;
  uVar2 = iVar3 + uVar8;
  if (*(longlong *)
       (*(longlong *)(lVar4 + (longlong)((int)uVar2 >> 0xe) * 8) +
       (longlong)(int)((uVar2 & 0x3fff) - uVar8) * 8) == 0) {
    return 0;
  }
  if (iVar3 < 0) {
    return 0;
  }
  if (*(int *)(lVar4 + 0x400) <= iVar3) {
    return 0;
  }
  uVar8 = *param_1 >> 0x1f & 0x3fff;
  uVar2 = *param_1 + uVar8;
  if (*(longlong *)
       (*(longlong *)(lVar4 + (longlong)((int)uVar2 >> 0xe) * 8) +
       (longlong)(int)((uVar2 & 0x3fff) - uVar8) * 8) == 0) {
    return 0;
  }
  lVar4 = FName::GetNames();
  if (param_1[2] < 0) {
    return 0;
  }
  if (*(int *)(lVar4 + 0x400) <= param_1[2]) {
    return 0;
  }
  iVar3 = param_1[2];
  uVar8 = iVar3 >> 0x1f & 0x3fff;
  uVar2 = iVar3 + uVar8;
  if (*(longlong *)
       (*(longlong *)(lVar4 + (longlong)((int)uVar2 >> 0xe) * 8) +
       (longlong)(int)((uVar2 & 0x3fff) - uVar8) * 8) == 0) {
    return 0;
  }
  if (iVar3 < 0) {
    return 0;
  }
  if (*(int *)(lVar4 + 0x400) <= iVar3) {
    return 0;
  }
  uVar8 = param_1[2] >> 0x1f & 0x3fff;
  uVar2 = param_1[2] + uVar8;
  if (*(longlong *)
       (*(longlong *)(lVar4 + (longlong)((int)uVar2 >> 0xe) * 8) +
       (longlong)(int)((uVar2 & 0x3fff) - uVar8) * 8) == 0) {
    return 0;
  }
  lVar4 = FName::GetNames();
  if (param_1[4] < 0) {
    return 0;
  }
  if (*(int *)(lVar4 + 0x400) <= param_1[4]) {
    return 0;
  }
  iVar3 = param_1[4];
  uVar8 = iVar3 >> 0x1f & 0x3fff;
  uVar2 = iVar3 + uVar8;
  if (*(longlong *)
       (*(longlong *)(lVar4 + (longlong)((int)uVar2 >> 0xe) * 8) +
       (longlong)(int)((uVar2 & 0x3fff) - uVar8) * 8) == 0) {
    return 0;
  }
  if (iVar3 < 0) {
    return 0;
  }
  if (*(int *)(lVar4 + 0x400) <= iVar3) {
    return 0;
  }
  uVar8 = param_1[4] >> 0x1f & 0x3fff;
  uVar2 = param_1[4] + uVar8;
  if (*(longlong *)
       (*(longlong *)(lVar4 + (longlong)((int)uVar2 >> 0xe) * 8) +
       (longlong)(int)((uVar2 & 0x3fff) - uVar8) * 8) == 0) {
    return 0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
  puVar9 = (undefined8 *)0x0;
  puVar7 = puVar9;
  puVar10 = puVar9;
  if (lVar4 != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x600);
    puVar10 = *(undefined8 **)(lVar4 + 0x5f8);
  }
  puVar11 = puVar9;
  if ((puVar10 != (undefined8 *)0x0) && (lVar4 = *(longlong *)(param_1 + 2), puVar10[5] != 0)) {
    lVar5 = FUN_1414406f0();
    for (lVar1 = puVar10[5]; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar5) {
        if (lVar4 != 0) {
          if (*(int *)(puVar10 + 7) == *(int *)((longlong)puVar10 + 100)) goto LAB_140dc1820;
          puVar6 = (undefined8 *)puVar10[0xe];
          if ((undefined8 *)puVar10[0xe] == (undefined8 *)0x0) {
            puVar6 = puVar10 + 0xd;
          }
          iVar3 = *(int *)((longlong)puVar6 +
                          ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                          (longlong)*(int *)(puVar10 + 0xf) - 1U) * 4);
          if (iVar3 == -1) goto LAB_140dc1820;
          goto LAB_140dc1800;
        }
        break;
      }
    }
  }
  goto LAB_140dc1762;
  while (iVar3 = *(int *)(puVar6 + 2), iVar3 != -1) {
LAB_140dc1890:
    puVar6 = (undefined8 *)(puVar7[6] + (longlong)iVar3 * 0x18);
    if (*(longlong *)(puVar7[6] + (longlong)iVar3 * 0x18) == lVar4) {
      if (iVar3 != -1) goto LAB_140dc18b3;
      break;
    }
  }
LAB_140dc18b0:
  puVar6 = puVar9;
LAB_140dc18b3:
  puVar7 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar7 = puVar9;
  }
  if (puVar7 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*puVar7;
  }
  goto LAB_140dc18c6;
  while (iVar3 = *(int *)(puVar6 + 2), iVar3 != -1) {
LAB_140dc1800:
    puVar6 = (undefined8 *)(puVar10[6] + (longlong)iVar3 * 0x18);
    if (*(longlong *)(puVar10[6] + (longlong)iVar3 * 0x18) == lVar4) {
      if (iVar3 != -1) goto LAB_140dc1823;
      break;
    }
  }
LAB_140dc1820:
  puVar6 = puVar9;
LAB_140dc1823:
  puVar10 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar10 = puVar9;
  }
  if (puVar10 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)*puVar10;
  }
LAB_140dc1762:
  puVar10 = puVar9;
  if ((puVar7 != (undefined8 *)0x0) && (lVar4 = *(longlong *)(param_1 + 4), puVar7[5] != 0)) {
    lVar5 = FUN_141440690();
    for (lVar1 = puVar7[5]; puVar10 = (undefined8 *)0x0, lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar5) {
        puVar10 = (undefined8 *)0x0;
        if (lVar4 != 0) {
          if (*(int *)(puVar7 + 7) == *(int *)((longlong)puVar7 + 100)) goto LAB_140dc18b0;
          puVar6 = (undefined8 *)puVar7[0xe];
          if ((undefined8 *)puVar7[0xe] == (undefined8 *)0x0) {
            puVar6 = puVar7 + 0xd;
          }
          iVar3 = *(int *)((longlong)puVar6 +
                          ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                          (longlong)*(int *)(puVar7 + 0xf) - 1U) * 4);
          if (iVar3 == -1) goto LAB_140dc18b0;
          goto LAB_140dc1890;
        }
        break;
      }
    }
  }
LAB_140dc18c6:
  if ((puVar11 != (undefined8 *)0x0) && (puVar10 != (undefined8 *)0x0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 140dc18f0 FUN_140dc18f0 body=1268 status=ok
// SIG undefined FUN_140dc18f0(void)

bool FUN_140dc18f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  longlong lVar14;
  void *pvVar15;
  undefined2 *puVar16;
  char *pcVar17;
  void *pvVar18;
  bool bVar19;
  undefined8 *puVar20;
  uint local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  bVar19 = 1 < *(int *)(param_1 + 8);
  if (1 < *(int *)(param_1 + 8)) {
    plVar7 = (longlong *)FUN_141424bc0();
    lVar9 = plVar7[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      lVar9 = plVar7[0x1f];
    }
    if (((*(int *)(param_1 + 0xa0) < 1) || (*(int *)(param_1 + 0xa4) < *(int *)(param_1 + 0xa0))) ||
       (iVar5 = FUN_142480900(lVar9), iVar5 < *(int *)(param_1 + 0xa4))) {
LAB_140dc1db8:
      bVar19 = false;
    }
    else {
      bVar19 = 0 < *(int *)(param_1 + 0x78);
      if (0 < *(int *)(param_1 + 0x78)) {
        FText::FText(local_40,param_1 + 0xb8);
        cVar4 = FText::IsEmptyOrWhitespace(local_40);
        FText::FText(local_58,param_1 + 0xd0);
        if ((cVar4 == '\0') && (cVar4 = FText::IsEmptyOrWhitespace(local_58), cVar4 == '\0')) {
          bVar19 = true;
        }
        else {
          bVar19 = false;
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_50 + 1;
          lVar9 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_38 + 1;
          lVar9 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
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
        if (bVar19 != false) {
          if (*(int *)(param_1 + 0x88) < 1) {
LAB_140dc1afd:
            pcVar13 = *(char **)(param_1 + 0x90);
            pcVar17 = pcVar13 + (longlong)*(int *)(param_1 + 0x98) * 0x30;
            for (; pcVar13 != pcVar17; pcVar13 = pcVar13 + 0x30) {
              if (((*pcVar13 == '\0') || (pcVar13[1] == '\0')) ||
                 (cVar4 = FText::IsEmpty(pcVar13 + 0x18), cVar4 != '\0')) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (!bVar3) goto LAB_140dc1db8;
            }
            lVar10 = *(longlong *)(param_1 + 0xa8);
            lVar9 = lVar10 + (longlong)*(int *)(param_1 + 0xb0) * 0x48;
            if (lVar10 != lVar9) {
              lVar10 = lVar10 + 8;
              do {
                uVar8 = *(undefined8 *)(lVar10 + -8);
                FText::FText(local_a0,lVar10);
                FText::FText(local_88,lVar10 + 0x18);
                local_68 = *(int *)(lVar10 + 0x38);
                lVar14 = (longlong)local_68;
                pvVar15 = *(void **)(lVar10 + 0x30);
                local_70 = (void *)0x0;
                if (local_68 == 0) {
                  local_64 = 0;
                }
                else {
                  TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_70,local_68,0);
                  _guard_xfg_dispatch_icall_nop(local_70,pvVar15,lVar14 << 5);
                }
                lVar14 = FName::GetNames();
                local_a8 = (uint)uVar8;
                if (((int)local_a8 < 0) || (*(int *)(lVar14 + 0x400) <= (int)local_a8)) {
LAB_140dc1c38:
                  bVar3 = false;
                }
                else {
                  uVar6 = local_a8 & 0x3fff;
                  uVar11 = local_a8;
                  if ((int)local_a8 < 0) {
                    uVar11 = local_a8 + 0x3fff;
                    uVar6 = uVar6 - 0x4000;
                  }
                  if (((*(longlong *)
                         (*(longlong *)(lVar14 + (longlong)((int)uVar11 >> 0xe) * 8) +
                         (longlong)(int)uVar6 * 8) == 0) ||
                      (*(int *)(lVar14 + 0x400) <= (int)local_a8)) ||
                     (*(longlong *)
                       (*(longlong *)(lVar14 + (longlong)((int)uVar11 >> 0xe) * 8) +
                       (longlong)(int)uVar6 * 8) == 0)) goto LAB_140dc1c38;
                  bVar3 = true;
                }
                if ((((!bVar3) || (cVar4 = FText::IsEmpty(local_a0), cVar4 != '\0')) ||
                    (cVar4 = FText::IsEmpty(local_88), cVar4 != '\0')) || (local_68 == 0)) {
                  if (local_70 != (void *)0x0) {
                    FMemory::Free();
                  }
                  if (local_80 != (longlong *)0x0) {
                    LOCK();
                    plVar7 = local_80 + 1;
                    lVar9 = *plVar7;
                    *(int *)plVar7 = (int)*plVar7 + -1;
                    UNLOCK();
                    if ((int)lVar9 == 1) {
                      (**(code **)*local_80)(local_80);
                      LOCK();
                      piVar1 = (int *)((longlong)local_80 + 0xc);
                      iVar5 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar5 == 1) {
                        (**(code **)(*local_80 + 8))(local_80,1);
                      }
                    }
                  }
                  if (local_98 == (longlong *)0x0) {
                    return false;
                  }
                  LOCK();
                  plVar7 = local_98 + 1;
                  lVar9 = *plVar7;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)lVar9 != 1) {
                    return false;
                  }
                  (**(code **)*local_98)(local_98);
                  LOCK();
                  piVar1 = (int *)((longlong)local_98 + 0xc);
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar5 != 1) {
                    return false;
                  }
                  (**(code **)(*local_98 + 8))(local_98,1);
                  return false;
                }
                pvVar18 = (void *)((longlong)local_68 * 0x20 + (longlong)local_70);
                for (pvVar15 = local_70; pvVar15 != pvVar18;
                    pvVar15 = (void *)((longlong)pvVar15 + 0x20)) {
                  cVar4 = FUN_140dc1500(pvVar15);
                  if (cVar4 == '\0') {
                    bVar19 = false;
                    break;
                  }
                }
                if (local_70 != (void *)0x0) {
                  FMemory::Free(local_70);
                }
                plVar7 = local_80;
                if (local_80 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_80 + 1;
                  lVar14 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar14 == 1) {
                    (**(code **)*local_80)(local_80);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar7 + 0xc);
                    iVar5 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      (**(code **)(*plVar7 + 8))(plVar7,1);
                    }
                  }
                }
                plVar7 = local_98;
                if (local_98 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_98 + 1;
                  lVar14 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar14 == 1) {
                    (**(code **)*local_98)(local_98);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar7 + 0xc);
                    iVar5 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      (**(code **)(*plVar7 + 8))(plVar7,1);
                    }
                  }
                }
                lVar14 = lVar10 + 0x40;
                lVar10 = lVar10 + 0x48;
              } while (lVar14 != lVar9);
            }
          }
          else {
            puVar12 = *(undefined8 **)(param_1 + 0x80);
            puVar20 = puVar12 + (longlong)*(int *)(param_1 + 0x88) * 2;
            for (; bVar19 = false, puVar12 != puVar20; puVar12 = puVar12 + 2) {
              if (1 < *(int *)(puVar12 + 1)) {
                if (*(int *)(puVar12 + 1) == 0) {
                  puVar16 = &DAT_143f3eda8;
                }
                else {
                  puVar16 = (undefined2 *)*puVar12;
                }
                uVar8 = FUN_142f47520();
                lVar9 = FUN_141799410(uVar8,0xffffffffffffffff,puVar16,0);
                if (lVar9 != 0) {
                  lVar10 = FUN_142f47520();
                  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                    bVar19 = false;
                  }
                  else {
                    bVar19 = true;
                  }
                  if (bVar19) {
                    bVar19 = true;
                    goto LAB_140dc1afd;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return bVar19;
}



// FUNCTION 140dc1df0 FUN_140dc1df0 body=31 status=ok
// SIG undefined FUN_140dc1df0(void)

void FUN_140dc1df0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140db9720();
  if (lVar1 != 0) {
    FUN_140dc18f0(lVar1);
    return;
  }
  return;
}



// FUNCTION 140dc1e10 FUN_140dc1e10 body=454 status=ok
// SIG undefined FUN_140dc1e10(void)

void FUN_140dc1e10(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res20 [8];
  undefined1 local_48 [8];
  longlong *local_40;
  int local_38;
  longlong *local_30;
  longlong *local_28;
  
  if ((*(longlong *)(param_1 + 0xe8) != 0) || (*(int *)(param_2 + 8) == 0)) {
    TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0x18,2);
    return;
  }
  puVar4 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  FUN_1404d0c50(&local_30,*puVar4);
  if (local_30 == (longlong *)0x0) {
    TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0x18,2);
    goto LAB_140dc1f6b;
  }
  local_40 = (longlong *)0x0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_38 = 3;
  local_40 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&DAT_143f3ed00;
    plVar5[2] = (longlong)FUN_140dc7780;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar4 = (undefined8 *)(**(code **)(*local_30 + 0x160))(local_30,local_48,&local_40);
  *(undefined8 *)(param_1 + 0xe8) = *puVar4;
  if (local_38 == 0) {
LAB_140dc1f3e:
    if (local_40 != (longlong *)0x0) {
      FMemory::Free(local_40);
    }
  }
  else if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x28))(local_40,0);
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)FMemory::Realloc(local_40,0,0);
    }
    local_38 = 0;
    goto LAB_140dc1f3e;
  }
  (**(code **)(*local_30 + 0x150))(local_30,param_2,0x11f,param_3);
LAB_140dc1f6b:
  plVar5 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  return;
}



// FUNCTION 140dc1fe0 FUN_140dc1fe0 body=1117 status=ok
// SIG undefined FUN_140dc1fe0(void)

void FUN_140dc1fe0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 local_res20 [8];
  longlong *local_b8;
  int local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong local_58 [2];
  longlong local_48 [2];
  
  bVar5 = false;
  bVar4 = false;
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    return;
  }
  puVar8 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  FUN_1404d0c50(&local_88,*puVar8);
  if (local_88 == (longlong *)0x0) goto LAB_140dc23dc;
  FUN_1404c0750(param_1 + 0x200,param_2);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0xb8);
  lVar9 = (**(code **)(*local_88 + 0x10))(local_88,0x11f);
  if (lVar9 == 0) {
    local_98 = 0;
    local_90 = 0;
    FUN_140dbbf60(param_1,&local_98);
    lVar9 = FWeakObjectPtr::Get(param_1 + 0x14);
    puVar8 = (undefined8 *)FUN_140da5190(lVar9 + 0x608,local_70,param_1,FUN_140dc71b0);
    *(undefined8 *)(param_1 + 0x2c8) = *puVar8;
    lVar9 = FWeakObjectPtr::Get(param_1 + 0x14);
    if ((*(longlong *)(lVar9 + 0x6d8) == 0) && ((int)local_90 != 0)) {
      puVar8 = (undefined8 *)FName::FName(local_68,L"SPARK",1);
      FUN_1404d0c50(&local_a8,*puVar8);
      if (local_a8 == (longlong *)0x0) {
        TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(lVar9 + 0x608,2);
      }
      else {
        local_b8 = (longlong *)0x0;
        plVar12 = (longlong *)FMemory::Realloc(0,0x30);
        local_b0 = 3;
        local_b8 = plVar12;
        if (plVar12 != (longlong *)0x0) {
          plVar12[1] = lVar9 + 0x5f0;
          *plVar12 = (longlong)&DAT_143f3ed00;
          plVar12[2] = (longlong)FUN_140dc7780;
          lVar13 = FDelegateHandle::GenerateNewID();
          plVar12[4] = lVar13;
          *plVar12 = (longlong)&PTR_GetPoolName_143f3ed48;
        }
        puVar8 = (undefined8 *)(**(code **)(*local_a8 + 0x160))(local_a8,local_60,&local_b8);
        *(undefined8 *)(lVar9 + 0x6d8) = *puVar8;
        if (local_b0 == 0) {
LAB_140dc238c:
          if (local_b8 != (longlong *)0x0) {
            FMemory::Free(local_b8);
          }
        }
        else if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 0x28))(local_b8,0);
          if (local_b8 != (longlong *)0x0) {
            local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
          }
          local_b0 = 0;
          goto LAB_140dc238c;
        }
        (**(code **)(*local_a8 + 0x150))(local_a8,&local_98,0x11f,param_2);
      }
      plVar12 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_a0 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
    }
    else {
      TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(lVar9 + 0x608,2);
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_98);
    goto LAB_140dc23dc;
  }
  plVar12 = *(longlong **)(lVar9 + 0xa0);
  if ((plVar12 == (longlong *)0x0) ||
     (plVar3 = *(longlong **)(param_2 + 0xa0), plVar3 == (longlong *)0x0)) {
LAB_140dc2102:
    bVar6 = false;
  }
  else {
    lVar9 = *local_88;
    bVar5 = true;
    bVar4 = true;
    uVar10 = (**(code **)(*plVar3 + 0x38))(plVar3,local_48);
    uVar11 = (**(code **)(*plVar12 + 0x38))(plVar12,local_58);
    cVar7 = (**(code **)(lVar9 + 0x1d0))(local_88,uVar11,uVar10);
    if (cVar7 == '\0') goto LAB_140dc2102;
    bVar6 = true;
  }
  if ((bVar4) && (local_58[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar5) && (local_48[0] != 0)) {
    FMemory::Free();
  }
  if (bVar6) {
    cVar7 = FWeakObjectPtr::IsValid();
    if (cVar7 != '\0') {
      uVar10 = FWeakObjectPtr::Get(param_1 + 0x14);
      cVar7 = FUN_140bca8a0(uVar10);
      if (cVar7 != '\0') {
        FUN_140dc71b0(param_1,1);
        goto LAB_140dc23dc;
      }
    }
    FUN_140dd0a90(param_1,0);
  }
  else {
    uVar10 = FWeakObjectPtr::Get(param_1 + 0x14);
    FUN_140bccf10(uVar10);
    lVar9 = FWeakObjectPtr::Get(param_1 + 0x14);
    puVar8 = (undefined8 *)FUN_140da5190(lVar9 + 0x620,local_78,param_1,FUN_140dc58f0);
    *(undefined8 *)(param_1 + 0x2c0) = *puVar8;
    lVar9 = FWeakObjectPtr::Get(param_1 + 0x14);
    if (((*(longlong *)(lVar9 + 0x6f0) == 0) && (*(longlong *)(lVar9 + 0x6e0) == 0)) &&
       (*(longlong *)(lVar9 + 0x6e8) == 0)) {
      FUN_140db7ac0(lVar9 + 0x5f0);
    }
  }
LAB_140dc23dc:
  plVar12 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_80 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 140dc2440 FUN_140dc2440 body=1843 status=ok
// SIG undefined FUN_140dc2440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc2440(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 auStack_298 [32];
  ulonglong local_278;
  longlong local_270 [2];
  longlong *local_260;
  int local_258;
  longlong local_250 [2];
  longlong *local_240;
  int local_238;
  longlong local_230 [2];
  longlong *local_220;
  int local_218;
  undefined8 local_210;
  undefined8 local_208;
  longlong local_200 [5];
  longlong *local_1d8;
  longlong *local_1d0;
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  longlong local_1a8 [2];
  longlong local_198 [2];
  undefined1 *local_188 [2];
  longlong local_178 [4];
  longlong *local_158;
  int local_148;
  undefined1 *local_138 [2];
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_278 = local_278 & 0xffffffff00000000;
  if (((*(longlong *)(param_1 + 0x1e8) != 0) || (*(longlong *)(param_1 + 0x1f0) != 0)) ||
     (*(longlong *)(param_1 + 0x1f8) != 0)) {
    local_68 = (longlong *)0x0;
    local_58 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_88);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_FUN_143f77b70;
    }
    local_200[0] = 0;
    local_98[0] = &LAB_140db2bd0;
    local_200[1] = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_200,0);
    FGenericPlatformString::Memcpy(local_200[0],L"join_matchmaking_session",0x32);
    FUN_140dcdc50(param_1,local_200,local_98);
    if (local_200[0] != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      plVar12 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar12 = local_68;
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12,0);
      }
    }
    if (local_68 == (longlong *)0x0) {
      return;
    }
    FMemory::Free();
    return;
  }
  puVar8 = (undefined8 *)FName::FName(local_1c8,L"SPARK",1);
  FUN_1404d0c50(&local_1d8,*puVar8);
  if (local_1d8 == (longlong *)0x0) {
    local_158 = (longlong *)0x0;
    local_148 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_178);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_FUN_143f77b70;
    }
    local_270[0] = 0;
    local_188[0] = &LAB_140db2a50;
    local_270[1] = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_270,0);
    FGenericPlatformString::Memcpy(local_270[0],L"join_matchmaking_session",0x32);
    FUN_140dcdc50(param_1,local_270,local_188);
    if (local_270[0] != 0) {
      FMemory::Free();
    }
    if (local_148 != 0) {
      plVar12 = local_178;
      if (local_158 != (longlong *)0x0) {
        plVar12 = local_158;
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12,0);
      }
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free();
    }
    goto LAB_140dc2a33;
  }
  FUN_1404c0750(param_1 + 0x128,param_2);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0xb8);
  local_278 = 0x120;
  lVar9 = (**(code **)(*local_1d8 + 0x10))(local_1d8,0x120);
  if (lVar9 == 0) {
    local_210 = 0;
    local_208 = 0;
    FUN_140dbbf60(param_1,&local_210);
    if (0 < (int)local_208) {
      local_b8 = (longlong *)0x0;
      local_a8 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[1] = param_1;
        *puVar8 = &PTR_FUN_143f77b70;
      }
      local_230[0] = 0;
      local_e8[0] = &LAB_140db2b50;
      local_230[1] = 0x19;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_230,0);
      FGenericPlatformString::Memcpy(local_230[0],L"join_matchmaking_session",0x32);
      FUN_140dcdc50(param_1,local_230,local_e8);
      if (local_230[0] != 0) {
        FMemory::Free();
      }
      if (local_a8 != 0) {
        plVar12 = local_d8;
        if (local_b8 != (longlong *)0x0) {
          plVar12 = local_b8;
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))(plVar12,0);
        }
      }
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
      lVar9 = *local_1d8;
      uVar10 = FUN_140da5ad0(&local_220,param_1,FUN_140dc7470);
      puVar8 = (undefined8 *)(**(code **)(lVar9 + 0x160))(local_1d8,local_1b0,uVar10);
      *(undefined8 *)(param_1 + 0x1f0) = *puVar8;
      if (local_218 == 0) {
LAB_140dc29f6:
        if (local_220 != (longlong *)0x0) {
          FMemory::Free(local_220);
        }
      }
      else if (local_220 != (longlong *)0x0) {
        (**(code **)(*local_220 + 0x28))(local_220,0);
        if (local_220 != (longlong *)0x0) {
          local_220 = (longlong *)FMemory::Realloc(local_220,0,0);
        }
        local_218 = 0;
        goto LAB_140dc29f6;
      }
      local_200[4] = 0x120;
      (**(code **)(*local_1d8 + 0x150))(local_1d8,&local_210,0x120,param_2);
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_210);
    goto LAB_140dc2a33;
  }
  iVar7 = (**(code **)(*local_1d8 + 0x378))(local_1d8);
  if (iVar7 == 1) {
    lVar9 = *local_1d8;
    uVar10 = FUN_140da5ad0(&local_260,param_1,FUN_140dc55f0);
    puVar8 = (undefined8 *)(**(code **)(lVar9 + 0x358))(local_1d8,local_1c0,uVar10);
    *(undefined8 *)(param_1 + 0x1f8) = *puVar8;
    if (local_258 != 0) {
      if (local_260 == (longlong *)0x0) goto LAB_140dc2a33;
      (**(code **)(*local_260 + 0x28))(local_260,0);
      if (local_260 != (longlong *)0x0) {
        local_260 = (longlong *)FMemory::Realloc(local_260,0,0);
      }
      local_258 = 0;
    }
    if (local_260 != (longlong *)0x0) {
      FMemory::Free(local_260);
    }
    goto LAB_140dc2a33;
  }
  plVar12 = *(longlong **)(lVar9 + 0xa0);
  bVar3 = false;
  bVar4 = false;
  if ((plVar12 == (longlong *)0x0) ||
     (plVar2 = *(longlong **)(param_2 + 0xa0), bVar3 = false, bVar4 = false,
     plVar2 == (longlong *)0x0)) {
LAB_140dc26d5:
    bVar5 = false;
  }
  else {
    lVar9 = *local_1d8;
    bVar4 = true;
    bVar3 = true;
    uVar10 = (**(code **)(*plVar2 + 0x38))(plVar2,local_198);
    uVar11 = (**(code **)(*plVar12 + 0x38))(plVar12,local_1a8);
    cVar6 = (**(code **)(lVar9 + 0x1d0))(local_1d8,uVar11,uVar10);
    if (cVar6 == '\0') goto LAB_140dc26d5;
    bVar5 = true;
  }
  if ((bVar3) && (local_1a8[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar4) && (local_198[0] != 0)) {
    FMemory::Free();
  }
  if (bVar5) {
    local_200[2] = 0x120;
    FUN_140dc7470(param_1,0x120,1);
    goto LAB_140dc2a33;
  }
  local_108 = (longlong *)0x0;
  local_f8 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_128);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = param_1;
    *puVar8 = &PTR_FUN_143f77b70;
  }
  local_250[0] = 0;
  local_138[0] = &LAB_140db2d40;
  local_250[1] = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_250,0);
  FGenericPlatformString::Memcpy(local_250[0],L"join_matchmaking_session",0x32);
  FUN_140dcdc50(param_1,local_250,local_138);
  if (local_250[0] != 0) {
    FMemory::Free();
  }
  if (local_f8 != 0) {
    plVar12 = local_128;
    if (local_108 != (longlong *)0x0) {
      plVar12 = local_108;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_140db2e80(param_1 + 0x2d8);
  lVar9 = *local_1d8;
  uVar10 = FUN_140da5ad0(&local_240,param_1,FUN_140dc5940);
  puVar8 = (undefined8 *)(**(code **)(lVar9 + 0xd8))(local_1d8,local_1b8,uVar10);
  *(undefined8 *)(param_1 + 0x1e8) = *puVar8;
  if (local_238 == 0) {
LAB_140dc286b:
    if (local_240 != (longlong *)0x0) {
      FMemory::Free(local_240);
    }
  }
  else if (local_240 != (longlong *)0x0) {
    (**(code **)(*local_240 + 0x28))(local_240,0);
    if (local_240 != (longlong *)0x0) {
      local_240 = (longlong *)FMemory::Realloc(local_240,0,0);
    }
    local_238 = 0;
    goto LAB_140dc286b;
  }
  local_200[3] = 0x120;
  (**(code **)(*local_1d8 + 0xd0))(local_1d8,0x120);
LAB_140dc2a33:
  plVar12 = local_1d0;
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1d0 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_1d0 + 8))(local_1d0,1);
      }
    }
  }
  return;
}



// FUNCTION 140dc2b80 FUN_140dc2b80 body=357 status=ok
// SIG undefined FUN_140dc2b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc2b80(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  float fStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x14);
    lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
    if (lVar3 != 0) {
      fStack_70 = *(float *)(lVar3 + 0x798);
      goto LAB_140dc2bdc;
    }
  }
  fStack_70 = 0.0;
LAB_140dc2bdc:
  local_88 = *(undefined4 *)(param_1 + 0x98);
  fStack_70 = fStack_70 - *(float *)(param_1 + 0x90);
  uStack_84 = *(undefined4 *)(param_1 + 0xa0);
  uStack_80 = *(undefined4 *)(param_1 + 0x9c);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_78 = param_1;
  puVar4 = (undefined8 *)FUN_140438ef0(0x28,local_58);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_143ff7760;
    *(undefined4 *)(puVar4 + 1) = local_88;
    *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_84;
    *(undefined4 *)(puVar4 + 2) = uStack_80;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_7c;
    puVar4[3] = local_78;
    puVar4[4] = CONCAT44(uStack_6c,fStack_70);
  }
  local_98[0] = 0;
  local_68[0] = &LAB_140db2c90;
  local_98[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
  FGenericPlatformString::Memcpy(local_98[0],L"end_matchmaking",0x20);
  FUN_140dcdc50(param_1,local_98,local_68);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
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



// FUNCTION 140dc2cf0 FUN_140dc2cf0 body=664 status=ok
// SIG undefined FUN_140dc2cf0(void)

void FUN_140dc2cf0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  void *pvVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar12;
  longlong *local_res8;
  longlong local_res20;
  ulonglong local_68;
  undefined8 local_60;
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  ulonglong uVar11;
  
  iVar4 = (int)param_1[1];
  uVar5 = 0;
  local_68 = 0;
  local_60 = (ulonglong)(uint)local_60;
  uVar8 = uVar5;
  local_res8 = param_1;
  if (0 < iVar4) {
    local_res20 = 0;
    uVar12 = uVar5;
    uVar11 = uVar5;
    do {
      iVar9 = (int)uVar11;
      if ((int)uVar12 == iVar4 + -1) {
        FString::PrintfImpl(&local_58,&DAT_1445324d4,*(undefined4 *)(local_res20 + *local_res8));
        pwVar7 = local_58;
        iVar4 = 0;
        if (local_50 != 0) {
          iVar4 = local_50 + -1;
        }
        if (iVar4 != 0) {
          uVar10 = iVar9 + (uint)(iVar9 == 0) + iVar4;
          local_60 = CONCAT44(local_60._4_4_,uVar10);
          if (local_60._4_4_ < (int)uVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar11);
            uVar8 = local_68;
            uVar10 = (uint)local_60;
          }
          pvVar6 = (void *)(((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2 + uVar8);
          _guard_xfg_dispatch_icall_nop(pvVar6,pwVar7,(longlong)iVar4 * 2);
          *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar6) = 0;
          pwVar7 = local_58;
LAB_140dc2e70:
          uVar11 = (ulonglong)uVar10;
        }
      }
      else {
        FString::PrintfImpl(&local_48,&DAT_144532d08,*(undefined4 *)(local_res20 + *local_res8));
        pwVar7 = local_48;
        iVar4 = 0;
        if (local_40 != 0) {
          iVar4 = local_40 + -1;
        }
        if (iVar4 != 0) {
          uVar10 = iVar9 + (uint)(iVar9 == 0) + iVar4;
          local_60 = CONCAT44(local_60._4_4_,uVar10);
          if (local_60._4_4_ < (int)uVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar11);
            uVar8 = local_68;
            uVar10 = (uint)local_60;
          }
          pvVar6 = (void *)(((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2 + uVar8);
          _guard_xfg_dispatch_icall_nop(pvVar6,pwVar7,(longlong)iVar4 * 2);
          *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar6) = 0;
          pwVar7 = local_48;
          goto LAB_140dc2e70;
        }
      }
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
      }
      local_res20 = local_res20 + 4;
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
      iVar4 = (int)local_res8[1];
    } while ((int)uVar10 < iVar4);
  }
  plVar1 = local_res8 + 3;
  cVar2 = FWeakObjectPtr::IsValid(plVar1);
  if (cVar2 == '\0') {
    pwVar7 = L"NULL";
    uVar12 = uVar5;
  }
  else {
    lVar3 = FWeakObjectPtr::Get(plVar1);
    local_res8 = *(longlong **)(lVar3 + 0x18);
    FName::ToString(&local_res8,&local_58);
    uVar12 = 1;
    pwVar7 = L"";
    if (local_50 != 0) {
      pwVar7 = local_58;
    }
  }
  local_68 = 0;
  local_60 = 0;
  if ((pwVar7 != (wchar_t *)0x0) && (*pwVar7 != L'\0')) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (pwVar7[lVar3] != L'\0');
    uVar10 = (int)lVar3 + 1;
    local_60 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    uVar5 = local_68;
    FGenericPlatformString::Memcpy(local_68,pwVar7,(longlong)(int)uVar10 * 2);
  }
  if ((uVar12 != 0) && (local_58 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if (uVar5 != 0) {
    FMemory::Free(uVar5);
  }
  if (uVar8 != 0) {
    FMemory::Free(uVar8);
  }
  return;
}



// FUNCTION 140dc2f90 FUN_140dc2f90 body=405 status=ok
// SIG undefined FUN_140dc2f90(void)

undefined8 FUN_140dc2f90(undefined8 *param_1)

{
  wint_t wVar1;
  wint_t wVar2;
  wint_t *pwVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_1;
  }
  for (pwVar3 = &DAT_144541984;
      (wVar1 = *(wint_t *)((longlong)(puVar4 + -0xa22a0cc2) + (longlong)pwVar3), wVar1 != 0 ||
      (*pwVar3 != 0)); pwVar3 = pwVar3 + 1) {
    if (wVar1 != *pwVar3) {
      wVar1 = towlower(wVar1);
      wVar2 = towlower(*pwVar3);
      if (wVar1 != wVar2) {
        if (wVar1 == wVar2) {
          return 1;
        }
        if (*(int *)(param_1 + 1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*param_1;
        }
        for (pwVar3 = &DAT_1445422f4;
            (wVar1 = *(wint_t *)((longlong)(puVar4 + -0xa22a117a) + (longlong)pwVar3), wVar1 != 0 ||
            (*pwVar3 != 0)); pwVar3 = pwVar3 + 1) {
          if (wVar1 != *pwVar3) {
            wVar1 = towlower(wVar1);
            wVar2 = towlower(*pwVar3);
            if (wVar1 != wVar2) {
              if (wVar1 == wVar2) {
                return 2;
              }
              if (*(int *)(param_1 + 1) == 0) {
                puVar4 = &DAT_143f3eda8;
              }
              else {
                puVar4 = (undefined2 *)*param_1;
              }
              for (pwVar3 = &DAT_144542874;
                  (wVar1 = *(wint_t *)((longlong)(puVar4 + -0xa22a143a) + (longlong)pwVar3),
                  wVar1 != 0 || (*pwVar3 != 0)); pwVar3 = pwVar3 + 1) {
                if (wVar1 != *pwVar3) {
                  wVar1 = towlower(wVar1);
                  wVar2 = towlower(*pwVar3);
                  if (wVar1 != wVar2) {
                    if (wVar1 == wVar2) {
                      return 3;
                    }
                    if (*(int *)(param_1 + 1) != 0) {
                      puVar5 = (undefined2 *)*param_1;
                    }
                    for (pwVar3 = &DAT_144542a04;
                        (wVar1 = *(wint_t *)((longlong)(puVar5 + -0xa22a1502) + (longlong)pwVar3),
                        wVar1 != 0 || (*pwVar3 != 0)); pwVar3 = pwVar3 + 1) {
                      if (wVar1 != *pwVar3) {
                        wVar1 = towlower(wVar1);
                        wVar2 = towlower(*pwVar3);
                        if (wVar1 != wVar2) {
                          if (wVar1 == wVar2) {
                            return 4;
                          }
                          return 0;
                        }
                      }
                    }
                    return 4;
                  }
                }
              }
              return 3;
            }
          }
        }
        return 2;
      }
    }
  }
  return 1;
}



// FUNCTION 140dc3130 FUN_140dc3130 body=309 status=ok
// SIG undefined FUN_140dc3130(void)

undefined8 FUN_140dc3130(undefined8 *param_1)

{
  wchar_t wVar1;
  wint_t wVar2;
  wint_t wVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  puVar6 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_1;
  }
  for (pwVar4 = L"player_level";
      (wVar1 = *(wchar_t *)((longlong)(puVar5 + -0xa22a6034) + (longlong)pwVar4), wVar1 != L'\0' ||
      (*pwVar4 != L'\0')); pwVar4 = pwVar4 + 1) {
    if (wVar1 != *pwVar4) {
      wVar2 = towlower(wVar1);
      wVar3 = towlower(*pwVar4);
      if (wVar2 != wVar3) {
        if (wVar2 == wVar3) {
          return 1;
        }
        if (*(int *)(param_1 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*param_1;
        }
        for (pwVar4 = L"plot_mission";
            (wVar1 = *(wchar_t *)((longlong)(puVar5 + -0xa22a6044) + (longlong)pwVar4),
            wVar1 != L'\0' || (*pwVar4 != L'\0')); pwVar4 = pwVar4 + 1) {
          if (wVar1 != *pwVar4) {
            wVar2 = towlower(wVar1);
            wVar3 = towlower(*pwVar4);
            if (wVar2 != wVar3) {
              if (wVar2 == wVar3) {
                return 2;
              }
              if (*(int *)(param_1 + 1) != 0) {
                puVar6 = (undefined2 *)*param_1;
              }
              for (pwVar4 = L"dlc_installed";
                  (wVar1 = *(wchar_t *)((longlong)(puVar6 + -0xa22a6054) + (longlong)pwVar4),
                  wVar1 != L'\0' || (*pwVar4 != L'\0')); pwVar4 = pwVar4 + 1) {
                if (wVar1 != *pwVar4) {
                  wVar2 = towlower(wVar1);
                  wVar3 = towlower(*pwVar4);
                  if (wVar2 != wVar3) {
                    if (wVar2 == wVar3) {
                      return 3;
                    }
                    return 0;
                  }
                }
              }
              return 3;
            }
          }
        }
        return 2;
      }
    }
  }
  return 1;
}



// FUNCTION 140dc3270 FUN_140dc3270 body=804 status=ok
// SIG undefined FUN_140dc3270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc3270(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  int local_90;
  undefined **local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar7 = *param_2;
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (lVar7 == 0) {
    if (cVar4 == '\0') {
      return;
    }
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar7 = FUN_140bb7900(uVar6);
    if (lVar7 == 0) {
      return;
    }
    uVar5 = FUN_140dbc490(param_1);
    FUN_1404e0ae0(lVar7,uVar5);
    FUN_140db86e0(param_1);
    return;
  }
  if (cVar4 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar7 = FUN_140bb7900(uVar6);
    if (lVar7 != 0) {
      thunk_FUN_1404d2ae0(lVar7);
      local_60 = *param_2;
      local_58 = (longlong *)param_2[1];
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      FUN_140dce270(param_1,&local_60);
      plVar3 = local_58;
      if (local_58 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar10 = local_58 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 != 1) {
        return;
      }
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return;
      }
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar4 == '\0') {
    return;
  }
  uVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
  lVar7 = FUN_140bb6200(uVar6);
  if (lVar7 == 0) {
    return;
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if ((cVar4 != '\0') &&
     (lVar8 = FWeakObjectPtr::Get(param_1 + 0x14), *(longlong *)(lVar8 + 0xae8) != 0)) {
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
    plVar3 = *(longlong **)(lVar8 + 0xae8);
    lVar8 = *plVar3;
    uVar6 = FUN_140da5ad0(&local_98,param_1,FUN_140dc56c0);
    puVar9 = (undefined8 *)(**(code **)(lVar8 + 0xf8))(plVar3,local_50,uVar6);
    *(undefined8 *)(param_1 + 800) = *puVar9;
    if (local_90 != 0) {
      if (local_98 == (longlong *)0x0) goto LAB_140dc342e;
      (**(code **)(*local_98 + 0x28))(local_98,0);
      if (local_98 != (longlong *)0x0) {
        local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
      }
      local_90 = 0;
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
  }
LAB_140dc342e:
  plVar3 = (longlong *)param_2[1];
  plVar10 = (longlong *)(param_1 + 0x310);
  lVar8 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_a8 = lVar8;
  plStack_a0 = plVar3;
  if (&local_a8 != plVar10) {
    local_a8 = *plVar10;
    plStack_a0 = *(longlong **)(param_1 + 0x318);
    *plVar10 = lVar8;
    *(longlong **)(param_1 + 0x318) = plVar3;
    local_48 = lVar8;
    plStack_40 = plVar3;
  }
  plVar3 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_a0 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
      }
    }
  }
  local_80 = *param_2;
  local_78 = (longlong *)param_2[1];
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  local_70 = 0;
  local_88 = &PTR_FUN_143f740c8;
  local_68 = 0;
  FUN_1404df4b0(lVar7,&local_88);
  local_88 = &PTR_FUN_143f740c8;
  if (local_70 != 0) {
    FMemory::Free();
  }
  plVar3 = local_78;
  local_88 = &PTR_FUN_143f73d18;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_78 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_78)(local_78);
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
  return;
}



// FUNCTION 140dc35a0 FUN_140dc35a0 body=354 status=ok
// SIG undefined FUN_140dc35a0(void)

void FUN_140dc35a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  if ((byte)(*(char *)(param_1 + 0x10) - 1U) < 2) {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x14);
    if (cVar5 != '\0') {
      uVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
      lVar8 = FUN_140bb7900(uVar7);
      if (lVar8 != 0) {
        uVar6 = FUN_140dbc490(param_1);
        FUN_1404e0ae0(lVar8,uVar6);
        thunk_FUN_1404d2ae0(lVar8);
        FUN_140dd5c50(param_1,param_2);
        FUN_140dcf160(param_1,0);
      }
    }
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x14);
    if (cVar5 != '\0') {
      uVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
      lVar8 = FUN_140bb6200(uVar7);
      if (lVar8 != 0) {
        FUN_140dd5c50(param_1,param_2);
        local_30 = *param_2;
        local_28 = (longlong *)param_2[1];
        if (local_28 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_28 + 1) = (int)local_28[1] + 1;
          UNLOCK();
        }
        local_38 = &PTR_FUN_143f740c8;
        local_20 = 0;
        local_18 = 0;
        FUN_1404df4c0(lVar8,&local_38);
        local_38 = &PTR_FUN_143f740c8;
        if (local_20 != 0) {
          FMemory::Free();
        }
        plVar4 = local_28;
        local_38 = &PTR_FUN_143f73d18;
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_28 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_28)(local_28);
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
    }
  }
  return;
}



// FUNCTION 140dc3710 FUN_140dc3710 body=74 status=ok
// SIG undefined FUN_140dc3710(void)

void FUN_140dc3710(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  if ((*(char *)(param_1 + 0x10) == '\x02') &&
     (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14), cVar3 != '\0')) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar2 = FUN_140bb7900(uVar1);
    if (lVar2 != 0) {
      FUN_140dd6120(param_1);
    }
  }
  return;
}



// FUNCTION 140dc3770 FUN_140dc3770 body=162 status=ok
// SIG undefined FUN_140dc3770(void)

void FUN_140dc3770(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong local_res10 [3];
  longlong local_28;
  longlong *local_20;
  undefined8 local_18;
  
  if (param_2 != 0) {
    local_20 = local_res10;
    local_res10[0] = param_2;
    local_28 = param_1;
    local_18 = param_3;
    if (*(longlong *)(param_2 + 0xc0) == DAT_14686f208) {
      if (*(char *)(param_1 + 0x10) == '\x01') {
        FUN_140db46d0();
        return;
      }
      if ((*(char *)(param_1 + 0x10) == '\x02') && (lVar1 = FUN_140dbbd70(), lVar1 != 0)) {
        FUN_140daf380(&local_28,1);
        FUN_140dcf160(param_1,1);
        return;
      }
    }
    else if (*(longlong *)(param_2 + 0xc0) == DAT_14686f220) {
      FUN_140daf380(&local_28,0);
      if (*(char *)(param_1 + 0x10) != '\x03') {
        FUN_140dcf160(param_1,1);
      }
    }
  }
  return;
}



// FUNCTION 140dc3860 FUN_140dc3860 body=327 status=ok
// SIG undefined FUN_140dc3860(void)

void FUN_140dc3860(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 local_res10;
  undefined8 local_18;
  longlong *local_10;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686f220)) {
    if ((*(longlong **)(param_3 + 8) != (longlong *)0x0) &&
       (cVar7 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar7 != '\0')) {
      local_18 = *(undefined8 *)(param_3 + 8);
      local_10 = *(longlong **)(param_3 + 0x10);
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
      }
      FUN_140dd5c50(param_1,&local_18);
      plVar4 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_10)(local_10);
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
      if (*(char *)(param_1 + 0x10) == '\x03') {
        plVar4 = *(longlong **)(param_3 + 0x10);
        cVar7 = '\x03';
        uVar5 = *(undefined8 *)(param_3 + 8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          cVar7 = *(char *)(param_1 + 0x10);
        }
        if (cVar7 == '\x03') {
          local_res10 = uVar5;
          FUN_1404bb3d0(param_1 + 0xd0,&local_res10);
          FUN_140db86e0(param_1);
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
      }
    }
    if (*(char *)(param_1 + 0x10) != '\x03') {
      FUN_140dcf160(param_1,0);
    }
  }
  return;
}



// FUNCTION 140dc39b0 FUN_140dc39b0 body=1102 status=ok
// SIG undefined FUN_140dc39b0(void)

void FUN_140dc39b0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_res10 [2];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  if (param_2 == 0) {
    return;
  }
  piVar2 = (int *)*param_3;
  iVar8 = *piVar2;
  if (iVar8 == 0) {
    lVar11 = *(longlong *)(piVar2 + 2);
    plVar3 = *(longlong **)(piVar2 + 4);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar3 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar3)();
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (lVar11 != 0) {
      FUN_140dd1240(param_1,*(undefined4 *)(lVar11 + 8));
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x14);
      cVar7 = FUN_140bca8a0(uVar9);
      if ((cVar7 == '\0') && (cVar7 = FUN_140dc0f80(param_1), cVar7 == '\0')) {
        uVar9 = FWeakObjectPtr::Get(param_1 + 0x14);
        FUN_140beacd0(uVar9,1);
      }
      else {
        local_res10[0] = 1;
        lVar10 = FUN_1404e6f10();
        lVar11 = *(longlong *)(param_2 + 0x10);
        if ((*(int *)(lVar11 + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar11 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
            lVar10 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) {
          param_2 = 0;
        }
        FUN_140da77d0(param_2,CONCAT71((int7)((ulonglong)lVar11 >> 8),1),0x1e,local_res10);
      }
      FUN_140dd0a90(param_1,3);
    }
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 != 1) {
      return;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  else if (iVar8 == 1) {
    lVar11 = *(longlong *)(piVar2 + 2);
    plVar3 = *(longlong **)(piVar2 + 4);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar3 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar3)();
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (lVar11 != 0) {
      iVar8 = FUN_1404cc400(param_2,lVar11 + 8);
      if ((iVar8 < 0) || (*(int *)(param_2 + 0x68) <= iVar8)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar11 = (longlong)iVar8 * 0x40 + *(longlong *)(param_2 + 0x60);
        if ((*(longlong **)(lVar11 + 0x10) == (longlong *)0x0) ||
           (cVar7 = (**(code **)(**(longlong **)(lVar11 + 0x10) + 0x20))(), cVar7 == '\0')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          plVar4 = *(longlong **)(lVar11 + 0x18);
          local_38 = *(undefined8 *)(lVar11 + 0x10);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          local_30 = plVar4;
          FUN_140dc9a10(param_1,&local_38);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_30)();
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
          lVar10 = *(longlong *)(lVar11 + 0x30);
          lVar11 = lVar10 + (longlong)*(int *)(lVar11 + 0x38) * 0x28;
          for (; lVar10 != lVar11; lVar10 = lVar10 + 0x28) {
            if ((*(longlong **)(lVar10 + 8) == (longlong *)0x0) ||
               (cVar7 = (**(code **)(**(longlong **)(lVar10 + 8) + 0x20))(), cVar7 == '\0')) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              plVar4 = *(longlong **)(lVar10 + 0x10);
              local_28 = *(undefined8 *)(lVar10 + 8);
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              local_20 = plVar4;
              FUN_140dc9a10(param_1,&local_28);
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar4 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_20)();
                  LOCK();
                  piVar2 = (int *)((longlong)plVar4 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*local_20 + 8))(local_20,1);
                  }
                }
              }
            }
          }
        }
      }
    }
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 != 1) {
      return;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  else {
    if (iVar8 != 2) {
      if (iVar8 != 3) {
        return;
      }
      FUN_140dd0a90(param_1,2);
      FUN_140dd1fe0(param_1);
      return;
    }
    lVar11 = *(longlong *)(piVar2 + 2);
    plVar3 = *(longlong **)(piVar2 + 4);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar3 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar3)();
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (lVar11 != 0) {
      FUN_140dd1240(param_1,*(undefined4 *)(lVar11 + 8));
    }
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 != 1) {
      return;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  if (iVar8 == 1) {
    (**(code **)(*plVar3 + 8))(plVar3,1);
  }
  return;
}



// FUNCTION 140dc3e00 FUN_140dc3e00 body=67 status=ok
// SIG undefined FUN_140dc3e00(void)

void FUN_140dc3e00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (((lVar1 != 0) && (param_2 != 0)) && (*(longlong *)(param_2 + 0xc0) == DAT_14686f228)) {
    FUN_140db56c0(lVar1,1);
    FUN_140dd5aa0(lVar1,0);
    return;
  }
  return;
}



// FUNCTION 140dc3e50 FUN_140dc3e50 body=67 status=ok
// SIG undefined FUN_140dc3e50(void)

void FUN_140dc3e50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (((lVar1 != 0) && (param_2 != 0)) && (*(longlong *)(param_2 + 0xc0) == DAT_14686f228)) {
    FUN_140db56c0(lVar1,0);
    FUN_140dd5aa0(lVar1,1);
    return;
  }
  return;
}



// FUNCTION 140dc3ec0 FUN_140dc3ec0 body=365 status=ok
// SIG undefined FUN_140dc3ec0(void)

void FUN_140dc3ec0(undefined8 param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res18 [16];
  longlong local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  puVar4 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404d0c50(&local_28,*puVar4);
  plVar6 = local_28;
  if ((local_28 != (longlong *)0x0) &&
     (iVar3 = (**(code **)(*local_28 + 0x3a8))(local_28), iVar3 == 1)) {
    FUN_140dbc950(param_1,&local_38);
    plVar5 = plStack_30;
    if (local_38 != 0) {
      local_18 = local_38;
      plStack_10 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
        plVar6 = local_28;
      }
      (**(code **)(*plVar6 + 0x380))(plVar6,&local_18);
      plVar6 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_10 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        plVar5 = plStack_30;
        if ((int)lVar2 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar5 = plStack_30;
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
            plVar5 = plStack_30;
          }
        }
      }
    }
    plVar6 = plStack_30;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar5 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
  }
  plVar6 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 140dc4030 FUN_140dc4030 body=1124 status=ok
// SIG undefined FUN_140dc4030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc4030(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 param_6)

{
  void *pvVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  longlong local_150;
  undefined8 uStack_148;
  undefined2 *local_140;
  int local_138;
  longlong local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  longlong local_108;
  longlong local_100 [2];
  void *local_f0;
  ulonglong local_e8;
  void *local_e0;
  ulonglong local_d8;
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  ulonglong local_58;
  
  if (param_2 != 0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
    local_158 = param_6;
    local_150 = *(longlong *)(param_2 + 0xc0);
    if (((local_150 == DAT_14686f210) || (local_150 == DAT_14686f228)) && (param_3 == DAT_14686f220)
       ) {
      FName::ToString(&local_150,&local_e0);
      local_150 = *(longlong *)(param_2 + 0xac);
      uStack_148 = *(undefined8 *)(param_2 + 0xb4);
      FUN_141682af0(&local_150,&local_f0,0);
      pvVar1 = local_e0;
      local_128 = (void *)0x0;
      iVar8 = (int)local_d8;
      local_130 = param_1;
      local_120 = iVar8;
      if (iVar8 == 0) {
        local_11c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,local_d8 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_128,pvVar1,(longlong)iVar8 * 2);
      }
      pvVar1 = local_f0;
      local_118 = (void *)0x0;
      iVar8 = (int)local_e8;
      local_110 = iVar8;
      if (iVar8 == 0) {
        local_10c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,local_e8 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_118,pvVar1,(longlong)iVar8 * 2);
      }
      local_108 = param_3;
      FString::FString(local_100,param_4);
      local_98 = (longlong *)0x0;
      local_88 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x48,local_b8);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_144553d50;
        puVar3[1] = local_130;
        FString::FString(puVar3 + 2,&local_128);
        FString::FString(puVar3 + 4,&local_118);
        puVar3[6] = local_108;
        FString::FString(puVar3 + 7,local_100);
      }
      local_150 = 0;
      local_c8[0] = &LAB_140db2b10;
      uStack_148 = 0x47;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
      FGenericPlatformString::Memcpy
                (local_150,L"on_any_beacon_host_request_confirm_pending_reservation_with_new_beacon"
                 ,0x8e);
      FUN_140dcdc50(param_1,&local_150,local_c8);
      if (local_150 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        plVar9 = local_b8;
        if (local_98 != (longlong *)0x0) {
          plVar9 = local_98;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_98 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_100[0] != 0) {
        FMemory::Free();
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_128 != (void *)0x0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_2 + 0xc0) == DAT_14686f228) {
        if (*(int *)(param_1 + 0x68) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = *(undefined2 **)(param_1 + 0x60);
        }
        if (*(int *)(param_5 + 1) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*param_5;
        }
        FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar10);
      }
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x14);
      lVar4 = *(longlong *)(lVar4 + 0xae8);
      if (lVar4 != 0) {
        FString::operator=(param_1 + 0x60,param_5);
        *(undefined1 *)(param_1 + 0x70) = local_158;
        if (*(char *)(param_1 + 0x10) == '\0') {
          FUN_140dd0a90(param_1,2);
        }
        FUN_1404c9880(lVar4,DAT_14686f228);
        lVar5 = FUN_140da5480(lVar4,DAT_14686f228);
        if (lVar5 != 0) {
          FUN_1404b8b20(lVar5 + 0x198,lVar4,&LAB_140dafb04);
          FUN_1404b8b20(lVar5 + 0x1a8,lVar4,&LAB_140dafb1c);
          if (*(int *)(param_4 + 1) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = (undefined2 *)*param_4;
          }
          FUN_14289aca0(local_c8,0,puVar10,0);
          lVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
          if (*(int *)(lVar6 + 0xb08) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = *(undefined2 **)(lVar6 + 0xb00);
          }
          FString::PrintfImpl(&local_140,L"Template=%s",puVar10);
          puVar10 = &DAT_143f3eda8;
          if (local_138 != 0) {
            puVar10 = local_140;
          }
          FURL::AddOption(local_c8,puVar10);
          if (local_140 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          FURL::GetOption(local_c8,L"HostPlatform=",0);
          cVar2 = FUN_1404d3a70(lVar5,local_c8);
          if (cVar2 == '\0') {
            FUN_1404c9620(lVar4,lVar5);
            FUN_140dcedd0(param_1,4);
          }
          else {
            FUN_1404c9e30(lVar5);
            FString::operator=(lVar5 + 0x1b8,param_1 + 0x60);
          }
          FURL::~FURL(local_c8);
        }
      }
      if (local_f0 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_e0 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140dc44a0 FUN_140dc44a0 body=1335 status=ok
// SIG undefined FUN_140dc44a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc44a0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  void *pvVar7;
  int iVar8;
  void *pvVar9;
  longlong *plVar10;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong local_188;
  longlong *plStack_180;
  longlong *local_178;
  longlong *local_170;
  longlong local_168 [2];
  longlong *local_158;
  int local_150;
  longlong *local_148;
  int local_140;
  longlong local_138;
  void *local_130;
  int local_128;
  undefined4 local_124;
  void *local_120;
  int local_118;
  undefined4 local_114;
  void *local_110;
  ulonglong local_108;
  void *local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  if (param_2 == 0) {
    return;
  }
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_f0 = *(longlong *)(param_2 + 0xc0);
  if (local_f0 != DAT_14686f228) {
    return;
  }
  FName::ToString(&local_f0,&local_100);
  local_c0 = *(undefined8 *)(param_2 + 0xac);
  uStack_b8 = *(undefined8 *)(param_2 + 0xb4);
  FUN_141682af0(&local_c0,&local_110,0);
  pvVar2 = local_100;
  pvVar9 = (void *)0x0;
  local_130 = (void *)0x0;
  iVar8 = (int)local_f8;
  local_138 = param_1;
  local_128 = iVar8;
  if (iVar8 == 0) {
    local_124 = 0;
    pvVar7 = pvVar9;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_130,local_f8 & 0xffffffff,0);
    pvVar7 = local_130;
    _guard_xfg_dispatch_icall_nop(local_130,pvVar2,(longlong)iVar8 * 2);
  }
  pvVar2 = local_110;
  local_120 = (void *)0x0;
  iVar8 = (int)local_108;
  local_118 = iVar8;
  if (iVar8 == 0) {
    local_114 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_120,local_108 & 0xffffffff,0);
    pvVar9 = local_120;
    _guard_xfg_dispatch_icall_nop(local_120,pvVar2,(longlong)iVar8 * 2);
    pvVar7 = local_130;
  }
  local_78 = (longlong *)0x0;
  local_68 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x30,local_98);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f77c30;
    puVar3[1] = local_138;
    FString::FString(puVar3 + 2,&local_130);
    FString::FString(puVar3 + 4,&local_120);
    pvVar7 = local_130;
    pvVar9 = local_120;
  }
  local_168[0] = 0;
  local_a8[0] = &LAB_140db2aa0;
  local_168[1] = 0x28;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_168,0);
  FGenericPlatformString::Memcpy(local_168[0],L"on_any_beacon_host_request_join_session",0x50);
  FUN_140dcdc50(param_1,local_168,local_a8);
  if (local_168[0] != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    plVar10 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar10 = local_78;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  puVar3 = (undefined8 *)FName::FName(local_d8,L"SPARK",1);
  FUN_1404d0c50(&local_178,*puVar3);
  plVar10 = local_178;
  if (local_178 == (longlong *)0x0) goto LAB_140dc4950;
  local_198 = 0x120;
  if (param_3 == 0x120) {
    lVar5 = *local_178;
    uVar4 = FUN_140531690(&local_158,param_1,FUN_140dc6770);
    puVar3 = (undefined8 *)(**(code **)(lVar5 + 0x1b0))(plVar10,local_d0,uVar4);
    *(undefined8 *)(param_1 + 0x390) = *puVar3;
    plVar6 = local_158;
    if (local_150 != 0) {
      if (local_158 == (longlong *)0x0) goto LAB_140dc4880;
      (**(code **)(*local_158 + 0x28))(local_158,0);
      if (local_158 != (longlong *)0x0) {
        local_158 = (longlong *)FMemory::Realloc(local_158,0,0);
      }
      local_150 = 0;
      plVar6 = local_158;
    }
LAB_140dc4873:
    if (plVar6 != (longlong *)0x0) {
      FMemory::Free(plVar6);
    }
  }
  else {
    local_198 = 0x11f;
    if (param_3 == 0x11f) {
      lVar5 = FUN_140dbc450(param_1);
      if (lVar5 != 0) {
        uVar4 = FUN_140dbc450();
        FUN_1413c8ca0(uVar4,1);
        FUN_140db2f20(param_1);
        goto LAB_140dc4950;
      }
      FUN_140dd0a90(param_1,4);
      local_198 = 0x120;
      (**(code **)(*plVar10 + 0xd0))(plVar10,0x120);
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x14);
      FUN_1404c9880(*(undefined8 *)(lVar5 + 0xae8),DAT_14686f228);
      lVar5 = *plVar10;
      uVar4 = FUN_140531690(&local_148,param_1,FUN_140dc65c0);
      puVar3 = (undefined8 *)(**(code **)(lVar5 + 0x1b0))(plVar10,local_c8,uVar4);
      *(undefined8 *)(param_1 + 0x3c0) = *puVar3;
      plVar6 = local_148;
      if (local_140 != 0) {
        if (local_148 == (longlong *)0x0) goto LAB_140dc4880;
        (**(code **)(*local_148 + 0x28))(local_148,0);
        if (local_148 != (longlong *)0x0) {
          local_148 = (longlong *)FMemory::Realloc(local_148,0,0);
        }
        local_140 = 0;
        plVar6 = local_148;
      }
      goto LAB_140dc4873;
    }
  }
LAB_140dc4880:
  FUN_140dbc950(param_1,&local_188);
  plVar6 = plStack_180;
  if (local_188 == 0) {
    FUN_140db3670(param_1,6);
    plVar6 = plStack_180;
  }
  else {
    local_e8 = local_188;
    plStack_e0 = plStack_180;
    if (plStack_180 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
      UNLOCK();
      plVar10 = local_178;
    }
    (**(code **)(*plVar10 + 0x1a8))(plVar10,&local_e8,param_4);
    plVar10 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_e0 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      plVar6 = plStack_180;
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = plStack_180;
        if (iVar8 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
          plVar6 = plStack_180;
        }
      }
    }
  }
  plVar10 = plStack_180;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar6 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_180)(plStack_180);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_180 + 8))(plStack_180,1);
      }
    }
  }
LAB_140dc4950:
  plVar10 = local_170;
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_170 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  if (local_110 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dc49e0 FUN_140dc49e0 body=431 status=ok
// SIG undefined FUN_140dc49e0(void)

void FUN_140dc49e0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong local_res10;
  undefined4 local_res18 [4];
  undefined1 local_38 [8];
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  longlong *local_18;
  undefined4 *local_10;
  
  if (param_2 != 0) {
    local_18 = &local_res10;
    local_10 = local_res18;
    local_res10 = param_2;
    local_res18[0] = param_3;
    local_20 = param_1;
    if (*(longlong *)(param_2 + 0xc0) == DAT_14686f220) {
      FUN_140dac690(&local_20);
      FUN_140dcf160(param_1,0);
      return;
    }
    if (*(longlong *)(param_2 + 0xc0) == DAT_14686f228) {
      FUN_140dac690(&local_20);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (lVar6 != 0) {
        FUN_140db56c0(lVar6,1);
        FUN_140dd5aa0(lVar6,0);
        return;
      }
      cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x14);
      if ((cVar5 != '\0') &&
         (lVar6 = FWeakObjectPtr::Get(param_1 + 0x14), *(longlong *)(lVar6 + 0xae8) != 0)) {
        lVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
        FUN_1404c9620(*(undefined8 *)(lVar6 + 0xae8),local_res10);
      }
      cVar5 = FUN_140dc0f80(param_1);
      if (cVar5 == '\0') {
        FUN_140db2520(param_1);
      }
      else {
        FUN_140dcedd0(param_1,8);
        puVar7 = (undefined8 *)FName::FName(local_38,L"SPARK",1);
        FUN_1404d0c50(&local_30,*puVar7);
        if ((local_30 != (longlong *)0x0) &&
           (lVar6 = (**(code **)(*local_30 + 0x10))(local_30,0x120), lVar6 != 0)) {
          (**(code **)(*local_30 + 0xd0))(local_30,0x120);
        }
        plVar4 = local_28;
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_28 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_28 + 8))(local_28,1);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140dc4b90 FUN_140dc4b90 body=525 status=ok
// SIG undefined FUN_140dc4b90(void)

void FUN_140dc4b90(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong local_res10 [2];
  undefined8 local_res20;
  undefined1 local_70 [8];
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  int local_30;
  
  if (param_2 != 0) {
    local_40 = local_res10;
    local_res10[0] = param_2;
    local_48 = param_1;
    if (*(longlong *)(param_2 + 0xc0) == DAT_14686f208) {
      FUN_140dad4a0(&local_48);
      FUN_140dc69a0(param_1);
      return;
    }
    if (*(longlong *)(param_2 + 0xc0) == DAT_14686f220) {
      FUN_140dad4a0(&local_48);
      if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
        local_60 = (longlong *)0x0;
        if ((undefined8 *)(param_1 + 0x40) != &local_68) {
          *(undefined8 *)(param_1 + 0x40) = 0;
          local_68 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x48,&local_60);
          plVar4 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_60 + 8))(local_60,1);
              }
            }
          }
        }
      }
      if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
      }
      if (((*(longlong *)(param_1 + 0x1e8) == 0) && (*(longlong *)(param_1 + 0x1f0) == 0)) &&
         (*(longlong *)(param_1 + 0x1f8) == 0)) {
        puVar5 = (undefined8 *)FName::FName(local_70,L"SPARK",1);
        FUN_1404d0c50(&local_58,*puVar5);
        if (local_58 != (longlong *)0x0) {
          local_res20 = 0x120;
          lVar6 = (**(code **)(*local_58 + 0x10))(local_58,0x120);
          if ((lVar6 != 0) && (plVar4 = *(longlong **)(lVar6 + 0xa0), plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x38))(plVar4,&local_38);
            if (1 < local_30) {
              FUN_1404e2580(local_res10[0],param_3 + 8,0x120,&local_38);
            }
            if (local_38 != 0) {
              FMemory::Free();
            }
          }
        }
        plVar4 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140dc4da0 FUN_140dc4da0 body=634 status=ok
// SIG undefined FUN_140dc4da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc4da0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  void *local_c0;
  ulonglong local_b8;
  void *local_b0;
  ulonglong local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686f220)) {
    local_f8 = *(longlong *)(param_2 + 0xc0);
    FName::ToString(&local_f8,&local_b0);
    local_f8 = *(longlong *)(param_2 + 0xac);
    uStack_f0 = *(undefined8 *)(param_2 + 0xb4);
    FUN_141682af0(&local_f8,&local_c0,0);
    pvVar1 = local_b0;
    pvVar4 = (void *)0x0;
    local_e0 = (void *)0x0;
    iVar3 = (int)local_a8;
    local_e8 = param_1;
    local_d8 = iVar3;
    if (iVar3 == 0) {
      local_d4 = 0;
      pvVar5 = pvVar4;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,local_a8 & 0xffffffff,0);
      pvVar5 = local_e0;
      _guard_xfg_dispatch_icall_nop(local_e0,pvVar1,(longlong)iVar3 * 2);
    }
    pvVar1 = local_c0;
    local_d0 = (void *)0x0;
    iVar3 = (int)local_b8;
    local_c8 = iVar3;
    if (iVar3 == 0) {
      local_c4 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d0,local_b8 & 0xffffffff,0);
      pvVar4 = local_d0;
      _guard_xfg_dispatch_icall_nop(local_d0,pvVar1,(longlong)iVar3 * 2);
      pvVar5 = local_e0;
    }
    local_68 = (longlong *)0x0;
    local_58 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x30,local_88);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f77c30;
      puVar2[1] = local_e8;
      FString::FString(puVar2 + 2,&local_e0);
      FString::FString(puVar2 + 4,&local_d0);
      pvVar4 = local_d0;
      pvVar5 = local_e0;
    }
    local_f8 = 0;
    local_98[0] = &LAB_140db2aa0;
    uStack_f0 = 0x2b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,L"on_any_beacon_pending_remote_party_timeout",0x56);
    FUN_140dcdc50(param_1,&local_f8,local_98);
    if (local_f8 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      plVar6 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar6 = local_68;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    FUN_140db4a10(param_1);
    if (local_c0 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_b0 != (void *)0x0) {
      FMemory::Free();
    }
  }
  FUN_1404bed10(param_3);
  return;
}



// FUNCTION 140dc5020 FUN_140dc5020 body=1166 status=ok
// SIG undefined FUN_140dc5020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc5020(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  void *pvVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  void *pvVar10;
  void *pvVar11;
  longlong lVar12;
  longlong *plVar13;
  void *pvVar14;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  longlong *local_150;
  longlong *local_148;
  longlong local_140;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  void *local_e0;
  ulonglong local_d8;
  void *local_d0;
  ulonglong local_c8;
  undefined1 local_c0 [8];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  if (param_2 != 0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_188;
    local_108 = *(longlong *)(param_2 + 0xc0);
    if (local_108 == DAT_14686f220) {
      pvVar14 = (void *)0x0;
      local_168 = 0x120;
      if (param_3 == 0x120) {
        FName::ToString(&local_108,&local_d0);
        local_b8 = *(undefined4 *)(param_2 + 0xac);
        uStack_b4 = *(undefined4 *)(param_2 + 0xb0);
        uStack_b0 = *(undefined4 *)(param_2 + 0xb4);
        uStack_ac = *(undefined4 *)(param_2 + 0xb8);
        FUN_141682af0(&local_b8,&local_e0,0);
        pvVar4 = local_d0;
        local_138 = (void *)0x0;
        iVar9 = (int)local_c8;
        local_140 = param_1;
        local_130 = iVar9;
        if (iVar9 == 0) {
          local_12c = 0;
          pvVar11 = pvVar14;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_138,local_c8 & 0xffffffff,0);
          pvVar11 = local_138;
          _guard_xfg_dispatch_icall_nop(local_138,pvVar4,(longlong)iVar9 * 2);
        }
        pvVar4 = local_e0;
        local_128 = (void *)0x0;
        iVar9 = (int)local_d8;
        local_120 = iVar9;
        if (iVar9 == 0) {
          local_11c = 0;
          pvVar10 = pvVar14;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,local_d8 & 0xffffffff,0);
          pvVar10 = local_128;
          _guard_xfg_dispatch_icall_nop(local_128,pvVar4,(longlong)iVar9 * 2);
          pvVar11 = local_138;
        }
        local_78 = (longlong *)0x0;
        local_68 = 0;
        local_118 = param_3;
        puVar7 = (undefined8 *)FUN_140438ef0(0x38,local_98);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR_FUN_144553d38;
          puVar7[1] = local_140;
          FString::FString(puVar7 + 2,&local_138);
          FString::FString(puVar7 + 4,&local_128);
          puVar7[6] = local_118;
          pvVar10 = local_128;
          pvVar11 = local_138;
        }
        local_160 = 0;
        local_a8[0] = &LAB_140db2b30;
        local_158 = 0x2a;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_160,0);
        FGenericPlatformString::Memcpy(local_160,L"on_any_beacon_remote_party_joined_session",0x54);
        FUN_140dcdc50(param_1,&local_160,local_a8);
        if (local_160 != 0) {
          FMemory::Free();
        }
        if (local_68 != 0) {
          plVar13 = local_98;
          if (local_78 != (longlong *)0x0) {
            plVar13 = local_78;
          }
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x10))(plVar13,0);
          }
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (pvVar10 != (void *)0x0) {
          FMemory::Free(pvVar10);
        }
        if (pvVar11 != (void *)0x0) {
          FMemory::Free(pvVar11);
        }
        puVar7 = (undefined8 *)FName::FName(local_c0,L"SPARK",1);
        FUN_1404d0c50(&local_150,*puVar7);
        if (local_150 != (longlong *)0x0) {
          if ((*(longlong **)(param_4 + 0x10) != (longlong *)0x0) &&
             (cVar5 = (**(code **)(**(longlong **)(param_4 + 0x10) + 0x20))(), cVar5 != '\0')) {
            local_100 = *(undefined8 *)(param_4 + 0x10);
            local_f8 = *(longlong **)(param_4 + 0x18);
            if (local_f8 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
              UNLOCK();
            }
            local_168 = 0x120;
            (**(code **)(*local_150 + 0x2d0))(local_150,0x120,&local_100);
            plVar13 = local_f8;
            if (local_f8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_f8 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_f8)(local_f8);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
          }
          lVar12 = *(longlong *)(param_4 + 0x30);
          lVar8 = lVar12 + (longlong)*(int *)(param_4 + 0x38) * 0x28;
          for (; lVar12 != lVar8; lVar12 = lVar12 + 0x28) {
            if ((*(longlong **)(lVar12 + 8) != (longlong *)0x0) &&
               (cVar5 = (**(code **)(**(longlong **)(lVar12 + 8) + 0x20))(), cVar5 != '\0')) {
              local_f0 = *(undefined8 *)(lVar12 + 8);
              local_e8 = *(longlong **)(lVar12 + 0x10);
              if (local_e8 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
                UNLOCK();
              }
              local_110 = 0x120;
              (**(code **)(*local_150 + 0x2d0))(local_150,0x120,&local_f0);
              plVar13 = local_e8;
              if (local_e8 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_e8 + 1;
                lVar3 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
                  (**(code **)*local_e8)(local_e8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  iVar9 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
            }
          }
        }
        cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x14);
        if ((cVar5 != '\0') &&
           (lVar8 = FWeakObjectPtr::Get(param_1 + 0x14), *(longlong *)(lVar8 + 0xcb0) != 0)) {
          cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x14);
          if (cVar5 != '\0') {
            lVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
            pvVar14 = *(void **)(lVar8 + 0xcb0);
          }
          uVar6 = FUN_140dbc780(param_1);
          FUN_1413c8dc0(pvVar14,uVar6);
        }
        FUN_140db4a10(param_1);
        plVar13 = local_148;
        if (local_148 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_148 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_148)(local_148);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_148 + 8))(local_148,1);
            }
          }
        }
        if (local_e0 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_d0 != (void *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 140dc54b0 FUN_140dc54b0 body=69 status=ok
// SIG undefined FUN_140dc54b0(void)

void FUN_140dc54b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686f228)) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar2 = FUN_140bb7900(uVar1);
    if (lVar2 != 0) {
      FUN_140da9790(param_3,lVar2 + 0x60);
    }
  }
  return;
}



// FUNCTION 140dc5500 FUN_140dc5500 body=133 status=ok
// SIG undefined FUN_140dc5500(void)

void FUN_140dc5500(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res18 [2];
  
  if (param_3 != 0) {
    local_res18[0] = param_3;
    lVar2 = FUN_142dfdfe0();
    lVar3 = param_3;
    while (lVar3 != lVar2) {
      lVar3 = *(longlong *)(lVar3 + 0x30);
      if (lVar3 == 0) {
        return;
      }
    }
    iVar1 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                      (param_1 + 0x38,local_res18);
    if (iVar1 == -1) {
      iVar1 = *(int *)(param_1 + 0x40);
      *(int *)(param_1 + 0x40) = iVar1 + 1;
      if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = param_3;
    }
  }
  return;
}



// FUNCTION 140dc5590 FUN_140dc5590 body=96 status=ok
// SIG undefined FUN_140dc5590(void)

void FUN_140dc5590(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = *param_2;
  FUN_1404bb3d0(param_1 + 0x98,local_res8);
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar1 = FUN_14164ab60();
    FUN_141597530(uVar1,*(undefined8 *)(param_1 + 0x148));
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    *(undefined8 *)(param_1 + 0x148) = 0;
    FUN_140dcce40(param_1);
    return;
  }
  return;
}



// FUNCTION 140dc55f0 FUN_140dc55f0 body=165 status=ok
// SIG undefined FUN_140dc55f0(void)

void FUN_140dc55f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  longlong *local_18;
  longlong *local_10;
  
  puVar6 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  FUN_1404d0c50(&local_18,*puVar6);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x360))(local_18,param_1 + 0x1f8);
  }
  FUN_140dc2440(param_1,param_1 + 0x128);
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
  return;
}



// FUNCTION 140dc56c0 FUN_140dc56c0 body=303 status=ok
// SIG undefined FUN_140dc56c0(void)

void FUN_140dc56c0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong local_28;
  longlong *local_20;
  
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686f228)) &&
     (lVar5 = *(longlong *)(param_1 + 0x310), lVar5 != 0)) {
    plVar6 = *(longlong **)(param_1 + 0x318);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    FUN_140db5aa0();
    if (param_3 == '\0') {
      cVar7 = FUN_140dc0f80(param_1);
      if (cVar7 == '\0') {
        FUN_140db2520(param_1);
      }
      else {
        FUN_140dcedd0(param_1,0xc);
      }
    }
    else {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_28 = lVar5;
      local_20 = plVar6;
      FUN_140dce270(param_1,&local_28);
      plVar3 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_20)(local_20);
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
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140dc57f0 FUN_140dc57f0 body=179 status=ok
// SIG undefined FUN_140dc57f0(void)

void FUN_140dc57f0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 local_res10 [3];
  longlong *local_18;
  longlong *local_10;
  
  local_res10[0] = 0x11f;
  if (param_2 == 0x11f) {
    puVar6 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
    FUN_1404d0c50(&local_18,*puVar6);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x40))(local_18,param_1 + 0xe0);
    }
    TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1,param_3);
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



// FUNCTION 140dc58f0 FUN_140dc58f0 body=68 status=ok
// SIG undefined FUN_140dc58f0(void)

void FUN_140dc58f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x14);
  TBaseMulticastDelegate<void>::Remove(lVar1 + 0x620,*(undefined8 *)(param_1 + 0x2c0));
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  FUN_140dc1fe0(param_1,param_1 + 0x200);
  return;
}



// FUNCTION 140dc5940 FUN_140dc5940 body=413 status=ok
// SIG undefined FUN_140dc5940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc5940(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80 [3];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98 = 0x120;
  if (param_2 == 0x120) {
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_90 = param_1;
    uStack_88 = param_3;
    puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar3 + 1) = (undefined4)local_90;
      *(undefined4 *)((longlong)puVar3 + 0xc) = local_90._4_4_;
      *(undefined4 *)(puVar3 + 2) = uStack_88;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_84;
    }
    local_80[0] = 0;
    local_68[0] = &LAB_140db29f0;
    local_80[1] = 0x28;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_80,0);
    FGenericPlatformString::Memcpy(local_80[0],L"on_destroy_matchmaking_session_complete",0x50);
    FUN_140dcdc50(param_1,local_80,local_68);
    if (local_80[0] != 0) {
      FMemory::Free();
    }
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
    puVar3 = (undefined8 *)FName::FName(&local_98,L"SPARK",1);
    FUN_1404d0c50(&local_90,*puVar3);
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0xe0))(local_90,param_1 + 0x3d);
    }
    FUN_140dc2440(param_1,param_1 + 0x25);
    if (CONCAT44(uStack_84,uStack_88) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_84,uStack_88) + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        puVar3 = (undefined8 *)CONCAT44(uStack_84,uStack_88);
        (**(code **)*puVar3)(puVar3);
        LOCK();
        piVar1 = (int *)((longlong)puVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*(longlong *)CONCAT44(uStack_84,uStack_88) + 8))
                    ((longlong *)CONCAT44(uStack_84,uStack_88),1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140dc5ae0 FUN_140dc5ae0 body=328 status=ok
// SIG undefined FUN_140dc5ae0(void)

void FUN_140dc5ae0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 local_res20;
  longlong *local_18;
  longlong *local_10;
  
  local_res20 = 0x120;
  if (param_2 == 0x120) {
    puVar7 = (undefined8 *)FName::FName(&local_res20,L"SPARK",1);
    FUN_1404d0c50(&local_18,*puVar7);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0xe0))(local_18,param_1 + 0x3b8);
    }
    if (*(char *)(param_1 + 0x10) == '\x03') {
      FUN_140dd0a90(param_1,2);
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      FUN_140dd3890(param_1);
    }
    cVar6 = *(char *)(param_1 + 0x10);
    if (cVar6 == '\x05') {
      FUN_140db39c0(param_1);
    }
    else if (cVar6 != '\x04') {
      if (cVar6 == '\x01') {
        FUN_140db46d0(param_1);
      }
      else if (cVar6 == '\x02') {
        cVar6 = FUN_140dc1420(param_1);
        if ((cVar6 == '\0') && (*(int *)(param_1 + 0x360) == 0)) {
          if ((*(longlong *)(param_1 + 0x20) == 0) ||
             (0.0 < *(float *)(*(longlong *)(param_1 + 0x20) + 0x10))) {
            cVar6 = FUN_140dbfc60(param_1 + 0x88);
            if (cVar6 == '\0') {
              FUN_140dd2ef0(param_1);
            }
          }
          else {
            FUN_140dc7e90(param_1);
          }
        }
      }
      else if (cVar6 == '\x03') {
        FUN_140db3b70(param_1);
      }
    }
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



// FUNCTION 140dc5c30 FUN_140dc5c30 body=178 status=ok
// SIG undefined FUN_140dc5c30(void)

void FUN_140dc5c30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 local_res20;
  longlong *local_18;
  longlong *local_10;
  
  local_res20 = 0x120;
  if (param_2 == 0x120) {
    puVar6 = (undefined8 *)FName::FName(&local_res20,L"SPARK",1);
    FUN_1404d0c50(&local_18,*puVar6);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0xe0))(local_18,param_1 + 0x3c8);
    }
    FUN_140db86e0(param_1);
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



// FUNCTION 140dc5cf0 FUN_140dc5cf0 body=195 status=ok
// SIG undefined FUN_140dc5cf0(void)

void FUN_140dc5cf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 local_res20;
  longlong *local_18;
  longlong *local_10;
  
  local_res20 = 0x120;
  if (param_2 == 0x120) {
    puVar6 = (undefined8 *)FName::FName(&local_res20,L"SPARK",1);
    FUN_1404d0c50(&local_18,*puVar6);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0xe0))(local_18,param_1 + 0x420);
    }
    if ((*(char *)(param_1 + 0x10) == '\x04') && (*(int *)(param_1 + 0x120) == 0)) {
      FUN_140dd0a90(param_1,0);
    }
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



// FUNCTION 140dc5dc0 FUN_140dc5dc0 body=216 status=ok
// SIG undefined FUN_140dc5dc0(void)

void FUN_140dc5dc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 local_res10 [3];
  longlong *local_18;
  longlong *local_10;
  
  local_res10[0] = 0x11f;
  if (param_2 == 0x11f) {
    puVar6 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
    FUN_1404d0c50(&local_18,*puVar6);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x68))(local_18,param_1 + 0xf0);
      (**(code **)(*local_18 + 0xb8))(local_18,param_1 + 0xf8);
      (**(code **)(*local_18 + 0xe0))(local_18,param_1 + 0x100);
    }
    FUN_140db7ac0(param_1);
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



// FUNCTION 140dc5ea0 FUN_140dc5ea0 body=903 status=ok
// SIG undefined FUN_140dc5ea0(void)

void FUN_140dc5ea0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined *local_78;
  undefined8 local_70;
  longlong *local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  code *local_48;
  longlong *plStack_40;
  code *local_38;
  longlong *plStack_30;
  
  uVar5 = 0;
  local_78 = (undefined *)0x0;
  local_70 = 0;
  FBase64::Decode(param_2,&local_78);
  cVar3 = FString::RemoveFromStart(&local_78,&DAT_14629b7b0,0);
  if ((cVar3 == '\0') && (local_78 != &DAT_14453216c)) {
    uVar2 = local_70._4_4_;
    local_70 = (ulonglong)local_70._4_4_ << 0x20;
    iVar9 = 0;
    if (uVar2 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78,0);
      uVar5 = local_70 & 0xffffffff;
      iVar9 = local_70._4_4_;
    }
    iVar4 = (int)uVar5;
    if (iVar9 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar5);
      goto LAB_140dc5f29;
    }
  }
  else {
LAB_140dc5f29:
    iVar4 = (int)local_70;
  }
  if ((1 < iVar4) && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_142450450(*(longlong *)(param_1 + 0x30),&local_48);
    if (local_48 != (code *)0x0) {
      puVar6 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
      FUN_1404d0c50(&local_58,*puVar6);
      plVar7 = local_50;
      plVar10 = local_58;
      if (local_58 != (longlong *)0x0) {
        FString::operator=(param_1 + 0x50,&local_78);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          plStack_30 = (longlong *)((ulonglong)plStack_30 & 0xffffffff00000000);
          local_38 = FUN_140dc6300;
          local_68 = (longlong *)0x0;
          plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
          local_60 = 3;
          local_68 = plVar7;
          if (plVar7 != (longlong *)0x0) {
            *plVar7 = (longlong)&PTR_FUN_144318e60;
            FWeakObjectPtr::operator=(plVar7 + 1,param_1);
            plVar7[2] = (longlong)local_38;
            plVar7[3] = (longlong)plStack_30;
            lVar8 = FDelegateHandle::GenerateNewID();
            plVar7[5] = lVar8;
            *plVar7 = (longlong)&PTR_FUN_144318ea8;
          }
          puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x1b0))(plVar10,local_res20,&local_68);
          *(undefined8 *)(param_1 + 0x60) = *puVar6;
          if (local_60 != 0) {
            if (local_68 == (longlong *)0x0) goto LAB_140dc6075;
            (**(code **)(*local_68 + 0x28))(local_68,0);
            if (local_68 != (longlong *)0x0) {
              local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
            }
            local_60 = 0;
          }
          if (local_68 != (longlong *)0x0) {
            FMemory::Free(local_68);
          }
        }
LAB_140dc6075:
        local_38 = local_48;
        plStack_30 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
          UNLOCK();
          plVar10 = local_58;
        }
        (**(code **)(*plVar10 + 0x1a8))(plVar10,&local_38,&local_78);
        plVar10 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          plVar7 = plStack_30 + 1;
          lVar8 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_30)(plStack_30);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        *(undefined4 *)(param_1 + 0x40) = 0;
        if (*(int *)(param_1 + 0x44) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
        }
        plVar10 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_50 + 1;
          lVar8 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar10 = plStack_40 + 1;
          lVar8 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_40)(plStack_40);
            LOCK();
            piVar1 = (int *)((longlong)plStack_40 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plStack_40 + 8))(plStack_40,1);
            }
          }
        }
        goto LAB_140dc61ee;
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_50 + 1;
        lVar8 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_40 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plStack_40 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
  }
  FString::operator=(param_1 + 0x38,param_2);
LAB_140dc61ee:
  if (local_78 != (undefined *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dc6230 FUN_140dc6230 body=137 status=ok
// SIG undefined FUN_140dc6230(void)

void FUN_140dc6230(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int local_res8 [2];
  undefined8 local_res18;
  
  FUN_1405499a0(param_1 + 0xa8,local_res8,param_2);
  if (local_res8[0] != -1) {
    local_res18 = *(undefined8 *)
                   ((longlong)local_res8[0] * 0x20 + 0x10 + *(longlong *)(param_1 + 0xa8));
    FUN_140be6fe0(param_1 + 0xa8);
    plVar1 = *(longlong **)(param_1 + 0x40);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x88))(plVar1,&local_res18);
    }
    FUN_140dc5590(param_1,param_2);
  }
  return;
}



// FUNCTION 140dc62c0 FUN_140dc62c0 body=56 status=ok
// SIG undefined FUN_140dc62c0(void)

void FUN_140dc62c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140bba5e0(*(undefined8 *)(param_1 + 0x38));
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0x90);
  }
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  FUN_140dcce40(param_1);
  return;
}



// FUNCTION 140dc6300 FUN_140dc6300 body=702 status=ok
// SIG undefined FUN_140dc6300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc6300(longlong param_1,int param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [16];
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  longlong *plStack_170;
  undefined1 local_168 [8];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 local_148 [8];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 local_128 [184];
  undefined4 local_70;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  puVar9 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 1) != 0) {
    puVar9 = (undefined2 *)*param_3;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9);
  if (iVar7 == 0) {
    if (*(undefined **)(param_1 + 0x50) != &DAT_144532744) {
      iVar7 = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(int *)(param_1 + 0x5c) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x50);
        iVar7 = *(int *)(param_1 + 0x58);
      }
      *(int *)(param_1 + 0x58) = iVar7;
      if (*(int *)(param_1 + 0x5c) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x50);
      }
    }
    puVar8 = (undefined8 *)FName::FName(local_168,L"SPARK",1);
    FUN_1404d0c50(&local_188,*puVar8);
    if (local_188 != (longlong *)0x0) {
      (**(code **)(*local_188 + 0x1b8))(local_188,param_1 + 0x60);
    }
    if ((((param_2 == 1) && (*(longlong *)(param_4 + 8) != 0)) &&
        (*(longlong **)(param_4 + 0xa0) != (longlong *)0x0)) &&
       ((cVar6 = (**(code **)(**(longlong **)(param_4 + 0xa0) + 0x20))(), cVar6 != '\0' &&
        (*(longlong *)(param_1 + 0x30) != 0)))) {
      FUN_142450450(*(longlong *)(param_1 + 0x30),&local_178);
      if (local_178 != 0) {
        FUN_140b9aa90(local_148,0);
        local_160 = (undefined4)local_178;
        uStack_15c = (undefined4)((ulonglong)local_178 >> 0x20);
        uStack_158 = SUB84(plStack_170,0);
        uStack_154 = (undefined4)((ulonglong)plStack_170 >> 0x20);
        if (plStack_170 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
          UNLOCK();
        }
        puVar8 = (undefined8 *)CONCAT44(uStack_134,uStack_138);
        auVar4._4_8_ = puVar8;
        auVar4._0_4_ = uStack_13c;
        auVar4._12_4_ = 0;
        local_198 = auVar4 << 0x20;
        local_140 = local_160;
        uStack_13c = uStack_15c;
        uStack_138 = uStack_158;
        uStack_134 = uStack_154;
        if (puVar8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar8 + 1);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)*puVar8)(puVar8);
            LOCK();
            piVar1 = (int *)((longlong)puVar8 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*(longlong *)local_198._8_8_ + 8))(local_198._8_8_,1);
            }
          }
        }
        FUN_1404c0750(local_128,param_4);
        local_70 = *(undefined4 *)(param_4 + 0xb8);
        FUN_140be4f30(*(undefined8 *)(param_1 + 0x30),local_148);
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_60);
        FUN_1404bf650(local_128);
        plVar3 = (longlong *)CONCAT44(uStack_134,uStack_138);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
      }
      if (plStack_170 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_170 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_170)(plStack_170);
          LOCK();
          piVar1 = (int *)((longlong)plStack_170 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plStack_170 + 8))(plStack_170,1);
          }
        }
      }
    }
    plVar3 = local_180;
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_180 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140dc65c0 FUN_140dc65c0 body=422 status=ok
// SIG undefined FUN_140dc65c0(void)

void FUN_140dc65c0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char cVar8;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [56];
  
  puVar6 = (undefined8 *)FName::FName(local_78,L"SPARK",1);
  FUN_1404d0c50(&local_88,*puVar6);
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x1b8))(local_88,param_1 + 0x3c0);
  }
  if (param_2 == 1) {
    FUN_140dc1fe0(param_1,param_4);
  }
  else {
    cVar8 = (param_2 == 4) + '\x06';
    FUN_140db3670(param_1,cVar8);
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_70,L"Matchmaking Error",L"Matchmaking",L"MatchmakingErrorCaption");
    uVar7 = FUN_140dbc170(param_1,local_58,cVar8);
    uVar7 = FUN_140b99a50(local_40,local_70,uVar7);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x478,uVar7);
    FUN_140b9cdd0(local_40);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar3 = (int *)((longlong)local_68 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar3 = (int *)((longlong)local_50 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  plVar1 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 140dc6770 FUN_140dc6770 body=550 status=ok
// SIG undefined FUN_140dc6770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc6770(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  int local_b0;
  longlong local_a8 [2];
  undefined1 local_98 [16];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_b8 = param_1;
  local_b0 = param_2;
  FString::FString(local_a8,param_3);
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x28,local_78);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f77b58;
    puVar5[1] = local_b8;
    *(int *)(puVar5 + 2) = local_b0;
    FString::FString(puVar5 + 3,local_a8);
  }
  local_d8[0] = 0;
  local_88[0] = &LAB_140db2cc0;
  local_d8[1] = 0x25;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
  FGenericPlatformString::Memcpy(local_d8[0],L"on_find_matchmaking_session_complete",0x4a);
  FUN_140dcdc50(param_1,local_d8,local_88);
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  puVar5 = (undefined8 *)FName::FName(local_98,L"SPARK",1);
  FUN_1404d0c50(&local_c8,*puVar5);
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x1b8))(local_c8,param_1 + 0x390);
  }
  if (param_2 == 1) {
    FUN_140dc2440(param_1,param_4);
    goto LAB_140dc6940;
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar4 == '\0') {
LAB_140dc690e:
    if (param_2 == 4) {
      FUN_140db3670(param_1,7);
    }
    else {
      FUN_140db2520(param_1);
    }
  }
  else {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
    cVar4 = FUN_140bc9f60(uVar6);
    if (cVar4 == '\0') goto LAB_140dc690e;
    uVar6 = 5;
    if (param_2 == 4) {
      uVar6 = 7;
    }
    FUN_140dcedd0(param_1,uVar6);
  }
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
  FUN_1404c9880(*(undefined8 *)(lVar7 + 0xae8),DAT_14686f228);
LAB_140dc6940:
  plVar8 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return;
}



// FUNCTION 140dc69a0 FUN_140dc69a0 body=98 status=ok
// SIG undefined FUN_140dc69a0(void)

void FUN_140dc69a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((byte)(*(char *)(param_1 + 0x10) - 1U) < 2) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x14);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x14);
      lVar3 = FUN_140bb7900(uVar2);
      if (lVar3 != 0) {
        FUN_140dcf160(param_1,1);
        return;
      }
    }
    FUN_140db2520(param_1);
  }
  return;
}



// FUNCTION 140dc6a10 FUN_140dc6a10 body=151 status=ok
// SIG undefined FUN_140dc6a10(void)

void FUN_140dc6a10(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 local_res8;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x14);
    cVar2 = FUN_140bc9f60(uVar1);
    if (cVar2 != '\0') {
      return;
    }
  }
  if (*(char *)(param_1 + 0x10) == '\x04') {
    local_res8 = param_2;
    iVar3 = FUN_140da6840(param_1 + 0x118,&local_res8);
    if (((0 < iVar3) && (*(char *)(param_1 + 0x10) == '\x04')) && (*(int *)(param_1 + 0x120) == 0))
    {
      FUN_140dd0a90(param_1,0);
      return;
    }
  }
  else {
    FUN_140dc69a0(param_1);
  }
  return;
}



// FUNCTION 140dc6ab0 FUN_140dc6ab0 body=378 status=ok
// SIG undefined FUN_140dc6ab0(void)

void FUN_140dc6ab0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined **local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (((byte)(*(char *)(param_1 + 0x10) - 1U) < 2) &&
     (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x14), cVar5 != '\0')) {
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar8 = FUN_140bb7900(uVar7);
    if (lVar8 != 0) {
      uVar7 = *param_2;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      plVar2 = (longlong *)(param_1 + 0x358);
      local_40 = 0;
      local_58 = &PTR_FUN_143f740c8;
      local_38 = 0;
      local_50 = uVar7;
      local_48 = plVar3;
      iVar6 = FUN_1404cc060(plVar2,&local_58);
      if (iVar6 == -1) {
        iVar6 = *(int *)(param_1 + 0x360);
        lVar8 = (longlong)iVar6;
        *(int *)(param_1 + 0x360) = iVar6 + 1;
        if (*(int *)(param_1 + 0x364) < iVar6 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar2,iVar6);
        }
        lVar4 = *plVar2;
        *(undefined ***)(lVar4 + lVar8 * 0x28) = &PTR_FUN_143f73d18;
        *(undefined8 *)(lVar4 + 8 + lVar8 * 0x28) = uVar7;
        *(longlong **)(lVar4 + 0x10 + lVar8 * 0x28) = plVar3;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        *(undefined ***)(lVar4 + lVar8 * 0x28) = &PTR_FUN_143f740c8;
        *(undefined8 *)(lVar4 + 0x18 + lVar8 * 0x28) = 0;
        *(undefined8 *)(lVar4 + 0x20 + lVar8 * 0x28) = 0;
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      FUN_140dd67c0(param_1,0);
      FUN_140dcf160(param_1,1);
    }
  }
  return;
}



// FUNCTION 140dc6c30 FUN_140dc6c30 body=553 status=ok
// SIG undefined FUN_140dc6c30(void)

void FUN_140dc6c30(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res18 [16];
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x14);
  FUN_1404c9880(*(undefined8 *)(lVar4 + 0xae8),DAT_14686f228);
  FUN_140db5aa0(param_1);
  FUN_140db5980(param_1);
  FUN_140db5ba0(param_1);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404d0c50(&local_58,*puVar5);
  plVar6 = local_58;
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x1b8))(local_58,param_1 + 0x390);
    (**(code **)(*plVar6 + 0x360))(plVar6,param_1 + 0x1f8);
    (**(code **)(*plVar6 + 0xe0))(plVar6,param_1 + 0x1e8);
    (**(code **)(*plVar6 + 0x168))(plVar6,param_1 + 0x1f0);
    iVar3 = (**(code **)(*plVar6 + 0x3a8))(plVar6);
    if (iVar3 == 1) {
      FUN_140dbc950(param_1,&local_48);
      plVar7 = plStack_40;
      if (local_48 != 0) {
        local_38 = local_48;
        plStack_30 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
          UNLOCK();
          plVar6 = local_58;
        }
        (**(code **)(*plVar6 + 0x380))(plVar6,&local_38);
        plVar2 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStack_30 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          plVar6 = local_58;
          plVar7 = plStack_40;
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_30)(plStack_30);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar6 = local_58;
            plVar7 = plStack_40;
            if (iVar3 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
              plVar6 = local_58;
              plVar7 = plStack_40;
            }
          }
        }
      }
      plVar2 = plStack_40;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar7 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        plVar6 = local_58;
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar6 = local_58;
          if (iVar3 == 1) {
            (**(code **)(*plStack_40 + 8))(plStack_40,1);
            plVar6 = local_58;
          }
        }
      }
    }
    lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x120);
    if (lVar4 != 0) {
      (**(code **)(*plVar6 + 0xd0))(plVar6,0x120);
    }
  }
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140dc6e70 FUN_140dc6e70 body=455 status=ok
// SIG undefined FUN_140dc6e70(void)

void FUN_140dc6e70(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *local_98;
  int local_90;
  undefined1 local_88 [112];
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x14);
  lVar2 = *(longlong *)(lVar2 + 0xae8);
  if (lVar2 != 0) {
    FString::operator=(param_1 + 0x60,param_4);
    *(undefined1 *)(param_1 + 0x70) = param_5;
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_140dd0a90(param_1,2);
    }
    FUN_1404c9880(lVar2,DAT_14686f228);
    lVar3 = FUN_140da5480(lVar2,DAT_14686f228);
    if (lVar3 != 0) {
      FUN_1404b8b20(lVar3 + 0x198,lVar2,&LAB_140dafb04);
      FUN_1404b8b20(lVar3 + 0x1a8,lVar2,&LAB_140dafb1c);
      if (*(int *)(param_3 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*param_3;
      }
      FUN_14289aca0(local_88,0,puVar5,0);
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x14);
      if (*(int *)(lVar4 + 0xb08) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = *(undefined2 **)(lVar4 + 0xb00);
      }
      FString::PrintfImpl(&local_98,L"Template=%s",puVar5);
      puVar5 = &DAT_143f3eda8;
      if (local_90 != 0) {
        puVar5 = local_98;
      }
      FURL::AddOption(local_88,puVar5);
      if (local_98 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      FURL::GetOption(local_88,L"HostPlatform=",0);
      cVar1 = FUN_1404d3a70(lVar3,local_88);
      if (cVar1 == '\0') {
        FUN_1404c9620(lVar2,lVar3);
        FUN_140dcedd0(param_1,4);
      }
      else {
        FUN_1404c9e30(lVar3);
        FString::operator=(lVar3 + 0x1b8,param_1 + 0x60);
      }
      FURL::~FURL(local_88);
    }
  }
  return;
}



// FUNCTION 140dc7040 FUN_140dc7040 body=356 status=ok
// SIG undefined FUN_140dc7040(void)

void FUN_140dc7040(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar6 = (**(code **)(*plVar3 + 0x148))(plVar3);
      lVar5 = FUN_140d3a420(uVar6);
      if (lVar5 != 0) {
        TBaseMulticastDelegate<void>::Remove(lVar5 + 0x38,*(undefined8 *)(param_1 + 0x28));
      }
      if (param_3 != '\0') {
        plVar1 = plVar3 + 0x134;
        plVar7 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)&PTR_FUN_143f4d290;
          FWeakObjectPtr::operator=(plVar7 + 1,param_1);
          plVar7[2] = (longlong)FUN_140dc95d0;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar7[4] = lVar5;
          *plVar7 = (longlong)&PTR_FUN_143f4d2d8;
        }
        uVar6 = 0;
        if (plVar7 != (longlong *)0x0) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
          puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
          iVar2 = (int)plVar3[0x135];
          uVar6 = *puVar8;
          *(int *)(plVar3 + 0x135) = iVar2 + 1;
          if (*(int *)((longlong)plVar3 + 0x9ac) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
          }
          puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
          *puVar8 = plVar7;
          *(undefined4 *)(puVar8 + 1) = 3;
        }
        *(undefined8 *)(param_1 + 0x30) = uVar6;
        FUN_140ba4250(plVar3,&DAT_146297e38,0);
      }
    }
  }
  return;
}



// FUNCTION 140dc71b0 FUN_140dc71b0 body=699 status=ok
// SIG undefined FUN_140dc71b0(void)

void FUN_140dc71b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 local_res8 [8];
  longlong *local_88;
  int local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined **local_48 [2];
  longlong *local_38;
  longlong *local_20;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
  TBaseMulticastDelegate<void>::Remove(lVar6 + 0x608,*(undefined8 *)(param_1 + 0x2c8));
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (param_2 != 1) {
    cVar3 = (param_2 == 4) + '\x06';
    FUN_140db3670(param_1,cVar3);
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_78,L"Matchmaking Error",L"Matchmaking",L"MatchmakingErrorCaption");
    uVar7 = FUN_140dbc170(param_1,local_60,cVar3);
    uVar7 = FUN_140b99a50(local_48,local_78,uVar7);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x478,uVar7);
    local_48[0] = &PTR_FUN_1443170a0;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
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
    if (local_58 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = local_58 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) {
      return;
    }
    (**(code **)*local_58)(local_58);
    LOCK();
    piVar2 = (int *)((longlong)local_58 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 != 1) {
      return;
    }
    (**(code **)(*local_58 + 8))(local_58,1);
    return;
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar3 != '\0') {
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
    cVar3 = FUN_140bc9f60(uVar7);
    if (cVar3 != '\0') goto LAB_140dc72f4;
  }
  iVar4 = FUN_140bba270(*(undefined8 *)(param_1 + 0x88));
  iVar5 = FUN_14046e5c0(*(undefined8 *)(param_1 + 0x88));
  if (iVar4 != iVar5) {
    lVar6 = FUN_140da64d0();
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(lVar6 + 0x3c);
    uVar7 = FUN_140da6050(&local_88,param_1,FUN_140dd5050);
    uVar8 = FUN_14164ab60();
    puVar9 = (undefined8 *)
             FUN_14158f860(uVar8,local_res8,uVar7,L"FMatchmaker_TickHostTravelDelay",0);
    *(undefined8 *)(param_1 + 0x2f0) = *puVar9;
    if (local_80 != 0) {
      if (local_88 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_88 + 0x28))(local_88,0);
      if (local_88 != (longlong *)0x0) {
        local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
      }
      local_80 = 0;
    }
    if (local_88 == (longlong *)0x0) {
      return;
    }
    FMemory::Free(local_88);
    return;
  }
LAB_140dc72f4:
  FUN_140dd5920(param_1);
  return;
}



// FUNCTION 140dc7470 FUN_140dc7470 body=771 status=ok
// SIG undefined FUN_140dc7470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc7470(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0 [2];
  undefined8 local_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_98 [16];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d8 = 0x120;
  if (param_2 == 0x120) {
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_c0 = param_1;
    iStack_b8 = param_3;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_78);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar5 + 1) = (undefined4)local_c0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = local_c0._4_4_;
      *(int *)(puVar5 + 2) = iStack_b8;
      *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_b4;
    }
    local_d0[0] = 0;
    local_88[0] = &LAB_140db29f0;
    local_d0[1] = 0x25;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d0,0);
    FGenericPlatformString::Memcpy(local_d0[0],L"on_join_matchmaking_session_complete",0x4a);
    FUN_140dcdc50(param_1,local_d0,local_88);
    if (local_d0[0] != 0) {
      FMemory::Free();
    }
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
    puVar5 = (undefined8 *)FName::FName(local_98,L"SPARK",1);
    FUN_1404d0c50(&local_a8,*puVar5);
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x168))(local_a8,param_1 + 0x1f0);
    }
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x14);
    if (param_3 == 1) {
      if (cVar4 != '\0') {
        uVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
        lVar7 = FUN_140bb6200(uVar6);
        if (lVar7 != 0) {
          FUN_1404e2170(lVar7,0x120);
        }
      }
      cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x14);
      if (cVar4 != '\0') {
        uVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
        lVar7 = FUN_140bb7900(uVar6);
        if (lVar7 != 0) {
          local_d8 = 0x120;
          lVar8 = (**(code **)(*local_a8 + 0x10))(local_a8,0x120);
          if ((lVar8 != 0) && (plVar9 = *(longlong **)(lVar8 + 0xa0), plVar9 != (longlong *)0x0)) {
            (**(code **)(*plVar9 + 0x38))(plVar9,&local_c0);
            if (1 < iStack_b8) {
              local_b0 = 0x120;
              FUN_1404e20e0(lVar7,0x120,&local_c0);
            }
            if (local_c0 != 0) {
              FMemory::Free();
            }
          }
        }
      }
    }
    else {
      if (cVar4 != '\0') {
        uVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
        lVar7 = FUN_140bb6200(uVar6);
        if (lVar7 != 0) {
          FUN_140dcedd0(param_1,(param_3 == 4) + '\x06');
          lVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
          FUN_1404c9620(*(undefined8 *)(lVar8 + 0xae8),lVar7);
        }
      }
      cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x14);
      if (cVar4 != '\0') {
        uVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
        lVar7 = FUN_140bb7900(uVar6);
        if (lVar7 != 0) {
          uVar6 = 1;
          if (param_3 == 4) {
            uVar6 = 7;
          }
          FUN_140db3670(param_1,uVar6);
        }
      }
    }
    plVar9 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140dc7780 FUN_140dc7780 body=183 status=ok
// SIG undefined FUN_140dc7780(void)

void FUN_140dc7780(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 local_res10 [3];
  longlong *local_18;
  longlong *local_10;
  
  local_res10[0] = 0x11f;
  if (param_2 == 0x11f) {
    puVar6 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
    FUN_1404d0c50(&local_18,*puVar6);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x168))(local_18,param_1 + 0xe8);
    }
    TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0x18,param_3);
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



// FUNCTION 140dc7840 FUN_140dc7840 body=1603 status=ok
// SIG undefined FUN_140dc7840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc7840(longlong *param_1,char param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  undefined1 auStack_238 [32];
  undefined1 local_218;
  longlong local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  void *local_1e8;
  longlong local_1e0 [3];
  longlong *local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  void *local_1a0;
  int local_198;
  undefined4 local_194;
  void *local_190;
  void *local_188;
  int local_180;
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  longlong local_168 [2];
  undefined1 *local_158 [2];
  longlong local_148 [4];
  longlong *local_128;
  int local_118;
  undefined **local_108;
  longlong *local_100;
  longlong local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [120];
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  uVar12 = 0;
  uStack_1f0 = CONCAT31(uStack_1f0._1_3_,param_2);
  local_128 = (longlong *)0x0;
  iVar14 = 0;
  local_118 = 0;
  local_1f8 = param_1;
  uStack_1ec = param_3;
  puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_148);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar9 + 1) = (undefined4)local_1f8;
    *(undefined4 *)((longlong)puVar9 + 0xc) = local_1f8._4_4_;
    *(undefined4 *)(puVar9 + 2) = uStack_1f0;
    *(undefined4 *)((longlong)puVar9 + 0x14) = uStack_1ec;
  }
  local_1e0[0] = 0;
  local_158[0] = &LAB_140db2b80;
  local_1e0[1] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e0,0);
  FGenericPlatformString::Memcpy(local_1e0[0],L"on_matchmaking_connect_complete",0x40);
  FUN_140dcdc50(param_1,local_1e0,local_158);
  if (local_1e0[0] != 0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    plVar16 = local_148;
    if (local_128 != (longlong *)0x0) {
      plVar16 = local_128;
    }
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x10))(plVar16,0);
    }
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar15 = param_1[8];
  plVar16 = (longlong *)param_1[9];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_1c8 = (longlong *)0x0;
  if (param_1 + 8 != local_1e0 + 2) {
    param_1[8] = 0;
    local_1e0[2] = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 9,&local_1c8);
    plVar3 = local_1c8;
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1c8 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
  }
  if (param_2 == '\0') {
    cVar6 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x14);
    if (cVar6 != '\0') {
      uVar12 = FWeakObjectPtr::Get((longlong)param_1 + 0x14);
      lVar13 = FUN_140bb7900(uVar12);
      if (lVar13 != 0) {
        FUN_140dd48f0(lVar13);
      }
    }
    lVar13 = *(longlong *)param_1[6];
    if (*(float *)(param_1[4] + 0x10) <= 0.0) {
      (**(code **)(lVar13 + 0x10))();
    }
    else {
      (**(code **)(lVar13 + 0x28))((longlong *)param_1[6],lVar15 + 0x28);
    }
  }
  else {
    local_108 = &PTR_FUN_143f769a8;
    local_100 = *(longlong **)(lVar15 + 0x30);
    local_f8 = *(longlong *)(lVar15 + 0x38);
    if (local_f8 != 0) {
      LOCK();
      *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
      UNLOCK();
    }
    FString::FString(local_f0,lVar15 + 0x40);
    FUN_1404e8890(local_e0,lVar15 + 0x50);
    local_68 = *(undefined8 *)(lVar15 + 200);
    local_60 = *(longlong *)(lVar15 + 0xd0);
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    local_58 = *(undefined4 *)(lVar15 + 0xd8);
    local_54 = *(undefined4 *)(lVar15 + 0xdc);
    local_50 = *(undefined4 *)(lVar15 + 0xe0);
    local_1b8 = (longlong *)0x0;
    if (param_1 + 6 != &local_1c0) {
      param_1[6] = 0;
      local_1c0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 7,&local_1b8);
      plVar3 = local_1b8;
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1b8 + 1;
        lVar15 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_1b8)(local_1b8);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1b8 + 8))(local_1b8,1);
          }
        }
      }
    }
    local_1a8 = (longlong *)0x0;
    if (param_1 + 4 != &local_1b0) {
      param_1[4] = 0;
      local_1b0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 5,&local_1a8);
      plVar3 = local_1a8;
      if (local_1a8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1a8 + 1;
        lVar15 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_1a8)(local_1a8);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1a8 + 8))(local_1a8,1);
          }
        }
      }
    }
    cVar6 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x14);
    if (cVar6 != '\0') {
      uVar10 = FWeakObjectPtr::Get((longlong)param_1 + 0x14);
      pvVar11 = (void *)FUN_140bb7900(uVar10);
      local_1e8 = pvVar11;
      if (pvVar11 != (void *)0x0) {
        local_208 = 0;
        local_200 = 0;
        puVar9 = (undefined8 *)FName::FName(local_178,L"SPARK",1);
        FUN_1404d0c50(&local_1f8,*puVar9);
        if ((local_1f8 != (longlong *)0x0) &&
           (cVar6 = (**(code **)(*local_1f8 + 0x288))(local_1f8,&local_108,&local_208),
           cVar6 != '\0')) {
          if (local_100 != (longlong *)0x0) {
            uVar10 = (**(code **)(*local_100 + 8))(local_100,local_170);
            puVar9 = (undefined8 *)FName::ToString(uVar10,local_168);
            if (*(int *)(puVar9 + 1) == 0) {
              puVar17 = &DAT_143f3eda8;
            }
            else {
              puVar17 = (undefined2 *)*puVar9;
            }
            FString::PrintfImpl(&local_188,L"?HostPlatform=%s",puVar17);
            uVar5 = local_200;
            if (local_180 != 0) {
              iVar14 = local_180 + -1;
            }
            local_190 = local_188;
            if (iVar14 != 0) {
              iVar4 = (int)local_200;
              lVar15 = (longlong)(int)local_200;
              iVar7 = (uint)((int)local_200 == 0) + iVar14 + (int)local_200;
              local_200 = CONCAT44(local_200._4_4_,iVar7);
              if (local_200._4_4_ < iVar7) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,uVar5 & 0xffffffff);
              }
              pvVar11 = (void *)(local_208 + (lVar15 - (ulonglong)(iVar4 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar11,local_190,(longlong)iVar14 * 2);
              *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar11) = 0;
              pvVar11 = local_1e8;
            }
            if (local_188 != (void *)0x0) {
              FMemory::Free(local_188);
            }
            if (local_168[0] != 0) {
              FMemory::Free();
            }
          }
          local_198 = (int)param_1[0xd];
          lVar15 = (longlong)local_198;
          local_1e8 = (void *)param_1[0xc];
          local_1a0 = (void *)0x0;
          if (local_198 == 0) {
            local_194 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1a0,local_198,0);
            _guard_xfg_dispatch_icall_nop(local_1a0,local_1e8,lVar15 * 2);
          }
          local_218 = (undefined1)param_1[0xe];
          FUN_1404e1d20(pvVar11,DAT_14686f220,&local_208,&local_1a0);
          if (local_1a0 != (void *)0x0) {
            FMemory::Free();
          }
        }
        *(undefined4 *)((longlong)pvVar11 + 0x50) = 1;
        lVar15 = FWeakObjectPtr::Get((longlong)param_1 + 0x14);
        FUN_1404c9620(*(undefined8 *)(lVar15 + 0xae8),pvVar11);
        if (CONCAT44(uStack_1ec,uStack_1f0) != 0) {
          LOCK();
          piVar2 = (int *)(CONCAT44(uStack_1ec,uStack_1f0) + 8);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            puVar9 = (undefined8 *)CONCAT44(uStack_1ec,uStack_1f0);
            (**(code **)*puVar9)(puVar9);
            LOCK();
            piVar2 = (int *)((longlong)puVar9 + 0xc);
            iVar14 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*(longlong *)CONCAT44(uStack_1ec,uStack_1f0) + 8))
                        ((longlong *)CONCAT44(uStack_1ec,uStack_1f0),1);
            }
          }
        }
        if (local_208 != 0) {
          FMemory::Free();
        }
      }
    }
    cVar6 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x14);
    if ((cVar6 != '\0') &&
       (lVar15 = FWeakObjectPtr::Get((longlong)param_1 + 0x14), *(longlong *)(lVar15 + 0xcb0) != 0))
    {
      cVar6 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x14);
      if (cVar6 != '\0') {
        lVar15 = FWeakObjectPtr::Get((longlong)param_1 + 0x14);
        uVar12 = *(undefined8 *)(lVar15 + 0xcb0);
      }
      uVar8 = FUN_140dbc780(param_1);
      FUN_1413c8dc0(uVar12,uVar8);
    }
    FUN_1404bf650(&local_108);
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar16 + 1;
    lVar15 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
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
  return;
}



// FUNCTION 140dc7e90 FUN_140dc7e90 body=1633 status=ok
// SIG undefined FUN_140dc7e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc7e90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong *plStack_240;
  longlong local_238 [7];
  longlong *local_200;
  longlong local_1f8 [4];
  undefined1 *local_1d8 [2];
  longlong local_1c8 [4];
  longlong *local_1a8;
  int local_198;
  undefined1 *local_188 [2];
  longlong local_178 [4];
  longlong *local_158;
  int local_148;
  undefined1 *local_138 [2];
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x14);
    if (cVar6 != '\0') {
      uVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
      lVar9 = FUN_140bb7900(uVar8);
      if ((lVar9 != 0) && (cVar6 = FUN_1404d2e60(lVar9), cVar6 != '\0')) {
        local_158 = (longlong *)0x0;
        local_148 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_178);
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[1] = param_1;
          *puVar7 = &PTR_FUN_143f77b70;
        }
        local_238[2] = 0;
        local_188[0] = &LAB_140db2bf0;
        local_238[3] = 0x1d;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_238 + 2,0);
        FGenericPlatformString::Memcpy(local_238[2],L"on_matchmaking_round_expired",0x3a);
        FUN_140dcdc50(param_1,local_238 + 2,local_188);
        if (local_238[2] != 0) {
          FMemory::Free();
        }
        if (local_148 != 0) {
          plVar11 = local_178;
          if (local_158 != (longlong *)0x0) {
            plVar11 = local_158;
          }
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x10))(plVar11,0);
          }
        }
        if (local_158 == (longlong *)0x0) {
          return;
        }
        FMemory::Free();
        return;
      }
    }
    cVar6 = FUN_140dc1420(param_1);
    if (cVar6 == '\0') {
      plVar11 = (longlong *)(param_1 + 0x20);
      lVar9 = *plVar11;
      plVar4 = *(longlong **)(param_1 + 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_200 = (longlong *)0x0;
      if (plVar11 != local_238 + 6) {
        *plVar11 = 0;
        local_238[6] = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((longlong *)(param_1 + 0x28),&local_200);
        plVar10 = local_200;
        if (local_200 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_200 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_200)(local_200);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_200 + 8))(local_200,1);
            }
          }
        }
      }
      cVar6 = FUN_140dc1330(param_1);
      if (cVar6 == '\0') {
        local_68 = (longlong *)0x0;
        local_58 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_88);
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[1] = param_1;
          *puVar7 = &PTR_FUN_143f77b70;
        }
        local_1f8[2] = 0;
        local_98[0] = &LAB_140db2b70;
        local_1f8[3] = 0x1d;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f8 + 2,0);
        FGenericPlatformString::Memcpy(local_1f8[2],L"on_matchmaking_round_expired",0x3a);
        FUN_140dcdc50(param_1,local_1f8 + 2,local_98);
        if (local_1f8[2] != 0) {
          FMemory::Free();
        }
        if (local_58 != 0) {
          plVar11 = local_88;
          if (local_68 != (longlong *)0x0) {
            plVar11 = local_68;
          }
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x10))(plVar11,0);
          }
        }
        if (local_68 != (longlong *)0x0) {
          FMemory::Free();
        }
        lVar9 = FUN_140dbc450(param_1);
        if (lVar9 == 0) {
          cVar6 = FUN_140dd3890(param_1);
          if (cVar6 != '\0') {
            FUN_140db86e0(param_1);
          }
        }
        else {
          uVar8 = FUN_140dbc450();
          FUN_1413c8ca0(uVar8,0);
          FUN_140db2f20(param_1);
        }
      }
      else {
        local_b8 = (longlong *)0x0;
        local_a8 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[1] = param_1;
          *puVar7 = &PTR_FUN_143f77b70;
        }
        local_1f8[0] = 0;
        local_e8[0] = &LAB_140db2a30;
        local_1f8[1] = 0x1d;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f8,0);
        FGenericPlatformString::Memcpy(local_1f8[0],L"on_matchmaking_round_expired",0x3a);
        FUN_140dcdc50(param_1,local_1f8,local_e8);
        if (local_1f8[0] != 0) {
          FMemory::Free();
        }
        if (local_a8 != 0) {
          plVar10 = local_d8;
          if (local_b8 != (longlong *)0x0) {
            plVar10 = local_b8;
          }
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10,0);
          }
        }
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (*(longlong *)(param_1 + 0x30) == 0) {
          FUN_140db5cc0(param_1);
        }
        else {
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          local_248 = lVar9;
          plStack_240 = plVar4;
          if (&local_248 != plVar11) {
            local_248 = *plVar11;
            plStack_240 = *(longlong **)(param_1 + 0x28);
            *plVar11 = lVar9;
            *(longlong **)(param_1 + 0x28) = plVar4;
            local_48 = lVar9;
            plStack_40 = plVar4;
          }
          plVar11 = plStack_240;
          if (plStack_240 != (longlong *)0x0) {
            LOCK();
            plVar10 = plStack_240 + 1;
            lVar9 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_240)(plStack_240);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plStack_240 + 8))(plStack_240,1);
              }
            }
          }
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar4 + 1;
        lVar9 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
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
    else {
      local_108 = (longlong *)0x0;
      local_f8 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_128);
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[1] = param_1;
        *puVar7 = &PTR_FUN_143f77b70;
      }
      local_238[4] = 0;
      local_138[0] = &LAB_140db2bc0;
      local_238[5] = 0x1d;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_238 + 4,0);
      FGenericPlatformString::Memcpy(local_238[4],L"on_matchmaking_round_expired",0x3a);
      FUN_140dcdc50(param_1,local_238 + 4,local_138);
      if (local_238[4] != 0) {
        FMemory::Free();
      }
      if (local_f8 != 0) {
        plVar11 = local_128;
        if (local_108 != (longlong *)0x0) {
          plVar11 = local_108;
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11,0);
        }
      }
      if (local_108 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  else {
    local_1a8 = (longlong *)0x0;
    local_198 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_1c8);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[1] = param_1;
      *puVar7 = &PTR_FUN_143f77b70;
    }
    local_238[0] = 0;
    local_1d8[0] = &LAB_140db29e0;
    local_238[1] = 0x1d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_238,0);
    FGenericPlatformString::Memcpy(local_238[0],L"on_matchmaking_round_expired",0x3a);
    FUN_140dcdc50(param_1,local_238,local_1d8);
    if (local_238[0] != 0) {
      FMemory::Free();
    }
    if (local_198 != 0) {
      plVar11 = local_1c8;
      if (local_1a8 != (longlong *)0x0) {
        plVar11 = local_1a8;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140dc8500 FUN_140dc8500 body=3283 status=ok
// SIG undefined FUN_140dc8500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc8500(longlong param_1,int param_2)

{
  int *piVar1;
  longlong **pplVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined8 uStack_460;
  int local_458;
  undefined4 uStack_454;
  undefined8 local_450;
  undefined8 uStack_448;
  longlong *local_440;
  longlong *local_438;
  longlong local_430 [7];
  longlong *local_3f8;
  longlong local_3f0 [2];
  longlong *local_3e0;
  int local_3d8;
  longlong local_3d0 [3];
  longlong *local_3b8;
  longlong local_3b0 [3];
  longlong *local_398;
  longlong local_390 [2];
  undefined **local_380;
  longlong local_378;
  longlong local_370;
  undefined8 local_368;
  undefined8 local_360;
  longlong local_358;
  longlong local_350;
  undefined1 local_348 [16];
  undefined **local_338;
  longlong local_330;
  longlong local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined **local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined2 local_2f8;
  undefined8 local_2f4;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined1 *local_278 [2];
  longlong local_268 [4];
  longlong *local_248;
  int local_238;
  undefined1 *local_228 [2];
  longlong local_218 [4];
  longlong *local_1f8;
  int local_1e8;
  undefined1 *local_1d8 [2];
  longlong local_1c8 [4];
  longlong *local_1a8;
  int local_198;
  undefined1 *local_188 [2];
  longlong local_178 [4];
  longlong *local_158;
  int local_148;
  undefined1 *local_138 [2];
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  plVar10 = (longlong *)(param_1 + 0x30);
  if ((longlong *)*plVar10 == (longlong *)0x0) {
    local_248 = (longlong *)0x0;
    local_238 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_268);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = param_1;
      *puVar6 = &PTR_FUN_143f77b70;
    }
    local_430[0] = 0;
    local_278[0] = &LAB_140db2d30;
    local_430[1] = 0x24;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_430,0);
    FGenericPlatformString::Memcpy(local_430[0],L"on_matchmaking_search_state_changed",0x48);
    FUN_140dcdc50(param_1,local_430,local_278);
    if (local_430[0] != 0) {
      FMemory::Free();
    }
    if (local_238 != 0) {
      plVar10 = local_268;
      if (local_248 != (longlong *)0x0) {
        plVar10 = local_248;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_248 == (longlong *)0x0) {
      return;
    }
    FMemory::Free();
    return;
  }
  local_468._0_4_ = (**(code **)(*(longlong *)*plVar10 + 0x30))();
  *(undefined4 *)(param_1 + 0xa0) = (undefined4)local_468;
  local_468 = param_1;
  if (param_2 != 2) {
    if (param_2 == 5) {
      local_468._4_4_ = *(undefined4 *)(param_1 + 0x9c);
      local_108 = (longlong *)0x0;
      local_f8 = 0;
      uStack_460 = param_1;
      local_458 = param_2;
      puVar6 = (undefined8 *)FUN_140438ef0(0x20,local_128);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = (undefined4)local_468;
        *(undefined4 *)((longlong)puVar6 + 0xc) = local_468._4_4_;
        *(int *)(puVar6 + 2) = (int)uStack_460;
        *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_460._4_4_;
        *puVar6 = &PTR_FUN_143f4d0b0;
        puVar6[3] = CONCAT44(uStack_454,local_458);
      }
      local_3d0[0] = 0;
      local_138[0] = &LAB_140db2a90;
      local_3d0[1] = 0x24;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_3d0,0);
      FGenericPlatformString::Memcpy(local_3d0[0],L"on_matchmaking_search_state_changed",0x48);
      FUN_140dcdc50(param_1,local_3d0,local_138);
      if (local_3d0[0] != 0) {
        FMemory::Free();
      }
      if (local_f8 != 0) {
        plVar12 = local_128;
        if (local_108 != (longlong *)0x0) {
          plVar12 = local_108;
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))(plVar12,0);
        }
      }
      if (local_108 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_3b8 = (longlong *)0x0;
      if (plVar10 != local_3d0 + 2) {
        *plVar10 = 0;
        local_3d0[2] = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_3b8);
        plVar10 = local_3b8;
        if (local_3b8 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_3b8 + 1;
          lVar8 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_3b8)(local_3b8);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_3b8 + 8))(local_3b8,1);
            }
          }
        }
      }
      if (*(char *)(param_1 + 0x78) != '\0') {
        *(undefined2 *)(param_1 + 0x78) = 0x100;
        FUN_140dd6120(param_1);
      }
      FUN_140dcf290(param_1);
      return;
    }
    uStack_460._0_4_ = param_2;
    if (1 < param_2 - 3U) {
      if (param_2 != 7) {
        return;
      }
      local_b8 = (longlong *)0x0;
      local_a8 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_d8);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar6 + 1) = (undefined4)local_468;
        *(undefined4 *)((longlong)puVar6 + 0xc) = local_468._4_4_;
        *(int *)(puVar6 + 2) = (int)uStack_460;
        *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_460._4_4_;
      }
      local_3b0[0] = 0;
      local_e8[0] = &LAB_140db2b90;
      local_3b0[1] = 0x24;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_3b0,0);
      FGenericPlatformString::Memcpy(local_3b0[0],L"on_matchmaking_search_state_changed",0x48);
      FUN_140dcdc50(param_1,local_3b0,local_e8);
      if (local_3b0[0] != 0) {
        FMemory::Free();
      }
      if (local_a8 != 0) {
        plVar12 = local_d8;
        if (local_b8 != (longlong *)0x0) {
          plVar12 = local_b8;
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))(plVar12,0);
        }
      }
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_398 = (longlong *)0x0;
      if (plVar10 != local_3b0 + 2) {
        *plVar10 = 0;
        local_3b0[2] = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_398);
        plVar10 = local_398;
        if (local_398 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_398 + 1;
          lVar8 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_398)(local_398);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_398 + 8))(local_398,1);
            }
          }
        }
      }
      lVar8 = FUN_140dbc450(param_1);
      if (lVar8 != 0) {
        uVar5 = FUN_140dbc780(param_1);
        uVar7 = FUN_140dbc450(param_1);
        FUN_1413c8dc0(uVar7,uVar5);
      }
      FUN_140db86e0(param_1);
      return;
    }
    local_68 = (longlong *)0x0;
    local_58 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_88);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar6 + 1) = (undefined4)local_468;
      *(undefined4 *)((longlong)puVar6 + 0xc) = local_468._4_4_;
      *(int *)(puVar6 + 2) = (int)uStack_460;
      *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_460._4_4_;
    }
    local_390[0] = 0;
    local_98[0] = &LAB_140db2c50;
    local_390[1] = 0x24;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_390,0);
    FGenericPlatformString::Memcpy(local_390[0],L"on_matchmaking_search_state_changed",0x48);
    FUN_140dcdc50(param_1,local_390,local_98);
    if (local_390[0] != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      plVar12 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar12 = local_68;
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    uStack_448 = (longlong *)0x0;
    if (plVar10 != &local_450) {
      *plVar10 = 0;
      local_450 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&uStack_448);
      plVar10 = uStack_448;
      if (uStack_448 != (longlong *)0x0) {
        LOCK();
        plVar12 = uStack_448 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*uStack_448)(uStack_448);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*uStack_448 + 8))(uStack_448,1);
          }
        }
      }
    }
    uVar7 = 5;
    if (param_2 == 4) {
      uVar7 = 7;
    }
    FUN_140db3670(param_1,uVar7);
    return;
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar3 != '\0') {
    cVar3 = FUN_140dbfc60(param_1 + 0x88);
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar8 = FUN_140bb7900(uVar7);
    if (((cVar3 != '\0') || (lVar8 != 0)) && (cVar3 = FUN_1404d2e60(lVar8), cVar3 != '\0')) {
      uStack_448._0_4_ = 2;
      local_1f8 = (longlong *)0x0;
      local_1e8 = 0;
      local_450 = param_1;
      puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_218);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar6 + 1) = (undefined4)local_450;
        *(undefined4 *)((longlong)puVar6 + 0xc) = local_450._4_4_;
        *(undefined4 *)(puVar6 + 2) = (undefined4)uStack_448;
        *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_448._4_4_;
      }
      local_430[2] = 0;
      local_228[0] = &LAB_140db2c70;
      local_430[3] = 0x24;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_430 + 2,0);
      FGenericPlatformString::Memcpy(local_430[2],L"on_matchmaking_search_state_changed",0x48);
      FUN_140dcdc50(param_1,local_430 + 2,local_228);
      if (local_430[2] != 0) {
        FMemory::Free();
      }
      if (local_1e8 != 0) {
        plVar12 = local_218;
        if (local_1f8 != (longlong *)0x0) {
          plVar12 = local_1f8;
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))(plVar12,0);
        }
      }
      if (local_1f8 != (longlong *)0x0) {
        FMemory::Free();
      }
      (**(code **)(*(longlong *)*plVar10 + 0x10))();
      return;
    }
  }
  plVar12 = (longlong *)0x0;
  local_338 = &PTR_FUN_143f769a8;
  local_330 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_310 = &PTR_FUN_143f769a0;
  local_318 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f4 = 0;
  local_2ec = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0xffffffff;
  local_2b4 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  local_280 = 9999;
  (**(code **)(*(longlong *)*plVar10 + 0x20))((longlong *)*plVar10,&local_338);
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar3 != '\0') {
    local_358 = local_330;
    local_350 = local_328;
    if (local_328 != 0) {
      LOCK();
      *(int *)(local_328 + 8) = *(int *)(local_328 + 8) + 1;
      UNLOCK();
    }
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar8 = FUN_14244c070(uVar7,&local_358);
    if (lVar8 != 0) {
      uStack_460._0_4_ = 2;
      local_1a8 = (longlong *)0x0;
      local_198 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_1c8);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar6 + 1) = (undefined4)local_468;
        *(undefined4 *)((longlong)puVar6 + 0xc) = local_468._4_4_;
        *(int *)(puVar6 + 2) = (int)uStack_460;
        *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_460._4_4_;
      }
      local_430[4] = 0;
      local_1d8[0] = &LAB_140db2ce0;
      local_430[5] = 0x24;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_430 + 4,0);
      FGenericPlatformString::Memcpy(local_430[4],L"on_matchmaking_search_state_changed",0x48);
      FUN_140dcdc50(param_1,local_430 + 4,local_1d8);
      if (local_430[4] != 0) {
        FMemory::Free();
      }
      if (local_198 != 0) {
        plVar12 = local_1c8;
        if (local_1a8 != (longlong *)0x0) {
          plVar12 = local_1a8;
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))(plVar12,0);
        }
      }
      if (local_1a8 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_3f8 = (longlong *)0x0;
      if (plVar10 != local_430 + 6) {
        *plVar10 = 0;
        local_430[6] = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_3f8);
        plVar10 = local_3f8;
        if (local_3f8 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_3f8 + 1;
          lVar8 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_3f8)(local_3f8);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_3f8 + 8))(local_3f8,1);
            }
          }
        }
      }
      FUN_140db1180(param_1,&local_338);
      FUN_140dc2440(param_1,&local_338);
      FUN_1404bf650(&local_338);
      return;
    }
  }
  if ((local_330 != 0) && (lVar8 = FUN_140dbbd70(param_1), lVar8 != 0)) {
    local_378 = local_330;
    local_370 = local_328;
    if (local_328 != 0) {
      LOCK();
      *(int *)(local_328 + 8) = *(int *)(local_328 + 8) + 1;
      UNLOCK();
    }
    local_368 = 0;
    local_380 = &PTR_FUN_143f740c8;
    local_360 = 0;
    iVar4 = FUN_1404cc400(lVar8,&local_380);
    FUN_1404bf980(&local_380);
    if (iVar4 != -1) {
      (**(code **)(*(longlong *)*plVar10 + 0x28))((longlong *)*plVar10,&local_338);
      FUN_1404bf650(&local_338);
      return;
    }
  }
  uStack_460._0_4_ = 2;
  local_158 = (longlong *)0x0;
  local_148 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_178);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar6 + 1) = (undefined4)local_468;
    *(undefined4 *)((longlong)puVar6 + 0xc) = local_468._4_4_;
    *(int *)(puVar6 + 2) = (int)uStack_460;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_460._4_4_;
  }
  local_3f0[0] = 0;
  local_188[0] = &LAB_140db2bb0;
  local_3f0[1] = 0x24;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_3f0,0);
  FGenericPlatformString::Memcpy(local_3f0[0],L"on_matchmaking_search_state_changed",0x48);
  FUN_140dcdc50(param_1,local_3f0,local_188);
  if (local_3f0[0] != 0) {
    FMemory::Free();
  }
  if (local_148 != 0) {
    plVar10 = local_178;
    if (local_158 != (longlong *)0x0) {
      plVar10 = local_158;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar6 = (undefined8 *)FName::FName(local_348,L"SPARK",1);
  uVar7 = *puVar6;
  lVar8 = operator_new(0x100);
  plVar10 = plVar12;
  if (lVar8 != 0) {
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x14);
    plVar10 = (longlong *)FUN_140da8330(lVar8,uVar9,uVar7);
  }
  plVar11 = (longlong *)operator_new(0x18);
  plVar13 = plVar12;
  if (plVar11 != (longlong *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_143f3f2e0;
    plVar11[2] = (longlong)plVar10;
    plVar13 = plVar11;
  }
  plVar11 = plVar10 + 1;
  if (plVar10 == (longlong *)0x0) {
    plVar11 = plVar12;
  }
  pplVar2 = (longlong **)(param_1 + 0x40);
  local_440 = plVar10;
  local_438 = plVar13;
  if (plVar11 != (longlong *)0x0) {
    if ((*plVar11 != 0) && (plVar11[1] != 0)) {
      piVar1 = (int *)(plVar11[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_140dc8c91;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    *plVar11 = (longlong)plVar10;
    plVar12 = (longlong *)plVar11[1];
    if (plVar13 != plVar12) {
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
        plVar12 = (longlong *)plVar11[1];
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
      plVar11[1] = (longlong)plVar13;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar13 + 1;
      lVar8 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  }
LAB_140dc8c91:
  if (pplVar2 != &local_440) {
    *pplVar2 = plVar10;
    local_440 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x48,&local_438);
  }
  plVar10 = local_438;
  if (local_438 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_438 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_438)(local_438);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_438 + 8))(local_438,1);
      }
    }
  }
  plVar10 = *pplVar2;
  uVar7 = FUN_1405317f0(&local_3e0,param_1,FUN_140dc7840);
  TBaseDelegate<FSlateBrush_const_*>::operator=(plVar10 + 3,uVar7);
  if (local_3d8 != 0) {
    if (local_3e0 == (longlong *)0x0) goto LAB_140dc8d56;
    (**(code **)(*local_3e0 + 0x28))(local_3e0,0);
    if (local_3e0 != (longlong *)0x0) {
      local_3e0 = (longlong *)FMemory::Realloc(local_3e0,0,0);
    }
    local_3d8 = 0;
  }
  if (local_3e0 != (longlong *)0x0) {
    FMemory::Free(local_3e0);
  }
LAB_140dc8d56:
  (**(code **)(**pplVar2 + 8))(*pplVar2,&local_338);
  FUN_1404bf650(&local_338);
  return;
}



// FUNCTION 140dc91e0 FUN_140dc91e0 body=874 status=ok
// SIG undefined FUN_140dc91e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc91e0(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong local_140 [2];
  longlong *local_130;
  longlong *local_128;
  undefined1 *local_118 [2];
  longlong local_108 [4];
  longlong *local_e8;
  int local_d8;
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_148 = 0x120;
  if (param_2 != 0x120) {
    return;
  }
  *(undefined1 *)(param_1 + 0x2d9) = 0;
  puVar4 = (undefined8 *)FName::FName(&local_148,L"SPARK",1);
  FUN_1404d0c50(&local_130,*puVar4);
  if (local_130 != (longlong *)0x0) {
    (**(code **)(*local_130 + 0x40))(local_130,param_1 + 0xb8);
  }
  if (param_3 == 1) {
    lVar5 = FUN_140db6c20(param_1);
    if (lVar5 != 0) {
      uStack_150 = CONCAT44(uStack_150._4_4_,1);
      local_e8 = (longlong *)0x0;
      local_d8 = 0;
      local_158 = param_1;
      puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_108);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar4 + 1) = (undefined4)local_158;
        *(undefined4 *)((longlong)puVar4 + 0xc) = local_158._4_4_;
        *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_150;
        *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_150._4_4_;
      }
      local_140[0] = 0;
      local_118[0] = &LAB_140db29f0;
      local_140[1] = 0x1f;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_140,0);
      FGenericPlatformString::Memcpy(local_140[0],L"on_matchmaking_session_created",0x3e);
      FUN_140dcdc50(param_1,local_140,local_118);
      if (local_140[0] != 0) {
        FMemory::Free();
      }
      if (local_d8 != 0) {
        plVar7 = local_108;
        if (local_e8 != (longlong *)0x0) {
          plVar7 = local_e8;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free();
      }
      FUN_140dd0a90(param_1,2);
      FUN_140db4a10(param_1);
      goto LAB_140dc94ec;
    }
    local_98 = (longlong *)0x0;
    local_88 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_168 = 0;
    local_c8[0] = &LAB_140db2c60;
    uStack_160 = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
    FGenericPlatformString::Memcpy(local_168,L"on_matchmaking_session_created",0x3e);
    FUN_140dcdc50(param_1,&local_168,local_c8);
    if (local_168 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      plVar7 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar7 = local_98;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    uVar6 = 1;
  }
  else {
    uStack_160 = CONCAT44(uStack_160._4_4_,param_3);
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_168 = param_1;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_68);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar4 + 1) = (undefined4)local_168;
      *(undefined4 *)((longlong)puVar4 + 0xc) = local_168._4_4_;
      *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_160;
      *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_160._4_4_;
    }
    local_158 = 0;
    local_78[0] = &LAB_140db29f0;
    uStack_150 = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
    FGenericPlatformString::Memcpy(local_158,L"on_matchmaking_session_created",0x3e);
    FUN_140dcdc50(param_1,&local_158,local_78);
    if (local_158 != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      plVar7 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar7 = local_48;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    uVar6 = 1;
    if (param_3 == 4) {
      uVar6 = 7;
    }
  }
  FUN_140db3670(param_1,uVar6);
LAB_140dc94ec:
  plVar7 = local_128;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_128 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  return;
}



// FUNCTION 140dc9550 FUN_140dc9550 body=128 status=ok
// SIG undefined FUN_140dc9550(void)

void FUN_140dc9550(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar3 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar2 = FUN_140bb7900(uVar1);
    if (((lVar2 != 0) && (param_3 == '\x03')) && (*(char *)(param_1 + 0x10) == '\x02')) {
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14);
      if (cVar3 != '\0') {
        uVar1 = FWeakObjectPtr::Get(param_1 + 0x14);
        lVar2 = FUN_140bb7900(uVar1);
        if (lVar2 != 0) {
          FUN_140dd6120(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140dc95d0 FUN_140dc95d0 body=243 status=ok
// SIG undefined FUN_140dc95d0(void)

void FUN_140dc95d0(longlong param_1,char *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  longlong *local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (TBaseMulticastDelegate<void>::Remove(lVar1 + 0x9a0,*(undefined8 *)(param_1 + 0x30)),
       *param_2 == '\x02')) {
      local_18 = (longlong *)0x0;
      local_10 = 0;
      FUN_140dbb2f0(&local_18);
      FUN_140da6510(&local_18,local_res8);
      plVar4 = local_18;
      iVar6 = (int)local_10;
      plVar3 = plVar4;
      if (0 < (int)local_10) {
        FUN_140befb30(lVar1,local_18,0,0);
      }
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 2;
      }
      if (plVar4 != (longlong *)0x0) {
        FMemory::Free(plVar4);
      }
    }
  }
  return;
}



// FUNCTION 140dc96d0 FUN_140dc96d0 body=179 status=ok
// SIG undefined FUN_140dc96d0(void)

void FUN_140dc96d0(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_res10;
  longlong *local_18;
  longlong *local_10;
  
  local_res10 = *param_2;
  iVar5 = FUN_1404bb3d0(param_1 + 0x40,&local_res10);
  if (0 < iVar5) {
    FUN_1404cf890(&local_18,0);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x180))(local_18,param_1 + 0x50);
    }
    if (param_3 == 0) {
      FUN_140db43a0(param_1);
    }
    else {
      *(int *)(param_1 + 0x34) = param_3;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140dc9800 FUN_140dc9800 body=522 status=ok
// SIG undefined FUN_140dc9800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc9800(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  longlong *local_150;
  undefined4 local_148 [2];
  undefined8 local_140;
  longlong *local_138;
  undefined4 local_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar6 = (**(code **)(*param_1 + 0x2b0))();
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
      local_140 = *param_2;
      local_128 = &PTR_FUN_143f769a8;
      local_100 = &PTR_FUN_143f769a0;
      local_150 = (longlong *)param_2[1];
      local_148[0] = 3;
      local_138 = (longlong *)0x0;
      local_130 = 0xffffffff;
      local_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e4 = 0;
      local_dc = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0xffffffff;
      local_a4 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 9999;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_150 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_150 + 1) = (int)local_150[1] + 1;
        UNLOCK();
      }
      local_158 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_138,&local_150);
      plVar5 = local_150;
      if (local_150 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_150 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_150)(local_150);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_150 + 8))(local_150,1);
          }
        }
      }
      local_130 = param_3;
      TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(&local_60,param_4);
      FUN_140be4f30(lVar6,local_148);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_60);
      FUN_1404bf650(&local_128);
      plVar5 = local_138;
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_138 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_138)(local_138);
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



// FUNCTION 140dc9a10 FUN_140dc9a10 body=165 status=ok
// SIG undefined FUN_140dc9a10(void)

void FUN_140dc9a10(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  
  if (*(char *)(param_1 + 0x10) == '\x03') {
    local_res8 = *param_2;
    FUN_1404bb3d0(param_1 + 0xd0,&local_res8);
    iVar1 = *(int *)(param_1 + 0xe8);
    *(int *)(param_1 + 0xe8) = iVar1 + 1;
    if (*(int *)(param_1 + 0xec) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xe0,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0xe0));
    *puVar3 = *param_2;
    lVar2 = param_2[1];
    puVar3[1] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    FUN_140db86e0(param_1);
  }
  return;
}


