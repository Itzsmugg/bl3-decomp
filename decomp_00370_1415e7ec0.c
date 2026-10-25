// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1415e7ec0 FUN_1415e7ec0 body=262 status=ok
// SIG undefined FUN_1415e7ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_1415e7ec0(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  local_30 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0xffffffff;
  param_2[0xf] = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_2[0x14] = 0;
  FUN_1415f5cc0(param_2 + 2,&local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 0x10,&local_40,4);
  }
  if (*(longlong *)(param_2 + 0x12) != 0) {
    FMemory::Free();
    lVar1 = local_38;
  }
  *(longlong *)(param_2 + 0x12) = lVar1;
  param_2[0x14] = (undefined4)local_30;
  local_38 = 0;
  local_30 = local_30 & 0xffffffff00000000;
  TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 1415e7fd0 operator<FTextCache::FCacheKey,FText>_TTuple<FTextCache::FCacheKey,FText> body=142 status=ok
// SIG undefined operator<FTextCache::FCacheKey,FText>_TTuple<FTextCache::FCacheKey,FText>(void)

undefined4 *
TPairInitializer<FTextCache::FCacheKey_const_&,FText_const_&>::
operator<FTextCache::FCacheKey,FText>_TTuple<FTextCache::FCacheKey,FText>
          (longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  FString::FString(param_2 + 4,puVar1 + 4);
  FString::FString(param_2 + 8,puVar1 + 8);
  *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(puVar1 + 0xc);
  param_2[0xd] = puVar1[0xd];
  *(undefined8 *)(param_2 + 0xe) = *puVar2;
  lVar3 = puVar2[1];
  *(longlong *)(param_2 + 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_2[0x12] = *(undefined4 *)(puVar2 + 2);
  return param_2;
}



// FUNCTION 1415e8060 operator<FLocKey,FPolyglotTextData>_TTuple<FLocKey,FPolyglotTextData> body=215 status=ok
// SIG undefined operator<FLocKey,FPolyglotTextData>_TTuple<FLocKey,FPolyglotTextData>(void)

longlong TPairInitializer<FLocKey_const_&,FPolyglotTextData_const_&>::
         operator<FLocKey,FPolyglotTextData>_TTuple<FLocKey,FPolyglotTextData>
                   (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  lVar1 = *param_1;
  puVar2 = (undefined1 *)param_1[1];
  FString::FString(param_2,lVar1);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
  *(undefined1 *)(param_2 + 0x18) = *puVar2;
  FString::FString(param_2 + 0x20,puVar2 + 8);
  FString::FString(param_2 + 0x30,puVar2 + 0x18);
  FString::FString(param_2 + 0x40,puVar2 + 0x28);
  FString::FString(param_2 + 0x50,puVar2 + 0x38);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_2 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x94) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined4 *)(param_2 + 0xa8) = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((undefined8 *)(param_2 + 0x60),puVar2 + 0x48);
  *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(puVar2 + 0x98);
  lVar1 = *(longlong *)(puVar2 + 0xa0);
  *(longlong *)(param_2 + 0xb8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(puVar2 + 0xa8);
  return param_2;
}



// FUNCTION 1415e8140 operator<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>_TTuple<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_> body=299 status=ok
// SIG undefined operator<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>_TTuple<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
TKeyInitializer<FName_const_&>::
operator<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>_TTuple<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [6];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78[2] = 0;
  local_78[3] = 0;
  local_40 = 0;
  local_30 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 1,local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 8,&local_40,4);
  }
  if (param_2[9] != 0) {
    FMemory::Free();
    lVar1 = local_38;
  }
  param_2[9] = lVar1;
  *(undefined4 *)(param_2 + 10) = (undefined4)local_30;
  local_30 = local_30 & 0xffffffff00000000;
  local_38 = 0;
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_78,0);
  if (local_78[4] != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1415e8270 operator<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_> body=251 status=ok
// SIG undefined operator<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
TKeyInitializer<void_*_const_&>::
operator<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 1,&local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 8,local_40,4);
  }
  if (param_2[9] != 0) {
    FMemory::Free();
    lVar1 = local_38;
  }
  param_2[9] = lVar1;
  *(undefined4 *)(param_2 + 10) = local_30;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 1415e8370 operator<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_> body=302 status=ok
// SIG undefined operator<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong TKeyInitializer<FString_const_&>::
         operator<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
                   (undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [6];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78[2] = 0;
  local_78[3] = 0;
  local_40 = 0;
  local_30 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  FString::FString(param_2,*param_1);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  TSparseArray<TSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 0x10,local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x48),&local_40,4);
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FMemory::Free();
    lVar1 = local_38;
  }
  *(longlong *)(param_2 + 0x50) = lVar1;
  *(undefined4 *)(param_2 + 0x58) = (undefined4)local_30;
  local_30 = local_30 & 0xffffffff00000000;
  local_38 = 0;
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_78,0);
  if (local_78[4] != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1415e84a0 operator<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_> body=302 status=ok
// SIG undefined operator<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong TKeyInitializer<FString_const_&>::
         operator<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>
                   (undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [6];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78[2] = 0;
  local_78[3] = 0;
  local_40 = 0;
  local_30 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  FString::FString(param_2,*param_1);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  TSparseArray<TSetElement<TTuple<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 0x10,local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x48),&local_40,4);
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FMemory::Free();
    lVar1 = local_38;
  }
  *(longlong *)(param_2 + 0x50) = lVar1;
  *(undefined4 *)(param_2 + 0x58) = (undefined4)local_30;
  local_30 = local_30 & 0xffffffff00000000;
  local_38 = 0;
  TSparseArray<TSetElement<TTuple<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_78,0);
  if (local_78[4] != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1415e85d0 operator<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>_TTuple<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo> body=267 status=ok
// SIG undefined operator<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>_TTuple<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
TKeyInitializer<enum_ELocalizedTextSourceCategory_&&>::
operator<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>_TTuple<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>
          (undefined8 *param_1,undefined1 *param_2)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = 0xffffffff;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_20 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_84 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = 0;
  *param_2 = *(undefined1 *)*param_1;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
            (param_2 + 8,&local_b8);
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
            (param_2 + 0x58,&local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_68);
  local_70 = local_70 & 0xffffffff00000000;
  if (local_78 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_b8);
  return param_2;
}



// FUNCTION 1415e86e0 AsCurrencyTemplate<int,int> body=576 status=ok
// SIG undefined AsCurrencyTemplate<int,int>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FText::AsCurrencyTemplate<int,int>
                   (longlong param_1,ulonglong param_2,undefined8 param_3,longlong *param_4,
                   longlong *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  longlong *local_198;
  longlong local_190 [3];
  longlong *local_178;
  longlong *plStack_170;
  undefined4 local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  longlong *plStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined4 local_118 [2];
  longlong local_110;
  undefined1 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [112];
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  bVar10 = false;
  local_168 = 0;
  iVar7 = (int)param_2;
  local_198 = param_4;
  local_160 = param_3;
  lVar3 = FInternationalization::Get();
  lVar4 = *param_5;
  plVar9 = local_198;
  if (lVar4 == 0) {
    plVar9 = *(longlong **)(lVar3 + 0x40);
    lVar4 = *(longlong *)(lVar3 + 0x38);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    bVar10 = true;
  }
  if ((bVar10) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
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
  uVar5 = local_160;
  lVar4 = FUN_1415da670(lVar4,local_160);
  plVar9 = local_198;
  local_190[0] = 0;
  local_190[1] = 0;
  uVar6 = param_2 >> 0x1f & 1;
  plVar8 = local_198;
  if (local_198 == (longlong *)0x0) {
    plVar8 = (longlong *)(lVar4 + 0x8c);
  }
  local_138 = *plVar8;
  lStack_130 = plVar8[1];
  iVar2 = -iVar7;
  if ((char)uVar6 == '\0') {
    iVar2 = iVar7;
  }
  local_128 = plVar8[2];
  local_1a8 = local_190;
  FastDecimalFormat::Internal::IntegralToString(uVar6,(longlong)iVar2,lVar4,&local_138);
  local_158 = *param_5;
  local_150 = param_5[1];
  if (local_150 != 0) {
    LOCK();
    *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
    UNLOCK();
  }
  local_118[0] = 0;
  local_f0 = 0;
  local_110 = (longlong)iVar7;
  uVar5 = FString::FString(local_e8,uVar5);
  local_1a8 = &local_158;
  uVar5 = FTextHistory_AsCurrency::FTextHistory_AsCurrency(local_d8,local_118,uVar5,plVar9);
  plStack_170 = (longlong *)
                SharedPointerInternals::
                NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsCurrency>,FString,FTextHistory_AsCurrency>
                          (local_190,uVar5);
  local_178 = plStack_170 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_178,local_178,local_178);
  local_148 = local_178;
  plStack_140 = plStack_170;
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
    UNLOCK();
  }
  FText(param_1,&local_148);
  plVar9 = plStack_170;
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_170 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_170)(plStack_170);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  FTextHistory_FormatNumber::~FTextHistory_FormatNumber(local_d8);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (local_190[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415e8920 AsCurrencyTemplate<float,float> body=571 status=ok
// SIG undefined AsCurrencyTemplate<float,float>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FText::AsCurrencyTemplate<float,float>
                   (longlong param_1,float param_2,longlong *param_3,undefined8 *param_4,
                   longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  longlong *local_1a8;
  longlong local_1a0 [3];
  longlong *local_188;
  longlong *plStack_180;
  undefined4 local_178;
  longlong local_170;
  longlong local_168;
  longlong *local_158;
  longlong *plStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_128 [2];
  float local_120;
  undefined1 local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [112];
  longlong local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  bVar9 = false;
  local_178 = 0;
  local_1a8 = param_3;
  lVar4 = FInternationalization::Get();
  lVar5 = *param_5;
  plVar8 = local_1a8;
  if (lVar5 == 0) {
    plVar8 = *(longlong **)(lVar4 + 0x40);
    lVar5 = *(longlong *)(lVar4 + 0x38);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
  }
  if ((bVar9) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar8 = local_1a8;
  lVar5 = FUN_1415da670(lVar5,local_1a8);
  local_1a0[0] = 0;
  local_1a0[1] = 0;
  puVar7 = param_4;
  if (param_4 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(lVar5 + 0x8c);
  }
  local_148 = *puVar7;
  uStack_140 = puVar7[1];
  local_138 = puVar7[2];
  FastDecimalFormat::Internal::FractionalToString((double)param_2,lVar5,&local_148,local_1a0);
  local_170 = *param_5;
  local_168 = param_5[1];
  if (local_168 != 0) {
    LOCK();
    *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
    UNLOCK();
  }
  local_128[0] = 2;
  local_100 = 0;
  local_120 = param_2;
  uVar6 = FString::FString(local_f8,plVar8);
  local_1b8 = &local_170;
  uVar6 = FTextHistory_AsCurrency::FTextHistory_AsCurrency(local_e8,local_128,uVar6,param_4);
  plStack_180 = (longlong *)
                SharedPointerInternals::
                NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsCurrency>,FString,FTextHistory_AsCurrency>
                          (local_1a0,uVar6);
  local_188 = plStack_180 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_188,local_188,local_188);
  local_158 = local_188;
  plStack_150 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
    UNLOCK();
  }
  FText(param_1,&local_158);
  plVar8 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_180 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_180)(plStack_180);
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
  if (local_78 != 0) {
    FMemory::Free();
  }
  FTextHistory_FormatNumber::~FTextHistory_FormatNumber(local_e8);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (local_1a0[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415e8b60 AsNumberTemplate<unsigned_char,unsigned_char> body=508 status=ok
// SIG undefined AsNumberTemplate<unsigned_char,unsigned_char>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FText::AsNumberTemplate<unsigned_char,unsigned_char>
                   (longlong param_1,byte param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_198 [32];
  longlong **local_178;
  byte local_168;
  longlong *local_160;
  undefined8 local_158;
  longlong *local_148;
  longlong *plStack_140;
  longlong local_138;
  longlong local_130;
  longlong *local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_f8 [2];
  ulonglong local_f0;
  undefined1 local_d0;
  undefined1 local_c8 [112];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  bVar9 = false;
  local_160 = (longlong *)((ulonglong)local_160 & 0xffffffff00000000);
  local_168 = param_2;
  lVar4 = FInternationalization::Get();
  lVar5 = *param_4;
  plVar8 = local_160;
  if (lVar5 == 0) {
    plVar8 = *(longlong **)(lVar4 + 0x40);
    lVar5 = *(longlong *)(lVar4 + 0x38);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
  }
  if ((bVar9) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  lVar5 = FUN_1415db8e0(lVar5);
  local_f0 = (ulonglong)local_168;
  local_160 = (longlong *)0x0;
  local_158 = 0;
  puVar7 = param_3;
  if (param_3 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(lVar5 + 0x8c);
  }
  local_178 = &local_160;
  local_118 = *puVar7;
  uStack_110 = puVar7[1];
  local_108 = puVar7[2];
  FastDecimalFormat::Internal::IntegralToString(0,local_f0,lVar5,&local_118);
  local_138 = *param_4;
  local_130 = param_4[1];
  if (local_130 != 0) {
    LOCK();
    *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
    UNLOCK();
  }
  local_f8[0] = 0;
  local_d0 = 0;
  uVar6 = FTextHistory_AsNumber::FTextHistory_AsNumber(local_c8,local_f8,param_3,&local_138);
  plStack_140 = (longlong *)
                SharedPointerInternals::
                NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsNumber>,FString,FTextHistory_AsNumber>
                          (&local_160,uVar6);
  local_148 = plStack_140 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_148,local_148,local_148);
  local_128 = local_148;
  plStack_120 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
    UNLOCK();
  }
  FText(param_1,&local_128);
  plVar8 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_140 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_140)(plStack_140);
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
  FTextHistory_FormatNumber::~FTextHistory_FormatNumber(local_c8);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (local_160 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415e8d60 AsNumberTemplate<int,int> body=522 status=ok
// SIG undefined AsNumberTemplate<int,int>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FText::AsNumberTemplate<int,int>
                   (longlong param_1,ulonglong param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  longlong *local_178;
  longlong local_170 [3];
  longlong *local_158;
  longlong *plStack_150;
  undefined4 local_148;
  longlong local_140;
  longlong local_138;
  longlong *local_128;
  longlong *plStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  undefined4 local_f8 [2];
  longlong local_f0;
  undefined1 local_d0;
  undefined1 local_c8 [112];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  bVar10 = false;
  local_148 = 0;
  iVar7 = (int)param_2;
  local_178 = param_3;
  lVar3 = FInternationalization::Get();
  lVar4 = *param_4;
  plVar9 = local_178;
  if (lVar4 == 0) {
    plVar9 = *(longlong **)(lVar3 + 0x40);
    lVar4 = *(longlong *)(lVar3 + 0x38);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    bVar10 = true;
  }
  if ((bVar10) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
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
  lVar4 = FUN_1415db8e0(lVar4);
  plVar9 = local_178;
  local_170[0] = 0;
  local_170[1] = 0;
  uVar6 = param_2 >> 0x1f & 1;
  plVar8 = local_178;
  if (local_178 == (longlong *)0x0) {
    plVar8 = (longlong *)(lVar4 + 0x8c);
  }
  local_118 = *plVar8;
  lStack_110 = plVar8[1];
  iVar2 = -iVar7;
  if ((char)uVar6 == '\0') {
    iVar2 = iVar7;
  }
  local_108 = plVar8[2];
  local_188 = local_170;
  FastDecimalFormat::Internal::IntegralToString(uVar6,(longlong)iVar2,lVar4,&local_118);
  local_140 = *param_4;
  local_138 = param_4[1];
  if (local_138 != 0) {
    LOCK();
    *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
    UNLOCK();
  }
  local_f8[0] = 0;
  local_d0 = 0;
  local_f0 = (longlong)iVar7;
  uVar5 = FTextHistory_AsNumber::FTextHistory_AsNumber(local_c8,local_f8,plVar9,&local_140);
  plStack_150 = (longlong *)
                SharedPointerInternals::
                NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsNumber>,FString,FTextHistory_AsNumber>
                          (local_170,uVar5);
  local_158 = plStack_150 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_158,local_158,local_158);
  local_128 = local_158;
  plStack_120 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
    UNLOCK();
  }
  FText(param_1,&local_128);
  plVar9 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_150 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  FTextHistory_FormatNumber::~FTextHistory_FormatNumber(local_c8);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (local_170[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415e8f70 AsNumberTemplate<unsigned_int,__int64> body=510 status=ok
// SIG undefined AsNumberTemplate<unsigned_int,__int64>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FText::AsNumberTemplate<unsigned_int,__int64>
                   (longlong param_1,uint param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_198 [32];
  longlong **local_178;
  uint local_168;
  longlong *local_160;
  undefined8 local_158;
  longlong *local_148;
  longlong *plStack_140;
  longlong local_138;
  longlong local_130;
  longlong *local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_f8 [2];
  ulonglong local_f0;
  undefined1 local_d0;
  undefined1 local_c8 [112];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  bVar9 = false;
  local_160 = (longlong *)((ulonglong)local_160 & 0xffffffff00000000);
  local_168 = param_2;
  lVar4 = FInternationalization::Get();
  lVar5 = *param_4;
  plVar8 = local_160;
  if (lVar5 == 0) {
    plVar8 = *(longlong **)(lVar4 + 0x40);
    lVar5 = *(longlong *)(lVar4 + 0x38);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
  }
  if ((bVar9) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  lVar5 = FUN_1415db8e0(lVar5);
  local_f0 = (ulonglong)local_168;
  local_160 = (longlong *)0x0;
  local_158 = 0;
  puVar7 = param_3;
  if (param_3 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(lVar5 + 0x8c);
  }
  local_178 = &local_160;
  local_118 = *puVar7;
  uStack_110 = puVar7[1];
  local_108 = puVar7[2];
  FastDecimalFormat::Internal::IntegralToString(0,local_f0,lVar5,&local_118);
  local_138 = *param_4;
  local_130 = param_4[1];
  if (local_130 != 0) {
    LOCK();
    *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
    UNLOCK();
  }
  local_f8[0] = 1;
  local_d0 = 0;
  uVar6 = FTextHistory_AsNumber::FTextHistory_AsNumber(local_c8,local_f8,param_3,&local_138);
  plStack_140 = (longlong *)
                SharedPointerInternals::
                NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsNumber>,FString,FTextHistory_AsNumber>
                          (&local_160,uVar6);
  local_148 = plStack_140 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_148,local_148,local_148);
  local_128 = local_148;
  plStack_120 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
    UNLOCK();
  }
  FText(param_1,&local_128);
  plVar8 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_140 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_140)(plStack_140);
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
  FTextHistory_FormatNumber::~FTextHistory_FormatNumber(local_c8);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (local_160 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415e9170 AsNumberTemplate<float,float> body=523 status=ok
// SIG undefined AsNumberTemplate<float,float>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FText::AsNumberTemplate<float,float>
                   (longlong param_1,float param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined8 local_160;
  longlong *local_158;
  longlong *plStack_150;
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108 [2];
  float local_100;
  undefined1 local_e0;
  undefined1 local_d8 [112];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  bVar9 = false;
  local_168 = (longlong *)((ulonglong)local_168 & 0xffffffff00000000);
  lVar4 = FInternationalization::Get();
  lVar5 = *param_4;
  plVar8 = local_168;
  if (lVar5 == 0) {
    plVar8 = *(longlong **)(lVar4 + 0x40);
    lVar5 = *(longlong *)(lVar4 + 0x38);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
  }
  if ((bVar9) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  lVar5 = FUN_1415db8e0(lVar5);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  puVar7 = param_3;
  if (param_3 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(lVar5 + 0x8c);
  }
  local_128 = *puVar7;
  uStack_120 = puVar7[1];
  local_118 = puVar7[2];
  FastDecimalFormat::Internal::FractionalToString((double)param_2,lVar5,&local_128,&local_168);
  local_148 = *param_4;
  local_140 = param_4[1];
  if (local_140 != 0) {
    LOCK();
    *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
    UNLOCK();
  }
  local_108[0] = 2;
  local_e0 = 0;
  local_100 = param_2;
  uVar6 = FTextHistory_AsNumber::FTextHistory_AsNumber(local_d8,local_108,param_3,&local_148);
  plStack_150 = (longlong *)
                SharedPointerInternals::
                NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsNumber>,FString,FTextHistory_AsNumber>
                          (&local_168,uVar6);
  local_158 = plStack_150 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_158,local_158,local_158);
  local_138 = local_158;
  plStack_130 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
    UNLOCK();
  }
  FText(param_1,&local_138);
  plVar8 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_150)(plStack_150);
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
  FTextHistory_FormatNumber::~FTextHistory_FormatNumber(local_d8);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (local_168 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415e9380 AsPercentTemplate<float,float> body=531 status=ok
// SIG undefined AsPercentTemplate<float,float>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FText::AsPercentTemplate<float,float>
                   (longlong param_1,float param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined8 local_160;
  longlong *local_158;
  longlong *plStack_150;
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108 [2];
  float local_100;
  undefined1 local_e0;
  undefined1 local_d8 [112];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  bVar9 = false;
  local_168 = (longlong *)((ulonglong)local_168 & 0xffffffff00000000);
  lVar4 = FInternationalization::Get();
  lVar5 = *param_4;
  plVar8 = local_168;
  if (lVar5 == 0) {
    plVar8 = *(longlong **)(lVar4 + 0x40);
    lVar5 = *(longlong *)(lVar4 + 0x38);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
  }
  if ((bVar9) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  lVar5 = FUN_1415dcd30(lVar5);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  puVar7 = param_3;
  if (param_3 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(lVar5 + 0x8c);
  }
  local_128 = *puVar7;
  uStack_120 = puVar7[1];
  local_118 = puVar7[2];
  FastDecimalFormat::Internal::FractionalToString
            ((double)(param_2 * 100.0),lVar5,&local_128,&local_168);
  local_148 = *param_4;
  local_140 = param_4[1];
  if (local_140 != 0) {
    LOCK();
    *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
    UNLOCK();
  }
  local_108[0] = 2;
  local_e0 = 0;
  local_100 = param_2;
  uVar6 = FTextHistory_AsPercent::FTextHistory_AsPercent(local_d8,local_108,param_3,&local_148);
  plStack_150 = (longlong *)
                SharedPointerInternals::
                NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsPercent>,FString,FTextHistory_AsPercent>
                          (&local_168,uVar6);
  local_158 = plStack_150 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_158,local_158,local_158);
  local_138 = local_158;
  plStack_130 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
    UNLOCK();
  }
  FText(param_1,&local_138);
  plVar8 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_150)(plStack_150);
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
  FTextHistory_FormatNumber::~FTextHistory_FormatNumber(local_d8);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (local_168 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415e95a0 Cast<TextFormatTokens::FArgumentModifierTokenSpecifier> body=67 status=ok
// SIG undefined Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(void)

int * FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_14160c2e0();
  if (((piVar1[3] == param_1[3] && piVar1[2] == param_1[2]) && piVar1[1] == param_1[1]) &&
      *piVar1 == *param_1) {
    return param_1 + 6;
  }
  return (int *)0x0;
}



// FUNCTION 1415e95f0 Emplace<TTuple<FString,FString>_const_&> body=397 status=ok
// SIG undefined Emplace<TTuple<FString,FString>_const_&>(void)

int * TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<FString,FString>_const_&>
                (longlong *param_1,int *param_2,longlong param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  bool bVar6;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  FString::FString(local_30,param_3);
  FString::FString(local_30 + 2,param_3 + 0x10);
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  bVar6 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar6 = local_res8[0] != -1;
    if (bVar6) {
      plVar4 = (longlong *)(*param_1 + (longlong)local_res8[0] * 0x28);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)local_res8[0] * 0x28) != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar4,local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1415e9758;
    }
  }
  cVar2 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar2 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*local_30;
    }
    uVar3 = FUN_140438070(puVar5);
    uVar3 = (int)param_1[9] - 1U & uVar3;
    *(uint *)((longlong)local_30 + 0x24) = uVar3;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) = iVar1
    ;
  }
LAB_1415e9758:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 1415e9780 Emplace<TTuple<FString,FFormatArgumentValue>_const_&> body=371 status=ok
// SIG undefined Emplace<TTuple<FString,FFormatArgumentValue>_const_&>(void)

int * TSet<TTuple<FString,FFormatArgumentValue>,FLocKeyMapFuncs<FFormatArgumentValue>,FDefaultSetAllocator>
      ::Emplace<TTuple<FString,FFormatArgumentValue>_const_&>
                (longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  void *_Dst;
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  bool bVar6;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  TTuple<FString,FFormatArgumentValue>::TTuple<FString,FFormatArgumentValue>(local_30,param_3);
  *(undefined4 *)(local_30 + 8) = 0xffffffff;
  bVar6 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar6 = local_res8[0] != -1;
    if (bVar6) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x48);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>(_Dst);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x40);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1415e98ce;
    }
  }
  cVar2 = TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar2 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*local_30;
    }
    uVar3 = FCrc::StrCrc32<wchar_t>(puVar5,0);
    uVar3 = uVar3 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x44) = uVar3;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 8) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) = iVar1
    ;
  }
LAB_1415e98ce:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 1415e9900 Emplace<FString_const_&> body=337 status=ok
// SIG undefined Emplace<FString_const_&>(void)

longlong TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
         Emplace<FString_const_&>(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  int local_res8 [2];
  int local_28 [2];
  undefined8 *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  FString::FString(local_20,param_2);
  *(undefined4 *)(local_20 + 2) = 0;
  *(undefined4 *)(local_20 + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_20);
    if (local_res8[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar4,local_20,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_28[0],1);
      goto LAB_1415e9a2c;
    }
  }
  cVar1 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  local_res8[0] = local_28[0];
  if (cVar1 == '\0') {
    if (*(int *)(local_20 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*local_20;
    }
    uVar2 = FUN_140438070(puVar3);
    uVar2 = (int)param_1[9] - 1U & uVar2;
    *(uint *)((longlong)local_20 + 0x1c) = uVar2;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 3) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         local_28[0];
  }
LAB_1415e9a2c:
  return *param_1 + 0x10 + (longlong)local_res8[0] * 0x20;
}



// FUNCTION 1415e9a60 Emplace<FString_const_&> body=371 status=ok
// SIG undefined Emplace<FString_const_&>(void)

int * TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator>::Emplace<FString_const_&>
                (longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  bool bVar7;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  FString::FString(local_30,param_3);
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  bVar7 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FindId(param_1,local_res8,local_30);
    bVar7 = local_res8[0] != -1;
    if (bVar7) {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + (longlong)local_res8[0] * 0x18) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar2 + (longlong)local_res8[0] * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1415e9baf;
    }
  }
  cVar3 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*local_30;
    }
    uVar4 = FCrc::StrCrc32<wchar_t>(puVar6,0);
    uVar4 = uVar4 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar4;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) = iVar1
    ;
  }
LAB_1415e9baf:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1415e9be0 FUN_1415e9be0 body=361 status=ok
// SIG undefined FUN_1415e9be0(void)

void FUN_1415e9be0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  void *_Src;
  ulonglong uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  uint uVar11;
  
  puVar10 = &DAT_143f3eda8;
  lVar9 = *param_1;
  uVar2 = (longlong)(int)param_1[1];
  lVar1 = 0;
  while (uVar2 != 0) {
    uVar8 = uVar2 >> 1;
    uVar11 = (uint)uVar2;
    lVar5 = (uVar8 + lVar1) * 0x20;
    if (*(int *)(param_2 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    if (*(int *)(lVar5 + 8 + lVar9) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(lVar5 + lVar9);
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
    uVar2 = uVar8;
    if (iVar3 < 0) {
      lVar1 = (ulonglong)(uVar11 & 1) + uVar8 + lVar1;
    }
  }
  iVar3 = (int)lVar1;
  if ((-1 < iVar3) && (iVar3 < (int)param_1[1])) {
    lVar9 = (longlong)iVar3 * 0x20;
    if (*(int *)(lVar9 + 8 + *param_1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = *(undefined2 **)(lVar9 + *param_1);
    }
    if (*(int *)(param_2 + 1) != 0) {
      puVar10 = (undefined2 *)*param_2;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar7);
    if (-1 < iVar4) {
      lVar9 = lVar9 + *param_1;
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (lVar9);
      goto LAB_1415e9cff;
    }
  }
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  _Src = (void *)(*param_1 + (longlong)iVar3 * 0x20);
  _guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 0x20),_Src,(longlong)(iVar4 - iVar3) << 5)
  ;
  lVar9 = (longlong)iVar3 * 0x20 + *param_1;
LAB_1415e9cff:
  FString::FString(lVar9,param_2);
  *(undefined8 *)(lVar9 + 0x10) = *param_3;
  lVar1 = param_3[1];
  *(longlong *)(lVar9 + 0x18) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1415e9d50 FUN_1415e9d50 body=792 status=ok
// SIG undefined FUN_1415e9d50(void)

int * FUN_1415e9d50(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

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
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar8 * 0xb0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xb0 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  _Src = (byte *)((longlong)iVar8 * 0xb0 + *param_1);
  TKeyInitializer<enum_ELocalizedTextSourceCategory_&&>::
  operator<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>_TTuple<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>
            (param_3,_Src);
  _Src[0xa8] = 0xff;
  _Src[0xa9] = 0xff;
  _Src[0xaa] = 0xff;
  _Src[0xab] = 0xff;
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
          if (*(byte *)((longlong)iVar9 * 0xb0 + *param_1) == *_Src) break;
          iVar9 = *(int *)((longlong)iVar9 * 0xb0 + 0xa8 + *param_1);
          iVar8 = iVar10;
        } while (iVar9 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0xb0 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0xa0) = 0;
      if (*(longlong *)((longlong)_Dst + 0x98) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 0x58);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0xa8);
      iVar7 = *param_2;
      bVar3 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xb0 + *param_1) = iVar7;
      }
      puVar5 = (undefined4 *)((longlong)iVar7 * 0xb0 + *param_1);
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
      goto LAB_1415ea039;
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
    *(uint *)(_Src + 0xac) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xa8) =
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
    TSet<TTuple<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>,TDefaultMapHashableKeyFuncs<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415ea039:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1415ea070 FUN_1415ea070 body=460 status=ok
// SIG undefined FUN_1415ea070(void)

int * FUN_1415ea070(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  FUN_1415e7ec0(param_3,local_30);
  local_30[0x16] = 0xffffffff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)((longlong)iVar3 * 0x60 + *param_1) == *local_30) goto LAB_1415ea13f;
          iVar3 = *(int *)((longlong)iVar3 * 0x60 + 0x58 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_1415ea13f:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_1415ea213;
    }
  }
  cVar1 = TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_30;
    local_30[0x17] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_30[0x16] =
         *(uint *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_1415ea213:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 1415ea240 FUN_1415ea240 body=806 status=ok
// SIG undefined FUN_1415ea240(void)

int * FUN_1415ea240(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  bool local_res8;
  
  iVar8 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar9 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar14 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  plVar14 = (longlong *)((longlong)iVar9 * 0x60 + *param_1);
  TKeyInitializer<FName_const_&>::
  operator<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>_TTuple<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>
            (param_3,plVar14);
  *(undefined4 *)(plVar14 + 0xb) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar12 != 1) {
    lVar3 = *plVar14;
    iVar9 = iVar13;
    if (uVar12 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar7 +
                       ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar9 = iVar10;
          if (*(longlong *)((longlong)iVar10 * 0x60 + *param_1) == lVar3) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x60 + 0x58 + *param_1);
          iVar9 = iVar13;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty((longlong)_Dst + 8,0);
      if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar14,0x58);
      iVar8 = *param_2;
      bVar4 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x60 + *param_1) = iVar8;
      }
      puVar6 = (undefined4 *)((longlong)iVar8 * 0x60 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar6[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar14 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar14 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1415ea53d;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar11 = '\0';
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar13;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar11 = '\x1f' - (char)iVar13;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar14 >> 0x20) + (int)*plVar14 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar14 + 0x5c) = uVar12;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar14 + 0xb) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415ea53d:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1415ea570 FUN_1415ea570 body=778 status=ok
// SIG undefined FUN_1415ea570(void)

int * FUN_1415ea570(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  void *_Dst;
  char cVar12;
  uint uVar13;
  int iVar14;
  bool local_res8;
  
  iVar8 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar9 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  plVar11 = (longlong *)((longlong)iVar9 * 0x60 + *param_1);
  TKeyInitializer<void_*_const_&>::
  operator<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>
            (param_3,plVar11);
  *(undefined4 *)(plVar11 + 0xb) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar13 != 1) {
    lVar3 = *plVar11;
    iVar9 = iVar14;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar7 +
                       ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar9 = iVar10;
          if (*(longlong *)((longlong)iVar10 * 0x60 + *param_1) == lVar3) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x60 + 0x58 + *param_1);
          iVar9 = iVar14;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,0x58);
      iVar8 = *param_2;
      bVar4 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x60 + *param_1) = iVar8;
      }
      puVar6 = (undefined4 *)((longlong)iVar8 * 0x60 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar6[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1415ea851;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar14;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar14;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x5c) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 0xb) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415ea851:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1415ea880 FUN_1415ea880 body=729 status=ok
// SIG undefined FUN_1415ea880(void)

