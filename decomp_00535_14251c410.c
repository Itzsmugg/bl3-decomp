// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14251c410 Conv_ColorToString body=83 status=ok
// SIG undefined Conv_ColorToString(void)

undefined8 UKismetStringLibrary::Conv_ColorToString(undefined8 param_1,float *param_2)

{
  FString::PrintfImpl((double)param_2[3],L"(R=%f,G=%f,B=%f,A=%f)",(double)*param_2,
                      (double)param_2[1],(double)param_2[2],(double)param_2[3]);
  return param_1;
}



// FUNCTION 14251c470 Conv_ColorToText body=1082 status=ok
// SIG undefined Conv_ColorToText(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 UKismetTextLibrary::Conv_ColorToText(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_218 [32];
  longlong local_1f8 [8];
  undefined1 local_1b8 [4];
  undefined1 local_1b4 [4];
  undefined1 local_1b0 [4];
  undefined1 local_1ac [4];
  longlong *local_1a8;
  undefined4 *local_1a0;
  longlong *local_198;
  undefined4 *local_190;
  longlong *local_188;
  undefined4 *local_180;
  longlong *local_178;
  undefined4 *local_170;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [24];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [2];
  undefined4 local_e0;
  longlong *local_d0;
  char local_c0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  longlong *local_a0;
  char local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  longlong *local_70;
  char local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_e0 = *param_2;
  local_138 = 0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c0 = '\0';
  local_1f8[0] = 0;
  local_e8[0] = 2;
  local_1f8[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f8,0);
  FGenericPlatformString::Memcpy(local_1f8[0],&DAT_1450e222c,4);
  local_1a8 = local_1f8;
  local_1a0 = local_e8;
  FUN_1407484b0(&local_138,local_1b8,&local_1a8,0);
  if (local_1f8[0] != 0) {
    FMemory::Free();
  }
  if (local_c0 != '\0') {
    local_c0 = '\0';
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
  local_b0 = param_2[1];
  local_b8[0] = 2;
  local_90 = '\0';
  local_1f8[2] = 0;
  local_1f8[3] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f8 + 2,0);
  FGenericPlatformString::Memcpy(local_1f8[2],&DAT_1450e224c,4);
  local_198 = local_1f8 + 2;
  local_190 = local_b8;
  FUN_1407484b0(&local_138,local_1b4,&local_198,0);
  if (local_1f8[2] != 0) {
    FMemory::Free();
  }
  if (local_90 != '\0') {
    local_90 = '\0';
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
  local_80 = param_2[2];
  local_88[0] = 2;
  local_60 = '\0';
  local_1f8[4] = 0;
  local_1f8[5] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f8 + 4,0);
  FGenericPlatformString::Memcpy(local_1f8[4],&DAT_1450e227c,4);
  local_188 = local_1f8 + 4;
  local_180 = local_88;
  FUN_1407484b0(&local_138,local_1b0,&local_188,0);
  if (local_1f8[4] != 0) {
    FMemory::Free();
  }
  if (local_60 != '\0') {
    local_60 = '\0';
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
  local_50 = param_2[3];
  local_58[0] = 2;
  local_30 = '\0';
  local_1f8[6] = 0;
  local_1f8[7] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f8 + 6,0);
  FGenericPlatformString::Memcpy(local_1f8[6],&DAT_1450e238c,4);
  local_178 = local_1f8 + 6;
  local_170 = local_58;
  FUN_1407484b0(&local_138,local_1ac,&local_178,0);
  if (local_1f8[6] != 0) {
    FMemory::Free();
  }
  if (local_30 != '\0') {
    local_30 = '\0';
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
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_168,L"R={R} G={G} B={B} A={A}",L"Core",L"LinearColor");
  uVar5 = FTextFormat::FTextFormat(local_150,uVar5);
  FText::Format(param_1,uVar5,&local_138);
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_160 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar2 = (int *)((longlong)local_160 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
  local_f0 = 0;
  if (local_f8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_138);
  return param_1;
}



// FUNCTION 14251c8b0 Conv_FloatToString body=33 status=ok
// SIG undefined Conv_FloatToString(void)

undefined8 UKismetStringLibrary::Conv_FloatToString(undefined8 param_1,float param_2)

{
  FString::SanitizeFloat(param_1,(double)param_2,1);
  return param_1;
}



// FUNCTION 14251c8e0 Conv_FloatToText body=220 status=ok
// SIG undefined Conv_FloatToText(void)

undefined8
UKismetTextLibrary::Conv_FloatToText
          (undefined8 param_1,undefined4 param_2,byte *param_3,undefined1 param_4,undefined1 param_5
          ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_48;
  longlong *plStack_40;
  undefined1 local_38;
  undefined1 local_37;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_38);
  local_37 = param_5;
  local_34 = (uint)*param_3;
  local_30 = param_6;
  local_2c = param_7;
  local_28 = param_8;
  local_24 = param_9;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  local_38 = param_4;
  FText::AsNumber(param_1,param_2,&local_38,&local_48);
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_40)(plStack_40);
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
  return param_1;
}



// FUNCTION 14251c9c0 Conv_GuidToString body=35 status=ok
// SIG undefined Conv_GuidToString(void)

undefined8 UKismetGuidLibrary::Conv_GuidToString(undefined8 param_1,undefined8 param_2)

{
  FUN_141682af0(param_2,param_1,0);
  return param_1;
}



// FUNCTION 14251c9f0 Conv_IntToString body=33 status=ok
// SIG undefined Conv_IntToString(void)

undefined8 UKismetStringLibrary::Conv_IntToString(undefined8 param_1,undefined4 param_2)

{
  FString::PrintfImpl(param_1,&DAT_1450e13c4,param_2);
  return param_1;
}



// FUNCTION 14251ca20 Conv_IntToText body=183 status=ok
// SIG undefined Conv_IntToText(void)

undefined8
UKismetTextLibrary::Conv_IntToText
          (undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
          undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined4 local_20;
  undefined4 local_1c;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  local_20 = param_5;
  local_1c = param_6;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = param_3;
  local_27 = param_4;
  FText::AsNumber(param_1,param_2,&local_28,&local_38);
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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
  return param_1;
}



// FUNCTION 14251cae0 Conv_IntVectorToString body=44 status=ok
// SIG undefined Conv_IntVectorToString(void)

undefined8 UKismetStringLibrary::Conv_IntVectorToString(undefined8 param_1,undefined4 *param_2)

{
  FString::PrintfImpl(param_1,L"X=%d Y=%d Z=%d",*param_2,param_2[1],param_2[2]);
  return param_1;
}



// FUNCTION 14251cb10 Conv_NameToText body=63 status=ok
// SIG undefined Conv_NameToText(void)

undefined8 UKismetTextLibrary::Conv_NameToText(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  local_res10[0] = param_2;
  uVar1 = FName::ToString(local_res10,local_18);
  FText::AsCultureInvariant(param_1,uVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14251cb50 Conv_ObjectToSoftObjectReference body=237 status=ok
// SIG undefined Conv_ObjectToSoftObjectReference(void)

undefined4 *
UKismetSystemLibrary::Conv_ObjectToSoftObjectReference(undefined4 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_38 [32];
  
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
  if (param_2 == 0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[8] = 0;
    if (((int)param_1[9] < 0) && (param_1[9] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
    }
    if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 6) = 0;
    }
    param_1[2] = 0;
  }
  else {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_38,param_2);
    FSoftObjectPath::operator=(param_1 + 4,uVar1);
    FWeakObjectPtr::operator=(param_1,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[2] = DAT_1464b56f4;
  }
  return param_1;
}



// FUNCTION 14251cc40 Conv_ObjectToString body=211 status=ok
// SIG undefined Conv_ObjectToString(void)

longlong * UKismetStringLibrary::Conv_ObjectToString(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong local_res8;
  longlong local_28 [4];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  bVar2 = param_2 == 0;
  if (bVar2) {
    local_28[0] = 0;
    local_28[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"None",10);
    plVar1 = local_28;
  }
  else {
    local_res8 = *(ulonglong *)(param_2 + 0x18);
    FName::ToString(&local_res8,local_28 + 2);
    plVar1 = local_28 + 2;
  }
  *param_1 = *plVar1;
  *plVar1 = 0;
  *(int *)(param_1 + 1) = (int)plVar1[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  if (bVar2) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar2) && (local_28[2] != 0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14251cd20 Conv_ObjectToText body=96 status=ok
// SIG undefined Conv_ObjectToText(void)

undefined8 UKismetTextLibrary::Conv_ObjectToText(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (param_2 == 0) {
    FText::FText(param_1,&DAT_1468e2338);
  }
  else {
    local_res10[0] = *(undefined8 *)(param_2 + 0x18);
    FName::ToString(local_res10,local_18);
    FText::AsCultureInvariant(param_1,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14251cd80 Conv_PrimaryAssetIdToString body=213 status=ok
// SIG undefined Conv_PrimaryAssetIdToString(void)

undefined8 *
UKismetSystemLibrary::Conv_PrimaryAssetIdToString(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  if ((*param_2 == 0) || (param_2[1] == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  puVar1 = (undefined8 *)FName::ToString(param_2 + 1,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FName::ToString(param_2,&local_28);
  puVar3 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  FString::PrintfImpl(param_1,L"%s:%s",puVar3,puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18[0] == 0) {
    return param_1;
  }
  FMemory::Free();
  return param_1;
}



// FUNCTION 14251ce60 Conv_RotatorToString body=69 status=ok
// SIG undefined Conv_RotatorToString(void)

undefined8 UKismetStringLibrary::Conv_RotatorToString(undefined8 param_1,float *param_2)

{
  FString::PrintfImpl((double)param_2[2],L"P=%f Y=%f R=%f",(double)*param_2,(double)param_2[1],
                      (double)param_2[2]);
  return param_1;
}



// FUNCTION 14251ceb0 Conv_RotatorToText body=860 status=ok
// SIG undefined Conv_RotatorToText(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 UKismetTextLibrary::Conv_RotatorToText(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_1c8 [32];
  longlong local_1a8 [6];
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  undefined1 local_170 [8];
  longlong *local_168;
  undefined4 *local_160;
  longlong *local_158;
  undefined4 *local_150;
  longlong *local_148;
  undefined4 *local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [24];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  longlong *local_a0;
  char local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  longlong *local_70;
  char local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_b0 = *param_2;
  local_108 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_90 = '\0';
  local_1a8[0] = 0;
  local_b8[0] = 2;
  local_1a8[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a8,0);
  FGenericPlatformString::Memcpy(local_1a8[0],&DAT_1450e196c,4);
  local_168 = local_1a8;
  local_160 = local_b8;
  FUN_1407484b0(&local_108,local_178,&local_168,0);
  if (local_1a8[0] != 0) {
    FMemory::Free();
  }
  if (local_90 != '\0') {
    local_90 = '\0';
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
  local_80 = param_2[1];
  local_88[0] = 2;
  local_60 = '\0';
  local_1a8[2] = 0;
  local_1a8[3] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a8 + 2,0);
  FGenericPlatformString::Memcpy(local_1a8[2],&DAT_1450e1d8c,4);
  local_158 = local_1a8 + 2;
  local_150 = local_88;
  FUN_1407484b0(&local_108,local_174,&local_158,0);
  if (local_1a8[2] != 0) {
    FMemory::Free();
  }
  if (local_60 != '\0') {
    local_60 = '\0';
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
  local_50 = param_2[2];
  local_58[0] = 2;
  local_30 = '\0';
  local_1a8[4] = 0;
  local_1a8[5] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a8 + 4,0);
  FGenericPlatformString::Memcpy(local_1a8[4],&DAT_1450e1e84,4);
  local_148 = local_1a8 + 4;
  local_140 = local_58;
  FUN_1407484b0(&local_108,local_170,&local_148,0);
  if (local_1a8[4] != 0) {
    FMemory::Free();
  }
  if (local_30 != '\0') {
    local_30 = '\0';
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
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_138,L"P={P} Y={Y} R={R}",L"Core",L"Rotator");
  uVar5 = FTextFormat::FTextFormat(local_120,uVar5);
  FText::Format(param_1,uVar5,&local_108);
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
  local_c0 = 0;
  if (local_c8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_108);
  return param_1;
}



// FUNCTION 14251d210 Conv_SoftClassReferenceToClass body=254 status=ok
// SIG undefined Conv_SoftClassReferenceToClass(void)

longlong * UKismetSystemLibrary::Conv_SoftClassReferenceToClass(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FWeakObjectPtr::Get(param_2);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_2 + 8)) || (*(longlong *)(param_2 + 0x10) == 0))
    goto LAB_14251d2ee;
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_2,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_2 + 8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(param_2);
    if (lVar2 == 0) goto LAB_14251d2ee;
  }
  lVar3 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar4 = UObject::GetPrivateStaticClass();
    lVar3 = lVar2;
    do {
      if (lVar3 == lVar4) {
        *param_1 = lVar2;
        return param_1;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_14251d2ee:
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14251d310 Conv_SoftClassReferenceToString body=30 status=ok
// SIG undefined Conv_SoftClassReferenceToString(void)

undefined8
UKismetSystemLibrary::Conv_SoftClassReferenceToString(undefined8 param_1,longlong param_2)

{
  FSoftObjectPath::ToString(param_2 + 0x10,param_1);
  return param_1;
}



// FUNCTION 14251d330 Conv_SoftObjectReferenceToObject body=204 status=ok
// SIG undefined Conv_SoftObjectReferenceToObject(void)

longlong UKismetSystemLibrary::Conv_SoftObjectReferenceToObject(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get();
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 8)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_1,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(param_1);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = UObject::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  return lVar2;
}



// FUNCTION 14251d400 Conv_StringToColor body=228 status=ok
// SIG undefined Conv_StringToColor(void)

void UKismetStringLibrary::Conv_StringToColor
               (undefined8 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  
  param_2[3] = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  puVar4 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  cVar1 = FParse::Value(puVar2,&DAT_144cc8300,param_2);
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    cVar1 = FParse::Value(puVar2,&DAT_144cc8308,param_2 + 1);
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 1) == 0) {
        puVar2 = &DAT_143f3eda8;
      }
      else {
        puVar2 = (undefined2 *)*param_1;
      }
      cVar1 = FParse::Value(puVar2,&DAT_144cc8310,param_2 + 2);
      if (cVar1 != '\0') {
        uVar3 = 1;
        goto LAB_14251d4ac;
      }
    }
  }
  uVar3 = 0;
LAB_14251d4ac:
  if (*(int *)(param_1 + 1) != 0) {
    puVar4 = (undefined2 *)*param_1;
  }
  FParse::Value(puVar4,&DAT_144cc8318,param_2 + 3);
  *param_3 = uVar3;
  return;
}



// FUNCTION 14251d4f0 Conv_StringToFloat body=50 status=ok
// SIG undefined Conv_StringToFloat(void)

float UKismetStringLibrary::Conv_StringToFloat(undefined8 *param_1)

{
  double dVar1;
  
  if (*(int *)(param_1 + 1) != 0) {
    dVar1 = _wtof((wchar_t *)*param_1);
    return (float)dVar1;
  }
  dVar1 = _wtof(L"");
  return (float)dVar1;
}



// FUNCTION 14251d530 Conv_StringToInt body=30 status=ok
// SIG undefined Conv_StringToInt(void)

void UKismetStringLibrary::Conv_StringToInt(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014251d539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _wtoi((wchar_t *)*param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014251d547. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _wtoi(L"");
  return;
}



// FUNCTION 14251d550 Conv_StringToName body=47 status=ok
// SIG undefined Conv_StringToName(void)

undefined8 UKismetStringLibrary::Conv_StringToName(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FName::FName(param_1,puVar1,1);
  return param_1;
}



// FUNCTION 14251d580 FUN_14251d580 body=188 status=ok
// SIG undefined FUN_14251d580(void)

void FUN_14251d580(undefined8 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  param_2[2] = 0;
  param_2[1] = 0;
  puVar3 = &DAT_143f3eda8;
  *param_2 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  cVar1 = FParse::Value(puVar2,&DAT_144cc8360,param_2);
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    cVar1 = FParse::Value(puVar2,&DAT_144cc8328,param_2 + 1);
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 1) != 0) {
        puVar3 = (undefined2 *)*param_1;
      }
      cVar1 = FParse::Value(puVar3,&DAT_144cc8300,param_2 + 2);
      if (cVar1 != '\0') {
        *param_3 = 1;
        return;
      }
    }
  }
  *param_3 = 0;
  return;
}



// FUNCTION 14251d640 Conv_StringToText body=23 status=ok
// SIG undefined Conv_StringToText(void)

undefined8 UKismetTextLibrary::Conv_StringToText(undefined8 param_1)

{
  FText::AsCultureInvariant();
  return param_1;
}



// FUNCTION 14251d660 Conv_StringToVector2D body=138 status=ok
// SIG undefined Conv_StringToVector2D(void)

void UKismetStringLibrary::Conv_StringToVector2D
               (undefined8 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  param_2[1] = 0;
  puVar3 = &DAT_143f3eda8;
  *param_2 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  cVar1 = FParse::Value(puVar2,&DAT_144cc8320,param_2);
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 1) != 0) {
      puVar3 = (undefined2 *)*param_1;
    }
    cVar1 = FParse::Value(puVar3,&DAT_144cc8328,param_2 + 1);
    if (cVar1 != '\0') {
      *param_3 = 1;
      return;
    }
  }
  *param_3 = 0;
  return;
}



// FUNCTION 14251d6f0 FUN_14251d6f0 body=188 status=ok
// SIG undefined FUN_14251d6f0(void)

void FUN_14251d6f0(undefined8 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  param_2[2] = 0;
  param_2[1] = 0;
  puVar3 = &DAT_143f3eda8;
  *param_2 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  cVar1 = FParse::Value(puVar2,&DAT_144cc8320,param_2);
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    cVar1 = FParse::Value(puVar2,&DAT_144cc8328,param_2 + 1);
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 1) != 0) {
        puVar3 = (undefined2 *)*param_1;
      }
      cVar1 = FParse::Value(puVar3,&DAT_144cc8330,param_2 + 2);
      if (cVar1 != '\0') {
        *param_3 = 1;
        return;
      }
    }
  }
  *param_3 = 0;
  return;
}



// FUNCTION 14251d7b0 Conv_TextToString body=37 status=ok
// SIG undefined Conv_TextToString(void)

undefined8 UKismetTextLibrary::Conv_TextToString(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FText::ToString(param_2);
  FString::FString(param_1,uVar1);
  return param_1;
}



// FUNCTION 14251d7e0 Conv_TransformToString body=406 status=ok
// SIG undefined Conv_TransformToString(void)

undefined8 UKismetStringLibrary::Conv_TransformToString(undefined8 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  float local_58;
  float local_54;
  float local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)(float)param_2[8],
                      (double)(float)param_2[9],(double)(float)param_2[10]);
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  puVar3 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  FQuat::Rotator(&local_18,&local_58);
  FString::PrintfImpl(&local_38,L"P=%f Y=%f R=%f",(double)local_58,(double)local_54,(double)local_50
                     );
  puVar1 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar1 = local_38;
  }
  FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)(float)param_2[4],
                      (double)(float)param_2[5],(double)(float)param_2[6]);
  puVar2 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar2 = local_48;
  }
  FString::PrintfImpl(param_1,L"Translation: %s Rotation: %s Scale %s",puVar2,puVar1,puVar3);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14251d980 Conv_TransformToText body=1312 status=ok
// SIG undefined Conv_TransformToText(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 UKismetTextLibrary::Conv_TransformToText(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_2b8 [32];
  longlong local_298 [6];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined1 local_258 [4];
  undefined1 local_254 [4];
  undefined1 local_250 [8];
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined4 local_200;
  longlong *local_1f8;
  undefined4 *local_1f0;
  longlong *local_1e8;
  undefined4 *local_1e0;
  longlong *local_1d8;
  undefined4 *local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  local_240 = param_2[6];
  uStack_14c = param_2[7];
  local_1c8 = *param_2;
  uStack_1c4 = param_2[1];
  uStack_1c0 = param_2[2];
  uStack_1bc = param_2[3];
  local_158 = uVar4;
  uStack_154 = uVar5;
  uStack_150 = local_240;
  FQuat::Rotator(&local_1c8,&local_228);
  local_268 = param_2[8];
  uStack_264 = param_2[9];
  local_260 = param_2[10];
  uStack_13c = param_2[0xb];
  local_128 = 0;
  local_120 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_230 = local_240;
  local_248 = uVar4;
  uStack_244 = uVar5;
  local_238 = uVar4;
  uStack_234 = uVar5;
  local_148 = local_268;
  uStack_144 = uStack_264;
  uStack_140 = local_260;
  uVar7 = Conv_VectorToText(local_1b8,&local_238);
  local_d8[0] = 4;
  FText::FText(local_c8,uVar7);
  local_b0 = '\x01';
  local_298[0] = 0;
  local_298[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_298,0);
  FGenericPlatformString::Memcpy(local_298[0],&DAT_1450e1f3c,4);
  local_1f8 = local_298;
  local_1f0 = local_d8;
  FUN_1407484b0(&local_128,local_258,&local_1f8,0);
  if (local_298[0] != 0) {
    FMemory::Free();
  }
  if (local_b0 != '\0') {
    local_b0 = '\0';
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1b0 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar2 = (int *)((longlong)local_1b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1b0 + 8))(local_1b0,1);
      }
    }
  }
  local_218 = local_228;
  local_210 = local_220;
  uVar7 = Conv_RotatorToText(local_1a0,&local_218);
  local_a8[0] = 4;
  FText::FText(local_98,uVar7);
  local_80 = '\x01';
  local_298[2] = 0;
  local_298[3] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_298 + 2,0);
  FGenericPlatformString::Memcpy(local_298[2],&DAT_1450e21e4,4);
  local_1e8 = local_298 + 2;
  local_1e0 = local_a8;
  FUN_1407484b0(&local_128,local_254,&local_1e8,0);
  if (local_298[2] != 0) {
    FMemory::Free();
  }
  if (local_80 != '\0') {
    local_80 = '\0';
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_198 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar2 = (int *)((longlong)local_198 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_198 + 8))(local_198,1);
      }
    }
  }
  local_208 = CONCAT44(uStack_264,local_268);
  local_200 = local_260;
  uVar7 = Conv_VectorToText(local_188,&local_208);
  local_78[0] = 4;
  FText::FText(local_68,uVar7);
  local_50 = '\x01';
  local_298[4] = 0;
  local_298[5] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_298 + 4,0);
  FGenericPlatformString::Memcpy(local_298[4],&DAT_1450e220c,4);
  local_1d8 = local_298 + 4;
  local_1d0 = local_78;
  FUN_1407484b0(&local_128,local_250,&local_1d8,0);
  if (local_298[4] != 0) {
    FMemory::Free();
  }
  if (local_50 != '\0') {
    local_50 = '\0';
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_180 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar2 = (int *)((longlong)local_180 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_180 + 8))(local_180,1);
      }
    }
  }
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_170,L"Translation: {T} Rotation: {R} Scale: {S}",L"Core",L"Transform");
  uVar7 = FTextFormat::FTextFormat(local_138,uVar7);
  FText::Format(param_1,uVar7,&local_128);
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_168 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar2 = (int *)((longlong)local_168 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_168 + 8))(local_168,1);
      }
    }
  }
  local_e0 = 0;
  if (local_e8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_128);
  return param_1;
}



// FUNCTION 14251dea0 Conv_Vector2dToString body=63 status=ok
// SIG undefined Conv_Vector2dToString(void)

undefined8 UKismetStringLibrary::Conv_Vector2dToString(undefined8 param_1,undefined8 param_2)

{
  float local_res8;
  float fStackX_c;
  
  fStackX_c = (float)((ulonglong)param_2 >> 0x20);
  local_res8 = (float)param_2;
  FString::PrintfImpl(param_1,L"X=%3.3f Y=%3.3f",(double)local_res8,(double)fStackX_c);
  return param_1;
}



// FUNCTION 14251dee0 Conv_Vector2dToText body=645 status=ok
// SIG undefined Conv_Vector2dToText(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 UKismetTextLibrary::Conv_Vector2dToText(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_178 [32];
  longlong local_158 [4];
  undefined8 local_138;
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  longlong *local_128;
  undefined4 *local_120;
  longlong *local_118;
  undefined4 *local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [24];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  longlong *local_70;
  char local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_138._0_4_ = (undefined4)param_2;
  local_80 = (undefined4)local_138;
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88[0] = 2;
  local_60 = '\0';
  local_158[0] = 0;
  local_158[1] = 2;
  local_138 = param_2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158,0);
  FGenericPlatformString::Memcpy(local_158[0],&DAT_1450e1704,4);
  local_128 = local_158;
  local_120 = local_88;
  FUN_1407484b0(&local_d8,local_130,&local_128,0);
  if (local_158[0] != 0) {
    FMemory::Free();
  }
  if (local_60 != '\0') {
    local_60 = '\0';
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
  local_50 = local_138._4_4_;
  local_58[0] = 2;
  local_30 = '\0';
  local_158[2] = 0;
  local_158[3] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 2,0);
  FGenericPlatformString::Memcpy(local_158[2],&DAT_1450e187c,4);
  local_118 = local_158 + 2;
  local_110 = local_58;
  FUN_1407484b0(&local_d8,local_12c,&local_118,0);
  if (local_158[2] != 0) {
    FMemory::Free();
  }
  if (local_30 != '\0') {
    local_30 = '\0';
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
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_108,L"X={X} Y={Y}",L"Core",L"Vector2");
  uVar5 = FTextFormat::FTextFormat(local_f0,uVar5);
  FText::Format(param_1,uVar5,&local_d8);
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
  local_90 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_d8);
  return param_1;
}



// FUNCTION 14251e170 Conv_VectorToString body=69 status=ok
// SIG undefined Conv_VectorToString(void)

undefined8 UKismetStringLibrary::Conv_VectorToString(undefined8 param_1,float *param_2)

{
  FString::PrintfImpl((double)param_2[2],L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*param_2,
                      (double)param_2[1],(double)param_2[2]);
  return param_1;
}



// FUNCTION 14251e1c0 Conv_VectorToText body=860 status=ok
// SIG undefined Conv_VectorToText(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 UKismetTextLibrary::Conv_VectorToText(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_1c8 [32];
  longlong local_1a8 [6];
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  undefined1 local_170 [8];
  longlong *local_168;
  undefined4 *local_160;
  longlong *local_158;
  undefined4 *local_150;
  longlong *local_148;
  undefined4 *local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [24];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  longlong *local_a0;
  char local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  longlong *local_70;
  char local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_b0 = *param_2;
  local_108 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_90 = '\0';
  local_1a8[0] = 0;
  local_b8[0] = 2;
  local_1a8[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a8,0);
  FGenericPlatformString::Memcpy(local_1a8[0],&DAT_1450e158c,4);
  local_168 = local_1a8;
  local_160 = local_b8;
  FUN_1407484b0(&local_108,local_178,&local_168,0);
  if (local_1a8[0] != 0) {
    FMemory::Free();
  }
  if (local_90 != '\0') {
    local_90 = '\0';
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
  local_80 = param_2[1];
  local_88[0] = 2;
  local_60 = '\0';
  local_1a8[2] = 0;
  local_1a8[3] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a8 + 2,0);
  FGenericPlatformString::Memcpy(local_1a8[2],&DAT_1450e15ec,4);
  local_158 = local_1a8 + 2;
  local_150 = local_88;
  FUN_1407484b0(&local_108,local_174,&local_158,0);
  if (local_1a8[2] != 0) {
    FMemory::Free();
  }
  if (local_60 != '\0') {
    local_60 = '\0';
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
  local_50 = param_2[2];
  local_58[0] = 2;
  local_30 = '\0';
  local_1a8[4] = 0;
  local_1a8[5] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a8 + 4,0);
  FGenericPlatformString::Memcpy(local_1a8[4],&DAT_1450e1684,4);
  local_148 = local_1a8 + 4;
  local_140 = local_58;
  FUN_1407484b0(&local_108,local_170,&local_148,0);
  if (local_1a8[4] != 0) {
    FMemory::Free();
  }
  if (local_30 != '\0') {
    local_30 = '\0';
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
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_138,L"X={X} Y={Y} Z={Z}",L"Core",L"Vector3");
  uVar5 = FTextFormat::FTextFormat(local_120,uVar5);
  FText::Format(param_1,uVar5,&local_108);
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
  local_c0 = 0;
  if (local_c8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_108);
  return param_1;
}



// FUNCTION 14251e520 ConvertRenderTargetToTexture2DEditorOnly body=238 status=ok
// SIG undefined ConvertRenderTargetToTexture2DEditorOnly(void)

void UKismetRenderingLibrary::ConvertRenderTargetToTexture2DEditorOnly(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [40];
  
  FName::FName(local_res20,"Blueprint",1);
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,
                     L"ConvertRenderTarget: Can\'t convert render target to texture2d at run time. "
                     ,L"KismetRenderingLibrary",
                     L"Convert to render target can\'t be used at run time.");
  uVar6 = FUN_14161fb50(local_30,local_res20);
  FMessageLog::Error(uVar6,local_58,uVar5);
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
  FMessageLog::~FMessageLog(local_30);
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
  return;
}



// FUNCTION 14251e610 FUN_14251e610 body=498 status=ok
// SIG undefined FUN_14251e610(void)

void FUN_14251e610(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 local_res18 [16];
  longlong local_48;
  int local_40;
  int local_3c;
  
  if ((DAT_1465332b0 != 0) && ((*(byte *)(param_1 + 0x206) & 4) == 0)) {
    iVar5 = 0;
    lVar6 = 0;
    iVar7 = 0;
    iVar2 = *(int *)(param_1 + 0xa8) + -1;
    lVar8 = (longlong)iVar2;
    local_48 = 0;
    local_3c = 0;
    if (-1 < iVar2) {
      do {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + lVar8 * 8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar1 = (**(code **)(*plVar3 + 0x20))(plVar3), cVar1 == '\0')) {
          iVar2 = *(int *)(param_1 + 0xb8);
          *(int *)(param_1 + 0xb8) = iVar2 + 1;
          if (*(int *)(param_1 + 0xbc) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xb0,iVar2);
          }
          *(longlong **)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 8) = plVar3;
        }
        else {
          local_40 = iVar5 + 1;
          if (iVar7 < local_40) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar5);
            lVar6 = local_48;
            iVar7 = local_3c;
          }
          *(longlong **)(lVar6 + (longlong)iVar5 * 8) = plVar3;
          iVar5 = local_40;
        }
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
      if (iVar5 != 0) {
        plVar3 = (longlong *)FName::FName(local_res18,L"ActorCluster",1);
        lVar8 = *plVar3;
        if (lVar8 == 0) {
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        uVar4 = ULevelActorContainer::GetPrivateStaticClass();
        lVar8 = FUN_1417985e0(uVar4,param_1,lVar8,0x40,0,0,0,0,0);
        *(longlong *)(param_1 + 0xe0) = lVar8;
        plVar3 = (longlong *)(lVar8 + 0x28);
        if (plVar3 != &local_48) {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          *plVar3 = lVar6;
          *(int *)(lVar8 + 0x30) = iVar5;
          *(int *)(lVar8 + 0x34) = iVar7;
          lVar6 = 0;
        }
        (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))();
      }
    }
    *(byte *)(param_1 + 0x206) = *(byte *)(param_1 + 0x206) | 4;
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  return;
}



// FUNCTION 14251e810 FUN_14251e810 body=84 status=ok
// SIG undefined FUN_14251e810(void)

void FUN_14251e810(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1450e8a20;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1450e8a68;
  }
  return;
}



// FUNCTION 14251e870 FUN_14251e870 body=84 status=ok
// SIG undefined FUN_14251e870(void)

void FUN_14251e870(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1450e8ab0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1450e8af8;
  }
  return;
}



// FUNCTION 14251e8d0 FUN_14251e8d0 body=84 status=ok
// SIG undefined FUN_14251e8d0(void)

void FUN_14251e8d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1450e8b40;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1450e8b88;
  }
  return;
}



// FUNCTION 14251e930 FUN_14251e930 body=84 status=ok
// SIG undefined FUN_14251e930(void)

void FUN_14251e930(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1450e8bd0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1450e8c18;
  }
  return;
}



// FUNCTION 14251e990 CreateCopyForUndoBuffer body=15 status=ok
// SIG undefined CreateCopyForUndoBuffer(void)

void UKismetSystemLibrary::CreateCopyForUndoBuffer(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014251e99a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x70))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14251e9a0 CreateDynamicMaterialInstance body=132 status=ok
// SIG undefined CreateDynamicMaterialInstance(void)

longlong UKismetMaterialLibrary::CreateDynamicMaterialInstance
                   (longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,0);
  if ((lVar2 == 0) ||
     ((*(char *)(lVar2 + 0x70d) == '\0' && (cVar1 = UWorld::IsGameWorld(lVar2), cVar1 != '\0')))) {
    param_1 = 0;
  }
  lVar2 = UMaterialInstanceDynamic::Create(param_2,param_1,param_3);
  if (param_1 != 0) {
    return lVar2;
  }
  *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 0x40;
  return lVar2;
}



// FUNCTION 14251ea30 CreateNewKey body=114 status=ok
// SIG undefined CreateNewKey(void)

