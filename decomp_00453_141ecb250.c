// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141ecb250 FUN_141ecb250 body=4509 status=ok
// SIG undefined FUN_141ecb250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141ecb250(longlong param_1,int *param_2,undefined4 param_3)

{
  int **ppiVar1;
  void *pvVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 *puVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  DWORD DVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong lVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  int *piVar26;
  int *piVar27;
  undefined2 *puVar28;
  uint uVar29;
  undefined2 *puVar30;
  uint *puVar31;
  undefined1 auStack_2b8 [32];
  int *local_298;
  int *local_288;
  undefined8 local_280;
  char local_278;
  char local_277;
  int *local_270;
  undefined8 local_268;
  int *local_260;
  int **local_258;
  uint local_250 [2];
  int local_248;
  uint uStack_244;
  uint *puStack_240;
  uint local_238;
  uint uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  int *local_228;
  undefined8 local_220;
  undefined2 *local_218;
  int local_210;
  int local_20c;
  int *local_208;
  int local_200;
  int local_1fc;
  int *local_1f8;
  int local_1f0;
  int local_1ec;
  undefined8 local_1e8;
  int iStack_1e0;
  uint uStack_1dc;
  uint *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  GUID local_1c0;
  longlong local_1b0 [2];
  longlong *local_1a0;
  longlong *local_198;
  undefined8 uStack_190;
  uint *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 local_168 [256];
  longlong local_68;
  undefined1 *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_1a0 = (longlong *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x80) = 0;
  local_228 = param_2;
  TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
  ::Empty(local_1a0,0);
  FString::operator=(param_1,param_2);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  puVar13 = (undefined8 *)FUN_141eca160(&local_270,param_3);
  *(undefined8 *)(param_1 + 0x18) = *puVar13;
  puVar13 = (undefined8 *)FName::ToString(param_1 + 0x18,&local_248);
  if (*(int *)(puVar13 + 1) == 0) {
    puVar30 = &DAT_143f3eda8;
  }
  else {
    puVar30 = (undefined2 *)*puVar13;
  }
  if (param_2[2] == 0) {
    puVar28 = &DAT_143f3eda8;
  }
  else {
    puVar28 = *(undefined2 **)param_2;
  }
  FString::PrintfImpl(&local_260,L"%s_%s.stable.upipelinecache",puVar28,puVar30);
  local_68 = 0;
  local_60 = local_168;
  local_58 = 7;
  local_298 = (int *)CONCAT62(local_298._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_60,8,"Windows");
  puVar7 = local_60;
  puVar13 = (undefined8 *)FPaths::ProjectContentDir(local_1b0);
  iVar10 = *(int *)(puVar13 + 1);
  local_270 = (int *)*puVar13;
  *puVar13 = 0;
  local_268._0_4_ = *(int *)(puVar13 + 1);
  local_268._4_4_ = *(int *)((longlong)puVar13 + 0xc);
  puVar13[1] = 0;
  if (local_268._4_4_ < (int)((0x10 - (uint)(iVar10 != 0)) + (int)local_268)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_270);
  }
  FString::PathAppend(&local_270,L"PipelineCaches");
  iVar10 = local_268._4_4_;
  uVar23 = 0xffffffffffffffff;
  do {
    uVar24 = uVar23;
    uVar23 = uVar24 + 1;
  } while (*(short *)(puVar7 + uVar23 * 2) != 0);
  if (((int)local_268 != 0) || (iVar18 = 2, (int)uVar24 == -2)) {
    iVar18 = 1;
  }
  local_288 = local_270;
  iVar18 = iVar18 + (int)uVar23 + (int)local_268;
  local_270 = (int *)0x0;
  local_280._0_4_ = (int)local_268;
  local_280._4_4_ = local_268._4_4_;
  local_268 = 0;
  if (iVar10 < iVar18) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_288);
  }
  FString::PathAppend(&local_288,puVar7,uVar23 & 0xffffffff);
  iVar10 = local_280._4_4_;
  if ((int)local_258 == 0) {
    iVar18 = 0;
  }
  else {
    iVar18 = (int)local_258 + -1;
  }
  if (((int)local_280 != 0) || (iVar20 = 1, iVar18 + 1 == 0)) {
    iVar20 = 0;
  }
  iVar19 = iVar18 + 1 + (int)local_280;
  local_1f8 = local_288;
  local_288 = (int *)0x0;
  local_1f0 = (int)local_280;
  local_1ec = local_280._4_4_;
  local_280 = 0;
  if (iVar10 < iVar19 + iVar20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1f8);
  }
  FString::PathAppend(&local_1f8,local_260,iVar18);
  if (local_288 != (int *)0x0) {
    FMemory::Free();
  }
  if (local_270 != (int *)0x0) {
    FMemory::Free();
  }
  if (local_1b0[0] != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_260 != (int *)0x0) {
    FMemory::Free();
  }
  if (CONCAT44(uStack_244,local_248) != 0) {
    FMemory::Free();
  }
  puVar13 = (undefined8 *)FName::ToString(param_1 + 0x18,local_1b0);
  if (*(int *)(puVar13 + 1) == 0) {
    puVar30 = &DAT_143f3eda8;
  }
  else {
    puVar30 = (undefined2 *)*puVar13;
  }
  if (param_2[2] == 0) {
    puVar28 = &DAT_143f3eda8;
  }
  else {
    puVar28 = *(undefined2 **)param_2;
  }
  FString::PrintfImpl(&local_260,L"%s_%s.upipelinecache",puVar28,puVar30);
  local_68 = 0;
  local_60 = local_168;
  local_58 = 7;
  local_298 = (int *)CONCAT62(local_298._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_60,8);
  puVar7 = local_60;
  puVar13 = (undefined8 *)FPaths::ProjectContentDir(&local_248);
  iVar10 = *(int *)(puVar13 + 1);
  local_270 = (int *)*puVar13;
  *puVar13 = 0;
  local_268._0_4_ = *(int *)(puVar13 + 1);
  local_268._4_4_ = *(int *)((longlong)puVar13 + 0xc);
  puVar13[1] = 0;
  if (local_268._4_4_ < (int)((0x10 - (uint)(iVar10 != 0)) + (int)local_268)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_270);
  }
  FString::PathAppend(&local_270,L"PipelineCaches");
  iVar10 = local_268._4_4_;
  uVar23 = 0xffffffffffffffff;
  do {
    uVar24 = uVar23;
    uVar23 = uVar24 + 1;
  } while (*(short *)(puVar7 + uVar23 * 2) != 0);
  if (((int)local_268 != 0) || (iVar18 = 2, (int)uVar24 == -2)) {
    iVar18 = 1;
  }
  local_288 = local_270;
  iVar18 = iVar18 + (int)uVar23 + (int)local_268;
  local_270 = (int *)0x0;
  local_280._0_4_ = (int)local_268;
  local_280._4_4_ = local_268._4_4_;
  local_268 = 0;
  if (iVar10 < iVar18) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_288);
  }
  FString::PathAppend(&local_288,puVar7,uVar23 & 0xffffffff);
  iVar10 = local_280._4_4_;
  if ((int)local_258 == 0) {
    iVar18 = 0;
  }
  else {
    iVar18 = (int)local_258 + -1;
  }
  if (((int)local_280 != 0) || (iVar20 = 2, iVar18 == -1)) {
    iVar20 = 1;
  }
  local_208 = local_288;
  iVar20 = iVar20 + iVar18 + (int)local_280;
  local_288 = (int *)0x0;
  local_200 = (int)local_280;
  local_1fc = local_280._4_4_;
  local_280 = 0;
  if (iVar10 < iVar20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_208);
  }
  FString::PathAppend(&local_208,local_260,iVar18);
  if (local_288 != (int *)0x0) {
    FMemory::Free();
  }
  if (local_270 != (int *)0x0) {
    FMemory::Free();
  }
  if (CONCAT44(uStack_244,local_248) != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_260 != (int *)0x0) {
    FMemory::Free();
  }
  if (local_1b0[0] != 0) {
    FMemory::Free();
  }
  local_270 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38);
  if ((*local_270 < DAT_146ac3a40) && (_Init_thread_header(&DAT_146ac3a40), DAT_146ac3a40 == -1)) {
    uVar15 = FCommandLine::Get();
    DAT_146ac3a3e = FParse::Param(uVar15,L"nostablepipelinecache");
    _Init_thread_footer(&DAT_146ac3a40);
  }
  if (DAT_146ac3a3e == '\0') {
    plVar14 = (longlong *)FUN_1415c3d50();
    piVar26 = (int *)&DAT_143f3eda8;
    if (local_1f0 != 0) {
      piVar26 = local_1f8;
    }
    cVar8 = (**(code **)(*plVar14 + 0x48))(plVar14,piVar26);
    piVar26 = local_1f8;
    if (cVar8 != '\0') {
      lVar25 = (longlong)local_1f0;
      local_200 = local_1f0;
      if ((local_1f0 == 0) && (local_1fc == 0)) {
        local_1fc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_208,local_1f0);
        _guard_xfg_dispatch_icall_nop(local_208,piVar26,lVar25 * 2);
      }
    }
  }
  iVar10 = 0;
  puVar13 = (undefined8 *)FName::ToString(param_1 + 0x18,local_1b0);
  if (*(int *)(puVar13 + 1) == 0) {
    puVar30 = &DAT_143f3eda8;
  }
  else {
    puVar30 = (undefined2 *)*puVar13;
  }
  if (param_2[2] == 0) {
    puVar28 = &DAT_143f3eda8;
  }
  else {
    puVar28 = *(undefined2 **)param_2;
  }
  FString::PrintfImpl(&local_260,L"%s_%s.upipelinecache",puVar28,puVar30);
  puVar13 = (undefined8 *)FUN_14167d1b0(&local_248);
  iVar20 = 0;
  iVar18 = iVar20;
  if ((int)local_258 != 0) {
    iVar18 = (int)local_258 + -1;
  }
  if ((*(int *)(puVar13 + 1) != 0) || (iVar19 = 1, iVar18 + 1 == 0)) {
    iVar19 = 0;
  }
  local_218 = (undefined2 *)*puVar13;
  *puVar13 = 0;
  local_210 = *(int *)(puVar13 + 1);
  local_20c = *(int *)((longlong)puVar13 + 0xc);
  puVar13[1] = 0;
  if (local_20c < iVar18 + 1 + local_210 + iVar19) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_218);
  }
  FString::PathAppend(&local_218,local_260,iVar18);
  if (CONCAT44(uStack_244,local_248) != 0) {
    FMemory::Free();
  }
  if (local_260 != (int *)0x0) {
    FMemory::Free();
  }
  if (local_1b0[0] != 0) {
    FMemory::Free();
  }
  ppiVar1 = (int **)(param_1 + 0x118);
  if (*ppiVar1 != (int *)&DAT_143f3eda8) {
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (*(int *)(param_1 + 0x124) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(ppiVar1,0);
      iVar10 = *(int *)(param_1 + 0x120);
    }
    *(int *)(param_1 + 0x120) = iVar10;
    if (*(int *)(param_1 + 0x124) < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(ppiVar1);
    }
  }
  uVar15 = FEngineVersion::Current();
  lVar25 = FUN_1405859b0(uVar15);
  if ((*(int *)(lVar25 + 8) != 0) && (0 < *(int *)(lVar25 + 8) + -1)) {
    uVar15 = FEngineVersion::Current();
    puVar13 = (undefined8 *)FUN_1405859b0(uVar15);
    if (*(int *)(puVar13 + 1) == 0) {
      puVar30 = &DAT_143f3eda8;
    }
    else {
      puVar30 = (undefined2 *)*puVar13;
    }
    FString::PrintfImpl(&local_260,&DAT_144edb220,puVar30);
    piVar26 = local_260;
    if ((int)local_258 != 0) {
      iVar20 = (int)local_258 + -1;
    }
    if (iVar20 != 0) {
      iVar10 = *(int *)(param_1 + 0x120);
      iVar18 = (uint)(iVar10 == 0) + iVar20 + iVar10;
      *(int *)(param_1 + 0x120) = iVar18;
      if (*(int *)(param_1 + 0x124) < iVar18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(ppiVar1,iVar10);
      }
      pvVar2 = (void *)((longlong)*ppiVar1 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,piVar26,(longlong)iVar20 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar20 * 2) = 0;
    }
    if (local_260 != (int *)0x0) {
      FMemory::Free(local_260);
    }
  }
  uVar15 = FEngineVersion::Current();
  iVar10 = FEngineVersionBase::GetChangelist(uVar15);
  if (iVar10 != 0) {
    uVar15 = FEngineVersion::Current();
    uVar11 = FEngineVersionBase::GetChangelist(uVar15);
    FString::PrintfImpl(&local_260,L"CL-%u-",uVar11);
    piVar26 = local_260;
    iVar10 = 0;
    if ((int)local_258 != 0) {
      iVar10 = (int)local_258 + -1;
    }
    if (iVar10 != 0) {
      iVar18 = *(int *)(param_1 + 0x120);
      iVar20 = (uint)(iVar18 == 0) + iVar18 + iVar10;
      *(int *)(param_1 + 0x120) = iVar20;
      if (*(int *)(param_1 + 0x124) < iVar20) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(ppiVar1,iVar18);
      }
      pvVar2 = (void *)((longlong)*ppiVar1 + ((longlong)iVar18 - (ulonglong)(iVar18 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,piVar26,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar10 * 2) = 0;
    }
    if (local_260 != (int *)0x0) {
      FMemory::Free(local_260);
    }
  }
  local_1c0.Data1 = 0;
  local_1c0.Data2 = 0;
  local_1c0.Data3 = 0;
  local_1c0.Data4[0] = '\0';
  local_1c0.Data4[1] = '\0';
  local_1c0.Data4[2] = '\0';
  local_1c0.Data4[3] = '\0';
  local_1c0.Data4[4] = '\0';
  local_1c0.Data4[5] = '\0';
  local_1c0.Data4[6] = '\0';
  local_1c0.Data4[7] = '\0';
  FWindowsPlatformMisc::CreateGuid(&local_1c0);
  FUN_141682af0(&local_1c0,&local_288,0);
  iVar10 = 0;
  piVar26 = (int *)&DAT_143f3eda8;
  if ((int)local_280 != 0) {
    piVar26 = local_288;
  }
  puVar13 = (undefined8 *)FName::ToString(param_1 + 0x18,&local_248);
  if (*(int *)(puVar13 + 1) == 0) {
    puVar30 = &DAT_143f3eda8;
  }
  else {
    puVar30 = (undefined2 *)*puVar13;
  }
  if (local_228[2] == 0) {
    puVar28 = &DAT_143f3eda8;
  }
  else {
    puVar28 = *(undefined2 **)local_228;
  }
  local_298 = piVar26;
  FString::PrintfImpl(&local_260,L"%s_%s_%s.rec.upipelinecache",puVar28,puVar30);
  piVar26 = local_260;
  if ((int)local_258 != 0) {
    iVar10 = (int)local_258 + -1;
  }
  if (iVar10 != 0) {
    iVar18 = *(int *)(param_1 + 0x120);
    iVar20 = (uint)(iVar18 == 0) + iVar18 + iVar10;
    *(int *)(param_1 + 0x120) = iVar20;
    if (*(int *)(param_1 + 0x124) < iVar20) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(ppiVar1,iVar18);
    }
    pvVar2 = (void *)((longlong)*ppiVar1 + ((longlong)iVar18 - (ulonglong)(iVar18 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,piVar26,(longlong)iVar10 * 2);
    *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar2) = 0;
  }
  if (local_260 != (int *)0x0) {
    FMemory::Free(local_260);
  }
  if (CONCAT44(uStack_244,local_248) != 0) {
    FMemory::Free();
  }
  if (local_288 != (int *)0x0) {
    FMemory::Free();
  }
  puVar13 = (undefined8 *)FUN_14167d1b0(&local_248);
  iVar10 = *(int *)(puVar13 + 1);
  local_228 = (int *)*puVar13;
  *puVar13 = 0;
  local_220._0_4_ = *(int *)(puVar13 + 1);
  local_220._4_4_ = *(int *)((longlong)puVar13 + 0xc);
  puVar13[1] = 0;
  if (local_220._4_4_ < (int)((0xf - (uint)(iVar10 != 0)) + (int)local_220)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_228);
  }
  FString::PathAppend(&local_228,L"CollectedPSOs",0xd);
  iVar18 = local_220._4_4_;
  iVar10 = *(int *)(param_1 + 0x120) + -1;
  if (*(int *)(param_1 + 0x120) == 0) {
    iVar10 = 0;
  }
  if (((int)local_220 != 0) || (iVar20 = 2, iVar10 == -1)) {
    iVar20 = 1;
  }
  iVar20 = iVar20 + (int)local_220;
  local_288 = local_228;
  local_228 = (int *)0x0;
  local_280 = CONCAT44(local_220._4_4_,(int)local_220);
  local_220 = 0;
  if (iVar18 < iVar20 + iVar10) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_288);
  }
  FString::PathAppend(&local_288,*ppiVar1,iVar10);
  if (ppiVar1 == &local_288) {
    if (local_288 != (int *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*ppiVar1 != (int *)0x0) {
      FMemory::Free();
    }
    *ppiVar1 = local_288;
    *(int *)(param_1 + 0x120) = (int)local_280;
    *(int *)(param_1 + 0x124) = local_280._4_4_;
    local_280 = 0;
    local_288 = (int *)0x0;
  }
  if (local_228 != (int *)0x0) {
    FMemory::Free();
  }
  if (CONCAT44(uStack_244,local_248) != 0) {
    FMemory::Free();
  }
  puVar30 = local_218;
  lVar25 = (longlong)local_210;
  local_280._0_4_ = local_210;
  local_288 = (int *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_288,(5 - (uint)(local_210 != 0)) + local_210,0);
  piVar26 = local_288;
  _guard_xfg_dispatch_icall_nop(local_288,puVar30,lVar25 * 2);
  iVar10 = (int)local_280;
  lVar25 = (longlong)(int)local_280;
  iVar18 = (5 - (uint)((int)local_280 != 0)) + (int)local_280;
  local_280 = CONCAT44(local_280._4_4_,iVar18);
  if (local_280._4_4_ < iVar18) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,iVar10);
    piVar26 = local_288;
    iVar18 = (int)local_280;
  }
  lVar25 = lVar25 - (ulonglong)(iVar10 != 0);
  *(undefined8 *)((longlong)piVar26 + lVar25 * 2) = 0x70006d0074002e;
  *(undefined2 *)((longlong)piVar26 + (lVar25 + 4) * 2) = 0;
  plVar14 = (longlong *)FUN_1415c3d50();
  piVar22 = (int *)&DAT_143f3eda8;
  if (iVar18 != 0) {
    piVar22 = piVar26;
  }
  cVar8 = (**(code **)(*plVar14 + 0x48))(plVar14,piVar22);
  if (cVar8 == '\0') {
    if (DAT_146ac3a3c == '\0') {
      DAT_146ac3a3c = '\x01';
      uVar15 = FCommandLine::Get();
      DAT_146ac3a3d = FParse::Param(uVar15,L"deleteuserpsocache");
    }
    if (DAT_146ac3a3d != '\0') goto LAB_141ecbd51;
  }
  else {
LAB_141ecbd51:
    plVar14 = (longlong *)FUN_1415c3d50();
    puVar30 = &DAT_143f3eda8;
    if (local_210 != 0) {
      puVar30 = local_218;
    }
    cVar9 = (**(code **)(*plVar14 + 0x48))(plVar14,puVar30);
    if (cVar9 != '\0') {
      plVar14 = (longlong *)FUN_1415c3d50();
      local_298 = (int *)((ulonglong)local_298 & 0xffffffffffffff00);
      puVar30 = &DAT_143f3eda8;
      if (local_210 != 0) {
        puVar30 = local_218;
      }
      (**(code **)(*plVar14 + 0x30))(plVar14,puVar30,0,0);
    }
    if (cVar8 != '\0') {
      plVar14 = (longlong *)FUN_1415c3d50();
      local_298 = (int *)((ulonglong)local_298 & 0xffffffffffffff00);
      piVar22 = (int *)&DAT_143f3eda8;
      if (iVar18 != 0) {
        piVar22 = piVar26;
      }
      (**(code **)(*plVar14 + 0x30))(plVar14,piVar22,0,0);
    }
  }
  local_277 = '\0';
  if ((*local_270 < DAT_146ac3a48) && (_Init_thread_header(&DAT_146ac3a48), DAT_146ac3a48 == -1)) {
    uVar15 = FCommandLine::Get();
    DAT_146ac3a44 = FParse::Param(uVar15,L"nocookedpipelinecaches");
    _Init_thread_footer(&DAT_146ac3a48);
  }
  if (DAT_146ac3a44 == '\0') {
    local_298 = (int *)(param_1 + 0x28);
    local_277 = FUN_141ecaf80(param_1,&local_208,param_1 + 0xe8,param_1 + 0x108);
  }
  cVar9 = FUN_141ecac10();
  lVar25 = DAT_146ab66a8;
  cVar8 = '\0';
  if (cVar9 != '\0') {
    cVar9 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar9 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar12 = GetCurrentThreadId(), DVar12 != DAT_1468c21c0)) {
      lVar16 = 4;
    }
    else {
      lVar16 = 0;
    }
    if (0 < *(int *)(lVar25 + lVar16)) {
      local_298 = (int *)(param_1 + 0x80);
      local_278 = FUN_141ecaf80(param_1,&local_218,param_1 + 0xd8,param_1 + 0xf8);
      if (local_278 != '\0') {
        uStack_244 = 1;
        plVar14 = (longlong *)(param_1 + 0x30);
        uVar4 = *(uint *)(param_1 + 0x58);
        puVar3 = (uint *)(param_1 + 0x40);
        local_248 = 0;
        uStack_234 = 0;
        iStack_230 = 0;
        if (uVar4 != 0) {
          puVar31 = *(uint **)(param_1 + 0x50);
          if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
            puVar31 = puVar3;
          }
          uVar5 = *puVar31;
          iStack_230 = 0;
          local_248 = 0;
          while (uVar5 == 0) {
            lVar25 = (longlong)local_248;
            iStack_230 = iStack_230 + 0x20;
            iVar10 = local_248 + 1;
            bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_248;
            local_248 = iVar10;
            if (bVar6) goto LAB_141ecbf8a;
            uVar5 = puVar31[lVar25 + 1];
          }
          uStack_244 = -uVar5 & uVar5;
          iVar10 = 0x1f;
          if (uStack_244 != 0) {
            for (; uStack_244 >> iVar10 == 0; iVar10 = iVar10 + -1) {
            }
          }
          if (uStack_244 == 0) {
            iVar10 = 0x20;
          }
          else {
            iVar10 = 0x1f - iVar10;
          }
          uStack_234 = (iStack_230 - iVar10) + 0x1f;
          if ((int)uVar4 < (int)uStack_234) {
LAB_141ecbf8a:
            uStack_234 = uVar4;
          }
        }
        uVar5 = *(uint *)(param_1 + 0x58);
        uStack_1d0 = CONCAT44(uStack_234,0xffffffff);
        local_1c8 = CONCAT44(uStack_22c,iStack_230);
        uStack_190 = CONCAT44(uStack_244,local_248);
        local_250[0] = -1 << ((byte)uVar5 & 0x1f);
        uVar29 = uVar5 & 0xffffffe0;
        iStack_1e0 = local_248;
        uStack_1dc = uStack_244;
        puStack_240 = puVar3;
        local_238 = local_250[0];
        uStack_234 = uVar5;
        local_1d8 = puVar3;
        local_198 = plVar14;
        puStack_188 = puVar3;
        uStack_180 = uStack_1d0;
        uStack_178 = local_1c8;
        local_1e8 = plVar14;
        if (uVar5 != uVar4) {
          puVar31 = *(uint **)(param_1 + 0x50);
          if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
            puVar31 = puVar3;
          }
          uVar21 = puVar31[(int)uVar5 >> 5] & local_250[0];
          iVar10 = (int)uVar5 >> 5;
          while (uVar21 == 0) {
            uVar29 = uVar29 + 0x20;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
            goto LAB_141ecc04f;
            uVar21 = puVar31[(longlong)iVar10 + 1];
            local_238 = 0xffffffff;
            iVar10 = iVar10 + 1;
          }
          uVar21 = -uVar21 & uVar21;
          iVar10 = 0x1f;
          if (uVar21 != 0) {
            for (; uVar21 >> iVar10 == 0; iVar10 = iVar10 + -1) {
            }
          }
          if (uVar21 == 0) {
            iVar10 = 0x20;
          }
          else {
            iVar10 = 0x1f - iVar10;
          }
          uStack_234 = (uVar29 - iVar10) + 0x1f;
          uVar5 = uStack_234;
          if ((int)uVar4 < (int)uStack_234) {
LAB_141ecc04f:
            uStack_234 = uVar4;
            uVar5 = uVar4;
          }
        }
        while( true ) {
          if (((uStack_1d0._4_4_ == uVar5) && (local_1d8 == puVar3)) &&
             (piVar26 = local_288, cVar8 = local_278, local_1e8 == plVar14)) break;
          piVar26 = (int *)((longlong)(int)uStack_1d0._4_4_ * 0xa8 + *local_1e8);
          TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x88,local_250,*piVar26);
          if (local_250[0] == 0xffffffff) {
            lVar25 = 0;
          }
          else {
            lVar25 = (longlong)(int)local_250[0] * 0xa8 + *(longlong *)(param_1 + 0x88);
          }
          lVar16 = lVar25 + 8;
          if (lVar25 == 0) {
            lVar16 = 0;
          }
          if (lVar16 == 0) {
LAB_141ecc13d:
            local_258 = (int **)(piVar26 + 2);
            local_260 = piVar26;
            TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<unsigned_int_const_&,FPipelineCacheFileFormatPSOMetaData_const_&>_>
                      ((longlong *)(param_1 + 0x88),&local_270,&local_260,0);
          }
          else if ((((*(int *)(param_1 + 0xdc) != *(int *)(lVar16 + 0x14) ||
                     *(int *)(param_1 + 0xe0) != *(int *)(lVar16 + 0x18)) ||
                    *(int *)(param_1 + 0xe4) != *(int *)(lVar16 + 0x1c)) ||
                    *(int *)(param_1 + 0xd8) != *(int *)(lVar16 + 0x10)) &&
                  (((*(int *)(param_1 + 0xec) != *(int *)(lVar16 + 0x14) ||
                    *(int *)(param_1 + 0xf0) != *(int *)(lVar16 + 0x18)) ||
                   *(int *)(param_1 + 0xf4) != *(int *)(lVar16 + 0x1c)) ||
                   *(int *)(param_1 + 0xe8) != *(int *)(lVar16 + 0x10))) goto LAB_141ecc13d;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(uint)uStack_1d0 & ~uStack_1dc);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_1e0);
        }
        goto LAB_141ecc181;
      }
      plVar14 = (longlong *)FUN_1415c3d50();
      local_298 = (int *)((ulonglong)local_298 & 0xffffffffffffff00);
      puVar30 = &DAT_143f3eda8;
      if (local_210 != 0) {
        puVar30 = local_218;
      }
      (**(code **)(*plVar14 + 0x30))(plVar14,puVar30,0,0);
      *(undefined8 *)(param_1 + 0x20) = 0;
      cVar8 = local_278;
    }
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x28);
  TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x88,param_1 + 0x30);
LAB_141ecc181:
  piVar22 = (int *)0x0;
  uStack_244 = 1;
  plVar14 = (longlong *)(param_1 + 0x88);
  local_248 = 0;
  lVar25 = param_1 + 0x98;
  local_238 = 0xffffffff;
  uStack_234 = 0;
  iStack_230 = 0;
  iVar10 = 0;
  puStack_240 = (uint *)lVar25;
  if (*(int *)(param_1 + 0xb0) != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_248);
    iVar10 = *(int *)(param_1 + 0xb0);
  }
  uStack_1d0._0_4_ = local_238;
  uStack_1d0._4_4_ = uStack_234;
  local_1c8 = CONCAT44(uStack_22c,iStack_230);
  uStack_190 = CONCAT44(uStack_244,local_248);
  local_238 = -1 << ((byte)iVar10 & 0x1f);
  puStack_188 = puStack_240;
  iStack_1e0 = local_248;
  uStack_1dc = uStack_244;
  local_1d8 = puStack_240;
  uStack_234 = iVar10;
  local_198 = plVar14;
  uStack_178 = local_1c8;
  local_1e8 = plVar14;
  uStack_180._0_4_ = (uint)uStack_1d0;
  uStack_180._4_4_ = uStack_1d0._4_4_;
  while (((uStack_1d0._4_4_ != iVar10 || (local_1d8 != (uint *)lVar25)) || (local_1e8 != plVar14)))
  {
    piVar27 = (int *)((longlong)(int)uStack_1d0._4_4_ * 0xa8 + *local_1e8);
    FUN_141ec5c60(&DAT_1464c9ec0,local_250,*piVar27);
    local_228 = piVar22;
    if ((local_250[0] != 0xffffffff) &&
       (lVar16 = DAT_1464c9ec0 + (longlong)(int)local_250[0] * 0x18, lVar16 != 0)) {
      local_228 = *(int **)(lVar16 + 8);
    }
    if (local_228 == (int *)0x0) {
      piVar17 = (int *)operator_new(0x28);
      local_228 = piVar22;
      if (piVar17 != (int *)0x0) {
        piVar17[0] = -1;
        piVar17[1] = -1;
        piVar17[2] = -1;
        piVar17[3] = -1;
        piVar17[4] = 0;
        piVar17[5] = 0;
        piVar17[6] = 0;
        piVar17[7] = 0;
        piVar17[8] = 0;
        local_228 = piVar17;
      }
      local_228[8] = *piVar27;
      local_228[6] = -1;
      local_228[7] = -1;
      local_258 = &local_228;
      local_260 = piVar27;
      FUN_1404981d0(&DAT_1464c9ec0,&local_270,&local_260,0);
    }
    uStack_1d0._0_4_ = (uint)uStack_1d0 & ~uStack_1dc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_1e0);
    plVar14 = local_1a0;
  }
  if ((local_277 == '\0') && (cVar8 == '\0')) {
    uVar15 = 0;
  }
  else {
    uVar15 = 1;
  }
  if (piVar26 != (int *)0x0) {
    FMemory::Free(piVar26);
  }
  if (local_218 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_208 != (int *)0x0) {
    FMemory::Free();
  }
  if (local_1f8 != (int *)0x0) {
    FMemory::Free();
  }
  return uVar15;
}



// FUNCTION 141ecc3f0 OpenPipelineFileCache body=339 status=ok
// SIG undefined OpenPipelineFileCache(void)

undefined1 FPipelineFileCache::OpenPipelineFileCache(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar2 = 0;
  cVar1 = FUN_141ec9f60();
  if (cVar1 != '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
    if (DAT_146ab6360 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)operator_new(0x128);
      puVar4 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        *(undefined4 *)(puVar3 + 5) = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        *(undefined4 *)(puVar3 + 0xc) = 0xffffffff;
        *(undefined4 *)((longlong)puVar3 + 100) = 0;
        puVar3[0xe] = 0;
        *(undefined4 *)(puVar3 + 0xf) = 0;
        *(undefined4 *)(puVar3 + 0x10) = 0;
        puVar3[0x11] = 0;
        puVar3[0x12] = 0;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
        *(undefined4 *)((longlong)puVar3 + 0xbc) = 0;
        puVar3[0x19] = 0;
        *(undefined4 *)(puVar3 + 0x1a) = 0;
        FGuid::NewGuid(puVar3 + 0x1b);
        puVar3[0x1d] = 0;
        puVar3[0x1e] = 0;
        puVar3[0x1f] = 0;
        puVar3[0x20] = 0;
        puVar3[0x21] = 0;
        puVar3[0x22] = 0;
        puVar3[0x23] = 0;
        puVar3[0x24] = 0;
        puVar4 = puVar3;
      }
      DAT_146ab6360 = puVar4;
      uVar2 = FUN_141ecb250(puVar4,param_1,param_2);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
  }
  return uVar2;
}



// FUNCTION 141ecc550 Parse body=278 status=ok
// SIG undefined Parse(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMultiInt<6>::Parse(undefined4 *param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *_Str;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar5 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  _Str = (wchar_t *)*param_2;
  pwVar3 = _Str;
  uVar4 = 1;
  while (((uVar6 = uVar4, wVar1 = *pwVar3, 0x3e < (ushort)wVar1 ||
          ((0x7000004200000001U >> ((ulonglong)(ushort)wVar1 & 0x3f) & 1) == 0)) && (wVar1 != L'|'))
        ) {
    pwVar3 = pwVar3 + 1;
    uVar4 = uVar6 + 1;
    if (wVar1 != L'.') {
      uVar4 = uVar6;
    }
  }
  uVar4 = 6;
  if (uVar6 < 7) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    *param_2 = (longlong)_Str;
  }
  else {
    do {
      iVar2 = _wtoi(_Str);
      param_1[(uVar5 - uVar4) + 6] = iVar2;
      for (; ((wVar1 = *_Str, 0x3e < (ushort)wVar1 ||
              ((0x7000004200000001U >> ((ulonglong)(ushort)wVar1 & 0x3f) & 1) == 0)) &&
             ((wVar1 != L'|' && (wVar1 != L'.')))); _Str = _Str + 1) {
      }
      pwVar3 = _Str + 1;
      if (wVar1 != L'.') {
        pwVar3 = _Str;
      }
      uVar5 = uVar5 + 1;
      _Str = pwVar3;
    } while (uVar5 < uVar4);
    *param_2 = (longlong)pwVar3;
  }
  return;
}



// FUNCTION 141ecc670 FUN_141ecc670 body=1801 status=ok
// SIG undefined FUN_141ecc670(void)

undefined8 FUN_141ecc670(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  uint uVar18;
  byte bVar19;
  char local_res8 [8];
  char local_res10;
  undefined7 uStackX_11;
  char local_res18 [8];
  int local_res20 [2];
  undefined2 *local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  int local_e8 [2];
  undefined2 *local_e0;
  undefined8 local_d8;
  undefined2 *local_d0;
  undefined8 local_c8;
  undefined2 *local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  
  uVar14 = 0;
  local_e0 = (undefined2 *)0x0;
  local_d8 = 0;
  if (DAT_1468b6148 != 0) {
    local_d0 = (undefined2 *)0x0;
    local_c8 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d0,0);
    puVar17 = local_d0;
    FGenericPlatformString::Memcpy(local_d0,L"/Script/Engine.Engine",0x2c);
    local_108 = (undefined2 *)0x0;
    local_100 = 0x20;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    FGenericPlatformString::Memcpy(local_108,L"/Script/Engine.GameUserSettings",0x40);
    puVar16 = &DAT_143f3eda8;
    if ((int)local_c8 != 0) {
      puVar16 = puVar17;
    }
    FConfigCacheIni::GetString
              (DAT_1468b6148,puVar16,L"GameUserSettingsClassName",&local_108,&DAT_1468e2360);
    puVar16 = &DAT_143f3eda8;
    if ((int)local_100 != 0) {
      puVar16 = local_108;
    }
    FConfigCacheIni::GetString
              (DAT_1468b6148,puVar16,L"PreferredGraphicsAPI",&local_e0,&DAT_1468e2420);
    if (local_108 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (puVar17 != (undefined2 *)0x0) {
      FMemory::Free(puVar17);
    }
  }
  uVar10 = FCommandLine::Get();
  cVar4 = FParse::Param(uVar10,&DAT_144ed8b98);
  local_res10 = cVar4;
  uVar10 = FCommandLine::Get();
  cVar5 = FParse::Param(uVar10,&DAT_144ed8ce8);
  local_res18[0] = cVar5;
  uVar10 = FCommandLine::Get();
  cVar6 = FParse::Param(uVar10,L"vulkan");
  cVar7 = FWindowsPlatformMisc::VerifyWindowsVersion(6);
  if (cVar7 == '\0') {
LAB_141ecc828:
    bVar19 = 1;
  }
  else {
    uVar10 = FCommandLine::Get();
    cVar7 = FParse::Param(uVar10,L"opengl");
    if (cVar7 != '\0') goto LAB_141ecc828;
    uVar10 = FCommandLine::Get();
    cVar7 = FParse::Param(uVar10,L"opengl3");
    if (cVar7 != '\0') goto LAB_141ecc828;
    uVar10 = FCommandLine::Get();
    cVar7 = FParse::Param(uVar10,L"opengl4");
    if (cVar7 != '\0') goto LAB_141ecc828;
    bVar19 = 0;
  }
  uVar10 = FCommandLine::Get();
  cVar7 = FParse::Param(uVar10,L"d3d10");
  if (cVar7 == '\0') {
    uVar10 = FCommandLine::Get();
    cVar7 = FParse::Param(uVar10,L"dx10");
    if ((cVar7 != '\0') || (((cVar5 != '\0' && (cVar6 == '\0')) && (bVar19 == 0))))
    goto LAB_141ecc86e;
    local_res20[0] = 0;
  }
  else {
LAB_141ecc86e:
    local_res20[0] = 1;
  }
  uVar10 = FCommandLine::Get();
  cVar5 = FParse::Param(uVar10,L"d3d11");
  if (cVar5 == '\0') {
    uVar10 = FCommandLine::Get();
    cVar5 = FParse::Param(uVar10,L"dx11");
    if ((cVar5 != '\0') || (((cVar4 != '\0' && (cVar6 == '\0')) && (bVar19 == 0))))
    goto LAB_141ecc8ba;
    local_e8[0] = 0;
  }
  else {
LAB_141ecc8ba:
    local_e8[0] = 1;
  }
  local_res8[0] = '\0';
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"SystemSettings",L"PreferDirectX12",local_res8,&DAT_1468e2360);
  if (local_res8[0] == '\0') {
    if (((int)local_d8 != 0) && (0 < (int)local_d8 + -1)) {
      local_c0 = (undefined2 *)0x0;
      local_b8 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c0,0);
      puVar17 = local_c0;
      FGenericPlatformString::Memcpy(local_c0,L"DX12",10);
      puVar16 = &DAT_143f3eda8;
      if ((int)local_b8 != 0) {
        puVar16 = puVar17;
      }
      puVar15 = &DAT_143f3eda8;
      if ((int)local_d8 != 0) {
        puVar15 = local_e0;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar16);
      local_res8[0] = iVar8 == 0;
      if (puVar17 != (undefined2 *)0x0) {
        FMemory::Free(puVar17);
      }
      if (local_res8[0] != '\0') goto LAB_141ecc99d;
    }
    uVar10 = FCommandLine::Get();
    cVar4 = FParse::Param(uVar10,L"d3d12");
    if (cVar4 != '\0') goto LAB_141ecc99d;
    uVar10 = FCommandLine::Get();
    cVar4 = FParse::Param(uVar10,L"dx12");
    if (cVar4 != '\0') goto LAB_141ecc99d;
    iVar8 = 0;
  }
  else {
LAB_141ecc99d:
    iVar8 = 1;
  }
  cVar4 = local_res18[0];
  uVar9 = 4;
  uVar18 = local_e8[0] + (uint)bVar19 + iVar8 + local_res20[0] + (uint)(cVar6 != '\0');
  if ((local_res10 != '\0') && (local_res18[0] != '\0')) {
    LowLevelFatalErrorHandler
              ("Unknown",0x40,
               L"-sm4 and -sm5 are mutually exclusive options, but more than one was specified on the command-line."
              );
    FDebug::AssertFailed
              (&DAT_144ed20ae,"Unknown",0x40,
               L"-sm4 and -sm5 are mutually exclusive options, but more than one was specified on the command-line."
              );
  }
  if (uVar18 < 2) {
    if (uVar18 == 0) {
      local_f8 = (longlong *)0x0;
      local_f0 = 0;
      FConfigCacheIni::GetArray
                (DAT_1468b6148,L"/Script/WindowsTargetPlatform.WindowsTargetSettings",
                 L"TargetedRHIs",&local_f8,&DAT_1468e2360);
      iVar2 = (int)local_f0;
      plVar13 = local_f8;
      if (0 < (int)local_f0) {
        if ((int)local_f8[1] == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*local_f8;
        }
        FName::FName(&local_res10,puVar17,1);
        uVar18 = FUN_141ed7950(CONCAT71(uStackX_11,local_res10));
        if ((uVar18 < 0x1e) && ((0x303a0000U >> (uVar18 & 0x1f) & 1) != 0)) {
          cVar6 = '\x01';
        }
        else {
          cVar6 = '\0';
        }
        if ((uVar18 < 0x1b) && ((0x700a74aU >> (uVar18 & 0x1f) & 1) != 0)) {
          bVar19 = 1;
        }
        else {
          bVar19 = 0;
        }
        uVar9 = FUN_1419ef5f0(uVar18);
        iVar2 = (int)local_f0;
        plVar13 = local_f8;
      }
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        plVar13 = plVar13 + 2;
      }
      if (local_f8 != (longlong *)0x0) {
        FMemory::Free(local_f8);
      }
    }
    else {
      uVar9 = 4;
      if (local_res10 != '\0') {
        uVar9 = 3;
      }
      if (cVar4 != '\0') {
        uVar9 = 2;
      }
    }
  }
  else {
    LowLevelFatalErrorHandler
              ("Unknown",0x45,
               L"-d3d12, -d3d11, -d3d10, -vulkan, and -opengl[3|4] are mutually exclusive options, but more than one was specified on the command-line."
              );
    FDebug::AssertFailed
              (&DAT_144ed20af,"Unknown",0x45,
               L"-d3d12, -d3d11, -d3d10, -vulkan, and -opengl[3|4] are mutually exclusive options, but more than one was specified on the command-line."
              );
  }
  if (bVar19 == 0) {
    if (cVar6 == '\0') {
      if ((char)iVar8 == '\0') {
        puVar11 = (undefined8 *)FName::FName(local_b0,L"D3D11RHI",1);
        uVar10 = *puVar11;
        uVar12 = FUN_14168dc80();
        plVar13 = (longlong *)FUN_141690010(uVar12,uVar10);
        cVar4 = (**(code **)(*plVar13 + 0x40))(plVar13);
        if (cVar4 != '\0') goto LAB_141eccd44;
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_60,L"DX11 feature level 10.0 is required to run the engine.",
                            L"WindowsDynamicRHI",L"RequiredDX11Feature");
        FUN_1416786b0(0,uVar10,0);
      }
      else {
        puVar11 = (undefined8 *)FName::FName(local_e8,L"D3D12RHI",1);
        uVar10 = *puVar11;
        uVar12 = FUN_14168dc80();
        plVar13 = (longlong *)FUN_141690010(uVar12,uVar10);
        cVar4 = (**(code **)(*plVar13 + 0x40))(plVar13);
        if (cVar4 != '\0') {
LAB_141eccd44:
          uVar14 = (**(code **)(*plVar13 + 0x48))(plVar13,uVar9);
          goto LAB_141eccd53;
        }
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_78,
                            L"DX12 is not supported on your system. Try running without the -dx12 or -d3d12 command line argument."
                            ,L"WindowsDynamicRHI",L"RequiredDX12");
        FUN_1416786b0(0,uVar10,0);
        local_58 = local_70;
      }
    }
    else {
      puVar11 = (undefined8 *)FName::FName(local_res20,L"VulkanRHI",1);
      uVar10 = *puVar11;
      uVar12 = FUN_14168dc80();
      plVar13 = (longlong *)FUN_141690010(uVar12,uVar10);
      cVar4 = (**(code **)(*plVar13 + 0x40))(plVar13);
      if (cVar4 != '\0') goto LAB_141eccd44;
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_90,L"Vulkan Driver is required to run the engine.",
                          L"WindowsDynamicRHI",L"RequiredVulkan");
      FUN_1416786b0(0,uVar10,0);
      local_58 = local_88;
    }
  }
  else {
    puVar11 = (undefined8 *)FName::FName(local_res18,L"OpenGLDrv",1);
    uVar10 = *puVar11;
    uVar12 = FUN_14168dc80();
    plVar13 = (longlong *)FUN_141690010(uVar12,uVar10);
    cVar4 = (**(code **)(*plVar13 + 0x40))(plVar13);
    if (cVar4 != '\0') goto LAB_141eccd44;
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_a8,L"OpenGL 3.2 is required to run the engine.",L"WindowsDynamicRHI",
                        L"RequiredOpenGL");
    FUN_1416786b0(0,uVar10,0);
    local_58 = local_a0;
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_58 + 1;
    lVar3 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  FUN_1416a8180(1);
LAB_141eccd53:
  if (local_e0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar14;
}



// FUNCTION 141eccd80 FUN_141eccd80 body=46 status=ok
// SIG undefined FUN_141eccd80(void)

void FUN_141eccd80(longlong param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))();
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x40);
  }
  return;
}



// FUNCTION 141eccdb0 PrintSummary body=2345 status=ok
// SIG undefined PrintSummary(void)

void FGPUProfileStatSummary::PrintSummary(undefined8 *param_1)

{
  uint *puVar1;
  void *pvVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  undefined1 **local_res18;
  undefined1 ***local_res20;
  undefined8 local_c8;
  uint *puStack_c0;
  uint local_b8;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  
  if (*(char *)(param_1 + 0x1f) != '\0') {
    plVar11 = param_1 + 10;
    local_res10 = local_res8;
    local_res8[0] = 0;
    local_res18 = &local_res10;
    if (0 < *(int *)(param_1 + 0xb) - *(int *)((longlong)param_1 + 0x84)) {
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Compact(plVar11);
      local_res20 = &local_res18;
      AlgoImpl::
      IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfileInfoPair>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfileInfoPair>,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfileInfoPair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>_>::FValueComparisonClass<<lambda_38db9149a4980a8cf7713aeccd1c6f0a>_>_>_>_>_>
                (*plVar11,(longlong)(*(int *)(param_1 + 0xb) - *(int *)((longlong)param_1 + 0x84)),
                 local_res8[0],&local_res20);
    }
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash(plVar11);
    uVar12 = *(uint *)(param_1 + 0xf);
    puVar1 = (uint *)(param_1 + 0xc);
    iVar16 = 0;
    local_c8._0_4_ = 0;
    local_c8._4_4_ = 1;
    uStack_b4 = 0;
    iStack_b0 = 0;
    if (uVar12 != 0) {
      puVar15 = (uint *)param_1[0xe];
      if ((uint *)param_1[0xe] == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar4 = *puVar15;
      iStack_b0 = iVar16;
      local_c8._0_4_ = iVar16;
      while (uVar4 == 0) {
        lVar7 = (longlong)(int)local_c8;
        iStack_b0 = iStack_b0 + 0x20;
        iVar5 = (int)local_c8 + 1;
        bVar3 = (int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_c8;
        local_c8._0_4_ = iVar5;
        if (bVar3) goto LAB_141eccedf;
        uVar4 = puVar15[lVar7 + 1];
      }
      local_c8._4_4_ = -uVar4 & uVar4;
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
      uStack_b4 = (iStack_b0 - iVar5) + 0x1f;
      if ((int)uVar12 < (int)uStack_b4) {
LAB_141eccedf:
        uStack_b4 = uVar12;
      }
    }
    uVar4 = *(uint *)(param_1 + 0xf);
    uStack_90 = 0xffffffff;
    uStack_8c = uStack_b4;
    local_88 = CONCAT44(uStack_ac,iStack_b0);
    local_b8 = -1 << ((byte)uVar4 & 0x1f);
    uStack_68._0_4_ = (int)local_c8;
    uStack_68._4_4_ = local_c8._4_4_;
    uVar14 = uVar4 & 0xffffffe0;
    iStack_a0 = (int)local_c8;
    uStack_9c = local_c8._4_4_;
    puStack_c0 = puVar1;
    uStack_b4 = uVar4;
    local_98 = puVar1;
    local_70 = plVar11;
    puStack_60 = puVar1;
    uStack_50 = local_88;
    local_a8 = plVar11;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    if (uVar4 != uVar12) {
      puVar15 = (uint *)param_1[0xe];
      if ((uint *)param_1[0xe] == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar6 = puVar15[(int)uVar4 >> 5] & local_b8;
      iVar5 = (int)uVar4 >> 5;
      while (uVar6 == 0) {
        uVar14 = uVar14 + 0x20;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_141eccfb6;
        uVar6 = puVar15[(longlong)iVar5 + 1];
        local_b8 = 0xffffffff;
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
      uStack_b4 = (uVar14 - iVar5) + 0x1f;
      uVar4 = uStack_b4;
      if ((int)uVar12 < (int)uStack_b4) {
LAB_141eccfb6:
        uStack_b4 = uVar12;
        uVar4 = uVar12;
      }
    }
    while (((uStack_8c != uVar4 || (local_98 != puVar1)) || (local_a8 != plVar11))) {
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
    }
    local_res10 = local_res8;
    local_res8[0] = 0;
    local_res18 = &local_res10;
    if (0 < *(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34)) {
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Compact(param_1);
      local_res20 = &local_res18;
      AlgoImpl::
      IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfileInfoPair>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfileInfoPair>,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfileInfoPair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>_>::FValueComparisonClass<<lambda_38db9149a4980a8cf7713aeccd1c6f0a>_>_>_>_>_>
                (*param_1,(longlong)(*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34)),
                 local_res8[0],&local_res20);
    }
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
    uVar12 = *(uint *)(param_1 + 5);
    puVar1 = (uint *)(param_1 + 2);
    local_c8._0_4_ = 0;
    local_c8._4_4_ = 1;
    uStack_b4 = 0;
    iStack_b0 = 0;
    if (uVar12 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar4 = *puVar15;
      iStack_b0 = iVar16;
      local_c8._0_4_ = iVar16;
      while (uVar4 == 0) {
        lVar7 = (longlong)(int)local_c8;
        iStack_b0 = iStack_b0 + 0x20;
        iVar5 = (int)local_c8 + 1;
        bVar3 = (int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_c8;
        local_c8._0_4_ = iVar5;
        if (bVar3) goto LAB_141ecd0df;
        uVar4 = puVar15[lVar7 + 1];
      }
      local_c8._4_4_ = -uVar4 & uVar4;
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
      uStack_b4 = (iStack_b0 - iVar5) + 0x1f;
      if ((int)uVar12 < (int)uStack_b4) {
LAB_141ecd0df:
        uStack_b4 = uVar12;
      }
    }
    uVar4 = *(uint *)(param_1 + 5);
    uStack_90 = 0xffffffff;
    uStack_8c = uStack_b4;
    local_88 = CONCAT44(uStack_ac,iStack_b0);
    local_b8 = -1 << ((byte)uVar4 & 0x1f);
    uStack_68._0_4_ = (int)local_c8;
    uStack_68._4_4_ = local_c8._4_4_;
    uVar14 = uVar4 & 0xffffffe0;
    local_70._0_4_ = SUB84(param_1,0);
    local_70._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    local_a8._0_4_ = (undefined4)local_70;
    local_a8._4_4_ = local_70._4_4_;
    iStack_a0 = (int)local_c8;
    uStack_9c = local_c8._4_4_;
    puStack_c0 = puVar1;
    uStack_b4 = uVar4;
    local_98 = puVar1;
    local_70 = param_1;
    puStack_60 = puVar1;
    uStack_50 = local_88;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    if (uVar4 != uVar12) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar6 = puVar15[(int)uVar4 >> 5] & local_b8;
      iVar5 = (int)uVar4 >> 5;
      while (uVar6 == 0) {
        uVar14 = uVar14 + 0x20;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_141ecd1b6;
        uVar6 = puVar15[(longlong)iVar5 + 1];
        local_b8 = 0xffffffff;
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
      uStack_b4 = (uVar14 - iVar5) + 0x1f;
      uVar4 = uStack_b4;
      if ((int)uVar12 < (int)uStack_b4) {
LAB_141ecd1b6:
        uStack_b4 = uVar12;
        uVar4 = uVar12;
      }
    }
    while (((uStack_8c != uVar4 || (local_98 != puVar1)) ||
           ((undefined8 *)CONCAT44(local_a8._4_4_,(undefined4)local_a8) != param_1))) {
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
    }
    plVar9 = param_1 + 0x14;
    local_res8[0] = 0;
    local_res10 = local_res8;
    local_res18 = &local_res10;
    if (0 < *(int *)(param_1 + 0x15) - *(int *)((longlong)param_1 + 0xd4)) {
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Compact(plVar9);
      local_res20 = &local_res18;
      AlgoImpl::
      IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfileInfoPair>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfileInfoPair>,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfileInfoPair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>_>::FValueComparisonClass<<lambda_38db9149a4980a8cf7713aeccd1c6f0a>_>_>_>_>_>
                (*plVar9,(longlong)(*(int *)(param_1 + 0x15) - *(int *)((longlong)param_1 + 0xd4)),
                 local_res8[0],&local_res20);
    }
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash(plVar9);
    uVar12 = *(uint *)(param_1 + 0x19);
    puVar1 = (uint *)(param_1 + 0x16);
    local_c8 = (void *)0x100000000;
    uStack_b4 = 0;
    iStack_b0 = 0;
    if (uVar12 != 0) {
      puVar15 = (uint *)param_1[0x18];
      if ((uint *)param_1[0x18] == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar4 = *puVar15;
      iStack_b0 = iVar16;
      iVar5 = iVar16;
      while (uVar4 == 0) {
        iStack_b0 = iStack_b0 + 0x20;
        local_c8._4_4_ = (uint)((ulonglong)local_c8 >> 0x20);
        local_c8 = (void *)CONCAT44(local_c8._4_4_,iVar5 + 1);
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_141ecd2df;
        uVar4 = puVar15[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      local_c8 = (void *)CONCAT44(uVar4,(int)local_c8);
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_b4 = (iStack_b0 - iVar5) + 0x1f;
      if ((int)uVar12 < (int)uStack_b4) {
LAB_141ecd2df:
        uStack_b4 = uVar12;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x19);
    uStack_90 = 0xffffffff;
    uStack_8c = uStack_b4;
    local_88 = CONCAT44(uStack_ac,iStack_b0);
    local_b8 = -1 << ((byte)uVar4 & 0x1f);
    uStack_68 = local_c8;
    pvVar2 = uStack_68;
    uVar14 = uVar4 & 0xffffffe0;
    uStack_68._0_4_ = (int)local_c8;
    uStack_68._4_4_ = (uint)((ulonglong)local_c8 >> 0x20);
    iStack_a0 = (int)uStack_68;
    uStack_9c = uStack_68._4_4_;
    puStack_c0 = puVar1;
    uStack_b4 = uVar4;
    local_98 = puVar1;
    local_70 = plVar9;
    uStack_68 = pvVar2;
    puStack_60 = puVar1;
    uStack_50 = local_88;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    local_a8 = plVar9;
    if (uVar4 != uVar12) {
      puVar15 = (uint *)param_1[0x18];
      if ((uint *)param_1[0x18] == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar6 = puVar15[(int)uVar4 >> 5] & local_b8;
      iVar5 = (int)uVar4 >> 5;
      while (uVar6 == 0) {
        uVar14 = uVar14 + 0x20;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_141ecd3b6;
        uVar6 = puVar15[(longlong)iVar5 + 1];
        local_b8 = 0xffffffff;
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
      uStack_b4 = (uVar14 - iVar5) + 0x1f;
      uVar4 = uStack_b4;
      if ((int)uVar12 < (int)uStack_b4) {
LAB_141ecd3b6:
        uStack_b4 = uVar12;
        uVar4 = uVar12;
      }
    }
    while (((uStack_8c != uVar4 || (local_98 != puVar1)) || (local_a8 != plVar9))) {
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
    }
    local_80 = (longlong *)0x0;
    local_78 = 0;
    local_c8 = (void *)0x0;
    iVar5 = *(int *)(DAT_146ab6570 + 0x18);
    pvVar2 = *(void **)(DAT_146ab6570 + 0x10);
    puStack_c0 = (uint *)CONCAT44(puStack_c0._4_4_,iVar5);
    if (iVar5 == 0) {
      puStack_c0 = (uint *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,iVar5,0);
      ::_guard_xfg_dispatch_icall_nop(local_c8,pvVar2,(longlong)iVar5 * 2);
    }
    FUN_141594550(&local_c8,&local_80,&DAT_144042018,1);
    if (local_c8 != (void *)0x0) {
      FMemory::Free();
    }
    uVar13 = (ulonglong)(int)local_78;
    if ((0 < (int)local_78) && (plVar9 = local_80 + uVar13 * 2, local_80 != plVar9)) {
      puVar1 = (uint *)(param_1 + 0xc);
      plVar10 = local_80;
      do {
        uVar12 = *(uint *)(param_1 + 0xf);
        local_c8 = (void *)0x100000000;
        uStack_b4 = 0;
        iStack_b0 = 0;
        if (uVar12 != 0) {
          puVar15 = (uint *)param_1[0xe];
          if ((uint *)param_1[0xe] == (uint *)0x0) {
            puVar15 = puVar1;
          }
          uVar4 = *puVar15;
          iStack_b0 = iVar16;
          iVar5 = iVar16;
          while (uVar4 == 0) {
            iStack_b0 = iStack_b0 + 0x20;
            local_c8._4_4_ = (uint)((ulonglong)local_c8 >> 0x20);
            local_c8 = (void *)CONCAT44(local_c8._4_4_,iVar5 + 1);
            if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
            goto LAB_141ecd52f;
            uVar4 = puVar15[(longlong)iVar5 + 1];
            iVar5 = iVar5 + 1;
          }
          uVar4 = -uVar4 & uVar4;
          iVar5 = 0x1f;
          if (uVar4 != 0) {
            for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          local_c8 = (void *)CONCAT44(uVar4,(int)local_c8);
          if (uVar4 == 0) {
            iVar5 = 0x20;
          }
          else {
            iVar5 = 0x1f - iVar5;
          }
          uStack_b4 = (iStack_b0 - iVar5) + 0x1f;
          if ((int)uVar12 < (int)uStack_b4) {
LAB_141ecd52f:
            uStack_b4 = uVar12;
          }
        }
        uVar4 = *(uint *)(param_1 + 0xf);
        uStack_90 = 0xffffffff;
        uStack_8c = uStack_b4;
        local_88 = CONCAT44(uStack_ac,iStack_b0);
        local_b8 = -1 << ((byte)uVar4 & 0x1f);
        uStack_68 = local_c8;
        pvVar2 = uStack_68;
        uVar14 = uVar4 & 0xffffffe0;
        uStack_68._0_4_ = (int)local_c8;
        uStack_68._4_4_ = (uint)((ulonglong)local_c8 >> 0x20);
        iStack_a0 = (int)uStack_68;
        uStack_9c = uStack_68._4_4_;
        puStack_c0 = puVar1;
        uStack_b4 = uVar4;
        local_98 = puVar1;
        local_70 = plVar11;
        uStack_68 = pvVar2;
        puStack_60 = puVar1;
        uStack_50 = local_88;
        uStack_58 = uStack_90;
        uStack_54 = uStack_8c;
        local_a8 = plVar11;
        if (uVar4 != uVar12) {
          puVar15 = (uint *)param_1[0xe];
          if ((uint *)param_1[0xe] == (uint *)0x0) {
            puVar15 = puVar1;
          }
          uVar6 = puVar15[(int)uVar4 >> 5] & local_b8;
          iVar5 = (int)uVar4 >> 5;
          while (uVar6 == 0) {
            uVar14 = uVar14 + 0x20;
            if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
            goto LAB_141ecd5f8;
            uVar6 = puVar15[(longlong)iVar5 + 1];
            local_b8 = 0xffffffff;
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
          uStack_b4 = (uVar14 - iVar5) + 0x1f;
          uVar4 = uStack_b4;
          if ((int)uVar12 < (int)uStack_b4) {
LAB_141ecd5f8:
            uStack_b4 = uVar12;
            uVar4 = uVar12;
          }
        }
        while (((uStack_8c != uVar4 || (local_98 != puVar1)) || (local_a8 != plVar11))) {
          if ((int)plVar10[1] == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*plVar10;
          }
          FUN_141592950(*local_a8 + (longlong)(int)uStack_8c * 0x28,puVar8,1,0,0xffffffff);
          uStack_90 = uStack_90 & ~uStack_9c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
        }
        plVar10 = plVar10 + 2;
      } while (plVar10 != plVar9);
      uVar13 = local_78 & 0xffffffff;
    }
    uVar12 = (uint)uVar13;
    plVar11 = local_80;
    while (uVar12 != 0) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
      uVar12 = (int)uVar13 - 1;
      uVar13 = (ulonglong)uVar12;
    }
    if (local_80 != (longlong *)0x0) {
      FMemory::Free(local_80);
    }
  }
  return;
}



// FUNCTION 141ecd6e0 ProcessMatch body=529 status=ok
// SIG undefined ProcessMatch(void)

void FGPUProfileStatSummary::ProcessMatch(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int local_res8 [2];
  longlong *local_res18;
  longlong local_48 [6];
  
  if ((char)param_1[0x1f] == '\0') {
    return;
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    return;
  }
  local_48[1] = 2;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],&DAT_144740598,4);
  plVar1 = (longlong *)(param_2 + 0x30);
  cVar2 = FUN_1404e14f0(plVar1,local_48,local_48 + 4,local_48 + 2,0,0);
  if (local_48[0] != 0) {
    FMemory::Free(local_48[0]);
  }
  if (cVar2 == '\0') {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x14,local_res8,plVar1);
    if ((local_res8[0] != -1) &&
       (lVar3 = param_1[0x14] + (longlong)local_res8[0] * 0x28, lVar3 != 0)) goto LAB_141ecd8bb;
    local_res18 = plVar1;
    FUN_141eb5200(param_1 + 0x14,local_res8,&local_res18,0);
    lVar3 = param_1[0x14];
  }
  else {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_48 + 4);
    if ((local_res8[0] == -1) || (lVar3 = *param_1 + (longlong)local_res8[0] * 0x28, lVar3 == 0)) {
      local_res18 = local_48 + 4;
      FUN_141eb5200(param_1,local_res8,&local_res18,0);
      lVar3 = *param_1 + (longlong)local_res8[0] * 0x28;
    }
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + (ulonglong)*(uint *)(param_2 + 0x20)
    ;
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 10,local_res8,local_48 + 2);
    if ((local_res8[0] != -1) && (lVar3 = param_1[10] + (longlong)local_res8[0] * 0x28, lVar3 != 0))
    goto LAB_141ecd8bb;
    local_res18 = local_48 + 2;
    FUN_141eb5200(param_1 + 10,local_res8,&local_res18,0);
    lVar3 = param_1[10];
  }
  lVar3 = lVar3 + (longlong)local_res8[0] * 0x28;
LAB_141ecd8bb:
  *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + (ulonglong)*(uint *)(param_2 + 0x20);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  if (local_48[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141ecd900 FUN_141ecd900 body=203 status=ok
// SIG undefined FUN_141ecd900(void)

void FUN_141ecd900(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((char)param_1[1] != '\0') {
    *(int *)(param_1 + 8) = (int)param_1[8] + 1;
    if (param_1[7] == 0) {
      uVar3 = (**(code **)(*param_1 + 8))();
      lVar4 = param_1[6];
      iVar1 = *(int *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x10) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x14) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 8,iVar1);
      }
      *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)iVar1 * 8) = uVar3;
      iVar1 = *(int *)(param_1[6] + 0x10);
      lVar4 = *(longlong *)(param_1[6] + 8);
    }
    else {
      uVar3 = (**(code **)(*param_1 + 8))();
      lVar4 = param_1[7];
      iVar1 = *(int *)(lVar4 + 0x50);
      *(int *)(lVar4 + 0x50) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x54) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x48,iVar1);
      }
      *(undefined8 *)(*(longlong *)(lVar4 + 0x48) + (longlong)iVar1 * 8) = uVar3;
      iVar1 = *(int *)(param_1[7] + 0x50);
      lVar4 = *(longlong *)(param_1[7] + 0x48);
    }
    plVar2 = *(longlong **)(lVar4 + -8 + (longlong)iVar1 * 8);
    param_1[7] = (longlong)plVar2;
    (**(code **)(*plVar2 + 0x18))();
  }
  return;
}



// FUNCTION 141ecd9d0 QueueAsyncCommandListSubmit body=432 status=ok
// SIG undefined QueueAsyncCommandListSubmit(void)

void FRHICommandListBase::QueueAsyncCommandListSubmit
               (longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if ((DAT_146ab6383 != '\0') && (DAT_146ab6e8c != 0)) {
    FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  iVar2 = DAT_146ab7210;
  if (*param_2 != 0) {
    if (DAT_146ab6383 != '\0') {
      lVar6 = (longlong)DAT_146ab7210;
      DAT_146ab7210 = DAT_146ab7210 + 1;
      if (DAT_146ab7214 < DAT_146ab7210) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (&DAT_146ab71e8,iVar2);
      }
      lVar1 = *param_2;
      puVar4 = DAT_146ab7208;
      if (DAT_146ab7208 == (undefined *)0x0) {
        puVar4 = &DAT_146ab71e8;
      }
      *(longlong *)(puVar4 + lVar6 * 8) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
        UNLOCK();
      }
    }
    iVar2 = DAT_146ab7240;
    lVar6 = (longlong)DAT_146ab7240;
    DAT_146ab7240 = DAT_146ab7240 + 1;
    if (DAT_146ab7244 < DAT_146ab7240) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (&DAT_146ab7218,iVar2);
    }
    lVar1 = *param_2;
    puVar4 = DAT_146ab7238;
    if (DAT_146ab7238 == (undefined *)0x0) {
      puVar4 = &DAT_146ab7218;
    }
    *(longlong *)(puVar4 + lVar6 * 8) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
      UNLOCK();
    }
  }
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar5;
  *(undefined8 **)(param_1 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_ExecuteAndDestruct_144edb3f0;
  lVar6 = *param_2;
  puVar5[2] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
    UNLOCK();
  }
  puVar5[3] = param_3;
  if ((DAT_146ab6383 != '\0') && (DAT_146ab6e8c != 0)) {
    FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
    return;
  }
  return;
}



// FUNCTION 141ecdb80 FUN_141ecdb80 body=3709 status=ok
// SIG undefined FUN_141ecdb80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ecdb80(longlong param_1,longlong *param_2,undefined1 param_3,longlong param_4,
                  longlong param_5,int param_6,int param_7,char param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  DWORD *pDVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong *puVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  int local_148;
  longlong local_140;
  longlong local_138;
  uint local_130;
  int local_12c;
  longlong local_128;
  ulonglong local_120;
  int local_118;
  longlong local_110;
  longlong local_108;
  ulonglong *local_100;
  ulonglong *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8 [4];
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar14 = 0;
  lVar26 = (longlong)param_6;
  local_e8 = param_5;
  local_148 = param_6;
  local_130 = 0;
  local_154 = 0;
  local_158 = param_3;
  local_140 = param_4;
  local_128 = param_1;
  local_e0 = param_2;
  if (DAT_146ab6383 != '\0') {
    if (DAT_146ab6e8c != 0) {
      FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    if (DAT_146ab7260 != 0) {
      LOCK();
      uVar13 = *(ulonglong *)(DAT_146ab7260 + 8);
      if (uVar13 == 0) {
        *(ulonglong *)(DAT_146ab7260 + 8) = 0;
        uVar13 = 0;
      }
      lVar23 = DAT_146ab7260;
      UNLOCK();
      if (((uVar13 >> 0x1a & 1) != 0) && (DAT_146ab7260 = 0, lVar23 != 0)) {
        LOCK();
        piVar1 = (int *)(lVar23 + 0x48);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
  }
  local_138 = lVar26;
  if ((param_6 == 0) || (DAT_146ab6383 == '\0')) goto LAB_141ece7dd;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac3ab8) && (_Init_thread_header(&DAT_146ac3ab8), DAT_146ac3ab8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar12 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RHICmdBalanceParallelLists");
    uVar13 = uVar14;
    if (plVar12 != (longlong *)0x0) {
      uVar13 = (**(code **)(*plVar12 + 0x38))(plVar12);
    }
    DAT_146ac3ab0 = uVar13;
    _Init_thread_footer(&DAT_146ac3ab8);
  }
  lVar26 = DAT_146ab6cf8;
  if (((*(int *)(DAT_146ac3ab0 + 4) == 0) && (0 < *(int *)(DAT_146ab6de8 + 4))) &&
     (DAT_146ab6328 != '\0')) {
    cVar6 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar7 = GetCurrentThreadId();
      uVar13 = 4;
      if (DVar7 == DAT_1468c21c0) goto LAB_141ecdcfd;
    }
    else {
LAB_141ecdcfd:
      uVar13 = uVar14;
    }
    if (0 < *(int *)(uVar13 + lVar26)) {
      puVar24 = (ulonglong *)(param_1 + 0x30);
      local_58 = (undefined1 *)0x0;
      local_120 = *puVar24 + 7 & 0xfffffffffffffff8;
      local_50 = 0;
      iVar8 = local_148 * 8;
      uVar13 = (longlong)iVar8 + local_120;
      local_f8 = puVar24;
      if (*(ulonglong *)(param_1 + 0x38) < uVar13) {
        FMemStackBase::AllocateNewChunk(puVar24,iVar8 + 8);
        local_120 = *puVar24 + 7 & 0xfffffffffffffff8;
        uVar13 = (longlong)iVar8 + local_120;
      }
      *puVar24 = uVar13;
      if (0 < local_138) {
        lVar26 = local_140 - (longlong)param_2;
        lVar27 = local_120 - (longlong)param_2;
        lVar23 = local_138;
        local_140 = lVar26;
        do {
          uVar13 = local_50;
          *(undefined8 *)(lVar27 + (longlong)param_2) = *(undefined8 *)(lVar26 + (longlong)param_2);
          lVar22 = *param_2;
          if (lVar22 != 0) {
            lVar21 = (longlong)(int)local_50;
            iVar8 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar8);
            if (local_50._4_4_ < iVar8) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (local_78,uVar13 & 0xffffffff);
              lVar22 = *param_2;
            }
            puVar17 = local_78;
            if (local_58 != (undefined1 *)0x0) {
              puVar17 = local_58;
            }
            *(longlong *)(puVar17 + lVar21 * 8) = lVar22;
            if (lVar22 != 0) {
              LOCK();
              *(int *)(lVar22 + 0x48) = *(int *)(lVar22 + 0x48) + 1;
              UNLOCK();
            }
            iVar8 = DAT_146ab7240;
            lVar22 = (longlong)DAT_146ab7240;
            DAT_146ab7240 = DAT_146ab7240 + 1;
            if (DAT_146ab7244 < DAT_146ab7240) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (&DAT_146ab7218,iVar8);
            }
            lVar21 = *param_2;
            puVar18 = DAT_146ab7238;
            if (DAT_146ab7238 == (undefined *)0x0) {
              puVar18 = &DAT_146ab7218;
            }
            *(longlong *)(puVar18 + lVar22 * 8) = lVar21;
            if (lVar21 != 0) {
              LOCK();
              *(int *)(lVar21 + 0x48) = *(int *)(lVar21 + 0x48) + 1;
              UNLOCK();
            }
          }
          param_2 = param_2 + 1;
          lVar23 = lVar23 + -1;
          puVar24 = local_f8;
          param_1 = local_128;
        } while (lVar23 != 0);
      }
      uVar11 = local_50;
      uVar13 = local_120;
      if (DAT_146ab7260 != 0) {
        lVar26 = (longlong)(int)local_50;
        iVar8 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar8);
        if (local_50._4_4_ < iVar8) {
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_78,uVar11 & 0xffffffff);
        }
        puVar17 = local_78;
        if (local_58 != (undefined1 *)0x0) {
          puVar17 = local_58;
        }
        *(longlong *)(puVar17 + lVar26 * 8) = DAT_146ab7260;
        if (DAT_146ab7260 != 0) {
          LOCK();
          *(int *)(DAT_146ab7260 + 0x48) = *(int *)(DAT_146ab7260 + 0x48) + 1;
          UNLOCK();
        }
      }
      uVar11 = FMemory::Malloc(0x1b8,0);
      if (uVar11 != 0) {
        FRHICommandListBase::FRHICommandListBase(uVar11,*(undefined4 *)(param_1 + 0x88));
        uVar14 = uVar11;
      }
      *(undefined8 *)(uVar14 + 0x90) = *(undefined8 *)(param_1 + 0x90);
      plVar12 = (longlong *)
                TGraphTask<FParallelTranslateSetupCommandList>::CreateTask
                          (local_c0,local_78,DAT_1464a8210);
      lVar26 = *plVar12;
      *(ulonglong *)(lVar26 + 0x18) = uVar13;
      *(ulonglong *)(lVar26 + 0x10) = uVar14;
      *(int *)(lVar26 + 0x20) = local_148;
      *(undefined1 *)(lVar26 + 0x24) = local_158;
      *(int *)(lVar26 + 0x28) = *(int *)(DAT_146ab6e18 + 4) << 10;
      *(undefined4 *)(lVar26 + 0x2c) = *(undefined4 *)(DAT_146ab6e00 + 4);
      lVar26 = *plVar12;
      lVar22 = plVar12[2];
      lVar23 = plVar12[1];
      lVar27 = *(longlong *)(lVar26 + 0x38);
      piVar1 = (int *)(lVar27 + 0x48);
      if (lVar27 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_f0 = lVar27;
      FUN_141ed7690(lVar26,lVar23,(int)lVar22,1);
      puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar19 + 3;
      if ((undefined8 *)puVar24[1] < puVar16) {
        FMemStackBase::AllocateNewChunk(puVar24,0x20);
        puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
        puVar16 = puVar19 + 3;
      }
      *puVar24 = (ulonglong)puVar16;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar19;
      *(undefined8 **)(param_1 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &PTR_FUN_144edb480;
      puVar19[2] = uVar14;
      iVar8 = DAT_146ab7210;
      lVar26 = (longlong)DAT_146ab7210;
      DAT_146ab7210 = DAT_146ab7210 + 1;
      if (DAT_146ab7214 < DAT_146ab7210) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (&DAT_146ab71e8,iVar8);
      }
      puVar18 = DAT_146ab7208;
      if (DAT_146ab7208 == (undefined *)0x0) {
        puVar18 = &DAT_146ab71e8;
      }
      *(longlong *)(puVar18 + lVar26 * 8) = lVar27;
      if (lVar27 != 0) {
        LOCK();
        *(int *)(lVar27 + 0x48) = *(int *)(lVar27 + 0x48) + 1;
        UNLOCK();
        lVar27 = local_f0;
      }
      if ((DAT_146ab6383 != '\0') && (DAT_146ab6e8c != 0)) {
        FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      if (lVar27 != 0) {
        LOCK();
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          FGraphEvent::Recycle(local_f0);
        }
      }
      FUN_14158cb50(local_78);
      return;
    }
  }
  lVar23 = DAT_146ab6cf8;
  local_150 = 0;
  local_12c = 0;
  local_118 = *(int *)(DAT_146ab6d58 + 4);
  lVar26 = local_138;
  if (DAT_146ab6328 != '\0') {
    cVar6 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar6 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar7 = GetCurrentThreadId(), uVar13 = 4, DVar7 == DAT_1468c21c0)) {
      uVar13 = uVar14;
    }
    lVar26 = local_138;
    param_4 = local_140;
    if (0 < *(int *)(lVar23 + uVar13)) {
      uVar13 = uVar14;
      uVar11 = uVar14;
      if (0 < local_138) {
        do {
          iVar8 = *(int *)(param_5 + uVar13 * 4);
          uVar25 = (uint)uVar11;
          if ((local_118 != 0) && (-1 < iVar8)) {
            for (; ((uVar25 = local_150, (longlong)uVar13 < (longlong)((int)local_138 + -1) &&
                    (iVar9 = *(int *)(param_5 + uVar13 * 4 + 4), -1 < iVar9)) &&
                   (iVar9 + iVar8 <= param_7)); iVar8 = iVar8 + *(int *)(param_5 + uVar13 * 4)) {
              uVar13 = uVar13 + 1;
            }
          }
          local_150 = uVar25 + 1;
          uVar13 = uVar13 + 1;
          uVar11 = (ulonglong)local_150;
        } while ((longlong)uVar13 < local_138);
      }
      local_110 = (**(code **)(*DAT_146ab6358 + 0x478))(DAT_146ab6358,0,local_150);
      param_4 = local_140;
      if (local_110 != 0) {
        if (lVar26 < 1) {
          return;
        }
        local_100 = (ulonglong *)(param_1 + 0x30);
        local_154 = 0;
        uVar13 = uVar14;
        do {
          puVar24 = local_100;
          uVar25 = (uint)uVar14;
          iVar8 = *(int *)(local_e8 + uVar13 * 4);
          lVar26 = local_e8 + uVar13 * 4;
          local_14c = uVar25;
          local_120 = uVar13;
          if (param_8 != '\0') {
            FMemStackBase::GetByteCount(*(longlong *)(local_140 + uVar13 * 8) + 0x30);
          }
          lVar23 = local_140;
          uVar11 = uVar13;
          uVar5 = local_120;
          if ((local_118 != 0) && (-1 < iVar8)) {
            iVar9 = local_148 + -1;
            puVar24 = local_100;
            lVar27 = local_e8;
            while (((local_100 = puVar24, (longlong)uVar11 < (longlong)iVar9 &&
                    (uVar25 = local_154, uVar5 = uVar11, -1 < *(int *)(lVar26 + 4))) &&
                   (*(int *)(lVar26 + 4) + iVar8 <= param_7))) {
              uVar11 = uVar11 + 1;
              local_14c = (int)uVar14 + 1;
              iVar8 = iVar8 + *(int *)(lVar27 + uVar11 * 4);
              lVar26 = lVar27 + uVar11 * 4;
              if (param_8 != '\0') {
                FMemStackBase::GetByteCount(*(longlong *)(lVar23 + uVar13 * 8) + 0x30);
                lVar27 = local_e8;
              }
              uVar14 = (ulonglong)local_14c;
              uVar25 = local_154;
              uVar5 = uVar11;
              puVar24 = local_100;
            }
          }
          local_120 = uVar5;
          if (local_110 == 0) {
            local_110 = (**(code **)(*DAT_146ab6358 + 0x478))(DAT_146ab6358,local_12c,local_150);
          }
          uVar25 = local_14c - uVar25;
          local_88 = (longlong *)0x0;
          local_f8 = (ulonglong *)(*puVar24 + 7 & 0xfffffffffffffff8);
          local_80 = 0;
          lVar26 = (longlong)(int)(uVar25 * 8 + 8);
          uVar14 = (longlong)local_f8 + lVar26;
          local_154 = uVar25;
          if (puVar24[1] < uVar14) {
            FMemStackBase::AllocateNewChunk(puVar24,uVar25 * 8 + 0x10);
            local_f8 = (ulonglong *)(*puVar24 + 7 & 0xfffffffffffffff8);
            uVar14 = (longlong)local_f8 + lVar26;
          }
          *puVar24 = uVar14;
          if ((longlong)uVar13 <= (longlong)uVar11) {
            lVar23 = ((longlong)local_f8 + uVar13 * -8) - (longlong)local_e0;
            lVar27 = local_140 - (longlong)local_e0;
            plVar12 = local_e0 + uVar13;
            lVar26 = (local_120 - uVar13) + 1;
            do {
              uVar14 = local_80;
              *(undefined8 *)(lVar23 + (longlong)plVar12) =
                   *(undefined8 *)((longlong)plVar12 + lVar27);
              lVar22 = *plVar12;
              if (lVar22 != 0) {
                lVar21 = (longlong)(int)local_80;
                iVar8 = (int)local_80 + 1;
                local_80 = CONCAT44(local_80._4_4_,iVar8);
                if (local_80._4_4_ < iVar8) {
                  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::
                  ResizeGrow(local_a8,uVar14 & 0xffffffff);
                  lVar22 = *plVar12;
                }
                plVar20 = local_a8;
                if (local_88 != (longlong *)0x0) {
                  plVar20 = local_88;
                }
                plVar20[lVar21] = lVar22;
                if (lVar22 != 0) {
                  LOCK();
                  *(int *)(lVar22 + 0x48) = *(int *)(lVar22 + 0x48) + 1;
                  UNLOCK();
                }
                iVar8 = DAT_146ab7210;
                lVar22 = (longlong)DAT_146ab7210;
                DAT_146ab7210 = DAT_146ab7210 + 1;
                if (DAT_146ab7214 < DAT_146ab7210) {
                  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::
                  ResizeGrow(&DAT_146ab71e8,iVar8);
                }
                lVar21 = *plVar12;
                puVar18 = DAT_146ab7208;
                if (DAT_146ab7208 == (undefined *)0x0) {
                  puVar18 = &DAT_146ab71e8;
                }
                *(longlong *)(puVar18 + lVar22 * 8) = lVar21;
                if (lVar21 != 0) {
                  LOCK();
                  *(int *)(lVar21 + 0x48) = *(int *)(lVar21 + 0x48) + 1;
                  UNLOCK();
                }
                iVar8 = DAT_146ab7240;
                lVar22 = (longlong)DAT_146ab7240;
                DAT_146ab7240 = DAT_146ab7240 + 1;
                if (DAT_146ab7244 < DAT_146ab7240) {
                  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::
                  ResizeGrow(&DAT_146ab7218,iVar8);
                }
                puVar18 = DAT_146ab7238;
                if (DAT_146ab7238 == (undefined *)0x0) {
                  puVar18 = &DAT_146ab7218;
                }
                lVar21 = *plVar12;
                *(longlong *)(puVar18 + lVar22 * 8) = lVar21;
                if (lVar21 != 0) {
                  LOCK();
                  *(int *)(lVar21 + 0x48) = *(int *)(lVar21 + 0x48) + 1;
                  UNLOCK();
                }
              }
              plVar12 = plVar12 + 1;
              lVar26 = lVar26 + -1;
              uVar25 = local_154;
            } while (lVar26 != 0);
          }
          uVar14 = local_80;
          if (DAT_146ab7260 != 0) {
            lVar26 = (longlong)(int)local_80;
            iVar8 = (int)local_80 + 1;
            local_80 = CONCAT44(local_80._4_4_,iVar8);
            if (local_80._4_4_ < iVar8) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (local_a8,uVar14 & 0xffffffff);
            }
            plVar12 = local_a8;
            if (local_88 != (longlong *)0x0) {
              plVar12 = local_88;
            }
            plVar12[lVar26] = DAT_146ab7260;
            if (DAT_146ab7260 != 0) {
              LOCK();
              *(int *)(DAT_146ab7260 + 0x48) = *(int *)(DAT_146ab7260 + 0x48) + 1;
              UNLOCK();
            }
          }
          uVar4 = DAT_1464a8210;
          iVar8 = (int)local_80;
          pDVar15 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
          puVar16 = TlsGetValue(*pDVar15);
          if (puVar16 == (undefined8 *)0x0) {
            puVar19 = (undefined8 *)operator_new(0x18);
            puVar16 = (undefined8 *)0x0;
            if (puVar19 != (undefined8 *)0x0) {
              *puVar19 = 0;
              puVar19[1] = 0;
              *(undefined4 *)(puVar19 + 2) = 0;
              puVar16 = puVar19;
            }
            TlsSetValue(*pDVar15,puVar16);
          }
          puVar19 = (undefined8 *)puVar16[1];
          if (puVar19 == (undefined8 *)0x0) {
            puVar19 = (undefined8 *)*puVar16;
            if (puVar19 == (undefined8 *)0x0) {
              uVar10 = FUN_141594c40(pDVar15 + 2);
              puVar19 = (undefined8 *)0x0;
              if (uVar10 != 0) {
                puVar19 = *(undefined8 **)
                           ((&DAT_1468a81f8)[uVar10 >> 0xe] + 8 +
                           (ulonglong)(uVar10 & 0x3fff) * 0x18);
                FLockFreeLinkPolicy::FreeLockFreeLink(uVar10);
              }
              puVar16[1] = puVar19;
              if (puVar19 == (undefined8 *)0x0) {
                puVar19 = (undefined8 *)FMemory::Malloc(0x2000,0);
                puVar16[1] = puVar19;
                lVar26 = 0x1f;
                do {
                  puVar2 = puVar19 + 0x20;
                  *puVar19 = puVar2;
                  lVar26 = lVar26 + -1;
                  puVar19 = puVar2;
                } while (lVar26 != 0);
                *puVar2 = 0;
                puVar19 = (undefined8 *)puVar16[1];
              }
              *(undefined4 *)(puVar16 + 2) = 0x20;
              iVar9 = 0x20;
            }
            else {
              puVar16[1] = puVar19;
              iVar9 = 0x20;
              *puVar16 = 0;
              *(undefined4 *)(puVar16 + 2) = 0x20;
            }
          }
          else {
            iVar9 = *(int *)(puVar16 + 2);
          }
          uVar10 = local_130;
          puVar16[1] = *puVar19;
          *(int *)(puVar16 + 2) = iVar9 + -1;
          puVar16 = (undefined8 *)FUN_1415914c0(&local_d8);
          local_130 = uVar10 & 0xfffffffd;
          local_c8 = *puVar16;
          *puVar16 = 0;
          *puVar19 = &PTR_FUN_143f3edd8;
          *(undefined4 *)(puVar19 + 1) = 0xff;
          *(int *)((longlong)puVar19 + 0xc) = iVar8 + 1;
          *puVar19 = &PTR_FUN_144edb400;
          *(undefined1 *)(puVar19 + 6) = 0;
          puVar19[7] = local_c8;
          if (local_d8 != 0) {
            LOCK();
            piVar1 = (int *)(local_d8 + 0x48);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              FGraphEvent::Recycle();
            }
          }
          if (((uVar10 & 1) != 0) && (local_130 = uVar10 & 0xfffffffc, local_d0 != 0)) {
            LOCK();
            piVar1 = (int *)(local_d0 + 0x48);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              FGraphEvent::Recycle(local_d0);
            }
          }
          lVar23 = local_110;
          puVar19[2] = local_f8;
          *(uint *)(puVar19 + 3) = uVar25 + 1;
          *(undefined1 *)(puVar19 + 5) = local_158;
          puVar19[4] = local_110;
          lVar26 = puVar19[7];
          piVar1 = (int *)(lVar26 + 0x48);
          if (lVar26 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_108 = lVar26;
          FUN_141ed7380(puVar19,local_a8,uVar4,1);
          iVar8 = DAT_146ab7210;
          lVar27 = (longlong)DAT_146ab7210;
          DAT_146ab7210 = DAT_146ab7210 + 1;
          if (DAT_146ab7214 < DAT_146ab7210) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (&DAT_146ab71e8,iVar8);
          }
          puVar24 = local_100;
          puVar18 = DAT_146ab7208;
          if (DAT_146ab7208 == (undefined *)0x0) {
            puVar18 = &DAT_146ab71e8;
          }
          *(longlong *)(puVar18 + lVar27 * 8) = lVar26;
          lVar27 = lVar26;
          if (lVar26 != 0) {
            LOCK();
            *(int *)(lVar26 + 0x48) = *(int *)(lVar26 + 0x48) + 1;
            UNLOCK();
            lVar27 = local_108;
          }
          puVar19 = (undefined8 *)(*local_100 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar19 + 5;
          if ((undefined8 *)local_100[1] < puVar16) {
            FMemStackBase::AllocateNewChunk(local_100,0x30);
            puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
            puVar16 = puVar19 + 5;
          }
          *puVar24 = (ulonglong)puVar16;
          *(int *)(local_128 + 0x14) = *(int *)(local_128 + 0x14) + 1;
          **(undefined8 **)(local_128 + 8) = puVar19;
          *(undefined8 **)(local_128 + 8) = puVar19 + 1;
          puVar19[1] = 0;
          *puVar19 = &PTR_ExecuteAndDestruct_144edb3e0;
          puVar19[2] = lVar27;
          if (lVar26 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            lVar27 = local_108;
          }
          *(uint *)(puVar19 + 4) = local_150;
          *(int *)((longlong)puVar19 + 0x24) = local_12c;
          local_12c = local_12c + 1;
          puVar19[3] = lVar23;
          if ((DAT_146ab6383 != '\0') && (DAT_146ab6e8c != 0)) {
            FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
          }
          local_154 = local_14c + 1;
          uVar14 = (ulonglong)local_154;
          uVar13 = local_120 + 1;
          local_110 = 0;
          if (lVar27 != 0) {
            LOCK();
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              FGraphEvent::Recycle(local_108);
            }
          }
          plVar12 = local_a8;
          iVar8 = (int)local_80;
          if (local_88 != (longlong *)0x0) {
            plVar12 = local_88;
          }
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            if (*plVar12 != 0) {
              LOCK();
              piVar1 = (int *)(*plVar12 + 0x48);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                FGraphEvent::Recycle();
              }
            }
            plVar12 = plVar12 + 1;
          }
          if (local_88 != (longlong *)0x0) {
            FMemory::Free();
          }
        } while ((longlong)uVar13 < local_138);
        return;
      }
    }
  }
LAB_141ece7dd:
  if (0 < lVar26) {
    local_140 = param_4 - (longlong)param_2;
    puVar24 = (ulonglong *)(param_1 + 0x30);
    lVar23 = param_1;
    do {
      iVar8 = DAT_146ab7210;
      uVar3 = *(undefined8 *)((longlong)param_2 + local_140);
      if (*param_2 != 0) {
        if (DAT_146ab6383 != '\0') {
          lVar26 = (longlong)DAT_146ab7210;
          DAT_146ab7210 = DAT_146ab7210 + 1;
          if (DAT_146ab7214 < DAT_146ab7210) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (&DAT_146ab71e8,iVar8);
          }
          lVar23 = *param_2;
          puVar18 = DAT_146ab7208;
          if (DAT_146ab7208 == (undefined *)0x0) {
            puVar18 = &DAT_146ab71e8;
          }
          *(longlong *)(puVar18 + lVar26 * 8) = lVar23;
          if (lVar23 != 0) {
            LOCK();
            *(int *)(lVar23 + 0x48) = *(int *)(lVar23 + 0x48) + 1;
            UNLOCK();
          }
        }
        iVar8 = DAT_146ab7240;
        lVar26 = (longlong)DAT_146ab7240;
        DAT_146ab7240 = DAT_146ab7240 + 1;
        if (DAT_146ab7244 < DAT_146ab7240) {
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (&DAT_146ab7218,iVar8);
        }
        lVar27 = *param_2;
        puVar18 = DAT_146ab7238;
        if (DAT_146ab7238 == (undefined *)0x0) {
          puVar18 = &DAT_146ab7218;
        }
        *(longlong *)(puVar18 + lVar26 * 8) = lVar27;
        lVar23 = local_128;
        lVar26 = local_138;
        if (lVar27 != 0) {
          LOCK();
          *(int *)(lVar27 + 0x48) = *(int *)(lVar27 + 0x48) + 1;
          UNLOCK();
        }
      }
      puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar19 + 4;
      if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
        FMemStackBase::AllocateNewChunk(puVar24,0x28);
        puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
        puVar16 = puVar19 + 4;
        lVar23 = local_128;
      }
      *puVar24 = (ulonglong)puVar16;
      *(int *)(lVar23 + 0x14) = *(int *)(lVar23 + 0x14) + 1;
      **(undefined8 **)(lVar23 + 8) = puVar19;
      *(undefined8 **)(lVar23 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &PTR_ExecuteAndDestruct_144edb3f0;
      lVar27 = *param_2;
      puVar19[2] = lVar27;
      if (lVar27 != 0) {
        LOCK();
        *(int *)(lVar27 + 0x48) = *(int *)(lVar27 + 0x48) + 1;
        UNLOCK();
      }
      param_2 = param_2 + 1;
      puVar19[3] = uVar3;
      lVar26 = lVar26 + -1;
      local_138 = lVar26;
    } while (lVar26 != 0);
  }
  if ((DAT_146ab6383 != '\0') && (DAT_146ab6e8c != 0)) {
    FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  return;
}



// FUNCTION 141ecea00 QueueRenderThreadCommandListSubmit body=239 status=ok
// SIG undefined QueueRenderThreadCommandListSubmit(void)

void FRHICommandListBase::QueueRenderThreadCommandListSubmit
               (longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (*param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x80);
    *(int *)(param_1 + 0x80) = iVar1 + 1;
    if (*(int *)(param_1 + 0x84) < iVar1 + 1) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_1 + 0x58,iVar1);
    }
    lVar2 = *param_2;
    lVar4 = *(longlong *)(param_1 + 0x78);
    if (*(longlong *)(param_1 + 0x78) == 0) {
      lVar4 = param_1 + 0x58;
    }
    *(longlong *)(lVar4 + (longlong)iVar1 * 8) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
      UNLOCK();
    }
  }
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar5;
  *(undefined8 **)(param_1 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_144edb420;
  lVar2 = *param_2;
  puVar5[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
    UNLOCK();
  }
  puVar5[3] = param_3;
  return;
}



// FUNCTION 141eceaf0 RHICompleteGraphEventOnFlip body=380 status=ok
// SIG undefined RHICompleteGraphEventOnFlip(void)

void RHICompleteGraphEventOnFlip(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  BOOL BVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong local_38 [2];
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
  }
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464ca0e8);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464ca0e8);
  }
  if (DAT_146ab6378 == 0) {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_141591a60(lVar3,local_38,0xff);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
      UNLOCK();
    }
    iVar2 = DAT_1464ca118;
    lVar6 = (longlong)DAT_1464ca118;
    DAT_1464ca118 = DAT_1464ca118 + 1;
    if (DAT_1464ca11c < DAT_1464ca118) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464ca110,iVar2);
    }
    puVar5 = (undefined8 *)(lVar6 * 0x10 + DAT_1464ca110);
    *puVar5 = param_1;
    puVar5[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
      UNLOCK();
    }
    (**(code **)(*DAT_1464ca180 + 0x10))();
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar3);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464ca0e8);
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar3);
    }
  }
  if (*param_2 != 0) {
    LOCK();
    piVar1 = (int *)(*param_2 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
      return;
    }
  }
  return;
}



// FUNCTION 141ecec70 FUN_141ecec70 body=183 status=ok
// SIG undefined FUN_141ecec70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ecec70(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 *param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_2);
    if (cVar1 != '\0') {
      lVar2 = param_2;
    }
  }
  local_48 = *param_6;
  uStack_40 = param_6[1];
  local_38 = *(undefined4 *)(param_6 + 2);
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_18 = param_5[4];
  (**(code **)(*DAT_146ab6358 + 0x720))(DAT_146ab6358,param_3,param_4,&local_28,&local_48);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141eced30 RHICreateRenderQuery_RenderThread body=124 status=ok
// SIG undefined RHICreateRenderQuery_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::RHICreateRenderQuery_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x338))(DAT_146ab6358,param_2,param_4);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecedb0 RHICreateShaderLibrary_RenderThread body=180 status=ok
// SIG undefined RHICreateShaderLibrary_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::RHICreateShaderLibrary_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
          longlong *param_5,longlong *param_6)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 200))(DAT_146ab6358,param_2,param_4,param_5,param_6);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  if (*param_5 != 0) {
    FMemory::Free();
  }
  if (*param_6 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141ecee70 RHICreateShaderResourceView_RenderThread body=124 status=ok
// SIG undefined RHICreateShaderResourceView_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::RHICreateShaderResourceView_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x1c0))(DAT_146ab6358,param_2,param_4);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141eceef0 RHICreateShaderResourceView_RenderThread body=130 status=ok
// SIG undefined RHICreateShaderResourceView_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::RHICreateShaderResourceView_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x1a8))(DAT_146ab6358,param_2,param_4,param_5);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecef80 RHICreateShaderResourceView_RenderThread body=149 status=ok
// SIG undefined RHICreateShaderResourceView_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::RHICreateShaderResourceView_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x1a0))(DAT_146ab6358,param_2,param_4,param_5,param_6,param_7);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf020 FUN_141ecf020 body=130 status=ok
// SIG undefined FUN_141ecf020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141ecf020(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 400))(DAT_146ab6358,param_2,param_4,param_5);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf0b0 RHICreateShaderResourceView_RenderThread body=130 status=ok
// SIG undefined RHICreateShaderResourceView_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::RHICreateShaderResourceView_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x198))(DAT_146ab6358,param_2,param_4,param_5);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf140 FUN_141ecf140 body=130 status=ok
// SIG undefined FUN_141ecf140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141ecf140(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x188))(DAT_146ab6358,param_2,param_4,param_5);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf1d0 FUN_141ecf1d0 body=191 status=ok
// SIG undefined FUN_141ecf1d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141ecf1d0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x240))
            (DAT_146ab6358,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf290 FUN_141ecf290 body=191 status=ok
// SIG undefined FUN_141ecf290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141ecf290(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x208))
            (DAT_146ab6358,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf350 FUN_141ecf350 body=191 status=ok
// SIG undefined FUN_141ecf350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141ecf350(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x248))
            (DAT_146ab6358,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf410 FUN_141ecf410 body=174 status=ok
// SIG undefined FUN_141ecf410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141ecf410(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x2e0))
            (DAT_146ab6358,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf4c0 FUN_141ecf4c0 body=163 status=ok
// SIG undefined FUN_141ecf4c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141ecf4c0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x2d8))
            (DAT_146ab6358,param_2,param_4,param_5,param_6,param_7,param_8);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf570 FUN_141ecf570 body=191 status=ok
// SIG undefined FUN_141ecf570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141ecf570(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x210))
            (DAT_146ab6358,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf630 FUN_141ecf630 body=124 status=ok
// SIG undefined FUN_141ecf630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141ecf630(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x200))(DAT_146ab6358,param_2,param_4);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf6b0 FUN_141ecf6b0 body=130 status=ok
// SIG undefined FUN_141ecf6b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141ecf6b0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x168))(DAT_146ab6358,param_2,param_4,param_5);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf740 RHICreateUnorderedAccessView_RenderThread body=140 status=ok
// SIG undefined RHICreateUnorderedAccessView_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::RHICreateUnorderedAccessView_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined1 param_5,undefined1 param_6)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x180))(DAT_146ab6358,param_2,param_4,param_5,param_6);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf7d0 RHICreateUnorderedAccessView_RenderThread body=129 status=ok
// SIG undefined RHICreateUnorderedAccessView_RenderThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FDynamicRHI::RHICreateUnorderedAccessView_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined4 param_5)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x178))(DAT_146ab6358,param_2,param_4,param_5);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf860 FUN_141ecf860 body=130 status=ok
// SIG undefined FUN_141ecf860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141ecf860(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x170))(DAT_146ab6358,param_2,param_4,param_5);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ecf8f0 RHIDetectAndWarnOfBadDrivers body=3604 status=ok
// SIG undefined RHIDetectAndWarnOfBadDrivers(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RHIDetectAndWarnOfBadDrivers(void)

{
  int *piVar1;
  longlong *plVar2;
  wchar_t _C;
  void *pvVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  wchar_t *pwVar11;
  wint_t *pwVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  wchar_t *pwVar17;
  undefined1 auStack_478 [32];
  undefined8 *local_458;
  wchar_t *local_448;
  uint local_440;
  int local_43c;
  int local_438;
  void *local_430;
  int local_428;
  undefined4 local_424;
  wchar_t *local_420;
  uint local_418;
  int local_414;
  undefined2 *local_410;
  ulonglong local_408;
  void *local_400;
  undefined8 local_3f8;
  void *local_3f0;
  undefined8 local_3e8;
  undefined1 local_3d8 [8];
  longlong local_3d0 [10];
  undefined1 local_380 [4];
  undefined1 local_37c [4];
  undefined1 local_378 [8];
  undefined1 local_370 [8];
  longlong *local_368;
  int local_358;
  longlong local_350 [2];
  longlong local_340 [2];
  longlong local_330 [2];
  longlong local_320 [2];
  longlong local_310 [2];
  longlong *local_300;
  undefined4 *local_2f8;
  longlong *local_2f0;
  undefined4 *local_2e8;
  longlong *local_2e0;
  undefined4 *local_2d8;
  longlong *local_2d0;
  undefined4 *local_2c8;
  int local_2b8 [2];
  longlong local_2b0 [2];
  longlong local_2a0 [2];
  longlong local_290 [2];
  longlong local_280 [2];
  longlong local_270 [3];
  longlong local_258;
  int local_250;
  longlong local_248;
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
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
  undefined1 local_160 [16];
  undefined1 local_150 [24];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [4];
  undefined1 local_d8 [8];
  longlong *local_d0;
  char local_c0;
  undefined4 local_b8 [4];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28;
  
  pvVar3 = DAT_146ab6ae8;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  if (DAT_146ab62c8 == '\0') {
    return;
  }
  if (*DAT_146ab63e8 == 0) {
    return;
  }
  if (DAT_146ab62d8 == 0) {
    return;
  }
  pwVar17 = (wchar_t *)0x0;
  local_430 = (void *)0x0;
  local_414 = 0;
  local_424 = 0;
  local_420 = (wchar_t *)0x0;
  local_418 = 0;
  local_410 = (undefined2 *)0x0;
  local_408 = 0;
  local_400 = (void *)0x0;
  local_3f8 = 0;
  local_3f0 = (void *)0x0;
  local_3e8 = 0;
  local_438 = DAT_146ab62d8;
  iVar9 = (int)_DAT_146ab6af0;
  pwVar11 = pwVar17;
  local_428 = iVar9;
  if (iVar9 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_430,_DAT_146ab6af0 & 0xffffffff);
    _guard_xfg_dispatch_icall_nop(local_430,pvVar3,(longlong)iVar9 * 2);
    pwVar11 = (wchar_t *)(local_408 >> 0x20);
  }
  iVar9 = (int)pwVar11;
  if (local_420 != L"Unknown") {
    local_418 = 0;
    pwVar11 = pwVar17;
    if (local_414 != 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_420,8);
      pwVar11 = (wchar_t *)(ulonglong)local_418;
    }
    local_418 = (int)pwVar11 + 8;
    if (local_414 < (int)local_418) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_420);
    }
    builtin_wcsncpy(local_420,L"Unknown",8);
    iVar9 = (int)(local_408 >> 0x20);
  }
  pvVar3 = DAT_146ab6af8;
  iVar10 = (int)DAT_146ab6b00;
  local_408 = CONCAT44(local_408._4_4_,iVar10);
  if ((iVar10 == 0) && (iVar9 == 0)) {
    local_408 = DAT_146ab6b00 & 0xffffffff;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_410,DAT_146ab6b00 & 0xffffffff);
    _guard_xfg_dispatch_icall_nop(local_410,pvVar3,(longlong)iVar10 * 2);
  }
  pvVar3 = DAT_146ab6b08;
  iVar9 = (int)DAT_146ab6b10;
  local_3f8 = CONCAT44(local_3f8._4_4_,iVar9);
  if ((iVar9 == 0) && (local_3f8._4_4_ == 0)) {
    local_3f8 = DAT_146ab6b10 & 0xffffffff;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_400,DAT_146ab6b10 & 0xffffffff,local_3f8._4_4_);
    _guard_xfg_dispatch_icall_nop(local_400,pvVar3,(longlong)iVar9 * 2);
  }
  pvVar3 = DAT_146ab6b18;
  iVar9 = (int)_DAT_146ab6b20;
  local_3e8 = CONCAT44(local_3e8._4_4_,iVar9);
  if ((iVar9 == 0) && (local_3e8._4_4_ == 0)) {
    local_3e8 = _DAT_146ab6b20 & 0xffffffff;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_3f0,_DAT_146ab6b20 & 0xffffffff,local_3e8._4_4_);
    _guard_xfg_dispatch_icall_nop(local_3f0,pvVar3,(longlong)iVar9 * 2);
  }
  local_358 = local_438;
  FString::FString(local_350,&local_430);
  FString::FString(local_340,&local_420);
  FString::FString(local_330,&local_410);
  FString::FString(local_320,&local_400);
  FString::FString(local_310,&local_3f0);
  local_2b8[0] = local_358;
  FString::FString(local_2b0,local_350);
  FString::FString(local_2a0,local_340);
  FString::FString(local_290,local_330);
  FString::FString(local_280,local_320);
  FString::FString(local_270,local_310);
  if (local_310[0] != 0) {
    FMemory::Free();
  }
  if (local_320[0] != 0) {
    FMemory::Free();
  }
  if (local_330[0] != 0) {
    FMemory::Free();
  }
  if (local_340[0] != 0) {
    FMemory::Free();
  }
  if (local_350[0] != 0) {
    FMemory::Free();
  }
  if ((1 < local_428) && (local_438 != 0)) {
    pwVar11 = L"Unknown";
    puVar16 = &DAT_143f3eda8;
    puVar15 = &DAT_143f3eda8;
    if ((int)local_408 != 0) {
      puVar15 = local_410;
    }
    do {
      _C = *(wchar_t *)((longlong)pwVar11 + (longlong)(puVar15 + -0xa20b1bcc));
      if ((_C == L'\0') && (*pwVar11 == L'\0')) break;
      if (_C != *pwVar11) {
        wVar5 = towlower(_C);
        wVar6 = towlower(*pwVar11);
        if (wVar5 != wVar6) goto LAB_141ecfc55;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
  goto LAB_141ed0635;
LAB_141ecfcac:
  FGPUHardware::FindDriverBlacklistEntry(local_2b8,&local_258);
  if (1 < local_250) {
    cVar4 = FGPUHardware::IsLatestBlacklisted(local_2b8);
    pwVar11 = local_420;
    lVar13 = (longlong)(int)local_418;
    local_448 = (wchar_t *)0x0;
    local_440 = local_418;
    if (local_418 == 0) {
      local_43c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_448,local_418,0);
      _guard_xfg_dispatch_icall_nop(local_448,pwVar11,lVar13 * 2);
    }
    if (local_438 == 0x10de) {
      if (local_448 != L"NVIDIA") {
        local_440 = 0;
        pwVar11 = pwVar17;
        if (local_43c != 7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_448,7);
          pwVar11 = (wchar_t *)(ulonglong)local_440;
        }
        local_440 = (int)pwVar11 + 7;
        if (local_43c < (int)local_440) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_448);
        }
        builtin_wcsncpy(local_448,L"NVIDIA",7);
      }
    }
    else if (local_438 == 0x1002) {
      if (local_448 != L"AMD") {
        local_440 = 0;
        pwVar11 = pwVar17;
        if (local_43c != 4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_448,4);
          pwVar11 = (wchar_t *)(ulonglong)local_440;
        }
        local_440 = (int)pwVar11 + 4;
        if (local_43c < (int)local_440) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_448);
        }
        builtin_wcsncpy(local_448,L"AMD",4);
      }
    }
    else if ((local_438 == 0x8086) && (local_448 != L"Intel")) {
      local_440 = 0;
      pwVar11 = pwVar17;
      if (local_43c != 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_448,6);
        pwVar11 = (wchar_t *)(ulonglong)local_440;
      }
      local_440 = (int)pwVar11 + 6;
      if (local_43c < (int)local_440) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_448);
      }
      builtin_wcsncpy(local_448,L"Intel",6);
    }
    local_138 = 0;
    local_108 = 0xffffffff;
    local_130 = 0;
    local_118 = 0;
    local_110 = 0;
    local_104 = 0;
    local_f8 = 0;
    local_f0 = 0;
    uVar7 = FText::FromString(local_178,&local_430);
    local_e8[0] = 4;
    FText::FText(local_d8,uVar7);
    local_c0 = '\x01';
    local_3d0[0] = 0;
    local_3d0[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_3d0,0);
    FGenericPlatformString::Memcpy(local_3d0[0],L"AdapterName",0x18);
    local_300 = local_3d0;
    local_2f8 = local_e8;
    FUN_1407484b0(&local_138,local_3d8,&local_300,0);
    if (local_3d0[0] != 0) {
      FMemory::Free();
    }
    if ((local_c0 != '\0') && (local_c0 = '\0', local_d0 != (longlong *)0x0)) {
      LOCK();
      plVar14 = local_d0 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_170 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)local_170 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
    uVar7 = FText::FromString(local_238,&local_448);
    local_b8[0] = 4;
    FText::FText(local_a8,uVar7);
    local_90 = '\x01';
    local_3d0[2] = 0;
    local_3d0[3] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_3d0 + 2,0);
    FGenericPlatformString::Memcpy(local_3d0[2],L"Vendor",0xe);
    local_2f0 = local_3d0 + 2;
    local_2e8 = local_b8;
    FUN_1407484b0(&local_138,local_380,&local_2f0,0);
    if (local_3d0[2] != 0) {
      FMemory::Free();
    }
    if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar14 = local_a0 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_230 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar1 = (int *)((longlong)local_230 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_230 + 8))(local_230,1);
        }
      }
    }
    if (local_2b8[0] == 0x10de) {
      pwVar11 = L"GPU_NVIDIA";
    }
    else if (local_2b8[0] == 0x1002) {
      pwVar11 = L"GPU_AMD";
    }
    else {
      pwVar11 = L"GPU_0x8086";
      if (local_2b8[0] != 0x8086) {
        pwVar11 = pwVar17;
      }
    }
    local_3d0[8] = 0;
    local_3d0[9] = 0;
    if (pwVar11 != (wchar_t *)0x0) {
      local_458 = &DAT_1468e23f0;
      FConfigCacheIni::GetString(DAT_1468b6148,pwVar11,L"SuggestedDriverVersion",local_3d0 + 8);
    }
    uVar7 = FText::FromString(local_220,local_3d0 + 8);
    local_88[0] = 4;
    FText::FText(local_78,uVar7);
    local_60 = '\x01';
    local_3d0[4] = 0;
    local_3d0[5] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_3d0 + 4,0);
    FGenericPlatformString::Memcpy(local_3d0[4],L"RecommendedVer",0x1e);
    local_2e0 = local_3d0 + 4;
    local_2d8 = local_88;
    FUN_1407484b0(&local_138,local_37c,&local_2e0,0);
    if (local_3d0[4] != 0) {
      FMemory::Free();
    }
    if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
      LOCK();
      plVar14 = local_70 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_218 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_218)(local_218);
        LOCK();
        piVar1 = (int *)((longlong)local_218 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_218 + 8))(local_218,1);
        }
      }
    }
    if (local_3d0[8] != 0) {
      FMemory::Free();
    }
    uVar7 = FText::FromString(local_208,&local_400);
    local_58[0] = 4;
    FText::FText(local_48,uVar7);
    local_30 = '\x01';
    local_3d0[6] = 0;
    local_3d0[7] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_3d0 + 6,0);
    FGenericPlatformString::Memcpy(local_3d0[6],L"InstalledVer",0x1a);
    local_2d0 = local_3d0 + 6;
    local_2c8 = local_58;
    FUN_1407484b0(&local_138,local_378,&local_2d0,0);
    if (local_3d0[6] != 0) {
      FMemory::Free();
    }
    if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
      LOCK();
      plVar14 = local_40 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_200 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar1 = (int *)((longlong)local_200 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_200 + 8))(local_200,1);
        }
      }
    }
    FText::FText(local_370);
    if (cVar4 == '\0') {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_1a8,
                         L"The installed version of the {Vendor} graphics driver has known issues.\nPlease update to the latest driver version.\n\n{AdapterName}\nInstalled: {InstalledVer}\nRecommended: {RecommendedVer}"
                         ,L"MessageDialog",L"VideoCardDriverIssueReport");
      uVar7 = FTextFormat::FTextFormat(local_160,uVar7);
      uVar7 = FText::Format(local_1c0,uVar7,&local_138);
      FText::operator=(local_370,uVar7);
      plVar14 = local_1a0;
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_1b8 + 1;
        lVar13 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_1b8)(local_1b8);
          LOCK();
          piVar1 = (int *)((longlong)local_1b8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar14 = local_1a0;
          if (iVar9 == 1) {
            (**(code **)(*local_1b8 + 8))(local_1b8,1);
            plVar14 = local_1a0;
          }
        }
      }
    }
    else {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_1d8,
                         L"The latest version of the {Vendor} graphics driver has known issues.\nPlease install the recommended driver version.\n\n{AdapterName}\nInstalled: {InstalledVer}\nRecommended: {RecommendedVer}"
                         ,L"MessageDialog",L"LatestVideoCardDriverIssueReport");
      uVar7 = FTextFormat::FTextFormat(local_150,uVar7);
      uVar7 = FText::Format(local_1f0,uVar7,&local_138);
      FText::operator=(local_370,uVar7);
      plVar14 = local_1d0;
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_1e8 + 1;
        lVar13 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar1 = (int *)((longlong)local_1e8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar14 = local_1d0;
          if (iVar9 == 1) {
            (**(code **)(*local_1e8 + 8))(local_1e8,1);
            plVar14 = local_1d0;
          }
        }
      }
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar14 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_190,L"WARNING: Known issues with graphics driver",L"MessageDialog",
                       L"TitleVideoCardDriverIssue");
    puVar8 = (undefined8 *)FText::ToString(uVar7);
    if (*(int *)(puVar8 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar8;
    }
    puVar8 = (undefined8 *)FText::ToString(local_370);
    if (*(int *)(puVar8 + 1) != 0) {
      puVar16 = (undefined2 *)*puVar8;
    }
    FUN_1416a4860(0,puVar16,puVar15);
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_188 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar1 = (int *)((longlong)local_188 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_188 + 8))(local_188,1);
        }
      }
    }
    if (local_368 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_368 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_368)(local_368);
        LOCK();
        piVar1 = (int *)((longlong)local_368 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_368 + 8))(local_368,1);
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
    if (local_448 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  if (local_248 != 0) {
    FMemory::Free();
  }
  if (local_258 != 0) {
    FMemory::Free();
  }
  goto LAB_141ed0635;
LAB_141ecfc55:
  if (wVar5 != wVar6) {
    pwVar12 = &DAT_143f3eda8;
    puVar15 = &DAT_143f3eda8;
    if ((int)local_408 != 0) {
      puVar15 = local_410;
    }
    do {
      wVar5 = *(wint_t *)((longlong)pwVar12 + (longlong)(puVar15 + -0xa1f9f6d4));
      if ((wVar5 == 0) && (*pwVar12 == 0)) break;
      if (wVar5 != *pwVar12) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar12);
        if (wVar5 != wVar6) goto LAB_141ecfcac;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
LAB_141ed0635:
  if (local_270[0] != 0) {
    FMemory::Free();
  }
  if (local_280[0] != 0) {
    FMemory::Free();
  }
  if (local_290[0] != 0) {
    FMemory::Free();
  }
  if (local_2a0[0] != 0) {
    FMemory::Free();
  }
  if (local_2b0[0] != 0) {
    FMemory::Free();
  }
  if (local_3f0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_400 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_410 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_420 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_430 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141ed0710 RHIExit body=217 status=ok
// SIG undefined RHIExit(void)

void RHIExit(void)

{
  longlong lVar1;
  uint local_res8 [8];
  
  if ((DAT_146ab62f7 == '\0') && (DAT_146ab6358 != (longlong *)0x0)) {
    lVar1 = 2;
    do {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_146ab6710);
      local_res8[0] = 2;
      TDiscardableKeyValueCache<FRHIComputeShader_*,FComputePipelineState_*>::
      Discard<<lambda_9bcd655b6dec050e72f51feb99300d2c>_>(&DAT_146ab6710,2,local_res8);
      if ((local_res8[0] >> 1 & 1) == 0) {
        if ((local_res8[0] & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)&DAT_146ab6710);
        }
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146ab6710);
      }
      TSharedPipelineStateCache<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>::DiscardAndSwap
                (&DAT_1464c9f80);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    FPipelineFileCache::Shutdown();
    (**(code **)(*DAT_146ab6358 + 0x18))();
    if (DAT_146ab6358 != (longlong *)0x0) {
      (**(code **)*DAT_146ab6358)(DAT_146ab6358,1);
    }
    DAT_146ab6358 = (longlong *)0x0;
  }
  return;
}



// FUNCTION 141ed07f0 FUN_141ed07f0 body=328 status=ok
// SIG undefined FUN_141ed07f0(void)

undefined8 FUN_141ed07f0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar3 < DAT_146ac3a88) {
    _Init_thread_header(&DAT_146ac3a88);
    if (DAT_146ac3a88 == -1) {
      uVar2 = FCommandLine::Get();
      cVar1 = FParse::Param(uVar2,L"FeatureLevelES2");
      DAT_146ac3a84 = cVar1 != '\0';
      _Init_thread_footer(&DAT_146ac3a88);
    }
  }
  if (DAT_146ac3a90 <= *piVar3) goto LAB_141ed0830;
  _Init_thread_header(&DAT_146ac3a90);
  if (DAT_146ac3a90 != -1) goto LAB_141ed0830;
  uVar2 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar2,L"FeatureLevelES31");
  if (cVar1 == '\0') {
    uVar2 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar2,L"FeatureLevelES3_1");
    DAT_146ac3a8c = '\0';
    if (cVar1 != '\0') goto LAB_141ed091f;
  }
  else {
LAB_141ed091f:
    DAT_146ac3a8c = '\x01';
  }
  _Init_thread_footer(&DAT_146ac3a90);
LAB_141ed0830:
  if (DAT_146ac3a84 != '\0') {
    *param_1 = 0;
    return 1;
  }
  if (DAT_146ac3a8c != '\0') {
    *param_1 = 1;
    return 1;
  }
  if (DAT_1464c9c9c != 4) {
    *param_1 = DAT_1464c9c9c;
    return 1;
  }
  return 0;
}



// FUNCTION 141ed0940 RHIGetShaderLanguageVersion body=231 status=ok
// SIG undefined RHIGetShaderLanguageVersion(void)

int RHIGetShaderLanguageVersion(uint param_1)

{
  char cVar1;
  
  if ((0x1b < param_1) || ((0x8c51800U >> (param_1 & 0x1f) & 1) == 0)) {
    return 0;
  }
  if ((param_1 < 0x1c) && ((0x8dfc0ebU >> (param_1 & 0x1f) & 1) != 0)) {
    if (DAT_1464ca18c < 0) {
      DAT_1464ca18c = 2;
      cVar1 = FConfigCacheIni::GetInt
                        (DAT_1468b6148,L"/Script/MacTargetPlatform.MacTargetSettings",
                         L"MaxShaderLanguageVersion",&DAT_1464ca18c,&DAT_1468e2360);
      if (cVar1 == '\0') {
        DAT_1464ca18c = 2;
      }
    }
    return DAT_1464ca18c;
  }
  if (DAT_1464ca190 < 0) {
    DAT_1464ca190 = 0;
    cVar1 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"/Script/IOSRuntimeSettings.IOSRuntimeSettings",
                       L"MaxShaderLanguageVersion",&DAT_1464ca190,&DAT_1468e2360);
    if (cVar1 == '\0') {
      DAT_1464ca190 = 0;
    }
  }
  return DAT_1464ca190;
}



// FUNCTION 141ed0a30 FUN_141ed0a30 body=113 status=ok
// SIG undefined FUN_141ed0a30(void)

int FUN_141ed0a30(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  int iVar6;
  
  lVar2 = DAT_146ac3938;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != DAT_1468c21c0) {
      lVar5 = 4;
      goto LAB_141ed0a77;
    }
  }
  lVar5 = 0;
LAB_141ed0a77:
  iVar1 = *(int *)(lVar5 + lVar2);
  if (iVar1 < 1) {
    return 1;
  }
  iVar6 = 4;
  if (iVar1 < 4) {
    iVar6 = iVar1;
  }
  return iVar6;
}



// FUNCTION 141ed0ab0 FUN_141ed0ab0 body=1059 status=ok
// SIG undefined FUN_141ed0ab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ed0ab0(char param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int *piVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  wchar_t *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  if (DAT_146ab6358 == (longlong *)0x0) {
    if ((DAT_146ab6e68 == '\0') && ((DAT_1464c9c18 != '\0' || (DAT_146ab6383 == '\0')))) {
      DAT_146ab6e69 = FUN_141636a40();
    }
    else {
      DAT_146ab6e69 = 0;
    }
    piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if ((*piVar9 < DAT_146ac39a4) && (_Init_thread_header(&DAT_146ac39a4), DAT_146ac39a4 == -1)) {
      uVar5 = FCommandLine::Get();
      DAT_146ac39a0 = FParse::Param(uVar5,L"nullrhi");
      _Init_thread_footer(&DAT_146ac39a4);
    }
    if ((*piVar9 < DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
      uVar5 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar5,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
    if ((((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) &&
       (DAT_146ac39a0 == '\0')) {
      DAT_146ab6358 = (longlong *)FUN_141ecc670();
      if (DAT_146ab6358 != (longlong *)0x0) {
        (**(code **)(*DAT_146ab6358 + 8))(DAT_146ab6358);
        DAT_146ab6e98 = (**(code **)(*DAT_146ab6358 + 0x468))();
        _DAT_146ab7058 = (**(code **)(*DAT_146ab6358 + 0x470))();
        if ((param_1 != '\0') && ((int)DAT_1464c9c14 < 3)) {
          local_78 = (wchar_t *)0x0;
          local_70 = 0;
          if (DAT_1464c9c14 < 4) {
            FName::ToString(&DAT_146ab6b38 + (longlong)(int)DAT_1464c9c14 * 8,&local_78);
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78,0x14);
            iVar4 = (int)local_70 + 0x14;
            local_70 = CONCAT44(local_70._4_4_,iVar4);
            if (local_70._4_4_ < iVar4) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78);
            }
            builtin_wcsncpy(local_78,L"InvalidFeatureLevel",0x14);
          }
          uVar5 = FUN_141eca160(local_res10,(&DAT_1464c9c48)[(int)DAT_1464c9c14]);
          FName::ToString(uVar5,&local_68);
          puVar11 = &DAT_143f3eda8;
          if (local_60 != 0) {
            puVar11 = local_68;
          }
          pwVar10 = L"";
          if ((int)local_70 != 0) {
            pwVar10 = local_78;
          }
          FString::PrintfImpl(local_58,
                              L"A Feature Level 5 video card is required to run the editor.\nAvailableFeatureLevel = %s, ShaderPlatform = %s"
                              ,pwVar10,puVar11);
          uVar5 = FText::FromString(local_48,local_58);
          FUN_1416786b0(0,uVar5,0);
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_40 + 1;
            lVar2 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar9 = (int *)((longlong)local_40 + 0xc);
              iVar4 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_40 + 8))(local_40,1);
              }
            }
          }
          FUN_1416a8180(1);
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          if (local_68 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_78 != (wchar_t *)0x0) {
            FMemory::Free();
          }
        }
      }
    }
    else {
      puVar6 = (undefined8 *)FName::FName(local_res18,L"NullDrv",1);
      uVar5 = *puVar6;
      uVar7 = FUN_14168dc80();
      plVar8 = (longlong *)FUN_141690010(uVar7,uVar5);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar8 + 0x40))(plVar8), cVar3 == '\0')) {
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_30,L"NullDrv failure?",L"DynamicRHI",L"NullDrvFailure");
        FUN_1416786b0(0,uVar5,0);
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_28 + 1;
          lVar2 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar9 = (int *)((longlong)local_28 + 0xc);
            iVar4 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_28 + 8))(local_28,1);
            }
          }
        }
        FUN_1416a8180(1);
      }
      DAT_146ab6358 = (longlong *)(**(code **)(*plVar8 + 0x48))(plVar8,4);
      (**(code **)(*DAT_146ab6358 + 8))(DAT_146ab6358);
      DAT_146ab6e98 = (**(code **)(*DAT_146ab6358 + 0x468))();
      _DAT_146ab7058 = (**(code **)(*DAT_146ab6358 + 0x470))();
      DAT_146ab62f7 = 1;
      DAT_146ab62fe = 0;
    }
  }
  RHIDetectAndWarnOfBadDrivers();
  return;
}



// FUNCTION 141ed0ee0 RHILockTextureCubeFace_RenderThread body=165 status=ok
// SIG undefined RHILockTextureCubeFace_RenderThread(void)

void FDynamicRHI::RHILockTextureCubeFace_RenderThread
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
               undefined1 param_9)

{
  if (*(int *)(param_2 + 0x14) != 0) {
    FUN_141ec3e80(&DAT_146ab6e68);
  }
  FUN_141ed93a0(param_2);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(param_2);
  }
  FRHICommandListBase::WaitForTasks(param_2,1);
  (**(code **)(*DAT_146ab6358 + 0x2e8))
            (DAT_146ab6358,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



// FUNCTION 141ed0f90 RHIMapStagingSurface_RenderThread body=130 status=ok
// SIG undefined RHIMapStagingSurface_RenderThread(void)

void FDynamicRHI::RHIMapStagingSurface_RenderThread
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  if (*(int *)(param_2 + 0x14) != 0) {
    FUN_141ec3e80(&DAT_146ab6e68);
  }
  FUN_141ed93a0(param_2);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(param_2);
  }
  FRHICommandListBase::WaitForTasks(param_2,1);
                    /* WARNING: Could not recover jumptable at 0x000141ed100b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 0x318))(DAT_146ab6358,param_3,param_4,param_5);
  return;
}



// FUNCTION 141ed1020 FUN_141ed1020 body=8 status=ok
// SIG undefined FUN_141ed1020(void)

undefined1 FUN_141ed1020(void)

{
  return DAT_1464c9c13;
}



// FUNCTION 141ed1030 FUN_141ed1030 body=120 status=ok
// SIG undefined FUN_141ed1030(void)

void FUN_141ed1030(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  
  plVar4 = DAT_146ab6358;
  plVar1 = DAT_146ab6358 + 4;
  if (plVar1 != param_1) {
    piVar2 = (int *)((longlong)DAT_146ab6358 + 0x2c);
    _Src = (void *)*param_1;
    iVar3 = (int)param_1[1];
    *(int *)(DAT_146ab6358 + 5) = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *(undefined4 *)((longlong)plVar4 + 0x2c) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(plVar1,iVar3);
      _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar3 << 2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141ed10a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 0x10))();
  return;
}



// FUNCTION 141ed10b0 RHIPrivateBeginFrame body=125 status=ok
// SIG undefined RHIPrivateBeginFrame(void)

void RHIPrivateBeginFrame(void)

{
  undefined8 uVar1;
  
  DAT_146ab6314 = DAT_146ab631c;
  DAT_146ab6318 = DAT_146ab6320;
  uVar1 = FUN_14168db40();
  FCsvProfiler::RecordCustomStat(uVar1,"DrawCalls",DAT_146ab67f8,DAT_146ab6314,0);
  uVar1 = FUN_14168db40();
  FCsvProfiler::RecordCustomStat(uVar1,"PrimitivesDrawn",DAT_146ab67f8,DAT_146ab6318,0);
  DAT_146ab6320 = 0;
  DAT_146ab631c = 0;
  return;
}



// FUNCTION 141ed1130 RHIReadSurfaceFloatData_RenderThread body=167 status=ok
// SIG undefined RHIReadSurfaceFloatData_RenderThread(void)

void FDynamicRHI::RHIReadSurfaceFloatData_RenderThread
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
               undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    FUN_141ec3e80(&DAT_146ab6e68);
  }
  FUN_141ed93a0(param_2);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(param_2);
  }
  FRHICommandListBase::WaitForTasks(param_2,1);
  local_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  (**(code **)(*DAT_146ab6358 + 0x328))
            (DAT_146ab6358,param_3,&local_18,param_5,param_6,param_7,param_8);
  return;
}



// FUNCTION 141ed11e0 FUN_141ed11e0 body=348 status=ok
// SIG undefined FUN_141ed11e0(void)

void FUN_141ed11e0(void)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_18 [2];
  
  if (DAT_146ab6380 != '\0') {
    DAT_146ab6380 = '\0';
    if (DAT_146ab6378 != (longlong *)0x0) {
      (**(code **)(*DAT_146ab6378 + 0x18))(DAT_146ab6378,1);
      if (DAT_146ab6378 != (longlong *)0x0) {
        (**(code **)(*DAT_146ab6378 + 0x28))(DAT_146ab6378,1);
      }
      DAT_146ab6378 = (longlong *)0x0;
    }
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464ca0e8);
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464ca0e8);
    }
    uVar8 = (ulonglong)(int)DAT_1464ca118;
    lVar6 = uVar8 * 0x10 + DAT_1464ca110;
    lVar4 = DAT_1464ca110;
    if (DAT_1464ca110 != lVar6) {
      do {
        local_18[0] = 0;
        local_18[1] = 0;
        FUN_141591a60(*(undefined8 *)(lVar4 + 8),local_18,0xff);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != lVar6);
      uVar8 = (ulonglong)DAT_1464ca118;
    }
    if ((int)uVar8 != 0) {
      plVar5 = (longlong *)(DAT_1464ca110 + 8);
      do {
        if (*plVar5 != 0) {
          LOCK();
          piVar1 = (int *)(*plVar5 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar5 = plVar5 + 2;
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 != 0);
    }
    DAT_1464ca118 = 0;
    if (DAT_1464ca11c != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464ca110,0);
    }
    FUN_141ed7e10();
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464ca0e8);
  }
  FUN_141ed7e10();
  return;
}



// FUNCTION 141ed1340 FUN_141ed1340 body=83 status=ok
// SIG undefined FUN_141ed1340(void)

bool FUN_141ed1340(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1419ef5f0();
  if ((2 < iVar1) && ((0x1b < param_1 || ((0x8c51800U >> (param_1 & 0x1f) & 1) == 0)))) {
    return true;
  }
  if ((param_1 < 0x1c) && ((0x8051000U >> (param_1 & 0x1f) & 1) != 0)) {
    uVar2 = RHIGetShaderLanguageVersion(param_1);
    return 1 < uVar2;
  }
  return false;
}



// FUNCTION 141ed13a0 FUN_141ed13a0 body=252 status=ok
// SIG undefined FUN_141ed13a0(void)

bool FUN_141ed13a0(uint param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  longlong lVar6;
  
  if (DAT_146ac3a80 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              )) goto LAB_141ed13cb;
  _Init_thread_header(&DAT_146ac3a80);
  lVar1 = DAT_146ab6848;
  if (DAT_146ac3a80 != -1) goto LAB_141ed13cb;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    if (DVar5 == DAT_1468c21c0) goto LAB_141ed1479;
    lVar6 = 4;
  }
  else {
LAB_141ed1479:
    lVar6 = 0;
  }
  DAT_146ac3a7c = *(int *)(lVar6 + lVar1) != 0;
  _Init_thread_footer(&DAT_146ac3a80);
LAB_141ed13cb:
  if (DAT_146ac3a7c != '\0') {
    iVar3 = FUN_1419ef5f0(param_1);
    if ((iVar3 < 3) || ((param_1 < 0x1c && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)))) {
      if (param_1 == 0x10) {
        uVar4 = RHIGetShaderLanguageVersion(0x10);
        return 1 < uVar4;
      }
    }
    else if ((param_1 < 0xe) && ((0x2051U >> (param_1 & 0x1f) & 1) != 0)) {
      return true;
    }
  }
  return false;
}



// FUNCTION 141ed14a0 RHIThreadFence body=267 status=ok
// SIG undefined RHIThreadFence(void)

longlong * FRHICommandListImmediate::RHIThreadFence(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (DAT_146ab6383 == '\0') {
    *param_2 = 0;
  }
  else {
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 3;
    if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 3;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar5;
    plVar1 = puVar6 + 2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar6;
    *(undefined8 **)(param_1 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_144edb3c0;
    FUN_1415914c0(plVar1);
    lVar4 = DAT_146ab7260;
    if (param_3 != '\0') {
      DAT_146ab7260 = *plVar1;
      if (DAT_146ab7260 != 0) {
        LOCK();
        *(int *)(DAT_146ab7260 + 0x48) = *(int *)(DAT_146ab7260 + 0x48) + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        LOCK();
        piVar2 = (int *)(lVar4 + 0x48);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
    lVar4 = *plVar1;
    *param_2 = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
      UNLOCK();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 141ed15b0 RHIUnlockTextureCubeFace_RenderThread body=138 status=ok
// SIG undefined RHIUnlockTextureCubeFace_RenderThread(void)

void FDynamicRHI::RHIUnlockTextureCubeFace_RenderThread
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  if (*(int *)(param_2 + 0x14) != 0) {
    FUN_141ec3e80(&DAT_146ab6e68);
  }
  FUN_141ed93a0(param_2);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(param_2);
  }
  FRHICommandListBase::WaitForTasks(param_2,1);
  (**(code **)(*DAT_146ab6358 + 0x2f0))(DAT_146ab6358,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 141ed1640 RHIUnmapStagingSurface_RenderThread body=99 status=ok
// SIG undefined RHIUnmapStagingSurface_RenderThread(void)

void FDynamicRHI::RHIUnmapStagingSurface_RenderThread
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  if (*(int *)(param_2 + 0x14) != 0) {
    FUN_141ec3e80(&DAT_146ab6e68);
  }
  FUN_141ed93a0(param_2);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(param_2);
  }
  FRHICommandListBase::WaitForTasks(param_2,1);
                    /* WARNING: Could not recover jumptable at 0x000141ed169c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 800))(DAT_146ab6358,param_3);
  return;
}



// FUNCTION 141ed16b0 RegisterPSOStats body=678 status=ok
// SIG undefined RegisterPSOStats(void)

undefined8 * FPipelineFileCache::RegisterPSOStats(int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  int *local_28;
  undefined8 **local_20;
  
  puVar7 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)0x0;
  cVar3 = FUN_141ec9f60();
  if ((cVar3 != '\0') && (cVar3 = FUN_141ecac10(), cVar3 != '\0')) {
    bVar2 = false;
    AcquireSRWLockShared((PSRWLOCK)&DAT_146ab66c8);
    if (DAT_146ab6360 != 0) {
      if (DAT_1464c9e78 != DAT_1464c9ea4) {
        puVar4 = DAT_1464c9eb0;
        if (DAT_1464c9eb0 == (undefined *)0x0) {
          puVar4 = &DAT_1464c9ea8;
        }
        iVar1 = *(int *)(puVar4 + ((longlong)DAT_1464c9eb8 - 1U & (longlong)param_1) * 4);
        while (iVar1 != -1) {
          lVar6 = (longlong)iVar1;
          if (*(int *)(DAT_1464c9e70 + lVar6 * 0x10) == param_1) {
            puVar5 = (undefined8 *)(DAT_1464c9e70 + lVar6 * 0x10);
            if (iVar1 != -1) goto LAB_141ed1766;
            break;
          }
          iVar1 = *(int *)(DAT_1464c9e70 + lVar6 * 0x10 + 8);
        }
      }
      puVar5 = puVar7;
LAB_141ed1766:
      local_res10[0] = *(int *)((longlong)puVar5 + 4);
      local_res20 = puVar7;
      if (DAT_1464c9ec8 != DAT_1464c9ef4) {
        puVar4 = DAT_1464c9f00;
        if (DAT_1464c9f00 == (undefined *)0x0) {
          puVar4 = &DAT_1464c9ef8;
        }
        iVar1 = *(int *)(puVar4 + ((longlong)DAT_1464c9f08 - 1U & (longlong)local_res10[0]) * 4);
        while (iVar1 != -1) {
          lVar6 = (longlong)iVar1;
          if (*(int *)(DAT_1464c9ec0 + lVar6 * 0x18) == local_res10[0]) {
            if ((iVar1 != -1) && (lVar6 = DAT_1464c9ec0 + lVar6 * 0x18, lVar6 != 0)) {
              local_res20 = *(undefined8 **)(lVar6 + 8);
            }
            break;
          }
          iVar1 = *(int *)(DAT_1464c9ec0 + 0x10 + lVar6 * 0x18);
        }
      }
      if (local_res20 == (undefined8 *)0x0) {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_146ab66c8);
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
        bVar2 = true;
        local_res20 = puVar7;
        if (DAT_1464c9ec8 != DAT_1464c9ef4) {
          puVar4 = DAT_1464c9f00;
          if (DAT_1464c9f00 == (undefined *)0x0) {
            puVar4 = &DAT_1464c9ef8;
          }
          iVar1 = *(int *)(puVar4 + ((longlong)DAT_1464c9f08 - 1U & (longlong)local_res10[0]) * 4);
          while (iVar1 != -1) {
            lVar6 = (longlong)iVar1;
            if (*(int *)(DAT_1464c9ec0 + lVar6 * 0x18) == local_res10[0]) {
              if ((iVar1 != -1) && (lVar6 = DAT_1464c9ec0 + lVar6 * 0x18, lVar6 != 0)) {
                local_res20 = *(undefined8 **)(lVar6 + 8);
              }
              break;
            }
            iVar1 = *(int *)(DAT_1464c9ec0 + 0x10 + lVar6 * 0x18);
          }
        }
        if (local_res20 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)operator_new(0x28);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0xffffffffffffffff;
            puVar5[1] = 0xffffffffffffffff;
            puVar5[2] = 0;
            puVar5[3] = 0;
            *(undefined4 *)(puVar5 + 4) = 0;
            puVar7 = puVar5;
          }
          *(int *)(puVar7 + 4) = local_res10[0];
          local_28 = local_res10;
          local_20 = &local_res20;
          local_res20 = puVar7;
          FUN_1404981d0(&DAT_1464c9ec0,local_res18,&local_28,0);
        }
      }
      local_res20[2] = local_res20[2] + 1;
      if (bVar2) {
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
        return local_res20;
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_146ab66c8);
  }
  return local_res20;
}



// FUNCTION 141ed1960 FUN_141ed1960 body=528 status=ok
// SIG undefined FUN_141ed1960(void)

void FUN_141ed1960(longlong *param_1)

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
        if (bVar4) goto LAB_141ed1a9f;
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
LAB_141ed1a9f:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0x254 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0x94] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0x93] =
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



// FUNCTION 141ed1b70 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141ed1caf;
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
LAB_141ed1caf:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0xa8 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0x29] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0x28] =
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



// FUNCTION 141ed1d80 Rehash body=525 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141ed1eaf;
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
LAB_141ed1eaf:
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
        lVar6 = (longlong)iStack_2c * 0x40 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x3c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x38) =
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



// FUNCTION 141ed1f90 Rehash body=537 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateKey,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141ed20bf;
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
LAB_141ed20bf:
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
        lVar6 = (longlong)iStack_2c * 0x130 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 300) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x128) =
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



// FUNCTION 141ed21b0 Rehash body=544 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar6 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar6 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar6) {
      uVar12 = 0;
      uVar13 = (ulonglong)uVar6;
      do {
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar11 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar6 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        lVar7 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_141ed22ef;
        uVar6 = puVar14[lVar7 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
      iVar9 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_44 = (iStack_40 - iVar9) + 0x1f;
      if (iVar4 < iStack_44) {
LAB_141ed22ef:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        iVar4 = iStack_1c;
        puVar3 = (undefined8 *)(*param_1 + (longlong)iStack_1c * 0x48);
        if (*(int *)(*param_1 + 8 + (longlong)iStack_1c * 0x48) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar3;
        }
        uVar6 = FUN_140438070(puVar10);
        uVar6 = (int)*plVar2 - 1U & uVar6;
        *(uint *)((longlong)puVar3 + 0x44) = uVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar3 + 8) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4) =
             iVar4;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141ed23d0 FUN_141ed23d0 body=537 status=ok
// SIG undefined FUN_141ed23d0(void)

void FUN_141ed23d0(longlong *param_1)

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
        if (bVar4) goto LAB_141ed24ff;
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
LAB_141ed24ff:
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
        lVar6 = (longlong)iStack_2c * 0x250 + *param_1;
        uVar5 = FUN_141ec8950(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x24c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x248) =
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



// FUNCTION 141ed25f0 Remove body=216 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = *param_1;
    lVar6 = (longlong)param_2 * 0xa8;
    lVar3 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0xa4 + lVar5));
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    piVar4 = (int *)((longlong)plVar2 + lVar3 * 4);
    iVar1 = *(int *)((longlong)plVar2 + lVar3 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar4 = *(int *)(lVar6 + 0xa0 + lVar5);
        break;
      }
      piVar4 = (int *)(lVar5 + 0xa0 + (longlong)iVar1 * 0xa8);
      iVar1 = *piVar4;
    }
  }
  lVar5 = (longlong)param_2 * 0xa8 + *param_1;
  *(undefined4 *)(lVar5 + 0x98) = 0;
  if (*(longlong *)(lVar5 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (lVar5 + 0x50);
  TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 141ed26d0 Remove body=395 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int *piVar10;
  longlong lVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar9 = (longlong)(int)param_1[9] - 1;
  plVar8 = (longlong *)param_1[8];
  iVar5 = ::GetTypeHash(param_2);
  plVar7 = plVar8;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  iVar5 = *(int *)((longlong)plVar7 + ((longlong)iVar5 & uVar9) * 4);
  if (iVar5 == -1) {
    return 0;
  }
  lVar3 = *param_1;
  while ((((lVar11 = (longlong)iVar5 * 0x40, *(longlong *)(lVar11 + lVar3) != *param_2 ||
           (*(longlong *)(lVar11 + 8 + lVar3) != param_2[1])) ||
          (*(longlong *)(lVar11 + 0x10 + lVar3) != param_2[2])) ||
         (((*(longlong *)(lVar11 + 0x18 + lVar3) != param_2[3] ||
           (*(longlong *)(lVar11 + 0x20 + lVar3) != param_2[4])) ||
          (*(longlong *)(lVar11 + 0x28 + lVar3) != param_2[5]))))) {
    iVar5 = *(int *)(lVar11 + 0x38 + lVar3);
    if (iVar5 == -1) {
      return 0;
    }
  }
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  uVar9 = (longlong)*(int *)(lVar11 + 0x3c + lVar3) & uVar9;
  piVar10 = (int *)((longlong)plVar8 + uVar9 * 4);
  iVar2 = *(int *)((longlong)plVar8 + uVar9 * 4);
  do {
    if (iVar2 == -1) {
LAB_141ed27e3:
      bVar4 = (byte)iVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = iVar5;
      }
      lVar3 = *param_1;
      uVar6 = 0xffffffff;
      *(undefined4 *)(lVar3 + lVar11) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar6 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar3 + 4 + lVar11) = uVar6;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar5;
      plVar8 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      return 1;
    }
    if (iVar2 == iVar5) {
      *piVar10 = *(int *)(lVar11 + 0x38 + lVar3);
      goto LAB_141ed27e3;
    }
    piVar10 = (int *)(lVar3 + 0x38 + (longlong)iVar2 * 0x40);
    iVar2 = *piVar10;
  } while( true );
}



// FUNCTION 141ed2860 Remove body=422 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateKey,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar9 = (longlong)(int)param_1[9] - 1;
  plVar11 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar11 = param_1 + 7;
  }
  iVar6 = ::GetTypeHash(param_2);
  iVar6 = *(int *)((longlong)plVar11 + ((longlong)iVar6 & uVar9) * 4);
  if (iVar6 != -1) {
    lVar3 = *param_1;
    do {
      lVar10 = (longlong)iVar6 * 0x130 + lVar3;
      cVar5 = FUN_141ebbab0(lVar10,param_2);
      if (cVar5 != '\0') {
        lVar10 = (longlong)iVar6 * 0x130;
        piVar8 = (int *)(((longlong)*(int *)(lVar10 + lVar3 + 300) & uVar9) * 4 + (longlong)plVar11)
        ;
        iVar2 = *piVar8;
        goto joined_r0x000141ed2954;
      }
      iVar6 = *(int *)(lVar10 + 0x128);
    } while (iVar6 != -1);
  }
  return 0;
joined_r0x000141ed2954:
  if (iVar2 == -1) {
LAB_141ed297e:
    bVar4 = (byte)iVar6 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x130 + *param_1) = iVar6;
    }
    lVar3 = *param_1;
    uVar7 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar10) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar7 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar3 + 4 + lVar10) = uVar7;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar6;
    plVar11 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar11 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar11 +
                     (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar6) {
    *piVar8 = *(int *)(lVar10 + lVar3 + 0x128);
    goto LAB_141ed297e;
  }
  piVar8 = (int *)((longlong)iVar2 * 0x130 + 0x128 + lVar3);
  iVar2 = *piVar8;
  goto joined_r0x000141ed2954;
}



// FUNCTION 141ed2a10 Remove body=249 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateKey,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  int *piVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar8 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)((longlong)param_2 * 0x130 + 300 + lVar3));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar9 = (int *)((longlong)plVar5 + lVar8 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar9 = *(int *)((longlong)param_2 * 0x130 + 0x128 + lVar3);
        break;
      }
      piVar9 = (int *)(lVar3 + 0x128 + (longlong)iVar2 * 0x130);
      iVar2 = *piVar9;
    }
  }
  bVar4 = (byte)param_2 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0x130 + *param_1) = param_2;
  }
  uVar7 = 0xffffffff;
  puVar6 = (undefined4 *)((longlong)param_2 * 0x130 + *param_1);
  *puVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (undefined4)param_1[6];
  }
  puVar6[1] = uVar7;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = param_2;
  plVar5 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
  return;
}



// FUNCTION 141ed2b10 FUN_141ed2b10 body=162 status=ok
// SIG undefined FUN_141ed2b10(void)

void FUN_141ed2b10(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar4 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)((longlong)param_2 * 0x250 + 0x24c + lVar2));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)((longlong)param_2 * 0x250 + 0x248 + lVar2);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x248 + (longlong)iVar1 * 0x250);
      iVar1 = *piVar5;
    }
  }
  FUN_141ed2d40(param_1,param_2,1);
  return;
}



// FUNCTION 141ed2bc0 FUN_141ed2bc0 body=181 status=ok
// SIG undefined FUN_141ed2bc0(void)

void FUN_141ed2bc0(longlong *param_1,int param_2,int param_3)

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
    lVar8 = uVar10 * 0x254;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x254 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0x254;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141ed2c80 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0xa8;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xa8 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0xa8;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141ed2d40 FUN_141ed2d40 body=181 status=ok
// SIG undefined FUN_141ed2d40(void)

void FUN_141ed2d40(longlong *param_1,int param_2,int param_3)

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
    lVar8 = uVar10 * 0x250;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x250 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0x250;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141ed2e00 RemoveFromCache body=129 status=ok
// SIG undefined RemoveFromCache(void)

void FCachedBoundShaderStateLink_Threadsafe::RemoveFromCache(longlong param_1)

{
  BOOL BVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab63b0);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab63b0);
  }
  local_38 = *(undefined8 *)(param_1 + 8);
  local_30 = *(undefined8 *)(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x18);
  local_20 = *(undefined8 *)(param_1 + 0x20);
  local_18 = *(undefined8 *)(param_1 + 0x28);
  local_10 = *(undefined8 *)(param_1 + 0x30);
  TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
  ::Remove(&DAT_1464c9e20,&local_38);
                    /* WARNING: Could not recover jumptable at 0x000141ed2e7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab63b0);
  return;
}



// FUNCTION 141ed2e90 FUN_141ed2e90 body=148 status=ok
// SIG undefined FUN_141ed2e90(void)

undefined8 FUN_141ed2e90(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (DAT_146ac3a58 == '\0') {
    DAT_146ac3a58 = '\x01';
    uVar4 = FCommandLine::Get();
    DAT_146ac3a59 = FParse::Param(uVar4,L"reportpso");
  }
  lVar1 = DAT_146ab6680;
  if (DAT_146ac3a59 == '\0') {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    else {
      lVar5 = 0;
    }
    if (*(int *)(lVar5 + lVar1) != 1) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141ed2f30 Reset body=118 status=ok
// SIG undefined Reset(void)

void TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::Reset
               (longlong *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_2 <= *(int *)((longlong)param_1 + 0x2c)) {
    iVar4 = (int)param_1[5];
    plVar3 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar3 = param_1;
    }
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar3 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar3 = plVar3 + 1;
    }
    *(undefined4 *)(param_1 + 5) = 0;
    return;
  }
  Empty();
  return;
}



// FUNCTION 141ed2fb0 FUN_141ed2fb0 body=152 status=ok
// SIG undefined FUN_141ed2fb0(void)

void FUN_141ed2fb0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 2) = 0;
  FMemStackBase::FreeChunks(param_1 + 6,0);
  param_1[1] = param_1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  uVar2 = 0;
  if (DAT_146ab6358 != (longlong *)0x0) {
    uVar2 = (**(code **)(*DAT_146ab6358 + 0x468))();
  }
  param_1[4] = uVar2;
  param_1[0x36] = 0;
  if ((DAT_1464c9c58 != '\0') && (uVar2 = 0, DAT_146ab6358 != (longlong *)0x0)) {
    uVar2 = (**(code **)(*DAT_146ab6358 + 0x470))();
  }
  param_1[5] = uVar2;
  LOCK();
  UNLOCK();
  iVar1 = DAT_146ab6e6c + 1;
  DAT_146ab6e6c = DAT_146ab6e6c + 1;
  *(int *)(param_1 + 3) = iVar1;
  param_1[0x12] = 0;
  return;
}



// FUNCTION 141ed3050 ResizeGrow body=141 status=ok
// SIG undefined ResizeGrow(void)

void TArray<float,TInlineAllocator<64,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (uVar1 < 0x41) {
    iVar2 = 0x40;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x10c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 4,0);
    iVar2 = (int)(uVar3 >> 2);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x10c) = iVar2;
  TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
            (param_1,param_2,iVar2,4);
  return;
}



// FUNCTION 141ed30e0 FUN_141ed30e0 body=138 status=ok
// SIG undefined FUN_141ed30e0(void)

void FUN_141ed30e0(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x254,0);
  iVar4 = (int)(uVar3 / 0x254);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x254,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141ed3170 ResizeTo body=110 status=ok
// SIG undefined ResizeTo(void)

void TArray<int,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x41) {
      iVar1 = 0x40;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = iVar1;
    TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x108),iVar1,4);
  }
  return;
}



// FUNCTION 141ed31e0 FUN_141ed31e0 body=118 status=ok
// SIG undefined FUN_141ed31e0(void)

void FUN_141ed31e0(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x254,0);
    iVar3 = (int)(uVar1 / 0x254);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x254,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141ed3260 FUN_141ed3260 body=1013 status=ok
// SIG undefined FUN_141ed3260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141ed3260(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  ulonglong uVar5;
  char cVar6;
  DWORD DVar7;
  BOOL BVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  longlong local_f8;
  undefined8 local_f0;
  double local_d8;
  
  uVar13 = 0;
  QueryPerformanceCounter(&local_res10);
  bVar14 = true;
  dVar4 = (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0;
  cVar6 = *(char *)(param_1 + 0x40);
  lVar12 = DAT_146ac3938;
  while (cVar6 != '\0') {
    iVar11 = 1;
    DAT_146ac3938 = lVar12;
    cVar6 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar6 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
      lVar9 = 4;
    }
    else {
      lVar9 = 0;
    }
    iVar2 = *(int *)(lVar9 + lVar12);
    if ((0 < iVar2) && (iVar11 = 4, iVar2 < 4)) {
      iVar11 = iVar2;
    }
    dVar17 = (double)iVar11 * 0.017 + dVar4;
    QueryPerformanceCounter(&local_res18);
    if ((iVar11 == 0) || (bVar14)) {
      dVar16 = -1.0;
    }
    else {
      dVar16 = dVar17 - ((double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0);
      if (dVar16 <= 0.0) {
        dVar16 = 0.0;
      }
    }
    (**(code **)(*DAT_1464ca180 + 0x20))(DAT_1464ca180,(longlong)(dVar16 * 1000.0),0);
    BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464ca138);
    if (BVar8 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464ca138);
    }
    uVar5 = _DAT_1464ca160;
    local_d8 = DAT_1464ca170;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464ca138);
    QueryPerformanceCounter(&local_res20);
    dVar16 = local_d8;
    piVar1 = DAT_146ac3980;
    dVar15 = (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0;
    if (uVar13 < uVar5) {
      cVar6 = FUN_1415ad720(&DAT_1468e2448);
      uVar13 = uVar5;
      dVar4 = dVar16;
      if (((cVar6 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
        bVar14 = piVar1[1] == 0;
      }
      else {
        bVar14 = *piVar1 == 0;
      }
    }
    else if (((iVar11 != 0) && (!bVar14)) && (dVar17 < dVar15)) {
      uVar13 = uVar5 + 1;
      dVar4 = dVar15;
    }
    BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (BVar8 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    iVar11 = *(int *)(param_1 + 0x38) + -1;
    if (-1 < iVar11) {
      lVar9 = (longlong)iVar11 << 4;
      lVar12 = lVar9;
      do {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x30) + lVar9) <= uVar13) {
          local_f8 = 0;
          local_f0 = 0;
          FUN_141591a60(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8 + lVar9),&local_f8);
          lVar3 = *(longlong *)(lVar12 + 8 + *(longlong *)(param_1 + 0x30));
          if (lVar3 != 0) {
            LOCK();
            piVar1 = (int *)(lVar3 + 0x48);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              FGraphEvent::Recycle();
            }
          }
          iVar2 = *(int *)(param_1 + 0x38);
          iVar10 = (iVar2 - iVar11) + -1;
          if (0 < iVar10) {
            iVar10 = 1;
          }
          if (iVar10 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar12 + *(longlong *)(param_1 + 0x30)),
                       (void *)((longlong)(iVar2 - iVar10) * 0x10 + *(longlong *)(param_1 + 0x30)),
                       (longlong)iVar10 << 4);
            iVar2 = *(int *)(param_1 + 0x38);
          }
          *(int *)(param_1 + 0x38) = iVar2 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x30);
          if (local_f8 != 0) {
            FMemory::Free();
          }
        }
        lVar12 = lVar12 + -0x10;
        lVar9 = lVar9 + -0x10;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    lVar12 = DAT_146ac3938;
    cVar6 = *(char *)(param_1 + 0x40);
  }
  DAT_146ac3938 = lVar12;
  return 0;
}



// FUNCTION 141ed3660 FUN_141ed3660 body=12288 status=ok
// SIG undefined FUN_141ed3660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_141ed3660(longlong *param_1,undefined8 *param_2,int param_3,longlong *param_4,
                  longlong *param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  longlong *plVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  byte bVar21;
  undefined2 *puVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined2 *puVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  int *piVar31;
  longlong lVar32;
  void *pvVar33;
  int iVar34;
  size_t _Size;
  longlong lVar35;
  undefined2 *puVar36;
  ulonglong *puVar37;
  longlong *plVar38;
  undefined4 *puVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_16a8 [32];
  ulonglong local_1688;
  longlong local_1680;
  undefined1 local_1678;
  int local_1668 [2];
  longlong *local_1660;
  undefined2 *local_1658;
  int local_1650;
  int local_164c;
  longlong *local_1648;
  undefined8 uStack_1640;
  longlong *plStack_1638;
  undefined1 auStack_1630 [16];
  int local_1620;
  int local_161c;
  longlong *local_1618;
  longlong *local_1610;
  undefined2 *local_1608;
  int local_1600;
  int local_15fc;
  undefined2 *local_15f8;
  int local_15f0;
  int local_15ec;
  undefined2 *local_15e8;
  undefined8 local_15e0;
  longlong local_15d8;
  undefined8 local_15d0;
  undefined2 *local_15c8;
  undefined2 *local_15c0;
  undefined8 local_15b8;
  longlong local_15b0;
  undefined8 local_15a8;
  undefined2 *local_15a0;
  undefined8 local_1598;
  undefined4 local_1590 [2];
  undefined2 *local_1588;
  undefined8 local_1580;
  undefined2 *local_1578;
  undefined8 local_1570;
  undefined2 *local_1568;
  undefined8 local_1560;
  undefined2 *local_1558;
  int local_1550;
  int local_154c;
  ulonglong local_1548;
  longlong *local_1540;
  int local_1538;
  int local_1534;
  longlong local_1530;
  undefined8 local_1528;
  int local_1520;
  int local_151c;
  int local_1518;
  int local_1514;
  void *local_1510;
  int local_1508;
  undefined4 local_1504;
  void *local_1500;
  ulonglong local_14f8;
  undefined2 *local_14f0;
  int local_14e8;
  undefined4 local_14e4;
  longlong local_14e0 [4];
  undefined4 *local_14c0;
  undefined8 local_14b8;
  longlong *local_14b0;
  undefined8 uStack_14a8;
  longlong *local_14a0;
  undefined8 uStack_1498;
  undefined8 local_1490;
  longlong *local_1488;
  undefined8 uStack_1480;
  longlong *local_1478;
  undefined8 uStack_1470;
  undefined8 local_1468;
  longlong *plStack_1460;
  longlong *local_1458;
  undefined8 uStack_1450;
  longlong *local_1448;
  undefined8 uStack_1440;
  undefined8 local_1438;
  undefined8 uStack_1430;
  longlong *local_1428;
  undefined2 local_1420;
  undefined4 local_1418;
  undefined4 uStack_1414;
  longlong *plStack_1410;
  undefined4 local_1408;
  undefined8 uStack_1404;
  undefined4 uStack_13fc;
  longlong *local_13f8;
  undefined8 uStack_13f0;
  longlong *local_13e8;
  undefined8 uStack_13e0;
  undefined8 local_13d8;
  undefined8 uStack_13d0;
  longlong *local_13c8;
  undefined2 local_13c0;
  undefined8 local_13b8;
  undefined4 local_13b0;
  undefined4 local_13ac;
  undefined1 local_13a8;
  longlong local_13a4;
  longlong lStack_139c;
  longlong *local_1390;
  undefined4 local_1388;
  undefined4 uStack_1384;
  longlong *plStack_1380;
  undefined4 local_1378;
  undefined4 uStack_1374;
  undefined4 uStack_1370;
  undefined4 uStack_136c;
  undefined4 local_1368;
  undefined4 uStack_1364;
  longlong *plStack_1360;
  undefined4 local_1358;
  undefined4 uStack_1354;
  undefined4 uStack_1350;
  undefined4 uStack_134c;
  undefined4 local_1348;
  undefined4 uStack_1344;
  longlong *plStack_1340;
  undefined4 local_1338;
  undefined4 uStack_1334;
  undefined4 uStack_1330;
  undefined4 uStack_132c;
  undefined4 local_1328;
  undefined4 uStack_1324;
  longlong *plStack_1320;
  undefined4 local_1318;
  undefined8 uStack_1314;
  undefined4 uStack_130c;
  undefined4 local_1308;
  undefined4 uStack_1304;
  longlong *plStack_1300;
  undefined4 local_12f8;
  undefined4 uStack_12f4;
  undefined4 uStack_12f0;
  undefined4 uStack_12ec;
  undefined4 local_12e8;
  uint uStack_12e4;
  longlong *plStack_12e0;
  uint local_12d8;
  uint uStack_12d4;
  undefined4 uStack_12d0;
  undefined4 uStack_12cc;
  undefined4 local_12c8;
  undefined4 uStack_12c4;
  longlong *plStack_12c0;
  undefined4 local_12b8;
  undefined8 uStack_12b4;
  undefined4 uStack_12ac;
  undefined4 local_12a8;
  undefined4 uStack_12a4;
  longlong *plStack_12a0;
  undefined4 local_1298;
  undefined4 uStack_1294;
  undefined4 uStack_1290;
  undefined4 uStack_128c;
  undefined1 local_1288 [4];
  undefined1 local_1284 [4];
  undefined1 local_1280 [4];
  undefined1 local_127c [4];
  undefined1 local_1278 [4];
  undefined1 local_1274 [4];
  undefined1 local_1270 [8];
  undefined1 local_1268 [4];
  undefined1 local_1264 [4];
  undefined1 local_1260 [4];
  undefined1 local_125c [4];
  undefined1 local_1258 [4];
  undefined1 local_1254 [4];
  undefined1 local_1250 [4];
  undefined1 local_124c [4];
  longlong local_1248;
  int local_1240;
  longlong local_1238;
  int local_1230;
  longlong local_1228;
  int local_1220;
  undefined1 local_1214 [4];
  undefined1 local_1210 [8];
  int local_1208;
  int iStack_1204;
  longlong *plStack_1200;
  int local_11f8;
  uint uStack_11f4;
  uint uStack_11f0;
  undefined4 uStack_11ec;
  int local_11e8;
  int iStack_11e4;
  longlong *plStack_11e0;
  int local_11d8;
  uint uStack_11d4;
  uint uStack_11d0;
  undefined4 uStack_11cc;
  int local_11c8;
  int iStack_11c4;
  longlong *plStack_11c0;
  int local_11b8;
  uint uStack_11b4;
  uint uStack_11b0;
  undefined4 uStack_11ac;
  undefined1 local_11a8 [8];
  longlong *local_11a0;
  undefined8 uStack_1198;
  longlong *local_1190;
  undefined8 uStack_1188;
  undefined8 local_1180;
  longlong *local_1178;
  undefined8 uStack_1170;
  longlong *local_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  longlong *local_1150;
  undefined8 uStack_1148;
  longlong *local_1140;
  undefined8 uStack_1138;
  undefined8 local_1130;
  longlong *local_1128;
  undefined8 uStack_1120;
  longlong *local_1118;
  undefined8 uStack_1110;
  undefined8 local_1108;
  longlong *local_1100;
  undefined8 uStack_10f8;
  longlong *local_10f0;
  undefined8 uStack_10e8;
  undefined8 local_10e0;
  undefined1 local_10d8 [4];
  undefined1 local_10d4 [4];
  undefined1 local_10d0 [4];
  undefined1 local_10cc [12];
  undefined8 local_10c0;
  undefined4 local_10b8;
  undefined4 local_10b4;
  undefined1 local_10b0;
  longlong local_10ac;
  longlong lStack_10a4;
  longlong *local_1098;
  undefined4 *local_1090;
  undefined8 *local_1088;
  undefined8 local_1080;
  undefined8 local_1078;
  longlong local_1070;
  undefined1 *local_1068;
  undefined4 *local_1060;
  int *local_1058;
  undefined4 *local_1050;
  undefined8 *local_1048;
  undefined4 *local_1040;
  int *local_1038;
  longlong local_1030;
  undefined1 *local_1028;
  undefined4 *local_1020;
  longlong **local_1018;
  longlong local_1008;
  undefined4 uStack_1000;
  undefined4 uStack_ffc;
  LARGE_INTEGER local_ff8;
  LARGE_INTEGER local_ff0;
  LARGE_INTEGER local_fe8;
  LARGE_INTEGER local_fe0;
  undefined1 local_fd8 [8];
  LARGE_INTEGER local_fd0;
  longlong local_fc8 [2];
  longlong local_fb8 [2];
  longlong local_fa8 [2];
  longlong local_f98 [2];
  longlong local_f88 [2];
  longlong local_f78;
  undefined8 uStack_f70;
  int local_f58;
  int iStack_f54;
  int local_f38;
  int local_f18;
  int iStack_f14;
  longlong *local_f08;
  undefined8 uStack_f00;
  longlong *local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  longlong *local_ee0;
  undefined8 uStack_ed8;
  longlong *local_ed0;
  undefined8 uStack_ec8;
  undefined8 local_ec0;
  longlong *local_eb8;
  undefined8 uStack_eb0;
  longlong *local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined **local_e88 [18];
  undefined8 local_df8;
  longlong *local_df0;
  undefined8 local_de8;
  undefined **local_dd8 [18];
  undefined8 local_d48;
  longlong *local_d40;
  ulonglong local_d38;
  undefined1 local_d28 [16];
  undefined1 local_d18 [32];
  undefined1 local_cf8 [144];
  undefined8 local_c68;
  undefined1 local_c48 [144];
  undefined8 local_bb8;
  undefined1 local_b98 [176];
  int local_ae8 [2];
  longlong local_ae0;
  undefined8 local_ad8;
  longlong local_ad0 [3];
  int local_ab8;
  undefined4 local_ab0;
  int local_aac;
  undefined8 local_aa0;
  undefined4 local_a98;
  int local_a88 [2];
  longlong local_a80;
  undefined8 local_a78;
  longlong local_a70 [3];
  int local_a58;
  undefined4 local_a50;
  int local_a4c;
  undefined8 local_a40;
  undefined4 local_a38;
  undefined8 local_a28;
  undefined8 local_a20;
  longlong local_a18;
  longlong lStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined4 local_9e8 [2];
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined1 local_9d0 [32];
  undefined4 local_9b0;
  undefined4 local_9ac;
  longlong local_9a0;
  undefined4 local_998;
  undefined8 local_988;
  undefined8 local_980;
  longlong local_978;
  longlong lStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 local_950;
  undefined4 local_948 [2];
  undefined8 local_940;
  undefined8 local_938;
  undefined1 local_930 [32];
  undefined4 local_910;
  undefined4 local_90c;
  longlong local_900;
  undefined4 local_8f8;
  longlong *local_8e8;
  longlong local_8e0;
  longlong local_8d8;
  longlong lStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined4 local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined1 local_890 [32];
  undefined4 local_870;
  undefined4 local_86c;
  longlong local_860;
  undefined4 local_858;
  longlong local_848 [2];
  undefined1 local_838 [32];
  undefined4 local_818;
  undefined4 local_814;
  longlong local_808;
  undefined4 local_800;
  longlong local_7f8 [2];
  undefined1 local_7e8 [32];
  undefined4 local_7c8;
  undefined4 local_7c4;
  undefined8 local_7b8;
  undefined4 local_7b0;
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined4 local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined4 local_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined4 local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined4 local_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined4 local_738;
  undefined1 local_728 [256];
  longlong local_628;
  undefined1 *local_620;
  undefined4 local_618;
  undefined1 local_608 [256];
  longlong local_508;
  undefined1 *local_500;
  undefined4 local_4f8;
  undefined1 local_4e8 [4];
  undefined8 local_4e4;
  undefined8 local_4dc;
  undefined4 local_4d4;
  undefined1 local_4d0 [556];
  undefined4 local_2a4;
  undefined1 local_298 [4];
  undefined8 local_294;
  undefined8 local_28c;
  undefined4 local_284;
  undefined1 local_280 [556];
  undefined4 local_54;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x141ed3682;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_16a8;
  local_1610 = param_5;
  local_1660 = param_4;
  local_1620 = param_3;
  local_1540 = param_1;
  QueryPerformanceCounter(&local_fd0);
  local_1650 = *(int *)(param_2 + 1);
  lVar29 = (longlong)local_1650;
  pvVar33 = (void *)*param_2;
  local_1658 = (undefined2 *)0x0;
  if (local_1650 == 0) {
    local_164c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1658,local_1650,0);
    _guard_xfg_dispatch_icall_nop(local_1658,pvVar33,lVar29 * 2);
  }
  if ((param_3 == 1) && (&local_1658 != (undefined2 **)(param_1 + 0x23))) {
    local_1650 = (int)param_1[0x24];
    lVar29 = (longlong)local_1650;
    puVar26 = (undefined2 *)param_1[0x23];
    if ((local_1650 == 0) && (local_164c == 0)) {
      local_164c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1658,local_1650);
      _guard_xfg_dispatch_icall_nop(local_1658,puVar26,lVar29 * 2);
    }
  }
  local_1500 = (void *)0x0;
  local_14f8 = 0;
  uVar15 = FCommandLine::Get();
  cVar12 = FParse::Value(uVar15,L"-pipelinecachedir=",&local_1500,1);
  iVar24 = 2;
  iVar14 = 2;
  if (cVar12 != '\0') {
    puVar16 = (undefined8 *)FUN_141671940(local_fa8,&local_1658,1);
    if (*(int *)(puVar16 + 1) == 0) {
      puVar26 = &DAT_143f3eda8;
    }
    else {
      puVar26 = (undefined2 *)*puVar16;
    }
    FString::PrintfImpl(&local_1248,L"%s.upipelinecache",puVar26);
    pvVar33 = local_1500;
    if (local_1240 == 0) {
      iVar34 = 0;
    }
    else {
      iVar34 = local_1240 + -1;
    }
    lVar29 = (longlong)(int)local_14f8;
    if (((int)local_14f8 != 0) || (iVar34 == -1)) {
      iVar14 = 1;
    }
    local_1560 = CONCAT44(local_1560._4_4_,(int)local_14f8);
    local_1568 = (undefined2 *)0x0;
    if (((int)local_14f8 == 0) && (iVar14 + iVar34 == 0)) {
      local_1560 = local_14f8 & 0xffffffff;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_1568,iVar14 + iVar34 + (int)local_14f8,0);
      _guard_xfg_dispatch_icall_nop(local_1568,pvVar33,lVar29 * 2);
    }
    FString::PathAppend(&local_1568,local_1248,iVar34);
    if (local_1658 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_1650 = (int)local_1560;
    local_1658 = local_1568;
    local_164c = local_1560._4_4_;
    local_1560 = 0;
    local_1568 = (undefined2 *)0x0;
    if (local_1248 != 0) {
      FMemory::Free();
    }
    param_5 = local_1610;
    if (local_fa8[0] != 0) {
      FMemory::Free();
      param_5 = local_1610;
    }
  }
  iVar14 = local_1650;
  puVar26 = local_1658;
  if (((local_1620 == 0) && ((int)param_5[1] == *(int *)((longlong)param_5 + 0x34))) &&
     (param_6 == (int)param_1[0x10])) {
    cVar12 = '\x01';
    goto LAB_141ed421e;
  }
  local_15c8 = (undefined2 *)0x0;
  local_1600 = 0;
  if (local_1620 == 1) {
LAB_141ed3a52:
    puVar16 = (undefined8 *)FName::ToString(param_1 + 3,local_f88);
    if (*(int *)(puVar16 + 1) == 0) {
      puVar26 = &DAT_143f3eda8;
    }
    else {
      puVar26 = (undefined2 *)*puVar16;
    }
    if ((int)param_1[1] == 0) {
      puVar36 = &DAT_143f3eda8;
    }
    else {
      puVar36 = (undefined2 *)*param_1;
    }
    FString::PrintfImpl(&local_1238,L"%s_%s.stable.upipelinecache",puVar36,puVar26);
    local_628 = 0;
    local_620 = local_728;
    local_618 = 7;
    local_1688 = CONCAT62(local_1688._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_620,8,"Windows");
    puVar27 = local_620;
    puVar16 = (undefined8 *)FPaths::ProjectContentDir(local_f98);
    iVar14 = *(int *)(puVar16 + 1);
    local_15c0 = (undefined2 *)*puVar16;
    *puVar16 = 0;
    local_15b8._0_4_ = *(int *)(puVar16 + 1);
    local_15b8._4_4_ = *(int *)((longlong)puVar16 + 0xc);
    puVar16[1] = 0;
    if (local_15b8._4_4_ < (int)((0x10 - (uint)(iVar14 != 0)) + (int)local_15b8)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_15c0);
    }
    FString::PathAppend(&local_15c0,L"PipelineCaches");
    iVar14 = local_15b8._4_4_;
    lVar29 = -1;
    do {
      lVar18 = lVar29;
      lVar29 = lVar18 + 1;
    } while (*(short *)(puVar27 + lVar29 * 2) != 0);
    if (((int)local_15b8 != 0) || (iVar34 = 2, (int)lVar18 == -2)) {
      iVar34 = 1;
    }
    local_1578 = local_15c0;
    iVar34 = iVar34 + (int)lVar29 + (int)local_15b8;
    local_15c0 = (undefined2 *)0x0;
    local_1570._0_4_ = (int)local_15b8;
    local_1570._4_4_ = local_15b8._4_4_;
    local_15b8 = 0;
    if (iVar14 < iVar34) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1578);
    }
    FString::PathAppend(&local_1578,puVar27);
    iVar14 = local_1570._4_4_;
    if (local_1230 == 0) {
      iVar34 = 0;
    }
    else {
      iVar34 = local_1230 + -1;
    }
    if (((int)local_1570 != 0) || (iVar23 = 2, iVar34 == -1)) {
      iVar23 = 1;
    }
    local_1558 = local_1578;
    iVar23 = iVar23 + iVar34 + (int)local_1570;
    local_1578 = (undefined2 *)0x0;
    local_1550 = (int)local_1570;
    local_154c = local_1570._4_4_;
    local_1570 = 0;
    if (iVar14 < iVar23) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1558);
    }
    FString::PathAppend(&local_1558,local_1238,iVar34);
    if (local_1578 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_15c0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_f98[0] != 0) {
      FMemory::Free();
    }
    if (local_628 != 0) {
      FMemory::Free();
    }
    if (local_1238 != 0) {
      FMemory::Free();
    }
    if (local_f88[0] != 0) {
      FMemory::Free();
    }
    puVar16 = (undefined8 *)FName::ToString(param_1 + 3,local_fc8);
    if (*(int *)(puVar16 + 1) == 0) {
      puVar26 = &DAT_143f3eda8;
    }
    else {
      puVar26 = (undefined2 *)*puVar16;
    }
    if ((int)param_1[1] == 0) {
      puVar36 = &DAT_143f3eda8;
    }
    else {
      puVar36 = (undefined2 *)*param_1;
    }
    FString::PrintfImpl(&local_1228,L"%s_%s.upipelinecache",puVar36,puVar26);
    local_4f8 = 7;
    local_500 = local_608;
    local_508 = 0;
    local_1688 = CONCAT62(local_1688._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_500,8,"Windows");
    puVar27 = local_500;
    puVar16 = (undefined8 *)FPaths::ProjectContentDir(local_fb8);
    iVar14 = *(int *)(puVar16 + 1);
    local_15e8 = (undefined2 *)*puVar16;
    *puVar16 = 0;
    local_15e0._0_4_ = *(int *)(puVar16 + 1);
    local_15e0._4_4_ = *(int *)((longlong)puVar16 + 0xc);
    puVar16[1] = 0;
    if (local_15e0._4_4_ < (int)((0x10 - (uint)(iVar14 != 0)) + (int)local_15e0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_15e8);
    }
    FString::PathAppend(&local_15e8,L"PipelineCaches",0xe);
    iVar14 = local_15e0._4_4_;
    uVar30 = 0xffffffffffffffff;
    do {
      uVar28 = uVar30;
      uVar30 = uVar28 + 1;
    } while (*(short *)(puVar27 + uVar30 * 2) != 0);
    if (((int)local_15e0 != 0) || (iVar34 = 2, (int)uVar28 == -2)) {
      iVar34 = 1;
    }
    local_1588 = local_15e8;
    iVar34 = iVar34 + (int)uVar30 + (int)local_15e0;
    local_15e8 = (undefined2 *)0x0;
    local_1580._0_4_ = (int)local_15e0;
    local_1580._4_4_ = local_15e0._4_4_;
    local_15e0 = 0;
    if (iVar14 < iVar34) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1588);
    }
    FString::PathAppend(&local_1588,puVar27,uVar30 & 0xffffffff);
    iVar14 = local_1580._4_4_;
    iVar34 = 0;
    if (local_1220 != 0) {
      iVar34 = local_1220 + -1;
    }
    if (((int)local_1580 != 0) || (iVar34 == -1)) {
      iVar24 = 1;
    }
    local_15f8 = local_1588;
    iVar24 = iVar34 + iVar24 + (int)local_1580;
    local_1588 = (undefined2 *)0x0;
    local_15f0 = (int)local_1580;
    local_15ec = local_1580._4_4_;
    local_1580 = 0;
    if (iVar14 < iVar24) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_15f8);
    }
    FString::PathAppend(&local_15f8,local_1228,iVar34);
    if (local_1588 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_15e8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_fb8[0] != 0) {
      FMemory::Free();
    }
    if (local_508 != 0) {
      FMemory::Free();
    }
    if (local_1228 != 0) {
      FMemory::Free();
    }
    if (local_fc8[0] != 0) {
      FMemory::Free();
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ac3a50) &&
       (_Init_thread_header(&DAT_146ac3a50), DAT_146ac3a50 == -1)) {
      uVar15 = FCommandLine::Get();
      DAT_146ac3a4c = FParse::Param(uVar15,L"nostablepipelinecache");
      _Init_thread_footer(&DAT_146ac3a50);
    }
    if (DAT_146ac3a4c == '\0') {
      plVar17 = (longlong *)FUN_1415c3d50();
      puVar26 = &DAT_143f3eda8;
      if (local_1550 != 0) {
        puVar26 = local_1558;
      }
      cVar12 = (**(code **)(*plVar17 + 0x48))(plVar17,puVar26);
      puVar26 = local_1558;
      if (cVar12 != '\0') {
        lVar29 = (longlong)local_1550;
        local_15f0 = local_1550;
        if ((local_1550 == 0) && (local_15ec == 0)) {
          local_15ec = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_15f8,local_1550);
          _guard_xfg_dispatch_icall_nop(local_15f8,puVar26,lVar29 * 2);
        }
      }
    }
    plVar17 = (longlong *)FUN_1415c3d50();
    puVar26 = &DAT_143f3eda8;
    if (local_15f0 != 0) {
      puVar26 = local_15f8;
    }
    lVar29 = (**(code **)(*plVar17 + 0xe8))(plVar17,puVar26);
    local_15b0 = 0;
    local_15a8 = 0;
    plVar17 = (longlong *)FUN_1415c3d50();
    lVar18 = (**(code **)(*plVar17 + 0xe8))(plVar17);
    iVar14 = local_1620;
    local_15d8 = 0;
    local_15d0 = 0;
    if (local_1620 != 0) {
      if (0 < lVar29) {
        if (param_1[0x21] == 0) {
          puVar26 = &DAT_143f3eda8;
          if (local_15f0 != 0) {
            puVar26 = local_15f8;
          }
          FUN_141676460(&local_15b0,puVar26,0);
        }
        else {
          lVar32 = (longlong)(int)local_15a8;
          iVar14 = (int)local_15a8 + (int)lVar29;
          local_15a8 = CONCAT44(local_15a8._4_4_,iVar14);
          if (local_15a8._4_4_ < iVar14) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_15b0);
          }
          _guard_xfg_dispatch_icall_nop((void *)(lVar32 + local_15b0),0,(longlong)(int)lVar29);
          local_1680 = local_15b0;
          local_1688 = 0;
          plVar17 = (longlong *)
                    (**(code **)(*(longlong *)param_1[0x21] + 0x10))
                              ((longlong *)param_1[0x21],0,lVar29,3);
          if (*(char *)((longlong)plVar17 + 0x71) == '\0') {
            (**(code **)(*plVar17 + 8))(plVar17,0);
          }
          (**(code **)*plVar17)(plVar17);
          iVar14 = local_1620;
        }
      }
      if (0 < lVar18) {
        if (param_1[0x1f] == 0) {
          if (*(int *)(param_2 + 1) == 0) {
            puVar26 = &DAT_143f3eda8;
          }
          else {
            puVar26 = (undefined2 *)*param_2;
          }
          FUN_141676460(&local_15d8,puVar26,0);
        }
        else {
          lVar29 = (longlong)(int)local_15d0;
          iVar24 = (int)local_15d0 + (int)lVar18;
          local_15d0 = CONCAT44(local_15d0._4_4_,iVar24);
          if (local_15d0._4_4_ < iVar24) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_15d8);
          }
          _guard_xfg_dispatch_icall_nop((void *)(lVar29 + local_15d8),0,(longlong)(int)lVar18);
          local_1680 = local_15d8;
          local_1688 = 0;
          plVar17 = (longlong *)
                    (**(code **)(*(longlong *)param_1[0x1f] + 0x10))
                              ((longlong *)param_1[0x1f],0,lVar18,3);
          if (*(char *)((longlong)plVar17 + 0x71) == '\0') {
            (**(code **)(*plVar17 + 8))(plVar17,0);
          }
          (**(code **)*plVar17)(plVar17,1);
        }
      }
    }
    puVar26 = local_1658;
    puVar36 = (undefined2 *)0x0;
    lVar29 = (longlong)local_1650;
    local_1530 = 0;
    local_1528 = 0;
    local_1608 = (undefined2 *)0x0;
    local_14f0 = (undefined2 *)0x0;
    local_161c = local_1650;
    local_14e8 = local_1650;
    if (local_1650 == 0) {
      local_14e4 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_14f0,local_1650,0);
      puVar36 = local_14f0;
      local_1608 = local_14f0;
      _guard_xfg_dispatch_icall_nop(local_14f0,puVar26,lVar29 * 2);
    }
    iVar24 = local_14e8;
    local_161c = local_14e8;
    if (iVar14 == 1) {
      plVar17 = (longlong *)operator_new(0xa8);
      local_1618 = plVar17;
      if (plVar17 != (longlong *)0x0) {
        puVar26 = &DAT_143f3eda8;
        if (local_1650 != 0) {
          puVar26 = local_1658;
        }
        plVar19 = (longlong *)FName::FName(local_fd8,puVar26,1);
        lVar29 = *plVar19;
        FArchive::FArchive(plVar17);
        plVar17[0x12] = 0;
        *plVar17 = (longlong)&PTR_FUN_143f4a100;
        plVar17[0x14] = lVar29;
        plVar17[0x13] = (longlong)&local_1530;
        FArchive::SetIsSaving(plVar17,1);
        FArchive::SetIsPersistent(plVar17,1);
        goto LAB_141ed4290;
      }
LAB_141ed41b6:
      cVar12 = '\0';
      puVar26 = local_1608;
    }
    else {
      plVar17 = (longlong *)FUN_1415c3d50();
      puVar26 = &DAT_143f3eda8;
      if (iVar24 != 0) {
        puVar26 = puVar36;
      }
      plVar17 = (longlong *)(**(code **)(*plVar17 + 0x20))(plVar17,puVar26,8);
      local_1618 = plVar17;
LAB_141ed4290:
      if (plVar17 == (longlong *)0x0) goto LAB_141ed41b6;
      (**(code **)(*plVar17 + 0x1c8))(plVar17,0xb);
      (**(code **)(*plVar17 + 0xa8))(plVar17,0);
      local_13a4 = param_1[0x1b];
      lStack_139c = param_1[0x1c];
      local_13b0 = 0xb;
      local_13b8 = 0x5049504543414348;
      local_13ac = DAT_146ab6384;
      local_13a8 = (undefined1)param_1[2];
      local_1390 = (longlong *)0x0;
      FUN_141eba640(plVar17,&local_13b8);
      plVar19 = (longlong *)(**(code **)(*plVar17 + 0x90))(plVar17);
      if (plVar19 <= (longlong *)param_1[4]) {
        plVar19 = (longlong *)param_1[4];
      }
      param_1[4] = (longlong)plVar19;
      if (local_1620 == 0) {
        (**(code **)(*plVar17 + 0xa8))(plVar17,plVar19);
        local_1648 = local_1610;
        local_1418 = 0;
        uStack_1414 = 1;
        local_1408 = 0xffffffff;
        plStack_1410 = local_1610 + 2;
        iVar14 = (int)local_1610[1] - *(int *)((longlong)local_1610 + 0x34);
        uStack_1404 = 0;
        local_1668[0] = iVar14;
        if ((int)local_1610[5] != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1418);
        }
        plVar20 = local_1660;
        uStack_1640 = CONCAT44(uStack_1414,local_1418);
        plStack_1460 = local_1648;
        auStack_1630._4_4_ = (int)uStack_1404;
        auStack_1630._0_4_ = local_1408;
        auStack_1630._8_4_ = uStack_1404._4_4_;
        auStack_1630._12_4_ = uStack_13fc;
        plStack_1638 = plStack_1410;
        local_1488 = local_1648;
        auVar6._4_8_ = uStack_1640;
        auVar6._0_4_ = (int)uStack_1404;
        auVar43._0_8_ = auVar6._0_8_ << 0x20;
        auVar43._8_4_ = uStack_1404._4_4_;
        auVar43._12_4_ = uStack_13fc;
        local_1468 = auVar43._8_8_;
        local_1478 = plStack_1410;
        uStack_1470 = auStack_1630._0_8_;
        iVar24 = (int)uStack_1404;
        uStack_1480 = uStack_1640;
        if ((int)uStack_1404 < (int)plStack_1410[3]) {
          do {
            plVar11 = plStack_1460;
            piVar31 = (int *)((longlong)iVar24 * 0x250 + *local_1488);
            local_1590[0] = FUN_141ec8950(piVar31);
            FUN_141ec5c60(plVar20,&local_151c,local_1590[0]);
            if ((((local_151c != -1) &&
                 (lVar29 = *plVar20 + (longlong)local_151c * 0x18, lVar29 != 0)) &&
                (lVar29 = *(longlong *)(lVar29 + 8), lVar29 != 0)) &&
               (0 < *(longlong *)(lVar29 + 0x18))) {
              local_8c8 = 0xffffffffffffffff;
              uStack_8c0 = 0xffffffffffffffff;
              local_8e8 = (longlong *)0x0;
              local_8d8 = 0;
              lStack_8d0 = 0;
              local_8b8 = 0;
              local_8b0 = 0;
              local_8a8 = 0;
              local_8a0 = 0;
              local_898 = 0;
              TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>
                        (local_890,0,0);
              local_8d8 = param_1[0x1b];
              lStack_8d0 = param_1[0x1c];
              local_86c = 0;
              local_860 = 0;
              local_858 = 0;
              local_8a8 = local_1590[0];
              local_870 = 0xffffffff;
              local_8e8 = plVar19;
              if (*piVar31 == 0) {
                plVar38 = (longlong *)(piVar31 + 1);
                puVar27 = local_124c;
LAB_141ed61da:
                FUN_1419ccaa0(&local_8a0,puVar27,plVar38,0);
              }
              else if (*piVar31 == 1) {
                if (((*(longlong *)(piVar31 + 6) != 0) || (*(longlong *)(piVar31 + 8) != 0)) ||
                   (piVar31[10] != 0)) {
                  FUN_1419ccaa0(&local_8a0,local_1260,piVar31 + 6,0);
                }
                if (((*(longlong *)(piVar31 + 0xb) != 0) || (*(longlong *)(piVar31 + 0xd) != 0)) ||
                   (piVar31[0xf] != 0)) {
                  FUN_1419ccaa0(&local_8a0,local_125c,piVar31 + 0xb,0);
                }
                if (((*(longlong *)(piVar31 + 0x15) != 0) || (*(longlong *)(piVar31 + 0x17) != 0))
                   || (piVar31[0x19] != 0)) {
                  FUN_1419ccaa0(&local_8a0,local_1258,piVar31 + 0x15,0);
                }
                if (((*(longlong *)(piVar31 + 0x1a) != 0) || (*(longlong *)(piVar31 + 0x1c) != 0))
                   || (piVar31[0x1e] != 0)) {
                  FUN_1419ccaa0(&local_8a0,local_1254,piVar31 + 0x1a,0);
                }
                plVar38 = (longlong *)(piVar31 + 0x10);
                if (((*plVar38 != 0) || (*(longlong *)(piVar31 + 0x12) != 0)) ||
                   (piVar31[0x14] != 0)) {
                  puVar27 = local_1250;
                  goto LAB_141ed61da;
                }
              }
              local_14e0[2] = 0;
              local_14e0[3] = 0;
              local_1548 = 0;
              FArchive::FArchive(local_dd8);
              local_d48 = 0;
              local_dd8[0] = &PTR_FUN_143f4a100;
              local_d40 = local_14e0 + 2;
              local_d38 = local_1548;
              FArchive::SetIsSaving(local_dd8,1);
              FArchive::SetIsPersistent(local_dd8,0);
              FArchiveState::SetGameNetVer(local_dd8,0xb);
              FUN_141eba810(local_dd8,piVar31);
              (**(code **)(*plVar17 + 0x50))(plVar17,local_14e0[2],(longlong)(int)local_d40[1]);
              local_8e0 = (longlong)(int)local_d40[1];
              local_1020 = local_1590;
              local_1018 = &local_8e8;
              TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<unsigned_int_const_&,FPipelineCacheFileFormatPSOMetaData_const_&>_>
                        (param_1 + 0x11,&local_14c0,&local_1020);
              plVar19 = (longlong *)((longlong)plVar19 + local_8e0);
              FUN_141ed2b10(plVar11,iVar24);
              FArchive::~FArchive(local_dd8);
              if (local_14e0[2] != 0) {
                FMemory::Free();
              }
              local_858 = 0;
              if (local_860 != 0) {
                FMemory::Free();
              }
              TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                        (&local_8a0);
            }
            uStack_1470 = CONCAT44(uStack_1470._4_4_,(uint)uStack_1470 & ~uStack_1480._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1480);
            iVar24 = uStack_1470._4_4_;
            iVar14 = local_1668[0];
          } while (uStack_1470._4_4_ < (int)local_1478[3]);
        }
        if (param_6 == 0) {
          param_6 = 0;
        }
        else {
          FPipelineCacheFile::SortMetaData(param_1 + 0x11,param_6);
        }
        *(int *)(param_1 + 0x10) = param_6;
        param_1[4] = (longlong)plVar19;
        local_1390 = plVar19;
        (**(code **)(*plVar17 + 0xa8))(plVar17,plVar19);
        FUN_141ebb310(plVar17,param_1 + 0x10);
      }
      else if (local_1620 == 1) {
        FMemoryReader::FMemoryReader(local_c48,&local_15d8,0);
        FMemoryReader::FMemoryReader(local_cf8,&local_15b0,0);
        FArchiveState::SetGameNetVer(local_c48,0xb);
        FArchiveState::SetGameNetVer(local_cf8,0xb);
        local_ae8[0] = (int)param_1[0x10];
        local_ae0 = 0;
        local_ad8 = 0;
        TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_ad0,0,0);
        local_ab0 = 0xffffffff;
        local_aac = 0;
        local_aa0 = 0;
        local_a98 = 0;
        TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
        ::operator=(&local_ae0,param_1 + 0x11);
        local_848[0] = 0;
        local_848[1] = 0;
        TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_838,0,0);
        local_818 = 0xffffffff;
        local_814 = 0;
        local_808 = 0;
        local_800 = 0;
        plVar17 = (longlong *)FGuid::NewGuid(local_d28);
        plVar19 = local_1610;
        local_1308 = 0;
        uStack_1304 = 1;
        local_13a4 = *plVar17;
        lStack_139c = plVar17[1];
        plVar17 = local_1610 + 2;
        local_12f8 = 0xffffffff;
        uStack_12f4 = 0;
        uStack_12f0 = 0;
        uVar25 = 0;
        plStack_1300 = plVar17;
        if ((int)local_1610[5] != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1308);
          uVar25 = *(uint *)(plVar19 + 5);
        }
        plVar19 = local_1610;
        uStack_10f8 = CONCAT44(uStack_1304,local_1308);
        uStack_10e8 = CONCAT44(uStack_12f4,local_12f8);
        local_10e0 = CONCAT44(uStack_12ec,uStack_12f0);
        local_11e8 = (int)uVar25 >> 5;
        bVar21 = (byte)uVar25 & 0x1f;
        iStack_11e4 = 1 << bVar21;
        local_1100 = local_1610;
        uStack_11d0 = uVar25 & 0xffffffe0;
        local_11d8 = -1 << bVar21;
        uStack_1640 = CONCAT44(iStack_11e4,local_11e8);
        local_1648 = local_1610;
        auStack_1630._4_4_ = uVar25;
        auStack_1630._0_4_ = local_11d8;
        auStack_1630._8_4_ = uStack_11d0;
        auStack_1630._12_4_ = uStack_11cc;
        local_ee0 = local_1610;
        local_10f0 = plStack_1300;
        auVar4._4_8_ = uStack_1640;
        auVar4._0_4_ = uVar25;
        auVar41._0_8_ = auVar4._0_8_ << 0x20;
        auVar41._8_4_ = uStack_11d0;
        auVar41._12_4_ = uStack_11cc;
        local_ec0 = auVar41._8_8_;
        uStack_ec8 = auStack_1630._0_8_;
        plStack_1638 = plVar17;
        plStack_11e0 = plVar17;
        uStack_11d4 = uVar25;
        uStack_ed8 = uStack_1640;
        local_ed0 = plVar17;
        while( true ) {
          if (((uStack_10e8._4_4_ == uVar25) && (local_10f0 == plVar17)) && (local_1100 == plVar19))
          break;
          local_968 = 0xffffffffffffffff;
          uStack_960 = 0xffffffffffffffff;
          local_988 = 0;
          piVar31 = (int *)((longlong)(int)uStack_10e8._4_4_ * 0x250 + *local_1100);
          local_978 = 0;
          lStack_970 = 0;
          local_958 = 0;
          local_950 = 0;
          local_948[0] = 0;
          local_940 = 0;
          local_938 = 0;
          TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_930,0,0);
          local_910 = 0xffffffff;
          local_90c = 0;
          local_900 = 0;
          local_8f8 = 0;
          local_948[0] = FUN_141ec8950(piVar31);
          local_978 = local_13a4;
          lStack_970 = lStack_139c;
          local_988 = 0;
          local_980 = 0;
          if (*piVar31 == 0) {
            plVar20 = (longlong *)(piVar31 + 1);
            puVar27 = local_1274;
LAB_141ed5682:
            FUN_1419ccaa0(&local_940,puVar27,plVar20,0);
          }
          else if (*piVar31 == 1) {
            local_778 = 0;
            local_770 = 0;
            local_768 = 0;
            if (((*(longlong *)(piVar31 + 6) != 0) || (*(longlong *)(piVar31 + 8) != 0)) ||
               (piVar31[10] != 0)) {
              FUN_1419ccaa0(&local_940,local_1288,piVar31 + 6,0);
            }
            local_748 = 0;
            local_740 = 0;
            local_738 = 0;
            if (((*(longlong *)(piVar31 + 0xb) != 0) || (*(longlong *)(piVar31 + 0xd) != 0)) ||
               (piVar31[0xf] != 0)) {
              FUN_1419ccaa0(&local_940,local_1284,piVar31 + 0xb,0);
            }
            local_760 = 0;
            local_758 = 0;
            local_750 = 0;
            if (((*(longlong *)(piVar31 + 0x15) != 0) || (*(longlong *)(piVar31 + 0x17) != 0)) ||
               (piVar31[0x19] != 0)) {
              FUN_1419ccaa0(&local_940,local_1280,piVar31 + 0x15,0);
            }
            local_790 = 0;
            local_788 = 0;
            local_780 = 0;
            if (((*(longlong *)(piVar31 + 0x1a) != 0) || (*(longlong *)(piVar31 + 0x1c) != 0)) ||
               (piVar31[0x1e] != 0)) {
              FUN_1419ccaa0(&local_940,local_127c,piVar31 + 0x1a,0);
            }
            plVar20 = (longlong *)(piVar31 + 0x10);
            local_7a8 = 0;
            local_7a0 = 0;
            local_798 = 0;
            if (((*plVar20 != 0) || (*(longlong *)(piVar31 + 0x12) != 0)) || (piVar31[0x14] != 0)) {
              puVar27 = local_1278;
              goto LAB_141ed5682;
            }
          }
          local_1050 = local_948;
          local_1048 = &local_988;
          TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<unsigned_int_const_&,FPipelineCacheFileFormatPSOMetaData_const_&>_>
                    (&local_ae0,local_1270,&local_1050);
          local_1040 = local_948;
          local_1038 = piVar31;
          FUN_141eb56a0(local_848);
          local_8f8 = 0;
          if (local_900 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (&local_940);
          uStack_10e8 = CONCAT44(uStack_10e8._4_4_,(uint)uStack_10e8 & ~uStack_10f8._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_10f8);
        }
        local_12e8 = 0;
        uStack_12e4 = 1;
        local_12d8 = 0xffffffff;
        plVar19 = local_1660 + 2;
        uStack_12d4 = 0;
        uStack_12d0 = 0;
        uVar25 = 0;
        plStack_12e0 = plVar19;
        if ((int)local_1660[5] != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_12e8);
          uVar25 = *(uint *)(local_1660 + 5);
        }
        uStack_14a8._0_4_ = local_12e8;
        uStack_14a8._4_4_ = uStack_12e4;
        uStack_1498._0_4_ = local_12d8;
        uStack_1498._4_4_ = uStack_12d4;
        local_1490 = CONCAT44(uStack_12cc,uStack_12d0);
        local_11c8 = (int)uVar25 >> 5;
        bVar21 = (byte)uVar25 & 0x1f;
        uStack_11b0 = uVar25 & 0xffffffe0;
        iStack_11c4 = 1 << bVar21;
        local_14b0 = local_1660;
        uStack_1640 = CONCAT44(iStack_11c4,local_11c8);
        local_11b8 = -1 << bVar21;
        local_1648 = local_1660;
        auStack_1630._4_4_ = uVar25;
        auStack_1630._0_4_ = local_11b8;
        auStack_1630._8_4_ = uStack_11b0;
        auStack_1630._12_4_ = uStack_11ac;
        local_f08 = local_1660;
        local_14a0 = plStack_12e0;
        auVar5._4_8_ = uStack_1640;
        auVar5._0_4_ = uVar25;
        auVar42._0_8_ = auVar5._0_8_ << 0x20;
        auVar42._8_4_ = uStack_11b0;
        auVar42._12_4_ = uStack_11ac;
        local_ee8 = auVar42._8_8_;
        uStack_ef0 = auStack_1630._0_8_;
        plStack_1638 = plVar19;
        plStack_11c0 = plVar19;
        uStack_11b4 = uVar25;
        uStack_f00 = uStack_1640;
        local_ef8 = plVar19;
        while (((plVar20 = local_1540, plVar17 = local_1618,
                lVar29 = (longlong)(int)uStack_1498._4_4_, uStack_1498._4_4_ != uVar25 ||
                (local_14a0 != plVar19)) || (local_14b0 != local_1660))) {
          lVar18 = *local_14b0;
          TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
          ::FindId(&local_ae0,&local_1534,*(undefined4 *)(lVar18 + lVar29 * 0x18));
          if (local_1534 == -1) {
            lVar32 = 0;
          }
          else {
            lVar32 = (longlong)local_1534 * 0xa8 + local_ae0;
          }
          uVar30 = 0;
          uVar28 = lVar32 + 8;
          if (lVar32 == 0) {
            uVar28 = uVar30;
          }
          if (uVar28 != 0) {
            plVar17 = (longlong *)(lVar32 + 0x38);
            if (lVar32 == 0) {
              plVar17 = (longlong *)&DAT_00000030;
            }
            *plVar17 = *plVar17 + *(longlong *)(*(longlong *)(lVar18 + 8 + lVar29 * 0x18) + 0x10);
            plVar20 = *(longlong **)(lVar18 + 8 + lVar29 * 0x18);
            plVar17 = (longlong *)(lVar32 + 0x28);
            if (lVar32 == 0) {
              plVar17 = (longlong *)&DAT_00000020;
            }
            if (*plVar17 < *plVar20) {
              *plVar17 = *plVar20;
              plVar20 = *(longlong **)(lVar18 + 8 + lVar29 * 0x18);
            }
            plVar17 = (longlong *)(lVar32 + 0x30);
            if (lVar32 == 0) {
              plVar17 = (longlong *)&DAT_00000028;
            }
            if (*plVar17 < plVar20[1]) {
              *plVar17 = plVar20[1];
              plVar20 = *(longlong **)(lVar18 + 8 + lVar29 * 0x18);
            }
            puVar37 = (ulonglong *)(lVar32 + 0x40);
            if (lVar32 == 0) {
              puVar37 = (ulonglong *)&DAT_00000038;
            }
            uVar28 = uVar30;
            if (-1 < plVar20[3]) {
              uVar28 = plVar20[3];
            }
            if (-1 < (longlong)*puVar37) {
              uVar30 = *puVar37;
            }
            uVar28 = uVar28 + uVar30;
            if (0x7ffffffffffffffe < uVar28) {
              uVar28 = 0x7fffffffffffffff;
            }
            *puVar37 = uVar28;
          }
          uStack_1498._0_4_ = (uint)uStack_1498 & ~uStack_14a8._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_14a8);
        }
        plStack_12c0 = local_ad0;
        local_12c8 = 0;
        uStack_12c4 = 1;
        local_12b8 = 0xffffffff;
        uStack_12b4 = 0;
        if (local_ab8 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_12c8);
        }
        auVar10._4_8_ = uStack_12b4;
        auVar10._0_4_ = local_12b8;
        auVar9._12_4_ = uStack_12ac;
        auVar9._0_12_ = auVar10;
        local_1648 = &local_ae0;
        local_1420 = 0;
        uStack_1640 = CONCAT44(uStack_12c4,local_12c8);
        plStack_1460 = &local_ae0;
        plStack_1638 = plStack_12c0;
        local_1428 = &local_ae0;
        auStack_1630._0_8_ = auVar10._0_8_;
        local_1468 = auVar9._8_8_;
        uStack_1440 = auStack_1630._0_8_;
        iVar14 = (int)uStack_12b4;
        auStack_1630 = auVar9;
        local_1458 = local_1648;
        uStack_1450 = uStack_1640;
        local_1448 = plStack_1638;
        local_1438 = local_1468;
        uStack_1430 = plStack_1460;
        if (iVar14 < (int)plStack_12c0[3]) {
          do {
            plVar17 = local_1458;
            lVar29 = (longlong)iVar14 * 0xa8;
            uVar2 = *(undefined4 *)(lVar29 + *local_1458);
            FUN_141ec5c60(local_1660,&local_1514,uVar2);
            if (((local_1514 == -1) ||
                (lVar18 = *local_1660 + (longlong)local_1514 * 0x18, lVar18 == 0)) ||
               ((lVar18 = *(longlong *)(lVar18 + 8), lVar18 == 0 ||
                (*(longlong *)(lVar18 + 0x18) < 1)))) {
              TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
              ::Remove(uStack_1430,iVar14);
              local_1420 = CONCAT11(local_1420._1_1_,1);
            }
            else {
              piVar31 = (int *)FUN_141ec5ce0(local_848,local_1268,uVar2);
              if (*piVar31 == -1) {
                local_4e4 = 0;
                local_4dc = 0;
                local_4d4 = 0;
                FUN_141eb9bb0(local_4d0);
                local_2a4 = 0;
                lVar18 = *plVar17;
                iVar24 = *(int *)(lVar18 + 0x20 + lVar29);
                iVar34 = *(int *)(lVar18 + 0x1c + lVar29);
                iVar23 = *(int *)(lVar18 + 0x24 + lVar29);
                iVar1 = *(int *)(lVar18 + 0x18 + lVar29);
                if (((*(int *)((longlong)plVar20 + 0xdc) == iVar34 && (int)plVar20[0x1c] == iVar24)
                    && *(int *)((longlong)plVar20 + 0xe4) == iVar23) && iVar1 == (int)plVar20[0x1b])
                {
                  local_bb8 = *(undefined8 *)(lVar18 + 8 + lVar29);
                  FUN_141eba810(local_c48,local_4e8);
                }
                else if ((((int)plVar20[0x1e] == iVar24 &&
                          *(int *)((longlong)plVar20 + 0xec) == iVar34) &&
                         *(int *)((longlong)plVar20 + 0xf4) == iVar23) &&
                         iVar1 == (int)plVar20[0x1d]) {
                  local_c68 = *(undefined8 *)(lVar18 + 8 + lVar29);
                  FUN_141eba810(local_cf8,local_4e8);
                }
                else {
                  TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                  ::Remove(uStack_1430,iVar14);
                  local_1420 = CONCAT11(local_1420._1_1_,1);
                }
                local_1028 = local_4e8;
                local_1030 = *plVar17 + lVar29;
                FUN_141eb56a0(local_848,local_1264,&local_1030,0);
              }
            }
            uStack_1440 = CONCAT44(uStack_1440._4_4_,(uint)uStack_1440 & ~uStack_1450._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1450);
            plVar17 = local_1618;
            iVar14 = uStack_1440._4_4_;
          } while (uStack_1440._4_4_ < (int)local_1448[3]);
          if (((char)local_1420 != '\0') && (local_1420._1_1_ != '\0')) {
            TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
            ::ConditionalRehash(local_1428,
                                (int)local_1428[1] - *(int *)((longlong)local_1428 + 0x34),1);
          }
        }
        local_1668[0] = (int)local_ad8 - local_aac;
        FPipelineCacheFile::SortMetaData(&local_ae0,param_6);
        local_ae8[0] = param_6;
        plVar19 = (longlong *)(**(code **)(*plVar17 + 0x90))(plVar17);
        local_12a8 = 0;
        plStack_12a0 = local_ad0;
        uStack_12a4 = 1;
        local_1298 = 0xffffffff;
        uStack_1294 = 0;
        uStack_1290 = 0;
        iVar14 = local_ab8;
        if (local_ab8 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_12a8);
          iVar14 = local_ab8;
        }
        uStack_1640 = CONCAT44(uStack_12a4,local_12a8);
        local_1648 = &local_ae0;
        uStack_1498 = CONCAT44(uStack_1294,local_1298);
        local_1490 = CONCAT44(uStack_128c,uStack_1290);
        local_f38 = -1 << ((byte)iVar14 & 0x1f);
        local_14a0 = plStack_12a0;
        plStack_1638 = plStack_12a0;
        auStack_1630._8_8_ = local_1490;
        auStack_1630._0_8_ = uStack_1498;
        local_14b0 = local_1648;
        uStack_14a8 = uStack_1640;
        while( true ) {
          lVar29 = 0;
          if (((auStack_1630._4_4_ == iVar14) && (plStack_1638 == local_ad0)) &&
             (local_1648 == &local_ae0)) break;
          puVar39 = (undefined4 *)((longlong)(int)auStack_1630._4_4_ * 0xa8 + *local_1648);
          FUN_141ec5ce0(local_848,&local_1518,*puVar39);
          if (local_1518 != -1) {
            lVar29 = (longlong)local_1518 * 0x254 + local_848[0];
          }
          (**(code **)(*plVar17 + 0xa8))(plVar17,plVar19);
          *(longlong **)(puVar39 + 2) = plVar19;
          *(longlong *)(puVar39 + 6) = local_13a4;
          *(longlong *)(puVar39 + 8) = lStack_139c;
          lVar18 = (**(code **)(*plVar17 + 0x90))(plVar17);
          FUN_141eba810(plVar17,lVar29 + 4);
          lVar29 = (**(code **)(*plVar17 + 0x90))(plVar17);
          *(longlong *)(puVar39 + 4) = lVar29 - lVar18;
          plVar19 = (longlong *)((longlong)plVar19 + (lVar29 - lVar18));
          auStack_1630._0_4_ = auStack_1630._0_4_ & ~uStack_1640._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1640);
        }
        local_1390 = plVar19;
        (**(code **)(*plVar17 + 0xa8))(plVar17,plVar19);
        FUN_141ebb310(plVar17,local_ae8);
        local_800 = 0;
        if (local_808 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (local_848);
        TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
        ::
        ~TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                  (&local_ae0);
        FArchive::~FArchive(local_cf8);
        FArchive::~FArchive(local_c48);
        iVar14 = local_1668[0];
      }
      else {
        iVar14 = 0;
        if (local_1620 == 2) {
          local_7f8[0] = 0;
          local_7f8[1] = 0;
          TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_7e8,0,0);
          local_7c8 = 0xffffffff;
          local_7c4 = 0;
          plVar17 = param_1 + 0x13;
          local_7b8 = 0;
          local_7b0 = 0;
          local_1388 = 0;
          uStack_1384 = 1;
          local_1378 = 0xffffffff;
          uStack_1374 = 0;
          uStack_1370 = 0;
          uVar25 = 0;
          plStack_1380 = plVar17;
          if ((int)param_1[0x16] != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1388);
            uVar25 = *(uint *)(param_1 + 0x16);
          }
          uStack_1198 = CONCAT44(uStack_1384,local_1388);
          plVar19 = param_1 + 0x11;
          uStack_1188 = CONCAT44(uStack_1374,local_1378);
          local_1180 = CONCAT44(uStack_136c,uStack_1370);
          local_1208 = (int)uVar25 >> 5;
          bVar21 = (byte)uVar25 & 0x1f;
          iStack_1204 = 1 << bVar21;
          uStack_11f0 = uVar25 & 0xffffffe0;
          local_11f8 = -1 << bVar21;
          uStack_1640 = CONCAT44(iStack_1204,local_1208);
          auStack_1630._4_4_ = uVar25;
          auStack_1630._0_4_ = local_11f8;
          auStack_1630._8_4_ = uStack_11f0;
          auStack_1630._12_4_ = uStack_11ec;
          local_1190 = plStack_1380;
          auVar3._4_8_ = uStack_1640;
          auVar3._0_4_ = uVar25;
          auVar40._0_8_ = auVar3._0_8_ << 0x20;
          auVar40._8_4_ = uStack_11f0;
          auVar40._12_4_ = uStack_11ec;
          local_e98 = auVar40._8_8_;
          uStack_ea0 = auStack_1630._0_8_;
          local_1648 = plVar19;
          plStack_1638 = plVar17;
          plStack_1200 = plVar17;
          uStack_11f4 = uVar25;
          local_11a0 = plVar19;
          local_eb8 = plVar19;
          uStack_eb0 = uStack_1640;
          local_ea8 = plVar17;
          while( true ) {
            plVar20 = local_1610;
            if (((uStack_1188._4_4_ == uVar25) && (local_1190 == plVar17)) &&
               (local_11a0 == plVar19)) break;
            lVar29 = (longlong)(int)uStack_1188._4_4_ * 0xa8 + *local_11a0;
            local_294 = 0;
            local_28c = 0;
            local_284 = 0;
            FUN_141eb9bb0(local_280);
            local_54 = 0;
            if (((*(int *)(lVar29 + 0x24) == *(int *)((longlong)param_1 + 0xe4) &&
                 *(int *)(lVar29 + 0x20) == (int)param_1[0x1c]) &&
                *(int *)(lVar29 + 0x1c) == *(int *)((longlong)param_1 + 0xdc)) &&
                (int)param_1[0x1b] == *(int *)(lVar29 + 0x18)) {
              local_1508 = *(int *)(lVar29 + 0x10);
              _Size = (size_t)local_1508;
              pvVar33 = (void *)(*(int *)(lVar29 + 8) + local_15d8);
              local_1510 = (void *)0x0;
              if (local_1508 == 0) {
                local_1504 = 0;
              }
              else {
                TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_1510,local_1508,0);
                _guard_xfg_dispatch_icall_nop(local_1510,pvVar33,_Size);
              }
              FMemoryReader::FMemoryReader(local_b98,&local_1510,0);
              FArchiveState::SetGameNetVer(local_b98,0xb);
              FUN_141eba810(local_b98,local_298);
              local_1068 = local_298;
              local_1070 = lVar29;
              FUN_141eb56a0(local_7f8);
              FArchive::~FArchive(local_b98);
              if (local_1510 != (void *)0x0) {
                FMemory::Free();
              }
            }
            uStack_1188 = CONCAT44(uStack_1188._4_4_,(uint)uStack_1188 & ~uStack_1198._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1198);
          }
          local_1368 = 0;
          uStack_1364 = 1;
          local_1358 = 0xffffffff;
          plVar17 = local_1610 + 2;
          uStack_1354 = 0;
          uStack_1350 = 0;
          iVar14 = 0;
          plStack_1360 = plVar17;
          if ((int)local_1610[5] != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1368);
            iVar14 = (int)plVar20[5];
          }
          plVar19 = local_1610;
          uStack_1640 = CONCAT44(uStack_1364,local_1368);
          uStack_1160 = CONCAT44(uStack_1354,local_1358);
          local_1158 = CONCAT44(uStack_134c,uStack_1350);
          local_1648 = local_1610;
          plStack_1638 = plStack_1360;
          local_f18 = -1 << ((byte)iVar14 & 0x1f);
          auStack_1630._8_8_ = local_1158;
          auStack_1630._0_8_ = uStack_1160;
          local_1178 = local_1610;
          local_1168 = plStack_1360;
          uStack_1170 = uStack_1640;
          iStack_f14 = iVar14;
          while( true ) {
            if (((uStack_1160._4_4_ == iVar14) && (local_1168 == plVar17)) &&
               (local_1178 == plVar19)) break;
            local_a08 = 0xffffffffffffffff;
            uStack_a00 = 0xffffffffffffffff;
            local_a28 = 0;
            piVar31 = (int *)((longlong)uStack_1160._4_4_ * 0x250 + *local_1178);
            local_a18 = 0;
            lStack_a10 = 0;
            local_9f8 = 0;
            local_9f0 = 0;
            local_9e8[0] = 0;
            local_9e0 = 0;
            local_9d8 = 0;
            TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>
                      (local_9d0,0,0);
            local_9b0 = 0xffffffff;
            local_9ac = 0;
            local_9a0 = 0;
            local_998 = 0;
            local_9e8[0] = FUN_141ec8950(piVar31);
            local_a18 = param_1[0x1b];
            lStack_a10 = param_1[0x1c];
            local_a28 = 0;
            local_a20 = 0;
            if (*piVar31 == 0) {
              plVar20 = (longlong *)(piVar31 + 1);
              puVar27 = local_10d0;
LAB_141ed48c4:
              FUN_1419ccaa0(&local_9e0,puVar27,plVar20,0);
            }
            else if (*piVar31 == 1) {
              if (((*(longlong *)(piVar31 + 6) != 0) || (*(longlong *)(piVar31 + 8) != 0)) ||
                 (piVar31[10] != 0)) {
                FUN_1419ccaa0(&local_9e0,local_1214,piVar31 + 6,0);
              }
              if (((*(longlong *)(piVar31 + 0xb) != 0) || (*(longlong *)(piVar31 + 0xd) != 0)) ||
                 (piVar31[0xf] != 0)) {
                FUN_1419ccaa0(&local_9e0,local_1210,piVar31 + 0xb,0);
              }
              if (((*(longlong *)(piVar31 + 0x15) != 0) || (*(longlong *)(piVar31 + 0x17) != 0)) ||
                 (piVar31[0x19] != 0)) {
                FUN_1419ccaa0(&local_9e0,local_11a8,piVar31 + 0x15,0);
              }
              if (((*(longlong *)(piVar31 + 0x1a) != 0) || (*(longlong *)(piVar31 + 0x1c) != 0)) ||
                 (piVar31[0x1e] != 0)) {
                FUN_1419ccaa0(&local_9e0,local_10d8,piVar31 + 0x1a,0);
              }
              plVar20 = (longlong *)(piVar31 + 0x10);
              if (((*plVar20 != 0) || (*(longlong *)(piVar31 + 0x12) != 0)) || (piVar31[0x14] != 0))
              {
                puVar27 = local_10d4;
                goto LAB_141ed48c4;
              }
            }
            local_1090 = local_9e8;
            local_1088 = &local_a28;
            TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<unsigned_int_const_&,FPipelineCacheFileFormatPSOMetaData_const_&>_>
                      (param_1 + 0x11,local_10cc,&local_1090);
            local_1060 = local_9e8;
            local_1058 = piVar31;
            FUN_141eb56a0(local_7f8);
            local_998 = 0;
            if (local_9a0 != 0) {
              FMemory::Free();
            }
            TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                      (&local_9e0);
            uStack_1160 = CONCAT44(uStack_1160._4_4_,(uint)uStack_1160 & ~uStack_1170._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1170);
          }
          local_a88[0] = (int)param_1[0x10];
          local_a80 = 0;
          local_a78 = 0;
          TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_a70,0,0);
          local_a50 = 0xffffffff;
          local_a4c = 0;
          local_a40 = 0;
          local_a38 = 0;
          TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
          ::operator=(&local_a80,param_1 + 0x11);
          local_1348 = 0;
          uStack_1344 = 1;
          local_1338 = 0xffffffff;
          plVar19 = local_1660 + 2;
          uStack_1334 = 0;
          uStack_1330 = 0;
          iVar14 = 0;
          plStack_1340 = plVar19;
          if ((int)local_1660[5] != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1348);
            iVar14 = (int)local_1660[5];
          }
          uStack_1640 = CONCAT44(uStack_1344,local_1348);
          uStack_1138 = CONCAT44(uStack_1334,local_1338);
          local_1130 = CONCAT44(uStack_132c,uStack_1330);
          local_1648 = local_1660;
          plStack_1638 = plStack_1340;
          local_f58 = -1 << ((byte)iVar14 & 0x1f);
          auStack_1630._8_8_ = local_1130;
          auStack_1630._0_8_ = uStack_1138;
          local_1150 = local_1660;
          local_1140 = plStack_1340;
          uStack_1148 = uStack_1640;
          iStack_f54 = iVar14;
          while( true ) {
            plVar20 = local_1540;
            plVar17 = local_1618;
            lVar29 = (longlong)uStack_1138._4_4_;
            if (((uStack_1138._4_4_ == iVar14) && (local_1140 == plVar19)) &&
               (local_1150 == local_1660)) break;
            lVar18 = *local_1150;
            TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
            ::FindId(&local_a80,local_1668);
            if (local_1668[0] == -1) {
              lVar32 = 0;
            }
            else {
              lVar32 = (longlong)local_1668[0] * 0xa8 + local_a80;
            }
            uVar30 = 0;
            uVar28 = lVar32 + 8;
            if (lVar32 == 0) {
              uVar28 = uVar30;
            }
            if (uVar28 != 0) {
              plVar17 = (longlong *)(lVar32 + 0x38);
              if (lVar32 == 0) {
                plVar17 = (longlong *)&DAT_00000030;
              }
              *plVar17 = *plVar17 + *(longlong *)(*(longlong *)(lVar18 + 8 + lVar29 * 0x18) + 0x10);
              plVar20 = *(longlong **)(lVar18 + 8 + lVar29 * 0x18);
              plVar17 = (longlong *)(lVar32 + 0x28);
              if (lVar32 == 0) {
                plVar17 = (longlong *)&DAT_00000020;
              }
              if (*plVar17 < *plVar20) {
                *plVar17 = *plVar20;
                plVar20 = *(longlong **)(lVar18 + 8 + lVar29 * 0x18);
              }
              plVar17 = (longlong *)(lVar32 + 0x30);
              if (lVar32 == 0) {
                plVar17 = (longlong *)&DAT_00000028;
              }
              if (*plVar17 < plVar20[1]) {
                *plVar17 = plVar20[1];
                plVar20 = *(longlong **)(lVar18 + 8 + lVar29 * 0x18);
              }
              puVar37 = (ulonglong *)(lVar32 + 0x40);
              if (lVar32 == 0) {
                puVar37 = (ulonglong *)&DAT_00000038;
              }
              uVar28 = uVar30;
              if (-1 < plVar20[3]) {
                uVar28 = plVar20[3];
              }
              if (-1 < (longlong)*puVar37) {
                uVar30 = *puVar37;
              }
              uVar28 = uVar28 + uVar30;
              if (0x7ffffffffffffffe < uVar28) {
                uVar28 = 0x7fffffffffffffff;
              }
              *puVar37 = uVar28;
            }
            uStack_1138 = CONCAT44(uStack_1138._4_4_,(uint)uStack_1138 & ~uStack_1148._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1148);
          }
          plStack_1320 = local_a70;
          local_1328 = 0;
          uStack_1324 = 1;
          local_1318 = 0xffffffff;
          uStack_1314 = 0;
          if (local_a58 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1328);
          }
          auVar8._4_8_ = uStack_1314;
          auVar8._0_4_ = local_1318;
          auVar7._12_4_ = uStack_130c;
          auVar7._0_12_ = auVar8;
          local_1648 = &local_a80;
          local_13c0 = 0;
          uStack_1640 = CONCAT44(uStack_1324,local_1328);
          local_1098 = &local_a80;
          plStack_1638 = plStack_1320;
          local_13c8 = &local_a80;
          auStack_1630._0_8_ = auVar8._0_8_;
          local_13d8 = auVar7._8_8_;
          uStack_13e0 = auStack_1630._0_8_;
          iVar14 = (int)uStack_1314;
          auStack_1630 = auVar7;
          local_13f8 = local_1648;
          uStack_13f0 = uStack_1640;
          local_13e8 = plStack_1638;
          uStack_13d0 = local_1098;
          if (iVar14 < (int)plStack_1320[3]) {
            do {
              lVar32 = (longlong)iVar14 * 0xa8;
              lVar29 = *local_13f8;
              TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
              ::FindId(plVar20 + 6,&local_15fc,*(undefined4 *)(lVar32 + lVar29));
              lVar18 = 0;
              if (local_15fc != -1) {
                lVar18 = (longlong)local_15fc * 0xa8 + plVar20[6];
              }
              iVar24 = *(int *)(lVar32 + 0x24 + lVar29);
              iVar34 = *(int *)(lVar32 + 0x18 + lVar29);
              iVar23 = *(int *)(lVar32 + 0x1c + lVar29);
              iVar1 = *(int *)(lVar32 + 0x20 + lVar29);
              lVar35 = lVar18 + 8;
              if (lVar18 == 0) {
                lVar35 = 0;
              }
              if ((((((iVar24 != *(int *)((longlong)plVar20 + 0xe4) || iVar34 != (int)plVar20[0x1b])
                     || *(int *)((longlong)plVar20 + 0xdc) != iVar23) || (int)plVar20[0x1c] != iVar1
                    ) && (((*(int *)((longlong)plVar20 + 0xf4) != iVar24 ||
                           (int)plVar20[0x1e] != iVar1) ||
                          *(int *)((longlong)plVar20 + 0xec) != iVar23) ||
                          iVar34 != (int)plVar20[0x1d])) ||
                  (lVar29 = *(longlong *)(lVar32 + 0x40 + lVar29), lVar29 < 0)) ||
                 ((lVar35 != 0 && (lVar29 == *(longlong *)(lVar35 + 0x38))))) {
                TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                ::Remove(uStack_13d0,iVar14);
                local_13c0 = CONCAT11(local_13c0._1_1_,1);
              }
              uStack_13e0 = CONCAT44(uStack_13e0._4_4_,(uint)uStack_13e0 & ~uStack_13f0._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_13f0);
              iVar14 = uStack_13e0._4_4_;
            } while (uStack_13e0._4_4_ < (int)local_13e8[3]);
            if (((char)local_13c0 != '\0') && (local_13c0._1_1_ != '\0')) {
              TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
              ::ConditionalRehash(local_13c8,
                                  (int)local_13c8[1] - *(int *)((longlong)local_13c8 + 0x34),1);
            }
          }
          local_1668[0] = (int)local_a78 - local_a4c;
          FPipelineCacheFile::SortMetaData(&local_a80,param_6);
          *(int *)(plVar20 + 0x10) = param_6;
          local_a88[0] = param_6;
          plVar19 = (longlong *)(**(code **)(*plVar17 + 0x90))(plVar17);
          plVar20[4] = (longlong)plVar19;
          local_1660 = plVar19;
          puVar16 = (undefined8 *)
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>(local_d18,local_a70,0);
          local_1648 = &local_a80;
          local_15fc = local_a58;
          uStack_1640 = *puVar16;
          plStack_1638 = (longlong *)puVar16[1];
          uStack_1110 = *(undefined8 *)*(undefined1 (*) [16])(puVar16 + 2);
          local_1108 = puVar16[3];
          auStack_1630 = *(undefined1 (*) [16])(puVar16 + 2);
          local_1128 = local_1648;
          uStack_1120 = uStack_1640;
          local_1118 = plStack_1638;
LAB_141ed4ec0:
          if (((uStack_1110._4_4_ != local_15fc) || (local_1118 != local_a70)) ||
             (local_1128 != &local_a80)) {
            puVar39 = (undefined4 *)((longlong)uStack_1110._4_4_ * 0xa8 + *local_1128);
            local_14c0 = puVar39;
            TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
            ::FindId(plVar20 + 0x11,&local_1520);
            if (local_1520 == -1) {
              lVar29 = 0;
            }
            else {
              lVar29 = (longlong)local_1520 * 0xa8 + plVar20[0x11];
            }
            lVar18 = 0;
            plVar17 = local_1618;
            if (((*(int *)((longlong)plVar20 + 0xe4) == *(int *)(lVar29 + 0x24) &&
                 (int)plVar20[0x1c] == *(int *)(lVar29 + 0x20)) &&
                *(int *)((longlong)plVar20 + 0xdc) == *(int *)(lVar29 + 0x1c)) &&
                *(int *)(lVar29 + 0x18) == (int)plVar20[0x1b]) {
              *(longlong **)(lVar29 + 8) = plVar19;
              *(longlong **)(puVar39 + 2) = plVar19;
              FUN_141ec5ce0(local_7f8,&local_1538,*puVar39);
              if (local_1538 != -1) {
                lVar18 = (longlong)local_1538 * 0x254 + local_7f8[0];
              }
              lVar18 = lVar18 + 4;
              (**(code **)(*local_1618 + 0xa8))(local_1618,plVar19);
              local_14e0[0] = 0;
              local_14e0[1] = 0;
              local_14b8 = 0;
              FArchive::FArchive(local_e88);
              local_df8 = 0;
              local_e88[0] = &PTR_FUN_143f4a100;
              local_df0 = local_14e0;
              local_de8 = local_14b8;
              FArchive::SetIsSaving(local_e88,1);
              FArchive::SetIsPersistent(local_e88,0);
              FArchiveState::SetGameNetVer(local_e88,0xb);
              FUN_141eba810(local_e88,lVar18);
              plVar17 = local_1610;
              if ((int)local_1610[1] != *(int *)((longlong)local_1610 + 0x34)) {
                iVar14 = FUN_141ec8950(lVar18);
                local_1548 = (longlong)(int)plVar17[9] - 1;
                local_1540 = (longlong *)plVar17[8];
                if ((longlong *)plVar17[8] == (longlong *)0x0) {
                  local_1540 = plVar17 + 7;
                }
                iVar14 = *(int *)((longlong)local_1540 + ((longlong)iVar14 & local_1548) * 4);
                if (iVar14 != -1) {
                  lVar32 = *plVar17;
                  do {
                    lVar35 = (longlong)iVar14 * 0x250 + lVar32;
                    cVar12 = FUN_141ebbd90(lVar35,lVar18);
                    if (cVar12 != '\0') {
                      if ((int)local_1610[1] == *(int *)((longlong)local_1610 + 0x34))
                      goto LAB_141ed5140;
                      lVar18 = (longlong)iVar14 * 0x250;
                      piVar31 = (int *)((longlong)local_1540 +
                                       ((longlong)*(int *)(lVar18 + 0x24c + lVar32) & local_1548) *
                                       4);
                      iVar24 = *piVar31;
                      if (iVar24 != -1) goto LAB_141ed5110;
                      goto LAB_141ed5140;
                    }
                    iVar14 = *(int *)(lVar35 + 0x248);
                    plVar19 = local_1660;
                  } while (iVar14 != -1);
                }
              }
              goto LAB_141ed5155;
            }
            goto LAB_141ed51bf;
          }
          plVar20[4] = (longlong)plVar19;
          local_1390 = plVar19;
          (**(code **)(*plVar17 + 0xa8))(plVar17,plVar19);
          FUN_141ebb310(plVar17,local_a88);
          FPipelineCacheFileFormatTOC::~FPipelineCacheFileFormatTOC(local_a88);
          TMap<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
          ::
          ~TMap<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
                    (local_7f8);
          iVar14 = local_1668[0];
        }
      }
      (**(code **)(*plVar17 + 0xa8))(plVar17,0);
      FUN_141eba640(plVar17,&local_13b8);
      (**(code **)(*plVar17 + 0xe0))(plVar17);
      cVar12 = -((char)~*(byte *)(plVar17 + 5) >> 7);
      cVar13 = (**(code **)(*plVar17 + 0xe8))(plVar17);
      puVar26 = local_1608;
      iVar24 = local_161c;
      if (cVar13 == '\0') {
        cVar12 = '\0';
LAB_141ed6416:
        (**(code **)*plVar17)(plVar17,1);
        plVar17 = (longlong *)FUN_1415c3d50();
        local_1688 = local_1688 & 0xffffffffffffff00;
        puVar36 = &DAT_143f3eda8;
        if (iVar24 != 0) {
          puVar36 = puVar26;
        }
        (**(code **)(*plVar17 + 0x30))(plVar17,puVar36,0,0);
        QueryPerformanceCounter(&local_ff8);
      }
      else {
        if (cVar12 == '\0') goto LAB_141ed6416;
        if (local_1620 == 1) {
          if (iVar14 == 0) {
            (**(code **)*plVar17)(plVar17,1);
            QueryPerformanceCounter(&local_fe0);
            if (local_1608 != (undefined2 *)0x0) {
              FMemory::Free(local_1608);
            }
            if (local_1530 != 0) {
              FMemory::Free();
            }
            if (local_15d8 != 0) {
              FMemory::Free();
            }
            if (local_15b0 != 0) {
              FMemory::Free();
            }
            if (local_15f8 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_1558 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_15c8 != (undefined2 *)0x0) {
              FMemory::Free(local_15c8);
            }
            cVar12 = '\0';
            goto LAB_141ed421e;
          }
          local_1008 = local_1530;
          puVar36 = &DAT_143f3eda8;
          if (local_161c != 0) {
            puVar36 = local_1608;
          }
          uStack_1000 = (undefined4)local_1528;
          uStack_f70 = CONCAT44(uStack_ffc,(undefined4)local_1528);
          local_f78 = local_1530;
          uVar15 = FUN_1415c3d50();
          cVar12 = FUN_14167ef40(&local_f78,puVar36,uVar15,0);
        }
        if (cVar12 == '\0') goto LAB_141ed6416;
        (**(code **)*plVar17)(plVar17,1);
        puVar36 = &DAT_143f3eda8;
        if (iVar24 != 0) {
          puVar36 = puVar26;
        }
        puVar22 = &DAT_143f3eda8;
        if (local_1650 != 0) {
          puVar22 = local_1658;
        }
        iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar22,puVar36);
        if (iVar14 == 0) {
LAB_141ed65d8:
          QueryPerformanceCounter(&local_ff0);
          if ((local_1600 != 0) && (local_1600 != 1)) {
            plVar17 = (longlong *)FUN_1415c3d50();
            local_1688 = local_1688 & 0xffffffffffffff00;
            (**(code **)(*plVar17 + 0x30))(plVar17,local_15c8,0,0);
          }
        }
        else {
          plVar17 = (longlong *)FUN_1415c3d50();
          local_1678 = 1;
          local_1680 = CONCAT71(local_1680._1_7_,1);
          puVar36 = &DAT_143f3eda8;
          if (iVar24 != 0) {
            puVar36 = puVar26;
          }
          local_1688 = CONCAT71(local_1688._1_7_,1);
          puVar22 = &DAT_143f3eda8;
          if (local_1650 != 0) {
            puVar22 = local_1658;
          }
          cVar13 = (**(code **)(*plVar17 + 0x40))(plVar17,puVar22,puVar36,1);
          if (cVar13 != '\0') goto LAB_141ed65d8;
          QueryPerformanceCounter(&local_fe8);
        }
      }
    }
    if (puVar26 != (undefined2 *)0x0) {
      FMemory::Free(puVar26);
    }
    if (local_1530 != 0) {
      FMemory::Free();
    }
    if (local_15d8 != 0) {
      FMemory::Free();
    }
    if (local_15b0 != 0) {
      FMemory::Free();
    }
    if (local_15f8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    puVar36 = local_15c8;
    if (local_1558 != (undefined2 *)0x0) {
      FMemory::Free();
      puVar36 = local_15c8;
    }
  }
  else {
    local_15a0 = (undefined2 *)0x0;
    local_1598._0_4_ = local_1650;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_15a0,(5 - (uint)(local_1650 != 0)) + local_1650,0);
    puVar36 = local_15a0;
    local_15c8 = local_15a0;
    _guard_xfg_dispatch_icall_nop(local_15a0,puVar26,(longlong)iVar14 * 2);
    iVar14 = (int)local_1598;
    lVar29 = (longlong)(int)local_1598;
    local_1600 = (5 - (uint)((int)local_1598 != 0)) + (int)local_1598;
    local_1598 = CONCAT44(local_1598._4_4_,local_1600);
    iVar34 = local_1600;
    if (local_1598._4_4_ < local_1600) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_15a0);
      local_15c8 = local_15a0;
      puVar36 = local_15a0;
      iVar34 = (int)local_1598;
    }
    local_15a0 = (undefined2 *)0x0;
    local_1598 = 0;
    local_1080 = 0;
    local_1078 = 0;
    lVar29 = lVar29 - (ulonglong)(iVar14 != 0);
    *(undefined8 *)(puVar36 + lVar29) = 0x6c006e006a002e;
    puVar36[lVar29 + 4] = 0;
    local_1600 = iVar34;
    plVar17 = (longlong *)FUN_1415c3d50();
    puVar26 = &DAT_143f3eda8;
    if (iVar34 != 0) {
      puVar26 = puVar36;
    }
    plVar17 = (longlong *)(**(code **)(*plVar17 + 0x20))(plVar17,puVar26,0);
    local_10ac = param_1[0x1b];
    lStack_10a4 = param_1[0x1c];
    local_10b4 = DAT_146ab6384;
    local_10c0 = 0x5049504543414348;
    local_10b0 = (undefined1)(int)param_1[2];
    local_1098 = (longlong *)0x0;
    local_10b8 = 0xb;
    FUN_141eba640(plVar17,&local_10c0);
    (**(code **)(*plVar17 + 0xe8))(plVar17);
    (**(code **)*plVar17)(plVar17,1);
    plVar17 = (longlong *)FUN_1415c3d50();
    puVar26 = &DAT_143f3eda8;
    if (iVar34 != 0) {
      puVar26 = puVar36;
    }
    cVar13 = (**(code **)(*plVar17 + 0x48))(plVar17,puVar26);
    cVar12 = '\0';
    if (cVar13 != '\0') goto LAB_141ed3a52;
  }
  if (puVar36 != (undefined2 *)0x0) {
    FMemory::Free(puVar36);
  }
LAB_141ed421e:
  if (local_1500 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_1658 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return cVar12;
  while( true ) {
    piVar31 = (int *)((longlong)iVar24 * 0x250 + 0x248 + lVar32);
    iVar24 = *piVar31;
    if (iVar24 == -1) break;
LAB_141ed5110:
    if (iVar24 == iVar14) {
      *piVar31 = *(int *)(lVar18 + 0x248 + lVar32);
      break;
    }
  }
LAB_141ed5140:
  FUN_141ed2d40(local_1610,iVar14,1);
  plVar19 = local_1660;
LAB_141ed5155:
  plVar17 = local_1618;
  (**(code **)(*local_1618 + 0x50))(local_1618,local_14e0[0]);
  *(longlong *)(lVar29 + 0x10) = (longlong)(int)local_df0[1];
  plVar19 = (longlong *)((longlong)plVar19 + (longlong)(int)local_df0[1]);
  *(longlong *)(local_14c0 + 4) = (longlong)(int)local_df0[1];
  local_1660 = plVar19;
  FArchive::~FArchive(local_e88);
  if (local_14e0[0] != 0) {
    FMemory::Free();
  }
LAB_141ed51bf:
  uStack_1110 = CONCAT44(uStack_1110._4_4_,(uint)uStack_1110 & ~uStack_1120._4_4_);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1120);
  goto LAB_141ed4ec0;
}



// FUNCTION 141ed6660 SavePipelineFileCache body=445 status=ok
// SIG undefined SavePipelineFileCache(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FPipelineFileCache::SavePipelineFileCache(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 local_res18 [2];
  longlong local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  int local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  cVar2 = '\0';
  cVar1 = FUN_141ec9f60();
  if ((cVar1 != '\0') && (cVar1 = FUN_141ecac10(), cVar1 != '\0')) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
    if (DAT_146ab6360 != 0) {
      local_res18[0] = *(undefined8 *)(DAT_146ab6360 + 0x18);
      puVar3 = (undefined8 *)FName::ToString(local_res18,local_18);
      puVar7 = &DAT_143f3eda8;
      if (*(int *)(puVar3 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar3;
      }
      if (*(int *)(param_1 + 1) != 0) {
        puVar7 = (undefined2 *)*param_1;
      }
      FString::PrintfImpl(&local_38,L"%s_%s.upipelinecache",puVar7,puVar8);
      plVar4 = (longlong *)FUN_14167d1b0(local_28);
      iVar6 = 0;
      if (local_30 != 0) {
        iVar6 = local_30 + -1;
      }
      if (((int)plVar4[1] != 0) || (iVar5 = 2, iVar6 == -1)) {
        iVar5 = 1;
      }
      local_48 = *plVar4;
      *plVar4 = 0;
      local_40 = (int)plVar4[1];
      local_3c = *(int *)((longlong)plVar4 + 0xc);
      plVar4[1] = 0;
      if (local_3c < iVar5 + local_40 + iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
      }
      FString::PathAppend(&local_48,local_38,iVar6);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      cVar2 = FUN_141ed3660(DAT_146ab6360,&local_48,param_2,&DAT_1464c9ec0,&DAT_1464c9f10,
                            DAT_146ab636c);
      if (cVar2 != '\0') {
        DAT_146ab6368 = DAT_1464c9f18 - _DAT_1464c9f44;
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
  }
  return cVar2;
}



// FUNCTION 141ed6820 SetCurrentStat body=115 status=ok
// SIG undefined SetCurrentStat(void)

void FRHICommandListImmediate::SetCurrentStat(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar1 = puVar2 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar2;
  *(undefined8 **)(param_1 + 8) = puVar2 + 1;
  puVar2[1] = 0;
  *puVar2 = &PTR_StartProfileThreadUsage_144edb390;
  return;
}



// FUNCTION 141ed68a0 SetDepthBoundsTest body=531 status=ok
// SIG undefined SetDepthBoundsTest(void)

void SetDepthBoundsTest(longlong param_1,float param_2,float param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  
  if (DAT_146ab62ec != '\0') {
    fVar3 = (*(float *)(param_4 + 8) * 0.0 + *(float *)(param_4 + 0x18) * 0.0 +
            param_2 * *(float *)(param_4 + 0x28) + *(float *)(param_4 + 0x38) * 1.0) /
            (*(float *)(param_4 + 0xc) * 0.0 + *(float *)(param_4 + 0x1c) * 0.0 +
            param_2 * *(float *)(param_4 + 0x2c) + *(float *)(param_4 + 0x3c) * 1.0);
    fVar4 = (*(float *)(param_4 + 8) * 0.0 + *(float *)(param_4 + 0x18) * 0.0 +
            param_3 * *(float *)(param_4 + 0x28) + *(float *)(param_4 + 0x38) * 1.0) /
            (*(float *)(param_4 + 0xc) * 0.0 + *(float *)(param_4 + 0x1c) * 0.0 +
            param_3 * *(float *)(param_4 + 0x2c) + *(float *)(param_4 + 0x3c) * 1.0);
    if (0.0 <= fVar4) {
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
    }
    else {
      fVar4 = 0.0;
    }
    if (0.0 <= fVar3) {
      if (1.0 <= fVar3) {
        fVar3 = 1.0;
      }
    }
    else {
      fVar3 = 0.0;
    }
    if (fVar3 <= fVar4) {
      fVar3 = 1.0;
      fVar4 = 0.0;
    }
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 3;
    if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar1 = puVar2 + 3;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar2;
    *(undefined8 **)(param_1 + 8) = puVar2 + 1;
    puVar2[1] = 0;
    *(float *)(puVar2 + 2) = fVar4;
    *(float *)((longlong)puVar2 + 0x14) = fVar3;
    *puVar2 = &PTR_LAB_144e0a8d8;
  }
  return;
}



// FUNCTION 141ed6ac0 FUN_141ed6ac0 body=145 status=ok
// SIG undefined FUN_141ed6ac0(void)

void FUN_141ed6ac0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_141ec6f30();
  if (param_4 != '\0') {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 3;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 3;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_144edafe0;
    puVar3[2] = uVar1;
  }
  return;
}



// FUNCTION 141ed6b60 FUN_141ed6b60 body=614 status=ok
// SIG undefined FUN_141ed6b60(void)

void FUN_141ed6b60(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined4 *)(param_1 + 8) = 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_141ed6d17;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_141ed6d17:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 141ed6dd0 FUN_141ed6dd0 body=723 status=ok
// SIG undefined FUN_141ed6dd0(void)

void FUN_141ed6dd0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  uVar11 = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar4 = DAT_1464a8214;
  if ((*(char *)(param_1 + 0x18) != '\0') && (uVar4 = 0, DAT_146ab6388 == '\0')) {
    iVar2 = DAT_1464a820c;
    if (((DAT_146ac32f8 == 0x800) || (iVar2 = DAT_1464a8208, DAT_146ac32f8 == 0x1000)) &&
       (iVar2 == 0)) {
      uVar4 = DAT_146ac3300 | 0xff;
    }
    else {
      uVar4 = DAT_146ac32fc | DAT_146ac32f8 | 0xff;
    }
  }
  *(uint *)(param_1 + 8) = uVar4;
  uVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (uVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    uVar12 = uVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar4 = FUN_14043a6c0(&local_68);
      while (uVar4 != 0) {
        uVar8 = (ulonglong)uVar4;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar4 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_141ed6ff7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar4 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_141ed6ff7:
      uVar4 = uVar12 + 1;
      if (bVar13) {
        uVar4 = uVar12;
      }
      local_98 = local_98 + 8;
      uVar11 = uVar11 + 1;
      uVar12 = uVar4;
    } while ((int)uVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar3 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 - (local_res20 + uVar4);
  UNLOCK();
  if (iVar2 == local_res20 + uVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar3);
  }
  return;
}



// FUNCTION 141ed70b0 FUN_141ed70b0 body=707 status=ok
// SIG undefined FUN_141ed70b0(void)

void FUN_141ed70b0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  uVar11 = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  uVar4 = 0;
  if (DAT_146ab6388 == '\0') {
    iVar2 = DAT_1464a820c;
    if (((DAT_146ac32f8 != 0x800) && (iVar2 = DAT_1464a8208, DAT_146ac32f8 != 0x1000)) ||
       (uVar4 = DAT_146ac3300, iVar2 != 0)) {
      uVar4 = DAT_146ac32fc | DAT_146ac32f8;
    }
    uVar4 = uVar4 | 0xff;
  }
  *(uint *)(param_1 + 8) = uVar4;
  uVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (uVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    uVar12 = uVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar4 = FUN_14043a6c0(&local_68);
      while (uVar4 != 0) {
        uVar8 = (ulonglong)uVar4;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar4 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_141ed72c7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar4 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_141ed72c7:
      uVar4 = uVar12 + 1;
      if (bVar13) {
        uVar4 = uVar12;
      }
      local_98 = local_98 + 8;
      uVar11 = uVar11 + 1;
      uVar12 = uVar4;
    } while ((int)uVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar3 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 - (local_res20 + uVar4);
  UNLOCK();
  if (iVar2 == local_res20 + uVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar3);
  }
  return;
}



// FUNCTION 141ed7380 FUN_141ed7380 body=771 status=ok
// SIG undefined FUN_141ed7380(void)

void FUN_141ed7380(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (*(char *)(param_1 + 0x28) == '\0') {
    iVar4 = DAT_1464a820c;
    if (((DAT_146ac3328 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146ac3328 != 0x1000)) ||
       (uVar3 = DAT_146ac3330, iVar4 != 0)) {
      uVar3 = DAT_146ac332c | DAT_146ac3328;
    }
  }
  else {
    iVar4 = DAT_1464a820c;
    if (((DAT_146ac3358 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146ac3358 != 0x1000)) ||
       (uVar3 = DAT_146ac3360, iVar4 != 0)) {
      uVar3 = DAT_146ac335c | DAT_146ac3358;
    }
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_141ed75d7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_141ed75d7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 141ed7690 FUN_141ed7690 body=691 status=ok
// SIG undefined FUN_141ed7690(void)

void FUN_141ed7690(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x30) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146ac3388 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146ac3388 != 0x1000)) ||
     (uVar3 = DAT_146ac3390, iVar4 != 0)) {
    uVar3 = DAT_146ac338c | DAT_146ac3388;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_141ed7897;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_141ed7897:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 141ed7950 FUN_141ed7950 body=552 status=ok
// SIG undefined FUN_141ed7950(void)

undefined8 FUN_141ed7950(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == DAT_146ab6b60) {
    return 0;
  }
  if (param_1 == DAT_146ab6b68) {
    return 5;
  }
  if (param_1 == DAT_146ab6b70) {
    return 0xe;
  }
  if (param_1 == DAT_146ab6b78) {
    return 7;
  }
  if (param_1 == DAT_146ab6b80) {
    return 1;
  }
  if (param_1 == DAT_146ab6b88) {
    return 2;
  }
  if (param_1 == DAT_146ab6b90) {
    return 0x1e;
  }
  if (param_1 == DAT_146ab6b98) {
    return 0x1f;
  }
  if (param_1 == DAT_146ab6ba0) {
    return 4;
  }
  if (param_1 == DAT_146ab6ba8) {
    return 6;
  }
  if ((param_1 == DAT_146ab6bb0) || (param_1 == DAT_146ab6bb8)) {
    return 3;
  }
  if (param_1 == DAT_146ab6bc0) {
    return 0xf;
  }
  if (param_1 == DAT_146ab6bc8) {
    return 8;
  }
  if (param_1 == DAT_146ab6bd0) {
    return 9;
  }
  if (param_1 == DAT_146ab6bd8) {
    return 10;
  }
  if (param_1 == DAT_146ab6be0) {
    return 0xb;
  }
  if (param_1 != DAT_146ab6be8) {
    if (param_1 == DAT_146ab6bf0) {
      return 0x1b;
    }
    if (param_1 == DAT_146ab6bf8) {
      return 0xd;
    }
    if (param_1 == DAT_146ab6c08) {
      return 0x10;
    }
    if (param_1 == DAT_146ab6c40) {
      return 0x13;
    }
    if (param_1 != DAT_146ab6c50) {
      if (param_1 == DAT_146ab6c58) {
        return 0x1c;
      }
      if ((param_1 == DAT_146ab6c10) || (param_1 == DAT_146ab6c18)) {
        return 0x15;
      }
      if (param_1 == DAT_146ab6c20) {
        return 0x1d;
      }
      if ((param_1 == DAT_146ab6c28) || (param_1 == DAT_146ab6c30)) {
        return 0x11;
      }
      if (param_1 == DAT_146ab6c38) {
        return 0x13;
      }
      if (param_1 != DAT_146ab6c48) {
        if (param_1 == DAT_146ab6c60) {
          return 0x12;
        }
        if (param_1 == DAT_146ab6c68) {
          return 0x16;
        }
        if (param_1 == DAT_146ab6c70) {
          return 0x17;
        }
        if (param_1 != DAT_146ab6c00) {
          if (param_1 != DAT_146ab6c78) {
            uVar1 = 0x20;
            if (param_1 == DAT_146ab6c80) {
              uVar1 = 0x1a;
            }
            return uVar1;
          }
          return 0x19;
        }
        return 0x18;
      }
    }
    return 0x14;
  }
  return 0xc;
}



// FUNCTION 141ed7b80 FUN_141ed7b80 body=88 status=ok
// SIG undefined FUN_141ed7b80(void)

bool FUN_141ed7b80(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146ab6a80;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 141ed7be0 Shutdown body=555 status=ok
// SIG undefined Shutdown(void)

void FPipelineFileCache::Shutdown(void)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined *puVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_50;
  uint uStack_4c;
  undefined *local_48;
  uint uStack_40;
  int iStack_3c;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  uint uStack_18;
  int iStack_14;
  undefined8 uStack_10;
  
  cVar3 = FUN_141ec9f60();
  if (cVar3 != '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
    uStack_74 = 1;
    local_78 = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    iVar11 = (int)DAT_1464c9ee8;
    if (iVar11 != 0) {
      puVar9 = DAT_1464c9ee0;
      if (DAT_1464c9ee0 == (uint *)0x0) {
        puVar9 = (uint *)&DAT_1464c9ed0;
      }
      uVar1 = *puVar9;
      local_78 = 0;
      while (uVar1 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar2 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar2) goto LAB_141ed7ccf;
        uVar1 = puVar9[lVar6 + 1];
      }
      uStack_74 = -uVar1 & uVar1;
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
      iStack_64 = (iStack_60 - iVar4) + 0x1f;
      if (iVar11 < iStack_64) {
LAB_141ed7ccf:
        iStack_64 = iVar11;
      }
    }
    uStack_40 = 0xffffffff;
    iStack_3c = iStack_64;
    local_38 = CONCAT44(uStack_5c,iStack_60);
    uStack_28 = CONCAT44(uStack_74,local_78);
    local_30 = &DAT_1464c9ec0;
    puStack_20 = &DAT_1464c9ed0;
    iStack_50 = local_78;
    uStack_4c = uStack_74;
    local_48 = &DAT_1464c9ed0;
    uStack_10 = local_38;
    uStack_18 = uStack_40;
    iStack_14 = iStack_3c;
    while ((iStack_3c != iVar11 || (local_48 != &DAT_1464c9ed0))) {
      lVar6 = *(longlong *)(DAT_1464c9ec0 + 8 + (longlong)iStack_3c * 0x18);
      if (lVar6 != 0) {
        FMemory::operator_delete(lVar6,0x28);
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    }
    TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
    ::Empty(&DAT_1464c9ec0);
    TSparseArray<TSetElement<FPipelineCacheFileFormatPSO>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(&DAT_1464c9f10);
    if (0 < (int)DAT_1464c9f58) {
      uVar8 = 0;
      uVar10 = (ulonglong)DAT_1464c9f58;
      do {
        puVar7 = DAT_1464c9f50;
        if (DAT_1464c9f50 == (undefined *)0x0) {
          puVar7 = &DAT_1464c9f48;
        }
        uVar5 = (longlong)(int)(DAT_1464c9f58 - 1) & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)(puVar7 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    DAT_146ab6368 = 0;
    DAT_146ab633b = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146ab66c8);
  }
  return;
}



// FUNCTION 141ed7e10 FUN_141ed7e10 body=135 status=ok
// SIG undefined FUN_141ed7e10(void)

void FUN_141ed7e10(void)

{
  if (DAT_146ab638b != '\0') {
    DAT_146ab638b = 0;
    (**(code **)(*DAT_146ab6358 + 0x730))();
    if (DAT_146ab63a0 != (longlong *)0x0) {
      (**(code **)(*DAT_146ab63a0 + 0x18))(DAT_146ab63a0,1);
      if (DAT_146ab63a0 != (longlong *)0x0) {
        (**(code **)(*DAT_146ab63a0 + 0x28))(DAT_146ab63a0,1);
      }
      DAT_146ab63a0 = (longlong *)0x0;
    }
    if (DAT_1464ca180 == (longlong *)0x0) {
      DAT_1464ca180 = (longlong *)FUN_1415ab270(0);
    }
                    /* WARNING: Could not recover jumptable at 0x000141ed7e8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_1464ca180 + 0x10))(DAT_1464ca180);
    return;
  }
  return;
}



// FUNCTION 141ed7ea0 SortMetaData body=211 status=ok
// SIG undefined SortMetaData(void)

void FPipelineCacheFile::SortMetaData(undefined8 *param_1,int param_2)

{
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  undefined1 **local_res20;
  undefined8 **local_18 [2];
  
  if (param_2 == 1) {
    local_res18 = local_res10;
    local_res10[0] = 0;
    local_res20 = &local_res18;
    if (0 < *(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34)) {
      TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Compact();
      local_18[0] = &local_res20;
      AlgoImpl::
      IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_f4a8f81c3f62a3aff784eb1ce16613ad>_>_>_>_>_>
                (*param_1,(longlong)(*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34)),
                 local_res10[0],local_18);
    }
  }
  else {
    if (param_2 != 2) {
      return;
    }
    local_res18 = local_res10;
    local_res10[0] = 0;
    local_res20 = &local_res18;
    if (0 < *(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34)) {
      TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Compact();
      local_18[0] = &local_res20;
      AlgoImpl::
      IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<168,8>_>,TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>::FValueComparisonClass<<lambda_429c1ffd4371d29d74408ee7bb2c8a98>_>_>_>_>_>
                (*param_1,(longlong)(*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34)),
                 local_res10[0],local_18);
      TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return;
    }
  }
  TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
  ::Rehash(param_1);
  return;
}



// FUNCTION 141ed7f80 FUN_141ed7f80 body=303 status=ok
// SIG undefined FUN_141ed7f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141ed7f80(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  BOOL BVar4;
  ulonglong uVar5;
  
  if (*(int *)(DAT_146ab6d88 + 4) < 1) {
    FRHICommandListBase::WaitForRHIThreadTasks();
    return 0;
  }
  if (DAT_146ab7258 != 0) {
    LOCK();
    uVar5 = *(ulonglong *)(DAT_146ab7258 + 8);
    if (uVar5 == 0) {
      *(ulonglong *)(DAT_146ab7258 + 8) = 0;
      uVar5 = 0;
    }
    lVar3 = DAT_146ab7258;
    UNLOCK();
    if ((uVar5 >> 0x1a & 1) != 0) {
      DAT_146ab7258 = 0;
      if (lVar3 == 0) goto LAB_141ed7fed;
      LOCK();
      piVar1 = (int *)(lVar3 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (DAT_146ab7258 != 0) goto LAB_141ed805c;
  }
LAB_141ed7fed:
  if (DAT_146ab7248 != 0) {
    LOCK();
    uVar5 = *(ulonglong *)(DAT_146ab7248 + 8);
    if (uVar5 == 0) {
      *(ulonglong *)(DAT_146ab7248 + 8) = 0;
      uVar5 = 0;
    }
    lVar3 = DAT_146ab7248;
    UNLOCK();
    if ((uVar5 >> 0x1a & 1) != 0) {
      DAT_146ab7248 = 0;
      if (lVar3 != 0) {
        LOCK();
        piVar1 = (int *)(lVar3 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
      lVar3 = DAT_146ab7250;
      DAT_146ab7250 = 0;
      if (lVar3 != 0) {
        LOCK();
        piVar1 = (int *)(lVar3 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
    if (DAT_146ab7248 != 0) {
LAB_141ed805c:
      LOCK();
      _DAT_146ab6334 = _DAT_146ab6334 + 1;
      UNLOCK();
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141ed80b0 FUN_141ed80b0 body=260 status=ok
// SIG undefined FUN_141ed80b0(void)

void FUN_141ed80b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (((DAT_146ab62f7 == '\0') && (DAT_146ab6358 != (longlong *)0x0)) &&
     (lVar5 = (**(code **)(*DAT_146ab6358 + 0x6d8))(), lVar1 = DAT_146ab6e30, lVar5 != 0)) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    else {
      lVar5 = 0;
    }
    if (*(int *)(lVar5 + lVar1) != 0) {
      cVar2 = IsInRenderingThread();
      cVar3 = FUN_1415e13e0();
      if (*(longlong *)(param_1 + 0x1b0) == 0) {
        if (DAT_1468b5000 != 0) {
          cVar2 = cVar3;
        }
        if ((cVar2 != '\0') && (DAT_146ab62b8 == 0)) {
          plVar6 = (longlong *)(**(code **)(*DAT_146ab6358 + 0x6d8))();
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,1);
          if (plVar6 != (longlong *)0x0) {
            *(longlong **)(param_1 + 0x1b0) = plVar6;
            (**(code **)(*plVar6 + 8))(plVar6,*(undefined8 *)(param_1 + 0x20),0);
            DAT_146ab62b8 = *(longlong *)(param_1 + 0x1b0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141ed81e0 FUN_141ed81e0 body=286 status=ok
// SIG undefined FUN_141ed81e0(void)

void FUN_141ed81e0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac39e8) && (_Init_thread_header(&DAT_146ac39e8), DAT_146ac39e8 == -1))
  {
    uVar5 = FCommandLine::Get();
    DAT_146ac39e4 = FParse::Param(uVar5,L"ForceProfiling");
    _Init_thread_footer(&DAT_146ac39e8);
  }
  lVar1 = DAT_146ab65e0;
  cVar2 = FUN_1415ad720();
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
  }
  if (*(int *)(lVar6 + lVar1) == 2) {
    DAT_146ac39e4 = '\x01';
  }
  iVar4 = (**(code **)(*param_1 + 0x28))(param_1);
  if (DAT_146ac39e4 == '\0') {
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141ed8290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x40))(param_1,1);
      return;
    }
    if (iVar4 < 1) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x38))(param_1,1,1,1,1);
  return;
}



// FUNCTION 141ed8300 FUN_141ed8300 body=592 status=ok
// SIG undefined FUN_141ed8300(void)

void FUN_141ed8300(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_88 [32];
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac39f8) && (_Init_thread_header(&DAT_146ac39f8), DAT_146ac39f8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146ac39f0 = (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"gbxperf.bNoEngineStats");
    _Init_thread_footer(&DAT_146ac39f8);
  }
  if (DAT_146ac39f0 == 0) {
    return;
  }
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = param_1;
    *puVar7 = &PTR_CopyToEmptyStorage_144319440;
  }
  local_68 = (code *)&LAB_141ebd670;
  plVar8 = (longlong *)FUN_140596960(local_88,0,0xff);
  lVar3 = *plVar8;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined4 *)(lVar3 + 0x50) = 0;
  if (local_38 == (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop((longlong *)(lVar3 + 0x20),local_58,0x20);
  }
  if (*(longlong *)(lVar3 + 0x40) != 0) {
    FMemory::Free();
  }
  *(longlong **)(lVar3 + 0x40) = local_38;
  local_38 = (longlong *)0x0;
  *(int *)(lVar3 + 0x50) = local_28;
  local_28 = 0;
  if (*(int *)(lVar3 + 0x50) != 0) {
    plVar9 = *(longlong **)(lVar3 + 0x40);
    if (*(longlong **)(lVar3 + 0x40) == (longlong *)0x0) {
      plVar9 = (longlong *)(lVar3 + 0x20);
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 8))();
      goto LAB_141ed8432;
    }
  }
  local_68 = AK::MemoryMgr::StartProfileThreadUsage;
LAB_141ed8432:
  *(code **)(lVar3 + 0x10) = local_68;
  local_68 = AK::MemoryMgr::StartProfileThreadUsage;
  *(undefined4 *)(lVar3 + 0x60) = 2;
  lVar3 = *plVar8;
  lVar6 = plVar8[2];
  lVar4 = plVar8[1];
  lVar5 = *(longlong *)(lVar3 + 0x78);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  FUN_1405ab110(lVar3,lVar4,(int)lVar6,1);
  if (local_28 != 0) {
    plVar8 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar8 = local_38;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    LOCK();
    piVar1 = (int *)(lVar5 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  return;
}



// FUNCTION 141ed8550 UnStallRHIThread body=29 status=ok
// SIG undefined UnStallRHIThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FRHICommandListImmediate::UnStallRHIThread(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
  LOCK();
  _DAT_146ab6334 = _DAT_146ab6334 + -1;
  UNLOCK();
  return;
}



// FUNCTION 141ed8570 UnlockIndexBuffer_RenderThread body=598 status=ok
// SIG undefined UnlockIndexBuffer_RenderThread(void)

void FDynamicRHI::UnlockIndexBuffer_RenderThread
               (undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar8 = 0;
  iVar2 = *(int *)(DAT_146ab6d70 + 4);
  if (0 < DAT_146ac35a0) {
    plVar11 = DAT_146ac3598;
    plVar12 = DAT_146ac3598;
    if (DAT_146ac3598 == (longlong *)0x0) {
      plVar11 = (longlong *)&DAT_146ac3398;
      plVar12 = plVar11;
    }
    do {
      if (*plVar11 == param_3) {
        plVar11 = plVar12 + (longlong)iVar8 * 4;
        iVar8 = (DAT_146ac35a0 - iVar8) + -1;
        local_48 = (undefined4)*plVar11;
        uStack_44 = *(undefined4 *)((longlong)plVar11 + 4);
        uStack_40 = (undefined4)plVar11[1];
        uStack_3c = *(undefined4 *)((longlong)plVar11 + 0xc);
        if (0 < iVar8) {
          iVar8 = 1;
        }
        local_38 = (undefined4)plVar11[2];
        uStack_34 = *(undefined4 *)((longlong)plVar11 + 0x14);
        iStack_30 = (int)plVar11[3];
        uStack_2c = *(undefined4 *)((longlong)plVar11 + 0x1c);
        if (iVar8 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    (plVar11,plVar12 + (longlong)(DAT_146ac35a0 - iVar8) * 4,(longlong)iVar8 << 5);
        }
        DAT_146ac35a0 = DAT_146ac35a0 + -1;
        uVar14 = CONCAT44(uStack_3c,uStack_40);
        iVar8 = iStack_30;
        uVar10 = uStack_34;
        uVar13 = local_38;
        uVar3 = local_48;
        uVar4 = uStack_44;
        iVar5 = uStack_40;
        uVar6 = uStack_3c;
        local_28 = local_38;
        uStack_24 = uStack_34;
        iStack_20 = iStack_30;
        uStack_1c = uStack_2c;
        goto LAB_141ed85e0;
      }
      iVar8 = iVar8 + 1;
      plVar11 = plVar11 + 4;
    } while (iVar8 < DAT_146ac35a0);
  }
  uVar14 = 0;
  iVar8 = 1;
  uVar10 = 0;
  uVar13 = 0;
  uVar3 = local_38;
  uVar4 = uStack_34;
  iVar5 = iStack_30;
  uVar6 = uStack_2c;
LAB_141ed85e0:
  uStack_2c = uVar6;
  iStack_30 = iVar5;
  uStack_34 = uVar4;
  local_38 = uVar3;
  if (((iVar2 < 1) || (iVar8 != 1)) || (DAT_146ab6383 == '\0')) {
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_141ec3e80(&DAT_146ab6e68,param_2);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
    (**(code **)(*DAT_146ab6358 + 0x128))(DAT_146ab6358,param_3);
  }
  else {
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_ExecuteAndDestruct_144edb4a0;
    puVar9[2] = param_3;
    puVar9[3] = uVar14;
    *(undefined4 *)(puVar9 + 4) = uVar13;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar10;
    FRHICommandListImmediate::RHIThreadFence(param_2,&local_48,1);
    if (CONCAT44(uStack_44,local_48) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_44,local_48) + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(CONCAT44(uStack_44,local_48));
      }
    }
    if (DAT_146ac35a8 < 0x40001) {
      return;
    }
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_141ec3e80(&DAT_146ab6e68,param_2);
    }
  }
  DAT_146ac35a8 = 0;
  return;
}



// FUNCTION 141ed87d0 FUN_141ed87d0 body=599 status=ok
// SIG undefined FUN_141ed87d0(void)

void FUN_141ed87d0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar8 = 0;
  iVar2 = *(int *)(DAT_146ab6d70 + 4);
  if (0 < DAT_146ac35a0) {
    plVar11 = DAT_146ac3598;
    plVar12 = DAT_146ac3598;
    if (DAT_146ac3598 == (longlong *)0x0) {
      plVar11 = (longlong *)&DAT_146ac3398;
      plVar12 = plVar11;
    }
    do {
      if (*plVar11 == param_3) {
        plVar11 = plVar12 + (longlong)iVar8 * 4;
        iVar8 = (DAT_146ac35a0 - iVar8) + -1;
        local_48 = (undefined4)*plVar11;
        uStack_44 = *(undefined4 *)((longlong)plVar11 + 4);
        uStack_40 = (undefined4)plVar11[1];
        uStack_3c = *(undefined4 *)((longlong)plVar11 + 0xc);
        if (0 < iVar8) {
          iVar8 = 1;
        }
        local_38 = (undefined4)plVar11[2];
        uStack_34 = *(undefined4 *)((longlong)plVar11 + 0x14);
        iStack_30 = (int)plVar11[3];
        uStack_2c = *(undefined4 *)((longlong)plVar11 + 0x1c);
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (plVar11,plVar12 + (longlong)(DAT_146ac35a0 - iVar8) * 4,(longlong)iVar8 << 5);
        }
        DAT_146ac35a0 = DAT_146ac35a0 + -1;
        uVar14 = CONCAT44(uStack_3c,uStack_40);
        iVar8 = iStack_30;
        uVar10 = uStack_34;
        uVar13 = local_38;
        uVar3 = local_48;
        uVar4 = uStack_44;
        iVar5 = uStack_40;
        uVar6 = uStack_3c;
        local_28 = local_38;
        uStack_24 = uStack_34;
        iStack_20 = iStack_30;
        uStack_1c = uStack_2c;
        goto LAB_141ed8840;
      }
      iVar8 = iVar8 + 1;
      plVar11 = plVar11 + 4;
    } while (iVar8 < DAT_146ac35a0);
  }
  uVar14 = 0;
  iVar8 = 1;
  uVar10 = 0;
  uVar13 = 0;
  uVar3 = local_38;
  uVar4 = uStack_34;
  iVar5 = iStack_30;
  uVar6 = uStack_2c;
LAB_141ed8840:
  uStack_2c = uVar6;
  iStack_30 = iVar5;
  uStack_34 = uVar4;
  local_38 = uVar3;
  if (((iVar2 < 1) || (iVar8 != 1)) || (DAT_1468b5000 == 0)) {
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_141ec3e80(&DAT_146ab6e68,param_2);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
    (**(code **)(*DAT_146ab6358 + 0x160))(DAT_146ab6358,param_3);
  }
  else {
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_FUN_144edb4b0;
    puVar9[2] = param_3;
    puVar9[3] = uVar14;
    *(undefined4 *)(puVar9 + 4) = uVar13;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar10;
    FRHICommandListImmediate::RHIThreadFence(param_2,&local_48,1);
    if (CONCAT44(uStack_44,local_48) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_44,local_48) + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(CONCAT44(uStack_44,local_48));
      }
    }
    if (DAT_146ac35a8 < 0x40001) {
      return;
    }
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_141ec3e80(&DAT_146ab6e68,param_2);
    }
  }
  DAT_146ac35a8 = 0;
  return;
}



// FUNCTION 141ed8a30 FUN_141ed8a30 body=248 status=ok
// SIG undefined FUN_141ed8a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ed8a30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,char param_7)

{
  char cVar1;
  longlong lVar2;
  
  if (param_7 != '\0') {
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_141ec3e80(&DAT_146ab6e68);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
                    /* WARNING: Could not recover jumptable at 0x000141ed8ab1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146ab6358 + 0x2b0))(DAT_146ab6358,param_3,param_4,param_5);
    return;
  }
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_2);
    if (cVar1 != '\0') {
      lVar2 = param_2;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x2b0))(DAT_146ab6358,param_3,param_4,param_5,param_6);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141ed8b30 FUN_141ed8b30 body=231 status=ok
// SIG undefined FUN_141ed8b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ed8b30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5,char param_6)

{
  char cVar1;
  longlong lVar2;
  
  if (param_6 != '\0') {
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_141ec3e80(&DAT_146ab6e68);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
                    /* WARNING: Could not recover jumptable at 0x000141ed8ba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146ab6358 + 0x2a0))(DAT_146ab6358,param_3,param_4,param_5);
    return;
  }
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_2);
    if (cVar1 != '\0') {
      lVar2 = param_2;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x2a0))(DAT_146ab6358,param_3,param_4,param_5);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141ed8c20 UnlockVertexBuffer_RenderThread body=598 status=ok
// SIG undefined UnlockVertexBuffer_RenderThread(void)

void FDynamicRHI::UnlockVertexBuffer_RenderThread
               (undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar8 = 0;
  iVar2 = *(int *)(DAT_146ab6d70 + 4);
  if (0 < DAT_146ac35a0) {
    plVar11 = DAT_146ac3598;
    plVar12 = DAT_146ac3598;
    if (DAT_146ac3598 == (longlong *)0x0) {
      plVar11 = (longlong *)&DAT_146ac3398;
      plVar12 = plVar11;
    }
    do {
      if (*plVar11 == param_3) {
        plVar11 = plVar12 + (longlong)iVar8 * 4;
        iVar8 = (DAT_146ac35a0 - iVar8) + -1;
        local_48 = (undefined4)*plVar11;
        uStack_44 = *(undefined4 *)((longlong)plVar11 + 4);
        uStack_40 = (undefined4)plVar11[1];
        uStack_3c = *(undefined4 *)((longlong)plVar11 + 0xc);
        if (0 < iVar8) {
          iVar8 = 1;
        }
        local_38 = (undefined4)plVar11[2];
        uStack_34 = *(undefined4 *)((longlong)plVar11 + 0x14);
        iStack_30 = (int)plVar11[3];
        uStack_2c = *(undefined4 *)((longlong)plVar11 + 0x1c);
        if (iVar8 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    (plVar11,plVar12 + (longlong)(DAT_146ac35a0 - iVar8) * 4,(longlong)iVar8 << 5);
        }
        DAT_146ac35a0 = DAT_146ac35a0 + -1;
        uVar14 = CONCAT44(uStack_3c,uStack_40);
        iVar8 = iStack_30;
        uVar10 = uStack_34;
        uVar13 = local_38;
        uVar3 = local_48;
        uVar4 = uStack_44;
        iVar5 = uStack_40;
        uVar6 = uStack_3c;
        local_28 = local_38;
        uStack_24 = uStack_34;
        iStack_20 = iStack_30;
        uStack_1c = uStack_2c;
        goto LAB_141ed8c90;
      }
      iVar8 = iVar8 + 1;
      plVar11 = plVar11 + 4;
    } while (iVar8 < DAT_146ac35a0);
  }
  uVar14 = 0;
  iVar8 = 1;
  uVar10 = 0;
  uVar13 = 0;
  uVar3 = local_38;
  uVar4 = uStack_34;
  iVar5 = iStack_30;
  uVar6 = uStack_2c;
LAB_141ed8c90:
  uStack_2c = uVar6;
  iStack_30 = iVar5;
  uStack_34 = uVar4;
  local_38 = uVar3;
  if (((iVar2 < 1) || (iVar8 != 1)) || (DAT_146ab6383 == '\0')) {
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_141ec3e80(&DAT_146ab6e68,param_2);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
    (**(code **)(*DAT_146ab6358 + 0x140))(DAT_146ab6358,param_3);
  }
  else {
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_ExecuteAndDestruct_144edb490;
    puVar9[2] = param_3;
    puVar9[3] = uVar14;
    *(undefined4 *)(puVar9 + 4) = uVar13;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar10;
    FRHICommandListImmediate::RHIThreadFence(param_2,&local_48,1);
    if (CONCAT44(uStack_44,local_48) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_44,local_48) + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(CONCAT44(uStack_44,local_48));
      }
    }
    if (DAT_146ac35a8 < 0x40001) {
      return;
    }
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_141ec3e80(&DAT_146ab6e68,param_2);
    }
  }
  DAT_146ac35a8 = 0;
  return;
}



// FUNCTION 141ed8e80 UpdateStats body=45 status=ok
// SIG undefined UpdateStats(void)

void FRHIComputeShader::UpdateStats(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar1[1] = DAT_1468c21b0;
    UNLOCK();
    LOCK();
    plVar1[3] = plVar1[3] + 1;
    UNLOCK();
    LOCK();
    if (*plVar1 == -1) {
      *plVar1 = DAT_1468c21b0;
    }
    UNLOCK();
  }
  return;
}



// FUNCTION 141ed8eb0 FUN_141ed8eb0 body=145 status=ok
// SIG undefined FUN_141ed8eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ed8eb0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_2);
    if (cVar1 != '\0') {
      lVar2 = param_2;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x2c8))(DAT_146ab6358,param_3,param_4,param_5,param_6,param_7);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141ed8f50 FUN_141ed8f50 body=159 status=ok
// SIG undefined FUN_141ed8f50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ed8f50(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_2);
    if (cVar1 != '\0') {
      lVar2 = param_2;
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x2d0))
            (DAT_146ab6358,param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
    LOCK();
    _DAT_146ab6334 = _DAT_146ab6334 + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141ed8ff0 FUN_141ed8ff0 body=357 status=ok
// SIG undefined FUN_141ed8ff0(void)

void FUN_141ed8ff0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong local_18 [2];
  
  if ((DAT_146ab6383 == '\0') || (0 < *(int *)(DAT_146ab6d28 + 4))) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_141ec3e80(&DAT_146ab6e68,param_1);
    }
    FUN_141ed93a0(param_1);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_1);
    }
    FRHICommandListBase::WaitForTasks(param_1,1);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2d0))
              (*(longlong **)(param_1 + 0x20),param_2,param_3);
  }
  else {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 4;
    if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 4;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar4;
    *(undefined8 **)(param_1 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_144edb050;
    puVar4[2] = param_2;
    puVar4[3] = param_3;
    FRHICommandListImmediate::RHIThreadFence(param_1,local_18,1);
    if (local_18[0] != 0) {
      LOCK();
      piVar1 = (int *)(local_18[0] + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_18[0]);
      }
    }
    iVar2 = FMemStackBase::GetByteCount(param_1 + 0x30);
    if ((0x40000 < iVar2) && (*(int *)(param_1 + 0x14) != 0)) {
      FUN_141ec3e80(&DAT_146ab6e68,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 141ed9160 FUN_141ed9160 body=51 status=ok
// SIG undefined FUN_141ed9160(void)

void FUN_141ed9160(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = 0;
  iVar2 = -1;
  do {
    if (*param_1 == 0) {
      return;
    }
    if (iVar2 == -1) {
      iVar2 = *(int *)(*param_1 + 0x38);
    }
    lVar1 = lVar1 + 1;
    param_1 = param_1 + 3;
  } while (lVar1 < 8);
  return;
}



// FUNCTION 141ed91a0 VirtualTextureSetFirstMipVisible_RenderThread body=115 status=ok
// SIG undefined VirtualTextureSetFirstMipVisible_RenderThread(void)

void FDynamicRHI::VirtualTextureSetFirstMipVisible_RenderThread
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  if (*(int *)(param_2 + 0x14) != 0) {
    FUN_141ec3e80(&DAT_146ab6e68);
  }
  FUN_141ed93a0(param_2);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(param_2);
  }
  FRHICommandListBase::WaitForTasks(param_2,1);
                    /* WARNING: Could not recover jumptable at 0x000141ed920c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 0x440))(DAT_146ab6358,param_3,param_4);
  return;
}



// FUNCTION 141ed9220 FUN_141ed9220 body=115 status=ok
// SIG undefined FUN_141ed9220(void)

void FUN_141ed9220(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  if (*(int *)(param_2 + 0x14) != 0) {
    FUN_141ec3e80(&DAT_146ab6e68);
  }
  FUN_141ed93a0(param_2);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(param_2);
  }
  FRHICommandListBase::WaitForTasks(param_2,1);
                    /* WARNING: Could not recover jumptable at 0x000141ed928c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 0x448))(DAT_146ab6358,param_3,param_4);
  return;
}



// FUNCTION 141ed92a0 FUN_141ed92a0 body=115 status=ok
// SIG undefined FUN_141ed92a0(void)

void FUN_141ed92a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  if (*(int *)(param_2 + 0x14) != 0) {
    FUN_141ec3e80(&DAT_146ab6e68);
  }
  FUN_141ed93a0(param_2);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(param_2);
  }
  FRHICommandListBase::WaitForTasks(param_2,1);
                    /* WARNING: Could not recover jumptable at 0x000141ed930c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 0x430))(DAT_146ab6358,param_3,param_4);
  return;
}



// FUNCTION 141ed9320 VirtualTextureSetFirstMipInMemory_RenderThread body=115 status=ok
// SIG undefined VirtualTextureSetFirstMipInMemory_RenderThread(void)

void FDynamicRHI::VirtualTextureSetFirstMipInMemory_RenderThread
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  if (*(int *)(param_2 + 0x14) != 0) {
    FUN_141ec3e80(&DAT_146ab6e68);
  }
  FUN_141ed93a0(param_2);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(param_2);
  }
  FRHICommandListBase::WaitForTasks(param_2,1);
                    /* WARNING: Could not recover jumptable at 0x000141ed938c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 0x438))(DAT_146ab6358,param_3,param_4);
  return;
}



// FUNCTION 141ed93a0 FUN_141ed93a0 body=501 status=ok
// SIG undefined FUN_141ed93a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ed93a0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [40];
  longlong local_40 [4];
  longlong *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (DAT_146ab7258 != 0) {
    LOCK();
    uVar9 = *(ulonglong *)(DAT_146ab7258 + 8);
    if (uVar9 == 0) {
      *(ulonglong *)(DAT_146ab7258 + 8) = 0;
      uVar9 = 0;
    }
    lVar5 = DAT_146ab7258;
    UNLOCK();
    uVar4 = DAT_1464a8214;
    if ((uVar9 >> 0x1a & 1) != 0) {
      DAT_146ab7258 = 0;
      if (lVar5 == 0) {
        DAT_146ab7258 = 0;
        return;
      }
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar4 = DAT_1464a8214;
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
        uVar4 = DAT_1464a8214;
      }
    }
    while (DAT_1464a8214 = uVar4, DAT_146ab7258 != 0) {
      plVar7 = (longlong *)FTaskGraphInterface::Get();
      cVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,uVar4);
      if (cVar6 != '\0') {
        LowLevelFatalErrorHandler
                  ("Unknown",0x706,L"Deadlock in FRHICommandListBase::WaitForDispatch.");
        FDebug::AssertFailed
                  (&DAT_144ed17f6,"Unknown",0x706,
                   L"Deadlock in FRHICommandListBase::WaitForDispatch.");
      }
      plVar8 = (longlong *)FTaskGraphInterface::Get();
      local_20 = (longlong *)0x0;
      local_18 = 1;
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_40,0);
      plVar7 = local_40;
      if (local_20 != (longlong *)0x0) {
        plVar7 = local_20;
      }
      *plVar7 = DAT_146ab7258;
      if (DAT_146ab7258 != 0) {
        LOCK();
        *(int *)(DAT_146ab7258 + 0x48) = *(int *)(DAT_146ab7258 + 0x48) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar8 + 0x48))(plVar8,local_40,uVar4);
      plVar7 = local_40;
      iVar2 = (int)local_18;
      if (local_20 != (longlong *)0x0) {
        plVar7 = local_20;
      }
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (*plVar7 != 0) {
          LOCK();
          piVar1 = (int *)(*plVar7 + 0x48);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar7 = plVar7 + 1;
      }
      if (local_20 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (DAT_146ab7258 == 0) {
        return;
      }
      LOCK();
      uVar9 = *(ulonglong *)(DAT_146ab7258 + 8);
      if (uVar9 == 0) {
        *(ulonglong *)(DAT_146ab7258 + 8) = 0;
        uVar9 = 0;
      }
      lVar5 = DAT_146ab7258;
      UNLOCK();
      uVar4 = DAT_1464a8214;
      if ((uVar9 >> 0x1a & 1) != 0) {
        DAT_146ab7258 = 0;
        if (lVar5 == 0) {
          DAT_146ab7258 = 0;
          return;
        }
        LOCK();
        piVar1 = (int *)(lVar5 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar4 = DAT_1464a8214;
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
          uVar4 = DAT_1464a8214;
        }
      }
    }
  }
  return;
}



// FUNCTION 141ed95a0 WaitForRHIThreadTasks body=1035 status=ok
// SIG undefined WaitForRHIThreadTasks(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FRHICommandListBase::WaitForRHIThreadTasks(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_98 [40];
  longlong local_70 [4];
  longlong *local_50;
  undefined8 local_48;
  longlong local_40 [4];
  longlong *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  uVar4 = DAT_1464a8214;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((0 < *(int *)(DAT_146ab6d88 + 4)) && (DAT_146ab7258 != 0)) {
    LOCK();
    uVar8 = *(ulonglong *)(DAT_146ab7258 + 8);
    if (uVar8 == 0) {
      *(ulonglong *)(DAT_146ab7258 + 8) = 0;
      uVar8 = 0;
    }
    lVar5 = DAT_146ab7258;
    UNLOCK();
    if ((uVar8 >> 0x1a & 1) != 0) {
      DAT_146ab7258 = 0;
      if (lVar5 == 0) goto LAB_141ed9793;
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    while (DAT_146ab7258 != 0) {
      plVar7 = (longlong *)FTaskGraphInterface::Get();
      cVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,uVar4);
      if (cVar6 == '\0') {
        plVar9 = (longlong *)FTaskGraphInterface::Get();
        local_50 = (longlong *)0x0;
        local_48 = 1;
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_70,0);
        plVar7 = local_70;
        if (local_50 != (longlong *)0x0) {
          plVar7 = local_50;
        }
        *plVar7 = DAT_146ab7258;
        if (DAT_146ab7258 != 0) {
          LOCK();
          *(int *)(DAT_146ab7258 + 0x48) = *(int *)(DAT_146ab7258 + 0x48) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar9 + 0x48))(plVar9,local_70,uVar4);
        plVar7 = local_70;
        iVar2 = (int)local_48;
        if (local_50 != (longlong *)0x0) {
          plVar7 = local_50;
        }
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          if (*plVar7 != 0) {
            LOCK();
            piVar1 = (int *)(*plVar7 + 0x48);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar7 = plVar7 + 1;
        }
        if (local_50 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      else {
        LOCK();
        uVar8 = *(ulonglong *)(DAT_146ab7258 + 8);
        if (uVar8 == 0) {
          *(ulonglong *)(DAT_146ab7258 + 8) = 0;
          uVar8 = 0;
        }
        UNLOCK();
        while ((uVar8 >> 0x1a & 1) == 0) {
          FUN_1416b1810(0);
          LOCK();
          uVar8 = *(ulonglong *)(DAT_146ab7258 + 8);
          if (uVar8 == 0) {
            *(ulonglong *)(DAT_146ab7258 + 8) = 0;
            uVar8 = 0;
          }
          UNLOCK();
        }
      }
      if (DAT_146ab7258 == 0) break;
      LOCK();
      uVar8 = *(ulonglong *)(DAT_146ab7258 + 8);
      if (uVar8 == 0) {
        *(ulonglong *)(DAT_146ab7258 + 8) = 0;
        uVar8 = 0;
      }
      lVar5 = DAT_146ab7258;
      UNLOCK();
      if ((uVar8 >> 0x1a & 1) != 0) {
        DAT_146ab7258 = 0;
        if (lVar5 == 0) break;
        LOCK();
        piVar1 = (int *)(lVar5 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
  }
LAB_141ed9793:
  if (DAT_146ab7248 != 0) {
    LOCK();
    uVar8 = *(ulonglong *)(DAT_146ab7248 + 8);
    if (uVar8 == 0) {
      *(ulonglong *)(DAT_146ab7248 + 8) = 0;
      uVar8 = 0;
    }
    lVar5 = DAT_146ab7248;
    UNLOCK();
    if ((uVar8 >> 0x1a & 1) != 0) {
      DAT_146ab7248 = 0;
      if (lVar5 != 0) {
        LOCK();
        piVar1 = (int *)(lVar5 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
      lVar5 = DAT_146ab7250;
      DAT_146ab7250 = 0;
      if (lVar5 != 0) {
        LOCK();
        piVar1 = (int *)(lVar5 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
    while (DAT_146ab7248 != 0) {
      plVar7 = (longlong *)FTaskGraphInterface::Get();
      cVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,uVar4);
      if (cVar6 == '\0') {
        plVar9 = (longlong *)FTaskGraphInterface::Get();
        local_20 = (longlong *)0x0;
        local_18 = 1;
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_40,0);
        plVar7 = local_40;
        if (local_20 != (longlong *)0x0) {
          plVar7 = local_20;
        }
        *plVar7 = DAT_146ab7248;
        if (DAT_146ab7248 != 0) {
          LOCK();
          *(int *)(DAT_146ab7248 + 0x48) = *(int *)(DAT_146ab7248 + 0x48) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar9 + 0x48))(plVar9,local_40,uVar4);
        plVar7 = local_40;
        iVar2 = (int)local_18;
        if (local_20 != (longlong *)0x0) {
          plVar7 = local_20;
        }
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          if (*plVar7 != 0) {
            LOCK();
            piVar1 = (int *)(*plVar7 + 0x48);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar7 = plVar7 + 1;
        }
        if (local_20 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      else {
        LOCK();
        uVar8 = *(ulonglong *)(DAT_146ab7248 + 8);
        if (uVar8 == 0) {
          *(ulonglong *)(DAT_146ab7248 + 8) = 0;
          uVar8 = 0;
        }
        UNLOCK();
        while ((uVar8 >> 0x1a & 1) == 0) {
          FUN_1416b1810(0);
          LOCK();
          uVar8 = *(ulonglong *)(DAT_146ab7248 + 8);
          if (uVar8 == 0) {
            *(ulonglong *)(DAT_146ab7248 + 8) = 0;
            uVar8 = 0;
          }
          UNLOCK();
        }
      }
      if (DAT_146ab7248 == 0) {
        return;
      }
      LOCK();
      uVar8 = *(ulonglong *)(DAT_146ab7248 + 8);
      if (uVar8 == 0) {
        *(ulonglong *)(DAT_146ab7248 + 8) = 0;
        uVar8 = 0;
      }
      lVar5 = DAT_146ab7248;
      UNLOCK();
      if ((uVar8 >> 0x1a & 1) != 0) {
        DAT_146ab7248 = 0;
        if (lVar5 != 0) {
          LOCK();
          piVar1 = (int *)(lVar5 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle();
          }
        }
        lVar5 = DAT_146ab7250;
        DAT_146ab7250 = 0;
        if (lVar5 != 0) {
          LOCK();
          piVar1 = (int *)(lVar5 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141ed99b0 WaitForTasks body=324 status=ok
// SIG undefined WaitForTasks(void)

void FRHICommandListBase::WaitForTasks(void)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar10;
  ulonglong uVar9;
  
  if (DAT_146ab7240 != 0) {
    uVar9 = 0;
    uVar10 = uVar9;
    if (0 < DAT_146ab7240) {
      do {
        plVar7 = DAT_146ab7238;
        if (DAT_146ab7238 == (longlong *)0x0) {
          plVar7 = (longlong *)&DAT_146ab7218;
        }
        puVar1 = (ulonglong *)(*(longlong *)((longlong)plVar7 + uVar10) + 8);
        LOCK();
        uVar6 = *puVar1;
        if (uVar6 == 0) {
          *puVar1 = 0;
          uVar6 = 0;
        }
        uVar5 = DAT_1464a8214;
        UNLOCK();
        if ((uVar6 >> 0x1a & 1) == 0) {
          plVar7 = (longlong *)FTaskGraphInterface::Get();
          (**(code **)(*plVar7 + 0x48))(plVar7,&DAT_146ab7218,uVar5);
          break;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar10 = uVar10 + 8;
      } while ((int)uVar8 < DAT_146ab7240);
    }
    if (DAT_146ab7244 < 0) {
      plVar7 = DAT_146ab7238;
      iVar4 = DAT_146ab7240;
      if (DAT_146ab7238 == (longlong *)0x0) {
        plVar7 = (longlong *)&DAT_146ab7218;
      }
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*plVar7 != 0) {
          LOCK();
          piVar2 = (int *)(*plVar7 + 0x48);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar7 = plVar7 + 1;
      }
      DAT_146ab7240 = 0;
      if (DAT_146ab7244 != 0) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                  (&DAT_146ab7218,0);
      }
    }
    else {
      plVar7 = DAT_146ab7238;
      iVar4 = DAT_146ab7240;
      if (DAT_146ab7238 == (longlong *)0x0) {
        plVar7 = (longlong *)&DAT_146ab7218;
      }
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*plVar7 != 0) {
          LOCK();
          piVar2 = (int *)(*plVar7 + 0x48);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar7 = plVar7 + 1;
      }
      DAT_146ab7240 = 0;
    }
  }
  return;
}



// FUNCTION 141ed9b00 FUN_141ed9b00 body=188 status=ok
// SIG undefined FUN_141ed9b00(void)

void FUN_141ed9b00(longlong *param_1)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  if (*param_1 != 0) {
    puVar1 = (ulonglong *)(*param_1 + 8);
    LOCK();
    uVar4 = *puVar1;
    if (uVar4 == 0) {
      *puVar1 = 0;
      uVar4 = 0;
    }
    UNLOCK();
    if ((uVar4 >> 0x1a & 1) == 0) {
      if (DAT_146ab6e8c != 0) {
        FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      uVar2 = DAT_1464a8214;
      plVar5 = (longlong *)FTaskGraphInterface::Get();
      cVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,uVar2);
      if (cVar3 != '\0') {
        LowLevelFatalErrorHandler("Unknown",0x356,L"Deadlock in WaitOnRHIThreadFence.");
        FDebug::AssertFailed(&DAT_144ed1076,"Unknown",0x356,L"Deadlock in WaitOnRHIThreadFence.");
      }
      uVar6 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar6,param_1,uVar2);
    }
  }
  return;
}



// FUNCTION 141ed9bc0 FUN_141ed9bc0 body=430 status=ok
// SIG undefined FUN_141ed9bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ed9bc0(longlong param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined **local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  ulonglong uVar6;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar12 = 0;
  local_78 = 8;
  local_80 = 0;
  local_70 = 0;
  local_88 = &PTR_GetBoundProgramCounterForTimerManager_144e08448;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_80,0);
  uStack_90._4_4_ = 0x3f800000;
  uVar7 = uVar12;
  uVar11 = uVar12;
  do {
    iVar3 = 1;
    if ((int)uVar11 != 0) {
      iVar3 = -1;
    }
    uStack_90._0_4_ = (float)iVar3;
    uVar9 = uVar12;
    uVar10 = uVar7;
    do {
      iVar3 = 1;
      if ((int)uVar9 != 0) {
        iVar3 = -1;
      }
      auVar14 = ZEXT416((uint)(float)iVar3);
      auVar2._4_8_ = uStack_90;
      auVar2._0_4_ = (float)iVar3;
      auVar2._12_4_ = 0;
      _local_98 = auVar2 << 0x20;
      uVar6 = uVar12;
      uVar8 = uVar10;
      do {
        auVar1._4_8_ = auVar14._8_8_;
        auVar1._0_4_ = local_98._4_4_;
        auVar13._0_8_ = auVar1._0_8_ << 0x20;
        auVar13._8_4_ = (undefined4)uStack_90;
        auVar13._12_4_ = uStack_90._4_4_;
        uVar4 = uVar8 & 0xffff;
        iVar3 = 1;
        if ((int)uVar6 != 0) {
          iVar3 = -1;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar8 = uVar8 + 4;
        auVar14._4_12_ = auVar13._4_12_;
        auVar14._0_4_ = (float)iVar3;
        *(undefined1 (*) [16])(local_80 + uVar4 * 0x10) = auVar14;
        _local_98 = auVar14;
      } while (uVar5 < 2);
      uVar5 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar5;
      uVar10 = uVar10 + 2;
    } while (uVar5 < 2);
    uVar5 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar5;
    uVar7 = uVar7 + 1;
  } while (uVar5 < 2);
  local_60 = &local_88;
  local_a0 = &local_68;
  local_54 = _DAT_1468b5d78;
  uStack_4c = uRam00000001468b5d80;
  local_68 = 0;
  local_58 = 1;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_a8 = 1;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_98,&DAT_146ab6e78,(int)local_78 << 4);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_98);
  if (local_80 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141ed9d70 FUN_141ed9d70 body=312 status=ok
// SIG undefined FUN_141ed9d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ed9d70(longlong param_1)

{
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined1 local_88 [8];
  undefined **local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  undefined ***local_50;
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
  local_70 = 0x24;
  local_78 = (undefined8 *)0x0;
  local_80 = &PTR_GetBoundProgramCounterForTimerManager_144e09148;
  local_68 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  local_98 = &local_58;
  local_a0 = 1;
  *local_78 = 0x300020000;
  local_78[1] = 0x5000400010003;
  local_78[2] = 0x6000700040007;
  local_78[3] = 0x500010000;
  local_78[4] = 0x6000200040005;
  local_78[5] = 0x3000700020007;
  *(undefined4 *)(local_78 + 6) = 0x40000;
  *(undefined4 *)((longlong)local_78 + 0x34) = 6;
  *(undefined4 *)(local_78 + 7) = 0x20006;
  *(undefined4 *)((longlong)local_78 + 0x3c) = 0x30001;
  local_78[8] = 0x5000700010007;
  local_50 = &local_80;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_58 = 0;
  local_a8 = (int)local_70 * 2;
  local_48 = 1;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_88,&DAT_146ab6e78,2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141ed9eb0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FRenderGraphResourcePool>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ede1d0;
  FRenderResource::ReleaseResource();
  FIndexBuffer::~FIndexBuffer(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ed9f00 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FSortOffsetBuffers>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ede210;
  FRenderResource::ReleaseResource();
  FUN_140458410(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141ed9f50 FUN_141ed9f50 body=79 status=ok
// SIG undefined FUN_141ed9f50(void)

undefined8 * FUN_141ed9f50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144ede250;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FIndexBuffer::~FIndexBuffer(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141ed9fa0 InitResource body=125 status=ok
// SIG undefined InitResource(void)

void FRenderResource::InitResource(longlong *param_1)

{
  longlong *plVar1;
  
  if ((char)param_1[5] == '\0') {
    plVar1 = param_1 + 2;
    *plVar1 = 0;
    param_1[3] = 0;
    param_1[4] = (longlong)param_1;
    if (DAT_146ac3f38 != (longlong *)0x0) {
      DAT_146ac3f38[1] = (longlong)plVar1;
    }
    *plVar1 = (longlong)DAT_146ac3f38;
    param_1[3] = (longlong)&DAT_146ac3f38;
    DAT_146ac3f38 = plVar1;
    if (DAT_146ab62c8 != '\0') {
      (**(code **)(*param_1 + 8))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}



// FUNCTION 141eda020 ReleaseResource body=100 status=ok
// SIG undefined ReleaseResource(void)

void FRenderResource::ReleaseResource(longlong *param_1)

{
  if ((DAT_1468c2174 == '\0') && ((char)param_1[5] != '\0')) {
    if (DAT_146ab62c8 != '\0') {
      (**(code **)(*param_1 + 0x20))();
      (**(code **)(*param_1 + 0x10))(param_1);
    }
    if (param_1[2] != 0) {
      *(longlong *)(param_1[2] + 8) = param_1[3];
    }
    if ((longlong *)param_1[3] != (longlong *)0x0) {
      *(longlong *)param_1[3] = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 141eda090 FUN_141eda090 body=326 status=ok
// SIG undefined FUN_141eda090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141eda090(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined4 **local_78;
  undefined1 local_68 [8];
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 1;
  local_34 = 0;
  local_78 = &local_60;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_80 = &local_58;
  local_60 = (undefined4 *)0x0;
  local_88 = 0xa01;
  local_58 = 0;
  uStack_50 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*DAT_146ab6358 + 0x480))(DAT_146ab6358,local_68,&DAT_146ab6e78,0x10);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  *local_60 = *(undefined4 *)(param_1 + 0x40);
  local_60[1] = *(undefined4 *)(param_1 + 0x40);
  local_60[2] = *(undefined4 *)(param_1 + 0x40);
  local_60[3] = *(undefined4 *)(param_1 + 0x40);
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  local_80 = (undefined8 *)CONCAT71(local_80._1_7_,0x25);
  local_88 = 4;
  (**(code **)(*DAT_146ab6358 + 0x4a8))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  return;
}



// FUNCTION 141eda1e0 ReleaseRHI body=36 status=ok
// SIG undefined ReleaseRHI(void)

void FNullColorVertexBuffer::ReleaseRHI(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  return;
}



// FUNCTION 141eda210 FUN_141eda210 body=46 status=ok
// SIG undefined FUN_141eda210(void)

void FUN_141eda210(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 141eda240 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 *
FStaticMeshInstanceBuffer::FInstanceTransformBuffer::GetFriendlyName
          (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FDynamicStructuredBuffer",0x32);
  return param_2;
}



// FUNCTION 141eda280 FUN_141eda280 body=402 status=ok
// SIG undefined FUN_141eda280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141eda280(longlong param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined1 *local_c0;
  uint local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_48 = 1;
  local_34 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_a0 = &local_58;
  local_a8 = 8;
  local_b0 = 1;
  local_30 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_28 = 0;
  local_20 = 0;
  local_b8 = 1;
  local_c0 = (undefined1 *)CONCAT71(local_c0._1_7_,2);
  local_c8 = 1;
  (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,&local_90,&DAT_146ab6e78,1);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,local_90);
  local_c0 = local_68;
  local_b0 = CONCAT31(local_b0._1_3_,1);
  local_b8 = local_b8 & 0xffffff00;
  local_98[0] = 0xffffffff;
  local_c8 = 1;
  puVar1 = (undefined4 *)
           (**(code **)(*DAT_146ab6358 + 0x580))(DAT_146ab6358,&DAT_146ab6e78,local_90,0);
  local_c0 = (undefined1 *)CONCAT71(local_c0._1_7_,1);
  local_c8 = local_c8 & 0xffffff00;
  *puVar1 = local_98[0];
  (**(code **)(*DAT_146ab6358 + 0x588))(DAT_146ab6358,&DAT_146ab6e78,local_90,0);
  local_7c = 0x7f7fffff;
  local_88 = 0;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_98,&local_88);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
  return;
}



// FUNCTION 141eda420 `scalar_deleting_destructor' body=70 status=ok
// SIG void * `scalar_deleting_destructor'(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2017 Release */

void * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144ede290;
  FRenderResource::ReleaseResource();
  FTexture::~FTexture(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x68);
  }
  return this;
}



// FUNCTION 141eda470 FUN_141eda470 body=400 status=ok
// SIG undefined FUN_141eda470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141eda470(longlong param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined1 *local_c0;
  uint local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_48 = 1;
  local_34 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_a0 = &local_58;
  local_a8 = 8;
  local_b0 = 1;
  local_30 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_28 = 0;
  local_20 = 0;
  local_b8 = 1;
  local_c0 = (undefined1 *)CONCAT71(local_c0._1_7_,2);
  local_c8 = 1;
  (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,&local_90,&DAT_146ab6e78,1);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,local_90);
  local_c0 = local_68;
  local_b0 = CONCAT31(local_b0._1_3_,1);
  local_b8 = local_b8 & 0xffffff00;
  local_98[0] = 0xff000000;
  local_c8 = 1;
  puVar1 = (undefined4 *)
           (**(code **)(*DAT_146ab6358 + 0x580))(DAT_146ab6358,&DAT_146ab6e78,local_90,0);
  local_c0 = (undefined1 *)CONCAT71(local_c0._1_7_,1);
  local_c8 = local_c8 & 0xffffff00;
  *puVar1 = local_98[0];
  (**(code **)(*DAT_146ab6358 + 0x588))(DAT_146ab6358,&DAT_146ab6e78,local_90,0);
  local_7c = 0x7f7fffff;
  local_88 = 0;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_98,&local_88);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
  return;
}



// FUNCTION 141eda600 `scalar_deleting_destructor' body=70 status=ok
// SIG void * `scalar_deleting_destructor'(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2017 Release */

void * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144ede2f0;
  FRenderResource::ReleaseResource();
  FTexture::~FTexture(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x68);
  }
  return this;
}



// FUNCTION 141eda650 FUN_141eda650 body=389 status=ok
// SIG undefined FUN_141eda650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141eda650(longlong param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined1 *local_c0;
  uint local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_48 = 1;
  local_34 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_a0 = &local_58;
  local_a8 = 8;
  local_b0 = 1;
  local_30 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_28 = 0;
  local_20 = 0;
  local_b8 = 1;
  local_c0 = (undefined1 *)CONCAT71(local_c0._1_7_,0x20);
  local_c8 = 1;
  (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,&local_98,&DAT_146ab6e78,1);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,local_98);
  local_c0 = local_68;
  local_b0 = CONCAT31(local_b0._1_3_,1);
  local_b8 = local_b8 & 0xffffff00;
  local_c8 = 1;
  puVar1 = (undefined4 *)
           (**(code **)(*DAT_146ab6358 + 0x580))(DAT_146ab6358,&DAT_146ab6e78,local_98,0);
  local_c0 = (undefined1 *)CONCAT71(local_c0._1_7_,1);
  local_c8 = local_c8 & 0xffffff00;
  *puVar1 = 1;
  (**(code **)(*DAT_146ab6358 + 0x588))(DAT_146ab6358,&DAT_146ab6e78,local_98,0);
  local_84 = 0x7f7fffff;
  local_90 = 0;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_70,&local_90);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_70);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_70);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_98);
  return;
}



// FUNCTION 141eda7e0 `scalar_deleting_destructor' body=70 status=ok
// SIG void * `scalar_deleting_destructor'(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2017 Release */

void * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144ede350;
  FRenderResource::ReleaseResource();
  FTexture::~FTexture(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x68);
  }
  return this;
}



// FUNCTION 141eda830 FUN_141eda830 body=385 status=ok
// SIG undefined FUN_141eda830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141eda830(longlong param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined1 *local_c0;
  uint local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_48 = 1;
  local_34 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_a0 = &local_58;
  local_a8 = 8;
  local_b0 = 1;
  local_30 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_28 = 0;
  local_20 = 0;
  local_b8 = 1;
  local_c0 = (undefined1 *)CONCAT71(local_c0._1_7_,0x20);
  local_c8 = 1;
  (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,&local_98,&DAT_146ab6e78,1);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,local_98);
  local_c0 = local_68;
  local_b0 = CONCAT31(local_b0._1_3_,1);
  local_b8 = local_b8 & 0xffffff00;
  local_c8 = 1;
  puVar1 = (undefined4 *)
           (**(code **)(*DAT_146ab6358 + 0x580))(DAT_146ab6358,&DAT_146ab6e78,local_98,0);
  local_c0 = (undefined1 *)CONCAT71(local_c0._1_7_,1);
  local_c8 = local_c8 & 0xffffff00;
  *puVar1 = 0;
  (**(code **)(*DAT_146ab6358 + 0x588))(DAT_146ab6358,&DAT_146ab6e78,local_98,0);
  local_84 = 0x7f7fffff;
  local_90 = 0;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_70,&local_90);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_70);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_70);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_98);
  return;
}



// FUNCTION 141eda9c0 `scalar_deleting_destructor' body=70 status=ok
// SIG void * `scalar_deleting_destructor'(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2017 Release */

void * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144ede3b0;
  FRenderResource::ReleaseResource();
  FTexture::~FTexture(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x68);
  }
  return this;
}



// FUNCTION 141edaa10 FUN_141edaa10 body=418 status=ok
// SIG undefined FUN_141edaa10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141edaa10(longlong param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  uint local_c0;
  undefined4 *local_b8;
  uint local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_48 = 1;
  local_34 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_a0 = &local_58;
  local_a8 = 8;
  local_b0 = 1;
  local_30 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_28 = 0;
  local_20 = 0;
  local_b8 = (undefined4 *)CONCAT71(local_b8._1_7_,2);
  local_c0 = 1;
  local_c8 = 1;
  (**(code **)(*DAT_146ab6358 + 0x5f0))(DAT_146ab6358,&local_90,&DAT_146ab6e78,1);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,local_90);
  local_b8 = local_88;
  local_a8 = CONCAT31(local_a8._1_3_,1);
  local_b0 = local_b0 & 0xffffff00;
  local_88[0] = 0;
  local_c0 = 1;
  local_c8 = 0;
  puVar1 = (undefined4 *)
           (**(code **)(*DAT_146ab6358 + 0x598))(DAT_146ab6358,&DAT_146ab6e78,local_90,0);
  if (puVar1 != (undefined4 *)0x0) {
    local_b8 = (undefined4 *)CONCAT71(local_b8._1_7_,1);
    local_98[0] = 0xffffffff;
    *puVar1 = 0xffffffff;
    local_c0 = local_c0 & 0xffffff00;
    local_c8 = 0;
    (**(code **)(*DAT_146ab6358 + 0x5a0))(DAT_146ab6358,&DAT_146ab6e78,local_90,0);
  }
  local_74 = 0x7f7fffff;
  local_80 = 0;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_98,&local_80);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
  return;
}



// FUNCTION 141edabc0 `scalar_deleting_destructor' body=70 status=ok
// SIG void * `scalar_deleting_destructor'(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2017 Release */

void * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144ede410;
  FRenderResource::ReleaseResource();
  FTexture::~FTexture(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x68);
  }
  return this;
}



// FUNCTION 141edac10 FUN_141edac10 body=416 status=ok
// SIG undefined FUN_141edac10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141edac10(longlong param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  uint local_c0;
  undefined4 *local_b8;
  uint local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_48 = 1;
  local_34 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_a0 = &local_58;
  local_a8 = 8;
  local_b0 = 1;
  local_30 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_28 = 0;
  local_20 = 0;
  local_b8 = (undefined4 *)CONCAT71(local_b8._1_7_,2);
  local_c0 = 1;
  local_c8 = 1;
  (**(code **)(*DAT_146ab6358 + 0x5f0))(DAT_146ab6358,&local_90,&DAT_146ab6e78,1);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,local_90);
  local_b8 = local_88;
  local_a8 = CONCAT31(local_a8._1_3_,1);
  local_b0 = local_b0 & 0xffffff00;
  local_88[0] = 0;
  local_c0 = 1;
  local_c8 = 0;
  puVar1 = (undefined4 *)
           (**(code **)(*DAT_146ab6358 + 0x598))(DAT_146ab6358,&DAT_146ab6e78,local_90,0);
  if (puVar1 != (undefined4 *)0x0) {
    local_b8 = (undefined4 *)CONCAT71(local_b8._1_7_,1);
    local_98[0] = 0xff000000;
    *puVar1 = 0xff000000;
    local_c0 = local_c0 & 0xffffff00;
    local_c8 = 0;
    (**(code **)(*DAT_146ab6358 + 0x5a0))(DAT_146ab6358,&DAT_146ab6e78,local_90,0);
  }
  local_74 = 0x7f7fffff;
  local_80 = 0;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_98,&local_80);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
  return;
}



// FUNCTION 141edadb0 `scalar_deleting_destructor' body=70 status=ok
// SIG void * `scalar_deleting_destructor'(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2017 Release */

void * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144ede470;
  FRenderResource::ReleaseResource();
  FTexture::~FTexture(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x68);
  }
  return this;
}



// FUNCTION 141edae00 FUN_141edae00 body=557 status=ok
// SIG undefined FUN_141edae00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141edae00(longlong param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined4 *local_c0;
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_48 = 1;
  local_34 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_a0 = &local_58;
  local_a8 = 8;
  local_b0 = 1;
  local_30 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_28 = 0;
  local_20 = 0;
  local_b8 = 2;
  local_c0 = (undefined4 *)CONCAT44(local_c0._4_4_,1);
  local_c8 = (undefined4 *)CONCAT44(local_c8._4_4_,1);
  (**(code **)(*DAT_146ab6358 + 0x5f8))(DAT_146ab6358,&local_90,&DAT_146ab6e78,1);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,local_90);
  uVar1 = local_90;
  local_88 = 0;
  local_84 = 0;
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  }
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  local_c0 = &local_88;
  local_b8 = 0;
  local_c8 = &local_84;
  puVar2 = (undefined4 *)(**(code **)(*DAT_146ab6358 + 0x2b8))(DAT_146ab6358,uVar1,0,1);
  if (puVar2 != (undefined4 *)0x0) {
    local_98[0] = 0xffffffff;
    *puVar2 = 0xffffffff;
    if (DAT_146ab6e8c != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ed93a0(&DAT_146ab6e78);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
    }
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
    (**(code **)(*DAT_146ab6358 + 0x2c0))(DAT_146ab6358,local_90,0,0);
  }
  local_74 = 0x7f7fffff;
  local_80 = 0;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_98,&local_80);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
  return;
}



// FUNCTION 141edb030 `scalar_deleting_destructor' body=70 status=ok
// SIG void * `scalar_deleting_destructor'(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2017 Release */

void * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144ede4d0;
  FRenderResource::ReleaseResource();
  FTexture::~FTexture(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x68);
  }
  return this;
}



// FUNCTION 141edb080 FUN_141edb080 body=555 status=ok
// SIG undefined FUN_141edb080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141edb080(longlong param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined4 *local_c0;
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_48 = 1;
  local_34 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_a0 = &local_58;
  local_a8 = 8;
  local_b0 = 1;
  local_30 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_28 = 0;
  local_20 = 0;
  local_b8 = 2;
  local_c0 = (undefined4 *)CONCAT44(local_c0._4_4_,1);
  local_c8 = (undefined4 *)CONCAT44(local_c8._4_4_,1);
  (**(code **)(*DAT_146ab6358 + 0x5f8))(DAT_146ab6358,&local_90,&DAT_146ab6e78,1);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,local_90);
  uVar1 = local_90;
  local_88 = 0;
  local_84 = 0;
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  }
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  local_c0 = &local_88;
  local_b8 = 0;
  local_c8 = &local_84;
  puVar2 = (undefined4 *)(**(code **)(*DAT_146ab6358 + 0x2b8))(DAT_146ab6358,uVar1,0,1);
  if (puVar2 != (undefined4 *)0x0) {
    local_98[0] = 0xff000000;
    *puVar2 = 0xff000000;
    if (DAT_146ab6e8c != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ed93a0(&DAT_146ab6e78);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
    }
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
    (**(code **)(*DAT_146ab6358 + 0x2c0))(DAT_146ab6358,local_90,0,0);
  }
  local_74 = 0x7f7fffff;
  local_80 = 0;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_98,&local_80);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
  return;
}



// FUNCTION 141edb2b0 `scalar_deleting_destructor' body=70 status=ok
// SIG void * `scalar_deleting_destructor'(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2017 Release */

void * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144ede530;
  FRenderResource::ReleaseResource();
  FTexture::~FTexture(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x68);
  }
  return this;
}



// FUNCTION 141edb300 FUN_141edb300 body=348 status=ok
// SIG undefined FUN_141edb300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141edb300(longlong param_1)

{
  void *pvVar1;
  size_t _Size;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined **local_88;
  void *local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined ***local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_90 = *(int *)(param_1 + 0x4c);
  _Size = (size_t)local_90;
  local_68 = 0;
  local_58 = 1;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_98 = (void *)0x0;
  local_8c = 0;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  if (0 < local_90) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_98);
  }
  pvVar1 = local_98;
  _guard_xfg_dispatch_icall_nop(local_98,0,_Size);
  local_88 = &PTR_GetBoundProgramCounterForTimerManager_144163fd8;
  local_60 = &local_88;
  local_b8 = *(undefined4 *)(param_1 + 0x4c);
  local_a8 = &local_68;
  local_b0 = 0x201;
  local_80 = pvVar1;
  local_78 = local_b8;
  (**(code **)(*DAT_146ab6358 + 0x498))
            (DAT_146ab6358,&local_98,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x48));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,&local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_98);
  (**(code **)(*DAT_146ab6358 + 0x620))
            (DAT_146ab6358,&local_98,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,&local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_98);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}



// FUNCTION 141edb460 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FSortOffsetBuffers>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ede590;
  FRenderResource::ReleaseResource();
  FUN_141edcfa0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141edb4b0 FUN_141edb4b0 body=324 status=ok
// SIG undefined FUN_141edb4b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141edb4b0(longlong param_1)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 **local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined **local_68;
  undefined4 local_60;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (DAT_1464c9c20 != '\0') {
    local_68 = &PTR_FUN_144ede5d0;
    local_a0 = &local_58;
    local_58 = &local_68;
    local_a8 = 8;
    local_b0 = 1;
    local_48 = 1;
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_b8 = 0x3c;
    local_60 = 0;
    local_50 = 0;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_c0 = 1;
    local_c8 = 1;
    (**(code **)(*DAT_146ab6358 + 0x5f8))(DAT_146ab6358,&local_70,&DAT_146ab6e78,1);
    TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,local_70);
    local_8c = 0x7f7fffff;
    local_98 = 0;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_78,&local_98);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_78);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_70);
  }
  return;
}



// FUNCTION 141edb600 `scalar_deleting_destructor' body=70 status=ok
// SIG void * `scalar_deleting_destructor'(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2017 Release */

void * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144ede5f8;
  FRenderResource::ReleaseResource();
  FTexture::~FTexture(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x68);
  }
  return this;
}



// FUNCTION 141edb650 FUN_141edb650 body=497 status=ok
// SIG undefined FUN_141edb650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141edb650(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint *local_d0;
  uint local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  uint local_a0 [2];
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  ulonglong uVar5;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_58 = 1;
  local_68 = 0;
  uStack_60 = 0;
  local_b0 = &local_68;
  local_b8 = 8;
  local_c0 = 1;
  local_44 = 0;
  uVar6 = 0x800;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_c8 = 0xc;
  local_d0 = (uint *)CONCAT71(local_d0._1_7_,2);
  local_d8 = 0x800;
  (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,&local_a8,&DAT_146ab6e78,0x800);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,local_a8);
  puVar3 = &DAT_1464caf8c;
  uVar5 = 0;
  do {
    local_d0 = local_a0;
    local_c0 = CONCAT31(local_c0._1_3_,1);
    local_c8 = local_c8 & 0xffffff00;
    local_d8 = 1;
    lVar1 = (**(code **)(*DAT_146ab6358 + 0x580))(DAT_146ab6358,&DAT_146ab6e78,local_a8,uVar5);
    if (uVar6 != 0) {
      uVar7 = (ulonglong)uVar6;
      do {
        uVar2 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined4 *)(lVar1 + uVar2 * 4) = *puVar3;
            uVar2 = uVar2 + 1;
          } while ((longlong)uVar2 < (longlong)(int)uVar6);
        }
        lVar1 = lVar1 + (ulonglong)(local_a0[0] >> 2) * 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    local_d0 = (uint *)CONCAT71(local_d0._1_7_,1);
    local_d8 = local_d8 & 0xffffff00;
    (**(code **)(*DAT_146ab6358 + 0x588))(DAT_146ab6358,&DAT_146ab6e78,local_a8,uVar5);
    uVar6 = (int)uVar6 >> 1;
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    puVar3 = puVar3 + -1;
  } while ((int)uVar4 < 0xc);
  local_8c = 0x7f7fffff;
  local_98 = 0;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_78,&local_98);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_78);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
  return;
}



// FUNCTION 141edb860 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FMipColorTexture::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FTexture::~FTexture();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141edb8a0 FUN_141edb8a0 body=408 status=ok
// SIG undefined FUN_141edb8a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141edb8a0(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  uint local_a8;
  undefined8 *local_a0;
  undefined1 local_98;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar2 = 0;
  local_48 = 1;
  local_34 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_a0 = &local_58;
  local_30 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_28 = 0;
  local_20 = 0;
  local_a8 = 0;
  local_b0 = 1;
  local_b8 = CONCAT31(local_b8._1_3_,*(undefined1 *)(param_1 + 0x6c));
  (**(code **)(*DAT_146ab6358 + 0x660))(DAT_146ab6358,&local_88,&DAT_146ab6e78,1);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,local_88);
  do {
    local_a0 = (undefined8 *)local_80;
    local_98 = 0;
    local_a8 = 1;
    local_b0 = 0;
    local_b8 = 0;
    puVar1 = (undefined4 *)
             (**(code **)(*DAT_146ab6358 + 0x678))(DAT_146ab6358,&DAT_146ab6e78,local_88,uVar2);
    local_a8 = local_a8 & 0xffffff00;
    local_b0 = 0;
    *puVar1 = *(undefined4 *)(param_1 + 0x68);
    local_b8 = 0;
    (**(code **)(*DAT_146ab6358 + 0x680))(DAT_146ab6358,&DAT_146ab6e78,local_88,uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  local_6c = 0x7f7fffff;
  local_78 = 0;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_80,&local_78);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_80);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_80);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
  return;
}



// FUNCTION 141edba40 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FSolidColorTextureCube::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FTexture::~FTexture();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141edba80 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FBlackTextureCube>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ede718;
  FRenderResource::ReleaseResource();
  FTexture::~FTexture(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141edbad0 FUN_141edbad0 body=467 status=ok
// SIG undefined FUN_141edbad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141edbad0(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  uint local_b8;
  undefined4 *local_b0;
  undefined8 *local_a8;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 4) {
    iVar1 = DAT_1464c9c14;
  }
  if (2 < iVar1) {
    local_a8 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,8);
    uVar3 = 0;
    local_54 = _DAT_1468b5d78;
    uStack_50 = uRam00000001468b5d7c;
    uStack_4c = uRam00000001468b5d80;
    uStack_48 = uRam00000001468b5d84;
    local_58 = 1;
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_b8 = 1;
    local_c0 = CONCAT31(local_c0._1_3_,2);
    local_c8 = 1;
    (**(code **)(*DAT_146ab6358 + 0x668))(DAT_146ab6358,&local_90,&DAT_146ab6e78,1);
    TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,local_90);
    local_98[0] = 0;
    do {
      local_b0 = local_98;
      local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffffffffff00);
      local_b8 = 1;
      local_c0 = 0;
      local_c8 = 0;
      puVar2 = (undefined4 *)
               (**(code **)(*DAT_146ab6358 + 0x678))(DAT_146ab6358,&DAT_146ab6e78,local_90,uVar3);
      local_b8 = local_b8 & 0xffffff00;
      local_c0 = 0;
      local_c8 = 0;
      *puVar2 = 0;
      (**(code **)(*DAT_146ab6358 + 0x680))(DAT_146ab6358,&DAT_146ab6e78,local_90,uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 6);
    local_7c = 0x7f7fffff;
    local_88 = 0;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_98,&local_88);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_98);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_98);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
  }
  return;
}



// FUNCTION 141edbcb0 `scalar_deleting_destructor' body=70 status=ok
// SIG void * `scalar_deleting_destructor'(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2017 Release */

void * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144ede778;
  FRenderResource::ReleaseResource();
  FTexture::~FTexture(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x68);
  }
  return this;
}



// FUNCTION 141edbd00 FUN_141edbd00 body=168 status=ok
// SIG undefined FUN_141edbd00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141edbd00(longlong param_1)

{
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  undefined2 local_128;
  undefined4 local_126;
  undefined2 local_122;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_28 = 1;
  TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_128,0);
  local_128 = 0;
  local_126 = 0xc0003;
  local_122 = 0;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_138,&DAT_146ab6e78,&local_128);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_138);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_138);
  return;
}



// FUNCTION 141edbdb0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FRenderGraphResourcePool>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ede7d8;
  FRenderResource::ReleaseResource();
  FUN_141edd670(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141edbe00 FUN_141edbe00 body=784 status=ok
// SIG undefined FUN_141edbe00(void)

uint * FUN_141edbe00(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

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
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)(*param_1 + 4 + (longlong)(int)uVar10 * 0x30);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x30) = 0xffffffff;
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
  _Src = (undefined8 *)((longlong)(int)uVar10 * 0x30 + *param_1);
  param_3 = (undefined8 *)*param_3;
  local_res8[0] = local_res8[0] & 0xffffff00;
  *_Src = 0;
  *_Src = *param_3;
  *param_3 = 0;
  *(undefined4 *)(_Src + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)_Src + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  _Src[2] = 0;
  _Src[3] = 0;
  *(undefined2 *)(_Src + 4) = 0;
  *(undefined2 *)((longlong)_Src + 0x22) = 0;
  *(undefined4 *)(_Src + 5) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar10 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      plVar13 = (longlong *)(lVar8 * 0x30 + *param_1);
      if (plVar13[2] != 0) {
        FMemory::Free();
      }
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar13,_Src,0x28);
      uVar4 = *param_2;
      bVar2 = (byte)uVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = uVar4;
      }
      puVar5 = (undefined4 *)((longlong)(int)uVar4 * 0x30 + *param_1);
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
      goto LAB_141edc0e5;
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
    *(uint *)((longlong)_Src + 0x2c) = uVar4;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
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
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141edc0e5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141edc110 FUN_141edc110 body=757 status=ok
// SIG undefined FUN_141edc110(void)

int * FUN_141edc110(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  bool local_res8;
  undefined8 local_48;
  undefined8 local_40;
  
  iVar5 = 1;
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar1 = *(int *)((longlong)iVar7 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar7;
  local_48 = 0;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  local_40 = 0;
  puVar11 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar11 = *puVar11 | 1 << ((byte)iVar7 & 0x1f);
  puVar11 = (uint *)((longlong)iVar7 * 0x20 + *param_1);
  *puVar11 = *(uint *)*param_3;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  FUN_141edcc30(&local_48);
  puVar11[6] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar10 != 1) {
    iVar7 = iVar12;
    if (uVar10 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar11) * 4);
      if (iVar8 != -1) {
        do {
          iVar7 = iVar8;
          if (*(uint *)((longlong)iVar8 * 0x20 + *param_1) == *puVar11) break;
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *param_1);
          iVar7 = iVar12;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar7 * 0x20 + *param_1);
      FUN_141edcc30((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0x18);
      iVar5 = *param_2;
      bVar2 = (byte)iVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar5;
      }
      puVar6 = (undefined4 *)((longlong)iVar5 * 0x20 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar6[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar5;
      plVar4 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar4 +
                        (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_141edc3e1;
    }
  }
  if (3 < uVar10) {
    uVar3 = (uVar10 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar9 = '\0';
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar12;
    }
    uVar3 = (uVar10 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar9 = '\x1f' - (char)iVar12;
    }
    iVar5 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar5 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *puVar11;
    puVar11[7] = uVar10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar11[6] = *(uint *)((longlong)plVar4 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar5;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141edc3e1:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141edc410 FUN_141edc410 body=839 status=ok
// SIG undefined FUN_141edc410(void)

int * FUN_141edc410(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  char cVar16;
  int iVar17;
  undefined8 *_Src;
  undefined2 *puVar18;
  bool local_res8;
  
  iVar8 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar5 = *(int *)((longlong)iVar12 * 0x20 + 4 + *param_1);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar12;
  local_res8 = false;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  puVar2 = (undefined8 *)*param_3;
  puVar11 = (undefined4 *)param_3[1];
  puVar18 = &DAT_143f3eda8;
  _Src = (undefined8 *)((longlong)iVar12 * 0x20 + *param_1);
  *_Src = 0;
  *_Src = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(_Src + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)_Src + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  *(undefined4 *)(_Src + 2) = *puVar11;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar12 = iVar17;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      if (*(int *)(_Src + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*_Src;
      }
      iVar4 = FUN_140438070(puVar10);
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar4) * 4);
      if (iVar4 != -1) {
        lVar7 = *param_1;
        do {
          lVar13 = (longlong)iVar4 * 0x20;
          if (*(int *)(_Src + 1) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = (undefined2 *)*_Src;
          }
          if (*(int *)(lVar13 + 8 + lVar7) == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = *(undefined2 **)(lVar13 + lVar7);
          }
          iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
          iVar12 = iVar4;
          if (iVar5 == 0) break;
          lVar7 = *param_1;
          iVar4 = *(int *)(lVar7 + 0x18 + lVar13);
          iVar12 = iVar17;
        } while (iVar4 != -1);
      }
    }
    local_res8 = iVar12 != -1;
    if (local_res8) {
      plVar14 = (longlong *)((longlong)iVar12 * 0x20 + *param_1);
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar14,_Src,0x18);
      iVar8 = *param_2;
      bVar3 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar8;
      }
      puVar11 = (undefined4 *)((longlong)iVar8 * 0x20 + *param_1);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      puVar11[1] = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar14 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar14 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141edc72e;
    }
  }
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar15) {
    uVar6 = (uVar15 >> 1) + 8;
    iVar17 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar16 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar17;
    }
    uVar6 = (uVar15 >> 1) + 7;
    iVar17 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar16 = '\x1f' - (char)iVar17;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar16 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    iVar17 = *param_2;
    if (*(int *)(_Src + 1) != 0) {
      puVar18 = (undefined2 *)*_Src;
    }
    uVar15 = FUN_140438070(puVar18);
    uVar15 = (int)param_1[9] - 1U & uVar15;
    *(uint *)((longlong)_Src + 0x1c) = uVar15;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar17;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Rehash(param_1);
  }
LAB_141edc72e:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141edc760 FUN_141edc760 body=794 status=ok
// SIG undefined FUN_141edc760(void)

undefined1 * FUN_141edc760(undefined1 *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong **pplVar12;
  longlong local_res8 [2];
  longlong *local_88 [2];
  longlong *local_78 [2];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  
  cVar7 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa70)();
  if (cVar7 != '\0') {
    (*(code *)PTR_StartProfileThreadUsage_1464aaa58)();
  }
  param_1[2] = param_2;
  *param_1 = DAT_146ac3ac6;
  param_1[1] = DAT_146ac3ac5;
  if (param_2 == '\0') {
    if ((DAT_1468b5054 == 0) && (FUN_141ee24f0(0), uVar6 = DAT_1464a8210, DAT_146ac3ac5 != '\0')) {
      plVar8 = (longlong *)FMemory::Realloc(0,0x20);
      local_78[0] = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_GetPoolName_143f3f048;
        plVar8[1] = (longlong)&LAB_141ee6a90;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[3] = lVar9;
        *plVar8 = (longlong)&PTR_GetPoolName_143f3f090;
      }
      plVar10 = (longlong *)FUN_141d29000(local_68,0,0xff);
      lVar9 = *plVar10;
      pplVar12 = (longlong **)(lVar9 + 0x10);
      *pplVar12 = (longlong *)0x0;
      *(undefined4 *)(lVar9 + 0x18) = 0;
      if ((local_78 != pplVar12) && (plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x30))(plVar8,pplVar12);
      }
      *(undefined4 *)(lVar9 + 0x20) = uVar6;
      lVar9 = *plVar10;
      lVar4 = plVar10[2];
      lVar3 = plVar10[1];
      local_res8[0] = *(longlong *)(lVar9 + 0x30);
      if (local_res8[0] != 0) {
        LOCK();
        *(int *)(local_res8[0] + 0x48) = *(int *)(local_res8[0] + 0x48) + 1;
        UNLOCK();
        plVar8 = local_78[0];
      }
      FUN_1409691d0(lVar9,lVar3,(int)lVar4,1);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        local_78[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
        if (local_78[0] != (longlong *)0x0) {
          FMemory::Free(local_78[0]);
        }
      }
      plVar8 = (longlong *)FTaskGraphInterface::Get();
      cVar7 = (**(code **)(*plVar8 + 0x20))(plVar8,2);
      if (cVar7 == '\0') {
        uVar11 = FTaskGraphInterface::Get();
        FTaskGraphInterface::WaitUntilTaskCompletes(uVar11,local_res8,2);
      }
      else {
        while (DAT_1468b5054 == 0) {
          FUN_1416b1760(0);
        }
      }
      plVar8 = (longlong *)FMemory::Realloc(0,0x20);
      local_88[0] = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_GetPoolName_143f3f048;
        plVar8[1] = (longlong)WaitAndResumeRendering;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[3] = lVar9;
        *plVar8 = (longlong)&PTR_GetPoolName_143f3f090;
      }
      plVar10 = (longlong *)FUN_141d29000(local_50,0,0xff);
      lVar9 = *plVar10;
      pplVar12 = (longlong **)(lVar9 + 0x10);
      *pplVar12 = (longlong *)0x0;
      *(undefined4 *)(lVar9 + 0x18) = 0;
      if ((local_88 != pplVar12) && (plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x30))(plVar8,pplVar12);
      }
      *(undefined4 *)(lVar9 + 0x20) = uVar6;
      lVar9 = *plVar10;
      lVar5 = plVar10[2];
      lVar3 = plVar10[1];
      lVar4 = *(longlong *)(lVar9 + 0x30);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
        UNLOCK();
        plVar8 = local_88[0];
      }
      FUN_1409691d0(lVar9,lVar3,(int)lVar5,1);
      if (lVar4 != 0) {
        LOCK();
        piVar1 = (int *)(lVar4 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar8 = local_88[0];
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar4);
          plVar8 = local_88[0];
        }
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        local_88[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
        if (local_88[0] != (longlong *)0x0) {
          FMemory::Free(local_88[0]);
        }
      }
      if (local_res8[0] != 0) {
        LOCK();
        piVar1 = (int *)(local_res8[0] + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(local_res8[0]);
        }
      }
      return param_1;
    }
  }
  else {
    FUN_141ee6720();
    DAT_146ac3ac6 = 0;
  }
  LOCK();
  DAT_1468b5054 = DAT_1468b5054 + 1;
  UNLOCK();
  return param_1;
}



// FUNCTION 141edca80 FTextureReference body=52 status=ok
// SIG undefined FTextureReference(void)

undefined8 * FTextureReference::FTextureReference(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_144ede818;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0xc7efffffe0000000;
  return param_1;
}



// FUNCTION 141edcac0 FUniformBufferStruct body=359 status=ok
// SIG undefined FUniformBufferStruct(void)

undefined8 *
FUniformBufferStruct::FUniformBufferStruct
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5,undefined4 param_6,undefined8 *param_7,char param_8)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 *local_20;
  
  param_1[1] = param_3;
  *param_1 = &PTR__scalar_deleting_destructor__144d91980;
  param_1[3] = param_5;
  *(undefined4 *)(param_1 + 4) = param_6;
  param_1[2] = param_4;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  uVar3 = *param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar3;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  iVar2 = *(int *)(param_7 + 1);
  _Src = (void *)*param_7;
  *(int *)(param_1 + 0xd) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1 + 0xc,iVar2,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0xc],_Src,(longlong)iVar2 * 0x30);
  }
  puVar1 = param_1 + 0xe;
  *puVar1 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_1;
  if (param_8 == '\0') {
    InitializeLayout(param_1);
  }
  else {
    if (DAT_146ac3e90 != (undefined8 *)0x0) {
      DAT_146ac3e90[1] = puVar1;
    }
    *puVar1 = DAT_146ac3e90;
    param_1[0xf] = &DAT_146ac3e90;
    DAT_146ac3e90 = puVar1;
    FName::FName(&param_7,param_1[1],1);
    param_5 = param_1;
    uVar3 = FName::FName(local_res8,param_1[1],1);
    uVar4 = FUN_141ee3080();
    local_20 = &param_5;
    local_28 = uVar3;
    FUN_1416e1690(uVar4,&param_8,&local_28,0);
  }
  return param_1;
}



// FUNCTION 141edcc30 FUN_141edcc30 body=246 status=ok
// SIG undefined FUN_141edcc30(void)

void FUN_141edcc30(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)*param_1;
  for (iVar3 = (int)param_1[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = (undefined8 *)*plVar2;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar1 + 7);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar1 + 6);
    *puVar1 = &PTR_FUN_143f48a78;
    if ((*(char *)(puVar1 + 5) != '\0') && (DAT_1468c2174 == '\0')) {
      LowLevelFatalErrorHandler
                ("Unknown",0xac,L"A FRenderResource was deleted without being released first!");
      FDebug::AssertFailed
                (&DAT_144edb84d,"Unknown",0xac,
                 L"A FRenderResource was deleted without being released first!");
    }
    FMemory::Free(*plVar2);
    plVar2 = plVar2 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141edcd30 ~TIndirectArray<FDynamicIndexBuffer,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TIndirectArray<FDynamicIndexBuffer,FDefaultAllocator>(void)

void TIndirectArray<FDynamicIndexBuffer,FDefaultAllocator>::
     ~TIndirectArray<FDynamicIndexBuffer,FDefaultAllocator>(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_140458410(*puVar1);
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141edcda0 ~TIndirectArray<FDynamicVertexBuffer,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TIndirectArray<FDynamicVertexBuffer,FDefaultAllocator>(void)

void TIndirectArray<FDynamicVertexBuffer,FDefaultAllocator>::
     ~TIndirectArray<FDynamicVertexBuffer,FDefaultAllocator>(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FIndexBuffer::~FIndexBuffer(*puVar1);
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141edce10 FUN_141edce10 body=392 status=ok
// SIG undefined FUN_141edce10(void)

void FUN_141edce10(longlong *param_1)

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
      if (bVar4) goto LAB_141edced1;
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
LAB_141edced1:
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
      FUN_141edcc30((longlong)iStack_1c * 0x20 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
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



// FUNCTION 141edcfa0 FUN_141edcfa0 body=119 status=ok
// SIG undefined FUN_141edcfa0(void)

void FUN_141edcfa0(undefined8 *param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  *param_1 = &PTR_FUN_143f48a78;
  if ((*(char *)(param_1 + 5) != '\0') && (DAT_1468c2174 == '\0')) {
    LowLevelFatalErrorHandler
              ("Unknown",0xac,L"A FRenderResource was deleted without being released first!");
    FDebug::AssertFailed
              (&DAT_144edb84d,"Unknown",0xac,
               L"A FRenderResource was deleted without being released first!");
    return;
  }
  return;
}



// FUNCTION 141edd020 FUN_141edd020 body=567 status=ok
// SIG undefined FUN_141edd020(void)

void FUN_141edd020(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
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
  
  uVar2 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  uStack_84 = 1;
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar2 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar3 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar9 = local_88 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar9;
      if (bVar4) goto LAB_141edd0ee;
      uVar3 = puVar11[lVar5 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
    iVar9 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (iStack_70 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_141edd0ee:
      uStack_74 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 5);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar3 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = param_1;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar3;
  if (uVar3 != uVar2) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar6 = puVar11[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar9 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_141edd1b2;
      uVar6 = puVar11[(longlong)iVar9 + 1];
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
    uStack_74 = (uVar10 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_141edd1b2:
      uStack_74 = uVar2;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    lVar5 = 0;
    lVar8 = (longlong)(int)uStack_4c * 0x20 + *param_1;
    lVar7 = (longlong)*(int *)(lVar8 + 0x10);
    if (0 < lVar7) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar8 + 8) + lVar5 * 8) + 0x30))();
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar7);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  FUN_141edce10(param_1);
  return;
}



// FUNCTION 141edd260 ~FPendingCleanupObjects body=102 status=ok
// SIG undefined ~FPendingCleanupObjects(void)

void FPendingCleanupObjects::~FPendingCleanupObjects(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < (int)param_1[1]) {
    lVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar3 + *param_1);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < (int)param_1[1]);
  }
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 141edd2d0 FUN_141edd2d0 body=94 status=ok
// SIG undefined FUN_141edd2d0(void)

void FUN_141edd2d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f48a78;
  if ((*(char *)(param_1 + 5) != '\0') && (DAT_1468c2174 == '\0')) {
    LowLevelFatalErrorHandler
              ("Unknown",0xac,L"A FRenderResource was deleted without being released first!");
    FDebug::AssertFailed
              (&DAT_144edb84d,"Unknown",0xac,
               L"A FRenderResource was deleted without being released first!");
    return;
  }
  return;
}



// FUNCTION 141edd330 ~FRenderingThreadTickableObjectsArray body=289 status=ok
// SIG undefined ~FRenderingThreadTickableObjectsArray(void)

void FTickableObjectRenderThread::FRenderingThreadTickableObjectsArray::
     ~FRenderingThreadTickableObjectsArray(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  
  iVar8 = (int)param_1[1];
  iVar3 = iVar8;
  do {
    if ((iVar8 < 1) || (iVar3 < 1)) {
      if (*param_1 != 0) {
        FMemory::Free();
        return;
      }
      return;
    }
    lVar1 = *(longlong *)(*param_1 + -8 + (longlong)iVar8 * 8);
    if (*(char *)(lVar1 + 8) != '\0') {
      plVar7 = &DAT_146ac3b30;
      if (*(char *)(lVar1 + 9) != '\0') {
        plVar7 = &DAT_146ac3b40;
      }
      plVar2 = (longlong *)*plVar7;
      iVar8 = (int)plVar7[1];
      for (plVar5 = plVar2; plVar5 != plVar2 + iVar8; plVar5 = plVar5 + 1) {
        if (*plVar5 == lVar1) {
          iVar4 = (int)((longlong)plVar5 - (longlong)plVar2 >> 3);
          goto LAB_141edd3c7;
        }
      }
      iVar4 = -1;
LAB_141edd3c7:
      iVar6 = (iVar8 - iVar4) + -1;
      if (iVar6 != 0) {
        ::_guard_xfg_dispatch_icall_nop(plVar2 + iVar4,plVar2 + (iVar4 + 1),(longlong)iVar6 << 3);
        iVar8 = (int)plVar7[1];
      }
      *(int *)(plVar7 + 1) = iVar8 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar7);
      *(undefined1 *)(lVar1 + 8) = 0;
    }
    iVar8 = (int)param_1[1];
    iVar3 = iVar3 + -1;
  } while( true );
}



// FUNCTION 141edd460 FUN_141edd460 body=397 status=ok
// SIG undefined FUN_141edd460(void)

void FUN_141edd460(char *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong *local_48 [2];
  undefined1 local_38 [32];
  
  if (param_1[2] == '\0') {
    LOCK();
    DAT_1468b5054 = DAT_1468b5054 + -1;
    UNLOCK();
  }
  else {
    DAT_146ac3ac6 = *param_1;
    LOCK();
    DAT_1468b5054 = DAT_1468b5054 + -1;
    UNLOCK();
    if ((*param_1 != '\0') && (param_1[1] != '\0')) {
      FUN_141ee60a0();
      uVar6 = DAT_1464a8210;
      plVar8 = (longlong *)FMemory::Realloc(0,0x20);
      local_48[0] = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_GetPoolName_143f3f048;
        plVar8[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[3] = lVar9;
        *plVar8 = (longlong)&PTR_GetPoolName_143f3f090;
      }
      plVar10 = (longlong *)FUN_141d29000(local_38,0,0xff);
      lVar9 = *plVar10;
      pplVar11 = (longlong **)(lVar9 + 0x10);
      *pplVar11 = (longlong *)0x0;
      *(undefined4 *)(lVar9 + 0x18) = 0;
      if ((local_48 != pplVar11) && (plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x30))(plVar8,pplVar11);
      }
      *(undefined4 *)(lVar9 + 0x20) = uVar6;
      lVar9 = *plVar10;
      lVar5 = plVar10[2];
      lVar3 = plVar10[1];
      lVar4 = *(longlong *)(lVar9 + 0x30);
      piVar1 = (int *)(lVar4 + 0x48);
      if (lVar4 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        plVar8 = local_48[0];
      }
      FUN_1409691d0(lVar9,lVar3,(int)lVar5,1);
      if (lVar4 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar8 = local_48[0];
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar4);
          plVar8 = local_48[0];
        }
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        lVar9 = FMemory::Realloc(plVar8,0,0);
        if (lVar9 != 0) {
          FMemory::Free(lVar9);
        }
      }
    }
  }
  cVar7 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa70)();
  if (cVar7 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141edd5e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_StartProfileThreadUsage_1464aaa60)();
  return;
}



// FUNCTION 141edd5f0 FUN_141edd5f0 body=120 status=ok
// SIG undefined FUN_141edd5f0(void)

void FUN_141edd5f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144ede818;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  *param_1 = &PTR_FUN_143f48a78;
  if ((*(char *)(param_1 + 5) != '\0') && (DAT_1468c2174 == '\0')) {
    LowLevelFatalErrorHandler
              ("Unknown",0xac,L"A FRenderResource was deleted without being released first!");
    FDebug::AssertFailed
              (&DAT_144edb84d,"Unknown",0xac,
               L"A FRenderResource was deleted without being released first!");
    return;
  }
  return;
}



// FUNCTION 141edd670 FUN_141edd670 body=110 status=ok
// SIG undefined FUN_141edd670(void)

void FUN_141edd670(undefined8 *param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  *param_1 = &PTR_FUN_143f48a78;
  if ((*(char *)(param_1 + 5) != '\0') && (DAT_1468c2174 == '\0')) {
    LowLevelFatalErrorHandler
              ("Unknown",0xac,L"A FRenderResource was deleted without being released first!");
    FDebug::AssertFailed
              (&DAT_144edb84d,"Unknown",0xac,
               L"A FRenderResource was deleted without being released first!");
    return;
  }
  return;
}



// FUNCTION 141edd6e0 FUN_141edd6e0 body=359 status=ok
// SIG undefined FUN_141edd6e0(void)

longlong * FUN_141edd6e0(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,2);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,2);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined2 **)param_1[1];
  if (puVar1 + 1 <= (undefined2 *)((undefined8 *)param_1[1])[1]) {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,2);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 3,2);
  }
  return param_1;
}



// FUNCTION 141edd850 FUN_141edd850 body=40 status=ok
// SIG undefined FUN_141edd850(void)

/* WARNING: Switch with 1 destination removed at 0x000141edd876 : 2 cases all go to same destination
    */

void FUN_141edd850(char *param_1)

{
  float fVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  DWORD DVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  bool bVar18;
  
  cVar2 = *param_1;
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  FUN_141ec65b0();
  if (DAT_146ab6e8c != 0) {
    FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  }
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  if (DAT_146ab6358 != (longlong *)0x0) {
    (**(code **)(*DAT_146ab6358 + 0x450))();
  }
  uVar16 = 0;
  lVar11 = DAT_146ab6920;
  iVar14 = DAT_146ab6a50;
joined_r0x000141ec6101:
  DAT_146ab6920 = lVar11;
  DAT_146ab6a50 = iVar14;
  if ((DAT_146ab69c0 & 0x3ffffff) != 0) {
    if ((DAT_146ab62f5 == '\0') || (DAT_146ab62c8 == '\0')) {
      while (uVar17 = FUN_141594c40(&DAT_146ab6940), lVar11 = DAT_146ab6920, iVar14 = DAT_146ab6a50,
            uVar17 != 0) {
        puVar4 = *(undefined8 **)
                  ((&DAT_1468a81f8)[uVar17 >> 0xe] + 8 + (ulonglong)(uVar17 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar17);
        lVar11 = DAT_146ab6920;
        iVar14 = DAT_146ab6a50;
        if (puVar4 == (undefined8 *)0x0) break;
        LOCK();
        bVar18 = *(int *)(puVar4 + 1) == 0;
        if (bVar18) {
          *(int *)(puVar4 + 1) = 0;
        }
        UNLOCK();
        if (bVar18) {
          (**(code **)*puVar4)(puVar4,1);
        }
        else {
          *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        }
      }
    }
    else {
      lVar11 = (longlong)iVar14;
      DAT_146ab6a50 = iVar14 + 1;
      if (DAT_146ab6a54 < DAT_146ab6a50) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&DAT_146ab6a48,iVar14);
      }
      plVar12 = DAT_146ab6a48;
      DAT_146ab6a48[lVar11 * 3] = 0;
      plVar12[lVar11 * 3 + 1] = 0;
      *(undefined4 *)(plVar12 + lVar11 * 3 + 2) = 0;
      plVar12 = DAT_146ab6a48 + lVar11 * 3;
      *(uint *)(plVar12 + 2) = DAT_146ab6398;
      if (*(int *)((longlong)plVar12 + 0xc) < 0x1000) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar12,0x1000);
      }
      LOCK();
      if (DAT_146ab69c0 == 0) {
        DAT_146ab69c0 = 0;
      }
      UNLOCK();
      uVar17 = (uint)DAT_146ab69c0;
      uVar7 = DAT_146ab69c0;
      while (uVar17 = uVar17 & 0x3ffffff, DAT_146ab69c0 = uVar7, (uVar7 & 0x3ffffff) != 0) {
        uVar15 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
        if (uVar15 < (uVar7 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        LOCK();
        bVar18 = uVar7 == DAT_146ab69c0;
        if (!bVar18) {
          uVar15 = DAT_146ab69c0;
        }
        DAT_146ab69c0 = uVar15;
        UNLOCK();
        if (bVar18) break;
        LOCK();
        if (DAT_146ab69c0 == 0) {
          DAT_146ab69c0 = 0;
        }
        UNLOCK();
        uVar17 = (uint)DAT_146ab69c0;
        uVar7 = DAT_146ab69c0;
      }
      while (lVar11 = DAT_146ab6920, iVar14 = DAT_146ab6a50, uVar17 != 0) {
        iVar14 = (int)plVar12[1];
        lVar11 = (&DAT_1468a81f8)[uVar17 >> 0xe];
        uVar3 = *(undefined8 *)(lVar11 + 8 + (ulonglong)(uVar17 & 0x3fff) * 0x18);
        *(int *)(plVar12 + 1) = iVar14 + 1;
        if (*(int *)((longlong)plVar12 + 0xc) < iVar14 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12,iVar14);
        }
        *(undefined8 *)(*plVar12 + (longlong)iVar14 * 8) = uVar3;
        uVar10 = *(uint *)(lVar11 + (ulonglong)(uVar17 & 0x3fff) * 0x18 + 0x10);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar17);
        uVar17 = uVar10;
      }
    }
    goto joined_r0x000141ec6101;
  }
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    uVar7 = 4;
    if (DVar6 != DAT_1468c21c0) goto LAB_141ec62a6;
  }
  uVar7 = uVar16;
LAB_141ec62a6:
  fVar1 = *(float *)(lVar11 + uVar7);
  if (DAT_146ab6a50 != 0) {
    if (cVar2 == '\0') {
      uVar7 = uVar16;
      plVar12 = DAT_146ab6a48;
      uVar15 = uVar16;
      iVar14 = DAT_146ab6a50;
      if (0 < DAT_146ab6a50) {
        do {
          uVar17 = (uint)uVar7;
          if ((DAT_146ab6398 <=
               (uint)(*(int *)(uVar15 + 0x10 + (longlong)plVar12) + (int)(longlong)fVar1)) &&
             (DAT_146ab62c8 != '\0')) break;
          uVar9 = (ulonglong)*(int *)(uVar15 + 8 + (longlong)plVar12);
          plVar13 = *(longlong **)(uVar15 + (longlong)plVar12);
          uVar7 = uVar9 & 0x1fffffffffffffff;
          if (plVar13 + uVar9 < plVar13) {
            uVar7 = uVar16;
          }
          uVar9 = uVar16;
          if (uVar7 != 0) {
            do {
              puVar4 = (undefined8 *)*plVar13;
              LOCK();
              bVar18 = *(int *)(puVar4 + 1) == 0;
              if (bVar18) {
                *(int *)(puVar4 + 1) = 0;
              }
              UNLOCK();
              if (bVar18) {
                if (puVar4 != (undefined8 *)0x0) {
                  (**(code **)*puVar4)(puVar4,1);
                }
              }
              else {
                *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
              }
              plVar13 = plVar13 + 1;
              uVar9 = uVar9 + 1;
              plVar12 = DAT_146ab6a48;
              iVar14 = DAT_146ab6a50;
            } while (uVar9 != uVar7);
          }
          uVar17 = uVar17 + 1;
          uVar7 = (ulonglong)uVar17;
          uVar15 = uVar15 + 0x18;
        } while ((int)uVar17 < iVar14);
        uVar10 = uVar17;
        if (uVar17 != 0) {
          do {
            if (*plVar12 != 0) {
              FMemory::Free();
            }
            plVar12 = plVar12 + 3;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          if (DAT_146ab6a50 - uVar17 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (DAT_146ab6a48,DAT_146ab6a48 + (longlong)(int)uVar17 * 3,
                       (longlong)(int)(DAT_146ab6a50 - uVar17) * 0x18);
          }
          DAT_146ab6a50 = DAT_146ab6a50 - uVar17;
          TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(&DAT_146ab6a48);
        }
      }
    }
    else {
      if (DAT_146ab6e8c != 0) {
        FUN_141ec3e80(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      (**(code **)(*DAT_146ab6358 + 0x3d0))();
      uVar7 = uVar16;
      uVar15 = uVar16;
      iVar14 = DAT_146ab6a50;
      plVar12 = DAT_146ab6a48;
      if (0 < DAT_146ab6a50) {
        do {
          plVar12 = *(longlong **)(uVar7 + (longlong)DAT_146ab6a48);
          uVar8 = (ulonglong)*(int *)(uVar7 + 8 + (longlong)DAT_146ab6a48);
          uVar9 = uVar8 & 0x1fffffffffffffff;
          if (plVar12 + uVar8 < plVar12) {
            uVar9 = uVar16;
          }
          uVar8 = uVar16;
          if (uVar9 != 0) {
            do {
              puVar4 = (undefined8 *)*plVar12;
              LOCK();
              bVar18 = *(int *)(puVar4 + 1) == 0;
              if (bVar18) {
                *(int *)(puVar4 + 1) = 0;
              }
              UNLOCK();
              if (bVar18) {
                if (puVar4 != (undefined8 *)0x0) {
                  (**(code **)*puVar4)(puVar4,1);
                }
              }
              else {
                *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
              }
              plVar12 = plVar12 + 1;
              uVar8 = uVar8 + 1;
              iVar14 = DAT_146ab6a50;
            } while (uVar8 != uVar9);
          }
          uVar17 = (int)uVar15 + 1;
          uVar7 = uVar7 + 0x18;
          uVar15 = (ulonglong)uVar17;
          plVar12 = DAT_146ab6a48;
        } while ((int)uVar17 < iVar14);
      }
      for (; iVar14 != 0; iVar14 = iVar14 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 3;
      }
      DAT_146ab6a50 = 0;
      if (DAT_146ab6a54 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (&DAT_146ab6a48,0);
      }
    }
    DAT_146ab6398 = DAT_146ab6398 + 1;
  }
  return;
}



// FUNCTION 141edd9b0 FUN_141edd9b0 body=97 status=ok
// SIG undefined FUN_141edd9b0(void)

undefined8 * FUN_141edd9b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144edeb00;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141edda20 FUN_141edda20 body=97 status=ok
// SIG undefined FUN_141edda20(void)

undefined8 * FUN_141edda20(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144edeb10;
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



// FUNCTION 141edda90 FUN_141edda90 body=97 status=ok
// SIG undefined FUN_141edda90(void)

undefined8 * FUN_141edda90(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144edeb20;
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



// FUNCTION 141eddb00 FUN_141eddb00 body=100 status=ok
// SIG undefined FUN_141eddb00(void)

undefined8 * FUN_141eddb00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144edea08;
  if (param_1[0x14] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x14] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 141eddb70 FUN_141eddb70 body=97 status=ok
// SIG undefined FUN_141eddb70(void)

undefined8 * FUN_141eddb70(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ede9d8;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141eddbe0 FUN_141eddbe0 body=97 status=ok
// SIG undefined FUN_141eddbe0(void)

undefined8 * FUN_141eddbe0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ede9e8;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141eddc50 FUN_141eddc50 body=97 status=ok
// SIG undefined FUN_141eddc50(void)

undefined8 * FUN_141eddc50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ede958;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141eddcc0 FUN_141eddcc0 body=97 status=ok
// SIG undefined FUN_141eddcc0(void)

undefined8 * FUN_141eddcc0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ede988;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141eddd30 FUN_141eddd30 body=97 status=ok
// SIG undefined FUN_141eddd30(void)

undefined8 * FUN_141eddd30(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ede998;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141eddda0 FUN_141eddda0 body=97 status=ok
// SIG undefined FUN_141eddda0(void)

undefined8 * FUN_141eddda0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ede9a8;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141edde10 FUN_141edde10 body=97 status=ok
// SIG undefined FUN_141edde10(void)

undefined8 * FUN_141edde10(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144edea18;
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



// FUNCTION 141edde80 FUN_141edde80 body=97 status=ok
// SIG undefined FUN_141edde80(void)

undefined8 * FUN_141edde80(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ede8e8;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141eddef0 FUN_141eddef0 body=97 status=ok
// SIG undefined FUN_141eddef0(void)

undefined8 * FUN_141eddef0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ede9f8;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141eddf60 FUN_141eddf60 body=97 status=ok
// SIG undefined FUN_141eddf60(void)

undefined8 * FUN_141eddf60(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ede9b8;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141eddfd0 FUN_141eddfd0 body=52 status=ok
// SIG undefined FUN_141eddfd0(void)

undefined8 FUN_141eddfd0(undefined8 param_1,ulonglong param_2)

{
  FUN_140458410();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141ede010 FUN_141ede010 body=52 status=ok
// SIG undefined FUN_141ede010(void)

undefined8 FUN_141ede010(undefined8 param_1,ulonglong param_2)

{
  FUN_141edcfa0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141ede050 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FDynamicIndexBuffer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FIndexBuffer::~FIndexBuffer();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141ede090 FUN_141ede090 body=106 status=ok
// SIG undefined FUN_141ede090(void)

undefined8 * FUN_141ede090(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_144ede898;
  if (lVar1 != 0) {
    FUN_141edd020(lVar1);
    FMemory::operator_delete(lVar1,0x58);
  }
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141ede100 FUN_141ede100 body=43 status=ok
// SIG undefined FUN_141ede100(void)

undefined8 * FUN_141ede100(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141ede130 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FRenderingThread::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144ede8f8;
  FUN_1415b5910(param_1[2]);
  param_1[2] = 0;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141ede190 FUN_141ede190 body=148 status=ok
// SIG undefined FUN_141ede190(void)

undefined8 * FUN_141ede190(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144ede818;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  *param_1 = &PTR_FUN_143f48a78;
  if ((*(char *)(param_1 + 5) != '\0') && (DAT_1468c2174 == '\0')) {
    LowLevelFatalErrorHandler
              ("Unknown",0xac,L"A FRenderResource was deleted without being released first!");
    FDebug::AssertFailed
              (&DAT_144edb84d,"Unknown",0xac,
               L"A FRenderResource was deleted without being released first!");
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141ede230 AddResourceTableEntries body=281 status=ok
// SIG undefined AddResourceTableEntries(void)

void FUniformBufferStruct::AddResourceTableEntries
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 local_res8 [4];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  longlong local_48;
  ulonglong local_40;
  undefined2 *local_38;
  int local_30;
  longlong *local_28;
  undefined4 *local_20;
  
  local_res8[0] = 0;
  FString::PrintfImpl(&local_38,&DAT_144edb850,*(undefined8 *)(param_1 + 0x10));
  puVar4 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  AddResourceTableEntriesRecursive
            (param_1,*(undefined8 *)(param_1 + 0x10),puVar4,local_res8,param_2);
  local_res18[0] = *(undefined4 *)(param_1 + 0x58);
  psVar1 = *(short **)(param_1 + 0x10);
  local_48 = 0;
  local_40 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_40 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,psVar1,(longlong)(int)uVar2 * 2);
  }
  local_28 = &local_48;
  local_20 = local_res18;
  FUN_141edc410(param_3,local_res20,&local_28,0);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141ede350 AddResourceTableEntriesRecursive body=515 status=ok
// SIG undefined AddResourceTableEntriesRecursive(void)

void FUniformBufferStruct::AddResourceTableEntriesRecursive
               (longlong param_1,short *param_2,undefined8 param_3,short *param_4,longlong *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int local_68;
  int local_64;
  longlong *local_60;
  longlong local_58 [2];
  undefined2 *local_48;
  int local_40;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar8 = 0;
    do {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + lVar8);
      if (*(int *)((longlong)puVar7 + 0x14) - 6U < 4) {
        FString::PrintfImpl(local_58,L"%s%s",param_3,*puVar7);
        TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
        ::FindId(param_5,&local_68,local_58);
        if ((local_68 == -1) || (lVar5 = (longlong)local_68 * 0x30 + *param_5, lVar5 == 0)) {
          local_60 = local_58;
          FUN_141edbe00(param_5,&local_64,&local_60,0);
          lVar5 = (longlong)local_64 * 0x30 + *param_5;
        }
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        if (*(int *)(lVar5 + 0x18) < 2) {
          if (*(short **)(lVar5 + 0x10) != param_2) {
            if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
              iVar2 = 0;
            }
            else {
              lVar3 = -1;
              do {
                lVar3 = lVar3 + 1;
              } while (param_2[lVar3] != 0);
              iVar2 = (int)lVar3 + 1;
            }
            iVar1 = 0;
            *(undefined4 *)(lVar5 + 0x18) = 0;
            if (*(int *)(lVar5 + 0x1c) != iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar5 + 0x10,iVar2);
              iVar1 = *(int *)(lVar5 + 0x18);
            }
            *(int *)(lVar5 + 0x18) = iVar1 + iVar2;
            if (*(int *)(lVar5 + 0x1c) < iVar1 + iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar5 + 0x10);
            }
            if (iVar2 != 0) {
              ::_guard_xfg_dispatch_icall_nop(*(void **)(lVar5 + 0x10),param_2,(longlong)iVar2 * 2);
            }
          }
          *(undefined2 *)(lVar5 + 0x20) = *(undefined2 *)((longlong)puVar7 + 0x14);
          *(short *)(lVar5 + 0x22) = *param_4;
          *param_4 = *param_4 + 1;
        }
      }
      else if (*(int *)((longlong)puVar7 + 0x14) == 5) {
        FString::PrintfImpl(&local_48,L"%s%s_",param_3,*puVar7);
        puVar6 = &DAT_143f3eda8;
        if (local_40 != 0) {
          puVar6 = local_48;
        }
        AddResourceTableEntriesRecursive(puVar7[5],param_2,puVar6,param_4,param_5);
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      iVar4 = iVar4 + 1;
      lVar8 = lVar8 + 0x30;
    } while (iVar4 < *(int *)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 141ede560 AdvanceFrameRenderPrerequisite body=91 status=ok
// SIG undefined AdvanceFrameRenderPrerequisite(void)

void AdvanceFrameRenderPrerequisite(void)

{
  int *piVar1;
  int iVar2;
  longlong local_res10 [3];
  
  FUN_141ee0140(&DAT_146ac3ba0,local_res10,2);
  if (local_res10[0] != 0) {
    FUN_141ee2750(local_res10,0);
    if (local_res10[0] != 0) {
      LOCK();
      piVar1 = (int *)(local_res10[0] + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_res10[0]);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141ede5c0 FUN_141ede5c0 body=530 status=ok
// SIG undefined FUN_141ede5c0(void)

void FUN_141ede5c0(char param_1,longlong param_2,undefined4 param_3)

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
  LARGE_INTEGER local_48;
  LARGE_INTEGER local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    QueryPerformanceCounter(&local_40);
    QueryPerformanceCounter(&local_48);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_48.s.LowPart - local_40._0_4_);
  }
  else {
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
    local_38 = 0;
    local_30 = 0;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *(undefined1 *)(plVar9 + 4) = 0;
    *plVar9 = (longlong)&PTR_FUN_144ede8e8;
    plVar9[5] = 0;
    plVar9[2] = param_2;
    *(undefined4 *)(plVar9 + 3) = param_3;
    lVar7 = plVar9[5];
    piVar1 = (int *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1409421c0(plVar9,0,0xff,1);
    if (lVar7 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(lVar7);
      }
    }
  }
  if (param_1 == '\0') {
    return;
  }
  FUN_141ee24f0(0);
  return;
}



// FUNCTION 141ede7e0 FUN_141ede7e0 body=426 status=ok
// SIG undefined FUN_141ede7e0(void)

longlong * FUN_141ede7e0(longlong param_1,longlong *param_2,int param_3,uint param_4)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  plVar8 = (longlong *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  if ((param_4 - 2 & 0xfffffffd) == 0) {
    param_3 = param_3 * param_4;
    plVar2 = *(longlong **)(param_1 + (ulonglong)(param_4 >> 2) * 8);
    plVar9 = (longlong *)plVar2[2];
    if ((plVar9 == (longlong *)0x0) ||
       (*(uint *)(plVar9 + 9) < (uint)(*(int *)((longlong)plVar9 + 0x4c) + param_3))) {
      if (0 < (int)plVar2[1]) {
        plVar10 = (longlong *)*plVar2;
        plVar7 = plVar8;
        do {
          plVar9 = (longlong *)*plVar10;
          if ((uint)(*(int *)((longlong)plVar9 + 0x4c) + param_3) <= *(uint *)(plVar9 + 9))
          goto LAB_141ede910;
          plVar7 = (longlong *)((longlong)plVar7 + 1);
          plVar10 = plVar10 + 1;
        } while ((longlong)plVar7 < (longlong)(int)plVar2[1]);
      }
      uVar4 = FMemory::Malloc(0x58);
      iVar1 = (int)plVar2[1];
      *(int *)(plVar2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2);
      }
      *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = uVar4;
      plVar9 = *(longlong **)(*plVar2 + (longlong)iVar1 * 8);
      if (plVar9 != (longlong *)0x0) {
        lVar5 = plVar2[3];
        *(undefined4 *)(plVar9 + 1) = 4;
        plVar9[2] = 0;
        uVar6 = param_3 + 0xffffU & 0xffff0000;
        plVar9[3] = 0;
        *(undefined1 *)(plVar9 + 5) = 0;
        plVar9[6] = 0;
        plVar9[7] = 0;
        *plVar9 = (longlong)&PTR_FUN_144edea98;
        plVar9[8] = 0;
        *(undefined4 *)((longlong)plVar9 + 0x4c) = 0;
        uVar3 = 0x10000;
        if (0xffff < uVar6) {
          uVar3 = uVar6;
        }
        *(int *)(plVar9 + 10) = (int)lVar5;
        *(uint *)(plVar9 + 9) = uVar3;
        plVar8 = plVar9;
      }
      (**(code **)(*plVar8 + 0x28))(plVar8);
      plVar9 = plVar8;
LAB_141ede910:
      if (plVar9[8] == 0) {
        lVar5 = (**(code **)(*DAT_146ab6358 + 0x4f8))
                          (DAT_146ab6358,&DAT_146ab6e78,plVar9[6],0,(int)plVar9[9],1);
        plVar9[8] = lVar5;
      }
      plVar2[2] = (longlong)plVar9;
    }
    uVar3 = *(uint *)((longlong)plVar9 + 0x4c);
    *param_2 = (ulonglong)uVar3 + plVar9[8];
    param_2[1] = (longlong)plVar9;
    *(uint *)(param_2 + 2) = uVar3 / param_4;
    *(uint *)((longlong)plVar9 + 0x4c) = uVar3 + param_3;
  }
  return param_2;
}



// FUNCTION 141ede990 FUN_141ede990 body=590 status=ok
// SIG undefined FUN_141ede990(void)

longlong * FUN_141ede990(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint *local_res8 [2];
  uint local_res18 [2];
  int local_res20 [2];
  
  plVar10 = *(longlong **)(param_1 + 8);
  plVar9 = (longlong *)0x0;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (ulonglong)param_4;
  plVar3 = (longlong *)plVar10[10];
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  if ((((plVar3 == (longlong *)0x0) ||
       (*(uint *)((longlong)plVar3 + 0x4c) < (int)plVar3[10] + param_4)) ||
      (*(char *)((longlong)plVar3 + 0x54) == '\0')) || (*(uint *)(plVar3 + 9) != param_3)) {
    local_res18[0] = param_3;
    if ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34)) {
      plVar3 = (longlong *)plVar10[8];
      if ((longlong *)plVar10[8] == (longlong *)0x0) {
        plVar3 = plVar10 + 7;
      }
      uVar2 = *(uint *)((longlong)plVar3 +
                       ((longlong)(int)plVar10[9] - 1U & (longlong)(int)param_3) * 4);
      if (uVar2 != 0xffffffff) {
        do {
          puVar7 = (uint *)((longlong)(int)uVar2 * 0x20 + *plVar10);
          if (*puVar7 == param_3) {
            if ((uVar2 != 0xffffffff) && (puVar7 != (uint *)0x0)) goto LAB_141edea7f;
            break;
          }
          uVar2 = puVar7[6];
        } while (uVar2 != 0xffffffff);
      }
    }
    local_res8[0] = local_res18;
    FUN_141edc110(plVar10,local_res20,local_res8,0);
    puVar7 = (uint *)((longlong)local_res20[0] * 0x20 + *plVar10);
LAB_141edea7f:
    puVar1 = puVar7 + 2;
    if (0 < (int)puVar7[4]) {
      plVar10 = *(longlong **)puVar1;
      plVar8 = plVar9;
      do {
        plVar3 = (longlong *)*plVar10;
        if ((((int)plVar3[10] + param_4 <= *(uint *)((longlong)plVar3 + 0x4c)) &&
            (*(char *)((longlong)plVar3 + 0x54) != '\0')) &&
           (*(uint *)(plVar3 + 9) == local_res18[0])) goto LAB_141edeb73;
        plVar8 = (longlong *)((longlong)plVar8 + 1);
        plVar10 = plVar10 + 1;
      } while ((longlong)plVar8 < (longlong)(int)puVar7[4]);
    }
    uVar4 = FMemory::Malloc(0x58);
    uVar2 = puVar7[4];
    puVar7[4] = uVar2 + 1;
    if ((int)puVar7[5] < (int)(uVar2 + 1)) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar1);
    }
    *(undefined8 *)(*(longlong *)puVar1 + (longlong)(int)uVar2 * 8) = uVar4;
    plVar10 = *(longlong **)(*(longlong *)puVar1 + (longlong)(int)uVar2 * 8);
    if (plVar10 != (longlong *)0x0) {
      *(undefined4 *)(plVar10 + 1) = 4;
      plVar10[2] = 0;
      uVar6 = param_4 + 0xffff & 0xffff0000;
      plVar10[3] = 0;
      *plVar10 = (longlong)&PTR_FUN_144ede858;
      *(undefined1 *)(plVar10 + 5) = 0;
      plVar10[6] = 0;
      uVar2 = 0x10000;
      if (0xffff < uVar6) {
        uVar2 = uVar6;
      }
      plVar10[7] = 0;
      plVar10[8] = 0;
      *(uint *)(plVar10 + 9) = local_res18[0];
      *(undefined4 *)(plVar10 + 10) = 0;
      *(undefined1 *)((longlong)plVar10 + 0x54) = 1;
      *(uint *)((longlong)plVar10 + 0x4c) =
           (int)((((ulonglong)uVar2 - 1) + (ulonglong)local_res18[0]) / (ulonglong)local_res18[0]) *
           local_res18[0];
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x28))(plVar9);
    plVar3 = plVar9;
LAB_141edeb73:
    if (plVar3[8] == 0) {
      lVar5 = (**(code **)(*DAT_146ab6358 + 0x5c0))
                        (DAT_146ab6358,&DAT_146ab6e78,plVar3[6],0,
                         *(undefined4 *)((longlong)plVar3 + 0x4c),1);
      plVar3[8] = lVar5;
    }
    *(longlong **)(*(longlong *)(param_1 + 8) + 0x50) = plVar3;
  }
  uVar2 = *(uint *)(plVar3 + 10);
  param_2[1] = (longlong)plVar3;
  *param_2 = (ulonglong)uVar2 + plVar3[8];
  *(uint *)(param_2 + 2) = uVar2;
  *(uint *)(plVar3 + 10) = uVar2 + param_4;
  return param_2;
}



// FUNCTION 141edebe0 FUN_141edebe0 body=425 status=ok
// SIG undefined FUN_141edebe0(void)

ulonglong * FUN_141edebe0(longlong *param_1,ulonglong *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  
  plVar2 = (longlong *)*param_1;
  plVar8 = (longlong *)0x0;
  uVar10 = param_3 + 0xfU & 0xfffffff0;
  param_1[1] = param_1[1] + (ulonglong)uVar10;
  plVar9 = (longlong *)plVar2[2];
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  if (((plVar9 == (longlong *)0x0) ||
      (*(uint *)(plVar9 + 8) < *(int *)((longlong)plVar9 + 0x44) + uVar10)) ||
     ((char)plVar9[9] == '\0')) {
    if (0 < (int)plVar2[1]) {
      plVar11 = (longlong *)*plVar2;
      plVar7 = plVar8;
      do {
        plVar9 = (longlong *)*plVar11;
        if ((*(int *)((longlong)plVar9 + 0x44) + uVar10 <= *(uint *)(plVar9 + 8)) &&
           ((char)plVar9[9] != '\0')) goto LAB_141eded0d;
        plVar7 = (longlong *)((longlong)plVar7 + 1);
        plVar11 = plVar11 + 1;
      } while ((longlong)plVar7 < (longlong)(int)plVar2[1]);
    }
    uVar4 = FMemory::Malloc(0x50);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = uVar4;
    plVar2 = *(longlong **)(*plVar2 + (longlong)iVar1 * 8);
    if (plVar2 != (longlong *)0x0) {
      *(undefined4 *)(plVar2 + 1) = 4;
      plVar2[2] = 0;
      plVar2[3] = 0;
      uVar6 = uVar10 + 0xffff & 0xffff0000;
      *(undefined1 *)(plVar2 + 5) = 0;
      plVar2[6] = 0;
      *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144edea28;
      plVar2[7] = 0;
      *(undefined4 *)((longlong)plVar2 + 0x44) = 0;
      uVar3 = 0x10000;
      if (0xffff < uVar6) {
        uVar3 = uVar6;
      }
      *(undefined1 *)(plVar2 + 9) = 1;
      *(uint *)(plVar2 + 8) = uVar3;
      plVar8 = plVar2;
    }
    (**(code **)(*plVar8 + 0x28))(plVar8);
    plVar9 = plVar8;
LAB_141eded0d:
    if (plVar9[7] == 0) {
      lVar5 = (**(code **)(*DAT_146ab6358 + 0x4b0))
                        (DAT_146ab6358,&DAT_146ab6e78,plVar9[6],0,(int)plVar9[8],1);
      plVar9[7] = lVar5;
    }
    *(longlong **)(*param_1 + 0x10) = plVar9;
  }
  uVar3 = *(uint *)((longlong)plVar9 + 0x44);
  param_2[1] = (ulonglong)plVar9;
  *(uint *)(param_2 + 2) = uVar3;
  *(uint *)((longlong)plVar9 + 0x44) = uVar3 + uVar10;
  *param_2 = (ulonglong)uVar3 + 0xf + plVar9[7] & 0xfffffffffffffff0;
  return param_2;
}



// FUNCTION 141eded90 BeginCleanup body=80 status=ok
// SIG undefined BeginCleanup(void)

void BeginCleanup(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
  }
  *(undefined8 *)(lVar2 + 8) = param_1;
  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ac3bb8);
  return;
}



// FUNCTION 141edede0 FUN_141edede0 body=1154 status=ok
// SIG undefined FUN_141edede0(void)

void FUN_141edede0(longlong *param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  char cVar8;
  DWORD DVar9;
  int iVar10;
  longlong *plVar11;
  DWORD *pDVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  undefined1 local_40 [24];
  
  if (DAT_146ac3ac5 == '\0') {
    return;
  }
  if ((DAT_146ac3b58 != 0) &&
     (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
    lVar13 = *param_1;
    *param_1 = DAT_146ac3b58;
    if (DAT_146ac3b58 != 0) {
      LOCK();
      *(int *)(DAT_146ac3b58 + 0x48) = *(int *)(DAT_146ac3b58 + 0x48) + 1;
      UNLOCK();
    }
    if (lVar13 == 0) {
      return;
    }
    LOCK();
    piVar1 = (int *)(lVar13 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    FGraphEvent::Recycle();
    return;
  }
  lVar13 = DAT_146ac3b78;
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  plVar15 = (longlong *)0x0;
  if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar9 = GetCurrentThreadId();
    plVar11 = (longlong *)&DAT_00000004;
    if (DVar9 == DAT_1468c21c0) goto LAB_141edeed0;
  }
  else {
LAB_141edeed0:
    plVar11 = plVar15;
  }
  iVar3 = *(int *)((longlong)plVar11 + lVar13);
  if (param_2 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ac3f28) &&
       (_Init_thread_header(&DAT_146ac3f28), DAT_146ac3f28 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146ac3f20 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.VSync");
      _Init_thread_footer(&DAT_146ac3f28);
    }
    if ((iVar3 != 0) && (iVar10 = (**(code **)(*DAT_146ac3f20 + 0x68))(), iVar10 != 0)) {
      plVar11 = (longlong *)FUN_1415914c0(&local_70);
      if (param_1 != plVar11) {
        lVar13 = *param_1;
        *param_1 = *plVar11;
        *plVar11 = 0;
        if (lVar13 != 0) {
          LOCK();
          piVar1 = (int *)(lVar13 + 0x48);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            FGraphEvent::Recycle();
          }
        }
      }
      if (local_70 != 0) {
        LOCK();
        piVar1 = (int *)(local_70 + 0x48);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          FGraphEvent::Recycle();
        }
      }
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
        lVar13 = *param_1;
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 0x48) = *(int *)(lVar13 + 0x48) + 1;
          UNLOCK();
        }
        local_50 = lVar13;
        local_48 = iVar3;
        FUN_141ee0aa0(&local_50,2,local_68);
        if (lVar13 == 0) {
          return;
        }
        LOCK();
        piVar1 = (int *)(lVar13 + 0x48);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        pDVar12 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar11 = TlsGetValue(*pDVar12);
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)operator_new(0x18);
          if (plVar11 != (longlong *)0x0) {
            *plVar11 = 0;
            plVar11[1] = 0;
            *(undefined4 *)(plVar11 + 2) = 0;
            plVar15 = plVar11;
          }
          TlsSetValue(*pDVar12,plVar15);
          plVar11 = plVar15;
        }
        plVar15 = (longlong *)plVar11[1];
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)*plVar11;
          if (plVar15 == (longlong *)0x0) {
            lVar13 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar12 + 2);
            plVar11[1] = lVar13;
            if (lVar13 == 0) {
              puVar14 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar11[1] = (longlong)puVar14;
              lVar13 = 0x1f;
              do {
                puVar2 = puVar14 + 0x20;
                *puVar14 = puVar2;
                lVar13 = lVar13 + -1;
                puVar14 = puVar2;
              } while (lVar13 != 0);
              *puVar2 = 0;
            }
            plVar15 = (longlong *)plVar11[1];
            iVar10 = 0x20;
            *(undefined4 *)(plVar11 + 2) = 0x20;
          }
          else {
            iVar10 = 0x20;
            plVar11[1] = (longlong)plVar15;
            *(undefined4 *)(plVar11 + 2) = 0x20;
            *plVar11 = 0;
          }
        }
        else {
          iVar10 = (int)plVar11[2];
        }
        plVar11[1] = *plVar15;
        *(int *)(plVar11 + 2) = iVar10 + -1;
        *plVar15 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar15 + 1) = 0xff;
        local_60 = 0;
        local_58 = 0;
        *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
        *plVar15 = (longlong)&PTR_FUN_144ede9d8;
        *(undefined1 *)(plVar15 + 4) = 0;
        plVar15[5] = 0;
        lVar13 = *param_1;
        plVar15[2] = lVar13;
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 0x48) = *(int *)(lVar13 + 0x48) + 1;
          UNLOCK();
        }
        *(int *)(plVar15 + 3) = iVar3;
        lVar13 = plVar15[5];
        piVar1 = (int *)(lVar13 + 0x48);
        if (lVar13 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_1409421c0(plVar15,0,0xff,1);
        if (lVar13 == 0) {
          return;
        }
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      goto joined_r0x000141edf1dc;
    }
  }
  uVar7 = DAT_1464a8210;
  plVar15 = (longlong *)TGraphTask<FNullGraphTask>::CreateTask(local_40,0,2);
  *(undefined4 *)(*plVar15 + 0x10) = uVar7;
  lVar13 = *plVar15;
  lVar6 = plVar15[2];
  lVar4 = plVar15[1];
  lVar5 = *(longlong *)(lVar13 + 0x18);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  local_78 = lVar5;
  FUN_141599db0(lVar13,lVar4,(int)lVar6,1);
  if (param_1 == &local_78) {
    if (lVar5 == 0) {
      return;
    }
    LOCK();
    piVar1 = (int *)(lVar5 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    lVar13 = local_78;
  }
  else {
    lVar13 = *param_1;
    *param_1 = lVar5;
    if (lVar13 == 0) {
      return;
    }
    LOCK();
    piVar1 = (int *)(lVar13 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
joined_r0x000141edf1dc:
  if (iVar3 == 1) {
    FGraphEvent::Recycle(lVar13);
  }
  return;
}



// FUNCTION 141edf270 FUN_141edf270 body=209 status=ok
// SIG undefined FUN_141edf270(void)

void FUN_141edf270(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined1 local_28 [32];
  
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') goto LAB_141edf2bf;
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_141edf2ce;
    }
LAB_141edf2bf:
                    /* WARNING: Could not recover jumptable at 0x000141edf2ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1);
    return;
  }
LAB_141edf2ce:
  plVar9 = (longlong *)FUN_141ee0610(local_28,0,0xff);
  *(longlong **)(*plVar9 + 0x10) = param_1;
  lVar3 = *plVar9;
  lVar6 = plVar9[2];
  lVar4 = plVar9[1];
  lVar5 = *(longlong *)(lVar3 + 0x20);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_140445100(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  return;
}



// FUNCTION 141edf350 BeginInit_GameThread body=9 status=ok
// SIG undefined BeginInit_GameThread(void)

void FTextureReference::BeginInit_GameThread(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 1;
  FUN_141edf270();
  return;
}



// FUNCTION 141edf360 FUN_141edf360 body=580 status=ok
// SIG undefined FUN_141edf360(void)

void FUN_141edf360(longlong *param_1)

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
  
  if ((DAT_146ac3b1a != '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    if (0xf < DAT_146ac3ce0) {
      FUN_141ee2000(&DAT_146ac3ce0);
    }
    *(longlong **)(&DAT_146ac3ce8 + (longlong)DAT_146ac3ce0 * 8) = param_1;
    DAT_146ac3ce0 = DAT_146ac3ce0 + 1;
    return;
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    QueryPerformanceCounter(&local_res20);
    (**(code **)(*param_1 + 0x30))(param_1);
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
  *plVar9 = (longlong)&PTR_FUN_144edea18;
  plVar9[4] = 0;
  plVar9[2] = (longlong)param_1;
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



// FUNCTION 141edf5b0 BeginRelease_GameThread body=24 status=ok
// SIG undefined BeginRelease_GameThread(void)

void FTextureReference::BeginRelease_GameThread(longlong param_1)

{
  FUN_141edf360();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 141edf5d0 FUN_141edf5d0 body=259 status=ok
// SIG undefined FUN_141edf5d0(void)

void FUN_141edf5d0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined1 local_28 [32];
  
  if (((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) &&
     ((DAT_146ac3ac5 != '\0' ||
      (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 == '\0' && (DAT_1468c21ae != '\0')) &&
       (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)))))) {
    plVar9 = (longlong *)FUN_141ee0760(local_28,0,0xff);
    *(longlong **)(*plVar9 + 0x10) = param_1;
    lVar3 = *plVar9;
    lVar6 = plVar9[2];
    lVar4 = plVar9[1];
    lVar5 = *(longlong *)(lVar3 + 0x20);
    piVar1 = (int *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140445100(lVar3,lVar4,(int)lVar6,1);
    if (lVar5 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
  }
  else if (((char)param_1[5] != '\0') && (DAT_146ab62c8 != '\0')) {
    (**(code **)(*param_1 + 0x20))(param_1);
    (**(code **)(*param_1 + 0x10))(param_1);
    (**(code **)(*param_1 + 8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000141edf628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  return;
}



// FUNCTION 141edf6e0 CalcMipMapExtent3D body=116 status=ok
// SIG undefined CalcMipMapExtent3D(void)

void CalcMipMapExtent3D(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,
                       uint *param_6,uint *param_7,uint *param_8)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = (longlong)param_4;
  param_1 = param_1 >> (param_5 & 0x1f);
  uVar2 = (&DAT_1464ca1b8)[lVar1 * 10];
  if ((uint)(&DAT_1464ca1b8)[lVar1 * 10] <= param_1) {
    uVar2 = param_1;
  }
  param_2 = param_2 >> (param_5 & 0x1f);
  *param_6 = uVar2;
  uVar2 = (&DAT_1464ca1bc)[lVar1 * 10];
  if ((uint)(&DAT_1464ca1bc)[lVar1 * 10] <= param_2) {
    uVar2 = param_2;
  }
  param_3 = param_3 >> (param_5 & 0x1f);
  *param_7 = uVar2;
  uVar2 = *(uint *)(&DAT_1464ca1c0 + lVar1 * 0x28);
  if (*(uint *)(&DAT_1464ca1c0 + lVar1 * 0x28) <= param_3) {
    uVar2 = param_3;
  }
  *param_8 = uVar2;
  return;
}



// FUNCTION 141edf760 CalcMipMapExtent body=59 status=ok
// SIG undefined CalcMipMapExtent(void)

uint * CalcMipMapExtent(uint *param_1,uint param_2,uint param_3,int param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  
  param_3 = param_3 >> (param_5 & 0x1f);
  param_2 = param_2 >> (param_5 & 0x1f);
  uVar2 = (&DAT_1464ca1bc)[(longlong)param_4 * 10];
  uVar1 = (&DAT_1464ca1b8)[(longlong)param_4 * 10];
  if ((uint)(&DAT_1464ca1b8)[(longlong)param_4 * 10] <= param_2) {
    uVar1 = param_2;
  }
  *param_1 = uVar1;
  if (uVar2 <= param_3) {
    uVar2 = param_3;
  }
  param_1[1] = uVar2;
  return param_1;
}



// FUNCTION 141edf7a0 CalcTextureMipMapSize3D body=165 status=ok
// SIG undefined CalcTextureMipMapSize3D(void)

int CalcTextureMipMapSize3D(uint param_1,uint param_2,uint param_3,int param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_4;
  uVar1 = *(uint *)(&DAT_1464ca1c0 + lVar7 * 0x28);
  uVar2 = (&DAT_1464ca1bc)[lVar7 * 10];
  uVar3 = (&DAT_1464ca1b8)[lVar7 * 10];
  param_1 = param_1 >> (param_5 & 0x1f);
  param_2 = param_2 >> (param_5 & 0x1f);
  param_3 = param_3 >> (param_5 & 0x1f);
  uVar4 = uVar1;
  if (uVar1 <= param_3) {
    uVar4 = param_3;
  }
  uVar5 = uVar2;
  if (uVar2 <= param_2) {
    uVar5 = param_2;
  }
  uVar6 = uVar3;
  if (uVar3 <= param_1) {
    uVar6 = param_1;
  }
  return (((uVar6 - 1) + uVar3) / uVar3) *
         (((uVar4 - 1) + uVar1) / uVar1) * (((uVar5 - 1) + uVar2) / uVar2) *
         (&DAT_1464ca1c4)[lVar7 * 10];
}



// FUNCTION 141edf850 CalcTextureMipMapSize body=113 status=ok
// SIG undefined CalcTextureMipMapSize(void)

int CalcTextureMipMapSize(uint param_1,uint param_2,int param_3,byte param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = (longlong)param_3;
  param_2 = param_2 >> (param_4 & 0x1f);
  param_1 = param_1 >> (param_4 & 0x1f);
  uVar1 = 1;
  if (param_2 != 0) {
    uVar1 = param_2;
  }
  uVar3 = 1;
  if (param_1 != 0) {
    uVar3 = param_1;
  }
  return ((((&DAT_1464ca1b8)[lVar2 * 10] - 1) + uVar3) / (uint)(&DAT_1464ca1b8)[lVar2 * 10]) *
         (int)(CONCAT44(0 >> (param_4 & 0x1f),(uVar1 - 1) + (&DAT_1464ca1bc)[lVar2 * 10]) /
              (ulonglong)(uint)(&DAT_1464ca1bc)[lVar2 * 10]) * (&DAT_1464ca1c4)[lVar2 * 10];
}



// FUNCTION 141edf8d0 CalcTextureSize3D body=228 status=ok
// SIG undefined CalcTextureSize3D(void)

ulonglong CalcTextureSize3D(uint param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar8 = 0;
  uVar11 = uVar8;
  if (param_5 != 0) {
    lVar5 = (longlong)param_4;
    uVar1 = (&DAT_1464ca1b8)[lVar5 * 10];
    uVar2 = (&DAT_1464ca1bc)[lVar5 * 10];
    uVar3 = *(uint *)(&DAT_1464ca1c0 + lVar5 * 0x28);
    do {
      bVar6 = (byte)uVar8;
      uVar7 = param_1 >> (bVar6 & 0x1f);
      uVar9 = param_2 >> (bVar6 & 0x1f);
      uVar10 = param_3 >> (bVar6 & 0x1f);
      uVar4 = uVar1;
      if (uVar1 <= uVar7) {
        uVar4 = uVar7;
      }
      uVar7 = uVar2;
      if (uVar2 <= uVar9) {
        uVar7 = uVar9;
      }
      uVar9 = uVar3;
      if (uVar3 <= uVar10) {
        uVar9 = uVar10;
      }
      uVar10 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar10;
      uVar11 = uVar11 + (int)(CONCAT44(0 >> (bVar6 & 0x1f),(uVar4 - 1) + uVar1) / (ulonglong)uVar1)
                        * (((uVar2 - 1) + uVar7) / uVar2) * (((uVar3 - 1) + uVar9) / uVar3) *
                        (&DAT_1464ca1c4)[lVar5 * 10];
    } while (uVar10 < param_5);
  }
  return uVar11;
}



// FUNCTION 141edf9c0 CalcTextureSize body=184 status=ok
// SIG undefined CalcTextureSize(void)

ulonglong CalcTextureSize(uint param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  if (param_4 != 0) {
    lVar3 = (longlong)param_3;
    uVar7 = uVar6;
    do {
      bVar1 = (byte)uVar7 & 0x1f;
      uVar4 = param_2 >> bVar1;
      uVar5 = param_1 >> ((byte)uVar7 & 0x1f);
      uVar2 = 1;
      if (uVar4 != 0) {
        uVar2 = uVar4;
      }
      uVar4 = 1;
      if (uVar5 != 0) {
        uVar4 = uVar5;
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
      uVar6 = uVar6 + (int)(CONCAT44(0 >> bVar1,(uVar2 - 1) + (&DAT_1464ca1bc)[lVar3 * 10]) /
                           (ulonglong)(uint)(&DAT_1464ca1bc)[lVar3 * 10]) *
                      ((((&DAT_1464ca1b8)[lVar3 * 10] - 1) + uVar4) /
                      (uint)(&DAT_1464ca1b8)[lVar3 * 10]) * (&DAT_1464ca1c4)[lVar3 * 10];
    } while (uVar5 < param_4);
  }
  return uVar6;
}



// FUNCTION 141edfa80 CalculateImageBytes body=134 status=ok
// SIG undefined CalculateImageBytes(void)

ulonglong CalculateImageBytes(uint param_1,uint param_2,uint param_3,byte param_4)

{
  ulonglong uVar1;
  int iVar2;
  
  if (param_4 == 0x19) {
    return (ulonglong)(param_1 >> 3) * (ulonglong)param_2;
  }
  uVar1 = (ulonglong)param_4;
  iVar2 = (param_1 / (uint)(&DAT_1464ca1b8)[uVar1 * 10]) *
          (param_2 / (uint)(&DAT_1464ca1bc)[uVar1 * 10]);
  if (param_3 != 0) {
    return (ulonglong)
           ((param_3 / *(uint *)(&DAT_1464ca1c0 + uVar1 * 0x28)) * iVar2 *
           (&DAT_1464ca1c4)[uVar1 * 10]);
  }
  return (ulonglong)(uint)(iVar2 * (&DAT_1464ca1c4)[uVar1 * 10]);
}



// FUNCTION 141edfb10 ChainWaitForPrerequisites body=189 status=ok
// SIG undefined ChainWaitForPrerequisites(void)

void FCompletionList::ChainWaitForPrerequisites
               (undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_18 [2];
  
  FUN_141ee0140(param_1,local_18,param_2);
  lVar5 = local_18[0];
  if (local_18[0] != 0) {
    LOCK();
    *(int *)(local_18[0] + 0x48) = *(int *)(local_18[0] + 0x48) + 1;
    UNLOCK();
    lVar4 = *param_3;
    iVar3 = *(int *)(lVar4 + 0x40);
    *(int *)(lVar4 + 0x40) = iVar3 + 1;
    if (*(int *)(lVar4 + 0x44) < iVar3 + 1) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (lVar4 + 0x18,iVar3);
    }
    lVar6 = *(longlong *)(lVar4 + 0x38);
    if (*(longlong *)(lVar4 + 0x38) == 0) {
      lVar6 = lVar4 + 0x18;
    }
    plVar2 = (longlong *)(lVar6 + (longlong)iVar3 * 8);
    if ((plVar2 != (longlong *)0x0) && (*plVar2 = lVar5, lVar5 != 0)) {
      LOCK();
      *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
    if (local_18[0] != 0) {
      LOCK();
      piVar1 = (int *)(local_18[0] + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  return;
}



// FUNCTION 141edfbd0 FUN_141edfbd0 body=222 status=ok
// SIG undefined FUN_141edfbd0(void)

void FUN_141edfbd0(void)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  
  if (DAT_1464aaa4a == '\0') {
    DAT_1468b6170 = 0;
    puVar4 = &DAT_143f3eda8;
    if (DAT_146ac3b28 != 0) {
      puVar4 = DAT_146ac3b20;
    }
    DAT_1468c2174 = '\0';
    LowLevelFatalErrorHandler("Unknown",0x373,L"Rendering thread exception:\r\n%s",puVar4);
    puVar4 = &DAT_143f3eda8;
    if (DAT_146ac3b28 != 0) {
      puVar4 = DAT_146ac3b20;
    }
    FDebug::AssertFailed(&DAT_144edb9bc,"Unknown",0x373,L"Rendering thread exception:\r\n%s",puVar4)
    ;
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      return;
    }
  }
  if (DAT_1468c2174 == '\0') {
    plVar3 = (longlong *)FUN_141672640();
    (**(code **)(*plVar3 + 0x40))(plVar3);
  }
  FWindowsPlatformApplicationMisc::PumpMessages(0);
  return;
}



// FUNCTION 141edfcb0 FUN_141edfcb0 body=164 status=ok
// SIG undefined FUN_141edfcb0(void)

void FUN_141edfcb0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    plVar1 = *(longlong **)(param_1 + lVar5 * 8);
    lVar3 = plVar1[1];
    lVar4 = 0;
    if (0 < (longlong)(int)lVar3) {
      do {
        lVar2 = *(longlong *)(*plVar1 + lVar4 * 8);
        if (*(longlong *)(lVar2 + 0x40) != 0) {
          (**(code **)(*DAT_146ab6358 + 0x500))
                    (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar2 + 0x30));
          *(undefined8 *)(lVar2 + 0x40) = 0;
          *(undefined4 *)(lVar2 + 0x4c) = 0;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)lVar3);
    }
    lVar5 = lVar5 + 1;
    plVar1[2] = 0;
  } while (lVar5 < 2);
  return;
}



// FUNCTION 141edfd60 FUN_141edfd60 body=622 status=ok
// SIG undefined FUN_141edfd60(void)

void FUN_141edfd60(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  longlong lVar13;
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
  
  plVar4 = *(longlong **)(param_1 + 8);
  uVar2 = *(uint *)(plVar4 + 5);
  puVar1 = (uint *)(plVar4 + 2);
  local_98 = 0;
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar12 = (uint *)plVar4[4];
    if ((uint *)plVar4[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar3 = *puVar12;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar10 = local_98 + 1;
      bVar6 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar10;
      if (bVar6) goto LAB_141edfe3a;
      uVar3 = puVar12[lVar8 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar10 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_84 = (iStack_80 - iVar10) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_141edfe3a:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(plVar4 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar11 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar4;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar12 = (uint *)plVar4[4];
    if ((uint *)plVar4[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar7 = puVar12[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar10 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_141edff02;
      uVar7 = puVar12[(longlong)iVar10 + 1];
      iVar10 = iVar10 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar10 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_84 = (uVar11 - iVar10) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_141edff02:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    lVar9 = 0;
    lVar13 = (longlong)(int)uStack_5c * 0x20 + *plVar4;
    lVar8 = (longlong)*(int *)(lVar13 + 0x10);
    if (0 < lVar8) {
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar13 + 8) + lVar9 * 8);
        if (*(longlong *)(lVar5 + 0x40) != 0) {
          (**(code **)(*DAT_146ab6358 + 0x5c8))
                    (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar5 + 0x30));
          *(undefined8 *)(lVar5 + 0x40) = 0;
          *(undefined4 *)(lVar5 + 0x50) = 0;
        }
        lVar9 = lVar9 + 1;
        *(undefined1 *)(lVar5 + 0x54) = 1;
      } while (lVar9 < lVar8);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 141edffd0 FUN_141edffd0 body=173 status=ok
// SIG undefined FUN_141edffd0(void)

void FUN_141edffd0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  lVar3 = (longlong)*(int *)(*param_1 + 8);
  if (lVar3 < 1) {
    *(undefined8 *)(*param_1 + 0x10) = 0;
    param_1[1] = 0;
    return;
  }
  do {
    lVar1 = *(longlong *)(*(longlong *)*param_1 + lVar2 * 8);
    if (*(longlong *)(lVar1 + 0x38) != 0) {
      (**(code **)(*DAT_146ab6358 + 0x4b8))
                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar1 + 0x30));
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined4 *)(lVar1 + 0x44) = 0;
    }
    lVar2 = lVar2 + 1;
    *(undefined1 *)(lVar1 + 0x48) = 1;
  } while (lVar2 < lVar3);
  *(undefined8 *)(*param_1 + 0x10) = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 141ee0080 CopyTextureData2D body=178 status=ok
// SIG undefined CopyTextureData2D(void)

void CopyTextureData2D(void *param_1,void *param_2,int param_3,int param_4,uint param_5,uint param_6
                      )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_3 + -1 + (&DAT_1464ca1bc)[(longlong)param_4 * 10]) /
          (uint)(&DAT_1464ca1bc)[(longlong)param_4 * 10];
  if ((param_5 == param_6) || (param_6 == 0)) {
    _guard_xfg_dispatch_icall_nop(param_2,param_1,(ulonglong)(uVar3 * param_5));
  }
  else {
    uVar1 = param_6;
    if (param_5 <= param_6) {
      uVar1 = param_5;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((ulonglong)(uVar2 * param_6) + (longlong)param_2),
                   (void *)((ulonglong)(uVar2 * param_5) + (longlong)param_1),(ulonglong)uVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
  }
  return;
}



// FUNCTION 141ee0140 FUN_141ee0140 body=891 status=ok
// SIG undefined FUN_141ee0140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141ee0140(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong **pplVar16;
  bool bVar17;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong *local_a8 [2];
  longlong local_98 [2];
  undefined1 local_88 [24];
  longlong local_70 [4];
  longlong *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c0 = (longlong *)0x0;
  local_b8 = 0;
  *param_2 = 0;
  LOCK();
  uVar14 = *(ulonglong *)(param_1 + 8);
  if (uVar14 == 0) {
    *(ulonglong *)(param_1 + 8) = 0;
    uVar14 = 0;
  }
  UNLOCK();
  uVar15 = (uint)uVar14;
  local_c8 = param_2;
  local_b0 = param_3;
  while ((uVar14 & 0x3ffffff) != 0) {
    uVar13 = (uVar14 & 0xfffffffffc000000) + 0x4000000;
    if (uVar13 < (uVar14 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    LOCK();
    bVar17 = uVar14 == *(ulonglong *)(param_1 + 8);
    if (bVar17) {
      *(ulonglong *)(param_1 + 8) = uVar13;
    }
    UNLOCK();
    if (bVar17) break;
    LOCK();
    uVar14 = *(ulonglong *)(param_1 + 8);
    if (uVar14 == 0) {
      *(ulonglong *)(param_1 + 8) = 0;
      uVar14 = 0;
    }
    UNLOCK();
    uVar15 = (uint)uVar14;
  }
  if ((uVar15 & 0x3ffffff) == 0) {
    return param_2;
  }
  uVar14 = local_b8 & 0xffffffff;
  uVar15 = uVar15 & 0x3ffffff;
  do {
    iVar11 = (int)uVar14;
    lVar9 = (&DAT_1468a81f8)[uVar15 >> 0xe];
    lVar4 = *(longlong *)(lVar9 + 8 + (ulonglong)(uVar15 & 0x3fff) * 0x18);
    uVar12 = iVar11 + 1;
    local_b8 = CONCAT44(local_b8._4_4_,uVar12);
    if (local_b8._4_4_ < (int)uVar12) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_c0,uVar14);
      uVar12 = (uint)local_b8;
    }
    plVar8 = local_c0;
    uVar14 = (ulonglong)uVar12;
    local_c0[iVar11] = lVar4;
    uVar3 = *(uint *)(lVar9 + (ulonglong)(uVar15 & 0x3fff) * 0x18 + 0x10);
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar15);
    plVar7 = local_c8;
    uVar15 = uVar3;
  } while (uVar3 != 0);
  if (uVar12 == 0) goto LAB_141ee0483;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_44 = 0;
  iVar11 = 0;
  if (0 < (int)uVar12) {
    do {
      local_48 = iVar11 + 1;
      if (local_44 < local_48) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_70,iVar11);
      }
      plVar10 = local_70;
      if (local_50 != (longlong *)0x0) {
        plVar10 = local_50;
      }
      if (plVar10 + iVar11 != (longlong *)0x0) {
        lVar9 = *plVar8;
        plVar10[iVar11] = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + 1;
          UNLOCK();
        }
      }
      LOCK();
      piVar1 = (int *)(*plVar8 + 0x48);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FGraphEvent::Recycle();
      }
      plVar8 = plVar8 + 1;
      uVar14 = uVar14 - 1;
      iVar11 = local_48;
    } while (uVar14 != 0);
  }
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  local_a8[0] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    plVar8[1] = param_1;
    *plVar8 = (longlong)&DAT_143f3ed00;
    plVar8[2] = (longlong)FCompletionList::ChainWaitForPrerequisites;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  plVar10 = (longlong *)FUN_140960ab0(local_88,local_70,local_b0);
  lVar9 = *plVar10;
  pplVar16 = (longlong **)(lVar9 + 0x10);
  *pplVar16 = (longlong *)0x0;
  *(undefined4 *)(lVar9 + 0x18) = 0;
  if ((local_a8 != pplVar16) && (plVar8 != (longlong *)0x0)) {
    (**(code **)(*plVar8 + 0x30))(plVar8,pplVar16);
  }
  *(undefined4 *)(lVar9 + 0x20) = 0xaff;
  lVar9 = *plVar10;
  lVar6 = plVar10[2];
  lVar4 = plVar10[1];
  lVar5 = *(longlong *)(lVar9 + 0x30);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
    plVar8 = local_a8[0];
  }
  local_98[0] = lVar5;
  FUN_1409691d0(lVar9,lVar4,(int)lVar6,1);
  if (plVar7 == local_98) {
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar9 = local_98[0];
      goto joined_r0x000141ee03fa;
    }
  }
  else {
    lVar9 = *plVar7;
    *plVar7 = lVar5;
    if (lVar9 != 0) {
      LOCK();
      piVar1 = (int *)(lVar9 + 0x48);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
joined_r0x000141ee03fa:
      plVar8 = local_a8[0];
      if (iVar11 == 1) {
        FGraphEvent::Recycle(lVar9);
        plVar8 = local_a8[0];
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    local_a8[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
    if (local_a8[0] != (longlong *)0x0) {
      FMemory::Free(local_a8[0]);
    }
  }
  plVar8 = local_70;
  iVar11 = local_48;
  if (local_50 != (longlong *)0x0) {
    plVar8 = local_50;
  }
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar8 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar8 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar8 = plVar8 + 1;
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_141ee0483:
  if (local_c0 != (longlong *)0x0) {
    FMemory::Free(local_c0);
  }
  return plVar7;
}



// FUNCTION 141ee04c0 FUN_141ee04c0 body=332 status=ok
// SIG undefined FUN_141ee04c0(void)

undefined8 * FUN_141ee04c0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144edeb00;
  *(undefined1 *)((longlong)plVar6 + 0x11) = 0;
  plVar6[3] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141ee0610 FUN_141ee0610 body=332 status=ok
// SIG undefined FUN_141ee0610(void)

undefined8 * FUN_141ee0610(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144edeb10;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141ee0760 FUN_141ee0760 body=332 status=ok
// SIG undefined FUN_141ee0760(void)

undefined8 * FUN_141ee0760(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_144edeb20;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141ee08b0 CreateTask body=372 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FOwnershipOfRHIThreadTask>::CreateTask
          (undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_144ede9b8;
  *(undefined1 *)((longlong)plVar8 + 0x11) = 0;
  plVar8[3] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 141ee0a30 FUN_141ee0a30 body=105 status=ok
// SIG undefined FUN_141ee0a30(void)

void FUN_141ee0a30(int *param_1)

{
  int *piVar1;
  int iVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  QueryPerformanceCounter(&local_res20);
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < *param_1) {
    do {
      (**(code **)(**(longlong **)(piVar1 + 2) + 0x30))();
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < *param_1);
  }
  *param_1 = 0;
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141ee0aa0 FUN_141ee0aa0 body=464 status=ok
// SIG undefined FUN_141ee0aa0(void)

void FUN_141ee0aa0(longlong *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong local_38;
  LARGE_INTEGER local_30;
  LARGE_INTEGER local_28;
  longlong local_20 [3];
  
  QueryPerformanceCounter(&local_28);
  if (DAT_1468b5000 == 0) {
    lVar4 = *param_1;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
      UNLOCK();
    }
    lVar5 = param_1[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
      UNLOCK();
      LOCK();
      piVar2 = (int *)(lVar4 + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle(lVar4);
      }
    }
    if ((int)lVar5 == 1) {
      local_20[0] = 0;
      local_20[1] = 0;
      FUN_141591a60(lVar4,local_20,0xff);
      if (local_20[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
        UNLOCK();
      }
      local_38 = lVar4;
      RHICompleteGraphEventOnFlip(DAT_1464c9c40 + -1,&local_38);
    }
    if (lVar4 != 0) {
      LOCK();
      piVar2 = (int *)(lVar4 + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle(lVar4);
      }
    }
  }
  else {
    puVar7 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 4;
    if (DAT_146ab6eb0 < puVar6) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x28);
      puVar7 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 4;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    puVar1 = puVar7 + 1;
    DAT_146ab6ea8 = puVar6;
    *DAT_146ab6e80 = puVar7;
    lVar4 = *param_1;
    DAT_146ab6e80 = puVar1;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
      UNLOCK();
    }
    lVar5 = param_1[1];
    *puVar1 = 0;
    *puVar7 = &PTR_FUN_144ede9c8;
    puVar7[2] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
      UNLOCK();
    }
    *(int *)(puVar7 + 3) = (int)lVar5;
    if (lVar4 != 0) {
      LOCK();
      piVar2 = (int *)(lVar4 + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (DAT_146ab6e8c != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
    }
  }
  QueryPerformanceCounter(&local_30);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_30.s.LowPart - local_28._0_4_);
  return;
}



// FUNCTION 141ee0c70 FUN_141ee0c70 body=632 status=ok
// SIG undefined FUN_141ee0c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ee0c70(void)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_58;
  LARGE_INTEGER local_50;
  LARGE_INTEGER local_48;
  LARGE_INTEGER local_40 [7];
  
  QueryPerformanceCounter(local_40);
  LOCK();
  DAT_146ac3b50 = DAT_146ac3b50 + -1;
  UNLOCK();
  dVar10 = _DAT_146ac3ed0;
  if (DAT_1468b5054 == 0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar1 + 0x38) < DAT_146ac3ed8) &&
       (_Init_thread_header(&DAT_146ac3ed8), DAT_146ac3ed8 == -1)) {
      QueryPerformanceCounter(&local_res20);
      _DAT_146ac3ed0 = (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0;
      _Init_thread_footer(&DAT_146ac3ed8);
    }
    QueryPerformanceCounter(&local_58);
    dVar3 = (double)local_58.QuadPart * DAT_1468b02f8 + 16777216.0;
    dVar9 = dVar3 - _DAT_146ac3ed0;
    if ((*(int *)(lVar1 + 0x38) < DAT_146ac3ec8) &&
       (_Init_thread_header(&DAT_146ac3ec8), DAT_146ac3ec8 == -1)) {
      QueryPerformanceCounter(&local_50);
      _DAT_146ac3ec0 = (double)local_50.QuadPart * DAT_1468b02f8 + 16777216.0;
      _Init_thread_footer(&DAT_146ac3ec8);
    }
    dVar10 = dVar3 - _DAT_146ac3ec0;
    uVar5 = 0;
    uVar6 = uVar5;
    uVar8 = uVar5;
    if (0 < DAT_146ac3b48) {
      do {
        plVar2 = *(longlong **)(uVar6 + DAT_146ac3b40);
        cVar4 = (**(code **)(*plVar2 + 0x18))(plVar2);
        if (cVar4 != '\0') {
          (**(code **)(*plVar2 + 8))(plVar2,(float)dVar10);
        }
        uVar7 = (int)uVar8 + 1;
        uVar6 = uVar6 + 8;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < DAT_146ac3b48);
    }
    _DAT_146ac3ec0 = dVar3;
    dVar10 = _DAT_146ac3ed0;
    if ((1.0 / DAT_1464ca1ac <= (float)dVar9) && (uVar6 = uVar5, dVar10 = dVar3, 0 < DAT_146ac3b38))
    {
      do {
        plVar2 = *(longlong **)(uVar6 + DAT_146ac3b30);
        cVar4 = (**(code **)(*plVar2 + 0x18))(plVar2);
        if (cVar4 != '\0') {
          (**(code **)(*plVar2 + 8))(plVar2,(float)dVar9);
        }
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
        uVar6 = uVar6 + 8;
      } while ((int)uVar7 < DAT_146ac3b38);
    }
  }
  _DAT_146ac3ed0 = dVar10;
  QueryPerformanceCounter(&local_48);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_48.s.LowPart - local_40[0]._0_4_);
  return;
}



// FUNCTION 141ee0ef0 FUN_141ee0ef0 body=138 status=ok
// SIG undefined FUN_141ee0ef0(void)

void FUN_141ee0ef0(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  QueryPerformanceCounter(&local_res20);
  puVar2 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != puVar2) {
    _Src = (void *)*puVar2;
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(puVar3 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1);
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
    }
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141ee0f80 Execute body=104 status=ok
// SIG undefined Execute(void)

void FRHISyncFrameCommand::Execute(longlong param_1)

{
  longlong local_res8 [4];
  longlong local_18 [3];
  
  local_res8[0] = *(longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x18) == 1) {
    local_18[0] = 0;
    local_18[1] = 0;
    FUN_141591a60(local_res8[0],local_18,0xff);
    if (local_18[0] != 0) {
      FMemory::Free();
      return;
    }
  }
  else {
    if (local_res8[0] != 0) {
      LOCK();
      *(int *)(local_res8[0] + 0x48) = *(int *)(local_res8[0] + 0x48) + 1;
      UNLOCK();
    }
    RHICompleteGraphEventOnFlip(DAT_1464c9c40 + -1,local_res8);
  }
  return;
}



// FUNCTION 141ee0ff0 FUN_141ee0ff0 body=54 status=ok
// SIG undefined FUN_141ee0ff0(void)

void FUN_141ee0ff0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  FRHISyncFrameCommand::Execute();
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
      return;
    }
  }
  return;
}



// FUNCTION 141ee1030 FUN_141ee1030 body=237 status=ok
// SIG undefined FUN_141ee1030(void)

void FUN_141ee1030(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141edd850(param_1 + 2,&DAT_146ab6e78);
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_144edeb00;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
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



// FUNCTION 141ee1120 FUN_141ee1120 body=231 status=ok
// SIG undefined FUN_141ee1120(void)

void FUN_141ee1120(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  (**(code **)(*(longlong *)param_1[2] + 0x28))();
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144edeb10;
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



// FUNCTION 141ee1210 ExecuteTask body=276 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`BeginUpdateResourceRHI'::`2'::UpdateCommandName,<lambda_34d848903a43e369d102940b358c9d58>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)param_1[2];
  if (((char)plVar5[5] != '\0') && (DAT_146ab62c8 != '\0')) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 8))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144edeb20;
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



// FUNCTION 141ee1330 FUN_141ee1330 body=246 status=ok
// SIG undefined FUN_141ee1330(void)

void FUN_141ee1330(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141ee0a30(param_1 + 2,param_3,param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x13) = 0;
  *param_1 = &PTR_FUN_144edea08;
  if (param_1[0x14] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x14] + 0x48);
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



// FUNCTION 141ee1430 ExecuteTask body=263 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`FRenderCommandFence::BeginFence'::`20'::EURCMacro_FSyncFrameCommand>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141ee0aa0(param_1 + 2,param_3,param_1 + 5);
  if (param_1[2] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[2] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144ede9d8;
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



// FUNCTION 141ee1540 FUN_141ee1540 body=257 status=ok
// SIG undefined FUN_141ee1540(void)

void FUN_141ee1540(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  QueryPerformanceCounter(&local_res20);
  if (DAT_146ab6383 == '\0') {
    FUN_141ec6070(0);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144ede9e8;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
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



// FUNCTION 141ee1650 FUN_141ee1650 body=237 status=ok
// SIG undefined FUN_141ee1650(void)

void FUN_141ee1650(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141ee0c70(param_1 + 2,param_3,param_1 + 3);
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_144ede958;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
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



// FUNCTION 141ee1740 FUN_141ee1740 body=250 status=ok
// SIG undefined FUN_141ee1740(void)

void FUN_141ee1740(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  QueryPerformanceCounter(&local_res20);
  *(undefined4 *)param_1[2] = *(undefined4 *)(param_1 + 3);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144ede988;
  *(undefined1 *)(param_1 + 4) = 0;
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



// FUNCTION 141ee1840 FUN_141ee1840 body=251 status=ok
// SIG undefined FUN_141ee1840(void)

void FUN_141ee1840(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  QueryPerformanceCounter(&local_res20);
  *(undefined1 *)param_1[2] = *(undefined1 *)(param_1 + 3);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144ede998;
  *(undefined1 *)(param_1 + 4) = 0;
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



// FUNCTION 141ee1940 FUN_141ee1940 body=237 status=ok
// SIG undefined FUN_141ee1940(void)

void FUN_141ee1940(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141ee0ef0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144ede9a8;
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



// FUNCTION 141ee1a30 FUN_141ee1a30 body=251 status=ok
// SIG undefined FUN_141ee1a30(void)

void FUN_141ee1a30(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  QueryPerformanceCounter(&local_res20);
  (**(code **)(*(longlong *)param_1[2] + 0x30))();
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144edea18;
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



// FUNCTION 141ee1b30 FUN_141ee1b30 body=241 status=ok
// SIG undefined FUN_141ee1b30(void)

void FUN_141ee1b30(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  QueryPerformanceCounter(&local_res20);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144ede8e8;
  *(undefined1 *)(param_1 + 4) = 0;
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



// FUNCTION 141ee1c30 ExecuteTask body=244 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`FRenderResource::InitResourceFromPossiblyParallelRendering'::`7'::FInitResourceRenderThreadTask>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  (**(code **)(*(longlong *)param_1[2] + 0x28))();
  (**(code **)(**(longlong **)param_1[3] + 0x10))();
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144ede9f8;
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



// FUNCTION 141ee1d30 FUN_141ee1d30 body=275 status=ok
// SIG undefined FUN_141ee1d30(void)

void FUN_141ee1d30(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(char *)(param_1 + 2) == '\0') {
    (**(code **)(*DAT_146ab6358 + 0x378))();
  }
  else {
    (**(code **)(*DAT_146ab6358 + 0x370))();
  }
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  FUN_141591a60(param_1[3],param_2,param_3);
  *param_1 = &PTR_FUN_144ede9b8;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
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



// FUNCTION 141ee1e50 FUN_141ee1e50 body=120 status=ok
// SIG undefined FUN_141ee1e50(void)

void FUN_141ee1e50(longlong param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    if (DAT_146ab6e8c != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ed93a0(&DAT_146ab6e78);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
    }
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
    (**(code **)(*DAT_146ab6358 + 0x378))();
  }
  DAT_1468c21c4 = 0;
  return;
}



// FUNCTION 141ee1ed0 FindUniformBufferStructByFName body=139 status=ok
// SIG undefined FindUniformBufferStructByFName(void)

undefined8 FindUniformBufferStructByFName(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_141ee3080();
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar4 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar4 = plVar3 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)param_1 >> 0x20) + (int)param_1) &
                    (longlong)(int)plVar3[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *plVar3;
      do {
        lVar5 = (longlong)iVar2;
        if (*(longlong *)(lVar1 + lVar5 * 0x18) == param_1) {
          if (iVar2 == -1) {
            return 0;
          }
          lVar1 = lVar1 + lVar5 * 0x18;
          if (lVar1 == 0) {
            return 0;
          }
          return *(undefined8 *)(lVar1 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x10 + lVar5 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 141ee1f60 FindUniformBufferStructByName body=155 status=ok
// SIG undefined FindUniformBufferStructByName(void)

undefined8 FindUniformBufferStructByName(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_res10 [3];
  
  FName::FName(local_res10,param_1,0);
  plVar3 = (longlong *)FUN_141ee3080();
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar4 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar4 = plVar3 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)local_res10[0] >> 0x20) + (int)local_res10[0]) &
                    (longlong)(int)plVar3[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *plVar3;
      do {
        lVar5 = (longlong)iVar2;
        if (*(longlong *)(lVar1 + lVar5 * 0x18) == local_res10[0]) {
          if (iVar2 == -1) {
            return 0;
          }
          lVar1 = lVar1 + lVar5 * 0x18;
          if (lVar1 == 0) {
            return 0;
          }
          return *(undefined8 *)(lVar1 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x10 + lVar5 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 141ee2000 FUN_141ee2000 body=745 status=ok
// SIG undefined FUN_141ee2000(void)

void FUN_141ee2000(ulonglong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  ulonglong auStack_b0 [4];
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  ulonglong local_38;
  
  if ((int)*param_1 != 0) {
    plVar8 = (longlong *)0x0;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
      uVar13 = *param_1;
      auStack_b0[0] = param_1[1];
      auStack_b0[3] = param_1[4];
      uStack_90 = param_1[5];
      auStack_b0[1] = param_1[2];
      auStack_b0[2] = param_1[3];
      local_78 = param_1[8];
      uStack_70 = param_1[9];
      local_88 = param_1[6];
      uStack_80 = param_1[7];
      local_58 = param_1[0xc];
      uStack_50 = param_1[0xd];
      local_68 = param_1[10];
      uStack_60 = param_1[0xb];
      local_38 = param_1[0x10];
      local_48 = (int)param_1[0xe];
      iStack_44 = *(int *)((longlong)param_1 + 0x74);
      iStack_40 = (int)param_1[0xf];
      iStack_3c = *(int *)((longlong)param_1 + 0x7c);
      QueryPerformanceCounter(&local_res18);
      if (0 < (int)uVar13) {
        puVar12 = auStack_b0;
        uVar13 = uVar13 & 0xffffffff;
        do {
          (**(code **)(*(longlong *)*puVar12 + 0x30))();
          puVar12 = puVar12 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    }
    else {
      pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar7 = TlsGetValue(*pDVar6);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = 0;
          plVar7[1] = 0;
          *(undefined4 *)(plVar7 + 2) = 0;
          plVar8 = plVar7;
        }
        TlsSetValue(*pDVar6,plVar8);
        plVar7 = plVar8;
      }
      plVar8 = (longlong *)plVar7[1];
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)*plVar7;
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
          plVar7[1] = (longlong)plVar8;
          if (plVar8 == (longlong *)0x0) {
            puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar7[1] = (longlong)puVar9;
            lVar11 = 0x1f;
            do {
              puVar2 = puVar9 + 0x20;
              *puVar9 = puVar2;
              lVar11 = lVar11 + -1;
              puVar9 = puVar2;
            } while (lVar11 != 0);
            *puVar2 = 0;
            plVar8 = (longlong *)plVar7[1];
          }
          iVar10 = 0x20;
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
        else {
          iVar10 = 0x20;
          plVar7[1] = (longlong)plVar8;
          *(undefined4 *)(plVar7 + 2) = 0x20;
          *plVar7 = 0;
        }
      }
      else {
        iVar10 = (int)plVar7[2];
      }
      plVar7[1] = *plVar8;
      *(int *)(plVar7 + 2) = iVar10 + -1;
      *plVar8 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar8 + 1) = 0xff;
      local_res20 = 0;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_144edea08;
      *(undefined1 *)(plVar8 + 0x13) = 0;
      plVar8[0x14] = 0;
      uVar13 = param_1[1];
      plVar8[2] = *param_1;
      plVar8[3] = uVar13;
      uVar13 = param_1[3];
      plVar8[4] = param_1[2];
      plVar8[5] = uVar13;
      uVar13 = param_1[5];
      plVar8[6] = param_1[4];
      plVar8[7] = uVar13;
      uVar13 = param_1[7];
      plVar8[8] = param_1[6];
      plVar8[9] = uVar13;
      uVar13 = param_1[9];
      plVar8[10] = param_1[8];
      plVar8[0xb] = uVar13;
      uVar13 = param_1[0xb];
      plVar8[0xc] = param_1[10];
      plVar8[0xd] = uVar13;
      uVar13 = param_1[0xd];
      plVar8[0xe] = param_1[0xc];
      plVar8[0xf] = uVar13;
      iVar10 = *(int *)((longlong)param_1 + 0x74);
      uVar13 = param_1[0xf];
      iVar3 = *(int *)((longlong)param_1 + 0x7c);
      *(int *)(plVar8 + 0x10) = (int)param_1[0xe];
      *(int *)((longlong)plVar8 + 0x84) = iVar10;
      *(int *)(plVar8 + 0x11) = (int)uVar13;
      *(int *)((longlong)plVar8 + 0x8c) = iVar3;
      uVar13 = param_1[0x10];
      plVar8[0x12] = uVar13;
      lVar11 = plVar8[0x14];
      piVar1 = (int *)(lVar11 + 0x48);
      if (lVar11 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res10 = lVar11;
      FUN_141ee5780((int)uVar13,0,0xff,1,0);
      if (lVar11 != 0) {
        LOCK();
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          FGraphEvent::Recycle(local_res10);
        }
      }
    }
    *(int *)param_1 = 0;
  }
  return;
}



// FUNCTION 141ee22f0 FUN_141ee22f0 body=428 status=ok
// SIG undefined FUN_141ee22f0(void)

void FUN_141ee22f0(void)

{
  undefined8 *puVar1;
  char cVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if (DAT_146ab6383 == '\0') {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar2 = FUN_1415ad720(&DAT_1468e2448), cVar2 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)))) {
      QueryPerformanceCounter(&local_res10);
      if (DAT_146ab6383 == '\0') {
        FUN_141ec6070(0);
      }
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res10._0_4_);
      return;
    }
    pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar5 = TlsGetValue(*pDVar4);
    plVar8 = (longlong *)0x0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0x18);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        plVar8 = plVar5;
      }
      TlsSetValue(*pDVar4,plVar8);
      plVar5 = plVar8;
    }
    plVar8 = (longlong *)plVar5[1];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)*plVar5;
      if (plVar8 == (longlong *)0x0) {
        lVar6 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar4 + 2);
        plVar5[1] = lVar6;
        if (lVar6 == 0) {
          puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar5[1] = (longlong)puVar7;
          lVar6 = 0x1f;
          do {
            puVar1 = puVar7 + 0x20;
            *puVar7 = puVar1;
            lVar6 = lVar6 + -1;
            puVar7 = puVar1;
          } while (lVar6 != 0);
          *puVar1 = 0;
        }
        plVar8 = (longlong *)plVar5[1];
        iVar9 = 0x20;
        *(undefined4 *)(plVar5 + 2) = 0x20;
      }
      else {
        iVar9 = 0x20;
        plVar5[1] = (longlong)plVar8;
        *(undefined4 *)(plVar5 + 2) = 0x20;
        *plVar5 = 0;
      }
    }
    else {
      iVar9 = (int)plVar5[2];
    }
    plVar5[1] = *plVar8;
    local_res18 = 0;
    *(int *)(plVar5 + 2) = iVar9 + -1;
    *(undefined4 *)(plVar8 + 1) = 0xff;
    *plVar8 = (longlong)&PTR_FUN_143f3edd8;
    local_res20 = 0;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144ede9e8;
    *(undefined1 *)((longlong)plVar8 + 0x11) = 0;
    plVar8[3] = 0;
    FUN_140445370(plVar8,0,0xff,1);
  }
  return;
}