uint * FUN_1415ea880(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  char cVar11;
  undefined4 uVar12;
  bool bVar13;
  uint local_res8 [2];
  undefined8 local_48;
  undefined8 local_40;
  
  iVar10 = 1;
  uVar12 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar8 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar8 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar8 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)(*param_1 + 4 + (longlong)(int)uVar8 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = uVar8;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar8 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)(int)uVar8 * 0x28);
  FString::FString(_Src,*param_3);
  _Src[2] = 0;
  local_48 = 0;
  _Src[3] = 0;
  local_40 = 0;
  TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>::
  ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(&local_48);
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FString>,FLocKeyMapFuncs<FString>,FDefaultSetAllocator>::FindId
              (param_1,local_res8,_Src);
    uVar8 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      plVar5 = (longlong *)(*param_1 + lVar9 * 0x28);
      TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>::
      ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(plVar5 + 2);
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar5,_Src,0x20);
      uVar4 = *param_2;
      bVar2 = (byte)uVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = uVar4;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + (longlong)(int)uVar4 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar9 + 4 + (longlong)(int)uVar4 * 0x28) = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar4;
      plVar5 = (longlong *)param_1[4];
      *param_2 = uVar8;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar5 +
                       (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1415eab33;
    }
  }
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar8) {
    uVar4 = (uVar8 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar10;
    }
    uVar4 = (uVar8 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar8 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*_Src;
    }
    uVar4 = FCrc::StrCrc32<wchar_t>(puVar7,0);
    uVar4 = uVar4 & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar4;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         uVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FString,TSharedPtr<FStringTableEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FStringTableEntry,1>_>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415eab33:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1415eab60 FUN_1415eab60 body=675 status=ok
// SIG undefined FUN_1415eab60(void)

uint * FUN_1415eab60(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  int iVar10;
  void *_Dst;
  uint uVar11;
  char cVar12;
  undefined8 *_Src;
  undefined4 uVar13;
  bool bVar14;
  uint local_res8 [2];
  
  iVar10 = 1;
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)((longlong)(int)uVar11 * 0x68 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x68 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar11;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  _Src = (undefined8 *)((longlong)(int)uVar11 * 0x68 + *param_1);
  TKeyInitializer<FString_const_&>::
  operator<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>
            (param_3,_Src);
  *(undefined4 *)(_Src + 0xc) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar11 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _Dst = (void *)(lVar9 * 0x68 + *param_1);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>
      ::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x60);
      uVar4 = *param_2;
      bVar2 = (byte)uVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x68 + *param_1) = uVar4;
      }
      puVar5 = (undefined4 *)((longlong)(int)uVar4 * 0x68 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar4;
      plVar6 = (longlong *)param_1[4];
      *param_2 = uVar11;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1415eaddf;
    }
  }
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar11) {
    uVar4 = (uVar11 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar12 = '\0';
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar4 = (uVar11 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar12 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar11 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar4 = FCrc::StrCrc32<wchar_t>(puVar8,0);
    uVar4 = uVar4 & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 100) = uVar4;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xc) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415eaddf:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1415eae10 FUN_1415eae10 body=460 status=ok
// SIG undefined FUN_1415eae10(void)

int * FUN_1415eae10(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar1 = param_3[1];
  *param_2 = local_38[0];
  *local_30 = *(uint *)*param_3;
  FUN_1415eff70(local_30 + 2,uVar1);
  local_30[0x16] = 0xffffffff;
  bVar7 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)((longlong)iVar4 * 0x60 + *param_1) == *local_30) goto LAB_1415eaedf;
          iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x58 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1415eaedf:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar4 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_1415eafb3;
    }
  }
  cVar2 = TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_30;
    local_30[0x17] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[0x16] =
         *(uint *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1415eafb3:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1415eafe0 FUN_1415eafe0 body=483 status=ok
// SIG undefined FUN_1415eafe0(void)

int * FUN_1415eafe0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_28 [2];
  uint *local_20;
  
  TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  puVar1 = (undefined8 *)param_3[1];
  *param_2 = local_28[0];
  *local_20 = *(uint *)*param_3;
  *(undefined8 *)(local_20 + 2) = *puVar1;
  lVar2 = puVar1[1];
  *(longlong *)(local_20 + 4) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(local_20 + 6) = puVar1[2];
  lVar2 = puVar1[3];
  *(longlong *)(local_20 + 8) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  bVar8 = false;
  *(undefined1 *)(local_20 + 10) = *(undefined1 *)(puVar1 + 4);
  local_20[0xb] = *(uint *)((longlong)puVar1 + 0x24);
  local_20[0xc] = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)((longlong)iVar5 * 0x38 + *param_1) == *local_20) goto LAB_1415eb0eb;
          iVar5 = *(int *)((longlong)iVar5 * 0x38 + 0x30 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1415eb0eb:
    bVar8 = iVar5 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar5 * 0x38 + *param_1);
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_1415eb198;
    }
  }
  cVar3 = TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7,0);
  if (cVar3 == '\0') {
    uVar6 = (int)param_1[9] - 1U & *local_20;
    local_20[0xd] = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    local_20[0xc] =
         *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_1415eb198:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1415eb1d0 Emplace<TPairInitializer<TSharedPtr<FString,1>_&&,FString_&>_> body=549 status=ok
// SIG undefined Emplace<TPairInitializer<TSharedPtr<FString,1>_&&,FString_&>_>(void)

int * TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<TSharedPtr<FString,1>_&&,FString_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  ulonglong *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong *_Src;
  int iVar11;
  uint uVar12;
  bool bVar13;
  int local_res10 [2];
  int local_48 [2];
  ulonglong *local_40;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_48);
  _Src = local_40;
  puVar3 = (ulonglong *)*param_3;
  uVar4 = param_3[1];
  *param_2 = local_48[0];
  *local_40 = *puVar3;
  local_40[1] = puVar3[1];
  puVar3[1] = 0;
  *puVar3 = 0;
  FString::FString(local_40 + 2,uVar4);
  bVar13 = false;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    iVar10 = local_res10[0];
    bVar13 = local_res10[0] != -1;
    if (bVar13) {
      _Dst = (void *)(*param_1 + (longlong)local_res10[0] * 0x28);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)local_res10[0] * 0x28) != 0) {
        FMemory::Free();
      }
      plVar7 = *(longlong **)((longlong)_Dst + 8);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        _Src = local_40;
        iVar10 = local_res10[0];
        if ((int)lVar5 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          _Src = local_40;
          iVar10 = local_res10[0];
          if (iVar11 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
            _Src = local_40;
            iVar10 = local_res10[0];
          }
        }
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar10;
      goto LAB_1415eb3d1;
    }
  }
  cVar6 = ConditionalRehash(param_1,iVar11,0);
  if (cVar6 == '\0') {
    iVar11 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar12 = -(uVar9 + iVar11) ^ uVar9 >> 0xd;
    uVar8 = (iVar11 - uVar9) - uVar12 ^ uVar12 >> 0xc;
    uVar9 = (uVar9 - uVar8) - uVar12 ^ uVar8 << 0x10;
    uVar12 = (uVar12 - uVar9) - uVar8 ^ uVar9 >> 5;
    uVar8 = (uVar8 - uVar9) - uVar12 ^ uVar12 >> 3;
    uVar9 = (uVar9 - uVar8) - uVar12 ^ uVar8 << 10;
    uVar8 = ((uVar12 - uVar9) - uVar8 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1415eb3d1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1415eb400 FUN_1415eb400 body=896 status=ok
// SIG undefined FUN_1415eb400(void)

int * FUN_1415eb400(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  void *_Dst;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  char cVar15;
  int iVar16;
  bool local_res8;
  
  iVar11 = 1;
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar13 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x48);
    *(int *)(param_1 + 6) = iVar13;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0x48) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar8;
  local_res8 = false;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)iVar8 * 0x48);
  puVar3 = (undefined8 *)*param_3;
  puVar4 = (undefined8 *)param_3[1];
  *_Src = *puVar3;
  *(undefined4 *)(_Src + 1) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)((longlong)_Src + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
  _Src[2] = 0;
  _Src[2] = puVar3[2];
  puVar3[2] = 0;
  *(undefined4 *)(_Src + 3) = *(undefined4 *)(puVar3 + 3);
  *(undefined4 *)((longlong)_Src + 0x1c) = *(undefined4 *)((longlong)puVar3 + 0x1c);
  puVar3[3] = 0;
  _Src[4] = *puVar4;
  *(undefined4 *)(_Src + 5) = *(undefined4 *)(puVar4 + 1);
  *(undefined4 *)((longlong)_Src + 0x2c) = *(undefined4 *)((longlong)puVar4 + 0xc);
  _Src[6] = 0;
  _Src[6] = puVar4[2];
  puVar4[2] = 0;
  *(undefined4 *)(_Src + 7) = *(undefined4 *)(puVar4 + 3);
  *(undefined4 *)((longlong)_Src + 0x3c) = *(undefined4 *)((longlong)puVar4 + 0x1c);
  puVar4[3] = 0;
  *(undefined4 *)(_Src + 8) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar8 = iVar16;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar13 = *(int *)((longlong)plVar10 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0xc)) *
                       4);
      if (iVar13 != -1) {
        lVar12 = *param_1;
        do {
          lVar2 = (longlong)iVar13 * 0x48;
          iVar8 = *(int *)(lVar12 + 8 + lVar2);
          if ((iVar8 == *(int *)(_Src + 1)) &&
             (iVar8 = wcsncmp(*(wchar_t **)(lVar12 + lVar2),(wchar_t *)*_Src,(longlong)iVar8),
             iVar8 == 0)) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          iVar8 = iVar13;
          if (bVar6) break;
          lVar12 = *param_1;
          iVar13 = *(int *)(lVar12 + 0x40 + lVar2);
          iVar8 = iVar16;
        } while (iVar13 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)iVar8 * 0x48);
      if (*(longlong *)(*param_1 + 0x30 + (longlong)iVar8 * 0x48) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x40);
      iVar11 = *param_2;
      bVar5 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x48) = iVar11;
      }
      lVar12 = *param_1;
      *(undefined4 *)(lVar12 + (longlong)iVar11 * 0x48) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      *(int *)(lVar12 + 4 + (longlong)iVar11 * 0x48) = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_1415eb757;
    }
  }
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar14) {
    uVar9 = (uVar14 >> 1) + 8;
    iVar16 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar15 = '\0';
    if (uVar9 != 0) {
      iVar11 = 0x1f - iVar16;
    }
    uVar9 = (uVar14 >> 1) + 7;
    iVar16 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar15 = '\x1f' - (char)iVar16;
    }
    iVar11 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar15 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar14 = (int)param_1[9] - 1U & *(uint *)((longlong)_Src + 0xc);
    *(uint *)((longlong)_Src + 0x44) = uVar14;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 8) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FTextFormatString,FTextFormatString>,TDefaultMapHashableKeyFuncs<FTextFormatString,FTextFormatString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415eb757:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1415eb780 FUN_1415eb780 body=570 status=ok
// SIG undefined FUN_1415eb780(void)

int * FUN_1415eb780(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  void *_Dst;
  uint uVar8;
  bool bVar9;
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,0>___cdecl(FTextFormatString_const_&)>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (undefined8 *)*param_3;
  lVar4 = param_3[1];
  *param_2 = local_38[0];
  *local_30 = *puVar1;
  *(undefined4 *)(local_30 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_30[2] = 0;
  local_30[2] = puVar1[2];
  puVar1[2] = 0;
  *(undefined4 *)(local_30 + 3) = *(undefined4 *)(puVar1 + 3);
  *(undefined4 *)((longlong)local_30 + 0x1c) = *(undefined4 *)((longlong)puVar1 + 0x1c);
  puVar1[3] = 0;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_30 + 4,lVar4);
  *(undefined4 *)(local_30 + 0xe) = 0xffffffff;
  bVar9 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)local_30 + 0xc)
                      ) * 4);
      if (iVar6 != -1) {
        lVar4 = *param_1;
        do {
          lVar7 = (longlong)iVar6 * 0x80;
          iVar3 = *(int *)(lVar7 + 8 + lVar4);
          if (iVar3 == *(int *)(local_30 + 1)) {
            iVar3 = wcsncmp(*(wchar_t **)(lVar7 + lVar4),(wchar_t *)*local_30,(longlong)iVar3);
            if (iVar3 != 0) goto LAB_1415eb88a;
            bVar9 = true;
          }
          else {
LAB_1415eb88a:
            bVar9 = false;
          }
          if (bVar9) goto LAB_1415eb8a1;
          lVar4 = *param_1;
          iVar6 = *(int *)(lVar4 + 0x70 + lVar7);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_1415eb8a1:
    bVar9 = iVar6 != -1;
    if (bVar9) {
      _Dst = (void *)((longlong)iVar6 * 0x80 + *param_1);
      if (*(int *)((longlong)_Dst + 0x60) != 0) {
        plVar5 = *(longlong **)((longlong)_Dst + 0x50);
        if (*(longlong **)((longlong)_Dst + 0x50) == (longlong *)0x0) {
          plVar5 = (longlong *)((longlong)_Dst + 0x30);
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (*(longlong *)((longlong)_Dst + 0x50) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x70);
      FUN_140483a60(param_1,*param_2,1);
      *param_2 = iVar6;
      goto LAB_1415eb98b;
    }
  }
  cVar2 = FUN_141600310(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar2 == '\0') {
    uVar8 = (int)param_1[9] - 1U & *(uint *)((longlong)local_30 + 0xc);
    *(uint *)((longlong)local_30 + 0x74) = uVar8;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0xe) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1415eb98b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 1415eb9c0 Emplace<TPairInitializer<FString_&,TSharedRef<FStringTableEntry,1>_&>_> body=391 status=ok
// SIG undefined Emplace<TPairInitializer<FString_&,TSharedRef<FStringTableEntry,1>_&>_>(void)

int * TSet<TTuple<FString,TSharedPtr<FStringTableEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FStringTableEntry,1>_>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&,TSharedRef<FStringTableEntry,1>_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  void *_Dst;
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined8 *_Src;
  bool bVar9;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  _Src = local_30;
  uVar2 = *param_3;
  puVar3 = (undefined8 *)param_3[1];
  *param_2 = local_38[0];
  FString::FString(local_30,uVar2);
  _Src[2] = *puVar3;
  lVar4 = puVar3[1];
  _Src[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    _Src = local_30;
  }
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  bVar9 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FString>,FLocKeyMapFuncs<FString>,FDefaultSetAllocator>::FindId
              (param_1,local_res8,_Src);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (_Dst);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1415ebb24;
    }
  }
  cVar5 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar6 = FCrc::StrCrc32<wchar_t>(puVar8,0);
    uVar6 = uVar6 & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar6;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) = iVar1
    ;
  }
LAB_1415ebb24:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 1415ebb50 FUN_1415ebb50 body=557 status=ok
// SIG undefined FUN_1415ebb50(void)

int * FUN_1415ebb50(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  void *_Dst;
  uint uVar11;
  undefined4 uVar12;
  void *_Src;
  bool bVar13;
  int local_res8 [2];
  int local_res10;
  undefined8 local_res18;
  undefined1 *local_res20;
  
  uVar12 = 0xffffffff;
  local_res20 = param_4;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar9 * 0x58 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x58 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  _Src = (void *)((longlong)iVar9 * 0x58 + *param_1);
  TPairInitializer<FTextCache::FCacheKey_const_&,FText_const_&>::
  operator<FTextCache::FCacheKey,FText>_TTuple<FTextCache::FCacheKey,FText>(local_res18,_Src);
  *(undefined4 *)((longlong)_Src + 0x50) = 0xffffffff;
  local_res10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (local_res10 != 1) {
    TSet<TTuple<FTextCache::FCacheKey,FText>,TDefaultMapHashableKeyFuncs<FTextCache::FCacheKey,FText,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    iVar9 = local_res8[0];
    lVar10 = (longlong)local_res8[0];
    bVar13 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _Dst = (void *)(lVar10 * 0x58 + *param_1);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextCache::FCacheKey,FText>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextCache::FCacheKey,FText>(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x50);
      iVar2 = *param_2;
      bVar3 = (byte)iVar2 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x58 + *param_1) = iVar2;
      }
      puVar6 = (undefined4 *)((longlong)iVar2 * 0x58 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar2;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      uVar8 = (undefined1)local_res8[0];
      goto LAB_1415ebd62;
    }
  }
  uVar8 = 0;
  cVar4 = TSet<TTuple<FTextCache::FCacheKey,FText>,TDefaultMapHashableKeyFuncs<FTextCache::FCacheKey,FText,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,local_res10,0);
  local_res20 = param_4;
  if (cVar4 == '\0') {
    uVar11 = (int)param_1[9] - 1U & *(uint *)((longlong)_Src + 0x34);
    *(uint *)((longlong)_Src + 0x54) = uVar11;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x50) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1415ebd62:
  if (local_res20 != (undefined1 *)0x0) {
    *local_res20 = uVar8;
  }
  return param_2;
}



// FUNCTION 1415ebd80 FUN_1415ebd80 body=770 status=ok
// SIG undefined FUN_1415ebd80(void)

int * FUN_1415ebd80(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  char cVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  void *_Dst;
  ulonglong *_Src;
  undefined4 uVar18;
  bool bVar19;
  int local_48 [4];
  
  uVar18 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar17 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar17);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar17 = (int)param_1[6];
    iVar5 = *(int *)((longlong)iVar17 * 0x20 + 4 + *param_1);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar17;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar17 + (iVar17 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar17 & 0x1f);
  puVar6 = (ulonglong *)*param_3;
  _Src = (ulonglong *)((longlong)iVar17 * 0x20 + *param_1);
  puVar7 = (undefined2 *)param_3[1];
  *_Src = *puVar6;
  uVar8 = puVar6[1];
  _Src[1] = uVar8;
  if (uVar8 != 0) {
    LOCK();
    *(int *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1;
    UNLOCK();
  }
  bVar19 = false;
  *(undefined2 *)(_Src + 2) = *puVar7;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  iVar17 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar17 != 1) {
    TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_48,_Src);
    bVar19 = local_48[0] != -1;
    if (bVar19) {
      _Dst = (void *)((longlong)local_48[0] * 0x20 + *param_1);
      plVar12 = *(longlong **)((longlong)_Dst + 8);
      iVar17 = local_48[0];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar17 = local_48[0];
          if (iVar4 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
            iVar17 = local_48[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar4 = *param_2;
      bVar9 = (byte)iVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar4;
      }
      puVar15 = (undefined4 *)((longlong)iVar4 * 0x20 + *param_1);
      *puVar15 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar18 = (undefined4)param_1[6];
      }
      puVar15[1] = uVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar4;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar17;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar9 | 1U >> 0x20 - bVar9);
      goto LAB_1415ec058;
    }
  }
  cVar11 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
           ::ConditionalRehash(param_1,iVar17,0);
  if (cVar11 == '\0') {
    iVar17 = (int)(*_Src >> 4);
    uVar14 = 0x9e3779b9U - iVar17 ^ iVar17 << 8;
    uVar16 = -(iVar17 + uVar14) ^ uVar14 >> 0xd;
    uVar13 = (iVar17 - uVar14) - uVar16 ^ uVar16 >> 0xc;
    uVar14 = (uVar14 - uVar13) - uVar16 ^ uVar13 << 0x10;
    uVar16 = (uVar16 - uVar14) - uVar13 ^ uVar14 >> 5;
    uVar13 = (uVar13 - uVar14) - uVar16 ^ uVar16 >> 3;
    uVar14 = (uVar14 - uVar13) - uVar16 ^ uVar13 << 10;
    uVar13 = ((uVar16 - uVar14) - uVar13 ^ uVar14 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar13;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
LAB_1415ec058:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar19;
  }
  return param_2;
}



// FUNCTION 1415ec090 FUN_1415ec090 body=674 status=ok
// SIG undefined FUN_1415ec090(void)

uint * FUN_1415ec090(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  undefined4 uVar10;
  void *_Src;
  uint uVar11;
  longlong *plVar12;
  bool bVar13;
  uint local_res8 [2];
  
  iVar8 = 1;
  uVar10 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)((longlong)(int)uVar11 * 0xd0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0xd0 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = uVar11;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  _Src = (void *)((longlong)(int)uVar11 * 0xd0 + *param_1);
  TPairInitializer<FLocKey_const_&,FPolyglotTextData_const_&>::
  operator<FLocKey,FPolyglotTextData>_TTuple<FLocKey,FPolyglotTextData>(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 200) = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar11 != 1) {
    TSet<TTuple<FLocKey,FPolyglotTextData>,TDefaultMapHashableKeyFuncs<FLocKey,FPolyglotTextData,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar4 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      plVar12 = (longlong *)(lVar7 * 0xd0 + *param_1);
      FPolyglotTextData::~FPolyglotTextData(plVar12 + 3);
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar12,_Src,200);
      uVar11 = *param_2;
      bVar2 = (byte)uVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0xd0 + *param_1) = uVar11;
      }
      puVar5 = (undefined4 *)((longlong)(int)uVar11 * 0xd0 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar11;
      plVar12 = (longlong *)param_1[4];
      *param_2 = uVar4;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1415ec309;
    }
  }
  if (3 < uVar11) {
    uVar4 = (uVar11 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar9 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar11 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar11 = (int)param_1[9] - 1U & *(uint *)((longlong)_Src + 0x10);
    *(uint *)((longlong)_Src + 0xcc) = uVar11;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 200) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(uint *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FLocKey,FPolyglotTextData>,TDefaultMapHashableKeyFuncs<FLocKey,FPolyglotTextData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415ec309:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1415ec340 FUN_1415ec340 body=712 status=ok
// SIG undefined FUN_1415ec340(void)

int * FUN_1415ec340(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  longlong *_Src;
  int iVar13;
  void *_Dst;
  bool local_res8;
  
  iVar9 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar7 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_res8 = false;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar10 & 0x1f);
  plVar6 = (longlong *)param_3[1];
  _Src = (longlong *)((longlong)iVar10 * 0x20 + *param_1);
  *_Src = *(longlong *)*param_3;
  _Src[1] = *plVar6;
  _Src[2] = plVar6[1];
  plVar6[1] = 0;
  *plVar6 = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    lVar4 = *_Src;
    iVar8 = iVar13;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0x20 + *param_1) == lVar4) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar13;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      plVar6 = *(longlong **)((longlong)_Dst + 0x10);
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
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_1415ec5e3;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar13 = 0x20;
    if (uVar5 != 0) {
      iVar13 = 0x1f - iVar9;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar13 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
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
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415ec5e3:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1415ec610 FUN_1415ec610 body=726 status=ok
// SIG undefined FUN_1415ec610(void)

int * FUN_1415ec610(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
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
  puVar2 = (undefined4 *)param_3[1];
  lVar1 = (longlong)iVar11 * 0x18;
  plVar14 = (longlong *)(*param_1 + lVar1);
  lVar3 = *(longlong *)*param_3;
  *plVar14 = lVar3;
  *(undefined4 *)(plVar14 + 1) = *puVar2;
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
      goto LAB_1415ec8c1;
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
    FUN_14084ef80(param_1);
  }
LAB_1415ec8c1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar17;
  }
  return param_2;
}



// FUNCTION 1415ec8f0 FUN_1415ec8f0 body=386 status=ok
// SIG undefined FUN_1415ec8f0(void)

int * FUN_1415ec8f0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  void *_Dst;
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)param_3[1];
  *param_2 = local_38[0];
  FString::FString(local_30,uVar2);
  local_30[2] = *puVar3;
  bVar8 = false;
  local_30[3] = puVar3[1];
  puVar3[1] = 0;
  *puVar3 = 0;
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1415eca49;
    }
  }
  cVar4 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
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
LAB_1415eca49:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1415eca80 Emplace<TPairInitializer<FString_const_&,FString_const_&>_> body=404 status=ok
// SIG undefined Emplace<TPairInitializer<FString_const_&,FString_const_&>_>(void)

int * TSet<TTuple<FString,FString>,FLocKeyMapFuncs<FString>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
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
    FindId(param_1,local_res8,local_30);
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
      goto LAB_1415ecbef;
    }
  }
  cVar4 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*local_30;
    }
    uVar5 = FCrc::StrCrc32<wchar_t>(puVar7,0);
    uVar5 = uVar5 & (int)param_1[9] - 1U;
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
LAB_1415ecbef:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1415ecc20 Emplace<TPairInitializer<FString_const_&,TSharedRef<FBuildPatchAppManifest,1>_&&>_> body=386 status=ok
// SIG undefined Emplace<TPairInitializer<FString_const_&,TSharedRef<FBuildPatchAppManifest,1>_&&>_>(void)

int * TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,TSharedRef<FBuildPatchAppManifest,1>_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  void *_Dst;
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined8 *_Src;
  bool bVar9;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  _Src = local_30;
  uVar2 = *param_3;
  puVar3 = (undefined8 *)param_3[1];
  *param_2 = local_38[0];
  FString::FString(local_30,uVar2);
  _Src[2] = *puVar3;
  lVar4 = puVar3[1];
  _Src[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    _Src = local_30;
  }
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  bVar9 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (_Dst);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1415ecd7f;
    }
  }
  cVar5 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar5 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar6 = FUN_140438070(puVar8);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Src + 0x24) = uVar6;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) = iVar1
    ;
  }
LAB_1415ecd7f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 1415ecdb0 FUN_1415ecdb0 body=781 status=ok
// SIG undefined FUN_1415ecdb0(void)

int * FUN_1415ecdb0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  void *_Dst;
  uint uVar13;
  char cVar14;
  undefined8 *_Src;
  int iVar15;
  bool bVar16;
  
  iVar9 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar5 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  _Src = (undefined8 *)((longlong)iVar5 * 0x38 + *param_1);
  FTextFormatString::FTextFormatString(_Src,*param_3);
  _Src[4] = *puVar3;
  lVar10 = puVar3[1];
  _Src[5] = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 6) = 0xffffffff;
  bVar16 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar5 = iVar15;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar11 = *(int *)((longlong)plVar8 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0xc)) *
                       4);
      if (iVar11 != -1) {
        lVar10 = *param_1;
        do {
          lVar12 = (longlong)iVar11 * 0x38;
          iVar5 = *(int *)(lVar12 + 8 + lVar10);
          if ((iVar5 == *(int *)(_Src + 1)) &&
             (iVar5 = wcsncmp(*(wchar_t **)(lVar12 + lVar10),(wchar_t *)*_Src,(longlong)iVar5),
             iVar5 == 0)) {
            bVar16 = true;
          }
          else {
            bVar16 = false;
          }
          iVar5 = iVar11;
          if (bVar16) break;
          lVar10 = *param_1;
          iVar11 = *(int *)(lVar10 + 0x30 + lVar12);
          iVar5 = iVar15;
        } while (iVar11 != -1);
      }
    }
    bVar16 = iVar5 != -1;
    if (bVar16) {
      _Dst = (void *)((longlong)iVar5 * 0x38 + *param_1);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextFormatString,FTextFormat>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextFormatString,FTextFormat>(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x30);
      iVar9 = *param_2;
      bVar4 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar9;
      }
      puVar7 = (undefined4 *)((longlong)iVar9 * 0x38 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      puVar7[1] = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar5;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1415ed098;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar6 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar14 = '\0';
    if (uVar6 != 0) {
      iVar9 = 0x1f - iVar15;
    }
    uVar6 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar14 = '\x1f' - (char)iVar15;
    }
    iVar9 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & *(uint *)((longlong)_Src + 0xc);
    *(uint *)((longlong)_Src + 0x34) = uVar13;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 6) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FTextFormatString,FTextFormat>,TDefaultMapHashableKeyFuncs<FTextFormatString,FTextFormat,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415ed098:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 1415ed0c0 FUN_1415ed0c0 body=137 status=ok
// SIG undefined FUN_1415ed0c0(void)

undefined8 * FUN_1415ed0c0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *_Str2;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  puVar4 = puVar5 + (longlong)(int)param_1[1] * 2;
  if (puVar5 != puVar4) {
    do {
      iVar3 = *(int *)(puVar5 + 1);
      iVar1 = *(int *)((undefined8 *)*param_2 + 1);
      iVar2 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      if (iVar1 == iVar2) {
        if (iVar3 == 0) {
          _Str2 = L"";
        }
        else {
          _Str2 = (wchar_t *)*puVar5;
        }
        iVar3 = wcsncmp(*(wchar_t **)*param_2,_Str2,(longlong)iVar1);
        if (iVar3 == 0) {
          return puVar5;
        }
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar4);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415ed150 GenerateKeyArray<FDefaultAllocator> body=516 status=ok
// SIG undefined GenerateKeyArray<FDefaultAllocator>(void)

void TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
     GenerateKeyArray<FDefaultAllocator>(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  void *_Src;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  undefined4 uStack_44;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  plVar5 = (longlong *)*param_2;
  for (iVar7 = (int)param_2[1]; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar9) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar9);
  }
  iVar7 = (int)param_1[5];
  puStack_30 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar7 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puStack_30;
    }
    uVar1 = *puVar8;
    local_68 = 0;
    while (uVar1 == 0) {
      lVar4 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar2 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar2) goto LAB_1415ed25f;
      uVar1 = puVar8[lVar4 + 1];
    }
    uStack_64 = -uVar1 & uVar1;
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
    local_58._4_4_ = (uStack_50 - iVar9) + 0x1f;
    if (iVar7 < local_58._4_4_) {
LAB_1415ed25f:
      local_58._4_4_ = iVar7;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  iStack_20 = uStack_50;
  uStack_1c = iStack_4c;
  iStack_38 = local_68;
  uStack_34 = uStack_64;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_44 = iStack_4c;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar2 = local_58._4_4_ < iVar7;
  local_40 = param_1;
  local_58 = puStack_30;
  if (bVar2) {
    do {
      iVar9 = iStack_4c;
      iVar7 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
      }
      puVar6 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
      if (puVar6 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)((longlong)iVar9 * 0x20 + *param_1);
        *puVar6 = 0;
        iVar7 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        *(int *)(puVar6 + 1) = iVar7;
        if (iVar7 == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6,iVar7,0);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,(longlong)iVar7 * 2);
        }
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return;
}



// FUNCTION 1415ed360 GenerateKeyArray<FDefaultAllocator> body=518 status=ok
// SIG undefined GenerateKeyArray<FDefaultAllocator>(void)

void TMapBase<FString,TSharedPtr<FJsonValue,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,0>,0>_>
     ::GenerateKeyArray<FDefaultAllocator>(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  void *_Src;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  undefined4 uStack_44;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  plVar4 = (longlong *)*param_2;
  for (iVar6 = (int)param_2[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar8);
  }
  iVar6 = (int)param_1[5];
  puStack_30 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar6 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puStack_30;
    }
    uVar1 = *puVar7;
    local_68 = 0;
    while (uVar1 == 0) {
      lVar3 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar8 = local_68 + 1;
      bVar2 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar8;
      if (bVar2) goto LAB_1415ed46f;
      uVar1 = puVar7[lVar3 + 1];
    }
    uStack_64 = -uVar1 & uVar1;
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
    local_58._4_4_ = (uStack_50 - iVar8) + 0x1f;
    if (iVar6 < local_58._4_4_) {
LAB_1415ed46f:
      local_58._4_4_ = iVar6;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  iStack_20 = uStack_50;
  uStack_1c = iStack_4c;
  iStack_38 = local_68;
  uStack_34 = uStack_64;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_44 = iStack_4c;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar2 = local_58._4_4_ < iVar6;
  local_40 = param_1;
  local_58 = puStack_30;
  if (bVar2) {
    do {
      iVar8 = iStack_4c;
      iVar6 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar6);
      }
      puVar5 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_2);
      if (puVar5 != (undefined8 *)0x0) {
        lVar3 = *param_1;
        *puVar5 = 0;
        iVar6 = *(int *)(lVar3 + 8 + (longlong)iVar8 * 0x28);
        _Src = *(void **)(lVar3 + (longlong)iVar8 * 0x28);
        *(int *)(puVar5 + 1) = iVar6;
        if (iVar6 == 0) {
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar5,iVar6,0);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar5,_Src,(longlong)iVar6 * 2);
        }
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return;
}



// FUNCTION 1415ed570 FUN_1415ed570 body=1970 status=ok
// SIG undefined FUN_1415ed570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415ed570(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  char cVar16;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  int local_80;
  undefined8 *local_78;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50;
  longlong lStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  iVar11 = (param_2 + -2) / 2;
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,iVar11);
  local_88 = param_1;
  if (-1 < iVar11) {
    local_80 = iVar11 * 2 + 1;
    iVar13 = local_80;
joined_r0x0001415ed5c3:
    do {
      if (iVar13 < param_2) {
        iVar13 = iVar11 * 2;
        iVar12 = iVar13 + 1;
        if (iVar13 + 2 < param_2) {
          plVar4 = (longlong *)param_1[(longlong)iVar12 * 2 + 1];
          lVar5 = param_1[(longlong)iVar12 * 2];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          lVar6 = param_1[((longlong)iVar13 + 2) * 2];
          plVar14 = (longlong *)(param_1 + ((longlong)iVar13 + 2) * 2)[1];
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
          }
          if ((lVar6 == 0) && (lVar5 == 0)) {
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar14 + 1;
              lVar5 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar14 = plVar4 + 1;
              lVar5 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
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
            cVar16 = '\0';
          }
          else {
            cVar16 = lVar5 != 0;
            if ((lVar6 != 0) == (bool)cVar16) {
              cVar16 = FLocMetadataValue::operator<();
              if (plVar14 != (longlong *)0x0) {
                LOCK();
                plVar15 = plVar14 + 1;
                lVar5 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if ((iVar3 == 1) && (plVar14 != (longlong *)0x0)) goto LAB_1415ed716;
                }
              }
            }
            else if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar14 + 1;
              lVar5 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
LAB_1415ed716:
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar14 = plVar4 + 1;
              lVar5 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
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
          }
          if (cVar16 != '\0') {
            iVar12 = iVar13;
          }
          iVar12 = iVar12 + 1;
          param_1 = local_88;
        }
        plVar15 = param_1 + (longlong)iVar11 * 2;
        plVar14 = param_1 + (longlong)iVar12 * 2;
        plVar4 = (longlong *)plVar14[1];
        lVar5 = *plVar14;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        plVar7 = (longlong *)plVar15[1];
        lVar6 = *plVar15;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        if ((lVar6 == 0) && (lVar5 == 0)) {
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar7 + 1;
            lVar5 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          param_1 = local_88;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar4 + 1;
            lVar5 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              param_1 = local_88;
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
                param_1 = local_88;
              }
            }
          }
        }
        else {
          cVar16 = lVar5 != 0;
          if ((lVar6 != 0) == (bool)cVar16) {
            cVar16 = FLocMetadataValue::operator<();
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar7 + 1;
              lVar5 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                iVar11 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar11 == 1) && (plVar7 != (longlong *)0x0)) goto LAB_1415ed827;
              }
            }
          }
          else if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar7 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
LAB_1415ed827:
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar4 + 1;
            lVar5 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          param_1 = local_88;
          if (cVar16 != '\0') {
            if (plVar15 != plVar14) {
              local_70 = *plVar15;
              lStack_68 = plVar15[1];
              uVar8 = *(undefined4 *)((longlong)plVar14 + 4);
              lVar5 = plVar14[1];
              uVar9 = *(undefined4 *)((longlong)plVar14 + 0xc);
              *(int *)plVar15 = (int)*plVar14;
              *(undefined4 *)((longlong)plVar15 + 4) = uVar8;
              *(int *)(plVar15 + 1) = (int)lVar5;
              *(undefined4 *)((longlong)plVar15 + 0xc) = uVar9;
              *plVar14 = local_70;
              plVar14[1] = lStack_68;
            }
            iVar11 = iVar12;
            iVar13 = iVar12 * 2 + 1;
            goto joined_r0x0001415ed5c3;
          }
        }
      }
      local_80 = local_80 + -2;
      iVar11 = (int)local_78 + -1;
      local_78 = (undefined8 *)CONCAT44(local_78._4_4_,iVar11);
      iVar13 = local_80;
    } while (-1 < iVar11);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    local_78 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != local_78) {
        local_60 = *param_1;
        uStack_58 = param_1[1];
        uVar8 = *(undefined4 *)((longlong)local_78 + 4);
        uVar9 = *(undefined4 *)(local_78 + 1);
        uVar10 = *(undefined4 *)((longlong)local_78 + 0xc);
        *(undefined4 *)param_1 = *(undefined4 *)local_78;
        *(undefined4 *)((longlong)param_1 + 4) = uVar8;
        *(undefined4 *)(param_1 + 1) = uVar9;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar10;
        *local_78 = local_60;
        local_78[1] = uStack_58;
      }
      iVar11 = 0;
      if (1 < param_2) {
        do {
          iVar12 = iVar11 * 2;
          iVar13 = iVar12 + 1;
          if (iVar12 + 2 < param_2) {
            lVar5 = param_1[(longlong)iVar13 * 2];
            plVar4 = (longlong *)param_1[(longlong)iVar13 * 2 + 1];
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            lVar6 = param_1[((longlong)iVar12 + 2) * 2];
            plVar14 = (longlong *)(param_1 + ((longlong)iVar12 + 2) * 2)[1];
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
            }
            if ((lVar6 == 0) && (lVar5 == 0)) {
              if (plVar14 != (longlong *)0x0) {
                LOCK();
                plVar15 = plVar14 + 1;
                lVar5 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar14 + 8))(plVar14,1);
                  }
                }
              }
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar14 = plVar4 + 1;
                lVar5 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
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
              cVar16 = '\0';
            }
            else {
              cVar16 = lVar5 != 0;
              if ((lVar6 != 0) == (bool)cVar16) {
                cVar16 = FLocMetadataValue::operator<();
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar15 = plVar14 + 1;
                  lVar5 = *plVar15;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*plVar14)(plVar14);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar14 + 0xc);
                    iVar3 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if ((iVar3 == 1) && (plVar14 != (longlong *)0x0)) goto LAB_1415edad6;
                  }
                }
              }
              else if (plVar14 != (longlong *)0x0) {
                LOCK();
                plVar15 = plVar14 + 1;
                lVar5 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
LAB_1415edad6:
                    (**(code **)(*plVar14 + 8))(plVar14,1);
                  }
                }
              }
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar14 = plVar4 + 1;
                lVar5 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
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
            }
            if (cVar16 != '\0') {
              iVar13 = iVar12;
            }
            iVar13 = iVar13 + 1;
            param_1 = local_88;
          }
          plVar15 = param_1 + (longlong)iVar11 * 2;
          plVar14 = param_1 + (longlong)iVar13 * 2;
          plVar4 = (longlong *)plVar14[1];
          lVar5 = *plVar14;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          plVar7 = (longlong *)plVar15[1];
          lVar6 = *plVar15;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
          }
          if ((lVar6 == 0) && (lVar5 == 0)) {
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar14 = plVar7 + 1;
              lVar5 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                iVar11 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  (**(code **)(*plVar7 + 8))(plVar7,1);
                }
              }
            }
            param_1 = local_88;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar14 = plVar4 + 1;
              lVar5 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar11 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                param_1 = local_88;
                if (iVar11 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                  param_1 = local_88;
                }
              }
            }
            break;
          }
          cVar16 = lVar5 != 0;
          if ((lVar6 != 0) == (bool)cVar16) {
            cVar16 = FLocMetadataValue::operator<();
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar7 + 1;
              lVar5 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                iVar11 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar11 == 1) && (plVar7 != (longlong *)0x0)) goto LAB_1415edbe7;
              }
            }
          }
          else if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar7 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