undefined4 UInterpTrackFloatBase::CreateNewKey(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  local_res8[0] = FInterpCurve<float>::Eval(param_1 + 0x48,param_2,local_res8);
  uVar1 = FInterpCurve<float>::AddPoint(param_1 + 0x48,param_2,local_res8);
  FInterpCurve<float>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x60),1);
  return uVar1;
}



// FUNCTION 14251eab0 CreateNewKey body=115 status=ok
// SIG undefined CreateNewKey(void)

undefined4 UInterpTrackLinearColorBase::CreateNewKey(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [32];
  
  local_38 = 0;
  uStack_30 = 0;
  FInterpCurve<FLinearColor>::Eval(param_1 + 0x48,local_28,param_2,&local_38);
  uVar1 = FInterpCurve<FLinearColor>::AddPoint(param_1 + 0x48,param_2,local_28);
  FInterpCurve<FLinearColor>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x60),1);
  return uVar1;
}



// FUNCTION 14251eb30 CreateNewKey body=197 status=ok
// SIG undefined CreateNewKey(void)

undefined4 UInterpTrackMove::CreateNewKey(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 local_res8;
  undefined1 local_28 [32];
  
  FInterpCurve<FVector>::Eval(param_1 + 0x48,local_28,param_2,&DAT_1468b5d90);
  uVar1 = FInterpCurve<FVector>::AddPoint(param_1 + 0x48,param_2,local_28);
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x90),1);
  FInterpCurve<FVector>::Eval(param_1 + 0x60,local_28,param_2,&DAT_1468b5d90);
  FInterpCurve<FVector>::AddPoint(param_1 + 0x60,param_2,local_28);
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x60,*(undefined4 *)(param_1 + 0x94),1);
  local_res8 = 0;
  FInterpLookupTrack::AddPoint(param_1 + 0x78,param_2,&local_res8);
  return uVar1;
}



// FUNCTION 14251ec00 CreateNewKey body=138 status=ok
// SIG undefined CreateNewKey(void)

undefined4 UInterpTrackMoveAxis::CreateNewKey(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ulonglong local_res8;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  uVar1 = FInterpCurve<float>::Eval(param_1 + 0x48,param_2,&local_res8);
  local_res8 = CONCAT44(local_res8._4_4_,uVar1);
  uVar1 = FInterpCurve<float>::AddPoint(param_1 + 0x48,param_2,&local_res8);
  FInterpCurve<float>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x60),1);
  local_res8 = 0;
  FInterpLookupTrack::AddPoint(param_1 + 0x70,param_2,&local_res8);
  return uVar1;
}



// FUNCTION 14251ec90 CreateNewKey body=109 status=ok
// SIG undefined CreateNewKey(void)

undefined4 UInterpTrackVectorBase::CreateNewKey(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_28 [32];
  
  FInterpCurve<FVector>::Eval(param_1 + 0x48,local_28,param_2,&DAT_1468b5d90);
  uVar1 = FInterpCurve<FVector>::AddPoint(param_1 + 0x48,param_2,local_28);
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x60),1);
  return uVar1;
}



// FUNCTION 14251ed00 FUN_14251ed00 body=353 status=ok
// SIG undefined FUN_14251ed00(void)

longlong FUN_14251ed00(undefined8 param_1,int param_2,int param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (((0 < param_2) && (0 < param_3)) && (lVar1 != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468509e4) &&
       (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
      uVar2 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar2,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
    if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar2 = UTexture2D::GetPrivateStaticClass();
      lVar1 = FUN_1417985e0(uVar2,param_1,0,0,0,0,0,0,0);
      *(undefined1 *)(lVar1 + 0xe1) = param_4;
      FUN_14287a580(lVar1,param_2,param_3);
      FUN_142894320(lVar1,1);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14251ee70 FUN_14251ee70 body=327 status=ok
// SIG undefined FUN_14251ee70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14251ee70(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_24;
  undefined4 local_20;
  longlong local_18;
  
  if ((((param_2 != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*param_2 + 0x1c0))(param_2), cVar4 != '\0')) &&
      (cVar4 = (**(code **)(*param_2 + 0x1c8))(param_2), cVar4 != '\0')) &&
     (*(char *)((longlong)param_2 + 0x95) != '\0')) {
    lVar2 = param_2[3];
    lVar5 = param_2[0x2d];
    local_24 = 0xffffffff;
    local_20 = 0;
    if (lVar5 == 0) {
      local_48 = _DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
    }
    else {
      local_48 = *(undefined8 *)(lVar5 + 0x220);
      local_40 = *(undefined4 *)(lVar5 + 0x228);
    }
    FWeakObjectPtr::operator=(&local_24,param_2[4]);
    local_18 = param_2[2];
    iVar1 = *(int *)(param_1 + 0x288);
    lVar5 = (longlong)iVar1;
    *(int *)(param_1 + 0x288) = iVar1 + 1;
    if (*(int *)(param_1 + 0x28c) < iVar1 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x280),iVar1);
    }
    lVar3 = *(longlong *)(param_1 + 0x280);
    *(longlong *)(lVar3 + lVar5 * 0x28) = lVar2;
    *(undefined8 *)(lVar3 + 8 + lVar5 * 0x28) = local_48;
    *(undefined4 *)(lVar3 + 0x10 + lVar5 * 0x28) = local_40;
    *(undefined4 *)(lVar3 + 0x14 + lVar5 * 0x28) = local_24;
    *(undefined4 *)(lVar3 + 0x18 + lVar5 * 0x28) = local_20;
    *(longlong *)(lVar3 + 0x20 + lVar5 * 0x28) = local_18;
  }
  return;
}



// FUNCTION 14251efc0 FUN_14251efc0 body=332 status=ok
// SIG undefined FUN_14251efc0(void)

undefined8 * FUN_14251efc0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1450e89f0;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14251f110 FUN_14251f110 body=332 status=ok
// SIG undefined FUN_14251f110(void)

undefined8 * FUN_14251f110(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1450e8a00;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14251f260 FUN_14251f260 body=332 status=ok
// SIG undefined FUN_14251f260(void)

undefined8 * FUN_14251f260(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1450e89e0;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14251f3b0 CreateVectorFromYawPitch body=675 status=ok
// SIG undefined CreateVectorFromYawPitch(void)

float * UKismetMathLibrary::CreateVectorFromYawPitch
                  (float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  param_3 = param_3 * 0.017453292;
  if (param_3 < 0.0) {
    fVar1 = param_3 * 0.15915494 - 0.5;
  }
  else {
    fVar1 = param_3 * 0.15915494 + 0.5;
  }
  param_3 = param_3 - (float)(int)fVar1 * 6.2831855;
  if (param_3 <= 1.5707964) {
    if (param_3 < -1.5707964) {
      fVar3 = -3.1415927;
      goto LAB_14251f457;
    }
    fVar1 = 1.0;
  }
  else {
    fVar3 = 3.1415927;
LAB_14251f457:
    fVar1 = -1.0;
    param_3 = fVar3 - param_3;
  }
  param_2 = param_2 * 0.017453292;
  fVar3 = param_3 * param_3;
  fVar1 = (((((2.4760495e-05 - fVar3 * 2.6051615e-07) * fVar3 - 0.0013888378) * fVar3 + 0.041666638)
            * fVar3 - 0.5) * fVar3 + 1.0) * fVar1;
  if (param_2 < 0.0) {
    fVar2 = param_2 * 0.15915494 - 0.5;
  }
  else {
    fVar2 = param_2 * 0.15915494 + 0.5;
  }
  param_2 = param_2 - (float)(int)fVar2 * 6.2831855;
  if (param_2 <= 1.5707964) {
    fVar2 = fVar1;
    if (-1.5707964 <= param_2) goto LAB_14251f57e;
    param_2 = -3.1415927 - param_2;
  }
  else {
    param_2 = 3.1415927 - param_2;
  }
  fVar2 = -fVar1;
LAB_14251f57e:
  fVar4 = param_2 * param_2;
  param_1[2] = (((((2.7525562e-06 - fVar3 * 2.3889859e-08) * fVar3 - 0.00019840874) * fVar3 +
                 0.008333331) * fVar3 - 0.16666667) * fVar3 + 1.0) * param_3 * param_4;
  *param_1 = (((((2.4760495e-05 - fVar4 * 2.6051615e-07) * fVar4 - 0.0013888378) * fVar4 +
               0.041666638) * fVar4 - 0.5) * fVar4 + 1.0) * fVar2 * param_4;
  param_1[1] = (((((2.7525562e-06 - fVar4 * 2.3889859e-08) * fVar4 - 0.00019840874) * fVar4 +
                 0.008333331) * fVar4 - 0.16666667) * fVar4 + 1.0) * param_2 * fVar1 * param_4;
  return param_1;
}



// FUNCTION 14251f660 CullArray body=8 status=ok
// SIG undefined CullArray(void)

void UKismetStringLibrary::CullArray(undefined8 param_1,undefined8 param_2)

{
  FString::CullArray(param_2);
  return;
}



// FUNCTION 14251f670 Delay body=207 status=ok
// SIG undefined Delay(void)

void UKismetSystemLibrary::Delay(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 400) == 0) {
      lVar2 = lVar2 + 0x400;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 400) + 0x98);
    }
    lVar3 = FLatentActionManager::FindExistingAction<FDelayAction>
                      (lVar2,*(undefined8 *)(param_3 + 4),param_3[1]);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)operator_new(0x28);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        uVar1 = *(undefined8 *)(param_3 + 4);
        puVar4[2] = *(undefined8 *)(param_3 + 2);
        *(undefined4 *)(puVar4 + 3) = *param_3;
        *(undefined4 *)(puVar4 + 1) = param_2;
        *puVar4 = &PTR_FUN_1450e87d0;
        FWeakObjectPtr::operator=((longlong)puVar4 + 0x1c,uVar1);
      }
      FUN_142514cf0(lVar2,*(undefined8 *)(param_3 + 4),param_3[1],puVar4);
    }
  }
  return;
}



// FUNCTION 14251f740 DeleteKey body=120 status=ok
// SIG undefined DeleteKey(void)

void UInterpTrackFloatBase::DeleteKey(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = (iVar1 - param_2) + -1;
  if (iVar2 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x48) + (longlong)param_2 * 0x14),
               (void *)(*(longlong *)(param_1 + 0x48) + (longlong)(param_2 + 1) * 0x14),
               (longlong)iVar2 * 0x14);
    iVar1 = *(int *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x50) = iVar1 + -1;
  TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_1 + 0x48);
  FInterpCurve<float>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x60),1);
  return;
}



// FUNCTION 14251f7c0 DeleteKey body=112 status=ok
// SIG undefined DeleteKey(void)

void UInterpTrackLinearColorBase::DeleteKey(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = (iVar1 - param_2) + -1;
  if (iVar2 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x48)),
               (void *)((longlong)(param_2 + 1) * 0x38 + *(longlong *)(param_1 + 0x48)),
               (longlong)iVar2 * 0x38);
    iVar1 = *(int *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x50) = iVar1 + -1;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeShrink
            (param_1 + 0x48);
  FInterpCurve<FLinearColor>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x60),1);
  return;
}



// FUNCTION 14251f830 DeleteKey body=299 status=ok
// SIG undefined DeleteKey(void)

void UInterpTrackMove::DeleteKey(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x50);
  lVar3 = (longlong)param_2 * 0x2c;
  lVar2 = (longlong)(param_2 + 1);
  iVar4 = (iVar1 - param_2) + -1;
  if (iVar4 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x48) + lVar3),
               (void *)(lVar2 * 0x2c + *(longlong *)(param_1 + 0x48)),(longlong)iVar4 * 0x2c);
    iVar1 = *(int *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x50) = iVar1 + -1;
  TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeShrink(param_1 + 0x48);
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x90),1);
  iVar1 = *(int *)(param_1 + 0x68);
  iVar4 = (iVar1 - param_2) + -1;
  if (iVar4 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x60) + lVar3),
               (void *)(lVar2 * 0x2c + *(longlong *)(param_1 + 0x60)),(longlong)iVar4 * 0x2c);
    iVar1 = *(int *)(param_1 + 0x68);
  }
  *(int *)(param_1 + 0x68) = iVar1 + -1;
  TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeShrink(param_1 + 0x60);
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x60,*(undefined4 *)(param_1 + 0x94),1);
  iVar1 = *(int *)(param_1 + 0x80);
  iVar4 = (iVar1 - param_2) + -1;
  if (iVar4 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x78) + (longlong)param_2 * 0x10),
               (void *)(*(longlong *)(param_1 + 0x78) + lVar2 * 0x10),(longlong)iVar4 << 4);
    iVar1 = *(int *)(param_1 + 0x80);
  }
  *(int *)(param_1 + 0x80) = iVar1 + -1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x78);
  return;
}



// FUNCTION 14251f960 DeleteKey body=225 status=ok
// SIG undefined DeleteKey(void)

void UInterpTrackMoveAxis::DeleteKey(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = (iVar1 - param_2) + -1;
  if (iVar2 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x48) + (longlong)param_2 * 0x14),
               (void *)(*(longlong *)(param_1 + 0x48) + (longlong)(param_2 + 1) * 0x14),
               (longlong)iVar2 * 0x14);
    iVar1 = *(int *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x50) = iVar1 + -1;
  TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_1 + 0x48);
  FInterpCurve<float>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x60),1);
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = (iVar1 - param_2) + -1;
  if (iVar2 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x70) + (longlong)param_2 * 0x10),
               (void *)(*(longlong *)(param_1 + 0x70) + (longlong)(param_2 + 1) * 0x10),
               (longlong)iVar2 << 4);
    iVar1 = *(int *)(param_1 + 0x78);
  }
  *(int *)(param_1 + 0x78) = iVar1 + -1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x70);
  return;
}



// FUNCTION 14251fa50 DeleteKey body=112 status=ok
// SIG undefined DeleteKey(void)

void UInterpTrackVectorBase::DeleteKey(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = (iVar1 - param_2) + -1;
  if (iVar2 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)param_2 * 0x2c + *(longlong *)(param_1 + 0x48)),
               (void *)((longlong)(param_2 + 1) * 0x2c + *(longlong *)(param_1 + 0x48)),
               (longlong)iVar2 * 0x2c);
    iVar1 = *(int *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x50) = iVar1 + -1;
  TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeShrink(param_1 + 0x48);
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x60),1);
  return;
}



// FUNCTION 14251fac0 FUN_14251fac0 body=9 status=ok
// SIG undefined FUN_14251fac0(void)

void FUN_14251fac0(longlong param_1)

{
  FUN_14052c6b0(param_1 + 0x10);
  return;
}



// FUNCTION 14251fad0 DestroyObject body=68 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>,SharedPointerInternals::DefaultDeleter<TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>_>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x48) = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar1);
    FMemory::operator_delete(lVar1,0x50);
    return;
  }
  return;
}



// FUNCTION 14251fb20 DoesImplementInterface body=110 status=ok
// SIG undefined DoesImplementInterface(void)

undefined1 UKismetSystemLibrary::DoesImplementInterface(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar1 = UInterface::GetPrivateStaticClass();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar1) {
        if (param_1 == 0) {
          return 0;
        }
        lVar1 = UInterface::GetPrivateStaticClass();
        lVar3 = param_2;
        goto LAB_14251fb68;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return 0;
  while (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0) {
LAB_14251fb68:
    if (lVar3 == lVar1) goto LAB_14251fb78;
  }
  param_2 = 0;
LAB_14251fb78:
  uVar2 = UClass::ImplementsInterface(*(undefined8 *)(param_1 + 0x10),param_2);
  return uVar2;
}



// FUNCTION 14251fb90 FUN_14251fb90 body=1627 status=ok
// SIG undefined FUN_14251fb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14251fb90(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_418 [32];
  undefined1 *local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined1 local_3a8 [8];
  undefined1 local_3a0 [8];
  undefined1 local_398 [8];
  undefined1 local_390 [8];
  undefined1 local_388 [8];
  longlong *local_380;
  undefined1 local_378 [8];
  longlong *local_370;
  undefined1 local_368 [8];
  longlong *local_360;
  undefined1 local_358 [8];
  longlong *local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined1 local_338 [8];
  longlong *local_330;
  undefined1 local_320 [8];
  longlong *local_318;
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  undefined1 local_2d8 [40];
  undefined1 local_2b0 [40];
  undefined1 local_288 [40];
  undefined1 local_260 [40];
  undefined1 local_238 [24];
  undefined1 local_220 [24];
  undefined1 local_208 [420];
  undefined1 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_418;
  lVar7 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar7 == 0) {
    FName::FName(local_3a8,"Blueprint",1);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_338,L"DrawMaterialToRenderTarget: WorldContextObject is not valid.",
                       L"KismetRenderingLibrary",
                       L"DrawMaterialToRenderTarget_InvalidWorldContextObject");
    uVar9 = FUN_14161fb50(local_2d8,local_3a8);
    FMessageLog::Warning(uVar9,local_388,uVar8);
    if (local_380 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_380 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_380)(local_380);
        LOCK();
        piVar1 = (int *)((longlong)local_380 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_380 + 8))(local_380,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_2d8);
    local_2e8 = local_330;
  }
  else if (param_3 == 0) {
    FName::FName(local_3a0,"Blueprint",1);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_320,L"DrawMaterialToRenderTarget: Material must be non-null.",
                       L"KismetRenderingLibrary",L"DrawMaterialToRenderTarget_InvalidMaterial");
    uVar9 = FUN_14161fb50(local_2b0,local_3a0);
    FMessageLog::Warning(uVar9,local_378,uVar8);
    if (local_370 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_370 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_370)(local_370);
        LOCK();
        piVar1 = (int *)((longlong)local_370 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_370 + 8))(local_370,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_2b0);
    local_2e8 = local_318;
  }
  else if (param_2 == 0) {
    FName::FName(local_398,"Blueprint",1);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_308,
                       L"DrawMaterialToRenderTarget: TextureRenderTarget must be non-null.",
                       L"KismetRenderingLibrary",
                       L"DrawMaterialToRenderTarget_InvalidTextureRenderTarget");
    uVar9 = FUN_14161fb50(local_288,local_398);
    FMessageLog::Warning(uVar9,local_368,uVar8);
    if (local_360 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_360 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_360)(local_360);
        LOCK();
        piVar1 = (int *)((longlong)local_360 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_360 + 8))(local_360,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_288);
    local_2e8 = local_300;
  }
  else {
    if (*(longlong *)(param_2 + 0x60) != 0) {
      lVar10 = FUN_1428cb6b0(lVar7);
      lVar11 = FHdrImageWrapper::GetHeight(param_2);
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar11 + 0x68;
      }
      local_3e8 = 0x3f800000;
      local_3f0 = (ulonglong)local_3f0._4_4_ << 0x20;
      local_3f8 = (undefined1 *)CONCAT44(local_3f8._4_4_,*(undefined4 *)(lVar7 + 0x1c0));
      FUN_142899f20(local_208,lVar11,0,lVar7);
      local_3f8 = local_208;
      local_64 = param_4;
      FUN_1428af580(lVar10,*(undefined4 *)(param_2 + 0xc0),*(undefined4 *)(param_2 + 0xc4),0);
      FUN_1428be4f0(lVar10);
      uVar8 = operator_new(1);
      local_3c8 = *(undefined8 *)(param_2 + 0x18);
      uStack_3c0 = uVar8;
      if (((DAT_146ac3ac6 == '\0') || (cVar5 = IsInRenderingThread(), cVar5 == '\0')) &&
         ((DAT_146ac3ac5 != '\0' ||
          (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 == '\0' && (DAT_1468c21ae != '\0')) &&
           (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)))))) {
        plVar12 = (longlong *)FUN_14251efc0(local_238,0,0xff);
        lVar7 = *plVar12;
        *(undefined4 *)(lVar7 + 0x10) = (undefined4)local_3c8;
        *(undefined4 *)(lVar7 + 0x14) = local_3c8._4_4_;
        *(undefined4 *)(lVar7 + 0x18) = (undefined4)uStack_3c0;
        *(undefined4 *)(lVar7 + 0x1c) = uStack_3c0._4_4_;
        lVar7 = *plVar12;
        lVar3 = plVar12[2];
        lVar11 = plVar12[1];
        lVar4 = *(longlong *)(lVar7 + 0x28);
        piVar1 = (int *)(lVar4 + 0x48);
        if (lVar4 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_3b8 = lVar4;
        FUN_1409421c0(lVar7,lVar11,(int)lVar3,1);
        if (lVar4 != 0) {
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(local_3b8);
          }
        }
      }
      else {
        FBaseGraphTask::GetSmallTaskAllocator();
      }
      local_3e0 = 0x3f0000003f000000;
      local_3e8 = 0;
      local_3f0 = _DAT_1464aa770;
      local_3f8 = (undefined1 *)0x0;
      FUN_1428b2de0(lVar10,param_3,0,
                    CONCAT44((float)*(int *)(param_2 + 0xc4),(float)*(int *)(param_2 + 0xc0)));
      FUN_1428aa700(local_208,0);
      *(undefined8 *)(lVar10 + 0x260) = 0;
      local_3c8 = FHdrImageWrapper::GetHeight(param_2);
      uStack_3c0 = uVar8;
      if ((DAT_146ac3ac6 == '\0') || (cVar5 = IsInRenderingThread(), cVar5 == '\0')) {
        if ((DAT_146ac3ac5 == '\0') &&
           (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
            (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
          local_348 = (undefined4)local_3c8;
          uStack_344 = local_3c8._4_4_;
          uStack_340 = (undefined4)uStack_3c0;
          uStack_33c = uStack_3c0._4_4_;
          uVar8 = FBaseGraphTask::GetSmallTaskAllocator();
          FUN_1425143a0(&local_348,uVar8);
        }
        else {
          plVar12 = (longlong *)FUN_14251f110(local_220,0,0xff);
          lVar7 = *plVar12;
          *(undefined4 *)(lVar7 + 0x10) = (undefined4)local_3c8;
          *(undefined4 *)(lVar7 + 0x14) = local_3c8._4_4_;
          *(undefined4 *)(lVar7 + 0x18) = (undefined4)uStack_3c0;
          *(undefined4 *)(lVar7 + 0x1c) = uStack_3c0._4_4_;
          lVar7 = *plVar12;
          lVar4 = plVar12[2];
          lVar11 = plVar12[1];
          lVar10 = *(longlong *)(lVar7 + 0x28);
          piVar1 = (int *)(lVar10 + 0x48);
          if (lVar10 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_3b0 = lVar10;
          FUN_1409421c0(lVar7,lVar11,(int)lVar4,1);
          if (lVar10 != 0) {
            LOCK();
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              FGraphEvent::Recycle(local_3b0);
            }
          }
        }
      }
      else {
        uVar8 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_1425143a0(&local_3c8,uVar8);
      }
      FUN_14289d030(local_208);
      return;
    }
    FName::FName(local_390,"Blueprint",1);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_2f0,L"DrawMaterialToRenderTarget: render target has been released.",
                       L"KismetRenderingLibrary",
                       L"DrawMaterialToRenderTarget_ReleasedTextureRenderTarget");
    uVar9 = FUN_14161fb50(local_260,local_390);
    FMessageLog::Warning(uVar9,local_358,uVar8);
    if (local_350 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_350 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_350)(local_350);
        LOCK();
        piVar1 = (int *)((longlong)local_350 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_350 + 8))(local_350,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_260);
  }
  if (local_2e8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2e8 + 1;
    lVar7 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_2e8)(local_2e8);
      LOCK();
      piVar1 = (int *)((longlong)local_2e8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_2e8 + 8))(local_2e8,1);
      }
    }
  }
  return;
}



// FUNCTION 1425201f0 Ease body=73 status=ok
// SIG undefined Ease(void)

float UKismetMathLibrary::Ease
                (float param_1,float param_2,undefined4 param_3,undefined1 *param_4,
                undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  
  fVar1 = (float)FUN_142520240(param_3,*param_4,param_5,param_6);
  return fVar1 * (param_2 - param_1) + param_1;
}



// FUNCTION 142520240 FUN_142520240 body=996 status=ok
// SIG undefined FUN_142520240(void)

