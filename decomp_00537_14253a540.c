// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14253a540 FUN_14253a540 body=424 status=ok
// SIG undefined FUN_14253a540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14253a540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined4 *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc870) {
    _Init_thread_header(&DAT_146afc870);
    if (DAT_146afc870 == -1) {
      FName::FName(&DAT_146afc868,L"SphereTraceMultiByProfile",1);
      _Init_thread_footer(&DAT_146afc870);
    }
  }
  local_f8 = (undefined4 *)CONCAT71(local_f8._1_7_,param_10);
  local_f0 = param_1;
  FUN_14251be80(local_c8,DAT_146afc868,param_6,param_7);
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_e0 = local_c8;
    local_e8 = &local_d8;
    local_d8 = 2;
    local_f0 = param_5;
    local_f8 = &DAT_1464aa810;
    local_d4 = param_4;
    uVar1 = FUN_142357370(lVar2,param_9,param_2,param_3);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14253a6f0 FUN_14253a6f0 body=442 status=ok
// SIG undefined FUN_14253a6f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14253a6f0(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  int *local_110;
  undefined4 *local_108;
  undefined1 *local_100;
  int local_f8 [2];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc7d0) {
    _Init_thread_header(&DAT_146afc7d0);
    if (DAT_146afc7d0 == -1) {
      FName::FName(&DAT_146afc7c8,L"SphereTraceMultiForObjects",1);
      _Init_thread_footer(&DAT_146afc7d0);
    }
  }
  local_118 = (undefined4 *)CONCAT71(local_118._1_7_,param_10);
  local_110 = param_1;
  FUN_14251be80(local_d8,DAT_146afc7c8,param_6,param_7);
  FUN_14251bd40(local_f8,param_5);
  if (local_f8[0] != 0) {
    lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar2 != 0) {
      local_100 = local_d8;
      local_108 = &local_f0;
      local_f0 = 2;
      local_110 = local_f8;
      local_118 = &DAT_1464aa810;
      local_ec = param_4;
      uVar1 = UWorld::SweepMultiByObjectType(lVar2,param_9,param_2,param_3);
      goto LAB_14253a816;
    }
  }
  uVar1 = 0;
LAB_14253a816:
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14253a8b0 FUN_14253a8b0 body=437 status=ok
// SIG undefined FUN_14253a8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14253a8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined8 local_110;
  undefined4 *local_108;
  undefined1 *local_100;
  undefined *local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar2 = UEngineTypes::ConvertToCollisionChannel(param_5);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc760) {
    _Init_thread_header(&DAT_146afc760);
    if (DAT_146afc760 == -1) {
      FName::FName(&DAT_146afc758,L"SphereTraceSingle",1);
      _Init_thread_footer(&DAT_146afc760);
    }
  }
  local_118 = (undefined4 *)CONCAT71(local_118._1_7_,param_10);
  local_110 = param_1;
  FUN_14251be80(local_d8,DAT_146afc758,param_6,param_7);
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    local_f8 = &DAT_146aefe68;
    local_100 = local_d8;
    local_e8 = 2;
    local_108 = &local_e8;
    local_110 = CONCAT44(local_110._4_4_,uVar2);
    local_118 = &DAT_1464aa810;
    local_e4 = param_4;
    uVar1 = UWorld::SweepSingleByChannel(lVar3,param_9,param_2,param_3);
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14253aa70 FUN_14253aa70 body=424 status=ok
// SIG undefined FUN_14253aa70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14253aa70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined4 *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc860) {
    _Init_thread_header(&DAT_146afc860);
    if (DAT_146afc860 == -1) {
      FName::FName(&DAT_146afc858,L"SphereTraceSingleByProfile",1);
      _Init_thread_footer(&DAT_146afc860);
    }
  }
  local_f8 = (undefined4 *)CONCAT71(local_f8._1_7_,param_10);
  local_f0 = param_1;
  FUN_14251be80(local_c8,DAT_146afc858,param_6,param_7);
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_e0 = local_c8;
    local_e8 = &local_d8;
    local_d8 = 2;
    local_f0 = param_5;
    local_f8 = &DAT_1464aa810;
    local_d4 = param_4;
    uVar1 = FUN_1423577f0(lVar2,param_9,param_2,param_3);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14253ac20 FUN_14253ac20 body=442 status=ok
// SIG undefined FUN_14253ac20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14253ac20(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  int *local_110;
  undefined4 *local_108;
  undefined1 *local_100;
  int local_f8 [2];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc7c0) {
    _Init_thread_header(&DAT_146afc7c0);
    if (DAT_146afc7c0 == -1) {
      FName::FName(&DAT_146afc7b8,L"SphereTraceSingleForObjects",1);
      _Init_thread_footer(&DAT_146afc7c0);
    }
  }
  local_118 = (undefined4 *)CONCAT71(local_118._1_7_,param_10);
  local_110 = param_1;
  FUN_14251be80(local_d8,DAT_146afc7b8,param_6,param_7);
  FUN_14251bd40(local_f8,param_5);
  if (local_f8[0] != 0) {
    lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar2 != 0) {
      local_100 = local_d8;
      local_108 = &local_f0;
      local_f0 = 2;
      local_110 = local_f8;
      local_118 = &DAT_1464aa810;
      local_ec = param_4;
      uVar1 = UWorld::SweepSingleByObjectType(lVar2,param_9,param_2,param_3);
      goto LAB_14253ad46;
    }
  }
  uVar1 = 0;
LAB_14253ad46:
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14253ade0 Split body=5 status=ok
// SIG undefined Split(void)

undefined8
UKismetStringLibrary::Split
          (undefined8 *param_1,undefined8 *param_2,wchar_t **param_3,wchar_t **param_4,
          undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  wchar_t *pwVar12;
  wchar_t *pwStack_40;
  int iStack_38;
  undefined4 uStack_34;
  
  puVar11 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = FUN_141592950(param_1,puVar5,param_5,param_6,0xffffffff);
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    if (param_3 != (wchar_t **)0x0) {
      iVar7 = *(int *)(param_1 + 1) + -1;
      if (*(int *)(param_1 + 1) == 0) {
        pwVar12 = L"";
        iVar7 = 0;
      }
      else {
        pwVar12 = (wchar_t *)*param_1;
      }
      pwStack_40 = (wchar_t *)0x0;
      uStack_34 = 0;
      if (iVar2 < iVar7) {
        iVar7 = iVar2;
      }
      iVar8 = iVar7 + 1;
      if (iVar7 == 0) {
        iVar8 = 0;
      }
      pwVar10 = pwStack_40;
      iStack_38 = iVar8;
      if ((0 < iVar8) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&pwStack_40,0), iVar8 = iStack_38,
         pwVar10 = pwStack_40, 0 < iStack_38)) {
        wcsncpy(pwStack_40,pwVar12,(longlong)iVar7);
        pwVar10[iVar7] = L'\0';
      }
      if (param_3 == &pwStack_40) {
        if (pwVar10 != (wchar_t *)0x0) {
          FMemory::Free(pwVar10);
        }
      }
      else {
        if (*param_3 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *param_3 = pwVar10;
        *(int *)(param_3 + 1) = iVar8;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_34;
      }
    }
    pwVar12 = (wchar_t *)0x0;
    if (param_4 != (wchar_t **)0x0) {
      iVar8 = *(int *)(param_1 + 1);
      iVar7 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        iVar7 = 0;
      }
      uVar9 = iVar8 - 1;
      uVar4 = iVar7 + iVar2;
      uVar6 = iVar8 - 1;
      if (iVar8 == 0) {
        uVar9 = 0;
      }
      uVar1 = uVar4 + 0x7fffffff;
      if (uVar4 < uVar9) {
        uVar9 = uVar4;
      }
      if (iVar8 == 0) {
        uVar6 = 0;
      }
      uVar4 = uVar9;
      if ((uVar9 <= uVar1) && (uVar4 = uVar6, uVar1 < uVar6)) {
        uVar4 = uVar1;
      }
      if (iVar8 != 0) {
        puVar11 = (undefined2 *)*param_1;
      }
      iVar7 = uVar4 - uVar9;
      pwStack_40 = (wchar_t *)0x0;
      uStack_34 = 0;
      iVar2 = iVar7 + 1;
      if (iVar7 == 0) {
        iVar2 = 0;
      }
      iStack_38 = iVar2;
      if ((0 < iVar2) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&pwStack_40,0), iVar2 = iStack_38,
         pwVar12 = pwStack_40, 0 < iStack_38)) {
        wcsncpy(pwStack_40,puVar11 + (int)uVar9,(longlong)iVar7);
        pwVar12[iVar7] = L'\0';
      }
      if (param_4 == &pwStack_40) {
        if (pwVar12 != (wchar_t *)0x0) {
          FMemory::Free(pwVar12);
        }
      }
      else {
        if (*param_4 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *param_4 = pwVar12;
        *(int *)(param_4 + 1) = iVar2;
        *(undefined4 *)((longlong)param_4 + 0xc) = uStack_34;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14253adf0 StackTraceImpl body=34 status=ok
// SIG undefined StackTraceImpl(void)

void UKismetSystemLibrary::StackTraceImpl(undefined8 param_1)

{
  longlong local_18 [3];
  
  FFrame::GetStackTrace(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14253ae20 StartsWith body=5 status=ok
// SIG undefined StartsWith(void)

ulonglong FString::StartsWith(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  iVar4 = iVar1 + -1;
  if (param_3 == 1) {
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (iVar4 < 1) goto LAB_14159a0f8;
    pwVar2 = L"";
    if (iVar1 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)*param_2;
    }
    if (*(int *)(param_1 + 1) != 0) {
      pwVar2 = (wchar_t *)*param_1;
    }
    iVar1 = _wcsnicmp(pwVar2,pwVar3,(longlong)iVar4);
    param_1 = (undefined8 *)CONCAT44(extraout_var,iVar1);
  }
  else {
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (iVar4 < 1) goto LAB_14159a0f8;
    pwVar2 = L"";
    if (iVar1 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)*param_2;
    }
    if (*(int *)(param_1 + 1) != 0) {
      pwVar2 = (wchar_t *)*param_1;
    }
    iVar1 = wcsncmp(pwVar2,pwVar3,(longlong)iVar4);
    param_1 = (undefined8 *)CONCAT44(extraout_var_00,iVar1);
  }
  if ((int)param_1 == 0) {
    return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
LAB_14159a0f8:
  return (ulonglong)param_1 & 0xffffffffffffff00;
}



// FUNCTION 14253ae30 StringTableIdAndKeyFromText body=134 status=ok
// SIG undefined StringTableIdAndKeyFromText(void)

undefined1
UKismetTextLibrary::StringTableIdAndKeyFromText
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_141607d00();
  uVar6 = FStringTableRegistry::FindTableIdAndKey(uVar7,param_1,param_2,param_3);
  plVar4 = *(longlong **)(param_1 + 8);
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
  return uVar6;
}



// FUNCTION 14253aec0 TEase body=102 status=ok
// SIG undefined TEase(void)

undefined8
UKismetMathLibrary::TEase
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined1 *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = FUN_142520240(param_4,*param_5,param_6,param_7);
  FUN_14253afa0(param_1,param_2,param_3,uVar1,local_res8);
  return param_1;
}



// FUNCTION 14253af30 TInterpTo body=109 status=ok
// SIG undefined TInterpTo(void)

undefined8 *
UKismetMathLibrary::TInterpTo
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
          float param_5)

{
  undefined8 uVar1;
  
  if (0.0 < param_5) {
    FUN_14253afa0();
    return param_1;
  }
  uVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  uVar1 = param_3[3];
  param_1[2] = param_3[2];
  param_1[3] = uVar1;
  uVar1 = param_3[5];
  param_1[4] = param_3[4];
  param_1[5] = uVar1;
  return param_1;
}



// FUNCTION 14253afa0 FUN_14253afa0 body=2350 status=ok
// SIG undefined FUN_14253afa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14253afa0(float *param_1,float *param_2,float *param_3,float param_4,char *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float fVar14;
  float fVar15;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar16;
  undefined1 auVar13 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  ulonglong uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [32];
  undefined1 local_c8 [192];
  
  fVar18 = *param_2;
  fVar20 = param_2[1];
  fVar22 = param_2[2];
  fVar24 = param_2[3];
  fVar33 = *param_3;
  fVar14 = param_3[1];
  fVar15 = param_3[2];
  fVar16 = param_3[3];
  fVar29 = param_3[8];
  fStack_11c = param_3[9];
  fStack_10c = param_3[10];
  fVar30 = param_3[0xb];
  fVar31 = param_3[4];
  fVar32 = param_3[5];
  fVar42 = param_3[6];
  fVar43 = param_3[7];
  auVar10._0_4_ = fVar18 * fVar18 + fVar22 * fVar22;
  auVar10._4_4_ = fVar20 * fVar20 + fVar24 * fVar24;
  auVar10._8_4_ = fVar22 * fVar22 + fVar18 * fVar18;
  auVar10._12_4_ = fVar24 * fVar24 + fVar20 * fVar20;
  fVar34 = param_2[4];
  fVar35 = param_2[5];
  fVar36 = param_2[6];
  fVar37 = param_2[7];
  fVar38 = param_2[8];
  fVar39 = param_2[9];
  fVar40 = param_2[10];
  fVar41 = param_2[0xb];
  fVar25 = auVar10._4_4_ + auVar10._0_4_;
  fVar26 = auVar10._8_4_ + auVar10._4_4_;
  fVar27 = auVar10._12_4_ + auVar10._8_4_;
  fVar28 = auVar10._0_4_ + auVar10._12_4_;
  auVar11._4_4_ = fVar26;
  auVar11._0_4_ = fVar25;
  auVar11._8_4_ = fVar27;
  auVar11._12_4_ = fVar28;
  auVar11 = rsqrtps(auVar10,auVar11);
  fVar17 = auVar11._0_4_;
  fVar19 = auVar11._4_4_;
  fVar21 = auVar11._8_4_;
  fVar23 = auVar11._12_4_;
  fVar17 = (_DAT_146afc5d0 - fVar17 * fVar17 * fVar25 * _DAT_146afc5d0) * fVar17 + fVar17;
  fVar19 = (fRam0000000146afc5d4 - fVar19 * fVar19 * fVar26 * fRam0000000146afc5d4) * fVar19 +
           fVar19;
  fVar21 = (fRam0000000146afc5d8 - fVar21 * fVar21 * fVar27 * fRam0000000146afc5d8) * fVar21 +
           fVar21;
  fVar23 = (fRam0000000146afc5dc - fVar23 * fVar23 * fVar28 * fRam0000000146afc5dc) * fVar23 +
           fVar23;
  fVar25 = (float)(((uint)(((_DAT_146afc5d0 - fVar17 * fVar17 * fVar25 * _DAT_146afc5d0) * fVar17 +
                           fVar17) * fVar18) ^ _DAT_146afc5c0) & -(uint)(_DAT_146afc680 <= fVar25) ^
                  _DAT_146afc5c0);
  fVar26 = (float)(((uint)(((fRam0000000146afc5d4 - fVar19 * fVar19 * fVar26 * fRam0000000146afc5d4)
                            * fVar19 + fVar19) * fVar20) ^ uRam0000000146afc5c4) &
                   -(uint)(fRam0000000146afc684 <= fVar26) ^ uRam0000000146afc5c4);
  fVar27 = (float)(((uint)(((fRam0000000146afc5d8 - fVar21 * fVar21 * fVar27 * fRam0000000146afc5d8)
                            * fVar21 + fVar21) * fVar22) ^ uRam0000000146afc5c8) &
                   -(uint)(fRam0000000146afc688 <= fVar27) ^ uRam0000000146afc5c8);
  fVar28 = (float)(((uint)(((fRam0000000146afc5dc - fVar23 * fVar23 * fVar28 * fRam0000000146afc5dc)
                            * fVar23 + fVar23) * fVar24) ^ uRam0000000146afc5cc) &
                   -(uint)(fRam0000000146afc68c <= fVar28) ^ uRam0000000146afc5cc);
  auVar12._0_4_ = fVar33 * fVar33 + fVar15 * fVar15;
  auVar12._4_4_ = fVar14 * fVar14 + fVar16 * fVar16;
  auVar12._8_4_ = fVar15 * fVar15 + fVar33 * fVar33;
  auVar12._12_4_ = fVar16 * fVar16 + fVar14 * fVar14;
  fVar17 = auVar12._4_4_ + auVar12._0_4_;
  fVar19 = auVar12._8_4_ + auVar12._4_4_;
  fVar21 = auVar12._12_4_ + auVar12._8_4_;
  fVar23 = auVar12._0_4_ + auVar12._12_4_;
  auVar3._4_4_ = fVar19;
  auVar3._0_4_ = fVar17;
  auVar3._8_4_ = fVar21;
  auVar3._12_4_ = fVar23;
  auVar11 = rsqrtps(auVar12,auVar3);
  fVar18 = auVar11._0_4_;
  fVar20 = auVar11._4_4_;
  fVar22 = auVar11._8_4_;
  fVar24 = auVar11._12_4_;
  fVar18 = (_DAT_146afc5d0 - fVar18 * fVar18 * fVar17 * _DAT_146afc5d0) * fVar18 + fVar18;
  fVar20 = (fRam0000000146afc5d4 - fVar20 * fVar20 * fVar19 * fRam0000000146afc5d4) * fVar20 +
           fVar20;
  fVar22 = (fRam0000000146afc5d8 - fVar22 * fVar22 * fVar21 * fRam0000000146afc5d8) * fVar22 +
           fVar22;
  fVar24 = (fRam0000000146afc5dc - fVar24 * fVar24 * fVar23 * fRam0000000146afc5dc) * fVar24 +
           fVar24;
  fVar33 = (float)(((uint)(((_DAT_146afc5d0 - fVar18 * fVar18 * fVar17 * _DAT_146afc5d0) * fVar18 +
                           fVar18) * fVar33) ^ _DAT_146afc5c0) & -(uint)(_DAT_146afc680 <= fVar17) ^
                  _DAT_146afc5c0);
  fVar18 = (float)(((uint)(((fRam0000000146afc5d4 - fVar20 * fVar20 * fVar19 * fRam0000000146afc5d4)
                            * fVar20 + fVar20) * fVar14) ^ uRam0000000146afc5c4) &
                   -(uint)(fRam0000000146afc684 <= fVar19) ^ uRam0000000146afc5c4);
  fVar20 = (float)(((uint)(((fRam0000000146afc5d8 - fVar22 * fVar22 * fVar21 * fRam0000000146afc5d8)
                            * fVar22 + fVar22) * fVar15) ^ uRam0000000146afc5c8) &
                   -(uint)(fRam0000000146afc688 <= fVar21) ^ uRam0000000146afc5c8);
  fVar22 = (float)(((uint)(((fRam0000000146afc5dc - fVar24 * fVar24 * fVar23 * fRam0000000146afc5dc)
                            * fVar24 + fVar24) * fVar16) ^ uRam0000000146afc5cc) &
                   -(uint)(fRam0000000146afc68c <= fVar23) ^ uRam0000000146afc5cc);
  if (*param_5 == '\0') {
    if (1e-05 < ABS(param_4)) {
      if (ABS(param_4 - 1.0) <= 1e-05) {
        *param_1 = fVar33;
        param_1[1] = fVar18;
        param_1[2] = fVar20;
        param_1[3] = fVar22;
        param_1[4] = fVar31;
        param_1[5] = fVar32;
        param_1[6] = fVar42;
        param_1[7] = fVar43;
        param_1[8] = fVar29;
        param_1[9] = fStack_11c;
        param_1[10] = fStack_10c;
        param_1[0xb] = fVar30;
        return param_1;
      }
      fVar34 = fVar34 + (fVar31 - fVar34) * param_4;
      fVar35 = fVar35 + (fVar32 - fVar35) * param_4;
      fVar36 = fVar36 + (fVar42 - fVar36) * param_4;
      fVar37 = fVar37 + (fVar43 - fVar37) * param_4;
      fVar24 = fVar33 * fVar25 + fVar20 * fVar27;
      fVar14 = fVar18 * fVar26 + fVar22 * fVar28;
      fVar15 = fVar20 * fVar27 + fVar33 * fVar25;
      fVar16 = fVar22 * fVar28 + fVar18 * fVar26;
      fVar38 = fVar38 + (fVar29 - fVar38) * param_4;
      fVar39 = fVar39 + (fStack_11c - fVar39) * param_4;
      fVar40 = fVar40 + (fStack_10c - fVar40) * param_4;
      fVar41 = fVar41 + (fVar30 - fVar41) * param_4;
      fVar29 = (float)(-(uint)(0.0 <= fVar14 + fVar24) & ((uint)(0.0 - fVar25) ^ (uint)fVar25) ^
                      (uint)(0.0 - fVar25)) * (_DAT_146afc520 - param_4) + param_4 * fVar33;
      fVar30 = (float)(-(uint)(0.0 <= fVar15 + fVar14) & ((uint)(0.0 - fVar26) ^ (uint)fVar26) ^
                      (uint)(0.0 - fVar26)) * (fRam0000000146afc524 - param_4) + param_4 * fVar18;
      fVar31 = (float)(-(uint)(0.0 <= fVar16 + fVar15) & ((uint)(0.0 - fVar27) ^ (uint)fVar27) ^
                      (uint)(0.0 - fVar27)) * (fRam0000000146afc528 - param_4) + param_4 * fVar20;
      fVar32 = (float)(-(uint)(0.0 <= fVar24 + fVar16) & ((uint)(0.0 - fVar28) ^ (uint)fVar28) ^
                      (uint)(0.0 - fVar28)) * (fRam0000000146afc52c - param_4) + param_4 * fVar22;
      auVar13._0_4_ = fVar29 * fVar29 + fVar31 * fVar31;
      auVar13._4_4_ = fVar30 * fVar30 + fVar32 * fVar32;
      auVar13._8_4_ = fVar31 * fVar31 + fVar29 * fVar29;
      auVar13._12_4_ = fVar32 * fVar32 + fVar30 * fVar30;
      fVar33 = auVar13._4_4_ + auVar13._0_4_;
      fVar14 = auVar13._8_4_ + auVar13._4_4_;
      fVar15 = auVar13._12_4_ + auVar13._8_4_;
      fVar16 = auVar13._0_4_ + auVar13._12_4_;
      auVar4._4_4_ = fVar14;
      auVar4._0_4_ = fVar33;
      auVar4._8_4_ = fVar15;
      auVar4._12_4_ = fVar16;
      auVar11 = rsqrtps(auVar13,auVar4);
      fVar18 = auVar11._0_4_;
      fVar20 = auVar11._4_4_;
      fVar22 = auVar11._8_4_;
      fVar24 = auVar11._12_4_;
      fVar18 = (_DAT_146afc5d0 - fVar18 * fVar18 * fVar33 * _DAT_146afc5d0) * fVar18 + fVar18;
      fVar20 = (fRam0000000146afc5d4 - fVar20 * fVar20 * fVar14 * fRam0000000146afc5d4) * fVar20 +
               fVar20;
      fVar22 = (fRam0000000146afc5d8 - fVar22 * fVar22 * fVar15 * fRam0000000146afc5d8) * fVar22 +
               fVar22;
      fVar24 = (fRam0000000146afc5dc - fVar24 * fVar24 * fVar16 * fRam0000000146afc5dc) * fVar24 +
               fVar24;
      fVar25 = (float)(((uint)(((_DAT_146afc5d0 - fVar18 * fVar18 * fVar33 * _DAT_146afc5d0) *
                                fVar18 + fVar18) * fVar29) ^ _DAT_146afc5c0) &
                       -(uint)(_DAT_146afc680 <= fVar33) ^ _DAT_146afc5c0);
      fVar26 = (float)(((uint)(((fRam0000000146afc5d4 -
                                fVar20 * fVar20 * fVar14 * fRam0000000146afc5d4) * fVar20 + fVar20)
                              * fVar30) ^ uRam0000000146afc5c4) &
                       -(uint)(fRam0000000146afc684 <= fVar14) ^ uRam0000000146afc5c4);
      fVar27 = (float)(((uint)(((fRam0000000146afc5d8 -
                                fVar22 * fVar22 * fVar15 * fRam0000000146afc5d8) * fVar22 + fVar22)
                              * fVar31) ^ uRam0000000146afc5c8) &
                       -(uint)(fRam0000000146afc688 <= fVar15) ^ uRam0000000146afc5c8);
      fVar28 = (float)(((uint)(((fRam0000000146afc5dc -
                                fVar24 * fVar24 * fVar16 * fRam0000000146afc5dc) * fVar24 + fVar24)
                              * fVar32) ^ uRam0000000146afc5cc) &
                       -(uint)(fRam0000000146afc68c <= fVar16) ^ uRam0000000146afc5cc);
    }
    *param_1 = fVar25;
    param_1[1] = fVar26;
    param_1[2] = fVar27;
    param_1[3] = fVar28;
    param_1[4] = fVar34;
    param_1[5] = fVar35;
    param_1[6] = fVar36;
    param_1[7] = fVar37;
    param_1[8] = fVar38;
    param_1[9] = fVar39;
    param_1[10] = fVar40;
    param_1[0xb] = fVar41;
  }
  else if (*param_5 == '\x01') {
    local_148 = CONCAT44(fVar18,fVar33);
    uStack_140 = CONCAT44(fVar22,fVar20);
    FQuat::Rotator(&local_148,&local_128);
    local_148 = CONCAT44(fVar26,fVar25);
    uStack_140 = CONCAT44(fVar28,fVar27);
    FQuat::Rotator(&local_148,&local_118);
    local_168 = CONCAT44((fStack_124 - fStack_114) * param_4 + fStack_114,
                         (local_128 - local_118) * param_4 + local_118);
    uStack_160 = CONCAT44(uStack_160._4_4_,(fStack_120 - fStack_110) * param_4 + fStack_110);
    puVar8 = (undefined8 *)FRotator::Quaternion(&local_168,&local_148);
    auVar6._4_4_ = (fVar32 - fVar35) * param_4 + fVar35;
    auVar6._0_4_ = (fVar31 - fVar34) * param_4 + fVar34;
    auVar6._8_4_ = (fVar42 - fVar36) * param_4 + fVar36;
    auVar6._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 4) = auVar6;
    auVar5._4_4_ = (fStack_11c - fVar39) * param_4 + fVar39;
    auVar5._0_4_ = (fVar29 - fVar38) * param_4 + fVar38;
    auVar5._8_4_ = (fStack_10c - fVar40) * param_4 + fVar40;
    auVar5._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 8) = auVar5;
    uVar7 = puVar8[1];
    *(undefined8 *)param_1 = *puVar8;
    *(undefined8 *)(param_1 + 2) = uVar7;
  }
  else {
    if (fVar33 * fVar25 + fVar18 * fVar26 + fVar20 * fVar27 + fVar22 * fVar28 < 0.0) {
      fVar33 = -fVar33;
      fVar18 = -fVar18;
      fVar20 = -fVar20;
      fVar22 = -fVar22;
    }
    local_128 = (fStack_11c - fVar39) * param_4 + fVar39;
    local_148 = CONCAT44(fVar18,fVar33);
    local_118 = (fStack_10c - fVar40) * param_4 + fVar40;
    local_138 = 0;
    uStack_130 = 0;
    local_168 = 0;
    uStack_160 = 0x3f80000000000000;
    uStack_140 = CONCAT44(fVar22,fVar20);
    uStack_150 = (ulonglong)(uint)(fVar42 * 0.5);
    local_158 = CONCAT44(fVar32 * 0.5,fVar31 * 0.5);
    fStack_124 = fStack_11c;
    fStack_120 = fStack_11c;
    fStack_114 = fStack_10c;
    fStack_110 = fStack_10c;
    pfVar9 = (float *)FDualQuat::operator*(&local_168,local_e8,&local_148);
    local_148 = *(undefined8 *)(pfVar9 + 4);
    uStack_140 = *(undefined8 *)(pfVar9 + 6);
    fVar18 = *pfVar9;
    fVar20 = pfVar9[1];
    fVar22 = pfVar9[2];
    fVar24 = pfVar9[3];
    local_168 = CONCAT44(fVar26,fVar25);
    local_108 = 0;
    uStack_100 = 0x3f80000000000000;
    local_158 = 0;
    uStack_150 = 0;
    local_f8 = fVar34 * 0.5;
    local_ec = 0;
    local_f4 = fVar35 * 0.5;
    local_f0 = fVar36 * 0.5;
    uStack_160 = CONCAT44(fVar28,fVar27);
    pfVar9 = (float *)FDualQuat::operator*(&local_108,local_c8,&local_168);
    fVar33 = 1.0 - param_4;
    fVar34 = fVar20 * param_4 + fVar33 * pfVar9[1];
    fVar42 = fVar18 * param_4 + fVar33 * *pfVar9;
    fVar43 = fVar22 * param_4 + fVar33 * pfVar9[2];
    fVar32 = fVar24 * param_4 + fVar33 * pfVar9[3];
    fVar31 = 1.0 / SQRT(fVar42 * fVar42 + fVar34 * fVar34 + fVar43 * fVar43 + fVar32 * fVar32);
    fVar32 = fVar31 * fVar32;
    fVar30 = ((float)local_148 * param_4 + fVar33 * pfVar9[4]) * fVar31;
    fVar24 = (local_148._4_4_ * param_4 + fVar33 * pfVar9[5]) * fVar31;
    fVar22 = ((float)uStack_140 * param_4 + fVar33 * pfVar9[6]) * fVar31;
    fVar18 = -(fVar34 * fVar31);
    fVar14 = (uStack_140._4_4_ * param_4 + fVar33 * pfVar9[7]) * fVar31;
    fVar33 = -(fVar42 * fVar31);
    fVar20 = -(fVar43 * fVar31);
    fVar15 = fVar30 * fVar32 * _DAT_146afc5b0;
    fVar16 = fVar30 * fVar20 * fRam0000000146afc5b4;
    fVar30 = fVar30 * fVar18 * fRam0000000146afc5b8;
    *param_1 = fVar42 * fVar31;
    param_1[1] = fVar34 * fVar31;
    param_1[2] = fVar43 * fVar31;
    param_1[3] = fVar32;
    fVar15 = fVar15 + fVar14 * fVar33 + fVar20 * fVar24 * _DAT_146afc5a0 +
             fVar18 * fVar22 * _DAT_146afc590;
    fVar18 = fVar16 + fVar14 * fVar18 + fVar32 * fVar24 * fRam0000000146afc5a4 +
             fVar33 * fVar22 * fRam0000000146afc594;
    fVar20 = fVar30 + fVar14 * fVar20 + fVar33 * fVar24 * fRam0000000146afc5a8 +
             fVar32 * fVar22 * fRam0000000146afc598;
    auVar1._4_4_ = fVar18 + fVar18;
    auVar1._0_4_ = fVar15 + fVar15;
    auVar1._8_4_ = fVar20 + fVar20;
    auVar1._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 4) = auVar1;
    auVar2._4_4_ = local_128;
    auVar2._0_4_ = (fVar29 - fVar38) * param_4 + fVar38;
    auVar2._8_4_ = local_118;
    auVar2._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 8) = auVar2;
  }
  return param_1;
}



// FUNCTION 14253b8d0 TextFromStringTable body=26 status=ok
// SIG undefined TextFromStringTable(void)

undefined8 UKismetTextLibrary::TextFromStringTable(undefined8 param_1)

{
  FText::FromStringTable();
  return param_1;
}



// FUNCTION 14253b8f0 IsCultureInvariant body=5 status=ok
// SIG undefined IsCultureInvariant(void)

uint FText::IsCultureInvariant(longlong param_1)

{
  return CONCAT31((uint3)(*(uint *)(param_1 + 0x10) >> 9),(char)(*(uint *)(param_1 + 0x10) >> 1)) &
         0xffffff01;
}



// FUNCTION 14253b900 IsEmpty body=5 status=ok
// SIG undefined IsEmpty(void)

bool FText::IsEmpty(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 0x10))();
  return *(int *)(lVar1 + 8) < 2;
}



// FUNCTION 14253b910 IsFromStringTable body=5 status=ok
// SIG undefined IsFromStringTable(void)

bool FText::IsFromStringTable(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x28))();
  iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  return iVar1 == 0xb;
}



// FUNCTION 14253b920 IsTransient body=5 status=ok
// SIG undefined IsTransient(void)

byte FText::IsTransient(longlong param_1)

{
  return *(byte *)(param_1 + 0x10) & 1;
}



// FUNCTION 14253b930 TextToLower body=32 status=ok
// SIG undefined TextToLower(void)

undefined8 UKismetTextLibrary::TextToLower(undefined8 param_1,undefined8 param_2)

{
  FText::ToLower(param_2,param_1);
  return param_1;
}



// FUNCTION 14253b950 TextToUpper body=32 status=ok
// SIG undefined TextToUpper(void)

undefined8 UKismetTextLibrary::TextToUpper(undefined8 param_1,undefined8 param_2)

{
  FText::ToUpper(param_2,param_1);
  return param_1;
}



// FUNCTION 14253b970 TextTrimPreceding body=23 status=ok
// SIG undefined TextTrimPreceding(void)

undefined8 UKismetTextLibrary::TextTrimPreceding(undefined8 param_1)

{
  FText::TrimPreceding();
  return param_1;
}



// FUNCTION 14253b990 TextTrimPreceding body=23 status=ok
// SIG undefined TextTrimPreceding(void)

undefined8 UKismetTextLibrary::TextTrimPreceding(undefined8 param_1)

{
  FUN_14161a1b0();
  return param_1;
}



// FUNCTION 14253b9b0 TextTrimPreceding body=23 status=ok
// SIG undefined TextTrimPreceding(void)

undefined8 UKismetTextLibrary::TextTrimPreceding(undefined8 param_1)

{
  FUN_14161a390();
  return param_1;
}



// FUNCTION 14253b9d0 FUN_14253b9d0 body=1078 status=ok
// SIG undefined FUN_14253b9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14253b9d0(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  int iStack_150;
  uint uStack_14c;
  undefined8 local_148;
  uint uStack_140;
  int iStack_13c;
  int local_138;
  undefined8 local_130;
  longlong *local_128;
  int iStack_120;
  uint uStack_11c;
  uint *puStack_118;
  undefined4 uStack_110;
  int iStack_10c;
  int iStack_108;
  undefined1 local_100 [64];
  undefined1 *local_c0;
  int local_b8;
  int local_b4;
  undefined1 local_b0 [96];
  undefined1 *local_50;
  undefined8 local_48;
  char local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  puStack_118 = (uint *)(param_3 + 2);
  local_3c = param_2;
  local_b8 = 0;
  local_40 = '\0';
  local_c0 = (undefined1 *)0x0;
  local_b4 = 0;
  local_50 = (undefined1 *)0x0;
  local_48 = 0;
  iVar1 = (int)param_3[5];
  local_158._0_4_ = 0;
  local_158._4_4_ = 1;
  local_148._4_4_ = 0;
  uStack_140 = 0;
  if (iVar1 != 0) {
    puVar13 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar13 = puStack_118;
    }
    uVar14 = *puVar13;
    while (uVar14 == 0) {
      lVar9 = (longlong)(int)local_158;
      uStack_140 = uStack_140 + 0x20;
      iVar8 = (int)local_158 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_158;
      local_158._0_4_ = iVar8;
      if (bVar3) goto LAB_14253bad4;
      uVar14 = puVar13[lVar9 + 1];
    }
    local_158._4_4_ = -uVar14 & uVar14;
    iVar8 = 0x1f;
    if (local_158._4_4_ != 0) {
      for (; local_158._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (local_158._4_4_ == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_148._4_4_ = (uStack_140 - iVar8) + 0x1f;
    if (iVar1 < local_148._4_4_) {
LAB_14253bad4:
      local_148._4_4_ = iVar1;
    }
  }
  uStack_110 = 0xffffffff;
  iStack_10c = local_148._4_4_;
  iStack_108 = uStack_140;
  iStack_120 = (int)local_158;
  uStack_11c = local_158._4_4_;
  iStack_150 = (int)local_158;
  uStack_14c = local_158._4_4_;
  local_138 = uStack_140;
  uStack_140 = 0xffffffff;
  iStack_13c = local_148._4_4_;
  bVar3 = local_148._4_4_ < iVar1;
  local_158 = param_3;
  local_130 = param_4;
  local_128 = param_3;
  local_148 = puStack_118;
  if (bVar3) {
    do {
      plVar4 = local_158;
      lVar9 = (longlong)iStack_13c;
      plVar7 = *(longlong **)(*local_158 + 8 + lVar9 * 0x18);
      local_40 = '\0';
      (**(code **)(*plVar7 + 8))(plVar7,local_b0);
      iVar1 = local_b8;
      if (local_40 != '\0') {
        lVar2 = *plVar4;
        lVar10 = (longlong)local_b8;
        local_b8 = local_b8 + 1;
        if (local_b4 < local_b8) {
          TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_100,iVar1);
        }
        puVar6 = local_100;
        if (local_c0 != (undefined1 *)0x0) {
          puVar6 = local_c0;
        }
        *(undefined4 *)(puVar6 + lVar10 * 0x10) = *(undefined4 *)(lVar2 + lVar9 * 0x18);
        *(longlong **)((longlong)(puVar6 + lVar10 * 0x10) + 8) = plVar7;
      }
      uStack_140 = uStack_140 & ~uStack_14c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
    } while (iStack_13c < (int)local_148[6]);
  }
  uVar12 = 0;
  uVar15 = uVar12;
  if (0 < local_b8) {
    do {
      puVar6 = local_100;
      if (local_c0 != (undefined1 *)0x0) {
        puVar6 = local_c0;
      }
      puVar11 = *(undefined8 **)(puVar6 + uVar15 + 8);
      iVar1 = *(int *)(puVar6 + uVar15);
      TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(param_3,(int)param_3[1] - *(int *)((longlong)param_3 + 0x34),0);
      if ((int)param_3[9] != 0) {
        plVar7 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar7 = param_3 + 7;
        }
        iVar8 = *(int *)((longlong)plVar7 + ((longlong)(int)param_3[9] - 1U & (longlong)iVar1) * 4);
        iVar5 = iVar8;
        if (iVar8 != -1) {
          do {
            iVar8 = *(int *)(*param_3 + 0x10 + (longlong)iVar5 * 0x18);
            if (*(int *)(*param_3 + (longlong)iVar5 * 0x18) == iVar1) break;
            iVar5 = iVar8;
          } while (iVar8 != -1);
        }
joined_r0x00014253bc91:
        if (iVar5 != -1) {
          if (*(undefined8 **)(*param_3 + 8 + (longlong)iVar5 * 0x18) == puVar11) {
            TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
            ::Remove(param_3,iVar5);
          }
          if (iVar8 == -1) goto LAB_14253bcf5;
          iVar5 = iVar8;
          do {
            iVar8 = *(int *)(*param_3 + 0x10 + (longlong)iVar5 * 0x18);
            if (*(int *)(*param_3 + (longlong)iVar5 * 0x18) == iVar1) break;
            iVar5 = iVar8;
          } while (iVar8 != -1);
          goto joined_r0x00014253bc91;
        }
      }
LAB_14253bcf5:
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)(puVar11,1);
      }
      uVar14 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar14;
      uVar15 = uVar15 + 0x10;
    } while ((int)uVar14 < local_b8);
    if (0 < local_b8) {
      TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(&DAT_146533320,local_130,0);
    }
  }
  uVar12 = 0;
  uVar15 = uVar12;
  if (0 < (int)local_48) {
    do {
      puVar6 = local_b0;
      if (local_50 != (undefined1 *)0x0) {
        puVar6 = local_50;
      }
      puVar11 = (undefined8 *)(puVar6 + uVar15);
      if (*(int *)(puVar11 + 1) != -1) {
        plVar7 = (longlong *)FWeakObjectPtr::Get((longlong)puVar11 + 0xc);
        if (plVar7 != (longlong *)0x0) {
          lVar9 = UObject::FindFunction(plVar7,*puVar11);
          if (lVar9 != 0) {
            (**(code **)(*plVar7 + 0x208))(plVar7,lVar9,puVar11 + 1);
          }
        }
      }
      uVar14 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar14;
      uVar15 = uVar15 + 0x18;
    } while ((int)uVar14 < (int)local_48);
  }
  if (local_50 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (local_c0 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14253be10 TimeSecondsToString body=158 status=ok
// SIG undefined TimeSecondsToString(void)

undefined8 UKismetStringLibrary::TimeSecondsToString(undefined8 param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = (int)ROUND((param_2 * 0.016666668 + param_2 * 0.016666668) - 0.5) >> 1;
  fVar3 = (param_2 - (float)((int)ROUND((param_2 + param_2) - 0.5) >> 1)) * 100.0;
  fVar2 = (float)iVar1 * 60.0;
  param_2 = param_2 - fVar2;
  FString::PrintfImpl(fVar2,L"%02d:%02d.%02d",iVar1,(int)ROUND((param_2 + param_2) - 0.5) >> 1,
                      (int)ROUND((fVar3 + fVar3) - 0.5) >> 1);
  return param_1;
}



// FUNCTION 14253beb0 ToLower body=32 status=ok
// SIG undefined ToLower(void)

undefined8 UKismetStringLibrary::ToLower(undefined8 param_1,undefined8 param_2)

{
  FString::ToLower(param_2,param_1);
  return param_1;
}



// FUNCTION 14253bed0 ToUpper body=32 status=ok
// SIG undefined ToUpper(void)

undefined8 UKismetStringLibrary::ToUpper(undefined8 param_1,undefined8 param_2)

{
  FString::ToUpper(param_2,param_1);
  return param_1;
}



// FUNCTION 14253bef0 TransformRotation body=152 status=ok
// SIG undefined TransformRotation(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
UKismetMathLibrary::TransformRotation(undefined8 param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [16];
  
  pfVar9 = (float *)FRotator::Quaternion(param_3,local_18);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = *pfVar9;
  fVar6 = pfVar9[1];
  fVar7 = pfVar9[2];
  fVar8 = pfVar9[3];
  local_28 = fVar8 * fVar1 * _DAT_146afc5b0 + fVar4 * fVar5 + fVar7 * fVar2 * _DAT_146afc5a0 +
             fVar6 * fVar3 * _DAT_146afc590;
  fStack_24 = fVar7 * fVar1 * fRam0000000146afc5b4 + fVar4 * fVar6 +
              fVar8 * fVar2 * fRam0000000146afc5a4 + fVar5 * fVar3 * fRam0000000146afc594;
  fStack_20 = fVar6 * fVar1 * fRam0000000146afc5b8 + fVar4 * fVar7 +
              fVar5 * fVar2 * fRam0000000146afc5a8 + fVar8 * fVar3 * fRam0000000146afc598;
  fStack_1c = fVar5 * fVar1 * fRam0000000146afc5bc + fVar4 * fVar8 +
              fVar6 * fVar2 * fRam0000000146afc5ac + fVar7 * fVar3 * fRam0000000146afc59c;
  FQuat::Rotator(&local_28,param_1);
  return param_1;
}



// FUNCTION 14253bf90 FUN_14253bf90 body=666 status=ok
// SIG undefined FUN_14253bf90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14253bf90(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar10 = fVar2 + fVar2;
  fVar12 = fVar3 + fVar3;
  fVar13 = fVar1 * (fVar1 + fVar1);
  fVar11 = (fVar1 + fVar1) * fVar4;
  fVar5 = param_1[8];
  fVar6 = param_1[9];
  fVar7 = param_1[10];
  fVar8 = param_1[5];
  fVar17 = param_1[6];
  fVar16 = (fVar12 * fVar4 + fVar10 * fVar1) * fVar5;
  fVar18 = (fVar11 + fVar12 * fVar2) * fVar6;
  fVar14 = fVar7 * (fVar12 * fVar2 - fVar11);
  fVar15 = fVar5 * (fVar12 * fVar1 - fVar10 * fVar4);
  fVar11 = (float)((uint)((fRam0000000146afc524 - (fVar3 * fVar12 + fVar13)) * fVar6) &
                  uRam0000000146afc534);
  fVar9 = (float)((uint)((fRam0000000146afc528 - (fVar2 * fVar10 + fVar13)) * fVar7) &
                 uRam0000000146afc538);
  fVar13 = (float)((uint)((fRam0000000146afc52c - (fVar13 + fVar13)) * param_1[0xb]) &
                  uRam0000000146afc53c);
  fVar20 = fRam0000000146afc52c * fVar9 - fVar13 * fVar17;
  fVar19 = fVar18 * fRam0000000146afc52c - fVar13 * fVar17;
  fVar21 = fVar18 * fVar13 - fVar13 * fVar9;
  fVar17 = fVar15 * fRam0000000146afc52c - fVar13 * fVar17;
  fVar9 = fVar15 * fVar13 - fVar13 * fVar9;
  fVar13 = fVar15 * fVar13 - fVar13 * fVar18;
  return CONCAT44(fRam0000000146afc52c,
                  ((((fVar20 * fVar11 - fVar19 * fVar14) + fVar21 * fVar8) *
                    (float)((uint)((_DAT_146afc520 - (fVar3 * fVar12 + fVar2 * fVar10)) * fVar5) &
                           _DAT_146afc530) -
                   ((fVar20 * fVar16 - fVar17 * fVar14) + fVar9 * fVar8) *
                   fVar6 * (fVar10 * fVar1 - fVar12 * fVar4)) +
                  ((fVar19 * fVar16 - fVar17 * fVar11) + fVar13 * fVar8) *
                  (fVar10 * fVar4 + fVar12 * fVar1) * fVar7) -
                  ((fVar21 * fVar16 - fVar9 * fVar11) + fVar13 * fVar14) * param_1[4]);
}



// FUNCTION 14253c230 Trim body=32 status=ok
// SIG undefined Trim(void)

undefined8 UKismetStringLibrary::Trim(undefined8 param_1,undefined8 param_2)

{
  FString::TrimStart(param_2,param_1);
  return param_1;
}



// FUNCTION 14253c250 TrimTrailing body=32 status=ok
// SIG undefined TrimTrailing(void)

undefined8 UKismetStringLibrary::TrimTrailing(undefined8 param_1,undefined8 param_2)

{
  FString::TrimEnd(param_2,param_1);
  return param_1;
}



// FUNCTION 14253c270 UnloadPrimaryAsset body=46 status=ok
// SIG undefined UnloadPrimaryAsset(void)

void UKismetSystemLibrary::UnloadPrimaryAsset(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1422cb6d0();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014253c291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x338))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 14253c2a0 UnloadPrimaryAssetList body=46 status=ok
// SIG undefined UnloadPrimaryAssetList(void)

void UKismetSystemLibrary::UnloadPrimaryAssetList(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1422cb6d0();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014253c2c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x330))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 14253c2d0 FUN_14253c2d0 body=11 status=ok
// SIG undefined FUN_14253c2d0(void)

void FUN_14253c2d0(undefined8 param_1,undefined1 param_2)

{
  FUN_14252b270(param_1,0,param_2);
  return;
}



// FUNCTION 14253c2e0 FUN_14253c2e0 body=580 status=ok
// SIG undefined FUN_14253c2e0(void)

void FUN_14253c2e0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
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
  
  iVar3 = *(int *)(param_1 + 0xd8);
  uVar5 = 0;
  if ((iVar3 != 0) && (uVar6 = uVar5, uVar10 = uVar5, 0 < iVar3)) {
    do {
      lVar1 = *(longlong *)(uVar6 + *(longlong *)(param_1 + 0xd0));
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xb8) & 1) != 0)) {
        FUN_142359580();
      }
      iVar3 = *(int *)(param_1 + 0xd8);
      uVar9 = (int)uVar10 + 1;
      uVar6 = uVar6 + 8;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < iVar3);
  }
  uVar6 = uVar5;
  uVar10 = uVar5;
  if (0 < iVar3) {
    do {
      lVar1 = *(longlong *)(uVar10 + *(longlong *)(param_1 + 0xd0));
      if (lVar1 != 0) {
        FUN_14234b270(lVar1,*(undefined8 *)(param_1 + 0xc0));
      }
      uVar9 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar9;
      uVar10 = uVar10 + 8;
    } while ((int)uVar9 < *(int *)(param_1 + 0xd8));
  }
  lVar1 = *(longlong *)(param_1 + 200);
  plVar8 = (longlong *)(lVar1 + 0x88);
  iVar3 = *(int *)(lVar1 + 0xb0);
  puStack_28 = (uint *)(lVar1 + 0x98);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar3 != 0) {
    puVar7 = *(uint **)(lVar1 + 0xa8);
    if (*(uint **)(lVar1 + 0xa8) == (uint *)0x0) {
      puVar7 = puStack_28;
    }
    uVar9 = *puVar7;
    uVar6 = uVar5;
    while (uVar9 == 0) {
      iVar4 = (int)uVar6;
      uStack_60 = (int)uVar5 + 0x20;
      uVar5 = (ulonglong)uStack_60;
      local_78 = iVar4 + 1;
      uVar6 = (ulonglong)local_78;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14253c44b;
      uVar9 = puVar7[(longlong)iVar4 + 1];
    }
    uStack_74 = -uVar9 & uVar9;
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
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar3 < local_68._4_4_) {
LAB_14253c44b:
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
  local_10._0_4_ = SUB84(plVar8,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar8 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar2 = local_68._4_4_ < *(int *)(lVar1 + 0xb0);
  local_48 = plVar8;
  local_38 = plVar8;
  local_10 = plVar8;
  local_68 = puStack_28;
  if (bVar2) {
    do {
      FUN_141edf270(*(undefined8 *)(*plVar8 + 8 + (longlong)iStack_5c * 0x18));
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  *(undefined1 *)(*(longlong *)(param_1 + 200) + 0x312) = 1;
  return;
}



// FUNCTION 14253c530 UpdateOperation body=76 status=ok
// SIG undefined UpdateOperation(void)

void FDelayAction::UpdateOperation(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  fVar1 = *(float *)(param_1 + 8) - *(float *)(param_2 + 0x74);
  *(float *)(param_1 + 8) = fVar1;
  local_res8 = *(undefined4 *)(param_1 + 0x1c);
  local_resc = *(undefined4 *)(param_1 + 0x20);
  FLatentResponse::FinishAndTriggerIf
            (param_2,fVar1 <= 0.0,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
             &local_res8);
  return;
}



// FUNCTION 14253c580 FUN_14253c580 body=1434 status=ok
// SIG undefined FUN_14253c580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14253c580(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 local_res8;
  undefined4 local_resc;
  ulonglong in_stack_ffffffffffffff58;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  fVar9 = *(float *)(param_2 + 0x74) + *(float *)(param_1 + 0xc);
  bVar1 = *(float *)(param_1 + 8) <= fVar9;
  *(float *)(param_1 + 0xc) = fVar9;
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x2c);
  if ((cVar4 != '\0') && (*(char *)(param_1 + 0x10) != '\0')) {
    fVar9 = *(float *)(param_1 + 0xc) / *(float *)(param_1 + 8);
    if (*(char *)(param_1 + 0x6c) == '\0') {
      if (*(char *)(param_1 + 0x6d) != '\0') {
        fVar9 = SQRT(fVar9);
      }
    }
    else if (*(char *)(param_1 + 0x6d) == '\0') {
      fVar9 = fVar9 * fVar9;
    }
    else {
      fVar25 = fVar9 + fVar9;
      if (0.5 <= fVar9) {
        fVar9 = 1.0 - (fVar25 - 1.0);
        fVar9 = ((1.0 - fVar9 * fVar9) + 1.0) * 0.5;
      }
      else {
        fVar9 = fVar25 * fVar25 * 0.5;
      }
    }
    if (*(char *)(param_1 + 0x50) != '\0') {
      if (bVar1) {
        local_98 = *(undefined8 *)(param_1 + 0x60);
        uStack_90._0_4_ = *(float *)(param_1 + 0x68);
      }
      else {
        local_98 = CONCAT44((*(float *)(param_1 + 100) - *(float *)(param_1 + 0x58)) * fVar9 +
                            *(float *)(param_1 + 0x58),
                            (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x54)) * fVar9 +
                            *(float *)(param_1 + 0x54));
        uStack_90._0_4_ =
             (*(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x5c)) * fVar9 +
             *(float *)(param_1 + 0x5c);
      }
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x2c);
      local_88 = local_98;
      local_80 = (float)uStack_90;
      pfVar7 = (float *)(lVar5 + 0x280);
      if (((*(float *)(lVar5 + 0x1f8) != *pfVar7) ||
          (*(float *)(lVar5 + 0x1fc) != *(float *)(lVar5 + 0x284))) ||
         (*(float *)(lVar5 + 0x200) != *(float *)(lVar5 + 0x288))) {
        local_98 = *(undefined8 *)*(undefined1 (*) [12])(lVar5 + 0x1f8);
        auVar10._12_4_ = 0;
        auVar10._0_12_ = *(undefined1 (*) [12])(lVar5 + 0x1f8);
        fVar25 = (float)DAT_146afc560;
        fVar14 = DAT_146afc560._4_4_;
        fVar16 = DAT_146afc560._8_4_;
        auVar10 = divps(auVar10,_DAT_146afc560);
        fVar22 = (float)local_98 - (float)(int)auVar10._0_4_ * fVar25;
        fVar23 = (float)((ulonglong)local_98 >> 0x20) - (float)(int)auVar10._4_4_ * fVar14;
        fVar24 = *(float *)(lVar5 + 0x200) - (float)(int)auVar10._8_4_ * fVar16;
        fVar22 = (float)(((uint)(fVar22 + fVar25) ^ (uint)fVar22) & -(uint)(0.0 <= fVar22) ^
                        (uint)(fVar22 + fVar25));
        fVar23 = (float)(((uint)(fVar23 + fVar14) ^ (uint)fVar23) & -(uint)(0.0 <= fVar23) ^
                        (uint)(fVar23 + fVar14));
        fVar24 = (float)(((uint)(fVar24 + fVar16) ^ (uint)fVar24) & -(uint)(0.0 <= fVar24) ^
                        (uint)(fVar24 + fVar16));
        uVar17 = ((uint)(fVar24 - fVar16) ^ (uint)fVar24) & -(uint)(fRam0000000146afc558 < fVar24) ^
                 (uint)fVar24;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar17);
        *(ulonglong *)pfVar7 =
             CONCAT44(((uint)(fVar23 - fVar14) ^ (uint)fVar23) &
                      -(uint)(fRam0000000146afc554 < fVar23) ^ (uint)fVar23,
                      ((uint)(fVar22 - fVar25) ^ (uint)fVar22) & -(uint)(_DAT_146afc550 < fVar22) ^
                      (uint)fVar22);
        *(uint *)(lVar5 + 0x288) = uVar17;
        puVar6 = (undefined8 *)FRotator::Quaternion(pfVar7,&local_68);
        uVar8 = puVar6[1];
        *(undefined8 *)(lVar5 + 0x270) = *puVar6;
        *(undefined8 *)(lVar5 + 0x278) = uVar8;
      }
      local_98 = *(undefined8 *)(lVar5 + 0x270);
      uStack_90 = *(undefined8 *)(lVar5 + 0x278);
      in_stack_ffffffffffffff58 = 0;
      FUN_142397be0(lVar5,&local_88,&local_98,0,0,0);
    }
    if ((*(char *)(param_1 + 0x34) != '\0') &&
       (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x2c), cVar4 != '\0')) {
      if (bVar1) {
        local_88 = *(undefined8 *)(param_1 + 0x44);
        local_80 = *(float *)(param_1 + 0x4c);
      }
      else if (*(char *)(param_1 + 0x6e) == '\0') {
        fVar23 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x38);
        fVar22 = *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x40);
        fVar24 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x3c);
        fVar25 = (float)DAT_146afc560;
        fVar14 = DAT_146afc560._4_4_;
        fVar16 = DAT_146afc560._8_4_;
        auVar11._4_4_ = fVar24;
        auVar11._0_4_ = fVar23;
        auVar11._8_4_ = fVar22;
        auVar11._12_4_ = 0;
        auVar10 = divps(auVar11,_DAT_146afc560);
        fVar23 = fVar23 - (float)(int)auVar10._0_4_ * fVar25;
        fVar24 = fVar24 - (float)(int)auVar10._4_4_ * fVar14;
        fVar22 = fVar22 - (float)(int)auVar10._8_4_ * fVar16;
        fVar23 = (float)(((uint)(fVar23 + fVar25) ^ (uint)fVar23) & -(uint)(0.0 <= fVar23) ^
                        (uint)(fVar23 + fVar25));
        fVar24 = (float)(((uint)(fVar24 + fVar14) ^ (uint)fVar24) & -(uint)(0.0 <= fVar24) ^
                        (uint)(fVar24 + fVar14));
        fVar22 = (float)(((uint)(fVar22 + fVar16) ^ (uint)fVar22) & -(uint)(0.0 <= fVar22) ^
                        (uint)(fVar22 + fVar16));
        local_80 = (float)(((uint)(fVar22 - fVar16) ^ (uint)fVar22) &
                           -(uint)(fRam0000000146afc558 < fVar22) ^ (uint)fVar22) * fVar9 +
                   *(float *)(param_1 + 0x40);
        local_88 = CONCAT44((float)(((uint)(fVar24 - fVar14) ^ (uint)fVar24) &
                                    -(uint)(fRam0000000146afc554 < fVar24) ^ (uint)fVar24) * fVar9 +
                            *(float *)(param_1 + 0x3c),
                            (float)(((uint)(fVar23 - fVar25) ^ (uint)fVar23) &
                                    -(uint)(_DAT_146afc550 < fVar23) ^ (uint)fVar23) * fVar9 +
                            *(float *)(param_1 + 0x38));
      }
      else {
        puVar6 = (undefined8 *)FRotator::Quaternion(param_1 + 0x38,&local_88);
        local_68 = *puVar6;
        uStack_60 = puVar6[1];
        puVar6 = (undefined8 *)FRotator::Quaternion(param_1 + 0x44,&local_88);
        local_78 = *puVar6;
        uStack_70 = puVar6[1];
        pfVar7 = (float *)FQuat::Slerp_NotNormalized(&local_88,&local_68,&local_78,fVar9);
        fVar9 = *pfVar7;
        fVar25 = pfVar7[1];
        fVar14 = pfVar7[2];
        fVar16 = pfVar7[3];
        auVar12._0_4_ = fVar9 * fVar9 + fVar14 * fVar14;
        auVar12._4_4_ = fVar25 * fVar25 + fVar16 * fVar16;
        auVar12._8_4_ = fVar14 * fVar14 + fVar9 * fVar9;
        auVar12._12_4_ = fVar16 * fVar16 + fVar25 * fVar25;
        fVar18 = auVar12._4_4_ + auVar12._0_4_;
        fVar19 = auVar12._8_4_ + auVar12._4_4_;
        fVar20 = auVar12._12_4_ + auVar12._8_4_;
        fVar21 = auVar12._0_4_ + auVar12._12_4_;
        auVar2._4_4_ = fVar19;
        auVar2._0_4_ = fVar18;
        auVar2._8_4_ = fVar20;
        auVar2._12_4_ = fVar21;
        auVar10 = rsqrtps(auVar12,auVar2);
        fVar22 = auVar10._0_4_;
        fVar23 = auVar10._4_4_;
        fVar24 = auVar10._8_4_;
        fVar15 = auVar10._12_4_;
        fVar22 = (_DAT_146afc5d0 - fVar22 * fVar22 * fVar18 * _DAT_146afc5d0) * fVar22 + fVar22;
        fVar23 = (fRam0000000146afc5d4 - fVar23 * fVar23 * fVar19 * fRam0000000146afc5d4) * fVar23 +
                 fVar23;
        fVar24 = (fRam0000000146afc5d8 - fVar24 * fVar24 * fVar20 * fRam0000000146afc5d8) * fVar24 +
                 fVar24;
        fVar15 = (fRam0000000146afc5dc - fVar15 * fVar15 * fVar21 * fRam0000000146afc5dc) * fVar15 +
                 fVar15;
        local_res8 = 0x322bcc77;
        fVar18 = (float)(((uint)(((_DAT_146afc5d0 - fVar22 * fVar22 * fVar18 * _DAT_146afc5d0) *
                                  fVar22 + fVar22) * fVar9) ^ _DAT_146afc5c0) &
                         -(uint)(1e-08 <= fVar18) ^ _DAT_146afc5c0);
        fVar19 = (float)(((uint)(((fRam0000000146afc5d4 -
                                  fVar23 * fVar23 * fVar19 * fRam0000000146afc5d4) * fVar23 + fVar23
                                 ) * fVar25) ^ uRam0000000146afc5c4) & -(uint)(1e-08 <= fVar19) ^
                        uRam0000000146afc5c4);
        fVar20 = (float)(((uint)(((fRam0000000146afc5d8 -
                                  fVar24 * fVar24 * fVar20 * fRam0000000146afc5d8) * fVar24 + fVar24
                                 ) * fVar14) ^ uRam0000000146afc5c8) & -(uint)(1e-08 <= fVar20) ^
                        uRam0000000146afc5c8);
        fVar21 = (float)(((uint)(((fRam0000000146afc5dc -
                                  fVar15 * fVar15 * fVar21 * fRam0000000146afc5dc) * fVar15 + fVar15
                                 ) * fVar16) ^ uRam0000000146afc5cc) & -(uint)(1e-08 <= fVar21) ^
                        uRam0000000146afc5cc);
        auVar13._0_4_ = fVar18 * fVar18 + fVar20 * fVar20;
        auVar13._4_4_ = fVar19 * fVar19 + fVar21 * fVar21;
        auVar13._8_4_ = fVar20 * fVar20 + fVar18 * fVar18;
        auVar13._12_4_ = fVar21 * fVar21 + fVar19 * fVar19;
        fVar22 = auVar13._4_4_ + auVar13._0_4_;
        fVar23 = auVar13._8_4_ + auVar13._4_4_;
        fVar24 = auVar13._12_4_ + auVar13._8_4_;
        fVar15 = auVar13._0_4_ + auVar13._12_4_;
        auVar3._4_4_ = fVar23;
        auVar3._0_4_ = fVar22;
        auVar3._8_4_ = fVar24;
        auVar3._12_4_ = fVar15;
        auVar10 = rsqrtps(auVar13,auVar3);
        fVar9 = auVar10._0_4_;
        fVar25 = auVar10._4_4_;
        fVar14 = auVar10._8_4_;
        fVar16 = auVar10._12_4_;
        fVar9 = (_DAT_146afc5d0 - fVar9 * fVar9 * fVar22 * _DAT_146afc5d0) * fVar9 + fVar9;
        fVar25 = (fRam0000000146afc5d4 - fVar25 * fVar25 * fVar23 * fRam0000000146afc5d4) * fVar25 +
                 fVar25;
        fVar14 = (fRam0000000146afc5d8 - fVar14 * fVar14 * fVar24 * fRam0000000146afc5d8) * fVar14 +
                 fVar14;
        fVar16 = (fRam0000000146afc5dc - fVar16 * fVar16 * fVar15 * fRam0000000146afc5dc) * fVar16 +
                 fVar16;
        local_98 = CONCAT44(((uint)(((fRam0000000146afc5d4 -
                                     fVar25 * fVar25 * fVar23 * fRam0000000146afc5d4) * fVar25 +
                                    fVar25) * fVar19) ^ uRam0000000146afc5c4) &
                            -(uint)(1e-08 <= fVar23) ^ uRam0000000146afc5c4,
                            ((uint)(((_DAT_146afc5d0 - fVar9 * fVar9 * fVar22 * _DAT_146afc5d0) *
                                     fVar9 + fVar9) * fVar18) ^ _DAT_146afc5c0) &
                            -(uint)(1e-08 <= fVar22) ^ _DAT_146afc5c0);
        uStack_90 = CONCAT44(((uint)(((fRam0000000146afc5dc -
                                      fVar16 * fVar16 * fVar15 * fRam0000000146afc5dc) * fVar16 +
                                     fVar16) * fVar21) ^ uRam0000000146afc5cc) &
                             -(uint)(1e-08 <= fVar15) ^ uRam0000000146afc5cc,
                             ((uint)(((fRam0000000146afc5d8 -
                                      fVar14 * fVar14 * fVar24 * fRam0000000146afc5d8) * fVar14 +
                                     fVar14) * fVar20) ^ uRam0000000146afc5c8) &
                             -(uint)(1e-08 <= fVar24) ^ uRam0000000146afc5c8);
        puVar6 = (undefined8 *)FQuat::Rotator(&local_98,&local_88);
        local_88 = *puVar6;
        local_80 = *(float *)(puVar6 + 1);
      }
      uVar8 = FWeakObjectPtr::Get(param_1 + 0x2c);
      FUN_142398470(uVar8,&local_88,0,0,in_stack_ffffffffffffff58 & 0xffffffffffffff00);
    }
  }
  if ((bVar1) || (*(char *)(param_1 + 0x10) == '\0')) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  local_res8 = *(undefined4 *)(param_1 + 0x24);
  local_resc = *(undefined4 *)(param_1 + 0x28);
  FLatentResponse::FinishAndTriggerIf
            (param_2,uVar8,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
             &local_res8);
  return;
}



// FUNCTION 14253cb20 UpdateOperation body=131 status=ok
// SIG undefined UpdateOperation(void)

void FLoadAssetActionBase::UpdateOperation(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar1 = param_1[0x1f];
  if (((lVar1 == 0) || (*(char *)(lVar1 + 0x10) != '\0')) || (*(char *)(lVar1 + 0x12) != '\0')) {
    uVar2 = 1;
    (**(code **)(*param_1 + 0x20))();
  }
  else {
    uVar2 = 0;
  }
  local_res8 = *(undefined4 *)((longlong)param_1 + 0x114);
  local_resc = (undefined4)param_1[0x23];
  FLatentResponse::FinishAndTriggerIf(param_2,uVar2,param_1[0x21],(int)param_1[0x22],&local_res8);
  return;
}



// FUNCTION 14253cbb0 UpdateScene body=31 status=ok
// SIG undefined UpdateScene(void)

void FPrecomputedVisibilityHandler::UpdateScene(longlong param_1,longlong *param_2)

{
  if ((param_2 != (longlong *)0x0) && (0 < *(int *)(param_1 + 0x28))) {
                    /* WARNING: Could not recover jumptable at 0x00014253cbc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x150))(param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 14253cbd0 UpdateScene body=31 status=ok
// SIG undefined UpdateScene(void)

void FPrecomputedVolumeDistanceField::UpdateScene(longlong param_1,longlong *param_2)

{
  if ((param_2 != (longlong *)0x0) && (0 < *(int *)(param_1 + 0x38))) {
                    /* WARNING: Could not recover jumptable at 0x00014253cbe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x158))(param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 14253cbf0 VEase body=178 status=ok
// SIG undefined VEase(void)

float * UKismetMathLibrary::VEase
                  (float *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined1 *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_44;
  
  fVar3 = *(float *)(param_3 + 1);
  fVar4 = *(float *)(param_2 + 1);
  uVar1 = *param_2;
  fVar6 = (float)uVar1;
  uVar2 = *param_3;
  fVar5 = (float)FUN_142520240(param_4,*param_5,param_6,param_7);
  fStack_44 = (float)((ulonglong)uVar1 >> 0x20);
  *param_1 = ((float)uVar2 - fVar6) * fVar5 + fVar6;
  param_1[1] = ((float)((ulonglong)uVar2 >> 0x20) - fStack_44) * fVar5 + fStack_44;
  param_1[2] = (fVar3 - fVar4) * fVar5 + fVar4;
  return param_1;
}



// FUNCTION 14253ccb0 VectorSpringInterp body=501 status=ok
// SIG undefined VectorSpringInterp(void)

undefined8 *
UKismetMathLibrary::VectorSpringInterp
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,float param_5,
          float param_6,float param_7,float param_8)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  
  fVar4 = *(float *)(param_2 + 1);
  uVar1 = *param_2;
  if (1e-08 < param_7) {
    if (ABS(param_8) <= 1e-08) {
      uVar1 = *param_3;
      fVar4 = *(float *)(param_3 + 1);
    }
    else {
      fVar3 = *(float *)(param_3 + 1) - fVar4;
      fStack_74 = (float)((ulonglong)*param_3 >> 0x20);
      fStack_84 = (float)((ulonglong)uVar1 >> 0x20);
      fStack_74 = fStack_74 - fStack_84;
      fVar2 = 1.0 / param_8;
      local_78 = (float)*param_3;
      local_88 = (float)uVar1;
      local_78 = local_78 - local_88;
      param_6 = (SQRT(param_5 * param_8) + SQRT(param_5 * param_8)) * param_6;
      param_4[3] = ((local_78 - *param_4) * param_6 + local_78 * param_5 * param_7) * fVar2 +
                   param_4[3];
      param_4[4] = (fStack_74 * param_5 * param_7 + (fStack_74 - param_4[1]) * param_6) * fVar2 +
                   param_4[4];
      param_4[5] = (fVar3 * param_5 * param_7 + (fVar3 - param_4[2]) * param_6) * fVar2 + param_4[5]
      ;
      *(ulonglong *)param_4 = CONCAT44(fStack_74,local_78);
      param_4[2] = fVar3;
      fVar4 = param_7 * param_4[5] + fVar4;
      uVar1 = CONCAT44(param_7 * param_4[4] + fStack_84,param_7 * param_4[3] + local_88);
    }
  }
  *param_1 = uVar1;
  *(float *)(param_1 + 1) = fVar4;
  return param_1;
}



// FUNCTION 14253ceb0 FUN_14253ceb0 body=644 status=ok
// SIG undefined FUN_14253ceb0(void)

int * FUN_14253ceb0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  longlong *plVar10;
  uint uVar11;
  bool bVar12;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  bVar12 = false;
  puVar1 = (uint *)((longlong)plVar10 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  plVar10 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
  lVar3 = *(longlong *)*param_3;
  *plVar10 = lVar3;
  *(undefined4 *)(plVar10 + 1) = 0;
  *(undefined4 *)(plVar10 + 2) = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    if (uVar11 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x18) == lVar3) goto LAB_14253d00c;
          iVar6 = *(int *)(*param_1 + 0x10 + (longlong)iVar6 * 0x18);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_14253d00c:
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar6 * 0x18),plVar10,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar6;
      goto LAB_14253d10b;
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
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar11 >> 1) + 7;
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
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar11 = (int)((ulonglong)*plVar10 >> 0x20) + (int)*plVar10 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar10 + 0x14) = uVar11;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar10 + 2) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_1404b4e10(param_1);
  }
LAB_14253d10b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 14253d140 FUN_14253d140 body=778 status=ok
// SIG undefined FUN_14253d140(void)

uint * FUN_14253d140(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  ulonglong *_Src;
  uint *puVar16;
  undefined4 uVar17;
  bool bVar18;
  uint local_res8 [2];
  uint *local_res10;
  
  iVar12 = 1;
  uVar17 = 0xffffffff;
  local_res10 = param_2;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = uVar11;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar7 = (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar16 = (uint *)((longlong)plVar8 + lVar7);
  *puVar16 = *puVar16 | 1 << ((byte)uVar11 & 0x1f);
  puVar2 = (undefined2 *)param_3[1];
  lVar1 = (longlong)(int)uVar11 * 0x18;
  _Src = (ulonglong *)(*param_1 + lVar1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  *(undefined2 *)(_Src + 1) = *puVar2;
  *(undefined1 *)((longlong)_Src + 10) = *(undefined1 *)(puVar2 + 1);
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    uVar6 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar18 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar18);
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar10 * 0x18),_Src,0x10);
      bVar4 = (byte)uVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = uVar11;
      }
      lVar10 = *param_1;
      *(undefined4 *)(lVar1 + lVar10) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar17 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar10) = uVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar11;
      plVar8 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar8 + lVar7);
      *local_res10 = uVar6;
      *puVar16 = *puVar16 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_14253d41e;
    }
  }
  if (3 < uVar15) {
    uVar6 = (uVar15 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar13 = '\0';
    if (uVar6 != 0) {
      iVar9 = 0x1f - iVar12;
    }
    uVar6 = (uVar15 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar13 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = (int)(*_Src >> 4);
    uVar6 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
    uVar14 = -(iVar12 + uVar6) ^ uVar6 >> 0xd;
    uVar15 = (iVar12 - uVar6) - uVar14 ^ uVar14 >> 0xc;
    uVar6 = (uVar6 - uVar15) - uVar14 ^ uVar15 << 0x10;
    uVar14 = (uVar14 - uVar6) - uVar15 ^ uVar6 >> 5;
    uVar15 = (uVar15 - uVar6) - uVar14 ^ uVar14 >> 3;
    uVar6 = (uVar6 - uVar15) - uVar14 ^ uVar15 << 10;
    uVar15 = ((uVar14 - uVar6) - uVar15 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar15;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14253d41e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return local_res10;
}



// FUNCTION 14253d450 FUN_14253d450 body=493 status=ok
// SIG undefined FUN_14253d450(void)

int * FUN_14253d450(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  puVar2 = (ulonglong *)(*param_1 + (longlong)iVar8 * 0x18);
  puVar4 = (ulonglong *)param_3[1];
  *puVar2 = *(ulonglong *)*param_3;
  puVar2[1] = *puVar4;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  cVar5 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    iVar8 = (int)(*puVar2 >> 4);
    uVar10 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar11 = -(iVar8 + uVar10) ^ uVar10 >> 0xd;
    uVar9 = (iVar8 - uVar10) - uVar11 ^ uVar11 >> 0xc;
    uVar10 = (uVar10 - uVar9) - uVar11 ^ uVar9 << 0x10;
    uVar11 = (uVar11 - uVar10) - uVar9 ^ uVar10 >> 5;
    uVar9 = (uVar9 - uVar10) - uVar11 ^ uVar11 >> 3;
    uVar10 = (uVar10 - uVar9) - uVar11 ^ uVar9 << 10;
    uVar9 = ((uVar11 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)puVar2 + 0x14) = uVar9;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 14253d640 FUN_14253d640 body=596 status=ok
// SIG undefined FUN_14253d640(void)

int * FUN_14253d640(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong *_Src;
  bool bVar15;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow();
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar13 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x30);
    *(int *)(param_1 + 6) = iVar13;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0x30) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  bVar15 = false;
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  puVar2 = (undefined4 *)param_3[1];
  _Src = (ulonglong *)((longlong)iVar10 * 0x30 + *param_1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  *(undefined4 *)(_Src + 1) = *puVar2;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar4;
  *(undefined4 *)(_Src + 2) = uVar5;
  *(undefined4 *)((longlong)_Src + 0x14) = uVar6;
  uVar4 = puVar2[5];
  uVar5 = puVar2[6];
  uVar6 = puVar2[7];
  *(undefined4 *)(_Src + 3) = puVar2[4];
  *(undefined4 *)((longlong)_Src + 0x1c) = uVar4;
  *(undefined4 *)(_Src + 4) = uVar5;
  *(undefined4 *)((longlong)_Src + 0x24) = uVar6;
  *(undefined4 *)(_Src + 5) = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar13 != 1) {
    TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    bVar15 = local_res8[0] != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0x30 + *param_1),_Src,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar10,1);
      *param_2 = local_res8[0];
      goto LAB_14253d86b;
    }
  }
  cVar7 = TSet<TTuple<UTexture2D_*,FLandscapeWeightmapUsage>,TDefaultMapHashableKeyFuncs<UTexture2D_*,FLandscapeWeightmapUsage,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar7 == '\0') {
    iVar10 = (int)(*_Src >> 4);
    uVar12 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar14 = -(uVar12 + iVar10) ^ uVar12 >> 0xd;
    uVar11 = (iVar10 - uVar12) - uVar14 ^ uVar14 >> 0xc;
    uVar12 = (uVar12 - uVar11) - uVar14 ^ uVar11 << 0x10;
    uVar14 = (uVar14 - uVar12) - uVar11 ^ uVar12 >> 5;
    uVar11 = (uVar11 - uVar12) - uVar14 ^ uVar14 >> 3;
    uVar12 = (uVar12 - uVar11) - uVar14 ^ uVar11 << 10;
    uVar11 = ((uVar14 - uVar12) - uVar11 ^ uVar12 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x2c) = uVar11;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_14253d86b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 14253d8a0 FUN_14253d8a0 body=743 status=ok
// SIG undefined FUN_14253d8a0(void)

int * FUN_14253d8a0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  longlong *plVar17;
  uint *puVar18;
  int iVar19;
  bool bVar20;
  
  iVar10 = 1;
  iVar19 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar12 = *(int *)(*param_1 + 4 + (longlong)iVar14 * 0x30);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x30) = 0xffffffff;
    }
  }
  plVar17 = (longlong *)param_1[4];
  *param_2 = iVar14;
  lVar8 = (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar17 == (longlong *)0x0) {
    plVar17 = param_1 + 2;
  }
  bVar20 = false;
  puVar18 = (uint *)((longlong)plVar17 + lVar8);
  *puVar18 = *puVar18 | 1 << ((byte)iVar14 & 0x1f);
  puVar1 = (undefined4 *)param_3[1];
  lVar9 = (longlong)iVar14 * 0x30;
  plVar17 = (longlong *)(*param_1 + lVar9);
  lVar2 = *(longlong *)*param_3;
  *plVar17 = lVar2;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(undefined4 *)(plVar17 + 1) = *puVar1;
  *(undefined4 *)((longlong)plVar17 + 0xc) = uVar4;
  *(undefined4 *)(plVar17 + 2) = uVar5;
  *(undefined4 *)((longlong)plVar17 + 0x14) = uVar6;
  plVar17[3] = *(longlong *)(puVar1 + 4);
  *(undefined4 *)(plVar17 + 4) = puVar1[6];
  *(undefined4 *)(plVar17 + 5) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    iVar13 = iVar19;
    if (uVar16 != 0) {
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar11 +
                       ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar12 != -1) {
        do {
          iVar13 = iVar12;
          if (*(longlong *)(*param_1 + (longlong)iVar12 * 0x30) == lVar2) break;
          iVar12 = *(int *)(*param_1 + 0x28 + (longlong)iVar12 * 0x30);
          iVar13 = iVar19;
        } while (iVar12 != -1);
      }
    }
    bVar20 = iVar13 != -1;
    if (bVar20) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar13 * 0x30 + *param_1),plVar17,0x28);
      bVar3 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar14;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar9 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar19 = (int)param_1[6];
      }
      *(int *)(lVar9 + 4 + lVar2) = iVar19;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar17 = (longlong *)param_1[4];
      *param_2 = iVar13;
      if (plVar17 == (longlong *)0x0) {
        plVar17 = param_1 + 2;
      }
      puVar18 = (uint *)((longlong)plVar17 + lVar8);
      *puVar18 = *puVar18 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14253db62;
    }
  }
  if (3 < uVar16) {
    uVar7 = (uVar16 >> 1) + 8;
    iVar19 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar19 == 0; iVar19 = iVar19 + -1) {
      }
    }
    iVar10 = 0x20;
    if (uVar7 != 0) {
      iVar10 = 0x1f - iVar19;
    }
    uVar7 = (uVar16 >> 1) + 7;
    iVar19 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar19 == 0; iVar19 = iVar19 + -1) {
      }
    }
    if (uVar7 == 0) {
      cVar15 = '\0';
    }
    else {
      cVar15 = '\x1f' - (char)iVar19;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar15 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar16 = (int)((ulonglong)*plVar17 >> 0x20) + (int)*plVar17 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar17 + 0x2c) = uVar16;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(plVar17 + 5) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar17 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar17 = param_1 + 7;
    }
    *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14253db62:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar20;
  }
  return param_2;
}



// FUNCTION 14253db90 FUN_14253db90 body=390 status=ok
// SIG undefined FUN_14253db90(void)

undefined8 * FUN_14253db90(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  FUN_141784790(param_2,L"LightComponent0");
  uVar2 = UAtmosphericFogComponent::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FName::FName(local_res8,L"LightComponent0",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar3,uVar2,param_2);
  FUN_14253df20(param_1,param_2);
  uVar4 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450f1468;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x38) <
      DAT_146afcc28) {
    _Init_thread_header(&DAT_146afcc28);
    if (DAT_146afcc28 == -1) {
      FName::FName(&DAT_146afcc08,L"Lighting",1);
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afcc10,L"Lighting",L"SpriteCategory",L"Lighting");
      atexit(FUN_143eb03e0);
      _Init_thread_footer(&DAT_146afcc28);
    }
  }
  plVar1 = (longlong *)param_1[0x8b];
  *(undefined1 *)((longlong)plVar1 + 0x24e) = 1;
  plVar1[0x3f] = 0xc2380000;
  *(undefined4 *)(plVar1 + 0x40) = 0;
  local_10 = 0x40200000;
  local_20 = 0x40200000;
  local_28 = 0x4020000040200000;
  (**(code **)(*plVar1 + 0x3f8))(plVar1,&local_28);
  param_1[0x2d] = plVar1;
  return param_1;
}



// FUNCTION 14253dd20 FUN_14253dd20 body=47 status=ok
// SIG undefined FUN_14253dd20(void)

undefined8 * FUN_14253dd20(undefined8 *param_1)

{
  FUN_142815d70();
  *param_1 = &PTR__scalar_deleting_destructor__1450f0d78;
  *(uint *)(param_1[0x8b] + 0x2ec) = *(uint *)(param_1[0x8b] + 0x2ec) & 0xfffffffb;
  return param_1;
}



// FUNCTION 14253dd50 FUN_14253dd50 body=251 status=ok
// SIG undefined FUN_14253dd50(void)

undefined8 * FUN_14253dd50(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1450ee6c8;
  puVar3 = (undefined8 *)FName::FName(local_res8,L"BoxComponent0",1);
  uVar1 = *puVar3;
  uVar4 = FUN_14290f330();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar1,uVar4,uVar4,1,0,0);
  param_1[0x2d] = plVar5;
  *(undefined1 *)((longlong)plVar5 + 0x24e) = 2;
  lVar2 = param_1[0x2d];
  *(undefined8 *)(lVar2 + 0x204) = DAT_146533388;
  *(undefined4 *)(lVar2 + 0x20c) = DAT_146533390;
  *(undefined1 *)(param_1 + 0x8b) = 1;
  *(byte *)(plVar5 + 0xe0) = *(byte *)(plVar5 + 0xe0) | 1;
  *(byte *)((longlong)plVar5 + 0x24d) = *(byte *)((longlong)plVar5 + 0x24d) & 0xfd;
  *(byte *)(plVar5 + 0x5f) = *(byte *)(plVar5 + 0x5f) | 0x40;
  (**(code **)(*plVar5 + 0x640))(plVar5,DAT_146aefc58);
  plVar5[0xe2] = 0x3f0000003f000000;
  *(undefined4 *)(plVar5 + 0xe3) = 0x3f000000;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  return param_1;
}



// FUNCTION 14253de50 FUN_14253de50 body=68 status=ok
// SIG undefined FUN_14253de50(void)

undefined8 * FUN_14253de50(undefined8 *param_1)

{
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(uint *)(param_1 + 0x8b) = *(uint *)(param_1 + 0x8b) | 2;
  *param_1 = &PTR_FUN_1450eedb0;
  *(undefined1 *)((longlong)param_1 + 0x95) = 1;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  return param_1;
}



// FUNCTION 14253dea0 FUN_14253dea0 body=123 status=ok
// SIG undefined FUN_14253dea0(void)

undefined8 * FUN_14253dea0(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_1450efc70;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146aefc58);
  *(byte *)(param_1[0x8e] + 0x2ee) = *(byte *)(param_1[0x8e] + 0x2ee) | 0x80;
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) | 1;
  *(undefined2 *)((longlong)param_1 + 0x45d) = 0xffa5;
  *(undefined1 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x45f) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x4a4) = 1;
  return param_1;
}



// FUNCTION 14253df20 FUN_14253df20 body=126 status=ok
// SIG undefined FUN_14253df20(void)

undefined8 * FUN_14253df20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1450f0688;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightComponent0",1);
  uVar3 = *puVar1;
  uVar2 = UAkAudioInputComponent::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,1,0);
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x80;
  param_1[0x8b] = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x12a) = 3;
  return param_1;
}



// FUNCTION 14253dfa0 FUN_14253dfa0 body=86 status=ok
// SIG undefined FUN_14253dfa0(void)

undefined8 * FUN_14253dfa0(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_1440f1c20;
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146aefc58);
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) | 1;
  *(undefined2 *)((longlong)param_1 + 0x45d) = 0x9bb9;
  *(undefined1 *)((longlong)param_1 + 0x45c) = 0x19;
  *(undefined1 *)((longlong)param_1 + 0x45f) = 0xff;
  return param_1;
}



// FUNCTION 14253e000 FUN_14253e000 body=93 status=ok
// SIG undefined FUN_14253e000(void)

undefined8 * FUN_14253e000(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_144ee25c0;
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146aefc58);
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) | 1;
  *(uint *)(param_1 + 0x92) = *(uint *)(param_1 + 0x92) | 1;
  *(undefined2 *)((longlong)param_1 + 0x45d) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x45c) = 0x19;
  *(undefined1 *)((longlong)param_1 + 0x45f) = 0xff;
  return param_1;
}



// FUNCTION 14253e060 FUN_14253e060 body=160 status=ok
// SIG undefined FUN_14253e060(void)

undefined8 * FUN_14253e060(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"LightComponent0");
  uVar1 = UFGSoundSplineComponent::GetPrivateStaticClass();
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightComponent0",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar2,uVar1,param_2);
  FUN_14253df20(param_1,param_2);
  *param_1 = &PTR__scalar_deleting_destructor__1450f0d78;
  param_1[0x8d] = param_1[0x8b];
  *(undefined1 *)(param_1[0x8b] + 0x24e) = 0;
  param_1[0x2d] = param_1[0x8d];
  return param_1;
}



// FUNCTION 14253e100 FClientReceiveData body=79 status=ok
// SIG undefined FClientReceiveData(void)

undefined8 * FClientReceiveData::FClientReceiveData(undefined8 *param_1)

{
  *param_1 = 0;
  FName::FName(param_1 + 1,L"None",1);
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 14253e150 FUN_14253e150 body=97 status=ok
// SIG undefined FUN_14253e150(void)

undefined4 * FUN_14253e150(undefined4 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  FWeakObjectPtr::operator=(param_1,param_2[0xa1]);
  uVar1 = (**(code **)(*param_2 + 0x148))(param_2);
  FWeakObjectPtr::operator=(param_1 + 2,uVar1);
  return param_1;
}



// FUNCTION 14253e1c0 FLocalPlayerContext body=81 status=ok
// SIG undefined FLocalPlayerContext(void)

undefined4 *
FLocalPlayerContext::FLocalPlayerContext(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  FWeakObjectPtr::operator=(param_1 + 2,param_3);
  FWeakObjectPtr::operator=(&local_res8,param_2);
  *param_1 = local_res8;
  param_1[1] = local_resc;
  return param_1;
}



// FUNCTION 14253e220 FLocalPlayerContext body=25 status=ok
// SIG undefined FLocalPlayerContext(void)

undefined4 * FLocalPlayerContext::FLocalPlayerContext(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0xffffffff;
  return param_1;
}



// FUNCTION 14253e240 FUN_14253e240 body=331 status=ok
// SIG undefined FUN_14253e240(void)

undefined8 *
FUN_14253e240(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,char param_7,byte param_8,undefined8 *param_9,
             longlong param_10,undefined4 *param_11,undefined8 *param_12)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  *param_1 = &PTR__purecall_1450724a0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__scalar_deleting_destructor__1450724f0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 4) = param_6;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 3) = param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  if ((param_7 == '\0') || (uVar6 = 1, (*(byte *)(param_10 + 0x2f2) & 1) == 0)) {
    uVar6 = 0;
  }
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffffe;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffffd | uVar6 | (uint)param_8 * 2;
  param_1[8] = 0;
  iVar1 = *(int *)(param_9 + 1);
  _Src = (void *)*param_9;
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 8,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[8],_Src,(longlong)iVar1 << 3);
  }
  param_1[10] = param_10;
  uVar2 = param_11[1];
  uVar3 = param_11[2];
  uVar4 = param_11[3];
  *(undefined4 *)(param_1 + 0xb) = *param_11;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)((longlong)param_1 + 100) = uVar4;
  param_1[0xd] = *(undefined8 *)(param_11 + 4);
  *(undefined4 *)(param_1 + 0xe) = param_11[6];
  FGuid::NewGuid((longlong)param_1 + 0x74);
  uVar5 = param_12[1];
  *(undefined8 *)((longlong)param_1 + 0x84) = *param_12;
  *(undefined8 *)((longlong)param_1 + 0x8c) = uVar5;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 14253e390 FUN_14253e390 body=495 status=ok
// SIG undefined FUN_14253e390(void)

undefined8 *
FUN_14253e390(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,undefined1 param_4,
             undefined1 param_5,undefined4 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  undefined8 uVar10;
  longlong *local_18;
  int local_10;
  
  *(undefined1 *)(param_1 + 1) = param_2;
  *param_1 = &PTR_FUN_1450ee3a0;
  *(undefined1 *)((longlong)param_1 + 10) = param_5;
  *(undefined1 *)((longlong)param_1 + 9) = param_4;
  uVar10 = *param_3;
  param_1[3] = uVar10;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *(undefined4 *)(param_1 + 4) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  param_1[6] = *(undefined8 *)(param_6 + 4);
  plVar7 = (longlong *)FStreamLevelAction::FindAndCacheLevelStreamingObject(uVar10,param_7);
  param_1[2] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    if (*(char *)(param_1 + 1) == '\0') {
      (**(code **)(*plVar7 + 0x278))(plVar7,0);
      if ((*(byte *)((longlong)plVar7 + 0xb6) & 4) != 0) {
        *(byte *)((longlong)plVar7 + 0xb6) = *(byte *)((longlong)plVar7 + 0xb6) & 0xfb;
        cVar4 = UObjectBaseUtility::IsTemplate(plVar7,0x30);
        if ((cVar4 == '\0') && (plVar7[4] != 0)) {
          UWorld::UpdateStreamingLevelShouldBeConsidered(plVar7[4],plVar7);
        }
      }
      bVar9 = *(byte *)((longlong)plVar7 + 0xb6) & 0x7f | *(char *)((longlong)param_1 + 10) << 7;
    }
    else {
      (**(code **)(*plVar7 + 0x278))(plVar7,1);
      if (((*(byte *)((longlong)plVar7 + 0xb6) & 4) == 0) &&
         (*(char *)((longlong)param_1 + 9) == '\0')) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      ULevelStreaming::SetShouldBeVisible(plVar7,uVar10);
      bVar9 = (*(char *)((longlong)param_1 + 10) << 6 ^ *(byte *)((longlong)plVar7 + 0xb6)) & 0x40 ^
              *(byte *)((longlong)plVar7 + 0xb6);
    }
    *(byte *)((longlong)plVar7 + 0xb6) = bVar9;
    cVar4 = UObjectBaseUtility::IsTemplate(plVar7,0x30);
    if (cVar4 == '\0') {
      lVar8 = plVar7[4];
      if (lVar8 != 0) {
        uVar5 = (**(code **)(*plVar7 + 0x280))(plVar7);
        uVar6 = (**(code **)(*plVar7 + 0x288))(plVar7);
        UWorld::GetPlayerControllerIterator(lVar8,&local_18);
        for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
          lVar8 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
          if (lVar8 != 0) {
            APlayerController::LevelStreamingStatusChanged
                      (lVar8,plVar7,uVar5,uVar6,*(undefined1 *)((longlong)param_1 + 10),0xffffffff);
          }
        }
        return param_1;
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14253e580 ULevelScriptBlueprint body=33 status=ok
// SIG undefined ULevelScriptBlueprint(void)

undefined8 * ULevelScriptBlueprint::ULevelScriptBlueprint(undefined8 *param_1)

{
  UBlueprint::UBlueprint();
  *param_1 = &PTR_FUN_1450ef4a8;
  return param_1;
}



// FUNCTION 14253e5b0 ULevelStreaming body=374 status=ok
// SIG undefined ULevelStreaming(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * ULevelStreaming::ULevelStreaming(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450ee3c0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x4c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if ((undefined2 *)param_1[8] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[8] = 0;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar2 = uRam0000000146afc8fc;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(uint *)((longlong)param_1 + 0x8c) = uVar2;
  uVar2 = uRam0000000146afc8f4 & uRam0000000146afc904;
  uVar3 = uRam0000000146afc8f8 & uRam0000000146afc908;
  uVar4 = uRam0000000146afc8fc & uRam0000000146afc90c;
  *(uint *)(param_1 + 0x14) = _DAT_146afc8f0 & _DAT_146afc900;
  *(uint *)((longlong)param_1 + 0xa4) = uVar2;
  *(uint *)(param_1 + 0x15) = uVar3;
  *(uint *)((longlong)param_1 + 0xac) = uVar4;
  *(byte *)((longlong)param_1 + 0xb6) = *(byte *)((longlong)param_1 + 0xb6) & 0xdf;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x17] = _DAT_1464aa6c0;
  param_1[0x18] = uVar1;
  uVar1 = uRam00000001468b5b78;
  param_1[0x10] = _DAT_1468b5b70;
  param_1[0x11] = uVar1;
  uVar1 = uRam00000001468b5b88;
  param_1[0x12] = _DAT_1468b5b80;
  param_1[0x13] = uVar1;
  uVar1 = uRam00000001468b5b98;
  param_1[0x14] = _DAT_1468b5b90;
  param_1[0x15] = uVar1;
  *(byte *)((longlong)param_1 + 0xb7) = *(byte *)((longlong)param_1 + 0xb7) | 2;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x40000000;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  return param_1;
}



// FUNCTION 14253e730 ULevelStreamingAlwaysLoaded body=86 status=ok
// SIG undefined ULevelStreamingAlwaysLoaded(void)

undefined8 * ULevelStreamingAlwaysLoaded::ULevelStreamingAlwaysLoaded(undefined8 *param_1)

{
  char cVar1;
  
  ULevelStreaming::ULevelStreaming();
  *param_1 = &PTR__scalar_deleting_destructor__1450ef740;
  if ((*(byte *)((longlong)param_1 + 0xb6) & 4) == 0) {
    *(byte *)((longlong)param_1 + 0xb6) = *(byte *)((longlong)param_1 + 0xb6) | 4;
    cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if ((cVar1 == '\0') && (param_1[4] != 0)) {
      UWorld::UpdateStreamingLevelShouldBeConsidered(param_1[4],param_1);
    }
  }
  return param_1;
}



// FUNCTION 14253e790 FUN_14253e790 body=33 status=ok
// SIG undefined FUN_14253e790(void)

undefined8 * FUN_14253e790(undefined8 *param_1)

{
  ULevelStreaming::ULevelStreaming();
  *param_1 = &PTR__scalar_deleting_destructor__1450f0390;
  return param_1;
}



// FUNCTION 14253e7c0 FUN_14253e7c0 body=33 status=ok
// SIG undefined FUN_14253e7c0(void)

undefined8 * FUN_14253e7c0(undefined8 *param_1)

{
  ULevelStreaming::ULevelStreaming();
  *param_1 = &PTR__scalar_deleting_destructor__1450ef9d8;
  return param_1;
}



// FUNCTION 14253e7f0 ULightMapTexture2D body=48 status=ok
// SIG undefined ULightMapTexture2D(void)

undefined8 * ULightMapTexture2D::ULightMapTexture2D(undefined8 *param_1)

{
  UTexture2D::UTexture2D();
  *param_1 = &PTR_FUN_1450f1b58;
  param_1[5] = &PTR_LAB_1450f1e58;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 0x11;
  return param_1;
}



// FUNCTION 14253e820 ULightmassPrimitiveSettingsObject body=66 status=ok
// SIG undefined ULightmassPrimitiveSettingsObject(void)

undefined8 *
ULightmassPrimitiveSettingsObject::ULightmassPrimitiveSettingsObject(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fce9d0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffff0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x41000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  return param_1;
}



// FUNCTION 14253e870 ULocalMessage body=33 status=ok
// SIG undefined ULocalMessage(void)

undefined8 * ULocalMessage::ULocalMessage(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450f1ef0;
  return param_1;
}



// FUNCTION 14253e8a0 ULocalPlayer body=334 status=ok
// SIG undefined ULocalPlayer(void)

undefined8 * ULocalPlayer::ULocalPlayer(undefined8 *param_1)

{
  undefined8 uVar1;
  
  UPlayer::UPlayer();
  *param_1 = &PTR__scalar_deleting_destructor__144a813a0;
  param_1[5] = &PTR_LAB_144a81678;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = &PTR_FUN_143f740c8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = &PTR__scalar_deleting_destructor__144a80b30;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = &PTR__scalar_deleting_destructor__144a80b30;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(uint *)((longlong)param_1 + 0x1c4) = *(uint *)((longlong)param_1 + 0x1c4) & 0xffffff00;
  *(undefined4 *)(param_1 + 0x38) = 0x20702;
  uVar1 = FUN_1429e18b0();
  param_1[0x13] = uVar1;
  return param_1;
}



// FUNCTION 14253e9f0 ~FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1> body=297 status=ok
// SIG undefined ~FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::
     ~FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined4 uVar6;
  BOOL BVar7;
  uint uStack_c;
  
  *param_1 = &PTR__scalar_deleting_destructor__1450f2170;
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  }
  param_1[0x10] = 0;
  uVar6 = DAT_1468b5da8;
  uVar5 = DAT_1468b5da0;
  uStack_c = uStack_c & 0xffffff00;
  auVar3._8_4_ = DAT_1468b5d98;
  auVar3._0_8_ = _DAT_1468b5d90;
  auVar3._12_4_ = 0x42b40000;
  *(undefined1 (*) [16])(param_1 + 0x11) = auVar3;
  auVar4._8_4_ = uVar6;
  auVar4._0_8_ = uVar5;
  auVar4._12_4_ = uStack_c;
  *(undefined1 (*) [16])(param_1 + 0x13) = auVar4;
  iVar1 = *(int *)(param_1 + 2);
  iVar2 = *(int *)((longlong)param_1 + 0x3c);
  TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 1,0);
  if (0 < iVar1 - iVar2) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 14253eb20 FUN_14253eb20 body=735 status=ok
// SIG undefined FUN_14253eb20(void)

longlong * FUN_14253eb20(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int local_res8 [2];
  
  puVar5 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((((*(byte *)(param_1 + 5) & 2) != 0) && ((longlong *)*param_2 != (longlong *)0x0)) &&
     (lVar3 = (**(code **)(*(longlong *)*param_2 + 0x30))(), lVar3 != 0)) {
    local_res8[0] = 2;
  }
  plVar1 = (longlong *)param_1[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    if (local_res8[0] == 0) goto LAB_14253ede9;
    if (local_res8[0] == 1) {
      puVar4 = (undefined8 *)operator_new(0x28);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR__scalar_deleting_destructor__144eedec0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *(undefined1 *)(puVar4 + 3) = 1;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
        *(undefined1 *)(puVar4 + 4) = 0;
        FUN_142865d40(DAT_1464c9c14);
        *(undefined1 *)(puVar4 + 3) = 0;
        *puVar4 = &PTR__scalar_deleting_destructor__1450f1e88;
        puVar5 = puVar4;
      }
    }
    else {
      if (local_res8[0] != 2) goto LAB_14253ed9b;
      puVar4 = (undefined8 *)operator_new(0x160);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR__scalar_deleting_destructor__144eedec0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *(undefined1 *)(puVar4 + 3) = 1;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
        *(undefined1 *)(puVar4 + 4) = 0;
        uVar2 = FUN_142865d40(DAT_1464c9c14);
        *(undefined1 *)(puVar4 + 3) = uVar2;
        *puVar4 = &PTR_FUN_144eedf00;
        puVar4[10] = 0;
        *(undefined4 *)(puVar4 + 0xb) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x5c) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 100) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x6c) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 0x74) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x7c) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 0x84) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x8c) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 0x94) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x9c) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 0xa4) = 0;
        *(undefined8 *)((longlong)puVar4 + 0xac) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 0xb4) = 0;
        *(undefined8 *)((longlong)puVar4 + 0xbc) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 0xc4) = 0;
        *(undefined8 *)((longlong)puVar4 + 0xcc) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 0xd4) = 0;
        *(undefined8 *)((longlong)puVar4 + 0xdc) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 0xe4) = 0;
        *(undefined8 *)((longlong)puVar4 + 0xec) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 0xf4) = 0;
        *(undefined8 *)((longlong)puVar4 + 0xfc) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 0x104) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x10c) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 0x114) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x11c) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 0x124) = 0;
        *(undefined8 *)((longlong)puVar4 + 300) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 0x134) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x13c) = 0x3f800000;
        *(undefined8 *)((longlong)puVar4 + 0x144) = 0;
        *(undefined4 *)((longlong)puVar4 + 0x14c) = 0x3f800000;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar5 = puVar4;
      }
    }
    *param_2 = (longlong)puVar5;
  }
LAB_14253ed9b:
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    return param_1;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    return param_1;
  }
  if (local_res8[0] == 1) {
    puVar5 = (undefined8 *)*param_2;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    *param_2 = 0;
  }
  if (0x130 < (int)param_1[8]) {
    return param_1;
  }
  puVar5 = (undefined8 *)*param_2;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14253ede9:
  *param_2 = 0;
  return param_1;
}



// FUNCTION 14253ee00 FUN_14253ee00 body=335 status=ok
// SIG undefined FUN_14253ee00(void)

void FUN_14253ee00(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((DAT_146531eb8 != 0) && (iVar2 = FUN_1428ccca0(), 0 < iVar2)) {
    FUN_142873f70(DAT_146b17150,0);
  }
  uVar5 = 1;
  if (((*(byte *)(*param_1 + 0xb6) & 0x40) == 0) &&
     (cVar1 = (**(code **)(*(longlong *)*param_1 + 0x290))(), cVar1 == '\0')) {
    cVar1 = FUN_1428c5b00(*(undefined8 *)param_1[1]);
    if (cVar1 == '\0') {
      uVar4 = 0;
      uVar6 = 0;
      goto LAB_14253ee7c;
    }
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  uVar4 = 1;
LAB_14253ee7c:
  if ((DAT_146531e90 != 0) &&
     (cVar1 = UWorld::IsGameWorld(*(undefined8 *)param_1[1]), cVar1 != '\0')) {
    uVar5 = 0;
  }
  cVar1 = *(char *)(*param_1 + 0xb4);
  FUN_14254e430(*param_1,*(undefined8 *)param_1[1],uVar4,uVar6 | uVar5);
  lVar7 = *param_1;
  if (*(char *)(lVar7 + 0xb4) != '\x03') {
    *(undefined1 *)param_1[2] = 1;
    lVar7 = *param_1;
    if (*(char *)(lVar7 + 0xb4) != cVar1) {
      *(undefined1 *)param_1[3] = 1;
      lVar7 = *param_1;
    }
  }
  if ((*(longlong *)(lVar7 + 0x120) == 0) && (lVar3 = *(longlong *)(lVar7 + 0x128), lVar3 != 0)) {
    if ((*(byte *)(lVar3 + 0x204) & 0x10) != 0) {
      FUN_1428d4900(*(undefined8 *)param_1[1],lVar3,0);
      lVar3 = *(longlong *)(lVar7 + 0x128);
      if ((*(byte *)(lVar3 + 0x204) & 0x10) != 0) {
        return;
      }
    }
    FLevelStreamingGCHelper::RequestUnload(lVar3);
    *(undefined8 *)(lVar7 + 0x128) = 0;
  }
  return;
}



// FUNCTION 14253ef50 FUN_14253ef50 body=147 status=ok
// SIG undefined FUN_14253ef50(void)

void FUN_14253ef50(undefined8 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar4 = FWeakObjectPtr::Get(DAT_146afcbd0 + (longlong)param_2 * 8,1);
  if (lVar4 != 0) {
    if ((*(byte *)(lVar4 + 0xb8) & 1) != 0) {
      cVar2 = UObjectBaseUtility::IsTemplate(lVar4,0x30);
      if (cVar2 == '\0') {
        iVar1 = *(int *)(lVar4 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar6 = iVar1 >> 0x1f & 0xffff;
          uVar3 = iVar1 + uVar6;
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                  (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
          FUN_14233a2e0(lVar4);
        }
      }
    }
    *(byte *)(lVar4 + 0xc9) = *(byte *)(lVar4 + 0xc9) & 0xf9;
  }
  return;
}



// FUNCTION 14253eff0 FUN_14253eff0 body=673 status=ok
// SIG undefined FUN_14253eff0(void)

void FUN_14253eff0(longlong *param_1)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 local_res8;
  undefined4 local_resc;
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
  
  lVar5 = *param_1;
  plVar10 = (longlong *)(lVar5 + 0x270);
  local_98 = 0;
  uVar4 = *(uint *)(lVar5 + 0x298);
  puVar1 = (uint *)(lVar5 + 0x280);
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar4 != 0) {
    puVar13 = *(uint **)(lVar5 + 0x290);
    if (*(uint **)(lVar5 + 0x290) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar8 = *puVar13;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar8 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar11 = local_98 + 1;
      bVar2 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar11;
      if (bVar2) goto LAB_14253f0ba;
      uVar8 = puVar13[lVar9 + 1];
    }
    uStack_94 = -uVar8 & uVar8;
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
    if ((int)uVar4 < (int)uStack_84) {
LAB_14253f0ba:
      uStack_84 = uVar4;
    }
  }
  uVar8 = *(uint *)(lVar5 + 0x298);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar12 = uVar8 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar10;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar8;
  if (uVar8 != uVar4) {
    puVar13 = *(uint **)(lVar5 + 0x290);
    if (*(uint **)(lVar5 + 0x290) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar7 = puVar13[(int)uVar8 >> 5] & -1 << ((byte)uVar8 & 0x1f);
    iVar11 = (int)uVar8 >> 5;
    while (uVar7 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_14253f182;
      uVar7 = puVar13[(longlong)iVar11 + 1];
      iVar11 = iVar11 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar11 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_84 = (uVar12 - iVar11) + 0x1f;
    if ((int)uVar4 < (int)uStack_84) {
LAB_14253f182:
      uStack_84 = uVar4;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    puVar6 = (undefined4 *)((longlong)(int)uStack_5c * 0x10 + *plVar10);
    local_res8 = *puVar6;
    local_resc = puVar6[1];
    lVar5 = FWeakObjectPtr::Get(&local_res8,1);
    if (lVar5 != 0) {
      if ((*(byte *)(lVar5 + 0xb8) & 1) != 0) {
        cVar3 = UObjectBaseUtility::IsTemplate(lVar5,0x30);
        if (cVar3 == '\0') {
          uVar4 = *(uint *)(lVar5 + 0xc);
          if ((int)uVar4 < (int)DAT_1469e91c4) {
            uVar8 = uVar4 & 0xffff;
            if ((int)uVar4 < 0) {
              uVar4 = uVar4 + 0xffff;
              uVar8 = uVar8 - 0x10000;
            }
            lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                    (longlong)(int)uVar8 * 0x18;
          }
          else {
            lVar9 = 0;
          }
          if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) == 0) {
            FUN_14233a2e0(lVar5);
          }
        }
      }
      *(byte *)(lVar5 + 0xc9) = *(byte *)(lVar5 + 0xc9) & 0xf9;
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  TSet<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Reset(*param_1 + 0x270);
  TSet<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Reset(*param_1 + 0x220);
  return;
}



// FUNCTION 14253f2a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14253f2e0 FUN_14253f2e0 body=97 status=ok
// SIG undefined FUN_14253f2e0(void)

undefined8 * FUN_14253f2e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450f0658;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14253f350 FUN_14253f350 body=97 status=ok
// SIG undefined FUN_14253f350(void)

undefined8 * FUN_14253f350(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450f0668;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14253f3c0 FUN_14253f3c0 body=97 status=ok
// SIG undefined FUN_14253f3c0(void)

undefined8 * FUN_14253f3c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450f0678;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14253f430 FUN_14253f430 body=90 status=ok
// SIG undefined FUN_14253f430(void)

longlong FUN_14253f430(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 14253f490 FUN_14253f490 body=111 status=ok
// SIG undefined FUN_14253f490(void)

longlong FUN_14253f490(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14253f500 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ULevelStreamingDynamic::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ULevelStreaming::~ULevelStreaming();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 14253f540 FUN_14253f540 body=122 status=ok
// SIG undefined FUN_14253f540(void)

longlong FUN_14253f540(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_141edd5f0(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 14253f5c0 AddObjectToCluster body=2373 status=ok
// SIG undefined AddObjectToCluster(void)

void FActorClusterReferenceProcessor::AddObjectToCluster
               (uint *param_1,uint param_2,ulonglong param_3,longlong param_4,longlong *param_5,
               char param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint local_res8 [2];
  uint local_res10 [2];
  
  if (param_2 == *param_1) {
    return;
  }
  uVar9 = 0;
LAB_14253f610:
  if (*(int *)(param_3 + 0xc) != 0) {
    return;
  }
  uVar2 = *(uint *)(param_4 + 0xc);
  if ((int)uVar2 <= DAT_1469e91a4) {
    return;
  }
  uVar14 = uVar9;
  if ((int)uVar2 < (int)DAT_1469e91c4) {
    uVar5 = uVar2 & 0xffff;
    if ((int)uVar2 < 0) {
      uVar2 = uVar2 + 0xffff;
      uVar5 = uVar5 - 0x10000;
    }
    uVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
             (longlong)(int)uVar5 * 0x18;
  }
  if ((*(uint *)(uVar14 + 8) >> 0x1e & 1) != 0) {
    return;
  }
  iVar10 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar10 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar10 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_5,iVar10);
  }
  *(longlong *)(*param_5 + (longlong)iVar10 * 8) = param_4;
  *(uint *)(param_3 + 0xc) = *param_1;
  lVar15 = *(longlong *)(param_1 + 2);
  iVar10 = *(int *)(lVar15 + 0x10);
  *(int *)(lVar15 + 0x10) = iVar10 + 1;
  if (*(int *)(lVar15 + 0x14) < iVar10 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar15 + 8,iVar10);
  }
  *(uint *)(*(longlong *)(lVar15 + 8) + (longlong)iVar10 * 4) = param_2;
  if (param_6 == '\0') {
    return;
  }
  lVar15 = *(longlong *)(param_4 + 0x20);
  cVar1 = CanAddToCluster(param_1,lVar15);
  if (cVar1 == '\0') {
    iVar10 = *(int *)(lVar15 + 0xc);
    lVar12 = *(longlong *)(param_1 + 2);
    piVar8 = *(int **)(lVar12 + 0x28);
    uVar14 = (ulonglong)*(int *)(lVar12 + 0x30);
    lVar15 = uVar14 * 4;
    for (piVar6 = piVar8; piVar6 != piVar8 + uVar14; piVar6 = piVar6 + 1) {
      if (*piVar6 == iVar10) goto LAB_14253f98f;
    }
    goto LAB_14253f99b;
  }
  if (lVar15 != 0) {
    uVar2 = *(uint *)(lVar15 + 0xc);
    uVar14 = uVar9;
    if ((int)uVar2 < (int)DAT_1469e91c4) {
      uVar7 = uVar2 & 0xffff;
      uVar5 = uVar2;
      if ((int)uVar2 < 0) {
        uVar5 = uVar2 + 0xffff;
        uVar7 = uVar7 - 0x10000;
      }
      uVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)uVar7 * 0x18;
    }
    uVar5 = *(uint *)(uVar14 + 0xc);
    if (uVar5 != *param_1) {
      bVar4 = *(byte *)(uVar14 + 0xb) & 1;
      if ((bVar4 == 0) && (uVar5 == 0)) {
        if (DAT_1469e91a4 < (int)uVar2) {
          cVar1 = CanAddToCluster(param_1,lVar15);
          if ((cVar1 != '\0') && ((*(uint *)(lVar15 + 8) & 0x1400) == 0)) {
            uVar2 = *(uint *)(lVar15 + 0xc);
            uVar11 = uVar9;
            if ((int)uVar2 < (int)DAT_1469e91c4) {
              uVar7 = uVar2 & 0xffff;
              uVar5 = uVar2;
              if ((int)uVar2 < 0) {
                uVar5 = uVar2 + 0xffff;
                uVar7 = uVar7 - 0x10000;
              }
              uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                       (longlong)(int)uVar7 * 0x18;
            }
            if ((*(uint *)(uVar11 + 8) >> 0x1e & 1) == 0) {
              AddObjectToCluster(param_1,uVar2,uVar14,lVar15,param_5,1);
              goto LAB_14253f9bb;
            }
          }
          iVar10 = *(int *)(lVar15 + 0xc);
          lVar12 = *(longlong *)(param_1 + 2);
          piVar8 = *(int **)(lVar12 + 0x28);
          uVar14 = (ulonglong)*(int *)(lVar12 + 0x30);
          lVar15 = uVar14 * 4;
          for (piVar6 = piVar8; piVar6 != piVar8 + uVar14; piVar6 = piVar6 + 1) {
            if (*piVar6 == iVar10) goto LAB_14253f98f;
          }
          goto LAB_14253f99b;
        }
      }
      else {
        local_res10[0] = uVar2;
        if (bVar4 == 0) {
          local_res10[0] = uVar5;
        }
        uVar14 = uVar9;
        if ((int)local_res10[0] < (int)DAT_1469e91c4) {
          uVar5 = local_res10[0] & 0xffff;
          uVar2 = local_res10[0];
          if ((int)local_res10[0] < 0) {
            uVar2 = local_res10[0] + 0xffff;
            uVar5 = uVar5 - 0x10000;
          }
          uVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                   (longlong)(int)uVar5 * 0x18;
        }
        lVar15 = (longlong)(int)~*(uint *)(uVar14 + 0xc) * 0x50 + DAT_1469e8f10;
        TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                  (*(longlong *)(param_1 + 2) + 0x18,local_res10);
        TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                  (lVar15 + 0x38,param_1);
        puVar13 = *(uint **)(lVar15 + 0x18);
        uVar14 = (longlong)*(int *)(lVar15 + 0x20) & 0x3fffffffffffffff;
        if (puVar13 + *(int *)(lVar15 + 0x20) < puVar13) {
          uVar14 = uVar9;
        }
        uVar11 = uVar9;
        if (uVar14 != 0) {
          do {
            local_res8[0] = *puVar13;
            if (local_res8[0] != *param_1) {
              TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                        (*(longlong *)(param_1 + 2) + 0x18,local_res8);
            }
            puVar13 = puVar13 + 1;
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar14);
        }
        puVar13 = *(uint **)(lVar15 + 0x28);
        uVar14 = (longlong)*(int *)(lVar15 + 0x30) & 0x3fffffffffffffff;
        if (puVar13 + *(int *)(lVar15 + 0x30) < puVar13) {
          uVar14 = uVar9;
        }
        uVar11 = uVar9;
        if (uVar14 != 0) {
          do {
            local_res8[0] = *puVar13;
            TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                      (*(longlong *)(param_1 + 2) + 0x28,local_res8);
            uVar11 = uVar11 + 1;
            puVar13 = puVar13 + 1;
          } while (uVar11 != uVar14);
        }
      }
    }
  }
  goto LAB_14253f9bb;
LAB_14253f98f:
  if ((int)((longlong)piVar6 - (longlong)piVar8 >> 2) == -1) {
LAB_14253f99b:
    iVar3 = (int)uVar14 + 1;
    *(int *)(lVar12 + 0x30) = iVar3;
    if (*(int *)(lVar12 + 0x34) < iVar3) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar12 + 0x28,uVar14 & 0xffffffff);
    }
    *(int *)(lVar15 + *(longlong *)(lVar12 + 0x28)) = iVar10;
  }
LAB_14253f9bb:
  lVar15 = *(longlong *)(param_4 + 0x10);
  if ((*(uint *)(lVar15 + 0xb4) >> 7 & 1) != 0) {
    return;
  }
  if (lVar15 != 0) {
    uVar2 = *(uint *)(lVar15 + 0xc);
    uVar14 = uVar9;
    if ((int)uVar2 < (int)DAT_1469e91c4) {
      uVar7 = uVar2 & 0xffff;
      uVar5 = uVar2;
      if ((int)uVar2 < 0) {
        uVar5 = uVar2 + 0xffff;
        uVar7 = uVar7 - 0x10000;
      }
      uVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)uVar7 * 0x18;
    }
    uVar5 = *(uint *)(uVar14 + 0xc);
    if (uVar5 != *param_1) {
      bVar4 = *(byte *)(uVar14 + 0xb) & 1;
      if ((bVar4 == 0) && (uVar5 == 0)) {
        if (DAT_1469e91a4 < (int)uVar2) {
          cVar1 = CanAddToCluster(param_1,lVar15);
          if ((cVar1 != '\0') && ((*(uint *)(lVar15 + 8) & 0x1400) == 0)) {
            uVar2 = *(uint *)(lVar15 + 0xc);
            uVar11 = uVar9;
            if ((int)uVar2 < (int)DAT_1469e91c4) {
              uVar7 = uVar2 & 0xffff;
              uVar5 = uVar2;
              if ((int)uVar2 < 0) {
                uVar5 = uVar2 + 0xffff;
                uVar7 = uVar7 - 0x10000;
              }
              uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                       (longlong)(int)uVar7 * 0x18;
            }
            if ((*(uint *)(uVar11 + 8) >> 0x1e & 1) == 0) {
              AddObjectToCluster(param_1,uVar2,uVar14,lVar15,param_5,1);
              goto LAB_14253fc64;
            }
          }
          iVar10 = *(int *)(lVar15 + 0xc);
          lVar15 = *(longlong *)(param_1 + 2);
          piVar8 = *(int **)(lVar15 + 0x28);
          iVar3 = *(int *)(lVar15 + 0x30);
          for (piVar6 = piVar8; piVar6 != piVar8 + iVar3; piVar6 = piVar6 + 1) {
            if (*piVar6 == iVar10) {
              if ((int)((longlong)piVar6 - (longlong)piVar8 >> 2) != -1) goto LAB_14253fc64;
              break;
            }
          }
          *(int *)(lVar15 + 0x30) = iVar3 + 1;
          if (*(int *)(lVar15 + 0x34) < iVar3 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar15 + 0x28,iVar3);
          }
          *(int *)((longlong)iVar3 * 4 + *(longlong *)(lVar15 + 0x28)) = iVar10;
        }
      }
      else {
        local_res10[0] = uVar2;
        if (bVar4 == 0) {
          local_res10[0] = uVar5;
        }
        uVar14 = uVar9;
        if ((int)local_res10[0] < (int)DAT_1469e91c4) {
          uVar5 = local_res10[0] & 0xffff;
          uVar2 = local_res10[0];
          if ((int)local_res10[0] < 0) {
            uVar2 = local_res10[0] + 0xffff;
            uVar5 = uVar5 - 0x10000;
          }
          uVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                   (longlong)(int)uVar5 * 0x18;
        }
        lVar15 = (longlong)(int)~*(uint *)(uVar14 + 0xc) * 0x50 + DAT_1469e8f10;
        TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                  (*(longlong *)(param_1 + 2) + 0x18,local_res10);
        TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                  (lVar15 + 0x38,param_1);
        puVar13 = *(uint **)(lVar15 + 0x18);
        uVar14 = (longlong)*(int *)(lVar15 + 0x20) & 0x3fffffffffffffff;
        if (puVar13 + *(int *)(lVar15 + 0x20) < puVar13) {
          uVar14 = uVar9;
        }
        uVar11 = uVar9;
        if (uVar14 != 0) {
          do {
            local_res8[0] = *puVar13;
            if (local_res8[0] != *param_1) {
              TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                        (*(longlong *)(param_1 + 2) + 0x18,local_res8);
            }
            puVar13 = puVar13 + 1;
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar14);
        }
        puVar13 = *(uint **)(lVar15 + 0x28);
        uVar14 = (longlong)*(int *)(lVar15 + 0x30) & 0x3fffffffffffffff;
        if (puVar13 + *(int *)(lVar15 + 0x30) < puVar13) {
          uVar14 = uVar9;
        }
        uVar11 = uVar9;
        if (uVar14 != 0) {
          do {
            local_res8[0] = *puVar13;
            TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                      (*(longlong *)(param_1 + 2) + 0x28,local_res8);
            uVar11 = uVar11 + 1;
            puVar13 = puVar13 + 1;
          } while (uVar11 != uVar14);
        }
      }
    }
  }
LAB_14253fc64:
  param_4 = *(longlong *)(*(longlong *)(param_4 + 0x10) + 0x20);
  if (param_4 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_4 + 0xc);
  param_3 = uVar9;
  if ((int)uVar2 < (int)DAT_1469e91c4) {
    uVar7 = uVar2 & 0xffff;
    uVar5 = uVar2;
    if ((int)uVar2 < 0) {
      uVar5 = uVar2 + 0xffff;
      uVar7 = uVar7 - 0x10000;
    }
    param_3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)uVar7 * 0x18;
  }
  uVar5 = *(uint *)(param_3 + 0xc);
  if (uVar5 == *param_1) {
    return;
  }
  bVar4 = *(byte *)(param_3 + 0xb) & 1;
  if ((bVar4 != 0) || (uVar5 != 0)) {
    local_res10[0] = uVar2;
    if (bVar4 == 0) {
      local_res10[0] = uVar5;
    }
    uVar14 = uVar9;
    if ((int)local_res10[0] < (int)DAT_1469e91c4) {
      uVar5 = (int)local_res10[0] >> 0x1f & 0xffff;
      uVar2 = local_res10[0] + uVar5;
      uVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
               (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    lVar15 = (longlong)(int)~*(uint *)(uVar14 + 0xc) * 0x50 + DAT_1469e8f10;
    TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
              (*(longlong *)(param_1 + 2) + 0x18,local_res10);
    TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
              (lVar15 + 0x38,param_1);
    puVar13 = *(uint **)(lVar15 + 0x18);
    uVar14 = (longlong)*(int *)(lVar15 + 0x20) & 0x3fffffffffffffff;
    if (puVar13 + *(int *)(lVar15 + 0x20) < puVar13) {
      uVar14 = uVar9;
    }
    uVar11 = uVar9;
    if (uVar14 != 0) {
      do {
        local_res8[0] = *puVar13;
        if (local_res8[0] != *param_1) {
          TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                    (*(longlong *)(param_1 + 2) + 0x18,local_res8);
        }
        puVar13 = puVar13 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar14);
    }
    puVar13 = *(uint **)(lVar15 + 0x28);
    uVar14 = (longlong)*(int *)(lVar15 + 0x30) & 0x3fffffffffffffff;
    if (puVar13 + *(int *)(lVar15 + 0x30) < puVar13) {
      uVar14 = uVar9;
    }
    if (uVar14 != 0) {
      do {
        local_res8[0] = *puVar13;
        TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                  (*(longlong *)(param_1 + 2) + 0x28,local_res8);
        uVar9 = uVar9 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar9 != uVar14);
      return;
    }
    return;
  }
  if ((int)uVar2 <= DAT_1469e91a4) {
    return;
  }
  cVar1 = CanAddToCluster(param_1,param_4);
  if ((cVar1 != '\0') && ((*(uint *)(param_4 + 8) & 0x1400) == 0)) {
    param_2 = *(uint *)(param_4 + 0xc);
    uVar14 = uVar9;
    if ((int)param_2 < (int)DAT_1469e91c4) {
      uVar5 = param_2 & 0xffff;
      uVar2 = param_2;
      if ((int)param_2 < 0) {
        uVar2 = param_2 + 0xffff;
        uVar5 = uVar5 - 0x10000;
      }
      uVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
               (longlong)(int)uVar5 * 0x18;
    }
    if ((*(uint *)(uVar14 + 8) >> 0x1e & 1) == 0) {
      param_6 = '\x01';
      if (param_2 == *param_1) {
        return;
      }
      goto LAB_14253f610;
    }
  }
  lVar15 = *(longlong *)(param_1 + 2);
  iVar10 = *(int *)(param_4 + 0xc);
  piVar8 = *(int **)(lVar15 + 0x28);
  iVar3 = *(int *)(lVar15 + 0x30);
  piVar6 = piVar8;
joined_r0x00014253fd84:
  if (piVar6 == piVar8 + iVar3) {
LAB_14253fda5:
    *(int *)(lVar15 + 0x30) = iVar3 + 1;
    if (*(int *)(lVar15 + 0x34) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar15 + 0x28,iVar3);
    }
    *(int *)((longlong)iVar3 * 4 + *(longlong *)(lVar15 + 0x28)) = iVar10;
    return;
  }
  if (*piVar6 == iVar10) {
    if ((int)((longlong)piVar6 - (longlong)piVar8 >> 2) != -1) {
      return;
    }
    goto LAB_14253fda5;
  }
  piVar6 = piVar6 + 1;
  goto joined_r0x00014253fd84;
}



// FUNCTION 14253ff10 FUN_14253ff10 body=103 status=ok
// SIG undefined FUN_14253ff10(void)

void FUN_14253ff10(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x28,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x30,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x38,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014253ff73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x40,0,0);
  return;
}



// FUNCTION 14253ff80 AddReferencedObjects body=150 status=ok
// SIG undefined AddReferencedObjects(void)

void ULocalPlayer::AddReferencedObjects(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))();
  }
  lVar3 = *(longlong *)(param_1 + 0xd0);
  lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0xd8) * 0x28;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
    plVar2 = *(longlong **)(lVar3 + 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0xe8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 142540020 FUN_142540020 body=2011 status=ok
// SIG undefined FUN_142540020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142540020(longlong param_1,float *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char cVar13;
  undefined4 in_EAX;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong uVar19;
  
  auVar29._4_4_ =
       -(uint)(0.0001 < (float)((uint)(param_2[5] - fRam00000001468b5b84) & uRam0000000146afc9f4));
  auVar29._0_4_ = -(uint)(0.0001 < (float)((uint)(param_2[4] - _DAT_1468b5b80) & _DAT_146afc9f0));
  auVar29._8_4_ =
       -(uint)(0.0001 < (float)((uint)(param_2[6] - fRam00000001468b5b88) & uRam0000000146afc9f8));
  auVar29._12_4_ =
       -(uint)(0.0001 < (float)((uint)(param_2[7] - fRam00000001468b5b8c) & uRam0000000146afc9fc));
  iVar14 = movmskps(in_EAX,auVar29);
  if (iVar14 == 0) {
    auVar25._4_4_ =
         -(uint)(0.0001 < (float)((uint)(param_2[1] - fRam00000001468b5b74) & uRam0000000146afc9f4))
    ;
    auVar25._0_4_ = -(uint)(0.0001 < (float)((uint)(*param_2 - _DAT_1468b5b70) & _DAT_146afc9f0));
    auVar25._8_4_ =
         -(uint)(0.0001 < (float)((uint)(param_2[2] - fRam00000001468b5b78) & uRam0000000146afc9f8))
    ;
    auVar25._12_4_ =
         -(uint)(0.0001 < (float)((uint)(param_2[3] - fRam00000001468b5b7c) & uRam0000000146afc9fc))
    ;
    iVar14 = movmskps(0,auVar25);
    if (((iVar14 == 0) ||
        (auVar22._4_4_ =
              -(uint)(0.0001 < (float)((uint)(fRam00000001468b5b74 + param_2[1]) &
                                      uRam0000000146afc9f4)),
        auVar22._0_4_ =
             -(uint)(0.0001 < (float)((uint)(_DAT_1468b5b70 + *param_2) & _DAT_146afc9f0)),
        auVar22._8_4_ =
             -(uint)(0.0001 < (float)((uint)(fRam00000001468b5b78 + param_2[2]) &
                                     uRam0000000146afc9f8)),
        auVar22._12_4_ =
             -(uint)(0.0001 < (float)((uint)(fRam00000001468b5b7c + param_2[3]) &
                                     uRam0000000146afc9fc)), iVar14 = movmskps(iVar14,auVar22),
        iVar14 == 0)) &&
       (auVar3._4_4_ = -(uint)(0.0001 < (float)((uint)(param_2[9] - fRam00000001468b5b94) &
                                               uRam0000000146afc9f4)),
       auVar3._0_4_ = -(uint)(0.0001 < (float)((uint)(param_2[8] - _DAT_1468b5b90) & _DAT_146afc9f0)
                             ),
       auVar3._8_4_ = -(uint)(0.0001 < (float)((uint)(param_2[10] - fRam00000001468b5b98) &
                                              uRam0000000146afc9f8)),
       auVar3._12_4_ =
            -(uint)(0.0001 < (float)((uint)(param_2[0xb] - fRam00000001468b5b9c) &
                                    uRam0000000146afc9fc)), iVar14 = movmskps(0,auVar3), iVar14 == 0
       )) {
      return;
    }
  }
  auVar23._4_4_ =
       -(uint)(1e-08 < (float)((uint)(param_2[1] - DAT_1464aa814) & uRam0000000146afc9f4));
  auVar23._0_4_ = -(uint)(1e-08 < (float)((uint)(*param_2 - DAT_1464aa810) & _DAT_146afc9f0));
  auVar23._8_4_ =
       -(uint)(1e-08 < (float)((uint)(param_2[2] - DAT_1464aa818) & uRam0000000146afc9f8));
  auVar23._12_4_ =
       -(uint)(1e-08 < (float)((uint)(param_2[3] - DAT_1464aa81c) & uRam0000000146afc9fc));
  iVar14 = movmskps(iVar14,auVar23);
  if ((iVar14 != 0) &&
     (auVar4._4_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa814 + param_2[1]) &
                                            uRam0000000146afc9f4)),
     auVar4._0_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa810 + *param_2) & _DAT_146afc9f0)),
     auVar4._8_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa818 + param_2[2]) &
                                           uRam0000000146afc9f8)),
     auVar4._12_4_ =
          -(uint)(1e-08 < (float)((uint)(DAT_1464aa81c + param_2[3]) & uRam0000000146afc9fc)),
     iVar14 = movmskps(iVar14,auVar4), iVar14 != 0)) {
    *(byte *)(param_1 + 0x204) = *(byte *)(param_1 + 0x204) | 4;
  }
  uVar19 = 0;
  uVar21 = uVar19;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      lVar20 = *(longlong *)(uVar21 + *(longlong *)(param_1 + 0xa0));
      if (((lVar20 != 0) && (lVar17 = FUN_14222e2a0(lVar20), lVar17 == 0)) &&
         (lVar20 = *(longlong *)(lVar20 + 0x168), lVar20 != 0)) {
        uVar15 = FRotator::Quaternion(lVar20 + 0x1f8,&local_d8);
        fVar12 = fRam0000000146afc9c8;
        fVar11 = fRam0000000146afc9c4;
        fVar10 = _DAT_146afc9c0;
        fVar50 = fRam0000000146afc8f8;
        fVar48 = fRam0000000146afc8f4;
        fVar45 = _DAT_146afc8f0;
        auVar29 = *(undefined1 (*) [16])(param_2 + 8);
        fVar57 = auVar29._0_4_;
        fVar58 = auVar29._4_4_;
        fVar59 = auVar29._8_4_;
        fVar54 = (float)((uint)_DAT_146afc8f0 & _DAT_146afc900);
        fVar55 = (float)((uint)fRam0000000146afc8f4 & uRam0000000146afc904);
        fVar56 = (float)((uint)fRam0000000146afc8f8 & uRam0000000146afc908);
        fVar27 = *param_2;
        fVar35 = param_2[1];
        fVar30 = param_2[2];
        fVar31 = param_2[3];
        local_108 = 0;
        uStack_100 = 0;
        auVar24._4_4_ = fVar55;
        auVar24._0_4_ = fVar54;
        auVar24._8_4_ = fVar56;
        auVar24._12_4_ = (uint)fRam0000000146afc8fc & uRam0000000146afc90c;
        auVar25 = minps(auVar24,auVar29);
        auVar26._4_4_ = -(uint)(auVar25._4_4_ < fRam0000000146afc9c4);
        auVar26._0_4_ = -(uint)(auVar25._0_4_ < _DAT_146afc9c0);
        auVar26._8_4_ = -(uint)(auVar25._8_4_ < fRam0000000146afc9c8);
        auVar26._12_4_ = -(uint)(auVar25._12_4_ < fRam0000000146afc9cc);
        iVar14 = movmskps(uVar15,auVar26);
        if (iVar14 == 0) {
          fVar57 = fStack_cc * fVar27 * _DAT_146afc980 + fVar31 * local_d8 +
                   fStack_d0 * fVar35 * _DAT_146afc970 + fStack_d4 * fVar30 * _DAT_146afc960;
          fVar58 = fStack_d0 * fVar27 * fRam0000000146afc984 + fVar31 * fStack_d4 +
                   fStack_cc * fVar35 * fRam0000000146afc974 +
                   local_d8 * fVar30 * fRam0000000146afc964;
          fVar59 = fStack_d4 * fVar27 * fRam0000000146afc988 + fVar31 * fStack_d0 +
                   local_d8 * fVar35 * fRam0000000146afc978 +
                   fStack_cc * fVar30 * fRam0000000146afc968;
          fVar27 = local_d8 * fVar27 * fRam0000000146afc98c + fVar31 * fStack_cc +
                   fStack_d4 * fVar35 * fRam0000000146afc97c +
                   fStack_d0 * fVar30 * fRam0000000146afc96c;
        }
        else {
          fVar6 = param_2[4];
          fVar7 = param_2[5];
          fVar8 = param_2[6];
          fVar32 = fVar35 + fVar35;
          fVar36 = fVar30 + fVar30;
          fVar38 = (fVar27 + fVar27) * fVar27;
          fVar33 = (fVar27 + fVar27) * fVar31;
          fVar34 = fStack_d4 + fStack_d4;
          fVar37 = fStack_d0 + fStack_d0;
          fVar51 = (fVar36 * fVar31 + fVar32 * fVar27) * fVar57;
          fVar52 = (fVar33 + fVar36 * fVar35) * fVar58;
          fVar53 = (fVar32 * fVar31 + fVar36 * fVar27) * fVar59;
          fVar40 = fVar58 * (fVar32 * fVar27 - fVar36 * fVar31);
          fVar41 = fVar59 * (fVar36 * fVar35 - fVar33);
          fVar43 = fVar57 * (fVar36 * fVar27 - fVar32 * fVar31);
          fVar39 = local_d8 * (local_d8 + local_d8);
          fVar27 = (float)((uint)((_DAT_146afc8f0 - (fVar36 * fVar30 + fVar32 * fVar35)) * fVar57) &
                          _DAT_146afc900);
          fVar30 = (float)((uint)((fRam0000000146afc8f4 - (fVar36 * fVar30 + fVar38)) * fVar58) &
                          uRam0000000146afc904);
          fVar32 = (float)((uint)((fRam0000000146afc8f8 - (fVar32 * fVar35 + fVar38)) * fVar59) &
                          uRam0000000146afc908);
          fVar36 = (float)((uint)((fRam0000000146afc8fc - (fVar38 + fVar38)) * auVar29._12_4_) &
                          uRam0000000146afc90c);
          fVar35 = (local_d8 + local_d8) * fStack_cc;
          fVar46 = (fVar37 * fStack_cc + fVar34 * local_d8) * fVar54;
          fVar47 = (fVar35 + fVar37 * fStack_d4) * fVar55;
          fVar49 = (fVar34 * fStack_cc + fVar37 * local_d8) * fVar56;
          fVar38 = fVar55 * (fVar34 * local_d8 - fVar37 * fStack_cc);
          fVar42 = fVar56 * (fVar37 * fStack_d4 - fVar35);
          fVar44 = fVar54 * (fVar37 * local_d8 - fVar34 * fStack_cc);
          fVar35 = (float)((uint)((_DAT_146afc8f0 - (fStack_d0 * fVar37 + fStack_d4 * fVar34)) *
                                 fVar54) & _DAT_146afc900);
          fVar31 = (float)((uint)((fRam0000000146afc8f4 - (fStack_d0 * fVar37 + fVar39)) * fVar55) &
                          uRam0000000146afc904);
          fVar33 = (float)((uint)((fRam0000000146afc8f8 - (fStack_d4 * fVar34 + fVar39)) * fVar56) &
                          uRam0000000146afc908);
          fVar34 = (float)((uint)((fRam0000000146afc8fc - (fVar39 + fVar39)) *
                                 (float)((uint)fRam0000000146afc8fc & uRam0000000146afc90c)) &
                          uRam0000000146afc90c);
          local_178 = fVar46 * fVar40 + fVar35 * fVar27 + fVar44 * fVar53 + fVar34 * fVar6;
          fStack_174 = fVar46 * fVar30 + fVar35 * fVar51 + fVar44 * fVar41 + fVar34 * fVar7;
          fStack_170 = fVar46 * fVar52 + fVar35 * fVar43 + fVar44 * fVar32 + fVar34 * fVar8;
          fStack_16c = fVar46 * fVar36 + fVar35 * fVar36 + fVar44 * fVar36 +
                       fVar34 * fRam0000000146afc8fc;
          local_168 = fVar31 * fVar40 + fVar38 * fVar27 + fVar47 * fVar53 + fVar34 * fVar6;
          fStack_164 = fVar31 * fVar30 + fVar38 * fVar51 + fVar47 * fVar41 + fVar34 * fVar7;
          fStack_160 = fVar31 * fVar52 + fVar38 * fVar43 + fVar47 * fVar32 + fVar34 * fVar8;
          fStack_15c = fVar31 * fVar36 + fVar38 * fVar36 + fVar47 * fVar36 +
                       fVar34 * fRam0000000146afc8fc;
          local_158 = fVar42 * fVar40 + fVar49 * fVar27 + fVar33 * fVar53 + fVar34 * fVar6;
          fStack_154 = fVar42 * fVar30 + fVar49 * fVar51 + fVar33 * fVar41 + fVar34 * fVar7;
          fStack_150 = fVar42 * fVar52 + fVar49 * fVar43 + fVar33 * fVar32 + fVar34 * fVar8;
          fStack_14c = fVar42 * fVar36 + fVar49 * fVar36 + fVar33 * fVar36 +
                       fVar34 * fRam0000000146afc8fc;
          local_148 = fVar40 * 0.0 + fVar27 * 0.0 + fVar53 * 0.0 + fRam0000000146afc8fc * fVar6;
          fStack_144 = fVar30 * 0.0 + fVar51 * 0.0 + fVar41 * 0.0 + fRam0000000146afc8fc * fVar7;
          fStack_140 = fVar52 * 0.0 + fVar43 * 0.0 + fVar32 * 0.0 + fRam0000000146afc8fc * fVar8;
          fStack_13c = fVar36 * 0.0 + fVar36 * 0.0 + fVar36 * 0.0 +
                       fRam0000000146afc8fc * fRam0000000146afc8fc;
          FMatrix::RemoveScaling(&local_178);
          fVar57 = (float)(-(uint)(fVar10 <= fVar54 * fVar57) & (_DAT_146afc9b0 ^ (uint)fVar45) ^
                          _DAT_146afc9b0);
          fVar58 = (float)(-(uint)(fVar11 <= fVar55 * fVar58) &
                           (uRam0000000146afc9b4 ^ (uint)fVar48) ^ uRam0000000146afc9b4);
          fVar59 = (float)(-(uint)(fVar12 <= fVar56 * fVar59) &
                           (uRam0000000146afc9b8 ^ (uint)fVar50) ^ uRam0000000146afc9b8);
          local_178 = local_178 * fVar57;
          fStack_174 = fStack_174 * fVar57;
          fStack_170 = fStack_170 * fVar57;
          fStack_164 = fStack_164 * fVar58;
          fStack_160 = fStack_160 * fVar58;
          local_168 = local_168 * fVar58;
          fStack_154 = fStack_154 * fVar59;
          fStack_150 = fStack_150 * fVar59;
          local_158 = local_158 * fVar59;
          FQuat::FQuat(&local_f8,&local_178);
          auVar28._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
          auVar28._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
          auVar28._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
          auVar28._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
          fVar35 = auVar28._4_4_ + auVar28._0_4_;
          fVar30 = auVar28._8_4_ + auVar28._4_4_;
          fVar31 = auVar28._12_4_ + auVar28._8_4_;
          fVar45 = auVar28._0_4_ + auVar28._12_4_;
          auVar5._4_4_ = fVar30;
          auVar5._0_4_ = fVar35;
          auVar5._8_4_ = fVar31;
          auVar5._12_4_ = fVar45;
          auVar29 = rsqrtps(auVar28,auVar5);
          fVar57 = auVar29._0_4_;
          fVar58 = auVar29._4_4_;
          fVar59 = auVar29._8_4_;
          fVar27 = auVar29._12_4_;
          fVar57 = (_DAT_146afc9a0 - fVar57 * fVar57 * fVar35 * _DAT_146afc9a0) * fVar57 + fVar57;
          fVar58 = (fRam0000000146afc9a4 - fVar58 * fVar58 * fVar30 * fRam0000000146afc9a4) * fVar58
                   + fVar58;
          fVar59 = (fRam0000000146afc9a8 - fVar59 * fVar59 * fVar31 * fRam0000000146afc9a8) * fVar59
                   + fVar59;
          fVar27 = (fRam0000000146afc9ac - fVar27 * fVar27 * fVar45 * fRam0000000146afc9ac) * fVar27
                   + fVar27;
          fVar57 = (float)(((uint)(((_DAT_146afc9a0 - fVar57 * fVar57 * fVar35 * _DAT_146afc9a0) *
                                    fVar57 + fVar57) * local_f8) ^ _DAT_146afc990) &
                           -(uint)(1e-08 <= fVar35) ^ _DAT_146afc990);
          fVar58 = (float)(((uint)(((fRam0000000146afc9a4 -
                                    fVar58 * fVar58 * fVar30 * fRam0000000146afc9a4) * fVar58 +
                                   fVar58) * fStack_f4) ^ uRam0000000146afc994) &
                           -(uint)(1e-08 <= fVar30) ^ uRam0000000146afc994);
          fVar59 = (float)(((uint)(((fRam0000000146afc9a8 -
                                    fVar59 * fVar59 * fVar31 * fRam0000000146afc9a8) * fVar59 +
                                   fVar59) * fStack_f0) ^ uRam0000000146afc998) &
                           -(uint)(1e-08 <= fVar31) ^ uRam0000000146afc998);
          fVar27 = (float)(((uint)(((fRam0000000146afc9ac -
                                    fVar27 * fVar27 * fVar45 * fRam0000000146afc9ac) * fVar27 +
                                   fVar27) * fStack_ec) ^ uRam0000000146afc99c) &
                           -(uint)(1e-08 <= fVar45) ^ uRam0000000146afc99c);
          local_f8 = fVar57;
          fStack_f4 = fVar58;
          fStack_f0 = fVar59;
          fStack_ec = fVar27;
        }
        local_108 = CONCAT44(fVar58,fVar57);
        uStack_100 = CONCAT44(fVar27,fVar59);
        FQuat::Rotator(&local_108,&local_138);
        fVar57 = *param_2;
        fVar58 = param_2[1];
        fVar59 = param_2[2];
        fVar27 = param_2[3];
        local_128 = local_138;
        fVar45 = *(float *)(lVar20 + 0x1ec) * param_2[8];
        fVar48 = *(float *)(lVar20 + 0x1f0) * param_2[9];
        fVar50 = *(float *)(lVar20 + 500) * param_2[10];
        local_120 = local_130;
        fVar35 = fVar50 * fVar58 - fVar48 * fVar59;
        fVar30 = fVar45 * fVar59 - fVar50 * fVar57;
        fVar31 = fVar48 * fVar57 - fVar45 * fVar58;
        fVar35 = fVar35 + fVar35;
        fVar30 = fVar30 + fVar30;
        fVar31 = fVar31 + fVar31;
        local_110 = (fVar30 * fVar57 - fVar35 * fVar58) + fVar27 * fVar31 + fVar50 + param_2[6];
        local_118 = CONCAT44((fVar35 * fVar59 - fVar31 * fVar57) + fVar27 * fVar30 + fVar48 +
                             param_2[5],
                             (fVar31 * fVar58 - fVar30 * fVar59) + fVar27 * fVar35 + fVar45 +
                             param_2[4]);
        local_e0 = local_110;
        FUN_1423982b0(lVar20,&local_118,&local_128,0,0,0);
      }
      uVar18 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar18;
      uVar21 = uVar21 + 8;
    } while ((int)uVar18 < *(int *)(param_1 + 0xa8));
  }
  bVar9 = false;
  *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 1;
  iVar14 = *(int *)(param_1 + 0x224);
  iVar16 = *(int *)(param_1 + 0x218) + -1;
  lVar20 = (longlong)iVar16;
  if (-1 < iVar16) {
    lVar17 = lVar20 << 4;
    bVar9 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x210);
      if (((*(int *)(lVar17 + 8 + lVar1) == 0) ||
          (plVar2 = *(longlong **)(lVar17 + lVar1), plVar2 == (longlong *)0x0)) ||
         (cVar13 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2), cVar13 == '\0')) {
        bVar9 = true;
      }
      lVar17 = lVar17 + -0x10;
      lVar20 = lVar20 + -1;
    } while (-1 < lVar20);
    iVar14 = *(int *)(param_1 + 0x224);
  }
  *(int *)(param_1 + 0x224) = iVar14 + -1;
  if (bVar9) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x210),0);
  }
  return;
}



// FUNCTION 142540800 FUN_142540800 body=1259 status=ok
// SIG undefined FUN_142540800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142540800(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  int local_res18 [2];
  longlong *local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [24];
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  
  *(undefined1 *)((longlong)param_1 + 0xb4) = 4;
  if (param_3 == 0) {
    pcVar2 = *(code **)(*param_1 + 0x278);
    if (param_4 == 2) {
      *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0xb4) = 2;
    }
    (*pcVar2)(param_1,0);
  }
  else {
    lVar6 = UWorld::FindWorldInPackage(param_3);
    if (lVar6 == 0) {
      *(uint *)(param_3 + 0x50) = *(uint *)(param_3 + 0x50) & 0xfffdffff;
      lVar10 = 0;
      local_98 = (longlong *)0x0;
      lVar6 = FUN_1428cb040(param_3,&local_98);
      if (lVar6 != 0) {
        lVar7 = *param_2;
        iVar5 = (int)((ulonglong)lVar7 >> 0x20);
        if (DAT_1465332d8 != DAT_146533304) {
          puVar9 = DAT_146533310;
          if (DAT_146533310 == (undefined *)0x0) {
            puVar9 = &DAT_146533308;
          }
          iVar1 = *(int *)(puVar9 + ((longlong)(iVar5 + (int)lVar7) & (longlong)DAT_146533318 - 1U)
                                    * 4);
          while (iVar1 != -1) {
            lVar12 = (longlong)iVar1 * 0x18;
            if (*(longlong *)(DAT_1465332d0 + (longlong)iVar1 * 0x18) == lVar7) {
              lVar12 = lVar12 + DAT_1465332d0;
              if (iVar1 != -1) goto LAB_1425409dd;
              break;
            }
            iVar1 = *(int *)(DAT_1465332d0 + 0x10 + lVar12);
          }
        }
        lVar12 = lVar10;
LAB_1425409dd:
        lVar14 = lVar12 + 8;
        if (lVar12 == 0) {
          lVar14 = lVar10;
        }
        if (lVar14 != 0) {
          lVar10 = FWeakObjectPtr::Get();
        }
        TSet<TTuple<FName,FUniformBufferStruct_*>,TDefaultMapHashableKeyFuncs<FName,FUniformBufferStruct_*,0>,FDefaultSetAllocator>
        ::Remove(&DAT_1465332d0,lVar7);
        plVar11 = (longlong *)ULevelStreaming::GetWorldAssetPackageFName(param_1,local_88);
        plVar8 = param_1 + 10;
        if ((*plVar11 == param_1[10]) || (bVar3 = true, param_1[10] == 0)) {
          bVar3 = false;
        }
        lVar12 = UObjectBaseUtility::GetOutermost(lVar6);
        lVar12 = *(longlong *)(lVar12 + 0x18);
        *plVar8 = lVar12;
        if (lVar12 != lVar7) {
          if (DAT_1465356b8 != DAT_1465356e4) {
            puVar9 = DAT_1465356f0;
            if (DAT_1465356f0 == (undefined *)0x0) {
              puVar9 = &DAT_1465356e8;
            }
            iVar5 = *(int *)(puVar9 + ((longlong)(iVar5 + (int)lVar7) &
                                      (longlong)(int)_DAT_1465356f8 - 1U) * 4);
            while (iVar5 != -1) {
              lVar12 = (longlong)iVar5 * 0x18;
              if (*(longlong *)(lVar12 + DAT_1465356b0) == lVar7) {
                if (iVar5 != -1) {
                  lVar12 = lVar12 + DAT_1465356b0;
                  goto LAB_142540ac5;
                }
                break;
              }
              iVar5 = *(int *)(lVar12 + 0x10 + DAT_1465356b0);
            }
          }
          lVar12 = 0;
LAB_142540ac5:
          puVar15 = (undefined4 *)(lVar12 + 8);
          if (lVar12 == 0) {
            puVar15 = (undefined4 *)0x0;
          }
          if (puVar15 != (undefined4 *)0x0) {
            lVar12 = *plVar8;
            if (DAT_1465356b8 != DAT_1465356e4) {
              puVar9 = DAT_1465356f0;
              if (DAT_1465356f0 == (undefined *)0x0) {
                puVar9 = &DAT_1465356e8;
              }
              iVar5 = *(int *)(puVar9 + ((longlong)((int)((ulonglong)lVar12 >> 0x20) + (int)lVar12)
                                        & (longlong)(int)_DAT_1465356f8 - 1U) * 4);
              while (iVar5 != -1) {
                lVar14 = (longlong)iVar5 * 0x18;
                if (*(longlong *)(lVar14 + DAT_1465356b0) == lVar12) {
                  if ((iVar5 != -1) && (lVar14 = lVar14 + DAT_1465356b0, lVar14 != 0))
                  goto LAB_142540b8f;
                  break;
                }
                iVar5 = *(int *)(lVar14 + 0x10 + DAT_1465356b0);
              }
            }
            local_90 = plVar8;
            FUN_14253ceb0(&DAT_1465356b0,local_res18,&local_90,0);
            lVar14 = DAT_1465356b0 + (longlong)local_res18[0] * 0x18;
LAB_142540b8f:
            *(undefined4 *)(lVar14 + 8) = *puVar15;
            TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            ::Remove(&DAT_1465356b0,lVar7);
          }
        }
        if (bVar3) {
          lVar10 = FLinkerLoad::FindExistingLinkerForPackage(param_3);
          if (lVar10 != 0) {
            FUN_141733120(lVar10);
            FUN_1417330e0(lVar10);
          }
          lVar10 = *local_98;
          uVar13 = GetTransientPackage();
          (**(code **)(lVar10 + 0x138))(local_98,0,uVar13,0x35);
          *(undefined4 *)(lVar6 + 0x708) = 7;
        }
        else {
          if (lVar10 != 0) {
            uVar13 = 0;
            if (*(longlong *)(lVar6 + 0x30) != 0) {
              *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0xc0) = lVar10;
              uVar13 = *(undefined8 *)(lVar6 + 0x30);
            }
            FUN_14252be70(uVar13);
            FUN_14251b440(*(undefined8 *)(lVar6 + 0x30));
          }
          local_68 = 0xffffffff;
          local_50 = 0;
          local_48 = 0;
          local_64 = 0;
          local_58 = 0;
          uVar13 = FSoftObjectPath::FSoftObjectPath(local_80,lVar6);
          FSoftObjectPath::operator=(&local_58,uVar13);
          FWeakObjectPtr::operator=(&local_68,lVar6);
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          local_64 = CONCAT44(DAT_1464b56f4,(undefined4)local_64);
          ULevelStreaming::SetWorldAsset(param_1,&local_68);
          if (local_50 != 0) {
            FMemory::Free();
          }
        }
      }
    }
    else {
      lVar6 = *(longlong *)(lVar6 + 0x30);
      if (lVar6 != 0) {
        lVar10 = *(longlong *)(lVar6 + 0xc0);
        if ((lVar10 != 0) &&
           (((lVar7 = *(longlong *)(lVar10 + 0xf8), lVar7 == 0 &&
             (lVar7 = *(longlong *)(lVar10 + 0x100), lVar7 == 0)) || (lVar7 != param_1[0x24])))) {
          FUN_1425504a0(param_1,lVar6);
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x1c,0);
        }
        FUN_14256fdc0(lVar6);
        plVar8 = (longlong *)IStreamingManager::Get();
        (**(code **)(*plVar8 + 0x48))(plVar8,lVar6);
        if (0 < (int)param_1[0xc]) {
          *(byte *)(lVar6 + 0x205) = *(byte *)(lVar6 + 0x205) | 0x20;
          plVar11 = (longlong *)param_1[0xb];
          plVar8 = plVar11 + (int)param_1[0xc];
          for (; plVar11 != plVar8; plVar11 = plVar11 + 1) {
            if (*plVar11 == *(longlong *)(param_3 + 0x18)) {
              bVar4 = 0x40;
              goto LAB_1425408f0;
            }
          }
          bVar4 = 0;
LAB_1425408f0:
          *(byte *)(lVar6 + 0x205) = *(byte *)(lVar6 + 0x205) & 0xbf | bVar4;
        }
        if ((lVar10 != 0) && (*(int *)(lVar10 + 0x708) == 2)) {
          UWorld::AddLevel(lVar10,lVar6);
        }
      }
    }
  }
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Remove
            (&DAT_1465356b0,*param_2);
  TSet<TTuple<FName,FUniformBufferStruct_*>,TDefaultMapHashableKeyFuncs<FName,FUniformBufferStruct_*,0>,FDefaultSetAllocator>
  ::Remove(&DAT_1465332d0,*param_2);
  return;
}



// FUNCTION 142540cf0 FUN_142540cf0 body=477 status=ok
// SIG undefined FUN_142540cf0(void)

longlong FUN_142540cf0(void)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  lVar5 = operator_new(1);
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res10);
    QueryPerformanceCounter(&local_res8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res10._0_4_);
    return lVar5;
  }
  pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = TlsGetValue(*pDVar6);
  plVar10 = (longlong *)0x0;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      plVar10 = plVar7;
    }
    TlsSetValue(*pDVar6,plVar10);
    plVar7 = plVar10;
  }
  plVar10 = (longlong *)plVar7[1];
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)*plVar7;
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
      iVar11 = 0x20;
      *(undefined4 *)(plVar7 + 2) = 0x20;
    }
    else {
      iVar11 = 0x20;
      plVar7[1] = (longlong)plVar10;
      *(undefined4 *)(plVar7 + 2) = 0x20;
      *plVar7 = 0;
    }
  }
  else {
    iVar11 = (int)plVar7[2];
  }
  plVar7[1] = *plVar10;
  *(int *)(plVar7 + 2) = iVar11 + -1;
  *plVar10 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar10 + 1) = 0xff;
  local_res18 = 0;
  local_res20 = 0;
  *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
  *(undefined1 *)(plVar10 + 3) = 0;
  *plVar10 = (longlong)&PTR_FUN_1450f0658;
  plVar10[4] = 0;
  plVar10[2] = lVar5;
  lVar8 = plVar10[4];
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 0x48) = *(int *)(lVar8 + 0x48) + 1;
    UNLOCK();
  }
  FUN_140445100(plVar10,0,0xff,1);
  if (lVar8 != 0) {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x48);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle(lVar8);
    }
  }
  return lVar5;
}



// FUNCTION 142540ed0 BroadcastLevelLoadedStatus body=278 status=ok
// SIG undefined BroadcastLevelLoadedStatus(void)

void ULevelStreaming::BroadcastLevelLoadedStatus(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  longlong local_28 [2];
  
  uVar5 = 0;
  plVar6 = *(longlong **)(param_1 + 0x88);
  uVar7 = (longlong)*(int *)(param_1 + 0x90) & 0x1fffffffffffffff;
  if (plVar6 + *(int *)(param_1 + 0x90) < plVar6) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      lVar1 = *plVar6;
      if ((*(byte *)(lVar1 + 0xb6) & 2) == 0) {
        FSoftObjectPath::ToString(lVar1 + 0x38,local_38);
        puVar2 = (undefined8 *)FUN_1417006f0(local_28,local_38);
        if (*(int *)(puVar2 + 1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*puVar2;
        }
        puVar2 = (undefined8 *)FName::FName(local_res8,puVar4,1);
        *(undefined8 *)(lVar1 + 0x130) = *puVar2;
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        *(byte *)(lVar1 + 0xb6) = *(byte *)(lVar1 + 0xb6) | 2;
      }
      if (*(longlong *)(lVar1 + 0x130) == param_2) {
        lVar3 = lVar1 + 0xe0;
        if (param_3 == '\0') {
          lVar3 = lVar1 + 0xf0;
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar3,0);
      }
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar7);
  }
  return;
}



// FUNCTION 142540ff0 FUN_142540ff0 body=278 status=ok
// SIG undefined FUN_142540ff0(void)

void FUN_142540ff0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  longlong local_28 [2];
  
  uVar5 = 0;
  plVar6 = *(longlong **)(param_1 + 0x88);
  uVar7 = (longlong)*(int *)(param_1 + 0x90) & 0x1fffffffffffffff;
  if (plVar6 + *(int *)(param_1 + 0x90) < plVar6) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      lVar1 = *plVar6;
      if ((*(byte *)(lVar1 + 0xb6) & 2) == 0) {
        FSoftObjectPath::ToString(lVar1 + 0x38,local_38);
        puVar2 = (undefined8 *)FUN_1417006f0(local_28,local_38);
        if (*(int *)(puVar2 + 1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*puVar2;
        }
        puVar2 = (undefined8 *)FName::FName(local_res8,puVar4,1);
        *(undefined8 *)(lVar1 + 0x130) = *puVar2;
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        *(byte *)(lVar1 + 0xb6) = *(byte *)(lVar1 + 0xb6) | 2;
      }
      if (*(longlong *)(lVar1 + 0x130) == param_2) {
        lVar3 = lVar1 + 0x100;
        if (param_3 == '\0') {
          lVar3 = lVar1 + 0x110;
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar3,0);
      }
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar7);
  }
  return;
}



// FUNCTION 142541110 FUN_142541110 body=2324 status=ok
// SIG undefined FUN_142541110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142541110(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                       undefined8 param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_9d8 [32];
  int local_9b8;
  longlong *local_9a8 [2];
  longlong *local_998;
  undefined4 local_990;
  undefined4 local_988;
  undefined4 uStack_984;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  undefined1 local_978 [140];
  float local_8ec;
  undefined4 local_8a8;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  longlong *local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined4 local_820;
  undefined8 local_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined4 local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined8 local_7b0;
  undefined8 local_7a8;
  undefined4 local_7a0;
  undefined4 local_79c;
  longlong local_790;
  undefined4 local_788;
  undefined8 local_780;
  undefined8 local_778;
  undefined8 local_760;
  undefined8 local_758;
  undefined4 local_750;
  undefined4 local_74c;
  longlong local_740;
  undefined4 local_738;
  char local_730;
  undefined8 local_728;
  undefined4 local_720;
  undefined4 local_71c;
  undefined8 local_718;
  undefined4 local_710;
  ushort local_70c;
  undefined4 local_708;
  undefined4 local_704;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined1 local_6d8;
  undefined8 local_6d4;
  undefined4 local_6cc;
  undefined2 local_6c8;
  char local_6c6;
  longlong local_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 local_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 local_688;
  uint local_684;
  undefined1 local_680;
  undefined4 local_67c;
  undefined1 local_678 [1496];
  longlong local_a0;
  longlong local_90;
  undefined8 local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_9d8;
  uVar9 = 0;
  local_848 = 0;
  uStack_840 = 0;
  local_810 = _DAT_1468b5d78;
  uStack_808 = uRam00000001468b5d80;
  local_800 = _DAT_1468b5d78;
  uStack_7f8 = uRam00000001468b5d80;
  local_8a8 = 0;
  local_828 = 0;
  local_858 = 0;
  uStack_850 = 0;
  local_7f0 = _DAT_1464aa6c0;
  uStack_7e8 = _DAT_1464aa6c8;
  local_820 = 0xffffffff;
  local_7d8 = 0x42c80000;
  local_71c = 0xbf800000;
  local_6f8 = 0;
  uStack_6f0 = 0;
  local_838 = (longlong *)0x0;
  uStack_830 = 0;
  local_818 = 0;
  local_7e0 = 0;
  local_7d0 = 0;
  local_7c8 = 0;
  local_7b0 = 0;
  local_7a8 = 0;
  local_7a0 = 0xffffffff;
  local_79c = 0;
  local_790 = 0;
  local_788 = 0;
  local_730 = '\0';
  local_728 = 0xffffffffffffffff;
  local_720 = 0x3f800000;
  local_718 = 0;
  local_710 = 0;
  local_70c = 0x100;
  local_708 = 0x42b40000;
  local_704 = 0x42b40000;
  local_700 = 0;
  local_6e8 = 0;
  uStack_6e0 = 0;
  local_6d8 = 0;
  local_6d4 = 0;
  local_6cc = 0;
  local_6c8 = 1;
  local_6c6 = '\0';
  local_9b8 = param_7;
  local_9a8[0] = param_4;
  local_998 = param_3;
  cVar4 = FUN_142541a30(0,local_978,param_5,param_6);
  if (cVar4 == '\0') goto LAB_142541916;
  local_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6ac = 0;
  local_684 = local_684 & 0xfffffffe | 2;
  local_688 = 0x3faaaaab;
  uStack_6a8 = 0;
  uStack_6a4 = 0;
  local_6a0 = 0x42b40000;
  local_698 = 0x42b40000;
  uStack_694 = 0x44000000;
  uStack_690 = 0;
  uStack_68c = 0x4a000000;
  local_680 = 0;
  local_67c = 0;
  FUN_142741540(local_678);
  local_70 = local_70 & 0xfffffffe;
  local_78 = 0;
  (**(code **)(*param_1 + 0x280))(param_1,&local_6b8,param_7);
  *param_3 = local_6b8;
  *(undefined4 *)(param_3 + 1) = uStack_6b0;
  *param_4 = CONCAT44(uStack_6a8,uStack_6ac);
  *(undefined4 *)(param_4 + 1) = uStack_6a4;
  lVar8 = param_1[6];
  local_708 = local_6a0;
  local_70c = CONCAT11((char)(local_684 >> 1),(undefined1)local_70c) & 0x1ff;
  local_704 = local_698;
  local_6c8 = CONCAT11(local_6c8._1_1_,*(undefined1 *)(lVar8 + 0x828));
  local_838 = param_2;
  if ((*(char *)(lVar8 + 0x580) == '\0') || (*(char *)(lVar8 + 0x828) == '\0')) {
    if (local_730 != '\0') {
      local_730 = 0;
      local_738 = 0;
      if (local_740 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_780);
    }
    local_780 = 0;
    local_778 = 0;
    local_760 = 0;
    local_758 = 0;
    local_750 = 0xffffffff;
    local_74c = 0;
    local_740 = 0;
    local_738 = 0;
    local_730 = '\x01';
  }
  else {
    FUN_1426fd5f0(lVar8,param_3,&local_7d0);
  }
  (**(code **)(*(longlong *)param_1[6] + 0xeb8))((longlong *)param_1[6],&local_780);
  FUN_14276fbc0(local_8ec < 1.0,param_2 + 5);
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar8 + 0x38) < DAT_146afcd30) &&
     (_Init_thread_header(&DAT_146afcd30), DAT_146afcd30 == -1)) {
    uVar11 = FCommandLine::Get();
    DAT_146afcd2c = FParse::Param(uVar11,L"GbxShaderPreCache");
    _Init_thread_footer(&DAT_146afcd30);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_146afcd38) &&
     (_Init_thread_header(&DAT_146afcd38), DAT_146afcd38 == -1)) {
    uVar11 = FCommandLine::Get();
    DAT_146afcd34 = FParse::Param(uVar11,L"GbxNoShaderPreCache");
    _Init_thread_footer(&DAT_146afcd38);
  }
  lVar8 = DAT_146afcaf8;
  if (DAT_146afcd34 == '\0') {
    cVar4 = FUN_1415ad720(&DAT_1468e2448);
    lVar12 = 4;
    if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar5 = GetCurrentThreadId();
      uVar7 = 4;
      if (DVar5 == DAT_1468c21c0) goto LAB_142541522;
    }
    else {
LAB_142541522:
      uVar7 = uVar9;
    }
    lVar3 = DAT_146afcb40;
    param_4 = local_9a8[0];
    if (((0 < *(int *)(uVar7 + lVar8)) || (DAT_146afcd2c != '\0')) && (param_2[4] != 0)) {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar5 = GetCurrentThreadId();
        uVar7 = 4;
        if (DVar5 == DAT_1468c21c0) goto LAB_142541578;
      }
      else {
LAB_142541578:
        uVar7 = uVar9;
      }
      lVar8 = DAT_146afcb28;
      uVar13 = 0;
      if (-1 < (int)*(uint *)(lVar3 + uVar7)) {
        uVar13 = *(uint *)(lVar3 + uVar7);
      }
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar5 = GetCurrentThreadId();
        uVar7 = 4;
        if (DVar5 == DAT_1468c21c0) goto LAB_1425415bc;
      }
      else {
LAB_1425415bc:
        uVar7 = uVar9;
      }
      lVar3 = DAT_146afcb58;
      uVar17 = 0;
      if (-1 < (int)*(uint *)(uVar7 + lVar8)) {
        uVar17 = *(uint *)(uVar7 + lVar8);
      }
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar5 = GetCurrentThreadId();
        uVar7 = 4;
        if (DVar5 == DAT_1468c21c0) goto LAB_142541602;
      }
      else {
LAB_142541602:
        uVar7 = uVar9;
      }
      uVar15 = 0;
      if (-1 < (int)*(uint *)(uVar7 + lVar3)) {
        uVar15 = *(uint *)(uVar7 + lVar3);
      }
      uVar6 = (**(code **)(*(longlong *)param_2[4] + 0x290))();
      lVar8 = DAT_146afcb10;
      if (uVar6 < uVar17) {
        local_6c8 = CONCAT11(1,(undefined1)local_6c8);
      }
      else if (uVar6 < uVar17 + uVar13) {
        local_6c6 = '\x01';
      }
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
        lVar12 = 0;
      }
      param_4 = local_9a8[0];
      param_3 = local_998;
      if (*(int *)(lVar8 + lVar12) != 0) {
        local_988 = DAT_1464aa6e0;
        uStack_984 = DAT_1464aa6e4;
        uStack_980 = DAT_1464aa6e8;
        uStack_97c = DAT_1464aa6ec;
        if ((local_6c6 == '\0') && (local_6c8._1_1_ == '\0')) {
          if (uVar6 < uVar15) {
            local_800 = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
            uStack_7f8 = CONCAT44(1.0 - (float)(int)(uVar6 - (uVar17 + uVar13)) / (float)uVar15,
                                  DAT_1464aa6e8);
          }
        }
        else {
          local_800 = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
          uStack_7f8 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
        }
      }
    }
  }
  uVar7 = 0;
  lVar8 = operator_new(0x1aa0);
  uVar9 = uVar7;
  if (lVar8 != 0) {
    uVar9 = FUN_142742170(lVar8,local_978);
  }
  *(longlong *)(uVar9 + 0x900) = *param_3;
  *(int *)(uVar9 + 0x908) = (int)param_3[1];
  *(longlong *)(uVar9 + 0x90c) = *param_4;
  *(int *)(uVar9 + 0x914) = (int)param_4[1];
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(ulonglong *)(*param_2 + (longlong)iVar1 * 8) = uVar9;
  local_998 = (longlong *)*param_3;
  local_990 = (undefined4)param_3[1];
  FUN_14275edd0(uVar9,&local_998);
  if (((((longlong *)param_1[6])[0xa5] != 0) &&
      (cVar4 = (**(code **)(*(longlong *)param_1[6] + 0xec0))(), cVar4 != '\0')) &&
     (FUN_1426e1c50(*(undefined8 *)(param_1[6] + 0x528),local_9a8,&local_998), uVar14 = uVar7,
     uVar16 = uVar7, 0 < (int)local_998[1])) {
    do {
      FUN_142753e20(uVar9,(longlong)(int)uVar14 * 0x600 + *local_9a8[0],
                    *(undefined4 *)(*local_998 + uVar16),1);
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar16 = uVar16 + 4;
    } while ((int)uVar13 < (int)local_998[1]);
  }
  FUN_142753e20(uVar9,local_678,local_67c,1);
  plVar2 = *(longlong **)(param_1[6] + 0x528);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x7c8))(plVar2,uVar9 + 0x1240);
  }
  FUN_14274b020(uVar9,local_978);
  cVar4 = FUN_142710360(param_1[6],0);
  if ((cVar4 != '\0') || (uVar13 = 0, (local_70 & 1) == 0)) {
    uVar13 = 0x800000;
  }
  puVar10 = (uint *)(**(code **)(*(longlong *)(param_1[0xe] + 0x28) + 0x38))();
  *puVar10 = *puVar10 & 0xff7fffff;
  *puVar10 = *puVar10 | uVar13;
  uVar14 = uVar7;
  if (0 < (int)param_2[0x11]) {
    do {
      (**(code **)(**(longlong **)(uVar7 + param_2[0x10]) + 0x10))
                (*(longlong **)(uVar7 + param_2[0x10]),param_2,uVar9);
      uVar13 = (int)uVar14 + 1;
      uVar7 = uVar7 + 0x10;
      uVar14 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)param_2[0x11]);
  }
  if (((*(char *)((longlong)param_2 + 0x4c) != '\0') && ((int)param_2[9] != 0)) && (param_7 == 3)) {
    FUN_142550a40(param_2,uVar9);
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
LAB_142541916:
  if (local_730 != '\0') {
    local_730 = '\0';
    local_738 = 0;
    if (local_740 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_780);
  }
  local_788 = 0;
  if (local_790 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_7d0);
  return uVar9;
}



// FUNCTION 142541a30 FUN_142541a30 body=795 status=ok
// SIG undefined FUN_142541a30(void)

ulonglong FUN_142541a30(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                       int param_5)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong in_RAX;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  
  if ((((param_1[6] == 0) || (*(float *)(param_1 + 0x10) <= 0.0)) ||
      (*(float *)((longlong)param_1 + 0x84) <= 0.0)) || (param_3 == (longlong *)0x0)) {
LAB_142541d29:
    return in_RAX & 0xffffffffffffff00;
  }
  in_RAX = (**(code **)(*param_1 + 0x2d0))(param_1,param_3,param_5,param_2);
  if ((((char)in_RAX == '\0') || (*(int *)(param_2 + 0x130) < 0)) ||
     ((*(int *)(param_2 + 0x134) < 0 ||
      ((uVar4 = *(int *)(param_2 + 0x138) - *(int *)(param_2 + 0x130), in_RAX = (ulonglong)uVar4,
       (int)uVar4 < 1 ||
       (uVar4 = *(int *)(param_2 + 0x13c) - *(int *)(param_2 + 0x134), in_RAX = (ulonglong)uVar4,
       (int)uVar4 < 1)))))) goto LAB_142541d29;
  lVar7 = param_1[6];
  lVar9 = *(longlong *)(lVar7 + 0x528);
  if (lVar9 != 0) {
    if ((*(byte *)(lVar9 + 0x2c40) & 4) != 0) {
      uVar8 = *(undefined8 *)(lVar9 + 0x48c);
      *(undefined8 *)(param_2 + 0x178) = *(undefined8 *)(lVar9 + 0x484);
      *(undefined8 *)(param_2 + 0x180) = uVar8;
      fVar1 = *(float *)(*(longlong *)(param_1[6] + 0x528) + 0x494);
      fVar10 = 0.0;
      if ((0.0 <= fVar1) && (fVar10 = fVar1, 1.0 <= fVar1)) {
        fVar10 = 1.0;
      }
      *(float *)(param_2 + 0x184) = fVar10;
      lVar7 = param_1[6];
    }
    lVar9 = *(longlong *)(lVar7 + 0x528);
    if ((*(byte *)(lVar9 + 0x2c40) & 0x10) != 0) {
      uVar6 = *(undefined4 *)(lVar9 + 0x49c);
      uVar5 = *(undefined4 *)(lVar9 + 0x4a0);
      *(undefined4 *)(param_2 + 0x188) = *(undefined4 *)(lVar9 + 0x498);
      *(undefined4 *)(param_2 + 0x18c) = uVar6;
      *(undefined4 *)(param_2 + 400) = uVar5;
      *(undefined4 *)(param_2 + 0x194) = 0x3f800000;
      lVar7 = param_1[6];
    }
    *(byte *)(param_2 + 0x26c) = (byte)(*(uint *)(*(longlong *)(lVar7 + 0x528) + 0x2c40) >> 10) & 1;
  }
  if (-1 < param_5) {
    if (param_5 < 2) {
      lVar9 = param_1[0x16];
      goto LAB_142541bf4;
    }
    if (param_5 == 2) {
      lVar9 = *(longlong *)(param_1[0x1a] + 8);
      goto LAB_142541bf4;
    }
    if (param_5 == 3) {
      lVar9 = param_1[0x1d];
      goto LAB_142541bf4;
    }
  }
  lVar9 = *(longlong *)(param_1[0x1a] + -0x70 + (longlong)param_5 * 0x28);
LAB_142541bf4:
  *(longlong *)(param_2 + 0x148) = lVar9;
  uVar8 = (**(code **)(*(longlong *)param_1[6] + 0x758))();
  *(undefined8 *)(param_2 + 0x150) = uVar8;
  *(int *)(param_2 + 0x158) = (int)param_1[0x21];
  *(undefined8 *)(param_2 + 0x160) = param_4;
  uVar2 = DAT_1464aa6ec;
  uVar5 = DAT_1464aa6e8;
  uVar6 = DAT_1464aa6e4;
  *(undefined4 *)(param_2 + 0x168) = DAT_1464aa6e0;
  *(undefined4 *)(param_2 + 0x16c) = uVar6;
  *(undefined4 *)(param_2 + 0x170) = uVar5;
  *(undefined4 *)(param_2 + 0x174) = uVar2;
  *(undefined4 *)(param_2 + 600) = *(undefined4 *)(param_1[6] + 0x558);
  *(int *)(param_2 + 0x198) = param_5;
  lVar9 = AActor::GetWorldSettings(param_1[6]);
  *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(lVar9 + 0x588);
  cVar3 = (**(code **)(*param_3 + 0x58))(param_3);
  if (cVar3 == '\0') {
    uVar6 = (**(code **)(*param_3 + 200))(param_3);
    uVar5 = (**(code **)(*param_3 + 0xc0))(param_3);
  }
  else {
    uVar5 = 0xffffffff;
    uVar6 = 0xffffffff;
  }
  *(undefined4 *)(param_2 + 0x250) = uVar5;
  *(undefined4 *)(param_2 + 0x254) = uVar6;
  lVar9 = (**(code **)(*(longlong *)param_1[6] + 0x148))();
  *(undefined8 *)(param_2 + 0x260) = *(undefined8 *)(lVar9 + 0x7d4);
  *(undefined4 *)(param_2 + 0x268) = *(undefined4 *)(lVar9 + 0x7dc);
  *(longlong *)(param_2 + 0x278) = param_1[6];
  uVar6 = (**(code **)(*(longlong *)param_1[6] + 0xeb0))();
  *(undefined4 *)(param_2 + 0x280) = uVar6;
  lVar9 = UCollisionProfile::Get();
  if (lVar9 != 0) {
    *(uint *)(param_2 + 0x284) = ~*(uint *)(lVar9 + 0x58);
    *(undefined4 *)(param_2 + 0x288) = *(undefined4 *)(lVar9 + 0x5c);
    *(undefined4 *)(param_2 + 0x28c) = *(undefined4 *)(lVar9 + 0x60);
  }
  lVar9 = param_1[6];
  uVar8 = *(undefined8 *)(lVar9 + 0x810);
  *(undefined8 *)(param_2 + 0x290) = *(undefined8 *)(lVar9 + 0x808);
  *(undefined8 *)(param_2 + 0x298) = uVar8;
  uVar8 = *(undefined8 *)(lVar9 + 0x820);
  *(undefined8 *)(param_2 + 0x2a0) = *(undefined8 *)(lVar9 + 0x818);
  *(undefined8 *)(param_2 + 0x2a8) = uVar8;
  return CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
}



// FUNCTION 142541d70 CanAddToCluster body=197 status=ok
// SIG undefined CanAddToCluster(void)

ulonglong FActorClusterReferenceProcessor::CanAddToCluster(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = UObjectBaseUtility::IsIn(param_2,*(undefined8 *)(param_1 + 0x18));
  if ((char)uVar2 != '\0') {
    uVar2 = UObjectBaseUtility::IsIn(param_2,*(undefined8 *)(param_1 + 0x10));
    if ((char)uVar2 != '\0') {
      lVar3 = FUN_1429a0270();
      iVar1 = *(int *)(lVar3 + 0x90);
      uVar2 = (longlong)iVar1;
      if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
         (uVar2 = *(ulonglong *)(param_2[2] + 0x88),
         *(longlong *)(uVar2 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
        uVar2 = uVar2 & 0xffffffffffffff00;
      }
      else {
        uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
      }
      if ((char)uVar2 == '\0') {
        lVar3 = FUN_142a2f930();
        iVar1 = *(int *)(lVar3 + 0x90);
        uVar2 = (longlong)iVar1;
        if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
           (uVar2 = *(ulonglong *)(param_2[2] + 0x88),
           *(longlong *)(uVar2 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
          uVar2 = uVar2 & 0xffffffffffffff00;
        }
        else {
          uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
        }
        if ((char)uVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142541e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*param_2 + 0x20))(param_2);
          return uVar2;
        }
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 142541e40 FUN_142541e40 body=9 status=ok
// SIG undefined FUN_142541e40(void)

void FUN_142541e40(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  BeginCleanup();
  return;
}



// FUNCTION 142541e50 FUN_142541e50 body=343 status=ok
// SIG undefined FUN_142541e50(void)

void FUN_142541e50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  
  plVar10 = *(longlong **)(param_1 + 0x160);
  plVar1 = plVar10 + *(int *)(param_1 + 0x168);
  for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
    lVar2 = *plVar10;
    if (*(longlong *)(param_1 + 0xf8) != lVar2) {
      iVar9 = *(int *)(lVar2 + 0xa8);
      iVar6 = 0;
      iVar7 = iVar9 + -1;
      lVar8 = (longlong)iVar7;
      if (1 < lVar8) {
        do {
          lVar3 = *(longlong *)(lVar2 + 0xa0);
          if (*(longlong *)(lVar3 + lVar8 * 8) == 0) {
            iVar6 = iVar6 + 1;
          }
          else if (0 < iVar6) {
            iVar4 = *(int *)(lVar2 + 0xa8);
            iVar5 = ((iVar4 - iVar7) - iVar6) + -1;
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar3 + (longlong)iVar9 * 8),
                         (void *)(lVar3 + (longlong)(iVar6 + 1 + iVar7) * 8),(longlong)iVar5 << 3);
              iVar4 = *(int *)(lVar2 + 0xa8);
            }
            *(int *)(lVar2 + 0xa8) = iVar4 - iVar6;
            iVar6 = 0;
          }
          iVar7 = iVar7 + -1;
          iVar9 = iVar9 + -1;
          lVar8 = lVar8 + -1;
        } while (1 < lVar8);
        if (0 < iVar6) {
          iVar9 = *(int *)(lVar2 + 0xa8);
          iVar7 = (iVar9 - iVar6) + -2;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar2 + 0xa0) + 0x10),
                       (void *)(*(longlong *)(lVar2 + 0xa0) + (longlong)(iVar6 + 2) * 8),
                       (longlong)iVar7 << 3);
            iVar9 = *(int *)(lVar2 + 0xa8);
          }
          *(int *)(lVar2 + 0xa8) = iVar9 - iVar6;
        }
      }
    }
  }
  return;
}



// FUNCTION 142541fb0 FUN_142541fb0 body=128 status=ok
// SIG undefined FUN_142541fb0(void)

void FUN_142541fb0(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  bVar1 = *(byte *)(param_2 + 0xc9) & 6;
  if (bVar1 == 2) {
    FWeakObjectPtr::operator=(&local_res10);
    param_1 = param_1 + 0x220;
  }
  else {
    if (bVar1 != 4) {
      *(byte *)(param_2 + 0xc9) = *(byte *)(param_2 + 0xc9) & 0xf9;
      return;
    }
    FWeakObjectPtr::operator=(&local_res10);
    param_1 = param_1 + 0x270;
  }
  local_res18[0] = local_res10;
  TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Remove(param_1,local_res18);
  *(byte *)(param_2 + 0xc9) = *(byte *)(param_2 + 0xc9) & 0xf9;
  return;
}



// FUNCTION 142542030 CombineAdjustments body=567 status=ok
// SIG undefined CombineAdjustments(void)

float * CombineAdjustments(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar1 = *param_2;
  if (((fVar1 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
    fVar1 = param_3[2];
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    param_1[2] = fVar1;
    return param_1;
  }
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar8 = fVar4 * fVar4 + fVar1 * fVar1 + fVar5 * fVar5;
  fVar6 = (fVar2 * fVar4 + *param_3 * fVar1 + fVar3 * fVar5) / fVar8;
  fVar12 = fVar1 * fVar6;
  fVar13 = fVar4 * fVar6;
  fVar6 = fVar5 * fVar6;
  fVar9 = DAT_1468b5d90;
  fVar14 = DAT_1468b5d94;
  fVar10 = DAT_1468b5d98;
  if ((0.0001 <= SQRT(fVar8)) &&
     (fVar7 = fVar13 * fVar13 + fVar12 * fVar12 + fVar6 * fVar6, fVar9 = fVar12, fVar14 = fVar13,
     fVar10 = fVar6, fVar8 < fVar7)) {
    auVar11 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar9 = auVar11._0_4_;
    fVar9 = fVar9 + fVar9 * (0.5 - fVar7 * 0.5 * fVar9 * fVar9);
    fVar10 = (fVar9 + fVar9 * (0.5 - fVar7 * 0.5 * fVar9 * fVar9)) * SQRT(fVar8);
    fVar9 = fVar12 * fVar10;
    fVar14 = fVar13 * fVar10;
    fVar10 = fVar6 * fVar10;
  }
  *param_1 = (*param_3 - fVar9) + fVar1;
  param_1[1] = (fVar2 - fVar14) + fVar4;
  param_1[2] = (fVar3 - fVar10) + fVar5;
  return param_1;
}



// FUNCTION 142542270 FUN_142542270 body=920 status=ok
// SIG undefined FUN_142542270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142542270(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_188 [32];
  int *local_168;
  longlong *local_160;
  longlong *local_158;
  undefined8 *local_150;
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_138 [4];
  undefined8 local_118;
  undefined8 uStack_110;
  int local_108 [4];
  undefined1 local_f8 [32];
  longlong local_d8 [9];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  uVar2 = DAT_146533354;
  uVar5 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if ((param_1 == 0) || (param_3 == (longlong *)0x0)) {
LAB_14254255a:
    return uVar5 & 0xffffffffffffff00;
  }
  local_58 = uVar5;
  uVar4 = (**(code **)(*param_3 + 0x4f8))(param_3);
  (**(code **)(*param_3 + 0x748))(param_3,local_108,uVar2 ^ 0x80000000);
  local_168 = (int *)param_2;
  if (local_108[0] == 1) {
    lVar6 = FUN_14290f330();
    iVar1 = *(int *)(lVar6 + 0x90);
    uVar5 = (longlong)iVar1;
    if ((*(int *)(param_3[2] + 0x90) < iVar1) ||
       (uVar5 = *(ulonglong *)(param_3[2] + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar6 + 0x88)) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((char)uVar5 == '\0') {
      if ((*(byte *)(param_3 + 0x17) & 1) == 0) goto LAB_14254255a;
      local_138[0] = 0;
      local_138[1] = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146afcb88) &&
         (_Init_thread_header(&DAT_146afcb88), DAT_146afcb88 == -1)) {
        FName::FName(&DAT_146afcb80,"ComponentEncroachesBlockingGeometry_NoAdjustment",1);
        _Init_thread_footer(&DAT_146afcb88);
      }
      FUN_1422ffb20(local_d8,DAT_146afcb80,local_148,0);
      FUN_1426d3dd0(local_f8);
      FUN_1426ea8d0(local_f8,2);
      (**(code **)(*param_3 + 0x740))(param_3,local_d8,local_f8);
      FCollisionQueryParams::AddIgnoredActors(local_d8,param_5);
      local_144 = *(undefined4 *)(param_4 + 2);
      local_140 = *(undefined4 *)((longlong)param_4 + 0x14);
      local_13c = *(undefined4 *)(param_4 + 3);
      local_118 = *param_4;
      uStack_110 = param_4[1];
      local_150 = &DAT_146aefe88;
      local_158 = local_d8;
      local_168 = (int *)&local_118;
      local_160 = (longlong *)CONCAT44(local_160._4_4_,uVar4);
      bVar3 = UWorld::ComponentOverlapMultiByChannel(param_1,local_138,param_3,&local_144);
      if (local_70 != 0) {
        FMemory::Free();
      }
      bVar7 = local_90 != 0;
      local_90 = local_138[0];
      if (bVar7) {
        FMemory::Free();
        local_90 = local_138[0];
      }
      goto LAB_142542454;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afcb98) && (_Init_thread_header(&DAT_146afcb98), DAT_146afcb98 == -1))
  {
    FName::FName(&DAT_146afcb90,"ComponentEncroachesBlockingGeometry_NoAdjustment",1);
    _Init_thread_footer(&DAT_146afcb98);
  }
  FUN_1422ffb20(local_d8,DAT_146afcb90,local_148,0);
  FUN_1426d3dd0(local_138);
  FUN_1426ea8d0(local_138,2);
  (**(code **)(*param_3 + 0x740))(param_3,local_d8,local_138);
  FCollisionQueryParams::AddIgnoredActors(local_d8,param_5);
  local_144 = *(undefined4 *)(param_4 + 2);
  local_140 = *(undefined4 *)((longlong)param_4 + 0x14);
  local_13c = *(undefined4 *)(param_4 + 3);
  local_158 = local_138;
  local_118 = *param_4;
  uStack_110 = param_4[1];
  local_160 = local_d8;
  local_168 = local_108;
  bVar3 = UWorld::OverlapAnyTestByChannel(param_1,&local_144,&local_118,uVar4);
  if (local_70 != 0) {
    FMemory::Free();
  }
LAB_142542454:
  if (local_90 != 0) {
    FMemory::Free();
  }
  return (ulonglong)bVar3;
}



// FUNCTION 142542610 FUN_142542610 body=1592 status=ok
// SIG undefined FUN_142542610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142542610(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                       float *param_5,undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  int *local_1c0;
  undefined1 *local_1b8;
  undefined8 *local_1b0;
  byte local_1a8 [8];
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined8 local_158 [4];
  undefined8 local_138;
  undefined8 uStack_130;
  int local_128 [4];
  undefined1 local_118 [16];
  undefined1 local_108 [72];
  longlong local_c0;
  longlong local_a0;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_1a0 = param_6;
  *(undefined8 *)param_5 = _DAT_1468b5d90;
  fVar4 = DAT_1468b5d98;
  param_5[2] = DAT_1468b5d98;
  uVar3 = DAT_146533354;
  if ((param_1 == 0) || (param_3 == (longlong *)0x0)) {
    return (ulonglong)(uint3)((uint)fVar4 >> 8) << 8;
  }
  uVar11 = 0;
  bVar1 = true;
  iVar10 = 0;
  local_168 = 0;
  local_160 = 0;
  local_178 = param_2;
  local_190 = (**(code **)(*param_3 + 0x4f8))(param_3);
  (**(code **)(*param_3 + 0x748))(param_3,local_128,uVar3 ^ 0x80000000);
  if (local_128[0] == 1) {
    lVar8 = FUN_14290f330();
    bVar2 = true;
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar2 = false;
    }
    if (bVar2) goto LAB_14254281a;
    if ((*(byte *)(param_3 + 0x17) & 1) == 0) goto LAB_142542b71;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146afcba8) &&
       (_Init_thread_header(&DAT_146afcba8), DAT_146afcba8 == -1)) {
      FName::FName(&DAT_146afcba0,"ComponentEncroachesBlockingGeometry_WithAdjustment",1);
      _Init_thread_footer(&DAT_146afcba8);
    }
    local_1c8 = (undefined8 *)local_178;
    FUN_1422ffb20(local_108,DAT_146afcba0,local_1a8,0);
    FUN_1426d3dd0(local_158);
    FUN_1426ea8d0(local_158,2);
    (**(code **)(*param_3 + 0x740))(param_3,local_108,local_158);
    FCollisionQueryParams::AddIgnoredActors(local_108,local_1a0);
    local_1a0 = param_4[2];
    local_198 = *(undefined4 *)(param_4 + 3);
    local_188 = *param_4;
    uStack_180 = param_4[1];
    local_1b0 = &DAT_146aefe88;
    local_1b8 = local_108;
    local_1c0 = (int *)CONCAT44(local_1c0._4_4_,local_190);
    local_1c8 = &local_188;
    bVar5 = UWorld::ComponentOverlapMultiByChannel(param_1,&local_168,param_3,&local_1a0);
    bVar1 = false;
  }
  else {
LAB_14254281a:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146afcbb8) &&
       (_Init_thread_header(&DAT_146afcbb8), DAT_146afcbb8 == -1)) {
      FName::FName(&DAT_146afcbb0,"ComponentEncroachesBlockingGeometry_WithAdjustment",1);
      _Init_thread_footer(&DAT_146afcbb8);
    }
    local_1c8 = (undefined8 *)local_178;
    FUN_1422ffb20(local_108,DAT_146afcbb0,local_1a8,0);
    FUN_1426d3dd0(local_158);
    FUN_1426ea8d0(local_158,2);
    (**(code **)(*param_3 + 0x740))(param_3,local_108,local_158);
    FCollisionQueryParams::AddIgnoredActors(local_108,local_1a0);
    local_1a0 = param_4[2];
    local_198 = *(undefined4 *)(param_4 + 3);
    local_1b0 = local_158;
    local_188 = *param_4;
    uStack_180 = param_4[1];
    local_1b8 = local_108;
    local_1c0 = local_128;
    local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,local_190);
    bVar5 = UWorld::OverlapMultiByChannel(param_1,&local_168,&local_1a0,&local_188);
  }
  uVar11 = (ulonglong)bVar5;
  local_1a8[0] = bVar5;
  if (local_a0 != 0) {
    FMemory::Free();
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  if ((bVar5 != 0) && (bVar1)) {
    local_188 = 0;
    uStack_180 = 0;
    iVar12 = iVar10;
    if (0 < (int)local_160) {
      do {
        plVar9 = (longlong *)FWeakObjectPtr::Get(local_168 + ((longlong)iVar10 * 3 + 1) * 8);
        iVar13 = iVar12;
        if ((plVar9 != (longlong *)0x0) &&
           (iVar7 = (**(code **)(*plVar9 + 0x4f0))(plVar9,local_190), iVar7 == 2)) {
          (**(code **)(*param_3 + 0x748))(param_3,local_118,0);
          local_1a0 = param_4[2];
          local_198 = *(undefined4 *)(param_4 + 3);
          local_1c8 = &local_138;
          local_138 = *param_4;
          uStack_130 = param_4[1];
          cVar6 = (**(code **)(*plVar9 + 0x878))(plVar9,&local_188,local_118,&local_1a0);
          if (cVar6 == '\0') {
            uVar11 = 1;
            *(undefined8 *)param_5 = _DAT_1468b5d90;
            param_5[2] = DAT_1468b5d98;
            goto LAB_142542b71;
          }
          *param_5 = (float)local_188 * uStack_180._4_4_ + *param_5;
          param_5[1] = local_188._4_4_ * uStack_180._4_4_ + param_5[1];
          param_5[2] = (float)uStack_180 * uStack_180._4_4_ + param_5[2];
          iVar13 = iVar12 + 1;
          if (ABS(uStack_180._4_4_) <= 1e-08) {
            (**(code **)(*param_3 + 0x748))(param_3,local_158);
            local_178 = param_4[2];
            local_170 = *(undefined4 *)(param_4 + 3);
            local_1c8 = &local_138;
            local_138 = *param_4;
            uStack_130 = param_4[1];
            cVar6 = (**(code **)(*plVar9 + 0x878))(plVar9,&local_188,local_158,&local_178);
            iVar13 = iVar12;
            if (cVar6 != '\0') {
              *param_5 = (float)local_188 * uStack_180._4_4_ + *param_5;
              param_5[1] = local_188._4_4_ * uStack_180._4_4_ + param_5[1];
              param_5[2] = (float)uStack_180 * uStack_180._4_4_ + param_5[2];
              iVar13 = iVar12 + 1;
            }
          }
        }
        iVar10 = iVar10 + 1;
        iVar12 = iVar13;
      } while (iVar10 < (int)local_160);
      if (iVar13 != 0) {
        uVar11 = (ulonglong)local_1a8[0];
        goto LAB_142542b71;
      }
    }
    uVar11 = 0;
    *(undefined8 *)param_5 = _DAT_1468b5d90;
    param_5[2] = DAT_1468b5d98;
  }
LAB_142542b71:
  if (local_168 != 0) {
    FMemory::Free();
  }
  return uVar11;
}



// FUNCTION 142542c50 FUN_142542c50 body=829 status=ok
// SIG undefined FUN_142542c50(void)

void FUN_142542c50(void)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  void *_Src;
  int iVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  uint local_c8;
  uint uStack_c4;
  uint *puStack_c0;
  undefined4 local_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined2 *local_a8;
  uint local_a0;
  int local_9c;
  longlong *local_98;
  undefined8 uStack_90;
  uint *local_88;
  uint uStack_80;
  int iStack_7c;
  uint local_78;
  undefined4 uStack_74;
  void *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  bVar3 = true;
  puVar14 = (undefined2 *)0x0;
  local_a8 = (undefined2 *)0x0;
  local_9c = 0;
  local_98 = (longlong *)FUN_1425473a0();
  iVar8 = (int)local_98[5];
  local_c8 = 0;
  uStack_c4 = 1;
  puStack_c0 = (uint *)(local_98 + 2);
  iStack_b4 = 0;
  uStack_b0 = 0;
  if (iVar8 != 0) {
    puVar12 = (uint *)local_98[4];
    if ((uint *)local_98[4] == (uint *)0x0) {
      puVar12 = puStack_c0;
    }
    uVar1 = *puVar12;
    puVar7 = puVar14;
    puVar10 = puVar14;
    while (uVar1 == 0) {
      iVar5 = (int)puVar7;
      uStack_b0 = (int)puVar10 + 0x20;
      puVar10 = (undefined2 *)(ulonglong)uStack_b0;
      local_c8 = iVar5 + 1;
      puVar7 = (undefined2 *)(ulonglong)local_c8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142542d3f;
      uVar1 = puVar12[(longlong)iVar5 + 1];
    }
    uStack_c4 = -uVar1 & uVar1;
    iVar5 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_b4 = (uStack_b0 - iVar5) + 0x1f;
    if (iVar8 < iStack_b4) {
LAB_142542d3f:
      iStack_b4 = iVar8;
    }
  }
  local_b8 = 0xffffffff;
  uStack_90 = CONCAT44(uStack_c4,local_c8);
  uStack_38 = 0xffffffff;
  iStack_34 = iStack_b4;
  uStack_30 = uStack_b0;
  uStack_2c = uStack_ac;
  uStack_80 = 0xffffffff;
  iStack_7c = iStack_b4;
  local_78 = uStack_b0;
  uStack_74 = uStack_ac;
  puVar7 = &DAT_143f3eda8;
  puVar10 = puVar14;
  local_88 = puStack_c0;
  local_50 = local_98;
  uStack_48 = uStack_90;
  puStack_40 = puStack_c0;
  if (iStack_b4 < iVar8) {
    do {
      plVar4 = local_98;
      lVar2 = *local_98;
      lVar9 = (longlong)iStack_7c * 0x30;
      dVar18 = (double)*(float *)(lVar9 + 0x20 + lVar2);
      dVar17 = (double)*(float *)(lVar9 + 0x1c + lVar2);
      dVar16 = (double)*(float *)(lVar9 + 0x18 + lVar2);
      FString::PrintfImpl(&local_60,L"%f %f %f %f %f %f",(double)*(float *)(lVar9 + 8 + lVar2),
                          (double)*(float *)(lVar9 + 0xc + lVar2),
                          (double)*(float *)(lVar9 + 0x10 + lVar2),dVar16,dVar17,dVar18);
      puVar15 = &DAT_143f3eda8;
      if (local_58 != 0) {
        puVar15 = local_60;
      }
      puVar6 = (undefined8 *)FName::ToString(*plVar4 + lVar9,&local_c8);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*puVar6;
      }
      puVar11 = (undefined2 *)&DAT_1450ee388;
      if (bVar3) {
        puVar11 = &DAT_143f3eda8;
      }
      FString::PrintfImpl(&local_70,L"%s%s %s",puVar11,puVar13,puVar15,dVar16,dVar17,dVar18);
      _Src = local_70;
      if (local_68 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = local_68 + -1;
      }
      if (iVar8 != 0) {
        iVar5 = (int)puVar10;
        local_a0 = iVar5 + (uint)(iVar5 == 0) + iVar8;
        if (local_9c < (int)local_a0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,puVar10);
          puVar14 = local_a8;
        }
        puVar10 = (undefined2 *)(ulonglong)local_a0;
        _guard_xfg_dispatch_icall_nop
                  (puVar14 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)),_Src,(longlong)iVar8 * 2);
        (puVar14 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)))[iVar8] = 0;
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        FMemory::Free();
      }
      if (local_60 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      bVar3 = false;
      uStack_80 = uStack_80 & ~uStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if ((int)puVar10 != 0) {
      puVar7 = puVar14;
    }
  }
  FUN_1416cf5b0(puVar7);
  if (puVar14 != (undefined2 *)0x0) {
    FMemory::Free(puVar14);
  }
  return;
}



// FUNCTION 142542f90 FUN_142542f90 body=799 status=ok
// SIG undefined FUN_142542f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142542f90(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6 [6];
  longlong local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  int local_1c0 [2];
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  int *local_1a0;
  longlong local_198;
  int **local_190;
  longlong local_188;
  undefined8 local_100;
  _RTL_CRITICAL_SECTION local_78;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  iVar2 = *(int *)(param_1 + 0xc);
  uVar11 = 0;
  uVar8 = uVar11;
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar7 = iVar2 >> 0x1f & 0xffff;
    uVar4 = iVar2 + uVar7;
    uVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
  }
  if ((*(int *)(uVar8 + 0xc) == 0) && ((*(byte *)(uVar8 + 0xb) & 1) == 0)) {
    iVar5 = FUObjectClusterContainer::AllocateCluster(&DAT_1469e8f10,iVar2);
    lVar9 = (longlong)iVar5 * 0x50 + DAT_1469e8f10;
    if (*(int *)(lVar9 + 0x14) < 0x40) {
      TArray<float,FDefaultAllocator>::ResizeTo(lVar9 + 8,0x40);
    }
    local_1b0 = *(undefined8 *)(param_1 + 0x20);
    local_1c0[0] = iVar2;
    local_1b8 = lVar9;
    local_1a8 = UObjectBaseUtility::GetOutermost();
    if (DAT_1469e76c0 == 0) {
      DAT_1469e76c0 = FUN_1417380b0();
    }
    local_1a0 = local_1c0;
    local_190 = &local_1a0;
    local_100 = 0;
    local_198 = DAT_1469e76c0;
    local_188 = DAT_1469e76c0;
    InitializeCriticalSection(&local_78);
    SetCriticalSectionSpinCount(&local_78,4000);
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_3c = 0;
    local_1e8 = (longlong *)0x0;
    local_1e0 = 1;
    local_1d8 = 0;
    local_1d0 = 0;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
    *local_1e8 = param_1;
    if ((int)local_1e0 != 0) {
      local_1f0 = 0;
      FUN_14254cb40(&local_1a0,&local_1e8,&local_1f0);
      if (local_1f0 != 0) {
        LOCK();
        piVar1 = (int *)(local_1f0 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(local_1f0);
        }
      }
    }
    plVar3 = local_1e8;
    *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) | 0x1000000;
    *(int *)(uVar8 + 0xc) = -1 - iVar5;
    iVar2 = *(int *)(lVar9 + 0x10);
    iVar6 = FUObjectClusterContainer::GetMinClusterSize(&DAT_1469e8f10);
    if (iVar2 < iVar6) {
      puVar10 = *(uint **)(lVar9 + 8);
      uVar8 = (longlong)*(int *)(lVar9 + 0x10) & 0x3fffffffffffffff;
      if (puVar10 + *(int *)(lVar9 + 0x10) < puVar10) {
        uVar8 = uVar11;
      }
      if (uVar8 != 0) {
        do {
          uVar4 = *puVar10;
          uVar7 = uVar4 & 0xffff;
          if ((int)uVar4 < 0) {
            uVar4 = uVar4 + 0xffff;
            uVar7 = uVar7 - 0x10000;
          }
          puVar10 = puVar10 + 1;
          uVar11 = uVar11 + 1;
          *(undefined4 *)
           (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) + 0xc +
           (longlong)(int)uVar7 * 0x18) = 0;
        } while (uVar11 != uVar8);
      }
      FUObjectClusterContainer::FreeCluster(&DAT_1469e8f10,iVar5);
    }
    else {
      AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
                (*(undefined8 *)(lVar9 + 8),(longlong)*(int *)(lVar9 + 0x10),local_1f8,&local_1f8);
      AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
                (*(undefined8 *)(lVar9 + 0x18),(longlong)*(int *)(lVar9 + 0x20),local_1f7,&local_1f7
                );
      AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
                (*(undefined8 *)(lVar9 + 0x28),(longlong)*(int *)(lVar9 + 0x30),local_1f6[0],
                 local_1f6);
    }
    if (local_1d8 != 0) {
      FMemory::Free();
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
    DeleteCriticalSection(&local_78);
  }
  return;
}



// FUNCTION 1425432b0 FUN_1425432b0 body=1450 status=ok
// SIG undefined FUN_1425432b0(void)

longlong * FUN_1425432b0(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  longlong lVar15;
  void *_Dst;
  longlong *_Src;
  int iVar16;
  longlong local_res18;
  longlong *local_res20;
  longlong local_88 [2];
  longlong *local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  longlong local_60 [2];
  longlong local_50 [3];
  
  plVar11 = (longlong *)0x0;
  cVar7 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar7 != '\0') {
    return (longlong *)0x0;
  }
  lVar15 = *(longlong *)(param_1 + 0x20);
  if (lVar15 != 0) {
    local_res18 = lVar15;
    puVar10 = (undefined8 *)FUN_1416f9e30(local_60,param_2);
    iVar9 = *(int *)(lVar15 + 0xf0);
    if (iVar9 < 2) {
      _Src = (longlong *)*puVar10;
      *puVar10 = 0;
      iVar9 = *(int *)(puVar10 + 1);
      puVar10[1] = 0;
    }
    else {
      iVar16 = *(int *)(puVar10 + 1) + -1;
      if (*(int *)(puVar10 + 1) == 0) {
        iVar16 = 0;
      }
      if ((iVar9 != 0) || (iVar8 = 1, iVar16 == 0)) {
        iVar8 = 0;
      }
      pvVar1 = *(void **)(lVar15 + 0xe8);
      local_78 = (longlong *)0x0;
      local_70 = iVar9;
      if ((iVar9 == 0) && (iVar8 + iVar16 == 0)) {
        local_6c = 0;
        _Src = plVar11;
        iVar9 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar9 + iVar8 + iVar16,0);
        _Src = local_78;
        _guard_xfg_dispatch_icall_nop(local_78,pvVar1,(longlong)iVar9 * 2);
        iVar9 = local_70;
      }
      pvVar1 = (void *)*puVar10;
      if (iVar16 != 0) {
        local_70 = iVar16 + (uint)(iVar9 == 0) + iVar9;
        if (local_6c < local_70) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar9);
          _Src = local_78;
        }
        iVar8 = local_70;
        _Dst = (void *)(((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2 + (longlong)_Src);
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar16 * 2);
        *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
        iVar9 = iVar8;
      }
    }
    plVar12 = (longlong *)0x0;
    if (local_60[0] != 0) {
      FMemory::Free();
    }
    ULevelStreaming::GetWorldAssetPackageName(param_1,local_88);
    puVar10 = (undefined8 *)FUN_1416f9840(local_60);
    local_res20 = (longlong *)*puVar10;
    iVar16 = *(int *)(puVar10 + 1);
    *puVar10 = 0;
    local_70 = *(int *)(puVar10 + 1);
    local_6c = *(int *)((longlong)puVar10 + 0xc);
    puVar10[1] = 0;
    iVar8 = local_70;
    local_78 = local_res20;
    if (local_6c < (int)((2 - (uint)(iVar16 != 0)) + local_70)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
      iVar8 = local_70;
    }
    local_70 = (2 - (uint)(iVar8 != 0)) + iVar8;
    if (local_6c < local_70) {
      local_res20 = local_78;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar8);
    }
    iVar16 = local_70;
    puVar14 = (undefined2 *)((longlong)local_78 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
    *puVar14 = 0x2f;
    puVar14[1] = 0;
    local_res20 = local_78;
    if (local_60[0] != 0) {
      FMemory::Free();
    }
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    if (iVar16 < 2) {
      local_78 = (longlong *)0x0;
      local_70 = iVar9;
      if (iVar9 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar9,0);
        plVar12 = local_78;
        _guard_xfg_dispatch_icall_nop(local_78,_Src,(longlong)iVar9 * 2);
        iVar9 = local_70;
      }
    }
    else {
      plVar13 = (longlong *)(ulonglong)(iVar9 - 1);
      if (iVar9 == 0) {
        plVar13 = plVar12;
      }
      iVar8 = (int)plVar13;
      if ((iVar16 != 0) || (iVar9 = 1, iVar8 == 0)) {
        iVar9 = 0;
      }
      local_78 = (longlong *)0x0;
      local_70 = iVar16;
      if ((iVar16 == 0) && (iVar9 + iVar8 == 0)) {
        local_6c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar16 + iVar9 + iVar8,0);
        plVar12 = local_78;
        _guard_xfg_dispatch_icall_nop(local_78,local_res20,(longlong)iVar16 * 2);
      }
      iVar16 = local_70;
      iVar9 = local_70;
      if (iVar8 != 0) {
        lVar15 = (longlong)local_70;
        local_70 = local_70 + (uint)(local_70 == 0) + iVar8;
        if (local_6c < local_70) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar16);
          plVar12 = local_78;
        }
        iVar9 = local_70;
        puVar14 = (undefined2 *)((longlong)plVar12 + (lVar15 - (ulonglong)(iVar16 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(puVar14,_Src,(longlong)iVar8 * 2);
        puVar14[iVar8] = 0;
      }
    }
    plVar13 = (longlong *)&DAT_143f3eda8;
    if (iVar9 != 0) {
      plVar13 = plVar12;
    }
    FName::FName(&local_68,plVar13,1);
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
    lVar15 = local_68;
    plVar13 = *(longlong **)(local_res18 + 0x88);
    plVar12 = plVar13 + *(int *)(local_res18 + 0x90);
    local_78 = plVar13;
    for (; plVar13 != plVar12; plVar13 = plVar13 + 1) {
      lVar2 = *plVar13;
      if ((*(byte *)(lVar2 + 0xb6) & 2) == 0) {
        FSoftObjectPath::ToString(lVar2 + 0x38,local_60);
        puVar10 = (undefined8 *)FUN_1417006f0(local_50,local_60);
        if (*(int *)(puVar10 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar10;
        }
        puVar10 = (undefined8 *)FName::FName(local_88,puVar14,1);
        *(undefined8 *)(lVar2 + 0x130) = *puVar10;
        if (local_50[0] != 0) {
          FMemory::Free();
        }
        if (local_60[0] != 0) {
          FMemory::Free();
        }
        *(byte *)(lVar2 + 0xb6) = *(byte *)(lVar2 + 0xb6) | 2;
      }
      if (*(longlong *)(lVar2 + 0x130) == lVar15) {
        if ((int)((longlong)plVar13 - (longlong)local_78 >> 3) != -1) goto LAB_1425437f9;
        break;
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    local_88[0] = 0;
    local_78 = (longlong *)0x0;
    FUN_1417846f0(local_res18,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar2 = local_res18;
    plVar11 = (longlong *)FUN_1417985e0(uVar3,local_res18,0,0x40,0,0,0,0,0);
    local_res18 = 0;
    lVar15 = *(longlong *)(param_1 + 0x50);
    if (lVar15 == 0) {
      plVar12 = (longlong *)ULevelStreaming::GetWorldAssetPackageFName(param_1,&local_res18);
      lVar15 = *plVar12;
    }
    plVar11[10] = lVar15;
    ULevelStreaming::SetWorldAssetByPackageName(plVar11,local_68);
    (**(code **)(*plVar11 + 0x278))(plVar11,0);
    if ((*(byte *)((longlong)plVar11 + 0xb6) & 4) != 0) {
      *(byte *)((longlong)plVar11 + 0xb6) = *(byte *)((longlong)plVar11 + 0xb6) & 0xfb;
      cVar7 = UObjectBaseUtility::IsTemplate(plVar11,0x30);
      if ((cVar7 == '\0') && (plVar11[4] != 0)) {
        UWorld::UpdateStreamingLevelShouldBeConsidered(plVar11[4],plVar11);
      }
    }
    lVar15 = *(longlong *)(param_1 + 0x88);
    plVar11[0x10] = *(longlong *)(param_1 + 0x80);
    plVar11[0x11] = lVar15;
    uVar4 = *(undefined4 *)(param_1 + 0x94);
    uVar5 = *(undefined4 *)(param_1 + 0x98);
    uVar6 = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(plVar11 + 0x12) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)((longlong)plVar11 + 0x94) = uVar4;
    *(undefined4 *)(plVar11 + 0x13) = uVar5;
    *(undefined4 *)((longlong)plVar11 + 0x9c) = uVar6;
    uVar4 = *(undefined4 *)(param_1 + 0xa4);
    uVar5 = *(undefined4 *)(param_1 + 0xa8);
    uVar6 = *(undefined4 *)(param_1 + 0xac);
    *(undefined4 *)(plVar11 + 0x14) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)((longlong)plVar11 + 0xa4) = uVar4;
    *(undefined4 *)(plVar11 + 0x15) = uVar5;
    *(undefined4 *)((longlong)plVar11 + 0xac) = uVar6;
    UWorld::AddStreamingLevel(lVar2,plVar11);
LAB_1425437f9:
    if (local_res20 != (longlong *)0x0) {
      FMemory::Free(local_res20);
    }
    if (_Src != (longlong *)0x0) {
      FMemory::Free(_Src);
    }
  }
  return plVar11;
}



// FUNCTION 142543860 FUN_142543860 body=958 status=ok
// SIG undefined FUN_142543860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142543860(longlong param_1,longlong *param_2,char param_3,undefined1 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110 [24];
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_128 = param_4;
  (**(code **)(*param_2 + 0x148))(param_2);
  if ((*(byte *)((longlong)param_2 + 0x94) & 2) == 0) {
    iVar10 = *(int *)((longlong)param_2 + 0xc);
    uVar12 = 0;
    uVar3 = uVar12;
    if (iVar10 < (int)DAT_1469e91c4) {
      uVar7 = iVar10 >> 0x1f & 0xffff;
      uVar2 = iVar10 + uVar7;
      uVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar7) * 0x18;
    }
    if ((*(uint *)(uVar3 + 8) >> 0x1d & 1) == 0) {
      cVar1 = UWorld::IsGameWorld(param_1);
      if (cVar1 == '\0') {
        (**(code **)(*param_2 + 0x70))(param_2,1);
        bVar6 = *(byte *)((longlong)param_2 + 0x94);
      }
      else {
        plVar4 = (longlong *)UWorld::GetWorldSettings(param_1,0,1);
        if ((plVar4 == param_2) ||
           (((((char)param_2[0x25] != '\x03' && (param_3 == '\0')) &&
             ((*(byte *)(param_2 + 0x12) & 1) == 0)) ||
            (cVar1 = (**(code **)(*param_2 + 0x4b0))(param_2), cVar1 != '\0')))) {
          return 0;
        }
        bVar6 = *(byte *)((longlong)param_2 + 0x94);
        if ((bVar6 & 0x18) == 8) {
          *(byte *)((longlong)param_2 + 0x94) = bVar6 | 4;
          return 1;
        }
      }
      *(byte *)((longlong)param_2 + 0x94) = bVar6 | 2;
      plVar4 = (longlong *)IStreamingManager::Get();
      (**(code **)(*plVar4 + 0x60))(plVar4,param_2);
      (**(code **)(*param_2 + 0x548))(param_2);
      local_120 = 0;
      local_118 = 0;
      FUN_14222e300(param_2,&local_120);
      if (0 < (int)local_118) {
        local_50 = (undefined8 *)0x0;
        local_48 = 0;
        FUN_140749cd0(param_2,local_110,0);
        puVar8 = local_50;
        uVar3 = uVar12;
        while ((iVar10 = (int)uVar3, -1 < iVar10 && (iVar10 < (int)local_118))) {
          lVar5 = *(longlong *)(local_120 + (longlong)iVar10 * 8);
          if (lVar5 != 0) {
            puVar9 = local_110;
            if (puVar8 != (undefined8 *)0x0) {
              puVar9 = puVar8;
            }
            uVar3 = (longlong)(int)local_48 & 0x1fffffffffffffff;
            if (puVar9 + (int)local_48 < puVar9) {
              uVar3 = uVar12;
            }
            uVar11 = uVar12;
            if (uVar3 != 0) {
              do {
                FUN_1422278d0(lVar5,*puVar9);
                uVar11 = uVar11 + 1;
                puVar9 = puVar9 + 1;
                puVar8 = local_50;
              } while (uVar11 != uVar3);
            }
          }
          uVar3 = (ulonglong)(iVar10 + 1);
        }
        param_4 = local_128;
        if (puVar8 != (undefined8 *)0x0) {
          FMemory::Free(puVar8);
          param_4 = local_128;
        }
      }
      if ((param_2[0x2d] != 0) && (lVar5 = *(longlong *)(param_2[0x2d] + 400), lVar5 != 0)) {
        plVar4 = *(longlong **)(lVar5 + 0x118);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x70))(plVar4,1);
        }
        FUN_1422279d0(param_2,&DAT_146532190);
      }
      FUN_142225a80(param_2);
      if (param_2[0x23] != 0) {
        (**(code **)(*param_2 + 0x448))(param_2,0);
      }
      lVar5 = AActor::GetLevel(param_2);
      if (lVar5 != 0) {
        FUN_14251ee70(lVar5,param_2);
      }
      lVar5 = FUN_1428761d0(DAT_146b17150,param_1);
      if ((lVar5 != 0) &&
         (plVar4 = (longlong *)FUN_142873bb0(DAT_146b17150,param_1,param_2[0x24]),
         plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x338))(plVar4,param_2,0);
      }
      plVar4 = *(longlong **)(param_1 + 0x108);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x338))(plVar4,param_2,0);
      }
      FUN_1428d4410(param_1,param_2,param_4);
      (**(code **)(*param_2 + 0x4d8))(param_2,0);
      iVar10 = *(int *)((longlong)param_2 + 0xc);
      if (iVar10 < (int)DAT_1469e91c4) {
        uVar7 = iVar10 >> 0x1f & 0xffff;
        uVar2 = iVar10 + uVar7;
        uVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                 (longlong)(int)((uVar2 & 0xffff) - uVar7) * 0x18;
      }
      *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) | 0x20000000;
      UObjectBaseUtility::MarkPackageDirty(param_2);
      (**(code **)(*param_2 + 0x4f0))(param_2);
      FUN_14223a370(param_2,0,1);
      if (local_120 != 0) {
        FMemory::Free();
      }
    }
  }
  return 1;
}



// FUNCTION 142543c20 FUN_142543c20 body=87 status=ok
// SIG undefined FUN_142543c20(void)

void FUN_142543c20(longlong *param_1)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_1[0x8b] != 0) {
    puVar1 = (uint *)(param_1[0x8b] + 0x2ec);
    *puVar1 = *puVar1 & 0xfffffffe;
    lVar3 = (**(code **)(*param_1 + 0x148))();
    if (lVar3 != 0) {
      cVar2 = UWorld::IsGameWorld(lVar3);
      if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142543c6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)param_1[0x8b] + 0x370))((longlong *)param_1[0x8b],1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142543c80 FUN_142543c80 body=407 status=ok
// SIG undefined FUN_142543c80(void)

undefined8 FUN_142543c80(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = UObjectBaseUtility::IsTemplate();
  if (cVar1 == '\0') {
    lVar2 = param_1[4];
  }
  else {
    lVar2 = 0;
  }
  uVar3 = 1;
  switch(*(undefined1 *)((longlong)param_1 + 0xb4)) {
  case 0:
  case 2:
    break;
  case 1:
    if ((*(byte *)((longlong)param_1 + 0xb6) & 1) != 0) {
      *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
      return 1;
    }
    if (((DAT_146531e90 == 0) && (*(char *)(lVar2 + 0x701) == '\0')) ||
       ((cVar1 = UWorld::IsGameWorld(lVar2), cVar1 == '\0' ||
        (cVar1 = (**(code **)(*param_1 + 0x280))(param_1), cVar1 != '\0'))))
    goto switchD_142543cc8_caseD_3;
    break;
  case 3:
  case 7:
switchD_142543cc8_caseD_3:
    *(undefined1 *)((longlong)param_1 + 0xb5) = 2;
    return 1;
  case 4:
    if (((*(byte *)((longlong)param_1 + 0xb6) & 1) != 0) ||
       ((cVar1 = UWorld::IsGameWorld(lVar2), cVar1 != '\0' &&
        (cVar1 = (**(code **)(*param_1 + 0x280))(param_1), cVar1 == '\0')))) {
      *(undefined1 *)((longlong)param_1 + 0xb5) = 0;
      return 1;
    }
    cVar1 = ULevelStreaming::IsDesiredLevelLoaded(param_1);
    if (cVar1 == '\0') goto switchD_142543cc8_caseD_3;
    cVar1 = (**(code **)(*param_1 + 0x288))(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xb5) = 3;
      return 1;
    }
    break;
  case 5:
switchD_142543cc8_caseD_5:
    *(undefined1 *)((longlong)param_1 + 0xb5) = 3;
    return 1;
  case 6:
    if (((*(byte *)((longlong)param_1 + 0xb6) & 1) != 0) ||
       (((cVar1 = UWorld::IsGameWorld(lVar2), cVar1 != '\0' &&
         (cVar1 = (**(code **)(*param_1 + 0x280))(param_1), cVar1 == '\0')) ||
        (cVar1 = (**(code **)(*param_1 + 0x288))(param_1), cVar1 == '\0'))))
    goto switchD_142543cc8_caseD_3;
    cVar1 = ULevelStreaming::IsDesiredLevelLoaded(param_1);
    if (cVar1 == '\0') goto switchD_142543cc8_caseD_5;
    break;
  default:
    goto switchD_142543cc8_default;
  }
  uVar3 = 0;
switchD_142543cc8_default:
  return uVar3;
}



// FUNCTION 142543e50 DiscardPendingUnloadLevel body=85 status=ok
// SIG undefined DiscardPendingUnloadLevel(void)

void ULevelStreaming::DiscardPendingUnloadLevel(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x128);
  if (lVar1 != 0) {
    if (((*(byte *)(lVar1 + 0x204) & 0x10) != 0) &&
       (FUN_1428d4900(param_2,lVar1,0),
       (*(byte *)(*(longlong *)(param_1 + 0x128) + 0x204) & 0x10) != 0)) {
      return;
    }
    FLevelStreamingGCHelper::RequestUnload();
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  return;
}



// FUNCTION 142543eb0 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
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
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = TSet<TTuple<UTexture2D_*,FLandscapeWeightmapUsage>,TDefaultMapHashableKeyFuncs<UTexture2D_*,FLandscapeWeightmapUsage,0>,FDefaultSetAllocator>
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



// FUNCTION 142543f80 FUN_142543f80 body=6569 status=ok
// SIG undefined FUN_142543f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_142543f80(undefined8 param_1,longlong *param_2,undefined1 (*param_3) [12],undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  byte bVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar35;
  float fVar39;
  undefined1 auVar30 [16];
  float fVar36;
  float fVar37;
  float fVar40;
  float fVar41;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined4 uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  undefined4 local_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e8 [4];
  undefined1 auStack_1e4 [4];
  undefined8 uStack_1e0;
  undefined1 local_1d8 [8];
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [8];
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  longlong local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [176];
  
  if ((param_2 == (longlong *)0x0) ||
     (plVar1 = (longlong *)param_2[0x2d], plVar1 == (longlong *)0x0)) {
    return &stack0x00000000;
  }
  puVar19 = (undefined1 *)0x0;
  bVar10 = 0;
  uVar12 = FRotator::Quaternion(param_4,&local_1b8);
  fVar53 = fStack_1ac;
  fVar54 = fStack_1b0;
  fVar50 = fStack_1b4;
  fVar47 = local_1b8;
  fVar38 = DAT_1464aa790;
  fVar74 = DAT_1464aa788._4_4_;
  fVar55 = (float)DAT_1464aa788;
  fVar36 = *(float *)(*param_3 + 8);
  fVar40 = *(float *)(*param_3 + 4);
  fVar42 = *(float *)*param_3;
  fVar37 = 0.0;
  auVar30 = *(undefined1 (*) [16])(plVar1 + 0x46);
  fVar44 = auVar30._0_4_;
  fVar48 = auVar30._4_4_;
  fVar51 = auVar30._8_4_;
  fVar56 = auVar30._12_4_;
  local_178 = local_1b8;
  fStack_174 = fStack_1b4;
  fStack_170 = fStack_1b0;
  fStack_16c = fStack_1ac;
  auVar22._4_4_ = -(uint)(fRam0000000146afc9e4 < (float)((uint)fVar48 & uRam0000000146afc9f4));
  auVar22._0_4_ = -(uint)(_DAT_146afc9e0 < (float)((uint)fVar44 & _DAT_146afc9f0));
  auVar22._8_4_ = -(uint)(fRam0000000146afc9e8 < (float)((uint)fVar51 & uRam0000000146afc9f8));
  auVar22._12_4_ = -(uint)(fRam0000000146afc9ec < (float)((uint)fVar56 & uRam0000000146afc9fc));
  iVar13 = movmskps(uVar12,auVar22);
  local_1f8 = local_1b8;
  fStack_1f4 = fStack_1b4;
  fStack_1f0 = fStack_1b0;
  fStack_1ec = fStack_1ac;
  fStack_18c = 0.0;
  _local_198 = *param_3;
  uStack_1e0._4_4_ = 0.0;
  _local_1e8 = *param_3;
  local_138._4_4_ = DAT_1464aa788._4_4_;
  local_138._0_4_ = (float)DAT_1464aa788;
  local_138._8_4_ = DAT_1464aa790;
  local_138._12_4_ = 0;
  local_1d8._4_4_ = DAT_1464aa788._4_4_;
  local_1d8._0_4_ = (float)DAT_1464aa788;
  fStack_1d0 = DAT_1464aa790;
  fStack_1cc = 0.0;
  fVar29 = _DAT_1468b5b90;
  fVar35 = fRam00000001468b5b94;
  fVar39 = fRam00000001468b5b98;
  fVar41 = fRam00000001468b5b9c;
  fVar57 = _DAT_1468b5b80;
  fVar60 = fRam00000001468b5b84;
  fVar63 = fRam00000001468b5b88;
  fVar65 = fRam00000001468b5b8c;
  fVar75 = _DAT_1468b5b70;
  fVar76 = fRam00000001468b5b74;
  fVar77 = fRam00000001468b5b78;
  fVar78 = fRam00000001468b5b7c;
  if (iVar13 != 0) {
    fVar75 = *(float *)(plVar1 + 0x42) * _DAT_146afc9d0;
    fVar76 = *(float *)((longlong)plVar1 + 0x214) * fRam0000000146afc9d4;
    fVar77 = *(float *)(plVar1 + 0x43) * fRam0000000146afc9d8;
    fVar78 = *(float *)((longlong)plVar1 + 0x21c) * fRam0000000146afc9dc;
    auVar30 = rcpps(ZEXT816(0),auVar30);
    fVar29 = auVar30._0_4_;
    fVar35 = auVar30._4_4_;
    fVar39 = auVar30._8_4_;
    fVar41 = auVar30._12_4_;
    fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar44;
    fVar35 = (fVar35 + fVar35) - fVar35 * fVar35 * fVar48;
    fVar39 = (fVar39 + fVar39) - fVar39 * fVar39 * fVar51;
    fVar41 = (fVar41 + fVar41) - fVar41 * fVar41 * fVar56;
    fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar44;
    fVar35 = (fVar35 + fVar35) - fVar35 * fVar35 * fVar48;
    fVar39 = (fVar39 + fVar39) - fVar39 * fVar39 * fVar51;
    fVar41 = (fVar41 + fVar41) - fVar41 * fVar41 * fVar56;
    fVar29 = (float)((-(uint)((float)((uint)fVar44 & _DAT_146afc9f0) <= _DAT_146afc9e0) &
                      (uint)fVar29 ^ (uint)fVar29) & _DAT_146afc900);
    fVar35 = (float)((-(uint)((float)((uint)fVar48 & uRam0000000146afc9f4) <= fRam0000000146afc9e4)
                      & (uint)fVar35 ^ (uint)fVar35) & uRam0000000146afc904);
    fVar39 = (float)((-(uint)((float)((uint)fVar51 & uRam0000000146afc9f8) <= fRam0000000146afc9e8)
                      & (uint)fVar39 ^ (uint)fVar39) & uRam0000000146afc908);
    fVar41 = (float)((-(uint)((float)((uint)fVar56 & uRam0000000146afc9fc) <= fRam0000000146afc9ec)
                      & (uint)fVar41 ^ (uint)fVar41) & uRam0000000146afc90c);
    fVar57 = *(float *)(plVar1 + 0x44) * fVar29;
    fVar60 = *(float *)((longlong)plVar1 + 0x224) * fVar35;
    fVar63 = *(float *)(plVar1 + 0x45) * fVar39;
    fVar65 = *(float *)((longlong)plVar1 + 0x22c) * fVar41;
    fVar44 = fVar63 * fVar76 - fVar60 * fVar77;
    fVar48 = fVar57 * fVar77 - fVar63 * fVar75;
    fVar51 = fVar60 * fVar75 - fVar57 * fVar76;
    fVar56 = fVar65 * fVar78 - fVar65 * fVar78;
    fVar44 = fVar44 + fVar44;
    fVar48 = fVar48 + fVar48;
    fVar51 = fVar51 + fVar51;
    fVar56 = fVar56 + fVar56;
    fVar57 = (float)((uint)(0.0 - ((fVar51 * fVar76 - fVar48 * fVar77) + fVar78 * fVar44 + fVar57))
                    & _DAT_146afc900);
    fVar60 = (float)((uint)(0.0 - ((fVar44 * fVar77 - fVar51 * fVar75) + fVar78 * fVar48 + fVar60))
                    & uRam0000000146afc904);
    fVar63 = (float)((uint)(0.0 - ((fVar48 * fVar75 - fVar44 * fVar76) + fVar78 * fVar51 + fVar63))
                    & uRam0000000146afc908);
    fVar65 = (float)((uint)(0.0 - ((fVar56 * fVar78 - fVar56 * fVar78) + fVar78 * fVar56 + fVar65))
                    & uRam0000000146afc90c);
  }
  local_1b8 = fVar29;
  fStack_1b4 = fVar35;
  fStack_1b0 = fVar39;
  fStack_1ac = fVar41;
  local_188 = fVar57;
  fStack_184 = fVar60;
  fStack_180 = fVar63;
  fStack_17c = fVar65;
  uVar16 = UEnvQueryTest::GetPrivateStaticClass();
  lVar17 = (**(code **)(*param_2 + 0x628))(param_2,uVar16);
  if ((lVar17 != 0) && (plVar21 = *(longlong **)(lVar17 + 0x180), plVar21 != (longlong *)0x0)) {
    iVar13 = (**(code **)(*plVar21 + 0x4e8))(plVar21);
    fVar51 = fRam0000000146afc8f8;
    fVar48 = fRam0000000146afc8f4;
    fVar44 = _DAT_146afc8f0;
    if ((iVar13 - 1U & 0xfffffffd) == 0) {
      auVar30 = *(undefined1 (*) [16])(plVar21 + 0x46);
      fVar56 = auVar30._0_4_;
      fVar59 = auVar30._4_4_;
      fVar62 = auVar30._8_4_;
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar29;
      auVar6._8_4_ = fVar39;
      auVar6._12_4_ = fVar41;
      auVar22 = minps(auVar30,auVar6);
      local_188 = _DAT_146afc9c0;
      fStack_184 = fRam0000000146afc9c4;
      fStack_180 = fRam0000000146afc9c8;
      fStack_17c = fRam0000000146afc9cc;
      auVar23._4_4_ = -(uint)(auVar22._4_4_ < fRam0000000146afc9c4);
      auVar23._0_4_ = -(uint)(auVar22._0_4_ < _DAT_146afc9c0);
      auVar23._8_4_ = -(uint)(auVar22._8_4_ < fRam0000000146afc9c8);
      auVar23._12_4_ = -(uint)(auVar22._12_4_ < fRam0000000146afc9cc);
      iVar13 = movmskps(iVar13 - 1U,auVar23);
      if (iVar13 == 0) {
        fVar44 = *(float *)(plVar21 + 0x42);
        fVar48 = *(float *)((longlong)plVar21 + 0x214);
        fVar51 = *(float *)(plVar21 + 0x43);
        fVar56 = *(float *)((longlong)plVar21 + 0x21c);
        fVar59 = fVar29 * *(float *)(plVar21 + 0x46);
        fVar62 = fVar35 * *(float *)((longlong)plVar21 + 0x234);
        fVar43 = fVar39 * *(float *)(plVar21 + 0x47);
        fVar45 = fVar41 * *(float *)((longlong)plVar21 + 0x23c);
        fVar29 = *(float *)(plVar21 + 0x44) * fVar29;
        fVar35 = *(float *)((longlong)plVar21 + 0x224) * fVar35;
        fVar39 = *(float *)(plVar21 + 0x45) * fVar39;
        fVar41 = *(float *)((longlong)plVar21 + 0x22c) * fVar41;
        fVar46 = fVar56 * fVar75 * _DAT_146afc980 + fVar44 * fVar78 +
                 fVar51 * fVar76 * _DAT_146afc970 + fVar48 * fVar77 * _DAT_146afc960;
        fVar49 = fVar51 * fVar75 * fRam0000000146afc984 + fVar48 * fVar78 +
                 fVar56 * fVar76 * fRam0000000146afc974 + fVar44 * fVar77 * fRam0000000146afc964;
        fVar52 = fVar48 * fVar75 * fRam0000000146afc988 + fVar51 * fVar78 +
                 fVar44 * fVar76 * fRam0000000146afc978 + fVar56 * fVar77 * fRam0000000146afc968;
        fVar58 = fVar44 * fVar75 * fRam0000000146afc98c + fVar56 * fVar78 +
                 fVar48 * fVar76 * fRam0000000146afc97c + fVar51 * fVar77 * fRam0000000146afc96c;
        fVar44 = fVar39 * fVar76 - fVar35 * fVar77;
        fVar48 = fVar29 * fVar77 - fVar39 * fVar75;
        fVar51 = fVar35 * fVar75 - fVar29 * fVar76;
        fVar56 = fVar41 * fVar78 - fVar41 * fVar78;
        fVar44 = fVar44 + fVar44;
        fVar48 = fVar48 + fVar48;
        fVar51 = fVar51 + fVar51;
        fVar56 = fVar56 + fVar56;
        local_1b8 = fVar51 * fVar76;
        fStack_1b4 = fVar44 * fVar77;
        fStack_1b0 = fVar48 * fVar75;
        fStack_1ac = fVar56 * fVar78;
        fVar57 = (local_1b8 - fVar48 * fVar77) + fVar44 * fVar78 + fVar29 + fVar57;
        fVar60 = (fStack_1b4 - fVar51 * fVar75) + fVar48 * fVar78 + fVar35 + fVar60;
        fVar63 = (fStack_1b0 - fVar44 * fVar76) + fVar51 * fVar78 + fVar39 + fVar63;
        fVar65 = (fStack_1ac - fVar56 * fVar78) + fVar56 * fVar78 + fVar41 + fVar65;
        uVar12 = 0;
      }
      else {
        fVar36 = fVar76 + fVar76;
        fVar40 = fVar77 + fVar77;
        fStack_15c = fVar41 * auVar30._12_4_;
        fVar42 = (fVar75 + fVar75) * fVar75;
        fVar65 = fVar78 * (fVar75 + fVar75);
        fVar70 = (fVar78 * fVar40 + fVar75 * fVar36) * fVar29;
        fVar71 = (fVar65 + fVar76 * fVar40) * fVar35;
        fVar72 = (fVar78 * fVar36 + fVar75 * fVar40) * fVar39;
        fVar45 = fVar35 * (fVar75 * fVar36 - fVar78 * fVar40);
        fVar49 = fVar39 * (fVar76 * fVar40 - fVar65);
        fVar52 = fVar29 * (fVar75 * fVar40 - fVar78 * fVar36);
        fVar65 = (float)((uint)((_DAT_146afc8f0 - (fVar40 * fVar77 + fVar36 * fVar76)) * fVar29) &
                        _DAT_146afc900);
        fVar37 = (float)((uint)((fRam0000000146afc8f4 - (fVar40 * fVar77 + fVar42)) * fVar35) &
                        uRam0000000146afc904);
        fVar76 = (float)((uint)((fRam0000000146afc8f8 - (fVar36 * fVar76 + fVar42)) * fVar39) &
                        uRam0000000146afc908);
        fVar78 = (float)((uint)((fRam0000000146afc8fc - (fVar42 + fVar42)) * fVar41) &
                        uRam0000000146afc90c);
        fVar36 = *(float *)(plVar21 + 0x42);
        fVar40 = *(float *)((longlong)plVar21 + 0x214);
        fVar42 = *(float *)(plVar21 + 0x43);
        fVar41 = *(float *)((longlong)plVar21 + 0x21c);
        fVar77 = fVar40 + fVar40;
        fVar43 = fVar42 + fVar42;
        fVar46 = (fVar36 + fVar36) * fVar36;
        fVar75 = (fVar36 + fVar36) * fVar41;
        fVar66 = (fVar43 * fVar41 + fVar77 * fVar36) * fVar56;
        fVar67 = (fVar75 + fVar43 * fVar40) * fVar59;
        fVar69 = (fVar77 * fVar41 + fVar43 * fVar36) * fVar62;
        fVar58 = fVar59 * (fVar77 * fVar36 - fVar43 * fVar41);
        fVar61 = fVar62 * (fVar43 * fVar40 - fVar75);
        fVar64 = fVar56 * (fVar43 * fVar36 - fVar77 * fVar41);
        fVar41 = (float)((uint)((_DAT_146afc8f0 - (fVar43 * fVar42 + fVar77 * fVar40)) * fVar56) &
                        _DAT_146afc900);
        fVar75 = (float)((uint)((fRam0000000146afc8f4 - (fVar43 * fVar42 + fVar46)) * fVar59) &
                        uRam0000000146afc904);
        fVar77 = (float)((uint)((fRam0000000146afc8f8 - (fVar77 * fVar40 + fVar46)) * fVar62) &
                        uRam0000000146afc908);
        fVar43 = (float)((uint)((fRam0000000146afc8fc - (fVar46 + fVar46)) * auVar30._12_4_) &
                        uRam0000000146afc90c);
        fVar36 = *(float *)(plVar21 + 0x44);
        fVar40 = *(float *)((longlong)plVar21 + 0x224);
        fVar42 = *(float *)(plVar21 + 0x45);
        local_1f8 = fVar66 * fVar45 + fVar41 * fVar65 + fVar64 * fVar72 + fVar43 * fVar57;
        fStack_1f4 = fVar66 * fVar37 + fVar41 * fVar70 + fVar64 * fVar49 + fVar43 * fVar60;
        fStack_1f0 = fVar66 * fVar71 + fVar41 * fVar52 + fVar64 * fVar76 + fVar43 * fVar63;
        fStack_1ec = fVar66 * fVar78 + fVar41 * fVar78 + fVar64 * fVar78 +
                     fVar43 * fRam0000000146afc8fc;
        auStack_1e4 = (undefined1  [4])
                      (fVar75 * fVar37 + fVar58 * fVar70 + fVar67 * fVar49 + fVar43 * fVar60);
        local_1e8 = (undefined1  [4])
                    (fVar75 * fVar45 + fVar58 * fVar65 + fVar67 * fVar72 + fVar43 * fVar57);
        uStack_1e0._0_4_ = fVar75 * fVar71 + fVar58 * fVar52 + fVar67 * fVar76 + fVar43 * fVar63;
        uStack_1e0._4_4_ =
             fVar75 * fVar78 + fVar58 * fVar78 + fVar67 * fVar78 + fVar43 * fRam0000000146afc8fc;
        local_1d8._4_4_ = fVar61 * fVar37 + fVar69 * fVar70 + fVar77 * fVar49 + fVar43 * fVar60;
        local_1d8._0_4_ = fVar61 * fVar45 + fVar69 * fVar65 + fVar77 * fVar72 + fVar43 * fVar57;
        fStack_1d0 = fVar61 * fVar71 + fVar69 * fVar52 + fVar77 * fVar76 + fVar43 * fVar63;
        fStack_1cc = fVar61 * fVar78 + fVar69 * fVar78 + fVar77 * fVar78 +
                     fVar43 * fRam0000000146afc8fc;
        local_1c8 = fVar40 * fVar45 + fVar36 * fVar65 + fVar42 * fVar72 +
                    fRam0000000146afc8fc * fVar57;
        fStack_1c4 = fVar40 * fVar37 + fVar36 * fVar70 + fVar42 * fVar49 +
                     fRam0000000146afc8fc * fVar60;
        fStack_1c0 = fVar40 * fVar71 + fVar36 * fVar52 + fVar42 * fVar76 +
                     fRam0000000146afc8fc * fVar63;
        fStack_1bc = fVar40 * fVar78 + fVar36 * fVar78 + fVar42 * fVar78 +
                     fRam0000000146afc8fc * fRam0000000146afc8fc;
        local_168 = fVar29 * fVar56;
        fStack_164 = fVar35 * fVar59;
        fStack_160 = fVar39 * fVar62;
        FMatrix::RemoveScaling(&local_1f8);
        fVar36 = (float)(-(uint)(_DAT_146afc9c0 <= fVar29 * fVar56) &
                         (_DAT_146afc9b0 ^ (uint)fVar44) ^ _DAT_146afc9b0);
        fVar40 = (float)(-(uint)(fRam0000000146afc9c4 <= fVar35 * fVar59) &
                         (uRam0000000146afc9b4 ^ (uint)fVar48) ^ uRam0000000146afc9b4);
        fVar44 = (float)(-(uint)(fRam0000000146afc9c8 <= fVar39 * fVar62) &
                         (uRam0000000146afc9b8 ^ (uint)fVar51) ^ uRam0000000146afc9b8);
        local_1f8 = local_1f8 * fVar36;
        fStack_1f0 = fStack_1f0 * fVar36;
        fStack_1f4 = fStack_1f4 * fVar36;
        fVar36 = (float)auStack_1e4 * fVar40;
        fVar42 = (float)local_1e8 * fVar40;
        uStack_1e0._0_4_ = (float)uStack_1e0 * fVar40;
        auStack_1e4 = (undefined1  [4])fVar36;
        fVar40 = (float)local_1d8._0_4_ * fVar44;
        fVar36 = (float)local_1d8._4_4_ * fVar44;
        fStack_1d0 = fStack_1d0 * fVar44;
        local_1e8 = (undefined1  [4])fVar42;
        local_1d8._4_4_ = fVar36;
        local_1d8._0_4_ = fVar40;
        uVar12 = FQuat::FQuat(&local_1b8,&local_1f8);
        auVar31._0_4_ = local_1b8 * local_1b8 + fStack_1b0 * fStack_1b0;
        auVar31._4_4_ = fStack_1b4 * fStack_1b4 + fStack_1ac * fStack_1ac;
        auVar31._8_4_ = fStack_1b0 * fStack_1b0 + local_1b8 * local_1b8;
        auVar31._12_4_ = fStack_1ac * fStack_1ac + fStack_1b4 * fStack_1b4;
        fVar48 = auVar31._4_4_ + auVar31._0_4_;
        fVar51 = auVar31._8_4_ + auVar31._4_4_;
        fVar56 = auVar31._12_4_ + auVar31._8_4_;
        fVar29 = auVar31._0_4_ + auVar31._12_4_;
        auVar3._4_4_ = fVar51;
        auVar3._0_4_ = fVar48;
        auVar3._8_4_ = fVar56;
        auVar3._12_4_ = fVar29;
        auVar30 = rsqrtps(auVar31,auVar3);
        fVar36 = auVar30._0_4_;
        fVar40 = auVar30._4_4_;
        fVar42 = auVar30._8_4_;
        fVar44 = auVar30._12_4_;
        fVar36 = (_DAT_146afc9a0 - fVar36 * fVar36 * fVar48 * _DAT_146afc9a0) * fVar36 + fVar36;
        fVar40 = (fRam0000000146afc9a4 - fVar40 * fVar40 * fVar51 * fRam0000000146afc9a4) * fVar40 +
                 fVar40;
        fVar42 = (fRam0000000146afc9a8 - fVar42 * fVar42 * fVar56 * fRam0000000146afc9a8) * fVar42 +
                 fVar42;
        fVar44 = (fRam0000000146afc9ac - fVar44 * fVar44 * fVar29 * fRam0000000146afc9ac) * fVar44 +
                 fVar44;
        fVar65 = 0.0;
        fVar46 = (float)(((uint)(((_DAT_146afc9a0 - fVar36 * fVar36 * fVar48 * _DAT_146afc9a0) *
                                  fVar36 + fVar36) * local_1b8) ^ _DAT_146afc990) &
                         -(uint)(1e-08 <= fVar48) ^ _DAT_146afc990);
        fVar49 = (float)(((uint)(((fRam0000000146afc9a4 -
                                  fVar40 * fVar40 * fVar51 * fRam0000000146afc9a4) * fVar40 + fVar40
                                 ) * fStack_1b4) ^ uRam0000000146afc994) & -(uint)(1e-08 <= fVar51)
                        ^ uRam0000000146afc994);
        fVar52 = (float)(((uint)(((fRam0000000146afc9a8 -
                                  fVar42 * fVar42 * fVar56 * fRam0000000146afc9a8) * fVar42 + fVar42
                                 ) * fStack_1b0) ^ uRam0000000146afc998) & -(uint)(1e-08 <= fVar56)
                        ^ uRam0000000146afc998);
        fVar58 = (float)(((uint)(((fRam0000000146afc9ac -
                                  fVar44 * fVar44 * fVar29 * fRam0000000146afc9ac) * fVar44 + fVar44
                                 ) * fStack_1ac) ^ uRam0000000146afc99c) & -(uint)(1e-08 <= fVar29)
                        ^ uRam0000000146afc99c);
        fVar59 = local_168;
        fVar62 = fStack_164;
        fVar43 = fStack_160;
        fVar45 = fStack_15c;
        fVar42 = (float)local_198._0_4_;
        fVar40 = (float)local_198._4_4_;
        fVar36 = fStack_190;
        fVar37 = fStack_18c;
        fVar57 = local_1c8;
        fVar60 = fStack_1c4;
        fVar63 = fStack_1c0;
      }
      fVar51 = fRam0000000146afc8f8;
      fVar48 = fRam0000000146afc8f4;
      fVar44 = _DAT_146afc8f0;
      auVar24._4_4_ = fVar62;
      auVar24._0_4_ = fVar59;
      auVar24._8_4_ = fVar43;
      auVar24._12_4_ = fVar45;
      auVar8._4_4_ = fVar74;
      auVar8._0_4_ = fVar55;
      auVar8._8_4_ = fVar38;
      auVar8._12_4_ = 0;
      auVar30 = minps(auVar24,auVar8);
      auVar25._4_4_ = -(uint)(auVar30._4_4_ < fRam0000000146afc9c4);
      auVar25._0_4_ = -(uint)(auVar30._0_4_ < _DAT_146afc9c0);
      auVar25._8_4_ = -(uint)(auVar30._8_4_ < fRam0000000146afc9c8);
      auVar25._12_4_ = -(uint)(auVar30._12_4_ < fRam0000000146afc9cc);
      iVar13 = movmskps(uVar12,auVar25);
      local_188 = _DAT_146afc9c0;
      fStack_184 = fRam0000000146afc9c4;
      fStack_180 = fRam0000000146afc9c8;
      fStack_17c = fRam0000000146afc9cc;
      if (iVar13 == 0) {
        fVar57 = fVar57 * fVar55;
        fVar60 = fVar60 * fVar74;
        fVar63 = fVar63 * fVar38;
        fVar65 = fVar65 * 0.0;
        local_1d8._4_4_ = fVar62 * fVar74;
        local_1d8._0_4_ = fVar59 * fVar55;
        fStack_1d0 = fVar43 * fVar38;
        fStack_1cc = fVar45 * 0.0;
        local_1f8 = fVar58 * fVar47 * _DAT_146afc980 + fVar53 * fVar46 +
                    fVar52 * fVar50 * _DAT_146afc970 + fVar49 * fVar54 * _DAT_146afc960;
        fStack_1f4 = fVar52 * fVar47 * fRam0000000146afc984 + fVar53 * fVar49 +
                     fVar58 * fVar50 * fRam0000000146afc974 + fVar46 * fVar54 * fRam0000000146afc964
        ;
        fStack_1f0 = fVar49 * fVar47 * fRam0000000146afc988 + fVar53 * fVar52 +
                     fVar46 * fVar50 * fRam0000000146afc978 + fVar58 * fVar54 * fRam0000000146afc968
        ;
        fStack_1ec = fVar46 * fVar47 * fRam0000000146afc98c + fVar53 * fVar58 +
                     fVar49 * fVar50 * fRam0000000146afc97c + fVar52 * fVar54 * fRam0000000146afc96c
        ;
        fVar44 = fVar63 * fVar50 - fVar60 * fVar54;
        fVar48 = fVar57 * fVar54 - fVar63 * fVar47;
        fVar51 = fVar60 * fVar47 - fVar57 * fVar50;
        fVar56 = fVar65 * fVar53 - fVar65 * fVar53;
        fVar44 = fVar44 + fVar44;
        fVar48 = fVar48 + fVar48;
        fVar51 = fVar51 + fVar51;
        fVar56 = fVar56 + fVar56;
        auStack_1e4 = (undefined1  [4])
                      ((fVar44 * fVar54 - fVar51 * fVar47) + fVar48 * fVar53 + fVar60 + fVar40);
        local_1e8 = (undefined1  [4])
                    ((fVar51 * fVar50 - fVar48 * fVar54) + fVar44 * fVar53 + fVar57 + fVar42);
        uStack_1e0._0_4_ = (fVar48 * fVar47 - fVar44 * fVar50) + fVar51 * fVar53 + fVar63 + fVar36;
        uStack_1e0._4_4_ = (fVar56 * fVar53 - fVar56 * fVar53) + fVar56 * fVar53 + fVar65 + fVar37;
      }
      else {
        fVar40 = fVar50 + fVar50;
        fVar42 = fVar54 + fVar54;
        fVar56 = fVar47 * (fVar47 + fVar47);
        fVar36 = fVar53 * (fVar47 + fVar47);
        fVar78 = (fVar53 * fVar42 + fVar47 * fVar40) * fVar55;
        fVar61 = (fVar36 + fVar50 * fVar42) * fVar74;
        fVar64 = (fVar53 * fVar40 + fVar47 * fVar42) * fVar38;
        fVar65 = fVar74 * (fVar47 * fVar40 - fVar53 * fVar42);
        fVar37 = fVar38 * (fVar50 * fVar42 - fVar36);
        fVar53 = fVar55 * (fVar47 * fVar42 - fVar53 * fVar40);
        fVar36 = (float)((uint)((_DAT_146afc8f0 - (fVar54 * fVar42 + fVar50 * fVar40)) * fVar55) &
                        _DAT_146afc900);
        fVar42 = (float)((uint)((fRam0000000146afc8f4 - (fVar54 * fVar42 + fVar56)) * fVar74) &
                        uRam0000000146afc904);
        fVar35 = (float)((uint)((fRam0000000146afc8f8 - (fVar50 * fVar40 + fVar56)) * fVar38) &
                        uRam0000000146afc908);
        fVar39 = (float)((uint)((fRam0000000146afc8fc - (fVar56 + fVar56)) * 0.0) &
                        uRam0000000146afc90c);
        fVar56 = fVar49 + fVar49;
        fVar29 = fVar52 + fVar52;
        fVar41 = fVar46 * (fVar46 + fVar46);
        fVar40 = fVar58 * (fVar46 + fVar46);
        fVar75 = (fVar58 * fVar29 + fVar46 * fVar56) * fVar59;
        fVar76 = (fVar40 + fVar49 * fVar29) * fVar62;
        fVar77 = (fVar58 * fVar56 + fVar46 * fVar29) * fVar43;
        fVar47 = fVar62 * (fVar46 * fVar56 - fVar58 * fVar29);
        fVar50 = fVar43 * (fVar49 * fVar29 - fVar40);
        fVar54 = fVar59 * (fVar46 * fVar29 - fVar58 * fVar56);
        fVar40 = (float)((uint)((_DAT_146afc8f0 - (fVar52 * fVar29 + fVar49 * fVar56)) * fVar59) &
                        _DAT_146afc900);
        fVar29 = (float)((uint)((fRam0000000146afc8f4 - (fVar52 * fVar29 + fVar41)) * fVar62) &
                        uRam0000000146afc904);
        fVar56 = (float)((uint)((fRam0000000146afc8f8 - (fVar49 * fVar56 + fVar41)) * fVar43) &
                        uRam0000000146afc908);
        fVar41 = (float)((uint)((fRam0000000146afc8fc - (fVar41 + fVar41)) * fVar45) &
                        uRam0000000146afc90c);
        local_258 = fVar75 * fVar65 + fVar40 * fVar36 + fVar54 * fVar64 +
                    fVar41 * (float)local_198._0_4_;
        fStack_254 = fVar75 * fVar42 + fVar40 * fVar78 + fVar54 * fVar37 +
                     fVar41 * (float)local_198._4_4_;
        fStack_250 = fVar75 * fVar61 + fVar40 * fVar53 + fVar54 * fVar35 + fVar41 * fStack_190;
        fStack_24c = fVar75 * fVar39 + fVar40 * fVar39 + fVar54 * fVar39 +
                     fVar41 * fRam0000000146afc8fc;
        local_248 = fVar29 * fVar65 + fVar47 * fVar36 + fVar76 * fVar64 +
                    fVar41 * (float)local_198._0_4_;
        fStack_244 = fVar29 * fVar42 + fVar47 * fVar78 + fVar76 * fVar37 +
                     fVar41 * (float)local_198._4_4_;
        fStack_240 = fVar29 * fVar61 + fVar47 * fVar53 + fVar76 * fVar35 + fVar41 * fStack_190;
        fStack_23c = fVar29 * fVar39 + fVar47 * fVar39 + fVar76 * fVar39 +
                     fVar41 * fRam0000000146afc8fc;
        local_238 = fVar50 * fVar65 + fVar77 * fVar36 + fVar56 * fVar64 +
                    fVar41 * (float)local_198._0_4_;
        fStack_234 = fVar50 * fVar42 + fVar77 * fVar78 + fVar56 * fVar37 +
                     fVar41 * (float)local_198._4_4_;
        fStack_230 = fVar50 * fVar61 + fVar77 * fVar53 + fVar56 * fVar35 + fVar41 * fStack_190;
        fStack_22c = fVar50 * fVar39 + fVar77 * fVar39 + fVar56 * fVar39 +
                     fVar41 * fRam0000000146afc8fc;
        local_228 = fVar60 * fVar65 + fVar57 * fVar36 + fVar63 * fVar64 +
                    fRam0000000146afc8fc * (float)local_198._0_4_;
        fStack_224 = fVar60 * fVar42 + fVar57 * fVar78 + fVar63 * fVar37 +
                     fRam0000000146afc8fc * (float)local_198._4_4_;
        fStack_220 = fVar60 * fVar61 + fVar57 * fVar53 + fVar63 * fVar35 +
                     fRam0000000146afc8fc * fStack_190;
        fStack_21c = fVar60 * fVar39 + fVar57 * fVar39 + fVar63 * fVar39 +
                     fRam0000000146afc8fc * fRam0000000146afc8fc;
        FMatrix::RemoveScaling(&local_258);
        fVar36 = (float)((_DAT_146afc9b0 ^ (uint)fVar44) & -(uint)(local_188 <= fVar59 * fVar55) ^
                        _DAT_146afc9b0);
        fVar40 = (float)((uRam0000000146afc9b4 ^ (uint)fVar48) &
                         -(uint)(fStack_184 <= fVar62 * fVar74) ^ uRam0000000146afc9b4);
        fVar42 = (float)((uRam0000000146afc9b8 ^ (uint)fVar51) &
                         -(uint)(fStack_180 <= fVar43 * fVar38) ^ uRam0000000146afc9b8);
        local_258 = local_258 * fVar36;
        fStack_254 = fStack_254 * fVar36;
        fStack_250 = fStack_250 * fVar36;
        fStack_240 = fStack_240 * fVar40;
        fStack_244 = fStack_244 * fVar40;
        local_248 = local_248 * fVar40;
        fStack_230 = fStack_230 * fVar42;
        local_238 = local_238 * fVar42;
        fStack_234 = fStack_234 * fVar42;
        FQuat::FQuat(&local_1b8,&local_258);
        local_1d8._4_4_ = fVar62 * fVar74;
        local_1d8._0_4_ = fVar59 * fVar55;
        fStack_1d0 = fVar43 * fVar38;
        fStack_1cc = fVar45 * 0.0;
        auVar32._0_4_ = local_1b8 * local_1b8 + fStack_1b0 * fStack_1b0;
        auVar32._4_4_ = fStack_1b4 * fStack_1b4 + fStack_1ac * fStack_1ac;
        auVar32._8_4_ = fStack_1b0 * fStack_1b0 + local_1b8 * local_1b8;
        auVar32._12_4_ = fStack_1ac * fStack_1ac + fStack_1b4 * fStack_1b4;
        fVar48 = auVar32._4_4_ + auVar32._0_4_;
        fVar51 = auVar32._8_4_ + auVar32._4_4_;
        fVar56 = auVar32._12_4_ + auVar32._8_4_;
        fVar29 = auVar32._0_4_ + auVar32._12_4_;
        auVar4._4_4_ = fVar51;
        auVar4._0_4_ = fVar48;
        auVar4._8_4_ = fVar56;
        auVar4._12_4_ = fVar29;
        auVar30 = rsqrtps(auVar32,auVar4);
        fVar36 = auVar30._0_4_;
        fVar40 = auVar30._4_4_;
        fVar42 = auVar30._8_4_;
        fVar44 = auVar30._12_4_;
        fVar36 = (_DAT_146afc9a0 - fVar36 * fVar36 * fVar48 * _DAT_146afc9a0) * fVar36 + fVar36;
        fVar40 = (fRam0000000146afc9a4 - fVar40 * fVar40 * fVar51 * fRam0000000146afc9a4) * fVar40 +
                 fVar40;
        fVar42 = (fRam0000000146afc9a8 - fVar42 * fVar42 * fVar56 * fRam0000000146afc9a8) * fVar42 +
                 fVar42;
        fVar44 = (fRam0000000146afc9ac - fVar44 * fVar44 * fVar29 * fRam0000000146afc9ac) * fVar44 +
                 fVar44;
        auStack_1e4 = (undefined1  [4])fStack_224;
        local_1e8 = (undefined1  [4])local_228;
        uStack_1e0._0_4_ = fStack_220;
        local_1f8 = (float)(((uint)(((_DAT_146afc9a0 - fVar36 * fVar36 * fVar48 * _DAT_146afc9a0) *
                                     fVar36 + fVar36) * local_1b8) ^ _DAT_146afc990) &
                            -(uint)(1e-08 <= fVar48) ^ _DAT_146afc990);
        fStack_1f4 = (float)(((uint)(((fRam0000000146afc9a4 -
                                      fVar40 * fVar40 * fVar51 * fRam0000000146afc9a4) * fVar40 +
                                     fVar40) * fStack_1b4) ^ uRam0000000146afc994) &
                             -(uint)(1e-08 <= fVar51) ^ uRam0000000146afc994);
        fStack_1f0 = (float)(((uint)(((fRam0000000146afc9a8 -
                                      fVar42 * fVar42 * fVar56 * fRam0000000146afc9a8) * fVar42 +
                                     fVar42) * fStack_1b0) ^ uRam0000000146afc998) &
                             -(uint)(1e-08 <= fVar56) ^ uRam0000000146afc998);
        fStack_1ec = (float)(((uint)(((fRam0000000146afc9ac -
                                      fVar44 * fVar44 * fVar29 * fRam0000000146afc9ac) * fVar44 +
                                     fVar44) * fStack_1ac) ^ uRam0000000146afc99c) &
                             -(uint)(1e-08 <= fVar29) ^ uRam0000000146afc99c);
        uStack_1e0._4_4_ = 0.0;
      }
      puVar19 = (undefined1 *)0x0;
      local_210 = 0;
      local_208 = 0;
      (**(code **)(*param_2 + 0x4b8))(param_2,&local_210,1);
      if (param_5 == (longlong *)0x0) {
        cVar11 = FUN_142542270(param_1,param_2,plVar21,&local_1f8,&local_210);
      }
      else {
        cVar11 = FUN_142542610(param_1,param_2,plVar21,&local_1f8,param_5,&local_210);
      }
      if (cVar11 == '\0') {
        uVar12 = 0;
        local_218 = 0;
      }
      else {
        if (param_5 == (longlong *)0x0) {
LAB_14254584e:
          if (local_210 != 0) {
            FMemory::Free();
          }
          return (undefined1 *)0x1;
        }
        local_218 = *param_5;
        puVar19 = (undefined1 *)0x1;
        uVar12 = (undefined4)param_5[1];
      }
      if (local_210 != 0) {
        FMemory::Free();
      }
      uVar15 = (undefined4)local_218;
      uVar68 = (undefined4)((ulonglong)local_218 >> 0x20);
    }
    else {
      uVar12 = 0;
      uVar15 = 0;
      uVar68 = 0;
    }
    goto LAB_142545903;
  }
  bVar9 = false;
  local_210 = 0;
  local_208 = 0;
  cVar11 = FUN_140a9e330(plVar1);
  if ((cVar11 == '\0') ||
     (iVar13 = (**(code **)(*plVar1 + 0x4e8))(plVar1), (iVar13 - 1U & 0xfffffffd) != 0)) {
LAB_142544d06:
    uVar15 = 0;
    uVar68 = 0;
    uVar12 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x4b8))(param_2,&local_210,1);
    bVar9 = true;
    if (param_5 == (longlong *)0x0) {
      cVar11 = FUN_142542270(param_1,param_2,plVar1,&local_1f8,&local_210);
    }
    else {
      cVar11 = FUN_142542610(param_1,param_2,plVar1,&local_1f8,param_5,&local_210);
    }
    fVar47 = local_1f8;
    fVar50 = fStack_1f4;
    fVar54 = fStack_1f0;
    fVar53 = fStack_1ec;
    if (cVar11 == '\0') {
      local_138 = _local_1d8;
      _local_198 = _local_1e8;
      local_178 = local_1f8;
      fStack_174 = fStack_1f4;
      fStack_170 = fStack_1f0;
      fStack_16c = fStack_1ec;
      goto LAB_142544d06;
    }
    if (param_5 == (longlong *)0x0) goto LAB_14254584e;
    uVar15 = (undefined4)*param_5;
    uVar68 = (undefined4)((ulonglong)*param_5 >> 0x20);
    uVar12 = (undefined4)param_5[1];
    local_138 = _local_1d8;
    _local_198 = _local_1e8;
    local_178 = local_1f8;
    fStack_174 = fStack_1f4;
    fStack_170 = fStack_1f0;
    fStack_16c = fStack_1ec;
    bVar10 = 1;
  }
  local_218 = CONCAT44(uVar68,uVar15);
  local_1a8 = (longlong *)0x0;
  local_1a0 = 0;
  FUN_14238b380(plVar1,1,&local_1a8);
  plVar1 = local_1a8 + (int)local_1a0;
  for (plVar21 = local_1a8; plVar21 != plVar1; plVar21 = plVar21 + 1) {
    plVar2 = (longlong *)*plVar21;
    if ((plVar2 != (longlong *)0x0) &&
       (iVar13 = (**(code **)(*plVar2 + 0x4e8))(plVar2), (iVar13 - 1U & 0xfffffffd) == 0)) {
      uVar14 = FUN_140a9e330(plVar2);
      fVar51 = fRam0000000146afc9c8;
      fVar48 = fRam0000000146afc9c4;
      fVar44 = _DAT_146afc9c0;
      fVar42 = fRam0000000146afc8f8;
      fVar40 = fRam0000000146afc8f4;
      fVar36 = _DAT_146afc8f0;
      plVar20 = (longlong *)0x0;
      if ((char)uVar14 != '\0') {
        plVar20 = plVar2;
      }
      if (plVar20 != (longlong *)0x0) {
        auVar30 = *(undefined1 (*) [16])(plVar2 + 0x46);
        fVar56 = auVar30._0_4_;
        fVar55 = auVar30._4_4_;
        fVar74 = auVar30._8_4_;
        auVar7._4_4_ = fVar35;
        auVar7._0_4_ = fVar29;
        auVar7._8_4_ = fVar39;
        auVar7._12_4_ = fVar41;
        auVar22 = minps(auVar30,auVar7);
        local_128 = _DAT_146afc9c0;
        fStack_124 = fRam0000000146afc9c4;
        fStack_120 = fRam0000000146afc9c8;
        fStack_11c = fRam0000000146afc9cc;
        auVar26._4_4_ = -(uint)(auVar22._4_4_ < fRam0000000146afc9c4);
        auVar26._0_4_ = -(uint)(auVar22._0_4_ < _DAT_146afc9c0);
        auVar26._8_4_ = -(uint)(auVar22._8_4_ < fRam0000000146afc9c8);
        auVar26._12_4_ = -(uint)(auVar22._12_4_ < fRam0000000146afc9cc);
        iVar13 = movmskps(uVar14,auVar26);
        local_f8 = CONCAT44(fRam0000000146afc9a4,_DAT_146afc9a0);
        uStack_f0 = CONCAT44(fRam0000000146afc9ac,fRam0000000146afc9a8);
        if (iVar13 == 0) {
          fVar36 = *(float *)(plVar2 + 0x42);
          fVar40 = *(float *)((longlong)plVar2 + 0x214);
          fVar42 = *(float *)(plVar2 + 0x43);
          fVar44 = *(float *)((longlong)plVar2 + 0x21c);
          fVar48 = *(float *)(plVar2 + 0x44) * fVar29;
          fVar51 = *(float *)((longlong)plVar2 + 0x224) * fVar35;
          fVar56 = *(float *)(plVar2 + 0x45) * fVar39;
          fVar55 = *(float *)((longlong)plVar2 + 0x22c) * fVar41;
          fVar74 = fVar75 * fVar44 * _DAT_146afc980 + fVar36 * fVar78 +
                   fVar76 * fVar42 * _DAT_146afc970 + fVar77 * fVar40 * _DAT_146afc960;
          fVar38 = fVar75 * fVar42 * fRam0000000146afc984 + fVar40 * fVar78 +
                   fVar76 * fVar44 * fRam0000000146afc974 + fVar77 * fVar36 * fRam0000000146afc964;
          fVar37 = fVar75 * fVar40 * fRam0000000146afc988 + fVar42 * fVar78 +
                   fVar76 * fVar36 * fRam0000000146afc978 + fVar77 * fVar44 * fRam0000000146afc968;
          fVar59 = fVar75 * fVar36 * fRam0000000146afc98c + fVar44 * fVar78 +
                   fVar76 * fVar40 * fRam0000000146afc97c + fVar77 * fVar42 * fRam0000000146afc96c;
          fVar36 = fVar56 * fVar76 - fVar51 * fVar77;
          fVar40 = fVar48 * fVar77 - fVar56 * fVar75;
          fVar42 = fVar51 * fVar75 - fVar48 * fVar76;
          fVar44 = fVar55 * fVar78 - fVar55 * fVar78;
          fVar36 = fVar36 + fVar36;
          fVar40 = fVar40 + fVar40;
          fVar42 = fVar42 + fVar42;
          fVar44 = fVar44 + fVar44;
          local_118 = *(float *)(plVar2 + 0x46) * fVar29;
          fStack_114 = *(float *)((longlong)plVar2 + 0x234) * fVar35;
          fStack_110 = *(float *)(plVar2 + 0x47) * fVar39;
          fStack_10c = *(float *)((longlong)plVar2 + 0x23c) * fVar41;
          fVar57 = (fVar42 * fVar76 - fVar40 * fVar77) + fVar36 * fVar78 + fVar48 + fVar57;
          fVar60 = (fVar36 * fVar77 - fVar42 * fVar75) + fVar40 * fVar78 + fVar51 + fVar60;
          fVar63 = (fVar40 * fVar75 - fVar36 * fVar76) + fVar42 * fVar78 + fVar56 + fVar63;
          fVar65 = (fVar44 * fVar78 - fVar44 * fVar78) + fVar44 * fVar78 + fVar55 + fVar65;
          uVar15 = 0;
        }
        else {
          fVar60 = fVar76 + fVar76;
          fVar63 = fVar77 + fVar77;
          fStack_10c = auVar30._12_4_ * fVar41;
          fVar57 = fVar78 * (fVar75 + fVar75);
          fVar37 = (fVar75 + fVar75) * fVar75;
          fVar71 = (fVar78 * fVar63 + fVar75 * fVar60) * fVar29;
          fVar72 = (fVar57 + fVar76 * fVar63) * fVar35;
          fVar73 = (fVar78 * fVar60 + fVar75 * fVar63) * fVar39;
          fVar46 = fVar35 * (fVar75 * fVar60 - fVar78 * fVar63);
          fVar52 = fVar39 * (fVar76 * fVar63 - fVar57);
          fVar58 = fVar29 * (fVar75 * fVar63 - fVar78 * fVar60);
          fVar65 = (float)((uint)((_DAT_146afc8f0 - (fVar63 * fVar77 + fVar60 * fVar76)) * fVar29) &
                          _DAT_146afc900);
          fVar38 = (float)((uint)((fRam0000000146afc8f4 - (fVar63 * fVar77 + fVar37)) * fVar35) &
                          uRam0000000146afc904);
          fVar59 = (float)((uint)((fRam0000000146afc8f8 - (fVar60 * fVar76 + fVar37)) * fVar39) &
                          uRam0000000146afc908);
          fVar43 = (float)((uint)((fRam0000000146afc8fc - (fVar37 + fVar37)) * fVar41) &
                          uRam0000000146afc90c);
          fVar41 = *(float *)(plVar2 + 0x42);
          fVar57 = *(float *)((longlong)plVar2 + 0x214);
          fVar60 = *(float *)(plVar2 + 0x43);
          fVar63 = *(float *)((longlong)plVar2 + 0x21c);
          fVar62 = fVar57 + fVar57;
          fVar45 = fVar60 + fVar60;
          fVar49 = (fVar41 + fVar41) * fVar41;
          fVar37 = (fVar41 + fVar41) * fVar63;
          fVar67 = (fVar45 * fVar63 + fVar62 * fVar41) * fVar56;
          fVar69 = (fVar37 + fVar45 * fVar57) * fVar55;
          fVar70 = (fVar62 * fVar63 + fVar45 * fVar41) * fVar74;
          fVar61 = fVar55 * (fVar62 * fVar41 - fVar45 * fVar63);
          fVar64 = fVar74 * (fVar45 * fVar57 - fVar37);
          fVar66 = fVar56 * (fVar45 * fVar41 - fVar62 * fVar63);
          fVar63 = (float)((uint)((_DAT_146afc8f0 - (fVar45 * fVar60 + fVar62 * fVar57)) *
                                 *(float *)(plVar2 + 0x46)) & _DAT_146afc900);
          fVar37 = (float)((uint)((fRam0000000146afc8f4 - (fVar45 * fVar60 + fVar49)) *
                                 *(float *)((longlong)plVar2 + 0x234)) & uRam0000000146afc904);
          fVar62 = (float)((uint)((fRam0000000146afc8f8 - (fVar62 * fVar57 + fVar49)) *
                                 *(float *)(plVar2 + 0x47)) & uRam0000000146afc908);
          fVar45 = (float)((uint)((fRam0000000146afc8fc - (fVar49 + fVar49)) *
                                 *(float *)((longlong)plVar2 + 0x23c)) & uRam0000000146afc90c);
          fVar41 = *(float *)(plVar2 + 0x44);
          fVar57 = *(float *)((longlong)plVar2 + 0x224);
          fVar60 = *(float *)(plVar2 + 0x45);
          local_258 = fVar67 * fVar46 + fVar63 * fVar65 + fVar66 * fVar73 + fVar45 * local_188;
          fStack_254 = fVar67 * fVar38 + fVar63 * fVar71 + fVar66 * fVar52 + fVar45 * fStack_184;
          fStack_250 = fVar67 * fVar72 + fVar63 * fVar58 + fVar66 * fVar59 + fVar45 * fStack_180;
          fStack_24c = fVar67 * fVar43 + fVar63 * fVar43 + fVar66 * fVar43 +
                       fVar45 * fRam0000000146afc8fc;
          local_248 = fVar37 * fVar46 + fVar61 * fVar65 + fVar69 * fVar73 + fVar45 * local_188;
          fStack_244 = fVar37 * fVar38 + fVar61 * fVar71 + fVar69 * fVar52 + fVar45 * fStack_184;
          fStack_240 = fVar37 * fVar72 + fVar61 * fVar58 + fVar69 * fVar59 + fVar45 * fStack_180;
          fStack_23c = fVar37 * fVar43 + fVar61 * fVar43 + fVar69 * fVar43 +
                       fVar45 * fRam0000000146afc8fc;
          local_238 = fVar70 * fVar65 + fVar64 * fVar46 + fVar62 * fVar73 + fVar45 * local_188;
          fStack_234 = fVar70 * fVar71 + fVar64 * fVar38 + fVar62 * fVar52 + fVar45 * fStack_184;
          fStack_230 = fVar70 * fVar58 + fVar64 * fVar72 + fVar62 * fVar59 + fVar45 * fStack_180;
          fStack_22c = fVar70 * fVar43 + fVar64 * fVar43 + fVar62 * fVar43 +
                       fVar45 * fRam0000000146afc8fc;
          local_228 = fVar57 * fVar46 + fVar41 * fVar65 + fVar60 * fVar73 +
                      fRam0000000146afc8fc * local_188;
          fStack_224 = fVar57 * fVar38 + fVar41 * fVar71 + fVar60 * fVar52 +
                       fRam0000000146afc8fc * fStack_184;
          fStack_220 = fVar57 * fVar72 + fVar41 * fVar58 + fVar60 * fVar59 +
                       fRam0000000146afc8fc * fStack_180;
          fStack_21c = fVar57 * fVar43 + fVar41 * fVar43 + fVar60 * fVar43 +
                       fRam0000000146afc8fc * fRam0000000146afc8fc;
          local_118 = fVar56 * fVar29;
          fStack_114 = fVar55 * fVar35;
          fStack_110 = fVar74 * fVar39;
          FMatrix::RemoveScaling(&local_258);
          fVar36 = (float)(-(uint)(fVar44 <= fVar56 * fVar29) & (_DAT_146afc9b0 ^ (uint)fVar36) ^
                          _DAT_146afc9b0);
          fVar40 = (float)(-(uint)(fVar48 <= fVar55 * fVar35) &
                           (uRam0000000146afc9b4 ^ (uint)fVar40) ^ uRam0000000146afc9b4);
          fVar42 = (float)(-(uint)(fVar51 <= fVar74 * fVar39) &
                           (uRam0000000146afc9b8 ^ (uint)fVar42) ^ uRam0000000146afc9b8);
          local_258 = local_258 * fVar36;
          fStack_254 = fStack_254 * fVar36;
          fStack_250 = fStack_250 * fVar36;
          fStack_240 = fStack_240 * fVar40;
          fStack_244 = fStack_244 * fVar40;
          local_248 = local_248 * fVar40;
          fStack_230 = fStack_230 * fVar42;
          local_238 = local_238 * fVar42;
          fStack_234 = fStack_234 * fVar42;
          uVar15 = FQuat::FQuat(&local_108,&local_258);
          local_200 = 0x322bcc77;
          auVar33._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
          auVar33._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
          auVar33._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
          auVar33._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
          fVar48 = auVar33._4_4_ + auVar33._0_4_;
          fVar51 = auVar33._8_4_ + auVar33._4_4_;
          fVar56 = auVar33._12_4_ + auVar33._8_4_;
          fVar29 = auVar33._0_4_ + auVar33._12_4_;
          auVar30._4_4_ = fVar51;
          auVar30._0_4_ = fVar48;
          auVar30._8_4_ = fVar56;
          auVar30._12_4_ = fVar29;
          auVar30 = rsqrtps(auVar33,auVar30);
          fVar36 = auVar30._0_4_;
          fVar40 = auVar30._4_4_;
          fVar42 = auVar30._8_4_;
          fVar44 = auVar30._12_4_;
          fVar36 = ((float)local_f8 - fVar36 * fVar36 * fVar48 * (float)local_f8) * fVar36 + fVar36;
          fVar40 = (local_f8._4_4_ - fVar40 * fVar40 * fVar51 * local_f8._4_4_) * fVar40 + fVar40;
          fVar42 = ((float)uStack_f0 - fVar42 * fVar42 * fVar56 * (float)uStack_f0) * fVar42 +
                   fVar42;
          fVar44 = (uStack_f0._4_4_ - fVar44 * fVar44 * fVar29 * uStack_f0._4_4_) * fVar44 + fVar44;
          fVar65 = 0.0;
          fVar74 = (float)(((uint)((((float)local_f8 - fVar36 * fVar36 * fVar48 * (float)local_f8) *
                                    fVar36 + fVar36) * local_108) ^ _DAT_146afc990) &
                           -(uint)(1e-08 <= fVar48) ^ _DAT_146afc990);
          fVar38 = (float)(((uint)(((local_f8._4_4_ - fVar40 * fVar40 * fVar51 * local_f8._4_4_) *
                                    fVar40 + fVar40) * fStack_104) ^ uRam0000000146afc994) &
                           -(uint)(1e-08 <= fVar51) ^ uRam0000000146afc994);
          fVar37 = (float)(((uint)((((float)uStack_f0 - fVar42 * fVar42 * fVar56 * (float)uStack_f0)
                                    * fVar42 + fVar42) * fStack_100) ^ uRam0000000146afc998) &
                           -(uint)(1e-08 <= fVar56) ^ uRam0000000146afc998);
          fVar59 = (float)(((uint)(((uStack_f0._4_4_ - fVar44 * fVar44 * fVar29 * uStack_f0._4_4_) *
                                    fVar44 + fVar44) * fStack_fc) ^ uRam0000000146afc99c) &
                           -(uint)(1e-08 <= fVar29) ^ uRam0000000146afc99c);
          fVar57 = local_228;
          fVar60 = fStack_224;
          fVar63 = fStack_220;
          local_108 = fVar74;
          fStack_104 = fVar38;
          fStack_100 = fVar37;
          fStack_fc = fVar59;
        }
        fVar56 = fRam0000000146afc8f8;
        fVar51 = fRam0000000146afc8f4;
        fVar48 = _DAT_146afc8f0;
        fVar36 = local_138._0_4_;
        fVar40 = local_138._4_4_;
        fVar42 = local_138._8_4_;
        fVar44 = local_138._12_4_;
        auVar27._4_4_ = fStack_114;
        auVar27._0_4_ = local_118;
        auVar27._8_4_ = fStack_110;
        auVar27._12_4_ = fStack_10c;
        auVar30 = minps(auVar27,local_138);
        auVar28._4_4_ = -(uint)(auVar30._4_4_ < fRam0000000146afc9c4);
        auVar28._0_4_ = -(uint)(auVar30._0_4_ < _DAT_146afc9c0);
        auVar28._8_4_ = -(uint)(auVar30._8_4_ < fRam0000000146afc9c8);
        auVar28._12_4_ = -(uint)(auVar30._12_4_ < fRam0000000146afc9cc);
        iVar13 = movmskps(uVar15,auVar28);
        local_128 = _DAT_146afc9c0;
        fStack_124 = fRam0000000146afc9c4;
        fStack_120 = fRam0000000146afc9c8;
        fStack_11c = fRam0000000146afc9cc;
        if (iVar13 == 0) {
          fVar57 = fVar57 * fVar36;
          fVar60 = fVar60 * fVar40;
          fVar63 = fVar63 * fVar42;
          fVar65 = fVar65 * fVar44;
          local_1f8 = fVar59 * fVar47 * _DAT_146afc980 + fVar74 * fVar53 +
                      fVar37 * fVar50 * _DAT_146afc970 + fVar38 * fVar54 * _DAT_146afc960;
          fStack_1f4 = fVar37 * fVar47 * fRam0000000146afc984 + fVar38 * fVar53 +
                       fVar59 * fVar50 * fRam0000000146afc974 +
                       fVar74 * fVar54 * fRam0000000146afc964;
          fStack_1f0 = fVar38 * fVar47 * fRam0000000146afc988 + fVar37 * fVar53 +
                       fVar74 * fVar50 * fRam0000000146afc978 +
                       fVar59 * fVar54 * fRam0000000146afc968;
          fStack_1ec = fVar74 * fVar47 * fRam0000000146afc98c + fVar59 * fVar53 +
                       fVar38 * fVar50 * fRam0000000146afc97c +
                       fVar37 * fVar54 * fRam0000000146afc96c;
          local_1d8._4_4_ = fStack_114 * fVar40;
          local_1d8._0_4_ = local_118 * fVar36;
          fStack_1d0 = fStack_110 * fVar42;
          fStack_1cc = fStack_10c * fVar44;
          fVar36 = fVar63 * fVar50 - fVar60 * fVar54;
          fVar40 = fVar57 * fVar54 - fVar63 * fVar47;
          fVar42 = fVar60 * fVar47 - fVar57 * fVar50;
          fVar44 = fVar65 * fVar53 - fVar65 * fVar53;
          fVar36 = fVar36 + fVar36;
          fVar40 = fVar40 + fVar40;
          fVar42 = fVar42 + fVar42;
          fVar44 = fVar44 + fVar44;
          local_1e8 = (undefined1  [4])
                      ((fVar42 * fVar50 - fVar40 * fVar54) + fVar53 * fVar36 + fVar57 +
                      (float)local_198._0_4_);
          auStack_1e4 = (undefined1  [4])
                        ((fVar36 * fVar54 - fVar42 * fVar47) + fVar53 * fVar40 + fVar60 +
                        (float)local_198._4_4_);
          uStack_1e0._0_4_ =
               (fVar40 * fVar47 - fVar36 * fVar50) + fVar53 * fVar42 + fVar63 + fStack_190;
          uStack_1e0._4_4_ =
               (fVar44 * fVar53 - fVar44 * fVar53) + fVar53 * fVar44 + fVar65 + fStack_18c;
        }
        else {
          fVar35 = fStack_174 + fStack_174;
          fVar39 = fStack_170 + fStack_170;
          fVar58 = local_118 * fVar36;
          fVar61 = fStack_114 * fVar40;
          fVar64 = fStack_110 * fVar42;
          fVar66 = fStack_10c * fVar44;
          fVar41 = (local_178 + local_178) * local_178;
          fVar29 = (local_178 + local_178) * fStack_16c;
          fVar46 = (fVar39 * fStack_16c + fVar35 * local_178) * fVar36;
          fVar49 = (fVar29 + fVar39 * fStack_174) * fVar40;
          fVar52 = (fVar35 * fStack_16c + fVar39 * local_178) * fVar42;
          fVar65 = fVar40 * (fVar35 * local_178 - fVar39 * fStack_16c);
          fVar50 = fVar42 * (fVar39 * fStack_174 - fVar29);
          fVar53 = fVar36 * (fVar39 * local_178 - fVar35 * fStack_16c);
          fVar36 = (float)((uint)((_DAT_146afc8f0 - (fVar39 * fStack_170 + fVar35 * fStack_174)) *
                                 fVar36) & _DAT_146afc900);
          fVar29 = (float)((uint)((fRam0000000146afc8f4 - (fVar39 * fStack_170 + fVar41)) * fVar40)
                          & uRam0000000146afc904);
          fVar35 = (float)((uint)((fRam0000000146afc8f8 - (fVar35 * fStack_174 + fVar41)) * fVar42)
                          & uRam0000000146afc908);
          fVar39 = (float)((uint)((fRam0000000146afc8fc - (fVar41 + fVar41)) * fVar44) &
                          uRam0000000146afc90c);
          fVar42 = fVar38 + fVar38;
          fVar44 = fVar37 + fVar37;
          fVar41 = (fVar74 + fVar74) * fVar74;
          fVar40 = fVar59 * (fVar74 + fVar74);
          fVar62 = (fVar59 * fVar44 + fVar74 * fVar42) * local_118;
          fVar43 = (fVar40 + fVar38 * fVar44) * fStack_114;
          fVar45 = (fVar59 * fVar42 + fVar74 * fVar44) * fStack_110;
          fVar47 = fStack_114 * (fVar74 * fVar42 - fVar59 * fVar44);
          fVar54 = fStack_110 * (fVar38 * fVar44 - fVar40);
          fVar55 = local_118 * (fVar74 * fVar44 - fVar59 * fVar42);
          fVar40 = (float)((uint)((_DAT_146afc8f0 - (fVar44 * fVar37 + fVar42 * fVar38)) * local_118
                                 ) & _DAT_146afc900);
          fVar44 = (float)((uint)((fRam0000000146afc8f4 - (fVar44 * fVar37 + fVar41)) * fStack_114)
                          & uRam0000000146afc904);
          fVar42 = (float)((uint)((fRam0000000146afc8f8 - (fVar42 * fVar38 + fVar41)) * fStack_110)
                          & uRam0000000146afc908);
          fVar41 = (float)((uint)((fRam0000000146afc8fc - (fVar41 + fVar41)) * fStack_10c) &
                          uRam0000000146afc90c);
          local_258 = fVar62 * fVar65 + fVar40 * fVar36 + fVar55 * fVar52 +
                      fVar41 * (float)local_198._0_4_;
          fStack_254 = fVar62 * fVar29 + fVar40 * fVar46 + fVar55 * fVar50 +
                       fVar41 * (float)local_198._4_4_;
          fStack_250 = fVar62 * fVar49 + fVar40 * fVar53 + fVar55 * fVar35 + fVar41 * fStack_190;
          fStack_24c = fVar62 * fVar39 + fVar40 * fVar39 + fVar55 * fVar39 +
                       fVar41 * fRam0000000146afc8fc;
          local_248 = fVar44 * fVar65 + fVar47 * fVar36 + fVar43 * fVar52 +
                      fVar41 * (float)local_198._0_4_;
          fStack_244 = fVar44 * fVar29 + fVar47 * fVar46 + fVar43 * fVar50 +
                       fVar41 * (float)local_198._4_4_;
          fStack_240 = fVar44 * fVar49 + fVar47 * fVar53 + fVar43 * fVar35 + fVar41 * fStack_190;
          fStack_23c = fVar44 * fVar39 + fVar47 * fVar39 + fVar43 * fVar39 +
                       fVar41 * fRam0000000146afc8fc;
          local_238 = fVar54 * fVar65 + fVar45 * fVar36 + fVar42 * fVar52 +
                      fVar41 * (float)local_198._0_4_;
          fStack_234 = fVar54 * fVar29 + fVar45 * fVar46 + fVar42 * fVar50 +
                       fVar41 * (float)local_198._4_4_;
          fStack_230 = fVar54 * fVar49 + fVar45 * fVar53 + fVar42 * fVar35 + fVar41 * fStack_190;
          fStack_22c = fVar54 * fVar39 + fVar45 * fVar39 + fVar42 * fVar39 +
                       fVar41 * fRam0000000146afc8fc;
          local_228 = fVar60 * fVar65 + fVar57 * fVar36 + fVar63 * fVar52 +
                      fRam0000000146afc8fc * (float)local_198._0_4_;
          fStack_224 = fVar60 * fVar29 + fVar57 * fVar46 + fVar63 * fVar50 +
                       fRam0000000146afc8fc * (float)local_198._4_4_;
          fStack_220 = fVar60 * fVar49 + fVar57 * fVar53 + fVar63 * fVar35 +
                       fRam0000000146afc8fc * fStack_190;
          fStack_21c = fVar60 * fVar39 + fVar57 * fVar39 + fVar63 * fVar39 +
                       fRam0000000146afc8fc * fRam0000000146afc8fc;
          FMatrix::RemoveScaling(&local_258);
          fVar36 = (float)(-(uint)(local_128 <= fVar58) & (_DAT_146afc9b0 ^ (uint)fVar48) ^
                          _DAT_146afc9b0);
          fVar40 = (float)(-(uint)(fStack_124 <= fVar61) & (uRam0000000146afc9b4 ^ (uint)fVar51) ^
                          uRam0000000146afc9b4);
          fVar42 = (float)(-(uint)(fStack_120 <= fVar64) & (uRam0000000146afc9b8 ^ (uint)fVar56) ^
                          uRam0000000146afc9b8);
          local_258 = local_258 * fVar36;
          fStack_254 = fStack_254 * fVar36;
          fStack_250 = fStack_250 * fVar36;
          fStack_244 = fStack_244 * fVar40;
          fStack_240 = fStack_240 * fVar40;
          local_248 = local_248 * fVar40;
          fStack_234 = fStack_234 * fVar42;
          fStack_230 = fStack_230 * fVar42;
          local_238 = local_238 * fVar42;
          FQuat::FQuat(&local_168,&local_258);
          local_200 = 0x322bcc77;
          local_1d8._4_4_ = fVar61;
          local_1d8._0_4_ = fVar58;
          fStack_1d0 = fVar64;
          fStack_1cc = fVar66;
          auVar34._0_4_ = local_168 * local_168 + fStack_160 * fStack_160;
          auVar34._4_4_ = fStack_164 * fStack_164 + fStack_15c * fStack_15c;
          auVar34._8_4_ = fStack_160 * fStack_160 + local_168 * local_168;
          auVar34._12_4_ = fStack_15c * fStack_15c + fStack_164 * fStack_164;
          fVar48 = auVar34._4_4_ + auVar34._0_4_;
          fVar51 = auVar34._8_4_ + auVar34._4_4_;
          fVar56 = auVar34._12_4_ + auVar34._8_4_;
          fVar29 = auVar34._0_4_ + auVar34._12_4_;
          auVar5._4_4_ = fVar51;
          auVar5._0_4_ = fVar48;
          auVar5._8_4_ = fVar56;
          auVar5._12_4_ = fVar29;
          auVar30 = rsqrtps(auVar34,auVar5);
          fVar36 = auVar30._0_4_;
          fVar40 = auVar30._4_4_;
          fVar42 = auVar30._8_4_;
          fVar44 = auVar30._12_4_;
          fVar36 = ((float)local_f8 - fVar36 * fVar36 * fVar48 * (float)local_f8) * fVar36 + fVar36;
          fVar40 = (local_f8._4_4_ - fVar40 * fVar40 * fVar51 * local_f8._4_4_) * fVar40 + fVar40;
          fVar42 = ((float)uStack_f0 - fVar42 * fVar42 * fVar56 * (float)uStack_f0) * fVar42 +
                   fVar42;
          fVar44 = (uStack_f0._4_4_ - fVar44 * fVar44 * fVar29 * uStack_f0._4_4_) * fVar44 + fVar44;
          auStack_1e4 = (undefined1  [4])fStack_224;
          local_1e8 = (undefined1  [4])local_228;
          uStack_1e0._0_4_ = fStack_220;
          local_1f8 = (float)(((uint)((((float)local_f8 - fVar36 * fVar36 * fVar48 * (float)local_f8
                                       ) * fVar36 + fVar36) * local_168) ^ _DAT_146afc990) &
                              -(uint)(1e-08 <= fVar48) ^ _DAT_146afc990);
          fStack_1f4 = (float)(((uint)(((local_f8._4_4_ - fVar40 * fVar40 * fVar51 * local_f8._4_4_)
                                        * fVar40 + fVar40) * fStack_164) ^ uRam0000000146afc994) &
                               -(uint)(1e-08 <= fVar51) ^ uRam0000000146afc994);
          fStack_1f0 = (float)(((uint)((((float)uStack_f0 -
                                        fVar42 * fVar42 * fVar56 * (float)uStack_f0) * fVar42 +
                                       fVar42) * fStack_160) ^ uRam0000000146afc998) &
                               -(uint)(1e-08 <= fVar56) ^ uRam0000000146afc998);
          fStack_1ec = (float)(((uint)(((uStack_f0._4_4_ -
                                        fVar44 * fVar44 * fVar29 * uStack_f0._4_4_) * fVar44 +
                                       fVar44) * fStack_15c) ^ uRam0000000146afc99c) &
                               -(uint)(1e-08 <= fVar29) ^ uRam0000000146afc99c);
          uStack_1e0._4_4_ = 0.0;
          fVar47 = local_178;
          fVar50 = fStack_174;
          fVar54 = fStack_170;
          fVar53 = fStack_16c;
          local_168 = local_1f8;
          fStack_164 = fStack_1f4;
          fStack_160 = fStack_1f0;
          fStack_15c = fStack_1ec;
        }
        if (!bVar9) {
          (**(code **)(*param_2 + 0x4b8))(param_2,&local_210,1);
          bVar9 = true;
        }
        if (param_5 == (longlong *)0x0) {
          cVar11 = FUN_142542270(param_1,param_2,plVar20,&local_1f8,&local_210);
        }
        else {
          cVar11 = FUN_142542610(param_1,param_2,plVar20,&local_1f8,param_5,&local_210);
        }
        if (cVar11 == '\0') {
          uVar15 = (undefined4)local_218;
          uVar68 = (undefined4)((ulonglong)local_218 >> 0x20);
        }
        else {
          if (param_5 == (longlong *)0x0) {
            if (local_1a8 != (longlong *)0x0) {
              FMemory::Free();
            }
            goto LAB_14254584e;
          }
          local_158 = *param_5;
          local_150 = (undefined4)param_5[1];
          local_148 = local_218;
          local_140 = uVar12;
          puVar18 = (undefined8 *)CombineAdjustments(local_e8,&local_148,&local_158);
          bVar10 = 1;
          local_218 = *puVar18;
          uVar15 = (undefined4)local_218;
          uVar68 = (undefined4)((ulonglong)local_218 >> 0x20);
          uVar12 = *(undefined4 *)(puVar18 + 1);
        }
      }
    }
    fVar29 = local_1b8;
    fVar35 = fStack_1b4;
    fVar39 = fStack_1b0;
    fVar41 = fStack_1ac;
    fVar57 = local_188;
    fVar60 = fStack_184;
    fVar63 = fStack_180;
    fVar65 = fStack_17c;
  }
  if (local_1a8 != (longlong *)0x0) {
    FMemory::Free(local_1a8);
  }
  if (local_210 != 0) {
    FMemory::Free();
  }
  puVar19 = (undefined1 *)(ulonglong)bVar10;
LAB_142545903:
  if (param_5 != (longlong *)0x0) {
    *param_5 = CONCAT44(uVar68,uVar15);
    *(undefined4 *)(param_5 + 1) = uVar12;
  }
  return puVar19;
}



// FUNCTION 142545930 FUN_142545930 body=488 status=ok
// SIG undefined FUN_142545930(void)

void FUN_142545930(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res20);
    FMemory::operator_delete(param_1,1);
    QueryPerformanceCounter(&local_res10);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
    return;
  }
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar9 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar9 = plVar6;
    }
    TlsSetValue(*pDVar5,plVar9);
    plVar6 = plVar9;
  }
  plVar9 = (longlong *)plVar6[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)*plVar6;
    if (plVar9 == (longlong *)0x0) {
      lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
      plVar6[1] = lVar7;
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar8;
        lVar7 = 0x1f;
        do {
          puVar2 = puVar8 + 0x20;
          *puVar8 = puVar2;
          lVar7 = lVar7 + -1;
          puVar8 = puVar2;
        } while (lVar7 != 0);
        *puVar2 = 0;
      }
      plVar9 = (longlong *)plVar6[1];
      iVar10 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar6[1] = (longlong)plVar9;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar10 = (int)plVar6[2];
  }
  plVar6[1] = *plVar9;
  *(int *)(plVar6 + 2) = iVar10 + -1;
  *plVar9 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar9 + 1) = 0xff;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 3) = 0;
  *plVar9 = (longlong)&PTR_FUN_1450f0668;
  plVar9[4] = 0;
  plVar9[2] = param_1;
  lVar7 = plVar9[4];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res18 = lVar7;
  FUN_140445100(plVar9,0,0xff,1,0,0);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res18);
    }
  }
  return;
}



// FUNCTION 142545b20 FUN_142545b20 body=1976 status=ok
// SIG undefined FUN_142545b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_142545b20(short *param_1,undefined8 param_2,short *param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  short *psVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  short *local_4a8;
  longlong *local_4a0;
  undefined8 local_498;
  longlong *local_490;
  ulonglong local_488;
  int local_480;
  short *local_478;
  short *local_470;
  ulonglong local_468;
  undefined1 local_458 [192];
  longlong local_398;
  undefined8 local_390;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  local_4a8 = param_3;
  local_478 = param_1;
  cVar2 = FParse::Command(&local_4a8,L"LISTMOVEBODY",1);
  if (cVar2 == '\0') {
    cVar2 = FParse::Command(&local_4a8,L"r.LockView",1);
    psVar5 = local_4a8;
    if (cVar2 == '\0') {
      cVar2 = FParse::Command(&local_4a8,L"r.ResetViewState",1);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x44) + 0x30))();
        return 1;
      }
      cVar2 = FParse::Command(&local_4a8,L"LISTAWAKEBODIES",1);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*(longlong *)(param_1 + -0x14) + 0x148))(param_1 + -0x14);
        FUN_1426e5070(1,uVar4);
        return 1;
      }
      cVar2 = FParse::Command(&local_4a8,L"LISTSIMBODIES",1);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*(longlong *)(param_1 + -0x14) + 0x148))(param_1 + -0x14);
        FUN_1426e5070(0,uVar4);
        return 1;
      }
      cVar2 = FParse::Command(&local_4a8,L"MOVECOMPTIMES",1);
      if (cVar2 != '\0') {
        DAT_146afc8d1 = 1;
        return 1;
      }
      cVar2 = FParse::Command(&local_4a8,L"LISTSKELMESHES",1);
      if (cVar2 != '\0') {
        uVar3 = FUN_1425493d0(param_1 + -0x14,local_4a8,param_4);
        return uVar3;
      }
      cVar2 = FParse::Command(&local_4a8,L"LISTPAWNCOMPONENTS",1);
      if (cVar2 == '\0') {
        cVar2 = FParse::Command(&local_4a8,L"EXEC",1);
        if (cVar2 == '\0') {
          cVar2 = FParse::Command(&local_4a8,L"TOGGLESTREAMINGVOLUMES",1);
          if (cVar2 != '\0') {
            local_478 = local_4a8;
            cVar2 = FParse::Command(&local_478,&DAT_1450ea0b4,1);
            if (cVar2 != '\0') {
              lVar10 = (**(code **)(*(longlong *)(param_1 + -0x14) + 0x148))(param_1 + -0x14);
              *(undefined4 *)(lVar10 + 0x6fc) = 0;
              return 1;
            }
            cVar2 = FParse::Command(&local_478,&DAT_1450ea170,1);
            pcVar6 = *(code **)(*(longlong *)(param_1 + -0x14) + 0x148);
            if (cVar2 == '\0') {
              lVar10 = (*pcVar6)(param_1 + -0x14);
              pcVar6 = *(code **)(*(longlong *)(param_1 + -0x14) + 0x148);
              if (*(int *)(lVar10 + 0x6fc) == -1) {
                lVar10 = (*pcVar6)();
                *(undefined4 *)(lVar10 + 0x6fc) = 0;
                return 1;
              }
            }
            lVar10 = (*pcVar6)(param_1 + -0x14);
            *(undefined4 *)(lVar10 + 0x6fc) = 0xffffffff;
            return 1;
          }
          cVar2 = FParse::Command(&local_4a8,L"CANCELMATINEE",1);
          if (cVar2 != '\0') {
            uVar3 = FUN_142548f90(param_1 + -0x14,local_4a8,param_4);
            return uVar3;
          }
          lVar10 = *(longlong *)(param_1 + 0x24);
          if (((lVar10 == 0) ||
              (cVar2 = (**(code **)(*(longlong *)(lVar10 + 0x48) + 8))
                                 (lVar10 + 0x48,param_2,local_4a8,param_4), cVar2 == '\0')) &&
             (cVar2 = FUN_1426df4b0(param_1,param_2,local_4a8,param_4), cVar2 == '\0')) {
            return 0;
          }
        }
        else {
          local_478 = local_4a8;
          cVar2 = FParse::Token(&local_478,local_458,0x200,0);
          if (cVar2 != '\0') {
            FUN_1425462e0(param_1 + -0x14,local_458,param_4);
            return 1;
          }
        }
      }
      else {
        local_480 = -1;
        local_490 = (longlong *)0x0;
        local_488 = 0;
        uVar4 = FUN_1429d7ab0();
        local_4b8 = 0;
        FUN_1417a5560(uVar4,&local_490,1,0x10);
        uVar12 = local_488 & 0xffffffff;
        do {
          local_480 = local_480 + 1;
          if ((int)local_488 <= local_480) break;
        } while (local_490[local_480] == 0);
LAB_142545f97:
        if ((local_480 < 0) || ((int)uVar12 <= local_480)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_398 = 0;
          local_390 = 0;
          FUN_140a4ca80(local_490[local_480],local_458,0);
          if (local_398 != 0) {
            FMemory::Free();
          }
          uVar12 = local_488 & 0xffffffff;
          do {
            local_480 = local_480 + 1;
            if ((int)local_488 <= local_480) break;
          } while (local_490[local_480] == 0);
          goto LAB_142545f97;
        }
        if (local_490 != (longlong *)0x0) {
          FMemory::Free(local_490);
          return 1;
        }
      }
    }
    else {
      iVar13 = 0;
      local_468._0_4_ = 0;
      local_4a0 = (longlong *)0x0;
      local_498 = 0;
      local_470 = (short *)0x0;
      local_468 = 0;
      iVar9 = (int)local_468;
      iVar7 = 0;
      if ((local_4a8 != (short *)0x0) && (iVar7 = 0, *local_4a8 != 0)) {
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (local_4a8[lVar10] != 0);
        uVar8 = (int)lVar10 + 1;
        local_468 = (ulonglong)uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_470,0);
        }
        FGenericPlatformString::Memcpy(local_470,psVar5,(longlong)(int)uVar8 * 2);
        iVar7 = (int)((ulonglong)local_498 >> 0x20);
        iVar9 = (int)local_498;
      }
      for (psVar5 = local_470; psVar5 != local_470 + (int)local_468; psVar5 = psVar5 + 1) {
        if (*psVar5 == 0x3b) {
          if ((int)((longlong)psVar5 - (longlong)local_470 >> 1) != -1) {
            FUN_141594550(&local_470,&local_4a0,&DAT_1450e96ac,1);
            goto LAB_142545cc6;
          }
          break;
        }
      }
      local_498 = CONCAT44(local_498._4_4_,iVar9 + 1);
      if (iVar7 < iVar9 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_4a0,iVar9);
      }
      psVar5 = local_470;
      plVar11 = local_4a0 + (longlong)iVar9 * 2;
      *plVar11 = 0;
      lVar10 = (longlong)(int)local_468;
      *(int *)(plVar11 + 1) = (int)local_468;
      if ((int)local_468 == 0) {
        *(undefined4 *)((longlong)plVar11 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar11,local_468 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar11,psVar5,lVar10 * 2);
      }
LAB_142545cc6:
      if (0 < (int)local_498) {
        psVar5 = param_1 + -0x14;
        lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        do {
          local_490 = (longlong *)0x0;
          local_488 = 0;
          FString::ParseIntoArrayWS(local_4a0 + (longlong)iVar13 * 2,&local_490,0,1);
          if ((*(int *)(lVar10 + 0x38) < DAT_146afcd28) &&
             (_Init_thread_header(&DAT_146afcd28), DAT_146afcd28 == -1)) {
            _DAT_146afcc30 = 0;
            _DAT_146afcc38 = 0;
            _DAT_146afcc50 = 0;
            _DAT_146afcc58 = 0;
            _DAT_146afcc60 = 0xffffffff;
            _DAT_146afcc64 = 0;
            DAT_146afcc70 = 0;
            _DAT_146afcc78 = 0;
            _DAT_146afcc80 = &PTR__scalar_deleting_destructor__1450f2170;
            _DAT_146afcc88 = 0;
            _DAT_146afcc90 = 0;
            _DAT_146afcca8 = 0;
            _DAT_146afccb0 = 0;
            _DAT_146afccb8 = 0xffffffff;
            _DAT_146afccbc = 0;
            _DAT_146afccc8 = 0;
            _DAT_146afccd0 = 0;
            InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146afccd8);
            SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146afccd8,4000);
            _DAT_146afcd08 = _DAT_1468b5d90;
            _DAT_146afcd10 = DAT_1468b5d98;
            _DAT_146afcd18 = DAT_1468b5da0;
            _DAT_146afcd00 = 0;
            _DAT_146afcd14 = 0x42b40000;
            _DAT_146afcd20 = DAT_1468b5da8;
            DAT_146afcd24 = 0;
            atexit(`FLockedViewState::Get'::`2'::_dynamic_atexit_destructor_for__State__);
            _Init_thread_footer(&DAT_146afcd28);
          }
          FUN_14254acf0(&DAT_146afcc30,psVar5);
          plVar11 = local_490;
          for (iVar7 = (int)local_488; iVar7 != 0; iVar7 = iVar7 + -1) {
            if (*plVar11 != 0) {
              FMemory::Free();
            }
            plVar11 = plVar11 + 2;
          }
          if (local_490 != (longlong *)0x0) {
            FMemory::Free(local_490);
          }
          iVar13 = iVar13 + 1;
          param_1 = local_478;
        } while (iVar13 < (int)local_498);
      }
      iVar7 = (int)local_498;
      if (1 < (int)local_498) {
        lVar10 = FUN_1425473a0();
        FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::RemoveAnnotation
                  (lVar10 + 0x50,param_1 + -0x14);
        iVar7 = (int)local_498;
      }
      plVar11 = local_4a0;
      if (local_470 != (short *)0x0) {
        FMemory::Free();
        iVar7 = (int)local_498;
        plVar11 = local_4a0;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      if (local_4a0 != (longlong *)0x0) {
        FMemory::Free(local_4a0);
        return 1;
      }
    }
  }
  else {
    DAT_146afc8d2 = 1;
  }
  return 1;
}



// FUNCTION 1425462e0 FUN_1425462e0 body=1108 status=ok
// SIG undefined FUN_1425462e0(void)

void FUN_1425462e0(longlong *param_1,wchar_t *param_2,undefined8 param_3)

{
  wchar_t _C;
  int iVar1;
  char cVar2;
  wint_t wVar3;
  wint_t wVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined2 **ppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  longlong lVar15;
  undefined2 *local_res10;
  undefined8 local_res18;
  undefined4 uVar17;
  undefined8 uVar16;
  wchar_t *local_98;
  int local_90;
  int local_8c;
  undefined2 *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  ulonglong local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  
  pwVar7 = (wchar_t *)0x0;
  local_78 = 0;
  local_70 = 0;
  iVar6 = 0;
  lVar15 = -1;
  local_res18 = param_3;
  if ((param_2 != (wchar_t *)0x0) && (lVar12 = lVar15, *param_2 != L'\0')) {
    do {
      lVar12 = lVar12 + 1;
    } while (param_2[lVar12] != L'\0');
    uVar11 = (int)lVar12 + 1;
    local_70 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    }
    FGenericPlatformString::Memcpy(local_78,param_2,(longlong)(int)uVar11 * 2);
  }
  uVar17 = 1;
  FConfigCacheIni::GetStr(DAT_1468b6148,&local_88,L"GbxCoreStat",L"ExecScriptsPath",&DAT_1468e2360);
  uVar16 = CONCAT44(uVar17,0xffffffff);
  iVar5 = FUN_141592950(&local_78,L"/ExecScripts/",1,0,uVar16);
  uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
  if (((iVar5 == -1) || (local_80 == 0)) || (local_80 == 1)) {
    if (param_2 != (wchar_t *)0x0) {
      wVar3 = towupper(0x42);
      lVar12 = lVar15;
      do {
        lVar12 = lVar12 + 1;
      } while (L"Binaries"[lVar12] != L'\0');
      _C = *param_2;
      pwVar13 = param_2;
      while (_C != L'\0') {
        pwVar13 = pwVar13 + 1;
        wVar4 = towupper(_C);
        if ((wVar4 == wVar3) &&
           (iVar6 = _wcsnicmp(pwVar13,L"inaries",(longlong)((int)lVar12 + -1)), iVar6 == 0)) {
          if (pwVar13 != (wchar_t *)0x2) goto LAB_142546633;
          break;
        }
        _C = *pwVar13;
      }
    }
    local_60 = 0x10;
    local_68 = (wchar_t *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    pwVar7 = local_68;
    FGenericPlatformString::Memcpy(local_68,L"../../Binaries/",0x20);
    iVar6 = (int)local_60;
    if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
      do {
        lVar15 = lVar15 + 1;
      } while (param_2[lVar15] != L'\0');
      iVar5 = (int)lVar15;
      if (((int)local_60 != 0) || (iVar6 = 1, iVar5 == 0)) {
        iVar6 = 0;
      }
      local_98 = pwVar7;
      local_90 = (int)local_60;
      local_8c = local_60._4_4_;
      if (local_60._4_4_ < (int)local_60 + iVar6 + iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
      }
      iVar1 = local_90;
      pwVar7 = local_98;
      iVar6 = local_90;
      if (iVar5 != 0) {
        lVar15 = (longlong)local_90;
        local_90 = iVar5 + (uint)(local_90 == 0) + local_90;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar1);
        }
        iVar6 = local_90;
        pwVar7 = local_98;
        pwVar13 = local_98 + (lVar15 - (ulonglong)(iVar1 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar13,param_2,(longlong)iVar5 * 2);
        pwVar13[iVar5] = L'\0';
      }
    }
    param_2 = L"";
    if (iVar6 != 0) {
      param_2 = pwVar7;
    }
  }
  else {
    FPaths::ProjectContentDir(&local_68);
    uVar16 = CONCAT44(uVar17,1);
    pwVar13 = L"";
    if ((int)local_60 != 0) {
      pwVar13 = local_68;
    }
    ppuVar8 = (undefined2 **)FString::Replace(&local_88,&local_98,L"/Content/",pwVar13,uVar16);
    uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
    if (&local_88 != ppuVar8) {
      if (local_88 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_88 = *ppuVar8;
      *ppuVar8 = (undefined2 *)0x0;
      local_80 = *(int *)(ppuVar8 + 1);
      local_7c = *(undefined4 *)((longlong)ppuVar8 + 0xc);
      ppuVar8[1] = (undefined2 *)0x0;
    }
    if (local_98 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    puVar14 = &DAT_143f3eda8;
    if (local_80 != 0) {
      puVar14 = local_88;
    }
    puVar9 = (undefined8 *)
             FString::Replace(&local_78,&local_98,L"/ExecScripts/",puVar14,CONCAT44(uVar17,1));
    if (local_48 != puVar9) {
      pwVar7 = (wchar_t *)*puVar9;
      *puVar9 = 0;
      iVar6 = *(int *)(puVar9 + 1);
      puVar9[1] = 0;
    }
    if (local_98 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    param_2 = L"";
    if (iVar6 != 0) {
      param_2 = pwVar7;
    }
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
LAB_142546633:
  local_58 = (undefined2 *)0x0;
  local_50 = 0;
  cVar2 = FUN_141676530(&local_58,param_2,0);
  if (cVar2 != '\0') {
    local_68 = (wchar_t *)0x0;
    local_res10 = &DAT_143f3eda8;
    if ((int)local_50 != 0) {
      local_res10 = local_58;
    }
    local_60 = 0;
    cVar2 = FParse::Line(&local_res10,&local_68,0);
    uVar16 = local_res18;
    while (cVar2 != '\0') {
      pwVar13 = L"";
      if ((int)local_60 != 0) {
        pwVar13 = local_68;
      }
      lVar15 = param_1[5];
      uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
      (**(code **)(lVar15 + 8))(param_1 + 5,uVar10,pwVar13,uVar16);
      cVar2 = FParse::Line(&local_res10,&local_68,0);
    }
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (pwVar7 != (wchar_t *)0x0) {
    FMemory::Free(pwVar7);
  }
  return;
}



// FUNCTION 142546740 FUN_142546740 body=246 status=ok
// SIG undefined FUN_142546740(void)

void FUN_142546740(undefined8 *param_1)

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
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1450f0658;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
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



// FUNCTION 142546840 FUN_142546840 body=260 status=ok
// SIG undefined FUN_142546840(void)

void FUN_142546840(undefined8 *param_1)

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
  FMemory::operator_delete(param_1[2],1);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1450f0668;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
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



// FUNCTION 142546950 FUN_142546950 body=266 status=ok
// SIG undefined FUN_142546950(void)

void FUN_142546950(undefined8 *param_1)

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
  FInGamePerformanceTracker::Tick(*(longlong *)(param_1[2] + 0x838) + 0x30);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1450f0678;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
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



// FUNCTION 142546a60 FindAndCacheLevelStreamingObject body=514 status=ok
// SIG undefined FindAndCacheLevelStreamingObject(void)

longlong FStreamLevelAction::FindAndCacheLevelStreamingObject(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  longlong local_res8 [2];
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [2];
  longlong local_48 [2];
  
  bVar10 = false;
  local_res18 = 0;
  if (param_1 != 0) {
    local_res8[0] = param_1;
    MakeSafeLevelName(&local_78,local_res8,param_2);
    cVar5 = FPackageName::IsShortPackageName(&local_78);
    if (cVar5 != '\0') {
      iVar8 = local_70 + -1;
      if (local_70 == 0) {
        iVar8 = 0;
      }
      local_60 = iVar8 + 2;
      local_68 = (undefined2 *)0x0;
      local_5c = 0;
      if (0 < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      }
      uVar4 = local_5c;
      iVar3 = local_60;
      puVar7 = local_68;
      *local_68 = 0x2f;
      ::_guard_xfg_dispatch_icall_nop(local_68 + 1,local_78,(longlong)iVar8 * 2);
      puVar7[(longlong)iVar8 + 1] = 0;
      bVar11 = local_78 != (undefined2 *)0x0;
      local_78 = puVar7;
      local_70 = iVar3;
      local_6c = uVar4;
      if (bVar11) {
        FMemory::Free();
      }
    }
    plVar9 = *(longlong **)(param_2 + 0x88);
    plVar1 = plVar9 + *(int *)(param_2 + 0x90);
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      lVar2 = *plVar9;
      if (lVar2 == 0) {
LAB_142546bf4:
        bVar11 = false;
      }
      else {
        bVar10 = true;
        if ((*(byte *)(lVar2 + 0xb6) & 2) == 0) {
          FSoftObjectPath::ToString(lVar2 + 0x38,&local_68);
          puVar6 = (undefined8 *)FUN_1417006f0(local_48,&local_68);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar7 = &DAT_143f3eda8;
          }
          else {
            puVar7 = (undefined2 *)*puVar6;
          }
          puVar6 = (undefined8 *)FName::FName(local_res20,puVar7,1);
          *(undefined8 *)(lVar2 + 0x130) = *puVar6;
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          if (local_68 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          *(byte *)(lVar2 + 0xb6) = *(byte *)(lVar2 + 0xb6) | 2;
        }
        local_res18 = *(undefined8 *)(lVar2 + 0x130);
        FName::ToString(&local_res18,local_58);
        cVar5 = FString::EndsWith(local_58,&local_78,1);
        if (cVar5 == '\0') goto LAB_142546bf4;
        bVar11 = true;
      }
      if ((bVar10) && (bVar10 = false, local_58[0] != 0)) {
        FMemory::Free();
      }
      if (bVar11) {
        if (local_78 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        return lVar2;
      }
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free(local_78);
    }
  }
  return 0;
}



// FUNCTION 142546c70 FindStreamingLevel body=73 status=ok
// SIG undefined FindStreamingLevel(void)

longlong FLevelUtils::FindStreamingLevel(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((param_1 != 0) && (lVar2 = *(longlong *)(param_1 + 0xc0), lVar2 != 0)) {
    plVar3 = *(longlong **)(lVar2 + 0x88);
    plVar1 = plVar3 + *(int *)(lVar2 + 0x90);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      lVar2 = *plVar3;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x120) == param_1)) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 142546cc0 FUN_142546cc0 body=1631 status=ok
// SIG undefined FUN_142546cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_142546cc0(undefined8 param_1,longlong *param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_248 [32];
  float *local_228;
  undefined1 *local_220;
  undefined *local_218;
  undefined1 local_208 [16];
  undefined8 local_1f8;
  float local_1f0;
  float local_1e8;
  float fStack_1e4;
  float local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  byte local_1c8 [12];
  undefined4 local_1bc;
  float local_1ac;
  undefined1 local_138 [72];
  longlong local_f0;
  longlong local_d0;
  ulonglong local_b8;
  
  lVar9 = DAT_146afca28;
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  if (param_2 == (longlong *)0x0) {
    return true;
  }
  if (param_2[0x2d] == 0) {
    return true;
  }
  local_1e8 = 0.0;
  fStack_1e4 = 0.0;
  local_1e0 = 0.0;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  uVar13 = 0;
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    uVar7 = 4;
    if (DVar4 == DAT_1468c21c0) goto LAB_142546d7f;
  }
  else {
LAB_142546d7f:
    uVar7 = uVar13;
  }
  if (*(int *)(lVar9 + uVar7) != 1) goto LAB_142546f5e;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afcb78) && (_Init_thread_header(&DAT_146afcb78), DAT_146afcb78 == -1))
  {
    FName::FName(&DAT_146afcb70,L"FindTeleportSpot",1);
    _Init_thread_footer(&DAT_146afcb78);
  }
  local_228 = (float *)param_2;
  FUN_1422ffb20(local_138,DAT_146afcb70,local_208,1);
  _guard_xfg_dispatch_icall_nop(local_1c8,0,0x90);
  local_1bc = 0x3f800000;
  uVar8 = UEnvQueryTest::GetPrivateStaticClass();
  lVar9 = (**(code **)(*param_2 + 0x628))(param_2,uVar8);
  if (((lVar9 == 0) || (*(longlong **)(lVar9 + 0x180) == (longlong *)0x0)) ||
     (iVar5 = (**(code **)(**(longlong **)(lVar9 + 0x180) + 0x4e8))(),
     (iVar5 - 1U & 0xfffffffd) != 0)) {
    plVar11 = (longlong *)param_2[0x2d];
    if ((plVar11 != (longlong *)0x0) &&
       (iVar5 = (**(code **)(*plVar11 + 0x4e8))(plVar11), (iVar5 - 1U & 0xfffffffd) == 0))
    goto LAB_142546e66;
  }
  else {
    plVar11 = *(longlong **)(lVar9 + 0x180);
LAB_142546e66:
    if (plVar11 != (longlong *)0x0) {
      local_218 = &DAT_146aefe68;
      local_220 = local_138;
      local_228 = (float *)((ulonglong)local_228 & 0xffffffff00000000);
      fVar16 = (*(float *)((longlong)plVar11 + 0x1e4) + *(float *)(plVar11 + 0x3b)) -
               (*(float *)(plVar11 + 0x3b) - *(float *)((longlong)plVar11 + 0x1e4));
      local_1d8 = *(undefined8 *)param_3;
      local_1f8 = *(undefined8 *)param_3;
      local_1f0 = fVar16 * -0.5 + param_3[2];
      local_1d0 = param_3[2] + 1.0;
      cVar3 = UWorld::LineTraceSingleByChannel(param_1,local_1c8,&local_1d8,&local_1f8);
      if ((cVar3 != '\0') && ((local_1c8[0] & 1) != 0)) {
        fVar14 = (param_3[2] - local_1ac) + 1.0;
        fVar16 = fVar16 * *DAT_146afca10 * 0.5;
        if (fVar14 < fVar16) {
          param_3[2] = (fVar16 - fVar14) + param_3[2];
        }
      }
    }
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  if (local_f0 != 0) {
    FMemory::Free();
  }
LAB_142546f5e:
  local_1d0 = *(float *)(param_4 + 1);
  local_1d8 = *param_4;
  local_1f0 = param_3[2];
  local_228 = &local_1e8;
  local_1f8 = *(undefined8 *)param_3;
  cVar3 = FUN_142543f80(param_1,param_2,&local_1f8,&local_1d8);
  if (cVar3 == '\0') {
    return true;
  }
  if (1e-08 < ABS(local_1e0)) {
    local_1d0 = *(float *)(param_4 + 1);
    local_1d8 = *param_4;
    param_3[2] = local_1e0 + param_3[2];
    local_1f0 = param_3[2];
    local_1f8 = *(undefined8 *)param_3;
    local_228 = &local_1e8;
    cVar3 = FUN_142543f80(param_1,param_2,&local_1f8,&local_1d8);
    if (cVar3 == '\0') {
      return true;
    }
  }
  fVar2 = local_1e0;
  fVar14 = fStack_1e4;
  fVar16 = local_1e8;
  if ((1e-08 < ABS(local_1e8)) || (1e-08 < ABS(fStack_1e4))) {
    uVar8 = *(undefined8 *)param_3;
    fVar1 = param_3[2];
    iVar5 = 8;
    if ((*(byte *)((longlong)param_2 + 0x94) & 0x18) == 0x10) {
      iVar5 = 1;
    }
    do {
      uVar12 = (uint)uVar13;
      fVar15 = fVar14;
      if ((int)uVar12 < 4) {
        fVar15 = fVar16;
      }
      *param_3 = (float)(int)((~uVar12 & 1) * 2 + -1) * fVar15 + *param_3;
      fVar15 = fVar14;
      if (3 < (int)uVar12) {
        fVar15 = fVar16;
      }
      uVar10 = uVar12 & 0x80000003;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
      }
      iVar6 = -1;
      if ((int)uVar10 < 2) {
        iVar6 = 1;
      }
      local_1d0 = *(float *)(param_4 + 1);
      param_3[1] = (float)iVar6 * fVar15 + param_3[1];
      local_1d8 = *param_4;
      local_1f0 = param_3[2];
      local_1f8 = *(undefined8 *)param_3;
      local_228 = &local_1e8;
      local_1e0 = fVar2;
      local_1e8 = fVar16;
      fStack_1e4 = fVar14;
      cVar3 = FUN_142543f80(param_1,param_2,&local_1f8,&local_1d8);
      if (cVar3 == '\0') {
        return true;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      *(undefined8 *)param_3 = uVar8;
      param_3[2] = fVar1;
    } while ((int)(uVar12 + 1) < iVar5);
  }
  local_1e0 = fVar2;
  local_1e8 = fVar16;
  fStack_1e4 = fVar14;
  if (1e-08 < ABS(fVar2)) {
    local_1d0 = *(float *)(param_4 + 1);
    local_1d8 = *param_4;
    param_3[2] = fVar2 + param_3[2];
    local_1f0 = param_3[2];
    local_1f8 = *(undefined8 *)param_3;
    local_228 = &local_1e8;
    cVar3 = FUN_142543f80(param_1,param_2,&local_1f8,&local_1d8);
    if (cVar3 == '\0') {
      return true;
    }
  }
  if (((ABS(local_1e8) <= 0.0001) && (ABS(fStack_1e4) <= 0.0001)) && (ABS(local_1e0) <= 0.0001)) {
    return false;
  }
  local_1d0 = *(float *)(param_4 + 1);
  local_1d8 = *param_4;
  param_3[2] = local_1e0 + param_3[2];
  local_1f8 = CONCAT44(fStack_1e4 + param_3[1],local_1e8 + *param_3);
  *(undefined8 *)param_3 = local_1f8;
  local_1f0 = param_3[2];
  local_228 = &local_1e8;
  cVar3 = FUN_142543f80(param_1,param_2,&local_1f8,&local_1d8);
  return cVar3 == '\0';
}



// FUNCTION 142547320 FinishDestroy body=124 status=ok
// SIG undefined FinishDestroy(void)

void ULocalPlayer::FinishDestroy(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    FSceneViewStateReference::Destroy(param_1 + 0xa8);
    FSceneViewStateReference::Destroy(param_1 + 0xe0);
    lVar3 = *(longlong *)(param_1 + 0xd0);
    lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0xd8) * 0x28;
    for (; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
      FSceneViewStateReference::Destroy(lVar3);
    }
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 1425473a0 FUN_1425473a0 body=364 status=ok
// SIG undefined FUN_1425473a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1425473a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afcd28) {
    _Init_thread_header(&DAT_146afcd28);
    if (DAT_146afcd28 == -1) {
      _DAT_146afcc60 = 0xffffffff;
      _DAT_146afcc30 = 0;
      _DAT_146afcc38 = 0;
      _DAT_146afcc50 = 0;
      _DAT_146afcc58 = 0;
      _DAT_146afcc64 = 0;
      DAT_146afcc70 = 0;
      _DAT_146afcc78 = 0;
      _DAT_146afcc88 = 0;
      _DAT_146afcc90 = 0;
      _DAT_146afcca8 = 0;
      _DAT_146afccb0 = 0;
      _DAT_146afccbc = 0;
      _DAT_146afccc8 = 0;
      _DAT_146afccd0 = 0;
      _DAT_146afcc80 = &PTR__scalar_deleting_destructor__1450f2170;
      _DAT_146afccb8 = 0xffffffff;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146afccd8);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146afccd8,4000);
      _DAT_146afcd08 = _DAT_1468b5d90;
      _DAT_146afcd10 = DAT_1468b5d98;
      _DAT_146afcd14 = 0x42b40000;
      _DAT_146afcd00 = 0;
      _DAT_146afcd18 = DAT_1468b5da0;
      _DAT_146afcd20 = DAT_1468b5da8;
      DAT_146afcd24 = 0;
      atexit(`FLockedViewState::Get'::`2'::_dynamic_atexit_destructor_for__State__);
      _Init_thread_footer(&DAT_146afcd28);
      return &DAT_146afcc30;
    }
  }
  return &DAT_146afcc30;
}



// FUNCTION 142547510 GetAudioDevice body=75 status=ok
// SIG undefined GetAudioDevice(void)

longlong UWorld::GetAudioDevice(longlong param_1)

{
  longlong lVar1;
  
  if ((DAT_146b17150 != 0) && (lVar1 = FUN_1428742d0(), lVar1 != 0)) {
    lVar1 = FAudioDeviceManager::GetAudioDevice(lVar1,*(undefined4 *)(param_1 + 0x780));
    if (lVar1 != 0) {
      return lVar1;
    }
    lVar1 = FUN_142875430(DAT_146b17150);
    return lVar1;
  }
  return 0;
}



// FUNCTION 142547560 FUN_142547560 body=25 status=ok
// SIG undefined FUN_142547560(void)

undefined4 FUN_142547560(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x458) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x458) + 0x2e4);
  }
  return 0;
}



// FUNCTION 142547580 FUN_142547580 body=59 status=ok
// SIG undefined FUN_142547580(void)

undefined8 * FUN_142547580(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = &PTR_FUN_143f73d18;
  param_2[1] = *(undefined8 *)(param_1 + 0x50);
  lVar1 = *(longlong *)(param_1 + 0x58);
  param_2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_2 = &PTR_FUN_143f740c8;
  param_2[3] = 0;
  param_2[4] = 0;
  return param_2;
}



// FUNCTION 1425475c0 FUN_1425475c0 body=205 status=ok
// SIG undefined FUN_1425475c0(void)

undefined8 * FUN_1425475c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  fVar5 = *(float *)(lVar1 + 0x234);
  fVar7 = *(float *)(lVar1 + 0x238);
  fVar2 = *(float *)(lVar1 + 0x220);
  fVar3 = *(float *)(lVar1 + 0x224);
  fVar4 = *(float *)(lVar1 + 0x228);
  fVar6 = *(float *)(lVar1 + 0x230) * 0.5;
  *(undefined1 *)(param_2 + 3) = 1;
  fVar5 = fVar5 * 0.5;
  fVar7 = fVar7 * 0.5;
  *param_2 = CONCAT44(fVar3 - fVar5,fVar2 - fVar6);
  *(float *)(param_2 + 1) = fVar4 - fVar7;
  *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(fVar5 + fVar3,fVar6 + fVar2);
  *(float *)((longlong)param_2 + 0x14) = fVar7 + fVar4;
  return param_2;
}



// FUNCTION 142547690 GetDesc body=88 status=ok
// SIG undefined GetDesc(void)

undefined8 ULightMapTexture2D::GetDesc(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0xd8);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    iVar2 = puVar1[3];
    uVar4 = puVar1[1];
    uVar3 = *puVar1;
  }
  FString::PrintfImpl(param_2,L"Lightmap: %dx%d [%s]",uVar3,uVar4,
                      (&PTR_u_unknown_1464ca1b0)[(longlong)iVar2 * 5]);
  return param_2;
}



// FUNCTION 1425476f0 FUN_1425476f0 body=16 status=ok
// SIG undefined FUN_1425476f0(void)

undefined8 FUN_1425476f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x90);
}



// FUNCTION 142547700 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_141aaf600(param_2);
  return param_2;
}



// FUNCTION 142547720 FUN_142547720 body=168 status=ok
// SIG undefined FUN_142547720(void)

undefined8 FUN_142547720(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_142865d40(param_3);
  lVar2 = 0x28;
  if (cVar1 == '\0') {
    lVar2 = 0x30;
  }
  if ((*(longlong *)(lVar2 + param_1) != 0) &&
     (*(longlong *)(*(longlong *)(lVar2 + param_1) + 0x60) != 0)) {
    FUN_14275f140(param_2,param_1 + 0x28,*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40),param_1 + 0x50,param_1 + 0xd0,param_1 + 0x150,
                  param_1 + 0x158,cVar1);
    return param_2;
  }
  FUN_141aaf600(param_2);
  return param_2;
}



// FUNCTION 1425477d0 FUN_1425477d0 body=19 status=ok
// SIG undefined FUN_1425477d0(void)

undefined8 FUN_1425477d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x120) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0xf0);
}



// FUNCTION 1425477f0 FUN_1425477f0 body=232 status=ok
// SIG undefined FUN_1425477f0(void)

void FUN_1425477f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afcc00) && (_Init_thread_header(&DAT_146afcc00), DAT_146afcc00 == -1))
  {
    uVar1 = FUN_1429a6e30();
    FUN_1429a6e30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bEnabled",1);
    DAT_146afcbf8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146afcc00);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146afcbf8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146afcbf8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146afcbf8 + 0x30));
  }
  return;
}



// FUNCTION 1425478e0 FUN_1425478e0 body=85 status=ok
// SIG undefined FUN_1425478e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425478e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  uVar1 = _DAT_1464aa6e8;
  if (*(longlong *)(param_1 + 0x458) != 0) {
    puVar2 = (undefined8 *)
             FLinearColor::FLinearColor(local_18,*(longlong *)(param_1 + 0x458) + 0x2e8);
    uVar1 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar1;
    return param_2;
  }
  *param_2 = _DAT_1464aa6e0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 142547940 FUN_142547940 body=412 status=ok
// SIG undefined FUN_142547940(void)

longlong * FUN_142547940(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (lVar5 != 0) {
    local_48 = 0;
    local_40 = 0;
    plVar6 = (longlong *)UOnlineEngineInterface::Get();
    cVar4 = (**(code **)(*plVar6 + 0x2d0))(plVar6,lVar5,(int)param_1[0x21],&local_48);
    if (cVar4 != '\0') {
      *param_2 = local_48;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
      return param_2;
    }
    FUN_142547b50(param_1,local_38);
    if ((local_30 != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*local_30 + 0x20))(local_30), cVar4 != '\0')) {
      plVar6 = (longlong *)UOnlineEngineInterface::Get();
      (**(code **)(*plVar6 + 0x2c8))(plVar6,param_2,lVar5,local_30);
      if (local_20 != 0) {
        FMemory::Free();
      }
      plVar6 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
      if (local_48 == 0) {
        return param_2;
      }
      FMemory::Free();
      return param_2;
    }
    if (local_20 != 0) {
      FMemory::Free();
    }
    plVar6 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142547ae0 FUN_142547ae0 body=21 status=ok
// SIG undefined FUN_142547ae0(void)

undefined8 FUN_142547ae0(longlong param_1)

{
  if (*(longlong *)(param_1 + 400) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 400) + 0xa0);
  }
  return 0;
}



// FUNCTION 142547b00 FUN_142547b00 body=74 status=ok
// SIG undefined FUN_142547b00(void)

undefined8 FUN_142547b00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  lVar2 = FWeakObjectPtr::Get(param_1);
  if (lVar1 != 0) {
    uVar3 = UPlayer::GetPlayerController(lVar2,lVar1);
    return uVar3;
  }
  return *(undefined8 *)(lVar2 + 0x30);
}



// FUNCTION 142547b50 FUN_142547b50 body=236 status=ok
// SIG undefined FUN_142547b50(void)

undefined8 * FUN_142547b50(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
  plVar4 = *(longlong **)(param_1 + 0x58);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((plVar3 == (longlong *)0x0) || (cVar7 = (**(code **)(*plVar3 + 0x20))(), cVar7 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (!bVar5) {
    FUN_142548810(param_1,param_2);
    return param_2;
  }
  *param_2 = &PTR_FUN_143f73d18;
  param_2[1] = *(undefined8 *)(param_1 + 0x50);
  lVar6 = *(longlong *)(param_1 + 0x58);
  param_2[2] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  *param_2 = &PTR_FUN_143f740c8;
  param_2[3] = 0;
  param_2[4] = 0;
  return param_2;
}



// FUNCTION 142547c40 GetPrestreamPackages body=73 status=ok
// SIG undefined GetPrestreamPackages(void)

void ULevelStreamingAlwaysLoaded::GetPrestreamPackages(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_2[1];
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 142547c90 FUN_142547c90 body=2759 status=ok
// SIG undefined FUN_142547c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142547c90(longlong *param_1,longlong *param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_908 [32];
  int *local_8e8;
  uint *local_8e0;
  char local_8d8;
  undefined1 local_8d7 [3];
  int local_8d4;
  int local_8d0;
  int local_8cc;
  uint local_8c8 [2];
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined4 local_8b0;
  undefined8 local_8a8;
  longlong *plStack_8a0;
  undefined8 *local_898;
  int local_890;
  float local_888;
  float fStack_884;
  float fStack_880;
  float fStack_87c;
  float fStack_874;
  float fStack_86c;
  float fStack_854;
  float fStack_84c;
  undefined8 uStack_830;
  undefined8 uStack_820;
  float local_7e8;
  undefined8 uStack_7dc;
  float fStack_7cc;
  undefined1 local_7b8 [8];
  undefined1 local_7b0 [8];
  undefined1 local_7a8 [8];
  undefined1 local_7a0 [8];
  undefined1 local_798 [8];
  undefined1 local_790 [8];
  undefined1 local_788 [64];
  undefined8 local_748;
  undefined4 local_740;
  undefined1 local_73c [12];
  float local_730;
  longlong local_130;
  longlong local_120;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_908;
  local_8c0 = (longlong *)((ulonglong)local_8c0 & 0xffffffff00000000);
  if ((((param_2 == (longlong *)0x0) || (param_1[6] == 0)) ||
      (piVar5 = (int *)(**(code **)(*param_2 + 0x20))(param_2,local_7b8), *piVar5 == 0)) ||
     (lVar6 = (**(code **)(*param_2 + 0x20))(param_2,local_7b0), *(int *)(lVar6 + 4) == 0)) {
    return 0;
  }
  piVar5 = (int *)(**(code **)(*param_2 + 0x20))(param_2,local_7a8);
  local_8d4 = (int)((float)*piVar5 * *(float *)(param_1 + 0xf));
  lVar6 = (**(code **)(*param_2 + 0x20))(param_2,local_7a0);
  local_8d4 = local_8d4 + (int)param_2[0x18];
  local_8cc = (int)((float)*(int *)(lVar6 + 4) * *(float *)((longlong)param_1 + 0x7c)) +
              *(int *)((longlong)param_2 + 0xc4);
  piVar5 = (int *)(**(code **)(*param_2 + 0x20))(param_2,local_798);
  local_8d0 = (int)((float)*piVar5 * *(float *)(param_1 + 0x10));
  lVar6 = (**(code **)(*param_2 + 0x20))(param_2,local_790);
  iVar1 = *(int *)(lVar6 + 4);
  fVar12 = *(float *)((longlong)param_1 + 0x84);
  *(int *)(param_4 + 0x24) = local_8d4;
  *(int *)((longlong)param_4 + 0x124) = local_8cc;
  *(int *)(param_4 + 0x25) = local_8d0 + local_8d4;
  local_8c8[0] = (uint)((float)iVar1 * fVar12);
  *(uint *)((longlong)param_4 + 300) = local_8c8[0] + local_8cc;
  *(int *)(param_4 + 0x26) = local_8d4;
  *(int *)((longlong)param_4 + 0x134) = local_8cc;
  *(int *)(param_4 + 0x27) = local_8d0 + local_8d4;
  *(uint *)((longlong)param_4 + 0x13c) = local_8c8[0] + local_8cc;
  FUN_140a25a20(&local_748);
  (**(code **)(*param_1 + 0x280))(param_1,&local_748,param_3);
  if (param_3 != 0) {
    cVar4 = FUN_142881000(DAT_146b17150,0);
    local_8d8 = '\x01';
    if (cVar4 != '\0') goto LAB_142547e8c;
  }
  local_8d8 = '\0';
LAB_142547e8c:
  if ((*(longlong **)(DAT_146b17150 + 0xac8) == (longlong *)0x0) ||
     (cVar4 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xf0))(), cVar4 == '\0')) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  cVar4 = local_8d8;
  if (local_8d8 != '\0') {
    local_8e0 = local_8c8;
    local_8e8 = &local_8d0;
    (**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x30))
              (*(longlong **)(DAT_146b17150 + 0xab8),param_3,&local_8d4,&local_8cc);
  }
  fVar12 = (float)FUN_14271a5d0();
  fVar13 = local_730 / fVar12;
  if (1.0 <= fVar13) {
    fVar13 = 1.0;
  }
  *(float *)(param_1[6] + 0x558) = fVar13;
  if (fVar12 <= local_730) {
    local_730 = fVar12;
  }
  local_8b8 = local_748;
  local_8b0 = local_740;
  *(float *)(param_4 + 0x1a) = local_730;
  if ((cVar4 != '\0') || (bVar11)) {
    plVar2 = *(longlong **)(DAT_146b17150 + 0xac8);
    bVar11 = plVar2 == (longlong *)0x0;
    if (bVar11) {
      local_8c0 = (longlong *)0x0;
      local_8a8 = 0;
      plStack_8a0 = (longlong *)0x0;
      puVar7 = &local_8a8;
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_888,0);
      local_8c0 = (longlong *)*puVar7;
    }
    plVar2 = (longlong *)puVar7[1];
    puVar7[1] = 0;
    *puVar7 = 0;
    plVar3 = plStack_8a0;
    if ((bVar11) && (plStack_8a0 != (longlong *)0x0)) {
      LOCK();
      plVar8 = plStack_8a0 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_8a0)(plStack_8a0);
        LOCK();
        piVar5 = (int *)((longlong)plVar3 + 0xc);
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*plStack_8a0 + 8))(plStack_8a0,1);
        }
      }
    }
    if ((!bVar11) &&
       (plVar3 = (longlong *)CONCAT44(fStack_87c,fStack_880), plVar3 != (longlong *)0x0)) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar5 = (int *)((longlong)plVar3 + 0xc);
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    plVar3 = local_8c0;
    if (local_8c0 != (longlong *)0x0) {
      plVar8 = (longlong *)(**(code **)(*(longlong *)param_1[6] + 0x758))();
      if ((plVar8 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar8 + 0x5d0))(plVar8), cVar4 == '\0')) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,uVar9);
    }
    plVar3 = *(longlong **)(DAT_146b17150 + 0xab8);
    if (plVar3 != (longlong *)0x0) {
      lVar6 = *plVar3;
      uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar10 = UWorld::GetWorldSettings(uVar9,0,1);
      local_8e8 = (int *)&local_8b8;
      (**(code **)(lVar6 + 0x48))(plVar3,param_3,local_73c,*(undefined4 *)(lVar10 + 0x588));
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
        piVar5 = (int *)((longlong)plVar2 + 0xc);
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  *param_4 = local_8b8;
  *(undefined4 *)(param_4 + 1) = local_8b0;
  uVar9 = __libm_sse2_sincosf_();
  fVar12 = (float)uVar9;
  local_888 = (float)((ulonglong)uVar9 >> 0x20);
  local_7e8 = 0.0;
  local_8c0 = (longlong *)(CONCAT44(local_8c0._4_4_,fVar12) ^ 0x80000000);
  uStack_7dc = 0;
  fStack_7cc = 0.0;
  fStack_884 = fVar12;
  fStack_880 = fVar12;
  fStack_87c = fVar12;
  uVar9 = __libm_sse2_sincosf_();
  fVar13 = (float)uVar9;
  fVar18 = (float)((ulonglong)uVar9 >> 0x20);
  fVar20 = -fVar13;
  fStack_874 = 0.0;
  fStack_86c = 0.0;
  fStack_854 = 0.0;
  fStack_84c = 0.0;
  uVar9 = __libm_sse2_sincosf_();
  fVar17 = (float)uVar9;
  fVar19 = (float)((ulonglong)uVar9 >> 0x20);
  fVar14 = -fVar17;
  uStack_830 = 0;
  uStack_820 = 0;
  fVar32 = fVar14 * 0.0 + fVar19 * fVar18 + fVar13 * 0.0 + 0.0;
  fVar33 = fVar14 * 1.0 + fVar19 * fStack_874 + fStack_854 * 0.0 + 0.0;
  fVar34 = fVar14 * 0.0 + fVar19 * fVar20 + fVar18 * 0.0 + 0.0;
  fVar35 = fVar14 * 0.0 + fVar19 * fStack_86c + fStack_84c * 0.0 + 0.0;
  fVar14 = fVar19 * 0.0 + fVar17 * fVar18 + fVar13 * 0.0 + 0.0;
  fVar15 = fVar19 * 1.0 + fVar17 * fStack_874 + fStack_854 * 0.0 + 0.0;
  fVar16 = fVar19 * 0.0 + fVar17 * fVar20 + fVar18 * 0.0 + 0.0;
  fVar17 = fVar19 * 0.0 + fVar17 * fStack_86c + fStack_84c * 0.0 + 0.0;
  fVar25 = fVar18 * 0.0 + 0.0 + fVar13 * 0.0 + 0.0;
  fVar26 = fStack_874 * 0.0 + 0.0 + fStack_854 * 0.0 + 0.0;
  fVar27 = fVar20 * 0.0 + 0.0 + fVar18 * 0.0 + 0.0;
  fVar28 = fStack_86c * 0.0 + 0.0 + fStack_84c * 0.0 + 1.0;
  fVar21 = fVar18 * 0.0 + 0.0 + fVar13 * 1.0 + 0.0;
  fVar22 = fStack_874 * 0.0 + 0.0 + fStack_854 * 1.0 + 0.0;
  fVar23 = fVar20 * 0.0 + 0.0 + fVar18 * 1.0 + 0.0;
  fVar24 = fStack_86c * 0.0 + 0.0 + fStack_84c * 1.0 + 0.0;
  fVar29 = fVar33 * local_7e8 + fVar32 * 1.0 + fVar34 * uStack_7dc._4_4_ + fVar35 * 0.0;
  fVar30 = fVar33 * local_888 + fVar32 * 0.0 + fVar34 * (float)local_8c0 + fVar35 * 0.0;
  fVar31 = fVar33 * fVar12 + fVar32 * 0.0 + fVar34 * local_888 + fVar35 * 0.0;
  fVar34 = fVar33 * (float)uStack_7dc + fVar32 * 0.0 + fVar34 * fStack_7cc + fVar35 * 1.0;
  fVar13 = fVar15 * local_7e8 + fVar14 * 1.0 + fVar16 * uStack_7dc._4_4_ + fVar17 * 0.0;
  fVar18 = fVar15 * local_888 + fVar14 * 0.0 + fVar16 * (float)local_8c0 + fVar17 * 0.0;
  fVar19 = fVar15 * fVar12 + fVar14 * 0.0 + fVar16 * local_888 + fVar17 * 0.0;
  fVar17 = fVar15 * (float)uStack_7dc + fVar14 * 0.0 + fVar16 * fStack_7cc + fVar17 * 1.0;
  fVar20 = fVar26 * local_7e8 + fVar25 * 1.0 + fVar27 * uStack_7dc._4_4_ + fVar28 * 0.0;
  fVar32 = fVar26 * local_888 + fVar25 * 0.0 + fVar27 * (float)local_8c0 + fVar28 * 0.0;
  fVar33 = fVar26 * fVar12 + fVar25 * 0.0 + fVar27 * local_888 + fVar28 * 0.0;
  fVar25 = fVar26 * (float)uStack_7dc + fVar25 * 0.0 + fVar27 * fStack_7cc + fVar28 * 1.0;
  fVar14 = fVar22 * local_7e8 + fVar21 * 1.0 + fVar23 * uStack_7dc._4_4_ + fVar24 * 0.0;
  fVar15 = fVar22 * local_888 + fVar21 * 0.0 + fVar23 * (float)local_8c0 + fVar24 * 0.0;
  fVar12 = fVar22 * fVar12 + fVar21 * 0.0 + fVar23 * local_888 + fVar24 * 0.0;
  fVar16 = fVar22 * (float)uStack_7dc + fVar21 * 0.0 + fVar23 * fStack_7cc + fVar24 * 1.0;
  *(float *)(param_4 + 2) = fVar30 * 1.0 + fVar29 * 0.0 + fVar31 * 0.0 + fVar34 * 0.0;
  *(float *)((longlong)param_4 + 0x14) = fVar30 * 0.0 + fVar29 * 0.0 + fVar31 * 1.0 + fVar34 * 0.0;
  *(float *)(param_4 + 3) = fVar30 * 0.0 + fVar29 * 1.0 + fVar31 * 0.0 + fVar34 * 0.0;
  *(float *)((longlong)param_4 + 0x1c) = fVar30 * 0.0 + fVar29 * 0.0 + fVar31 * 0.0 + fVar34 * 1.0;
  *(float *)(param_4 + 4) = fVar18 * 1.0 + fVar13 * 0.0 + fVar19 * 0.0 + fVar17 * 0.0;
  *(float *)((longlong)param_4 + 0x24) = fVar18 * 0.0 + fVar13 * 0.0 + fVar19 * 1.0 + fVar17 * 0.0;
  *(float *)(param_4 + 5) = fVar18 * 0.0 + fVar13 * 1.0 + fVar19 * 0.0 + fVar17 * 0.0;
  *(float *)((longlong)param_4 + 0x2c) = fVar18 * 0.0 + fVar13 * 0.0 + fVar19 * 0.0 + fVar17 * 1.0;
  *(float *)(param_4 + 6) = fVar15 * 1.0 + fVar14 * 0.0 + fVar12 * 0.0 + fVar16 * 0.0;
  *(float *)((longlong)param_4 + 0x34) = fVar15 * 0.0 + fVar14 * 0.0 + fVar12 * 1.0 + fVar16 * 0.0;
  *(float *)(param_4 + 7) = fVar15 * 0.0 + fVar14 * 1.0 + fVar12 * 0.0 + fVar16 * 0.0;
  *(float *)((longlong)param_4 + 0x3c) = fVar15 * 0.0 + fVar14 * 0.0 + fVar12 * 0.0 + fVar16 * 1.0;
  *(float *)(param_4 + 8) = fVar32 * 1.0 + fVar20 * 0.0 + fVar33 * 0.0 + fVar25 * 0.0;
  *(float *)((longlong)param_4 + 0x44) = fVar32 * 0.0 + fVar20 * 0.0 + fVar33 * 1.0 + fVar25 * 0.0;
  *(float *)(param_4 + 9) = fVar32 * 0.0 + fVar20 * 1.0 + fVar33 * 0.0 + fVar25 * 0.0;
  *(float *)((longlong)param_4 + 0x4c) = fVar32 * 0.0 + fVar20 * 0.0 + fVar33 * 0.0 + fVar25 * 1.0;
  if (local_8d8 == '\0') {
    local_8d7[0] = *(undefined1 *)((longlong)param_1 + 0x94);
    FUN_142306cd0(&local_748,local_8d7,*(undefined8 *)(param_1[0xe] + 0xb0),param_4);
    FSceneViewExtensions::GatherActiveExtensions
              (*(undefined8 *)(DAT_146b17150 + 0xad8),&local_898,0);
    for (puVar7 = local_898; puVar7 != local_898 + (longlong)local_890 * 2; puVar7 = puVar7 + 2) {
      (**(code **)(*(longlong *)*puVar7 + 0x20))((longlong *)*puVar7,param_4);
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_898);
  }
  else {
    puVar7 = (undefined8 *)
             (**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x50))
                       (*(longlong **)(DAT_146b17150 + 0xab8),local_788,param_3);
    uVar9 = puVar7[1];
    param_4[10] = *puVar7;
    param_4[0xb] = uVar9;
    uVar9 = puVar7[3];
    param_4[0xc] = puVar7[2];
    param_4[0xd] = uVar9;
    uVar9 = puVar7[5];
    param_4[0xe] = puVar7[4];
    param_4[0xf] = uVar9;
    uVar9 = puVar7[7];
    param_4[0x10] = puVar7[6];
    param_4[0x11] = uVar9;
    *(int *)(param_4 + 0x24) = local_8d4;
    *(int *)((longlong)param_4 + 0x124) = local_8cc;
    *(int *)(param_4 + 0x25) = local_8d0 + local_8d4;
    *(uint *)((longlong)param_4 + 300) = local_8c8[0] + local_8cc;
    *(int *)(param_4 + 0x26) = local_8d4;
    *(int *)((longlong)param_4 + 0x134) = local_8cc;
    *(int *)(param_4 + 0x27) = local_8d0 + local_8d4;
    *(uint *)((longlong)param_4 + 0x13c) = local_8c8[0] + local_8cc;
  }
  if (local_120 != 0) {
    FMemory::Free();
  }
  if (local_130 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142548760 FUN_142548760 body=8 status=ok
// SIG undefined FUN_142548760(void)

undefined8 FUN_142548760(longlong param_1,uint param_2)

{
  return *(undefined8 *)(param_1 + 0x28 + (ulonglong)param_2 * 8);
}



// FUNCTION 142548770 FUN_142548770 body=124 status=ok
// SIG undefined FUN_142548770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142548770(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852f10) {
    _Init_thread_header(&DAT_146852f10);
    if (DAT_146852f10 == -1) {
      DAT_146852f00 = 0;
      _DAT_146852f08 = 0;
      atexit((_func_5014 *)&LAB_143e3ec40);
      _Init_thread_footer(&DAT_146852f10);
      return &DAT_146852f00;
    }
  }
  return &DAT_146852f00;
}



// FUNCTION 1425487f0 GetTimerManager body=28 status=ok
// SIG undefined GetTimerManager(void)

undefined8 UWorld::GetTimerManager(longlong param_1)

{
  if (*(longlong *)(param_1 + 400) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x90);
  }
  return *(undefined8 *)(param_1 + 0x3f8);
}



// FUNCTION 142548810 FUN_142548810 body=256 status=ok
// SIG undefined FUN_142548810(void)

undefined8 * FUN_142548810(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 == 0) {
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = &PTR_FUN_143f740c8;
    param_2[3] = 0;
    param_2[4] = 0;
  }
  else {
    plVar4 = (longlong *)UOnlineEngineInterface::Get();
    puVar5 = (undefined8 *)
             (**(code **)(*plVar4 + 0x2c0))(plVar4,local_18,lVar3,(int)param_1[0x21],0);
    *param_2 = &PTR_FUN_143f73d18;
    param_2[1] = *puVar5;
    lVar3 = puVar5[1];
    param_2[2] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    *param_2 = &PTR_FUN_143f740c8;
    param_2[3] = 0;
    param_2[4] = 0;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_10 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
  }
  return param_2;
}



// FUNCTION 142548910 FUN_142548910 body=908 status=ok
// SIG undefined FUN_142548910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142548910(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  BOOL BVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_6e8 [32];
  int local_6c8 [2];
  undefined1 local_6c0 [16];
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined1 local_698 [1560];
  longlong local_80;
  longlong local_70;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_6e8;
  lVar12 = FUN_1425473a0();
  BVar11 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0xa8));
  if (BVar11 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0xa8));
  }
  if (param_1 != *(longlong *)(lVar12 + 0xd0)) {
    *(longlong *)(lVar12 + 0xd0) = param_1;
    TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
    ::FindId(lVar12 + 0x58,local_6c8,param_1);
    uVar16 = DAT_1468b5da8;
    uVar10 = DAT_1468b5da0;
    puVar13 = (undefined8 *)0x0;
    if (local_6c8[0] != -1) {
      puVar13 = (undefined8 *)((longlong)local_6c8[0] * 0x30 + *(longlong *)(lVar12 + 0x58));
    }
    puVar14 = puVar13 + 1;
    if (puVar13 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)0x0;
    }
    if (puVar14 == (undefined8 *)0x0) {
      uStack_6a8._4_4_ = (uint)((ulonglong)uStack_6a8 >> 0x20) & 0xffffff00;
      local_6c0._8_4_ = DAT_1468b5d98;
      local_6c0._0_8_ = _DAT_1468b5d90;
      local_6c0._12_4_ = 0x42b40000;
      *(undefined1 (*) [16])(lVar12 + 0xd8) = local_6c0;
      auVar2._4_8_ = local_6c0._8_8_;
      auVar2._0_4_ = local_6b0._4_4_;
      auVar17._0_8_ = auVar2._0_8_ << 0x20;
      auVar17._8_4_ = uVar16;
      auVar17._12_4_ = uStack_6a8._4_4_;
      uStack_6a8 = auVar17._8_8_;
      local_6b0 = uVar10;
      *(undefined8 *)(lVar12 + 0xe8) = uVar10;
      *(undefined8 *)(lVar12 + 0xf0) = uStack_6a8;
    }
    else {
      uVar10 = puVar14[1];
      *(undefined8 *)(lVar12 + 0xd8) = *puVar14;
      *(undefined8 *)(lVar12 + 0xe0) = uVar10;
      uVar10 = puVar14[3];
      *(undefined8 *)(lVar12 + 0xe8) = puVar14[2];
      *(undefined8 *)(lVar12 + 0xf0) = uVar10;
    }
  }
  uVar16 = *(undefined4 *)(lVar12 + 0xd8);
  uVar3 = *(undefined4 *)(lVar12 + 0xdc);
  uVar4 = *(undefined4 *)(lVar12 + 0xe0);
  uVar5 = *(undefined4 *)(lVar12 + 0xe4);
  uVar6 = *(undefined4 *)(lVar12 + 0xe8);
  uVar7 = *(undefined4 *)(lVar12 + 0xec);
  uVar8 = *(undefined4 *)(lVar12 + 0xf0);
  uVar9 = *(undefined4 *)(lVar12 + 0xf4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0xa8));
  if ((char)uVar9 == '\0') {
    plVar15 = *(longlong **)(param_1 + 0x30);
    if (plVar15 != (longlong *)0x0) {
      plVar1 = (longlong *)plVar15[0xa5];
      if (plVar1 != (longlong *)0x0) {
        puVar13 = (undefined8 *)(**(code **)(*plVar1 + 0x720))(plVar1,local_698);
        *param_2 = *puVar13;
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar13 + 1);
        *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)((longlong)puVar13 + 0xc);
        *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)puVar13 + 0x14);
        *(undefined4 *)(param_2 + 3) = *(undefined4 *)(puVar13 + 3);
        *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)((longlong)puVar13 + 0x1c);
        *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar13 + 4);
        *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)((longlong)puVar13 + 0x24);
        *(undefined4 *)(param_2 + 5) = *(undefined4 *)(puVar13 + 5);
        *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)((longlong)puVar13 + 0x2c);
        *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar13 + 6);
        *(uint *)((longlong)param_2 + 0x34) =
             *(uint *)((longlong)param_2 + 0x34) ^
             (*(uint *)((longlong)param_2 + 0x34) ^ *(uint *)((longlong)puVar13 + 0x34)) & 1;
        *(uint *)((longlong)param_2 + 0x34) =
             *(uint *)((longlong)param_2 + 0x34) ^
             (*(uint *)((longlong)param_2 + 0x34) ^ *(uint *)((longlong)puVar13 + 0x34)) & 2;
        *(undefined1 *)(param_2 + 7) = *(undefined1 *)(puVar13 + 7);
        *(undefined4 *)((longlong)param_2 + 0x3c) = *(undefined4 *)((longlong)puVar13 + 0x3c);
        FUN_140e6c260(param_2 + 8,puVar13 + 8);
        param_2[200] = puVar13[200];
        *(uint *)(param_2 + 0xc9) =
             *(uint *)(param_2 + 0xc9) ^ (*(uint *)(puVar13 + 0xc9) ^ *(uint *)(param_2 + 0xc9)) & 1
        ;
        if (local_70 != 0) {
          FMemory::Free();
        }
        if (local_80 != 0) {
          FMemory::Free();
        }
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x528) + 0x778))();
        uVar16 = FUN_14271a5d0(*(undefined8 *)(param_1 + 0x30));
        *(undefined4 *)(param_2 + 3) = uVar16;
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x528) + 0x8b8))();
        uVar16 = FUN_14271a5d0(*(undefined8 *)(param_1 + 0x30));
        *(undefined4 *)((longlong)param_2 + 0x1c) = uVar16;
        plVar15 = *(longlong **)(param_1 + 0x30);
      }
      (**(code **)(*plVar15 + 0x7a8))(plVar15,param_2,(longlong)param_2 + 0xc);
    }
  }
  else {
    *(undefined4 *)param_2 = uVar16;
    *(undefined4 *)((longlong)param_2 + 4) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
    *(undefined4 *)(param_2 + 2) = uVar7;
    *(undefined4 *)(param_2 + 1) = uVar4;
    *(undefined4 *)(param_2 + 3) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar8;
  }
  FSceneViewExtensions::GatherActiveExtensions(*(undefined8 *)(DAT_146b17150 + 0xad8),local_6c0,0);
  puVar14 = (undefined8 *)(local_6c0._0_8_ + (longlong)(int)local_6c0._8_4_ * 2 * 8);
  for (puVar13 = (undefined8 *)local_6c0._0_8_; puVar13 != puVar14; puVar13 = puVar13 + 2) {
    (**(code **)(*(longlong *)*puVar13 + 0x18))
              ((longlong *)*puVar13,*(undefined8 *)(param_1 + 0x30),param_2);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_6c0);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_2 + 3);
  return;
}



// FUNCTION 142548ca0 GetViewPointFromStrings body=258 status=ok
// SIG undefined GetViewPointFromStrings(void)

float * FLockedViewState::GetViewPointFromStrings(float *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *_Str;
  double dVar3;
  
  if (param_3 == 6) {
    _Str = L"";
    if (*(int *)(param_2 + 1) == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)*param_2;
    }
    dVar3 = _wtof(pwVar2);
    iVar1 = *(int *)(param_2 + 3);
    *param_1 = (float)dVar3;
    if (iVar1 == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)param_2[2];
    }
    dVar3 = _wtof(pwVar2);
    iVar1 = *(int *)(param_2 + 5);
    param_1[1] = (float)dVar3;
    if (iVar1 == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)param_2[4];
    }
    dVar3 = _wtof(pwVar2);
    iVar1 = *(int *)(param_2 + 7);
    param_1[2] = (float)dVar3;
    if (iVar1 == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)param_2[6];
    }
    dVar3 = _wtof(pwVar2);
    iVar1 = *(int *)(param_2 + 9);
    param_1[4] = (float)dVar3;
    if (iVar1 == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)param_2[8];
    }
    dVar3 = _wtof(pwVar2);
    iVar1 = *(int *)(param_2 + 0xb);
    param_1[5] = (float)dVar3;
    if (iVar1 != 0) {
      _Str = (wchar_t *)param_2[10];
    }
    dVar3 = _wtof(_Str);
    param_1[3] = 90.0;
    param_1[6] = (float)dVar3;
  }
  return param_1;
}



// FUNCTION 142548db0 GetWorld body=55 status=ok
// SIG undefined GetWorld(void)

void FLocalPlayerContext::GetWorld(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 == 0) {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142548dda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x148))(plVar2);
    return;
  }
  return;
}



// FUNCTION 142548df0 GetWorld body=41 status=ok
// SIG undefined GetWorld(void)

undefined8 ULevelStreaming::GetWorld(longlong param_1)

{
  char cVar1;
  
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 != '\0') {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 142548e40 GetWorldAssetPackageFName body=159 status=ok
// SIG undefined GetWorldAssetPackageFName(void)

undefined8 * ULevelStreaming::GetWorldAssetPackageFName(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  longlong local_18 [2];
  
  if ((*(byte *)(param_1 + 0xb6) & 2) == 0) {
    FSoftObjectPath::ToString(param_1 + 0x38,local_28);
    puVar1 = (undefined8 *)FUN_1417006f0(local_18,local_28);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*puVar1;
    }
    puVar1 = (undefined8 *)FName::FName(local_res8,puVar2,1);
    *(undefined8 *)(param_1 + 0x130) = *puVar1;
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 2;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x130);
  return param_2;
}



// FUNCTION 142548ee0 GetWorldAssetPackageName body=174 status=ok
// SIG undefined GetWorldAssetPackageName(void)

undefined8 ULevelStreaming::GetWorldAssetPackageName(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_28 [2];
  longlong local_18 [2];
  
  if ((*(byte *)(param_1 + 0xb6) & 2) == 0) {
    FSoftObjectPath::ToString(param_1 + 0x38,local_28);
    puVar1 = (undefined8 *)FUN_1417006f0(local_18,local_28);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*puVar1;
    }
    puVar1 = (undefined8 *)FName::FName(local_res10,puVar2,1);
    *(undefined8 *)(param_1 + 0x130) = *puVar1;
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 2;
  }
  local_res8 = *(undefined8 *)(param_1 + 0x130);
  FName::ToString(&local_res8,param_2);
  return param_2;
}



// FUNCTION 142548f90 FUN_142548f90 body=1081 status=ok
// SIG undefined FUN_142548f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142548f90(longlong *param_1,wchar_t *param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  double dVar19;
  float fVar20;
  undefined1 auStack_108 [32];
  char local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  int local_b0;
  int local_a8;
  char local_a4;
  int local_a0;
  longlong *local_98;
  longlong local_90;
  int local_88;
  undefined8 local_78;
  char local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_d0 = param_1;
  dVar19 = _wtof(param_2);
  if ((*(byte *)(param_1[6] + 0x640) & 2) != 0) {
    local_e8 = '\0';
    lVar8 = FUN_1429ba1d0();
    local_d8 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar8 != 0) {
      lVar9 = FUN_1429ba1d0();
      lVar11 = lVar8;
      do {
        if (lVar11 == lVar9) goto LAB_142549032;
        lVar11 = *(longlong *)(lVar11 + 0x30);
      } while (lVar11 != 0);
    }
    lVar8 = 0;
LAB_142549032:
    local_c8[0] = 5;
    local_70 = '\0';
    local_e0 = lVar8;
    FUN_14044bc80(&local_c0,&local_d8,&local_e0);
    FUN_14045a130(local_c8);
    cVar5 = '\0';
    if (local_a4 == '\0') {
LAB_1425490a0:
      plVar16 = local_98;
      if (((*(byte *)(local_98 + 0x97) & 1) != 0) &&
         ((char)*(uint *)((longlong)local_98 + 0x474) < '\0')) {
        if ((*(uint *)((longlong)local_98 + 0x474) & 0x20) == 0) {
          uVar10 = (**(code **)(*local_98 + 0x148))(local_98);
          cVar5 = FUN_1428cfb70(uVar10);
          if (cVar5 == '\0') goto LAB_14254914a;
        }
        iVar17 = 0;
        if (0 < (int)plVar16[0x94]) {
          lVar8 = 0;
          do {
            lVar11 = (**(code **)(**(longlong **)(lVar8 + plVar16[0x93]) + 0x278))();
            if (lVar11 == param_1[6]) {
              fVar20 = *(float *)(plVar16[0x8b] + 0x28) - 0.1;
              if ((*(float *)((longlong)plVar16 + 0x4bc) < fVar20) &&
                 ((float)dVar19 <= *(float *)((longlong)plVar16 + 0x4bc))) {
                FUN_142509350(plVar16,fVar20,1);
                local_e8 = '\x01';
              }
            }
            iVar17 = iVar17 + 1;
            lVar8 = lVar8 + 8;
          } while (iVar17 < (int)plVar16[0x94]);
        }
      }
LAB_14254914a:
      lVar8 = local_c0;
      iVar17 = local_a8 + 1;
      if (iVar17 < local_88 + local_b0) {
        lVar11 = (longlong)iVar17 * 8;
        iVar14 = local_b0;
        iVar18 = local_88;
        do {
          if (iVar17 < iVar14) {
            plVar16 = *(longlong **)(local_b8 + lVar11);
          }
          else {
            plVar16 = *(longlong **)(local_90 + (longlong)(iVar17 - iVar14) * 8);
          }
          local_a0 = local_a0 + 1;
          if ((plVar16 != (longlong *)0x0) &&
             (lVar9 = AActor::GetLevel(plVar16), iVar14 = local_b0, iVar18 = local_88, lVar9 != 0))
          {
            if ((local_c8[0] & 1) != 0) {
              iVar1 = *(int *)((longlong)plVar16 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar15 = iVar1 >> 0x1f & 0xffff;
                uVar7 = iVar1 + uVar15;
                lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                         (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
              }
              else {
                lVar12 = 0;
              }
              if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_1425492e9;
            }
            if (((local_c8[0] >> 1 & 1) == 0) ||
               (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(plVar16), iVar14 = local_b0,
               iVar18 = local_88, cVar5 != '\0')) {
              if ((local_c8[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                piVar2 = *(int **)(lVar9 + 600);
                if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                    (piVar13 = (int *)UWorld::GetActiveLevelCollection(), piVar13 == (int *)0x0)) ||
                   (piVar2 == piVar13)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((bVar3) || (bVar3 = false, bVar4)) {
                  bVar3 = true;
                }
                iVar14 = local_b0;
                iVar18 = local_88;
                if ((!bVar6) || (!bVar3)) goto LAB_1425492e9;
              }
              lVar9 = ULevel::GetWorld(lVar9);
              iVar14 = local_b0;
              iVar18 = local_88;
              if (lVar9 == lVar8) {
                lVar9 = AActor::GetLevel(plVar16);
                if (lVar9 == *(longlong *)(lVar8 + 0x30)) goto LAB_1425493ae;
                lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(plVar16[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar16[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                    lVar9 + 0x88)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                iVar14 = local_b0;
                iVar18 = local_88;
                if (!bVar6) goto LAB_1425493ae;
              }
            }
          }
LAB_1425492e9:
          iVar17 = iVar17 + 1;
          lVar11 = lVar11 + 8;
          if (iVar18 + iVar14 <= iVar17) break;
        } while( true );
      }
      local_98 = (longlong *)0x0;
      local_a4 = '\x01';
      cVar5 = local_e8;
    }
LAB_14254932f:
    if (local_70 != '\0') {
      local_70 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_c0,local_78);
      if (local_90 != 0) {
        FMemory::Free();
      }
      if (local_b8 != 0) {
        FMemory::Free();
      }
    }
    if (cVar5 != '\0') {
      lVar8 = FUN_14244d3d0();
      TBaseMulticastDelegate<void>::Broadcast(lVar8 + 0x30);
    }
  }
  return 1;
LAB_1425493ae:
  param_1 = local_d0;
  cVar5 = local_e8;
  local_a8 = iVar17;
  local_98 = plVar16;
  if (local_a4 != '\0') goto LAB_14254932f;
  goto LAB_1425490a0;
}



// FUNCTION 1425493d0 FUN_1425493d0 body=995 status=ok
// SIG undefined FUN_1425493d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1425493d0(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  longlong local_d8;
  ulonglong local_d0;
  int local_c8;
  longlong *local_c0;
  uint local_b8;
  uint local_b4;
  undefined1 local_b0 [8];
  longlong local_a8;
  longlong *local_a0;
  longlong **local_98;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_58 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = -1;
  uVar2 = FUN_142a07000();
  local_e8 = 0;
  FUN_1417a5560(uVar2,&local_d8,1,0x10);
  uVar13 = local_d0 & 0xffffffff;
  do {
    local_c8 = local_c8 + 1;
    if ((int)local_d0 <= local_c8) break;
  } while (*(longlong *)(local_d8 + (longlong)local_c8 * 8) == 0);
  do {
    if ((local_c8 < 0) || ((int)uVar13 <= local_c8)) break;
    local_c0 = *(longlong **)(local_d8 + (longlong)local_c8 * 8);
    local_a8 = local_c0[0xe3];
    cVar1 = UObjectBaseUtility::IsTemplate(local_c0,0x30);
    if (cVar1 == '\0') {
      local_a0 = &local_a8;
      local_98 = &local_c0;
      FUN_14253d450(&local_88,local_b0,&local_a0,0);
    }
    uVar13 = local_d0 & 0xffffffff;
    do {
      local_c8 = local_c8 + 1;
      if ((int)local_d0 <= local_c8) break;
    } while (*(longlong *)(local_d8 + (longlong)local_c8 * 8) == 0);
  } while( true );
  if (local_d8 != 0) {
    FMemory::Free(local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = -1;
  uVar2 = USkeleton::GetPrivateStaticClass();
  local_e8 = 0;
  FUN_1417a5560(uVar2,&local_d8,1,0x10);
  uVar13 = local_d0 & 0xffffffff;
  do {
    local_c8 = local_c8 + 1;
    if ((int)local_d0 <= local_c8) break;
  } while (*(longlong *)(local_d8 + (longlong)local_c8 * 8) == 0);
  do {
    do {
      plVar9 = (longlong *)0x0;
      uVar8 = 0;
      if ((local_c8 < 0) || ((int)uVar13 <= local_c8)) {
        if (local_d8 != 0) {
          FMemory::Free(local_d8);
        }
        local_40 = 0;
        if (local_48 != (undefined1 *)0x0) {
          FMemory::Free(local_48);
        }
        TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_88);
        return 1;
      }
      local_c0 = (longlong *)0x0;
      local_b4 = 0;
      uVar13 = *(ulonglong *)(local_d8 + (longlong)local_c8 * 8);
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(&local_88,(int)local_80 - local_54,0);
      if (local_40 != 0) {
        iVar14 = (int)(uVar13 >> 4);
        uVar6 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
        uVar5 = -(uVar6 + iVar14) ^ uVar6 >> 0xd;
        uVar15 = (iVar14 - uVar6) - uVar5 ^ uVar5 >> 0xc;
        uVar6 = (uVar6 - uVar15) - uVar5 ^ uVar15 << 0x10;
        uVar5 = (uVar5 - uVar6) - uVar15 ^ uVar6 >> 5;
        uVar15 = (uVar15 - uVar6) - uVar5 ^ uVar5 >> 3;
        uVar6 = (uVar6 - uVar15) - uVar5 ^ uVar15 << 10;
        puVar3 = local_50;
        if (local_48 != (undefined1 *)0x0) {
          puVar3 = local_48;
        }
        iVar14 = *(int *)(puVar3 + (((longlong)(int)((uVar5 - uVar6) - uVar15) ^
                                    (ulonglong)(uVar6 >> 0xf)) & (longlong)local_40 - 1U) * 4);
        do {
          plVar10 = plVar9;
          plVar16 = plVar9;
          iVar12 = iVar14;
          lVar7 = local_88;
          if (iVar14 == -1) break;
          lVar4 = (longlong)iVar14;
          iVar14 = *(int *)(local_88 + 0x10 + lVar4 * 0x18);
        } while (*(ulonglong *)(local_88 + lVar4 * 0x18) != uVar13);
joined_r0x00014254966b:
        if (iVar12 != -1) {
          iVar11 = (int)plVar10;
          local_b8 = iVar11 + 1;
          if ((int)plVar16 < (int)local_b8) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_c0,plVar10);
            plVar16 = (longlong *)(ulonglong)local_b4;
            lVar7 = local_88;
            plVar9 = local_c0;
          }
          plVar10 = (longlong *)(ulonglong)local_b8;
          if (plVar9 + iVar11 != (longlong *)0x0) {
            plVar9[iVar11] = *(longlong *)(lVar7 + 8 + (longlong)iVar12 * 0x18);
            lVar7 = local_88;
          }
          iVar12 = iVar14;
          uVar8 = local_b8;
          if (iVar14 == -1) goto LAB_1425496dd;
          do {
            iVar14 = *(int *)(lVar7 + 0x10 + (longlong)iVar12 * 0x18);
            if (*(ulonglong *)(lVar7 + (longlong)iVar12 * 0x18) == uVar13) break;
            iVar12 = iVar14;
          } while (iVar14 != -1);
          goto joined_r0x00014254966b;
        }
      }
LAB_1425496dd:
      if ((uVar13 != 0) && (0 < (int)uVar8)) {
        uVar13 = (ulonglong)uVar8;
        plVar10 = plVar9;
        do {
          if (*(longlong *)(*plVar10 + 0x120) == 0) {
            FUN_1423407b0();
          }
          plVar10 = plVar10 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (plVar9 != (longlong *)0x0) {
        FMemory::Free(plVar9);
      }
      uVar13 = local_d0 & 0xffffffff;
      local_c8 = local_c8 + 1;
    } while ((int)local_d0 <= local_c8);
    do {
      if (*(longlong *)(local_d8 + (longlong)local_c8 * 8) != 0) break;
      local_c8 = local_c8 + 1;
    } while (local_c8 < (int)local_d0);
  } while( true );
}



// FUNCTION 1425497c0 HandleObjectReference body=907 status=ok
// SIG undefined HandleObjectReference(void)

void TDefaultReferenceCollector<FActorClusterReferenceProcessor,0,0>::HandleObjectReference
               (longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  byte bVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int *piVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  lVar2 = *param_2;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  piVar4 = *(int **)(param_1 + 0x18);
  if (lVar2 != 0) {
    iVar12 = *(int *)(lVar2 + 0xc);
    uVar15 = 0;
    uVar11 = uVar15;
    if (iVar12 < (int)DAT_1469e91c4) {
      uVar10 = iVar12 >> 0x1f & 0xffff;
      uVar6 = iVar12 + uVar10;
      uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
               (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
    }
    iVar1 = *(int *)(uVar11 + 0xc);
    if (iVar1 != *piVar4) {
      bVar7 = *(byte *)(uVar11 + 0xb) & 1;
      if ((bVar7 == 0) && (iVar1 == 0)) {
        if (DAT_1469e91a4 < iVar12) {
          cVar5 = FActorClusterReferenceProcessor::CanAddToCluster(piVar4,lVar2);
          if ((cVar5 != '\0') && (lVar2 = *param_2, (*(uint *)(lVar2 + 8) & 0x1400) == 0)) {
            iVar12 = *(int *)(lVar2 + 0xc);
            if (iVar12 < (int)DAT_1469e91c4) {
              uVar10 = iVar12 >> 0x1f & 0xffff;
              uVar6 = iVar12 + uVar10;
              uVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                       (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
            }
            if ((*(uint *)(uVar15 + 8) >> 0x1e & 1) == 0) {
              FActorClusterReferenceProcessor::AddObjectToCluster
                        (piVar4,iVar12,uVar11,lVar2,uVar3,1);
              return;
            }
          }
          lVar2 = *(longlong *)(piVar4 + 2);
          iVar12 = *(int *)(*param_2 + 0xc);
          piVar4 = *(int **)(lVar2 + 0x28);
          iVar1 = *(int *)(lVar2 + 0x30);
          for (piVar14 = piVar4; piVar14 != piVar4 + iVar1; piVar14 = piVar14 + 1) {
            if (*piVar14 == iVar12) {
              if ((int)((longlong)piVar14 - (longlong)piVar4 >> 2) != -1) {
                return;
              }
              break;
            }
          }
          *(int *)(lVar2 + 0x30) = iVar1 + 1;
          if (*(int *)(lVar2 + 0x34) < iVar1 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar2 + 0x28);
          }
          *(int *)((longlong)iVar1 * 4 + *(longlong *)(lVar2 + 0x28)) = iVar12;
        }
      }
      else {
        if (bVar7 == 0) {
          iVar12 = iVar1;
        }
        uVar11 = uVar15;
        if (iVar12 < (int)DAT_1469e91c4) {
          uVar10 = iVar12 >> 0x1f & 0xffff;
          uVar6 = iVar12 + uVar10;
          uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                   (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
        }
        lVar2 = *(longlong *)(piVar4 + 2);
        piVar14 = *(int **)(lVar2 + 0x18);
        iVar1 = *(int *)(lVar2 + 0x20);
        lVar16 = (longlong)(int)~*(uint *)(uVar11 + 0xc) * 0x50 + DAT_1469e8f10;
        for (piVar8 = piVar14; piVar8 != piVar14 + iVar1; piVar8 = piVar8 + 1) {
          if (*piVar8 == iVar12) {
            if ((int)((longlong)piVar8 - (longlong)piVar14 >> 2) != -1) goto LAB_1425499ed;
            break;
          }
        }
        *(int *)(lVar2 + 0x20) = iVar1 + 1;
        if (*(int *)(lVar2 + 0x24) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar2 + 0x18);
        }
        *(int *)((longlong)iVar1 * 4 + *(longlong *)(lVar2 + 0x18)) = iVar12;
LAB_1425499ed:
        TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                  (lVar16 + 0x38,piVar4);
        piVar14 = *(int **)(lVar16 + 0x18);
        uVar11 = (longlong)*(int *)(lVar16 + 0x20) & 0x3fffffffffffffff;
        if (piVar14 + *(int *)(lVar16 + 0x20) < piVar14) {
          uVar11 = uVar15;
        }
        uVar13 = uVar15;
        if (uVar11 != 0) {
          do {
            iVar12 = *piVar14;
            if (iVar12 != *piVar4) {
              lVar2 = *(longlong *)(piVar4 + 2);
              piVar8 = *(int **)(lVar2 + 0x18);
              iVar1 = *(int *)(lVar2 + 0x20);
              for (piVar9 = piVar8; piVar9 != piVar8 + iVar1; piVar9 = piVar9 + 1) {
                if (*piVar9 == iVar12) {
                  if ((int)((longlong)piVar9 - (longlong)piVar8 >> 2) != -1) goto LAB_142549a7f;
                  break;
                }
              }
              *(int *)(lVar2 + 0x20) = iVar1 + 1;
              if (*(int *)(lVar2 + 0x24) < iVar1 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar2 + 0x18);
              }
              *(int *)((longlong)iVar1 * 4 + *(longlong *)(lVar2 + 0x18)) = iVar12;
            }
LAB_142549a7f:
            piVar14 = piVar14 + 1;
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar11);
        }
        piVar14 = *(int **)(lVar16 + 0x28);
        uVar11 = (longlong)*(int *)(lVar16 + 0x30) & 0x3fffffffffffffff;
        if (piVar14 + *(int *)(lVar16 + 0x30) < piVar14) {
          uVar11 = uVar15;
        }
        if (uVar11 != 0) {
          do {
            lVar2 = *(longlong *)(piVar4 + 2);
            iVar12 = *piVar14;
            piVar8 = *(int **)(lVar2 + 0x28);
            iVar1 = *(int *)(lVar2 + 0x30);
            for (piVar9 = piVar8; piVar9 != piVar8 + iVar1; piVar9 = piVar9 + 1) {
              if (*piVar9 == iVar12) {
                if ((int)((longlong)piVar9 - (longlong)piVar8 >> 2) != -1) goto LAB_142549b1d;
                break;
              }
            }
            *(int *)(lVar2 + 0x30) = iVar1 + 1;
            if (*(int *)(lVar2 + 0x34) < iVar1 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar2 + 0x28,iVar1);
            }
            *(int *)((longlong)iVar1 * 4 + *(longlong *)(lVar2 + 0x28)) = iVar12;
LAB_142549b1d:
            piVar14 = piVar14 + 1;
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar11);
        }
      }
    }
  }
  return;
}



// FUNCTION 142549b50 HandleObjectReferences body=1080 status=ok
// SIG undefined HandleObjectReferences(void)

void TDefaultReferenceCollector<FActorClusterReferenceProcessor,0,0>::HandleObjectReferences
               (longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  int *piVar9;
  byte bVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  int *piVar19;
  longlong local_50;
  
  if (0 < param_3) {
    local_50 = 0;
    do {
      uVar15 = 0;
      lVar4 = *(longlong *)(param_2 + local_50 * 8);
      puVar5 = *(uint **)(param_1 + 0x18);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar4 + 0xc);
        uVar17 = uVar15;
        if ((int)uVar1 < (int)DAT_1469e91c4) {
          uVar14 = uVar1 & 0xffff;
          uVar8 = uVar1;
          if ((int)uVar1 < 0) {
            uVar8 = uVar1 + 0xffff;
            uVar14 = uVar14 - 0x10000;
          }
          uVar17 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                   (longlong)(int)uVar14 * 0x18;
        }
        uVar8 = *(uint *)(uVar17 + 0xc);
        if (uVar8 != *puVar5) {
          bVar10 = *(byte *)(uVar17 + 0xb) & 1;
          if ((bVar10 == 0) && (uVar8 == 0)) {
            if (DAT_1469e91a4 < (int)uVar1) {
              cVar7 = FActorClusterReferenceProcessor::CanAddToCluster(puVar5,lVar4);
              if ((cVar7 != '\0') &&
                 (lVar4 = *(longlong *)(param_2 + local_50 * 8),
                 (*(uint *)(lVar4 + 8) & 0x1400) == 0)) {
                uVar1 = *(uint *)(lVar4 + 0xc);
                if ((int)uVar1 < (int)DAT_1469e91c4) {
                  uVar14 = uVar1 & 0xffff;
                  uVar8 = uVar1;
                  if ((int)uVar1 < 0) {
                    uVar8 = uVar1 + 0xffff;
                    uVar14 = uVar14 - 0x10000;
                  }
                  uVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                           (longlong)(int)uVar14 * 0x18;
                }
                if ((*(uint *)(uVar15 + 8) >> 0x1e & 1) == 0) {
                  FActorClusterReferenceProcessor::AddObjectToCluster
                            (puVar5,uVar1,uVar17,lVar4,uVar6,1);
                  goto LAB_142549f47;
                }
              }
              lVar4 = *(longlong *)(puVar5 + 2);
              piVar19 = *(int **)(lVar4 + 0x28);
              iVar2 = *(int *)(lVar4 + 0x30);
              iVar3 = *(int *)(*(longlong *)(param_2 + local_50 * 8) + 0xc);
              for (piVar11 = piVar19; piVar11 != piVar19 + iVar2; piVar11 = piVar11 + 1) {
                if (*piVar11 == iVar3) {
                  if ((int)((longlong)piVar11 - (longlong)piVar19 >> 2) != -1) goto LAB_142549f47;
                  break;
                }
              }
              *(int *)(lVar4 + 0x30) = iVar2 + 1;
              if (*(int *)(lVar4 + 0x34) < iVar2 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar4 + 0x28,iVar2);
              }
              *(int *)((longlong)iVar2 * 4 + *(longlong *)(lVar4 + 0x28)) = iVar3;
            }
          }
          else {
            if (bVar10 == 0) {
              uVar1 = uVar8;
            }
            uVar17 = uVar15;
            if ((int)uVar1 < (int)DAT_1469e91c4) {
              uVar14 = uVar1 & 0xffff;
              uVar8 = uVar1;
              if ((int)uVar1 < 0) {
                uVar8 = uVar1 + 0xffff;
                uVar14 = uVar14 - 0x10000;
              }
              uVar17 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                       (longlong)(int)uVar14 * 0x18;
            }
            lVar4 = *(longlong *)(puVar5 + 2);
            puVar16 = *(uint **)(lVar4 + 0x18);
            iVar2 = *(int *)(lVar4 + 0x20);
            lVar18 = (longlong)(int)~*(uint *)(uVar17 + 0xc) * 0x50 + DAT_1469e8f10;
            for (puVar12 = puVar16; puVar12 != puVar16 + iVar2; puVar12 = puVar12 + 1) {
              if (*puVar12 == uVar1) {
                if ((int)((longlong)puVar12 - (longlong)puVar16 >> 2) != -1) goto LAB_142549dd9;
                break;
              }
            }
            *(int *)(lVar4 + 0x20) = iVar2 + 1;
            if (*(int *)(lVar4 + 0x24) < iVar2 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar4 + 0x18);
            }
            *(uint *)((longlong)iVar2 * 4 + *(longlong *)(lVar4 + 0x18)) = uVar1;
LAB_142549dd9:
            TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                      (lVar18 + 0x38,puVar5);
            puVar16 = *(uint **)(lVar18 + 0x18);
            uVar17 = (longlong)*(int *)(lVar18 + 0x20) & 0x3fffffffffffffff;
            if (puVar16 + *(int *)(lVar18 + 0x20) < puVar16) {
              uVar17 = uVar15;
            }
            if (uVar17 != 0) {
              do {
                uVar1 = *puVar16;
                if (uVar1 != *puVar5) {
                  lVar4 = *(longlong *)(puVar5 + 2);
                  puVar12 = *(uint **)(lVar4 + 0x18);
                  iVar2 = *(int *)(lVar4 + 0x20);
                  for (puVar13 = puVar12; puVar13 != puVar12 + iVar2; puVar13 = puVar13 + 1) {
                    if (*puVar13 == uVar1) {
                      if ((int)((longlong)puVar13 - (longlong)puVar12 >> 2) != -1)
                      goto LAB_142549e7b;
                      break;
                    }
                  }
                  *(int *)(lVar4 + 0x20) = iVar2 + 1;
                  if (*(int *)(lVar4 + 0x24) < iVar2 + 1) {
                    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar4 + 0x18,iVar2);
                  }
                  *(uint *)((longlong)iVar2 * 4 + *(longlong *)(lVar4 + 0x18)) = uVar1;
                }
LAB_142549e7b:
                puVar16 = puVar16 + 1;
                uVar15 = uVar15 + 1;
              } while (uVar15 != uVar17);
            }
            uVar17 = 0;
            piVar19 = *(int **)(lVar18 + 0x28);
            uVar15 = (longlong)*(int *)(lVar18 + 0x30) & 0x3fffffffffffffff;
            if (piVar19 + *(int *)(lVar18 + 0x30) < piVar19) {
              uVar15 = uVar17;
            }
            if (uVar15 != 0) {
              do {
                lVar4 = *(longlong *)(puVar5 + 2);
                iVar2 = *piVar19;
                piVar11 = *(int **)(lVar4 + 0x28);
                iVar3 = *(int *)(lVar4 + 0x30);
                for (piVar9 = piVar11; piVar9 != piVar11 + iVar3; piVar9 = piVar9 + 1) {
                  if (*piVar9 == iVar2) {
                    if ((int)((longlong)piVar9 - (longlong)piVar11 >> 2) != -1) goto LAB_142549f1e;
                    break;
                  }
                }
                *(int *)(lVar4 + 0x30) = iVar3 + 1;
                if (*(int *)(lVar4 + 0x34) < iVar3 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar4 + 0x28,iVar3);
                }
                *(int *)((longlong)iVar3 * 4 + *(longlong *)(lVar4 + 0x28)) = iVar2;
LAB_142549f1e:
                piVar19 = piVar19 + 1;
                uVar17 = uVar17 + 1;
              } while (uVar17 != uVar15);
            }
          }
        }
      }
LAB_142549f47:
      local_50 = local_50 + 1;
    } while (local_50 < param_3);
  }
  return;
}



// FUNCTION 142549f90 HasEndOfFrameUpdates body=47 status=ok
// SIG undefined HasEndOfFrameUpdates(void)

longlong UWorld::HasEndOfFrameUpdates(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(int *)(param_1 + 0x278) - *(int *)(param_1 + 0x2a4);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 1) {
    uVar1 = *(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x254);
    uVar2 = (ulonglong)uVar1;
    if (((int)uVar1 < 1) && ((*(byte *)(param_1 + 0x703) & 1) == 0)) {
      return (ulonglong)(uint3)(uVar1 >> 8) << 8;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 142549fc0 FUN_142549fc0 body=56 status=ok
// SIG undefined FUN_142549fc0(void)

undefined1 FUN_142549fc0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14254a160();
  if ((cVar1 != '\0') && ((*(uint *)(param_1 + 0x830) & 0x2000) == 0)) {
    cVar1 = UWorld::IsPlayingReplay(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14254a000 IsDesiredLevelLoaded body=283 status=ok
// SIG undefined IsDesiredLevelLoaded(void)

bool ULevelStreaming::IsDesiredLevelLoaded(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x120) == 0) {
    return false;
  }
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar5 = 0;
  }
  cVar2 = UWorld::IsGameWorld(uVar5);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0xb0);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x60))) {
      return *(longlong *)(param_1 + 0x138) ==
             *(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8);
    }
    if ((*(byte *)(param_1 + 0xb6) & 2) == 0) {
      FSoftObjectPath::ToString(param_1 + 0x38,local_28);
      puVar3 = (undefined8 *)FUN_1417006f0(local_18,local_28);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*puVar3;
      }
      puVar3 = (undefined8 *)FName::FName(local_res8,puVar6,1);
      *(undefined8 *)(param_1 + 0x130) = *puVar3;
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 2;
    }
    return *(longlong *)(param_1 + 0x138) == *(longlong *)(param_1 + 0x130);
  }
  plVar4 = (longlong *)GetWorldAssetPackageFName(param_1,local_res10);
  return *(longlong *)(param_1 + 0x138) == *plVar4;
}



// FUNCTION 14254a120 FUN_14254a120 body=26 status=ok
// SIG undefined FUN_14254a120(void)

byte FUN_14254a120(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x458) != 0) {
    return *(byte *)(*(longlong *)(param_1 + 0x458) + 0x24c) >> 5 & 1;
  }
  return 0;
}



// FUNCTION 14254a140 IsLevelVisible body=27 status=ok
// SIG undefined IsLevelVisible(void)

longlong ULevelStreaming::IsLevelVisible(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x204) & 0x10) != 0)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 14254a160 FUN_14254a160 body=132 status=ok
// SIG undefined FUN_14254a160(void)

undefined4 FUN_14254a160(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = UWorld::GetWorldSettings(param_1,0,0);
  if (((lVar3 == 0) || (*(longlong *)(lVar3 + 0x600) == 0)) ||
     (*(float *)(param_1 + 0x790) <= *(float *)(param_1 + 0x7b8) &&
      *(float *)(param_1 + 0x7b8) != *(float *)(param_1 + 0x790))) {
    if (((*(byte *)(param_1 + 0x830) & 8) != 0) && (iVar2 = FUN_1428cf800(param_1), iVar2 == 3)) {
      return 1;
    }
    cVar1 = FUN_14288f710(DAT_146b17150,param_1);
    if ((cVar1 == '\0') &&
       ((cVar1 = UWorld::IsPlayInEditor(param_1), cVar1 == '\0' ||
        ((*(uint *)(param_1 + 0x830) & 0x1000) == 0)))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14254a1f0 FUN_14254a1f0 body=68 status=ok
// SIG undefined FUN_14254a1f0(void)

bool FUN_14254a1f0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar3 = param_1[4];
  }
  else {
    lVar3 = 0;
  }
  uVar1 = (**(code **)(*param_1 + 0x148))();
  plVar2 = (longlong *)UEngine::GetFirstGamePlayer(lVar3,uVar1);
  return param_1 == plVar2;
}



// FUNCTION 14254a240 FUN_14254a240 body=410 status=ok
// SIG undefined FUN_14254a240(void)

undefined8 FUN_14254a240(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong local_res10;
  undefined1 local_res18 [8];
  longlong local_28 [2];
  longlong local_18 [2];
  
  cVar4 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if ((cVar4 != '\0') || (lVar2 = param_1[4], lVar2 == 0)) {
    return 0;
  }
  lVar3 = param_1[0x24];
  cVar4 = (**(code **)(*param_1 + 0x280))(param_1);
  if ((lVar3 != 0) == (bool)cVar4) {
    if ((param_1[0x24] == 0) || ((*(byte *)(param_1[0x24] + 0x204) & 0x10) == 0)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    cVar5 = (**(code **)(*param_1 + 0x288))(param_1);
    if ((cVar4 != cVar5) && (cVar4 = (**(code **)(*param_1 + 0x280))(param_1), cVar4 != '\0')) {
      return 1;
    }
    cVar4 = UWorld::IsGameWorld(lVar2);
    if (cVar4 == '\0') {
      plVar7 = (longlong *)ULevelStreaming::GetWorldAssetPackageFName(param_1,local_res18);
    }
    else {
      iVar1 = (int)param_1[0x16];
      if ((iVar1 < 0) || ((int)param_1[0xc] <= iVar1)) {
        if ((*(byte *)((longlong)param_1 + 0xb6) & 2) == 0) {
          FSoftObjectPath::ToString(param_1 + 7,local_28);
          puVar6 = (undefined8 *)FUN_1417006f0(local_18,local_28);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar6;
          }
          plVar7 = (longlong *)FName::FName(&local_res10,puVar8,1);
          param_1[0x26] = *plVar7;
          if (local_18[0] != 0) {
            FMemory::Free();
          }
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          *(byte *)((longlong)param_1 + 0xb6) = *(byte *)((longlong)param_1 + 0xb6) | 2;
        }
        plVar7 = &local_res10;
        local_res10 = param_1[0x26];
      }
      else {
        plVar7 = &local_res10;
        local_res10 = *(longlong *)(param_1[0xb] + (longlong)iVar1 * 8);
      }
    }
    if (param_1[0x24] == 0) {
      return 0;
    }
    if (param_1[0x27] == *plVar7) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14254a3e0 FUN_14254a3e0 body=26 status=ok
// SIG undefined FUN_14254a3e0(void)

bool FUN_14254a3e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142371b40(*(undefined8 *)(param_1 + 0x458));
  return cVar1 == '\0';
}



// FUNCTION 14254a400 FUN_14254a400 body=12 status=ok
// SIG undefined FUN_14254a400(void)

bool FUN_14254a400(longlong param_1,uint param_2)

{
  return *(longlong *)(param_1 + 0x28 + (ulonglong)param_2 * 8) != 0;
}



// FUNCTION 14254a410 FUN_14254a410 body=169 status=ok
// SIG undefined FUN_14254a410(void)

undefined8 FUN_14254a410(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  cVar1 = FWeakObjectPtr::IsValid();
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    if (lVar2 == 0) {
      plVar3 = (longlong *)FWeakObjectPtr::Get(param_1);
      lVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
      if (lVar2 == 0) {
        return 0;
      }
    }
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    lVar4 = FWeakObjectPtr::Get(param_1);
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(lVar4 + 0x30);
    }
    else {
      lVar2 = UPlayer::GetPlayerController(lVar4,lVar2);
    }
    if (((lVar2 != 0) && (lVar2 = FWeakObjectPtr::Get(param_1), lVar2 != 0)) &&
       (lVar2 = FUN_142547b00(param_1), *(longlong *)(lVar2 + 0x508) != 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14254a4c0 FUN_14254a4c0 body=267 status=ok
// SIG undefined FUN_14254a4c0(void)

undefined8
FUN_14254a4c0(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
             char *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  longlong local_18 [2];
  
  *param_5 = '\0';
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 != 0) {
    local_18[0] = 0;
    local_18[1] = 0;
    cVar1 = FUN_14170afe0(param_2,local_18,0);
    *param_5 = cVar1;
    if (cVar1 != '\0') {
      local_38 = *param_4;
      local_30 = *(undefined4 *)(param_4 + 1);
      local_28 = *param_3;
      local_20 = *(undefined4 *)(param_3 + 1);
      uVar3 = FUN_14254a6d0(lVar2,local_18,&local_28,&local_38,param_5);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (*param_2 == 0) {
        return uVar3;
      }
      FMemory::Free();
      return uVar3;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 14254a5d0 LoadLevelInstanceBySoftObjectPtr body=249 status=ok
// SIG undefined LoadLevelInstanceBySoftObjectPtr(void)

undefined8
ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr
          (undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
          undefined1 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  longlong local_18 [2];
  
  *param_5 = 0;
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar1 == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FMemory::Free();
    }
    uVar2 = 0;
  }
  else {
    local_38 = *param_4;
    local_30 = *(undefined4 *)(param_4 + 1);
    local_28 = *param_3;
    local_20 = *(undefined4 *)(param_3 + 1);
    FSoftObjectPath::GetLongPackageName((longlong *)(param_2 + 0x10),local_18);
    uVar2 = FUN_14254a6d0(lVar1,local_18,&local_28,&local_38,param_5);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FMemory::Free();
    }
  }
  return uVar2;
}



// FUNCTION 14254a6d0 FUN_14254a6d0 body=1565 status=ok
// SIG undefined FUN_14254a6d0(void)

longlong *
FUN_14254a6d0(longlong param_1,undefined8 *param_2,undefined1 (*param_3) [12],undefined8 param_4,
             undefined1 *param_5)

{
  void *pvVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  wchar_t *_Src;
  char cVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  undefined2 *puVar15;
  int iVar16;
  undefined2 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  longlong local_res8;
  undefined8 *local_res10;
  undefined1 (*local_res18) [12];
  undefined8 local_res20;
  void *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  uint local_80;
  int local_7c;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  void *local_68;
  ulonglong local_60;
  void *local_58;
  int local_50;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1416f9e30(&local_68);
  FUN_1416f9840(&local_58,param_2);
  pvVar1 = local_58;
  local_80 = local_50;
  local_88 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_88,(2 - (uint)(local_50 != 0)) + local_50,0);
  puVar15 = local_88;
  _guard_xfg_dispatch_icall_nop(local_88,pvVar1,(longlong)local_50 * 2);
  uVar18 = local_80;
  lVar13 = (longlong)(int)local_80;
  local_80 = (2 - (uint)(local_80 != 0)) + local_80;
  if (local_7c < (int)local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,uVar18);
    puVar15 = local_88;
  }
  puVar11 = (undefined2 *)0x0;
  iVar16 = 0;
  lVar13 = lVar13 - (ulonglong)(uVar18 != 0);
  puVar15[lVar13] = 0x2f;
  puVar15[lVar13 + 1] = 0;
  uVar18 = *(uint *)(param_1 + 0xf0);
  if ((int)local_80 < 2) {
    pvVar1 = *(void **)(param_1 + 0xe8);
    local_88 = (undefined2 *)0x0;
    if (uVar18 == 0) {
      local_80 = 0;
    }
    else {
      local_80 = uVar18;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,uVar18);
      puVar11 = local_88;
      _guard_xfg_dispatch_icall_nop(local_88,pvVar1,(longlong)(int)uVar18 * 2);
      iVar16 = local_7c;
    }
  }
  else {
    iVar12 = uVar18 - 1;
    if (uVar18 == 0) {
      iVar12 = iVar16;
    }
    if ((local_80 != 0) || (iVar20 = 1, iVar12 == 0)) {
      iVar20 = iVar16;
    }
    uVar18 = local_80;
    local_88 = puVar15;
    if (local_7c < (int)(local_80 + iVar20 + iVar12)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
      uVar18 = local_80;
    }
    pvVar1 = *(void **)(param_1 + 0xe8);
    puVar15 = puVar11;
    puVar11 = local_88;
    iVar16 = local_7c;
    local_80 = uVar18;
    if (iVar12 != 0) {
      local_80 = iVar12 + (uint)(uVar18 == 0) + uVar18;
      if (local_7c < (int)local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,uVar18);
      }
      iVar16 = local_7c;
      uVar14 = local_80;
      puVar11 = local_88;
      puVar17 = local_88 + ((longlong)(int)uVar18 - (ulonglong)(uVar18 != 0));
      _guard_xfg_dispatch_icall_nop(puVar17,pvVar1,(longlong)iVar12 * 2);
      puVar17[iVar12] = 0;
      local_80 = uVar14;
    }
  }
  pvVar1 = local_68;
  puVar17 = (undefined2 *)0x0;
  uVar18 = (uint)local_60;
  if ((int)local_80 < 2) {
    local_88 = (undefined2 *)0x0;
    local_80 = uVar18;
    if (uVar18 == 0) {
      local_7c = 0;
      uVar19 = local_60;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_60 & 0xffffffff,0);
      puVar17 = local_88;
      _guard_xfg_dispatch_icall_nop(local_88,pvVar1,(longlong)(int)uVar18 * 2);
      uVar19 = (ulonglong)local_80;
    }
    iVar16 = local_7c;
    if (puVar11 != (undefined2 *)0x0) {
      FMemory::Free(puVar11);
    }
  }
  else {
    iVar12 = uVar18 - 1;
    if (uVar18 == 0) {
      iVar12 = 0;
    }
    if ((local_80 != 0) || (puVar6 = (undefined2 *)0x1, iVar12 == 0)) {
      puVar6 = puVar17;
    }
    local_88 = puVar11;
    local_7c = iVar16;
    if (iVar16 < (int)((int)puVar6 + local_80 + iVar12)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    }
    pvVar1 = local_68;
    uVar18 = local_80;
    puVar17 = local_88;
    iVar16 = local_7c;
    uVar14 = local_80;
    if (iVar12 != 0) {
      lVar13 = (longlong)(int)local_80;
      local_80 = local_80 + (local_80 == 0) + iVar12;
      if (local_7c < (int)local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,uVar18);
      }
      iVar16 = local_7c;
      uVar14 = local_80;
      puVar17 = local_88;
      puVar11 = local_88 + (lVar13 - (ulonglong)(uVar18 != 0));
      _guard_xfg_dispatch_icall_nop(puVar11,pvVar1,(longlong)iVar12 * 2);
      puVar11[iVar12] = 0;
    }
    uVar19 = (ulonglong)uVar14;
    local_88 = puVar17;
    local_7c = iVar16;
  }
  uVar18 = (uint)uVar19;
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  DAT_146afc8d8 = DAT_146afc8d8 + 1;
  local_98 = (void *)0x0;
  local_90 = 0;
  FString::AppendInt(&local_98);
  iVar12 = 0;
  if ((int)local_90 != 0) {
    iVar12 = (int)local_90 + -1;
  }
  iStack_70 = iVar12 + 0x10;
  local_78 = (wchar_t *)0x0;
  uStack_6c = 0;
  if (0 < iStack_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  }
  iVar20 = iStack_70;
  _Src = local_78;
  builtin_wcsncpy(local_78,L"_LevelInstance_",0xf);
  _guard_xfg_dispatch_icall_nop(local_78 + 0xf,local_98,(longlong)iVar12 * 2);
  _Src[(longlong)iVar12 + 0xf] = L'\0';
  if ((iVar20 != 0) && (iVar20 = iVar20 + -1, iVar20 != 0)) {
    local_80 = (uint)(uVar18 == 0) + iVar20 + uVar18;
    if (iVar16 < (int)local_80) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,uVar19 & 0xffffffff);
      puVar17 = local_88;
    }
    uVar14 = local_80;
    _guard_xfg_dispatch_icall_nop
              (puVar17 + ((longlong)(int)uVar18 - (ulonglong)(uVar18 != 0)),_Src,
               (longlong)iVar20 * 2);
    (puVar17 + ((longlong)(int)uVar18 - (ulonglong)(uVar18 != 0)))[iVar20] = 0;
    uVar18 = uVar14;
  }
  if (_Src != (wchar_t *)0x0) {
    FMemory::Free(_Src);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  local_98 = (void *)0x0;
  uVar7 = ULevelStreamingDynamic::GetPrivateStaticClass();
  pvVar1 = local_98;
  lVar13 = local_res8;
  local_88 = (undefined2 *)0x0;
  if (local_98 == (void *)0x0) {
    FUN_1417846f0(local_res8,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  plVar8 = (longlong *)FUN_1417985e0(uVar7,lVar13,pvVar1,0x40,0,0,0,0,0);
  puVar15 = &DAT_143f3eda8;
  puVar11 = &DAT_143f3eda8;
  if (uVar18 != 0) {
    puVar11 = puVar17;
  }
  puVar9 = (undefined8 *)FName::FName(&local_res8,puVar11,1);
  ULevelStreaming::SetWorldAssetByPackageName(plVar8,*puVar9);
  uVar7 = FColor::MakeRandomColor(&local_res8);
  FLinearColor::FLinearColor(&local_78,uVar7);
  *(undefined4 *)(plVar8 + 0x17) = (undefined4)local_78;
  *(undefined4 *)((longlong)plVar8 + 0xbc) = local_78._4_4_;
  *(int *)(plVar8 + 0x18) = iStack_70;
  *(undefined4 *)((longlong)plVar8 + 0xc4) = uStack_6c;
  (**(code **)(*plVar8 + 0x278))(plVar8,1);
  if ((*(byte *)((longlong)plVar8 + 0xb6) & 4) == 0) {
    *(byte *)((longlong)plVar8 + 0xb6) = *(byte *)((longlong)plVar8 + 0xb6) | 4;
    cVar5 = UObjectBaseUtility::IsTemplate(plVar8,0x30);
    if ((cVar5 == '\0') && (plVar8[4] != 0)) {
      UWorld::UpdateStreamingLevelShouldBeConsidered(plVar8[4],plVar8);
    }
  }
  *(byte *)((longlong)plVar8 + 0xb6) = *(byte *)((longlong)plVar8 + 0xb6) & 0xbf;
  *(uint *)(plVar8 + 0x28) = *(uint *)(plVar8 + 0x28) | 3;
  FRotator::Quaternion(local_res20,&local_78);
  auVar4 = *local_res18;
  auVar2._4_4_ = DAT_1464aa788._4_4_;
  auVar2._0_4_ = (undefined4)DAT_1464aa788;
  auVar2._8_4_ = DAT_1464aa790;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(plVar8 + 0x14) = auVar2;
  plVar8[0x10] = (longlong)local_78;
  plVar8[0x11] = CONCAT44(uStack_6c,iStack_70);
  auVar3._12_4_ = 0;
  auVar3._0_12_ = auVar4;
  *(undefined1 (*) [16])(plVar8 + 0x12) = auVar3;
  if (*(int *)(local_res10 + 1) != 0) {
    puVar15 = (undefined2 *)*local_res10;
  }
  plVar10 = (longlong *)FName::FName(&local_res8,puVar15,1);
  plVar8[10] = *plVar10;
  UWorld::AddStreamingLevel(lVar13,plVar8);
  *param_5 = 1;
  if (puVar17 != (undefined2 *)0x0) {
    FMemory::Free(puVar17);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  return plVar8;
}



// FUNCTION 14254acf0 FUN_14254acf0 body=2040 status=ok
// SIG undefined FUN_14254acf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014254b383) */
/* WARNING: Removing unreachable block (ram,0x00014254b392) */
/* WARNING: Removing unreachable block (ram,0x00014254b3a1) */
/* WARNING: Removing unreachable block (ram,0x00014254b3b0) */
/* WARNING: Removing unreachable block (ram,0x00014254b3bf) */
/* WARNING: Removing unreachable block (ram,0x00014254b3cd) */
/* WARNING: Removing unreachable block (ram,0x00014254b3db) */
/* WARNING: Removing unreachable block (ram,0x00014254b3e9) */

void FUN_14254acf0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  wint_t wVar20;
  wint_t wVar21;
  BOOL BVar22;
  longlong *plVar23;
  longlong lVar24;
  float *pfVar25;
  int iVar26;
  longlong *plVar27;
  undefined2 *puVar28;
  wint_t *pwVar29;
  longlong lVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint uVar34;
  undefined1 auStack_768 [32];
  double local_748;
  double local_740;
  double local_738;
  double local_730;
  int local_728 [2];
  float local_720;
  float fStack_71c;
  float fStack_718;
  float fStack_714;
  undefined8 local_710;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  float fStack_6e0;
  undefined4 uStack_6dc;
  undefined2 *local_6d8;
  int local_6d0;
  LPCRITICAL_SECTION local_6c8;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  float local_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 local_688;
  uint local_684;
  undefined1 local_680;
  undefined4 local_67c;
  undefined1 local_678 [1496];
  longlong local_a0;
  longlong local_90;
  undefined8 local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_768;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x15);
  local_6c8 = lpCriticalSection;
  BVar22 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar22 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_2 != (longlong *)param_1[0x1a]) {
    param_1[0x1a] = (longlong)param_2;
    TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0xb,local_728,param_2);
    uVar33 = DAT_1468b5da8;
    uVar32 = DAT_1468b5da0._4_4_;
    uVar31 = (undefined4)DAT_1468b5da0;
    uVar4 = DAT_1468b5d98;
    uVar3 = DAT_1468b5d94;
    plVar23 = (longlong *)0x0;
    if (local_728[0] != -1) {
      plVar23 = (longlong *)((longlong)local_728[0] * 0x30 + param_1[0xb]);
    }
    plVar27 = plVar23 + 1;
    if (plVar23 == (longlong *)0x0) {
      plVar27 = (longlong *)0x0;
    }
    if (plVar27 == (longlong *)0x0) {
      uStack_6dc = uStack_6dc & 0xffffff00;
      local_6f8 = (undefined2 **)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      uStack_6f0 = (float *)CONCAT44(0x42b40000,DAT_1468b5d98);
      local_6e8 = CONCAT44(DAT_1468b5da0._4_4_,(undefined4)DAT_1468b5da0);
      fStack_6e0 = (float)DAT_1468b5da8;
      *(undefined4 *)(param_1 + 0x1b) = DAT_1468b5d90;
      *(undefined4 *)((longlong)param_1 + 0xdc) = uVar3;
      *(undefined4 *)(param_1 + 0x1c) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0xe4) = 0x42b40000;
      uVar34 = uStack_6dc;
    }
    else {
      lVar24 = plVar27[1];
      param_1[0x1b] = *plVar27;
      param_1[0x1c] = lVar24;
      uVar31 = (undefined4)plVar27[2];
      uVar32 = *(undefined4 *)((longlong)plVar27 + 0x14);
      uVar33 = (undefined4)plVar27[3];
      uVar34 = *(uint *)((longlong)plVar27 + 0x1c);
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar31;
    *(undefined4 *)((longlong)param_1 + 0xec) = uVar32;
    *(undefined4 *)(param_1 + 0x1e) = uVar33;
    *(uint *)((longlong)param_1 + 0xf4) = uVar34;
  }
  local_720 = *(float *)(param_1 + 0x1b);
  fStack_71c = *(float *)((longlong)param_1 + 0xdc);
  fStack_718 = (float)param_1[0x1c];
  fStack_714 = *(float *)((longlong)param_1 + 0xe4);
  local_710 = param_1[0x1d];
  uStack_708 = (float)param_1[0x1e];
  uStack_704 = *(undefined4 *)((longlong)param_1 + 0xf4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  if ((int)param_3[1] == 1) {
    if (*(int *)((undefined8 *)*param_3 + 1) == 0) {
      puVar28 = &DAT_143f3eda8;
    }
    else {
      puVar28 = *(undefined2 **)*param_3;
    }
    pwVar29 = &DAT_1450f2180;
    do {
      wVar20 = *(wint_t *)((longlong)pwVar29 + (longlong)(puVar28 + -0xa28790c0));
      if ((wVar20 == 0) && (*pwVar29 == 0)) {
        return;
      }
      if (wVar20 != *pwVar29) {
        wVar20 = towlower(wVar20);
        wVar21 = towlower(*pwVar29);
        if (wVar20 != wVar21) goto LAB_14254ae96;
      }
      pwVar29 = pwVar29 + 1;
    } while( true );
  }
LAB_14254aeb6:
  iVar1 = (int)param_3[1];
  if (iVar1 == 0) {
    if ((char)uStack_704 != '\0') {
      FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::RemoveAnnotation
                (param_1 + 10,param_2);
      return;
    }
    local_6b8 = 0;
    uStack_6b0 = 0;
    local_684 = local_684 & 0xfffffffe | 2;
    local_688 = 0x3faaaaab;
    local_6a8 = 0;
    local_6a0 = 90.0;
    local_698 = 0x42b40000;
    uStack_694 = 0x44000000;
    uStack_690 = 0;
    uStack_68c = 0x4a000000;
    local_680 = 0;
    local_67c = 0;
    FUN_142741540(local_678);
    local_70 = local_70 & 0xfffffffe;
    local_78 = 0;
    (**(code **)(*param_2 + 0x280))(param_2,&local_6b8,0);
    local_720 = (float)local_6b8;
    fStack_718 = (float)uStack_6b0;
    fStack_71c = local_6b8._4_4_;
    local_710 = CONCAT44((int)local_6a8,uStack_6b0._4_4_);
    fStack_714 = local_6a0;
    uStack_708 = local_6a8._4_4_;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 6) {
        bVar2 = false;
        iVar1 = *(int *)(*param_3 + 8);
        lVar24 = 6;
        iVar26 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar26 = 0;
        }
        do {
          bVar2 = (bool)(bVar2 | iVar26 == 0);
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        if (bVar2) {
          return;
        }
        pfVar25 = (float *)FLockedViewState::GetViewPointFromStrings(&local_6f8,*param_3,6);
        local_720 = *pfVar25;
        fStack_71c = pfVar25[1];
        fStack_718 = pfVar25[2];
        fStack_714 = pfVar25[3];
        local_710 = *(longlong *)(pfVar25 + 4);
        uStack_708 = pfVar25[6];
      }
      else {
        if (iVar1 != 7) {
          return;
        }
        bVar2 = false;
        iVar1 = *(int *)((undefined8 *)*param_3 + 1);
        iVar26 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar26 = 0;
        }
        lVar24 = 7;
        do {
          bVar2 = (bool)(bVar2 | iVar26 == 0);
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        if (bVar2) {
          return;
        }
        if (iVar1 == 0) {
          puVar28 = &DAT_143f3eda8;
        }
        else {
          puVar28 = *(undefined2 **)*param_3;
        }
        FName::FName(&local_6d8,puVar28,1);
        pfVar25 = (float *)FLockedViewState::GetViewPointFromStrings
                                     (&local_6f8,*param_3 + 0x10,(int)param_3[1] + -1);
        local_720 = *pfVar25;
        fStack_71c = pfVar25[1];
        fStack_718 = pfVar25[2];
        fStack_714 = pfVar25[3];
        local_710 = *(longlong *)(pfVar25 + 4);
        uStack_708 = pfVar25[6];
        local_6f8 = &local_6d8;
        uStack_6f0 = &local_720;
        local_6e8 = local_710;
        fStack_6e0 = uStack_708;
        FUN_14253d8a0(param_1,local_728,&local_6f8,0);
      }
      goto LAB_14254b310;
    }
    if (*(int *)((undefined8 *)*param_3 + 1) == 0) {
      puVar28 = &DAT_143f3eda8;
    }
    else {
      puVar28 = *(undefined2 **)*param_3;
    }
    FName::FName(&local_6d8,puVar28,1);
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar23 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar23 = param_1 + 7;
      }
      iVar1 = *(int *)((longlong)plVar23 +
                      ((longlong)((int)((ulonglong)local_6d8 >> 0x20) + (int)local_6d8) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar1 != -1) {
        lVar24 = *param_1;
        iVar26 = iVar1;
        do {
          if (*(undefined2 **)(lVar24 + (longlong)iVar26 * 0x30) == local_6d8) {
            if (iVar26 != -1) goto joined_r0x00014254b0f1;
            break;
          }
          iVar26 = *(int *)(lVar24 + 0x28 + (longlong)iVar26 * 0x30);
        } while (iVar26 != -1);
      }
    }
    FUN_140a25a20(&local_6b8);
    (**(code **)(*param_2 + 0x280))(param_2,&local_6b8,0);
    local_6f8 = &local_6d8;
    local_720 = (float)local_6b8;
    fStack_718 = (float)uStack_6b0;
    fStack_71c = local_6b8._4_4_;
    local_710 = CONCAT44((int)local_6a8,uStack_6b0._4_4_);
    uStack_6f0 = &local_720;
    fStack_714 = local_6a0;
    uStack_708 = local_6a8._4_4_;
    FUN_14253d8a0(param_1,local_728,&local_6f8,0);
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
LAB_14254b310:
  uVar31 = uStack_704;
  uStack_704 = CONCAT31(uStack_704._1_3_,1);
  uVar32 = uStack_704;
  uVar5 = (undefined1)local_710;
  uVar6 = local_710._1_1_;
  uVar7 = local_710._2_1_;
  uVar8 = local_710._3_1_;
  uVar9 = local_710._4_1_;
  uVar10 = local_710._5_1_;
  uVar11 = local_710._6_1_;
  uVar12 = local_710._7_1_;
  uVar13 = (undefined1)uStack_708;
  uVar14 = uStack_708._1_1_;
  uVar15 = uStack_708._2_1_;
  uVar16 = uStack_708._3_1_;
  uStack_704._1_1_ = SUB41(uVar31,1);
  uVar17 = uStack_704._1_1_;
  uStack_704._2_1_ = SUB41(uVar31,2);
  uVar18 = uStack_704._2_1_;
  uStack_704._3_1_ = SUB41(uVar31,3);
  uVar19 = uStack_704._3_1_;
  lVar24 = CONCAT44(fStack_71c,local_720);
  lVar30 = CONCAT44(fStack_714,fStack_718);
  local_6e8 = local_710;
  fStack_6e0 = uStack_708;
  uStack_6dc = CONCAT13(uStack_704._3_1_,CONCAT12(uStack_704._2_1_,CONCAT11(uStack_704._1_1_,1)));
  uStack_704 = uVar32;
  local_6f8 = (undefined2 **)lVar24;
  uStack_6f0 = (float *)lVar30;
  BVar22 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  if (BVar22 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  }
  param_1[0x1b] = lVar24;
  param_1[0x1c] = lVar30;
  *(undefined1 *)(param_1 + 0x1d) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0xe9) = uVar6;
  *(undefined1 *)((longlong)param_1 + 0xea) = uVar7;
  *(undefined1 *)((longlong)param_1 + 0xeb) = uVar8;
  *(undefined1 *)((longlong)param_1 + 0xec) = uVar9;
  *(undefined1 *)((longlong)param_1 + 0xed) = uVar10;
  *(undefined1 *)((longlong)param_1 + 0xee) = uVar11;
  *(undefined1 *)((longlong)param_1 + 0xef) = uVar12;
  *(undefined1 *)(param_1 + 0x1e) = uVar13;
  *(undefined1 *)((longlong)param_1 + 0xf1) = uVar14;
  *(undefined1 *)((longlong)param_1 + 0xf2) = uVar15;
  *(undefined1 *)((longlong)param_1 + 0xf3) = uVar16;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 1;
  *(undefined1 *)((longlong)param_1 + 0xf5) = uVar17;
  *(undefined1 *)((longlong)param_1 + 0xf6) = uVar18;
  *(undefined1 *)((longlong)param_1 + 0xf7) = uVar19;
  param_1[0x1a] = (longlong)param_2;
  if ((int)param_1[0xc] == *(int *)((longlong)param_1 + 0x8c)) {
    FUObjectArray::AddUObjectDeleteListener(&DAT_1469e91a0,param_1 + 10);
  }
  local_6f8 = (undefined2 **)(param_1 + 0x1a);
  uStack_6f0 = (float *)(param_1 + 0x1b);
  FUN_14253d640(param_1 + 0xb,local_728,&local_6f8,0);
  LeaveCriticalSection(local_6c8);
  local_730 = (double)uStack_708;
  local_738 = (double)local_710._4_4_;
  local_740 = (double)(float)local_710;
  local_748 = (double)fStack_718;
  FString::PrintfImpl(&local_6d8,L"%f %f %f %f %f %f",(double)local_720,(double)fStack_71c);
  puVar28 = &DAT_143f3eda8;
  if (local_6d0 != 0) {
    puVar28 = local_6d8;
  }
  FUN_1416cf5b0(puVar28);
  if (local_6d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
LAB_14254ae96:
  if (wVar20 == wVar21) {
    return;
  }
  goto LAB_14254aeb6;
joined_r0x00014254b0f1:
  if (iVar1 == -1) goto LAB_14254b11a;
  lVar30 = (longlong)iVar1;
  if (*(undefined2 **)(lVar24 + lVar30 * 0x30) == local_6d8) {
    if ((iVar1 != -1) && (lVar24 = lVar30 * 0x30 + lVar24, lVar24 != 0)) {
      local_720 = *(float *)(lVar24 + 8);
      fStack_71c = *(float *)(lVar24 + 0xc);
      fStack_718 = *(float *)(lVar24 + 0x10);
      fStack_714 = *(float *)(lVar24 + 0x14);
      uStack_708 = *(float *)(lVar24 + 0x20);
      local_710 = *(undefined8 *)(lVar24 + 0x18);
      goto LAB_14254b310;
    }
    goto LAB_14254b11a;
  }
  iVar1 = *(int *)(lVar24 + 0x28 + lVar30 * 0x30);
  goto joined_r0x00014254b0f1;
LAB_14254b11a:
  local_720 = 0.0;
  fStack_71c = 0.0;
  fStack_718 = 0.0;
  fStack_714 = 0.0;
  uStack_708 = 0.0;
  local_710 = 0;
  goto LAB_14254b310;
}



// FUNCTION 14254b4f0 MakeSafeLevelName body=1054 status=ok
// SIG undefined MakeSafeLevelName(void)

longlong *
FStreamLevelAction::MakeSafeLevelName(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  void *pvVar11;
  bool bVar12;
  void *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  int local_60;
  int local_5c;
  longlong local_58 [2];
  longlong local_48 [2];
  
  if (*(int *)(param_3 + 0xf0) < 2) {
    FName::ToString(param_2,param_1);
    return param_1;
  }
  FPackageName::GetShortName(&local_78);
  cVar1 = FString::StartsWith(&local_78,(undefined8 *)(param_3 + 0xe8),1);
  pvVar9 = local_78;
  pvVar11 = (void *)0x0;
  iVar5 = 0;
  if (cVar1 == '\0') {
    local_60 = *(int *)(param_3 + 0xf0);
    lVar6 = (longlong)local_60;
    pvVar7 = pvVar11;
    if (local_60 < 2) {
      local_68 = (void *)0x0;
      local_60 = local_70;
      iVar2 = iVar5;
      if (local_70 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_70,0);
        pvVar7 = local_68;
        ::_guard_xfg_dispatch_icall_nop(local_68,pvVar9,(longlong)local_70 * 2);
        local_70 = local_60;
        iVar2 = local_5c;
      }
    }
    else {
      iVar3 = iVar5;
      if (local_70 != 0) {
        iVar3 = local_70 + -1;
      }
      if ((local_60 != 0) || (iVar2 = 1, iVar3 == 0)) {
        iVar2 = iVar5;
      }
      pvVar9 = *(void **)(param_3 + 0xe8);
      local_68 = (void *)0x0;
      if ((local_60 == 0) && (iVar2 + iVar3 == 0)) {
        local_5c = 0;
        local_70 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60 + iVar2 + iVar3,0);
        pvVar7 = local_68;
        ::_guard_xfg_dispatch_icall_nop(local_68,pvVar9,lVar6 * 2);
        local_70 = local_60;
      }
      pvVar9 = local_78;
      iVar2 = local_5c;
      if (iVar3 != 0) {
        local_60 = local_70 + (uint)(local_70 == 0) + iVar3;
        if (local_5c < local_60) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,local_70);
          pvVar7 = local_68;
        }
        iVar2 = local_5c;
        iVar10 = local_60;
        pvVar8 = (void *)((longlong)pvVar7 + ((longlong)local_70 - (ulonglong)(local_70 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar8,pvVar9,(longlong)iVar3 * 2);
        *(undefined2 *)((longlong)iVar3 * 2 + (longlong)pvVar8) = 0;
        local_70 = iVar10;
      }
    }
    bVar12 = local_78 != (void *)0x0;
    local_78 = pvVar7;
    local_6c = iVar2;
    if (bVar12) {
      FMemory::Free();
    }
  }
  cVar1 = FPackageName::IsShortPackageName(*param_2);
  if (cVar1 == '\0') {
    FName::ToString(param_2,local_48);
    plVar4 = (longlong *)FUN_1416f9840(local_58);
    lVar6 = plVar4[1];
    local_68 = (void *)*plVar4;
    *plVar4 = 0;
    local_60 = (int)plVar4[1];
    local_5c = *(int *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
    iVar3 = local_60;
    if (local_5c < (int)((2 - (uint)((int)lVar6 != 0)) + local_60)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
      iVar3 = local_60;
    }
    local_60 = (2 - (uint)(iVar3 != 0)) + iVar3;
    pvVar9 = local_68;
    if (local_5c < local_60) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar3);
      pvVar9 = local_68;
    }
    pvVar7 = local_78;
    lVar6 = ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2;
    *(undefined2 *)(lVar6 + (longlong)pvVar9) = 0x2f;
    *(undefined2 *)(lVar6 + 2 + (longlong)pvVar9) = 0;
    if (local_60 < 2) {
      lVar6 = (longlong)local_70;
      local_68 = (void *)0x0;
      local_60 = local_70;
      pvVar8 = pvVar11;
      iVar2 = local_70;
      iVar10 = iVar5;
      if (local_70 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_70,0);
        pvVar8 = local_68;
        ::_guard_xfg_dispatch_icall_nop(local_68,pvVar7,lVar6 * 2);
        iVar2 = local_60;
        iVar10 = local_5c;
      }
    }
    else {
      if (local_70 != 0) {
        iVar5 = local_70 + -1;
      }
      if ((local_60 != 0) || (iVar3 = 1, iVar5 == 0)) {
        iVar3 = 0;
      }
      local_68 = pvVar9;
      if (local_5c < iVar3 + local_60 + iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
      }
      iVar3 = local_60;
      pvVar7 = local_78;
      pvVar8 = local_68;
      pvVar9 = pvVar11;
      iVar2 = local_60;
      iVar10 = local_5c;
      if (iVar5 != 0) {
        lVar6 = (longlong)local_60;
        local_60 = local_60 + (uint)(local_60 == 0) + iVar5;
        if (local_5c < local_60) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar3);
        }
        iVar10 = local_5c;
        iVar2 = local_60;
        pvVar8 = local_68;
        pvVar11 = (void *)((longlong)local_68 + (lVar6 - (ulonglong)(iVar3 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar11,pvVar7,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar11) = 0;
      }
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free();
    }
    local_78 = pvVar8;
    local_70 = iVar2;
    local_6c = iVar10;
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  *param_1 = (longlong)local_78;
  *(int *)(param_1 + 1) = local_70;
  *(int *)((longlong)param_1 + 0xc) = local_6c;
  return param_1;
}



// FUNCTION 14254b910 FUN_14254b910 body=211 status=ok
// SIG undefined FUN_14254b910(void)

void FUN_14254b910(longlong param_1,longlong param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  bVar3 = *(byte *)(param_2 + 0xc9);
  FWeakObjectPtr::operator=(&local_res20);
  if ((bVar3 & 6) == 2) {
    if (param_3 == '\0') {
      return;
    }
    local_res10[0] = local_res20;
    TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x220,local_res10);
  }
  else if ((bVar3 & 6) != 0) {
    return;
  }
  if (param_3 == '\0') {
    cVar2 = FUN_141636a40();
    if ((cVar2 == '\0') || (bVar1 = false, DAT_14653335c == 0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_142400b00(param_1 + 0x220,local_res10,&local_res20,0);
      bVar3 = *(byte *)(param_2 + 0xc9) & 0xfb | 2;
      goto LAB_14254b9d0;
    }
  }
  FUN_142400b00(param_1 + 0x270,local_res10,&local_res20,0);
  bVar3 = *(byte *)(param_2 + 0xc9) & 0xfd | 4;
LAB_14254b9d0:
  *(byte *)(param_2 + 0xc9) = bVar3;
  return;
}



// FUNCTION 14254b9f0 FUN_14254b9f0 body=807 status=ok
// SIG undefined FUN_14254b9f0(void)

void FUN_14254b9f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined8 local_res18;
  longlong *local_res20;
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int iStack_a0;
  uint uStack_9c;
  longlong *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  longlong *local_60;
  undefined8 uStack_58;
  longlong *plStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  pcVar6 = (char *)FUN_1428761d0(DAT_146b17150,param_1);
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\x03')) {
    plVar18 = *(longlong **)(pcVar6 + 0x248);
    plVar13 = plVar18 + (longlong)*(int *)(pcVar6 + 0x250) * 2;
    local_res20 = plVar13;
    if (plVar18 != plVar13) {
      do {
        if ((*plVar18 != 0) && (plVar4 = *(longlong **)(*plVar18 + 0xe0), plVar4 != (longlong *)0x0)
           ) {
          uVar2 = *(uint *)(plVar4 + 5);
          plVar1 = plVar4 + 2;
          uStack_c4 = 1;
          local_c8 = 0;
          uStack_b4 = 0;
          iStack_b0 = 0;
          if (uVar2 != 0) {
            puVar16 = (uint *)((ulonglong)(plVar4[4] != 0) - 1 & (ulonglong)plVar1 | plVar4[4]);
            uVar3 = *puVar16;
            iStack_b0 = 0;
            local_c8 = 0;
            while (uVar3 == 0) {
              lVar10 = (longlong)local_c8;
              iStack_b0 = iStack_b0 + 0x20;
              iVar14 = local_c8 + 1;
              bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
              local_c8 = iVar14;
              if (bVar5) goto LAB_14254bb41;
              uVar3 = puVar16[lVar10 + 1];
            }
            uStack_c4 = -uVar3 & uVar3;
            iVar14 = 0x1f;
            if (uStack_c4 != 0) {
              for (; uStack_c4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
              }
            }
            if (uStack_c4 == 0) {
              iVar14 = 0x20;
            }
            else {
              iVar14 = 0x1f - iVar14;
            }
            uStack_b4 = (iStack_b0 - iVar14) + 0x1f;
            if ((int)uVar2 < (int)uStack_b4) {
LAB_14254bb41:
              uStack_b4 = uVar2;
            }
          }
          uVar3 = *(uint *)(plVar4 + 5);
          uStack_90 = 0xffffffff;
          uStack_8c = uStack_b4;
          local_88 = CONCAT44(uStack_ac,iStack_b0);
          uStack_58 = CONCAT44(uStack_c4,local_c8);
          uVar15 = uVar3 & 0xffffffe0;
          iStack_a0 = local_c8;
          uStack_9c = uStack_c4;
          local_98 = plVar1;
          local_60 = plVar4;
          plStack_50 = plVar1;
          uStack_40 = local_88;
          uStack_48 = uStack_90;
          uStack_44 = uStack_8c;
          uStack_b4 = uVar3;
          if (uVar3 != uVar2) {
            uVar17 = (ulonglong)(plVar4[4] != 0) - 1 & (ulonglong)plVar1 | plVar4[4];
            uVar11 = *(uint *)(uVar17 + (longlong)((int)uVar3 >> 5) * 4) &
                     -1 << ((byte)uVar3 & 0x1f);
            iVar14 = (int)uVar3 >> 5;
            while (uVar11 == 0) {
              uVar15 = uVar15 + 0x20;
              if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
              goto LAB_14254bc16;
              uVar11 = *(uint *)(uVar17 + 4 + (longlong)iVar14 * 4);
              iVar14 = iVar14 + 1;
            }
            uVar11 = -uVar11 & uVar11;
            iVar14 = 0x1f;
            if (uVar11 != 0) {
              for (; uVar11 >> iVar14 == 0; iVar14 = iVar14 + -1) {
              }
            }
            if (uVar11 == 0) {
              iVar14 = 0x20;
            }
            else {
              iVar14 = 0x1f - iVar14;
            }
            uStack_b4 = (uVar15 - iVar14) + 0x1f;
            if ((int)uVar2 < (int)uStack_b4) {
LAB_14254bc16:
              uStack_b4 = uVar2;
            }
          }
          while ((uStack_8c != uStack_b4 || (plVar13 = local_res20, local_98 != plVar1))) {
            pbVar7 = (byte *)((longlong)(int)uStack_8c * 0x40 + *plVar4);
            if (((*pbVar7 & 1) != 0) &&
               ((*(int *)(pbVar7 + 0x10) == 0 && (*(longlong *)(pbVar7 + 0x18) == param_2)))) {
              uVar8 = FName::ToString(pbVar7 + 0x18,local_70);
              puVar9 = (undefined8 *)
                       UWorld::ConvertToPIEPackageName(local_80,uVar8,*(undefined4 *)(pcVar6 + 600))
              ;
              if (*(int *)(puVar9 + 1) == 0) {
                puVar12 = &DAT_143f3eda8;
              }
              else {
                puVar12 = (undefined2 *)*puVar9;
              }
              FName::FName(&local_res18,puVar12);
              *(undefined8 *)(pbVar7 + 0x18) = local_res18;
              if (local_80[0] != 0) {
                FMemory::Free();
              }
              if (local_70[0] != 0) {
                FMemory::Free();
              }
            }
            uStack_90 = uStack_90 & ~uStack_9c;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
          }
        }
        plVar18 = plVar18 + 2;
      } while (plVar18 != plVar13);
    }
  }
  return;
}



// FUNCTION 14254bd30 OnClusterMarkedAsPendingKill body=127 status=ok
// SIG undefined OnClusterMarkedAsPendingKill(void)

void ULevelActorContainer::OnClusterMarkedAsPendingKill(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    iVar3 = *(int *)(lVar2 + 0xb8);
    if (*(int *)(lVar2 + 0xbc) < iVar3 + iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(lVar2 + 0xb0));
      iVar3 = *(int *)(lVar2 + 0xb8);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(lVar2 + 0xb0) + (longlong)iVar3 * 8),
               *(void **)(param_1 + 0x28),(longlong)iVar1 << 3);
    *(int *)(lVar2 + 0xb8) = *(int *)(lVar2 + 0xb8) + iVar1;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x34)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((undefined8 *)(param_1 + 0x28),0);
  }
  return;
}



// FUNCTION 14254bdb0 OnLevelAdded body=41 status=ok
// SIG undefined OnLevelAdded(void)

void ULevelStreaming::OnLevelAdded(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x120) != 0) {
    *(byte *)(param_1 + 0xb4) =
         (*(byte *)(*(longlong *)(param_1 + 0x120) + 0x204) & 0x10 | 0x20) >> 3;
    return;
  }
  *(undefined1 *)(param_1 + 0xb4) = 1;
  return;
}



// FUNCTION 14254bde0 OnLevelRemoved body=8 status=ok
// SIG undefined OnLevelRemoved(void)

void ULevelStreaming::OnLevelRemoved(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xb4) = 0;
  return;
}



// FUNCTION 14254bdf0 PlayerAdded body=12 status=ok
// SIG undefined PlayerAdded(void)

void ULocalPlayer::PlayerAdded(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined4 *)(param_1 + 0x108) = param_3;
  return;
}



// FUNCTION 14254be00 FUN_14254be00 body=275 status=ok
// SIG undefined FUN_14254be00(void)

void FUN_14254be00(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  FUN_1417931d0();
  cVar4 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if ((cVar4 == '\0') &&
     (FSceneViewStateReference::Allocate(param_1 + 0xa8), *(longlong *)(DAT_146b17150 + 0xab8) != 0)
     ) {
    FSceneViewStateReference::Allocate(param_1 + 0xe0);
    iVar5 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x18))
                      (*(longlong **)(DAT_146b17150 + 0xab8),1);
    plVar8 = (longlong *)(param_1 + 0xd0);
    iVar5 = iVar5 + -1;
    iVar3 = *(int *)(param_1 + 0xd8);
    if (iVar3 < iVar5) {
      *(int *)(param_1 + 0xd8) = iVar5;
      iVar6 = iVar5 - iVar3;
      if (*(int *)(param_1 + 0xdc) < iVar5) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar3);
      }
      puVar1 = (undefined8 *)(*plVar8 + (longlong)iVar3 * 0x28);
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar1 = &PTR__scalar_deleting_destructor__144a80b30;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = puVar1 + 5;
      }
    }
    else if (iVar5 < iVar3) {
      TArray<FSceneViewStateReference,FDefaultAllocator>::RemoveAtImpl(plVar8,iVar5,iVar3 - iVar5,1)
      ;
    }
    lVar7 = *plVar8;
    lVar2 = lVar7 + (longlong)*(int *)(param_1 + 0xd8) * 0x28;
    for (; lVar7 != lVar2; lVar7 = lVar7 + 0x28) {
      FSceneViewStateReference::Allocate(lVar7);
    }
  }
  return;
}



// FUNCTION 14254bf20 FUN_14254bf20 body=47 status=ok
// SIG undefined FUN_14254bf20(void)

void FUN_14254bf20(longlong param_1)

{
  FUN_1422384a0();
  if (*(char *)(*(longlong *)(param_1 + 0x458) + 0x24e) == '\0') {
    *(undefined8 *)(*(longlong *)(param_1 + 0x458) + 0x358) = 0;
  }
  return;
}



// FUNCTION 14254bf50 PostLoad body=70 status=ok
// SIG undefined PostLoad(void)

void ALevelBounds::PostLoad(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_1422384a0();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    lVar2 = AActor::GetLevel(param_1);
    if (lVar2 != 0) {
      FWeakObjectPtr::operator=(lVar2 + 0x228,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14254bfa0 FUN_14254bfa0 body=139 status=ok
// SIG undefined FUN_14254bfa0(void)

void FUN_14254bfa0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong local_18 [2];
  
  UObject::PostLoad();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar2 = 0;
  }
  if (*(int *)(lVar2 + 0x708) != 3) {
    lVar2 = UObjectBaseUtility::GetOutermost(param_1);
    if (((*(uint *)(lVar2 + 0x50) >> 0x14 & 1) == 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      ULevelStreaming::GetWorldAssetPackageName(param_1,local_18);
      FUN_1416f0740(local_18,0,0,1);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14254c030 FUN_14254c030 body=284 status=ok
// SIG undefined FUN_14254c030(void)

void FUN_14254c030(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  longlong local_18 [2];
  
  UObject::PostLoad();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  lVar4 = 0;
  lVar2 = lVar4;
  if (cVar1 == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  if (*(int *)(lVar2 + 0x708) != 3) {
    lVar2 = UObjectBaseUtility::GetOutermost(param_1);
    if (((*(uint *)(lVar2 + 0x50) >> 0x14 & 1) == 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      ULevelStreaming::GetWorldAssetPackageName(param_1,local_18);
      FUN_1416f0740(local_18,0,0,1);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x20);
  }
  cVar1 = UWorld::IsGameWorld(lVar4);
  if (cVar1 != '\0') {
    bVar3 = (*(char *)(param_1 + 0x140) << 3 ^ *(byte *)(param_1 + 0xb6)) & 8 ^
            *(byte *)(param_1 + 0xb6);
    bVar5 = (byte)(*(uint *)(param_1 + 0x140) >> 1) & 1;
    *(byte *)(param_1 + 0xb6) = bVar3;
    if (bVar5 != (bVar3 >> 2 & 1)) {
      *(byte *)(param_1 + 0xb6) = bVar5 << 2 | bVar3 & 0xfb;
      cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
      if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
        UWorld::UpdateStreamingLevelShouldBeConsidered(*(longlong *)(param_1 + 0x20),param_1);
      }
    }
  }
  return;
}



// FUNCTION 14254c150 FUN_14254c150 body=144 status=ok
// SIG undefined FUN_14254c150(void)

void FUN_14254c150(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = UInputDelegateBinding::SupportsInputDelegate(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar2 = FUN_142956f50();
    uVar2 = FUN_1417985e0(uVar2,param_1,0,0,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x130) = uVar2;
    FUN_14234b150(uVar2);
    FUN_1424e5130(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x130));
  }
  FUN_142239650(param_1);
  return;
}



// FUNCTION 14254c1e0 FUN_14254c1e0 body=2397 status=ok
// SIG undefined FUN_14254c1e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14254c1e0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte *pbVar10;
  longlong *plVar11;
  char *pcVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulonglong uVar18;
  char *pcVar19;
  char *pcVar20;
  uint uVar21;
  ulonglong uVar22;
  byte bVar23;
  ulonglong *puVar24;
  byte bVar25;
  ulonglong uVar26;
  float fVar27;
  undefined1 auStack_238 [32];
  uint local_218;
  undefined4 local_210;
  byte local_208 [4];
  undefined2 local_204;
  byte local_202;
  uint local_200;
  int local_1fc;
  int local_1f8 [2];
  longlong *local_1f0;
  uint local_1e8;
  uint local_1e4;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  int local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_188 [4];
  undefined1 local_184 [4];
  longlong local_180;
  undefined8 local_178;
  undefined4 local_170;
  longlong *local_168;
  undefined2 *local_160;
  longlong *local_158;
  byte *local_150;
  longlong local_148 [4];
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8 [4];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8 [4];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_1e0 = param_2;
  local_1a8 = param_1;
  iVar6 = FUN_1428cf800();
  lVar7 = UWorld::GetWorldSettings(param_1,0,1);
  uVar18 = 0;
  if ((*(uint *)(lVar7 + 0x460) >> 4 & 1) == (uint)(iVar6 == 3)) {
    iVar6 = *(int *)(param_1 + 0x6fc);
    if (iVar6 < 1) {
      if (iVar6 != -1) {
        UWorld::GetPlayerControllerIterator(param_1,&local_1f0);
        for (; (-1 < (int)local_1e8 && ((int)local_1e8 < (int)local_1f0[1]));
            local_1e8 = local_1e8 + 1) {
          lVar7 = FWeakObjectPtr::Get(*local_1f0 + (longlong)(int)local_1e8 * 8);
          if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x640) & 8) != 0)) {
            puVar24 = *(ulonglong **)(param_1 + 0x88);
            local_1f0 = (longlong *)0x0;
            local_200 = 0;
            local_1e4 = 0;
            local_a8[0] = 0;
            local_a8[1] = 0;
            local_88 = 0;
            uVar14 = (longlong)*(int *)(param_1 + 0x90) & 0x1fffffffffffffff;
            if (puVar24 + *(int *)(param_1 + 0x90) < puVar24) {
              uVar14 = uVar18;
            }
            local_80 = 0;
            local_78 = 0xffffffff;
            local_74 = 0;
            local_68 = 0;
            local_60 = 0;
            uVar22 = uVar18;
            uVar26 = uVar18;
            if (uVar14 != 0) {
              do {
                uVar1 = *puVar24;
                local_1c0 = uVar1;
                if (uVar1 != 0) {
                  plVar8 = *(longlong **)(uVar1 + 200);
                  plVar9 = plVar8 + *(int *)(uVar1 + 0xd0);
                  for (; plVar8 != plVar9; plVar8 = plVar8 + 1) {
                    lVar7 = *plVar8;
                    if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x4a0) & 3) == 0)) {
                      iVar6 = (int)uVar18;
                      local_200 = iVar6 + 1;
                      local_1e8 = local_200;
                      if ((int)uVar22 < (int)local_200) {
                        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                  (&local_1f0,uVar18);
                        uVar22 = (ulonglong)local_1e4;
                      }
                      uVar18 = (ulonglong)local_1e8;
                      local_1f0[iVar6] = uVar1;
                      local_200 = local_1e8;
                      if (*(char *)(lVar7 + 0x4a4) != '\x03') {
                        FUN_14058c900(local_a8,&local_1fc,&local_1c0,0);
                        uVar18 = (ulonglong)local_200;
                      }
                      break;
                    }
                  }
                }
                puVar24 = puVar24 + 1;
                uVar26 = uVar26 + 1;
                param_1 = local_1a8;
                param_2 = local_1e0;
              } while (uVar26 != uVar14);
            }
            plVar9 = local_1f0;
            local_118 = 0xffffffff;
            local_148[0] = 0;
            local_148[1] = 0;
            local_128 = 0;
            local_120 = 0;
            local_114 = 0;
            local_108 = 0;
            local_100 = 0;
            UWorld::GetPlayerControllerIterator(param_1,&local_1b8);
            bVar15 = local_208[0];
            bVar23 = local_208[0];
            bVar25 = local_208[0];
            for (; (-1 < local_1b0 && (local_1b0 < (int)local_1b8[1])); local_1b0 = local_1b0 + 1) {
              plVar8 = (longlong *)FWeakObjectPtr::Get(*local_1b8 + (longlong)local_1b0 * 8);
              if ((plVar8 != (longlong *)0x0) && ((*(byte *)(plVar8 + 200) & 8) != 0)) {
                local_1d8 = 0;
                local_1d0 = 0;
                if (param_2 == (undefined8 *)0x0) {
                  local_198 = 0;
                  local_190 = 0;
                  (**(code **)(*plVar8 + 0x7a8))(plVar8,&local_1d8,&local_198);
                }
                else {
                  local_1d8 = *param_2;
                  local_1d0 = *(undefined4 *)(param_2 + 1);
                }
                local_f8[0] = 0;
                local_f8[1] = 0;
                local_d8 = 0;
                local_d0 = 0;
                local_c8 = 0xffffffff;
                local_c4 = 0;
                local_b8 = 0;
                local_b0 = 0;
                uVar18 = (ulonglong)local_200;
                if (0 < (int)local_200) {
                  do {
                    local_1c0 = uVar18;
                    uVar14 = local_1c0;
                    pcVar20 = (char *)0x0;
                    lVar7 = *plVar9;
                    local_204 = 0;
                    local_202 = 0;
                    local_1c8 = lVar7;
                    local_1a0 = plVar9;
                    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                    ::FindId(local_148,local_1f8,lVar7);
                    pcVar19 = pcVar20;
                    if (local_1f8[0] != -1) {
                      pcVar19 = (char *)(local_148[0] + (longlong)local_1f8[0] * 0x18);
                    }
                    pcVar12 = pcVar19 + 8;
                    if (pcVar19 == (char *)0x0) {
                      pcVar12 = pcVar20;
                    }
                    if (pcVar12 == (char *)0x0) {
LAB_14254c5bf:
                      pcVar19 = pcVar20;
                      if (0 < *(int *)(lVar7 + 0xd0)) {
                        do {
                          lVar2 = *(longlong *)(pcVar20 + *(longlong *)(lVar7 + 200));
                          if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x4a0) & 3) == 0)) {
                            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                            ::FindId(local_f8,&local_1fc,lVar2);
                            if (local_1fc == -1) {
                              lVar13 = 0;
                            }
                            else {
                              lVar13 = local_f8[0] + (longlong)local_1fc * 0x18;
                            }
                            pbVar10 = (byte *)(lVar13 + 8);
                            if (lVar13 == 0) {
                              pbVar10 = (byte *)0x0;
                            }
                            if (pbVar10 == (byte *)0x0) {
                              local_178 = local_1d8;
                              local_170 = local_1d0;
                              local_208[0] = FUN_1428ca150(lVar2,&local_178,0,0);
                              local_158 = &local_180;
                              local_150 = local_208;
                              local_180 = lVar2;
                              FUN_140b48570(local_f8,local_188,&local_158);
                              lVar7 = local_1c8;
                            }
                            else {
                              local_208[0] = *pbVar10;
                            }
                            if (local_208[0] != 0) {
                              bVar5 = *(byte *)(lVar2 + 0x4a4);
                              if (bVar5 == 0) {
                                bVar23 = 0;
LAB_14254c72d:
                                bVar25 = 0;
                                bVar15 = 0;
                              }
                              else if (bVar5 == 1) {
                                bVar25 = 1;
                                bVar23 = 0;
                                bVar15 = 1;
                              }
                              else if (bVar5 == 2) {
                                bVar25 = 1;
                                bVar23 = 1;
                                bVar15 = 1;
                              }
                              else {
                                if (bVar5 == 3) {
                                  bVar23 = 1;
                                  goto LAB_14254c72d;
                                }
                                if (bVar5 == 4) {
                                  bVar25 = 0;
                                  bVar15 = 1;
                                  bVar23 = 0;
                                }
                                else {
                                  LowLevelFatalErrorHandler
                                            ("Unknown",0x210,L"Unsupported usage %i",(uint)bVar5);
                                  local_218 = (uint)bVar5;
                                  FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x210);
                                }
                              }
                              local_168 = &local_1c8;
                              local_204 = CONCAT11(local_204._1_1_ | bVar23,(byte)local_204 | bVar25
                                                  );
                              local_202 = local_202 | bVar15;
                              local_160 = &local_204;
                              FUN_14253d140(local_148,local_184,&local_168);
                              lVar7 = local_1c8;
                              if (((byte)local_204 != '\0') &&
                                 (uVar14 = local_1c0, local_204._1_1_ != '\0')) break;
                            }
                          }
                          uVar21 = (int)pcVar19 + 1;
                          pcVar19 = (char *)(ulonglong)uVar21;
                          pcVar20 = pcVar20 + 8;
                          uVar14 = local_1c0;
                        } while ((int)uVar21 < *(int *)(lVar7 + 0xd0));
                      }
                    }
                    else if ((*pcVar12 == '\0') || (pcVar12[1] == '\0')) {
                      local_204 = *(undefined2 *)pcVar12;
                      local_202 = pcVar12[2];
                      goto LAB_14254c5bf;
                    }
                    plVar9 = local_1a0 + 1;
                    uVar18 = uVar14 - 1;
                  } while (uVar14 - 1 != 0);
                  local_1c0 = 0;
                  param_2 = local_1e0;
                  local_1a0 = plVar9;
                }
                local_b0 = 0;
                if (local_b8 != 0) {
                  FMemory::Free();
                }
                TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                          (local_f8);
              }
              plVar9 = local_1f0;
            }
            puVar3 = (undefined8 *)(ulonglong)local_200;
            if ((int)local_200 < 1) goto LAB_14254cab7;
            do {
              local_1e0 = puVar3;
              pbVar17 = (byte *)0x0;
              plVar8 = (longlong *)*plVar9;
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::FindId(local_148,&local_1fc,plVar8);
              pbVar10 = pbVar17;
              if (local_1fc != -1) {
                pbVar10 = (byte *)(local_148[0] + (longlong)local_1fc * 0x18);
              }
              pbVar16 = pbVar10 + 8;
              if (pbVar10 == (byte *)0x0) {
                pbVar16 = pbVar17;
              }
              TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                        (local_a8,local_1f8,plVar8);
              if (local_1f8[0] != -1) {
                pbVar17 = (byte *)((longlong)local_1f8[0] * 0x10 + local_a8[0]);
              }
              local_208[0] = (**(code **)(*plVar8 + 0x280))(plVar8);
              bVar23 = (**(code **)(*plVar8 + 0x288))(plVar8);
              lVar2 = local_1a8;
              bVar15 = *(byte *)((longlong)plVar8 + 0xb6);
              lVar7 = plVar8[0x16];
              if (pbVar16 == (byte *)0x0) {
                if (pbVar17 != (byte *)0x0) {
                  fVar27 = *(float *)(local_1a8 + 0x790) - *(float *)((longlong)plVar8 + 0xdc);
                  if ((*(float *)(plVar8 + 0x1b) <= fVar27 && fVar27 != *(float *)(plVar8 + 0x1b))
                     || (*(float *)((longlong)plVar8 + 0xdc) < 0.1)) {
                    plVar11 = (longlong *)UWorld::GetPlayerControllerIterator(local_1a8,&local_168);
                    if ((-1 < (int)plVar11[1]) && ((int)plVar11[1] < *(int *)(*plVar11 + 8))) {
                      *(undefined4 *)((longlong)plVar8 + 0xdc) = *(undefined4 *)(lVar2 + 0x790);
                      (**(code **)(*plVar8 + 0x278))(plVar8,0);
                      if ((*(byte *)((longlong)plVar8 + 0xb6) & 4) != 0) {
                        *(byte *)((longlong)plVar8 + 0xb6) =
                             *(byte *)((longlong)plVar8 + 0xb6) & 0xfb;
                        cVar4 = UObjectBaseUtility::IsTemplate(plVar8,0x30);
                        if ((cVar4 == '\0') && (plVar8[4] != 0)) {
                          UWorld::UpdateStreamingLevelShouldBeConsidered(plVar8[4],plVar8);
                        }
                      }
                    }
                  }
                  goto LAB_14254c9e6;
                }
              }
              else {
                (**(code **)(*plVar8 + 0x278))(plVar8,1);
                bVar25 = bVar23;
                if (pbVar16[2] != 0) {
                  bVar25 = *pbVar16;
                }
                bVar5 = *(byte *)((longlong)plVar8 + 0xb6);
                if (bVar25 != (bVar5 >> 2 & 1)) {
                  *(byte *)((longlong)plVar8 + 0xb6) = (bVar25 << 2 ^ bVar5) & 4 ^ bVar5;
                  cVar4 = UObjectBaseUtility::IsTemplate(plVar8,0x30);
                  if ((cVar4 == '\0') && (plVar8[4] != 0)) {
                    UWorld::UpdateStreamingLevelShouldBeConsidered(plVar8[4],plVar8);
                  }
                }
                *(byte *)((longlong)plVar8 + 0xb6) =
                     *(byte *)((longlong)plVar8 + 0xb6) ^
                     (pbVar16[1] << 6 ^ *(byte *)((longlong)plVar8 + 0xb6)) & 0x40;
LAB_14254c9e6:
                bVar25 = (**(code **)(*plVar8 + 0x280))(plVar8);
                bVar5 = (**(code **)(*plVar8 + 0x288))(plVar8);
                if ((((local_208[0] != bVar25) || (bVar23 != bVar5)) ||
                    ((bVar15 >> 6 & 1) != (*(byte *)((longlong)plVar8 + 0xb6) >> 6 & 1))) ||
                   ((int)lVar7 != (int)plVar8[0x16])) {
                  UWorld::GetPlayerControllerIterator(local_1a8,&local_1b8);
                  for (; (-1 < local_1b0 && (local_1b0 < (int)local_1b8[1]));
                      local_1b0 = local_1b0 + 1) {
                    lVar7 = FWeakObjectPtr::Get(*local_1b8 + (longlong)local_1b0 * 8);
                    if (lVar7 != 0) {
                      local_210 = (undefined4)plVar8[0x16];
                      local_218 = CONCAT31(local_218._1_3_,*(byte *)((longlong)plVar8 + 0xb6) >> 6)
                                  & 0xffffff01;
                      APlayerController::LevelStreamingStatusChanged(lVar7,plVar8,bVar25,bVar5);
                    }
                  }
                }
              }
              plVar9 = plVar9 + 1;
              puVar3 = (undefined8 *)((longlong)local_1e0 - 1U);
              if ((longlong)local_1e0 - 1U == 0) {
                local_1e0 = (undefined8 *)0x0;
LAB_14254cab7:
                local_100 = 0;
                if (local_108 != 0) {
                  FMemory::Free();
                }
                TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                          (local_148);
                local_60 = 0;
                if (local_68 != 0) {
                  FMemory::Free();
                }
                TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                          (local_a8);
                if (local_1f0 == (longlong *)0x0) {
                  return;
                }
                FMemory::Free(local_1f0);
                return;
              }
            } while( true );
          }
        }
      }
    }
    else {
      *(int *)(param_1 + 0x6fc) = iVar6 + -1;
    }
  }
  return;
}



// FUNCTION 14254cb40 FUN_14254cb40 body=4700 status=ok
// SIG undefined FUN_14254cb40(void)

void FUN_14254cb40(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  byte bVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint *puVar29;
  longlong *in_stack_fffffffffffffe98;
  undefined4 uVar31;
  undefined8 uVar30;
  undefined4 uVar32;
  uint local_148;
  longlong *local_130;
  longlong local_128;
  longlong local_110;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  int local_e8;
  ulonglong local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined **local_b0;
  longlong local_a8;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  
  iVar25 = 0;
  local_e8 = 0;
  local_68 = param_2;
  local_100 = (longlong *)TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop(param_1[1]);
  if (local_100 == (longlong *)0x0) {
    local_100 = (longlong *)operator_new(0x20);
    if (local_100 == (longlong *)0x0) {
      local_100 = (longlong *)0x0;
    }
    else {
      *local_100 = 0;
      local_100[1] = 0;
      local_100[2] = 0;
      local_100[3] = 0;
    }
  }
  local_f8 = (longlong *)0x0;
  local_f0 = 0x80;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
            (&local_f8,0);
  if (*(int *)((longlong)param_2 + 0xc) < (int)param_2[1] + 1) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  local_b8 = local_f8;
  local_c8 = 0;
  local_130 = local_f8;
  while( true ) {
    uVar30 = *param_1;
    FReferenceCollector::FReferenceCollector(&local_b0);
    local_b0 = &PTR_FUN_1450f21b0;
    local_98 = uVar30;
    local_90 = local_100;
    if (iVar25 < (int)param_2[1]) break;
LAB_14254dd1d:
    if ((int)local_100[1] != 0) {
      if (param_2 != local_100) {
        uVar31 = *(undefined4 *)((longlong)local_100 + 4);
        lVar24 = local_100[1];
        uVar32 = *(undefined4 *)((longlong)local_100 + 0xc);
        lVar1 = *param_2;
        lVar23 = param_2[1];
        *(int *)param_2 = (int)*local_100;
        *(undefined4 *)((longlong)param_2 + 4) = uVar31;
        *(int *)(param_2 + 1) = (int)lVar24;
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar32;
        *local_100 = lVar1;
        local_100[1] = lVar23;
      }
      *(undefined4 *)(local_100 + 1) = 0;
      iVar25 = 0;
      local_c8 = 0;
    }
    FReferenceCollector::~FReferenceCollector();
    if ((int)param_2[1] <= iVar25) {
      uVar30 = param_1[1];
      *(undefined4 *)(local_100 + 1) = 0;
      if (0x7fffffff < *(uint *)((longlong)local_100 + 0xc)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(local_100,0);
      }
      FUN_1415b1b00(uVar30,local_100);
      if (local_130 != (longlong *)0x0) {
        FMemory::Free(local_130);
      }
      return;
    }
  }
LAB_14254cc20:
  local_e8 = iVar25 + 1;
  lVar1 = *(longlong *)(*param_2 + local_c8 * 8);
  local_c8 = local_c8 + 1;
  iVar25 = *(int *)(*(longlong *)(lVar1 + 0x10) + 0x40);
  iVar3 = FUN_14169da80();
  uVar28 = (longlong)(iVar3 + -1 + iVar25) / (longlong)iVar3;
  uVar22 = uVar28 & 0xffffffff;
  uVar4 = (uint)uVar28;
  while (uVar4 != 0) {
    uVar4 = (int)uVar22 - 1;
    uVar22 = (ulonglong)uVar4;
  }
  lVar23 = *(longlong *)(lVar1 + 0x10);
  if ((*(uint *)(lVar23 + 0xb4) >> 0x16 & 1) == 0) {
    FUN_14172cc50(lVar23);
    lVar23 = *(longlong *)(lVar1 + 0x10);
  }
  uVar22 = 0;
  *(undefined4 *)(local_130 + 1) = 0;
  local_148 = 0;
  *local_130 = lVar1;
  *(undefined8 *)((longlong)local_130 + 0xc) = 0xffffffffffffffff;
  plVar16 = local_130;
  lVar24 = lVar1;
  uVar28 = uVar22;
  local_128 = lVar1;
LAB_14254cd46:
  uVar31 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  iVar3 = 0;
  iVar25 = (int)uVar28;
  if (0 < (int)uVar22) {
    do {
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + -1;
      if (0 < *(int *)((longlong)plVar16 + 0xc)) {
        lVar24 = (longlong)(int)plVar16[1] + *plVar16;
        iVar25 = (int)plVar16[2];
        *plVar16 = lVar24;
        local_128 = lVar24;
        break;
      }
      lVar24 = plVar16[-3];
      plVar16 = plVar16 + -3;
      iVar3 = iVar3 + 1;
      local_130 = plVar16;
      local_128 = lVar24;
    } while (iVar3 < (int)uVar22);
  }
  lVar27 = *(longlong *)(lVar23 + 0x1b0);
  uVar26 = iVar25 + 1;
  uVar28 = (ulonglong)uVar26;
  uVar4 = *(uint *)(lVar27 + (longlong)iVar25 * 4);
  uVar21 = uVar4 >> 8 & 0xf;
  local_e0 = uVar28;
  switch(uVar21) {
  case 1:
    puVar29 = (uint *)*param_1;
    plVar16 = (longlong *)((ulonglong)(uVar4 >> 0xc) + lVar24);
    local_148 = uVar4 & 0xff;
    uVar22 = (ulonglong)local_148;
    lVar27 = *plVar16;
    if (lVar27 == 0) goto LAB_14254cce0;
    uVar21 = *(uint *)(lVar27 + 0xc);
    if ((int)uVar21 < (int)DAT_1469e91c4) {
      uVar13 = uVar21 & 0xffff;
      uVar26 = uVar21;
      if ((int)uVar21 < 0) {
        uVar26 = uVar21 + 0xffff;
        uVar13 = uVar13 - 0x10000;
      }
      lVar19 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
               (longlong)(int)uVar13 * 0x18;
    }
    else {
      lVar19 = 0;
    }
    lVar5 = 0;
    uVar26 = *(uint *)(lVar19 + 0xc);
    if (uVar26 != *puVar29) {
      bVar8 = *(byte *)(lVar19 + 0xb) & 1;
      if ((bVar8 != 0) || (uVar26 != 0)) {
        if (bVar8 == 0) {
          uVar21 = uVar26;
        }
        if ((int)uVar21 < (int)DAT_1469e91c4) {
          uVar13 = uVar21 & 0xffff;
          uVar26 = uVar21;
          if ((int)uVar21 < 0) {
            uVar26 = uVar21 + 0xffff;
            uVar13 = uVar13 - 0x10000;
          }
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
                  (longlong)(int)uVar13 * 0x18;
        }
        lVar24 = *(longlong *)(puVar29 + 2);
        puVar18 = *(uint **)(lVar24 + 0x18);
        iVar25 = *(int *)(lVar24 + 0x20);
        lVar27 = (longlong)(int)~*(uint *)(lVar5 + 0xc) * 0x50 + DAT_1469e8f10;
        for (puVar10 = puVar18; puVar10 != puVar18 + iVar25; puVar10 = puVar10 + 1) {
          if (*puVar10 == uVar21) {
            if ((int)((longlong)puVar10 - (longlong)puVar18 >> 2) != -1) goto LAB_14254d03a;
            break;
          }
        }
        *(int *)(lVar24 + 0x20) = iVar25 + 1;
        if (*(int *)(lVar24 + 0x24) < iVar25 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar24 + 0x18,iVar25);
        }
        *(uint *)((longlong)iVar25 * 4 + *(longlong *)(lVar24 + 0x18)) = uVar21;
LAB_14254d03a:
        TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>(lVar27 + 0x38);
        uVar22 = 0;
        puVar18 = *(uint **)(lVar27 + 0x18);
        uVar28 = (longlong)*(int *)(lVar27 + 0x20) & 0x3fffffffffffffff;
        if (puVar18 + *(int *)(lVar27 + 0x20) < puVar18) {
          uVar28 = uVar22;
        }
        if (uVar28 != 0) {
          do {
            uVar21 = *puVar18;
            if (uVar21 != *puVar29) {
              lVar24 = *(longlong *)(puVar29 + 2);
              puVar10 = *(uint **)(lVar24 + 0x18);
              iVar25 = *(int *)(lVar24 + 0x20);
              for (puVar11 = puVar10; puVar11 != puVar10 + iVar25; puVar11 = puVar11 + 1) {
                if (*puVar11 == uVar21) {
                  if ((int)((longlong)puVar11 - (longlong)puVar10 >> 2) != -1) goto LAB_14254d0db;
                  break;
                }
              }
              *(int *)(lVar24 + 0x20) = iVar25 + 1;
              if (*(int *)(lVar24 + 0x24) < iVar25 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar24 + 0x18);
              }
              *(uint *)((longlong)iVar25 * 4 + *(longlong *)(lVar24 + 0x18)) = uVar21;
            }
LAB_14254d0db:
            puVar18 = puVar18 + 1;
            uVar22 = uVar22 + 1;
          } while (uVar22 != uVar28);
        }
        uVar17 = 0;
        piVar14 = *(int **)(lVar27 + 0x28);
        uVar22 = (longlong)*(int *)(lVar27 + 0x30) & 0x3fffffffffffffff;
        if (piVar14 + *(int *)(lVar27 + 0x30) < piVar14) {
          uVar22 = uVar17;
        }
        uVar28 = local_e0;
        if (uVar22 == 0) goto LAB_14254dcb9;
        do {
          lVar24 = *(longlong *)(puVar29 + 2);
          iVar25 = *piVar14;
          piVar9 = *(int **)(lVar24 + 0x28);
          iVar3 = *(int *)(lVar24 + 0x30);
          for (piVar12 = piVar9; piVar12 != piVar9 + iVar3; piVar12 = piVar12 + 1) {
            if (*piVar12 == iVar25) {
              if ((int)((longlong)piVar12 - (longlong)piVar9 >> 2) != -1) goto LAB_14254d17e;
              break;
            }
          }
          *(int *)(lVar24 + 0x30) = iVar3 + 1;
          if (*(int *)(lVar24 + 0x34) < iVar3 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar24 + 0x28);
          }
          *(int *)((longlong)iVar3 * 4 + *(longlong *)(lVar24 + 0x28)) = iVar25;
LAB_14254d17e:
          piVar14 = piVar14 + 1;
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar22);
        goto LAB_14254cd2b;
      }
      if ((int)uVar21 <= DAT_1469e91a4) goto LAB_14254cce0;
      cVar2 = FActorClusterReferenceProcessor::CanAddToCluster(puVar29,lVar27);
      if ((cVar2 != '\0') && (lVar24 = *plVar16, (*(uint *)(lVar24 + 8) & 0x1400) == 0)) {
        uVar21 = *(uint *)(lVar24 + 0xc);
        if ((int)uVar21 < (int)DAT_1469e91c4) {
          uVar13 = uVar21 & 0xffff;
          uVar26 = uVar21;
          if ((int)uVar21 < 0) {
            uVar26 = uVar21 + 0xffff;
            uVar13 = uVar13 - 0x10000;
          }
          lVar27 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
                   (longlong)(int)uVar13 * 0x18;
        }
        else {
          lVar27 = 0;
        }
        if ((*(uint *)(lVar27 + 8) >> 0x1e & 1) == 0) {
LAB_14254cede:
          in_stack_fffffffffffffe98 = local_100;
          FActorClusterReferenceProcessor::AddObjectToCluster
                    (puVar29,uVar21,lVar19,lVar24,local_100,1);
          local_e0 = uVar28;
          goto LAB_14254cd2b;
        }
      }
      lVar19 = *(longlong *)(puVar29 + 2);
      iVar25 = *(int *)(*plVar16 + 0xc);
      piVar14 = *(int **)(lVar19 + 0x28);
      iVar3 = *(int *)(lVar19 + 0x30);
      lVar27 = (longlong)iVar3 * 4;
      for (piVar9 = piVar14; piVar9 != piVar14 + iVar3; piVar9 = piVar9 + 1) {
        if (*piVar9 == iVar25) goto LAB_14254cf30;
      }
      goto LAB_14254cf59;
    }
LAB_14254ccec:
    local_148 = uVar4 & 0xff;
    plVar16 = local_130;
    goto LAB_14254cd46;
  case 2:
    puVar29 = (uint *)*param_1;
    plVar16 = (longlong *)((ulonglong)(uVar4 >> 0xc) + lVar24);
    local_148 = uVar4 & 0xff;
    uVar22 = (ulonglong)local_148;
    lVar27 = *plVar16;
    if (lVar27 != 0) {
      uVar21 = *(uint *)(lVar27 + 0xc);
      if ((int)uVar21 < (int)DAT_1469e91c4) {
        uVar13 = uVar21 & 0xffff;
        uVar26 = uVar21;
        if ((int)uVar21 < 0) {
          uVar26 = uVar21 + 0xffff;
          uVar13 = uVar13 - 0x10000;
        }
        lVar19 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
                 (longlong)(int)uVar13 * 0x18;
      }
      else {
        lVar19 = 0;
      }
      lVar5 = 0;
      uVar26 = *(uint *)(lVar19 + 0xc);
      if (uVar26 == *puVar29) goto LAB_14254ccec;
      bVar8 = *(byte *)(lVar19 + 0xb) & 1;
      if ((bVar8 != 0) || (uVar26 != 0)) {
        if (bVar8 == 0) {
          uVar21 = uVar26;
        }
        if ((int)uVar21 < (int)DAT_1469e91c4) {
          uVar13 = uVar21 & 0xffff;
          uVar26 = uVar21;
          if ((int)uVar21 < 0) {
            uVar26 = uVar21 + 0xffff;
            uVar13 = uVar13 - 0x10000;
          }
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
                  (longlong)(int)uVar13 * 0x18;
        }
        lVar24 = *(longlong *)(puVar29 + 2);
        puVar18 = *(uint **)(lVar24 + 0x18);
        iVar25 = *(int *)(lVar24 + 0x20);
        plVar16 = (longlong *)((longlong)(int)~*(uint *)(lVar5 + 0xc) * 0x50 + DAT_1469e8f10);
        for (puVar10 = puVar18; local_c0 = plVar16, puVar10 != puVar18 + iVar25;
            puVar10 = puVar10 + 1) {
          if (*puVar10 == uVar21) {
            if ((int)((longlong)puVar10 - (longlong)puVar18 >> 2) != -1) goto LAB_14254d81d;
            break;
          }
        }
        *(int *)(lVar24 + 0x20) = iVar25 + 1;
        if (*(int *)(lVar24 + 0x24) < iVar25 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar24 + 0x18,iVar25);
        }
        *(uint *)((longlong)iVar25 * 4 + *(longlong *)(lVar24 + 0x18)) = uVar21;
LAB_14254d81d:
        TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>(plVar16 + 7);
        uVar22 = 0;
        puVar18 = (uint *)plVar16[3];
        uVar28 = (longlong)(int)plVar16[4] & 0x3fffffffffffffff;
        if (puVar18 + (int)plVar16[4] < puVar18) {
          uVar28 = uVar22;
        }
        if (uVar28 != 0) {
          do {
            uVar21 = *puVar18;
            if (uVar21 != *puVar29) {
              lVar24 = *(longlong *)(puVar29 + 2);
              puVar10 = *(uint **)(lVar24 + 0x18);
              iVar25 = *(int *)(lVar24 + 0x20);
              for (puVar11 = puVar10; puVar11 != puVar10 + iVar25; puVar11 = puVar11 + 1) {
                if (*puVar11 == uVar21) {
                  if ((int)((longlong)puVar11 - (longlong)puVar10 >> 2) != -1) goto LAB_14254d8c3;
                  break;
                }
              }
              *(int *)(lVar24 + 0x20) = iVar25 + 1;
              if (*(int *)(lVar24 + 0x24) < iVar25 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar24 + 0x18);
              }
              *(uint *)((longlong)iVar25 * 4 + *(longlong *)(lVar24 + 0x18)) = uVar21;
            }
LAB_14254d8c3:
            puVar18 = puVar18 + 1;
            uVar22 = uVar22 + 1;
            plVar16 = local_c0;
          } while (uVar22 != uVar28);
        }
        uVar20 = 0;
        piVar14 = (int *)plVar16[5];
        uVar22 = (ulonglong)local_148;
        uVar17 = (longlong)(int)plVar16[6] & 0x3fffffffffffffff;
        if (piVar14 + (int)plVar16[6] < piVar14) {
          uVar17 = uVar20;
        }
        plVar16 = local_130;
        lVar24 = local_128;
        uVar28 = local_e0;
        if (uVar17 != 0) {
          do {
            lVar24 = *(longlong *)(puVar29 + 2);
            iVar25 = *piVar14;
            piVar9 = *(int **)(lVar24 + 0x28);
            iVar3 = *(int *)(lVar24 + 0x30);
            for (piVar12 = piVar9; piVar12 != piVar9 + iVar3; piVar12 = piVar12 + 1) {
              if (*piVar12 == iVar25) {
                if ((int)((longlong)piVar12 - (longlong)piVar9 >> 2) != -1) goto LAB_14254d97f;
                break;
              }
            }
            *(int *)(lVar24 + 0x30) = iVar3 + 1;
            if (*(int *)(lVar24 + 0x34) < iVar3 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar24 + 0x28);
            }
            *(int *)((longlong)iVar3 * 4 + *(longlong *)(lVar24 + 0x28)) = iVar25;
LAB_14254d97f:
            piVar14 = piVar14 + 1;
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar17);
          goto LAB_14254cd2b;
        }
        goto LAB_14254cd46;
      }
      if (DAT_1469e91a4 < (int)uVar21) {
        cVar2 = FActorClusterReferenceProcessor::CanAddToCluster(puVar29,lVar27);
        if ((cVar2 != '\0') && (lVar24 = *plVar16, (*(uint *)(lVar24 + 8) & 0x1400) == 0)) {
          uVar21 = *(uint *)(lVar24 + 0xc);
          if ((int)uVar21 < (int)DAT_1469e91c4) {
            uVar13 = uVar21 & 0xffff;
            uVar26 = uVar21;
            if ((int)uVar21 < 0) {
              uVar26 = uVar21 + 0xffff;
              uVar13 = uVar13 - 0x10000;
            }
            lVar27 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
                     (longlong)(int)uVar13 * 0x18;
          }
          else {
            lVar27 = 0;
          }
          if ((*(uint *)(lVar27 + 8) >> 0x1e & 1) == 0) goto LAB_14254cede;
        }
        lVar19 = *(longlong *)(puVar29 + 2);
        iVar25 = *(int *)(*plVar16 + 0xc);
        piVar14 = *(int **)(lVar19 + 0x28);
        iVar3 = *(int *)(lVar19 + 0x30);
        lVar27 = (longlong)iVar3 * 4;
        for (piVar9 = piVar14; piVar9 != piVar14 + iVar3; piVar9 = piVar9 + 1) {
          if (*piVar9 == iVar25) goto LAB_14254cf30;
        }
        goto LAB_14254cf59;
      }
    }
LAB_14254cce0:
    local_148 = uVar4 & 0xff;
    plVar16 = local_130;
    goto LAB_14254cd46;
  case 3:
    local_c0 = (longlong *)((ulonglong)(uVar4 >> 0xc) + lVar24);
    local_148 = uVar4 & 0xff;
    uVar22 = (ulonglong)local_148;
    local_110 = 0;
    local_80 = (longlong)(int)local_c0[1];
    if (0 < local_80) {
      do {
        lVar24 = *(longlong *)(*local_c0 + local_110 * 8);
        plVar16 = (longlong *)(*local_c0 + local_110 * 8);
        puVar29 = (uint *)*param_1;
        if (lVar24 != 0) {
          uVar21 = *(uint *)(lVar24 + 0xc);
          if ((int)uVar21 < (int)DAT_1469e91c4) {
            uVar13 = uVar21 & 0xffff;
            uVar26 = uVar21;
            if ((int)uVar21 < 0) {
              uVar26 = uVar21 + 0xffff;
              uVar13 = uVar13 - 0x10000;
            }
            lVar27 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
                     (longlong)(int)uVar13 * 0x18;
          }
          else {
            lVar27 = 0;
          }
          uVar28 = 0;
          uVar26 = *(uint *)(lVar27 + 0xc);
          if (uVar26 != *puVar29) {
            bVar8 = *(byte *)(lVar27 + 0xb) & 1;
            if ((bVar8 == 0) && (uVar26 == 0)) {
              if (DAT_1469e91a4 < (int)uVar21) {
                cVar2 = FActorClusterReferenceProcessor::CanAddToCluster(puVar29,lVar24);
                if ((cVar2 != '\0') && (lVar24 = *plVar16, (*(uint *)(lVar24 + 8) & 0x1400) == 0)) {
                  uVar21 = *(uint *)(lVar24 + 0xc);
                  if ((int)uVar21 < (int)DAT_1469e91c4) {
                    uVar13 = uVar21 & 0xffff;
                    uVar26 = uVar21;
                    if ((int)uVar21 < 0) {
                      uVar26 = uVar21 + 0xffff;
                      uVar13 = uVar13 - 0x10000;
                    }
                    uVar28 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
                             (longlong)(int)uVar13 * 0x18;
                  }
                  if ((*(uint *)(uVar28 + 8) >> 0x1e & 1) == 0) {
                    in_stack_fffffffffffffe98 = local_100;
                    FActorClusterReferenceProcessor::AddObjectToCluster
                              (puVar29,uVar21,lVar27,lVar24,local_100,1);
                    goto LAB_14254d569;
                  }
                }
                lVar24 = *(longlong *)(puVar29 + 2);
                iVar25 = *(int *)(*plVar16 + 0xc);
                piVar14 = *(int **)(lVar24 + 0x28);
                iVar3 = *(int *)(lVar24 + 0x30);
                for (piVar9 = piVar14; piVar9 != piVar14 + iVar3; piVar9 = piVar9 + 1) {
                  if (*piVar9 == iVar25) {
                    if ((int)((longlong)piVar9 - (longlong)piVar14 >> 2) != -1) goto LAB_14254d569;
                    break;
                  }
                }
                *(int *)(lVar24 + 0x30) = iVar3 + 1;
                if (*(int *)(lVar24 + 0x34) < iVar3 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar24 + 0x28,iVar3);
                }
                *(int *)((longlong)iVar3 * 4 + *(longlong *)(lVar24 + 0x28)) = iVar25;
              }
            }
            else {
              if (bVar8 == 0) {
                uVar21 = uVar26;
              }
              uVar22 = uVar28;
              if ((int)uVar21 < (int)DAT_1469e91c4) {
                uVar13 = uVar21 & 0xffff;
                uVar26 = uVar21;
                if ((int)uVar21 < 0) {
                  uVar26 = uVar21 + 0xffff;
                  uVar13 = uVar13 - 0x10000;
                }
                uVar22 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
                         (longlong)(int)uVar13 * 0x18;
              }
              lVar24 = *(longlong *)(puVar29 + 2);
              puVar18 = *(uint **)(lVar24 + 0x18);
              iVar25 = *(int *)(lVar24 + 0x20);
              lVar27 = (longlong)(int)~*(uint *)(uVar22 + 0xc) * 0x50 + DAT_1469e8f10;
              for (puVar10 = puVar18; local_88 = lVar27, puVar10 != puVar18 + iVar25;
                  puVar10 = puVar10 + 1) {
                if (*puVar10 == uVar21) {
                  if ((int)((longlong)puVar10 - (longlong)puVar18 >> 2) != -1) goto LAB_14254d40f;
                  break;
                }
              }
              *(int *)(lVar24 + 0x20) = iVar25 + 1;
              if (*(int *)(lVar24 + 0x24) < iVar25 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar24 + 0x18,iVar25);
              }
              *(uint *)((longlong)iVar25 * 4 + *(longlong *)(lVar24 + 0x18)) = uVar21;
LAB_14254d40f:
              TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                        (lVar27 + 0x38,puVar29);
              puVar18 = *(uint **)(lVar27 + 0x18);
              uVar22 = (longlong)*(int *)(lVar27 + 0x20) & 0x3fffffffffffffff;
              if (puVar18 + *(int *)(lVar27 + 0x20) < puVar18) {
                uVar22 = 0;
              }
              if (uVar22 != 0) {
                do {
                  uVar21 = *puVar18;
                  if (uVar21 != *puVar29) {
                    lVar24 = *(longlong *)(puVar29 + 2);
                    puVar10 = *(uint **)(lVar24 + 0x18);
                    iVar25 = *(int *)(lVar24 + 0x20);
                    for (puVar11 = puVar10; puVar11 != puVar10 + iVar25; puVar11 = puVar11 + 1) {
                      if (*puVar11 == uVar21) {
                        if ((int)((longlong)puVar11 - (longlong)puVar10 >> 2) != -1)
                        goto LAB_14254d4b3;
                        break;
                      }
                    }
                    *(int *)(lVar24 + 0x20) = iVar25 + 1;
                    if (*(int *)(lVar24 + 0x24) < iVar25 + 1) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar24 + 0x18,iVar25);
                    }
                    *(uint *)((longlong)iVar25 * 4 + *(longlong *)(lVar24 + 0x18)) = uVar21;
                  }
LAB_14254d4b3:
                  puVar18 = puVar18 + 1;
                  uVar28 = uVar28 + 1;
                  lVar27 = local_88;
                } while (uVar28 != uVar22);
              }
              uVar22 = 0;
              piVar14 = *(int **)(lVar27 + 0x28);
              uVar28 = (longlong)*(int *)(lVar27 + 0x30) & 0x3fffffffffffffff;
              if (piVar14 + *(int *)(lVar27 + 0x30) < piVar14) {
                uVar28 = uVar22;
              }
              if (uVar28 != 0) {
                do {
                  lVar24 = *(longlong *)(puVar29 + 2);
                  iVar25 = *piVar14;
                  piVar9 = *(int **)(lVar24 + 0x28);
                  iVar3 = *(int *)(lVar24 + 0x30);
                  for (piVar12 = piVar9; piVar12 != piVar9 + iVar3; piVar12 = piVar12 + 1) {
                    if (*piVar12 == iVar25) {
                      if ((int)((longlong)piVar12 - (longlong)piVar9 >> 2) != -1)
                      goto LAB_14254d54f;
                      break;
                    }
                  }
                  *(int *)(lVar24 + 0x30) = iVar3 + 1;
                  if (*(int *)(lVar24 + 0x34) < iVar3 + 1) {
                    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar24 + 0x28,iVar3);
                  }
                  *(int *)((longlong)iVar3 * 4 + *(longlong *)(lVar24 + 0x28)) = iVar25;
LAB_14254d54f:
                  piVar14 = piVar14 + 1;
                  uVar22 = uVar22 + 1;
                } while (uVar22 != uVar28);
              }
            }
          }
        }
LAB_14254d569:
        local_110 = local_110 + 1;
      } while (local_110 < local_80);
      goto LAB_14254cd2b;
    }
    goto LAB_14254cd46;
  case 4:
    local_130 = plVar16 + 3;
    plVar15 = (longlong *)((ulonglong)(uVar4 >> 0xc) + lVar24);
    lVar24 = *plVar15;
    *local_130 = lVar24;
    *(undefined4 *)(plVar16 + 4) =
         *(undefined4 *)(*(longlong *)(lVar23 + 0x1b0) + (longlong)(int)uVar26 * 4);
    iVar3 = (int)plVar15[1];
    *(int *)((longlong)plVar16 + 0x24) = iVar3;
    uVar4 = *(int *)(*(longlong *)(lVar23 + 0x1b0) + (longlong)(iVar25 + 2) * 4) +
            (iVar25 + 2) * 0x100;
    *(int *)(plVar16 + 5) = iVar25 + 3;
    local_128 = lVar24;
    if (iVar3 != 0) goto LAB_14254d9d1;
    uVar28 = (ulonglong)(uVar4 >> 8);
    local_148 = (uint)*(byte *)(*(longlong *)(lVar23 + 0x1b0) + -4 + uVar28 * 4) - (uVar4 & 0xff);
    uVar22 = (ulonglong)local_148;
    plVar16 = local_130;
    goto LAB_14254cd46;
  case 5:
    plVar16[3] = lVar24;
    *(undefined4 *)(plVar16 + 4) =
         *(undefined4 *)(*(longlong *)(lVar23 + 0x1b0) + (longlong)(int)uVar26 * 4);
    *(undefined4 *)((longlong)plVar16 + 0x24) =
         *(undefined4 *)(*(longlong *)(lVar23 + 0x1b0) + (longlong)(iVar25 + 2) * 4);
    *(int *)(plVar16 + 5) = iVar25 + 3;
LAB_14254d9d1:
    local_130 = plVar16 + 3;
    uVar22 = 0;
    local_148 = 0;
    plVar16 = local_130;
    uVar28 = (ulonglong)(iVar25 + 3);
    goto LAB_14254cd46;
  case 6:
    local_148 = uVar4 & 0xff;
    (*(code *)CONCAT44(*(undefined4 *)(lVar27 + (longlong)(iVar25 + 2) * 4),
                       *(undefined4 *)(lVar27 + (longlong)(int)uVar26 * 4)))
              ((ulonglong)(uVar4 >> 0xc) + lVar24);
    plVar16 = local_130;
    lVar24 = local_128;
    uVar28 = (ulonglong)(iVar25 + 3);
    break;
  case 7:
    local_148 = uVar4 & 0xff;
    (*(code *)CONCAT44(*(undefined4 *)(lVar27 + (longlong)(iVar25 + 2) * 4),
                       *(undefined4 *)(lVar27 + (longlong)(int)uVar26 * 4)))(lVar1);
    plVar16 = local_130;
    lVar24 = local_128;
    uVar28 = (ulonglong)(iVar25 + 3);
    break;
  case 8:
    local_148 = uVar4 & 0xff;
    plVar16 = (longlong *)
              CONCAT44(*(undefined4 *)(lVar27 + (longlong)(iVar25 + 2) * 4),
                       *(undefined4 *)(lVar27 + (longlong)(int)uVar26 * 4));
    if (local_a8 == 0) {
      FReferenceCollector::CreateVerySlowReferenceCollectorArchive(&local_b0);
    }
    (**(code **)(*plVar16 + 0x2c0))(plVar16,local_a8,(ulonglong)(uVar4 >> 0xc) + lVar24,0);
    plVar16 = local_130;
    lVar24 = local_128;
    uVar28 = (ulonglong)(iVar25 + 3);
    break;
  case 9:
    local_148 = uVar4 & 0xff;
    plVar16 = (longlong *)
              CONCAT44(*(undefined4 *)(lVar27 + (longlong)(iVar25 + 2) * 4),
                       *(undefined4 *)(lVar27 + (longlong)(int)uVar26 * 4));
    if (local_a8 == 0) {
      FReferenceCollector::CreateVerySlowReferenceCollectorArchive(&local_b0);
    }
    (**(code **)(*plVar16 + 0x2c0))(plVar16,local_a8,(ulonglong)(uVar4 >> 0xc) + lVar24,0);
    plVar16 = local_130;
    lVar24 = local_128;
    uVar28 = (ulonglong)(iVar25 + 3);
    break;
  case 10:
    local_148 = uVar4 & 0xff;
    break;
  case 0xb:
    goto switchD_14254cdc7_caseD_b;
  default:
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      local_d8 = (undefined2 *)0x0;
      local_d0 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
      FGenericPlatformString::Memcpy(local_d8,&DAT_143f3edc8,10);
    }
    else {
      local_78 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x18);
      FName::ToString(&local_78,&local_d8);
    }
    puVar7 = &DAT_143f3eda8;
    if ((int)local_d0 != 0) {
      puVar7 = local_d8;
    }
    UObjectBaseUtility::GetPathName(lVar1,&local_60,0);
    puVar6 = &DAT_143f3eda8;
    if (local_58 != 0) {
      puVar6 = local_60;
    }
    uVar30 = CONCAT44(uVar31,iVar25);
    LowLevelFatalErrorHandler
              ("Unknown",0x328,
               L"Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s",uVar21,uVar30,
               puVar7,puVar6);
    uVar31 = (undefined4)((ulonglong)uVar30 >> 0x20);
    uVar32 = (undefined4)((ulonglong)puVar7 >> 0x20);
    if (local_60 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_d8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    plVar16 = *(longlong **)(lVar1 + 0x10);
    if (plVar16 == (longlong *)0x0) {
      local_f0 = 5;
      local_f8 = plVar16;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
      FGenericPlatformString::Memcpy(local_f8,&DAT_143f3edc8,10);
    }
    else {
      local_70 = plVar16[3];
      FName::ToString(&local_70,&local_f8);
    }
    plVar16 = (longlong *)&DAT_143f3eda8;
    if ((int)local_f0 != 0) {
      plVar16 = local_f8;
    }
    UObjectBaseUtility::GetPathName(lVar1,&local_50,0);
    puVar7 = &DAT_143f3eda8;
    if (local_48 != 0) {
      puVar7 = local_50;
    }
    in_stack_fffffffffffffe98 = (longlong *)(CONCAT44(uVar31,uVar4 >> 8) & 0xffffffff0000000f);
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x328,
               L"Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s",
               in_stack_fffffffffffffe98,CONCAT44(uVar32,iVar25),plVar16,puVar7);
    if (local_50 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_f8 == (longlong *)0x0) {
LAB_14254dcb9:
      uVar22 = (ulonglong)local_148;
      plVar16 = local_130;
      lVar24 = local_128;
      goto LAB_14254cd46;
    }
    FMemory::Free();
    plVar16 = local_130;
    lVar24 = local_128;
  }
  goto LAB_14254cd3f;
switchD_14254cdc7_caseD_b:
  local_130 = local_b8;
  param_2 = local_68;
  iVar25 = local_e8;
  if ((int)local_68[1] <= local_e8) goto LAB_14254dd1d;
  goto LAB_14254cc20;
LAB_14254cf30:
  local_148 = uVar4 & 0xff;
  uVar22 = (ulonglong)local_148;
  plVar16 = local_130;
  lVar24 = local_128;
  if ((int)((longlong)piVar9 - (longlong)piVar14 >> 2) != -1) goto LAB_14254cd46;
LAB_14254cf59:
  *(int *)(lVar19 + 0x30) = iVar3 + 1;
  if (*(int *)(lVar19 + 0x34) < iVar3 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar19 + 0x28);
  }
  *(int *)(lVar27 + *(longlong *)(lVar19 + 0x28)) = iVar25;
  local_e0 = uVar28;
LAB_14254cd2b:
  local_148 = uVar4 & 0xff;
  plVar16 = local_130;
  lVar24 = local_128;
  uVar28 = local_e0;
LAB_14254cd3f:
  uVar22 = (ulonglong)local_148;
  goto LAB_14254cd46;
}



// FUNCTION 14254dde0 FUN_14254dde0 body=182 status=ok
// SIG undefined FUN_14254dde0(void)

undefined8 FUN_14254dde0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar5 = 0;
  uVar1 = (**(code **)(*param_1 + 0x148))();
  plVar2 = (longlong *)UDynamicEntryBox::GetAllEntries(uVar1);
  for (iVar6 = 0; (-1 < iVar6 && (iVar6 < (int)plVar2[1])); iVar6 = iVar6 + 1) {
    lVar4 = *(longlong *)(*plVar2 + (longlong)iVar6 * 8);
    if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x204) & 0x10) != 0)) {
      plVar3 = (longlong *)ULevel::GetLevelScriptActor();
      if (plVar3 != (longlong *)0x0) {
        lVar4 = UObject::FindFunction(plVar3,param_2);
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0x8c) == '\0')) {
          (**(code **)(*plVar3 + 0x208))(plVar3,lVar4,0);
          uVar5 = 1;
        }
      }
    }
  }
  return uVar5;
}



// FUNCTION 14254dea0 Remove body=356 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
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
      if (*(ulonglong *)(lVar2 + lVar8 * 0x30) == param_2) {
        uVar6 = (longlong)*(int *)(lVar2 + 0x2c + lVar8 * 0x30) & uVar6;
        piVar3 = (int *)((longlong)plVar5 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar5 + uVar6 * 4);
        goto joined_r0x00014254dfb4;
      }
      iVar9 = *(int *)(lVar2 + 0x28 + lVar8 * 0x30);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x00014254dfb4:
  if (iVar1 == -1) {
LAB_14254dfdb:
    TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar9,1);
    return 1;
  }
  if (iVar1 == iVar9) {
    *piVar3 = *(int *)(lVar2 + 0x28 + lVar8 * 0x30);
    goto LAB_14254dfdb;
  }
  piVar3 = (int *)((longlong)iVar1 * 0x30 + 0x28 + lVar2);
  iVar1 = *piVar3;
  goto joined_r0x00014254dfb4;
}



// FUNCTION 14254e010 RemoveAnnotation body=240 status=ok
// SIG undefined RemoveAnnotation(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::RemoveAnnotation
               (longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined4 uVar6;
  BOOL BVar7;
  uint uStack_c;
  
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  uVar6 = DAT_1468b5da8;
  uVar5 = DAT_1468b5da0;
  uStack_c = uStack_c & 0xffffff00;
  auVar3._8_4_ = DAT_1468b5d98;
  auVar3._0_8_ = _DAT_1468b5d90;
  auVar3._12_4_ = 0x42b40000;
  *(undefined1 (*) [16])(param_1 + 0x88) = auVar3;
  auVar4._8_4_ = uVar6;
  auVar4._0_8_ = uVar5;
  auVar4._12_4_ = uStack_c;
  *(undefined1 (*) [16])(param_1 + 0x98) = auVar4;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 8,param_2);
  if ((0 < iVar1 - iVar2) && (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c))) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014254e0f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 14254e100 RemoveAtImpl body=190 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FSceneViewStateReference,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_3 != 0) {
    lVar2 = *param_1 + (longlong)param_2 * 0x28;
    iVar3 = param_3;
    do {
      FSceneViewStateReference::~FSceneViewStateReference(lVar2);
      lVar2 = lVar2 + 0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x28),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x28),(longlong)iVar1 * 0x28);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14254e1c0 RenameForPIE body=612 status=ok
// SIG undefined RenameForPIE(void)

void ULevelStreaming::RenameForPIE(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  uVar9 = 0;
  if (cVar3 == '\0') {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_res8 = 0;
    if (*(longlong *)(param_1 + 0x50) == 0) {
      uVar4 = UWorld::BuildPIEPackagePrefix(local_38,param_2);
      uVar5 = GetWorldAssetPackageName(param_1,local_48);
      UWorld::StripPIEPrefixFromPackageName(&local_58,uVar5,uVar4);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      puVar8 = &DAT_143f3eda8;
      if (local_50 != 0) {
        puVar8 = local_58;
      }
      puVar6 = (undefined8 *)FName::FName(local_res18,puVar8,1);
      *(undefined8 *)(param_1 + 0x50) = *puVar6;
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    uVar4 = GetWorldAssetPackageName(param_1,local_48);
    puVar6 = (undefined8 *)UWorld::ConvertToPIEPackageName(local_38,uVar4,param_2);
    if (*(int *)(puVar6 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar6;
    }
    FName::FName(&local_res8,puVar8,1);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    FSoftObjectPath::AddPIEPackageName(local_res8);
    SetWorldAssetByPackageName(param_1,local_res8);
    FUN_14254b9f0(uVar9,*(undefined8 *)(param_1 + 0x50));
  }
  if (0 < *(int *)(param_1 + 0x60)) {
    plVar1 = (longlong *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) < *(int *)(param_1 + 0x60)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x58);
    puVar6 = puVar10 + *(int *)(param_1 + 0x60);
    for (; puVar10 != puVar6; puVar10 = puVar10 + 1) {
      iVar2 = *(int *)(param_1 + 0x70);
      *(int *)(param_1 + 0x70) = iVar2 + 1;
      if (*(int *)(param_1 + 0x74) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = *puVar10;
      uVar4 = *puVar10;
      uVar5 = FName::ToString(puVar10,local_48);
      puVar7 = (undefined8 *)UWorld::ConvertToPIEPackageName(local_38,uVar5,param_2);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar7;
      }
      puVar7 = (undefined8 *)FName::FName(&local_res8,puVar8,1);
      *puVar10 = *puVar7;
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      FSoftObjectPath::AddPIEPackageName(*puVar10);
      FUN_14254b9f0(uVar9,uVar4);
    }
  }
  return;
}



// FUNCTION 14254e430 FUN_14254e430 body=1561 status=ok
// SIG undefined FUN_14254e430(void)

undefined8 FUN_14254e430(longlong *param_1,longlong param_2,char param_3,int param_4)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined2 *puVar14;
  longlong **pplVar15;
  bool bVar16;
  int local_res8 [2];
  uint in_stack_ffffffffffffff58;
  undefined8 local_88;
  undefined2 *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  longlong *local_60;
  undefined4 local_58;
  longlong *local_50;
  longlong **local_48;
  longlong local_40;
  
  lVar12 = 0;
  local_res8[0] = 0;
  if (*(char *)((longlong)param_1 + 0xb4) == '\x03') {
    return 1;
  }
  if (*(char *)((longlong)param_1 + 0xb4) == '\x02') {
    return 0;
  }
  cVar2 = UWorld::IsGameWorld(param_2);
  if (cVar2 == '\0') {
    plVar5 = (longlong *)ULevelStreaming::GetWorldAssetPackageFName(param_1,&local_60);
    local_70 = *plVar5;
  }
  else {
    iVar1 = (int)param_1[0x16];
    if ((iVar1 < 0) || ((int)param_1[0xc] <= iVar1)) {
      if ((*(byte *)((longlong)param_1 + 0xb6) & 2) == 0) {
        FSoftObjectPath::ToString(param_1 + 7,&local_80);
        puVar8 = (undefined8 *)FUN_1417006f0(&local_50,&local_80);
        if (*(int *)(puVar8 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar8;
        }
        plVar5 = (longlong *)FName::FName(local_res8,puVar14,1);
        param_1[0x26] = *plVar5;
        if (local_50 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_80 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        *(byte *)((longlong)param_1 + 0xb6) = *(byte *)((longlong)param_1 + 0xb6) | 2;
      }
      local_70 = param_1[0x26];
    }
    else {
      local_70 = *(longlong *)(param_1[0xb] + (longlong)iVar1 * 8);
    }
  }
  if ((param_1[0x24] != 0) && (param_1[0x27] == local_70)) {
    return 1;
  }
  if (param_1[0x25] != 0) {
    return 0;
  }
  lVar6 = *(longlong *)(param_2 + 0xf8);
  if (((lVar6 != 0) || (lVar6 = *(longlong *)(param_2 + 0x100), lVar6 != 0)) &&
     (lVar6 == param_1[0x24])) {
    return 0;
  }
  local_68 = 0xffffffff;
  local_res8[0] = 0x20000;
  cVar3 = UWorld::IsPlayInEditor(param_2);
  if (cVar3 != '\0') {
    lVar6 = UObjectBaseUtility::GetOutermost(param_2);
    local_res8[0] = (*(uint *)(lVar6 + 0x50) >> 0x14 & 1) * 0x100000 + 0x20000;
    lVar6 = UObjectBaseUtility::GetOutermost(param_2);
    local_68 = *(undefined4 *)(lVar6 + 0x54);
    uVar7 = FName::ToString(&local_70,&local_50);
    UWorld::StripPIEPrefixFromPackageName(&local_80,uVar7,param_2 + 0xe8);
    if (local_50 != (longlong *)0x0) {
      FMemory::Free();
    }
    puVar14 = &DAT_143f3eda8;
    if (local_78 != 0) {
      puVar14 = local_80;
    }
    puVar8 = (undefined8 *)FName::FName(&local_60,puVar14,1);
    uVar7 = *puVar8;
    uVar9 = UPackage::GetPrivateStaticClass();
    in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffff00;
    lVar6 = FUN_141799680(uVar9,0,uVar7,0,in_stack_ffffffffffffff58,0,0);
    if ((lVar6 != 0) &&
       ((((param_4 == 1 || ((*(byte *)(lVar6 + 0x28) & 1) != 0)) ||
         (cVar3 = (**(code **)(*DAT_146b17150 + 800))(), cVar3 == '\0')) &&
        (lVar6 = FUN_1428c9910(&local_80,param_2), lVar6 != 0)))) {
      FUN_1425504a0(param_1,*(undefined8 *)(lVar6 + 0x30));
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x1c,0);
      goto LAB_14254ea16;
    }
    if (local_80 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  uVar7 = UPackage::GetPrivateStaticClass();
  lVar6 = FUN_141799680(uVar7,0,local_70,0,in_stack_ffffffffffffff58 & 0xffffff00,0,0x20000000);
  if (lVar6 != 0) {
    lVar10 = UWorld::FindWorldInPackage(lVar6);
    if (lVar10 != 0) {
LAB_14254e6fa:
      iVar1 = *(int *)(lVar10 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar13 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar13;
        lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                 (longlong)(int)((uVar4 & 0xffff) - uVar13) * 0x18;
      }
      if (((byte)((uint)*(undefined4 *)(lVar12 + 8) >> 0x1d) & 1) == 0) {
        if (*(longlong *)(lVar10 + 0x30) == param_1[0x24]) {
          return 1;
        }
        FUN_1425504a0(param_1);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x1c,0);
        return 1;
      }
      return 0;
    }
    lVar10 = FUN_1428cb040(lVar6,0);
    if (lVar10 != 0) {
      UObjectBaseUtility::GetOutermost(lVar10);
      goto LAB_14254e6fa;
    }
  }
  if (param_3 == '\0') {
    return 1;
  }
  if (cVar2 == '\0') {
LAB_14254e7b6:
    lVar12 = param_1[10];
  }
  else {
    iVar1 = (int)param_1[0x16];
    if ((iVar1 < 0) || ((int)param_1[0xc] <= iVar1)) goto LAB_14254e7b6;
    if ((-1 < iVar1) && (iVar1 < (int)param_1[0xe])) {
      lVar12 = *(longlong *)(param_1[0xd] + (longlong)iVar1 * 8);
    }
  }
  local_88 = 0;
  bVar16 = lVar12 == 0;
  if (bVar16) {
    plVar5 = &local_70;
    pplVar15 = &local_50;
  }
  else {
    plVar5 = &local_40;
    pplVar15 = &local_60;
  }
  local_40 = lVar12;
  puVar8 = (undefined8 *)FName::ToString(plVar5,pplVar15);
  local_80 = (undefined2 *)*puVar8;
  *puVar8 = 0;
  local_78 = *(int *)(puVar8 + 1);
  local_74 = *(undefined4 *)((longlong)puVar8 + 0xc);
  puVar8[1] = 0;
  if ((bVar16) && (local_50 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if ((!bVar16) && (local_60 != (longlong *)0x0)) {
    FMemory::Free();
  }
  cVar2 = FUN_1416f0740(&local_80,0,0,1);
  if (cVar2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xb4) = 2;
    if (local_80 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    return 0;
  }
  *(undefined1 *)((longlong)param_1 + 0xb4) = 3;
  FWeakObjectPtr::operator=(&local_60,param_2);
  local_50 = &local_70;
  local_48 = &local_60;
  FUN_141fc8710(&DAT_1465332d0,&local_88,&local_50,0);
  if (DAT_1465356b8 != DAT_1465356e4) {
    puVar11 = DAT_1465356f0;
    if (DAT_1465356f0 == (undefined *)0x0) {
      puVar11 = &DAT_1465356e8;
    }
    iVar1 = *(int *)(puVar11 +
                    ((longlong)((int)((ulonglong)local_70 >> 0x20) + (int)local_70) &
                    (longlong)DAT_1465356f8 - 1U) * 4);
    while (iVar1 != -1) {
      lVar12 = (longlong)iVar1 * 0x18;
      if (*(longlong *)(lVar12 + DAT_1465356b0) == local_70) {
        if ((iVar1 != -1) && (lVar12 = DAT_1465356b0 + lVar12, lVar12 != 0)) goto LAB_14254e941;
        break;
      }
      iVar1 = *(int *)(lVar12 + 0x10 + DAT_1465356b0);
    }
  }
  local_60 = &local_70;
  FUN_14253ceb0(&DAT_1465356b0,&local_88,&local_60,0);
  lVar12 = DAT_1465356b0 + (longlong)(int)local_88 * 0x18;
LAB_14254e941:
  *(undefined4 *)(lVar12 + 8) = *(undefined4 *)(param_2 + 0x708);
  local_60 = (longlong *)0x0;
  local_58 = 0;
  puVar8 = (undefined8 *)operator_new(0x28,&local_60);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_FUN_1442e8188;
    FWeakObjectPtr::operator=(puVar8 + 1,param_1);
    puVar8[2] = FUN_142540800;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar8[4] = uVar7;
    *puVar8 = &PTR_FUN_1442e81d0;
  }
  puVar14 = &DAT_143f3eda8;
  if (local_78 != 0) {
    puVar14 = local_80;
  }
  uVar7 = FName::ToString(&local_70,&local_50);
  FUN_1416fe5f0(uVar7,0,puVar14,&local_60,local_res8[0],local_68,0);
  if (local_50 != (longlong *)0x0) {
    FMemory::Free();
  }
  if ((param_4 == 1) ||
     ((cVar2 = (**(code **)(*param_1 + 0x290))(param_1), cVar2 != '\0' && (param_4 != 2)))) {
    (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
    FUN_1416f7d70(0xffffffff);
  }
LAB_14254ea16:
  if (local_80 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 14254ea50 Reset body=176 status=ok
// SIG undefined Reset(void)

void TSet<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14254eb00 FUN_14254eb00 body=1101 status=ok
// SIG undefined FUN_14254eb00(void)

void FUN_14254eb00(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong lVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong local_res8;
  undefined1 local_res10;
  longlong local_res18;
  undefined8 local_b8;
  uint *puStack_b0;
  uint local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  longlong *plStack_90;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  int iStack_58;
  uint uStack_54;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  pvVar8 = ThreadLocalStoragePointer;
  if (((0 < *(int *)(param_1 + 0x278) - *(int *)(param_1 + 0x2a4)) ||
      (0 < *(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x254))) ||
     ((*(byte *)(param_1 + 0x703) & 1) != 0)) {
    local_res10 = *(undefined1 *)(param_1 + 0x6f0);
    *(undefined1 *)(param_1 + 0x6f0) = 1;
    if ((*(int *)(*(longlong *)((longlong)pvVar8 + (ulonglong)_tls_index * 8) + 0x38) <
         DAT_146afcbe0) && (_Init_thread_header(&DAT_146afcbe0), DAT_146afcbe0 == -1)) {
      atexit((_func_5014 *)&LAB_143eb0430);
      _Init_thread_footer(&DAT_146afcbe0);
    }
    if (DAT_146afcbdc < *(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x254)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146afcbd0);
    }
    plVar13 = (longlong *)(param_1 + 0x220);
    uVar2 = *(uint *)(param_1 + 0x248);
    puVar1 = (uint *)(param_1 + 0x230);
    local_b8._0_4_ = 0;
    local_b8._4_4_ = 1;
    uStack_a4 = 0;
    iStack_a0 = 0;
    if (uVar2 != 0) {
      puVar16 = *(uint **)(param_1 + 0x240);
      if (*(uint **)(param_1 + 0x240) == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar3 = *puVar16;
      iStack_a0 = 0;
      local_b8._0_4_ = 0;
      while (uVar3 == 0) {
        lVar12 = (longlong)(int)local_b8;
        iStack_a0 = iStack_a0 + 0x20;
        iVar10 = (int)local_b8 + 1;
        bVar6 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_b8;
        local_b8._0_4_ = iVar10;
        if (bVar6) goto LAB_14254ec7c;
        uVar3 = puVar16[lVar12 + 1];
      }
      local_b8._4_4_ = -uVar3 & uVar3;
      iVar10 = 0x1f;
      if (local_b8._4_4_ != 0) {
        for (; local_b8._4_4_ >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (local_b8._4_4_ == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_a4 = (iStack_a0 - iVar10) + 0x1f;
      if ((int)uVar2 < (int)uStack_a4) {
LAB_14254ec7c:
        uStack_a4 = uVar2;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x248);
    uStack_70 = 0xffffffff;
    uStack_6c = uStack_a4;
    local_68 = CONCAT44(uStack_9c,iStack_a0);
    local_a8 = -1 << ((byte)uVar3 & 0x1f);
    iStack_58 = (int)local_b8;
    uStack_54 = local_b8._4_4_;
    uVar15 = uVar3 & 0xffffffe0;
    iStack_80 = (int)local_b8;
    uStack_7c = local_b8._4_4_;
    puStack_b0 = puVar1;
    uStack_a4 = uVar3;
    local_78 = puVar1;
    local_60 = plVar13;
    puStack_50 = puVar1;
    uStack_40 = local_68;
    local_88 = plVar13;
    uStack_48 = uStack_70;
    uStack_44 = uStack_6c;
    if (uVar3 != uVar2) {
      puVar16 = *(uint **)(param_1 + 0x240);
      if (*(uint **)(param_1 + 0x240) == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar11 = puVar16[(int)uVar3 >> 5] & local_a8;
      iVar10 = (int)uVar3 >> 5;
      while (uVar11 == 0) {
        uVar15 = uVar15 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_14254ed51;
        uVar11 = puVar16[(longlong)iVar10 + 1];
        local_a8 = 0xffffffff;
        iVar10 = iVar10 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar10 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_a4 = (uVar15 - iVar10) + 0x1f;
      uVar3 = uStack_a4;
      if ((int)uVar2 < (int)uStack_a4) {
LAB_14254ed51:
        uStack_a4 = uVar2;
        uVar3 = uVar2;
      }
    }
    while (((iVar10 = DAT_146afcbd8, uStack_6c != uVar3 || (local_78 != puVar1)) ||
           (local_88 != plVar13))) {
      lVar12 = (longlong)DAT_146afcbd8;
      puVar9 = (undefined4 *)((longlong)(int)uStack_6c * 0x10 + *local_88);
      uVar4 = *puVar9;
      uVar5 = puVar9[1];
      DAT_146afcbd8 = DAT_146afcbd8 + 1;
      if (DAT_146afcbdc < DAT_146afcbd8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146afcbd0,iVar10);
      }
      lVar7 = DAT_146afcbd0;
      *(undefined4 *)(DAT_146afcbd0 + lVar12 * 8) = uVar4;
      *(undefined4 *)(lVar7 + 4 + lVar12 * 8) = uVar5;
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    }
    local_res18 = param_1;
    if (DAT_146533360 < 1) {
      FUN_14253eff0(&local_res18);
      puStack_b0 = (uint *)&local_res8;
      local_98 = &LAB_142541d50;
      local_b8 = &LAB_142541d50;
      plStack_90 = (longlong *)puStack_b0;
      FUN_1406a7b10(DAT_146afcbd8,&local_b8,0);
    }
    else {
      puStack_b0 = (uint *)&local_res18;
      plStack_90 = &local_res8;
      local_b8 = &LAB_142541d60;
      local_98 = &LAB_142541d50;
      FUN_141ac7f60(DAT_146afcbd8,&local_98,&local_b8,0);
    }
    uVar14 = 0;
    plVar13 = *(longlong **)(param_1 + 0x198);
    uVar17 = (longlong)*(int *)(param_1 + 0x1a0) & 0x1fffffffffffffff;
    if (plVar13 + *(int *)(param_1 + 0x1a0) < plVar13) {
      uVar17 = uVar14;
    }
    if (uVar17 != 0) {
      do {
        if (*plVar13 != 0) {
          FUN_1425bb630();
        }
        plVar13 = plVar13 + 1;
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar17);
    }
    *(byte *)(param_1 + 0x703) = *(byte *)(param_1 + 0x703) & 0xfe;
    DAT_146afcbd8 = 0;
    if ((DAT_146afcbdc < 0) && (DAT_146afcbdc != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146afcbd0,0);
    }
    *(undefined1 *)(param_1 + 0x6f0) = local_res10;
  }
  return;
}



// FUNCTION 14254ef50 FUN_14254ef50 body=821 status=ok
// SIG undefined FUN_14254ef50(void)

void FUN_14254ef50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined2 *local_208;
  int local_200;
  longlong local_1f8;
  int local_1f0;
  longlong local_1e8;
  int local_1e0;
  longlong local_1d8 [2];
  undefined1 local_1c8 [48];
  undefined1 local_198 [112];
  longlong local_128;
  longlong *local_120;
  longlong local_98;
  longlong local_38;
  longlong local_28;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if ((((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x38), lVar3 != 0)) &&
      (lVar1 = *(longlong *)(lVar3 + 0x90), lVar1 != 0)) &&
     ((*(int *)(lVar1 + 300) == 3 && ((*(byte *)(param_1 + 0x14) & 1) == 0)))) {
    lVar2 = param_1[6];
    if (lVar2 != 0) {
      if (*(longlong *)(lVar1 + 0x30) == lVar2) {
        return;
      }
      if (0 < *(int *)(lVar1 + 0x50)) {
        plVar6 = *(longlong **)(lVar1 + 0x48);
        lVar5 = 0;
        do {
          if (*(longlong *)(*plVar6 + 0x30) == lVar2) {
            return;
          }
          lVar5 = lVar5 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar5 < *(int *)(lVar1 + 0x50));
      }
    }
    FURL::FURL(local_198,0);
    FURL::LoadURLConfig(local_198,L"DefaultPlayer",&DAT_1468e2410);
    (**(code **)(*param_1 + 0x2c0))(param_1,&local_1e8);
    if ((local_1e0 != 0) && (0 < local_1e0 + -1)) {
      FString::PrintfImpl(&local_208,L"Name=%s",local_1e8);
      puVar7 = &DAT_143f3eda8;
      if (local_200 != 0) {
        puVar7 = local_208;
      }
      FURL::AddOption(local_198,puVar7);
      if (local_208 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    uVar4 = FUN_14169f840();
    FString::PrintfImpl(&local_208,L"Hardware=%s",uVar4);
    puVar7 = &DAT_143f3eda8;
    if (local_200 != 0) {
      puVar7 = local_208;
    }
    FURL::AddOption(local_198,puVar7);
    if (local_208 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_1f8);
    if ((local_1f0 != 0) && (0 < local_1f0 + -1)) {
      FString::PrintfImpl(&local_208,&DAT_1450ebc54,local_1f8);
      puVar7 = &DAT_143f3eda8;
      if (local_200 != 0) {
        puVar7 = local_208;
      }
      FURL::AddOption(local_198,puVar7);
      if (local_208 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    FUN_142547b50(param_1,local_1c8);
    FUN_1428bd910(local_198,local_1d8,0);
    lVar3 = *(longlong *)(lVar3 + 0x90);
    lVar1 = **(longlong **)(lVar3 + 0x1580);
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x30) & 2) == 0)) {
      FControlChannelOutBunch::FControlChannelOutBunch(&local_128,lVar1,0);
      local_res8[0] = 10;
      if ((undefined1 *)local_120[1] < (undefined1 *)*local_120 + 1) {
        (**(code **)(local_128 + 0x50))(&local_128,local_res8,1);
      }
      else {
        local_res8[0] = *(undefined1 *)*local_120;
        *local_120 = *local_120 + 1;
      }
      FUN_14158ce90(&local_128,local_1d8);
      FUN_1425da060(&local_128,local_1c8);
      plVar6 = (longlong *)**(undefined8 **)(lVar3 + 0x1580);
      (**(code **)(*plVar6 + 0x2c8))(plVar6,local_res10,&local_128,1);
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
    }
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1;
    if (local_1d8[0] != 0) {
      FMemory::Free();
    }
    FUN_1404bf980(local_1c8);
    if (local_1f8 != 0) {
      FMemory::Free();
    }
    if (local_1e8 != 0) {
      FMemory::Free();
    }
    FURL::~FURL(local_198);
  }
  return;
}



// FUNCTION 14254f290 FUN_14254f290 body=441 status=ok
// SIG undefined FUN_14254f290(void)

void FUN_14254f290(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0 [2];
  undefined **local_e8 [14];
  undefined **local_78 [14];
  
  FUN_140910980(param_2,param_1 + 8);
  FUntypedBulkData::FUntypedBulkData(local_78);
  local_78[0] = &PTR__scalar_deleting_destructor__1450f1ec8;
  FUntypedBulkData::FUntypedBulkData(local_e8);
  local_e8[0] = &PTR__scalar_deleting_destructor__1450f1ec8;
  (**(code **)(*param_2 + 0x30))(param_2,&local_res8);
  FUN_1417225e0(local_78,param_2,local_res8,0xffffffff);
  lVar2 = 5;
  do {
    plVar1 = (longlong *)param_2[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_f8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_f8,4);
      }
    }
    else {
      local_f8 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_2[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_f4,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_f4,4);
      }
    }
    else {
      local_f4 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    plVar1 = (longlong *)param_2[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_f0,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_f0,4);
      }
    }
    else {
      local_f0[0] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1417225e0(local_e8,param_2,local_res8,0xffffffff);
  FUntypedBulkData::~FUntypedBulkData(local_e8);
  FUntypedBulkData::~FUntypedBulkData(local_78);
  return;
}



// FUNCTION 14254f450 FUN_14254f450 body=2666 status=ok
// SIG undefined FUN_14254f450(void)

void FUN_14254f450(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  undefined8 local_res8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_140910980(param_2,param_1 + 8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if ((int)param_2[8] < 0xf7) {
      lVar9 = 3;
      do {
        local_res8 = 0;
        (**(code **)(*param_2 + 0x30))(param_2,&local_res8);
        plVar1 = (longlong *)param_2[1];
        local_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0x3f800000;
        if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_38,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_38,4);
          }
        }
        else {
          local_38 = *(undefined4 *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        plVar1 = (longlong *)param_2[1];
        if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&uStack_34,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&uStack_34,4);
          }
        }
        else {
          uStack_34 = *(undefined4 *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        plVar1 = (longlong *)param_2[1];
        if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&uStack_30,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&uStack_30,4);
          }
        }
        else {
          uStack_30 = *(undefined4 *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        plVar1 = (longlong *)param_2[1];
        if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&uStack_2c,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&uStack_2c,4);
          }
        }
        else {
          uStack_2c = *(undefined4 *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        plVar1 = (longlong *)param_2[1];
        if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_38,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_38,4);
          }
        }
        else {
          local_38 = *(undefined4 *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        plVar1 = (longlong *)param_2[1];
        if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&uStack_34,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&uStack_34,4);
          }
        }
        else {
          uStack_34 = *(undefined4 *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        plVar1 = (longlong *)param_2[1];
        if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&uStack_30,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&uStack_30,4);
          }
        }
        else {
          uStack_30 = *(undefined4 *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        plVar1 = (longlong *)param_2[1];
        if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&uStack_2c,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&uStack_2c,4);
          }
        }
        else {
          uStack_2c = *(undefined4 *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      goto LAB_14254fd37;
    }
    if ((int)param_2[8] < 0x131) {
      lVar9 = 4;
      do {
        local_res8 = 0;
        (**(code **)(*param_2 + 0x30))(param_2,&local_res8);
        local_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0x3f800000;
        FUN_140da9f70(param_2,&local_38);
        FUN_140da9f70(param_2,&local_38);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      goto LAB_14254fd37;
    }
  }
  plVar1 = (longlong *)param_2[0xe];
  lVar9 = 4;
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x28);
    puVar8 = (undefined8 *)(param_1 + 0x30);
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1,4);
    cVar4 = (**(code **)(*(longlong *)param_2[0xe] + 0xc0))((longlong *)param_2[0xe],3);
    local_res8 = 0;
    puVar7 = &local_res8;
    if (cVar4 != '\0') {
      puVar7 = (undefined8 *)(param_1 + 0x28);
    }
    puVar8 = &local_res8;
    if (cVar3 != '\0') {
      puVar8 = (undefined8 *)(param_1 + 0x30);
    }
    (**(code **)(*param_2 + 0x30))(param_2,puVar7);
  }
  (**(code **)(*param_2 + 0x30))(param_2,puVar8);
  if (0x147 < (int)param_2[8]) {
    plVar1 = (longlong *)param_2[0xe];
    if (plVar1 == (longlong *)0x0) {
      (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x38);
      if (0x1dc < (int)param_2[8]) {
LAB_14254f803:
        puVar8 = (undefined8 *)(param_1 + 0x40);
        goto LAB_14254f807;
      }
    }
    else {
      cVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1,3);
      local_res8 = 0;
      puVar8 = &local_res8;
      if (cVar3 != '\0') {
        puVar8 = (undefined8 *)(param_1 + 0x38);
      }
      (**(code **)(*param_2 + 0x30))(param_2,puVar8);
      if (0x1dc < (int)param_2[8]) {
        puVar8 = &local_res8;
        if (cVar3 != '\0') goto LAB_14254f803;
LAB_14254f807:
        (**(code **)(*param_2 + 0x30))(param_2,puVar8);
      }
    }
  }
  if (*(int *)((longlong)param_2 + 0x44) < 4) {
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    do {
      plVar1 = (longlong *)param_2[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_38,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&local_38,4);
        }
      }
      else {
        local_38 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = (longlong *)param_2[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&uStack_34,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&uStack_34,4);
        }
      }
      else {
        uStack_34 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = (longlong *)param_2[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&uStack_30,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&uStack_30,4);
        }
      }
      else {
        uStack_30 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = (longlong *)param_2[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&uStack_2c,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&uStack_2c,4);
        }
      }
      else {
        uStack_2c = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = (longlong *)param_2[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_38,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&local_38,4);
        }
      }
      else {
        local_38 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = (longlong *)param_2[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&uStack_34,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&uStack_34,4);
        }
      }
      else {
        uStack_34 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = (longlong *)param_2[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&uStack_30,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&uStack_30,4);
        }
      }
      else {
        uStack_30 = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = (longlong *)param_2[1];
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&uStack_2c,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&uStack_2c,4);
        }
      }
      else {
        uStack_2c = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar8 = (undefined8 *)(param_1 + 0x28);
    lVar9 = 2;
    if (puVar8 <= (undefined8 *)(param_1 + 0x38)) {
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    puVar10 = (undefined4 *)(param_1 + 0x58);
    lVar9 = 8;
    do {
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar10 + -2,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,puVar10 + -2,4);
        }
      }
      else {
        puVar10[-2] = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar10 + -1,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,puVar10 + -1,4);
        }
      }
      else {
        puVar10[-1] = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar10,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,puVar10,4);
        }
      }
      else {
        *puVar10 = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar10 + 1,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,puVar10 + 1,4);
        }
      }
      else {
        puVar10[1] = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar10 + 0x1e,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,puVar10 + 0x1e,4);
        }
      }
      else {
        puVar10[0x1e] = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar10 + 0x1f,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,puVar10 + 0x1f,4);
        }
      }
      else {
        puVar10[0x1f] = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar10 + 0x20,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,puVar10 + 0x20,4);
        }
      }
      else {
        puVar10[0x20] = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar10 + 0x21,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,puVar10 + 0x21,4);
        }
      }
      else {
        puVar10[0x21] = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar10 = puVar10 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
LAB_14254fd37:
  uVar6 = FUN_140d66f10(param_2,param_1 + 0x150);
  FUN_140d66f10(uVar6,param_1 + 0x158);
  bVar5 = *(byte *)(param_2 + 5);
  if ((bVar5 & 1) != 0) {
    fVar11 = *(float *)(param_1 + 0x90);
    fVar12 = *(float *)(param_1 + 0xb0);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    *(float *)(param_1 + 0x90) = fVar11;
    fVar11 = *(float *)(param_1 + 0x110);
    *(float *)(param_1 + 0xb0) = fVar12;
    if (fVar11 <= 0.01) {
      fVar11 = 0.01;
    }
    *(float *)(param_1 + 0x110) = fVar11;
    fVar11 = *(float *)(param_1 + 0x130);
    if (fVar11 <= 0.01) {
      fVar11 = 0.01;
    }
    *(float *)(param_1 + 0x130) = fVar11;
    fVar11 = *(float *)(param_1 + 0x94);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    *(float *)(param_1 + 0x94) = fVar11;
    fVar11 = *(float *)(param_1 + 0x114);
    if (fVar11 <= 0.01) {
      fVar11 = 0.01;
    }
    *(float *)(param_1 + 0x114) = fVar11;
    fVar11 = *(float *)(param_1 + 0xb4);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    *(float *)(param_1 + 0xb4) = fVar11;
    fVar11 = *(float *)(param_1 + 0x134);
    if (fVar11 <= 0.01) {
      fVar11 = 0.01;
    }
    *(float *)(param_1 + 0x134) = fVar11;
    fVar11 = *(float *)(param_1 + 0x98);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    *(float *)(param_1 + 0x98) = fVar11;
    fVar11 = *(float *)(param_1 + 0x118);
    if (fVar11 <= 0.01) {
      fVar11 = 0.01;
    }
    *(float *)(param_1 + 0x118) = fVar11;
    fVar11 = *(float *)(param_1 + 0xb8);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    *(float *)(param_1 + 0xb8) = fVar11;
    fVar11 = *(float *)(param_1 + 0x138);
    if (fVar11 <= 0.01) {
      fVar11 = 0.01;
    }
    *(float *)(param_1 + 0x138) = fVar11;
    bVar5 = *(byte *)(param_2 + 5);
  }
  if ((bVar5 & 1) != 0) {
    lVar9 = 0x28;
    if (*(char *)(param_1 + 0x18) != '\0') {
      lVar9 = 0x30;
    }
    *(undefined8 *)(lVar9 + param_1) = 0;
    if (*(char *)(param_1 + 0x18) == '\0') {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
  return;
}



// FUNCTION 14254fed0 Serialize body=90 status=ok
// SIG undefined Serialize(void)

void ULevelStreaming::Serialize(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_141763960();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    lVar1 = UObjectBaseUtility::GetOutermost(param_1);
    if ((*(uint *)(lVar1 + 0x50) >> 0x14 & 1) != 0) {
      lVar1 = UObjectBaseUtility::GetOutermost(param_1);
      if (*(int *)(lVar1 + 0x54) != -1) {
        lVar1 = UObjectBaseUtility::GetOutermost(param_1);
        RenameForPIE(param_1,*(undefined4 *)(lVar1 + 0x54));
      }
    }
  }
  return;
}



// FUNCTION 14254ff30 FUN_14254ff30 body=126 status=ok
// SIG undefined FUN_14254ff30(void)

void FUN_14254ff30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 local_res8 [2];
  
  FUN_142859860();
  plVar1 = (longlong *)param_2[1];
  local_res8[0] = *(undefined4 *)(param_1 + 0x100);
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  *(undefined4 *)(param_1 + 0x100) = local_res8[0];
  return;
}



// FUNCTION 14254ffb0 FUN_14254ffb0 body=145 status=ok
// SIG undefined FUN_14254ffb0(void)

void FUN_14254ffb0(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 local_res20 [2];
  
  lVar3 = 4;
  puVar2 = (undefined4 *)((longlong)param_4 * 0x10 + param_3);
  do {
    local_res20[0] = *puVar2;
    plVar1 = (longlong *)param_2[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res20,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res20,4);
      }
    }
    else {
      local_res20[0] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    *puVar2 = local_res20[0];
    puVar2 = puVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 142550050 FUN_142550050 body=12 status=ok
// SIG undefined FUN_142550050(void)

void FUN_142550050(longlong param_1)

{
  FUN_1423762a0(*(undefined8 *)(param_1 + 0x458));
  return;
}



// FUNCTION 142550060 SetAudioDeviceHandle body=7 status=ok
// SIG undefined SetAudioDeviceHandle(void)

void UWorld::SetAudioDeviceHandle(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x780) = param_2;
  return;
}



// FUNCTION 142550070 FUN_142550070 body=17 status=ok
// SIG undefined FUN_142550070(void)

void FUN_142550070(longlong param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 == 0) {
    return;
  }
  cVar2 = FUN_142341170();
  if ((((cVar2 != '\0') || ((*(byte *)(lVar1 + 0xb8) & 1) == 0)) ||
      (*(char *)(lVar1 + 0x24e) != '\0')) && (param_2 != *(float *)(lVar1 + 0x2e4))) {
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)(lVar1 + 0x2e4) = param_2;
    FUN_14237b430(lVar1);
  }
  return;
}



// FUNCTION 142550090 FUN_142550090 body=379 status=ok
// SIG undefined FUN_142550090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142550090(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar5 = *param_2;
  local_48 = (longlong *)param_2[1];
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  if (local_58 != (undefined1 *)(param_1 + 0x48)) {
    puVar1 = (undefined8 *)(param_1 + 0x50);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    local_68 = uVar5;
    uStack_60 = local_48;
    if (&local_68 != puVar1) {
      local_68._0_4_ = (undefined4)uVar5;
      local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_60._0_4_ = SUB84(local_48,0);
      uStack_60._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
      uVar5 = *puVar1;
      plVar6 = *(longlong **)(param_1 + 0x58);
      local_30 = (undefined4)local_68;
      uStack_2c = local_68._4_4_;
      uStack_28 = (undefined4)uStack_60;
      uStack_24 = uStack_60._4_4_;
      *(undefined4 *)puVar1 = (undefined4)local_68;
      *(undefined4 *)(param_1 + 0x54) = local_68._4_4_;
      *(undefined4 *)(param_1 + 0x58) = (undefined4)uStack_60;
      *(undefined4 *)(param_1 + 0x5c) = uStack_60._4_4_;
      local_68 = uVar5;
      uStack_60 = plVar6;
    }
    plVar6 = uStack_60;
    if (uStack_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_60 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*uStack_60)(uStack_60);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*uStack_60 + 8))(uStack_60,1);
        }
      }
    }
  }
  if ((undefined1 *)(param_1 + 0x60) != local_40) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy((undefined1 *)(param_1 + 0x60),0);
    }
  }
  plVar6 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 142550210 FUN_142550210 body=12 status=ok
// SIG undefined FUN_142550210(void)

void FUN_142550210(longlong param_1)

{
  FUN_142376840(*(undefined8 *)(param_1 + 0x458));
  return;
}



// FUNCTION 142550220 FUN_142550220 body=188 status=ok
// SIG undefined FUN_142550220(void)

void FUN_142550220(longlong *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *local_18;
  int local_10;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar1,&local_18);
  for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
    plVar2 = (longlong *)FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xba8))(plVar2,param_2,param_3,param_4,param_5,param_6);
    }
  }
  return;
}



// FUNCTION 1425502e0 SetControllerId body=72 status=ok
// SIG undefined SetControllerId(void)

void ULocalPlayer::SetControllerId(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if (iVar1 != param_2) {
    *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
    FUN_142890290(DAT_146b17150,param_1,iVar1,param_2);
    *(int *)(param_1 + 0x108) = param_2;
  }
  return;
}



// FUNCTION 142550330 FUN_142550330 body=21 status=ok
// SIG undefined FUN_142550330(void)

void FUN_142550330(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FUN_142398ec0(*(longlong *)(param_1 + 0x458),param_2,1);
    return;
  }
  return;
}



// FUNCTION 142550350 SetIsRequestingUnloadAndRemoval body=85 status=ok
// SIG undefined SetIsRequestingUnloadAndRemoval(void)

void ULevelStreaming::SetIsRequestingUnloadAndRemoval(longlong param_1,byte param_2)

{
  char cVar1;
  
  if ((param_2 != (*(byte *)(param_1 + 0xb6) & 1)) &&
     (*(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfe | param_2, param_2 != 0)) {
    cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
      UWorld::UpdateStreamingLevelShouldBeConsidered(*(longlong *)(param_1 + 0x20),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1425503b0 SetLevelLODIndex body=81 status=ok
// SIG undefined SetLevelLODIndex(void)

void ULevelStreaming::SetLevelLODIndex(longlong param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != *(int *)(param_1 + 0xb0)) {
    *(int *)(param_1 + 0xb0) = param_2;
    if (*(char *)(param_1 + 0xb4) == '\x02') {
      *(undefined1 *)(param_1 + 0xb4) = 1;
    }
    cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
      UWorld::UpdateStreamingLevelShouldBeConsidered(*(longlong *)(param_1 + 0x20),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142550410 FUN_142550410 body=42 status=ok
// SIG undefined FUN_142550410(void)

void FUN_142550410(longlong param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x458) != 0) {
    local_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    FUN_142377550(*(longlong *)(param_1 + 0x458),&local_18,1);
  }
  return;
}



// FUNCTION 142550440 FUN_142550440 body=12 status=ok
// SIG undefined FUN_142550440(void)

void FUN_142550440(longlong param_1)

{
  FUN_1423775e0(*(undefined8 *)(param_1 + 0x468));
  return;
}



// FUNCTION 142550450 FUN_142550450 body=12 status=ok
// SIG undefined FUN_142550450(void)

void FUN_142550450(longlong param_1)

{
  FUN_142377680(*(undefined8 *)(param_1 + 0x458));
  return;
}



// FUNCTION 142550460 FUN_142550460 body=12 status=ok
// SIG undefined FUN_142550460(void)

void FUN_142550460(longlong param_1)

{
  FUN_1423776d0(*(undefined8 *)(param_1 + 0x458));
  return;
}



// FUNCTION 142550470 FUN_142550470 body=43 status=ok
// SIG undefined FUN_142550470(void)

void FUN_142550470(longlong param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  FUN_142377720(*(undefined8 *)(param_1 + 0x458),&local_18);
  return;
}



// FUNCTION 1425504a0 FUN_1425504a0 body=255 status=ok
// SIG undefined FUN_1425504a0(void)

void FUN_1425504a0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x120);
  *(longlong *)(param_1 + 0x120) = param_2;
  uVar3 = uVar6;
  uVar5 = uVar6;
  if (param_2 != 0) {
    lVar2 = UObjectBaseUtility::GetOutermost(param_2);
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x120);
  }
  *(undefined8 *)(param_1 + 0x138) = uVar3;
  FLevelStreamingGCHelper::CancelUnloadRequest(uVar5);
  bVar4 = *(byte *)(param_1 + 0xb6);
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar3 = UWorld::FindOrAddCollectionByType(uVar6,bVar4 >> 4 & 2);
  FUN_1428d4e30(uVar3,*(undefined8 *)(param_1 + 0x128));
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    bVar4 = 1;
  }
  else {
    if (*(longlong *)(lVar2 + 600) != 0) {
      FUN_1428d4e30();
      lVar2 = *(longlong *)(param_1 + 0x120);
    }
    FUN_1428c4c80(uVar3,lVar2);
    bVar4 = (*(byte *)(*(longlong *)(param_1 + 0x120) + 0x204) & 0x10 | 0x20) >> 3;
  }
  *(byte *)(param_1 + 0xb4) = bVar4;
  UWorld::UpdateStreamingLevelShouldBeConsidered(uVar6,param_1);
  return;
}



// FUNCTION 1425505a0 FUN_1425505a0 body=330 status=ok
// SIG undefined FUN_1425505a0(void)

void FUN_1425505a0(longlong param_1,int param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afcbc8) {
    _Init_thread_header(&DAT_146afcbc8);
    if (DAT_146afcbc8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
      piVar4 = (int *)0x0;
      if (plVar3 != (longlong *)0x0) {
        piVar4 = (int *)(**(code **)(*plVar3 + 0x38))(plVar3);
      }
      DAT_146afcbc0 = piVar4;
      _Init_thread_footer(&DAT_146afcbc8);
    }
  }
  if ((DAT_146afcbc0 == (int *)0x0) || (*DAT_146afcbc0 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  lVar2 = UWorld::GetWorldSettings(param_1,0,1);
  if (((bVar1) && (lVar2 != 0)) && ((*(byte *)(lVar2 + 0x4d8) & 1) == 0)) {
    if (((*(int *)(param_1 + 0x820) != param_2) &&
        ((*(int *)(param_1 + 0x820) == 0 || (param_2 == 0)))) ||
       ((*(int *)(param_1 + 0x824) != param_3 &&
        ((*(int *)(param_1 + 0x824) == 0 || (param_3 == 0)))))) {
      FUN_14175d020(param_1,0);
    }
    *(int *)(param_1 + 0x820) = param_2;
    *(int *)(param_1 + 0x824) = param_3;
    if (param_2 != 0) {
      *(undefined8 *)(param_1 + 0x788) = DAT_1468b5a78;
    }
  }
  return;
}



// FUNCTION 1425506f0 SetMaterialParameterCollectionInstanceNeedsUpdate body=8 status=ok
// SIG undefined SetMaterialParameterCollectionInstanceNeedsUpdate(void)

void UWorld::SetMaterialParameterCollectionInstanceNeedsUpdate(longlong param_1)

{
  *(byte *)(param_1 + 0x703) = *(byte *)(param_1 + 0x703) | 1;
  return;
}



// FUNCTION 142550700 FUN_142550700 body=12 status=ok
// SIG undefined FUN_142550700(void)

void FUN_142550700(longlong param_1)

{
  FUN_142376310(*(undefined8 *)(param_1 + 0x468));
  return;
}



// FUNCTION 142550710 FUN_142550710 body=87 status=ok
// SIG undefined FUN_142550710(void)

void FUN_142550710(longlong param_1,byte param_2)

{
  char cVar1;
  
  if (param_2 != (*(byte *)(param_1 + 0xb6) >> 3 & 1)) {
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xf7 | param_2 << 3;
    cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
      UWorld::UpdateStreamingLevelShouldBeConsidered(*(longlong *)(param_1 + 0x20),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142550770 SetShouldBeVisible body=87 status=ok
// SIG undefined SetShouldBeVisible(void)

void ULevelStreaming::SetShouldBeVisible(longlong param_1,byte param_2)

{
  char cVar1;
  
  if (param_2 != (*(byte *)(param_1 + 0xb6) >> 2 & 1)) {
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfb | param_2 << 2;
    cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
      UWorld::UpdateStreamingLevelShouldBeConsidered(*(longlong *)(param_1 + 0x20),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1425507d0 SetWorldAsset body=165 status=ok
// SIG undefined SetWorldAsset(void)

void ULevelStreaming::SetWorldAsset(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  cVar1 = FSoftObjectPath::operator==(param_1 + 0x38,param_2 + 4);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x28) = *param_2;
    *(undefined4 *)(param_1 + 0x2c) = param_2[1];
    *(undefined4 *)(param_1 + 0x30) = param_2[2];
    local_28 = *(undefined8 *)(param_2 + 4);
    FString::FString(local_20,param_2 + 6);
    FSoftObjectPath::operator=(param_1 + 0x38,&local_28);
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfd;
    if (*(char *)(param_1 + 0xb4) == '\x02') {
      *(undefined1 *)(param_1 + 0xb4) = 1;
    }
    cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
      UWorld::UpdateStreamingLevelShouldBeConsidered(*(longlong *)(param_1 + 0x20),param_1);
    }
  }
  return;
}



// FUNCTION 142550880 SetWorldAssetByPackageName body=439 status=ok
// SIG undefined SetWorldAssetByPackageName(void)

void ULevelStreaming::SetWorldAssetByPackageName(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res10;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_88;
  longlong local_80 [5];
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  local_res10 = param_2;
  FName::ToString(&local_res10,local_80 + 5);
  FPackageName::GetLongPackageAssetName(&local_38,local_80 + 5);
  local_80[0] = 0;
  puVar3 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar3 = local_38;
  }
  local_80[1] = 0;
  puVar2 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar2 = local_58;
  }
  local_88 = 0;
  local_90 = 0;
  FString::PrintfImpl(&local_a8,L"%s.%s",puVar2,puVar3);
  local_48 = local_a8;
  local_40 = (undefined4)local_a0;
  local_3c = local_a0._4_4_;
  local_a0 = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_a8 = 0;
  FUN_1417978e0(local_80 + 2,&local_48);
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_28 = local_80[2];
  local_98 = 0xffffffff;
  local_94 = 0;
  FString::FString(local_20,local_80 + 3);
  FSoftObjectPath::operator=(&local_88,&local_28);
  local_90 = 0;
  if (local_80[3] != 0) {
    FMemory::Free();
  }
  cVar1 = FSoftObjectPath::operator==(param_1 + 0x38,&local_88);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x28) = local_98;
    *(undefined4 *)(param_1 + 0x2c) = local_94;
    *(undefined4 *)(param_1 + 0x30) = local_90;
    local_28 = local_88;
    FString::FString(local_20,local_80);
    FSoftObjectPath::operator=(param_1 + 0x38,&local_28);
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfd;
    if (*(char *)(param_1 + 0xb4) == '\x02') {
      *(undefined1 *)(param_1 + 0xb4) = 1;
    }
    cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
      UWorld::UpdateStreamingLevelShouldBeConsidered(*(longlong *)(param_1 + 0x20),param_1);
    }
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142550a40 FUN_142550a40 body=591 status=ok
// SIG undefined FUN_142550a40(void)

void FUN_142550a40(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = *(float *)((longlong)param_1 + 0x34);
  fVar10 = fVar6 - *(float *)((longlong)param_1 + 0x44);
  lVar1 = *(longlong *)*param_1;
  fVar7 = *(float *)(lVar1 + 0x398);
  fVar8 = *(float *)(lVar1 + 0x39c);
  fVar9 = *(float *)(lVar1 + 0x3a8);
  fVar11 = *(float *)(lVar1 + 0x3ac);
  fVar2 = *(float *)(lVar1 + 0x3b8);
  fVar3 = *(float *)(lVar1 + 0x3bc);
  fVar4 = *(float *)(lVar1 + 0x3c8);
  fVar5 = *(float *)(lVar1 + 0x3cc);
  *(float *)(param_1 + 7) =
       (*(float *)(lVar1 + 0x398) * 0.0 + *(float *)(lVar1 + 0x3a8) * 0.0 +
       fVar6 * *(float *)(lVar1 + 0x3b8) + *(float *)(lVar1 + 0x3c8) * 1.0) /
       (*(float *)(lVar1 + 0x39c) * 0.0 + *(float *)(lVar1 + 0x3ac) * 0.0 +
       fVar6 * *(float *)(lVar1 + 0x3bc) + *(float *)(lVar1 + 0x3cc) * 1.0);
  fVar7 = (fVar7 * 0.0 + fVar9 * 0.0 + fVar10 * fVar2 + fVar4 * 1.0) /
          (fVar8 * 0.0 + fVar11 * 0.0 + fVar10 * fVar3 + fVar5 * 1.0);
  *(float *)((longlong)param_1 + 0x3c) = fVar7;
  lVar1 = *(longlong *)*param_1;
  fVar11 = *(float *)(lVar1 + 0x64c) * 1.0 + fVar7 * *(float *)(lVar1 + 0x63c) +
           *(float *)(lVar1 + 0x62c) * 0.0 + *(float *)(lVar1 + 0x61c) * 0.0;
  fVar8 = 1.0 / fVar11;
  fVar9 = (*(float *)(lVar1 + 0x640) * 1.0 + fVar7 * *(float *)(lVar1 + 0x630) +
          *(float *)(lVar1 + 0x620) * 0.0 + *(float *)(lVar1 + 0x610) * 0.0) * fVar8;
  fVar6 = (*(float *)(lVar1 + 0x644) * 1.0 + fVar7 * *(float *)(lVar1 + 0x634) +
          *(float *)(lVar1 + 0x624) * 0.0 + *(float *)(lVar1 + 0x614) * 0.0) * fVar8;
  fVar7 = (*(float *)(lVar1 + 0x648) * 1.0 + fVar7 * *(float *)(lVar1 + 0x638) +
          *(float *)(lVar1 + 0x628) * 0.0 + *(float *)(lVar1 + 0x618) * 0.0) * fVar8;
  fVar8 = fVar8 * fVar11;
  *(float *)(param_1 + 8) =
       (1.0 / (fVar8 * *(float *)(param_2 + 0x5cc) + fVar7 * *(float *)(param_2 + 0x5bc) +
              fVar6 * *(float *)(param_2 + 0x5ac) + fVar9 * *(float *)(param_2 + 0x59c))) *
       (fVar8 * *(float *)(param_2 + 0x5c0) + fVar7 * *(float *)(param_2 + 0x5b0) +
       fVar6 * *(float *)(param_2 + 0x5a0) + fVar9 * *(float *)(param_2 + 0x590)) * 0.5;
  return;
}



// FUNCTION 142550ca0 FUN_142550ca0 body=81 status=ok
// SIG undefined FUN_142550ca0(void)

undefined8 FUN_142550ca0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    lVar2 = param_1[4];
  }
  else {
    lVar2 = 0;
  }
  cVar1 = UWorld::IsGameWorld(lVar2);
  if ((cVar1 != '\0') && ((*(byte *)((longlong)param_1 + 0xb6) & 4) != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x280))(param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142550d00 FUN_142550d00 body=2796 status=ok
// SIG undefined FUN_142550d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142550d00(longlong param_1,longlong param_2,float *param_3,ulonglong *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  float *pfVar21;
  byte bVar22;
  uint uVar23;
  undefined2 *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar32 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auStack_238 [32];
  ulonglong local_218;
  ulonglong local_210;
  byte local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  char local_1e8;
  undefined8 local_1e0;
  float local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  ulonglong local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  float fStack_1a0;
  float fStack_19c;
  longlong local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float *local_148;
  float local_140;
  longlong local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  if ((((param_2 != 0) && ((*(uint *)(param_2 + 0xb4) >> 0x19 & 1) == 0)) &&
      ((*(uint *)(param_2 + 0xb4) & 1) == 0)) && (*(char *)(param_2 + 0x1f8) == '\0')) {
    local_1a8 = param_3;
    local_198 = param_1;
    local_138 = param_2;
    lVar17 = FUN_1428dfc70();
    lVar26 = param_2;
    do {
      if (lVar26 == lVar17) {
        if ((param_4[1] == 0) || (*(longlong *)(param_4[1] + 0x10) == param_2)) {
          if ((*(char *)(param_1 + 0x70d) != '\0') &&
             ((*(byte *)((longlong)param_4 + 0x2a) & 8) == 0)) {
            return 0;
          }
          if ((*(uint *)(param_1 + 0x830) & 0x400) != 0) {
            return 0;
          }
          if (param_3 != (float *)0x0) {
            cVar12 = FUN_140618120(param_3);
            if (cVar12 != '\0') {
              return 0;
            }
            cVar12 = FUN_140618120(param_3 + 4);
            if (cVar12 != '\0') {
              return 0;
            }
            cVar12 = FUN_140618120(param_3 + 8);
            if (cVar12 != '\0') {
              return 0;
            }
          }
        }
        else if ((*(byte *)((longlong)param_4 + 0x2a) & 2) == 0) {
          return 0;
        }
        uVar28 = param_4[4];
        if (uVar28 == 0) {
          if (param_4[2] == 0) {
            uVar28 = *(ulonglong *)(param_1 + 0x188);
          }
          else {
            uVar28 = *(ulonglong *)(param_4[2] + 0x20);
          }
        }
        uVar25 = *param_4;
        uVar19 = param_4[1];
        local_1b8 = uVar25 >> 0x20;
        local_1e0 = uVar25;
        cVar12 = UWorld::IsGameWorld(param_1);
        lVar26 = 0;
        if (((cVar12 == '\0') || (uVar19 == 0)) || ((*(uint *)(uVar19 + 8) >> 4 & 1) != 0)) {
          local_1e8 = '\0';
LAB_142550eb2:
          iVar16 = (int)uVar25;
        }
        else {
          local_1e8 = '\x01';
          iVar14 = (int)uVar25;
          if ((iVar14 == 0) && ((int)local_1b8 == 0)) {
            local_1e0 = 0;
            puVar18 = (ulonglong *)FUN_141791c20(&local_1b8,uVar28,*(undefined8 *)(uVar19 + 0x10),0)
            ;
            uVar25 = *puVar18;
            local_1e0 = uVar25;
            goto LAB_142550eb2;
          }
          iVar16 = 0;
          if (iVar14 != 0) {
            iVar16 = iVar14;
          }
        }
        if (uVar19 == 0) {
          uVar19 = UClass::GetDefaultObject<UDamageType>(param_2);
        }
        else if (((iVar16 == 0) && (local_1e0._4_4_ == 0)) &&
                ((*(uint *)(uVar19 + 8) >> 4 & 1) == 0)) {
          local_1b8 = *(ulonglong *)(uVar19 + 0x18);
          lVar17 = FName::GetComparisonNameEntry(&local_1b8);
          if (lVar17 == 0) {
            local_1c8 = (undefined2 *)0x0;
            uStack_1c0 = 10;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
            FGenericPlatformString::Memcpy(local_1c8,L"*INVALID*",0x14);
          }
          else {
            FNameEntry::GetPlainNameString(lVar17,&local_1c8);
          }
          uVar2 = *(undefined8 *)(uVar19 + 0x10);
          puVar24 = &DAT_143f3eda8;
          if ((float)uStack_1c0 != 0.0) {
            puVar24 = local_1c8;
          }
          puVar20 = (undefined8 *)FName::FName(&local_1e0,puVar24,1);
          puVar18 = (ulonglong *)FUN_141791c20(&local_148,uVar28,uVar2,*puVar20);
          uVar25 = *puVar18;
          if (local_1c8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        cVar12 = UObject::CanCreateInCurrentContext(uVar19);
        if (cVar12 == '\0') {
          return 0;
        }
        cVar12 = (char)param_4[5];
        pfVar21 = (float *)&DAT_1468b5b70;
        if (local_1a8 != (float *)0x0) {
          pfVar21 = local_1a8;
        }
        fVar43 = *pfVar21;
        fVar46 = pfVar21[1];
        fVar49 = pfVar21[2];
        fVar36 = pfVar21[3];
        local_118 = pfVar21[4];
        fStack_114 = pfVar21[5];
        fStack_110 = pfVar21[6];
        fStack_10c = pfVar21[7];
        local_108 = *(undefined8 *)(pfVar21 + 8);
        uStack_100 = *(undefined8 *)(pfVar21 + 10);
        if ((*(byte *)((longlong)param_4 + 0x2a) & 2) != 0) {
          if (cVar12 == '\x03') {
            cVar12 = '\x02';
            goto LAB_142550ff3;
          }
          if (cVar12 == '\x04') {
            cVar12 = '\x01';
            goto LAB_142550ff3;
          }
        }
        if (cVar12 == '\0') {
          cVar12 = *(char *)(uVar19 + 0x12a);
        }
LAB_142550ff3:
        local_128 = fVar43;
        fStack_124 = fVar46;
        fStack_120 = fVar49;
        fStack_11c = fVar36;
        if (cVar12 == '\x04') {
          local_1a8 = *(float **)(uVar19 + 0x168);
          fVar44 = local_118;
          fVar47 = fStack_114;
          local_1d8 = fStack_110;
          if (local_1a8 != (float *)0x0) {
            FRotator::Quaternion((longlong)local_1a8 + 0x1f8,&local_1c8);
            fVar10 = fRam0000000146afc8f8;
            fVar9 = fRam0000000146afc8f4;
            fVar8 = _DAT_146afc8f0;
            auVar30._8_8_ = uStack_100;
            auVar30._0_8_ = local_108;
            fVar50 = (float)local_108;
            fVar51 = (float)((ulonglong)local_108 >> 0x20);
            fVar5 = (float)uStack_100;
            fVar43 = *(float *)((longlong)local_1a8 + 500);
            fVar46 = *(float *)((longlong)local_1a8 + 0x1f0);
            fVar49 = *(float *)((longlong)local_1a8 + 0x1ec);
            fVar36 = *(float *)*(undefined1 (*) [12])((longlong)local_1a8 + 0x204);
            fVar44 = *(float *)((longlong)local_1a8 + 0x20c);
            fVar47 = *(float *)((longlong)local_1a8 + 0x208);
            auVar29._12_4_ = 0;
            auVar29._0_12_ = *(undefined1 (*) [12])((longlong)local_1a8 + 0x204);
            auVar30 = minps(auVar29,auVar30);
            auVar31._4_4_ = -(uint)(auVar30._4_4_ < fRam0000000146afc9c4);
            auVar31._0_4_ = -(uint)(auVar30._0_4_ < _DAT_146afc9c0);
            auVar31._8_4_ = -(uint)(auVar30._8_4_ < fRam0000000146afc9c8);
            auVar31._12_4_ = -(uint)(auVar30._12_4_ < fRam0000000146afc9cc);
            iVar14 = movmskps((int)local_1a8,auVar31);
            if (iVar14 == 0) {
              fVar49 = fVar49 * fVar50;
              fVar46 = fVar46 * fVar51;
              fVar43 = fVar43 * fVar5;
              fVar36 = fVar43 * fStack_124 - fVar46 * fStack_120;
              fVar50 = fVar49 * fStack_120 - fVar43 * local_128;
              fVar51 = fVar46 * local_128 - fVar49 * fStack_124;
              fVar36 = fVar36 + fVar36;
              fVar50 = fVar50 + fVar50;
              fVar51 = fVar51 + fVar51;
              fVar44 = (fVar51 * fStack_124 - fVar50 * fStack_120) + fStack_11c * fVar36 + fVar49 +
                       local_118;
              fVar47 = (fVar36 * fStack_120 - fVar51 * local_128) + fStack_11c * fVar50 + fVar46 +
                       fStack_114;
              local_1d8 = (fVar50 * local_128 - fVar36 * fStack_124) + fStack_11c * fVar51 + fVar43
                          + fStack_110;
              fVar43 = uStack_1c0._4_4_ * local_128 * _DAT_146afc980 + fStack_11c * (float)local_1c8
                       + (float)uStack_1c0 * fStack_124 * _DAT_146afc970 +
                       local_1c8._4_4_ * fStack_120 * _DAT_146afc960;
              fVar46 = (float)uStack_1c0 * local_128 * fRam0000000146afc984 +
                       fStack_11c * local_1c8._4_4_ +
                       uStack_1c0._4_4_ * fStack_124 * fRam0000000146afc974 +
                       (float)local_1c8 * fStack_120 * fRam0000000146afc964;
              fVar49 = local_1c8._4_4_ * local_128 * fRam0000000146afc988 +
                       fStack_11c * (float)uStack_1c0 +
                       (float)local_1c8 * fStack_124 * fRam0000000146afc978 +
                       uStack_1c0._4_4_ * fStack_120 * fRam0000000146afc968;
              fVar36 = (float)local_1c8 * local_128 * fRam0000000146afc98c +
                       fStack_11c * uStack_1c0._4_4_ +
                       local_1c8._4_4_ * fStack_124 * fRam0000000146afc97c +
                       (float)uStack_1c0 * fStack_120 * fRam0000000146afc96c;
            }
            else {
              fVar38 = fStack_124 + fStack_124;
              fVar40 = fStack_120 + fStack_120;
              fVar41 = (local_128 + local_128) * local_128;
              fVar39 = (local_128 + local_128) * fStack_11c;
              fVar58 = (fVar40 * fStack_11c + fVar38 * local_128) * fVar50;
              fVar59 = (fVar39 + fVar40 * fStack_124) * fVar51;
              fVar60 = (fVar38 * fStack_11c + fVar40 * local_128) * fVar5;
              fVar52 = fVar51 * (fVar38 * local_128 - fVar40 * fStack_11c);
              fVar53 = fVar5 * (fVar40 * fStack_124 - fVar39);
              fVar54 = fVar50 * (fVar40 * local_128 - fVar38 * fStack_11c);
              fVar39 = (float)((uint)((_DAT_146afc8f0 - (fVar40 * fStack_120 + fVar38 * fStack_124))
                                     * fVar50) & _DAT_146afc900);
              fVar40 = (float)((uint)((fRam0000000146afc8f4 - (fVar40 * fStack_120 + fVar41)) *
                                     fVar51) & uRam0000000146afc904);
              fVar33 = (float)((uint)((fRam0000000146afc8f8 - (fVar38 * fStack_124 + fVar41)) *
                                     fVar5) & uRam0000000146afc908);
              fVar35 = (float)((uint)((fRam0000000146afc8fc - (fVar41 + fVar41)) *
                                     (float)((ulonglong)uStack_100 >> 0x20)) & uRam0000000146afc90c)
              ;
              fVar41 = local_1c8._4_4_ + local_1c8._4_4_;
              fVar34 = (float)uStack_1c0 + (float)uStack_1c0;
              fVar37 = (float)local_1c8 * ((float)local_1c8 + (float)local_1c8);
              fVar38 = uStack_1c0._4_4_ * ((float)local_1c8 + (float)local_1c8);
              fVar55 = (uStack_1c0._4_4_ * fVar34 + (float)local_1c8 * fVar41) * fVar36;
              fVar56 = (fVar38 + local_1c8._4_4_ * fVar34) * fVar47;
              fVar57 = (uStack_1c0._4_4_ * fVar41 + (float)local_1c8 * fVar34) * fVar44;
              fVar42 = fVar47 * ((float)local_1c8 * fVar41 - uStack_1c0._4_4_ * fVar34);
              fVar45 = fVar44 * (local_1c8._4_4_ * fVar34 - fVar38);
              fVar48 = fVar36 * ((float)local_1c8 * fVar34 - uStack_1c0._4_4_ * fVar41);
              fVar38 = (float)((uint)((_DAT_146afc8f0 -
                                      ((float)uStack_1c0 * fVar34 + local_1c8._4_4_ * fVar41)) *
                                     fVar36) & _DAT_146afc900);
              fVar34 = (float)((uint)((fRam0000000146afc8f4 - ((float)uStack_1c0 * fVar34 + fVar37))
                                     * fVar47) & uRam0000000146afc904);
              fVar41 = (float)((uint)((fRam0000000146afc8f8 - (local_1c8._4_4_ * fVar41 + fVar37)) *
                                     fVar44) & uRam0000000146afc908);
              fVar37 = (float)((uint)((fRam0000000146afc8fc - (fVar37 + fVar37)) * 0.0) &
                              uRam0000000146afc90c);
              local_188 = fVar55 * fVar52 + fVar38 * fVar39 + fVar48 * fVar60 + fVar37 * local_118;
              fStack_184 = fVar55 * fVar40 + fVar38 * fVar58 + fVar48 * fVar53 + fVar37 * fStack_114
              ;
              fStack_180 = fVar55 * fVar59 + fVar38 * fVar54 + fVar48 * fVar33 + fVar37 * fStack_110
              ;
              fStack_17c = fVar55 * fVar35 + fVar38 * fVar35 + fVar48 * fVar35 +
                           fVar37 * fRam0000000146afc8fc;
              local_178 = fVar34 * fVar52 + fVar42 * fVar39 + fVar56 * fVar60 + fVar37 * local_118;
              fStack_174 = fVar34 * fVar40 + fVar42 * fVar58 + fVar56 * fVar53 + fVar37 * fStack_114
              ;
              fStack_170 = fVar34 * fVar59 + fVar42 * fVar54 + fVar56 * fVar33 + fVar37 * fStack_110
              ;
              fStack_16c = fVar34 * fVar35 + fVar42 * fVar35 + fVar56 * fVar35 +
                           fVar37 * fRam0000000146afc8fc;
              local_168 = fVar45 * fVar52 + fVar57 * fVar39 + fVar41 * fVar60 + fVar37 * local_118;
              fStack_164 = fVar45 * fVar40 + fVar57 * fVar58 + fVar41 * fVar53 + fVar37 * fStack_114
              ;
              fStack_160 = fVar45 * fVar59 + fVar57 * fVar54 + fVar41 * fVar33 + fVar37 * fStack_110
              ;
              fStack_15c = fVar45 * fVar35 + fVar57 * fVar35 + fVar41 * fVar35 +
                           fVar37 * fRam0000000146afc8fc;
              local_158 = fVar46 * fVar52 + fVar49 * fVar39 + fVar43 * fVar60 +
                          fRam0000000146afc8fc * local_118;
              fStack_154 = fVar46 * fVar40 + fVar49 * fVar58 + fVar43 * fVar53 +
                           fRam0000000146afc8fc * fStack_114;
              fStack_150 = fVar46 * fVar59 + fVar49 * fVar54 + fVar43 * fVar33 +
                           fRam0000000146afc8fc * fStack_110;
              fStack_14c = fVar46 * fVar35 + fVar49 * fVar35 + fVar43 * fVar35 +
                           fRam0000000146afc8fc * fRam0000000146afc8fc;
              FMatrix::RemoveScaling(&local_188);
              fVar43 = (float)(-(uint)(_DAT_146afc9c0 <= fVar36 * fVar50) &
                               (_DAT_146afc9b0 ^ (uint)fVar8) ^ _DAT_146afc9b0);
              fVar46 = (float)(-(uint)(fRam0000000146afc9c4 <= fVar47 * fVar51) &
                               (uRam0000000146afc9b4 ^ (uint)fVar9) ^ uRam0000000146afc9b4);
              fVar49 = (float)(-(uint)(fRam0000000146afc9c8 <= fVar44 * fVar5) &
                               (uRam0000000146afc9b8 ^ (uint)fVar10) ^ uRam0000000146afc9b8);
              local_188 = local_188 * fVar43;
              fStack_184 = fStack_184 * fVar43;
              fStack_180 = fStack_180 * fVar43;
              fStack_174 = fStack_174 * fVar46;
              fStack_170 = fStack_170 * fVar46;
              local_178 = local_178 * fVar46;
              fStack_164 = fStack_164 * fVar49;
              fStack_160 = fStack_160 * fVar49;
              local_168 = local_168 * fVar49;
              FQuat::FQuat(&local_1a8,&local_188);
              local_1e0 = CONCAT44(local_1e0._4_4_,0x322bcc77);
              auVar32._0_4_ = (float)local_1a8 * (float)local_1a8 + fStack_1a0 * fStack_1a0;
              auVar32._4_4_ = local_1a8._4_4_ * local_1a8._4_4_ + fStack_19c * fStack_19c;
              auVar32._8_4_ = fStack_1a0 * fStack_1a0 + (float)local_1a8 * (float)local_1a8;
              auVar32._12_4_ = fStack_19c * fStack_19c + local_1a8._4_4_ * local_1a8._4_4_;
              fVar44 = auVar32._4_4_ + auVar32._0_4_;
              fVar47 = auVar32._8_4_ + auVar32._4_4_;
              fVar50 = auVar32._12_4_ + auVar32._8_4_;
              fVar51 = auVar32._0_4_ + auVar32._12_4_;
              auVar6._4_4_ = fVar47;
              auVar6._0_4_ = fVar44;
              auVar6._8_4_ = fVar50;
              auVar6._12_4_ = fVar51;
              auVar30 = rsqrtps(auVar32,auVar6);
              fVar43 = auVar30._0_4_;
              fVar46 = auVar30._4_4_;
              fVar49 = auVar30._8_4_;
              fVar36 = auVar30._12_4_;
              fVar43 = (_DAT_146afc9a0 - fVar43 * fVar43 * _DAT_146afc9a0 * fVar44) * fVar43 +
                       fVar43;
              fVar46 = (fRam0000000146afc9a4 - fVar46 * fVar46 * fRam0000000146afc9a4 * fVar47) *
                       fVar46 + fVar46;
              fVar49 = (fRam0000000146afc9a8 - fVar49 * fVar49 * fRam0000000146afc9a8 * fVar50) *
                       fVar49 + fVar49;
              fVar36 = (fRam0000000146afc9ac - fVar36 * fVar36 * fRam0000000146afc9ac * fVar51) *
                       fVar36 + fVar36;
              fVar43 = (float)(((uint)(((_DAT_146afc9a0 - fVar43 * fVar43 * _DAT_146afc9a0 * fVar44)
                                        * fVar43 + fVar43) * (float)local_1a8) ^ _DAT_146afc990) &
                               -(uint)(1e-08 <= fVar44) ^ _DAT_146afc990);
              fVar46 = (float)(((uint)(((fRam0000000146afc9a4 -
                                        fVar46 * fVar46 * fRam0000000146afc9a4 * fVar47) * fVar46 +
                                       fVar46) * local_1a8._4_4_) ^ uRam0000000146afc994) &
                               -(uint)(1e-08 <= fVar47) ^ uRam0000000146afc994);
              fVar49 = (float)(((uint)(((fRam0000000146afc9a8 -
                                        fVar49 * fVar49 * fRam0000000146afc9a8 * fVar50) * fVar49 +
                                       fVar49) * fStack_1a0) ^ uRam0000000146afc998) &
                               -(uint)(1e-08 <= fVar50) ^ uRam0000000146afc998);
              fVar36 = (float)(((uint)(((fRam0000000146afc9ac -
                                        fVar36 * fVar36 * fRam0000000146afc9ac * fVar51) * fVar36 +
                                       fVar36) * fStack_19c) ^ uRam0000000146afc99c) &
                               -(uint)(1e-08 <= fVar51) ^ uRam0000000146afc99c);
              fVar44 = local_158;
              fVar47 = fStack_154;
              local_1d8 = fStack_150;
            }
          }
          local_1c8 = (undefined2 *)CONCAT44(fVar46,fVar43);
          uStack_1c0 = CONCAT44(fVar36,fVar49);
          FQuat::Rotator(&local_1c8,&local_148);
          local_1a8 = local_148;
          fStack_1a0 = local_140;
          local_1b8 = CONCAT44(fVar47,fVar44);
          local_1b0 = local_1d8;
          local_218 = 0;
          cVar13 = FUN_142543f80(param_1,uVar19,&local_1b8,&local_1a8);
          if (cVar13 != '\0') {
            return 0;
          }
        }
        uVar1 = *(undefined4 *)((longlong)param_4 + 0x2c);
        local_1e0 = 0;
        if (uVar25 == 0) {
          FUN_1417846f0(uVar28,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        local_1f8 = 0;
        local_200 = 0;
        local_208 = 0;
        local_218 = local_218 & 0xffffffff00000000;
        local_210 = uVar19;
        lVar17 = FUN_1417985e0(local_138,uVar28,uVar25,uVar1);
        if (local_1e8 != '\0') {
          FUN_14223d450(lVar17,uVar19);
        }
        lVar11 = local_198;
        if (DAT_1468b6150 != 0) {
          UWorld::ModifyLevel(local_198,uVar28);
        }
        iVar14 = *(int *)(uVar28 + 0xa8);
        local_1e0 = CONCAT44(local_1e0._4_4_,iVar14);
        *(int *)(uVar28 + 0xa8) = iVar14 + 1;
        if (*(int *)(uVar28 + 0xac) < iVar14 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(uVar28 + 0xa0,iVar14);
          iVar14 = (int)local_1e0;
        }
        *(longlong *)(*(longlong *)(uVar28 + 0xa0) + (longlong)iVar14 * 8) = lVar17;
        iVar14 = *(int *)(uVar28 + 0xb8);
        *(int *)(uVar28 + 0xb8) = iVar14 + 1;
        if (*(int *)(uVar28 + 0xbc) < iVar14 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(uVar28 + 0xb0,iVar14);
        }
        *(longlong *)(*(longlong *)(uVar28 + 0xb0) + (longlong)iVar14 * 8) = lVar17;
        *(char *)(lVar17 + 0x12a) = cVar12;
        bVar22 = (byte)*(undefined2 *)((longlong)param_4 + 0x2a);
        local_208 = bVar22 >> 2 & 1;
        local_210 = CONCAT71(local_210._1_7_,bVar22 >> 1) & 0xffffffffffffff01;
        local_218 = CONCAT71(local_218._1_7_,bVar22) & 0xffffffffffffff01;
        FUN_142238c90(lVar17,&local_128,param_4[2],param_4[3]);
        iVar14 = *(int *)(lVar17 + 0xc);
        if (iVar14 < (int)DAT_1469e91c4) {
          uVar23 = iVar14 >> 0x1f & 0xffff;
          uVar15 = iVar14 + uVar23;
          lVar26 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar15 >> 0x10) * 8) +
                   (longlong)(int)((uVar15 & 0xffff) - uVar23) * 0x18;
        }
        if (((*(uint *)(lVar26 + 8) >> 0x1d & 1) != 0) &&
           ((*(byte *)((longlong)param_4 + 0x2a) & 2) == 0)) {
          return 0;
        }
        FUN_1417508a0(lVar17,0);
        bVar7 = false;
        *(int *)(lVar11 + 0x3f4) = *(int *)(lVar11 + 0x3f4) + 1;
        iVar14 = *(int *)(lVar11 + 0x3f4);
        iVar16 = *(int *)(lVar11 + 1000) + -1;
        lVar27 = (longlong)iVar16;
        lVar26 = lVar11;
        if (-1 < iVar16) {
          lVar26 = lVar27 << 4;
          bVar7 = false;
          do {
            lVar3 = *(longlong *)(lVar11 + 0x3e0);
            if (((*(int *)(lVar26 + 8 + lVar3) == 0) ||
                (plVar4 = *(longlong **)(lVar26 + lVar3), plVar4 == (longlong *)0x0)) ||
               (cVar12 = (**(code **)(*plVar4 + 0x40))(plVar4,lVar17), cVar12 == '\0')) {
              bVar7 = true;
            }
            lVar26 = lVar26 + -0x10;
            lVar27 = lVar27 + -1;
          } while (-1 < lVar27);
          iVar14 = *(int *)(lVar11 + 0x3f4);
          lVar26 = local_198;
        }
        *(int *)(lVar11 + 0x3f4) = iVar14 + -1;
        if (bVar7) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                    ((longlong *)(lVar11 + 0x3e0),0);
        }
        FUN_1428c4d10(lVar26,lVar17);
        return lVar17;
      }
      lVar26 = *(longlong *)(lVar26 + 0x30);
    } while (lVar26 != 0);
  }
  return 0;
}



// FUNCTION 1425517f0 SpawnActor body=187 status=ok
// SIG undefined SpawnActor(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UWorld::SpawnActor(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [12],
                       longlong param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 local_48 [16];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_38 = _DAT_146afc8f0 & _DAT_146afc900;
  uStack_34 = uRam0000000146afc8f4 & uRam0000000146afc904;
  uStack_30 = uRam0000000146afc8f8 & uRam0000000146afc908;
  uStack_2c = uRam0000000146afc8fc & uRam0000000146afc90c;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = uRam0000000146afc8fc;
  local_48 = ZEXT816(0);
  if (param_3 != (undefined1 (*) [12])0x0) {
    local_48._12_4_ = 0;
    local_48._0_12_ = *param_3;
  }
  if (param_4 != 0) {
    puVar1 = (undefined4 *)FRotator::Quaternion(param_4,local_68);
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
  }
  FUN_142550d00(param_1,param_2,&local_58,param_5);
  return;
}



// FUNCTION 1425518b0 FUN_1425518b0 body=2079 status=ok
// SIG undefined FUN_1425518b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425518b0(undefined8 param_1,longlong *param_2,float *param_3,longlong param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar25;
  undefined1 in_XMM1 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  undefined1 auVar20 [16];
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [16];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar11 = *(longlong *)(param_4 + 8);
  if ((lVar11 == 0) && (lVar11 = param_2[0x1f], lVar11 == 0)) {
    (**(code **)(*param_2 + 0x368))(param_2);
    lVar11 = param_2[0x1f];
  }
  fVar19 = *param_3;
  fVar49 = param_3[1];
  fVar23 = param_3[2];
  fVar24 = param_3[3];
  fVar30 = param_3[4];
  fVar34 = param_3[5];
  fVar37 = param_3[6];
  fVar22 = param_3[7];
  auVar16 = *(undefined1 (*) [16])(param_3 + 8);
  fVar2 = auVar16._0_4_;
  fVar3 = auVar16._4_4_;
  fVar4 = auVar16._8_4_;
  fVar5 = auVar16._12_4_;
  lVar12 = 0;
  if (lVar11 != 0) {
    lVar12 = *(longlong *)(lVar11 + 0x168);
  }
  local_108 = fVar19;
  fStack_104 = fVar49;
  fStack_100 = fVar23;
  fStack_fc = fVar24;
  local_f8 = fVar30;
  fStack_f4 = fVar34;
  fStack_f0 = fVar37;
  fStack_ec = fVar22;
  _local_e8 = auVar16;
  if (lVar12 != 0) {
    pfVar1 = (float *)(lVar12 + 0x280);
    if (((*(float *)(lVar12 + 0x1f8) != *pfVar1) ||
        (*(float *)(lVar12 + 0x1fc) != *(float *)(lVar12 + 0x284))) ||
       (*(float *)(lVar12 + 0x200) != *(float *)(lVar12 + 0x288))) {
      local_178 = *(undefined8 *)*(undefined1 (*) [12])(lVar12 + 0x1f8);
      auVar13._12_4_ = 0;
      auVar13._0_12_ = *(undefined1 (*) [12])(lVar12 + 0x1f8);
      fVar29 = (float)DAT_146afc950;
      fVar31 = DAT_146afc950._4_4_;
      fVar35 = DAT_146afc950._8_4_;
      auVar13 = divps(auVar13,_DAT_146afc950);
      fVar38 = (float)local_178 - (float)(int)auVar13._0_4_ * fVar29;
      fVar39 = (float)((ulonglong)local_178 >> 0x20) - (float)(int)auVar13._4_4_ * fVar31;
      fVar40 = *(float *)(lVar12 + 0x200) - (float)(int)auVar13._8_4_ * fVar35;
      fVar38 = (float)(((uint)(fVar38 + fVar29) ^ (uint)fVar38) & -(uint)(0.0 <= fVar38) ^
                      (uint)(fVar38 + fVar29));
      fVar39 = (float)(((uint)(fVar39 + fVar31) ^ (uint)fVar39) & -(uint)(0.0 <= fVar39) ^
                      (uint)(fVar39 + fVar31));
      fVar40 = (float)(((uint)(fVar40 + fVar35) ^ (uint)fVar40) & -(uint)(0.0 <= fVar40) ^
                      (uint)(fVar40 + fVar35));
      uVar27 = ((uint)(fVar39 - fVar31) ^ (uint)fVar39) & -(uint)(fRam0000000146afc944 < fVar39) ^
               (uint)fVar39;
      uVar28 = ((uint)(fVar40 - fVar35) ^ (uint)fVar40) & -(uint)(fRam0000000146afc948 < fVar40) ^
               (uint)fVar40;
      uStack_170 = CONCAT44(uStack_170._4_4_,uVar28);
      in_XMM1._4_4_ = uVar27;
      in_XMM1._0_4_ = uVar27;
      in_XMM1._8_4_ = uVar27;
      in_XMM1._12_4_ = uVar27;
      *(ulonglong *)pfVar1 =
           CONCAT44(uVar27,((uint)(fVar38 - fVar29) ^ (uint)fVar38) &
                           -(uint)(_DAT_146afc940 < fVar38) ^ (uint)fVar38);
      *(uint *)(lVar12 + 0x288) = uVar28;
      puVar10 = (undefined8 *)FRotator::Quaternion(pfVar1,local_118);
      uVar6 = puVar10[1];
      *(undefined8 *)(lVar12 + 0x270) = *puVar10;
      *(undefined8 *)(lVar12 + 0x278) = uVar6;
    }
    local_178 = *(undefined8 *)(lVar12 + 0x270);
    uStack_170 = *(undefined8 *)(lVar12 + 0x278);
    local_188 = &local_178;
    local_180 = 0;
    uVar8 = FUN_14239b520(lVar12,*(undefined8 *)(lVar12 + 400),*(undefined8 *)(lVar12 + 0x198),0);
    fVar7 = fRam0000000146afc8f8;
    fVar40 = fRam0000000146afc8f4;
    fVar39 = _DAT_146afc8f0;
    auVar13 = *(undefined1 (*) [16])(lVar12 + 0x230);
    fVar29 = auVar13._0_4_;
    fVar31 = auVar13._4_4_;
    fVar35 = auVar13._8_4_;
    fVar38 = auVar13._12_4_;
    auVar14._4_4_ = -(uint)(fRam0000000146afc9e4 < (float)((uint)fVar31 & uRam0000000146afc9f4));
    auVar14._0_4_ = -(uint)(_DAT_146afc9e0 < (float)((uint)fVar29 & _DAT_146afc9f0));
    auVar14._8_4_ = -(uint)(fRam0000000146afc9e8 < (float)((uint)fVar35 & uRam0000000146afc9f8));
    auVar14._12_4_ = -(uint)(fRam0000000146afc9ec < (float)((uint)fVar38 & uRam0000000146afc9fc));
    iVar9 = movmskps(uVar8,auVar14);
    fVar47 = _DAT_1468b5b70;
    fVar48 = fRam00000001468b5b74;
    fVar50 = fRam00000001468b5b78;
    fVar51 = fRam00000001468b5b7c;
    fVar18 = _DAT_1468b5b80;
    fVar21 = fRam00000001468b5b84;
    fVar25 = fRam00000001468b5b88;
    fVar26 = fRam00000001468b5b8c;
    fVar52 = _DAT_1468b5b90;
    fVar53 = fRam00000001468b5b94;
    fVar54 = fRam00000001468b5b98;
    fVar55 = fRam00000001468b5b9c;
    if (iVar9 != 0) {
      fVar47 = *(float *)(lVar12 + 0x210) * _DAT_146afc9d0;
      fVar48 = *(float *)(lVar12 + 0x214) * fRam0000000146afc9d4;
      fVar50 = *(float *)(lVar12 + 0x218) * fRam0000000146afc9d8;
      fVar51 = *(float *)(lVar12 + 0x21c) * fRam0000000146afc9dc;
      auVar13 = rcpps(in_XMM1,auVar13);
      fVar18 = auVar13._0_4_;
      fVar21 = auVar13._4_4_;
      fVar25 = auVar13._8_4_;
      fVar26 = auVar13._12_4_;
      fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar29;
      fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar31;
      fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar35;
      fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar38;
      fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar29;
      fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar31;
      fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar35;
      fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar38;
      fVar52 = (float)(((uint)fVar18 &
                        -(uint)((float)((uint)fVar29 & _DAT_146afc9f0) <= _DAT_146afc9e0) ^
                       (uint)fVar18) & _DAT_146afc900);
      fVar53 = (float)(((uint)fVar21 &
                        -(uint)((float)((uint)fVar31 & uRam0000000146afc9f4) <= fRam0000000146afc9e4
                               ) ^ (uint)fVar21) & uRam0000000146afc904);
      fVar54 = (float)(((uint)fVar25 &
                        -(uint)((float)((uint)fVar35 & uRam0000000146afc9f8) <= fRam0000000146afc9e8
                               ) ^ (uint)fVar25) & uRam0000000146afc908);
      fVar55 = (float)(((uint)fVar26 &
                        -(uint)((float)((uint)fVar38 & uRam0000000146afc9fc) <= fRam0000000146afc9ec
                               ) ^ (uint)fVar26) & uRam0000000146afc90c);
      fVar18 = *(float *)(lVar12 + 0x220) * fVar52;
      fVar21 = *(float *)(lVar12 + 0x224) * fVar53;
      fVar25 = *(float *)(lVar12 + 0x228) * fVar54;
      fVar26 = *(float *)(lVar12 + 0x22c) * fVar55;
      fVar29 = fVar25 * fVar48 - fVar21 * fVar50;
      fVar31 = fVar18 * fVar50 - fVar25 * fVar47;
      fVar35 = fVar21 * fVar47 - fVar18 * fVar48;
      fVar38 = fVar26 * fVar51 - fVar26 * fVar51;
      fVar29 = fVar29 + fVar29;
      fVar31 = fVar31 + fVar31;
      fVar35 = fVar35 + fVar35;
      fVar38 = fVar38 + fVar38;
      fVar18 = (float)((uint)(0.0 - ((fVar35 * fVar48 - fVar31 * fVar50) + fVar51 * fVar29 + fVar18)
                             ) & _DAT_146afc900);
      fVar21 = (float)((uint)(0.0 - ((fVar29 * fVar50 - fVar35 * fVar47) + fVar51 * fVar31 + fVar21)
                             ) & uRam0000000146afc904);
      fVar25 = (float)((uint)(0.0 - ((fVar31 * fVar47 - fVar29 * fVar48) + fVar51 * fVar35 + fVar25)
                             ) & uRam0000000146afc908);
      fVar26 = (float)((uint)(0.0 - ((fVar38 * fVar51 - fVar38 * fVar51) + fVar51 * fVar38 + fVar26)
                             ) & uRam0000000146afc90c);
    }
    auVar15._4_4_ = fVar53;
    auVar15._0_4_ = fVar52;
    auVar15._8_4_ = fVar54;
    auVar15._12_4_ = fVar55;
    auVar16 = minps(auVar15,auVar16);
    auVar17._4_4_ = -(uint)(auVar16._4_4_ < fRam0000000146afc9c4);
    auVar17._0_4_ = -(uint)(auVar16._0_4_ < _DAT_146afc9c0);
    auVar17._8_4_ = -(uint)(auVar16._8_4_ < fRam0000000146afc9c8);
    auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam0000000146afc9cc);
    iVar9 = movmskps(iVar9,auVar17);
    if (iVar9 == 0) {
      fVar18 = fVar18 * fVar2;
      fVar21 = fVar21 * fVar3;
      fVar25 = fVar25 * fVar4;
      fVar26 = fVar26 * fVar5;
      local_108 = fVar51 * fVar19 * _DAT_146afc980 + fVar47 * fVar24 +
                  fVar50 * fVar49 * _DAT_146afc970 + fVar48 * fVar23 * _DAT_146afc960;
      fStack_104 = fVar50 * fVar19 * fRam0000000146afc984 + fVar48 * fVar24 +
                   fVar51 * fVar49 * fRam0000000146afc974 + fVar47 * fVar23 * fRam0000000146afc964;
      fStack_100 = fVar48 * fVar19 * fRam0000000146afc988 + fVar50 * fVar24 +
                   fVar47 * fVar49 * fRam0000000146afc978 + fVar51 * fVar23 * fRam0000000146afc968;
      fStack_fc = fVar47 * fVar19 * fRam0000000146afc98c + fVar51 * fVar24 +
                  fVar48 * fVar49 * fRam0000000146afc97c + fVar50 * fVar23 * fRam0000000146afc96c;
      fVar29 = fVar25 * fVar49 - fVar21 * fVar23;
      fVar31 = fVar18 * fVar23 - fVar25 * fVar19;
      fVar35 = fVar21 * fVar19 - fVar18 * fVar49;
      fVar38 = fVar26 * fVar24 - fVar26 * fVar24;
      fVar29 = fVar29 + fVar29;
      fVar31 = fVar31 + fVar31;
      fVar35 = fVar35 + fVar35;
      fVar38 = fVar38 + fVar38;
      local_f8 = (fVar35 * fVar49 - fVar31 * fVar23) + fVar29 * fVar24 + fVar18 + fVar30;
      fStack_f4 = (fVar29 * fVar23 - fVar35 * fVar19) + fVar31 * fVar24 + fVar21 + fVar34;
      fStack_f0 = (fVar31 * fVar19 - fVar29 * fVar49) + fVar35 * fVar24 + fVar25 + fVar37;
      fStack_ec = (fVar38 * fVar24 - fVar38 * fVar24) + fVar38 * fVar24 + fVar26 + fVar22;
    }
    else {
      fVar22 = fVar49 + fVar49;
      fVar29 = fVar23 + fVar23;
      fVar31 = (fVar19 + fVar19) * fVar19;
      fVar35 = fVar24 * (fVar19 + fVar19);
      fVar44 = (fVar24 * fVar29 + fVar19 * fVar22) * fVar2;
      fVar45 = (fVar35 + fVar49 * fVar29) * fVar3;
      fVar46 = (fVar24 * fVar22 + fVar19 * fVar29) * fVar4;
      fVar38 = fVar3 * (fVar19 * fVar22 - fVar24 * fVar29);
      fVar32 = fVar4 * (fVar49 * fVar29 - fVar35);
      fVar36 = fVar2 * (fVar19 * fVar29 - fVar24 * fVar22);
      fVar19 = (float)((uint)((_DAT_146afc8f0 - (fVar29 * fVar23 + fVar22 * fVar49)) * fVar2) &
                      _DAT_146afc900);
      fVar23 = (float)((uint)((fRam0000000146afc8f4 - (fVar29 * fVar23 + fVar31)) * fVar3) &
                      uRam0000000146afc904);
      fVar29 = (float)((uint)((fRam0000000146afc8f8 - (fVar22 * fVar49 + fVar31)) * fVar4) &
                      uRam0000000146afc908);
      fVar31 = (float)((uint)((fRam0000000146afc8fc - (fVar31 + fVar31)) * fVar5) &
                      uRam0000000146afc90c);
      fVar24 = fVar48 + fVar48;
      fVar22 = fVar50 + fVar50;
      fVar35 = fVar47 * (fVar47 + fVar47);
      fVar49 = fVar51 * (fVar47 + fVar47);
      fVar41 = (fVar51 * fVar22 + fVar47 * fVar24) * fVar52;
      fVar42 = (fVar49 + fVar48 * fVar22) * fVar53;
      fVar43 = (fVar51 * fVar24 + fVar47 * fVar22) * fVar54;
      fVar26 = fVar53 * (fVar47 * fVar24 - fVar51 * fVar22);
      fVar33 = fVar54 * (fVar48 * fVar22 - fVar49);
      fVar47 = fVar52 * (fVar47 * fVar22 - fVar51 * fVar24);
      fVar49 = (float)((uint)((_DAT_146afc8f0 - (fVar50 * fVar22 + fVar48 * fVar24)) * fVar52) &
                      _DAT_146afc900);
      fVar22 = (float)((uint)((fRam0000000146afc8f4 - (fVar50 * fVar22 + fVar35)) * fVar53) &
                      uRam0000000146afc904);
      fVar24 = (float)((uint)((fRam0000000146afc8f8 - (fVar48 * fVar24 + fVar35)) * fVar54) &
                      uRam0000000146afc908);
      fVar35 = (float)((uint)((fRam0000000146afc8fc - (fVar35 + fVar35)) * fVar55) &
                      uRam0000000146afc90c);
      local_158 = fVar41 * fVar38 + fVar49 * fVar19 + fVar47 * fVar46 + fVar35 * fVar30;
      fStack_154 = fVar41 * fVar23 + fVar49 * fVar44 + fVar47 * fVar32 + fVar35 * fVar34;
      fStack_150 = fVar41 * fVar45 + fVar49 * fVar36 + fVar47 * fVar29 + fVar35 * fVar37;
      fStack_14c = fVar41 * fVar31 + fVar49 * fVar31 + fVar47 * fVar31 +
                   fVar35 * fRam0000000146afc8fc;
      local_148 = fVar22 * fVar38 + fVar26 * fVar19 + fVar42 * fVar46 + fVar35 * fVar30;
      fStack_144 = fVar22 * fVar23 + fVar26 * fVar44 + fVar42 * fVar32 + fVar35 * fVar34;
      fStack_140 = fVar22 * fVar45 + fVar26 * fVar36 + fVar42 * fVar29 + fVar35 * fVar37;
      fStack_13c = fVar22 * fVar31 + fVar26 * fVar31 + fVar42 * fVar31 +
                   fVar35 * fRam0000000146afc8fc;
      local_138 = fVar33 * fVar38 + fVar43 * fVar19 + fVar24 * fVar46 + fVar35 * fVar30;
      fStack_134 = fVar33 * fVar23 + fVar43 * fVar44 + fVar24 * fVar32 + fVar35 * fVar34;
      fStack_130 = fVar33 * fVar45 + fVar43 * fVar36 + fVar24 * fVar29 + fVar35 * fVar37;
      fStack_12c = fVar33 * fVar31 + fVar43 * fVar31 + fVar24 * fVar31 +
                   fVar35 * fRam0000000146afc8fc;
      local_128 = fVar21 * fVar38 + fVar18 * fVar19 + fVar25 * fVar46 +
                  fRam0000000146afc8fc * fVar30;
      fStack_124 = fVar21 * fVar23 + fVar18 * fVar44 + fVar25 * fVar32 +
                   fRam0000000146afc8fc * fVar34;
      fStack_120 = fVar21 * fVar45 + fVar18 * fVar36 + fVar25 * fVar29 +
                   fRam0000000146afc8fc * fVar37;
      fStack_11c = fVar21 * fVar31 + fVar18 * fVar31 + fVar25 * fVar31 +
                   fRam0000000146afc8fc * fRam0000000146afc8fc;
      FMatrix::RemoveScaling(&local_158);
      fVar19 = (float)(-(uint)(_DAT_146afc9c0 <= fVar52 * fVar2) & (_DAT_146afc9b0 ^ (uint)fVar39) ^
                      _DAT_146afc9b0);
      fVar49 = (float)(-(uint)(fRam0000000146afc9c4 <= fVar53 * fVar3) &
                       (uRam0000000146afc9b4 ^ (uint)fVar40) ^ uRam0000000146afc9b4);
      fVar23 = (float)(-(uint)(fRam0000000146afc9c8 <= fVar54 * fVar4) &
                       (uRam0000000146afc9b8 ^ (uint)fVar7) ^ uRam0000000146afc9b8);
      local_158 = local_158 * fVar19;
      fStack_154 = fStack_154 * fVar19;
      fStack_150 = fStack_150 * fVar19;
      fStack_140 = fStack_140 * fVar49;
      fStack_144 = fStack_144 * fVar49;
      local_148 = local_148 * fVar49;
      fStack_130 = fStack_130 * fVar23;
      local_138 = local_138 * fVar23;
      fStack_134 = fStack_134 * fVar23;
      FQuat::FQuat(&local_178,&local_158);
      local_168 = 0x322bcc77;
      auVar20._0_4_ = (float)local_178 * (float)local_178 + (float)uStack_170 * (float)uStack_170;
      auVar20._4_4_ = local_178._4_4_ * local_178._4_4_ + uStack_170._4_4_ * uStack_170._4_4_;
      auVar20._8_4_ = (float)uStack_170 * (float)uStack_170 + (float)local_178 * (float)local_178;
      auVar20._12_4_ = uStack_170._4_4_ * uStack_170._4_4_ + local_178._4_4_ * local_178._4_4_;
      fVar30 = auVar20._4_4_ + auVar20._0_4_;
      fVar34 = auVar20._8_4_ + auVar20._4_4_;
      fVar37 = auVar20._12_4_ + auVar20._8_4_;
      fVar22 = auVar20._0_4_ + auVar20._12_4_;
      auVar16._4_4_ = fVar34;
      auVar16._0_4_ = fVar30;
      auVar16._8_4_ = fVar37;
      auVar16._12_4_ = fVar22;
      auVar16 = rsqrtps(auVar20,auVar16);
      fVar19 = auVar16._0_4_;
      fVar49 = auVar16._4_4_;
      fVar23 = auVar16._8_4_;
      fVar24 = auVar16._12_4_;
      fVar19 = (_DAT_146afc9a0 - fVar19 * fVar19 * fVar30 * _DAT_146afc9a0) * fVar19 + fVar19;
      fVar49 = (fRam0000000146afc9a4 - fVar49 * fVar49 * fVar34 * fRam0000000146afc9a4) * fVar49 +
               fVar49;
      fVar23 = (fRam0000000146afc9a8 - fVar23 * fVar23 * fVar37 * fRam0000000146afc9a8) * fVar23 +
               fVar23;
      fVar24 = (fRam0000000146afc9ac - fVar24 * fVar24 * fVar22 * fRam0000000146afc9ac) * fVar24 +
               fVar24;
      fStack_ec = 0.0;
      local_108 = (float)(((uint)(((_DAT_146afc9a0 - fVar19 * fVar19 * fVar30 * _DAT_146afc9a0) *
                                   fVar19 + fVar19) * (float)local_178) ^ _DAT_146afc990) &
                          -(uint)(1e-08 <= fVar30) ^ _DAT_146afc990);
      fStack_104 = (float)(((uint)(((fRam0000000146afc9a4 -
                                    fVar49 * fVar49 * fVar34 * fRam0000000146afc9a4) * fVar49 +
                                   fVar49) * local_178._4_4_) ^ uRam0000000146afc994) &
                           -(uint)(1e-08 <= fVar34) ^ uRam0000000146afc994);
      fStack_100 = (float)(((uint)(((fRam0000000146afc9a8 -
                                    fVar23 * fVar23 * fVar37 * fRam0000000146afc9a8) * fVar23 +
                                   fVar23) * (float)uStack_170) ^ uRam0000000146afc998) &
                           -(uint)(1e-08 <= fVar37) ^ uRam0000000146afc998);
      fStack_fc = (float)(((uint)(((fRam0000000146afc9ac -
                                   fVar24 * fVar24 * fVar22 * fRam0000000146afc9ac) * fVar24 +
                                  fVar24) * uStack_170._4_4_) ^ uRam0000000146afc99c) &
                          -(uint)(1e-08 <= fVar22) ^ uRam0000000146afc99c);
      local_f8 = local_128;
      fStack_f4 = fStack_124;
      fStack_f0 = fStack_120;
    }
    local_e8._4_4_ = fVar53 * fVar3;
    local_e8._0_4_ = fVar52 * fVar2;
    fStack_e0 = fVar54 * fVar4;
    fStack_dc = fVar55 * fVar5;
  }
  FUN_142550d00(param_1,param_2,&local_108,param_4);
  return;
}



// FUNCTION 1425520d0 FUN_1425520d0 body=856 status=ok
// SIG undefined FUN_1425520d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1425520d0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined1 auStack_1d8 [32];
  undefined ***local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined2 *local_198;
  int local_190;
  undefined2 *local_188;
  int local_180;
  undefined2 *local_178;
  int local_170;
  longlong local_168;
  int local_160;
  longlong local_158;
  int local_150;
  undefined **local_148 [2];
  longlong *local_138;
  longlong local_130;
  undefined1 local_120 [44];
  uint local_f4;
  undefined1 local_e8 [112];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  cVar6 = FUN_1428cfb70(param_4);
  if (cVar6 == '\0') {
    if (param_1[0x13] != 0) {
      lVar10 = FUN_1429e18b0();
      lVar9 = param_1[0x13];
      for (lVar5 = lVar9; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar10) goto LAB_142552360;
      }
    }
    lVar9 = 0;
LAB_142552360:
    FActorSpawnParameters::FActorSpawnParameters(local_120);
    local_f4 = local_f4 | 0x40;
    local_58 = _DAT_146afc8f0 & _DAT_146afc900;
    uStack_54 = uRam0000000146afc8f4 & uRam0000000146afc904;
    uStack_50 = uRam0000000146afc8f8 & uRam0000000146afc908;
    uStack_4c = uRam0000000146afc8fc & uRam0000000146afc90c;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = uRam0000000146afc8fc;
    local_68 = 0;
    uStack_60 = 0;
    lVar9 = FUN_142550d00(param_4,lVar9,&local_78,local_120);
    param_1[6] = lVar9;
    puVar8 = (undefined8 *)FUN_1428749e0(DAT_146b17150,param_4);
    puVar4 = (undefined8 *)*puVar8;
    for (puVar12 = puVar4; puVar12 != puVar4 + *(int *)(puVar8 + 1); puVar12 = puVar12 + 1) {
      if ((longlong *)*puVar12 == param_1) {
        uVar11 = (undefined1)((longlong)puVar12 - (longlong)puVar4 >> 3);
        goto LAB_1425523e3;
      }
    }
    uVar11 = 0xff;
LAB_1425523e3:
    *(undefined1 *)(param_1[6] + 0x644) = uVar11;
    *(longlong **)(param_1[6] + 0x508) = param_1;
  }
  else {
    if (*(int *)(param_2 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_2;
    }
    FUN_14289aca0(local_e8,0,puVar13,0);
    (**(code **)(*param_1 + 0x2c0))(param_1,&local_158);
    if ((local_150 != 0) && (0 < local_150 + -1)) {
      FString::PrintfImpl(&local_198,L"Name=%s",local_158);
      puVar13 = &DAT_143f3eda8;
      if (local_190 != 0) {
        puVar13 = local_198;
      }
      FURL::AddOption(local_e8,puVar13);
      if (local_198 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    uVar7 = FUN_14169f840();
    FString::PrintfImpl(&local_188,L"Hardware=%s",uVar7);
    puVar13 = &DAT_143f3eda8;
    if (local_180 != 0) {
      puVar13 = local_188;
    }
    FURL::AddOption(local_e8,puVar13);
    if (local_188 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_168);
    if ((local_160 != 0) && (0 < local_160 + -1)) {
      FString::PrintfImpl(&local_178,&DAT_1450eadc4,local_168);
      puVar13 = &DAT_143f3eda8;
      if (local_170 != 0) {
        puVar13 = local_178;
      }
      FURL::AddOption(local_e8,puVar13);
      if (local_178 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    FUN_142547b50(param_1,local_148);
    puVar8 = (undefined8 *)FUN_1428749e0(DAT_146b17150,param_4);
    puVar4 = (undefined8 *)*puVar8;
    for (puVar12 = puVar4; puVar12 != puVar4 + *(int *)(puVar8 + 1); puVar12 = puVar12 + 1) {
      if ((longlong *)*puVar12 == param_1) {
        local_1a8 = (undefined1)((longlong)puVar12 - (longlong)puVar4 >> 3);
        goto LAB_142552274;
      }
    }
    local_1a8 = 0xff;
LAB_142552274:
    local_1b8 = local_148;
    local_1b0 = param_3;
    lVar9 = FUN_142552430(param_4,param_1,1,local_e8);
    param_1[6] = lVar9;
    local_148[0] = &PTR_FUN_143f740c8;
    if (local_130 != 0) {
      FMemory::Free();
    }
    local_148[0] = &PTR_FUN_143f73d18;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_138 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)local_138 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
    if (local_168 != 0) {
      FMemory::Free();
    }
    if (local_158 != 0) {
      FMemory::Free();
    }
    FURL::~FURL(local_e8);
  }
  return param_1[6] != 0;
}



// FUNCTION 142552430 FUN_142552430 body=706 status=ok
// SIG undefined FUN_142552430(void)

longlong *
FUN_142552430(longlong param_1,undefined8 param_2,int param_3,longlong param_4,undefined8 param_5,
             undefined8 *param_6,undefined1 param_7)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  short *psVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong local_68;
  uint local_60;
  uint local_5c;
  longlong local_58;
  ulonglong local_50;
  
  plVar6 = (longlong *)0x0;
  if ((undefined *)*param_6 != &DAT_1450e9bfc) {
    *(undefined4 *)(param_6 + 1) = 0;
    plVar3 = plVar6;
    if (*(int *)((longlong)param_6 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_6);
      plVar3 = (longlong *)(ulonglong)*(uint *)(param_6 + 1);
    }
    *(int *)(param_6 + 1) = (int)plVar3;
    if (*(int *)((longlong)param_6 + 0xc) < (int)plVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_6);
    }
  }
  local_60 = 0;
  local_5c = 0;
  local_68 = 0;
  plVar3 = plVar6;
  plVar2 = plVar6;
  plVar8 = plVar6;
  plVar10 = plVar6;
  if (0 < *(int *)(param_4 + 0x50)) {
    while( true ) {
      iVar1 = (int)plVar2;
      iVar4 = iVar1 + -1;
      if (iVar1 < 1) {
        iVar4 = 0;
      }
      local_60 = (iVar1 < 1) + 1 + iVar1;
      if ((int)plVar3 < (int)local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
      }
      uVar9 = local_60;
      *(undefined2 *)(local_68 + (longlong)iVar4 * 2) = 0x3f;
      *(undefined2 *)(local_68 + 2 + (longlong)iVar4 * 2) = 0;
      iVar1 = *(int *)(*(longlong *)(param_4 + 0x48) + 8 + (longlong)plVar8);
      _Src = *(void **)(*(longlong *)(param_4 + 0x48) + (longlong)plVar8);
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      if (iVar4 != 0) {
        lVar5 = (longlong)(int)local_60;
        local_60 = (local_60 == 0) + local_60 + iVar4;
        if ((int)local_5c < (int)local_60) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar9);
        }
        _Dst = (void *)(local_68 + (lVar5 - (ulonglong)(uVar9 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
        *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
      }
      uVar9 = (int)plVar10 + 1;
      if (*(int *)(param_4 + 0x50) <= (int)uVar9) break;
      plVar3 = (longlong *)(ulonglong)local_5c;
      plVar2 = (longlong *)(ulonglong)local_60;
      plVar8 = plVar8 + 2;
      plVar10 = (longlong *)(ulonglong)uVar9;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x140);
  if (plVar3 != (longlong *)0x0) {
    if (*(int *)(param_4 + 0x60) == 0) {
      psVar7 = &DAT_143f3eda8;
    }
    else {
      psVar7 = *(short **)(param_4 + 0x58);
    }
    local_50 = 0;
    local_58 = 0;
    if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (psVar7[lVar5] != 0);
      uVar9 = (int)lVar5 + 1;
      local_50 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      }
      FGenericPlatformString::Memcpy(local_58,psVar7,(longlong)(int)uVar9 * 2);
    }
    plVar2 = (longlong *)
             (**(code **)(*plVar3 + 0x808))
                       (plVar3,param_2,param_3,&local_58,&local_68,param_5,param_6);
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (plVar2 != (longlong *)0x0) {
      *(undefined1 *)((longlong)plVar2 + 0x644) = param_7;
      *(undefined1 *)(plVar2 + 0x25) = 3;
      FUN_14223ef90(plVar2,param_3 != 0);
      if (param_3 == 2) {
        FUN_14223d640(plVar2,1);
      }
      (**(code **)(*plVar2 + 0xd18))(plVar2,param_2);
      (**(code **)(*plVar3 + 0x810))(plVar3,plVar2);
      plVar6 = plVar2;
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return plVar6;
}



// FUNCTION 142552700 FUN_142552700 body=4810 status=ok
// SIG undefined FUN_142552700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142552700(longlong param_1,int param_2,float param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  DWORD DVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  LARGE_INTEGER LVar14;
  DWORD *pDVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte bVar18;
  void *_Dst;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  uint *puVar29;
  int iVar30;
  bool bVar31;
  float fVar32;
  undefined1 local_res8 [8];
  char local_res10;
  char local_res18;
  ulonglong local_res20;
  longlong *in_stack_fffffffffffffdf8;
  undefined4 uVar33;
  LARGE_INTEGER local_1f8;
  int local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  char local_1c0;
  undefined8 local_1b8;
  LARGE_INTEGER local_1b0;
  undefined8 local_1a8;
  ulonglong local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  uint *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  int local_168;
  uint uStack_164;
  uint *puStack_160;
  undefined4 local_158;
  uint uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  int local_140;
  int local_138;
  int local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  longlong *local_118;
  undefined8 uStack_110;
  uint *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined1 *puStack_d0;
  undefined1 local_c8 [16];
  longlong *local_b8;
  undefined8 uStack_b0;
  uint *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong *local_90;
  undefined8 uStack_88;
  uint *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  uVar33 = DAT_1468e3590;
  local_198 = DAT_1468e3590;
  uVar12 = FUN_14168db40();
  FCsvProfiler::BeginStat(uVar12,"UWorld_Tick",uVar33);
  local_130 = FUN_142540cf0();
  bVar31 = false;
  DAT_146535714 = DAT_146535714 + 1;
  lVar25 = (longlong)(DAT_146535708 + -1);
  if (-1 < DAT_146535708 + -1) {
    lVar21 = lVar25 << 4;
    do {
      if (((*(int *)(lVar21 + 8 + DAT_146535700) == 0) ||
          (plVar13 = *(longlong **)(lVar21 + DAT_146535700), plVar13 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar13 + 0x40))(plVar13,param_2,param_3), cVar6 == '\0')) {
        bVar31 = true;
      }
      lVar21 = lVar21 + -0x10;
      lVar25 = lVar25 + -1;
    } while (-1 < lVar25);
  }
  iVar9 = DAT_146535708;
  DAT_146535714 = DAT_146535714 + -1;
  if ((bVar31) && (DAT_146535714 < 1)) {
    iVar23 = 0;
    if (0 < DAT_146535708) {
      lVar25 = 0;
      do {
        if (((*(int *)(lVar25 + 8 + DAT_146535700) == 0) ||
            (*(longlong **)(lVar25 + DAT_146535700) == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(**(longlong **)(lVar25 + DAT_146535700) + 0x10))(), cVar6 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146535700,iVar23,1,1);
        }
        else {
          iVar23 = iVar23 + 1;
          lVar25 = lVar25 + 0x10;
        }
      } while (iVar23 < DAT_146535708);
    }
    _DAT_146535710 = DAT_146535708 * 2;
    if (_DAT_146535710 < 3) {
      _DAT_146535710 = 2;
    }
    if ((_DAT_146535710 < iVar9) && (DAT_14653570c != DAT_146535708)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146535700);
    }
  }
  FInGamePerformanceTracker::Tick(*(undefined8 *)(param_1 + 0x838));
  FInGamePerformanceTracker::Tick(*(longlong *)(param_1 + 0x838) + 0x60);
  plVar13 = (longlong *)DAT_146b17150[0x159];
  if (plVar13 != (longlong *)0x0) {
    lVar25 = *plVar13;
    uVar12 = FUN_142876210(DAT_146b17150,param_1);
    (**(code **)(lVar25 + 0x108))(plVar13,uVar12);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afcbf0) && (_Init_thread_header(&DAT_146afcbf0), DAT_146afcbf0 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146afcbe8 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GbxCoreStat.PauseGCWhileBenchmarking")
    ;
    _Init_thread_footer(&DAT_146afcbf0);
  }
  if ((DAT_146afcbe8 == (longlong *)0x0) ||
     (iVar9 = (**(code **)(*DAT_146afcbe8 + 0x68))(), iVar9 != 1)) {
    bVar31 = false;
  }
  else {
    bVar31 = true;
  }
  cVar6 = FUN_1415ad5c0();
  if ((cVar6 == '\0') || (!bVar31)) {
    bVar31 = false;
  }
  else {
    bVar31 = true;
  }
  if ((DAT_146b17150 != (longlong *)0x0) && (bVar31)) {
    Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::
    NewProp_bHasRegisteredComponentTemplate_SetBit();
  }
  plVar13 = (longlong *)UWorld::GetWorldSettings(param_1,0,1);
  local_res8[0] = 0;
  puStack_e0 = local_res8;
  local_e8 = &DAT_14060d670;
  local_d8 = 0x4060d670;
  uStack_d4 = 1;
  puStack_d0 = puStack_e0;
  lVar25 = FUN_1415d8310(&local_d8,&DAT_146216a38);
  local_1d8 = (undefined8 *)(lVar25 + 0x18);
  local_1d0 = *local_1d8;
  local_1c8 = *(longlong *)(lVar25 + 0x28);
  local_1c0 = '\0';
  local_1b8 = *(undefined8 *)(lVar25 + 0x30);
  *(undefined8 ***)(lVar25 + 0x30) = &local_1d8;
  *(int *)(lVar25 + 0x38) = *(int *)(lVar25 + 0x38) + 1;
  AK::MemoryMgr::StartProfileThreadUsage((long)&local_1d8);
  *(undefined1 *)(param_1 + 0x5e0) = 1;
  cVar6 = FUN_14254a160(param_1);
  uVar33 = DAT_1468e3590;
  local_res18 = cVar6;
  uVar12 = FUN_14168db40();
  FCsvProfiler::BeginStat(uVar12,"NetWorldTickTime",uVar33);
  TBaseMulticastDelegate<void,float>::Broadcast(param_1 + 0x500,param_3);
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x90) != 0)) {
    FUN_142553a40(param_1,param_3);
  }
  uVar12 = FUN_14168db40();
  FCsvProfiler::EndStat(uVar12,"NetWorldTickTime",uVar33);
  *(float *)(param_1 + 0x798) = param_3 + *(float *)(param_1 + 0x798);
  *(double *)(param_1 + 0x7a8) = (double)param_3 + *(double *)(param_1 + 0x7a8);
  if (cVar6 == '\0') {
    *(float *)(param_1 + 0x79c) = param_3 + *(float *)(param_1 + 0x79c);
  }
  fVar32 = (float)(**(code **)(*plVar13 + 0x6f8))
                            (plVar13,param_3 * *(float *)((longlong)plVar13 + 0x5e4) *
                                               *(float *)(plVar13 + 0xbc) *
                                               *(float *)(plVar13 + 0xbd),param_3);
  *(float *)(param_1 + 0x7b0) = fVar32;
  *(float *)(param_1 + 0x794) = fVar32 + *(float *)(param_1 + 0x794);
  if (cVar6 == '\0') {
    *(double *)(param_1 + 0x7a0) = (double)fVar32 + *(double *)(param_1 + 0x7a0);
    *(float *)(param_1 + 0x790) = fVar32 + *(float *)(param_1 + 0x790);
    bVar31 = false;
    if ((*(byte *)(param_1 + 0x830) & 0x80) == 0) {
      *(float *)(param_1 + 0x8c8) = fVar32 + *(float *)(param_1 + 0x8c8);
      goto LAB_142552af0;
    }
  }
  else {
LAB_142552af0:
    bVar31 = (*(byte *)(param_1 + 0x830) & 0x80) == 0;
  }
  iVar9 = 1;
  if (bVar31) {
    iVar9 = param_2;
  }
  local_res20 = CONCAT44(local_res20._4_4_,iVar9);
  if ((*(byte *)(plVar13 + 0xc1) & 3) == 0) {
    cVar7 = UWorld::IsInSeamlessTravel(param_1);
    if (cVar7 != '\0') goto LAB_142552b1d;
  }
  else {
LAB_142552b1d:
    ProcessAsyncLoading(1,1,DAT_146531e98 * 0.001);
  }
  if (((*(int *)(param_1 + 0x7bc) == *(int *)(param_1 + 0x7c8)) &&
      (*(int *)(param_1 + 0x7c0) == *(int *)(param_1 + 0x7cc))) &&
     (*(int *)(param_1 + 0x7c4) == *(int *)(param_1 + 2000))) {
    *(undefined8 *)(param_1 + 0x7d4) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x7dc) = DAT_1468b5d98;
  }
  else {
    local_128 = *(undefined8 *)(param_1 + 0x7c8);
    local_120 = *(undefined4 *)(param_1 + 2000);
    FUN_1428d7c00(param_1,&local_128);
  }
  if (((iVar9 == 0) || (cVar6 != '\0')) ||
     ((*(longlong *)(param_1 + 0x38) != 0 &&
      ((lVar25 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x90), lVar25 != 0 &&
       (*(int *)(lVar25 + 300) != 3)))))) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  local_res10 = cVar7;
  (**(code **)(*DAT_146b17150 + 0x4f8))();
  if (*(longlong *)(param_1 + 400) == 0) {
    LVar14.QuadPart = param_1 + 0x400;
  }
  else {
    LVar14 = (LARGE_INTEGER)((LARGE_INTEGER *)(*(longlong *)(param_1 + 400) + 0x98))->QuadPart;
  }
  uVar26 = 0;
  *(undefined4 *)(LVar14.QuadPart + 0x58) = 0;
  local_1b0 = LVar14;
  if (0x7fffffff < *(uint *)(LVar14.QuadPart + 0x5c)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(LVar14.QuadPart + 0x50,0);
  }
  *(undefined4 *)(LVar14.QuadPart + 0x80) = 0xffffffff;
  *(undefined4 *)(LVar14.QuadPart + 0x84) = 0;
  iVar23 = *(int *)(LVar14.QuadPart + 0x78) + 0x1f;
  _Dst = *(void **)(LVar14.QuadPart + 0x70);
  if (*(void **)(LVar14.QuadPart + 0x70) == (void *)0x0) {
    _Dst = (void *)(LVar14.QuadPart + 0x60);
  }
  _guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar23 + (iVar23 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(LVar14.QuadPart + 0x78) = 0;
  if (0 < (int)*(uint *)(LVar14.QuadPart + 0x98)) {
    uVar28 = (ulonglong)*(uint *)(LVar14.QuadPart + 0x98);
    do {
      uVar20 = (longlong)*(int *)(LVar14.QuadPart + 0x98) - 1U & uVar26;
      lVar25 = *(longlong *)(LVar14.QuadPart + 0x90);
      if (*(longlong *)(LVar14.QuadPart + 0x90) == 0) {
        lVar25 = LVar14.QuadPart + 0x88;
      }
      uVar26 = uVar26 + 1;
      *(undefined4 *)(lVar25 + uVar20 * 4) = 0xffffffff;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
  if (cVar7 != '\0') {
    FUN_14234cc20(param_1);
  }
  local_1f0 = 0;
  local_1a0 = CONCAT44(local_1a0._4_4_,0x20);
  if (0 < *(int *)(param_1 + 0x178)) {
    local_1f8.QuadPart = 0;
    do {
      uStack_164 = 1;
      plVar13 = (longlong *)(*(longlong *)(param_1 + 0x170) + 0x28 + local_1f8.QuadPart);
      local_1a8 = CONCAT44(local_1a8._4_4_,
                           *(undefined4 *)(*(longlong *)(param_1 + 0x170) + local_1f8.QuadPart));
      local_1e8 = 0;
      local_1e0 = 0;
      uVar11 = *(uint *)(plVar13 + 5);
      local_168 = 0;
      puVar1 = (uint *)(plVar13 + 2);
      uStack_154 = 0;
      iStack_150 = 0;
      if (uVar11 != 0) {
        puVar29 = (uint *)plVar13[4];
        if ((uint *)plVar13[4] == (uint *)0x0) {
          puVar29 = puVar1;
        }
        uVar5 = *puVar29;
        iStack_150 = 0;
        local_168 = 0;
        while (uVar5 == 0) {
          lVar25 = (longlong)local_168;
          iStack_150 = iStack_150 + 0x20;
          iVar9 = local_168 + 1;
          bVar31 = (int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_168;
          local_168 = iVar9;
          if (bVar31) goto LAB_142552dbf;
          uVar5 = puVar29[lVar25 + 1];
        }
        uStack_164 = -uVar5 & uVar5;
        local_138 = 0x1f;
        if (uStack_164 != 0) {
          for (; uStack_164 >> local_138 == 0; local_138 = local_138 + -1) {
          }
        }
        if (uStack_164 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - local_138;
        }
        uStack_154 = (iStack_150 - iVar9) + 0x1f;
        if ((int)uVar11 < (int)uStack_154) {
LAB_142552dbf:
          uStack_154 = uVar11;
        }
      }
      local_158 = 0xffffffff;
      uVar5 = *(uint *)(plVar13 + 5);
      uStack_110 = CONCAT44(uStack_164,local_168);
      uStack_100 = CONCAT44(uStack_154,0xffffffff);
      uStack_170 = CONCAT44(uStack_14c,iStack_150);
      bVar18 = (byte)uVar5 & 0x1f;
      iVar9 = (int)uVar5 >> 5;
      uVar24 = -1 << bVar18;
      uVar27 = uVar5 & 0xffffffe0;
      local_190 = CONCAT44(1 << bVar18,iVar9);
      uStack_180 = CONCAT44(uVar5,uVar24);
      uStack_178 = CONCAT44(uStack_154,uVar5) & 0xffffffffffffffe0;
      if (uVar5 != uVar11) {
        puVar29 = (uint *)plVar13[4];
        if ((uint *)plVar13[4] == (uint *)0x0) {
          puVar29 = puVar1;
        }
        uVar24 = puVar29[iVar9] & uVar24;
        while (uVar24 == 0) {
          uVar27 = uVar27 + 0x20;
          uStack_178._4_4_ = (undefined4)(uStack_178 >> 0x20);
          uStack_178 = CONCAT44(uStack_178._4_4_,uVar27);
          uVar26 = (ulonglong)local_190 >> 0x20;
          local_190 = CONCAT44((int)uVar26,iVar9 + 1);
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
          goto LAB_142552eb3;
          uVar24 = puVar29[(longlong)iVar9 + 1];
          uStack_180 = 0xffffffff;
          iVar9 = iVar9 + 1;
        }
        uVar24 = -uVar24 & uVar24;
        local_134 = 0x1f;
        if (uVar24 != 0) {
          for (; uVar24 >> local_134 == 0; local_134 = local_134 + -1) {
          }
        }
        local_190 = CONCAT44(uVar24,(undefined4)local_190);
        if (uVar24 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - local_134;
        }
        iVar9 = (uVar27 - iVar9) + 0x1f;
        uStack_180 = CONCAT44(iVar9,(undefined4)uStack_180);
        if ((int)uVar11 < iVar9) {
LAB_142552eb3:
          uStack_180 = CONCAT44(uVar11,(undefined4)uStack_180);
        }
      }
      iVar9 = uStack_180._4_4_;
      uStack_a0 = (undefined4)uStack_180;
      iStack_9c = uStack_180._4_4_;
      uStack_98 = (undefined4)uStack_178;
      uStack_94 = uStack_178._4_4_;
      uStack_b0 = local_190;
      uStack_78 = uStack_180;
      uStack_88 = local_190;
      local_70 = (undefined4)uStack_178;
      uStack_6c = uStack_178._4_4_;
      iVar23 = 0;
      puStack_188 = puVar1;
      puStack_160 = puVar1;
      local_118 = plVar13;
      local_108 = puVar1;
      local_f8 = uStack_170;
      local_b8 = plVar13;
      puStack_a8 = puVar1;
      local_90 = plVar13;
      local_80 = puVar1;
      iVar30 = 0;
      while( true ) {
        if (((uStack_100._4_4_ == iVar9) && (local_108 == puVar1)) && (local_118 == plVar13)) break;
        lVar25 = *(longlong *)(*local_118 + (longlong)uStack_100._4_4_ * 0x10);
        plVar19 = *(longlong **)(param_1 + 0x160);
        plVar4 = plVar19 + *(int *)(param_1 + 0x168);
        for (; plVar19 != plVar4; plVar19 = plVar19 + 1) {
          if (*plVar19 == lVar25) {
            local_1e0 = CONCAT44(local_1e0._4_4_,iVar30 + 1);
            if (iVar23 < iVar30 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1e8,iVar30);
            }
            *(longlong *)(local_1e8 + (longlong)iVar30 * 8) = lVar25;
            break;
          }
        }
        uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_100 & ~uStack_110._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_110);
        iVar23 = local_1e0._4_4_;
        iVar30 = (int)local_1e0;
      }
      FScopedLevelCollectionContextSwitch::FScopedLevelCollectionContextSwitch(local_c8,local_1f0);
      cVar6 = local_res18;
      cVar7 = local_res10;
      if (local_res10 == '\0') {
        if (local_res18 == '\0') {
          iVar9 = (int)local_res20;
        }
        else {
          plVar13 = (longlong *)thunk_FUN_142873fe0();
          in_stack_fffffffffffffdf8 = &local_1e8;
          (**(code **)(*plVar13 + 0x20))(plVar13,param_1,fVar32,3,in_stack_fffffffffffffdf8);
          uVar26 = local_res20;
          iVar9 = (int)local_res20;
          if ((int)local_1a8 == 0) {
            uVar28 = (ulonglong)in_stack_fffffffffffffdf8 & 0xffffffff00000000;
            FUN_142553c00(param_1,(int)local_res20,1,fVar32,uVar28);
            uVar12 = CONCAT44((int)(uVar28 >> 0x20),1);
            FUN_142553c00(param_1,uVar26 & 0xffffffff,1,fVar32,uVar12);
            uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),2);
            FUN_142553c00(param_1,iVar9,1,fVar32,uVar12);
            uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),3);
            FUN_142553c00(param_1,uVar26 & 0xffffffff,1,fVar32,uVar12);
            in_stack_fffffffffffffdf8 = (longlong *)CONCAT44((int)((ulonglong)uVar12 >> 0x20),4);
            FUN_142553c00(param_1,uVar26 & 0xffffffff,1,fVar32,in_stack_fffffffffffffdf8);
          }
        }
      }
      else {
        FUN_1426ebd80(param_1,fVar32);
        *(undefined4 *)(param_1 + 0x5e4) = 0;
        plVar13 = (longlong *)thunk_FUN_142873fe0();
        uVar26 = local_res20;
        iVar9 = (int)local_res20;
        in_stack_fffffffffffffdf8 = &local_1e8;
        (**(code **)(*plVar13 + 0x18))
                  (plVar13,param_1,fVar32,(int)local_res20,in_stack_fffffffffffffdf8);
        iVar23 = (int)local_1a8;
        _DAT_1468b0290 = 0;
        if ((int)local_1a8 == 0) {
          in_stack_fffffffffffffdf8 =
               (longlong *)((ulonglong)in_stack_fffffffffffffdf8 & 0xffffffff00000000);
          FUN_142553c00(param_1,uVar26 & 0xffffffff,0,fVar32,in_stack_fffffffffffffdf8);
        }
        plVar13 = (longlong *)thunk_FUN_142873fe0();
        (**(code **)(*plVar13 + 0x28))(plVar13,0,1);
        *(int *)(param_1 + 0x5e4) = *(int *)(param_1 + 0x5e4) + 1;
        *(undefined1 *)(param_1 + 0x5e0) = 0;
        UWorld::EnsureCollisionTreeIsBuilt(param_1);
        *(undefined1 *)(param_1 + 0x5e0) = 1;
        if (iVar23 == 0) {
          in_stack_fffffffffffffdf8 =
               (longlong *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20),1);
          FUN_142553c00(param_1,uVar26 & 0xffffffff,0,fVar32,in_stack_fffffffffffffdf8);
        }
        plVar13 = (longlong *)thunk_FUN_142873fe0();
        (**(code **)(*plVar13 + 0x28))(plVar13,1,1);
        *(int *)(param_1 + 0x5e4) = *(int *)(param_1 + 0x5e4) + 1;
        _DAT_1468b0290 = 2;
        if (iVar23 == 0) {
          in_stack_fffffffffffffdf8 =
               (longlong *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20),2);
          FUN_142553c00(param_1,uVar26 & 0xffffffff,0,fVar32,in_stack_fffffffffffffdf8);
        }
        plVar13 = (longlong *)thunk_FUN_142873fe0();
        (**(code **)(*plVar13 + 0x28))(plVar13,2,0);
        *(undefined4 *)(param_1 + 0x5e4) = 3;
        _DAT_1468b0290 = 3;
        if (iVar23 == 0) {
          in_stack_fffffffffffffdf8 =
               (longlong *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20),3);
          FUN_142553c00(param_1,uVar26 & 0xffffffff,0,fVar32,in_stack_fffffffffffffdf8);
        }
        plVar13 = (longlong *)thunk_FUN_142873fe0();
        (**(code **)(*plVar13 + 0x28))(plVar13,3,1);
        *(int *)(param_1 + 0x5e4) = *(int *)(param_1 + 0x5e4) + 1;
        _DAT_1468b0290 = 4;
        if (iVar23 == 0) {
          in_stack_fffffffffffffdf8 =
               (longlong *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20),4);
          FUN_142553c00(param_1,uVar26 & 0xffffffff,0,fVar32,in_stack_fffffffffffffdf8);
        }
        plVar13 = (longlong *)thunk_FUN_142873fe0();
        (**(code **)(*plVar13 + 0x28))(plVar13,4);
        *(int *)(param_1 + 0x5e4) = *(int *)(param_1 + 0x5e4) + 1;
        cVar6 = local_res18;
      }
      uVar33 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
      if (*(int *)(local_1f8.QuadPart + *(longlong *)(param_1 + 0x170)) == 0) {
        if ((cVar6 == '\0') && ((*(byte *)(param_1 + 0x830) & 0x80) == 0)) {
          FUN_1425328c0(local_1b0.QuadPart,0,fVar32);
        }
        if (iVar9 != 0) {
          if (cVar6 == '\0') {
            uVar12 = UWorld::GetTimerManager(param_1);
            FUN_1428909d0(uVar12,fVar32);
          }
          lVar25 = FUN_142547ae0(param_1);
          if (lVar25 != 0) {
            FUN_1428909d0(lVar25,fVar32);
          }
        }
        in_stack_fffffffffffffdf8 = (longlong *)CONCAT44(uVar33,8);
        FUN_142553c00(param_1,iVar9,cVar6,fVar32,in_stack_fffffffffffffdf8);
        UWorld::GetPlayerControllerIterator(param_1,&local_148);
        while ((-1 < local_140 && (local_140 < (int)local_148[1]))) {
          plVar13 = (longlong *)FWeakObjectPtr::Get(*local_148 + (longlong)local_140 * 8);
          if (plVar13 == (longlong *)0x0) goto LAB_142553329;
          if (cVar6 == '\0') {
LAB_14255331a:
            (**(code **)(*plVar13 + 0xde8))(plVar13,fVar32);
LAB_142553329:
            local_140 = local_140 + 1;
          }
          else {
            cVar8 = (**(code **)(*plVar13 + 0xe10))(plVar13);
            if (cVar8 != '\0') goto LAB_14255331a;
            if (plVar13[0xa5] == 0) goto LAB_142553329;
            cVar8 = FUN_1422f4570(param_1);
            if (cVar8 == '\0') goto LAB_142553329;
            FUN_1426f0600(plVar13[0xa5]);
            local_140 = local_140 + 1;
          }
        }
        uVar12 = FUN_1424c8610();
        FUN_1424d8600(uVar12,param_1);
        if (cVar6 == '\0') {
          cVar8 = UWorld::IsGameWorld(param_1);
          if (cVar8 != '\0') {
            FUN_14254c1e0(param_1,0);
            if (*(longlong *)(param_1 + 0x7e0) != 0) {
              FUN_1428dbe10();
            }
          }
        }
      }
      LVar14 = local_1f8;
      if (cVar7 != '\0') {
        _DAT_1468b0290 = 5;
        plVar13 = (longlong *)thunk_FUN_142873fe0();
        (**(code **)(*plVar13 + 0x28))(plVar13,5,1);
        *(int *)(param_1 + 0x5e4) = *(int *)(param_1 + 0x5e4) + 1;
        _DAT_1468b0290 = 6;
        plVar13 = (longlong *)thunk_FUN_142873fe0();
        (**(code **)(*plVar13 + 0x28))(plVar13,6);
        *(int *)(param_1 + 0x5e4) = *(int *)(param_1 + 0x5e4) + 1;
        plVar13 = (longlong *)thunk_FUN_142873fe0();
        (**(code **)(*plVar13 + 0x30))(plVar13);
      }
      FScopedLevelCollectionContextSwitch::~FScopedLevelCollectionContextSwitch(local_c8);
      if (local_1e8 != 0) {
        FMemory::Free();
      }
      local_1f8.QuadPart = LVar14.QuadPart + 0x80;
      local_1f0 = local_1f0 + 1;
    } while (local_1f0 < *(int *)(param_1 + 0x178));
  }
  lVar25 = 0x1f;
  if (cVar7 != '\0') {
    bVar31 = false;
    DAT_14653572c = DAT_14653572c + 1;
    lVar21 = (longlong)(DAT_146535720 + -1);
    if (-1 < DAT_146535720 + -1) {
      lVar22 = lVar21 << 4;
      bVar31 = false;
      do {
        if ((*(int *)(lVar22 + 8 + DAT_146535718) == 0) ||
           (plVar13 = *(longlong **)(lVar22 + DAT_146535718), plVar13 == (longlong *)0x0)) {
LAB_14255347a:
          bVar31 = true;
        }
        else {
          cVar7 = (**(code **)(*plVar13 + 0x40))(plVar13,param_1,iVar9,fVar32);
          if (cVar7 == '\0') goto LAB_14255347a;
        }
        lVar22 = lVar22 + -0x10;
        lVar21 = lVar21 + -1;
      } while (-1 < lVar21);
    }
    iVar9 = DAT_146535720;
    DAT_14653572c = DAT_14653572c + -1;
    if ((bVar31) && (DAT_14653572c < 1)) {
      iVar23 = 0;
      if (0 < DAT_146535720) {
        lVar21 = 0;
        do {
          if ((*(int *)(lVar21 + 8 + DAT_146535718) == 0) ||
             (*(longlong **)(lVar21 + DAT_146535718) == (longlong *)0x0)) {
LAB_1425534e9:
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146535718,iVar23,1,1);
          }
          else {
            cVar7 = (**(code **)(**(longlong **)(lVar21 + DAT_146535718) + 0x10))();
            if (cVar7 != '\0') goto LAB_1425534e9;
            iVar23 = iVar23 + 1;
            lVar21 = lVar21 + 0x10;
          }
        } while (iVar23 < DAT_146535720);
      }
      _DAT_146535728 = DAT_146535720 * 2;
      if (_DAT_146535728 < 3) {
        _DAT_146535728 = 2;
      }
      if ((_DAT_146535728 < iVar9) && (DAT_146535724 != DAT_146535720)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146535718);
      }
    }
    if (*(longlong *)(param_1 + 0x218) != 0) {
      FPhysCommandHandler::Flush(DAT_146b08410);
    }
    UWorld::FinishAsyncTrace(param_1);
  }
  uVar33 = DAT_1468e3590;
  uVar12 = FUN_14168db40();
  FCsvProfiler::BeginStat(uVar12,"NetBroadcastTickTime",uVar33);
  TBaseMulticastDelegate<void,float>::Broadcast(param_1 + 0x518,param_3);
  uVar12 = FUN_14168db40();
  FCsvProfiler::EndStat(uVar12,"NetBroadcastTickTime",uVar33);
  uVar33 = DAT_1468e3590;
  uVar12 = FUN_14168db40();
  FCsvProfiler::BeginStat(uVar12,"NetBroadcastPostTickTime",uVar33);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x530);
  uVar12 = FUN_14168db40();
  FCsvProfiler::EndStat(uVar12,"NetBroadcastPostTickTime",uVar33);
  plVar13 = *(longlong **)(param_1 + 0x1b8);
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x1e0))(plVar13,SUB84((double)*(float *)(param_1 + 0x790),0));
  }
  if ((cVar6 == '\0') && (puVar16 = *(undefined8 **)(param_1 + 0x5d0), puVar16 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar16)(puVar16,fVar32);
  }
  if ((*(uint *)(param_1 + 0x830) >> 0xf & 1) != 0) {
    *(uint *)(param_1 + 0x830) = *(uint *)(param_1 + 0x830) & 0xffff7fff | 0x1000;
  }
  *(undefined1 *)(param_1 + 0x5e0) = 0;
  if (local_1c0 == '\0') {
    local_1c0 = '\x01';
    *(int *)(local_1d8 + 4) = *(int *)(local_1d8 + 4) + -1;
    if (local_1c8 != local_1d8[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_1d8 = local_1d0;
    local_1d8[3] = local_1b8;
    local_1d0 = 0;
  }
  FUN_142869600(DAT_146b17150);
  uVar11 = *(uint *)(param_1 + 0x830);
  if ((uVar11 >> 8 & 1) != 0) {
    *(uint *)(param_1 + 0x830) = ((uVar11 >> 1 ^ uVar11) & 0x80 ^ uVar11) & 0xfffffeff;
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  if ((*(int *)(param_1 + 300) < 0) && (*(int *)(param_1 + 300) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x120,0);
  }
  plVar13 = (longlong *)DAT_146b17150[0x159];
  if (plVar13 != (longlong *)0x0) {
    lVar21 = *plVar13;
    uVar12 = FUN_142876210(DAT_146b17150,param_1);
    (**(code **)(lVar21 + 0x110))(plVar13,uVar12);
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar6 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar10 = GetCurrentThreadId();
      if (DVar10 != DAT_1468c21c0) goto LAB_14255376c;
    }
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_1f8);
    FInGamePerformanceTracker::Tick(*(longlong *)(param_1 + 0x838) + 0x30);
    QueryPerformanceCounter(&local_1b0);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_1b0.s.LowPart - local_1f8._0_4_);
  }
  else {
LAB_14255376c:
    pDVar15 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    puVar16 = TlsGetValue(*pDVar15);
    if (puVar16 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)operator_new(0x18);
      puVar16 = (undefined8 *)0x0;
      if (puVar17 != (undefined8 *)0x0) {
        *puVar17 = 0;
        puVar17[1] = 0;
        *(undefined4 *)(puVar17 + 2) = 0;
        puVar16 = puVar17;
      }
      TlsSetValue(*pDVar15,puVar16);
    }
    puVar17 = (undefined8 *)puVar16[1];
    if (puVar17 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)*puVar16;
      if (puVar17 == (undefined8 *)0x0) {
        uVar11 = FUN_141594c40(pDVar15 + 2);
        puVar17 = (undefined8 *)0x0;
        if (uVar11 != 0) {
          puVar17 = *(undefined8 **)
                     ((&DAT_1468a81f8)[uVar11 >> 0xe] + 8 + (ulonglong)(uVar11 & 0x3fff) * 0x18);
          FLockFreeLinkPolicy::FreeLockFreeLink(uVar11);
        }
        puVar16[1] = puVar17;
        if (puVar17 == (undefined8 *)0x0) {
          puVar17 = (undefined8 *)FMemory::Malloc(0x2000,0);
          puVar16[1] = puVar17;
          do {
            puVar3 = puVar17 + 0x20;
            *puVar17 = puVar3;
            lVar25 = lVar25 + -1;
            puVar17 = puVar3;
          } while (lVar25 != 0);
          *puVar3 = 0;
          puVar17 = (undefined8 *)puVar16[1];
        }
        *(undefined4 *)(puVar16 + 2) = 0x20;
      }
      else {
        puVar16[1] = puVar17;
        *puVar16 = 0;
        *(undefined4 *)(puVar16 + 2) = 0x20;
      }
    }
    else {
      local_1a0 = (ulonglong)*(uint *)(puVar16 + 2);
    }
    puVar16[1] = *puVar17;
    iVar9 = (int)local_1a0 + -1;
    local_1a0 = 0;
    *(int *)(puVar16 + 2) = iVar9;
    *puVar17 = &PTR_FUN_143f3edd8;
    *(undefined4 *)(puVar17 + 1) = 0xff;
    local_1a8 = 0;
    *(undefined4 *)((longlong)puVar17 + 0xc) = 1;
    *puVar17 = &PTR_FUN_1450f0678;
    *(undefined1 *)(puVar17 + 3) = 0;
    puVar17[4] = 0;
    puVar17[2] = param_1;
    uVar26 = puVar17[4];
    piVar2 = (int *)(uVar26 + 0x48);
    if (uVar26 != 0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    local_res20 = uVar26;
    FUN_140445100(puVar17,0,0xff,1);
    if (uVar26 != 0) {
      LOCK();
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FGraphEvent::Recycle(local_res20);
      }
    }
  }
  FUN_142545930(local_130);
  if (local_1c0 == '\0') {
    local_1c0 = '\x01';
    *(int *)(local_1d8 + 4) = *(int *)(local_1d8 + 4) + -1;
    if (local_1c8 != local_1d8[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_1d8 = local_1d0;
    local_1d8[3] = local_1b8;
    local_1d0 = 0;
  }
  uVar12 = FUN_14168db40();
  FCsvProfiler::EndStat(uVar12,"UWorld_Tick",local_198);
  return;
}



// FUNCTION 142553a40 FUN_142553a40 body=437 status=ok
// SIG undefined FUN_142553a40(void)

void FUN_142553a40(longlong param_1)

{
  int *piVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x90) + 300) == 1) {
    lVar8 = FUN_142884640(DAT_146b17150,param_1);
    if (lVar8 == 0) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_38,L"Your connection to the host has been lost.",L"Engine",
                 L"ConnectionFailed");
      puVar9 = (undefined8 *)FText::ToString();
      local_48 = (void *)0x0;
      local_40 = *(int *)(puVar9 + 1);
      lVar8 = (longlong)local_40;
      _Src = (void *)*puVar9;
      if (local_40 == 0) {
        local_3c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
        _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar8 * 2);
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_30 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      lVar8 = DAT_146b17150;
      bVar5 = false;
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      plVar12 = (longlong *)(DAT_146b17150 + 0x9e8);
      *(int *)(DAT_146b17150 + 0x9fc) = *(int *)(DAT_146b17150 + 0x9fc) + 1;
      iVar10 = *(int *)(lVar8 + 0x9fc);
      iVar7 = *(int *)(lVar8 + 0x9f0) + -1;
      lVar13 = (longlong)iVar7;
      if (-1 < iVar7) {
        lVar11 = lVar13 << 4;
        bVar5 = false;
        do {
          lVar3 = *plVar12;
          if ((*(int *)(lVar11 + 8 + lVar3) == 0) ||
             (plVar4 = *(longlong **)(lVar11 + lVar3), plVar4 == (longlong *)0x0)) {
LAB_142553b98:
            bVar5 = true;
          }
          else {
            cVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,param_1,uVar2,3,&local_48);
            if (cVar6 == '\0') goto LAB_142553b98;
          }
          lVar11 = lVar11 + -0x10;
          lVar13 = lVar13 + -1;
        } while (-1 < lVar13);
        iVar10 = *(int *)(lVar8 + 0x9fc);
      }
      *(int *)(lVar8 + 0x9fc) = iVar10 + -1;
      if (bVar5) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar12,0);
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142553c00 FUN_142553c00 body=632 status=ok
// SIG undefined FUN_142553c00(void)

void FUN_142553c00(longlong param_1,int param_2,char param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong *plVar16;
  bool bVar17;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  puVar5 = (ulonglong *)FUN_1404cfca0();
  plVar6 = (longlong *)FUN_142548770();
  puVar11 = (undefined8 *)*puVar5;
  uVar13 = 0;
  uVar14 = (longlong)(int)puVar5[1] & 0x1fffffffffffffff;
  if (puVar11 + (int)puVar5[1] < puVar11) {
    uVar14 = uVar13;
  }
  if (uVar14 != 0) {
    do {
      plVar8 = (longlong *)*puVar11;
      cVar3 = (**(code **)(*plVar8 + 8))(plVar8);
      if (cVar3 != '\x02') {
        uStack_48 = CONCAT31(uStack_48._1_3_,cVar3);
        uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8);
        iVar12 = (int)plVar6[1];
        *(int *)(plVar6 + 1) = iVar12 + 1;
        if (*(int *)((longlong)plVar6 + 0xc) < iVar12 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar12);
        }
        local_50 = SUB84(plVar8,0);
        uStack_4c = (undefined4)((ulonglong)plVar8 >> 0x20);
        puVar1 = (undefined4 *)(*plVar6 + (longlong)iVar12 * 0x10);
        *puVar1 = local_50;
        puVar1[1] = uStack_4c;
        puVar1[2] = uStack_48;
        puVar1[3] = uVar4;
      }
      puVar11 = puVar11 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar14);
  }
  *(undefined4 *)(puVar5 + 1) = 0;
  if (*(int *)((longlong)puVar5 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar5,0);
  }
  if (0 < (int)plVar6[1]) {
    DAT_146afc8d0 = 1;
    bVar17 = false;
    plVar8 = (longlong *)*plVar6;
    plVar16 = plVar8 + (longlong)(int)plVar6[1] * 2;
    if (plVar8 != plVar16) {
      do {
        if ((param_5 == 9) || (*(int *)((longlong)plVar8 + 0xc) == param_5)) {
          plVar2 = (longlong *)*plVar8;
          if (plVar2 == (longlong *)0x0) {
LAB_142553d94:
            bVar17 = true;
          }
          else if (((((char)plVar8[1] == '\x01') ||
                    (cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2), cVar3 != '\0')) &&
                   (lVar7 = (**(code **)(*plVar2 + 0x40))(plVar2), lVar7 == param_1)) &&
                  ((param_2 == 2 ||
                   ((param_1 != 0 && (cVar3 = UWorld::IsGameWorld(param_1), cVar3 != '\0')))))) {
            if (param_3 == '\0') {
              if (param_2 != 0) {
LAB_142553d83:
                (**(code **)*plVar2)(plVar2,param_4);
                if (*plVar8 == 0) goto LAB_142553d94;
              }
            }
            else {
              cVar3 = (**(code **)(*plVar2 + 0x30))(plVar2);
              if (cVar3 != '\0') goto LAB_142553d83;
            }
          }
        }
        plVar8 = plVar8 + 2;
      } while (plVar8 != plVar16);
      if ((bVar17) && (lVar7 = (longlong)(int)plVar6[1], (int)plVar6[1] != 0)) {
        uVar9 = 0;
        bVar17 = *(longlong *)*plVar6 != 0;
        uVar14 = uVar9;
        uVar13 = uVar9;
        do {
          iVar12 = (int)uVar14;
          uVar9 = uVar9 + 1;
          uVar14 = (ulonglong)(iVar12 + 1);
          if ((longlong)uVar9 < lVar7) {
            plVar8 = (longlong *)(uVar9 * 0x10 + *plVar6);
            do {
              if (bVar17 != (*plVar8 != 0)) break;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar9 = uVar9 + 1;
              plVar8 = plVar8 + 2;
            } while ((longlong)uVar9 < lVar7);
          }
          iVar10 = (int)uVar14 - iVar12;
          if (bVar17 != false) {
            iVar15 = (int)uVar13;
            if (iVar15 != iVar12) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar15 * 0x10 + *plVar6),
                         (void *)((longlong)iVar12 * 0x10 + *plVar6),(longlong)iVar10 << 4);
            }
            uVar13 = (ulonglong)(uint)(iVar15 + iVar10);
          }
          bVar17 = (bool)(bVar17 ^ 1);
        } while ((longlong)uVar9 < lVar7);
        *(int *)(plVar6 + 1) = (int)uVar13;
      }
    }
    DAT_146afc8d0 = 0;
  }
  return;
}



// FUNCTION 142553eb0 FUN_142553eb0 body=297 status=ok
// SIG undefined FUN_142553eb0(void)

void FUN_142553eb0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    cVar4 = '\x01';
    goto LAB_142553f55;
  }
  if (plVar2[0x24] == 0) {
    cVar4 = (**(code **)(*plVar2 + 0x280))(plVar2);
    if (cVar4 == '\0') {
      cVar4 = '\x01';
      goto LAB_142553f55;
    }
    if (plVar2[0x24] != 0) goto LAB_142553eff;
  }
  else {
LAB_142553eff:
    cVar4 = (**(code **)(*plVar2 + 0x280))(plVar2);
    if ((cVar4 == '\0') && (DAT_146531e90 == 0)) {
      cVar4 = '\x01';
      goto LAB_142553f55;
    }
    if (plVar2[0x24] != 0) {
      cVar4 = (**(code **)(*plVar2 + 0x280))(plVar2);
      if ((cVar4 != '\0') &&
         ((*(char *)(param_1 + 9) == '\0' || ((*(byte *)(plVar2[0x24] + 0x204) & 0x10) != 0)))) {
        cVar4 = '\x01';
        goto LAB_142553f55;
      }
    }
  }
  cVar4 = '\0';
LAB_142553f55:
  FWeakObjectPtr::operator=(&local_res8);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(char *)(param_2 + 0x70) = cVar4;
  if (cVar4 != '\0') {
    lVar7 = (longlong)*(int *)(param_2 + 0x68);
    iVar5 = *(int *)(param_2 + 0x68) + 1;
    *(int *)(param_2 + 0x68) = iVar5;
    if (*(int *)(param_2 + 0x6c) < iVar5) {
      TArray<FLatentResponse::FExecutionInfo,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_2);
    }
    lVar6 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(param_2 + 0x60) == 0) {
      lVar6 = param_2;
    }
    *(undefined8 *)(lVar6 + lVar7 * 0x18) = uVar3;
    *(undefined4 *)(lVar6 + 8 + lVar7 * 0x18) = uVar1;
    *(undefined4 *)(lVar6 + 0x10 + lVar7 * 0x18) = local_resc;
    *(undefined4 *)(lVar6 + 0xc + lVar7 * 0x18) = local_res8;
  }
  return;
}



// FUNCTION 142553fe0 FUN_142553fe0 body=625 status=ok
// SIG undefined FUN_142553fe0(void)

void FUN_142553fe0(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong local_res8;
  longlong local_28;
  longlong *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    local_res8 = *(longlong *)(param_1 + 0x20);
  }
  else {
    local_res8 = 0;
  }
  local_20 = &local_res8;
  *param_2 = 0;
  *param_3 = 0;
  local_28 = param_1;
  local_18 = param_3;
  local_10 = param_2;
  switch(*(undefined1 *)(param_1 + 0xb4)) {
  case 1:
    iVar4 = *(byte *)(param_1 + 0xb5) - 1;
    if (iVar4 == 0) {
      UWorld::RemoveStreamingLevel(local_res8,param_1);
      *param_3 = 1;
      return;
    }
    goto LAB_14255418d;
  case 2:
    goto switchD_142554058_caseD_2;
  default:
    return;
  case 4:
    cVar2 = *(char *)(param_1 + 0xb5);
    if (cVar2 != '\0') {
      if (cVar2 != '\x02') {
        if (cVar2 == '\x03') {
          *(undefined1 *)(param_1 + 0xb4) = 5;
          *param_2 = 1;
          return;
        }
        return;
      }
      goto LAB_142554196;
    }
    ULevelStreaming::DiscardPendingUnloadLevel(param_1,local_res8);
    FUN_1425504a0(param_1,0);
    ULevelStreaming::DiscardPendingUnloadLevel(param_1,local_res8);
    break;
  case 5:
    if (*(longlong *)(param_1 + 0x120) == 0) {
      return;
    }
    FUN_1428c5450(local_res8,*(longlong *)(param_1 + 0x120),param_1 + 0x80,
                  ~(*(byte *)(param_1 + 0xb6) >> 6) & 1);
    if ((*(byte *)(*(longlong *)(param_1 + 0x120) + 0x204) & 0x10) == 0) {
      return;
    }
    ULevelStreaming::DiscardPendingUnloadLevel(param_1,local_res8);
    if (*(longlong *)(local_res8 + 0x1b8) != 0) {
      lVar3 = UObjectBaseUtility::GetOutermost(*(undefined8 *)(param_1 + 0x120));
      (**(code **)(**(longlong **)(local_res8 + 0x1b8) + 0x268))
                (*(longlong **)(local_res8 + 0x1b8),*(undefined8 *)(lVar3 + 0x18),local_res8,
                 *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x1d8));
    }
    *(undefined1 *)(param_1 + 0xb4) = 6;
    break;
  case 6:
    iVar4 = *(byte *)(param_1 + 0xb5) - 2;
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0xb4) = 7;
      *param_2 = 1;
      return;
    }
LAB_14255418d:
    if (iVar4 != 1) {
      return;
    }
LAB_142554196:
    FUN_14253ee00(&local_28);
    return;
  case 7:
    if (*(longlong *)(param_1 + 0x120) == 0) {
      return;
    }
    if ((*(char *)(param_1 + 0xb6) < '\0') ||
       (cVar2 = UWorld::IsGameWorld(local_res8), cVar2 == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    FUN_1428d4900(local_res8,*(undefined8 *)(param_1 + 0x120),uVar5);
    if ((*(byte *)(*(longlong *)(param_1 + 0x120) + 0x204) & 0x10) != 0) {
      return;
    }
    plVar1 = *(longlong **)(local_res8 + 0x1b8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x270))
                (plVar1,local_res8,*(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x1d8));
    }
    *(undefined1 *)(param_1 + 0xb4) = 4;
  }
  *param_2 = 1;
switchD_142554058_caseD_2:
  *param_3 = 1;
  return;
}



// FUNCTION 142554270 InitDynamicRHI body=361 status=ok
// SIG undefined InitDynamicRHI(void)

/* WARNING: Type propagation algorithm not settling */

void FSpeedTreeWindNullUniformBuffer::InitDynamicRHI(longlong param_1)

{
  undefined4 uVar1;
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
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 local_res8 [8];
  undefined8 local_268;
  undefined4 local_138;
  undefined1 local_134 [300];
  
  FSpeedTreeUniformParameters::FSpeedTreeUniformParameters(&local_268);
  ::_guard_xfg_dispatch_icall_nop((undefined4 *)((longlong)&local_268 + 4),0,300);
  ::_guard_xfg_dispatch_icall_nop(local_134,0,300);
  puVar14 = *(undefined8 **)(param_1 + 0x40);
  local_268._0_4_ = 0x3f800000;
  local_138 = 0x3f800000;
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)FMemory::Malloc(0x260,0x10);
    *(undefined8 **)(param_1 + 0x40) = puVar14;
  }
  lVar17 = 4;
  puVar13 = &local_268;
  do {
    puVar16 = puVar13;
    puVar15 = puVar14;
    uVar9 = puVar16[1];
    uVar10 = puVar16[2];
    uVar11 = puVar16[3];
    *puVar15 = *puVar16;
    puVar15[1] = uVar9;
    uVar9 = puVar16[4];
    uVar12 = puVar16[5];
    puVar15[2] = uVar10;
    puVar15[3] = uVar11;
    uVar10 = puVar16[6];
    uVar11 = puVar16[7];
    puVar15[4] = uVar9;
    puVar15[5] = uVar12;
    uVar9 = puVar16[8];
    uVar12 = puVar16[9];
    puVar15[6] = uVar10;
    puVar15[7] = uVar11;
    uVar10 = puVar16[10];
    uVar11 = puVar16[0xb];
    puVar15[8] = uVar9;
    puVar15[9] = uVar12;
    uVar9 = puVar16[0xc];
    uVar12 = puVar16[0xd];
    puVar15[10] = uVar10;
    puVar15[0xb] = uVar11;
    uVar10 = puVar16[0xe];
    uVar11 = puVar16[0xf];
    puVar15[0xc] = uVar9;
    puVar15[0xd] = uVar12;
    puVar15[0xe] = uVar10;
    puVar15[0xf] = uVar11;
    lVar17 = lVar17 + -1;
    puVar14 = puVar15 + 0x10;
    puVar13 = puVar16 + 0x10;
  } while (lVar17 != 0);
  uVar9 = puVar16[0x11];
  uVar10 = puVar16[0x12];
  uVar11 = puVar16[0x13];
  puVar15[0x10] = puVar16[0x10];
  puVar15[0x11] = uVar9;
  uVar9 = puVar16[0x14];
  uVar12 = puVar16[0x15];
  puVar15[0x12] = uVar10;
  puVar15[0x13] = uVar11;
  uVar10 = puVar16[0x16];
  uVar11 = puVar16[0x17];
  puVar15[0x14] = uVar9;
  puVar15[0x15] = uVar12;
  uVar1 = *(undefined4 *)(puVar16 + 0x18);
  uVar2 = *(undefined4 *)((longlong)puVar16 + 0xc4);
  uVar3 = *(undefined4 *)(puVar16 + 0x19);
  uVar4 = *(undefined4 *)((longlong)puVar16 + 0xcc);
  puVar15[0x16] = uVar10;
  puVar15[0x17] = uVar11;
  uVar5 = *(undefined4 *)(puVar16 + 0x1a);
  uVar6 = *(undefined4 *)((longlong)puVar16 + 0xd4);
  uVar7 = *(undefined4 *)(puVar16 + 0x1b);
  uVar8 = *(undefined4 *)((longlong)puVar16 + 0xdc);
  *(undefined4 *)(puVar15 + 0x18) = uVar1;
  *(undefined4 *)((longlong)puVar15 + 0xc4) = uVar2;
  *(undefined4 *)(puVar15 + 0x19) = uVar3;
  *(undefined4 *)((longlong)puVar15 + 0xcc) = uVar4;
  *(undefined4 *)(puVar15 + 0x1a) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0xd4) = uVar6;
  *(undefined4 *)(puVar15 + 0x1b) = uVar7;
  *(undefined4 *)((longlong)puVar15 + 0xdc) = uVar8;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,local_res8,*(longlong *)(param_1 + 0x40),&DAT_146b15ed8,
               *(undefined4 *)(param_1 + 0x30));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  return;
}



// FUNCTION 1425543e0 FUN_1425543e0 body=104 status=ok
// SIG undefined FUN_1425543e0(void)

undefined8 * FUN_1425543e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1450f7448;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_144e48660;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142554450 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 142554490 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1425544d0 Emplace<FGuid_const_&> body=469 status=ok
// SIG undefined Emplace<FGuid_const_&>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong TMapBase<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
         ::Emplace<FGuid_const_&>(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  void *_Dst;
  int local_res8 [2];
  int local_98 [2];
  undefined4 *local_90;
  undefined4 local_88 [4];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  
  TSparseArray<TSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_98);
  uStack_3c = _DAT_1464aa80c;
  uStack_40 = uRam00000001464aa808;
  uStack_44 = uRam00000001464aa804;
  local_48 = _DAT_1464aa800;
  local_78 = _DAT_1464aa7d0;
  uStack_70 = _DAT_1464aa7d8;
  local_58 = _DAT_1464aa7f0;
  uStack_50 = _DAT_1464aa7f8;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  local_88[0] = 0xffffffff;
  local_68 = _DAT_1464aa7e0;
  uStack_60 = _DAT_1464aa7e8;
  *local_90 = *param_2;
  local_90[1] = uVar1;
  local_90[2] = uVar2;
  local_90[3] = uVar3;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  FLightComponentMapBuildData::FLightComponentMapBuildData(local_90 + 4,local_88);
  if (local_30 != 0) {
    FMemory::Free();
  }
  local_90[0x20] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_90);
    if (local_res8[0] != -1) {
      _Dst = (void *)((longlong)local_res8[0] * 0x90 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x68) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_90,0x80);
      TSparseArray<TSetElement<TTuple<FSlateFontKey,TSharedRef<FCharacterList,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_98[0],1);
      goto LAB_142554677;
    }
  }
  cVar4 = TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  local_res8[0] = local_98[0];
  if (cVar4 == '\0') {
    uVar5 = FCrc::MemCrc_DEPRECATED(local_90,0x10);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    local_90[0x21] = uVar5;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    local_90[0x20] =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         local_98[0];
  }
LAB_142554677:
  return *param_1 + 0x10 + (longlong)local_res8[0] * 0x90;
}



// FUNCTION 1425546b0 Emplace<FGuid_const_&,FPrecomputedLightVolumeData_*_const_&> body=306 status=ok
// SIG undefined Emplace<FGuid_const_&,FPrecomputedLightVolumeData_*_const_&>(void)

longlong TMapBase<FGuid,FPrecomputedLightVolumeData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>_>
         ::Emplace<FGuid_const_&,FPrecomputedLightVolumeData_*_const_&>
                   (longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  int local_res8 [2];
  int local_28 [2];
  undefined4 *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *local_20 = *param_2;
  local_20[1] = uVar1;
  local_20[2] = uVar2;
  local_20[3] = uVar3;
  *(undefined8 *)(local_20 + 4) = *param_3;
  local_20[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_20);
    if (local_res8[0] != -1) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x20 + *param_1),local_20,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_28[0],1);
      goto LAB_1425547be;
    }
  }
  cVar4 = TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  local_res8[0] = local_28[0];
  if (cVar4 == '\0') {
    uVar5 = FCrc::MemCrc_DEPRECATED(local_20,0x10);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    local_20[7] = uVar5;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    local_20[6] = *(undefined4 *)
                   ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         local_28[0];
  }
LAB_1425547be:
  return *param_1 + 0x10 + (longlong)local_res8[0] * 0x20;
}



// FUNCTION 1425547f0 FUN_1425547f0 body=349 status=ok
// SIG undefined FUN_1425547f0(void)

longlong FUN_1425547f0(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  void *_Dst;
  int local_res8 [2];
  int local_28 [2];
  undefined4 *local_20;
  
  FUN_1425672b0(param_1,local_28);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *local_20 = *param_2;
  local_20[1] = uVar1;
  local_20[2] = uVar2;
  local_20[3] = uVar3;
  FUN_14255b190(local_20 + 4,param_3);
  *(undefined8 *)(local_20 + 0x34) = *(undefined8 *)(param_3 + 0xc0);
  local_20[0x36] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_14256a540(param_1,local_res8,local_20);
    if (local_res8[0] != -1) {
      _Dst = (void *)((longlong)local_res8[0] * 0xe0 + *param_1);
      FUN_142564070((longlong)_Dst + 0x10);
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0xd8);
      TSparseArray<TSetElement<TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_28[0],1);
      goto LAB_142554926;
    }
  }
  cVar4 = FUN_1425693a0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  local_res8[0] = local_28[0];
  if (cVar4 == '\0') {
    uVar5 = FCrc::MemCrc_DEPRECATED(local_20,0x10);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    local_20[0x37] = uVar5;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    local_20[0x36] =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         local_28[0];
  }
LAB_142554926:
  return *param_1 + 0x10 + (longlong)local_res8[0] * 0xe0;
}



// FUNCTION 142554950 FUN_142554950 body=807 status=ok
// SIG undefined FUN_142554950(void)

uint * FUN_142554950(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  bool bVar17;
  uint local_res8 [2];
  ulonglong *local_res10;
  
  iVar12 = 1;
  uVar15 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = uVar11;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  local_res10 = (ulonglong *)(*param_1 + (longlong)(int)uVar11 * 0x18);
  puVar2 = (ulonglong *)param_3[1];
  uVar3 = *(ulonglong *)*param_3;
  *local_res10 = uVar3;
  local_res10[1] = *puVar2;
  *(undefined4 *)(local_res10 + 2) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    uVar7 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      lVar4 = *param_1;
      plVar8 = *(longlong **)(lVar4 + 8 + lVar10 * 0x18);
      if (plVar8 != (longlong *)0x0) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar8,0x10);
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar4 + lVar10 * 0x18),local_res10,0x10);
      uVar11 = *param_2;
      bVar5 = (byte)uVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = uVar11;
      }
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + (longlong)(int)uVar11 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar10 + 4 + (longlong)(int)uVar11 * 0x18) = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar11;
      plVar8 = (longlong *)param_1[4];
      *param_2 = uVar7;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_142554c4e;
    }
  }
  if (3 < uVar16) {
    uVar7 = (uVar16 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar13 = '\0';
    if (uVar7 != 0) {
      iVar9 = 0x1f - iVar12;
    }
    uVar7 = (uVar16 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar7 != 0) {
      cVar13 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = (int)(*local_res10 >> 4);
    uVar7 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
    uVar14 = -(uVar7 + iVar12) ^ uVar7 >> 0xd;
    uVar16 = (iVar12 - uVar7) - uVar14 ^ uVar14 >> 0xc;
    uVar7 = (uVar7 - uVar16) - uVar14 ^ uVar16 << 0x10;
    uVar14 = (uVar14 - uVar7) - uVar16 ^ uVar7 >> 5;
    uVar16 = (uVar16 - uVar7) - uVar14 ^ uVar14 >> 3;
    uVar7 = (uVar7 - uVar16) - uVar14 ^ uVar16 << 10;
    uVar16 = ((uVar14 - uVar7) - uVar16 ^ uVar7 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_res10 + 0x14) = uVar16;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(local_res10 + 2) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142554c4e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142554c80 FUN_142554c80 body=698 status=ok
// SIG undefined FUN_142554c80(void)

int * FUN_142554c80(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int *_Src;
  uint *puVar16;
  undefined4 uVar17;
  bool bVar18;
  int local_res8 [2];
  int local_res10;
  
  uVar17 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar14 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar14;
  lVar7 = (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar16 = (uint *)((longlong)plVar8 + lVar7);
  *puVar16 = *puVar16 | 1 << ((byte)iVar14 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  lVar1 = (longlong)iVar14 * 0x18;
  _Src = (int *)(*param_1 + lVar1);
  *(undefined8 *)_Src = *(undefined8 *)*param_3;
  *(undefined8 *)(_Src + 2) = *puVar3;
  _Src[4] = -1;
  local_res10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (local_res10 != 1) {
    TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    iVar2 = local_res8[0];
    lVar13 = (longlong)local_res8[0];
    bVar18 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar18);
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar13 * 0x18),_Src,0x10);
      bVar4 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar14;
      }
      lVar13 = *param_1;
      *(undefined4 *)(lVar1 + lVar13) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar17 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar13) = uVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar2;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar8 + lVar7);
      *puVar16 = *puVar16 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      uVar12 = (undefined1)local_res8[0];
      goto LAB_142554f10;
    }
  }
  uVar12 = 0;
  cVar5 = FUN_142569190(param_1,local_res10,0);
  if (cVar5 == '\0') {
    uVar10 = _Src[1];
    uVar11 = *_Src - uVar10 ^ uVar10 >> 0xd;
    uVar9 = (-0x61c88647 - uVar11) - uVar10 ^ uVar11 << 8;
    uVar15 = (uVar10 - uVar9) - uVar11 ^ uVar9 >> 0xd;
    uVar11 = (uVar11 - uVar9) - uVar15 ^ uVar15 >> 0xc;
    uVar10 = (uVar9 - uVar11) - uVar15 ^ uVar11 << 0x10;
    uVar15 = (uVar15 - uVar10) - uVar11 ^ uVar10 >> 5;
    uVar9 = (uVar11 - uVar10) - uVar15 ^ uVar15 >> 3;
    uVar10 = (uVar10 - uVar9) - uVar15 ^ uVar9 << 10;
    uVar10 = ((uVar15 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    _Src[5] = uVar10;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    _Src[4] = *(int *)((longlong)plVar8 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_142554f10:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar12;
  }
  return param_2;
}



// FUNCTION 142554f40 FUN_142554f40 body=658 status=ok
// SIG undefined FUN_142554f40(void)

uint * FUN_142554f40(longlong *param_1,uint *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  char cVar16;
  undefined4 *_Src;
  bool bVar17;
  uint local_res8 [2];
  
  iVar14 = 1;
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar15 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar15 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar15);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar15 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar15 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = uVar15;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(uVar15 + ((int)uVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar15 & 0x1f);
  puVar11 = (undefined4 *)*param_3;
  _Src = (undefined4 *)((longlong)(int)uVar15 * 0x20 + *param_1);
  puVar3 = (undefined8 *)param_3[1];
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  *_Src = *puVar11;
  _Src[1] = uVar5;
  _Src[2] = uVar6;
  _Src[3] = uVar7;
  *(undefined8 *)(_Src + 4) = *puVar3;
  _Src[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar15 = local_res8[0];
    lVar12 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar12 * 0x20 + *param_1),_Src,0x18);
      uVar8 = *param_2;
      bVar4 = (byte)uVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar8;
      }
      puVar11 = (undefined4 *)((longlong)(int)uVar8 * 0x20 + *param_1);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar11[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar8;
      plVar10 = (longlong *)param_1[4];
      *param_2 = uVar15;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1425551ac;
    }
  }
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar15) {
    uVar8 = (uVar15 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar16 = '\0';
    if (uVar8 != 0) {
      iVar9 = 0x1f - iVar14;
    }
    uVar8 = (uVar15 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar16 = '\x1f' - (char)iVar14;
    }
    iVar14 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar16 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar14 <= (int)param_1[9])))) {
    uVar15 = *param_2;
    uVar8 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar8 = (int)param_1[9] - 1U & uVar8;
    _Src[7] = uVar8;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    _Src[6] = *(undefined4 *)
               ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(uint *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         uVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar14;
    TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1425551ac:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1425551e0 Emplace<TPairInitializer<FGuid_const_&,FMeshMapBuildData_&&>_> body=429 status=ok
// SIG undefined Emplace<TPairInitializer<FGuid_const_&,FMeshMapBuildData_&&>_>(void)

int * TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,FMeshMapBuildData_&&>_>
                (longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  bool bVar12;
  int local_res8 [2];
  int local_38 [2];
  undefined4 *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  lVar4 = param_3[1];
  *param_2 = local_38[0];
  puVar5 = (undefined4 *)*param_3;
  uVar6 = puVar5[1];
  uVar7 = puVar5[2];
  uVar8 = puVar5[3];
  *local_30 = *puVar5;
  local_30[1] = uVar6;
  local_30[2] = uVar7;
  local_30[3] = uVar8;
  FMeshMapBuildData::FMeshMapBuildData(local_30 + 4,lVar4);
  local_30[0x10] = 0xffffffff;
  bVar12 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x48);
      if (*(longlong *)(*param_1 + 0x30 + (longlong)local_res8[0] * 0x48) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
        FMemory::Free();
      }
      plVar11 = *(longlong **)((longlong)_Dst + 0x18);
      if (plVar11 != (longlong *)0x0) {
        plVar1 = plVar11 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar11 + 0x38))();
        }
      }
      plVar11 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar11 != (longlong *)0x0) {
        piVar2 = (int *)((longlong)plVar11 + 0x1c);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x38))();
        }
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x40);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142555368;
    }
  }
  cVar9 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar9 == '\0') {
    iVar3 = *param_2;
    uVar10 = FCrc::MemCrc_DEPRECATED(local_30,0x10);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    local_30[0x11] = uVar10;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    local_30[0x10] =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar3;
  }
LAB_142555368:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 142555390 FUN_142555390 body=670 status=ok
// SIG undefined FUN_142555390(void)

longlong FUN_142555390(longlong *param_1)

{
  void *_Dst;
  short *psVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  undefined2 *puVar14;
  wchar_t *_Src;
  uint uVar15;
  int iVar16;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  psVar1 = (short *)*param_1;
  pwVar12 = (wchar_t *)0x0;
  uVar3 = 0;
  iVar16 = (int)param_1[1];
  puVar14 = &DAT_143f3eda8;
  psVar13 = psVar1 + iVar16;
  psVar8 = psVar1;
  if (psVar13 != psVar1) {
    do {
      if (*psVar8 == 0x2e) {
        if ((int)((longlong)psVar8 - (longlong)psVar1 >> 1) != -1) goto LAB_142555591;
        break;
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != psVar13);
    do {
      if (psVar13 == psVar1) goto LAB_142555591;
      psVar13 = psVar13 + -1;
    } while (*psVar13 != 0x2f);
    iVar11 = (int)((longlong)psVar13 - (longlong)psVar1 >> 1);
    if (iVar11 != -1) {
      uVar7 = iVar11 + 0x80000000;
      uVar15 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar15 = uVar3;
      }
      if (iVar11 + 1U < uVar15) {
        uVar15 = iVar11 + 1U;
      }
      uVar9 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar9 = uVar3;
      }
      uVar10 = uVar15;
      if ((uVar15 <= uVar7) && (uVar10 = uVar9, uVar7 < uVar9)) {
        uVar10 = uVar7;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      psVar13 = &DAT_143f3eda8;
      if (iVar16 != 0) {
        psVar13 = psVar1;
      }
      iVar11 = uVar10 - uVar15;
      iVar16 = iVar11 + 1;
      if (iVar11 == 0) {
        iVar16 = 0;
      }
      _Src = pwVar12;
      local_30 = iVar16;
      if ((0 < iVar16) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar16 = local_30,
         _Src = local_38, 0 < local_30)) {
        wcsncpy(local_38,psVar13 + (int)uVar15,(longlong)iVar11);
        _Src[iVar11] = L'\0';
      }
      iVar11 = (int)param_1[1];
      uVar7 = iVar11 - 1;
      if (iVar11 < 1) {
        uVar7 = uVar3;
      }
      iVar11 = (iVar11 < 1) + 1 + iVar11;
      *(int *)(param_1 + 1) = iVar11;
      if (*(int *)((longlong)param_1 + 0xc) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(undefined2 *)(*param_1 + (longlong)(int)uVar7 * 2) = 0x2e;
      *(undefined2 *)(*param_1 + 2 + (longlong)(int)uVar7 * 2) = 0;
      if ((iVar16 != 0) && (iVar16 = iVar16 + -1, iVar16 != 0)) {
        iVar11 = (int)param_1[1];
        iVar2 = (uint)(iVar11 == 0) + iVar11 + iVar16;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar16 * 2);
        *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
      }
      if (_Src != (wchar_t *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
LAB_142555591:
  plVar4 = (longlong *)UTexture2D::GetPrivateStaticClass();
  if (plVar4[0x1f] == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
  }
  if ((int)param_1[1] != 0) {
    puVar14 = (undefined2 *)*param_1;
  }
  uVar5 = UTexture2D::GetPrivateStaticClass();
  lVar6 = FUN_141799c90(uVar5,0,puVar14,0,0,0,1);
  if (lVar6 != 0) {
    iVar16 = *(int *)(lVar6 + 0xc);
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar7 = iVar16 >> 0x1f & 0xffff;
      uVar3 = iVar16 + uVar7;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18);
    }
    *(uint *)(pwVar12 + 4) = *(uint *)(pwVar12 + 4) | 0x40000000;
  }
  return lVar6;
}



// FUNCTION 142555630 FUN_142555630 body=670 status=ok
// SIG undefined FUN_142555630(void)

longlong FUN_142555630(longlong *param_1)

{
  void *_Dst;
  short *psVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  undefined2 *puVar14;
  wchar_t *_Src;
  uint uVar15;
  int iVar16;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  psVar1 = (short *)*param_1;
  pwVar12 = (wchar_t *)0x0;
  uVar3 = 0;
  iVar16 = (int)param_1[1];
  puVar14 = &DAT_143f3eda8;
  psVar13 = psVar1 + iVar16;
  psVar8 = psVar1;
  if (psVar13 != psVar1) {
    do {
      if (*psVar8 == 0x2e) {
        if ((int)((longlong)psVar8 - (longlong)psVar1 >> 1) != -1) goto LAB_142555831;
        break;
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != psVar13);
    do {
      if (psVar13 == psVar1) goto LAB_142555831;
      psVar13 = psVar13 + -1;
    } while (*psVar13 != 0x2f);
    iVar11 = (int)((longlong)psVar13 - (longlong)psVar1 >> 1);
    if (iVar11 != -1) {
      uVar7 = iVar11 + 0x80000000;
      uVar15 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar15 = uVar3;
      }
      if (iVar11 + 1U < uVar15) {
        uVar15 = iVar11 + 1U;
      }
      uVar9 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar9 = uVar3;
      }
      uVar10 = uVar15;
      if ((uVar15 <= uVar7) && (uVar10 = uVar9, uVar7 < uVar9)) {
        uVar10 = uVar7;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      psVar13 = &DAT_143f3eda8;
      if (iVar16 != 0) {
        psVar13 = psVar1;
      }
      iVar11 = uVar10 - uVar15;
      iVar16 = iVar11 + 1;
      if (iVar11 == 0) {
        iVar16 = 0;
      }
      _Src = pwVar12;
      local_30 = iVar16;
      if ((0 < iVar16) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar16 = local_30,
         _Src = local_38, 0 < local_30)) {
        wcsncpy(local_38,psVar13 + (int)uVar15,(longlong)iVar11);
        _Src[iVar11] = L'\0';
      }
      iVar11 = (int)param_1[1];
      uVar7 = iVar11 - 1;
      if (iVar11 < 1) {
        uVar7 = uVar3;
      }
      iVar11 = (iVar11 < 1) + 1 + iVar11;
      *(int *)(param_1 + 1) = iVar11;
      if (*(int *)((longlong)param_1 + 0xc) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(undefined2 *)(*param_1 + (longlong)(int)uVar7 * 2) = 0x2e;
      *(undefined2 *)(*param_1 + 2 + (longlong)(int)uVar7 * 2) = 0;
      if ((iVar16 != 0) && (iVar16 = iVar16 + -1, iVar16 != 0)) {
        iVar11 = (int)param_1[1];
        iVar2 = (uint)(iVar11 == 0) + iVar11 + iVar16;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar16 * 2);
        *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
      }
      if (_Src != (wchar_t *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
LAB_142555831:
  plVar4 = (longlong *)UTextureCube::GetPrivateStaticClass();
  if (plVar4[0x1f] == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
  }
  if ((int)param_1[1] != 0) {
    puVar14 = (undefined2 *)*param_1;
  }
  uVar5 = UTextureCube::GetPrivateStaticClass();
  lVar6 = FUN_141799c90(uVar5,0,puVar14,0,0,0,1);
  if (lVar6 != 0) {
    iVar16 = *(int *)(lVar6 + 0xc);
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar7 = iVar16 >> 0x1f & 0xffff;
      uVar3 = iVar16 + uVar7;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18);
    }
    *(uint *)(pwVar12 + 4) = *(uint *)(pwVar12 + 4) | 0x40000000;
  }
  return lVar6;
}



// FUNCTION 1425558d0 FUN_1425558d0 body=670 status=ok
// SIG undefined FUN_1425558d0(void)

longlong FUN_1425558d0(longlong *param_1)

{
  void *_Dst;
  short *psVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  undefined2 *puVar14;
  wchar_t *_Src;
  uint uVar15;
  int iVar16;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  psVar1 = (short *)*param_1;
  pwVar12 = (wchar_t *)0x0;
  uVar3 = 0;
  iVar16 = (int)param_1[1];
  puVar14 = &DAT_143f3eda8;
  psVar13 = psVar1 + iVar16;
  psVar8 = psVar1;
  if (psVar13 != psVar1) {
    do {
      if (*psVar8 == 0x2e) {
        if ((int)((longlong)psVar8 - (longlong)psVar1 >> 1) != -1) goto LAB_142555ad1;
        break;
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != psVar13);
    do {
      if (psVar13 == psVar1) goto LAB_142555ad1;
      psVar13 = psVar13 + -1;
    } while (*psVar13 != 0x2f);
    iVar11 = (int)((longlong)psVar13 - (longlong)psVar1 >> 1);
    if (iVar11 != -1) {
      uVar7 = iVar11 + 0x80000000;
      uVar15 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar15 = uVar3;
      }
      if (iVar11 + 1U < uVar15) {
        uVar15 = iVar11 + 1U;
      }
      uVar9 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar9 = uVar3;
      }
      uVar10 = uVar15;
      if ((uVar15 <= uVar7) && (uVar10 = uVar9, uVar7 < uVar9)) {
        uVar10 = uVar7;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      psVar13 = &DAT_143f3eda8;
      if (iVar16 != 0) {
        psVar13 = psVar1;
      }
      iVar11 = uVar10 - uVar15;
      iVar16 = iVar11 + 1;
      if (iVar11 == 0) {
        iVar16 = 0;
      }
      _Src = pwVar12;
      local_30 = iVar16;
      if ((0 < iVar16) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar16 = local_30,
         _Src = local_38, 0 < local_30)) {
        wcsncpy(local_38,psVar13 + (int)uVar15,(longlong)iVar11);
        _Src[iVar11] = L'\0';
      }
      iVar11 = (int)param_1[1];
      uVar7 = iVar11 - 1;
      if (iVar11 < 1) {
        uVar7 = uVar3;
      }
      iVar11 = (iVar11 < 1) + 1 + iVar11;
      *(int *)(param_1 + 1) = iVar11;
      if (*(int *)((longlong)param_1 + 0xc) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(undefined2 *)(*param_1 + (longlong)(int)uVar7 * 2) = 0x2e;
      *(undefined2 *)(*param_1 + 2 + (longlong)(int)uVar7 * 2) = 0;
      if ((iVar16 != 0) && (iVar16 = iVar16 + -1, iVar16 != 0)) {
        iVar11 = (int)param_1[1];
        iVar2 = (uint)(iVar11 == 0) + iVar11 + iVar16;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar16 * 2);
        *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
      }
      if (_Src != (wchar_t *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
LAB_142555ad1:
  plVar4 = (longlong *)UVolumeTexture::GetPrivateStaticClass();
  if (plVar4[0x1f] == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
  }
  if ((int)param_1[1] != 0) {
    puVar14 = (undefined2 *)*param_1;
  }
  uVar5 = UVolumeTexture::GetPrivateStaticClass();
  lVar6 = FUN_141799c90(uVar5,0,puVar14,0,0,0,1);
  if (lVar6 != 0) {
    iVar16 = *(int *)(lVar6 + 0xc);
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar7 = iVar16 >> 0x1f & 0xffff;
      uVar3 = iVar16 + uVar7;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18);
    }
    *(uint *)(pwVar12 + 4) = *(uint *)(pwVar12 + 4) | 0x40000000;
  }
  return lVar6;
}



// FUNCTION 142555b70 FUN_142555b70 body=418 status=ok
// SIG undefined FUN_142555b70(void)

void FUN_142555b70(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *local_28;
  int local_20;
  int local_1c;
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar4 != (longlong *)0x0) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    local_1c = 0;
    if (param_3 != '\0') {
      (**(code **)(*plVar4 + 0x2a0))(plVar4,&local_28);
    }
    iVar1 = local_20;
    for (puVar6 = local_28; puVar6 != local_28 + local_20; puVar6 = puVar6 + 1) {
      if ((longlong *)*puVar6 == plVar4) {
        if ((int)((longlong)puVar6 - (longlong)local_28 >> 3) != -1) goto LAB_142555c39;
        break;
      }
    }
    local_20 = local_20 + 1;
    if (local_1c < local_20) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_28,iVar1);
    }
    local_28[iVar1] = plVar4;
LAB_142555c39:
    puVar6 = local_28 + local_20;
    for (puVar8 = local_28; puVar8 != puVar6; puVar8 = puVar8 + 1) {
      plVar4 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x2c0))();
      plVar7 = (longlong *)*plVar4;
      plVar4 = plVar7 + (int)plVar4[1];
      for (; plVar7 != plVar4; plVar7 = plVar7 + 1) {
        lVar2 = *plVar7;
        if (lVar2 != 0) {
          lVar5 = UTextureRenderTarget2D::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            iVar1 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar1 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
            }
            *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
          }
        }
      }
    }
    if (local_28 != (undefined8 *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}



// FUNCTION 142555d20 FUN_142555d20 body=283 status=ok
// SIG undefined FUN_142555d20(void)

void FUN_142555d20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3);
    plVar5 = (longlong *)*plVar3;
    plVar3 = plVar5 + (int)plVar3[1];
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            FUN_142555d20(*(longlong *)(lVar1 + 0x40),param_2,param_3,param_4);
          }
        }
        else {
          lVar4 = UMaterialExpressionFontSampleParameter::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_14256ad80(lVar1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142555e40 FUN_142555e40 body=283 status=ok
// SIG undefined FUN_142555e40(void)

void FUN_142555e40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3);
    plVar5 = (longlong *)*plVar3;
    plVar3 = plVar5 + (int)plVar3[1];
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            FUN_142555e40(*(longlong *)(lVar1 + 0x40),param_2,param_3,param_4);
          }
        }
        else {
          lVar4 = FUN_1429af6e0();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_14256ae20(lVar1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142555f60 FUN_142555f60 body=283 status=ok
// SIG undefined FUN_142555f60(void)

void FUN_142555f60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3);
    plVar5 = (longlong *)*plVar3;
    plVar3 = plVar5 + (int)plVar3[1];
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            FUN_142555f60(*(longlong *)(lVar1 + 0x40),param_2,param_3,param_4);
          }
        }
        else {
          lVar4 = UMaterialExpressionScalarParameter::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_14256aeb0(lVar1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142556080 FUN_142556080 body=283 status=ok
// SIG undefined FUN_142556080(void)

void FUN_142556080(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3);
    plVar5 = (longlong *)*plVar3;
    plVar3 = plVar5 + (int)plVar3[1];
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            FUN_142556080(*(longlong *)(lVar1 + 0x40),param_2,param_3,param_4);
          }
        }
        else {
          lVar4 = FUN_1429b47b0();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_14256aeb0(lVar1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1425561a0 FUN_1425561a0 body=283 status=ok
// SIG undefined FUN_1425561a0(void)

void FUN_1425561a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3);
    plVar5 = (longlong *)*plVar3;
    plVar3 = plVar5 + (int)plVar3[1];
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            FUN_1425561a0(*(longlong *)(lVar1 + 0x40),param_2,param_3,param_4);
          }
        }
        else {
          lVar4 = FUN_1429b4960();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_14256aeb0(lVar1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  return;
}