LAB_1415edbe7:
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar4 + 1;
            lVar5 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          param_1 = local_88;
          if (cVar16 == '\0') break;
          if (plVar15 != plVar14) {
            local_50 = *plVar15;
            lStack_48 = plVar15[1];
            uVar8 = *(undefined4 *)((longlong)plVar14 + 4);
            lVar5 = plVar14[1];
            uVar9 = *(undefined4 *)((longlong)plVar14 + 0xc);
            *(int *)plVar15 = (int)*plVar14;
            *(undefined4 *)((longlong)plVar15 + 4) = uVar8;
            *(int *)(plVar15 + 1) = (int)lVar5;
            *(undefined4 *)((longlong)plVar15 + 0xc) = uVar9;
            *plVar14 = local_50;
            plVar14[1] = lStack_48;
          }
          iVar11 = iVar13;
        } while (iVar13 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      local_78 = local_78 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1415edd30 FUN_1415edd30 body=2032 status=ok
// SIG undefined FUN_1415edd30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415edd30(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_3f8 [32];
  undefined1 local_3d8;
  longlong *local_3d0;
  longlong *local_3c8;
  longlong *local_3c0;
  longlong *local_3b8;
  undefined8 local_3b0;
  longlong local_398;
  longlong local_390;
  longlong lStack_388;
  longlong local_380;
  longlong lStack_378;
  longlong local_370;
  longlong lStack_368;
  longlong local_360;
  longlong lStack_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
    lStack_340 = param_2 * 0x10 + -0x10 + param_1;
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_3d8 = param_3;
    local_3b0 = param_4;
    local_348 = param_1;
    fVar17 = _guard_xfg_dispatch_icall_nop(fVar17);
    local_338 = (undefined4)(longlong)(fVar17 + fVar17);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    local_3d0 = &local_348;
    do {
      local_398 = local_3d0[2];
      lVar11 = local_3d0[1] - *local_3d0;
      local_3b8 = (longlong *)CONCAT44(local_3b8._4_4_,(int)local_398);
      plVar12 = (longlong *)*local_3d0;
      plVar10 = (longlong *)local_3d0[1];
      iVar13 = (int)local_398;
      while (lVar11 = (lVar11 >> 4) + 1, local_3c8 = plVar12, local_3c0 = plVar10, iVar13 != 0) {
        if (lVar11 < 9) {
          if (plVar12 < plVar10) {
            plVar10 = plVar12 + 2;
            local_3b8 = plVar10;
            do {
              plVar14 = plVar10;
              plVar16 = plVar12;
              plVar9 = plVar12;
              if (plVar10 <= local_3c0) {
                do {
                  plVar12 = (longlong *)plVar14[1];
                  lVar11 = *plVar14;
                  if (plVar12 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                    UNLOCK();
                  }
                  plVar10 = (longlong *)plVar16[1];
                  lVar4 = *plVar16;
                  if (plVar10 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                    UNLOCK();
                  }
                  if ((lVar4 == 0) && (lVar11 == 0)) {
                    if (plVar10 != (longlong *)0x0) {
                      LOCK();
                      plVar9 = plVar10 + 1;
                      lVar11 = *plVar9;
                      *(int *)plVar9 = (int)*plVar9 + -1;
                      UNLOCK();
                      if ((int)lVar11 == 1) {
                        (**(code **)*plVar10)(plVar10);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar10 + 0xc);
                        iVar13 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar13 == 1) {
                          (**(code **)(*plVar10 + 8))(plVar10,1);
                        }
                      }
                    }
                    if (plVar12 != (longlong *)0x0) {
                      LOCK();
                      plVar10 = plVar12 + 1;
                      lVar11 = *plVar10;
                      *(int *)plVar10 = (int)*plVar10 + -1;
                      UNLOCK();
                      if ((int)lVar11 == 1) {
                        (**(code **)*plVar12)(plVar12);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar12 + 0xc);
                        iVar13 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar13 == 1) {
                          (**(code **)(*plVar12 + 8))(plVar12,1);
                        }
                      }
                    }
                    cVar8 = '\0';
                  }
                  else {
                    cVar8 = lVar11 != 0;
                    if ((lVar4 != 0) == (bool)cVar8) {
                      cVar8 = FLocMetadataValue::operator<();
                      if (plVar10 != (longlong *)0x0) {
                        LOCK();
                        plVar9 = plVar10 + 1;
                        lVar11 = *plVar9;
                        *(int *)plVar9 = (int)*plVar9 + -1;
                        UNLOCK();
                        if ((int)lVar11 == 1) {
                          (**(code **)*plVar10)(plVar10);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar10 + 0xc);
                          iVar13 = *piVar1;
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if ((iVar13 == 1) && (plVar10 != (longlong *)0x0)) goto LAB_1415ee47a;
                        }
                      }
                    }
                    else if (plVar10 != (longlong *)0x0) {
                      LOCK();
                      plVar9 = plVar10 + 1;
                      lVar11 = *plVar9;
                      *(int *)plVar9 = (int)*plVar9 + -1;
                      UNLOCK();
                      if ((int)lVar11 == 1) {
                        (**(code **)*plVar10)(plVar10);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar10 + 0xc);
                        iVar13 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar13 == 1) {
LAB_1415ee47a:
                          (**(code **)(*plVar10 + 8))(plVar10,1);
                        }
                      }
                    }
                    if (plVar12 != (longlong *)0x0) {
                      LOCK();
                      plVar10 = plVar12 + 1;
                      lVar11 = *plVar10;
                      *(int *)plVar10 = (int)*plVar10 + -1;
                      UNLOCK();
                      if ((int)lVar11 == 1) {
                        (**(code **)*plVar12)(plVar12);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar12 + 0xc);
                        iVar13 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar13 == 1) {
                          (**(code **)(*plVar12 + 8))(plVar12,1);
                        }
                      }
                    }
                  }
                  plVar9 = plVar14;
                  if (cVar8 == '\0') {
                    plVar9 = plVar16;
                  }
                  plVar14 = plVar14 + 2;
                  plVar10 = local_3b8;
                  plVar12 = local_3c8;
                  plVar16 = plVar9;
                } while (plVar14 <= local_3c0);
              }
              if (plVar9 != local_3c0) {
                local_360 = *plVar9;
                lStack_358 = plVar9[1];
                uVar6 = *(undefined4 *)((longlong)local_3c0 + 4);
                lVar11 = local_3c0[1];
                uVar7 = *(undefined4 *)((longlong)local_3c0 + 0xc);
                *(int *)plVar9 = (int)*local_3c0;
                *(undefined4 *)((longlong)plVar9 + 4) = uVar6;
                *(int *)(plVar9 + 1) = (int)lVar11;
                *(undefined4 *)((longlong)plVar9 + 0xc) = uVar7;
                *local_3c0 = local_360;
                local_3c0[1] = lStack_358;
              }
              local_3c0 = local_3c0 + -2;
            } while (plVar12 < local_3c0);
          }
          goto LAB_1415ee2cc;
        }
        plVar9 = plVar12 + (lVar11 / 2) * 2;
        if (plVar9 != plVar12) {
          local_390 = *plVar9;
          lStack_388 = plVar9[1];
          uVar6 = *(undefined4 *)((longlong)plVar12 + 4);
          lVar11 = plVar12[1];
          uVar7 = *(undefined4 *)((longlong)plVar12 + 0xc);
          *(int *)plVar9 = (int)*plVar12;
          *(undefined4 *)((longlong)plVar9 + 4) = uVar6;
          *(int *)(plVar9 + 1) = (int)lVar11;
          *(undefined4 *)((longlong)plVar9 + 0xc) = uVar7;
          *plVar12 = local_390;
          plVar12[1] = lStack_388;
        }
        plVar9 = plVar10 + 2;
        plVar14 = plVar12;
LAB_1415ede90:
        do {
          while( true ) {
            plVar16 = plVar14;
            plVar14 = plVar16 + 2;
            if (plVar10 < plVar14) goto LAB_1415ee023;
            plVar15 = (longlong *)plVar16[3];
            lVar11 = *plVar14;
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
            }
            plVar3 = (longlong *)plVar12[1];
            lVar4 = *plVar12;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            if ((lVar4 != 0) || (lVar11 != 0)) break;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar16 = plVar3 + 1;
              lVar11 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar13 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar16 = plVar15 + 1;
              lVar11 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                iVar13 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar15 + 8))(plVar15,1);
                }
              }
            }
          }
          cVar8 = lVar11 != 0;
          if ((lVar4 != 0) == (bool)cVar8) {
            cVar8 = FLocMetadataValue::operator<();
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar3 + 1;
              lVar11 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar13 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar13 == 1) && (plVar3 != (longlong *)0x0)) goto LAB_1415edfd3;
              }
            }
          }
          else if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar3 + 1;
            lVar11 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
LAB_1415edfd3:
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar15 + 1;
            lVar11 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
        } while (cVar8 == '\0');
LAB_1415ee023:
        do {
          while( true ) {
            plVar15 = plVar9;
            plVar9 = plVar15 + -2;
            if (plVar9 <= plVar12) goto LAB_1415ee1b5;
            plVar3 = (longlong *)plVar12[1];
            lVar11 = *plVar12;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            plVar5 = (longlong *)plVar15[-1];
            lVar4 = *plVar9;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            if ((lVar4 != 0) || (lVar11 != 0)) break;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar5 + 1;
              lVar11 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar13 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar3 + 1;
              lVar11 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar13 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
          }
          cVar8 = lVar11 != 0;
          if ((lVar4 != 0) == (bool)cVar8) {
            cVar8 = FLocMetadataValue::operator<();
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              lVar11 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar13 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar13 == 1) && (plVar5 != (longlong *)0x0)) goto LAB_1415ee165;
              }
            }
          }
          else if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            lVar11 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
LAB_1415ee165:
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar3 + 1;
            lVar11 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
        } while (cVar8 == '\0');
LAB_1415ee1b5:
        if (plVar14 <= plVar9) {
          if (plVar14 != plVar9) {
            local_380 = *plVar14;
            lStack_378 = plVar16[3];
            uVar6 = *(undefined4 *)((longlong)plVar15 + -0xc);
            lVar11 = plVar15[-1];
            uVar7 = *(undefined4 *)((longlong)plVar15 + -4);
            *(int *)plVar14 = (int)*plVar9;
            *(undefined4 *)((longlong)plVar16 + 0x14) = uVar6;
            *(int *)(plVar16 + 3) = (int)lVar11;
            *(undefined4 *)((longlong)plVar16 + 0x1c) = uVar7;
            *plVar9 = local_380;
            plVar15[-1] = lStack_378;
          }
          goto LAB_1415ede90;
        }
        if (plVar12 != plVar9) {
          local_370 = *local_3c8;
          lStack_368 = local_3c8[1];
          uVar6 = *(undefined4 *)((longlong)plVar15 + -0xc);
          lVar11 = plVar15[-1];
          uVar7 = *(undefined4 *)((longlong)plVar15 + -4);
          *(int *)local_3c8 = (int)*plVar9;
          *(undefined4 *)((longlong)local_3c8 + 4) = uVar6;
          *(int *)(local_3c8 + 1) = (int)lVar11;
          *(undefined4 *)((longlong)local_3c8 + 0xc) = uVar7;
          *plVar9 = local_370;
          plVar15[-1] = lStack_368;
        }
        iVar13 = (int)local_3b8 + -1;
        local_3b8 = (longlong *)CONCAT44(local_3b8._4_4_,iVar13);
        param_4 = local_3b0;
        param_3 = local_3d8;
        if ((longlong)((longlong)plVar9 + (-0x10 - (longlong)local_3c8) & 0xfffffffffffffff0U) <
            (longlong)((longlong)local_3c0 - (longlong)plVar14 & 0xfffffffffffffff0U)) {
          if (plVar14 < local_3c0) {
            *local_3d0 = (longlong)plVar14;
            local_3d0[1] = (longlong)local_3c0;
            *(int *)(local_3d0 + 2) = iVar13;
            local_3d0 = local_3d0 + 3;
          }
          if (plVar9 <= local_3c8 + 2) goto LAB_1415ee2cc;
          local_3c0 = plVar15 + -4;
        }
        else {
          if (local_3c8 + 2 < plVar9) {
            *local_3d0 = (longlong)local_3c8;
            local_3d0[1] = (longlong)(plVar15 + -4);
            *(int *)(local_3d0 + 2) = iVar13;
            local_3d0 = local_3d0 + 3;
          }
          local_3c8 = plVar14;
          if (local_3c0 <= plVar14) goto LAB_1415ee2cc;
        }
        lVar11 = (longlong)local_3c0 - (longlong)local_3c8;
        plVar12 = local_3c8;
        plVar10 = local_3c0;
      }
      FUN_1415ed570(plVar12,lVar11,param_3,param_4);
LAB_1415ee2cc:
      local_3d0 = local_3d0 + -3;
    } while (&local_348 <= local_3d0);
  }
  return;
}



// FUNCTION 1415ee520 NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsCurrency>,FString,FTextHistory_AsCurrency> body=287 status=ok
// SIG undefined NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsCurrency>,FString,FTextHistory_AsCurrency>(void)

undefined8 *
SharedPointerInternals::
NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsCurrency>,FString,FTextHistory_AsCurrency>
          (undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_DestroyObject_144cb6248;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5a88;
    puVar1[3] = 0;
    puVar1[4] = 0;
    FTextHistory_FormatNumber::FTextHistory_FormatNumber(puVar1 + 5,param_2);
    puVar1[5] = &PTR__scalar_deleting_destructor__144cb5698;
    puVar1[0x13] = 0;
    puVar1[0x13] = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)((longlong)puVar1 + 0xa4) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined8 *)(param_2 + 0x78) = 0;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5ad8;
    puVar1[0x15] = 0;
    puVar1[0x15] = *param_1;
    *param_1 = 0;
    *(undefined4 *)(puVar1 + 0x16) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)((longlong)puVar1 + 0xb4) = *(undefined4 *)((longlong)param_1 + 0xc);
    param_1[1] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0x17));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 0x17),4000);
    puVar2 = puVar1;
  }
  return puVar2;
}



// FUNCTION 1415ee640 FUN_1415ee640 body=292 status=ok
// SIG undefined FUN_1415ee640(void)

undefined8 * FUN_1415ee640(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_DestroyObject_144cb6258;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5b28;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = &PTR_FUN_144cb53d8;
    *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(param_2 + 8);
    puVar1[5] = &PTR__scalar_deleting_destructor__144cb56f0;
    puVar1[7] = *(undefined8 *)(param_2 + 0x10);
    *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_2 + 0x18);
    puVar1[9] = 0;
    puVar1[9] = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x54) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x28) = 0;
    puVar1[0xb] = *(undefined8 *)(param_2 + 0x30);
    puVar1[0xc] = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5b78;
    puVar1[0xd] = 0;
    puVar1[0xd] = *param_1;
    *param_1 = 0;
    *(undefined4 *)(puVar1 + 0xe) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)((longlong)puVar1 + 0x74) = *(undefined4 *)((longlong)param_1 + 0xc);
    param_1[1] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0xf));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 0xf),4000);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415ee770 NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsDateTime>,FString,FTextHistory_AsDateTime> body=298 status=ok
// SIG undefined NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsDateTime>,FString,FTextHistory_AsDateTime>(void)

undefined8 *
SharedPointerInternals::
NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsDateTime>,FString,FTextHistory_AsDateTime>
          (undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_DestroyObject_144cb6258;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5b28;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = &PTR_FUN_144cb53d8;
    *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(param_2 + 8);
    puVar1[5] = &PTR__scalar_deleting_destructor__144cb57a0;
    puVar1[7] = *(undefined8 *)(param_2 + 0x10);
    *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x44) = *(undefined4 *)(param_2 + 0x1c);
    puVar1[9] = 0;
    puVar1[9] = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x54) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x28) = 0;
    puVar1[0xb] = *(undefined8 *)(param_2 + 0x30);
    puVar1[0xc] = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5b78;
    puVar1[0xd] = 0;
    puVar1[0xd] = *param_1;
    *param_1 = 0;
    *(undefined4 *)(puVar1 + 0xe) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)((longlong)puVar1 + 0x74) = *(undefined4 *)((longlong)param_1 + 0xc);
    param_1[1] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0xf));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 0xf),4000);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415ee8a0 NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsNumber>,FString,FTextHistory_AsNumber> body=243 status=ok
// SIG undefined NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsNumber>,FString,FTextHistory_AsNumber>(void)

undefined8 *
SharedPointerInternals::
NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsNumber>,FString,FTextHistory_AsNumber>
          (undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144cb63c8;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5da8;
    puVar1[3] = 0;
    puVar1[4] = 0;
    FTextHistory_FormatNumber::FTextHistory_FormatNumber(puVar1 + 5,param_2);
    puVar1[5] = &PTR__scalar_deleting_destructor__144cb55e8;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb61f8;
    puVar1[0x13] = 0;
    puVar1[0x13] = *param_1;
    *param_1 = 0;
    *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)((longlong)puVar1 + 0xa4) = *(undefined4 *)((longlong)param_1 + 0xc);
    param_1[1] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0x15));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 0x15),4000);
    puVar2 = puVar1;
  }
  return puVar2;
}



// FUNCTION 1415ee9a0 NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsPercent>,FString,FTextHistory_AsPercent> body=243 status=ok
// SIG undefined NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsPercent>,FString,FTextHistory_AsPercent>(void)

undefined8 *
SharedPointerInternals::
NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsPercent>,FString,FTextHistory_AsPercent>
          (undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144cb63c8;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5da8;
    puVar1[3] = 0;
    puVar1[4] = 0;
    FTextHistory_FormatNumber::FTextHistory_FormatNumber(puVar1 + 5,param_2);
    puVar1[5] = &PTR__scalar_deleting_destructor__144cb5640;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb61f8;
    puVar1[0x13] = 0;
    puVar1[0x13] = *param_1;
    *param_1 = 0;
    *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)((longlong)puVar1 + 0xa4) = *(undefined4 *)((longlong)param_1 + 0xc);
    param_1[1] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0x15));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 0x15),4000);
    puVar2 = puVar1;
  }
  return puVar2;
}



// FUNCTION 1415eeaa0 FUN_1415eeaa0 body=292 status=ok
// SIG undefined FUN_1415eeaa0(void)

undefined8 * FUN_1415eeaa0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_DestroyObject_144cb6258;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5b28;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = &PTR_FUN_144cb53d8;
    *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(param_2 + 8);
    puVar1[5] = &PTR__scalar_deleting_destructor__144cb5748;
    puVar1[7] = *(undefined8 *)(param_2 + 0x10);
    *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_2 + 0x18);
    puVar1[9] = 0;
    puVar1[9] = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x54) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x28) = 0;
    puVar1[0xb] = *(undefined8 *)(param_2 + 0x30);
    puVar1[0xc] = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5b78;
    puVar1[0xd] = 0;
    puVar1[0xd] = *param_1;
    *param_1 = 0;
    *(undefined4 *)(puVar1 + 0xe) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)((longlong)puVar1 + 0x74) = *(undefined4 *)((longlong)param_1 + 0xc);
    param_1[1] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0xf));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 0xf),4000);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415eebd0 NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_Transform>,FString,FTextHistory_Transform> body=260 status=ok
// SIG undefined NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_Transform>,FString,FTextHistory_Transform>(void)

undefined8 *
SharedPointerInternals::
NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_Transform>,FString,FTextHistory_Transform>
          (undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_FUN_144cb61e8;
    puVar2[2] = &PTR__scalar_deleting_destructor__144cb59e8;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = &PTR_FUN_144cb53d8;
    *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(param_2 + 8);
    puVar2[5] = &PTR__scalar_deleting_destructor__144cb57f8;
    puVar2[7] = *(undefined8 *)(param_2 + 0x10);
    lVar1 = *(longlong *)(param_2 + 0x18);
    puVar2[8] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 0x20);
    *(undefined1 *)(puVar2 + 10) = *(undefined1 *)(param_2 + 0x28);
    puVar2[2] = &PTR__scalar_deleting_destructor__144cb5a38;
    puVar2[0xb] = 0;
    puVar2[0xb] = *param_1;
    *param_1 = 0;
    *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)((longlong)puVar2 + 100) = *(undefined4 *)((longlong)param_1 + 0xc);
    param_1[1] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 0xd));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 0xd),4000);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415eece0 FUN_1415eece0 body=222 status=ok
// SIG undefined FUN_1415eece0(void)

undefined8 * FUN_1415eece0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x80);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = &PTR_LAB_144cb62e8;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb5998;
  puVar1[3] = &PTR_FUN_144cb53d8;
  lVar3 = DAT_1468b5998;
  if ((DAT_1468b5998 == 0) && (lVar2 = operator_new(0x110), lVar3 = 0, lVar2 != 0)) {
    lVar3 = FUN_1415f3b10(lVar2);
  }
  DAT_1468b5998 = lVar3;
  *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  puVar1[3] = &PTR__scalar_deleting_destructor__144cb5850;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 0xb),4000);
  return puVar1;
}



// FUNCTION 1415eedc0 FUN_1415eedc0 body=213 status=ok
// SIG undefined FUN_1415eedc0(void)

undefined8 * FUN_1415eedc0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = &PTR_LAB_144cb6298;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb5d08;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = &PTR_FUN_144cb53d8;
  lVar3 = DAT_1468b5998;
  if ((DAT_1468b5998 == 0) && (lVar2 = operator_new(0x110), lVar3 = 0, lVar2 != 0)) {
    lVar3 = FUN_1415f3b10(lVar2);
  }
  DAT_1468b5998 = lVar3;
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  puVar1[5] = &PTR__scalar_deleting_destructor__144cb5538;
  FTextFormat::FTextFormat(puVar1 + 7);
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb5d58;
  return puVar1;
}



// FUNCTION 1415eeea0 NewIntrusiveReferenceController<TLocalizedTextData<FTextHistory_AsCurrency>_> body=156 status=ok
// SIG undefined NewIntrusiveReferenceController<TLocalizedTextData<FTextHistory_AsCurrency>_>(void)

undefined8 *
SharedPointerInternals::
NewIntrusiveReferenceController<TLocalizedTextData<FTextHistory_AsCurrency>_>(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xa8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144cb62b8;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5a88;
    puVar1[3] = 0;
    puVar1[4] = 0;
    FUN_1415f39a0(puVar1 + 5);
    puVar1[5] = &PTR__scalar_deleting_destructor__144cb5698;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5e48;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415eef40 FUN_1415eef40 body=212 status=ok
// SIG undefined FUN_1415eef40(void)

undefined8 * FUN_1415eef40(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = &PTR_LAB_144cb62c8;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb5b28;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = &PTR_FUN_144cb53d8;
  lVar3 = DAT_1468b5998;
  if ((DAT_1468b5998 == 0) && (lVar2 = operator_new(0x110), lVar3 = 0, lVar2 != 0)) {
    lVar3 = FUN_1415f3b10(lVar2);
  }
  DAT_1468b5998 = lVar3;
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  puVar1[5] = &PTR__scalar_deleting_destructor__144cb56f0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb5e98;
  return puVar1;
}



// FUNCTION 1415ef020 FUN_1415ef020 body=212 status=ok
// SIG undefined FUN_1415ef020(void)

undefined8 * FUN_1415ef020(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = &PTR_LAB_144cb62c8;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb5b28;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = &PTR_FUN_144cb53d8;
  lVar3 = DAT_1468b5998;
  if ((DAT_1468b5998 == 0) && (lVar2 = operator_new(0x110), lVar3 = 0, lVar2 != 0)) {
    lVar3 = FUN_1415f3b10(lVar2);
  }
  DAT_1468b5998 = lVar3;
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  puVar1[5] = &PTR__scalar_deleting_destructor__144cb57a0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb5e98;
  return puVar1;
}



// FUNCTION 1415ef100 FUN_1415ef100 body=131 status=ok
// SIG undefined FUN_1415ef100(void)

undefined8 * FUN_1415ef100(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x98);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144cb62a8;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5da8;
    puVar1[3] = 0;
    puVar1[4] = 0;
    FUN_1415f39a0(puVar1 + 5);
    puVar1[5] = &PTR__scalar_deleting_destructor__144cb55e8;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5df8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415ef190 FUN_1415ef190 body=131 status=ok
// SIG undefined FUN_1415ef190(void)

undefined8 * FUN_1415ef190(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x98);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144cb62a8;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5da8;
    puVar1[3] = 0;
    puVar1[4] = 0;
    FUN_1415f39a0(puVar1 + 5);
    puVar1[5] = &PTR__scalar_deleting_destructor__144cb5640;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb5df8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415ef220 FUN_1415ef220 body=212 status=ok
// SIG undefined FUN_1415ef220(void)

undefined8 * FUN_1415ef220(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = &PTR_LAB_144cb62c8;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb5b28;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = &PTR_FUN_144cb53d8;
  lVar3 = DAT_1468b5998;
  if ((DAT_1468b5998 == 0) && (lVar2 = operator_new(0x110), lVar3 = 0, lVar2 != 0)) {
    lVar3 = FUN_1415f3b10(lVar2);
  }
  DAT_1468b5998 = lVar3;
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  puVar1[5] = &PTR__scalar_deleting_destructor__144cb5748;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb5e98;
  return puVar1;
}



// FUNCTION 1415ef300 NewIntrusiveReferenceController<TLocalizedTextData<FTextHistory_Base>_> body=110 status=ok
// SIG undefined NewIntrusiveReferenceController<TLocalizedTextData<FTextHistory_Base>_>(void)

undefined8 *
SharedPointerInternals::NewIntrusiveReferenceController<TLocalizedTextData<FTextHistory_Base>_>
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144cb6268;
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb58a8;
    puVar1[3] = 0;
    puVar1[4] = 0;
    FUN_1415f36e0(puVar1 + 5);
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb58f8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415ef370 FUN_1415ef370 body=244 status=ok
// SIG undefined FUN_1415ef370(void)

undefined8 * FUN_1415ef370(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x98);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = &PTR_LAB_144cb6278;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb5bc8;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = &PTR_FUN_144cb53d8;
  lVar3 = DAT_1468b5998;
  if ((DAT_1468b5998 == 0) && (lVar2 = operator_new(0x110), lVar3 = 0, lVar2 != 0)) {
    lVar3 = FUN_1415f3b10(lVar2);
  }
  DAT_1468b5998 = lVar3;
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  puVar1[5] = &PTR__scalar_deleting_destructor__144cb5488;
  FTextFormat::FTextFormat(puVar1 + 7);
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x7c) = 0;
  puVar1[0x11] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb5c18;
  return puVar1;
}



// FUNCTION 1415ef470 FUN_1415ef470 body=213 status=ok
// SIG undefined FUN_1415ef470(void)

undefined8 * FUN_1415ef470(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = &PTR_LAB_144cb6288;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb5c68;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = &PTR_FUN_144cb53d8;
  lVar3 = DAT_1468b5998;
  if ((DAT_1468b5998 == 0) && (lVar2 = operator_new(0x110), lVar3 = 0, lVar2 != 0)) {
    lVar3 = FUN_1415f3b10(lVar2);
  }
  DAT_1468b5998 = lVar3;
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  puVar1[5] = &PTR__scalar_deleting_destructor__144cb54e0;
  FTextFormat::FTextFormat(puVar1 + 7);
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb5cb8;
  return puVar1;
}



// FUNCTION 1415ef550 FUN_1415ef550 body=216 status=ok
// SIG undefined FUN_1415ef550(void)

undefined8 * FUN_1415ef550(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = &PTR_LAB_144cb62d8;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb59e8;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = &PTR_FUN_144cb53d8;
  lVar3 = DAT_1468b5998;
  if (DAT_1468b5998 == 0) {
    lVar2 = operator_new(0x110);
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = FUN_1415f3b10(lVar2);
    }
  }
  DAT_1468b5998 = lVar3;
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  puVar1[5] = &PTR__scalar_deleting_destructor__144cb57f8;
  puVar4 = (undefined8 *)FUN_1404b03b0();
  puVar1[7] = *puVar4;
  lVar3 = puVar4[1];
  puVar1[8] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar1 + 9) = 0;
  puVar1[2] = &PTR__scalar_deleting_destructor__144cb5ee8;
  return puVar1;
}



// FUNCTION 1415ef630 NewIntrusiveReferenceController<FPolyglotTextSource> body=181 status=ok
// SIG undefined NewIntrusiveReferenceController<FPolyglotTextSource>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<FPolyglotTextSource>(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xb8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144cb63a8;
    ::_guard_xfg_dispatch_icall_nop(puVar1 + 3,0,0xa0);
    puVar1[2] = &PTR__scalar_deleting_destructor__144cb53b0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined4 *)(puVar1 + 9) = 0xffffffff;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0xffffffff;
    puVar1[0x15] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415ef6f0 NewIntrusiveReferenceController<FStringTableEntry,TSharedRef<FStringTable_const_,1>,FString,TSharedPtr<FString,1>_> body=249 status=ok
// SIG undefined NewIntrusiveReferenceController<FStringTableEntry,TSharedRef<FStringTable_const_,1>,FString,TSharedPtr<FString,1>_>(void)

undefined8 *
SharedPointerInternals::
NewIntrusiveReferenceController<FStringTableEntry,TSharedRef<FStringTable_const_,1>,FString,TSharedPtr<FString,1>_>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)operator_new(0x40);
  if (puVar12 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar12 + 1) = 1;
    *(undefined4 *)((longlong)puVar12 + 0xc) = 1;
    *puVar12 = &PTR_LAB_144cb61c8;
    uVar6 = *param_3;
    uVar7 = param_3[1];
    param_3[1] = 0;
    *param_3 = 0;
    uVar8 = *param_2;
    *param_2 = 0;
    uVar4 = *(undefined4 *)(param_2 + 1);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    plVar9 = (longlong *)param_1[1];
    uVar10 = *param_1;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    puVar12[2] = uVar10;
    puVar12[3] = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
    }
    puVar12[4] = uVar8;
    *(undefined4 *)(puVar12 + 5) = uVar4;
    *(undefined4 *)((longlong)puVar12 + 0x2c) = uVar5;
    puVar12[6] = uVar6;
    puVar12[7] = uVar7;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar9)(plVar9);
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
  return puVar12;
}



// FUNCTION 1415ef7f0 FUN_1415ef7f0 body=112 status=ok
// SIG undefined FUN_1415ef7f0(void)

undefined8 * FUN_1415ef7f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_DestroyObject_144cb61b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415ef860 FUN_1415ef860 body=403 status=ok
// SIG undefined FUN_1415ef860(void)

int FUN_1415ef860(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar3 = (int)param_1[1];
  lVar9 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar10 = 0;
  bVar13 = *(longlong *)*param_1 != *param_2;
  lVar8 = 0;
  iVar11 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar12 = iVar11 + 1;
    if (lVar8 < lVar9) {
      plVar6 = (longlong *)(*param_1 + lVar8 * 0x18);
      do {
        if (bVar13 != (*plVar6 != *param_2)) break;
        iVar12 = iVar12 + 1;
        lVar8 = lVar8 + 1;
        plVar6 = plVar6 + 3;
      } while (lVar8 < lVar9);
    }
    iVar7 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar7 != 0) {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar11 * 0x18 + 0x10);
        do {
          plVar4 = (longlong *)*plVar6;
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
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar6 = plVar6 + 3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar10 * 0x18),
                   (void *)(*param_1 + (longlong)iVar11 * 0x18),(longlong)iVar7 * 0x18);
      }
      iVar10 = iVar10 + iVar7;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    iVar11 = iVar12;
    if (lVar9 <= lVar8) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar3 - iVar10;
    }
  } while( true );
}



// FUNCTION 1415efa00 FUN_1415efa00 body=1059 status=ok
// SIG undefined FUN_1415efa00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415efa00(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_f8 [32];
  int local_d8;
  int local_d4;
  uint local_d0;
  undefined8 *local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar16 = (ulonglong)(int)param_2;
  uVar9 = uVar16;
  local_d0 = param_2;
  local_78 = uVar16;
  local_70 = param_1;
  if (0 < (int)param_2) {
    iVar14 = 1;
    lVar13 = (uVar16 - 1 >> 1) + 1;
    puVar17 = param_1;
    do {
      if (iVar14 < (int)uVar9) {
        plVar4 = (longlong *)puVar17[2];
        iVar5 = (**(code **)(*(longlong *)*puVar17 + 8))();
        iVar6 = (**(code **)(*plVar4 + 8))(plVar4);
        uVar9 = (ulonglong)param_2;
        if (iVar5 < iVar6) {
          puVar8 = param_1 + (longlong)iVar14 * 2;
          puVar11 = param_1 + (longlong)(iVar14 + -1) * 2;
          if (puVar11 != puVar8) {
            local_68 = *puVar11;
            uStack_60 = puVar11[1];
            uVar20 = *(undefined4 *)((longlong)puVar8 + 4);
            uVar21 = *(undefined4 *)(puVar8 + 1);
            uVar22 = *(undefined4 *)((longlong)puVar8 + 0xc);
            *(undefined4 *)puVar11 = *(undefined4 *)puVar8;
            *(undefined4 *)((longlong)puVar11 + 4) = uVar20;
            *(undefined4 *)(puVar11 + 1) = uVar21;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uVar22;
            *puVar8 = local_68;
            puVar8[1] = uStack_60;
          }
        }
      }
      iVar14 = iVar14 + 2;
      puVar17 = puVar17 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  local_b8 = 2;
  if (2 < (int)uVar9) {
    do {
      local_b4 = local_b8 * 2;
      local_bc = 0;
      local_b0 = local_b8 * 2;
      local_90 = 0;
      lVar13 = (longlong)local_b8 * 2;
      lVar12 = (longlong)local_b8 << 5;
      local_d4 = local_b8;
      local_88 = lVar12;
      local_80 = lVar13;
      iVar14 = local_b4;
      iVar5 = local_b0;
      do {
        local_c0 = (int)uVar9 - local_bc;
        if (iVar14 <= local_c0) {
          local_c0 = iVar14;
        }
        local_d8 = 0;
        local_c8 = param_1;
        if (0 < local_d4) {
          do {
            puVar17 = local_c8;
            if (local_c0 <= local_d4) break;
            lVar13 = 0;
            local_a8 = (longlong)local_d4;
            lVar12 = local_a8;
            if (local_d4 - local_d8 != 0) {
              lVar18 = (longlong)local_d8;
              puVar8 = param_1 + local_a8 * 2;
              uVar9 = (longlong)(local_d4 - local_d8);
              do {
                uVar16 = uVar9 >> 1;
                plVar4 = (longlong *)puVar17[(uVar16 + lVar13 + lVar18) * 2];
                iVar14 = (**(code **)(*(longlong *)*puVar8 + 8))();
                iVar5 = (**(code **)(*plVar4 + 8))(plVar4);
                if (iVar14 <= iVar5) {
                  lVar13 = (ulonglong)((uint)uVar9 & 1) + uVar16 + lVar13;
                }
                param_1 = local_c8;
                lVar12 = local_a8;
                uVar9 = uVar16;
              } while (uVar16 != 0);
            }
            puVar17 = local_c8;
            uVar9 = 0;
            local_d8 = local_d8 + (int)lVar13;
            if (local_d4 <= local_d8) break;
            local_a8 = (longlong)local_d8;
            if (local_c0 - local_d4 != 0) {
              lVar13 = local_a8 * 2;
              uVar16 = (longlong)(local_c0 - local_d4);
              do {
                plVar4 = (longlong *)param_1[lVar13];
                uVar19 = uVar16 >> 1;
                iVar14 = (**(code **)(*(longlong *)puVar17[(uVar19 + uVar9 + lVar12) * 2] + 8))();
                iVar5 = (**(code **)(*plVar4 + 8))(plVar4);
                if (iVar5 < iVar14) {
                  uVar9 = (ulonglong)((uint)uVar16 & 1) + uVar19 + uVar9;
                }
                uVar16 = uVar19;
              } while (uVar19 != 0);
            }
            param_1 = local_c8;
            iVar5 = (int)uVar9;
            iVar14 = local_d8;
            if (iVar5 != 0) {
              iVar15 = (iVar5 - local_d8) + local_d4;
              uVar9 = uVar9 & 0xffffffff;
              iVar6 = iVar15;
              do {
                iVar7 = (int)uVar9;
                uVar10 = iVar6 % iVar7;
                uVar9 = (ulonglong)uVar10;
                iVar6 = iVar7;
              } while (uVar10 != 0);
              uVar9 = 0;
              if (0 < iVar7) {
                puVar17 = local_c8 + local_a8 * 2;
                do {
                  local_a0 = *puVar17;
                  iVar6 = (int)uVar9;
                  uStack_98 = (longlong *)puVar17[1];
                  puVar17[1] = 0;
                  *puVar17 = 0;
                  if (0 < (int)((longlong)iVar15 / (longlong)iVar7)) {
                    local_a0._4_4_ = (undefined4)((ulonglong)local_a0 >> 0x20);
                    uStack_98._4_4_ = (undefined4)((ulonglong)uStack_98 >> 0x20);
                    uVar16 = (longlong)iVar15 / (longlong)iVar7 & 0xffffffff;
                    do {
                      uVar19 = (longlong)((int)uVar9 + iVar5) % (longlong)iVar15;
                      uVar9 = uVar19 & 0xffffffff;
                      puVar8 = param_1 + (longlong)((int)uVar19 + iVar14) * 2;
                      uVar20 = (undefined4)local_a0;
                      uVar21 = local_a0._4_4_;
                      uVar22 = (undefined4)uStack_98;
                      uVar23 = uStack_98._4_4_;
                      if (puVar8 != &local_a0) {
                        uVar20 = *(undefined4 *)puVar8;
                        uVar21 = *(undefined4 *)((longlong)puVar8 + 4);
                        uVar22 = *(undefined4 *)(puVar8 + 1);
                        uVar23 = *(undefined4 *)((longlong)puVar8 + 0xc);
                        *(undefined4 *)puVar8 = (undefined4)local_a0;
                        *(undefined4 *)((longlong)puVar8 + 4) = local_a0._4_4_;
                        *(undefined4 *)(puVar8 + 1) = (undefined4)uStack_98;
                        *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_98._4_4_;
                        local_58 = uVar20;
                        uStack_54 = uVar21;
                        uStack_50 = uVar22;
                        uStack_4c = uVar23;
                      }
                      uVar16 = uVar16 - 1;
                      local_a0._0_4_ = uVar20;
                      local_a0._4_4_ = uVar21;
                      uStack_98._0_4_ = uVar22;
                      uStack_98._4_4_ = uVar23;
                    } while (uVar16 != 0);
                    local_a0 = CONCAT44(uVar21,uVar20);
                    uStack_98 = (longlong *)CONCAT44(uVar23,uVar22);
                  }
                  plVar4 = uStack_98;
                  if (uStack_98 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = uStack_98 + 1;
                    lVar13 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar13 == 1) {
                      (**(code **)*uStack_98)(uStack_98);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar4 + 0xc);
                      iVar3 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      iVar14 = local_d8;
                      if (iVar3 == 1) {
                        (**(code **)(*uStack_98 + 8))(uStack_98,1);
                        iVar14 = local_d8;
                      }
                    }
                  }
                  uVar10 = iVar6 + 1;
                  uVar9 = (ulonglong)uVar10;
                  puVar17 = puVar17 + 2;
                } while ((int)uVar10 < iVar7);
              }
            }
            local_d8 = iVar14 + 1 + iVar5;
            local_d4 = local_d4 + iVar5;
          } while (local_d8 < local_d4);
          uVar9 = (ulonglong)local_d0;
          lVar12 = local_88;
          lVar13 = local_80;
          uVar16 = local_78;
          local_d4 = local_b8;
          iVar14 = local_b4;
          iVar5 = local_b0;
        }
        local_bc = local_bc + iVar5;
        local_90 = local_90 + lVar13;
        param_1 = (undefined8 *)((longlong)param_1 + lVar12);
      } while (local_90 < (longlong)uVar16);
      param_1 = local_70;
      local_b8 = iVar14;
    } while (iVar14 < (int)uVar9);
  }
  return;
}