float FUN_142520240(float param_1,undefined1 param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  switch(param_2) {
  case 1:
    fVar2 = 0.0;
    if (((1 < param_4) && (0.0 < param_1)) && (fVar2 = 1.0, param_1 < 1.0)) {
      param_1 = (float)param_4 * param_1;
      fVar2 = (float)((int)ROUND((param_1 + param_1) - 0.5) >> 1) / ((float)param_4 - 1.0);
    }
    return fVar2;
  case 2:
    fVar2 = _guard_xfg_dispatch_icall_nop(param_1 * 1.5707964);
    return 1.0 - fVar2;
  case 3:
    fVar2 = _guard_xfg_dispatch_icall_nop(param_1 * 1.5707964);
    return fVar2;
  case 4:
    break;
  case 6:
    fVar2 = _guard_xfg_dispatch_icall_nop(1.0 - param_1,param_3);
    return 1.0 - fVar2;
  case 7:
    if (param_1 < 0.5) {
      fVar2 = _guard_xfg_dispatch_icall_nop(param_1 + param_1,param_3);
      return fVar2 * 0.5;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(1.0 - ((param_1 + param_1) - 1.0),param_3);
    return ((1.0 - fVar2) + 1.0) * 0.5;
  case 8:
    if (param_1 == 0.0) {
      return 0.0;
    }
    param_3 = param_1 - 1.0;
    param_1 = 2.0;
    param_3 = param_3 * 10.0;
  case 5:
    fVar2 = _guard_xfg_dispatch_icall_nop(param_1,param_3);
    return fVar2;
  case 9:
    fVar2 = 1.0;
    if (param_1 != 1.0) {
      fVar2 = _guard_xfg_dispatch_icall_nop(2.0,param_1 * -10.0);
      fVar2 = 1.0 - fVar2;
    }
    return fVar2;
  case 10:
    fVar2 = param_1 + param_1;
    if (0.5 <= param_1) {
      if (fVar2 - 1.0 == 1.0) {
        return 1.0;
      }
      fVar2 = _guard_xfg_dispatch_icall_nop(2.0,(fVar2 - 1.0) * -10.0);
      fVar1 = (1.0 - fVar2) + 1.0;
    }
    else {
      fVar1 = 0.0;
      if (fVar2 != 0.0) {
        fVar2 = _guard_xfg_dispatch_icall_nop(2.0,(fVar2 - 1.0) * 10.0);
        return fVar2 * 0.5;
      }
    }
    return fVar1 * 0.5;
  case 0xb:
    return 1.0 - SQRT(1.0 - param_1 * param_1);
  case 0xc:
    return SQRT(1.0 - (param_1 - 1.0) * (param_1 - 1.0));
  case 0xd:
    fVar2 = param_1 + param_1;
    if (0.5 <= param_1) {
      param_1 = SQRT(1.0 - (fVar2 - 2.0) * (fVar2 - 2.0)) + 1.0;
    }
    else {
      param_1 = 1.0 - SQRT(1.0 - fVar2 * fVar2);
    }
    param_1 = param_1 * 0.5;
  default:
    return param_1;
  }
  if (param_1 < 0.5) {
    fVar2 = _guard_xfg_dispatch_icall_nop((param_1 + param_1) * 1.5707964);
    return (1.0 - fVar2) * 0.5;
  }
  fVar2 = _guard_xfg_dispatch_icall_nop(((param_1 + param_1) - 1.0) * 1.5707964);
  return (fVar2 + 1.0) * 0.5;
}



// FUNCTION 142520660 Empty body=113 status=ok
// SIG undefined Empty(void)

void TArray<FPrecomputedVisibilityBucket,FDefaultAllocator>::Empty(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 8);
    do {
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar1 + 2);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 1425206e0 Empty body=501 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32>_>,0>,FDefaultSetAllocator>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint local_58;
  uint uStack_54;
  int iStack_44;
  uint uStack_40;
  uint local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  uint uStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uVar9 = 0;
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  uStack_40 = 0;
  if (iVar2 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar6 = *puVar11;
    uVar10 = uVar9;
    uVar7 = uVar9;
    while (uVar6 == 0) {
      iVar5 = (int)uVar10;
      uStack_40 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uStack_40;
      local_58 = iVar5 + 1;
      uVar10 = (ulonglong)local_58;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1425207b1;
      uVar6 = puVar11[(longlong)iVar5 + 1];
    }
    uStack_54 = -uVar6 & uVar6;
    iVar5 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_44 = (uStack_40 - iVar5) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_1425207b1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  uStack_18 = uStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      puVar3 = *(undefined8 **)(*param_1 + 8 + (longlong)iStack_1c * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar6 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar6) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  cVar4 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2,1);
  if ((cVar4 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
    uVar10 = (ulonglong)*(uint *)(param_1 + 9);
    do {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      uVar7 = (longlong)(int)param_1[9] - 1U & uVar9;
      uVar9 = uVar9 + 1;
      *(undefined4 *)((longlong)plVar8 + uVar7 * 4) = 0xffffffff;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 1425208e0 EndDrag body=42 status=ok
// SIG undefined EndDrag(void)

void UInterpTrackAnimControl::EndDrag(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    FMemory::operator_delete(*(longlong *)(param_2 + 8),0x20);
    *(undefined8 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 142520910 EndDrag body=42 status=ok
// SIG undefined EndDrag(void)

void UInterpTrackParticleReplay::EndDrag(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    FMemory::operator_delete(*(longlong *)(param_2 + 8),0xc);
    *(undefined8 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 142520940 FUN_142520940 body=794 status=ok
// SIG undefined FUN_142520940(void)

void FUN_142520940(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [32];
  
  lVar8 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar8 == 0) {
    FName::FName(local_f8,"Blueprint",1);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"EndDrawCanvasToRenderTarget: WorldContextObject is not valid.",
                       L"KismetRenderingLibrary",
                       L"EndDrawCanvasToRenderTarget_InvalidWorldContextObject");
    uVar11 = FUN_14161fb50(local_60,local_f8);
    FMessageLog::Warning(uVar11,local_c8,uVar9);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_c0 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_60);
  }
  else {
    lVar8 = UWorld::GetCanvasForRenderingToTarget(lVar8);
    if (*(longlong *)(lVar8 + 0x260) != 0) {
      FUN_1428aa700(*(longlong *)(lVar8 + 0x260),0);
      lVar3 = *(longlong *)(lVar8 + 0x260);
      if (lVar3 != 0) {
        FUN_14289d030(lVar3);
        FMemory::operator_delete(lVar3,0x1b0);
      }
      *(undefined8 *)(lVar8 + 0x260) = 0;
    }
    if (*param_2 != 0) {
      local_108 = FHdrImageWrapper::GetHeight();
      uStack_100 = param_2[1];
      if ((DAT_146ac3ac6 != '\0') && (cVar6 = IsInRenderingThread(), cVar6 != '\0')) {
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_1425143a0(&local_108,uVar9);
        *param_2 = 0;
        param_2[1] = 0;
        return;
      }
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
        local_e8 = (undefined4)local_108;
        uStack_e4 = local_108._4_4_;
        uStack_e0 = (undefined4)uStack_100;
        uStack_dc = uStack_100._4_4_;
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_1425143a0(&local_e8,uVar9);
        *param_2 = 0;
        param_2[1] = 0;
        return;
      }
      plVar10 = (longlong *)FUN_14251f110(local_38,0,0xff);
      lVar8 = *plVar10;
      *(undefined4 *)(lVar8 + 0x10) = (undefined4)local_108;
      *(undefined4 *)(lVar8 + 0x14) = local_108._4_4_;
      *(undefined4 *)(lVar8 + 0x18) = (undefined4)uStack_100;
      *(undefined4 *)(lVar8 + 0x1c) = uStack_100._4_4_;
      lVar8 = *plVar10;
      lVar5 = plVar10[2];
      lVar3 = plVar10[1];
      lVar4 = *(longlong *)(lVar8 + 0x28);
      piVar1 = (int *)(lVar4 + 0x48);
      if (lVar4 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res20 = lVar4;
      FUN_1409421c0(lVar8,lVar3,(int)lVar5,1);
      if (lVar4 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(local_res20);
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
      return;
    }
    FName::FName(local_res18,"Blueprint",1);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"EndDrawCanvasToRenderTarget: Context must be valid.",
                       L"KismetRenderingLibrary",L"EndDrawCanvasToRenderTarget_InvalidContext");
    uVar11 = FUN_14161fb50(local_88,local_res18);
    FMessageLog::Warning(uVar11,local_d8,uVar9);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_d0 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_88);
    local_98 = local_b0;
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_98 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  return;
}



// FUNCTION 142520c60 EndsWith body=5 status=ok
// SIG undefined EndsWith(void)

undefined8 FString::EndsWith(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_2 + 1);
  iVar2 = iVar1 + -1;
  if (param_3 == 1) {
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if (iVar2 < 1) {
      return 0;
    }
    iVar4 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar4 = 0;
    }
    if (iVar4 < iVar2) {
      return 0;
    }
    if (iVar1 == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>
                      (*param_1 + (longlong)(iVar4 - iVar2) * 2,puVar6);
  }
  else {
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if (iVar2 < 1) {
      return 0;
    }
    iVar4 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar4 = 0;
    }
    if (iVar4 < iVar2) {
      return 0;
    }
    if (iVar1 == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    puVar5 = (ushort *)(*param_1 + (longlong)(iVar4 - iVar2) * 2);
    lVar7 = (longlong)puVar6 - (longlong)puVar5;
    do {
      uVar3 = (uint)*(ushort *)((longlong)puVar5 + lVar7);
      iVar2 = *puVar5 - uVar3;
      if (iVar2 != 0) break;
      puVar5 = puVar5 + 1;
    } while (uVar3 != 0);
  }
  if (iVar2 != 0) {
    return 0;
  }
  return 1;
}



// FUNCTION 142520c70 EqualEqual_GuidGuid body=37 status=ok
// SIG undefined EqualEqual_GuidGuid(void)

undefined4 UKismetGuidLibrary::EqualEqual_GuidGuid(uint *param_1,uint *param_2)

{
  return CONCAT31((int3)((*param_1 ^ *param_2) >> 8),
                  ((param_1[3] == param_2[3] && param_1[2] == param_2[2]) &&
                  param_1[1] == param_2[1]) && (*param_1 ^ *param_2) == 0);
}



// FUNCTION 142520ca0 EqualEqual_IgnoreCase_TextText body=5 status=ok
// SIG undefined EqualEqual_IgnoreCase_TextText(void)

bool UKismetTextLibrary::EqualEqual_IgnoreCase_TextText(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FText::CompareTo(param_1,param_2,2);
  return iVar1 == 0;
}



// FUNCTION 142520cb0 FUN_142520cb0 body=221 status=ok
// SIG undefined FUN_142520cb0(void)

undefined8 FUN_142520cb0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  if (*param_1 == *param_2) {
    uVar4 = *(uint *)(param_2 + 3);
    uVar5 = *(uint *)(param_1 + 3);
    if ((((((uVar4 ^ uVar5) & 1) == 0) && (((uVar4 ^ uVar5) & 2) == 0)) &&
        (((uVar4 ^ uVar5) & 4) == 0)) && (((uVar4 ^ uVar5) & 8) == 0)) {
      uVar8 = 1;
      goto LAB_142520d06;
    }
  }
  uVar8 = 0;
LAB_142520d06:
  plVar6 = (longlong *)param_1[2];
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
  plVar6 = (longlong *)param_2[2];
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
  return uVar8;
}



// FUNCTION 142520d90 FUN_142520d90 body=170 status=ok
// SIG undefined FUN_142520d90(void)

bool FUN_142520d90(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar4 = *param_2;
  lVar5 = *param_1;
  plVar6 = (longlong *)param_1[2];
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
  plVar6 = (longlong *)param_2[2];
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
  return lVar5 == lVar4;
}



// FUNCTION 142520e40 EqualEqual_PrimaryAssetId body=24 status=ok
// SIG undefined EqualEqual_PrimaryAssetId(void)

ulonglong UKismetSystemLibrary::EqualEqual_PrimaryAssetId(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_2;
  if ((*param_1 == uVar1) && (uVar1 = param_2[1], param_1[1] == uVar1)) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142520e60 EqualEqual_SoftClassReference body=13 status=ok
// SIG undefined EqualEqual_SoftClassReference(void)

void UKismetSystemLibrary::EqualEqual_SoftClassReference(longlong param_1,longlong param_2)

{
  FSoftObjectPath::operator==(param_1 + 0x10,param_2 + 0x10);
  return;
}



// FUNCTION 142520e70 EqualEqual_StrStr body=59 status=ok
// SIG undefined EqualEqual_StrStr(void)

undefined8 UKismetStringLibrary::EqualEqual_StrStr(undefined8 *param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined2 *puVar4;
  longlong lVar5;
  
  psVar3 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 1) != 0) {
    psVar3 = (short *)*param_1;
  }
  lVar5 = (longlong)puVar4 - (longlong)psVar3;
  do {
    sVar1 = *psVar3;
    sVar2 = *(short *)((longlong)psVar3 + lVar5);
    if (sVar1 != sVar2) break;
    psVar3 = psVar3 + 1;
  } while (sVar2 != 0);
  return CONCAT71((int7)((ulonglong)psVar3 >> 8),sVar1 == sVar2);
}



// FUNCTION 142520eb0 EqualEqual_StriStri body=52 status=ok
// SIG undefined EqualEqual_StriStri(void)

bool UKismetStringLibrary::EqualEqual_StriStri(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 1) != 0) {
    puVar2 = (undefined2 *)*param_1;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  return iVar1 == 0;
}



// FUNCTION 142520ef0 EqualEqual_TextText body=8 status=ok
// SIG undefined EqualEqual_TextText(void)

void UKismetTextLibrary::EqualEqual_TextText(undefined8 param_1,undefined8 param_2)

{
  FText::EqualTo(param_1,param_2,0);
  return;
}



// FUNCTION 142520f00 EvalSub body=35 status=ok
// SIG undefined EvalSub(void)

void UInterpTrackFloatBase::EvalSub(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  FInterpCurve<float>::Eval(param_1 + 0x48,param_3,local_res8);
  return;
}



// FUNCTION 142520f30 EvalSub body=97 status=ok
// SIG undefined EvalSub(void)

undefined4 UInterpTrackLinearColorBase::EvalSub(longlong param_1,int param_2,undefined8 param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FInterpCurve<FLinearColor>::Eval(param_1 + 0x48,&local_28,param_3,&local_18);
  if (param_2 == 0) {
    return local_28;
  }
  if (param_2 == 1) {
    return local_24;
  }
  if (param_2 == 2) {
    return local_20;
  }
  return local_1c;
}



// FUNCTION 142520fa0 EvalSub body=379 status=ok
// SIG undefined EvalSub(void)

uint UInterpTrackMove::EvalSub(longlong param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_R8;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  FInterpCurve<FVector>::Eval(param_1 + 0x48,local_38,in_R8,&DAT_1468b5d90);
  FInterpCurve<FVector>::Eval(param_1 + 0x60,local_28,param_3);
  uVar1 = *(uint *)(param_1 + 0x98);
  uVar3 = uVar1 & 8;
  if (param_2 == (uVar3 != 0) - 1) {
    return -uVar3;
  }
  uVar2 = 1;
  if (uVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  if (param_2 == uVar2) {
    return uVar2;
  }
  uVar2 = 2;
  if (uVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  if (param_2 == uVar2) {
    return uVar2;
  }
  uVar2 = uVar1 & 0x11;
  if (uVar2 == 0x10) {
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 3;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  if (param_2 == uVar3) {
    return uVar2;
  }
  uVar3 = 0xffffffff;
  if ((uVar2 == 0x10) && (uVar3 = 1, (uVar1 & 8) != 0)) {
    uVar3 = 4;
  }
  if (param_2 == uVar3) {
    return uVar2;
  }
  uVar3 = 0xffffffff;
  if (uVar2 == 0x10) {
    uVar2 = 5;
    uVar3 = 2;
    if ((uVar1 & 8) != 0) {
      uVar3 = 5;
    }
  }
  if (param_2 != uVar3) {
    return uVar2;
  }
  return uVar2;
}



// FUNCTION 142521120 EvalSub body=74 status=ok
// SIG undefined EvalSub(void)

undefined4 UInterpTrackVectorBase::EvalSub(longlong param_1,int param_2,undefined8 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FInterpCurve<FVector>::Eval(param_1 + 0x48,&local_18,param_3,&DAT_1468b5d90);
  if (param_2 == 0) {
    return local_18;
  }
  if (param_2 == 1) {
    return local_14;
  }
  return local_10;
}



// FUNCTION 142521170 FUN_142521170 body=157 status=ok
// SIG undefined FUN_142521170(void)

void FUN_142521170(longlong param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  size_t _Size;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  local_30 = (int)param_2[1];
  _Size = (size_t)local_30;
  _Src = (void *)*param_2;
  local_38 = (void *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    _guard_xfg_dispatch_icall_nop(local_38,_Src,_Size);
  }
  (*(code *)CONCAT44(uStack_1c,local_20))(iStack_18 + lVar1,&local_38);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142521210 Execute body=118 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UPlatformGameInstance,TTypeWrapper<void>___cdecl(FString)>
     ::Execute(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = FString::FString(local_18,param_2);
  (*pcVar1)((int)uVar2 + lVar3,uVar4);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142521290 Execute body=136 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UPlatformGameInstance,TTypeWrapper<void>___cdecl(FString,int)>
     ::Execute(longlong param_1,longlong *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = FString::FString(local_18,param_2);
  (*pcVar1)((int)uVar2 + lVar3,uVar4,param_3);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142521320 Execute body=152 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UPlatformGameInstance,TTypeWrapper<void>___cdecl(FString,int,int)>
     ::Execute(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = FString::FString(local_18,param_2);
  (*pcVar1)((int)uVar2 + lVar3,uVar4,param_3,param_4);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425213c0 FUN_1425213c0 body=74 status=ok
// SIG undefined FUN_1425213c0(void)

void FUN_1425213c0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  if (param_3 == (longlong *)0x0) {
    param_3 = (longlong *)UGameplayStatics::GetPlayerController(param_1,0);
  }
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0xd28))(param_3,local_18,param_2,1);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142521410 FUN_142521410 body=295 status=ok
// SIG undefined FUN_142521410(void)

undefined8 FUN_142521410(longlong param_1,longlong *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  size_t _Size;
  void *_Src_00;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    local_30 = (int)param_2[1];
    _Size = (size_t)local_30;
    _Src = (void *)*param_2;
    local_38 = (void *)0x0;
    if (local_30 == 0) {
      _Src_00 = (void *)0x0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
      _Src_00 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,_Src,_Size);
    }
    iVar1 = local_30;
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    local_38 = (void *)0x0;
    local_20 = *(undefined4 *)(param_1 + 0x10);
    uStack_1c = *(undefined4 *)(param_1 + 0x14);
    iStack_18 = *(int *)(param_1 + 0x18);
    uStack_14 = *(undefined4 *)(param_1 + 0x1c);
    local_30 = iVar1;
    if (iVar1 == 0) {
      local_2c = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_38,iVar1,0);
      _guard_xfg_dispatch_icall_nop(local_38,_Src_00,(longlong)iVar1);
    }
    (*(code *)CONCAT44(uStack_1c,local_20))(iStack_18 + lVar2,&local_38);
    if (_Src_00 != (void *)0x0) {
      FMemory::Free(_Src_00);
    }
    if (*param_2 != 0) {
      FMemory::Free();
    }
    return 1;
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 142521540 ExecuteIfSafe body=208 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseUObjectMethodDelegateInstance<0,UPlatformGameInstance,void___cdecl(FString)>::ExecuteIfSafe
          (longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 != 0) {
    plVar4 = (longlong *)FString::FString(local_28,param_2);
    lVar3 = FWeakObjectPtr::Get(param_1 + 8);
    pcVar1 = *(code **)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = FString::FString(local_18,plVar4);
    (*pcVar1)((int)uVar2 + lVar3,uVar5);
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    if (*param_2 != 0) {
      FMemory::Free();
    }
    return 1;
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 142521610 ExecuteIfSafe body=208 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseUObjectMethodDelegateInstance<0,UPlatformGameInstance,void___cdecl(FString,int)>::ExecuteIfSafe
          (longlong param_1,longlong *param_2,undefined4 param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 == 0) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    uVar5 = 0;
  }
  else {
    plVar3 = (longlong *)FString::FString(local_28,param_2);
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    pcVar1 = *(code **)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = FString::FString(local_18,plVar3);
    (*pcVar1)((int)uVar5 + lVar2,uVar4,param_3);
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    if (*param_2 != 0) {
      FMemory::Free();
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1425216e0 ExecuteIfSafe body=217 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseUObjectMethodDelegateInstance<0,UPlatformGameInstance,void___cdecl(FString,int,int)>::
ExecuteIfSafe(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 == 0) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    uVar5 = 0;
  }
  else {
    plVar3 = (longlong *)FString::FString(local_38,param_2);
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    pcVar1 = *(code **)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = FString::FString(local_28,plVar3);
    (*pcVar1)((int)uVar5 + lVar2,uVar4,param_3,param_4);
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    if (*param_2 != 0) {
      FMemory::Free();
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1425217c0 FUN_1425217c0 body=226 status=ok
// SIG undefined FUN_1425217c0(void)

void FUN_1425217c0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1450e89f0;
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



// FUNCTION 1425218b0 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::`2'::WaitRHIThreadFenceForDynamicDataName,<lambda_0cb6192001671644349c60973fa33477>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_1425143a0(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1450e8a00;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1425219a0 FUN_1425219a0 body=238 status=ok
// SIG undefined FUN_1425219a0(void)

void FUN_1425219a0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  <lambda_974a80fed04bdf4bc40e06b9f0d2621e>::operator()(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_1450e89e0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142521a90 FUN_142521a90 body=259 status=ok
// SIG undefined FUN_142521a90(void)

void FUN_142521a90(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FPrecomputedVolumetricLightmap::ApplyWorldOffset(param_1[2],param_1 + 3);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1450e89d0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
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



// FUNCTION 142521ba0 FUN_142521ba0 body=312 status=ok
// SIG undefined FUN_142521ba0(void)

void FUN_142521ba0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_1426fae60(param_1[2],param_1 + 4);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  plVar7 = (longlong *)param_1[3];
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
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_1450e89c0;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar5 = TlsGetValue(*pDVar4);
  plVar7 = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar5 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar5 = plVar6;
    }
    TlsSetValue(*pDVar4,plVar5);
  }
  if ((int)plVar5[2] < 0x20) {
    plVar7 = (longlong *)plVar5[1];
  }
  else {
    if (*plVar5 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *plVar5 = plVar5[1];
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  plVar5[1] = (longlong)param_1;
  return;
}



// FUNCTION 142521ce0 FUN_142521ce0 body=2173 status=ok
// SIG undefined FUN_142521ce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142521ce0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  wint_t *pwVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined1 auStack_3f8 [32];
  undefined2 *local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined4 *local_3b8;
  ulonglong *puStack_3b0;
  undefined1 local_3a8 [8];
  undefined1 local_3a0 [8];
  undefined1 local_398 [8];
  undefined1 local_390 [8];
  undefined1 local_388 [8];
  longlong *local_380;
  undefined2 *local_370;
  undefined2 *local_368;
  undefined8 local_360;
  longlong local_358;
  undefined1 local_350 [8];
  longlong *local_348;
  undefined1 local_340 [8];
  longlong *local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 local_2f8 [8];
  longlong *local_2f0;
  longlong local_2e8 [2];
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined1 local_2b0 [8];
  longlong *local_2a8;
  undefined1 local_298 [8];
  longlong *local_290;
  undefined1 local_280 [8];
  longlong *local_278;
  undefined1 local_268 [8];
  longlong *local_260;
  undefined1 local_250 [8];
  longlong *local_248;
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 local_220 [16];
  undefined1 local_210 [40];
  undefined1 local_1e8 [40];
  undefined1 local_1c0 [40];
  undefined1 local_198 [40];
  undefined1 local_170 [40];
  undefined1 local_148 [168];
  longlong local_a0;
  int local_98;
  undefined1 local_88 [24];
  undefined4 local_70 [4];
  undefined1 local_60 [8];
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  puVar14 = &DAT_143f3eda8;
  if (*(int *)(param_4 + 1) == 0) {
    local_368 = &DAT_143f3eda8;
  }
  else {
    local_368 = (undefined2 *)*param_4;
  }
  if (*(int *)(param_3 + 1) == 0) {
    local_370 = &DAT_143f3eda8;
  }
  else {
    local_370 = (undefined2 *)*param_3;
  }
  local_3d8 = (undefined2 *)0x0;
  local_3d0 = 0;
  iVar15 = 0;
  FPaths::CombineInternal(&local_3d8,&local_370,2);
  FText::FText(local_388);
  FUN_1416854b0(&local_3d8,local_388);
  if (param_2 == 0) {
    FName::FName(local_3a8,"Blueprint",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_2b0,L"ExportRenderTarget: TextureRenderTarget must be non-null.",
                       L"KismetRenderingLibrary",L"ExportRenderTarget_InvalidTextureRenderTarget");
    uVar8 = FUN_14161fb50(local_210,local_3a8);
    FMessageLog::Warning(uVar8,local_350,uVar7);
    if (local_348 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_348 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_348)(local_348);
        LOCK();
        piVar1 = (int *)((longlong)local_348 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_348 + 8))(local_348,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_210);
    local_290 = local_2a8;
  }
  else {
    if (*(longlong *)(param_2 + 0x60) != 0) {
      cVar4 = FText::IsEmpty(local_388);
      if (cVar4 == '\0') {
        FName::FName(local_398,"Blueprint",1);
        lVar9 = FText::FText(local_88,local_388);
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_268,L"ExportRenderTarget: Invalid file path provided: \'{0}\'",
                           L"KismetRenderingLibrary",L"ExportRenderTarget_InvalidFilePath");
        puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_220,uVar7);
        local_70[0] = 4;
        FText::FText(local_60,lVar9);
        local_360 = *puVar10;
        local_3b8 = local_70;
        puStack_3b0 = &local_40;
        local_358 = puVar10[1];
        local_48 = '\x01';
        if (local_358 != 0) {
          LOCK();
          *(int *)(local_358 + 8) = *(int *)(local_358 + 8) + 1;
          UNLOCK();
        }
        local_328 = local_3b8;
        uStack_320 = puStack_3b0;
        uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_318,&local_328);
        uVar7 = FText::Format(local_280,&local_360,uVar7);
        FText::FText(local_2c8,uVar7);
        if (local_278 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_278 + 1;
          lVar3 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_278)(local_278);
            LOCK();
            piVar1 = (int *)((longlong)local_278 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_278 + 8))(local_278,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_318);
        if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
          LOCK();
          plVar11 = local_58 + 1;
          lVar3 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
        plVar11 = (longlong *)puVar10[1];
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
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        plVar11 = *(longlong **)(lVar9 + 8);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar11 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        uVar7 = FUN_14161fb50(local_1c0,local_398);
        FMessageLog::Warning(uVar7,local_308,local_2c8);
        if (local_300 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_300 + 1;
          lVar9 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_300)(local_300);
            LOCK();
            piVar1 = (int *)((longlong)local_300 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_300 + 8))(local_300,1);
            }
          }
        }
        FMessageLog::~FMessageLog(local_1c0);
        local_248 = local_260;
        if (local_2c0 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_2c0 + 1;
          lVar9 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_2c0)(local_2c0);
            LOCK();
            piVar1 = (int *)((longlong)local_2c0 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            local_248 = local_260;
            if (iVar15 == 1) {
              (**(code **)(*local_2c0 + 8))(local_2c0,1);
              local_248 = local_260;
            }
          }
        }
      }
      else {
        if (1 < *(int *)(param_4 + 1)) {
          plVar11 = (longlong *)FUN_1415c3d50();
          puVar12 = &DAT_143f3eda8;
          if ((int)local_3d0 != 0) {
            puVar12 = local_3d8;
          }
          plVar11 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11,puVar12,0);
          if (plVar11 != (longlong *)0x0) {
            local_3c8 = 0;
            FBufferArchive::FBufferArchive(local_148,0,0);
            if (*(char *)(param_2 + 0xe1) == '\x05') {
              puVar10 = (undefined8 *)FUN_141672300(local_2e8,&local_3d8,0);
              if (*(int *)(puVar10 + 1) != 0) {
                puVar14 = (undefined2 *)*puVar10;
              }
              pwVar13 = &DAT_1450e5f28;
              do {
                wVar5 = *(wint_t *)((longlong)(puVar14 + -0xa2872f94) + (longlong)pwVar13);
                if ((wVar5 == 0) && (*pwVar13 == 0)) goto LAB_14252236d;
                if (wVar5 != *pwVar13) {
                  wVar5 = towlower(wVar5);
                  wVar6 = towlower(*pwVar13);
                  if (wVar5 != wVar6) goto LAB_142522363;
                }
                pwVar13 = pwVar13 + 1;
              } while( true );
            }
            cVar4 = FUN_1424ef650(param_2,local_148);
            goto LAB_1425223a7;
          }
          FName::FName(&local_3b8,"Blueprint",1);
          uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_238,L"ExportRenderTarget: FileWrite failed to create.",
                             L"KismetRenderingLibrary",
                             L"ExportRenderTarget_FileWriterFailedToCreate");
          uVar8 = FUN_14161fb50(local_170,&local_3b8);
          FMessageLog::Warning(uVar8,local_2d8,uVar7);
          if (local_2d0 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_2d0 + 1;
            lVar9 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_2d0)(local_2d0);
              LOCK();
              piVar1 = (int *)((longlong)local_2d0 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*local_2d0 + 8))(local_2d0,1);
              }
            }
          }
          FMessageLog::~FMessageLog(local_170);
          if (local_230 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_230 + 1;
            lVar9 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_230)(local_230);
              LOCK();
              piVar1 = (int *)((longlong)local_230 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*local_230 + 8))(local_230,1);
              }
            }
          }
          goto LAB_1425224cb;
        }
        FName::FName(local_390,"Blueprint",1);
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_250,L"ExportRenderTarget: FileName must be non-empty.",
                           L"KismetRenderingLibrary",L"ExportRenderTarget_InvalidFileName");
        uVar8 = FUN_14161fb50(local_198,local_390);
        FMessageLog::Warning(uVar8,local_2f8,uVar7);
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_2f0 + 1;
          lVar9 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_2f0)(local_2f0);
            LOCK();
            piVar1 = (int *)((longlong)local_2f0 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*local_2f0 + 8))(local_2f0,1);
            }
          }
        }
        FMessageLog::~FMessageLog(local_198);
      }
      if (local_248 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_248 + 1;
        lVar9 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_248)(local_248);
          LOCK();
          piVar1 = (int *)((longlong)local_248 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_248 + 8))(local_248,1);
          }
        }
      }
      goto LAB_1425224db;
    }
    FName::FName(local_3a0,"Blueprint",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_298,L"ExportRenderTarget: render target has been released.",
                       L"KismetRenderingLibrary",L"ExportRenderTarget_ReleasedTextureRenderTarget");
    uVar8 = FUN_14161fb50(local_1e8,local_3a0);
    FMessageLog::Warning(uVar8,local_340,uVar7);
    if (local_338 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_338 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_338)(local_338);
        LOCK();
        piVar1 = (int *)((longlong)local_338 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_338 + 8))(local_338,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_1e8);
  }
  local_328 = (undefined4 *)CONCAT44(local_328._4_4_,(undefined4)local_328);
  uStack_320 = (ulonglong *)CONCAT44(uStack_320._4_4_,(undefined4)uStack_320);
  if (local_290 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_290 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    local_328 = (undefined4 *)CONCAT44(local_328._4_4_,(undefined4)local_328);
    uStack_320 = (ulonglong *)CONCAT44(uStack_320._4_4_,(undefined4)uStack_320);
    if ((int)lVar9 == 1) {
      (**(code **)*local_290)(local_290);
      LOCK();
      piVar1 = (int *)((longlong)local_290 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_290 + 8))(local_290,1);
      }
    }
  }
  goto LAB_1425224db;
LAB_142522363:
  iVar15 = (uint)wVar5 - (uint)wVar6;
LAB_14252236d:
  if (local_2e8[0] != 0) {
    FMemory::Free();
  }
  if (iVar15 == 0) {
    cVar4 = FUN_1424ef4f0();
  }
  else {
    cVar4 = FUN_1424ef2f0(param_2,local_148);
  }
LAB_1425223a7:
  if (cVar4 != '\0') {
    (**(code **)(*plVar11 + 0x50))(plVar11,local_a0,(longlong)local_98);
  }
  (**(code **)*plVar11)(plVar11,1);
  if (local_a0 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(local_148);
LAB_1425224cb:
LAB_1425224db:
  if (local_380 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_380 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_380)(local_380);
      LOCK();
      piVar1 = (int *)((longlong)local_380 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_380 + 8))(local_380,1);
      }
    }
  }
  if (local_3d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142522560 FUN_142522560 body=1741 status=ok
// SIG undefined FUN_142522560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142522560(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  undefined1 auStack_378 [32];
  undefined2 *local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined4 *local_338;
  ulonglong *puStack_330;
  undefined1 local_328 [8];
  undefined1 local_320 [8];
  undefined1 local_318 [8];
  undefined1 local_310 [8];
  undefined1 local_308 [8];
  longlong *local_300;
  undefined2 *local_2f0;
  undefined2 *local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  undefined1 local_2d0 [8];
  longlong *local_2c8;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [8];
  longlong *local_298;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined1 local_280 [8];
  longlong *local_278;
  undefined1 local_268 [8];
  longlong *local_260;
  undefined1 local_250 [8];
  longlong *local_248;
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [40];
  undefined1 local_1b8 [40];
  undefined1 local_190 [40];
  undefined1 local_168 [40];
  undefined1 local_140 [24];
  undefined1 local_128 [168];
  longlong local_80;
  int local_78;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_378;
  if (*(int *)(param_4 + 1) == 0) {
    local_2e8 = &DAT_143f3eda8;
  }
  else {
    local_2e8 = (undefined2 *)*param_4;
  }
  if (*(int *)(param_3 + 1) == 0) {
    local_2f0 = &DAT_143f3eda8;
  }
  else {
    local_2f0 = (undefined2 *)*param_3;
  }
  local_358 = (undefined2 *)0x0;
  local_350 = 0;
  FPaths::CombineInternal(&local_358,&local_2f0,2);
  FText::FText(local_308);
  FUN_1416854b0(&local_358,local_308);
  if (param_2 == 0) {
    FName::FName(local_320,"Blueprint",1);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_250,L"ExportTexture2D: TextureRenderTarget must be non-null.",
                       L"KismetRenderingLibrary",L"ExportTexture2D_InvalidTextureRenderTarget");
    uVar10 = FUN_14161fb50(local_1b8,local_320);
    FMessageLog::Warning(uVar10,local_2c0,uVar8);
    if (local_2b8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_2b8 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_2b8)(local_2b8);
        LOCK();
        piVar1 = (int *)((longlong)local_2b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_2b8 + 8))(local_2b8,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_1b8);
  }
  else {
    if (*(int *)(param_4 + 1) < 2) goto LAB_14252282d;
    cVar5 = FText::IsEmpty(local_308);
    if (cVar5 == '\0') goto LAB_14252282d;
    plVar6 = (longlong *)FUN_1415c3d50();
    puVar11 = &DAT_143f3eda8;
    if ((int)local_350 != 0) {
      puVar11 = local_358;
    }
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,puVar11,0);
    if (plVar6 != (longlong *)0x0) {
      local_348 = 0;
      FBufferArchive::FBufferArchive(local_128,0,0);
      cVar5 = FUN_1424ef7f0(param_2,local_128);
      if (cVar5 != '\0') {
        (**(code **)(*plVar6 + 0x50))(plVar6,local_80,(longlong)local_78);
      }
      (**(code **)*plVar6)(plVar6,1);
      if (local_80 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_128);
      goto LAB_14252282d;
    }
    FName::FName(local_328,"Blueprint",1);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_268,L"ExportTexture2D: FileWrite failed to create.",
                       L"KismetRenderingLibrary",L"ExportTexture2D_FileWriterFailedToCreate");
    uVar10 = FUN_14161fb50(local_1e0,local_328);
    FMessageLog::Warning(uVar10,local_2d0,uVar8);
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_2c8 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_2c8)(local_2c8);
        LOCK();
        piVar1 = (int *)((longlong)local_2c8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_2c8 + 8))(local_2c8,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_1e0);
    local_248 = local_260;
  }
  if (local_248 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_248 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_248)(local_248);
      LOCK();
      piVar1 = (int *)((longlong)local_248 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_248 + 8))(local_248,1);
      }
    }
  }
LAB_14252282d:
  cVar5 = FText::IsEmpty(local_308);
  if (cVar5 == '\0') {
    FName::FName(local_318,"Blueprint",1);
    lVar7 = FText::FText(local_140,local_308);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_220,L"ExportTexture2D: Invalid file path provided: \'{0}\'",
                       L"KismetRenderingLibrary",L"ExportTexture2D_InvalidFilePath");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_1f0,uVar8);
    local_68[0] = 4;
    FText::FText(local_58,lVar7);
    local_2e0 = *puVar9;
    local_338 = local_68;
    puStack_330 = local_38;
    local_2d8 = puVar9[1];
    local_40 = '\x01';
    if (local_2d8 != 0) {
      LOCK();
      *(int *)(local_2d8 + 8) = *(int *)(local_2d8 + 8) + 1;
      UNLOCK();
    }
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_2b0,&local_338);
    uVar8 = FText::Format(local_238,&local_2e0,uVar8);
    FText::FText(local_280,uVar8);
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_230 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar1 = (int *)((longlong)local_230 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_230 + 8))(local_230,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_2b0);
    if (local_40 != '\0') {
      local_40 = '\0';
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_50 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
    plVar6 = (longlong *)puVar9[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    plVar6 = *(longlong **)(lVar7 + 8);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
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
    uVar8 = FUN_14161fb50(local_190,local_318);
    FMessageLog::Warning(uVar8,local_2a0,local_280);
    if (local_298 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_298 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_298)(local_298);
        LOCK();
        piVar1 = (int *)((longlong)local_298 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_298 + 8))(local_298,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_190);
    if (local_278 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_278 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_278)(local_278);
        LOCK();
        piVar1 = (int *)((longlong)local_278 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_278 + 8))(local_278,1);
        }
      }
    }
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_218 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_218)(local_218);
        LOCK();
        piVar1 = (int *)((longlong)local_218 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_218 + 8))(local_218,1);
        }
      }
    }
  }
  if (*(int *)(param_4 + 1) < 2) {
    FName::FName(local_310,"Blueprint",1);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_208,L"ExportTexture2D: FileName must be non-empty.",
                       L"KismetRenderingLibrary",L"ExportTexture2D_InvalidFileName");
    uVar10 = FUN_14161fb50(local_168,local_310);
    FMessageLog::Warning(uVar10,local_290,uVar8);
    if (local_288 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_288 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_288)(local_288);
        LOCK();
        piVar1 = (int *)((longlong)local_288 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_288 + 8))(local_288,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_168);
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_200 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar1 = (int *)((longlong)local_200 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_200 + 8))(local_200,1);
        }
      }
    }
  }
  if (local_300 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_300 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_300)(local_300);
      LOCK();
      piVar1 = (int *)((longlong)local_300 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_300 + 8))(local_300,1);
      }
    }
  }
  if (local_358 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142522c30 FInterpEaseInOut body=140 status=ok
// SIG undefined FInterpEaseInOut(void)

float UKismetMathLibrary::FInterpEaseInOut(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  if (0.5 <= param_3) {
    fVar1 = ::_guard_xfg_dispatch_icall_nop(1.0 - ((param_3 + param_3) - 1.0),param_4);
    fVar1 = (1.0 - fVar1) + 1.0;
  }
  else {
    fVar1 = ::_guard_xfg_dispatch_icall_nop(param_3 + param_3,param_4);
  }
  return (param_2 - param_1) * fVar1 * 0.5 + param_1;
}



// FUNCTION 142522cc0 FMod body=227 status=ok
// SIG undefined FMod(void)

int UKismetMathLibrary::FMod(float param_1,float param_2,float *param_3)

{
  long in_ECX;
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 == 0.0) {
    FUN_141790820(L"Attempted modulo 0 - returning 0.",3,DAT_146afc600);
    *param_3 = 0.0;
    return 0;
  }
  fVar3 = param_1 / param_2;
  iVar1 = (int)ROUND((ABS(fVar3) + ABS(fVar3)) - 0.5) >> 1;
  if (fVar3 < 0.0) {
    iVar1 = -iVar1;
  }
  if (ABS(param_2) <= 1e-08) {
    AK::MemoryMgr::StartProfileThreadUsage(in_ECX);
    *param_3 = 0.0;
    return iVar1;
  }
  fVar2 = (float)(int)fVar3 * param_2;
  if (ABS(param_1) < ABS((float)(int)fVar3 * param_2)) {
    fVar2 = param_1;
  }
  *param_3 = param_1 - fVar2;
  return iVar1;
}



// FUNCTION 142522db0 FilterArray body=252 status=ok
// SIG undefined FilterArray(void)

