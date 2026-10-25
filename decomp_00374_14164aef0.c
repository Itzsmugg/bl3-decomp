// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14164aef0 GetDayOfYear body=417 status=ok
// SIG undefined GetDayOfYear(void)

int FDateTime::GetDayOfYear(longlong *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  
  fVar9 = (float)((double)(*param_1 / 864000000000) + 1721426.0);
  iVar5 = ((int)ROUND((fVar9 + fVar9) - 0.5) >> 1) + 0x10bd9;
  iVar4 = (iVar5 * 4) / 0x23ab1;
  iVar1 = iVar4 * 0x23ab1 + 3;
  iVar5 = iVar5 - ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
  iVar1 = ((iVar5 + 1) * 4000) / 0x164b09;
  iVar2 = iVar1 * 0x5b5;
  iVar5 = iVar5 + (0x1f - ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2));
  iVar2 = (iVar5 * 0x50) / 0x98f;
  uVar8 = (iVar4 + -0x31) * 100 + iVar2 / 0xb + iVar1;
  iVar5 = iVar5 - (iVar2 * 0x98f) / 0x50;
  lVar7 = (longlong)(iVar2 + (iVar2 / 0xb) * -0xc + 2);
  if (1 < lVar7) {
    lVar6 = 1;
    do {
      if (lVar6 == 2) {
        uVar3 = uVar8 & 0x80000003;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
        }
        if ((uVar3 != 0) ||
           ((uVar8 == ((int)uVar8 / 100) * 100 && (uVar8 != ((int)uVar8 / 400) * 400))))
        goto LAB_14164b07b;
        iVar4 = 0x1d;
      }
      else {
LAB_14164b07b:
        iVar4 = *(int *)(&DAT_144cc6628 + lVar6 * 4);
      }
      iVar5 = iVar5 + iVar4;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar7);
  }
  return iVar5;
}



// FUNCTION 14164b0a0 GetDecodedDataSize body=111 status=ok
// SIG undefined GetDecodedDataSize(void)

int FBase64::GetDecodedDataSize(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar5;
  undefined2 *puVar6;
  bool bVar7;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_1;
    uVar4 = (ulonglong)(*(int *)(param_1 + 1) - 1);
  }
  if ((int)uVar4 == 0) {
    return 0;
  }
  do {
    uVar2 = (uint)uVar4;
    uVar3 = uVar2 - 1;
    uVar4 = (ulonglong)uVar3;
    bVar7 = puVar6[uVar4] == 0x3d;
    if (!bVar7) goto LAB_14164b0e7;
  } while (uVar3 != 0);
  bVar7 = true;
LAB_14164b0e7:
  if (!bVar7) {
    uVar3 = uVar2;
  }
  iVar1 = (uVar3 >> 2) * 3;
  iVar5 = iVar1 + 2;
  if ((uVar3 & 3) != 3) {
    iVar5 = iVar1;
  }
  if ((uVar3 & 3) == 2) {
    return iVar5 + 1;
  }
  return iVar5;
}



// FUNCTION 14164b110 FUN_14164b110 body=8 status=ok
// SIG undefined FUN_14164b110(void)

undefined8 FUN_14164b110(void)

{
  return DAT_1468e27c8;
}



// FUNCTION 14164b120 GetDerivedDataCacheRef body=79 status=ok
// SIG undefined GetDerivedDataCacheRef(void)

longlong GetDerivedDataCacheRef(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1468e27c8;
  if (DAT_1468e27c8 == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0x70,L"Derived Data Cache was requested, but not available.");
    FDebug::AssertFailed
              (&DAT_144cc287f,"Unknown",0x70,L"Derived Data Cache was requested, but not available."
              );
  }
  return lVar1;
}



// FUNCTION 14164b170 FUN_14164b170 body=811 status=ok
// SIG undefined FUN_14164b170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 ** FUN_14164b170(undefined2 **param_1,short *param_2,short *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  bool bVar9;
  undefined1 auStack_1e8 [32];
  short *local_1c8;
  undefined2 *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined2 *local_1a8;
  ulonglong local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined2 *local_188;
  int local_180;
  undefined1 local_178 [256];
  longlong local_78;
  short *local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  puVar8 = (undefined2 *)0x0;
  iVar7 = 0;
  local_198 = 0;
  local_190 = param_4;
  FString::PrintfImpl(&local_188,L"%sINI=",param_2);
  *param_1 = (undefined2 *)0x0;
  puVar5 = &DAT_143f3eda8;
  if (local_180 != 0) {
    puVar5 = local_188;
  }
  param_1[1] = (undefined2 *)0x0;
  if (DAT_1468c21f6 == '\0') {
    LowLevelFatalErrorHandler
              ("Unknown",0x1d,
               L"Attempting to get the command line but it hasn\'t been initialized yet.");
    FDebug::AssertFailed
              (&DAT_144cc26c3,"Unknown",0x1d,
               L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FParse::Value(&DAT_1468c2210,puVar5,param_1,1);
  if (cVar2 == '\0') {
    bVar9 = param_3 == (short *)0x0;
    if (bVar9) {
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(local_178,"WindowsNoEditor");
      param_3 = local_70;
    }
    local_1b8 = (undefined2 *)0x0;
    local_1ac = 0;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (param_3[lVar6] != 0);
      iVar3 = (int)lVar6 + 1;
      local_1b0 = iVar3;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
      }
      iVar7 = local_1b0;
      puVar8 = local_1b8;
      FGenericPlatformString::Memcpy(local_1b8,param_3,(longlong)iVar3 * 2);
    }
    if ((bVar9) && (local_78 != 0)) {
      FMemory::Free();
    }
    local_1a0 = 0;
    local_1a8 = (undefined2 *)0x0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (param_2[lVar6] != 0);
      uVar4 = (int)lVar6 + 1;
      local_1a0 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
      }
      FGenericPlatformString::Memcpy(local_1a8,param_2,(longlong)(int)uVar4 * 2);
    }
    uVar1 = local_190;
    local_1c8 = (short *)CONCAT44(local_1c8._4_4_,0xffffffff);
    iVar3 = FUN_141592950(&local_1a8,local_190,1);
    puVar5 = local_1a8;
    if (iVar3 == -1) {
      puVar5 = &DAT_143f3eda8;
      if (iVar7 != 0) {
        puVar5 = puVar8;
      }
      local_1c8 = param_2;
      FString::PrintfImpl(&local_1b8,L"%s%s/%s.ini",uVar1,puVar5);
      if (param_1 == &local_1b8) {
        if (local_1b8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      else {
        if (*param_1 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        *param_1 = local_1b8;
        *(int *)(param_1 + 1) = local_1b0;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_1ac;
      }
    }
    else if (param_1 != &local_1a8) {
      lVar6 = (longlong)(int)local_1a0;
      *(int *)(param_1 + 1) = (int)local_1a0;
      if (((int)local_1a0 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,local_1a0 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*param_1,puVar5,lVar6 * 2);
      }
    }
    if (local_1a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (puVar8 != (undefined2 *)0x0) {
      FMemory::Free(puVar8);
    }
  }
  FUN_1416781b0(param_1);
  if (local_188 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14164b4a0 GetDouble body=108 status=ok
// SIG undefined GetDouble(void)

undefined8
FConfigCacheIni::GetDouble
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,double *param_4,
          undefined8 param_5)

{
  char cVar1;
  wchar_t *_Str;
  undefined8 uVar2;
  double dVar3;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  cVar1 = GetString(param_1,param_2,param_3,&local_18,param_5);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    _Str = L"";
    if ((int)local_10 != 0) {
      _Str = local_18;
    }
    dVar3 = wcstod(_Str,(wchar_t **)0x0);
    *param_4 = dVar3;
    uVar2 = 1;
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar2;
}



// FUNCTION 14164b510 FUN_14164b510 body=8 status=ok
// SIG undefined FUN_14164b510(void)

undefined1 FUN_14164b510(void)

{
  return DAT_1468e2228;
}



// FUNCTION 14164b520 GetFloat body=113 status=ok
// SIG undefined GetFloat(void)

undefined8
FConfigCacheIni::GetFloat
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,float *param_4,
          undefined8 param_5)

{
  char cVar1;
  wchar_t *_Str;
  undefined8 uVar2;
  double dVar3;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  cVar1 = GetString(param_1,param_2,param_3,&local_18,param_5);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    _Str = L"";
    if ((int)local_10 != 0) {
      _Str = local_18;
    }
    dVar3 = _wtof(_Str);
    *param_4 = (float)dVar3;
    uVar2 = 1;
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar2;
}



// FUNCTION 14164b5a0 GetFloat body=103 status=ok
// SIG undefined GetFloat(void)

undefined8
FConfigFile::GetFloat(undefined8 param_1,undefined4 param_2,undefined8 param_3,float *param_4)

{
  char cVar1;
  wchar_t *_Str;
  undefined8 uVar2;
  double dVar3;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  cVar1 = GetString(param_1,param_2,param_3,&local_18);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    _Str = L"";
    if ((int)local_10 != 0) {
      _Str = local_18;
    }
    dVar3 = _wtof(_Str);
    *param_4 = (float)dVar3;
    uVar2 = 1;
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar2;
}



// FUNCTION 14164b610 GetGameUserSettingsDir body=23 status=ok
// SIG undefined GetGameUserSettingsDir(void)

undefined8 FConfigCacheIni::GetGameUserSettingsDir(undefined8 param_1)

{
  FPaths::GeneratedConfigDir();
  return param_1;
}



// FUNCTION 14164b630 GetHour12 body=85 status=ok
// SIG undefined GetHour12(void)

ulonglong FDateTime::GetHour12(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (*param_1 / 36000000000) % 0x18;
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    return 0xc;
  }
  uVar1 = (ulonglong)(iVar2 - 0xc);
  if (iVar2 < 0xd) {
    uVar1 = uVar3 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 14164b690 GetInt body=104 status=ok
// SIG undefined GetInt(void)

/* WARNING: Removing unreachable block (ram,0x00014164b6c9) */
/* WARNING: Removing unreachable block (ram,0x00014164b6e5) */

bool FConfigCacheIni::GetInt(void)

{
  char cVar1;
  int iVar2;
  int *in_R9;
  
  cVar1 = GetString();
  if (cVar1 != '\0') {
    iVar2 = _wtoi(L"");
    *in_R9 = iVar2;
  }
  return cVar1 != '\0';
}



// FUNCTION 14164b700 GetInt body=94 status=ok
// SIG undefined GetInt(void)

/* WARNING: Removing unreachable block (ram,0x00014164b72f) */
/* WARNING: Removing unreachable block (ram,0x00014164b74b) */

bool FConfigFile::GetInt(void)

{
  char cVar1;
  int iVar2;
  int *in_R9;
  
  cVar1 = GetString();
  if (cVar1 != '\0') {
    iVar2 = _wtoi(L"");
    *in_R9 = iVar2;
  }
  return cVar1 != '\0';
}



// FUNCTION 14164b760 FUN_14164b760 body=1495 status=ok
// SIG undefined FUN_14164b760(void)

longlong FUN_14164b760(longlong param_1)

{
  void *pvVar1;
  undefined1 auVar2 [12];
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  uint *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 in_XMM1_Qb;
  undefined1 auVar25 [16];
  longlong local_res10;
  void *local_268;
  int local_260;
  undefined4 local_25c;
  undefined8 local_258;
  uint *puStack_250;
  undefined4 local_248;
  int iStack_244;
  uint uStack_240;
  undefined4 uStack_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  longlong *local_228;
  uint local_220;
  int local_21c;
  longlong local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 uStack_200;
  uint *local_1f8;
  uint uStack_1f0;
  int iStack_1ec;
  undefined8 local_1e8;
  longlong *plStack_1e0;
  longlong *local_1d8;
  undefined2 local_1d0;
  ulonglong local_1c8;
  longlong *local_1c0;
  longlong lStack_1b8;
  uint *puStack_1b0;
  undefined4 uStack_1a8;
  int iStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  undefined **local_188 [5];
  byte local_15e;
  undefined8 local_f8;
  longlong local_f0;
  undefined **local_e8 [5];
  byte local_c0;
  byte local_be;
  ulonglong local_58;
  ulonglong local_50;
  
  FArchive::FArchive(local_188);
  local_15e = local_15e | 0x20;
  local_188[0] = &PTR_FUN_144cc84b0;
  plVar12 = (longlong *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_1406432a0(local_188,(longlong)*(int *)(param_1 + 0x10) * 0x130,
                (longlong)*(int *)(param_1 + 0x14) * 0x130);
  iVar4 = *(int *)(param_1 + 0x34) + 0x1f;
  iVar5 = *(int *)(param_1 + 0x30) + 0x1f;
  (*(code *)local_188[0][0xf])
            (local_188,(longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
  lVar13 = (longlong)*(int *)(param_1 + 0x50) << 2;
  (*(code *)local_188[0][0xf])(local_188,lVar13,lVar13);
  local_res10 = local_f0;
  local_208 = (longlong *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x30);
  puStack_250 = (uint *)(param_1 + 0x18);
  uVar15 = 0;
  local_228 = (longlong *)0x0;
  local_21c = 0;
  local_258 = 0x100000000;
  iStack_244 = 0;
  uStack_240 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar18 = puStack_250;
    }
    uVar6 = *puVar18;
    plVar11 = plVar12;
    plVar16 = plVar12;
    while (uVar6 == 0) {
      iVar5 = (int)plVar11;
      uStack_240 = (int)plVar16 + 0x20;
      plVar16 = (longlong *)(ulonglong)uStack_240;
      plVar11 = (longlong *)(ulonglong)(iVar5 + 1U);
      uVar14 = (ulonglong)local_258 >> 0x20;
      local_258 = CONCAT44((int)uVar14,iVar5 + 1U);
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14164b8f3;
      uVar6 = puVar18[(longlong)iVar5 + 1];
    }
    uVar6 = -uVar6 & uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    local_258 = CONCAT44(uVar6,(undefined4)local_258);
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_244 = (uStack_240 - iVar5) + 0x1f;
    if (iVar4 < iStack_244) {
LAB_14164b8f3:
      iStack_244 = iVar4;
    }
  }
  local_248 = 0xffffffff;
  uStack_1a8 = 0xffffffff;
  iStack_1a4 = iStack_244;
  uStack_1a0 = uStack_240;
  uStack_19c = uStack_23c;
  lStack_1b8 = local_258;
  local_1d0 = 0;
  uStack_1f0 = 0xffffffff;
  iStack_1ec = iStack_244;
  auVar2._4_8_ = in_XMM1_Qb;
  auVar2._0_4_ = iStack_244;
  auVar25._0_8_ = auVar2._0_8_ << 0x20;
  auVar25._8_4_ = uStack_240;
  auVar25._12_4_ = uStack_23c;
  uStack_200 = local_258;
  local_1e8 = auVar25._8_8_;
  plVar11 = plVar12;
  plVar16 = plVar12;
  plVar19 = plVar12;
  plVar20 = plVar12;
  plVar21 = plVar12;
  plVar22 = plVar12;
  local_1f8 = puStack_250;
  local_1d8 = local_208;
  local_1c0 = local_208;
  local_198 = local_208;
  puStack_1b0 = puStack_250;
  plStack_1e0 = local_208;
  if (iStack_244 < *(int *)(param_1 + 0x30)) {
    do {
      lVar13 = (longlong)iStack_1ec * 0x130;
      local_268 = (void *)0x0;
      local_260 = *(int *)(lVar13 + 8 + *local_208);
      lVar17 = (longlong)local_260;
      pvVar1 = *(void **)(lVar13 + *local_208);
      if (local_260 == 0) {
        local_25c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_268,local_260,0);
        _guard_xfg_dispatch_icall_nop(local_268,pvVar1,lVar17 * 2);
      }
      lVar17 = *local_208;
      FArchive::FArchive(local_e8);
      local_be = local_be | 0x20;
      local_e8[0] = &PTR_FUN_144cc84b0;
      local_58 = 0;
      local_50 = 0;
      FUN_14158ce90(local_e8,&local_268);
      lVar17 = lVar17 + lVar13;
      FUN_1416411c0(local_e8,lVar17 + 0x10);
      if ((local_c0 & 1) != 0) {
        if (*(longlong *)(lVar17 + 0x50) != 0) {
          uVar9 = FMemory::Realloc(*(longlong *)(lVar17 + 0x50),0);
          *(undefined8 *)(lVar17 + 0x50) = uVar9;
        }
        *(undefined4 *)(lVar17 + 0x58) = 0;
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::ConditionalRehash(lVar17 + 0x10,*(int *)(lVar17 + 0x18) - *(int *)(lVar17 + 0x44));
      }
      uVar3 = local_50;
      uVar14 = local_58;
      local_1c8 = local_50;
      uVar6 = uVar15;
      if (local_260 != 0) {
        uVar6 = local_260 - 1;
      }
      local_218 = 0;
      local_210 = 0;
      if ((int)uVar6 <= (int)(uint)plVar21) {
        uVar6 = (uint)plVar21;
      }
      local_238 = uVar6;
      FString::AppendInt(&local_218,local_58 & 0xffffffff);
      uVar8 = uVar15;
      if ((int)local_210 != 0) {
        uVar8 = (int)local_210 - 1;
      }
      if ((int)uVar8 <= (int)(uint)plVar19) {
        uVar8 = (uint)plVar19;
      }
      local_234 = uVar8;
      if (local_218 != 0) {
        FMemory::Free();
      }
      local_258 = 0;
      puStack_250 = (uint *)0x0;
      FString::AppendInt(&local_258,uVar3 & 0xffffffff);
      uVar7 = uVar15;
      if ((int)puStack_250 != 0) {
        uVar7 = (int)puStack_250 - 1;
      }
      if ((int)uVar7 <= (int)(uint)plVar20) {
        uVar7 = (uint)plVar20;
      }
      local_230 = uVar7;
      if (local_258 != 0) {
        FMemory::Free();
      }
      local_220 = (int)plVar16 + 1;
      if (local_21c < (int)local_220) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(&local_228,plVar16);
        plVar22 = local_228;
        uVar8 = local_234;
        uVar7 = local_230;
        uVar6 = local_238;
      }
      pvVar1 = local_268;
      plVar11 = (longlong *)(ulonglong)local_220;
      plVar16 = plVar22 + (longlong)(int)plVar16 * 4;
      if (plVar16 != (longlong *)0x0) {
        *plVar16 = 0;
        lVar13 = (longlong)local_260;
        *(int *)(plVar16 + 1) = local_260;
        if (local_260 == 0) {
          *(undefined4 *)((longlong)plVar16 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar16,local_260,0);
          _guard_xfg_dispatch_icall_nop((void *)*plVar16,pvVar1,lVar13 * 2);
        }
        plVar16[2] = uVar14;
        plVar16[3] = local_1c8;
      }
      FArchive::~FArchive(local_e8);
      if (local_268 != (void *)0x0) {
        FMemory::Free();
      }
      uStack_1f0 = uStack_1f0 & ~uStack_200._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_200);
      plVar16 = plVar11;
      plVar19 = (longlong *)(ulonglong)uVar8;
      plVar20 = (longlong *)(ulonglong)uVar7;
      plVar21 = (longlong *)(ulonglong)uVar6;
    } while (iStack_1ec < (int)local_1f8[6]);
    if (((char)local_1d0 != '\0') && (local_1d0._1_1_ != '\0')) {
      TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_1d8,(int)local_1d8[1] - *(int *)((longlong)local_1d8 + 0x34),1);
    }
  }
  uVar6 = (uint)plVar11;
  plVar16 = plVar22;
  if (0 < (int)uVar6) {
    if (3 < uVar6) {
      uVar8 = uVar6 & 0x80000003;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
      }
      lVar13 = 0;
      lVar23 = 0;
      lVar17 = 0;
      lVar24 = 0;
      iVar4 = 2;
      do {
        iVar5 = (int)plVar12;
        uVar15 = iVar5 + 4;
        plVar12 = (longlong *)(ulonglong)uVar15;
        lVar10 = (longlong)iVar4;
        lVar13 = plVar22[(longlong)iVar5 * 4 + 3] + lVar13;
        lVar23 = plVar22[(longlong)(iVar4 + -1) * 4 + 3] + lVar23;
        iVar5 = iVar4 + 1;
        iVar4 = iVar4 + 4;
        lVar17 = plVar22[lVar10 * 4 + 3] + lVar17;
        lVar24 = plVar22[(longlong)iVar5 * 4 + 3] + lVar24;
      } while ((int)uVar15 < (int)(uVar6 - uVar8));
      local_res10 = local_res10 + lVar13 + lVar17 + lVar23 + lVar24;
    }
    if ((int)uVar15 < (int)uVar6) {
      plVar12 = plVar22 + (longlong)(int)uVar15 * 4 + 3;
      uVar14 = (ulonglong)(uVar6 - uVar15);
      do {
        local_res10 = local_res10 + *plVar12;
        plVar12 = plVar12 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  while (uVar6 != 0) {
    if (*plVar16 != 0) {
      FMemory::Free();
    }
    uVar6 = (int)plVar11 - 1;
    plVar11 = (longlong *)(ulonglong)uVar6;
    plVar16 = plVar16 + 4;
  }
  if (plVar22 != (longlong *)0x0) {
    FMemory::Free(plVar22);
  }
  FArchive::~FArchive(local_188);
  return local_res10;
}



// FUNCTION 14164bd40 FUN_14164bd40 body=108 status=ok
// SIG undefined FUN_14164bd40(void)

undefined * FUN_14164bd40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e27b4) {
    _Init_thread_header(&DAT_1468e27b4);
    if (DAT_1468e27b4 == -1) {
      atexit((_func_5014 *)&LAB_143e79fe0);
      _Init_thread_footer(&DAT_1468e27b4);
      return &DAT_1464af820;
    }
  }
  return &DAT_1464af820;
}



// FUNCTION 14164bdb0 GetMonth body=218 status=ok
// SIG undefined GetMonth(void)

int FDateTime::GetMonth(longlong *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)((double)(*param_1 / 864000000000) + 1721426.0);
  iVar2 = ((int)ROUND((fVar3 + fVar3) - 0.5) >> 1) + 0x10bd9;
  iVar1 = ((iVar2 * 4) / 0x23ab1) * 0x23ab1 + 3;
  iVar2 = iVar2 - ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
  iVar1 = (((iVar2 + 1) * 4000) / 0x164b09) * 0x5b5;
  iVar1 = (((iVar2 - ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + 0x1f) * 0x50) / 0x98f;
  return iVar1 + (iVar1 / 0xb) * -0xc + 2;
}



// FUNCTION 14164be90 GetOriginalForLogging body=81 status=ok
// SIG undefined GetOriginalForLogging(void)

undefined * FCommandLine::GetOriginalForLogging(void)

{
  if (DAT_1468c21f6 == '\0') {
    LowLevelFatalErrorHandler
              ("Unknown",0x2f,
               L"Attempting to get the command line but it hasn\'t been initialized yet.");
    FDebug::AssertFailed
              (&DAT_144cc26ea,"Unknown",0x2f,
               L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  return &DAT_1468da210;
}



// FUNCTION 14164bef0 FUN_14164bef0 body=108 status=ok
// SIG undefined FUN_14164bef0(void)

undefined8 * FUN_14164bef0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e2798) {
    _Init_thread_header(&DAT_1468e2798);
    if (DAT_1468e2798 == -1) {
      atexit(FUN_143e79ff0);
      _Init_thread_footer(&DAT_1468e2798);
      return &DAT_1468e2788;
    }
  }
  return &DAT_1468e2788;
}



// FUNCTION 14164bf60 FUN_14164bf60 body=108 status=ok
// SIG undefined FUN_14164bf60(void)

undefined8 * FUN_14164bf60(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e27b0) {
    _Init_thread_header(&DAT_1468e27b0);
    if (DAT_1468e27b0 == -1) {
      atexit(FUN_143e7a060);
      _Init_thread_footer(&DAT_1468e27b0);
      return &DAT_1468e27a0;
    }
  }
  return &DAT_1468e27a0;
}



// FUNCTION 14164bfd0 FUN_14164bfd0 body=123 status=ok
// SIG undefined FUN_14164bfd0(void)

undefined * FUN_14164bfd0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e2898) {
    _Init_thread_header(&DAT_1468e2898);
    if (DAT_1468e2898 == -1) {
      FUN_14158c9a0(&DAT_1468e2840);
      atexit((_func_5014 *)&LAB_143e7a0e0);
      _Init_thread_footer(&DAT_1468e2898);
      return &DAT_1468e2840;
    }
  }
  return &DAT_1468e2840;
}



// FUNCTION 14164c050 FUN_14164c050 body=108 status=ok
// SIG undefined FUN_14164c050(void)

undefined * FUN_14164c050(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e2784) {
    _Init_thread_header(&DAT_1468e2784);
    if (DAT_1468e2784 == -1) {
      atexit((_func_5014 *)&LAB_143e7a0f0);
      _Init_thread_footer(&DAT_1468e2784);
      return &DAT_1464af808;
    }
  }
  return &DAT_1464af808;
}



// FUNCTION 14164c0c0 FUN_14164c0c0 body=134 status=ok
// SIG undefined FUN_14164c0c0(void)

undefined8 * FUN_14164c0c0(void)

{
  undefined8 *puVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468e27c0) && (_Init_thread_header(&DAT_1468e27c0), DAT_1468e27c0 == -1))
  {
    puVar1 = (undefined8 *)operator_new();
    DAT_1468e27b8 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1468e27b8 = puVar1;
    }
    _Init_thread_footer(&DAT_1468e27c0);
    return DAT_1468e27b8;
  }
  return DAT_1468e27b8;
}



// FUNCTION 14164c150 GetSection body=999 status=ok
// SIG undefined GetSection(void)

/* WARNING: Removing unreachable block (ram,0x00014164c4c3) */

undefined8
FConfigCacheIni::GetSection(undefined8 param_1,short *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int *piVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint *puVar17;
  int local_res18 [4];
  longlong *local_c8;
  undefined8 local_c0;
  uint local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  int iStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  if (*(int *)(param_4 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*param_4;
  }
  uVar3 = FRemoteConfig::Get();
  FRemoteConfig::FinishRead(uVar3,puVar15);
  iVar2 = *(int *)((longlong)param_3 + 0xc);
  plVar10 = (longlong *)*param_3;
  iVar11 = (int)param_3[1];
  if (iVar2 < 0) {
    if (iVar11 != 0) {
      do {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      iVar2 = *(int *)((longlong)param_3 + 0xc);
    }
    *(undefined4 *)(param_3 + 1) = 0;
    if (iVar2 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
    }
  }
  else {
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    *(undefined4 *)(param_3 + 1) = 0;
  }
  plVar10 = (longlong *)0x0;
  plVar4 = (longlong *)Find(param_1,param_4,0);
  if (plVar4 != (longlong *)0x0) {
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    plVar5 = plVar10;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar13 = -1;
      do {
        lVar13 = lVar13 + 1;
      } while (param_2[lVar13] != 0);
      uVar12 = (int)lVar13 + 1;
      local_c0 = (ulonglong)uVar12;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      }
      plVar5 = local_c8;
      FGenericPlatformString::Memcpy(local_c8,param_2,(longlong)(int)uVar12 * 2);
    }
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar4,local_res18,&local_c8);
    plVar14 = plVar10;
    if (local_res18[0] != -1) {
      plVar14 = (longlong *)((longlong)local_res18[0] * 0xb8 + *plVar4);
    }
    plVar4 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar4 = plVar10;
    }
    if (plVar5 != (longlong *)0x0) {
      FMemory::Free(plVar5);
    }
    if (plVar4 != (longlong *)0x0) {
      piVar9 = (int *)((longlong)plVar14 + 0x44);
      plVar5 = plVar14 + 3;
      if (plVar14 == (longlong *)0x0) {
        piVar9 = (int *)&DAT_00000034;
        plVar5 = (longlong *)&DAT_00000008;
      }
      if (*(int *)((longlong)param_3 + 0xc) < (int)*plVar5 - *piVar9) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3);
      }
      iVar2 = (int)plVar4[5];
      puStack_b0 = (uint *)(plVar4 + 2);
      local_b8 = 0;
      uStack_b4 = 1;
      iStack_a4 = 0;
      uStack_a0 = 0;
      if (iVar2 != 0) {
        puVar17 = (uint *)plVar4[4];
        if ((uint *)plVar4[4] == (uint *)0x0) {
          puVar17 = puStack_b0;
        }
        uVar12 = *puVar17;
        plVar5 = plVar10;
        while (uVar12 == 0) {
          iVar11 = (int)plVar10;
          uStack_a0 = (int)plVar5 + 0x20;
          plVar5 = (longlong *)(ulonglong)uStack_a0;
          local_b8 = iVar11 + 1;
          plVar10 = (longlong *)(ulonglong)local_b8;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11) goto LAB_14164c39f;
          uVar12 = puVar17[(longlong)iVar11 + 1];
        }
        uStack_b4 = -uVar12 & uVar12;
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
        iStack_a4 = (uStack_a0 - iVar11) + 0x1f;
        if (iVar2 < iStack_a4) {
LAB_14164c39f:
          iStack_a4 = iVar2;
        }
      }
      local_a8 = 0xffffffff;
      uStack_80 = CONCAT44(iStack_a4,0xffffffff);
      auStack_40._8_4_ = uStack_a0;
      auStack_40._0_8_ = uStack_80;
      auStack_40._12_4_ = uStack_9c;
      uStack_90 = CONCAT44(uStack_b4,local_b8);
      local_60 = 0;
      local_30._0_4_ = SUB84(plVar4,0);
      local_30._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
      local_78._8_4_ = (undefined4)local_30;
      local_78._0_8_ = auStack_40._8_8_;
      local_78._12_4_ = local_30._4_4_;
      iVar2 = iStack_a4;
      local_98 = plVar4;
      local_88 = puStack_b0;
      local_68 = plVar4;
      local_58 = plVar4;
      uStack_50 = uStack_90;
      puStack_48 = puStack_b0;
      local_30 = plVar4;
      if (iStack_a4 < (int)plVar4[5]) {
        do {
          lVar6 = (longlong)iVar2;
          lVar1 = *local_98;
          iVar2 = *(int *)(lVar1 + 0x20 + lVar6 * 0x30);
          lVar13 = lVar1 + lVar6 * 0x30;
          lVar7 = 0x18;
          iVar11 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar11 = 0;
          }
          if (iVar11 < 1) {
            lVar7 = 8;
          }
          if (*(int *)(lVar7 + 8 + lVar13) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = *(undefined2 **)(lVar7 + lVar13);
          }
          puVar8 = (undefined8 *)FName::ToString(lVar1 + lVar6 * 0x30,&local_b8);
          if (*(int *)(puVar8 + 1) == 0) {
            puVar16 = &DAT_143f3eda8;
          }
          else {
            puVar16 = (undefined2 *)*puVar8;
          }
          FString::PrintfImpl(&local_c8,L"%s=%s",puVar16,puVar15);
          iVar2 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
          }
          puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_3);
          *puVar8 = 0;
          *puVar8 = local_c8;
          *(undefined4 *)(puVar8 + 1) = (undefined4)local_c0;
          *(undefined4 *)((longlong)puVar8 + 0xc) = local_c0._4_4_;
          local_c0 = 0;
          local_c8 = (longlong *)0x0;
          if (CONCAT44(uStack_b4,local_b8) != 0) {
            FMemory::Free();
          }
          uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
          iVar2 = uStack_80._4_4_;
        } while (uStack_80._4_4_ < (int)local_88[6]);
        if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
          TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14164c540 GetSectionNames body=520 status=ok
// SIG undefined GetSectionNames(void)

undefined8 FConfigCacheIni::GetSectionNames(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint *puVar8;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar4 = (longlong *)Find(param_1,param_2,0);
  uVar6 = 0;
  if (plVar4 != (longlong *)0x0) {
    TArray<FString,FDefaultAllocator>::Empty
              (param_3,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c));
    iVar2 = (int)plVar4[5];
    puStack_28 = (uint *)(plVar4 + 2);
    local_78 = 0;
    uStack_74 = 1;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar2 != 0) {
      puVar8 = (uint *)plVar4[4];
      if ((uint *)plVar4[4] == (uint *)0x0) {
        puVar8 = puStack_28;
      }
      uVar1 = *puVar8;
      uStack_60 = 0;
      local_78 = 0;
      while (uVar1 == 0) {
        lVar5 = (longlong)local_78;
        uStack_60 = uStack_60 + 0x20;
        iVar7 = local_78 + 1;
        bVar3 = (int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 <= local_78;
        local_78 = iVar7;
        if (bVar3) goto LAB_14164c630;
        uVar1 = puVar8[lVar5 + 1];
      }
      uStack_74 = -uVar1 & uVar1;
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
      if (iVar2 < local_68._4_4_) {
LAB_14164c630:
        local_68._4_4_ = iVar2;
      }
    }
    auStack_20._4_4_ = local_68._4_4_;
    auStack_20._0_4_ = 0xffffffff;
    auStack_20._8_4_ = uStack_60;
    auStack_20._12_4_ = iStack_5c;
    iStack_30 = local_78;
    uStack_2c = uStack_74;
    local_40 = 0;
    local_10._0_4_ = SUB84(plVar4,0);
    local_10._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    iStack_70 = local_78;
    uStack_6c = uStack_74;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar3 = local_68._4_4_ < (int)plVar4[5];
    local_48 = plVar4;
    local_38 = plVar4;
    local_10 = plVar4;
    local_68 = puStack_28;
    if (bVar3) {
      do {
        iVar7 = iStack_5c;
        iVar2 = *(int *)(param_3 + 1);
        lVar5 = *plVar4;
        *(int *)(param_3 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
        }
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)*param_3 + 0x10),(void *)*param_3,(longlong)iVar2 << 4);
        FString::FString(*param_3,(longlong)iVar7 * 0xb8 + lVar5);
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 14164c750 GetSectionPrivate body=639 status=ok
// SIG undefined GetSectionPrivate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FConfigCacheIni::GetSectionPrivate
                   (undefined8 param_1,short *param_2,char param_3,char param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_138 [32];
  int local_118 [2];
  longlong local_110;
  ulonglong local_108;
  longlong *local_100;
  undefined8 *local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(int *)(param_5 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_5;
  }
  uVar1 = FRemoteConfig::Get();
  FRemoteConfig::FinishRead(uVar1,puVar6);
  plVar2 = (longlong *)Find(param_1,param_5,param_3);
  lVar5 = 0;
  if (plVar2 != (longlong *)0x0) {
    lVar8 = 0;
    local_110 = 0;
    local_108 = 0;
    lVar7 = lVar8;
    if ((param_2 != (short *)0x0) && (lVar7 = 0, *param_2 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (param_2[lVar5] != 0);
      uVar4 = (int)lVar5 + 1;
      local_108 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
      }
      lVar7 = local_110;
      FGenericPlatformString::Memcpy(local_110,param_2,(longlong)(int)uVar4 * 2);
    }
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar2,local_118,&local_110);
    lVar3 = lVar8;
    if (local_118[0] != -1) {
      lVar3 = (longlong)local_118[0] * 0xb8 + *plVar2;
    }
    lVar5 = lVar3 + 0x10;
    if (lVar3 == 0) {
      lVar5 = lVar8;
    }
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
    if ((lVar5 == 0) && (param_3 != '\0')) {
      local_108 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_b0 = 0;
      local_9c = 0;
      local_88 = 0;
      local_80 = 0;
      local_60 = 0;
      local_4c = 0;
      local_110 = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (param_2[lVar5] != 0);
        uVar4 = (int)lVar5 + 1;
        local_108 = (ulonglong)uVar4;
        if (0 < (int)uVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
        }
        FGenericPlatformString::Memcpy(local_110,param_2,(longlong)(int)uVar4 * 2);
      }
      local_100 = &local_110;
      local_e8 = 0;
      local_f8 = &local_e8;
      local_e0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FConfigSection_&&>_>(plVar2,local_118,&local_100,0);
      lVar5 = *plVar2 + (longlong)local_118[0] * 0xb8 + 0x10;
      FConfigSection::~FConfigSection(&local_e8);
      if (local_110 != 0) {
        FMemory::Free();
      }
    }
    if ((lVar5 != 0) && ((param_3 != '\0' || (param_4 == '\0')))) {
      *(undefined1 *)(plVar2 + 10) = 1;
    }
  }
  return lVar5;
}



// FUNCTION 14164c9d0 GetSingleLineArray body=335 status=ok
// SIG undefined GetSingleLineArray(void)

undefined1 FConfigCacheIni::GetSingleLineArray(void)

{
  int iVar1;
  void *_Src;
  undefined1 uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *in_R9;
  undefined2 *local_48;
  void *local_40;
  ulonglong local_38;
  undefined2 *local_30;
  undefined8 local_28;
  
  local_30 = (undefined2 *)0x0;
  local_28 = 0;
  uVar2 = GetString();
  local_40 = (void *)0x0;
  local_48 = &DAT_143f3eda8;
  if ((int)local_28 != 0) {
    local_48 = local_30;
  }
  local_38 = 0;
  cVar3 = FParse::Token(&local_48,&local_40,0);
  while (cVar3 != '\0') {
    iVar1 = (int)in_R9[1];
    *(int *)(in_R9 + 1) = iVar1 + 1;
    if (*(int *)((longlong)in_R9 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(in_R9,iVar1);
    }
    _Src = local_40;
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *in_R9);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      lVar5 = (longlong)(int)local_38;
      *(int *)(puVar4 + 1) = (int)local_38;
      if ((int)local_38 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,local_38 & 0xffffffff,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,lVar5 * 2);
      }
    }
    cVar3 = FParse::Token(&local_48,&local_40);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_30 != (undefined2 *)0x0) {
    FMemory::Free(local_30);
  }
  return uVar2;
}



// FUNCTION 14164cb20 FUN_14164cb20 body=6303 status=ok
// SIG undefined FUN_14164cb20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14164cb20(short *param_1,short *param_2,undefined2 *param_3,undefined2 **param_4,
                  undefined8 *param_5,undefined1 param_6)

{
  void *pvVar1;
  undefined1 ***_Src;
  void *pvVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined *puVar14;
  undefined2 **ppuVar15;
  void *pvVar16;
  undefined1 ***pppuVar17;
  longlong lVar18;
  undefined2 ***pppuVar19;
  undefined2 ***pppuVar20;
  bool bVar21;
  undefined1 auStack_278 [32];
  void *local_258;
  short *local_250;
  undefined1 local_248 [8];
  undefined2 *local_240;
  void **local_238;
  undefined2 *local_230;
  undefined8 local_228;
  void *local_220;
  int local_218;
  undefined4 local_214;
  undefined1 local_210;
  longlong local_208 [2];
  void *local_1f8;
  ulonglong local_1f0;
  undefined1 ***local_1e8;
  undefined2 *local_1e0;
  undefined1 ***local_1d8;
  int local_1d0;
  uint local_1cc;
  int local_1c8 [2];
  undefined2 **local_1c0;
  undefined2 *local_1b8;
  void *local_1b0;
  ulonglong local_1a8;
  undefined1 ***local_1a0;
  undefined8 local_198;
  undefined2 *local_190;
  int local_188;
  undefined4 local_184;
  short local_178 [128];
  longlong local_78;
  short *local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_1c8[0] = 0;
  bVar21 = param_2 == (short *)0x0;
  local_1c0 = param_4;
  local_1b8 = param_3;
  if (bVar21) {
    local_78 = 0;
    local_68 = 7;
    local_258 = (void *)CONCAT62(local_258._2_6_,0x3f);
    local_70 = local_178;
    FGenericPlatformString::Convert<char,wchar_t>(local_178,8,"Windows");
    param_2 = local_70;
  }
  local_1a8 = 0;
  local_1b0 = (void *)0x0;
  lVar18 = -1;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while (param_2[lVar13] != 0);
    uVar11 = (int)lVar13 + 1;
    local_1a8 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,0);
    }
    FGenericPlatformString::Memcpy(local_1b0,param_2,(longlong)(int)uVar11 * 2);
  }
  if ((bVar21) && (local_78 != 0)) {
    FMemory::Free();
  }
  plVar6 = (longlong *)FUN_141649e30();
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::FindId(plVar6,local_1c8,&local_1b0);
  puVar7 = (undefined *)0x0;
  if (local_1c8[0] != -1) {
    puVar7 = (undefined *)((longlong)local_1c8[0] * 0x30 + *plVar6);
  }
  puVar14 = puVar7 + 0x10;
  if (puVar7 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468e28c0) && (_Init_thread_header(&DAT_1468e28c0), DAT_1468e28c0 == -1))
  {
    DAT_1468e28a8 = 0;
    DAT_1468e28b0 = 0;
    _DAT_1468e28b8 = 0;
    atexit((_func_5014 *)&LAB_143e79ae0);
    _Init_thread_footer(&DAT_1468e28c0);
  }
  local_1f8 = (void *)0x0;
  puVar7 = &DAT_1468e28a8;
  if (puVar14 != (undefined *)0x0) {
    puVar7 = puVar14;
  }
  local_1c8[0] = *(int *)(puVar7 + 0x10);
  lVar13 = (longlong)local_1c8[0];
  pvVar1 = *(void **)(puVar7 + 8);
  local_1f0 = CONCAT44(local_1f0._4_4_,local_1c8[0]);
  iVar12 = 0;
  if (local_1c8[0] != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1f8,local_1c8[0],0);
    _guard_xfg_dispatch_icall_nop(local_1f8,pvVar1,lVar13 * 2);
    iVar12 = (int)local_1f0;
  }
  local_1c8[0] = iVar12;
  puVar8 = (undefined8 *)FPaths::EngineConfigDir(&local_230);
  puVar10 = local_1b8;
  if (*(int *)(puVar8 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar8;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(local_1b8,puVar9);
  if (local_230 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_248[0] = 0;
  local_1e8 = (undefined1 ***)0x0;
  local_1e0 = (undefined2 *)0x0;
  FString::PrintfImpl(&local_240,L"%sBase.ini",puVar10);
  puVar10 = local_240;
  local_220 = (void *)0x0;
  iVar5 = (int)local_238;
  local_218 = iVar5;
  if (iVar5 == 0) {
    local_214 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_220,(ulonglong)local_238 & 0xffffffff,0)
    ;
    _guard_xfg_dispatch_icall_nop(local_220,puVar10,(longlong)iVar5 * 2);
  }
  local_210 = iVar4 == 0;
  FString::FString(local_208,&local_1e8);
  if (local_1e8 != (undefined1 ***)0x0) {
    FMemory::Free();
  }
  local_230 = (undefined2 *)local_248;
  local_228 = &local_220;
  TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
            (param_5,&local_1d8,&local_230,0);
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  if (local_220 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_240 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar9 = local_1b8;
  local_248[0] = 1;
  local_1e8 = (undefined1 ***)0x0;
  local_1e0 = (undefined2 *)0x0;
  FString::PrintfImpl(&local_240,L"%sBase%s.ini",local_1b8,param_1);
  puVar10 = local_240;
  local_220 = (void *)0x0;
  iVar4 = (int)local_238;
  local_218 = iVar4;
  if (iVar4 == 0) {
    local_214 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_220,(ulonglong)local_238 & 0xffffffff,0)
    ;
    _guard_xfg_dispatch_icall_nop(local_220,puVar10,(longlong)iVar4 * 2);
  }
  local_210 = 0;
  FString::FString(local_208,&local_1e8);
  if (local_1e8 != (undefined1 ***)0x0) {
    FMemory::Free();
  }
  local_230 = (undefined2 *)local_248;
  local_228 = &local_220;
  TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
            (param_5,&local_1d8,&local_230,0);
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  if (local_220 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_240 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if ((iVar12 != 0) && (0 < iVar12 + -1)) {
    local_248[0] = 2;
    local_1e8 = (undefined1 ***)0x0;
    local_1e0 = (undefined2 *)0x0;
    local_258 = local_1f8;
    local_250 = param_1;
    FString::PrintfImpl(&local_240,L"%s%s/Base%s%s.ini",puVar9,local_1f8);
    puVar10 = local_240;
    local_220 = (void *)0x0;
    iVar12 = (int)local_238;
    local_218 = iVar12;
    if (iVar12 == 0) {
      local_214 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_220,(ulonglong)local_238 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_220,puVar10,(longlong)iVar12 * 2);
    }
    local_210 = 0;
    FString::FString(local_208,&local_1e8);
    if (local_1e8 != (undefined1 ***)0x0) {
      FMemory::Free();
    }
    local_230 = (undefined2 *)local_248;
    local_228 = &local_220;
    TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
              (param_5,&local_1d8,&local_230,0);
    if (local_208[0] != 0) {
      FMemory::Free();
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  pppuVar19 = (undefined2 ***)0x0;
  iVar12 = 0;
  if (((int)local_1a8 != 0) && (0 < (int)local_1a8 + -1)) {
    local_258 = local_1b0;
    local_248[0] = 3;
    local_1e8 = (undefined1 ***)0x0;
    local_1e0 = (undefined2 *)0x0;
    local_250 = param_1;
    FString::PrintfImpl(&local_240,L"%s%s/Base%s%s.ini",puVar9);
    puVar10 = local_240;
    local_220 = (void *)0x0;
    iVar4 = (int)local_238;
    local_218 = iVar4;
    if (iVar4 == 0) {
      local_214 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_220,(ulonglong)local_238 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_220,puVar10,(longlong)iVar4 * 2);
    }
    local_210 = 0;
    FString::FString(local_208,&local_1e8);
    if (local_1e8 != (undefined1 ***)0x0) {
      FMemory::Free();
    }
    local_230 = (undefined2 *)local_248;
    local_228 = &local_220;
    TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
              (param_5,&local_1d8,&local_230,0);
    if (local_208[0] != 0) {
      FMemory::Free();
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  local_248[0] = 4;
  local_1e8 = (undefined1 ***)0x0;
  local_1e0 = (undefined2 *)0x0;
  FString::PrintfImpl(&local_240,L"%sNotForLicensees/Base%s.ini",puVar9,param_1);
  puVar10 = local_240;
  local_220 = (void *)0x0;
  iVar4 = (int)local_238;
  local_218 = iVar4;
  local_238._0_4_ = iVar4;
  if (iVar4 == 0) {
    local_214 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_220,(ulonglong)local_238 & 0xffffffff,0)
    ;
    _guard_xfg_dispatch_icall_nop(local_220,puVar10,(longlong)iVar4 * 2);
  }
  local_210 = 0;
  FString::FString(local_208,&local_1e8);
  if (local_1e8 != (undefined1 ***)0x0) {
    FMemory::Free();
  }
  local_230 = (undefined2 *)local_248;
  local_228 = &local_220;
  TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
            (param_5,&local_1d8,&local_230,0);
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  if (local_220 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_240 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar6 = (longlong *)FUN_1415c3d50();
  FString::PrintfImpl(&local_240,L"%sNoRedist",puVar9);
  puVar10 = &DAT_143f3eda8;
  if ((int)local_238 != 0) {
    puVar10 = local_240;
  }
  cVar3 = (**(code **)(*plVar6 + 0x50))(plVar6,puVar10);
  if (local_240 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    plVar6 = (longlong *)FUN_1415c3d50();
    FString::PrintfImpl(&local_240,L"%sNoRedist/Base%s.ini",puVar9,param_1);
    puVar10 = &DAT_143f3eda8;
    if ((int)local_238 != 0) {
      puVar10 = local_240;
    }
    local_258 = (void *)CONCAT71(local_258._1_7_,1);
    (**(code **)(*plVar6 + 0x30))(plVar6,puVar10,0,1);
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    plVar6 = (longlong *)FUN_1415c3d50();
    FString::PrintfImpl(&local_240,L"%sNoRedist",puVar9);
    puVar10 = &DAT_143f3eda8;
    if ((int)local_238 != 0) {
      puVar10 = local_240;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,puVar10,0,0);
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  local_248[0] = 6;
  local_240 = (undefined2 *)0x0;
  local_238 = (void **)0x0;
  local_1e8 = (undefined1 ***)0x0;
  FString::PrintfImpl(&local_230,L"%s%s.ini",L"Default",param_1);
  local_1d8 = (undefined1 ***)0x0;
  local_1cc = 0;
  pppuVar20 = pppuVar19;
  if ((local_1c0 != (undefined2 **)0x0) && (*(short *)local_1c0 != 0)) {
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while (*(short *)((longlong)local_1c0 + lVar13 * 2) != 0);
    iVar4 = (int)lVar13 + 1;
    local_1d0 = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
      pppuVar20 = (undefined2 ***)(ulonglong)local_1cc;
    }
    iVar12 = local_1d0;
    pppuVar19 = (undefined2 ***)local_1d8;
    FGenericPlatformString::Memcpy(local_1d8,local_1c0,(longlong)iVar4 * 2);
  }
  if ((int)local_228 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)local_228 + -1;
  }
  if ((iVar12 != 0) || (iVar5 = 2, iVar4 == -1)) {
    iVar5 = 1;
  }
  local_198 = CONCAT44((int)pppuVar20,iVar12);
  local_1a0 = (undefined1 ***)pppuVar19;
  if ((int)pppuVar20 < iVar5 + iVar4 + iVar12) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1a0);
  }
  FString::PathAppend(&local_1a0,local_230,iVar4);
  if (local_1e8 != (undefined1 ***)0x0) {
    FMemory::Free();
  }
  pppuVar17 = (undefined1 ***)0x0;
  local_1e8 = local_1a0;
  local_1e0 = (undefined2 *)local_198;
  local_198 = 0;
  local_1a0 = (undefined1 ***)0x0;
  if (local_230 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1416781b0(&local_1e8);
  _Src = local_1e8;
  lVar13 = (longlong)(int)local_1e0;
  local_220 = (void *)0x0;
  local_218 = (int)local_1e0;
  if ((int)local_1e0 == 0) {
    local_214 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_220,(ulonglong)local_1e0 & 0xffffffff,0)
    ;
    _guard_xfg_dispatch_icall_nop(local_220,_Src,lVar13 * 2);
  }
  local_210 = param_6;
  FString::FString(local_208,&local_240);
  if (local_240 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_240 = (undefined2 *)local_248;
  local_238 = &local_220;
  TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
            (param_5,&local_1d8,&local_240,0);
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  if (local_220 != (void *)0x0) {
    FMemory::Free();
  }
  if ((undefined2 ***)local_1e8 != (undefined2 ***)0x0) {
    FMemory::Free();
  }
  ppuVar15 = local_1c0;
  local_248[0] = 8;
  local_240 = (undefined2 *)0x0;
  local_238 = (void **)0x0;
  FString::PrintfImpl(&local_230,L"%sNotForLicensees/Default%s.ini",local_1c0,param_1);
  puVar10 = local_230;
  local_220 = (void *)0x0;
  iVar12 = (int)local_228;
  local_218 = iVar12;
  if (iVar12 == 0) {
    local_214 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_220,(ulonglong)local_228 & 0xffffffff,0)
    ;
    _guard_xfg_dispatch_icall_nop(local_220,puVar10,(longlong)iVar12 * 2);
  }
  local_210 = 0;
  FString::FString(local_208,&local_240);
  if (local_240 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_240 = (undefined2 *)local_248;
  local_238 = &local_220;
  TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
            (param_5,&local_1d8,&local_240,0);
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  if (local_220 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_230 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_190,L"%sNoRedist/Default%s.ini",ppuVar15,param_1);
  local_1e8 = (undefined1 ***)0x0;
  local_1e0 = (undefined2 *)0x0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while (param_1[lVar13] != 0);
    uVar11 = (int)lVar13 + 1;
    local_1e0 = (undefined2 *)(ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
    }
    pppuVar17 = local_1e8;
    FGenericPlatformString::Memcpy(local_1e8,param_1,(longlong)(int)uVar11 * 2);
  }
  puVar10 = local_190;
  local_240 = (undefined2 *)0x0;
  local_238 = (void **)0x0;
  local_220 = (void *)0x0;
  local_248[0] = 9;
  local_218 = local_188;
  if (local_188 == 0) {
    local_214 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_220,local_188,0);
    _guard_xfg_dispatch_icall_nop(local_220,puVar10,(longlong)local_188 * 2);
  }
  local_210 = 0;
  FString::FString(local_208,&local_240);
  if (local_240 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_230 = (undefined2 *)local_248;
  local_228 = &local_220;
  TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
            (param_5,&local_1d8,&local_230,0);
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  if (local_220 != (void *)0x0) {
    FMemory::Free();
  }
  if (pppuVar17 != (undefined1 ***)0x0) {
    FMemory::Free(pppuVar17);
  }
  puVar10 = local_1b8;
  pvVar1 = local_1f8;
  ppuVar15 = local_1c0;
  if ((local_1c8[0] != 0) && (0 < local_1c8[0] + -1)) {
    local_258 = local_1f8;
    local_248[0] = 10;
    local_240 = (undefined2 *)0x0;
    local_238 = (void **)0x0;
    local_250 = param_1;
    FString::PrintfImpl(&local_230,L"%s%s/%s%s.ini",local_1b8,local_1f8);
    puVar9 = local_230;
    local_220 = (void *)0x0;
    iVar12 = (int)local_228;
    local_218 = iVar12;
    if (iVar12 == 0) {
      local_214 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_220,(ulonglong)local_228 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_220,puVar9,(longlong)iVar12 * 2);
    }
    local_210 = 0;
    FString::FString(local_208,&local_240);
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_240 = (undefined2 *)local_248;
    local_238 = &local_220;
    TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
              (param_5,&local_1d8,&local_240,0);
    if (local_208[0] != 0) {
      FMemory::Free();
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_230 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_258 = pvVar1;
    local_248[0] = 0xc;
    local_240 = (undefined2 *)0x0;
    local_238 = (void **)0x0;
    local_250 = param_1;
    FString::PrintfImpl(&local_230,L"%sNotForLicensees/%s/%s%s.ini",puVar10,pvVar1);
    puVar9 = local_230;
    local_220 = (void *)0x0;
    iVar12 = (int)local_228;
    local_218 = iVar12;
    if (iVar12 == 0) {
      local_214 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_220,(ulonglong)local_228 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_220,puVar9,(longlong)iVar12 * 2);
    }
    local_210 = 0;
    FString::FString(local_208,&local_240);
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_240 = (undefined2 *)local_248;
    local_238 = &local_220;
    TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
              (param_5,&local_1d8,&local_240,0);
    if (local_208[0] != 0) {
      FMemory::Free();
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_230 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_258 = pvVar1;
    local_248[0] = 0xe;
    local_240 = (undefined2 *)0x0;
    local_238 = (void **)0x0;
    local_250 = param_1;
    FString::PrintfImpl(&local_1f8,L"%sNoRedist/%s/%s%s.ini",puVar10,pvVar1);
    FString::FString(&local_220,&local_1f8);
    local_210 = 0;
    FString::FString(local_208,&local_240);
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_230 = (undefined2 *)local_248;
    local_228 = &local_220;
    TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
              (param_5,&local_1d8,&local_230,0);
    if (local_208[0] != 0) {
      FMemory::Free();
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1f8 != (void *)0x0) {
      FMemory::Free();
    }
    ppuVar15 = local_1c0;
    local_248[0] = 0x10;
    local_240 = (undefined2 *)0x0;
    local_238 = (void **)0x0;
    local_258 = pvVar1;
    local_250 = param_1;
    FString::PrintfImpl(&local_1f8,L"%s%s/%s%s.ini",local_1c0,pvVar1);
    FString::FString(&local_220,&local_1f8);
    local_210 = 0;
    FString::FString(local_208,&local_240);
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_230 = (undefined2 *)local_248;
    local_228 = &local_220;
    TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
              (param_5,&local_1d8,&local_230,0);
    if (local_208[0] != 0) {
      FMemory::Free();
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1f8 != (void *)0x0) {
      FMemory::Free();
    }
    local_258 = pvVar1;
    local_248[0] = 0x12;
    local_240 = (undefined2 *)0x0;
    local_238 = (void **)0x0;
    local_250 = param_1;
    FString::PrintfImpl(&local_1f8,L"%sNotForLicensees/%s/%s%s.ini",ppuVar15,pvVar1);
    FString::FString(&local_220,&local_1f8);
    local_210 = 0;
    FString::FString(local_208,&local_240);
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_230 = (undefined2 *)local_248;
    local_228 = &local_220;
    TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
              (param_5,&local_1d8,&local_230,0);
    if (local_208[0] != 0) {
      FMemory::Free();
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1f8 != (void *)0x0) {
      FMemory::Free();
    }
    local_258 = pvVar1;
    local_248[0] = 0x14;
    local_240 = (undefined2 *)0x0;
    local_238 = (void **)0x0;
    local_250 = param_1;
    FString::PrintfImpl(&local_1f8,L"%sNoRedist/%s/%s%s.ini",ppuVar15,pvVar1);
    FString::FString(&local_220,&local_1f8);
    local_210 = 0;
    FString::FString(local_208,&local_240);
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_230 = (undefined2 *)local_248;
    local_228 = &local_220;
    TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
              (param_5,&local_1d8,&local_230,0);
    if (local_208[0] != 0) {
      FMemory::Free();
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1f8 != (void *)0x0) {
      FMemory::Free();
    }
  }
  pvVar2 = local_1b0;
  if (((int)local_1a8 != 0) && (0 < (int)local_1a8 + -1)) {
    local_240 = (undefined2 *)0x0;
    local_248[0] = 0xb;
    local_238 = (void **)0x0;
    local_258 = local_1b0;
    local_250 = param_1;
    FString::PrintfImpl(&local_1f8,L"%s%s/%s%s.ini",puVar10,local_1b0);
    FString::FString(&local_220,&local_1f8);
    local_210 = 0;
    FString::FString(local_208,&local_240);
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_230 = (undefined2 *)local_248;
    local_228 = &local_220;
    TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
              (param_5,&local_1d8,&local_230,0);
    if (local_208[0] != 0) {
      FMemory::Free();
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1f8 != (void *)0x0) {
      FMemory::Free();
    }
    local_240 = (undefined2 *)0x0;
    local_238 = (void **)0x0;
    local_248[0] = 0xd;
    local_258 = pvVar2;
    local_250 = param_1;
    FString::PrintfImpl(&local_1f8,L"%sNotForLicensees/%s/%s%s.ini",puVar10,pvVar2);
    FString::FString(&local_220,&local_1f8);
    local_210 = 0;
    FString::FString(local_208,&local_240);
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_230 = (undefined2 *)local_248;
    local_228 = &local_220;
    TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
              (param_5,&local_1d8,&local_230,0);
    if (local_208[0] != 0) {
      FMemory::Free();
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1f8 != (void *)0x0) {
      FMemory::Free();
    }
    local_240 = (undefined2 *)0x0;
    local_238 = (void **)0x0;
    local_248[0] = 0xf;
    local_258 = pvVar2;
    local_250 = param_1;
    FString::PrintfImpl(&local_1f8,L"%sNoRedist/%s/%s%s.ini",puVar10,pvVar2);
    FString::FString(&local_220,&local_1f8);
    local_210 = 0;
    FString::FString(local_208,&local_240);
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_230 = (undefined2 *)local_248;
    local_228 = &local_220;
    TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
              (param_5,&local_1d8,&local_230,0);
    if (local_208[0] != 0) {
      FMemory::Free();
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1f8 != (void *)0x0) {
      FMemory::Free();
    }
    local_240 = (undefined2 *)0x0;
    local_238 = (void **)0x0;
    local_248[0] = 0x11;
    local_258 = pvVar2;
    local_250 = param_1;
    FString::PrintfImpl(&local_1f8,L"%s%s/%s%s.ini",ppuVar15,pvVar2);
    FString::FString(&local_220,&local_1f8);
    local_210 = 0;
    FString::FString(local_208,&local_240);
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_230 = (undefined2 *)local_248;
    local_228 = &local_220;
    TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
              (param_5,&local_1d8,&local_230,0);
    if (local_208[0] != 0) {
      FMemory::Free();
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1f8 != (void *)0x0) {
      FMemory::Free();
    }
    local_258 = pvVar2;
    local_248[0] = 0x13;
    local_240 = (undefined2 *)0x0;
    local_238 = (void **)0x0;
    local_250 = param_1;
    FString::PrintfImpl(&local_1f8,L"%sNotForLicensees/%s/%s%s.ini",ppuVar15,pvVar2);
    FString::FString(&local_220,&local_1f8);
    local_210 = 0;
    FString::FString(local_208,&local_240);
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_230 = (undefined2 *)local_248;
    local_228 = &local_220;
    TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
              (param_5,&local_1d8,&local_230,0);
    if (local_208[0] != 0) {
      FMemory::Free();
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1f8 != (void *)0x0) {
      FMemory::Free();
    }
    local_258 = pvVar2;
    local_248[0] = 0x15;
    local_240 = (undefined2 *)0x0;
    local_238 = (void **)0x0;
    local_250 = param_1;
    FString::PrintfImpl(&local_1f8,L"%sNoRedist/%s/%s%s.ini",ppuVar15,pvVar2);
    FString::FString(&local_220,&local_1f8);
    local_210 = 0;
    FString::FString(local_208,&local_240);
    if (local_240 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_230 = (undefined2 *)local_248;
    local_228 = &local_220;
    TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
              (param_5,&local_1d8,&local_230,0);
    if (local_208[0] != 0) {
      FMemory::Free();
    }
    if (local_220 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1f8 != (void *)0x0) {
      FMemory::Free();
    }
  }
  FString::PrintfImpl(&local_230,L"Unreal Engine/Engine/Config/User%s.ini",param_1);
  puVar10 = &DAT_143f3eda8;
  if ((int)local_228 != 0) {
    puVar10 = local_230;
  }
  local_1e8 = (undefined1 ***)FUN_1416b20b0();
  local_240 = (undefined2 *)0x0;
  local_238 = (void **)0x0;
  pvVar16 = (void *)0x0;
  local_248[0] = 0x16;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_1e0 = puVar10;
  FPaths::CombineInternal(&local_1f8,&local_1e8,2);
  FString::FString(&local_220,&local_1f8);
  local_210 = 0;
  FString::FString(local_208,&local_240);
  if (local_240 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_240 = (undefined2 *)local_248;
  local_238 = &local_220;
  TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
            (param_5,&local_1d8,&local_240,0);
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  if (local_220 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_1f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_230 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_230,L"Unreal Engine/Engine/Config/User%s.ini",param_1);
  puVar10 = &DAT_143f3eda8;
  if ((int)local_228 != 0) {
    puVar10 = local_230;
  }
  local_1e8 = (undefined1 ***)FUN_1416b1ca0();
  local_248[0] = 0x17;
  local_240 = (undefined2 *)0x0;
  local_238 = (void **)0x0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_1e0 = puVar10;
  FPaths::CombineInternal(&local_1f8,&local_1e8,2);
  FString::FString(&local_220,&local_1f8);
  local_210 = 0;
  FString::FString(local_208,&local_240);
  if (local_240 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_240 = (undefined2 *)local_248;
  local_238 = &local_220;
  TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
            (param_5,&local_1d8,&local_240,0);
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  if (local_220 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_1f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_230 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_230,L"%sUser%s.ini",local_1c0,param_1);
  if (local_190 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_190 = local_230;
  local_188 = (int)local_228;
  local_184 = local_228._4_4_;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    do {
      lVar18 = lVar18 + 1;
    } while (param_1[lVar18] != 0);
    uVar11 = (int)lVar18 + 1;
    local_1f0 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
    }
    pvVar16 = local_1f8;
    FGenericPlatformString::Memcpy(local_1f8,param_1,(longlong)(int)uVar11 * 2);
  }
  local_248[0] = 0x18;
  local_240 = (undefined2 *)0x0;
  local_238 = (void **)0x0;
  FString::FString(&local_220,&local_190);
  local_210 = 0;
  FString::FString(local_208,&local_240);
  if (local_240 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_230 = (undefined2 *)local_248;
  local_228 = &local_220;
  TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EConfigFileHierarchy_&&,FIniFilename_&&>_>
            (param_5,&local_1d8,&local_230,0);
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  if (local_220 != (void *)0x0) {
    FMemory::Free();
  }
  if (pvVar16 != (void *)0x0) {
    FMemory::Free(pvVar16);
  }
  local_1b8 = (undefined2 *)local_248;
  local_248[0] = 0;
  local_1c0 = &local_1b8;
  if (0 < *(int *)(param_5 + 1) - *(int *)((longlong)param_5 + 0x34)) {
    TSparseArray<TSetElement<TTuple<enum_EConfigFileHierarchy,FIniFilename>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Compact(param_5);
    local_1d8 = (undefined1 ***)&local_1c0;
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,TSparseArray<TSetElement<TTuple<enum_EConfigFileHierarchy,FIniFilename>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<enum_EConfigFileHierarchy,FIniFilename,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>_>::FKeyComparisonClass<<lambda_2090079e0d841afcdfc17bc40d6e7785>_>_>_>_>_>
              (*param_5,(longlong)(*(int *)(param_5 + 1) - *(int *)((longlong)param_5 + 0x34)),
               local_248[0],&local_1d8);
  }
  TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
  ::Rehash(param_5);
  if (local_190 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return;
}



// FUNCTION 14164e3c0 GetStr body=57 status=ok
// SIG undefined GetStr(void)

undefined8 *
FConfigCacheIni::GetStr
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  *param_2 = 0;
  param_2[1] = 0;
  GetString(param_1,param_3,param_4,param_2,param_5);
  return param_2;
}



// FUNCTION 14164e400 GetString body=488 status=ok
// SIG undefined GetString(void)

undefined8
FConfigCacheIni::GetString
          (undefined8 param_1,short *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  longlong *local_28;
  ulonglong local_20;
  
  puVar1 = param_5;
  if (*(int *)(param_5 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*param_5;
  }
  uVar2 = FRemoteConfig::Get();
  FRemoteConfig::FinishRead(uVar2,puVar9);
  plVar3 = (longlong *)Find(param_1,puVar1,0);
  if (plVar3 != (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    local_28 = (longlong *)0x0;
    local_20 = 0;
    plVar5 = plVar10;
    if ((param_2 != (short *)0x0) && (plVar5 = (longlong *)0x0, *param_2 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (param_2[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_20 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      plVar5 = local_28;
      FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar7 * 2);
    }
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar3,&param_5,&local_28);
    plVar4 = plVar10;
    if ((int)param_5 != -1) {
      plVar4 = (longlong *)((longlong)(int)param_5 * 0xb8 + *plVar3);
    }
    plVar3 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = plVar10;
    }
    if (plVar5 != (longlong *)0x0) {
      FMemory::Free(plVar5);
    }
    if (plVar3 != (longlong *)0x0) {
      plVar5 = (longlong *)FName::FName(&param_5,param_3,1);
      lVar8 = *plVar5;
      if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
        plVar5 = (longlong *)plVar3[8];
        if ((longlong *)plVar3[8] == (longlong *)0x0) {
          plVar5 = plVar3 + 7;
        }
        iVar6 = *(int *)((longlong)plVar5 +
                        ((longlong)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8) &
                        (longlong)(int)plVar3[9] - 1U) * 4);
        if (iVar6 != -1) {
          do {
            plVar5 = (longlong *)((longlong)iVar6 * 0x30 + *plVar3);
            if (*plVar5 == lVar8) {
              if (iVar6 != -1) goto LAB_14164e595;
              break;
            }
            iVar6 = (int)plVar5[5];
          } while (iVar6 != -1);
        }
      }
      plVar5 = plVar10;
LAB_14164e595:
      plVar3 = plVar5 + 1;
      if (plVar5 == (longlong *)0x0) {
        plVar3 = plVar10;
      }
      if (plVar3 != (longlong *)0x0) {
        iVar6 = (int)plVar3[3] + -1;
        if ((int)plVar3[3] == 0) {
          iVar6 = 0;
        }
        plVar5 = plVar3 + 2;
        if (iVar6 < 1) {
          plVar5 = plVar3;
        }
        FString::operator=(param_4,plVar5);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14164e5f0 GetString body=401 status=ok
// SIG undefined GetString(void)

undefined8
FConfigFile::GetString(longlong *param_1,short *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int local_res8 [2];
  longlong *local_38;
  ulonglong local_30;
  
  plVar7 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  plVar2 = plVar7;
  if ((param_2 != (short *)0x0) && (plVar2 = (longlong *)0x0, *param_2 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_30 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    plVar2 = local_38;
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar4 * 2);
  }
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,&local_38);
  plVar1 = plVar7;
  if (local_res8[0] != -1) {
    plVar1 = (longlong *)((longlong)local_res8[0] * 0xb8 + *param_1);
  }
  plVar6 = plVar1 + 2;
  if (plVar1 == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if (plVar6 != (longlong *)0x0) {
    plVar2 = (longlong *)FName::FName(local_res8,param_3,1);
    lVar5 = *plVar2;
    if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
      plVar2 = (longlong *)plVar6[8];
      if ((longlong *)plVar6[8] == (longlong *)0x0) {
        plVar2 = plVar6 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                      (longlong)(int)plVar6[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar2 = (longlong *)((longlong)iVar3 * 0x30 + *plVar6);
          if (*plVar2 == lVar5) {
            if (iVar3 != -1) goto LAB_14164e735;
            break;
          }
          iVar3 = (int)plVar2[5];
        } while (iVar3 != -1);
      }
    }
    plVar2 = plVar7;
LAB_14164e735:
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = plVar7;
    }
    if (plVar1 != (longlong *)0x0) {
      iVar3 = (int)plVar1[3] + -1;
      if ((int)plVar1[3] == 0) {
        iVar3 = 0;
      }
      plVar2 = plVar1 + 2;
      if (iVar3 < 1) {
        plVar2 = plVar1;
      }
      FString::operator=(param_4,plVar2);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14164e790 GetTargetPlatformManager body=8 status=ok
// SIG undefined GetTargetPlatformManager(void)

undefined8 GetTargetPlatformManager(void)

{
  return DAT_1468e27d0;
}



// FUNCTION 14164e7a0 GetTargetPlatformManagerRef body=83 status=ok
// SIG undefined GetTargetPlatformManagerRef(void)

longlong GetTargetPlatformManagerRef(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1468e27d0;
  if (DAT_1468e27d0 == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0x8b,L"Target platform manager was requested, but not available.");
    FDebug::AssertFailed
              (&DAT_144cc290e,"Unknown",0x8b,
               L"Target platform manager was requested, but not available.");
  }
  return lVar1;
}



// FUNCTION 14164e800 GetText body=538 status=ok
// SIG undefined GetText(void)

ulonglong FConfigCacheIni::GetText
                    (undefined8 param_1,short *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong *local_38;
  ulonglong local_30;
  
  puVar1 = param_5;
  puVar12 = &DAT_143f3eda8;
  if (*(int *)(param_5 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*param_5;
  }
  uVar2 = FRemoteConfig::Get();
  FRemoteConfig::FinishRead(uVar2,puVar10);
  plVar3 = (longlong *)Find(param_1,puVar1,0);
  plVar4 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    plVar7 = plVar11;
    if ((param_2 != (short *)0x0) && (plVar7 = (longlong *)0x0, *param_2 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (param_2[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_30 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      plVar7 = local_38;
      FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar8 * 2);
    }
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar3,&param_5,&local_38);
    plVar4 = plVar11;
    if ((int)param_5 != -1) {
      plVar4 = (longlong *)((longlong)(int)param_5 * 0xb8 + *plVar3);
    }
    plVar3 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = plVar11;
    }
    if (plVar7 != (longlong *)0x0) {
      plVar4 = (longlong *)FMemory::Free(plVar7);
    }
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)FName::FName(&param_5,param_3,1);
      lVar9 = *plVar4;
      uVar8 = (int)plVar3[1] - *(int *)((longlong)plVar3 + 0x34);
      plVar4 = (longlong *)(ulonglong)uVar8;
      if (uVar8 != 0) {
        plVar4 = (longlong *)plVar3[8];
        if ((longlong *)plVar3[8] == (longlong *)0x0) {
          plVar4 = plVar3 + 7;
        }
        uVar8 = *(uint *)((longlong)plVar4 +
                         ((longlong)((int)((ulonglong)lVar9 >> 0x20) + (int)lVar9) &
                         (longlong)(int)plVar3[9] - 1U) * 4);
        plVar4 = (longlong *)(ulonglong)uVar8;
        if (uVar8 != 0xffffffff) {
          do {
            plVar7 = (longlong *)((longlong)(int)plVar4 * 0x30 + *plVar3);
            if (*plVar7 == lVar9) {
              if ((int)plVar4 != -1) goto LAB_14164e9a5;
              break;
            }
            plVar4 = (longlong *)(ulonglong)*(uint *)(plVar7 + 5);
          } while (*(uint *)(plVar7 + 5) != 0xffffffff);
        }
      }
      plVar7 = plVar11;
LAB_14164e9a5:
      plVar3 = plVar7 + 1;
      if (plVar7 == (longlong *)0x0) {
        plVar3 = plVar11;
      }
      if (plVar3 != (longlong *)0x0) {
        iVar6 = (int)plVar3[3] + -1;
        if ((int)plVar3[3] == 0) {
          iVar6 = 0;
        }
        plVar4 = plVar3 + 2;
        if (iVar6 < 1) {
          plVar4 = plVar3;
        }
        if ((int)plVar4[1] != 0) {
          puVar12 = (undefined2 *)*plVar4;
        }
        uVar5 = FTextStringHelper::ReadFromString(puVar12,param_4,param_2,0,0,0,2);
        return uVar5;
      }
    }
  }
  return (ulonglong)plVar4 & 0xffffffffffffff00;
}



// FUNCTION 14164ea20 FUN_14164ea20 body=895 status=ok
// SIG undefined FUN_14164ea20(void)

void FUN_14164ea20(longlong param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  undefined4 uStack_74;
  longlong *local_70;
  int iStack_68;
  uint uStack_64;
  uint *puStack_60;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  iVar10 = (int)param_2[1];
  if (iVar10 != 0) {
    plVar9 = (longlong *)(*param_2 + 0x58);
    do {
      if (plVar9[2] != 0) {
        FMemory::Free();
      }
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      if (plVar9[-3] != 0) {
        FMemory::Free();
      }
      if (plVar9[-5] != 0) {
        FMemory::Free();
      }
      if (plVar9[-7] != 0) {
        FMemory::Free();
      }
      if (plVar9[-9] != 0) {
        FMemory::Free();
      }
      if (plVar9[-0xb] != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 0x11;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
              (param_2,0);
  }
  uVar11 = 0x300;
  uVar13 = 2;
  if (DAT_1468b616c != '\0') {
    uVar13 = 10;
  }
  if (DAT_1468c21f6 == '\0') {
    LowLevelFatalErrorHandler
              ("Unknown",0x1d,
               L"Attempting to get the command line but it hasn\'t been initialized yet.");
    FDebug::AssertFailed
              (&DAT_144cc26c3,"Unknown",0x1d,
               L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar3 = FParse::Param(&DAT_1468c2210,L"nullrhi");
  if ((cVar3 != '\0') || (DAT_1468b616c != '\0')) {
    uVar11 = 0x200;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146855ba8) && (_Init_thread_header(&DAT_146855ba8), DAT_146855ba8 == -1))
  {
    uVar5 = FCommandLine::Get();
    DAT_146855ba4 = FParse::Param(uVar5,L"UNATTENDED");
    _Init_thread_footer(&DAT_146855ba8);
  }
  if ((DAT_146855ba4 == '\0') && (DAT_1468c21d9 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  iVar10 = *(int *)(param_1 + 0x140);
  puStack_60 = (uint *)(param_1 + 0x128);
  uVar6 = uVar11 & 0xfffffdff;
  if (!bVar1) {
    uVar6 = uVar11;
  }
  if (iVar10 != 0) {
    puVar12 = *(uint **)(param_1 + 0x138);
    if (*(uint **)(param_1 + 0x138) == (uint *)0x0) {
      puVar12 = puStack_60;
    }
    uVar11 = *puVar12;
    uStack_80 = 0;
    local_98 = 0;
    while (uVar11 == 0) {
      lVar7 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar1 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar1) goto LAB_14164ec3b;
      uVar11 = puVar12[lVar7 + 1];
    }
    uStack_94 = -uVar11 & uVar11;
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
    local_88._4_4_ = (uStack_80 - iVar8) + 0x1f;
    if (iVar10 < local_88._4_4_) {
LAB_14164ec3b:
      local_88._4_4_ = iVar10;
    }
  }
  uStack_58 = 0xffffffff;
  iStack_54 = local_88._4_4_;
  iStack_50 = uStack_80;
  uStack_4c = iStack_7c;
  iStack_68 = local_98;
  uStack_64 = uStack_94;
  iStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78 = uStack_80;
  uStack_74 = iStack_7c;
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  bVar1 = local_88._4_4_ < iVar10;
  local_70 = (longlong *)(param_1 + 0x118);
  local_88 = puStack_60;
  if (bVar1) {
    do {
      plVar9 = *(longlong **)((longlong)iStack_7c * 0x20 + 0x10 + *(longlong *)(param_1 + 0x118));
      uVar4 = (**(code **)(*plVar9 + 8))(plVar9);
      uVar11 = *(uint *)(param_1 + 400);
      if (((uVar4 & 0xf) == 0) || ((uVar13 & uVar4 & 0xf) != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (((uVar4 & 0x300) == 0) || ((uVar6 & uVar4 & 0x300) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      QueryPerformanceCounter(&local_res18);
      if (((((~(byte)(uVar4 >> 0x10) & 1) != 0) && (bVar1)) && (bVar2)) && ((uVar11 & uVar4) != 0))
      {
        FUN_141649750(plVar9,param_2);
      }
      QueryPerformanceCounter(&local_res20);
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
    } while (iStack_7c < (int)local_88[6]);
  }
  return;
}



// FUNCTION 14164eda0 GetVector body=230 status=ok
// SIG undefined GetVector(void)

/* WARNING: Removing unreachable block (ram,0x00014164ee46) */
/* WARNING: Removing unreachable block (ram,0x00014164ee04) */
/* WARNING: Removing unreachable block (ram,0x00014164ee29) */
/* WARNING: Removing unreachable block (ram,0x00014164ee70) */

undefined8 FConfigCacheIni::GetVector(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *in_R9;
  
  uVar2 = 0;
  cVar1 = GetString();
  if (cVar1 != '\0') {
    *(undefined8 *)(in_R9 + 1) = 0;
    *in_R9 = 0;
    cVar1 = FParse::Value(&DAT_143f3eda8,&DAT_144cc8320,in_R9);
    if (((cVar1 == '\0') ||
        (cVar1 = FParse::Value(&DAT_143f3eda8,&DAT_144cc8328,in_R9 + 1), cVar1 == '\0')) ||
       (cVar1 = FParse::Value(&DAT_143f3eda8,&DAT_144cc8330,in_R9 + 2), cVar1 == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 14164ee90 GetYear body=216 status=ok
// SIG undefined GetYear(void)

int FDateTime::GetYear(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = (float)((double)(*param_1 / 864000000000) + 1721426.0);
  iVar4 = ((int)ROUND((fVar5 + fVar5) - 0.5) >> 1) + 0x10bd9;
  iVar1 = (iVar4 * 4) / 0x23ab1;
  iVar2 = iVar1 * 0x23ab1 + 3;
  iVar4 = iVar4 - ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
  iVar2 = ((iVar4 + 1) * 4000) / 0x164b09;
  iVar3 = iVar2 * 0x5b5;
  return (iVar1 + -0x31) * 100 +
         (((iVar4 - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2)) + 0x1f) * 0x50) / 0x6925 + iVar2;
}



// FUNCTION 14164ef70 HandleAddCommand body=1812 status=ok
// SIG undefined HandleAddCommand(void)

void FConfigSection::HandleAddCommand
               (longlong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  void *pvVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint *puVar13;
  void *pvVar14;
  int iVar15;
  longlong lVar16;
  longlong local_res10;
  undefined8 local_res18;
  char local_res20;
  undefined8 local_108;
  uint *puStack_100;
  undefined4 local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  void *local_e8;
  int local_e0;
  uint local_dc;
  void *local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  int local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  longlong *local_78;
  longlong lStack_70;
  uint *puStack_68;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  
  if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
    plVar8 = (longlong *)param_1[0x12];
    if ((longlong *)param_1[0x12] == (longlong *)0x0) {
      plVar8 = param_1 + 0x11;
    }
    iVar11 = *(int *)((longlong)plVar8 +
                     ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                     (longlong)(int)param_1[0x13] - 1U) * 4);
    if (iVar11 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar11 * 0x20 + param_1[10]);
        if (*plVar8 == param_2) {
          if (iVar11 != -1) goto LAB_14164f011;
          break;
        }
        iVar11 = (int)plVar8[3];
      } while (iVar11 != -1);
    }
  }
  plVar8 = (longlong *)0x0;
LAB_14164f011:
  bVar1 = false;
  plVar12 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (plVar12 != (longlong *)0x0) {
    local_d8 = (void *)0x0;
    local_d0 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    pvVar9 = local_d8;
    FGenericPlatformString::Convert<char,wchar_t>(local_d8,2,&DAT_144cc5d64,2,0x3f);
    local_e0 = (int)plVar12[1];
    lVar16 = (longlong)local_e0;
    if (local_e0 < 2) {
      local_e0 = (int)local_d0;
      local_dc = local_d0._4_4_;
      local_e8 = pvVar9;
    }
    else {
      if ((int)local_d0 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = (int)local_d0 + -1;
      }
      pvVar9 = (void *)0x0;
      if ((local_e0 != 0) || (iVar6 = 1, iVar11 == 0)) {
        iVar6 = 0;
      }
      pvVar14 = (void *)*plVar12;
      local_e8 = (void *)0x0;
      if ((local_e0 == 0) && (iVar6 + iVar11 == 0)) {
        local_dc = 0;
        pvVar14 = pvVar9;
        iVar6 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_e0 + iVar6 + iVar11,0);
        pvVar9 = local_e8;
        ::_guard_xfg_dispatch_icall_nop(local_e8,pvVar14,lVar16 * 2);
        pvVar14 = (void *)(ulonglong)local_dc;
        iVar6 = local_e0;
      }
      uVar5 = (uint)pvVar14;
      iVar15 = iVar6;
      if (iVar11 != 0) {
        local_e0 = iVar6 + (uint)(iVar6 == 0) + iVar11;
        if ((int)uVar5 < local_e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,iVar6);
          pvVar9 = local_e8;
          uVar5 = local_dc;
        }
        iVar15 = local_e0;
        pvVar14 = (void *)((longlong)pvVar9 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar14,local_d8,(longlong)iVar11 * 2);
        *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar14) = 0;
      }
      local_e8 = pvVar9;
      local_e0 = iVar15;
      local_dc = uVar5;
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
    }
    FUN_141647a10(&local_d8,local_res18,&local_e8);
    if (((int)local_d0 != 0) && (0 < (int)local_d0 + -1)) {
      iVar11 = (int)param_1[5];
      puStack_100 = (uint *)(param_1 + 2);
      local_108 = 0x100000000;
      iStack_f4 = 0;
      iStack_f0 = 0;
      if (iVar11 != 0) {
        puVar13 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar13 = puStack_100;
        }
        uVar5 = *puVar13;
        iStack_f0 = 0;
        iVar6 = 0;
        while (uVar5 == 0) {
          iStack_f0 = iStack_f0 + 0x20;
          uVar2 = (ulonglong)local_108 >> 0x20;
          local_108 = CONCAT44((int)uVar2,iVar6 + 1);
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_14164f285;
          uVar5 = puVar13[(longlong)iVar6 + 1];
          iVar6 = iVar6 + 1;
        }
        uVar5 = -uVar5 & uVar5;
        iVar6 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        local_108 = CONCAT44(uVar5,(undefined4)local_108);
        if (uVar5 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        iStack_f4 = (iStack_f0 - iVar6) + 0x1f;
        if (iVar11 < iStack_f4) {
LAB_14164f285:
          iStack_f4 = iVar11;
        }
      }
      local_f8 = 0xffffffff;
      uStack_a0 = CONCAT44(iStack_f4,0xffffffff);
      auStack_60._8_4_ = iStack_f0;
      auStack_60._0_8_ = uStack_a0;
      auStack_60._12_4_ = iStack_ec;
      lStack_70 = local_108;
      local_80 = 0;
      local_50._0_4_ = SUB84(param_1,0);
      local_50._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
      uStack_b0 = local_108;
      local_98._8_4_ = (undefined4)local_50;
      local_98._0_8_ = auStack_60._8_8_;
      local_98._12_4_ = local_50._4_4_;
      local_b8 = param_1;
      local_a8 = puStack_100;
      local_88 = param_1;
      local_78 = param_1;
      puStack_68 = puStack_100;
      local_50 = param_1;
      if (iStack_f4 < (int)param_1[5]) {
        lVar16 = 0x18;
        iVar11 = iStack_f4;
        do {
          plVar8 = local_b8;
          plVar12 = (longlong *)((longlong)iVar11 * 0x30 + *local_b8);
          if (*plVar12 == param_2) {
            lVar10 = 0x18;
            iVar6 = (int)plVar12[4] + -1;
            if ((int)plVar12[4] == 0) {
              iVar6 = 0;
            }
            if (iVar6 < 1) {
              lVar10 = 8;
            }
            FUN_141647a10(&local_c8,lVar10 + (longlong)plVar12,&local_e8);
            puVar3 = local_c8;
            puVar7 = &DAT_143f3eda8;
            if (local_c0 != 0) {
              puVar7 = local_c8;
            }
            iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,local_d8);
            if (iVar6 == 0) {
              lVar10 = (longlong)iVar11 * 0x30 + *plVar8;
              iVar6 = *(int *)(lVar10 + 0x20);
              iVar11 = iVar6 + -1;
              if (iVar6 == 0) {
                iVar11 = 0;
              }
              if (iVar11 < 1) {
                lVar16 = 8;
              }
              plVar8 = (longlong *)FString::FString(&local_c8,lVar10 + lVar16);
              local_108 = *plVar8;
              *plVar8 = 0;
              puStack_100 = (uint *)plVar8[1];
              plVar8[1] = 0;
              local_f8 = 0;
              iStack_f4 = 0;
              iStack_f0 = 0;
              iStack_ec = 0;
              cVar4 = FConfigValue::ExpandValue(&local_108,&local_f8);
              if ((cVar4 == '\0') && (iStack_f0 = 0, iStack_ec != 0)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,0);
              }
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              ::RemoveSingle(param_1,param_2,&local_108);
              if (CONCAT44(iStack_f4,local_f8) != 0) {
                FMemory::Free();
              }
              if (local_108 != 0) {
                FMemory::Free();
              }
              plVar8 = (longlong *)FString::FString(&local_c8,local_res18);
              local_108 = *plVar8;
              *plVar8 = 0;
              puStack_100 = (uint *)plVar8[1];
              plVar8[1] = 0;
              local_f8 = 0;
              iStack_f4 = 0;
              iStack_f0 = 0;
              iStack_ec = 0;
              cVar4 = FConfigValue::ExpandValue(&local_108,&local_f8);
              if ((cVar4 == '\0') && (iStack_f0 = 0, iStack_ec != 0)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,0);
              }
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              ::Emplace<FName_const_&,FConfigValue>(param_1,&local_res10,&local_108);
              if (CONCAT44(iStack_f4,local_f8) != 0) {
                FMemory::Free();
              }
              if (local_108 != 0) {
                FMemory::Free();
              }
              bVar1 = true;
              if (puVar3 != (undefined2 *)0x0) {
                FMemory::Free(puVar3);
              }
              break;
            }
            if (puVar3 != (undefined2 *)0x0) {
              FMemory::Free(puVar3);
            }
          }
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
          iVar11 = uStack_a0._4_4_;
        } while (uStack_a0._4_4_ < (int)local_a8[6]);
        if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
          TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
        }
      }
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
    if (bVar1) {
      return;
    }
  }
  plVar8 = (longlong *)FString::FString(&local_c8,local_res18);
  local_108 = *plVar8;
  *plVar8 = 0;
  puStack_100 = (uint *)plVar8[1];
  plVar8[1] = 0;
  local_f8 = 0;
  iStack_f4 = 0;
  iStack_f0 = 0;
  iStack_ec = 0;
  cVar4 = FConfigValue::ExpandValue(&local_108,&local_f8);
  if (local_res20 == '\0') {
    if ((cVar4 == '\0') && (iStack_f0 = 0, iStack_ec != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,0);
    }
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::EmplaceUnique<FName_const_&,FConfigValue>(param_1,&local_res10,&local_108);
  }
  else {
    if ((cVar4 == '\0') && (iStack_f0 = 0, iStack_ec != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,0);
    }
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::Emplace<FName_const_&,FConfigValue>(param_1,&local_res10,&local_108);
  }
  if (CONCAT44(iStack_f4,local_f8) != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14164f690 FUN_14164f690 body=232 status=ok
// SIG undefined FUN_14164f690(void)

void FUN_14164f690(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  uVar1 = 0;
  local_res8[0] = param_2;
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar3 = *(longlong *)(param_1 + 0x160);
    if (*(longlong *)(param_1 + 0x160) == 0) {
      lVar3 = param_1 + 0x20;
    }
    lVar3 = lVar3 + (longlong)*(int *)(param_1 + 0x170) * 0x50;
    local_18 = param_4;
    local_10 = param_3;
    if (*(int *)(lVar3 + -0x10) != 0) {
      plVar2 = *(longlong **)(lVar3 + -0x20);
      if (*(longlong **)(lVar3 + -0x20) == (longlong *)0x0) {
        plVar2 = (longlong *)(lVar3 + -0x40);
      }
      if (plVar2 != (longlong *)0x0) {
        uVar1 = (**(code **)(*plVar2 + 8))();
      }
    }
    (**(code **)(lVar3 + -0x50))(uVar1,local_res8,&local_10,&local_18);
    return;
  }
  local_18 = param_3;
  local_10 = param_4;
  if (DAT_1468e2550 != 0) {
    plVar2 = DAT_1468e2540;
    if (DAT_1468e2540 == (longlong *)0x0) {
      plVar2 = (longlong *)&DAT_1468e2520;
    }
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))();
    }
  }
  (*DAT_1468e2510)(uVar1,local_res8,&local_18,&local_10);
  return;
}



// FUNCTION 14164f780 FUN_14164f780 body=8 status=ok
// SIG undefined FUN_14164f780(void)

bool FUN_14164f780(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x50);
}



// FUNCTION 14164f790 FUN_14164f790 body=881 status=ok
// SIG undefined FUN_14164f790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14164f790(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 local_c8 [8];
  longlong local_c0 [2];
  longlong local_b0 [2];
  undefined8 local_a0;
  undefined8 local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [2];
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  puVar7 = *(undefined8 **)(param_1 + 0x90);
  uVar10 = 1;
  puVar11 = puVar7 + (longlong)*(int *)(param_1 + 0x98) * 6;
  if (puVar7 != puVar11) {
    plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      iVar2 = *(int *)((longlong)puVar7 + 0x24);
      if ((iVar2 < 1) || (iVar2 == *(int *)(puVar7 + 5))) {
        if (iVar2 == 0) {
          if (*(int *)(puVar7 + 5) == 0) {
            uVar10 = 0;
            if (*(int *)(puVar7 + 1) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar7;
            }
            FString::PrintfImpl(local_70,
                                L"Expected suppressed Error or Warning matching \'%s\' did not occur."
                                ,puVar9);
            uVar3 = FUN_14164aac0(param_1 + 0x20);
            plVar4 = (longlong *)FString::FString(local_50,uVar3);
            local_c8[0] = 2;
            FString::FString(local_c0,local_70);
            FString::FString(local_b0,plVar4);
            lVar8 = local_70[0];
          }
          else {
            if (*(int *)(puVar7 + 1) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar7;
            }
            FString::PrintfImpl(local_60,
                                L"Suppressed expected Error or Warning matching \'%s\' %d times.",
                                puVar9);
            uVar3 = FUN_14164aac0(param_1 + 0x20);
            plVar4 = (longlong *)FString::FString(local_40,uVar3);
            local_c8[0] = 0;
            FString::FString(local_c0,local_60);
            FString::FString(local_b0,plVar4);
            lVar8 = local_60[0];
          }
          local_98 = 0;
          local_a0 = 0;
          if (lVar8 != 0) {
            FMemory::Free();
          }
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          FUN_141642660(param_1 + 0x20,local_c8,0);
          if (local_b0[0] != 0) {
            FMemory::Free();
          }
          if (local_c0[0] != 0) {
            FMemory::Free();
          }
        }
      }
      else {
        uVar10 = 0;
        if ((*(int *)(*plVar1 + 0x38) < DAT_1468e2570) &&
           (_Init_thread_header(&DAT_1468e2570), DAT_1468e2570 == -1)) {
          DAT_1468e2560 = 0;
          _DAT_1468e2568 = 0;
          atexit((_func_5014 *)&LAB_143e79b00);
          _Init_thread_footer(&DAT_1468e2570);
        }
        if (*(int *)(param_1 + 0x60) == 0) {
          puVar6 = &DAT_1468e2560;
        }
        else {
          puVar6 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x58) + -0x10 +
                   (longlong)*(int *)(param_1 + 0x60) * 0x10);
        }
        _Src = (void *)*puVar6;
        local_90 = (void *)0x0;
        local_88 = *(int *)(puVar6 + 1);
        lVar8 = (longlong)local_88;
        if (local_88 == 0) {
          local_84 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_88,0);
          _guard_xfg_dispatch_icall_nop(local_90,_Src,lVar8 * 2);
        }
        if (*(int *)(puVar7 + 4) == 0) {
          pwVar5 = L"Exact";
        }
        else if (*(int *)(puVar7 + 4) == 1) {
          pwVar5 = L"Contains";
        }
        else {
          pwVar5 = L"Unknown";
        }
        if (*(int *)(puVar7 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar7;
        }
        FString::PrintfImpl(local_80,
                            L"Expected Error or Warning matching \'%s\' to occur %d times with %s match type, but it was found %d time(s)."
                            ,puVar9,*(undefined4 *)((longlong)puVar7 + 0x24),pwVar5,
                            *(undefined4 *)(puVar7 + 5));
        local_c8[0] = 2;
        FString::FString(local_c0,local_80);
        FString::FString(local_b0,&local_90);
        local_a0 = 0;
        local_98 = 0;
        if (local_80[0] != 0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
        FUN_141642660(param_1 + 0x20,local_c8);
        if (local_b0[0] != 0) {
          FMemory::Free();
        }
        if (local_c0[0] != 0) {
          FMemory::Free();
        }
      }
      puVar7 = puVar7 + 6;
    } while (puVar7 != puVar11);
  }
  return uVar10;
}



// FUNCTION 14164fb10 HasWhitespaces body=170 status=ok
// SIG undefined HasWhitespaces(void)

longlong FDefaultValueHelper::HasWhitespaces(longlong *param_1)

{
  ushort _C;
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  lVar4 = 0;
  while( true ) {
    iVar2 = (int)param_1[1];
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if (iVar1 <= iVar5) break;
    _C = *(ushort *)(lVar4 + *param_1);
    iVar2 = iswspace(_C);
    uVar3 = CONCAT44(extraout_var,iVar2);
    if ((((iVar2 != 0) || (uVar3 = (ulonglong)(_C - 10), (ushort)(_C - 10) < 4)) || (_C == 0x85)) ||
       ((ushort)(_C + 0xdfd8) < 2)) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
    iVar5 = iVar5 + 1;
    lVar4 = lVar4 + 2;
  }
  return (ulonglong)(uint3)((uint)iVar2 >> 8) << 8;
}



// FUNCTION 14164fbc0 FUN_14164fbc0 body=375 status=ok
// SIG undefined FUN_14164fbc0(void)

undefined8 FUN_14164fbc0(undefined8 param_1,longlong *param_2)

{
  short *psVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  wchar_t *pwVar8;
  int iVar9;
  wchar_t *_Source;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  ulonglong local_30;
  
  psVar1 = (short *)*param_2;
  lVar6 = -1;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (psVar1[lVar4] != 0);
  if ((int)lVar4 < 0x13) {
    return 0;
  }
  iVar9 = 0;
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  pwVar8 = (wchar_t *)0x0;
  if ((psVar1 != (short *)0x0) && (pwVar8 = (wchar_t *)0x0, *psVar1 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (psVar1[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_30 = (ulonglong)uVar5;
    uVar7 = uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar7 = (uint)local_30;
    }
    pwVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,psVar1,(longlong)(int)uVar5 * 2);
    if (uVar7 != 0) {
      iVar9 = uVar7 - 1;
      _Source = pwVar8;
      goto LAB_14164fc77;
    }
  }
  _Source = L"";
LAB_14164fc77:
  local_48 = (wchar_t *)0x0;
  local_3c = 0;
  if (0x13 < iVar9) {
    iVar9 = 0x13;
  }
  local_40 = iVar9 + 1;
  if (iVar9 == 0) {
    local_40 = 0;
  }
  if ((0 < local_40) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), pwVar2 = local_48, 0 < local_40))
  {
    wcsncpy(local_48,_Source,(longlong)iVar9);
    pwVar2[iVar9] = L'\0';
  }
  cVar3 = FDateTime::Parse(&local_48,param_1);
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (pwVar8 != (wchar_t *)0x0) {
    FMemory::Free(pwVar8);
  }
  if (cVar3 == '\0') {
    return 0;
  }
  *param_2 = *param_2 + 0x26;
  return 1;
}



// FUNCTION 14164fd40 FUN_14164fd40 body=2959 status=ok
// SIG undefined FUN_14164fd40(void)

void FUN_14164fd40(wchar_t **param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  wchar_t **ppwVar8;
  wchar_t **ppwVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined2 *puVar12;
  wchar_t *pwVar13;
  uint uVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  uint uVar21;
  int local_res8 [2];
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  uVar10 = DAT_1468b6148;
  pwVar18 = (wchar_t *)0x0;
  local_48 = (wchar_t *)0x0;
  puVar12 = &DAT_143f3eda8;
  if (DAT_1468e2368 != 0) {
    puVar12 = DAT_1468e2360;
  }
  uVar14 = 0;
  local_40._4_4_ = 0;
  uVar4 = FRemoteConfig::Get();
  FRemoteConfig::FinishRead(uVar4,puVar12);
  plVar5 = (longlong *)FConfigCacheIni::Find(uVar10,&DAT_1468e2360,0);
  pwVar19 = (wchar_t *)0x0;
  uVar11 = 0;
  uVar21 = 0;
  if (plVar5 != (longlong *)0x0) {
    local_38[1] = 4;
    local_38[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    lVar15 = local_38[0];
    FGenericPlatformString::Memcpy(local_38[0],&DAT_144cc3d88,8);
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar5,local_res8,local_38);
    if (local_res8[0] == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)local_res8[0] * 0xb8 + *plVar5;
    }
    plVar5 = (longlong *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      plVar5 = (longlong *)0x0;
    }
    if (lVar15 != 0) {
      FMemory::Free(lVar15);
    }
    pwVar19 = pwVar18;
    uVar11 = 0;
    uVar21 = 0;
    if (plVar5 != (longlong *)0x0) {
      plVar7 = (longlong *)FName::FName(local_res8,L"Protocol",1);
      lVar15 = *plVar7;
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        plVar7 = (longlong *)plVar5[8];
        if ((longlong *)plVar5[8] == (longlong *)0x0) {
          plVar7 = plVar5 + 7;
        }
        iVar3 = *(int *)((longlong)plVar7 +
                        ((longlong)((int)((ulonglong)lVar15 >> 0x20) + (int)lVar15) &
                        (longlong)(int)plVar5[9] - 1U) * 4);
        if (iVar3 != -1) {
          do {
            plVar7 = (longlong *)(*plVar5 + (longlong)iVar3 * 0x30);
            if (*plVar7 == lVar15) {
              if (iVar3 != -1) goto LAB_14164feb5;
              break;
            }
            iVar3 = (int)plVar7[5];
          } while (iVar3 != -1);
        }
      }
      plVar7 = (longlong *)0x0;
LAB_14164feb5:
      ppwVar9 = (wchar_t **)(plVar7 + 1);
      if (plVar7 == (longlong *)0x0) {
        ppwVar9 = (wchar_t **)0x0;
      }
      pwVar19 = (wchar_t *)0x0;
      uVar11 = uVar14;
      uVar21 = uVar14;
      if (ppwVar9 != (wchar_t **)0x0) {
        iVar3 = *(int *)(ppwVar9 + 3) + -1;
        if (*(int *)(ppwVar9 + 3) == 0) {
          iVar3 = 0;
        }
        ppwVar8 = ppwVar9 + 2;
        if (iVar3 < 1) {
          ppwVar8 = ppwVar9;
        }
        pwVar19 = pwVar18;
        if (&local_48 != ppwVar8) {
          local_40._0_4_ = *(uint *)(ppwVar8 + 1);
          lVar15 = (longlong)(int)(uint)local_40;
          pwVar20 = *ppwVar8;
          uVar11 = (uint)local_40;
          uVar21 = 0;
          if ((uint)local_40 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,(uint)local_40,0);
            pwVar19 = local_48;
            _guard_xfg_dispatch_icall_nop(local_48,pwVar20,lVar15 * 2);
            uVar11 = (uint)local_40;
            uVar21 = local_40._4_4_;
          }
        }
      }
    }
  }
  pwVar18 = (wchar_t *)0x0;
  if (param_1 == &local_48) {
    if (pwVar19 != (wchar_t *)0x0) {
      FMemory::Free(pwVar19);
    }
  }
  else {
    if (*param_1 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *param_1 = pwVar19;
    *(uint *)(param_1 + 1) = uVar11;
    *(uint *)((longlong)param_1 + 0xc) = uVar21;
  }
  uVar10 = DAT_1468b6148;
  uVar11 = 0;
  local_48 = (wchar_t *)0x0;
  local_40._4_4_ = 0;
  puVar12 = &DAT_143f3eda8;
  if (DAT_1468e2368 != 0) {
    puVar12 = DAT_1468e2360;
  }
  uVar4 = FRemoteConfig::Get();
  FRemoteConfig::FinishRead(uVar4,puVar12);
  plVar5 = (longlong *)FConfigCacheIni::Find(uVar10,&DAT_1468e2360,0);
  uVar21 = uVar11;
  if (plVar5 != (longlong *)0x0) {
    local_38[1] = 4;
    local_38[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    lVar15 = local_38[0];
    FGenericPlatformString::Memcpy(local_38[0],&DAT_144cc3da0,8);
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar5,local_res8,local_38);
    if (local_res8[0] == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)local_res8[0] * 0xb8 + *plVar5;
    }
    plVar5 = (longlong *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      plVar5 = (longlong *)0x0;
    }
    if (lVar15 != 0) {
      FMemory::Free(lVar15);
    }
    if (plVar5 != (longlong *)0x0) {
      plVar7 = (longlong *)FName::FName(local_res8,L"Name",1);
      pwVar19 = (wchar_t *)*plVar7;
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        plVar7 = (longlong *)plVar5[8];
        if ((longlong *)plVar5[8] == (longlong *)0x0) {
          plVar7 = plVar5 + 7;
        }
        iVar3 = *(int *)((longlong)plVar7 +
                        ((longlong)((int)((ulonglong)pwVar19 >> 0x20) + (int)pwVar19) &
                        (longlong)(int)plVar5[9] - 1U) * 4);
        if (iVar3 != -1) {
          do {
            ppwVar9 = (wchar_t **)(*plVar5 + (longlong)iVar3 * 0x30);
            if (*ppwVar9 == pwVar19) {
              if (iVar3 != -1) goto LAB_1416500b6;
              break;
            }
            iVar3 = *(int *)(ppwVar9 + 5);
          } while (iVar3 != -1);
        }
      }
      ppwVar9 = (wchar_t **)0x0;
LAB_1416500b6:
      ppwVar8 = ppwVar9 + 1;
      if (ppwVar9 == (wchar_t **)0x0) {
        ppwVar8 = (wchar_t **)0x0;
      }
      if (ppwVar8 != (wchar_t **)0x0) {
        uVar14 = *(int *)(ppwVar8 + 3) - 1;
        if (*(int *)(ppwVar8 + 3) == 0) {
          uVar14 = 0;
        }
        ppwVar9 = ppwVar8 + 2;
        if ((int)uVar14 < 1) {
          ppwVar9 = ppwVar8;
        }
        pwVar18 = (wchar_t *)0x0;
        if (&local_48 != ppwVar9) {
          uVar11 = *(uint *)(ppwVar9 + 1);
          pwVar19 = *ppwVar9;
          uVar21 = 0;
          local_40._0_4_ = uVar11;
          if (uVar11 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,uVar11,0);
            pwVar18 = local_48;
            _guard_xfg_dispatch_icall_nop(local_48,pwVar19,(longlong)(int)uVar11 * 2);
            uVar11 = (uint)local_40;
            uVar21 = local_40._4_4_;
          }
        }
      }
    }
  }
  ppwVar9 = param_1 + 2;
  if (ppwVar9 == &local_48) {
    if (pwVar18 != (wchar_t *)0x0) {
      FMemory::Free(pwVar18);
    }
  }
  else {
    if (*ppwVar9 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *ppwVar9 = pwVar18;
    *(uint *)(param_1 + 3) = uVar11;
    *(uint *)((longlong)param_1 + 0x1c) = uVar21;
  }
  uVar10 = DAT_1468b6148;
  pwVar18 = (wchar_t *)0x0;
  pwVar19 = (wchar_t *)0x0;
  local_48 = (wchar_t *)0x0;
  puVar12 = &DAT_143f3eda8;
  if (DAT_1468e2368 != 0) {
    puVar12 = DAT_1468e2360;
  }
  pwVar16 = (wchar_t *)0x0;
  iVar3 = 0;
  local_40._4_4_ = 0;
  uVar4 = FRemoteConfig::Get();
  FRemoteConfig::FinishRead(uVar4,puVar12);
  plVar5 = (longlong *)FConfigCacheIni::Find(uVar10,&DAT_1468e2360,0);
  pwVar20 = pwVar18;
  if (plVar5 != (longlong *)0x0) {
    local_38[1] = 4;
    local_38[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    lVar15 = local_38[0];
    FGenericPlatformString::Memcpy(local_38[0],&DAT_144cc3db8,8);
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar5,local_res8,local_38);
    if (local_res8[0] == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)local_res8[0] * 0xb8 + *plVar5;
    }
    pwVar17 = (wchar_t *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      pwVar17 = pwVar18;
    }
    if (lVar15 != 0) {
      FMemory::Free(lVar15);
    }
    pwVar18 = pwVar16;
    pwVar20 = pwVar19;
    if (pwVar17 != (wchar_t *)0x0) {
      plVar5 = (longlong *)FName::FName(local_res8,L"Host",1);
      pwVar19 = (wchar_t *)*plVar5;
      if (*(int *)(pwVar17 + 4) != *(int *)(pwVar17 + 0x1a)) {
        pwVar16 = *(wchar_t **)(pwVar17 + 0x20);
        if (*(wchar_t **)(pwVar17 + 0x20) == (wchar_t *)0x0) {
          pwVar16 = pwVar17 + 0x1c;
        }
        iVar2 = *(int *)(pwVar16 +
                        ((longlong)((int)((ulonglong)pwVar19 >> 0x20) + (int)pwVar19) &
                        (longlong)*(int *)(pwVar17 + 0x24) - 1U) * 2);
        if (iVar2 != -1) {
          do {
            ppwVar9 = (wchar_t **)(*(longlong *)pwVar17 + (longlong)iVar2 * 0x30);
            if (*ppwVar9 == pwVar19) {
              if (iVar2 != -1) goto LAB_1416502a5;
              break;
            }
            iVar2 = *(int *)(ppwVar9 + 5);
          } while (iVar2 != -1);
        }
      }
      ppwVar9 = (wchar_t **)0x0;
LAB_1416502a5:
      ppwVar8 = ppwVar9 + 1;
      if (ppwVar9 == (wchar_t **)0x0) {
        ppwVar8 = (wchar_t **)0x0;
      }
      if (ppwVar8 != (wchar_t **)0x0) {
        iVar2 = *(int *)(ppwVar8 + 3) + -1;
        if (*(int *)(ppwVar8 + 3) == 0) {
          iVar2 = 0;
        }
        ppwVar9 = ppwVar8 + 2;
        if (iVar2 < 1) {
          ppwVar9 = ppwVar8;
        }
        if (&local_48 != ppwVar9) {
          local_40._0_4_ = *(uint *)(ppwVar9 + 1);
          lVar15 = (longlong)(int)(uint)local_40;
          pwVar18 = *ppwVar9;
          if ((uint)local_40 == 0) {
            pwVar18 = (wchar_t *)0x0;
            iVar3 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,(uint)local_40,0);
            pwVar20 = local_48;
            _guard_xfg_dispatch_icall_nop(local_48,pwVar18,lVar15 * 2);
            pwVar18 = (wchar_t *)(ulonglong)(uint)local_40;
            iVar3 = local_40._4_4_;
          }
        }
      }
    }
  }
  ppwVar9 = param_1 + 4;
  if (ppwVar9 == &local_48) {
    if (pwVar20 != (wchar_t *)0x0) {
      FMemory::Free(pwVar20);
    }
  }
  else {
    if (*ppwVar9 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *ppwVar9 = pwVar20;
    *(int *)(param_1 + 5) = (int)pwVar18;
    *(int *)((longlong)param_1 + 0x2c) = iVar3;
  }
  uVar10 = DAT_1468b6148;
  pwVar18 = (wchar_t *)0x0;
  pwVar19 = (wchar_t *)0x0;
  local_48 = (wchar_t *)0x0;
  puVar12 = &DAT_143f3eda8;
  if (DAT_1468e2368 != 0) {
    puVar12 = DAT_1468e2360;
  }
  pwVar16 = (wchar_t *)0x0;
  iVar3 = 0;
  local_40._4_4_ = 0;
  uVar4 = FRemoteConfig::Get();
  FRemoteConfig::FinishRead(uVar4,puVar12);
  plVar5 = (longlong *)FConfigCacheIni::Find(uVar10,&DAT_1468e2360,0);
  pwVar20 = pwVar18;
  if (plVar5 != (longlong *)0x0) {
    local_38[1] = 4;
    local_38[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    lVar15 = local_38[0];
    FGenericPlatformString::Memcpy(local_38[0],&DAT_144cc3dd0,8);
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar5,local_res8,local_38);
    if (local_res8[0] == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)local_res8[0] * 0xb8 + *plVar5;
    }
    pwVar17 = (wchar_t *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      pwVar17 = pwVar18;
    }
    if (lVar15 != 0) {
      FMemory::Free(lVar15);
    }
    pwVar18 = pwVar16;
    pwVar20 = pwVar19;
    if (pwVar17 != (wchar_t *)0x0) {
      plVar5 = (longlong *)FName::FName(local_res8,L"Portal",1);
      pwVar19 = (wchar_t *)*plVar5;
      if (*(int *)(pwVar17 + 4) != *(int *)(pwVar17 + 0x1a)) {
        pwVar16 = *(wchar_t **)(pwVar17 + 0x20);
        if (*(wchar_t **)(pwVar17 + 0x20) == (wchar_t *)0x0) {
          pwVar16 = pwVar17 + 0x1c;
        }
        iVar2 = *(int *)(pwVar16 +
                        ((longlong)((int)((ulonglong)pwVar19 >> 0x20) + (int)pwVar19) &
                        (longlong)*(int *)(pwVar17 + 0x24) - 1U) * 2);
        if (iVar2 != -1) {
          do {
            ppwVar9 = (wchar_t **)(*(longlong *)pwVar17 + (longlong)iVar2 * 0x30);
            if (*ppwVar9 == pwVar19) {
              if (iVar2 != -1) goto LAB_141650495;
              break;
            }
            iVar2 = *(int *)(ppwVar9 + 5);
          } while (iVar2 != -1);
        }
      }
      ppwVar9 = (wchar_t **)0x0;
LAB_141650495:
      ppwVar8 = ppwVar9 + 1;
      if (ppwVar9 == (wchar_t **)0x0) {
        ppwVar8 = (wchar_t **)0x0;
      }
      if (ppwVar8 != (wchar_t **)0x0) {
        iVar2 = *(int *)(ppwVar8 + 3) + -1;
        if (*(int *)(ppwVar8 + 3) == 0) {
          iVar2 = 0;
        }
        ppwVar9 = ppwVar8 + 2;
        if (iVar2 < 1) {
          ppwVar9 = ppwVar8;
        }
        if (&local_48 != ppwVar9) {
          local_40._0_4_ = *(uint *)(ppwVar9 + 1);
          lVar15 = (longlong)(int)(uint)local_40;
          pwVar18 = *ppwVar9;
          if ((uint)local_40 == 0) {
            pwVar18 = (wchar_t *)0x0;
            iVar3 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,(uint)local_40,0);
            pwVar20 = local_48;
            _guard_xfg_dispatch_icall_nop(local_48,pwVar18,lVar15 * 2);
            pwVar18 = (wchar_t *)(ulonglong)(uint)local_40;
            iVar3 = local_40._4_4_;
          }
        }
      }
    }
  }
  ppwVar9 = param_1 + 6;
  if (ppwVar9 == &local_48) {
    if (pwVar20 != (wchar_t *)0x0) {
      FMemory::Free(pwVar20);
    }
  }
  else {
    if (*ppwVar9 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *ppwVar9 = pwVar20;
    *(int *)(param_1 + 7) = (int)pwVar18;
    *(int *)((longlong)param_1 + 0x3c) = iVar3;
  }
  uVar10 = DAT_1468b6148;
  pwVar18 = (wchar_t *)0x0;
  pwVar19 = (wchar_t *)0x0;
  local_48 = (wchar_t *)0x0;
  puVar12 = &DAT_143f3eda8;
  if (DAT_1468e2368 != 0) {
    puVar12 = DAT_1468e2360;
  }
  pwVar17 = (wchar_t *)0x0;
  iVar3 = 0;
  local_40._4_4_ = 0;
  uVar4 = FRemoteConfig::Get();
  FRemoteConfig::FinishRead(uVar4,puVar12);
  plVar5 = (longlong *)FConfigCacheIni::Find(uVar10,&DAT_1468e2360,0);
  pwVar16 = pwVar17;
  pwVar20 = pwVar19;
  if (plVar5 != (longlong *)0x0) {
    local_38[1] = 4;
    local_38[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    lVar15 = local_38[0];
    FGenericPlatformString::Memcpy(local_38[0],&DAT_144cc3de8,8);
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar5,local_res8,local_38);
    if (local_res8[0] == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)local_res8[0] * 0xb8 + *plVar5;
    }
    pwVar13 = (wchar_t *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      pwVar13 = pwVar18;
    }
    if (lVar15 != 0) {
      FMemory::Free(lVar15);
    }
    if (pwVar13 != (wchar_t *)0x0) {
      plVar5 = (longlong *)FName::FName(local_res8,L"SaveExt",1);
      pwVar20 = (wchar_t *)*plVar5;
      if (*(int *)(pwVar13 + 4) != *(int *)(pwVar13 + 0x1a)) {
        pwVar16 = *(wchar_t **)(pwVar13 + 0x20);
        if (*(wchar_t **)(pwVar13 + 0x20) == (wchar_t *)0x0) {
          pwVar16 = pwVar13 + 0x1c;
        }
        iVar2 = *(int *)(pwVar16 +
                        ((longlong)((int)((ulonglong)pwVar20 >> 0x20) + (int)pwVar20) &
                        (longlong)*(int *)(pwVar13 + 0x24) - 1U) * 2);
        if (iVar2 != -1) {
          do {
            ppwVar9 = (wchar_t **)(*(longlong *)pwVar13 + (longlong)iVar2 * 0x30);
            if (*ppwVar9 == pwVar20) {
              if (iVar2 != -1) goto LAB_141650685;
              break;
            }
            iVar2 = *(int *)(ppwVar9 + 5);
          } while (iVar2 != -1);
        }
      }
      ppwVar9 = (wchar_t **)0x0;
LAB_141650685:
      ppwVar8 = ppwVar9 + 1;
      if (ppwVar9 == (wchar_t **)0x0) {
        ppwVar8 = (wchar_t **)0x0;
      }
      pwVar16 = pwVar18;
      pwVar20 = pwVar18;
      if (ppwVar8 != (wchar_t **)0x0) {
        iVar2 = *(int *)(ppwVar8 + 3) + -1;
        if (*(int *)(ppwVar8 + 3) == 0) {
          iVar2 = 0;
        }
        ppwVar9 = ppwVar8 + 2;
        if (iVar2 < 1) {
          ppwVar9 = ppwVar8;
        }
        pwVar16 = pwVar17;
        pwVar20 = pwVar19;
        if (&local_48 != ppwVar9) {
          local_40._0_4_ = *(uint *)(ppwVar9 + 1);
          lVar15 = (longlong)(int)(uint)local_40;
          pwVar18 = *ppwVar9;
          if ((uint)local_40 == 0) {
            pwVar16 = (wchar_t *)0x0;
            iVar3 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,(uint)local_40,0);
            pwVar20 = local_48;
            _guard_xfg_dispatch_icall_nop(local_48,pwVar18,lVar15 * 2);
            pwVar16 = (wchar_t *)(ulonglong)(uint)local_40;
            iVar3 = local_40._4_4_;
          }
        }
      }
    }
  }
  ppwVar9 = param_1 + 8;
  if (ppwVar9 == &local_48) {
    if (pwVar20 != (wchar_t *)0x0) {
      FMemory::Free(pwVar20);
    }
  }
  else {
    if (*ppwVar9 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *ppwVar9 = pwVar20;
    *(int *)(param_1 + 9) = (int)pwVar16;
    *(int *)((longlong)param_1 + 0x4c) = iVar3;
  }
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  uVar10 = FCommandLine::Get();
  cVar1 = FParse::Value(uVar10,L"Port=",&local_58,1);
  if (cVar1 == '\0') {
    local_48 = (wchar_t *)0x0;
    local_40._0_4_ = 0;
    local_40._4_4_ = 0;
    FConfigCacheIni::GetString(DAT_1468b6148,&DAT_144cc3e10,L"Port",&local_48,&DAT_1468e2360);
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_58 = local_48;
    local_50 = CONCAT44(local_40._4_4_,(uint)local_40);
    uVar11 = (uint)local_40;
  }
  else {
    uVar11 = (uint)local_50;
  }
  pwVar18 = L"";
  if (uVar11 != 0) {
    pwVar18 = local_58;
  }
  iVar3 = _wtoi(pwVar18);
  local_48 = (wchar_t *)0x0;
  *(int *)(param_1 + 10) = iVar3;
  local_40 = 0;
  FConfigCacheIni::GetString(DAT_1468b6148,&DAT_144cc3e30,L"NATProtocol",&local_48,&DAT_1468e2360);
  ppwVar9 = param_1 + 0xb;
  if (ppwVar9 == &local_48) {
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*ppwVar9 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *ppwVar9 = local_48;
    *(uint *)(param_1 + 0xc) = (uint)local_40;
    *(uint *)((longlong)param_1 + 100) = local_40._4_4_;
  }
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FConfigCacheIni::GetString(DAT_1468b6148,&DAT_144cc3e50,L"NATOption",&local_48,&DAT_1468e2360);
  ppwVar9 = param_1 + 0xd;
  if (ppwVar9 == &local_48) {
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*ppwVar9 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *ppwVar9 = local_48;
    *(uint *)(param_1 + 0xe) = (uint)local_40;
    *(uint *)((longlong)param_1 + 0x74) = local_40._4_4_;
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416508d0 FUN_1416508d0 body=1954 status=ok
// SIG undefined FUN_1416508d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416508d0(void)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  wint_t wVar7;
  wint_t wVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined1 auStack_208 [32];
  undefined2 *local_1e8;
  undefined1 local_1e0;
  undefined2 *local_1d8;
  undefined4 *local_1c8;
  ulonglong *puStack_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined8 local_198;
  longlong local_190;
  longlong local_188 [2];
  longlong local_178 [2];
  longlong local_168 [2];
  undefined1 local_158 [16];
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128 [2];
  longlong local_118 [2];
  longlong local_108 [2];
  longlong local_f8 [2];
  longlong local_e8 [2];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if (DAT_1468b6148 != (undefined8 *)0x0) {
    return;
  }
  FUN_14165bba0();
  puVar9 = (undefined8 *)operator_new(0x60);
  puVar13 = (undefined8 *)0x0;
  DAT_1468b6148 = puVar13;
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    *(undefined4 *)(puVar9 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
    puVar9[9] = 0;
    *(undefined4 *)(puVar9 + 10) = 0;
    *puVar9 = &PTR__scalar_deleting_destructor__144cc8420;
    *(undefined2 *)(puVar9 + 0xb) = 0;
    *(undefined1 *)((longlong)puVar9 + 0x5a) = 0;
    DAT_1468b6148 = puVar9;
  }
  if (DAT_146299580 != 0) {
    do {
      wVar7 = *(wint_t *)(puVar13 + 0x28c532b0);
      if ((wVar7 == 0) && (*(short *)(puVar13 + 0x287e7db9) == 0)) break;
      if (wVar7 != *(wint_t *)(puVar13 + 0x287e7db9)) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*(wint_t *)(puVar13 + 0x287e7db9));
        if (wVar7 != wVar8) goto LAB_1416509c9;
      }
      puVar13 = (undefined8 *)((longlong)puVar13 + 2);
    } while( true );
  }
LAB_1416509ef:
  bVar4 = true;
LAB_1416509f2:
  uVar11 = 0;
LAB_1416509f5:
  puVar9 = (undefined8 *)FPaths::GeneratedConfigDir(local_188);
  puVar14 = &DAT_143f3eda8;
  if (*(int *)(puVar9 + 1) == 0) {
    local_1d8 = &DAT_143f3eda8;
  }
  else {
    local_1d8 = (undefined2 *)*puVar9;
  }
  local_1e0 = 1;
  local_1e8 = (undefined2 *)((ulonglong)local_1e8 & 0xffffffffffffff00);
  cVar6 = FConfigCacheIni::LoadGlobalIniFile(&DAT_1468e2360,L"Engine",0,uVar11);
  if (local_188[0] != 0) {
    FMemory::Free();
  }
  if (((!bVar4) && (DAT_14686c500 != '\0')) && (cVar6 == '\0')) {
    plVar10 = (longlong *)FUN_1415c3d50();
    puVar9 = (undefined8 *)FUN_141672d20(local_168,&DAT_1468e2360);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar9;
    }
    uVar11 = (**(code **)(*plVar10 + 0xd8))(plVar10,local_178,puVar15);
    FText::FromString(local_d8,uVar11);
    if (local_178[0] != 0) {
      FMemory::Free();
    }
    if (local_168[0] != 0) {
      FMemory::Free();
    }
    lVar12 = FText::FText(local_80,local_d8);
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_a8,L"\'{0}\' must exist and contain a DefaultEngine.ini.",L"Core",
                        L"FirstCmdArgMustBeGameName");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar11);
    local_68[0] = 4;
    FText::FText(local_58,lVar12);
    local_198 = *puVar9;
    local_1c8 = local_68;
    puStack_1c0 = local_38;
    local_190 = puVar9[1];
    local_40 = '\x01';
    if (local_190 != 0) {
      LOCK();
      *(int *)(local_190 + 8) = *(int *)(local_190 + 8) + 1;
      UNLOCK();
    }
    uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_1c8);
    uVar11 = FText::Format(local_c0,&local_198,uVar11);
    FText::FText(local_1b0,uVar11);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_b8 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_158);
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_50 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    plVar10 = (longlong *)puVar9[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar10 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    plVar10 = *(longlong **)(lVar12 + 8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar10 + 1;
      lVar12 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_a0 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    if (DAT_1468c2178 == '\0') {
      FUN_1416786b0(0,local_1b0,0);
    }
    wcsncpy(&DAT_146299580,L"",0x3f);
    _DAT_1462995fe = 0;
    if (DAT_1468c2178 == '\0') {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    puVar9 = (undefined8 *)FText::ToString(local_1b0);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar9;
    }
    LowLevelFatalErrorHandler("Unknown",0xccc,&DAT_144cc4e54,puVar15);
    puVar9 = (undefined8 *)FText::ToString(local_1b0);
    if (*(int *)(puVar9 + 1) == 0) {
      local_1e8 = &DAT_143f3eda8;
    }
    else {
      local_1e8 = (undefined2 *)*puVar9;
    }
    FDebug::AssertFailed(&DAT_144cc2c9f,"Unknown",0xccc,&DAT_144cc5494);
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_1a8 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_1a8)(local_1a8);
        LOCK();
        piVar1 = (int *)((longlong)local_1a8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1a8 + 8))(local_1a8,1);
        }
      }
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_d0 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
  }
  puVar9 = (undefined8 *)FPaths::GeneratedConfigDir(local_148);
  if (*(int *)(puVar9 + 1) == 0) {
    local_1d8 = &DAT_143f3eda8;
  }
  else {
    local_1d8 = (undefined2 *)*puVar9;
  }
  local_1e0 = 1;
  local_1e8 = (undefined2 *)((ulonglong)local_1e8 & 0xffffffffffffff00);
  FConfigCacheIni::LoadGlobalIniFile(&DAT_1468e2410,L"Game",0,0);
  if (local_148[0] != 0) {
    FMemory::Free();
  }
  puVar9 = (undefined8 *)FPaths::GeneratedConfigDir(local_138);
  if (*(int *)(puVar9 + 1) == 0) {
    local_1d8 = &DAT_143f3eda8;
  }
  else {
    local_1d8 = (undefined2 *)*puVar9;
  }
  local_1e0 = 1;
  local_1e8 = (undefined2 *)((ulonglong)local_1e8 & 0xffffffffffffff00);
  FConfigCacheIni::LoadGlobalIniFile(&DAT_1468e2400,L"Input",0,0);
  if (local_138[0] != 0) {
    FMemory::Free();
  }
  puVar9 = (undefined8 *)FPaths::GeneratedConfigDir(local_128);
  if (*(int *)(puVar9 + 1) == 0) {
    local_1d8 = &DAT_143f3eda8;
  }
  else {
    local_1d8 = (undefined2 *)*puVar9;
  }
  local_1e0 = 1;
  local_1e8 = (undefined2 *)((ulonglong)local_1e8 & 0xffffffffffffff00);
  FConfigCacheIni::LoadGlobalIniFile(&DAT_1468e23c0,L"Compat",0,0);
  if (local_128[0] != 0) {
    FMemory::Free();
  }
  puVar9 = (undefined8 *)FPaths::GeneratedConfigDir(local_118);
  if (*(int *)(puVar9 + 1) == 0) {
    local_1d8 = &DAT_143f3eda8;
  }
  else {
    local_1d8 = (undefined2 *)*puVar9;
  }
  local_1e0 = 1;
  local_1e8 = (undefined2 *)((ulonglong)local_1e8 & 0xffffffffffffff00);
  FConfigCacheIni::LoadGlobalIniFile(&DAT_1468e23d0,L"Lightmass",0,0);
  if (local_118[0] != 0) {
    FMemory::Free();
  }
  puVar9 = (undefined8 *)FPaths::GeneratedConfigDir(local_108);
  if (*(int *)(puVar9 + 1) == 0) {
    local_1d8 = &DAT_143f3eda8;
  }
  else {
    local_1d8 = (undefined2 *)*puVar9;
  }
  local_1e0 = 1;
  local_1e8 = (undefined2 *)((ulonglong)local_1e8 & 0xffffffffffffff00);
  FConfigCacheIni::LoadGlobalIniFile(&DAT_1468e23e0,L"Scalability",0,0);
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  puVar9 = (undefined8 *)FPaths::GeneratedConfigDir(local_f8);
  if (*(int *)(puVar9 + 1) == 0) {
    local_1d8 = &DAT_143f3eda8;
  }
  else {
    local_1d8 = (undefined2 *)*puVar9;
  }
  local_1e0 = 1;
  local_1e8 = (undefined2 *)((ulonglong)local_1e8 & 0xffffffffffffff00);
  FConfigCacheIni::LoadGlobalIniFile(&DAT_1468e23f0,L"Hardware",0,0);
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  puVar9 = (undefined8 *)FPaths::GeneratedConfigDir(local_e8);
  if (*(int *)(puVar9 + 1) != 0) {
    puVar14 = (undefined2 *)*puVar9;
  }
  local_1e0 = 1;
  local_1e8 = (undefined2 *)((ulonglong)local_1e8 & 0xffffffffffffff00);
  local_1d8 = puVar14;
  FConfigCacheIni::LoadGlobalIniFile(&DAT_1468e2420,L"GameUserSettings",0,0);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)((longlong)DAT_1468b6148 + 0x59) = 1;
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af6a0);
  return;
LAB_1416509c9:
  if (wVar7 == wVar8) goto LAB_1416509ef;
  bVar4 = false;
  if ((DAT_14686c500 != '\0') || (DAT_146299580 == 0)) {
    uVar11 = 1;
    goto LAB_1416509f5;
  }
  goto LAB_1416509f2;
}



// FUNCTION 141651080 FUN_141651080 body=39 status=ok
// SIG undefined FUN_141651080(void)

void FUN_141651080(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144cc82c0;
    return;
  }
  return;
}



// FUNCTION 1416510b0 FUN_1416510b0 body=809 status=ok
// SIG undefined FUN_1416510b0(void)

void FUN_1416510b0(longlong param_1,undefined2 **param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  LARGE_INTEGER local_res8;
  undefined2 *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  plVar12 = (longlong *)0x0;
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  local_38[0] = 0;
  local_38[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  lVar5 = local_38[0];
  FGenericPlatformString::Memcpy(local_38[0],&DAT_144cc4eb4,4);
  cVar1 = FUN_1404e14f0(param_2,local_38,&local_48,param_1 + 0x1b0,0,0);
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  puVar10 = local_48;
  if ((cVar1 == '\0') && (&local_48 != param_2)) {
    iVar3 = *(int *)(param_2 + 1);
    puVar6 = *param_2;
    local_40 = CONCAT44(local_40._4_4_,iVar3);
    if ((iVar3 != 0) || (iVar13 = 0, local_40._4_4_ != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar3);
      puVar10 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,puVar6,(longlong)iVar3 * 2);
      iVar13 = (int)local_40;
    }
  }
  else {
    iVar13 = (int)local_40;
  }
  if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c)) {
    puVar6 = &DAT_143f3eda8;
    if (iVar13 != 0) {
      puVar6 = puVar10;
    }
    iVar3 = FUN_140438070(puVar6);
    lVar5 = *(longlong *)(param_1 + 0x158);
    if (*(longlong *)(param_1 + 0x158) == 0) {
      lVar5 = param_1 + 0x150;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x160) - 1U & (longlong)iVar3) * 4);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x118);
      do {
        lVar11 = (longlong)iVar3 * 0x20;
        puVar6 = &DAT_143f3eda8;
        if (iVar13 != 0) {
          puVar6 = puVar10;
        }
        if (*(int *)(lVar5 + 8 + lVar11) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = *(undefined2 **)(lVar5 + lVar11);
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar6);
        if (iVar4 == 0) {
          if (iVar3 != -1) {
            plVar9 = plVar12;
            if (*(int *)(param_1 + 0x120) == *(int *)(param_1 + 0x14c)) goto LAB_141651309;
            puVar6 = &DAT_143f3eda8;
            if (iVar13 != 0) {
              puVar6 = puVar10;
            }
            iVar3 = FUN_140438070(puVar6);
            lVar5 = *(longlong *)(param_1 + 0x158);
            if (*(longlong *)(param_1 + 0x158) == 0) {
              lVar5 = param_1 + 0x150;
            }
            iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x160) - 1U & (longlong)iVar3) *
                                     4);
            if (iVar3 == -1) goto LAB_141651309;
            lVar5 = *(longlong *)(param_1 + 0x118);
            goto LAB_1416512c0;
          }
          break;
        }
        lVar5 = *(longlong *)(param_1 + 0x118);
        iVar3 = *(int *)(lVar5 + 0x18 + lVar11);
      } while (iVar3 != -1);
    }
  }
  goto LAB_141651385;
  while( true ) {
    lVar5 = *(longlong *)(param_1 + 0x118);
    iVar3 = *(int *)(lVar5 + 0x18 + lVar11);
    if (iVar3 == -1) break;
LAB_1416512c0:
    lVar11 = (longlong)iVar3 * 0x20;
    puVar6 = &DAT_143f3eda8;
    if (iVar13 != 0) {
      puVar6 = puVar10;
    }
    if (*(int *)(lVar5 + 8 + lVar11) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = *(undefined2 **)(lVar5 + lVar11);
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar6);
    if (iVar4 == 0) {
      if (iVar3 != -1) {
        plVar9 = (longlong *)(*(longlong *)(param_1 + 0x118) + lVar11);
      }
      break;
    }
  }
LAB_141651309:
  plVar8 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar8 = plVar12;
  }
  lVar5 = *plVar8;
  *(longlong *)(param_1 + 0x1a8) = lVar5;
  FAutomationTestExecutionInfo::Clear(lVar5 + 0x20);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x1a8);
  QueryPerformanceCounter(&local_res8);
  *(double *)(param_1 + 0x198) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x90))
                    (*(longlong **)(param_1 + 0x1a8),param_1 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1a0) = uVar2;
LAB_141651385:
  if (puVar10 == (undefined2 *)0x0) {
    return;
  }
  FMemory::Free(puVar10);
  return;
}



// FUNCTION 1416513e0 FUN_1416513e0 body=242 status=ok
// SIG undefined FUN_1416513e0(void)

undefined8 FUN_1416513e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar8 = *(longlong *)(param_1 + 0x90);
  lVar7 = (longlong)*(int *)(param_1 + 0x98) * 0x30 + lVar8;
  while( true ) {
    if (lVar8 == lVar7) {
      return 0;
    }
    FUN_1415cd370(local_18,lVar8 + 0x10,param_2);
    cVar6 = FUN_1415d6d60(local_18);
    plVar3 = local_10;
    if (cVar6 != '\0') break;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
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
    lVar8 = lVar8 + 0x30;
  }
  *(int *)(lVar8 + 0x28) = *(int *)(lVar8 + 0x28) + 1;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return 1;
}



// FUNCTION 1416514e0 FUN_1416514e0 body=8 status=ok
// SIG undefined FUN_1416514e0(void)

undefined1 FUN_1416514e0(void)

{
  return DAT_1468c21f6;
}



// FUNCTION 1416514f0 FUN_1416514f0 body=246 status=ok
// SIG undefined FUN_1416514f0(void)

undefined1 FUN_1416514f0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e28c8) {
    _Init_thread_header(&DAT_1468e28c8);
    if (DAT_1468e28c8 == -1) {
      plVar2 = (longlong *)FPaths::EngineDir(local_18);
      lVar1 = plVar2[1];
      local_28 = *plVar2;
      *plVar2 = 0;
      local_20 = (int)plVar2[1];
      local_1c = *(int *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
      if (local_1c < (int)((0x28 - (uint)((int)lVar1 != 0)) + local_20)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
      }
      FString::PathAppend(&local_28,L"Build/NotForLicensees/EpicInternal.txt",0x26);
      DAT_1468e28c4 = FPaths::FileExists(&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_1468e28c8);
      return DAT_1468e28c4;
    }
  }
  return DAT_1468e28c4;
}



// FUNCTION 1416515f0 IsLeapYear body=84 status=ok
// SIG undefined IsLeapYear(void)

ulonglong FDateTime::IsLeapYear(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  uVar2 = (ulonglong)uVar1;
  if ((uVar1 == 0) &&
     ((uVar2 = (longlong)(int)param_1 * 0x51eb851f & 0xffffffff,
      param_1 != ((int)param_1 / 100) * 100 ||
      (uVar1 = ((int)param_1 / 400) * 400, uVar2 = (ulonglong)uVar1, param_1 == uVar1)))) {
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141651650 FUN_141651650 body=8 status=ok
// SIG undefined FUN_141651650(void)

undefined1 FUN_141651650(void)

{
  return DAT_1468e222b;
}



// FUNCTION 141651660 FUN_141651660 body=246 status=ok
// SIG undefined FUN_141651660(void)

undefined1 FUN_141651660(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e28d0) {
    _Init_thread_header(&DAT_1468e28d0);
    if (DAT_1468e28d0 == -1) {
      plVar2 = (longlong *)FPaths::EngineDir(local_18);
      lVar1 = plVar2[1];
      local_28 = *plVar2;
      *plVar2 = 0;
      local_20 = (int)plVar2[1];
      local_1c = *(int *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
      if (local_1c < (int)((0x19 - (uint)((int)lVar1 != 0)) + local_20)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
      }
      FString::PathAppend(&local_28,L"Build/PerforceBuild.txt",0x17);
      DAT_1468e28cc = FPaths::FileExists(&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_1468e28d0);
      return DAT_1468e28cc;
    }
  }
  return DAT_1468e28cc;
}



// FUNCTION 141651760 IsServerForOnlineSubsystems body=79 status=ok
// SIG undefined IsServerForOnlineSubsystems(void)

ulonglong IsServerForOnlineSubsystems(undefined8 param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong *plVar2;
  
  if ((DAT_1468e2508 != 0) && (DAT_1468e2500 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*DAT_1468e2500 + 0x18))();
    if ((char)in_RAX != '\0') {
      plVar2 = (longlong *)0x0;
      if (DAT_1468e2508 != 0) {
        plVar2 = DAT_1468e2500;
      }
                    /* WARNING: Could not recover jumptable at 0x0001416517a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1416517b0 FUN_1416517b0 body=255 status=ok
// SIG undefined FUN_1416517b0(void)

undefined1 FUN_1416517b0(void)

{
  void *_Src;
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *local_28;
  int local_20;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)FPaths::RootDir(local_18);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e28d8) {
    _Init_thread_header(&DAT_1468e28d8);
    if (DAT_1468e28d8 == -1) {
      local_20 = *(int *)(puVar2 + 1);
      lVar3 = (longlong)local_20;
      _Src = (void *)*puVar2;
      local_28 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_28,(0x25 - (uint)(local_20 != 0)) + local_20,0);
      _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar3 * 2);
      FString::PathAppend(&local_28,L"Engine/Build/SourceDistribution.txt",0x23);
      DAT_1468e28d4 = FPaths::FileExists(&local_28);
      if (local_28 != (void *)0x0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_1468e28d8);
    }
  }
  uVar1 = DAT_1468e28d4;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1416518b0 IsStringValidFloat body=374 status=ok
// SIG undefined IsStringValidFloat(void)

ulonglong FDefaultValueHelper::IsStringValidFloat(wint_t *param_1,wint_t *param_2)

{
  ushort _C;
  int iVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  wint_t *pwVar3;
  wint_t *pwVar4;
  bool bVar5;
  wint_t *local_res8;
  
  local_res8 = param_1;
  uVar2 = Trim(&local_res8);
  if ((char)uVar2 != '\0') {
    if ((*local_res8 - 0x2b & 0xfffd) == 0) {
      local_res8 = local_res8 + 1;
    }
    uVar2 = Trim(&local_res8,param_2);
    pwVar3 = local_res8;
    if ((char)uVar2 != '\0') {
      while ((pwVar3 < param_2 && (iVar1 = iswdigit(*pwVar3), iVar1 != 0))) {
        pwVar3 = pwVar3 + 1;
      }
      if (*pwVar3 == 0x2e) {
        pwVar3 = pwVar3 + 1;
      }
      while ((pwVar3 < param_2 && (iVar1 = iswdigit(*pwVar3), iVar1 != 0))) {
        pwVar3 = pwVar3 + 1;
      }
      pwVar4 = pwVar3;
      if (((*pwVar3 - 0x45 & 0xffdf) == 0) &&
         (pwVar4 = pwVar3 + 1, (pwVar3[1] - 0x2b & 0xfffd) == 0)) {
        pwVar4 = pwVar3 + 2;
      }
      while ((pwVar4 < param_2 && (iVar1 = iswdigit(*pwVar4), iVar1 != 0))) {
        pwVar4 = pwVar4 + 1;
      }
      uVar2 = (ulonglong)(ushort)(*pwVar4 - 0x46);
      if ((*pwVar4 - 0x46 & 0xffdf) == 0) {
        pwVar4 = pwVar4 + 1;
      }
      bVar5 = false;
      if (pwVar4 < param_2) {
        do {
          _C = *pwVar4;
          iVar1 = iswspace(_C);
          uVar2 = CONCAT44(extraout_var,iVar1);
          if ((((iVar1 == 0) && (uVar2 = (ulonglong)(_C - 10), 3 < (ushort)(_C - 10))) &&
              (_C != 0x85)) && (1 < (ushort)(_C + 0xdfd8))) break;
          pwVar4 = pwVar4 + 1;
        } while (pwVar4 < param_2);
        bVar5 = pwVar4 < param_2;
      }
      return CONCAT71((int7)(uVar2 >> 8),!bVar5);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141651a30 IsStringValidInteger body=466 status=ok
// SIG undefined IsStringValidInteger(void)

ulonglong FDefaultValueHelper::IsStringValidInteger
                    (wint_t *param_1,wint_t *param_2,undefined4 *param_3)

{
  ushort _C;
  int iVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  wint_t *pwVar3;
  bool bVar4;
  bool bVar5;
  wint_t *local_res8;
  
  bVar4 = false;
  local_res8 = param_1;
  uVar2 = Trim(&local_res8);
  if ((char)uVar2 == '\0') {
LAB_141651bf2:
    return uVar2 & 0xffffffffffffff00;
  }
  if ((*local_res8 - 0x2b & 0xfffd) == 0) {
    local_res8 = local_res8 + 1;
  }
  uVar2 = Trim(&local_res8,param_2);
  if ((char)uVar2 == '\0') goto LAB_141651bf2;
  if (*local_res8 == 0x30) {
    pwVar3 = local_res8 + 1;
    bVar5 = (local_res8[1] - 0x58 & 0xffdf) == 0;
    if (bVar5) {
      pwVar3 = local_res8 + 2;
      uVar2 = 0x10;
    }
    else {
      uVar2 = 8;
    }
    bVar4 = !bVar5;
    *param_3 = (int)uVar2;
    if (!bVar5) goto LAB_141651b2b;
    if (param_2 <= pwVar3) goto LAB_141651bb9;
    while( true ) {
      iVar1 = iswxdigit(*pwVar3);
      uVar2 = CONCAT44(extraout_var,iVar1);
      if (iVar1 == 0) break;
      pwVar3 = pwVar3 + 1;
      bVar4 = true;
      if (param_2 <= pwVar3) {
        return 1;
      }
    }
  }
  else {
    *param_3 = 10;
    pwVar3 = local_res8;
LAB_141651b2b:
    uVar2 = 0;
    if (param_2 <= pwVar3) goto LAB_141651bb9;
    while( true ) {
      iVar1 = iswdigit(*pwVar3);
      uVar2 = CONCAT44(extraout_var_00,iVar1);
      if (iVar1 == 0) break;
      pwVar3 = pwVar3 + 1;
      bVar4 = true;
      if (param_2 <= pwVar3) {
        return 1;
      }
    }
  }
  for (; pwVar3 < param_2; pwVar3 = pwVar3 + 1) {
    _C = *pwVar3;
    iVar1 = iswspace(_C);
    uVar2 = CONCAT44(extraout_var_01,iVar1);
    if ((((iVar1 == 0) && (uVar2 = (ulonglong)(_C - 10), 3 < (ushort)(_C - 10))) && (_C != 0x85)) &&
       (1 < (ushort)(_C + 0xdfd8))) {
      if (pwVar3 < param_2) goto LAB_141651bd8;
      break;
    }
  }
LAB_141651bb9:
  if (bVar4) {
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
LAB_141651bd8:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141651c10 LoadAnIniFile body=123 status=ok
// SIG undefined LoadAnIniFile(void)

void LoadAnIniFile(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  cVar1 = IsUsingLocalIniFile(puVar2,0);
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    cVar1 = DoesConfigFileExistWrapper(puVar2);
    if (cVar1 == '\0') {
      return;
    }
  }
  if (*(int *)(param_1 + 1) != 0) {
    puVar3 = (undefined2 *)*param_1;
  }
  ProcessIniContents(puVar3,puVar3,param_2,0,0);
  return;
}



// FUNCTION 141651c90 LoadConfigFileWrapper body=379 status=ok
// SIG undefined LoadConfigFileWrapper(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 LoadConfigFileWrapper(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  DAT_1464af2dc = DAT_1464af2dc + 1;
  bVar3 = false;
  lVar8 = (longlong)(DAT_1464af2d0 + -1);
  if (-1 < DAT_1464af2d0 + -1) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      if (((*(int *)(lVar7 + 8 + DAT_1464af2c8) == 0) ||
          (plVar2 = *(longlong **)(lVar7 + DAT_1464af2c8), plVar2 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1,param_2), cVar4 == '\0')) {
        bVar3 = true;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  iVar1 = DAT_1464af2d0;
  DAT_1464af2dc = DAT_1464af2dc + -1;
  if ((bVar3) && (DAT_1464af2dc < 1)) {
    iVar6 = 0;
    if (0 < DAT_1464af2d0) {
      lVar8 = 0;
      do {
        if (((*(int *)(lVar8 + 8 + DAT_1464af2c8) == 0) ||
            (*(longlong **)(lVar8 + DAT_1464af2c8) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar8 + DAT_1464af2c8) + 0x10))(), cVar4 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af2c8,iVar6,1,1);
        }
        else {
          iVar6 = iVar6 + 1;
          lVar8 = lVar8 + 0x10;
        }
      } while (iVar6 < DAT_1464af2d0);
    }
    _DAT_1464af2d8 = DAT_1464af2d0 * 2;
    if (_DAT_1464af2d8 < 3) {
      _DAT_1464af2d8 = 2;
    }
    if ((_DAT_1464af2d8 < iVar1) && (DAT_1464af2d4 != DAT_1464af2d0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af2c8);
    }
  }
  iVar1 = *(int *)(param_2 + 8);
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  if (iVar6 == 0) {
    uVar5 = FUN_141676530(param_2,param_1,0);
    return uVar5;
  }
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}



// FUNCTION 141651e10 LoadConsoleVariablesFromINI body=327 status=ok
// SIG undefined LoadConsoleVariablesFromINI(void)

void FConfigCacheIni::LoadConsoleVariablesFromINI(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FPaths::EngineDir(local_18);
  lVar3 = plVar2[1];
  local_28 = *plVar2;
  *plVar2 = 0;
  local_20 = (int)plVar2[1];
  local_1c = *(int *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  iVar5 = local_20;
  if (local_1c < (int)((0x1c - (uint)((int)lVar3 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar5 = local_20;
  }
  local_20 = (0x1c - (uint)(iVar5 != 0)) + iVar5;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar5);
  }
  lVar1 = local_28;
  lVar3 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar3 * 2),L"Config/C",8);
  lVar3 = local_28 + lVar3 * 2;
  ((wchar_t *)(lVar3 + 0x10))[0] = L'o';
  ((wchar_t *)(lVar3 + 0x10))[1] = L'n';
  ((wchar_t *)(lVar3 + 0x14))[0] = L's';
  ((wchar_t *)(lVar3 + 0x14))[1] = L'o';
  ((wchar_t *)(lVar3 + 0x18))[0] = L'l';
  ((wchar_t *)(lVar3 + 0x18))[1] = L'e';
  ((wchar_t *)(lVar3 + 0x1c))[0] = L'V';
  ((wchar_t *)(lVar3 + 0x1c))[1] = L'a';
  ((wchar_t *)(lVar3 + 0x20))[0] = L'r';
  ((wchar_t *)(lVar3 + 0x20))[1] = L'i';
  ((wchar_t *)(lVar3 + 0x24))[0] = L'a';
  ((wchar_t *)(lVar3 + 0x24))[1] = L'b';
  ((wchar_t *)(lVar3 + 0x28))[0] = L'l';
  ((wchar_t *)(lVar3 + 0x28))[1] = L'e';
  ((wchar_t *)(lVar3 + 0x2c))[0] = L's';
  ((wchar_t *)(lVar3 + 0x2c))[1] = L'.';
  *(undefined4 *)(lVar3 + 0x30) = 0x6e0069;
  *(undefined2 *)(lVar3 + 0x34) = 0x69;
  *(undefined2 *)(lVar3 + 0x36) = 0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  puVar4 = &DAT_143f3eda8;
  if (DAT_1468e2368 != 0) {
    puVar4 = DAT_1468e2360;
  }
  FUN_141643200(L"ConsoleVariables",puVar4,0x4000000,0);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x38))();
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 141651f60 LoadExternalIniFile body=595 status=ok
// SIG undefined LoadExternalIniFile(void)

undefined4
FConfigCacheIni::LoadExternalIniFile
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char param_5,
          undefined8 param_6,undefined8 param_7,char param_8,char param_9,undefined8 param_10)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  uint uVar6;
  longlong lVar7;
  short *psVar8;
  undefined2 *puVar9;
  uint uVar10;
  ulonglong in_stack_ffffffffffffff88;
  undefined2 *local_68;
  ulonglong local_60;
  short *local_58;
  int local_50;
  
  if (param_5 != '\0') {
    FUN_14164b170(&local_58,param_2,param_6,param_10);
    FUN_14164cb20(param_2,param_6,param_3,param_4,param_1 + 0x60,0);
    lVar7 = *(longlong *)(param_1 + 0xb0);
    if (lVar7 != 0) {
      FConfigFile::~FConfigFile(lVar7);
      FMemory::operator_delete(lVar7,0x118);
    }
    lVar7 = operator_new(0x118);
    uVar4 = 0;
    if (lVar7 != 0) {
      uVar4 = FConfigFile::FConfigFile(lVar7);
    }
    *(undefined8 *)(param_1 + 0xb0) = uVar4;
    cVar1 = FUN_141648eb0(param_1,&local_58,param_1 + 0x60,param_9,1);
    FName::FName(&local_68,param_2,1);
    *(undefined2 **)(param_1 + 0x58) = local_68;
    if ((param_8 != '\0') && (param_9 != '\0')) {
      uVar4 = FCommandLine::Get();
      cVar2 = FParse::Param(uVar4,L"Multiprocess");
      if ((cVar2 == '\0') && (cVar1 != '\0')) {
        local_68 = (undefined2 *)0x0;
        local_60 = 0;
        FConfigFile::Write(param_1,&local_58,1,&local_68);
        if (local_68 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    goto LAB_141652189;
  }
  FString::PrintfImpl(&local_58,L"%s/%s.ini",param_4,param_2);
  psVar8 = &DAT_143f3eda8;
  if (local_50 != 0) {
    psVar8 = local_58;
  }
  local_68 = (undefined2 *)0x0;
  local_60 = local_60 & 0xffffffff;
  puVar9 = (undefined2 *)0x0;
  uVar10 = 0;
  if ((psVar8 == (short *)0x0) || (uVar10 = 0, *psVar8 == 0)) {
LAB_141652021:
    puVar5 = &DAT_143f3eda8;
  }
  else {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (psVar8[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_60 = (ulonglong)uVar6;
    uVar10 = uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      uVar10 = (uint)local_60;
    }
    puVar5 = local_68;
    FGenericPlatformString::Memcpy(local_68,psVar8,(longlong)(int)uVar6 * 2);
    puVar9 = puVar5;
    if (uVar10 == 0) goto LAB_141652021;
  }
  cVar1 = IsUsingLocalIniFile(puVar5,0);
  if (cVar1 == '\0') {
LAB_141652042:
    puVar5 = &DAT_143f3eda8;
    if (uVar10 != 0) {
      puVar5 = puVar9;
    }
    ProcessIniContents(puVar5,puVar5,param_1,0,in_stack_ffffffffffffff88 & 0xffffffffffffff00);
  }
  else {
    puVar5 = &DAT_143f3eda8;
    if (uVar10 != 0) {
      puVar5 = puVar9;
    }
    cVar1 = DoesConfigFileExistWrapper(puVar5);
    if (cVar1 != '\0') goto LAB_141652042;
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  FName::FName(&local_68,param_2,1);
  *(undefined2 **)(param_1 + 0x58) = local_68;
LAB_141652189:
  if (local_58 != (short *)0x0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  return CONCAT31((int3)((uint)iVar3 >> 8),0 < iVar3);
}



// FUNCTION 1416521c0 LoadGlobalIniFile body=800 status=ok
// SIG undefined LoadGlobalIniFile(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FConfigCacheIni::LoadGlobalIniFile
          (longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4,undefined8 param_5,
          undefined1 param_6,undefined8 param_7)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  short *psVar12;
  undefined2 *puVar13;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  undefined8 local_1d0;
  char local_1c8;
  undefined1 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  int local_1a8 [2];
  longlong *local_1a0;
  ulonglong local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong local_180 [3];
  undefined1 local_168 [288];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_190 = param_7;
  plVar10 = (longlong *)0x0;
  local_1a8[0] = 0;
  local_188 = param_3;
  plVar4 = (longlong *)FUN_14164b170(&local_1a0,param_2,param_3,param_7);
  if (param_1 != plVar4) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar4;
    *plVar4 = 0;
    *(int *)(param_1 + 1) = (int)plVar4[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
  }
  if (local_1a0 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar13 = &DAT_143f3eda8;
  if ((int)param_1[1] == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*param_1;
  }
  uVar5 = FRemoteConfig::Get();
  cVar2 = FRemoteConfig::ShouldReadRemoteFile(uVar5,puVar11);
  if (cVar2 != '\0') {
    if ((int)param_1[1] == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*param_1;
    }
    uVar5 = FRemoteConfig::Get();
    FRemoteConfig::Read(uVar5,puVar11,param_2);
  }
  if ((int)param_1[1] == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*param_1;
  }
  uVar5 = FRemoteConfig::Get();
  lVar6 = FRemoteConfig::FindConfig(uVar5,puVar11);
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x29) == '\0') {
      return 0;
    }
    if ((int)param_1[1] == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*param_1;
    }
    uVar5 = FRemoteConfig::Get();
    cVar2 = FRemoteConfig::IsFinished(uVar5,puVar11);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  plVar4 = local_1a0;
  if (param_4 == '\0') {
    if ((int)param_1[1] == 0) {
      psVar12 = &DAT_143f3eda8;
    }
    else {
      psVar12 = (short *)*param_1;
    }
    local_1a0 = (longlong *)0x0;
    local_198 = 0;
    plVar4 = plVar10;
    if ((psVar12 != (short *)0x0) && (*psVar12 != 0)) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (psVar12[lVar6] != 0);
      uVar9 = (int)lVar6 + 1;
      local_198 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
      }
      plVar4 = local_1a0;
      FGenericPlatformString::Memcpy(local_1a0,psVar12,(longlong)(int)uVar9 * 2);
    }
    plVar10 = (longlong *)(DAT_1468b6148 + 8);
    TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
    ::FindId(plVar10,local_1a8,&local_1a0);
    if (local_1a8[0] == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)local_1a8[0] * 0x130 + *plVar10;
    }
    plVar10 = (longlong *)0x1;
    lVar7 = lVar6 + 0x10;
    if (lVar6 == 0) {
      lVar7 = 0;
    }
    if (lVar7 != 0) {
      bVar1 = true;
      goto LAB_1416523c0;
    }
  }
  bVar1 = false;
LAB_1416523c0:
  if ((plVar10 != (longlong *)0x0) && (plVar4 != (longlong *)0x0)) {
    FMemory::Free(plVar4);
  }
  if (bVar1) {
    uVar3 = 1;
  }
  else {
    local_198 = FConfigFile::FConfigFile(local_168);
    lVar6 = DAT_1468b6148;
    local_1a0 = param_1;
    TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FConfigFile_&&>_>
              (DAT_1468b6148 + 8,local_1a8,&local_1a0,0);
    lVar7 = (longlong)local_1a8[0];
    lVar6 = *(longlong *)(lVar6 + 8);
    FConfigFile::~FConfigFile(local_168);
    puVar8 = (undefined8 *)FPaths::ProjectConfigDir(local_180);
    if (*(int *)(puVar8 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar8;
    }
    puVar8 = (undefined8 *)FPaths::EngineConfigDir(&local_1a0);
    if (*(int *)(puVar8 + 1) != 0) {
      puVar13 = (undefined2 *)*puVar8;
    }
    local_1b0 = local_190;
    local_1b8 = param_6;
    local_1c0 = 1;
    local_1d0 = local_188;
    local_1d8 = 1;
    local_1c8 = param_4;
    uVar3 = LoadExternalIniFile(lVar7 * 0x130 + lVar6 + 0x10,param_2,puVar13,puVar11);
    if (local_1a0 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_180[0] != 0) {
      FMemory::Free();
    }
  }
  return uVar3;
}



// FUNCTION 1416524e0 LoadIniFileHierarchy body=1159 status=ok
// SIG undefined LoadIniFileHierarchy(void)

undefined1 LoadIniFileHierarchy(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  char *pcVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
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
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar7 = 0;
    uVar2 = *(uint *)(param_1 + 5);
    puVar1 = (uint *)(param_1 + 2);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar2 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar3 = *puVar12;
      iStack_80 = iVar7;
      local_98 = iVar7;
      while (uVar3 == 0) {
        lVar10 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar13 = local_98 + 1;
        bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar13;
        if (bVar4) goto LAB_1416525bb;
        uVar3 = puVar12[lVar10 + 1];
      }
      uStack_94 = -uVar3 & uVar3;
      iVar13 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar13 = 0x20;
      }
      else {
        iVar13 = 0x1f - iVar13;
      }
      uStack_84 = (iStack_80 - iVar13) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_1416525bb:
        uStack_84 = uVar2;
      }
    }
    uVar3 = *(uint *)(param_1 + 5);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,iStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar14 = uVar3 & 0xffffffe0;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    iVar13 = iVar7;
    local_68 = puVar1;
    local_50 = param_1;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_84 = uVar3;
    if (uVar3 != uVar2) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar9 = puVar12[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
      iVar6 = (int)uVar3 >> 5;
      while (uVar9 == 0) {
        uVar14 = uVar14 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_141652693;
        uVar9 = puVar12[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar6 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_84 = (uVar14 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_141652693:
        uStack_84 = uVar2;
      }
    }
    while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
      lVar10 = (longlong)(int)uStack_5c * 0x38 + *param_1;
      if (*(char *)(lVar10 + 0x18) == '\0') {
        if (*(int *)(lVar10 + 0x10) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = *(undefined2 **)(lVar10 + 8);
        }
        cVar5 = IsUsingLocalIniFile(puVar8,0);
        if (cVar5 != '\0') {
          if (*(int *)(lVar10 + 0x10) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = *(undefined2 **)(lVar10 + 8);
          }
          cVar5 = DoesConfigFileExistWrapper(puVar8);
          if (cVar5 == '\0') goto LAB_141652700;
        }
        iVar13 = iVar13 + 1;
      }
LAB_141652700:
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
    if (iVar13 != 0) {
      uVar2 = *(uint *)(param_1 + 5);
      local_98 = 0;
      uStack_94 = 1;
      uStack_84 = 0;
      iStack_80 = 0;
      if (uVar2 != 0) {
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = puVar1;
        }
        uVar3 = *puVar12;
        iStack_80 = iVar7;
        local_98 = iVar7;
        while (uVar3 == 0) {
          lVar10 = (longlong)local_98;
          iStack_80 = iStack_80 + 0x20;
          iVar7 = local_98 + 1;
          bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
          local_98 = iVar7;
          if (bVar4) goto LAB_1416527bd;
          uVar3 = puVar12[lVar10 + 1];
        }
        uStack_94 = -uVar3 & uVar3;
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
        if ((int)uVar2 < (int)uStack_84) {
LAB_1416527bd:
          uStack_84 = uVar2;
        }
      }
      uVar3 = *(uint *)(param_1 + 5);
      uStack_60 = 0xffffffff;
      uStack_5c = uStack_84;
      local_58 = CONCAT44(uStack_7c,iStack_80);
      uStack_48 = CONCAT44(uStack_94,local_98);
      uVar14 = uVar3 & 0xffffffe0;
      iStack_70 = local_98;
      uStack_6c = uStack_94;
      local_68 = puVar1;
      local_50 = param_1;
      puStack_40 = puVar1;
      uStack_30 = local_58;
      uStack_38 = uStack_60;
      uStack_34 = uStack_5c;
      uStack_84 = uVar3;
      if (uVar3 != uVar2) {
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = puVar1;
        }
        uVar9 = puVar12[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
        iVar7 = (int)uVar3 >> 5;
        while (uVar9 == 0) {
          uVar14 = uVar14 + 0x20;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_141652882;
          uVar9 = puVar12[(longlong)iVar7 + 1];
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
        uStack_84 = (uVar14 - iVar7) + 0x1f;
        if ((int)uVar2 < (int)uStack_84) {
LAB_141652882:
          uStack_84 = uVar2;
        }
      }
      while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
        pcVar11 = (char *)((longlong)(int)uStack_5c * 0x38 + *param_1);
        if (*(int *)(pcVar11 + 0x10) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = *(undefined2 **)(pcVar11 + 8);
        }
        cVar5 = IsUsingLocalIniFile(puVar8,0);
        if (cVar5 == '\0') {
LAB_1416528f5:
          if (*(int *)(pcVar11 + 0x10) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = *(undefined2 **)(pcVar11 + 8);
          }
          ProcessIniContents(puVar8,puVar8,param_2,0,*pcVar11 != '\0');
        }
        else {
          if (*(int *)(pcVar11 + 0x10) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = *(undefined2 **)(pcVar11 + 8);
          }
          cVar5 = DoesConfigFileExistWrapper(puVar8);
          if (cVar5 != '\0') goto LAB_1416528f5;
          if (pcVar11[0x18] != '\0') {
            return 0;
          }
        }
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      }
      TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
      ::operator=(param_2 + 0x60,param_1);
    }
  }
  return 1;
}



// FUNCTION 141652970 LoadLocalIniFile body=953 status=ok
// SIG undefined LoadLocalIniFile(void)

undefined1
FConfigCacheIni::LoadLocalIniFile
          (undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,undefined1 param_5)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char *pcVar6;
  undefined2 *puVar7;
  longlong lVar8;
  char *pcVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined1 local_88 [8];
  undefined2 *local_80;
  int local_78;
  int local_74;
  undefined2 *local_70;
  int local_68;
  int local_64;
  undefined2 *local_60;
  int local_58;
  int local_54;
  longlong local_50 [3];
  
  FPaths::EngineConfigDir(&local_60);
  FPaths::ProjectConfigDir(&local_70);
  if (param_3 != '\0') {
    puVar4 = (undefined8 *)FName::FName(local_88,param_2,1);
    lVar5 = FindConfigFileWithBaseName(DAT_1468b6148,*puVar4);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x68) != *(int *)(lVar5 + 0x94)) {
        lVar8 = *(longlong *)(lVar5 + 0xa0);
        if (*(longlong *)(lVar5 + 0xa0) == 0) {
          lVar8 = lVar5 + 0x98;
        }
        iVar3 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar5 + 0xa8) - 1U & 1) * 4);
        if (iVar3 != -1) {
          do {
            pcVar6 = (char *)((longlong)iVar3 * 0x38 + *(longlong *)(lVar5 + 0x60));
            if (*pcVar6 == '\x01') {
              if (iVar3 != -1) goto LAB_141652a51;
              break;
            }
            iVar3 = *(int *)(pcVar6 + 0x30);
          } while (iVar3 != -1);
        }
      }
      pcVar6 = (char *)0x0;
LAB_141652a51:
      pcVar9 = pcVar6 + 8;
      if (pcVar6 == (char *)0x0) {
        pcVar9 = (char *)0x0;
      }
      if (pcVar9 != (char *)0x0) {
        puVar4 = (undefined8 *)FUN_141672d20(local_50);
        iVar3 = *(int *)(puVar4 + 1);
        local_80 = (undefined2 *)*puVar4;
        *puVar4 = 0;
        local_78 = *(int *)(puVar4 + 1);
        local_74 = *(int *)((longlong)puVar4 + 0xc);
        puVar4[1] = 0;
        iVar10 = local_78;
        if (local_74 < (int)((2 - (uint)(iVar3 != 0)) + local_78)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80);
          iVar10 = local_78;
        }
        local_78 = (2 - (uint)(iVar10 != 0)) + iVar10;
        if (local_74 < local_78) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80);
        }
        iVar1 = local_74;
        iVar3 = local_78;
        puVar7 = local_80;
        local_80[(longlong)iVar10 - (ulonglong)(iVar10 != 0)] = 0x2f;
        (local_80 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)))[1] = 0;
        if (local_60 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_60 = puVar7;
        local_58 = iVar3;
        local_54 = iVar1;
        if (local_50[0] != 0) {
          FMemory::Free();
        }
      }
      if (*(int *)(lVar5 + 0x68) != *(int *)(lVar5 + 0x94)) {
        lVar8 = *(longlong *)(lVar5 + 0xa0);
        if (*(longlong *)(lVar5 + 0xa0) == 0) {
          lVar8 = lVar5 + 0x98;
        }
        iVar3 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar5 + 0xa8) - 1U & 6) * 4);
        if (iVar3 != -1) {
          do {
            pcVar6 = (char *)((longlong)iVar3 * 0x38 + *(longlong *)(lVar5 + 0x60));
            if (*pcVar6 == '\x06') {
              if (iVar3 != -1) goto LAB_141652b92;
              break;
            }
            iVar3 = *(int *)(pcVar6 + 0x30);
          } while (iVar3 != -1);
        }
      }
      pcVar6 = (char *)0x0;
LAB_141652b92:
      pcVar9 = pcVar6 + 8;
      if (pcVar6 == (char *)0x0) {
        pcVar9 = (char *)0x0;
      }
      if (pcVar9 != (char *)0x0) {
        puVar4 = (undefined8 *)FUN_141672d20(local_50);
        iVar3 = *(int *)(puVar4 + 1);
        local_80 = (undefined2 *)*puVar4;
        *puVar4 = 0;
        local_78 = *(int *)(puVar4 + 1);
        local_74 = *(int *)((longlong)puVar4 + 0xc);
        puVar4[1] = 0;
        iVar10 = local_78;
        if (local_74 < (int)((2 - (uint)(iVar3 != 0)) + local_78)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80);
          iVar10 = local_78;
        }
        local_78 = (2 - (uint)(iVar10 != 0)) + iVar10;
        if (local_74 < local_78) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80);
        }
        iVar1 = local_74;
        iVar3 = local_78;
        puVar7 = local_80;
        local_80[(longlong)iVar10 - (ulonglong)(iVar10 != 0)] = 0x2f;
        (local_80 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)))[1] = 0;
        if (local_70 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_70 = puVar7;
        local_68 = iVar3;
        local_64 = iVar1;
        if (local_50[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  puVar4 = (undefined8 *)FPaths::GeneratedConfigDir(local_50);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar4;
  }
  puVar12 = &DAT_143f3eda8;
  if (local_68 != 0) {
    puVar12 = local_70;
  }
  puVar11 = &DAT_143f3eda8;
  if (local_58 != 0) {
    puVar11 = local_60;
  }
  uVar2 = LoadExternalIniFile(param_1,param_2,puVar11,puVar12,param_3,param_4,param_5,0,1,puVar7);
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  if (local_70 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_60 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 141652d30 MemCrc32 body=334 status=ok
// SIG undefined MemCrc32(void)

uint FCrc::MemCrc32(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = ((int)param_1 + 3U & 0xfffffffc) - (int)param_1;
  param_3 = ~param_3;
  if (iVar3 < param_2) {
    param_2 = param_2 - iVar3;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar1 = *param_1;
      param_1 = (uint *)((longlong)param_1 + 1);
      param_3 = *(uint *)(&DAT_1464aaab0 +
                         ((ulonglong)(param_3 & 0xff) ^ (ulonglong)(byte)uVar1) * 4) ^ param_3 >> 8;
    }
    uVar2 = param_2 >> 0x1f & 7;
    uVar1 = param_2 + uVar2;
    param_2 = (uVar1 & 7) - uVar2;
    for (iVar3 = (int)uVar1 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar1 = param_1[1];
      uVar2 = *param_1;
      param_1 = param_1 + 2;
      uVar2 = uVar2 ^ param_3;
      param_3 = *(uint *)(&DAT_1464abeb0 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
                *(uint *)(&DAT_1464ac2b0 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
                *(uint *)(&DAT_1464aaeb0 + (ulonglong)(byte)(uVar1 >> 0x10) * 4) ^
                *(uint *)(&DAT_1464ab2b0 + (ulonglong)(byte)(uVar1 >> 8) * 4) ^
                *(uint *)(&DAT_1464abab0 + (ulonglong)(uVar2 >> 0x18) * 4) ^
                *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
                *(uint *)(&DAT_1464ac6b0 + (ulonglong)(uVar2 & 0xff) * 4) ^
                *(uint *)(&DAT_1464ab6b0 + (ulonglong)(uVar1 & 0xff) * 4);
    }
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = *param_1;
    param_1 = (uint *)((longlong)param_1 + 1);
    param_3 = *(uint *)(&DAT_1464aaab0 + ((ulonglong)(param_3 & 0xff) ^ (ulonglong)(byte)uVar1) * 4)
              ^ param_3 >> 8;
  }
  return ~param_3;
}



// FUNCTION 141652e80 MemCrc_DEPRECATED body=403 status=ok
// SIG undefined MemCrc_DEPRECATED(void)

int FCrc::MemCrc_DEPRECATED(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = ((int)param_1 + 3U & 0xfffffffc) - (int)param_1;
  uVar4 = ~(((param_3 & 0xff00) + param_3 * 0x10000) * 0x100 + (param_3 >> 8 & 0xff00) +
           (param_3 >> 0x18));
  if (iVar2 < param_2) {
    param_2 = param_2 - iVar2;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar1 = *param_1;
      param_1 = (uint *)((longlong)param_1 + 1);
      uVar4 = *(uint *)(&DAT_1464aceb0 + ((ulonglong)(uVar4 & 0xff) ^ (ulonglong)(byte)uVar1) * 4) ^
              uVar4 >> 8;
    }
    uVar3 = param_2 >> 0x1f & 7;
    uVar1 = param_2 + uVar3;
    param_2 = (uVar1 & 7) - uVar3;
    for (iVar2 = (int)uVar1 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar1 = param_1[1];
      uVar3 = *param_1;
      param_1 = param_1 + 2;
      uVar3 = uVar3 ^ uVar4;
      uVar4 = *(uint *)(&DAT_1464ae2b0 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) ^
              *(uint *)(&DAT_1464ae6b0 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
              *(uint *)(&DAT_1464ad2b0 + (ulonglong)(byte)(uVar1 >> 0x10) * 4) ^
              *(uint *)(&DAT_1464ad6b0 + (ulonglong)(byte)(uVar1 >> 8) * 4) ^
              *(uint *)(&DAT_1464adeb0 + (ulonglong)(uVar3 >> 0x18) * 4) ^
              *(uint *)(&DAT_1464aceb0 + (ulonglong)(uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_1464aeab0 + (ulonglong)(uVar3 & 0xff) * 4) ^
              *(uint *)(&DAT_1464adab0 + (ulonglong)(uVar1 & 0xff) * 4);
    }
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = *param_1;
    param_1 = (uint *)((longlong)param_1 + 1);
    uVar4 = *(uint *)(&DAT_1464aceb0 + ((ulonglong)(uVar4 & 0xff) ^ (ulonglong)(byte)uVar1) * 4) ^
            uVar4 >> 8;
  }
  uVar4 = ~uVar4;
  return ((uVar4 & 0xff00) + uVar4 * 0x10000) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
}



// FUNCTION 141653020 MigrateConfigSection body=1343 status=ok
// SIG undefined MigrateConfigSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FConfigManifest::MigrateConfigSection(longlong *param_1,short *param_2,short *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_178 [32];
  longlong *local_158;
  ulonglong local_150;
  int local_148 [2];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  uint uStack_128;
  uint uStack_124;
  undefined8 local_120;
  longlong *local_118;
  longlong *local_110;
  uint uStack_108;
  uint uStack_104;
  uint *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  plVar13 = (longlong *)0x0;
  local_158 = (longlong *)0x0;
  local_150 = 0;
  lVar10 = -1;
  plVar5 = plVar13;
  local_118 = param_1;
  if ((param_2 != (short *)0x0) && (lVar8 = lVar10, plVar5 = (longlong *)0x0, *param_2 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_150 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
    }
    plVar5 = local_158;
    FGenericPlatformString::Memcpy(local_158,param_2,(longlong)(int)uVar7 * 2);
  }
  plVar9 = local_118;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::FindId(local_118,local_148,&local_158);
  plVar4 = plVar13;
  if (local_148[0] != -1) {
    plVar4 = (longlong *)((longlong)local_148[0] * 0xb8 + *plVar9);
  }
  plVar14 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar14 = plVar13;
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  if (plVar14 != (longlong *)0x0) {
    local_158 = (longlong *)0x0;
    local_150 = 0;
    plVar5 = plVar13;
    if ((param_3 != (short *)0x0) && (lVar8 = lVar10, *param_3 != 0)) {
      do {
        lVar8 = lVar8 + 1;
      } while (param_3[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_150 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
      }
      plVar5 = local_158;
      FGenericPlatformString::Memcpy(local_158,param_3,(longlong)(int)uVar7 * 2);
      plVar9 = local_118;
    }
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar9,local_148,&local_158);
    plVar4 = plVar13;
    if (local_148[0] != -1) {
      plVar4 = (longlong *)((longlong)local_148[0] * 0xb8 + *plVar9);
    }
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar13;
    }
    if (plVar5 != (longlong *)0x0) {
      FMemory::Free(plVar5);
    }
    if (plVar9 == (longlong *)0x0) {
      local_e8 = 0;
      local_e0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = 0;
      local_a0 = 0;
      TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
      ::operator=(&local_e8,plVar14);
      local_98 = 0;
      local_90 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::operator=(&local_98,plVar14 + 10);
      local_158 = (longlong *)0x0;
      local_150 = 0;
      if ((param_3 != (short *)0x0) && (lVar8 = lVar10, *param_3 != 0)) {
        do {
          lVar8 = lVar8 + 1;
        } while (param_3[lVar8] != 0);
        uVar7 = (int)lVar8 + 1;
        local_150 = (ulonglong)uVar7;
        if (0 < (int)uVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
        }
        FGenericPlatformString::Memcpy(local_158,param_3,(longlong)(int)uVar7 * 2);
      }
      plVar5 = local_118;
      local_140 = &local_158;
      uStack_138 = &local_e8;
      TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FConfigSection_&&>_>(local_118,local_148,&local_140,0);
      if (local_158 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_158 = (longlong *)0x0;
      local_150 = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        do {
          lVar10 = lVar10 + 1;
        } while (param_2[lVar10] != 0);
        uVar7 = (int)lVar10 + 1;
        local_150 = (ulonglong)uVar7;
        if (0 < (int)uVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
        }
        plVar13 = local_158;
        FGenericPlatformString::Memcpy(local_158,param_2,(longlong)(int)uVar7 * 2);
      }
      TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::Remove(plVar5,&local_158);
      if (plVar13 != (longlong *)0x0) {
        FMemory::Free(plVar13);
      }
      FConfigSection::~FConfigSection(&local_e8);
      local_118 = plVar5;
    }
    else {
      uVar7 = *(uint *)(plVar14 + 5);
      puVar1 = (uint *)(plVar14 + 2);
      local_140._0_4_ = 0;
      local_140._4_4_ = 1;
      local_130._4_4_ = 0;
      uStack_128 = 0;
      if (uVar7 != 0) {
        puVar12 = (uint *)plVar14[4];
        if ((uint *)plVar14[4] == (uint *)0x0) {
          puVar12 = puVar1;
        }
        uVar2 = *puVar12;
        plVar5 = plVar13;
        while (uVar2 == 0) {
          iVar3 = (int)plVar13;
          uStack_128 = (int)plVar5 + 0x20;
          plVar5 = (longlong *)(ulonglong)uStack_128;
          local_140._0_4_ = iVar3 + 1;
          plVar13 = (longlong *)(ulonglong)(uint)local_140;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
          goto LAB_141653250;
          uVar2 = puVar12[(longlong)iVar3 + 1];
        }
        local_140._4_4_ = -uVar2 & uVar2;
        iVar3 = 0x1f;
        if (local_140._4_4_ != 0) {
          for (; local_140._4_4_ >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        if (local_140._4_4_ == 0) {
          iVar3 = 0x20;
        }
        else {
          iVar3 = 0x1f - iVar3;
        }
        local_130._4_4_ = (uStack_128 - iVar3) + 0x1f;
        if ((int)uVar7 < (int)local_130._4_4_) {
LAB_141653250:
          local_130._4_4_ = uVar7;
        }
      }
      uVar7 = *(uint *)(plVar14 + 5);
      uVar2 = *(uint *)(plVar14 + 5);
      uStack_f8 = CONCAT44(local_130._4_4_,0xffffffff);
      local_120 = CONCAT44(uStack_124,uStack_128);
      uStack_108 = (uint)local_140;
      uStack_104 = local_140._4_4_;
      uVar11 = uVar7 & 0xffffffe0;
      uStack_138 = (undefined8 *)CONCAT44(local_140._4_4_,(uint)local_140);
      uStack_128 = 0xffffffff;
      uStack_124 = local_130._4_4_;
      local_140 = (longlong **)plVar14;
      local_110 = plVar14;
      puStack_100 = puVar1;
      uStack_f0 = local_120;
      local_130 = puVar1;
      if (uVar7 != uVar2) {
        puVar12 = (uint *)plVar14[4];
        if ((uint *)plVar14[4] == (uint *)0x0) {
          puVar12 = puVar1;
        }
        uVar6 = puVar12[(int)uVar7 >> 5] & -1 << ((byte)uVar7 & 0x1f);
        iVar3 = (int)uVar7 >> 5;
        while (uVar6 == 0) {
          uVar11 = uVar11 + 0x20;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
          goto LAB_141653319;
          uVar6 = puVar12[(longlong)iVar3 + 1];
          iVar3 = iVar3 + 1;
        }
        uVar6 = -uVar6 & uVar6;
        iVar3 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        if (uVar6 == 0) {
          iVar3 = 0x20;
        }
        else {
          iVar3 = 0x1f - iVar3;
        }
        uVar7 = (uVar11 - iVar3) + 0x1f;
        if ((int)uVar2 < (int)uVar7) {
LAB_141653319:
          uVar7 = uVar2;
        }
      }
      while (((uStack_124 != uVar7 || (local_130 != puVar1)) || (local_140 != (longlong **)plVar14))
            ) {
        plVar13 = (longlong *)((longlong)(int)uStack_124 * 0x30 + (longlong)*local_140);
        lVar10 = *plVar13;
        if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
          plVar5 = (longlong *)plVar9[8];
          if ((longlong *)plVar9[8] == (longlong *)0x0) {
            plVar5 = plVar9 + 7;
          }
          iVar3 = *(int *)((longlong)plVar5 +
                          ((longlong)((int)((ulonglong)lVar10 >> 0x20) + (int)lVar10) &
                          (longlong)(int)plVar9[9] - 1U) * 4);
          if (iVar3 != -1) {
            do {
              if (*(longlong *)(*plVar9 + (longlong)iVar3 * 0x30) == lVar10) {
                if (iVar3 != -1) goto LAB_1416533c0;
                break;
              }
              iVar3 = *(int *)(*plVar9 + 0x28 + (longlong)iVar3 * 0x30);
            } while (iVar3 != -1);
          }
        }
        TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
        ::Emplace<FName_const_&,FConfigValue>(plVar9,plVar13,plVar13 + 1);
LAB_1416533c0:
        uStack_128 = uStack_128 & ~uStack_138._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_138);
      }
    }
    *(undefined1 *)(local_118 + 10) = 1;
  }
  return;
}



// FUNCTION 141653560 FUN_141653560 body=1235 status=ok
// SIG undefined FUN_141653560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141653560(void)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  short *psVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined2 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar19;
  undefined2 *puVar20;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  longlong *local_210;
  undefined2 *local_208;
  undefined8 local_200;
  undefined2 *local_1f8;
  undefined8 local_1f0;
  undefined2 *local_1e8;
  undefined8 local_1e0;
  undefined2 *local_1d8;
  undefined8 local_1d0;
  undefined2 *local_1c8;
  undefined8 local_1c0;
  undefined2 *local_1b8;
  uint local_1b0;
  int local_1ac;
  longlong local_1a8 [2];
  longlong *local_198;
  longlong local_190 [2];
  undefined1 local_180 [16];
  longlong local_170;
  undefined1 local_158 [256];
  longlong local_58;
  longlong local_50;
  ulonglong local_38;
  ulonglong uVar18;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  cVar4 = FUN_141681ae0();
  if ((cVar4 != '\0') || (cVar4 = FApp::IsEngineInstalled(), cVar4 != '\0')) {
    lVar6 = FEngineVersion::Current();
    uVar1 = *(ushort *)(lVar6 + 2);
    uVar7 = FPlatformFileManager::Get();
    local_198 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar7);
    uVar19 = (uint)uVar1;
    while (uVar19 = uVar19 - 1, -1 < (int)uVar19) {
      puVar15 = (undefined2 *)0x0;
      local_1a8[0] = 0;
      local_1a8[1] = 0;
      puVar8 = (undefined2 *)FEngineVersion::Current();
      local_210 = local_1a8;
      local_218 = 0;
      FEngineVersion::FEngineVersion(local_180,*puVar8,uVar19 & 0xffff,0);
      if (local_1a8[0] != 0) {
        FMemory::Free();
      }
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,"WindowsNoEditor");
      lVar6 = local_50;
      psVar9 = (short *)FUN_1416b20b0();
      local_208 = (undefined2 *)0x0;
      puVar8 = puVar15;
      puVar20 = puVar15;
      if ((psVar9 == (short *)0x0) ||
         (puVar8 = (undefined2 *)0x0, puVar20 = (undefined2 *)0x0, *psVar9 == 0)) {
LAB_1416536e0:
        iVar14 = (int)puVar20;
        uVar16 = (uint)puVar8;
        iVar5 = 0xe;
      }
      else {
        lVar12 = -1;
        do {
          lVar2 = lVar12 + 1;
          lVar12 = lVar12 + 1;
        } while (psVar9[lVar2] != 0);
        local_200._0_4_ = (int)lVar12 + 1;
        lVar12 = (longlong)(int)(uint)local_200;
        local_200._4_4_ = 0;
        puVar20 = puVar15;
        if (0 < (int)(uint)local_200) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
          puVar20 = (undefined2 *)(ulonglong)local_200._4_4_;
        }
        uVar16 = (uint)local_200;
        puVar15 = local_208;
        puVar8 = (undefined2 *)(ulonglong)(uint)local_200;
        iVar14 = (int)puVar20;
        FGenericPlatformString::Memcpy(local_208,psVar9,lVar12 * 2);
        iVar5 = 0xd;
        if (uVar16 == 0) goto LAB_1416536e0;
      }
      local_208 = (undefined2 *)0x0;
      local_200 = 0;
      local_1c8 = puVar15;
      local_1c0._0_4_ = uVar16;
      local_1c0._4_4_ = iVar14;
      if (iVar14 < (int)(uVar16 + iVar5)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1c8);
      }
      FString::PathAppend(&local_1c8,L"UnrealEngine",0xc);
      puVar10 = (undefined8 *)FEngineVersion::ToString(local_180,local_190,1);
      iVar14 = local_1c0._4_4_;
      iVar5 = *(int *)(puVar10 + 1) + -1;
      if (*(int *)(puVar10 + 1) == 0) {
        iVar5 = 0;
      }
      if (((uint)local_1c0 != 0) || (iVar11 = 2, iVar5 == -1)) {
        iVar11 = 1;
      }
      local_1d0._0_4_ = (uint)local_1c0;
      iVar13 = (uint)local_1c0 + iVar5;
      local_1d8 = local_1c8;
      local_1c8 = (undefined2 *)0x0;
      local_1d0._4_4_ = local_1c0._4_4_;
      local_1c0 = 0;
      if (iVar14 < iVar13 + iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1d8);
      }
      FString::PathAppend(&local_1d8,*puVar10,iVar5);
      iVar5 = local_1d0._4_4_;
      local_1e0._0_4_ = (uint)local_1d0;
      local_1e8 = local_1d8;
      iVar14 = (uint)local_1d0 + (7 - (uint)((uint)local_1d0 != 0));
      local_1d8 = (undefined2 *)0x0;
      local_1e0._4_4_ = local_1d0._4_4_;
      local_1d0 = 0;
      if (iVar5 < iVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1e8);
      }
      FString::PathAppend(&local_1e8,L"Saved",5);
      iVar5 = local_1e0._4_4_;
      local_1f0._0_4_ = (uint)local_1e0;
      local_1f8 = local_1e8;
      iVar14 = (uint)local_1e0 + (8 - (uint)((uint)local_1e0 != 0));
      local_1e8 = (undefined2 *)0x0;
      local_1f0._4_4_ = local_1e0._4_4_;
      local_1e0 = 0;
      if (iVar5 < iVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1f8);
      }
      FString::PathAppend(&local_1f8,L"Config",6);
      iVar5 = local_1f0._4_4_;
      uVar17 = 0xffffffffffffffff;
      do {
        uVar18 = uVar17;
        uVar17 = uVar18 + 1;
      } while (*(short *)(lVar6 + uVar17 * 2) != 0);
      if (((uint)local_1f0 != 0) || (iVar14 = 2, (int)uVar18 == -2)) {
        iVar14 = 1;
      }
      local_1b0 = (uint)local_1f0;
      iVar14 = (uint)local_1f0 + iVar14;
      local_1b8 = local_1f8;
      local_1f8 = (undefined2 *)0x0;
      local_1ac = local_1f0._4_4_;
      local_1f0 = 0;
      if (iVar5 < iVar14 + (int)uVar17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1b8);
      }
      FString::PathAppend(&local_1b8,lVar6,uVar17 & 0xffffffff);
      if (local_1f8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_1e8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_1d8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_1c8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_190[0] != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      cVar4 = FPaths::DirectoryExists(&local_1b8);
      if (cVar4 != '\0') {
        ProjectAgnosticIniPath(&local_208,&DAT_144cc50a4);
        plVar3 = local_198;
        puVar15 = &DAT_143f3eda8;
        if ((uint)local_200 != 0) {
          puVar15 = local_208;
        }
        cVar4 = (**(code **)(*local_198 + 0x150))(local_198,puVar15);
        if (cVar4 != '\0') {
          puVar15 = &DAT_143f3eda8;
          if (local_1b0 != 0) {
            puVar15 = local_1b8;
          }
          puVar8 = &DAT_143f3eda8;
          if ((uint)local_200 != 0) {
            puVar8 = local_208;
          }
          (**(code **)(*plVar3 + 0x160))(plVar3,puVar8,puVar15,0);
        }
        if (local_208 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_1b8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_170 == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
      if (local_1b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_170 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 141653a40 MigrateToAgnosticIni body=461 status=ok
// SIG undefined MigrateToAgnosticIni(void)

void MigrateToAgnosticIni(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  short *psVar3;
  longlong lVar4;
  short *psVar5;
  uint uVar6;
  longlong lVar7;
  short *psVar8;
  longlong local_48;
  ulonglong local_40;
  short *local_38;
  int local_30;
  short *local_28;
  int local_20;
  
  ProjectSpecificIniPath(&local_28,param_1);
  ProjectAgnosticIniPath(&local_38,param_2);
  psVar5 = &DAT_143f3eda8;
  if (local_20 != 0) {
    psVar5 = local_28;
  }
  local_40 = 0;
  local_48 = 0;
  lVar4 = -1;
  if ((psVar5 != (short *)0x0) && (lVar7 = lVar4, *psVar5 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (psVar5[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_40 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,psVar5,(longlong)(int)uVar6 * 2);
  }
  cVar1 = FPaths::FileExists(&local_48);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    local_48 = 0;
    psVar5 = &DAT_143f3eda8;
    if (local_30 != 0) {
      psVar5 = local_38;
    }
    local_40 = 0;
    if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
      do {
        lVar4 = lVar4 + 1;
      } while (psVar5[lVar4] != 0);
      uVar6 = (int)lVar4 + 1;
      local_40 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      FGenericPlatformString::Memcpy(local_48,psVar5,(longlong)(int)uVar6 * 2);
    }
    cVar1 = FPaths::FileExists(&local_48);
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (cVar1 == '\0') {
      plVar2 = (longlong *)FUN_1415c3d50();
      psVar5 = &DAT_143f3eda8;
      if (local_20 != 0) {
        psVar5 = local_28;
      }
      psVar3 = &DAT_143f3eda8;
      if (local_30 != 0) {
        psVar3 = local_38;
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,psVar3,psVar5,1,0,0,0);
    }
    else {
      psVar5 = &DAT_143f3eda8;
      if (local_30 != 0) {
        psVar5 = local_38;
      }
      psVar3 = &DAT_143f3eda8;
      if (local_20 != 0) {
        psVar3 = local_28;
      }
      psVar8 = &DAT_143f3eda8;
      if (local_30 != 0) {
        psVar8 = local_38;
      }
      CombineConfig(psVar8,psVar3,psVar5);
    }
  }
  if (local_38 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_28 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141653c10 FUN_141653c10 body=34 status=ok
// SIG undefined FUN_141653c10(void)

undefined8
FUN_141653c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_1404c11e0(param_2,param_1);
  *param_4 = 1;
  return 1;
}



// FUNCTION 141653c40 Now body=127 status=ok
// SIG undefined Now(void)

undefined8 FDateTime::Now(undefined8 param_1)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  
  FWindowsPlatformTime::SystemTime
            (&local_10,&local_14,local_c,&local_18,local_res20,local_res18,local_res10,local_res8);
  FDateTime(param_1,local_10,local_14,local_18,local_res20[0],local_res18[0],local_res10[0],
            local_res8[0]);
  return param_1;
}



// FUNCTION 141653cc0 FUN_141653cc0 body=329 status=ok
// SIG undefined FUN_141653cc0(void)

void FUN_141653cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  char param_5)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  ulonglong local_10;
  
  psVar3 = (short *)ConvertValueFromHumanFriendlyValue(param_3);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar4 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,param_2);
  if (plVar4 == (longlong *)0x0) {
    local_18 = 0;
    local_10 = 0;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (psVar3[lVar5] != 0);
      uVar1 = (int)lVar5 + 1;
      local_10 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,psVar3,(longlong)(int)uVar1 * 2);
    }
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    (**(code **)*DAT_1468b1f88)(DAT_1468b1f88,param_2,&local_18,L"IAmNoRealVariable",param_4 | 0x18)
    ;
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  else {
    uVar1 = (**(code **)(*plVar4 + 0x18))(plVar4);
    if ((param_4 == 0x1000000) &&
       (uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4), (uVar2 >> 6 & 1) == 0)) {
      return;
    }
    if (((uVar1 & 1) == 0) || (param_5 != '\0')) {
      (**(code **)(*plVar4 + 0x60))(plVar4,psVar3,param_4);
    }
  }
  return;
}



// FUNCTION 141653e10 Parse1ToNSectionOfNames body=1207 status=ok
// SIG undefined Parse1ToNSectionOfNames(void)

void FConfigCacheIni::Parse1ToNSectionOfNames
               (undefined8 param_1,short *param_2,undefined8 param_3,undefined8 param_4,
               longlong *param_5,undefined8 param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  int local_108 [2];
  longlong *local_100;
  ulonglong local_f8;
  uint local_f0;
  uint uStack_ec;
  uint *puStack_e8;
  undefined4 local_e0;
  int iStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  undefined8 uStack_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  longlong local_38 [2];
  
  plVar14 = (longlong *)0x0;
  local_108[0] = 0;
  plVar4 = (longlong *)Find(param_1,param_6,0);
  if (plVar4 != (longlong *)0x0) {
    local_100 = (longlong *)0x0;
    local_f8 = 0;
    plVar9 = plVar14;
    if ((param_2 != (short *)0x0) && (plVar9 = (longlong *)0x0, *param_2 != 0)) {
      lVar13 = -1;
      do {
        lVar13 = lVar13 + 1;
      } while (param_2[lVar13] != 0);
      uVar12 = (int)lVar13 + 1;
      local_f8 = (ulonglong)uVar12;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
      }
      plVar9 = local_100;
      FGenericPlatformString::Memcpy(local_100,param_2,(longlong)(int)uVar12 * 2);
    }
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar4,local_108,&local_100);
    plVar5 = plVar14;
    if (local_108[0] != -1) {
      plVar5 = (longlong *)((longlong)local_108[0] * 0xb8 + *plVar4);
    }
    plVar4 = plVar5 + 2;
    if (plVar5 == (longlong *)0x0) {
      plVar4 = plVar14;
    }
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
    if (plVar4 != (longlong *)0x0) {
      iVar10 = (int)plVar4[5];
      puStack_e8 = (uint *)(plVar4 + 2);
      uStack_ec = 1;
      local_f0 = 0;
      iStack_dc = 0;
      uStack_d8 = 0;
      if (iVar10 != 0) {
        puVar15 = (uint *)plVar4[4];
        if ((uint *)plVar4[4] == (uint *)0x0) {
          puVar15 = puStack_e8;
        }
        uVar12 = *puVar15;
        plVar9 = plVar14;
        plVar5 = plVar14;
        while (uVar12 == 0) {
          iVar3 = (int)plVar9;
          uStack_d8 = (int)plVar5 + 0x20;
          plVar5 = (longlong *)(ulonglong)uStack_d8;
          local_f0 = iVar3 + 1;
          plVar9 = (longlong *)(ulonglong)local_f0;
          if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_141653fc4;
          uVar12 = puVar15[(longlong)iVar3 + 1];
        }
        uStack_ec = -uVar12 & uVar12;
        iVar3 = 0x1f;
        if (uStack_ec != 0) {
          for (; uStack_ec >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        if (uStack_ec == 0) {
          iVar3 = 0x20;
        }
        else {
          iVar3 = 0x1f - iVar3;
        }
        iStack_dc = (uStack_d8 - iVar3) + 0x1f;
        if (iVar10 < iStack_dc) {
LAB_141653fc4:
          iStack_dc = iVar10;
        }
      }
      local_e0 = 0xffffffff;
      uStack_a0 = CONCAT44(iStack_dc,0xffffffff);
      auStack_50._8_4_ = uStack_d8;
      auStack_50._0_8_ = uStack_a0;
      auStack_50._12_4_ = uStack_d4;
      uStack_b0 = CONCAT44(uStack_ec,local_f0);
      local_80 = 0;
      local_40._0_4_ = SUB84(plVar4,0);
      local_40._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
      local_98._8_4_ = (undefined4)local_40;
      local_98._0_8_ = auStack_50._8_8_;
      local_98._12_4_ = local_40._4_4_;
      iVar10 = iStack_dc;
      local_b8 = plVar4;
      local_a8 = puStack_e8;
      local_88 = plVar4;
      local_68 = plVar4;
      uStack_60 = uStack_b0;
      puStack_58 = puStack_e8;
      local_40 = plVar4;
      if (iStack_dc < (int)plVar4[5]) {
        do {
          plVar4 = local_b8;
          lVar13 = (longlong)iVar10 * 0x30;
          uVar6 = FName::ToString(*local_b8 + lVar13,local_38);
          cVar2 = FString::StartsWith(uVar6,param_3,1);
          if (local_38[0] != 0) {
            FMemory::Free();
          }
          if (cVar2 == '\0') {
            uVar6 = FName::ToString(*plVar4 + lVar13,&local_f0);
            cVar2 = FString::StartsWith(uVar6,param_4,1);
            if ((cVar2 == '\0') || (plVar14 == (longlong *)0x0)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (CONCAT44(uStack_ec,local_f0) != 0) {
              FMemory::Free();
            }
            if (bVar1) {
              lVar13 = *plVar4 + lVar13;
              iVar10 = *(int *)(lVar13 + 0x20) + -1;
              if (*(int *)(lVar13 + 0x20) == 0) {
                iVar10 = 0;
              }
              lVar7 = 0x18;
              if (iVar10 < 1) {
                lVar7 = 8;
              }
              if (*(int *)(lVar7 + 8 + lVar13) == 0) {
                puVar11 = &DAT_143f3eda8;
              }
              else {
                puVar11 = *(undefined2 **)(lVar7 + lVar13);
              }
              puVar8 = (undefined8 *)FName::FName(&local_100,puVar11,1);
              iVar10 = (int)plVar14[1];
              *(int *)(plVar14 + 1) = iVar10 + 1;
              if (*(int *)((longlong)plVar14 + 0xc) < iVar10 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar10);
              }
              *(undefined8 *)(*plVar14 + (longlong)iVar10 * 8) = *puVar8;
            }
            else {
              plVar14 = (longlong *)0x0;
            }
          }
          else {
            lVar13 = *plVar4 + lVar13;
            iVar10 = *(int *)(lVar13 + 0x20) + -1;
            if (*(int *)(lVar13 + 0x20) == 0) {
              iVar10 = 0;
            }
            lVar7 = 0x18;
            if (iVar10 < 1) {
              lVar7 = 8;
            }
            if (*(int *)(lVar7 + 8 + lVar13) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = *(undefined2 **)(lVar7 + lVar13);
            }
            FName::FName(&local_d0,puVar11,1);
            if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
              plVar14 = (longlong *)param_5[8];
              if ((longlong *)param_5[8] == (longlong *)0x0) {
                plVar14 = param_5 + 7;
              }
              iVar10 = *(int *)((longlong)plVar14 +
                               ((longlong)((int)((ulonglong)local_d0 >> 0x20) + (int)local_d0) &
                               (longlong)(int)param_5[9] - 1U) * 4);
              if (iVar10 != -1) {
                do {
                  plVar4 = (longlong *)(*param_5 + (longlong)iVar10 * 0x20);
                  if (*plVar4 == local_d0) {
                    if (iVar10 != -1) goto LAB_141654131;
                    break;
                  }
                  iVar10 = (int)plVar4[3];
                } while (iVar10 != -1);
              }
            }
            plVar4 = (longlong *)0x0;
LAB_141654131:
            plVar14 = plVar4 + 1;
            if (plVar4 == (longlong *)0x0) {
              plVar14 = (longlong *)0x0;
            }
            if (plVar14 == (longlong *)0x0) {
              local_78 = &local_d0;
              local_c8[0] = 0;
              local_70 = local_c8;
              local_c8[1] = 0;
              FUN_14163d2a0(param_5,local_108,&local_78,0);
              plVar14 = (longlong *)(*param_5 + (longlong)local_108[0] * 0x20 + 8);
              if (local_c8[0] != 0) {
                FMemory::Free();
              }
            }
          }
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
          iVar10 = uStack_a0._4_4_;
        } while (uStack_a0._4_4_ < (int)local_a8[6]);
        if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
          TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1416542d0 Parse1ToNSectionOfStrings body=1152 status=ok
// SIG undefined Parse1ToNSectionOfStrings(void)

void FConfigCacheIni::Parse1ToNSectionOfStrings
               (undefined8 param_1,short *param_2,undefined8 param_3,undefined8 param_4,
               longlong *param_5,undefined8 param_6)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  int local_f8 [2];
  longlong *local_f0;
  ulonglong local_e8;
  int local_e0 [2];
  uint local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  undefined4 local_c8;
  int iStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined8 uStack_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  longlong local_78;
  longlong **local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  longlong local_38 [2];
  
  plVar12 = (longlong *)0x0;
  local_e0[0] = 0;
  plVar5 = (longlong *)Find(param_1,param_6,0);
  if (plVar5 != (longlong *)0x0) {
    local_f0 = (longlong *)0x0;
    local_e8 = 0;
    plVar8 = plVar12;
    if ((param_2 != (short *)0x0) && (plVar8 = (longlong *)0x0, *param_2 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (param_2[lVar10] != 0);
      uVar9 = (int)lVar10 + 1;
      local_e8 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0,0);
      }
      plVar8 = local_f0;
      FGenericPlatformString::Memcpy(local_f0,param_2,(longlong)(int)uVar9 * 2);
    }
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(plVar5,local_f8,&local_f0);
    plVar6 = plVar12;
    if (local_f8[0] != -1) {
      plVar6 = (longlong *)((longlong)local_f8[0] * 0xb8 + *plVar5);
    }
    plVar5 = plVar6 + 2;
    if (plVar6 == (longlong *)0x0) {
      plVar5 = plVar12;
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
    if (plVar5 != (longlong *)0x0) {
      iVar13 = (int)plVar5[5];
      puStack_d0 = (uint *)(plVar5 + 2);
      uStack_d4 = 1;
      local_d8 = 0;
      iStack_c4 = 0;
      uStack_c0 = 0;
      if (iVar13 != 0) {
        puVar15 = (uint *)plVar5[4];
        if ((uint *)plVar5[4] == (uint *)0x0) {
          puVar15 = puStack_d0;
        }
        uVar9 = *puVar15;
        plVar8 = plVar12;
        plVar6 = plVar12;
        while (uVar9 == 0) {
          iVar4 = (int)plVar8;
          uStack_c0 = (int)plVar6 + 0x20;
          plVar6 = (longlong *)(ulonglong)uStack_c0;
          local_d8 = iVar4 + 1;
          plVar8 = (longlong *)(ulonglong)local_d8;
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141654481;
          uVar9 = puVar15[(longlong)iVar4 + 1];
        }
        uStack_d4 = -uVar9 & uVar9;
        iVar4 = 0x1f;
        if (uStack_d4 != 0) {
          for (; uStack_d4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uStack_d4 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        iStack_c4 = (uStack_c0 - iVar4) + 0x1f;
        if (iVar13 < iStack_c4) {
LAB_141654481:
          iStack_c4 = iVar13;
        }
      }
      local_c8 = 0xffffffff;
      uStack_a0 = CONCAT44(iStack_c4,0xffffffff);
      auStack_50._8_4_ = uStack_c0;
      auStack_50._0_8_ = uStack_a0;
      auStack_50._12_4_ = uStack_bc;
      uStack_b0 = CONCAT44(uStack_d4,local_d8);
      local_80 = 0;
      local_40._0_4_ = SUB84(plVar5,0);
      local_40._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
      local_98._8_4_ = (undefined4)local_40;
      local_98._0_8_ = auStack_50._8_8_;
      local_98._12_4_ = local_40._4_4_;
      iVar13 = iStack_c4;
      local_b8 = plVar5;
      local_a8 = puStack_d0;
      local_88 = plVar5;
      local_68 = plVar5;
      uStack_60 = uStack_b0;
      puStack_58 = puStack_d0;
      local_40 = plVar5;
      if (iStack_c4 < (int)plVar5[5]) {
        do {
          plVar5 = local_b8;
          lVar10 = (longlong)iVar13 * 0x30;
          uVar7 = FName::ToString(*local_b8 + lVar10,local_38);
          cVar3 = FString::StartsWith(uVar7,param_3,1);
          if (local_38[0] != 0) {
            FMemory::Free();
          }
          if (cVar3 == '\0') {
            uVar7 = FName::ToString(*plVar5 + lVar10,&local_d8);
            cVar3 = FString::StartsWith(uVar7,param_4,1);
            if ((cVar3 == '\0') || (plVar12 == (longlong *)0x0)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (CONCAT44(uStack_d4,local_d8) != 0) {
              FMemory::Free();
            }
            if (bVar2) {
              lVar14 = *plVar5;
              iVar4 = (int)plVar12[1];
              iVar1 = *(int *)(lVar14 + lVar10 + 0x20);
              iVar13 = iVar1 + -1;
              if (iVar1 == 0) {
                iVar13 = 0;
              }
              lVar11 = 0x18;
              if (iVar13 < 1) {
                lVar11 = 8;
              }
              *(int *)(plVar12 + 1) = iVar4 + 1;
              if (*(int *)((longlong)plVar12 + 0xc) < iVar4 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar4);
              }
              FString::FString((longlong)iVar4 * 0x10 + *plVar12,lVar11 + lVar14 + lVar10);
            }
            else {
              plVar12 = (longlong *)0x0;
            }
          }
          else {
            iVar4 = *(int *)(*plVar5 + lVar10 + 0x20);
            iVar13 = iVar4 + -1;
            if (iVar4 == 0) {
              iVar13 = 0;
            }
            lVar14 = 0x18;
            if (iVar13 < 1) {
              lVar14 = 8;
            }
            TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
            ::FindId(param_5,local_f8,lVar14 + *plVar5 + lVar10);
            if (local_f8[0] == -1) {
              lVar14 = 0;
            }
            else {
              lVar14 = *param_5 + (longlong)local_f8[0] * 0x28;
            }
            plVar12 = (longlong *)(lVar14 + 0x10);
            if (lVar14 == 0) {
              plVar12 = (longlong *)0x0;
            }
            if (plVar12 == (longlong *)0x0) {
              local_f0 = (longlong *)0x0;
              local_e8 = 0;
              iVar4 = *(int *)(*plVar5 + lVar10 + 0x20);
              iVar13 = iVar4 + -1;
              if (iVar4 == 0) {
                iVar13 = 0;
              }
              local_78 = 0x18;
              if (iVar13 < 1) {
                local_78 = 8;
              }
              local_78 = local_78 + *plVar5 + lVar10;
              local_70 = &local_f0;
              FUN_14163d8a0(param_5,local_e0,&local_78,0);
              plVar12 = (longlong *)(*param_5 + ((longlong)local_e0[0] * 5 + 2) * 8);
              plVar5 = local_f0;
              for (iVar13 = (int)local_e8; iVar13 != 0; iVar13 = iVar13 + -1) {
                if (*plVar5 != 0) {
                  FMemory::Free();
                }
                plVar5 = plVar5 + 2;
              }
              if (local_f0 != (longlong *)0x0) {
                FMemory::Free(local_f0);
              }
            }
          }
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
          iVar13 = uStack_a0._4_4_;
        } while (uStack_a0._4_4_ < (int)local_a8[6]);
        if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
          TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141654750 FUN_141654750 body=695 status=ok
// SIG undefined FUN_141654750(void)

void FUN_141654750(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  wchar_t *_Dest;
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  short *psVar9;
  uint uVar10;
  undefined8 local_res8;
  short *local_38;
  ulonglong local_30;
  
  local_38 = (short *)0x0;
  local_30 = 0;
  local_res8 = param_1;
  cVar1 = FParse::Token(&local_res8,&local_38,0);
  while (cVar1 != '\0') {
    uVar10 = 0;
    if (((int)local_30 == 0) || (*local_38 != 0x2d)) {
      iVar5 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar5);
      }
      psVar9 = local_38;
      puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + *param_2);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0;
        lVar6 = (longlong)(int)local_30;
        *(int *)(puVar8 + 1) = (int)local_30;
        if ((int)local_30 == 0) {
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,local_30 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar8,psVar9,lVar6 * 2);
        }
      }
    }
    else {
      iVar5 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar5);
      }
      puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + *param_3);
      iVar5 = (int)local_30;
      if (puVar8 != (undefined8 *)0x0) {
        uVar7 = (int)local_30 - 1;
        if ((int)local_30 == 0) {
          uVar7 = uVar10;
        }
        if (1 < uVar7) {
          uVar7 = 1;
        }
        uVar2 = (int)local_30 - 1;
        if ((int)local_30 == 0) {
          uVar2 = uVar10;
        }
        uVar3 = uVar7;
        if ((uVar7 < 0x80000001) && (uVar3 = uVar2, 0x80000000 < uVar2)) {
          uVar3 = 0x80000000;
        }
        psVar9 = &DAT_143f3eda8;
        if ((int)local_30 != 0) {
          psVar9 = local_38;
        }
        iVar4 = uVar3 - uVar7;
        *puVar8 = 0;
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        iVar5 = iVar4 + 1;
        if (iVar4 == 0) {
          iVar5 = 0;
        }
        *(int *)(puVar8 + 1) = iVar5;
        if ((0 < iVar5) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar8,0), 0 < *(int *)(puVar8 + 1))) {
          _Dest = (wchar_t *)*puVar8;
          wcsncpy(_Dest,psVar9 + (int)uVar7,(longlong)iVar4);
          _Dest[iVar4] = L'\0';
        }
        iVar5 = (int)local_30;
      }
      iVar4 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar4);
        iVar5 = (int)local_30;
      }
      puVar8 = (undefined8 *)((longlong)iVar4 * 0x10 + *param_2);
      if (puVar8 != (undefined8 *)0x0) {
        iVar4 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar4 = 0;
        }
        if (iVar5 == 0) {
          psVar9 = &DAT_143f3eda8;
          uVar7 = uVar10;
        }
        else {
          psVar9 = local_38;
          uVar7 = iVar5 - 1;
        }
        if ((-1 < (int)(iVar4 - 1U)) && (uVar10 = uVar7, iVar4 <= (int)uVar7)) {
          uVar10 = iVar4 - 1U;
        }
        *puVar8 = 0;
        puVar8[1] = 0;
        psVar9 = psVar9 + ((longlong)(int)uVar7 - (longlong)(int)uVar10);
        if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
          lVar6 = -1;
          do {
            lVar6 = lVar6 + 1;
          } while (psVar9[lVar6] != 0);
          iVar5 = (int)lVar6 + 1;
          *(int *)(puVar8 + 1) = iVar5;
          if (0 < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar8,0);
          }
          FGenericPlatformString::Memcpy(*puVar8,psVar9,(longlong)iVar5 * 2);
        }
      }
    }
    cVar1 = FParse::Token(&local_res8,&local_38,0);
  }
  if (local_38 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141654a10 Parse body=636 status=ok
// SIG undefined Parse(void)

undefined8 FDateTime::Parse(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  wchar_t *_Str;
  longlong *plVar11;
  undefined8 uVar12;
  undefined1 local_res18 [16];
  longlong *local_58;
  undefined8 local_50;
  longlong local_48 [2];
  
  FString::Replace(param_1,local_48,&DAT_144cc551c,&DAT_144cc54ec,1);
  FString::ReplaceInline(local_48,&DAT_144cc55bc,&DAT_144cc5544,0);
  FString::ReplaceInline(local_48,&DAT_144cc572c,&DAT_144cc564c,0);
  uVar7 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_141594550(local_48,&local_58,&DAT_144cc578c,1);
  if ((int)local_50 - 6U < 2) {
    _Str = L"";
    if ((int)local_58[1] == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)*local_58;
    }
    iVar1 = _wtoi(pwVar10);
    if ((int)local_58[3] == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)local_58[2];
    }
    iVar2 = _wtoi(pwVar10);
    if ((int)local_58[5] == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)local_58[4];
    }
    iVar3 = _wtoi(pwVar10);
    if ((int)local_58[7] == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)local_58[6];
    }
    uVar4 = _wtoi(pwVar10);
    if ((int)local_58[9] == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)local_58[8];
    }
    uVar5 = _wtoi(pwVar10);
    if ((int)local_58[0xb] == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)local_58[10];
    }
    uVar6 = _wtoi(pwVar10);
    if (6 < (int)local_50) {
      if ((int)local_58[0xd] != 0) {
        _Str = (wchar_t *)local_58[0xc];
      }
      uVar7 = _wtoi(_Str);
    }
    if (((((iVar1 - 1U < 9999) && (iVar2 - 1U < 0xc)) && (0 < iVar3)) &&
        ((iVar8 = DaysInMonth(iVar1,iVar2), iVar3 <= iVar8 && (uVar4 < 0x18)))) &&
       ((uVar5 < 0x3c && ((uVar6 < 0x3c && (uVar7 < 1000)))))) {
      puVar9 = (undefined8 *)FDateTime(local_res18,iVar1,iVar2,iVar3,uVar4,uVar5,uVar6,uVar7);
      uVar12 = 1;
      *param_2 = *puVar9;
      goto LAB_141654c0f;
    }
  }
  uVar12 = 0;
LAB_141654c0f:
  plVar11 = local_58;
  for (iVar1 = (int)local_50; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return uVar12;
}



// FUNCTION 141654c90 ParseFloat body=334 status=ok
// SIG undefined ParseFloat(void)

undefined8 FDefaultValueHelper::ParseFloat(undefined8 *param_1,float *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  int iVar8;
  bool bVar9;
  double dVar10;
  longlong local_48;
  undefined4 local_40;
  longlong local_38 [2];
  
  iVar1 = *(int *)(param_1 + 1);
  pwVar7 = (wchar_t *)0x0;
  iVar8 = 0;
  if (1 < iVar1) {
    puVar5 = &DAT_143f3eda8;
    if (iVar1 != 0) {
      puVar5 = (undefined2 *)*param_1;
      iVar8 = iVar1 + -1;
    }
    cVar3 = IsStringValidFloat(puVar5,(undefined2 *)*param_1 + iVar8);
    if (cVar3 != '\0') {
      cVar3 = HasWhitespaces(param_1);
      bVar9 = cVar3 == '\0';
      if (bVar9) {
        local_40 = 0;
        plVar4 = &local_48;
      }
      else {
        plVar4 = (longlong *)RemoveWhitespaces(local_38,param_1);
        pwVar7 = (wchar_t *)*plVar4;
      }
      *plVar4 = 0;
      lVar2 = plVar4[1];
      plVar4[1] = 0;
      if ((bVar9) && (local_48 != 0)) {
        FMemory::Free();
      }
      if ((!bVar9) && (local_38[0] != 0)) {
        FMemory::Free();
      }
      pwVar6 = L"";
      if (cVar3 == '\0') {
        if (*(int *)(param_1 + 1) != 0) {
          pwVar6 = (wchar_t *)*param_1;
        }
      }
      else if ((int)lVar2 != 0) {
        pwVar6 = pwVar7;
      }
      dVar10 = _wtof(pwVar6);
      *param_2 = (float)dVar10;
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141654de0 ParseHttpDate body=1914 status=ok
// SIG undefined ParseHttpDate(void)

undefined8 FDateTime::ParseHttpDate(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  longlong *plVar19;
  wchar_t *_Str;
  undefined8 *puVar20;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  uint local_res18;
  uint local_res20;
  uint local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 8) < 2) {
    return 0;
  }
  iVar9 = 0;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  local_res10 = param_2;
  iVar6 = FUN_141594550(param_1,&local_70,&DAT_144cc5dac,1);
  if ((iVar6 < 1) || ((int)local_68 != iVar6)) goto LAB_14165550f;
  local_78 = 0;
  iVar8 = 0;
  local_res20 = 0;
  iVar6 = 0;
  local_res18 = 0;
  iVar10 = 0;
  cVar5 = FString::EndsWith(local_70,&DAT_144cc5dfc,1);
  plVar19 = local_70;
  if (cVar5 != '\0') {
    iVar7 = (int)local_70[1];
    iVar15 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar15 = 0;
    }
    iVar14 = (iVar7 - (iVar15 + -1)) + -1;
    if (iVar14 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*local_70 + (longlong)(iVar15 + -1) * 2),
                 (void *)(*local_70 + (longlong)iVar15 * 2),(longlong)iVar14 * 2);
      iVar7 = (int)plVar19[1];
    }
    *(int *)(plVar19 + 1) = iVar7 + -1;
    TArray<wchar_t,FDefaultAllocator>::ResizeShrink(plVar19);
  }
  local_60 = (longlong *)0x0;
  local_58 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
  plVar19 = local_60;
  FGenericPlatformString::Memcpy(local_60,&DAT_144cc7f78,8);
  _Str = L"";
  plVar16 = (longlong *)&DAT_143f3eda8;
  if ((int)local_58 != 0) {
    plVar16 = plVar19;
  }
  if ((int)(local_70 + (longlong)((int)local_68 + -1) * 2)[1] == 0) {
    psVar12 = &DAT_143f3eda8;
  }
  else {
    psVar12 = (short *)local_70[(longlong)((int)local_68 + -1) * 2];
  }
  lVar17 = (longlong)plVar16 - (longlong)psVar12;
  do {
    sVar1 = *psVar12;
    sVar2 = *(short *)((longlong)psVar12 + lVar17);
    if (sVar1 != sVar2) break;
    psVar12 = psVar12 + 1;
  } while (sVar2 != 0);
  if (plVar19 != (longlong *)0x0) {
    FMemory::Free(plVar19);
  }
  if (sVar1 == sVar2) {
    if ((int)local_68 == 6) {
      iVar7 = <lambda_55202312b28e07a00f1bcc96bad4f563>::operator()(local_res8,local_70);
      plVar19 = local_70;
      puVar20 = param_2;
      iVar6 = iVar9;
      iVar10 = iVar9;
      iVar8 = iVar9;
      if (0 < iVar7) {
        if ((int)local_70[3] == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)local_70[2];
        }
        iVar6 = _wtoi(pwVar18);
        iVar8 = <lambda_de5aa24d66864cd4f913a08678d87e54>::operator()(local_res8,plVar19 + 4);
        iVar9 = (int)plVar19[7];
        iVar10 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar10 = 0;
        }
        if (iVar10 == 4) {
          if (iVar9 == 0) {
            iVar9 = _wtoi(L"");
          }
          else {
            iVar9 = _wtoi((wchar_t *)plVar19[6]);
          }
        }
        else {
          iVar9 = -1;
        }
        puVar20 = param_2;
        iVar10 = iVar9;
        if (((iVar6 - 1U < 0x1f) && (puVar20 = param_2, iVar8 - 1U < 0xc)) &&
           (puVar20 = param_2, iVar9 - 1U < 9999)) {
          local_60 = (longlong *)0x0;
          local_58 = 0;
          iVar10 = FUN_141594550(local_70 + 8,&local_60,&DAT_144ca0610,1);
          if (iVar10 == 3) {
            if ((int)local_60[1] == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = (wchar_t *)*local_60;
            }
            local_78 = _wtoi(pwVar18);
            if ((int)local_60[3] == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = (wchar_t *)local_60[2];
            }
            local_res20 = _wtoi(pwVar18);
            if ((int)local_60[5] != 0) {
              _Str = (wchar_t *)local_60[4];
            }
            local_res18 = _wtoi(_Str);
            plVar19 = local_60;
            for (iVar10 = (int)local_58; iVar10 != 0; iVar10 = iVar10 + -1) {
              if (*plVar19 != 0) {
                FMemory::Free();
              }
              plVar19 = plVar19 + 2;
            }
          }
          else {
            plVar19 = local_60;
            for (iVar10 = (int)local_58; iVar10 != 0; iVar10 = iVar10 + -1) {
              if (*plVar19 != 0) {
                FMemory::Free();
              }
              plVar19 = plVar19 + 2;
            }
          }
LAB_14165509a:
          puVar20 = param_2;
          iVar10 = iVar9;
          if (local_60 != (longlong *)0x0) {
            FMemory::Free(local_60);
            puVar20 = param_2;
          }
        }
      }
    }
    else {
      puVar20 = param_2;
      if (((int)local_68 == 4) &&
         (iVar7 = <lambda_dd46b0ac207b9c7cf3418b507ae92e20>::operator()(local_res8,local_70),
         puVar20 = param_2, 0 < iVar7)) {
        local_60 = (longlong *)0x0;
        local_58 = 0;
        iVar8 = FUN_141594550(local_70 + 2,&local_60,&DAT_144cb03f0,1);
        iVar6 = iVar9;
        iVar10 = iVar9;
        if (iVar8 == 3) {
          if ((int)local_60[1] == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = (wchar_t *)*local_60;
          }
          iVar6 = _wtoi(pwVar18);
          iVar9 = <lambda_de5aa24d66864cd4f913a08678d87e54>::operator()(local_res8,local_60 + 2);
          if ((int)local_60[5] == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = (wchar_t *)local_60[4];
          }
          iVar8 = _wtoi(pwVar18);
          iVar10 = iVar8 + 0x76c;
          if (((0x1e < iVar6 - 1U) || (0xb < iVar9 - 1U)) || (0x270e < iVar8 + 0x76bU))
          goto LAB_141655193;
          bVar3 = true;
          iVar8 = iVar9;
        }
        else {
LAB_141655193:
          bVar3 = false;
          iVar8 = iVar9;
        }
        plVar19 = local_60;
        for (iVar9 = (int)local_58; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (*plVar19 != 0) {
            FMemory::Free();
          }
          plVar19 = plVar19 + 2;
        }
        if (local_60 != (longlong *)0x0) {
          FMemory::Free(local_60);
        }
        puVar20 = local_res10;
        if (bVar3) {
          local_60 = (longlong *)0x0;
          local_58 = 0;
          iVar9 = FUN_141594550(local_70 + 4,&local_60,&DAT_144ca0610,1);
          if (iVar9 == 3) {
            if ((int)local_60[1] == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = (wchar_t *)*local_60;
            }
            local_78 = _wtoi(pwVar18);
            if ((int)local_60[3] == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = (wchar_t *)local_60[2];
            }
            local_res20 = _wtoi(pwVar18);
            if ((int)local_60[5] != 0) {
              _Str = (wchar_t *)local_60[4];
            }
            local_res18 = _wtoi(_Str);
            plVar19 = local_60;
            for (iVar9 = (int)local_58; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar19 != 0) {
                FMemory::Free();
              }
              plVar19 = plVar19 + 2;
            }
          }
          else {
            plVar19 = local_60;
            for (iVar9 = (int)local_58; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar19 != 0) {
                FMemory::Free();
              }
              plVar19 = plVar19 + 2;
            }
          }
          puVar20 = local_res10;
          if (local_60 != (longlong *)0x0) {
            FMemory::Free(local_60);
            puVar20 = local_res10;
          }
        }
      }
    }
  }
  else {
    puVar20 = param_2;
    if (((int)local_68 == 5) &&
       (iVar7 = <lambda_55202312b28e07a00f1bcc96bad4f563>::operator()(local_res8,local_70),
       plVar19 = local_70, puVar20 = param_2, 0 < iVar7)) {
      iVar6 = (int)local_70[5];
      uVar11 = iVar6 - 2;
      if (iVar6 == 0) {
        uVar11 = 0xffffffff;
      }
      if (uVar11 < 2) {
        if (iVar6 == 0) {
          iVar6 = _wtoi(L"");
        }
        else {
          iVar6 = _wtoi((wchar_t *)local_70[4]);
        }
      }
      else {
        iVar6 = -1;
      }
      iVar8 = <lambda_de5aa24d66864cd4f913a08678d87e54>::operator()(local_res8,plVar19 + 2);
      puVar20 = param_2;
      if ((iVar6 - 1U < 0x1f) && (puVar20 = param_2, iVar8 - 1U < 0xc)) {
        local_60 = (longlong *)0x0;
        local_58 = 0;
        iVar10 = FUN_141594550(local_70 + 6,&local_60,&DAT_144ca0610,1);
        if (iVar10 != 3) {
          plVar19 = local_60;
          for (iVar10 = (int)local_58; iVar10 != 0; iVar10 = iVar10 + -1) {
            if (*plVar19 != 0) {
              FMemory::Free();
            }
            plVar19 = plVar19 + 2;
          }
          goto LAB_14165509a;
        }
        if ((int)local_60[1] == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)*local_60;
        }
        local_78 = _wtoi(pwVar18);
        if ((int)local_60[3] == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)local_60[2];
        }
        uVar11 = _wtoi(pwVar18);
        if ((int)local_60[5] == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)local_60[4];
        }
        local_res20 = uVar11;
        local_res18 = _wtoi(pwVar18);
        if (((local_78 < 0x18) && (uVar11 < 0x3c)) && (local_res18 < 0x3c)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        plVar19 = local_60;
        for (iVar10 = (int)local_58; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar19 != 0) {
            FMemory::Free();
          }
          plVar19 = plVar19 + 2;
        }
        if (local_60 != (longlong *)0x0) {
          FMemory::Free(local_60);
        }
        puVar20 = local_res10;
        iVar10 = iVar9;
        if (bVar3) {
          iVar7 = (int)local_70[9];
          iVar15 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar15 = 0;
          }
          if (iVar15 == 4) {
            if (iVar7 != 0) {
              _Str = (wchar_t *)local_70[8];
            }
            iVar10 = _wtoi(_Str);
            puVar20 = local_res10;
          }
        }
      }
    }
  }
  uVar4 = local_res20;
  uVar11 = local_res18;
  cVar5 = Validate(iVar10,iVar8,iVar6,local_78,local_res20,local_res18,0);
  if (cVar5 != '\0') {
    puVar13 = (undefined8 *)FDateTime(local_res8,iVar10,iVar8,iVar6,local_78,uVar4,uVar11,0);
    *puVar20 = *puVar13;
    plVar19 = local_70;
    for (iVar6 = (int)local_68; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar19 != 0) {
        FMemory::Free();
      }
      plVar19 = plVar19 + 2;
    }
    if (local_70 != (longlong *)0x0) {
      FMemory::Free(local_70);
    }
    return 1;
  }
LAB_14165550f:
  plVar19 = local_70;
  for (iVar6 = (int)local_68; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar19 != 0) {
      FMemory::Free();
    }
    plVar19 = plVar19 + 2;
  }
  if (local_70 != (longlong *)0x0) {
    FMemory::Free(local_70);
  }
  return 0;
}



// FUNCTION 141655560 ParseInt body=337 status=ok
// SIG undefined ParseInt(void)

undefined8 FDefaultValueHelper::ParseInt(undefined8 *param_1,ulong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  ulong uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  bool bVar10;
  int local_res8 [2];
  longlong local_48;
  undefined4 local_40;
  longlong local_38 [2];
  
  pwVar8 = (wchar_t *)0x0;
  iVar9 = 0;
  local_res8[0] = 0;
  iVar1 = *(int *)(param_1 + 1);
  if (1 < iVar1) {
    puVar6 = &DAT_143f3eda8;
    if (iVar1 != 0) {
      puVar6 = (undefined2 *)*param_1;
      iVar9 = iVar1 + -1;
    }
    cVar3 = IsStringValidInteger(puVar6,(undefined2 *)*param_1 + iVar9,local_res8);
    if (cVar3 != '\0') {
      cVar3 = HasWhitespaces(param_1);
      bVar10 = cVar3 == '\0';
      if (bVar10) {
        local_40 = 0;
        plVar5 = &local_48;
      }
      else {
        plVar5 = (longlong *)RemoveWhitespaces(local_38,param_1);
        pwVar8 = (wchar_t *)*plVar5;
      }
      *plVar5 = 0;
      lVar2 = plVar5[1];
      plVar5[1] = 0;
      if ((bVar10) && (local_48 != 0)) {
        FMemory::Free();
      }
      if ((!bVar10) && (local_38[0] != 0)) {
        FMemory::Free();
      }
      pwVar7 = L"";
      if (cVar3 == '\0') {
        if (*(int *)(param_1 + 1) != 0) {
          pwVar7 = (wchar_t *)*param_1;
        }
      }
      else if ((int)lVar2 != 0) {
        pwVar7 = pwVar8;
      }
      uVar4 = wcstoul(pwVar7,(wchar_t **)0x0,local_res8[0]);
      *param_2 = uVar4;
      if (pwVar8 != (wchar_t *)0x0) {
        FMemory::Free(pwVar8);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1416556c0 ParseIso8601 body=858 status=ok
// SIG undefined ParseIso8601(void)

undefined8 FDateTime::ParseIso8601(wchar_t *param_1,longlong *param_2)

{
  wchar_t wVar1;
  ulong uVar2;
  wchar_t *pwVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong local_res8;
  undefined4 uStackX_c;
  longlong *local_res10;
  ulong local_res18;
  ulong local_res20;
  wchar_t *local_58 [3];
  
  uVar6 = 0;
  uVar9 = 0;
  local_58[0] = (wchar_t *)0x0;
  uVar10 = 0;
  uVar16 = 0;
  local_res8 = 0;
  local_res10 = param_2;
  local_res18 = wcstoul(param_1,local_58,10);
  if ((((local_58[0] <= param_1) || (*local_58[0] == L'\0')) ||
      (pwVar15 = local_58[0] + 1, local_res20 = wcstoul(pwVar15,local_58,10), local_58[0] <= pwVar15
      )) || ((*local_58[0] == L'\0' ||
             (pwVar15 = local_58[0] + 1, uVar5 = wcstoul(pwVar15,local_58,10),
             local_58[0] <= pwVar15)))) {
    return 0;
  }
  if (*local_58[0] == L'T') {
    pwVar15 = local_58[0] + 1;
    uVar6 = wcstoul(pwVar15,local_58,10);
    if (local_58[0] <= pwVar15) {
      return 0;
    }
    if (*local_58[0] == L'\0') {
      return 0;
    }
    pwVar15 = local_58[0] + 1;
    uVar7 = wcstoul(pwVar15,local_58,10);
    if (local_58[0] <= pwVar15) {
      return 0;
    }
    if (*local_58[0] == L'\0') {
      return 0;
    }
    pwVar15 = local_58[0] + 1;
    uVar8 = wcstoul(pwVar15,local_58,10);
    pwVar3 = local_58[0];
    if (local_58[0] <= pwVar15) {
      return 0;
    }
    if (*local_58[0] == L'.') {
      pwVar15 = local_58[0] + 1;
      uVar9 = wcstoul(pwVar15,local_58,10);
      if (local_58[0] <= pwVar15) {
        return 0;
      }
      if (pwVar3 + 4 < local_58[0]) {
        return 0;
      }
      iVar12 = (int)((longlong)local_58[0] - (longlong)pwVar15 >> 1);
      if (iVar12 < 3) {
        uVar13 = (ulonglong)(3 - iVar12);
        do {
          uVar9 = uVar9 * 10;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    pwVar15 = local_58[0];
    wVar1 = *local_58[0];
    if ((wVar1 + L'ￕ' & 0xfffdU) == 0) {
      local_res8 = wcstoul(local_58[0],local_58,10);
      if (local_58[0] <= pwVar15) {
        return 0;
      }
      if (*local_58[0] == L'\0') {
        return 0;
      }
      pwVar15 = local_58[0] + 1;
      uVar10 = wcstoul(pwVar15,local_58,10);
      uVar16 = local_res8;
      if (local_58[0] <= pwVar15) {
        return 0;
      }
    }
    else if ((wVar1 != L'\0') && (wVar1 != L'Z')) {
      return 0;
    }
  }
  else {
    uVar9 = uVar16;
    uVar8 = uVar16;
    uVar7 = uVar16;
    uVar10 = 0;
    if (*local_58[0] != L'\0') {
      return 0;
    }
  }
  uVar2 = local_res20;
  cVar4 = Validate(local_res18,local_res20,uVar5,uVar6,uVar7,uVar8,uVar9);
  if (cVar4 == '\0') {
    return 0;
  }
  FDateTime(&local_res8,local_res18,uVar2,uVar5,uVar6,uVar7,uVar8,uVar9);
  uVar9 = -uVar10;
  if (-1 < (int)uVar16) {
    uVar9 = uVar10;
  }
  auVar17._0_8_ = (double)(int)(uVar16 * 0x3c + uVar9) * 600000000.0 + 0.5;
  lVar14 = (longlong)auVar17._0_8_;
  if (0.0 <= auVar17._0_8_) {
    if ((lVar14 == -0x8000000000000000) || ((double)lVar14 == auVar17._0_8_)) goto LAB_1416559f8;
    auVar18._8_8_ = auVar17._0_8_;
    auVar18._0_8_ = auVar17._0_8_;
    uVar11 = movmskpd(0,auVar18);
    uVar13 = -(ulonglong)(uVar11 & 1);
  }
  else {
    if ((lVar14 == -0x8000000000000000) || ((double)lVar14 == auVar17._0_8_)) goto LAB_1416559f8;
    auVar17._8_8_ = auVar17._0_8_;
    uVar11 = movmskpd(0,auVar17);
    uVar13 = (ulonglong)(uVar11 & 1 ^ 1);
  }
  auVar17._0_8_ = (double)(longlong)(lVar14 + uVar13);
LAB_1416559f8:
  *local_res10 = CONCAT44(uStackX_c,local_res8) - (longlong)auVar17._0_8_;
  return 1;
}



// FUNCTION 141655a20 ParseRotator body=77 status=ok
// SIG undefined ParseRotator(void)

ulonglong FDefaultValueHelper::ParseRotator(undefined4 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar1 = FUN_141655a70(param_1,&local_28);
  if ((char)uVar1 != '\0') {
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    return CONCAT71((uint7)(uint3)((uint)local_20 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141655a70 FUN_141655a70 body=521 status=ok
// SIG undefined FUN_141655a70(void)

undefined8 FUN_141655a70(longlong *param_1,undefined8 *param_2)

{
  wchar_t *_Str;
  char cVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [6];
  
  lVar7 = 0;
  cVar1 = FDefaultValueHelper::HasWhitespaces();
  bVar8 = cVar1 == '\0';
  if (bVar8) {
    local_70 = 0;
    plVar2 = &local_78;
  }
  else {
    plVar2 = (longlong *)FDefaultValueHelper::RemoveWhitespaces(local_58,param_1);
    lVar7 = *plVar2;
  }
  *plVar2 = 0;
  local_60 = (int)plVar2[1];
  local_5c = *(undefined4 *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  local_68 = lVar7;
  if (bVar8) {
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar8) && (local_58[0] != 0)) {
    FMemory::Free();
  }
  plVar2 = &local_68;
  if (cVar1 == '\0') {
    plVar2 = param_1;
  }
  if (1 < (int)plVar2[1]) {
    _Str = (wchar_t *)*plVar2;
    pwVar3 = _guard_xfg_dispatch_icall_nop(_Str,L",");
    if (pwVar3 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L",");
      if (pwVar4 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L",");
        if (pwVar5 == (wchar_t *)0x0) {
          uVar6 = FDefaultValueHelper::EndOf(plVar2);
          cVar1 = FDefaultValueHelper::IsStringValidFloat(_Str,pwVar3);
          if (cVar1 != '\0') {
            cVar1 = FDefaultValueHelper::IsStringValidFloat(pwVar3 + 1,pwVar4);
            if (cVar1 != '\0') {
              cVar1 = FDefaultValueHelper::IsStringValidFloat(pwVar4 + 1,uVar6);
              if (cVar1 != '\0') {
                dVar9 = _wtof(pwVar4 + 1);
                dVar10 = _wtof(pwVar3 + 1);
                dVar11 = _wtof(_Str);
                local_70 = CONCAT44(local_70._4_4_,(float)dVar9);
                uVar6 = 1;
                *param_2 = CONCAT44((float)dVar10,(float)dVar11);
                *(float *)(param_2 + 1) = (float)dVar9;
                goto LAB_141655c35;
              }
            }
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_141655c35:
  if (lVar7 != 0) {
    FMemory::Free(lVar7);
  }
  return uVar6;
}



// FUNCTION 141655c80 PrintToLog body=512 status=ok
// SIG undefined PrintToLog(void)

void FChange::PrintToLog(longlong *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  void *pvVar10;
  void *_Src;
  int iVar11;
  void *local_68;
  uint local_60;
  int local_5c;
  void *local_58;
  uint local_50;
  uint local_4c;
  longlong local_48 [2];
  
  pvVar10 = (void *)0x0;
  iVar9 = 0;
  local_58 = (void *)0x0;
  local_4c = 0;
  pvVar7 = pvVar10;
  _Src = pvVar10;
  if (0 < (int)param_3) {
    uVar6 = (ulonglong)param_3;
    pvVar8 = pvVar10;
    do {
      iVar11 = (int)pvVar7;
      iVar3 = iVar11 + -1;
      if (iVar11 < 1) {
        iVar3 = iVar9;
      }
      local_50 = (iVar11 < 1) + 1 + iVar11;
      if ((int)pvVar8 < (int)local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
        pvVar8 = (void *)(ulonglong)local_4c;
        _Src = local_58;
      }
      pvVar7 = (void *)(ulonglong)local_50;
      *(undefined4 *)((longlong)_Src + (longlong)iVar3 * 2) = 9;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  puVar2 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,local_48);
  uVar4 = (uint)pvVar7;
  if ((int)uVar4 < 2) {
    pvVar10 = (void *)*puVar2;
    *puVar2 = 0;
    uVar6 = puVar2[1];
    puVar2[1] = 0;
    uVar5 = (uint)uVar6;
    uVar4 = *(int *)((longlong)puVar2 + 0xc);
  }
  else {
    iVar11 = (int)puVar2[1] + -1;
    if ((int)puVar2[1] == 0) {
      iVar11 = iVar9;
    }
    if ((uVar4 != 0) || (iVar3 = 1, iVar11 == 0)) {
      iVar3 = iVar9;
    }
    local_68 = (void *)0x0;
    local_60 = uVar4;
    if ((uVar4 == 0) && (iVar11 + iVar3 == 0)) {
      local_5c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar11 + iVar3 + uVar4,0);
      pvVar10 = local_68;
      ::_guard_xfg_dispatch_icall_nop(local_68,_Src,(longlong)(int)uVar4 * 2);
      pvVar7 = (void *)(ulonglong)local_60;
    }
    uVar5 = (uint)pvVar7;
    pvVar8 = (void *)*puVar2;
    uVar4 = local_5c;
    if (iVar11 != 0) {
      local_60 = uVar5 + (uVar5 == 0) + iVar11;
      if (local_5c < (int)local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,pvVar7);
        pvVar10 = local_68;
      }
      uVar4 = local_5c;
      uVar1 = local_60;
      pvVar7 = (void *)(((longlong)(int)uVar5 - (ulonglong)(uVar5 != 0)) * 2 + (longlong)pvVar10);
      ::_guard_xfg_dispatch_icall_nop(pvVar7,pvVar8,(longlong)iVar11 * 2);
      *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar7) = 0;
      uVar5 = uVar1;
    }
  }
  local_4c = uVar4;
  local_50 = uVar5;
  local_58 = pvVar10;
  FOutputDevice::Log(param_2,&local_58);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 141655e80 PrintToLog body=100 status=ok
// SIG undefined PrintToLog(void)

void FCompoundChange::PrintToLog(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x10) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 141655ef0 ProcessInputFileContents body=1417 status=ok
// SIG undefined ProcessInputFileContents(void)

void FConfigFile::ProcessInputFileContents(longlong *param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  short *psVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  short *psVar10;
  wchar_t wVar11;
  wchar_t *_Str;
  uint uVar12;
  uint *puVar13;
  undefined4 local_res8 [2];
  short *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint uStack_b0;
  int iStack_ac;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  iVar4 = *(int *)(param_2 + 1);
  psVar10 = (short *)0x0;
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  local_res10 = psVar10;
  if (0 < iVar5) {
    if (iVar4 == 0) {
      local_res10 = &DAT_143f3eda8;
    }
    else {
      local_res10 = (short *)*param_2;
    }
  }
  bVar2 = false;
  psVar7 = psVar10;
LAB_141655f40:
  if (local_res10 != (short *)0x0) {
    for (; (*local_res10 == 0xd || (*local_res10 == 10)); local_res10 = local_res10 + 1) {
    }
    local_c8 = (wchar_t *)0x0;
    uStack_c0 = 0;
    local_res8[0] = 0;
    FUN_141675e40(&local_res10,&local_c8,local_res8,0);
    _Str = local_c8;
    if ((local_res10 == (short *)0x0) || (*local_res10 == 0)) {
      bVar2 = true;
    }
    if ((uint)uStack_c0 != 0) {
      wVar11 = *local_c8;
      while (wVar11 != L'\0') {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (_Str[lVar6] != L'\0');
        iVar4 = iswspace(_Str[(longlong)(int)lVar6 + -1]);
        if (iVar4 == 0) break;
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (_Str[lVar6] != L'\0');
        _Str[(longlong)(int)lVar6 + -1] = L'\0';
        wVar11 = *_Str;
      }
      wVar11 = *_Str;
      if (wVar11 != L'[') goto LAB_1416560b8;
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (_Str[lVar6] != L'\0');
      if (_Str[(longlong)(int)lVar6 + -1] != L']') goto LAB_1416560b8;
      pwVar8 = _Str + 1;
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (pwVar8[lVar6] != L'\0');
      local_88 = (longlong *)0x0;
      local_80 = 0;
      _Str[(int)lVar6] = L'\0';
      if ((pwVar8 != (wchar_t *)0x0) && (*pwVar8 != L'\0')) {
        lVar6 = -1;
        do {
          lVar3 = lVar6 + 2;
          lVar6 = lVar6 + 1;
        } while (_Str[lVar3] != L'\0');
        uVar12 = (int)lVar6 + 1;
        local_80 = (ulonglong)uVar12;
        if (0 < (int)uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        }
        FGenericPlatformString::Memcpy(local_88,pwVar8,(longlong)(int)uVar12 * 2);
      }
      psVar7 = (short *)FindOrAddSection(param_1,&local_88);
      plVar9 = local_88;
      goto LAB_1416562ae;
    }
    wVar11 = L'\0';
    _Str = L"";
LAB_1416560b8:
    if ((((psVar7 != (short *)0x0) && (wVar11 != L'\0')) && (wVar11 != L';')) &&
       (pwVar8 = ::_guard_xfg_dispatch_icall_nop(_Str,L"="), pwVar8 != (wchar_t *)0x0)) {
      *pwVar8 = L'\0';
      pwVar8 = pwVar8 + 1;
      wVar11 = *_Str;
      while (wVar11 != L'\0') {
        iVar4 = iswspace(wVar11);
        if (iVar4 == 0) {
          if (*_Str != L'\0') goto LAB_141656130;
          break;
        }
        pwVar1 = _Str + 1;
        _Str = _Str + 1;
        wVar11 = *pwVar1;
      }
      goto LAB_141656175;
    }
    goto LAB_1416562bc;
  }
  goto LAB_1416562da;
  while( true ) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (_Str[lVar6] != L'\0');
    _Str[(longlong)(int)lVar6 + -1] = L'\0';
    if (*_Str == L'\0') break;
LAB_141656130:
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (_Str[lVar6] != L'\0');
    iVar4 = iswspace(_Str[(longlong)(int)lVar6 + -1]);
    if (iVar4 == 0) break;
  }
LAB_141656175:
  wVar11 = *pwVar8;
  while (wVar11 != L'\0') {
    iVar4 = iswspace(wVar11);
    if (iVar4 == 0) {
      if (*pwVar8 != L'\0') goto LAB_1416561b0;
      break;
    }
    pwVar1 = pwVar8 + 1;
    pwVar8 = pwVar8 + 1;
    wVar11 = *pwVar1;
  }
LAB_1416561f5:
  if (*pwVar8 == L'\"') {
    local_78 = (longlong *)0x0;
    local_70 = 0;
    FParse::QuotedString(pwVar8,&local_78,0);
    plVar9 = (longlong *)&DAT_143f3eda8;
    if ((int)local_70 != 0) {
      plVar9 = local_78;
    }
    FConfigValue::FConfigValue(&local_68,plVar9);
    FName::FName(local_res18,_Str,1);
    TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::Emplace<FName_const_&,FConfigValue>(psVar7,local_res18,&local_68);
    if (puStack_58 != (uint *)0x0) {
      FMemory::Free();
    }
    plVar9 = local_78;
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
      plVar9 = local_78;
    }
  }
  else {
    FConfigValue::FConfigValue(&local_68,pwVar8);
    FName::FName(local_res20,_Str,1);
    TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::Emplace<FName_const_&,FConfigValue>(psVar7,local_res20,&local_68);
    plVar9 = local_68;
    if (puStack_58 != (uint *)0x0) {
      FMemory::Free();
      plVar9 = local_68;
    }
  }
LAB_1416562ae:
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_1416562bc:
  if (local_c8 != (wchar_t *)0x0) {
    FMemory::Free(local_c8);
  }
  if (bVar2) goto LAB_1416562da;
  goto LAB_141655f40;
  while( true ) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pwVar8[lVar6] != L'\0');
    pwVar8[(longlong)(int)lVar6 + -1] = L'\0';
    if (*pwVar8 == L'\0') break;
LAB_1416561b0:
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pwVar8[lVar6] != L'\0');
    iVar4 = iswspace(pwVar8[(longlong)(int)lVar6 + -1]);
    if (iVar4 == 0) break;
  }
  goto LAB_1416561f5;
LAB_1416562da:
  TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Shrink(param_1);
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),1);
  iVar4 = (int)param_1[5];
  puStack_58 = (uint *)(param_1 + 2);
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 1;
  local_b8._4_4_ = 0;
  uStack_b0 = 0;
  if (iVar4 != 0) {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puStack_58;
    }
    uVar12 = *puVar13;
    psVar7 = psVar10;
    while (uVar12 == 0) {
      iVar5 = (int)psVar7;
      uStack_b0 = (int)psVar10 + 0x20;
      psVar10 = (short *)(ulonglong)uStack_b0;
      local_c8._0_4_ = iVar5 + 1;
      psVar7 = (short *)(ulonglong)(uint)local_c8;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14165639b;
      uVar12 = puVar13[(longlong)iVar5 + 1];
    }
    local_c8._4_4_ = -uVar12 & uVar12;
    iVar5 = 0x1f;
    if (local_c8._4_4_ != 0) {
      for (; local_c8._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_c8._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_b8._4_4_ = (uStack_b0 - iVar5) + 0x1f;
    if (iVar4 < local_b8._4_4_) {
LAB_14165639b:
      local_b8._4_4_ = iVar4;
    }
  }
  auStack_50._4_4_ = local_b8._4_4_;
  auStack_50._0_4_ = 0xffffffff;
  auStack_50._8_4_ = uStack_b0;
  auStack_50._12_4_ = iStack_ac;
  uStack_60 = (uint)local_c8;
  uStack_5c = local_c8._4_4_;
  local_90 = 0;
  local_40._0_4_ = SUB84(param_1,0);
  local_40._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_b0 = 0xffffffff;
  iStack_ac = local_b8._4_4_;
  uStack_c0._0_4_ = (uint)local_c8;
  uStack_c0._4_4_ = local_c8._4_4_;
  local_a8._8_4_ = (undefined4)local_40;
  local_a8._0_8_ = auStack_50._8_8_;
  local_a8._12_4_ = local_40._4_4_;
  bVar2 = local_b8._4_4_ < (int)param_1[5];
  local_c8 = (wchar_t *)param_1;
  local_98 = param_1;
  local_68 = param_1;
  local_40 = param_1;
  local_b8 = puStack_58;
  if (bVar2) {
    do {
      lVar6 = (longlong)iStack_ac * 0xb8 + *(longlong *)local_c8;
      TSparseArray<TSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Shrink(lVar6 + 0x10);
      TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
      ::ConditionalRehash(lVar6 + 0x10,*(int *)(lVar6 + 0x18) - *(int *)(lVar6 + 0x44),1);
      uStack_b0 = uStack_b0 & ~uStack_c0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
    } while (iStack_ac < (int)local_b8[6]);
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 141656480 ProcessPropertyAndWriteForDefaults body=1814 status=ok
// SIG undefined ProcessPropertyAndWriteForDefaults(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FConfigFile::ProcessPropertyAndWriteForDefaults
               (longlong param_1,byte param_2,longlong *param_3,longlong *param_4,
               undefined8 *param_5,undefined8 param_6)

{
  uint *puVar1;
  void *pvVar2;
  void *_Dst;
  int iVar3;
  byte bVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte bVar14;
  short *psVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  undefined2 *puVar20;
  uint uVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  byte local_288;
  byte *local_280;
  undefined8 local_278;
  longlong local_270;
  ulonglong local_268;
  undefined8 local_260;
  undefined8 local_258;
  uint *puStack_250;
  uint local_248;
  uint uStack_244;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined8 *local_238;
  byte *local_230;
  undefined8 local_228;
  longlong *local_220;
  undefined8 local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  uint *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 uStack_1e8;
  uint *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined **local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong local_180;
  undefined4 local_178;
  undefined2 local_170;
  undefined1 local_16e;
  undefined1 local_168 [288];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  plVar17 = (longlong *)(param_1 + 0x60);
  local_238 = param_5;
  pbVar12 = (byte *)0x0;
  local_260 = param_6;
  local_288 = param_2;
  local_220 = param_3;
  if (0 < *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x94)) {
    cVar6 = FString::StartsWith(param_6,&DAT_144cc50c4,1);
    if ((cVar6 != '\0') || (1 < (int)param_3[1])) {
      local_1c0 = 0;
      lVar19 = -1;
      local_1c8 = &PTR__scalar_deleting_destructor__144cc8420;
      local_190 = 0xffffffff;
      local_1b8 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_18c = 0;
      local_180 = 0;
      local_178 = 0;
      local_170 = 0;
      local_16e = 1;
      local_230 = (byte *)0x0;
      local_228 = 0;
      TMapBase<enum_EConfigFileHierarchy,FIniFilename,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>_>
      ::GetKeys<FDefaultAllocator>(plVar17,&local_230);
      bVar4 = 0;
      for (pbVar11 = local_230; pbVar11 != local_230 + (int)local_228; pbVar11 = pbVar11 + 1) {
        bVar14 = *pbVar11;
        if (*pbVar11 <= bVar4) {
          bVar14 = bVar4;
        }
        bVar4 = bVar14;
      }
      if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
        lVar24 = *(longlong *)(param_1 + 0xa0);
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          lVar24 = param_1 + 0x98;
        }
        iVar8 = *(int *)(lVar24 + ((longlong)*(int *)(param_1 + 0xa8) - 1U & (ulonglong)bVar4) * 4);
        if (iVar8 != -1) {
          do {
            local_280 = (byte *)((longlong)iVar8 * 0x38 + *plVar17);
            if (*local_280 == bVar4) {
              if (iVar8 != -1) goto LAB_1416565de;
              break;
            }
            iVar8 = *(int *)(local_280 + 0x30);
          } while (iVar8 != -1);
        }
      }
      local_280 = pbVar12;
LAB_1416565de:
      local_280 = local_280 + 8;
      local_278 = FConfigFile(local_168);
      TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FConfigFile_&&>_>
                (&local_1c0,&local_270,&local_280,0);
      local_270 = local_1c0 + 0x10 + (longlong)(int)local_270 * 0x130;
      ~FConfigFile(local_168);
      lVar24 = local_270;
      bVar4 = local_288;
      uVar18 = *(uint *)(param_1 + 0x88);
      puVar1 = (uint *)(param_1 + 0x70);
      local_258 = (longlong *)0x100000000;
      uStack_244 = 0;
      uStack_240 = 0;
      if (uVar18 != 0) {
        puVar22 = *(uint **)(param_1 + 0x80);
        if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
          puVar22 = puVar1;
        }
        uVar7 = *puVar22;
        pbVar11 = pbVar12;
        while (uVar7 == 0) {
          iVar8 = (int)pbVar12;
          uStack_240 = (int)pbVar11 + 0x20;
          pbVar11 = (byte *)(ulonglong)uStack_240;
          pbVar12 = (byte *)(ulonglong)(iVar8 + 1U);
          uVar23 = (ulonglong)local_258 >> 0x20;
          local_258 = (longlong *)CONCAT44((int)uVar23,iVar8 + 1U);
          if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
          goto LAB_1416566e1;
          uVar7 = puVar22[(longlong)iVar8 + 1];
        }
        uVar7 = -uVar7 & uVar7;
        iVar8 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        local_258 = (longlong *)CONCAT44(uVar7,SUB84(local_258,0));
        if (uVar7 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_244 = (uStack_240 - iVar8) + 0x1f;
        if ((int)uVar18 < (int)uStack_244) {
LAB_1416566e1:
          uStack_244 = uVar18;
        }
      }
      uVar7 = *(uint *)(param_1 + 0x88);
      uStack_200 = CONCAT44(uStack_244,0xffffffff);
      local_1f8 = CONCAT44(uStack_23c,uStack_240);
      local_248 = -1 << ((byte)uVar7 & 0x1f);
      uStack_1e8 = local_258;
      uVar5 = uStack_1e8;
      uVar21 = uVar7 & 0xffffffe0;
      uStack_1e8._0_4_ = SUB84(local_258,0);
      uStack_1e8._4_4_ = (uint)((ulonglong)local_258 >> 0x20);
      uStack_210 = (undefined4)uStack_1e8;
      uStack_20c = uStack_1e8._4_4_;
      puStack_250 = puVar1;
      uStack_244 = uVar7;
      local_208 = puVar1;
      local_1f0 = plVar17;
      uStack_1e8 = uVar5;
      puStack_1e0 = puVar1;
      uStack_1d8 = uStack_200;
      uStack_1d0 = local_1f8;
      local_218 = plVar17;
      if (uVar7 != uVar18) {
        puVar22 = *(uint **)(param_1 + 0x80);
        if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
          puVar22 = puVar1;
        }
        uVar13 = puVar22[(int)uVar7 >> 5] & local_248;
        iVar8 = (int)uVar7 >> 5;
        while (uVar13 == 0) {
          uVar21 = uVar21 + 0x20;
          if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
          goto LAB_1416567b3;
          uVar13 = puVar22[(longlong)iVar8 + 1];
          local_248 = 0xffffffff;
          iVar8 = iVar8 + 1;
        }
        uVar13 = -uVar13 & uVar13;
        iVar8 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uVar13 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_244 = (uVar21 - iVar8) + 0x1f;
        uVar7 = uStack_244;
        if ((int)uVar18 < (int)uStack_244) {
LAB_1416567b3:
          uStack_244 = uVar18;
          uVar7 = uVar18;
        }
      }
      while( true ) {
        if (((uStack_200._4_4_ == uVar7) && (local_208 == puVar1)) && (local_218 == plVar17)) break;
        if (*(byte *)((longlong)(int)uStack_200._4_4_ * 0x38 + *local_218) < bVar4) {
          Combine(lVar24);
        }
        uStack_200 = CONCAT44(uStack_200._4_4_,(uint)uStack_200 & ~uStack_20c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_210);
      }
      puVar16 = &DAT_143f3eda8;
      local_258 = (longlong *)0x0;
      puStack_250 = (uint *)0x0;
      if (*(int *)(local_280 + 8) == 0) {
        psVar15 = &DAT_143f3eda8;
      }
      else {
        psVar15 = *(short **)local_280;
      }
      local_268 = 0;
      local_270 = 0;
      if ((psVar15 != (short *)0x0) && (*psVar15 != 0)) {
        do {
          lVar19 = lVar19 + 1;
        } while (psVar15[lVar19] != 0);
        uVar18 = (int)lVar19 + 1;
        local_268 = (ulonglong)uVar18;
        if (0 < (int)uVar18) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270,0);
        }
        FGenericPlatformString::Memcpy(local_270,psVar15,(longlong)(int)uVar18 * 2);
      }
      local_298 = (longlong *)CONCAT44(local_298._4_4_,1);
      puVar10 = (undefined8 *)FString::Replace(local_260,&local_280,&DAT_144cc5154,&DAT_144cc5104);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar20 = &DAT_143f3eda8;
      }
      else {
        puVar20 = (undefined2 *)*puVar10;
      }
      if (*(int *)(local_238 + 1) != 0) {
        puVar16 = (undefined2 *)*local_238;
      }
      local_298 = &local_270;
      FConfigCacheIni::GetArray(&local_1c8,puVar16,puVar20,&local_258);
      if (local_280 != (byte *)0x0) {
        FMemory::Free();
      }
      if (local_270 != 0) {
        FMemory::Free();
      }
      uVar5 = local_260;
      uVar23 = (ulonglong)(int)puStack_250;
      plVar25 = local_258 + uVar23 * 2;
      plVar17 = local_258;
      if (local_258 != plVar25) {
        do {
          local_298 = (longlong *)CONCAT44(local_298._4_4_,1);
          FString::Replace(uVar5,&local_280,&DAT_144cc51e4,&DAT_144cc5194);
          puVar10 = (undefined8 *)GenerateExportedPropertyLine(&local_270,&local_280,plVar17);
          local_238 = (undefined8 *)*puVar10;
          iVar8 = *(int *)(puVar10 + 1) + -1;
          if (*(int *)(puVar10 + 1) == 0) {
            iVar8 = 0;
          }
          if (iVar8 != 0) {
            iVar3 = (int)param_4[1];
            iVar9 = (uint)(iVar3 == 0) + iVar3 + iVar8;
            *(int *)(param_4 + 1) = iVar9;
            if (*(int *)((longlong)param_4 + 0xc) < iVar9) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar3);
            }
            pvVar2 = (void *)(*param_4 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
            ::_guard_xfg_dispatch_icall_nop(pvVar2,local_238,(longlong)iVar8 * 2);
            *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar2) = 0;
          }
          if (local_270 != 0) {
            FMemory::Free();
          }
          if (local_280 != (byte *)0x0) {
            FMemory::Free();
          }
          plVar17 = plVar17 + 2;
        } while (plVar17 != plVar25);
        uVar23 = (ulonglong)puStack_250 & 0xffffffff;
      }
      plVar25 = local_258;
      uVar18 = (uint)uVar23;
      plVar17 = local_258;
      while (uVar18 != 0) {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 2;
        uVar18 = (int)uVar23 - 1;
        uVar23 = (ulonglong)uVar18;
      }
      if (plVar25 != (longlong *)0x0) {
        FMemory::Free(plVar25);
      }
      if (local_230 != (byte *)0x0) {
        FMemory::Free();
      }
      local_280 = (byte *)0x0;
      local_1c8 = &PTR__scalar_deleting_destructor__144cc8420;
      local_278 = 0;
      FConfigCacheIni::Flush(&local_1c8,1,&local_280);
      local_178 = 0;
      if (local_180 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FConfigFile>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(&local_1c0,0);
      if (local_1a0 != 0) {
        FMemory::Free();
      }
      param_3 = local_220;
      if (local_1c0 != 0) {
        FMemory::Free();
        param_3 = local_220;
      }
    }
  }
  lVar19 = *param_3;
  lVar24 = (longlong)(int)param_3[1] * 0x20 + lVar19;
  for (; lVar19 != lVar24; lVar19 = lVar19 + 0x20) {
    puVar10 = (undefined8 *)GenerateExportedPropertyLine(&local_280,local_260,lVar19);
    pvVar2 = (void *)*puVar10;
    iVar8 = *(int *)(puVar10 + 1) + -1;
    if (*(int *)(puVar10 + 1) == 0) {
      iVar8 = 0;
    }
    if (iVar8 != 0) {
      iVar3 = (int)param_4[1];
      iVar9 = (uint)(iVar3 == 0) + iVar3 + iVar8;
      *(int *)(param_4 + 1) = iVar9;
      if (*(int *)((longlong)param_4 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar3);
      }
      _Dst = (void *)(*param_4 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar8 * 2);
      *(undefined2 *)((longlong)iVar8 * 2 + (longlong)_Dst) = 0;
    }
    if (local_280 != (byte *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141656ba0 FUN_141656ba0 body=77 status=ok
// SIG undefined FUN_141656ba0(void)

void FUN_141656ba0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_3 + 8);
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



// FUNCTION 141656bf0 ProjectAgnosticIniPath body=480 status=ok
// SIG undefined ProjectAgnosticIniPath(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * ProjectAgnosticIniPath(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178 [2];
  undefined1 local_168 [256];
  longlong local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,"WindowsNoEditor");
  plVar3 = (longlong *)FPaths::GameAgnosticSavedDir(local_178);
  lVar1 = plVar3[1];
  local_198 = *plVar3;
  *plVar3 = 0;
  local_190._0_4_ = (int)plVar3[1];
  local_190._4_4_ = *(int *)((longlong)plVar3 + 0xc);
  plVar3[1] = 0;
  if (local_190._4_4_ < (int)((8 - (uint)((int)lVar1 != 0)) + (int)local_190)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198);
  }
  FString::PathAppend(&local_198,L"Config",6);
  iVar2 = local_190._4_4_;
  uVar6 = 0xffffffffffffffff;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(short *)(local_60 + uVar6 * 2) != 0);
  iVar7 = 2;
  if (((int)local_190 != 0) || (iVar4 = 2, (int)uVar5 == -2)) {
    iVar4 = 1;
  }
  iVar4 = iVar4 + (int)local_190;
  local_188 = local_198;
  local_198 = 0;
  local_180._0_4_ = (int)local_190;
  local_180._4_4_ = local_190._4_4_;
  local_190 = 0;
  if (iVar2 < iVar4 + (int)uVar6) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_188);
  }
  FString::PathAppend(&local_188,local_60,uVar6 & 0xffffffff);
  iVar2 = local_180._4_4_;
  uVar6 = 0xffffffffffffffff;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(short *)(param_2 + uVar6 * 2) != 0);
  if (((int)local_180 != 0) || ((int)uVar5 == -2)) {
    iVar7 = 1;
  }
  iVar7 = iVar7 + (int)local_180;
  *param_1 = local_188;
  local_188 = 0;
  *(int *)(param_1 + 1) = (int)local_180;
  *(int *)((longlong)param_1 + 0xc) = local_180._4_4_;
  local_180 = 0;
  if (iVar2 < iVar7 + (int)uVar6) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1);
  }
  FString::PathAppend(param_1,param_2,uVar6 & 0xffffffff);
  if (local_188 != 0) {
    FMemory::Free();
  }
  if (local_198 != 0) {
    FMemory::Free();
  }
  if (local_178[0] != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141656dd0 ProjectSpecificIniPath body=394 status=ok
// SIG undefined ProjectSpecificIniPath(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * ProjectSpecificIniPath(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined8 local_170;
  longlong local_168 [2];
  undefined1 local_158 [256];
  longlong local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,"WindowsNoEditor");
  plVar1 = (longlong *)FPaths::GeneratedConfigDir(local_168);
  uVar4 = 0xffffffffffffffff;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (*(short *)(local_50 + uVar4 * 2) != 0);
  iVar5 = 2;
  if (((int)plVar1[1] != 0) || (iVar2 = 2, (int)uVar3 == -2)) {
    iVar2 = 1;
  }
  local_178 = *plVar1;
  *plVar1 = 0;
  local_170._0_4_ = (int)plVar1[1];
  local_170._4_4_ = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  if (local_170._4_4_ < iVar2 + (int)local_170 + (int)uVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_178);
  }
  FString::PathAppend(&local_178,local_50,uVar4 & 0xffffffff);
  iVar2 = local_170._4_4_;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (*(short *)(param_2 + uVar4 * 2) != 0);
  if (((int)local_170 != 0) || ((int)uVar3 == -2)) {
    iVar5 = 1;
  }
  iVar5 = iVar5 + (int)local_170;
  *param_1 = local_178;
  local_178 = 0;
  *(int *)(param_1 + 1) = (int)local_170;
  *(int *)((longlong)param_1 + 0xc) = local_170._4_4_;
  local_170 = 0;
  if (iVar2 < iVar5 + (int)uVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1);
  }
  FString::PathAppend(param_1,param_2,uVar4 & 0xffffffff);
  if (local_178 != 0) {
    FMemory::Free();
  }
  if (local_168[0] != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141656f60 Read body=130 status=ok
// SIG undefined Read(void)

void FConfigFile::Read(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  if ((DAT_1468b6148 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*DAT_1468b6148 + 0x18))(), cVar1 != '\0')) {
    return;
  }
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::Empty(param_1,0);
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  cVar1 = LoadConfigFileWrapper(puVar2,local_18);
  if (cVar1 != '\0') {
    ProcessInputFileContents(param_1,local_18);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141656ff0 RegisterAutomationTest body=110 status=ok
// SIG undefined RegisterAutomationTest(void)

bool FAutomationTestFramework::RegisterAutomationTest
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  undefined8 local_res18;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_res18 = param_3;
  piVar2 = (int *)TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0x118,local_res8,param_2);
  iVar1 = *piVar2;
  if (iVar1 == -1) {
    local_10 = &local_res18;
    local_18 = param_2;
    FUN_14056b880(param_1 + 0x118,local_res8,&local_18,0);
  }
  return iVar1 == -1;
}



// FUNCTION 141657060 FUN_141657060 body=319 status=ok
// SIG undefined FUN_141657060(void)

void FUN_141657060(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e2798) {
    _Init_thread_header(&DAT_1468e2798);
    if (DAT_1468e2798 == -1) {
      DAT_1468e2788 = (longlong *)0x0;
      DAT_1468e2790 = 0;
      atexit(FUN_143e79ff0);
      _Init_thread_footer(&DAT_1468e2798);
    }
  }
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar1 == (longlong *)0x0) {
    if ((DAT_1468e2790 != 0) && (DAT_1468e2788 != (longlong *)0x0)) {
      (**(code **)(*DAT_1468e2788 + 0x28))(DAT_1468e2788,0);
      if (DAT_1468e2788 != (longlong *)0x0) {
        DAT_1468e2788 = (longlong *)FMemory::Realloc(DAT_1468e2788,0,0);
      }
      DAT_1468e2790 = 0;
    }
  }
  else {
    plVar1[1] = param_1;
    *plVar1 = (longlong)&PTR_GetPoolName_144cc8840;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_144cc8888;
    FUN_141645850(plVar1,&DAT_1468e2788);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    lVar2 = FMemory::Realloc(plVar1,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  return;
}



// FUNCTION 1416571a0 Rehash body=543 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_1416572cf;
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
LAB_1416572cf:
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
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0x68 + *param_1);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        uVar5 = FUN_140438070(puVar9);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar11 + 100) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0xc) =
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



// FUNCTION 1416573c0 FUN_1416573c0 body=552 status=ok
// SIG undefined FUN_1416573c0(void)

void FUN_1416573c0(longlong *param_1)

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
        if (bVar4) goto LAB_1416574ef;
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
LAB_1416574ef:
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
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0x88 + *param_1);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        uVar5 = FUN_140438070(puVar9);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar11 + 0x84) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0x10) =
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



// FUNCTION 1416575f0 Rehash body=552 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_14165771f;
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
LAB_14165771f:
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
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0x130 + *param_1);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        uVar5 = FUN_140438070(puVar9);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar11 + 300) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0x25) =
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



// FUNCTION 141657820 Rehash body=517 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<enum_EConfigFileHierarchy,FIniFilename>,TDefaultMapHashableKeyFuncs<enum_EConfigFileHierarchy,FIniFilename,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iStack_44;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar4 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar4 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar4) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar4;
      do {
        uVar8 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar8 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    iVar10 = 0;
    iStack_44 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      uVar4 = *puVar13;
      iVar5 = 0;
      while (uVar4 == 0) {
        iVar10 = iVar10 + 0x20;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14165795f;
        uVar4 = puVar13[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_44 = (iVar10 - iVar5) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_14165795f:
        iStack_44 = iVar3;
      }
    }
    while (iStack_44 < iVar3) {
      pbVar9 = (byte *)((longlong)iStack_44 * 0x38 + *param_1);
      uVar4 = (int)*plVar2 - 1U & (uint)*pbVar9;
      *(uint *)(pbVar9 + 0x34) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(pbVar9 + 0x30) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar4) * 4) = iStack_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
      iVar3 = (int)param_1[5];
    }
  }
  return;
}



// FUNCTION 141657a30 Remove body=195 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar2 + 0x2c + lVar6 * 0x30));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar2 + 0x28 + lVar6 * 0x30);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x28 + (longlong)iVar1 * 0x30);
      iVar1 = *piVar5;
    }
  }
  lVar6 = lVar6 * 0x30 + *param_1;
  if (*(longlong *)(lVar6 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(lVar6 + 8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 141657b00 Remove body=414 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  uVar2 = FUN_140438070(puVar7);
  lVar6 = (longlong)(int)((int)param_1[9] - 1U & uVar2);
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  piVar8 = (int *)((longlong)plVar10 + lVar6 * 4);
  iVar3 = *(int *)((longlong)plVar10 + lVar6 * 4);
  while( true ) {
    if (iVar3 == -1) {
      return 0;
    }
    puVar9 = (undefined8 *)((longlong)iVar3 * 0x130 + *param_1);
    if (*(int *)(param_2 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar9 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar9;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar7);
    if (iVar3 == 0) break;
    piVar8 = (int *)(puVar9 + 0x25);
    iVar3 = *piVar8;
  }
  iVar3 = *piVar8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar11 = (longlong)iVar3 * 0x130;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar11 + 300 + lVar6));
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    piVar8 = (int *)((longlong)plVar10 + lVar5 * 4);
    iVar1 = *(int *)((longlong)plVar10 + lVar5 * 4);
    while (iVar1 != -1) {
      if (iVar1 == iVar3) {
        *piVar8 = *(int *)(lVar11 + 0x128 + lVar6);
        break;
      }
      piVar8 = (int *)(lVar6 + 0x128 + (longlong)iVar1 * 0x130);
      iVar1 = *piVar8;
    }
  }
  plVar10 = (longlong *)((longlong)iVar3 * 0x130 + *param_1);
  FConfigFile::~FConfigFile(plVar10 + 2);
  if (*plVar10 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FConfigFile>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar3,1);
  return 1;
}



// FUNCTION 141657ca0 Remove body=414 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  uVar2 = FUN_140438070(puVar7);
  lVar6 = (longlong)(int)((int)param_1[9] - 1U & uVar2);
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  piVar8 = (int *)((longlong)plVar10 + lVar6 * 4);
  iVar3 = *(int *)((longlong)plVar10 + lVar6 * 4);
  while( true ) {
    if (iVar3 == -1) {
      return 0;
    }
    puVar9 = (undefined8 *)((longlong)iVar3 * 0xb8 + *param_1);
    if (*(int *)(param_2 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar9 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar9;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar7);
    if (iVar3 == 0) break;
    piVar8 = (int *)(puVar9 + 0x16);
    iVar3 = *piVar8;
  }
  iVar3 = *piVar8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar11 = (longlong)iVar3 * 0xb8;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar11 + 0xb4 + lVar6));
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    piVar8 = (int *)((longlong)plVar10 + lVar5 * 4);
    iVar1 = *(int *)((longlong)plVar10 + lVar5 * 4);
    while (iVar1 != -1) {
      if (iVar1 == iVar3) {
        *piVar8 = *(int *)(lVar11 + 0xb0 + lVar6);
        break;
      }
      piVar8 = (int *)(lVar6 + 0xb0 + (longlong)iVar1 * 0xb8);
      iVar1 = *piVar8;
    }
  }
  plVar10 = (longlong *)((longlong)iVar3 * 0xb8 + *param_1);
  FConfigSection::~FConfigSection(plVar10 + 2);
  if (*plVar10 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar3,1);
  return 1;
}



// FUNCTION 141657e40 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FString,FConfigFile>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0x130;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x130 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0x130;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141657f00 RemoveExeName body=126 status=ok
// SIG undefined RemoveExeName(void)

short * FCommandLine::RemoveExeName(short *param_1)

{
  short *psVar1;
  short sVar2;
  
  sVar2 = *param_1;
  if (sVar2 == 0x22) {
    sVar2 = param_1[1];
    param_1 = param_1 + 1;
    if (sVar2 == 0) goto LAB_141657f63;
    do {
      if (sVar2 == 0x22) break;
      sVar2 = param_1[1];
      param_1 = param_1 + 1;
    } while (sVar2 != 0);
    if (sVar2 == 0) goto LAB_141657f63;
    sVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
  while (sVar2 != 0) {
    if (sVar2 == 0x20) goto LAB_141657f70;
    psVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    sVar2 = *psVar1;
  }
LAB_141657f63:
  sVar2 = 0;
  while (sVar2 == 0x20) {
LAB_141657f70:
    param_1 = param_1 + 1;
    sVar2 = *param_1;
  }
  return param_1;
}



// FUNCTION 141657f80 RemoveSingle body=367 status=ok
// SIG undefined RemoveSingle(void)

undefined8
TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::RemoveSingle(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  short *psVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  
  TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] != 0) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    iVar7 = iVar4;
    if (iVar4 != -1) {
      do {
        iVar4 = *(int *)(*param_1 + 0x28 + (longlong)iVar7 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x30) == param_2) break;
        iVar7 = iVar4;
      } while (iVar4 != -1);
    }
    if (iVar7 != -1) {
      lVar3 = *param_1;
      do {
        if (*(int *)(param_3 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar3 + 0x10 + (longlong)iVar7 * 0x30) == 0) {
          psVar6 = &DAT_143f3eda8;
        }
        else {
          psVar6 = *(short **)(lVar3 + 8 + (longlong)iVar7 * 0x30);
        }
        lVar9 = (longlong)puVar8 - (longlong)psVar6;
        do {
          sVar1 = *psVar6;
          sVar2 = *(short *)((longlong)psVar6 + lVar9);
          if (sVar1 != sVar2) break;
          psVar6 = psVar6 + 1;
        } while (sVar2 != 0);
        if (sVar1 == sVar2) {
          TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
          ::Remove(param_1);
          return 1;
        }
        iVar7 = iVar4;
        if (iVar4 == -1) {
          return 0;
        }
        do {
          iVar4 = *(int *)(lVar3 + 0x28 + (longlong)iVar7 * 0x30);
          if (*(longlong *)(lVar3 + (longlong)iVar7 * 0x30) == param_2) break;
          iVar7 = iVar4;
        } while (iVar4 != -1);
        if (iVar7 == -1) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 1416580f0 RemoveWhitespaces body=303 status=ok
// SIG undefined RemoveWhitespaces(void)

longlong * FDefaultValueHelper::RemoveWhitespaces(longlong *param_1,longlong *param_2)

{
  wint_t _C;
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = (int)param_2[1];
  if (1 < iVar2) {
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    uVar4 = uVar3;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    }
    while( true ) {
      iVar2 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar2 = 0;
      }
      if (iVar2 <= (int)uVar3) break;
      _C = *(wint_t *)(uVar4 + *param_2);
      iVar2 = iswspace(_C);
      if ((((iVar2 == 0) && (3 < (ushort)(_C - 10))) && (_C != 0x85)) &&
         ((1 < (ushort)(_C + 0xdfd8) && (sVar1 = *(short *)(uVar4 + *param_2), sVar1 != 0)))) {
        iVar2 = (int)param_1[1];
        iVar5 = iVar2 + -1;
        if (iVar2 < 1) {
          iVar5 = 0;
        }
        iVar2 = (iVar2 < 1) + 1 + iVar2;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
        }
        *(short *)(*param_1 + (longlong)iVar5 * 2) = sVar1;
        *(undefined2 *)(*param_1 + 2 + (longlong)iVar5 * 2) = 0;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar4 = uVar4 + 2;
    }
  }
  return param_1;
}



// FUNCTION 141658220 FUN_141658220 body=396 status=ok
// SIG undefined FUN_141658220(void)

void FUN_141658220(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if ((undefined *)*param_1 != &DAT_144cc326c) {
    *(undefined4 *)(param_1 + 1) = 0;
    iVar1 = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
      iVar1 = *(int *)(param_1 + 1);
    }
    *(int *)(param_1 + 1) = iVar1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
    }
  }
  if ((undefined *)param_1[2] != &DAT_144cc3284) {
    *(undefined4 *)(param_1 + 3) = 0;
    iVar1 = iVar2;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 2);
      iVar1 = *(int *)(param_1 + 3);
    }
    *(int *)(param_1 + 3) = iVar1;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 2);
    }
  }
  if ((undefined *)param_1[4] != &DAT_144cc3574) {
    *(undefined4 *)(param_1 + 5) = 0;
    iVar1 = iVar2;
    if (*(int *)((longlong)param_1 + 0x2c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4);
      iVar1 = *(int *)(param_1 + 5);
    }
    *(int *)(param_1 + 5) = iVar1;
    if (*(int *)((longlong)param_1 + 0x2c) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 4);
    }
  }
  if ((undefined *)param_1[6] != &DAT_144cc363c) {
    *(undefined4 *)(param_1 + 7) = 0;
    iVar1 = iVar2;
    if (*(int *)((longlong)param_1 + 0x3c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6);
      iVar1 = *(int *)(param_1 + 7);
    }
    *(int *)(param_1 + 7) = iVar1;
    if (*(int *)((longlong)param_1 + 0x3c) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 6);
    }
  }
  if ((undefined *)param_1[8] != &DAT_144cc38f4) {
    *(undefined4 *)(param_1 + 9) = 0;
    iVar1 = iVar2;
    if (*(int *)((longlong)param_1 + 0x4c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8);
      iVar1 = *(int *)(param_1 + 9);
    }
    *(int *)(param_1 + 9) = iVar1;
    if (*(int *)((longlong)param_1 + 0x4c) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 8);
    }
  }
  if ((undefined *)param_1[0xb] != &DAT_144cc39b4) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar2;
    if (*(int *)((longlong)param_1 + 100) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb);
    }
  }
  if ((undefined *)param_1[0xd] != &DAT_144cc3a7c) {
    *(undefined4 *)(param_1 + 0xe) = 0;
    if (*(int *)((longlong)param_1 + 0x74) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd,0);
      iVar3 = *(int *)(param_1 + 0xe);
    }
    *(int *)(param_1 + 0xe) = iVar3;
    if (*(int *)((longlong)param_1 + 0x74) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xd,iVar3);
    }
  }
  return;
}



// FUNCTION 1416583b0 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<ATTLENBossSnak01Pawn::TTLENBossSnakJoint,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x130,0);
  iVar4 = (int)(uVar3 / 0x130);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x130,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141658440 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<304,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x130,0);
    iVar3 = (int)(uVar1 / 0x130);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x130,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1416584c0 FUN_1416584c0 body=1117 status=ok
// SIG undefined FUN_1416584c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1416584c0(longlong param_1)

{
  int *piVar1;
  void *_Src;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  longlong local_1f8;
  ulonglong local_1f0;
  int local_1e8;
  undefined4 local_1e4;
  void *local_1e0;
  uint local_1d8;
  undefined4 local_1d4;
  void **local_1d0;
  undefined1 *local_1c8;
  undefined1 local_1c0 [8];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  LARGE_INTEGER local_150;
  LARGE_INTEGER local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [32];
  longlong local_108 [4];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  longlong *local_98;
  undefined1 local_6c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  uVar10 = *(undefined4 *)(param_1 + 400);
  bVar2 = true;
  *(undefined4 *)(param_1 + 400) = 0x1000000;
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    *(undefined4 *)(param_1 + 400) = uVar10;
  }
  else {
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e4 = uVar10;
    FUN_14164ea20(param_1,&local_1f8);
    if (0 < (int)local_1f0) {
      QueryPerformanceCounter(&local_150);
      uVar3 = DAT_1468b6160;
      local_108[0] = 0;
      local_d8 = 0xffffffff;
      local_108[1] = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      FText::FText(local_140);
      local_208 = uVar3;
      FUN_141660a80(local_b8);
      FSlowTask::Initialize(local_b8);
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_138 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar1 = (int *)((longlong)local_138 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_138 + 8))(local_138,1);
          }
        }
      }
      lVar5 = FUN_141649d10();
      *(undefined1 *)(lVar5 + 0x1d9) = 0;
      if (0 < (int)local_1f0) {
        puVar8 = (uint *)(local_1f8 + 0x78);
        uVar9 = local_1f0 & 0xffffffff;
        do {
          FText::FText(local_128);
          FSlowTask::EnterProgressFrame(local_b8);
          if ((*puVar8 & 0x1000000) != 0) {
            local_1e0 = (void *)0x0;
            local_1d8 = puVar8[-0x14];
            lVar5 = (longlong)(int)local_1d8;
            _Src = *(void **)(puVar8 + -0x16);
            if (local_1d8 == 0) {
              local_1d4 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1e0,local_1d8,0);
              _guard_xfg_dispatch_icall_nop(local_1e0,_Src,lVar5 * 2);
            }
            local_1b8 = 0;
            local_1a0 = 0;
            local_188 = 0;
            local_170 = 0;
            local_160 = 0;
            local_1d0 = &local_1e0;
            local_1c0[0] = 0;
            local_1c8 = local_1c0;
            local_1b0 = 0;
            local_1a8 = 0;
            local_198 = 0;
            uStack_190 = 0;
            local_180 = 0;
            local_178 = 0;
            local_168 = 0;
            local_158 = 0;
            FUN_14163db70(local_108,&local_1e8,&local_1d0,0);
            lVar5 = local_108[0];
            FUN_140640190(local_1c0);
            FUN_14165a400(param_1,&local_1e0,0);
            cVar4 = FUN_14165aa60(param_1,lVar5 + 0x10 + (longlong)local_1e8 * 0x88);
            if ((bVar2) && (cVar4 != '\0')) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (local_1e0 != (void *)0x0) {
              FMemory::Free();
            }
          }
          puVar8 = puVar8 + 0x22;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      lVar5 = FUN_141649d10();
      *(undefined1 *)(lVar5 + 0x1d9) = 1;
      QueryPerformanceCounter(&local_148);
      FAutomationTestFramework::DumpAutomationTestExecutionInfo(param_1,local_108);
      FUN_14166a2b0(local_b8);
      local_6c = 0;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_98 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)local_98 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_b0 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
      local_c0 = 0;
      if (local_c8 != 0) {
        FMemory::Free();
      }
      FUN_1416402e0(local_108);
      uVar10 = local_1e4;
    }
    if ((int)local_1f0 != 0) {
      plVar6 = (longlong *)(local_1f8 + 0x58);
      iVar7 = (int)local_1f0;
      do {
        if (plVar6[2] != 0) {
          FMemory::Free();
        }
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        if (plVar6[-3] != 0) {
          FMemory::Free();
        }
        if (plVar6[-5] != 0) {
          FMemory::Free();
        }
        if (plVar6[-7] != 0) {
          FMemory::Free();
        }
        if (plVar6[-9] != 0) {
          FMemory::Free();
        }
        if (plVar6[-0xb] != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 0x11;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (local_1f8 != 0) {
      FMemory::Free();
    }
    *(undefined4 *)(param_1 + 400) = uVar10;
  }
  return bVar2;
}



// FUNCTION 141658920 SaveConfigFileWrapper body=406 status=ok
// SIG undefined SaveConfigFileWrapper(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 SaveConfigFileWrapper(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res18 [4];
  
  DAT_1464af2f4 = DAT_1464af2f4 + 1;
  bVar2 = false;
  local_res18[0] = 0;
  lVar8 = (longlong)(DAT_1464af2e8 + -1);
  if (-1 < DAT_1464af2e8 + -1) {
    lVar7 = lVar8 << 4;
    bVar2 = false;
    do {
      if (((*(int *)(lVar7 + 8 + DAT_1464af2e0) == 0) ||
          (plVar1 = *(longlong **)(lVar7 + DAT_1464af2e0), plVar1 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1,param_2,local_res18), cVar4 == '\0'))
      {
        bVar2 = true;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  iVar3 = DAT_1464af2e8;
  DAT_1464af2f4 = DAT_1464af2f4 + -1;
  if ((bVar2) && (DAT_1464af2f4 < 1)) {
    iVar6 = 0;
    if (0 < DAT_1464af2e8) {
      lVar8 = 0;
      do {
        if (((*(int *)(lVar8 + 8 + DAT_1464af2e0) == 0) ||
            (*(longlong **)(lVar8 + DAT_1464af2e0) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar8 + DAT_1464af2e0) + 0x10))(), cVar4 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af2e0,iVar6,1,1);
        }
        else {
          iVar6 = iVar6 + 1;
          lVar8 = lVar8 + 0x10;
        }
      } while (iVar6 < DAT_1464af2e8);
    }
    _DAT_1464af2f0 = DAT_1464af2e8 * 2;
    if (_DAT_1464af2f0 < 3) {
      _DAT_1464af2f0 = 2;
    }
    if ((_DAT_1464af2f0 < iVar3) && (DAT_1464af2ec != DAT_1464af2e8)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af2e0);
    }
  }
  uVar5 = FUN_1415c3d50();
  cVar4 = FUN_14167efa0(param_2,param_1,0,uVar5,0);
  if ((local_res18[0] < 1) && (cVar4 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 141658ac0 FUN_141658ac0 body=946 status=ok
// SIG undefined FUN_141658ac0(void)

void FUN_141658ac0(longlong param_1,short *param_2,char param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  if ((DAT_1468b616c == '\0') && (param_3 == '@')) {
    return;
  }
  if (DAT_1468c217e != '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  puVar8 = (undefined2 *)0x0;
  lVar10 = -1;
  lVar14 = lVar10;
  if (param_3 == '\x03') {
    local_48 = (undefined2 *)0x0;
    local_40 = 0;
    if (*(char *)(param_1 + 0x10) == '\0') {
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        do {
          lVar14 = lVar14 + 1;
        } while (param_2[lVar14] != 0);
        uVar12 = (int)lVar14 + 1;
        local_40 = (ulonglong)uVar12;
        if (0 < (int)uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        }
        FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar12 * 2);
      }
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                (*(longlong **)(param_1 + 0x80),&local_48,5);
    }
    else {
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        do {
          lVar14 = lVar14 + 1;
        } while (param_2[lVar14] != 0);
LAB_141658b4a:
        local_48 = (undefined2 *)0x0;
        uVar12 = (int)lVar14 + 1;
        local_40 = (ulonglong)uVar12;
        if (0 < (int)uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        }
        FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar12 * 2);
      }
LAB_141658b73:
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x18))
                (*(longlong **)(param_1 + 0x80),&local_48,5);
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (param_3 == '\x02') {
      local_40 = 0;
      local_48 = (undefined2 *)0x0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        do {
          lVar14 = lVar14 + 1;
        } while (param_2[lVar14] != 0);
        goto LAB_141658b4a;
      }
      goto LAB_141658b73;
    }
    if (param_3 == '\x04') {
      local_48 = (undefined2 *)0x0;
      local_40 = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        do {
          lVar10 = lVar10 + 1;
        } while (param_2[lVar10] != 0);
        uVar12 = (int)lVar10 + 1;
        local_40 = (ulonglong)uVar12;
        if (0 < (int)uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        }
        FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar12 * 2);
      }
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x38))
                (*(longlong **)(param_1 + 0x80),&local_48,5);
      goto LAB_141658e4c;
    }
  }
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  if ((param_2 != (short *)0x0) && (lVar14 = lVar10, *param_2 != 0)) {
    do {
      lVar14 = lVar14 + 1;
    } while (param_2[lVar14] != 0);
    uVar12 = (int)lVar14 + 1;
    local_40 = (ulonglong)uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar12 * 2);
  }
  local_38 = (undefined2 *)0x0;
  local_30 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  puVar2 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"AUTOMATIONANALYTICS",0x28);
  iVar3 = (uint)local_30;
  puVar15 = &DAT_143f3eda8;
  puVar7 = &DAT_143f3eda8;
  if ((uint)local_30 != 0) {
    puVar7 = puVar2;
  }
  cVar4 = FString::StartsWith(&local_48,puVar7,1);
  if (cVar4 != '\0') {
    iVar6 = (int)local_40 + -1;
    if ((int)local_40 == 0) {
      iVar6 = 0;
    }
    uVar13 = 0;
    uVar12 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar12 = uVar13;
    }
    uVar9 = (iVar6 - uVar12) - 1;
    puVar7 = puVar8;
    if ((int)local_40 != 0) {
      puVar7 = (undefined2 *)(ulonglong)((int)local_40 - 1);
      puVar15 = local_48;
    }
    uVar11 = (uint)puVar7;
    uVar5 = uVar13;
    if ((-1 < (int)uVar9) && (uVar5 = uVar11, (int)(iVar6 - uVar12) <= (int)uVar11)) {
      uVar5 = uVar9;
    }
    local_38 = (undefined2 *)0x0;
    local_30 = local_30 & 0xffffffff;
    psVar1 = puVar15 + ((longlong)(int)uVar11 - (longlong)(int)uVar5);
    uVar12 = uVar13;
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      do {
        lVar10 = lVar10 + 1;
      } while (psVar1[lVar10] != 0);
      uVar9 = (int)lVar10 + 1;
      local_30 = (ulonglong)uVar9;
      uVar13 = uVar9;
      uVar12 = 0;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        uVar13 = (uint)local_30;
        uVar12 = local_30._4_4_;
      }
      puVar8 = local_38;
      FGenericPlatformString::Memcpy(local_38,psVar1,(longlong)(int)uVar9 * 2);
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free(local_48);
    }
    local_40 = CONCAT44(uVar12,uVar13);
    local_48 = puVar8;
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x48))(*(longlong **)(param_1 + 0x80),&local_48);
  }
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free(puVar2);
  }
LAB_141658e4c:
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141658e80 Serialize body=249 status=ok
// SIG undefined Serialize(void)

void FBufferedOutputDevice::Serialize
               (longlong param_1,short *param_2,byte param_3,undefined8 *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_3 <= *(byte *)(param_1 + 0x20)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
    BVar2 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar2 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar3 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar3 + 1;
    if (*(int *)(param_1 + 0x1c) < iVar3 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar3);
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x28);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (param_2[lVar4] != 0);
        iVar3 = (int)lVar4 + 1;
        *(int *)(puVar1 + 1) = iVar3;
        if (0 < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1,0);
        }
        FGenericPlatformString::Memcpy(*puVar1,param_2,(longlong)iVar3 * 2);
      }
      puVar1[2] = *param_4;
      puVar1[3] = 0xbff0000000000000;
      *(byte *)(puVar1 + 4) = param_3;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 141658f80 FUN_141658f80 body=25 status=ok
// SIG undefined FUN_141658f80(void)

undefined8 FUN_141658f80(undefined8 param_1,undefined8 param_2)

{
  FUN_1404c11e0(param_2,param_1);
  return 1;
}



// FUNCTION 141658fa0 FUN_141658fa0 body=1015 status=ok
// SIG undefined FUN_141658fa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141658fa0(wchar_t *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  wchar_t wVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  uint uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined1 auStack_138 [32];
  undefined2 *local_118;
  longlong local_108;
  ulonglong local_100;
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [16];
  undefined1 local_70 [24];
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (DAT_1468c21f6 == '\0') {
    wcsncpy((wchar_t *)&DAT_1468ca210,param_1,0x3fff);
    _DAT_1468d220e = 0;
    wcsncpy((wchar_t *)&DAT_1468da210,param_1,0x3fff);
    _DAT_1468e220e = 0;
  }
  wcsncpy((wchar_t *)&DAT_1468c2210,param_1,0x3fff);
  _DAT_1468ca20e = 0;
  wcsncpy((wchar_t *)&DAT_1468d2210,param_1,0x3fff);
  _DAT_1468da20e = 0;
  DAT_1468c21f6 = 1;
  wVar4 = *param_1;
  pwVar9 = param_1;
  while( true ) {
    if (wVar4 == L'\0') {
      DAT_1468c21f6 = 1;
      _DAT_1468da20e = 0;
      return 1;
    }
    pwVar9 = pwVar9 + 1;
    if (wVar4 == L'–') break;
    wVar4 = *pwVar9;
  }
  local_108 = 0;
  local_100 = 0;
  if (*param_1 != L'\0') {
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (param_1[lVar11] != L'\0');
    uVar10 = (int)lVar11 + 1;
    local_100 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    }
    FGenericPlatformString::Memcpy(local_108,param_1,(longlong)(int)uVar10 * 2);
  }
  lVar11 = FText::FromString(local_70,&local_108);
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_98,
                     L"Error: Command-line contains an invalid \'-\' character, likely pasted from an email.\nCmdline = {0}"
                     ,L"Engine",L"ComdLineHasInvalidChar");
  puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_80,uVar7);
  local_58[0] = 4;
  FText::FText(local_48,lVar11);
  local_e8 = *puVar8;
  local_f8 = local_58;
  puStack_f0 = local_28;
  local_e0 = puVar8[1];
  local_30 = '\x01';
  if (local_e0 != 0) {
    LOCK();
    *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
    UNLOCK();
  }
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_c0,&local_f8);
  uVar7 = FText::Format(local_b0,&local_e8,uVar7);
  FText::FText(local_d8,uVar7);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_a8 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_c0);
  if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar5 = (longlong *)puVar8[1];
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
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar11 + 8);
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
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_90 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  puVar8 = (undefined8 *)FText::ToString(local_d8);
  local_118 = &DAT_143f3eda8;
  if (*(int *)(puVar8 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*puVar8;
  }
  LowLevelFatalErrorHandler("Unknown",0x52,&DAT_144cc2e44,puVar12);
  puVar8 = (undefined8 *)FText::ToString(local_d8);
  if (*(int *)(puVar8 + 1) != 0) {
    local_118 = (undefined2 *)*puVar8;
  }
  FDebug::AssertFailed(&DAT_144cc26eb,"Unknown",0x52,&DAT_144cc2e58);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_d0 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return 1;
}



// FUNCTION 1416593a0 SetBool body=29 status=ok
// SIG undefined SetBool(void)

void FConfigCacheIni::SetBool(void)

{
  SetString();
  return;
}



// FUNCTION 1416593c0 SetEmitDrawEvents body=16 status=ok
// SIG undefined SetEmitDrawEvents(void)

void SetEmitDrawEvents(byte param_1)

{
  DAT_1468e2228 = param_1;
  DAT_1468e2229 = param_1 ^ 1;
  return;
}



// FUNCTION 1416593d0 SetFile body=41 status=ok
// SIG undefined SetFile(void)

void FConfigCacheIni::SetFile(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FConfigFile_&&>_>(param_1 + 8,local_res8,&local_18,0);
  return;
}



// FUNCTION 141659400 SetFloat body=165 status=ok
// SIG undefined SetFloat(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FConfigCacheIni::SetFloat
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
               undefined8 param_5)

{
  undefined1 auStack_878 [32];
  undefined8 local_858;
  undefined1 local_848 [2048];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_878;
  ::_guard_xfg_dispatch_icall_nop(local_848,0,0x800);
  TCString<wchar_t>::SprintfImpl(local_848,&DAT_144cc323c,(double)param_4);
  local_858 = param_5;
  SetString(param_1,param_2,param_3,local_848);
  return;
}



// FUNCTION 1416594b0 SetInt body=144 status=ok
// SIG undefined SetInt(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FConfigCacheIni::SetInt
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined1 auStack_868 [32];
  undefined8 local_848;
  undefined1 local_838 [2048];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_868;
  ::_guard_xfg_dispatch_icall_nop(local_838,0,0x800);
  TCString<wchar_t>::SprintfImpl(local_838,&DAT_144cc3230,param_4);
  local_848 = param_5;
  SetString(param_1,param_2,param_3,local_838);
  return;
}



// FUNCTION 141659540 FUN_141659540 body=135 status=ok
// SIG undefined FUN_141659540(void)

void FUN_141659540(longlong *param_1)

{
  if ((longlong **)param_1 != &DAT_1468e2500) {
    if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_1 + 0x30))();
      TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1);
      return;
    }
    if ((DAT_1468e2508 != 0) && (DAT_1468e2500 != (longlong *)0x0)) {
      (**(code **)(*DAT_1468e2500 + 0x28))(DAT_1468e2500,0);
      if (DAT_1468e2500 != (longlong *)0x0) {
        DAT_1468e2500 = (longlong *)FMemory::Realloc(DAT_1468e2500,0,0);
      }
      DAT_1468e2508 = 0;
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1);
  return;
}



// FUNCTION 1416595d0 FUN_1416595d0 body=7 status=ok
// SIG undefined FUN_1416595d0(void)

void FUN_1416595d0(undefined1 param_1)

{
  DAT_1468e222b = param_1;
  return;
}



// FUNCTION 1416595e0 FUN_1416595e0 body=452 status=ok
// SIG undefined FUN_1416595e0(void)

void FUN_1416595e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *local_60;
  uint local_58;
  uint local_54;
  undefined2 *puVar5;
  
  puVar2 = (undefined2 *)0x0;
  local_60 = (undefined2 *)0x0;
  local_54 = 0;
  puVar5 = puVar2;
  puVar7 = puVar2;
  puVar9 = puVar2;
  puVar6 = puVar2;
  if (0 < (int)param_4[1]) {
    do {
      iVar3 = (int)puVar5;
      iVar1 = *(int *)(*param_4 + 8 + (longlong)puVar7);
      iVar10 = iVar1 + -1;
      _Src = *(void **)(*param_4 + (longlong)puVar7);
      if (iVar1 == 0) {
        iVar10 = 0;
      }
      uVar4 = iVar3;
      if (iVar10 != 0) {
        local_58 = (uint)(iVar3 == 0) + iVar10 + iVar3;
        if ((int)puVar2 < (int)local_58) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,puVar5);
          puVar2 = (undefined2 *)(ulonglong)local_54;
          puVar6 = local_60;
        }
        uVar4 = local_58;
        _guard_xfg_dispatch_icall_nop
                  (puVar6 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)),_Src,(longlong)iVar10 * 2);
        (puVar6 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)))[iVar10] = 0;
      }
      local_58 = (2 - (uint)(uVar4 != 0)) + uVar4;
      if ((int)puVar2 < (int)local_58) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60);
        puVar2 = (undefined2 *)(ulonglong)local_54;
        puVar6 = local_60;
      }
      uVar8 = (int)puVar9 + 1;
      puVar6[(longlong)(int)uVar4 - (ulonglong)(uVar4 != 0)] = 0x20;
      (puVar6 + ((longlong)(int)uVar4 - (ulonglong)(uVar4 != 0)))[1] = 0;
      puVar5 = (undefined2 *)(ulonglong)local_58;
      puVar7 = puVar7 + 8;
      puVar9 = (undefined2 *)(ulonglong)uVar8;
    } while ((int)uVar8 < (int)param_4[1]);
    puVar2 = puVar6;
    if (local_58 != 0) goto LAB_14165974c;
  }
  puVar6 = &DAT_143f3eda8;
LAB_14165974c:
  FConfigCacheIni::SetString(param_1,param_2,param_3,puVar6,param_5);
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free(puVar2);
  }
  return;
}



// FUNCTION 1416597b0 SetString body=571 status=ok
// SIG undefined SetString(void)

void FConfigCacheIni::SetString
               (undefined8 param_1,short *param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  short *psVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_58 [8];
  longlong local_50;
  ulonglong local_48;
  longlong local_40 [2];
  longlong local_30;
  
  lVar4 = Find(param_1,param_5,1);
  if (lVar4 != 0) {
    local_48 = 0;
    local_50 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (param_2[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_48 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
      }
      FGenericPlatformString::Memcpy(local_50,param_2,(longlong)(int)uVar8 * 2);
    }
    plVar5 = (longlong *)FConfigFile::FindOrAddSection(lVar4,&local_50);
    if (local_50 != 0) {
      FMemory::Free();
    }
    plVar6 = (longlong *)FName::FName(local_58,param_3,1);
    lVar9 = *plVar6;
    if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
      plVar6 = (longlong *)plVar5[8];
      if ((longlong *)plVar5[8] == (longlong *)0x0) {
        plVar6 = plVar5 + 7;
      }
      iVar3 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar9 >> 0x20) + (int)lVar9) &
                      (longlong)(int)plVar5[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar6 = (longlong *)((longlong)iVar3 * 0x30 + *plVar5);
          if (*plVar6 == lVar9) {
            if (iVar3 != -1) goto LAB_1416598e5;
            break;
          }
          iVar3 = (int)plVar6[5];
        } while (iVar3 != -1);
      }
    }
    plVar6 = (longlong *)0x0;
LAB_1416598e5:
    plVar10 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    if (plVar10 == (longlong *)0x0) {
      FConfigValue::FConfigValue(local_40,param_4);
      FName::FName(local_58,param_3,1);
      TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
      ::Emplace<FName_const_&,FConfigValue>(plVar5,local_58,local_40);
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_40[0] != 0) {
        FMemory::Free();
      }
      *(undefined1 *)(lVar4 + 0x50) = 1;
    }
    else {
      if ((int)plVar10[1] == 0) {
        psVar7 = &DAT_143f3eda8;
      }
      else {
        psVar7 = (short *)*plVar10;
      }
      lVar9 = param_4 - (longlong)psVar7;
      do {
        sVar1 = *psVar7;
        sVar2 = *(short *)((longlong)psVar7 + lVar9);
        if (sVar1 != sVar2) break;
        psVar7 = psVar7 + 1;
      } while (sVar2 != 0);
      if (sVar1 != sVar2) {
        *(undefined1 *)(lVar4 + 0x50) = 1;
        lVar4 = FConfigValue::FConfigValue(local_40,param_4);
        FString::operator=(plVar10,lVar4);
        FString::operator=(plVar10 + 2,lVar4 + 0x10);
        if (local_30 != 0) {
          FMemory::Free();
        }
        if (local_40[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 1416599f0 FUN_1416599f0 body=1558 status=ok
// SIG undefined FUN_1416599f0(void)

void FUN_1416599f0(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined2 *puVar16;
  undefined4 uVar17;
  int iVar18;
  longlong *plVar19;
  int iVar20;
  longlong *plVar21;
  ulonglong local_res8;
  undefined8 local_res10;
  void *local_res18;
  ulonglong local_res20;
  wchar_t *pwVar22;
  undefined4 uVar23;
  wchar_t *pwVar24;
  undefined4 uVar25;
  void *local_258;
  int local_250;
  undefined4 local_24c;
  undefined8 local_248;
  uint *puStack_240;
  undefined4 local_238;
  int iStack_234;
  uint uStack_230;
  undefined4 uStack_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  longlong *local_218;
  uint local_210;
  int local_20c;
  longlong local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 uStack_1f0;
  uint *local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  longlong *local_1c8;
  undefined2 local_1c0;
  longlong *local_1b8;
  longlong lStack_1b0;
  uint *puStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 local_190;
  undefined **local_188 [5];
  byte local_15e;
  longlong local_f8;
  longlong local_f0;
  undefined **local_e8 [5];
  byte local_c0;
  byte local_be;
  ulonglong local_58;
  ulonglong local_50;
  
  plVar10 = (longlong *)0x0;
  local_1f8 = (longlong *)(param_1 + 8);
  local_218 = (longlong *)0x0;
  iVar7 = *(int *)(param_1 + 0x30);
  puStack_240 = (uint *)(param_1 + 0x18);
  uVar13 = 0;
  local_res18 = (void *)((ulonglong)local_res18 & 0xffffffff00000000);
  local_20c = 0;
  local_248 = 0x100000000;
  uVar6 = 0;
  iStack_234 = 0;
  uStack_230 = 0;
  if (iVar7 != 0) {
    puVar15 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar15 = puStack_240;
    }
    uVar4 = *puVar15;
    plVar12 = plVar10;
    plVar14 = plVar10;
    while (uVar4 == 0) {
      iVar5 = (int)plVar14;
      uStack_230 = (int)plVar12 + 0x20;
      plVar12 = (longlong *)(ulonglong)uStack_230;
      plVar14 = (longlong *)(ulonglong)(iVar5 + 1U);
      uVar1 = (ulonglong)local_248 >> 0x20;
      local_248 = CONCAT44((int)uVar1,iVar5 + 1U);
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_141659ae4;
      uVar4 = puVar15[(longlong)iVar5 + 1];
    }
    uVar4 = -uVar4 & uVar4;
    iVar5 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    local_248 = CONCAT44(uVar4,(undefined4)local_248);
    if (uVar4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_234 = (uStack_230 - iVar5) + 0x1f;
    if (iVar7 < iStack_234) {
LAB_141659ae4:
      iStack_234 = iVar7;
    }
  }
  local_238 = 0xffffffff;
  uStack_1e0 = CONCAT44(iStack_234,0xffffffff);
  auStack_1a0._8_4_ = uStack_230;
  auStack_1a0._0_8_ = uStack_1e0;
  auStack_1a0._12_4_ = uStack_22c;
  lStack_1b0 = local_248;
  local_1c0 = 0;
  local_190._0_4_ = SUB84(local_1f8,0);
  local_190._4_4_ = (undefined4)((ulonglong)local_1f8 >> 0x20);
  uStack_1f0 = local_248;
  local_1d8._8_4_ = (undefined4)local_190;
  local_1d8._0_8_ = auStack_1a0._8_8_;
  local_1d8._12_4_ = local_190._4_4_;
  plVar12 = plVar10;
  plVar14 = plVar10;
  plVar19 = plVar10;
  plVar21 = plVar10;
  iVar7 = iStack_234;
  local_res8 = param_1;
  local_res10 = param_2;
  local_1e8 = puStack_240;
  local_1c8 = local_1f8;
  local_1b8 = local_1f8;
  puStack_1a8 = puStack_240;
  local_190 = local_1f8;
  if (iStack_234 < *(int *)(param_1 + 0x30)) {
    do {
      plVar10 = local_1f8;
      lVar11 = (longlong)iVar7 * 0x130;
      local_258 = (void *)0x0;
      local_250 = *(int *)(lVar11 + 8 + *local_1f8);
      lVar9 = (longlong)local_250;
      local_res18 = *(void **)(lVar11 + *local_1f8);
      if (local_250 == 0) {
        local_24c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_258,local_250,0);
        _guard_xfg_dispatch_icall_nop(local_258,local_res18,lVar9 * 2);
      }
      lVar9 = *plVar10;
      FArchive::FArchive(local_e8);
      local_be = local_be | 0x20;
      local_e8[0] = &PTR_FUN_144cc84b0;
      local_58 = 0;
      local_50 = 0;
      FUN_14158ce90(local_e8,&local_258);
      lVar9 = lVar9 + lVar11;
      FUN_1416411c0(local_e8,lVar9 + 0x10);
      if ((local_c0 & 1) != 0) {
        if (*(longlong *)(lVar9 + 0x50) != 0) {
          uVar8 = FMemory::Realloc(*(longlong *)(lVar9 + 0x50),0);
          *(undefined8 *)(lVar9 + 0x50) = uVar8;
        }
        *(undefined4 *)(lVar9 + 0x58) = 0;
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::ConditionalRehash(lVar9 + 0x10,*(int *)(lVar9 + 0x18) - *(int *)(lVar9 + 0x44));
      }
      uVar1 = local_50;
      local_res20 = local_58;
      uVar6 = 0;
      uVar4 = uVar6;
      if (local_250 != 0) {
        uVar4 = local_250 - 1;
      }
      local_208 = 0;
      local_200 = 0;
      if ((int)uVar4 <= (int)(uint)plVar14) {
        uVar4 = (uint)plVar14;
      }
      local_228 = uVar4;
      FString::AppendInt(&local_208,local_58 & 0xffffffff);
      uVar13 = uVar6;
      if ((int)local_200 != 0) {
        uVar13 = (int)local_200 - 1;
      }
      if ((int)uVar13 <= (int)(uint)plVar19) {
        uVar13 = (uint)plVar19;
      }
      local_224 = uVar13;
      if (local_208 != 0) {
        FMemory::Free();
      }
      local_248 = 0;
      puStack_240 = (uint *)0x0;
      FString::AppendInt(&local_248,uVar1 & 0xffffffff);
      if ((int)puStack_240 != 0) {
        uVar6 = (int)puStack_240 - 1;
      }
      if ((int)uVar6 <= (int)(uint)plVar21) {
        uVar6 = (uint)plVar21;
      }
      local_220 = uVar6;
      if (local_248 != 0) {
        FMemory::Free();
      }
      iVar7 = (int)plVar12;
      local_210 = iVar7 + 1;
      if (local_20c < (int)local_210) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(&local_218,plVar12);
        uVar4 = local_228;
        uVar13 = local_224;
        uVar6 = local_220;
      }
      uVar3 = local_210;
      plVar21 = (longlong *)(ulonglong)uVar6;
      plVar19 = (longlong *)(ulonglong)uVar13;
      plVar14 = (longlong *)(ulonglong)uVar4;
      plVar12 = (longlong *)(ulonglong)local_210;
      plVar10 = local_218 + (longlong)iVar7 * 4;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = 0;
        lVar9 = (longlong)local_250;
        local_res18 = local_258;
        *(int *)(plVar10 + 1) = local_250;
        if (local_250 == 0) {
          *(undefined4 *)((longlong)plVar10 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar10,local_250,0);
          _guard_xfg_dispatch_icall_nop((void *)*plVar10,local_res18,lVar9 * 2);
        }
        plVar10[2] = local_res20;
        plVar10[3] = uVar1;
      }
      plVar10 = local_218;
      FArchive::~FArchive(local_e8);
      if (local_258 != (void *)0x0) {
        FMemory::Free();
      }
      uStack_1e0 = CONCAT44(uStack_1e0._4_4_,(uint)uStack_1e0 & ~uStack_1f0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1f0);
      iVar7 = uStack_1e0._4_4_;
    } while (uStack_1e0._4_4_ < (int)local_1e8[6]);
    local_res18 = (void *)CONCAT44(local_res18._4_4_,uVar3);
    if (((char)local_1c0 != '\0') && (local_1c0._1_1_ != '\0')) {
      TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_1c8,(int)local_1c8[1] - *(int *)((longlong)local_1c8 + 0x34),1);
    }
  }
  iVar18 = uVar13 + 10;
  iVar20 = uVar6 + 10;
  FArchive::FArchive(local_188);
  uVar1 = local_res8;
  local_15e = local_15e | 0x20;
  local_188[0] = &PTR_FUN_144cc84b0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_1406432a0(local_188,(longlong)*(int *)(local_res8 + 0x10) * 0x130,
                (longlong)*(int *)(local_res8 + 0x14) * 0x130);
  iVar7 = *(int *)(uVar1 + 0x34) + 0x1f;
  iVar5 = *(int *)(uVar1 + 0x30) + 0x1f;
  (*(code *)local_188[0][0xf])
            (local_188,(longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) << 2);
  lVar9 = (longlong)*(int *)(uVar1 + 0x50) << 2;
  (*(code *)local_188[0][0xf])(local_188,lVar9,lVar9);
  lVar9 = local_f8;
  uVar8 = local_res10;
  uVar17 = (undefined4)local_f8;
  local_res20 = local_f0;
  FOutputDevice::Log(local_res10,L"Config cache memory usage:");
  pwVar24 = L"MaxBytes";
  pwVar22 = L"NumBytes";
  FOutputDevice::LogfImpl
            (uVar8,L"%*s %*s %*s",plVar14,L"FileName",iVar18,L"NumBytes",iVar20,L"MaxBytes");
  AlgoImpl::
  IntroSortInternal<FConfigFileMemoryData,FIdentityFunctor,TDereferenceWrapper<FConfigFileMemoryData,_FConfigMemoryData::SortBySize_::_2_::FCompareFConfigFileMemoryData>_>
            (plVar10,(longlong)(int)plVar12,local_res8 & 0xff,&local_res8);
  uVar2 = local_res10;
  uVar23 = (undefined4)((ulonglong)pwVar22 >> 0x20);
  uVar25 = (undefined4)((ulonglong)pwVar24 >> 0x20);
  if (0 < (int)plVar12) {
    plVar10 = plVar10 + 2;
    do {
      if ((int)plVar10[-1] == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)plVar10[-2];
      }
      pwVar24 = (wchar_t *)CONCAT44((int)((ulonglong)pwVar24 >> 0x20),(int)plVar10[1]);
      pwVar22 = (wchar_t *)CONCAT44((int)((ulonglong)pwVar22 >> 0x20),(int)*plVar10);
      FOutputDevice::LogfImpl(uVar2,L"%*s %*u %*u",plVar14,puVar16,iVar18,pwVar22,iVar20,pwVar24);
      uVar23 = (undefined4)((ulonglong)pwVar22 >> 0x20);
      uVar25 = (undefined4)((ulonglong)pwVar24 >> 0x20);
      local_res20 = local_res20 + plVar10[1];
      lVar9 = lVar9 + *plVar10;
      uVar17 = (undefined4)lVar9;
      plVar10 = plVar10 + 4;
      plVar12 = (longlong *)((longlong)plVar12 + -1);
    } while (plVar12 != (longlong *)0x0);
    plVar12 = (longlong *)((ulonglong)local_res18 & 0xffffffff);
    uVar8 = local_res10;
    plVar10 = local_218;
  }
  FOutputDevice::LogfImpl
            (uVar8,L"%*s %*u %*u",plVar14,L"Total",iVar18,CONCAT44(uVar23,uVar17),iVar20,
             CONCAT44(uVar25,(int)local_res20));
  FArchive::~FArchive(local_188);
  uVar13 = (uint)plVar12;
  plVar14 = plVar10;
  while (uVar13 != 0) {
    if (*plVar14 != 0) {
      FMemory::Free();
    }
    plVar14 = plVar14 + 4;
    uVar13 = (int)plVar12 - 1;
    plVar12 = (longlong *)(ulonglong)uVar13;
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  return;
}



// FUNCTION 14165a010 Shrink body=493 status=ok
// SIG undefined Shrink(void)

void TSparseArray<TSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Shrink(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint local_28;
  undefined8 local_24;
  
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uVar11 = 0;
  local_38 = 0;
  local_34 = 1;
  iVar10 = -1;
  local_24 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar2 = *puVar9;
    uVar5 = local_38;
    while (uVar2 == 0) {
      uVar11 = uVar11 + 0x20;
      local_38 = uVar5 + 1;
      local_24 = (ulonglong)uVar11 << 0x20;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)uVar5) {
        local_24 = CONCAT44(uVar11,iVar3);
        iVar6 = iVar3;
        goto LAB_14165a0fc;
      }
      uVar2 = puVar9[(longlong)(int)uVar5 + 1];
      uVar5 = local_38;
    }
    local_34 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (local_34 != 0) {
      for (; local_34 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (local_34 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iVar6 = (uVar11 - iVar6) + 0x1f;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
    uVar8 = (ulonglong)local_24 >> 0x20;
    local_24 = CONCAT44((int)uVar8,iVar6);
    local_38 = uVar5;
  }
LAB_14165a0fc:
  uVar11 = 0xffffffff;
  local_30 = puVar1;
  if (iVar6 < iVar3) {
    do {
      if (iVar6 <= iVar10) {
        iVar6 = iVar10;
      }
      iVar10 = iVar6;
      local_28 = uVar11 & ~local_34;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_38);
      uVar11 = local_28;
      iVar6 = (int)local_24;
    } while ((int)local_24 < (int)local_30[6]);
  }
  iVar6 = (int)param_1[1];
  iVar10 = iVar10 + 1;
  if (iVar10 < iVar6) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar8 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      do {
        lVar4 = *param_1;
        lVar7 = (longlong)(int)uVar8;
        if ((int)uVar8 < iVar10) {
          uVar8 = (ulonglong)*(uint *)(lVar4 + 4 + lVar7 * 0x30);
        }
        else {
          iVar6 = *(int *)(lVar4 + 4 + lVar7 * 0x30);
          uVar8 = (ulonglong)iVar6;
          iVar3 = *(int *)(lVar4 + lVar7 * 0x30);
          if (iVar6 != -1) {
            *(int *)(lVar4 + uVar8 * 0x30) = iVar3;
          }
          if (iVar3 == -1) {
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
            *(int *)(param_1 + 6) = iVar6;
          }
          else {
            *(int *)(*param_1 + 4 + (longlong)iVar3 * 0x30) = iVar6;
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
          }
        }
      } while ((int)uVar8 != -1);
      iVar6 = (int)param_1[1];
    }
    if (iVar6 != iVar10) {
      *(int *)(param_1 + 1) = iVar10;
      TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(param_1);
    }
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt(puVar1,iVar10,(int)param_1[5] - iVar10);
  }
  if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1);
    return;
  }
  return;
}



// FUNCTION 14165a200 Shrink body=493 status=ok
// SIG undefined Shrink(void)

void TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Shrink(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint local_28;
  undefined8 local_24;
  
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uVar11 = 0;
  local_38 = 0;
  local_34 = 1;
  iVar10 = -1;
  local_24 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar2 = *puVar9;
    uVar5 = local_38;
    while (uVar2 == 0) {
      uVar11 = uVar11 + 0x20;
      local_38 = uVar5 + 1;
      local_24 = (ulonglong)uVar11 << 0x20;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)uVar5) {
        local_24 = CONCAT44(uVar11,iVar3);
        iVar6 = iVar3;
        goto LAB_14165a2ec;
      }
      uVar2 = puVar9[(longlong)(int)uVar5 + 1];
      uVar5 = local_38;
    }
    local_34 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (local_34 != 0) {
      for (; local_34 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (local_34 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iVar6 = (uVar11 - iVar6) + 0x1f;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
    uVar8 = (ulonglong)local_24 >> 0x20;
    local_24 = CONCAT44((int)uVar8,iVar6);
    local_38 = uVar5;
  }
LAB_14165a2ec:
  uVar11 = 0xffffffff;
  local_30 = puVar1;
  if (iVar6 < iVar3) {
    do {
      if (iVar6 <= iVar10) {
        iVar6 = iVar10;
      }
      iVar10 = iVar6;
      local_28 = uVar11 & ~local_34;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_38);
      uVar11 = local_28;
      iVar6 = (int)local_24;
    } while ((int)local_24 < (int)local_30[6]);
  }
  iVar6 = (int)param_1[1];
  iVar10 = iVar10 + 1;
  if (iVar10 < iVar6) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar8 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      do {
        lVar4 = *param_1;
        lVar7 = (longlong)(int)uVar8 * 0xb8;
        if ((int)uVar8 < iVar10) {
          uVar8 = (ulonglong)*(uint *)(lVar7 + 4 + lVar4);
        }
        else {
          iVar6 = *(int *)(lVar7 + 4 + lVar4);
          uVar8 = (ulonglong)iVar6;
          iVar3 = *(int *)(lVar7 + lVar4);
          if (iVar6 != -1) {
            *(int *)(uVar8 * 0xb8 + lVar4) = iVar3;
          }
          if (iVar3 == -1) {
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
            *(int *)(param_1 + 6) = iVar6;
          }
          else {
            *(int *)((longlong)iVar3 * 0xb8 + 4 + *param_1) = iVar6;
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
          }
        }
      } while ((int)uVar8 != -1);
      iVar6 = (int)param_1[1];
    }
    if (iVar6 != iVar10) {
      *(int *)(param_1 + 1) = iVar10;
      TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeShrink(param_1);
    }
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt(puVar1,iVar10,(int)param_1[5] - iVar10);
  }
  if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
    TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeTo(param_1);
    return;
  }
  return;
}



// FUNCTION 14165a400 FUN_14165a400 body=1478 status=ok
// SIG undefined FUN_14165a400(void)

void FUN_14165a400(longlong param_1,undefined2 **param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined2 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong local_b8 [4];
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (DAT_1468c21d9 != '\0') {
    lVar8 = **(longlong **)(param_1 + 0x178);
    while (lVar8 != 0) {
      local_f8 = 0;
      plStack_f0 = (longlong *)0x0;
      lVar8 = **(longlong **)(param_1 + 0x178);
      if (lVar8 != 0) {
        puVar1 = (undefined8 *)(lVar8 + 8);
        if (&local_f8 != puVar1) {
          local_f8 = *puVar1;
          *puVar1 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_f0,lVar8 + 0x10);
        }
        lVar12 = *(longlong *)(param_1 + 0x178);
        *(longlong *)(param_1 + 0x178) = lVar8;
        local_d8 = 0;
        plStack_d0 = (longlong *)0x0;
        if (puVar1 != &local_d8) {
          *puVar1 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(lVar8 + 0x10,&plStack_d0);
          plVar4 = plStack_d0;
          if (plStack_d0 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_d0 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_d0)(plStack_d0);
              LOCK();
              piVar3 = (int *)((longlong)plVar4 + 0xc);
              iVar14 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
              }
            }
          }
        }
        if (lVar12 != 0) {
          plVar4 = *(longlong **)(lVar12 + 0x10);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar3 = (int *)((longlong)plVar4 + 0xc);
              iVar14 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          FMemory::operator_delete(lVar12,0x18);
        }
        plVar4 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_f0 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            iVar14 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
            }
          }
        }
      }
      lVar8 = **(longlong **)(param_1 + 0x178);
    }
    lVar8 = **(longlong **)(param_1 + 0x188);
    while (lVar8 != 0) {
      local_e8 = 0;
      plStack_e0 = (longlong *)0x0;
      lVar8 = **(longlong **)(param_1 + 0x188);
      if (lVar8 != 0) {
        puVar1 = (undefined8 *)(lVar8 + 8);
        if (&local_e8 != puVar1) {
          local_e8 = *puVar1;
          *puVar1 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_e0,lVar8 + 0x10);
        }
        lVar12 = *(longlong *)(param_1 + 0x188);
        *(longlong *)(param_1 + 0x188) = lVar8;
        local_c8 = 0;
        plStack_c0 = (longlong *)0x0;
        if (puVar1 != &local_c8) {
          *puVar1 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(lVar8 + 0x10,&plStack_c0);
          plVar4 = plStack_c0;
          if (plStack_c0 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_c0 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_c0)(plStack_c0);
              LOCK();
              piVar3 = (int *)((longlong)plVar4 + 0xc);
              iVar14 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
              }
            }
          }
        }
        if (lVar12 != 0) {
          plVar4 = *(longlong **)(lVar12 + 0x10);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar3 = (int *)((longlong)plVar4 + 0xc);
              iVar14 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          FMemory::operator_delete(lVar12,0x18);
        }
        plVar4 = plStack_e0;
        if (plStack_e0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_e0 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_e0)(plStack_e0);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            iVar14 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
            }
          }
        }
      }
      lVar8 = **(longlong **)(param_1 + 0x188);
    }
    local_98[0] = 0;
    local_80 = 0;
    local_90 = 0;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_14165aa60(param_1,local_98);
    FUN_140640190(local_98);
  }
  local_108 = (undefined2 *)0x0;
  local_100 = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[0] = 0;
  local_b8[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
  lVar8 = local_b8[0];
  FGenericPlatformString::Memcpy(local_b8[0],&DAT_144cc3b4c,4);
  cVar5 = FUN_1404e14f0(param_2,local_b8,&local_108,local_b8 + 2,0,0);
  if (lVar8 != 0) {
    FMemory::Free(lVar8);
  }
  puVar13 = local_108;
  if ((cVar5 == '\0') && (&local_108 != param_2)) {
    iVar6 = *(int *)(param_2 + 1);
    puVar10 = *param_2;
    local_100 = CONCAT44(local_100._4_4_,iVar6);
    if ((iVar6 != 0) || (iVar14 = 0, local_100._4_4_ != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,iVar6);
      puVar13 = local_108;
      _guard_xfg_dispatch_icall_nop(local_108,puVar10,(longlong)iVar6 * 2);
      iVar14 = (int)local_100;
    }
  }
  else {
    iVar14 = (int)local_100;
  }
  *(undefined4 *)(param_1 + 0x1c4) = param_3;
  if (((DAT_1468c217b == '\0') && (DAT_1468c21a8 == '\0')) &&
     (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c))) {
    puVar10 = &DAT_143f3eda8;
    if (iVar14 != 0) {
      puVar10 = puVar13;
    }
    iVar6 = FUN_140438070(puVar10);
    lVar8 = *(longlong *)(param_1 + 0x158);
    if (*(longlong *)(param_1 + 0x158) == 0) {
      lVar8 = param_1 + 0x150;
    }
    iVar6 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x160) - 1U & (longlong)iVar6) * 4);
    if (iVar6 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x118);
      do {
        lVar12 = (longlong)iVar6 * 0x20;
        puVar10 = &DAT_143f3eda8;
        if (iVar14 != 0) {
          puVar10 = puVar13;
        }
        if (*(int *)(lVar12 + 8 + lVar8) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = *(undefined2 **)(lVar12 + lVar8);
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar10);
        if (iVar7 == 0) {
          if (iVar6 != -1) {
            TBaseMulticastDelegate<void>::Broadcast(param_1);
            *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(DAT_1468b6160 + 0x10);
            uVar9 = FUN_141672640();
            FOutputDeviceRedirector::AddOutputDevice(uVar9,param_1 + 0x90);
            DAT_1468c21d9 = '\x01';
            FUN_1416510b0(param_1,param_2);
          }
          break;
        }
        lVar8 = *(longlong *)(param_1 + 0x118);
        iVar6 = *(int *)(lVar12 + 0x18 + lVar8);
      } while (iVar6 != -1);
    }
  }
  if (local_b8[2] != 0) {
    FMemory::Free();
  }
  if (puVar13 != (undefined2 *)0x0) {
    FMemory::Free(puVar13);
  }
  return;
}



// FUNCTION 14165a9d0 StaticExec body=133 status=ok
// SIG undefined StaticExec(void)

undefined1
FSelfRegisteringExec::StaticExec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_14164c0c0();
  iVar3 = 0;
  if (0 < (int)plVar2[1]) {
    lVar4 = 0;
    do {
      cVar1 = (**(code **)(**(longlong **)(lVar4 + *plVar2) + 8))
                        (*(longlong **)(lVar4 + *plVar2),param_1,param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < (int)plVar2[1]);
  }
  return 0;
}



// FUNCTION 14165aa60 FUN_14165aa60 body=446 status=ok
// SIG undefined FUN_14165aa60(void)

undefined1 FUN_14165aa60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 uVar10;
  int iVar11;
  longlong *plVar12;
  double dVar13;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar13 = (double)local_res8.QuadPart * DAT_1468b02f8;
  *(undefined8 *)(param_1 + 0x110) = 0;
  dVar4 = *(double *)(param_1 + 0x198);
  if (((*(char *)(param_1 + 0x1a0) == '\0') ||
      (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x50))(), cVar7 != '\0')) ||
     (cVar7 = FUN_14164f790(), cVar7 == '\0')) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  *(undefined1 *)(param_1 + 0x1a0) = uVar10;
  *(undefined1 *)(*(longlong *)(param_1 + 0x1a8) + 0x20) = uVar10;
  FUN_141640c90(param_2,*(longlong *)(param_1 + 0x1a8) + 0x20);
  *(float *)(param_2 + 0x18) = (float)((dVar13 + 16777216.0) - dVar4);
  lVar9 = *(longlong *)(param_1 + 0x1a8);
  if (*(int *)(lVar9 + 0x98) != 0) {
    uVar8 = FUN_141672640();
    FOutputDevice::LogfImpl(uVar8,4,L"<-- Resume Log Parsing -->");
    lVar9 = *(longlong *)(param_1 + 0x1a8);
  }
  plVar12 = *(longlong **)(lVar9 + 0x90);
  for (iVar11 = *(int *)(lVar9 + 0x98); iVar11 != 0; iVar11 = iVar11 + -1) {
    plVar5 = (longlong *)plVar12[3];
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
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 6;
  }
  *(undefined4 *)(lVar9 + 0x98) = 0;
  if (*(int *)(lVar9 + 0x9c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo((undefined8 *)(lVar9 + 0x90),0);
  }
  uVar10 = *(undefined1 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  DAT_1468c21d9 = 0;
  uVar8 = FUN_141672640();
  FOutputDeviceRedirector::RemoveOutputDevice(uVar8,param_1 + 0x90);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x18);
  return uVar10;
}



// FUNCTION 14165ac20 ToIso8601 body=30 status=ok
// SIG undefined ToIso8601(void)

undefined8 FDateTime::ToIso8601(undefined8 param_1,undefined8 param_2)

{
  FUN_14165adf0(param_1,param_2,L"%Y-%m-%dT%H:%M:%S.%sZ");
  return param_2;
}



// FUNCTION 14165ac40 ToString body=419 status=ok
// SIG undefined ToString(void)

longlong * FCompoundChange::ToString(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  void *_Dst;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined *puVar7;
  void *local_18;
  int local_10;
  
  *param_2 = 0;
  param_2[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Compound Change",0x20);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    plVar4 = *(longlong **)(param_1 + 8);
    plVar1 = plVar4 + *(int *)(param_1 + 0x10);
    iVar3 = 0;
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      iVar2 = iVar3 + 1;
      if (*plVar4 == 0) {
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
    }
    puVar7 = &DAT_144cc2818;
    if (iVar3 == 1) {
      puVar7 = &DAT_144cc272c;
    }
    FString::PrintfImpl(&local_18,L" (%i sub-change%s)",iVar3,puVar7);
    _Src = local_18;
    if (local_10 != 0) {
      iVar6 = local_10 + -1;
    }
    if (iVar6 != 0) {
      iVar3 = (int)param_2[1];
      iVar2 = (uint)(iVar3 == 0) + iVar3 + iVar6;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
    return param_2;
  }
  iVar6 = (int)param_2[1];
  iVar3 = (9 - (uint)(iVar6 != 0)) + iVar6;
  *(int *)(param_2 + 1) = iVar3;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
  }
  lVar5 = (longlong)iVar6 - (ulonglong)(iVar6 != 0);
  builtin_wcsncpy((wchar_t *)(*param_2 + lVar5 * 2),L" (empty)",8);
  *(undefined2 *)(*param_2 + 0x10 + lVar5 * 2) = 0;
  return param_2;
}



// FUNCTION 14165adf0 FUN_14165adf0 body=2420 status=ok
// SIG undefined FUN_14165adf0(void)

longlong * FUN_14165adf0(longlong *param_1,longlong *param_2,short *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *_Src;
  void *pvVar9;
  void *local_c8;
  int local_c0;
  void *local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  void *local_98;
  int local_90;
  void *local_88;
  int local_80;
  void *local_78;
  int local_70;
  void *local_68;
  int local_60;
  void *local_58;
  int local_50;
  void *local_48;
  int local_40;
  void *local_38;
  int local_30;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == (short *)0x0) {
    return param_2;
  }
  sVar6 = *param_3;
  do {
    if (sVar6 == 0) {
      return param_2;
    }
    iVar5 = 0;
    if (sVar6 != 0x25) {
      if (sVar6 != 0) {
switchD_14165aec0_caseD_42:
        iVar5 = (int)param_2[1];
        iVar3 = iVar5 + -1;
        if (iVar5 < 1) {
          iVar3 = 0;
        }
        iVar5 = (iVar5 < 1) + 1 + iVar5;
        *(int *)(param_2 + 1) = iVar5;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(short *)(*param_2 + (longlong)iVar3 * 2) = sVar6;
        *(undefined2 *)(*param_2 + 2 + (longlong)iVar3 * 2) = 0;
      }
      goto LAB_14165b07f;
    }
    sVar6 = param_3[1];
    param_3 = param_3 + 1;
    if (sVar6 == 0) goto LAB_14165b07f;
    switch(sVar6) {
    case 0x41:
      _Src = &DAT_144cc7ecc;
      lVar7 = -1;
      if ((int)(*param_1 / 36000000000) + (int)((*param_1 / 36000000000) / 0x18) * -0x18 < 0xc) {
        _Src = &DAT_144cc7ec4;
      }
      do {
        lVar7 = lVar7 + 1;
      } while (_Src[lVar7] != 0);
      goto LAB_14165af1b;
    default:
      goto switchD_14165aec0_caseD_42;
    case 0x44:
      uVar2 = FDateTime::GetDayOfYear(param_1);
      FString::PrintfImpl(&local_b8,L"%03i",uVar2);
      pvVar9 = local_b8;
      if (local_b0 != 0) {
        iVar5 = local_b0 + -1;
      }
      if (iVar5 != 0) {
        iVar3 = (int)param_2[1];
        iVar4 = (uint)(iVar3 == 0) + iVar3 + iVar5;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar9,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
        pvVar9 = local_b8;
      }
      break;
    case 0x48:
      FString::PrintfImpl(&local_68,L"%02i",
                          (int)(*param_1 / 36000000000) +
                          (int)((*param_1 / 36000000000) / 0x18) * -0x18);
      pvVar9 = local_68;
      if (local_60 != 0) {
        iVar5 = local_60 + -1;
      }
      if (iVar5 != 0) {
        iVar3 = (int)param_2[1];
        iVar4 = (uint)(iVar3 == 0) + iVar3 + iVar5;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar9,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
        pvVar9 = local_68;
      }
      break;
    case 0x4d:
      lVar7 = *param_1 / 600000000;
      lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar7),8) + lVar7;
      FString::PrintfImpl(&local_58,L"%02i",
                          (int)lVar7 + ((int)(lVar8 >> 5) - (int)(lVar8 >> 0x3f)) * -0x3c);
      pvVar9 = local_58;
      if (local_50 != 0) {
        iVar5 = local_50 + -1;
      }
      if (iVar5 != 0) {
        iVar3 = (int)param_2[1];
        iVar4 = (uint)(iVar3 == 0) + iVar3 + iVar5;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar9,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
        pvVar9 = local_58;
      }
      break;
    case 0x53:
      lVar7 = *param_1 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(*param_1),8);
      lVar8 = (lVar7 >> 0x17) - (lVar7 >> 0x3f);
      lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar8),8) + lVar8;
      FString::PrintfImpl(&local_48,L"%02i",lVar8 + ((lVar7 >> 5) - (lVar7 >> 0x3f)) * -0x3c);
      pvVar9 = local_48;
      if (local_40 != 0) {
        iVar5 = local_40 + -1;
      }
      if (iVar5 != 0) {
        iVar3 = (int)param_2[1];
        iVar4 = (uint)(iVar3 == 0) + iVar3 + iVar5;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar9,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
        pvVar9 = local_48;
      }
      break;
    case 0x59:
      uVar2 = FDateTime::GetYear(param_1);
      FString::PrintfImpl(&local_88,L"%04i",uVar2);
      pvVar9 = local_88;
      if (local_80 != 0) {
        iVar5 = local_80 + -1;
      }
      if (iVar5 != 0) {
        iVar3 = (int)param_2[1];
        iVar4 = (uint)(iVar3 == 0) + iVar3 + iVar5;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar9,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
        pvVar9 = local_88;
      }
      break;
    case 0x61:
      _Src = &DAT_144cc7ebc;
      lVar7 = -1;
      if ((int)(*param_1 / 36000000000) + (int)((*param_1 / 36000000000) / 0x18) * -0x18 < 0xc) {
        _Src = &DAT_144cc7eb4;
      }
      do {
        lVar7 = lVar7 + 1;
      } while (_Src[lVar7] != 0);
LAB_14165af1b:
      iVar5 = (int)lVar7;
      if (iVar5 != 0) {
        iVar3 = (int)param_2[1];
        iVar4 = (uint)(iVar3 == 0) + iVar3 + iVar5;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        pvVar9 = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar9,_Src,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar9) = 0;
      }
      goto LAB_14165b07f;
    case 100:
      uVar2 = FDateTime::GetDay(param_1);
      FString::PrintfImpl(&local_c8,L"%02i",uVar2);
      pvVar9 = local_c8;
      if (local_c0 != 0) {
        iVar5 = local_c0 + -1;
      }
      if (iVar5 != 0) {
        iVar3 = (int)param_2[1];
        iVar4 = (uint)(iVar3 == 0) + iVar3 + iVar5;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar9,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
        pvVar9 = local_c8;
      }
      break;
    case 0x68:
      uVar2 = FDateTime::GetHour12(param_1);
      FString::PrintfImpl(&local_78,L"%02i",uVar2);
      pvVar9 = local_78;
      if (local_70 != 0) {
        iVar5 = local_70 + -1;
      }
      if (iVar5 != 0) {
        iVar3 = (int)param_2[1];
        iVar4 = (uint)(iVar3 == 0) + iVar3 + iVar5;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar9,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
        pvVar9 = local_78;
      }
      break;
    case 0x6d:
      uVar2 = FDateTime::GetMonth(param_1);
      FString::PrintfImpl(&local_a8,L"%02i",uVar2);
      pvVar9 = local_a8;
      if (local_a0 != 0) {
        iVar5 = local_a0 + -1;
      }
      if (iVar5 != 0) {
        iVar3 = (int)param_2[1];
        iVar4 = (uint)(iVar3 == 0) + iVar3 + iVar5;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar9,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
        pvVar9 = local_a8;
      }
      break;
    case 0x73:
      FString::PrintfImpl(&local_38,L"%03i",
                          (int)(*param_1 / 10000) + (int)((*param_1 / 10000) / 1000) * -1000);
      pvVar9 = local_38;
      if (local_30 != 0) {
        iVar5 = local_30 + -1;
      }
      if (iVar5 != 0) {
        iVar3 = (int)param_2[1];
        iVar4 = (uint)(iVar3 == 0) + iVar3 + iVar5;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar9,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
        pvVar9 = local_38;
      }
      break;
    case 0x79:
      iVar3 = FDateTime::GetYear(param_1);
      FString::PrintfImpl(&local_98,L"%02i",iVar3 % 100);
      pvVar9 = local_98;
      if (local_90 != 0) {
        iVar5 = local_90 + -1;
      }
      if (iVar5 != 0) {
        iVar3 = (int)param_2[1];
        iVar4 = (uint)(iVar3 == 0) + iVar3 + iVar5;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar9,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
        pvVar9 = local_98;
      }
    }
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
LAB_14165b07f:
    sVar6 = param_3[1];
    param_3 = param_3 + 1;
  } while( true );
}



// FUNCTION 14165b7e0 ToString body=30 status=ok
// SIG undefined ToString(void)

undefined8 FDateTime::ToString(undefined8 param_1,undefined8 param_2)

{
  FUN_14165adf0(param_1,param_2,L"%Y.%m.%d-%H.%M.%S");
  return param_2;
}



// FUNCTION 14165b810 Trim body=142 status=ok
// SIG undefined Trim(void)

undefined8 FDefaultValueHelper::Trim(longlong *param_1,wint_t *param_2)

{
  wint_t _C;
  int iVar1;
  wint_t *pwVar2;
  
  pwVar2 = (wint_t *)*param_1;
  do {
    if (param_2 <= pwVar2) {
LAB_14165b88d:
      return CONCAT71((int7)((ulonglong)pwVar2 >> 8),pwVar2 < param_2);
    }
    _C = *pwVar2;
    iVar1 = iswspace(_C);
    if ((((iVar1 == 0) && (3 < (ushort)(_C - 10))) && (_C != 0x85)) && (1 < (ushort)(_C + 0xdfd8)))
    {
      pwVar2 = (wint_t *)*param_1;
      goto LAB_14165b88d;
    }
    pwVar2 = (wint_t *)(*param_1 + 2);
    *param_1 = (longlong)pwVar2;
  } while( true );
}



// FUNCTION 14165b8a0 FUN_14165b8a0 body=687 status=ok
// SIG undefined FUN_14165b8a0(void)

undefined1
FUN_14165b8a0(uint param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 local_res18 [2];
  undefined8 in_stack_ffffffffffffff68;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_res18[0] = param_3;
  if (((param_1 & 0x40) == 0) && (plVar5 = (longlong *)FUN_1415aac40(), plVar5 != (longlong *)0x0))
  {
    uVar6 = param_4;
    cVar1 = (**(code **)(*plVar5 + 0x20))
                      (plVar5,param_1,param_2,local_res18[0],param_4,param_5,param_6,param_7);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  param_1 = param_1 & 0xf;
  local_78 = param_4;
  local_68 = param_2;
  local_60 = local_res18[0];
  if (param_1 == 1) {
    local_48 = &LAB_14165d720;
    local_38 = 0;
    local_40 = &LAB_14045f060;
    local_70 = param_5;
    iVar3 = inflateInit2_(&local_78,param_7,"1.2.5",0x58);
    if (iVar3 == 0) {
      iVar3 = FUN_14369eec0(&local_78,4);
      iVar4 = inflateEnd(&local_78);
      if (-1 < iVar3) {
        iVar3 = iVar4;
      }
      uVar2 = iVar3 == 0;
      if (iVar3 == 0) {
        return 1;
      }
    }
    else {
      uVar2 = false;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468e2778) &&
       (_Init_thread_header(&DAT_1468e2778), DAT_1468e2778 == -1)) {
      `FCompression::UncompressMemory'::`17'::FFailOnUncompressErrors::FFailOnUncompressErrors
                (&DAT_1468e2775);
      _Init_thread_footer(&DAT_1468e2778);
    }
    if (DAT_1468e2775 == '\0') {
      uVar2 = 1;
    }
  }
  else if (param_1 == 2) {
    local_38 = 0;
    local_48 = &LAB_14165d720;
    local_40 = &LAB_14045f060;
    local_70 = param_5;
    iVar3 = inflateInit2_(&local_78,0x1f,"1.2.5");
    if (iVar3 == 0) {
      FUN_14369eec0(&local_78,4);
      iVar3 = inflateEnd(&local_78);
      uVar2 = iVar3 == 0;
      if (iVar3 == 0) {
        return 1;
      }
    }
    else {
      uVar2 = false;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468e2780) &&
       (_Init_thread_header(&DAT_1468e2780), DAT_1468e2780 == -1)) {
      `FCompression::UncompressMemory'::`17'::FFailOnUncompressErrors::FFailOnUncompressErrors
                (&DAT_1468e277c);
      _Init_thread_footer(&DAT_1468e2780);
    }
    if (DAT_1468e277c == '\0') {
      uVar2 = 1;
    }
  }
  else if (param_1 == 4) {
    plVar5 = (longlong *)FUN_14164abe0();
    uVar2 = (**(code **)(*plVar5 + 8))
                      (plVar5,param_2,local_res18,param_4,CONCAT44(uVar7,param_5),param_7);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14165bb50 UnregisterAutomationTest body=79 status=ok
// SIG undefined UnregisterAutomationTest(void)

bool FAutomationTestFramework::UnregisterAutomationTest(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  
  piVar2 = (int *)TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0x118,local_res8,param_2);
  iVar1 = *piVar2;
  if (iVar1 != -1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x118,param_2);
  }
  return iVar1 != -1;
}



// FUNCTION 14165bba0 FUN_14165bba0 body=1863 status=ok
// SIG undefined FUN_14165bba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14165bba0(void)

{
  short sVar1;
  short sVar2;
  undefined **ppuVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  wchar_t ******ppppppwVar11;
  wchar_t *******pppppppwVar12;
  uint uVar13;
  undefined2 *puVar14;
  wchar_t ******ppppppwVar15;
  longlong lVar16;
  wchar_t *******pppppppwVar17;
  longlong *plVar18;
  short *psVar19;
  uint uVar20;
  longlong lVar21;
  wchar_t ******ppppppwVar22;
  wchar_t *******pppppppwVar23;
  short *psVar24;
  bool bVar25;
  undefined1 auStack_9c8 [32];
  wchar_t ******local_9a8;
  ulonglong local_9a0;
  undefined **local_998;
  ulonglong local_990;
  longlong local_988;
  undefined8 local_980;
  int local_978 [2];
  short *local_970;
  int local_968;
  longlong local_958 [10];
  undefined1 local_908;
  short local_838 [1024];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_9c8;
  ppppppwVar22 = (wchar_t ******)0x0;
  uVar20 = 0;
  local_978[0] = 0;
  FConfigFile::FConfigFile(local_958);
  ProjectAgnosticIniPath(&local_970);
  cVar4 = FPaths::FileExists(&local_970);
  psVar19 = &DAT_143f3eda8;
  ppppppwVar15 = ppppppwVar22;
  if (cVar4 == '\0') {
    puVar6 = (undefined8 *)FUN_141672d20(&local_9a8,&local_970);
    if (*(int *)(puVar6 + 1) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (undefined2 *)*puVar6;
    }
    uVar7 = FPlatformFileManager::Get();
    plVar8 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar7);
    local_990 = local_990 & 0xffffffffffffff00;
    local_998 = &PTR_FUN_144cc86a0;
    (**(code **)(*plVar8 + 0xf0))(plVar8,puVar14,&local_998);
    ppppppwVar15 = (wchar_t ******)0x1;
    if ((char)local_990 != '\0') goto LAB_14165bc71;
    bVar25 = true;
  }
  else {
LAB_14165bc71:
    bVar25 = false;
  }
  if ((ppppppwVar15 != (wchar_t ******)0x0) && ((wchar_t *******)local_9a8 != (wchar_t *******)0x0))
  {
    FMemory::Free();
  }
  if (bVar25) {
    FUN_141653560();
  }
  ppppppwVar15 = (wchar_t ******)0x0;
  cVar4 = FPaths::FileExists(&local_970);
  lVar21 = -1;
  if (cVar4 != '\0') {
    local_9a8 = (wchar_t ******)0x0;
    psVar24 = &DAT_143f3eda8;
    if (local_968 != 0) {
      psVar24 = local_970;
    }
    local_9a0 = local_9a0 & 0xffffffff;
    if ((psVar24 != (short *)0x0) && (*psVar24 != 0)) {
      lVar16 = -1;
      do {
        lVar16 = lVar16 + 1;
      } while (psVar24[lVar16] != 0);
      uVar13 = (int)lVar16 + 1;
      local_9a0 = (ulonglong)uVar13;
      uVar20 = uVar13;
      if (0 < (int)uVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9a8,0);
        uVar20 = (uint)local_9a0;
      }
      ppppppwVar22 = local_9a8;
      FGenericPlatformString::Memcpy(local_9a8,psVar24,(longlong)(int)uVar13 * 2);
    }
    if ((DAT_1468b6148 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*DAT_1468b6148 + 0x18))(), cVar4 == '\0')) {
      TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::Empty(local_958,0);
      local_9a8 = (wchar_t ******)0x0;
      local_9a0 = 0;
      ppppppwVar11 = (wchar_t ******)&DAT_143f3eda8;
      if (uVar20 != 0) {
        ppppppwVar11 = ppppppwVar22;
      }
      cVar4 = LoadConfigFileWrapper(ppppppwVar11,&local_9a8);
      if (cVar4 != '\0') {
        FConfigFile::ProcessInputFileContents(local_958,&local_9a8);
      }
      if (local_9a8 != (wchar_t ******)0x0) {
        FMemory::Free();
      }
    }
    if (ppppppwVar22 != (wchar_t ******)0x0) {
      FMemory::Free(ppppppwVar22);
    }
    pppppppwVar23 = (wchar_t *******)0x0;
    local_990 = 9;
    local_9a8 = (wchar_t ******)0x0;
    local_9a0 = 0;
    local_998 = (undefined **)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_998,0);
    ppuVar3 = local_998;
    FGenericPlatformString::Memcpy(local_998,L"Manifest",0x12);
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(local_958,local_978,&local_998);
    pppppppwVar12 = pppppppwVar23;
    if (local_978[0] != -1) {
      pppppppwVar12 = (wchar_t *******)((longlong)local_978[0] * 0xb8 + local_958[0]);
    }
    pppppppwVar17 = pppppppwVar12 + 2;
    if (pppppppwVar12 == (wchar_t *******)0x0) {
      pppppppwVar17 = pppppppwVar23;
    }
    if (ppuVar3 != (undefined **)0x0) {
      FMemory::Free(ppuVar3);
    }
    ppppppwVar22 = ppppppwVar15;
    if (pppppppwVar17 != (wchar_t *******)0x0) {
      plVar8 = (longlong *)FName::FName(local_978,L"Version",1);
      ppppppwVar15 = (wchar_t ******)*plVar8;
      if (*(int *)(pppppppwVar17 + 1) != *(int *)((longlong)pppppppwVar17 + 0x34)) {
        pppppppwVar12 = (wchar_t *******)pppppppwVar17[8];
        if ((wchar_t *******)pppppppwVar17[8] == (wchar_t *******)0x0) {
          pppppppwVar12 = pppppppwVar17 + 7;
        }
        iVar5 = *(int *)((longlong)pppppppwVar12 +
                        ((longlong)((int)((ulonglong)ppppppwVar15 >> 0x20) + (int)ppppppwVar15) &
                        (longlong)*(int *)(pppppppwVar17 + 9) - 1U) * 4);
        if (iVar5 != -1) {
          do {
            pppppppwVar12 = (wchar_t *******)(*pppppppwVar17 + (longlong)iVar5 * 6);
            if (*pppppppwVar12 == ppppppwVar15) {
              if (iVar5 != -1) goto LAB_14165beb3;
              break;
            }
            iVar5 = *(int *)(pppppppwVar12 + 5);
          } while (iVar5 != -1);
        }
      }
      pppppppwVar12 = pppppppwVar23;
LAB_14165beb3:
      pppppppwVar17 = pppppppwVar12 + 1;
      if (pppppppwVar12 == (wchar_t *******)0x0) {
        pppppppwVar17 = pppppppwVar23;
      }
      if (pppppppwVar17 != (wchar_t *******)0x0) {
        iVar5 = *(int *)(pppppppwVar17 + 3) + -1;
        if (*(int *)(pppppppwVar17 + 3) == 0) {
          iVar5 = 0;
        }
        pppppppwVar12 = pppppppwVar17 + 2;
        if (iVar5 < 1) {
          pppppppwVar12 = pppppppwVar17;
        }
        if (&local_9a8 == pppppppwVar12) {
LAB_14165bf26:
          pppppppwVar12 = (wchar_t *******)&DAT_143f3eda8;
        }
        else {
          iVar5 = *(int *)(pppppppwVar12 + 1);
          ppppppwVar15 = *pppppppwVar12;
          local_9a0 = CONCAT44(local_9a0._4_4_,iVar5);
          pppppppwVar23 = (wchar_t *******)0x0;
          if (iVar5 == 0) goto LAB_14165bf26;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_9a8,iVar5,0);
          pppppppwVar12 = (wchar_t *******)local_9a8;
          _guard_xfg_dispatch_icall_nop(local_9a8,ppppppwVar15,(longlong)iVar5 * 2);
          pppppppwVar23 = pppppppwVar12;
          if ((uint)local_9a0 == 0) goto LAB_14165bf26;
        }
        uVar9 = _wtoi64((wchar_t *)pppppppwVar12);
        if (pppppppwVar23 != (wchar_t *******)0x0) {
          FMemory::Free(pppppppwVar23);
        }
        if (((longlong)uVar9 < 3) &&
           (ppppppwVar22 = (wchar_t ******)(uVar9 & 0xffffffff), (int)uVar9 == 2))
        goto LAB_14165c27e;
      }
    }
  }
  iVar5 = FUN_14165c2f0(ppppppwVar22);
  _guard_xfg_dispatch_icall_nop(local_838,0,0x800);
  TCString<wchar_t>::SprintfImpl(local_838,L"%lld",(longlong)iVar5);
  local_9a8 = (wchar_t ******)0x0;
  local_9a0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9a8,0);
  FGenericPlatformString::Memcpy(local_9a8,L"Manifest",0x12);
  plVar8 = (longlong *)FConfigFile::FindOrAddSection(local_958,&local_9a8);
  if ((wchar_t *******)local_9a8 != (wchar_t *******)0x0) {
    FMemory::Free();
  }
  plVar10 = (longlong *)FName::FName(local_978,L"Version",1);
  lVar16 = *plVar10;
  if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
    plVar10 = (longlong *)plVar8[8];
    if ((longlong *)plVar8[8] == (longlong *)0x0) {
      plVar10 = plVar8 + 7;
    }
    iVar5 = *(int *)((longlong)plVar10 +
                    ((longlong)((int)((ulonglong)lVar16 >> 0x20) + (int)lVar16) &
                    (longlong)(int)plVar8[9] - 1U) * 4);
    if (iVar5 != -1) {
      do {
        plVar10 = (longlong *)((longlong)iVar5 * 0x30 + *plVar8);
        if (*plVar10 == lVar16) {
          if (iVar5 != -1) goto LAB_14165c054;
          break;
        }
        iVar5 = (int)plVar10[5];
      } while (iVar5 != -1);
    }
  }
  plVar10 = (longlong *)0x0;
LAB_14165c054:
  plVar18 = plVar10 + 1;
  if (plVar10 == (longlong *)0x0) {
    plVar18 = (longlong *)0x0;
  }
  if (plVar18 == (longlong *)0x0) {
    local_998 = (undefined **)0x0;
    local_990 = 0;
    if (local_838[0] != 0) {
      do {
        lVar21 = lVar21 + 1;
      } while (local_838[lVar21] != 0);
      uVar20 = (int)lVar21 + 1;
      local_990 = (ulonglong)uVar20;
      if (0 < (int)uVar20) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_998,0);
      }
      FGenericPlatformString::Memcpy(local_998,local_838,(longlong)(int)uVar20 * 2);
    }
    local_988 = 0;
    local_980 = 0;
    cVar4 = FConfigValue::ExpandValue(&local_998,&local_988);
    if (cVar4 == '\0') {
      bVar25 = local_980._4_4_ != 0;
      local_980 = (ulonglong)local_980._4_4_ << 0x20;
      if (bVar25) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_988,0);
      }
    }
    FName::FName(local_978,L"Version",1);
    TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::Emplace<FName_const_&,FConfigValue>(plVar8,local_978,&local_998);
    if (local_988 != 0) {
      FMemory::Free();
    }
    if (local_998 != (undefined **)0x0) {
      FMemory::Free();
    }
    local_908 = 1;
  }
  else {
    if ((int)plVar18[1] != 0) {
      psVar19 = (short *)*plVar18;
    }
    lVar16 = (longlong)local_838 - (longlong)psVar19;
    do {
      sVar1 = *psVar19;
      sVar2 = *(short *)((longlong)psVar19 + lVar16);
      if (sVar1 != sVar2) break;
      psVar19 = psVar19 + 1;
    } while (sVar2 != 0);
    if (sVar1 != sVar2) {
      local_998 = (undefined **)0x0;
      local_908 = 1;
      local_990 = 0;
      if (local_838[0] != 0) {
        do {
          lVar21 = lVar21 + 1;
        } while (local_838[lVar21] != 0);
        uVar20 = (int)lVar21 + 1;
        local_990 = (ulonglong)uVar20;
        if (0 < (int)uVar20) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_998,0);
        }
        FGenericPlatformString::Memcpy(local_998,local_838,(longlong)(int)uVar20 * 2);
      }
      local_988 = 0;
      local_980 = 0;
      cVar4 = FConfigValue::ExpandValue(&local_998,&local_988);
      if (cVar4 == '\0') {
        bVar25 = local_980._4_4_ != 0;
        local_980 = (ulonglong)local_980._4_4_ << 0x20;
        if (bVar25) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_988,0);
        }
      }
      FString::operator=(plVar18,&local_998);
      FString::operator=(plVar18 + 2,&local_988);
      if (local_988 != 0) {
        FMemory::Free();
      }
      if (local_998 != (undefined **)0x0) {
        FMemory::Free();
      }
    }
  }
  local_998 = (undefined **)0x0;
  local_990 = 0;
  FConfigFile::Write(local_958,&local_970,1,&local_998);
  if (local_998 != (undefined **)0x0) {
    FMemory::Free();
  }
LAB_14165c27e:
  if (local_970 != (short *)0x0) {
    FMemory::Free();
  }
  FConfigFile::~FConfigFile(local_958);
  return;
}



// FUNCTION 14165c2f0 FUN_14165c2f0 body=869 status=ok
// SIG undefined FUN_14165c2f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14165c2f0(int param_1)

{
  char cVar1;
  wint_t wVar2;
  wint_t wVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  short *psVar10;
  short *psVar11;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a0;
  undefined1 local_198;
  longlong local_188;
  ulonglong local_180;
  short *local_178;
  int local_170;
  longlong local_160 [3];
  undefined1 local_148 [288];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  lVar6 = 0;
  if (param_1 < 1) {
    ProjectAgnosticIniPath(&local_178,L"EditorSettings.ini");
    psVar10 = &DAT_143f3eda8;
    if (local_170 != 0) {
      psVar10 = local_178;
    }
    puVar4 = (undefined8 *)ProjectAgnosticIniPath(local_160,L"EditorGameAgnostic.ini");
    if (*(int *)(puVar4 + 1) == 0) {
      psVar11 = &DAT_143f3eda8;
    }
    else {
      psVar11 = (short *)*puVar4;
    }
    local_188 = 0;
    local_180 = 0;
    lVar9 = -1;
    if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (psVar11[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_180 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
      }
      FGenericPlatformString::Memcpy(local_188,psVar11,(longlong)(int)uVar7 * 2);
    }
    cVar1 = FPaths::FileExists(&local_188);
    if (local_188 != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_188 = 0;
      local_180 = 0;
      if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
        do {
          lVar9 = lVar9 + 1;
        } while (psVar10[lVar9] != 0);
        uVar7 = (int)lVar9 + 1;
        local_180 = (ulonglong)uVar7;
        if (0 < (int)uVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
        }
        FGenericPlatformString::Memcpy(local_188,psVar10,(longlong)(int)uVar7 * 2);
      }
      cVar1 = FPaths::FileExists(&local_188);
      if (local_188 != 0) {
        FMemory::Free();
      }
      if (cVar1 == '\0') {
        plVar5 = (longlong *)FUN_1415c3d50();
        local_198 = 0;
        local_1a0 = 0;
        local_1a8 = 0;
        (**(code **)(*plVar5 + 0x40))(plVar5,psVar10,psVar11,1);
      }
      else {
        CombineConfig(psVar10,psVar11,psVar10);
      }
    }
    if (local_160[0] != 0) {
      FMemory::Free();
    }
    FConfigFile::FConfigFile(local_148);
    if ((DAT_1468b6148 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*DAT_1468b6148 + 0x18))(), cVar1 == '\0')) {
      TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::Empty(local_148,0);
      local_188 = 0;
      psVar10 = &DAT_143f3eda8;
      if (local_170 != 0) {
        psVar10 = local_178;
      }
      local_180 = 0;
      cVar1 = LoadConfigFileWrapper(psVar10,&local_188);
      if (cVar1 != '\0') {
        FConfigFile::ProcessInputFileContents(local_148,&local_188);
      }
      if (local_188 != 0) {
        FMemory::Free();
      }
    }
    FConfigManifest::MigrateConfigSection
              (local_148,L"/Script/UnrealEd.EditorGameAgnosticSettings",
               L"/Script/UnrealEd.EditorSettings");
    local_188 = 0;
    local_180 = 0;
    FConfigFile::Write(local_148,&local_178,0,&local_188);
    if (local_188 != 0) {
      FMemory::Free();
    }
    param_1 = 1;
    FConfigFile::~FConfigFile(local_148);
    if (local_178 != (short *)0x0) {
      FMemory::Free();
    }
  }
  else if (1 < param_1) {
    return param_1;
  }
  if (DAT_146299580 == 0) {
    return param_1;
  }
  for (; (wVar2 = *(wint_t *)((longlong)&DAT_146299580 + lVar6), wVar2 != 0 ||
         (*(short *)((longlong)&DAT_143f3edc8 + lVar6) != 0)); lVar6 = lVar6 + 2) {
    if (wVar2 != *(wint_t *)((longlong)&DAT_143f3edc8 + lVar6)) {
      wVar2 = towlower(wVar2);
      wVar3 = towlower(*(wint_t *)((longlong)&DAT_143f3edc8 + lVar6));
      if (wVar2 != wVar3) {
        if (wVar2 != wVar3) {
          MigrateToAgnosticIni(L"EditorLayout.ini",L"EditorLayout.ini");
          MigrateToAgnosticIni(L"EditorKeyBindings.ini",L"EditorKeyBindings.ini");
          param_1 = 2;
        }
        return param_1;
      }
    }
  }
  return param_1;
}



// FUNCTION 14165c660 UtcNow body=127 status=ok
// SIG undefined UtcNow(void)

undefined8 FDateTime::UtcNow(undefined8 param_1)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  
  FWindowsPlatformTime::UtcTime
            (&local_10,&local_14,local_c,&local_18,local_res20,local_res18,local_res10,local_res8);
  FDateTime(param_1,local_10,local_14,local_18,local_res20[0],local_res18[0],local_res10[0],
            local_res8[0]);
  return param_1;
}



// FUNCTION 14165c6e0 Validate body=103 status=ok
// SIG undefined Validate(void)

undefined8
FDateTime::Validate(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                   uint param_7)

{
  int iVar1;
  
  if (((param_1 - 1U < 9999) && (param_2 - 1U < 0xc)) && (0 < param_3)) {
    iVar1 = DaysInMonth();
    if (((param_3 <= iVar1) && (param_4 < 0x18)) &&
       ((param_5 < 0x3c && ((param_6 < 0x3c && (param_7 < 1000)))))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14165c750 VerifyCompressionFlagsValid body=10 status=ok
// SIG undefined VerifyCompressionFlagsValid(void)

bool FCompression::VerifyCompressionFlagsValid(uint param_1)

{
  return (param_1 & 0xffffff00) == 0;
}



// FUNCTION 14165c770 Write body=4008 status=ok
// SIG undefined Write(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FConfigFile::Write(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined2 *puVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  undefined2 *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  ulonglong uVar24;
  uint uVar25;
  uint *puVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  longlong *plVar29;
  bool bVar30;
  undefined1 auStack_358 [32];
  undefined8 *local_338;
  undefined8 local_330;
  char local_328;
  char local_327;
  char local_326;
  undefined1 local_325;
  void *local_320;
  int local_318;
  int local_314;
  uint local_310;
  uint uStack_30c;
  uint *puStack_308;
  uint local_300;
  uint uStack_2fc;
  uint uStack_2f8;
  undefined4 uStack_2f4;
  longlong local_2f0;
  undefined8 local_2e8;
  longlong *local_2e0;
  undefined8 *local_2d8;
  undefined8 *local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  longlong *local_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  int local_298;
  uint uStack_294;
  uint *puStack_290;
  undefined4 local_288;
  int iStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  longlong *local_278;
  undefined8 uStack_270;
  uint *puStack_268;
  undefined1 auStack_260 [16];
  longlong *local_250;
  undefined8 uStack_248;
  uint *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  longlong local_220;
  int local_218;
  int local_214;
  longlong *local_210;
  undefined8 uStack_208;
  uint *local_200;
  undefined8 uStack_1f8;
  uint local_1f0;
  undefined4 uStack_1ec;
  longlong *local_1e8;
  undefined8 uStack_1e0;
  uint *local_1d8;
  undefined8 uStack_1d0;
  uint local_1c8;
  undefined4 uStack_1c4;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  uint *local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  longlong *local_188;
  undefined2 local_180;
  undefined1 local_178 [8];
  void *local_170;
  int local_168;
  void *local_160;
  int local_158;
  undefined2 *local_150;
  int local_148;
  undefined2 *local_140;
  int local_138;
  undefined2 *local_130;
  int local_128;
  longlong local_120 [2];
  undefined2 *local_110;
  wchar_t *local_108;
  longlong local_100 [2];
  longlong local_f0 [2];
  longlong local_e0 [2];
  longlong local_d0 [2];
  longlong local_c0 [2];
  longlong local_b0 [3];
  longlong local_98;
  ulonglong local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  if (((char)param_1[10] != '\0') && (*(char *)((longlong)param_1 + 0x51) == '\0')) {
    local_326 = param_3;
    local_2e0 = param_1;
    local_2d8 = param_2;
    uVar10 = FCommandLine::Get();
    cVar7 = FParse::Param(uVar10,L"nowrite");
    if (cVar7 == '\0') {
      uVar10 = FCommandLine::Get();
      cVar7 = FParse::Param(uVar10,L"Multiprocess");
      if (cVar7 != '\0') {
        uVar10 = FCommandLine::Get();
        cVar7 = FParse::Param(uVar10,L"MultiprocessSaveConfig");
        if (cVar7 == '\0') {
          return '\x01';
        }
      }
      local_318 = *(int *)(param_4 + 1);
      lVar17 = (longlong)local_318;
      pvVar4 = (void *)*param_4;
      local_320 = (void *)0x0;
      if (local_318 == 0) {
        local_314 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_320,local_318,0);
        ::_guard_xfg_dispatch_icall_nop(local_320,pvVar4,lVar17 * 2);
      }
      iVar9 = (int)param_1[5];
      puStack_290 = (uint *)(param_1 + 2);
      cVar7 = '\0';
      local_325 = 0x19;
      local_328 = '\0';
      local_298 = 0;
      uStack_294 = 1;
      iStack_284 = 0;
      iStack_280 = 0;
      if (iVar9 != 0) {
        puVar23 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar23 = puStack_290;
        }
        uVar3 = *puVar23;
        while (uVar3 == 0) {
          lVar17 = (longlong)local_298;
          iStack_280 = iStack_280 + 0x20;
          iVar12 = local_298 + 1;
          bVar30 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_298;
          local_298 = iVar12;
          if (bVar30) goto LAB_14165c92f;
          uVar3 = puVar23[lVar17 + 1];
        }
        uStack_294 = -uVar3 & uVar3;
        iVar12 = 0x1f;
        if (uStack_294 != 0) {
          for (; uStack_294 >> iVar12 == 0; iVar12 = iVar12 + -1) {
          }
        }
        if (uStack_294 == 0) {
          iVar12 = 0x20;
        }
        else {
          iVar12 = 0x1f - iVar12;
        }
        iStack_284 = (iStack_280 - iVar12) + 0x1f;
        if (iVar9 < iStack_284) {
LAB_14165c92f:
          iStack_284 = iVar9;
        }
      }
      local_288 = 0xffffffff;
      uStack_1a0 = CONCAT44(iStack_284,0xffffffff);
      auStack_260._8_4_ = iStack_280;
      auStack_260._0_8_ = uStack_1a0;
      auStack_260._12_4_ = uStack_27c;
      uStack_270 = CONCAT44(uStack_294,local_298);
      local_180 = 0;
      uStack_228._0_4_ = SUB84(param_1,0);
      uStack_228._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
      local_198._8_4_ = (undefined4)uStack_228;
      local_198._0_8_ = auStack_260._8_8_;
      local_198._12_4_ = uStack_228._4_4_;
      iVar9 = iStack_284;
      local_278 = param_1;
      puStack_268 = puStack_290;
      uStack_228 = param_1;
      local_1b8 = param_1;
      uStack_1b0 = uStack_270;
      local_1a8 = puStack_290;
      local_188 = param_1;
      if (iStack_284 < (int)param_1[5]) {
LAB_14165c9b0:
        uVar20 = 0;
        local_327 = '\0';
        local_310 = 0;
        uStack_30c = 1;
        puVar27 = (undefined8 *)((longlong)iVar9 * 0xb8 + *local_1b8);
        local_98 = 0;
        local_90 = 0;
        local_78 = 0;
        local_2a0 = puVar27 + 2;
        local_70 = 0;
        puStack_308 = (uint *)(puVar27 + 4);
        local_68 = 0xffffffff;
        local_64 = 0;
        local_58 = (undefined1 *)0x0;
        local_50 = 0;
        uVar3 = *(uint *)(puVar27 + 7);
        uStack_2fc = 0;
        uStack_2f8 = 0;
        if (uVar3 != 0) {
          puVar23 = (uint *)puVar27[6];
          if ((uint *)puVar27[6] == (uint *)0x0) {
            puVar23 = puStack_308;
          }
          uVar13 = *puVar23;
          uVar14 = uVar20;
          uVar24 = uVar20;
          while (uVar13 == 0) {
            iVar9 = (int)uVar14;
            uStack_2f8 = (int)uVar24 + 0x20;
            uVar24 = (ulonglong)uStack_2f8;
            local_310 = iVar9 + 1;
            uVar14 = (ulonglong)local_310;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
            goto LAB_14165cad3;
            uVar13 = puVar23[(longlong)iVar9 + 1];
          }
          uStack_30c = -uVar13 & uVar13;
          iVar9 = 0x1f;
          if (uStack_30c != 0) {
            for (; uStack_30c >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          if (uStack_30c == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - iVar9;
          }
          uStack_2fc = ((int)uVar24 - iVar9) + 0x1f;
          if ((int)uVar3 < (int)uStack_2fc) {
LAB_14165cad3:
            uStack_2fc = uVar3;
          }
        }
        local_300 = 0xffffffff;
        uStack_248 = CONCAT44(uStack_30c,local_310);
        uStack_238 = CONCAT44(uStack_2fc,0xffffffff);
        uStack_230 = CONCAT44(uStack_2f4,uStack_2f8);
        local_1c8 = uStack_2f8;
        uStack_1c4 = uStack_2f4;
        uStack_1d0 = uStack_238;
        uVar14 = uVar20;
        uVar24 = uVar20;
        uVar13 = uStack_2fc;
        local_2d0 = puVar27;
        local_250 = local_2a0;
        puStack_240 = puStack_308;
        local_1e8 = local_2a0;
        uStack_1e0 = uStack_248;
        local_1d8 = puStack_308;
        if ((int)uStack_2fc < (int)uVar3) {
          do {
            puVar22 = local_2d8;
            local_2c8 = *(longlong *)((longlong)(int)uVar13 * 0x30 + *local_1e8);
            lVar17 = *local_1e8;
            if ((int)uVar24 != (int)uVar20) {
              puVar19 = local_60;
              if (local_58 != (undefined1 *)0x0) {
                puVar19 = local_58;
              }
              for (iVar9 = *(int *)(puVar19 +
                                   (longlong)
                                   (int)((int)((ulonglong)local_2c8 >> 0x20) + (int)local_2c8 &
                                        (int)uVar14 - 1U) * 4); iVar9 != -1;
                  iVar9 = *(int *)(local_98 + 8 + (longlong)iVar9 * 0x10)) {
                if (*(longlong *)(local_98 + (longlong)iVar9 * 0x10) == local_2c8) {
                  if (iVar9 != -1) goto LAB_14165d50d;
                  break;
                }
              }
            }
            FPaths::ConvertRelativePathToFull(local_120,local_2d8);
            uVar10 = FPaths::GeneratedConfigDir(local_100);
            FPaths::ConvertRelativePathToFull(&local_130,uVar10);
            if (local_100[0] != 0) {
              FMemory::Free();
            }
            puVar11 = (undefined8 *)FPaths::GameAgnosticSavedDir(local_f0);
            if (*(int *)(puVar11 + 1) == 0) {
              local_110 = &DAT_143f3eda8;
            }
            else {
              local_110 = (undefined2 *)*puVar11;
            }
            local_108 = L"Config";
            local_2c0 = 0;
            local_2b8 = 0;
            FPaths::CombineInternal(&local_2c0,&local_110,2);
            iVar9 = (int)local_2b8;
            iVar12 = local_2b8._4_4_;
            bVar30 = (int)local_2b8 != 0;
            local_2f0 = local_2c0;
            local_2c0 = 0;
            local_2e8._0_4_ = (int)local_2b8;
            local_2e8._4_4_ = local_2b8._4_4_;
            local_2b8 = 0;
            if (iVar12 < (int)((2 - (uint)bVar30) + iVar9)) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2f0);
              iVar9 = (int)local_2e8;
            }
            local_2e8._0_4_ = (2 - (uint)(iVar9 != 0)) + iVar9;
            lVar15 = local_2f0;
            iVar12 = (int)local_2e8;
            iVar6 = local_2e8._4_4_;
            if (local_2e8._4_4_ < (int)local_2e8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f0,iVar9);
              lVar15 = local_2f0;
              iVar12 = (int)local_2e8;
              iVar6 = local_2e8._4_4_;
            }
            local_214 = iVar6;
            local_2f0 = 0;
            local_2e8 = 0;
            puVar18 = (undefined2 *)(lVar15 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
            *puVar18 = 0x2f;
            puVar18[1] = 0;
            local_220 = lVar15;
            local_218 = iVar12;
            FPaths::ConvertRelativePathToFull(&local_140,&local_220);
            if (local_220 != 0) {
              FMemory::Free();
            }
            if (local_2c0 != 0) {
              FMemory::Free();
            }
            if (local_f0[0] != 0) {
              FMemory::Free();
            }
            local_338 = (undefined8 *)CONCAT44(local_338._4_4_,0xffffffff);
            puVar18 = &DAT_143f3eda8;
            if (local_128 != 0) {
              puVar18 = local_130;
            }
            iVar9 = FUN_141592950(local_120,puVar18,1);
            if (iVar9 == -1) {
              local_338 = (undefined8 *)CONCAT44(local_338._4_4_,0xffffffff);
              puVar18 = &DAT_143f3eda8;
              if (local_138 != 0) {
                puVar18 = local_140;
              }
              iVar9 = FUN_141592950(local_120,puVar18,1,0);
              if (iVar9 != -1) goto LAB_14165cd9d;
              bVar30 = true;
LAB_14165cdc4:
              if (local_327 == '\0') {
                if (*(int *)(puVar27 + 1) == 0) {
                  puVar18 = &DAT_143f3eda8;
                }
                else {
                  puVar18 = (undefined2 *)*puVar27;
                }
                FString::PrintfImpl(&local_170,L"[%s]\r\n",puVar18);
                pvVar4 = local_170;
                iVar9 = local_318;
                if (local_168 == 0) {
                  iVar12 = 0;
                }
                else {
                  iVar12 = local_168 + -1;
                }
                if (iVar12 != 0) {
                  lVar17 = (longlong)local_318;
                  local_318 = (uint)(local_318 == 0) + iVar12 + local_318;
                  if (local_314 < local_318) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_320,iVar9);
                  }
                  pvVar1 = (void *)((longlong)local_320 + (lVar17 - (ulonglong)(iVar9 != 0)) * 2);
                  ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar12 * 2);
                  *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
                }
                if (local_170 != (void *)0x0) {
                  FMemory::Free(local_170);
                }
                local_327 = '\x01';
                local_250 = puVar27 + 0xc;
                uStack_30c = 1;
                uVar3 = *(uint *)(puVar27 + 0x11);
                puStack_308 = (uint *)(puVar27 + 0xe);
                local_310 = 0;
                uStack_2fc = 0;
                uStack_2f8 = 0;
                if (uVar3 != 0) {
                  puVar23 = (uint *)puVar27[0x10];
                  if ((uint *)puVar27[0x10] == (uint *)0x0) {
                    puVar23 = puStack_308;
                  }
                  uVar13 = *puVar23;
                  while (uVar13 == 0) {
                    lVar17 = (longlong)(int)local_310;
                    uStack_2f8 = uStack_2f8 + 0x20;
                    uVar13 = local_310 + 1;
                    bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <=
                            (int)local_310;
                    local_310 = uVar13;
                    if (bVar5) goto LAB_14165cf35;
                    uVar13 = puVar23[lVar17 + 1];
                  }
                  uStack_30c = -uVar13 & uVar13;
                  iVar9 = 0x1f;
                  if (uStack_30c != 0) {
                    for (; uStack_30c >> iVar9 == 0; iVar9 = iVar9 + -1) {
                    }
                  }
                  if (uStack_30c == 0) {
                    iVar9 = 0x20;
                  }
                  else {
                    iVar9 = 0x1f - iVar9;
                  }
                  uStack_2fc = (uStack_2f8 - iVar9) + 0x1f;
                  if ((int)uVar3 < (int)uStack_2fc) {
LAB_14165cf35:
                    uStack_2fc = uVar3;
                  }
                }
                local_300 = 0xffffffff;
                uStack_248 = CONCAT44(uStack_30c,local_310);
                uStack_238 = CONCAT44(uStack_2fc,0xffffffff);
                uStack_230 = CONCAT44(uStack_2f4,uStack_2f8);
                local_1f0 = uStack_2f8;
                uStack_1ec = uStack_2f4;
                uStack_1f8 = uStack_238;
                puVar22 = local_2d8;
                uVar13 = uStack_2fc;
                puStack_240 = puStack_308;
                local_210 = local_250;
                uStack_208 = uStack_248;
                local_200 = puStack_308;
                if ((int)uStack_2fc < (int)uVar3) {
                  do {
                    lVar15 = (longlong)(int)uVar13 * 0x20;
                    lVar17 = *local_210;
                    iVar9 = 0;
                    if (*(int *)(lVar17 + 0x10 + lVar15) == 0) {
                      puVar18 = &DAT_143f3eda8;
                    }
                    else {
                      puVar18 = *(undefined2 **)(lVar17 + 8 + lVar15);
                    }
                    puVar27 = (undefined8 *)FName::ToString(lVar15 + lVar17,local_e0);
                    if (*(int *)(puVar27 + 1) == 0) {
                      puVar21 = &DAT_143f3eda8;
                    }
                    else {
                      puVar21 = (undefined2 *)*puVar27;
                    }
                    FString::PrintfImpl(&local_160,L"@%s=%s\r\n",puVar21,puVar18);
                    pvVar4 = local_160;
                    iVar12 = local_318;
                    if (local_158 != 0) {
                      iVar9 = local_158 + -1;
                    }
                    if (iVar9 != 0) {
                      lVar17 = (longlong)local_318;
                      local_318 = (uint)(local_318 == 0) + local_318 + iVar9;
                      if (local_314 < local_318) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_320,iVar12);
                      }
                      pvVar1 = (void *)((longlong)local_320 +
                                       (lVar17 - (ulonglong)(iVar12 != 0)) * 2);
                      ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar9 * 2);
                      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar9 * 2) = 0;
                    }
                    if (local_160 != (void *)0x0) {
                      FMemory::Free(local_160);
                    }
                    if (local_e0[0] != 0) {
                      FMemory::Free();
                    }
                    uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(uint)uStack_1f8 & ~uStack_208._4_4_);
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_208);
                    puVar22 = local_2d8;
                    uVar13 = uStack_1f8._4_4_;
                    cVar7 = local_328;
                  } while ((int)uStack_1f8._4_4_ < (int)local_200[6]);
                }
              }
              local_2b0 = (longlong *)0x0;
              local_2a8 = 0;
              TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              ::MultiFind<FDefaultAllocator>(local_2a0,local_2c8,&local_2b0,1);
              if (bVar30) {
                if (cVar7 == '\0') {
                  FUN_141671d50(&local_150,puVar22);
                  plVar28 = local_2e0 + 0xc;
                  local_310 = 0;
                  uVar3 = *(uint *)(local_2e0 + 0x11);
                  puVar23 = (uint *)(local_2e0 + 0xe);
                  uStack_30c = 1;
                  uStack_2fc = 0;
                  uStack_2f8 = 0;
                  if (uVar3 != 0) {
                    puVar26 = (uint *)local_2e0[0x10];
                    if ((uint *)local_2e0[0x10] == (uint *)0x0) {
                      puVar26 = puVar23;
                    }
                    uVar13 = *puVar26;
                    while (uVar13 == 0) {
                      lVar17 = (longlong)(int)local_310;
                      uStack_2f8 = uStack_2f8 + 0x20;
                      uVar13 = local_310 + 1;
                      bVar30 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <=
                               (int)local_310;
                      local_310 = uVar13;
                      if (bVar30) goto LAB_14165d1ad;
                      uVar13 = puVar26[lVar17 + 1];
                    }
                    uStack_30c = -uVar13 & uVar13;
                    iVar9 = 0x1f;
                    if (uStack_30c != 0) {
                      for (; uStack_30c >> iVar9 == 0; iVar9 = iVar9 + -1) {
                      }
                    }
                    if (uStack_30c == 0) {
                      iVar9 = 0x20;
                    }
                    else {
                      iVar9 = 0x1f - iVar9;
                    }
                    uStack_2fc = (uStack_2f8 - iVar9) + 0x1f;
                    if ((int)uVar3 < (int)uStack_2fc) {
LAB_14165d1ad:
                      uStack_2fc = uVar3;
                    }
                  }
                  uVar13 = *(uint *)(local_2e0 + 0x11);
                  uStack_238 = CONCAT44(uStack_2fc,0xffffffff);
                  uStack_230 = CONCAT44(uStack_2f4,uStack_2f8);
                  uStack_248 = CONCAT44(uStack_30c,local_310);
                  local_300 = -1 << ((byte)uVar13 & 0x1f);
                  uVar25 = uVar13 & 0xffffffe0;
                  uStack_270 = CONCAT44(uStack_30c,local_310);
                  auStack_260._8_8_ = uStack_230;
                  auStack_260._0_8_ = uStack_238;
                  puStack_308 = puVar23;
                  uStack_2fc = uVar13;
                  local_278 = plVar28;
                  puStack_268 = puVar23;
                  local_250 = plVar28;
                  puStack_240 = puVar23;
                  if (uVar13 != uVar3) {
                    puVar26 = (uint *)local_2e0[0x10];
                    if ((uint *)local_2e0[0x10] == (uint *)0x0) {
                      puVar26 = puVar23;
                    }
                    uVar16 = puVar26[(int)uVar13 >> 5] & local_300;
                    iVar9 = (int)uVar13 >> 5;
                    while (uVar16 == 0) {
                      uVar25 = uVar25 + 0x20;
                      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
                      goto LAB_14165d288;
                      uVar16 = puVar26[(longlong)iVar9 + 1];
                      local_300 = 0xffffffff;
                      iVar9 = iVar9 + 1;
                    }
                    uVar16 = -uVar16 & uVar16;
                    iVar9 = 0x1f;
                    if (uVar16 != 0) {
                      for (; uVar16 >> iVar9 == 0; iVar9 = iVar9 + -1) {
                      }
                    }
                    if (uVar16 == 0) {
                      iVar9 = 0x20;
                    }
                    else {
                      iVar9 = 0x1f - iVar9;
                    }
                    uStack_2fc = (uVar25 - iVar9) + 0x1f;
                    uVar13 = uStack_2fc;
                    if ((int)uVar3 < (int)uStack_2fc) {
LAB_14165d288:
                      uStack_2fc = uVar3;
                      uVar13 = uVar3;
                    }
                  }
                  while( true ) {
                    if (((auStack_260._4_4_ == uVar13) && (puStack_268 == puVar23)) &&
                       (local_278 == plVar28)) goto LAB_14165d32c;
                    puVar19 = (undefined1 *)((longlong)(int)auStack_260._4_4_ * 0x38 + *local_278);
                    puVar27 = (undefined8 *)FUN_141671d50(local_d0,puVar19 + 8);
                    puVar18 = &DAT_143f3eda8;
                    if (local_148 != 0) {
                      puVar18 = local_150;
                    }
                    if (*(int *)(puVar27 + 1) == 0) {
                      puVar21 = &DAT_143f3eda8;
                    }
                    else {
                      puVar21 = (undefined2 *)*puVar27;
                    }
                    iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar21,puVar18);
                    if (local_d0[0] != 0) {
                      FMemory::Free();
                    }
                    if (iVar9 == 0) break;
                    auStack_260._0_4_ = auStack_260._0_4_ & ~uStack_270._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_270);
                  }
                  local_325 = *puVar19;
LAB_14165d32c:
                  local_328 = '\x01';
                  if (local_150 != (undefined2 *)0x0) {
                    FMemory::Free();
                  }
                }
                local_330 = FName::ToString(&local_2c8,local_c0);
                puVar27 = local_2d0;
                local_338 = local_2d0;
                ProcessPropertyAndWriteForDefaults(local_2e0,local_325,&local_2b0,&local_320);
                if (local_c0[0] != 0) {
                  FMemory::Free();
                }
              }
              else {
                plVar29 = local_2b0 + (longlong)(int)local_2a8 * 4;
                puVar27 = local_2d0;
                for (plVar28 = local_2b0; local_2d0 = puVar27, plVar28 != plVar29;
                    plVar28 = plVar28 + 4) {
                  uVar10 = FName::ToString(&local_2c8,&local_298);
                  puVar27 = (undefined8 *)GenerateExportedPropertyLine(local_b0,uVar10,plVar28);
                  iVar9 = local_318;
                  pvVar4 = (void *)*puVar27;
                  iVar12 = *(int *)(puVar27 + 1) + -1;
                  if (*(int *)(puVar27 + 1) == 0) {
                    iVar12 = 0;
                  }
                  if (iVar12 != 0) {
                    lVar17 = (longlong)local_318;
                    local_318 = (uint)(local_318 == 0) + iVar12 + local_318;
                    if (local_314 < local_318) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_320,iVar9);
                    }
                    pvVar1 = (void *)((longlong)local_320 + (lVar17 - (ulonglong)(iVar9 != 0)) * 2);
                    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar12 * 2);
                    *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
                  }
                  if (local_b0[0] != 0) {
                    FMemory::Free();
                  }
                  if (CONCAT44(uStack_294,local_298) != 0) {
                    FMemory::Free();
                  }
                  puVar27 = local_2d0;
                }
              }
              plVar29 = local_2b0;
              FUN_140800100(&local_98,local_178,&local_2c8,0);
              plVar28 = plVar29;
              for (iVar9 = (int)local_2a8; iVar9 != 0; iVar9 = iVar9 + -1) {
                if (plVar28[2] != 0) {
                  FMemory::Free();
                }
                if (*plVar28 != 0) {
                  FMemory::Free();
                }
                plVar28 = plVar28 + 4;
              }
              cVar7 = local_328;
              if (plVar29 != (longlong *)0x0) {
                FMemory::Free(plVar29);
                cVar7 = local_328;
              }
            }
            else {
LAB_14165cd9d:
              bVar30 = false;
              cVar8 = FUN_141645d10(local_2e0[0x16],puVar27,&local_2c8,
                                    lVar17 + (longlong)(int)uVar13 * 0x30 + 8);
              if (cVar8 == '\0') goto LAB_14165cdc4;
            }
            if (local_140 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_130 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_120[0] != 0) {
              FMemory::Free();
            }
LAB_14165d50d:
            uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(uint)uStack_1d0 & ~uStack_1e0._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1e0);
            iVar9 = local_318;
            if ((int)local_1d8[6] <= (int)uStack_1d0._4_4_) goto LAB_14165d559;
            uVar20 = (ulonglong)local_64;
            uVar14 = (ulonglong)local_50;
            uVar24 = local_90 & 0xffffffff;
            uVar13 = uStack_1d0._4_4_;
          } while( true );
        }
        goto LAB_14165d5b3;
      }
      goto LAB_14165d638;
    }
  }
  return '\x01';
LAB_14165d559:
  if (local_327 != '\0') {
    lVar17 = (longlong)local_318;
    local_318 = (3 - (uint)(local_318 != 0)) + local_318;
    if (local_314 < local_318) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_320,iVar9);
    }
    puVar2 = (undefined4 *)((longlong)local_320 + (lVar17 - (ulonglong)(iVar9 != 0)) * 2);
    *puVar2 = 0xa000d;
    *(undefined2 *)(puVar2 + 1) = 0;
  }
LAB_14165d5b3:
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_98);
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(uint)uStack_1a0 & ~uStack_1b0._4_4_);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1b0);
  iVar9 = uStack_1a0._4_4_;
  if ((int)local_1a8[6] <= uStack_1a0._4_4_) goto code_r0x00014165d602;
  goto LAB_14165c9b0;
code_r0x00014165d602:
  param_1 = local_2e0;
  param_2 = local_2d8;
  param_3 = local_326;
  if (((char)local_180 != '\0') && (local_180._1_1_ != '\0')) {
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::ConditionalRehash(local_188,(int)local_188[1] - *(int *)((longlong)local_188 + 0x34),1);
    param_1 = local_2e0;
    param_2 = local_2d8;
    param_3 = local_326;
  }
LAB_14165d638:
  iVar9 = local_318;
  puVar18 = &DAT_143f3eda8;
  lVar17 = (longlong)local_318;
  local_318 = (3 - (uint)(local_318 != 0)) + local_318;
  if (local_314 < local_318) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_320,iVar9);
  }
  puVar2 = (undefined4 *)((longlong)local_320 + (lVar17 - (ulonglong)(iVar9 != 0)) * 2);
  *puVar2 = 0xa000d;
  *(undefined2 *)(puVar2 + 1) = 0;
  if (param_3 != '\0') {
    if (*(int *)(param_2 + 1) == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = (undefined2 *)*param_2;
    }
    uVar10 = FRemoteConfig::Get();
    FRemoteConfig::Write(uVar10,puVar21,&local_320);
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar18 = (undefined2 *)*param_2;
  }
  cVar7 = SaveConfigFileWrapper(puVar18,&local_320);
  *(bool *)(param_1 + 10) = cVar7 == '\0';
  if (local_320 != (void *)0x0) {
    FMemory::Free();
  }
  return cVar7;
}



// FUNCTION 14165d740 FUN_14165d740 body=40 status=ok
// SIG undefined FUN_14165d740(void)

undefined8 * FUN_14165d740(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_141673e40();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144ccf368;
  return param_2;
}



// FUNCTION 14165d770 FUN_14165d770 body=43 status=ok
// SIG undefined FUN_14165d770(void)

undefined8 * FUN_14165d770(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14165d7b0 FUN_14165d7b0 body=40 status=ok
// SIG undefined FUN_14165d7b0(void)

undefined8 * FUN_14165d7b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1416739c0();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144ccf388;
  return param_2;
}



// FUNCTION 14165d7e0 TValueOrError<FString,FExpressionError><wchar_t_const_*_&> body=187 status=ok
// SIG undefined TValueOrError<FString,FExpressionError><wchar_t_const_*_&>(void)

longlong TValueOrError<FString,FExpressionError>::
         TValueOrError<FString,FExpressionError><wchar_t_const_*_&>
                   (longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_28;
  int local_20;
  int local_1c;
  
  uVar6 = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  local_28 = 0;
  iVar4 = 0;
  local_1c = 0;
  psVar1 = *(short **)*param_2;
  iVar5 = 0;
  if ((psVar1 != (short *)0x0) && (iVar5 = iVar4, *psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    local_20 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar4 = local_1c;
    iVar5 = local_20;
    uVar6 = local_28;
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(int *)(param_1 + 0x28) = iVar5;
  *(int *)(param_1 + 0x2c) = iVar4;
  *(undefined1 *)(param_1 + 0x30) = 1;
  return param_1;
}



// FUNCTION 14165d8a0 TValueOrError<FExpressionNode,FExpressionError><FFrameRate> body=173 status=ok
// SIG undefined TValueOrError<FExpressionNode,FExpressionError><FFrameRate>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong TValueOrError<FExpressionNode,FExpressionError>::
         TValueOrError<FExpressionNode,FExpressionError><FFrameRate>
                   (longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined ***pppuVar3;
  undefined1 auStack_78 [32];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x18) = 0;
  uVar1 = *(undefined8 *)*param_2;
  piVar2 = (int *)FUN_141673940();
  local_58 = *piVar2;
  iStack_54 = piVar2[1];
  iStack_50 = piVar2[2];
  iStack_4c = piVar2[3];
  local_48 = &PTR_FUN_144ccfb00;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_40 = uVar1;
  FExpressionNode::operator=(param_1 + 0x20,&local_58);
  *(undefined1 *)(param_1 + 0x60) = 1;
  pppuVar3 = &local_48;
  if (((local_58 == 0 && iStack_54 == 0) && iStack_50 == 0) && iStack_4c == 0) {
    pppuVar3 = (undefined ***)0x0;
  }
  if (pppuVar3 != (undefined ***)0x0) {
    (*(code *)**pppuVar3)(pppuVar3,0);
  }
  return param_1;
}



// FUNCTION 14165d950 FUN_14165d950 body=145 status=ok
// SIG undefined FUN_14165d950(void)

longlong FUN_14165d950(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28,*param_2);
  FText::FText(param_1,local_28);
  *(undefined1 *)(param_1 + 0x18) = 1;
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
    *(undefined1 *)(param_1 + 0x60) = 0;
    return param_1;
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  return param_1;
}



// FUNCTION 14165d9f0 TValueOrError<FString,FExpressionError><FText> body=145 status=ok
// SIG undefined TValueOrError<FString,FExpressionError><FText>(void)

longlong TValueOrError<FString,FExpressionError>::TValueOrError<FString,FExpressionError><FText>
                   (longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28,*param_2);
  FText::FText(param_1,local_28);
  *(undefined1 *)(param_1 + 0x18) = 1;
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
    *(undefined1 *)(param_1 + 0x30) = 0;
    return param_1;
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  return param_1;
}



// FUNCTION 14165da90 FUN_14165da90 body=149 status=ok
// SIG undefined FUN_14165da90(void)

undefined4 * FUN_14165da90(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong local_28 [2];
  undefined1 local_18;
  undefined1 local_17;
  
  puVar4 = (undefined4 *)FUN_1416740c0();
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_1 = *puVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FString::FString(local_28,param_2);
  local_18 = (undefined1)param_2[2];
  local_17 = *(undefined1 *)((longlong)param_2 + 0x11);
  *(undefined ***)(param_1 + 4) = &PTR_FUN_144ccfba0;
  FString::FString(param_1 + 6,local_28);
  *(undefined1 *)(param_1 + 10) = local_18;
  *(undefined1 *)((longlong)param_1 + 0x29) = local_17;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14165db30 FUN_14165db30 body=212 status=ok
// SIG undefined FUN_14165db30(void)

undefined8 * FUN_14165db30(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong *plVar8;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar6 = puVar1[1];
  *param_2 = *puVar1;
  param_2[1] = uVar6;
  uVar6 = puVar1[3];
  param_2[2] = puVar1[2];
  param_2[3] = uVar6;
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uVar4 = *(undefined4 *)(puVar1 + 5);
  uVar5 = *(undefined4 *)((longlong)puVar1 + 0x2c);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar3;
  *(undefined4 *)(param_2 + 5) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar5;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xe) = 0;
  if (puVar2[6] == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 8,puVar2 + 2,0x20);
  }
  if (param_2[0xc] != 0) {
    FMemory::Free();
  }
  param_2[0xc] = puVar2[6];
  puVar2[6] = 0;
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(puVar2 + 8);
  *(undefined4 *)(puVar2 + 8) = 0;
  if (*(int *)(param_2 + 0xe) != 0) {
    plVar8 = (longlong *)param_2[0xc];
    if ((longlong *)param_2[0xc] == (longlong *)0x0) {
      plVar8 = param_2 + 8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8);
      pcVar7 = (code *)*puVar2;
      goto LAB_14165dbdf;
    }
  }
  pcVar7 = FUN_141664d10;
LAB_14165dbdf:
  param_2[6] = pcVar7;
  *puVar2 = FUN_141664d10;
  return param_2;
}



// FUNCTION 14165dc10 operator<FString,FRemoteConfigAsyncIOInfo>_TTuple<FString,FRemoteConfigAsyncIOInfo> body=145 status=ok
// SIG undefined operator<FString,FRemoteConfigAsyncIOInfo>_TTuple<FString,FRemoteConfigAsyncIOInfo>(void)

undefined8 *
TPairInitializer<FString_&&,FRemoteConfigAsyncIOInfo_&&>::
operator<FString,FRemoteConfigAsyncIOInfo>_TTuple<FString,FRemoteConfigAsyncIOInfo>
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  *param_2 = 0;
  *param_2 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  FString::FString(param_2 + 2,lVar2);
  param_2[4] = *(undefined8 *)(lVar2 + 0x10);
  param_2[5] = *(undefined8 *)(lVar2 + 0x18);
  param_2[6] = *(undefined8 *)(lVar2 + 0x20);
  *(undefined1 *)(param_2 + 7) = *(undefined1 *)(lVar2 + 0x28);
  *(undefined1 *)((longlong)param_2 + 0x39) = *(undefined1 *)(lVar2 + 0x29);
  ::_guard_xfg_dispatch_icall_nop((void *)((longlong)param_2 + 0x3a),(void *)(lVar2 + 0x2a),0x800);
  return param_2;
}



// FUNCTION 14165dcb0 Cast<TextFormatTokens::FArgumentModifierTokenSpecifier> body=67 status=ok
// SIG undefined Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(void)

int * FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_141673940();
  if (((piVar1[3] == param_1[3] && piVar1[2] == param_1[2]) && piVar1[1] == param_1[1]) &&
      *piVar1 == *param_1) {
    return param_1 + 6;
  }
  return (int *)0x0;
}



// FUNCTION 14165dd00 Cast<TextFormatTokens::FArgumentModifierTokenSpecifier> body=67 status=ok
// SIG undefined Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(void)

int * FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1416740c0();
  if (((piVar1[3] == param_1[3] && piVar1[2] == param_1[2]) && piVar1[1] == param_1[1]) &&
      *piVar1 == *param_1) {
    return param_1 + 6;
  }
  return (int *)0x0;
}



// FUNCTION 14165dd50 FUN_14165dd50 body=373 status=ok
// SIG undefined FUN_14165dd50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014165dda2) */

longlong FUN_14165dd50(longlong param_1,longlong param_2)

{
  wchar_t *_Str2;
  wchar_t *_Str1;
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  size_t _MaxCount;
  undefined **ppuVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  wchar_t *pwStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  char local_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined **local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  ppuVar6 = &PTR_DAT_1464af928;
  pppuVar5 = (undefined ***)0x0;
  local_b0 = param_1;
  do {
    _Str2 = (wchar_t *)*ppuVar6;
    lVar2 = -1;
    _Str1 = *(wchar_t **)(param_2 + 0x20);
    do {
      lVar2 = lVar2 + 1;
    } while (_Str2[lVar2] != L'\0');
    if (((_Str1 < *(wchar_t **)(param_2 + 0x10)) ||
        (_MaxCount = (size_t)(int)lVar2,
        (wchar_t *)(_MaxCount * -2 + *(longlong *)(param_2 + 0x18)) < _Str1)) || (*_Str1 != *_Str2))
    {
LAB_14165de31:
      local_90 = '\0';
    }
    else {
      uStack_b4 = (undefined4)((longlong)_Str1 - (longlong)*(wchar_t **)(param_2 + 0x10) >> 1);
      local_b8 = 0;
      local_c8 = _Str1;
      pwStack_c0 = _Str1;
      iVar1 = wcsncmp(_Str1,_Str2,_MaxCount);
      if (iVar1 != 0) goto LAB_14165de31;
      local_98 = CONCAT44(uStack_b4,local_b8);
      pwStack_c0 = _Str1 + _MaxCount;
      local_90 = '\x01';
      local_a8 = (undefined4)local_c8;
      uStack_a4 = local_c8._4_4_;
      uStack_a0 = pwStack_c0;
    }
    if (local_90 != '\0') {
      piVar3 = (int *)FUN_141673740();
      local_88 = *piVar3;
      iStack_84 = piVar3[1];
      iStack_80 = piVar3[2];
      iStack_7c = piVar3[3];
      local_78[0] = &PTR_FUN_144ccfd00;
      FExpressionTokenConsumer::Add(param_2,&local_a8,&local_88);
      pppuVar4 = local_78;
      if (((local_88 == 0 && iStack_84 == 0) && iStack_80 == 0) && iStack_7c == 0) {
        pppuVar4 = (undefined ***)0x0;
      }
      if (pppuVar4 != (undefined ***)0x0) {
        (*(code *)**pppuVar4)(pppuVar4,0);
      }
    }
    ppuVar6 = ppuVar6 + 1;
    pppuVar5 = (undefined ***)((longlong)pppuVar5 + 1);
    if (pppuVar5 == (undefined ***)0x3) {
      *(undefined1 *)(local_b0 + 0x18) = 0;
      return local_b0;
    }
  } while( true );
}



// FUNCTION 14165ded0 FUN_14165ded0 body=373 status=ok
// SIG undefined FUN_14165ded0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014165df22) */

longlong FUN_14165ded0(longlong param_1,longlong param_2)

{
  wchar_t *_Str2;
  wchar_t *_Str1;
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  size_t _MaxCount;
  undefined **ppuVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  wchar_t *pwStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  char local_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined **local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  ppuVar6 = &PTR_DAT_1464af8b8;
  pppuVar5 = (undefined ***)0x0;
  local_b0 = param_1;
  do {
    _Str2 = (wchar_t *)*ppuVar6;
    lVar2 = -1;
    _Str1 = *(wchar_t **)(param_2 + 0x20);
    do {
      lVar2 = lVar2 + 1;
    } while (_Str2[lVar2] != L'\0');
    if (((_Str1 < *(wchar_t **)(param_2 + 0x10)) ||
        (_MaxCount = (size_t)(int)lVar2,
        (wchar_t *)(_MaxCount * -2 + *(longlong *)(param_2 + 0x18)) < _Str1)) || (*_Str1 != *_Str2))
    {
LAB_14165dfb1:
      local_90 = '\0';
    }
    else {
      uStack_b4 = (undefined4)((longlong)_Str1 - (longlong)*(wchar_t **)(param_2 + 0x10) >> 1);
      local_b8 = 0;
      local_c8 = _Str1;
      pwStack_c0 = _Str1;
      iVar1 = wcsncmp(_Str1,_Str2,_MaxCount);
      if (iVar1 != 0) goto LAB_14165dfb1;
      local_98 = CONCAT44(uStack_b4,local_b8);
      pwStack_c0 = _Str1 + _MaxCount;
      local_90 = '\x01';
      local_a8 = (undefined4)local_c8;
      uStack_a4 = local_c8._4_4_;
      uStack_a0 = pwStack_c0;
    }
    if (local_90 != '\0') {
      piVar3 = (int *)FUN_1416737c0();
      local_88 = *piVar3;
      iStack_84 = piVar3[1];
      iStack_80 = piVar3[2];
      iStack_7c = piVar3[3];
      local_78[0] = &PTR_FUN_144ccfc20;
      FExpressionTokenConsumer::Add(param_2,&local_a8,&local_88);
      pppuVar4 = local_78;
      if (((local_88 == 0 && iStack_84 == 0) && iStack_80 == 0) && iStack_7c == 0) {
        pppuVar4 = (undefined ***)0x0;
      }
      if (pppuVar4 != (undefined ***)0x0) {
        (*(code *)**pppuVar4)(pppuVar4,0);
      }
    }
    ppuVar6 = ppuVar6 + 1;
    pppuVar5 = (undefined ***)((longlong)pppuVar5 + 1);
    if (pppuVar5 == (undefined ***)0x3) {
      *(undefined1 *)(local_b0 + 0x18) = 0;
      return local_b0;
    }
  } while( true );
}



// FUNCTION 14165e050 FUN_14165e050 body=334 status=ok
// SIG undefined FUN_14165e050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14165e050(longlong param_1,longlong param_2)

{
  wchar_t *_Str1;
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined ***pppuVar4;
  size_t _MaxCount;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  wchar_t *pwStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_78;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar2 = -1;
  _Str1 = *(wchar_t **)(param_2 + 0x20);
  do {
    lVar2 = lVar2 + 1;
  } while (*(short *)(PTR_DAT_1464af8f8 + lVar2 * 2) != 0);
  if (((*(wchar_t **)(param_2 + 0x10) <= _Str1) &&
      (_MaxCount = (size_t)(int)lVar2,
      _Str1 <= (wchar_t *)(_MaxCount * -2 + *(longlong *)(param_2 + 0x18)))) &&
     (*_Str1 == *(wchar_t *)PTR_DAT_1464af8f8)) {
    local_98 = 0;
    uStack_94 = (undefined4)((longlong)_Str1 - (longlong)*(wchar_t **)(param_2 + 0x10) >> 1);
    local_a8 = _Str1;
    iVar1 = wcsncmp(_Str1,(wchar_t *)PTR_DAT_1464af8f8,_MaxCount);
    if (iVar1 == 0) {
      local_80 = CONCAT44(uStack_94,local_98);
      pwStack_a0 = _Str1 + _MaxCount;
      local_78 = '\x01';
      local_90 = (undefined4)local_a8;
      uStack_8c = local_a8._4_4_;
      uStack_88 = pwStack_a0;
      goto LAB_14165e112;
    }
  }
  local_78 = '\0';
LAB_14165e112:
  if (local_78 != '\0') {
    piVar3 = (int *)FUN_141673a40();
    local_68 = *piVar3;
    iStack_64 = piVar3[1];
    iStack_60 = piVar3[2];
    iStack_5c = piVar3[3];
    local_58[0] = &PTR_FUN_144ccfca0;
    FExpressionTokenConsumer::Add(param_2,&local_90,&local_68);
    pppuVar4 = local_58;
    if (((local_68 == 0 && iStack_64 == 0) && iStack_60 == 0) && iStack_5c == 0) {
      pppuVar4 = (undefined ***)0x0;
    }
    if (pppuVar4 != (undefined ***)0x0) {
      (*(code *)**pppuVar4)(pppuVar4,0);
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14165e1a0 FUN_14165e1a0 body=373 status=ok
// SIG undefined FUN_14165e1a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014165e1f2) */

longlong FUN_14165e1a0(longlong param_1,longlong param_2)

{
  wchar_t *_Str2;
  wchar_t *_Str1;
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  size_t _MaxCount;
  undefined **ppuVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  wchar_t *pwStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  char local_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined **local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  ppuVar6 = &PTR_DAT_1464af900;
  pppuVar5 = (undefined ***)0x0;
  local_b0 = param_1;
  do {
    _Str2 = (wchar_t *)*ppuVar6;
    lVar2 = -1;
    _Str1 = *(wchar_t **)(param_2 + 0x20);
    do {
      lVar2 = lVar2 + 1;
    } while (_Str2[lVar2] != L'\0');
    if (((_Str1 < *(wchar_t **)(param_2 + 0x10)) ||
        (_MaxCount = (size_t)(int)lVar2,
        (wchar_t *)(_MaxCount * -2 + *(longlong *)(param_2 + 0x18)) < _Str1)) || (*_Str1 != *_Str2))
    {
LAB_14165e281:
      local_90 = '\0';
    }
    else {
      uStack_b4 = (undefined4)((longlong)_Str1 - (longlong)*(wchar_t **)(param_2 + 0x10) >> 1);
      local_b8 = 0;
      local_c8 = _Str1;
      pwStack_c0 = _Str1;
      iVar1 = wcsncmp(_Str1,_Str2,_MaxCount);
      if (iVar1 != 0) goto LAB_14165e281;
      local_98 = CONCAT44(uStack_b4,local_b8);
      pwStack_c0 = _Str1 + _MaxCount;
      local_90 = '\x01';
      local_a8 = (undefined4)local_c8;
      uStack_a4 = local_c8._4_4_;
      uStack_a0 = pwStack_c0;
    }
    if (local_90 != '\0') {
      piVar3 = (int *)FUN_141673ac0();
      local_88 = *piVar3;
      iStack_84 = piVar3[1];
      iStack_80 = piVar3[2];
      iStack_7c = piVar3[3];
      local_78[0] = &PTR_FUN_144ccfcc0;
      FExpressionTokenConsumer::Add(param_2,&local_a8,&local_88);
      pppuVar4 = local_78;
      if (((local_88 == 0 && iStack_84 == 0) && iStack_80 == 0) && iStack_7c == 0) {
        pppuVar4 = (undefined ***)0x0;
      }
      if (pppuVar4 != (undefined ***)0x0) {
        (*(code *)**pppuVar4)(pppuVar4,0);
      }
    }
    ppuVar6 = ppuVar6 + 1;
    pppuVar5 = (undefined ***)((longlong)pppuVar5 + 1);
    if (pppuVar5 == (undefined ***)0x2) {
      *(undefined1 *)(local_b0 + 0x18) = 0;
      return local_b0;
    }
  } while( true );
}



// FUNCTION 14165e320 FUN_14165e320 body=334 status=ok
// SIG undefined FUN_14165e320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14165e320(longlong param_1,longlong param_2)

{
  wchar_t *_Str1;
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined ***pppuVar4;
  size_t _MaxCount;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  wchar_t *pwStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_78;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar2 = -1;
  _Str1 = *(wchar_t **)(param_2 + 0x20);
  do {
    lVar2 = lVar2 + 1;
  } while (*(short *)(PTR_DAT_1464af8e0 + lVar2 * 2) != 0);
  if (((*(wchar_t **)(param_2 + 0x10) <= _Str1) &&
      (_MaxCount = (size_t)(int)lVar2,
      _Str1 <= (wchar_t *)(_MaxCount * -2 + *(longlong *)(param_2 + 0x18)))) &&
     (*_Str1 == *(wchar_t *)PTR_DAT_1464af8e0)) {
    local_98 = 0;
    uStack_94 = (undefined4)((longlong)_Str1 - (longlong)*(wchar_t **)(param_2 + 0x10) >> 1);
    local_a8 = _Str1;
    iVar1 = wcsncmp(_Str1,(wchar_t *)PTR_DAT_1464af8e0,_MaxCount);
    if (iVar1 == 0) {
      local_80 = CONCAT44(uStack_94,local_98);
      pwStack_a0 = _Str1 + _MaxCount;
      local_78 = '\x01';
      local_90 = (undefined4)local_a8;
      uStack_8c = local_a8._4_4_;
      uStack_88 = pwStack_a0;
      goto LAB_14165e3e2;
    }
  }
  local_78 = '\0';
LAB_14165e3e2:
  if (local_78 != '\0') {
    piVar3 = (int *)FUN_141673bc0();
    local_68 = *piVar3;
    iStack_64 = piVar3[1];
    iStack_60 = piVar3[2];
    iStack_5c = piVar3[3];
    local_58[0] = &PTR_FUN_144ccfc60;
    FExpressionTokenConsumer::Add(param_2,&local_90,&local_68);
    pppuVar4 = local_58;
    if (((local_68 == 0 && iStack_64 == 0) && iStack_60 == 0) && iStack_5c == 0) {
      pppuVar4 = (undefined ***)0x0;
    }
    if (pppuVar4 != (undefined ***)0x0) {
      (*(code *)**pppuVar4)(pppuVar4,0);
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14165e470 FUN_14165e470 body=373 status=ok
// SIG undefined FUN_14165e470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014165e4c2) */

longlong FUN_14165e470(longlong param_1,longlong param_2)

{
  wchar_t *_Str2;
  wchar_t *_Str1;
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  size_t _MaxCount;
  undefined **ppuVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  wchar_t *pwStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  char local_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined **local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  ppuVar6 = &PTR_DAT_1464af8e8;
  pppuVar5 = (undefined ***)0x0;
  local_b0 = param_1;
  do {
    _Str2 = (wchar_t *)*ppuVar6;
    lVar2 = -1;
    _Str1 = *(wchar_t **)(param_2 + 0x20);
    do {
      lVar2 = lVar2 + 1;
    } while (_Str2[lVar2] != L'\0');
    if (((_Str1 < *(wchar_t **)(param_2 + 0x10)) ||
        (_MaxCount = (size_t)(int)lVar2,
        (wchar_t *)(_MaxCount * -2 + *(longlong *)(param_2 + 0x18)) < _Str1)) || (*_Str1 != *_Str2))
    {
LAB_14165e551:
      local_90 = '\0';
    }
    else {
      uStack_b4 = (undefined4)((longlong)_Str1 - (longlong)*(wchar_t **)(param_2 + 0x10) >> 1);
      local_b8 = 0;
      local_c8 = _Str1;
      pwStack_c0 = _Str1;
      iVar1 = wcsncmp(_Str1,_Str2,_MaxCount);
      if (iVar1 != 0) goto LAB_14165e551;
      local_98 = CONCAT44(uStack_b4,local_b8);
      pwStack_c0 = _Str1 + _MaxCount;
      local_90 = '\x01';
      local_a8 = (undefined4)local_c8;
      uStack_a4 = local_c8._4_4_;
      uStack_a0 = pwStack_c0;
    }
    if (local_90 != '\0') {
      piVar3 = (int *)FUN_141673c40();
      local_88 = *piVar3;
      iStack_84 = piVar3[1];
      iStack_80 = piVar3[2];
      iStack_7c = piVar3[3];
      local_78[0] = &PTR_FUN_144ccfc80;
      FExpressionTokenConsumer::Add(param_2,&local_a8,&local_88);
      pppuVar4 = local_78;
      if (((local_88 == 0 && iStack_84 == 0) && iStack_80 == 0) && iStack_7c == 0) {
        pppuVar4 = (undefined ***)0x0;
      }
      if (pppuVar4 != (undefined ***)0x0) {
        (*(code *)**pppuVar4)(pppuVar4,0);
      }
    }
    ppuVar6 = ppuVar6 + 1;
    pppuVar5 = (undefined ***)((longlong)pppuVar5 + 1);
    if (pppuVar5 == (undefined ***)0x2) {
      *(undefined1 *)(local_b0 + 0x18) = 0;
      return local_b0;
    }
  } while( true );
}



// FUNCTION 14165e5f0 FUN_14165e5f0 body=373 status=ok
// SIG undefined FUN_14165e5f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014165e642) */

longlong FUN_14165e5f0(longlong param_1,longlong param_2)

{
  wchar_t *_Str2;
  wchar_t *_Str1;
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  size_t _MaxCount;
  undefined **ppuVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  wchar_t *pwStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  char local_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined **local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  ppuVar6 = &PTR_DAT_1464af940;
  pppuVar5 = (undefined ***)0x0;
  local_b0 = param_1;
  do {
    _Str2 = (wchar_t *)*ppuVar6;
    lVar2 = -1;
    _Str1 = *(wchar_t **)(param_2 + 0x20);
    do {
      lVar2 = lVar2 + 1;
    } while (_Str2[lVar2] != L'\0');
    if (((_Str1 < *(wchar_t **)(param_2 + 0x10)) ||
        (_MaxCount = (size_t)(int)lVar2,
        (wchar_t *)(_MaxCount * -2 + *(longlong *)(param_2 + 0x18)) < _Str1)) || (*_Str1 != *_Str2))
    {
LAB_14165e6d1:
      local_90 = '\0';
    }
    else {
      uStack_b4 = (undefined4)((longlong)_Str1 - (longlong)*(wchar_t **)(param_2 + 0x10) >> 1);
      local_b8 = 0;
      local_c8 = _Str1;
      pwStack_c0 = _Str1;
      iVar1 = wcsncmp(_Str1,_Str2,_MaxCount);
      if (iVar1 != 0) goto LAB_14165e6d1;
      local_98 = CONCAT44(uStack_b4,local_b8);
      pwStack_c0 = _Str1 + _MaxCount;
      local_90 = '\x01';
      local_a8 = (undefined4)local_c8;
      uStack_a4 = local_c8._4_4_;
      uStack_a0 = pwStack_c0;
    }
    if (local_90 != '\0') {
      piVar3 = (int *)FUN_141673cc0();
      local_88 = *piVar3;
      iStack_84 = piVar3[1];
      iStack_80 = piVar3[2];
      iStack_7c = piVar3[3];
      local_78[0] = &PTR_FUN_144ccfce0;
      FExpressionTokenConsumer::Add(param_2,&local_a8,&local_88);
      pppuVar4 = local_78;
      if (((local_88 == 0 && iStack_84 == 0) && iStack_80 == 0) && iStack_7c == 0) {
        pppuVar4 = (undefined ***)0x0;
      }
      if (pppuVar4 != (undefined ***)0x0) {
        (*(code *)**pppuVar4)(pppuVar4,0);
      }
    }
    ppuVar6 = ppuVar6 + 1;
    pppuVar5 = (undefined ***)((longlong)pppuVar5 + 1);
    if (pppuVar5 == (undefined ***)0x2) {
      *(undefined1 *)(local_b0 + 0x18) = 0;
      return local_b0;
    }
  } while( true );
}



// FUNCTION 14165e770 FUN_14165e770 body=373 status=ok
// SIG undefined FUN_14165e770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014165e7c2) */

longlong FUN_14165e770(longlong param_1,longlong param_2)

{
  wchar_t *_Str2;
  wchar_t *_Str1;
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  size_t _MaxCount;
  undefined **ppuVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  wchar_t *pwStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  char local_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined **local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  ppuVar6 = &PTR_DAT_1464af8d0;
  pppuVar5 = (undefined ***)0x0;
  local_b0 = param_1;
  do {
    _Str2 = (wchar_t *)*ppuVar6;
    lVar2 = -1;
    _Str1 = *(wchar_t **)(param_2 + 0x20);
    do {
      lVar2 = lVar2 + 1;
    } while (_Str2[lVar2] != L'\0');
    if (((_Str1 < *(wchar_t **)(param_2 + 0x10)) ||
        (_MaxCount = (size_t)(int)lVar2,
        (wchar_t *)(_MaxCount * -2 + *(longlong *)(param_2 + 0x18)) < _Str1)) || (*_Str1 != *_Str2))
    {
LAB_14165e851:
      local_90 = '\0';
    }
    else {
      uStack_b4 = (undefined4)((longlong)_Str1 - (longlong)*(wchar_t **)(param_2 + 0x10) >> 1);
      local_b8 = 0;
      local_c8 = _Str1;
      pwStack_c0 = _Str1;
      iVar1 = wcsncmp(_Str1,_Str2,_MaxCount);
      if (iVar1 != 0) goto LAB_14165e851;
      local_98 = CONCAT44(uStack_b4,local_b8);
      pwStack_c0 = _Str1 + _MaxCount;
      local_90 = '\x01';
      local_a8 = (undefined4)local_c8;
      uStack_a4 = local_c8._4_4_;
      uStack_a0 = pwStack_c0;
    }
    if (local_90 != '\0') {
      piVar3 = (int *)FUN_141673d40();
      local_88 = *piVar3;
      iStack_84 = piVar3[1];
      iStack_80 = piVar3[2];
      iStack_7c = piVar3[3];
      local_78[0] = &PTR_FUN_144ccfc40;
      FExpressionTokenConsumer::Add(param_2,&local_a8,&local_88);
      pppuVar4 = local_78;
      if (((local_88 == 0 && iStack_84 == 0) && iStack_80 == 0) && iStack_7c == 0) {
        pppuVar4 = (undefined ***)0x0;
      }
      if (pppuVar4 != (undefined ***)0x0) {
        (*(code *)**pppuVar4)(pppuVar4,0);
      }
    }
    ppuVar6 = ppuVar6 + 1;
    pppuVar5 = (undefined ***)((longlong)pppuVar5 + 1);
    if (pppuVar5 == (undefined ***)0x2) {
      *(undefined1 *)(local_b0 + 0x18) = 0;
      return local_b0;
    }
  } while( true );
}



// FUNCTION 14165e8f0 FUN_14165e8f0 body=373 status=ok
// SIG undefined FUN_14165e8f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014165e942) */

longlong FUN_14165e8f0(longlong param_1,longlong param_2)

{
  wchar_t *_Str2;
  wchar_t *_Str1;
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  size_t _MaxCount;
  undefined **ppuVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  wchar_t *pwStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  char local_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined **local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  ppuVar6 = &PTR_DAT_1464af910;
  pppuVar5 = (undefined ***)0x0;
  local_b0 = param_1;
  do {
    _Str2 = (wchar_t *)*ppuVar6;
    lVar2 = -1;
    _Str1 = *(wchar_t **)(param_2 + 0x20);
    do {
      lVar2 = lVar2 + 1;
    } while (_Str2[lVar2] != L'\0');
    if (((_Str1 < *(wchar_t **)(param_2 + 0x10)) ||
        (_MaxCount = (size_t)(int)lVar2,
        (wchar_t *)(_MaxCount * -2 + *(longlong *)(param_2 + 0x18)) < _Str1)) || (*_Str1 != *_Str2))
    {
LAB_14165e9d1:
      local_90 = '\0';
    }
    else {
      uStack_b4 = (undefined4)((longlong)_Str1 - (longlong)*(wchar_t **)(param_2 + 0x10) >> 1);
      local_b8 = 0;
      local_c8 = _Str1;
      pwStack_c0 = _Str1;
      iVar1 = wcsncmp(_Str1,_Str2,_MaxCount);
      if (iVar1 != 0) goto LAB_14165e9d1;
      local_98 = CONCAT44(uStack_b4,local_b8);
      pwStack_c0 = _Str1 + _MaxCount;
      local_90 = '\x01';
      local_a8 = (undefined4)local_c8;
      uStack_a4 = local_c8._4_4_;
      uStack_a0 = pwStack_c0;
    }
    if (local_90 != '\0') {
      piVar3 = (int *)FUN_141673dc0();
      local_88 = *piVar3;
      iStack_84 = piVar3[1];
      iStack_80 = piVar3[2];
      iStack_7c = piVar3[3];
      local_78[0] = &PTR_FUN_144ccfd58;
      FExpressionTokenConsumer::Add(param_2,&local_a8,&local_88);
      pppuVar4 = local_78;
      if (((local_88 == 0 && iStack_84 == 0) && iStack_80 == 0) && iStack_7c == 0) {
        pppuVar4 = (undefined ***)0x0;
      }
      if (pppuVar4 != (undefined ***)0x0) {
        (*(code *)**pppuVar4)(pppuVar4,0);
      }
    }
    ppuVar6 = ppuVar6 + 1;
    pppuVar5 = (undefined ***)((longlong)pppuVar5 + 1);
    if (pppuVar5 == (undefined ***)0x3) {
      *(undefined1 *)(local_b0 + 0x18) = 0;
      return local_b0;
    }
  } while( true );
}



// FUNCTION 14165ea70 FUN_14165ea70 body=334 status=ok
// SIG undefined FUN_14165ea70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14165ea70(longlong param_1,longlong param_2)

{
  wchar_t *_Str1;
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined ***pppuVar4;
  size_t _MaxCount;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  wchar_t *pwStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_78;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar2 = -1;
  _Str1 = *(wchar_t **)(param_2 + 0x20);
  do {
    lVar2 = lVar2 + 1;
  } while (*(short *)(PTR_DAT_1464af8b0 + lVar2 * 2) != 0);
  if (((*(wchar_t **)(param_2 + 0x10) <= _Str1) &&
      (_MaxCount = (size_t)(int)lVar2,
      _Str1 <= (wchar_t *)(_MaxCount * -2 + *(longlong *)(param_2 + 0x18)))) &&
     (*_Str1 == *(wchar_t *)PTR_DAT_1464af8b0)) {
    local_98 = 0;
    uStack_94 = (undefined4)((longlong)_Str1 - (longlong)*(wchar_t **)(param_2 + 0x10) >> 1);
    local_a8 = _Str1;
    iVar1 = wcsncmp(_Str1,(wchar_t *)PTR_DAT_1464af8b0,_MaxCount);
    if (iVar1 == 0) {
      local_80 = CONCAT44(uStack_94,local_98);
      pwStack_a0 = _Str1 + _MaxCount;
      local_78 = '\x01';
      local_90 = (undefined4)local_a8;
      uStack_8c = local_a8._4_4_;
      uStack_88 = pwStack_a0;
      goto LAB_14165eb32;
    }
  }
  local_78 = '\0';
LAB_14165eb32:
  if (local_78 != '\0') {
    piVar3 = (int *)FUN_141673f40();
    local_68 = *piVar3;
    iStack_64 = piVar3[1];
    iStack_60 = piVar3[2];
    iStack_5c = piVar3[3];
    local_58[0] = &PTR_FUN_144ccfbe0;
    FExpressionTokenConsumer::Add(param_2,&local_90,&local_68);
    pppuVar4 = local_58;
    if (((local_68 == 0 && iStack_64 == 0) && iStack_60 == 0) && iStack_5c == 0) {
      pppuVar4 = (undefined ***)0x0;
    }
    if (pppuVar4 != (undefined ***)0x0) {
      (*(code *)**pppuVar4)(pppuVar4,0);
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14165ebc0 FUN_14165ebc0 body=334 status=ok
// SIG undefined FUN_14165ebc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14165ebc0(longlong param_1,longlong param_2)

{
  wchar_t *_Str1;
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined ***pppuVar4;
  size_t _MaxCount;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  wchar_t *pwStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_78;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar2 = -1;
  _Str1 = *(wchar_t **)(param_2 + 0x20);
  do {
    lVar2 = lVar2 + 1;
  } while (*(short *)(PTR_DAT_1464af8a8 + lVar2 * 2) != 0);
  if (((*(wchar_t **)(param_2 + 0x10) <= _Str1) &&
      (_MaxCount = (size_t)(int)lVar2,
      _Str1 <= (wchar_t *)(_MaxCount * -2 + *(longlong *)(param_2 + 0x18)))) &&
     (*_Str1 == *(wchar_t *)PTR_DAT_1464af8a8)) {
    local_98 = 0;
    uStack_94 = (undefined4)((longlong)_Str1 - (longlong)*(wchar_t **)(param_2 + 0x10) >> 1);
    local_a8 = _Str1;
    iVar1 = wcsncmp(_Str1,(wchar_t *)PTR_DAT_1464af8a8,_MaxCount);
    if (iVar1 == 0) {
      local_80 = CONCAT44(uStack_94,local_98);
      pwStack_a0 = _Str1 + _MaxCount;
      local_78 = '\x01';
      local_90 = (undefined4)local_a8;
      uStack_8c = local_a8._4_4_;
      uStack_88 = pwStack_a0;
      goto LAB_14165ec82;
    }
  }
  local_78 = '\0';
LAB_14165ec82:
  if (local_78 != '\0') {
    piVar3 = (int *)FUN_141673fc0();
    local_68 = *piVar3;
    iStack_64 = piVar3[1];
    iStack_60 = piVar3[2];
    iStack_5c = piVar3[3];
    local_58[0] = &PTR_FUN_144ccfbc0;
    FExpressionTokenConsumer::Add(param_2,&local_90,&local_68);
    pppuVar4 = local_58;
    if (((local_68 == 0 && iStack_64 == 0) && iStack_60 == 0) && iStack_5c == 0) {
      pppuVar4 = (undefined ***)0x0;
    }
    if (pppuVar4 != (undefined ***)0x0) {
      (*(code *)**pppuVar4)(pppuVar4,0);
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14165ed10 ConsumeSymbol<`anonymous_namespace'::FFramesPerSecond> body=300 status=ok
// SIG undefined ConsumeSymbol<`anonymous_namespace'::FFramesPerSecond>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<_anonymous_namespace_::FFramesPerSecond>
                   (longlong param_1,longlong param_2)

{
  wchar_t *_Str1;
  int iVar1;
  int *piVar2;
  undefined ***pppuVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  wchar_t *pwStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  wchar_t *pwStack_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  _Str1 = *(wchar_t **)(param_2 + 0x20);
  if (((*(wchar_t **)(param_2 + 0x10) <= _Str1) &&
      (_Str1 <= (wchar_t *)(*(longlong *)(param_2 + 0x18) + -6))) && (*_Str1 == L'f')) {
    local_98 = 0;
    uStack_94 = (undefined4)((longlong)_Str1 - (longlong)*(wchar_t **)(param_2 + 0x10) >> 1);
    local_a8 = _Str1;
    iVar1 = wcsncmp(_Str1,L"fps",3);
    if (iVar1 == 0) {
      local_80 = CONCAT44(uStack_94,local_98);
      pwStack_a0 = _Str1 + 3;
      local_78 = 1;
      local_90 = (undefined4)local_a8;
      uStack_8c = local_a8._4_4_;
      pwStack_88 = pwStack_a0;
      piVar2 = (int *)FUN_1416739c0();
      local_68 = *piVar2;
      iStack_64 = piVar2[1];
      iStack_60 = piVar2[2];
      iStack_5c = piVar2[3];
      local_58[0] = &PTR_FUN_144ccf388;
      FExpressionTokenConsumer::Add(param_2,&local_90,&local_68);
      pppuVar3 = local_58;
      if (((local_68 == 0 && iStack_64 == 0) && iStack_60 == 0) && iStack_5c == 0) {
        pppuVar3 = (undefined ***)0x0;
      }
      if (pppuVar3 != (undefined ***)0x0) {
        (*(code *)**pppuVar3)(pppuVar3,0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14165ee40 ConsumeSymbol<`anonymous_namespace'::FSeconds> body=300 status=ok
// SIG undefined ConsumeSymbol<`anonymous_namespace'::FSeconds>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::ConsumeSymbol<_anonymous_namespace_::FSeconds>
                   (longlong param_1,longlong param_2)

{
  wchar_t *_Str1;
  int iVar1;
  int *piVar2;
  undefined ***pppuVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  wchar_t *pwStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  wchar_t *pwStack_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined **local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  _Str1 = *(wchar_t **)(param_2 + 0x20);
  if (((*(wchar_t **)(param_2 + 0x10) <= _Str1) &&
      (_Str1 <= (wchar_t *)(*(longlong *)(param_2 + 0x18) + -2))) && (*_Str1 == L's')) {
    local_98 = 0;
    uStack_94 = (undefined4)((longlong)_Str1 - (longlong)*(wchar_t **)(param_2 + 0x10) >> 1);
    local_a8 = _Str1;
    iVar1 = wcsncmp(_Str1,L"s",1);
    if (iVar1 == 0) {
      local_80 = CONCAT44(uStack_94,local_98);
      pwStack_a0 = _Str1 + 1;
      local_78 = 1;
      local_90 = (undefined4)local_a8;
      uStack_8c = local_a8._4_4_;
      pwStack_88 = pwStack_a0;
      piVar2 = (int *)FUN_141673e40();
      local_68 = *piVar2;
      iStack_64 = piVar2[1];
      iStack_60 = piVar2[2];
      iStack_5c = piVar2[3];
      local_58[0] = &PTR_FUN_144ccf368;
      FExpressionTokenConsumer::Add(param_2,&local_90,&local_68);
      pppuVar3 = local_58;
      if (((local_68 == 0 && iStack_64 == 0) && iStack_60 == 0) && iStack_5c == 0) {
        pppuVar3 = (undefined ***)0x0;
      }
      if (pppuVar3 != (undefined ***)0x0) {
        (*(code *)**pppuVar3)(pppuVar3,0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14165ef70 FUN_14165ef70 body=682 status=ok
// SIG undefined FUN_14165ef70(void)

uint * FUN_14165ef70(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  void *_Dst;
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
  _Src[3] = 0;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar8 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _Dst = (void *)(*param_1 + lVar9 * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
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
      goto LAB_14165f1f6;
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
    uVar4 = FUN_140438070(puVar7);
    uVar4 = (int)param_1[9] - 1U & uVar4;
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
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14165f1f6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 14165f220 FUN_14165f220 body=528 status=ok
// SIG undefined FUN_14165f220(void)

int * FUN_14165f220(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  uint uVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *_Src;
  bool bVar11;
  int local_res8 [2];
  
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
    iVar3 = *(int *)((longlong)iVar9 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar10 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar2 = *puVar2 | 1 << ((byte)iVar9 & 0x1f);
  puVar4 = (undefined8 *)*param_3;
  puVar5 = (undefined8 *)param_3[1];
  bVar11 = false;
  _Src = (undefined8 *)((longlong)iVar9 * 0x20 + *param_1);
  *_Src = 0;
  *_Src = *puVar4;
  *puVar4 = 0;
  *(undefined4 *)(_Src + 1) = *(undefined4 *)(puVar4 + 1);
  *(undefined4 *)((longlong)_Src + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
  puVar4[1] = 0;
  _Src[2] = *puVar5;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      plVar10 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar10,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14165f40d;
    }
  }
  cVar6 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar6 == '\0') {
    iVar9 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar7 = FUN_140438070(puVar8);
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)_Src + 0x1c) = uVar7;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         iVar9;
  }
LAB_14165f40d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 14165f430 FUN_14165f430 body=715 status=ok
// SIG undefined FUN_14165f430(void)

uint * FUN_14165f430(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined8 *_Src;
  int iVar9;
  uint uVar10;
  char cVar11;
  undefined4 uVar12;
  longlong *plVar13;
  bool bVar14;
  uint local_res8 [2];
  
  iVar9 = 1;
  uVar12 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<2120,8>_>,FDefaultAllocator>::
      ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)((longlong)(int)uVar10 * 0x848 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0x848 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = uVar10;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  _Src = (undefined8 *)((longlong)(int)uVar10 * 0x848 + *param_1);
  TPairInitializer<FString_&&,FRemoteConfigAsyncIOInfo_&&>::
  operator<FString,FRemoteConfigAsyncIOInfo>_TTuple<FString,FRemoteConfigAsyncIOInfo>(param_3,_Src);
  *(undefined4 *)(_Src + 0x108) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FRemoteConfigAsyncIOInfo>,TDefaultMapHashableKeyFuncs<FString,FRemoteConfigAsyncIOInfo,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar10 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      plVar13 = (longlong *)(lVar8 * 0x848 + *param_1);
      if (plVar13[2] != 0) {
        FMemory::Free();
      }
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar13,_Src,0x840);
      uVar4 = *param_2;
      bVar2 = (byte)uVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x848 + *param_1) = uVar4;
      }
      puVar5 = (undefined4 *)((longlong)(int)uVar4 * 0x848 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar4;
      plVar13 = (longlong *)param_1[4];
      *param_2 = uVar10;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_14165f6d6;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar9;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar10 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*_Src;
    }
    uVar4 = FUN_140438070(puVar7);
    uVar4 = (int)param_1[9] - 1U & uVar4;
    *(uint *)((longlong)_Src + 0x844) = uVar4;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x108) =
         *(undefined4 *)
          ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(uint *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         uVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FString,FRemoteConfigAsyncIOInfo>,TDefaultMapHashableKeyFuncs<FString,FRemoteConfigAsyncIOInfo,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14165f6d6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 14165f700 FUN_14165f700 body=730 status=ok
// SIG undefined FUN_14165f700(void)

uint * FUN_14165f700(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 *_Src;
  int iVar11;
  uint uVar12;
  char cVar13;
  undefined4 uVar14;
  longlong *plVar15;
  bool bVar16;
  uint local_res8 [2];
  
  iVar11 = 1;
  uVar14 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar12 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar12 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar12 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar12 * 0x20 + 4 + *param_1);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar15 = (longlong *)param_1[4];
  *param_2 = uVar12;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar15 == (longlong *)0x0) {
    plVar15 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar15 +
                   (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
  puVar3 = (undefined8 *)*param_3;
  _Src = (undefined8 *)((longlong)(int)uVar12 * 0x20 + *param_1);
  puVar4 = (undefined8 *)param_3[1];
  *_Src = 0;
  *_Src = *puVar3;
  *puVar3 = 0;
  *(undefined4 *)(_Src + 1) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)((longlong)_Src + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  _Src[2] = *puVar4;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar12 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar16 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      plVar15 = (longlong *)(lVar10 * 0x20 + *param_1);
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar15,_Src,0x18);
      uVar6 = *param_2;
      bVar5 = (byte)uVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar6;
      }
      puVar9 = (undefined4 *)((longlong)(int)uVar6 * 0x20 + *param_1);
      *puVar9 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      puVar9[1] = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar6;
      plVar15 = (longlong *)param_1[4];
      *param_2 = uVar12;
      if (plVar15 == (longlong *)0x0) {
        plVar15 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar15 +
                       (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_14165f9b5;
    }
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar6 = (uVar12 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar13 = '\0';
    if (uVar6 != 0) {
      iVar7 = 0x1f - iVar11;
    }
    uVar6 = (uVar12 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar13 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar12 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar6 = FUN_140438070(puVar8);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Src + 0x1c) = uVar6;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(uint *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         uVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Rehash(param_1);
  }
LAB_14165f9b5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 14165f9e0 FUN_14165f9e0 body=807 status=ok
// SIG undefined FUN_14165f9e0(void)

int * FUN_14165f9e0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  void *_Dst;
  uint uVar13;
  int iVar14;
  void *_Src;
  bool bVar15;
  
  iVar10 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x90);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x90) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  _Src = (void *)((longlong)iVar11 * 0x90 + *param_1);
  FUN_14165db30(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x80) = 0xffffffff;
  bVar15 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar11 = iVar14;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar6 = GetTypeHash(_Src);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar6) * 4);
      if (iVar6 != -1) {
        lVar3 = *param_1;
        do {
          lVar12 = (longlong)iVar6 * 0x90 + lVar3;
          cVar5 = operator==(lVar12,_Src);
          iVar11 = iVar6;
          if (cVar5 != '\0') break;
          iVar6 = *(int *)(lVar12 + 0x80);
          iVar11 = iVar14;
        } while (iVar6 != -1);
      }
    }
    bVar15 = iVar11 != -1;
    if (bVar15) {
      _Dst = (void *)((longlong)iVar11 * 0x90 + *param_1);
      if (*(int *)((longlong)_Dst + 0x70) != 0) {
        plVar9 = *(longlong **)((longlong)_Dst + 0x60);
        if (*(longlong **)((longlong)_Dst + 0x60) == (longlong *)0x0) {
          plVar9 = (longlong *)((longlong)_Dst + 0x40);
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (*(longlong *)((longlong)_Dst + 0x60) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x80);
      iVar10 = *param_2;
      bVar4 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x90) = iVar10;
      }
      puVar8 = (undefined4 *)((longlong)iVar10 * 0x90 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar8[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_14165fce2;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar7 = (uVar13 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar5 = '\0';
    if (uVar7 != 0) {
      iVar10 = 0x1f - iVar14;
    }
    uVar7 = (uVar13 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar7 != 0) {
      cVar5 = '\x1f' - (char)iVar14;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar5 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar14 = *param_2;
    uVar13 = GetTypeHash(_Src);
    uVar13 = (int)param_1[9] - 1U & uVar13;
    *(uint *)((longlong)_Src + 0x84) = uVar13;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x80) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    FUN_141634e80(param_1);
  }
LAB_14165fce2:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 14165fd10 ForwardReturnType<bool> body=169 status=ok
// SIG undefined ForwardReturnType<bool>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong Impl::ForwardReturnType<bool>(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  undefined ***pppuVar3;
  undefined1 auStack_78 [32];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined **local_48;
  undefined1 local_40;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x18) = 0;
  uVar1 = *param_2;
  piVar2 = (int *)FUN_141674140();
  local_58 = *piVar2;
  iStack_54 = piVar2[1];
  iStack_50 = piVar2[2];
  iStack_4c = piVar2[3];
  local_48 = &PTR_FUN_144ccfd38;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_40 = uVar1;
  FExpressionNode::operator=(param_1 + 0x20,&local_58);
  *(undefined1 *)(param_1 + 0x60) = 1;
  pppuVar3 = &local_48;
  if (((local_58 == 0 && iStack_54 == 0) && iStack_50 == 0) && iStack_4c == 0) {
    pppuVar3 = (undefined ***)0x0;
  }
  if (pppuVar3 != (undefined ***)0x0) {
    (*(code *)**pppuVar3)(pppuVar3,0);
  }
  return param_1;
}



// FUNCTION 14165fdc0 TFunction<void___cdecl(void)> body=185 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2[6] == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 2,param_2 + 2,0x20);
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar2 = param_1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      pcVar1 = (code *)*param_2;
      goto LAB_14165fe55;
    }
  }
  pcVar1 = FUN_141664ce0;
LAB_14165fe55:
  *param_1 = pcVar1;
  *param_2 = FUN_141664ce0;
  return param_1;
}



// FUNCTION 14165fe80 FBufferedLine body=159 status=ok
// SIG undefined FBufferedLine(void)

undefined8 *
FBufferedLine::FBufferedLine
          (undefined8 *param_1,short *param_2,undefined8 *param_3,undefined1 param_4,
          undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_1 + 1) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,param_2,(longlong)iVar1 * 2);
  }
  param_1[2] = *param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  param_1[3] = param_5;
  return param_1;
}



// FUNCTION 14165ff20 FCompiledToken body=68 status=ok
// SIG undefined FCompiledToken(void)

undefined8 * FCompiledToken::FCompiledToken(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  FExpressionNode::operator=();
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = uVar1;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  return param_1;
}



// FUNCTION 14165ff70 FEngineVersion body=62 status=ok
// SIG undefined FEngineVersion(void)

undefined2 *
FEngineVersion::FEngineVersion
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          undefined4 param_5,undefined8 param_6)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 4) = param_5;
  FString::operator=(param_1 + 8,param_6);
  return param_1;
}



// FUNCTION 14165ffb0 FEngineVersion body=80 status=ok
// SIG undefined FEngineVersion(void)

undefined4 * FEngineVersion::FEngineVersion(undefined4 *param_1)

{
  undefined4 local_18 [4];
  
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  if (param_1 + 4 != local_18) {
    param_1[6] = 0;
    if (param_1[7] == 0) {
      param_1[7] = 0;
      return param_1;
    }
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy();
  }
  return param_1;
}



// FUNCTION 141660000 FEngineVersionBase body=15 status=ok
// SIG undefined FEngineVersionBase(void)

undefined4 * FEngineVersionBase::FEngineVersionBase(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 141660010 FExpressionNode body=32 status=ok
// SIG undefined FExpressionNode(void)

undefined8 * FExpressionNode::FExpressionNode(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  operator=();
  return param_1;
}



// FUNCTION 141660030 FExpressionToken body=62 status=ok
// SIG undefined FExpressionToken(void)

undefined8 * FExpressionToken::FExpressionToken(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  FExpressionNode::operator=();
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = uVar1;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  return param_1;
}



// FUNCTION 141660070 FFeedbackContext body=206 status=ok
// SIG undefined FFeedbackContext(void)

undefined8 * FFeedbackContext::FFeedbackContext(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined2 *)(param_1 + 1) = 0x100;
  *param_1 = &PTR_FUN_144ccf3a8;
  puVar2 = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 7),4000);
  puVar1 = (undefined8 *)operator_new(0x10);
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_DestroyObject_14413b698;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  param_1[0xc] = puVar3;
  param_1[0xd] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0xc,puVar3,puVar3);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 141660140 FUN_141660140 body=1547 status=ok
// SIG undefined FUN_141660140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_141660140(undefined1 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_f4 [4];
  code **local_f0;
  code **local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  int local_98;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FExpressionGrammar::FExpressionGrammar(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *param_1 = 1;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<_anonymous_namespace_::FSeconds>;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  local_d8 = FUN_1416226a0;
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 8),&local_d8);
  if (local_98 != 0) {
    plVar5 = (longlong *)&local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar5 = local_a8;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<_anonymous_namespace_::FFramesPerSecond>;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  local_d8 = FUN_1416226a0;
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 8),&local_d8);
  if (local_98 != 0) {
    plVar5 = (longlong *)&local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar5 = local_a8;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeSymbol<ExpressionParser::FSquareRoot>;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  local_d8 = FUN_1416226a0;
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 8),&local_d8);
  if (local_98 != 0) {
    plVar5 = (longlong *)&local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar5 = local_a8;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,&local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8620;
    puVar2[1] = ExpressionParser::ConsumeLocalizedNumberWithAgnosticFallback;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  local_d8 = FUN_1416226a0;
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 8),&local_d8);
  if (local_98 != 0) {
    plVar5 = (longlong *)&local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar5 = local_a8;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_e0 = 1;
  local_f0 = (code **)FUN_14162c9f0();
  local_e8 = (code **)&local_e0;
  FUN_14161ce00(param_1 + 0x108,local_f4,&local_f0,0);
  uVar3 = FUN_141673e40();
  FUN_14161cb00(param_1 + 0xb8,local_f4,uVar3,0);
  uVar3 = FUN_1416739c0();
  FUN_14161cb00(param_1 + 0xb8,local_f4,uVar3,0);
  puVar2 = (undefined8 *)FUN_141673e40();
  local_d8 = (code *)*puVar2;
  uStack_d0 = *(undefined4 *)(puVar2 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar4 = (undefined4 *)FUN_14162c970();
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_c8 = *puVar4;
  uStack_c4 = puVar4[1];
  uStack_c0 = puVar4[2];
  uStack_bc = puVar4[3];
  local_b8 = 0;
  uStack_b0 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar2 + 1) = local_f8;
  }
  local_88[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_e4e880840387afd65bddc55ca79f13a7>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
                ::Call;
  local_f0 = &local_d8;
  local_e8 = local_88;
  FUN_14161d420(param_1 + 0x1a8,local_f4,&local_f0,0);
  if (local_48 != 0) {
    plVar5 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar5 = local_58;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined8 *)FUN_1416739c0();
  local_d8 = (code *)*puVar2;
  uStack_d0 = *(undefined4 *)(puVar2 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar4 = (undefined4 *)FUN_14162c970();
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_c8 = *puVar4;
  uStack_c4 = puVar4[1];
  uStack_c0 = puVar4[2];
  uStack_bc = puVar4[3];
  local_b8 = 0;
  uStack_b0 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar2 + 1) = local_f8;
  }
  local_88[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_e7a517058875cd1ca573a60fefca8dc3>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
                ::Call;
  local_f0 = &local_d8;
  local_e8 = local_88;
  FUN_14161d420(param_1 + 0x1a8,local_f4,&local_f0,0);
  if (local_48 != 0) {
    plVar5 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar5 = local_58;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined8 *)FUN_14162c9f0();
  local_d8 = (code *)*puVar2;
  uStack_d0 = *(undefined4 *)(puVar2 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar4 = (undefined4 *)FUN_14162c970();
  local_c8 = *puVar4;
  uStack_c4 = puVar4[1];
  uStack_c0 = puVar4[2];
  uStack_bc = puVar4[3];
  puVar2 = (undefined8 *)FUN_14162c970();
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_b8 = *puVar2;
  uStack_b0 = puVar2[1];
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar2 + 1) = local_f8;
  }
  local_88[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_ff77f8d57e6508d3fed192258dbfb271>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>
                ::Call;
  local_f0 = &local_d8;
  local_e8 = local_88;
  FUN_14161d420(param_1 + 0x1f8,local_f4,&local_f0,0);
  if (local_48 != 0) {
    plVar5 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar5 = local_58;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141660750 FMD5 body=37 status=ok
// SIG undefined FMD5(void)

undefined4 * FMD5::FMD5(undefined4 *param_1)

{
  *param_1 = 0x67452301;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return param_1;
}



// FUNCTION 141660780 FObjectThumbnail body=32 status=ok
// SIG undefined FObjectThumbnail(void)

undefined8 * FObjectThumbnail::FObjectThumbnail(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 1416607a0 FOutputDeviceFile body=142 status=ok
// SIG undefined FOutputDeviceFile(void)

undefined8 *
FOutputDeviceFile::FOutputDeviceFile
          (undefined8 *param_1,wchar_t *param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined2 *)(param_1 + 1) = 0x100;
  param_1[2] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144ccf678;
  param_1[3] = 0;
  *(undefined2 *)((longlong)param_1 + 0x821) = 0;
  *(undefined1 *)(param_1 + 0x104) = param_4;
  param_1[0x105] = 0;
  *(undefined1 *)(param_1 + 0x106) = param_3;
  if (param_2 != (wchar_t *)0x0) {
    wcsncpy((wchar_t *)(param_1 + 4),param_2,0x3ff);
    *(undefined2 *)((longlong)param_1 + 0x81e) = 0;
    return param_1;
  }
  *(undefined2 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 141660830 FRelativePathInitializer body=514 status=ok
// SIG undefined FRelativePathInitializer(void)

undefined2 **
`FPaths::GetRelativePathToRoot'::`2'::FRelativePathInitializer::FRelativePathInitializer
          (undefined2 **param_1)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined2 *_Src;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  puVar5 = (undefined2 *)0x0;
  *param_1 = (undefined2 *)0x0;
  param_1[1] = (undefined2 *)0x0;
  psVar3 = (short *)FUN_1415b59d0();
  local_38 = (undefined2 *)0x0;
  iVar2 = 0;
  local_2c = 0;
  lVar6 = -1;
  _Src = puVar5;
  iVar9 = iVar2;
  if ((psVar3 != (short *)0x0) && (lVar8 = lVar6, _Src = (undefined2 *)0x0, *psVar3 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (psVar3[lVar8] != 0);
    iVar7 = (int)lVar8 + 1;
    local_30 = iVar7;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar9 = local_30;
    _Src = local_38;
    FGenericPlatformString::Memcpy(local_38,psVar3,(longlong)iVar7 * 2);
  }
  psVar3 = (short *)FUN_1416ac480();
  local_38 = (undefined2 *)0x0;
  local_2c = 0;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (psVar3[lVar6] != 0);
    iVar7 = (int)lVar6 + 1;
    local_30 = iVar7;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar2 = local_30;
    puVar5 = local_38;
    FGenericPlatformString::Memcpy(local_38,psVar3,(longlong)iVar7 * 2);
  }
  if (param_1 != &local_38) {
    *(int *)(param_1 + 1) = iVar9;
    if ((iVar9 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar9);
      ::_guard_xfg_dispatch_icall_nop(*param_1,_Src,(longlong)iVar9 * 2);
    }
  }
  puVar4 = &DAT_143f3eda8;
  if (iVar2 != 0) {
    puVar4 = puVar5;
  }
  FUN_141677bd0(param_1,puVar4);
  iVar9 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    iVar9 = 0;
  }
  if (((0 < iVar9) && (cVar1 = FString::EndsWith(param_1,&DAT_144ccf4a0,0), cVar1 == '\0')) &&
     (cVar1 = FString::EndsWith(param_1,&DAT_144ccfab0,0), cVar1 == '\0')) {
    iVar9 = *(int *)(param_1 + 1);
    iVar2 = (2 - (uint)(iVar9 != 0)) + iVar9;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    puVar4 = *param_1;
    puVar4[(longlong)iVar9 - (ulonglong)(iVar9 != 0)] = 0x2f;
    (puVar4 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[1] = 0;
  }
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  if (_Src != (undefined2 *)0x0) {
    FMemory::Free(_Src);
  }
  return param_1;
}



// FUNCTION 141660a40 FSHA1 body=58 status=ok
// SIG undefined FSHA1(void)

undefined4 * FSHA1::FSHA1(undefined4 *param_1)

{
  *(undefined4 **)(param_1 + 0x30) = param_1 + 0x20;
  *(undefined8 *)(param_1 + 5) = 0;
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  return param_1;
}



// FUNCTION 141660a80 FUN_141660a80 body=213 status=ok
// SIG undefined FUN_141660a80(void)

longlong FUN_141660a80(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4,
                      undefined8 param_5)

{
  char cVar1;
  undefined1 uVar2;
  DWORD DVar3;
  LARGE_INTEGER local_res8;
  
  FText::FText(param_1,param_3);
  FText::FText(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  QueryPerformanceCounter(&local_res8);
  *(double *)(param_1 + 0x40) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (param_4 == '\0') {
LAB_141660b19:
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      if (DVar3 != DAT_1468c21c0) goto LAB_141660b19;
    }
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = param_5;
  *(undefined1 *)(param_1 + 0x51) = 0;
  if (*(float *)(param_1 + 0x30) == 0.0) {
    *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  }
  return param_1;
}



// FUNCTION 141660b60 FStringFormatArg body=86 status=ok
// SIG undefined FStringFormatArg(void)

int * FStringFormatArg::FStringFormatArg(int *param_1,int *param_2)

{
  int iVar1;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) {
    if (iVar1 == 3) {
      FString::operator=(param_1 + 4,param_2 + 4);
      return param_1;
    }
    if (iVar1 != 4) {
      return param_1;
    }
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 141660bc0 FStringFormatArg body=25 status=ok
// SIG undefined FStringFormatArg(void)

undefined4 * FStringFormatArg::FStringFormatArg(undefined4 *param_1,int param_2)

{
  *(longlong *)(param_1 + 2) = (longlong)param_2;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 141660be0 FStringFormatArg body=26 status=ok
// SIG undefined FStringFormatArg(void)

undefined4 * FStringFormatArg::FStringFormatArg(undefined4 *param_1,uint param_2)

{
  *(ulonglong *)(param_1 + 2) = (ulonglong)param_2;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 141660c00 FStringFormatArg body=24 status=ok
// SIG undefined FStringFormatArg(void)

undefined4 * FStringFormatArg::FStringFormatArg(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 4;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 141660c20 FStringFormatArg body=69 status=ok
// SIG undefined FStringFormatArg(void)

undefined4 * FStringFormatArg::FStringFormatArg(undefined4 *param_1,longlong *param_2)

{
  *param_1 = 3;
  *(undefined8 *)(param_1 + 4) = 0;
  *(longlong *)(param_1 + 4) = *param_2;
  *param_2 = 0;
  param_1[6] = (int)param_2[1];
  param_1[7] = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141660c70 FUN_141660c70 body=1916 status=ok
// SIG undefined FUN_141660c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_141660c70(undefined1 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x48] = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3f130;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_4ca5cca653bb252eb5b06520e76eef95>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
                ::Call;
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 8),local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3f130;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_4ca5cca653bb252eb5b06520e76eef95>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
                ::Call;
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 8),local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3f130;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_4ca5cca653bb252eb5b06520e76eef95>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
                ::Call;
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 8),local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3f130;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_344fbae52e3d725d33b7def87d897657>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
                ::Call;
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x38),local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3f130;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_344fbae52e3d725d33b7def87d897657>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
                ::Call;
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x38),local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3f130;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_344fbae52e3d725d33b7def87d897657>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
                ::Call;
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x38),local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3f130;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_4ca5cca653bb252eb5b06520e76eef95>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
                ::Call;
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x20),local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3f130;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_4ca5cca653bb252eb5b06520e76eef95>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
                ::Call;
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x20),local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3f130;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_4ca5cca653bb252eb5b06520e76eef95>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
                ::Call;
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x20),local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3f130;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_344fbae52e3d725d33b7def87d897657>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
                ::Call;
  *(int *)(param_1 + 0x58) = iVar1 + 1;
  if (*(int *)(param_1 + 0x5c) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x50,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x50),local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3f130;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_344fbae52e3d725d33b7def87d897657>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
                ::Call;
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x20),local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3f130;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_344fbae52e3d725d33b7def87d897657>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
                ::Call;
  *(int *)(param_1 + 0x58) = iVar1 + 1;
  if (*(int *)(param_1 + 0x5c) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x50,iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x50),local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416613f0 FTextFilterExpressionEvaluator body=337 status=ok
// SIG undefined FTextFilterExpressionEvaluator(void)

undefined8 *
FTextFilterExpressionEvaluator::FTextFilterExpressionEvaluator
          (undefined8 *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 1) = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144ccfad0;
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  FText::FText(param_1 + 2);
  FText::FText(param_1 + 5);
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FExpressionGrammar::FExpressionGrammar(param_1 + 0x1d);
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  FUN_141667740(param_1);
  return param_1;
}



// FUNCTION 141661550 FWrappedOperator body=110 status=ok
// SIG undefined FWrappedOperator(void)

undefined8 *
FExpressionCompiler::FWrappedOperator::FWrappedOperator
          (undefined8 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  FExpressionNode::operator=();
  iVar1 = param_2[0x10];
  iVar2 = param_2[0x11];
  iVar3 = param_2[0x12];
  iVar4 = param_2[0x13];
  *(int *)(param_1 + 8) = iVar1;
  *(int *)((longlong)param_1 + 0x44) = iVar2;
  *(int *)(param_1 + 9) = iVar3;
  *(int *)((longlong)param_1 + 0x4c) = iVar4;
  param_1[10] = *(undefined8 *)(param_2 + 0x14);
  *(int *)(param_1 + 0xb) = param_2[0x16];
  *(undefined4 *)(param_1 + 0xc) = param_3;
  piVar5 = param_2 + 4;
  if (((param_2[3] == 0 && param_2[2] == 0) && param_2[1] == 0) && *param_2 == 0) {
    piVar5 = (int *)0x0;
  }
  if (piVar5 != (int *)0x0) {
    (*(code *)**(undefined8 **)piVar5)(iVar1,0);
  }
  return param_1;
}



// FUNCTION 1416615c0 ~TArray<FExpressionToken,TSizedDefaultAllocator<32>_> body=130 status=ok
// SIG undefined ~TArray<FExpressionToken,TSizedDefaultAllocator<32>_>(void)

void TArray<FExpressionToken,TSizedDefaultAllocator<32>_>::
     ~TArray<FExpressionToken,TSizedDefaultAllocator<32>_>(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 != 0) {
    do {
      piVar1 = piVar2 + 4;
      if (((piVar2[3] == 0 && piVar2[2] == 0) && piVar2[1] == 0) && *piVar2 == 0) {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        (*(code *)**(undefined8 **)piVar1)(piVar1,0);
      }
      piVar2 = piVar2 + 0x18;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    piVar2 = (int *)*param_1;
  }
  if (piVar2 != (int *)0x0) {
    FMemory::Free(piVar2);
    return;
  }
  return;
}



// FUNCTION 141661650 FUN_141661650 body=130 status=ok
// SIG undefined FUN_141661650(void)

void FUN_141661650(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 != 0) {
    do {
      piVar1 = piVar2 + 4;
      if (((piVar2[3] == 0 && piVar2[2] == 0) && piVar2[1] == 0) && *piVar2 == 0) {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        (*(code *)**(undefined8 **)piVar1)(piVar1,0);
      }
      piVar2 = piVar2 + 0x16;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    piVar2 = (int *)*param_1;
  }
  if (piVar2 != (int *)0x0) {
    FMemory::Free(piVar2);
    return;
  }
  return;
}



// FUNCTION 1416616e0 ~TQueue<TArray<unsigned_char,FDefaultAllocator>,1> body=95 status=ok
// SIG undefined ~TQueue<TArray<unsigned_char,FDefaultAllocator>,1>(void)

void TQueue<TArray<unsigned_char,FDefaultAllocator>,1>::
     ~TQueue<TArray<unsigned_char,FDefaultAllocator>,1>(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 8) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(lVar1,0x18);
    }
    lVar1 = *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 141661740 ~FBufferReaderWithSHA body=395 status=ok
// SIG undefined ~FBufferReaderWithSHA(void)

void FBufferReaderWithSHA::~FBufferReaderWithSHA(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  short *psVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)0x0;
  *param_1 = &PTR__scalar_deleting_destructor__144ccf6b8;
  if (param_1[0x12] != 0) {
    puVar4 = (undefined8 *)operator_new(0x40);
    if (puVar4 != (undefined8 *)0x0) {
      if (*(int *)(param_1 + 0x17) == 0) {
        psVar5 = &DAT_143f3eda8;
      }
      else {
        psVar5 = (short *)param_1[0x16];
      }
      *puVar4 = &PTR_LAB_144ccf8a8;
      uVar1 = *(undefined1 *)(param_1 + 0x18);
      uVar2 = *(undefined1 *)(param_1 + 0x15);
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      puVar4[1] = param_1[0x12];
      *(undefined4 *)(puVar4 + 2) = uVar3;
      puVar4[5] = 0;
      puVar4[6] = 0;
      if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (psVar5[lVar7] != 0);
        iVar6 = (int)lVar7 + 1;
        *(int *)(puVar4 + 6) = iVar6;
        if (0 < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar4 + 5,0);
        }
        FGenericPlatformString::Memcpy(puVar4[5],psVar5,(longlong)iVar6 * 2);
      }
      *(undefined1 *)(puVar4 + 7) = uVar1;
      *(undefined1 *)((longlong)puVar4 + 0x39) = uVar2;
      puVar8 = puVar4;
    }
    if (DAT_1468b5010 == (longlong *)0x0) {
      FUN_14166a590(puVar8);
    }
    else {
      (**(code **)(*DAT_1468b5010 + 0x10))(DAT_1468b5010,puVar8);
    }
    param_1[0x12] = 0;
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f600f0;
  if (*(char *)(param_1 + 0x15) != '\0') {
    FMemory::Free(param_1[0x12]);
    param_1[0x12] = 0;
  }
  FArchive::~FArchive(param_1);
  return;
}



// FUNCTION 1416618d0 ~FExec body=11 status=ok
// SIG undefined ~FExec(void)

void FExec::~FExec(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ca00b0;
  return;
}



// FUNCTION 1416618e0 ~FExpressionNode body=38 status=ok
// SIG undefined ~FExpressionNode(void)

void FExpressionNode::~FExpressionNode(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 4;
  if (((param_1[3] == 0 && param_1[2] == 0) && param_1[1] == 0) && *param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141661902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)piVar1)(piVar1,0);
    return;
  }
  return;
}



// FUNCTION 141661910 FUN_141661910 body=266 status=ok
// SIG undefined FUN_141661910(void)

void FUN_141661910(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_144ccf3a8;
  iVar6 = *(int *)(param_1 + 0xf);
  puVar4 = (undefined8 *)param_1[0xe];
  if (iVar6 != 0) {
    do {
      TDefaultDelete<FSlowTask>::operator()(puVar4,*puVar4);
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar4 = (undefined8 *)param_1[0xe];
  }
  if (puVar4 != (undefined8 *)0x0) {
    FMemory::Free(puVar4);
  }
  plVar5 = (longlong *)param_1[0xd];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  iVar6 = *(int *)(param_1 + 6);
  plVar5 = (longlong *)param_1[5];
  if (iVar6 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar5 = (longlong *)param_1[5];
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  iVar6 = *(int *)(param_1 + 4);
  plVar5 = (longlong *)param_1[3];
  if (iVar6 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar5 = (longlong *)param_1[3];
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  return;
}



// FUNCTION 141661a20 ~FOutputDeviceFile body=182 status=ok
// SIG undefined ~FOutputDeviceFile(void)

void FOutputDeviceFile::~FOutputDeviceFile(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144ccf678;
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    if (*(char *)(param_1 + 1) == '\0') {
      uVar3 = FGenericPlatformTime::StrTimestamp();
      FOutputDevice::LogfImpl(param_1,L"Log file closed, %s",uVar3);
      plVar4 = (longlong *)param_1[2];
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,1);
    }
    param_1[2] = 0;
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x821) = 0;
  lVar2 = param_1[0x105];
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x48) = 0;
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar2);
    FMemory::operator_delete(lVar2,0x50);
  }
  return;
}



// FUNCTION 141661ae0 ~FOutputDeviceRedirector body=158 status=ok
// SIG undefined ~FOutputDeviceRedirector(void)

void FOutputDeviceRedirector::~FOutputDeviceRedirector(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x28);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x20);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x10);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 141661b80 ~FSHA1 body=41 status=ok
// SIG undefined ~FSHA1(void)

void FSHA1::~FSHA1(undefined4 *param_1)

{
  *param_1 = 0x67452301;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  return;
}



// FUNCTION 141661bb0 ~FTextFilterExpressionEvaluator body=282 status=ok
// SIG undefined ~FTextFilterExpressionEvaluator(void)

void FTextFilterExpressionEvaluator::~FTextFilterExpressionEvaluator(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144ccfad0;
  TOperatorJumpTable<void>::~TOperatorJumpTable<void>(param_1 + 0x45);
  FExpressionGrammar::~FExpressionGrammar(param_1 + 0x1d);
  TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
  ::
  ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
            (param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TBaseDelegate<AOnlineBeaconClient_*,UNetConnection_*>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x10,0);
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0xf) != '\0') {
    *(undefined1 *)(param_1 + 0xf) = 0;
    TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>::
    ~TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>();
  }
  plVar4 = (longlong *)param_1[6];
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
  return;
}



// FUNCTION 141661cd0 operator= body=252 status=ok
// SIG undefined operator=(void)

int * FExpressionNode::operator=(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  
  iVar1 = *param_1;
  if ((((*param_2 == iVar1 && param_2[1] == param_1[1]) && param_2[2] == param_1[2]) &&
       param_2[3] == param_1[3]) &&
     (iVar1 != 0 || ((param_1[1] != 0 || param_1[2] != 0) || param_1[3] != 0))) {
    plVar4 = (longlong *)(param_2 + 4);
    if (((*param_2 == 0 && param_2[1] == 0) && param_2[2] == 0) && param_2[3] == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,param_1 + 4);
  }
  else {
    piVar5 = param_1 + 4;
    if (iVar1 == 0 && ((param_1[1] == 0 && param_1[2] == 0) && param_1[3] == 0)) {
      piVar5 = (int *)0x0;
    }
    if (piVar5 != (int *)0x0) {
      (*(code *)**(undefined8 **)piVar5)(piVar5,0);
    }
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    iVar3 = param_2[3];
    plVar4 = (longlong *)(param_2 + 4);
    *param_1 = *param_2;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    param_1[3] = iVar3;
    if (((*param_2 == 0 && param_2[3] == 0) && param_2[2] == 0) && param_2[1] == 0) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,param_1 + 4);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      (**(code **)*plVar4)(plVar4,0);
    }
  }
  return param_1;
}



// FUNCTION 141661dd0 operator= body=177 status=ok
// SIG undefined operator=(void)

longlong FRemoteConfigAsyncIOInfo::operator=(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FString::operator=();
  lVar3 = 8;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  puVar2 = (undefined8 *)(param_1 + 0x2a);
  puVar4 = (undefined8 *)(param_2 + 0x2a);
  do {
    uVar1 = puVar4[1];
    *puVar2 = *puVar4;
    puVar2[1] = uVar1;
    uVar1 = puVar4[3];
    puVar2[2] = puVar4[2];
    puVar2[3] = uVar1;
    uVar1 = puVar4[5];
    puVar2[4] = puVar4[4];
    puVar2[5] = uVar1;
    uVar1 = puVar4[7];
    puVar2[6] = puVar4[6];
    puVar2[7] = uVar1;
    uVar1 = puVar4[9];
    puVar2[8] = puVar4[8];
    puVar2[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar2[10] = puVar4[10];
    puVar2[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar2[0xc] = puVar4[0xc];
    puVar2[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar2[0xe] = puVar4[0xe];
    puVar2[0xf] = uVar1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x10;
    puVar4 = puVar4 + 0x10;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 141661e90 FUN_141661e90 body=30 status=ok
// SIG undefined FUN_141661e90(void)

longlong * FUN_141661e90(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x50))(param_1,param_2,0x14);
  return param_1;
}



// FUNCTION 141661eb0 operator<< body=131 status=ok
// SIG undefined operator<<(void)

void operator<<(undefined8 param_1,longlong param_2)

{
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_14167f570(local_28,param_2);
  FUN_14167f570(local_18,param_2 + 2);
  FUN_14167f570(local_18,param_2 + 4);
  FUN_1415d6020(local_18,param_2 + 8);
  FUN_14158ce90(*(undefined8 *)(local_18 + 8),param_2 + 0x10);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return;
}



// FUNCTION 141661f40 FUN_141661f40 body=258 status=ok
// SIG undefined FUN_141661f40(void)

void FUN_141661f40(longlong *param_1,undefined4 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *local_18;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(*param_1 + 8);
  bVar1 = *(byte *)(lVar2 + 0x28);
  if ((bVar1 & 8) == 0) {
    FUN_1415d6020(*param_1);
    FUN_1415d6020(*param_1,param_2 + 1);
    FUN_1415d6020(*param_1,param_2 + 2);
    FUN_1415d6020(*param_1,param_2 + 3);
  }
  else {
    if ((bVar1 & 1) == 0) {
      FString::PrintfImpl(&local_18,L"%08X%08X%08X%08X",*param_2,param_2[1],param_2[2],param_2[3]);
      FUN_14158ce90(*(undefined8 *)(*param_1 + 8),&local_18);
    }
    else {
      local_18 = (undefined2 *)0x0;
      local_10 = 0;
      FUN_14158ce90(lVar2,&local_18);
      puVar3 = &DAT_143f3eda8;
      if ((int)local_10 != 0) {
        puVar3 = local_18;
      }
      FUN_1416759d0(param_2,puVar3);
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 141662050 operator<< body=86 status=ok
// SIG undefined operator<<(void)

void operator<<(longlong *param_1,longlong param_2)

{
  FUN_14167f570(*param_1);
  FUN_14167f570(*param_1,param_2 + 2);
  FUN_14167f570(*param_1,param_2 + 4);
  FUN_1415d6020(*param_1,param_2 + 8);
  FUN_14158ce90(*(undefined8 *)(*param_1 + 8),param_2 + 0x10);
  return;
}



// FUNCTION 1416620b0 FUN_1416620b0 body=250 status=ok
// SIG undefined FUN_1416620b0(void)

undefined8
FUN_1416620b0(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined1 local_res10 [8];
  
  piVar1 = (int *)FUN_1416740c0();
  piVar4 = param_4 + 6;
  if (((piVar1[3] != param_4[3] || piVar1[2] != param_4[2]) || piVar1[1] != param_4[1]) ||
      *param_4 != *piVar1) {
    piVar4 = (int *)0x0;
  }
  piVar2 = (int *)FUN_1416740c0();
  piVar1 = param_3 + 6;
  if (((piVar2[3] != param_3[3] || piVar2[2] != param_3[2]) || piVar2[1] != param_3[1]) ||
      *param_3 != *piVar2) {
    piVar1 = (int *)0x0;
  }
  if (piVar1[2] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)piVar1;
  }
  FName::FName(local_res10,puVar3,1);
  param_5._0_1_ =
       (**(code **)(*(longlong *)CONCAT71(param_5._1_7_,(char)param_5) + 8))
                 ((longlong *)CONCAT71(param_5._1_7_,(char)param_5),local_res10,piVar4,1,
                  (char)piVar4[4]);
  if (*(char *)((longlong)piVar4 + 0x11) != '\0') {
    param_5._0_1_ = (char)param_5 == '\0';
  }
  Impl::ForwardReturnType<bool>(param_2,&param_5);
  return param_2;
}



// FUNCTION 1416621b0 FUN_1416621b0 body=264 status=ok
// SIG undefined FUN_1416621b0(void)

undefined8
FUN_1416621b0(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  undefined1 uVar10;
  int *piVar11;
  int *piVar12;
  int *local_res20;
  
  local_res20 = param_4;
  piVar11 = (int *)FUN_141674140();
  iVar1 = param_4[2];
  iVar2 = param_4[3];
  iVar3 = param_4[1];
  iVar4 = *param_4;
  iVar5 = piVar11[3];
  iVar6 = piVar11[2];
  iVar7 = piVar11[1];
  iVar8 = *piVar11;
  piVar12 = (int *)FUN_1416740c0();
  piVar11 = param_3 + 6;
  if (((piVar12[3] != param_3[3] || piVar12[2] != param_3[2]) || piVar12[1] != param_3[1]) ||
      *param_3 != *piVar12) {
    piVar11 = (int *)0x0;
  }
  piVar12 = local_res20 + 6;
  if (((iVar3 != iVar7 || iVar4 != iVar8) || iVar2 != iVar5) || iVar1 != iVar6) {
    piVar12 = (int *)0x0;
  }
  iVar1 = *piVar12;
  if (piVar11[2] < 2) {
LAB_141662281:
    if ((char)iVar1 != '\0') {
      uVar10 = 1;
      goto LAB_14166228b;
    }
  }
  else {
    cVar9 = (**(code **)*param_5)(param_5,piVar11,(char)piVar11[4]);
    if (*(char *)((longlong)piVar11 + 0x11) != '\0') {
      cVar9 = cVar9 == '\0';
    }
    if (cVar9 != '\0') goto LAB_141662281;
  }
  uVar10 = 0;
LAB_14166228b:
  local_res20 = (int *)CONCAT71(local_res20._1_7_,uVar10);
  Impl::ForwardReturnType<bool>(param_2,&local_res20);
  return param_2;
}



// FUNCTION 1416622c0 operator() body=191 status=ok
// SIG undefined operator()(void)

undefined8
<lambda_695ac3e158d5320a2c521e967b20ef74>::operator()
          (undefined8 param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined1 local_res10 [8];
  
  piVar9 = (int *)FUN_141674140();
  iVar1 = piVar9[3];
  iVar2 = piVar9[2];
  iVar3 = param_4[3];
  iVar4 = param_4[2];
  iVar5 = piVar9[1];
  iVar6 = param_4[1];
  iVar7 = *param_4;
  iVar8 = *piVar9;
  piVar10 = (int *)FUN_141674140();
  piVar9 = param_3 + 6;
  if (((piVar10[3] != param_3[3] || piVar10[2] != param_3[2]) || piVar10[1] != param_3[1]) ||
      *param_3 != *piVar10) {
    piVar9 = (int *)0x0;
  }
  if ((char)*piVar9 == '\0') {
    param_4 = param_4 + 6;
    if (((iVar1 != iVar3 || iVar2 != iVar4) || iVar5 != iVar6) || iVar7 != iVar8) {
      param_4 = (int *)0x0;
    }
    if ((char)*param_4 == '\0') {
      local_res10[0] = 0;
      goto LAB_141662355;
    }
  }
  local_res10[0] = 1;
LAB_141662355:
  Impl::ForwardReturnType<bool>(param_2,local_res10);
  return param_2;
}



// FUNCTION 141662380 FUN_141662380 body=250 status=ok
// SIG undefined FUN_141662380(void)

undefined8
FUN_141662380(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined1 local_res10 [8];
  
  piVar1 = (int *)FUN_1416740c0();
  piVar4 = param_4 + 6;
  if (((piVar1[3] != param_4[3] || piVar1[2] != param_4[2]) || piVar1[1] != param_4[1]) ||
      *param_4 != *piVar1) {
    piVar4 = (int *)0x0;
  }
  piVar2 = (int *)FUN_1416740c0();
  piVar1 = param_3 + 6;
  if (((piVar2[3] != param_3[3] || piVar2[2] != param_3[2]) || piVar2[1] != param_3[1]) ||
      *param_3 != *piVar2) {
    piVar1 = (int *)0x0;
  }
  if (piVar1[2] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)piVar1;
  }
  FName::FName(local_res10,puVar3,1);
  param_5._0_1_ =
       (**(code **)(*(longlong *)CONCAT71(param_5._1_7_,(char)param_5) + 8))
                 ((longlong *)CONCAT71(param_5._1_7_,(char)param_5),local_res10,piVar4,3,
                  (char)piVar4[4]);
  if (*(char *)((longlong)piVar4 + 0x11) != '\0') {
    param_5._0_1_ = (char)param_5 == '\0';
  }
  Impl::ForwardReturnType<bool>(param_2,&param_5);
  return param_2;
}



// FUNCTION 141662480 FUN_141662480 body=232 status=ok
// SIG undefined FUN_141662480(void)

undefined8
FUN_141662480(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *local_res20;
  
  local_res20 = param_4;
  piVar10 = (int *)FUN_1416740c0();
  iVar1 = param_4[3];
  iVar2 = param_4[2];
  iVar3 = param_4[1];
  iVar4 = piVar10[3];
  iVar5 = piVar10[2];
  iVar6 = piVar10[1];
  iVar7 = *piVar10;
  iVar8 = *param_4;
  piVar11 = (int *)FUN_1416740c0();
  piVar10 = param_3 + 6;
  piVar12 = local_res20 + 6;
  if (((iVar1 != iVar4 || iVar5 != iVar2) || iVar7 != iVar8) || iVar6 != iVar3) {
    piVar12 = (int *)0x0;
  }
  if (((piVar11[3] != param_3[3] || piVar11[2] != param_3[2]) || piVar11[1] != param_3[1]) ||
      *param_3 != *piVar11) {
    piVar10 = (int *)0x0;
  }
  uVar9 = FUN_141663000(param_1,piVar10,piVar12,param_5);
  local_res20 = (int *)CONCAT71(local_res20._1_7_,uVar9);
  Impl::ForwardReturnType<bool>(param_2,&local_res20);
  return param_2;
}



// FUNCTION 141662570 FUN_141662570 body=250 status=ok
// SIG undefined FUN_141662570(void)

undefined8
FUN_141662570(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined1 local_res10 [8];
  
  piVar1 = (int *)FUN_1416740c0();
  piVar4 = param_4 + 6;
  if (((piVar1[3] != param_4[3] || piVar1[2] != param_4[2]) || piVar1[1] != param_4[1]) ||
      *param_4 != *piVar1) {
    piVar4 = (int *)0x0;
  }
  piVar2 = (int *)FUN_1416740c0();
  piVar1 = param_3 + 6;
  if (((piVar2[3] != param_3[3] || piVar2[2] != param_3[2]) || piVar2[1] != param_3[1]) ||
      *param_3 != *piVar2) {
    piVar1 = (int *)0x0;
  }
  if (piVar1[2] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)piVar1;
  }
  FName::FName(local_res10,puVar3,1);
  param_5._0_1_ =
       (**(code **)(*(longlong *)CONCAT71(param_5._1_7_,(char)param_5) + 8))
                 ((longlong *)CONCAT71(param_5._1_7_,(char)param_5),local_res10,piVar4,2,
                  (char)piVar4[4]);
  if (*(char *)((longlong)piVar4 + 0x11) != '\0') {
    param_5._0_1_ = (char)param_5 == '\0';
  }
  Impl::ForwardReturnType<bool>(param_2,&param_5);
  return param_2;
}



// FUNCTION 141662670 FUN_141662670 body=232 status=ok
// SIG undefined FUN_141662670(void)

undefined8
FUN_141662670(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *local_res20;
  
  local_res20 = param_4;
  piVar10 = (int *)FUN_1416740c0();
  iVar1 = param_4[3];
  iVar2 = param_4[2];
  iVar3 = param_4[1];
  iVar4 = piVar10[3];
  iVar5 = piVar10[2];
  iVar6 = piVar10[1];
  iVar7 = *piVar10;
  iVar8 = *param_4;
  piVar11 = (int *)FUN_1416740c0();
  piVar10 = param_3 + 6;
  piVar12 = local_res20 + 6;
  if (((iVar1 != iVar4 || iVar5 != iVar2) || iVar7 != iVar8) || iVar6 != iVar3) {
    piVar12 = (int *)0x0;
  }
  if (((piVar11[3] != param_3[3] || piVar11[2] != param_3[2]) || piVar11[1] != param_3[1]) ||
      *param_3 != *piVar11) {
    piVar10 = (int *)0x0;
  }
  uVar9 = FUN_141662a40(param_1,piVar10,piVar12,param_5);
  local_res20 = (int *)CONCAT71(local_res20._1_7_,uVar9);
  Impl::ForwardReturnType<bool>(param_2,&local_res20);
  return param_2;
}



// FUNCTION 141662760 operator() body=191 status=ok
// SIG undefined operator()(void)

undefined8
<lambda_77e74835ea2b53ad4ce9e699d5e1eda2>::operator()
          (undefined8 param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined1 local_res10 [8];
  
  piVar9 = (int *)FUN_141674140();
  iVar1 = piVar9[3];
  iVar2 = piVar9[2];
  iVar3 = param_4[3];
  iVar4 = param_4[2];
  iVar5 = piVar9[1];
  iVar6 = param_4[1];
  iVar7 = *param_4;
  iVar8 = *piVar9;
  piVar10 = (int *)FUN_141674140();
  piVar9 = param_3 + 6;
  if (((piVar10[3] != param_3[3] || piVar10[2] != param_3[2]) || piVar10[1] != param_3[1]) ||
      *param_3 != *piVar10) {
    piVar9 = (int *)0x0;
  }
  if ((char)*piVar9 != '\0') {
    param_4 = param_4 + 6;
    if (((iVar1 != iVar3 || iVar2 != iVar4) || iVar5 != iVar6) || iVar7 != iVar8) {
      param_4 = (int *)0x0;
    }
    if ((char)*param_4 != '\0') {
      local_res10[0] = 1;
      goto LAB_1416627f5;
    }
  }
  local_res10[0] = 0;
LAB_1416627f5:
  Impl::ForwardReturnType<bool>(param_2,local_res10);
  return param_2;
}



// FUNCTION 141662820 FUN_141662820 body=279 status=ok
// SIG undefined FUN_141662820(void)

undefined8 FUN_141662820(longlong *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  int local_res8 [2];
  
  piVar2 = (int *)FUN_1416740c0();
  piVar7 = param_4 + 6;
  plVar6 = (longlong *)0x0;
  if (((piVar2[3] != param_4[3] || piVar2[2] != param_4[2]) || piVar2[1] != param_4[1]) ||
      *param_4 != *piVar2) {
    piVar7 = (int *)0x0;
  }
  piVar3 = (int *)FUN_1416740c0();
  lVar5 = *param_1;
  uVar1 = 0;
  piVar2 = param_3 + 6;
  if (((piVar3[3] != param_3[3] || piVar3[2] != param_3[2]) || piVar3[1] != param_3[1]) ||
      *param_3 != *piVar3) {
    piVar2 = (int *)0x0;
  }
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(lVar5 + 0x80,local_res8,piVar2);
  if (local_res8[0] == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x80) + (longlong)local_res8[0] * 0x28;
  }
  puVar4 = (undefined8 *)(lVar5 + 0x10);
  if (lVar5 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    if (*(int *)(puVar4 + 1) != 0) {
      plVar6 = (longlong *)*puVar4;
    }
    uVar1 = (**(code **)(*plVar6 + 0x38))(plVar6,piVar7);
  }
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,uVar1);
  Impl::ForwardReturnType<bool>(param_2,local_res8);
  return param_2;
}



// FUNCTION 141662940 FUN_141662940 body=250 status=ok
// SIG undefined FUN_141662940(void)

undefined8
FUN_141662940(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined1 local_res10 [8];
  
  piVar1 = (int *)FUN_1416740c0();
  piVar4 = param_4 + 6;
  if (((piVar1[3] != param_4[3] || piVar1[2] != param_4[2]) || piVar1[1] != param_4[1]) ||
      *param_4 != *piVar1) {
    piVar4 = (int *)0x0;
  }
  piVar2 = (int *)FUN_1416740c0();
  piVar1 = param_3 + 6;
  if (((piVar2[3] != param_3[3] || piVar2[2] != param_3[2]) || piVar2[1] != param_3[1]) ||
      *param_3 != *piVar2) {
    piVar1 = (int *)0x0;
  }
  if (piVar1[2] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)piVar1;
  }
  FName::FName(local_res10,puVar3,1);
  param_5._0_1_ =
       (**(code **)(*(longlong *)CONCAT71(param_5._1_7_,(char)param_5) + 8))
                 ((longlong *)CONCAT71(param_5._1_7_,(char)param_5),local_res10,piVar4,4,
                  (char)piVar4[4]);
  if (*(char *)((longlong)piVar4 + 0x11) != '\0') {
    param_5._0_1_ = (char)param_5 == '\0';
  }
  Impl::ForwardReturnType<bool>(param_2,&param_5);
  return param_2;
}



// FUNCTION 141662a40 FUN_141662a40 body=131 status=ok
// SIG undefined FUN_141662a40(void)

undefined8 FUN_141662a40(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  
  if (1 < *(int *)(param_2 + 8)) {
    cVar1 = (**(code **)*param_4)(param_4,param_2,*(undefined1 *)(param_2 + 0x10));
    if (*(char *)(param_2 + 0x11) != '\0') {
      cVar1 = cVar1 == '\0';
    }
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if (1 < *(int *)(param_3 + 8)) {
    cVar1 = (**(code **)*param_4)(param_4,param_3,*(undefined1 *)(param_3 + 0x10));
    if (*(char *)(param_3 + 0x11) != '\0') {
      cVar1 = cVar1 == '\0';
    }
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141662ad0 FUN_141662ad0 body=221 status=ok
// SIG undefined FUN_141662ad0(void)

undefined8
FUN_141662ad0(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,undefined8 *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_res10 [8];
  
  piVar2 = (int *)FUN_1416740c0();
  piVar4 = param_4 + 6;
  if (((piVar2[3] != param_4[3] || piVar2[2] != param_4[2]) || piVar2[1] != param_4[1]) ||
      *param_4 != *piVar2) {
    piVar4 = (int *)0x0;
  }
  piVar3 = (int *)FUN_141674140();
  piVar2 = param_3 + 6;
  if (((piVar3[3] != param_3[3] || piVar3[2] != param_3[2]) || piVar3[1] != param_3[1]) ||
      *param_3 != *piVar3) {
    piVar2 = (int *)0x0;
  }
  if (((char)*piVar2 == '\0') && (1 < piVar4[2])) {
    cVar1 = (**(code **)*param_5)(param_5,piVar4,(char)piVar4[4]);
    if (*(char *)((longlong)piVar4 + 0x11) != '\0') {
      cVar1 = cVar1 == '\0';
    }
    local_res10[0] = 0;
    if (cVar1 == '\0') goto LAB_141662b84;
  }
  local_res10[0] = 1;
LAB_141662b84:
  Impl::ForwardReturnType<bool>(param_2,local_res10);
  return param_2;
}



// FUNCTION 141662bb0 FUN_141662bb0 body=250 status=ok
// SIG undefined FUN_141662bb0(void)

undefined8
FUN_141662bb0(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined1 local_res10 [8];
  
  piVar1 = (int *)FUN_1416740c0();
  piVar4 = param_4 + 6;
  if (((piVar1[3] != param_4[3] || piVar1[2] != param_4[2]) || piVar1[1] != param_4[1]) ||
      *param_4 != *piVar1) {
    piVar4 = (int *)0x0;
  }
  piVar2 = (int *)FUN_1416740c0();
  piVar1 = param_3 + 6;
  if (((piVar2[3] != param_3[3] || piVar2[2] != param_3[2]) || piVar2[1] != param_3[1]) ||
      *param_3 != *piVar2) {
    piVar1 = (int *)0x0;
  }
  if (piVar1[2] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)piVar1;
  }
  FName::FName(local_res10,puVar3,1);
  param_5._0_1_ =
       (**(code **)(*(longlong *)CONCAT71(param_5._1_7_,(char)param_5) + 8))
                 ((longlong *)CONCAT71(param_5._1_7_,(char)param_5),local_res10,piVar4,5,
                  (char)piVar4[4]);
  if (*(char *)((longlong)piVar4 + 0x11) != '\0') {
    param_5._0_1_ = (char)param_5 == '\0';
  }
  Impl::ForwardReturnType<bool>(param_2,&param_5);
  return param_2;
}



// FUNCTION 141662cb0 operator() body=173 status=ok
// SIG undefined operator()(void)

undefined8
<lambda_8f86edd4e40fcb489a37b65b3341e782>::operator()
          (undefined8 param_1,undefined8 param_2,double param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  undefined4 local_res18;
  int local_res1c;
  undefined4 *local_res20;
  
  dVar2 = param_3 + 0.5;
  dVar5 = 0.0;
  lVar4 = (longlong)dVar2;
  if ((lVar4 != -0x8000000000000000) && (dVar5 = (double)lVar4, dVar5 != dVar2)) {
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = dVar2;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar2 = (double)(longlong)(lVar4 - (ulonglong)(uVar3 & 1));
  }
  if (((dVar2 == param_3) && (0.0 < param_3)) && (param_3 < 2147483647.0)) {
    local_res1c = (int)param_3;
    local_res18 = 1;
    local_res20 = &local_res18;
    TValueOrError<FExpressionNode,FExpressionError>::
    TValueOrError<FExpressionNode,FExpressionError><FFrameRate>(param_2,dVar5);
    return param_2;
  }
  FFrameRateParser::MakeFrameRateFromInterval(param_2,param_3);
  return param_2;
}



// FUNCTION 141662d60 FUN_141662d60 body=152 status=ok
// SIG undefined FUN_141662d60(void)

undefined8 FUN_141662d60(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined1 local_res10 [8];
  
  piVar2 = (int *)FUN_1416740c0();
  piVar3 = param_3 + 6;
  if (((piVar2[3] != param_3[3] || piVar2[2] != param_3[2]) || piVar2[1] != param_3[1]) ||
      *piVar2 != *param_3) {
    piVar3 = (int *)0x0;
  }
  if (piVar3[2] < 2) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = (**(code **)*param_4)(param_4,piVar3,(char)piVar3[4]);
    if (*(char *)((longlong)piVar3 + 0x11) != '\0') {
      cVar1 = cVar1 == '\0';
    }
  }
  local_res10[0] = cVar1 == '\0';
  Impl::ForwardReturnType<bool>(param_2,local_res10);
  return param_2;
}



// FUNCTION 141662e00 FUN_141662e00 body=255 status=ok
// SIG undefined FUN_141662e00(void)

undefined8
FUN_141662e00(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  undefined1 uVar10;
  int *piVar11;
  int *piVar12;
  int *local_res20;
  
  local_res20 = param_4;
  piVar11 = (int *)FUN_141674140();
  iVar1 = param_4[2];
  iVar2 = param_4[3];
  iVar3 = param_4[1];
  iVar4 = piVar11[3];
  iVar5 = piVar11[2];
  iVar6 = piVar11[1];
  iVar7 = *piVar11;
  iVar8 = *param_4;
  piVar12 = (int *)FUN_1416740c0();
  piVar11 = param_3 + 6;
  if (((piVar12[3] != param_3[3] || piVar12[2] != param_3[2]) || piVar12[1] != param_3[1]) ||
      *param_3 != *piVar12) {
    piVar11 = (int *)0x0;
  }
  piVar12 = local_res20 + 6;
  if (((iVar1 != iVar5 || iVar3 != iVar6) || iVar2 != iVar4) || iVar7 != iVar8) {
    piVar12 = (int *)0x0;
  }
  iVar1 = *piVar12;
  if (1 < piVar11[2]) {
    cVar9 = (**(code **)*param_5)(param_5,piVar11,(char)piVar11[4]);
    if (*(char *)((longlong)piVar11 + 0x11) != '\0') {
      cVar9 = cVar9 == '\0';
    }
    if ((cVar9 == '\0') && (uVar10 = 0, (char)iVar1 == '\0')) goto LAB_141662ed2;
  }
  uVar10 = 1;
LAB_141662ed2:
  local_res20 = (int *)CONCAT71(local_res20._1_7_,uVar10);
  Impl::ForwardReturnType<bool>(param_2,&local_res20);
  return param_2;
}



// FUNCTION 141662f00 FUN_141662f00 body=250 status=ok
// SIG undefined FUN_141662f00(void)

undefined8
FUN_141662f00(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined1 local_res10 [8];
  
  piVar1 = (int *)FUN_1416740c0();
  piVar4 = param_4 + 6;
  if (((piVar1[3] != param_4[3] || piVar1[2] != param_4[2]) || piVar1[1] != param_4[1]) ||
      *param_4 != *piVar1) {
    piVar4 = (int *)0x0;
  }
  piVar2 = (int *)FUN_1416740c0();
  piVar1 = param_3 + 6;
  if (((piVar2[3] != param_3[3] || piVar2[2] != param_3[2]) || piVar2[1] != param_3[1]) ||
      *param_3 != *piVar2) {
    piVar1 = (int *)0x0;
  }
  if (piVar1[2] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)piVar1;
  }
  FName::FName(local_res10,puVar3,1);
  param_5._0_1_ =
       (**(code **)(*(longlong *)CONCAT71(param_5._1_7_,(char)param_5) + 8))
                 ((longlong *)CONCAT71(param_5._1_7_,(char)param_5),local_res10,piVar4,0,
                  (char)piVar4[4]);
  if (*(char *)((longlong)piVar4 + 0x11) != '\0') {
    param_5._0_1_ = (char)param_5 == '\0';
  }
  Impl::ForwardReturnType<bool>(param_2,&param_5);
  return param_2;
}



// FUNCTION 141663000 FUN_141663000 body=129 status=ok
// SIG undefined FUN_141663000(void)

undefined1 FUN_141663000(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  
  if (1 < *(int *)(param_2 + 8)) {
    cVar1 = (**(code **)*param_4)(param_4,param_2,*(undefined1 *)(param_2 + 0x10));
    if (*(char *)(param_2 + 0x11) != '\0') {
      cVar1 = cVar1 == '\0';
    }
    if ((cVar1 == '\0') && (1 < *(int *)(param_3 + 8))) {
      cVar1 = (**(code **)*param_4)(param_4,param_3,*(undefined1 *)(param_3 + 0x10));
      if (*(char *)(param_3 + 0x11) != '\0') {
        cVar1 = cVar1 == '\0';
      }
      if (cVar1 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 141663090 FUN_141663090 body=225 status=ok
// SIG undefined FUN_141663090(void)

undefined8
FUN_141663090(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,undefined8 *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_res10 [8];
  
  piVar2 = (int *)FUN_1416740c0();
  piVar4 = param_4 + 6;
  if (((piVar2[3] != param_4[3] || piVar2[2] != param_4[2]) || piVar2[1] != param_4[1]) ||
      *param_4 != *piVar2) {
    piVar4 = (int *)0x0;
  }
  piVar3 = (int *)FUN_141674140();
  piVar2 = param_3 + 6;
  if (((piVar3[3] != param_3[3] || piVar3[2] != param_3[2]) || piVar3[1] != param_3[1]) ||
      *param_3 != *piVar3) {
    piVar2 = (int *)0x0;
  }
  if ((char)*piVar2 == '\0') {
LAB_141663146:
    local_res10[0] = 0;
  }
  else {
    if (1 < piVar4[2]) {
      cVar1 = (**(code **)*param_5)(param_5,piVar4,(char)piVar4[4]);
      if (*(char *)((longlong)piVar4 + 0x11) != '\0') {
        cVar1 = cVar1 == '\0';
      }
      if (cVar1 == '\0') goto LAB_141663146;
    }
    local_res10[0] = 1;
  }
  Impl::ForwardReturnType<bool>(param_2,local_res10);
  return param_2;
}



// FUNCTION 141663180 operator() body=651 status=ok
// SIG undefined operator()(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 <lambda_1341eefa68271148f0b9e808a204388c>::operator()(undefined8 *param_1,short param_2)

{
  void *_Dst;
  longlong *plVar1;
  undefined8 uVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auStack_68 [32];
  short local_48 [4];
  undefined2 local_40;
  short local_3e;
  undefined2 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  psVar6 = (short *)*param_1;
  local_48[0] = *psVar6;
  if (local_48[0] == 0) {
    if ((param_2 != 0x22) && (param_2 != 0x27)) {
      local_48[0] = param_2;
      cVar3 = (**(code **)param_1[3])(((undefined8 *)param_1[3])[1],local_48);
      if (cVar3 != '\0') {
        return 2;
      }
      plVar1 = (longlong *)param_1[4];
      if (param_2 == 0) {
        return 0;
      }
      iVar4 = (int)plVar1[1];
      iVar9 = iVar4 + -1;
      if (iVar4 < 1) {
        iVar9 = 0;
      }
      iVar4 = (iVar4 < 1) + 1 + iVar4;
      *(int *)(plVar1 + 1) = iVar4;
      if (*(int *)((longlong)plVar1 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(short *)(*plVar1 + (longlong)iVar9 * 2) = param_2;
      *(undefined2 *)(*plVar1 + 2 + (longlong)iVar9 * 2) = 0;
      return 0;
    }
    plVar1 = (longlong *)param_1[1];
    if (param_2 != 0) {
      iVar4 = (int)plVar1[1];
      iVar9 = iVar4 + -1;
      if (iVar4 < 1) {
        iVar9 = 0;
      }
      iVar4 = (iVar4 < 1) + 1 + iVar4;
      *(int *)(plVar1 + 1) = iVar4;
      if (*(int *)((longlong)plVar1 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(short *)(*plVar1 + (longlong)iVar9 * 2) = param_2;
      *(undefined2 *)(*plVar1 + 2 + (longlong)iVar9 * 2) = 0;
      psVar6 = (short *)*param_1;
    }
    *psVar6 = param_2;
    piVar7 = (int *)param_1[2];
  }
  else {
    plVar1 = (longlong *)param_1[1];
    if (param_2 != 0) {
      iVar4 = (int)plVar1[1];
      iVar9 = iVar4 + -1;
      if (iVar4 < 1) {
        iVar9 = 0;
      }
      iVar4 = (iVar4 < 1) + 1 + iVar4;
      *(int *)(plVar1 + 1) = iVar4;
      if (*(int *)((longlong)plVar1 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(short *)(*plVar1 + (longlong)iVar9 * 2) = param_2;
      *(undefined2 *)(*plVar1 + 2 + (longlong)iVar9 * 2) = 0;
      local_48[0] = *(short *)*param_1;
    }
    if ((param_2 == local_48[0]) && ((*(byte *)param_1[2] & 1) == 0)) {
      uVar2 = param_1[1];
      local_40 = 0x5c;
      local_3c = 0;
      local_48[1] = 0;
      local_3e = local_48[0];
      FString::ReplaceInline(uVar2,&local_40,local_48,1);
      FString::ReplaceInline(uVar2,&DAT_144cca608,&DAT_144cc9c94,1);
      puVar8 = (undefined8 *)param_1[1];
      plVar1 = (longlong *)param_1[4];
      _Src = (void *)*puVar8;
      iVar4 = *(int *)(puVar8 + 1) + -1;
      if (*(int *)(puVar8 + 1) == 0) {
        iVar4 = 0;
      }
      if (iVar4 != 0) {
        iVar9 = (int)plVar1[1];
        iVar5 = (uint)(iVar9 == 0) + iVar9 + iVar4;
        *(int *)(plVar1 + 1) = iVar5;
        if (*(int *)((longlong)plVar1 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar9);
        }
        _Dst = (void *)(*plVar1 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
        *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
        puVar8 = (undefined8 *)param_1[1];
      }
      *(undefined4 *)(puVar8 + 1) = 0;
      if ((*(int *)((longlong)puVar8 + 0xc) < 0) && (*(int *)((longlong)puVar8 + 0xc) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar8,0);
      }
      if ((undefined2 *)*puVar8 != (undefined2 *)0x0) {
        *(undefined2 *)*puVar8 = 0;
      }
      *(undefined2 *)*param_1 = 0;
    }
    piVar7 = (int *)param_1[2];
    if (param_2 == 0x5c) {
      *piVar7 = *piVar7 + 1;
      return 0;
    }
  }
  *piVar7 = 0;
  return 0;
}



// FUNCTION 141663410 operator() body=338 status=ok
// SIG undefined operator()(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong <lambda_e4e880840387afd65bddc55ca79f13a7>::operator()
                   (undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58 [6];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  piVar3 = (int *)FUN_14162c970();
  piVar4 = param_3 + 6;
  if (((param_3[3] != piVar3[3] || param_3[2] != piVar3[2]) || param_3[1] != piVar3[1]) ||
      *param_3 != *piVar3) {
    piVar4 = (int *)0x0;
  }
  lVar5 = <lambda_8f86edd4e40fcb489a37b65b3341e782>::operator()
                    (param_1,local_88,*(undefined8 *)piVar4);
  *(undefined1 *)(param_2 + 0x18) = 0;
  if (*(char *)(lVar5 + 0x18) != '\0') {
    FText::FText(param_2,lVar5);
    *(undefined1 *)(param_2 + 0x18) = 1;
  }
  *(undefined1 *)(param_2 + 0x60) = 0;
  if (*(char *)(lVar5 + 0x60) != '\0') {
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    FExpressionNode::operator=(param_2 + 0x20);
    *(undefined1 *)(param_2 + 0x60) = 1;
  }
  if (local_28 != '\0') {
    puVar6 = local_58;
    local_28 = '\0';
    if (((local_68 == 0 && local_64 == 0) && local_60 == 0) && local_5c == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,0);
    }
  }
  if (local_70 != '\0') {
    local_70 = 0;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar4 = (int *)((longlong)local_80 + 0xc);
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141663570 operator() body=337 status=ok
// SIG undefined operator()(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong <lambda_e7a517058875cd1ca573a60fefca8dc3>::operator()
                   (undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48 [6];
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  piVar4 = (int *)FUN_14162c970();
  piVar5 = param_3 + 6;
  if (((param_3[3] != piVar4[3] || param_3[2] != piVar4[2]) || param_3[1] != piVar4[1]) ||
      *param_3 != *piVar4) {
    piVar5 = (int *)0x0;
  }
  FFrameRateParser::MakeFrameRateFromFPS(local_78,*(undefined8 *)piVar5);
  *(undefined1 *)(param_2 + 0x18) = 0;
  if (local_60 != '\0') {
    FText::FText(param_2,local_78);
    *(undefined1 *)(param_2 + 0x18) = 1;
  }
  *(undefined1 *)(param_2 + 0x60) = 0;
  if (local_18 != '\0') {
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    FExpressionNode::operator=(param_2 + 0x20,&local_58);
    *(undefined1 *)(param_2 + 0x60) = 1;
    if (local_18 != '\0') {
      puVar6 = local_48;
      local_18 = '\0';
      if (((local_58 == 0 && local_54 == 0) && local_50 == 0) && local_4c == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,0);
      }
    }
  }
  if (local_60 != '\0') {
    local_60 = 0;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar5 = (int *)((longlong)local_70 + 0xc);
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1416636d0 operator() body=447 status=ok
// SIG undefined operator()(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong <lambda_ff77f8d57e6508d3fed192258dbfb271>::operator()
                   (undefined8 param_1,longlong param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined1 auStack_e8 [32];
  int *local_c8;
  int *local_c0;
  longlong local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  char local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined8 local_80 [6];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8 = param_4;
  local_c0 = param_3;
  local_b8 = param_2;
  piVar12 = (int *)FUN_14162c970();
  iVar2 = param_4[3];
  iVar3 = param_4[2];
  iVar4 = param_4[1];
  iVar5 = *param_4;
  iVar6 = piVar12[3];
  iVar7 = piVar12[2];
  iVar8 = piVar12[1];
  iVar9 = *piVar12;
  piVar13 = (int *)FUN_14162c970();
  piVar12 = local_c8 + 6;
  if (((iVar3 != iVar7 || iVar8 != iVar4) || iVar2 != iVar6) || iVar9 != iVar5) {
    piVar12 = (int *)0x0;
  }
  piVar14 = local_c0 + 6;
  if (((local_c0[3] != piVar13[3] || local_c0[2] != piVar13[2]) || local_c0[1] != piVar13[1]) ||
      *piVar13 != *local_c0) {
    piVar14 = (int *)0x0;
  }
  FFrameRateParser::MakeFrameRate(local_b0,*(undefined8 *)piVar14,*(undefined8 *)piVar12);
  lVar11 = local_b8;
  *(undefined1 *)(local_b8 + 0x18) = 0;
  if (local_98 != '\0') {
    FText::FText(local_b8,local_b0);
    *(undefined1 *)(lVar11 + 0x18) = 1;
  }
  *(undefined1 *)(lVar11 + 0x60) = 0;
  if (local_50 != '\0') {
    *(undefined8 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    FExpressionNode::operator=(lVar11 + 0x20,&local_90);
    *(undefined1 *)(lVar11 + 0x60) = 1;
    if (local_50 != '\0') {
      puVar15 = local_80;
      local_50 = '\0';
      if (((local_90 == 0 && local_8c == 0) && local_88 == 0) && local_84 == 0) {
        puVar15 = (undefined8 *)0x0;
      }
      if (puVar15 != (undefined8 *)0x0) {
        (**(code **)*puVar15)(puVar15,0);
      }
    }
  }
  if (local_98 != '\0') {
    local_98 = 0;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar12 = (int *)((longlong)local_a8 + 0xc);
        iVar2 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
  }
  return lVar11;
}



// FUNCTION 141663890 operator() body=174 status=ok
// SIG undefined operator()(void)

void TDefaultDelete<FSlowTask>::operator()(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x4c) != '\0') {
      *(undefined1 *)(param_2 + 0x4c) = 0;
    }
    plVar4 = *(longlong **)(param_2 + 0x20);
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
    plVar4 = *(longlong **)(param_2 + 8);
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
    FMemory::operator_delete(param_2,0x68);
  }
  return;
}



// FUNCTION 141663940 FUN_141663940 body=320 status=ok
// SIG undefined FUN_141663940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141663940(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  char local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined8 local_70 [6];
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  puVar6 = (undefined8 *)0x0;
  puVar3 = puVar6;
  local_a8 = param_4;
  if (*(int *)(param_1 + 8) != 0) {
    plVar5 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      puVar3 = (undefined8 *)(**(code **)(*plVar5 + 8))();
    }
  }
  lVar4 = (*(code *)*param_1)(local_a0,puVar3,param_3,&local_a8);
  *(undefined1 *)(param_2 + 0x18) = 0;
  if (*(char *)(lVar4 + 0x18) != '\0') {
    FText::FText(param_2,lVar4);
    *(undefined1 *)(param_2 + 0x18) = 1;
  }
  *(undefined1 *)(param_2 + 0x60) = 0;
  if (*(char *)(lVar4 + 0x60) != '\0') {
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    FExpressionNode::operator=(param_2 + 0x20);
    *(undefined1 *)(param_2 + 0x60) = 1;
  }
  if (local_40 != '\0') {
    local_40 = '\0';
    puVar3 = local_70;
    if (((local_80 == 0 && local_7c == 0) && local_78 == 0) && local_74 == 0) {
      puVar3 = puVar6;
    }
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
    }
  }
  if ((local_88 != '\0') && (local_88 = 0, local_98 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_98 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_2;
}



// FUNCTION 141663a80 `scalar_deleting_destructor' body=125 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAsyncTask<FRemoteConfigAsyncWorker>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_Abandon_144ccfab8;
  FUN_1415b5910(param_1[0x20b]);
  param_1[0x20b] = 0;
  if (param_1[0x207] != 0) {
    FMemory::Free();
  }
  if (param_1[0x101] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1068);
  }
  return param_1;
}



// FUNCTION 141663b00 FUN_141663b00 body=72 status=ok
// SIG undefined FUN_141663b00(void)

undefined8 * FUN_141663b00(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141663b50 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
Impl::FHeapDataStorage<FFormatSpecifier>::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ccfb40;
  FMemory::operator_delete(param_1[1],0x38);
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141663bb0 FUN_141663bb0 body=43 status=ok
// SIG undefined FUN_141663bb0(void)

undefined8 * FUN_141663bb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141663be0 FUN_141663be0 body=82 status=ok
// SIG undefined FUN_141663be0(void)

undefined8 * FUN_141663be0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144ccfba0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141663c40 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FBufferReaderWithSHA::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FBufferReaderWithSHA();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141663c80 FUN_141663c80 body=293 status=ok
// SIG undefined FUN_141663c80(void)

undefined8 * FUN_141663c80(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_144ccf3a8;
  iVar6 = *(int *)(param_1 + 0xf);
  puVar4 = (undefined8 *)param_1[0xe];
  if (iVar6 != 0) {
    do {
      TDefaultDelete<FSlowTask>::operator()(puVar4,*puVar4);
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar4 = (undefined8 *)param_1[0xe];
  }
  if (puVar4 != (undefined8 *)0x0) {
    FMemory::Free(puVar4);
  }
  plVar5 = (longlong *)param_1[0xd];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  iVar6 = *(int *)(param_1 + 6);
  plVar5 = (longlong *)param_1[5];
  if (iVar6 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar5 = (longlong *)param_1[5];
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  iVar6 = *(int *)(param_1 + 4);
  plVar5 = (longlong *)param_1[3];
  if (iVar6 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar5 = (longlong *)param_1[3];
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141663db0 `scalar_deleting_destructor' body=226 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FOutputDeviceFile::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144ccf678;
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    if (*(char *)(param_1 + 1) == '\0') {
      uVar3 = FGenericPlatformTime::StrTimestamp();
      FOutputDevice::LogfImpl(param_1,L"Log file closed, %s",uVar3);
      plVar4 = (longlong *)param_1[2];
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,1);
    }
    param_1[2] = 0;
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  lVar2 = param_1[0x105];
  *(undefined1 *)((longlong)param_1 + 0x821) = 0;
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x48) = 0;
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar2);
    FMemory::operator_delete(lVar2,0x50);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x838);
  }
  return param_1;
}



// FUNCTION 141663ea0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FOutputDeviceRedirector::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FOutputDeviceRedirector();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141663ee0 `scalar_deleting_destructor' body=316 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FTextFilterExpressionEvaluator::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144ccfad0;
  TOperatorJumpTable<void>::~TOperatorJumpTable<void>(param_1 + 0x45);
  FExpressionGrammar::~FExpressionGrammar(param_1 + 0x1d);
  TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
  ::
  ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
            (param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TBaseDelegate<AOnlineBeaconClient_*,UNetConnection_*>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x10,0);
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0xf) != '\0') {
    *(undefined1 *)(param_1 + 0xf) = 0;
    TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>::
    ~TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>();
  }
  plVar4 = (longlong *)param_1[6];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x318);
  }
  return param_1;
}



// FUNCTION 141664020 Abandon body=44 status=ok
// SIG undefined Abandon(void)

void FAsyncTask<FRemoteConfigAsyncWorker>::Abandon(longlong param_1)

{
  DoWork();
  if (*(longlong **)(param_1 + 0x1058) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141664042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x1058) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 141664050 Abandon body=63 status=ok
// SIG undefined Abandon(void)

void FAutoDeleteAsyncTask<FAsyncSHAVerify>::Abandon(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x39) != '\0') {
    FMemory::Free(param_1[1]);
    param_1[1] = 0;
  }
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141664085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 141664090 Add body=201 status=ok
// SIG undefined Add(void)

void FExpressionTokenConsumer::Add(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [6];
  
  uVar2 = *(ulonglong *)(param_2 + 2);
  if (((ulonglong)param_1[2] <= uVar2) && (uVar2 <= (ulonglong)param_1[3])) {
    param_1[4] = uVar2;
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x58 + *param_1);
  local_48 = 0;
  local_40 = 0;
  FExpressionNode::operator=(&local_48,param_3);
  *puVar7 = 0;
  puVar7[1] = 0;
  FExpressionNode::operator=(puVar7,&local_48);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(puVar7 + 8) = uVar3;
  *(undefined4 *)((longlong)puVar7 + 0x44) = uVar4;
  *(undefined4 *)(puVar7 + 9) = uVar5;
  *(undefined4 *)((longlong)puVar7 + 0x4c) = uVar6;
  puVar7[10] = *(undefined8 *)(param_2 + 4);
  puVar7 = local_38;
  if (((local_40._4_4_ == 0 && (int)local_40 == 0) && local_48._4_4_ == 0) && (int)local_48 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(uVar3,0);
  }
  return;
}



// FUNCTION 141664160 AddOutputDevice body=95 status=ok
// SIG undefined AddOutputDevice(void)

void FOutputDeviceRedirector::AddOutputDevice(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  longlong local_res10;
  
  local_res10 = param_2;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  if (param_2 != 0) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x30,&local_res10);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416641b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return;
}