// FUNCTION 1415efe30 FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier> body=154 status=ok
// SIG undefined FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier>(void)

undefined8 *
Impl::FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier>::
FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb6318;
  param_1[1] = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  param_1[3] = param_2[2];
  lVar4 = param_2[3];
  param_1[4] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_2[3];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 1415efed0 TLocalizedTextData<FTextHistory_Base> body=155 status=ok
// SIG undefined TLocalizedTextData<FTextHistory_Base>(void)

undefined8 *
TLocalizedTextData<FTextHistory_Base>::TLocalizedTextData<FTextHistory_Base>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  TTextData<FTextHistory_Base>::TTextData<FTextHistory_Base>(param_1,&local_18);
  *param_1 = &PTR__scalar_deleting_destructor__144cb58f8;
  plVar4 = (longlong *)param_2[1];
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 1415eff70 FUN_1415eff70 body=163 status=ok
// SIG undefined FUN_1415eff70(void)

undefined8 * FUN_1415eff70(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1415f5cc0();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 7,(void *)(param_2 + 0x38),4);
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1415f0020 TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> body=163 status=ok
// SIG undefined TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>(void)

undefined8 *
TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          (undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  TSparseArray<TSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 7,(void *)(param_2 + 0x38),4);
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1415f00d0 TMap<FString,FFormatArgumentValue,FDefaultSetAllocator,FLocKeyMapFuncs<FFormatArgumentValue>_> body=163 status=ok
// SIG undefined TMap<FString,FFormatArgumentValue,FDefaultSetAllocator,FLocKeyMapFuncs<FFormatArgumentValue>_>(void)

undefined8 *
TMap<FString,FFormatArgumentValue,FDefaultSetAllocator,FLocKeyMapFuncs<FFormatArgumentValue>_>::
TMap<FString,FFormatArgumentValue,FDefaultSetAllocator,FLocKeyMapFuncs<FFormatArgumentValue>_>
          (undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 7,(void *)(param_2 + 0x38),4);
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1415f0180 TTextData<FTextHistory_Base> body=152 status=ok
// SIG undefined TTextData<FTextHistory_Base>(void)

undefined8 *
TTextData<FTextHistory_Base>::TTextData<FTextHistory_Base>(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb58a8;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_2[1] = 0;
  *param_2 = 0;
  FUN_1415f36e0(param_1 + 3);
  plVar4 = (longlong *)param_2[1];
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 1415f0220 TTuple<FString,FFormatArgumentValue> body=116 status=ok
// SIG undefined TTuple<FString,FFormatArgumentValue>(void)

longlong TTuple<FString,FFormatArgumentValue>::TTuple<FString,FFormatArgumentValue>
                   (longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FString::FString();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (*(char *)(param_2 + 0x38) != '\0') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    lVar1 = *(longlong *)(param_2 + 0x28);
    *(longlong *)(param_1 + 0x28) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return param_1;
}



// FUNCTION 1415f02a0 FFormatArgumentValue body=63 status=ok
// SIG undefined FFormatArgumentValue(void)

undefined4 * FFormatArgumentValue::FFormatArgumentValue(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = 4;
  puVar2 = (undefined8 *)FUN_1404b03b0();
  *(undefined8 *)(param_1 + 4) = *puVar2;
  lVar1 = puVar2[1];
  *(longlong *)(param_1 + 6) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[8] = *(undefined4 *)(puVar2 + 2);
  *(undefined1 *)(param_1 + 10) = 1;
  return param_1;
}



// FUNCTION 1415f02e0 FUN_1415f02e0 body=650 status=ok
// SIG undefined FUN_1415f02e0(void)

undefined8 * FUN_1415f02e0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  undefined1 local_res10 [8];
  int local_b8;
  uint uStack_b4;
  int iStack_a4;
  int iStack_a0;
  undefined8 uStack_90;
  uint *local_88;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  uStack_b4 = 1;
  *param_1 = 0;
  param_1[1] = 0;
  local_88 = (uint *)(param_2 + 2);
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  iVar3 = (int)param_2[5];
  iStack_a0 = 0;
  local_b8 = 0;
  iStack_a4 = 0;
  if (iVar3 != 0) {
    puVar12 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar12 = local_88;
    }
    uVar4 = *puVar12;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar11 = local_b8 + 1;
      bVar7 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar11;
      if (bVar7) goto LAB_1415f03c0;
      uVar4 = puVar12[lVar10 + 1];
    }
    uStack_b4 = -uVar4 & uVar4;
    iVar11 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    iStack_a4 = (iStack_a0 - iVar11) + 0x1f;
    if (iVar3 < iStack_a4) {
LAB_1415f03c0:
      iStack_a4 = iVar3;
    }
  }
  uStack_90 = CONCAT44(uStack_b4,local_b8);
  uStack_28 = 0xffffffff;
  iStack_24 = iStack_a4;
  iStack_20 = iStack_a0;
  uStack_80 = 0xffffffff;
  iStack_7c = iStack_a4;
  local_78 = iStack_a0;
  local_40 = param_2;
  uStack_38 = uStack_90;
  puStack_30 = local_88;
  if (iStack_a4 < iVar3) {
    do {
      lVar8 = (longlong)iStack_7c;
      lVar10 = *param_2;
      plVar5 = *(longlong **)(lVar10 + 0x18 + lVar8 * 0x28);
      plVar6 = *(longlong **)(lVar10 + 0x10 + lVar8 * 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (plVar6 != (longlong *)0x0) {
        puVar9 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,local_50);
        local_70 = *puVar9;
        local_68 = (longlong *)puVar9[1];
        if (local_68 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
        }
        local_58 = &local_70;
        local_60 = lVar10 + lVar8 * 0x28;
        FUN_1415ec8f0(param_1,local_res10,&local_60,0);
        plVar6 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_68)(local_68);
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
        plVar6 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_48)(local_48);
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
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      uStack_80 = uStack_80 & ~uStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
  }
  return param_1;
}



// FUNCTION 1415f0570 FUN_1415f0570 body=140 status=ok
// SIG undefined FUN_1415f0570(void)

undefined8 * FUN_1415f0570(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_144cb5330;
  param_1[1] = *param_2;
  lVar4 = param_2[1];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 1415f0600 FNumberFormattingOptions body=36 status=ok
// SIG undefined FNumberFormattingOptions(void)

undefined2 * FNumberFormattingOptions::FNumberFormattingOptions(undefined2 *param_1)

{
  *param_1 = 0x100;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 6) = 0x144;
  *(undefined4 *)(param_1 + 10) = 3;
  return param_1;
}



// FUNCTION 1415f0630 FStringTable body=271 status=ok
// SIG undefined FStringTable(void)

undefined8 * FStringTable::FStringTable(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1a),4000);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x29),4000);
  return param_1;
}



// FUNCTION 1415f0740 FUN_1415f0740 body=497 status=ok
// SIG undefined FUN_1415f0740(void)

undefined8 * FUN_1415f0740(undefined8 *param_1,longlong *param_2)

{
  undefined8 **ppuVar1;
  undefined2 uVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 *local_38 [2];
  
  puVar12 = (undefined8 *)0x0;
  uVar8 = 0;
  puVar3 = (undefined8 *)operator_new(0x70);
  puVar6 = puVar12;
  puVar10 = local_48;
  puVar11 = puVar12;
  if (puVar3 != (undefined8 *)0x0) {
    iVar9 = (int)param_2[1];
    _Src = (void *)*param_2;
    local_48 = (undefined8 *)0x0;
    if (iVar9 != 0) {
      uStack_40._0_4_ = iVar9;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar9,0);
      puVar6 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar9 * 2);
      iVar9 = (int)uStack_40;
      uVar8 = uStack_40._4_4_;
    }
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    TTextData<FTextHistory_Base>::TTextData<FTextHistory_Base>(puVar3,&local_48);
    *puVar3 = &PTR__scalar_deleting_destructor__144cb5948;
    puVar3[7] = puVar6;
    *(int *)(puVar3 + 8) = iVar9;
    *(undefined4 *)((longlong)puVar3 + 0x44) = uVar8;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar3 + 9));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar3 + 9),4000);
    puVar6 = (undefined8 *)0x1;
    puVar10 = puVar12;
    puVar11 = puVar3;
  }
  *param_1 = puVar11;
  puVar4 = (undefined8 *)operator_new(0x18);
  puVar3 = puVar12;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    puVar4[2] = puVar11;
    puVar3 = puVar4;
  }
  param_1[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar11,puVar11);
  if ((puVar6 != (undefined8 *)0x0) && (puVar10 != (undefined8 *)0x0)) {
    FMemory::Free(puVar10);
  }
  puVar6 = DAT_1468b5998;
  *(undefined4 *)(param_1 + 2) = 0;
  puVar10 = DAT_1468b5998;
  if ((puVar6 == (undefined8 *)0x0) &&
     (lVar5 = operator_new(0x110), puVar6 = puVar12, puVar10 = puVar12, lVar5 != 0)) {
    puVar6 = (undefined8 *)FUN_1415f3b10(lVar5);
    puVar10 = puVar6;
  }
  DAT_1468b5998 = puVar10;
  uVar2 = *(undefined2 *)(puVar6 + 0x1a);
  puVar6 = (undefined8 *)*param_2;
  *param_2 = 0;
  lVar5 = param_2[1];
  uVar8 = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  ppuVar7 = (undefined8 **)(**(code **)(*(longlong *)*param_1 + 0x30))();
  if (ppuVar7 != &local_48) {
    *(undefined2 *)(ppuVar7 + 1) = uVar2;
  }
  if ((ppuVar7 == &local_48) || (ppuVar1 = ppuVar7 + 2, ppuVar1 == local_38)) {
    if (puVar6 != (undefined8 *)0x0) {
      FMemory::Free(puVar6);
    }
  }
  else {
    if (*ppuVar1 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    *ppuVar1 = puVar6;
    *(int *)(ppuVar7 + 3) = (int)lVar5;
    *(undefined4 *)((longlong)ppuVar7 + 0x1c) = uVar8;
  }
  return param_1;
}



// FUNCTION 1415f0940 FUN_1415f0940 body=427 status=ok
// SIG undefined FUN_1415f0940(void)

undefined8 *
FUN_1415f0940(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 local_38 [16];
  longlong local_28 [2];
  
  lVar4 = operator_new(0x38);
  puVar11 = (undefined8 *)0x0;
  puVar6 = puVar11;
  if (lVar4 != 0) {
    puVar6 = DAT_1468b5998;
    if ((DAT_1468b5998 == (undefined8 *)0x0) &&
       (lVar5 = operator_new(0x110), puVar6 = puVar11, lVar5 != 0)) {
      puVar6 = (undefined8 *)FUN_1415f3b10(lVar5);
    }
    DAT_1468b5998 = puVar6;
    uVar7 = FUN_141608340(DAT_1468b5998,local_38,param_3,param_4,param_2);
    puVar6 = (undefined8 *)
             TLocalizedTextData<FTextHistory_Base>::TLocalizedTextData<FTextHistory_Base>
                       (lVar4,uVar7);
  }
  *param_1 = puVar6;
  puVar8 = (undefined8 *)operator_new(0x18);
  puVar9 = puVar11;
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 1) = 1;
    *puVar8 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
    puVar8[2] = puVar6;
    puVar9 = puVar8;
  }
  param_1[1] = puVar9;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar6,puVar6);
  *(undefined4 *)(param_1 + 2) = param_5;
  puVar6 = DAT_1468b5998;
  if ((DAT_1468b5998 == (undefined8 *)0x0) &&
     (lVar4 = operator_new(0x110), puVar6 = puVar11, lVar4 != 0)) {
    puVar6 = (undefined8 *)FUN_1415f3b10(lVar4);
  }
  DAT_1468b5998 = puVar6;
  uVar2 = *(undefined2 *)(DAT_1468b5998 + 0x1a);
  lVar4 = *param_2;
  *param_2 = 0;
  lVar5 = param_2[1];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  puVar10 = (undefined1 *)(**(code **)(*(longlong *)*param_1 + 0x30))();
  if (puVar10 != local_38) {
    *(undefined2 *)(puVar10 + 8) = uVar2;
  }
  if ((puVar10 == local_38) || (plVar1 = (longlong *)(puVar10 + 0x10), plVar1 == local_28)) {
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar4;
    *(int *)(puVar10 + 0x18) = (int)lVar5;
    *(undefined4 *)(puVar10 + 0x1c) = uVar3;
  }
  return param_1;
}



// FUNCTION 1415f0af0 FUN_1415f0af0 body=420 status=ok
// SIG undefined FUN_1415f0af0(void)

undefined8 * FUN_1415f0af0(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 local_58;
  longlong local_50;
  undefined1 local_48 [16];
  longlong local_38 [2];
  
  lVar8 = operator_new(0x38);
  puVar13 = (undefined8 *)0x0;
  puVar9 = puVar13;
  if (lVar8 != 0) {
    local_50 = param_3[1];
    local_58 = *param_3;
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    puVar9 = (undefined8 *)
             TLocalizedTextData<FTextHistory_Base>::TLocalizedTextData<FTextHistory_Base>
                       (lVar8,&local_58);
  }
  *param_1 = puVar9;
  puVar10 = (undefined8 *)operator_new(0x18);
  puVar11 = puVar13;
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar10 + 1) = 1;
    *puVar10 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar10 + 0xc) = 1;
    puVar10[2] = puVar9;
    puVar11 = puVar10;
  }
  param_1[1] = puVar11;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar9,puVar9);
  puVar9 = DAT_1468b5998;
  *(undefined4 *)(param_1 + 2) = 0;
  puVar11 = DAT_1468b5998;
  if ((puVar9 == (undefined8 *)0x0) &&
     (lVar8 = operator_new(0x110), puVar9 = puVar13, puVar11 = puVar13, lVar8 != 0)) {
    puVar9 = (undefined8 *)FUN_1415f3b10(lVar8);
    puVar11 = puVar9;
  }
  DAT_1468b5998 = puVar11;
  uVar5 = *(undefined2 *)(puVar9 + 0x1a);
  lVar8 = *param_2;
  *param_2 = 0;
  lVar7 = param_2[1];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  puVar12 = (undefined1 *)(**(code **)(*(longlong *)*param_1 + 0x30))();
  if (puVar12 != local_48) {
    *(undefined2 *)(puVar12 + 8) = uVar5;
  }
  if ((puVar12 == local_48) || (plVar1 = (longlong *)(puVar12 + 0x10), plVar1 == local_38)) {
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar8;
    *(int *)(puVar12 + 0x18) = (int)lVar7;
    *(undefined4 *)(puVar12 + 0x1c) = uVar6;
  }
  plVar1 = (longlong *)param_3[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1415f0ca0 FText body=136 status=ok
// SIG undefined FText(void)

undefined8 * FText::FText(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 2) = 0;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 1415f0d30 FUN_1415f0d30 body=650 status=ok
// SIG undefined FUN_1415f0d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1415f0d30(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined **local_b8;
  undefined2 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  longlong *plStack_80;
  _RTL_CRITICAL_SECTION local_78;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  puVar8 = (undefined8 *)0x0;
  local_d8 = local_d8 & 0xffffffff00000000;
  puVar5 = (undefined8 *)operator_new(0x70);
  puVar7 = puVar8;
  puVar9 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    local_b8 = &PTR_FUN_144cb53d8;
    puVar7 = DAT_1468b5998;
    if ((DAT_1468b5998 == (undefined8 *)0x0) &&
       (lVar6 = operator_new(0x110), puVar7 = puVar8, lVar6 != 0)) {
      puVar7 = (undefined8 *)FUN_1415f3b10(lVar6);
    }
    DAT_1468b5998 = puVar7;
    local_b0 = *(undefined2 *)(DAT_1468b5998 + 0x1a);
    local_b8 = &PTR__scalar_deleting_destructor__144cb5850;
    local_a0 = *param_3;
    *param_3 = 0;
    local_98 = param_3[1];
    param_3[1] = 0;
    local_90 = 0;
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    local_a8 = param_2;
    InitializeCriticalSection(&local_78);
    SetCriticalSectionSpinCount(&local_78,4000);
    FUN_14160bd00(&local_b8,local_d0,0);
    plVar4 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c8 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
    *puVar5 = &PTR__scalar_deleting_destructor__144cb5998;
    puVar5[1] = &PTR_FUN_144cb53d8;
    *(undefined2 *)(puVar5 + 2) = local_b0;
    puVar5[1] = &PTR__scalar_deleting_destructor__144cb5850;
    puVar5[3] = local_a8;
    puVar5[4] = 0;
    puVar5[4] = local_a0;
    local_a0 = 0;
    *(undefined4 *)(puVar5 + 5) = (undefined4)local_98;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = local_98._4_4_;
    local_98 = 0;
    puVar5[7] = local_88;
    puVar5[8] = plStack_80;
    plStack_80 = (longlong *)0x0;
    local_88 = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar5 + 9));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar5 + 9),4000);
    local_d8 = 0;
    local_a8 = 0;
    puVar7 = puVar5;
    puVar9 = (undefined8 *)0x1;
  }
  *param_1 = puVar7;
  puVar5 = (undefined8 *)operator_new(0x18);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    puVar5[2] = puVar7;
    puVar8 = puVar5;
  }
  param_1[1] = puVar8;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar7,puVar7);
  if (puVar9 != (undefined8 *)0x0) {
    DeleteCriticalSection(&local_78);
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plStack_80 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (plStack_80 != (longlong *)0x0)) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
    if (local_a0 != 0) {
      FMemory::Free();
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415f0fc0 FText body=226 status=ok
// SIG undefined FText(void)

undefined8 * FText::FText(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *local_18;
  undefined8 *local_10;
  
  lVar1 = operator_new(0x38);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_10 = (undefined8 *)operator_new(0x20);
    if (local_10 != (undefined8 *)0x0) {
      *(undefined4 *)(local_10 + 1) = 1;
      *local_10 = &PTR_FUN_144cb51c0;
      *(undefined4 *)((longlong)local_10 + 0xc) = 1;
      local_10[3] = 0;
      local_10[2] = 0;
      local_10[3] = 0;
    }
    local_18 = local_10 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
    uVar2 = TLocalizedTextData<FTextHistory_Base>::TLocalizedTextData<FTextHistory_Base>
                      (lVar1,&local_18);
  }
  *param_1 = uVar2;
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = uVar2;
  }
  param_1[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_1,uVar2,uVar2);
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1415f10b0 FText body=33 status=ok
// SIG undefined FText(void)

undefined8 * FText::FText(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 1415f10e0 FText body=53 status=ok
// SIG undefined FText(void)

undefined8 * FText::FText(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1404b03b0();
  *param_1 = *puVar2;
  lVar1 = puVar2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1415f1120 FTextFormat body=281 status=ok
// SIG undefined FTextFormat(void)

undefined8 * FTextFormat::FTextFormat(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined1 *)operator_new(0x90);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    *puVar2 = 1;
    puVar3 = (undefined8 *)FUN_1404b03b0();
    *(undefined8 *)(puVar2 + 8) = *puVar3;
    lVar1 = puVar3[1];
    *(longlong *)(puVar2 + 0x10) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 0x18) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 0x20));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 0x20),4000);
    *(undefined8 *)(puVar2 + 0x48) = 0;
    *(undefined8 *)(puVar2 + 0x48) = *param_2;
    *param_2 = 0;
    *(undefined4 *)(puVar2 + 0x50) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(puVar2 + 0x54) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    *(undefined8 *)(puVar2 + 0x58) = 0;
    *(undefined8 *)(puVar2 + 0x60) = 0;
    *(undefined8 *)(puVar2 + 0x68) = 0;
    *(undefined8 *)(puVar2 + 0x70) = 0;
    *(undefined8 *)(puVar2 + 0x78) = 0;
    FUN_1415ff1a0(puVar2);
  }
  puVar3 = (undefined8 *)0x0;
  *param_1 = puVar2;
  puVar4 = (undefined8 *)operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR_FUN_144cb63d8;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    puVar4[2] = puVar2;
    puVar3 = puVar4;
  }
  param_1[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar2,puVar2);
  return param_1;
}



// FUNCTION 1415f1240 FTextFormat body=330 status=ok
// SIG undefined FTextFormat(void)

undefined8 * FTextFormat::FTextFormat(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  uint uStackX_c;
  
  puVar9 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)operator_new(0x90);
  if (puVar7 == (undefined8 *)0x0) {
    plVar11 = (longlong *)((ulonglong)uStackX_c << 0x20);
    puVar10 = puVar9;
    puVar7 = puVar9;
  }
  else {
    plVar11 = (longlong *)param_2[1];
    uVar5 = *param_2;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    uVar4 = *(undefined4 *)(param_2 + 2);
    *(undefined1 *)puVar7 = 0;
    puVar7[1] = uVar5;
    puVar7[2] = plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar7 + 3) = uVar4;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar7 + 4));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar7 + 4),4000);
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    FUN_1415ff1a0(puVar7);
    puVar10 = (undefined8 *)0x1;
  }
  *param_1 = puVar7;
  puVar8 = (undefined8 *)operator_new(0x18);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 1) = 1;
    *puVar8 = &PTR_FUN_144cb63d8;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
    puVar8[2] = puVar7;
    puVar9 = puVar8;
  }
  param_1[1] = puVar9;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar7,puVar7);
  if ((puVar10 != (undefined8 *)0x0) && (plVar11 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1415f1390 FTextFormat body=250 status=ok
// SIG undefined FTextFormat(void)

undefined8 * FTextFormat::FTextFormat(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_28;
  longlong *local_20;
  undefined4 local_18;
  
  bVar8 = false;
  lVar5 = operator_new(0x90);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    puVar6 = (undefined8 *)FUN_1404b03b0();
    local_28 = *puVar6;
    local_20 = (longlong *)puVar6[1];
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    local_18 = *(undefined4 *)(puVar6 + 2);
    uVar7 = FTextFormatData::FTextFormatData(lVar5,&local_28);
    bVar8 = true;
  }
  *param_1 = uVar7;
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_144cb63d8;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = uVar7;
  }
  param_1[1] = puVar6;
  SharedPointerInternals::EnableSharedFromThis(param_1,uVar7,uVar7);
  plVar4 = local_20;
  if ((bVar8) && (local_20 != (longlong *)0x0)) {
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
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1415f1490 FUN_1415f1490 body=3502 status=ok
// SIG undefined FUN_1415f1490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1415f1490(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  
  *(undefined4 *)(param_1 + 1) = param_3;
  *param_1 = &PTR_FUN_144cb5f98;
  *(undefined1 *)((longlong)param_1 + 0xc) = param_4;
  lVar9 = 10;
  puVar8 = param_1;
  do {
    puVar8 = puVar8 + 2;
    FTextFormat::FTextFormat(puVar8);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (*piVar11 < DAT_1468b5730) {
    _Init_thread_header(&DAT_1468b5730);
    if (DAT_1468b5730 == -1) {
      DAT_1468b5718 = 7;
      DAT_1468b5710 = L"default";
      DAT_1468b571c = FCrc::MemCrc32(L"default",0xe);
      DAT_1468b5720 = 0;
      _DAT_1468b5728 = 0;
      atexit((_func_5014 *)&LAB_143e78760);
      _Init_thread_footer(&DAT_1468b5730);
    }
  }
  if (*piVar11 < DAT_1468b5758) {
    _Init_thread_header(&DAT_1468b5758);
    if (DAT_1468b5758 == -1) {
      DAT_1468b5740 = 4;
      DAT_1468b5738 = L"xbox";
      DAT_1468b5744 = FCrc::MemCrc32(L"xbox",8);
      DAT_1468b5748 = 0;
      _DAT_1468b5750 = 0;
      atexit((_func_5014 *)&LAB_143e78c80);
      _Init_thread_footer(&DAT_1468b5758);
    }
  }
  if (*piVar11 < DAT_1468b5780) {
    _Init_thread_header(&DAT_1468b5780);
    if (DAT_1468b5780 == -1) {
      DAT_1468b5768 = 0xb;
      DAT_1468b5760 = L"playstation";
      DAT_1468b576c = FCrc::MemCrc32(L"playstation",0x16);
      DAT_1468b5770 = 0;
      _DAT_1468b5778 = 0;
      atexit((_func_5014 *)&LAB_143e78ae0);
      _Init_thread_footer(&DAT_1468b5780);
    }
  }
  if (*piVar11 < DAT_1468b57a8) {
    _Init_thread_header(&DAT_1468b57a8);
    if (DAT_1468b57a8 == -1) {
      DAT_1468b5790 = 4;
      DAT_1468b5788 = L"epic";
      DAT_1468b5794 = FCrc::MemCrc32(L"epic",8);
      DAT_1468b5798 = 0;
      _DAT_1468b57a0 = 0;
      atexit((_func_5014 *)&LAB_143e787f0);
      _Init_thread_footer(&DAT_1468b57a8);
    }
  }
  if (*piVar11 < DAT_1468b57d0) {
    _Init_thread_header(&DAT_1468b57d0);
    if (DAT_1468b57d0 == -1) {
      DAT_1468b57b8 = 5;
      DAT_1468b57b0 = L"steam";
      DAT_1468b57bc = FCrc::MemCrc32(L"steam",10);
      DAT_1468b57c0 = 0;
      _DAT_1468b57c8 = 0;
      atexit((_func_5014 *)&LAB_143e78b20);
      _Init_thread_footer(&DAT_1468b57d0);
    }
  }
  if (*piVar11 < DAT_1468b57f8) {
    _Init_thread_header(&DAT_1468b57f8);
    if (DAT_1468b57f8 == -1) {
      DAT_1468b57e0 = 6;
      DAT_1468b57d8 = L"stadia";
      DAT_1468b57e4 = FCrc::MemCrc32(L"stadia",0xc);
      DAT_1468b57e8 = 0;
      _DAT_1468b57f0 = 0;
      atexit((_func_5014 *)&LAB_143e78b00);
      _Init_thread_footer(&DAT_1468b57f8);
    }
  }
  if (*piVar11 < DAT_1468b5820) {
    _Init_thread_header(&DAT_1468b5820);
    if (DAT_1468b5820 == -1) {
      _DAT_1468b5808 = 7;
      _DAT_1468b5800 = L"desktop";
      _DAT_1468b580c = FCrc::MemCrc32(L"desktop",0xe);
      DAT_1468b5810 = 0;
      _DAT_1468b5818 = 0;
      atexit((_func_5014 *)&LAB_143e78780);
      _Init_thread_footer(&DAT_1468b5820);
    }
  }
  if (*piVar11 < DAT_1468b5848) {
    _Init_thread_header(&DAT_1468b5848);
    if (DAT_1468b5848 == -1) {
      _DAT_1468b5830 = 7;
      _DAT_1468b5828 = L"console";
      _DAT_1468b5834 = FCrc::MemCrc32(L"console",0xe);
      DAT_1468b5838 = 0;
      _DAT_1468b5840 = 0;
      atexit((_func_5014 *)&LAB_143e78740);
      _Init_thread_footer(&DAT_1468b5848);
    }
  }
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    plVar6 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar6 = param_2 + 7;
    }
    iVar7 = *(int *)((longlong)plVar6 +
                    ((longlong)(int)param_2[9] - 1U & (longlong)DAT_1468b571c) * 4);
    if (iVar7 != -1) {
      lVar9 = *param_2;
      do {
        lVar10 = (longlong)iVar7 * 0x38;
        iVar5 = *(int *)(lVar9 + 8 + lVar10);
        if (iVar5 == DAT_1468b5718) {
          iVar5 = wcsncmp(*(wchar_t **)(lVar9 + lVar10),DAT_1468b5710,(longlong)iVar5);
          if (iVar5 == 0) {
            if ((iVar7 != -1) && (lVar10 = *param_2 + lVar10, lVar10 != 0)) {
              local_98 = *(undefined8 *)(lVar10 + 0x20);
              local_90 = *(longlong **)(lVar10 + 0x28);
              if (local_90 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_90 + 8) = *(int *)((longlong)local_90 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1415f1605;
            }
            break;
          }
        }
        lVar9 = *param_2;
        iVar7 = *(int *)(lVar10 + 0x30 + lVar9);
      } while (iVar7 != -1);
    }
  }
  FTextFormat::FTextFormat(&local_98);
LAB_1415f1605:
  uVar3 = param_1[2];
  param_1[2] = local_98;
  plVar6 = (longlong *)param_1[3];
  param_1[3] = local_90;
  local_98 = uVar3;
  local_90 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    plVar6 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar6 = param_2 + 7;
    }
    iVar7 = *(int *)((longlong)plVar6 +
                    ((longlong)(int)param_2[9] - 1U & (longlong)DAT_1468b5744) * 4);
    if (iVar7 != -1) {
      lVar9 = *param_2;
      do {
        lVar10 = (longlong)iVar7 * 0x38;
        iVar5 = *(int *)(lVar9 + 8 + lVar10);
        if (iVar5 == DAT_1468b5740) {
          iVar5 = wcsncmp(*(wchar_t **)(lVar9 + lVar10),DAT_1468b5738,(longlong)iVar5);
          if (iVar5 == 0) {
            if ((iVar7 != -1) && (lVar10 = *param_2 + lVar10, lVar10 != 0)) {
              local_88 = *(undefined8 *)(lVar10 + 0x20);
              local_80 = *(longlong **)(lVar10 + 0x28);
              if (local_80 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_80 + 8) = *(int *)((longlong)local_80 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1415f16e5;
            }
            break;
          }
        }
        lVar9 = *param_2;
        iVar7 = *(int *)(lVar10 + 0x30 + lVar9);
      } while (iVar7 != -1);
    }
  }
  FTextFormat::FTextFormat(&local_88);
LAB_1415f16e5:
  uVar3 = param_1[4];
  param_1[4] = local_88;
  plVar6 = (longlong *)param_1[5];
  param_1[5] = local_80;
  local_88 = uVar3;
  local_80 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    plVar6 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar6 = param_2 + 7;
    }
    iVar7 = *(int *)((longlong)plVar6 +
                    ((longlong)(int)param_2[9] - 1U & (longlong)DAT_1468b576c) * 4);
    if (iVar7 != -1) {
      lVar9 = *param_2;
      do {
        lVar10 = (longlong)iVar7 * 0x38;
        iVar5 = *(int *)(lVar10 + 8 + lVar9);
        if (iVar5 == DAT_1468b5768) {
          iVar5 = wcsncmp(*(wchar_t **)(lVar10 + lVar9),DAT_1468b5760,(longlong)iVar5);
          if (iVar5 == 0) {
            if ((iVar7 != -1) && (lVar10 = *param_2 + lVar10, lVar10 != 0)) {
              local_78 = *(undefined8 *)(lVar10 + 0x20);
              local_70 = *(longlong **)(lVar10 + 0x28);
              if (local_70 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_70 + 8) = *(int *)((longlong)local_70 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1415f17b9;
            }
            break;
          }
        }
        lVar9 = *param_2;
        iVar7 = *(int *)(lVar10 + 0x30 + lVar9);
      } while (iVar7 != -1);
    }
  }
  FTextFormat::FTextFormat(&local_78);
LAB_1415f17b9:
  uVar3 = param_1[6];
  param_1[6] = local_78;
  plVar6 = (longlong *)param_1[7];
  param_1[7] = local_70;
  local_78 = uVar3;
  local_70 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    plVar6 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar6 = param_2 + 7;
    }
    iVar7 = *(int *)((longlong)plVar6 +
                    ((longlong)(int)param_2[9] - 1U & (longlong)DAT_1468b5794) * 4);
    if (iVar7 != -1) {
      lVar9 = *param_2;
      do {
        lVar10 = (longlong)iVar7 * 0x38;
        iVar5 = *(int *)(lVar10 + 8 + lVar9);
        if (iVar5 == DAT_1468b5790) {
          iVar5 = wcsncmp(*(wchar_t **)(lVar10 + lVar9),DAT_1468b5788,(longlong)iVar5);
          if (iVar5 == 0) {
            if ((iVar7 != -1) && (lVar10 = *param_2 + lVar10, lVar10 != 0)) {
              local_68 = *(undefined8 *)(lVar10 + 0x20);
              local_60 = *(longlong **)(lVar10 + 0x28);
              if (local_60 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_60 + 8) = *(int *)((longlong)local_60 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1415f1895;
            }
            break;
          }
        }
        lVar9 = *param_2;
        iVar7 = *(int *)(lVar10 + 0x30 + lVar9);
      } while (iVar7 != -1);
    }
  }
  FTextFormat::FTextFormat(&local_68);
LAB_1415f1895:
  uVar3 = param_1[0xc];
  param_1[0xc] = local_68;
  plVar6 = (longlong *)param_1[0xd];
  param_1[0xd] = local_60;
  local_68 = uVar3;
  local_60 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    plVar6 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar6 = param_2 + 7;
    }
    iVar7 = *(int *)((longlong)plVar6 +
                    ((longlong)(int)param_2[9] - 1U & (longlong)DAT_1468b57bc) * 4);
    if (iVar7 != -1) {
      lVar9 = *param_2;
      do {
        lVar10 = (longlong)iVar7 * 0x38;
        iVar5 = *(int *)(lVar10 + 8 + lVar9);
        if (iVar5 == DAT_1468b57b8) {
          iVar5 = wcsncmp(*(wchar_t **)(lVar10 + lVar9),DAT_1468b57b0,(longlong)iVar5);
          if (iVar5 == 0) {
            if ((iVar7 != -1) && (lVar10 = *param_2 + lVar10, lVar10 != 0)) {
              local_58 = *(undefined8 *)(lVar10 + 0x20);
              local_50 = *(longlong **)(lVar10 + 0x28);
              if (local_50 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_50 + 8) = *(int *)((longlong)local_50 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1415f1969;
            }
            break;
          }
        }
        lVar9 = *param_2;
        iVar7 = *(int *)(lVar10 + 0x30 + lVar9);
      } while (iVar7 != -1);
    }
  }
  FTextFormat::FTextFormat(&local_58);