void UKismetArrayLibrary::FilterArray(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  iVar7 = 0;
  do {
    if ((iVar7 < 0) || ((int)param_1[1] <= iVar7)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    lVar2 = *(longlong *)(*param_1 + (longlong)iVar7 * 8);
    if (lVar2 != 0) {
      if (param_2 != 0) {
        lVar4 = FUN_1428dfc70();
        lVar6 = param_2;
        do {
          lVar5 = param_2;
          if (lVar6 == lVar4) goto LAB_142522e34;
          lVar6 = *(longlong *)(lVar6 + 0x30);
        } while (lVar6 != 0);
      }
      lVar5 = 0;
LAB_142522e34:
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



// FUNCTION 142522eb0 FindAndRemoveParentChain body=908 status=ok
// SIG undefined FindAndRemoveParentChain(void)

void FLevelSortUtils::FindAndRemoveParentChain(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  bool bVar11;
  int local_res8 [2];
  uint local_98;
  uint uStack_94;
  int iStack_84;
  uint uStack_80;
  undefined8 uStack_70;
  uint *local_68;
  undefined8 uStack_60;
  uint local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_30;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_94 = 1;
  iVar8 = 0;
  local_98 = 0;
  iStack_84 = 0;
  if (iVar2 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    while (uVar3 == 0) {
      lVar4 = (longlong)(int)local_98;
      iVar8 = iVar8 + 0x20;
      iVar6 = local_98 + 1;
      bVar11 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98 = iVar6;
      if (bVar11) goto LAB_142522f81;
      uVar3 = puVar9[lVar4 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_84 = (iVar8 - iVar6) + 0x1f;
    if (iVar2 < iStack_84) {
LAB_142522f81:
      iStack_84 = iVar2;
    }
  }
  iVar2 = (int)param_2[1];
  lVar4 = *param_1;
  uStack_48 = CONCAT44(uStack_94,local_98);
  *(int *)(param_2 + 1) = iVar2 + 1;
  puStack_40 = puVar1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) =
       *(undefined8 *)(lVar4 + (longlong)iStack_84 * 0x18);
  iVar2 = (int)param_2[1];
  lVar4 = *param_1;
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) =
       *(undefined8 *)(lVar4 + 8 + (longlong)iStack_84 * 0x18);
  TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
  ::Remove(param_1,iStack_84);
  uVar10 = 0;
  do {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*(undefined8 *)(*param_2 + -8 + (longlong)(int)param_2[1] * 8));
    bVar11 = local_res8[0] != -1;
    uVar5 = uVar10;
    if (bVar11) {
      uVar5 = *(ulonglong *)(*param_1 + 8 + (longlong)local_res8[0] * 0x18);
      TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
      ::Remove(param_1);
    }
    AddToListSafe(uVar5,param_2);
  } while (bVar11);
  lVar4 = TMapBase<AActor_*,AActor_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AActor_*,AActor_*,0>_>
          ::FindKey(param_1,*(undefined8 *)*param_2);
  if (lVar4 == 0) {
    return;
  }
  do {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,lVar4);
    uVar5 = uVar10;
    if (local_res8[0] != -1) {
      uVar5 = *(ulonglong *)(*param_1 + 8 + (longlong)local_res8[0] * 0x18);
      TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
      ::Remove(param_1);
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    ::_guard_xfg_dispatch_icall_nop((void *)(*param_2 + 8),(void *)*param_2,(longlong)iVar2 << 3);
    local_98 = 0;
    uStack_94 = 1;
    *(ulonglong *)*param_2 = uVar5;
    iVar2 = (int)param_1[5];
    iStack_84 = 0;
    uStack_80 = 0;
    lVar4 = *(longlong *)*param_2;
    if (iVar2 != 0) {
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      uVar3 = *puVar9;
      uVar5 = uVar10;
      uVar7 = uVar10;
      while (uVar3 == 0) {
        iVar8 = (int)uVar5;
        uStack_80 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_80;
        local_98 = iVar8 + 1;
        uVar5 = (ulonglong)local_98;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_14252317f;
        uVar3 = puVar9[(longlong)iVar8 + 1];
      }
      uStack_94 = -uVar3 & uVar3;
      iVar8 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_84 = (uStack_80 - iVar8) + 0x1f;
      if (iVar2 < iStack_84) {
LAB_14252317f:
        iStack_84 = iVar2;
      }
    }
    uStack_70 = CONCAT44(uStack_94,local_98);
    uStack_38 = 0xffffffff;
    iStack_34 = iStack_84;
    uStack_30 = uStack_80;
    uStack_60 = CONCAT44(iStack_84,0xffffffff);
    local_58 = uStack_80;
    local_68 = puVar1;
    local_50 = param_1;
    uStack_48 = uStack_70;
    puStack_40 = puVar1;
    if (iVar2 <= iStack_84) {
      return;
    }
    while (*(longlong *)(*param_1 + 8 + (longlong)iStack_84 * 0x18) != lVar4) {
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_70._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      iStack_84 = uStack_60._4_4_;
      if ((int)local_68[6] <= uStack_60._4_4_) {
        return;
      }
    }
    lVar4 = *param_1 + (longlong)iStack_84 * 0x18;
    if (lVar4 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 142523240 FindClosestPointOnLine body=375 status=ok
// SIG undefined FindClosestPointOnLine(void)

float * UKismetMathLibrary::FindClosestPointOnLine
                  (float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float local_48;
  
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  fVar4 = *param_4;
  fVar3 = fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2;
  if (fVar3 == 1.0) {
    local_48 = (float)*(undefined8 *)param_4;
    fVar7 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
    fVar5 = param_4[2];
  }
  else {
    fVar7 = DAT_1468b5d94;
    fVar5 = DAT_1468b5d98;
    local_48 = DAT_1468b5d90;
    if (1e-08 <= fVar3) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar3 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar3 * 0.5 * fVar5 * fVar5);
      local_48 = fVar4 * fVar5;
      fVar7 = fVar1 * fVar5;
      fVar5 = fVar2 * fVar5;
    }
  }
  fVar4 = (param_2[1] - param_3[1]) * fVar7 + (*param_2 - *param_3) * local_48 +
          (param_2[2] - param_3[2]) * fVar5;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *param_1 = local_48 * fVar4 + *param_3;
  param_1[1] = fVar7 * fVar4 + fVar1;
  param_1[2] = fVar5 * fVar4 + fVar2;
  return param_1;
}



// FUNCTION 1425233c0 FindSubstring body=38 status=ok
// SIG undefined FindSubstring(void)

void UKismetStringLibrary::FindSubstring
               (undefined8 param_1,undefined8 *param_2,byte param_3,undefined1 param_4)

{
  if (*(int *)(param_2 + 1) != 0) {
    FUN_141592950(param_1,*param_2,param_3 ^ 1,param_4);
    return;
  }
  FUN_141592950(param_1,&DAT_143f3eda8,param_3 ^ 1,param_4);
  return;
}



// FUNCTION 1425233f0 FindTextInLocalizationTable body=8 status=ok
// SIG undefined FindTextInLocalizationTable(void)

void UKismetTextLibrary::FindTextInLocalizationTable(void)

{
  FUN_141606040();
  return;
}



// FUNCTION 142523400 FUN_142523400 body=200 status=ok
// SIG undefined FUN_142523400(void)

void FUN_142523400(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x148) != &local_18) {
    *(undefined8 *)(param_1 + 0x148) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x150,&local_10);
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
  lVar4 = *(longlong *)(param_1 + 0x158);
  if (lVar4 != 0) {
    AK::MemoryMgr::StartProfileThreadUsage((long)lVar4);
    FMemory::operator_delete(lVar4,0x18);
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_141755460(param_1);
  return;
}



// FUNCTION 1425234d0 FloatSpringInterp body=165 status=ok
// SIG undefined FloatSpringInterp(void)

ulonglong UKismetMathLibrary::FloatSpringInterp
                    (undefined8 param_1,undefined8 param_2,float *param_3,float param_4,
                    float param_5,float param_6,float param_7)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar1 = (float)param_1;
  fVar3 = fVar1;
  uVar2 = (int)((ulonglong)param_1 >> 0x20);
  if ((1e-08 < param_6) &&
     (fVar3 = (float)param_2, uVar2 = (int)((ulonglong)param_2 >> 0x20), 1e-08 < ABS(param_7))) {
    fVar3 = (float)param_2 - fVar1;
    param_3[1] = ((SQRT(param_4 * param_7) + SQRT(param_4 * param_7)) * param_5 * (fVar3 - *param_3)
                 + fVar3 * param_4 * param_6) / param_7 + param_3[1];
    *param_3 = fVar3;
    return (ulonglong)(uint)(param_6 * param_3[1] + fVar1);
  }
  return CONCAT44(uVar2,fVar3);
}



// FUNCTION 142523580 ForceCloseAdBanner body=83 status=ok
// SIG undefined ForceCloseAdBanner(void)

void UKismetSystemLibrary::ForceCloseAdBanner(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,"Advertising",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425235c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x50))(plVar4);
    return;
  }
  return;
}



// FUNCTION 1425235e0 Fork_GameThread body=96 status=ok
// SIG undefined Fork_GameThread(void)

void FLegacyScreenPercentageDriver::Fork_GameThread(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x20);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar2 = *(undefined1 *)(param_1 + 0x18);
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar3 + 0x14) = uVar1;
    *puVar3 = &PTR_FUN_1450e89a0;
    *(undefined1 *)(puVar3 + 3) = uVar2;
    puVar3[1] = param_2;
    return;
  }
  return;
}



// FUNCTION 142523640 Format body=337 status=ok
// SIG undefined Format(void)

undefined8 UKismetTextLibrary::Format(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FTextFormat::FTextFormat(local_18);
  FUN_1416067c0(param_1,local_18,param_3,0,0);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_10 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  plVar7 = *(longlong **)(param_2 + 8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  iVar6 = *(int *)(param_3 + 1);
  plVar7 = (longlong *)*param_3;
  if (iVar6 != 0) {
    do {
      plVar4 = (longlong *)plVar7[4];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = (longlong *)*param_3;
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  return param_1;
}



// FUNCTION 1425237a0 FromDays body=792 status=ok
// SIG undefined FromDays(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * UKismetMathLibrary::FromDays(longlong *param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_1a8 [32];
  longlong local_188 [4];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  longlong *local_160;
  undefined4 *local_158;
  longlong *local_150;
  undefined4 *local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_98 [2];
  float local_90;
  longlong *local_80;
  char local_70;
  undefined4 local_68 [2];
  float local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  dVar6 = (double)param_2;
  if (dVar6 < -10675199.116730064) {
    local_138 = 0;
    local_130 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_70 = '\0';
    local_188[0] = 0;
    local_98[0] = 2;
    local_188[1] = 10;
    local_90 = param_2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188,0);
    FGenericPlatformString::Memcpy(local_188[0],L"DaysValue",0x14);
    local_160 = local_188;
    local_158 = local_98;
    FUN_1407484b0(&local_138,local_168,&local_160,0);
    if (local_188[0] != 0) {
      FMemory::Free();
    }
    if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    *param_1 = -0x8000000000000000;
    local_f0 = 0;
    if (local_f8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_138);
    return param_1;
  }
  if (10675199.116730064 < dVar6) {
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_40 = '\0';
    local_188[2] = 0;
    local_68[0] = 2;
    local_188[3] = 10;
    local_60 = param_2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188 + 2,0);
    FGenericPlatformString::Memcpy(local_188[2],L"DaysValue",0x14);
    local_150 = local_188 + 2;
    local_148 = local_68;
    FUN_1407484b0(&local_e8,local_164,&local_150,0);
    if (local_188[2] != 0) {
      FMemory::Free();
    }
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    *param_1 = 0x7fffffffffffffff;
    local_a0 = 0;
    if (local_a8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_e8);
    return param_1;
  }
  dVar6 = dVar6 * 864000000000.0 + 0.5;
  lVar9 = (longlong)dVar6;
  uVar10 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (0.0 <= dVar6) {
    if ((lVar9 == -0x8000000000000000) || ((double)lVar9 == dVar6)) goto LAB_142523a82;
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = uVar10;
    uVar7 = movmskpd((int)local_38,auVar5);
    uVar8 = -(ulonglong)(uVar7 & 1);
  }
  else {
    if ((lVar9 == -0x8000000000000000) || ((double)lVar9 == dVar6)) goto LAB_142523a82;
    auVar4._8_4_ = SUB84(dVar6,0);
    auVar4._0_8_ = dVar6;
    auVar4._12_4_ = uVar10;
    uVar7 = movmskpd((int)local_38,auVar4);
    uVar8 = (ulonglong)(uVar7 & 1 ^ 1);
  }
  dVar6 = (double)(longlong)(lVar9 + uVar8);
LAB_142523a82:
  *param_1 = (longlong)dVar6;
  return param_1;
}



// FUNCTION 142523ac0 FromHours body=792 status=ok
// SIG undefined FromHours(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * UKismetMathLibrary::FromHours(longlong *param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_1a8 [32];
  longlong local_188 [4];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  longlong *local_160;
  undefined4 *local_158;
  longlong *local_150;
  undefined4 *local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_98 [2];
  float local_90;
  longlong *local_80;
  char local_70;
  undefined4 local_68 [2];
  float local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  dVar6 = (double)param_2;
  if (dVar6 < -256204778.80152154) {
    local_138 = 0;
    local_130 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_70 = '\0';
    local_188[0] = 0;
    local_98[0] = 2;
    local_188[1] = 0xb;
    local_90 = param_2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188,0);
    FGenericPlatformString::Memcpy(local_188[0],L"HoursValue",0x16);
    local_160 = local_188;
    local_158 = local_98;
    FUN_1407484b0(&local_138,local_168,&local_160,0);
    if (local_188[0] != 0) {
      FMemory::Free();
    }
    if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    *param_1 = -0x8000000000000000;
    local_f0 = 0;
    if (local_f8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_138);
    return param_1;
  }
  if (256204778.80152154 < dVar6) {
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_40 = '\0';
    local_188[2] = 0;
    local_68[0] = 2;
    local_188[3] = 0xb;
    local_60 = param_2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188 + 2,0);
    FGenericPlatformString::Memcpy(local_188[2],L"HoursValue",0x16);
    local_150 = local_188 + 2;
    local_148 = local_68;
    FUN_1407484b0(&local_e8,local_164,&local_150,0);
    if (local_188[2] != 0) {
      FMemory::Free();
    }
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    *param_1 = 0x7fffffffffffffff;
    local_a0 = 0;
    if (local_a8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_e8);
    return param_1;
  }
  dVar6 = dVar6 * 36000000000.0 + 0.5;
  lVar9 = (longlong)dVar6;
  uVar10 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (0.0 <= dVar6) {
    if ((lVar9 == -0x8000000000000000) || ((double)lVar9 == dVar6)) goto LAB_142523da2;
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = uVar10;
    uVar7 = movmskpd((int)local_38,auVar5);
    uVar8 = -(ulonglong)(uVar7 & 1);
  }
  else {
    if ((lVar9 == -0x8000000000000000) || ((double)lVar9 == dVar6)) goto LAB_142523da2;
    auVar4._8_4_ = SUB84(dVar6,0);
    auVar4._0_8_ = dVar6;
    auVar4._12_4_ = uVar10;
    uVar7 = movmskpd((int)local_38,auVar4);
    uVar8 = (ulonglong)(uVar7 & 1 ^ 1);
  }
  dVar6 = (double)(longlong)(lVar9 + uVar8);
LAB_142523da2:
  *param_1 = (longlong)dVar6;
  return param_1;
}



// FUNCTION 142523de0 FromMilliseconds body=792 status=ok
// SIG undefined FromMilliseconds(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * UKismetMathLibrary::FromMilliseconds(longlong *param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_1a8 [32];
  longlong local_188 [4];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  longlong *local_160;
  undefined4 *local_158;
  longlong *local_150;
  undefined4 *local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_98 [2];
  float local_90;
  longlong *local_80;
  char local_70;
  undefined4 local_68 [2];
  float local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  dVar6 = (double)param_2;
  if (dVar6 < -922337203685477.6) {
    local_138 = 0;
    local_130 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_70 = '\0';
    local_188[0] = 0;
    local_98[0] = 2;
    local_188[1] = 0x12;
    local_90 = param_2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188,0);
    FGenericPlatformString::Memcpy(local_188[0],L"MillisecondsValue",0x24);
    local_160 = local_188;
    local_158 = local_98;
    FUN_1407484b0(&local_138,local_168,&local_160,0);
    if (local_188[0] != 0) {
      FMemory::Free();
    }
    if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    *param_1 = -0x8000000000000000;
    local_f0 = 0;
    if (local_f8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_138);
    return param_1;
  }
  if (922337203685477.6 < dVar6) {
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_40 = '\0';
    local_188[2] = 0;
    local_68[0] = 2;
    local_188[3] = 0x12;
    local_60 = param_2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188 + 2,0);
    FGenericPlatformString::Memcpy(local_188[2],L"MillisecondsValue",0x24);
    local_150 = local_188 + 2;
    local_148 = local_68;
    FUN_1407484b0(&local_e8,local_164,&local_150,0);
    if (local_188[2] != 0) {
      FMemory::Free();
    }
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    *param_1 = 0x7fffffffffffffff;
    local_a0 = 0;
    if (local_a8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_e8);
    return param_1;
  }
  dVar6 = dVar6 * 10000.0 + 0.5;
  lVar9 = (longlong)dVar6;
  uVar10 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (0.0 <= dVar6) {
    if ((lVar9 == -0x8000000000000000) || ((double)lVar9 == dVar6)) goto LAB_1425240c2;
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = uVar10;
    uVar7 = movmskpd((int)local_38,auVar5);
    uVar8 = -(ulonglong)(uVar7 & 1);
  }
  else {
    if ((lVar9 == -0x8000000000000000) || ((double)lVar9 == dVar6)) goto LAB_1425240c2;
    auVar4._8_4_ = SUB84(dVar6,0);
    auVar4._0_8_ = dVar6;
    auVar4._12_4_ = uVar10;
    uVar7 = movmskpd((int)local_38,auVar4);
    uVar8 = (ulonglong)(uVar7 & 1 ^ 1);
  }
  dVar6 = (double)(longlong)(lVar9 + uVar8);
LAB_1425240c2:
  *param_1 = (longlong)dVar6;
  return param_1;
}



// FUNCTION 142524100 FromMinutes body=792 status=ok
// SIG undefined FromMinutes(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * UKismetMathLibrary::FromMinutes(longlong *param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_1a8 [32];
  longlong local_188 [4];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  longlong *local_160;
  undefined4 *local_158;
  longlong *local_150;
  undefined4 *local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_98 [2];
  float local_90;
  longlong *local_80;
  char local_70;
  undefined4 local_68 [2];
  float local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  dVar6 = (double)param_2;
  if (dVar6 < -15372286728.091293) {
    local_138 = 0;
    local_130 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_70 = '\0';
    local_188[0] = 0;
    local_98[0] = 2;
    local_188[1] = 0xd;
    local_90 = param_2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188,0);
    FGenericPlatformString::Memcpy(local_188[0],L"MinutesValue",0x1a);
    local_160 = local_188;
    local_158 = local_98;
    FUN_1407484b0(&local_138,local_168,&local_160,0);
    if (local_188[0] != 0) {
      FMemory::Free();
    }
    if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    *param_1 = -0x8000000000000000;
    local_f0 = 0;
    if (local_f8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_138);
    return param_1;
  }
  if (15372286728.091293 < dVar6) {
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_40 = '\0';
    local_188[2] = 0;
    local_68[0] = 2;
    local_188[3] = 0xd;
    local_60 = param_2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188 + 2,0);
    FGenericPlatformString::Memcpy(local_188[2],L"MinutesValue",0x1a);
    local_150 = local_188 + 2;
    local_148 = local_68;
    FUN_1407484b0(&local_e8,local_164,&local_150,0);
    if (local_188[2] != 0) {
      FMemory::Free();
    }
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    *param_1 = 0x7fffffffffffffff;
    local_a0 = 0;
    if (local_a8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_e8);
    return param_1;
  }
  dVar6 = dVar6 * 600000000.0 + 0.5;
  lVar9 = (longlong)dVar6;
  uVar10 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (0.0 <= dVar6) {
    if ((lVar9 == -0x8000000000000000) || ((double)lVar9 == dVar6)) goto LAB_1425243e2;
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = uVar10;
    uVar7 = movmskpd((int)local_38,auVar5);
    uVar8 = -(ulonglong)(uVar7 & 1);
  }
  else {
    if ((lVar9 == -0x8000000000000000) || ((double)lVar9 == dVar6)) goto LAB_1425243e2;
    auVar4._8_4_ = SUB84(dVar6,0);
    auVar4._0_8_ = dVar6;
    auVar4._12_4_ = uVar10;
    uVar7 = movmskpd((int)local_38,auVar4);
    uVar8 = (ulonglong)(uVar7 & 1 ^ 1);
  }
  dVar6 = (double)(longlong)(lVar9 + uVar8);
LAB_1425243e2:
  *param_1 = (longlong)dVar6;
  return param_1;
}



// FUNCTION 142524420 FromSeconds body=679 status=ok
// SIG undefined FromSeconds(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * UKismetMathLibrary::FromSeconds(undefined8 *param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_198 [32];
  longlong local_178 [4];
  undefined1 local_158 [4];
  undefined1 local_154 [4];
  longlong *local_150;
  undefined4 *local_148;
  longlong *local_140;
  undefined4 *local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_88 [2];
  float local_80;
  longlong *local_70;
  char local_60;
  undefined4 local_58 [2];
  float local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if (-9.223372e+11 <= param_2) {
    if (param_2 <= 9.223372e+11) {
      FTimespan::FromSeconds();
    }
    else {
      local_d8 = 0;
      local_d0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0xffffffff;
      local_a4 = 0;
      local_98 = 0;
      local_90 = 0;
      local_30 = '\0';
      local_178[2] = 0;
      local_58[0] = 2;
      local_178[3] = 0xd;
      local_50 = param_2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_178 + 2,0);
      FGenericPlatformString::Memcpy(local_178[2],L"SecondsValue",0x1a);
      local_140 = local_178 + 2;
      local_138 = local_58;
      FUN_1407484b0(&local_d8,local_154,&local_140,0);
      if (local_178[2] != 0) {
        FMemory::Free();
      }
      if (local_30 != '\0') {
        local_30 = '\0';
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
      *param_1 = 0x7fffffffffffffff;
      local_90 = 0;
      if (local_98 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_d8);
    }
  }
  else {
    local_128 = 0;
    local_120 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0xffffffff;
    local_f4 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_60 = '\0';
    local_178[0] = 0;
    local_88[0] = 2;
    local_178[1] = 0xd;
    local_80 = param_2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_178,0);
    FGenericPlatformString::Memcpy(local_178[0],L"SecondsValue",0x1a);
    local_150 = local_178;
    local_148 = local_88;
    FUN_1407484b0(&local_128,local_158,&local_150,0);
    if (local_178[0] != 0) {
      FMemory::Free();
    }
    if (local_60 != '\0') {
      local_60 = '\0';
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
    *param_1 = 0x8000000000000000;
    local_e0 = 0;
    if (local_e8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_128);
  }
  return param_1;
}



// FUNCTION 1425246d0 FUN_1425246d0 body=220 status=ok
// SIG undefined FUN_1425246d0(void)

int FUN_1425246d0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  void *pvVar5;
  
  if (param_1 == (longlong *)0x0) {
    return -1;
  }
  iVar1 = (int)param_1[1];
  plVar3 = *(longlong **)(param_2 + 0x70);
  iVar4 = iVar1 + 1;
  iVar2 = *(int *)((longlong)plVar3 + 0x34);
  *(int *)(param_1 + 1) = iVar4;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
    FScriptArray::ResizeGrow(param_1,iVar1,iVar2);
    iVar4 = (int)param_1[1];
  }
  pvVar5 = (void *)0x0;
  _Dst = pvVar5;
  if (iVar4 != 0) {
    _Dst = (void *)((longlong)(iVar1 * iVar2) + *param_1);
  }
  if ((*(uint *)(plVar3 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar3 + 0x330))(plVar3,_Dst);
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar2);
  }
  if ((int)param_1[1] != 0) {
    pvVar5 = (void *)((longlong)(iVar1 * iVar2) + *param_1);
  }
  (**(code **)(*plVar3 + 0x300))(plVar3,pvVar5,param_3);
  return iVar1;
}



// FUNCTION 1425247b0 FUN_1425247b0 body=261 status=ok
// SIG undefined FUN_1425247b0(void)

int FUN_1425247b0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  void *pvVar5;
  
  if (param_1 == (longlong *)0x0) {
    return -1;
  }
  plVar3 = *(longlong **)(param_2 + 0x70);
  iVar1 = *(int *)((longlong)plVar3 + 0x34);
  iVar4 = FUN_142524a90();
  if (iVar4 != -1) {
    return -1;
  }
  iVar2 = (int)param_1[1];
  iVar4 = iVar2 + 1;
  *(int *)(param_1 + 1) = iVar4;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
    FScriptArray::ResizeGrow(param_1,iVar2,iVar1);
    iVar4 = (int)param_1[1];
  }
  pvVar5 = (void *)0x0;
  _Dst = pvVar5;
  if (iVar4 != 0) {
    _Dst = (void *)((longlong)(iVar2 * iVar1) + *param_1);
  }
  if ((*(uint *)(plVar3 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar3 + 0x330))(plVar3,_Dst);
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar1);
  }
  if ((int)param_1[1] != 0) {
    pvVar5 = (void *)((longlong)(iVar2 * iVar1) + *param_1);
  }
  (**(code **)(*plVar3 + 0x300))(plVar3,pvVar5,param_3);
  return iVar2;
}



// FUNCTION 1425248c0 FUN_1425248c0 body=271 status=ok
// SIG undefined FUN_1425248c0(void)

void FUN_1425248c0(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong *local_48;
  longlong *local_40;
  int local_38;
  
  if ((param_1 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    iVar4 = (int)param_3[1];
    iVar1 = *(int *)(*(longlong *)(param_4 + 0x70) + 0x34);
    plVar3 = *(longlong **)(param_2 + 0x70);
    iVar2 = *(int *)((longlong)plVar3 + 0x34);
    if (0 < iVar4) {
      iVar7 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar7 + iVar4;
      local_48 = plVar3;
      local_40 = param_1;
      local_38 = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + iVar4) {
        FScriptArray::ResizeGrow(param_1,iVar7,iVar2);
      }
      FUN_14251bfb0(&local_48,iVar7,iVar4);
      iVar4 = (int)param_3[1];
      iVar9 = 0;
      if (0 < iVar4) {
        iVar6 = 0;
        iVar7 = iVar2 * iVar7;
        do {
          if (iVar4 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = (longlong)iVar6 + *param_3;
          }
          if ((int)param_1[1] == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = (longlong)iVar7 + *param_1;
          }
          (**(code **)(*plVar3 + 0x300))(plVar3,lVar5,lVar8);
          iVar4 = (int)param_3[1];
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + iVar2;
          iVar6 = iVar6 + iVar1;
        } while (iVar9 < iVar4);
      }
    }
  }
  return;
}



// FUNCTION 1425249d0 FUN_1425249d0 body=191 status=ok
// SIG undefined FUN_1425249d0(void)

void FUN_1425249d0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)(param_1 + 1);
    uVar5 = (ulonglong)uVar1;
    plVar3 = *(longlong **)(param_2 + 0x70);
    iVar2 = *(int *)((longlong)plVar3 + 0x34);
    if (uVar1 != 0) {
      if ((plVar3[7] & 0x1040000000U) == 0) {
        if (uVar1 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *param_1;
        }
        if (0 < (int)uVar1) {
          do {
            if ((~(byte)((ulonglong)plVar3[7] >> 0x24) & 1) != 0) {
              (**(code **)(*plVar3 + 0x328))(plVar3,lVar4);
            }
            lVar4 = lVar4 + iVar2;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) != 0) {
        FScriptArray::ResizeTo(param_1,0,iVar2);
      }
    }
  }
  return;
}



// FUNCTION 142524a90 FUN_142524a90 body=170 status=ok
// SIG undefined FUN_142524a90(void)

int FUN_142524a90(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar5 = -1;
  if (param_1 == (longlong *)0x0) {
    return -1;
  }
  iVar4 = (int)param_1[1];
  iVar6 = 0;
  plVar2 = *(longlong **)(param_2 + 0x70);
  iVar1 = *(int *)((longlong)plVar2 + 0x34);
  if (iVar4 < 1) {
    iVar5 = -1;
  }
  else {
    iVar7 = 0;
    do {
      if (iVar5 != -1) {
        return iVar5;
      }
      if (iVar4 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (longlong)iVar7 + *param_1;
      }
      cVar3 = (**(code **)(*plVar2 + 0x2b8))(plVar2,param_3,lVar8,0);
      iVar4 = (int)param_1[1];
      if (cVar3 != '\0') {
        iVar5 = iVar6;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + iVar1;
    } while (iVar6 < iVar4);
  }
  return iVar5;
}



// FUNCTION 142524b40 FUN_142524b40 body=462 status=ok
// SIG undefined FUN_142524b40(void)

void FUN_142524b40(longlong *param_1,longlong param_2,int param_3,void *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 local_res8;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  if (param_1 != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x70);
    if ((-1 < param_3) && (param_3 < (int)param_1[1])) {
      if ((int)param_1[1] == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = (longlong)(*(int *)((longlong)plVar1 + 0x34) * param_3) + *param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x000142524ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x318))(plVar1,param_4,lVar2);
      return;
    }
    puVar3 = *(undefined2 **)(param_2 + 0x20);
    if (puVar3 == (undefined2 *)0x0) {
      local_50 = 5;
      local_58 = puVar3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Memcpy(local_58,&DAT_143f3edc8,10);
    }
    else {
      UObjectBaseUtility::GetPathName(puVar3,&local_58,0);
    }
    local_res8 = *(undefined8 *)(param_2 + 0x18);
    lVar2 = param_1[1];
    puVar3 = &DAT_143f3eda8;
    if ((int)local_50 != 0) {
      puVar3 = local_58;
    }
    FName::ToString(&local_res8,&local_38);
    puVar4 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar4 = local_38;
    }
    FString::PrintfImpl(&local_48,
                        L"Attempted to access index %d from array \'%s\' of length %d in \'%s\'!",
                        param_3,puVar4,(int)lVar2,puVar3);
    puVar3 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar3 = local_48;
    }
    FUN_141790820(puVar3,3,DAT_146afc4f0);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if ((*(uint *)(plVar1 + 7) >> 9 & 1) != 0) {
      _guard_xfg_dispatch_icall_nop
                (param_4,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
      return;
    }
    (**(code **)(*plVar1 + 0x330))(plVar1,param_4);
  }
  return;
}



// FUNCTION 142524d10 GenericArray_HandleBool body=117 status=ok
// SIG undefined GenericArray_HandleBool(void)

void UKismetArrayLibrary::GenericArray_HandleBool(longlong param_1,char *param_2)

{
  bool bVar1;
  longlong lVar2;
  byte bVar3;
  
  if (param_1 != 0) {
    lVar2 = UBoolProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*param_2 == '\0') {
        bVar3 = 0;
      }
      else {
        bVar3 = *(byte *)(param_1 + 0x72);
      }
      param_2[*(byte *)(param_1 + 0x71)] =
           ~*(byte *)(param_1 + 0x73) & param_2[*(byte *)(param_1 + 0x71)] | bVar3;
    }
  }
  return;
}



// FUNCTION 142524d90 FUN_142524d90 body=438 status=ok
// SIG undefined FUN_142524d90(void)

void FUN_142524d90(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  void *_Dst;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 local_res8;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  if (param_1 != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x70);
    iVar3 = *(int *)((longlong)plVar2 + 0x34);
    if ((param_4 < 0) ||
       ((iVar1 = (int)param_1[1], iVar1 <= param_4 && ((param_4 < 0 || (iVar1 < param_4)))))) {
      iVar3 = (int)param_1[1] + -1;
      local_res8 = *(undefined8 *)(param_2 + 0x18);
      if ((int)param_1[1] < 1) {
        iVar3 = 0;
      }
      FName::ToString(&local_res8,&local_38);
      puVar5 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar5 = local_38;
      }
      FString::PrintfImpl(&local_48,
                          L"Attempted to insert an item into array %s out of bounds [%d/%d]!",puVar5
                          ,param_4,iVar3);
      puVar5 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar5 = local_48;
      }
      FUN_141790820(puVar5,3,DAT_146afc500);
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        FScriptArray::ResizeGrow(param_1,iVar1,iVar3);
      }
      lVar6 = (longlong)(iVar3 * param_4);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)((param_4 + 1) * iVar3) + *param_1),(void *)(*param_1 + lVar6),
                 (longlong)((iVar1 - param_4) * iVar3));
      lVar4 = 0;
      if ((int)param_1[1] == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)(*param_1 + lVar6);
      }
      if ((*(uint *)(plVar2 + 7) >> 9 & 1) == 0) {
        (**(code **)(*plVar2 + 0x330))(plVar2,_Dst);
      }
      else {
        _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar3);
      }
      if ((int)param_1[1] != 0) {
        lVar4 = *param_1 + lVar6;
      }
      (**(code **)(*plVar2 + 0x300))(plVar2,lVar4,param_3);
    }
  }
  return;
}



// FUNCTION 142524f50 GenericArray_IsValidIndex body=22 status=ok
// SIG undefined GenericArray_IsValidIndex(void)

undefined1
UKismetArrayLibrary::GenericArray_IsValidIndex(longlong param_1,undefined8 param_2,int param_3)

