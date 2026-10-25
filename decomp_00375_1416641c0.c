// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1416641c0 AllocateNewChunk body=141 status=ok
// SIG undefined AllocateNewChunk(void)

void FMemStackBase::AllocateNewChunk(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  
  if (((param_1[2] != 0) || (uVar1 = 0x3f0, uVar3 = uVar1, 0x3f0 < param_2 + 0x10)) &&
     (uVar1 = param_2 + 0x1000fU & 0xffff0000, uVar3 = uVar1, uVar1 == 0x10000)) {
    plVar2 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(&DAT_1468e2fb8);
    if (plVar2 != (longlong *)0x0) goto LAB_14166421f;
    uVar3 = 0x10000;
  }
  plVar2 = (longlong *)FMemory::Malloc(uVar3,0);
LAB_14166421f:
  *(uint *)(plVar2 + 1) = uVar1 - 0x10;
  *plVar2 = param_1[2];
  param_1[2] = (longlong)plVar2;
  *param_1 = (longlong)(plVar2 + 2);
  param_1[1] = (longlong)(int)plVar2[1] + (longlong)(plVar2 + 2);
  return;
}



// FUNCTION 141664250 AlnumToken body=240 status=ok
// SIG undefined AlnumToken(void)

undefined4 FParse::AlnumToken(longlong *param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  wint_t *pwVar4;
  short *psVar5;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  iVar2 = iswspace(*(wint_t *)*param_1);
  while (iVar2 != 0) {
    *param_1 = *param_1 + 2;
    iVar2 = iswspace(*(wint_t *)*param_1);
  }
  pwVar4 = (wint_t *)*param_1;
  while( true ) {
    iVar2 = iswalnum(*pwVar4);
    psVar5 = (short *)*param_1;
    if ((iVar2 == 0) && (*psVar5 != 0x5f)) break;
    sVar1 = *psVar5;
    if (sVar1 != 0) {
      iVar2 = (int)param_2[1];
      iVar3 = iVar2 + -1;
      if (iVar2 < 1) {
        iVar3 = 0;
      }
      iVar2 = (iVar2 < 1) + 1 + iVar2;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      *(short *)(*param_2 + (longlong)iVar3 * 2) = sVar1;
      *(undefined2 *)(*param_2 + 2 + (longlong)iVar3 * 2) = 0;
      psVar5 = (short *)*param_1;
    }
    pwVar4 = (wint_t *)(psVar5 + 1);
    *param_1 = (longlong)pwVar4;
  }
  iVar2 = (int)param_2[1];
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),0 < iVar3);
}



// FUNCTION 141664340 AppendToString body=488 status=ok
// SIG undefined AppendToString(void)

void AppendToString(int *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  size_t _Size;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  void *pvVar7;
  void *local_18;
  int local_10;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    pwVar3 = L"%lld";
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 != 2) {
        if (iVar4 == 3) {
          iVar4 = param_1[6];
          if (iVar4 == 0) {
            return;
          }
          pvVar7 = *(void **)(param_1 + 4);
          if (iVar4 + -1 == 0) {
            return;
          }
          iVar1 = (int)param_2[1];
          iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar4 + -1;
          *(int *)(param_2 + 1) = iVar2;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          _Size = (longlong)iVar4 * 2 - 2;
          pvVar6 = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
        }
        else {
          if (iVar4 != 4) {
            return;
          }
          pvVar7 = *(void **)(param_1 + 2);
          lVar5 = -1;
          do {
            lVar5 = lVar5 + 1;
          } while (*(short *)((longlong)pvVar7 + lVar5 * 2) != 0);
          iVar4 = (int)lVar5;
          if (iVar4 == 0) {
            return;
          }
          iVar1 = (int)param_2[1];
          iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar4;
          *(int *)(param_2 + 1) = iVar2;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          pvVar6 = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
          _Size = (longlong)iVar4 * 2;
        }
        _guard_xfg_dispatch_icall_nop(pvVar6,pvVar7,_Size);
        *(undefined2 *)(_Size + (longlong)pvVar6) = 0;
        return;
      }
      FString::PrintfImpl(&local_18,&DAT_144ca01d8,*(undefined8 *)(param_1 + 2));
      goto LAB_141664493;
    }
    pwVar3 = L"%llu";
  }
  FString::PrintfImpl(&local_18,pwVar3,*(undefined8 *)(param_1 + 2));
LAB_141664493:
  pvVar7 = local_18;
  iVar4 = 0;
  if (local_10 != 0) {
    iVar4 = local_10 + -1;
  }
  if (iVar4 != 0) {
    iVar1 = (int)param_2[1];
    iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar4;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    pvVar6 = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar6,pvVar7,(longlong)iVar4 * 2);
    *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar6) = 0;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 141664530 FUN_141664530 body=374 status=ok
// SIG undefined FUN_141664530(void)

void FUN_141664530(longlong param_1,undefined8 param_2,char param_3,undefined1 param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  DWORD DVar5;
  longlong lVar6;
  LARGE_INTEGER local_res8;
  
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  lVar6 = operator_new(0x68);
  if (lVar6 == 0) goto LAB_141664624;
  FText::FText(lVar6,param_2);
  FText::FText(lVar6 + 0x18);
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  QueryPerformanceCounter(&local_res8);
  *(double *)(lVar6 + 0x40) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  *(undefined1 *)(lVar6 + 0x4c) = 0;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    uVar4 = 0;
    if (DVar5 == DAT_1468c21c0) goto LAB_1416645fb;
  }
  else {
LAB_1416645fb:
    uVar4 = 1;
  }
  *(undefined1 *)(lVar6 + 0x50) = uVar4;
  *(undefined1 *)(lVar6 + 0x51) = 0;
  *(longlong *)(lVar6 + 0x58) = param_1;
  if (*(float *)(lVar6 + 0x30) == 0.0) {
    *(undefined4 *)(lVar6 + 0x38) = 0x3f800000;
    *(undefined4 *)(lVar6 + 0x30) = 0x3f800000;
  }
LAB_141664624:
  if (param_3 != '\0') {
    FUN_141676ad0(lVar6,param_4,0);
  }
  if (*(char *)(lVar6 + 0x50) != '\0') {
    plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x58) + 0x60);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
    }
    *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = lVar6;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar1 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x70,iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8) = lVar6;
  TDefaultDelete<FSlowTask>::operator()(&local_res8,0);
  return;
}



// FUNCTION 1416646b0 Bool body=103 status=ok
// SIG undefined Bool(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FParse::Bool(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = 1;
  cVar1 = Value(param_1,param_2,local_38,0x10);
  if (cVar1 != '\0') {
    uVar2 = FToBoolHelper::FromCStringWide(local_38);
    *param_3 = uVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 141664720 BufferToString body=792 status=ok
// SIG undefined BufferToString(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FFileHelper::BufferToString(longlong *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_188 [32];
  short local_168 [4];
  undefined1 *local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined1 *local_50;
  uint local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  puVar3 = (undefined1 *)0x0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar4 = puVar3;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0);
    puVar4 = (undefined1 *)(ulonglong)*(uint *)(param_1 + 1);
  }
  if (1 < (int)param_3) {
    if ((((param_3 & 1) == 0) && (*param_2 == -1)) && (param_2[1] == -2)) {
      iVar2 = (int)param_3 / 2 + (int)puVar4;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,puVar4);
      }
      iVar2 = (int)param_3 / 2 + -1;
      if (0 < iVar2) {
        do {
          local_168[0] = (ushort)(byte)param_2[(longlong)puVar3 * 2 + 3] * 0x100 +
                         (ushort)(byte)param_2[(longlong)puVar3 * 2 + 2];
          FGenericPlatformString::Memcpy(&local_160,local_168,2);
          *(undefined2 *)(*param_1 + (longlong)puVar3 * 2) = local_160._0_2_;
          puVar3 = puVar3 + 1;
        } while ((longlong)puVar3 < (longlong)iVar2);
      }
      goto LAB_1416649d2;
    }
    if ((((param_3 & 1) == 0) && (*param_2 == -2)) && (param_2[1] == -1)) {
      iVar2 = (int)param_3 / 2 + (int)puVar4;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,puVar4);
      }
      iVar2 = (int)param_3 / 2 + -1;
      if (0 < iVar2) {
        do {
          local_160 = (undefined1 *)
                      CONCAT62(local_160._2_6_,
                               (ushort)(byte)param_2[(longlong)puVar3 * 2 + 2] * 0x100 +
                               (ushort)(byte)param_2[(longlong)puVar3 * 2 + 3]);
          FGenericPlatformString::Memcpy(local_168,&local_160,2);
          *(short *)(*param_1 + (longlong)puVar3 * 2) = local_168[0];
          puVar3 = puVar3 + 1;
        } while ((longlong)puVar3 < (longlong)iVar2);
      }
      goto LAB_1416649d2;
    }
  }
  if (((2 < (int)param_3) && (*param_2 == -0x11)) &&
     ((param_2[1] == -0x45 && (param_2[2] == -0x41)))) {
    param_2 = param_2 + 3;
    param_3 = param_3 - 3;
  }
  local_58 = (undefined1 *)0x0;
  if (param_2 == (char *)0x0) {
    local_50 = (undefined1 *)0x0;
    local_48 = 0;
  }
  else {
    local_160 = (undefined1 *)((ulonglong)local_160 & 0xffffffff00000000);
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (&local_160,0x7fffffff,param_2,param_3);
    puVar4 = local_160;
    local_48 = (uint)local_160;
    if ((0x80 < (uint)local_160) && ((uint)local_160 != 0)) {
      puVar3 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)(uint)local_160 * 2,0);
      local_58 = puVar3;
    }
    local_160 = local_158;
    if (puVar3 != (undefined1 *)0x0) {
      local_160 = puVar3;
    }
    local_50 = local_160;
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>
              (&local_160,(ulonglong)puVar4 & 0xffffffff,param_2,param_3);
    puVar4 = (undefined1 *)(ulonglong)*(uint *)(param_1 + 1);
  }
  uVar1 = local_48;
  iVar2 = local_48 + 1 + (int)puVar4;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,puVar4);
  }
  ::_guard_xfg_dispatch_icall_nop((void *)*param_1,local_50,(longlong)(int)uVar1 * 2);
  if (local_58 != (undefined1 *)0x0) {
    FMemory::Free();
  }
LAB_1416649d2:
  if ((int)param_1[1] == 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0);
    }
  }
  else {
    *(undefined2 *)(*param_1 + -2 + (longlong)(int)param_1[1] * 2) = 0;
  }
  return;
}



// FUNCTION 141664a40 BugItDir body=670 status=ok
// SIG undefined BugItDir(void)

longlong * FPaths::BugItDir(longlong *param_1)

{
  void *_Dst;
  undefined2 *puVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  void *pvVar10;
  void *local_58;
  int local_50;
  int local_4c;
  void *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  local_40 = 0x10;
  local_48 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  _Src = local_48;
  FGenericPlatformString::Convert<char,wchar_t>(local_48,0x10,"WindowsNoEditor",0x10,0x3f);
  plVar2 = (longlong *)FUN_14167d0d0(local_38);
  lVar3 = plVar2[1];
  local_58 = (void *)*plVar2;
  *plVar2 = 0;
  local_50 = (int)plVar2[1];
  local_4c = *(int *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  iVar5 = local_50;
  if (local_4c < (int)((7 - (uint)((int)lVar3 != 0)) + local_50)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    iVar5 = local_50;
  }
  local_50 = (7 - (uint)(iVar5 != 0)) + iVar5;
  if (local_4c < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
  }
  lVar3 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  *(undefined8 *)((longlong)local_58 + lVar3 * 2) = 0x49006700750042;
  *(undefined4 *)((longlong)local_58 + lVar3 * 2 + 8) = 0x2f0074;
  *(undefined2 *)((longlong)local_58 + lVar3 * 2 + 0xc) = 0;
  if (local_50 < 2) {
    pvVar4 = local_58;
    pvVar8 = (void *)0x0;
    pvVar10 = _Src;
    iVar9 = local_40._4_4_;
    iVar7 = (int)local_40;
  }
  else {
    iVar5 = 0;
    if ((int)local_40 != 0) {
      iVar5 = (int)local_40 + -1;
    }
    if ((local_50 != 0) || (iVar7 = 1, iVar5 == 0)) {
      iVar7 = 0;
    }
    pvVar4 = (void *)0x0;
    iVar6 = local_50;
    if (local_4c < iVar7 + local_50 + iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
      iVar6 = local_50;
    }
    pvVar8 = _Src;
    pvVar10 = local_58;
    iVar9 = local_4c;
    iVar7 = iVar6;
    if (iVar5 != 0) {
      local_50 = iVar6 + (uint)(iVar6 == 0) + iVar5;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar6);
      }
      iVar9 = local_4c;
      iVar7 = local_50;
      pvVar10 = local_58;
      _Dst = (void *)((longlong)local_58 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar5 * 2) = 0;
    }
  }
  local_58 = pvVar10;
  local_4c = iVar9;
  if (iVar9 < (int)((2 - (uint)(iVar7 != 0)) + iVar7)) {
    local_50 = iVar7;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar7 = local_50;
  }
  local_50 = (2 - (uint)(iVar7 != 0)) + iVar7;
  if (local_4c < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar7);
  }
  puVar1 = (undefined2 *)((longlong)local_58 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
  *puVar1 = 0x2f;
  puVar1[1] = 0;
  *param_1 = (longlong)local_58;
  *(int *)(param_1 + 1) = local_50;
  *(int *)((longlong)param_1 + 0xc) = local_4c;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  return param_1;
}



// FUNCTION 141664ce0 FUN_141664ce0 body=37 status=ok
// SIG undefined FUN_141664ce0(void)

longlong FUN_141664ce0(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(char *)(param_2 + 0x18) != '\0') {
    FText::FText();
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return param_1;
}



// FUNCTION 141664d10 FUN_141664d10 body=86 status=ok
// SIG undefined FUN_141664d10(void)

longlong FUN_141664d10(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(char *)(param_2 + 0x18) != '\0') {
    FText::FText();
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_2 + 0x60) != '\0') {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    FExpressionNode::operator=(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  return param_1;
}



// FUNCTION 141664d70 FUN_141664d70 body=110 status=ok
// SIG undefined FUN_141664d70(void)

undefined8 FUN_141664d70(undefined8 *param_1,ushort *param_2)

{
  ushort _C;
  int iVar1;
  int *piVar2;
  int local_res10 [6];
  
  _C = *param_2;
  iVar1 = iswdigit(_C);
  if (iVar1 != 0) {
    piVar2 = (int *)*param_1;
    if (((char)piVar2[1] == '\0') && (local_res10 != piVar2)) {
      *piVar2 = 0;
      *(undefined1 *)(piVar2 + 1) = 1;
      piVar2 = (int *)*param_1;
    }
    *piVar2 = *piVar2 * 10;
    *(int *)*param_1 = *(int *)*param_1 + (_C - 0x30);
    return 0;
  }
  return 2;
}



// FUNCTION 141664e10 FUN_141664e10 body=32 status=ok
// SIG undefined FUN_141664e10(void)

undefined4 FUN_141664e10(undefined8 param_1,wint_t *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = iswspace(*param_2);
  uVar2 = 2;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 141664e30 Call body=44 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_738cee10f2341e7e9ab39f63da1b5462>,enum_EParseState___cdecl(wchar_t)>::
Call(undefined8 *param_1,short *param_2)

{
  if (*param_2 == 0x7b) {
    if (*(char *)*param_1 == '\0') {
      return 2;
    }
  }
  else if (*param_2 == 0x60) {
    return 2;
  }
  *(undefined1 *)*param_1 = 0;
  return 0;
}



// FUNCTION 141664e60 FUN_141664e60 body=8 status=ok
// SIG undefined FUN_141664e60(void)

void FUN_141664e60(undefined8 param_1,undefined2 *param_2)

{
  <lambda_1341eefa68271148f0b9e808a204388c>::operator()(param_1,*param_2);
  return;
}



// FUNCTION 141664e70 FUN_141664e70 body=77 status=ok
// SIG undefined FUN_141664e70(void)

undefined8 FUN_141664e70(undefined8 param_1,wint_t *param_2)

{
  wint_t _C;
  int iVar1;
  
  _C = *param_2;
  iVar1 = iswspace(_C);
  if ((iVar1 != 0) || (_C == 0x7d)) {
    return 2;
  }
  iVar1 = iswalnum(_C);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 3;
  }
  return 0;
}



// FUNCTION 141664ef0 FUN_141664ef0 body=45 status=ok
// SIG undefined FUN_141664ef0(void)

undefined8
FUN_141664ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_1416620b0(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 141664f20 FUN_141664f20 body=45 status=ok
// SIG undefined FUN_141664f20(void)

undefined8
FUN_141664f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_1416621b0(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 141664f50 Call body=45 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_695ac3e158d5320a2c521e967b20ef74>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
::Call(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
      undefined8 *param_5)

{
  <lambda_695ac3e158d5320a2c521e967b20ef74>::operator()(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 141664f80 FUN_141664f80 body=45 status=ok
// SIG undefined FUN_141664f80(void)

undefined8
FUN_141664f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141662380(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 141664fb0 FUN_141664fb0 body=45 status=ok
// SIG undefined FUN_141664fb0(void)

undefined8
FUN_141664fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141662480(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 141664fe0 Call body=29 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_344fbae52e3d725d33b7def87d897657>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
::Call(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141678de0(param_1,param_3,1);
  return param_1;
}



// FUNCTION 141665000 FUN_141665000 body=45 status=ok
// SIG undefined FUN_141665000(void)

undefined8
FUN_141665000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141662570(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 141665030 Call body=29 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_344fbae52e3d725d33b7def87d897657>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
::Call(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ParseLiteral(param_1,param_3,1);
  return param_1;
}



// FUNCTION 141665050 FUN_141665050 body=45 status=ok
// SIG undefined FUN_141665050(void)

undefined8
FUN_141665050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141662670(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 141665080 Call body=45 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_77e74835ea2b53ad4ce9e699d5e1eda2>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
::Call(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
      undefined8 *param_5)

{
  <lambda_77e74835ea2b53ad4ce9e699d5e1eda2>::operator()(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 1416650b0 Call body=29 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_4ca5cca653bb252eb5b06520e76eef95>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
::Call(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ParseLiteral(param_1,param_3,0);
  return param_1;
}



// FUNCTION 1416650d0 FUN_1416650d0 body=45 status=ok
// SIG undefined FUN_1416650d0(void)

undefined8
FUN_1416650d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141662820(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 141665100 FUN_141665100 body=45 status=ok
// SIG undefined FUN_141665100(void)

undefined8
FUN_141665100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141662940(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 141665130 Call body=29 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_4ca5cca653bb252eb5b06520e76eef95>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
::Call(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14167bb50(param_1,param_3,0);
  return param_1;
}



// FUNCTION 141665150 Call body=29 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_344fbae52e3d725d33b7def87d897657>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
::Call(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14167bb50(param_1,param_3,1);
  return param_1;
}



// FUNCTION 141665170 Call body=29 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_4ca5cca653bb252eb5b06520e76eef95>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
::Call(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141678de0(param_1,param_3,0);
  return param_1;
}



// FUNCTION 141665190 FUN_141665190 body=45 status=ok
// SIG undefined FUN_141665190(void)

undefined8
FUN_141665190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141662ad0(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 1416651c0 FUN_1416651c0 body=45 status=ok
// SIG undefined FUN_1416651c0(void)

undefined8
FUN_1416651c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141662bb0(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 1416651f0 Call body=29 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_4ca5cca653bb252eb5b06520e76eef95>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
::Call(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14167bfb0(param_1,param_3,0);
  return param_1;
}



// FUNCTION 141665210 FUN_141665210 body=35 status=ok
// SIG undefined FUN_141665210(void)

undefined8
FUN_141665210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_141662d60(param_2,param_1,param_3,*param_4);
  return param_1;
}



// FUNCTION 141665240 FUN_141665240 body=45 status=ok
// SIG undefined FUN_141665240(void)

undefined8
FUN_141665240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141662e00(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 141665270 FUN_141665270 body=45 status=ok
// SIG undefined FUN_141665270(void)

undefined8
FUN_141665270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141662f00(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 1416652a0 FUN_1416652a0 body=45 status=ok
// SIG undefined FUN_1416652a0(void)

undefined8
FUN_1416652a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_141663090(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 1416652d0 Call body=106 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_f0db89bb39886d364e10bc99cf3ab19c>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
::Call(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  piVar1 = (int *)FUN_141674140();
  piVar2 = param_3 + 6;
  if (((piVar1[3] != param_3[3] || piVar1[2] != param_3[2]) || piVar1[1] != param_3[1]) ||
      *piVar1 != *param_3) {
    piVar2 = (int *)0x0;
  }
  local_res20 = CONCAT71(local_res20._1_7_,(char)*piVar2 == '\0');
  Impl::ForwardReturnType<bool>(param_1,&local_res20);
  return param_1;
}



// FUNCTION 141665340 Call body=29 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_344fbae52e3d725d33b7def87d897657>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
::Call(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14167bfb0(param_1,param_3,1);
  return param_1;
}



// FUNCTION 141665360 Call body=35 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_e4e880840387afd65bddc55ca79f13a7>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
::Call(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  <lambda_e4e880840387afd65bddc55ca79f13a7>::operator()(param_2,param_1,param_3,*param_4);
  return param_1;
}



// FUNCTION 141665390 Call body=35 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_e7a517058875cd1ca573a60fefca8dc3>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,void_const_*)>
::Call(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  <lambda_e7a517058875cd1ca573a60fefca8dc3>::operator()(param_2,param_1,param_3,*param_4);
  return param_1;
}



// FUNCTION 1416653c0 Call body=45 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_ff77f8d57e6508d3fed192258dbfb271>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,void_const_*)>
::Call(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
      undefined8 *param_5)

{
  <lambda_ff77f8d57e6508d3fed192258dbfb271>::operator()(param_2,param_1,param_3,param_4,*param_5);
  return param_1;
}



// FUNCTION 1416653f0 CategorizedLogfImpl body=331 status=ok
// SIG undefined CategorizedLogfImpl(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FOutputDevice::CategorizedLogfImpl
               (longlong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong *puVar2;
  undefined1 *puVar3;
  undefined1 *_Memory;
  int iVar4;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  undefined1 *local_470;
  undefined1 local_468;
  undefined1 local_458 [1024];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_498;
  _Memory = (undefined1 *)0x0;
  puVar3 = local_458;
  iVar4 = 0x400;
  local_468 = param_3;
  puVar2 = (ulonglong *)__local_stdio_printf_options();
  local_470 = &stack0x00000028;
  local_478 = 0;
  uVar1 = __stdio_common_vswprintf(*puVar2 | 1,local_458,0x1ff,param_4);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  if (0x1ff < uVar1) goto LAB_141665490;
  while (uVar1 == 0xffffffff) {
LAB_141665490:
    free(_Memory);
    puVar3 = malloc((longlong)iVar4 * 2);
    local_470 = &stack0x00000028;
    local_478 = 0;
    uVar1 = __stdio_common_vswprintf(*puVar2 | 1,puVar3,(longlong)(iVar4 + -1),param_4);
    if ((int)uVar1 < 0) {
      uVar1 = 0xffffffff;
    }
    if (iVar4 <= (int)uVar1) {
      uVar1 = 0xffffffff;
    }
    iVar4 = iVar4 * 2;
    _Memory = puVar3;
    param_3 = local_468;
  }
  *(undefined2 *)(puVar3 + (longlong)(int)uVar1 * 2) = 0;
  (**(code **)(*param_1 + 0x10))(param_1,puVar3,param_3,param_2);
  free(_Memory);
  return;
}



// FUNCTION 141665540 FUN_141665540 body=569 status=ok
// SIG undefined FUN_141665540(void)

ulonglong * FUN_141665540(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  wchar_t *pwVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  int iVar10;
  wchar_t *local_38;
  uint local_30;
  int local_2c;
  
  pwVar7 = (wchar_t *)*param_2;
  iVar3 = *(int *)(param_2 + 1);
  pwVar9 = pwVar7 + iVar3;
  do {
    if (pwVar9 == pwVar7) goto LAB_141665570;
    pwVar9 = pwVar9 + -1;
  } while (*pwVar9 != L'.');
  iVar10 = (int)((longlong)pwVar9 - (longlong)pwVar7 >> 1);
  if (iVar10 != -1) {
    pwVar9 = (wchar_t *)0x0;
    iVar5 = 0;
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    pwVar8 = pwVar7 + iVar4;
    do {
      if (pwVar8 == pwVar7) goto LAB_1416655db;
      pwVar1 = pwVar8 + -1;
      pwVar8 = pwVar8 + -1;
    } while ((*pwVar1 != L'/') && (*pwVar1 != L'\\'));
    iVar2 = (int)((longlong)pwVar8 - (longlong)pwVar7 >> 1);
    if ((iVar2 == -1) || (iVar2 <= iVar10)) {
LAB_1416655db:
      pwVar8 = L"";
      if (iVar3 != 0) {
        pwVar8 = pwVar7;
      }
      if (iVar10 < 0) {
        iVar4 = 0;
      }
      else if (iVar10 < iVar4) {
        iVar4 = iVar10;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      pwVar7 = (wchar_t *)(ulonglong)(iVar4 + 1);
      if (iVar4 == 0) {
        pwVar7 = pwVar9;
      }
      local_30 = (uint)pwVar7;
      if (0 < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        iVar5 = local_2c;
        pwVar9 = local_38;
        pwVar7 = (wchar_t *)(ulonglong)local_30;
        if (0 < (int)local_30) {
          wcsncpy(local_38,pwVar8,(longlong)iVar4);
          pwVar9[iVar4] = L'\0';
        }
      }
      iVar3 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar3 = 0;
      }
      if ((iVar3 != 0) && (*(short *)*param_3 != 0x2e)) {
        iVar3 = (int)pwVar7;
        iVar10 = iVar3 + -1;
        if (iVar3 < 1) {
          iVar10 = 0;
        }
        local_30 = (iVar3 < 1) + 1 + iVar3;
        if (iVar5 < (int)local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
          pwVar9 = local_38;
          iVar5 = local_2c;
        }
        pwVar7 = (wchar_t *)(ulonglong)local_30;
        (pwVar9 + iVar10)[0] = L'.';
        (pwVar9 + iVar10)[1] = L'\0';
      }
      iVar10 = (int)pwVar7;
      _Src = (void *)*param_3;
      iVar3 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar3 = 0;
      }
      uVar6 = iVar10;
      if (iVar3 != 0) {
        local_30 = iVar10 + (uint)(iVar10 == 0) + iVar3;
        if (iVar5 < (int)local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,pwVar7);
          pwVar9 = local_38;
          iVar5 = local_2c;
        }
        uVar6 = local_30;
        _guard_xfg_dispatch_icall_nop
                  (pwVar9 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)),_Src,(longlong)iVar3 * 2);
        (pwVar9 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)))[iVar3] = L'\0';
      }
      *param_1 = (ulonglong)pwVar9;
      *(uint *)(param_1 + 1) = uVar6;
      *(int *)((longlong)param_1 + 0xc) = iVar5;
      return param_1;
    }
  }
LAB_141665570:
  FString::FString(param_1);
  return param_1;
}



// FUNCTION 141665780 Close body=332 status=ok
// SIG undefined Close(void)

byte FBufferReaderWithSHA::Close(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  short *psVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    puVar4 = (undefined8 *)operator_new(0x40);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      if (*(int *)(param_1 + 0xb8) == 0) {
        psVar5 = &DAT_143f3eda8;
      }
      else {
        psVar5 = *(short **)(param_1 + 0xb0);
      }
      *puVar4 = &PTR_LAB_144ccf8a8;
      uVar1 = *(undefined1 *)(param_1 + 0xc0);
      uVar2 = *(undefined1 *)(param_1 + 0xa8);
      uVar3 = *(undefined4 *)(param_1 + 0xa0);
      puVar4[1] = *(undefined8 *)(param_1 + 0x90);
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
    }
    if (DAT_1468b5010 == (longlong *)0x0) {
      FUN_14166a590(puVar4);
    }
    else {
      (**(code **)(*DAT_1468b5010 + 0x10))(DAT_1468b5010,puVar4);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return (byte)~*(byte *)(param_1 + 0x28) >> 7;
}



// FUNCTION 1416658d0 CloudDir body=23 status=ok
// SIG undefined CloudDir(void)

undefined8 FPaths::CloudDir(undefined8 param_1)

{
  FGenericPlatformMisc::CloudDir();
  return param_1;
}



// FUNCTION 1416658f0 CollapseRelativeDirectories body=446 status=ok
// SIG undefined CollapseRelativeDirectories(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FPaths::CollapseRelativeDirectories(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  int local_28;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_18 = 0x2e002e002f;
  if (1 < (int)param_1[1]) {
    do {
      cVar1 = FString::StartsWith(param_1,&DAT_144ccc874,0);
      if ((cVar1 != '\0') || (cVar1 = FString::StartsWith(param_1,&local_18,1), cVar1 != '\0')) {
        return 0;
      }
      local_28 = -1;
      iVar2 = FUN_141592950(param_1,&local_18,0,0);
      if (iVar2 == -1) break;
      local_28 = iVar2 + -1;
      iVar3 = FUN_141592950(param_1,&DAT_144ccb194,0,1);
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      while (iVar3 != 0) {
        if (1 < iVar2 - iVar3) {
          if ((*(short *)(*param_1 + 2 + (longlong)iVar3 * 2) != 0x2e) ||
             (*(short *)(*param_1 + 4 + (longlong)iVar3 * 2) != 0x2f)) break;
        }
        local_28 = iVar3 + -1;
        iVar3 = FUN_141592950(param_1,&DAT_144ccb194,0,1);
        if (iVar3 < 1) {
          iVar3 = 0;
        }
      }
      local_28 = iVar3;
      iVar4 = FUN_141592950(param_1,&DAT_144ccb1f4,0,0);
      if ((-1 < iVar4) && (iVar4 < iVar2)) {
        return 0;
      }
      iVar4 = (int)param_1[1];
      iVar2 = (iVar2 - iVar3) + 3;
      if (iVar2 != 0) {
        iVar5 = (iVar4 - iVar2) - iVar3;
        if (iVar5 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*param_1 + (longlong)iVar3 * 2),
                     (void *)(*param_1 + (longlong)(iVar2 + iVar3) * 2),(longlong)iVar5 * 2);
          iVar4 = (int)param_1[1];
        }
        iVar4 = iVar4 - iVar2;
        *(int *)(param_1 + 1) = iVar4;
      }
    } while (1 < iVar4);
  }
  FString::ReplaceInline(param_1,&DAT_144ccc8e4,&DAT_144ccb234,0);
  FString::TrimToNullTerminator(param_1);
  return 1;
}



// FUNCTION 141665ab0 CombineInternal body=298 status=ok
// SIG undefined CombineInternal(void)

void FPaths::CombineInternal(longlong *param_1,undefined8 *param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar4 = 0;
  lVar6 = (longlong)param_3;
  uVar8 = uVar4;
  if (0 < param_3) {
    do {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (*(short *)(param_2[uVar8] + lVar3 * 2) != 0);
      uVar8 = uVar8 + 1;
      uVar4 = (ulonglong)(uint)((int)uVar4 + 1 + (int)lVar3);
    } while ((longlong)uVar8 < lVar6);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != (int)uVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
  }
  _Src = (void *)*param_2;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(short *)((longlong)_Src + lVar3 * 2) != 0);
  iVar5 = (int)lVar3;
  if (iVar5 != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar5;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    _Dst = (void *)(*param_1 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
  }
  if (1 < lVar6) {
    lVar3 = 1;
    do {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (*(short *)(param_2[lVar3] + lVar7 * 2) != 0);
      FString::PathAppend(param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar6);
  }
  return;
}



// FUNCTION 141665be0 Command body=155 status=ok
// SIG undefined Command(void)

ulonglong FParse::Command(longlong *param_1,wchar_t *param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar4;
  wchar_t *_Str1;
  short *psVar5;
  size_t _MaxCount;
  
  _Str1 = (wchar_t *)*param_1;
  while ((*_Str1 == L' ' || (*_Str1 == L'\t'))) {
    _Str1 = _Str1 + 1;
    *param_1 = (longlong)_Str1;
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (param_2[lVar3] != L'\0');
  _MaxCount = (size_t)(int)lVar3;
  iVar2 = _wcsnicmp(_Str1,param_2,_MaxCount);
  uVar4 = CONCAT44(extraout_var,iVar2);
  if (iVar2 == 0) {
    *param_1 = *param_1 + _MaxCount * 2;
    iVar2 = iswalnum(*(wint_t *)*param_1);
    uVar4 = CONCAT44(extraout_var_00,iVar2);
    psVar5 = (short *)*param_1;
    if (iVar2 == 0) {
      while ((sVar1 = *psVar5, sVar1 == 0x20 || (sVar1 == 9))) {
        psVar5 = psVar5 + 1;
        *param_1 = (longlong)psVar5;
      }
      return CONCAT71((uint7)(byte)((ushort)sVar1 >> 8),1);
    }
    *param_1 = (longlong)(psVar5 + -_MaxCount);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 141665c80 Compile body=285 status=ok
// SIG undefined Compile(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::Compile(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_68[0] = 0;
  local_50 = param_3;
  local_48 = param_2;
  if (0 < *(int *)(param_2 + 8)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(&local_60);
  }
  FUN_141665da0(local_68,local_40,0,0);
  if (local_28 == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = local_60;
    *(undefined4 *)(param_1 + 0x28) = (undefined4)local_58;
    *(undefined4 *)(param_1 + 0x2c) = local_58._4_4_;
    *(undefined1 *)(param_1 + 0x30) = 1;
    local_60 = 0;
    local_58 = 0;
  }
  else {
    FText::FText(param_1,local_40);
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x30) = 0;
    if (local_28 != '\0') {
      local_28 = '\0';
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
  TArray<FExpressionToken,TSizedDefaultAllocator<32>_>::
  ~TArray<FExpressionToken,TSizedDefaultAllocator<32>_>(&local_60);
  FUN_141661650(param_2);
  return param_1;
}



// FUNCTION 141665da0 FUN_141665da0 body=6436 status=ok
// SIG undefined FUN_141665da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141665da0(int *param_1,longlong param_2,undefined4 *param_3,wchar_t *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  wchar_t *_Source;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 *puVar17;
  int *piVar18;
  int *piVar19;
  longlong lVar20;
  uint uVar21;
  undefined8 *puVar22;
  int *piVar23;
  undefined1 auStack_c18 [32];
  longlong local_bf8;
  uint local_bf0;
  int local_bec;
  wchar_t *local_be8;
  ulonglong *puStack_be0;
  longlong local_bd8;
  int local_bd0;
  int local_bcc;
  undefined4 *local_bc8;
  int *piStack_bc0;
  int *local_bb8;
  longlong local_bb0;
  undefined1 local_ba8 [4];
  undefined1 local_ba4 [4];
  undefined1 local_ba0 [8];
  undefined8 local_b98;
  longlong local_b90;
  undefined8 local_b88;
  longlong *plStack_b80;
  undefined8 local_b78;
  longlong *plStack_b70;
  undefined8 local_b68;
  undefined8 local_b60;
  undefined8 local_b58 [6];
  int local_b28;
  int iStack_b24;
  int iStack_b20;
  int iStack_b1c;
  undefined8 local_b18;
  undefined4 local_b10;
  undefined8 local_b08;
  undefined8 local_b00;
  undefined8 local_af8 [6];
  int local_ac8;
  int iStack_ac4;
  int iStack_ac0;
  int iStack_abc;
  undefined8 local_ab8;
  undefined4 local_ab0;
  undefined8 local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98 [6];
  int local_a68;
  int iStack_a64;
  int iStack_a60;
  int iStack_a5c;
  undefined8 local_a58;
  undefined8 local_a50;
  undefined8 local_a48;
  undefined8 local_a40 [6];
  int local_a10;
  int iStack_a0c;
  int iStack_a08;
  int iStack_a04;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined8 local_9e8 [6];
  int local_9b8;
  int iStack_9b4;
  int iStack_9b0;
  int iStack_9ac;
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 local_990 [6];
  int local_960;
  int iStack_95c;
  int iStack_958;
  int iStack_954;
  undefined8 local_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined1 local_938 [16];
  undefined8 local_928;
  undefined8 uStack_920;
  undefined1 local_918 [16];
  longlong local_908 [2];
  undefined1 local_8f8 [8];
  longlong *local_8f0;
  undefined1 local_8e0 [24];
  undefined1 local_8c8 [8];
  longlong *local_8c0;
  undefined1 local_8b0 [8];
  longlong *local_8a8;
  undefined8 local_898;
  undefined8 local_890;
  int local_858;
  int iStack_854;
  int iStack_850;
  int iStack_84c;
  undefined8 local_848;
  undefined4 local_840;
  undefined8 local_838;
  undefined8 local_830;
  int local_7f8;
  int iStack_7f4;
  int iStack_7f0;
  int iStack_7ec;
  undefined8 local_7e8;
  undefined4 local_7e0;
  undefined1 local_7d8 [8];
  longlong *local_7d0;
  undefined1 local_7c0 [8];
  longlong *local_7b8;
  undefined1 local_7a8 [8];
  longlong *local_7a0;
  undefined1 local_790 [8];
  longlong *local_788;
  undefined1 local_778 [16];
  undefined1 local_768 [16];
  undefined1 local_758 [24];
  undefined1 local_740 [24];
  undefined1 local_728 [24];
  undefined1 local_710 [24];
  undefined1 local_6f8 [88];
  undefined1 local_6a0 [88];
  undefined1 local_648 [8];
  longlong *local_640;
  char local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618 [6];
  int local_5e8;
  int iStack_5e4;
  int iStack_5e0;
  int iStack_5dc;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  int local_5b8 [12];
  int local_588;
  int iStack_584;
  int iStack_580;
  int iStack_57c;
  undefined8 local_578;
  int local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558 [6];
  int local_528;
  int iStack_524;
  int iStack_520;
  int iStack_51c;
  undefined8 local_518;
  undefined4 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8 [6];
  int local_4c8;
  int iStack_4c4;
  int iStack_4c0;
  int iStack_4bc;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  int local_498 [12];
  int local_468;
  int iStack_464;
  int iStack_460;
  int iStack_45c;
  undefined8 local_458;
  int local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438 [6];
  int local_408;
  int iStack_404;
  int iStack_400;
  int iStack_3fc;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8 [6];
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined8 local_380;
  int local_378 [12];
  int local_348;
  int iStack_344;
  int iStack_340;
  int iStack_33c;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined8 local_320;
  int local_318 [12];
  int local_2e8;
  int iStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  int local_2b8 [12];
  int local_288;
  int iStack_284;
  int iStack_280;
  int iStack_27c;
  undefined8 local_278;
  int local_270;
  int local_268;
  undefined8 local_258;
  undefined8 local_250;
  int local_248 [12];
  int local_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  undefined8 local_208;
  int local_200;
  int local_1f8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8 [6];
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 local_178 [4];
  undefined1 local_168 [8];
  longlong *local_160;
  char local_150;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138 [18];
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_d8 [4];
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_c18;
  piVar19 = (int *)0x0;
  plVar15 = *(longlong **)(param_1 + 8);
  local_bf8 = 0;
  iVar7 = *param_1;
  local_bf0 = 0;
  local_bec = 0;
  piVar18 = piVar19;
  local_be8 = param_4;
  local_bd8 = param_2;
  local_bc8 = param_3;
  if (0 < (int)plVar15[1] - iVar7) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(&local_bf8);
    plVar15 = *(longlong **)(param_1 + 8);
    iVar7 = *param_1;
    piVar18 = (int *)(ulonglong)local_bf0;
  }
  if (iVar7 < (int)plVar15[1]) {
    do {
      uVar16 = (uint)piVar18;
      plVar2 = *(longlong **)(param_1 + 6);
      piVar23 = (int *)((longlong)iVar7 * 0x58 + *plVar15);
      local_bb8 = piVar23;
      TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
      ::FindId(plVar2,&local_bcc,piVar23);
      puVar22 = (undefined8 *)0x0;
      puVar14 = puVar22;
      if (local_bcc != -1) {
        puVar14 = (undefined8 *)(*plVar2 + (longlong)local_bcc * 0x28);
      }
      puVar9 = puVar14 + 2;
      if (puVar14 == (undefined8 *)0x0) {
        puVar9 = puVar22;
      }
      if (puVar9 == (undefined8 *)0x0) {
        if ((param_4 != (wchar_t *)0x0) &&
           (param_2 = local_bd8,
           ((piVar23[3] == *(int *)(param_4 + 6) && piVar23[2] == *(int *)(param_4 + 4)) &&
           piVar23[1] == *(int *)(param_4 + 2)) && *(int *)param_4 == *piVar23)) goto LAB_141667582;
        if ((int)piVar19 == 0) {
          piVar8 = (int *)TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindId
                                    (*(longlong *)(param_1 + 6) + 0x50,local_ba8,piVar23);
          if (*piVar8 == -1) {
            lVar20 = *(longlong *)(param_1 + 6);
            TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
            ::FindId(lVar20 + 0xf0,&local_bd0,piVar23);
            puVar14 = puVar22;
            if (local_bd0 != -1) {
              puVar14 = (undefined8 *)((longlong)local_bd0 * 0x20 + *(longlong *)(lVar20 + 0xf0));
            }
            puVar9 = puVar14 + 2;
            if (puVar14 == (undefined8 *)0x0) {
              puVar9 = puVar22;
            }
            if (puVar9 != (undefined8 *)0x0) {
              _Source = *(wchar_t **)(piVar23 + 0x10);
              local_be8 = (wchar_t *)0x0;
              iVar7 = (int)(*(longlong *)(piVar23 + 0x12) - (longlong)_Source >> 1);
              uVar16 = iVar7 + 1;
              if (iVar7 == 0) {
                uVar16 = 0;
              }
              puStack_be0 = (ulonglong *)(ulonglong)uVar16;
              if (0 < (int)uVar16) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_be8,0);
                pwVar6 = local_be8;
                if (0 < (int)puStack_be0) {
                  wcsncpy(local_be8,_Source,(longlong)iVar7);
                  pwVar6[iVar7] = L'\0';
                }
              }
              lVar20 = FText::FromString(local_728,&local_be8);
              uVar10 = FInternationalization::
                       ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                 (local_7a8,
                                  L"Syntax error: No operand specified for operator \'{0}\'",
                                  L"ExpressionParser",L"SyntaxError_NoBinaryOperand");
              puVar14 = (undefined8 *)FTextFormat::FTextFormat(local_778,uVar10);
              local_178[0] = 4;
              FText::FText(local_168,lVar20);
              local_bb8 = (int *)*puVar14;
              local_bc8 = local_178;
              piStack_bc0 = &local_148;
              local_bb0 = puVar14[1];
              local_150 = '\x01';
              if (local_bb0 != 0) {
                LOCK();
                *(int *)(local_bb0 + 8) = *(int *)(local_bb0 + 8) + 1;
                UNLOCK();
                piVar18 = (int *)(ulonglong)local_bf0;
              }
              local_948 = local_bc8;
              uStack_940 = piStack_bc0;
              uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                       TArray<FFormatArgumentValue,FDefaultAllocator>(local_938,&local_948);
              uVar10 = FText::Format(local_790,&local_bb8,uVar10);
              FText::FText(local_8b0,uVar10);
              if (local_788 != (longlong *)0x0) {
                LOCK();
                plVar15 = local_788 + 1;
                lVar5 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*local_788)(local_788);
                  LOCK();
                  piVar18 = (int *)((longlong)local_788 + 0xc);
                  iVar7 = *piVar18;
                  *piVar18 = *piVar18 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*local_788 + 8))(local_788,1);
                  }
                }
                piVar18 = (int *)(ulonglong)local_bf0;
              }
              TArray<FFormatArgumentValue,FDefaultAllocator>::
              ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_938);
              if ((local_150 != '\0') && (local_150 = '\0', local_160 != (longlong *)0x0)) {
                LOCK();
                plVar15 = local_160 + 1;
                lVar5 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*local_160)(local_160);
                  LOCK();
                  piVar18 = (int *)((longlong)local_160 + 0xc);
                  iVar7 = *piVar18;
                  *piVar18 = *piVar18 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*local_160 + 8))(local_160,1);
                  }
                }
                piVar18 = (int *)(ulonglong)local_bf0;
              }
              plVar15 = (longlong *)puVar14[1];
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar15 + 1;
                lVar5 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*plVar15)(plVar15);
                  LOCK();
                  piVar18 = (int *)((longlong)plVar15 + 0xc);
                  iVar7 = *piVar18;
                  *piVar18 = *piVar18 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar15 + 8))(plVar15,1);
                  }
                }
                piVar18 = (int *)(ulonglong)local_bf0;
              }
              plVar15 = *(longlong **)(lVar20 + 8);
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar15 + 1;
                lVar20 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar20 == 1) {
                  (**(code **)*plVar15)(plVar15);
                  LOCK();
                  piVar18 = (int *)((longlong)plVar15 + 0xc);
                  iVar7 = *piVar18;
                  *piVar18 = *piVar18 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar15 + 8))(plVar15,1);
                  }
                }
                piVar18 = (int *)(ulonglong)local_bf0;
              }
              FText::FText(local_8c8,local_8b0);
              param_2 = local_bd8;
              FText::FText(local_bd8,local_8c8);
              *(undefined1 *)(param_2 + 0x18) = 1;
              if (local_8c0 != (longlong *)0x0) {
                LOCK();
                plVar15 = local_8c0 + 1;
                lVar20 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar20 == 1) {
                  (**(code **)*local_8c0)(local_8c0);
                  LOCK();
                  piVar18 = (int *)((longlong)local_8c0 + 0xc);
                  iVar7 = *piVar18;
                  *piVar18 = *piVar18 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*local_8c0 + 8))(local_8c0,1);
                  }
                }
                piVar18 = (int *)(ulonglong)local_bf0;
              }
              if (local_8a8 != (longlong *)0x0) {
                LOCK();
                plVar15 = local_8a8 + 1;
                lVar20 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar20 == 1) {
                  (**(code **)*local_8a8)(local_8a8);
                  LOCK();
                  piVar18 = (int *)((longlong)local_8a8 + 0xc);
                  iVar7 = *piVar18;
                  *piVar18 = *piVar18 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*local_8a8 + 8))(local_8a8,1);
                  }
                }
                piVar18 = (int *)(ulonglong)local_bf0;
              }
              if (local_7a0 != (longlong *)0x0) {
                LOCK();
                plVar15 = local_7a0 + 1;
                lVar20 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar20 == 1) {
                  (**(code **)*local_7a0)(local_7a0);
                  LOCK();
                  piVar18 = (int *)((longlong)local_7a0 + 0xc);
                  iVar7 = *piVar18;
                  *piVar18 = *piVar18 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*local_7a0 + 8))(local_7a0,1);
                  }
                }
                piVar18 = (int *)(ulonglong)local_bf0;
              }
              if (local_be8 != (wchar_t *)0x0) {
                FMemory::Free();
              }
              if ((int)piVar18 != 0) {
                piVar19 = (int *)(local_bf8 + 8);
                do {
                  piVar23 = piVar19 + 2;
                  if (((piVar19[-2] == 0 && piVar19[-1] == 0) && piVar19[1] == 0) && *piVar19 == 0)
                  {
                    piVar23 = (int *)0x0;
                  }
                  if (piVar23 != (int *)0x0) {
                    (*(code *)**(undefined8 **)piVar23)(piVar23,0);
                  }
                  piVar19 = piVar19 + 0x1a;
                  uVar16 = (int)piVar18 - 1;
                  piVar18 = (int *)(ulonglong)uVar16;
                } while (uVar16 != 0);
              }
              goto LAB_141667688;
            }
            piVar19 = (int *)TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindId
                                       (*(longlong *)(param_1 + 6) + 0xa0,local_ba4,piVar23);
            if (*piVar19 == -1) {
              local_9f8 = 0;
              local_9f0 = 0;
              FExpressionNode::operator=(&local_9f8,piVar23);
              local_9b8 = piVar23[0x10];
              iStack_9b4 = piVar23[0x11];
              iStack_9b0 = piVar23[0x12];
              iStack_9ac = piVar23[0x13];
              local_508 = 0;
              local_9a8 = *(undefined8 *)(piVar23 + 0x14);
              local_500 = 0;
              FExpressionNode::operator=(&local_508,&local_9f8);
              puVar14 = local_9e8;
              if (((local_9f0._4_4_ == 0 && (int)local_9f0 == 0) && local_9f8._4_4_ == 0) &&
                  (int)local_9f8 == 0) {
                puVar14 = puVar22;
              }
              local_4b0 = 0;
              local_4c8 = local_9b8;
              iStack_4c4 = iStack_9b4;
              iStack_4c0 = iStack_9b0;
              iStack_4bc = iStack_9ac;
              local_4b8 = local_9a8;
              if (puVar14 != (undefined8 *)0x0) {
                (**(code **)*puVar14)(local_9b8,0);
              }
              iVar7 = param_1[4];
              param_1[4] = iVar7 + 1;
              if (param_1[5] < iVar7 + 1) {
                TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar7);
              }
              puVar14 = (undefined8 *)((longlong)iVar7 * 0x60 + *(longlong *)(param_1 + 2));
              *puVar14 = 0;
              puVar14[1] = 0;
              FExpressionNode::operator=(puVar14,&local_508);
              *(int *)(puVar14 + 8) = local_4c8;
              *(int *)((longlong)puVar14 + 0x44) = iStack_4c4;
              *(int *)(puVar14 + 9) = iStack_4c0;
              *(int *)((longlong)puVar14 + 0x4c) = iStack_4bc;
              puVar14[10] = local_4b8;
              *(undefined4 *)(puVar14 + 0xb) = local_4b0;
              puVar14 = local_4f8;
              if (((local_500._4_4_ == 0 && (int)local_500 == 0) && local_508._4_4_ == 0) &&
                  (int)local_508 == 0) {
                puVar14 = puVar22;
              }
              if (puVar14 != (undefined8 *)0x0) {
                (**(code **)*puVar14)(local_4c8,0);
              }
              piVar19 = (int *)0x1;
            }
            else {
              piVar19 = (int *)0x1;
              if (0 < (int)uVar16) {
                piVar8 = (int *)0x0;
                uVar4 = uVar16;
                do {
                  uVar21 = uVar4 - 1;
                  uVar16 = (uint)piVar18;
                  piVar18 = (int *)((longlong)(int)uVar21 * 0x68 + local_bf8);
                  piVar23 = local_bb8;
                  if (0 < piVar18[0x18]) break;
                  local_2c8 = 0;
                  local_2c0 = 0;
                  FExpressionNode::operator=(&local_2c8,piVar18);
                  local_288 = piVar18[0x10];
                  iStack_284 = piVar18[0x11];
                  iStack_280 = piVar18[0x12];
                  iStack_27c = piVar18[0x13];
                  local_278 = *(undefined8 *)(piVar18 + 0x14);
                  local_270 = piVar18[0x16];
                  local_268 = piVar18[0x18];
                  piVar23 = piVar18 + 4;
                  if (((piVar18[3] == 0 && piVar18[2] == 0) && piVar18[1] == 0) && *piVar18 == 0) {
                    piVar23 = piVar8;
                  }
                  if (piVar23 != (int *)0x0) {
                    (*(code *)**(undefined8 **)piVar23)(local_288,0);
                  }
                  iVar7 = (uVar16 - uVar21) + -1;
                  if (iVar7 != 0) {
                    _guard_xfg_dispatch_icall_nop
                              (piVar18,(void *)((longlong)(int)uVar4 * 0x68 + local_bf8),
                               (longlong)iVar7 * 0x68);
                  }
                  local_5c8 = 0;
                  local_5c0 = 0;
                  uVar16 = uVar16 - 1;
                  piVar18 = (int *)(ulonglong)uVar16;
                  FExpressionNode::operator=(&local_5c8,&local_2c8);
                  iVar7 = param_1[4];
                  local_570 = local_270;
                  local_588 = local_288;
                  iStack_584 = iStack_284;
                  iStack_580 = iStack_280;
                  iStack_57c = iStack_27c;
                  local_578 = local_278;
                  param_1[4] = iVar7 + 1;
                  if (param_1[5] < iVar7 + 1) {
                    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow
                              (param_1 + 2,iVar7);
                  }
                  puVar14 = (undefined8 *)((longlong)iVar7 * 0x60 + *(longlong *)(param_1 + 2));
                  *puVar14 = 0;
                  puVar14[1] = 0;
                  FExpressionNode::operator=(puVar14,&local_5c8);
                  *(int *)(puVar14 + 8) = local_588;
                  *(int *)((longlong)puVar14 + 0x44) = iStack_584;
                  *(int *)(puVar14 + 9) = iStack_580;
                  *(int *)((longlong)puVar14 + 0x4c) = iStack_57c;
                  puVar14[10] = local_578;
                  *(int *)(puVar14 + 0xb) = local_570;
                  piVar23 = local_5b8;
                  if (((local_5c0._4_4_ == 0 && (int)local_5c0 == 0) && local_5c8._4_4_ == 0) &&
                      (int)local_5c8 == 0) {
                    piVar23 = piVar8;
                  }
                  if (piVar23 != (int *)0x0) {
                    (*(code *)**(undefined8 **)piVar23)(local_588,0);
                  }
                  piVar23 = local_2b8;
                  if (((local_2c0._4_4_ == 0 && (int)local_2c0 == 0) && local_2c8._4_4_ == 0) &&
                      (int)local_2c8 == 0) {
                    piVar23 = piVar8;
                  }
                  if (piVar23 != (int *)0x0) {
                    (*(code *)**(undefined8 **)piVar23)(piVar23,0);
                  }
                  piVar23 = local_bb8;
                  uVar4 = uVar21;
                } while (0 < (int)uVar16);
              }
              puVar22 = (undefined8 *)0x0;
              local_a50 = 0;
              local_a48 = 0;
              FExpressionNode::operator=(&local_a50,piVar23);
              local_a10 = piVar23[0x10];
              iStack_a0c = piVar23[0x11];
              iStack_a08 = piVar23[0x12];
              iStack_a04 = piVar23[0x13];
              local_568 = 0;
              local_a00 = *(undefined8 *)(piVar23 + 0x14);
              local_560 = 0;
              FExpressionNode::operator=(&local_568,&local_a50);
              puVar14 = local_a40;
              if (((local_a48._4_4_ == 0 && (int)local_a48 == 0) && local_a50._4_4_ == 0) &&
                  (int)local_a50 == 0) {
                puVar14 = puVar22;
              }
              local_510 = 2;
              local_528 = local_a10;
              iStack_524 = iStack_a0c;
              iStack_520 = iStack_a08;
              iStack_51c = iStack_a04;
              local_518 = local_a00;
              if (puVar14 != (undefined8 *)0x0) {
                (**(code **)*puVar14)(local_a10,0);
              }
              local_bf0 = uVar16 + 1;
              if (local_bec < (int)local_bf0) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
                ResizeGrow(&local_bf8,uVar16);
              }
              piVar18 = (int *)(ulonglong)local_bf0;
              local_b08 = 0;
              puVar14 = (undefined8 *)((longlong)(int)uVar16 * 0x68 + local_bf8);
              local_b00 = 0;
              FExpressionNode::operator=(&local_b08,&local_568);
              local_ac8 = local_528;
              iStack_ac4 = iStack_524;
              iStack_ac0 = iStack_520;
              iStack_abc = iStack_51c;
              local_ab0 = local_510;
              local_ab8 = local_518;
              *puVar14 = 0;
              puVar14[1] = 0;
              FExpressionNode::operator=(puVar14,&local_b08);
              *(int *)(puVar14 + 8) = local_ac8;
              *(int *)((longlong)puVar14 + 0x44) = iStack_ac4;
              *(int *)(puVar14 + 9) = iStack_ac0;
              *(int *)((longlong)puVar14 + 0x4c) = iStack_abc;
              puVar14[10] = local_ab8;
              *(undefined4 *)(puVar14 + 0xb) = local_ab0;
              *(undefined4 *)(puVar14 + 0xc) = 0;
              puVar14 = local_af8;
              if (((local_b00._4_4_ == 0 && (int)local_b00 == 0) && local_b08._4_4_ == 0) &&
                  (int)local_b08 == 0) {
                puVar14 = puVar22;
              }
              if (puVar14 != (undefined8 *)0x0) {
                (**(code **)*puVar14)(local_ac8,0);
              }
              puVar14 = local_558;
              if (((local_560._4_4_ == 0 && (int)local_560 == 0) && local_568._4_4_ == 0) &&
                  (int)local_568 == 0) {
                puVar14 = puVar22;
              }
              if (puVar14 != (undefined8 *)0x0) {
                (**(code **)*puVar14)(puVar14,0);
              }
            }
          }
          else {
            local_9a0 = 0;
            local_998 = 0;
            FExpressionNode::operator=(&local_9a0,piVar23);
            local_960 = piVar23[0x10];
            iStack_95c = piVar23[0x11];
            iStack_958 = piVar23[0x12];
            iStack_954 = piVar23[0x13];
            local_628 = 0;
            local_950 = *(undefined8 *)(piVar23 + 0x14);
            local_620 = 0;
            FExpressionNode::operator=(&local_628,&local_9a0);
            puVar14 = local_990;
            if (((local_998._4_4_ == 0 && (int)local_998 == 0) && local_9a0._4_4_ == 0) &&
                (int)local_9a0 == 0) {
              puVar14 = puVar22;
            }
            local_5d0 = 1;
            local_5e8 = local_960;
            iStack_5e4 = iStack_95c;
            iStack_5e0 = iStack_958;
            iStack_5dc = iStack_954;
            local_5d8 = local_950;
            if (puVar14 != (undefined8 *)0x0) {
              (**(code **)*puVar14)(local_960,0);
            }
            local_bf0 = uVar16 + 1;
            if (local_bec < (int)local_bf0) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_bf8,piVar18);
            }
            piVar18 = (int *)(ulonglong)local_bf0;
            local_b68 = 0;
            puVar14 = (undefined8 *)((longlong)(int)uVar16 * 0x68 + local_bf8);
            local_b60 = 0;
            FExpressionNode::operator=(&local_b68,&local_628);
            local_b28 = local_5e8;
            iStack_b24 = iStack_5e4;
            iStack_b20 = iStack_5e0;
            iStack_b1c = iStack_5dc;
            local_b10 = local_5d0;
            local_b18 = local_5d8;
            *puVar14 = 0;
            puVar14[1] = 0;
            FExpressionNode::operator=(puVar14,&local_b68);
            *(int *)(puVar14 + 8) = local_b28;
            *(int *)((longlong)puVar14 + 0x44) = iStack_b24;
            *(int *)(puVar14 + 9) = iStack_b20;
            *(int *)((longlong)puVar14 + 0x4c) = iStack_b1c;
            puVar14[10] = local_b18;
            *(undefined4 *)(puVar14 + 0xb) = local_b10;
            *(undefined4 *)(puVar14 + 0xc) = 0;
            puVar14 = local_b58;
            if (((local_b60._4_4_ == 0 && (int)local_b60 == 0) && local_b68._4_4_ == 0) &&
                (int)local_b68 == 0) {
              puVar14 = puVar22;
            }
            if (puVar14 != (undefined8 *)0x0) {
              (**(code **)*puVar14)(local_b28,0);
            }
            puVar14 = local_618;
            if (((local_620._4_4_ == 0 && (int)local_620 == 0) && local_628._4_4_ == 0) &&
                (int)local_628 == 0) {
              puVar14 = puVar22;
            }
            if (puVar14 != (undefined8 *)0x0) {
              (**(code **)*puVar14)(puVar14,0);
            }
          }
        }
        else if ((int)piVar19 == 1) {
          piVar8 = (int *)TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindId
                                    (*(longlong *)(param_1 + 6) + 0xa0,local_ba0,piVar23);
          if (*piVar8 == -1) {
            piVar8 = (int *)FExpressionGrammar::GetBinaryOperatorDefParameters
                                      (*(undefined8 *)(param_1 + 6),piVar23);
            if (piVar8 == (int *)0x0) {
              piVar23 = (int *)FExpressionToken::FExpressionToken(local_6a0,piVar23);
              local_328 = 0;
              local_320 = 0;
              FExpressionNode::operator=(&local_328,piVar23);
              local_2e8 = piVar23[0x10];
              iStack_2e4 = piVar23[0x11];
              iStack_2e0 = piVar23[0x12];
              iStack_2dc = piVar23[0x13];
              local_2d8 = *(undefined8 *)(piVar23 + 0x14);
              local_2d0 = 0;
              piVar19 = piVar23 + 4;
              if (((piVar23[3] == 0 && piVar23[2] == 0) && piVar23[1] == 0) && *piVar23 == 0) {
                piVar19 = (int *)0x0;
              }
              if (piVar19 != (int *)0x0) {
                (*(code *)**(undefined8 **)piVar19)(local_2e8,0);
              }
              iVar7 = param_1[4];
              param_1[4] = iVar7 + 1;
              if (param_1[5] < iVar7 + 1) {
                TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar7);
              }
              puVar14 = (undefined8 *)((longlong)iVar7 * 0x60 + *(longlong *)(param_1 + 2));
              *puVar14 = 0;
              puVar14[1] = 0;
              FExpressionNode::operator=(puVar14,&local_328);
              *(int *)(puVar14 + 8) = local_2e8;
              *(int *)((longlong)puVar14 + 0x44) = iStack_2e4;
              *(int *)(puVar14 + 9) = iStack_2e0;
              *(int *)((longlong)puVar14 + 0x4c) = iStack_2dc;
              puVar14[10] = local_2d8;
              *(undefined4 *)(puVar14 + 0xb) = local_2d0;
              piVar19 = local_318;
              if (((local_320._4_4_ == 0 && (int)local_320 == 0) && local_328._4_4_ == 0) &&
                  (int)local_328 == 0) {
                piVar19 = (int *)0x0;
              }
              if (piVar19 != (int *)0x0) {
                (*(code *)**(undefined8 **)piVar19)(local_2e8,0);
              }
              piVar19 = (int *)0x0;
            }
            else {
              if (0 < (int)uVar16) {
                do {
                  iVar7 = (uint)piVar18 - 1;
                  lVar20 = (longlong)iVar7 * 0x68 + local_bf8;
                  if (piVar8[1] == 1) {
                    bVar3 = *(int *)(lVar20 + 0x60) <= *piVar8;
                  }
                  else {
                    bVar3 = *(int *)(lVar20 + 0x60) < *piVar8;
                  }
                  uVar16 = (uint)piVar18;
                  if (!bVar3) break;
                  local_1e8 = 0;
                  local_1e0 = 0;
                  FExpressionNode::operator=(&local_1e8,lVar20);
                  local_1a8 = *(undefined4 *)(lVar20 + 0x40);
                  uStack_1a4 = *(undefined4 *)(lVar20 + 0x44);
                  uStack_1a0 = *(undefined4 *)(lVar20 + 0x48);
                  uStack_19c = *(undefined4 *)(lVar20 + 0x4c);
                  local_198 = *(undefined8 *)(lVar20 + 0x50);
                  local_190 = *(undefined4 *)(lVar20 + 0x58);
                  local_188 = *(undefined4 *)(lVar20 + 0x60);
                  TArray<FExpressionCompiler::FWrappedOperator,FDefaultAllocator>::RemoveAtImpl
                            (&local_bf8,iVar7,1);
                  local_3e8 = 0;
                  local_3e0 = 0;
                  FExpressionNode::operator=(&local_3e8,&local_1e8);
                  iVar7 = param_1[4];
                  local_390 = local_190;
                  local_3a8 = local_1a8;
                  uStack_3a4 = uStack_1a4;
                  uStack_3a0 = uStack_1a0;
                  uStack_39c = uStack_19c;
                  local_398 = local_198;
                  param_1[4] = iVar7 + 1;
                  if (param_1[5] < iVar7 + 1) {
                    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow
                              (param_1 + 2,iVar7);
                  }
                  puVar14 = (undefined8 *)((longlong)iVar7 * 0x60 + *(longlong *)(param_1 + 2));
                  *puVar14 = 0;
                  puVar14[1] = 0;
                  FExpressionNode::operator=(puVar14,&local_3e8);
                  *(undefined4 *)(puVar14 + 8) = local_3a8;
                  *(undefined4 *)((longlong)puVar14 + 0x44) = uStack_3a4;
                  *(undefined4 *)(puVar14 + 9) = uStack_3a0;
                  *(undefined4 *)((longlong)puVar14 + 0x4c) = uStack_39c;
                  puVar14[10] = local_398;
                  *(undefined4 *)(puVar14 + 0xb) = local_390;
                  puVar14 = local_3d8;
                  if (((local_3e0._4_4_ == 0 && (int)local_3e0 == 0) && local_3e8._4_4_ == 0) &&
                      (int)local_3e8 == 0) {
                    puVar14 = (undefined8 *)0x0;
                  }
                  if (puVar14 != (undefined8 *)0x0) {
                    (**(code **)*puVar14)(local_3a8,0);
                  }
                  puVar14 = local_1d8;
                  if (((local_1e0._4_4_ == 0 && (int)local_1e0 == 0) && local_1e8._4_4_ == 0) &&
                      (int)local_1e8 == 0) {
                    puVar14 = (undefined8 *)0x0;
                  }
                  if (puVar14 != (undefined8 *)0x0) {
                    (**(code **)*puVar14)(puVar14,0);
                  }
                  piVar18 = (int *)(ulonglong)local_bf0;
                  uVar16 = local_bf0;
                } while (0 < (int)local_bf0);
              }
              piVar23 = (int *)FExpressionToken::FExpressionToken(local_6f8,piVar23);
              piVar19 = (int *)0x0;
              local_388 = 0;
              local_380 = 0;
              FExpressionNode::operator=(&local_388,piVar23);
              local_348 = piVar23[0x10];
              iStack_344 = piVar23[0x11];
              iStack_340 = piVar23[0x12];
              iStack_33c = piVar23[0x13];
              local_338 = *(undefined8 *)(piVar23 + 0x14);
              local_330 = 3;
              piVar18 = piVar23 + 4;
              if (((piVar23[3] == 0 && piVar23[2] == 0) && piVar23[1] == 0) && *piVar23 == 0) {
                piVar18 = piVar19;
              }
              if (piVar18 != (int *)0x0) {
                (*(code *)**(undefined8 **)piVar18)(local_348,0);
              }
              local_bf0 = uVar16 + 1;
              if (local_bec < (int)local_bf0) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
                ResizeGrow(&local_bf8,uVar16);
              }
              piVar18 = (int *)(ulonglong)local_bf0;
              local_838 = 0;
              local_830 = 0;
              FExpressionNode::operator=(&local_838,&local_388);
              local_7f8 = local_348;
              iStack_7f4 = iStack_344;
              iStack_7f0 = iStack_340;
              iStack_7ec = iStack_33c;
              local_7e8 = local_338;
              local_7e0 = local_330;
              FExpressionCompiler::FWrappedOperator::FWrappedOperator
                        ((longlong)(int)uVar16 * 0x68 + local_bf8,&local_838,*piVar8);
              piVar23 = local_378;
              if (((local_380._4_4_ == 0 && (int)local_380 == 0) && local_388._4_4_ == 0) &&
                  (int)local_388 == 0) {
                piVar23 = piVar19;
              }
              if (piVar23 != (int *)0x0) {
                (*(code *)**(undefined8 **)piVar23)(piVar23,0);
              }
            }
          }
          else {
            if (0 < (int)uVar16) {
              piVar8 = (int *)0x0;
              uVar4 = uVar16;
              do {
                uVar21 = uVar4 - 1;
                uVar16 = (uint)piVar18;
                piVar18 = (int *)((longlong)(int)uVar21 * 0x68 + local_bf8);
                piVar23 = local_bb8;
                if (0 < piVar18[0x18]) break;
                local_258 = 0;
                local_250 = 0;
                FExpressionNode::operator=(&local_258,piVar18);
                local_218 = piVar18[0x10];
                iStack_214 = piVar18[0x11];
                iStack_210 = piVar18[0x12];
                iStack_20c = piVar18[0x13];
                local_208 = *(undefined8 *)(piVar18 + 0x14);
                local_200 = piVar18[0x16];
                local_1f8 = piVar18[0x18];
                piVar23 = piVar18 + 4;
                if (((piVar18[3] == 0 && piVar18[2] == 0) && piVar18[1] == 0) && *piVar18 == 0) {
                  piVar23 = piVar8;
                }
                if (piVar23 != (int *)0x0) {
                  (*(code *)**(undefined8 **)piVar23)(local_218,0);
                }
                iVar7 = (uVar16 - uVar21) + -1;
                if (iVar7 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            (piVar18,(void *)((longlong)(int)uVar4 * 0x68 + local_bf8),
                             (longlong)iVar7 * 0x68);
                }
                local_4a8 = 0;
                local_4a0 = 0;
                uVar16 = uVar16 - 1;
                piVar18 = (int *)(ulonglong)uVar16;
                FExpressionNode::operator=(&local_4a8,&local_258);
                iVar7 = param_1[4];
                local_450 = local_200;
                local_468 = local_218;
                iStack_464 = iStack_214;
                iStack_460 = iStack_210;
                iStack_45c = iStack_20c;
                local_458 = local_208;
                param_1[4] = iVar7 + 1;
                if (param_1[5] < iVar7 + 1) {
                  TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar7)
                  ;
                }
                puVar14 = (undefined8 *)((longlong)iVar7 * 0x60 + *(longlong *)(param_1 + 2));
                *puVar14 = 0;
                puVar14[1] = 0;
                FExpressionNode::operator=(puVar14,&local_4a8);
                *(int *)(puVar14 + 8) = local_468;
                *(int *)((longlong)puVar14 + 0x44) = iStack_464;
                *(int *)(puVar14 + 9) = iStack_460;
                *(int *)((longlong)puVar14 + 0x4c) = iStack_45c;
                puVar14[10] = local_458;
                *(int *)(puVar14 + 0xb) = local_450;
                piVar23 = local_498;
                if (((local_4a0._4_4_ == 0 && (int)local_4a0 == 0) && local_4a8._4_4_ == 0) &&
                    (int)local_4a8 == 0) {
                  piVar23 = piVar8;
                }
                if (piVar23 != (int *)0x0) {
                  (*(code *)**(undefined8 **)piVar23)(local_468,0);
                }
                piVar23 = local_248;
                if (((local_250._4_4_ == 0 && (int)local_250 == 0) && local_258._4_4_ == 0) &&
                    (int)local_258 == 0) {
                  piVar23 = piVar8;
                }
                if (piVar23 != (int *)0x0) {
                  (*(code *)**(undefined8 **)piVar23)(piVar23,0);
                }
                piVar23 = local_bb8;
                uVar4 = uVar21;
              } while (0 < (int)uVar16);
            }
            local_aa8 = 0;
            local_aa0 = 0;
            FExpressionNode::operator=(&local_aa8,piVar23);
            local_a68 = piVar23[0x10];
            iStack_a64 = piVar23[0x11];
            iStack_a60 = piVar23[0x12];
            iStack_a5c = piVar23[0x13];
            local_448 = 0;
            local_a58 = *(undefined8 *)(piVar23 + 0x14);
            local_440 = 0;
            FExpressionNode::operator=(&local_448,&local_aa8);
            puVar14 = local_a98;
            if (((local_aa0._4_4_ == 0 && (int)local_aa0 == 0) && local_aa8._4_4_ == 0) &&
                (int)local_aa8 == 0) {
              puVar14 = (undefined8 *)0x0;
            }
            local_3f0 = 2;
            local_408 = local_a68;
            iStack_404 = iStack_a64;
            iStack_400 = iStack_a60;
            iStack_3fc = iStack_a5c;
            local_3f8 = local_a58;
            if (puVar14 != (undefined8 *)0x0) {
              (**(code **)*puVar14)(local_a68,0);
            }
            local_bf0 = uVar16 + 1;
            if (local_bec < (int)local_bf0) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_bf8,uVar16);
            }
            piVar18 = (int *)(ulonglong)local_bf0;
            local_898 = 0;
            local_890 = 0;
            FExpressionNode::operator=(&local_898,&local_448);
            local_858 = local_408;
            iStack_854 = iStack_404;
            iStack_850 = iStack_400;
            iStack_84c = iStack_3fc;
            local_848 = local_3f8;
            local_840 = local_3f0;
            FExpressionCompiler::FWrappedOperator::FWrappedOperator
                      ((longlong)(int)uVar16 * 0x68 + local_bf8,&local_898,0);
            puVar14 = local_438;
            if (((local_440._4_4_ == 0 && (int)local_440 == 0) && local_448._4_4_ == 0) &&
                (int)local_448 == 0) {
              puVar14 = (undefined8 *)0x0;
            }
            if (puVar14 != (undefined8 *)0x0) {
              (**(code **)*puVar14)(puVar14,0);
            }
          }
        }
      }
      else {
        *param_1 = *param_1 + 1;
        FUN_141665da0(param_1,local_648,piVar23);
        param_2 = local_bd8;
        if (local_630 != '\0') {
          *(undefined1 *)(local_bd8 + 0x18) = 0;
          FText::FText(local_bd8,local_648);
          *(undefined1 *)(param_2 + 0x18) = 1;
          if ((local_630 != '\0') && (local_630 = '\0', local_640 != (longlong *)0x0)) {
            LOCK();
            plVar15 = local_640 + 1;
            lVar20 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar20 == 1) {
              (**(code **)*local_640)(local_640);
              LOCK();
              piVar18 = (int *)((longlong)local_640 + 0xc);
              iVar7 = *piVar18;
              *piVar18 = *piVar18 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_640 + 8))(local_640,1);
              }
            }
            piVar18 = (int *)(ulonglong)local_bf0;
          }
          if ((int)piVar18 != 0) {
            piVar19 = (int *)(local_bf8 + 8);
            do {
              piVar23 = piVar19 + 2;
              if (((piVar19[-2] == 0 && piVar19[-1] == 0) && piVar19[1] == 0) && *piVar19 == 0) {
                piVar23 = (int *)0x0;
              }
              if (piVar23 != (int *)0x0) {
                (*(code *)**(undefined8 **)piVar23)(piVar23,0);
              }
              piVar19 = piVar19 + 0x1a;
              uVar16 = (int)piVar18 - 1;
              piVar18 = (int *)(ulonglong)uVar16;
            } while (uVar16 != 0);
          }
          goto LAB_141667688;
        }
        piVar19 = (int *)0x1;
      }
      iVar7 = *param_1 + 1;
      *param_1 = iVar7;
      plVar15 = *(longlong **)(param_1 + 8);
      param_4 = local_be8;
      param_2 = local_bd8;
      param_3 = local_bc8;
    } while (iVar7 < (int)plVar15[1]);
  }
  if (param_4 == (wchar_t *)0x0) {
LAB_141667582:
    uVar16 = (uint)piVar18;
    while (0 < (int)uVar16) {
      iVar7 = (int)piVar18 + -1;
      lVar20 = (longlong)iVar7 * 0x68 + local_bf8;
      FExpressionToken::FExpressionToken(&local_148,lVar20);
      local_f0 = *(undefined4 *)(lVar20 + 0x58);
      local_e8 = *(undefined4 *)(lVar20 + 0x60);
      TArray<FExpressionCompiler::FWrappedOperator,FDefaultAllocator>::RemoveAtImpl
                (&local_bf8,iVar7,1);
      iVar7 = param_1[4];
      param_1[4] = iVar7 + 1;
      if (param_1[5] < iVar7 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar7);
      }
      FCompiledToken::FCompiledToken((longlong)iVar7 * 0x60 + *(longlong *)(param_1 + 2),&local_148)
      ;
      piVar18 = local_138;
      if (((local_148 == 0 && local_144 == 0) && local_140 == 0) && local_13c == 0) {
        piVar18 = (int *)0x0;
      }
      if (piVar18 != (int *)0x0) {
        (*(code *)**(undefined8 **)piVar18)(piVar18,0);
      }
      piVar18 = (int *)(ulonglong)local_bf0;
      uVar16 = local_bf0;
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
    if ((int)piVar18 != 0) {
      piVar19 = (int *)(local_bf8 + 8);
      do {
        piVar23 = piVar19 + 2;
        if (((piVar19[-2] == 0 && piVar19[-1] == 0) && piVar19[1] == 0) && *piVar19 == 0) {
          piVar23 = (int *)0x0;
        }
        if (piVar23 != (int *)0x0) {
          (*(code *)**(undefined8 **)piVar23)(piVar23,0);
        }
        piVar19 = piVar19 + 0x1a;
        uVar16 = (int)piVar18 - 1;
        piVar18 = (int *)(ulonglong)uVar16;
      } while (uVar16 != 0);
    }
  }
  else {
    uVar1 = param_3[0x14];
    local_b78 = 0;
    plStack_b70 = (longlong *)0x0;
    local_b88 = 0;
    plStack_b80 = (longlong *)0x0;
    uVar10 = FText::AsNumber(local_710,param_3[0x15],0,&local_b78);
    uVar11 = FText::AsNumber(local_758,uVar1,0,&local_b88);
    uVar12 = FUN_1416734c0(local_bc8 + 0x10,local_908);
    puVar13 = (undefined4 *)FText::FromString(local_740,uVar12);
    local_bc8 = puVar13;
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_7d8,
                        L"Syntax error: Reached end of expression before matching end of group \'{0}\' at line {1}:{2}"
                        ,L"ExpressionParser",L"SyntaxError_UnmatchedGroup");
    puVar14 = (undefined8 *)FTextFormat::FTextFormat(local_768,uVar12);
    local_d8[0] = 4;
    FText::FText(local_c8,puVar13);
    local_b0 = 1;
    local_a8 = 4;
    FText::FText(local_98,uVar11);
    local_80 = 1;
    local_78 = 4;
    FText::FText(local_68,uVar10);
    local_be8 = (wchar_t *)local_d8;
    local_50 = 1;
    puStack_be0 = local_48;
    local_b98 = *puVar14;
    local_b90 = puVar14[1];
    if (local_b90 != 0) {
      LOCK();
      *(int *)(local_b90 + 8) = *(int *)(local_b90 + 8) + 1;
      UNLOCK();
      piVar18 = (int *)(ulonglong)local_bf0;
    }
    local_928 = local_be8;
    uStack_920 = puStack_be0;
    uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_918,&local_928);
    uVar12 = FText::Format(local_7c0,&local_b98,uVar12);
    FText::FText(local_8f8,uVar12);
    if (local_7b8 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_7b8 + 1;
      lVar20 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*local_7b8)(local_7b8);
        LOCK();
        piVar18 = (int *)((longlong)local_7b8 + 0xc);
        iVar7 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_7b8 + 8))(local_7b8,1);
        }
      }
      piVar18 = (int *)(ulonglong)local_bf0;
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_918);
    puVar17 = &stack0xffffffffffffffc8;
    lVar20 = 3;
    do {
      puVar17 = puVar17 + -0x30;
      TOptional<FExpressionError>::Reset(puVar17);
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar14);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_bc8);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar11);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar10);
    FText::FText(local_8e0,local_8f8);
    param_2 = local_bd8;
    FText::FText(local_bd8,local_8e0);
    *(undefined1 *)(param_2 + 0x18) = 1;
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_8e0);
    if (local_8f0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_8f0 + 1;
      lVar20 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*local_8f0)(local_8f0);
        LOCK();
        piVar18 = (int *)((longlong)local_8f0 + 0xc);
        iVar7 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_8f0 + 8))(local_8f0,1);
        }
      }
      piVar18 = (int *)(ulonglong)local_bf0;
    }
    if (local_7d0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_7d0 + 1;
      lVar20 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*local_7d0)(local_7d0);
        LOCK();
        piVar18 = (int *)((longlong)local_7d0 + 0xc);
        iVar7 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_7d0 + 8))(local_7d0,1);
        }
      }
      piVar18 = (int *)(ulonglong)local_bf0;
    }
    if (local_908[0] != 0) {
      FMemory::Free();
    }
    plVar15 = plStack_b80;
    if (plStack_b80 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_b80 + 1;
      lVar20 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*plStack_b80)(plStack_b80);
        LOCK();
        piVar18 = (int *)((longlong)plVar15 + 0xc);
        iVar7 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
      piVar18 = (int *)(ulonglong)local_bf0;
    }
    plVar15 = plStack_b70;
    if (plStack_b70 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_b70 + 1;
      lVar20 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*plStack_b70)(plStack_b70);
        LOCK();
        piVar18 = (int *)((longlong)plVar15 + 0xc);
        iVar7 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
      piVar18 = (int *)(ulonglong)local_bf0;
    }
    if ((int)piVar18 != 0) {
      piVar19 = (int *)(local_bf8 + 8);
      do {
        piVar23 = piVar19 + 2;
        if (((piVar19[-2] == 0 && piVar19[-1] == 0) && piVar19[1] == 0) && *piVar19 == 0) {
          piVar23 = (int *)0x0;
        }
        if (piVar23 != (int *)0x0) {
          (*(code *)**(undefined8 **)piVar23)(piVar23,0);
        }
        piVar19 = piVar19 + 0x1a;
        uVar16 = (int)piVar18 - 1;
        piVar18 = (int *)(ulonglong)uVar16;
      } while (uVar16 != 0);
    }
  }
LAB_141667688:
  if (local_bf8 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1416676d0 CompressImageData body=100 status=ok
// SIG undefined CompressImageData(void)

void FObjectThumbnail::CompressImageData(int *param_1)

{
  param_1[4] = 0;
  if (0x7fffffff < (uint)param_1[5]) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  }
  if ((((DAT_1468e28f8 != (undefined8 *)0x0) && (0 < param_1[8])) && (0 < *param_1)) &&
     (0 < param_1[1])) {
    (**(code **)*DAT_1468e28f8)(DAT_1468e28f8,param_1 + 6,*param_1,param_1[1],param_1 + 2);
  }
  return;
}



// FUNCTION 141667740 FUN_141667740 body=3099 status=ok
// SIG undefined FUN_141667740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141667740(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c4 [4];
  undefined4 *local_c0;
  code **local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_141680f90();
  puVar2 = (undefined4 *)FUN_141673c40();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_1416740c0();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_1416740c0();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = FUN_141664f80;
  lVar1 = param_1 + 0x2c8;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141673bc0();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_1416740c0();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_1416740c0();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = FUN_141665000;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141673ac0();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_1416740c0();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_1416740c0();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = FUN_1416651c0;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141673a40();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_1416740c0();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_1416740c0();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = FUN_141665100;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141673d40();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_1416740c0();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_1416740c0();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = FUN_141664ef0;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_1416737c0();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_1416740c0();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_1416740c0();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = FUN_141665270;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141673dc0();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_1416740c0();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_1416740c0();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = FUN_141664fb0;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141673dc0();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_1416740c0();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_141674140();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = FUN_141665240;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141673dc0();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_141674140();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_1416740c0();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = FUN_141665190;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141673dc0();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_141674140();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_141674140();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_695ac3e158d5320a2c521e967b20ef74>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
                ::Call;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141673740();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_1416740c0();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_1416740c0();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = FUN_141665050;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141673740();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_1416740c0();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_141674140();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = FUN_141664f20;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141673740();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_141674140();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_1416740c0();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = FUN_1416652a0;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141673740();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_141674140();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_141674140();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_77e74835ea2b53ad4ce9e699d5e1eda2>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
                ::Call;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141673cc0();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  local_a0 = 0;
  uStack_98 = 0;
  puVar2 = (undefined4 *)FUN_1416740c0();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = FUN_141665210;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(param_1 + 0x228,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141673cc0();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  local_a0 = 0;
  uStack_98 = 0;
  puVar2 = (undefined4 *)FUN_141674140();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1446e9598;
    *(undefined1 *)(puVar3 + 1) = local_c8;
  }
  local_78[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_f0db89bb39886d364e10bc99cf3ab19c>,TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>
                ::Call;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(param_1 + 0x228,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined4 *)FUN_141674040();
  local_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  uStack_a4 = puVar2[3];
  puVar3 = (undefined8 *)FUN_1416740c0();
  local_a0 = *puVar3;
  uStack_98 = puVar3[1];
  puVar2 = (undefined4 *)FUN_1416740c0();
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_90 = *puVar2;
  uStack_8c = puVar2[1];
  uStack_88 = puVar2[2];
  uStack_84 = puVar2[3];
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_1;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_78[0] = FUN_1416650d0;
  local_c0 = &local_b0;
  local_b8 = local_78;
  FUN_14165f9e0(lVar1,local_c4,&local_c0,0);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141668360 FUN_141668360 body=66 status=ok
// SIG undefined FUN_141668360(void)

undefined8 FUN_141668360(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = &LAB_141664ec0;
  FUN_1416685e0(0x41664ec0,param_2,&local_18);
  return param_1;
}



// FUNCTION 1416683b0 FUN_1416683b0 body=66 status=ok
// SIG undefined FUN_1416683b0(void)

undefined8 FUN_1416683b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = &LAB_141664de0;
  FUN_1416685e0(0x41664de0,param_2,&local_18);
  return param_1;
}



// FUNCTION 141668400 FUN_141668400 body=472 status=ok
// SIG undefined FUN_141668400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141668400(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  longlong *plVar2;
  int *piVar3;
  undefined ***pppuVar4;
  int iVar5;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  int local_e0;
  undefined4 local_dc;
  longlong local_d8 [2];
  undefined1 local_c8;
  undefined1 local_c7;
  longlong local_c0 [2];
  undefined2 local_b0;
  undefined1 local_a8 [16];
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined **local_88;
  undefined1 local_80 [16];
  undefined1 local_70;
  undefined1 local_6f;
  wchar_t *local_58;
  longlong local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  ExpressionParser::ParseLocalizedNumberWithAgnosticFallback(&local_58,param_2 + 0x10,0,0);
  if (local_40 != '\0') {
    local_e8 = (wchar_t *)0x0;
    iVar5 = (int)(local_50 - (longlong)local_58 >> 1);
    local_dc = 0;
    local_e0 = iVar5 + 1;
    if (iVar5 == 0) {
      local_e0 = 0;
    }
    if (0 < local_e0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      pwVar1 = local_e8;
      if (0 < local_e0) {
        wcsncpy(local_e8,local_58,(longlong)iVar5);
        pwVar1[iVar5] = L'\0';
      }
    }
    plVar2 = (longlong *)FTextFilterString::FTextFilterString(local_a8,&local_e8);
    FString::FString(local_c0,plVar2);
    local_b0 = 1;
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    piVar3 = (int *)FUN_1416740c0();
    local_98 = *piVar3;
    iStack_94 = piVar3[1];
    iStack_90 = piVar3[2];
    iStack_8c = piVar3[3];
    FString::FString(local_d8,local_c0);
    local_c8 = (undefined1)local_b0;
    local_c7 = local_b0._1_1_;
    local_88 = &PTR_FUN_144ccfba0;
    FString::FString(local_80,local_d8);
    local_70 = local_c8;
    local_6f = local_c7;
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
    if (local_c0[0] != 0) {
      FMemory::Free();
    }
    FExpressionTokenConsumer::Add(param_2,&local_58,&local_98);
    pppuVar4 = &local_88;
    if (((local_98 == 0 && iStack_94 == 0) && iStack_90 == 0) && iStack_8c == 0) {
      pppuVar4 = (undefined ***)0x0;
    }
    if (pppuVar4 != (undefined ***)0x0) {
      (*(code *)**pppuVar4)(pppuVar4,0);
    }
    if (local_e8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 1416685e0 FUN_1416685e0 body=605 status=ok
// SIG undefined FUN_1416685e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1416685e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  int *piVar4;
  undefined ***pppuVar5;
  longlong *plVar6;
  undefined1 auStack_148 [32];
  undefined2 local_128 [4];
  undefined2 local_120 [4];
  longlong *local_118;
  longlong *local_110;
  undefined4 local_108 [2];
  longlong *local_100;
  longlong *plStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  longlong local_e8 [4];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c0 [24];
  longlong *local_a8;
  longlong *plStack_a0;
  undefined4 *local_98;
  undefined8 local_90;
  longlong **local_88;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 local_50;
  undefined1 local_4f;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_a8 = (longlong *)local_128;
  plStack_a0 = local_e8;
  local_98 = local_108;
  plVar3 = *(longlong **)(param_2 + 0x20);
  local_88 = &local_118;
  local_118 = (longlong *)0x0;
  local_110 = (longlong *)0x0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_128[0] = 0;
  local_108[0] = 0;
  local_90 = param_3;
  if ((*(longlong **)(param_2 + 0x10) <= plVar3) &&
     (plVar3 <= (longlong *)((longlong)*(longlong **)(param_2 + 0x18) - 2U))) {
    local_f0 = 0;
    uStack_ec = (undefined4)((longlong)plVar3 - (longlong)*(longlong **)(param_2 + 0x10) >> 1);
    plVar6 = plVar3;
    local_100 = plVar3;
    plStack_f8 = plVar3;
    if (plVar3 != *(longlong **)(param_2 + 0x18)) {
      do {
        local_120[0] = (undefined2)*plVar6;
        uVar2 = FUN_141664e60(&local_a8,local_120);
        plVar1 = local_100;
        if (uVar2 == 3) goto LAB_1416687ea;
      } while ((((1 < uVar2) ||
                (plVar6 = (longlong *)((longlong)plVar6 + 2), plStack_f8 = plVar6, uVar2 != 1)) &&
               (uVar2 != 2)) && (plVar6 != *(longlong **)(param_2 + 0x18)));
      if (plVar6 != plVar3) {
        local_98 = (undefined4 *)CONCAT44(uStack_ec,local_f0);
        local_100 = local_118;
        plVar3 = local_110;
        local_110 = (longlong *)0x0;
        local_a8 = plVar1;
        plStack_a0 = plStack_f8;
        local_90 = CONCAT71(local_90._1_7_,1);
        local_118 = (longlong *)0x0;
        plStack_f8 = plVar3;
        plVar3 = (longlong *)FUN_141669c50(local_c0,&local_100);
        piVar4 = (int *)FUN_1416740c0();
        local_78 = *piVar4;
        iStack_74 = piVar4[1];
        iStack_70 = piVar4[2];
        iStack_6c = piVar4[3];
        FString::FString(local_e8 + 2,plVar3);
        local_c8 = (undefined1)plVar3[2];
        local_c7 = *(undefined1 *)((longlong)plVar3 + 0x11);
        local_68 = &PTR_FUN_144ccfba0;
        FString::FString(local_60,local_e8 + 2);
        local_50 = local_c8;
        local_4f = local_c7;
        if (local_e8[2] != 0) {
          FMemory::Free();
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        FExpressionTokenConsumer::Add(param_2,&local_a8,&local_78);
        pppuVar5 = &local_68;
        if (((local_78 == 0 && iStack_74 == 0) && iStack_70 == 0) && iStack_6c == 0) {
          pppuVar5 = (undefined ***)0x0;
        }
        if (pppuVar5 != (undefined ***)0x0) {
          (*(code *)**pppuVar5)(pppuVar5,0);
        }
      }
    }
  }
LAB_1416687ea:
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (local_e8[0] != 0) {
    FMemory::Free(local_e8[0]);
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141668840 FUN_141668840 body=1744 status=ok
// SIG undefined FUN_141668840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141668840(char *param_1,longlong param_2,longlong param_3)

{
  undefined2 *puVar1;
  longlong *plVar2;
  int *piVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  undefined2 *puVar14;
  wchar_t *pwVar15;
  int iVar16;
  undefined8 *puVar17;
  wchar_t *pwVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [8];
  undefined2 local_1b0 [4];
  longlong local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  wchar_t *local_190;
  uint local_188;
  int local_184;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined1 local_f0 [8];
  longlong *local_e8;
  char local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  char local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  char local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  char local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  uVar20 = 0;
  local_180 = param_2;
  if (*param_1 == '\0') goto LAB_141668954;
  puVar5 = *(undefined2 **)(param_3 + 0x20);
  puVar14 = *(undefined2 **)(param_3 + 0x10);
  if (puVar5 < puVar14) goto LAB_141668954;
  puVar1 = *(undefined2 **)(param_3 + 0x18) + -1;
  if (puVar1 < puVar5) goto LAB_141668954;
  local_1b8[0] = 0;
  if ((puVar5 < puVar14) || (puVar1 < puVar5)) {
LAB_141668937:
    local_68 = '\0';
  }
  else {
    local_168 = 0;
    uStack_164 = (undefined4)((longlong)puVar5 - (longlong)puVar14 >> 1);
    puVar14 = puVar5;
    local_178 = puVar5;
    uStack_170 = puVar5;
    if (puVar5 == *(undefined2 **)(param_3 + 0x18)) goto LAB_141668937;
    do {
      local_1b0[0] = *puVar14;
      uVar7 = FUN_141664e10(local_1b8,local_1b0);
      if (uVar7 == 3) goto LAB_141668937;
    } while ((((1 < uVar7) || (puVar14 = puVar14 + 1, uStack_170 = puVar14, uVar7 != 1)) &&
             (uVar7 != 2)) && (puVar14 != *(undefined2 **)(param_3 + 0x18)));
    if (puVar14 == puVar5) goto LAB_141668937;
    local_68 = '\x01';
    local_70 = CONCAT44(uStack_164,local_168);
    local_80 = (undefined4)local_178;
    uStack_7c = local_178._4_4_;
    uStack_78 = (undefined4)uStack_170;
    uStack_74 = uStack_170._4_4_;
  }
  if (((local_68 != '\0') &&
      (uVar9 = CONCAT44(uStack_74,uStack_78), *(ulonglong *)(param_3 + 0x10) <= uVar9)) &&
     (uVar9 <= *(ulonglong *)(param_3 + 0x18))) {
    *(ulonglong *)(param_3 + 0x20) = uVar9;
  }
LAB_141668954:
  pwVar15 = *(wchar_t **)(param_3 + 0x20);
  if (pwVar15 == (wchar_t *)*(longlong *)(param_3 + 0x18)) {
LAB_141668ee0:
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  else {
    puVar17 = *(undefined8 **)(param_1 + 8);
    puVar21 = puVar17 + (longlong)*(int *)(param_1 + 0x10) * 10;
    if (puVar17 != puVar21) {
      plVar19 = puVar17 + 6;
      local_198 = pwVar15;
      do {
        uVar9 = uVar20;
        if ((int)plVar19[2] != 0) {
          plVar12 = (longlong *)*plVar19;
          if ((longlong *)*plVar19 == (longlong *)0x0) {
            plVar12 = plVar19 + -4;
          }
          if (plVar12 != (longlong *)0x0) {
            uVar9 = (**(code **)(*plVar12 + 8))();
          }
        }
        lVar10 = (*(code *)*puVar17)(local_60,uVar9,param_3);
        local_88 = 0;
        bVar22 = *(char *)(lVar10 + 0x18) != '\0';
        if (bVar22) {
          FText::FText(local_a0,lVar10);
        }
        plVar12 = local_58;
        local_88 = bVar22;
        if ((local_48 != '\0') &&
           (local_48 = '\0', pwVar15 = local_198, local_58 != (longlong *)0x0)) {
          LOCK();
          plVar2 = local_58 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar3 = (int *)((longlong)plVar12 + 0xc);
            iVar8 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            pwVar15 = local_198;
            if (iVar8 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
              pwVar15 = local_198;
            }
          }
        }
        lVar10 = local_180;
        if (local_88 != '\0') {
          *(undefined1 *)(local_180 + 0x18) = 0;
          FText::FText(local_180,local_a0);
          *(undefined1 *)(lVar10 + 0x18) = 1;
          if (local_88 == '\0') {
            return lVar10;
          }
          local_88 = 0;
          if (local_98 == (longlong *)0x0) {
            return lVar10;
          }
          LOCK();
          plVar19 = local_98 + 1;
          lVar6 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar6 != 1) {
            return lVar10;
          }
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar3 = (int *)((longlong)local_98 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 != 1) {
            return lVar10;
          }
          (**(code **)(*local_98 + 8))(local_98,1);
          return lVar10;
        }
        param_2 = local_180;
        if ((wchar_t *)*(longlong *)(param_3 + 0x20) != pwVar15) goto LAB_141668ee0;
        puVar17 = puVar17 + 10;
        plVar19 = plVar19 + 10;
      } while (puVar17 != puVar21);
    }
    pwVar15 = *(wchar_t **)(param_3 + 0x20);
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = pwVar15;
    iVar8 = iswspace(*pwVar15);
    pwVar18 = pwVar15;
    while (iVar8 != 0) {
      pwVar4 = pwVar18 + 1;
      pwVar18 = pwVar18 + 1;
      iVar8 = iswspace(*pwVar4);
    }
    iVar8 = iswspace(*pwVar18);
    for (; (iVar8 == 0 && (*pwVar18 != L'\0')); pwVar18 = pwVar18 + 1) {
      iVar8 = iswspace(pwVar18[1]);
    }
    local_190 = (wchar_t *)0x0;
    lVar10 = (longlong)pwVar18 - (longlong)pwVar15 >> 1;
    iVar16 = (int)lVar10;
    local_184 = 0;
    iVar8 = 0x20;
    if (iVar16 < 0x21) {
      iVar8 = iVar16;
    }
    uVar9 = (ulonglong)(iVar8 + 1);
    if (iVar8 == 0) {
      uVar9 = uVar20;
    }
    local_188 = (uint)uVar9;
    if (0 < (int)local_188) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,0);
      pwVar15 = local_190;
      uVar9 = (ulonglong)local_188;
      if (0 < (int)local_188) {
        wcsncpy(local_190,local_198,(longlong)iVar8);
        pwVar15[iVar8] = L'\0';
        uVar9 = (ulonglong)local_188;
      }
    }
    if (0x20 < lVar10) {
      iVar8 = (int)uVar9;
      local_188 = (4 - (uint)(iVar8 != 0)) + iVar8;
      if (local_184 < (int)local_188) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,uVar9);
      }
      builtin_wcsncpy(local_190 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)),L"...",4);
    }
    uVar11 = FText::FromString(local_148,&local_190);
    local_100 = 4;
    FText::FText(local_f0,uVar11);
    uVar20 = local_1a0;
    lVar10 = (longlong)(int)local_1a0;
    local_d8 = '\x01';
    iVar8 = (int)local_1a0 + 1;
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar8);
    if (local_1a0._4_4_ < iVar8) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1a8,uVar20 & 0xffffffff);
    }
    puVar13 = (undefined4 *)(lVar10 * 0x30 + local_1a8);
    *puVar13 = local_100;
    *(ulonglong *)(puVar13 + 2) = CONCAT44(uStack_f4,local_f8);
    *(ulonglong *)(puVar13 + 2) = CONCAT44(uStack_f4,local_f8);
    puVar13[2] = local_f8;
    *(ulonglong *)(puVar13 + 2) = CONCAT44(uStack_f4,local_f8);
    *(undefined1 *)(puVar13 + 10) = 0;
    if (local_d8 != '\0') {
      FText::FText(puVar13 + 4,local_f0);
      *(undefined1 *)(puVar13 + 10) = 1;
      if ((local_d8 != '\0') && (local_d8 = '\0', local_e8 != (longlong *)0x0)) {
        LOCK();
        plVar19 = local_e8 + 1;
        lVar10 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar3 = (int *)((longlong)local_e8 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
    }
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_140 + 1;
      lVar10 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar3 = (int *)((longlong)local_140 + 0xc);
        iVar8 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
    if (local_190 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uVar20 = local_1a0;
    lVar10 = (longlong)(int)local_1a0;
    local_c8 = (longlong)(int)(*(longlong *)(param_3 + 0x20) - *(longlong *)(param_3 + 0x10) >> 1);
    iVar8 = (int)local_1a0 + 1;
    local_d0 = 0;
    local_a8 = '\0';
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar8);
    if (local_1a0._4_4_ < iVar8) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1a8,uVar20 & 0xffffffff);
    }
    puVar13 = (undefined4 *)(lVar10 * 0x30 + local_1a8);
    *puVar13 = local_d0;
    *(longlong *)(puVar13 + 2) = local_c8;
    *(longlong *)(puVar13 + 2) = local_c8;
    puVar13[2] = (undefined4)local_c8;
    *(longlong *)(puVar13 + 2) = local_c8;
    *(undefined1 *)(puVar13 + 10) = 0;
    if (local_a8 != '\0') {
      FText::FText(puVar13 + 4,local_c0);
      *(undefined1 *)(puVar13 + 10) = 1;
      if ((local_a8 != '\0') && (local_a8 = '\0', local_b8 != (longlong *)0x0)) {
        LOCK();
        plVar19 = local_b8 + 1;
        lVar10 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar3 = (int *)((longlong)local_b8 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
    }
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_118,L"Unrecognized token \'{0}\' at character {1}",L"ExpressionParser"
                        ,L"LexicalError");
    uVar11 = FTextFormat::FTextFormat(&local_178,uVar11);
    uVar11 = FText::Format(local_130,uVar11,&local_1a8);
    FText::FText(local_160,uVar11);
    param_2 = local_180;
    FText::FText(local_180,local_160);
    *(undefined1 *)(param_2 + 0x18) = 1;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_158 + 1;
      lVar10 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar3 = (int *)((longlong)local_158 + 0xc);
        iVar8 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_158 + 8))(local_158,1);
        }
      }
    }
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_128 + 1;
      lVar10 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar3 = (int *)((longlong)local_128 + 0xc);
        iVar8 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_110 + 1;
      lVar10 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar3 = (int *)((longlong)local_110 + 0xc);
        iVar8 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (&local_1a8);
  }
  return param_2;
}



// FUNCTION 141668f10 ContainsPointer body=43 status=ok
// SIG undefined ContainsPointer(void)

undefined8 FMemStackBase::ContainsPointer(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    if ((puVar1 + 2 <= param_2) &&
       (param_2 < (undefined8 *)((longlong)puVar1 + (longlong)*(int *)(puVar1 + 1) + 0x10))) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}



// FUNCTION 141668f40 ConvertRelativePathToFull body=23 status=ok
// SIG undefined ConvertRelativePathToFull(void)

undefined8 FPaths::ConvertRelativePathToFull(undefined8 param_1)

{
  UE4Paths_Private::ConvertRelativePathToFullInternal();
  return param_1;
}



// FUNCTION 141668f60 ConvertRelativePathToFull body=169 status=ok
// SIG undefined ConvertRelativePathToFull(void)

undefined8 FPaths::ConvertRelativePathToFull(undefined8 param_1,undefined8 param_2)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_18;
  ulonglong local_10;
  
  psVar1 = (short *)FUN_1416ac480();
  local_18 = 0;
  local_10 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_10 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,psVar1,(longlong)(int)uVar2 * 2);
  }
  UE4Paths_Private::ConvertRelativePathToFullInternal(param_1,&local_18,param_2);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141669010 ConvertRelativePathToFull body=143 status=ok
// SIG undefined ConvertRelativePathToFull(void)

undefined8
FPaths::ConvertRelativePathToFull(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = *(int *)(param_3 + 1);
  lVar1 = (longlong)local_10;
  _Src = (void *)*param_3;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  UE4Paths_Private::ConvertRelativePathToFullInternal(param_1,param_2,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416690a0 ConvertRelativePathToFull body=231 status=ok
// SIG undefined ConvertRelativePathToFull(void)

undefined8
FPaths::ConvertRelativePathToFull(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  longlong lVar2;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_10;
  pvVar1 = (void *)*param_3;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,pvVar1,lVar2 * 2);
  }
  local_20 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_20;
  pvVar1 = (void *)*param_2;
  local_28 = (void *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
    ::_guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar2 * 2);
  }
  UE4Paths_Private::ConvertRelativePathToFullInternal(param_1,&local_28,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141669190 ConvertRelativePathToFull body=253 status=ok
// SIG undefined ConvertRelativePathToFull(void)

undefined8 FPaths::ConvertRelativePathToFull(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_10;
  _Src = (void *)*param_2;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 * 2);
  }
  psVar1 = (short *)FUN_1416ac480();
  local_28 = 0;
  local_20 = 0;
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
  UE4Paths_Private::ConvertRelativePathToFullInternal(param_1,&local_28,&local_18);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141669290 ConvertRelativePathToFullInternal body=355 status=ok
// SIG undefined ConvertRelativePathToFullInternal(void)

longlong *
UE4Paths_Private::ConvertRelativePathToFullInternal
          (longlong *param_1,longlong *param_2,longlong *param_3)

{
  wint_t _C;
  wint_t *pwVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar4 = 0;
  uVar3 = (int)param_3[1] - 1;
  if ((int)param_3[1] == 0) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    pwVar1 = (wint_t *)*param_3;
    _C = *pwVar1;
    if (_C == 0x2f) {
LAB_1416692f5:
      if (param_1 != param_3) {
        if (*param_1 != 0) {
          FMemory::Free();
        }
        *param_1 = *param_3;
        *param_3 = 0;
        *(int *)(param_1 + 1) = (int)param_3[1];
        *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
        param_3[1] = 0;
      }
      goto LAB_141669367;
    }
    if (1 < uVar3) {
      if ((_C == 0x5c) && (pwVar1[1] == 0x5c)) goto LAB_1416692f5;
      if (pwVar1[1] == 0x3a) {
        iVar2 = iswalpha(_C);
        if (iVar2 != 0) goto LAB_1416692f5;
      }
    }
  }
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  iVar2 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar2 = 0;
  }
  FString::PathAppend(param_1,*param_3,iVar2);
LAB_141669367:
  FString::ReplaceInline(param_1,&DAT_144ccaf54,&DAT_144ccae2c,0);
  FPaths::CollapseRelativeDirectories(param_1);
  iVar2 = (int)param_1[1] + -1;
  if ((int)param_1[1] == 0) {
    iVar2 = iVar4;
  }
  if ((iVar2 == 0) && ((undefined4 *)*param_1 != &DAT_144cca194)) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,2);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 + 2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    *(undefined4 *)*param_1 = 0x2f;
  }
  return param_1;
}



// FUNCTION 141669400 FUN_141669400 body=576 status=ok
// SIG undefined FUN_141669400(void)

undefined8 * FUN_141669400(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 *puVar2;
  short *psVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar9;
  longlong lVar10;
  undefined2 *local_48;
  ulonglong local_40;
  undefined2 *local_38;
  int local_30;
  int local_2c;
  longlong local_28 [2];
  ulonglong uVar8;
  
  puVar2 = (undefined8 *)FPaths::SandboxesDir(local_28);
  lVar10 = -1;
  uVar7 = 0xffffffffffffffff;
  do {
    uVar8 = uVar7;
    uVar7 = uVar8 + 1;
  } while (*(short *)(param_3 + uVar7 * 2) != 0);
  if ((*(int *)(puVar2 + 1) != 0) || (iVar6 = 2, (int)uVar8 == -2)) {
    iVar6 = 1;
  }
  local_38 = (undefined2 *)*puVar2;
  *puVar2 = 0;
  local_30 = *(int *)(puVar2 + 1);
  local_2c = *(int *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  if (local_2c < iVar6 + local_30 + (int)uVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
  }
  FString::PathAppend(&local_38,param_3,uVar7 & 0xffffffff);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  FString::ReplaceInline(&local_38,&DAT_144ccaf54,&DAT_144ccae2c,0);
  psVar3 = (short *)FUN_1415b59d0();
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    do {
      lVar10 = lVar10 + 1;
    } while (psVar3[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_40 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,psVar3,(longlong)(int)uVar9 * 2);
  }
  FPaths::CollapseRelativeDirectories(&local_48);
  FString::ReplaceInline(&local_48,&DAT_144ccaf54,&DAT_144ccae2c,0);
  FPaths::ConvertRelativePathToFull(param_1,param_2);
  cVar1 = FString::StartsWith(param_1,&local_48,1);
  if (cVar1 == '\0') {
    puVar4 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar4 = local_48;
    }
    if (*(int *)(param_1 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x4c4,L"%s does not start with %s so this is not a valid sandbox path.",
               puVar5,puVar4);
    puVar4 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar4 = local_48;
    }
    if (*(int *)(param_1 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
    }
    FDebug::AssertFailed
              (&DAT_144cc8d9b,"Unknown",0x4c4,
               L"%s does not start with %s so this is not a valid sandbox path.",puVar5,puVar4);
  }
  puVar4 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  puVar5 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar5 = local_48;
  }
  FString::ReplaceInline(param_1,puVar5,puVar4,1);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141669640 Copy body=154 status=ok
// SIG undefined Copy(void)

undefined4 * Impl::FHeapDataStorage<FFormatSpecifier>::Copy(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  
  puVar12 = *(undefined8 **)(param_1 + 8);
  uVar5 = *puVar12;
  uVar6 = puVar12[1];
  uVar7 = puVar12[2];
  uVar8 = puVar12[3];
  uVar9 = puVar12[4];
  uVar10 = puVar12[5];
  uVar1 = puVar12[6];
  puVar11 = (undefined4 *)FUN_1416738c0();
  uVar2 = puVar11[1];
  uVar3 = puVar11[2];
  uVar4 = puVar11[3];
  *param_2 = *puVar11;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  *(undefined ***)(param_2 + 4) = &PTR__scalar_deleting_destructor__144ccfb40;
  puVar12 = (undefined8 *)operator_new(0x38);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = uVar5;
    puVar12[1] = uVar6;
    puVar12[2] = uVar7;
    puVar12[3] = uVar8;
    puVar12[4] = uVar9;
    puVar12[5] = uVar10;
    puVar12[6] = uVar1;
    *(undefined8 **)(param_2 + 6) = puVar12;
    return param_2;
  }
  *(undefined8 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 1416696e0 FUN_1416696e0 body=40 status=ok
// SIG undefined FUN_1416696e0(void)

undefined8 * FUN_1416696e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_141673740();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144ccfd00;
  return param_2;
}



// FUNCTION 141669710 FUN_141669710 body=40 status=ok
// SIG undefined FUN_141669710(void)

undefined8 * FUN_141669710(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1416737c0();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144ccfc20;
  return param_2;
}



// FUNCTION 141669740 FUN_141669740 body=57 status=ok
// SIG undefined FUN_141669740(void)

undefined8 * FUN_141669740(longlong param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined2 *)(param_1 + 8);
  puVar3 = (undefined8 *)FUN_141673840();
  uVar2 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  param_2[2] = &PTR_FUN_144ccfb60;
  *(undefined2 *)(param_2 + 3) = uVar1;
  return param_2;
}



// FUNCTION 141669780 Copy body=57 status=ok
// SIG undefined Copy(void)

undefined8 * Impl::FInlineDataStorage<FFrameRate>::Copy(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)FUN_141673940();
  uVar2 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  param_2[2] = &PTR_FUN_144ccfb00;
  param_2[3] = uVar1;
  return param_2;
}



// FUNCTION 1416697c0 FUN_1416697c0 body=40 status=ok
// SIG undefined FUN_1416697c0(void)

undefined8 * FUN_1416697c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_141673a40();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144ccfca0;
  return param_2;
}



// FUNCTION 1416697f0 FUN_1416697f0 body=40 status=ok
// SIG undefined FUN_1416697f0(void)

undefined8 * FUN_1416697f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_141673ac0();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144ccfcc0;
  return param_2;
}



// FUNCTION 141669820 FUN_141669820 body=76 status=ok
// SIG undefined FUN_141669820(void)

undefined8 * FUN_141669820(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = (undefined8 *)FUN_141673b40();
  uVar3 = puVar6[1];
  *param_2 = *puVar6;
  param_2[1] = uVar3;
  param_2[2] = &PTR_FUN_144ccfb20;
  param_2[3] = uVar1;
  param_2[4] = uVar2;
  param_2[5] = uVar4;
  param_2[6] = uVar5;
  return param_2;
}



// FUNCTION 141669870 FUN_141669870 body=40 status=ok
// SIG undefined FUN_141669870(void)

undefined8 * FUN_141669870(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_141673bc0();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144ccfc60;
  return param_2;
}



// FUNCTION 1416698a0 FUN_1416698a0 body=40 status=ok
// SIG undefined FUN_1416698a0(void)

undefined8 * FUN_1416698a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_141673c40();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144ccfc80;
  return param_2;
}



// FUNCTION 1416698d0 FUN_1416698d0 body=40 status=ok
// SIG undefined FUN_1416698d0(void)

undefined8 * FUN_1416698d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_141673cc0();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144ccfce0;
  return param_2;
}



// FUNCTION 141669900 FUN_141669900 body=40 status=ok
// SIG undefined FUN_141669900(void)

undefined8 * FUN_141669900(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_141673d40();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144ccfc40;
  return param_2;
}



// FUNCTION 141669930 FUN_141669930 body=40 status=ok
// SIG undefined FUN_141669930(void)

undefined8 * FUN_141669930(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_141673dc0();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144ccfd58;
  return param_2;
}



// FUNCTION 141669960 FUN_141669960 body=76 status=ok
// SIG undefined FUN_141669960(void)

undefined8 * FUN_141669960(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = (undefined8 *)FUN_141673ec0();
  uVar3 = puVar6[1];
  *param_2 = *puVar6;
  param_2[1] = uVar3;
  param_2[2] = &PTR_FUN_144ccfb80;
  param_2[3] = uVar1;
  param_2[4] = uVar2;
  param_2[5] = uVar4;
  param_2[6] = uVar5;
  return param_2;
}



// FUNCTION 1416699b0 FUN_1416699b0 body=40 status=ok
// SIG undefined FUN_1416699b0(void)

undefined8 * FUN_1416699b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_141673f40();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144ccfbe0;
  return param_2;
}



// FUNCTION 1416699e0 FUN_1416699e0 body=40 status=ok
// SIG undefined FUN_1416699e0(void)

undefined8 * FUN_1416699e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_141673fc0();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144ccfbc0;
  return param_2;
}



// FUNCTION 141669a10 FUN_141669a10 body=40 status=ok
// SIG undefined FUN_141669a10(void)

undefined8 * FUN_141669a10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_141674040();
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144ccfc00;
  return param_2;
}



// FUNCTION 141669a40 Copy body=76 status=ok
// SIG undefined Copy(void)

undefined8
Impl::FInlineDataStorage<TextFilterExpressionParser::FTextToken>::Copy
          (longlong param_1,undefined8 param_2)

{
  undefined1 local_28 [16];
  undefined1 local_18;
  undefined1 local_17;
  
  FUN_141689080(local_28,param_1 + 8);
  local_18 = *(undefined1 *)(param_1 + 0x18);
  local_17 = *(undefined1 *)(param_1 + 0x19);
  FUN_14165da90(param_2,local_28,0);
  return param_2;
}



// FUNCTION 141669a90 Copy body=56 status=ok
// SIG undefined Copy(void)

undefined8 * Impl::FInlineDataStorage<bool>::Copy(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  puVar3 = (undefined8 *)FUN_141674140();
  uVar2 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  param_2[2] = &PTR_FUN_144ccfd38;
  *(undefined1 *)(param_2 + 3) = uVar1;
  return param_2;
}



// FUNCTION 141669ad0 CreateTempFilename body=375 status=ok
// SIG undefined CreateTempFilename(void)

longlong *
FPaths::CreateTempFilename
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  longlong local_58;
  undefined8 local_50;
  GUID local_48;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  undefined2 *local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  local_18 = param_2;
  do {
    local_48.Data1 = 0;
    local_48.Data2 = 0;
    local_48.Data3 = 0;
    local_48.Data4[0] = '\0';
    local_48.Data4[1] = '\0';
    local_48.Data4[2] = '\0';
    local_48.Data4[3] = '\0';
    local_48.Data4[4] = '\0';
    local_48.Data4[5] = '\0';
    local_48.Data4[6] = '\0';
    local_48.Data4[7] = '\0';
    FWindowsPlatformMisc::CreateGuid(&local_48);
    uVar4 = local_48.Data4._4_4_;
    FString::PrintfImpl(&local_28,L"%08X%08X%08X%08X",local_48._0_8_ & 0xffffffff,local_48._4_4_,
                        (ulonglong)local_48.Data4 & 0xffffffff,local_48.Data4._4_4_);
    puVar3 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar3 = local_28;
    }
    FString::PrintfImpl(&local_38,L"%s%s%s",param_3,puVar3,param_4,uVar4);
    local_58 = 0;
    local_10 = &DAT_143f3eda8;
    if (local_30 != 0) {
      local_10 = local_38;
    }
    local_50 = 0;
    CombineInternal(&local_58,&local_18,2);
    if (param_1 == &local_58) {
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = local_58;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
      local_50 = 0;
      local_58 = 0;
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    plVar1 = (longlong *)FUN_1415c3d50();
    if ((int)param_1[1] == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*param_1;
    }
    lVar2 = (**(code **)(*plVar1 + 0xe8))(plVar1,puVar3);
  } while (-1 < lVar2);
  return param_1;
}



// FUNCTION 141669c50 FUN_141669c50 body=598 status=ok
// SIG undefined FUN_141669c50(void)

longlong FUN_141669c50(longlong param_1,longlong *param_2)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  void *_Dst;
  int iVar7;
  void *_Src;
  int iVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 local_28 [16];
  
  iVar5 = (int)param_2[1];
  uVar9 = 1;
  iVar7 = iVar5 + -1;
  iVar4 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar7 = -1;
    iVar4 = -1;
  }
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  iVar8 = 0;
  if ((iVar4 < 1) || (psVar2 = (short *)*param_2, *psVar2 != 0x2b)) {
    if (iVar5 == 0) {
      iVar7 = iVar8;
    }
    if ((iVar7 < 3) || (cVar3 = FString::StartsWith(param_2,&DAT_144cca610,0), cVar3 == '\0')) {
      iVar5 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar5 = iVar8;
      }
      if ((iVar5 < 3) || (cVar3 = FString::EndsWith(param_2,&DAT_144cca618,0), cVar3 == '\0'))
      goto LAB_141669d69;
      iVar5 = (int)param_2[1];
      uVar9 = 2;
      iVar4 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar4 = iVar8;
      }
      iVar7 = (iVar5 - (iVar4 + -3)) + -3;
      if (iVar7 != 0) {
        _Src = (void *)(*param_2 + (longlong)iVar4 * 2);
        _Dst = (void *)(*param_2 + (longlong)(iVar4 + -3) * 2);
        goto LAB_141669d58;
      }
    }
    else {
      iVar5 = (int)param_2[1];
      uVar9 = 3;
      iVar7 = iVar5 + -3;
      if (iVar7 != 0) {
        _Dst = (void *)*param_2;
        _Src = (void *)((longlong)_Dst + 6);
LAB_141669d58:
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar7 * 2);
        iVar5 = (int)param_2[1];
      }
    }
    iVar5 = iVar5 + -3;
  }
  else {
    uVar9 = 0;
    if (iVar7 != 0) {
      _guard_xfg_dispatch_icall_nop(psVar2,psVar2 + 1,(longlong)iVar7 * 2);
      iVar5 = (int)param_2[1];
    }
    iVar5 = iVar5 + -1;
  }
  *(int *)(param_2 + 1) = iVar5;
LAB_141669d69:
  iVar4 = (int)param_2[1];
  uVar10 = 0;
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = -1;
  }
  iVar7 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar7 = -1;
    iVar5 = 0;
  }
  if ((0 < iVar5) && (psVar2 = (short *)*param_2, *psVar2 == 0x2d)) {
    uVar10 = 1;
    if (iVar7 != 0) {
      _guard_xfg_dispatch_icall_nop(psVar2,psVar2 + 1,(longlong)iVar7 * 2);
      iVar4 = (int)param_2[1];
    }
    iVar4 = iVar4 + -1;
    *(int *)(param_2 + 1) = iVar4;
  }
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  if (1 < iVar5) {
    psVar2 = (short *)*param_2;
    sVar1 = *psVar2;
    if ((sVar1 == 0x22) || (sVar1 == 0x27)) {
      iVar5 = iVar4 + -2;
      if (iVar4 == 0) {
        iVar5 = -1;
      }
      if (psVar2[iVar5] == sVar1) {
        if (iVar4 + -1 != 0) {
          _guard_xfg_dispatch_icall_nop(psVar2,psVar2 + 1,(longlong)(iVar4 + -1) * 2);
          iVar4 = (int)param_2[1];
        }
        iVar5 = iVar4 + -1;
        *(int *)(param_2 + 1) = iVar5;
        iVar4 = iVar4 + -2;
        if (iVar5 == 0) {
          iVar5 = 0;
          iVar4 = 0;
        }
        iVar7 = (iVar5 - (iVar4 + -1)) + -1;
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 + (longlong)(iVar4 + -1) * 2),
                     (void *)(*param_2 + (longlong)iVar4 * 2),(longlong)iVar7 * 2);
          iVar5 = (int)param_2[1];
        }
        *(int *)(param_2 + 1) = iVar5 + -1;
      }
    }
  }
  plVar6 = (longlong *)FTextFilterString::FTextFilterString(local_28,param_2);
  FString::FString(param_1,plVar6);
  *(undefined1 *)(param_1 + 0x10) = uVar9;
  *(undefined1 *)(param_1 + 0x11) = uVar10;
  if (*plVar6 != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141669eb0 Current body=8 status=ok
// SIG undefined Current(void)

undefined2 * FEngineVersion::Current(void)

{
  return &DAT_1468e2900;
}



// FUNCTION 141669ec0 FUN_141669ec0 body=903 status=ok
// SIG undefined FUN_141669ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141669ec0(void)

{
  wint_t _C;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  short *psVar5;
  uint uVar6;
  longlong lVar7;
  wint_t *pwVar8;
  uint uVar9;
  wint_t *pwVar10;
  wint_t *pwVar11;
  bool bVar12;
  wint_t *local_48;
  undefined8 local_40;
  wint_t *local_38;
  undefined8 local_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468e3250) && (_Init_thread_header(&DAT_1468e3250), DAT_1468e3250 == -1))
  {
    atexit((_func_5014 *)&LAB_143e7aa70);
    _Init_thread_footer(&DAT_1468e3250);
  }
  pwVar8 = DAT_1468e3240;
  iVar3 = DAT_1468e3248;
  iVar2 = _DAT_1468e324c;
  if (DAT_1468e3239 != '\0') goto LAB_14166a136;
  uVar4 = FCommandLine::Get();
  FParse::Value(uVar4,L"UserDir=",&DAT_1468e3240,1);
  DAT_1468e3239 = '\x01';
  pwVar8 = DAT_1468e3240;
  iVar3 = DAT_1468e3248;
  iVar2 = _DAT_1468e324c;
  if (DAT_1468e3248 < 2) goto LAB_14166a136;
  if (DAT_1468e3248 == 0) {
LAB_141669fb3:
    pwVar8 = &DAT_143f3eda8;
  }
  else {
    if ((DAT_1468e3248 != 1) &&
       ((_C = *DAT_1468e3240, _C == 0x2f ||
        ((1 < DAT_1468e3248 - 1U &&
         (((_C == 0x5c && (DAT_1468e3240[1] == 0x5c)) ||
          ((DAT_1468e3240[1] == 0x3a && (iVar3 = iswalpha(_C), iVar3 != 0)))))))))) {
      FPaths::NormalizeDirectoryName(&DAT_1468e3240);
      pwVar11 = DAT_1468e3240;
      lVar7 = (longlong)DAT_1468e3248;
      local_40._0_4_ = DAT_1468e3248;
      local_48 = (wint_t *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_48,(2 - (uint)(DAT_1468e3248 != 0)) + DAT_1468e3248,0);
      pwVar8 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,pwVar11,lVar7 * 2);
      iVar1 = (uint)local_40;
      lVar7 = (longlong)(int)(uint)local_40;
      local_40._0_4_ = (2 - (uint)((uint)local_40 != 0)) + (uint)local_40;
      if (local_40._4_4_ < (int)(uint)local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
        pwVar8 = local_48;
      }
      iVar2 = local_40._4_4_;
      iVar3 = (uint)local_40;
      pwVar8[lVar7 - (ulonglong)(iVar1 != 0)] = 0x2f;
      (pwVar8 + (lVar7 - (ulonglong)(iVar1 != 0)))[1] = 0;
      if (DAT_1468e3240 != (wint_t *)0x0) {
        FMemory::Free();
      }
      goto LAB_14166a136;
    }
    pwVar8 = DAT_1468e3240;
    if (DAT_1468e3248 == 0) goto LAB_141669fb3;
  }
  psVar5 = (short *)FUN_1415b0fe0();
  local_48 = (wint_t *)0x0;
  pwVar10 = &DAT_143f3eda8;
  pwVar11 = (wint_t *)0x0;
  if ((psVar5 != (short *)0x0) && (pwVar11 = (wint_t *)0x0, *psVar5 != 0)) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (psVar5[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_40 = (wint_t *)(ulonglong)uVar6;
    uVar9 = uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar9 = (uint)local_40;
    }
    pwVar11 = local_48;
    FGenericPlatformString::Memcpy(local_48,psVar5,(longlong)(int)uVar6 * 2);
    if (uVar9 != 0) {
      pwVar10 = pwVar11;
    }
  }
  local_38 = (wint_t *)0x0;
  local_30 = 0;
  local_48 = pwVar10;
  local_40 = pwVar8;
  FPaths::CombineInternal(&local_38,&local_48,2);
  iVar3 = (int)local_30;
  iVar2 = local_30._4_4_;
  bVar12 = (int)local_30 != 0;
  local_48 = local_38;
  local_38 = (wint_t *)0x0;
  local_40._0_4_ = (int)local_30;
  local_40._4_4_ = local_30._4_4_;
  local_30 = 0;
  if (iVar2 < (int)((2 - (uint)bVar12) + iVar3)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    iVar3 = (uint)local_40;
  }
  local_40._0_4_ = (2 - (uint)(iVar3 != 0)) + iVar3;
  if (local_40._4_4_ < (int)(uint)local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  iVar1 = local_40._4_4_;
  iVar2 = (uint)local_40;
  pwVar8 = local_48;
  local_48[(longlong)iVar3 - (ulonglong)(iVar3 != 0)] = 0x2f;
  (local_48 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)))[1] = 0;
  if (DAT_1468e3240 != (wint_t *)0x0) {
    FMemory::Free();
  }
  DAT_1468e3240 = pwVar8;
  DAT_1468e3248 = iVar2;
  _DAT_1468e324c = iVar1;
  if (local_38 != (wint_t *)0x0) {
    FMemory::Free();
  }
  pwVar8 = DAT_1468e3240;
  iVar3 = DAT_1468e3248;
  iVar2 = _DAT_1468e324c;
  if (pwVar11 != (wint_t *)0x0) {
    FMemory::Free(pwVar11);
    pwVar8 = DAT_1468e3240;
    iVar3 = DAT_1468e3248;
    iVar2 = _DAT_1468e324c;
  }
LAB_14166a136:
  _DAT_1468e324c = iVar2;
  DAT_1468e3248 = iVar3;
  DAT_1468e3240 = pwVar8;
  return &DAT_1468e3240;
}



// FUNCTION 14166a250 DefineToken body=81 status=ok
// SIG undefined DefineToken(void)

void FTokenDefinitions::DefineToken(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 8),iVar1);
  }
  ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 14166a2b0 FUN_14166a2b0 body=464 status=ok
// SIG undefined FUN_14166a2b0(void)

void FUN_14166a2b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  LARGE_INTEGER local_res8;
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    if (*(char *)(param_1 + 0x51) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x58))();
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x60);
    iVar9 = (int)plVar2[1];
    plVar3 = (longlong *)*plVar2;
    if (plVar3[(longlong)iVar9 + -1] == param_1) {
LAB_14166a34e:
      *(int *)(plVar2 + 1) = iVar9 + -1;
    }
    else {
      for (plVar8 = plVar3; plVar8 != plVar3 + iVar9; plVar8 = plVar8 + 1) {
        if (*plVar8 == param_1) {
          iVar7 = (int)((longlong)plVar8 - (longlong)plVar3 >> 3);
          if (iVar7 != -1) {
            iVar5 = (iVar9 - iVar7) + -1;
            if (0 < iVar5) {
              iVar5 = 1;
            }
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (plVar3 + iVar7,plVar3 + (iVar9 - iVar5),(longlong)iVar5 << 3);
              iVar9 = (int)plVar2[1];
            }
            goto LAB_14166a34e;
          }
          break;
        }
      }
    }
    if ((int)plVar2[1] != 0) {
      lVar4 = *(longlong *)(*plVar2 + -8 + (longlong)(int)plVar2[1] * 8);
      lVar6 = FText::FText(local_28,lVar4 + 0x18);
      FText::operator=(lVar4 + 0x18,lVar6);
      fVar11 = *(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0x34);
      fVar12 = *(float *)(lVar4 + 0x30) - fVar11;
      *(float *)(lVar4 + 0x34) = fVar11;
      if (0.0 <= fVar12) {
        fVar12 = 0.0;
      }
      *(float *)(lVar4 + 0x38) = fVar12;
      if (((*(char *)(lVar4 + 0x51) == '\0') && (*(char *)(lVar4 + 0x4c) != '\0')) &&
         (QueryPerformanceCounter(&local_res8),
         fVar12 = (float)(((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
                         *(double *)(lVar4 + 0x40)),
         *(float *)(lVar4 + 0x48) <= fVar12 && fVar12 != *(float *)(lVar4 + 0x48))) {
        FUN_141676ad0(lVar4,*(byte *)(lVar4 + 0x60) & 1,*(byte *)(lVar4 + 0x60) >> 1 & 1);
      }
      if (*(char *)(lVar4 + 0x50) != '\0') {
        if ((*(char *)(lVar4 + 0x51) == '\0') &&
           (*(longlong *)**(undefined8 **)(*(longlong *)(lVar4 + 0x58) + 0x60) != lVar4)) {
          uVar10 = 0;
        }
        else {
          uVar10 = 1;
        }
        FUN_14167e960(*(longlong *)(lVar4 + 0x58),uVar10);
      }
      plVar2 = *(longlong **)(lVar6 + 8);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar2 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14166a480 DirectoryExists body=57 status=ok
// SIG undefined DirectoryExists(void)

void FPaths::DirectoryExists(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1415c3d50();
  if (*(int *)(param_1 + 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014166a4a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,*param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014166a4b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1,&DAT_143f3eda8);
  return;
}



// FUNCTION 14166a4d0 DoWork body=187 status=ok
// SIG undefined DoWork(void)

void FAsyncTask<FRemoteConfigAsyncWorker>::DoWork(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  if (*(char *)(param_1 + 0x1048) != '\0') {
    plVar4 = (longlong *)FUN_1415c3d50();
    puVar1 = (undefined8 *)(**(code **)(*plVar4 + 0xb0))(plVar4,local_res8,param_1 + 8);
    *(undefined8 *)(param_1 + 0x818) = *puVar1;
    cVar3 = FUN_141676530(param_1 + 0x808,param_1 + 8,0);
    *(bool *)(param_1 + 0x830) = cVar3 == '\0';
    LOCK();
    *(int *)(param_1 + 0x1050) = *(int *)(param_1 + 0x1050) + -1;
    UNLOCK();
    return;
  }
  if (1 < *(int *)(param_1 + 0x1040)) {
    uVar2 = FUN_1415c3d50();
    FUN_14167efa0(param_1 + 0x1038,param_1 + 8,0,uVar2,0);
    LOCK();
    *(int *)(param_1 + 0x1050) = *(int *)(param_1 + 0x1050) + -1;
    UNLOCK();
    return;
  }
  LOCK();
  *(int *)(param_1 + 0x1050) = *(int *)(param_1 + 0x1050) + -1;
  UNLOCK();
  return;
}



// FUNCTION 14166a590 FUN_14166a590 body=213 status=ok
// SIG undefined FUN_14166a590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14166a590(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined1 local_68 [64];
  undefined1 *local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (((int)param_1[6] != 0) && (0 < (int)param_1[6] + -1)) {
    cVar1 = FSHA1::GetFileSHAHash(param_1[5],(longlong)param_1 + 0x14,1);
    if (cVar1 == '\0') goto LAB_14166a62a;
  }
  local_28 = local_68;
  local_d4 = 0;
  local_e8 = 0x67452301;
  local_e4 = 0xefcdab89;
  local_e0 = 0x98badcfe;
  local_dc = 0x10325476;
  local_d8 = 0xc3d2e1f0;
  FSHA1::Update(&local_e8,param_1[1],(int)param_1[2]);
  FSHA1::Final(&local_e8);
LAB_14166a62a:
  if (*(char *)((longlong)param_1 + 0x39) != '\0') {
    FMemory::Free(param_1[1]);
  }
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1,1);
  }
  return;
}



// FUNCTION 14166a670 Empty body=450 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,FRemoteConfigAsyncIOInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_14166a741;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_14166a741:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      plVar6 = (longlong *)((longlong)iStack_2c * 0x848 + *param_1);
      if (plVar6[2] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<2120,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14166a840 Empty body=446 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,TBaseDelegate<AOnlineBeaconClient_*,UNetConnection_*>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
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
  
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar3 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar5 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar4) goto LAB_14166a911;
      uVar5 = puVar8[lVar6 + 1];
    }
    uStack_64 = -uVar5 & uVar5;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar3 < iStack_54) {
LAB_14166a911:
      iStack_54 = iVar3;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar3) {
    do {
      plVar2 = (longlong *)(*param_1 + (longlong)iStack_2c * 0x28);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar2 + 2);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14166aa00 Empty body=63 status=ok
// SIG undefined Empty(void)

void FEngineVersion::Empty(undefined4 *param_1)

{
  undefined4 local_18 [6];
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  if (param_1 + 4 == local_18) {
    return;
  }
  param_1[6] = 0;
  if (param_1[7] == 0) {
    param_1[7] = 0;
    return;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy();
  return;
}



// FUNCTION 14166aa40 EnableBacklog body=152 status=ok
// SIG undefined EnableBacklog(void)

void FOutputDeviceRedirector::EnableBacklog(longlong param_1,char param_2)

{
  BOOL BVar1;
  int iVar2;
  longlong *plVar3;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  *(char *)(param_1 + 0x44) = param_2;
  if (param_2 == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x20);
    for (iVar2 = *(int *)(param_1 + 0x28); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 5;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x20,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014166aad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return;
}



// FUNCTION 14166aae0 FUN_14166aae0 body=215 status=ok
// SIG undefined FUN_14166aae0(void)

void FUN_14166aae0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  FUN_14166a2b0(*(undefined8 *)
                 (*(longlong *)(param_1 + 0x70) + -8 + (longlong)*(int *)(param_1 + 0x78) * 8));
  uVar2 = *(undefined8 *)
           (*(longlong *)(param_1 + 0x70) + -8 + (longlong)*(int *)(param_1 + 0x78) * 8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x70) + -8 + (longlong)*(int *)(param_1 + 0x78) * 8) = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8 + -8);
  TDefaultDelete<FSlowTask>::operator()(puVar6,*puVar6);
  iVar4 = *(int *)(param_1 + 0x78);
  iVar5 = (iVar4 - (iVar1 + -1)) + -1;
  if (iVar5 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x70) + (longlong)(iVar1 + -1) * 8),
               (void *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8),(longlong)iVar5 << 3);
    iVar4 = *(int *)(param_1 + 0x78);
  }
  *(int *)(param_1 + 0x78) = iVar4 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x70);
  TDefaultDelete<FSlowTask>::operator()(local_res8,uVar2);
  return;
}



// FUNCTION 14166abc0 EngineConfigDir body=346 status=ok
// SIG undefined EngineConfigDir(void)

ulonglong * FPaths::EngineConfigDir(ulonglong *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong local_28;
  uint local_20;
  int local_1c;
  
  psVar2 = (short *)FUN_1415a65c0();
  local_28 = 0;
  iVar7 = 0;
  local_1c = 0;
  uVar6 = 0;
  uVar8 = 0;
  iVar5 = 0;
  if ((psVar2 != (short *)0x0) && (uVar6 = 0, uVar8 = 0, iVar5 = 0, *psVar2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar5 = local_1c;
    uVar1 = local_20;
    uVar8 = local_28;
    uVar6 = (ulonglong)local_20;
    FGenericPlatformString::Memcpy(local_28,psVar2,(longlong)(int)uVar3 * 2);
    if (uVar1 != 0) goto LAB_14166ac60;
  }
  iVar7 = 1;
LAB_14166ac60:
  local_20 = (uint)uVar6;
  local_28 = uVar8;
  local_1c = iVar5;
  if (iVar5 < (int)(local_20 + 7 + iVar7)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    uVar6 = (ulonglong)local_20;
  }
  iVar5 = (int)uVar6;
  local_20 = (8 - (uint)(iVar5 != 0)) + iVar5;
  if (local_1c < (int)local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,uVar6);
  }
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar4 * 2),L"Conf",4);
  lVar4 = local_28 + lVar4 * 2;
  *(undefined4 *)(lVar4 + 8) = 0x670069;
  *(undefined2 *)(lVar4 + 0xc) = 0x2f;
  *(undefined2 *)(lVar4 + 0xe) = 0;
  *param_1 = local_28;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  *(uint *)(param_1 + 1) = local_20;
  return param_1;
}



// FUNCTION 14166ad20 EngineContentDir body=321 status=ok
// SIG undefined EngineContentDir(void)

ulonglong * FPaths::EngineContentDir(ulonglong *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong local_28;
  uint local_20;
  int local_1c;
  
  psVar2 = (short *)FUN_1415a65c0();
  local_28 = 0;
  iVar7 = 0;
  local_1c = 0;
  uVar6 = 0;
  uVar8 = 0;
  iVar5 = 0;
  if ((psVar2 != (short *)0x0) && (uVar6 = 0, uVar8 = 0, iVar5 = 0, *psVar2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar5 = local_1c;
    uVar1 = local_20;
    uVar8 = local_28;
    uVar6 = (ulonglong)local_20;
    FGenericPlatformString::Memcpy(local_28,psVar2,(longlong)(int)uVar3 * 2);
    if (uVar1 != 0) goto LAB_14166adc0;
  }
  iVar7 = 1;
LAB_14166adc0:
  local_20 = (uint)uVar6;
  local_28 = uVar8;
  local_1c = iVar5;
  if (iVar5 < (int)(local_20 + 8 + iVar7)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    uVar6 = (ulonglong)local_20;
  }
  iVar5 = (int)uVar6;
  local_20 = (9 - (uint)(iVar5 != 0)) + iVar5;
  if (local_1c < (int)local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,uVar6);
  }
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar4 * 2),L"Content/",8);
  *(undefined2 *)(local_28 + 0x10 + lVar4 * 2) = 0;
  *param_1 = local_28;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  *(uint *)(param_1 + 1) = local_20;
  return param_1;
}



// FUNCTION 14166ae70 EngineDir body=116 status=ok
// SIG undefined EngineDir(void)

undefined8 * FPaths::EngineDir(undefined8 *param_1)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  
  psVar1 = (short *)FUN_1415a65c0();
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



// FUNCTION 14166aef0 EngineIntermediateDir body=348 status=ok
// SIG undefined EngineIntermediateDir(void)

ulonglong * FPaths::EngineIntermediateDir(ulonglong *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong local_28;
  uint local_20;
  int local_1c;
  
  psVar2 = (short *)FUN_1415a65c0();
  local_28 = 0;
  iVar7 = 0;
  local_1c = 0;
  uVar6 = 0;
  uVar8 = 0;
  iVar5 = 0;
  if ((psVar2 != (short *)0x0) && (uVar6 = 0, uVar8 = 0, iVar5 = 0, *psVar2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar5 = local_1c;
    uVar1 = local_20;
    uVar8 = local_28;
    uVar6 = (ulonglong)local_20;
    FGenericPlatformString::Memcpy(local_28,psVar2,(longlong)(int)uVar3 * 2);
    if (uVar1 != 0) goto LAB_14166af90;
  }
  iVar7 = 1;
LAB_14166af90:
  local_20 = (uint)uVar6;
  local_28 = uVar8;
  local_1c = iVar5;
  if (iVar5 < (int)(local_20 + 0xd + iVar7)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    uVar6 = (ulonglong)local_20;
  }
  iVar5 = (int)uVar6;
  local_20 = (0xe - (uint)(iVar5 != 0)) + iVar5;
  if (local_1c < (int)local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,uVar6);
  }
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar4 * 2),L"Intermed",8);
  lVar4 = local_28 + lVar4 * 2;
  builtin_wcsncpy((wchar_t *)(lVar4 + 0x10),L"iate",4);
  *(undefined2 *)(lVar4 + 0x18) = 0x2f;
  *(undefined2 *)(lVar4 + 0x1a) = 0;
  *param_1 = local_28;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  *(uint *)(param_1 + 1) = local_20;
  return param_1;
}



// FUNCTION 14166b050 EngineContentDir body=321 status=ok
// SIG undefined EngineContentDir(void)

ulonglong * FPaths::EngineContentDir(ulonglong *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong local_28;
  uint local_20;
  int local_1c;
  
  psVar2 = (short *)FUN_1415a65c0();
  local_28 = 0;
  iVar7 = 0;
  local_1c = 0;
  uVar6 = 0;
  uVar8 = 0;
  iVar5 = 0;
  if ((psVar2 != (short *)0x0) && (uVar6 = 0, uVar8 = 0, iVar5 = 0, *psVar2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar5 = local_1c;
    uVar1 = local_20;
    uVar8 = local_28;
    uVar6 = (ulonglong)local_20;
    FGenericPlatformString::Memcpy(local_28,psVar2,(longlong)(int)uVar3 * 2);
    if (uVar1 != 0) goto LAB_14166b0f0;
  }
  iVar7 = 1;
LAB_14166b0f0:
  local_20 = (uint)uVar6;
  local_28 = uVar8;
  local_1c = iVar5;
  if (iVar5 < (int)(local_20 + 8 + iVar7)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    uVar6 = (ulonglong)local_20;
  }
  iVar5 = (int)uVar6;
  local_20 = (9 - (uint)(iVar5 != 0)) + iVar5;
  if (local_1c < (int)local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,uVar6);
  }
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar4 * 2),L"Plugins/",8);
  *(undefined2 *)(local_28 + 0x10 + lVar4 * 2) = 0;
  *param_1 = local_28;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  *(uint *)(param_1 + 1) = local_20;
  return param_1;
}



// FUNCTION 14166b1a0 EngineUserDir body=584 status=ok
// SIG undefined EngineUserDir(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FPaths::EngineUserDir(longlong *param_1)

{
  void *_Src;
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  int local_4c;
  longlong local_48 [2];
  void *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  cVar1 = FUN_141681ae0();
  if ((cVar1 == '\0') && (cVar1 = FApp::IsEngineInstalled(), cVar1 == '\0')) {
    EngineDir(param_1);
  }
  else {
    FString::PrintfImpl(&local_58,&DAT_144ccb074,DAT_1468e2900);
    FString::PrintfImpl(&local_38,&DAT_144ccb818,DAT_1468e2902);
    _Src = local_38;
    iVar5 = local_50;
    iVar4 = 0;
    if ((int)local_30 != 0) {
      iVar4 = (int)local_30 + -1;
    }
    if (iVar4 != 0) {
      lVar7 = (longlong)local_50;
      local_50 = (uint)(local_50 == 0) + local_50 + iVar4;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar5);
      }
      puVar6 = local_58 + (lVar7 - (ulonglong)(iVar5 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar6,_Src,(longlong)iVar4 * 2);
      puVar6[iVar4] = 0;
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    puVar6 = &DAT_143f3eda8;
    puVar8 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar8 = local_58;
    }
    puVar2 = (undefined8 *)FApp::GetEpicProductIdentifier(local_48);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar6 = (undefined2 *)*puVar2;
    }
    local_38 = (void *)FUN_1416b20b0();
    local_68 = (void *)0x0;
    local_60 = 0;
    local_30 = puVar6;
    local_28 = puVar8;
    CombineInternal(&local_68,&local_38,3);
    iVar5 = (int)local_60;
    iVar4 = local_60._4_4_;
    local_38 = local_68;
    local_68 = (void *)0x0;
    local_30._0_4_ = (int)local_60;
    local_30._4_4_ = local_60._4_4_;
    iVar3 = (2 - (uint)((int)local_60 != 0)) + (int)local_60;
    local_60 = 0;
    if (iVar4 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
      iVar5 = (int)local_30;
    }
    local_30._0_4_ = (2 - (uint)(iVar5 != 0)) + iVar5;
    if (local_30._4_4_ < (int)local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar5);
    }
    puVar6 = (undefined2 *)((longlong)local_38 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
    *puVar6 = 0x2f;
    puVar6[1] = 0;
    *param_1 = (longlong)local_38;
    *(int *)(param_1 + 1) = (int)local_30;
    *(int *)((longlong)param_1 + 0xc) = local_30._4_4_;
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 14166b3f0 EngineVersionAgnosticUserDir body=371 status=ok
// SIG undefined EngineVersionAgnosticUserDir(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FPaths::EngineVersionAgnosticUserDir(longlong *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  longlong local_28;
  undefined8 local_20;
  wchar_t *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  cVar2 = FUN_141681ae0();
  if ((cVar2 == '\0') && (cVar2 = FApp::IsEngineInstalled(), cVar2 == '\0')) {
    EngineDir(param_1);
    return param_1;
  }
  puVar3 = (undefined8 *)FApp::GetEpicProductIdentifier(local_38);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar3;
  }
  local_28 = FUN_1416b20b0();
  local_18 = L"Common";
  local_48 = 0;
  local_40 = 0;
  local_20 = puVar5;
  CombineInternal(&local_48,&local_28,3);
  iVar4 = (int)local_40;
  iVar1 = local_40._4_4_;
  bVar6 = (int)local_40 != 0;
  local_28 = local_48;
  local_48 = 0;
  local_20._0_4_ = (int)local_40;
  local_20._4_4_ = local_40._4_4_;
  local_40 = 0;
  if (iVar1 < (int)((2 - (uint)bVar6) + iVar4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar4 = (int)local_20;
  }
  local_20._0_4_ = (2 - (uint)(iVar4 != 0)) + iVar4;
  if (local_20._4_4_ < (int)local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar4);
  }
  puVar5 = (undefined2 *)(local_28 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
  *puVar5 = 0x2f;
  puVar5[1] = 0;
  *param_1 = local_28;
  *(int *)(param_1 + 1) = (int)local_20;
  *(int *)((longlong)param_1 + 0xc) = local_20._4_4_;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14166b570 EnterProgressFrame body=272 status=ok
// SIG undefined EnterProgressFrame(void)

void FSlowTask::EnterProgressFrame(longlong param_1,float param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  LARGE_INTEGER local_res8;
  
  FText::operator=(param_1 + 0x18,param_3);
  fVar8 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38);
  fVar7 = *(float *)(param_1 + 0x30) - fVar8;
  *(float *)(param_1 + 0x34) = fVar8;
  if (param_2 <= fVar7) {
    fVar7 = param_2;
  }
  *(float *)(param_1 + 0x38) = fVar7;
  if ((*(char *)(param_1 + 0x51) == '\0') && (*(char *)(param_1 + 0x4c) != '\0')) {
    QueryPerformanceCounter(&local_res8);
    fVar7 = (float)(((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
                   *(double *)(param_1 + 0x40));
    if (*(float *)(param_1 + 0x48) <= fVar7 && fVar7 != *(float *)(param_1 + 0x48)) {
      FUN_141676ad0(param_1,*(byte *)(param_1 + 0x60) & 1,*(byte *)(param_1 + 0x60) >> 1 & 1);
    }
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    if ((*(char *)(param_1 + 0x51) == '\0') &&
       (*(longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x58) + 0x60) != param_1)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    FUN_14167e960(*(longlong *)(param_1 + 0x58),uVar6);
  }
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



// FUNCTION 14166b680 EnterpriseDir body=344 status=ok
// SIG undefined EnterpriseDir(void)

ulonglong * FPaths::EnterpriseDir(ulonglong *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong local_28;
  uint local_20;
  int local_1c;
  
  psVar2 = (short *)FUN_1415b59d0();
  local_28 = 0;
  iVar7 = 0;
  local_1c = 0;
  uVar6 = 0;
  uVar8 = 0;
  iVar5 = 0;
  if ((psVar2 != (short *)0x0) && (uVar6 = 0, uVar8 = 0, iVar5 = 0, *psVar2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar5 = local_1c;
    uVar1 = local_20;
    uVar8 = local_28;
    uVar6 = (ulonglong)local_20;
    FGenericPlatformString::Memcpy(local_28,psVar2,(longlong)(int)uVar3 * 2);
    if (uVar1 != 0) goto LAB_14166b720;
  }
  iVar7 = 1;
LAB_14166b720:
  local_20 = (uint)uVar6;
  local_28 = uVar8;
  local_1c = iVar5;
  if (iVar5 < (int)(local_20 + 0xb + iVar7)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    uVar6 = (ulonglong)local_20;
  }
  iVar5 = (int)uVar6;
  local_20 = (0xc - (uint)(iVar5 != 0)) + iVar5;
  if (local_1c < (int)local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,uVar6);
  }
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar4 * 2),L"Enterpri",8);
  lVar4 = local_28 + lVar4 * 2;
  *(undefined4 *)(lVar4 + 0x10) = 0x650073;
  *(undefined2 *)(lVar4 + 0x14) = 0x2f;
  *(undefined2 *)(lVar4 + 0x16) = 0;
  *param_1 = local_28;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  *(uint *)(param_1 + 1) = local_20;
  return param_1;
}



// FUNCTION 14166b7e0 EnterprisePluginsDir body=224 status=ok
// SIG undefined EnterprisePluginsDir(void)

longlong * FPaths::EnterprisePluginsDir(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)EnterpriseDir(local_18);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((9 - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (9 - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar2 * 2),L"Plugins/",8);
  *(undefined2 *)(local_28 + 0x10 + lVar2 * 2) = 0;
  *param_1 = local_28;
  *(int *)(param_1 + 1) = local_20;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14166b8c0 FUN_14166b8c0 body=3650 status=ok
// SIG undefined FUN_14166b8c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14166b8c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  wchar_t *_Source;
  wchar_t *pwVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_568 [32];
  longlong local_548;
  int *local_538;
  uint local_530;
  int local_52c;
  ulonglong local_528;
  undefined8 local_520;
  int local_518;
  longlong local_510;
  undefined8 local_508;
  longlong local_500;
  longlong *local_4f8;
  longlong local_4f0;
  undefined8 local_4e8;
  wchar_t *local_4e0;
  int local_4d8;
  undefined4 local_4d4;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0 [6];
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480 [6];
  longlong local_450 [2];
  undefined1 local_440 [8];
  longlong *local_438;
  undefined1 local_428 [8];
  longlong *local_420;
  undefined1 local_410 [8];
  longlong *local_408;
  undefined1 local_3f8 [8];
  longlong *local_3f0;
  undefined1 local_3e0 [8];
  longlong *local_3d8;
  undefined1 local_3c8 [8];
  longlong *local_3c0;
  undefined1 local_3b0 [8];
  longlong *local_3a8;
  undefined1 local_398 [8];
  longlong *local_390;
  undefined1 local_380 [8];
  longlong *local_378;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined4 local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined1 local_338 [8];
  longlong *local_330;
  char local_320;
  undefined4 local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined1 local_308 [8];
  longlong *local_300;
  char local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  longlong local_2d8 [6];
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298 [6];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238 [6];
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined1 local_1e8 [24];
  char local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  char local_188;
  undefined1 local_180 [24];
  char local_168;
  undefined1 local_160 [64];
  char local_120;
  undefined1 local_118 [104];
  undefined1 local_b0 [104];
  ulonglong local_48;
  ulonglong uVar16;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_568;
  uVar12 = 0;
  local_530 = 0;
  local_528 = 0;
  local_520 = 0;
  local_538 = (int *)0x0;
  local_52c = 0;
  local_518 = 0;
  uVar13 = uVar12;
  local_500 = param_1;
  local_4f8 = param_3;
  if (0 < (int)param_2[1]) {
    local_510 = 0;
    uVar16 = uVar12;
    do {
      lVar19 = *param_2 + local_510;
      iVar2 = *(int *)(lVar19 + 0x58);
      iVar18 = (int)uVar12;
      if (iVar2 == 0) {
        local_530 = iVar18 + 1;
        if (local_52c < (int)local_530) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_538,uVar12);
        }
        uVar12 = (ulonglong)local_530;
        local_538[iVar18] = local_518;
      }
      else if (0 < iVar2) {
        if (iVar2 < 3) {
          if (iVar18 < 1) {
            _Source = *(wchar_t **)(lVar19 + 0x40);
            local_4f0 = 0;
            iVar2 = (int)(*(longlong *)(lVar19 + 0x48) - (longlong)_Source >> 1);
            local_4e8 = 0;
            local_4e0 = (wchar_t *)0x0;
            local_4d4 = 0;
            local_4d8 = iVar2 + 1;
            if (iVar2 == 0) {
              local_4d8 = 0;
            }
            if ((0 < local_4d8) &&
               (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4e0,0), pwVar1 = local_4e0,
               0 < local_4d8)) {
              wcsncpy(local_4e0,_Source,(longlong)iVar2);
              pwVar1[iVar2] = L'\0';
            }
            uVar3 = FText::FromString(local_3c8,&local_4e0);
            local_318 = 4;
            FText::FText(local_308,uVar3);
            uVar12 = local_4e8;
            lVar19 = (longlong)(int)local_4e8;
            local_2f0 = '\x01';
            iVar2 = (int)local_4e8 + 1;
            local_4e8 = CONCAT44(local_4e8._4_4_,iVar2);
            if (local_4e8._4_4_ < iVar2) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_4f0,uVar12 & 0xffffffff);
            }
            puVar6 = (undefined4 *)(lVar19 * 0x30 + local_4f0);
            *puVar6 = local_318;
            *(ulonglong *)(puVar6 + 2) = CONCAT44(uStack_30c,local_310);
            *(ulonglong *)(puVar6 + 2) = CONCAT44(uStack_30c,local_310);
            puVar6[2] = local_310;
            *(ulonglong *)(puVar6 + 2) = CONCAT44(uStack_30c,local_310);
            *(undefined1 *)(puVar6 + 10) = 0;
            if (local_2f0 != '\0') {
              FText::FText(puVar6 + 4,local_308);
              *(undefined1 *)(puVar6 + 10) = 1;
              if ((local_2f0 != '\0') && (local_2f0 = '\0', local_300 != (longlong *)0x0)) {
                LOCK();
                plVar20 = local_300 + 1;
                lVar19 = *plVar20;
                *(int *)plVar20 = (int)*plVar20 + -1;
                UNLOCK();
                uVar13 = local_528;
                if ((int)lVar19 == 1) {
                  (**(code **)*local_300)(local_300);
                  LOCK();
                  piVar4 = (int *)((longlong)local_300 + 0xc);
                  iVar2 = *piVar4;
                  *piVar4 = *piVar4 + -1;
                  UNLOCK();
                  uVar13 = local_528;
                  if (iVar2 == 1) {
                    (**(code **)(*local_300 + 8))(local_300,1);
                    uVar13 = local_528;
                  }
                }
              }
            }
            if (local_3c0 != (longlong *)0x0) {
              LOCK();
              plVar20 = local_3c0 + 1;
              lVar19 = *plVar20;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              uVar13 = local_528;
              if ((int)lVar19 == 1) {
                (**(code **)*local_3c0)(local_3c0);
                LOCK();
                piVar4 = (int *)((longlong)local_3c0 + 0xc);
                iVar2 = *piVar4;
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                uVar13 = local_528;
                if (iVar2 == 1) {
                  (**(code **)(*local_3c0 + 8))(local_3c0,1);
                  uVar13 = local_528;
                }
              }
            }
            if (local_4e0 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_398,L"No operand for unary operator {0}",L"ExpressionParser",
                               L"SyntaxError_NoUnaryOperand");
            uVar3 = FTextFormat::FTextFormat(local_358,uVar3);
            uVar3 = FText::Format(local_3b0,uVar3,&local_4f0);
            FText::FText(local_440,uVar3);
            lVar19 = local_500;
            FText::FText(local_500,local_440);
            *(undefined1 *)(lVar19 + 0x18) = 1;
            if (local_438 != (longlong *)0x0) {
              LOCK();
              plVar20 = local_438 + 1;
              lVar14 = *plVar20;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              uVar13 = local_528;
              if ((int)lVar14 == 1) {
                (**(code **)*local_438)(local_438);
                LOCK();
                piVar4 = (int *)((longlong)local_438 + 0xc);
                iVar2 = *piVar4;
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                uVar13 = local_528;
                if (iVar2 == 1) {
                  (**(code **)(*local_438 + 8))(local_438,1);
                  uVar13 = local_528;
                }
              }
            }
            *(undefined1 *)(lVar19 + 0x60) = 0;
            if (local_3a8 != (longlong *)0x0) {
              LOCK();
              plVar20 = local_3a8 + 1;
              lVar14 = *plVar20;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              uVar13 = local_528;
              if ((int)lVar14 == 1) {
                (**(code **)*local_3a8)(local_3a8);
                LOCK();
                piVar4 = (int *)((longlong)local_3a8 + 0xc);
                iVar2 = *piVar4;
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                uVar13 = local_528;
                if (iVar2 == 1) {
                  (**(code **)(*local_3a8 + 8))(local_3a8,1);
                  uVar13 = local_528;
                }
              }
            }
            if (local_390 != (longlong *)0x0) {
              LOCK();
              plVar20 = local_390 + 1;
              lVar14 = *plVar20;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              uVar13 = local_528;
              if ((int)lVar14 == 1) {
                (**(code **)*local_390)(local_390);
                LOCK();
                piVar4 = (int *)((longlong)local_390 + 0xc);
                iVar2 = *piVar4;
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                uVar13 = local_528;
                if (iVar2 == 1) {
                  (**(code **)(*local_390 + 8))(local_390,1);
                  uVar13 = local_528;
                }
              }
            }
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(&local_4f0);
            if (local_538 != (int *)0x0) {
              FMemory::Free(local_538);
            }
            if ((int)local_520 != 0) {
              piVar4 = (int *)(uVar13 + 8);
              iVar2 = (int)local_520;
              do {
                piVar7 = piVar4 + 2;
                if (((piVar4[-2] == 0 && piVar4[-1] == 0) && piVar4[1] == 0) && *piVar4 == 0) {
                  piVar7 = (int *)0x0;
                }
                if (piVar7 != (int *)0x0) {
                  (*(code *)**(undefined8 **)piVar7)(piVar7,0);
                }
                piVar4 = piVar4 + 0x16;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            goto LAB_14166c6c8;
          }
          iVar17 = iVar18 + -1;
          iVar2 = local_538[iVar17];
          iVar9 = (iVar18 - iVar17) + -1;
          if (iVar9 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (local_538 + iVar17,local_538 + iVar18,(longlong)iVar9 << 2);
          }
          local_530 = iVar17;
          TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&local_538);
          if (iVar2 < (int)param_2[1]) {
            lVar14 = (longlong)iVar2 * 0x60 + *param_2;
          }
          else {
            lVar14 = (longlong)(iVar2 - (int)param_2[1]) * 0x58 + uVar13;
          }
          if (*(int *)(lVar19 + 0x58) == 1) {
            uVar15 = (uint)uVar16 | 1;
            lVar19 = (**(code **)*local_4f8)(local_4f8,local_b0);
          }
          else {
            uVar15 = (uint)uVar16 | 2;
            lVar19 = (*(code *)((undefined8 *)*local_4f8)[1])(local_4f8,local_118,lVar19,lVar14);
          }
          local_1d0 = 0;
          bVar21 = *(char *)(lVar19 + 0x18) != '\0';
          if (bVar21) {
            FText::FText(local_1e8,lVar19);
          }
          local_188 = 0;
          bVar22 = *(char *)(lVar19 + 0x60) != '\0';
          local_1d0 = bVar21;
          if (bVar22) {
            local_1c8 = 0;
            local_1c0 = 0;
            FExpressionNode::operator=(&local_1c8);
          }
          local_188 = bVar22;
          if ((uVar15 & 2) != 0) {
            uVar15 = uVar15 & 0xfffffffd;
            TValueOrError<FExpressionNode,FExpressionError>::
            ~TValueOrError<FExpressionNode,FExpressionError>(local_118);
          }
          if ((uVar15 & 1) != 0) {
            uVar15 = uVar15 & 0xfffffffe;
            TValueOrError<FExpressionNode,FExpressionError>::
            ~TValueOrError<FExpressionNode,FExpressionError>(local_b0);
          }
          lVar19 = local_500;
          uVar16 = (ulonglong)uVar15;
          if ((local_188 == '\0') || (local_1d0 != '\0')) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          if (!bVar21) {
            FText::FText(local_500,local_1e8);
            puVar5 = local_1e8;
            goto LAB_14166befc;
          }
          local_490 = 0;
          local_488 = 0;
          FExpressionNode::operator=(&local_490,&local_1c8);
          local_248 = 0;
          local_240 = 0;
          FExpressionNode::operator=(&local_248,&local_490);
          puVar11 = local_480;
          if (((local_488._4_4_ == 0 && (int)local_488 == 0) && local_490._4_4_ == 0) &&
              (int)local_490 == 0) {
            puVar11 = (undefined8 *)0x0;
          }
          local_208 = *(undefined4 *)(lVar14 + 0x40);
          uStack_204 = *(undefined4 *)(lVar14 + 0x44);
          uStack_200 = *(undefined4 *)(lVar14 + 0x48);
          uStack_1fc = *(undefined4 *)(lVar14 + 0x4c);
          local_1f8 = *(undefined8 *)(lVar14 + 0x50);
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)*puVar11)(*(undefined4 *)(lVar14 + 0x40),0);
          }
          uVar12 = local_520;
          lVar19 = (longlong)(int)local_520;
          iVar18 = (int)param_2[1] + (int)local_520;
          iVar2 = (int)local_520 + 1;
          local_520 = CONCAT44(local_520._4_4_,iVar2);
          if (local_520._4_4_ < iVar2) {
            TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_528,uVar12 & 0xffffffff);
            uVar13 = local_528;
          }
          puVar11 = (undefined8 *)(lVar19 * 0x58 + uVar13);
          *puVar11 = 0;
          puVar11[1] = 0;
          FExpressionNode::operator=(puVar11);
          lVar19 = (longlong)(int)local_530;
          *(undefined4 *)(puVar11 + 8) = local_208;
          *(undefined4 *)((longlong)puVar11 + 0x44) = uStack_204;
          *(undefined4 *)(puVar11 + 9) = uStack_200;
          *(undefined4 *)((longlong)puVar11 + 0x4c) = uStack_1fc;
          puVar11[10] = local_1f8;
          local_530 = local_530 + 1;
          if (local_52c < (int)local_530) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_538);
          }
          uVar12 = (ulonglong)local_530;
          local_538[lVar19] = iVar18;
          puVar11 = local_238;
          if (((local_240._4_4_ == 0 && (int)local_240 == 0) && local_248._4_4_ == 0) &&
              (int)local_248 == 0) {
            puVar11 = (undefined8 *)0x0;
          }
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)*puVar11)();
          }
          TValueOrError<FExpressionNode,FExpressionError>::
          ~TValueOrError<FExpressionNode,FExpressionError>(local_1e8);
        }
        else if (iVar2 == 3) {
          if (iVar18 < 2) {
            local_510 = 0;
            local_508 = 0;
            uVar3 = FUN_1416734c0(lVar19 + 0x40,local_450);
            uVar3 = FText::FromString(local_410,uVar3);
            local_348 = 4;
            FText::FText(local_338,uVar3);
            uVar13 = local_508;
            lVar19 = (longlong)(int)local_508;
            local_320 = '\x01';
            iVar2 = (int)local_508 + 1;
            local_508 = CONCAT44(local_508._4_4_,iVar2);
            if (local_508._4_4_ < iVar2) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_510,uVar13 & 0xffffffff);
            }
            puVar6 = (undefined4 *)(lVar19 * 0x30 + local_510);
            *puVar6 = local_348;
            *(ulonglong *)(puVar6 + 2) = CONCAT44(uStack_33c,local_340);
            *(ulonglong *)(puVar6 + 2) = CONCAT44(uStack_33c,local_340);
            puVar6[2] = local_340;
            *(ulonglong *)(puVar6 + 2) = CONCAT44(uStack_33c,local_340);
            *(undefined1 *)(puVar6 + 10) = 0;
            if (local_320 != '\0') {
              FText::FText(puVar6 + 4,local_338);
              *(undefined1 *)(puVar6 + 10) = 1;
              if ((local_320 != '\0') && (local_320 = '\0', local_330 != (longlong *)0x0)) {
                LOCK();
                plVar20 = local_330 + 1;
                lVar19 = *plVar20;
                *(int *)plVar20 = (int)*plVar20 + -1;
                UNLOCK();
                if ((int)lVar19 == 1) {
                  (**(code **)*local_330)(local_330);
                  LOCK();
                  piVar4 = (int *)((longlong)local_330 + 0xc);
                  iVar2 = *piVar4;
                  *piVar4 = *piVar4 + -1;
                  UNLOCK();
                  if (iVar2 == 1) {
                    (**(code **)(*local_330 + 8))(local_330,1);
                  }
                }
              }
            }
            if (local_408 != (longlong *)0x0) {
              LOCK();
              plVar20 = local_408 + 1;
              lVar19 = *plVar20;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*local_408)(local_408);
                LOCK();
                piVar4 = (int *)((longlong)local_408 + 0xc);
                iVar2 = *piVar4;
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*local_408 + 8))(local_408,1);
                }
              }
            }
            if (local_450[0] != 0) {
              FMemory::Free();
            }
            uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_3e0,L"Not enough operands for binary operator {0}",
                               L"ExpressionParser",L"SyntaxError_NotEnoughOperandsBinary");
            uVar3 = FTextFormat::FTextFormat(local_368,uVar3);
            local_4f8 = (longlong *)FText::Format(local_3f8,uVar3,&local_510);
            lVar19 = local_500;
            FUN_14165d950(local_500,&local_4f8);
            if (local_3f0 != (longlong *)0x0) {
              LOCK();
              plVar20 = local_3f0 + 1;
              lVar14 = *plVar20;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_3f0)(local_3f0);
                LOCK();
                piVar4 = (int *)((longlong)local_3f0 + 0xc);
                iVar2 = *piVar4;
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*local_3f0 + 8))(local_3f0,1);
                }
              }
            }
            if (local_3d8 != (longlong *)0x0) {
              LOCK();
              plVar20 = local_3d8 + 1;
              lVar14 = *plVar20;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_3d8)(local_3d8);
                LOCK();
                piVar4 = (int *)((longlong)local_3d8 + 0xc);
                iVar2 = *piVar4;
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*local_3d8 + 8))(local_3d8,1);
                }
              }
            }
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(&local_510);
            if (local_538 != (int *)0x0) {
              FMemory::Free(local_538);
            }
            FUN_141661650(&local_528);
            return lVar19;
          }
          iVar17 = iVar18 + -1;
          iVar2 = local_538[iVar17];
          iVar9 = (iVar18 - iVar17) + -1;
          if (iVar9 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (local_538 + iVar17,local_538 + iVar18,(longlong)iVar9 << 2);
          }
          local_530 = iVar17;
          TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&local_538);
          if (iVar2 < (int)param_2[1]) {
            lVar14 = (longlong)iVar2 * 0x60 + *param_2;
          }
          else {
            lVar14 = (longlong)(iVar2 - (int)param_2[1]) * 0x58 + uVar13;
          }
          iVar2 = local_530 + -1;
          iVar18 = local_538[iVar2];
          iVar9 = (local_530 - iVar2) + -1;
          if (iVar9 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (local_538 + iVar2,local_538 + (int)local_530,(longlong)iVar9 << 2);
          }
          local_530 = iVar2;
          TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&local_538);
          if (iVar18 < (int)param_2[1]) {
            lVar10 = (longlong)iVar18 * 0x60 + *param_2;
          }
          else {
            lVar10 = (longlong)(iVar18 - (int)param_2[1]) * 0x58 + uVar13;
          }
          local_548 = lVar14;
          (**(code **)(*local_4f8 + 0x10))(local_4f8,local_180,lVar19,lVar10);
          lVar19 = local_500;
          if ((local_120 == '\0') || (local_168 != '\0')) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          if (!bVar21) {
            FText::FText(local_500,local_180);
            puVar5 = local_180;
LAB_14166befc:
            *(undefined1 *)(lVar19 + 0x18) = 1;
            *(undefined1 *)(lVar19 + 0x60) = 0;
            TValueOrError<FExpressionNode,FExpressionError>::
            ~TValueOrError<FExpressionNode,FExpressionError>(puVar5);
            if (local_538 != (int *)0x0) {
              FMemory::Free();
            }
            FUN_141661650(&local_528);
            return lVar19;
          }
          local_4d0 = 0;
          local_4c8 = 0;
          FExpressionNode::operator=(&local_4d0,local_160);
          local_2a8 = 0;
          local_2a0 = 0;
          FExpressionNode::operator=(&local_2a8,&local_4d0);
          puVar11 = local_4c0;
          if (((local_4c8._4_4_ == 0 && (int)local_4c8 == 0) && local_4d0._4_4_ == 0) &&
              (int)local_4d0 == 0) {
            puVar11 = (undefined8 *)0x0;
          }
          local_268 = *(undefined4 *)(lVar10 + 0x40);
          uStack_264 = *(undefined4 *)(lVar10 + 0x44);
          uStack_260 = *(undefined4 *)(lVar10 + 0x48);
          uStack_25c = *(undefined4 *)(lVar10 + 0x4c);
          local_258 = *(undefined8 *)(lVar10 + 0x50);
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)*puVar11)(*(undefined4 *)(lVar10 + 0x40),0);
          }
          uVar12 = local_520;
          lVar19 = (longlong)(int)local_520;
          iVar18 = (int)param_2[1] + (int)local_520;
          iVar2 = (int)local_520 + 1;
          local_520 = CONCAT44(local_520._4_4_,iVar2);
          if (local_520._4_4_ < iVar2) {
            TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_528,uVar12 & 0xffffffff);
            uVar13 = local_528;
          }
          puVar11 = (undefined8 *)(lVar19 * 0x58 + uVar13);
          *puVar11 = 0;
          puVar11[1] = 0;
          FExpressionNode::operator=(puVar11);
          lVar19 = (longlong)(int)local_530;
          *(undefined4 *)(puVar11 + 8) = local_268;
          *(undefined4 *)((longlong)puVar11 + 0x44) = uStack_264;
          *(undefined4 *)(puVar11 + 9) = uStack_260;
          *(undefined4 *)((longlong)puVar11 + 0x4c) = uStack_25c;
          puVar11[10] = local_258;
          local_530 = local_530 + 1;
          if (local_52c < (int)local_530) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_538);
          }
          uVar12 = (ulonglong)local_530;
          local_538[lVar19] = iVar18;
          puVar11 = local_298;
          if (((local_2a0._4_4_ == 0 && (int)local_2a0 == 0) && local_2a8._4_4_ == 0) &&
              (int)local_2a8 == 0) {
            puVar11 = (undefined8 *)0x0;
          }
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)*puVar11)();
          }
          TValueOrError<FExpressionNode,FExpressionError>::
          ~TValueOrError<FExpressionNode,FExpressionError>(local_180);
        }
      }
      plVar20 = (longlong *)0x0;
      local_510 = local_510 + 0x60;
      iVar2 = (int)param_2[1];
      local_518 = local_518 + 1;
    } while (local_518 < iVar2);
    if ((int)uVar12 == 1) {
      iVar18 = *local_538;
      if (iVar18 < iVar2) {
        piVar4 = (int *)((longlong)iVar18 * 0x60 + *param_2);
      }
      else {
        piVar4 = (int *)((longlong)(iVar18 - iVar2) * 0x58 + uVar13);
      }
      plVar8 = (longlong *)(piVar4 + 4);
      if (((piVar4[3] == 0 && piVar4[2] == 0) && piVar4[1] == 0) && *piVar4 == 0) {
        plVar8 = plVar20;
      }
      if (plVar8 == (longlong *)0x0) {
        local_2e8 = 0;
        local_2e0 = 0;
      }
      else {
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_2e8);
      }
      lVar19 = local_500;
      *(undefined1 *)(local_500 + 0x18) = 0;
      *(undefined8 *)(local_500 + 0x20) = 0;
      *(undefined8 *)(local_500 + 0x28) = 0;
      FExpressionNode::operator=(local_500 + 0x20,&local_2e8);
      *(undefined1 *)(lVar19 + 0x60) = 1;
      plVar8 = local_2d8;
      if (((local_2e0._4_4_ == 0 && (int)local_2e0 == 0) && local_2e8._4_4_ == 0) &&
          (int)local_2e8 == 0) {
        plVar8 = plVar20;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)*plVar8)(plVar8,0);
      }
      FMemory::Free(local_538);
      if ((int)local_520 != 0) {
        piVar4 = (int *)(uVar13 + 8);
        iVar2 = (int)local_520;
        do {
          plVar8 = (longlong *)(piVar4 + 2);
          if (((piVar4[-2] == 0 && piVar4[-1] == 0) && piVar4[1] == 0) && *piVar4 == 0) {
            plVar8 = plVar20;
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)*plVar8)(plVar8,0);
          }
          piVar4 = piVar4 + 0x16;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      goto LAB_14166c6c8;
    }
  }
  lVar19 = local_500;
  uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_380,L"Could not evaluate expression",L"ExpressionParser",
                     L"SyntaxError_InvalidExpression");
  FText::FText(local_428,uVar3);
  FText::FText(lVar19,local_428);
  *(undefined1 *)(lVar19 + 0x18) = 1;
  if (local_420 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_420 + 1;
    lVar14 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    uVar13 = local_528;
    if ((int)lVar14 == 1) {
      (**(code **)*local_420)(local_420);
      LOCK();
      piVar4 = (int *)((longlong)local_420 + 0xc);
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      uVar13 = local_528;
      if (iVar2 == 1) {
        (**(code **)(*local_420 + 8))(local_420,1);
        uVar13 = local_528;
      }
    }
  }
  *(undefined1 *)(lVar19 + 0x60) = 0;
  if (local_378 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_378 + 1;
    lVar14 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    uVar13 = local_528;
    if ((int)lVar14 == 1) {
      (**(code **)*local_378)(local_378);
      LOCK();
      piVar4 = (int *)((longlong)local_378 + 0xc);
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      uVar13 = local_528;
      if (iVar2 == 1) {
        (**(code **)(*local_378 + 8))(local_378,1);
        uVar13 = local_528;
      }
    }
  }
  if (local_538 != (int *)0x0) {
    FMemory::Free(local_538);
  }
  if ((int)local_520 != 0) {
    piVar4 = (int *)(uVar13 + 8);
    iVar2 = (int)local_520;
    do {
      piVar7 = piVar4 + 2;
      if (((piVar4[-2] == 0 && piVar4[-1] == 0) && piVar4[1] == 0) && *piVar4 == 0) {
        piVar7 = (int *)0x0;
      }
      if (piVar7 != (int *)0x0) {
        (*(code *)**(undefined8 **)piVar7)(piVar7,0);
      }
      piVar4 = piVar4 + 0x16;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_14166c6c8:
  if (uVar13 != 0) {
    FMemory::Free(uVar13);
  }
  return lVar19;
}



// FUNCTION 14166c710 Evaluate body=1654 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FFrameRateParser::Evaluate(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  double dVar5;
  double *pdVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined **local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined1 local_248 [8];
  longlong *local_240;
  char local_230;
  undefined8 local_228;
  undefined8 local_220;
  char local_218;
  undefined1 local_210 [8];
  longlong *local_208;
  char local_1f8;
  undefined1 local_1f0 [16];
  char local_1e0;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  char local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  char local_178;
  undefined1 local_170 [24];
  char local_158;
  undefined1 local_150 [64];
  char local_110;
  undefined1 local_108 [104];
  undefined1 local_a0 [104];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  ExpressionParser::Lex(local_248,param_3,param_1);
  if ((local_218 == '\0') || (local_230 != '\0')) {
    FText::FText(local_278,local_248);
    plVar1 = local_240;
    if ((local_230 != '\0') && (local_230 = '\0', local_240 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_240 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    FText::FText(param_2,local_278);
    *(undefined1 *)(param_2 + 0x18) = 1;
    *(undefined1 *)(param_2 + 0x28) = 0;
    if (local_270 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_270 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_270)(local_270);
        LOCK();
        piVar2 = (int *)((longlong)local_270 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_270 + 8))(local_270,1);
        }
      }
    }
    bVar10 = local_218 != '\0';
    local_218 = 0;
    if (bVar10) {
      local_218 = 0;
      FUN_141661650(&local_228);
    }
joined_r0x00014166cd2e:
    if ((local_230 != '\0') && (local_230 = 0, local_240 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_240 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_240)(local_240);
        LOCK();
        piVar2 = (int *)((longlong)local_240 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_240 + 8))(local_240,1);
        }
      }
    }
    return param_2;
  }
  local_2e8 = local_228;
  local_2e0 = (undefined4)local_220;
  local_2dc = local_220._4_4_;
  local_220 = 0;
  local_228 = 0;
  local_218 = '\0';
  FUN_141661650(&local_228);
  ExpressionParser::Compile(local_210,&local_2e8,param_1 + 0x18);
  if ((local_1e0 == '\0') || (local_1f8 != '\0')) {
    FText::FText(local_290,local_210);
    plVar1 = local_208;
    if ((local_1f8 != '\0') && (local_1f8 = '\0', local_208 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_208 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    FText::FText(param_2,local_290);
    *(undefined1 *)(param_2 + 0x18) = 1;
    *(undefined1 *)(param_2 + 0x28) = 0;
    if (local_288 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_288 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_288)(local_288);
        LOCK();
        piVar2 = (int *)((longlong)local_288 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_288 + 8))(local_288,1);
        }
      }
    }
    if (local_1e0 != '\0') {
      local_1e0 = '\0';
      TArray<FExpressionToken,TSizedDefaultAllocator<32>_>::
      ~TArray<FExpressionToken,TSizedDefaultAllocator<32>_>(local_1f0);
    }
    if ((local_1f8 != '\0') && (local_1f8 = '\0', local_208 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_208 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_208)(local_208);
        LOCK();
        piVar2 = (int *)((longlong)local_208 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_208 + 8))(local_208,1);
        }
      }
    }
    bVar10 = local_218 != '\0';
    local_218 = 0;
    if (bVar10) {
      local_218 = 0;
      FUN_141661650(&local_228);
    }
    goto joined_r0x00014166cd2e;
  }
  local_2c8 = 0;
  local_2d8 = &PTR_FUN_144cc21d8;
  local_2d0 = param_1 + 0x158;
  FUN_14166b8c0(local_170,local_1f0,&local_2d8);
  if ((local_110 == '\0') || (local_158 != '\0')) {
    FText::FText(param_2,local_170);
    *(undefined1 *)(param_2 + 0x18) = 1;
    *(undefined1 *)(param_2 + 0x28) = 0;
    TValueOrError<FExpressionNode,FExpressionError>::
    ~TValueOrError<FExpressionNode,FExpressionError>(local_170);
    if (local_1e0 != '\0') {
      local_1e0 = '\0';
      TArray<FExpressionToken,TSizedDefaultAllocator<32>_>::
      ~TArray<FExpressionToken,TSizedDefaultAllocator<32>_>(local_1f0);
    }
    if ((local_1f8 != '\0') && (local_1f8 = '\0', local_208 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_208 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_208)(local_208);
        LOCK();
        piVar2 = (int *)((longlong)local_208 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_208 + 8))(local_208,1);
        }
      }
    }
    bVar10 = local_218 != '\0';
    local_218 = 0;
    if (bVar10) {
      local_218 = 0;
      FUN_141661650(&local_228);
    }
    goto joined_r0x00014166cd2e;
  }
  pdVar6 = (double *)
           FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(local_150);
  if (pdVar6 == (double *)0x0) {
    puVar8 = (undefined8 *)
             FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(local_150);
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined1 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = *puVar8;
      *(undefined1 *)(param_2 + 0x28) = 1;
      goto LAB_14166c905;
    }
LAB_14166c931:
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_260,L"Unrecognized result returned from expression",L"FFrameRate",
                       L"UnrecognizedResult");
    FText::FText(local_2a8,uVar9);
    FText::FText(param_2,local_2a8);
    *(undefined1 *)(param_2 + 0x18) = 1;
    if (local_2a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_2a0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_2a0)(local_2a0);
        LOCK();
        piVar2 = (int *)((longlong)local_2a0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_2a0 + 8))(local_2a0,1);
        }
      }
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
    if (local_258 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_258 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_258)(local_258);
        LOCK();
        piVar2 = (int *)((longlong)local_258 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_258 + 8))(local_258,1);
        }
      }
    }
  }
  else {
    dVar5 = *pdVar6;
    if (dVar5 <= 1.0) {
      lVar7 = MakeFrameRateFromInterval(local_108);
    }
    else {
      lVar7 = MakeFrameRateFromFPS(local_a0);
    }
    local_1c0 = 0;
    bVar10 = *(char *)(lVar7 + 0x18) != '\0';
    if (bVar10) {
      FText::FText(local_1d8,lVar7);
    }
    local_178 = 0;
    bVar11 = *(char *)(lVar7 + 0x60) != '\0';
    local_1c0 = bVar10;
    if (bVar11) {
      local_1b8 = 0;
      local_1b0 = 0;
      FExpressionNode::operator=(&local_1b8);
    }
    local_178 = bVar11;
    if (dVar5 <= 1.0) {
      TValueOrError<FExpressionNode,FExpressionError>::
      ~TValueOrError<FExpressionNode,FExpressionError>(local_108);
    }
    else {
      TValueOrError<FExpressionNode,FExpressionError>::
      ~TValueOrError<FExpressionNode,FExpressionError>(local_a0);
    }
    if ((local_178 == '\0') || (local_1c0 != '\0')) {
      FText::FText(local_2c0,local_1d8);
      if ((local_1c0 != '\0') && (local_1c0 = '\0', local_1d0 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_1d0 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      FText::FText(param_2,local_2c0);
      *(undefined1 *)(param_2 + 0x18) = 1;
      *(undefined1 *)(param_2 + 0x28) = 0;
      if (local_2b8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_2b8 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_2b8)(local_2b8);
          LOCK();
          piVar2 = (int *)((longlong)local_2b8 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_2b8 + 8))(local_2b8,1);
          }
        }
      }
    }
    else {
      puVar8 = (undefined8 *)
               FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(&local_1b8);
      if (puVar8 == (undefined8 *)0x0) {
        TValueOrError<FExpressionNode,FExpressionError>::
        ~TValueOrError<FExpressionNode,FExpressionError>(local_1d8);
        goto LAB_14166c931;
      }
      *(undefined1 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = *puVar8;
      *(undefined1 *)(param_2 + 0x28) = 1;
    }
    TValueOrError<FExpressionNode,FExpressionError>::
    ~TValueOrError<FExpressionNode,FExpressionError>(local_1d8);
  }
LAB_14166c905:
  TValueOrError<FExpressionNode,FExpressionError>::~TValueOrError<FExpressionNode,FExpressionError>
            (local_170);
  TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>::
  ~TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>(local_210);
  TValueOrError<TArray<FExpressionToken,FDefaultAllocator>,FExpressionError>::
  ~TValueOrError<TArray<FExpressionToken,FDefaultAllocator>,FExpressionError>(local_248);
  return param_2;
}



// FUNCTION 14166cd90 EvaluateAsBasicStringExpression body=59 status=ok
// SIG undefined EvaluateAsBasicStringExpression(void)

char TextFilterExpressionParser::FTextToken::EvaluateAsBasicStringExpression
               (longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 8) < 2) {
    return '\x01';
  }
  cVar1 = (**(code **)*param_2)(param_2,param_1,*(undefined1 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x11) != '\0') {
    cVar1 = cVar1 == '\0';
  }
  return cVar1;
}



// FUNCTION 14166cdd0 FUN_14166cdd0 body=383 status=ok
// SIG undefined FUN_14166cdd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14166cdd0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  char local_78;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  byte local_60 [8];
  byte local_58 [40];
  char local_30;
  ulonglong local_28;
  
  uVar6 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((*(char *)(param_2 + 0x30) != '\0') && (*(char *)(param_2 + 0x18) == '\0')) {
    local_a8 = &PTR_FUN_144ccfd20;
    local_a0 = param_1 + 0x228;
    local_98 = param_3;
    local_28 = uVar6;
    uVar6 = FUN_14166b8c0(local_90,param_2 + 0x20,&local_a8);
    if ((local_30 == '\0') || (local_78 != '\0')) {
      if (param_4 != 0) {
        uVar6 = FText::operator=(param_4,local_90);
      }
    }
    else {
      puVar7 = (uint *)FUN_141674140();
      pbVar8 = local_58;
      if (((puVar7[1] != local_6c || puVar7[2] != local_68) || puVar7[3] != local_64) ||
          local_70 != *puVar7) {
        pbVar8 = (byte *)0x0;
      }
      if (pbVar8 != (byte *)0x0) {
        bVar4 = *pbVar8;
        TValueOrError<FExpressionNode,FExpressionError>::
        ~TValueOrError<FExpressionNode,FExpressionError>(local_90);
        return (ulonglong)bVar4;
      }
      lVar9 = FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>(&local_70);
      uVar6 = 0;
      if (lVar9 != 0) {
        bVar4 = TextFilterExpressionParser::FTextToken::EvaluateAsBasicStringExpression
                          (lVar9,param_3);
        TValueOrError<FExpressionNode,FExpressionError>::
        ~TValueOrError<FExpressionNode,FExpressionError>(local_90);
        return (ulonglong)bVar4;
      }
    }
    if (local_30 != '\0') {
      local_64 = local_70 | local_6c | local_68 | local_64;
      uVar6 = (ulonglong)local_64;
      local_30 = '\0';
      pbVar8 = local_60;
      if (local_64 == 0) {
        pbVar8 = (byte *)0x0;
      }
      if (pbVar8 != (byte *)0x0) {
        uVar6 = (*(code *)**(undefined8 **)pbVar8)(pbVar8,0);
      }
    }
    if ((local_78 != '\0') && (local_78 = 0, local_88 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_88 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar5 = (int)lVar9 - 1;
      uVar6 = (ulonglong)uVar5;
      if (uVar5 == 0) {
        uVar6 = (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          uVar6 = (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 14166cf50 FUN_14166cf50 body=46 status=ok
// SIG undefined FUN_14166cf50(void)

undefined8 FUN_14166cf50(longlong param_1,undefined8 param_2)

{
  FUN_14166cf80(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 14166cf80 FUN_14166cf80 body=2282 status=ok
// SIG undefined FUN_14166cf80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14166cf80(longlong param_1,longlong param_2,undefined8 *param_3,int *param_4,
                      int *param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  int iVar11;
  wchar_t *pwVar12;
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  longlong local_278;
  undefined8 local_270;
  wchar_t *local_268;
  int local_260;
  undefined4 local_25c;
  undefined8 local_258;
  wchar_t *local_250;
  int local_248;
  undefined4 local_244;
  wchar_t *local_240;
  int local_238;
  undefined4 local_234;
  int *local_230;
  int *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  int local_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
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
  undefined4 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 local_140 [8];
  longlong *local_138;
  char local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined1 local_110 [8];
  longlong *local_108;
  char local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined1 local_e0 [8];
  longlong *local_d8;
  char local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  char local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  wchar_t local_90 [24];
  char local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_220 = *param_3;
  uStack_218 = param_3[1];
  local_210 = *param_4;
  iStack_20c = param_4[1];
  iStack_208 = param_4[2];
  iStack_204 = param_4[3];
  local_228 = param_5;
  local_200 = *param_5;
  iStack_1fc = param_5[1];
  iStack_1f8 = param_5[2];
  iStack_1f4 = param_5[3];
  local_258 = param_6;
  local_230 = param_4;
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    iVar4 = GetTypeHash(&local_220);
    lVar6 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      lVar6 = param_1 + 0xd8;
    }
    iVar4 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0xe8) - 1U & (longlong)iVar4) * 4);
    if (iVar4 != -1) {
      local_268 = *(wchar_t **)(param_1 + 0xa0);
      do {
        pwVar5 = local_268 + (longlong)iVar4 * 0x48;
        if (((((*(int *)(pwVar5 + 2) == local_220._4_4_ && *(int *)(pwVar5 + 4) == (int)uStack_218)
              && *(int *)(pwVar5 + 6) == uStack_218._4_4_) && *(int *)pwVar5 == (int)local_220) &&
            (((*(int *)(pwVar5 + 10) == iStack_20c && *(int *)(pwVar5 + 0xc) == iStack_208) &&
             *(int *)(pwVar5 + 0xe) == iStack_204) && local_210 == *(int *)(pwVar5 + 8))) &&
           (((*(int *)(pwVar5 + 0x12) == iStack_1fc && *(int *)(pwVar5 + 0x14) == iStack_1f8) &&
            *(int *)(pwVar5 + 0x16) == iStack_1f4) && local_200 == *(int *)(pwVar5 + 0x10))) {
          if (iVar4 != -1) goto LAB_14166d10c;
          break;
        }
        iVar4 = *(int *)(pwVar5 + 0x40);
      } while (iVar4 != -1);
    }
  }
  pwVar5 = (wchar_t *)0x0;
LAB_14166d10c:
  pwVar12 = (wchar_t *)0x0;
  pwVar10 = pwVar5 + 0x18;
  if (pwVar5 == (wchar_t *)0x0) {
    pwVar10 = pwVar12;
  }
  if (pwVar10 == (wchar_t *)0x0) {
    pwVar5 = (wchar_t *)param_3[8];
    local_278 = 0;
    iVar4 = (int)(param_3[9] - (longlong)pwVar5 >> 1);
    local_270 = 0;
    local_268 = (wchar_t *)0x0;
    iVar11 = 0;
    local_25c = 0;
    local_260 = iVar4 + 1;
    if (iVar4 == 0) {
      local_260 = iVar11;
    }
    if ((0 < local_260) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0), pwVar10 = local_268,
       0 < local_260)) {
      wcsncpy(local_268,pwVar5,(longlong)iVar4);
      pwVar10[iVar4] = L'\0';
    }
    uVar7 = FText::FromString(local_1d8,&local_268);
    local_150 = 4;
    FText::FText(local_140,uVar7);
    uVar3 = local_270;
    lVar6 = (longlong)(int)local_270;
    local_128 = '\x01';
    iVar4 = (int)local_270 + 1;
    local_270 = CONCAT44(local_270._4_4_,iVar4);
    if (local_270._4_4_ < iVar4) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_278,uVar3 & 0xffffffff);
    }
    puVar9 = (undefined4 *)(lVar6 * 0x30 + local_278);
    *puVar9 = local_150;
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_144,local_148);
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_144,local_148);
    puVar9[2] = local_148;
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_144,local_148);
    *(undefined1 *)(puVar9 + 10) = 0;
    if (local_128 != '\0') {
      FText::FText(puVar9 + 4,local_140);
      *(undefined1 *)(puVar9 + 10) = 1;
      if ((local_128 != '\0') && (local_128 = '\0', local_138 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_138 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar2 = (int *)((longlong)local_138 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_138 + 8))(local_138,1);
          }
        }
      }
    }
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_268 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_250 = (wchar_t *)0x0;
    local_244 = 0;
    pwVar5 = *(wchar_t **)(local_230 + 0x10);
    iVar4 = (int)(*(longlong *)(local_230 + 0x12) - (longlong)pwVar5 >> 1);
    local_248 = iVar4 + 1;
    if (iVar4 == 0) {
      local_248 = iVar11;
    }
    if ((0 < local_248) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0), pwVar10 = local_250,
       0 < local_248)) {
      wcsncpy(local_250,pwVar5,(longlong)iVar4);
      pwVar10[iVar4] = L'\0';
    }
    uVar7 = FText::FromString(local_1c0,&local_250);
    local_120 = 4;
    FText::FText(local_110,uVar7);
    uVar3 = local_270;
    lVar6 = (longlong)(int)local_270;
    local_f8 = '\x01';
    iVar4 = (int)local_270 + 1;
    local_270 = CONCAT44(local_270._4_4_,iVar4);
    if (local_270._4_4_ < iVar4) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_278,uVar3 & 0xffffffff);
    }
    puVar9 = (undefined4 *)(lVar6 * 0x30 + local_278);
    *puVar9 = local_120;
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_114,local_118);
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_114,local_118);
    puVar9[2] = local_118;
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_114,local_118);
    *(undefined1 *)(puVar9 + 10) = 0;
    if (local_f8 != '\0') {
      FText::FText(puVar9 + 4,local_110);
      *(undefined1 *)(puVar9 + 10) = 1;
      if ((local_f8 != '\0') && (local_f8 = '\0', local_108 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_108 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar2 = (int *)((longlong)local_108 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_108 + 8))(local_108,1);
          }
        }
      }
    }
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b8 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_250 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_240 = (wchar_t *)0x0;
    local_234 = 0;
    pwVar5 = *(wchar_t **)(local_228 + 0x10);
    iVar4 = (int)(*(longlong *)(local_228 + 0x12) - (longlong)pwVar5 >> 1);
    local_238 = iVar4 + 1;
    if (iVar4 == 0) {
      local_238 = iVar11;
    }
    if ((0 < local_238) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_240,0), pwVar10 = local_240,
       0 < local_238)) {
      wcsncpy(local_240,pwVar5,(longlong)iVar4);
      pwVar10[iVar4] = L'\0';
    }
    uVar7 = FText::FromString(local_1a8,&local_240);
    local_f0 = 4;
    FText::FText(local_e0,uVar7);
    uVar3 = local_270;
    lVar6 = (longlong)(int)local_270;
    local_c8 = '\x01';
    iVar4 = (int)local_270 + 1;
    local_270 = CONCAT44(local_270._4_4_,iVar4);
    if (local_270._4_4_ < iVar4) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_278,uVar3 & 0xffffffff);
    }
    puVar9 = (undefined4 *)(lVar6 * 0x30 + local_278);
    *puVar9 = local_f0;
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_e4,local_e8);
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_e4,local_e8);
    puVar9[2] = local_e8;
    *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_e4,local_e8);
    *(undefined1 *)(puVar9 + 10) = 0;
    if (local_c8 != '\0') {
      FText::FText(puVar9 + 4,local_e0);
      *(undefined1 *)(puVar9 + 10) = 1;
      if ((local_c8 != '\0') && (local_c8 = '\0', local_d8 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_d8 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar2 = (int *)((longlong)local_d8 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_d8 + 8))(local_d8,1);
          }
        }
      }
    }
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1a0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_240 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_178,L"Binary operator {0} cannot operate on {1} and {2}",
                       L"ExpressionParser",L"BinaryExecutionError");
    uVar7 = FTextFormat::FTextFormat(local_160,uVar7);
    uVar7 = FText::Format(local_190,uVar7,&local_278);
    FText::FText(local_1f0,uVar7);
    FText::FText(param_2,local_1f0);
    *(undefined1 *)(param_2 + 0x18) = 1;
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e8 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    *(undefined1 *)(param_2 + 0x60) = 0;
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_188 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_170 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar2 = (int *)((longlong)local_170 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (&local_278);
  }
  else {
    pwVar5 = pwVar12;
    if (*(int *)(pwVar10 + 0x20) != 0) {
      pwVar8 = *(wchar_t **)(pwVar10 + 0x18);
      if (*(wchar_t **)(pwVar10 + 0x18) == (wchar_t *)0x0) {
        pwVar8 = pwVar10 + 8;
      }
      if (pwVar8 != (wchar_t *)0x0) {
        pwVar5 = (wchar_t *)(**(code **)(*(longlong *)pwVar8 + 8))();
      }
    }
    local_288 = &local_258;
    lVar6 = (**(code **)pwVar10)(local_c0,pwVar5,local_230,local_228);
    *(undefined1 *)(param_2 + 0x18) = 0;
    if (*(char *)(lVar6 + 0x18) != '\0') {
      FText::FText(param_2,lVar6);
      *(undefined1 *)(param_2 + 0x18) = 1;
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
    if (*(char *)(lVar6 + 0x60) != '\0') {
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      FExpressionNode::operator=(param_2 + 0x20);
      *(undefined1 *)(param_2 + 0x60) = 1;
    }
    if (local_60 != '\0') {
      local_60 = '\0';
      pwVar5 = local_90;
      if (((local_a0 == 0 && local_9c == 0) && local_98 == 0) && local_94 == 0) {
        pwVar5 = pwVar12;
      }
      if (pwVar5 != (wchar_t *)0x0) {
        (*(code *)**(undefined8 **)pwVar5)(pwVar5,0);
      }
    }
    if ((local_a8 != '\0') && (local_a8 = 0, local_b8 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_b8 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 14166d870 FUN_14166d870 body=36 status=ok
// SIG undefined FUN_14166d870(void)

undefined8 FUN_14166d870(longlong param_1,undefined8 param_2)

{
  FUN_14166d8a0(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 14166d8a0 FUN_14166d8a0 body=1494 status=ok
// SIG undefined FUN_14166d8a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14166d8a0(longlong param_1,longlong param_2,int *param_3,int *param_4,wchar_t *param_5)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  undefined4 *puVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined8 local_190;
  wchar_t *local_188;
  int local_180;
  undefined4 local_17c;
  wchar_t *local_178;
  int local_170;
  undefined4 local_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [16];
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [8];
  longlong *local_98;
  char local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_70 [8];
  longlong *local_68;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_168 = *param_3;
  iStack_164 = param_3[1];
  iStack_160 = param_3[2];
  iStack_15c = param_3[3];
  local_178 = param_5;
  local_158 = *param_4;
  iStack_154 = param_4[1];
  iStack_150 = param_4[2];
  iStack_14c = param_4[3];
  local_148 = 0;
  local_140 = 0;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    iVar4 = GetTypeHash(&local_168);
    lVar8 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar8 = param_1 + 0x88;
    }
    iVar4 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x98) - 1U & (longlong)iVar4) * 4);
    if (iVar4 != -1) {
      local_188 = *(wchar_t **)(param_1 + 0x50);
      do {
        pwVar9 = local_188 + (longlong)iVar4 * 0x48;
        if (((((*(int *)(pwVar9 + 2) == iStack_164 && *(int *)(pwVar9 + 4) == iStack_160) &&
              *(int *)(pwVar9 + 6) == iStack_15c) && local_168 == *(int *)pwVar9) &&
            (((*(int *)(pwVar9 + 10) == iStack_154 && *(int *)(pwVar9 + 0xc) == iStack_150) &&
             *(int *)(pwVar9 + 0xe) == iStack_14c) && local_158 == *(int *)(pwVar9 + 8))) &&
           (((*(int *)(pwVar9 + 0x16) == local_140._4_4_ &&
             *(int *)(pwVar9 + 0x14) == (int)local_140) &&
            *(int *)(pwVar9 + 0x12) == local_148._4_4_) && *(int *)(pwVar9 + 0x10) == (int)local_148
           )) {
          if (iVar4 != -1) goto LAB_14166da22;
          break;
        }
        iVar4 = *(int *)(pwVar9 + 0x40);
      } while (iVar4 != -1);
    }
  }
  pwVar9 = (wchar_t *)0x0;
LAB_14166da22:
  pwVar6 = pwVar9 + 0x18;
  if (pwVar9 == (wchar_t *)0x0) {
    pwVar6 = (wchar_t *)0x0;
  }
  if (pwVar6 == (wchar_t *)0x0) {
    pwVar9 = *(wchar_t **)(param_3 + 0x10);
    local_198 = 0;
    iVar4 = (int)(*(longlong *)(param_3 + 0x12) - (longlong)pwVar9 >> 1);
    local_190 = 0;
    local_178 = (wchar_t *)0x0;
    local_16c = 0;
    local_170 = iVar4 + 1;
    if (iVar4 == 0) {
      local_170 = 0;
    }
    if ((0 < local_170) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0), pwVar6 = local_178,
       0 < local_170)) {
      wcsncpy(local_178,pwVar9,(longlong)iVar4);
      pwVar6[iVar4] = L'\0';
    }
    uVar5 = FText::FromString(local_120,&local_178);
    local_b0 = 4;
    FText::FText(local_a0,uVar5);
    uVar3 = local_190;
    lVar8 = (longlong)(int)local_190;
    local_88 = '\x01';
    iVar4 = (int)local_190 + 1;
    local_190 = CONCAT44(local_190._4_4_,iVar4);
    if (local_190._4_4_ < iVar4) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_198,uVar3 & 0xffffffff);
    }
    puVar7 = (undefined4 *)(lVar8 * 0x30 + local_198);
    *puVar7 = local_b0;
    *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_a4,local_a8);
    *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_a4,local_a8);
    puVar7[2] = local_a8;
    *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_a4,local_a8);
    *(undefined1 *)(puVar7 + 10) = 0;
    if (local_88 != '\0') {
      FText::FText(puVar7 + 4,local_a0);
      *(undefined1 *)(puVar7 + 10) = 1;
      if ((local_88 != '\0') && (local_88 = '\0', local_98 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_98 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)local_98 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_118 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    if (local_178 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    pwVar9 = *(wchar_t **)(param_4 + 0x10);
    local_188 = (wchar_t *)0x0;
    iVar4 = (int)(*(longlong *)(param_4 + 0x12) - (longlong)pwVar9 >> 1);
    local_17c = 0;
    local_180 = iVar4 + 1;
    if (iVar4 == 0) {
      local_180 = 0;
    }
    if ((0 < local_180) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0), pwVar6 = local_188,
       0 < local_180)) {
      wcsncpy(local_188,pwVar9,(longlong)iVar4);
      pwVar6[iVar4] = L'\0';
    }
    uVar5 = FText::FromString(local_108,&local_188);
    local_80 = 4;
    FText::FText(local_70,uVar5);
    uVar3 = local_190;
    lVar8 = (longlong)(int)local_190;
    local_58 = '\x01';
    iVar4 = (int)local_190 + 1;
    local_190 = CONCAT44(local_190._4_4_,iVar4);
    if (local_190._4_4_ < iVar4) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_198,uVar3 & 0xffffffff);
    }
    puVar7 = (undefined4 *)(lVar8 * 0x30 + local_198);
    *puVar7 = local_80;
    *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_74,local_78);
    puVar7[2] = local_78;
    *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_74,local_78);
    *(undefined1 *)(puVar7 + 10) = 0;
    if (local_58 != '\0') {
      FText::FText(puVar7 + 4,local_70);
      *(undefined1 *)(puVar7 + 10) = 1;
      if ((local_58 != '\0') && (local_58 = '\0', local_68 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_68 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)local_68 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    if (local_188 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d8,L"Post-unary operator {0} cannot operate on {1}",L"ExpressionParser"
                       ,L"PostUnaryExecutionError");
    uVar5 = FTextFormat::FTextFormat(local_c0,uVar5);
    uVar5 = FText::Format(local_f0,uVar5,&local_198);
    FText::FText(local_138,uVar5);
    FText::FText(param_2,local_138);
    *(undefined1 *)(param_2 + 0x18) = 1;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_130 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    *(undefined1 *)(param_2 + 0x60) = 0;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)local_e8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (&local_198);
  }
  else {
    FUN_141663940(pwVar6,param_2,param_4,local_178);
  }
  return param_2;
}



// FUNCTION 14166de80 FUN_14166de80 body=36 status=ok
// SIG undefined FUN_14166de80(void)

undefined8 FUN_14166de80(longlong param_1,undefined8 param_2)

{
  FUN_14166deb0(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 14166deb0 FUN_14166deb0 body=1478 status=ok
// SIG undefined FUN_14166deb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14166deb0(longlong *param_1,longlong param_2,undefined8 *param_3,int *param_4,
                      wchar_t *param_5)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  undefined4 *puVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined8 local_190;
  wchar_t *local_188;
  int local_180;
  undefined4 local_17c;
  wchar_t *local_178;
  int local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [16];
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [8];
  longlong *local_98;
  char local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_70 [8];
  longlong *local_68;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_168 = *param_3;
  uStack_160 = param_3[1];
  local_178 = param_5;
  local_158 = 0;
  local_148 = *param_4;
  iStack_144 = param_4[1];
  iStack_140 = param_4[2];
  iStack_13c = param_4[3];
  local_150 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = GetTypeHash(&local_168);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4);
    if (iVar3 != -1) {
      local_188 = (wchar_t *)*param_1;
      do {
        pwVar9 = local_188 + (longlong)iVar3 * 0x48;
        if (((((*(int *)(pwVar9 + 2) == local_168._4_4_ && *(int *)(pwVar9 + 4) == (int)uStack_160)
              && *(int *)(pwVar9 + 6) == uStack_160._4_4_) && (int)local_168 == *(int *)pwVar9) &&
            (((*(int *)(pwVar9 + 0xe) == local_150._4_4_ && *(int *)(pwVar9 + 0xc) == (int)local_150
              ) && *(int *)(pwVar9 + 10) == local_158._4_4_) &&
             (int)local_158 == *(int *)(pwVar9 + 8))) &&
           (((*(int *)(pwVar9 + 0x12) == iStack_144 && *(int *)(pwVar9 + 0x14) == iStack_140) &&
            *(int *)(pwVar9 + 0x16) == iStack_13c) && *(int *)(pwVar9 + 0x10) == local_148)) {
          if (iVar3 != -1) goto LAB_14166e022;
          break;
        }
        iVar3 = *(int *)(pwVar9 + 0x40);
      } while (iVar3 != -1);
    }
  }
  pwVar9 = (wchar_t *)0x0;
LAB_14166e022:
  pwVar6 = pwVar9 + 0x18;
  if (pwVar9 == (wchar_t *)0x0) {
    pwVar6 = (wchar_t *)0x0;
  }
  if (pwVar6 == (wchar_t *)0x0) {
    pwVar9 = (wchar_t *)param_3[8];
    local_198 = 0;
    iVar3 = (int)(param_3[9] - (longlong)pwVar9 >> 1);
    local_190 = 0;
    local_178 = (wchar_t *)0x0;
    local_16c = 0;
    local_170 = iVar3 + 1;
    if (iVar3 == 0) {
      local_170 = 0;
    }
    if ((0 < local_170) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0), pwVar6 = local_178,
       0 < local_170)) {
      wcsncpy(local_178,pwVar9,(longlong)iVar3);
      pwVar6[iVar3] = L'\0';
    }
    uVar5 = FText::FromString(local_120,&local_178);
    local_b0 = 4;
    FText::FText(local_a0,uVar5);
    uVar2 = local_190;
    lVar8 = (longlong)(int)local_190;
    local_88 = '\x01';
    iVar3 = (int)local_190 + 1;
    local_190 = CONCAT44(local_190._4_4_,iVar3);
    if (local_190._4_4_ < iVar3) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_198,uVar2 & 0xffffffff);
    }
    puVar7 = (undefined4 *)(lVar8 * 0x30 + local_198);
    *puVar7 = local_b0;
    *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_a4,local_a8);
    *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_a4,local_a8);
    puVar7[2] = local_a8;
    *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_a4,local_a8);
    *(undefined1 *)(puVar7 + 10) = 0;
    if (local_88 != '\0') {
      FText::FText(puVar7 + 4,local_a0);
      *(undefined1 *)(puVar7 + 10) = 1;
      if ((local_88 != '\0') && (local_88 = '\0', local_98 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_98 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)local_98 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_118 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    if (local_178 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    pwVar9 = *(wchar_t **)(param_4 + 0x10);
    local_188 = (wchar_t *)0x0;
    iVar3 = (int)(*(longlong *)(param_4 + 0x12) - (longlong)pwVar9 >> 1);
    local_17c = 0;
    local_180 = iVar3 + 1;
    if (iVar3 == 0) {
      local_180 = 0;
    }
    if ((0 < local_180) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0), pwVar6 = local_188,
       0 < local_180)) {
      wcsncpy(local_188,pwVar9,(longlong)iVar3);
      pwVar6[iVar3] = L'\0';
    }
    uVar5 = FText::FromString(local_108,&local_188);
    local_80 = 4;
    FText::FText(local_70,uVar5);
    uVar2 = local_190;
    lVar8 = (longlong)(int)local_190;
    local_58 = '\x01';
    iVar3 = (int)local_190 + 1;
    local_190 = CONCAT44(local_190._4_4_,iVar3);
    if (local_190._4_4_ < iVar3) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_198,uVar2 & 0xffffffff);
    }
    puVar7 = (undefined4 *)(lVar8 * 0x30 + local_198);
    *puVar7 = local_80;
    *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_74,local_78);
    puVar7[2] = local_78;
    *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_74,local_78);
    *(undefined1 *)(puVar7 + 10) = 0;
    if (local_58 != '\0') {
      FText::FText(puVar7 + 4,local_70);
      *(undefined1 *)(puVar7 + 10) = 1;
      if ((local_58 != '\0') && (local_58 = '\0', local_68 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_68 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    if (local_188 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d8,L"Pre-unary operator {0} cannot operate on {1}",L"ExpressionParser",
                       L"PreUnaryExecutionError");
    uVar5 = FTextFormat::FTextFormat(local_c0,uVar5);
    uVar5 = FText::Format(local_f0,uVar5,&local_198);
    FText::FText(local_138,uVar5);
    FText::FText(param_2,local_138);
    *(undefined1 *)(param_2 + 0x18) = 1;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_130 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_e8 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (&local_198);
  }
  else {
    FUN_141663940(pwVar6,param_2,param_4,local_178);
  }
  return param_2;
}



// FUNCTION 14166e480 FUN_14166e480 body=240 status=ok
// SIG undefined FUN_14166e480(void)

undefined8
FUN_14166e480(undefined4 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  void *local_18;
  int local_10;
  
  if ((param_5 & 0x10000000) == 0) {
    FString::PrintfImpl(&local_18,L"%08X%08X%08X%08X",*param_1,param_1[1],param_1[2],param_1[3]);
    _Src = local_18;
    iVar3 = 0;
    if (local_10 != 0) {
      iVar3 = local_10 + -1;
    }
    if (iVar3 != 0) {
      iVar1 = (int)param_2[1];
      iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar3;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14166e570 FileExists body=57 status=ok
// SIG undefined FileExists(void)

void FPaths::FileExists(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1415c3d50();
  if (*(int *)(param_1 + 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014166e592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))(plVar1,*param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014166e5a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,&DAT_143f3eda8);
  return;
}



// FUNCTION 14166e5b0 FUN_14166e5b0 body=74 status=ok
// SIG undefined FUN_14166e5b0(void)

void FUN_14166e5b0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  plVar1 = (longlong *)FUN_1415c3d50();
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar2 = (undefined2 *)*param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014166e5f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x100))(plVar1,puVar2,puVar3);
  return;
}



// FUNCTION 14166e600 Final body=276 status=ok
// SIG undefined Final(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMD5::Final(void *param_1,longlong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  lVar4 = 0;
  puVar2 = (undefined1 *)((longlong)param_1 + 0x12);
  do {
    local_18[lVar4] = puVar2[-2];
    local_18[lVar4 + 1] = puVar2[-1];
    local_18[lVar4 + 2] = *puVar2;
    local_18[lVar4 + 3] = puVar2[1];
    lVar4 = lVar4 + 4;
    puVar2 = puVar2 + 4;
  } while (lVar4 < 8);
  uVar3 = *(uint *)((longlong)param_1 + 0x10) >> 3 & 0x3f;
  iVar1 = 0x38 - uVar3;
  if (0x37 < uVar3) {
    iVar1 = 0x78 - uVar3;
  }
  Update(param_1,&DAT_1464afd20,iVar1);
  Update(param_1,local_18,8);
  lVar4 = 4;
  puVar2 = (undefined1 *)((longlong)param_1 + 2);
  puVar5 = (undefined1 *)(param_2 + 1);
  do {
    puVar5[-1] = puVar2[-2];
    *puVar5 = puVar2[-1];
    puVar5[1] = *puVar2;
    puVar5[2] = puVar2[1];
    lVar4 = lVar4 + -1;
    puVar2 = puVar2 + 4;
    puVar5 = puVar5 + 4;
  } while (lVar4 != 0);
  ::_guard_xfg_dispatch_icall_nop(param_1,0,0x58);
  return;
}



// FUNCTION 14166e720 Final body=526 status=ok
// SIG undefined Final(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FSHA1::Final(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_38 [32];
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;
  ulonglong uVar5;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar1 = param_1[6];
  local_18 = (undefined1)((uint)uVar1 >> 0x18);
  local_17 = (undefined1)((uint)uVar1 >> 0x10);
  local_16 = (undefined1)((uint)uVar1 >> 8);
  local_15 = (undefined1)uVar1;
  uVar3 = param_1[5];
  local_14 = (undefined1)(uVar3 >> 0x18);
  local_13 = (undefined1)(uVar3 >> 0x10);
  local_12 = (undefined1)(uVar3 >> 8);
  uVar4 = uVar3 >> 3 & 0x3f;
  uVar5 = (ulonglong)uVar4;
  param_1[5] = uVar3 + 8;
  iVar2 = param_1[6];
  local_11 = (undefined1)uVar3;
  if (uVar3 + 8 < 8) {
    iVar2 = iVar2 + 1;
  }
  param_1[6] = iVar2;
  if (uVar4 + 1 < 0x40) {
    uVar3 = 0;
  }
  else {
    uVar3 = -uVar4 + 0x40;
    ::_guard_xfg_dispatch_icall_nop
              ((undefined1 *)((longlong)param_1 + uVar5 + 0x20),&DAT_144cca984,(ulonglong)uVar3);
    Transform(param_1,param_1,param_1 + 8);
    iVar2 = -uVar4 + 0x7f;
    while (iVar2 == 0) {
      Transform(param_1,param_1,&DAT_144cca984 + uVar3);
      uVar3 = uVar3 + 0x40;
      iVar2 = 0x40;
    }
    uVar5 = 0;
  }
  ::_guard_xfg_dispatch_icall_nop
            ((undefined1 *)((longlong)param_1 + uVar5 + 0x20),&DAT_144cca984 + uVar3,
             (ulonglong)(1 - uVar3));
  uVar3 = param_1[5];
  while ((uVar3 & 0x1f8) != 0x1c0) {
    Update(param_1,&DAT_144cca994,1);
    uVar3 = param_1[5];
  }
  Update(param_1,&local_18,8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)((longlong)param_1 + 3);
  *(undefined1 *)((longlong)param_1 + 0x61) = *(undefined1 *)((longlong)param_1 + 2);
  *(char *)((longlong)param_1 + 0x62) = (char)((uint)*param_1 >> 8);
  *(undefined1 *)((longlong)param_1 + 99) = *(undefined1 *)param_1;
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)((longlong)param_1 + 7);
  *(undefined1 *)((longlong)param_1 + 0x65) = *(undefined1 *)((longlong)param_1 + 6);
  *(char *)((longlong)param_1 + 0x66) = (char)((uint)param_1[1] >> 8);
  *(undefined1 *)((longlong)param_1 + 0x67) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((longlong)param_1 + 0xb);
  *(undefined1 *)((longlong)param_1 + 0x69) = *(undefined1 *)((longlong)param_1 + 10);
  *(char *)((longlong)param_1 + 0x6a) = (char)((uint)param_1[2] >> 8);
  *(undefined1 *)((longlong)param_1 + 0x6b) = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)((longlong)param_1 + 0xf);
  *(undefined1 *)((longlong)param_1 + 0x6d) = *(undefined1 *)((longlong)param_1 + 0xe);
  *(char *)((longlong)param_1 + 0x6e) = (char)((uint)param_1[3] >> 8);
  *(undefined1 *)((longlong)param_1 + 0x6f) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)((longlong)param_1 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_1 + 0x12);
  *(char *)((longlong)param_1 + 0x72) = (char)((uint)param_1[4] >> 8);
  *(undefined1 *)((longlong)param_1 + 0x73) = *(undefined1 *)(param_1 + 4);
  return;
}



// FUNCTION 14166e930 FindConfig body=208 status=ok
// SIG undefined FindConfig(void)

longlong FRemoteConfig::FindConfig(longlong *param_1,short *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  longlong local_28;
  ulonglong local_20;
  
  lVar5 = 0;
  local_28 = 0;
  local_20 = 0;
  lVar3 = lVar5;
  if ((param_2 != (short *)0x0) && (lVar3 = 0, *param_2 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_20 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    lVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar2 * 2);
  }
  TSet<TTuple<FString,FRemoteConfigAsyncIOInfo>,TDefaultMapHashableKeyFuncs<FString,FRemoteConfigAsyncIOInfo,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,&local_28);
  lVar1 = lVar5;
  if (local_res8[0] != -1) {
    lVar1 = (longlong)local_res8[0] * 0x848 + *param_1;
  }
  lVar4 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar4 = lVar5;
  }
  if (lVar3 != 0) {
    FMemory::Free(lVar3);
  }
  return lVar4;
}



// FUNCTION 14166ea00 FindId body=210 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FCrc::MemCrc_DEPRECATED(param_3,0x10);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0x20 + *param_1);
        if (((piVar3[1] == param_3[1] && piVar3[2] == param_3[2]) && piVar3[3] == param_3[3]) &&
            *param_3 == *piVar3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = piVar3[6];
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14166eae0 FindId body=242 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FString,FRemoteConfigAsyncIOInfo>,TDefaultMapHashableKeyFuncs<FString,FRemoteConfigAsyncIOInfo,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_3;
    }
    iVar1 = FUN_140438070(puVar6);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar7 = (longlong)iVar1 * 0x848;
        if (*(int *)(param_3 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar7 + 8 + lVar4) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar7 + lVar4);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
        if (iVar2 == 0) {
          *param_2 = iVar1;
          return param_2;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar7 + 0x840 + lVar4);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14166ebe0 FindId body=212 status=ok
// SIG undefined FindId(void)

int * TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindId
                (longlong *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FCrc::MemCrc_DEPRECATED(param_3,0x10);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x18);
        if (((piVar1[1] == param_3[1] &&
             *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x18) == param_3[2]) &&
            piVar1[3] == param_3[3]) && *param_3 == *piVar1) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = piVar1[4];
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14166ecc0 FinishRead body=592 status=ok
// SIG undefined FinishRead(void)

void FRemoteConfig::FinishRead(longlong param_1,short *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  LARGE_INTEGER local_res18 [2];
  undefined2 *local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  ulonglong local_40;
  longlong local_38 [4];
  
  lVar5 = FindConfig();
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x29) == '\0')) {
    cVar4 = FRemoteConfigAsyncTaskManager::IsFinished(&DAT_1464afc30,param_2);
    while (cVar4 == '\0') {
      QueryPerformanceCounter(local_res18);
      if ((double)*(float *)(param_1 + 0x50) <
          ((double)local_res18[0].QuadPart * DAT_1468b02f8 + 16777216.0) - *(double *)(lVar5 + 0x18)
         ) {
        *(undefined1 *)(lVar5 + 0x28) = 1;
        break;
      }
      cVar4 = FRemoteConfigAsyncTaskManager::IsFinished(&DAT_1464afc30,param_2);
    }
    local_40 = 0;
    local_48 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (param_2[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_40 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar8 * 2);
    }
    FRemoteConfigAsyncTaskManager::GetReadData(&DAT_1464afc30,param_2,lVar5);
    *(undefined1 *)(lVar5 + 0x29) = 1;
    puVar6 = (undefined8 *)FUN_14167d0d0(local_38);
    iVar2 = *(int *)(puVar6 + 1);
    local_58 = (undefined2 *)*puVar6;
    *puVar6 = 0;
    local_50 = *(int *)(puVar6 + 1);
    local_4c = *(int *)((longlong)puVar6 + 0xc);
    puVar6[1] = 0;
    iVar10 = local_50;
    if (local_4c < (int)((8 - (uint)(iVar2 != 0)) + local_50)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
      iVar10 = local_50;
    }
    local_50 = (8 - (uint)(iVar10 != 0)) + iVar10;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar10);
    }
    iVar2 = local_50;
    puVar3 = local_58;
    lVar9 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
    pwVar1 = local_58 + lVar9;
    pwVar1[0] = L'C';
    pwVar1[1] = L'o';
    pwVar1[2] = L'n';
    pwVar1[3] = L'f';
    *(undefined4 *)(local_58 + lVar9 + 4) = 0x670069;
    local_58[lVar9 + 6] = 0x2f;
    local_58[lVar9 + 7] = 0;
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    puVar7 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar7 = puVar3;
    }
    FConfigCacheIni::LoadGlobalIniFile(&local_48,lVar5 + 0x2a,0,0,0,1,puVar7);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14166ef10 FUN_14166ef10 body=25 status=ok
// SIG undefined FUN_14166ef10(void)

void FUN_14166ef10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014166ef21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 8) + 0xe0))(lVar1 + 8);
    return;
  }
  return;
}



// FUNCTION 14166ef30 Flush body=136 status=ok
// SIG undefined Flush(void)

void FOutputDeviceRedirector::Flush(longlong param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  
  DVar1 = GetCurrentThreadId();
  if (DVar1 == *(DWORD *)(param_1 + 0x40)) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    }
    FUN_141684f40(param_1,1);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar4 = 0;
      do {
        (**(code **)(**(longlong **)(lVar4 + *(longlong *)(param_1 + 0x30)) + 0x18))();
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x38));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 14166efc0 FlushThreadedLogs body=68 status=ok
// SIG undefined FlushThreadedLogs(void)

void FOutputDeviceRedirector::FlushThreadedLogs(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  FUN_141684f40(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00014166effd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return;
}



// FUNCTION 14166f010 Format body=317 status=ok
// SIG undefined Format(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FString::Format(longlong *param_1,short *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = 0;
  FUN_14166f290(&DAT_1468e3110,local_58,param_2,param_3);
  if ((local_28 == '\0') || (local_40 != '\0')) {
    *param_1 = 0;
    param_1[1] = 0;
    lVar4 = -1;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      iVar3 = (int)lVar4 + 1;
      *(int *)(param_1 + 1) = iVar3;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,param_2,(longlong)iVar3 * 2);
    }
    if ((local_28 != '\0') && (local_28 = '\0', local_38 != 0)) {
      FMemory::Free();
    }
    if ((local_40 != '\0') && (local_40 = 0, local_50 != (longlong *)0x0)) {
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
  else {
    *param_1 = local_38;
    *(undefined4 *)(param_1 + 1) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
  }
  return param_1;
}



// FUNCTION 14166f150 Format body=317 status=ok
// SIG undefined Format(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FString::Format(longlong *param_1,short *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = 0;
  FUN_14166fa00(&DAT_1468e3110,local_58,param_2,param_3);
  if ((local_28 == '\0') || (local_40 != '\0')) {
    *param_1 = 0;
    param_1[1] = 0;
    lVar4 = -1;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      iVar3 = (int)lVar4 + 1;
      *(int *)(param_1 + 1) = iVar3;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,param_2,(longlong)iVar3 * 2);
    }
    if ((local_28 != '\0') && (local_28 = '\0', local_38 != 0)) {
      FMemory::Free();
    }
    if ((local_40 != '\0') && (local_40 = 0, local_50 != (longlong *)0x0)) {
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
  else {
    *param_1 = local_38;
    *(undefined4 *)(param_1 + 1) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
  }
  return param_1;
}



// FUNCTION 14166f290 FUN_14166f290 body=1894 status=ok
// SIG undefined FUN_14166f290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong FUN_14166f290(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                      char param_5)

{
  longlong *plVar1;
  void *pvVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int *piVar17;
  int *piVar18;
  bool bVar19;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8 [2];
  int *local_1a8;
  ulonglong *puStack_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *plStack_178;
  int *local_168;
  ulonglong *puStack_160;
  undefined1 local_158 [16];
  int local_148 [2];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [24];
  undefined1 local_c0 [8];
  longlong *local_b8;
  char local_a8;
  int *local_a0;
  int local_98;
  char local_90;
  int local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  ulonglong local_58 [3];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  lVar16 = 0x48;
  if (param_5 == '\0') {
    lVar16 = 0x18;
  }
  local_1b8[0] = param_4;
  local_198 = param_3;
  ExpressionParser::Lex(local_c0,param_3,lVar16 + param_1);
  if ((local_90 == '\0') || (local_a8 != '\0')) {
    FText::FText(local_130,local_c0);
    plVar4 = local_b8;
    if ((local_a8 != '\0') && (local_a8 = '\0', local_b8 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_b8 + 1;
      lVar16 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar18 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    FText::FText(param_2,local_130);
    *(undefined1 *)(param_2 + 0x18) = 1;
    *(undefined1 *)(param_2 + 0x30) = 0;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_128 + 1;
      lVar16 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar18 = (int *)((longlong)local_128 + 0xc);
        iVar6 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    bVar19 = local_90 != '\0';
    local_90 = 0;
    if (bVar19) {
      local_90 = 0;
      FUN_141661650(&local_a0);
    }
  }
  else if (local_98 == 0) {
    local_1b8[0] = &local_198;
    TValueOrError<FString,FExpressionError>::
    TValueOrError<FString,FExpressionError><wchar_t_const_*_&>(param_2,local_1b8);
    bVar19 = local_90 != '\0';
    local_90 = 0;
    if (bVar19) {
      local_90 = 0;
      FUN_141661650(&local_a0);
    }
  }
  else {
    uVar15 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    iVar6 = (int)(*(longlong *)(local_a0 + (longlong)local_98 * 0x16 + -4) - local_198 >> 1) + 1;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1c8,iVar6);
      uVar15 = local_1c0 & 0xffffffff;
    }
    local_1a8 = local_a0 + (longlong)local_98 * 0x16;
    if (local_a0 != local_1a8) {
      piVar18 = local_a0 + 2;
      do {
        piVar17 = (int *)0x0;
        piVar7 = (int *)FUN_141673ec0();
        piVar13 = piVar18 + 4;
        piVar8 = piVar13;
        if (((piVar7[3] != piVar18[1] || piVar7[2] != *piVar18) || piVar7[1] != piVar18[-1]) ||
            *piVar7 != piVar18[-2]) {
          piVar8 = piVar17;
        }
        iVar6 = (int)uVar15;
        if (piVar8 == (int *)0x0) {
          piVar7 = (int *)FUN_141673840();
          piVar8 = piVar13;
          if (((piVar7[3] != piVar18[1] || piVar7[2] != *piVar18) || piVar7[1] != piVar18[-1]) ||
              *piVar7 != piVar18[-2]) {
            piVar8 = piVar17;
          }
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)FUN_141673b40();
            if (((piVar8[3] != piVar18[1] || piVar8[2] != *piVar18) || piVar8[1] != piVar18[-1]) ||
                *piVar8 != piVar18[-2]) {
              piVar13 = piVar17;
            }
            if (piVar13 != (int *)0x0) {
              iVar12 = *piVar13;
              if ((iVar12 < 0) || ((int)param_4[1] <= iVar12)) {
                if (param_5 != '\0') {
                  local_180 = 0;
                  plStack_178 = (longlong *)0x0;
                  lVar16 = FText::AsNumber(local_d8,(longlong)iVar12,0,&local_180);
                  uVar9 = FInternationalization::
                          ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                    (local_100,L"Invalid argument index: {0}",L"StringFormatter",
                                     L"InvalidArgumentIndex");
                  puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_e8,uVar9);
                  local_88[0] = 4;
                  FText::FText(local_78,lVar16);
                  local_1a8 = local_88;
                  local_60 = '\x01';
                  puStack_1a0 = local_58;
                  local_190 = *puVar10;
                  local_188 = puVar10[1];
                  if (local_188 != 0) {
                    LOCK();
                    *(int *)(local_188 + 8) = *(int *)(local_188 + 8) + 1;
                    UNLOCK();
                  }
                  local_168 = local_1a8;
                  puStack_160 = puStack_1a0;
                  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                          TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_168);
                  uVar9 = FText::Format(local_118,&local_190,uVar9);
                  FText::FText(local_148,uVar9);
                  if (local_110 != (longlong *)0x0) {
                    LOCK();
                    plVar4 = local_110 + 1;
                    lVar5 = *plVar4;
                    *(int *)plVar4 = (int)*plVar4 + -1;
                    UNLOCK();
                    if ((int)lVar5 == 1) {
                      (**(code **)*local_110)(local_110);
                      LOCK();
                      piVar18 = (int *)((longlong)local_110 + 0xc);
                      iVar6 = *piVar18;
                      *piVar18 = *piVar18 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*local_110 + 8))(local_110,1);
                      }
                    }
                  }
                  TArray<FFormatArgumentValue,FDefaultAllocator>::
                  ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_158);
                  if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
                    LOCK();
                    plVar4 = local_70 + 1;
                    lVar5 = *plVar4;
                    *(int *)plVar4 = (int)*plVar4 + -1;
                    UNLOCK();
                    if ((int)lVar5 == 1) {
                      (**(code **)*local_70)(local_70);
                      LOCK();
                      piVar18 = (int *)((longlong)local_70 + 0xc);
                      iVar6 = *piVar18;
                      *piVar18 = *piVar18 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*local_70 + 8))(local_70,1);
                      }
                    }
                  }
                  plVar4 = (longlong *)puVar10[1];
                  if (plVar4 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plVar4 + 1;
                    lVar5 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar5 == 1) {
                      (**(code **)*plVar4)(plVar4);
                      LOCK();
                      piVar18 = (int *)((longlong)plVar4 + 0xc);
                      iVar6 = *piVar18;
                      *piVar18 = *piVar18 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar4 + 8))(plVar4,1);
                      }
                    }
                  }
                  plVar4 = *(longlong **)(lVar16 + 8);
                  if (plVar4 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plVar4 + 1;
                    lVar16 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar16 == 1) {
                      (**(code **)*plVar4)(plVar4);
                      LOCK();
                      piVar18 = (int *)((longlong)plVar4 + 0xc);
                      iVar6 = *piVar18;
                      *piVar18 = *piVar18 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar4 + 8))(plVar4,1);
                      }
                    }
                  }
                  local_1a8 = local_148;
                  TValueOrError<FString,FExpressionError>::
                  TValueOrError<FString,FExpressionError><FText>(param_2,&local_1a8);
                  if (local_140 != (longlong *)0x0) {
                    LOCK();
                    plVar4 = local_140 + 1;
                    lVar16 = *plVar4;
                    *(int *)plVar4 = (int)*plVar4 + -1;
                    UNLOCK();
                    if ((int)lVar16 == 1) {
                      (**(code **)*local_140)(local_140);
                      LOCK();
                      piVar18 = (int *)((longlong)local_140 + 0xc);
                      iVar6 = *piVar18;
                      *piVar18 = *piVar18 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*local_140 + 8))(local_140,1);
                      }
                    }
                  }
                  if (local_f8 != (longlong *)0x0) {
                    LOCK();
                    plVar4 = local_f8 + 1;
                    lVar16 = *plVar4;
                    *(int *)plVar4 = (int)*plVar4 + -1;
                    UNLOCK();
                    if ((int)lVar16 == 1) {
                      (**(code **)*local_f8)(local_f8);
                      LOCK();
                      piVar18 = (int *)((longlong)local_f8 + 0xc);
                      iVar6 = *piVar18;
                      *piVar18 = *piVar18 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*local_f8 + 8))(local_f8,1);
                      }
                    }
                  }
                  plVar4 = plStack_178;
                  if (plStack_178 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plStack_178 + 1;
                    lVar16 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar16 == 1) {
                      (**(code **)*plStack_178)(plStack_178);
                      LOCK();
                      piVar18 = (int *)((longlong)plVar4 + 0xc);
                      iVar6 = *piVar18;
                      *piVar18 = *piVar18 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar4 + 8))(plVar4,1);
                      }
                    }
                  }
                  if (local_1c8 != 0) {
                    FMemory::Free();
                  }
                  TValueOrError<TArray<FExpressionToken,FDefaultAllocator>,FExpressionError>::
                  ~TValueOrError<TArray<FExpressionToken,FDefaultAllocator>,FExpressionError>
                            (local_c0);
                  return param_2;
                }
                pvVar3 = *(void **)(piVar13 + 2);
                iVar12 = (int)(*(longlong *)(piVar13 + 4) - (longlong)pvVar3 >> 1);
                if (iVar12 != 0) {
                  uVar14 = iVar6 + (uint)(iVar6 == 0) + iVar12;
                  local_1c0 = CONCAT44(local_1c0._4_4_,uVar14);
                  if (local_1c0._4_4_ < (int)uVar14) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,uVar15);
                    uVar14 = (uint)local_1c0;
                  }
                  uVar15 = (ulonglong)uVar14;
                  pvVar2 = (void *)(local_1c8 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
                  _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar12 * 2);
                  *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar2) = 0;
                  param_4 = local_1b8[0];
                }
              }
              else {
                AppendToString((longlong)iVar12 * 0x20 + *param_4,&local_1c8);
                uVar15 = local_1c0 & 0xffffffff;
              }
            }
          }
          else {
            iVar12 = *piVar8;
            param_4 = local_1b8[0];
            if ((short)iVar12 != 0) {
              iVar11 = iVar6 + -1;
              if (iVar6 < 1) {
                iVar11 = 0;
              }
              uVar14 = (iVar6 < 1) + 1 + iVar6;
              local_1c0 = CONCAT44(local_1c0._4_4_,uVar14);
              if (local_1c0._4_4_ < (int)uVar14) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8);
                uVar14 = (uint)local_1c0;
              }
              uVar15 = (ulonglong)uVar14;
              *(short *)(local_1c8 + (longlong)iVar11 * 2) = (short)iVar12;
              *(undefined2 *)(local_1c8 + 2 + (longlong)iVar11 * 2) = 0;
              param_4 = local_1b8[0];
            }
          }
        }
        else {
          iVar12 = piVar8[6];
          pvVar3 = *(void **)piVar8;
          if (iVar12 != 0) {
            uVar14 = iVar6 + (uint)(iVar6 == 0) + iVar12;
            local_1c0 = CONCAT44(local_1c0._4_4_,uVar14);
            if (local_1c0._4_4_ < (int)uVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,uVar15);
              uVar14 = (uint)local_1c0;
            }
            uVar15 = (ulonglong)uVar14;
            pvVar2 = (void *)(local_1c8 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar2,pvVar3,(longlong)iVar12 * 2);
            *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar2) = 0;
            param_4 = local_1b8[0];
          }
        }
        piVar13 = piVar18 + 0x14;
        piVar18 = piVar18 + 0x16;
      } while (piVar13 != local_1a8);
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
    FString::FString(param_2 + 0x20,&local_1c8);
    *(undefined1 *)(param_2 + 0x30) = 1;
    if (local_1c8 != 0) {
      FMemory::Free();
    }
    bVar19 = local_90 != '\0';
    local_90 = 0;
    if (bVar19) {
      local_90 = 0;
      FUN_141661650(&local_a0);
    }
  }
  if ((local_a8 != '\0') && (local_b8 != (longlong *)0x0)) {
    local_a8 = 0;
    LOCK();
    plVar4 = local_b8 + 1;
    lVar16 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar18 = (int *)((longlong)local_b8 + 0xc);
      iVar6 = *piVar18;
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14166fa00 FUN_14166fa00 body=2738 status=ok
// SIG undefined FUN_14166fa00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14166fa00(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                      char param_5)

{
  void *pvVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  uint *puVar24;
  undefined1 auStack_258 [32];
  longlong local_238;
  undefined8 local_230;
  wchar_t *local_228;
  int local_220;
  undefined4 local_21c;
  longlong *local_218;
  ulonglong *puStack_210;
  uint local_208;
  uint uStack_204;
  uint *puStack_200;
  undefined4 local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  int local_1b0;
  int local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [16];
  undefined1 local_c0 [24];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  longlong *local_88;
  int local_80;
  char local_78;
  undefined4 local_70 [4];
  undefined1 local_60 [8];
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  lVar13 = param_1 + 0x30;
  if (param_5 == '\0') {
    lVar13 = param_1;
  }
  local_1e8 = param_3;
  local_1e0 = param_2;
  ExpressionParser::Lex(local_a8,param_3,lVar13);
  if ((local_78 == '\0') || (local_90 != '\0')) {
    FText::FText(local_118,local_a8);
    plVar23 = local_a0;
    if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar17 = local_a0 + 1;
      lVar13 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar11 = (int *)((longlong)plVar23 + 0xc);
        iVar9 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar23 + 8))(plVar23,1);
        }
      }
    }
    FText::FText(param_2,local_118);
    *(undefined1 *)(param_2 + 0x18) = 1;
    *(undefined1 *)(param_2 + 0x30) = 0;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar23 = local_110 + 1;
      lVar13 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar11 = (int *)((longlong)local_110 + 0xc);
        iVar9 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
    if (local_78 != '\0') {
      local_78 = '\0';
      FUN_141661650(&local_88);
    }
    if ((local_90 != '\0') && (local_90 = 0, local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar23 = local_a0 + 1;
      lVar13 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar11 = (int *)((longlong)local_a0 + 0xc);
        iVar9 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  else {
    if (local_80 == 0) {
      local_218 = &local_1e8;
      TValueOrError<FString,FExpressionError>::
      TValueOrError<FString,FExpressionError><wchar_t_const_*_&>(param_2,&local_218);
      if (local_78 != '\0') {
        local_78 = '\0';
        FUN_141661650(&local_88);
      }
      plVar23 = local_a0;
    }
    else {
      uVar22 = 0;
      local_238 = 0;
      local_230 = 0;
      iVar9 = (int)(local_88[(longlong)local_80 * 0xb + -2] - local_1e8 >> 1) + 1;
      if (0 < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_238,iVar9);
        uVar22 = local_230 & 0xffffffff;
      }
      local_218 = local_88 + (longlong)local_80 * 0xb;
      if (local_88 != local_218) {
        plVar23 = local_88 + 1;
LAB_14166fb50:
        plVar17 = (longlong *)0x0;
        piVar11 = (int *)FUN_141673ec0();
        plVar12 = plVar23 + 2;
        if (((piVar11[2] != (int)*plVar23 || piVar11[3] != *(int *)((longlong)plVar23 + 4)) ||
            piVar11[1] != *(int *)((longlong)plVar23 + -4)) || (int)plVar23[-1] != *piVar11) {
          plVar12 = plVar17;
        }
        iVar9 = (int)uVar22;
        if (plVar12 == (longlong *)0x0) {
          piVar11 = (int *)FUN_141673840();
          plVar12 = plVar23 + 2;
          if (((piVar11[2] != (int)*plVar23 || piVar11[3] != *(int *)((longlong)plVar23 + 4)) ||
              piVar11[1] != *(int *)((longlong)plVar23 + -4)) || *piVar11 != (int)plVar23[-1]) {
            plVar12 = plVar17;
          }
          if (plVar12 == (longlong *)0x0) {
            piVar11 = (int *)FUN_1416738c0();
            if ((((piVar11[2] == (int)*plVar23 && piVar11[3] == *(int *)((longlong)plVar23 + 4)) &&
                 piVar11[1] == *(int *)((longlong)plVar23 + -4)) && (int)plVar23[-1] == *piVar11) &&
               (puVar15 = (undefined8 *)plVar23[2], puVar15 != (undefined8 *)0x0)) {
              uVar21 = *(uint *)(param_4 + 5);
              puVar2 = (uint *)(param_4 + 2);
              uStack_204 = 1;
              local_208 = 0;
              uStack_1f4 = 0;
              uStack_1f0 = 0;
              if (uVar21 != 0) {
                puVar24 = (uint *)param_4[4];
                if ((uint *)param_4[4] == (uint *)0x0) {
                  puVar24 = puVar2;
                }
                uVar3 = *puVar24;
                plVar12 = plVar17;
                while (uVar3 == 0) {
                  iVar10 = (int)plVar17;
                  uStack_1f0 = (int)plVar12 + 0x20;
                  plVar12 = (longlong *)(ulonglong)uStack_1f0;
                  local_208 = iVar10 + 1;
                  plVar17 = (longlong *)(ulonglong)local_208;
                  if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
                  goto LAB_14166fd77;
                  uVar3 = puVar24[(longlong)iVar10 + 1];
                }
                uStack_204 = -uVar3 & uVar3;
                local_1b0 = 0x1f;
                if (uStack_204 != 0) {
                  for (; uStack_204 >> local_1b0 == 0; local_1b0 = local_1b0 + -1) {
                  }
                }
                if (uStack_204 == 0) {
                  iVar10 = 0x20;
                }
                else {
                  iVar10 = 0x1f - local_1b0;
                }
                uStack_1f4 = (uStack_1f0 - iVar10) + 0x1f;
                if ((int)uVar21 < (int)uStack_1f4) {
LAB_14166fd77:
                  uStack_1f4 = uVar21;
                }
              }
              local_1f8 = 0xffffffff;
              uVar3 = *(uint *)(param_4 + 5);
              uStack_1d0 = CONCAT44(uStack_204,local_208);
              uStack_190 = CONCAT44(uStack_1f4,0xffffffff);
              uStack_1b8 = CONCAT44(uStack_1ec,uStack_1f0);
              uVar19 = -1 << ((byte)uVar3 & 0x1f);
              uVar16 = uVar3 & 0xffffffe0;
              iVar10 = (int)uVar3 >> 5;
              local_1d8._0_4_ = SUB84(param_4,0);
              local_1a8 = (undefined4)local_1d8;
              local_1d8._4_4_ = (undefined4)((ulonglong)param_4 >> 0x20);
              local_1d8 = CONCAT44(local_1d8._4_4_,iVar10);
              uStack_1c8 = CONCAT44(uVar3,uVar19);
              uStack_1c0 = CONCAT44(uStack_1f4,uVar3) & 0xffffffffffffffe0;
              uStack_1a4 = local_1d8._4_4_;
              uStack_1a0 = local_208;
              uStack_19c = uStack_204;
              puStack_200 = puVar2;
              local_198 = puVar2;
              local_188 = uStack_1b8;
              uVar14 = uStack_1c8;
              if (uVar3 != uVar21) {
                puVar24 = (uint *)param_4[4];
                if ((uint *)param_4[4] == (uint *)0x0) {
                  puVar24 = puVar2;
                }
                uVar19 = puVar24[iVar10] & uVar19;
                while (uVar19 == 0) {
                  uVar16 = uVar16 + 0x20;
                  uVar6 = uStack_1c0 >> 0x20;
                  uStack_1c0 = CONCAT44((int)uVar6,uVar16);
                  local_1d8._4_4_ = (undefined4)((ulonglong)local_1d8 >> 0x20);
                  local_1d8 = CONCAT44(local_1d8._4_4_,iVar10 + 1);
                  if ((int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 <= iVar10)
                  goto LAB_14166fe5e;
                  uVar19 = puVar24[(longlong)iVar10 + 1];
                  uStack_1c8 = 0xffffffff;
                  iVar10 = iVar10 + 1;
                }
                uVar19 = -uVar19 & uVar19;
                local_1ac = 0x1f;
                if (uVar19 != 0) {
                  for (; uVar19 >> local_1ac == 0; local_1ac = local_1ac + -1) {
                  }
                }
                if (uVar19 == 0) {
                  iVar10 = 0x20;
                }
                else {
                  iVar10 = 0x1f - local_1ac;
                }
                iVar10 = (uVar16 - iVar10) + 0x1f;
                uStack_1c8 = CONCAT44(iVar10,(undefined4)uStack_1c8);
                uVar14 = uStack_1c8;
                if ((int)uVar21 < iVar10) {
LAB_14166fe5e:
                  uStack_1c8 = CONCAT44(uVar21,(undefined4)uStack_1c8);
                  uVar14 = uStack_1c8;
                }
              }
              do {
                if (((uStack_190._4_4_ == (int)((ulonglong)uVar14 >> 0x20)) && (local_198 == puVar2)
                    ) && ((longlong *)CONCAT44(uStack_1a4,local_1a8) == param_4))
                goto LAB_14166fef0;
                puVar20 = (undefined8 *)
                          ((longlong)uStack_190._4_4_ * 0x38 +
                          *(longlong *)CONCAT44(uStack_1a4,local_1a8));
                iVar4 = *(int *)(puVar20 + 1);
                iVar10 = iVar4 + -1;
                if (iVar4 == 0) {
                  iVar10 = 0;
                }
                if (iVar10 == *(int *)(puVar15 + 6)) {
                  if (iVar4 == 0) {
                    pwVar18 = L"";
                  }
                  else {
                    pwVar18 = (wchar_t *)*puVar20;
                  }
                  iVar10 = _wcsnicmp((wchar_t *)*puVar15,pwVar18,(longlong)*(int *)(puVar15 + 6));
                  if (iVar10 == 0) goto LAB_14166fed7;
                }
                uStack_190 = CONCAT44(uStack_190._4_4_,(uint)uStack_190 & ~uStack_19c);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1a0);
              } while( true );
            }
          }
          else {
            lVar13 = *plVar12;
            if ((short)lVar13 != 0) {
              iVar10 = iVar9 + -1;
              if (iVar9 < 1) {
                iVar10 = 0;
              }
              uVar21 = (iVar9 < 1) + 1 + iVar9;
              local_230 = CONCAT44(local_230._4_4_,uVar21);
              if (local_230._4_4_ < (int)uVar21) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238);
                uVar21 = (uint)local_230;
              }
              uVar22 = (ulonglong)uVar21;
              *(short *)(local_238 + (longlong)iVar10 * 2) = (short)lVar13;
              *(undefined2 *)(local_238 + 2 + (longlong)iVar10 * 2) = 0;
            }
          }
        }
        else {
          iVar10 = (int)plVar12[3];
          pvVar5 = (void *)*plVar12;
          if (iVar10 != 0) {
            uVar21 = iVar10 + (uint)(iVar9 == 0) + iVar9;
            local_230 = CONCAT44(local_230._4_4_,uVar21);
            if (local_230._4_4_ < (int)uVar21) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar22);
              uVar21 = (uint)local_230;
            }
            uVar22 = (ulonglong)uVar21;
            pvVar1 = (void *)(local_238 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,pvVar5,(longlong)iVar10 * 2);
            *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
          }
        }
        goto LAB_14166ff6f;
      }
LAB_14166ff87:
      *(undefined1 *)(param_2 + 0x18) = 0;
      FString::FString(param_2 + 0x20,&local_238);
      *(undefined1 *)(param_2 + 0x30) = 1;
      if (local_238 != 0) {
        FMemory::Free();
      }
      if (local_78 != '\0') {
        local_78 = '\0';
        FUN_141661650(&local_88);
      }
      plVar23 = local_a0;
    }
    if ((local_90 != '\0') && (plVar23 != (longlong *)0x0)) {
LAB_141670343:
      local_90 = 0;
      LOCK();
      plVar17 = plVar23 + 1;
      lVar13 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar11 = (int *)((longlong)plVar23 + 0xc);
        iVar9 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar23 + 8))(plVar23,1);
        }
      }
    }
  }
  return param_2;
LAB_14166fed7:
  if (puVar20 + 2 == (undefined8 *)0x0) {
LAB_14166fef0:
    if (param_5 != '\0') {
      pwVar18 = (wchar_t *)*puVar15;
      local_228 = (wchar_t *)0x0;
      iVar9 = (int)(puVar15[1] - (longlong)pwVar18 >> 1);
      local_21c = 0;
      local_220 = iVar9 + 1;
      if (iVar9 == 0) {
        local_220 = 0;
      }
      if ((0 < local_220) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0), pwVar8 = local_228,
         0 < local_220)) {
        wcsncpy(local_228,pwVar18,(longlong)iVar9);
        pwVar8[iVar9] = L'\0';
      }
      lVar13 = FText::FromString(local_c0,&local_228);
      uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_e8,L"Undefined format token: {0}",L"StringFormatter",
                          L"UndefinedFormatSpecifier");
      puVar15 = (undefined8 *)FTextFormat::FTextFormat(local_d0,uVar14);
      local_70[0] = 4;
      FText::FText(local_60,lVar13);
      local_218 = (longlong *)local_70;
      local_48 = '\x01';
      puStack_210 = &local_40;
      local_180 = *puVar15;
      local_178 = puVar15[1];
      if (local_178 != 0) {
        LOCK();
        *(int *)(local_178 + 8) = *(int *)(local_178 + 8) + 1;
        UNLOCK();
      }
      local_168 = local_218;
      uStack_160 = puStack_210;
      uVar14 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_168);
      uVar14 = FText::Format(local_100,&local_180,uVar14);
      FText::FText(local_130,uVar14);
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar23 = local_f8 + 1;
        lVar7 = *plVar23;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar11 = (int *)((longlong)local_f8 + 0xc);
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_f8 + 8))(local_f8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_158);
      if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
        LOCK();
        plVar23 = local_58 + 1;
        lVar7 = *plVar23;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar11 = (int *)((longlong)local_58 + 0xc);
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      plVar23 = (longlong *)puVar15[1];
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar23 + 1;
        lVar7 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar11 = (int *)((longlong)plVar23 + 0xc);
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
          }
        }
      }
      plVar23 = *(longlong **)(lVar13 + 8);
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar23 + 1;
        lVar13 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar11 = (int *)((longlong)plVar23 + 0xc);
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
          }
        }
      }
      FText::FText(local_148,local_130);
      param_2 = local_1e0;
      FText::FText(local_1e0,local_148);
      *(undefined1 *)(param_2 + 0x18) = 1;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar23 = local_140 + 1;
        lVar13 = *plVar23;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar11 = (int *)((longlong)local_140 + 0xc);
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_140 + 8))(local_140,1);
          }
        }
      }
      *(undefined1 *)(param_2 + 0x30) = 0;
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar23 = local_128 + 1;
        lVar13 = *plVar23;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar11 = (int *)((longlong)local_128 + 0xc);
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_128 + 8))(local_128,1);
          }
        }
      }
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar23 = local_e0 + 1;
        lVar13 = *plVar23;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar11 = (int *)((longlong)local_e0 + 0xc);
          iVar9 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
      if (local_228 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      if (local_238 != 0) {
        FMemory::Free();
      }
      if (local_78 != '\0') {
        local_78 = '\0';
        FUN_141661650(&local_88);
      }
      if (local_90 == '\0') {
        return param_2;
      }
      plVar23 = local_a0;
      if (local_a0 == (longlong *)0x0) {
        return param_2;
      }
      goto LAB_141670343;
    }
    pvVar5 = (void *)puVar15[3];
    iVar10 = (int)(puVar15[4] - (longlong)pvVar5 >> 1);
    if (iVar10 != 0) {
      uVar21 = iVar9 + (uint)(iVar9 == 0) + iVar10;
      local_230 = CONCAT44(local_230._4_4_,uVar21);
      if (local_230._4_4_ < (int)uVar21) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar22);
        uVar21 = (uint)local_230;
      }
      uVar22 = (ulonglong)uVar21;
      pvVar1 = (void *)(local_238 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar5,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar10 * 2) = 0;
    }
  }
  else {
    AppendToString(puVar20 + 2,&local_238);
    uVar22 = local_230 & 0xffffffff;
  }
LAB_14166ff6f:
  plVar17 = plVar23 + 10;
  plVar23 = plVar23 + 0xb;
  param_2 = local_1e0;
  if (plVar17 == local_218) goto LAB_14166ff87;
  goto LAB_14166fb50;
}



// FUNCTION 1416704c0 FUN_1416704c0 body=1348 status=ok
// SIG undefined FUN_1416704c0(void)

longlong *
FUN_1416704c0(longlong *param_1,char param_2,longlong *param_3,void *param_4,int param_5,
             double param_6)

{
  void *pvVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  LARGE_INTEGER *pLVar12;
  void *pvVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  undefined2 *puVar19;
  LARGE_INTEGER local_res8;
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  if ((DAT_1464aaaa0 == '\0') || (local_res8.QuadPart = 0, *param_3 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_5 == 1) {
    uVar9 = FDateTime::UtcNow(&local_res8);
    puVar10 = (undefined8 *)FUN_14165adf0(uVar9,local_38,L"%Y.%m.%d-%H.%M.%S:%s");
    if (*(int *)(puVar10 + 1) == 0) {
      puVar19 = &DAT_143f3eda8;
    }
    else {
      puVar19 = (undefined2 *)*puVar10;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = DAT_1468c21b0;
    lVar14 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar4,8);
    uVar11 = (DAT_1468c21b0 - lVar14 >> 1) + lVar14;
    pwVar15 = L"[%s][%3llu]";
LAB_14167068e:
    FString::PrintfImpl(&local_48,pwVar15,puVar19,DAT_1468c21b0 + (uVar11 >> 9) * -1000);
    if (param_1 == &local_48) {
      lVar14 = local_38[0];
      if (local_48 != 0) {
        FMemory::Free();
        lVar14 = local_38[0];
      }
    }
    else {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = local_48;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_40;
      uVar6 = local_40._4_4_;
      local_40 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
      local_48 = 0;
      lVar14 = local_38[0];
    }
LAB_1416706ea:
    if (lVar14 != 0) {
      FMemory::Free();
    }
  }
  else if (param_5 == 2) {
    if (param_6 == -1.0) {
      QueryPerformanceCounter(&local_res8);
      param_6 = ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = DAT_1468c21b0;
    lVar14 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar3,8);
    FString::PrintfImpl(&local_48,L"[%07.2f][%3llu]",param_6,
                        DAT_1468c21b0 + ((DAT_1468c21b0 - lVar14 >> 1) + lVar14 >> 9) * -1000);
    lVar14 = local_48;
    if (param_1 == &local_48) goto LAB_1416706ea;
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = local_48;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_40._4_4_;
  }
  else if (param_5 == 3) {
    uVar9 = FDateTime::Now(&local_res8);
    puVar10 = (undefined8 *)FUN_14165adf0(uVar9,local_38,L"%Y.%m.%d-%H.%M.%S:%s");
    if (*(int *)(puVar10 + 1) == 0) {
      puVar19 = &DAT_143f3eda8;
    }
    else {
      puVar19 = (undefined2 *)*puVar10;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = DAT_1468c21b0;
    lVar14 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar2,8);
    uVar11 = (DAT_1468c21b0 - lVar14 >> 1) + lVar14;
    pwVar15 = L"[%s][%3llu]";
    goto LAB_14167068e;
  }
  lVar14 = -1;
  if (bVar5) {
    pLVar12 = (LARGE_INTEGER *)FName::ToString(param_3,local_38);
    local_res8 = *pLVar12;
    iVar17 = pLVar12[1].s.LowPart - 1;
    if (pLVar12[1].s.LowPart == 0) {
      iVar17 = 0;
    }
    if (iVar17 != 0) {
      iVar8 = (int)param_1[1];
      iVar7 = (uint)(iVar8 == 0) + iVar17 + iVar8;
      *(int *)(param_1 + 1) = iVar7;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      pvVar13 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar13,(void *)local_res8,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)pvVar13 + (longlong)iVar17 * 2) = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    iVar17 = (int)param_1[1];
    iVar8 = (3 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    lVar18 = *param_1;
    lVar16 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
    *(undefined4 *)(lVar18 + lVar16 * 2) = 0x20003a;
    *(undefined2 *)(lVar18 + 4 + lVar16 * 2) = 0;
    if ((DAT_1464aaaa1 == '\0') || (param_2 == '\x05')) goto LAB_14167097b;
    pvVar13 = (void *)FUN_141686ae0();
    lVar18 = -1;
    do {
      lVar18 = lVar18 + 1;
    } while (*(short *)((longlong)pvVar13 + lVar18 * 2) != 0);
    iVar17 = (int)lVar18;
    if (iVar17 != 0) {
      iVar8 = (int)param_1[1];
      iVar7 = (uint)(iVar8 == 0) + iVar17 + iVar8;
      *(int *)(param_1 + 1) = iVar7;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      pvVar1 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar13,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar17 * 2) = 0;
    }
    iVar17 = (int)param_1[1];
    iVar8 = (3 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    lVar18 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
  }
  else {
    if ((DAT_1464aaaa1 == '\0') || (param_2 == '\x05')) goto LAB_14167097b;
    pvVar13 = (void *)FUN_141686ae0();
    lVar18 = -1;
    do {
      lVar18 = lVar18 + 1;
    } while (*(short *)((longlong)pvVar13 + lVar18 * 2) != 0);
    iVar17 = (int)lVar18;
    if (iVar17 != 0) {
      iVar8 = (int)param_1[1];
      iVar7 = (uint)(iVar8 == 0) + iVar17 + iVar8;
      *(int *)(param_1 + 1) = iVar7;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      pvVar1 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar13,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar17 * 2) = 0;
    }
    iVar17 = (int)param_1[1];
    iVar8 = (3 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    lVar18 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
  }
  lVar16 = *param_1;
  *(undefined4 *)(lVar16 + lVar18 * 2) = 0x20003a;
  *(undefined2 *)(lVar16 + 4 + lVar18 * 2) = 0;
LAB_14167097b:
  if (param_4 != (void *)0x0) {
    do {
      lVar14 = lVar14 + 1;
    } while (*(short *)((longlong)param_4 + lVar14 * 2) != 0);
    iVar17 = (int)lVar14;
    if (iVar17 != 0) {
      iVar8 = (int)param_1[1];
      iVar7 = (uint)(iVar8 == 0) + iVar17 + iVar8;
      *(int *)(param_1 + 1) = iVar7;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      pvVar13 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar13,param_4,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)pvVar13 + (longlong)iVar17 * 2) = 0;
    }
  }
  return param_1;
}



// FUNCTION 141670a10 FreeChunks body=377 status=ok
// SIG undefined FreeChunks(void)

void FMemStackBase::FreeChunks(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  
  plVar1 = (longlong *)param_1[2];
  while (plVar1 != param_2) {
    param_1[2] = *plVar1;
    if ((int)plVar1[1] == 0xfff0) {
      uVar3 = FLockFreeLinkPolicy::AllocLockFreeLink();
      lVar4 = 0;
      if (uVar3 != 0) {
        lVar4 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
      }
      *(longlong **)(lVar4 + 8) = plVar1;
      do {
        LOCK();
        if (DAT_1468e3038 == 0) {
          DAT_1468e3038 = 0;
        }
        uVar2 = DAT_1468e3038;
        UNLOCK();
        uVar5 = (DAT_1468e3038 & 0xfffffffffc000000) + 0x4000000;
        if (uVar5 < (DAT_1468e3038 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        lVar4 = 0;
        if (uVar3 != 0) {
          lVar4 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(lVar4 + 0x10) = (uint)uVar2 & 0x3ffffff;
        LOCK();
        bVar6 = uVar2 != DAT_1468e3038;
        uVar2 = uVar3 | uVar5;
        if (bVar6) {
          uVar2 = DAT_1468e3038;
        }
        DAT_1468e3038 = uVar2;
        UNLOCK();
      } while (bVar6);
    }
    else {
      FMemory::Free(plVar1);
    }
    plVar1 = (longlong *)param_1[2];
  }
  lVar4 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  if (lVar4 != 0) {
    *param_1 = lVar4 + 0x10;
    param_1[1] = (longlong)*(int *)(lVar4 + 8) + lVar4 + 0x10;
  }
  return;
}



// FUNCTION 141670b90 GameAgnosticSavedDir body=237 status=ok
// SIG undefined GameAgnosticSavedDir(void)

longlong * FPaths::GameAgnosticSavedDir(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)EngineUserDir(local_18);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((7 - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (7 - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  *(undefined8 *)(local_28 + lVar2 * 2) = 0x65007600610053;
  lVar2 = local_28 + lVar2 * 2;
  *(undefined4 *)(lVar2 + 8) = 0x2f0064;
  *(undefined2 *)(lVar2 + 0xc) = 0;
  *param_1 = local_28;
  *(int *)(param_1 + 1) = local_20;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141670c80 GameSavedDir body=679 status=ok
// SIG undefined GameSavedDir(void)

longlong * UE4Paths_Private::GameSavedDir(longlong *param_1)

{
  void *_Dst;
  longlong lVar1;
  wchar_t *_Src;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int iVar8;
  wchar_t *pwVar9;
  int iVar10;
  wchar_t *local_38;
  undefined8 local_30;
  
  FUN_14167d250();
  iVar8 = 0;
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  uVar5 = FCommandLine::Get();
  cVar2 = FParse::Value(uVar5,L"-saveddirsuffix=",&local_38,1);
  _Src = local_38;
  if (cVar2 == '\0') {
    iVar8 = (int)param_1[1];
    iVar4 = (7 - (uint)(iVar8 != 0)) + iVar8;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
    }
    lVar7 = (longlong)iVar8 - (ulonglong)(iVar8 != 0);
    lVar1 = *param_1;
    *(undefined8 *)(lVar1 + lVar7 * 2) = 0x65007600610053;
    lVar1 = lVar1 + lVar7 * 2;
    *(undefined4 *)(lVar1 + 8) = 0x2f0064;
    *(undefined2 *)(lVar1 + 0xc) = 0;
  }
  else {
    pwVar9 = local_38;
    iVar10 = (int)local_30;
    iVar4 = 0;
    while( true ) {
      iVar3 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar3 = 0;
      }
      if (iVar3 <= iVar8) break;
      pwVar6 = ::_guard_xfg_dispatch_icall_nop
                         (L"_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",*pwVar9
                         );
      iVar3 = iVar4 + 1;
      if (pwVar6 == (wchar_t *)0x0) {
        iVar3 = (iVar10 - iVar8) + -1;
        if (iVar3 != 0) {
          ::_guard_xfg_dispatch_icall_nop(_Src + iVar8,_Src + (iVar4 + 1),(longlong)iVar3 * 2);
        }
        iVar10 = iVar10 + -1;
        iVar8 = iVar8 + -1;
        pwVar9 = pwVar9 + -1;
        iVar3 = iVar4;
      }
      iVar8 = iVar8 + 1;
      pwVar9 = pwVar9 + 1;
      iVar4 = iVar3;
    }
    if (1 < iVar10) {
      iVar8 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar8 = 0;
      }
      local_30._0_4_ = iVar8 + 7;
      local_38 = (wchar_t *)0x0;
      local_30._4_4_ = 0;
      if (0 < (int)local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      iVar10 = local_30._4_4_;
      iVar4 = (int)local_30;
      pwVar9 = local_38;
      builtin_wcsncpy(local_38,L"Saved_",6);
      ::_guard_xfg_dispatch_icall_nop(local_38 + 6,_Src,(longlong)iVar8 * 2);
      pwVar9[(longlong)iVar8 + 6] = L'\0';
      local_38 = pwVar9;
      local_30._4_4_ = iVar10;
      if (iVar10 < (int)(iVar4 + 1 + (uint)(iVar4 == 0))) {
        local_30._0_4_ = iVar4;
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
        iVar4 = (int)local_30;
      }
      iVar8 = (2 - (uint)(iVar4 != 0)) + iVar4;
      local_30 = CONCAT44(local_30._4_4_,iVar8);
      if (local_30._4_4_ < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar4);
        iVar8 = (int)local_30;
      }
      pwVar9 = local_38;
      local_38[(longlong)iVar4 - (ulonglong)(iVar4 != 0)] = L'/';
      (local_38 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[1] = L'\0';
      if ((iVar8 != 0) && (iVar8 = iVar8 + -1, iVar8 != 0)) {
        iVar4 = (int)param_1[1];
        iVar10 = (uint)(iVar4 == 0) + iVar8 + iVar4;
        *(int *)(param_1 + 1) = iVar10;
        if (*(int *)((longlong)param_1 + 0xc) < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(_Dst,pwVar9,(longlong)iVar8 * 2);
        *(undefined2 *)((longlong)_Dst + (longlong)iVar8 * 2) = 0;
      }
      if (pwVar9 != (wchar_t *)0x0) {
        FMemory::Free(pwVar9);
      }
    }
  }
  if (_Src != (wchar_t *)0x0) {
    FMemory::Free(_Src);
  }
  return param_1;
}



// FUNCTION 141670f30 FUN_141670f30 body=961 status=ok
// SIG undefined FUN_141670f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141670f30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  short *psVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  uint uVar12;
  wchar_t *_Source;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  uint local_110;
  int local_10c;
  longlong local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  uint local_f0;
  uint local_ec;
  wchar_t *local_e8;
  ulonglong local_e0;
  wchar_t *local_d8;
  int local_d0;
  int local_cc;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 local_60 [8];
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  psVar3 = *(short **)(param_2 + 8);
  pwVar11 = (wchar_t *)0x0;
  local_108 = 0;
  local_100 = 0;
  local_e8 = (wchar_t *)0x0;
  local_e0 = 0;
  lVar9 = -1;
  iVar5 = 0;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    do {
      lVar9 = lVar9 + 1;
    } while (psVar3[lVar9] != 0);
    uVar8 = (int)lVar9 + 1;
    local_e0 = (ulonglong)uVar8;
    uVar12 = uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      uVar12 = (uint)local_e0;
    }
    _Source = local_e8;
    FGenericPlatformString::Memcpy(local_e8,psVar3,(longlong)(int)uVar8 * 2);
    if (uVar12 != 0) {
      iVar5 = uVar12 - 1;
      goto LAB_141670fe3;
    }
  }
  _Source = L"";
LAB_141670fe3:
  local_f8 = (wchar_t *)0x0;
  local_ec = 0;
  if (10 < iVar5) {
    iVar5 = 10;
  }
  pwVar10 = (wchar_t *)(ulonglong)(iVar5 + 1);
  if (iVar5 == 0) {
    pwVar10 = pwVar11;
  }
  local_f0 = (uint)pwVar10;
  local_118 = pwVar11;
  if (0 < (int)local_f0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    local_118 = local_f8;
    pwVar10 = (wchar_t *)(ulonglong)local_f0;
    if (0 < (int)local_f0) {
      wcsncpy(local_f8,_Source,(longlong)iVar5);
      local_118[iVar5] = L'\0';
    }
    pwVar11 = (wchar_t *)(ulonglong)local_ec;
  }
  local_110 = (uint)pwVar10;
  local_10c = (int)pwVar11;
  if (local_10c < (int)(local_110 + 3 + (uint)(local_110 == 0))) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_118);
    pwVar10 = (wchar_t *)(ulonglong)local_110;
  }
  iVar5 = (int)pwVar10;
  local_110 = (4 - (uint)(iVar5 != 0)) + iVar5;
  if (local_10c < (int)local_110) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,pwVar10);
  }
  builtin_wcsncpy(local_118 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)),L"...",4);
  local_d8 = local_118;
  local_d0 = local_110;
  local_cc = local_10c;
  uVar6 = FText::FromString(local_c8,&local_d8);
  local_70 = 4;
  FText::FText(local_60,uVar6);
  uVar4 = local_100;
  lVar9 = (longlong)(int)local_100;
  local_48 = '\x01';
  iVar5 = (int)local_100 + 1;
  local_100 = CONCAT44(local_100._4_4_,iVar5);
  if (local_100._4_4_ < iVar5) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_108,uVar4 & 0xffffffff);
  }
  puVar7 = (undefined4 *)(lVar9 * 0x30 + local_108);
  *puVar7 = local_70;
  *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_64,local_68);
  puVar7[2] = local_68;
  *(ulonglong *)(puVar7 + 2) = CONCAT44(uStack_64,local_68);
  *(undefined1 *)(puVar7 + 10) = 0;
  if (local_48 != '\0') {
    FText::FText(puVar7 + 4,local_60);
    *(undefined1 *)(puVar7 + 10) = 1;
    if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  if (local_d8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_e8 != (wchar_t *)0x0) {
    FMemory::Free(local_e8);
  }
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_98,L"Invalid token definition at \'{0}\'",L"StringFormatter",
                     L"InvalidTokenDefinition");
  uVar6 = FTextFormat::FTextFormat(local_80,uVar6);
  uVar6 = FText::Format(local_b0,uVar6,&local_108);
  FText::FText(param_1,uVar6);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (&local_108);
  return param_1;
}



// FUNCTION 141671300 GenerateNextBitmapFilename body=459 status=ok
// SIG undefined GenerateNextBitmapFilename(void)

undefined8
FFileHelper::GenerateNextBitmapFilename
          (undefined8 *param_1,undefined8 *param_2,undefined2 **param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  undefined2 *local_38;
  ulonglong local_30;
  
  iVar6 = 0;
  if (param_3 != &local_38) {
    if (*param_3 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *param_3 = (undefined2 *)0x0;
    param_3[1] = (undefined2 *)0x0;
  }
  uVar9 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_1;
  }
  FString::PrintfImpl(&local_38,L"%s%05i.%s",puVar5,DAT_1468e31dc,puVar4);
  puVar4 = local_38;
  puVar5 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar5 = local_38;
  }
  cVar3 = (**(code **)(*param_4 + 0x48))(param_4,puVar5);
  if (cVar3 != '\0') {
    iVar6 = DAT_1468e31dc + 1;
  }
  do {
    if (99999 < iVar6) {
LAB_14167149a:
      if (puVar4 != (undefined2 *)0x0) {
        FMemory::Free(puVar4);
      }
      return uVar9;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    if (*(int *)(param_1 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_1;
    }
    FString::PrintfImpl(&local_38,L"%s%05i.%s",puVar8,iVar6,puVar5);
    if (puVar4 != (undefined2 *)0x0) {
      FMemory::Free(puVar4);
    }
    uVar2 = local_30;
    puVar4 = local_38;
    local_38 = (undefined2 *)0x0;
    iVar1 = (int)local_30;
    lVar7 = (longlong)(int)local_30;
    local_30 = 0;
    puVar5 = &DAT_143f3eda8;
    if (iVar1 != 0) {
      puVar5 = puVar4;
    }
    cVar3 = (**(code **)(*param_4 + 0x48))(param_4,puVar5);
    if (cVar3 == '\0') {
      DAT_1468e31dc = iVar6;
      if (param_3 != &local_38) {
        *(int *)(param_3 + 1) = iVar1;
        if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_3 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_3,uVar2 & 0xffffffff);
          ::_guard_xfg_dispatch_icall_nop(*param_3,puVar4,lVar7 * 2);
        }
      }
      uVar9 = 1;
      goto LAB_14167149a;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}



// FUNCTION 1416714d0 GenerateRemotePath body=486 status=ok
// SIG undefined GenerateRemotePath(void)

undefined8 FRemoteConfig::GenerateRemotePath(undefined8 param_1,undefined8 param_2,short *param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong local_68;
  ulonglong local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  
  puVar11 = (undefined2 *)0x0;
  local_60 = 0;
  iVar10 = 0;
  local_68 = 0;
  lVar5 = -1;
  if ((param_3 != (short *)0x0) && (lVar7 = lVar5, *param_3 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (param_3[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_60 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    FGenericPlatformString::Memcpy(local_68,param_3,(longlong)(int)uVar6 * 2);
  }
  FUN_141671940(&local_28,&local_68,1);
  FConfigCacheIni::GetStr
            (DAT_1468b6148,&local_38,L"RemoteConfiguration",L"ConfigPathPrefix",&DAT_1468e2360);
  FConfigCacheIni::GetStr
            (DAT_1468b6148,&local_48,L"RemoteConfiguration",L"ConfigPathSuffix",&DAT_1468e2360);
  psVar1 = (short *)FWindowsPlatformProcess::UserName(0);
  local_58 = (undefined2 *)0x0;
  local_4c = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    do {
      lVar5 = lVar5 + 1;
    } while (psVar1[lVar5] != 0);
    iVar4 = (int)lVar5 + 1;
    local_50 = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    iVar10 = local_50;
    puVar11 = local_58;
    FGenericPlatformString::Memcpy(local_58,psVar1,(longlong)iVar4 * 2);
  }
  puVar3 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  puVar2 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar2 = local_48;
  }
  puVar9 = &DAT_143f3eda8;
  if (iVar10 != 0) {
    puVar9 = puVar11;
  }
  puVar8 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar8 = local_38;
  }
  FString::PrintfImpl(param_2,L"%s/%s/%s/%s/%s.ini",puVar8,puVar9,puVar2,&DAT_146299580,puVar3);
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1416716c0 GenerateToken body=137 status=ok
// SIG undefined GenerateToken(void)

ulonglong *
FTokenStream::GenerateToken(ulonglong *param_1,ulonglong *param_2,int param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_4 == 0) {
    uVar3 = param_1[2];
  }
  else {
    uVar3 = *(ulonglong *)(param_4 + 8);
  }
  uVar2 = *param_1;
  if ((uVar2 <= uVar3) && (uVar3 <= (longlong)param_3 * -2 + param_1[1])) {
    uVar1 = uVar3 + (longlong)param_3 * 2;
    if ((param_4 != 0) && (*(ulonglong *)(param_4 + 8) < uVar1)) {
      *(ulonglong *)(param_4 + 8) = uVar1;
    }
    *param_2 = uVar3;
    param_2[1] = uVar1;
    param_2[2] = ((longlong)(uVar3 - uVar2) >> 1) << 0x20;
    *(undefined1 *)(param_2 + 3) = 1;
    return param_2;
  }
  *(undefined1 *)(param_2 + 3) = 0;
  return param_2;
}



// FUNCTION 141671750 GeneratedConfigDir body=248 status=ok
// SIG undefined GeneratedConfigDir(void)

longlong * FPaths::GeneratedConfigDir(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)FUN_14167d0d0(local_18);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((8 - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (8 - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar2 * 2),L"Conf",4);
  lVar2 = local_28 + lVar2 * 2;
  *(undefined4 *)(lVar2 + 8) = 0x670069;
  *(undefined2 *)(lVar2 + 0xc) = 0x2f;
  *(undefined2 *)(lVar2 + 0xe) = 0;
  *param_1 = local_28;
  *(int *)(param_1 + 1) = local_20;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141671850 FUN_141671850 body=158 status=ok
// SIG undefined FUN_141671850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_141671850(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3234) {
    _Init_thread_header(&DAT_1468e3234);
    if (DAT_1468e3234 == -1) {
      _DAT_1464afdb0 = GetCurrentThreadId();
      DAT_1464afdb4 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1464afdb8);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1464afdb8,4000);
      atexit(`FOutputDeviceRedirector::Get'::`2'::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&DAT_1468e3234);
      return &PTR_PTR_1464afd70;
    }
  }
  return &PTR_PTR_1464afd70;
}



// FUNCTION 1416718f0 Get body=8 status=ok
// SIG undefined Get(void)

undefined8 * FRemoteConfig::Get(void)

{
  return &DAT_1464afbc0;
}



// FUNCTION 141671900 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FBufferReaderWithSHA::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FBufferReaderWithSHA",0x2a);
  return param_2;
}



// FUNCTION 141671940 FUN_141671940 body=525 status=ok
// SIG undefined FUN_141671940(void)

wchar_t ** FUN_141671940(wchar_t **param_1,undefined8 *param_2,char param_3)

{
  wchar_t *pwVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  int iVar4;
  wchar_t **ppwVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  int iVar12;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  
  pwVar10 = (wchar_t *)0x0;
  if (param_3 == '\0') {
    local_30 = *(int *)(param_2 + 1);
    lVar9 = (longlong)local_30;
    _Src = (void *)*param_2;
    local_38 = (wchar_t *)0x0;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
      _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar9 * 2);
    }
    ppwVar5 = &local_38;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    ppwVar5 = (wchar_t **)FUN_141671d50(local_28);
    bVar3 = true;
    bVar2 = false;
  }
  FString::FString(param_1,ppwVar5);
  if ((bVar2) && (local_38 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  iVar8 = -1;
  iVar4 = FUN_141592950(param_1,&DAT_144ccab9c,0,1,0xffffffff);
  iVar12 = 0;
  if (param_3 == '\0') {
    pwVar11 = *param_1;
    iVar6 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      iVar6 = iVar12;
    }
    pwVar7 = pwVar11 + iVar6;
    do {
      if (pwVar7 == pwVar11) goto LAB_141671a64;
      pwVar1 = pwVar7 + -1;
      pwVar7 = pwVar7 + -1;
    } while ((*pwVar1 != L'/') && (*pwVar1 != L'\\'));
    iVar8 = (int)((longlong)pwVar7 - (longlong)pwVar11 >> 1);
  }
LAB_141671a64:
  if ((iVar4 != -1) && ((iVar8 == -1 || (iVar8 < iVar4)))) {
    if (*(int *)(param_1 + 1) == 0) {
      pwVar11 = L"";
      iVar8 = iVar12;
    }
    else {
      pwVar11 = *param_1;
      iVar8 = *(int *)(param_1 + 1) + -1;
    }
    if ((-1 < iVar4) && (iVar12 = iVar8, iVar4 < iVar8)) {
      iVar12 = iVar4;
    }
    local_38 = (wchar_t *)0x0;
    local_2c = 0;
    iVar4 = iVar12 + 1;
    if (iVar12 == 0) {
      iVar4 = 0;
    }
    local_30 = iVar4;
    if ((0 < iVar4) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar4 = local_30,
       pwVar10 = local_38, 0 < local_30)) {
      wcsncpy(local_38,pwVar11,(longlong)iVar12);
      pwVar10[iVar12] = L'\0';
    }
    if (param_1 == &local_38) {
      if (pwVar10 != (wchar_t *)0x0) {
        FMemory::Free(pwVar10);
      }
    }
    else {
      if (*param_1 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_1 = pwVar10;
      *(int *)(param_1 + 1) = iVar4;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
    }
  }
  return param_1;
}



// FUNCTION 141671b50 GetBinaryOperatorDefParameters body=88 status=ok
// SIG undefined GetBinaryOperatorDefParameters(void)

longlong FExpressionGrammar::GetBinaryOperatorDefParameters(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [8];
  
  TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>::
  FindId((longlong *)(param_1 + 0xf0),local_res8,param_2);
  if (local_res8[0] == -1) {
    return 0;
  }
  lVar2 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0xf0);
  lVar1 = lVar2 + 0x10;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 141671bb0 GetByteCount body=48 status=ok
// SIG undefined GetByteCount(void)

int FMemStackBase::GetByteCount(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = *(undefined8 **)(param_1 + 4); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (puVar1 == *(undefined8 **)(param_1 + 4)) {
      iVar2 = iVar2 + -0x10 + (*param_1 - (int)puVar1);
    }
    else {
      iVar2 = iVar2 + *(int *)(puVar1 + 1);
    }
  }
  return iVar2;
}



// FUNCTION 141671be0 GetChangelist body=8 status=ok
// SIG undefined GetChangelist(void)

uint FEngineVersionBase::GetChangelist(longlong param_1)

{
  return *(uint *)(param_1 + 8) & 0x7fffffff;
}



// FUNCTION 141671bf0 GetCleanFilename body=352 status=ok
// SIG undefined GetCleanFilename(void)

undefined8 * FPaths::GetCleanFilename(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  iVar9 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar9 = 0;
  }
  pvVar5 = (void *)((longlong)pvVar2 + (longlong)iVar9 * 2);
  do {
    if (pvVar5 == pvVar2) {
      iVar9 = -1;
      goto LAB_141671c52;
    }
    psVar1 = (short *)((longlong)pvVar5 + -2);
    pvVar5 = (void *)((longlong)pvVar5 + -2);
  } while ((*psVar1 == 0x2f) || (*psVar1 == 0x5c));
  iVar9 = (int)((longlong)pvVar5 - (longlong)pvVar2 >> 1);
LAB_141671c52:
  iVar9 = iVar9 + 1;
  pvVar5 = (void *)((longlong)pvVar2 + (longlong)iVar9 * 2);
  pvVar3 = pvVar5;
  do {
    if (pvVar3 == pvVar2) {
      iVar7 = -1;
      goto LAB_141671c96;
    }
    psVar1 = (short *)((longlong)pvVar3 + -2);
    pvVar3 = (void *)((longlong)pvVar3 + -2);
  } while ((*psVar1 != 0x2f) && (*psVar1 != 0x5c));
  iVar7 = (int)((longlong)pvVar3 - (longlong)pvVar2 >> 1);
LAB_141671c96:
  iVar7 = iVar7 + 1;
  iVar4 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar4 = 0;
  }
  iVar6 = iVar4 - iVar9;
  if (iVar6 != 0) {
    iVar9 = (iVar8 - iVar6) - iVar9;
    if (iVar9 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                (pvVar5,(void *)((longlong)pvVar2 + (longlong)iVar4 * 2),(longlong)iVar9 * 2);
      iVar8 = *(int *)(param_2 + 1);
    }
    *(int *)(param_2 + 1) = iVar8 - iVar6;
  }
  if (iVar7 != 0) {
    iVar8 = *(int *)(param_2 + 1);
    if (iVar8 - iVar7 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)*param_2,(void *)((longlong)*param_2 + (longlong)iVar7 * 2),
                 (longlong)(iVar8 - iVar7) * 2);
      iVar8 = *(int *)(param_2 + 1);
    }
    *(int *)(param_2 + 1) = iVar8 - iVar7;
  }
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  return param_1;
}



// FUNCTION 141671d50 FUN_141671d50 body=323 status=ok
// SIG undefined FUN_141671d50(void)

undefined8 * FUN_141671d50(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  undefined2 *puVar2;
  wchar_t *_Dest;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  
  iVar7 = *(int *)(param_2 + 1);
  puVar2 = (undefined2 *)*param_2;
  iVar3 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar3 = 0;
  }
  uVar9 = 0xffffffff;
  puVar10 = puVar2 + iVar3;
  do {
    uVar5 = uVar9;
    if (puVar10 == puVar2) goto LAB_141671dac;
    psVar1 = puVar10 + -1;
    puVar10 = puVar10 + -1;
  } while ((*psVar1 == 0x2f) || (*psVar1 == 0x5c));
  uVar5 = (uint)((longlong)puVar10 - (longlong)puVar2 >> 1);
LAB_141671dac:
  uVar5 = uVar5 + 1;
  puVar10 = puVar2 + (int)uVar5;
  do {
    uVar4 = uVar9;
    if (puVar10 == puVar2) goto LAB_141671ddc;
    psVar1 = puVar10 + -1;
    puVar10 = puVar10 + -1;
  } while ((*psVar1 != 0x2f) && (*psVar1 != 0x5c));
  uVar4 = (uint)((longlong)puVar10 - (longlong)puVar2 >> 1);
LAB_141671ddc:
  uVar8 = iVar7 - 1;
  if (iVar7 == 0) {
    uVar8 = uVar9;
  }
  uVar9 = 0;
  if (iVar7 == 0) {
    uVar8 = uVar9;
  }
  if (uVar4 + 1 < uVar8) {
    uVar8 = uVar4 + 1;
  }
  uVar4 = iVar7 - 1;
  if (iVar7 == 0) {
    uVar4 = uVar9;
  }
  uVar6 = uVar8;
  if ((uVar8 <= uVar5) && (uVar6 = uVar4, uVar5 < uVar4)) {
    uVar6 = uVar5;
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  puVar10 = &DAT_143f3eda8;
  if (iVar7 != 0) {
    puVar10 = puVar2;
  }
  iVar7 = uVar6 - uVar8;
  uVar5 = iVar7 + 1;
  if (iVar7 == 0) {
    uVar5 = uVar9;
  }
  *(uint *)(param_1 + 1) = uVar5;
  if ((0 < (int)uVar5) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0), 0 < *(int *)(param_1 + 1))) {
    _Dest = (wchar_t *)*param_1;
    wcsncpy(_Dest,puVar10 + (int)uVar8,(longlong)iVar7);
    _Dest[iVar7] = L'\0';
  }
  return param_1;
}



// FUNCTION 141671ea0 FUN_141671ea0 body=144 status=ok
// SIG undefined FUN_141671ea0(void)

undefined * FUN_141671ea0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3210) {
    _Init_thread_header(&DAT_1468e3210);
    if (DAT_1468e3210 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1468e31f8,L"Message",L"MessageDialog",L"DefaultMessageTitle");
      atexit(FUN_143e7a500);
      _Init_thread_footer(&DAT_1468e3210);
      return &DAT_1468e31f8;
    }
  }
  return &DAT_1468e31f8;
}



// FUNCTION 141671f30 FUN_141671f30 body=475 status=ok
// SIG undefined FUN_141671f30(void)

undefined8 * FUN_141671f30(void)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *local_18;
  undefined8 local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468e32a0) && (_Init_thread_header(&DAT_1468e32a0), DAT_1468e32a0 == -1))
  {
    atexit(FUN_143e7a780);
    _Init_thread_footer(&DAT_1468e32a0);
  }
  if (DAT_1468e32a4 == '\0') {
    if ((DAT_1468b6148 != 0) && (*(char *)(DAT_1468b6148 + 0x59) != '\0')) {
      FConfigCacheIni::GetArray
                (DAT_1468b6148,L"Internationalization",L"LocalizationPaths",&DAT_1468e3290,
                 &DAT_1468e2370);
      DAT_1468e32a4 = 1;
      return &DAT_1468e3290;
    }
    local_18 = (undefined2 *)0x0;
    local_10 = 0x2c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    puVar2 = local_18;
    FGenericPlatformString::Memcpy(local_18,L"../../../Engine/Content/Localization/Editor",0x58);
    puVar1 = DAT_1468e3290;
    iVar3 = (int)local_10;
    puVar9 = DAT_1468e3290 + (longlong)DAT_1468e3298 * 2;
    for (puVar7 = DAT_1468e3290; puVar7 != puVar9; puVar7 = puVar7 + 2) {
      puVar6 = &DAT_143f3eda8;
      if (iVar3 != 0) {
        puVar6 = puVar2;
      }
      if (*(int *)(puVar7 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar7;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
      if (iVar4 == 0) {
        if ((int)((longlong)puVar7 - (longlong)puVar1 >> 4) != -1) {
          if (puVar2 != (undefined2 *)0x0) {
            FMemory::Free(puVar2);
          }
          goto LAB_1416720ae;
        }
        break;
      }
    }
    iVar4 = DAT_1468e3298;
    lVar8 = (longlong)DAT_1468e3298;
    DAT_1468e3298 = DAT_1468e3298 + 1;
    if (DAT_1468e329c < DAT_1468e3298) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1468e3290,iVar4);
    }
    puVar7 = DAT_1468e3290 + lVar8 * 2;
    *puVar7 = puVar2;
    *(int *)(puVar7 + 1) = iVar3;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_10._4_4_;
  }
LAB_1416720ae:
  return &DAT_1468e3290;
}



// FUNCTION 141672110 FUN_141672110 body=475 status=ok
// SIG undefined FUN_141672110(void)

undefined8 * FUN_141672110(void)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *local_18;
  undefined8 local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468e3288) && (_Init_thread_header(&DAT_1468e3288), DAT_1468e3288 == -1))
  {
    atexit(FUN_143e7a7e0);
    _Init_thread_footer(&DAT_1468e3288);
  }
  if (DAT_1468e328c == '\0') {
    if ((DAT_1468b6148 != 0) && (*(char *)(DAT_1468b6148 + 0x59) != '\0')) {
      FConfigCacheIni::GetArray
                (DAT_1468b6148,L"Internationalization",L"LocalizationPaths",&DAT_1468e3278,
                 &DAT_1468e2360);
      DAT_1468e328c = 1;
      return &DAT_1468e3278;
    }
    local_18 = (undefined2 *)0x0;
    local_10 = 0x2c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    puVar2 = local_18;
    FGenericPlatformString::Memcpy(local_18,L"../../../Engine/Content/Localization/Engine",0x58);
    puVar1 = DAT_1468e3278;
    iVar3 = (int)local_10;
    puVar9 = DAT_1468e3278 + (longlong)DAT_1468e3280 * 2;
    for (puVar7 = DAT_1468e3278; puVar7 != puVar9; puVar7 = puVar7 + 2) {
      puVar6 = &DAT_143f3eda8;
      if (iVar3 != 0) {
        puVar6 = puVar2;
      }
      if (*(int *)(puVar7 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar7;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
      if (iVar4 == 0) {
        if ((int)((longlong)puVar7 - (longlong)puVar1 >> 4) != -1) {
          if (puVar2 != (undefined2 *)0x0) {
            FMemory::Free(puVar2);
          }
          goto LAB_14167228e;
        }
        break;
      }
    }
    iVar4 = DAT_1468e3280;
    lVar8 = (longlong)DAT_1468e3280;
    DAT_1468e3280 = DAT_1468e3280 + 1;
    if (DAT_1468e3284 < DAT_1468e3280) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1468e3278,iVar4);
    }
    puVar7 = DAT_1468e3278 + lVar8 * 2;
    *puVar7 = puVar2;
    *(int *)(puVar7 + 1) = iVar3;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_10._4_4_;
  }
LAB_14167228e:
  return &DAT_1468e3278;
}



// FUNCTION 1416722f0 FUN_1416722f0 body=7 status=ok
// SIG undefined FUN_1416722f0(void)

undefined4 FUN_1416722f0(void)

{
  return DAT_1464af8a0;
}



// FUNCTION 141672300 FUN_141672300 body=284 status=ok
// SIG undefined FUN_141672300(void)

undefined8 * FUN_141672300(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  wchar_t *_Dest;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *local_28;
  int local_20;
  
  FUN_141671d50(&local_28);
  iVar1 = FUN_141592950(&local_28,&DAT_144ccab44,0,1,0xffffffff);
  if (iVar1 == -1) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar3 = (param_3 ^ 1) + iVar1;
    uVar2 = uVar3 + 0x7fffffff;
    uVar5 = 0;
    uVar6 = local_20 - 1;
    if (local_20 == 0) {
      uVar6 = uVar5;
    }
    if (uVar3 < uVar6) {
      uVar6 = uVar3;
    }
    uVar3 = local_20 - 1;
    if (local_20 == 0) {
      uVar3 = uVar5;
    }
    uVar4 = uVar6;
    if ((uVar6 <= uVar2) && (uVar4 = uVar3, uVar2 < uVar3)) {
      uVar4 = uVar2;
    }
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    puVar7 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar7 = local_28;
    }
    iVar1 = uVar4 - uVar6;
    uVar2 = iVar1 + 1;
    if (iVar1 == 0) {
      uVar2 = uVar5;
    }
    *(uint *)(param_1 + 1) = uVar2;
    if ((0 < (int)uVar2) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0), 0 < *(int *)(param_1 + 1))) {
      _Dest = (wchar_t *)*param_1;
      wcsncpy(_Dest,puVar7 + (int)uVar6,(longlong)iVar1);
      _Dest[iVar1] = L'\0';
    }
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141672420 GetFileSHAHash body=316 status=ok
// SIG undefined GetFileSHAHash(void)

bool FSHA1::GetFileSHAHash(short *param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res18 [4];
  longlong local_48;
  ulonglong local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  
  local_40 = 0;
  local_48 = 0;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_1[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_40 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,param_1,(longlong)(int)uVar4 * 2);
  }
  uVar2 = FPaths::GetCleanFilename(local_28,&local_48);
  uVar2 = FString::ToLower(uVar2,local_38);
  plVar6 = (longlong *)&DAT_1464af9c0;
  if (param_3 != '\0') {
    plVar6 = &DAT_1464af970;
  }
  TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
  ::FindId(plVar6,local_res18,uVar2);
  plVar3 = (longlong *)0x0;
  if (local_res18[0] != -1) {
    plVar3 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar6);
  }
  plVar6 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if ((plVar6 != (longlong *)0x0) && (param_2 != (undefined8 *)0x0)) {
    puVar1 = (undefined8 *)*plVar6;
    uVar2 = puVar1[1];
    *param_2 = *puVar1;
    param_2[1] = uVar2;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar1 + 2);
  }
  return plVar6 != (longlong *)0x0;
}



// FUNCTION 141672560 FUN_141672560 body=203 status=ok
// SIG undefined FUN_141672560(void)

undefined8 * FUN_141672560(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e32e8) {
    _Init_thread_header(&DAT_1468e32e8);
    if (DAT_1468e32e8 == -1) {
      atexit(FUN_143e7a840);
      _Init_thread_footer(&DAT_1468e32e8);
    }
  }
  if (((DAT_1468e32ec == '\0') && (DAT_1468b6148 != 0)) && (*(char *)(DAT_1468b6148 + 0x59) != '\0')
     ) {
    FConfigCacheIni::GetArray
              (DAT_1468b6148,L"Internationalization",L"LocalizationPaths",&DAT_1468e32d8,
               &DAT_1468e2410);
    DAT_1468e32ec = 1;
    return &DAT_1468e32d8;
  }
  return &DAT_1468e32d8;
}



// FUNCTION 141672630 FUN_141672630 body=7 status=ok
// SIG undefined FUN_141672630(void)

undefined4 FUN_141672630(void)

{
  return DAT_1468e28e8;
}



// FUNCTION 141672640 FUN_141672640 body=225 status=ok
// SIG undefined FUN_141672640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_141672640(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3234) {
    _Init_thread_header(&DAT_1468e3234);
    if (DAT_1468e3234 == -1) {
      _DAT_1464afd78 = 0x100;
      PTR_PTR_1464afd70 = (undefined *)&PTR__scalar_deleting_destructor__144ccf438;
      DAT_1464afd80 = 0;
      _DAT_1464afd88 = 0;
      DAT_1464afd90 = 0;
      _DAT_1464afd98 = 0;
      DAT_1464afda0 = 0;
      _DAT_1464afda8 = 0;
      _DAT_1464afdb0 = GetCurrentThreadId();
      DAT_1464afdb4 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1464afdb8);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1464afdb8,4000);
      atexit(`FOutputDeviceRedirector::Get'::`2'::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&DAT_1468e3234);
      return &PTR_PTR_1464afd70;
    }
  }
  return &PTR_PTR_1464afd70;
}



// FUNCTION 141672730 GetHash body=14 status=ok
// SIG undefined GetHash(void)

void FSHA1::GetHash(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *param_2 = *(undefined8 *)(param_1 + 0x60);
  param_2[1] = uVar1;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x70);
  return;
}



// FUNCTION 141672740 FUN_141672740 body=163 status=ok
// SIG undefined FUN_141672740(void)

undefined8 * FUN_141672740(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e32f0) {
    _Init_thread_header(&DAT_1468e32f0);
    if (DAT_1468e32f0 == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afde0,0);
      FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afde0,0xf,"/?:&\\*\"<>|%#@^",0xf,0x3f);
      atexit((_func_5014 *)&LAB_143e7a6f0);
      _Init_thread_footer(&DAT_1468e32f0);
      return &DAT_1464afde0;
    }
  }
  return &DAT_1464afde0;
}



// FUNCTION 1416727f0 FUN_1416727f0 body=679 status=ok
// SIG undefined FUN_1416727f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1416727f0(char param_1)

{
  wchar_t wVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  undefined8 *puVar9;
  wchar_t wVar10;
  longlong *plVar11;
  wchar_t *_Str1;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (DAT_1468e28e0 != '\0') {
    return (ulonglong)DAT_1468e28e4;
  }
  if ((((param_1 != '\0') && (DAT_1468e30d8 != 0)) && (DAT_1468e30d0 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*DAT_1468e30d0 + 0x18))(), cVar5 != '\0')) {
    plVar11 = (longlong *)0x0;
    if (DAT_1468e30d8 != 0) {
      plVar11 = DAT_1468e30d0;
    }
    uVar7 = (**(code **)(*plVar11 + 0x38))();
    DAT_1468e28e4 = (int)uVar7;
    DAT_1468e28e0 = 1;
    return uVar7;
  }
  uVar4 = DAT_1468e28e8;
  uVar3 = DAT_1464af8a0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468e3230) && (_Init_thread_header(), DAT_1468e3230 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1468e3228 =
         (**(code **)(*DAT_1468b1f88 + 0x28))
                   (DAT_1468b1f88,L"networkversionoverride",&DAT_1468e3214,
                    L"Sets network version used for multiplayer ",0);
    _DAT_1468e3220 = &PTR_FUN_143f3ecf0;
    atexit(FUN_143e7a470);
    _Init_thread_footer(&DAT_1468e3230);
  }
  if (DAT_1468e3218 == '\0') {
    DAT_1468e3218 = '\x01';
    pwVar8 = (wchar_t *)FCommandLine::Get();
    if (pwVar8 != (wchar_t *)0x0) {
      bVar2 = false;
      wVar1 = *pwVar8;
      while (wVar1 != L'\0') {
        _Str1 = pwVar8 + 1;
        wVar10 = wVar1 + L'￠';
        if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
          wVar10 = wVar1;
        }
        if ((bVar2) || (wVar10 != L'N')) {
          if (((ushort)(wVar10 + L'﾿') < 0x1a) || ((ushort)(wVar10 + L'￐') < 10))
          goto LAB_141672900;
          bVar2 = false;
        }
        else {
          iVar6 = _wcsnicmp(_Str1,L"etworkversionoverride=",0x16);
          if (iVar6 == 0) {
            if (pwVar8 != (wchar_t *)0x0) {
              DAT_1468e3214 = _wtoi(pwVar8 + 0x17);
            }
            break;
          }
LAB_141672900:
          bVar2 = true;
        }
        pwVar8 = _Str1;
        wVar1 = *_Str1;
      }
    }
  }
  iVar6 = DAT_1468e3214;
  if (DAT_1468e3214 == 0) {
    iVar6 = FUN_14158a980();
  }
  puVar12 = &DAT_143f3eda8;
  puVar13 = &DAT_143f3eda8;
  if (DAT_1464afba8 != 0) {
    puVar13 = DAT_1464afba0;
  }
  FString::PrintfImpl(local_28,L"%s %s, NetCL: %d, EngineNetVer: %d, GameNetVer: %d",&DAT_146299580,
                      puVar13,iVar6,uVar3,uVar4);
  puVar9 = (undefined8 *)FString::ToLower(local_28,local_18);
  if (*(int *)(puVar9 + 1) != 0) {
    puVar12 = (undefined2 *)*puVar9;
  }
  DAT_1468e28e4 = FCrc::StrCrc32<wchar_t>(puVar12,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  uVar7 = (ulonglong)DAT_1468e28e4;
  DAT_1468e28e0 = 1;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 141672aa0 FUN_141672aa0 body=381 status=ok
// SIG undefined FUN_141672aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141672aa0(void)

{
  wchar_t wVar1;
  bool bVar2;
  wchar_t wVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *_Str1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468e3230) && (_Init_thread_header(&DAT_1468e3230), DAT_1468e3230 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1468e3228 =
         (**(code **)(*DAT_1468b1f88 + 0x28))
                   (DAT_1468b1f88,L"networkversionoverride",&DAT_1468e3214,
                    L"Sets network version used for multiplayer ",0);
    _DAT_1468e3220 = &PTR_FUN_143f3ecf0;
    atexit(FUN_143e7a470);
    _Init_thread_footer(&DAT_1468e3230);
  }
  if (DAT_1468e3218 == '\0') {
    DAT_1468e3218 = '\x01';
    pwVar5 = (wchar_t *)FCommandLine::Get();
    if (pwVar5 != (wchar_t *)0x0) {
      bVar2 = false;
      wVar1 = *pwVar5;
      while (wVar1 != L'\0') {
        _Str1 = pwVar5 + 1;
        wVar3 = wVar1 + L'￠';
        if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
          wVar3 = wVar1;
        }
        if ((bVar2) || (wVar3 != L'N')) {
          if (((ushort)(wVar3 + L'﾿') < 0x1a) || ((ushort)(wVar3 + L'￐') < 10))
          goto LAB_141672b33;
          bVar2 = false;
        }
        else {
          iVar4 = _wcsnicmp(_Str1,L"etworkversionoverride=",0x16);
          if (iVar4 == 0) {
            if (pwVar5 != (wchar_t *)0x0) {
              DAT_1468e3214 = _wtoi(pwVar5 + 0x17);
            }
            break;
          }
LAB_141672b33:
          bVar2 = true;
        }
        pwVar5 = _Str1;
        wVar1 = *_Str1;
      }
    }
  }
  if (DAT_1468e3214 == 0) {
    FUN_14158a980();
    return;
  }
  return;
}



// FUNCTION 141672c20 GetPath body=252 status=ok
// SIG int GetPath(HDC hdc, LPPOINT apt, LPBYTE aj, int cpt)

int __stdcall FPaths::GetPath(HDC hdc,LPPOINT apt,LPBYTE aj,int cpt)

{
  short *psVar1;
  tagPOINT tVar2;
  int iVar3;
  tagPOINT tVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  tVar2 = *apt;
  iVar3 = apt[1].x + -1;
  if (apt[1].x == 0) {
    iVar3 = 0;
  }
  tVar4 = (tagPOINT)((longlong)tVar2 + (longlong)iVar3 * 2);
  do {
    if (tVar4 == tVar2) {
      iVar3 = -1;
      goto LAB_141672c79;
    }
    psVar1 = (short *)((longlong)tVar4 + -2);
    tVar4 = (tagPOINT)((longlong)tVar4 + -2);
  } while ((*psVar1 != 0x2f) && (*psVar1 != 0x5c));
  iVar3 = (int)((longlong)tVar4 - (longlong)tVar2 >> 1);
LAB_141672c79:
  *(undefined8 *)hdc = 0;
  *(undefined8 *)(hdc + 2) = 0;
  if (iVar3 != -1) {
    iVar5 = apt[1].x;
    iVar8 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar8 = 0;
    }
    iVar7 = iVar8 - iVar3;
    if (iVar7 != 0) {
      iVar6 = (iVar5 - iVar7) - iVar3;
      if (iVar6 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)*apt + (longlong)iVar3 * 2),
                   (void *)((longlong)*apt + (longlong)iVar8 * 2),(longlong)iVar6 * 2);
        iVar5 = apt[1].x;
      }
      apt[1].x = iVar5 - iVar7;
    }
    if ((LPPOINT)hdc != apt) {
      if (*(longlong *)hdc != 0) {
        FMemory::Free();
      }
      *(tagPOINT *)hdc = *apt;
      apt->x = 0;
      apt->y = 0;
      hdc[2].unused = apt[1].x;
      hdc[3].unused = apt[1].y;
      apt[1].x = 0;
      apt[1].y = 0;
    }
  }
  return (int)hdc;
}



// FUNCTION 141672d20 FUN_141672d20 body=330 status=ok
// SIG undefined FUN_141672d20(void)

wchar_t ** FUN_141672d20(wchar_t **param_1,longlong *param_2)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *_Source;
  int iVar7;
  wchar_t *local_28;
  int local_20;
  undefined4 local_1c;
  
  pwVar5 = (wchar_t *)0x0;
  lVar2 = *param_2;
  iVar7 = 0;
  iVar3 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar3 = iVar7;
  }
  lVar6 = lVar2 + (longlong)iVar3 * 2;
  do {
    if (lVar6 == lVar2) {
      iVar3 = -1;
      goto LAB_141672d70;
    }
    psVar1 = (short *)(lVar6 + -2);
    lVar6 = lVar6 + -2;
  } while ((*psVar1 != 0x2f) && (*psVar1 != 0x5c));
  iVar3 = (int)(lVar6 - lVar2 >> 1);
LAB_141672d70:
  *param_1 = (wchar_t *)0x0;
  param_1[1] = (wchar_t *)0x0;
  if (iVar3 != -1) {
    if ((int)param_2[1] == 0) {
      _Source = L"";
      iVar4 = iVar7;
    }
    else {
      _Source = (wchar_t *)*param_2;
      iVar4 = (int)param_2[1] + -1;
    }
    if ((-1 < iVar3) && (iVar7 = iVar4, iVar3 < iVar4)) {
      iVar7 = iVar3;
    }
    local_28 = (wchar_t *)0x0;
    local_1c = 0;
    iVar3 = iVar7 + 1;
    if (iVar7 == 0) {
      iVar3 = 0;
    }
    local_20 = iVar3;
    if ((0 < iVar3) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0), iVar3 = local_20,
       pwVar5 = local_28, 0 < local_20)) {
      wcsncpy(local_28,_Source,(longlong)iVar7);
      pwVar5[iVar7] = L'\0';
    }
    if (param_1 == &local_28) {
      if (pwVar5 != (wchar_t *)0x0) {
        FMemory::Free(pwVar5);
      }
    }
    else {
      if (*param_1 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_1 = pwVar5;
      *(int *)(param_1 + 1) = iVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
    }
  }
  return param_1;
}



// FUNCTION 141672e70 FUN_141672e70 body=262 status=ok
// SIG undefined FUN_141672e70(void)

undefined8 * FUN_141672e70(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  BOOL BVar2;
  int iVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e31c8) {
    _Init_thread_header(&DAT_1468e31c8);
    if (DAT_1468e31c8 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1468e31a0);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1468e31a0,4000);
      atexit((_func_5014 *)&LAB_143e7a6c0);
      _Init_thread_footer(&DAT_1468e31c8);
    }
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468e31a0);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468e31a0);
  }
  *param_1 = 0;
  uVar1 = DAT_1468e30f8;
  _Src = DAT_1468e30f0;
  iVar3 = (int)DAT_1468e30f8;
  *(int *)(param_1 + 1) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,uVar1 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar3 * 2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468e31a0);
  return param_1;
}



// FUNCTION 141672f80 FUN_141672f80 body=475 status=ok
// SIG undefined FUN_141672f80(void)

undefined8 * FUN_141672f80(void)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *local_18;
  undefined8 local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468e32b8) && (_Init_thread_header(&DAT_1468e32b8), DAT_1468e32b8 == -1))
  {
    atexit(FUN_143e7a8a0);
    _Init_thread_footer(&DAT_1468e32b8);
  }
  if (DAT_1468e32bc == '\0') {
    if ((DAT_1468b6148 != 0) && (*(char *)(DAT_1468b6148 + 0x59) != '\0')) {
      FConfigCacheIni::GetArray
                (DAT_1468b6148,L"Internationalization",L"PropertyNameLocalizationPaths",
                 &DAT_1468e32a8,&DAT_1468e2370);
      DAT_1468e32bc = 1;
      return &DAT_1468e32a8;
    }
    local_18 = (undefined2 *)0x0;
    local_10 = 0x33;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    puVar2 = local_18;
    FGenericPlatformString::Memcpy
              (local_18,L"../../../Engine/Content/Localization/PropertyNames",0x66);
    puVar1 = DAT_1468e32a8;
    iVar3 = (int)local_10;
    puVar9 = DAT_1468e32a8 + (longlong)DAT_1468e32b0 * 2;
    for (puVar7 = DAT_1468e32a8; puVar7 != puVar9; puVar7 = puVar7 + 2) {
      puVar6 = &DAT_143f3eda8;
      if (iVar3 != 0) {
        puVar6 = puVar2;
      }
      if (*(int *)(puVar7 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar7;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
      if (iVar4 == 0) {
        if ((int)((longlong)puVar7 - (longlong)puVar1 >> 4) != -1) {
          if (puVar2 != (undefined2 *)0x0) {
            FMemory::Free(puVar2);
          }
          goto LAB_1416730fe;
        }
        break;
      }
    }
    iVar4 = DAT_1468e32b0;
    lVar8 = (longlong)DAT_1468e32b0;
    DAT_1468e32b0 = DAT_1468e32b0 + 1;
    if (DAT_1468e32b4 < DAT_1468e32b0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1468e32a8,iVar4);
    }
    puVar7 = DAT_1468e32a8 + lVar8 * 2;
    *puVar7 = puVar2;
    *(int *)(puVar7 + 1) = iVar3;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_10._4_4_;
  }
LAB_1416730fe:
  return &DAT_1468e32a8;
}



// FUNCTION 141673160 GetReadData body=466 status=ok
// SIG undefined GetReadData(void)

bool FRemoteConfigAsyncTaskManager::GetReadData(longlong *param_1,short *param_2,undefined8 param_3)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  bool bVar12;
  longlong *local_38;
  int local_30;
  undefined4 local_2c;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  }
  plVar11 = (longlong *)0x0;
  cVar1 = IsFinished(param_1,param_2);
  if (cVar1 == '\0') {
    bVar12 = false;
  }
  else {
    iVar10 = 0;
    local_38 = (longlong *)0x0;
    local_2c = 0;
    plVar8 = plVar11;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (param_2[lVar7] != 0);
      iVar6 = (int)lVar7 + 1;
      local_30 = iVar6;
      if (0 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      iVar10 = local_30;
      plVar8 = local_38;
      FGenericPlatformString::Memcpy(local_38,param_2,(longlong)iVar6 * 2);
    }
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar4 = (longlong *)&DAT_143f3eda8;
      if (iVar10 != 0) {
        plVar4 = plVar8;
      }
      iVar6 = FUN_140438070(plVar4);
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar6) * 4);
      if (iVar6 != -1) {
        lVar7 = *param_1;
        do {
          lVar9 = (longlong)iVar6 * 0x20;
          plVar4 = (longlong *)&DAT_143f3eda8;
          if (iVar10 != 0) {
            plVar4 = plVar8;
          }
          if (*(int *)(lVar9 + 8 + lVar7) == 0) {
            puVar5 = &DAT_143f3eda8;
          }
          else {
            puVar5 = *(undefined2 **)(lVar9 + lVar7);
          }
          iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,plVar4);
          if (iVar3 == 0) {
            if (iVar6 != -1) {
              plVar11 = *(longlong **)((longlong)iVar6 * 0x20 + 0x10 + *param_1);
              TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
              ::Remove(param_1,iVar6);
            }
            break;
          }
          lVar7 = *param_1;
          iVar6 = *(int *)(lVar9 + 0x18 + lVar7);
        } while (iVar6 != -1);
      }
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
    bVar12 = (char)plVar11[0x106] == '\0';
    FRemoteConfigAsyncIOInfo::operator=(param_3,plVar11 + 0x101);
    (**(code **)(*plVar11 + 0x10))(plVar11,1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  return bVar12;
}



// FUNCTION 141673340 FUN_141673340 body=123 status=ok
// SIG undefined FUN_141673340(void)

undefined8 * FUN_141673340(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3308) {
    _Init_thread_header(&DAT_1468e3308);
    if (DAT_1468e3308 == -1) {
      `FPaths::GetRelativePathToRoot'::`2'::FRelativePathInitializer::FRelativePathInitializer
                (&DAT_1468e32f8);
      atexit((_func_5014 *)&LAB_143e7aa50);
      _Init_thread_footer(&DAT_1468e3308);
      return &DAT_1468e32f8;
    }
  }
  return &DAT_1468e32f8;
}



// FUNCTION 1416733c0 GetReplayVersion body=253 status=ok
// SIG undefined GetReplayVersion(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FNetworkVersion::GetReplayVersion(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  uint uVar5;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  _Src = (void *)0x0;
  iVar4 = 0;
  uVar5 = DAT_1468e28ec << 0x10 | _DAT_1464af8a4;
  local_28 = (void *)0x0;
  local_1c = 0;
  if (DAT_146299580 != 0) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while ((&DAT_146299580)[lVar3] != 0);
    iVar1 = (int)lVar3 + 1;
    local_20 = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar4 = local_20;
    _Src = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_146299580,(longlong)iVar1 * 2);
  }
  uVar2 = DAT_1468e2928 & 0x7fffffff;
  *param_1 = 0;
  *(int *)(param_1 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar4,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar4 * 2);
  }
  *(uint *)(param_1 + 2) = uVar5;
  *(uint *)((longlong)param_1 + 0x14) = uVar2;
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return param_1;
}



// FUNCTION 1416734c0 FUN_1416734c0 body=140 status=ok
// SIG undefined FUN_1416734c0(void)

undefined8 * FUN_1416734c0(undefined8 *param_1,undefined8 *param_2)

{
  wchar_t *_Source;
  longlong lVar1;
  wchar_t *_Dest;
  int iVar2;
  int iVar3;
  
  _Source = (wchar_t *)*param_1;
  lVar1 = param_1[1];
  *param_2 = 0;
  iVar3 = (int)(lVar1 - (longlong)_Source >> 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  iVar2 = iVar3 + 1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  *(int *)(param_2 + 1) = iVar2;
  if (0 < iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    if (0 < *(int *)(param_2 + 1)) {
      _Dest = (wchar_t *)*param_2;
      wcsncpy(_Dest,_Source,(longlong)iVar3);
      _Dest[iVar3] = L'\0';
    }
  }
  return param_2;
}



// FUNCTION 141673550 FUN_141673550 body=475 status=ok
// SIG undefined FUN_141673550(void)

undefined8 * FUN_141673550(void)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *local_18;
  undefined8 local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468e32d0) && (_Init_thread_header(&DAT_1468e32d0), DAT_1468e32d0 == -1))
  {
    atexit(FUN_143e7a900);
    _Init_thread_footer(&DAT_1468e32d0);
  }
  if (DAT_1468e32d4 == '\0') {
    if ((DAT_1468b6148 != 0) && (*(char *)(DAT_1468b6148 + 0x59) != '\0')) {
      FConfigCacheIni::GetArray
                (DAT_1468b6148,L"Internationalization",L"ToolTipLocalizationPaths",&DAT_1468e32c0,
                 &DAT_1468e2370);
      DAT_1468e32d4 = 1;
      return &DAT_1468e32c0;
    }
    local_18 = (undefined2 *)0x0;
    local_10 = 0x2e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    puVar2 = local_18;
    FGenericPlatformString::Memcpy(local_18,L"../../../Engine/Content/Localization/ToolTips",0x5c);
    puVar1 = DAT_1468e32c0;
    iVar3 = (int)local_10;
    puVar9 = DAT_1468e32c0 + (longlong)DAT_1468e32c8 * 2;
    for (puVar7 = DAT_1468e32c0; puVar7 != puVar9; puVar7 = puVar7 + 2) {
      puVar6 = &DAT_143f3eda8;
      if (iVar3 != 0) {
        puVar6 = puVar2;
      }
      if (*(int *)(puVar7 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar7;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
      if (iVar4 == 0) {
        if ((int)((longlong)puVar7 - (longlong)puVar1 >> 4) != -1) {
          if (puVar2 != (undefined2 *)0x0) {
            FMemory::Free(puVar2);
          }
          goto LAB_1416736ce;
        }
        break;
      }
    }
    iVar4 = DAT_1468e32c8;
    lVar8 = (longlong)DAT_1468e32c8;
    DAT_1468e32c8 = DAT_1468e32c8 + 1;
    if (DAT_1468e32cc < DAT_1468e32c8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1468e32c0,iVar4);
    }
    puVar7 = DAT_1468e32c0 + lVar8 * 2;
    *puVar7 = puVar2;
    *(int *)(puVar7 + 1) = iVar3;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_10._4_4_;
  }
LAB_1416736ce:
  return &DAT_1468e32c0;
}



// FUNCTION 141673730 GetTypeHash body=12 status=ok
// SIG undefined GetTypeHash(void)

void GetTypeHash(undefined8 param_1)

{
  FCrc::MemCrc32(param_1,0x14);
  return;
}



// FUNCTION 141673740 FUN_141673740 body=126 status=ok
// SIG undefined FUN_141673740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673740(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3458) {
    _Init_thread_header(&DAT_1468e3458);
    if (DAT_1468e3458 == -1) {
      _DAT_1468e3448 = 0x7511397a;
      _DAT_1468e344c = 0x2d24dc2;
      _DAT_1468e3450 = 0x86729800;
      _DAT_1468e3454 = 0xf454c320;
      _Init_thread_footer(&DAT_1468e3458);
    }
  }
  return &DAT_1468e3448;
}



// FUNCTION 1416737c0 FUN_1416737c0 body=126 status=ok
// SIG undefined FUN_1416737c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1416737c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e33b0) {
    _Init_thread_header(&DAT_1468e33b0);
    if (DAT_1468e33b0 == -1) {
      _DAT_1468e33a0 = 0x32457efc;
      _DAT_1468e33a4 = 0x4928406f;
      _DAT_1468e33a8 = 0xbd78d943;
      _DAT_1468e33ac = 0x633797d1;
      _Init_thread_footer(&DAT_1468e33b0);
    }
  }
  return &DAT_1468e33a0;
}



// FUNCTION 141673840 FUN_141673840 body=126 status=ok
// SIG undefined FUN_141673840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673840(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3368) {
    _Init_thread_header(&DAT_1468e3368);
    if (DAT_1468e3368 == -1) {
      _DAT_1468e3358 = 0x48ff0754;
      _DAT_1468e335c = 0x508941bb;
      _DAT_1468e3360 = 0x9d5447ff;
      _DAT_1468e3364 = 0xcac61362;
      _Init_thread_footer(&DAT_1468e3368);
    }
  }
  return &DAT_1468e3358;
}



// FUNCTION 1416738c0 FUN_1416738c0 body=126 status=ok
// SIG undefined FUN_1416738c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1416738c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3338) {
    _Init_thread_header(&DAT_1468e3338);
    if (DAT_1468e3338 == -1) {
      _DAT_1468e3328 = 0xaab48e5b;
      _DAT_1468e332c = 0xeda94853;
      _DAT_1468e3330 = 0xa951ed2d;
      _DAT_1468e3334 = 0xa8e795d;
      _Init_thread_footer(&DAT_1468e3338);
    }
  }
  return &DAT_1468e3328;
}



// FUNCTION 141673940 FUN_141673940 body=126 status=ok
// SIG undefined FUN_141673940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673940(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e31f0) {
    _Init_thread_header(&DAT_1468e31f0);
    if (DAT_1468e31f0 == -1) {
      _DAT_1468e31e0 = 0x4edaa92f;
      _DAT_1468e31e4 = 0xb75e4b9e;
      _DAT_1468e31e8 = 0xb7e0abc2;
      _DAT_1468e31ec = 0x8d981fcb;
      _Init_thread_footer(&DAT_1468e31f0);
    }
  }
  return &DAT_1468e31e0;
}



// FUNCTION 1416739c0 FUN_1416739c0 body=126 status=ok
// SIG undefined FUN_1416739c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1416739c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3198) {
    _Init_thread_header(&DAT_1468e3198);
    if (DAT_1468e3198 == -1) {
      _DAT_1468e3188 = 0x8423b4ae;
      _DAT_1468e318c = 0x2ff64795;
      _DAT_1468e3190 = 0xa7effac0;
      _DAT_1468e3194 = 0xc560531a;
      _Init_thread_footer(&DAT_1468e3198);
    }
  }
  return &DAT_1468e3188;
}



// FUNCTION 141673a40 FUN_141673a40 body=126 status=ok
// SIG undefined FUN_141673a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673a40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3410) {
    _Init_thread_header(&DAT_1468e3410);
    if (DAT_1468e3410 == -1) {
      _DAT_1468e3400 = 0x6a6247f4;
      _DAT_1468e3404 = 0xfd78467f;
      _DAT_1468e3408 = 0xa6ac1244;
      _DAT_1468e340c = 0xa31e0a5;
      _Init_thread_footer(&DAT_1468e3410);
    }
  }
  return &DAT_1468e3400;
}



// FUNCTION 141673ac0 FUN_141673ac0 body=126 status=ok
// SIG undefined FUN_141673ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673ac0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3428) {
    _Init_thread_header(&DAT_1468e3428);
    if (DAT_1468e3428 == -1) {
      _DAT_1468e3418 = 0x9d75c5e;
      _DAT_1468e341c = 0xa29a4194;
      _DAT_1468e3420 = 0x8e8e5278;
      _DAT_1468e3424 = 0xc84365fd;
      _Init_thread_footer(&DAT_1468e3428);
    }
  }
  return &DAT_1468e3418;
}



// FUNCTION 141673b40 FUN_141673b40 body=126 status=ok
// SIG undefined FUN_141673b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673b40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3350) {
    _Init_thread_header(&DAT_1468e3350);
    if (DAT_1468e3350 == -1) {
      _DAT_1468e3340 = 0xe11f9937;
      _DAT_1468e3344 = 0xaf714ac5;
      _DAT_1468e3348 = 0x88a4e04e;
      _DAT_1468e334c = 0x723a753c;
      _Init_thread_footer(&DAT_1468e3350);
    }
  }
  return &DAT_1468e3340;
}



// FUNCTION 141673bc0 FUN_141673bc0 body=126 status=ok
// SIG undefined FUN_141673bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673bc0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e33e0) {
    _Init_thread_header(&DAT_1468e33e0);
    if (DAT_1468e33e0 == -1) {
      _DAT_1468e33d0 = 0xb85e222b;
      _DAT_1468e33d4 = 0x47e24e1f;
      _DAT_1468e33d8 = 0xbc5a384d;
      _DAT_1468e33dc = 0x2ff471e1;
      _Init_thread_footer(&DAT_1468e33e0);
    }
  }
  return &DAT_1468e33d0;
}



// FUNCTION 141673c40 FUN_141673c40 body=126 status=ok
// SIG undefined FUN_141673c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673c40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e33f8) {
    _Init_thread_header(&DAT_1468e33f8);
    if (DAT_1468e33f8 == -1) {
      _DAT_1468e33e8 = 0x8c0a46b0;
      _DAT_1468e33ec = 0x8daa4e2b;
      _DAT_1468e33f0 = 0xa7fe4a23;
      _DAT_1468e33f4 = 0xef215918;
      _Init_thread_footer(&DAT_1468e33f8);
    }
  }
  return &DAT_1468e33e8;
}



// FUNCTION 141673cc0 FUN_141673cc0 body=126 status=ok
// SIG undefined FUN_141673cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673cc0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3470) {
    _Init_thread_header(&DAT_1468e3470);
    if (DAT_1468e3470 == -1) {
      _DAT_1468e3460 = 0x3d78990;
      _DAT_1468e3464 = 0x41d04e26;
      _DAT_1468e3468 = 0x8e98ad2f;
      _DAT_1468e346c = 0x74667868;
      _Init_thread_footer(&DAT_1468e3470);
    }
  }
  return &DAT_1468e3460;
}



// FUNCTION 141673d40 FUN_141673d40 body=126 status=ok
// SIG undefined FUN_141673d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673d40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e33c8) {
    _Init_thread_header(&DAT_1468e33c8);
    if (DAT_1468e33c8 == -1) {
      _DAT_1468e33b8 = 0x8f445a19;
      _DAT_1468e33bc = 0xf33443d9;
      _DAT_1468e33c0 = 0x90d6dc85;
      _DAT_1468e33c4 = 0xb0c5d071;
      _Init_thread_footer(&DAT_1468e33c8);
    }
  }
  return &DAT_1468e33b8;
}



// FUNCTION 141673dc0 FUN_141673dc0 body=126 status=ok
// SIG undefined FUN_141673dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673dc0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3440) {
    _Init_thread_header(&DAT_1468e3440);
    if (DAT_1468e3440 == -1) {
      _DAT_1468e3430 = 0xf4778b51;
      _DAT_1468e3434 = 0xf535414d;
      _DAT_1468e3438 = 0x9c0eb5f2;
      _DAT_1468e343c = 0x2f2b0fd4;
      _Init_thread_footer(&DAT_1468e3440);
    }
  }
  return &DAT_1468e3430;
}



// FUNCTION 141673e40 FUN_141673e40 body=126 status=ok
// SIG undefined FUN_141673e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673e40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3180) {
    _Init_thread_header(&DAT_1468e3180);
    if (DAT_1468e3180 == -1) {
      _DAT_1468e3170 = 0x3dc5f60d;
      _DAT_1468e3174 = 0x934e4753;
      _DAT_1468e3178 = 0xa80cd6d0;
      _DAT_1468e317c = 0xe9eb4640;
      _Init_thread_footer(&DAT_1468e3180);
    }
  }
  return &DAT_1468e3170;
}



// FUNCTION 141673ec0 FUN_141673ec0 body=126 status=ok
// SIG undefined FUN_141673ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673ec0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3320) {
    _Init_thread_header(&DAT_1468e3320);
    if (DAT_1468e3320 == -1) {
      _DAT_1468e3310 = 0x3ed3a25;
      _DAT_1468e3314 = 0x85d94664;
      _DAT_1468e3318 = 0x8a8001a1;
      _DAT_1468e331c = 0xdcc637f7;
      _Init_thread_footer(&DAT_1468e3320);
    }
  }
  return &DAT_1468e3310;
}



// FUNCTION 141673f40 FUN_141673f40 body=126 status=ok
// SIG undefined FUN_141673f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673f40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3398) {
    _Init_thread_header(&DAT_1468e3398);
    if (DAT_1468e3398 == -1) {
      _DAT_1468e3388 = 0x5e10956d;
      _DAT_1468e338c = 0x2e17411f;
      _DAT_1468e3390 = 0xb6469e22;
      _DAT_1468e3394 = 0xb5e56e6c;
      _Init_thread_footer(&DAT_1468e3398);
    }
  }
  return &DAT_1468e3388;
}



// FUNCTION 141673fc0 FUN_141673fc0 body=126 status=ok
// SIG undefined FUN_141673fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141673fc0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3380) {
    _Init_thread_header(&DAT_1468e3380);
    if (DAT_1468e3380 == -1) {
      _DAT_1468e3370 = 0xe7e1bc9;
      _DAT_1468e3374 = 0xf0b94d5d;
      _DAT_1468e3378 = 0x80f44d45;
      _DAT_1468e337c = 0x85a082aa;
      _Init_thread_footer(&DAT_1468e3380);
    }
  }
  return &DAT_1468e3370;
}



// FUNCTION 141674040 FUN_141674040 body=126 status=ok
// SIG undefined FUN_141674040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141674040(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e34a0) {
    _Init_thread_header(&DAT_1468e34a0);
    if (DAT_1468e34a0 == -1) {
      _DAT_1468e3490 = 0x84e6214;
      _DAT_1468e3494 = 0x32ffa48;
      _DAT_1468e3498 = 0x9245abf1;
      _DAT_1468e349c = 0x9e248f1a;
      _Init_thread_footer(&DAT_1468e34a0);
    }
  }
  return &DAT_1468e3490;
}



// FUNCTION 1416740c0 FUN_1416740c0 body=126 status=ok
// SIG undefined FUN_1416740c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1416740c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3488) {
    _Init_thread_header(&DAT_1468e3488);
    if (DAT_1468e3488 == -1) {
      _DAT_1468e3478 = 0x9e49538;
      _DAT_1468e347c = 0x633545e3;
      _DAT_1468e3480 = 0x84b5644f;
      _DAT_1468e3484 = 0x1f11628f;
      _Init_thread_footer(&DAT_1468e3488);
    }
  }
  return &DAT_1468e3478;
}



// FUNCTION 141674140 FUN_141674140 body=126 status=ok
// SIG undefined FUN_141674140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141674140(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e34b8) {
    _Init_thread_header(&DAT_1468e34b8);
    if (DAT_1468e34b8 == -1) {
      _DAT_1468e34a8 = 0xc1cd5dcf;
      _DAT_1468e34ac = 0x2ab44958;
      _DAT_1468e34b0 = 0xb3ff4f8f;
      _DAT_1468e34b4 = 0xe665d121;
      _Init_thread_footer(&DAT_1468e34b8);
    }
  }
  return &DAT_1468e34a8;
}



// FUNCTION 1416741c0 HMACBuffer body=719 status=ok
// SIG undefined HMACBuffer(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FSHA1::HMACBuffer(void *param_1,uint param_2,void *param_3,uint param_4,ulonglong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined8 local_1d4;
  ulonglong local_1c8;
  ulonglong uStack_1c0;
  ulonglong local_1b8;
  ulonglong uStack_1b0;
  ulonglong local_1a8;
  ulonglong uStack_1a0;
  ulonglong local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  undefined4 local_178;
  undefined1 local_168 [64];
  undefined1 *local_128;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  uVar14 = (ulonglong)param_2;
  if (param_2 < 0x41) {
    if (param_2 < 0x40) {
      ::_guard_xfg_dispatch_icall_nop(&local_118,param_1,uVar14);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)&local_118 + uVar14),0,(ulonglong)(0x40 - param_2));
    }
    else {
      ::_guard_xfg_dispatch_icall_nop(&local_118,param_1,uVar14);
    }
  }
  else {
    local_128 = local_168;
    local_1e8 = 0x67452301;
    local_1e4 = 0xefcdab89;
    local_1e0 = 0x98badcfe;
    local_1dc = 0x10325476;
    local_1d8 = 0xc3d2e1f0;
    local_1d4 = 0;
    Update(&local_1e8,param_1,uVar14);
    Final(&local_1e8);
    local_108 = local_178;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    local_dc = 0;
    local_118 = local_188;
    uStack_110 = uStack_180;
  }
  uVar14 = CONCAT44(uStack_104,local_108);
  uVar2 = CONCAT44(uStack_fc,uStack_100);
  uVar1 = CONCAT44(uStack_104,local_108);
  uVar3 = CONCAT44(uStack_fc,uStack_100);
  uVar4 = CONCAT44(uStack_f4,uStack_f8);
  uVar6 = CONCAT44(uStack_ec,uStack_f0);
  uVar5 = CONCAT44(uStack_f4,uStack_f8);
  uVar7 = CONCAT44(uStack_ec,uStack_f0);
  uVar8 = CONCAT44(uStack_e4,uStack_e8);
  uVar10 = CONCAT44(local_dc,uStack_e0);
  uVar9 = CONCAT44(uStack_e4,uStack_e8);
  uVar11 = CONCAT44(local_dc,uStack_e0);
  puVar13 = (ulonglong *)operator_new((ulonglong)param_4 + 0x40);
  *puVar13 = local_118 ^ 0x3636363636363636;
  puVar13[1] = uStack_110 ^ 0x3636363636363636;
  puVar13[2] = uVar1 ^ 0x3636363636363636;
  puVar13[3] = uVar3 ^ 0x3636363636363636;
  puVar13[4] = uVar5 ^ 0x3636363636363636;
  puVar13[5] = uVar7 ^ 0x3636363636363636;
  puVar13[6] = uVar9 ^ 0x3636363636363636;
  puVar13[7] = uVar11 ^ 0x3636363636363636;
  ::_guard_xfg_dispatch_icall_nop(puVar13 + 8,param_3,(ulonglong)param_4);
  local_128 = local_168;
  local_1e8 = 0x67452301;
  local_1e4 = 0xefcdab89;
  local_1e0 = 0x98badcfe;
  local_1dc = 0x10325476;
  local_1d8 = 0xc3d2e1f0;
  local_1d4 = 0;
  Update(&local_1e8,puVar13,param_4 + 0x40);
  Final(&local_1e8);
  uVar12 = local_178;
  uVar3 = uStack_180;
  uVar1 = local_188;
  FMemory::operator_delete(puVar13);
  local_128 = local_168;
  local_1e8 = 0x67452301;
  local_1e4 = 0xefcdab89;
  local_1e0 = 0x98badcfe;
  local_1dc = 0x10325476;
  local_1d8 = 0xc3d2e1f0;
  local_1d4 = 0x2a0;
  local_1c8 = local_118 ^ 0x5c5c5c5c5c5c5c5c;
  uStack_1c0 = uStack_110 ^ 0x5c5c5c5c5c5c5c5c;
  local_1b8 = uVar14 ^ 0x5c5c5c5c5c5c5c5c;
  uStack_1b0 = uVar2 ^ 0x5c5c5c5c5c5c5c5c;
  local_1a8 = uVar4 ^ 0x5c5c5c5c5c5c5c5c;
  uStack_1a0 = uVar6 ^ 0x5c5c5c5c5c5c5c5c;
  local_198 = uVar8 ^ 0x5c5c5c5c5c5c5c5c;
  uStack_190 = uVar10 ^ 0x5c5c5c5c5c5c5c5c;
  Transform(&local_1e8,&local_1e8,&local_1c8);
  local_1b8 = CONCAT44(local_1b8._4_4_,uVar12);
  local_1c8 = uVar1;
  uStack_1c0 = uVar3;
  Final(&local_1e8);
  *param_5 = local_188;
  param_5[1] = uStack_180;
  *(undefined4 *)(param_5 + 2) = local_178;
  return;
}



// FUNCTION 141674490 HasChangelist body=11 status=ok
// SIG undefined HasChangelist(void)

bool FEngineVersionBase::HasChangelist(longlong param_1)

{
  return (*(uint *)(param_1 + 8) & 0x7fffffff) != 0;
}



// FUNCTION 1416744a0 HashBuffer body=159 status=ok
// SIG undefined HashBuffer(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FSHA1::HashBuffer(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_68 [64];
  undefined1 *local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_28 = local_68;
  local_e8 = 0x67452301;
  local_d4 = 0;
  local_e4 = 0xefcdab89;
  local_e0 = 0x98badcfe;
  local_dc = 0x10325476;
  local_d8 = 0xc3d2e1f0;
  Update(&local_e8,param_1,param_2);
  Final(&local_e8);
  *param_3 = local_88;
  param_3[1] = uStack_80;
  *(undefined4 *)(param_3 + 2) = local_78;
  return;
}



// FUNCTION 141674540 HexNumber body=84 status=ok
// SIG undefined HexNumber(void)

int FParse::HexNumber(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = 0;
  do {
    if (uVar1 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 * 0x10;
    if ((ushort)(uVar1 - 0x30) < 10) {
      iVar2 = iVar2 + -0x30;
LAB_14167457e:
      iVar2 = iVar2 + (uint)uVar1;
    }
    else {
      if ((ushort)(uVar1 - 0x61) < 6) {
        iVar2 = iVar2 + -0x57;
        goto LAB_14167457e;
      }
      if ((ushort)(uVar1 - 0x41) < 6) {
        iVar2 = iVar2 + -0x37;
        goto LAB_14167457e;
      }
    }
    uVar1 = param_1[1];
    param_1 = param_1 + 1;
  } while( true );
}



// FUNCTION 1416745a0 FUN_1416745a0 body=366 status=ok
// SIG undefined FUN_1416745a0(void)

undefined8 FUN_1416745a0(undefined8 param_1,longlong *param_2)

{
  short *psVar1;
  wchar_t *pwVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int iVar9;
  wchar_t *_Source;
  wchar_t *local_38;
  ulonglong local_30;
  
  psVar1 = (short *)*param_2;
  lVar7 = -1;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (psVar1[lVar5] != 0);
  if ((int)lVar5 < 0x20) {
    return 0;
  }
  iVar9 = 0;
  local_38 = (wchar_t *)0x0;
  pwVar8 = (wchar_t *)0x0;
  if ((psVar1 != (short *)0x0) && (pwVar8 = (wchar_t *)0x0, *psVar1 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (psVar1[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_30 = (ulonglong)uVar6;
    uVar4 = uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar4 = (uint)local_30;
    }
    pwVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,psVar1,(longlong)(int)uVar6 * 2);
    if (uVar4 != 0) {
      iVar9 = uVar4 - 1;
      _Source = pwVar8;
      goto LAB_141674654;
    }
  }
  _Source = L"";
LAB_141674654:
  local_38 = (wchar_t *)0x0;
  if (0x20 < iVar9) {
    iVar9 = 0x20;
  }
  uVar4 = iVar9 + 1;
  if (iVar9 == 0) {
    uVar4 = 0;
  }
  local_30 = (ulonglong)uVar4;
  if (0 < (int)uVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    pwVar2 = local_38;
    if (0 < (int)(uint)local_30) {
      wcsncpy(local_38,_Source,(longlong)iVar9);
      pwVar2[iVar9] = L'\0';
    }
  }
  cVar3 = FUN_1416791b0(&local_38,0,param_1);
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (pwVar8 != (wchar_t *)0x0) {
    FMemory::Free(pwVar8);
  }
  if (cVar3 == '\0') {
    return 0;
  }
  *param_2 = *param_2 + 0x40;
  return 1;
}



// FUNCTION 141674710 IncludeCategory body=244 status=ok
// SIG undefined IncludeCategory(void)

void FOutputDeviceFile::IncludeCategory(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_res8;
  
  plVar1 = (longlong *)(param_1 + 0x828);
  if (*plVar1 == 0) {
    puVar3 = (undefined8 *)operator_new(0x50);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[7] = 0;
      puVar3[9] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      *(undefined4 *)(puVar3 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)puVar3 + 0x34) = 0;
      puVar3[8] = 0;
    }
    if (plVar1 == &local_res8) {
      if (puVar3 == (undefined8 *)0x0) goto LAB_1416747e1;
      *(undefined4 *)(puVar3 + 9) = 0;
      if (puVar3[8] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (puVar3);
    }
    else {
      puVar2 = (undefined8 *)*plVar1;
      *plVar1 = (longlong)puVar3;
      if (puVar2 == (undefined8 *)0x0) goto LAB_1416747e1;
      *(undefined4 *)(puVar2 + 9) = 0;
      if (puVar2[8] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (puVar2);
      puVar3 = puVar2;
    }
    FMemory::operator_delete(puVar3,0x50);
  }
LAB_1416747e1:
  FUN_140800100(*plVar1,&local_res8,param_2,0);
  return;
}



// FUNCTION 141674810 Initialize body=81 status=ok
// SIG undefined Initialize(void)

void FSlowTask::Initialize(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x60);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
    }
    *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 141674870 InitializeFileHashesFromBuffer body=469 status=ok
// SIG undefined InitializeFileHashesFromBuffer(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FSHA1::InitializeFileHashesFromBuffer(longlong param_1,int param_2,char param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  ulonglong local_180;
  undefined4 *local_178;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined4 **local_160;
  undefined1 local_158 [256];
  longlong local_58;
  short *local_50;
  ulonglong local_38;
  
  if (param_2 < 1) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  bVar1 = true;
  iVar11 = 0;
LAB_1416748c0:
  pcVar10 = (char *)(iVar11 + param_1);
  if (*pcVar10 != '\0') {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pcVar10[lVar6] != '\0');
    iVar11 = iVar11 + (int)lVar6 + 1;
    lVar6 = 0;
LAB_1416748f0:
    lVar7 = lVar6 + 1;
    if (pcVar10[lVar6] == (&DAT_144ccab24)[lVar6]) goto code_r0x0001416748fe;
    puVar13 = (undefined4 *)(iVar11 + param_1);
    if (param_3 != '\0') {
      puVar8 = (undefined4 *)FMemory::Malloc(0x14);
      uVar2 = puVar13[1];
      uVar3 = puVar13[2];
      uVar4 = puVar13[3];
      *puVar8 = *puVar13;
      puVar8[1] = uVar2;
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      puVar8[4] = puVar13[4];
      puVar13 = puVar8;
    }
    local_178 = puVar13;
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,pcVar10);
    psVar5 = local_50;
    local_188 = 0;
    local_180 = 0;
    if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
      lVar6 = -1;
      do {
        lVar7 = lVar6 + 1;
        lVar6 = lVar6 + 1;
      } while (local_50[lVar7] != 0);
      uVar12 = (int)lVar6 + 1;
      local_180 = (ulonglong)uVar12;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
      }
      FGenericPlatformString::Memcpy(local_188,psVar5,(longlong)(int)uVar12 * 2);
    }
    local_168 = &local_188;
    puVar9 = (undefined8 *)&DAT_1464af9c0;
    local_160 = &local_178;
    if (bVar1) {
      puVar9 = &DAT_1464af970;
    }
    FUN_14165f700(puVar9,local_170,&local_168,0);
    if (local_188 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    iVar11 = iVar11 + 0x14;
  }
  goto LAB_141674a04;
code_r0x0001416748fe:
  lVar6 = lVar7;
  if (lVar7 == 4) goto code_r0x000141674904;
  goto LAB_1416748f0;
code_r0x000141674904:
  bVar1 = false;
LAB_141674a04:
  if (param_2 <= iVar11) {
    return;
  }
  goto LAB_1416748c0;
}



// FUNCTION 141674a50 IsCompatibleWith body=202 status=ok
// SIG undefined IsCompatibleWith(void)

bool FEngineVersion::IsCompatibleWith(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)(param_1 + 4) & 0x7fffffff;
  if (uVar2 != 0) {
    uVar1 = *(uint *)(param_2 + 4) & 0x7fffffff;
    if (uVar1 != 0) {
      if (*param_1 == *param_2) {
        bVar3 = param_2[1] < param_1[1];
        if (param_2[1] == param_1[1]) {
          if (param_1[2] != param_2[2]) {
            return param_2[2] < param_1[2];
          }
          if (((byte)(*(uint *)(param_1 + 4) >> 0x1f) == (byte)(*(uint *)(param_2 + 4) >> 0x1f)) &&
             (uVar2 != uVar1)) {
            return uVar1 < uVar2;
          }
          return true;
        }
      }
      else {
        bVar3 = *param_2 < *param_1;
      }
      return bVar3;
    }
  }
  return true;
}



// FUNCTION 141674b20 IsDone body=93 status=ok
// SIG undefined IsDone(void)

undefined8 FAsyncTask<FRemoteConfigAsyncWorker>::IsDone(longlong param_1)

{
  bool bVar1;
  
  LOCK();
  bVar1 = *(int *)(param_1 + 0x1050) == 0;
  if (bVar1) {
    *(int *)(param_1 + 0x1050) = 0;
  }
  UNLOCK();
  if (bVar1) {
    if (*(longlong *)(param_1 + 0x1060) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x1058) + 0x20))
                (*(longlong **)(param_1 + 0x1058),0xffffffff,0);
      *(undefined8 *)(param_1 + 0x1060) = 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 141674b80 FUN_141674b80 body=2080 status=ok
// SIG undefined FUN_141674b80(void)

undefined8 FUN_141674b80(undefined8 *param_1)

{
  short *psVar1;
  void *_Src;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  wint_t **ppwVar8;
  wchar_t *pwVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  wint_t *pwVar19;
  undefined8 uVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  undefined2 *puVar23;
  wchar_t *pwVar24;
  undefined4 uVar25;
  wchar_t *pwVar26;
  wchar_t *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  wint_t *local_58;
  int local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  local_50 = *(int *)(param_1 + 1);
  lVar18 = (longlong)local_50;
  _Src = (void *)*param_1;
  pwVar21 = (wchar_t *)0x0;
  local_58 = (wint_t *)0x0;
  uVar14 = 0;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar18 * 2);
  }
  ppwVar8 = (wint_t **)FString::Replace(&local_58,&local_38,&DAT_144ccabf4,&DAT_144ccabc4,0);
  if (&local_58 != ppwVar8) {
    if (local_58 != (wint_t *)0x0) {
      FMemory::Free();
    }
    local_58 = *ppwVar8;
    *ppwVar8 = (wint_t *)0x0;
    local_50 = *(int *)(ppwVar8 + 1);
    local_4c = *(undefined4 *)((longlong)ppwVar8 + 0xc);
    ppwVar8[1] = (wint_t *)0x0;
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  pwVar19 = local_58;
  if ((local_50 != 0) && (*local_58 != 0)) {
    wVar5 = towupper(*local_58);
    wVar6 = towlower(*pwVar19);
    if ((((wVar5 == wVar6) || ((pwVar19[1] != 0x3a || (pwVar19[2] != 0)))) &&
        ((*pwVar19 != 0x5c || (pwVar19[1] != 0)))) &&
       ((((*pwVar19 != 0x5c || (pwVar19[1] != 0x5c)) || (pwVar19[2] != 0)) &&
        (((*pwVar19 != 0x5c || (pwVar19[1] != 0x5c)) ||
         (pwVar9 = _guard_xfg_dispatch_icall_nop((wchar_t *)(pwVar19 + 2),L'\\'),
         pwVar9 != (wchar_t *)0x0)))))) {
      local_60 = 0;
      local_68 = (undefined2 *)0x0;
      uVar16 = uVar14;
      if (*pwVar19 != 0) {
        lVar18 = -1;
        do {
          lVar18 = lVar18 + 1;
        } while (pwVar19[lVar18] != 0);
        uVar15 = (int)lVar18 + 1;
        local_60 = (ulonglong)uVar15;
        if (0 < (int)uVar15) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        }
        FGenericPlatformString::Memcpy(local_68,pwVar19,(longlong)(int)uVar15 * 2);
        if ((int)local_60 != 0) {
          uVar16 = (int)local_60 - 1;
        }
      }
      iVar7 = FUN_141592950(&local_68,&DAT_144ccac2c,0,1,0xffffffff);
      uVar3 = local_60;
      if (iVar7 != uVar16 - 1) {
        iVar7 = (int)local_60;
        lVar18 = (longlong)(int)local_60;
        iVar10 = (2 - (uint)((int)local_60 != 0)) + (int)local_60;
        local_60 = CONCAT44(local_60._4_4_,iVar10);
        if (local_60._4_4_ < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar3 & 0xffffffff);
        }
        local_68[lVar18 - (ulonglong)(iVar7 != 0)] = 0x5c;
        (local_68 + (lVar18 - (ulonglong)(iVar7 != 0)))[1] = 0;
      }
      local_78 = (wchar_t *)0x0;
      local_70 = 0;
      iVar7 = FUN_141592950(&local_68,&DAT_144ccc678,0,0,0xffffffff);
      uVar15 = 0;
      pwVar9 = pwVar21;
      uVar16 = 0;
      uVar25 = 0;
      if (iVar7 == -1) {
        cVar4 = FString::StartsWith(&local_68,&DAT_144ccc680,0);
        if (cVar4 == '\x01') {
          uVar11 = (int)local_60 - 1;
          if ((int)local_60 == 0) {
            uVar11 = uVar15;
          }
          uVar11 = uVar11 - 2;
          if ((int)local_60 == 0) {
            puVar23 = &DAT_143f3eda8;
            uVar12 = uVar15;
          }
          else {
            puVar23 = local_68;
            uVar12 = (int)local_60 - 1;
          }
          uVar17 = uVar15;
          if ((-1 < (int)uVar11) && (uVar17 = uVar12, (int)uVar11 < (int)uVar12)) {
            uVar17 = uVar11;
          }
          local_48 = (wchar_t *)0x0;
          local_40 = local_40 & 0xffffffff;
          psVar1 = puVar23 + ((longlong)(int)uVar12 - (longlong)(int)uVar17);
          pwVar24 = pwVar21;
          uVar11 = uVar15;
          uVar12 = uVar15;
          if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
            lVar18 = -1;
            do {
              lVar18 = lVar18 + 1;
            } while (psVar1[lVar18] != 0);
            uVar17 = (int)lVar18 + 1;
            local_40 = (ulonglong)uVar17;
            uVar11 = uVar17;
            uVar12 = 0;
            if (0 < (int)uVar17) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
              uVar11 = (uint)local_40;
              uVar12 = local_40._4_4_;
            }
            pwVar24 = local_48;
            FGenericPlatformString::Memcpy(local_48,psVar1,(longlong)(int)uVar17 * 2);
          }
          if (local_78 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          local_70 = CONCAT44(uVar12,uVar11);
          local_78 = pwVar24;
          iVar7 = FUN_141592950(&local_78,&DAT_144ccac94,0,0,0xffffffff);
          if (iVar7 != -1) {
            uVar11 = (uint)local_70 - 1;
            if ((uint)local_70 == 0) {
              uVar11 = uVar15;
            }
            uVar12 = (uVar11 - iVar7) - 1;
            if ((uint)local_70 == 0) {
              pwVar24 = L"";
            }
            else {
              uVar14 = (uint)local_70 - 1;
              pwVar24 = local_78;
            }
            if ((-1 < (int)uVar12) && (uVar15 = uVar14, (int)(uVar11 - iVar7) <= (int)uVar14)) {
              uVar15 = uVar12;
            }
            local_48 = (wchar_t *)0x0;
            local_40 = local_40 & 0xffffffff;
            pwVar24 = pwVar24 + ((longlong)(int)uVar14 - (longlong)(int)uVar15);
            if ((pwVar24 != (wchar_t *)0x0) && (uVar25 = 0, uVar16 = 0, *pwVar24 != L'\0')) {
              lVar18 = -1;
              do {
                lVar18 = lVar18 + 1;
              } while (pwVar24[lVar18] != L'\0');
              uVar14 = (int)lVar18 + 1;
              local_40 = (ulonglong)uVar14;
              uVar16 = uVar14;
              uVar25 = 0;
              if (0 < (int)uVar14) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
                uVar16 = (uint)local_40;
                uVar25 = local_40._4_4_;
              }
              pwVar9 = local_48;
              FGenericPlatformString::Memcpy(local_48,pwVar24,(longlong)(int)uVar14 * 2);
            }
            goto joined_r0x000141675052;
          }
          if (local_78 != L"") {
            uVar14 = local_70._4_4_;
            local_70 = (ulonglong)local_70._4_4_ << 0x20;
            iVar7 = 0;
            if (uVar14 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78,0);
              pwVar9 = (wchar_t *)(local_70 & 0xffffffff);
              iVar7 = local_70._4_4_;
            }
            uVar16 = (uint)pwVar9;
            if ((int)(uint)pwVar9 <= iVar7) goto LAB_1416750a6;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,pwVar9);
          }
        }
        uVar16 = (uint)local_70;
      }
      else {
        uVar11 = (int)local_60 - 1;
        if ((int)local_60 == 0) {
          uVar11 = uVar14;
        }
        uVar11 = (uVar11 - iVar7) - 2;
        if ((int)local_60 == 0) {
          puVar23 = &DAT_143f3eda8;
        }
        else {
          uVar14 = (int)local_60 - 1;
          puVar23 = local_68;
        }
        if ((-1 < (int)uVar11) && (uVar15 = uVar14, (int)uVar11 < (int)uVar14)) {
          uVar15 = uVar11;
        }
        local_48 = (wchar_t *)0x0;
        local_40 = local_40 & 0xffffffff;
        psVar1 = puVar23 + ((longlong)(int)uVar14 - (longlong)(int)uVar15);
        if ((psVar1 != (short *)0x0) && (uVar25 = 0, uVar16 = 0, *psVar1 != 0)) {
          lVar18 = -1;
          do {
            lVar18 = lVar18 + 1;
          } while (psVar1[lVar18] != 0);
          uVar14 = (int)lVar18 + 1;
          local_40 = (ulonglong)uVar14;
          uVar16 = uVar14;
          uVar25 = 0;
          if (0 < (int)uVar14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
            uVar16 = (uint)local_40;
            uVar25 = local_40._4_4_;
          }
          pwVar9 = local_48;
          FGenericPlatformString::Memcpy(local_48,psVar1,(longlong)(int)uVar14 * 2);
        }
joined_r0x000141675052:
        if (local_78 != (wchar_t *)0x0) {
          FMemory::Free(local_78);
        }
        local_70 = CONCAT44(uVar25,uVar16);
        local_78 = pwVar9;
      }
LAB_1416750a6:
      if ((uVar16 == 0) || ((int)(uVar16 - 1) < 1)) goto LAB_14167537c;
      FString::Replace(&local_78,&local_38,&DAT_144ccc73c,&DAT_144ccad4c,0);
      if (local_38 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      uVar14 = FUN_141592950(&local_78,&DAT_144ccad8c,0,0,0xffffffff);
      if (uVar14 != 0xffffffff) {
LAB_141675120:
        pwVar9 = (wchar_t *)0x0;
        uVar16 = 0;
        if ((uint)local_70 == 0) {
          pwVar24 = L"";
          uVar15 = uVar16;
        }
        else {
          pwVar24 = local_78;
          uVar15 = (uint)local_70 - 1;
        }
        uVar11 = uVar16;
        if ((-1 < (int)uVar14) && (uVar11 = uVar15, (int)uVar14 < (int)uVar15)) {
          uVar11 = uVar14;
        }
        local_38 = (wchar_t *)0x0;
        local_2c = 0;
        pwVar22 = (wchar_t *)(ulonglong)(uVar11 + 1);
        if (uVar11 == 0) {
          pwVar22 = pwVar9;
        }
        iVar7 = (int)pwVar22;
        pwVar22 = pwVar9;
        local_30 = iVar7;
        if ((0 < iVar7) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar7 = local_30,
           pwVar22 = local_38, 0 < local_30)) {
          wcsncpy(local_38,pwVar24,(longlong)(int)uVar11);
          pwVar22[(int)uVar11] = L'\0';
        }
        pwVar19 = &DAT_144ccc744;
        pwVar24 = L"";
        if (iVar7 != 0) {
          pwVar24 = pwVar22;
        }
        do {
          wVar5 = *(wint_t *)((longlong)pwVar19 + (longlong)(pwVar24 + -0xa26663a2));
          if ((wVar5 == 0) && (uVar15 = uVar16, *pwVar19 == 0)) goto LAB_1416751ed;
          if (wVar5 != *pwVar19) {
            wVar5 = towlower(wVar5);
            wVar6 = towlower(*pwVar19);
            if (wVar5 != wVar6) goto LAB_1416751e5;
          }
          pwVar19 = pwVar19 + 1;
        } while( true );
      }
      goto LAB_14167531f;
    }
  }
LAB_14167533f:
  uVar20 = 1;
LAB_141675341:
  if (local_58 != (wint_t *)0x0) {
    FMemory::Free(local_58);
  }
  return uVar20;
LAB_1416751e5:
  uVar15 = (uint)wVar5 - (uint)wVar6;
LAB_1416751ed:
  iVar7 = -1;
  if (uVar15 != 0) {
    iVar7 = 1;
  }
  uVar11 = iVar7 + (int)pwVar21;
  pwVar21 = (wchar_t *)(ulonglong)uVar11;
  uVar15 = (uint)local_70 - 1;
  if ((uint)local_70 == 0) {
    uVar15 = uVar16;
  }
  uVar12 = (uVar15 - uVar14) - 1;
  if ((uint)local_70 == 0) {
    pwVar24 = L"";
    uVar17 = uVar16;
  }
  else {
    pwVar24 = local_78;
    uVar17 = (uint)local_70 - 1;
  }
  uVar13 = uVar16;
  if ((-1 < (int)uVar12) && (uVar13 = uVar17, (int)(uVar15 - uVar14) <= (int)uVar17)) {
    uVar13 = uVar12;
  }
  local_48 = (wchar_t *)0x0;
  local_40 = local_40 & 0xffffffff;
  pwVar24 = pwVar24 + ((longlong)(int)uVar17 - (longlong)(int)uVar13);
  pwVar26 = pwVar9;
  if ((pwVar24 != (wchar_t *)0x0) && (*pwVar24 != L'\0')) {
    lVar18 = -1;
    do {
      lVar2 = lVar18 + 1;
      lVar18 = lVar18 + 1;
    } while (pwVar24[lVar2] != L'\0');
    uVar14 = (int)lVar18 + 1;
    local_40 = (ulonglong)uVar14;
    uVar16 = uVar14;
    if (0 < (int)uVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      pwVar9 = (wchar_t *)(local_40 >> 0x20);
      uVar16 = (uint)local_40;
    }
    pwVar26 = local_48;
    FGenericPlatformString::Memcpy(local_48,pwVar24,(longlong)(int)uVar14 * 2);
  }
  if (local_78 != (wchar_t *)0x0) {
    FMemory::Free(local_78);
  }
  local_40 = 0;
  local_48 = (wchar_t *)0x0;
  local_70._4_4_ = (uint)pwVar9;
  local_70 = CONCAT44(local_70._4_4_,uVar16);
  local_78 = pwVar26;
  uVar14 = FUN_141592950(&local_78,&DAT_144ccadec,0,0,0xffffffff);
  if (pwVar22 != (wchar_t *)0x0) {
    FMemory::Free(pwVar22);
  }
  if (uVar14 == 0xffffffff) goto code_r0x000141675313;
  goto LAB_141675120;
code_r0x000141675313:
  if (0 < (int)uVar11) {
LAB_14167537c:
    if (local_78 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    uVar20 = 0;
    goto LAB_141675341;
  }
LAB_14167531f:
  if (local_78 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  goto LAB_14167533f;
}



// FUNCTION 1416753a0 IsFinished body=12 status=ok
// SIG undefined IsFinished(void)

void FRemoteConfig::IsFinished(void)

{
  FRemoteConfigAsyncTaskManager::IsFinished(&DAT_1464afc30);
  return;
}



// FUNCTION 1416753b0 IsFinished body=407 status=ok
// SIG undefined IsFinished(void)

undefined1 FRemoteConfigAsyncTaskManager::IsFinished(longlong *param_1,short *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 uVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  puVar11 = (undefined2 *)0x0;
  local_38 = (undefined2 *)0x0;
  iVar10 = 0;
  local_2c = 0;
  puVar12 = puVar11;
  if ((param_2 != (short *)0x0) && (puVar12 = (undefined2 *)0x0, *param_2 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != 0);
    iVar7 = (int)lVar8 + 1;
    local_30 = iVar7;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar10 = local_30;
    puVar12 = local_38;
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)iVar7 * 2);
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    puVar5 = &DAT_143f3eda8;
    if (iVar10 != 0) {
      puVar5 = puVar12;
    }
    iVar7 = FUN_140438070(puVar5);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar7 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar7) * 4);
    if (iVar7 != -1) {
      lVar8 = *param_1;
      do {
        lVar9 = (longlong)iVar7 * 0x20;
        puVar5 = &DAT_143f3eda8;
        if (iVar10 != 0) {
          puVar5 = puVar12;
        }
        if (*(int *)(lVar9 + 8 + lVar8) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)(lVar9 + lVar8);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar5);
        if (iVar3 == 0) {
          if ((iVar7 != -1) && (lVar8 = (longlong)iVar7 * 0x20 + *param_1, lVar8 != 0)) {
            puVar11 = *(undefined2 **)(lVar8 + 0x10);
          }
          break;
        }
        lVar8 = *param_1;
        iVar7 = *(int *)(lVar9 + 0x18 + lVar8);
      } while (iVar7 != -1);
    }
  }
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  if (puVar11 == (undefined2 *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FAsyncTask<FRemoteConfigAsyncWorker>::IsDone(puVar11);
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}



// FUNCTION 141675550 IsNetworkCompatible body=99 status=ok
// SIG undefined IsNetworkCompatible(void)

bool FNetworkVersion::IsNetworkCompatible(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((DAT_1468e30e8 != 0) && (DAT_1468e30e0 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*DAT_1468e30e0 + 0x18))();
    if (cVar1 != '\0') {
      plVar3 = (longlong *)0x0;
      if (DAT_1468e30e8 != 0) {
        plVar3 = DAT_1468e30e0;
      }
                    /* WARNING: Could not recover jumptable at 0x00014167559f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,param_1,param_2);
      return (bool)uVar2;
    }
  }
  return param_1 == param_2;
}



// FUNCTION 1416755d0 FUN_1416755d0 body=185 status=ok
// SIG undefined FUN_1416755d0(void)

bool FUN_1416755d0(void)

{
  int iVar1;
  BOOL BVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e31c8) {
    _Init_thread_header(&DAT_1468e31c8);
    if (DAT_1468e31c8 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1468e31a0);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1468e31a0,4000);
      atexit((_func_5014 *)&LAB_143e7a6c0);
      _Init_thread_footer(&DAT_1468e31c8);
    }
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468e31a0);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468e31a0);
  }
  iVar1 = (int)DAT_1468e30f8;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468e31a0);
  return 1 < iVar1;
}



// FUNCTION 141675690 IsRedirectingTo body=135 status=ok
// SIG undefined IsRedirectingTo(void)

bool FOutputDeviceRedirector::IsRedirectingTo(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  plVar4 = plVar1;
  do {
    if (plVar4 == plVar1 + *(int *)(param_1 + 0x38)) {
      iVar3 = -1;
LAB_1416756e9:
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
      return iVar3 != -1;
    }
    if (*plVar4 == param_2) {
      iVar3 = (int)((longlong)plVar4 - (longlong)plVar1 >> 3);
      goto LAB_1416756e9;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}



// FUNCTION 141675720 IsRelative body=83 status=ok
// SIG undefined IsRelative(void)

ulonglong FPaths::IsRelative(undefined8 *param_1)

{
  wint_t _C;
  uint uVar1;
  int iVar2;
  wint_t *pwVar3;
  undefined4 extraout_var;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  pwVar3 = (wint_t *)(ulonglong)uVar1;
  uVar4 = uVar1 - 1;
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    pwVar3 = (wint_t *)*param_1;
    _C = *pwVar3;
    if (_C == 0x2f) {
LAB_141675765:
      return (ulonglong)pwVar3 & 0xffffffffffffff00;
    }
    if (1 < uVar4) {
      if ((_C == 0x5c) && (pwVar3[1] == 0x5c)) goto LAB_141675765;
      if (pwVar3[1] == 0x3a) {
        iVar2 = iswalpha(_C);
        pwVar3 = (wint_t *)CONCAT44(extraout_var,iVar2);
        if (iVar2 != 0) goto LAB_141675765;
      }
    }
  }
  return CONCAT71((int7)((ulonglong)pwVar3 >> 8),1);
}



// FUNCTION 141675780 IsUsingLocalIniFile body=115 status=ok
// SIG undefined IsUsingLocalIniFile(void)

undefined4 IsUsingLocalIniFile(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FRemoteConfig::FindConfig(&DAT_1464afbc0,param_1);
  if (param_2 == 0) {
    bVar3 = true;
  }
  else {
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(param_1,param_2);
    bVar3 = iVar1 == 0;
  }
  if (((lVar2 != 0) && (bVar3)) && (*(char *)(lVar2 + 0x28) == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 141675800 Lex body=451 status=ok
// SIG undefined Lex(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ExpressionParser::Lex(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  longlong *local_58;
  char local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  uStack_90 = 0;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(short *)(param_2 + lVar6 * 2) != 0);
  local_80 = param_2 + (longlong)(int)lVar6 * 2;
  local_88 = param_2;
  local_78 = param_2;
  if (param_2 != local_80) {
    do {
      FUN_141668840(param_3,local_40,&local_98);
      if (local_28 != '\0') {
        local_48 = 0;
        FText::FText(local_60,local_40);
        local_48 = '\x01';
        if (local_28 != '\0') {
          local_28 = '\0';
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
            if (local_48 == '\0') goto LAB_141675894;
          }
        }
        FText::FText(param_1,local_60);
        *(undefined1 *)(param_1 + 0x18) = 1;
        *(undefined1 *)(param_1 + 0x30) = 0;
        if (local_48 != '\0') {
          local_48 = '\0';
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_58 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
        goto LAB_1416758cd;
      }
    } while (local_78 != local_80);
  }
  local_48 = '\0';
LAB_141675894:
  uVar5 = uStack_90;
  uVar4 = (ulonglong)uStack_90 >> 0x20;
  *(undefined1 *)(param_1 + 0x18) = 0;
  local_70 = 0;
  *(undefined8 *)(param_1 + 0x20) = local_98;
  uStack_68 = 0;
  local_98 = 0;
  uStack_90 = 0;
  *(int *)(param_1 + 0x28) = (int)uVar5;
  *(int *)(param_1 + 0x2c) = (int)uVar4;
  *(undefined1 *)(param_1 + 0x30) = 1;
LAB_1416758cd:
  FUN_141661650(&local_98);
  return param_1;
}



// FUNCTION 1416759d0 FUN_1416759d0 body=367 status=ok
// SIG undefined FUN_1416759d0(void)

void FUN_1416759d0(undefined8 param_1,short *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  if (param_2 == (short *)0x0) {
    return;
  }
  local_28 = 0;
  if (*param_2 == 0) {
    return;
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (param_2[lVar4] != 0);
  uVar3 = (int)lVar4 + 1;
  local_20 = (ulonglong)uVar3;
  if (0 < (int)uVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  }
  FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar3 * 2);
  if ((int)local_20 != 0) {
    if ((int)local_20 == 0x21) {
      uVar2 = 0;
    }
    else if ((int)local_20 == 0x25) {
      uVar2 = 1;
    }
    else if ((int)local_20 == 0x27) {
      local_18[0] = 0;
      local_18[1] = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18[0],2,&DAT_144cca884,2,0x3f);
      cVar1 = FString::StartsWith(&local_28,local_18,1);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 == '\0') {
        uVar2 = 3;
      }
      else {
        uVar2 = 2;
      }
    }
    else if ((int)local_20 == 0x45) {
      uVar2 = 4;
    }
    else if ((int)local_20 == 0x24) {
      uVar2 = 5;
    }
    else {
      if ((int)local_20 != 0x2c) goto LAB_141675b1b;
      uVar2 = 6;
    }
    FUN_1416791b0(&local_28,uVar2,param_1);
  }
LAB_141675b1b:
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141675b40 Line body=451 status=ok
// SIG undefined Line(void)

longlong FParse::Line(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  short *psVar7;
  uint7 uVar8;
  short sVar9;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  iVar6 = 0;
  bVar2 = false;
  if ((undefined *)*param_2 != &DAT_144cc8d5c) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2);
      iVar6 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar6;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
  }
  psVar7 = (short *)*param_1;
  sVar9 = *psVar7;
  while (((sVar9 != 0 && (sVar9 != 10)) && (sVar9 != 0xd))) {
    if ((!bVar2) && (param_3 == '\0')) {
      if ((sVar9 == 0x2f) && (bVar3 = bVar4, psVar7[1] == 0x2f)) {
        bVar4 = true;
        bVar3 = true;
      }
      if (sVar9 == 0x7c) goto LAB_141675ce0;
    }
    bVar5 = true;
    bVar2 = (bool)(bVar2 ^ sVar9 == 0x22);
    psVar7 = psVar7 + 1;
    *param_1 = (longlong)psVar7;
    if ((!bVar3) && (sVar9 != 0)) {
      iVar6 = (int)param_2[1];
      iVar1 = iVar6 + -1;
      if (iVar6 < 1) {
        iVar1 = 0;
      }
      iVar6 = (iVar6 < 1) + 1 + iVar6;
      *(int *)(param_2 + 1) = iVar6;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      *(short *)(*param_2 + (longlong)iVar1 * 2) = sVar9;
      *(undefined2 *)(*param_2 + 2 + (longlong)iVar1 * 2) = 0;
      psVar7 = (short *)*param_1;
    }
    sVar9 = *psVar7;
  }
  if (param_3 == '\0') {
LAB_141675ce0:
    while (((sVar9 = *psVar7, sVar9 == 10 || (sVar9 == 0xd)) || (sVar9 == 0x7c))) {
      psVar7 = psVar7 + 1;
      *param_1 = (longlong)psVar7;
    }
  }
  else {
    sVar9 = *psVar7;
    if (sVar9 == 0xd) {
      psVar7 = psVar7 + 1;
      *param_1 = (longlong)psVar7;
      sVar9 = *psVar7;
    }
    if (sVar9 == 10) {
      psVar7 = psVar7 + 1;
      *param_1 = (longlong)psVar7;
    }
    sVar9 = *psVar7;
  }
  uVar8 = (uint7)((ulonglong)psVar7 >> 8);
  if ((sVar9 == 0) && (!bVar5)) {
    return (ulonglong)uVar8 << 8;
  }
  return CONCAT71(uVar8,1);
}



// FUNCTION 141675d10 Line body=297 status=ok
// SIG undefined Line(void)

longlong FParse::Line(longlong *param_1,short *param_2,int param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  short *psVar4;
  uint7 uVar5;
  short sVar6;
  
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  *param_2 = 0;
  psVar4 = (short *)*param_1;
  sVar6 = *psVar4;
  if (sVar6 != 0) {
    do {
      if (((sVar6 == 10) || (sVar6 == 0xd)) || (param_3 = param_3 + -1, param_3 < 1)) break;
      if ((!bVar1) && (param_4 == '\0')) {
        if (sVar6 == 0x2f) {
          if (psVar4[1] == 0x2f) {
            bVar2 = true;
          }
        }
        if (sVar6 == 0x7c) goto LAB_141675e17;
      }
      bVar3 = true;
      bVar1 = (bool)(bVar1 ^ sVar6 == 0x22);
      if (bVar2) {
        psVar4 = psVar4 + 1;
        *param_1 = (longlong)psVar4;
      }
      else {
        *param_2 = sVar6;
        param_2 = param_2 + 1;
        *param_1 = *param_1 + 2;
        psVar4 = (short *)*param_1;
      }
      sVar6 = *psVar4;
    } while (sVar6 != 0);
  }
  if (param_4 == '\0') {
LAB_141675e17:
    while( true ) {
      sVar6 = *psVar4;
      if (((sVar6 != 10) && (sVar6 != 0xd)) && (sVar6 != 0x7c)) break;
      psVar4 = psVar4 + 1;
      *param_1 = (longlong)psVar4;
    }
  }
  else {
    sVar6 = *psVar4;
    if (sVar6 == 0xd) {
      psVar4 = psVar4 + 1;
      *param_1 = (longlong)psVar4;
      sVar6 = *psVar4;
    }
    if (sVar6 == 10) {
      *param_1 = (longlong)(psVar4 + 1);
    }
  }
  *param_2 = 0;
  uVar5 = (uint7)((ulonglong)*param_1 >> 8);
  if ((*(short *)*param_1 == 0) && (!bVar3)) {
    return (ulonglong)uVar5 << 8;
  }
  return CONCAT71(uVar5,1);
}



// FUNCTION 141675e40 FUN_141675e40 body=871 status=ok
// SIG undefined FUN_141675e40(void)

longlong FUN_141675e40(longlong *param_1,longlong *param_2,int *param_3,char param_4)

{
  short *psVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  short *psVar8;
  uint7 uVar10;
  longlong lVar9;
  short sVar11;
  int iVar12;
  
  bVar5 = false;
  bVar3 = false;
  bVar4 = false;
  iVar12 = 0;
  if ((undefined *)*param_2 != &DAT_144cc8d6c) {
    *(undefined4 *)(param_2 + 1) = 0;
    iVar7 = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2);
      iVar7 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar7;
    if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
  }
  *param_3 = 0;
  psVar8 = (short *)*param_1;
  sVar11 = *psVar8;
  bVar6 = false;
  if (sVar11 == 0) {
LAB_1416760e2:
    if (bVar5) {
      *param_3 = *param_3 + 1;
      psVar8 = (short *)*param_1;
    }
  }
  else {
    do {
      bVar5 = bVar6;
      if (((sVar11 == 10) || (sVar11 == 0xd)) && (iVar12 < 1)) break;
      if ((!bVar3) && (param_4 == '\0')) {
        if ((sVar11 == 0x2f) && (psVar8[1] == 0x2f)) {
          bVar4 = true;
        }
        if (sVar11 == 0x7c) break;
      }
      bVar5 = true;
      if ((sVar11 == 10) || (sVar11 == 0xd)) {
        iVar7 = (int)param_2[1];
        iVar2 = iVar7 + -1;
        if (iVar7 < 1) {
          iVar2 = 0;
        }
        iVar7 = (iVar7 < 1) + 1 + iVar7;
        *(int *)(param_2 + 1) = iVar7;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(undefined2 *)(*param_2 + (longlong)iVar2 * 2) = 0x20;
        *(undefined2 *)(*param_2 + 2 + (longlong)iVar2 * 2) = 0;
        *param_3 = *param_3 + 1;
        *param_1 = *param_1 + 2;
LAB_1416760ab:
        psVar8 = (short *)*param_1;
        if ((*psVar8 == 10) || (*psVar8 == 0xd)) {
          psVar8 = psVar8 + 1;
LAB_1416760c1:
          *param_1 = (longlong)psVar8;
        }
      }
      else {
        if (!bVar3) {
          if ((sVar11 == 0x5c) && ((psVar8[1] == 10 || (psVar8[1] == 0xd)))) {
            iVar7 = (int)param_2[1];
            iVar2 = iVar7 + -1;
            if (iVar7 < 1) {
              iVar2 = 0;
            }
            iVar7 = (iVar7 < 1) + 1 + iVar7;
            *(int *)(param_2 + 1) = iVar7;
            if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
            }
            *(undefined2 *)(*param_2 + (longlong)iVar2 * 2) = 0x20;
            *(undefined2 *)(*param_2 + 2 + (longlong)iVar2 * 2) = 0;
            *param_3 = *param_3 + 1;
            *param_1 = *param_1 + 4;
            goto LAB_1416760ab;
          }
          if (sVar11 == 0x7b) {
            iVar12 = iVar12 + 1;
            psVar8 = psVar8 + 1;
          }
          else {
            if ((sVar11 != 0x7d) || (iVar12 < 1)) goto LAB_141675ff7;
            iVar12 = iVar12 + -1;
            psVar8 = psVar8 + 1;
          }
          goto LAB_1416760c1;
        }
LAB_141675ff7:
        bVar3 = (bool)(bVar3 ^ sVar11 == 0x22);
        psVar8 = psVar8 + 1;
        *param_1 = (longlong)psVar8;
        if ((!bVar4) && (sVar11 != 0)) {
          iVar7 = (int)param_2[1];
          iVar2 = iVar7 + -1;
          if (iVar7 < 1) {
            iVar2 = 0;
          }
          iVar7 = (iVar7 < 1) + 1 + iVar7;
          *(int *)(param_2 + 1) = iVar7;
          if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(short *)(*param_2 + (longlong)iVar2 * 2) = sVar11;
          *(undefined2 *)(*param_2 + 2 + (longlong)iVar2 * 2) = 0;
          psVar8 = (short *)*param_1;
        }
      }
      sVar11 = *psVar8;
      bVar6 = bVar5;
    } while (sVar11 != 0);
    if (sVar11 == 0) goto LAB_1416760e2;
    if (param_4 == '\0') {
      while (((sVar11 == 10 || (sVar11 == 0xd)) || (sVar11 == 0x7c))) {
        if (sVar11 != 0x7c) {
          *param_3 = *param_3 + 1;
          psVar8 = (short *)*param_1;
          sVar11 = *psVar8;
        }
        psVar1 = psVar8 + 1;
        if (((sVar11 == 10) && (*psVar1 == 0xd)) || ((sVar11 == 0xd && (*psVar1 == 10)))) {
          psVar8 = psVar1;
        }
        psVar8 = psVar8 + 1;
        *param_1 = (longlong)psVar8;
        sVar11 = *psVar8;
      }
      goto LAB_1416760f0;
    }
    if ((sVar11 == 0xd) || (sVar11 == 10)) {
      *param_3 = *param_3 + 1;
      psVar8 = (short *)*param_1;
      sVar11 = *psVar8;
      if (sVar11 == 0xd) {
        psVar8 = psVar8 + 1;
        *param_1 = (longlong)psVar8;
        sVar11 = *psVar8;
      }
      if (sVar11 == 10) {
        psVar8 = psVar8 + 1;
        *param_1 = (longlong)psVar8;
      }
    }
  }
  sVar11 = *psVar8;
LAB_1416760f0:
  uVar10 = (uint7)((ulonglong)psVar8 >> 8);
  if ((sVar11 != 0) || (bVar5)) {
    lVar9 = CONCAT71(uVar10,1);
  }
  else {
    lVar9 = (ulonglong)uVar10 << 8;
  }
  return lVar9;
}



// FUNCTION 1416761b0 FUN_1416761b0 body=677 status=ok
// SIG undefined FUN_1416761b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1416761b0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  short *psVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  undefined8 *puVar13;
  void *_Src;
  undefined1 auStack_1a8 [32];
  char *local_188;
  int local_180;
  int local_17c;
  void *local_178;
  int local_170;
  undefined4 local_16c;
  undefined1 local_168 [256];
  longlong local_68;
  short *local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)FUN_1415c3d50();
  }
  plVar7 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2,param_1,0);
  uVar9 = 0;
  if (plVar7 != (longlong *)0x0) {
    iVar6 = (**(code **)(*plVar7 + 0x98))(plVar7);
    local_188 = (char *)0x0;
    local_180 = 0;
    local_17c = 0;
    iVar12 = 0;
    if (iVar6 + 1 != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_188,iVar6 + 1);
      iVar12 = local_180;
    }
    local_180 = iVar6 + iVar12;
    if (local_17c < local_180) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_188);
    }
    iVar3 = local_17c;
    iVar12 = local_180;
    pcVar10 = local_188;
    (**(code **)(*plVar7 + 0x50))(plVar7,local_188,(longlong)iVar6);
    local_180 = iVar12 + 1;
    if (iVar3 < local_180) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_188,iVar12);
      pcVar10 = local_188;
    }
    pcVar10[iVar12] = '\0';
    (**(code **)*plVar7)(plVar7,1);
    bVar1 = false;
    do {
      _Src = (void *)0x0;
      cVar5 = *pcVar10;
      pcVar11 = pcVar10;
      if (cVar5 == '\0') {
LAB_1416762ff:
        bVar1 = true;
      }
      else {
        do {
          if ((cVar5 == '\r') || (cVar5 == '\n')) break;
          cVar5 = pcVar11[1];
          pcVar11 = pcVar11 + 1;
        } while (cVar5 != '\0');
        if (cVar5 == '\0') goto LAB_1416762ff;
        if ((cVar5 == '\r') && (pcVar11[1] == '\n')) {
          pcVar11[0] = '\0';
          pcVar11[1] = '\0';
          pcVar11 = pcVar11 + 2;
        }
        else {
          *pcVar11 = '\0';
          pcVar11 = pcVar11 + 1;
        }
      }
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,pcVar10);
      psVar4 = local_60;
      local_178 = (void *)0x0;
      local_16c = 0;
      iVar12 = 0;
      if ((local_60 != (short *)0x0) && (iVar12 = 0, *local_60 != 0)) {
        lVar8 = -1;
        do {
          lVar2 = lVar8 + 1;
          lVar8 = lVar8 + 1;
        } while (local_60[lVar2] != 0);
        local_170 = (int)lVar8 + 1;
        lVar8 = (longlong)local_170;
        if (0 < local_170) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
        }
        iVar12 = local_170;
        _Src = local_178;
        FGenericPlatformString::Memcpy(local_178,psVar4,lVar8 * 2);
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
      iVar6 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar6);
      }
      puVar13 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_3);
      *puVar13 = 0;
      *(int *)(puVar13 + 1) = iVar12;
      if (iVar12 == 0) {
        *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar13,iVar12,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar13,_Src,(longlong)iVar12 * 2);
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
      pcVar10 = pcVar11;
    } while (!bVar1);
    if (local_188 != (char *)0x0) {
      FMemory::Free(local_188);
    }
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 141676460 FUN_141676460 body=206 status=ok
// SIG undefined FUN_141676460(void)

undefined1 FUN_141676460(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  plVar3 = (longlong *)FUN_1415c3d50();
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (iVar4 < iVar2 + 2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1,iVar2 + 2);
    iVar5 = *(int *)(param_1 + 1);
    iVar4 = *(int *)((longlong)param_1 + 0xc);
  }
  iVar2 = iVar2 + iVar5;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar4 < iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1);
    iVar2 = *(int *)(param_1 + 1);
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,*param_1,(longlong)iVar2);
  uVar1 = (**(code **)(*plVar3 + 0xe8))(plVar3);
  (**(code **)*plVar3)(plVar3,1);
  return uVar1;
}



// FUNCTION 141676530 FUN_141676530 body=537 status=ok
// SIG undefined FUN_141676530(void)

undefined1 FUN_141676530(longlong param_1,short *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined **local_f8 [18];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38;
  
  plVar4 = (longlong *)FUN_1415c3d50();
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4,param_2,0);
  if (plVar4 == (longlong *)0x0) {
    uVar1 = 0;
LAB_141676593:
    if (plVar4 != (longlong *)0x0) {
      (**(code **)*plVar4)(plVar4,1);
    }
    return uVar1;
  }
  iVar3 = (**(code **)(*plVar4 + 0x98))(plVar4);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0);
    }
    uVar1 = 1;
    goto LAB_141676593;
  }
  lVar7 = (longlong)iVar3;
  uVar5 = FMemory::Malloc(lVar7,0);
  (**(code **)(*plVar4 + 0x50))(plVar4,uVar5,lVar7);
  uVar1 = (**(code **)(*plVar4 + 0xe8))(plVar4);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)*plVar4)(plVar4,1);
  }
  FFileHelper::BufferToString(param_1,uVar5,iVar3);
  if ((param_3 & 1) == 0) {
LAB_141676717:
    FMemory::Free(uVar5);
  }
  else {
    if ((param_3 >> 1 & 1) == 0) {
      cVar2 = FSHA1::GetFileSHAHash(param_2,0,1);
      if (cVar2 == '\0') goto LAB_141676717;
    }
    FArchive::FArchive(local_f8);
    local_f8[0] = &PTR__scalar_deleting_destructor__143f600f0;
    local_60 = 0;
    local_50 = 1;
    local_68 = uVar5;
    local_58 = lVar7;
    FArchive::SetIsLoading(local_f8,1);
    FArchive::SetIsPersistent(local_f8,0);
    local_48 = 0;
    local_f8[0] = &PTR__scalar_deleting_destructor__144ccf6b8;
    local_40 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (param_2[lVar7] != 0);
      uVar6 = (int)lVar7 + 1;
      local_40 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar6 * 2);
    }
    local_38 = 1;
    FBufferReaderWithSHA::~FBufferReaderWithSHA(local_f8);
  }
  return uVar1;
}



// FUNCTION 141676750 Log body=40 status=ok
// SIG undefined Log(void)

void FOutputDevice::Log(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  if (*(int *)(param_4 + 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141676763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,*param_4,param_3,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141676774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,&DAT_143f3eda8,param_3,param_2);
  return;
}



// FUNCTION 141676780 Log body=70 status=ok
// SIG undefined Log(void)

void FOutputDevice::Log(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined1 *)FLogScopedCategoryAndVerbosityOverride::GetTLSCurrent();
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416767c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,puVar2,*puVar1,puVar1 + 8);
  return;
}



// FUNCTION 1416767d0 Log body=52 status=ok
// SIG undefined Log(void)

void FOutputDevice::Log(longlong *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FLogScopedCategoryAndVerbosityOverride::GetTLSCurrent();
                    /* WARNING: Could not recover jumptable at 0x000141676800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2,*puVar1,puVar1 + 8);
  return;
}



// FUNCTION 141676810 Log body=37 status=ok
// SIG undefined Log(void)

void FOutputDevice::Log(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_3,param_2,local_res8);
  return;
}



// FUNCTION 141676840 LogfImpl body=329 status=ok
// SIG undefined LogfImpl(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FOutputDevice::LogfImpl
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulonglong *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *_Memory;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined8 *local_460;
  undefined1 local_458 [1024];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar3 = (undefined1 *)FLogScopedCategoryAndVerbosityOverride::GetTLSCurrent();
  _Memory = (undefined1 *)0x0;
  puVar5 = local_458;
  iVar6 = 0x400;
  puVar4 = (ulonglong *)__local_stdio_printf_options();
  local_468 = 0;
  local_460 = &local_res18;
  uVar2 = __stdio_common_vswprintf(*puVar4 | 1,local_458,0x1ff,param_2);
  if ((int)uVar2 < 0) {
    uVar2 = 0xffffffff;
  }
  puVar1 = (undefined1 *)0x0;
  if (0x1ff < uVar2) goto LAB_1416768e1;
  while (_Memory = puVar1, uVar2 == 0xffffffff) {
LAB_1416768e1:
    free(_Memory);
    puVar5 = malloc((longlong)iVar6 * 2);
    local_460 = &local_res18;
    local_468 = 0;
    uVar2 = __stdio_common_vswprintf(*puVar4 | 1,puVar5,(longlong)(iVar6 + -1),param_2);
    if ((int)uVar2 < 0) {
      uVar2 = 0xffffffff;
    }
    if (iVar6 <= (int)uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar6 = iVar6 * 2;
    puVar1 = puVar5;
  }
  *(undefined2 *)(puVar5 + (longlong)(int)uVar2 * 2) = 0;
  (**(code **)(*param_1 + 0x10))(param_1,puVar5,*puVar3,puVar3 + 8);
  free(_Memory);
  return;
}



// FUNCTION 141676990 LogfImpl body=317 status=ok
// SIG undefined LogfImpl(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FOutputDevice::LogfImpl
               (longlong *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong *puVar2;
  undefined1 *puVar3;
  undefined1 *_Memory;
  int iVar4;
  undefined8 local_res20;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  undefined8 *local_470;
  undefined8 local_468 [2];
  undefined1 local_458 [1024];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_498;
  puVar3 = local_458;
  iVar4 = 0x400;
  _Memory = (undefined1 *)0x0;
  local_res20 = param_4;
  puVar2 = (ulonglong *)__local_stdio_printf_options();
  local_478 = 0;
  local_470 = &local_res20;
  uVar1 = __stdio_common_vswprintf(*puVar2 | 1,local_458,0x1ff,param_3);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  if (0x1ff < uVar1) goto LAB_141676a22;
  while (uVar1 == 0xffffffff) {
LAB_141676a22:
    free(_Memory);
    puVar3 = malloc((longlong)iVar4 * 2);
    local_470 = &local_res20;
    local_478 = 0;
    uVar1 = __stdio_common_vswprintf(*puVar2 | 1,puVar3,(longlong)(iVar4 + -1),param_3);
    if ((int)uVar1 < 0) {
      uVar1 = 0xffffffff;
    }
    if (iVar4 <= (int)uVar1) {
      uVar1 = 0xffffffff;
    }
    iVar4 = iVar4 * 2;
    _Memory = puVar3;
  }
  local_468[0] = 0;
  *(undefined2 *)(puVar3 + (longlong)(int)uVar1 * 2) = 0;
  (**(code **)(*param_1 + 0x10))(param_1,puVar3,param_2,local_468);
  free(_Memory);
  return;
}



// FUNCTION 141676ad0 FUN_141676ad0 body=273 status=ok
// SIG undefined FUN_141676ad0(void)

void FUN_141676ad0(longlong param_1,undefined1 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x68))();
  if ((cVar5 == '\0') || (param_3 != '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((((*(char *)(param_1 + 0x50) == '\0') || (DAT_1468c217a != '\0')) || (bVar4)) ||
     (DAT_1468b616c != '\0')) {
LAB_141676b4b:
    bVar4 = false;
  }
  else {
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar6 = GetCurrentThreadId();
      if (DVar6 != DAT_1468c21c0) goto LAB_141676b4b;
    }
    bVar4 = true;
  }
  if ((DAT_1468c217b == '\0') && (bVar4)) {
    cVar5 = FText::IsEmpty(param_1 + 0x18);
    lVar7 = param_1 + 0x18;
    if (cVar5 != '\0') {
      lVar7 = param_1;
    }
    FText::FText(local_28,lVar7);
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x50))
              (*(longlong **)(param_1 + 0x58),local_28,param_2);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (DAT_1468c217b != '\0') {
      *(undefined1 *)(param_1 + 0x51) = 1;
    }
  }
  return;
}



// FUNCTION 141676bf0 MakeFrameRate body=1292 status=ok
// SIG undefined MakeFrameRate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FFrameRateParser::MakeFrameRate(longlong param_1,double param_2,double param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_248 [32];
  double local_228;
  double local_220;
  int local_218;
  int local_214;
  undefined4 *local_208;
  ulonglong *puStack_200;
  undefined4 *local_1f8;
  undefined4 *puStack_1f0;
  int *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined4 local_188 [2];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined4 local_c0 [2];
  double local_b8;
  longlong *local_a8;
  char local_98;
  undefined4 local_90 [2];
  double local_88;
  longlong *local_78;
  char local_68;
  ulonglong local_60 [7];
  
  local_60[0] = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_228 = 0.0;
  local_220 = 0.0;
  if (((param_2 <= 0.0) || (dVar4 = modf(param_2,&local_228), dVar4 != 0.0)) ||
     (2147483647.0 < local_228)) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_f8,L"Invalid framerate numerator: {0}",L"FFrameRate",
                       L"InvalidNumerator");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_d0,uVar6);
    local_208 = local_90;
    local_90[0] = 3;
    puStack_200 = local_60;
    local_1e0 = *puVar8;
    local_1d8 = puVar8[1];
    local_68 = '\0';
    if (local_1d8 != 0) {
      LOCK();
      *(int *)(local_1d8 + 8) = *(int *)(local_1d8 + 8) + 1;
      UNLOCK();
    }
    local_88 = param_2;
    local_1a8 = local_208;
    uStack_1a0 = puStack_200;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_198,&local_1a8);
    uVar6 = FText::Format(local_110,&local_1e0,uVar6);
    FText::FText(local_158,uVar6);
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_108 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar2 = (int *)((longlong)local_108 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_198);
    if ((local_68 != '\0') && (local_68 = '\0', local_78 != (longlong *)0x0)) {
      LOCK();
      plVar7 = local_78 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    plVar7 = (longlong *)puVar8[1];
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
    FText::FText(local_170,local_158);
    FText::FText(param_1,local_170);
    *(undefined1 *)(param_1 + 0x18) = 1;
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_168 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    *(undefined1 *)(param_1 + 0x60) = 0;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_150 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    plVar7 = local_f0;
  }
  else {
    if (((0.0 < param_3) && (dVar4 = modf(param_3,&local_220), dVar4 == 0.0)) &&
       (local_220 <= 2147483647.0)) {
      local_218 = (int)local_228;
      local_1e8 = &local_218;
      local_214 = (int)local_220;
      TValueOrError<FExpressionNode,FExpressionError>::
      TValueOrError<FExpressionNode,FExpressionError><FFrameRate>(param_1,&local_1e8);
      return param_1;
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_128,L"Invalid framerate denominator: {0}",L"FFrameRate",
                       L"InvalidDenominator");
    plVar7 = (longlong *)FTextFormat::FTextFormat(local_e0,uVar6);
    local_1f8 = local_c0;
    local_c0[0] = 3;
    puStack_1f0 = local_90;
    local_208 = (undefined4 *)*plVar7;
    puStack_200 = (ulonglong *)plVar7[1];
    local_98 = '\0';
    if (puStack_200 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(puStack_200 + 1) = (int)puStack_200[1] + 1;
      UNLOCK();
    }
    local_b8 = param_3;
    local_1c8 = local_1f8;
    uStack_1c0 = puStack_1f0;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8,&local_1c8);
    uVar6 = FText::Format(local_140,&local_208,uVar6);
    FText::FText(local_188,uVar6);
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_138 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1b8);
    if ((local_98 != '\0') && (local_98 = '\0', local_a8 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_a8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar2 = (int *)((longlong)local_a8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    plVar7 = (longlong *)plVar7[1];
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
    local_1f8 = local_188;
    FUN_14165d950(param_1,&local_1f8);
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_180 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    plVar7 = local_120;
  }
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
  return param_1;
}



// FUNCTION 141677100 MakeFrameRateFromFPS body=1266 status=ok
// SIG undefined MakeFrameRateFromFPS(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FFrameRateParser::MakeFrameRateFromFPS(longlong param_1,double param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auVar4 [16];
  double dVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_208 [32];
  int local_1e8 [4];
  undefined4 *local_1d8;
  ulonglong *puStack_1d0;
  int *local_1c8;
  undefined4 *puStack_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined4 local_90 [2];
  double local_88;
  longlong *local_78;
  char local_68;
  undefined4 local_60 [2];
  double local_58;
  longlong *local_48;
  char local_38;
  ulonglong local_30 [3];
  
  local_30[0] = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if ((param_2 <= 0.0) || (2147483647.0 <= param_2)) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c8,L"Invalid FPS specified: {0} (out of bounds)",L"FFrameRate",
                       L"OutOfBoundsFPS");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_a0,uVar7);
    local_1d8 = local_60;
    local_60[0] = 3;
    puStack_1d0 = local_30;
    local_1b0 = *puVar9;
    local_1a8 = puVar9[1];
    local_38 = '\0';
    if (local_1a8 != 0) {
      LOCK();
      *(int *)(local_1a8 + 8) = *(int *)(local_1a8 + 8) + 1;
      UNLOCK();
    }
    local_58 = param_2;
    local_178 = local_1d8;
    uStack_170 = puStack_1d0;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_168,&local_178);
    uVar7 = FText::Format(local_e0,&local_1b0,uVar7);
    FText::FText(local_128,uVar7);
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_d8 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar2 = (int *)((longlong)local_d8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_168);
    if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_48 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    plVar8 = (longlong *)puVar9[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    FText::FText(local_140,local_128);
    FText::FText(param_1,local_140);
    *(undefined1 *)(param_1 + 0x18) = 1;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_138 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    *(undefined1 *)(param_1 + 0x60) = 0;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_120 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    plVar8 = local_c0;
  }
  else {
    dVar5 = param_2 + 0.5;
    dVar11 = 0.0;
    lVar10 = (longlong)dVar5;
    if ((lVar10 != -0x8000000000000000) && (dVar11 = (double)lVar10, dVar11 != dVar5)) {
      auVar4._8_4_ = SUB84(dVar5,0);
      auVar4._0_8_ = dVar5;
      auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      uVar6 = movmskpd(0,auVar4);
      dVar5 = (double)(longlong)(lVar10 - (ulonglong)(uVar6 & 1));
    }
    if (dVar5 == param_2) {
      local_1e8[0] = (int)dVar5;
      local_1c8 = local_1e8;
      local_1e8[1] = 1;
      TValueOrError<FExpressionNode,FExpressionError>::
      TValueOrError<FExpressionNode,FExpressionError><FFrameRate>(param_1,dVar11);
      return param_1;
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_f8,
                       L"Fractional FPS specified: {0}.\nPlease use x/y notation to define such framerates."
                       ,L"FFrameRate",L"FractionalFrameRate_Format");
    plVar8 = (longlong *)FTextFormat::FTextFormat(local_b0,uVar7);
    local_1c8 = local_90;
    local_90[0] = 3;
    puStack_1c0 = local_60;
    local_1d8 = (undefined4 *)*plVar8;
    puStack_1d0 = (ulonglong *)plVar8[1];
    local_68 = '\0';
    if (puStack_1d0 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(puStack_1d0 + 1) = (int)puStack_1d0[1] + 1;
      UNLOCK();
    }
    local_88 = param_2;
    local_198 = local_1c8;
    uStack_190 = puStack_1c0;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_188,&local_198);
    uVar7 = FText::Format(local_110,&local_1d8,uVar7);
    FText::FText(local_158,uVar7);
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_108 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar2 = (int *)((longlong)local_108 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_188);
    if ((local_68 != '\0') && (local_68 = '\0', local_78 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_78 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    plVar8 = (longlong *)plVar8[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    local_1b8 = local_158;
    FUN_14165d950(param_1,&local_1b8);
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_150 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    plVar8 = local_f0;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  return param_1;
}



// FUNCTION 141677600 MakeFrameRateFromInterval body=691 status=ok
// SIG undefined MakeFrameRateFromInterval(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FFrameRateParser::MakeFrameRateFromInterval(longlong param_1,double param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong lStack_100;
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [16];
  undefined4 local_68 [2];
  double local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [4];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (0.0 < param_2) {
    MakeFrameRateFromFPS(0,1.0 / param_2);
  }
  else {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_90,L"Invalid interval specified: {0}",L"FFrameRate",L"InvalidInterval")
    ;
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_78,uVar6);
    local_f8 = local_68;
    local_68[0] = 3;
    puStack_f0 = local_38;
    local_108 = *puVar7;
    lStack_100 = puVar7[1];
    local_40 = '\0';
    if (lStack_100 != 0) {
      LOCK();
      *(int *)(lStack_100 + 8) = *(int *)(lStack_100 + 8) + 1;
      UNLOCK();
    }
    local_60 = param_2;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_f8);
    uVar6 = FText::Format(local_a8,&local_108,uVar6);
    FText::FText(local_c0,uVar6);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_e8);
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
    plVar4 = (longlong *)puVar7[1];
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
    FText::FText(local_d8,local_c0);
    FText::FText(param_1,local_d8);
    *(undefined1 *)(param_1 + 0x18) = 1;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    *(undefined1 *)(param_1 + 0x60) = 0;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  return param_1;
}



// FUNCTION 1416778c0 FUN_1416778c0 body=772 status=ok
// SIG undefined FUN_1416778c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416778c0(short *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wint_t wVar3;
  wint_t wVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *_Str1;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  int iVar12;
  wchar_t *pwVar13;
  undefined1 auStack_898 [32];
  undefined1 local_878;
  undefined1 local_870;
  undefined8 local_868;
  undefined4 local_860;
  undefined4 local_858;
  wchar_t *local_848;
  int local_840;
  undefined4 local_83c;
  wchar_t local_838 [10];
  wchar_t local_824 [1014];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_898;
  lVar5 = FRemoteConfig::FindConfig(&DAT_1464afbc0,param_1);
  if (lVar5 == 0) {
    return;
  }
  if (*(char *)(lVar5 + 0x28) != '\0') {
    return;
  }
  plVar6 = (longlong *)FUN_1415c3d50();
  lVar5 = (**(code **)(*plVar6 + 0xe8))(plVar6,param_1);
  if (lVar5 < 0) {
    return;
  }
  pwVar10 = (wchar_t *)0x0;
  iVar12 = 0;
  local_848 = (wchar_t *)0x0;
  local_83c = 0;
  lVar5 = -1;
  pwVar13 = pwVar10;
  iVar8 = 0;
  if ((param_1 == (short *)0x0) ||
     (lVar9 = lVar5, pwVar13 = (wchar_t *)0x0, iVar8 = 0, *param_1 == 0)) {
LAB_1416779ce:
    pwVar11 = L"";
  }
  else {
    do {
      lVar9 = lVar9 + 1;
    } while (param_1[lVar9] != 0);
    iVar7 = (int)lVar9 + 1;
    local_840 = iVar7;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_848,0);
    }
    iVar8 = local_840;
    pwVar11 = local_848;
    FGenericPlatformString::Memcpy(local_848,param_1,(longlong)iVar7 * 2);
    pwVar13 = pwVar11;
    if (iVar8 == 0) goto LAB_1416779ce;
    if (pwVar11 == (wchar_t *)0x0) goto LAB_141677add;
  }
  wVar3 = towupper(0x2e);
  do {
    lVar5 = lVar5 + 1;
  } while ((&DAT_144cc9f20)[lVar5] != 0);
  wVar1 = *pwVar11;
  pwVar2 = pwVar11;
  while (pwVar11 = pwVar13, wVar1 != L'\0') {
    _Str1 = pwVar2 + 1;
    wVar4 = towupper(wVar1);
    if ((wVar4 == wVar3) &&
       (iVar7 = _wcsnicmp(_Str1,L"ini",(longlong)((int)lVar5 + -1)), iVar7 == 0)) {
      if (pwVar2 != (wchar_t *)0x0) {
        if (iVar8 == 0) {
          pwVar11 = L"";
          iVar8 = iVar12;
        }
        else {
          iVar8 = iVar8 + -1;
        }
        iVar7 = iVar8 + -4;
        if ((-1 < iVar7) && (iVar12 = iVar8, iVar7 < iVar8)) {
          iVar12 = iVar7;
        }
        local_848 = (wchar_t *)0x0;
        local_83c = 0;
        iVar8 = iVar12 + 1;
        if (iVar12 == 0) {
          iVar8 = 0;
        }
        local_840 = iVar8;
        if ((0 < iVar8) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_848,0), iVar8 = local_840,
           pwVar10 = local_848, 0 < local_840)) {
          wcsncpy(local_848,pwVar11,(longlong)iVar12);
          pwVar10[iVar12] = L'\0';
        }
        pwVar11 = pwVar10;
        if (pwVar13 != (wchar_t *)0x0) {
          FMemory::Free(pwVar13);
        }
      }
      break;
    }
    pwVar2 = _Str1;
    wVar1 = *_Str1;
  }
LAB_141677add:
  pwVar10 = L"";
  if (iVar8 != 0) {
    pwVar10 = pwVar11;
  }
  lVar5 = (longlong)local_838 - (longlong)pwVar10;
  do {
    wVar1 = *pwVar10;
    *(wchar_t *)(lVar5 + (longlong)pwVar10) = wVar1;
    pwVar10 = pwVar10 + 1;
  } while (wVar1 != L'\0');
  pwVar10 = (wchar_t *)((longlong)&local_83c + 2);
  do {
    pwVar13 = pwVar10;
    pwVar10 = pwVar13 + 1;
  } while (pwVar13[1] != L'\0');
  builtin_wcsncpy(pwVar13 + 1,L"_Local.ini",0xb);
  plVar6 = (longlong *)FUN_1415c3d50();
  local_858 = 0;
  local_860 = 0;
  local_868 = 0;
  local_870 = 0;
  local_878 = 0;
  (**(code **)(*plVar6 + 0x38))(plVar6,local_838,param_1,1);
  if (pwVar11 != (wchar_t *)0x0) {
    FMemory::Free(pwVar11);
  }
  return;
}



// FUNCTION 141677bd0 FUN_141677bd0 body=1413 status=ok
// SIG undefined FUN_141677bd0(void)

undefined8 FUN_141677bd0(void **param_1,short *param_2)

{
  undefined4 *puVar1;
  void *_Dst;
  wint_t wVar2;
  wint_t wVar3;
  short *psVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  void *pvVar14;
  void *pvVar15;
  void *_Src;
  void *pvVar16;
  longlong local_res10;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  void *local_78;
  uint local_70;
  uint uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  ulonglong local_50;
  longlong local_48 [2];
  
  FPaths::ConvertRelativePathToFull(local_48,param_1);
  pvVar15 = (void *)0x0;
  local_50 = 0;
  local_58 = 0;
  lVar7 = -1;
  if ((param_2 != (short *)0x0) && (lVar13 = lVar7, *param_2 != 0)) {
    do {
      lVar13 = lVar13 + 1;
    } while (param_2[lVar13] != 0);
    uVar11 = (int)lVar13 + 1;
    local_50 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    FGenericPlatformString::Memcpy(local_58,param_2,(longlong)(int)uVar11 * 2);
  }
  psVar4 = (short *)FUN_1416ac480();
  local_70 = 0;
  uStack_6c = 0;
  local_78 = (void *)0x0;
  if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (psVar4[lVar7] != 0);
    uVar11 = (int)lVar7 + 1;
    uStack_6c = 0;
    local_70 = uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    }
    FGenericPlatformString::Memcpy(local_78,psVar4,(longlong)(int)uVar11 * 2);
  }
  UE4Paths_Private::ConvertRelativePathToFullInternal(&local_68,&local_78,&local_58);
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)FUN_141672d20(&local_58,&local_68);
  if (&local_68 != plVar5) {
    if (local_68 != 0) {
      FMemory::Free();
    }
    local_68 = *plVar5;
    *plVar5 = 0;
    local_60 = (undefined4)plVar5[1];
    local_5c = *(undefined4 *)((longlong)plVar5 + 0xc);
    plVar5[1] = 0;
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  FString::ReplaceInline(&local_68,&DAT_144ccb754,&DAT_144ccb674,0);
  FString::ReplaceInline(local_48,&DAT_144ccb8e4,&DAT_144ccb8b4,0);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  FUN_141594550(local_48,&local_98,&DAT_144ccbb0c,1);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  FUN_141594550(&local_68,&local_88,&DAT_144ccbcfc,1);
  if ((int)local_90 != 0) {
    if ((((int)local_80 != 0) && (((wint_t *)*local_98)[1] == 0x3a)) &&
       (*(short *)(*local_88 + 2) == 0x3a)) {
      wVar2 = towupper(*(wint_t *)*local_98);
      wVar3 = towupper(*(wint_t *)*local_88);
      if (wVar2 != wVar3) {
        uVar9 = 0;
        goto LAB_1416780ad;
      }
    }
    while (((int)local_90 != 0 && ((int)local_80 != 0))) {
      if ((int)local_98[1] == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*local_98;
      }
      iVar12 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6);
      if (iVar12 != 0) break;
      if (*local_98 != 0) {
        FMemory::Free(*local_98);
      }
      if ((int)local_90 + -1 != 0) {
        _guard_xfg_dispatch_icall_nop(local_98,local_98 + 2,(longlong)((int)local_90 + -1) << 4);
      }
      local_90 = CONCAT44(local_90._4_4_,(int)local_90 + -1);
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_98);
      if (*local_88 != 0) {
        FMemory::Free(*local_88);
      }
      if ((int)local_80 + -1 != 0) {
        _guard_xfg_dispatch_icall_nop(local_88,local_88 + 2,(longlong)((int)local_80 + -1) << 4);
      }
      local_80 = CONCAT44(local_80._4_4_,(int)local_80 + -1);
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_88);
    }
  }
  local_78 = (void *)0x0;
  uStack_6c = 0;
  pvVar10 = pvVar15;
  pvVar14 = pvVar15;
  _Src = pvVar15;
  pvVar16 = pvVar15;
  if (0 < (int)local_80) {
    do {
      iVar12 = (int)pvVar10;
      local_70 = (4 - (uint)(iVar12 != 0)) + iVar12;
      if ((int)pvVar16 < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78);
        pvVar16 = (void *)(ulonglong)uStack_6c;
        _Src = local_78;
      }
      pvVar10 = (void *)(ulonglong)local_70;
      uVar11 = (int)pvVar14 + 1;
      pvVar14 = (void *)(ulonglong)uVar11;
      puVar1 = (undefined4 *)((longlong)_Src + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
      *puVar1 = 0x2e002e;
      *(undefined2 *)(puVar1 + 1) = 0x2f;
      *(undefined2 *)((longlong)puVar1 + 6) = 0;
    } while ((int)uVar11 < (int)local_80);
  }
  iVar12 = (int)pvVar10;
  if (0 < (int)local_90) {
    local_res10 = 0;
    do {
      iVar8 = *(int *)((longlong)local_98 + local_res10 + 8);
      iVar12 = iVar8 + -1;
      pvVar14 = *(void **)((longlong)local_98 + local_res10);
      if (iVar8 == 0) {
        iVar12 = 0;
      }
      if (iVar12 != 0) {
        iVar8 = (int)pvVar10;
        local_70 = iVar12 + (uint)(iVar8 == 0) + iVar8;
        if ((int)pvVar16 < (int)local_70) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,pvVar10);
          pvVar16 = (void *)(ulonglong)uStack_6c;
          _Src = local_78;
        }
        pvVar10 = (void *)(ulonglong)local_70;
        _Dst = (void *)((longlong)_Src + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar14,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)_Dst + (longlong)iVar12 * 2) = 0;
      }
      uVar11 = (int)pvVar15 + 1;
      pvVar15 = (void *)(ulonglong)uVar11;
      if ((int)uVar11 < (int)local_90) {
        iVar12 = (int)pvVar10;
        local_70 = (2 - (uint)(iVar12 != 0)) + iVar12;
        if ((int)pvVar16 < (int)local_70) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78);
          pvVar16 = (void *)(ulonglong)uStack_6c;
          _Src = local_78;
        }
        pvVar10 = (void *)(ulonglong)local_70;
        puVar6 = (undefined2 *)((longlong)_Src + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
        *puVar6 = 0x2f;
        puVar6[1] = 0;
      }
      iVar12 = (int)pvVar10;
      local_res10 = local_res10 + 0x10;
    } while ((int)uVar11 < (int)local_90);
  }
  if (param_1 != &local_78) {
    *(int *)(param_1 + 1) = iVar12;
    if ((iVar12 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar12);
      _guard_xfg_dispatch_icall_nop(*param_1,_Src,(longlong)iVar12 * 2);
    }
  }
  uVar9 = 1;
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
LAB_1416780ad:
  plVar5 = local_88;
  for (iVar12 = (int)local_80; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar5 = local_98;
  for (iVar12 = (int)local_90; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return uVar9;
}



// FUNCTION 141678160 MakePlatformFilename body=66 status=ok
// SIG undefined MakePlatformFilename(void)

void FPaths::MakePlatformFilename(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FWindowsPlatformMisc::GetDefaultPathSeparator();
  FString::ReplaceInline(param_1,&DAT_144ccb404,uVar1,0);
  uVar1 = FWindowsPlatformMisc::GetDefaultPathSeparator();
  FString::ReplaceInline(param_1,&DAT_144ccb644,uVar1,0);
  return;
}



// FUNCTION 1416781b0 FUN_1416781b0 body=749 status=ok
// SIG undefined FUN_1416781b0(void)

void FUN_1416781b0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  short *psVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *local_48;
  ulonglong local_40;
  short *local_38 [2];
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (((int)param_1[1] == 0) || ((int)param_1[1] == 1)) {
    psVar4 = (short *)FUN_1416ac480();
    iVar6 = 0;
    if ((short *)*param_1 != psVar4) {
      iVar8 = iVar6;
      if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (psVar4[lVar9] != 0);
        iVar8 = (int)lVar9 + 1;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) != iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar8);
        iVar6 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar6 + iVar8;
      if (*(int *)((longlong)param_1 + 0xc) < iVar6 + iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      if (iVar8 != 0) {
        _guard_xfg_dispatch_icall_nop((void *)*param_1,psVar4,(longlong)iVar8 * 2);
      }
    }
    iVar6 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar6 = 0;
    }
    if (iVar6 != 0) {
      FUN_1416781b0(param_1);
    }
  }
  else {
    FString::Replace(param_1,local_38,&DAT_144ccb344,&DAT_144ccb2f4,0);
    psVar4 = (short *)FUN_1415b59d0();
    local_40 = 0;
    local_48 = (undefined2 *)0x0;
    if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (psVar4[lVar9] != 0);
      uVar7 = (int)lVar9 + 1;
      local_40 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      FGenericPlatformString::Memcpy(local_48,psVar4,(longlong)(int)uVar7 * 2);
    }
    cVar2 = FString::StartsWith(param_1,&DAT_144ccc8fc,0);
    if (((((int)param_1[1] == 0) || ((int)param_1[1] + -1 < 2)) ||
        (*(short *)(*param_1 + 2) != 0x3a)) ||
       (cVar3 = FString::StartsWith(local_38,&local_48,1), cVar3 != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((*local_38[0] != 0x2f) ||
        (cVar3 = FString::StartsWith(local_38,&local_48,1), cVar3 != '\0')) &&
       (!bVar1 && cVar2 == '\0')) {
      FPaths::ConvertRelativePathToFull(local_28,param_1);
      FPaths::RemoveDuplicateSlashes(local_28);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_1468e3308) &&
         (_Init_thread_header(&DAT_1468e3308), DAT_1468e3308 == -1)) {
        `FPaths::GetRelativePathToRoot'::`2'::FRelativePathInitializer::FRelativePathInitializer
                  (&DAT_1468e32f8);
        atexit((_func_5014 *)&LAB_143e7aa50);
        _Init_thread_footer(&DAT_1468e3308);
      }
      puVar11 = &DAT_143f3eda8;
      if (DAT_1468e3300 != 0) {
        puVar11 = DAT_1468e32f8;
      }
      puVar10 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        puVar10 = local_48;
      }
      plVar5 = (longlong *)FString::Replace(local_28,local_18,puVar10,puVar11,1);
      if (param_1 != plVar5) {
        if (*param_1 != 0) {
          FMemory::Free();
        }
        *param_1 = *plVar5;
        *plVar5 = 0;
        *(int *)(param_1 + 1) = (int)plVar5[1];
        *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
        plVar5[1] = 0;
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_38[0] != (short *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1416784a0 MaxSeconds body=88 status=ok
// SIG undefined MaxSeconds(void)

double FFrameRate::MaxSeconds(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = (int)((ulonglong)*param_1 >> 0x20);
  return ((double)((float)iVar1 * 0.0) + (double)((longlong)iVar1 * 0x7fffffff)) /
         (double)(int)*param_1;
}



// FUNCTION 141678500 MemFnv64 body=53 status=ok
// SIG undefined MemFnv64(void)

ulonglong FFnv::MemFnv64(byte *param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 + 0x100000001b3;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = (uVar2 ^ bVar1) * -0x340d631b7bdddcdb;
  }
  return uVar2;
}



// FUNCTION 141678590 MoveAssign body=54 status=ok
// SIG undefined MoveAssign(void)

void Impl::FInlineDataStorage<TextFilterExpressionParser::FTextToken>::MoveAssign
               (longlong param_1,longlong param_2)

{
  FString::operator=(param_2 + 8,param_1 + 8);
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_1 + 0x19);
  return;
}



// FUNCTION 1416785e0 NewGuid body=32 status=ok
// SIG undefined NewGuid(void)

GUID * FGuid::NewGuid(GUID *param_1)

{
  param_1->Data1 = 0;
  param_1->Data2 = 0;
  param_1->Data3 = 0;
  param_1->Data4[0] = '\0';
  param_1->Data4[1] = '\0';
  param_1->Data4[2] = '\0';
  param_1->Data4[3] = '\0';
  param_1->Data4[4] = '\0';
  param_1->Data4[5] = '\0';
  param_1->Data4[6] = '\0';
  param_1->Data4[7] = '\0';
  FWindowsPlatformMisc::CreateGuid(param_1);
  return param_1;
}



// FUNCTION 141678600 NormalizeDirectoryName body=144 status=ok
// SIG undefined NormalizeDirectoryName(void)

void FPaths::NormalizeDirectoryName(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  FString::ReplaceInline(param_1,&DAT_144ccb0d4,&DAT_144ccb01c,0);
  cVar1 = FString::EndsWith(param_1,&DAT_144ccb134,0);
  if (cVar1 != '\0') {
    cVar1 = FString::EndsWith(param_1,&DAT_144ccc7a4,0);
    if (cVar1 == '\0') {
      cVar1 = FString::EndsWith(param_1,&DAT_144ccc80c,0);
      if (cVar1 == '\0') {
        iVar2 = (int)param_1[1] + -2;
        if ((int)param_1[1] == 0) {
          iVar2 = -1;
        }
        *(undefined2 *)(*param_1 + (longlong)iVar2 * 2) = 0;
        FString::TrimToNullTerminator(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141678690 NormalizeFilename body=22 status=ok
// SIG undefined NormalizeFilename(void)

void FPaths::NormalizeFilename(undefined8 param_1)

{
  FString::ReplaceInline(param_1,&DAT_144ccaf54,&DAT_144ccae2c,0);
  return;
}



// FUNCTION 1416786b0 FUN_1416786b0 body=381 status=ok
// SIG undefined FUN_1416786b0(void)

undefined4 FUN_1416786b0(int param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 local_28 [8];
  longlong *local_20;
  
  switch(param_1) {
  case 0:
    uVar5 = 5;
    break;
  case 1:
  case 5:
    uVar5 = 0;
    break;
  case 2:
  case 3:
  case 4:
    uVar5 = 4;
    break;
  default:
    uVar5 = 1;
  }
  if ((DAT_1468b616b != '\0') && (param_1 != 0)) {
    lVar7 = DAT_1468b6160;
    if (DAT_1468b6160 != 0) {
      FOutputDevice::LogfImpl
                (DAT_1468b6160,
                 L"Message Dialog was triggered in unattended script mode without a default value. %d will be used."
                 ,uVar5);
    }
    AK::MemoryMgr::StartProfileThreadUsage((long)lVar7);
  }
  cVar4 = FUN_140612c50();
  if ((cVar4 == '\x01') || (DAT_1468b616b != '\0')) {
    if (DAT_1468b6160 != 0) {
      puVar6 = (undefined8 *)FText::ToString(param_2);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar6;
      }
      FOutputDevice::LogfImpl(DAT_1468b6160,&DAT_144cc8c34,puVar9);
    }
  }
  else {
    if (param_3 == 0) {
      param_3 = FUN_141671ea0();
    }
    FText::FText(local_28,param_3);
    puVar6 = (undefined8 *)FText::ToString(local_28);
    puVar9 = &DAT_143f3eda8;
    if (*(int *)(puVar6 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar6;
    }
    puVar6 = (undefined8 *)FText::ToString(param_2);
    if (*(int *)(puVar6 + 1) != 0) {
      puVar9 = (undefined2 *)*puVar6;
    }
    uVar5 = FUN_1416a4860(param_1,puVar9,puVar8);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  return uVar5;
}



// FUNCTION 141678850 FUN_141678850 body=387 status=ok
// SIG undefined FUN_141678850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_141678850(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar5 = FUN_140612c50();
  if (cVar5 == '\x01') {
    if (DAT_1468b6160 != 0) {
      puVar7 = (undefined8 *)FText::ToString(param_2);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar7;
      }
      FOutputDevice::LogfImpl(DAT_1468b6160,&DAT_144cc8d14,puVar8);
    }
    switch(param_1) {
    case 0:
      return 5;
    case 1:
    case 5:
      return 0;
    case 2:
    case 3:
    case 4:
      return 4;
    default:
      return 1;
    }
  }
  LOCK();
  _DAT_1468e30c8 = _DAT_1468e30c8 + 1;
  UNLOCK();
  if (param_3 == 0) {
    param_3 = FUN_141671ea0();
  }
  FText::FText(local_28,param_3);
  puVar7 = (undefined8 *)FText::ToString(local_28);
  puVar8 = &DAT_143f3eda8;
  if (*(int *)(puVar7 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar7;
  }
  puVar7 = (undefined8 *)FText::ToString(param_2);
  if (*(int *)(puVar7 + 1) != 0) {
    puVar8 = (undefined2 *)*puVar7;
  }
  uVar6 = FUN_1416a4860(param_1,puVar8,puVar9);
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
  LOCK();
  _DAT_1468e30c8 = _DAT_1468e30c8 + -1;
  UNLOCK();
  return uVar6;
}



// FUNCTION 1416789f0 PanicFlushThreadedLogs body=221 status=ok
// SIG undefined PanicFlushThreadedLogs(void)

void FOutputDeviceRedirector::PanicFlushThreadedLogs(longlong param_1)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  FUN_141684f40(param_1,0);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar5 = 0;
    do {
      plVar4 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x30));
      cVar1 = (**(code **)(*plVar4 + 0x38))(plVar4);
      if (cVar1 != '\0') {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x38));
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  for (iVar3 = *(int *)(param_1 + 0x18); iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 5;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x10,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141678ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return;
}



// FUNCTION 141678ad0 Param body=376 status=ok
// SIG undefined Param(void)

ulonglong FParse::Param(wchar_t *param_1,ushort *param_2)

{
  ushort uVar1;
  wchar_t wVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *_Str1;
  ushort uVar9;
  
  pwVar7 = param_1;
  if (*param_1 == L'\0') {
LAB_141678bb2:
    return in_RAX & 0xffffffffffffff00;
  }
LAB_141678b00:
  if ((param_2 != (ushort *)0x0) && (pwVar7 != (wchar_t *)0x0)) {
    uVar1 = *param_2;
    bVar4 = false;
    lVar8 = -1;
    in_RAX = (ulonglong)(uVar1 - 0x61);
    uVar9 = uVar1 - 0x20;
    if (0x19 < (ushort)(uVar1 - 0x61)) {
      uVar9 = uVar1;
    }
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != 0);
    wVar2 = *pwVar7;
    bVar3 = false;
    if (wVar2 != L'\0') {
      do {
        _Str1 = pwVar7 + 1;
        iVar6 = (ushort)wVar2 - 0x20;
        if (0x19 < (ushort)(wVar2 + L'ﾟ')) {
          iVar6 = CONCAT22((short)((uint)iVar6 >> 0x10),wVar2);
        }
        if (((!bVar3) && (!bVar4)) && ((ushort)iVar6 == uVar9)) {
          iVar5 = _wcsnicmp(_Str1,(wchar_t *)(param_2 + 1),(longlong)((int)lVar8 + -1));
          in_RAX = CONCAT44(extraout_var,iVar5);
          if (iVar5 == 0) goto LAB_141678bd1;
        }
        in_RAX = (ulonglong)(iVar6 - 0x41U);
        if (((ushort)(iVar6 - 0x41U) < 0x1a) ||
           (in_RAX = (ulonglong)(iVar6 - 0x30U), (ushort)(iVar6 - 0x30U) < 10)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((ushort)iVar6 == 0x22) {
          bVar3 = !bVar3;
        }
        wVar2 = *_Str1;
        pwVar7 = _Str1;
        if (wVar2 == L'\0') break;
      } while( true );
    }
  }
  goto LAB_141678bb2;
LAB_141678bd1:
  if (pwVar7 == (wchar_t *)0x0) goto LAB_141678bb2;
  if ((param_1 < pwVar7) &&
     (in_RAX = (ulonglong)(ushort)(pwVar7[-1] + L'ￓ'), (pwVar7[-1] + L'ￓ' & 0xfffdU) == 0)) {
    if (param_1 <= pwVar7 + -2) {
      iVar6 = iswspace(pwVar7[-2]);
      in_RAX = CONCAT44(extraout_var_00,iVar6);
      if (iVar6 == 0) goto LAB_141678c38;
    }
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != 0);
    in_RAX = (ulonglong)(int)lVar8;
    if ((pwVar7 + in_RAX != (wchar_t *)0x0) && (wVar2 = pwVar7[in_RAX], wVar2 != L'\0')) {
      iVar6 = iswspace(wVar2);
      in_RAX = CONCAT44(extraout_var_01,iVar6);
      if (iVar6 == 0) goto LAB_141678c38;
    }
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_141678c38:
  pwVar7 = pwVar7 + 1;
  goto LAB_141678b00;
}



// FUNCTION 141678c50 FUN_141678c50 body=398 status=ok
// SIG undefined FUN_141678c50(void)

ulonglong FUN_141678c50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong local_18 [2];
  
  iVar1 = *(int *)(param_1 + 8);
  uVar4 = (ulonglong)(iVar1 - 1);
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  uVar7 = (ulonglong)(iVar1 - 1);
  if (iVar1 == 0) {
    uVar7 = 0xffffffff;
  }
  iVar3 = (int)uVar7;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (iVar3 == 0x20) {
    uVar4 = FUN_1416791b0(param_1,0,param_2);
    return uVar4;
  }
  uVar5 = uVar4;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  iVar3 = (int)uVar5;
  if (iVar3 == 0x24) {
    uVar4 = FUN_1416791b0(param_1,1,param_2);
    return uVar4;
  }
  if (iVar3 == 0x26) {
    local_18[0] = 0;
    local_18[1] = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],2,&DAT_144cca884,2,0x3f);
    cVar2 = FString::StartsWith(param_1,local_18,1);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar2 != '\0') {
      uVar4 = FUN_1416791b0(param_1,2,param_2);
      return uVar4;
    }
    uVar4 = FUN_1416791b0(param_1,3,param_2);
    return uVar4;
  }
  if (iVar3 == 0x44) {
    uVar4 = FUN_1416791b0(param_1,4,param_2);
    return uVar4;
  }
  if (iVar1 == 0) {
    uVar4 = uVar7;
  }
  iVar6 = (int)uVar4;
  if (iVar3 == 0x23) {
    uVar4 = FUN_1416791b0(param_1,5,param_2);
    return uVar4;
  }
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  if (iVar6 == 0x2b) {
    uVar4 = FUN_1416791b0(param_1,6,param_2);
    return uVar4;
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 141678de0 FUN_141678de0 body=967 status=ok
// SIG undefined FUN_141678de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141678de0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  wchar_t _Ch;
  ulonglong uVar2;
  int iVar3;
  wchar_t *pwVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined8 local_150;
  wchar_t *local_148;
  wchar_t *pwStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined1 local_c0 [8];
  longlong *local_b8;
  char local_a8;
  wchar_t *local_a0;
  wchar_t *pwStack_98;
  longlong local_90;
  undefined1 local_88;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined **local_68;
  wchar_t local_60;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  pwVar4 = *(wchar_t **)(param_2 + 0x10);
  local_148 = *(wchar_t **)(param_2 + 0x20);
  if ((pwVar4 <= local_148) && (local_148 <= (wchar_t *)(*(longlong *)(param_2 + 0x18) + -2))) {
    local_138 = 0;
    local_90 = (longlong)local_148 - (longlong)pwVar4 >> 1;
    uStack_134 = (undefined4)local_90;
    if (*local_148 == L'`') {
      local_90 = local_90 << 0x20;
      pwStack_140 = local_148 + 1;
      local_88 = 1;
      if ((pwVar4 <= pwStack_140) &&
         (pwStack_140 <= (wchar_t *)(*(longlong *)(param_2 + 0x18) + -2))) {
        _Ch = *pwStack_140;
        pwStack_98 = pwStack_140;
        if (pwStack_140 < local_148 + 2) {
          pwStack_98 = local_148 + 2;
        }
        local_a0 = local_148;
        pwVar4 = _guard_xfg_dispatch_icall_nop((wchar_t *)PTR_DAT_1464aff60,_Ch);
        if (pwVar4 == (wchar_t *)0x0) {
          if (param_3 != '\0') {
            local_158 = (wchar_t *)0x0;
            local_150 = 0;
            if (_Ch != L'\0') {
              local_150 = 2;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
              *local_158 = _Ch;
              local_158[1] = L'\0';
            }
            local_168 = 0;
            local_160 = 0;
            uVar6 = FText::FromString(local_118,&local_158);
            local_d0 = 4;
            FText::FText(local_c0,uVar6);
            uVar2 = local_160;
            lVar9 = (longlong)(int)local_160;
            local_a8 = '\x01';
            iVar3 = (int)local_160 + 1;
            local_160 = CONCAT44(local_160._4_4_,iVar3);
            if (local_160._4_4_ < iVar3) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_168,uVar2 & 0xffffffff);
            }
            puVar8 = (undefined4 *)(lVar9 * 0x30 + local_168);
            *puVar8 = local_d0;
            *(ulonglong *)(puVar8 + 2) = CONCAT44(uStack_c4,local_c8);
            *(ulonglong *)(puVar8 + 2) = CONCAT44(uStack_c4,local_c8);
            puVar8[2] = local_c8;
            *(ulonglong *)(puVar8 + 2) = CONCAT44(uStack_c4,local_c8);
            *(undefined1 *)(puVar8 + 10) = 0;
            if (local_a8 != '\0') {
              FText::FText(puVar8 + 4,local_c0);
              *(undefined1 *)(puVar8 + 10) = 1;
              if ((local_a8 != '\0') && (local_a8 = '\0', local_b8 != (longlong *)0x0)) {
                LOCK();
                plVar1 = local_b8 + 1;
                lVar9 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_b8)(local_b8);
                  LOCK();
                  piVar5 = (int *)((longlong)local_b8 + 0xc);
                  iVar3 = *piVar5;
                  *piVar5 = *piVar5 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_b8 + 8))(local_b8,1);
                  }
                }
              }
            }
            if (local_110 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_110 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_110)(local_110);
                LOCK();
                piVar5 = (int *)((longlong)local_110 + 0xc);
                iVar3 = *piVar5;
                *piVar5 = *piVar5 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_110 + 8))(local_110,1);
                }
              }
            }
            uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_e8,L"Invalid escape character \'{0}\'",L"StringFormatter",
                               L"InvalidEscapeCharacter");
            uVar6 = FTextFormat::FTextFormat(&local_148,uVar6);
            uVar6 = FText::Format(local_100,uVar6,&local_168);
            FText::FText(local_130,uVar6);
            FText::FText(param_1,local_130);
            *(undefined1 *)(param_1 + 0x18) = 1;
            if (local_128 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_128 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_128)(local_128);
                LOCK();
                piVar5 = (int *)((longlong)local_128 + 0xc);
                iVar3 = *piVar5;
                *piVar5 = *piVar5 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_128 + 8))(local_128,1);
                }
              }
            }
            if (local_f8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_f8 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_f8)(local_f8);
                LOCK();
                piVar5 = (int *)((longlong)local_f8 + 0xc);
                iVar3 = *piVar5;
                *piVar5 = *piVar5 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_f8 + 8))(local_f8,1);
                }
              }
            }
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_e0 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_e0)(local_e0);
                LOCK();
                piVar5 = (int *)((longlong)local_e0 + 0xc);
                iVar3 = *piVar5;
                *piVar5 = *piVar5 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_e0 + 8))(local_e0,1);
                }
              }
            }
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(&local_168);
            if (local_158 == (wchar_t *)0x0) {
              return param_1;
            }
            FMemory::Free();
            return param_1;
          }
        }
        else {
          piVar5 = (int *)FUN_141673840();
          local_78 = *piVar5;
          iStack_74 = piVar5[1];
          iStack_70 = piVar5[2];
          iStack_6c = piVar5[3];
          local_68 = &PTR_FUN_144ccfb60;
          local_60 = _Ch;
          FExpressionTokenConsumer::Add(param_2,&local_a0,&local_78);
          pppuVar7 = &local_68;
          if (((local_78 == 0 && iStack_74 == 0) && iStack_70 == 0) && iStack_6c == 0) {
            pppuVar7 = (undefined ***)0x0;
          }
          if (pppuVar7 != (undefined ***)0x0) {
            (*(code *)**pppuVar7)(pppuVar7,0);
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}