LAB_1415f1969:
  uVar3 = param_1[0xe];
  param_1[0xe] = local_58;
  plVar6 = (longlong *)param_1[0xf];
  param_1[0xf] = local_50;
  local_58 = uVar3;
  local_50 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    plVar6 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar6 = param_2 + 7;
    }
    iVar7 = *(int *)((longlong)plVar6 +
                    ((longlong)(int)param_2[9] - 1U & (longlong)DAT_1468b57e4) * 4);
    if (iVar7 != -1) {
      lVar9 = *param_2;
      do {
        lVar10 = (longlong)iVar7 * 0x38;
        iVar5 = *(int *)(lVar10 + 8 + lVar9);
        if (iVar5 == DAT_1468b57e0) {
          iVar5 = wcsncmp(*(wchar_t **)(lVar10 + lVar9),DAT_1468b57d8,(longlong)iVar5);
          if (iVar5 == 0) {
            if ((iVar7 != -1) && (lVar10 = *param_2 + lVar10, lVar10 != 0)) {
              local_e8 = *(undefined8 *)(lVar10 + 0x20);
              local_e0 = *(longlong *)(lVar10 + 0x28);
              if (local_e0 != 0) {
                LOCK();
                *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1415f1a46;
            }
            break;
          }
        }
        lVar9 = *param_2;
        iVar7 = *(int *)(lVar10 + 0x30 + lVar9);
      } while (iVar7 != -1);
    }
  }
  FTextFormat::FTextFormat(&local_e8);
LAB_1415f1a46:
  uVar3 = param_1[0x10];
  param_1[0x10] = local_e8;
  uVar4 = param_1[0x11];
  param_1[0x11] = local_e0;
  local_e8 = uVar3;
  local_e0 = uVar4;
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_e8);
  FUN_141605340(param_2,local_res20,&DAT_1468b5800);
  if ((local_res20[0] == -1) || (lVar9 = (longlong)local_res20[0] * 0x38 + *param_2, lVar9 == 0)) {
    FTextFormat::FTextFormat(&local_d8);
  }
  else {
    local_d8 = *(undefined8 *)(lVar9 + 0x20);
    local_d0 = *(longlong *)(lVar9 + 0x28);
    if (local_d0 != 0) {
      LOCK();
      *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
      UNLOCK();
    }
  }
  uVar3 = param_1[8];
  param_1[8] = local_d8;
  uVar4 = param_1[9];
  param_1[9] = local_d0;
  local_d8 = uVar3;
  local_d0 = uVar4;
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_d8);
  FUN_141605340(param_2,local_res18,&DAT_1468b5828);
  if ((local_res18[0] == -1) || (lVar9 = (longlong)local_res18[0] * 0x38 + *param_2, lVar9 == 0)) {
    FTextFormat::FTextFormat(&local_c8);
  }
  else {
    local_c8 = *(undefined8 *)(lVar9 + 0x20);
    local_c0 = *(longlong *)(lVar9 + 0x28);
    if (local_c0 != 0) {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
    }
  }
  uVar3 = param_1[10];
  param_1[10] = local_c8;
  uVar4 = param_1[0xb];
  param_1[0xb] = local_c0;
  local_c8 = uVar3;
  local_c0 = uVar4;
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_c8);
  if (*piVar11 < DAT_1468b5870) {
    _Init_thread_header(&DAT_1468b5870);
    if (DAT_1468b5870 == -1) {
      _DAT_1468b5858 = 0xb;
      _DAT_1468b5850 = L"xboxseriesx";
      _DAT_1468b585c = FCrc::MemCrc32(L"xboxseriesx",0x16);
      DAT_1468b5860 = 0;
      _DAT_1468b5868 = 0;
      atexit((_func_5014 *)&LAB_143e78c60);
      _Init_thread_footer(&DAT_1468b5870);
    }
  }
  if (*piVar11 < DAT_1468b5898) {
    _Init_thread_header(&DAT_1468b5898);
    if (DAT_1468b5898 == -1) {
      _DAT_1468b5880 = 0xc;
      _DAT_1468b5878 = L"playstation5";
      _DAT_1468b5884 = FCrc::MemCrc32(L"playstation5",0x18);
      DAT_1468b5888 = 0;
      _DAT_1468b5890 = 0;
      atexit((_func_5014 *)&LAB_143e78ac0);
      _Init_thread_footer(&DAT_1468b5898);
    }
  }
  FUN_141605340(param_2,local_res8,&DAT_1468b5850);
  if ((local_res8[0] == -1) || (lVar9 = (longlong)local_res8[0] * 0x38 + *param_2, lVar9 == 0)) {
    FTextFormat::FTextFormat(&local_b8);
  }
  else {
    local_b8 = *(undefined8 *)(lVar9 + 0x20);
    local_b0 = *(longlong *)(lVar9 + 0x28);
    if (local_b0 != 0) {
      LOCK();
      *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
      UNLOCK();
    }
  }
  uVar3 = param_1[0x12];
  param_1[0x12] = local_b8;
  uVar4 = param_1[0x13];
  param_1[0x13] = local_b0;
  local_b8 = uVar3;
  local_b0 = uVar4;
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_b8);
  FUN_141605340(param_2,local_res10,&DAT_1468b5878);
  if ((local_res10[0] == -1) || (lVar9 = (longlong)local_res10[0] * 0x38 + *param_2, lVar9 == 0)) {
    FTextFormat::FTextFormat(&local_a8);
  }
  else {
    local_a8 = *(undefined8 *)(lVar9 + 0x20);
    local_a0 = *(longlong *)(lVar9 + 0x28);
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
  }
  uVar3 = param_1[0x14];
  param_1[0x14] = local_a8;
  uVar4 = param_1[0x15];
  param_1[0x15] = local_a0;
  local_a8 = uVar3;
  local_a0 = uVar4;
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_a8);
  return param_1;
}



// FUNCTION 1415f2240 FUN_1415f2240 body=2482 status=ok
// SIG undefined FUN_1415f2240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1415f2240(undefined8 *param_1,undefined1 param_2,longlong *param_3,undefined4 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  *(undefined1 *)(param_1 + 1) = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144cb5f38;
  puVar7 = param_1 + 3;
  *(undefined1 *)(param_1 + 2) = param_5;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
  lVar9 = 6;
  do {
    FTextFormat::FTextFormat(puVar7);
    puVar7 = puVar7 + 2;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar8 < DAT_1468b5640) {
    _Init_thread_header(&DAT_1468b5640);
    if (DAT_1468b5640 == -1) {
      DAT_1468b5628 = 4;
      DAT_1468b5620 = L"zero";
      DAT_1468b562c = FCrc::MemCrc32(L"zero",8);
      DAT_1468b5630 = 0;
      _DAT_1468b5638 = 0;
      atexit((_func_5014 *)&LAB_143e78ca0);
      _Init_thread_footer(&DAT_1468b5640);
    }
  }
  if (*piVar8 < DAT_1468b5668) {
    _Init_thread_header(&DAT_1468b5668);
    if (DAT_1468b5668 == -1) {
      DAT_1468b5650 = 3;
      DAT_1468b5648 = L"one";
      DAT_1468b5654 = FCrc::MemCrc32(&DAT_144cb2e50,6);
      DAT_1468b5658 = 0;
      _DAT_1468b5660 = 0;
      atexit((_func_5014 *)&LAB_143e78a80);
      _Init_thread_footer(&DAT_1468b5668);
    }
  }
  if (*piVar8 < DAT_1468b5690) {
    _Init_thread_header(&DAT_1468b5690);
    if (DAT_1468b5690 == -1) {
      DAT_1468b5678 = 3;
      DAT_1468b5670 = L"two";
      DAT_1468b567c = FCrc::MemCrc32(&DAT_144cb2e58,6);
      DAT_1468b5680 = 0;
      _DAT_1468b5688 = 0;
      atexit((_func_5014 *)&LAB_143e78c40);
      _Init_thread_footer(&DAT_1468b5690);
    }
  }
  if (*piVar8 < DAT_1468b56b8) {
    _Init_thread_header(&DAT_1468b56b8);
    if (DAT_1468b56b8 == -1) {
      DAT_1468b56a0 = 3;
      DAT_1468b5698 = L"few";
      DAT_1468b56a4 = FCrc::MemCrc32(&DAT_144cb2e60,6);
      DAT_1468b56a8 = 0;
      _DAT_1468b56b0 = 0;
      atexit((_func_5014 *)&LAB_143e78810);
      _Init_thread_footer(&DAT_1468b56b8);
    }
  }
  if (*piVar8 < DAT_1468b56e0) {
    _Init_thread_header(&DAT_1468b56e0);
    if (DAT_1468b56e0 == -1) {
      DAT_1468b56c8 = 4;
      DAT_1468b56c0 = L"many";
      DAT_1468b56cc = FCrc::MemCrc32(L"many",8);
      DAT_1468b56d0 = 0;
      _DAT_1468b56d8 = 0;
      atexit((_func_5014 *)&LAB_143e78990);
      _Init_thread_footer(&DAT_1468b56e0);
    }
  }
  if (*piVar8 < DAT_1468b5708) {
    _Init_thread_header(&DAT_1468b5708);
    if (DAT_1468b5708 == -1) {
      DAT_1468b56f0 = 5;
      DAT_1468b56e8 = L"other";
      DAT_1468b56f4 = FCrc::MemCrc32(L"other",10);
      DAT_1468b56f8 = 0;
      _DAT_1468b5700 = 0;
      atexit((_func_5014 *)&LAB_143e78aa0);
      _Init_thread_footer(&DAT_1468b5708);
    }
  }
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    plVar5 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar5 = param_3 + 7;
    }
    iVar6 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)param_3[9] - 1U & (longlong)DAT_1468b562c) * 4);
    if (iVar6 != -1) {
      lVar9 = *param_3;
      do {
        lVar10 = (longlong)iVar6 * 0x38;
        iVar4 = *(int *)(lVar9 + 8 + lVar10);
        if (iVar4 == DAT_1468b5628) {
          iVar4 = wcsncmp(*(wchar_t **)(lVar9 + lVar10),DAT_1468b5620,(longlong)iVar4);
          if (iVar4 == 0) {
            if ((iVar6 != -1) && (lVar10 = *param_3 + lVar10, lVar10 != 0)) {
              local_68 = *(undefined8 *)(lVar10 + 0x20);
              local_60 = *(longlong **)(lVar10 + 0x28);
              if (local_60 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_60 + 8) = *(int *)((longlong)local_60 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1415f2395;
            }
            break;
          }
        }
        lVar9 = *param_3;
        iVar6 = *(int *)(lVar10 + 0x30 + lVar9);
      } while (iVar6 != -1);
    }
  }
  FTextFormat::FTextFormat(&local_68);
LAB_1415f2395:
  uVar2 = param_1[3];
  param_1[3] = local_68;
  plVar5 = (longlong *)param_1[4];
  param_1[4] = local_60;
  local_68 = uVar2;
  local_60 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    plVar5 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar5 = param_3 + 7;
    }
    iVar6 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)param_3[9] - 1U & (longlong)DAT_1468b5654) * 4);
    if (iVar6 != -1) {
      lVar9 = *param_3;
      do {
        lVar10 = (longlong)iVar6 * 0x38;
        iVar4 = *(int *)(lVar9 + 8 + lVar10);
        if (iVar4 == DAT_1468b5650) {
          iVar4 = wcsncmp(*(wchar_t **)(lVar9 + lVar10),DAT_1468b5648,(longlong)iVar4);
          if (iVar4 == 0) {
            if ((iVar6 != -1) && (lVar10 = *param_3 + lVar10, lVar10 != 0)) {
              local_58 = *(undefined8 *)(lVar10 + 0x20);
              local_50 = *(longlong **)(lVar10 + 0x28);
              if (local_50 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_50 + 8) = *(int *)((longlong)local_50 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1415f2475;
            }
            break;
          }
        }
        lVar9 = *param_3;
        iVar6 = *(int *)(lVar10 + 0x30 + lVar9);
      } while (iVar6 != -1);
    }
  }
  FTextFormat::FTextFormat(&local_58);
LAB_1415f2475:
  uVar2 = param_1[5];
  param_1[5] = local_58;
  plVar5 = (longlong *)param_1[6];
  param_1[6] = local_50;
  local_58 = uVar2;
  local_50 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    plVar5 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar5 = param_3 + 7;
    }
    iVar6 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)param_3[9] - 1U & (longlong)DAT_1468b567c) * 4);
    if (iVar6 != -1) {
      lVar9 = *param_3;
      do {
        lVar10 = (longlong)iVar6 * 0x38;
        iVar4 = *(int *)(lVar10 + 8 + lVar9);
        if (iVar4 == DAT_1468b5678) {
          iVar4 = wcsncmp(*(wchar_t **)(lVar10 + lVar9),DAT_1468b5670,(longlong)iVar4);
          if (iVar4 == 0) {
            if ((iVar6 != -1) && (lVar10 = *param_3 + lVar10, lVar10 != 0)) {
              local_48 = *(undefined8 *)(lVar10 + 0x20);
              local_40 = *(longlong **)(lVar10 + 0x28);
              if (local_40 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_40 + 8) = *(int *)((longlong)local_40 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1415f2549;
            }
            break;
          }
        }
        lVar9 = *param_3;
        iVar6 = *(int *)(lVar10 + 0x30 + lVar9);
      } while (iVar6 != -1);
    }
  }
  FTextFormat::FTextFormat(&local_48);
LAB_1415f2549:
  uVar2 = param_1[7];
  param_1[7] = local_48;
  plVar5 = (longlong *)param_1[8];
  param_1[8] = local_40;
  local_48 = uVar2;
  local_40 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    plVar5 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar5 = param_3 + 7;
    }
    iVar6 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)param_3[9] - 1U & (longlong)DAT_1468b56a4) * 4);
    if (iVar6 != -1) {
      lVar9 = *param_3;
      do {
        lVar10 = (longlong)iVar6 * 0x38;
        iVar4 = *(int *)(lVar10 + 8 + lVar9);
        if (iVar4 == DAT_1468b56a0) {
          iVar4 = wcsncmp(*(wchar_t **)(lVar10 + lVar9),DAT_1468b5698,(longlong)iVar4);
          if (iVar4 == 0) {
            if ((iVar6 != -1) && (lVar10 = *param_3 + lVar10, lVar10 != 0)) {
              local_38 = *(undefined8 *)(lVar10 + 0x20);
              local_30 = *(longlong **)(lVar10 + 0x28);
              if (local_30 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_30 + 8) = *(int *)((longlong)local_30 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1415f2625;
            }
            break;
          }
        }
        lVar9 = *param_3;
        iVar6 = *(int *)(lVar10 + 0x30 + lVar9);
      } while (iVar6 != -1);
    }
  }
  FTextFormat::FTextFormat(&local_38);
LAB_1415f2625:
  uVar2 = param_1[9];
  param_1[9] = local_38;
  plVar5 = (longlong *)param_1[10];
  param_1[10] = local_30;
  local_38 = uVar2;
  local_30 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    plVar5 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar5 = param_3 + 7;
    }
    iVar6 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)param_3[9] - 1U & (longlong)DAT_1468b56cc) * 4);
    if (iVar6 != -1) {
      lVar9 = *param_3;
      do {
        lVar10 = (longlong)iVar6 * 0x38;
        iVar4 = *(int *)(lVar10 + 8 + lVar9);
        if (iVar4 == DAT_1468b56c8) {
          iVar4 = wcsncmp(*(wchar_t **)(lVar10 + lVar9),DAT_1468b56c0,(longlong)iVar4);
          if (iVar4 == 0) {
            if ((iVar6 != -1) && (lVar10 = *param_3 + lVar10, lVar10 != 0)) {
              local_28 = *(undefined8 *)(lVar10 + 0x20);
              local_20 = *(longlong **)(lVar10 + 0x28);
              if (local_20 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_20 + 8) = *(int *)((longlong)local_20 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1415f26f9;
            }
            break;
          }
        }
        lVar9 = *param_3;
        iVar6 = *(int *)(lVar10 + 0x30 + lVar9);
      } while (iVar6 != -1);
    }
  }
  FTextFormat::FTextFormat(&local_28);
LAB_1415f26f9:
  uVar2 = param_1[0xb];
  param_1[0xb] = local_28;
  plVar5 = (longlong *)param_1[0xc];
  param_1[0xc] = local_20;
  local_28 = uVar2;
  local_20 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    plVar5 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar5 = param_3 + 7;
    }
    iVar6 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)param_3[9] - 1U & (longlong)DAT_1468b56f4) * 4);
    if (iVar6 != -1) {
      lVar9 = *param_3;
      do {
        lVar10 = (longlong)iVar6 * 0x38;
        iVar4 = *(int *)(lVar10 + 8 + lVar9);
        if (iVar4 == DAT_1468b56f0) {
          iVar4 = wcsncmp(*(wchar_t **)(lVar10 + lVar9),DAT_1468b56e8,(longlong)iVar4);
          if (iVar4 == 0) {
            if ((iVar6 != -1) && (lVar10 = *param_3 + lVar10, lVar10 != 0)) {
              local_78 = *(undefined8 *)(lVar10 + 0x20);
              local_70 = *(longlong *)(lVar10 + 0x28);
              if (local_70 != 0) {
                LOCK();
                *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1415f27c7;
            }
            break;
          }
        }
        lVar9 = *param_3;
        iVar6 = *(int *)(lVar10 + 0x30 + lVar9);
      } while (iVar6 != -1);
    }
  }
  FTextFormat::FTextFormat(&local_78);
LAB_1415f27c7:
  uVar2 = param_1[0xd];
  param_1[0xd] = local_78;
  uVar3 = param_1[0xe];
  param_1[0xe] = local_70;
  local_78 = uVar2;
  local_70 = uVar3;
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_78);
  return param_1;
}



// FUNCTION 1415f2c00 FTextFormatData body=123 status=ok
// SIG undefined FTextFormatData(void)

undefined1 * FTextFormatData::FTextFormatData(undefined1 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar1 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 2);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x20),4000);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_1415ff1a0(param_1);
  return param_1;
}



// FUNCTION 1415f2c80 FTextFormatString body=123 status=ok
// SIG undefined FTextFormatString(void)

undefined8 * FTextFormatString::FTextFormatString(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  FString::FString(param_1 + 2,param_2 + 2);
  puVar1 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 3) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_2[2];
  }
  if ((undefined2 *)*param_2 == puVar2) {
    if (*(int *)(param_1 + 3) != 0) {
      puVar1 = (undefined2 *)param_1[2];
    }
    *param_1 = puVar1;
  }
  return param_1;
}



// FUNCTION 1415f2d00 FUN_1415f2d00 body=1549 status=ok
// SIG undefined FUN_1415f2d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1415f2d00(undefined1 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  wchar_t **local_90;
  code **local_88;
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x68),4000);
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f130;
  }
  local_78[0] = FUN_1415fe980;
  FTokenDefinitions::DefineToken(param_1,local_78);
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
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f130;
  }
  local_78[0] = FUN_1415fe9d0;
  FTokenDefinitions::DefineToken(param_1,local_78);
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
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f130;
  }
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_2297a01fe74ed90963b5f76ff99d6a75>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
                ::Call;
  FTokenDefinitions::DefineToken(param_1,local_78);
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
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f130;
  }
  local_78[0] = FUN_1415fe9b0;
  FTokenDefinitions::DefineToken(param_1,local_78);
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
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f130;
  }
  local_b0 = 6;
  local_78[0] = FUN_1415fe8f0;
  local_b8 = L"plural";
  local_ac = FCrc::MemCrc32(L"plural",0xc);
  local_90 = &local_b8;
  local_a8 = 0;
  local_88 = local_78;
  local_a0 = 0;
  FUN_1415eb780(param_1 + 0x18,local_98,&local_90,0);
  if (local_a8 != 0) {
    FMemory::Free();
  }
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
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f130;
  }
  local_b0 = 7;
  local_78[0] = FUN_1415fea30;
  local_b8 = L"ordinal";
  local_ac = FCrc::MemCrc32(L"ordinal",0xe);
  local_90 = &local_b8;
  local_a8 = 0;
  local_88 = local_78;
  local_a0 = 0;
  FUN_1415eb780(param_1 + 0x18,local_98,&local_90,0);
  if (local_a8 != 0) {
    FMemory::Free();
  }
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
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f130;
  }
  local_b0 = 6;
  local_78[0] = FUN_1415fea10;
  local_b8 = L"gender";
  local_ac = FCrc::MemCrc32(L"gender",0xc);
  local_90 = &local_b8;
  local_a8 = 0;
  local_88 = local_78;
  local_a0 = 0;
  FUN_1415eb780(param_1 + 0x18,local_98,&local_90,0);
  if (local_a8 != 0) {
    FMemory::Free();
  }
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
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f130;
  }
  local_b0 = 3;
  local_78[0] = FUN_1415fe9f0;
  local_b8 = L"hpp";
  local_ac = FCrc::MemCrc32(&DAT_144cb1838,6);
  local_90 = &local_b8;
  local_a8 = 0;
  local_88 = local_78;
  local_a0 = 0;
  FUN_1415eb780(param_1 + 0x18,local_98,&local_90,0);
  if (local_a8 != 0) {
    FMemory::Free();
  }
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
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f130;
  }
  local_b0 = 8;
  local_78[0] = FUN_1415fe960;
  local_b8 = L"platform";
  local_ac = FCrc::MemCrc32(L"platform",0x10);
  local_90 = &local_b8;
  local_a8 = 0;
  local_88 = local_78;
  local_a0 = 0;
  FUN_1415eb780(param_1 + 0x18,local_98,&local_90,0);
  if (local_a8 != 0) {
    FMemory::Free();
  }
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
  return param_1;
}



// FUNCTION 1415f3310 FTextHistory_AsCurrency body=355 status=ok
// SIG undefined FTextHistory_AsCurrency(void)

undefined8 *
FTextHistory_AsCurrency::FTextHistory_AsCurrency
          (undefined8 *param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
          undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined1 local_10;
  
  local_10 = 0;
  local_48 = *param_5;
  local_40 = param_5[1];
  param_5[1] = 0;
  *param_5 = 0;
  local_30 = *(undefined8 *)(param_2 + 2);
  local_38[0] = *param_2;
  if (*(char *)(param_2 + 10) != '\0') {
    local_28 = *(undefined8 *)(param_2 + 4);
    local_20 = *(longlong *)(param_2 + 6);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    local_18 = param_2[8];
    local_10 = 1;
  }
  FUN_1415f3800(local_30,local_38,param_4,&local_48);
  *param_1 = &PTR__scalar_deleting_destructor__144cb5698;
  param_1[0xe] = 0;
  param_1[0xe] = *param_3;
  *param_3 = 0;
  *(int *)(param_1 + 0xf) = (int)param_3[1];
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  if (*(char *)(param_2 + 10) != '\0') {
    *(undefined1 *)(param_2 + 10) = 0;
    plVar4 = *(longlong **)(param_2 + 6);
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
  if (*param_3 != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_5[1];
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
  return param_1;
}



// FUNCTION 1415f3480 FTextHistory_AsNumber body=290 status=ok
// SIG undefined FTextHistory_AsNumber(void)

undefined8 *
FTextHistory_AsNumber::FTextHistory_AsNumber
          (undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined1 local_10;
  
  local_48 = *param_4;
  local_40 = param_4[1];
  param_4[1] = 0;
  *param_4 = 0;
  local_30 = *(undefined8 *)(param_2 + 2);
  local_38[0] = *param_2;
  local_10 = 0;
  if (*(char *)(param_2 + 10) != '\0') {
    local_28 = *(undefined8 *)(param_2 + 4);
    local_20 = *(longlong *)(param_2 + 6);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    local_18 = param_2[8];
    local_10 = 1;
  }
  FUN_1415f3800(local_30,local_38,param_3,&local_48);
  *param_1 = &PTR__scalar_deleting_destructor__144cb55e8;
  if (*(char *)(param_2 + 10) != '\0') {
    *(undefined1 *)(param_2 + 10) = 0;
    plVar4 = *(longlong **)(param_2 + 6);
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
  plVar4 = (longlong *)param_4[1];
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
  return param_1;
}



// FUNCTION 1415f35b0 FTextHistory_AsPercent body=290 status=ok
// SIG undefined FTextHistory_AsPercent(void)

undefined8 *
FTextHistory_AsPercent::FTextHistory_AsPercent
          (undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined1 local_10;
  
  local_48 = *param_4;
  local_40 = param_4[1];
  param_4[1] = 0;
  *param_4 = 0;
  local_30 = *(undefined8 *)(param_2 + 2);
  local_38[0] = *param_2;
  local_10 = 0;
  if (*(char *)(param_2 + 10) != '\0') {
    local_28 = *(undefined8 *)(param_2 + 4);
    local_20 = *(longlong *)(param_2 + 6);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    local_18 = param_2[8];
    local_10 = 1;
  }
  FUN_1415f3800(local_30,local_38,param_3,&local_48);
  *param_1 = &PTR__scalar_deleting_destructor__144cb5640;
  if (*(char *)(param_2 + 10) != '\0') {
    *(undefined1 *)(param_2 + 10) = 0;
    plVar4 = *(longlong **)(param_2 + 6);
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
  plVar4 = (longlong *)param_4[1];
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
  return param_1;
}



// FUNCTION 1415f36e0 FUN_1415f36e0 body=107 status=ok
// SIG undefined FUN_1415f36e0(void)

undefined8 * FUN_1415f36e0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_144cb53d8;
  lVar2 = DAT_1468b5998;
  if (DAT_1468b5998 == 0) {
    lVar1 = operator_new(0x110);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_1415f3b10(lVar1);
    }
  }
  DAT_1468b5998 = lVar2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  *param_1 = &PTR_FUN_144cb5430;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1415f3750 FTextHistory_FormatNumber body=171 status=ok
// SIG undefined FTextHistory_FormatNumber(void)

undefined8 *
FTextHistory_FormatNumber::FTextHistory_FormatNumber(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_144cb53d8;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *param_1 = &PTR__scalar_deleting_destructor__144cb5590;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_2 + 0x38) != '\0') {
    param_1[4] = *(undefined8 *)(param_2 + 0x20);
    lVar1 = *(longlong *)(param_2 + 0x28);
    param_1[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 7) = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (*(char *)(param_2 + 0x58) != '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
    param_1[9] = uVar2;
    param_1[10] = *(undefined8 *)(param_2 + 0x50);
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  return param_1;
}



// FUNCTION 1415f3800 FUN_1415f3800 body=407 status=ok
// SIG undefined FUN_1415f3800(void)

undefined8 *
FUN_1415f3800(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_1 = &PTR_FUN_144cb53d8;
  lVar9 = DAT_1468b5998;
  if (DAT_1468b5998 == 0) {
    lVar8 = operator_new(0x110);
    lVar9 = 0;
    if (lVar8 != 0) {
      lVar9 = FUN_1415f3b10(lVar8);
    }
  }
  DAT_1468b5998 = lVar9;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  *param_1 = &PTR__scalar_deleting_destructor__144cb5590;
  *(undefined4 *)(param_1 + 2) = *param_2;
  param_1[3] = *(undefined8 *)(param_2 + 2);
  param_1[3] = *(undefined8 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 3) = param_2[2];
  param_1[3] = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_2 + 10) != '\0') {
    param_1[4] = *(undefined8 *)(param_2 + 4);
    lVar9 = *(longlong *)(param_2 + 6);
    param_1[5] = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 6) = param_2[8];
    *(undefined1 *)(param_1 + 7) = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = *param_4;
  param_1[0xd] = param_4[1];
  param_4[1] = 0;
  *param_4 = 0;
  if ((param_3 != (undefined8 *)0x0) && (param_3 != param_1 + 8)) {
    if (*(char *)(param_1 + 0xb) != '\0') {
      *(undefined1 *)(param_1 + 0xb) = 0;
    }
    uVar5 = *(undefined4 *)((longlong)param_3 + 4);
    uVar6 = *(undefined4 *)(param_3 + 1);
    uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)param_3;
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
    *(undefined4 *)(param_1 + 9) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
    param_1[10] = param_3[2];
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  if (*(char *)(param_2 + 10) != '\0') {
    *(undefined1 *)(param_2 + 10) = 0;
    plVar4 = *(longlong **)(param_2 + 6);
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
  plVar4 = (longlong *)param_4[1];
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
  return param_1;
}



// FUNCTION 1415f39a0 FUN_1415f39a0 body=157 status=ok
// SIG undefined FUN_1415f39a0(void)

undefined8 * FUN_1415f39a0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_144cb53d8;
  lVar2 = DAT_1468b5998;
  if (DAT_1468b5998 == 0) {
    lVar1 = operator_new(0x110);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_1415f3b10(lVar1);
    }
  }
  DAT_1468b5998 = lVar2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  *param_1 = &PTR__scalar_deleting_destructor__144cb5590;
  *(undefined4 *)(param_1 + 2) = 4;
  puVar3 = (undefined8 *)FUN_1404b03b0();
  param_1[4] = *puVar3;
  lVar2 = puVar3[1];
  param_1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar3 + 2);
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 1415f3a40 FUN_1415f3a40 body=206 status=ok
// SIG undefined FUN_1415f3a40(void)

undefined8 * FUN_1415f3a40(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_144cb53d8;
  lVar6 = DAT_1468b5998;
  if (DAT_1468b5998 == 0) {
    lVar5 = operator_new(0x110);
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = FUN_1415f3b10(lVar5);
    }
  }
  DAT_1468b5998 = lVar6;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  *param_1 = &PTR__scalar_deleting_destructor__144cb57f8;
  param_1[2] = *param_2;
  lVar6 = param_2[1];
  param_1[3] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 5) = param_3;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 1415f3b10 FUN_1415f3b10 body=841 status=ok
// SIG undefined FUN_1415f3b10(void)

undefined1 * FUN_1415f3b10(undefined1 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  undefined1 *local_res20;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  *param_1 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 8),4000);
  plVar7 = (longlong *)0x0;
  plVar2 = (longlong *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 2;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  local_50 = (longlong *)
             SharedPointerInternals::NewIntrusiveReferenceController<FPolyglotTextSource>();
  local_58 = local_50 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
  plVar6 = local_50;
  *(longlong **)(param_1 + 0x100) = local_58;
  *(longlong **)(param_1 + 0x108) = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
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
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *plVar6 = (longlong)&PTR_StartProfileThreadUsage_144051100;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    plVar6[2] = (longlong)&PTR__scalar_deleting_destructor__144cb5388;
    plVar7 = plVar6;
  }
  local_48 = plVar7 + 2;
  local_40 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
  plVar7 = local_40;
  plVar6 = local_48;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0xf8);
  *(int *)(param_1 + 0xf8) = iVar3 + 1;
  if (*(int *)(param_1 + 0xfc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar3);
  }
  local_res8[0] = 0;
  plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *plVar2);
  *plVar8 = (longlong)plVar6;
  plVar8[1] = (longlong)plVar7;
  local_res18 = local_res8;
  FUN_1415efa00(*plVar2,*(undefined4 *)(param_1 + 0xf8),&local_res18);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
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
  plVar6 = *(longlong **)(param_1 + 0x108);
  uVar4 = *(undefined8 *)(param_1 + 0x100);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
  }
  iVar3 = *(int *)(param_1 + 0xf8);
  *(int *)(param_1 + 0xf8) = iVar3 + 1;
  if (*(int *)(param_1 + 0xfc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar3);
  }
  local_res10[0] = 0;
  puVar9 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar2);
  *puVar9 = uVar4;
  puVar9[1] = plVar6;
  local_res20 = local_res10;
  FUN_1415efa00(*plVar2,*(undefined4 *)(param_1 + 0xf8),&local_res20);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
    LOCK();
    plVar2 = plVar6 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_1;
}



// FUNCTION 1415f3e60 FTextLocalizationResourceId body=207 status=ok
// SIG undefined FTextLocalizationResourceId(void)

longlong *
FTextLocalizationResourceId::FTextLocalizationResourceId(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)operator_new(0x20);
  if (local_10 == (longlong *)0x0) {
    local_10 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(local_10 + 1) = 1;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    *local_10 = (longlong)&PTR_FUN_144cb51c0;
    FString::FString(local_10 + 2,param_2);
  }
  local_18 = local_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar5 = local_10;
  *param_1 = (longlong)local_18;
  param_1[1] = (longlong)local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 1415f3f30 FTextSnapshot body=85 status=ok
// SIG undefined FTextSnapshot(void)

undefined8 * FTextSnapshot::FTextSnapshot(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined2 uVar2;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = (**(code **)(*(longlong *)*param_2 + 0x40))();
  *(undefined2 *)(param_1 + 2) = uVar2;
  uVar2 = (**(code **)(*(longlong *)*param_2 + 0x48))();
  *(undefined2 *)((longlong)param_1 + 0x12) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 1415f3f90 ~TArray<FFormatArgumentData,FDefaultAllocator> body=159 status=ok
// SIG undefined ~TArray<FFormatArgumentData,FDefaultAllocator>(void)

void TArray<FFormatArgumentData,FDefaultAllocator>::~TArray<FFormatArgumentData,FDefaultAllocator>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  iVar6 = *(int *)(param_1 + 1);
  if (iVar6 != 0) {
    do {
      plVar4 = (longlong *)plVar7[4];
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
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = (longlong *)*param_1;
  }
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar7);
  return;
}



// FUNCTION 1415f4030 ~TIndirectTextData<FTextHistory_StringTableEntry> body=110 status=ok
// SIG undefined ~TIndirectTextData<FTextHistory_StringTableEntry>(void)

void TIndirectTextData<FTextHistory_StringTableEntry>::
     ~TIndirectTextData<FTextHistory_StringTableEntry>(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb5998;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  plVar3 = (longlong *)param_1[8];
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
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_144cb53d8;
  *param_1 = &PTR_FUN_144cb0188;
  return;
}



// FUNCTION 1415f40a0 ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_1415f4161;
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
LAB_1415f4161:
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
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                ((longlong)iStack_1c * 0x38 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1415f4230 ~TSparseArray<TSetElement<TTuple<FLocKey,FPolyglotTextData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=451 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FLocKey,FPolyglotTextData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FLocKey,FPolyglotTextData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FLocKey,FPolyglotTextData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
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
  local_58 = 0;
  uStack_54 = 1;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar4) goto LAB_1415f42f1;
      uVar3 = puVar8[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    if (iVar2 < iStack_44) {
LAB_1415f42f1:
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
      plVar6 = (longlong *)((longlong)iStack_1c * 0xd0 + *param_1);
      FPolyglotTextData::~FPolyglotTextData(plVar6 + 3);
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeTo(param_1,0);
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
    return;
  }
  return;
}



// FUNCTION 1415f4400 ~TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=388 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_1415f44c1;
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
LAB_1415f44c1:
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
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>
      ::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>
                ((longlong)iStack_1c * 0x68 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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



// FUNCTION 1415f4590 ~TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormat>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=388 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormat>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormat>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormat>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_1415f4651;
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
LAB_1415f4651:
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
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextFormatString,FTextFormat>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextFormatString,FTextFormat>
                ((longlong)iStack_1c * 0x38 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1415f4720 ~TTextData<FTextHistory_ArgumentDataFormat> body=139 status=ok
// SIG undefined ~TTextData<FTextHistory_ArgumentDataFormat>(void)

void TTextData<FTextHistory_ArgumentDataFormat>::~TTextData<FTextHistory_ArgumentDataFormat>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb5d08;
  FTextHistory_ArgumentDataFormat::~FTextHistory_ArgumentDataFormat(param_1 + 3);
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
    *param_1 = &PTR_FUN_144cb0188;
    return;
  }
  *param_1 = &PTR_FUN_144cb0188;
  return;
}



// FUNCTION 1415f47b0 ~TTextData<FTextHistory_AsCurrency> body=156 status=ok
// SIG undefined ~TTextData<FTextHistory_AsCurrency>(void)

void TTextData<FTextHistory_AsCurrency>::~TTextData<FTextHistory_AsCurrency>(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb5a88;
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  FTextHistory_FormatNumber::~FTextHistory_FormatNumber(param_1 + 3);
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
    *param_1 = &PTR_FUN_144cb0188;
    return;
  }
  *param_1 = &PTR_FUN_144cb0188;
  return;
}



// FUNCTION 1415f4850 ~TTextData<FTextHistory_AsDate> body=139 status=ok
// SIG undefined ~TTextData<FTextHistory_AsDate>(void)

void TTextData<FTextHistory_AsDate>::~TTextData<FTextHistory_AsDate>(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb5b28;
  FTextHistory_AsDate::~FTextHistory_AsDate(param_1 + 3);
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
    *param_1 = &PTR_FUN_144cb0188;
    return;
  }
  *param_1 = &PTR_FUN_144cb0188;
  return;
}



// FUNCTION 1415f48e0 ~TTextData<FTextHistory_AsNumber> body=139 status=ok
// SIG undefined ~TTextData<FTextHistory_AsNumber>(void)