{
  if (((param_1 != 0) && (-1 < param_3)) && (param_3 < *(int *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142524f70 GenericArray_LastIndex body=17 status=ok
// SIG undefined GenericArray_LastIndex(void)

int UKismetArrayLibrary::GenericArray_LastIndex(longlong param_1)

{
  if (param_1 != 0) {
    return *(int *)(param_1 + 8) + -1;
  }
  return -1;
}



// FUNCTION 142524f90 GenericArray_Length body=12 status=ok
// SIG undefined GenericArray_Length(void)

undefined4 UKismetArrayLibrary::GenericArray_Length(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  return 0;
}



// FUNCTION 142524fa0 FUN_142524fa0 body=364 status=ok
// SIG undefined FUN_142524fa0(void)

void FUN_142524fa0(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 local_res8;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  if (param_1 != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x70);
    iVar4 = *(int *)((longlong)plVar1 + 0x34);
    if ((-1 < param_3) && (iVar2 = (int)param_1[1], param_3 < iVar2)) {
      if ((plVar1[7] & 0x1040000000U) == 0) {
        if (iVar2 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (longlong)(iVar4 * param_3) + *param_1;
        }
        if ((~(byte)((ulonglong)plVar1[7] >> 0x24) & 1) != 0) {
          (**(code **)(*plVar1 + 0x328))(plVar1,lVar6);
          iVar2 = (int)param_1[1];
        }
      }
      iVar3 = (iVar2 - param_3) + -1;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(iVar4 * param_3) + *param_1),
                   (void *)((longlong)((param_3 + 1) * iVar4) + *param_1),(longlong)(iVar4 * iVar3))
        ;
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 + -1;
      FScriptArray::ResizeShrink(param_1,iVar4);
      return;
    }
    iVar4 = (int)param_1[1] + -1;
    local_res8 = *(undefined8 *)(param_2 + 0x18);
    if ((int)param_1[1] < 1) {
      iVar4 = 0;
    }
    FName::ToString(&local_res8,&local_18);
    puVar5 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar5 = local_18;
    }
    FString::PrintfImpl(&local_28,
                        L"Attempted to remove an item from an invalid index from array %s [%d/%d]!",
                        puVar5,param_3,iVar4);
    puVar5 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar5 = local_28;
    }
    FUN_141790820(puVar5,3,DAT_146afc508);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142525110 GenericArray_RemoveItem body=117 status=ok
// SIG undefined GenericArray_RemoveItem(void)

uint UKismetArrayLibrary::GenericArray_RemoveItem
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint in_EAX;
  
  if ((param_1 != 0) && (in_EAX = FUN_142524a90(), in_EAX != 0xffffffff)) {
    do {
      FUN_142524fa0(param_1,param_2,in_EAX);
      in_EAX = FUN_142524a90(param_1,param_2,param_3);
    } while (in_EAX != 0xffffffff);
    return 0xffffff01;
  }
  return in_EAX & 0xffffff00;
}



// FUNCTION 142525190 FUN_142525190 body=516 status=ok
// SIG undefined FUN_142525190(void)

void FUN_142525190(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 local_res8;
  undefined2 *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  int local_38;
  
  if (param_1 != (longlong *)0x0) {
    if (param_3 < 0) {
      local_res8 = *(undefined8 *)(param_2 + 0x18);
      FName::ToString(&local_res8,&local_48);
      plVar7 = (longlong *)&DAT_143f3eda8;
      if ((int)local_40 != 0) {
        plVar7 = local_48;
      }
      FString::PrintfImpl(&local_58,
                          L"Attempted to resize an array using negative size: Array = %s, Size = %d!"
                          ,plVar7,param_3);
      puVar6 = &DAT_143f3eda8;
      if (local_50 != 0) {
        puVar6 = local_58;
      }
      FUN_141790820(puVar6,3,DAT_146afc510);
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
        return;
      }
    }
    else {
      plVar7 = *(longlong **)(param_2 + 0x70);
      iVar1 = (int)param_1[1];
      iVar2 = *(int *)((longlong)plVar7 + 0x34);
      local_48 = plVar7;
      local_40 = param_1;
      local_38 = iVar2;
      if (iVar1 < param_3) {
        *(int *)(param_1 + 1) = param_3;
        if (*(int *)((longlong)param_1 + 0xc) < param_3) {
          FScriptArray::ResizeGrow(param_1,iVar1,iVar2);
        }
        FUN_14251bfb0(&local_48,iVar1,param_3 - iVar1);
      }
      else if (param_3 < iVar1) {
        uVar8 = iVar1 - param_3;
        if ((plVar7[7] & 0x1040000000U) == 0) {
          if (iVar1 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = (longlong)(iVar2 * param_3) + *param_1;
          }
          if (0 < (int)uVar8) {
            uVar9 = (ulonglong)uVar8;
            do {
              if ((~(byte)((ulonglong)plVar7[7] >> 0x24) & 1) != 0) {
                (**(code **)(*plVar7 + 0x328))(plVar7,lVar5);
              }
              lVar5 = lVar5 + iVar2;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
        if (uVar8 != 0) {
          iVar3 = (int)param_1[1];
          iVar4 = (iVar3 - uVar8) - param_3;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)(iVar2 * param_3) + *param_1),
                       (void *)((longlong)(iVar2 * iVar1) + *param_1),(longlong)(iVar2 * iVar4));
            iVar3 = (int)param_1[1];
          }
          *(uint *)(param_1 + 1) = iVar3 - uVar8;
          FScriptArray::ResizeShrink(param_1,iVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 1425253a0 FUN_1425253a0 body=390 status=ok
// SIG undefined FUN_1425253a0(void)

void FUN_1425253a0(longlong *param_1,longlong param_2,int param_3,undefined8 param_4,char param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  undefined8 local_res8;
  undefined2 *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  int local_38;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  plVar7 = *(longlong **)(param_2 + 0x70);
  iVar4 = *(int *)((longlong)plVar7 + 0x34);
  local_48 = plVar7;
  local_40 = param_1;
  local_38 = iVar4;
  if (((param_3 < 0) || ((int)param_1[1] <= param_3)) && (param_5 != '\0')) {
    if (param_3 < 0) goto LAB_142525474;
    iVar2 = (int)param_1[1];
    if (iVar2 <= param_3) {
      iVar5 = (param_3 - iVar2) + 1;
      iVar1 = iVar2 + iVar5;
      *(int *)(param_1 + 1) = iVar1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        FScriptArray::ResizeGrow(param_1,iVar2,iVar4);
      }
      FUN_14251bfb0(&local_48,iVar2,iVar5);
    }
  }
  if ((-1 < param_3) && (param_3 < (int)param_1[1])) {
    if ((int)param_1[1] == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (longlong)(iVar4 * param_3) + *param_1;
    }
    (**(code **)(*plVar7 + 0x300))(plVar7,lVar3,param_4);
    return;
  }
LAB_142525474:
  iVar4 = (int)param_1[1] + -1;
  local_res8 = *(undefined8 *)(param_2 + 0x18);
  if ((int)param_1[1] < 1) {
    iVar4 = 0;
  }
  FName::ToString(&local_res8,&local_48);
  plVar7 = (longlong *)&DAT_143f3eda8;
  if ((int)local_40 != 0) {
    plVar7 = local_48;
  }
  FString::PrintfImpl(&local_58,L"Attempted to set an invalid index on array %s [%d/%d]!",plVar7,
                      param_3,iVar4);
  puVar6 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar6 = local_58;
  }
  FUN_141790820(puVar6,3,DAT_146afc4f8);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142525530 FUN_142525530 body=220 status=ok
// SIG undefined FUN_142525530(void)

void FUN_142525530(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((param_1 != 0) &&
     ((local_28 = *(longlong *)(param_1 + 0x10), (int)param_2 != 0 ||
      ((int)((ulonglong)param_2 >> 0x20) != 0)))) {
    if (local_28 == 0) {
      local_20 = (longlong *)0x0;
    }
    else {
      local_20 = *(longlong **)(local_28 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    FUN_14067b2b0(&local_28);
    if (local_20 != (longlong *)0x0) {
      while (local_20[3] != param_2) {
        local_20 = (longlong *)local_20[5];
        FUN_14067b2b0(&local_28);
        if (local_20 == (longlong *)0x0) {
          return;
        }
      }
      (**(code **)(*local_20 + 0x2e8))
                (local_20,*(int *)((longlong)local_20 + 0x44) + param_1,param_3,1);
    }
  }
  return;
}



// FUNCTION 142525610 GenericArray_Shuffle body=239 status=ok
// SIG undefined GenericArray_Shuffle(void)

void UKismetArrayLibrary::GenericArray_Shuffle(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 != (longlong *)0x0) {
    iVar4 = 0;
    iVar7 = (int)param_1[1] + -1;
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x70) + 0x34);
    if (-1 < iVar7) {
      lVar5 = 0;
      iVar6 = iVar7;
      do {
        if (iVar6 + 1 < 1) {
          iVar2 = 0;
        }
        else {
          iVar2 = rand();
          iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)(iVar6 + 1));
          iVar2 = iVar6;
          if (iVar3 <= iVar6) {
            iVar2 = iVar3;
          }
        }
        if (iVar4 != iVar2 + iVar4) {
          FUN_140cbcb50(*param_1 + lVar5,(longlong)(iVar1 * (iVar2 + iVar4)) + *param_1,
                        (longlong)iVar1);
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
        lVar5 = lVar5 + iVar1;
      } while (iVar4 <= iVar7);
    }
  }
  return;
}



// FUNCTION 142525700 GenericArray_Swap body=385 status=ok
// SIG undefined GenericArray_Swap(void)

void UKismetArrayLibrary::GenericArray_Swap
               (longlong *param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_res8;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  if (param_1 != (longlong *)0x0) {
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x70) + 0x34);
    if ((param_3 < 0) || (iVar3 = (int)param_1[1], iVar3 <= param_3)) {
      iVar3 = (int)param_1[1];
    }
    else if ((-1 < param_4) && (param_4 < iVar3)) {
      if (param_3 == param_4) {
        return;
      }
      FUN_140cbcb50((longlong)(iVar1 * param_3) + *param_1,(longlong)(iVar1 * param_4) + *param_1,
                    (longlong)iVar1);
      return;
    }
    local_res8 = *(undefined8 *)(param_2 + 0x18);
    if (iVar3 == 0) {
      FName::ToString(&local_res8,&local_18);
      puVar2 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar2 = local_18;
      }
      FString::PrintfImpl(&local_28,L"Attempted to swap elements in empty array %s!",puVar2);
      puVar2 = &DAT_143f3eda8;
      if (local_20 != 0) {
        puVar2 = local_28;
      }
      FUN_141790820(puVar2,3,DAT_146afc518);
      bVar4 = local_28 != (undefined2 *)0x0;
      local_28 = local_18;
      if (bVar4) {
        FMemory::Free();
        local_28 = local_18;
      }
    }
    else {
      FName::ToString(&local_res8,&local_28);
      puVar2 = &DAT_143f3eda8;
      if (local_20 != 0) {
        puVar2 = local_28;
      }
      FString::PrintfImpl(&local_18,
                          L"Attempted to swap elements [%d] and [%d] in array %s. Available index range: [0 %d)!"
                          ,param_3,param_4,puVar2,iVar3 + -1);
      puVar2 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar2 = local_18;
      }
      FUN_141790820(puVar2,3,DAT_146afc518);
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142525890 GenericPercent_FloatFloat body=117 status=ok
// SIG undefined GenericPercent_FloatFloat(void)

float UKismetMathLibrary::GenericPercent_FloatFloat(float param_1,float param_2)

{
  long in_ECX;
  
  if (param_2 != 0.0) {
    if (1e-08 < ABS(param_2)) {
      param_2 = (float)(int)(param_1 / param_2) * param_2;
      if (ABS(param_1) < ABS(param_2)) {
        param_2 = param_1;
      }
      return param_1 - param_2;
    }
    AK::MemoryMgr::StartProfileThreadUsage(in_ECX);
  }
  return 0.0;
}



// FUNCTION 142525910 FUN_142525910 body=75 status=ok
// SIG undefined FUN_142525910(void)

void FUN_142525910(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  if ((param_1 != 0) &&
     (plVar1 = (longlong *)FindField<UStructProperty>(*(undefined8 *)(param_1 + 0x10)),
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x2e8))(plVar1,*(int *)((longlong)plVar1 + 0x44) + param_1,param_3,1);
  }
  return;
}



// FUNCTION 142525960 FUN_142525960 body=246 status=ok
// SIG undefined FUN_142525960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142525960(longlong *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x560))(param_1,&local_38,1);
    *(ulonglong *)param_3 = CONCAT44((local_28 - local_34) * 0.5,(local_2c - local_38) * 0.5);
    param_3[2] = (local_24 - local_30) * 0.5;
    fVar1 = param_3[2];
    *param_2 = CONCAT44(local_34 + param_3[1],local_38 + *param_3);
    *(float *)(param_2 + 1) = local_30 + fVar1;
    return;
  }
  *param_2 = _DAT_1468b5d90;
  *(float *)(param_2 + 1) = DAT_1468b5d98;
  *(undefined8 *)param_3 = _DAT_1468b5d90;
  param_3[2] = DAT_1468b5d98;
  return;
}



// FUNCTION 142525a60 FUN_142525a60 body=296 status=ok
// SIG undefined FUN_142525a60(void)

void FUN_142525a60(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  uVar8 = uVar7;
  if (0 < (int)param_1[1]) {
    do {
      if ((*(longlong *)(uVar8 + *param_1) != 0) &&
         (lVar2 = *(longlong *)(*(longlong *)(uVar8 + *param_1) + 0x118), lVar2 != 0)) {
        if (param_2 != 0) {
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(param_2 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(param_2 + 0x90) * 8) != param_2 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_142525b5a;
        }
        plVar3 = (longlong *)*param_3;
        iVar1 = (int)param_3[1];
        for (plVar5 = plVar3; plVar5 != plVar3 + iVar1; plVar5 = plVar5 + 1) {
          if (*plVar5 == lVar2) {
            if ((int)((longlong)plVar5 - (longlong)plVar3 >> 3) != -1) goto LAB_142525b5a;
            break;
          }
        }
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
      }
LAB_142525b5a:
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = uVar8 + 8;
    } while ((int)uVar6 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 142525b90 GetAdIDCount body=83 status=ok
// SIG undefined GetAdIDCount(void)

void UKismetSystemLibrary::GetAdIDCount(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,"Advertising",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142525bd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x78))(plVar4);
    return;
  }
  return;
}



// FUNCTION 142525c00 FUN_142525c00 body=199 status=ok
// SIG undefined FUN_142525c00(void)

longlong FUN_142525c00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x240)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x238));
      if (lVar1 != 0) {
        if (param_2 != 0) {
          lVar3 = UAssetUserData::GetPrivateStaticClass();
          lVar4 = param_2;
          do {
            lVar5 = param_2;
            if (lVar4 == lVar3) goto LAB_142525c60;
            lVar4 = *(longlong *)(lVar4 + 0x30);
          } while (lVar4 != 0);
        }
        lVar5 = 0;
LAB_142525c60:
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return lVar1;
        }
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar7 < *(int *)(param_1 + 0x240));
  }
  return 0;
}



// FUNCTION 142525cd0 GetAxes body=149 status=ok
// SIG undefined GetAxes(void)

void UKismetMathLibrary::GetAxes
               (undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FRotationMatrix::FRotationMatrix(&local_48,param_1);
  *param_2 = local_48;
  param_2[1] = local_44;
  param_2[2] = local_40;
  *param_3 = local_38;
  param_3[1] = local_34;
  param_3[2] = local_30;
  *param_4 = local_28;
  param_4[2] = local_20;
  param_4[1] = local_24;
  return;
}



// FUNCTION 142525d70 FUN_142525d70 body=652 status=ok
// SIG undefined FUN_142525d70(void)

void FUN_142525d70(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_res8;
  float local_resc;
  undefined8 local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  fVar3 = *param_2;
  fVar5 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar4 = fVar5 * 1.0 - fVar1 * 0.0;
  fVar6 = fVar1 * 0.0 - fVar3 * 1.0;
  fVar7 = fVar3 * 0.0 - fVar5 * 0.0;
  fVar4 = fVar4 + fVar4;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  local_3c = (fVar7 * fVar5 - fVar6 * fVar1) + fVar2 * fVar4 + 0.0;
  local_38 = (fVar4 * fVar1 - fVar7 * fVar3) + fVar2 * fVar6 + 0.0;
  local_34 = (fVar6 * fVar3 - fVar4 * fVar5) + fVar2 * fVar7 + 1.0;
  fVar4 = fVar5 * 0.0 - fVar1 * 1.0;
  fVar6 = fVar1 * 0.0 - fVar3 * 0.0;
  fVar7 = fVar3 * 1.0 - fVar5 * 0.0;
  fVar4 = fVar4 + fVar4;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  local_30 = (fVar7 * fVar5 - fVar6 * fVar1) + fVar2 * fVar4 + 0.0;
  local_2c = (fVar4 * fVar1 - fVar7 * fVar3) + fVar2 * fVar6 + 1.0;
  local_28 = (fVar6 * fVar3 - fVar4 * fVar5) + fVar2 * fVar7 + 0.0;
  fVar4 = fVar5 * 0.0 - fVar1 * 0.0;
  fVar6 = fVar1 * 1.0 - fVar3 * 0.0;
  fVar7 = fVar3 * 0.0 - fVar5 * 1.0;
  fVar4 = fVar4 + fVar4;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  local_24 = (fVar7 * fVar5 - fVar6 * fVar1) + fVar2 * fVar4 + 1.0;
  local_20 = (fVar4 * fVar1 - fVar7 * fVar3) + fVar2 * fVar6 + 0.0;
  local_1c = (fVar6 * fVar3 - fVar4 * fVar5) + fVar2 * fVar7 + 0.0;
  fVar3 = param_1[1];
  fVar5 = *param_1 * *param_1 + fVar3 * fVar3 + param_1[2] * param_1[2];
  if (fVar5 == 1.0) {
    local_48 = *(undefined8 *)param_1;
    local_40 = param_1[2];
  }
  else {
    if (1e-08 <= fVar5) {
      auVar8 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      local_res8 = auVar8._0_4_;
      local_res8 = local_res8 + local_res8 * (0.5 - fVar5 * 0.5 * local_res8 * local_res8);
      local_res8 = local_res8 + local_res8 * (0.5 - fVar5 * 0.5 * local_res8 * local_res8);
      fVar5 = local_res8 * *param_1;
      local_40 = local_res8 * param_1[2];
      fVar3 = local_res8 * fVar3;
    }
    else {
      local_40 = DAT_1468b5d98;
      fVar3 = DAT_1468b5d94;
      fVar5 = DAT_1468b5d90;
    }
    local_48 = CONCAT44(fVar3,fVar5);
  }
  FMath::GetAzimuthAndElevation(&local_res8,&local_48,&local_24,&local_30,&local_3c);
  *param_3 = local_res8 * 57.295776;
  *param_4 = local_resc * 57.295776;
  return;
}



// FUNCTION 142526000 FUN_142526000 body=266 status=ok
// SIG undefined FUN_142526000(void)

float FUN_142526000(void)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  lVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afc8c0) && (_Init_thread_header(&DAT_146afc8c0), DAT_146afc8c0 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ScreenPercentage");
    lVar4 = lVar5;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
    }
    DAT_146afc8b8 = lVar4;
    _Init_thread_footer(&DAT_146afc8c0);
  }
  lVar4 = DAT_146afc8b8;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
    lVar5 = 4;
  }
  fVar6 = *(float *)(lVar5 + lVar4) * 0.01;
  if (0.0 < fVar6) {
    return fVar6;
  }
  return 1.0;
}



// FUNCTION 142526110 GetCharacterArrayFromString body=356 status=ok
// SIG undefined GetCharacterArrayFromString(void)

longlong * UKismetStringLibrary::GetCharacterArrayFromString(longlong *param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  wchar_t local_res8 [4];
  wchar_t *local_38;
  undefined8 local_30;
  
  iVar7 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (1 < (int)param_2[1]) {
    for (; (-1 < iVar7 && (iVar7 < (int)param_2[1])); iVar7 = iVar7 + 1) {
      local_38 = (wchar_t *)0x0;
      local_30 = 2;
      local_res8[0] = *(wchar_t *)(*param_2 + (longlong)iVar7 * 2);
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      pwVar1 = local_38;
      iVar5 = (int)local_30;
      if (0 < (int)local_30) {
        wcsncpy(local_38,local_res8,1);
        pwVar1[1] = L'\0';
      }
      lVar6 = param_1[1];
      iVar3 = (int)lVar6 + 1;
      *(int *)(param_1 + 1) = iVar3;
      if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1);
      }
      uVar2 = local_30._4_4_;
      puVar4 = (undefined8 *)((longlong)(int)lVar6 * 0x10 + *param_1);
      local_38 = (wchar_t *)0x0;
      local_30 = 0;
      *puVar4 = pwVar1;
      *(int *)(puVar4 + 1) = iVar5;
      *(undefined4 *)((longlong)puVar4 + 0xc) = uVar2;
    }
    iVar7 = (int)param_1[1];
    lVar8 = (longlong)iVar7;
    lVar6 = lVar8 * 0x10 + -0x10;
    iVar5 = iVar7 + -1;
    if (*(longlong *)(lVar6 + *param_1) != 0) {
      FMemory::Free();
      iVar7 = (int)param_1[1];
    }
    iVar5 = (iVar7 - iVar5) + -1;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 + *param_1),(void *)(lVar8 * 0x10 + *param_1),(longlong)iVar5 << 4);
      iVar7 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar7 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
  }
  return param_1;
}



// FUNCTION 142526280 GetCharacterAsNumber body=39 status=ok
// SIG undefined GetCharacterAsNumber(void)

undefined2 UKismetStringLibrary::GetCharacterAsNumber(longlong *param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    iVar1 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar1 = 0;
    }
    if (param_2 < iVar1) {
      return *(undefined2 *)(*param_1 + (longlong)param_2 * 2);
    }
  }
  return 0;
}



// FUNCTION 1425262b0 GetClassDisplayName body=172 status=ok
// SIG undefined GetClassDisplayName(void)

longlong * UKismetSystemLibrary::GetClassDisplayName(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  ulonglong local_res8;
  longlong local_28 [4];
  
  lVar1 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  bVar3 = param_2 == 0;
  if (bVar3) {
    local_28[1] = 0;
    plVar2 = local_28;
  }
  else {
    local_res8 = *(ulonglong *)(param_2 + 0x18);
    FName::ToString(&local_res8,local_28 + 2);
    plVar2 = local_28 + 2;
    lVar1 = local_28[2];
  }
  *param_1 = lVar1;
  *plVar2 = 0;
  *(int *)(param_1 + 1) = (int)plVar2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  if (bVar3) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar3) && (local_28[2] != 0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142526360 FUN_142526360 body=221 status=ok
// SIG undefined FUN_142526360(void)

longlong * FUN_142526360(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_98 [56];
  char local_60;
  
  plVar3 = (longlong *)FUN_1422cb6d0();
  if (plVar3 == (longlong *)0x0) {
LAB_14252641e:
    *param_1 = 0;
    return param_1;
  }
  FPrimaryAssetTypeInfo::FPrimaryAssetTypeInfo(local_98);
  cVar2 = (**(code **)(*plVar3 + 0x308))(plVar3,*param_2,local_98);
  if ((cVar2 == '\0') || (local_60 == '\0')) {
    FPrimaryAssetTypeInfo::~FPrimaryAssetTypeInfo(local_98);
    goto LAB_14252641e;
  }
  lVar4 = *plVar3;
  *param_1 = 0;
  lVar4 = (**(code **)(lVar4 + 0x2b8))(plVar3,param_2);
  if (lVar4 != 0) {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142526405;
  }
  lVar4 = 0;
LAB_142526405:
  *param_1 = lVar4;
  FPrimaryAssetTypeInfo::~FPrimaryAssetTypeInfo(local_98);
  return param_1;
}



// FUNCTION 142526440 GetColorBilinear body=791 status=ok
// SIG undefined GetColorBilinear(void)

float * FImportanceTexture::GetColorBilinear
                  (int *param_1,float *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float local_res8;
  float fStackX_c;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  
  if (param_4 < 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (byte)(param_1[2] + -1);
    if (param_4 < param_1[2] + -1) {
      bVar2 = (byte)param_4;
    }
  }
  iVar5 = *param_1 + -1 >> (bVar2 & 0x1f);
  iVar6 = iVar5 + 1;
  iVar7 = param_1[1] + -1 >> (bVar2 & 0x1f);
  iVar8 = (param_1[1] * *param_1 - (iVar7 + 1) * iVar6) * 4;
  fStackX_c = (float)((ulonglong)param_3 >> 0x20);
  fStackX_c = (float)iVar7 * fStackX_c;
  local_res8 = (float)param_3;
  local_res8 = (float)iVar5 * local_res8;
  iVar3 = (int)ROUND((fStackX_c + fStackX_c) - 0.5) >> 1;
  if (iVar3 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar7;
    if (iVar3 < iVar7) {
      iVar1 = iVar3;
    }
  }
  iVar4 = (int)ROUND((local_res8 + local_res8) - 0.5) >> 1;
  iVar3 = 0;
  if ((-1 < iVar4) && (iVar3 = iVar5, iVar4 < iVar5)) {
    iVar3 = iVar4;
  }
  iVar5 = iVar3 + iVar1 * iVar6 +
          iVar8 / 3 + (iVar8 >> 0x1f) +
          (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f);
  FLinearColor::FLinearColor(&local_c8,*(longlong *)(param_1 + 0xc) + (longlong)iVar5 * 4);
  if ((iVar6 == 1) || (iVar7 + 1 == 1)) {
    *(ulonglong *)param_2 = CONCAT44(fStack_c4,local_c8);
    *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_bc,fStack_c0);
  }
  else {
    FLinearColor::FLinearColor
              (&local_d8,*(longlong *)(param_1 + 0xc) + (longlong)(iVar6 + iVar5) * 4);
    FLinearColor::FLinearColor(&local_b8,*(longlong *)(param_1 + 0xc) + (longlong)(iVar5 + 1) * 4);
    FLinearColor::FLinearColor
              (&local_a8,*(longlong *)(param_1 + 0xc) + (longlong)(iVar6 + iVar5 + 1) * 4);
    fStackX_c = fStackX_c - (float)iVar1;
    local_res8 = local_res8 - (float)iVar3;
    fStack_bc = (local_ac - fStack_bc) * local_res8 + fStack_bc;
    local_c8 = (local_b8 - local_c8) * local_res8 + local_c8;
    fStack_c4 = (local_b4 - fStack_c4) * local_res8 + fStack_c4;
    fStack_c0 = (local_b0 - fStack_c0) * local_res8 + fStack_c0;
    *param_2 = (((local_a8 - local_d8) * local_res8 + local_d8) - local_c8) * fStackX_c + local_c8;
    param_2[1] = (((local_a4 - local_d4) * local_res8 + local_d4) - fStack_c4) * fStackX_c +
                 fStack_c4;
    param_2[2] = (((local_a0 - local_d0) * local_res8 + local_d0) - fStack_c0) * fStackX_c +
                 fStack_c0;
    param_2[3] = (((local_9c - local_cc) * local_res8 + local_cc) - fStack_bc) * fStackX_c +
                 fStack_bc;
  }
  return param_2;
}



// FUNCTION 142526760 GetCommandLine body=116 status=ok
// SIG undefined GetCommandLine(void)

undefined8 * UKismetSystemLibrary::GetCommandLine(undefined8 *param_1)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  
  psVar1 = (short *)FCommandLine::Get();
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



// FUNCTION 1425267e0 FUN_1425267e0 body=116 status=ok
// SIG undefined FUN_1425267e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425267e0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  if (param_1 != 0) {
    *param_2 = *(undefined8 *)(param_1 + 0x1d0);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x1d8);
    *param_3 = *(undefined8 *)(param_1 + 0x1dc);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x1e4);
    *param_4 = *(undefined4 *)(param_1 + 0x1e8);
    return;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  *param_3 = _DAT_1468b5d90;
  *(undefined4 *)(param_3 + 1) = DAT_1468b5d98;
  *param_4 = 0;
  return;
}



// FUNCTION 142526860 FUN_142526860 body=98 status=ok
// SIG undefined FUN_142526860(void)

undefined4 FUN_142526860(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,puVar3);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*plVar1 + 0x40))(plVar1);
    if (puVar2 != (undefined4 *)0x0) {
      return *puVar2;
    }
  }
  return 0;
}



// FUNCTION 1425268d0 FUN_1425268d0 body=95 status=ok
// SIG undefined FUN_1425268d0(void)

undefined4 FUN_1425268d0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,puVar3);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*plVar1 + 0x38))(plVar1);
    if (puVar2 != (undefined4 *)0x0) {
      return *puVar2;
    }
  }
  return 0;
}



// FUNCTION 142526930 GetConvenientWindowedResolutions body=112 status=ok
// SIG undefined GetConvenientWindowedResolutions(void)

undefined8 UKismetSystemLibrary::GetConvenientWindowedResolutions(undefined8 param_1)

{
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_60 = 0;
  local_58 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  if (DAT_1469f4590 == (longlong *)0x0) {
    FDisplayMetrics::RebuildDisplayMetrics(local_68);
  }
  else {
    (**(code **)(*DAT_1469f4590 + 0x188))(DAT_1469f4590,local_68);
  }
  GenerateConvenientWindowedResolutions(local_68,param_1);
  FUN_141189610(&local_60);
  return 1;
}



// FUNCTION 1425269a0 GetCurrentAssetGroupCulture body=154 status=ok
// SIG undefined GetCurrentAssetGroupCulture(void)