void TTextData<FTextHistory_AsNumber>::~TTextData<FTextHistory_AsNumber>(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb5da8;
  FTextHistory_FormatNumber::~FTextHistory_FormatNumber(param_1 + 3);
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
    *param_1 = &PTR_FUN_144cb0188;
    return;
  }
  *param_1 = &PTR_FUN_144cb0188;
  return;
}



// FUNCTION 1415f4970 ~TTextData<FTextHistory_Base> body=155 status=ok
// SIG undefined ~TTextData<FTextHistory_Base>(void)

void TTextData<FTextHistory_Base>::~TTextData<FTextHistory_Base>(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb58a8;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  param_1[3] = &PTR_FUN_144cb53d8;
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
    *param_1 = &PTR_FUN_144cb0188;
    return;
  }
  *param_1 = &PTR_FUN_144cb0188;
  return;
}



// FUNCTION 1415f4a10 ~TTextData<FTextHistory_NamedFormat> body=139 status=ok
// SIG undefined ~TTextData<FTextHistory_NamedFormat>(void)

void TTextData<FTextHistory_NamedFormat>::~TTextData<FTextHistory_NamedFormat>(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb5bc8;
  FTextHistory_NamedFormat::~FTextHistory_NamedFormat(param_1 + 3);
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
    *param_1 = &PTR_FUN_144cb0188;
    return;
  }
  *param_1 = &PTR_FUN_144cb0188;
  return;
}



// FUNCTION 1415f4aa0 ~TTextData<FTextHistory_OrderedFormat> body=139 status=ok
// SIG undefined ~TTextData<FTextHistory_OrderedFormat>(void)

void TTextData<FTextHistory_OrderedFormat>::~TTextData<FTextHistory_OrderedFormat>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb5c68;
  FTextHistory_OrderedFormat::~FTextHistory_OrderedFormat(param_1 + 3);
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
    *param_1 = &PTR_FUN_144cb0188;
    return;
  }
  *param_1 = &PTR_FUN_144cb0188;
  return;
}



// FUNCTION 1415f4b30 ~TTextData<FTextHistory_Transform> body=139 status=ok
// SIG undefined ~TTextData<FTextHistory_Transform>(void)

void TTextData<FTextHistory_Transform>::~TTextData<FTextHistory_Transform>(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb59e8;
  FUN_1415f5860(param_1 + 3);
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
    *param_1 = &PTR_FUN_144cb0188;
    return;
  }
  *param_1 = &PTR_FUN_144cb0188;
  return;
}



// FUNCTION 1415f4bc0 ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextCache::FCacheKey,FText> body=129 status=ok
// SIG undefined ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextCache::FCacheKey,FText>(void)

void UE4Tuple_Private::TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextCache::FCacheKey,FText>
     ::~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextCache::FCacheKey,FText>
               (longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x40);
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1415f4c50 ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_> body=97 status=ok
// SIG undefined ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>(void)

void UE4Tuple_Private::
     TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
     ::
     ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 2,0);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415f4cc0 ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_> body=97 status=ok
// SIG undefined ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>(void)

void UE4Tuple_Private::
     TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>
     ::
     ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 2,0);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415f4d30 ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextFormatString,FTextFormat> body=115 status=ok
// SIG undefined ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextFormatString,FTextFormat>(void)

void UE4Tuple_Private::
     TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextFormatString,FTextFormat>::
     ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextFormatString,FTextFormat>
               (longlong param_1)

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
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1415f4db0 ~TValueOrError<TArray<FExpressionToken,FDefaultAllocator>,FExpressionError> body=154 status=ok
// SIG undefined ~TValueOrError<TArray<FExpressionToken,FDefaultAllocator>,FExpressionError>(void)

void TValueOrError<TArray<FExpressionToken,FDefaultAllocator>,FExpressionError>::
     ~TValueOrError<TArray<FExpressionToken,FDefaultAllocator>,FExpressionError>(longlong param_1)

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
        lVar4 = lVar4 + 0x58;
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



// FUNCTION 1415f4e50 FUN_1415f4e50 body=564 status=ok
// SIG undefined FUN_1415f4e50(void)

void FUN_1415f4e50(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FICUInternationalization::FICUCachedFileData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x270,0);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x248));
  puVar1 = *(undefined8 **)(param_1 + 0x240);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedRef<FCulture,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1c8,0);
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xd0,0);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x78,0);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (iVar3 != 0) {
    do {
      if (plVar2[6] != 0) {
        FMemory::Free();
      }
      if (plVar2[4] != 0) {
        FMemory::Free();
      }
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = *(longlong **)(param_1 + 0x18);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415f5090 ~FInternationalization body=357 status=ok
// SIG undefined ~FInternationalization(void)

void FInternationalization::~FInternationalization(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x80);
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
  plVar4 = *(longlong **)(param_1 + 0x70);
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
  plVar4 = *(longlong **)(param_1 + 0x60);
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
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_1 + 0x48);
  plVar4 = *(longlong **)(param_1 + 0x40);
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
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    FUN_1415f4e50(lVar5);
    FMemory::operator_delete(lVar5,0x2c0);
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 8);
  return;
}



// FUNCTION 1415f5200 ~FPolyglotTextData body=226 status=ok
// SIG undefined ~FPolyglotTextData(void)

void FPolyglotTextData::~FPolyglotTextData(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xa0);
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
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x48,0);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1415f52f0 ~FPolyglotTextSource body=120 status=ok
// SIG undefined ~FPolyglotTextSource(void)

void FPolyglotTextSource::~FPolyglotTextSource(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FLocKey,FPolyglotTextData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FLocKey,FPolyglotTextData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 8,0);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415f5370 ~FStringTable body=321 status=ok
// SIG undefined ~FStringTable(void)

void FStringTable::~FStringTable(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  ClearSourceStrings(param_1,0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xf8,0);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedPtr<FString,1>,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x80,0);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FStringTableEntry,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x30,0);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1415f54c0 ~FStringTableEntry body=138 status=ok
// SIG undefined ~FStringTableEntry(void)

void FStringTableEntry::~FStringTableEntry(longlong param_1)

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
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
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
  return;
}



// FUNCTION 1415f5550 ~FTextHistory_ArgumentDataFormat body=129 status=ok
// SIG undefined ~FTextHistory_ArgumentDataFormat(void)

void FTextHistory_ArgumentDataFormat::~FTextHistory_ArgumentDataFormat(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<FFormatArgumentData,FDefaultAllocator>::~TArray<FFormatArgumentData,FDefaultAllocator>
            (param_1 + 4);
  plVar4 = (longlong *)param_1[3];
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
    *param_1 = &PTR_FUN_144cb53d8;
    return;
  }
  *param_1 = &PTR_FUN_144cb53d8;
  return;
}



// FUNCTION 1415f55e0 ~FTextHistory_AsDate body=114 status=ok
// SIG undefined ~FTextHistory_AsDate(void)

void FTextHistory_AsDate::~FTextHistory_AsDate(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cb53d8;
  return;
}



// FUNCTION 1415f5660 ~FTextHistory_FormatNumber body=172 status=ok
// SIG undefined ~FTextHistory_FormatNumber(void)

void FTextHistory_FormatNumber::~FTextHistory_FormatNumber(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[0xd];
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
  if (*(char *)(param_1 + 0xb) != '\0') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 7) != '\0') {
    *(undefined1 *)(param_1 + 7) = 0;
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
  }
  *param_1 = &PTR_FUN_144cb53d8;
  return;
}



// FUNCTION 1415f5710 ~FTextHistory_NamedFormat body=180 status=ok
// SIG undefined ~FTextHistory_NamedFormat(void)

void FTextHistory_NamedFormat::~FTextHistory_NamedFormat(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 4,0);
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[3];
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
    *param_1 = &PTR_FUN_144cb53d8;
    return;
  }
  *param_1 = &PTR_FUN_144cb53d8;
  return;
}



// FUNCTION 1415f57d0 ~FTextHistory_OrderedFormat body=129 status=ok
// SIG undefined ~FTextHistory_OrderedFormat(void)

void FTextHistory_OrderedFormat::~FTextHistory_OrderedFormat(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (param_1 + 4);
  plVar4 = (longlong *)param_1[3];
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
    *param_1 = &PTR_FUN_144cb53d8;
    return;
  }
  *param_1 = &PTR_FUN_144cb53d8;
  return;
}



// FUNCTION 1415f5860 FUN_1415f5860 body=146 status=ok
// SIG undefined FUN_1415f5860(void)

void FUN_1415f5860(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[3];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = &PTR_FUN_144cb53d8;
    return;
  }
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
    *param_1 = &PTR_FUN_144cb53d8;
    return;
  }
  *param_1 = &PTR_FUN_144cb53d8;
  return;
}



// FUNCTION 1415f5900 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>::
operator=(longlong *param_1,longlong *param_2)

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
    TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1415f5a3d;
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
LAB_1415f5a3d:
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
        Emplace<TTuple<FString,FString>_const_&>
                  (param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x28,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1415f5ae0 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FString,FFormatArgumentValue>,FLocKeyMapFuncs<FFormatArgumentValue>,FDefaultSetAllocator>
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
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1415f5c1d;
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
LAB_1415f5c1d:
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
        Emplace<TTuple<FString,FFormatArgumentValue>_const_&>
                  (param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x48,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1415f5cc0 FUN_1415f5cc0 body=669 status=ok
// SIG undefined FUN_1415f5cc0(void)

longlong * FUN_1415f5cc0(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_1415f5d9d;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1415f5d9d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_1415f5e53;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1415f5e53:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                ((longlong)(int)uStack_3c * 0x38 + 8 + *param_1);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        _guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1415f5f60 operator= body=677 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_1415f603d;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1415f603d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_1415f60f3;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1415f60f3:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      if (*(longlong *)((longlong)(int)uStack_3c * 0x20 + *param_1) != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1415f6210 operator= body=691 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = _Dst;
      }
      uVar2 = *puVar8;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar7 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar5 = local_78 + 1;
        bVar4 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar5;
        if (bVar4) goto LAB_1415f62ec;
        uVar2 = puVar8[lVar7 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
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
      uStack_64 = (iStack_60 - iVar5) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1415f62ec:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar9 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = _Dst;
      }
      uVar6 = puVar8[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar5 = (int)uVar2 >> 5;
      while (uVar6 == 0) {
        uVar9 = uVar9 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_1415f63a1;
        uVar6 = puVar8[(longlong)iVar5 + 1];
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
      uStack_64 = (uVar9 - iVar5) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1415f63a1:
        uStack_64 = uVar1;
      }
    }
    while ((lVar7 = (longlong)(int)uStack_3c, uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      lVar3 = *param_1;
      if (*(longlong *)(lVar3 + 0x10 + lVar7 * 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar3 + lVar7 * 0x28) != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1415f64d0 operator= body=685 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar2 != 0) {
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = _Dst;
      }
      uVar3 = *puVar8;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar3 == 0) {
        lVar7 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar5 = local_78 + 1;
        bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar5;
        if (bVar4) goto LAB_1415f65ac;
        uVar3 = puVar8[lVar7 + 1];
      }
      uStack_74 = -uVar3 & uVar3;
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
      uStack_64 = (iStack_60 - iVar5) + 0x1f;
      if ((int)uVar2 < (int)uStack_64) {
LAB_1415f65ac:
        uStack_64 = uVar2;
      }
    }
    uVar3 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar9 = uVar3 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar3;
    if (uVar3 != uVar2) {
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = _Dst;
      }
      uVar6 = puVar8[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
      iVar5 = (int)uVar3 >> 5;
      while (uVar6 == 0) {
        uVar9 = uVar9 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_1415f6661;
        uVar6 = puVar8[(longlong)iVar5 + 1];
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
      uStack_64 = (uVar9 - iVar5) + 0x1f;
      if ((int)uVar2 < (int)uStack_64) {
LAB_1415f6661:
        uStack_64 = uVar2;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      plVar1 = (longlong *)(*param_1 + (longlong)(int)uStack_3c * 0x28);
      TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>::
      ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(plVar1 + 2);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1415f6780 operator= body=669 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_1415f685d;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1415f685d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_1415f6913;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1415f6913:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>
                (*param_1 + (longlong)(int)uStack_3c * 0x48);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1415f6a20 operator= body=674 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_1415f6afd;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1415f6afd:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_1415f6bb3;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1415f6bb3:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      if (*(longlong *)(*param_1 + (longlong)(int)uStack_3c * 0x18) != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1415f6cd0 operator= body=131 status=ok
// SIG undefined operator=(void)

undefined4 * FFormatArgumentValue::operator=(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  if ((undefined8 *)(param_2 + 4) != puVar1) {
    TOptional<FExpressionError>::Reset(puVar1);
    if (*(char *)(param_2 + 10) != '\0') {
      *puVar1 = *(undefined8 *)(param_2 + 4);
      lVar2 = *(longlong *)(param_2 + 6);
      *(longlong *)(param_1 + 6) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      param_1[8] = param_2[8];
      *(undefined1 *)(param_1 + 10) = 1;
    }
  }
  return param_1;
}



// FUNCTION 1415f6d60 operator= body=38 status=ok
// SIG undefined operator=(void)

undefined8 * FText::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 1415f6d90 operator= body=213 status=ok
// SIG undefined operator=(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FText::operator=(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != param_1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar4 = *param_1;
    plVar5 = (longlong *)param_1[1];
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_38;
    *(undefined4 *)((longlong)param_1 + 4) = local_38._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
    local_38 = uVar4;
    uStack_30 = plVar5;
  }
  plVar5 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 1415f6e70 operator= body=214 status=ok
// SIG undefined operator=(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FTextLocalizationResourceId::operator=(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != param_1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar4 = *param_1;
    plVar5 = (longlong *)param_1[1];
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_38;
    *(undefined4 *)((longlong)param_1 + 4) = local_38._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
    local_38 = uVar4;
    uStack_30 = plVar5;
  }
  plVar5 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1415f6f50 FUN_1415f6f50 body=692 status=ok
// SIG undefined FUN_1415f6f50(void)

longlong * FUN_1415f6f50(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  char local_res8 [8];
  longlong *local_28;
  longlong *local_20;
  undefined4 local_18;
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464b0068);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    if ((int)param_1[8] < 0x1e8) {
      puVar9 = (undefined8 *)FUN_1404b03b0();
      local_28 = (longlong *)*puVar9;
      local_20 = (longlong *)puVar9[1];
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      local_18 = 0;
      (**(code **)(*param_1 + 0x38))(param_1,&local_28);
      FUN_141611fd0(&local_28);
      uVar10 = (**(code **)(*local_28 + 0x10))();
      FString::operator=(param_2,uVar10);
      plVar4 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
    else {
      FUN_14158ce90(param_1,param_2);
    }
  }
  bVar3 = *(byte *)(param_1 + 5);
  if ((bVar3 & 2) != 0) {
    FUN_14158ce90(param_1,param_2);
    bVar3 = *(byte *)(param_1 + 5);
  }
  local_res8[0] = *(char *)(param_2 + 0x10);
  if ((bVar3 & 1) == 0) {
    if ((bVar3 & 2) == 0) goto LAB_1415f70c7;
  }
  else {
    *(undefined1 *)(param_2 + 0x10) = 4;
    uVar10 = FUN_1404b03b0();
    FText::operator=(param_2 + 0x18,uVar10);
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined1 *)(param_2 + 0x38) = 0;
    iVar8 = FArchive::CustomVer(param_1,&DAT_1464b0068);
    if (iVar8 < 5) {
      local_res8[0] = '\x04';
      goto LAB_1415f70c7;
    }
  }
  plVar4 = (longlong *)param_1[1];
  if ((char *)plVar4[1] < (char *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar4;
    *plVar4 = *plVar4 + 1;
  }
LAB_1415f70c7:
  *(char *)(param_2 + 0x10) = local_res8[0];
  if (local_res8[0] == '\0') {
    puVar6 = *(undefined4 **)param_1[1];
    if (puVar6 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
      *(undefined4 *)(param_2 + 0x30) = *puVar6;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      return param_1;
    }
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x30,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) == 0) {
      return param_1;
    }
    param_2 = param_2 + 0x30;
  }
  else {
    if (local_res8[0] != '\x02') {
      if (local_res8[0] == '\x04') {
        (**(code **)(*param_1 + 0x38))(param_1,param_2 + 0x18);
        return param_1;
      }
      if (local_res8[0] != '\x05') {
        return param_1;
      }
      puVar5 = *(undefined1 **)param_1[1];
      if (puVar5 + 1 <= (undefined1 *)((undefined8 *)param_1[1])[1]) {
        *(undefined1 *)(param_2 + 0x38) = *puVar5;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
        return param_1;
      }
      (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)(param_2 + 0x38),1);
      return param_1;
    }
    puVar6 = *(undefined4 **)param_1[1];
    if (puVar6 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
      *(undefined4 *)(param_2 + 0x34) = *puVar6;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      return param_1;
    }
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x34,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) == 0) {
      return param_1;
    }
    param_2 = param_2 + 0x34;
  }
  FArchive::ByteSwap(param_1,param_2,4);
  return param_1;
}



// FUNCTION 1415f7210 FUN_1415f7210 body=479 status=ok
// SIG undefined FUN_1415f7210(void)

longlong * FUN_1415f7210(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  char local_res8 [8];
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464b0068);
  iVar3 = FArchive::CustomVer(param_1,&DAT_1464b0068);
  if (0x14 < iVar3) {
    (**(code **)(*param_1 + 8))(param_1,param_2);
  }
  (**(code **)(*param_1 + 8))(param_1,param_2 + 1);
  plVar1 = (longlong *)param_1[1];
  local_res8[0] = *(char *)(param_2 + 4);
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  *(int *)(param_2 + 4) = (int)local_res8[0];
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 8,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 8) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xc,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xc,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x10,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x10,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *(undefined4 *)(param_2 + 0x14) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x14,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 0x14,4);
  }
  return param_1;
}



// FUNCTION 1415f73f0 FUN_1415f73f0 body=553 status=ok
// SIG undefined FUN_1415f73f0(void)

longlong * FUN_1415f73f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar14;
  longlong *plVar15;
  int local_res8 [2];
  undefined8 *puVar13;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  puVar14 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar15 = (longlong *)param_1[1];
  if ((int *)plVar15[1] < (int *)*plVar15 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar15;
    *plVar15 = *plVar15 + 4;
  }
  iVar5 = local_res8[0];
  bVar4 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar4) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x40001)))) {
    if ((bVar4 & 1) != 0) {
      plVar15 = (longlong *)*param_2;
      for (iVar11 = (int)param_2[1]; iVar11 != 0; iVar11 = iVar11 + -1) {
        plVar6 = (longlong *)plVar15[4];
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
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 8;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != iVar5) {
        TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_2,iVar5);
      }
      puVar13 = puVar14;
      if (0 < local_res8[0]) {
        do {
          iVar5 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar5 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(param_2,iVar5);
          }
          puVar10 = (undefined8 *)((longlong)iVar5 * 0x40 + *param_2);
          puVar8 = puVar14;
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar8 = (undefined8 *)FUN_1404b03b0();
            puVar10[3] = *puVar8;
            lVar7 = puVar8[1];
            puVar10[4] = lVar7;
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            *(undefined4 *)(puVar10 + 5) = 0;
            *(undefined1 *)(puVar10 + 2) = 4;
            uVar9 = FUN_1404b03b0();
            FText::operator=(puVar10 + 3,uVar9);
            puVar10[6] = 0;
            *(undefined1 *)(puVar10 + 7) = 0;
            puVar8 = puVar10;
          }
          FUN_1415f6f50(param_1,puVar8);
          uVar12 = (int)puVar13 + 1;
          puVar13 = (undefined8 *)(ulonglong)uVar12;
        } while ((int)uVar12 < local_res8[0]);
      }
      return param_1;
    }
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1415f6f50(param_1,(longlong)(int)puVar14 * 0x40 + *param_2);
        uVar12 = (int)puVar14 + 1;
        puVar14 = (undefined8 *)(ulonglong)uVar12;
      } while ((int)uVar12 < (int)param_2[1]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar4 | 0x80;
  return param_1;
}



// FUNCTION 1415f7620 FUN_1415f7620 body=506 status=ok
// SIG undefined FUN_1415f7620(void)

longlong * FUN_1415f7620(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  char *pcVar11;
  int iVar13;
  int local_res8 [2];
  ulonglong uVar12;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  uVar9 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar6 = (longlong *)param_1[1];
  if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  iVar5 = local_res8[0];
  bVar4 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar4) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x55556)))) {
    if ((bVar4 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          FUN_1415f8150(param_1,(longlong)(int)uVar9 * 0x30 + *param_2);
          uVar10 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar10;
        } while ((int)uVar10 < (int)param_2[1]);
      }
      return param_1;
    }
    iVar13 = (int)param_2[1];
    if (iVar13 != 0) {
      pcVar11 = (char *)(*param_2 + 0x28);
      do {
        if (*pcVar11 != '\0') {
          *pcVar11 = '\0';
          plVar6 = *(longlong **)(pcVar11 + -0x10);
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
        }
        pcVar11 = pcVar11 + 0x30;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_2,iVar5);
    }
    uVar12 = uVar9;
    if (0 < local_res8[0]) {
      do {
        iVar5 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
        }
        uVar8 = uVar9;
        if ((longlong)iVar5 * 0x30 + *param_2 != 0) {
          uVar8 = FFormatArgumentValue::FFormatArgumentValue();
        }
        FUN_1415f8150(param_1,uVar8);
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while ((int)uVar10 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar4 | 0x80;
  return param_1;
}



// FUNCTION 1415f7820 FUN_1415f7820 body=692 status=ok
// SIG undefined FUN_1415f7820(void)

longlong * FUN_1415f7820(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar6 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar8 = (longlong)local_2c * 0x20 + *local_48;
        (**(code **)(*param_1 + 0x40))(param_1,lVar8);
        FUN_14158ce90(param_1,lVar8 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar3 = 0;
  local_res8[0] = 0;
  if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + *param_2);
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        *(int *)(param_2 + 6) = iVar2;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)((longlong)iVar2 * 0x20 + *param_2) = 0xffffffff;
        }
      }
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      iVar5 = iVar4;
      if (iVar4 < 0) {
        iVar5 = iVar4 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
      puVar7 = (undefined8 *)((longlong)iVar4 * 0x20 + *param_2);
      *puVar7 = 0;
      puVar7[2] = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 3) = 0xffffffff;
      (**(code **)(*param_1 + 0x40))(param_1);
      FUN_14158ce90(param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1415f7ae0 FUN_1415f7ae0 body=846 status=ok
// SIG undefined FUN_1415f7ae0(void)

longlong * FUN_1415f7ae0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x68,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x68);
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar8 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar10 = (longlong)local_2c * 0x68 + *local_48;
        FUN_14158ce90(param_1,lVar10);
        FUN_1415f7820(param_1,lVar10 + 0x10);
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          if (*(longlong *)(lVar10 + 0x50) != 0) {
            uVar7 = FMemory::Realloc(*(longlong *)(lVar10 + 0x50),0,0);
            *(undefined8 *)(lVar10 + 0x50) = uVar7;
          }
          *(undefined4 *)(lVar10 + 0x58) = 0;
          TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(lVar10 + 0x10,*(int *)(lVar10 + 0x18) - *(int *)(lVar10 + 0x44));
        }
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar3 = 0;
  local_res8[0] = 0;
  if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar6 = *(int *)((longlong)iVar4 * 0x68 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar6;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)((longlong)iVar6 * 0x68 + *param_2) = 0xffffffff;
        }
      }
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      iVar6 = iVar4;
      if (iVar4 < 0) {
        iVar6 = iVar4 + 0x1f;
      }
      puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar6 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
      puVar9 = (undefined8 *)(*param_2 + (longlong)iVar4 * 0x68);
      puVar1 = puVar9 + 2;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      *puVar1 = 0;
      puVar9[3] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      *(undefined4 *)(puVar9 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar9 + 0x44) = 0;
      puVar9[10] = 0;
      *(undefined4 *)(puVar9 + 0xb) = 0;
      *(undefined4 *)(puVar9 + 0xc) = 0xffffffff;
      FUN_14158ce90(param_1);
      FUN_1415f7820(param_1,puVar1);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        if (puVar9[10] != 0) {
          uVar7 = FMemory::Realloc(puVar9[10],0,0);
          puVar9[10] = uVar7;
        }
        *(undefined4 *)(puVar9 + 0xb) = 0;
        TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
        ::ConditionalRehash(puVar1,*(int *)(puVar9 + 3) - *(int *)((longlong)puVar9 + 0x44),0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1415f7e30 FUN_1415f7e30 body=791 status=ok
// SIG undefined FUN_1415f7e30(void)

longlong * FUN_1415f7e30(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int local_res8 [2];
  int local_res10 [2];
  longlong *local_58;
  undefined1 local_50 [4];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x48,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x48);
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar9 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res10[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res10,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar9;
      *plVar9 = *plVar9 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_58,param_2);
    if (local_3c < *(int *)(local_48 + 0x18)) {
      do {
        lVar2 = *local_58 + (longlong)local_3c * 0x48;
        FUN_14158ce90(param_1,lVar2);
        FUN_1415f8150(param_1,lVar2 + 0x10);
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar3 = 0;
  local_res8[0] = 0;
  if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar9;
    *plVar9 = *plVar9 + 4;
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar6 = *(int *)(*param_2 + 4 + (longlong)iVar4 * 0x48);
        *(int *)(param_2 + 6) = iVar6;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar6 * 0x48) = 0xffffffff;
        }
      }
      plVar9 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar9 = param_2 + 2;
      }
      iVar6 = iVar4;
      if (iVar4 < 0) {
        iVar6 = iVar4 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
      lVar7 = (longlong)iVar4;
      *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + lVar7 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 8 + lVar7 * 0x48) = 0;
      lVar2 = lVar2 + lVar7 * 0x48;
      *(undefined4 *)(lVar2 + 0x10) = 4;
      puVar8 = (undefined8 *)FUN_1404b03b0();
      *(undefined8 *)(lVar2 + 0x20) = *puVar8;
      lVar7 = puVar8[1];
      *(longlong *)(lVar2 + 0x28) = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(puVar8 + 2);
      *(undefined1 *)(lVar2 + 0x38) = 1;
      *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
      FUN_14158ce90(param_1,lVar2);
      FUN_1415f8150(param_1,lVar2 + 0x10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1415f8150 FUN_1415f8150 body=532 status=ok
// SIG undefined FUN_1415f8150(void)

longlong * FUN_1415f8150(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  char local_res8 [8];
  int local_38 [8];
  
  local_res8[0] = (char)*param_2;
  plVar3 = (longlong *)param_1[1];
  if ((char *)plVar3[1] < (char *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar3;
    *plVar3 = *plVar3 + 1;
  }
  iVar7 = (int)local_res8[0];
  *param_2 = iVar7;
  if (local_res8[0] == '\0') {
    FUN_1404c11e0(param_1,param_2 + 2);
    return param_1;
  }
  if (iVar7 != 1) {
    if (iVar7 == 2) {
      piVar2 = *(int **)param_1[1];
      if (piVar2 + 1 <= (int *)((undefined8 *)param_1[1])[1]) {
        param_2[2] = *piVar2;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        return param_1;
      }
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) == 0) {
        return param_1;
      }
      FArchive::ByteSwap(param_1,param_2 + 2,4);
      return param_1;
    }
    if (iVar7 != 3) {
      if (iVar7 != 4) {
        return param_1;
      }
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        puVar6 = (undefined8 *)FUN_1404b03b0();
        plVar3 = (longlong *)puVar6[1];
        uVar4 = *puVar6;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        piVar2 = param_2 + 4;
        if (local_38 != piVar2) {
          TOptional<FExpressionError>::Reset(piVar2);
          *(undefined8 *)piVar2 = uVar4;
          *(longlong **)(param_2 + 6) = plVar3;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          param_2[8] = 0;
          *(undefined1 *)(param_2 + 10) = 1;
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
      }
      (**(code **)(*param_1 + 0x38))(param_1,param_2 + 4);
      return param_1;
    }
  }
  puVar6 = *(undefined8 **)param_1[1];
  if (puVar6 + 1 <= (undefined8 *)((longlong *)param_1[1])[1]) {
    *(undefined8 *)(param_2 + 2) = *puVar6;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,8);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) == 0) {
    return param_1;
  }
  FArchive::ByteSwap(param_1,param_2 + 2,8);
  return param_1;
}



// FUNCTION 1415f8370 FUN_1415f8370 body=557 status=ok
// SIG undefined FUN_1415f8370(void)

void FUN_1415f8370(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *_Src;
  void **ppvVar5;
  longlong *plVar6;
  longlong lVar7;
  void **ppvVar8;
  byte bVar9;
  int iVar10;
  int local_res8 [2];
  int local_res10 [2];
  undefined1 local_res18 [8];
  void *local_78;
  ulonglong local_70;
  void **local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  void **local_48;
  undefined8 *local_40;
  
  local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  FUN_1415d6020(*param_1,local_res8);
  bVar9 = *(byte *)(*(longlong *)(*param_1 + 8) + 0x28) & 1;
  if ((bVar9 != 0) && ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34) < local_res8[0])) {
    FUN_1409870b0(param_2);
  }
  iVar10 = 0;
  local_68 = (void **)0x0;
  local_60 = 0;
  TMapBase<FString,TSharedPtr<FLocMetadataValue,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,0>,0>_>
  ::GetKeys<FDefaultAllocator>(param_2,&local_68);
  ppvVar8 = local_68;
  if (0 < local_res8[0]) {
    do {
      local_78 = (void *)0x0;
      local_70 = 0;
      if ((bVar9 == 0) && (&local_78 != ppvVar8)) {
        uVar4 = *(uint *)(ppvVar8 + 1);
        _Src = *ppvVar8;
        local_70 = (ulonglong)uVar4;
        if (uVar4 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,uVar4,0);
          _guard_xfg_dispatch_icall_nop(local_78,_Src,(longlong)(int)uVar4 * 2);
        }
      }
      lVar7 = 0;
      FUN_14158ce90(*(undefined8 *)(*param_1 + 8),&local_78);
      if (bVar9 == 0) {
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::FindId(param_2,local_res10);
        if (local_res10[0] != -1) {
          lVar7 = *param_2 + (longlong)local_res10[0] * 0x28;
        }
        FUN_1416166e0(param_1,lVar7 + 0x10);
      }
      else {
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        FUN_1416166e0(param_1,&local_58);
        local_48 = &local_78;
        local_40 = &local_58;
        TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,TSharedRef<FBuildPatchAppManifest,1>_&&>_>
                  (param_2,local_res18,&local_48,0);
        plVar6 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_50 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_50)(plStack_50);
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
      if (local_78 != (void *)0x0) {
        FMemory::Free();
      }
      iVar10 = iVar10 + 1;
      ppvVar8 = ppvVar8 + 2;
    } while (iVar10 < local_res8[0]);
  }
  ppvVar5 = local_68;
  ppvVar8 = local_68;
  for (iVar10 = (int)local_60; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*ppvVar8 != (void *)0x0) {
      FMemory::Free();
    }
    ppvVar8 = ppvVar8 + 2;
  }
  if (ppvVar5 != (void **)0x0) {
    FMemory::Free(ppvVar5);
  }
  return;
}



// FUNCTION 1415f85a0 FUN_1415f85a0 body=731 status=ok
// SIG undefined FUN_1415f85a0(void)

undefined8 FUN_1415f85a0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint *puVar13;
  longlong *plVar14;
  int local_res8 [2];
  longlong *local_res10;
  int local_res18;
  int local_a8;
  uint uStack_a4;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_80;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined1 auStack_48 [16];
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) ==
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    iVar8 = (int)param_1[5];
    local_78 = (uint *)(param_1 + 2);
    uStack_a4 = 1;
    local_a8 = 0;
    iStack_90 = 0;
    iStack_94 = 0;
    if (iVar8 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = local_78;
      }
      uVar2 = *puVar13;
      iStack_90 = 0;
      local_a8 = 0;
      while (uVar2 == 0) {
        lVar11 = (longlong)local_a8;
        iStack_90 = iStack_90 + 0x20;
        iVar12 = local_a8 + 1;
        bVar6 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
        local_a8 = iVar12;
        if (bVar6) goto LAB_1415f8690;
        uVar2 = puVar13[lVar11 + 1];
      }
      uStack_a4 = -uVar2 & uVar2;
      local_res18 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> local_res18 == 0; local_res18 = local_res18 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - local_res18;
      }
      iStack_94 = (iStack_90 - iVar12) + 0x1f;
      if (iVar8 < iStack_94) {
LAB_1415f8690:
        iStack_94 = iVar8;
      }
    }
    uStack_70 = CONCAT44(iStack_94,0xffffffff);
    auStack_48._8_4_ = iStack_90;
    auStack_48._0_8_ = uStack_70;
    auStack_48._12_4_ = uStack_8c;
    uStack_80 = CONCAT44(uStack_a4,local_a8);
    local_68 = auStack_48._8_8_;
    local_res10 = param_2;
    local_60 = param_1;
    uStack_58 = uStack_80;
    puStack_50 = local_78;
    if (iStack_94 < iVar8) {
      do {
        lVar10 = 0;
        plVar3 = *(longlong **)(*param_1 + 0x18 + (longlong)iStack_94 * 0x28);
        lVar11 = *param_1 + (longlong)iStack_94 * 0x28;
        plVar4 = *(longlong **)(lVar11 + 0x10);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::FindId(param_2,local_res8,lVar11);
        if (local_res8[0] != -1) {
          lVar10 = *param_2 + (longlong)local_res8[0] * 0x28;
        }
        plVar14 = (longlong *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          plVar14 = (longlong *)0x0;
        }
        if (((plVar14 == (longlong *)0x0) || (*plVar14 == 0)) ||
           (cVar7 = FString::StartsWith(lVar11,&DAT_1464a9340,1), cVar7 != '\0')) {
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar3 + 1;
            lVar11 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
        }
        else {
          plVar5 = (longlong *)*plVar14;
          iVar8 = (**(code **)(*plVar4 + 0x38))(plVar4);
          iVar12 = (**(code **)(*plVar5 + 0x38))(plVar5);
          if ((iVar8 != iVar12) ||
             (cVar7 = FLocMetadataValue::operator==(plVar4,*plVar14), cVar7 == '\0')) {
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar3 + 1;
              lVar11 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            goto LAB_1415f885a;
          }
          param_2 = local_res10;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar3 + 1;
            lVar11 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              param_2 = local_res10;
              if (iVar8 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
                param_2 = local_res10;
              }
            }
          }
        }
        uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_80._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
        iStack_94 = uStack_70._4_4_;
      } while (uStack_70._4_4_ < (int)local_78[6]);
    }
    uVar9 = 1;
  }
  else {
LAB_1415f885a:
    uVar9 = 0;
  }
  return uVar9;
}



// FUNCTION 1415f8880 operator== body=98 status=ok
// SIG undefined operator==(void)