undefined8
UKismetInternationalizationLibrary::GetCurrentAssetGroupCulture
          (undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_res10;
  undefined1 local_18 [8];
  longlong *local_10;
  
  local_res10 = param_2;
  uVar5 = FInternationalization::Get();
  puVar6 = (undefined8 *)
           FInternationalization::GetCurrentAssetGroupCulture(uVar5,local_18,&local_res10);
  uVar5 = FCulture::GetName(*puVar6);
  FString::FString(param_1,uVar5);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 142526a40 FUN_142526a40 body=159 status=ok
// SIG undefined FUN_142526a40(void)

undefined8 FUN_142526a40(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar4 = FUN_1422cb6d0();
  if (lVar4 != 0) {
    plVar5 = (longlong *)
             UAssetManager::GetPrimaryAssetHandle(lVar4,local_18,param_1,param_2,param_3);
    lVar4 = *plVar5;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_10 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)local_10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    if (lVar4 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142526ae0 GetCurrentCulture body=155 status=ok
// SIG undefined GetCurrentCulture(void)

undefined8 UKismetInternationalizationLibrary::GetCurrentCulture(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar5 + 0x30);
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar6 = FCulture::GetName(uVar6);
  FString::FString(param_1,uVar6);
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



// FUNCTION 142526b80 GetCurrentLocale body=155 status=ok
// SIG undefined GetCurrentLocale(void)

undefined8 UKismetInternationalizationLibrary::GetCurrentLocale(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar5 + 0x40);
  uVar6 = *(undefined8 *)(lVar5 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar6 = FCulture::GetName(uVar6);
  FString::FString(param_1,uVar6);
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



// FUNCTION 142526c20 GetDefaultLanguage body=23 status=ok
// SIG undefined GetDefaultLanguage(void)

undefined8 UKismetSystemLibrary::GetDefaultLanguage(undefined8 param_1)

{
  FWindowsPlatformMisc::GetDefaultLanguage();
  return param_1;
}



// FUNCTION 142526c40 GetDefaultLocale body=23 status=ok
// SIG undefined GetDefaultLocale(void)

undefined8 UKismetSystemLibrary::GetDefaultLocale(undefined8 param_1)

{
  FWindowsPlatformMisc::GetDefaultLocale();
  return param_1;
}



// FUNCTION 142526c60 FUN_142526c60 body=8 status=ok
// SIG undefined FUN_142526c60(void)

longlong FUN_142526c60(longlong param_1)

{
  return param_1 + 0x280;
}



// FUNCTION 142526c70 GetDeviceId body=23 status=ok
// SIG undefined GetDeviceId(void)

undefined8 UKismetSystemLibrary::GetDeviceId(undefined8 param_1)

{
  FGenericPlatformMisc::GetDeviceId();
  return param_1;
}



// FUNCTION 142526c90 FUN_142526c90 body=256 status=ok
// SIG undefined FUN_142526c90(void)

longlong * FUN_142526c90(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong local_res10;
  longlong local_28 [4];
  
  lVar3 = 0;
  local_res10 = local_res10 & 0xffffffff00000000;
  if (param_2 == (longlong *)0x0) {
    bVar2 = false;
    bVar1 = true;
    local_28[1] = 0;
    plVar4 = local_28;
  }
  else {
    lVar3 = FUN_1428e7a40();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_2 + 0x398))(param_2,param_1);
      return param_1;
    }
    local_res10 = param_2[3];
    bVar2 = true;
    bVar1 = false;
    FName::ToString(&local_res10,local_28 + 2);
    plVar4 = local_28 + 2;
    lVar3 = local_28[2];
  }
  *param_1 = lVar3;
  *plVar4 = 0;
  *(int *)(param_1 + 1) = (int)plVar4[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  if ((bVar1) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar2) && (local_28[2] != 0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142526d90 FUN_142526d90 body=130 status=ok
// SIG undefined FUN_142526d90(void)

undefined8 FUN_142526d90(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852c50) {
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



// FUNCTION 142526e20 GetEngineVersion body=40 status=ok
// SIG undefined GetEngineVersion(void)

undefined8 UKismetSystemLibrary::GetEngineVersion(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FEngineVersion::Current();
  FEngineVersion::ToString(uVar1,param_1,4);
  return param_1;
}



// FUNCTION 142526e50 GetEnumeratorName body=76 status=ok
// SIG undefined GetEnumeratorName(void)

undefined8 *
UKismetNodeHelperLibrary::GetEnumeratorName(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)UEnum::GetNameByValue(param_2,local_res8,param_3);
    *param_1 = *puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 142526ea0 GetEnumeratorUserFriendlyName body=167 status=ok
// SIG undefined GetEnumeratorUserFriendlyName(void)

undefined8
UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName
          (undefined8 param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res10;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_2 == 0) {
    local_res10 = 0;
    FName::ToString(&local_res10,param_1);
    return param_1;
  }
  uVar5 = FUN_1417373a0(param_2,local_28,param_3);
  uVar5 = FText::ToString(uVar5);
  FString::FString(param_1,uVar5);
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
  return param_1;
}



// FUNCTION 142526f50 GetEnumeratorValueFromIndex body=24 status=ok
// SIG undefined GetEnumeratorValueFromIndex(void)

undefined1 UKismetNodeHelperLibrary::GetEnumeratorValueFromIndex(longlong param_1,byte param_2)

{
  if (param_1 != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 8 + (ulonglong)param_2 * 0x10);
  }
  return 0xff;
}



// FUNCTION 142526f70 GetFirstUnmarkedBit body=96 status=ok
// SIG undefined GetFirstUnmarkedBit(void)

uint UKismetNodeHelperLibrary::GetFirstUnmarkedBit(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_3 < 0x20) && (uVar2 = 0, uVar1 = uVar2, 0 < param_3)) {
    do {
      if ((0x1f < (int)uVar1) || ((int)(param_1 & 1 << ((byte)uVar1 & 0x1f)) < 1)) {
        if ((-1 < (int)param_2) && ((int)param_2 < param_3)) {
          uVar2 = param_2;
        }
        for (; (param_1 >> (uVar2 & 0x1f) & 1) != 0; uVar2 = (int)(uVar2 + 1) % param_3) {
        }
        return uVar2;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < param_3);
  }
  return 0xffffffff;
}



// FUNCTION 142526fd0 GetForwardVector body=32 status=ok
// SIG undefined GetForwardVector(void)

undefined8 UKismetMathLibrary::GetForwardVector(undefined8 param_1,undefined8 param_2)

{
  FRotator::Vector(param_2,param_1);
  return param_1;
}



// FUNCTION 142526ff0 GetGameName body=112 status=ok
// SIG undefined GetGameName(void)

undefined8 * UKismetSystemLibrary::GetGameName(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_146299580 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while ((&DAT_146299580)[lVar2] != 0);
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_1 + 1) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,&DAT_146299580,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 142527120 GetKey body=36 status=ok
// SIG undefined GetKey(void)

undefined8 * UKismetInputLibrary::GetKey(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x28);
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 142527190 FUN_142527190 body=309 status=ok
// SIG undefined FUN_142527190(void)

undefined4 * FUN_142527190(longlong param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x98);
  uVar4 = uVar1 & 8;
  if (param_3 == (uVar4 != 0) - 1) {
    *param_2 = DAT_1464aa738;
    return param_2;
  }
  iVar2 = 1;
  if (uVar4 == 0) {
    iVar2 = -1;
  }
  if (param_3 == iVar2) {
    *param_2 = DAT_1464aa73c;
    return param_2;
  }
  iVar2 = 2;
  if (uVar4 == 0) {
    iVar2 = -1;
  }
  if (param_3 == iVar2) {
    *param_2 = DAT_1464aa740;
    return param_2;
  }
  uVar3 = uVar1 & 0x11;
  if (uVar3 == 0x10) {
    if (uVar4 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 3;
    }
  }
  else {
    iVar2 = -1;
  }
  if (param_3 != iVar2) {
    iVar2 = -1;
    if ((uVar3 == 0x10) && (iVar2 = 1, (uVar1 & 8) != 0)) {
      iVar2 = 4;
    }
    if (param_3 != iVar2) {
      iVar2 = -1;
      if ((uVar3 == 0x10) && (iVar2 = 2, (uVar1 & 8) != 0)) {
        iVar2 = 5;
      }
      if (param_3 != iVar2) {
        *param_2 = DAT_1464aa734;
        return param_2;
      }
      *(undefined2 *)((longlong)param_2 + 1) = 0x8080;
      *(undefined1 *)param_2 = 0xff;
      *(undefined1 *)((longlong)param_2 + 3) = 0xff;
      return param_2;
    }
    *(undefined2 *)((longlong)param_2 + 1) = 0x80ff;
    *(undefined1 *)param_2 = 0x80;
    *(undefined1 *)((longlong)param_2 + 3) = 0xff;
    return param_2;
  }
  *(undefined2 *)((longlong)param_2 + 1) = 0xff80;
  *(undefined1 *)param_2 = 0x80;
  *(undefined1 *)((longlong)param_2 + 3) = 0xff;
  return param_2;
}



// FUNCTION 1425274a0 GetKeyOut body=368 status=ok
// SIG undefined GetKeyOut(void)

undefined4 UInterpTrackMove::GetKeyOut(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x98) & 8;
  if (param_2 == (uVar3 != 0) - 1) {
    return *(undefined4 *)((longlong)param_3 * 0x2c + 4 + *(longlong *)(param_1 + 0x48));
  }
  iVar1 = 1;
  if (uVar3 == 0) {
    iVar1 = -1;
  }
  if (param_2 == iVar1) {
    return *(undefined4 *)((longlong)param_3 * 0x2c + 8 + *(longlong *)(param_1 + 0x48));
  }
  iVar1 = 2;
  if (uVar3 == 0) {
    iVar1 = -1;
  }
  if (param_2 == iVar1) {
    return *(undefined4 *)((longlong)param_3 * 0x2c + 0xc + *(longlong *)(param_1 + 0x48));
  }
  uVar2 = *(uint *)(param_1 + 0x98) & 0x11;
  if (uVar2 == 0x10) {
    if (uVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 3;
    }
  }
  else {
    iVar1 = -1;
    uVar3 = *(uint *)(param_1 + 0x98) & 8;
  }
  if (param_2 != iVar1) {
    iVar1 = -1;
    if ((uVar2 == 0x10) && (iVar1 = 1, uVar3 != 0)) {
      iVar1 = 4;
    }
    if (param_2 != iVar1) {
      iVar1 = -1;
      if ((uVar2 == 0x10) && (iVar1 = 2, uVar3 != 0)) {
        iVar1 = 5;
      }
      if (param_2 != iVar1) {
        return 0;
      }
      return *(undefined4 *)((longlong)param_3 * 0x2c + 0xc + *(longlong *)(param_1 + 0x60));
    }
    return *(undefined4 *)((longlong)param_3 * 0x2c + 8 + *(longlong *)(param_1 + 0x60));
  }
  return *(undefined4 *)((longlong)param_3 * 0x2c + 4 + *(longlong *)(param_1 + 0x60));
}



// FUNCTION 142527770 GetKeysFromStringTable body=187 status=ok
// SIG undefined GetKeysFromStringTable(void)

undefined8 *
UKismetStringTableLibrary::GetKeysFromStringTable(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *local_res8;
  code *local_28;
  undefined8 **local_20;
  longlong local_18;
  longlong *local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = FUN_141607d00();
  FStringTableRegistry::FindStringTable(uVar5,&local_18,param_2);
  if (local_18 != 0) {
    local_20 = &local_res8;
    local_28 = FUN_142519f20;
    local_res8 = param_1;
    FStringTable::EnumerateSourceStrings(local_18,&local_28);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 142527830 GetLaunchNotification body=32 status=ok
// SIG undefined GetLaunchNotification(void)

void UBlueprintPlatformLibrary::GetLaunchNotification
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_146afc4e8 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014252784b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146afc4e8 + 0x18))(DAT_146afc4e8,param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 142527850 GetMetaDataIdsFromStringTableEntry body=179 status=ok
// SIG undefined GetMetaDataIdsFromStringTableEntry(void)

undefined8 *
UKismetStringTableLibrary::GetMetaDataIdsFromStringTableEntry
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *local_res8;
  code *local_28;
  undefined8 **local_20;
  longlong local_18;
  longlong *local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = FUN_141607d00();
  FStringTableRegistry::FindStringTable(uVar5,&local_18,param_2);
  if (local_18 != 0) {
    local_20 = &local_res8;
    local_28 = FUN_142519ed0;
    local_res8 = param_1;
    FStringTable::EnumerateMetaData(local_18,param_3,&local_28);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_1;
}



// FUNCTION 142527910 FUN_142527910 body=34 status=ok
// SIG undefined FUN_142527910(void)

int FUN_142527910(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *DAT_146afc6c0;
  if (iVar1 < 200) {
    return 200;
  }
  iVar2 = 0x2000;
  if (iVar1 < 0x2000) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// FUNCTION 142527940 FUN_142527940 body=34 status=ok
// SIG undefined FUN_142527940(void)

int FUN_142527940(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *DAT_146afc6a8;
  if (iVar1 < 200) {
    return 200;
  }
  iVar2 = 0x2000;
  if (iVar1 < 0x2000) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// FUNCTION 1425279a0 GetNumActionsForObject body=108 status=ok
// SIG undefined GetNumActionsForObject(void)

int FLatentActionManager::GetNumActionsForObject(longlong *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *param_2;
  local_res14 = param_2[1];
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,&local_res10);
  puVar3 = (undefined8 *)0x0;
  puVar2 = puVar3;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *param_1);
  }
  puVar1 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  return *(int *)(puVar3 + 1) - *(int *)((longlong)puVar3 + 0x34);
}



// FUNCTION 142527a30 GetObjectFromPrimaryAssetId body=148 status=ok
// SIG undefined GetObjectFromPrimaryAssetId(void)

undefined8 UKismetSystemLibrary::GetObjectFromPrimaryAssetId(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_98 [56];
  char local_60;
  
  plVar2 = (longlong *)FUN_1422cb6d0();
  if (plVar2 != (longlong *)0x0) {
    FPrimaryAssetTypeInfo::FPrimaryAssetTypeInfo(local_98);
    cVar1 = (**(code **)(*plVar2 + 0x308))(plVar2,*param_1,local_98);
    if ((cVar1 != '\0') && (local_60 == '\0')) {
      uVar3 = (**(code **)(*plVar2 + 0x2b8))(plVar2,param_1);
      FPrimaryAssetTypeInfo::~FPrimaryAssetTypeInfo(local_98);
      return uVar3;
    }
    FPrimaryAssetTypeInfo::~FPrimaryAssetTypeInfo(local_98);
  }
  return 0;
}



// FUNCTION 142527ad0 GetObjectName body=93 status=ok
// SIG undefined GetObjectName(void)

undefined8 * UKismetSystemLibrary::GetObjectName(undefined8 *param_1,longlong param_2)

{
  undefined8 local_res8 [4];
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
    FGenericPlatformString::Memcpy(*param_1,&DAT_143f3edc8,10);
    return param_1;
  }
  local_res8[0] = *(undefined8 *)(param_2 + 0x18);
  FName::ToString(local_res8,param_1);
  return param_1;
}



// FUNCTION 142527b30 GetOutRange body=192 status=ok
// SIG undefined GetOutRange(void)

void UInterpTrackFloatBase::GetOutRange(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 4);
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 4);
    if (iVar1 != 1) {
      iVar2 = iVar1;
      if (*(char *)(param_1 + 0x58) == '\0') {
        iVar2 = iVar1 + -1;
      }
      iVar5 = 0;
      if (0 < iVar2) {
        do {
          iVar4 = iVar5 + 1;
          iVar3 = 0;
          if (iVar5 != iVar1 + -1) {
            iVar3 = iVar4;
          }
          CurveFloatFindIntervalBounds
                    (*(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 0x14,
                     *(longlong *)(param_1 + 0x48) + (longlong)iVar3 * 0x14,param_2,param_3);
          iVar5 = iVar4;
        } while (iVar4 < iVar2);
      }
    }
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}



// FUNCTION 142527bf0 GetOutRange body=247 status=ok
// SIG undefined GetOutRange(void)

void UInterpTrackLinearColorBase::GetOutRange(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    local_38 = 0.0;
    fStack_34 = 0.0;
    fStack_30 = 0.0;
    fStack_2c = 0.0;
    local_28 = 0;
    uStack_20 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x48);
    local_38 = *(float *)(lVar2 + 4);
    fStack_34 = *(float *)(lVar2 + 8);
    fStack_30 = *(float *)(lVar2 + 0xc);
    fStack_2c = *(float *)(lVar2 + 0x10);
    local_28 = *(undefined8 *)(lVar2 + 4);
    uStack_20 = *(undefined8 *)(lVar2 + 0xc);
    if (iVar1 != 1) {
      iVar3 = iVar1;
      if (*(char *)(param_1 + 0x58) == '\0') {
        iVar3 = iVar1 + -1;
      }
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar6 = iVar5 + 1;
          iVar4 = 0;
          if (iVar5 != iVar1 + -1) {
            iVar4 = iVar6;
          }
          CurveLinearColorFindIntervalBounds
                    ((longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 0x48),
                     (longlong)iVar4 * 0x38 + *(longlong *)(param_1 + 0x48),&local_38,&local_28);
          iVar5 = iVar6;
        } while (iVar6 < iVar3);
      }
    }
  }
  if (fStack_34 <= local_38) {
    local_38 = fStack_34;
  }
  if ((float)local_28 <= local_28._4_4_) {
    local_28._0_4_ = local_28._4_4_;
  }
  if (fStack_30 <= local_38) {
    local_38 = fStack_30;
  }
  if ((float)local_28 <= (float)uStack_20) {
    local_28._0_4_ = (float)uStack_20;
  }
  if (fStack_2c <= local_38) {
    local_38 = fStack_2c;
  }
  if ((float)local_28 <= uStack_20._4_4_) {
    local_28._0_4_ = uStack_20._4_4_;
  }
  *param_2 = local_38;
  *param_3 = (float)local_28;
  return;
}



// FUNCTION 142527cf0 GetOutRange body=672 status=ok
// SIG undefined GetOutRange(void)

void UInterpTrackMove::GetOutRange(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    local_48 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_40 = DAT_1468b5d98;
    local_38 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_30 = DAT_1468b5d98;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x48);
    local_48 = *(undefined8 *)(lVar2 + 4);
    local_40 = *(float *)(lVar2 + 0xc);
    local_38 = *(undefined8 *)(lVar2 + 4);
    local_30 = *(float *)(lVar2 + 0xc);
    if (iVar1 != 1) {
      iVar7 = iVar1;
      if (*(char *)(param_1 + 0x58) == '\0') {
        iVar7 = iVar1 + -1;
      }
      iVar4 = 0;
      if (0 < iVar7) {
        do {
          iVar6 = iVar4 + 1;
          iVar3 = 0;
          if (iVar4 != iVar1 + -1) {
            iVar3 = iVar6;
          }
          CurveVectorFindIntervalBounds
                    ((longlong)iVar4 * 0x2c + *(longlong *)(param_1 + 0x48),
                     (longlong)iVar3 * 0x2c + *(longlong *)(param_1 + 0x48),&local_48,&local_38);
          iVar4 = iVar6;
        } while (iVar6 < iVar7);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x68);
  local_58._0_4_ = DAT_1468b5d90;
  local_68._0_4_ = DAT_1468b5d90;
  local_68._4_4_ = DAT_1468b5d94;
  local_60 = DAT_1468b5d98;
  local_58._4_4_ = DAT_1468b5d94;
  local_50 = DAT_1468b5d98;
  if (iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    local_68 = *(undefined8 *)(lVar2 + 4);
    local_60 = *(float *)(lVar2 + 0xc);
    local_58 = *(undefined8 *)(lVar2 + 4);
    local_50 = *(float *)(lVar2 + 0xc);
    if (iVar1 != 1) {
      iVar7 = iVar1;
      if (*(char *)(param_1 + 0x70) == '\0') {
        iVar7 = iVar1 + -1;
      }
      iVar4 = 0;
      if (0 < iVar7) {
        do {
          iVar6 = iVar4 + 1;
          iVar3 = 0;
          if (iVar4 != iVar1 + -1) {
            iVar3 = iVar6;
          }
          CurveVectorFindIntervalBounds
                    ((longlong)iVar4 * 0x2c + *(longlong *)(param_1 + 0x60),
                     (longlong)iVar3 * 0x2c + *(longlong *)(param_1 + 0x60),&local_68,&local_58);
          iVar4 = iVar6;
        } while (iVar6 < iVar7);
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x98) & 0x11;
  if ((*(uint *)(param_1 + 0x98) & 8) == 0) {
    if (uVar5 != 0x10) {
      *param_2 = 0.0;
      *param_3 = 0.0;
      return;
    }
    if (local_68._4_4_ <= (float)local_68) {
      local_68._0_4_ = local_68._4_4_;
    }
    if ((float)local_58 <= local_58._4_4_) {
      local_58._0_4_ = local_58._4_4_;
    }
    if (local_60 <= (float)local_68) {
      local_68._0_4_ = local_60;
    }
    if ((float)local_58 <= local_50) {
      local_58._0_4_ = local_50;
    }
    *param_2 = (float)local_68;
    *param_3 = (float)local_58;
    return;
  }
  if (local_48._4_4_ <= (float)local_48) {
    local_48._0_4_ = local_48._4_4_;
  }
  if (local_40 <= (float)local_48) {
    local_48._0_4_ = local_40;
  }
  if (uVar5 != 0x10) {
    if ((float)local_38 <= local_38._4_4_) {
      local_38._0_4_ = local_38._4_4_;
    }
    *param_2 = (float)local_48;
    if ((float)local_38 <= local_30) {
      local_38._0_4_ = local_30;
    }
    *param_3 = (float)local_38;
    return;
  }
  if ((float)local_58 <= local_58._4_4_) {
    local_58._0_4_ = local_58._4_4_;
  }
  if (local_68._4_4_ <= (float)local_68) {
    local_68._0_4_ = local_68._4_4_;
  }
  if ((float)local_58 <= local_50) {
    local_58._0_4_ = local_50;
  }
  if (local_60 <= (float)local_68) {
    local_68._0_4_ = local_60;
  }
  if ((float)local_68 <= (float)local_48) {
    local_48._0_4_ = (float)local_68;
  }
  *param_2 = (float)local_48;
  if ((float)local_38 <= local_38._4_4_) {
    local_38._0_4_ = local_38._4_4_;
  }
  if ((float)local_38 <= local_30) {
    local_38._0_4_ = local_30;
  }
  if ((float)local_58 <= (float)local_38) {
    local_58._0_4_ = (float)local_38;
  }
  *param_3 = (float)local_58;
  return;
}



// FUNCTION 142527f90 GetOutRange body=285 status=ok
// SIG undefined GetOutRange(void)

void UInterpTrackVectorBase::GetOutRange(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    local_38 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_30 = DAT_1468b5d98;
    local_28 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_20 = DAT_1468b5d98;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x48);
    local_38 = *(undefined8 *)(lVar2 + 4);
    local_30 = *(float *)(lVar2 + 0xc);
    local_28 = *(undefined8 *)(lVar2 + 4);
    local_20 = *(float *)(lVar2 + 0xc);
    if (iVar1 != 1) {
      iVar3 = iVar1;
      if (*(char *)(param_1 + 0x58) == '\0') {
        iVar3 = iVar1 + -1;
      }
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar6 = iVar5 + 1;
          iVar4 = 0;
          if (iVar5 != iVar1 + -1) {
            iVar4 = iVar6;
          }
          CurveVectorFindIntervalBounds
                    ((longlong)iVar5 * 0x2c + *(longlong *)(param_1 + 0x48),
                     (longlong)iVar4 * 0x2c + *(longlong *)(param_1 + 0x48),&local_38,&local_28);
          iVar5 = iVar6;
        } while (iVar6 < iVar3);
      }
    }
  }
  if (local_38._4_4_ <= (float)local_38) {
    local_38._0_4_ = local_38._4_4_;
  }
  if ((float)local_28 <= local_28._4_4_) {
    local_28._0_4_ = local_28._4_4_;
  }
  if (local_30 <= (float)local_38) {
    local_38._0_4_ = local_30;
  }
  if ((float)local_28 <= local_20) {
    local_28._0_4_ = local_20;
  }
  *param_2 = (float)local_38;
  *param_3 = (float)local_28;
  return;
}



// FUNCTION 1425280b0 GetPathName body=86 status=ok
// SIG undefined GetPathName(void)

undefined8 * UKismetSystemLibrary::GetPathName(undefined8 *param_1,longlong param_2)

{
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
    FGenericPlatformString::Memcpy(*param_1,&DAT_143f3edc8,10);
    return param_1;
  }
  UObjectBaseUtility::GetPathName(param_2,param_1,0);
  return param_1;
}



// FUNCTION 142528110 GetPlatformUserName body=118 status=ok
// SIG undefined GetPlatformUserName(void)

undefined8 * UKismetSystemLibrary::GetPlatformUserName(undefined8 *param_1)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  
  psVar1 = (short *)FWindowsPlatformProcess::UserName(1);
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



// FUNCTION 142528190 GetPreferredLanguages body=23 status=ok
// SIG undefined GetPreferredLanguages(void)

undefined8 UKismetSystemLibrary::GetPreferredLanguages(undefined8 param_1)

{
  FGenericPlatformMisc::GetPreferredLanguages();
  return param_1;
}



// FUNCTION 1425281b0 FUN_1425281b0 body=151 status=ok
// SIG undefined FUN_1425281b0(void)

undefined8 * FUN_1425281b0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_1422cb6d0();
  if ((plVar1 != (longlong *)0x0) && (param_2 != 0)) {
    lVar2 = UObject::GetPrivateStaticClass();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar2) {
        lVar2 = UObject::GetPrivateStaticClass();
        lVar3 = param_2;
        goto LAB_142528212;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
  while (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0) {
LAB_142528212:
    if (lVar3 == lVar2) goto LAB_142528222;
  }
  param_2 = 0;
LAB_142528222:
  (**(code **)(*plVar1 + 0x2d8))(plVar1,param_1,param_2);
  return param_1;
}



// FUNCTION 142528250 GetPrimaryAssetIdFromObject body=87 status=ok
// SIG undefined GetPrimaryAssetIdFromObject(void)

undefined8 * UKismetSystemLibrary::GetPrimaryAssetIdFromObject(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1422cb6d0();
  if ((plVar1 != (longlong *)0x0) && (param_2 != 0)) {
    (**(code **)(*plVar1 + 0x2d8))(plVar1,param_1,param_2);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1425282b0 GetPrimaryAssetIdFromSoftClassReference body=83 status=ok
// SIG undefined GetPrimaryAssetIdFromSoftClassReference(void)

undefined8 *
UKismetSystemLibrary::GetPrimaryAssetIdFromSoftClassReference(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1422cb6d0();
  if (plVar1 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x2e8))(plVar1,param_1,param_2 + 0x10);
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142528310 FUN_142528310 body=56 status=ok
// SIG undefined FUN_142528310(void)

void FUN_142528310(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1422cb6d0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x300))(plVar1,param_1,param_2);
  }
  return;
}



// FUNCTION 142528350 GetPrimaryAssetsWithBundleState body=92 status=ok
// SIG undefined GetPrimaryAssetsWithBundleState(void)

void UKismetSystemLibrary::GetPrimaryAssetsWithBundleState
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
               undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_1422cb6d0();
  if (lVar1 != 0) {
    FUN_1422ce540(lVar1,param_5,param_3,param_1,param_2,param_4);
  }
  return;
}



// FUNCTION 1425283b0 FUN_1425283b0 body=329 status=ok
// SIG undefined FUN_1425283b0(void)

float FUN_1425283b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if ((*(uint *)(plVar2 + 5) & 0x1000000) != 0) {
    lVar4 = (longlong)(int)plVar2[1];
    lVar3 = 0;
    fVar5 = 0.0;
    if (3 < lVar4) {
      fVar7 = *(float *)(param_1 + 0x14);
      cVar1 = *(char *)(param_1 + 0x18);
      do {
        fVar6 = fVar7;
        if (cVar1 != '\0') {
          fVar6 = fVar7 * *(float *)(*(longlong *)(*plVar2 + lVar3 * 8) + 0x1808) * 0.01;
        }
        if (fVar6 <= fVar5) {
          fVar6 = fVar5;
        }
        fVar5 = fVar7;
        if (cVar1 != '\0') {
          fVar5 = fVar7 * *(float *)(*(longlong *)(*plVar2 + 8 + lVar3 * 8) + 0x1808) * 0.01;
        }
        if (fVar6 <= fVar5) {
          fVar6 = fVar5;
        }
        fVar5 = fVar7;
        if (cVar1 != '\0') {
          fVar5 = fVar7 * *(float *)(*(longlong *)(*plVar2 + 0x10 + lVar3 * 8) + 0x1808) * 0.01;
        }
        if (fVar6 <= fVar5) {
          fVar6 = fVar5;
        }
        fVar8 = fVar7;
        if (cVar1 != '\0') {
          fVar8 = fVar7 * *(float *)(*(longlong *)(*plVar2 + 0x18 + lVar3 * 8) + 0x1808) * 0.01;
        }
        lVar3 = lVar3 + 4;
        fVar5 = fVar6;
        if (fVar6 <= fVar8) {
          fVar5 = fVar8;
        }
      } while (lVar3 < lVar4 + -3);
    }
    if (lVar3 < lVar4) {
      do {
        fVar7 = *(float *)(param_1 + 0x14);
        if (*(char *)(param_1 + 0x18) != '\0') {
          fVar7 = *(float *)(param_1 + 0x14) *
                  *(float *)(*(longlong *)(*plVar2 + lVar3 * 8) + 0x1808) * 0.01;
        }
        if (fVar7 <= fVar5) {
          fVar7 = fVar5;
        }
        fVar5 = fVar7;
        lVar3 = lVar3 + 1;
      } while (lVar3 < lVar4);
    }
    fVar7 = 0.01;
    if ((0.01 <= fVar5) && (fVar7 = fVar5, 4.0 <= fVar5)) {
      fVar7 = 4.0;
    }
    return fVar7;
  }
  return 1.0;
}



// FUNCTION 142528500 GetProjectContentDirectory body=54 status=ok
// SIG undefined GetProjectContentDirectory(void)

undefined8 UKismetSystemLibrary::GetProjectContentDirectory(undefined8 param_1)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  uVar1 = FPaths::ProjectContentDir(local_18);
  FPaths::ConvertRelativePathToFull(param_1,uVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142528540 GetProjectDirectory body=54 status=ok
// SIG undefined GetProjectDirectory(void)

undefined8 UKismetSystemLibrary::GetProjectDirectory(undefined8 param_1)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  uVar1 = FPaths::ProjectDir(local_18);
  FPaths::ConvertRelativePathToFull(param_1,uVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142528580 FUN_142528580 body=54 status=ok
// SIG undefined FUN_142528580(void)

undefined8 FUN_142528580(undefined8 param_1)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  uVar1 = FUN_14167d0d0(local_18);
  FPaths::ConvertRelativePathToFull(param_1,uVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1425285c0 GetRandomUnmarkedBit body=215 status=ok
// SIG undefined GetRandomUnmarkedBit(void)

uint UKismetNodeHelperLibrary::GetRandomUnmarkedBit(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((param_3 < 0x20) && (iVar2 = 0, 0 < param_3)) {
    do {
      if ((0x1f < iVar2) || ((int)(param_1 & 1 << ((byte)iVar2 & 0x1f)) < 1)) {
        if (((int)param_2 < 0) || (param_3 <= (int)param_2)) {
          if (param_3 < 1) {
            param_2 = 0;
          }
          else {
            iVar2 = rand();
            uVar1 = (uint)((float)iVar2 * 3.051851e-05 * (float)param_3);
            param_2 = param_3 - 1U;
            if ((int)uVar1 <= (int)(param_3 - 1U)) {
              param_2 = uVar1;
            }
          }
        }
        while ((param_1 >> (param_2 & 0x1f) & 1) != 0) {
          if (param_3 < 1) {
            param_2 = 0;
          }
          else {
            iVar2 = rand();
            uVar1 = (uint)((float)iVar2 * 3.051851e-05 * (float)param_3);
            param_2 = param_3 - 1U;
            if ((int)uVar1 <= (int)(param_3 - 1U)) {
              param_2 = uVar1;
            }
          }
        }
        return param_2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return 0xffffffff;
}



// FUNCTION 1425286a0 GetReflectionVector body=23 status=ok
// SIG undefined GetReflectionVector(void)

undefined8 UKismetMathLibrary::GetReflectionVector(undefined8 param_1)

{
  FMath::GetReflectionVector();
  return param_1;
}



// FUNCTION 1425286c0 GetRegisteredStringTables body=72 status=ok
// SIG undefined GetRegisteredStringTables(void)

undefined8 * UKismetStringTableLibrary::GetRegisteredStringTables(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *local_res8 [4];
  code *local_18;
  undefined8 **local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  local_10 = local_res8;
  local_18 = FUN_142519e80;
  local_res8[0] = param_1;
  uVar1 = FUN_141607d00();
  FStringTableRegistry::EnumerateStringTables(uVar1,&local_18);
  return param_1;
}



// FUNCTION 142528710 FUN_142528710 body=162 status=ok
// SIG undefined FUN_142528710(void)

int FUN_142528710(void)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc8a0) {
    _Init_thread_header(&DAT_146afc8a0);
    if (DAT_146afc8a0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146afc898 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DetailMode");
      _Init_thread_footer(&DAT_146afc8a0);
    }
  }
  iVar1 = (**(code **)(*DAT_146afc898 + 0x68))();
  if (iVar1 < 0) {
    return 0;
  }
  iVar2 = 2;
  if (iVar1 < 2) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// FUNCTION 1425287c0 FUN_1425287c0 body=162 status=ok
// SIG undefined FUN_1425287c0(void)

int FUN_1425287c0(void)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc8b0) {
    _Init_thread_header(&DAT_146afc8b0);
    if (DAT_146afc8b0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146afc8a8 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MaterialQualityLevel")
      ;
      _Init_thread_footer(&DAT_146afc8b0);
    }
  }
  iVar1 = (**(code **)(*DAT_146afc8a8 + 0x68))();
  if (iVar1 < 0) {
    return 0;
  }
  iVar2 = 2;
  if (iVar1 < 2) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// FUNCTION 142528870 GetRightVector body=45 status=ok
// SIG undefined GetRightVector(void)

undefined4 * UKismetMathLibrary::GetRightVector(undefined4 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 local_48 [64];
  
  lVar2 = FRotationMatrix::FRotationMatrix(local_48);
  *param_1 = *(undefined4 *)(lVar2 + 0x10);
  uVar1 = *(undefined4 *)(lVar2 + 0x14);
  param_1[2] = *(undefined4 *)(lVar2 + 0x18);
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 1425288a0 FUN_1425288a0 body=1816 status=ok
// SIG undefined FUN_1425288a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1425288a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 local_res18;
  undefined1 auStack_278 [32];
  undefined4 local_258 [2];
  longlong local_250 [2];
  undefined1 local_240 [8];
  undefined1 local_238 [8];
  undefined8 local_230;
  longlong *local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong *local_208;
  longlong *local_200;
  undefined4 *local_1f8;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [40];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_258[0] = 0;
  uVar11 = 0;
  if ((((param_2 != 0) &&
       (local_res18 = param_3, lVar7 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1),
       uVar11 = local_258[0], lVar7 != 0)) &&
      (lVar7 = FUN_1428cccb0(lVar7,param_2), uVar11 = local_258[0], lVar7 != 0)) &&
     ((cVar6 = UMaterialParameterCollectionInstance::GetScalarParameterValue
                         (lVar7,local_res18,local_258), uVar11 = local_258[0], cVar6 == '\0' &&
      (*(char *)(lVar7 + 0x28) == '\0')))) {
    local_88 = 0xffffffff;
    local_b8 = 0;
    local_b0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    uVar8 = FText::FromName(local_180,&local_res18);
    local_68[0] = 4;
    FText::FText(local_58,uVar8);
    local_40 = '\x01';
    local_250[0] = 0;
    local_250[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_250,0);
    FGenericPlatformString::Memcpy(local_250[0],L"ParamName",0x14);
    local_200 = local_250;
    local_1f8 = local_68;
    FUN_1407484b0(&local_b8,local_240,&local_200,0);
    if (local_250[0] != 0) {
      FMemory::Free();
    }
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_178 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar2 = (int *)((longlong)local_178 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_108,
                       L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                       ,L"KismetMaterialLibrary",L"WithInvalidParam");
    uVar8 = FTextFormat::FTextFormat(local_f0,uVar8);
    uVar8 = FText::Format(local_120,uVar8,&local_b8);
    puVar9 = (undefined8 *)FUN_140973510(local_190,uVar8);
    local_210 = *puVar9;
    local_208 = (longlong *)puVar9[1];
    if (local_208 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_208 + 1) = (int)local_208[1] + 1;
      UNLOCK();
    }
    uVar8 = FText::FText(local_138);
    puVar9 = (undefined8 *)FUN_1416ed870(local_1a0,param_2,uVar8);
    local_220 = *puVar9;
    local_218 = (longlong *)puVar9[1];
    if (local_218 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_218 + 1) = (int)local_218[1] + 1;
      UNLOCK();
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_150,L"GetScalarParameterValue called on",L"KismetMaterialLibrary",
                       L"GetScalarParamOn");
    puVar9 = (undefined8 *)FUN_140973510(local_1b0,uVar8);
    local_230 = *puVar9;
    local_228 = (longlong *)puVar9[1];
    if (local_228 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_228 + 1) = (int)local_228[1] + 1;
      UNLOCK();
    }
    FName::FName(local_238,&DAT_1450e145c,1);
    uVar8 = FText::FText(local_168);
    uVar10 = FUN_14161fb50(local_e0,local_238);
    puVar9 = (undefined8 *)FMessageLog::Warning(uVar10,local_1c0,uVar8);
    puVar9 = (undefined8 *)FUN_141621960(*puVar9,local_1d0,&local_230);
    puVar9 = (undefined8 *)FUN_141621960(*puVar9,local_1e0,&local_220);
    FUN_141621960(*puVar9,local_1f0,&local_210);
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar2 = (int *)((longlong)local_1e8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1e8 + 8))(local_1e8,1);
        }
      }
    }
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar2 = (int *)((longlong)local_1d8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1d8 + 8))(local_1d8,1);
        }
      }
    }
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1c8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar2 = (int *)((longlong)local_1c8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar2 = (int *)((longlong)local_1b8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_e0);
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_160 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar2 = (int *)((longlong)local_160 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
    plVar1 = local_228;
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_228 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1a8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1a8)(local_1a8);
        LOCK();
        piVar2 = (int *)((longlong)local_1a8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1a8 + 8))(local_1a8,1);
        }
      }
    }
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_148 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar2 = (int *)((longlong)local_148 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
    plVar1 = local_218;
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_218 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_218)(local_218);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (local_198 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_198 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar2 = (int *)((longlong)local_198 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_198 + 8))(local_198,1);
        }
      }
    }
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_130 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)local_130 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
    plVar1 = local_208;
    if (local_208 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_208 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_208)(local_208);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_188 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar2 = (int *)((longlong)local_188 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_188 + 8))(local_188,1);
        }
      }
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_118 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)local_118 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)local_100 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    local_70 = 0;
    *(undefined1 *)(lVar7 + 0x28) = 1;
    if (local_78 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_b8);
    uVar11 = local_258[0];
  }
  return uVar11;
}



// FUNCTION 142528fc0 GetSlopeDegreeAngles body=429 status=ok
// SIG undefined GetSlopeDegreeAngles(void)

void UKismetMathLibrary::GetSlopeDegreeAngles
               (float *param_1,undefined8 *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_78;
  
  fVar3 = (float)((ulonglong)*param_2 >> 0x20);
  fVar4 = *(float *)(param_2 + 1);
  local_78 = (float)*param_2;
  fVar2 = param_1[1] * fVar4 - param_1[2] * fVar3;
  fVar5 = param_1[2] * local_78 - *param_1 * fVar4;
  fVar1 = *param_1 * fVar3 - param_1[1] * local_78;
  fVar6 = fVar5 * param_3[1] + fVar2 * *param_3 + fVar1 * param_3[2];
  if (-1.0 <= fVar6) {
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
  }
  else {
    fVar6 = -1.0;
  }
  fVar6 = ::_guard_xfg_dispatch_icall_nop(fVar6);
  *param_4 = 90.0 - fVar6 * 57.295776;
  fVar3 = (fVar2 * fVar4 - fVar1 * local_78) * param_3[1] +
          (fVar1 * fVar3 - fVar5 * fVar4) * *param_3 +
          (fVar5 * local_78 - fVar2 * fVar3) * param_3[2];
  fVar4 = -1.0;
  if ((-1.0 <= fVar3) && (fVar4 = fVar3, 1.0 <= fVar3)) {
    fVar4 = 1.0;
  }
  fVar4 = ::_guard_xfg_dispatch_icall_nop(fVar4);
  *param_5 = 90.0 - fVar4 * 57.295776;
  return;
}



// FUNCTION 142529170 GetSoftClassReferenceFromPrimaryAssetId body=327 status=ok
// SIG undefined GetSoftClassReferenceFromPrimaryAssetId(void)

undefined4 *
UKismetSystemLibrary::GetSoftClassReferenceFromPrimaryAssetId
          (undefined4 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined1 local_98 [56];
  char local_60;
  
  plVar2 = (longlong *)FUN_1422cb6d0();
  if (plVar2 != (longlong *)0x0) {
    FPrimaryAssetTypeInfo::FPrimaryAssetTypeInfo(local_98);
    cVar1 = (**(code **)(*plVar2 + 0x308))(plVar2,*param_2,local_98);
    if ((cVar1 != '\0') && (local_60 != '\0')) {
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x2c8))(plVar2,local_b8,param_2);
      *param_1 = 0xffffffff;
      *(undefined8 *)(param_1 + 1) = 0;
      *(undefined8 *)(param_1 + 4) = *puVar3;
      FString::FString(param_1 + 6,puVar3 + 1);
      if (local_b0 != 0) {
        FMemory::Free();
      }
      FPrimaryAssetTypeInfo::~FPrimaryAssetTypeInfo(local_98);
      return param_1;
    }
    FPrimaryAssetTypeInfo::~FPrimaryAssetTypeInfo(local_98);
  }
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
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (((int)param_1[9] < 0) && (param_1[9] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1425292c0 GetSoftObjectReferenceFromPrimaryAssetId body=328 status=ok
// SIG undefined GetSoftObjectReferenceFromPrimaryAssetId(void)

undefined4 *
UKismetSystemLibrary::GetSoftObjectReferenceFromPrimaryAssetId
          (undefined4 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 local_b8 [32];
  undefined1 local_98 [56];
  char local_60;
  
  plVar2 = (longlong *)FUN_1422cb6d0();
  if (plVar2 != (longlong *)0x0) {
    FPrimaryAssetTypeInfo::FPrimaryAssetTypeInfo(local_98);
    cVar1 = (**(code **)(*plVar2 + 0x308))(plVar2,*param_2,local_98);
    if ((cVar1 != '\0') && (local_60 == '\0')) {
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x2c8))(plVar2,local_b8,param_2);
      *param_1 = 0xffffffff;
      *(undefined8 *)(param_1 + 1) = 0;
      *(undefined8 *)(param_1 + 4) = *puVar3;
      FString::FString(param_1 + 6,puVar3 + 1);
      if (puVar3[1] != 0) {
        FMemory::Free();
      }
      FPrimaryAssetTypeInfo::~FPrimaryAssetTypeInfo(local_98);
      return param_1;
    }
    FPrimaryAssetTypeInfo::~FPrimaryAssetTypeInfo(local_98);
  }
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
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (((int)param_1[9] < 0) && (param_1[9] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1425294d0 FUN_1425294d0 body=267 status=ok
// SIG undefined FUN_1425294d0(void)

undefined4 * FUN_1425294d0(undefined8 param_1,undefined4 *param_2,undefined4 param_3,char param_4)

{
  undefined4 local_res18;
  
  switch(param_3) {
  case 0:
    if (param_4 == '\0') {
      *param_2 = DAT_1464aa738;
      return param_2;
    }
    *param_2 = 0xff200000;
    return param_2;
  case 1:
    if (param_4 == '\0') {
      *param_2 = DAT_1464aa73c;
      return param_2;
    }
    *param_2 = 0xff002000;
    return param_2;
  case 2:
    if (param_4 == '\0') {
      *param_2 = DAT_1464aa740;
      return param_2;
    }
    *param_2 = 0xff000020;
    return param_2;
  case 3:
    local_res18 = 0xff1c0000;
    if (param_4 == '\0') {
      *param_2 = 0xffc40000;
      return param_2;
    }
    break;
  case 4:
    local_res18 = 0xff001c00;
    if (param_4 == '\0') {
      *param_2 = 0xff00c400;
      return param_2;
    }
    break;
  case 5:
    local_res18 = 0xff00001c;
    if (param_4 == '\0') {
      local_res18 = 0xff0000c4;
    }
    break;
  default:
    goto switchD_1425294f4_default;
  }
  *param_2 = local_res18;
switchD_1425294f4_default:
  return param_2;
}



// FUNCTION 1425296c0 FUN_1425296c0 body=336 status=ok
// SIG undefined FUN_1425296c0(void)

undefined8 * FUN_1425296c0(undefined8 *param_1,undefined8 *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  wchar_t **ppwVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  uint uVar12;
  wchar_t *local_38;
  uint local_30;
  undefined4 uStack_2c;
  wchar_t *local_28;
  undefined8 local_20;
  
  pwVar10 = (wchar_t *)0x0;
  uVar12 = 0;
  if (param_4 < 0) {
    local_20 = 0;
    ppwVar5 = &local_28;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    iVar8 = *(int *)(param_2 + 1);
    uVar4 = param_3 + param_4;
    uVar9 = iVar8 - 1;
    if (iVar8 == 0) {
      uVar9 = uVar12;
    }
    if (param_3 < uVar9) {
      uVar9 = param_3;
    }
    uVar6 = iVar8 - 1;
    if (iVar8 == 0) {
      uVar6 = uVar12;
    }
    uVar7 = uVar9;
    if ((uVar9 <= uVar4) && (uVar7 = uVar6, uVar4 < uVar6)) {
      uVar7 = uVar4;
    }
    if (iVar8 == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*param_2;
    }
    iVar8 = uVar7 - uVar9;
    local_38 = (wchar_t *)0x0;
    uStack_2c = 0;
    local_30 = iVar8 + 1;
    if (iVar8 == 0) {
      local_30 = uVar12;
    }
    if ((0 < (int)local_30) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), pwVar10 = local_38,
       0 < (int)local_30)) {
      wcsncpy(local_38,puVar11 + (int)uVar9,(longlong)iVar8);
      pwVar10[iVar8] = L'\0';
    }
    ppwVar5 = &local_38;
    bVar3 = true;
    bVar2 = false;
  }
  *ppwVar5 = (wchar_t *)0x0;
  uVar1 = *(undefined4 *)(ppwVar5 + 1);
  *param_1 = pwVar10;
  *(undefined4 *)(param_1 + 1) = uVar1;
  ppwVar5[1] = (wchar_t *)0x0;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)ppwVar5 + 0xc);
  if ((bVar2) && (local_28 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_38 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142529810 FUN_142529810 body=371 status=ok
// SIG undefined FUN_142529810(void)

undefined8 FUN_142529810(longlong *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 *local_28;
  undefined8 local_20;
  
  uVar6 = *DAT_146afc6a8;
  uVar10 = 200;
  if ((199 < (int)uVar6) && (uVar10 = 0x2000, (int)uVar6 < 0x2000)) {
    uVar10 = uVar6;
  }
  uVar8 = 0;
  uVar6 = 0;
  local_28 = (undefined4 *)0x0;
  local_20 = 0;
  cVar5 = (**(code **)(*DAT_146ab6358 + 0x420))(DAT_146ab6358,&local_28,1);
  if (cVar5 == '\0') {
    uVar9 = 0;
  }
  else {
    puVar1 = local_28 + (longlong)(int)local_20 * 3;
    puVar7 = local_28;
    if (local_28 != puVar1) {
      do {
        uVar2 = puVar7[1];
        uVar6 = uVar2;
        if (uVar2 <= uVar8) {
          uVar6 = uVar8;
        }
        if (uVar10 <= uVar2) {
          uVar3 = *puVar7;
          iVar4 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
          }
          *(ulonglong *)(*param_1 + (longlong)iVar4 * 8) = CONCAT44(uVar2,uVar3);
        }
        puVar7 = puVar7 + 3;
        uVar8 = uVar6;
      } while (puVar7 != puVar1);
    }
    if ((int)param_1[1] == 0) {
      puVar1 = local_28 + (longlong)(int)local_20 * 3;
      for (puVar7 = local_28; puVar7 != puVar1; puVar7 = puVar7 + 3) {
        uVar10 = puVar7[1];
        if (uVar10 == uVar6) {
          uVar3 = *puVar7;
          iVar4 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
          }
          *(ulonglong *)(*param_1 + (longlong)iVar4 * 8) = CONCAT44(uVar10,uVar3);
        }
      }
    }
    uVar9 = 1;
  }
  if (local_28 != (undefined4 *)0x0) {
    FMemory::Free(local_28);
  }
  return uVar9;
}



// FUNCTION 142529990 GetTableEntryMetaData body=168 status=ok
// SIG undefined GetTableEntryMetaData(void)

undefined8 *
UKismetStringTableLibrary::GetTableEntryMetaData
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_18;
  longlong *local_10;
  
  uVar5 = FUN_141607d00();
  FStringTableRegistry::FindStringTable(uVar5,&local_18,param_2);
  if (local_18 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FStringTable::GetMetaData(local_18,param_1,param_3,param_4);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_1;
}



// FUNCTION 142529a40 GetTableEntrySourceString body=150 status=ok
// SIG undefined GetTableEntrySourceString(void)

undefined8 *
UKismetStringTableLibrary::GetTableEntrySourceString
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_18;
  longlong *local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = FUN_141607d00();
  FStringTableRegistry::FindStringTable(uVar5,&local_18,param_2);
  if (local_18 != 0) {
    FStringTable::GetSourceString(local_18,param_3,param_1);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_1;
}



// FUNCTION 142529ae0 GetTableNamespace body=146 status=ok
// SIG undefined GetTableNamespace(void)

undefined8 * UKismetStringTableLibrary::GetTableNamespace(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_18;
  longlong *local_10;
  
  uVar5 = FUN_141607d00();
  FStringTableRegistry::FindStringTable(uVar5,&local_18,param_2);
  if (local_18 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_14160af80(local_18,param_1);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_1;
}



// FUNCTION 142529c30 GetTangents body=383 status=ok
// SIG undefined GetTangents(void)

void UInterpTrackMove::GetTangents
               (longlong param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x98) & 8;
  lVar3 = (longlong)param_3;
  if (param_2 == (uVar5 != 0) - 1) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    *param_4 = *(undefined4 *)(lVar3 * 0x2c + 0x10 + lVar2);
    *param_5 = *(undefined4 *)(lVar3 * 0x2c + 0x1c + lVar2);
    return;
  }
  iVar4 = 1;
  if (uVar5 == 0) {
    iVar4 = -1;
  }
  if (param_2 == iVar4) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    *param_4 = *(undefined4 *)(lVar3 * 0x2c + 0x14 + lVar2);
    *param_5 = *(undefined4 *)(lVar3 * 0x2c + 0x20 + lVar2);
    return;
  }
  iVar4 = 2;
  if (uVar5 == 0) {
    iVar4 = -1;
  }
  if (param_2 == iVar4) {
    lVar2 = *(longlong *)(param_1 + 0x48);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x98) & 0x11;
    if (uVar1 == 0x10) {
      if (uVar5 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = 3;
      }
    }
    else {
      iVar4 = -1;
      uVar5 = *(uint *)(param_1 + 0x98) & 8;
    }
    if (param_2 == iVar4) {
      lVar2 = *(longlong *)(param_1 + 0x60);
      *param_4 = *(undefined4 *)(lVar3 * 0x2c + 0x10 + lVar2);
      *param_5 = *(undefined4 *)(lVar3 * 0x2c + 0x1c + lVar2);
      return;
    }
    iVar4 = -1;
    if ((uVar1 == 0x10) && (iVar4 = 1, uVar5 != 0)) {
      iVar4 = 4;
    }
    if (param_2 == iVar4) {
      lVar2 = *(longlong *)(param_1 + 0x60);
      *param_4 = *(undefined4 *)(lVar3 * 0x2c + 0x14 + lVar2);
      *param_5 = *(undefined4 *)(lVar3 * 0x2c + 0x20 + lVar2);
      return;
    }
    iVar4 = -1;
    if ((uVar1 == 0x10) && (iVar4 = 2, uVar5 != 0)) {
      iVar4 = 5;
    }
    if (param_2 != iVar4) {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x60);
  }
  *param_4 = *(undefined4 *)(lVar3 * 0x2c + 0x18 + lVar2);
  *param_5 = *(undefined4 *)(lVar3 * 0x2c + 0x24 + lVar2);
  return;
}



// FUNCTION 142529e20 GetUnitVector body=421 status=ok
// SIG undefined GetUnitVector(void)

float * FRandomStream::GetUnitVector(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  
  uVar5 = *(uint *)(param_1 + 4);
  do {
    do {
      uVar5 = uVar5 * 0xbb38435 + 0x3619636b;
      fVar1 = (float)(uVar5 & 0x7fffff | 0x3f800000);
      uVar4 = uVar5 * 0xbb38435 + 0x3619636b;
      uVar5 = uVar4 * 0xbb38435 + 0x3619636b;
      fVar2 = (float)(uVar4 & 0x7fffff | 0x3f800000);
      fVar1 = fVar1 - (float)(int)fVar1;
      fVar3 = (float)(uVar5 & 0x7fffff | 0x3f800000);
      fVar2 = fVar2 - (float)(int)fVar2;
      fVar8 = (fVar1 + fVar1) - 1.0;
      fVar2 = (fVar2 + fVar2) - 1.0;
      fVar3 = fVar3 - (float)(int)fVar3;
      fVar3 = (fVar3 + fVar3) - 1.0;
      fVar1 = fVar2 * fVar2 + fVar8 * fVar8 + fVar3 * fVar3;
    } while (1.0 < fVar1);
  } while (fVar1 < 0.0001);
  *(uint *)(param_1 + 4) = uVar5;
  auVar7 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar6 = auVar7._0_4_;
  fVar6 = fVar6 + fVar6 * (0.5 - fVar1 * 0.5 * fVar6 * fVar6);
  fVar6 = fVar6 + fVar6 * (0.5 - fVar1 * 0.5 * fVar6 * fVar6);
  *param_2 = fVar8 * fVar6;
  param_2[1] = fVar2 * fVar6;
  param_2[2] = fVar3 * fVar6;
  return param_2;
}



// FUNCTION 142529fd0 GetUnmarkedBit body=351 status=ok
// SIG undefined GetUnmarkedBit(void)

ulonglong UKismetNodeHelperLibrary::GetUnmarkedBit
                    (uint param_1,ulonglong param_2,int param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = (uint)param_2;
  if (param_4 != '\0') {
    if ((param_3 < 0x20) && (uVar5 = 0, uVar3 = uVar5, 0 < param_3)) {
      do {
        if ((0x1f < (int)uVar3) || ((int)(param_1 & 1 << ((byte)uVar3 & 0x1f)) < 1)) {
          if ((((int)uVar4 < 0) || (param_3 <= (int)uVar4)) && (param_2 = uVar5, 0 < param_3)) {
            iVar1 = rand();
            uVar2 = (uint)((float)iVar1 * 3.051851e-05 * (float)param_3);
            uVar4 = param_3 - 1U;
            if ((int)uVar2 <= (int)(param_3 - 1U)) {
              uVar4 = uVar2;
            }
            param_2 = (ulonglong)uVar4;
          }
          uVar4 = (uint)param_2;
          while ((param_1 >> (uVar4 & 0x1f) & 1) != 0) {
            param_2 = uVar5;
            if (0 < param_3) {
              iVar1 = rand();
              uVar2 = (uint)((float)iVar1 * 3.051851e-05 * (float)param_3);
              uVar4 = param_3 - 1U;
              if ((int)uVar2 <= (int)(param_3 - 1U)) {
                uVar4 = uVar2;
              }
              param_2 = (ulonglong)uVar4;
            }
            uVar4 = (uint)param_2;
          }
          return param_2 & 0xffffffff;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while ((int)uVar2 < param_3);
    }
    return 0xffffffff;
  }
  if (param_3 < 0x20) {
    iVar1 = 0;
    if (0 < param_3) {
      do {
        if ((0x1f < iVar1) || ((int)(param_1 & 1 << ((byte)iVar1 & 0x1f)) < 1)) {
          uVar2 = 0;
          if ((-1 < (int)uVar4) && (uVar2 = 0, (int)uVar4 < param_3)) {
            uVar2 = uVar4;
          }
          if ((param_1 >> (uVar2 & 0x1f) & 1) != 0) {
            do {
              uVar3 = (longlong)(int)(uVar2 + 1) % (longlong)param_3;
              uVar2 = (uint)uVar3;
            } while ((param_1 >> (uVar2 & 0x1f) & 1) != 0);
            return uVar3 & 0xffffffff;
          }
          goto LAB_14252a0eb;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_3);
    }
  }
  uVar2 = 0xffffffff;
LAB_14252a0eb:
  return (ulonglong)uVar2;
}



// FUNCTION 14252a130 GetUpVector body=45 status=ok
// SIG undefined GetUpVector(void)

undefined4 * UKismetMathLibrary::GetUpVector(undefined4 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 local_48 [64];
  
  lVar2 = FRotationMatrix::FRotationMatrix(local_48);
  *param_1 = *(undefined4 *)(lVar2 + 0x20);
  uVar1 = *(undefined4 *)(lVar2 + 0x24);
  param_1[2] = *(undefined4 *)(lVar2 + 0x28);
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 14252a160 GetValidValue body=79 status=ok
// SIG undefined GetValidValue(void)

undefined1 UKismetNodeHelperLibrary::GetValidValue(longlong param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (param_1 == 0) {
    return 0xff;
  }
  cVar1 = UEnum::IsValidEnumValue(param_1,param_2);
  if (cVar1 != '\0') {
    return param_2;
  }
  uVar2 = UEnum::GetMaxEnumValue(param_1);
  return uVar2;
}



// FUNCTION 14252a1b0 GetVectorArrayAverage body=261 status=ok
// SIG undefined GetVectorArrayAverage(void)

undefined8 * UKismetMathLibrary::GetVectorArrayAverage(undefined8 *param_1,longlong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar5 = 0;
  fVar7 = 0.0;
  fVar9 = 0.0;
  fVar8 = 0.0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (0 < (int)param_2[1]) {
    lVar4 = (longlong)(int)param_2[1];
    if (3 < lVar4) {
      pfVar2 = (float *)(*param_2 + 8);
      pfVar1 = (float *)(*param_2 + 0x14);
      lVar3 = (lVar4 - 4U >> 2) + 1;
      lVar5 = lVar3 * 4;
      do {
        fVar7 = fVar7 + pfVar2[-2] + pfVar2[1] + pfVar2[4] + pfVar2[7];
        fVar9 = fVar9 + pfVar2[-1] + pfVar1[-1] + pfVar1[2] + pfVar1[5];
        fVar8 = fVar8 + *pfVar2 + *pfVar1 + pfVar1[3] + pfVar1[6];
        pfVar2 = pfVar2 + 0xc;
        pfVar1 = pfVar1 + 0xc;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar5 < lVar4) {
      lVar4 = lVar4 - lVar5;
      pfVar2 = (float *)(*param_2 + lVar5 * 0xc);
      do {
        fVar7 = fVar7 + *pfVar2;
        fVar9 = fVar9 + pfVar2[1];
        fVar8 = fVar8 + pfVar2[2];
        pfVar2 = pfVar2 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    fVar6 = 1.0 / (float)(int)param_2[1];
    *param_1 = CONCAT44(fVar9 * fVar6,fVar7 * fVar6);
    *(float *)(param_1 + 1) = fVar8 * fVar6;
  }
  return param_1;
}



// FUNCTION 14252a2c0 FUN_14252a2c0 body=1832 status=ok
// SIG undefined FUN_14252a2c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_14252a2c0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_res20;
  undefined1 auStack_298 [32];
  longlong local_278 [2];
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong *local_230;
  longlong *local_228;
  undefined4 *local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [48];
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_218 = DAT_1464aa6e0;
  uStack_214 = DAT_1464aa6e4;
  uStack_210 = DAT_1464aa6e8;
  uStack_20c = DAT_1464aa6ec;
  if ((((param_3 != 0) &&
       (local_res20 = param_4, lVar7 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1),
       lVar7 != 0)) && (lVar7 = FUN_1428cccb0(lVar7,param_3), lVar7 != 0)) &&
     ((cVar6 = UMaterialParameterCollectionInstance::GetVectorParameterValue
                         (lVar7,local_res20,&local_218), cVar6 == '\0' &&
      (*(char *)(lVar7 + 0x28) == '\0')))) {
    local_98 = 0xffffffff;
    local_c8 = 0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    uVar8 = FText::FromName(local_198,&local_res20);
    local_78[0] = 4;
    FText::FText(local_68,uVar8);
    local_50 = '\x01';
    local_278[0] = 0;
    local_278[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_278,0);
    FGenericPlatformString::Memcpy(local_278[0],L"ParamName",0x14);
    local_228 = local_278;
    local_220 = local_78;
    FUN_1407484b0(&local_c8,local_268,&local_228,0);
    if (local_278[0] != 0) {
      FMemory::Free();
    }
    if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_190 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar2 = (int *)((longlong)local_190 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_190 + 8))(local_190,1);
        }
      }
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_120,
                       L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                       ,L"KismetMaterialLibrary",L"WithInvalidParam");
    uVar8 = FTextFormat::FTextFormat(local_108,uVar8);
    uVar8 = FText::Format(local_138,uVar8,&local_c8);
    puVar9 = (undefined8 *)FUN_140973510(local_1a8,uVar8);
    local_238 = *puVar9;
    local_230 = (longlong *)puVar9[1];
    if (local_230 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_230 + 1) = (int)local_230[1] + 1;
      UNLOCK();
    }
    uVar8 = FText::FText(local_150);
    puVar9 = (undefined8 *)FUN_1416ed870(local_1b8,param_3,uVar8);
    local_248 = *puVar9;
    local_240 = (longlong *)puVar9[1];
    if (local_240 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_240 + 1) = (int)local_240[1] + 1;
      UNLOCK();
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_168,L"GetVectorParameterValue called on",L"KismetMaterialLibrary",
                       L"GetVectorParamOn");
    puVar9 = (undefined8 *)FUN_140973510(local_1c8,uVar8);
    local_258 = *puVar9;
    local_250 = (longlong *)puVar9[1];
    if (local_250 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_250 + 1) = (int)local_250[1] + 1;
      UNLOCK();
    }
    FName::FName(local_260,&DAT_1450e146c,1);
    uVar8 = FText::FText(local_180);
    uVar10 = FUN_14161fb50(local_f8,local_260);
    puVar9 = (undefined8 *)FMessageLog::Warning(uVar10,local_1d8,uVar8);
    puVar9 = (undefined8 *)FUN_141621960(*puVar9,local_1e8,&local_258);
    puVar9 = (undefined8 *)FUN_141621960(*puVar9,local_1f8,&local_248);
    FUN_141621960(*puVar9,local_208,&local_238);
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_200 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar2 = (int *)((longlong)local_200 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_200 + 8))(local_200,1);
        }
      }
    }
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1f0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar2 = (int *)((longlong)local_1f0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar2 = (int *)((longlong)local_1e0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1e0 + 8))(local_1e0,1);
        }
      }
    }
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar2 = (int *)((longlong)local_1d0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_f8);
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_178 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar2 = (int *)((longlong)local_178 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
    plVar1 = local_250;
    if (local_250 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_250 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_250)(local_250);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1c0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar2 = (int *)((longlong)local_1c0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_160 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar2 = (int *)((longlong)local_160 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
    plVar1 = local_240;
    if (local_240 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_240 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_240)(local_240);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar2 = (int *)((longlong)local_1b0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
        }
      }
    }
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_148 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar2 = (int *)((longlong)local_148 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
    plVar1 = local_230;
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_230 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1a0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar2 = (int *)((longlong)local_1a0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_130 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)local_130 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_118 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)local_118 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    local_80 = 0;
    *(undefined1 *)(lVar7 + 0x28) = 1;
    if (local_88 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_c8);
  }
  *param_1 = CONCAT44(uStack_214,local_218);
  param_1[1] = CONCAT44(uStack_20c,uStack_210);
  return param_1;
}



// FUNCTION 14252a9f0 GetYawPitchFromVector body=381 status=ok
// SIG undefined GetYawPitchFromVector(void)

void UKismetMathLibrary::GetYawPitchFromVector(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float local_58;
  
  fVar1 = param_1[1];
  local_58 = *param_1;
  fVar5 = param_1[2];
  fVar2 = local_58 * local_58 + fVar1 * fVar1 + fVar5 * fVar5;
  if (fVar2 == 1.0) {
    fVar2 = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
    local_58 = (float)*(undefined8 *)param_1;
    fVar1 = fVar2;
    fVar5 = param_1[2];
  }
  else if (1e-08 <= fVar2) {
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar1 = fVar1 * fVar3;
    local_58 = local_58 * fVar3;
    fVar2 = 0.0;
    fVar5 = fVar5 * fVar3;
  }
  else {
    fVar2 = 0.0;
    fVar1 = DAT_1468b5d94;
    local_58 = DAT_1468b5d90;
    fVar5 = DAT_1468b5d98;
  }
  fVar2 = (float)FGenericPlatformMath::Atan2(CONCAT44(fVar2,fVar1),local_58);
  *param_2 = fVar2 * 57.295776;
  fVar1 = (float)FGenericPlatformMath::Atan2(fVar5,SQRT(fVar1 * fVar1 + local_58 * local_58));
  *param_3 = fVar1 * 57.295776;
  return;
}



// FUNCTION 14252ab70 HasMarkedBit body=45 status=ok
// SIG undefined HasMarkedBit(void)