undefined8 FLocMetadataValue::operator==(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  iVar3 = (**(code **)(*param_1 + 0x38))(param_1);
  if (iVar3 == iVar2) {
    cVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1415f88f0 operator< body=841 status=ok
// SIG undefined operator<(void)

bool FLocMetadataObject::operator<(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  int local_res18 [2];
  int local_res20 [2];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  
  iVar8 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  TMapBase<FString,TSharedPtr<FLocMetadataValue,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,0>,0>_>
  ::GetKeys<FDefaultAllocator>(param_1,&local_58);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  TMapBase<FString,TSharedPtr<FLocMetadataValue,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,0>,0>_>
  ::GetKeys<FDefaultAllocator>(param_2,&local_68);
  plVar14 = local_58;
  uVar11 = (uint)local_50;
  uVar12 = (ulonglong)(int)(uint)local_50;
  AlgoImpl::
  IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
            (local_58,uVar12,(ulonglong)param_1 & 0xff,local_res18);
  plVar5 = local_68;
  iVar9 = (int)local_60;
  AlgoImpl::
  IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
            (local_68,(longlong)(int)local_60,(ulonglong)param_1 & 0xff,local_res18);
  if (0 < (int)uVar11) {
    plVar10 = plVar14 + 1;
    puVar7 = &DAT_143f3eda8;
    do {
      if (iVar9 <= iVar8) goto LAB_1415f8bba;
      if (*(int *)((longlong)plVar10 + ((longlong)plVar5 - (longlong)plVar14)) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = *(undefined2 **)((longlong)plVar10 + ((longlong)plVar5 - (longlong)plVar14) + -8);
      }
      if ((int)*plVar10 == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)plVar10[-1];
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar6);
      if (iVar2 != 0) {
        lVar3 = (longlong)iVar8;
        if ((int)plVar5[lVar3 * 2 + 1] == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)plVar5[lVar3 * 2];
        }
        if ((int)plVar14[lVar3 * 2 + 1] != 0) {
          puVar7 = (undefined2 *)plVar14[lVar3 * 2];
        }
        iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar6);
        bVar15 = iVar9 < 0;
        goto LAB_1415f8bbd;
      }
      iVar8 = iVar8 + 1;
      plVar10 = plVar10 + 2;
    } while (iVar8 < (int)uVar11);
  }
  if ((int)uVar11 < iVar9) {
LAB_1415f89f1:
    bVar15 = true;
  }
  else {
    iVar9 = 0;
    if (0 < (int)uVar11) {
      do {
        plVar5 = (longlong *)0x0;
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::FindId(param_1,local_res18,plVar14 + (longlong)iVar9 * 2);
        plVar10 = plVar5;
        if (local_res18[0] != -1) {
          plVar10 = (longlong *)(*param_1 + (longlong)local_res18[0] * 0x28);
        }
        plVar13 = plVar10 + 2;
        if (plVar10 == (longlong *)0x0) {
          plVar13 = plVar5;
        }
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::FindId(param_2,local_res20,plVar14 + (longlong)iVar9 * 2);
        if (local_res20[0] != -1) {
          plVar5 = (longlong *)(*param_2 + (longlong)local_res20[0] * 0x28);
        }
        plVar10 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        if ((plVar13 != (longlong *)0x0) || (plVar10 != (longlong *)0x0)) {
          if ((plVar13 == (longlong *)0x0) != (plVar10 == (longlong *)0x0)) {
            bVar15 = plVar10 == (longlong *)0x0;
            goto LAB_1415f8bbd;
          }
          plVar5 = (longlong *)*plVar13;
          if ((plVar5 != (longlong *)0x0) || (*plVar10 != 0)) {
            plVar14 = (longlong *)*plVar10;
            bVar15 = plVar14 != (longlong *)0x0;
            if ((plVar5 != (longlong *)0x0) != bVar15) goto LAB_1415f8bbd;
            iVar8 = (**(code **)(*plVar14 + 0x38))(plVar14);
            iVar2 = (**(code **)(*plVar5 + 0x38))(plVar5);
            if (iVar2 == iVar8) {
              cVar1 = (**(code **)(*plVar5 + 0x48))(plVar5,plVar14);
            }
            else {
              iVar8 = (**(code **)(*plVar14 + 0x38))(plVar14);
              iVar2 = (**(code **)(*plVar5 + 0x38))(plVar5);
              cVar1 = iVar2 < iVar8;
            }
            if (cVar1 != '\0') goto LAB_1415f89f1;
            plVar10 = (longlong *)*plVar10;
            plVar13 = (longlong *)*plVar13;
            iVar8 = (**(code **)(*plVar13 + 0x38))(plVar13);
            iVar2 = (**(code **)(*plVar10 + 0x38))(plVar10);
            if ((iVar8 != iVar2) ||
               (cVar1 = (**(code **)(*plVar13 + 0x40))(plVar13,plVar10), plVar14 = local_58,
               cVar1 == '\0')) break;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar11);
    }
LAB_1415f8bba:
    bVar15 = false;
  }
LAB_1415f8bbd:
  plVar14 = local_68;
  plVar5 = local_68;
  for (iVar9 = (int)local_60; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  plVar5 = local_58;
  plVar10 = local_58;
  if (plVar14 != (longlong *)0x0) {
    FMemory::Free(plVar14);
    plVar5 = local_58;
    plVar10 = local_58;
  }
  while (plVar14 = local_58, uVar11 != 0) {
    local_58 = plVar10;
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    uVar11 = (int)uVar12 - 1;
    uVar12 = (ulonglong)uVar11;
    plVar5 = plVar5 + 2;
    plVar10 = local_58;
    local_58 = plVar14;
  }
  if (local_58 != (longlong *)0x0) {
    local_58 = plVar10;
    FMemory::Free(plVar14);
  }
  return bVar15;
}



// FUNCTION 1415f8c40 operator< body=115 status=ok
// SIG undefined operator<(void)

bool FLocMetadataValue::operator<(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  iVar3 = (**(code **)(*param_1 + 0x38))(param_1);
  if (iVar3 == iVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001415f8c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
    return (bool)uVar1;
  }
  iVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  iVar3 = (**(code **)(*param_1 + 0x38))(param_1);
  return iVar3 < iVar2;
}



// FUNCTION 1415f8cc0 operator() body=582 status=ok
// SIG undefined operator()(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
<lambda_c9162fbb112c85c3a99091a1bb95fc85>::operator()(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  wchar_t *_Str2;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined1 auStack_148 [40];
  ulonglong local_120;
  undefined4 local_118 [12];
  undefined4 local_e8 [10];
  ulonglong local_c0;
  undefined4 local_b8 [10];
  undefined8 local_90;
  undefined8 local_88 [5];
  undefined8 local_60;
  undefined8 local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  puVar7 = *(undefined8 **)*param_1;
  puVar12 = puVar7 + (longlong)(int)((longlong *)*param_1)[1] * 8;
  if (puVar7 != puVar12) {
    do {
      iVar6 = *(int *)(puVar7 + 1);
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      if (*(int *)(param_2 + 1) == iVar5) {
        if (iVar6 == 0) {
          _Str2 = L"";
        }
        else {
          _Str2 = (wchar_t *)*puVar7;
        }
        iVar6 = wcsncmp((wchar_t *)*param_2,_Str2,(longlong)*(int *)(param_2 + 1));
        if (iVar6 == 0) {
          cVar3 = *(char *)(puVar7 + 2);
          if (cVar3 == '\0') {
            uVar8 = (ulonglong)*(int *)(puVar7 + 6);
            puVar10 = *(undefined4 **)param_1[1];
            puVar9 = local_b8;
            *puVar10 = 0;
            local_c0 = uVar8;
          }
          else {
            if (cVar3 != '\x02') {
              if (cVar3 == '\x04') {
                plVar13 = (longlong *)puVar7[4];
                uVar11 = puVar7[3];
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                  UNLOCK();
                }
                uVar14 = *(undefined4 *)(puVar7 + 5);
                puVar9 = *(undefined4 **)param_1[1];
                puVar7 = local_58;
                local_90 = local_60;
              }
              else {
                if (cVar3 == '\x05') {
                  uVar8 = (ulonglong)*(byte *)(puVar7 + 7);
                  puVar10 = *(undefined4 **)param_1[1];
                  puVar9 = local_118;
                  *puVar10 = 5;
                  local_120 = uVar8;
                  goto LAB_1415f8edf;
                }
                puVar7 = (undefined8 *)FUN_1404b03b0();
                plVar13 = (longlong *)puVar7[1];
                uVar11 = *puVar7;
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                  UNLOCK();
                }
                uVar14 = *(undefined4 *)(puVar7 + 2);
                puVar9 = *(undefined4 **)param_1[1];
                puVar7 = local_88;
              }
              puVar12 = (undefined8 *)(puVar9 + 4);
              *(undefined8 *)(puVar9 + 2) = local_90;
              *puVar9 = 4;
              if (puVar7 != puVar12) {
                TOptional<FExpressionError>::Reset(puVar12);
                *puVar12 = uVar11;
                *(longlong **)(puVar9 + 6) = plVar13;
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                  UNLOCK();
                }
                puVar9[8] = uVar14;
                *(undefined1 *)(puVar9 + 10) = 1;
              }
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar13 + 1;
                lVar4 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  iVar6 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                    return *(undefined8 *)param_1[1];
                  }
                }
              }
              goto LAB_1415f8ef2;
            }
            uVar8 = CONCAT44(SUB84(local_118._40_8_,4),*(undefined4 *)((longlong)puVar7 + 0x34));
            puVar10 = *(undefined4 **)param_1[1];
            puVar9 = local_e8;
            *puVar10 = 2;
          }
LAB_1415f8edf:
          *(ulonglong *)(puVar10 + 2) = uVar8;
          if (puVar9 != puVar10 + 4) {
            TOptional<FExpressionError>::Reset();
          }
LAB_1415f8ef2:
          return *(undefined8 *)param_1[1];
        }
      }
      puVar7 = puVar7 + 8;
    } while (puVar7 != puVar12);
  }
  return 0;
}



// FUNCTION 1415f8f10 operator() body=253 status=ok
// SIG undefined operator()(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong <lambda_2297a01fe74ed90963b5f76ff99d6a75>::operator()
                   (undefined8 param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  short sVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [24];
  char local_80;
  short *local_78 [3];
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  short local_40;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FTokenStream::ParseSymbol(param_3 + 0x10,local_98,0x60,0);
  if ((local_80 != '\0') &&
     (FTokenStream::ParseSymbol(param_3 + 0x10,local_78,local_98), local_60 != '\0')) {
    psVar3 = (short *)&DAT_144cb3050;
    sVar1 = *local_78[0];
    if (sVar1 != 0) {
      sVar4 = 0x7b;
      do {
        psVar3 = psVar3 + 1;
        if (sVar4 == sVar1) {
          puVar2 = (undefined4 *)FUN_14160c3e0();
          local_58 = *puVar2;
          uStack_54 = puVar2[1];
          uStack_50 = puVar2[2];
          uStack_4c = puVar2[3];
          local_48 = &PTR_FUN_144cb6338;
          local_40 = sVar1;
          FExpressionTokenConsumer::Add(param_3,local_98,&local_58);
          FExpressionNode::~FExpressionNode(&local_58);
          break;
        }
        sVar4 = *psVar3;
      } while (sVar4 != 0);
    }
  }
  *(undefined1 *)(param_2 + 0x18) = 0;
  return param_2;
}



// FUNCTION 1415f9010 FUN_1415f9010 body=1103 status=ok
// SIG undefined FUN_1415f9010(void)

void FUN_1415f9010(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  void **ppvVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  uint *puVar19;
  undefined8 local_a8;
  uint *puStack_a0;
  uint local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  void *local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((*(int *)(*param_1 + 8) < 2) &&
     (plVar11 = (longlong *)
                FConfigCacheIni::GetSectionPrivate
                          (DAT_1468b6148,L"Internationalization.AssetGroupCultures",0,1,param_3),
     plVar11 != (longlong *)0x0)) {
    uVar2 = *(uint *)(plVar11 + 5);
    puVar1 = (uint *)(plVar11 + 2);
    local_a8 = 0x100000000;
    uStack_94 = 0;
    iStack_90 = 0;
    if (uVar2 != 0) {
      puVar19 = (uint *)plVar11[4];
      if ((uint *)plVar11[4] == (uint *)0x0) {
        puVar19 = puVar1;
      }
      uVar9 = *puVar19;
      iStack_90 = 0;
      iVar10 = 0;
      while (uVar9 == 0) {
        iStack_90 = iStack_90 + 0x20;
        uVar5 = (ulonglong)local_a8 >> 0x20;
        local_a8 = CONCAT44((int)uVar5,iVar10 + 1);
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_1415f912c;
        uVar9 = puVar19[(longlong)iVar10 + 1];
        iVar10 = iVar10 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar10 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      local_a8 = CONCAT44(uVar9,(undefined4)local_a8);
      if (uVar9 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_94 = (iStack_90 - iVar10) + 0x1f;
      if ((int)uVar2 < (int)uStack_94) {
LAB_1415f912c:
        uStack_94 = uVar2;
      }
    }
    uVar9 = *(uint *)(plVar11 + 5);
    uStack_60 = CONCAT44(uStack_94,0xffffffff);
    local_58 = CONCAT44(uStack_8c,iStack_90);
    local_98 = -1 << ((byte)uVar9 & 0x1f);
    uStack_48 = local_a8;
    uVar7 = uStack_48;
    uVar18 = uVar9 & 0xffffffe0;
    local_50._0_4_ = SUB84(plVar11,0);
    local_50._4_4_ = (undefined4)((ulonglong)plVar11 >> 0x20);
    uStack_48._0_4_ = (undefined4)local_a8;
    uStack_48._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
    local_78 = (undefined4)local_50;
    uStack_74 = local_50._4_4_;
    uStack_70 = (undefined4)uStack_48;
    uStack_6c = uStack_48._4_4_;
    uStack_94 = uVar9;
    if (uVar9 != uVar2) {
      puVar19 = (uint *)plVar11[4];
      if ((uint *)plVar11[4] == (uint *)0x0) {
        puVar19 = puVar1;
      }
      uVar14 = puVar19[(int)uVar9 >> 5] & local_98;
      iVar10 = (int)uVar9 >> 5;
      while (uVar14 == 0) {
        uVar18 = uVar18 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_1415f91f2;
        uVar14 = puVar19[(longlong)iVar10 + 1];
        local_98 = 0xffffffff;
        iVar10 = iVar10 + 1;
      }
      uVar14 = -uVar14 & uVar14;
      iVar10 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uVar14 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_94 = (uVar18 - iVar10) + 0x1f;
      if ((int)uVar2 < (int)uStack_94) {
LAB_1415f91f2:
        uStack_94 = uVar2;
      }
    }
    uVar2 = uStack_94;
    puStack_a0 = puVar1;
    local_68 = puVar1;
    local_50 = plVar11;
    uStack_48 = uVar7;
    puStack_40 = puVar1;
    uStack_38 = uStack_60;
    uStack_30 = local_58;
    while( true ) {
      if (((uStack_60._4_4_ == uVar2) && (local_68 == puVar1)) &&
         ((longlong *)CONCAT44(uStack_74,local_78) == plVar11)) break;
      plVar17 = (longlong *)
                ((longlong)(int)uStack_60._4_4_ * 0x30 + *(longlong *)CONCAT44(uStack_74,local_78));
      plVar12 = *(longlong **)param_1[2];
      plVar3 = plVar12 + (longlong)(int)((longlong *)param_1[2])[1] * 3;
      plVar13 = (longlong *)0x0;
      if (plVar12 != plVar3) {
        do {
          plVar13 = plVar12;
          if (*plVar12 == *plVar17) break;
          plVar12 = plVar12 + 3;
          plVar13 = (longlong *)0x0;
        } while (plVar12 != plVar3);
      }
      if (plVar13 == (longlong *)0x0) {
        lVar15 = 0x18;
        lVar16 = *plVar17;
        iVar10 = (int)plVar17[4] + -1;
        if ((int)plVar17[4] == 0) {
          iVar10 = 0;
        }
        if (iVar10 < 1) {
          lVar15 = 8;
        }
        FString::FString(&puStack_a0,lVar15 + (longlong)plVar17);
        plVar3 = (longlong *)param_1[2];
        iVar10 = (int)plVar3[1];
        *(int *)(plVar3 + 1) = iVar10 + 1;
        if (*(int *)((longlong)plVar3 + 0xc) < iVar10 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar3,iVar10);
        }
        plVar3 = (longlong *)(*plVar3 + (longlong)iVar10 * 0x18);
        *plVar3 = lVar16;
        plVar3[1] = (longlong)puStack_a0;
        *(uint *)(plVar3 + 2) = local_98;
        *(uint *)((longlong)plVar3 + 0x14) = uStack_94;
      }
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
  }
  if (*(int *)(*param_1 + 8) < 2) {
    FConfigCacheIni::GetString(DAT_1468b6148,L"Internationalization",L"Language",*param_1,param_3);
  }
  if (*(int *)(param_1[1] + 8) < 2) {
    FConfigCacheIni::GetString(DAT_1468b6148,L"Internationalization",L"Locale",param_1[1],param_3);
  }
  local_88 = (void *)0x0;
  local_80 = 0;
  cVar8 = FConfigCacheIni::GetString
                    (DAT_1468b6148,L"Internationalization",L"Culture",&local_88,param_3);
  pvVar6 = local_88;
  if (cVar8 != '\0') {
    ppvVar4 = (void **)*param_1;
    if ((*(int *)(ppvVar4 + 1) < 2) && (ppvVar4 != &local_88)) {
      lVar16 = (longlong)(int)local_80;
      *(int *)(ppvVar4 + 1) = (int)local_80;
      if (((int)local_80 == 0) && (*(int *)((longlong)ppvVar4 + 0xc) == 0)) {
        *(undefined4 *)((longlong)ppvVar4 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar4,local_80 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppvVar4,pvVar6,lVar16 * 2);
      }
    }
    pvVar6 = local_88;
    ppvVar4 = (void **)param_1[1];
    if ((*(int *)(ppvVar4 + 1) < 2) && (ppvVar4 != &local_88)) {
      lVar16 = (longlong)(int)local_80;
      *(int *)(ppvVar4 + 1) = (int)local_80;
      if (((int)local_80 == 0) && (*(int *)((longlong)ppvVar4 + 0xc) == 0)) {
        *(undefined4 *)((longlong)ppvVar4 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar4,local_80 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppvVar4,pvVar6,lVar16 * 2);
      }
    }
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415f9460 FUN_1415f9460 body=353 status=ok
// SIG undefined FUN_1415f9460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1415f9460(undefined8 param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_a8 [24];
  char local_90;
  ushort *local_88;
  longlong local_80;
  char local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FTokenStream::ParseSymbol(param_3 + 0x10,local_a8,0x7b,0);
  if (local_90 != '\0') {
    uStack_c0 = local_d8;
    local_d8[0] = 0;
    local_c8 = (ushort *)&LAB_1415fe820;
    FTokenStream::ParseToken(param_3 + 0x10,&local_88,&local_c8,local_a8);
    if ((local_70 != '\0') &&
       (lVar2 = FTokenStream::ParseSymbol(param_3 + 0x10,&local_c8,0x7d,local_a8),
       *(char *)(lVar2 + 0x18) != '\0')) {
      local_c8 = local_88;
      uStack_c0._0_4_ = (int)(local_80 - (longlong)local_88 >> 1);
      uStack_c0._4_4_ = -1;
      if (0 < (int)uStack_c0) {
        uStack_c0._4_4_ = 0;
        iVar4 = 0;
        do {
          uVar1 = *local_88;
          if (9 < (ushort)(uVar1 - 0x30)) {
            uStack_c0._4_4_ = -1;
            break;
          }
          iVar4 = iVar4 + 1;
          local_88 = local_88 + 1;
          uStack_c0._4_4_ = (uint)uVar1 + (uStack_c0._4_4_ * 5 + -0x18) * 2;
        } while (iVar4 < (int)uStack_c0);
      }
      puVar3 = (undefined8 *)FUN_14160c360();
      local_68 = *puVar3;
      uStack_60 = puVar3[1];
      local_58 = &PTR_FUN_144cb62f8;
      local_50 = (undefined4)local_c8;
      uStack_4c = local_c8._4_4_;
      iStack_48 = (int)uStack_c0;
      iStack_44 = uStack_c0._4_4_;
      FExpressionTokenConsumer::Add(param_3,local_a8,&local_68);
      FExpressionNode::~FExpressionNode(&local_68);
    }
  }
  *(undefined1 *)(param_2 + 0x18) = 0;
  return param_2;
}



// FUNCTION 1415f95d0 FUN_1415f95d0 body=609 status=ok
// SIG undefined FUN_1415f95d0(void)

undefined8 * FUN_1415f95d0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  void *_Src;
  undefined8 ***_Src_00;
  longlong lVar3;
  void **ppvVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  int iVar10;
  longlong *plVar11;
  undefined4 uVar12;
  int local_res18 [4];
  void *local_68;
  undefined8 local_60;
  longlong *local_58;
  int local_50;
  undefined8 ***local_48;
  int local_40;
  undefined4 local_3c;
  
  ppppuVar9 = (undefined8 ****)0x0;
  local_68 = (void *)0x0;
  local_60 = 0;
  lVar3 = FInternationalization::Get();
  plVar8 = *(longlong **)(lVar3 + 0x30);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  ppvVar4 = (void **)FCulture::GetName(uVar2);
  if (&local_68 != ppvVar4) {
    iVar10 = *(int *)(ppvVar4 + 1);
    _Src = *ppvVar4;
    local_60 = CONCAT44(local_60._4_4_,iVar10);
    if ((iVar10 == 0) && (local_60._4_4_ == 0)) {
      local_60 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar10);
      _guard_xfg_dispatch_icall_nop(local_68,_Src,(longlong)iVar10 * 2);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
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
  if (1 < (int)local_60) {
    lVar3 = FInternationalization::Get();
    FICUInternationalization::GetPrioritizedCultureNames
              (*(undefined8 *)(lVar3 + 0x20),&local_58,&local_68);
    plVar11 = local_58 + (longlong)local_50 * 2;
    plVar8 = local_58;
    iVar10 = local_50;
    if (local_58 != plVar11) {
      local_48 = (undefined8 ****)0x0;
      local_3c = 0;
      plVar7 = local_58;
      do {
        lVar3 = *(longlong *)(param_1 + 8);
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::FindId(lVar3 + 0x48,local_res18,plVar7);
        ppppuVar6 = ppppuVar9;
        if (local_res18[0] != -1) {
          ppppuVar6 = (undefined8 ****)
                      (*(longlong *)(lVar3 + 0x48) + (longlong)local_res18[0] * 0x28);
        }
        ppppuVar5 = ppppuVar6 + 2;
        if (ppppuVar6 == (undefined8 ****)0x0) {
          ppppuVar5 = ppppuVar9;
        }
        if (ppppuVar5 != (undefined8 ****)0x0) {
          iVar10 = 0;
          uVar12 = 0;
          if (&local_48 != ppppuVar5) {
            local_40 = *(int *)(ppppuVar5 + 1);
            lVar3 = (longlong)local_40;
            _Src_00 = *ppppuVar5;
            iVar10 = local_40;
            if (local_40 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
              ppppuVar9 = (undefined8 ****)local_48;
              _guard_xfg_dispatch_icall_nop(local_48,_Src_00,lVar3 * 2);
              iVar10 = local_40;
              uVar12 = local_3c;
            }
          }
          *param_2 = ppppuVar9;
          *(int *)(param_2 + 1) = iVar10;
          *(undefined4 *)((longlong)param_2 + 0xc) = uVar12;
          plVar8 = local_58;
          for (iVar10 = local_50; iVar10 != 0; iVar10 = iVar10 + -1) {
            if (*plVar8 != 0) {
              FMemory::Free();
            }
            plVar8 = plVar8 + 2;
          }
          if (local_58 != (longlong *)0x0) {
            FMemory::Free(local_58);
          }
          goto LAB_1415f9777;
        }
        plVar7 = plVar7 + 2;
        plVar8 = local_58;
        iVar10 = local_50;
      } while (plVar7 != plVar11);
    }
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  FString::FString(param_2,*(longlong *)(param_1 + 8) + 0x38);
LAB_1415f9777:
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1415f9840 operator() body=561 status=ok
// SIG undefined operator()(void)

undefined8 *
<lambda_43e4203723a3103643fa9b1bd57a5869>::operator()(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  wchar_t *_Str2;
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
  
  param_1 = (longlong *)*param_1;
  uVar3 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar5) goto LAB_1415f990c;
      uVar4 = puVar11[lVar9 + 1];
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
    uStack_84 = (iStack_80 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1415f990c:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = param_1;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1415f99d2;
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
    uStack_84 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1415f99d2:
      uStack_84 = uVar3;
    }
  }
  do {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      return (undefined8 *)0x0;
    }
    puVar2 = (undefined8 *)(*param_1 + (longlong)(int)uStack_5c * 0x48);
    iVar7 = *(int *)(*param_1 + 8 + (longlong)(int)uStack_5c * 0x48);
    iVar6 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar6 = 0;
    }
    if (*(int *)(param_2 + 1) == iVar6) {
      if (iVar7 == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = (wchar_t *)*puVar2;
      }
      iVar7 = wcsncmp((wchar_t *)*param_2,_Str2,(longlong)*(int *)(param_2 + 1));
      if (iVar7 == 0) {
        return puVar2 + 2;
      }
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  } while( true );
}



// FUNCTION 1415f9a80 FUN_1415f9a80 body=277 status=ok
// SIG undefined FUN_1415f9a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1415f9a80(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  char local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_88 = local_a8;
  local_68 = '\0';
  local_a8[0] = 1;
  uStack_8c = (undefined4)((ulonglong)&local_88 >> 0x20);
  local_98 = &LAB_1415fe830;
  uStack_90 = SUB84(&local_88,0);
  puVar1 = (undefined4 *)FTokenStream::ParseToken(param_3 + 0x10,&local_58,&local_98,0);
  if ((puVar1 == &local_80) || (local_68 = '\0', *(char *)(puVar1 + 6) == '\0')) {
    if (local_68 == '\0') goto LAB_1415f9b6d;
  }
  else {
    local_80 = *puVar1;
    uStack_7c = puVar1[1];
    uStack_78 = puVar1[2];
    uStack_74 = puVar1[3];
    local_70 = *(undefined8 *)(puVar1 + 4);
    local_68 = '\x01';
  }
  local_98 = (undefined1 *)CONCAT44(uStack_7c,local_80);
  uStack_90 = (undefined4)(CONCAT44(uStack_74,uStack_78) - (longlong)local_98 >> 1);
  puVar2 = (undefined8 *)FUN_14160c460();
  local_58 = *puVar2;
  uStack_50 = puVar2[1];
  local_48 = &PTR_FUN_144cb6358;
  local_40 = (undefined4)local_98;
  uStack_3c = local_98._4_4_;
  uStack_38 = uStack_90;
  uStack_34 = uStack_8c;
  FExpressionTokenConsumer::Add(param_3,&local_80,&local_58);
  FExpressionNode::~FExpressionNode(&local_58);
LAB_1415f9b6d:
  *(undefined1 *)(param_2 + 0x18) = 0;
  return param_2;
}



// FUNCTION 1415f9ba0 FUN_1415f9ba0 body=325 status=ok
// SIG undefined FUN_1415f9ba0(void)

undefined8 * FUN_1415f9ba0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *local_28;
  int local_20;
  
  FICUInternationalization::GetPrioritizedCultureNames(*(undefined8 *)(param_1[1] + 0x20),&local_28)
  ;
  plVar5 = local_28 + (longlong)local_20 * 2;
  plVar7 = local_28;
  do {
    if (plVar7 == plVar5) {
      *param_2 = 0;
      param_2[1] = 0;
      plVar7 = local_28;
      for (iVar1 = local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_28 != (longlong *)0x0) {
LAB_1415f9c83:
        FMemory::Free(local_28);
      }
      return param_2;
    }
    puVar4 = *(undefined8 **)*param_1;
    puVar6 = puVar4 + (longlong)*(int *)((undefined8 *)*param_1 + 1) * 2;
    if (puVar4 != puVar6) {
LAB_1415f9c06:
      if ((int)plVar7[1] == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*plVar7;
      }
      if (*(int *)(puVar4 + 1) == 0) {
        puVar2 = &DAT_143f3eda8;
      }
      else {
        puVar2 = (undefined2 *)*puVar4;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
      if (iVar1 != 0) break;
      FString::FString(param_2,plVar7);
      plVar7 = local_28;
      for (; local_20 != 0; local_20 = local_20 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_28 == (longlong *)0x0) {
        return param_2;
      }
      goto LAB_1415f9c83;
    }
LAB_1415f9c3c:
    plVar7 = plVar7 + 2;
  } while( true );
  puVar4 = puVar4 + 2;
  if (puVar4 == puVar6) goto LAB_1415f9c3c;
  goto LAB_1415f9c06;
}



// FUNCTION 1415f9cf0 operator() body=201 status=ok
// SIG undefined operator()(void)

void <lambda_3651f0867479c7443e9f730c01a89ecf>::operator()(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  longlong *local_28;
  undefined8 local_20;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
  GenerateKeyArray<FDefaultAllocator>(param_2,&local_28);
  lVar1 = *param_1;
  uVar7 = (uint)local_20;
  uVar8 = (ulonglong)(int)(uint)local_20;
  iVar4 = *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34);
  if (iVar4 < (int)(iVar4 + (uint)local_20)) {
    FUN_1415e4440(lVar1);
  }
  plVar3 = local_28;
  plVar6 = local_28 + uVar8 * 2;
  for (plVar5 = local_28; plVar2 = plVar3, plVar5 != plVar6; plVar5 = plVar5 + 2) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (lVar1,local_res8,plVar5,0);
  }
  while (uVar7 != 0) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
    plVar2 = plVar2 + 2;
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  return;
}



// FUNCTION 1415f9dc0 operator() body=184 status=ok
// SIG undefined operator()(void)

void <lambda_020163677c00931673007e2fc342def9>::operator()(longlong *param_1,byte param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong local_res8 [4];
  
  lVar1 = *param_1;
  local_res8[0] = param_1[1];
  if (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 0x3c)) {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(longlong *)(lVar1 + 0x48) == 0) {
      lVar3 = lVar1 + 0x40;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(lVar1 + 0x50) - 1U & (ulonglong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        pbVar4 = (byte *)((longlong)iVar2 * 0xb0 + *(longlong *)(lVar1 + 8));
        if (*pbVar4 == param_2) {
          if (iVar2 != -1) goto LAB_1415f9e47;
          break;
        }
        iVar2 = *(int *)(pbVar4 + 0xa8);
      } while (iVar2 != -1);
    }
  }
  pbVar4 = (byte *)0x0;
LAB_1415f9e47:
  pbVar5 = pbVar4 + 8;
  if (pbVar4 == (byte *)0x0) {
    pbVar5 = (byte *)0x0;
  }
  if (pbVar5 != (byte *)0x0) {
    <lambda_3651f0867479c7443e9f730c01a89ecf>::operator()(local_res8,pbVar5);
    <lambda_3651f0867479c7443e9f730c01a89ecf>::operator()(local_res8,pbVar5 + 0x50);
  }
  return;
}



// FUNCTION 1415f9e80 operator+= body=204 status=ok
// SIG undefined operator+=(void)

longlong * TArray<FString,FDefaultAllocator>::operator+=(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Src;
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
      *puVar3 = 0;
      iVar2 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(puVar3 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar2,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar2 * 2);
      }
      puVar3 = puVar3 + 2;
      param_2 = param_2 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return param_1;
}



// FUNCTION 1415f9f50 `scalar_deleting_destructor' body=144 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
Impl::FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb6318;
  plVar4 = (longlong *)param_1[4];
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
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1415f9fe0 FUN_1415f9fe0 body=43 status=ok
// SIG undefined FUN_1415f9fe0(void)

undefined8 * FUN_1415f9fe0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1415fa010 FUN_1415fa010 body=43 status=ok
// SIG undefined FUN_1415fa010(void)