ulonglong UKismetNodeHelperLibrary::HasMarkedBit(uint param_1,int param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  int iVar2;
  
  if ((param_2 < 0x20) && (iVar2 = 0, 0 < param_2)) {
    do {
      if (iVar2 < 0x20) {
        uVar1 = 1 << ((byte)iVar2 & 0x1f);
        in_RAX = (ulonglong)uVar1;
        if (0 < (int)(param_1 & uVar1)) {
          return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14252aba0 HasUnmarkedBit body=45 status=ok
// SIG undefined HasUnmarkedBit(void)

undefined8 UKismetNodeHelperLibrary::HasUnmarkedBit(uint param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0x20) && (iVar1 = 0, 0 < param_2)) {
    do {
      if ((0x1f < iVar1) || ((int)(param_1 & 1 << ((byte)iVar1 & 0x1f)) < 1)) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}



// FUNCTION 14252abd0 HasVisibilityChangeRequestPending body=36 status=ok
// SIG undefined HasVisibilityChangeRequestPending(void)

longlong ULevel::HasVisibilityChangeRequestPending(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) &&
     ((param_1 == *(longlong *)(lVar1 + 0xf8) || (param_1 == *(longlong *)(lVar1 + 0x100))))) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 14252ac00 HideAdBanner body=83 status=ok
// SIG undefined HideAdBanner(void)

void UKismetSystemLibrary::HideAdBanner(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,"Advertising",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014252ac49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x48))(plVar4);
    return;
  }
  return;
}



// FUNCTION 14252ac60 Hypotenuse body=50 status=ok
// SIG undefined Hypotenuse(void)

ulonglong UKismetMathLibrary::Hypotenuse(undefined8 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ABS((float)param_1);
  param_2 = ABS(param_2);
  fVar2 = fVar1;
  if (param_2 <= fVar1) {
    fVar2 = param_2;
  }
  if (fVar1 <= param_2) {
    fVar1 = param_2;
  }
  return CONCAT44((int)((ulonglong)param_1 >> 0x20),
                  SQRT((fVar2 / fVar1) * (fVar2 / fVar1) + 1.0) * fVar1) & 0x7fffffffffffffff;
}



// FUNCTION 14252aca0 ImportFileAsTexture2D body=8 status=ok
// SIG undefined ImportFileAsTexture2D(void)

void UKismetRenderingLibrary::ImportFileAsTexture2D(undefined8 param_1,undefined8 param_2)

{
  FUN_1424fa400(param_2);
  return;
}



// FUNCTION 14252acb0 FUN_14252acb0 body=1151 status=ok
// SIG undefined FUN_14252acb0(void)

void FUN_14252acb0(uint *param_1,float *param_2,int param_3,float param_4,undefined8 *param_5,
                  float *param_6,float *param_7,float *param_8)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  uVar5 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if ((char)uVar5 != '\0') {
    lVar4 = *(longlong *)(param_1 + 4);
    fVar19 = param_2[1];
    iVar12 = (int)fVar19;
    fVar14 = fVar19;
    if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar19)) {
      auVar16._4_4_ = fVar19;
      auVar16._0_4_ = fVar19;
      auVar16._8_8_ = 0;
      uVar6 = movmskps(uVar5,auVar16);
      fVar14 = (float)(int)(iVar12 - (uVar6 & 1));
    }
    uVar6 = param_1[1];
    uVar13 = (ulonglong)(int)uVar6;
    fVar19 = (fVar19 - fVar14) * *(float *)(lVar4 + uVar13 * 4);
    uVar11 = 0;
    uVar7 = uVar6;
    while (0x40 < (int)uVar7) {
      uVar8 = ((int)((uint)uVar13 - uVar11) >> 1) + uVar11;
      pfVar1 = (float *)(lVar4 + (longlong)(int)uVar8 * 4);
      uVar6 = (uint)uVar13;
      if (fVar19 < *pfVar1 || fVar19 == *pfVar1) {
        uVar6 = uVar8;
        uVar8 = uVar11;
      }
      uVar13 = (ulonglong)uVar6;
      uVar11 = uVar8;
      uVar7 = uVar6 - uVar8;
    }
    while (((int)uVar11 < (int)uVar6 &&
           (pfVar1 = (float *)(lVar4 + 4 + (longlong)(int)uVar11 * 4),
           *pfVar1 <= fVar19 && fVar19 != *pfVar1))) {
      uVar11 = uVar11 + 1;
    }
    uVar6 = *param_1;
    uVar13 = (ulonglong)(int)uVar6;
    fVar14 = *param_2;
    iVar12 = (uVar6 + 1) * uVar11;
    lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar12 * 4;
    iVar9 = (int)fVar14;
    fVar15 = fVar14;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar14)) {
      auVar17._4_4_ = fVar14;
      auVar17._0_4_ = fVar14;
      auVar17._8_8_ = 0;
      uVar7 = movmskps(iVar12,auVar17);
      fVar15 = (float)(int)(iVar9 - (uVar7 & 1));
    }
    fVar14 = (fVar14 - fVar15) * *(float *)(lVar2 + uVar13 * 4);
    uVar7 = 0;
    uVar8 = uVar6;
    while (0x40 < (int)uVar8) {
      uVar10 = ((int)((uint)uVar13 - uVar7) >> 1) + uVar7;
      pfVar1 = (float *)(lVar2 + (longlong)(int)uVar10 * 4);
      uVar6 = (uint)uVar13;
      if (fVar14 < *pfVar1 || fVar14 == *pfVar1) {
        uVar6 = uVar10;
        uVar10 = uVar7;
      }
      uVar13 = (ulonglong)uVar6;
      uVar7 = uVar10;
      uVar8 = uVar6 - uVar10;
    }
    while (((int)uVar7 < (int)uVar6 &&
           (pfVar1 = (float *)(lVar2 + 4 + (longlong)(int)uVar7 * 4),
           *pfVar1 <= fVar14 && fVar14 != *pfVar1))) {
      uVar7 = uVar7 + 1;
    }
    fVar15 = *(float *)(lVar4 + (longlong)(int)uVar11 * 4);
    fVar20 = *(float *)(lVar2 + (longlong)(int)uVar7 * 4);
    fVar18 = *(float *)(lVar2 + 4 + (longlong)(int)uVar7 * 4) - fVar20;
    *param_5 = CONCAT44(((float)(int)uVar11 +
                        (fVar19 - fVar15) /
                        (*(float *)(lVar4 + 4 + (longlong)(int)uVar11 * 4) - fVar15)) /
                        (float)(int)((ulonglong)*(undefined8 *)param_1 >> 0x20),
                        ((fVar14 - fVar20) / fVar18 + (float)(int)uVar7) /
                        (float)(int)*(undefined8 *)param_1);
    fVar14 = (float)(int)(param_1[1] * *param_1) /
             *(float *)(*(longlong *)(param_1 + 4) + (longlong)(int)param_1[1] * 4);
    uVar13 = (ulonglong)_tls_index;
    fVar19 = 1.0 / ((float)param_3 * fVar18 * fVar14);
    *param_8 = SQRT(fVar19 * 0.5) * 4.0;
    uVar6 = param_1[1];
    uVar11 = *param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x38) <
         DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
    fVar15 = _guard_xfg_dispatch_icall_nop((float)(int)(uVar6 * uVar11) * fVar19);
    uVar3 = *param_5;
    fVar20 = fVar15 * DAT_1468509d8 * 0.5;
    fVar15 = (float)((int)ROUND((fVar20 + fVar20) - 0.5) >> 1);
    FImportanceTexture::GetColorBilinear(param_1,&local_78,*param_5,(int)fVar15);
    FImportanceTexture::GetColorBilinear(param_1,&local_88,uVar3,(int)(fVar15 + 1.0));
    fVar20 = fVar20 - fVar15;
    *param_6 = (local_88 - local_78) * fVar20 + local_78;
    param_6[1] = (local_84 - local_74) * fVar20 + local_74;
    param_6[2] = (local_80 - local_70) * fVar20 + local_70;
    param_6[3] = (local_7c - local_6c) * fVar20 + local_6c;
    *param_7 = fVar19 * param_4 * fVar14;
  }
  return;
}



// FUNCTION 14252b130 thunk_FUN_14252acb0 body=5 status=ok
// SIG undefined thunk_FUN_14252acb0(void)

void thunk_FUN_14252acb0(uint *param_1,float *param_2,int param_3,float param_4,undefined8 *param_5,
                        float *param_6,float *param_7,float *param_8)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  uVar5 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if ((char)uVar5 != '\0') {
    lVar4 = *(longlong *)(param_1 + 4);
    fVar19 = param_2[1];
    iVar12 = (int)fVar19;
    fVar14 = fVar19;
    if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar19)) {
      auVar16._4_4_ = fVar19;
      auVar16._0_4_ = fVar19;
      auVar16._8_8_ = 0;
      uVar6 = movmskps(uVar5,auVar16);
      fVar14 = (float)(int)(iVar12 - (uVar6 & 1));
    }
    uVar6 = param_1[1];
    uVar13 = (ulonglong)(int)uVar6;
    fVar19 = (fVar19 - fVar14) * *(float *)(lVar4 + uVar13 * 4);
    uVar11 = 0;
    uVar7 = uVar6;
    while (0x40 < (int)uVar7) {
      uVar8 = ((int)((uint)uVar13 - uVar11) >> 1) + uVar11;
      pfVar1 = (float *)(lVar4 + (longlong)(int)uVar8 * 4);
      uVar6 = (uint)uVar13;
      if (fVar19 < *pfVar1 || fVar19 == *pfVar1) {
        uVar6 = uVar8;
        uVar8 = uVar11;
      }
      uVar13 = (ulonglong)uVar6;
      uVar11 = uVar8;
      uVar7 = uVar6 - uVar8;
    }
    while (((int)uVar11 < (int)uVar6 &&
           (pfVar1 = (float *)(lVar4 + 4 + (longlong)(int)uVar11 * 4),
           *pfVar1 <= fVar19 && fVar19 != *pfVar1))) {
      uVar11 = uVar11 + 1;
    }
    uVar6 = *param_1;
    uVar13 = (ulonglong)(int)uVar6;
    fVar14 = *param_2;
    iVar12 = (uVar6 + 1) * uVar11;
    lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar12 * 4;
    iVar9 = (int)fVar14;
    fVar15 = fVar14;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar14)) {
      auVar17._4_4_ = fVar14;
      auVar17._0_4_ = fVar14;
      auVar17._8_8_ = 0;
      uVar7 = movmskps(iVar12,auVar17);
      fVar15 = (float)(int)(iVar9 - (uVar7 & 1));
    }
    fVar14 = (fVar14 - fVar15) * *(float *)(lVar2 + uVar13 * 4);
    uVar7 = 0;
    uVar8 = uVar6;
    while (0x40 < (int)uVar8) {
      uVar10 = ((int)((uint)uVar13 - uVar7) >> 1) + uVar7;
      pfVar1 = (float *)(lVar2 + (longlong)(int)uVar10 * 4);
      uVar6 = (uint)uVar13;
      if (fVar14 < *pfVar1 || fVar14 == *pfVar1) {
        uVar6 = uVar10;
        uVar10 = uVar7;
      }
      uVar13 = (ulonglong)uVar6;
      uVar7 = uVar10;
      uVar8 = uVar6 - uVar10;
    }
    while (((int)uVar7 < (int)uVar6 &&
           (pfVar1 = (float *)(lVar2 + 4 + (longlong)(int)uVar7 * 4),
           *pfVar1 <= fVar14 && fVar14 != *pfVar1))) {
      uVar7 = uVar7 + 1;
    }
    fVar15 = *(float *)(lVar4 + (longlong)(int)uVar11 * 4);
    fVar20 = *(float *)(lVar2 + (longlong)(int)uVar7 * 4);
    fVar18 = *(float *)(lVar2 + 4 + (longlong)(int)uVar7 * 4) - fVar20;
    *param_5 = CONCAT44(((float)(int)uVar11 +
                        (fVar19 - fVar15) /
                        (*(float *)(lVar4 + 4 + (longlong)(int)uVar11 * 4) - fVar15)) /
                        (float)(int)((ulonglong)*(undefined8 *)param_1 >> 0x20),
                        ((fVar14 - fVar20) / fVar18 + (float)(int)uVar7) /
                        (float)(int)*(undefined8 *)param_1);
    fVar14 = (float)(int)(param_1[1] * *param_1) /
             *(float *)(*(longlong *)(param_1 + 4) + (longlong)(int)param_1[1] * 4);
    uVar13 = (ulonglong)_tls_index;
    fVar19 = 1.0 / ((float)param_3 * fVar18 * fVar14);
    *param_8 = SQRT(fVar19 * 0.5) * 4.0;
    uVar6 = param_1[1];
    uVar11 = *param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x38) <
         DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
    fVar15 = _guard_xfg_dispatch_icall_nop((float)(int)(uVar6 * uVar11) * fVar19);
    uVar3 = *param_5;
    fVar20 = fVar15 * DAT_1468509d8 * 0.5;
    fVar15 = (float)((int)ROUND((fVar20 + fVar20) - 0.5) >> 1);
    FImportanceTexture::GetColorBilinear(param_1,&fStack_78,*param_5,(int)fVar15);
    FImportanceTexture::GetColorBilinear(param_1,&fStack_88,uVar3,(int)(fVar15 + 1.0));
    fVar20 = fVar20 - fVar15;
    *param_6 = (fStack_88 - fStack_78) * fVar20 + fStack_78;
    param_6[1] = (fStack_84 - fStack_74) * fVar20 + fStack_74;
    param_6[2] = (fStack_80 - fStack_70) * fVar20 + fStack_70;
    param_6[3] = (fStack_7c - fStack_6c) * fVar20 + fStack_6c;
    *param_7 = fVar19 * param_4 * fVar14;
  }
  return;
}



// FUNCTION 14252b140 InRange_FloatFloat body=58 status=ok
// SIG undefined InRange_FloatFloat(void)

undefined8
UKismetMathLibrary::InRange_FloatFloat
          (float param_1,float param_2,float param_3,char param_4,char param_5)

{
  bool bVar1;
  
  if (param_4 == '\0') {
    bVar1 = param_2 < param_1;
  }
  else {
    bVar1 = param_2 <= param_1;
  }
  if (bVar1) {
    if (param_5 == '\0') {
      bVar1 = param_1 < param_3;
    }
    else {
      bVar1 = param_1 <= param_3;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14252b180 InRange_IntInt body=60 status=ok
// SIG undefined InRange_IntInt(void)

undefined8
UKismetMathLibrary::InRange_IntInt(int param_1,int param_2,int param_3,char param_4,char param_5)

{
  bool bVar1;
  
  if (param_4 == '\0') {
    bVar1 = param_2 < param_1;
  }
  else {
    bVar1 = param_2 <= param_1;
  }
  if (bVar1) {
    if (param_5 == '\0') {
      bVar1 = param_1 < param_3;
    }
    else {
      bVar1 = param_1 <= param_3;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14252b1c0 FUN_14252b1c0 body=174 status=ok
// SIG undefined FUN_14252b1c0(void)

undefined8 FUN_14252b1c0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x20c);
  if (iVar2 < *(int *)(param_1 + 0xa8)) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        iVar3 = iVar3 + ((int)plVar1[0x57] - *(int *)((longlong)plVar1 + 0x2e4));
        (**(code **)(*plVar1 + 0x4d8))(plVar1,0);
        iVar2 = *(int *)(param_1 + 0x20c);
      }
      iVar2 = iVar2 + 1;
      *(int *)(param_1 + 0x20c) = iVar2;
    } while ((iVar3 <= param_2) && (iVar2 < *(int *)(param_1 + 0xa8)));
    if (iVar2 < *(int *)(param_1 + 0xa8)) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x20c) = 0;
  return 1;
}



// FUNCTION 14252b270 FUN_14252b270 body=433 status=ok
// SIG undefined FUN_14252b270(void)

void FUN_14252b270(longlong *param_1,int param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  iVar3 = (int)param_1[0x41];
  if (iVar3 == 0) {
    FUN_14253c2e0();
    SortActorsHierarchy(param_1 + 0x14,param_1);
    iVar3 = (int)param_1[0x41];
  }
  uVar7 = 0;
  if (iVar3 < (int)param_1[0x15]) {
    do {
      plVar1 = *(longlong **)(param_1[0x14] + (longlong)iVar3 * 8);
      if (plVar1 == (longlong *)0x0) {
LAB_14252b355:
        *(int *)(param_1 + 0x41) = (int)param_1[0x41] + 1;
        *(undefined1 *)((longlong)param_1 + 0x207) = 0;
      }
      else {
        uVar4 = *(uint *)((longlong)plVar1 + 0xc);
        uVar5 = uVar7;
        if ((int)uVar4 < (int)DAT_1469e91c4) {
          uVar6 = uVar4 & 0xffff;
          if ((int)uVar4 < 0) {
            uVar4 = uVar4 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)uVar6 * 0x18;
        }
        if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) != 0) goto LAB_14252b355;
        if (*(char *)((longlong)param_1 + 0x207) == '\0') {
          (**(code **)(*plVar1 + 0x4c8))(plVar1);
          *(undefined1 *)((longlong)param_1 + 0x207) = 1;
        }
        cVar2 = FUN_142234b20(plVar1,param_2);
        if (cVar2 != '\0') goto LAB_14252b355;
      }
    } while ((param_2 == 0) && (iVar3 = (int)param_1[0x41], iVar3 < (int)param_1[0x15]));
  }
  if ((int)param_1[0x15] <= (int)param_1[0x41]) {
    *(byte *)((longlong)param_1 + 0x204) = *(byte *)((longlong)param_1 + 0x204) | 1;
    *(undefined4 *)(param_1 + 0x41) = 0;
    *(undefined1 *)((longlong)param_1 + 0x207) = 0;
    if ((param_3 != '\0') && (cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30), cVar2 == '\0'))
    {
      uVar5 = uVar7;
      if (0 < (int)param_1[0x15]) {
        do {
          plVar1 = *(longlong **)(uVar5 + param_1[0x14]);
          if ((plVar1 != (longlong *)0x0) && (cVar2 = AActor::IsChildActor(plVar1), cVar2 == '\0'))
          {
            (**(code **)(*plVar1 + 0x530))(plVar1);
          }
          uVar4 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar4;
          uVar5 = uVar5 + 8;
        } while ((int)uVar4 < (int)param_1[0x15]);
      }
      *(byte *)((longlong)param_1 + 0x206) = *(byte *)((longlong)param_1 + 0x206) | 2;
    }
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  return;
}



// FUNCTION 14252b430 FUN_14252b430 body=1333 status=ok
// SIG undefined FUN_14252b430(void)

void FUN_14252b430(int *param_1,longlong param_2,char *param_3)

{
  float *pfVar1;
  char cVar2;
  int *piVar3;
  longlong lVar4;
  char *pcVar5;
  char cVar6;
  longlong lVar7;
  float *pfVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined8 local_res10;
  char *local_res18;
  int local_res20;
  longlong local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  longlong *local_b8;
  int local_b0;
  undefined4 local_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [96];
  
  local_res18 = param_3;
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0xd8) != 0)) &&
     (*(int *)(*(longlong *)(param_2 + 0xd8) + 0xc) == 2)) {
    FWeakObjectPtr::operator=(param_1 + 0x10);
    iVar12 = 0;
    *(char *)(param_1 + 0x12) = *param_3;
    iVar17 = 0;
    local_b8 = (longlong *)0x0;
    local_ac = 0;
    iVar11 = iVar17;
    if (*(longlong *)(param_2 + 0xd8) != 0) {
      iVar11 = *(int *)(*(longlong *)(param_2 + 0xd8) + 0x18);
    }
    iVar18 = iVar11 + -0xb;
    if (iVar11 + -0xb < 1) {
      iVar18 = iVar17;
    }
    iVar11 = iVar11 - iVar18;
    param_1[2] = iVar11;
    local_b0 = iVar11;
    if (0 < iVar11) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8);
    }
    plVar19 = local_b8;
    _guard_xfg_dispatch_icall_nop(local_b8,0,(longlong)iVar11 << 3);
    UTexture2D::GetMipData(param_2,iVar18,plVar19);
    piVar3 = *(int **)(param_2 + 0xd8);
    iVar11 = iVar17;
    if (piVar3 != (int *)0x0) {
      iVar17 = piVar3[1];
      iVar11 = *piVar3;
    }
    plVar14 = (longlong *)(param_1 + 0xc);
    iVar11 = iVar11 + -1 >> ((byte)iVar18 & 0x1f);
    iVar16 = iVar11 + 1;
    *param_1 = iVar16;
    iVar17 = iVar17 + -1 >> ((byte)iVar18 & 0x1f);
    iVar18 = iVar17 + 1;
    param_1[1] = iVar18;
    bVar9 = (char)param_1[2] - 1;
    iVar17 = iVar18 * iVar16 * 4 -
             ((iVar17 >> (bVar9 & 0x1f)) + 1) * ((iVar11 >> (bVar9 & 0x1f)) + 1);
    iVar11 = iVar17 / 3 + (iVar17 >> 0x1f) +
             (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) & 0xffffffffU) >> 0x1f);
    iVar17 = param_1[0xe];
    if (iVar17 < iVar11) {
      param_1[0xe] = iVar11;
      if (param_1[0xf] < iVar11) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar17);
      }
    }
    else if ((iVar11 < iVar17) && (iVar11 != iVar17)) {
      param_1[0xe] = iVar11;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar14);
    }
    plVar20 = plVar19;
    if (0 < param_1[2]) {
      do {
        iVar17 = ((*param_1 + -1 >> ((byte)iVar12 & 0x1f)) + 1) *
                 ((param_1[1] + -1 >> ((byte)iVar12 & 0x1f)) + 1);
        iVar11 = (*param_1 * param_1[1] - iVar17) * 4;
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar14 +
                           (longlong)
                           (iVar11 / 3 + (iVar11 >> 0x1f) +
                           (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU)
                                >> 0x1f)) * 4),(void *)*plVar20,(longlong)iVar17 << 2);
        iVar12 = iVar12 + 1;
        plVar20 = plVar20 + 1;
      } while (iVar12 < param_1[2]);
    }
    piVar3 = param_1 + 4;
    iVar17 = param_1[6];
    iVar11 = param_1[1] + 1;
    if (iVar17 < iVar11) {
      param_1[6] = iVar11;
      if (param_1[7] < iVar11) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(piVar3,iVar17);
      }
    }
    else if ((iVar11 < iVar17) && (iVar11 != iVar17)) {
      param_1[6] = iVar11;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(piVar3);
    }
    iVar17 = param_1[10];
    iVar11 = (*param_1 + 1) * param_1[1];
    if (iVar17 < iVar11) {
      param_1[10] = iVar11;
      if (param_1[0xb] < iVar11) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar17);
      }
    }
    else if ((iVar11 < iVar17) && (iVar11 != iVar17)) {
      param_1[10] = iVar11;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 8);
    }
    **(undefined4 **)piVar3 = 0;
    if (0 < param_1[1]) {
      local_d8 = 4;
      local_res20 = 0;
      do {
        pcVar5 = local_res18;
        iVar12 = 1;
        iVar11 = *param_1 * local_res20;
        lVar4 = *plVar19;
        lVar10 = (longlong)((*param_1 + 1) * local_res20);
        lVar7 = *(longlong *)(param_1 + 8);
        *(undefined4 *)(lVar7 + lVar10 * 4) = 0;
        pfVar1 = (float *)(lVar7 + lVar10 * 4);
        iVar17 = *param_1;
        if (0 < iVar17) {
          pfVar13 = pfVar1;
          do {
            cVar2 = *pcVar5;
            local_res10 = CONCAT44(local_res10._4_4_,
                                   *(undefined4 *)
                                    ((longlong)pfVar13 +
                                    ((lVar4 + (longlong)iVar11 * 4) - (longlong)pfVar1)));
            cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x10);
            if ((cVar6 == '\0') ||
               (lVar7 = FWeakObjectPtr::Get(param_1 + 0x10), (*(byte *)(lVar7 + 0x4b) & 1) == 0)) {
              local_a8 = (float)local_res10._2_1_ * 0.003921569;
              fStack_a4 = (float)local_res10._1_1_ * 0.003921569;
              pfVar8 = &local_a8;
              fStack_a0 = (float)(byte)local_res10 * 0.003921569;
              fStack_9c = (float)local_res10._3_1_ * 0.003921569;
            }
            else {
              pfVar8 = (float *)FLinearColor::FLinearColor(local_98,&local_res10);
            }
            fStack_c0 = (float)*(undefined8 *)(pfVar8 + 2);
            local_c8 = (float)*(undefined8 *)pfVar8;
            fStack_c4 = (float)((ulonglong)*(undefined8 *)pfVar8 >> 0x20);
            if (cVar2 == '\0') {
              fStack_bc = local_c8 * 0.3 + fStack_c4 * 0.59 + fStack_c0 * 0.11;
            }
            else {
              fStack_bc = local_c8;
              if (((cVar2 != '\x01') && (fStack_bc = fStack_c4, cVar2 != '\x02')) &&
                 (fStack_bc = fStack_c0, cVar2 != '\x03')) {
                if (cVar2 == '\x04') {
                  fStack_bc = (float)((ulonglong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
                }
                else {
                  fStack_bc = 1.0;
                }
              }
            }
            iVar12 = iVar12 + 1;
            pfVar13[1] = fStack_bc + *pfVar13;
            pfVar13 = pfVar13 + 1;
            iVar17 = *param_1;
          } while (iVar12 <= iVar17);
        }
        iVar12 = local_res20 + 1;
        iVar11 = local_res20 + 2;
        *(float *)(local_d8 + *(longlong *)(param_1 + 4)) =
             pfVar1[iVar17] + *(float *)(*(longlong *)(param_1 + 4) + -4 + local_d8);
        local_d8 = local_d8 + 4;
        plVar19 = local_b8;
        local_res20 = iVar12;
      } while (iVar11 <= param_1[1]);
    }
    uVar21 = 0;
    uVar15 = (ulonglong)((longlong)(plVar19 + local_b0) + (7 - (longlong)plVar19)) >> 3;
    if (plVar19 + local_b0 < plVar19) {
      uVar15 = uVar21;
    }
    plVar14 = plVar19;
    if (uVar15 != 0) {
      do {
        FMemory::Free(*plVar14);
        uVar21 = uVar21 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar21 != uVar15);
    }
    if (plVar19 != (longlong *)0x0) {
      FMemory::Free(plVar19);
    }
    return;
  }
  FWeakObjectPtr::operator=(&local_res10,0);
  param_1[0x10] = (int)local_res10;
  param_1[0x11] = local_res10._4_4_;
  local_res10 = 0;
  FUN_141790820(L"Importance Texture only supports RGBA8 textures",2,0);
  return;
}



// FUNCTION 14252b970 Initialize body=113 status=ok
// SIG undefined Initialize(void)

void ULevel::Initialize(longlong param_1,longlong param_2)

{
  FString::operator=(param_1 + 0x30);
  FString::operator=(param_1 + 0x40,param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x20);
  FString::operator=(param_1 + 0x58,param_2 + 0x28);
  FString::operator=(param_1 + 0x68,param_2 + 0x38);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x78,param_2 + 0x48);
  FString::operator=(param_1 + 0x88,param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x68);
  return;
}



// FUNCTION 14252b9f0 FUN_14252b9f0 body=764 status=ok
// SIG undefined FUN_14252b9f0(void)

void FUN_14252b9f0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  cVar8 = FUN_1428cfb70();
  iVar14 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar15 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar15);
      if (lVar6 != 0) {
        if (((*(byte *)(lVar6 + 0x93) & 8) == 0) && ((*(byte *)(lVar6 + 0x92) & 0x20) == 0)) {
          if ((char)*(byte *)(lVar6 + 0x90) < '\0') {
            uStack_a4 = 1;
            local_a8 = 0;
            plVar2 = (longlong *)(lVar6 + 0x2b0);
            *(byte *)(lVar6 + 0x90) = *(byte *)(lVar6 + 0x90) | 2;
            uVar4 = *(uint *)(lVar6 + 0x2d8);
            puVar1 = (uint *)(lVar6 + 0x2c0);
            uStack_94 = 0;
            iStack_90 = 0;
            if (uVar4 != 0) {
              puVar13 = *(uint **)(lVar6 + 0x2d0);
              if (*(uint **)(lVar6 + 0x2d0) == (uint *)0x0) {
                puVar13 = puVar1;
              }
              uVar5 = *puVar13;
              iStack_90 = 0;
              local_a8 = 0;
              while (uVar5 == 0) {
                lVar11 = (longlong)local_a8;
                iStack_90 = iStack_90 + 0x20;
                iVar9 = local_a8 + 1;
                bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
                local_a8 = iVar9;
                if (bVar7) goto LAB_14252bb4f;
                uVar5 = puVar13[lVar11 + 1];
              }
              uStack_a4 = -uVar5 & uVar5;
              iVar9 = 0x1f;
              if (uStack_a4 != 0) {
                for (; uStack_a4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
                }
              }
              if (uStack_a4 == 0) {
                iVar9 = 0x20;
              }
              else {
                iVar9 = 0x1f - iVar9;
              }
              uStack_94 = (iStack_90 - iVar9) + 0x1f;
              if ((int)uVar4 < (int)uStack_94) {
LAB_14252bb4f:
                uStack_94 = uVar4;
              }
            }
            uVar5 = *(uint *)(lVar6 + 0x2d8);
            uStack_70 = CONCAT44(uStack_94,0xffffffff);
            local_68 = CONCAT44(uStack_8c,iStack_90);
            uStack_58 = CONCAT44(uStack_a4,local_a8);
            uVar12 = uVar5 & 0xffffffe0;
            iStack_80 = local_a8;
            uStack_7c = uStack_a4;
            local_78 = puVar1;
            local_60 = plVar2;
            puStack_50 = puVar1;
            uStack_48 = uStack_70;
            uStack_40 = local_68;
            uStack_94 = uVar5;
            if (uVar5 != uVar4) {
              puVar13 = *(uint **)(lVar6 + 0x2d0);
              if (*(uint **)(lVar6 + 0x2d0) == (uint *)0x0) {
                puVar13 = puVar1;
              }
              uVar10 = puVar13[(int)uVar5 >> 5] & -1 << ((byte)uVar5 & 0x1f);
              iVar9 = (int)uVar5 >> 5;
              while (uVar10 == 0) {
                uVar12 = uVar12 + 0x20;
                if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
                goto LAB_14252bc26;
                uVar10 = puVar13[(longlong)iVar9 + 1];
                iVar9 = iVar9 + 1;
              }
              uVar10 = -uVar10 & uVar10;
              iVar9 = 0x1f;
              if (uVar10 != 0) {
                for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
                }
              }
              if (uVar10 == 0) {
                iVar9 = 0x20;
              }
              else {
                iVar9 = 0x1f - iVar9;
              }
              uStack_94 = (uVar12 - iVar9) + 0x1f;
              if ((int)uVar4 < (int)uStack_94) {
LAB_14252bc26:
                uStack_94 = uVar4;
              }
            }
            while( true ) {
              if ((uStack_70._4_4_ == uStack_94) && (local_78 == puVar1)) break;
              lVar11 = *(longlong *)(*plVar2 + (longlong)(int)uStack_70._4_4_ * 0x10);
              if (lVar11 != 0) {
                pbVar3 = (byte *)(lVar11 + 0xc9);
                *pbVar3 = *pbVar3 | 1;
              }
              uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
            }
          }
          if (cVar8 == '\0') {
            if (*(char *)(lVar6 + 0x90) < '\0') {
              FUN_14222a3b0(lVar6,1);
            }
            else {
              FUN_142227350(lVar6,1);
            }
          }
        }
        *(byte *)(lVar6 + 0x92) = *(byte *)(lVar6 + 0x92) & 0xdf;
      }
      iVar14 = iVar14 + 1;
      lVar15 = lVar15 + 8;
    } while (iVar14 < *(int *)(param_1 + 0xa8));
  }
  return;
}



// FUNCTION 14252bcf0 FUN_14252bcf0 body=189 status=ok
// SIG undefined FUN_14252bcf0(void)

void FUN_14252bcf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((*(longlong *)(param_1 + 0xc0) != 0) && ((*(byte *)(param_1 + 0x204) & 0x10) != 0)) {
    lVar1 = FUN_14256ac50();
    lVar2 = *(longlong *)(param_1 + 0x1f0);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      lVar2 = *(longlong *)(lVar1 + 0x1f0);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x148) + 0x18) == '\0') {
      local_18 = *(undefined4 *)(param_1 + 0x1dc);
      uStack_14 = *(undefined4 *)(param_1 + 0x1e0);
      uStack_10 = *(undefined4 *)(param_1 + 0x1e4);
      uStack_c = *(undefined4 *)(param_1 + 0x1e8);
      FUN_1426fa260(*(longlong *)(param_1 + 0x148),
                    *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1b8),lVar2,&local_18);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x158) + 8) == '\0') {
      local_18 = *(undefined4 *)(param_1 + 0x1dc);
      uStack_14 = *(undefined4 *)(param_1 + 0x1e0);
      uStack_10 = *(undefined4 *)(param_1 + 0x1e4);
      uStack_c = *(undefined4 *)(param_1 + 0x1e8);
      FUN_1426fa460(*(longlong *)(param_1 + 0x158),
                    *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1b8),lVar2,&local_18);
    }
  }
  return;
}



// FUNCTION 14252bdb0 InputEvent_IsAltDown body=8 status=ok
// SIG undefined InputEvent_IsAltDown(void)

bool UKismetInputLibrary::InputEvent_IsAltDown(longlong param_1)

{
  return (*(byte *)(param_1 + 8) & 0x30) != 0;
}



// FUNCTION 14252bdc0 InputEvent_IsCommandDown body=8 status=ok
// SIG undefined InputEvent_IsCommandDown(void)

bool UKismetInputLibrary::InputEvent_IsCommandDown(longlong param_1)

{
  return (*(byte *)(param_1 + 8) & 0xc0) != 0;
}



// FUNCTION 14252bdd0 InputEvent_IsControlDown body=8 status=ok
// SIG undefined InputEvent_IsControlDown(void)

bool UKismetInputLibrary::InputEvent_IsControlDown(longlong param_1)

{
  return (*(byte *)(param_1 + 8) & 0xc) != 0;
}



// FUNCTION 14252bde0 InputEvent_IsLeftAltDown body=10 status=ok
// SIG undefined InputEvent_IsLeftAltDown(void)

byte UKismetInputLibrary::InputEvent_IsLeftAltDown(longlong param_1)

{
  return *(byte *)(param_1 + 8) >> 4 & 1;
}



// FUNCTION 14252bdf0 InputEvent_IsLeftCommandDown body=10 status=ok
// SIG undefined InputEvent_IsLeftCommandDown(void)

byte UKismetInputLibrary::InputEvent_IsLeftCommandDown(longlong param_1)

{
  return *(byte *)(param_1 + 8) >> 6 & 1;
}



// FUNCTION 14252be00 InputEvent_IsLeftControlDown body=10 status=ok
// SIG undefined InputEvent_IsLeftControlDown(void)

byte UKismetInputLibrary::InputEvent_IsLeftControlDown(longlong param_1)

{
  return *(byte *)(param_1 + 8) >> 2 & 1;
}



// FUNCTION 14252be10 InputEvent_IsLeftShiftDown body=7 status=ok
// SIG undefined InputEvent_IsLeftShiftDown(void)

byte UKismetInputLibrary::InputEvent_IsLeftShiftDown(longlong param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



// FUNCTION 14252be20 InputEvent_IsRightAltDown body=10 status=ok
// SIG undefined InputEvent_IsRightAltDown(void)

byte UKismetInputLibrary::InputEvent_IsRightAltDown(longlong param_1)

{
  return *(byte *)(param_1 + 8) >> 5 & 1;
}



// FUNCTION 14252be30 InputEvent_IsRightCommandDown body=10 status=ok
// SIG undefined InputEvent_IsRightCommandDown(void)

byte UKismetInputLibrary::InputEvent_IsRightCommandDown(longlong param_1)

{
  return *(byte *)(param_1 + 8) >> 7;
}



// FUNCTION 14252be40 InputEvent_IsRightControlDown body=10 status=ok
// SIG undefined InputEvent_IsRightControlDown(void)

byte UKismetInputLibrary::InputEvent_IsRightControlDown(longlong param_1)

{
  return *(byte *)(param_1 + 8) >> 3 & 1;
}



// FUNCTION 14252be50 InputEvent_IsRightShiftDown body=9 status=ok
// SIG undefined InputEvent_IsRightShiftDown(void)

byte UKismetInputLibrary::InputEvent_IsRightShiftDown(longlong param_1)

{
  return *(byte *)(param_1 + 8) >> 1 & 1;
}



// FUNCTION 14252be60 InputEvent_IsShiftDown body=8 status=ok
// SIG undefined InputEvent_IsShiftDown(void)

bool UKismetInputLibrary::InputEvent_IsShiftDown(longlong param_1)

{
  return (*(byte *)(param_1 + 8) & 3) != 0;
}