undefined8 * FUN_1415fa010(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1415fa040 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGeneratedTextData<FTextHistory_ArgumentDataFormat>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb6058;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_ArgumentDataFormat>::~TTextData<FTextHistory_ArgumentDataFormat>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1415fa0a0 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGeneratedTextData<FTextHistory_AsCurrency>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb5ad8;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_AsCurrency>::~TTextData<FTextHistory_AsCurrency>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1415fa100 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGeneratedTextData<FTextHistory_AsDate>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb5b78;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_AsDate>::~TTextData<FTextHistory_AsDate>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1415fa160 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGeneratedTextData<FTextHistory_AsNumber>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb61f8;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_AsNumber>::~TTextData<FTextHistory_AsNumber>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1415fa1c0 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGeneratedTextData<FTextHistory_Base>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb5948;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_Base>::~TTextData<FTextHistory_Base>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1415fa220 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGeneratedTextData<FTextHistory_NamedFormat>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb5fb8;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_NamedFormat>::~TTextData<FTextHistory_NamedFormat>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1415fa280 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGeneratedTextData<FTextHistory_OrderedFormat>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb6008;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_OrderedFormat>::~TTextData<FTextHistory_OrderedFormat>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1415fa2e0 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGeneratedTextData<FTextHistory_Transform>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb5a38;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_Transform>::~TTextData<FTextHistory_Transform>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1415fa340 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TIndirectTextData<FTextHistory_StringTableEntry>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TIndirectTextData<FTextHistory_StringTableEntry>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1415fa380 FUN_1415fa380 body=43 status=ok
// SIG undefined FUN_1415fa380(void)

undefined8 * FUN_1415fa380(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1415fa3b0 FUN_1415fa3b0 body=43 status=ok
// SIG undefined FUN_1415fa3b0(void)

undefined8 * FUN_1415fa3b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1415fa3e0 FUN_1415fa3e0 body=43 status=ok
// SIG undefined FUN_1415fa3e0(void)

undefined8 * FUN_1415fa3e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1415fa410 FUN_1415fa410 body=43 status=ok
// SIG undefined FUN_1415fa410(void)

undefined8 * FUN_1415fa410(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1415fa440 FUN_1415fa440 body=43 status=ok
// SIG undefined FUN_1415fa440(void)

undefined8 * FUN_1415fa440(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 1415fa470 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TLocalizedTextData<FTextHistory_ArgumentDataFormat>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb5d58;
  TTextData<FTextHistory_ArgumentDataFormat>::~TTextData<FTextHistory_ArgumentDataFormat>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1415fa4b0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TLocalizedTextData<FTextHistory_AsCurrency>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb5e48;
  TTextData<FTextHistory_AsCurrency>::~TTextData<FTextHistory_AsCurrency>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1415fa4f0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TLocalizedTextData<FTextHistory_AsDate>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb5e98;
  TTextData<FTextHistory_AsDate>::~TTextData<FTextHistory_AsDate>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1415fa530 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TLocalizedTextData<FTextHistory_AsNumber>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb5df8;
  TTextData<FTextHistory_AsNumber>::~TTextData<FTextHistory_AsNumber>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1415fa570 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TLocalizedTextData<FTextHistory_Base>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb58f8;
  TTextData<FTextHistory_Base>::~TTextData<FTextHistory_Base>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1415fa5b0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TLocalizedTextData<FTextHistory_NamedFormat>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb5c18;
  TTextData<FTextHistory_NamedFormat>::~TTextData<FTextHistory_NamedFormat>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1415fa5f0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TLocalizedTextData<FTextHistory_OrderedFormat>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb5cb8;
  TTextData<FTextHistory_OrderedFormat>::~TTextData<FTextHistory_OrderedFormat>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1415fa630 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TLocalizedTextData<FTextHistory_Transform>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb5ee8;
  TTextData<FTextHistory_Transform>::~TTextData<FTextHistory_Transform>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1415fa670 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TTextData<FTextHistory_ArgumentDataFormat>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TTextData<FTextHistory_ArgumentDataFormat>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1415fa6b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TTextData<FTextHistory_AsCurrency>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TTextData<FTextHistory_AsCurrency>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1415fa6f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TTextData<FTextHistory_AsDate>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TTextData<FTextHistory_AsDate>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1415fa730 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TTextData<FTextHistory_AsNumber>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TTextData<FTextHistory_AsNumber>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1415fa770 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TTextData<FTextHistory_Base>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TTextData<FTextHistory_Base>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1415fa7b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TTextData<FTextHistory_NamedFormat>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TTextData<FTextHistory_NamedFormat>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1415fa7f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TTextData<FTextHistory_OrderedFormat>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TTextData<FTextHistory_OrderedFormat>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1415fa830 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TTextData<FTextHistory_Transform>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TTextData<FTextHistory_Transform>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1415fa870 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FLocMetadataValueArray::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 1);
  *param_1 = &PTR__purecall_144cb51d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1415fa8c0 FUN_1415fa8c0 body=43 status=ok
// SIG undefined FUN_1415fa8c0(void)

undefined8 * FUN_1415fa8c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144cb51d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1415fa8f0 FUN_1415fa8f0 body=134 status=ok
// SIG undefined FUN_1415fa8f0(void)

undefined8 * FUN_1415fa8f0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  *param_1 = &PTR__purecall_144cb51d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1415fa980 FUN_1415fa980 body=72 status=ok
// SIG undefined FUN_1415fa980(void)

undefined8 * FUN_1415fa980(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_144cb51d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1415fa9d0 `scalar_deleting_destructor' body=33 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FLocalizationResourceTextSource::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415faa00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FPolyglotTextSource::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FPolyglotTextSource();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1415faa40 `scalar_deleting_destructor' body=241 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FTextFormatArgumentModifier_GenderForm::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  plVar4 = (longlong *)param_1[3];
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
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1415fab40 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FTextFormatArgumentModifier_HangulPostPositions::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1415faba0 FUN_1415faba0 body=180 status=ok
// SIG undefined FUN_1415faba0(void)

undefined8 * FUN_1415faba0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  puVar6 = param_1 + 0x17;
  lVar7 = 10;
  do {
    plVar4 = (longlong *)puVar6[-2];
    puVar6 = puVar6 + -2;
    lVar7 = lVar7 + -1;
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
  } while (lVar7 != 0);
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1415fac60 `scalar_deleting_destructor' body=178 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FTextFormatArgumentModifier_PluralForm::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  puVar6 = param_1 + 0x10;
  lVar7 = 6;
  do {
    plVar4 = (longlong *)puVar6[-2];
    puVar6 = puVar6 + -2;
    lVar7 = lVar7 + -1;
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
  } while (lVar7 != 0);
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1415fad20 `scalar_deleting_destructor' body=258 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FTextFormatData::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x70);
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
  iVar5 = *(int *)(param_1 + 0x60);
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (iVar5 != 0) {
    do {
      FExpressionNode::~FExpressionNode(lVar4);
      lVar4 = lVar4 + 0x58;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar4 = *(longlong *)(param_1 + 0x58);
  }
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  plVar3 = *(longlong **)(param_1 + 0x10);
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1415fae30 FUN_1415fae30 body=43 status=ok
// SIG undefined FUN_1415fae30(void)

undefined8 * FUN_1415fae30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144cb53d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1415fae60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FTextHistory_ArgumentDataFormat::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FTextHistory_ArgumentDataFormat();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1415faea0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FTextHistory_AsCurrency::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  FTextHistory_FormatNumber::~FTextHistory_FormatNumber(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1415faef0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FTextHistory_AsDate::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FTextHistory_AsDate();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1415faf30 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FTextHistory_AsNumber::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FTextHistory_FormatNumber::~FTextHistory_FormatNumber();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1415faf70 FUN_1415faf70 body=72 status=ok
// SIG undefined FUN_1415faf70(void)

undefined8 * FUN_1415faf70(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cb53d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1415fafc0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FTextHistory_NamedFormat::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FTextHistory_NamedFormat();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1415fb000 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FTextHistory_OrderedFormat::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FTextHistory_OrderedFormat();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1415fb040 `scalar_deleting_destructor' body=122 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FTextHistory_StringTableEntry::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  plVar3 = (longlong *)param_1[7];
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
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cb53d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1415fb0c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FTextHistory_Transform::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1415f5860();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1415fb100 AddEntry body=309 status=ok
// SIG undefined AddEntry(void)

void FTextLocalizationResource::AddEntry
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int local_res8 [2];
  undefined8 local_res20;
  
  if (*(int *)(param_4 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_4;
  }
  uVar4 = FCrc::StrCrc32<wchar_t>(puVar5,0);
  TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,param_2);
  if ((local_res8[0] == -1) || (lVar6 = (longlong)local_res8[0] * 0x68 + *param_1, lVar6 == 0)) {
    local_res20 = param_2;
    FUN_1415eab60(param_1,local_res8,&local_res20,0);
    lVar6 = (longlong)local_res8[0] * 0x68 + *param_1;
  }
  plVar1 = (longlong *)(lVar6 + 0x10);
  TSet<TTuple<FString,FString>,FLocKeyMapFuncs<FString>,FDefaultSetAllocator>::FindId
            (plVar1,local_res8,param_3);
  if ((local_res8[0] == -1) || (lVar6 = *plVar1 + (longlong)local_res8[0] * 0x28, lVar6 == 0)) {
    local_res20 = param_3;
    FUN_1415ea880(plVar1,local_res8,&local_res20,0);
    lVar6 = *plVar1 + (longlong)local_res8[0] * 0x28;
  }
  iVar3 = *(int *)(lVar6 + 0x18);
  *(int *)(lVar6 + 0x18) = iVar3 + 1;
  if (*(int *)(lVar6 + 0x1c) < iVar3 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow((longlong *)(lVar6 + 0x10),iVar3);
  }
  puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar3 * 0x28);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  FTextLocalizationResourceId::operator=(puVar2,param_6);
  *(undefined4 *)(puVar2 + 2) = uVar4;
  FString::operator=(puVar2 + 3,param_5);
  return;
}



// FUNCTION 1415fb240 AddUninitialized body=222 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1415fb320 Append body=163 status=ok
// SIG undefined Append(void)

longlong * FString::Append(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    iVar2 = (int)param_1[1];
    lVar4 = 0;
    iVar5 = iVar2 + -1;
    iVar3 = param_3;
    if (iVar2 < 1) {
      iVar5 = 0;
      iVar3 = param_3 + 1;
    }
    *(int *)(param_1 + 1) = iVar3 + iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3 + iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
    }
    if (0 < param_3) {
      lVar6 = (longlong)iVar5 * 2;
      do {
        lVar1 = lVar4 * 2;
        lVar4 = lVar4 + 1;
        *(undefined2 *)(lVar6 + *param_1) = *(undefined2 *)(param_2 + lVar1);
        lVar6 = lVar6 + 2;
      } while (lVar4 < param_3);
    }
    *(undefined2 *)(*param_1 + -2 + (longlong)(int)param_1[1] * 2) = 0;
  }
  return param_1;
}



// FUNCTION 1415fb3d0 FUN_1415fb3d0 body=3589 status=ok
// SIG undefined FUN_1415fb3d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415fb3d0(byte param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 (*pauVar3) [16];
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 ***pppuVar7;
  ulonglong uVar8;
  int iVar9;
  undefined2 ***pppuVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined2 **ppuVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  longlong *plVar26;
  undefined8 *puVar27;
  undefined2 *puVar28;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined2 *local_238;
  int local_230;
  int local_22c;
  undefined2 *local_228;
  undefined8 local_220;
  undefined2 *local_218;
  undefined8 local_210;
  undefined2 *local_208;
  int local_200;
  int local_1fc;
  undefined2 *local_1f8;
  int local_1f0;
  int local_1ec;
  undefined2 *local_1e8;
  undefined8 local_1e0;
  undefined2 *local_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined2 **local_1a8;
  int local_1a0;
  undefined2 **local_198;
  int local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined2 **local_168;
  int local_160;
  longlong local_158;
  undefined2 *local_150;
  int local_148;
  int local_144;
  undefined2 ***local_140;
  longlong local_138;
  undefined2 ***local_130;
  longlong local_128;
  longlong local_118;
  longlong *plStack_110;
  longlong local_108;
  longlong *plStack_100;
  undefined2 ***local_f8;
  longlong local_f0;
  undefined2 **local_e8;
  undefined2 **local_e0;
  longlong *local_d8;
  undefined2 *local_d0;
  int local_c8;
  void *local_c0;
  ulonglong local_b8;
  void *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80;
  int local_78;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  lVar15 = FInternationalization::Get();
  local_218 = (undefined2 *)0x0;
  local_e8 = &local_218;
  local_210 = 0;
  local_e0 = &local_228;
  local_d8 = &local_1b8;
  local_228 = (undefined2 *)0x0;
  local_220 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_158 = lVar15;
  uVar16 = FCommandLine::Get();
  cVar11 = FParse::Value(uVar16,L"CULTUREFORCOOKING=",&local_218,1);
  puVar28 = local_218;
  if (cVar11 != '\0') {
    lVar24 = (longlong)(int)local_210;
    local_220 = CONCAT44(local_220._4_4_,(int)local_210);
    if (((int)local_210 == 0) && (local_220._4_4_ == 0)) {
      local_220 = local_210 & 0xffffffff;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_228,local_210 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(local_228,puVar28,lVar24 * 2);
    }
    uVar16 = FCommandLine::Get();
    cVar11 = FParse::Param(uVar16,L"firstinstall");
    if (cVar11 != '\0') {
      puVar28 = &DAT_143f3eda8;
      if ((int)local_210 != 0) {
        puVar28 = local_218;
      }
      local_248 = &DAT_1468e2360;
      FConfigCacheIni::SetString(DAT_1468b6148,L"Internationalization",L"Language",puVar28);
      puVar28 = &DAT_143f3eda8;
      if ((int)local_220 != 0) {
        puVar28 = local_228;
      }
      local_248 = &DAT_1468e2360;
      FConfigCacheIni::SetString(DAT_1468b6148,L"Internationalization",L"Locale",puVar28);
    }
  }
  if ((int)local_210 < 2) {
    uVar16 = FCommandLine::Get();
    FParse::Value(uVar16,L"LANGUAGE=",&local_218,1);
  }
  if ((int)local_220 < 2) {
    uVar16 = FCommandLine::Get();
    FParse::Value(uVar16,L"LOCALE=",&local_228,1);
  }
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  uVar16 = FCommandLine::Get();
  cVar11 = FParse::Value(uVar16,L"CULTURE=",&local_1c8,1);
  pvVar4 = local_1c8;
  if (cVar11 != '\0') {
    if ((int)local_210 < 2) {
      lVar24 = (longlong)(int)local_1c0;
      local_210 = CONCAT44(local_210._4_4_,(int)local_1c0);
      if (((int)local_1c0 != 0) || (local_210._4_4_ != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_218,local_1c0 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(local_218,pvVar4,lVar24 * 2);
        goto LAB_1415fb5f9;
      }
      local_210 = local_1c0 & 0xffffffff;
      iVar14 = 0;
    }
    else {
LAB_1415fb5f9:
      iVar14 = (int)local_1c0;
    }
    pvVar4 = local_1c8;
    if ((int)local_220 < 2) {
      local_220 = CONCAT44(local_220._4_4_,iVar14);
      if ((iVar14 == 0) && (local_220._4_4_ == 0)) {
        local_220 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_228,iVar14);
        _guard_xfg_dispatch_icall_nop(local_228,pvVar4,(longlong)iVar14 * 2);
      }
    }
  }
  if (local_1c8 != (void *)0x0) {
    FMemory::Free();
  }
  FUN_1415f9010(&local_e8,L"game user settings",&DAT_1468e2420);
  FUN_1415f9010(&local_e8,L"game",&DAT_1468e2410);
  FUN_1415f9010(&local_e8,L"engine",&DAT_1468e2360);
  if ((int)local_210 < 2) {
    plVar26 = *(longlong **)(lVar15 + 0x60);
    uVar16 = *(undefined8 *)(lVar15 + 0x58);
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
      UNLOCK();
    }
    uVar16 = FCulture::GetName(uVar16);
    FString::operator=(&local_218,uVar16);
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar26 + 1;
      lVar24 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar24 == 1) {
        (**(code **)*plVar26)(plVar26);
        LOCK();
        piVar2 = (int *)((longlong)plVar26 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar26 + 8))(plVar26,1);
        }
      }
    }
  }
  if ((int)local_220 < 2) {
    plVar26 = *(longlong **)(lVar15 + 0x70);
    uVar16 = *(undefined8 *)(lVar15 + 0x68);
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
      UNLOCK();
    }
    uVar16 = FCulture::GetName(uVar16);
    FString::operator=(&local_228,uVar16);
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar26 + 1;
      lVar24 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar24 == 1) {
        (**(code **)*plVar26)(plVar26);
        LOCK();
        piVar2 = (int *)((longlong)plVar26 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar26 + 8))(plVar26,1);
        }
      }
    }
  }
  local_1d8 = (undefined2 *)0x0;
  local_1d0 = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  FGenericPlatformString::Memcpy(local_1d8,&DAT_144cb3a28,6);
  if ((param_1 & 4) != 0) {
    if (DAT_1468b5998 == 0) {
      lVar24 = operator_new(0x110);
      if (lVar24 == 0) {
        DAT_1468b5998 = 0;
      }
      else {
        DAT_1468b5998 = FUN_1415f3b10(lVar24);
      }
    }
    local_1e8 = (undefined2 *)0x0;
    local_1e0 = 0;
    puVar18 = *(undefined8 **)(DAT_1468b5998 + 0xf0);
    puVar27 = puVar18 + (longlong)*(int *)(DAT_1468b5998 + 0xf8) * 2;
    if (puVar18 != puVar27) {
      do {
        cVar11 = (**(code **)(*(longlong *)*puVar18 + 0x10))((longlong *)*puVar18,0,&local_1e8);
        if (cVar11 != '\0') break;
        puVar18 = puVar18 + 2;
      } while (puVar18 != puVar27);
      if ((int)local_1e0 < 2) {
        if (local_1e8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      else {
        iVar14 = (int)local_1e0;
        if (local_1d8 != (undefined2 *)0x0) {
          FMemory::Free();
          iVar14 = (int)local_1e0;
        }
        local_1d8 = local_1e8;
        uVar8 = (ulonglong)local_1e0 >> 0x20;
        local_1e0 = 0;
        local_1e8 = (undefined2 *)0x0;
        local_1d0 = CONCAT44((int)uVar8,iVar14);
      }
    }
  }
  puVar28 = local_218;
  lVar24 = (longlong)(int)local_210;
  local_238 = (undefined2 *)0x0;
  local_230 = (int)local_210;
  if ((int)local_210 == 0) {
    local_22c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_238,local_210 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_238,puVar28,lVar24 * 2);
  }
  if ((param_1 & 4) == 0) {
    bVar13 = param_1 & 2;
    if ((param_1 & 8) != 0) {
      bVar13 = bVar13 | 8;
    }
  }
  else {
    bVar13 = 4;
  }
  bVar12 = bVar13 | 0x10;
  if ((param_1 & 0x10) == 0) {
    bVar12 = bVar13;
  }
  if (DAT_1468b5998 == 0) {
    lVar24 = operator_new(0x110);
    if (lVar24 == 0) {
      DAT_1468b5998 = 0;
    }
    else {
      DAT_1468b5998 = FUN_1415f3b10(lVar24);
    }
  }
  FUN_14160a960(DAT_1468b5998,&local_1a8,bVar12);
  local_140 = &local_1a8;
  local_138 = lVar15;
  FUN_1415f9ba0(&local_140,&local_d0,&local_218);
  FUN_1415f9ba0(&local_140,&local_c0,&local_1d8);
  if (local_c8 < 2) {
    iVar14 = (int)local_b8;
    if (iVar14 < 2) {
      if (local_1a0 < 1) {
        ppuVar20 = &local_1d8;
      }
      else {
        ppuVar20 = local_1a8;
        if (&local_238 == local_1a8) goto LAB_1415fba1e;
      }
      local_230 = *(int *)(ppuVar20 + 1);
      lVar24 = (longlong)local_230;
      puVar28 = *ppuVar20;
      if ((local_230 == 0) && (local_22c == 0)) {
        local_22c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_238,local_230);
        _guard_xfg_dispatch_icall_nop(local_238,puVar28,lVar24 * 2);
      }
    }
    else {
      local_230 = iVar14;
      if ((iVar14 == 0) && (local_22c == 0)) {
        local_22c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_238,local_b8 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(local_238,local_c0,(longlong)iVar14 * 2);
      }
    }
  }
  else {
    puVar28 = &DAT_143f3eda8;
    if (local_c8 != 0) {
      puVar28 = local_d0;
    }
    puVar22 = &DAT_143f3eda8;
    if ((int)local_210 != 0) {
      puVar22 = local_218;
    }
    FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar22,puVar28);
  }
LAB_1415fba1e:
  puVar28 = (undefined2 *)0x0;
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  ppuVar20 = local_1a8;
  if (local_d0 != (undefined2 *)0x0) {
    FMemory::Free(local_d0);
    ppuVar20 = local_1a8;
  }
  for (; local_1a0 != 0; local_1a0 = local_1a0 + -1) {
    if (*ppuVar20 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    ppuVar20 = ppuVar20 + 2;
  }
  if (local_1a8 != (undefined2 **)0x0) {
    FMemory::Free();
  }
  puVar22 = local_228;
  lVar24 = (longlong)(int)local_220;
  local_1f8 = (undefined2 *)0x0;
  local_1f0 = (int)local_220;
  if ((int)local_220 == 0) {
    local_1ec = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1f8,local_220 & 0xffffffff,0);
    puVar28 = local_1f8;
    _guard_xfg_dispatch_icall_nop(local_1f8,puVar22,lVar24 * 2);
  }
  iVar14 = local_1ec;
  if ((param_1 & 4) == 0) {
    bVar13 = param_1 & 2;
    if ((param_1 & 8) != 0) {
      bVar13 = bVar13 | 8;
    }
  }
  else {
    bVar13 = 4;
  }
  bVar12 = bVar13 | 0x10;
  if ((param_1 & 0x10) == 0) {
    bVar12 = bVar13;
  }
  lVar24 = DAT_1468b5998;
  if (DAT_1468b5998 == 0) {
    lVar17 = operator_new(0x110);
    lVar24 = 0;
    if (lVar17 != 0) {
      lVar24 = FUN_1415f3b10(lVar17);
    }
  }
  DAT_1468b5998 = lVar24;
  FUN_14160a960(DAT_1468b5998,&local_198,bVar12);
  local_130 = &local_198;
  local_128 = lVar15;
  FUN_1415f9ba0(&local_130,&local_a0,&local_228);
  FUN_1415f9ba0(&local_130,&local_b0,&local_238);
  iVar9 = local_1ec;
  if (local_98 < 2) {
    iVar23 = (int)local_a8;
    if (iVar23 < 2) {
      if (local_190 < 1) {
        ppuVar20 = &local_238;
      }
      else {
        ppuVar20 = local_198;
        if (&local_1f8 == local_198) goto LAB_1415fbc0d;
      }
      local_1f0 = *(int *)(ppuVar20 + 1);
      lVar24 = (longlong)local_1f0;
      puVar22 = *ppuVar20;
      if ((local_1f0 != 0) || (lVar15 = local_158, iVar9 = iVar14, iVar14 != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1f8,local_1f0,iVar14);
        puVar28 = local_1f8;
        _guard_xfg_dispatch_icall_nop(local_1f8,puVar22,lVar24 * 2);
        lVar15 = local_158;
        iVar14 = local_1ec;
        iVar9 = local_1ec;
      }
    }
    else {
      local_1f0 = iVar23;
      if ((iVar23 != 0) || (iVar9 = iVar14, iVar14 != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1f8,local_a8 & 0xffffffff,iVar14);
        puVar28 = local_1f8;
        _guard_xfg_dispatch_icall_nop(local_1f8,local_b0,(longlong)iVar23 * 2);
        iVar14 = local_1ec;
        iVar9 = local_1ec;
      }
    }
  }
LAB_1415fbc0d:
  local_1ec = iVar9;
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  ppuVar20 = local_198;
  if (local_a0 != 0) {
    FMemory::Free();
    ppuVar20 = local_198;
  }
  for (; local_190 != 0; local_190 = local_190 + -1) {
    if (*ppuVar20 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    ppuVar20 = ppuVar20 + 2;
  }
  if (local_198 != (undefined2 **)0x0) {
    FMemory::Free();
  }
  local_148 = local_1f0;
  puVar22 = &DAT_143f3eda8;
  if (local_1f0 != 0) {
    puVar22 = puVar28;
  }
  puVar21 = &DAT_143f3eda8;
  if (local_230 != 0) {
    puVar21 = local_238;
  }
  local_150 = puVar28;
  local_144 = iVar14;
  iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar21,puVar22);
  if (iVar14 == 0) {
    FInternationalization::SetCurrentLanguageAndLocale(lVar15,&local_238);
  }
  else {
    FICUInternationalization::GetCulture(*(undefined8 *)(lVar15 + 0x20),&local_118,&local_238);
    if ((local_118 != 0) &&
       (pauVar3 = (undefined1 (*) [16])(lVar15 + 0x28), *(longlong *)(lVar15 + 0x28) != local_118))
    {
      local_188._8_8_ = plStack_110;
      local_188._0_8_ = local_118;
      uVar5 = (undefined4)((ulonglong)local_118 >> 0x20);
      uVar6 = (undefined4)((ulonglong)plStack_110 >> 0x20);
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
        UNLOCK();
      }
      if (&local_188 != pauVar3) {
        local_188 = *pauVar3;
        *(int *)*pauVar3 = (int)local_118;
        *(undefined4 *)(lVar15 + 0x2c) = uVar5;
        *(int *)(lVar15 + 0x30) = (int)plStack_110;
        *(undefined4 *)(lVar15 + 0x34) = uVar6;
        local_50 = (int)local_118;
        uStack_4c = uVar5;
        uStack_48 = (int)plStack_110;
        uStack_44 = uVar6;
      }
      uVar16 = local_188._8_8_;
      if ((undefined8 *)local_188._8_8_ != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_188._8_8_ + 8);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (*(code *)**(undefined8 **)local_188._8_8_)(local_188._8_8_);
          LOCK();
          piVar2 = (int *)(uVar16 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*(longlong *)local_188._8_8_ + 8))(local_188._8_8_,1);
          }
        }
      }
      FICUInternationalization::HandleLanguageChanged(*(undefined8 *)(lVar15 + 0x20),&local_238);
      TBaseMulticastDelegate<void>::Broadcast(lVar15 + 8);
    }
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      plVar26 = plStack_110 + 1;
      lVar24 = *plVar26;
      *(int *)plVar26 = (int)*plVar26 + -1;
      UNLOCK();
      if ((int)lVar24 == 1) {
        (**(code **)*plStack_110)(plStack_110);
        LOCK();
        piVar2 = (int *)((longlong)plStack_110 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plStack_110 + 8))(plStack_110,1);
        }
      }
    }
    FICUInternationalization::GetCulture(*(undefined8 *)(lVar15 + 0x20),&local_108,&local_150);
    if ((local_108 != 0) &&
       (pauVar3 = (undefined1 (*) [16])(lVar15 + 0x38), *(longlong *)(lVar15 + 0x38) != local_108))
    {
      local_178._8_8_ = plStack_100;
      local_178._0_8_ = local_108;
      uVar5 = (undefined4)((ulonglong)local_108 >> 0x20);
      uVar6 = (undefined4)((ulonglong)plStack_100 >> 0x20);
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
        UNLOCK();
      }
      if (&local_178 != pauVar3) {
        local_178 = *pauVar3;
        *(int *)*pauVar3 = (int)local_108;
        *(undefined4 *)(lVar15 + 0x3c) = uVar5;
        *(int *)(lVar15 + 0x40) = (int)plStack_100;
        *(undefined4 *)(lVar15 + 0x44) = uVar6;
        local_40 = (int)local_108;
        uStack_3c = uVar5;
        uStack_38 = (int)plStack_100;
        uStack_34 = uVar6;
      }
      uVar16 = local_178._8_8_;
      if ((undefined8 *)local_178._8_8_ != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_178._8_8_ + 8);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (*(code *)**(undefined8 **)local_178._8_8_)(local_178._8_8_);
          LOCK();
          piVar2 = (int *)(uVar16 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*(longlong *)local_178._8_8_ + 8))(local_178._8_8_,1);
          }
        }
      }
      TBaseMulticastDelegate<void>::Broadcast(lVar15 + 8);
    }
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      plVar26 = plStack_100 + 1;
      lVar24 = *plVar26;
      *(int *)plVar26 = (int)*plVar26 + -1;
      UNLOCK();
      if ((int)lVar24 == 1) {
        (**(code **)*plStack_100)(plStack_100);
        LOCK();
        piVar2 = (int *)((longlong)plStack_100 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plStack_100 + 8))(plStack_100,1);
        }
      }
    }
  }
  lVar24 = local_1b8 + (longlong)(int)local_1b0 * 0x18;
  pppuVar10 = &local_168;
  lVar19 = lVar15;
  lVar17 = local_1b8;
  pppuVar7 = local_f8;
  lVar25 = local_f0;
  do {
    local_f0 = lVar19;
    local_f8 = pppuVar10;
    if (lVar17 == lVar24) {
      local_f8 = pppuVar7;
      local_f0 = lVar25;
      if (local_150 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_238 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_1d8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if ((int)local_1b0 != 0) {
        plVar26 = (longlong *)(local_1b8 + 8);
        iVar14 = (int)local_1b0;
        do {
          if (*plVar26 != 0) {
            FMemory::Free();
          }
          plVar26 = plVar26 + 3;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      if (local_1b8 != 0) {
        FMemory::Free(local_1b8);
      }
      if (local_228 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_218 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return;
    }
    puVar18 = (undefined8 *)FName::ToString(lVar17,local_60);
    if (*(int *)(puVar18 + 1) == 0) {
      puVar28 = &DAT_143f3eda8;
    }
    else {
      puVar28 = (undefined2 *)*puVar18;
    }
    FString::PrintfImpl(local_70,L"\'%s\' asset group",puVar28);
    local_200 = *(int *)(lVar17 + 0x10);
    lVar25 = (longlong)local_200;
    pvVar4 = *(void **)(lVar17 + 8);
    local_208 = (undefined2 *)0x0;
    if (local_200 == 0) {
      local_1fc = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_208,local_200,0);
      _guard_xfg_dispatch_icall_nop(local_208,pvVar4,lVar25 * 2);
    }
    if ((param_1 & 4) == 0) {
      bVar13 = param_1 & 2;
      if ((param_1 & 8) != 0) {
        bVar13 = bVar13 | 8;
      }
    }
    else {
      bVar13 = 4;
    }
    bVar12 = bVar13 | 0x10;
    if ((param_1 & 0x10) == 0) {
      bVar12 = bVar13;
    }
    lVar25 = DAT_1468b5998;
    if (DAT_1468b5998 == 0) {
      lVar19 = operator_new(0x110);
      lVar25 = 0;
      if (lVar19 != 0) {
        lVar25 = FUN_1415f3b10(lVar19);
      }
    }
    DAT_1468b5998 = lVar25;
    FUN_14160a960(DAT_1468b5998,&local_168,bVar12);
    FUN_1415f9ba0(&local_f8,&local_80,lVar17 + 8);
    FUN_1415f9ba0(&local_f8,&local_90,&local_238);
    iVar14 = local_88;
    puVar28 = local_90;
    if (local_78 < 2) {
      if (local_88 < 2) {
        if (local_160 < 1) {
          ppuVar20 = &local_238;
        }
        else {
          ppuVar20 = local_168;
          if (&local_208 == local_168) goto LAB_1415fc059;
        }
        iVar14 = *(int *)(ppuVar20 + 1);
        puVar22 = *ppuVar20;
        local_200 = iVar14;
        if ((iVar14 != 0) || (local_1fc != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_208,iVar14);
          goto LAB_1415fc049;
        }
      }
      else {
        local_200 = local_88;
        if ((local_88 != 0) || (local_1fc != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_208,local_88);
          puVar22 = puVar28;
LAB_1415fc049:
          _guard_xfg_dispatch_icall_nop(local_208,puVar22,(longlong)iVar14 * 2);
        }
      }
    }
LAB_1415fc059:
    if (puVar28 != (undefined2 *)0x0) {
      FMemory::Free(puVar28);
    }
    ppuVar20 = local_168;
    iVar14 = local_160;
    if (local_80 != 0) {
      FMemory::Free();
      ppuVar20 = local_168;
      iVar14 = local_160;
    }
    for (; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*ppuVar20 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      ppuVar20 = ppuVar20 + 2;
    }
    if (local_168 != (undefined2 **)0x0) {
      FMemory::Free();
    }
    if (local_70[0] != 0) {
      FMemory::Free();
    }
    if (local_60[0] != 0) {
      FMemory::Free();
    }
    puVar28 = &DAT_143f3eda8;
    if (local_230 != 0) {
      puVar28 = local_238;
    }
    puVar22 = &DAT_143f3eda8;
    if (local_200 != 0) {
      puVar22 = local_208;
    }
    iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar22,puVar28);
    if (iVar14 != 0) {
      FUN_141617cf0(lVar15,lVar17,&local_208);
    }
    if (local_208 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    lVar17 = lVar17 + 0x18;
    pppuVar10 = local_f8;
    lVar19 = local_f0;
    pppuVar7 = local_f8;
    lVar25 = local_f0;
  } while( true );
}



// FUNCTION 1415fc1e0 AsArray body=126 status=ok
// SIG undefined AsArray(void)

undefined8 * FLocMetadataValue::AsArray(undefined8 param_1,undefined8 *param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Array",0xc);
  ErrorMessage(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free(local_18[0]);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1415fc260 AsArray body=135 status=ok
// SIG undefined AsArray(void)

undefined8 * FLocMetadataValueArray::AsArray(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  *param_2 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  puVar3 = *(undefined8 **)(param_1 + 8);
  *(int *)(param_2 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar4,0);
  puVar2 = (undefined8 *)*param_2;
  do {
    *puVar2 = *puVar3;
    lVar1 = puVar3[1];
    puVar2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return param_2;
}



// FUNCTION 1415fc2f0 AsBool body=99 status=ok
// SIG undefined AsBool(void)

ulonglong FLocMetadataValue::AsBool(undefined8 param_1)

{
  ulonglong uVar1;
  longlong local_18 [2];
  
  local_18[1] = 8;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Boolean",0x10);
  uVar1 = ErrorMessage(param_1,local_18);
  if (local_18[0] != 0) {
    uVar1 = FMemory::Free(local_18[0]);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1415fc360 AsCultureInvariant body=27 status=ok
// SIG undefined AsCultureInvariant(void)

longlong FText::AsCultureInvariant(longlong param_1)

{
  FUN_1415f0740();
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  return param_1;
}



// FUNCTION 1415fc380 AsCultureInvariant body=131 status=ok
// SIG undefined AsCultureInvariant(void)

longlong FText::AsCultureInvariant(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_10;
  _Src = (void *)*param_2;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_1415f0740(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  return param_1;
}



// FUNCTION 1415fc410 AsCurrency body=33 status=ok
// SIG undefined AsCurrency(void)

undefined8 FText::AsCurrency(undefined8 param_1)

{
  AsCurrencyTemplate<int,int>();
  return param_1;
}



// FUNCTION 1415fc440 AsCurrency body=33 status=ok
// SIG undefined AsCurrency(void)

undefined8 FText::AsCurrency(undefined8 param_1)

{
  AsCurrencyTemplate<float,float>();
  return param_1;
}



// FUNCTION 1415fc470 AsCurrencyBase body=593 status=ok
// SIG undefined AsCurrencyBase(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FText::AsCurrencyBase
                   (longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  float fVar10;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  longlong *local_1a8;
  longlong local_1a0 [3];
  longlong *local_188;
  longlong *plStack_180;
  undefined4 local_178;
  longlong local_170;
  longlong local_168;
  longlong *local_158;
  longlong *plStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_128 [2];
  double local_120;
  undefined1 local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [112];
  longlong local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  bVar9 = false;
  local_178 = 0;
  local_1a8 = param_2;
  lVar5 = FInternationalization::Get();
  lVar6 = *param_4;
  plVar8 = local_1a8;
  if (lVar6 == 0) {
    plVar8 = *(longlong **)(lVar5 + 0x40);
    lVar6 = *(longlong *)(lVar5 + 0x38);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
  }
  if ((bVar9) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  lVar6 = FUN_1415da670(lVar6,param_3);
  dVar4 = (double)(longlong)local_1a8;
  fVar10 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)*(int *)(lVar6 + 0xa0));
  local_1a0[0] = 0;
  local_1a0[1] = 0;
  local_148 = *(undefined8 *)(lVar6 + 0x8c);
  uStack_140 = *(undefined8 *)(lVar6 + 0x94);
  local_138 = *(undefined8 *)(lVar6 + 0x9c);
  FastDecimalFormat::Internal::FractionalToString();
  local_170 = *param_4;
  local_168 = param_4[1];
  if (local_168 != 0) {
    LOCK();
    *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
    UNLOCK();
  }
  local_128[0] = 3;
  local_100 = 0;
  local_120 = dVar4 / (double)fVar10;
  uVar7 = FString::FString(local_f8,param_3);
  local_1b8 = &local_170;
  uVar7 = FTextHistory_AsCurrency::FTextHistory_AsCurrency(local_e8,local_128,uVar7,0);
  plStack_180 = (longlong *)
                SharedPointerInternals::
                NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsCurrency>,FString,FTextHistory_AsCurrency>
                          (local_1a0,uVar7);
  local_188 = plStack_180 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_188,local_188,local_188);
  local_158 = local_188;
  plStack_150 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
    UNLOCK();
  }
  FText(param_1,&local_158);
  plVar8 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_180 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_180)(plStack_180);
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
  if (local_78 != 0) {
    FMemory::Free();
  }
  FTextHistory_FormatNumber::~FTextHistory_FormatNumber(local_e8);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (local_1a0[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415fc6d0 FUN_1415fc6d0 body=611 status=ok
// SIG undefined FUN_1415fc6d0(void)

longlong FUN_1415fc6d0(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                      longlong *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong local_a8 [2];
  longlong *local_98;
  longlong *plStack_90;
  undefined1 local_88 [16];
  undefined **local_78;
  undefined2 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong *local_40;
  
  bVar8 = false;
  lVar3 = FInternationalization::Get();
  lVar9 = *param_5;
  plVar7 = param_2;
  if (lVar9 == 0) {
    plVar7 = *(longlong **)(lVar3 + 0x40);
    lVar9 = *(longlong *)(lVar3 + 0x38);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
  }
  if ((bVar8) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  FTextChronoFormatter::AsDate(local_a8,param_2,param_3,param_4,lVar9);
  plVar7 = (longlong *)param_5[1];
  lVar9 = *param_5;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FString::FString(local_88,param_4);
  lVar3 = *param_2;
  lVar6 = DAT_1468b5998;
  if (DAT_1468b5998 == 0) {
    lVar5 = operator_new(0x110);
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = FUN_1415f3b10(lVar5);
    }
  }
  DAT_1468b5998 = lVar6;
  local_70 = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  local_78 = &PTR__scalar_deleting_destructor__144cb56f0;
  local_58 = *plVar4;
  *plVar4 = 0;
  local_50 = (undefined4)plVar4[1];
  local_4c = *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  local_68 = lVar3;
  local_60 = param_3;
  local_48 = lVar9;
  local_40 = plVar7;
  if (*plVar4 != 0) {
    FMemory::Free();
  }
  plStack_b0 = (longlong *)FUN_1415ee640(local_a8,&local_78);
  local_b8 = plStack_b0 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
  local_98 = local_b8;
  plStack_90 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
    UNLOCK();
  }
  FText::FText(param_1,&local_98);
  plVar7 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_b0 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
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
  plVar7 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415fc940 FUN_1415fc940 body=624 status=ok
// SIG undefined FUN_1415fc940(void)

longlong FUN_1415fc940(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                      undefined8 param_5,longlong *param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong local_a8 [2];
  longlong *local_98;
  longlong *plStack_90;
  undefined1 local_88 [16];
  undefined **local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong *local_40;
  
  bVar8 = false;
  lVar4 = FInternationalization::Get();
  lVar9 = *param_6;
  plVar7 = param_6;
  if (lVar9 == 0) {
    plVar7 = *(longlong **)(lVar4 + 0x40);
    lVar9 = *(longlong *)(lVar4 + 0x38);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
  }
  if ((bVar8) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  FTextChronoFormatter::AsDateTime(local_a8,param_2,param_3,param_4,param_5,lVar9);
  plVar7 = (longlong *)param_6[1];
  lVar9 = *param_6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)FString::FString(local_88,param_5);
  uVar3 = *param_2;
  lVar4 = DAT_1468b5998;
  if (DAT_1468b5998 == 0) {
    lVar6 = operator_new(0x110);
    lVar4 = 0;
    if (lVar6 != 0) {
      lVar4 = FUN_1415f3b10(lVar6);
    }
  }
  DAT_1468b5998 = lVar4;
  local_70 = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  local_78 = &PTR__scalar_deleting_destructor__144cb57a0;
  local_58 = *plVar5;
  *plVar5 = 0;
  local_50 = (undefined4)plVar5[1];
  local_4c = *(undefined4 *)((longlong)plVar5 + 0xc);
  plVar5[1] = 0;
  local_68 = uVar3;
  local_60 = param_3;
  local_5c = param_4;
  local_48 = lVar9;
  local_40 = plVar7;
  if (*plVar5 != 0) {
    FMemory::Free();
  }
  plStack_b0 = (longlong *)
               SharedPointerInternals::
               NewIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsDateTime>,FString,FTextHistory_AsDateTime>
                         (local_a8,&local_78);
  local_b8 = plStack_b0 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
  local_98 = local_b8;
  plStack_90 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
    UNLOCK();
  }
  FText::FText(param_1,&local_98);
  plVar7 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_b0 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
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
  plVar7 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415fcbb0 AsNumber body=23 status=ok
// SIG undefined AsNumber(void)

undefined8 FText::AsNumber(undefined8 param_1)

{
  AsNumberTemplate<unsigned_char,unsigned_char>();
  return param_1;
}



// FUNCTION 1415fcbd0 AsNumber body=23 status=ok
// SIG undefined AsNumber(void)

undefined8 FText::AsNumber(undefined8 param_1)

{
  AsNumberTemplate<int,int>();
  return param_1;
}



// FUNCTION 1415fcbf0 AsNumber body=23 status=ok
// SIG undefined AsNumber(void)

undefined8 FText::AsNumber(undefined8 param_1)

{
  AsNumberTemplate<unsigned_int,__int64>();
  return param_1;
}



// FUNCTION 1415fcc10 AsNumber body=23 status=ok
// SIG undefined AsNumber(void)

undefined8 FText::AsNumber(undefined8 param_1)

{
  AsNumberTemplate<float,float>();
  return param_1;
}



// FUNCTION 1415fcc30 AsObject body=126 status=ok
// SIG undefined AsObject(void)

undefined8 * FLocMetadataValue::AsObject(undefined8 param_1,undefined8 *param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 7;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Object",0xe);
  ErrorMessage(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free(local_18[0]);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}


