// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14218db80 FUN_14218db80 body=125 status=ok
// SIG undefined FUN_14218db80(void)

undefined8 * FUN_14218db80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed2f8) {
    _Init_thread_header(&DAT_146aed2f8);
    if (DAT_146aed2f8 == -1) {
      FUN_14217b2d0(&DAT_146aed2e0,0);
      atexit(FUN_143ea6a50);
      _Init_thread_footer(&DAT_146aed2f8);
      return &DAT_146aed2e0;
    }
  }
  return &DAT_146aed2e0;
}



// FUNCTION 14218dc00 FUN_14218dc00 body=38 status=ok
// SIG undefined FUN_14218dc00(void)

undefined8
FUN_14218dc00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14218da20(param_1,param_2,DAT_146aeae90,param_3,param_4);
  return param_2;
}



// FUNCTION 14218dc30 FUN_14218dc30 body=108 status=ok
// SIG undefined FUN_14218dc30(void)

undefined8 * FUN_14218dc30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeb4b0) {
    _Init_thread_header(&DAT_146aeb4b0);
    if (DAT_146aeb4b0 == -1) {
      atexit((_func_5014 *)&LAB_143ea7430);
      _Init_thread_footer(&DAT_146aeb4b0);
      return &DAT_146aeb4a0;
    }
  }
  return &DAT_146aeb4a0;
}



// FUNCTION 14218dd00 FUN_14218dd00 body=135 status=ok
// SIG undefined FUN_14218dd00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14218dd00(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed2d8) {
    _Init_thread_header(&DAT_146aed2d8);
    if (DAT_146aed2d8 == -1) {
      _DAT_146aed2c8 = 0;
      uRam0000000146aed2d0 = 2;
      _DAT_146aed2c0 = 0;
      atexit((_func_5014 *)&LAB_143ea7450);
      _Init_thread_footer(&DAT_146aed2d8);
      return &DAT_146aed2c0;
    }
  }
  return &DAT_146aed2c0;
}



// FUNCTION 14218dd90 FUN_14218dd90 body=35 status=ok
// SIG undefined FUN_14218dd90(void)

undefined8 * FUN_14218dd90(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_28 [32];
  
  lVar2 = FUN_14218d6d0(local_28);
  uVar1 = *(undefined8 *)(lVar2 + 0xc);
  *param_1 = *(undefined8 *)(lVar2 + 4);
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 14218ddc0 FUN_14218ddc0 body=142 status=ok
// SIG undefined FUN_14218ddc0(void)

undefined8 * FUN_14218ddc0(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  lVar1 = FUN_14218d6d0(local_28);
  local_38 = *(undefined1 (*) [16])(lVar1 + 4);
  if (((local_38._4_4_ == 0 && local_38._12_4_ == 0) && local_38._8_4_ == 0) && local_38._0_4_ == 0)
  {
    *param_1 = 0;
    param_1[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
    FGenericPlatformString::Memcpy(*param_1,L"NONE",10);
    return param_1;
  }
  FUN_141682af0(local_38,param_1,0);
  return param_1;
}



// FUNCTION 14218de50 FUN_14218de50 body=24 status=ok
// SIG undefined FUN_14218de50(void)

undefined4 FUN_14218de50(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined1 local_28 [40];
  
  puVar1 = (undefined4 *)FUN_14218d6d0(local_28,param_1);
  return *puVar1;
}



// FUNCTION 14218de70 FUN_14218de70 body=108 status=ok
// SIG undefined FUN_14218de70(void)

undefined * FUN_14218de70(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed2dc) {
    _Init_thread_header(&DAT_146aed2dc);
    if (DAT_146aed2dc == -1) {
      atexit((_func_5014 *)&LAB_143ea7460);
      _Init_thread_footer(&DAT_146aed2dc);
      return &DAT_146527150;
    }
  }
  return &DAT_146527150;
}



// FUNCTION 14218dee0 FUN_14218dee0 body=108 status=ok
// SIG undefined FUN_14218dee0(void)

undefined8 * FUN_14218dee0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeb4c8) {
    _Init_thread_header(&DAT_146aeb4c8);
    if (DAT_146aeb4c8 == -1) {
      atexit(FUN_143ea7470);
      _Init_thread_footer(&DAT_146aeb4c8);
      return &DAT_146aeb4b8;
    }
  }
  return &DAT_146aeb4b8;
}



// FUNCTION 14218df50 FUN_14218df50 body=568 status=ok
// SIG undefined FUN_14218df50(void)

undefined4 * FUN_14218df50(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong local_res10;
  longlong local_res18;
  longlong local_f8 [3];
  short local_e0;
  ushort local_de;
  longlong local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  undefined4 local_c0 [2];
  undefined1 local_b8 [128];
  undefined1 *local_38;
  undefined8 local_30;
  
  lVar10 = DAT_146aeae58;
  *param_2 = 0xffffffff;
  local_de = local_de & 0xfff8;
  local_e0 = -1;
  local_res10 = 0;
  if (lVar10 == 0) {
LAB_14218e022:
    lVar10 = 0;
  }
  else {
    local_d8 = lVar10;
    local_d0 = &DAT_146aeb1e8;
    local_c8 = local_f8;
    uVar6 = FUN_14218be10();
    FUN_14217a950(uVar6,lVar10);
    lVar10 = local_f8[0];
    if ((local_e0 != 0x28) || (local_res10 = local_f8[0], local_f8[0] == 0)) goto LAB_14218e022;
    lVar7 = UObject::GetPrivateStaticClass();
    lVar2 = *(longlong *)(lVar10 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14218e022;
  }
  local_res18 = lVar10;
  if (((local_de & 1) != 0) && (local_f8[0] != 0)) {
    FMemory::Free();
  }
  if (lVar10 == 0) {
    return param_2;
  }
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0x58) & 4) != 0) {
    if (((*(byte *)(lVar2 + 0x58) & 2) == 0) || (DAT_146aeae14 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      bVar3 = true;
      goto LAB_14218e06f;
    }
  }
  bVar3 = false;
LAB_14218e06f:
  if (bVar3) {
    puVar8 = (undefined4 *)FUN_14218d6d0(&local_d8,lVar10);
    uVar1 = *puVar8;
    local_res10 = CONCAT44(local_res10._4_4_,uVar1);
    puVar8 = (undefined4 *)FUN_14218b3a0(lVar2,&local_res10);
    if (puVar8 == (undefined4 *)0x0) {
      local_f8[1] = 0;
      local_de = local_de & 0xfff8;
      local_f8[2] = 0;
      local_e0 = 0x28;
      local_38 = (undefined1 *)0x0;
      local_30 = 0;
      local_f8[0] = local_res18;
      local_c0[0] = uVar1;
      FUN_140a70170(local_b8,1);
      uVar4 = local_30;
      lVar10 = (longlong)(int)local_30;
      iVar5 = (int)local_30 + 1;
      local_30 = CONCAT44(local_30._4_4_,iVar5);
      if (local_30._4_4_ < iVar5) {
        TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_b8,uVar4 & 0xffffffff);
      }
      puVar9 = local_b8;
      if (local_38 != (undefined1 *)0x0) {
        puVar9 = local_38;
      }
      puVar9 = puVar9 + lVar10 * 0x20;
      *(ushort *)(puVar9 + 0x1a) = *(ushort *)(puVar9 + 0x1a) & 0xfff8;
      *(undefined2 *)(puVar9 + 0x18) = 0xffff;
      FUN_14217f450(puVar9,local_f8);
      if (((local_de & 1) != 0) && (local_f8[0] != 0)) {
        FMemory::Free();
      }
      puVar8 = (undefined4 *)FUN_1421912a0(lVar2,local_c0);
    }
  }
  else {
    puVar8 = (undefined4 *)FUN_142191860();
  }
  *param_2 = *puVar8;
  return param_2;
}



// FUNCTION 14218e190 FUN_14218e190 body=108 status=ok
// SIG undefined FUN_14218e190(void)

undefined * FUN_14218e190(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aecfc8) {
    _Init_thread_header(&DAT_146aecfc8);
    if (DAT_146aecfc8 == -1) {
      atexit(FUN_143ea7650);
      _Init_thread_footer(&DAT_146aecfc8);
      return &DAT_146aeceb8;
    }
  }
  return &DAT_146aeceb8;
}



// FUNCTION 14218e200 FUN_14218e200 body=182 status=ok
// SIG undefined FUN_14218e200(void)

longlong FUN_14218e200(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18 [2];
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar3 = param_1 + 0x40;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *plVar1 + (longlong)iVar2 * 0x28;
        if (*(longlong *)(*plVar1 + (longlong)iVar2 * 0x28) == param_2) {
          if ((iVar2 != -1) && (lVar3 != 0)) {
            return lVar3 + 8;
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res18[0] = &local_res10;
  local_res10 = param_2;
  FUN_1421794a0(plVar1,local_res8,local_res18,0);
  return *plVar1 + (longlong)local_res8[0] * 0x28 + 8;
}



// FUNCTION 14218e2c0 FUN_14218e2c0 body=515 status=ok
// SIG undefined FUN_14218e2c0(void)

short * FUN_14218e2c0(longlong *param_1,short *param_2)

{
  short sVar1;
  undefined1 auVar2 [16];
  int *piVar3;
  int *piVar4;
  BOOL BVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  short *psVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_res10 [8];
  short *local_res18 [2];
  
  if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
    return (short *)PTR_DAT_146526ad8;
  }
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = FUN_140438070(param_2);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar6) * 4);
    if (iVar6 != -1) {
      lVar12 = *param_1;
      do {
        lVar11 = (longlong)iVar6;
        psVar9 = *(short **)(lVar12 + lVar11 * 0x10);
        if (psVar9 == param_2) {
          if ((iVar6 != -1) && (lVar11 * 0x10 + lVar12 != 0)) goto LAB_14218e495;
          break;
        }
        iVar6 = *(int *)(lVar12 + 8 + lVar11 * 0x10);
      } while (iVar6 != -1);
    }
  }
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (param_2[lVar12] != 0);
  iVar6 = (int)lVar12 + 1;
  if (iVar6 < 0x800) {
    piVar4 = (int *)param_1[0xf];
    piVar3 = (int *)param_1[0xf];
    while (piVar10 = piVar4, piVar10 != (int *)0x0) {
      if (iVar6 <= *piVar10) goto LAB_14218e424;
      piVar3 = piVar10;
      piVar4 = *(int **)(piVar10 + 2);
    }
    piVar10 = (int *)FMemory::Malloc(0x2018,0);
    *piVar10 = 0x1000;
    *(int **)(piVar10 + 4) = piVar10 + 6;
    piVar10[2] = 0;
    piVar10[3] = 0;
    if (piVar3 == (int *)0x0) {
      param_1[0xf] = (longlong)piVar10;
    }
    else {
      *(int **)(piVar3 + 2) = piVar10;
    }
LAB_14218e424:
    psVar9 = *(short **)(piVar10 + 4);
    *piVar10 = *piVar10 - iVar6;
    *(short **)(piVar10 + 4) = psVar9 + iVar6;
    if (*piVar10 < 8) {
      if (piVar10 == (int *)param_1[0xf]) {
        param_1[0xf] = *(longlong *)(piVar10 + 2);
      }
      else if (piVar3 != (int *)0x0) {
        *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar10 + 2);
      }
    }
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)iVar6;
    uVar8 = SUB168(ZEXT816(2) * auVar2,0);
    if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    psVar9 = (short *)operator_new(uVar8);
  }
  lVar12 = (longlong)psVar9 - (longlong)param_2;
  do {
    sVar1 = *param_2;
    *(short *)(lVar12 + (longlong)param_2) = sVar1;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  local_res18[0] = psVar9;
  FUN_142178c70(param_1,local_res10,local_res18,0);
LAB_14218e495:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  return psVar9;
}



// FUNCTION 14218e4d0 FUN_14218e4d0 body=172 status=ok
// SIG undefined FUN_14218e4d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_14218e4d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed0a0) {
    _Init_thread_header(&DAT_146aed0a0);
    if (DAT_146aed0a0 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1465270a8);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1465270a8,4000);
      _DAT_1465270d8 = 0xffffffff;
      _DAT_1465270d0 = 0;
      _DAT_1465270dc = 0;
      _DAT_1465270e4 = 0;
      atexit((_func_5014 *)&LAB_143ea74e0);
      _Init_thread_footer(&DAT_146aed0a0);
      return &PTR_PTR_146527050;
    }
  }
  return &PTR_PTR_146527050;
}



// FUNCTION 14218e580 FUN_14218e580 body=125 status=ok
// SIG undefined FUN_14218e580(void)

undefined8 * FUN_14218e580(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed318) {
    _Init_thread_header(&DAT_146aed318);
    if (DAT_146aed318 == -1) {
      FUN_14217b6f0(&DAT_146aed300,0);
      atexit(FUN_143ea6a80);
      _Init_thread_footer(&DAT_146aed318);
      return &DAT_146aed300;
    }
  }
  return &DAT_146aed300;
}



// FUNCTION 14218e600 FUN_14218e600 body=656 status=ok
// SIG undefined FUN_14218e600(void)

longlong FUN_14218e600(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_28;
  undefined4 local_20;
  longlong *local_18;
  undefined4 local_10;
  
  if (DAT_146aeb1a0 == '\0') {
    uVar1 = FUN_14218cdd0();
    FUN_140b9e990(&DAT_146aeb108,uVar1);
  }
  plVar6 = (longlong *)0x0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  lVar2 = FUN_1421872f0(L"GamePerf",DAT_146aeb108,&local_18,&local_28);
  if (*(longlong *)(lVar2 + 0x70) == 0) {
    plVar3 = (longlong *)operator_new(0xa8);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = lVar2;
      *(longlong **)(lVar2 + 0x70) = plVar3;
      FUN_14217bd20(plVar3 + 1);
      FUN_14217bd20(plVar3 + 2);
      FUN_14217bd20(plVar3 + 3);
      FUN_14217bd20(plVar3 + 4);
      FUN_14217bd20(plVar3 + 5);
      FUN_14217bd20(plVar3 + 6);
      FUN_14217bd20(plVar3 + 7);
      FUN_14217bd20(plVar3 + 8);
      FUN_14217bd20(plVar3 + 9);
      FUN_14217bd20(plVar3 + 10);
      FUN_14217bd20(plVar3 + 0xb);
      FUN_14217bd20(plVar3 + 0xc);
      FUN_14217bd20(plVar3 + 0xd);
      FUN_14217bd20(plVar3 + 0xe);
      FUN_14217bd20(plVar3 + 0xf);
      FUN_14217bd20(plVar3 + 0x10);
      FUN_14217bd20(plVar3 + 0x11);
      FUN_14217bd20(plVar3 + 0x12);
      plVar3[0x13] = 0;
      plVar3[0x14] = 0;
      plVar6 = plVar3;
    }
    if (DAT_146aeb1a0 == '\0') {
      uVar1 = FUN_14218cdd0();
      FUN_140b9e990(&DAT_146aeb108,uVar1);
    }
    uVar1 = DAT_146aeb108;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    local_10 = 3;
    local_18 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = (longlong)plVar6;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3f4f8;
      plVar3[2] = (longlong)FUN_14218ea50;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
    }
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = (longlong)plVar6;
      *plVar5 = (longlong)&DAT_143f3ed00;
      plVar5[2] = (longlong)FUN_14218ea20;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar4;
      *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    FUN_1421872f0(L"GamePerf",uVar1,&local_28,&local_18);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar4 = FMemory::Realloc(plVar5,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
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
  return lVar2;
}



// FUNCTION 14218e890 FUN_14218e890 body=399 status=ok
// SIG undefined FUN_14218e890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14218e890(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  longlong local_310;
  longlong local_308;
  undefined1 local_2f8 [32];
  undefined1 local_2d8 [680];
  int local_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  FUN_142186b00();
  local_318 = 0;
  FUN_14218fa70(0);
  if ((DAT_146aeaf18 == '\0') && (puVar2 = (undefined8 *)FUN_14218ce40(), puVar2 != &DAT_146aeaeb0))
  {
    DAT_146aeaeb0 = *puVar2;
    uRam0000000146aeaeb8 = puVar2[1];
    _DAT_146aeaec0 = puVar2[2];
    uRam0000000146aeaec8 = puVar2[3];
    _DAT_146aeaed0 = puVar2[4];
    DAT_146aeaed8 = puVar2[5];
    _DAT_146aeaee0 = puVar2[6];
    _DAT_146aeaee8 = puVar2[7];
    _DAT_146aeaef0 = puVar2[8];
    _DAT_146aeaef8 = puVar2[9];
    DAT_146aeaf00 = puVar2[10];
    DAT_146aeaf08 = puVar2[0xb];
    DAT_146aeaf10 = puVar2[0xc];
    DAT_146aeaf18 = '\x01';
  }
  FUN_142178380(&local_310,L"HandleDiscoveryConfiguration",DAT_146aeaeb0);
  local_28 = 0;
  local_20 = 1;
  if ((DAT_146aeae14 == '\0') || (cVar1 = FUN_142190080(local_310), cVar1 == '\0'))
  goto LAB_14218e9d4;
  local_318 = 0xd3;
  if (*(longlong *)(local_310 + 0x28) != 0xd3) {
    if ((*(int *)(local_310 + 0x88) == 0) || (*(int *)(local_310 + 0x88) == 1)) goto LAB_14218e9d4;
    iVar3 = *(int *)(local_310 + 0x98) + -1;
    if (*(int *)(local_310 + 0x98) == 0) {
      iVar3 = 0;
    }
    if (iVar3 == 0) goto LAB_14218e9d4;
  }
  if (0 < local_30) {
    FUN_1421881f0(&local_310);
  }
LAB_14218e9d4:
  local_20 = 0;
  FUN_14217ea90(local_2d8);
  FUN_14217e9a0(local_2f8);
  if (local_308 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14218ea20 FUN_14218ea20 body=35 status=ok
// SIG undefined FUN_14218ea20(void)

void FUN_14218ea20(undefined8 *param_1)

{
  FUN_142187670();
  FUN_142191a00(param_1);
  FUN_142195000(*param_1);
  return;
}



// FUNCTION 14218ea50 FUN_14218ea50 body=107 status=ok
// SIG undefined FUN_14218ea50(void)

bool FUN_14218ea50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = 0;
  if (0 < *(int *)(param_3 + 0x90)) {
    puVar2 = *(undefined4 **)(param_3 + 0x88);
    if (*(undefined4 **)(param_3 + 0x88) == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(param_3 + 8);
    }
    if (puVar2 != (undefined4 *)0x0) {
      if (*(short *)(puVar2 + 6) == 0x28) {
        lVar1 = FUN_1407ba9a0();
        return lVar1 != 0;
      }
      if (*(short *)(puVar2 + 6) == 0x27) {
        local_18 = *puVar2;
        uStack_14 = puVar2[1];
        uStack_10 = puVar2[2];
        uStack_c = puVar2[3];
        lVar1 = FHardwareCursor::GetHandle(&local_18);
      }
    }
  }
  return lVar1 != 0;
}



// FUNCTION 14218eac0 FUN_14218eac0 body=199 status=ok
// SIG undefined FUN_14218eac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14218eac0(undefined8 *param_1,ulonglong *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FMD5::FMD5(local_98);
  uVar2 = 0;
  puVar1 = (undefined8 *)*param_2;
  uVar3 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (puVar1 + (int)param_2[1] < puVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      FUN_142190a70(local_98,*puVar1,param_3);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 != uVar3);
  }
  *param_1 = 0;
  param_1[1] = 0;
  FMD5::Final(local_98,param_1);
  AK::MemoryMgr::StartProfileThreadUsage((long)local_98);
  return param_1;
}



// FUNCTION 14218eb90 FUN_14218eb90 body=357 status=ok
// SIG undefined FUN_14218eb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14218eb90(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_128 [128];
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_88 [96];
  ulonglong local_28;
  longlong lVar2;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  FMD5::FMD5(local_88);
  local_a8 = (undefined1 *)0x0;
  lVar3 = -1;
  lVar1 = lVar3;
  if (param_2 == 0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = 0;
  }
  else {
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(short *)(param_2 + lVar1 * 2) != 0);
    uVar4 = (int)lVar2 + 2;
    local_98 = (undefined4)lVar1;
    if ((0x80 < uVar4) && (uVar4 != 0)) {
      local_a8 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)uVar4,0);
    }
    local_138 = 0x3f;
    local_a0 = local_128;
    if (local_a8 != (undefined1 *)0x0) {
      local_a0 = local_a8;
    }
    FGenericPlatformString::Convert<wchar_t,char>(local_a0,uVar4,param_2,uVar4);
  }
  do {
    lVar3 = lVar3 + 1;
  } while (local_a0[lVar3] != '\0');
  FMD5::Update(local_88,local_a0,lVar3);
  if (local_a8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  *param_1 = 0;
  param_1[1] = 0;
  FMD5::Final(local_88,param_1);
  AK::MemoryMgr::StartProfileThreadUsage((long)local_88);
  return param_1;
}



// FUNCTION 14218ed00 FUN_14218ed00 body=187 status=ok
// SIG undefined FUN_14218ed00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14218ed00(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x18))(param_2);
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    FMD5::FMD5(local_88);
    FMD5::Update(local_88,uVar2,uVar1);
    local_98 = 0;
    uStack_90 = 0;
    FMD5::Final(local_88,&local_98);
    AK::MemoryMgr::StartProfileThreadUsage((long)local_88);
    *param_1 = local_98;
    param_1[1] = uStack_90;
  }
  return param_1;
}



// FUNCTION 14218edc0 FUN_14218edc0 body=143 status=ok
// SIG undefined FUN_14218edc0(void)

void FUN_14218edc0(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = param_3 + param_4;
  *(int *)(param_1 + 0x90) = param_3;
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (uVar4 < 0x81) {
    if (lVar2 == 0) goto LAB_14218ee13;
    lVar3 = 0;
  }
  else {
    if ((lVar2 == 0) && (uVar4 == 0)) goto LAB_14218ee13;
    lVar3 = (longlong)(int)uVar4;
  }
  uVar1 = FMemory::Realloc(lVar2,lVar3,0);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
LAB_14218ee13:
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  *(longlong *)(param_1 + 0x88) = lVar2;
  FGenericPlatformString::Convert<wchar_t,char>(lVar2,uVar4,param_2,uVar4,0x3f);
  return;
}



// FUNCTION 14218ee50 FUN_14218ee50 body=632 status=ok
// SIG undefined FUN_14218ee50(void)

undefined2 *
FUN_14218ee50(undefined2 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  
  plVar3 = (longlong *)FUN_14218db80();
  iVar1 = FUN_1421831b0(plVar3,1);
  uVar5 = iVar1 >> 0x1f & 3;
  uVar2 = iVar1 + uVar5;
  puVar6 = (undefined2 *)
           ((ulonglong)((uVar2 & 3) - uVar5) * 0x100 +
           *(longlong *)(*plVar3 + (longlong)((int)uVar2 >> 2) * 8));
  if (puVar6 == (undefined2 *)0x0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    *(undefined8 *)(puVar6 + 0x20) = 0;
    *(undefined4 *)(puVar6 + 0x28) = 0;
    *(code **)(puVar6 + 8) = FString::FString;
    *(undefined8 *)(puVar6 + 0x48) = 0;
    *(undefined4 *)(puVar6 + 0x50) = 0;
    *(code **)(puVar6 + 0x30) = FHardwareCursor::GetHandle;
    *(undefined8 *)(puVar6 + 0x70) = 0;
    *(undefined4 *)(puVar6 + 0x78) = 0;
    *(undefined1 **)(puVar6 + 0x58) = &LAB_14202be10;
  }
  *puVar6 = param_1;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  if (*(int *)(param_2 + 8) == 0) {
LAB_14218ef43:
    local_78[0] = FString::FString;
  }
  else {
    puVar4 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar4 = param_2 + 2;
    }
    if (puVar4 == (undefined8 *)0x0) goto LAB_14218ef43;
    plVar3 = (longlong *)(**(code **)*puVar4)(puVar4,local_68);
    (**(code **)(*plVar3 + 8))(plVar3);
    local_78[0] = (code *)*param_2;
  }
  FGenericPlatformMemory::MemswapGreaterThan8(local_78,puVar6 + 8,0x50);
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
  if (*(int *)(param_3 + 8) == 0) {
LAB_14218efcd:
    local_78[0] = FHardwareCursor::GetHandle;
  }
  else {
    puVar4 = (undefined8 *)param_3[6];
    if ((undefined8 *)param_3[6] == (undefined8 *)0x0) {
      puVar4 = param_3 + 2;
    }
    if (puVar4 == (undefined8 *)0x0) goto LAB_14218efcd;
    plVar3 = (longlong *)(**(code **)*puVar4)(puVar4,local_68);
    (**(code **)(*plVar3 + 8))(plVar3);
    local_78[0] = (code *)*param_3;
  }
  FGenericPlatformMemory::MemswapGreaterThan8(local_78,puVar6 + 0x30,0x50);
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
  if (*(int *)(param_4 + 8) != 0) {
    puVar4 = (undefined8 *)param_4[6];
    if ((undefined8 *)param_4[6] == (undefined8 *)0x0) {
      puVar4 = param_4 + 2;
    }
    if (puVar4 != (undefined8 *)0x0) {
      plVar3 = (longlong *)(**(code **)*puVar4)(puVar4,local_68);
      (**(code **)(*plVar3 + 8))(plVar3);
      local_78[0] = (code *)*param_4;
      goto LAB_14218f05a;
    }
  }
  local_78[0] = (code *)&LAB_14202be10;
LAB_14218f05a:
  FGenericPlatformMemory::MemswapGreaterThan8(local_78,puVar6 + 0x58,0x50);
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
  return puVar6;
}



// FUNCTION 14218f0d0 FUN_14218f0d0 body=300 status=ok
// SIG undefined FUN_14218f0d0(void)

undefined8 * FUN_14218f0d0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  plVar2 = (longlong *)FUN_14218e580();
  iVar1 = FUN_142183600(plVar2,1);
  puVar4 = (undefined8 *)
           ((ulonglong)(uint)(iVar1 % 10) * 0x60 +
           *(longlong *)(*plVar2 + (longlong)(iVar1 / 10) * 8));
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    *puVar4 = param_1;
    puVar4[8] = 0;
    *(undefined4 *)(puVar4 + 10) = 0;
    puVar4[2] = FUN_1407c3030;
  }
  local_28 = (longlong *)0x0;
  local_18 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    puVar3 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar3 = param_2 + 2;
    }
    if (puVar3 != (undefined8 *)0x0) {
      plVar2 = (longlong *)(**(code **)*puVar3)(puVar3,local_48);
      (**(code **)(*plVar2 + 8))(plVar2);
      local_58[0] = (code *)*param_2;
      goto LAB_14218f197;
    }
  }
  local_58[0] = FUN_1407c3030;
LAB_14218f197:
  FGenericPlatformMemory::MemswapGreaterThan8(local_58,puVar4 + 2,0x50);
  if (local_18 != 0) {
    plVar2 = local_48;
    if (local_28 != (longlong *)0x0) {
      plVar2 = local_28;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return puVar4;
}



// FUNCTION 14218f200 FUN_14218f200 body=1529 status=ok
// SIG undefined FUN_14218f200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14218f200(longlong param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint *puVar17;
  undefined1 local_res8;
  undefined7 uStackX_9;
  undefined1 local_res10 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  uint local_78;
  undefined4 uStack_74;
  longlong *local_70;
  uint uStack_68;
  uint uStack_64;
  uint *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar6 = *(longlong *)(param_1 + 8);
  uVar10 = 0;
  if (lVar6 != 0) {
    uVar12 = uVar10;
    uVar16 = uVar10;
    iVar9 = DAT_1464af6a8;
    if (0 < DAT_1464af6a8) {
      do {
        plVar15 = (longlong *)(DAT_1464af6a0 + uVar16);
        if ((((int)plVar15[1] != 0) && (plVar5 = (longlong *)*plVar15, plVar5 != (longlong *)0x0))
           && (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_res8),
              iVar9 = DAT_1464af6a8, *plVar5 == lVar6)) {
          if (((int)plVar15[1] != 0) && (plVar5 = (longlong *)*plVar15, plVar5 != (longlong *)0x0))
          {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            if (*plVar15 != 0) {
              lVar6 = FMemory::Realloc(*plVar15,0,0);
              *plVar15 = lVar6;
            }
            *(undefined4 *)(plVar15 + 1) = 0;
            iVar9 = DAT_1464af6a8;
          }
          break;
        }
        uVar14 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar14;
        uVar16 = uVar16 + 0x10;
      } while ((int)uVar14 < iVar9);
    }
    if (DAT_1464af6b4 < 1) {
      uVar12 = uVar10;
      uVar16 = uVar10;
      iVar4 = iVar9;
      if (0 < iVar9) {
        do {
          if (((*(int *)(uVar16 + 8 + DAT_1464af6a0) == 0) ||
              (*(longlong **)(uVar16 + DAT_1464af6a0) == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(**(longlong **)(uVar16 + DAT_1464af6a0) + 0x10))(), cVar2 != '\0'
             )) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af6a0,uVar12,1,1);
          }
          else {
            uVar12 = (ulonglong)((int)uVar12 + 1);
            uVar16 = uVar16 + 0x10;
          }
          iVar4 = DAT_1464af6a8;
        } while ((int)uVar12 < DAT_1464af6a8);
      }
      _DAT_1464af6b0 = iVar4 * 2;
      if (iVar4 * 2 < 3) {
        _DAT_1464af6b0 = 2;
      }
      if ((_DAT_1464af6b0 < iVar9) && (DAT_1464af6ac != iVar4)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af6a0);
      }
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  lVar6 = FCommandLine::Get();
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar15 = DAT_1468b1f88;
  local_98 = (longlong *)0x0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x20);
  uStack_90 = (undefined1 *)CONCAT44(uStack_90._4_4_,2);
  local_98 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_144fdd090;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[3] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_144fdd0d8;
  }
  (**(code **)(*plVar15 + 0xa8))(plVar15,&local_98,L"GbxTelemetry.");
  if ((uint)uStack_90 != 0) {
    if (local_98 == (longlong *)0x0) goto LAB_14218f418;
    (**(code **)(*local_98 + 0x28))(local_98,0);
    if (local_98 != (longlong *)0x0) {
      local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
    }
    uStack_90 = (undefined1 *)((ulonglong)uStack_90 & 0xffffffff00000000);
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
LAB_14218f418:
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x38))();
  puVar7 = (undefined8 *)FPaths::GeneratedConfigDir(&local_98);
  if (*(int *)(puVar7 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar7;
  }
  cVar2 = FConfigCacheIni::LoadGlobalIniFile(&DAT_146aeb1b8,L"GbxTelemetry",0,0,1,1,puVar11);
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1421954a0();
  plVar15 = (longlong *)FUN_14218de70();
  bVar1 = false;
  *(int *)((longlong)plVar15 + 0x14) = *(int *)((longlong)plVar15 + 0x14) + 1;
  iVar9 = *(int *)((longlong)plVar15 + 0x14);
  iVar4 = (int)plVar15[1] + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar13 = lVar6 << 4;
    bVar1 = false;
    do {
      if (((*(int *)(lVar13 + 8 + *plVar15) == 0) ||
          (plVar5 = *(longlong **)(lVar13 + *plVar15), plVar5 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar5 + 0x40))(), cVar3 == '\0')) {
        bVar1 = true;
      }
      lVar13 = lVar13 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    iVar9 = *(int *)((longlong)plVar15 + 0x14);
  }
  *(int *)((longlong)plVar15 + 0x14) = iVar9 + -1;
  if (bVar1) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar15,0);
  }
  if (cVar2 != '\0') {
    puVar11 = &DAT_143f3eda8;
    if (DAT_146aeb1c0 != 0) {
      puVar11 = DAT_146aeb1b8;
    }
    FUN_141643200(L"GbxTelemetry",puVar11,0x3000000,0);
    local_70 = (longlong *)FConfigCacheIni::FindConfigFile(DAT_1468b6148,&DAT_146aeb1b8);
    if (local_70 != (longlong *)0x0) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(short *)(PTR_u_Event__146526ae0 + lVar6 * 2) != 0);
      iVar9 = (int)local_70[5];
      puStack_60 = (uint *)(local_70 + 2);
      local_98._0_4_ = 0;
      local_98._4_4_ = 1;
      local_88._4_4_ = 0;
      uStack_80 = 0;
      if (iVar9 != 0) {
        puVar17 = (uint *)local_70[4];
        if ((uint *)local_70[4] == (uint *)0x0) {
          puVar17 = puStack_60;
        }
        uVar14 = *puVar17;
        uVar12 = uVar10;
        while (uVar14 == 0) {
          iVar4 = (int)uVar10;
          uStack_80 = (int)uVar12 + 0x20;
          uVar12 = (ulonglong)uStack_80;
          local_98._0_4_ = iVar4 + 1;
          uVar10 = (ulonglong)(uint)local_98;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14218f60f;
          uVar14 = puVar17[(longlong)iVar4 + 1];
        }
        local_98._4_4_ = -uVar14 & uVar14;
        iVar4 = 0x1f;
        if (local_98._4_4_ != 0) {
          for (; local_98._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (local_98._4_4_ == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        local_88._4_4_ = (uStack_80 - iVar4) + 0x1f;
        if (iVar9 < local_88._4_4_) {
LAB_14218f60f:
          local_88._4_4_ = iVar9;
        }
      }
      uStack_58 = CONCAT44(local_88._4_4_,0xffffffff);
      uStack_50 = CONCAT44(iStack_7c,uStack_80);
      uStack_68 = (uint)local_98;
      uStack_64 = local_98._4_4_;
      uStack_90._0_4_ = (uint)local_98;
      uStack_90._4_4_ = local_98._4_4_;
      local_78 = uStack_80;
      uStack_74 = iStack_7c;
      uStack_80 = 0xffffffff;
      iStack_7c = local_88._4_4_;
      bVar1 = local_88._4_4_ < iVar9;
      local_98 = local_70;
      local_88 = puStack_60;
      if (bVar1) {
        do {
          puVar7 = (undefined8 *)((longlong)iStack_7c * 0xb8 + *local_98);
          iVar9 = *(int *)(puVar7 + 1) + -1;
          if (*(int *)(puVar7 + 1) == 0) {
            iVar9 = 0;
          }
          if ((int)lVar6 < iVar9) {
            cVar2 = FString::StartsWith(puVar7,PTR_u_Event__146526ae0,1);
            if (cVar2 != '\0') {
              local_70 = (longlong *)0x0;
              uStack_68 = 0;
              uStack_64 = 0;
              puStack_60 = (uint *)0x0;
              uStack_58 = 0;
              uStack_50 = 0;
              local_48 = 0;
              if (*(int *)(puVar7 + 1) == 0) {
                puVar11 = &DAT_143f3eda8;
              }
              else {
                puVar11 = (undefined2 *)*puVar7;
              }
              puVar8 = (undefined8 *)FName::FName(local_res10,puVar11 + (int)lVar6,1);
              FUN_14218c0c0(&local_res8,*puVar8,&local_70,0);
              if (uStack_50 != 0) {
                FMemory::Free();
              }
              if (puStack_60 != (uint *)0x0) {
                FMemory::Free();
              }
              if (local_70 != (longlong *)0x0) {
                FMemory::Free();
              }
              plVar15 = (longlong *)FMemory::Realloc(0,0x20);
              if (plVar15 != (longlong *)0x0) {
                *plVar15 = (longlong)&PTR_GetPoolName_144fdca00;
                plVar15[1] = (longlong)puVar7;
                lVar13 = FDelegateHandle::GenerateNewID();
                plVar15[3] = lVar13;
              }
              lVar13 = CONCAT71(uStackX_9,local_res8);
              cVar2 = FUN_142190080(lVar13);
              if ((cVar2 != '\0') && (*(byte *)(lVar13 + 0x40) < 2)) {
                cVar2 = (**(code **)(*plVar15 + 0x38))(plVar15,lVar13);
                if (cVar2 != '\0') {
                  *(undefined1 *)(lVar13 + 0x40) = 2;
                }
              }
              if (plVar15 != (longlong *)0x0) {
                (**(code **)(*plVar15 + 0x28))(plVar15,0);
                lVar13 = FMemory::Realloc(plVar15,0,0);
                if (lVar13 != 0) {
                  FMemory::Free(lVar13);
                }
              }
            }
          }
          uStack_80 = uStack_80 & ~uStack_90._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
        } while (iStack_7c < (int)local_88[6]);
      }
      uStack_90 = &local_res8;
      local_res8 = 0;
      local_98 = (longlong *)&LAB_142183ea0;
      FUN_14218b640(&local_98);
    }
  }
  return;
}



// FUNCTION 14218f800 FUN_14218f800 body=125 status=ok
// SIG undefined FUN_14218f800(void)

void FUN_14218f800(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed328) {
    _Init_thread_header(&DAT_146aed328);
    if (DAT_146aed328 == -1) {
      DAT_146aed320 = FUN_14218e600();
      _Init_thread_footer(&DAT_146aed328);
    }
  }
  if (local_res8 != param_1) {
    *param_1 = *(undefined8 *)(DAT_146aed320 + 0x70);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



// FUNCTION 14218f880 FUN_14218f880 body=95 status=ok
// SIG undefined FUN_14218f880(void)

void FUN_14218f880(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14218cc20();
  if (puVar2 != param_1) {
    if (*(char *)(param_1 + 0xd) != '\0') {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    uVar1 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar1;
    uVar1 = puVar2[3];
    param_1[2] = puVar2[2];
    param_1[3] = uVar1;
    uVar1 = puVar2[5];
    param_1[4] = puVar2[4];
    param_1[5] = uVar1;
    uVar1 = puVar2[7];
    param_1[6] = puVar2[6];
    param_1[7] = uVar1;
    uVar1 = puVar2[9];
    param_1[8] = puVar2[8];
    param_1[9] = uVar1;
    uVar1 = puVar2[0xb];
    param_1[10] = puVar2[10];
    param_1[0xb] = uVar1;
    param_1[0xc] = puVar2[0xc];
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}



// FUNCTION 14218f8e0 FUN_14218f8e0 body=95 status=ok
// SIG undefined FUN_14218f8e0(void)

void FUN_14218f8e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14218ce40();
  if (puVar2 != param_1) {
    if (*(char *)(param_1 + 0xd) != '\0') {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    uVar1 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar1;
    uVar1 = puVar2[3];
    param_1[2] = puVar2[2];
    param_1[3] = uVar1;
    uVar1 = puVar2[5];
    param_1[4] = puVar2[4];
    param_1[5] = uVar1;
    uVar1 = puVar2[7];
    param_1[6] = puVar2[6];
    param_1[7] = uVar1;
    uVar1 = puVar2[9];
    param_1[8] = puVar2[8];
    param_1[9] = uVar1;
    uVar1 = puVar2[0xb];
    param_1[10] = puVar2[10];
    param_1[0xb] = uVar1;
    param_1[0xc] = puVar2[0xc];
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}



// FUNCTION 14218f940 FUN_14218f940 body=292 status=ok
// SIG undefined FUN_14218f940(void)

undefined8 * FUN_14218f940(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 local_res10 [8];
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar6 = 0;
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar2 = &PTR_FUN_14401e4b8;
  puVar2[1] = 0;
  if ((DAT_1468b6148 != 0) && (*(char *)(DAT_1468b6148 + 0x59) != '\0')) {
    FUN_14218f200(puVar2);
    return puVar2;
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = (longlong)puVar2;
    *plVar3 = (longlong)&PTR_GetPoolName_144fdc970;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144fdc9b8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af6a0,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = DAT_1464af6a8;
    lVar4 = (longlong)DAT_1464af6a8;
    uVar6 = *puVar5;
    DAT_1464af6a8 = DAT_1464af6a8 + 1;
    if (DAT_1464af6ac < DAT_1464af6a8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af6a0,iVar1);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + DAT_1464af6a0);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  puVar2[1] = uVar6;
  return puVar2;
}



// FUNCTION 14218fa70 FUN_14218fa70 body=529 status=ok
// SIG undefined FUN_14218fa70(void)

void FUN_14218fa70(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_48 [4];
  
  lVar4 = DAT_146aeb040;
  lVar7 = 0;
  if (param_1 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(DAT_146aeb040 + 8) + 0x10);
    if (lVar3 == 0) {
      lVar3 = FUN_14218d510();
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10);
    }
    if (lVar3 != param_1) goto LAB_14218fad1;
  }
  if (*(char *)(lVar4 + 0x11) != '\0') {
    *(undefined1 *)(lVar4 + 0x11) = 0;
  }
LAB_14218fad1:
  lVar4 = FUN_14218c420();
  AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x48));
  plVar8 = *(longlong **)(lVar4 + 0x30);
  iVar6 = *(int *)(lVar4 + 0x40) + -1;
  if (*(int *)(lVar4 + 0x40) == 0) {
    iVar6 = 0;
  }
  plVar1 = plVar8 + iVar6 / 5;
  lVar3 = lVar7;
  if (plVar8 != (longlong *)0x0) {
    lVar3 = *plVar8;
  }
  FUN_142196010(lVar4 + 0x30,local_48);
  lVar2 = local_48[0];
  while (lVar3 != lVar2) {
    if (param_1 == 0) {
LAB_14218fb69:
      if (*(char *)(lVar3 + 0x79) != '\0') {
        *(undefined1 *)(lVar3 + 0x79) = 0;
      }
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x70) + 0x10);
      if (lVar5 == 0) {
        lVar5 = FUN_14218d510();
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10);
      }
      if (lVar5 == param_1) goto LAB_14218fb69;
    }
    lVar3 = lVar3 + 0xc0;
    if ((plVar8 != plVar1) && (lVar3 == *plVar8 + 0x3c0)) {
      lVar3 = plVar8[1];
      plVar8 = plVar8 + 1;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x48));
  lVar4 = FUN_14218c420();
  plVar8 = *(longlong **)(lVar4 + 0x70);
  iVar6 = *(int *)(lVar4 + 0x80) + -1;
  if (*(int *)(lVar4 + 0x80) == 0) {
    iVar6 = 0;
  }
  plVar1 = plVar8 + ((int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    + iVar6 / 3 + (iVar6 >> 0x1f));
  if (plVar8 != (longlong *)0x0) {
    lVar7 = *plVar8;
  }
  FUN_1421960e0(lVar4 + 0x70,local_48);
  do {
    if (lVar7 == local_48[0]) {
      return;
    }
    if (param_1 == 0) {
LAB_14218fc2c:
      if (*(char *)(lVar7 + 0x89) != '\0') {
        *(undefined1 *)(lVar7 + 0x89) = 0;
      }
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0x80) + 0x10);
      if (lVar4 == 0) {
        lVar4 = FUN_14218d510();
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10);
      }
      if (lVar4 == param_1) goto LAB_14218fc2c;
    }
    lVar7 = lVar7 + 0x120;
    if ((plVar8 != plVar1) && (lVar7 == *plVar8 + 0x360)) {
      lVar7 = plVar8[1];
      plVar8 = plVar8 + 1;
    }
  } while( true );
}



// FUNCTION 14218fc90 FUN_14218fc90 body=9 status=ok
// SIG undefined FUN_14218fc90(void)

bool FUN_14218fc90(longlong param_1)

{
  return *(short *)(param_1 + 0x18) < 1;
}



// FUNCTION 14218fca0 FUN_14218fca0 body=101 status=ok
// SIG undefined FUN_14218fca0(void)

ulonglong FUN_14218fca0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  int iVar3;
  
  if (DAT_146aeae14 != '\0') {
    lVar2 = *param_1;
    in_RAX = FUN_142190080(lVar2);
    if ((char)in_RAX != '\0') {
      in_RAX = 0;
      if (*(longlong *)(lVar2 + 0x28) == 0xd3) {
LAB_14218fcf5:
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      uVar1 = *(uint *)(lVar2 + 0x88);
      in_RAX = (ulonglong)uVar1;
      if ((uVar1 != 0) && (in_RAX = (ulonglong)(uVar1 - 1), uVar1 - 1 != 0)) {
        uVar1 = *(uint *)(lVar2 + 0x98);
        in_RAX = (ulonglong)uVar1;
        iVar3 = uVar1 - 1;
        if (uVar1 == 0) {
          iVar3 = 0;
        }
        if (iVar3 != 0) goto LAB_14218fcf5;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14218fd10 FUN_14218fd10 body=67 status=ok
// SIG undefined FUN_14218fd10(void)

undefined8 FUN_14218fd10(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if ((((*(byte *)(param_1 + 0x58) & 4) != 0) && ((*(byte *)(param_1 + 0x58) & 2) != 0)) &&
     (DAT_146aeae14 != '\0')) {
    if (*(longlong *)*param_2 != 0) {
      cVar1 = FUN_1407ce010((longlong *)*param_2 + 1);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14218fd60 FUN_14218fd60 body=27 status=ok
// SIG undefined FUN_14218fd60(void)

undefined8 FUN_14218fd60(longlong param_1)

{
  if ((((*(byte *)(param_1 + 0x58) & 4) != 0) && ((*(byte *)(param_1 + 0x58) & 2) != 0)) &&
     (DAT_146aeae14 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 14218fd80 FUN_14218fd80 body=9 status=ok
// SIG undefined FUN_14218fd80(void)

byte FUN_14218fd80(longlong param_1)

{
  return *(byte *)(param_1 + 0x1a) >> 1 & 1;
}



// FUNCTION 14218fd90 FUN_14218fd90 body=124 status=ok
// SIG undefined FUN_14218fd90(void)

bool FUN_14218fd90(longlong param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeb950) {
    _Init_thread_header(&DAT_146aeb950);
    if (DAT_146aeb950 == -1) {
      FName::FName(&DAT_146aeb948,&DAT_144fdb9f8,1);
      _Init_thread_footer(&DAT_146aeb950);
    }
  }
  return *(longlong *)(param_1 + 0x28) == DAT_146aeb948;
}



// FUNCTION 14218fe10 FUN_14218fe10 body=171 status=ok
// SIG undefined FUN_14218fe10(void)

undefined8 FUN_14218fe10(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  longlong local_28 [2];
  longlong local_18 [2];
  
  lVar1 = *param_2;
  bVar3 = false;
  bVar2 = false;
  if (lVar1 != 0) {
    puVar5 = (undefined8 *)FName::ToString(param_1 + 0x28,local_18);
    puVar6 = (undefined8 *)FJsonObject::GetStringField(lVar1,local_28,&DAT_146526ae8);
    puVar7 = &DAT_143f3eda8;
    if (*(int *)(puVar5 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar5;
    }
    if (*(int *)(puVar6 + 1) != 0) {
      puVar7 = (undefined2 *)*puVar6;
    }
    bVar3 = true;
    bVar2 = true;
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
    if (iVar4 == 0) {
      uVar9 = 1;
      goto LAB_14218fe81;
    }
  }
  uVar9 = 0;
LAB_14218fe81:
  if (bVar2) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return uVar9;
}



// FUNCTION 14218fec0 FUN_14218fec0 body=151 status=ok
// SIG undefined FUN_14218fec0(void)

undefined8 FUN_14218fec0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong local_18 [2];
  
  bVar7 = false;
  cVar1 = FUN_14218fe10(*(undefined8 *)(param_1 + 0x30));
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)FJsonObject::GetStringField(*param_2,local_18,&DAT_146526b68);
    puVar4 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0x40) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(param_1 + 0x38);
    }
    if (*(int *)(puVar3 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar3;
    }
    bVar7 = true;
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if (iVar2 == 0) {
      uVar6 = 1;
      goto LAB_14218ff2f;
    }
  }
  uVar6 = 0;
LAB_14218ff2f:
  if ((bVar7) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 14218ff60 FUN_14218ff60 body=8 status=ok
// SIG undefined FUN_14218ff60(void)

bool FUN_14218ff60(longlong param_1)

{
  return (*(byte *)(param_1 + 0x1a) & 6) != 0;
}



// FUNCTION 14218ff70 FUN_14218ff70 body=8 status=ok
// SIG undefined FUN_14218ff70(void)

undefined1 FUN_14218ff70(void)

{
  return DAT_146aeae14;
}



// FUNCTION 14218ff80 FUN_14218ff80 body=89 status=ok
// SIG undefined FUN_14218ff80(void)

ulonglong FUN_14218ff80(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_142190080();
  if ((char)uVar2 != '\0') {
    uVar2 = 0;
    if (*(longlong *)(param_1 + 0x28) == 0xd3) {
LAB_14218ffc9:
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
    uVar1 = *(uint *)(param_1 + 0x88);
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 != 0) && (uVar2 = (ulonglong)(uVar1 - 1), uVar1 - 1 != 0)) {
      uVar1 = *(uint *)(param_1 + 0x98);
      uVar2 = (ulonglong)uVar1;
      iVar3 = uVar1 - 1;
      if (uVar1 == 0) {
        iVar3 = 0;
      }
      if (iVar3 != 0) goto LAB_14218ffc9;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14218ffe0 FUN_14218ffe0 body=129 status=ok
// SIG undefined FUN_14218ffe0(void)

ulonglong FUN_14218ffe0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x20);
  }
  lVar2 = *plVar3;
  uVar4 = FUN_142190080(lVar2);
  if ((char)uVar4 != '\0') {
    uVar4 = 0;
    if (*(longlong *)(lVar2 + 0x28) == 0xd3) {
LAB_142190047:
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
    uVar1 = *(uint *)(lVar2 + 0x88);
    uVar4 = (ulonglong)uVar1;
    if ((uVar1 != 0) && (uVar4 = (ulonglong)(uVar1 - 1), uVar1 - 1 != 0)) {
      uVar1 = *(uint *)(lVar2 + 0x98);
      uVar4 = (ulonglong)uVar1;
      iVar5 = uVar1 - 1;
      if (uVar1 == 0) {
        iVar5 = 0;
      }
      if (iVar5 != 0) goto LAB_142190047;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142190070 FUN_142190070 body=9 status=ok
// SIG undefined FUN_142190070(void)

bool FUN_142190070(longlong param_1)

{
  return 0 < *(short *)(param_1 + 0x18);
}



// FUNCTION 142190080 FUN_142190080 body=144 status=ok
// SIG undefined FUN_142190080(void)

longlong FUN_142190080(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeb940) {
    _Init_thread_header();
    if (DAT_146aeb940 == -1) {
      FName::FName(&DAT_146aeb938,L"Debug",1);
      _Init_thread_footer();
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if (lVar1 == DAT_146aeb938) {
    return (ulonglong)uVar2 << 8;
  }
  return CONCAT71(uVar2,lVar1 != 0);
}



// FUNCTION 142190110 FUN_142190110 body=599 status=ok
// SIG undefined FUN_142190110(void)

void FUN_142190110(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 local_res10;
  longlong local_38;
  undefined8 local_30;
  
  if (*param_2 != 0) {
    local_38 = 0;
    local_30 = 0;
    cVar7 = FUN_1416b40a0(*param_2,&DAT_146526b38,&local_38);
    lVar6 = local_38;
    if (((cVar7 != '\0') && ((int)local_30 != 0)) && ((int)local_30 != 1)) {
      iVar5 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
      }
      puVar4 = (undefined8 *)(*param_1 + (longlong)iVar5 * 0x48);
      puVar8 = (undefined8 *)FName::FName(&local_res10,lVar6,1);
      plVar1 = puVar4 + 1;
      plVar2 = puVar4 + 4;
      plVar3 = puVar4 + 6;
      *puVar4 = *puVar8;
      *plVar1 = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *plVar2 = 0;
      puVar4[5] = 0;
      *plVar3 = 0;
      puVar4[7] = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
      cVar7 = FUN_1416b40a0(*param_2,&DAT_146526b48,&local_38);
      if (((cVar7 != '\0') && ((int)local_30 != 0)) &&
         (((int)local_30 != 1 && (plVar1 != &local_38)))) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        *plVar1 = local_38;
        local_38 = 0;
        *(int *)(puVar4 + 2) = (int)local_30;
        *(undefined4 *)((longlong)puVar4 + 0x14) = local_30._4_4_;
        local_30 = 0;
      }
      cVar7 = FUN_1416b40a0(*param_2,&DAT_146526ae8,&local_38);
      if (((cVar7 != '\0') && ((int)local_30 != 0)) && ((int)local_30 != 1)) {
        FName::FName(&local_res10,local_38,1);
        puVar4[3] = local_res10;
      }
      cVar7 = FUN_1416b40a0(*param_2,&DAT_146526b68,&local_38);
      if ((((cVar7 != '\0') && ((int)local_30 != 0)) && ((int)local_30 != 1)) &&
         (plVar2 != &local_38)) {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        *plVar2 = local_38;
        local_38 = 0;
        *(int *)(puVar4 + 5) = (int)local_30;
        *(undefined4 *)((longlong)puVar4 + 0x2c) = local_30._4_4_;
        local_30 = 0;
      }
      cVar7 = FUN_1416b40a0(*param_2,&DAT_146526b78,&local_38);
      if (((cVar7 != '\0') && ((int)local_30 != 0)) && ((int)local_30 != 1)) {
        if (plVar3 != &local_38) {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          *plVar3 = local_38;
          local_38 = 0;
          *(int *)(puVar4 + 7) = (int)local_30;
          *(undefined4 *)((longlong)puVar4 + 0x3c) = local_30._4_4_;
          local_30 = 0;
        }
        FUN_1416b3b00(*param_2,&DAT_146526b88,puVar4 + 8);
      }
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142190370 FUN_142190370 body=203 status=ok
// SIG undefined FUN_142190370(void)

void FUN_142190370(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  
  iVar5 = (int)param_1[1];
  lVar1 = param_2[1];
  if (iVar5 != 0) {
    plVar3 = (longlong *)(*param_1 + 0x20);
    do {
      if (plVar3[2] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      if (plVar3[-3] != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 9;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != (int)lVar1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,(int)lVar1);
  }
  puVar4 = (undefined8 *)*param_2;
  puVar6 = puVar4 + (longlong)(int)param_2[1] * 2;
  for (; puVar4 != puVar6; puVar4 = puVar4 + 2) {
    cVar2 = (**(code **)(*(longlong *)*puVar4 + 0x28))((longlong *)*puVar4,&local_res8);
    if (cVar2 != '\0') {
      FUN_142190110(param_1,local_res8);
    }
  }
  return;
}



// FUNCTION 142190440 FUN_142190440 body=284 status=ok
// SIG undefined FUN_142190440(void)

void FUN_142190440(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *local_18;
  int local_10;
  
  lVar2 = FCommandLine::Get();
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = DAT_1468b1f88;
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = lVar2;
    *plVar3 = (longlong)&PTR_GetPoolName_144fdd090;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar2;
    *plVar3 = (longlong)&PTR_GetPoolName_144fdd0d8;
  }
  (**(code **)(*plVar1 + 0xa8))(plVar1,&local_18,param_1);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_142190529;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_142190529:
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000142190558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x38))();
  return;
}



// FUNCTION 142190560 FUN_142190560 body=837 status=ok
// SIG undefined FUN_142190560(void)

void FUN_142190560(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint *puVar13;
  short *psVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 local_res20;
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
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  
  plVar5 = (longlong *)FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,param_2,0,1,param_3);
  if (plVar5 != (longlong *)0x0) {
    iVar15 = (int)plVar5[5];
    puStack_58 = (uint *)(plVar5 + 2);
    plVar17 = (longlong *)0x0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a4 = 1;
    local_98._4_4_ = 0;
    if (iVar15 != 0) {
      puVar13 = (uint *)plVar5[4];
      if ((uint *)plVar5[4] == (uint *)0x0) {
        puVar13 = puStack_58;
      }
      uVar1 = *puVar13;
      plVar10 = plVar17;
      plVar12 = plVar17;
      while (uVar1 == 0) {
        iVar4 = (int)plVar12;
        uStack_90 = (int)plVar10 + 0x20;
        plVar10 = (longlong *)(ulonglong)uStack_90;
        local_a8 = iVar4 + 1;
        plVar12 = (longlong *)(ulonglong)local_a8;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14219064d;
        uVar1 = puVar13[(longlong)iVar4 + 1];
      }
      uStack_a4 = -uVar1 & uVar1;
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
      if (iVar15 < local_98._4_4_) {
LAB_14219064d:
        local_98._4_4_ = iVar15;
      }
    }
    auStack_50._4_4_ = local_98._4_4_;
    auStack_50._0_4_ = 0xffffffff;
    auStack_50._8_4_ = uStack_90;
    auStack_50._12_4_ = iStack_8c;
    uStack_60 = local_a8;
    uStack_5c = uStack_a4;
    local_70 = 0;
    local_40._0_4_ = SUB84(plVar5,0);
    local_40._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
    uStack_90 = 0xffffffff;
    iStack_8c = local_98._4_4_;
    uStack_a0 = local_a8;
    uStack_9c = uStack_a4;
    local_88._8_4_ = (undefined4)local_40;
    local_88._0_8_ = auStack_50._8_8_;
    local_88._12_4_ = local_40._4_4_;
    bVar3 = local_98._4_4_ < (int)plVar5[5];
    local_78 = plVar5;
    local_68 = plVar5;
    local_40 = plVar5;
    local_98 = puStack_58;
    if (bVar3) {
      do {
        lVar6 = (longlong)iStack_8c;
        lVar9 = *plVar5;
        lVar2 = *(longlong *)(lVar9 + lVar6 * 0x30);
        puVar8 = (undefined8 *)(lVar9 + lVar6 * 0x30);
        if (((lVar2 == DAT_146aeb088) || (lVar2 == DAT_146aeb080)) || (lVar2 == DAT_146aeb090)) {
          lVar16 = 0x18;
          iVar15 = *(int *)(puVar8 + 4) + -1;
          if (*(int *)(puVar8 + 4) == 0) {
            iVar15 = 0;
          }
          if (iVar15 < 1) {
            lVar16 = 8;
          }
          iVar15 = *(int *)(lVar16 + 8 + (longlong)puVar8);
          iVar4 = iVar15 + -1;
          if (iVar15 == 0) {
            iVar4 = 0;
          }
          if (iVar4 != 0) {
            if (iVar15 == 0) {
              psVar14 = &DAT_143f3eda8;
            }
            else {
              psVar14 = *(short **)(lVar16 + (longlong)puVar8);
              if (*psVar14 == 0x2d) {
                if (psVar14[1] == 0x2a) {
                  if (((lVar2 == DAT_146aeb088) || (lVar2 == DAT_146aeb080)) ||
                     (plVar10 = plVar17, lVar2 == DAT_146aeb090)) {
                    plVar11 = (longlong *)*param_1;
                    plVar12 = plVar11 + (longlong)(int)param_1[1] * 3;
                    for (; (plVar10 = plVar17, plVar11 != plVar12 &&
                           (plVar10 = plVar11, *plVar11 != lVar2)); plVar11 = plVar11 + 3) {
                    }
                  }
                  if (plVar10 != (longlong *)0x0) {
                    *(undefined4 *)(plVar10 + 2) = 0;
                    if (*(int *)((longlong)plVar10 + 0x14) != 0) {
                      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar10 + 1,0);
                    }
                  }
                }
                else {
                  puVar7 = (undefined8 *)FName::FName(local_38,psVar14 + 1,1);
                  FUN_1421849d0(param_1,*puVar8,*puVar7);
                }
                goto LAB_14219083b;
              }
            }
            puVar8 = (undefined8 *)FName::FName(local_30,psVar14,1);
            lVar9 = *(longlong *)(lVar9 + lVar6 * 0x30);
            local_res20 = *puVar8;
            if (((lVar9 == DAT_146aeb088) || (lVar9 == DAT_146aeb080)) || (lVar9 == DAT_146aeb090))
            {
              lVar9 = FUN_14218d390(param_1);
              TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
              AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar9 + 8,&local_res20);
            }
          }
        }
LAB_14219083b:
        uStack_90 = uStack_90 & ~uStack_9c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      } while (iStack_8c < (int)local_98[6]);
      if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
        TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 1421908b0 FUN_1421908b0 body=444 status=ok
// SIG undefined FUN_1421908b0(void)

void FUN_1421908b0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char local_res10 [8];
  longlong local_res18;
  longlong *local_res20;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  puVar5 = (undefined8 *)*param_2;
  puVar6 = puVar5 + (longlong)(int)param_2[1] * 2;
  for (; puVar5 != puVar6; puVar5 = puVar5 + 2) {
    cVar2 = (**(code **)(*(longlong *)*puVar5 + 0x28))((longlong *)*puVar5,&local_res20);
    plVar1 = local_res20;
    if ((cVar2 != '\0') && (*local_res20 != 0)) {
      local_38 = (undefined2 *)0x0;
      local_30 = 0;
      local_48 = (undefined2 *)0x0;
      local_40 = 0;
      cVar2 = FUN_1416b40a0(*local_res20,&DAT_146526ed0,&local_38);
      if ((cVar2 != '\0') &&
         (((((int)local_30 != 0 && ((int)local_30 != 1)) &&
           (cVar2 = FUN_1416b40a0(*plVar1,&DAT_146526ee0,&local_48), cVar2 != '\0')) &&
          (((int)local_40 != 0 && ((int)local_40 != 1)))))) {
        puVar4 = &DAT_143f3eda8;
        if ((int)local_30 != 0) {
          puVar4 = local_38;
        }
        FName::FName(&local_res18,puVar4,1);
        if ((((local_res18 == DAT_146aeb088) || (local_res18 == DAT_146aeb080)) ||
            (local_res18 == DAT_146aeb090)) &&
           (cVar2 = FUN_1416b3900(*plVar1,&DAT_146526ef0,local_res10), cVar2 != '\0')) {
          if (local_res10[0] == '\0') {
            puVar4 = &DAT_143f3eda8;
            if ((int)local_40 != 0) {
              puVar4 = local_48;
            }
            puVar3 = (undefined8 *)FName::FName(local_50,puVar4,1);
            FUN_1421849d0(param_1,local_res18,*puVar3);
          }
          else {
            puVar4 = &DAT_143f3eda8;
            if ((int)local_40 != 0) {
              puVar4 = local_48;
            }
            puVar3 = (undefined8 *)FName::FName(local_58,puVar4,1);
            FUN_142194300(param_1,local_res18,*puVar3);
          }
        }
      }
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142190a70 FUN_142190a70 body=406 status=ok
// SIG undefined FUN_142190a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142190a70(undefined8 param_1,undefined8 param_2,char param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined8 local_res10;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_e8 [4];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  ulonglong local_38;
  longlong lVar4;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_res10 = param_2;
  pbVar2 = (byte *)FName::GetComparisonNameEntry(&local_res10);
  lVar5 = -1;
  pbVar1 = pbVar2 + 0x10;
  if ((*pbVar2 & 1) == 0) {
    do {
      lVar5 = lVar5 + 1;
    } while (pbVar1[lVar5] != 0);
    FMD5::Update(param_1,pbVar1,lVar5);
  }
  else {
    puVar7 = (undefined1 *)0x0;
    local_58 = (undefined1 *)0x0;
    if (pbVar1 == (byte *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
    }
    else {
      lVar3 = -1;
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (*(short *)(pbVar1 + lVar3 * 2) != 0);
      uVar6 = (int)lVar4 + 2;
      local_48 = (undefined4)lVar3;
      if ((0x80 < uVar6) && (uVar6 != 0)) {
        local_58 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)uVar6,0);
      }
      local_f8 = 0x3f;
      local_50 = local_d8;
      if (local_58 != (undefined1 *)0x0) {
        local_50 = local_58;
      }
      FGenericPlatformString::Convert<wchar_t,char>(local_50,uVar6,pbVar1,uVar6);
      puVar7 = local_50;
    }
    do {
      lVar5 = lVar5 + 1;
    } while (puVar7[lVar5] != '\0');
    FMD5::Update(param_1,puVar7,lVar5);
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  if (param_3 != '\0') {
    local_e8[0] = local_res10._4_4_;
    FMD5::Update(param_1,local_e8,4);
  }
  return;
}



// FUNCTION 142190c10 FUN_142190c10 body=86 status=ok
// SIG undefined FUN_142190c10(void)

undefined8 FUN_142190c10(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 local_18 [16];
  
  if (*(int *)(param_2 + 0x38) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_2 + 0x30);
  }
  uVar1 = FGuid::NewGuid(local_18);
  FUN_142190cc0(param_1,param_2,puVar2,uVar1);
  return param_1;
}



// FUNCTION 142190c70 FUN_142190c70 body=70 status=ok
// SIG undefined FUN_142190c70(void)

undefined8 FUN_142190c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  uVar1 = FGuid::NewGuid(local_18);
  FUN_142190cc0(param_1,param_2,param_3,uVar1);
  return param_1;
}



// FUNCTION 142190cc0 FUN_142190cc0 body=159 status=ok
// SIG undefined FUN_142190cc0(void)

undefined8 *
FUN_142190cc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = operator_new(0xf0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14217e300(lVar1,param_2,param_3,param_4);
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_144fdd270;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = uVar2;
  }
  *param_1 = uVar2;
  param_1[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_1,uVar2,uVar2);
  return param_1;
}



// FUNCTION 142190d60 FUN_142190d60 body=106 status=ok
// SIG undefined FUN_142190d60(void)

undefined8
FUN_142190d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_142191000(param_3,param_1,param_4);
  plVar3 = (longlong *)FUN_14218dae0(param_1,param_2);
  iVar1 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
  }
  *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = uVar2;
  return uVar2;
}



// FUNCTION 142190dd0 FUN_142190dd0 body=548 status=ok
// SIG undefined FUN_142190dd0(void)

undefined8 * FUN_142190dd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  void *local_50;
  ulonglong local_48;
  
  lVar3 = FUN_14218c420();
  plVar1 = (longlong *)(lVar3 + 0x30);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x48));
  iVar5 = *(int *)(lVar3 + 0x40);
  if (iVar5 == (iVar5 / 5) * 5) {
    uVar4 = FMemory::Malloc(0x3c0,0);
    iVar2 = *(int *)(lVar3 + 0x38);
    *(int *)(lVar3 + 0x38) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x3c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar4;
    lVar7 = *(longlong *)(*plVar1 + (longlong)iVar2 * 8);
    if (lVar7 != 0) {
      lVar6 = 5;
      do {
        FUN_14217c030(lVar7);
        lVar7 = lVar7 + 0xc0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + 1;
  puVar8 = (undefined8 *)
           ((ulonglong)(uint)(iVar5 % 5) * 0xc0 + *(longlong *)(*plVar1 + (longlong)(iVar5 / 5) * 8)
           );
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    local_res18 = param_1;
    FName::ToString(&local_res18,&local_50);
    _Src = local_50;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR__scalar_deleting_destructor__144fdcad0;
    puVar8[5] = param_1;
    puVar8[6] = 0;
    iVar5 = (int)local_48;
    *(int *)(puVar8 + 7) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8 + 6,local_48 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)puVar8[6],_Src,(longlong)iVar5 * 2);
    }
    *(undefined1 *)(puVar8 + 8) = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    uVar4 = FUN_14217e4b0(local_res20,L"sample_rate");
    uVar4 = FUN_142186fe0(uVar4,puVar8);
    puVar8[0xd] = uVar4;
    uVar4 = FUN_14217e4b0(local_58,L"sample_rate_latch");
    uVar4 = FUN_1421871d0(uVar4,puVar8);
    puVar8[0xe] = uVar4;
    *(undefined1 *)((longlong)puVar8 + 0x79) = 0;
    FString::FString(puVar8 + 0x10,param_2);
    FString::FString(puVar8 + 0x12,param_2 + 0x10);
    FString::FString(puVar8 + 0x14,param_2 + 0x20);
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    if (local_50 != (void *)0x0) {
      FMemory::Free();
    }
    *puVar8 = &PTR__scalar_deleting_destructor__144fdcad0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x48));
  return puVar8;
}



// FUNCTION 142191000 FUN_142191000 body=667 status=ok
// SIG undefined FUN_142191000(void)

ulonglong * FUN_142191000(ulonglong param_1,ulonglong param_2,short *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  PSRWLOCK *ppRVar9;
  longlong lVar10;
  PSRWLOCK SRWLock;
  longlong lVar11;
  ulonglong *puVar12;
  uint uVar13;
  ulonglong local_res20;
  PSRWLOCK local_58;
  ulonglong local_50;
  longlong local_48 [2];
  
  local_res20 = local_res20 & 0xffffffff00000000;
  lVar7 = FUN_14218c420();
  SRWLock = (PSRWLOCK)(lVar7 + 0x68);
  plVar1 = (longlong *)(lVar7 + 0x50);
  local_58 = SRWLock;
  AcquireSRWLockExclusive(SRWLock);
  local_res20 = CONCAT44(local_res20._4_4_,*(uint *)(lVar7 + 0x60));
  plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar13 = *(uint *)(lVar7 + 0x60) & 0x8000001f;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
  }
  if (uVar13 == 0) {
    uVar8 = FMemory::Malloc(0x400,0);
    iVar3 = *(int *)(lVar7 + 0x58);
    *(int *)(lVar7 + 0x58) = iVar3 + 1;
    if (*(int *)(lVar7 + 0x5c) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    *(undefined8 *)((longlong)iVar3 * 8 + *plVar1) = uVar8;
    lVar11 = *(longlong *)((longlong)iVar3 * 8 + *plVar1);
    SRWLock = local_58;
    if (lVar11 != 0) {
      lVar4 = *plVar2;
      lVar10 = 0x20;
      lVar11 = lVar11 + 0x1c;
      do {
        *(undefined8 *)(lVar11 + -0x1c) = 0;
        lVar10 = lVar10 + -1;
        if ((*(int *)(lVar4 + 0x38) < DAT_146aeb930) &&
           (_Init_thread_header(&DAT_146aeb930), DAT_146aeb930 == -1)) {
          FUN_14217c030(&DAT_146aeb870);
          atexit((_func_5014 *)&LAB_143ea70e0);
          _Init_thread_footer(&DAT_146aeb930);
        }
        *(undefined **)(lVar11 + -0x14) = &DAT_146aeb870;
        *(undefined8 *)(lVar11 + -0xc) = 0;
        *(undefined8 *)(lVar11 + -4) = 0;
        lVar11 = lVar11 + 0x20;
        SRWLock = local_58;
      } while (lVar10 != 0);
    }
  }
  *(int *)(lVar7 + 0x60) = *(int *)(lVar7 + 0x60) + 1;
  puVar12 = (ulonglong *)
            ((ulonglong)uVar13 * 0x20 +
            *(longlong *)
             (*plVar1 +
             (longlong)((int)((int)local_res20 + ((int)local_res20 >> 0x1f & 0x1fU)) >> 5) * 8));
  if (puVar12 == (ulonglong *)0x0) {
    puVar12 = (ulonglong *)0x0;
  }
  else {
    *puVar12 = param_1;
    puVar12[1] = param_2;
    local_res20 = param_1;
    if (param_3 == (short *)0x0) {
      ppRVar9 = (PSRWLOCK *)FName::ToString(&local_res20,local_48);
      bVar6 = false;
      bVar5 = true;
    }
    else {
      local_50 = 0;
      local_58 = (PSRWLOCK)0x0;
      if (*param_3 != 0) {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (param_3[lVar7] != 0);
        uVar13 = (int)lVar7 + 1;
        local_50 = (ulonglong)uVar13;
        if (0 < (int)uVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        }
        FGenericPlatformString::Memcpy(local_58,param_3,(longlong)(int)uVar13 * 2);
      }
      ppRVar9 = &local_58;
      bVar6 = true;
      bVar5 = false;
    }
    puVar12[2] = 0;
    puVar12[2] = (ulonglong)*ppRVar9;
    *ppRVar9 = (PSRWLOCK)0x0;
    *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(ppRVar9 + 1);
    *(undefined4 *)((longlong)puVar12 + 0x1c) = *(undefined4 *)((longlong)ppRVar9 + 0xc);
    ppRVar9[1] = (PSRWLOCK)0x0;
    if ((bVar5) && (local_48[0] != 0)) {
      FMemory::Free();
    }
    if ((bVar6) && (local_58 != (PSRWLOCK)0x0)) {
      FMemory::Free();
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
  return puVar12;
}



// FUNCTION 1421912a0 FUN_1421912a0 body=1454 status=ok
// SIG undefined FUN_1421912a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1421912a0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  longlong *plVar14;
  longlong *plVar15;
  char local_118;
  char local_117;
  undefined1 local_114 [4];
  undefined8 local_110;
  longlong *local_108;
  longlong local_100 [3];
  undefined2 local_e8;
  ushort local_e6;
  longlong local_e0 [3];
  byte local_c6;
  undefined1 local_c0 [152];
  
  if ((((*(byte *)(param_1 + 0x58) & 4) == 0) || ((*(byte *)(param_1 + 0x58) & 2) == 0)) ||
     (DAT_146aeae14 == '\0')) {
    piVar6 = (int *)FUN_142191860();
    FUN_14217ebe0(param_2 + 2);
    return piVar6;
  }
  FUN_142194460(param_1 + 0x78,&local_118,*(longlong *)(param_1 + 0x30) + 0x68);
  cVar3 = local_118;
  if (local_117 == '\0') {
    local_118 = '\0';
    pcVar5 = (char *)FUN_142194460(DAT_146aeb040,local_114,0);
    if (pcVar5[1] == '\0') {
      cVar3 = '\0';
    }
    else {
      cVar3 = *pcVar5;
    }
  }
  if (cVar3 == '\0') {
    iVar12 = *param_2;
    plVar15 = (longlong *)(param_1 + 0xb0);
    piVar6 = (int *)*plVar15;
    iVar2 = *(int *)(param_1 + 0xb8);
    piVar13 = piVar6;
    do {
      if (piVar13 == piVar6 + iVar2) {
LAB_14219136b:
        *(int *)(param_1 + 0xb8) = iVar2 + 1;
        if (*(int *)(param_1 + 0xbc) < iVar2 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar15,iVar2);
        }
        *(int *)((longlong)iVar2 * 4 + *plVar15) = iVar12;
LAB_14219138a:
        piVar6 = (int *)FUN_142191860();
        FUN_14217ebe0(param_2 + 2);
        return piVar6;
      }
      if (*piVar13 == iVar12) {
        if ((int)((longlong)piVar13 - (longlong)piVar6 >> 2) != -1) goto LAB_14219138a;
        goto LAB_14219136b;
      }
      piVar13 = piVar13 + 1;
    } while( true );
  }
  lVar7 = FUN_14217c710(local_c0,param_2);
  lVar8 = FUN_14218c420();
  if ((*(uint *)(lVar8 + 0x90) & 0x3ffffff) == 0) {
    piVar6 = (int *)operator_new(200);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
      goto LAB_142191490;
    }
    FUN_14217c710(piVar6,lVar7);
    piVar6[0x26] = piVar6[0x26] & 0xc0000000;
    piVar6[0x26] = piVar6[0x26] | 0x40000000;
  }
  else {
    uVar4 = FUN_142192450(lVar8 + 0x88);
    piVar6 = (int *)0x0;
    if (uVar4 != 0) {
      piVar6 = *(int **)((&DAT_1468a81f8)[uVar4 >> 0xe] + 8 + (ulonglong)(uVar4 & 0x3fff) * 0x18);
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
    }
    FUN_14217c710(piVar6,lVar7);
    piVar6[0x26] = piVar6[0x26] & 0xc0000000;
    piVar6[0x26] = piVar6[0x26] | 0x40000000;
  }
  piVar6[0x2a] = 0;
  piVar6[0x2b] = 0;
  piVar6[0x2c] = 0;
  piVar6[0x2d] = 0;
  piVar6[0x2e] = 0;
  piVar6[0x2f] = 0;
  piVar6[0x30] = 0;
  piVar6[0x31] = 0;
  FUN_1421938f0(piVar6);
LAB_142191490:
  FUN_14217ebe0(lVar7 + 8);
  lVar7 = *(longlong *)(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar7 = param_1 + 0xc0;
  }
  lVar8 = lVar7 + (longlong)*(int *)(param_1 + 0xf8) * 0x18;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0x18) {
    if (*(int *)(lVar7 + 0x10) == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = *(longlong **)(lVar7 + 8);
    }
    cVar3 = (**(code **)(*plVar15 + 0x38))(plVar15,param_1,piVar6);
    if (cVar3 == '\0') {
      iVar12 = *piVar6;
      plVar15 = (longlong *)(param_1 + 0xb0);
      piVar13 = (int *)*plVar15;
      iVar2 = *(int *)(param_1 + 0xb8);
      piVar11 = piVar13;
      goto joined_r0x0001421917cc;
    }
  }
  if ((DAT_146aeaf18 == '\0') && (puVar9 = (undefined8 *)FUN_14218ce40(), puVar9 != &DAT_146aeaeb0))
  {
    DAT_146aeaeb0 = *puVar9;
    uRam0000000146aeaeb8 = puVar9[1];
    _DAT_146aeaec0 = puVar9[2];
    uRam0000000146aeaec8 = puVar9[3];
    _DAT_146aeaed0 = puVar9[4];
    DAT_146aeaed8 = (longlong *)puVar9[5];
    _DAT_146aeaee0 = puVar9[6];
    _DAT_146aeaee8 = puVar9[7];
    _DAT_146aeaef0 = puVar9[8];
    _DAT_146aeaef8 = puVar9[9];
    DAT_146aeaf00 = puVar9[10];
    DAT_146aeaf08 = puVar9[0xb];
    DAT_146aeaf10 = puVar9[0xc];
    DAT_146aeaf18 = '\x01';
  }
  if (*piVar6 != -1) {
    plVar15 = (longlong *)(piVar6 + 0x2a);
    local_110 = 0;
    if ((*DAT_146aeaed8 != 0) && (cVar3 = FUN_1407ce010(DAT_146aeaed8 + 1), cVar3 != '\0')) {
      plVar14 = (longlong *)*plVar15;
      plVar1 = plVar14 + (longlong)piVar6[0x2c] * 5;
      if (plVar14 != plVar1) {
        do {
          if ((*(longlong *)*plVar14 == *DAT_146aeaed8) &&
             (*(longlong *)(((longlong *)*plVar14)[1] + 0x28) ==
              *(longlong *)(DAT_146aeaed8[1] + 0x28))) goto LAB_1421916a4;
          plVar14 = plVar14 + 5;
        } while (plVar14 != plVar1);
      }
      uVar10 = FUN_142181620(&local_118,local_e0);
      local_108 = DAT_146aeaed8;
      local_e6 = local_e6 & 0xfff8;
      local_e8 = 0xffff;
      FUN_14217f450(local_100,uVar10);
      iVar12 = piVar6[0x2c];
      piVar6[0x2c] = iVar12 + 1;
      if (piVar6[0x2d] < iVar12 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar15,iVar12);
      }
      puVar9 = (undefined8 *)(*plVar15 + (longlong)iVar12 * 0x28);
      *puVar9 = local_108;
      *(ushort *)((longlong)puVar9 + 0x22) = *(ushort *)((longlong)puVar9 + 0x22) & 0xfff8;
      *(undefined2 *)(puVar9 + 4) = 0xffff;
      FUN_14217f450(puVar9 + 1,local_100);
      if (((local_e6 & 1) != 0) && (local_100[0] != 0)) {
        FMemory::Free();
      }
      if (((local_c6 & 1) != 0) && (local_e0[0] != 0)) {
        FMemory::Free();
      }
    }
LAB_1421916a4:
    piVar6[0x26] = piVar6[0x26] | 0x40000000;
  }
  lVar7 = *(longlong *)(param_1 + 0x90);
  lVar8 = (longlong)*(int *)(param_1 + 0x98) * 0x30 + lVar7;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0x30) {
    FUN_142183d30(piVar6,lVar7);
  }
  lVar7 = *(longlong *)(piVar6 + 0x2e);
  iVar12 = piVar6[0x30];
  lVar8 = (longlong)iVar12 * 0x30 + lVar7;
  if (lVar7 != lVar8) {
    piVar13 = (int *)(lVar7 + 0x28);
    do {
      if (piVar13[1] != *piVar13) {
        TArray<TSharedPtr<FGameplayAbilityTargetData,0>,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>
        ::ResizeTo(piVar13 + -6);
      }
      lVar7 = lVar7 + 0x30;
      piVar13 = piVar13 + 0xc;
    } while (lVar7 != lVar8);
    iVar12 = piVar6[0x30];
  }
  if (piVar6[0x31] != iVar12) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(piVar6 + 0x2e);
  }
  iVar12 = *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0xa8) = iVar12 + 1;
  if (*(int *)(param_1 + 0xac) < iVar12 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xa0,iVar12);
  }
  *(int **)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar12 * 8) = piVar6;
  FUN_14217ebe0(param_2 + 2);
  return piVar6;
joined_r0x0001421917cc:
  if (piVar11 == piVar13 + iVar2) {
LAB_1421917eb:
    *(int *)(param_1 + 0xb8) = iVar2 + 1;
    if (*(int *)(param_1 + 0xbc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar15,iVar2);
    }
    *(int *)((longlong)iVar2 * 4 + *plVar15) = iVar12;
LAB_14219180a:
    FUN_142188120(piVar6);
    piVar6 = (int *)FUN_142191860();
    FUN_14217ebe0(param_2 + 2);
    return piVar6;
  }
  if (*piVar11 == iVar12) {
    if ((int)((longlong)piVar11 - (longlong)piVar13 >> 2) != -1) goto LAB_14219180a;
    goto LAB_1421917eb;
  }
  piVar11 = piVar11 + 1;
  goto joined_r0x0001421917cc;
}



// FUNCTION 142191860 FUN_142191860 body=415 status=ok
// SIG undefined FUN_142191860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142191860(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0 [128];
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aed09c) && (_Init_thread_header(&DAT_146aed09c), DAT_146aed09c == -1))
  {
    local_20 = 0;
    local_a8 = 0xffffffff;
    local_18 = 0;
    _guard_xfg_dispatch_icall_nop(&DAT_146526f88,local_a0,0x80);
    lVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    if (DAT_146527008 != 0) {
      FMemory::Free();
      lVar1 = local_20;
      uVar2 = local_18._4_4_;
      uVar3 = (undefined4)local_18;
    }
    DAT_146527018 = DAT_146527018 & 0xc0000000 | 0x40000000;
    local_20 = 0;
    local_18 = 0;
    _DAT_146527028 = 0;
    _DAT_146527030 = 0;
    DAT_146527038 = 0;
    _DAT_146527040 = 0;
    DAT_146527008 = lVar1;
    _DAT_146527010 = uVar3;
    _DAT_146527014 = uVar2;
    FUN_1421938f0(&DAT_146526f80);
    FUN_14217ebe0(local_a0);
    atexit(FUN_143ea7550);
    _Init_thread_footer(&DAT_146aed09c);
  }
  return &DAT_146526f80;
}



// FUNCTION 142191a00 FUN_142191a00 body=1712 status=ok
// SIG undefined FUN_142191a00(void)

void FUN_142191a00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
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
  
  plVar6 = (longlong *)*param_1;
  puVar5 = (undefined8 *)0x0;
  if (param_1[0x13] == 0) {
    puVar2 = (undefined8 *)FUN_14217e4b0(local_res10,L"hitch_threshold_sec");
    local_res8 = *puVar2;
    puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_res8);
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)operator_new(0x18);
      puVar3 = puVar5;
      if (puVar4 != (undefined8 *)0x0) {
        uVar1 = *puVar2;
        *puVar4 = &PTR_FUN_144fdcb18;
        puVar4[1] = uVar1;
        *(undefined4 *)(puVar4 + 2) = 0x3d4ccccd;
        puVar3 = puVar4;
      }
      (**(code **)(*plVar6 + 0x20))(plVar6,puVar3);
      FUN_142186e60(plVar6,puVar3);
    }
    param_1[0x13] = puVar3;
    plVar6 = (longlong *)*param_1;
  }
  if (param_1[0x14] == 0) {
    puVar2 = (undefined8 *)FUN_14217e4b0(local_res10,L"time_clamp_sec");
    local_res8 = *puVar2;
    puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_res8);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)operator_new(0x18);
      if (puVar3 != (undefined8 *)0x0) {
        uVar1 = *puVar2;
        *puVar3 = &PTR_FUN_144fdcb18;
        puVar3[1] = uVar1;
        *(undefined4 *)(puVar3 + 2) = 0x3e800000;
        puVar5 = puVar3;
      }
      (**(code **)(*plVar6 + 0x20))(plVar6,puVar5);
      FUN_142186e60(plVar6,puVar5);
      puVar3 = puVar5;
    }
    param_1[0x14] = puVar3;
    plVar6 = (longlong *)*param_1;
  }
  puVar5 = (undefined8 *)FName::FName(&local_res8,L"Mean",1);
  uVar1 = param_1[1];
  local_e8 = 0;
  local_f0 = *puVar5;
  local_f8 = uVar1;
  FUN_142184c40(plVar6,&local_f8);
  local_f8 = uVar1;
  puVar5 = (undefined8 *)FName::FName(local_res10,L"Variance",1);
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_res18,L"Mean",1);
  uVar1 = param_1[2];
  local_e8 = 0;
  local_f0 = *puVar5;
  local_f8 = uVar1;
  FUN_142184c40(plVar6,&local_f8);
  local_f8 = uVar1;
  puVar5 = (undefined8 *)FName::FName(local_res20,L"Variance",1);
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_e0,L"Mean",1);
  uVar1 = param_1[3];
  local_e8 = 0;
  local_f0 = *puVar5;
  local_f8 = uVar1;
  FUN_142184c40(plVar6,&local_f8);
  local_f8 = uVar1;
  puVar5 = (undefined8 *)FName::FName(local_d8,L"Variance",1);
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_d0,L"Mean",1);
  uVar1 = param_1[4];
  local_e8 = 0;
  local_f0 = *puVar5;
  local_f8 = uVar1;
  FUN_142184c40(plVar6,&local_f8);
  local_f8 = uVar1;
  puVar5 = (undefined8 *)FName::FName(local_c8,L"Variance",1);
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_c0,L"Count",1);
  local_f8 = param_1[5];
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_b8,L"Mean",1);
  uVar1 = param_1[6];
  local_e8 = 0;
  local_f0 = *puVar5;
  local_f8 = uVar1;
  FUN_142184c40(plVar6,&local_f8);
  local_f8 = uVar1;
  puVar5 = (undefined8 *)FName::FName(local_b0,&DAT_144fda508,1);
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_a8,L"Mean",1);
  uVar1 = param_1[7];
  local_e8 = 0;
  local_f0 = *puVar5;
  local_f8 = uVar1;
  FUN_142184c40(plVar6,&local_f8);
  local_f8 = uVar1;
  puVar5 = (undefined8 *)FName::FName(local_a0,&DAT_144fda4f0,1);
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_98,L"Mean",1);
  uVar1 = param_1[8];
  local_e8 = 0;
  local_f0 = *puVar5;
  local_f8 = uVar1;
  FUN_142184c40(plVar6,&local_f8);
  local_f8 = uVar1;
  puVar5 = (undefined8 *)FName::FName(local_90,&DAT_144fda4b8,1);
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_88,L"Mean",1);
  uVar1 = param_1[9];
  local_e8 = 0;
  local_f0 = *puVar5;
  local_f8 = uVar1;
  FUN_142184c40(plVar6,&local_f8);
  local_f8 = uVar1;
  puVar5 = (undefined8 *)FName::FName(local_80,&DAT_144fda4a0,1);
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_78,L"Mean",1);
  local_f8 = param_1[10];
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_70,L"Mean",1);
  local_f8 = param_1[0xb];
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_68,L"Mean",1);
  local_f8 = param_1[0xc];
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_60,L"Mean",1);
  uVar1 = param_1[0xd];
  local_e8 = 0;
  local_f0 = *puVar5;
  local_f8 = uVar1;
  FUN_142184c40(plVar6,&local_f8);
  local_f8 = uVar1;
  puVar5 = (undefined8 *)FName::FName(local_58,&DAT_144fda458,1);
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_50,L"Mean",1);
  local_f8 = param_1[0x10];
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_48,L"Mean",1);
  local_f8 = param_1[0x11];
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  puVar5 = (undefined8 *)FName::FName(local_40,L"Mean",1);
  local_f8 = param_1[0x12];
  local_e8 = 0;
  local_f0 = *puVar5;
  FUN_142184c40(plVar6,&local_f8);
  return;
}



// FUNCTION 1421920b0 FUN_1421920b0 body=108 status=ok
// SIG undefined FUN_1421920b0(void)

undefined8 * FUN_1421920b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed0b8) {
    _Init_thread_header(&DAT_146aed0b8);
    if (DAT_146aed0b8 == -1) {
      atexit(FUN_143ea75c0);
      _Init_thread_footer(&DAT_146aed0b8);
      return &DAT_146aed0a8;
    }
  }
  return &DAT_146aed0a8;
}



// FUNCTION 142192120 GetAnimationsConfig body=18 status=ok
// SIG undefined GetAnimationsConfig(void)

longlong UCharacterData::GetAnimationsConfig(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14218c050();
  return lVar1 + 0x30;
}



// FUNCTION 142192140 thunk_FUN_14218c050 body=5 status=ok
// SIG undefined thunk_FUN_14218c050(void)

undefined * thunk_FUN_14218c050(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed1fc) {
    _Init_thread_header(&DAT_146aed1fc);
    if (DAT_146aed1fc == -1) {
      atexit(_dynamic_atexit_destructor_for__DefaultFormatter__);
      _Init_thread_footer(&DAT_146aed1fc);
      return &DAT_1465270f0;
    }
  }
  return &DAT_1465270f0;
}



// FUNCTION 142192150 FUN_142192150 body=176 status=ok
// SIG undefined FUN_142192150(void)

void FUN_142192150(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_28 [4];
  
  if (param_2 == '\0') {
    lVar3 = 0;
    plVar4 = *(longlong **)(param_1 + 0x70);
    iVar2 = *(int *)(param_1 + 0x80) + -1;
    if (*(int *)(param_1 + 0x80) == 0) {
      iVar2 = 0;
    }
    plVar1 = plVar4 + ((int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f
                            ) + iVar2 / 3 + (iVar2 >> 0x1f));
    if (plVar4 != (longlong *)0x0) {
      lVar3 = *plVar4;
    }
    FUN_1421960e0((longlong *)(param_1 + 0x70),local_28);
    while (lVar3 != local_28[0]) {
      FUN_142189710(lVar3);
      lVar3 = lVar3 + 0x120;
      if ((plVar4 != plVar1) && (lVar3 == *plVar4 + 0x360)) {
        lVar3 = plVar4[1];
        plVar4 = plVar4 + 1;
      }
    }
  }
  return;
}



// FUNCTION 142192200 FUN_142192200 body=18 status=ok
// SIG undefined FUN_142192200(void)

longlong FUN_142192200(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14218c050();
  return lVar1 + 0x48;
}



// FUNCTION 142192220 FUN_142192220 body=18 status=ok
// SIG undefined FUN_142192220(void)

longlong FUN_142192220(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14218c050();
  return lVar1 + 0x18;
}



// FUNCTION 142192240 FUN_142192240 body=151 status=ok
// SIG undefined FUN_142192240(void)

ulonglong FUN_142192240(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *local_res8;
  
  lVar2 = *(longlong *)(*param_1 + 0x90);
  uVar3 = FUN_142190080(lVar2);
  if ((char)uVar3 != '\0') {
    if (*(longlong *)(lVar2 + 0x28) == 0xd3) {
LAB_14219229a:
      lVar2 = *(longlong *)(*param_1 + 0x90);
      local_res8 = param_1;
      uVar4 = FUN_14218be80();
      uVar3 = FUN_14217a750(uVar4,*(undefined8 *)(lVar2 + 0x28),&local_res8);
      return uVar3;
    }
    uVar1 = *(uint *)(lVar2 + 0x88);
    uVar3 = (ulonglong)uVar1;
    if ((uVar1 != 0) && (uVar3 = (ulonglong)(uVar1 - 1), uVar1 - 1 != 0)) {
      uVar1 = *(uint *)(lVar2 + 0x98);
      uVar3 = (ulonglong)uVar1;
      iVar5 = uVar1 - 1;
      if (uVar1 == 0) {
        iVar5 = 0;
      }
      if (iVar5 != 0) goto LAB_14219229a;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1421922e0 FUN_1421922e0 body=270 status=ok
// SIG undefined FUN_1421922e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1421922e0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar2 = FUN_142190080();
  if ((char)uVar2 == '\0') goto LAB_1421923c7;
  local_d8 = 0xd3;
  if (*(longlong *)(param_1 + 0x28) != 0xd3) {
    uVar1 = *(uint *)(param_1 + 0x88);
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 == 0) || (uVar2 = (ulonglong)(uVar1 - 1), uVar1 - 1 == 0)) goto LAB_1421923c7;
    uVar1 = *(uint *)(param_1 + 0x98);
    uVar2 = (ulonglong)uVar1;
    iVar3 = uVar1 - 1;
    if (uVar1 == 0) {
      iVar3 = 0;
    }
    if (iVar3 == 0) goto LAB_1421923c7;
  }
  uVar2 = FUN_142194620(param_1);
  if ((char)uVar2 != '\0') {
    local_38 = 0;
    local_30 = 0;
    local_28 = param_1;
    FString::FString(local_20,param_1 + 0x30);
    local_d0 = local_b8;
    if (local_20[0] != 0) {
      FMemory::Free();
    }
    FUN_14217ebe0(local_b8);
    local_c8 = 0;
    local_c0 = param_2;
    uVar2 = FUN_142192240(&local_d0);
    return uVar2;
  }
LAB_1421923c7:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1421923f0 FUN_1421923f0 body=96 status=ok
// SIG undefined FUN_1421923f0(void)

longlong FUN_1421923f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  
  *(undefined2 *)(param_1 + 0x18) = 0xffff;
  *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) & 0xfff8;
  if (param_2 != 0) {
    local_28 = param_2;
    local_20 = param_3;
    local_18 = param_1;
    uVar1 = FUN_14218be10();
    FUN_14217a950(uVar1,param_2,&local_28);
  }
  return param_1;
}



// FUNCTION 142192450 FUN_142192450 body=215 status=ok
// SIG undefined FUN_142192450(void)

uint FUN_142192450(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  LOCK();
  uVar2 = *(ulonglong *)(param_1 + 8);
  if (uVar2 == 0) {
    *(ulonglong *)(param_1 + 8) = 0;
    uVar2 = 0;
  }
  UNLOCK();
  uVar5 = (uint)uVar2;
  while( true ) {
    uVar1 = uVar5 & 0x3ffffff;
    if ((uVar2 & 0x3ffffff) == 0) {
      return uVar1;
    }
    uVar4 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 < (uVar2 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    lVar3 = 0;
    if (uVar1 != 0) {
      lVar3 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
    }
    LOCK();
    bVar6 = uVar2 == *(ulonglong *)(param_1 + 8);
    if (bVar6) {
      *(ulonglong *)(param_1 + 8) = *(uint *)(lVar3 + 0x10) | uVar4;
    }
    UNLOCK();
    if (bVar6) break;
    LOCK();
    uVar2 = *(ulonglong *)(param_1 + 8);
    if (uVar2 == 0) {
      *(ulonglong *)(param_1 + 8) = 0;
      uVar2 = 0;
    }
    UNLOCK();
    uVar5 = (uint)uVar2;
  }
  *(undefined4 *)(lVar3 + 0x10) = 0;
  return uVar1;
}



// FUNCTION 142192530 Push body=192 status=ok
// SIG undefined Push(void)

void FLockFreePointerListLIFORoot<0,1>::Push(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  do {
    LOCK();
    uVar1 = *(ulonglong *)(param_1 + 8);
    if (uVar1 == 0) {
      *(ulonglong *)(param_1 + 8) = 0;
      uVar1 = 0;
    }
    UNLOCK();
    uVar3 = (uVar1 & 0xfffffffffc000000) + 0x4000000;
    if (uVar3 < (uVar1 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    lVar2 = 0;
    if (param_2 != 0) {
      lVar2 = (&DAT_1468a81f8)[param_2 >> 0xe] + (ulonglong)(param_2 & 0x3fff) * 0x18;
    }
    *(uint *)(lVar2 + 0x10) = (uint)uVar1 & 0x3ffffff;
    LOCK();
    bVar4 = uVar1 == *(ulonglong *)(param_1 + 8);
    if (bVar4) {
      *(ulonglong *)(param_1 + 8) = param_2 | uVar3;
    }
    UNLOCK();
  } while (!bVar4);
  return;
}



// FUNCTION 1421925f0 FUN_1421925f0 body=394 status=ok
// SIG undefined FUN_1421925f0(void)

undefined8 *
FUN_1421925f0(longlong param_1,undefined8 *param_2,longlong param_3,undefined1 param_4,
             longlong **param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong local_res8;
  longlong *local_res10 [2];
  int local_res20 [2];
  longlong *local_40;
  int local_38;
  undefined1 local_30;
  
  uVar3 = FDelegateHandle::GenerateNewID();
  *param_2 = uVar3;
  local_res8 = param_3;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar4 = param_1 + 0x40;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x28;
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x28) == param_3) {
          if ((iVar2 != -1) && (lVar4 != 0)) goto LAB_1421926bc;
          break;
        }
        iVar2 = *(int *)(lVar4 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res10[0] = &local_res8;
  FUN_1421794a0(param_1 + 8,local_res20,local_res10,0);
  lVar4 = *(longlong *)(param_1 + 8) + (longlong)local_res20[0] * 0x28;
LAB_1421926bc:
  uVar3 = *param_2;
  local_40 = (longlong *)0x0;
  local_38 = 0;
  if (((param_5 != &local_40) && (*(int *)(param_5 + 1) != 0)) &&
     (plVar1 = *param_5, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_40);
  }
  iVar2 = *(int *)(lVar4 + 0x10);
  *(int *)(lVar4 + 0x10) = iVar2 + 1;
  local_30 = param_4;
  if (*(int *)(lVar4 + 0x14) < iVar2 + 1) {
    FUN_140fd5770((longlong *)(lVar4 + 8),iVar2);
  }
  puVar5 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(lVar4 + 8));
  *puVar5 = uVar3;
  puVar5[1] = (longlong *)0x0;
  *(undefined4 *)(puVar5 + 2) = 0;
  if (((&local_40 != (longlong **)(puVar5 + 1)) && (local_38 != 0)) && (local_40 != (longlong *)0x0)
     ) {
    (**(code **)(*local_40 + 0x30))();
  }
  *(undefined1 *)(puVar5 + 3) = local_30;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
  *(undefined1 *)(lVar4 + 0x18) = 1;
  return param_2;
}



// FUNCTION 142192780 FUN_142192780 body=357 status=ok
// SIG undefined FUN_142192780(void)

int FUN_142192780(longlong param_1,longlong **param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *local_28;
  int local_20;
  
  uVar3 = FUN_14218e190();
  if (param_1 != 0) {
    plVar6 = (longlong *)
             ((ulonglong)(*(ulonglong *)(uVar3 + 0x100) != 0) - 1 & uVar3 |
             *(ulonglong *)(uVar3 + 0x100));
    plVar4 = plVar6 + (longlong)*(int *)(uVar3 + 0x108) * 4;
    for (; plVar6 != plVar4; plVar6 = plVar6 + 4) {
      if (*plVar6 == param_1) {
        return 0;
      }
    }
  }
  iVar5 = DAT_146aecfcc + 1;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  DAT_146aecfcc = iVar5;
  if (((param_2 != &local_28) && (*(int *)(param_2 + 1) != 0)) && (*param_2 != (longlong *)0x0)) {
    (**(code **)(**param_2 + 0x30))();
  }
  iVar1 = *(int *)(uVar3 + 0x108);
  iVar2 = iVar1 + 1;
  *(int *)(uVar3 + 0x108) = iVar2;
  if (*(int *)(uVar3 + 0x10c) < iVar2) {
    TArray<FBlendedCurve,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(uVar3);
  }
  plVar6 = (longlong *)
           ((*(ulonglong *)(uVar3 + 0x100) |
            (ulonglong)(*(ulonglong *)(uVar3 + 0x100) != 0) - 1 & uVar3) + (longlong)iVar1 * 0x20);
  *plVar6 = param_1;
  *(int *)(plVar6 + 1) = iVar5;
  plVar6[2] = 0;
  *(undefined4 *)(plVar6 + 3) = 0;
  if (((&local_28 != (longlong **)(plVar6 + 2)) && (local_20 != 0)) && (local_28 != (longlong *)0x0)
     ) {
    (**(code **)(*local_28 + 0x30))();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  return iVar5;
}



// FUNCTION 1421928f0 FUN_1421928f0 body=297 status=ok
// SIG undefined FUN_1421928f0(void)

undefined8 *
FUN_1421928f0(undefined8 *param_1,longlong param_2,undefined1 param_3,longlong **param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *local_30;
  int local_28;
  undefined1 local_20;
  
  *param_1 = 0;
  cVar4 = FUN_142190080(param_2);
  if (cVar4 != '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = FUN_14218be80();
    uVar6 = FDelegateHandle::GenerateNewID();
    plVar7 = (longlong *)FUN_14218e200(uVar5,uVar2);
    local_30 = (longlong *)0x0;
    local_28 = 0;
    if (((param_4 != &local_30) && (*(int *)(param_4 + 1) != 0)) &&
       (plVar3 = *param_4, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_30);
    }
    iVar1 = (int)plVar7[1];
    *(int *)(plVar7 + 1) = iVar1 + 1;
    local_20 = param_3;
    if (*(int *)((longlong)plVar7 + 0xc) < iVar1 + 1) {
      FUN_140fd5770(plVar7,iVar1);
    }
    puVar8 = (undefined8 *)((longlong)iVar1 * 0x20 + *plVar7);
    *puVar8 = uVar6;
    puVar8[1] = (longlong *)0x0;
    *(undefined4 *)(puVar8 + 2) = 0;
    if (((&local_30 != (longlong **)(puVar8 + 1)) && (local_28 != 0)) &&
       (local_30 != (longlong *)0x0)) {
      (**(code **)(*local_30 + 0x30))();
    }
    *(undefined1 *)(puVar8 + 3) = local_20;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
    *(undefined1 *)(plVar7 + 2) = 1;
    *param_1 = uVar6;
  }
  return param_1;
}



// FUNCTION 142192a20 FUN_142192a20 body=108 status=ok
// SIG undefined FUN_142192a20(void)

undefined8 *
FUN_142192a20(undefined8 *param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  *param_1 = 0;
  local_res8 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_14218be10();
    puVar2 = (undefined8 *)FUN_1421925f0(uVar1,&local_res8,param_2,param_3,param_4);
    *param_1 = *puVar2;
  }
  return param_1;
}



// FUNCTION 142192a90 FUN_142192a90 body=212 status=ok
// SIG undefined FUN_142192a90(void)

void FUN_142192a90(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  longlong *local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    plVar1 = (longlong *)FMemory::Realloc(0,0x30);
    local_10 = 3;
    local_18 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      plVar1[1] = param_1;
      *plVar1 = (longlong)&DAT_143f3ed00;
      plVar1[2] = (longlong)FUN_140520750;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[4] = lVar2;
      *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar3 = (undefined8 *)FUN_1421928f0(local_res8,param_2,param_3,&local_18);
    *(undefined8 *)(param_1 + 8) = *puVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      lVar2 = FMemory::Realloc(plVar1,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 142192b70 FUN_142192b70 body=525 status=ok
// SIG undefined FUN_142192b70(void)

void FUN_142192b70(longlong *param_1)

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
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
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
      uVar11 = 0;
      uVar12 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_38;
      }
      uVar5 = *puVar13;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_142192c9f;
        uVar5 = puVar13[lVar6 + 1];
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
LAB_142192c9f:
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
        puVar10 = (undefined8 *)((longlong)iStack_2c * 0x10 + *param_1);
        uVar5 = FUN_140438070(*puVar10);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar10 + 0xc) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar10 + 1) =
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



// FUNCTION 142192d80 Rehash body=535 status=ok
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
        if (bVar5) goto LAB_142192ebf;
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
LAB_142192ebf:
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



// FUNCTION 142192fa0 Rehash body=778 status=ok
// SIG undefined Rehash(void)

void TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::Rehash
               (longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint *puVar17;
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
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar13 = 0;
      uVar16 = (ulonglong)uVar9;
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        uVar7 = (longlong)(int)*plVar2 - 1U & uVar13;
        uVar13 = uVar13 + 1;
        *(undefined4 *)((longlong)plVar11 + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar17 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar17 = puStack_38;
      }
      uVar9 = *puVar17;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar9 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_1421930cf;
        uVar9 = puVar17[lVar6 + 1];
      }
      uStack_64 = -uVar9 & uVar9;
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
LAB_1421930cf:
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
        puVar15 = (undefined8 *)((longlong)iStack_2c * 0x20 + *param_1);
        uVar14 = (int)((ulonglong)*puVar15 >> 0x20) + (int)*puVar15;
        uVar12 = uVar14 >> 0xd ^ -uVar14;
        uVar9 = (-0x61c88647 - uVar12) - uVar14 ^ uVar12 << 8;
        uVar14 = (uVar14 - uVar9) - uVar12 ^ uVar9 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar14 ^ uVar14 >> 0xc;
        uVar9 = (uVar9 - uVar12) - uVar14 ^ uVar12 << 0x10;
        uVar14 = (uVar14 - uVar9) - uVar12 ^ uVar9 >> 5;
        uVar12 = (uVar12 - uVar9) - uVar14 ^ uVar14 >> 3;
        uVar9 = (uVar9 - uVar12) - uVar14 ^ uVar12 << 10;
        if (*(int *)(puVar15 + 2) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)puVar15[1];
        }
        uVar5 = FUN_140438070(puVar10);
        uVar12 = ((uVar14 - uVar9) - uVar12 ^ uVar9 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
        uVar9 = (-0x61c88647 - uVar12) - uVar5 ^ uVar12 << 8;
        uVar14 = (uVar5 - uVar9) - uVar12 ^ uVar9 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar14 ^ uVar14 >> 0xc;
        uVar9 = (uVar9 - uVar12) - uVar14 ^ uVar12 << 0x10;
        uVar14 = (uVar14 - uVar9) - uVar12 ^ uVar9 >> 5;
        uVar12 = (uVar12 - uVar9) - uVar14 ^ uVar14 >> 3;
        uVar9 = (uVar9 - uVar12) - uVar14 ^ uVar12 << 10;
        uVar9 = ((uVar14 - uVar9) - uVar12 ^ uVar9 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x1c) = uVar9;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)(puVar15 + 3) =
             *(undefined4 *)
              ((longlong)plVar11 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(int *)((longlong)plVar11 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 1421932b0 FUN_1421932b0 body=534 status=ok
// SIG undefined FUN_1421932b0(void)

void FUN_1421932b0(longlong *param_1)

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
  ulonglong uVar11;
  uint *puVar12;
  longlong *plVar13;
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
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
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
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_1421933ef;
        uVar8 = puVar12[lVar5 + 1];
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
LAB_1421933ef:
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
        plVar13 = (longlong *)((longlong)iStack_1c * 0x10 + *param_1);
        uVar8 = (int)((ulonglong)*(undefined8 *)(*plVar13 + 0x28) >> 0x20) +
                (int)*(undefined8 *)(*plVar13 + 0x28) & (int)*plVar2 - 1U;
        *(uint *)((longlong)plVar13 + 0xc) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(plVar13 + 1) =
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



// FUNCTION 1421934d0 FUN_1421934d0 body=184 status=ok
// SIG undefined FUN_1421934d0(void)

void FUN_1421934d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 8,param_2);
  if ((0 < iVar1 - iVar2) && (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c))) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000142193581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 142193590 FUN_142193590 body=862 status=ok
// SIG undefined FUN_142193590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142193590(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  char *pcVar10;
  uint uVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined2 local_50;
  ushort local_4e;
  undefined2 local_48;
  ushort local_46;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*(char **)(param_1 + 0x18) == (char *)0x0) {
    pcVar7 = (char *)(param_1 + 8);
  }
  pcVar10 = pcVar7 + (longlong)*(int *)(param_1 + 0x20) * 0x10;
  if (pcVar7 != pcVar10) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      if ((*(int *)(lVar2 + 0x38) < DAT_146aeb4b0) &&
         (_Init_thread_header(&DAT_146aeb4b0), DAT_146aeb4b0 == -1)) {
        DAT_146aeb4a0 = 0;
        _DAT_146aeb4a8 = 0;
        atexit((_func_5014 *)&LAB_143ea7430);
        _Init_thread_footer(&DAT_146aeb4b0);
      }
      cVar5 = *pcVar7;
      if (((cVar5 < '\0') || (DAT_146aeb4a8 <= cVar5)) ||
         (plVar3 = *(longlong **)(DAT_146aeb4a0 + (longlong)cVar5 * 8), plVar3 == (longlong *)0x0))
      {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)(*plVar3 + 8))(plVar3,pcVar7,param_1,param_3);
      }
      if (**(longlong **)(pcVar7 + 8) != 0) {
        lVar4 = (*(longlong **)(pcVar7 + 8))[1];
        cVar5 = FUN_142190080(lVar4);
        if (cVar5 != '\0') {
          if (*(longlong *)(lVar4 + 0x28) == 0xd3) {
LAB_1421936bf:
            plVar8 = (longlong *)*param_2;
            plVar3 = plVar8 + (longlong)(int)param_2[1] * 5;
            plVar9 = (longlong *)0x0;
            if (plVar8 != plVar3) {
              do {
                if ((*(longlong *)*plVar8 == **(longlong **)(pcVar7 + 8)) &&
                   (plVar9 = plVar8,
                   *(longlong *)(((longlong *)*plVar8)[1] + 0x28) ==
                   *(longlong *)((*(longlong **)(pcVar7 + 8))[1] + 0x28))) break;
                plVar8 = plVar8 + 5;
                plVar9 = (longlong *)0x0;
              } while (plVar8 != plVar3);
            }
            if (plVar9 == (longlong *)0x0) {
              local_68 = *(ulonglong *)(pcVar7 + 8);
              local_48 = 0xffff;
              local_46 = local_46 & 0xfff8;
              FUN_1407bae70(&uStack_60);
              iVar6 = (int)param_2[1];
              uStack_60 = CONCAT44(uStack_60._4_4_,uVar11);
              *(int *)(param_2 + 1) = iVar6 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
                TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
              }
              lVar4 = *param_2;
              *(ulonglong *)(lVar4 + (longlong)iVar6 * 0x28) = local_68;
              lVar4 = lVar4 + (longlong)iVar6 * 0x28;
              *(undefined2 *)(lVar4 + 0x20) = 0xffff;
              *(ushort *)(lVar4 + 0x22) = *(ushort *)(lVar4 + 0x22) & 0xfff8;
              FUN_14217f450(lVar4 + 8,&uStack_60);
              if (((local_46 & 1) != 0) && (uStack_60 != 0)) {
                FMemory::Free();
              }
            }
            else {
              puVar1 = (ulonglong *)(plVar9 + 1);
              local_4e = local_4e & 0xfff8 | 4;
              uStack_60 = 0;
              local_68 = (ulonglong)uVar11;
              local_58 = 0;
              local_50 = 10;
              FUN_142194380(puVar1,10,0,0,(byte)local_4e >> 2 & 1);
              if ((*(byte *)((longlong)plVar9 + 0x22) & 1) == 0) {
                *(undefined4 *)puVar1 = (undefined4)local_68;
                *(undefined4 *)((longlong)plVar9 + 0xc) = local_68._4_4_;
                *(undefined4 *)(plVar9 + 2) = (undefined4)uStack_60;
                *(undefined4 *)((longlong)plVar9 + 0x14) = uStack_60._4_4_;
                plVar9[3] = local_58;
              }
              else if (puVar1 != &local_68) {
                if (*puVar1 != 0) {
                  FMemory::Free();
                }
                *puVar1 = local_68;
                *(undefined4 *)(plVar9 + 2) = (undefined4)uStack_60;
                *(undefined4 *)((longlong)plVar9 + 0x14) = uStack_60._4_4_;
                uStack_60 = 0;
                local_68 = 0;
              }
              if (((local_4e & 1) != 0) && (local_68 != 0)) {
                FMemory::Free();
              }
            }
          }
          else if ((*(int *)(lVar4 + 0x88) != 0) && (*(int *)(lVar4 + 0x88) != 1)) {
            iVar6 = *(int *)(lVar4 + 0x98) + -1;
            if (*(int *)(lVar4 + 0x98) == 0) {
              iVar6 = 0;
            }
            if (iVar6 != 0) goto LAB_1421936bf;
          }
        }
      }
      pcVar7 = pcVar7 + 0x10;
    } while (pcVar7 != pcVar10);
  }
  return;
}



// FUNCTION 1421938f0 FUN_1421938f0 body=498 status=ok
// SIG undefined FUN_1421938f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LARGE_INTEGER FUN_1421938f0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  LARGE_INTEGER LVar4;
  ulonglong uVar5;
  LARGE_INTEGER LVar6;
  int *piVar7;
  int *piVar8;
  void *pvVar9;
  int *piVar10;
  float fVar11;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  LVar4.s.LowPart = *(uint *)(param_1 + 0x98) >> 0x1e;
  LVar4.s.HighPart = 0;
  fVar11 = (float)(((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430);
  if ((LVar4.s.LowPart & 1) != 0) {
    piVar10 = *(int **)(param_1 + 0xb8);
    LVar4.QuadPart = (LONGLONG)(piVar10 + (longlong)*(int *)(param_1 + 0xc0) * 0xc);
    if (piVar10 != (int *)LVar4.QuadPart) {
      uVar5 = (ulonglong)_tls_index;
      piVar8 = piVar10 + 10;
      pvVar9 = ThreadLocalStoragePointer;
      local_res8.QuadPart = LVar4.QuadPart;
      do {
        LVar4.QuadPart = (LONGLONG)(piVar8 + -6);
        LVar6.QuadPart = ((LARGE_INTEGER *)(piVar8 + -2))->QuadPart;
        if ((int *)((LARGE_INTEGER *)(piVar8 + -2))->QuadPart == (int *)0x0) {
          LVar6.QuadPart = LVar4.QuadPart;
        }
        piVar7 = (int *)((longlong)*piVar8 * 0x10 + LVar6.QuadPart);
        if ((int *)LVar6.QuadPart != piVar7) {
          lVar2 = *(longlong *)((longlong)pvVar9 + uVar5 * 8);
          do {
            if ((*(int *)(lVar2 + 0x38) < DAT_146aeb4b0) &&
               (_Init_thread_header(&DAT_146aeb4b0), DAT_146aeb4b0 == -1)) {
              DAT_146aeb4a0.QuadPart = 0;
              _DAT_146aeb4a8 = 0;
              atexit((_func_5014 *)&LAB_143ea7430);
              _Init_thread_footer(&DAT_146aeb4b0);
            }
            cVar1 = *(char *)LVar6;
            LVar4.s.HighPart = 0;
            LVar4.s.LowPart = (int)cVar1;
            if (((-1 < cVar1) && (cVar1 < DAT_146aeb4a8)) &&
               (plVar3 = *(longlong **)(DAT_146aeb4a0.QuadPart + (longlong)cVar1 * 8),
               LVar4 = DAT_146aeb4a0, plVar3 != (longlong *)0x0)) {
              LVar4.QuadPart =
                   (**(code **)(*plVar3 + 0x10))(plVar3,LVar6.QuadPart,piVar8 + -8,param_1);
            }
            LVar6.QuadPart = LVar6.QuadPart + 0x10;
          } while ((int *)LVar6.QuadPart != piVar7);
          uVar5 = (ulonglong)_tls_index;
          pvVar9 = ThreadLocalStoragePointer;
        }
        piVar8[-8] = 0;
        piVar8[-7] = 0;
        piVar10 = piVar10 + 0xc;
        piVar8 = piVar8 + 0xc;
      } while (piVar10 != (int *)local_res8.QuadPart);
    }
    *(float *)(param_1 + 0xa0) = fVar11;
  }
  *(float *)(param_1 + 0x9c) = fVar11;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return (LARGE_INTEGER)LVar4.QuadPart;
}



// FUNCTION 142193af0 FUN_142193af0 body=7 status=ok
// SIG undefined FUN_142193af0(void)

void FUN_142193af0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}



// FUNCTION 142193b00 FUN_142193b00 body=189 status=ok
// SIG undefined FUN_142193b00(void)

undefined2 * FUN_142193b00(int *param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  
  puVar3 = *(undefined2 **)(param_1 + 6);
  param_2 = param_1[2] + param_1[1] + param_2;
  if (*param_1 <= param_2) {
    iVar5 = param_2 + 0x20;
    if (*param_1 == 0) {
      iVar5 = param_2;
    }
    *param_1 = iVar5;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)iVar5;
    uVar6 = SUB168(ZEXT816(2) * auVar4,0);
    if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    puVar7 = (undefined2 *)operator_new(uVar6);
    *(undefined2 **)(param_1 + 6) = puVar7;
    *puVar7 = 0;
    if (puVar3 != (undefined2 *)0x0) {
      if (param_1[1] != 0) {
        puVar8 = puVar7 + -1;
        do {
          psVar1 = puVar8 + 1;
          puVar8 = puVar8 + 1;
        } while (*psVar1 != 0);
        lVar9 = 0;
        do {
          sVar2 = puVar3[lVar9];
          puVar8[lVar9] = sVar2;
          lVar9 = lVar9 + 1;
        } while (sVar2 != 0);
      }
      FMemory::operator_delete(puVar3);
    }
    return puVar7;
  }
  return puVar3;
}



// FUNCTION 142193bc0 ResizeAllocation body=151 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<1,TSizedDefaultAllocator<32>_>::ForElementType<FStaticMeshSection>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (param_3 < 2) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x18);
    pvVar1 = *(void **)((longlong)param_1 + 0x18);
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
        *(void **)((longlong)param_1 + 0x18) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x18);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  return;
}



// FUNCTION 142193c60 ResizeAllocation body=161 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<8,FDefaultAllocator>::ForElementType<FBlendedCurve>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x100);
  if (param_3 < 9) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 5);
    pvVar1 = *(void **)((longlong)param_1 + 0x100);
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
        *(void **)((longlong)param_1 + 0x100) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 5);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x100) = uVar2;
  return;
}



// FUNCTION 142193d10 FUN_142193d10 body=115 status=ok
// SIG undefined FUN_142193d10(void)

void FUN_142193d10(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 5,0);
      iVar1 = (int)(uVar2 >> 5);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    FUN_140a6fd60(param_1,0,iVar1,0x20);
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  return;
}



// FUNCTION 142193d90 FUN_142193d90 body=148 status=ok
// SIG undefined FUN_142193d90(void)

void FUN_142193d90(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 < 2) {
    iVar4 = 1;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x24) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x18,0);
    iVar4 = (int)(uVar3 / 0x18);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x24) = iVar4;
  TInlineAllocator<1,TSizedDefaultAllocator<32>_>::ForElementType<FStaticMeshSection>::
  ResizeAllocation(param_1,param_2,iVar4,0x18);
  return;
}



// FUNCTION 142193e30 ResizeGrow body=137 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FBlendedCurve,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (uVar1 < 9) {
    iVar2 = 8;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x10c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 5,0);
    iVar2 = (int)(uVar3 >> 5);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x10c) = iVar2;
  TInlineAllocator<8,FDefaultAllocator>::ForElementType<FBlendedCurve>::ResizeAllocation
            (param_1,param_2,iVar2,0x20);
  return;
}



// FUNCTION 142193ec0 ResizeShrink body=137 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if ((0x3fff < (ulonglong)((longlong)(iVar4 - iVar3) << 5)) || (iVar3 * 3 < iVar4 * 2)) {
    if (0x40 < (uint)(iVar4 - iVar3)) {
      if (0 < iVar3) {
        uVar1 = FMemory::QuantizeSize((longlong)iVar3 << 5,0);
        iVar4 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = (int)(uVar1 >> 5);
      }
      goto LAB_142193f1d;
    }
    if (iVar3 == 0) goto LAB_142193f1d;
  }
  iVar3 = iVar4;
LAB_142193f1d:
  if (iVar3 != iVar4) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 << 5,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 142193f50 ResizeTo body=101 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSharedPtr<FGameplayAbilityTargetData,0>,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>
     ::ResizeTo(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = iVar1;
    TInlineAllocator<1,TSizedDefaultAllocator<32>_>::
    ForElementType<TSharedPtr<FGameplayAbilityTargetData,0>_>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x18),iVar1,0x10);
  }
  return;
}



// FUNCTION 142193fc0 FUN_142193fc0 body=118 status=ok
// SIG undefined FUN_142193fc0(void)

void FUN_142193fc0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 2) {
      iVar2 = 1;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = iVar2;
    TInlineAllocator<1,TSizedDefaultAllocator<32>_>::ForElementType<FStaticMeshSection>::
    ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0x20),iVar2,0x18);
  }
  return;
}



// FUNCTION 142194040 FUN_142194040 body=494 status=ok
// SIG undefined FUN_142194040(void)

void FUN_142194040(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  puVar6 = *(undefined8 **)(*param_1 + 0xc0);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)(*param_1 + 0x20);
  }
  cVar3 = FUN_14218fd90(*puVar6);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aecfd8) && (_Init_thread_header(&DAT_146aecfd8), DAT_146aecfd8 == -1))
  {
    FName::FName(&DAT_146aecfd0,&DAT_144fdb7e8,1);
    _Init_thread_footer(&DAT_146aecfd8);
  }
  uVar5 = FUN_14218e190();
  plVar10 = (longlong *)
            ((ulonglong)(*(ulonglong *)(uVar5 + 0x100) != 0) - 1 & uVar5 |
            *(ulonglong *)(uVar5 + 0x100));
  plVar11 = plVar10 + (longlong)*(int *)(uVar5 + 0x108) * 4;
  uVar9 = DAT_146aeb080;
  do {
    if (plVar10 == plVar11) {
      return;
    }
    if (((cVar3 == '\0') || (lVar8 = *plVar10, lVar8 != DAT_146aecfd0)) &&
       (lVar8 = *plVar10, lVar8 != 0)) {
      lVar2 = *param_1;
      cVar4 = FUN_142184920(lVar2 + 0xe0,uVar9,lVar8);
      if (cVar4 != '\0') goto LAB_142194181;
      plVar7 = *(longlong **)(lVar2 + 0xc0);
      if (*(longlong **)(lVar2 + 0xc0) == (longlong *)0x0) {
        plVar7 = (longlong *)(lVar2 + 0x20);
      }
      plVar1 = plVar7 + (longlong)*(int *)(lVar2 + 200) * 5;
      for (; plVar7 != plVar1; plVar7 = plVar7 + 5) {
        cVar4 = FUN_142184920(*plVar7 + 0x18,uVar9,lVar8);
        if (cVar4 != '\0') goto LAB_142194181;
      }
    }
    else {
LAB_142194181:
      if ((((int)plVar10[3] != 0) && ((longlong *)plVar10[2] != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*(longlong *)plVar10[2] + 0x18))(), uVar9 = DAT_146aeb080,
         cVar4 != '\0')) {
        if ((int)plVar10[3] == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)plVar10[2];
        }
        (**(code **)(*plVar7 + 0x40))(plVar7,lVar8,param_1);
        uVar9 = DAT_146aeb080;
      }
    }
    plVar10 = plVar10 + 4;
  } while( true );
}



// FUNCTION 142194230 FUN_142194230 body=184 status=ok
// SIG undefined FUN_142194230(void)

undefined4 FUN_142194230(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong local_18 [2];
  
  iVar1 = FUN_141592950(param_2,&DAT_144042018,1,0,0xffffffff);
  if (iVar1 != -1) {
    local_18[0] = 0;
    local_18[1] = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],&DAT_144042018,4);
    FUN_1404e14f0(param_2,local_18,param_1 + 0x10,param_1,1,0);
    if (local_18[0] != 0) {
      FMemory::Free(local_18[0]);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1421942f0 FUN_1421942f0 body=8 status=ok
// SIG undefined FUN_1421942f0(void)

void FUN_1421942f0(void)

{
  DAT_146aeae15 = 1;
  return;
}



// FUNCTION 142194300 FUN_142194300 body=60 status=ok
// SIG undefined FUN_142194300(void)

void FUN_142194300(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  if (((param_2 == DAT_146aeb088) || (param_2 == DAT_146aeb080)) || (param_2 == DAT_146aeb090)) {
    local_res18[0] = param_3;
    lVar1 = FUN_14218d390();
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar1 + 8,local_res18);
  }
  return;
}



// FUNCTION 142194340 FUN_142194340 body=64 status=ok
// SIG undefined FUN_142194340(void)

void FUN_142194340(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  param_1[1] = *param_2;
  param_1[2] = iVar1;
  param_1[3] = iVar2;
  param_1[4] = iVar3;
  if (((param_2[3] == 0 && param_2[2] == 0) && param_2[1] == 0) && *param_2 == 0) {
    *param_1 = 0xffffffff;
    return;
  }
  uVar4 = FCrc::MemCrc_DEPRECATED(param_1 + 1,0x10);
  *param_1 = uVar4;
  return;
}



// FUNCTION 142194380 FUN_142194380 body=212 status=ok
// SIG undefined FUN_142194380(void)

void FUN_142194380(longlong *param_1,short param_2,char param_3,byte param_4,byte param_5)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = (short)param_1[3];
  if (param_2 == sVar1) {
    return;
  }
  uVar2 = *(ushort *)((longlong)param_1 + 0x1a) & 1;
  if (param_3 == '\0') {
    if (uVar2 != 0) {
      FUN_142195dd0(param_1);
      *(ushort *)((longlong)param_1 + 0x1a) = *(ushort *)((longlong)param_1 + 0x1a) & 0xfffe;
      goto LAB_142194414;
    }
  }
  else if (uVar2 == 0) {
    if (sVar1 != 0) {
      param_1[2] = 0;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(ushort *)((longlong)param_1 + 0x1a) = *(ushort *)((longlong)param_1 + 0x1a) | 1;
    goto LAB_142194414;
  }
  if (sVar1 != 0) {
    if ((uVar2 != 0) && (*param_1 != 0)) {
      FMemory::Free();
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
LAB_142194414:
  *(ushort *)((longlong)param_1 + 0x1a) = *(ushort *)((longlong)param_1 + 0x1a) & 0xfffd;
  *(short *)(param_1 + 3) = param_2;
  *(ushort *)((longlong)param_1 + 0x1a) =
       ((ushort)param_4 * 2 | *(ushort *)((longlong)param_1 + 0x1a)) & 0xfffb | (ushort)param_5 << 2
  ;
  return;
}



// FUNCTION 142194460 FUN_142194460 body=436 status=ok
// SIG undefined FUN_142194460(void)

undefined1 * FUN_142194460(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 local_res8;
  char local_res9;
  ulonglong local_res20;
  longlong local_48 [2];
  undefined4 local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  undefined8 *local_20;
  
  if (*(char *)((longlong)param_1 + 0x11) != '\0') {
    param_2[1] = 0;
    if (*(char *)((longlong)param_1 + 0x11) == '\0') {
      return param_2;
    }
    *param_2 = (char)param_1[2];
    param_2[1] = 1;
    return param_2;
  }
  local_res9 = '\0';
  lVar4 = *(longlong *)(param_1[1] + 0x10);
  local_res20 = 0;
  if (lVar4 == 0) {
    lVar4 = FUN_14218d510();
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10);
  }
  bVar6 = lVar4 == DAT_146aeb018;
  local_20 = (undefined8 *)&local_res8;
  local_30[0] = bVar6;
  local_28 = param_1;
  if (*(char *)(*param_1 + 0x14) != '\0') {
    local_res20 = local_res20 & 0xffffffff00000000;
    iVar2 = *(int *)(*param_1 + 0x10);
    lVar4 = FUN_14218d510();
    if (iVar2 == 0) {
      uVar7 = false;
    }
    else if (iVar2 == 1) {
      uVar7 = true;
    }
    else {
      local_48[0] = lVar4 + 0x18;
      local_48[1] = 0x20;
      local_38 = 0xffffffff;
      if (iVar2 == 0) {
        iVar3 = std::
                _Rng_from_urng<unsigned_int,std::mersenne_twister_engine<unsigned_int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>_>
                ::_Get_all_bits();
      }
      else {
        iVar3 = std::
                _Rng_from_urng<unsigned_int,std::mersenne_twister_engine<unsigned_int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>_>
                ::operator()(local_48,iVar2);
      }
      uVar7 = iVar3 + 1 == iVar2;
    }
    if (!bVar6) {
      puVar1 = (ulonglong *)(param_1 + 2);
      if (&local_res20 != puVar1) {
        *(undefined1 *)puVar1 = uVar7;
        *(undefined1 *)((longlong)param_1 + 0x11) = 1;
      }
      if ((puVar1 == (ulonglong *)&local_res8) ||
         (local_res9 = '\0', *(char *)((longlong)param_1 + 0x11) == '\0')) goto LAB_1421945b9;
      uVar7 = (char)*puVar1;
    }
    local_res8 = uVar7;
    local_res9 = '\x01';
  }
LAB_1421945b9:
  if ((param_3 != 0) && (local_res9 == '\0')) {
    uVar5 = FUN_142194460(param_3,&local_res20,0);
    FUN_142181710(local_30,uVar5);
  }
  param_2[1] = 0;
  if (local_res9 != '\0') {
    *param_2 = local_res8;
    param_2[1] = 1;
  }
  return param_2;
}



// FUNCTION 142194620 FUN_142194620 body=139 status=ok
// SIG undefined FUN_142194620(void)

ulonglong FUN_142194620(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 local_res10;
  
  uVar1 = FUN_142190080();
  if ((char)uVar1 != '\0') {
    local_res10 = 0xd3;
    if (*(longlong *)(param_1 + 0x28) == 0xd3) {
LAB_14219466d:
      FUN_142194460(param_1 + 0x68,&local_res10,DAT_146aeb040);
      uVar3 = 0;
      if (local_res10._1_1_ != '\0') {
        uVar3 = (uint)(byte)local_res10;
      }
      return (ulonglong)uVar3;
    }
    uVar3 = *(uint *)(param_1 + 0x88);
    uVar1 = (ulonglong)uVar3;
    if ((uVar3 != 0) && (uVar1 = (ulonglong)(uVar3 - 1), uVar3 - 1 != 0)) {
      uVar3 = *(uint *)(param_1 + 0x98);
      uVar1 = (ulonglong)uVar3;
      iVar2 = uVar3 - 1;
      if (uVar3 == 0) {
        iVar2 = 0;
      }
      if (iVar2 != 0) goto LAB_14219466d;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1421946b0 FUN_1421946b0 body=665 status=ok
// SIG undefined FUN_1421946b0(void)

void FUN_1421946b0(longlong param_1,undefined4 param_2)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  byte bVar13;
  ulonglong uVar14;
  LARGE_INTEGER local_res8;
  
  if ((*(byte *)(param_1 + 0x58) & 2) == 0) {
    return;
  }
  if (DAT_146aeae14 == '\0') {
    return;
  }
  lVar11 = *(longlong *)(param_1 + 0x30);
  cVar4 = FUN_142190080(lVar11);
  uVar10 = 0;
  if (cVar4 == '\0') {
LAB_142194730:
    bVar13 = 0;
  }
  else {
    local_res8.QuadPart = 0xd3;
    if (*(longlong *)(lVar11 + 0x28) != 0xd3) {
      if ((*(int *)(lVar11 + 0x88) != 0) && (*(int *)(lVar11 + 0x88) != 1)) {
        iVar7 = *(int *)(lVar11 + 0x98) + -1;
        if (*(int *)(lVar11 + 0x98) == 0) {
          iVar7 = 0;
        }
        if (iVar7 != 0) goto LAB_14219472c;
      }
      goto LAB_142194730;
    }
LAB_14219472c:
    bVar13 = 1;
  }
  bVar6 = *(byte *)(param_1 + 0x58);
  if (bVar13 != (bVar6 >> 2 & 1)) {
    *(byte *)(param_1 + 0x58) = bVar6 & 0xfb | bVar13 << 2;
    if (bVar13 != 0) goto LAB_142194767;
    FUN_142189710(param_1);
    bVar6 = *(byte *)(param_1 + 0x58);
  }
  if ((bVar6 & 4) == 0) {
    return;
  }
LAB_142194767:
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  iVar7 = *(int *)(param_1 + 0x2c);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x20) + -1;
  lVar11 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar9 = lVar11 << 4;
    bVar3 = false;
    do {
      lVar2 = *(longlong *)(param_1 + 0x18);
      if (((*(int *)(lVar9 + 8 + lVar2) == 0) ||
          (plVar12 = *(longlong **)(lVar9 + lVar2), plVar12 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar12 + 0x40))(plVar12,param_1,param_2), cVar4 == '\0')) {
        bVar3 = true;
      }
      lVar9 = lVar9 + -0x10;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
    iVar7 = *(int *)(param_1 + 0x2c);
  }
  *(int *)(param_1 + 0x2c) = iVar7 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x18),0);
  }
  if (0 < *(int *)(param_1 + 0xa8)) {
    bVar13 = 0;
    plVar12 = *(longlong **)(param_1 + 0xa0);
    uVar14 = (longlong)*(int *)(param_1 + 0xa8) & 0x1fffffffffffffff;
    if (plVar12 + *(int *)(param_1 + 0xa8) < plVar12) {
      uVar14 = uVar10;
    }
    if (uVar14 != 0) {
      do {
        lVar11 = *plVar12;
        uVar8 = *(uint *)(lVar11 + 0x98);
        *(uint *)(lVar11 + 0x98) = (uVar8 + 1 ^ uVar8) & 0x3fffffff ^ uVar8;
        if (((((*(byte *)(param_1 + 0x58) & 4) != 0) && ((*(byte *)(param_1 + 0x58) & 2) != 0)) &&
            ((DAT_146aeae14 != '\0' &&
             (fVar1 = *(float *)(*(longlong *)(param_1 + 0x100) + 0x10), 0.0 <= fVar1)))) &&
           ((QueryPerformanceCounter(&local_res8), fVar1 == 0.0 ||
            (fVar1 <= (float)(((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
                             DAT_1468e2430) - *(float *)(lVar11 + 0x9c))))) {
          uVar8 = *(uint *)(lVar11 + 0x98);
          uVar8 = (uVar8 * 2 ^ uVar8) & 0x7fffffff ^ uVar8 * 2;
          *(uint *)(lVar11 + 0x98) = uVar8;
          if (-1 < (int)uVar8) {
            FUN_1421938f0(lVar11);
          }
        }
        plVar12 = plVar12 + 1;
        uVar10 = uVar10 + 1;
        bVar13 = bVar13 | (byte)((uint)*(undefined4 *)(lVar11 + 0x98) >> 0x1f);
      } while (uVar10 != uVar14);
      if (bVar13 != 0) {
        FUN_14218b710(param_1,0);
      }
    }
  }
  return;
}



// FUNCTION 142194950 FUN_142194950 body=211 status=ok
// SIG undefined FUN_142194950(void)

undefined8 FUN_142194950(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_38 [6];
  
  if (DAT_146aeae14 != '\0') {
    lVar3 = 0;
    plVar4 = *(longlong **)(param_1 + 0x70);
    iVar2 = *(int *)(param_1 + 0x80) + -1;
    if (*(int *)(param_1 + 0x80) == 0) {
      iVar2 = 0;
    }
    plVar1 = plVar4 + ((int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f
                            ) + iVar2 / 3 + (iVar2 >> 0x1f));
    if (plVar4 != (longlong *)0x0) {
      lVar3 = *plVar4;
    }
    FUN_1421960e0((longlong *)(param_1 + 0x70),local_38);
    while (lVar3 != local_38[0]) {
      FUN_1421946b0(lVar3,param_2);
      lVar3 = lVar3 + 0x120;
      if ((plVar4 != plVar1) && (lVar3 == *plVar4 + 0x360)) {
        lVar3 = plVar4[1];
        plVar4 = plVar4 + 1;
      }
    }
    FUN_14218fa70(DAT_146aeb038);
  }
  return 1;
}



// FUNCTION 142194a30 PurgeUnreferencedMIDsTicker body=16 status=ok
// SIG undefined PurgeUnreferencedMIDsTicker(void)

undefined1 FTextRenderComponentMIDCache::PurgeUnreferencedMIDsTicker(void)

{
  FUN_1421954a0();
  return 1;
}



// FUNCTION 142194a40 FUN_142194a40 body=195 status=ok
// SIG undefined FUN_142194a40(void)

undefined1 FUN_142194a40(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  short *psVar3;
  undefined8 *puVar4;
  short *psVar5;
  undefined2 *puVar6;
  longlong local_18 [2];
  
  if (*(short *)(param_1 + 0x18) == 2) {
    return *param_1;
  }
  if (((byte)param_1[0x1a] >> 1 & 1) != 0) {
    psVar3 = (short *)FUN_14218bef0();
    iVar2 = 0;
    if ((*psVar3 != 0) && (iVar2 = 0, *(int *)(psVar3 + 0x50) != 0)) {
      psVar5 = (short *)0x0;
      if (*(longlong *)(psVar3 + 0x48) == 0) {
        psVar5 = psVar3 + 0x38;
      }
      if (psVar5 != (short *)0x0 || *(longlong *)(psVar3 + 0x48) != 0) {
        iVar2 = FUN_142182720(psVar3 + 0x30,param_1);
      }
    }
    return iVar2 != 0;
  }
  if (*(short *)(param_1 + 0x18) == 0x18) {
    puVar4 = (undefined8 *)FUN_1421799b0(param_1,local_18);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar4;
    }
    uVar1 = FToBoolHelper::FromCStringWide(puVar6);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    return uVar1;
  }
  return false;
}



// FUNCTION 142194b10 FUN_142194b10 body=45 status=ok
// SIG undefined FUN_142194b10(void)

undefined8 FUN_142194b10(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(param_1 + 8);
  FUN_142195950(param_2,*(undefined4 *)(param_1 + 0x10),local_res8);
  return param_2;
}



// FUNCTION 142194b40 FUN_142194b40 body=167 status=ok
// SIG undefined FUN_142194b40(void)

undefined8 * FUN_142194b40(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_18 [8];
  longlong *local_10;
  
  local_res8 = *(undefined8 *)(param_1 + 8);
  *param_2 = 0;
  param_2[1] = 0;
  if (*(char *)(param_1 + 0x14) != '\0') {
    local_res10 = local_res8;
    puVar5 = (undefined8 *)FUN_142195800(local_18,*(undefined4 *)(param_1 + 0x10),&local_res8);
    if (param_2 != puVar5) {
      *param_2 = *puVar5;
      *puVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,puVar5 + 1);
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
  }
  return param_2;
}



// FUNCTION 142194bf0 FUN_142194bf0 body=354 status=ok
// SIG undefined FUN_142194bf0(void)

undefined8 * FUN_142194bf0(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res8;
  longlong local_38;
  ulonglong local_30;
  undefined1 local_28 [16];
  
  psVar1 = *(short **)(param_1 + 8);
  puVar3 = (undefined8 *)operator_new(0x50);
  puVar4 = (undefined8 *)0x0;
  lVar7 = -1;
  puVar8 = puVar4;
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
    puVar8 = puVar3;
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = puVar8;
    puVar4 = puVar3;
  }
  *param_2 = puVar8;
  param_2[1] = puVar4;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar8,puVar8);
  local_38 = 0;
  local_30 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (psVar1[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_30 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,psVar1,(longlong)(int)uVar6 * 2);
  }
  uVar2 = *param_2;
  uVar5 = FUN_1421783b0(local_28,param_1 + 0x10,local_res8);
  FJsonObject::SetArrayField(uVar2,&local_38,uVar5);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_28);
  if (local_38 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142194d60 FUN_142194d60 body=354 status=ok
// SIG undefined FUN_142194d60(void)

undefined8 * FUN_142194d60(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res8;
  longlong local_38;
  ulonglong local_30;
  undefined1 local_28 [16];
  
  psVar1 = *(short **)(param_1 + 8);
  puVar3 = (undefined8 *)operator_new(0x50);
  puVar4 = (undefined8 *)0x0;
  lVar7 = -1;
  puVar8 = puVar4;
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
    puVar8 = puVar3;
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = puVar8;
    puVar4 = puVar3;
  }
  *param_2 = puVar8;
  param_2[1] = puVar4;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar8,puVar8);
  local_38 = 0;
  local_30 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (psVar1[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_30 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,psVar1,(longlong)(int)uVar6 * 2);
  }
  uVar2 = *param_2;
  uVar5 = FUN_142178720(local_28,param_1 + 0x10,local_res8);
  FJsonObject::SetArrayField(uVar2,&local_38,uVar5);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_28);
  if (local_38 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142194ed0 FUN_142194ed0 body=44 status=ok
// SIG undefined FUN_142194ed0(void)

undefined8 FUN_142194ed0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(param_1 + 8);
  FUN_142195aa0(param_2,*(undefined8 *)(param_1 + 0x10),local_res8);
  return param_2;
}



// FUNCTION 142194f00 FUN_142194f00 body=44 status=ok
// SIG undefined FUN_142194f00(void)

undefined8 FUN_142194f00(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(param_1 + 8);
  FUN_142195c80(param_2,*(undefined1 *)(param_1 + 0x10),local_res8);
  return param_2;
}



// FUNCTION 142194f30 FUN_142194f30 body=200 status=ok
// SIG undefined FUN_142194f30(void)

undefined8 * FUN_142194f30(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  short *psVar2;
  undefined8 *puVar3;
  short *psVar4;
  longlong *plVar5;
  longlong local_18 [2];
  
  psVar1 = (short *)FUN_14218bef0(*(undefined2 *)(param_1 + 0x18));
  psVar2 = (short *)0x0;
  if ((*psVar1 != 0) && (*(int *)(psVar1 + 0x28) != 0)) {
    psVar4 = psVar2;
    if (*(longlong *)(psVar1 + 0x20) == 0) {
      psVar4 = psVar1 + 0x10;
    }
    if (psVar4 != (short *)0x0 || *(longlong *)(psVar1 + 0x20) != 0) {
      if (*(int *)(psVar1 + 0x28) != 0) {
        plVar5 = *(longlong **)(psVar1 + 0x20);
        if (*(longlong **)(psVar1 + 0x20) == (longlong *)0x0) {
          plVar5 = (longlong *)(psVar1 + 0x10);
        }
        if (plVar5 != (longlong *)0x0) {
          psVar2 = (short *)(**(code **)(*plVar5 + 8))();
        }
      }
      puVar3 = (undefined8 *)(**(code **)(psVar1 + 8))(local_18,psVar2,param_1);
      *param_2 = 0;
      *param_2 = *puVar3;
      *puVar3 = 0;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar3 + 1);
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
      puVar3[1] = 0;
      if (local_18[0] == 0) {
        return param_2;
      }
      FMemory::Free();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142195000 FUN_142195000 body=359 status=ok
// SIG undefined FUN_142195000(void)

void FUN_142195000(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x90);
  lVar4 = (longlong)*(int *)(param_1 + 0x98) * 0x30 + lVar6;
  if (lVar6 != lVar4) {
    piVar3 = (int *)(lVar6 + 0x28);
    do {
      if (piVar3[1] != *piVar3) {
        FUN_142193fc0(piVar3 + -8);
      }
      lVar6 = lVar6 + 0x30;
      piVar3 = piVar3 + 0xc;
    } while (lVar6 != lVar4);
  }
  plVar7 = *(longlong **)(param_1 + 0xa0);
  plVar1 = plVar7 + *(int *)(param_1 + 0xa8);
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar6 = *plVar7;
    lVar4 = *(longlong *)(lVar6 + 0xb8);
    iVar2 = *(int *)(lVar6 + 0xc0);
    lVar5 = (longlong)iVar2 * 0x30 + lVar4;
    if (lVar4 != lVar5) {
      piVar3 = (int *)(lVar4 + 0x28);
      do {
        if (piVar3[1] != *piVar3) {
          TArray<TSharedPtr<FGameplayAbilityTargetData,0>,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>
          ::ResizeTo(piVar3 + -6);
        }
        lVar4 = lVar4 + 0x30;
        piVar3 = piVar3 + 0xc;
      } while (lVar4 != lVar5);
      iVar2 = *(int *)(lVar6 + 0xc0);
    }
    if (*(int *)(lVar6 + 0xc4) != iVar2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(lVar6 + 0xb8);
    }
  }
  if (*(int *)(param_1 + 0x9c) != *(int *)(param_1 + 0x98)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo((longlong *)(param_1 + 0x90));
  }
  if (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xa8)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0xa0));
  }
  if (*(int *)(param_1 + 0xbc) != *(int *)(param_1 + 0xb8)) {
    TArray<float,FDefaultAllocator>::ResizeTo();
    return;
  }
  return;
}



// FUNCTION 142195170 FUN_142195170 body=742 status=ok
// SIG undefined FUN_142195170(void)

undefined8 FUN_142195170(int *param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  int *piVar14;
  uint *puVar15;
  uint uVar16;
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
  
  if (param_2 != 0) {
    if (*param_1 != 0) {
      iVar9 = param_1[0x28];
      param_1[0x28] = iVar9 + 1;
      if (param_1[0x29] < iVar9 + 1) {
        TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                  (param_1 + 0x16,iVar9);
      }
      piVar14 = *(int **)(param_1 + 0x26);
      if (*(int **)(param_1 + 0x26) == (int *)0x0) {
        piVar14 = param_1 + 0x16;
      }
      *(longlong *)(piVar14 + (longlong)iVar9 * 2) = param_2;
      return 1;
    }
    plVar1 = (longlong *)(param_1 + 2);
    uStack_84 = 1;
    uVar3 = param_1[0xc];
    puVar2 = (uint *)(param_1 + 6);
    local_88 = 0;
    uStack_74 = 0;
    iStack_70 = 0;
    if (uVar3 != 0) {
      puVar15 = *(uint **)(param_1 + 10);
      if (*(uint **)(param_1 + 10) == (uint *)0x0) {
        puVar15 = puVar2;
      }
      uVar4 = *puVar15;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar4 == 0) {
        lVar12 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar9 = local_88 + 1;
        bVar7 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar9;
        if (bVar7) goto LAB_14219528c;
        uVar4 = puVar15[lVar12 + 1];
      }
      uStack_84 = -uVar4 & uVar4;
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
      if ((int)uVar3 < (int)uStack_74) {
LAB_14219528c:
        uStack_74 = uVar3;
      }
    }
    uVar4 = param_1[0xc];
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_74;
    local_48 = CONCAT44(uStack_6c,iStack_70);
    uStack_38 = CONCAT44(uStack_84,local_88);
    uVar16 = uVar4 & 0xffffffe0;
    iStack_60 = local_88;
    uStack_5c = uStack_84;
    local_58 = puVar2;
    local_40 = plVar1;
    puStack_30 = puVar2;
    uStack_20 = local_48;
    uStack_28 = uStack_50;
    uStack_24 = uStack_4c;
    uStack_74 = uVar4;
    if (uVar4 != uVar3) {
      puVar15 = *(uint **)(param_1 + 10);
      if (*(uint **)(param_1 + 10) == (uint *)0x0) {
        puVar15 = puVar2;
      }
      uVar11 = puVar15[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar9 = (int)uVar4 >> 5;
      while (uVar11 == 0) {
        uVar16 = uVar16 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_142195352;
        uVar11 = puVar15[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar9 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_74 = (uVar16 - iVar9) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_142195352:
        uStack_74 = uVar3;
      }
    }
    while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
      lVar12 = *plVar1 + (longlong)(int)uStack_4c * 0x28;
      plVar5 = *(longlong **)(*plVar1 + 8 + (longlong)(int)uStack_4c * 0x28);
      for (plVar13 = plVar5; plVar13 != plVar5 + (longlong)*(int *)(lVar12 + 0x10) * 4;
          plVar13 = plVar13 + 4) {
        if (*plVar13 == param_2) {
          iVar9 = (int)((longlong)plVar13 - (longlong)plVar5 >> 5);
          if (iVar9 != -1) {
            TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar5 + (longlong)iVar9 * 4 + 1);
            iVar10 = *(int *)(lVar12 + 0x10);
            iVar8 = (iVar10 - iVar9) + -1;
            if (iVar8 != 0) {
              lVar6 = *(longlong *)(lVar12 + 8);
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar6 + (longlong)iVar9 * 0x20),
                         (void *)((longlong)(iVar9 + 1) * 0x20 + lVar6),(longlong)iVar8 << 5);
              iVar10 = *(int *)(lVar12 + 0x10);
            }
            *(int *)(lVar12 + 0x10) = iVar10 + -1;
            TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink((longlong *)(lVar12 + 8));
            return 1;
          }
          break;
        }
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
  }
  return 0;
}



// FUNCTION 142195460 FUN_142195460 body=57 status=ok
// SIG undefined FUN_142195460(void)

void FUN_142195460(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = FUN_14218be80();
    FUN_142195170(uVar2,lVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1421954a0 FUN_1421954a0 body=359 status=ok
// SIG undefined FUN_1421954a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1421954a0(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aed2b8) && (_Init_thread_header(&DAT_146aed2b8), DAT_146aed2b8 == -1))
  {
    uVar6 = FUN_14164ab60();
    FUN_14158c9d0(&DAT_146aed2a0,L"Telemetry_FUpdateTicker",0x41200000,uVar6);
    _DAT_146aed2a0 = &PTR__scalar_deleting_destructor__144fdd050;
    atexit((_func_5014 *)&LAB_143ea70c0);
    _Init_thread_footer(&DAT_146aed2b8);
  }
  if (((DAT_146aeae10 == 0) && (DAT_146aeb1c0 != 0)) && (DAT_146aeb1c0 != 1)) {
    cVar9 = '\x01';
  }
  else {
    cVar9 = '\0';
  }
  if (cVar9 != DAT_146aeae14) {
    DAT_146aeae14 = cVar9;
    plVar5 = (longlong *)FUN_14218dd00();
    bVar2 = false;
    *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
    iVar7 = *(int *)((longlong)plVar5 + 0x14);
    iVar4 = (int)plVar5[1] + -1;
    lVar10 = (longlong)iVar4;
    if (-1 < iVar4) {
      lVar8 = lVar10 << 4;
      bVar2 = false;
      do {
        if (((*(int *)(lVar8 + 8 + *plVar5) == 0) ||
            (plVar1 = *(longlong **)(lVar8 + *plVar5), plVar1 == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,cVar9), cVar3 == '\0')) {
          bVar2 = true;
        }
        lVar8 = lVar8 + -0x10;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
      iVar7 = *(int *)((longlong)plVar5 + 0x14);
    }
    *(int *)((longlong)plVar5 + 0x14) = iVar7 + -1;
    if (bVar2) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,0);
    }
  }
  return;
}



// FUNCTION 142195610 FUN_142195610 body=474 status=ok
// SIG undefined FUN_142195610(void)

void FUN_142195610(float *param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = rand();
  fVar3 = *param_1;
  if ((param_2 <= fVar3) || ((float)iVar1 * 3.051851e-05 <= 1.0 - param_3)) {
    if ((param_2 < fVar3) && (param_3 < (float)iVar1 * 3.051851e-05)) {
      fVar2 = ABS(param_1[1]);
      if (*(char *)(param_1 + 2) < '\0') {
        if (fVar2 < 1000.0) {
          if (fVar2 < 10.0) {
            fVar2 = 1.0;
          }
          else {
            fVar2 = fVar2 * 0.25;
          }
        }
      }
      else {
        if (fVar2 < 1000.0) {
          if (fVar2 < 10.0) {
            fVar2 = 1.0;
          }
          else {
            fVar2 = fVar2 * 0.25;
          }
        }
        fVar2 = -fVar2;
      }
      fVar2 = param_1[1] + fVar2;
      param_1[1] = fVar2;
      if (fVar2 <= 0.0) {
        fVar2 = param_4;
      }
      fVar3 = fVar3 - fVar2;
      *param_1 = fVar3;
      if (fVar3 < param_2) {
        param_1[1] = (fVar3 - param_2) + param_1[1];
        *param_1 = param_2;
      }
      if (('\0' < *(char *)(param_1 + 2)) && (param_4 < param_1[1])) {
        param_1[1] = param_4;
      }
      *(undefined1 *)(param_1 + 2) = 0xff;
    }
  }
  else {
    fVar2 = ABS(param_1[1]);
    if (*(char *)(param_1 + 2) < '\x01') {
      if (fVar2 < 1000.0) {
        if (fVar2 < 10.0) {
          fVar2 = 1.0;
        }
        else {
          fVar2 = fVar2 * 0.25;
        }
      }
      fVar2 = -fVar2;
    }
    else if (fVar2 < 1000.0) {
      if (fVar2 < 10.0) {
        fVar2 = 1.0;
      }
      else {
        fVar2 = fVar2 * 0.25;
      }
    }
    fVar2 = param_1[1] + fVar2;
    param_1[1] = fVar2;
    if (fVar2 <= 0.0) {
      fVar2 = param_4;
    }
    fVar2 = fVar2 + fVar3;
    *param_1 = fVar2;
    if (param_2 < fVar2) {
      param_1[1] = (param_2 - fVar2) + param_1[1];
      *param_1 = param_2;
    }
    if ((*(char *)(param_1 + 2) < '\0') && (param_4 < param_1[1])) {
      param_1[1] = param_4;
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



// FUNCTION 1421957f0 FUN_1421957f0 body=11 status=ok
// SIG undefined FUN_1421957f0(void)

void FUN_1421957f0(longlong param_1)

{
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 0x40000000;
  return;
}



// FUNCTION 142195800 FUN_142195800 body=326 status=ok
// SIG undefined FUN_142195800(void)

undefined8 * FUN_142195800(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  short *psVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_28;
  ulonglong local_20;
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  lVar6 = -1;
  puVar4 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[7] = 0;
    puVar2[9] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    puVar4 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar4;
    puVar3 = puVar2;
  }
  *param_1 = puVar4;
  param_1[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar4,puVar4);
  psVar1 = (short *)*param_3;
  local_28 = 0;
  local_20 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (psVar1[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_20 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)(int)uVar5 * 2);
  }
  FUN_1416b32b0(*param_1,&local_28,(double)param_2);
  if (local_28 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142195950 FUN_142195950 body=334 status=ok
// SIG undefined FUN_142195950(void)

undefined8 * FUN_142195950(undefined8 *param_1,float param_2,undefined8 *param_3)

{
  short *psVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_28;
  ulonglong local_20;
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  lVar6 = -1;
  puVar4 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[7] = 0;
    puVar2[9] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    puVar4 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar4;
    puVar3 = puVar2;
  }
  *param_1 = puVar4;
  param_1[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar4,puVar4);
  psVar1 = (short *)*param_3;
  local_28 = 0;
  local_20 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (psVar1[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_20 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)(int)uVar5 * 2);
  }
  FUN_1416b32b0(*param_1,&local_28,(double)param_2);
  if (local_28 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142195aa0 FUN_142195aa0 body=473 status=ok
// SIG undefined FUN_142195aa0(void)

longlong ** FUN_142195aa0(longlong **param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong local_res10;
  longlong local_58;
  ulonglong local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38 [2];
  
  plVar7 = (longlong *)0x0;
  *param_1 = (longlong *)0x0;
  param_1[1] = (longlong *)0x0;
  if (param_2 != 0) {
    local_res10 = param_2;
    plVar5 = (longlong *)operator_new(0x50);
    lVar10 = -1;
    plVar8 = plVar7;
    if (plVar5 != (longlong *)0x0) {
      plVar5[2] = 0;
      plVar5[3] = 0;
      plVar5[7] = 0;
      plVar5[9] = 0;
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[4] = 0;
      plVar5[5] = 0;
      *(undefined4 *)(plVar5 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)plVar5 + 0x34) = 0;
      plVar5[8] = 0;
      plVar8 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f60d28;
      plVar5[2] = (longlong)plVar8;
      plVar7 = plVar5;
    }
    local_48 = plVar8;
    local_40 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_48,plVar8,plVar8);
    if (param_1 != &local_48) {
      *param_1 = plVar8;
      local_48 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&local_40);
      plVar7 = local_40;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
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
    psVar3 = (short *)*param_3;
    local_58 = 0;
    local_50 = 0;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      do {
        lVar10 = lVar10 + 1;
      } while (psVar3[lVar10] != 0);
      uVar9 = (int)lVar10 + 1;
      local_50 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      }
      FGenericPlatformString::Memcpy(local_58,psVar3,(longlong)(int)uVar9 * 2);
    }
    plVar7 = *param_1;
    uVar6 = FName::ToString(&local_res10,local_38);
    FJsonObject::SetStringField(plVar7,&local_58,uVar6);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 142195c80 FUN_142195c80 body=330 status=ok
// SIG undefined FUN_142195c80(void)

undefined8 * FUN_142195c80(undefined8 *param_1,byte param_2,undefined8 *param_3)

{
  short *psVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_28;
  ulonglong local_20;
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  lVar6 = -1;
  puVar4 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[7] = 0;
    puVar2[9] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    puVar4 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar4;
    puVar3 = puVar2;
  }
  *param_1 = puVar4;
  param_1[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar4,puVar4);
  psVar1 = (short *)*param_3;
  local_28 = 0;
  local_20 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (psVar1[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_20 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)(int)uVar5 * 2);
  }
  FUN_1416b32b0(*param_1,&local_28,(double)param_2);
  if (local_28 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142195dd0 FUN_142195dd0 body=54 status=ok
// SIG undefined FUN_142195dd0(void)

void FUN_142195dd0(longlong *param_1)

{
  if ((short)param_1[3] != 0) {
    if (((*(byte *)((longlong)param_1 + 0x1a) & 1) != 0) && (*param_1 != 0)) {
      FMemory::Free();
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 142195e10 _Get_all_bits body=504 status=ok
// SIG undefined _Get_all_bits(void)

uint std::
     _Rng_from_urng<unsigned_int,std::mersenne_twister_engine<unsigned_int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>_>
     ::_Get_all_bits(undefined8 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar9 = param_1[1];
  uVar7 = 0;
  uVar6 = 0;
  do {
    cVar3 = (char)lVar9;
    do {
      puVar2 = (uint *)*param_1;
      uVar8 = *puVar2;
      if (uVar8 == 0x270) {
        lVar9 = 0x270;
        puVar4 = puVar2 + 2;
        do {
          uVar8 = (puVar4[-1] ^ *puVar4) & 0x7fffffff ^ puVar4[-1];
          puVar4[0x26f] = -(uint)((uVar8 & 1) != 0) & 0x9908b0df ^ puVar4[0x18c] ^ uVar8 >> 1;
          lVar9 = lVar9 + -1;
          puVar4 = puVar4 + 1;
        } while (lVar9 != 0);
        uVar8 = *puVar2;
      }
      else if (0x4df < uVar8) {
        lVar9 = 0xe3;
        uVar8 = puVar2[0x271];
        puVar4 = puVar2 + 0x271;
        do {
          puVar1 = puVar4 + 1;
          uVar5 = (uVar8 ^ *puVar1) & 0x7fffffff ^ uVar8;
          uVar8 = *puVar1;
          puVar4[-0x270] = -(uint)((uVar5 & 1) != 0) & 0x9908b0df ^ puVar4[0x18d] ^ uVar5 >> 1;
          lVar9 = lVar9 + -1;
          puVar4 = puVar1;
        } while (lVar9 != 0);
        lVar9 = 0x18c;
        uVar8 = puVar2[0x354];
        puVar4 = puVar2 + 0x354;
        do {
          puVar1 = puVar4 + 1;
          uVar5 = (uVar8 ^ *puVar1) & 0x7fffffff ^ uVar8;
          uVar8 = *puVar1;
          puVar4[-0x270] = -(uint)((uVar5 & 1) != 0) & 0x9908b0df ^ puVar4[-0x353] ^ uVar5 >> 1;
          lVar9 = lVar9 + -1;
          puVar4 = puVar1;
        } while (lVar9 != 0);
        uVar8 = (puVar2[0x4e0] ^ puVar2[1]) & 0x7fffffff ^ puVar2[0x4e0];
        puVar2[0x270] = -(uint)((uVar8 & 1) != 0) & 0x9908b0df ^ puVar2[0x18d] ^ uVar8 >> 1;
        uVar8 = 0;
        *puVar2 = 0;
      }
      uVar5 = puVar2[(ulonglong)uVar8 + 1];
      *puVar2 = uVar8 + 1;
      uVar5 = uVar5 ^ puVar2[0x4e1] & uVar5 >> 0xb;
      uVar5 = uVar5 ^ (uVar5 & 0xff3a58ad) << 7;
      uVar5 = uVar5 ^ (uVar5 & 0xffffdf8c) << 0xf;
      uVar5 = uVar5 >> 0x12 ^ uVar5;
    } while (*(uint *)(param_1 + 2) < uVar5);
    lVar9 = param_1[1];
    uVar7 = (uVar7 << (cVar3 - 1U & 0x1f)) * 2 | uVar5;
    uVar6 = uVar6 + lVar9;
  } while (uVar6 < 0x20);
  return uVar7;
}



// FUNCTION 142196010 FUN_142196010 body=202 status=ok
// SIG undefined FUN_142196010(void)

longlong * FUN_142196010(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = (int)param_1[2];
  lVar6 = 0;
  iVar5 = 0;
  if ((iVar7 == 0) || (iVar5 = iVar7 / 5, iVar7 != iVar5 * 5)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  lVar2 = *param_1;
  iVar3 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar3 = 0;
  }
  plVar1 = (longlong *)(lVar2 + (((uVar4 ^ 1) - 1) + (longlong)iVar5) * 8);
  if (plVar1 != (longlong *)0x0) {
    if ((char)uVar4 == '\0') {
      iVar7 = iVar7 + iVar5 * -5;
    }
    else {
      iVar7 = 5;
    }
    lVar6 = (longlong)iVar7 * 0xc0 + *plVar1;
  }
  param_2[1] = (longlong)plVar1;
  *param_2 = lVar6;
  param_2[2] = lVar2 + (longlong)(iVar3 / 5) * 8;
  return param_2;
}



// FUNCTION 1421960e0 FUN_1421960e0 body=195 status=ok
// SIG undefined FUN_1421960e0(void)

longlong * FUN_1421960e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = (int)param_1[2];
  lVar6 = 0;
  iVar5 = 0;
  if ((iVar7 == 0) || (iVar5 = iVar7 / 3, iVar7 != iVar5 * 3)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  lVar2 = *param_1;
  iVar3 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar3 = 0;
  }
  plVar1 = (longlong *)(lVar2 + (((uVar4 ^ 1) - 1) + (longlong)iVar5) * 8);
  if (plVar1 != (longlong *)0x0) {
    if ((char)uVar4 == '\0') {
      iVar7 = iVar7 + iVar5 * -3;
    }
    else {
      iVar7 = 3;
    }
    lVar6 = (longlong)iVar7 * 0x120 + *plVar1;
  }
  param_2[1] = (longlong)plVar1;
  *param_2 = lVar6;
  param_2[2] = lVar2 + (longlong)
                       ((int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >>
                             0x1f) + iVar3 / 3 + (iVar3 >> 0x1f)) * 8;
  return param_2;
}



// FUNCTION 1421961b0 Exec body=178 status=ok
// SIG undefined Exec(void)

undefined1
FMessagingModule::Exec(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  cVar1 = FParse::Command(local_res18,L"MESSAGING",1);
  if (cVar1 != '\0') {
    cVar1 = FParse::Command(local_res18,L"STATUS",1);
    if (cVar1 == '\0') {
      FOutputDevice::Log(param_4,L"Usage: MESSAGING <Command>");
      FOutputDevice::Log(param_4,&DAT_143f3eda8);
      FOutputDevice::Log(param_4,L"Command");
      pwVar2 = L"    STATUS = Displays the status of the default message bus";
    }
    else {
      pwVar2 = L"Default message bus has been initialized.";
      if (*(longlong *)(param_1 + 0x10) == 0) {
        pwVar2 = L"Default message bus has NOT been initialized yet.";
      }
    }
    FOutputDevice::Log(param_4,pwVar2);
    return 1;
  }
  return 0;
}



// FUNCTION 142196270 CreateBridge body=343 status=ok
// SIG undefined CreateBridge(void)

undefined8 *
FMessagingModule::CreateBridge
          (undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
          undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar3 = operator_new(0xe0);
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (lVar3 != 0) {
    local_18 = *param_3;
    uStack_14 = param_3[1];
    uStack_10 = param_3[2];
    uStack_c = param_3[3];
    plVar4 = (longlong *)FUN_142198e60(lVar3,&local_18,param_4,param_5);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar6 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143fd0100;
    plVar5[2] = (longlong)plVar4;
    plVar6 = plVar5;
  }
  *param_2 = plVar4;
  param_2[1] = plVar6;
  plVar5 = plVar4 + 4;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) {
          return param_2;
        }
      }
      plVar6 = (longlong *)param_2[1];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar4 = (longlong *)plVar5[1];
    if (plVar6 != plVar4) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar5[1];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar5[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1421963d0 FUN_1421963d0 body=433 status=ok
// SIG undefined FUN_1421963d0(void)

undefined8 * FUN_1421963d0(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar3 = (longlong *)operator_new(0x50);
  plVar7 = (longlong *)0x0;
  plVar5 = plVar7;
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (longlong)&PTR_FUN_144fdd650;
    plVar3[5] = *param_3;
    lVar4 = param_3[1];
    plVar3[6] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[9] = 2;
    lVar4 = operator_new(0x160);
    if (lVar4 != 0) {
      plVar5 = (longlong *)FMessageRouter::FMessageRouter(lVar4);
    }
    plVar3[3] = (longlong)plVar5;
    lVar4 = FUN_1415d42a0(plVar5,L"FMessageBus.Router",0x20000,0,0xffffffffffffffff);
    plVar3[4] = lVar4;
    plVar5 = plVar3;
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar3 = plVar7;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_14415b778;
    plVar6[2] = (longlong)plVar5;
    plVar3 = plVar6;
  }
  *param_2 = plVar5;
  param_2[1] = plVar3;
  plVar6 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  if (plVar6 != (longlong *)0x0) {
    if (*plVar6 != 0) {
      if (plVar6[1] != 0) {
        piVar1 = (int *)(plVar6[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) {
          return param_2;
        }
      }
      plVar3 = (longlong *)param_2[1];
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar5;
    plVar5 = (longlong *)plVar6[1];
    if (plVar3 != plVar5) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar6[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar6[1] = (longlong)plVar3;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  return param_2;
}



// FUNCTION 142196590 ShutdownModule body=277 status=ok
// SIG undefined ShutdownModule(void)

void FMessagingModule::ShutdownModule(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong local_38;
  longlong *aplStack_30 [3];
  
  plVar3 = *(longlong **)(param_1 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar7 = plVar3;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar7 = (longlong *)*plVar1;
    }
    (**(code **)(*plVar7 + 0x30))();
    local_38 = 0;
    aplStack_30[0] = (longlong *)0x0;
    if (plVar1 != &local_38) {
      *plVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,aplStack_30);
      plVar1 = aplStack_30[0];
      if (aplStack_30[0] != (longlong *)0x0) {
        LOCK();
        plVar7 = aplStack_30[0] + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*aplStack_30[0])(aplStack_30[0]);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*aplStack_30[0] + 8))(aplStack_30[0],1);
          }
        }
      }
    }
    while (plVar3 != (longlong *)0x0) {
      if (plVar4 == (longlong *)0x0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar4[1];
      if (iVar6 == 0) {
        *(int *)(plVar4 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (iVar6 < 1) break;
      FUN_1416b1760(0x3dcccccd);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 1421966b0 `scalar_deleting_destructor' body=143 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FMessagingModule::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  *(undefined ***)(param_1 + 8) = IModuleInterface::vftable;
  FSelfRegisteringExec::~FSelfRegisteringExec(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142196740 CreateRaw<FMessageRouter,FMessageAddress,TWeakPtr<IMessageReceiver,1>_> body=352 status=ok
// SIG undefined CreateRaw<FMessageRouter,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>(void)

undefined8 *
TBaseDelegate<TTypeWrapper<void>_>::
CreateRaw<FMessageRouter,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
          undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar7 = *param_3;
  uVar8 = param_3[1];
  plVar3 = (longlong *)param_5[1];
  uVar10 = *param_5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)operator_new(0x48,param_1);
  if (puVar9 != (undefined8 *)0x0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
      }
    }
    *puVar9 = &PTR_GetPoolName_144fdd8b8;
    puVar9[1] = param_2;
    puVar9[2] = uVar7;
    puVar9[3] = uVar8;
    uVar4 = param_4[1];
    uVar5 = param_4[2];
    uVar6 = param_4[3];
    *(undefined4 *)(puVar9 + 4) = *param_4;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar4;
    *(undefined4 *)(puVar9 + 5) = uVar5;
    *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar6;
    puVar9[6] = uVar10;
    puVar9[7] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[8] = uVar10;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    *puVar9 = &PTR_GetPoolName_144fdd900;
    if (plVar3 == (longlong *)0x0) goto LAB_142196860;
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
LAB_142196860:
  plVar3 = (longlong *)param_5[1];
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
  return param_1;
}



// FUNCTION 1421968a0 CreateRaw<FMessageRouter,TSharedRef<IMessageContext,1>_> body=271 status=ok
// SIG undefined CreateRaw<FMessageRouter,TSharedRef<IMessageContext,1>_>(void)

undefined8 *
TBaseDelegate<TTypeWrapper<void>_>::CreateRaw<FMessageRouter,TSharedRef<IMessageContext,1>_>
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar4 = (longlong *)param_4[1];
  uVar5 = *param_4;
  uVar6 = *param_3;
  uVar7 = param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar8 = operator_new(0x38,param_1);
  if (lVar8 != 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_38 = uVar5;
    local_30 = plVar4;
    local_28 = uVar6;
    uStack_20 = uVar7;
    TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageContext,1>_>
    ::
    TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageContext,1>_>
              (lVar8,param_2,&local_28,&local_38);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 1421969b0 CreateRaw<FMessageRouter,TSharedRef<IMessageInterceptor,1>,FName> body=284 status=ok
// SIG undefined CreateRaw<FMessageRouter,TSharedRef<IMessageInterceptor,1>,FName>(void)

undefined8 *
TBaseDelegate<TTypeWrapper<void>_>::
CreateRaw<FMessageRouter,TSharedRef<IMessageInterceptor,1>,FName>
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar4 = (longlong *)param_4[1];
  uVar5 = *param_4;
  uVar6 = *param_3;
  uVar7 = param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar8 = operator_new(0x40,param_1);
  if (lVar8 != 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_38 = uVar5;
    local_30 = plVar4;
    local_28 = uVar6;
    uStack_20 = uVar7;
    TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageInterceptor,1>,FName>
    ::
    TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageInterceptor,1>,FName>
              (lVar8,param_2,&local_28,&local_38,param_5);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 142196ad0 CreateRaw<FMessageRouter,TWeakPtr<IMessageReceiver,1>,FName> body=246 status=ok
// SIG undefined CreateRaw<FMessageRouter,TWeakPtr<IMessageReceiver,1>,FName>(void)

undefined8 *
TBaseDelegate<TTypeWrapper<void>_>::CreateRaw<FMessageRouter,TWeakPtr<IMessageReceiver,1>,FName>
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar3 = (longlong *)param_4[1];
  uVar4 = *param_4;
  uVar5 = *param_3;
  uVar6 = param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  lVar7 = operator_new(0x40,param_1);
  if (lVar7 != 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    local_38 = uVar4;
    local_30 = plVar3;
    local_28 = uVar5;
    uStack_20 = uVar6;
    TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TWeakPtr<IMessageReceiver,1>,FName>
    ::
    TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TWeakPtr<IMessageReceiver,1>,FName>
              (lVar7,param_2,&local_28,&local_38,param_5);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = (longlong *)param_4[1];
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
  return param_1;
}



// FUNCTION 142196bd0 Emplace<TKeyInitializer<FName_&&>_> body=447 status=ok
// SIG undefined Emplace<TKeyInitializer<FName_&&>_>(void)

int * TSet<TTuple<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_28;
  longlong *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,&local_28);
  plVar5 = local_20;
  *param_2 = (int)local_28;
  local_28 = 0;
  local_20 = (longlong *)0x0;
  *plVar5 = *(longlong *)*param_3;
  plVar5[1] = 0;
  plVar5[2] = 0;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
  *(undefined4 *)(plVar5 + 3) = 0xffffffff;
  bVar8 = false;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    lVar1 = *plVar5;
    if (iVar7 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)((longlong)iVar4 * 0x20 + *param_1) == lVar1) goto LAB_142196cac;
          iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_142196cac:
    bVar8 = iVar4 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar4 * 0x20 + *param_1);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>((longlong)_Dst + 8)
      ;
      ::_guard_xfg_dispatch_icall_nop(_Dst,plVar5,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_142196d64;
    }
  }
  cVar2 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7,0);
  if (cVar2 == '\0') {
    uVar6 = (int)((ulonglong)*plVar5 >> 0x20) + (int)*plVar5 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar5 + 0x1c) = uVar6;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(plVar5 + 3) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_142196d64:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 142196d90 FUN_142196d90 body=787 status=ok
// SIG undefined FUN_142196d90(void)

int * FUN_142196d90(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  void *_Dst;
  bool local_res8;
  
  iVar8 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar16 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar16);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar16 = (int)param_1[6];
    iVar10 = *(int *)((longlong)iVar16 * 0x20 + 4 + *param_1);
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar10 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar16;
  local_res8 = false;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar16 & 0x1f);
  plVar12 = (longlong *)((longlong)iVar16 * 0x20 + *param_1);
  lVar4 = *(longlong *)*param_3;
  *plVar12 = lVar4;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *(undefined4 *)(plVar12 + 3) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    iVar11 = iVar13;
    if (uVar15 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar7 +
                       ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar11 = iVar10;
          if (*(longlong *)((longlong)iVar10 * 0x20 + *param_1) == lVar4) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *param_1);
          iVar11 = iVar13;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar11 * 0x20 + *param_1);
      plVar7 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar12,0x18);
      iVar8 = *param_2;
      bVar5 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar8;
      }
      puVar9 = (undefined4 *)((longlong)iVar8 * 0x20 + *param_1);
      *puVar9 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar9[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_14219707a;
    }
  }
  if (3 < uVar15) {
    uVar6 = (uVar15 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar13;
    }
    uVar6 = (uVar15 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar6 == 0) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x1f' - (char)iVar13;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar15 = (int)((ulonglong)*plVar12 >> 0x20) + (int)*plVar12 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar12 + 0x1c) = uVar15;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar12 + 3) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar16;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14219707a:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1421970b0 FUN_1421970b0 body=740 status=ok
// SIG undefined FUN_1421970b0(void)

int * FUN_1421970b0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *_Src;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  undefined4 uVar18;
  int iVar19;
  char cVar20;
  bool local_res8;
  int local_res10 [2];
  longlong *local_res18;
  longlong local_res20;
  
  iVar19 = 1;
  uVar18 = 0xffffffff;
  local_res20 = param_4;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar14 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar15 = (longlong *)param_1[4];
  *param_2 = iVar14;
  local_res8 = false;
  if (plVar15 == (longlong *)0x0) {
    plVar15 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar15 +
                   (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar14 & 0x1f);
  _Src = (undefined4 *)(*param_1 + (longlong)iVar14 * 0x28);
  puVar5 = (undefined4 *)*local_res18;
  uVar8 = puVar5[1];
  uVar9 = puVar5[2];
  uVar10 = puVar5[3];
  *_Src = *puVar5;
  _Src[1] = uVar8;
  _Src[2] = uVar9;
  _Src[3] = uVar10;
  *(undefined8 *)(_Src + 4) = 0;
  *(undefined8 *)(_Src + 6) = 0;
  _Src[8] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    lVar17 = (longlong)local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      lVar6 = *param_1;
      plVar15 = *(longlong **)(lVar6 + 0x18 + lVar17 * 0x28);
      iVar19 = local_res10[0];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar15 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar19 = local_res10[0];
          if (iVar14 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
            iVar19 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar6 + lVar17 * 0x28),_Src,0x20);
      iVar14 = *param_2;
      bVar7 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar14;
      }
      lVar17 = *param_1;
      *(undefined4 *)(lVar17 + (longlong)iVar14 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar18 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar17 + 4 + (longlong)iVar14 * 0x28) = uVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar15 = (longlong *)param_1[4];
      *param_2 = iVar19;
      if (plVar15 == (longlong *)0x0) {
        plVar15 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar15 +
                       (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar7 | 1U >> 0x20 - bVar7);
      goto LAB_14219736f;
    }
  }
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar16) {
    uVar13 = (uVar16 >> 1) + 8;
    iVar19 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar19 == 0; iVar19 = iVar19 + -1) {
      }
    }
    iVar14 = 0x20;
    cVar20 = '\0';
    if (uVar13 != 0) {
      iVar14 = 0x1f - iVar19;
    }
    uVar13 = (uVar16 >> 1) + 7;
    iVar19 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar19 == 0; iVar19 = iVar19 + -1) {
      }
    }
    if (uVar13 != 0) {
      cVar20 = '\x1f' - (char)iVar19;
    }
    iVar19 = 1 << (~(byte)((iVar14 << 0x1a) >> 0x1f) & 0x20U - cVar20 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar19 <= (int)param_1[9])))) {
    iVar19 = *param_2;
    uVar16 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar16 = (int)param_1[9] - 1U & uVar16;
    _Src[9] = uVar16;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    _Src[8] = *(undefined4 *)
               ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         iVar19;
    local_res20 = param_4;
  }
  else {
    *(int *)(param_1 + 9) = iVar19;
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
    local_res20 = param_4;
  }
LAB_14219736f:
  if (local_res20 != 0) {
    *(bool *)local_res20 = local_res8;
  }
  return param_2;
}



// FUNCTION 1421973a0 FUN_1421973a0 body=569 status=ok
// SIG undefined FUN_1421973a0(void)

int * FUN_1421973a0(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  char cVar14;
  bool bVar15;
  int local_res8 [2];
  
  iVar13 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
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
  puVar3 = (undefined4 *)*param_3;
  bVar15 = false;
  uVar4 = *puVar3;
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puVar3 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x28);
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *puVar3 = uVar4;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  puVar3[8] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,puVar3);
    bVar15 = local_res8[0] != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8[0] * 0x28),puVar3,0x20)
      ;
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1421975b1;
    }
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar9 = (uVar12 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar14 = '\0';
    if (uVar9 != 0) {
      iVar11 = 0x1f - iVar13;
    }
    uVar9 = (uVar12 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar14 = '\x1f' - (char)iVar13;
    }
    iVar13 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    iVar13 = *param_2;
    uVar12 = FCrc::MemCrc_DEPRECATED(puVar3,0x10);
    uVar12 = (int)param_1[9] - 1U & uVar12;
    puVar3[9] = uVar12;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    puVar3[8] = *(undefined4 *)
                 ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1421975b1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 1421975e0 FUN_1421975e0 body=595 status=ok
// SIG undefined FUN_1421975e0(void)

int * FUN_1421975e0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *_Src;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  char cVar16;
  bool local_res8;
  int local_res10 [2];
  longlong *local_res18;
  
  iVar15 = 1;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar12;
  local_res8 = false;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar12 & 0x1f);
  _Src = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
  puVar4 = (undefined4 *)*local_res18;
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  *_Src = *puVar4;
  _Src[1] = uVar6;
  _Src[2] = uVar7;
  _Src[3] = uVar8;
  *(undefined8 *)(_Src + 4) = 0;
  *(undefined8 *)(_Src + 6) = 0;
  _Src[8] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    lVar14 = (longlong)local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      lVar5 = *param_1;
      plVar11 = *(longlong **)(lVar5 + 0x18 + lVar14 * 0x28);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar15 == 1) && (plVar11 != (longlong *)0x0)) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar5 + lVar14 * 0x28),_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res10[0];
      goto LAB_14219780d;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar10 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar12 = 0x20;
    cVar16 = '\0';
    if (uVar10 != 0) {
      iVar12 = 0x1f - iVar15;
    }
    uVar10 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar10 != 0) {
      cVar16 = '\x1f' - (char)iVar15;
    }
    iVar15 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar16 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar15 <= (int)param_1[9])))) {
    iVar15 = *param_2;
    uVar13 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar13 = (int)param_1[9] - 1U & uVar13;
    _Src[9] = uVar13;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    _Src[8] = *(undefined4 *)
               ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14219780d:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142197840 FUN_142197840 body=801 status=ok
// SIG undefined FUN_142197840(void)

uint * FUN_142197840(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  void *_Dst;
  ulonglong *puVar2;
  ulonglong *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  char cVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  uint local_res8 [2];
  ulonglong *local_res10;
  
  iVar10 = 1;
  uVar15 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar12 = *(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x28) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = uVar11;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  local_res10 = (ulonglong *)(*param_1 + (longlong)(int)uVar11 * 0x28);
  puVar2 = (ulonglong *)*param_3;
  puVar3 = (ulonglong *)param_3[1];
  *local_res10 = *puVar2;
  local_res10[1] = puVar2[1];
  puVar2[1] = 0;
  *puVar2 = 0;
  local_res10[2] = *puVar3;
  local_res10[3] = puVar3[1];
  puVar3[1] = 0;
  *puVar3 = 0;
  *(undefined4 *)(local_res10 + 4) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_res10);
    uVar6 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar16 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      _Dst = (void *)(*param_1 + lVar9 * 0x28);
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,local_res10,0x20);
      uVar11 = *param_2;
      bVar4 = (byte)uVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = uVar11;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + (longlong)(int)uVar11 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar9 + 4 + (longlong)(int)uVar11 * 0x28) = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = uVar6;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_142197b38;
    }
  }
  if (3 < uVar14) {
    uVar6 = (uVar14 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar12 = 0x20;
    cVar8 = '\0';
    if (uVar6 != 0) {
      iVar12 = 0x1f - iVar10;
    }
    uVar6 = (uVar14 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar8 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar10 = (int)(*local_res10 >> 4);
    uVar6 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar13 = -(uVar6 + iVar10) ^ uVar6 >> 0xd;
    uVar14 = (iVar10 - uVar6) - uVar13 ^ uVar13 >> 0xc;
    uVar6 = (uVar6 - uVar14) - uVar13 ^ uVar14 << 0x10;
    uVar13 = (uVar13 - uVar6) - uVar14 ^ uVar6 >> 5;
    uVar14 = (uVar14 - uVar6) - uVar13 ^ uVar13 >> 3;
    uVar6 = (uVar6 - uVar14) - uVar13 ^ uVar14 << 10;
    uVar14 = ((uVar13 - uVar6) - uVar14 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_res10 + 0x24) = uVar14;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_res10 + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142197b38:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142197b70 FUN_142197b70 body=761 status=ok
// SIG undefined FUN_142197b70(void)

int * FUN_142197b70(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *_Src;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  undefined4 uVar19;
  int iVar20;
  char cVar21;
  bool local_res8;
  int local_res10 [2];
  longlong *local_res18;
  longlong local_res20;
  
  iVar20 = 1;
  uVar19 = 0xffffffff;
  local_res20 = param_4;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar16 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar16);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar16 = (int)param_1[6];
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar16 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar15 = (longlong *)param_1[4];
  *param_2 = iVar16;
  local_res8 = false;
  if (plVar15 == (longlong *)0x0) {
    plVar15 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar15 +
                   (longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar16 & 0x1f);
  puVar5 = (undefined4 *)*local_res18;
  uVar9 = puVar5[1];
  uVar10 = puVar5[2];
  uVar11 = puVar5[3];
  _Src = (undefined4 *)(*param_1 + (longlong)iVar16 * 0x28);
  puVar6 = (undefined8 *)local_res18[1];
  *_Src = *puVar5;
  _Src[1] = uVar9;
  _Src[2] = uVar10;
  _Src[3] = uVar11;
  *(undefined8 *)(_Src + 4) = *puVar6;
  *(undefined8 *)(_Src + 6) = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  _Src[8] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    lVar18 = (longlong)local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      lVar7 = *param_1;
      plVar15 = *(longlong **)(lVar7 + 0x18 + lVar18 * 0x28);
      iVar20 = local_res10[0];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar15 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar16 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar20 = local_res10[0];
          if (iVar16 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
            iVar20 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar7 + lVar18 * 0x28),_Src,0x20);
      iVar16 = *param_2;
      bVar8 = (byte)iVar16 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar16;
      }
      lVar18 = *param_1;
      *(undefined4 *)(lVar18 + (longlong)iVar16 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar19 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar18 + 4 + (longlong)iVar16 * 0x28) = uVar19;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar16;
      plVar15 = (longlong *)param_1[4];
      *param_2 = iVar20;
      if (plVar15 == (longlong *)0x0) {
        plVar15 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar15 +
                       (longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar8 | 1U >> 0x20 - bVar8);
      goto LAB_142197e45;
    }
  }
  uVar17 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar17) {
    uVar14 = (uVar17 >> 1) + 8;
    iVar20 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    iVar16 = 0x20;
    cVar21 = '\0';
    if (uVar14 != 0) {
      iVar16 = 0x1f - iVar20;
    }
    uVar14 = (uVar17 >> 1) + 7;
    iVar20 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    if (uVar14 != 0) {
      cVar21 = '\x1f' - (char)iVar20;
    }
    iVar20 = 1 << (~(byte)((iVar16 << 0x1a) >> 0x1f) & 0x20U - cVar21 & 0x1f);
  }
  if (((int)uVar17 < 1) || (((int)param_1[9] != 0 && (iVar20 <= (int)param_1[9])))) {
    iVar20 = *param_2;
    uVar17 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar17 = (int)param_1[9] - 1U & uVar17;
    _Src[9] = uVar17;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    _Src[8] = *(undefined4 *)
               ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar20;
    local_res20 = param_4;
  }
  else {
    *(int *)(param_1 + 9) = iVar20;
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
    local_res20 = param_4;
  }
LAB_142197e45:
  if (local_res20 != 0) {
    *(bool *)local_res20 = local_res8;
  }
  return param_2;
}



// FUNCTION 142197e70 FUN_142197e70 body=759 status=ok
// SIG undefined FUN_142197e70(void)

int * FUN_142197e70(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *_Src;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  undefined4 uVar19;
  int iVar20;
  char cVar21;
  bool local_res8;
  int local_res10 [2];
  longlong *local_res18;
  longlong local_res20;
  
  iVar20 = 1;
  uVar19 = 0xffffffff;
  local_res20 = param_4;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar16 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar16);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar16 = (int)param_1[6];
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar16 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar15 = (longlong *)param_1[4];
  *param_2 = iVar16;
  if (plVar15 == (longlong *)0x0) {
    plVar15 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar15 +
                   (longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar16 & 0x1f);
  puVar5 = (undefined4 *)*local_res18;
  uVar9 = puVar5[1];
  uVar10 = puVar5[2];
  uVar11 = puVar5[3];
  _Src = (undefined4 *)(*param_1 + (longlong)iVar16 * 0x28);
  puVar6 = (undefined8 *)local_res18[1];
  *_Src = *puVar5;
  _Src[1] = uVar9;
  _Src[2] = uVar10;
  _Src[3] = uVar11;
  *(undefined8 *)(_Src + 4) = *puVar6;
  lVar18 = puVar6[1];
  *(longlong *)(_Src + 6) = lVar18;
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
  }
  _Src[8] = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    lVar18 = (longlong)local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      lVar7 = *param_1;
      plVar15 = *(longlong **)(lVar7 + 0x18 + lVar18 * 0x28);
      iVar20 = local_res10[0];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar15 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar16 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar20 = local_res10[0];
          if (iVar16 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
            iVar20 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar7 + lVar18 * 0x28),_Src,0x20);
      iVar16 = *param_2;
      bVar8 = (byte)iVar16 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar16;
      }
      lVar18 = *param_1;
      *(undefined4 *)(lVar18 + (longlong)iVar16 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar19 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar18 + 4 + (longlong)iVar16 * 0x28) = uVar19;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar16;
      plVar15 = (longlong *)param_1[4];
      *param_2 = iVar20;
      if (plVar15 == (longlong *)0x0) {
        plVar15 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar15 +
                       (longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar8 | 1U >> 0x20 - bVar8);
      goto LAB_142198143;
    }
  }
  uVar17 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar17) {
    uVar14 = (uVar17 >> 1) + 8;
    iVar20 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    iVar16 = 0x20;
    cVar21 = '\0';
    if (uVar14 != 0) {
      iVar16 = 0x1f - iVar20;
    }
    uVar14 = (uVar17 >> 1) + 7;
    iVar20 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    if (uVar14 != 0) {
      cVar21 = '\x1f' - (char)iVar20;
    }
    iVar20 = 1 << (~(byte)((iVar16 << 0x1a) >> 0x1f) & 0x20U - cVar21 & 0x1f);
  }
  if (((int)uVar17 < 1) || (((int)param_1[9] != 0 && (iVar20 <= (int)param_1[9])))) {
    iVar20 = *param_2;
    uVar17 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar17 = (int)param_1[9] - 1U & uVar17;
    _Src[9] = uVar17;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    _Src[8] = *(undefined4 *)
               ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar20;
    local_res20 = param_4;
  }
  else {
    *(int *)(param_1 + 9) = iVar20;
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
    local_res20 = param_4;
  }
LAB_142198143:
  if (local_res20 != 0) {
    *(bool *)local_res20 = local_res8;
  }
  return param_2;
}



// FUNCTION 142198170 FUN_142198170 body=791 status=ok
// SIG undefined FUN_142198170(void)

int * FUN_142198170(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  void *_Dst;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  bool local_res8;
  int local_res10 [2];
  
  iVar12 = 1;
  uVar16 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar14 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar14;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar14 * 0x28);
  puVar3 = (ulonglong *)*param_3;
  puVar4 = (ulonglong *)param_3[1];
  *_Src = *puVar3;
  uVar5 = puVar3[1];
  _Src[1] = uVar5;
  if (uVar5 != 0) {
    LOCK();
    *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
    UNLOCK();
  }
  _Src[2] = *puVar4;
  _Src[3] = puVar4[1];
  puVar4[1] = 0;
  *puVar4 = 0;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar13 != 1) {
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)local_res10[0] * 0x28);
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      iVar12 = *param_2;
      bVar7 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar12;
      }
      lVar6 = *param_1;
      *(undefined4 *)(lVar6 + (longlong)iVar12 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar6 + 4 + (longlong)iVar12 * 0x28) = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar10 = (longlong *)param_1[4];
      *param_2 = local_res10[0];
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar7 | 1U >> 0x20 - bVar7);
      goto LAB_14219845e;
    }
  }
  if (3 < uVar13) {
    uVar9 = (uVar13 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar14 = 0x20;
    cVar11 = '\0';
    if (uVar9 != 0) {
      iVar14 = 0x1f - iVar12;
    }
    uVar9 = (uVar13 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar11 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar14 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
    uVar15 = -(uVar9 + iVar12) ^ uVar9 >> 0xd;
    uVar13 = (iVar12 - uVar9) - uVar15 ^ uVar15 >> 0xc;
    uVar9 = (uVar9 - uVar13) - uVar15 ^ uVar13 << 0x10;
    uVar15 = (uVar15 - uVar9) - uVar13 ^ uVar9 >> 5;
    uVar13 = (uVar13 - uVar9) - uVar15 ^ uVar15 >> 3;
    uVar9 = (uVar9 - uVar13) - uVar15 ^ uVar13 << 10;
    uVar13 = ((uVar15 - uVar9) - uVar13 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar13;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14219845e:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142198490 FUN_142198490 body=534 status=ok
// SIG undefined FUN_142198490(void)

void FUN_142198490(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined8 uStack_70;
  uint *local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar11 = (int)param_2[1];
  if (iVar11 != 0) {
    plVar8 = (longlong *)(*param_2 + 8);
    do {
      plVar5 = (longlong *)*plVar8;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      plVar8 = plVar8 + 2;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar12) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar12);
  }
  iVar11 = (int)param_1[5];
  local_68 = (uint *)(param_1 + 2);
  local_98 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar11 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_68;
    }
    uVar4 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar12 = local_98 + 1;
      bVar6 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar12;
      if (bVar6) goto LAB_1421985ce;
      uVar4 = puVar9[lVar7 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar12 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    iStack_84 = (iStack_80 - iVar12) + 0x1f;
    if (iVar11 < iStack_84) {
LAB_1421985ce:
      iStack_84 = iVar11;
    }
  }
  uStack_70 = CONCAT44(uStack_94,local_98);
  uStack_38 = 0xffffffff;
  iStack_34 = iStack_84;
  iStack_30 = iStack_80;
  uStack_60 = 0xffffffff;
  iStack_5c = iStack_84;
  local_58 = iStack_80;
  local_50 = param_1;
  uStack_48 = uStack_70;
  puStack_40 = local_68;
  if (iStack_84 < iVar11) {
    do {
      iVar12 = iStack_5c;
      iVar11 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar11 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar11);
      }
      puVar10 = (undefined8 *)((longlong)iVar11 * 0x10 + *param_2);
      if (puVar10 != (undefined8 *)0x0) {
        lVar7 = *param_1;
        *puVar10 = *(undefined8 *)(lVar7 + 0x10 + (longlong)iVar12 * 0x28);
        lVar7 = *(longlong *)(lVar7 + 0x18 + (longlong)iVar12 * 0x28);
        puVar10[1] = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
      }
      uStack_60 = uStack_60 & ~uStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
  }
  return;
}



// FUNCTION 1421986b0 FUN_1421986b0 body=424 status=ok
// SIG undefined FUN_1421986b0(void)

void FUN_1421986b0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  undefined8 uStack_50;
  uint *local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  longlong *local_30;
  undefined8 uStack_28;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
            (param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  iVar1 = (int)param_1[5];
  local_48 = (uint *)(param_1 + 2);
  uStack_74 = 1;
  local_78 = 0;
  iStack_60 = 0;
  iStack_64 = 0;
  if (iVar1 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = local_48;
    }
    uVar2 = *puVar7;
    local_78 = 0;
    iStack_60 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar6 = local_78 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar6;
      if (bVar3) goto LAB_142198780;
      uVar2 = puVar7[lVar5 + 1];
    }
    uStack_74 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_64 = (iStack_60 - iVar6) + 0x1f;
    if (iVar1 < iStack_64) {
LAB_142198780:
      iStack_64 = iVar1;
    }
  }
  uStack_50 = CONCAT44(uStack_74,local_78);
  uStack_18 = 0xffffffff;
  iStack_14 = iStack_64;
  iStack_10 = iStack_60;
  uStack_40 = 0xffffffff;
  iStack_3c = iStack_64;
  local_38 = iStack_60;
  local_30 = param_1;
  uStack_28 = uStack_50;
  puStack_20 = local_48;
  if (iStack_64 < iVar1) {
    do {
      iVar6 = iStack_3c;
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
      }
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
      if (puVar4 != (undefined8 *)0x0) {
        lVar5 = *param_1;
        *puVar4 = *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar6 * 0x28);
        lVar5 = *(longlong *)(lVar5 + 0x18 + (longlong)iVar6 * 0x28);
        puVar4[1] = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
      }
      uStack_40 = uStack_40 & ~uStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return;
}



// FUNCTION 142198860 FUN_142198860 body=534 status=ok
// SIG undefined FUN_142198860(void)

void FUN_142198860(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined8 uStack_70;
  uint *local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar11 = (int)param_2[1];
  if (iVar11 != 0) {
    plVar8 = (longlong *)(*param_2 + 8);
    do {
      plVar5 = (longlong *)*plVar8;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      plVar8 = plVar8 + 2;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar12) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar12);
  }
  iVar11 = (int)param_1[5];
  local_68 = (uint *)(param_1 + 2);
  local_98 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar11 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_68;
    }
    uVar4 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar12 = local_98 + 1;
      bVar6 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar12;
      if (bVar6) goto LAB_14219899e;
      uVar4 = puVar9[lVar7 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar12 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    iStack_84 = (iStack_80 - iVar12) + 0x1f;
    if (iVar11 < iStack_84) {
LAB_14219899e:
      iStack_84 = iVar11;
    }
  }
  uStack_70 = CONCAT44(uStack_94,local_98);
  uStack_38 = 0xffffffff;
  iStack_34 = iStack_84;
  iStack_30 = iStack_80;
  uStack_60 = 0xffffffff;
  iStack_5c = iStack_84;
  local_58 = iStack_80;
  local_50 = param_1;
  uStack_48 = uStack_70;
  puStack_40 = local_68;
  if (iStack_84 < iVar11) {
    do {
      iVar12 = iStack_5c;
      iVar11 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar11 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar11);
      }
      puVar10 = (undefined8 *)((longlong)iVar11 * 0x10 + *param_2);
      if (puVar10 != (undefined8 *)0x0) {
        lVar7 = *param_1;
        *puVar10 = *(undefined8 *)((longlong)iVar12 * 0x20 + 8 + lVar7);
        lVar7 = *(longlong *)((longlong)iVar12 * 0x20 + 0x10 + lVar7);
        puVar10[1] = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
      }
      uStack_60 = uStack_60 & ~uStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
  }
  return;
}



// FUNCTION 142198a80 FUN_142198a80 body=538 status=ok
// SIG undefined FUN_142198a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142198a80(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar6 = (undefined8 *)*param_1;
  uStack_60 = (longlong *)puVar6[1];
  local_68 = *puVar6;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
    UNLOCK();
  }
  if (&local_68 != param_2) {
    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uVar5 = *param_2;
    plVar18 = (longlong *)param_2[1];
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = (undefined4)uStack_60;
    uStack_4c = uStack_60._4_4_;
    *(undefined4 *)param_2 = (undefined4)local_68;
    *(undefined4 *)((longlong)param_2 + 4) = local_68._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
    local_68 = uVar5;
    uStack_60 = plVar18;
  }
  plVar18 = uStack_60;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar17 = uStack_60 + 1;
    lVar16 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_60 + 8))(uStack_60,1);
      }
    }
  }
  param_2[2] = puVar6[2];
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::RemoveAtSwapImpl(param_1,0,1,param_4);
  local_68 = *param_1;
  iVar4 = (int)param_1[1];
  iVar20 = 0;
  if (1 < iVar4) {
    do {
      iVar10 = iVar20 * 2;
      iVar19 = iVar10 + 1;
      if (iVar10 + 2 < iVar4) {
        plVar18 = *(longlong **)(local_68 + ((longlong)iVar10 + 2) * 0x18);
        lVar16 = local_68 + ((longlong)iVar10 + 2) * 0x18;
        lVar2 = local_68 + (longlong)iVar19 * 0x18;
        plVar17 = (longlong *)
                  (**(code **)(**(longlong **)(local_68 + (longlong)iVar19 * 0x18) + 0x58))();
        plVar18 = (longlong *)(**(code **)(*plVar18 + 0x58))(plVar18);
        lVar7 = *plVar18;
        lVar8 = *plVar17;
        if (lVar7 == lVar8) {
          bVar9 = *(longlong *)(lVar2 + 0x10) < *(longlong *)(lVar16 + 0x10);
        }
        else {
          bVar9 = lVar7 != lVar8 && -1 < lVar7 - lVar8;
        }
        if (bVar9) {
          iVar19 = iVar10;
        }
        iVar19 = iVar19 + 1;
      }
      plVar18 = *(longlong **)(local_68 + (longlong)iVar20 * 0x18);
      puVar6 = (undefined8 *)(local_68 + (longlong)iVar20 * 0x18);
      puVar3 = (undefined8 *)(local_68 + (longlong)iVar19 * 0x18);
      plVar17 = (longlong *)
                (**(code **)(**(longlong **)(local_68 + (longlong)iVar19 * 0x18) + 0x58))();
      plVar18 = (longlong *)(**(code **)(*plVar18 + 0x58))(plVar18);
      lVar16 = *plVar18;
      lVar2 = *plVar17;
      if (lVar16 == lVar2) {
        bVar9 = (longlong)puVar3[2] < (longlong)puVar6[2];
      }
      else {
        bVar9 = lVar16 != lVar2 && -1 < lVar16 - lVar2;
      }
      if (!bVar9) {
        return;
      }
      if (puVar6 != puVar3) {
        uVar11 = *(undefined4 *)((longlong)puVar3 + 4);
        uVar12 = *(undefined4 *)(puVar3 + 1);
        uVar13 = *(undefined4 *)((longlong)puVar3 + 0xc);
        uVar14 = *puVar6;
        uVar15 = puVar6[1];
        uVar5 = puVar6[2];
        *(undefined4 *)puVar6 = *(undefined4 *)puVar3;
        *(undefined4 *)((longlong)puVar6 + 4) = uVar11;
        *(undefined4 *)(puVar6 + 1) = uVar12;
        *(undefined4 *)((longlong)puVar6 + 0xc) = uVar13;
        puVar6[2] = puVar3[2];
        *puVar3 = uVar14;
        puVar3[1] = uVar15;
        puVar3[2] = uVar5;
      }
      iVar20 = iVar19;
    } while (iVar19 * 2 + 1 < iVar4);
  }
  return;
}



// FUNCTION 142198ca0 TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageInterceptor,1>,FName> body=239 status=ok
// SIG undefined TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageInterceptor,1>,FName>(void)

undefined8 *
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageInterceptor,1>,FName>
::
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageInterceptor,1>,FName>
          (undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
          undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  plVar4 = (longlong *)param_4[1];
  uVar10 = *param_4;
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  param_1[1] = param_2;
  *param_1 = &PTR_GetPoolName_144fdd828;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 3) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
  param_1[4] = uVar10;
  param_1[5] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  param_1[6] = param_5;
  uVar10 = FDelegateHandle::GenerateNewID();
  param_1[7] = uVar10;
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
  *param_1 = &PTR_GetPoolName_144fdd870;
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



// FUNCTION 142198d90 TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TWeakPtr<IMessageReceiver,1>,FName> body=201 status=ok
// SIG undefined TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TWeakPtr<IMessageReceiver,1>,FName>(void)

undefined8 *
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TWeakPtr<IMessageReceiver,1>,FName>
::
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TWeakPtr<IMessageReceiver,1>,FName>
          (undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
          undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  plVar3 = (longlong *)param_4[1];
  uVar8 = *param_4;
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[1] = param_2;
  *param_1 = &PTR_GetPoolName_144fdd9d8;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 3) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  param_1[4] = uVar8;
  param_1[5] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[6] = param_5;
  uVar8 = FDelegateHandle::GenerateNewID();
  param_1[7] = uVar8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = &PTR_GetPoolName_144fdda20;
  plVar3 = (longlong *)param_4[1];
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
  return param_1;
}



// FUNCTION 142198e60 FUN_142198e60 body=459 status=ok
// SIG undefined FUN_142198e60(void)

undefined8 *
FUN_142198e60(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  LPCRITICAL_SECTION p_Var10;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  p_Var10 = (LPCRITICAL_SECTION)0x0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_Disable_144fdd548;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  param_1[1] = &PTR_GetDebugName_144fdd568;
  param_1[2] = &PTR_LAB_144fdd598;
  param_1[3] = &PTR_StartProfileThreadUsage_144fdd5b0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)operator_new(0x28);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSection(lpCriticalSection);
    SetCriticalSectionSpinCount(lpCriticalSection,4000);
    p_Var10 = lpCriticalSection;
  }
  param_1[8] = p_Var10;
  param_1[0x13] = *param_3;
  lVar8 = param_3[1];
  param_1[0x14] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  FGuid::NewGuid((longlong)param_1 + 0xac);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = *param_4;
  lVar8 = param_4[1];
  param_1[0x1b] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[0x13] + 0x58))();
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    plVar7[1] = (longlong)param_1;
    *plVar7 = (longlong)&PTR_GetPoolName_143f77a38;
    *(undefined4 *)(plVar7 + 2) = 0x4219ee50;
    *(undefined4 *)((longlong)plVar7 + 0x14) = 1;
    *(undefined4 *)(plVar7 + 3) = 0;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_1c;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143f77a80;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
    (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
    iVar1 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
    }
    puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
    *puVar9 = plVar7;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  return param_1;
}



// FUNCTION 142199030 FMessageContext body=301 status=ok
// SIG undefined FMessageContext(void)

undefined8 *
FMessageContext::FMessageContext
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined4 *param_5,undefined8 *param_6,undefined1 param_7,undefined8 *param_8,
          undefined8 *param_9,undefined4 param_10)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = &PTR_LAB_144fdd778;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = *param_4;
  lVar2 = param_4[1];
  param_1[0xc] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[0xd] = *param_9;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_6 + 1);
  _Src = (void *)*param_6;
  *(int *)(param_1 + 0x12) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x11,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0x11],_Src,(longlong)iVar1 << 4);
  }
  *(undefined1 *)(param_1 + 0x13) = param_7;
  uVar3 = *param_5;
  uVar4 = param_5[1];
  uVar5 = param_5[2];
  uVar6 = param_5[3];
  *(undefined4 *)((longlong)param_1 + 0xac) = param_10;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar5;
  *(undefined4 *)(param_1 + 0x15) = uVar6;
  param_1[0x16] = *param_8;
  FWeakObjectPtr::operator=(param_1 + 0x17,param_3);
  return param_1;
}



// FUNCTION 142199160 FMessageRouter body=556 status=ok
// SIG undefined FMessageRouter(void)

undefined8 * FMessageRouter::FMessageRouter(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_res18 [2];
  
  puVar6 = (undefined8 *)0x0;
  plVar1 = param_1 + 0x16;
  *param_1 = &PTR_IsPromotedBuild_144fdd738;
  param_1[1] = &PTR_LAB_144fdd768;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *plVar1 = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  puVar3 = (undefined8 *)operator_new(0x18);
  puVar5 = puVar6;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar5 = puVar3;
  }
  param_1[0x21] = puVar5;
  param_1[0x20] = puVar5;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  lVar4 = operator_new(0x230);
  puVar5 = puVar6;
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)FUN_142199390(lVar4);
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_LAB_144fddb10;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = puVar5;
    puVar6 = puVar3;
  }
  param_1[0x27] = puVar5;
  param_1[0x28] = puVar6;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0x27,puVar5,puVar5);
  *(undefined1 *)(param_1 + 0x2a) = 0;
  local_res10 = 0xe6;
  if (*(int *)(param_1 + 0x17) != *(int *)((longlong)param_1 + 0xe4)) {
    puVar6 = (undefined8 *)param_1[0x1e];
    if ((undefined8 *)param_1[0x1e] == (undefined8 *)0x0) {
      puVar6 = param_1 + 0x1d;
    }
    iVar2 = *(int *)((longlong)puVar6 + ((longlong)*(int *)(param_1 + 0x1f) - 1U & 0xe6) * 4);
    if (iVar2 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar2 * 0x20 + *plVar1);
        if (*plVar8 == 0xe6) {
          if ((iVar2 != -1) && (plVar8 != (longlong *)0x0)) goto LAB_142199343;
          break;
        }
        iVar2 = (int)plVar8[3];
      } while (iVar2 != -1);
    }
  }
  local_res18[0] = &local_res10;
  FUN_1404b9690(plVar1,local_res8,local_res18,0);
LAB_142199343:
  uVar7 = FUN_1415ab270(0);
  param_1[0x29] = uVar7;
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"Messaging",L"bAllowDelayedMessaging",param_1 + 0x2a,&DAT_1468e2360);
  return param_1;
}



// FUNCTION 142199390 FUN_142199390 body=671 status=ok
// SIG undefined FUN_142199390(void)

undefined8 * FUN_142199390(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  puVar5 = (undefined8 *)0x0;
  *param_1 = &PTR_LAB_144fdd6b8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  puVar1 = (undefined8 *)operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[2] = AK::MemoryMgr::StartProfileThreadUsage;
    puVar5 = puVar1;
  }
  param_1[0x3b] = puVar5;
  param_1[0x3a] = puVar5;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 2;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 2;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 2;
  uVar2 = FUN_1415ab270(0);
  param_1[0xe] = uVar2;
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = (longlong)param_1;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar3[2] = (longlong)&LAB_14219b514;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
  }
  uVar2 = FUN_14164ab60();
  puVar5 = (undefined8 *)FUN_14158f860(uVar2,local_res8,&local_18,L"FMessageTracer_Tick",0);
  param_1[0x38] = *puVar5;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return param_1;
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
  return param_1;
}



// FUNCTION 142199630 FUN_142199630 body=131 status=ok
// SIG undefined FUN_142199630(void)

void FUN_142199630(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x50) != 0) {
        plVar2 = *(longlong **)(lVar1 + 0x40);
        if (*(longlong **)(lVar1 + 0x40) == (longlong *)0x0) {
          plVar2 = (longlong *)(lVar1 + 0x20);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(lVar1,0x60);
    }
    lVar1 = *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 1421996c0 ~TSparseArray<TSetElement<TTuple<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_142199781;
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
LAB_142199781:
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
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>
                ((longlong)iStack_1c * 0x20 + 8 + *param_1);
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



// FUNCTION 142199850 ~FMessageBridge body=626 status=ok
// SIG undefined ~FMessageBridge(void)

void FMessageBridge::~FMessageBridge(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_18;
  undefined8 local_10;
  
  *param_1 = &PTR_Disable_144fdd548;
  param_1[1] = &PTR_GetDebugName_144fdd568;
  param_1[2] = &PTR_LAB_144fdd598;
  param_1[3] = &PTR_StartProfileThreadUsage_144fdd5b0;
  if (*(char *)(param_1 + 0x15) != '\0') {
    if ((undefined8 *)param_1[0x18] != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)param_1[0x18])();
    }
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x1a] + 0x10))();
    }
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    uVar6 = (**(code **)(*(longlong *)param_1[0x13] + 0x58))();
    FUN_140483870(uVar6,param_1);
    (**(code **)(*(longlong *)param_1[0x13] + 0x48))((longlong *)param_1[0x13],param_1 + 6);
    local_18 = 0;
    local_10 = 0;
    FMessageAddressBook::RemoveAll(param_1 + 8,&local_18);
    lVar5 = local_18;
    lVar7 = (longlong)(int)local_10 * 0x10 + local_18;
    for (lVar8 = local_18; lVar8 != lVar7; lVar8 = lVar8 + 0x10) {
      (**(code **)(*(longlong *)param_1[0x13] + 0x48))((longlong *)param_1[0x13],lVar8);
    }
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  plVar4 = (longlong *)param_1[0x1b];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  plVar4 = (longlong *)param_1[0x19];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  plVar4 = (longlong *)param_1[0x14];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[8];
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    FMemory::operator_delete(lpCriticalSection,0x28);
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 9);
  param_1[3] = &PTR__purecall_143fcfdf8;
  param_1[2] = &PTR__purecall_143f9a338;
  param_1[1] = &PTR__purecall_143f595c8;
  *param_1 = &PTR__purecall_143fcfdf8;
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142199ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}



// FUNCTION 142199ad0 ~FMessageTracer body=408 status=ok
// SIG undefined ~FMessageTracer(void)

void FMessageTracer::~FMessageTracer(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_144fdd6b8;
  uVar1 = FUN_14164ab60();
  FUN_141597530(uVar1,param_1[0x38]);
  FUN_1415b5910(param_1[0xe]);
  param_1[0xe] = 0;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x42);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3f);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3c);
  FUN_142199630(param_1 + 0x3a);
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedPtr<FSlateDrawLayerHandle,1>,TSharedPtr<FSlateDrawLayer,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedPtr<FSlateDrawLayerHandle,1>,TSharedPtr<FSlateDrawLayer,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x19,0);
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xf,0);
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xc);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 1,0);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_144fdd5d0;
  return;
}



// FUNCTION 142199c70 FUN_142199c70 body=448 status=ok
// SIG undefined FUN_142199c70(void)

void FUN_142199c70(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int local_res8 [2];
  int local_res10 [2];
  longlong local_38;
  longlong *local_30;
  
  plVar8 = (longlong *)param_1[2];
  local_38 = param_1[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  lVar3 = *param_1;
  local_30 = plVar8;
  TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x118,local_res8,&local_38);
  lVar7 = 0;
  if ((local_res8[0] == -1) ||
     (lVar3 = *(longlong *)(lVar3 + 0x118) + (longlong)local_res8[0] * 0x28, lVar3 == 0)) {
    lVar9 = 0;
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar9 = *(longlong *)(lVar3 + 0x10);
    plVar6 = *(longlong **)(lVar3 + 0x18);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar8 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (lVar9 != 0) {
    *(undefined1 *)(lVar9 + 0x60) = 1;
    uVar4 = (**(code **)(*(longlong *)param_1[3] + 8))();
    lVar3 = *param_1;
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x78,local_res10,uVar4);
    if ((local_res10[0] == -1) ||
       (lVar3 = *(longlong *)(lVar3 + 0x78) + (longlong)local_res10[0] * 0x28, lVar3 == 0)) {
      plVar8 = (longlong *)0x0;
    }
    else {
      lVar7 = *(longlong *)(lVar3 + 0x10);
      plVar8 = *(longlong **)(lVar3 + 0x18);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
    }
    if (lVar7 != 0) {
      iVar2 = *(int *)(lVar7 + 0x10);
      *(int *)(lVar7 + 0x10) = iVar2 + 1;
      if (*(int *)(lVar7 + 0x14) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar7 + 8,iVar2);
      }
      plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar7 + 8));
      *plVar5 = lVar9;
      plVar5[1] = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar8 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 142199e30 FUN_142199e30 body=168 status=ok
// SIG undefined FUN_142199e30(void)

void FUN_142199e30(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int local_res8 [2];
  
  uVar5 = (**(code **)(*(longlong *)param_1[1] + 8))();
  lVar4 = *param_1;
  TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x78,local_res8,uVar5);
  if ((local_res8[0] == -1) ||
     (lVar4 = *(longlong *)(lVar4 + 0x78) + (longlong)local_res8[0] * 0x28, lVar4 == 0)) {
    lVar6 = 0;
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x10);
    plVar7 = *(longlong **)(lVar4 + 0x18);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
  }
  if (lVar6 != 0) {
    *(longlong *)(lVar6 + 0x20) = param_1[3];
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 142199ee0 FUN_142199ee0 body=2307 status=ok
// SIG undefined FUN_142199ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142199ee0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong **pplVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined1 auStack_178 [32];
  char local_158;
  longlong *local_148;
  longlong *plStack_140;
  longlong local_138;
  longlong local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *plStack_118;
  longlong *local_110;
  longlong *plStack_108;
  int local_100;
  int local_fc;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong **local_98;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_b8 = param_1;
  uVar10 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
  lVar14 = *param_1;
  TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 8,&local_100,uVar10);
  if (local_100 == -1) {
    return;
  }
  lVar14 = *(longlong *)(lVar14 + 8) + (longlong)local_100 * 0x28;
  if (lVar14 == 0) {
    return;
  }
  plVar16 = *(longlong **)(lVar14 + 0x10);
  plVar20 = *(longlong **)(lVar14 + 0x18);
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
  }
  local_f8 = plVar16;
  local_d8 = plVar20;
  if (plVar16 == (longlong *)0x0) goto LAB_14219a77e;
  plVar11 = (longlong *)operator_new(0x98);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(plVar11,0,0x98);
    plVar11[3] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    *(undefined4 *)(plVar11 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)plVar11 + 0x44) = 0;
    plVar11[10] = 0;
    *(undefined4 *)(plVar11 + 0xb) = 0;
    plVar11[0xd] = 0;
    plVar11[0xe] = 0;
    plVar11[0x11] = 0;
    plVar11[0x12] = 0;
  }
  plVar17 = (longlong *)0x0;
  plVar12 = (longlong *)operator_new(0x18);
  plStack_140 = plVar17;
  if (plVar12 != (longlong *)0x0) {
    *(undefined4 *)(plVar12 + 1) = 1;
    *plVar12 = (longlong)&PTR_FUN_144fddac0;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    plVar12[2] = (longlong)plVar11;
    plStack_140 = plVar12;
  }
  local_148 = plVar11;
  SharedPointerInternals::EnableSharedFromThis(&local_148,plVar11,plVar11);
  local_128 = (longlong *)param_1[2];
  local_130 = param_1[1];
  if (local_128 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_128 + 1) = (int)local_128[1] + 1;
    UNLOCK();
  }
  if (local_148 != &local_130) {
    *local_148 = local_130;
    local_130 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_148 + 1,&local_128);
  }
  plVar11 = local_128;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_128 + 1;
    lVar14 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  *(undefined1 *)(local_148 + 0xc) = 0;
  pplVar13 = (longlong **)(local_148 + 0xd);
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
  }
  local_120 = plVar16;
  plStack_118 = plVar20;
  if (&local_120 != pplVar13) {
    local_120 = *pplVar13;
    plStack_118 = (longlong *)local_148[0xe];
    *pplVar13 = plVar16;
    local_148[0xe] = (longlong)plVar20;
    local_58 = plVar16;
    plStack_50 = plVar20;
  }
  plVar16 = plStack_118;
  if (plStack_118 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_118 + 1;
    lVar14 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_118)(plStack_118);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_118 + 8))(plStack_118,1);
      }
    }
  }
  local_148[0xf] = 0;
  local_148[0x10] = param_1[3];
  local_88 = local_148;
  plStack_80 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
    UNLOCK();
  }
  local_b0 = param_1[1];
  local_a8 = (longlong *)param_1[2];
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    UNLOCK();
  }
  local_a0 = &local_b0;
  local_98 = &local_88;
  FUN_142197840(*param_1 + 0x118,local_d0,&local_a0,0);
  plVar16 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_a8 + 1;
    lVar14 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  plVar16 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_80 + 1;
    lVar14 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  plVar16 = (longlong *)param_1[1];
  lVar14 = (**(code **)(*plVar16 + 0x18))(plVar16);
  local_138._0_4_ = 0;
  if (lVar14 == 0) {
LAB_14219a286:
    local_138 = 0;
  }
  else {
    uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16);
    cVar7 = FWeakObjectPtr::IsValid(uVar10,0,1);
    if (cVar7 == '\0') goto LAB_14219a286;
    uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16);
    lVar14 = FWeakObjectPtr::Get(uVar10);
    local_138 = *(longlong *)(lVar14 + 0x18);
  }
  lVar14 = *param_1;
  plVar16 = (longlong *)(lVar14 + 0x168);
  if (*(int *)(lVar14 + 0x170) != *(int *)(lVar14 + 0x19c)) {
    lVar18 = *(longlong *)(lVar14 + 0x1a8);
    if (*(longlong *)(lVar14 + 0x1a8) == 0) {
      lVar18 = lVar14 + 0x1a0;
    }
    iVar8 = *(int *)(lVar18 + ((longlong)((int)((ulonglong)local_138 >> 0x20) + (int)local_138) &
                              (longlong)*(int *)(lVar14 + 0x1b0) - 1U) * 4);
    if (iVar8 != -1) {
      do {
        plVar11 = (longlong *)((longlong)iVar8 * 0x20 + *plVar16);
        if (*plVar11 == local_138) {
          if ((iVar8 != -1) && (plVar11 != (longlong *)0x0)) goto LAB_14219a32d;
          break;
        }
        iVar8 = (int)plVar11[3];
      } while (iVar8 != -1);
    }
  }
  local_c8 = &local_138;
  FUN_142196d90(plVar16,&local_fc,&local_c8,0);
  plVar11 = (longlong *)((longlong)local_fc * 0x20 + *plVar16);
LAB_14219a32d:
  pplVar13 = (longlong **)(plVar11 + 1);
  if (plVar11[1] == 0) {
    plVar12 = (longlong *)operator_new(0x18);
    plVar16 = plVar17;
    if (plVar12 != (longlong *)0x0) {
      plVar12[2] = 0;
      *plVar12 = 0;
      plVar12[1] = 0;
      *(undefined4 *)((longlong)plVar12 + 0x14) = 0;
      plVar16 = plVar12;
    }
    plVar12 = (longlong *)operator_new(0x18);
    if (plVar12 != (longlong *)0x0) {
      *(undefined4 *)(plVar12 + 1) = 1;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      *plVar12 = (longlong)&PTR_DestroyObject_144fddab0;
      plVar12[2] = (longlong)plVar16;
      plVar17 = plVar12;
    }
    local_f0 = plVar16;
    local_e8 = plVar17;
    SharedPointerInternals::EnableSharedFromThis(&local_f0,plVar16,plVar16);
    if (pplVar13 != &local_f0) {
      *pplVar13 = plVar16;
      local_f0 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(plVar11 + 2);
      plVar17 = local_e8;
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar17 + 1;
      lVar14 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17);
        }
      }
    }
    plVar16 = (longlong *)param_1[1];
    lVar14 = (**(code **)(*plVar16 + 0x18))(plVar16);
    if (lVar14 == 0) {
LAB_14219a44e:
      local_e0 = 0;
      lVar14 = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16);
      cVar7 = FWeakObjectPtr::IsValid(uVar10,0,1);
      if (cVar7 == '\0') goto LAB_14219a44e;
      uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16);
      lVar14 = FWeakObjectPtr::Get(uVar10);
      lVar14 = *(longlong *)(lVar14 + 0x18);
    }
    (*pplVar13)[2] = lVar14;
    plVar16 = (longlong *)plVar11[2];
    plVar17 = *pplVar13;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    lVar14 = *param_1;
    local_158 = '\0';
    *(int *)(lVar14 + 0x224) = *(int *)(lVar14 + 0x224) + 1;
    iVar8 = *(int *)(lVar14 + 0x224);
    iVar9 = *(int *)(lVar14 + 0x218) + -1;
    lVar18 = (longlong)iVar9;
    local_c0 = plVar17;
    if (-1 < iVar9) {
      lVar19 = lVar18 << 4;
      do {
        lVar2 = *(longlong *)(lVar14 + 0x210);
        if ((*(int *)(lVar19 + 8 + lVar2) == 0) ||
           (plVar20 = *(longlong **)(lVar19 + lVar2), plVar20 == (longlong *)0x0)) {
LAB_14219a4e2:
          local_158 = '\x01';
        }
        else {
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
          }
          local_78 = plVar17;
          local_70 = plVar16;
          cVar7 = (**(code **)(*plVar20 + 0x40))(plVar20,&local_78);
          if (cVar7 == '\0') goto LAB_14219a4e2;
        }
        lVar19 = lVar19 + -0x10;
        lVar18 = lVar18 + -1;
      } while (-1 < lVar18);
      iVar8 = *(int *)(lVar14 + 0x224);
      plVar20 = local_d8;
    }
    *(int *)(lVar14 + 0x224) = iVar8 + -1;
    if (local_158 != '\0') {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar14 + 0x210),0);
    }
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar16 + 1;
      lVar14 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
  }
  plVar17 = plStack_140;
  plVar16 = local_148;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
    UNLOCK();
  }
  plVar12 = *pplVar13;
  iVar8 = (int)plVar12[1];
  *(int *)(plVar12 + 1) = iVar8 + 1;
  if (*(int *)((longlong)plVar12 + 0xc) < iVar8 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar8);
  }
  plVar6 = local_f8;
  plVar5 = plStack_140;
  plVar4 = local_148;
  puVar15 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar12);
  *puVar15 = plVar16;
  puVar15[1] = plVar17;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
    UNLOCK();
  }
  iVar8 = (int)local_f8[0xf];
  *(int *)(local_f8 + 0xf) = iVar8 + 1;
  if (*(int *)((longlong)local_f8 + 0x7c) < iVar8 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_f8 + 0xe,iVar8);
  }
  puVar15 = (undefined8 *)((longlong)iVar8 * 0x10 + plVar6[0xe]);
  *puVar15 = plVar4;
  puVar15[1] = plVar5;
  plVar16 = (longlong *)plVar11[2];
  plVar11 = *pplVar13;
  pplVar13 = (longlong **)(local_148 + 0x11);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_110 = plVar11;
  plStack_108 = plVar16;
  if (&local_110 != pplVar13) {
    local_110 = *pplVar13;
    plStack_108 = (longlong *)local_148[0x12];
    *pplVar13 = plVar11;
    local_148[0x12] = (longlong)plVar16;
    local_48 = plVar11;
    plStack_40 = plVar16;
  }
  plVar16 = plStack_108;
  if (plStack_108 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_108 + 1;
    lVar14 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_108)(plStack_108);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_108 + 8))(plStack_108,1);
      }
    }
  }
  plVar11 = plStack_140;
  plVar16 = local_148;
  local_f8 = local_148;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
    UNLOCK();
  }
  bVar3 = false;
  lVar14 = *local_b8;
  *(int *)(lVar14 + 500) = *(int *)(lVar14 + 500) + 1;
  iVar8 = *(int *)(lVar14 + 500);
  iVar9 = *(int *)(lVar14 + 0x1e8) + -1;
  lVar18 = (longlong)iVar9;
  if (-1 < iVar9) {
    lVar19 = lVar18 << 4;
    bVar3 = false;
    do {
      lVar2 = *(longlong *)(lVar14 + 0x1e0);
      if ((*(int *)(lVar19 + 8 + lVar2) == 0) ||
         (plVar20 = *(longlong **)(lVar19 + lVar2), plVar20 == (longlong *)0x0)) {
LAB_14219a6d4:
        bVar3 = true;
      }
      else {
        local_68 = plVar16;
        local_60 = plVar11;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        cVar7 = (**(code **)(*plVar20 + 0x40))(plVar20,&local_68);
        if (cVar7 == '\0') goto LAB_14219a6d4;
      }
      lVar19 = lVar19 + -0x10;
      lVar18 = lVar18 + -1;
    } while (-1 < lVar18);
    iVar8 = *(int *)(lVar14 + 500);
    plVar20 = local_d8;
  }
  *(int *)(lVar14 + 500) = iVar8 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar14 + 0x1e0),0);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar11 + 1;
    lVar14 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar16 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_140 + 1;
    lVar14 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_140)(plStack_140);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
LAB_14219a77e:
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar20 + 1;
    lVar14 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20,1);
      }
    }
  }
  return;
}



// FUNCTION 14219a7f0 FUN_14219a7f0 body=303 status=ok
// SIG undefined FUN_14219a7f0(void)

void FUN_14219a7f0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int local_res8 [2];
  int local_res10 [2];
  
  lVar4 = *param_1;
  TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 8,local_res8,param_1 + 1);
  if ((local_res8[0] != -1) &&
     (lVar4 = *(longlong *)(lVar4 + 8) + (longlong)local_res8[0] * 0x28, lVar4 != 0)) {
    plVar7 = *(longlong **)(lVar4 + 0x10);
    plVar5 = *(longlong **)(lVar4 + 0x18);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (plVar7 != (longlong *)0x0) {
      TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
      ::FindId(plVar7,local_res10,param_1 + 1);
      if ((local_res10[0] == -1) || (lVar4 = *plVar7 + (longlong)local_res10[0] * 0x28, lVar4 == 0))
      {
        lVar6 = 0;
        plVar7 = (longlong *)0x0;
      }
      else {
        lVar6 = *(longlong *)(lVar4 + 0x10);
        plVar7 = *(longlong **)(lVar4 + 0x18);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
      }
      if (lVar6 != 0) {
        *(longlong *)(lVar6 + 0x18) = param_1[3];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
    }
  }
  return;
}



// FUNCTION 14219a920 FUN_14219a920 body=795 status=ok
// SIG undefined FUN_14219a920(void)

void FUN_14219a920(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong **pplVar11;
  int local_res8 [2];
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong **local_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong **local_40;
  
  uVar5 = (**(code **)(*(longlong *)param_1[1] + 8))();
  lVar3 = *param_1;
  TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 200,local_res8,uVar5);
  if ((local_res8[0] == -1) ||
     (lVar10 = *(longlong *)(lVar3 + 200) + (longlong)local_res8[0] * 0x28, lVar10 == 0)) {
    local_98 = uVar5;
    FUN_1421970b0(lVar3 + 200,local_res10,&local_98,0);
    lVar10 = *(longlong *)(lVar3 + 200) + (longlong)local_res10[0] * 0x28;
  }
  plVar9 = (longlong *)0x0;
  pplVar11 = (longlong **)(lVar10 + 0x10);
  if (*pplVar11 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x80);
    plVar8 = plVar9;
    if (plVar6 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar6,0,0x80);
      plVar6[4] = 0;
      plVar6[5] = 0;
      *(undefined4 *)(plVar6 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)plVar6 + 0x34) = 0;
      plVar6[8] = 0;
      *(undefined4 *)(plVar6 + 9) = 0;
      plVar6[10] = 0;
      plVar6[0xb] = 0;
      plVar6[0xc] = 0;
      plVar6[0xe] = 0;
      plVar6[0xf] = 0;
      plVar8 = plVar6;
    }
    plVar7 = (longlong *)operator_new(0x18);
    plVar6 = plVar9;
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_DestroyObject_144fddaf0;
      plVar7[2] = (longlong)plVar8;
      plVar6 = plVar7;
    }
    local_78 = plVar8;
    local_70 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_78,plVar8,plVar8);
    if (pplVar11 != &local_78) {
      *pplVar11 = plVar8;
      local_78 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar10 + 0x18,&local_70);
      plVar6 = local_70;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  plVar8 = (longlong *)operator_new(0x20);
  local_88 = plVar9;
  if (plVar8 != (longlong *)0x0) {
    plVar8[2] = 0;
    plVar8[3] = 0;
    *plVar8 = 0;
    plVar8[1] = 0;
    local_88 = plVar8;
  }
  plVar8 = (longlong *)operator_new(0x18);
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *plVar8 = (longlong)&PTR_FUN_144fddae0;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    plVar8[2] = (longlong)local_88;
    plVar9 = plVar8;
  }
  plStack_80 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
  plVar9 = param_1 + 3;
  lVar3 = param_1[4];
  *local_88 = *plVar9;
  local_88[1] = lVar3;
  local_88[2] = param_1[5];
  local_88[3] = 0;
  local_58 = local_88;
  plStack_50 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
  }
  local_60 = &local_58;
  local_68 = plVar9;
  FUN_142197b70(*pplVar11,local_res18,&local_68,0);
  plVar8 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_50 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = *pplVar11;
  plVar6 = (longlong *)(*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],local_90);
  plVar8[10] = *plVar6;
  cVar4 = (**(code **)(*(longlong *)param_1[1] + 0x18))();
  *(bool *)(*pplVar11 + 0xd) = cVar4 == '\0';
  local_48 = plVar9;
  local_40 = pplVar11;
  FUN_142197e70(*param_1 + 8,local_res20,&local_48,0);
  plVar9 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_80 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_80)(plStack_80);
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
  return;
}



// FUNCTION 14219ac40 operator() body=258 status=ok
// SIG undefined operator()(void)

void <lambda_8c277d911b6f8e7f5eb8e603bf19a4aa>::operator()(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int local_res8 [2];
  longlong local_28;
  longlong *local_20;
  
  plVar4 = (longlong *)param_1[2];
  local_28 = param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar5 = *param_1;
  local_20 = plVar4;
  TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
  ::FindId(lVar5 + 0x118,local_res8,&local_28);
  if ((local_res8[0] == -1) ||
     (lVar5 = *(longlong *)(lVar5 + 0x118) + (longlong)local_res8[0] * 0x28, lVar5 == 0)) {
    lVar7 = 0;
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar7 = *(longlong *)(lVar5 + 0x10);
    plVar6 = *(longlong **)(lVar5 + 0x18);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
  }
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
  if (lVar7 != 0) {
    *(longlong *)(lVar7 + 0x78) = param_1[3];
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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



// FUNCTION 14219ad50 FUN_14219ad50 body=1012 status=ok
// SIG undefined FUN_14219ad50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14219ad50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  double *pdVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  double *pdVar10;
  double *pdVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  double *local_b8;
  double *pdStack_b0;
  double local_a8;
  longlong *plStack_a0;
  int local_98;
  int local_94;
  int local_90;
  undefined1 local_8c [4];
  undefined8 local_88;
  longlong local_80;
  longlong *local_78;
  double *local_70;
  double **local_68;
  double *local_58;
  double *pdStack_50;
  double local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_80 = param_1[1];
  plVar12 = (longlong *)param_1[2];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  lVar5 = *param_1;
  local_78 = plVar12;
  TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
  ::FindId(lVar5 + 0x118,&local_98,&local_80);
  pdVar11 = (double *)0x0;
  if ((local_98 == -1) ||
     (lVar5 = *(longlong *)(lVar5 + 0x118) + (longlong)local_98 * 0x28, lVar5 == 0)) {
    lVar14 = 0;
    plVar13 = (longlong *)0x0;
  }
  else {
    lVar14 = *(longlong *)(lVar5 + 0x10);
    plVar13 = *(longlong **)(lVar5 + 0x18);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (lVar14 != 0) {
    uVar8 = (**(code **)(*(longlong *)param_1[3] + 8))();
    lVar5 = *param_1;
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(lVar5 + 200,&local_94,uVar8);
    if ((local_94 == -1) ||
       (lVar9 = *(longlong *)(lVar5 + 200) + (longlong)local_94 * 0x28, lVar9 == 0)) {
      local_88 = uVar8;
      FUN_1421970b0(lVar5 + 200,&local_90,&local_88,0);
      lVar9 = *(longlong *)(lVar5 + 200) + (longlong)local_90 * 0x28;
    }
    pdVar3 = (double *)(lVar9 + 0x10);
    if (*(longlong *)(lVar9 + 0x10) != 0) {
      pdVar10 = (double *)operator_new(0x38);
      local_b8 = pdVar11;
      if (pdVar10 != (double *)0x0) {
        *pdVar10 = 0.0;
        pdVar10[1] = 0.0;
        pdVar10[4] = 0.0;
        pdVar10[5] = 0.0;
        pdVar10[6] = 0.0;
        pdVar10[2] = 0.0;
        pdVar10[3] = 0.0;
        local_b8 = pdVar10;
      }
      pdVar10 = (double *)operator_new(0x18);
      if (pdVar10 != (double *)0x0) {
        *(undefined4 *)(pdVar10 + 1) = 1;
        *pdVar10 = (double)&PTR_DestroyObject_144fddad0;
        *(undefined4 *)((longlong)pdVar10 + 0xc) = 1;
        pdVar10[2] = (double)local_b8;
        pdVar11 = pdVar10;
      }
      pdStack_b0 = pdVar11;
      SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
      *local_b8 = (double)param_1[5] - *(double *)(lVar14 + 0x80);
      *(uint *)(local_b8 + 1) = -(uint)((char)param_1[6] != '\0') & 2;
      plVar12 = *(longlong **)(lVar9 + 0x18);
      dVar6 = *pdVar3;
      pdVar11 = local_b8 + 2;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_a8 = dVar6;
      plStack_a0 = plVar12;
      if (&local_a8 != pdVar11) {
        local_a8 = *pdVar11;
        plStack_a0 = (longlong *)local_b8[3];
        *pdVar11 = dVar6;
        local_b8[3] = (double)plVar12;
        local_48 = dVar6;
        plStack_40 = plVar12;
      }
      plVar12 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_a0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
          }
        }
      }
      pdVar11 = local_b8;
      uVar7 = (**(code **)(*(longlong *)param_1[3] + 0x10))();
      *(undefined4 *)(pdVar11 + 4) = uVar7;
      local_b8[5] = (double)param_1[5];
      local_b8[6] = 0.0;
      local_58 = local_b8;
      pdStack_50 = pdStack_b0;
      if (pdStack_b0 != (double *)0x0) {
        LOCK();
        *(int *)(pdStack_b0 + 1) = *(int *)(pdStack_b0 + 1) + 1;
        UNLOCK();
      }
      local_68 = &local_58;
      local_70 = pdVar3;
      FUN_142198170(lVar14 + 0x10,local_8c,&local_70,0);
      pdVar11 = pdStack_50;
      if (pdStack_50 != (double *)0x0) {
        LOCK();
        pdVar10 = pdStack_50 + 1;
        iVar4 = *(int *)pdVar10;
        *(int *)pdVar10 = *(int *)pdVar10 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*pdStack_50)(pdStack_50);
          LOCK();
          piVar2 = (int *)((longlong)pdVar11 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)((longlong)*pdVar11 + 8))(pdVar11,1);
          }
        }
      }
      dVar6 = *pdVar3;
      iVar4 = *(int *)((longlong)dVar6 + 0x60);
      *(int *)((longlong)dVar6 + 0x60) = iVar4 + 1;
      if (*(int *)((longlong)dVar6 + 100) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong)dVar6 + 0x58,iVar4);
      }
      pdVar11 = pdStack_b0;
      plVar12 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar6 + 0x58));
      *plVar12 = lVar14;
      plVar12[1] = (longlong)plVar13;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      if (pdStack_b0 != (double *)0x0) {
        LOCK();
        pdVar3 = pdStack_b0 + 1;
        iVar4 = *(int *)pdVar3;
        *(int *)pdVar3 = *(int *)pdVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*pdStack_b0)(pdStack_b0);
          LOCK();
          piVar2 = (int *)((longlong)pdVar11 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)((longlong)*pdVar11 + 8))(pdVar11,1);
          }
        }
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar13 + 1;
    lVar5 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return;
}



// FUNCTION 14219b150 FUN_14219b150 body=390 status=ok
// SIG undefined FUN_14219b150(void)

void FUN_14219b150(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong **pplVar8;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res18;
  undefined1 local_res20 [8];
  longlong *local_38;
  longlong *local_30;
  longlong lVar9;
  
  uVar4 = (**(code **)(*(longlong *)param_1[1] + 8))();
  lVar3 = *param_1;
  TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x78,local_res8,uVar4);
  if ((local_res8[0] == -1) ||
     (lVar9 = *(longlong *)(lVar3 + 0x78) + (longlong)local_res8[0] * 0x28, lVar9 == 0)) {
    local_res18 = uVar4;
    FUN_1421970b0(lVar3 + 0x78,local_res10,&local_res18,0);
    lVar9 = *(longlong *)(lVar3 + 0x78) + (longlong)local_res10[0] * 0x28;
  }
  pplVar8 = (longlong **)(lVar9 + 0x10);
  plVar7 = (longlong *)0x0;
  if (*pplVar8 == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x28);
    plVar6 = plVar7;
    if (plVar5 != (longlong *)0x0) {
      plVar5[3] = 0;
      plVar5[4] = 0;
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar6 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_DestroyObject_144fddb00;
      plVar5[2] = (longlong)plVar6;
      plVar7 = plVar5;
    }
    local_38 = plVar6;
    local_30 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_38,plVar6,plVar6);
    if (pplVar8 != &local_38) {
      *pplVar8 = plVar6;
      local_38 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar9 + 0x18,&local_30);
      plVar7 = local_30;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
  plVar7 = *pplVar8;
  plVar6 = (longlong *)(*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],local_res20);
  *plVar7 = *plVar6;
  (*pplVar8)[3] = param_1[3];
  (*pplVar8)[4] = 0;
  return;
}



// FUNCTION 14219b2e0 FUN_14219b2e0 body=563 status=ok
// SIG undefined FUN_14219b2e0(void)

void FUN_14219b2e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  plVar6 = (longlong *)param_1[2];
  local_38 = param_1[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  lVar4 = *param_1;
  local_30 = plVar6;
  TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x118,local_res8,&local_38);
  lVar7 = 0;
  if ((local_res8[0] == -1) ||
     (lVar4 = *(longlong *)(lVar4 + 0x118) + (longlong)local_res8[0] * 0x28, lVar4 == 0)) {
    lVar9 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar9 = *(longlong *)(lVar4 + 0x10);
    plVar8 = *(longlong **)(lVar4 + 0x18);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
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
  if (lVar9 != 0) {
    uVar5 = (**(code **)(*(longlong *)param_1[3] + 8))();
    lVar4 = *param_1;
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(lVar4 + 200,local_res10,uVar5);
    if ((local_res10[0] != -1) &&
       (lVar4 = *(longlong *)(lVar4 + 200) + (longlong)local_res10[0] * 0x28, lVar4 != 0)) {
      local_48 = *(longlong *)(lVar4 + 0x10);
      local_40 = *(longlong **)(lVar4 + 0x18);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      if (local_48 != 0) {
        TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
        ::FindId(lVar9 + 0x10,local_res18,&local_48);
        if ((local_res18[0] == -1) ||
           (lVar4 = *(longlong *)(lVar9 + 0x10) + (longlong)local_res18[0] * 0x28, lVar4 == 0)) {
          plVar6 = (longlong *)0x0;
        }
        else {
          lVar7 = *(longlong *)(lVar4 + 0x10);
          plVar6 = *(longlong **)(lVar4 + 0x18);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
        }
        if (lVar7 != 0) {
          *(longlong *)(lVar7 + 0x30) = param_1[5];
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
      }
      plVar6 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  return;
}



// FUNCTION 14219b550 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseRawMethodDelegateInstance<0,FMessageRouter,TTypeWrapper<void>___cdecl(void),FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
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
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14219b5c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TBaseRawMethodDelegateInstance<0,FMessageRouter,TTypeWrapper<void>___cdecl(void),TSharedRef<IMessageInterceptor,1>,FName>
::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1409105e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14219b600 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseRawMethodDelegateInstance<0,FMessageRouter,TTypeWrapper<void>___cdecl(void),TWeakPtr<IMessageReceiver,1>,FName>
::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14219b670 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_fee03d9838c5c1a2f8909b77cb588ace>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14219b700 FUN_14219b700 body=66 status=ok
// SIG undefined FUN_14219b700(void)

undefined8 * FUN_14219b700(undefined8 *param_1,ulonglong param_2)

{
  FUN_140537630(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14219b750 FUN_14219b750 body=97 status=ok
// SIG undefined FUN_14219b750(void)

undefined8 * FUN_14219b750(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144fdd818;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14219b7c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FMessageBridge::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FMessageBridge();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14219b800 FUN_14219b800 body=263 status=ok
// SIG undefined FUN_14219b800(void)

undefined8 * FUN_14219b800(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144fdd650;
  if (param_1[4] != 0) {
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 7);
    (**(code **)(*(longlong *)param_1[4] + 0x18))((longlong *)param_1[4],1);
    plVar4 = (longlong *)param_1[4];
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,1);
    }
    param_1[4] = 0;
  }
  plVar4 = (longlong *)param_1[3];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,1);
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
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
  *param_1 = &PTR__purecall_14415afe8;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14219b910 FUN_14219b910 body=313 status=ok
// SIG undefined FUN_14219b910(void)

undefined8 * FUN_14219b910(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  
  *param_1 = &PTR_LAB_144fdd778;
  if (param_1[0xe] != 0) {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x17);
    if (cVar5 != '\0') {
      plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x17);
      (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1[0xe],1);
    }
    FMemory::Free(param_1[0xe]);
  }
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  plVar6 = (longlong *)param_1[0x10];
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
  plVar6 = (longlong *)param_1[0xc];
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
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = &PTR__purecall_14415afe8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14219ba50 `scalar_deleting_destructor' body=410 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMessageRouter::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_IsPromotedBuild_144fdd738;
  param_1[1] = &PTR_LAB_144fdd768;
  FUN_1415b5910(param_1[0x29]);
  param_1[0x29] = 0;
  plVar4 = (longlong *)param_1[0x28];
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
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 0x23);
  lVar5 = param_1[0x21];
  while (lVar5 != 0) {
    param_1[0x21] = *(undefined8 *)param_1[0x21];
    if (lVar5 != 0) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5 + 8);
      FMemory::operator_delete(lVar5,0x18);
    }
    lVar5 = param_1[0x21];
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xc,0);
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  param_1[1] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 14219bbf0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMessageSubscription::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR__purecall_144147258;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14219bc60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FMessageTracer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FMessageTracer();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 14219bca0 `scalar_deleting_destructor' body=264 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FMessageTracerMessageInfo::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x10);
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14219bdb0 FUN_14219bdb0 body=43 status=ok
// SIG undefined FUN_14219bdb0(void)

undefined8 * FUN_14219bdb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144fdd5d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14219bea0 FUN_14219bea0 body=102 status=ok
// SIG undefined FUN_14219bea0(void)

undefined8 * FUN_14219bea0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_144fdda68;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar3[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    puVar3[5] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14219bf10 FUN_14219bf10 body=126 status=ok
// SIG undefined FUN_14219bf10(void)

undefined8 * FUN_14219bf10(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144fdda80;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *(undefined1 *)(puVar2 + 7) = *(undefined1 *)(param_1 + 0x38);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14219bf90 FUN_14219bf90 body=118 status=ok
// SIG undefined FUN_14219bf90(void)

undefined8 * FUN_14219bf90(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144fdda98;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14219c010 FUN_14219c010 body=87 status=ok
// SIG undefined FUN_14219c010(void)

void FUN_14219c010(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144fdd948;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = uVar1;
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_GetPoolName_144fdd990;
  }
  return;
}



// FUNCTION 14219c070 CreateCopy body=112 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FMessageRouter,TTypeWrapper<void>___cdecl(void),FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x48);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144fdd8b8;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    puVar3[3] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    puVar3[5] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
    lVar1 = *(longlong *)(param_1 + 0x38);
    puVar3[7] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar3[8] = *(undefined8 *)(param_1 + 0x40);
    *puVar3 = &PTR_GetPoolName_144fdd900;
  }
  return;
}



// FUNCTION 14219c0e0 FUN_14219c0e0 body=111 status=ok
// SIG undefined FUN_14219c0e0(void)

void FUN_14219c0e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x40);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144fdd828;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    puVar3[3] = uVar2;
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
    puVar3[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar3 = &PTR_GetPoolName_144fdd870;
  }
  return;
}



// FUNCTION 14219c150 CreateCopy body=111 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FMessageRouter,TTypeWrapper<void>___cdecl(void),TWeakPtr<IMessageReceiver,1>,FName>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x40);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144fdd9d8;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    puVar3[3] = uVar2;
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
    puVar3[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar3 = &PTR_GetPoolName_144fdda20;
  }
  return;
}



// FUNCTION 14219c1c0 FUN_14219c1c0 body=14 status=ok
// SIG undefined FUN_14219c1c0(void)

void FUN_14219c1c0(longlong param_1)

{
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x10),0x20);
  return;
}



// FUNCTION 14219c1d0 DestroyObject body=109 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FMessageTracerDispatchState,SharedPointerInternals::DefaultDeleter<FMessageTracerDispatchState>_>
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
    plVar5 = *(longlong **)(lVar4 + 0x18);
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
    FMemory::operator_delete(lVar4,0x38);
  }
  return;
}



// FUNCTION 14219c240 DestroyObject body=115 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FMessageTracerEndpointInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerEndpointInfo>,1>
     ::DestroyObject(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(plVar1 + 0xe);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(plVar1 + 0xb);
    *(undefined4 *)(plVar1 + 9) = 0;
    if (plVar1[8] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(plVar1,0);
    if (plVar1[4] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x80);
    return;
  }
  return;
}



// FUNCTION 14219c2c0 DestroyObject body=48 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FMessageTracerInterceptorInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerInterceptorInfo>,1>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar1 + 8);
    FMemory::operator_delete(lVar1,0x28);
    return;
  }
  return;
}



// FUNCTION 14219c2f0 FUN_14219c2f0 body=20 status=ok
// SIG undefined FUN_14219c2f0(void)

void FUN_14219c2f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMessageTracerMessageInfo::_scalar_deleting_destructor_(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 14219c310 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FMessageTracerTypeInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerTypeInfo>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar1);
    FMemory::operator_delete(lVar1,0x18);
    return;
  }
  return;
}



// FUNCTION 14219c360 Disable body=66 status=ok
// SIG undefined Disable(void)

void FMessageBridge::Disable(longlong param_1)

{
  if (*(char *)(param_1 + 0xa8) != '\0') {
    if (*(undefined8 **)(param_1 + 0xc0) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_1 + 0xc0))();
    }
    if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))();
    }
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 14219c3b0 DispatchMessage body=2111 status=ok
// SIG undefined DispatchMessage(void)

/* WARNING: Removing unreachable block (ram,0x00014219c9da) */
/* WARNING: Removing unreachable block (ram,0x00014219c9e9) */
/* WARNING: Removing unreachable block (ram,0x00014219c9f8) */

void FMessageRouter::DispatchMessage(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  DWORD *pDVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  bool bVar19;
  int local_res20 [2];
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c0;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong local_90 [2];
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  
  plVar10 = (longlong *)*param_2;
  iVar7 = 0;
  lVar8 = (**(code **)(*plVar10 + 0x18))(plVar10);
  if (lVar8 == 0) {
    return;
  }
  uVar9 = (**(code **)(*plVar10 + 0x20))(plVar10);
  cVar6 = FWeakObjectPtr::IsValid(uVar9,0,1);
  if (cVar6 == '\0') {
    return;
  }
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  plVar10 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x30))();
  if (0 < (int)plVar10[1]) {
    lVar8 = *plVar10;
    lVar18 = (longlong)(int)plVar10[1] * 0x10 + lVar8;
    for (; lVar8 != lVar18; lVar8 = lVar8 + 0x10) {
      TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x60,local_res20,lVar8);
      if ((local_res20[0] == -1) ||
         (lVar16 = *(longlong *)(param_1 + 0x60) + (longlong)local_res20[0] * 0x28, lVar16 == 0)) {
        plVar10 = (longlong *)0x0;
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)(lVar16 + 0x10);
        plVar12 = *(longlong **)(lVar16 + 0x18);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
          UNLOCK();
        }
      }
      plVar15 = plVar12;
      if (plVar12 == (longlong *)0x0) {
LAB_14219c569:
        TSet<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 0x60,lVar8);
LAB_14219c575:
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar15 + 1;
          lVar16 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
      }
      else {
        LOCK();
        iVar7 = (int)plVar12[1];
        bVar19 = iVar7 == 0;
        if (bVar19) {
          *(int *)(plVar12 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (plVar15 = (longlong *)0x0, plVar17 = (longlong *)0x0, !bVar19) {
          LOCK();
          bVar19 = iVar7 == (int)plVar12[1];
          if (bVar19) {
            *(int *)(plVar12 + 1) = iVar7 + 1;
          }
          UNLOCK();
          plVar15 = plVar12;
          plVar17 = plVar10;
          if (bVar19) break;
          LOCK();
          iVar7 = (int)plVar12[1];
          bVar19 = iVar7 == 0;
          if (bVar19) {
            *(int *)(plVar12 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
        uVar5 = local_d0;
        if (plVar17 == (longlong *)0x0) goto LAB_14219c569;
        for (plVar10 = local_d8; plVar10 != local_d8 + (longlong)(int)local_d0 * 2;
            plVar10 = plVar10 + 2) {
          if ((longlong *)*plVar10 == plVar17) {
            if ((int)((longlong)plVar10 - (longlong)local_d8 >> 4) != -1) goto LAB_14219c575;
            break;
          }
        }
        lVar16 = (longlong)(int)local_d0;
        iVar7 = (int)local_d0 + 1;
        local_d0 = CONCAT44(local_d0._4_4_,iVar7);
        if (local_d0._4_4_ < iVar7) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_d8,uVar5 & 0xffffffff);
        }
        local_d8[lVar16 * 2] = (longlong)plVar17;
        (local_d8 + lVar16 * 2)[1] = (longlong)plVar15;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
          goto LAB_14219c575;
        }
      }
    }
    goto LAB_14219c77c;
  }
  plVar10 = (longlong *)*param_2;
  lVar8 = (**(code **)(*plVar10 + 0x18))(plVar10);
  if (lVar8 == 0) {
LAB_14219c611:
    local_c0 = 0;
  }
  else {
    uVar9 = (**(code **)(*plVar10 + 0x20))(plVar10);
    cVar6 = FWeakObjectPtr::IsValid(uVar9,0,1);
    if (cVar6 == '\0') goto LAB_14219c611;
    uVar9 = (**(code **)(*plVar10 + 0x20))(plVar10);
    lVar8 = FWeakObjectPtr::Get(uVar9);
    local_c0 = *(longlong *)(lVar8 + 0x18);
    iVar7 = (int)local_c0;
  }
  plVar10 = (longlong *)(param_1 + 0xb0);
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar8 = *(longlong *)(param_1 + 0xf0);
    if (*(longlong *)(param_1 + 0xf0) == 0) {
      lVar8 = param_1 + 0xe8;
    }
    iVar7 = *(int *)(lVar8 + ((longlong)((int)((ulonglong)local_c0 >> 0x20) + iVar7) &
                             (longlong)*(int *)(param_1 + 0xf8) - 1U) * 4);
    if (iVar7 != -1) {
      do {
        plVar12 = (longlong *)((longlong)iVar7 * 0x20 + *plVar10);
        if (*plVar12 == local_c0) {
          if ((iVar7 != -1) && (plVar12 != (longlong *)0x0)) goto LAB_14219c6b9;
          break;
        }
        iVar7 = (int)plVar12[3];
      } while (iVar7 != -1);
    }
  }
  local_a0 = &local_c0;
  FUN_1404b9690(plVar10,&local_b8,&local_a0,0);
  plVar12 = (longlong *)((longlong)local_b8 * 0x20 + *plVar10);
LAB_14219c6b9:
  FUN_14219dc10(param_1,plVar12 + 1,param_2,&local_d8);
  local_b0 = 0xe6;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar8 = *(longlong *)(param_1 + 0xf0);
    if (*(longlong *)(param_1 + 0xf0) == 0) {
      lVar8 = param_1 + 0xe8;
    }
    iVar7 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0xf8) - 1U & 0xe6) * 4);
    if (iVar7 != -1) {
      do {
        plVar12 = (longlong *)((longlong)iVar7 * 0x20 + *plVar10);
        if (*plVar12 == 0xe6) {
          if ((iVar7 != -1) && (plVar12 != (longlong *)0x0)) goto LAB_14219c769;
          break;
        }
        iVar7 = (int)plVar12[3];
      } while (iVar7 != -1);
    }
  }
  local_98 = &local_b0;
  FUN_1404b9690(plVar10,&local_b4,&local_98,0);
  plVar12 = (longlong *)((longlong)local_b4 * 0x20 + *plVar10);
LAB_14219c769:
  FUN_14219dc10(param_1,plVar12 + 1,param_2,&local_d8);
LAB_14219c77c:
  local_80 = local_d8 + (longlong)(int)local_d0 * 2;
  plVar10 = local_d8;
  if (local_d8 != local_80) {
    do {
      iVar7 = (**(code **)(*(longlong *)*plVar10 + 0x10))();
      if (iVar7 == 0xff) {
        plVar12 = (longlong *)plVar10[1];
        local_78 = *plVar10;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_70 = plVar12;
        FUN_1421a2490(*(undefined8 *)(param_1 + 0x138),param_2,&local_78,0);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar12 + 1;
          lVar8 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        (**(code **)(*(longlong *)*plVar10 + 0x20))((longlong *)*plVar10,param_2);
        plVar12 = (longlong *)plVar10[1];
        local_68 = *plVar10;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_60 = plVar12;
        FUN_1421a26b0(*(undefined8 *)(param_1 + 0x138),param_2,&local_68);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar12 + 1;
          lVar8 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12);
            }
          }
        }
      }
      else {
        pDVar11 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar12 = TlsGetValue(*pDVar11);
        if (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)operator_new(0x18);
          if (plVar12 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            *plVar12 = 0;
            plVar12[1] = 0;
            *(undefined4 *)(plVar12 + 2) = 0;
          }
          TlsSetValue(*pDVar11,plVar12);
        }
        plVar15 = (longlong *)plVar12[1];
        if (plVar15 == (longlong *)0x0) {
          if (*plVar12 == 0) {
            lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar11 + 2);
            plVar12[1] = lVar8;
            if (lVar8 == 0) {
              puVar13 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar12[1] = (longlong)puVar13;
              lVar8 = 0x1f;
              do {
                puVar3 = puVar13 + 0x20;
                *puVar13 = puVar3;
                lVar8 = lVar8 + -1;
                puVar13 = puVar3;
              } while (lVar8 != 0);
              *puVar3 = 0;
            }
          }
          else {
            plVar12[1] = *plVar12;
            *plVar12 = 0;
          }
          plVar15 = (longlong *)plVar12[1];
          iVar14 = 0x20;
          *(undefined4 *)(plVar12 + 2) = 0x20;
        }
        else {
          iVar14 = (int)plVar12[2];
        }
        plVar12[1] = *plVar15;
        *(int *)(plVar12 + 2) = iVar14 + -1;
        plVar12 = (longlong *)FUN_1415914c0(local_90);
        local_58 = *plVar12;
        *plVar12 = 0;
        *plVar15 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar15 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
        *plVar15 = (longlong)&PTR_FUN_144fdd818;
        *(undefined1 *)(plVar15 + 9) = 0;
        plVar15[10] = local_58;
        if (local_90[0] != 0) {
          LOCK();
          piVar1 = (int *)(local_90[0] + 0x48);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar12 = *(longlong **)(param_1 + 0x140);
        lVar8 = *(longlong *)(param_1 + 0x138);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        plVar17 = (longlong *)plVar10[1];
        lVar18 = *plVar10;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
          UNLOCK();
        }
        lVar16 = *param_2;
        plVar4 = (longlong *)param_2[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        plVar15[2] = lVar16;
        plVar15[3] = (longlong)plVar4;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        plVar15[4] = lVar18;
        plVar15[5] = (longlong)plVar17;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
          UNLOCK();
        }
        *(int *)(plVar15 + 6) = iVar7;
        plVar15[7] = lVar8;
        plVar15[8] = (longlong)plVar12;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
          UNLOCK();
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4);
            }
          }
        }
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17);
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar17 = plVar12 + 1;
          lVar8 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12);
            }
          }
        }
        lVar8 = plVar15[10];
        piVar1 = (int *)(lVar8 + 0x48);
        if (lVar8 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_a8 = lVar8;
        FUN_1421a1c90(plVar15,0,0xff,1);
        if (lVar8 != 0) {
          LOCK();
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            FGraphEvent::Recycle(local_a8);
          }
        }
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != local_80);
  }
  if ((int)local_d0 != 0) {
    plVar10 = local_d8 + 1;
    iVar7 = (int)local_d0;
    do {
      plVar12 = (longlong *)*plVar10;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar12 + 1;
        lVar8 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      plVar10 = plVar10 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14219cbf0 DoTask body=517 status=ok
// SIG undefined DoTask(void)

void FMessageDispatchTask::DoTask(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar8 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar2[1];
    bVar9 = iVar6 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (!bVar9) {
      while( true ) {
        LOCK();
        bVar9 = iVar6 == (int)plVar2[1];
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar9) break;
        LOCK();
        iVar6 = (int)plVar2[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar9) {
          return;
        }
      }
      if (plVar2 != (longlong *)0x0) {
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (plVar3 != (longlong *)0x0) {
          plVar4 = *(longlong **)(param_1 + 0x30);
          plVar7 = plVar4;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            iVar6 = (int)plVar4[1];
            bVar9 = iVar6 == 0;
            if (bVar9) {
              *(int *)(plVar4 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
            while (plVar7 = plVar8, !bVar9) {
              LOCK();
              bVar9 = iVar6 == (int)plVar4[1];
              if (bVar9) {
                *(int *)(plVar4 + 1) = iVar6 + 1;
              }
              UNLOCK();
              if (bVar9) {
                plVar7 = plVar4;
                plVar8 = (longlong *)0x0;
                if ((plVar4 != (longlong *)0x0) &&
                   (plVar8 = *(longlong **)(param_1 + 0x28), plVar8 != (longlong *)0x0)) {
                  LOCK();
                  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                  UNLOCK();
                  local_48 = plVar3;
                  local_40 = plVar2;
                  FUN_1421a2490(plVar8,param_1,&local_48,1);
                  LOCK();
                  plVar7 = plVar2 + 1;
                  lVar5 = *plVar7;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  plVar7 = plVar4;
                  if ((int)lVar5 == 1) {
                    (**(code **)*plVar2)(plVar2);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar2 + 0xc);
                    iVar6 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (**(code **)(*plVar2 + 8))(plVar2,1);
                    }
                  }
                }
                break;
              }
              LOCK();
              iVar6 = (int)plVar4[1];
              bVar9 = iVar6 == 0;
              if (bVar9) {
                *(int *)(plVar4 + 1) = 0;
                iVar6 = 0;
              }
              UNLOCK();
            }
          }
          (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
          if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
            piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
            LOCK();
            iVar6 = *piVar1;
            if (iVar6 == 0) {
              *piVar1 = 0;
              iVar6 = 0;
            }
            UNLOCK();
            if (0 < iVar6) {
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
              local_38 = plVar3;
              local_30 = plVar2;
              FUN_1421a26b0(plVar8,param_1,&local_38);
              LOCK();
              plVar8 = plVar2 + 1;
              lVar5 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar2)(plVar2);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar2 + 8))(plVar2,1);
                }
              }
            }
          }
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar7 + 1;
            lVar5 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
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
        }
        LOCK();
        plVar8 = plVar2 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14219ce00 Empty body=411 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
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
  uStack_64 = 1;
  local_68 = 0;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = *puVar9;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar8 = local_68 + 1;
      bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar8;
      if (bVar5) goto LAB_14219cec4;
      uVar6 = puVar9[lVar7 + 1];
    }
    uStack_64 = -uVar6 & uVar6;
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
LAB_14219cec4:
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
      plVar4 = *(longlong **)(*param_1 + 0x18 + (longlong)iStack_2c * 0x28);
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
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
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
  return;
}



// FUNCTION 14219cfa0 Enable body=663 status=ok
// SIG undefined Enable(void)

void FMessageBridge::Enable(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (((*(char *)(param_1 + 0xa8) == '\0') && (*(longlong *)(param_1 + 0x98) != 0)) &&
     (plVar5 = *(longlong **)(param_1 + 0xd0), plVar5 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar5 + 8))(plVar5,param_1 + 0x18);
    if (cVar4 != '\0') {
      plVar5 = (longlong *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x20,local_58);
      if (*plVar5 == 0) {
        local_78 = 0;
      }
      else {
        local_78 = *plVar5 + 8;
      }
      local_70 = (longlong *)plVar5[1];
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                (*(longlong **)(param_1 + 0x98),param_1 + 0x30,&local_78);
      plVar5 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_70 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_50 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      plVar5 = (longlong *)(param_1 + 0xc0);
      if ((longlong *)*plVar5 == (longlong *)0x0) {
        local_res10 = 0xe6;
        plVar6 = (longlong *)
                 TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x20,local_38);
        if (*plVar6 == 0) {
          local_68 = 0;
        }
        else {
          local_68 = *plVar6 + 8;
        }
        local_60 = (longlong *)plVar6[1];
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        local_res8[0] = 0x20201;
        plVar6 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x98) + 0x38))
                           (*(longlong **)(param_1 + 0x98),local_48,&local_68,&local_res10,
                            local_res8);
        if (plVar5 != plVar6) {
          *plVar5 = *plVar6;
          *plVar6 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 200,plVar6 + 1);
        }
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_40 + 1;
          lVar3 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
        plVar5 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_60 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_30 + 1;
          lVar3 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)local_30 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
      }
      else {
        (**(code **)(*(longlong *)*plVar5 + 8))();
      }
      *(undefined1 *)(param_1 + 0xa8) = 1;
    }
  }
  return;
}



// FUNCTION 14219d240 Enqueue body=121 status=ok
// SIG undefined Enqueue(void)

undefined8 TQueue<TBaseDelegate<void>,0>::Enqueue(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    if (((param_2 != puVar2 + 1) && ((int)param_2[1] != 0)) &&
       ((longlong *)*param_2 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_2 + 0x30))();
    }
    LOCK();
    puVar1 = (undefined8 *)*param_1;
    *param_1 = puVar2;
    UNLOCK();
    LOCK();
    *puVar1 = puVar2;
    UNLOCK();
    return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 14219d2c0 Execute body=57 status=ok
// SIG undefined Execute(void)

void TBaseRawMethodDelegateInstance<0,FMessageRouter,TTypeWrapper<void>___cdecl(void),FMessageAddress>
     ::Execute(longlong param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x20);
  uStack_14 = *(undefined4 *)(param_1 + 0x24);
  uStack_10 = *(undefined4 *)(param_1 + 0x28);
  uStack_c = *(undefined4 *)(param_1 + 0x2c);
  (**(code **)(param_1 + 0x10))
            ((longlong)(int)*(undefined8 *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),&local_18);
  return;
}



// FUNCTION 14219d300 Execute body=80 status=ok
// SIG undefined Execute(void)

void TBaseRawMethodDelegateInstance<0,FMessageRouter,TTypeWrapper<void>___cdecl(void),FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
     ::Execute(longlong param_1)

{
  longlong lVar1;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  code *local_20;
  undefined8 uStack_18;
  
  local_20 = *(code **)(param_1 + 0x10);
  uStack_18 = *(undefined8 *)(param_1 + 0x18);
  local_48 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = *(longlong *)(param_1 + 8);
  local_40 = *(longlong *)(param_1 + 0x38);
  local_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x24);
  uStack_30 = *(undefined4 *)(param_1 + 0x28);
  uStack_2c = *(undefined4 *)(param_1 + 0x2c);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
    UNLOCK();
  }
  (*local_20)((int)uStack_18 + lVar1,&local_38,&local_48);
  return;
}



// FUNCTION 14219d350 Execute body=73 status=ok
// SIG undefined Execute(void)

void TBaseRawMethodDelegateInstance<0,FMessageRouter,TTypeWrapper<void>___cdecl(void),TSharedRef<IMessageInterceptor,1>,FName>
     ::Execute(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar2 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  lVar1 = *(longlong *)(param_1 + 8);
  local_30 = *(longlong *)(param_1 + 0x28);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar2)(iStack_18 + lVar1,&local_38,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 14219d3a0 Execute body=73 status=ok
// SIG undefined Execute(void)

void TBaseRawMethodDelegateInstance<0,FMessageRouter,TTypeWrapper<void>___cdecl(void),TWeakPtr<IMessageReceiver,1>,FName>
     ::Execute(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar2 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  lVar1 = *(longlong *)(param_1 + 8);
  local_30 = *(longlong *)(param_1 + 0x28);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
    UNLOCK();
  }
  (*pcVar2)(iStack_18 + lVar1,&local_38,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 14219d3f0 ExecuteIfSafe body=59 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FMessageAddress>::ExecuteIfSafe
          (longlong param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x20);
  uStack_14 = *(undefined4 *)(param_1 + 0x24);
  uStack_10 = *(undefined4 *)(param_1 + 0x28);
  uStack_c = *(undefined4 *)(param_1 + 0x2c);
  (**(code **)(param_1 + 0x10))
            ((longlong)(int)*(undefined8 *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),&local_18);
  return 1;
}



// FUNCTION 14219d430 ExecuteIfSafe body=82 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::ExecuteIfSafe(longlong param_1)

{
  longlong lVar1;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  code *local_20;
  undefined8 uStack_18;
  
  local_20 = *(code **)(param_1 + 0x10);
  uStack_18 = *(undefined8 *)(param_1 + 0x18);
  local_48 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = *(longlong *)(param_1 + 8);
  local_40 = *(longlong *)(param_1 + 0x38);
  local_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x24);
  uStack_30 = *(undefined4 *)(param_1 + 0x28);
  uStack_2c = *(undefined4 *)(param_1 + 0x2c);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
    UNLOCK();
  }
  (*local_20)((int)uStack_18 + lVar1,&local_38,&local_48);
  return 1;
}



// FUNCTION 14219d490 ExecuteIfSafe body=75 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageInterceptor,1>,FName>
::ExecuteIfSafe(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar2 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  lVar1 = *(longlong *)(param_1 + 8);
  local_30 = *(longlong *)(param_1 + 0x28);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar2)(iStack_18 + lVar1,&local_38,*(undefined8 *)(param_1 + 0x30));
  return 1;
}



// FUNCTION 14219d4e0 ExecuteIfSafe body=75 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TWeakPtr<IMessageReceiver,1>,FName>
::ExecuteIfSafe(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar2 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  lVar1 = *(longlong *)(param_1 + 8);
  local_30 = *(longlong *)(param_1 + 0x28);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
    UNLOCK();
  }
  (*pcVar2)(iStack_18 + lVar1,&local_38,*(undefined8 *)(param_1 + 0x30));
  return 1;
}



// FUNCTION 14219d530 ExecuteTask body=393 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FMessageDispatchTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  FMessageDispatchTask::DoTask(param_1 + 2,param_3,param_1 + 10);
  plVar7 = (longlong *)param_1[8];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  plVar7 = (longlong *)param_1[5];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
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
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_141591a60(param_1[10],param_2,param_3);
  *param_1 = &PTR_FUN_144fdd818;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 0x48);
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



// FUNCTION 14219d6c0 Exit body=1355 status=ok
// SIG undefined Exit(void)

void FMessageRouter::Exit(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  longlong *plVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong local_158;
  undefined8 local_150;
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  undefined4 local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  uint uStack_124;
  uint *puStack_120;
  undefined4 local_118;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined8 uStack_100;
  uint *puStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  int local_e0;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  int local_c0;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  int local_a0;
  longlong *local_98;
  int iStack_90;
  uint uStack_8c;
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  
  iVar8 = 0;
  uStack_144 = 1;
  plVar15 = (longlong *)(param_1 + 0x60);
  local_158 = 0;
  uVar3 = *(uint *)(param_1 + 0x88);
  puVar1 = (uint *)(param_1 + 0x70);
  local_150 = 0;
  local_148 = 0;
  uStack_134 = 0;
  iStack_130 = 0;
  if (uVar3 != 0) {
    puVar14 = *(uint **)(param_1 + 0x80);
    if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar11 = *puVar14;
    iStack_130 = iVar8;
    local_148 = iVar8;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_148;
      iStack_130 = iStack_130 + 0x20;
      iVar16 = local_148 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
      local_148 = iVar16;
      if (bVar5) goto LAB_14219d7a6;
      uVar11 = puVar14[lVar12 + 1];
    }
    uStack_144 = -uVar11 & uVar11;
    iVar16 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar16 = 0x20;
    }
    else {
      iVar16 = 0x1f - iVar16;
    }
    uStack_134 = (iStack_130 - iVar16) + 0x1f;
    if ((int)uVar3 < (int)uStack_134) {
LAB_14219d7a6:
      uStack_134 = uVar3;
    }
  }
  local_138 = 0xffffffff;
  uStack_cc = *(uint *)(param_1 + 0x88);
  uStack_100 = CONCAT44(uStack_144,local_148);
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_134;
  uStack_e8 = CONCAT44(uStack_12c,iStack_130);
  local_e0 = (int)uStack_cc >> 5;
  local_d0 = -1 << ((byte)uStack_cc & 0x1f);
  local_c8 = uStack_cc & 0xffffffe0;
  iStack_90 = local_148;
  uStack_8c = uStack_144;
  puStack_140 = puVar1;
  local_108 = plVar15;
  puStack_f8 = puVar1;
  local_88 = puVar1;
  local_78 = uStack_e8;
  local_98 = plVar15;
  uStack_f0 = uStack_80;
  uStack_ec = uStack_7c;
  uVar11 = uStack_cc;
  if (uStack_cc != uVar3) {
    puVar14 = *(uint **)(param_1 + 0x80);
    if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar11 = puVar14[local_e0] & local_d0;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_e0;
      local_c8 = local_c8 + 0x20;
      iVar16 = local_e0 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_e0;
      local_e0 = iVar16;
      if (bVar5) goto LAB_14219d891;
      uVar11 = puVar14[lVar12 + 1];
      local_d0 = 0xffffffff;
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
    uStack_cc = (local_c8 - iVar16) + 0x1f;
    uVar11 = uStack_cc;
    if ((int)uVar3 < (int)uStack_cc) {
LAB_14219d891:
      uStack_cc = uVar3;
      uVar11 = uVar3;
    }
  }
  while (((uStack_7c != uVar11 || (local_88 != puVar1)) || (local_98 != plVar15))) {
    lVar12 = *local_98 + (longlong)(int)uStack_7c * 0x28;
    iVar16 = TArray<TWeakPtr<FImgMediaLoader,1>,FDefaultAllocator>::Find(&local_158,lVar12 + 0x10);
    uVar6 = local_150;
    if (iVar16 == -1) {
      lVar13 = (longlong)(int)local_150;
      iVar16 = (int)local_150 + 1;
      local_150 = CONCAT44(local_150._4_4_,iVar16);
      if (local_150._4_4_ < iVar16) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_158,uVar6 & 0xffffffff);
      }
      puVar9 = (undefined8 *)(lVar13 * 0x10 + local_158);
      *puVar9 = *(undefined8 *)(lVar12 + 0x10);
      lVar12 = *(longlong *)(lVar12 + 0x18);
      puVar9[1] = lVar12;
      if (lVar12 != 0) {
        LOCK();
        *(int *)(lVar12 + 0xc) = *(int *)(lVar12 + 0xc) + 1;
        UNLOCK();
      }
    }
    uStack_80 = uStack_80 & ~uStack_8c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
  }
  plVar15 = (longlong *)(param_1 + 0xb0);
  local_128 = 0;
  uVar3 = *(uint *)(param_1 + 0xd8);
  puVar1 = (uint *)(param_1 + 0xc0);
  uStack_124 = 1;
  uStack_114 = 0;
  iStack_110 = 0;
  if (uVar3 != 0) {
    puVar14 = *(uint **)(param_1 + 0xd0);
    if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar11 = *puVar14;
    iStack_110 = iVar8;
    local_128 = iVar8;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_128;
      iStack_110 = iStack_110 + 0x20;
      iVar8 = local_128 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_128;
      local_128 = iVar8;
      if (bVar5) goto LAB_14219d9f8;
      uVar11 = puVar14[lVar12 + 1];
    }
    uStack_124 = -uVar11 & uVar11;
    iVar8 = 0x1f;
    if (uStack_124 != 0) {
      for (; uStack_124 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_124 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_114 = (iStack_110 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_114) {
LAB_14219d9f8:
      uStack_114 = uVar3;
    }
  }
  local_118 = 0xffffffff;
  uStack_ac = *(uint *)(param_1 + 0xd8);
  uStack_68 = CONCAT44(uStack_124,local_128);
  uStack_f0 = 0xffffffff;
  uStack_ec = uStack_114;
  uStack_e8 = CONCAT44(uStack_10c,iStack_110);
  local_c0 = (int)uStack_ac >> 5;
  local_b0 = -1 << ((byte)uStack_ac & 0x1f);
  local_a8 = uStack_ac & 0xffffffe0;
  uStack_100 = CONCAT44(uStack_124,local_128);
  puStack_120 = puVar1;
  local_108 = plVar15;
  puStack_f8 = puVar1;
  local_70 = plVar15;
  puStack_60 = puVar1;
  uStack_50 = uStack_e8;
  uStack_58 = uStack_f0;
  uStack_54 = uStack_ec;
  uVar11 = uStack_ac;
  if (uStack_ac != uVar3) {
    puVar14 = *(uint **)(param_1 + 0xd0);
    if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar11 = puVar14[local_c0] & local_b0;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_c0;
      local_a8 = local_a8 + 0x20;
      iVar8 = local_c0 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c0;
      local_c0 = iVar8;
      if (bVar5) goto LAB_14219dacf;
      uVar11 = puVar14[lVar12 + 1];
      local_b0 = 0xffffffff;
    }
    uVar11 = -uVar11 & uVar11;
    local_a0 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> local_a0 == 0; local_a0 = local_a0 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - local_a0;
    }
    uStack_ac = (local_a8 - iVar8) + 0x1f;
    uVar11 = uStack_ac;
    if ((int)uVar3 < (int)uStack_ac) {
LAB_14219dacf:
      uStack_ac = uVar3;
      uVar11 = uVar3;
    }
  }
  while (((uStack_ec != uVar11 || (puStack_f8 != puVar1)) || (local_108 != plVar15))) {
    puVar9 = *(undefined8 **)((longlong)(int)uStack_ec * 0x20 + 8 + *local_108);
    puVar17 = puVar9 + (longlong)*(int *)((longlong)(int)uStack_ec * 0x20 + 0x10 + *local_108) * 2;
    for (; puVar9 != puVar17; puVar9 = puVar9 + 2) {
      puVar7 = (undefined8 *)(**(code **)(*(longlong *)*puVar9 + 0x20))();
      iVar8 = TArray<TWeakPtr<FImgMediaLoader,1>,FDefaultAllocator>::Find(&local_158,puVar7);
      uVar6 = local_150;
      if (iVar8 == -1) {
        lVar12 = (longlong)(int)local_150;
        iVar8 = (int)local_150 + 1;
        local_150 = CONCAT44(local_150._4_4_,iVar8);
        if (local_150._4_4_ < iVar8) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_158,uVar6 & 0xffffffff);
        }
        puVar10 = (undefined8 *)(lVar12 * 0x10 + local_158);
        *puVar10 = *puVar7;
        lVar12 = puVar7[1];
        puVar10[1] = lVar12;
        if (lVar12 != 0) {
          LOCK();
          *(int *)(lVar12 + 0xc) = *(int *)(lVar12 + 0xc) + 1;
          UNLOCK();
        }
      }
    }
    uStack_100._4_4_ = (uint)((ulonglong)uStack_100 >> 0x20);
    uStack_f0 = uStack_f0 & ~uStack_100._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
  }
  if ((int)local_150 != 0) {
    plVar15 = (longlong *)(local_158 + 8);
    iVar8 = (int)local_150;
    do {
      plVar4 = (longlong *)*plVar15;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar16 == 1) && (plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar15 = plVar15 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14219dc10 FUN_14219dc10 body=810 status=ok
// SIG undefined FUN_14219dc10(void)

void FUN_14219dc10(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  char *pcVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  bool bVar19;
  char local_48;
  byte local_47;
  char local_46;
  byte local_45;
  
  bVar6 = (**(code **)(*(longlong *)*param_3 + 0x38))();
  iVar18 = 0;
  if ((int)param_2[1] < 1) {
    return;
  }
  lVar17 = 0;
LAB_14219dc60:
  plVar3 = *(longlong **)(lVar17 + 8 + *param_2);
  plVar16 = *(longlong **)(lVar17 + *param_2);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  cVar7 = (**(code **)(*plVar16 + 0x28))(plVar16);
  if (cVar7 == '\0') goto LAB_14219def0;
  pcVar10 = (char *)(**(code **)(*plVar16 + 0x18))(plVar16);
  local_48 = '\x01';
  local_47 = bVar6;
  cVar7 = *pcVar10;
  if (cVar7 == '\x02') {
LAB_14219dcd6:
    cVar7 = pcVar10[2];
    pcVar13 = pcVar10 + 2;
    local_46 = '\x01';
    local_45 = bVar6;
    if (cVar7 != '\x02') {
      if (((byte)pcVar10[3] <= bVar6) && (((byte)pcVar10[3] < bVar6 || (cVar7 != '\x01')))) {
        if (cVar7 != '\x01') goto LAB_14219def0;
        pcVar13 = &local_46;
      }
      if (pcVar13[1] != pcVar10[3]) goto LAB_14219def0;
    }
    plVar11 = (longlong *)(**(code **)(*plVar16 + 0x20))(plVar16);
    plVar16 = (longlong *)plVar11[1];
    plVar14 = plVar16;
    if (plVar16 != (longlong *)0x0) {
      plVar14 = (longlong *)0x0;
      LOCK();
      iVar8 = (int)plVar16[1];
      bVar19 = iVar8 == 0;
      if (bVar19) {
        *(int *)(plVar16 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
      while (!bVar19) {
        LOCK();
        bVar19 = iVar8 == (int)plVar16[1];
        if (bVar19) {
          *(int *)(plVar16 + 1) = iVar8 + 1;
        }
        UNLOCK();
        if (bVar19) {
          plVar14 = plVar16;
          if ((plVar16 != (longlong *)0x0) &&
             (plVar11 = (longlong *)*plVar11, plVar11 != (longlong *)0x0)) {
            if (bVar6 == 0) {
              iVar8 = (**(code **)(*plVar11 + 0x10))(plVar11);
              iVar9 = (**(code **)(*(longlong *)*param_3 + 0x48))();
              if (iVar8 != iVar9) {
                LOCK();
                plVar11 = plVar16 + 1;
                lVar15 = *plVar11;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)lVar15 == 1) {
                  (**(code **)*plVar16)(plVar16);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar16 + 0xc);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar16 + 8))(plVar16,1);
                  }
                }
                if (plVar3 != (longlong *)0x0) {
                  LOCK();
                  plVar16 = plVar3 + 1;
                  lVar15 = *plVar16;
                  *(int *)plVar16 = (int)*plVar16 + -1;
                  UNLOCK();
                  if ((int)lVar15 == 1) {
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
                goto LAB_14219de22;
              }
            }
            puVar4 = (undefined8 *)*param_4;
            lVar15 = (longlong)(int)param_4[1];
            puVar12 = puVar4;
            goto joined_r0x00014219de6a;
          }
          break;
        }
        LOCK();
        iVar8 = (int)plVar16[1];
        bVar19 = iVar8 == 0;
        if (bVar19) {
          *(int *)(plVar16 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
      }
    }
    TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
              (param_2,iVar18,1,1);
    iVar18 = iVar18 + -1;
    lVar17 = lVar17 + -0x10;
    plVar16 = plVar14;
    goto LAB_14219deb7;
  }
  bVar2 = pcVar10[1];
  pcVar13 = pcVar10;
  if (bVar2 < bVar6) {
LAB_14219dccd:
    if (pcVar13[1] == bVar2) goto LAB_14219dcd6;
  }
  else if (bVar6 < bVar2) {
    if (cVar7 == '\x01') {
      pcVar13 = &local_48;
      goto LAB_14219dccd;
    }
  }
  else if (cVar7 == '\x01') goto LAB_14219dccd;
  goto LAB_14219def0;
joined_r0x00014219de6a:
  if (puVar12 == puVar4 + lVar15 * 2) goto LAB_14219de8c;
  if ((longlong *)*puVar12 == plVar11) {
    if ((int)((longlong)puVar12 - (longlong)puVar4 >> 4) != -1) goto LAB_14219deb7;
    goto LAB_14219de8c;
  }
  puVar12 = puVar12 + 2;
  goto joined_r0x00014219de6a;
LAB_14219de8c:
  iVar8 = (int)param_4[1] + 1;
  *(int *)(param_4 + 1) = iVar8;
  if (*(int *)((longlong)param_4 + 0xc) < iVar8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4);
  }
  lVar5 = *param_4;
  *(longlong **)(lVar5 + lVar15 * 0x10) = plVar11;
  *(longlong **)(lVar5 + 8 + lVar15 * 0x10) = plVar16;
  LOCK();
  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
  UNLOCK();
LAB_14219deb7:
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar16 + 1;
    lVar15 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
LAB_14219def0:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar3 + 1;
    lVar15 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
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
LAB_14219de22:
  iVar18 = iVar18 + 1;
  lVar17 = lVar17 + 0x10;
  if ((int)param_2[1] <= iVar18) {
    return;
  }
  goto LAB_14219dc60;
}



// FUNCTION 14219df40 ForgetTransportNode body=160 status=ok
// SIG undefined ForgetTransportNode(void)

void FMessageBridge::ForgetTransportNode(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FMessageAddressBook::RemoveNode(param_1 + 0x28,param_2,&local_18);
  lVar1 = local_18;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar3 = (longlong)(int)local_10 * 0x10 + local_18;
    for (lVar2 = local_18; lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x48))(*(longlong **)(param_1 + 0x80),lVar2);
    }
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
    return;
  }
  return;
}



// FUNCTION 14219dfe0 FUN_14219dfe0 body=717 status=ok
// SIG undefined FUN_14219dfe0(void)

void FUN_14219dfe0(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Src;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined1 local_98 [16];
  undefined8 *local_88;
  longlong *plStack_80;
  undefined8 *local_78;
  longlong *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  puVar12 = (undefined8 *)operator_new(0xc0);
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    plVar13 = (longlong *)FTaskGraphInterface::Get();
    param_5 = (undefined8 *)*param_5;
    plVar14 = (longlong *)FDateTime::UtcNow(local_98);
    lVar3 = *plVar14;
    lVar4 = *param_4;
    uVar11 = (**(code **)(*plVar13 + 0x10))(plVar13,0);
    puVar15 = (undefined4 *)(**(code **)*param_5)(param_5,local_58);
    *puVar12 = &PTR_LAB_144fdd778;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    *(undefined4 *)(puVar12 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar12 + 0x3c) = 0;
    puVar12[9] = 0;
    *(undefined4 *)(puVar12 + 10) = 0;
    puVar12[0xb] = 0;
    puVar12[0xc] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = *param_2;
    lVar5 = param_2[1];
    puVar12[0x10] = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    puVar12[0x11] = 0;
    iVar2 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(puVar12 + 0x12) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((longlong)puVar12 + 0x94) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar12 + 0x11,iVar2,0);
      _guard_xfg_dispatch_icall_nop((void *)puVar12[0x11],_Src,(longlong)iVar2 << 4);
    }
    *(undefined1 *)(puVar12 + 0x13) = 1;
    uVar6 = *puVar15;
    uVar7 = puVar15[1];
    uVar8 = puVar15[2];
    uVar9 = puVar15[3];
    *(undefined4 *)((longlong)puVar12 + 0xac) = uVar11;
    *(undefined4 *)((longlong)puVar12 + 0x9c) = uVar6;
    *(undefined4 *)(puVar12 + 0x14) = uVar7;
    *(undefined4 *)((longlong)puVar12 + 0xa4) = uVar8;
    *(undefined4 *)(puVar12 + 0x15) = uVar9;
    puVar12[0x16] = lVar3 + lVar4;
    *(undefined4 *)(puVar12 + 0x17) = 0xffffffff;
    *(undefined4 *)((longlong)puVar12 + 0xbc) = 0;
  }
  plVar13 = (longlong *)0x0;
  plVar14 = (longlong *)operator_new(0x18);
  if (plVar14 != (longlong *)0x0) {
    *(undefined4 *)(plVar14 + 1) = 1;
    *plVar14 = (longlong)&PTR_FUN_14415b778;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    plVar14[2] = (longlong)puVar12;
    plVar13 = plVar14;
  }
  local_88 = puVar12;
  plStack_80 = plVar13;
  SharedPointerInternals::EnableSharedFromThis(&local_88,puVar12,puVar12);
  lVar3 = *(longlong *)(param_1 + 0x18);
  FUN_1421a2c90(*(undefined8 *)(lVar3 + 0x138),&local_88);
  local_78 = local_88;
  plStack_70 = plStack_80;
  local_68 = 0x4219fe60;
  uStack_64 = 1;
  uStack_60 = 0;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
  }
  uVar16 = TBaseDelegate<TTypeWrapper<void>_>::
           CreateRaw<FMessageRouter,TSharedRef<IMessageContext,1>_>
                     (local_48,lVar3,&local_68,&local_78);
  cVar10 = TQueue<TBaseDelegate<void>,0>::Enqueue(lVar3 + 0x100,uVar16);
  if (cVar10 != '\0') {
    (**(code **)(**(longlong **)(lVar3 + 0x148) + 0x10))();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(uVar16);
  plVar13 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_80 + 1;
    lVar3 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return;
}



// FUNCTION 14219e2d0 GetAttachment body=72 status=ok
// SIG undefined GetAttachment(void)

undefined8 * FMessageContext::GetAttachment(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_2);
    return param_2;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x58);
  lVar2 = *(longlong *)(param_1 + 0x60);
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14219e320 GetDebugName body=153 status=ok
// SIG undefined GetDebugName(void)

undefined8 FMessageBridge::GetDebugName(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 local_res8 [8];
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 200))(*(undefined8 **)(param_1 + 200),local_res8);
  puVar2 = (undefined8 *)FName::ToString(uVar1,local_18);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(&local_28,L"FMessageBridge (%s)",puVar3);
  puVar3 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  FName::FName(param_2,puVar3,1);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14219e3c0 GetEndpoints body=30 status=ok
// SIG undefined GetEndpoints(void)

undefined4 FMessageTracer::GetEndpoints(longlong param_1,longlong param_2)

{
  FUN_142198490(param_1 + 200);
  return *(undefined4 *)(param_2 + 8);
}



// FUNCTION 14219e440 GetMessageTypes body=30 status=ok
// SIG undefined GetMessageTypes(void)

undefined4 FMessageTracer::GetMessageTypes(longlong param_1,longlong param_2)

{
  FUN_142198860(param_1 + 0x168);
  return *(undefined4 *)(param_2 + 8);
}



// FUNCTION 14219e460 GetMessages body=30 status=ok
// SIG undefined GetMessages(void)

undefined4 FMessageTracer::GetMessages(longlong param_1,longlong param_2)

{
  FUN_1421986b0(param_1 + 0x118);
  return *(undefined4 *)(param_2 + 8);
}



// FUNCTION 14219e520 FUN_14219e520 body=794 status=ok
// SIG undefined FUN_14219e520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14219e520(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  double dVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong local_res18;
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  longlong *local_c0;
  LARGE_INTEGER local_b8 [2];
  undefined1 *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  plVar4 = (longlong *)param_2[1];
  lVar5 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_res18 = param_3;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar13 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar13 = param_1 + 0x48;
    }
    iVar9 = *(int *)(lVar13 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                              (longlong)*(int *)(param_1 + 0x58) - 1U) * 4);
    if (iVar9 != -1) {
      do {
        plVar12 = (longlong *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x10));
        if (*plVar12 == param_3) {
          if ((iVar9 != -1) && (plVar12 != (longlong *)0x0)) goto LAB_14219e604;
          break;
        }
        iVar9 = (int)plVar12[3];
      } while (iVar9 != -1);
    }
  }
  local_c0 = &local_res18;
  TSet<TTuple<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_&&>_>(param_1 + 0x10,local_c8,&local_c0,0);
  plVar12 = (longlong *)((longlong)local_c8[0] * 0x20 + *(longlong *)(param_1 + 0x10));
LAB_14219e604:
  plVar6 = (longlong *)plVar12[1];
  lVar13 = (longlong)(int)plVar12[2];
  plVar10 = plVar6;
  do {
    if (plVar10 == plVar6 + lVar13 * 2) {
LAB_14219e639:
      iVar9 = (int)plVar12[2] + 1;
      *(int *)(plVar12 + 2) = iVar9;
      if (*(int *)((longlong)plVar12 + 0x14) < iVar9) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12 + 1);
      }
      lVar7 = plVar12[1];
      *(longlong *)(lVar7 + lVar13 * 0x10) = lVar5;
      *(longlong **)(lVar7 + 8 + lVar13 * 0x10) = plVar4;
LAB_14219e658:
      lVar5 = *(longlong *)(param_1 + 0x138);
      QueryPerformanceCounter(local_b8);
      plVar4 = (longlong *)param_2[1];
      lVar13 = *param_2;
      dVar8 = (double)local_b8[0].QuadPart * DAT_1468b02f8;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_78 = (longlong *)0x0;
      local_68 = 0;
      puVar11 = (undefined8 *)FUN_140438ef0(0x28,local_98);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &PTR_FUN_1446ba1c8;
        puVar11[1] = lVar5;
        puVar11[2] = lVar13;
        puVar11[3] = plVar4;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        puVar11[4] = dVar8 + 16777216.0;
      }
      local_a8[0] = &LAB_14219be50;
      puVar11 = (undefined8 *)operator_new(0x60);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = 0;
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar11 + 2,local_a8);
        LOCK();
        puVar2 = (undefined8 *)(lVar5 + 0x1d0);
        puVar3 = (undefined8 *)*puVar2;
        *puVar2 = puVar11;
        UNLOCK();
        LOCK();
        *puVar3 = puVar11;
        UNLOCK();
      }
      if (local_68 != 0) {
        plVar12 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar12 = local_78;
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))(plVar12,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar4 + 1;
        lVar5 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar4 = (longlong *)param_2[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar4 + 1;
        lVar5 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      return;
    }
    if (*plVar10 == lVar5) {
      if ((int)((longlong)plVar10 - (longlong)plVar6 >> 4) != -1) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar4 + 1;
          lVar5 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
        goto LAB_14219e658;
      }
      goto LAB_14219e639;
    }
    plVar10 = plVar10 + 2;
  } while( true );
}



// FUNCTION 14219e840 FUN_14219e840 body=839 status=ok
// SIG undefined FUN_14219e840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14219e840(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  int local_f8;
  int local_f4 [3];
  undefined4 *local_e8;
  LARGE_INTEGER local_e0 [4];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar4[1];
    bVar11 = iVar7 == 0;
    if (bVar11) {
      *(int *)(plVar4 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar11) {
      LOCK();
      bVar11 = iVar7 == (int)plVar4[1];
      if (bVar11) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar11) {
        if (plVar4 != (longlong *)0x0) {
          lVar5 = *param_3;
          if (lVar5 != 0) {
            TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
            ::FindId(param_1 + 0x60,&local_f8,param_2);
            if ((local_f8 == -1) ||
               (lVar9 = *(longlong *)(param_1 + 0x60) + (longlong)local_f8 * 0x28, lVar9 == 0)) {
              local_e8 = param_2;
              FUN_1421975e0(param_1 + 0x60,local_f4,&local_e8,0);
              lVar9 = *(longlong *)(param_1 + 0x60) + (longlong)local_f4[0] * 0x28;
            }
            *(longlong *)(lVar9 + 0x10) = lVar5;
            if (plVar4 != *(longlong **)(lVar9 + 0x18)) {
              LOCK();
              *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
              UNLOCK();
              plVar10 = *(longlong **)(lVar9 + 0x18);
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar10 + 8))(plVar10,1);
                }
              }
              *(longlong **)(lVar9 + 0x18) = plVar4;
            }
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            lVar9 = *(longlong *)(param_1 + 0x138);
            QueryPerformanceCounter(local_e0);
            dVar6 = (double)local_e0[0].QuadPart * DAT_1468b02f8;
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            local_c0 = *param_2;
            uStack_bc = param_2[1];
            uStack_b8 = param_2[2];
            uStack_b4 = param_2[3];
            local_78 = (longlong *)0x0;
            local_68 = 0;
            puVar8 = (undefined8 *)FUN_140438ef0(0x38,local_98);
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = &PTR_FUN_144fdda68;
              puVar8[1] = lVar9;
              puVar8[2] = lVar5;
              puVar8[3] = plVar4;
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              puVar8[6] = dVar6 + 16777216.0;
              *(undefined4 *)(puVar8 + 4) = local_c0;
              *(undefined4 *)((longlong)puVar8 + 0x24) = uStack_bc;
              *(undefined4 *)(puVar8 + 5) = uStack_b8;
              *(undefined4 *)((longlong)puVar8 + 0x2c) = uStack_b4;
            }
            local_a8[0] = &LAB_14219be20;
            puVar8 = (undefined8 *)operator_new(0x60);
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = 0;
              TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar8 + 2,local_a8);
              LOCK();
              puVar2 = (undefined8 *)(lVar9 + 0x1d0);
              puVar3 = (undefined8 *)*puVar2;
              *puVar2 = puVar8;
              UNLOCK();
              LOCK();
              *puVar3 = puVar8;
              UNLOCK();
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
            LOCK();
            plVar10 = plVar4 + 1;
            lVar5 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
            LOCK();
            plVar10 = plVar4 + 1;
            lVar5 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          LOCK();
          plVar10 = plVar4 + 1;
          lVar5 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(plVar4 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar7 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}



// FUNCTION 14219eb90 FUN_14219eb90 body=689 status=ok
// SIG undefined FUN_14219eb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14219eb90(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_d8 [32];
  int local_b8 [2];
  longlong *local_b0;
  undefined1 local_a8 [8];
  LARGE_INTEGER local_a0;
  code *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar12 = (longlong *)param_2[1];
  plVar3 = (longlong *)*param_2;
  plVar9 = plVar3;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    plVar9 = (longlong *)*param_2;
  }
  plVar5 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9,local_a8);
  plVar9 = (longlong *)(param_1 + 0xb0);
  lVar10 = *plVar5;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar6 = *(longlong *)(param_1 + 0xf0);
    if (*(longlong *)(param_1 + 0xf0) == 0) {
      lVar6 = param_1 + 0xe8;
    }
    iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar10 >> 0x20) + (int)lVar10) &
                             (longlong)*(int *)(param_1 + 0xf8) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar11 = (longlong *)((longlong)iVar4 * 0x20 + *plVar9);
        if (*plVar11 == lVar10) {
          if ((iVar4 != -1) && (plVar11 != (longlong *)0x0)) goto LAB_14219ec7a;
          break;
        }
        iVar4 = (int)plVar11[3];
      } while (iVar4 != -1);
    }
  }
  local_b0 = plVar5;
  FUN_1404b9690(plVar9,local_b8,&local_b0,0);
  plVar11 = (longlong *)((longlong)local_b8[0] * 0x20 + *plVar9);
LAB_14219ec7a:
  lVar10 = (longlong)(int)plVar11[2];
  puVar8 = (undefined8 *)plVar11[1];
  puVar7 = puVar8;
  do {
    if (puVar7 == puVar8 + lVar10 * 2) {
LAB_14219ecb2:
      iVar4 = (int)plVar11[2] + 1;
      *(int *)(plVar11 + 2) = iVar4;
      if (*(int *)((longlong)plVar11 + 0x14) < iVar4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11 + 1);
      }
      lVar6 = plVar11[1];
      *(longlong **)(lVar6 + lVar10 * 0x10) = plVar3;
      *(longlong **)(lVar6 + 8 + lVar10 * 0x10) = plVar12;
LAB_14219ecd1:
      lVar10 = *(longlong *)(param_1 + 0x138);
      if (*(char *)(lVar10 + 0x1b9) != '\0') {
        QueryPerformanceCounter(&local_a0);
        local_68 = (longlong *)0x0;
        local_58 = 0;
        puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_88);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &PTR_FUN_143f3f130;
        }
        local_98[0] = AK::MemoryMgr::StartProfileThreadUsage;
        puVar8 = (undefined8 *)operator_new(0x60);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0;
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar8 + 2,local_98);
          LOCK();
          puVar7 = (undefined8 *)(lVar10 + 0x1d0);
          puVar2 = (undefined8 *)*puVar7;
          *puVar7 = puVar8;
          UNLOCK();
          LOCK();
          *puVar2 = puVar8;
          UNLOCK();
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
      }
      plVar12 = (longlong *)param_2[1];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar12 + 1;
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      return;
    }
    if ((longlong *)*puVar7 == plVar3) {
      if ((int)((longlong)puVar7 - (longlong)puVar8 >> 4) != -1) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar12 + 1;
          lVar10 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        goto LAB_14219ecd1;
      }
      goto LAB_14219ecb2;
    }
    puVar7 = puVar7 + 2;
  } while( true );
}



// FUNCTION 14219ee50 HandleMessageBusShutdown body=139 status=ok
// SIG undefined HandleMessageBusShutdown(void)

void FMessageBridge::HandleMessageBusShutdown(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  (**(code **)*param_1)();
  local_10 = (longlong *)0x0;
  if (param_1 + 0x13 != &local_18) {
    param_1[0x13] = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x14,&local_10);
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



// FUNCTION 14219eee0 FUN_14219eee0 body=1753 status=ok
// SIG undefined FUN_14219eee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14219eee0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint **ppuVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  int iVar23;
  ulonglong uVar24;
  longlong local_res18;
  undefined1 auStack_1e8 [32];
  byte local_1c8;
  uint local_1c4;
  int local_1c0 [2];
  ulonglong local_1b8;
  undefined8 local_1b0;
  uint *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  longlong *local_160;
  int local_158;
  longlong local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  uint *local_128;
  int local_120;
  undefined4 uStack_11c;
  longlong *local_118;
  longlong local_110;
  LARGE_INTEGER local_108;
  longlong *local_100;
  undefined8 uStack_f8;
  uint *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  uint *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong *local_a8;
  undefined8 uStack_a0;
  uint *puStack_98;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint **local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar12 = (longlong *)(param_1 + 0x10);
  local_1b8 = 0xe6;
  local_res18 = param_3;
  local_138 = plVar12;
  local_130 = param_2;
  local_110 = param_1;
  if (param_3 == 0xe6) {
    uVar5 = *(uint *)(param_1 + 0x38);
    puVar22 = (uint *)(param_1 + 0x20);
    uStack_184 = 1;
    local_188 = 0;
    uStack_174 = 0;
    iStack_170 = 0;
    if (uVar5 != 0) {
      puVar21 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar21 = puVar22;
      }
      uVar6 = *puVar21;
      iStack_170 = 0;
      local_188 = 0;
      while (uVar6 == 0) {
        lVar13 = (longlong)local_188;
        iStack_170 = iStack_170 + 0x20;
        iVar10 = local_188 + 1;
        bVar7 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
        local_188 = iVar10;
        if (bVar7) goto LAB_14219f005;
        uVar6 = puVar21[lVar13 + 1];
      }
      uStack_184 = -uVar6 & uVar6;
      local_158 = 0x1f;
      if (uStack_184 != 0) {
        for (; uStack_184 >> local_158 == 0; local_158 = local_158 + -1) {
        }
      }
      if (uStack_184 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - local_158;
      }
      uStack_174 = (iStack_170 - iVar10) + 0x1f;
      if ((int)uVar5 < (int)uStack_174) {
LAB_14219f005:
        uStack_174 = uVar5;
      }
    }
    local_178 = 0xffffffff;
    uVar6 = *(uint *)(param_1 + 0x38);
    uStack_f8 = CONCAT44(uStack_184,local_188);
    uStack_e8 = CONCAT44(uStack_174,0xffffffff);
    uStack_190 = CONCAT44(uStack_16c,iStack_170);
    iVar10 = (int)uVar6 >> 5;
    uVar15 = -1 << ((byte)uVar6 & 0x1f);
    uVar20 = uVar6 & 0xffffffe0;
    local_1b0 = CONCAT44(1 << ((byte)uVar6 & 0x1f),iVar10);
    uStack_1a0 = CONCAT44(uVar6,uVar15);
    uStack_198 = CONCAT44(uStack_174,uVar6) & 0xffffffffffffffe0;
    if (uVar6 != uVar5) {
      puVar21 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar21 = puVar22;
      }
      uVar15 = puVar21[iVar10] & uVar15;
      while (uVar15 == 0) {
        uVar20 = uVar20 + 0x20;
        uStack_198._4_4_ = (undefined4)(uStack_198 >> 0x20);
        uStack_198 = CONCAT44(uStack_198._4_4_,uVar20);
        uVar18 = (ulonglong)local_1b0 >> 0x20;
        local_1b0 = CONCAT44((int)uVar18,iVar10 + 1);
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_14219f106;
        uVar15 = puVar21[(longlong)iVar10 + 1];
        uStack_1a0 = 0xffffffff;
        iVar10 = iVar10 + 1;
      }
      uVar15 = -uVar15 & uVar15;
      uVar6 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      local_1b0 = CONCAT44(uVar15,(undefined4)local_1b0);
      local_1b8 = (ulonglong)uVar6;
      if (uVar15 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - uVar6;
      }
      iVar10 = (uVar20 - iVar10) + 0x1f;
      uStack_1a0 = CONCAT44(iVar10,(undefined4)uStack_1a0);
      if ((int)uVar5 < iVar10) {
LAB_14219f106:
        uStack_1a0 = CONCAT44(uVar5,(undefined4)uStack_1a0);
      }
    }
    uStack_90 = (undefined4)uStack_1a0;
    iStack_8c = uStack_1a0._4_4_;
    uStack_88 = (undefined4)uStack_198;
    uStack_84 = uStack_198._4_4_;
    uStack_a0 = local_1b0;
    uStack_c0 = uStack_1a0;
    uStack_d0 = local_1b0;
    local_b8 = (undefined4)uStack_198;
    uStack_b4 = uStack_198._4_4_;
    local_120 = uStack_1a0._4_4_;
    uStack_11c = 0;
    puStack_1a8 = puVar22;
    puStack_180 = puVar22;
    local_128 = puVar22;
    local_100 = plVar12;
    local_f0 = puVar22;
    local_e0 = uStack_190;
    local_d8 = plVar12;
    local_c8 = puVar22;
    local_a8 = plVar12;
    puStack_98 = puVar22;
    while( true ) {
      if (((uStack_e8._4_4_ == local_120) && (local_f0 == puVar22)) && (local_100 == plVar12))
      break;
      local_140 = (longlong *)param_2[1];
      local_148 = *param_2;
      lVar13 = (longlong)uStack_e8._4_4_ * 0x20 + *local_100;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_140 + 1) = (int)local_140[1] + 1;
        UNLOCK();
      }
      lVar11 = (longlong)*(int *)(lVar13 + 0x10);
      local_150 = lVar13;
      if (*(int *)(lVar13 + 0x10) != 0) {
        uVar17 = 0;
        local_1c4 = 0;
        local_1c8 = **(longlong **)(lVar13 + 8) != local_148;
        uVar18 = uVar17;
        uVar24 = uVar17;
        do {
          iVar10 = (int)uVar24;
          uVar18 = uVar18 + 1;
          uVar24 = (ulonglong)(iVar10 + 1);
          if ((longlong)uVar18 < lVar11) {
            plVar12 = (longlong *)(uVar18 * 0x10 + *(longlong *)(lVar13 + 8));
            do {
              if ((bool)local_1c8 != (*plVar12 != local_148)) break;
              uVar24 = (ulonglong)((int)uVar24 + 1);
              uVar18 = uVar18 + 1;
              plVar12 = plVar12 + 2;
            } while ((longlong)uVar18 < lVar11);
          }
          iVar23 = (int)uVar24 - iVar10;
          if (local_1c8 == 0) {
            if (iVar23 != 0) {
              plVar12 = (longlong *)((longlong)iVar10 * 0x10 + 8 + *(longlong *)(lVar13 + 8));
              do {
                plVar14 = (longlong *)*plVar12;
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar14 + 1;
                  lVar13 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar13 == 1) {
                    (**(code **)*plVar14)(plVar14);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar14 + 0xc);
                    iVar10 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar10 == 1) {
                      (**(code **)(*plVar14 + 8))(plVar14,1);
                    }
                  }
                }
                plVar12 = plVar12 + 2;
                iVar23 = iVar23 + -1;
                lVar13 = local_150;
              } while (iVar23 != 0);
            }
          }
          else {
            iVar16 = (int)uVar17;
            if (iVar16 != iVar10) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar16 * 0x10 + *(longlong *)(lVar13 + 8)),
                         (void *)((longlong)iVar10 * 0x10 + *(longlong *)(lVar13 + 8)),
                         (longlong)iVar23 << 4);
            }
            local_1c4 = iVar16 + iVar23;
          }
          uVar17 = (ulonglong)local_1c4;
          local_1c8 = local_1c8 ^ 1;
        } while ((longlong)uVar18 < lVar11);
        *(uint *)(lVar13 + 0x10) = local_1c4;
        puVar22 = local_128;
        plVar12 = local_138;
        param_2 = local_130;
      }
      plVar14 = local_140;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_140 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      uStack_e8 = CONCAT44(uStack_e8._4_4_,(uint)uStack_e8 & ~uStack_f8._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f8);
    }
  }
  else {
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
      lVar13 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar13 = param_1 + 0x48;
      }
      iVar10 = *(int *)(lVar13 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                                 (longlong)*(int *)(param_1 + 0x58) - 1U) * 4);
      if (iVar10 != -1) {
        do {
          plVar14 = (longlong *)((longlong)iVar10 * 0x20 + *plVar12);
          if (*plVar14 == param_3) {
            if ((iVar10 != -1) && (plVar14 != (longlong *)0x0)) goto LAB_14219f3ae;
            break;
          }
          iVar10 = (int)plVar14[3];
        } while (iVar10 != -1);
      }
    }
    local_118 = &local_res18;
    TSet<TTuple<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FName_&&>_>(plVar12,local_1c0,&local_118,0);
    plVar14 = (longlong *)((longlong)local_1c0[0] * 0x20 + *plVar12);
LAB_14219f3ae:
    local_168 = *param_2;
    local_160 = (longlong *)param_2[1];
    if (local_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_160 + 1) = (int)local_160[1] + 1;
      UNLOCK();
    }
    TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
              (plVar14 + 1,&local_168);
    plVar12 = local_160;
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_160 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
  }
  lVar13 = *(longlong *)(local_110 + 0x138);
  QueryPerformanceCounter(&local_108);
  plVar12 = (longlong *)param_2[1];
  lVar11 = *param_2;
  dVar8 = (double)local_108.QuadPart * DAT_1468b02f8;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_78 = (uint **)0x0;
  local_68 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x28,&puStack_98);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_FUN_1446ba1c8;
    puVar9[1] = lVar13;
    puVar9[2] = lVar11;
    puVar9[3] = plVar12;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    puVar9[4] = dVar8 + 16777216.0;
  }
  local_a8 = (longlong *)&LAB_14219bdf0;
  puVar9 = (undefined8 *)operator_new(0x60);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 2,&local_a8);
    LOCK();
    puVar3 = (undefined8 *)(lVar13 + 0x1d0);
    puVar4 = (undefined8 *)*puVar3;
    *puVar3 = puVar9;
    UNLOCK();
    LOCK();
    *puVar4 = puVar9;
    UNLOCK();
  }
  if (local_68 != 0) {
    ppuVar19 = &puStack_98;
    if (local_78 != (uint **)0x0) {
      ppuVar19 = local_78;
    }
    if (ppuVar19 != (uint **)0x0) {
      (**(code **)(*ppuVar19 + 4))(ppuVar19,0);
    }
  }
  if (local_78 != (uint **)0x0) {
    FMemory::Free();
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  plVar12 = (longlong *)param_2[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return;
}



// FUNCTION 14219f5c0 FUN_14219f5c0 body=582 status=ok
// SIG undefined FUN_14219f5c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14219f5c0(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  int local_b8 [2];
  LARGE_INTEGER local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  double dStack_90;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x60,local_b8,param_2);
  if ((local_b8[0] == -1) ||
     (lVar3 = *(longlong *)(param_1 + 0x60) + (longlong)local_b8[0] * 0x28, lVar3 == 0)) {
    plVar7 = (longlong *)0x0;
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar7 = *(longlong **)(lVar3 + 0x10);
    plVar10 = *(longlong **)(lVar3 + 0x18);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
    }
  }
  plVar8 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar10[1];
    bVar11 = iVar5 == 0;
    if (bVar11) {
      *(int *)(plVar10 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar8 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar11) {
      LOCK();
      bVar11 = iVar5 == (int)plVar10[1];
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar5 + 1;
      }
      UNLOCK();
      plVar8 = plVar10;
      plVar9 = plVar7;
      if (bVar11) break;
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(plVar10 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar10 + 8))(plVar10,1);
    }
    if (plVar9 != (longlong *)0x0) {
      TSet<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x60,param_2);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x138);
  QueryPerformanceCounter(&local_b0);
  uStack_a0 = *param_2;
  uStack_9c = param_2[1];
  uStack_98 = param_2[2];
  uStack_94 = param_2[3];
  local_58 = (longlong *)0x0;
  local_48 = 0;
  dStack_90 = (double)local_b0.QuadPart * DAT_1468b02f8 + 16777216.0;
  local_a8 = lVar3;
  puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_78);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_143ff7760;
    *(undefined4 *)(puVar6 + 1) = (undefined4)local_a8;
    *(undefined4 *)((longlong)puVar6 + 0xc) = local_a8._4_4_;
    *(undefined4 *)(puVar6 + 2) = uStack_a0;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_9c;
    puVar6[3] = CONCAT44(uStack_94,uStack_98);
    puVar6[4] = dStack_90;
  }
  local_88[0] = &LAB_14219be10;
  puVar6 = (undefined8 *)operator_new(0x60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar6 + 2,local_88);
    LOCK();
    puVar2 = (undefined8 *)(lVar3 + 0x1d0);
    puVar4 = (undefined8 *)*puVar2;
    *puVar2 = puVar6;
    UNLOCK();
    LOCK();
    *puVar4 = puVar6;
    UNLOCK();
  }
  if (local_48 != 0) {
    plVar7 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar7 = local_58;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 14219f810 FUN_14219f810 body=1603 status=ok
// SIG undefined FUN_14219f810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14219f810(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  bool bVar18;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  uint *local_1b0;
  int local_1a0;
  uint uStack_19c;
  uint *puStack_198;
  undefined4 local_190;
  uint uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  int local_180;
  uint uStack_17c;
  uint *puStack_178;
  uint local_170;
  uint uStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  longlong *local_158;
  longlong local_150;
  int local_148;
  int local_144;
  longlong *local_140;
  ulonglong local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  undefined8 uStack_118;
  uint *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  uint *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  LARGE_INTEGER local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  code *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  plVar7 = (longlong *)param_2[1];
  local_150 = param_1;
  local_130 = plVar7;
  local_128 = param_2;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar7[1];
    bVar18 = iVar4 == 0;
    if (bVar18) {
      *(int *)(plVar7 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar18) {
      LOCK();
      bVar18 = iVar4 == (int)plVar7[1];
      if (bVar18) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar18) {
        if (plVar7 != (longlong *)0x0) {
          local_140 = (longlong *)*param_2;
          if (local_140 != (longlong *)0x0) {
            iVar4 = 0;
            plVar7 = (longlong *)(param_1 + 0xb0);
            uVar15 = *(uint *)(param_1 + 0xd8);
            puVar17 = (uint *)(param_1 + 0xc0);
            local_1a0 = 0;
            uStack_19c = 1;
            uStack_18c = 0;
            iStack_188 = 0;
            if (uVar15 == 0) goto LAB_14219f9f9;
            puVar12 = *(uint **)(param_1 + 0xd0);
            if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
              puVar12 = puVar17;
            }
            uVar9 = *puVar12;
            iVar11 = iVar4;
            if (uVar9 != 0) goto LAB_14219f9c7;
            goto LAB_14219f9a0;
          }
          LOCK();
          plVar5 = plVar7 + 1;
          lVar8 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar18 = iVar4 == 0;
      if (bVar18) {
        *(int *)(plVar7 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  plVar7 = (longlong *)param_2[1];
  goto LAB_14219f87e;
  while (uVar9 = puVar12[(longlong)iVar4 + 1], iVar4 = local_1a0, iVar11 = iStack_188, uVar9 == 0) {
LAB_14219f9a0:
    iStack_188 = iVar11 + 0x20;
    local_1a0 = iVar4 + 1;
    if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14219f9f4;
  }
LAB_14219f9c7:
  uStack_19c = -uVar9 & uVar9;
  local_148 = 0x1f;
  if (uStack_19c != 0) {
    for (; uStack_19c >> local_148 == 0; local_148 = local_148 + -1) {
    }
  }
  if (uStack_19c == 0) {
    iVar4 = 0x20;
  }
  else {
    iVar4 = 0x1f - local_148;
  }
  uStack_18c = (iStack_188 - iVar4) + 0x1f;
  if ((int)uVar15 < (int)uStack_18c) {
LAB_14219f9f4:
    uStack_18c = uVar15;
  }
LAB_14219f9f9:
  local_190 = 0xffffffff;
  uStack_16c = *(uint *)(param_1 + 0xd8);
  uStack_118 = CONCAT44(uStack_19c,local_1a0);
  uStack_108 = CONCAT44(uStack_18c,0xffffffff);
  local_100 = CONCAT44(uStack_184,iStack_188);
  uStack_17c = 1 << ((byte)uStack_16c & 0x1f);
  local_180 = (int)uStack_16c >> 5;
  local_170 = -1 << ((byte)uStack_16c & 0x1f);
  uStack_168 = uStack_16c & 0xffffffe0;
  if (uStack_16c != uVar15) {
    puVar12 = *(uint **)(param_1 + 0xd0);
    if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
      puVar12 = puVar17;
    }
    uVar9 = puVar12[local_180] & local_170;
    while (uVar9 == 0) {
      lVar8 = (longlong)local_180;
      uStack_168 = uStack_168 + 0x20;
      iVar4 = local_180 + 1;
      bVar18 = (int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_180;
      local_180 = iVar4;
      if (bVar18) goto LAB_14219faf4;
      uVar9 = puVar12[lVar8 + 1];
      local_170 = 0xffffffff;
    }
    uStack_17c = -uVar9 & uVar9;
    local_144 = 0x1f;
    if (uStack_17c != 0) {
      for (; uStack_17c >> local_144 == 0; local_144 = local_144 + -1) {
      }
    }
    if (uStack_17c == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - local_144;
    }
    uStack_16c = (uStack_168 - iVar4) + 0x1f;
    if ((int)uVar15 < (int)uStack_16c) {
LAB_14219faf4:
      uStack_16c = uVar15;
    }
  }
  uStack_e0 = CONCAT44(uStack_16c,local_170);
  uStack_d8 = CONCAT44(uStack_164,uStack_168);
  uStack_f0 = CONCAT44(uStack_17c,local_180);
  local_138 = (ulonglong)uStack_16c;
  local_1b8 = plVar7;
  local_1b0 = puVar17;
  puStack_198 = puVar17;
  puStack_178 = puVar17;
  local_120 = plVar7;
  local_110 = puVar17;
  local_f8 = plVar7;
  puStack_e8 = puVar17;
  local_c8 = plVar7;
  uStack_c0 = uStack_f0;
  local_b8 = puVar17;
  uStack_b0 = uStack_e0;
  local_a8 = uStack_d8;
  while( true ) {
    plVar5 = local_130;
    uVar13 = 0;
    if (((uStack_108._4_4_ == (int)local_138) && (local_110 == puVar17)) && (local_120 == plVar7))
    break;
    plVar5 = (longlong *)((longlong)uStack_108._4_4_ * 0x20 + *local_120);
    local_160 = 0xe6;
    if (((param_3 == 0xe6) || (param_3 == *plVar5)) &&
       (local_158 = plVar5 + 1, plVar7 = local_1b8, uVar16 = uVar13, 0 < (int)plVar5[2])) {
      do {
        plVar5 = *(longlong **)(uVar16 + 8 + *local_158);
        plVar7 = *(longlong **)(uVar16 + *local_158);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x20))();
        plVar10 = (longlong *)0x0;
        plVar7 = (longlong *)puVar6[1];
        plVar14 = plVar10;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          iVar4 = (int)plVar7[1];
          bVar18 = iVar4 == 0;
          if (bVar18) {
            *(int *)(plVar7 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (!bVar18) {
            LOCK();
            bVar18 = iVar4 == (int)plVar7[1];
            if (bVar18) {
              *(int *)(plVar7 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar18) {
              plVar14 = (longlong *)0x0;
              if (plVar7 == (longlong *)0x0) goto LAB_14219fc36;
              plVar10 = plVar7;
              plVar14 = (longlong *)*puVar6;
              break;
            }
            LOCK();
            iVar4 = (int)plVar7[1];
            bVar18 = iVar4 == 0;
            if (bVar18) {
              *(int *)(plVar7 + 1) = 0;
              iVar4 = 0;
            }
            UNLOCK();
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar10 + 1;
            lVar8 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
        }
LAB_14219fc36:
        if (plVar14 == local_140) {
          TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                    (local_158,uVar13,1,1);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          lVar8 = *(longlong *)(local_150 + 0x138);
          if (*(char *)(lVar8 + 0x1b9) != '\0') {
            QueryPerformanceCounter(&local_d0);
            local_68 = (longlong *)0x0;
            local_58 = 0;
            puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_88);
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = &PTR_FUN_143f3f130;
            }
            local_98[0] = AK::MemoryMgr::StartProfileThreadUsage;
            puVar6 = (undefined8 *)operator_new(0x60);
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = 0;
              TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar6 + 2,local_98);
              LOCK();
              puVar2 = (undefined8 *)(lVar8 + 0x1d0);
              puVar3 = (undefined8 *)*puVar2;
              *puVar2 = puVar6;
              UNLOCK();
              LOCK();
              *puVar3 = puVar6;
              UNLOCK();
            }
            if (local_58 != 0) {
              plVar7 = local_88;
              if (local_68 != (longlong *)0x0) {
                plVar7 = local_68;
              }
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x10))(plVar7,0);
              }
            }
            if (local_68 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
          plVar7 = local_1b8;
          puVar17 = local_1b0;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar5 + 1;
            lVar8 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
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
            LOCK();
            plVar7 = plVar5 + 1;
            lVar8 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            plVar7 = local_1b8;
            puVar17 = local_1b0;
            if ((int)lVar8 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar7 = local_1b8;
              puVar17 = local_1b0;
              if (iVar4 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
                plVar7 = local_1b8;
                puVar17 = local_1b0;
              }
            }
          }
          break;
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar5 + 1;
          lVar8 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
        uVar15 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar15;
        plVar7 = local_1b8;
        uVar16 = uVar16 + 0x10;
        puVar17 = local_1b0;
      } while ((int)uVar15 < (int)local_158[1]);
    }
    uStack_108 = CONCAT44(uStack_108._4_4_,(uint)uStack_108 & ~uStack_118._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_118);
  }
  LOCK();
  plVar7 = local_130 + 1;
  lVar8 = *plVar7;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)lVar8 == 1) {
    (**(code **)*local_130)(local_130);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  plVar7 = (longlong *)local_128[1];
LAB_14219f87e:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}



// FUNCTION 14219fe60 FUN_14219fe60 body=918 status=ok
// SIG undefined FUN_14219fe60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14219fe60(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70 [2];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_1421a2a80(*(undefined8 *)(param_1 + 0x138));
  plVar16 = (longlong *)*param_2;
  lVar8 = (**(code **)(*plVar16 + 0x18))(plVar16);
  if (lVar8 != 0) {
    uVar9 = (**(code **)(*plVar16 + 0x20))(plVar16);
    cVar7 = FWeakObjectPtr::IsValid(uVar9,0,1);
    if (cVar7 != '\0') {
      uVar9 = (**(code **)(*plVar16 + 0x20))(plVar16);
      lVar8 = FWeakObjectPtr::Get(uVar9);
      local_78 = *(longlong *)(lVar8 + 0x18);
      goto LAB_14219fee7;
    }
  }
  local_78._0_4_ = 0;
  local_78 = 0;
LAB_14219fee7:
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar8 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar8 = param_1 + 0x48;
    }
    iVar15 = *(int *)(lVar8 + ((longlong)((int)((ulonglong)local_78 >> 0x20) + (int)local_78) &
                              (longlong)*(int *)(param_1 + 0x58) - 1U) * 4);
    if (iVar15 != -1) {
      do {
        plVar16 = (longlong *)((longlong)iVar15 * 0x20 + *(longlong *)(param_1 + 0x10));
        if (*plVar16 == local_78) {
          if ((iVar15 != -1) && (plVar16 != (longlong *)0x0)) goto LAB_14219ff81;
          break;
        }
        iVar15 = (int)plVar16[3];
      } while (iVar15 != -1);
    }
  }
  local_68 = &local_78;
  TSet<TTuple<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<IMessageInterceptor,1>,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_&&>_>(param_1 + 0x10,local_70,&local_68,0);
  plVar16 = (longlong *)((longlong)local_70[0] * 0x20 + *(longlong *)(param_1 + 0x10));
LAB_14219ff81:
  puVar11 = (undefined8 *)plVar16[1];
  puVar13 = puVar11 + (longlong)(int)plVar16[2] * 2;
  for (; puVar11 != puVar13; puVar11 = puVar11 + 2) {
    cVar7 = (**(code **)(*(longlong *)*puVar11 + 0x10))((longlong *)*puVar11,param_2);
    if (cVar7 != '\0') {
      plVar16 = (longlong *)puVar11[1];
      local_60 = *puVar11;
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      local_58 = plVar16;
      FUN_1421a28b0(*(undefined8 *)(param_1 + 0x138),param_2,&local_60);
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar16 + 1;
        lVar8 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
      }
      plVar16 = (longlong *)param_2[1];
      goto joined_r0x0001421a0135;
    }
  }
  if ((*(char *)(param_1 + 0x150) == '\0') ||
     (plVar16 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x58))(),
     *plVar16 <= *(longlong *)(param_1 + 0x110))) {
    FMessageRouter::DispatchMessage(param_1,param_2);
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x128) + 1;
    *(longlong *)(param_1 + 0x128) = lVar14;
    lVar8 = param_2[1];
    uVar9 = *param_2;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    iVar15 = *(int *)(param_1 + 0x120);
    lVar12 = (longlong)iVar15;
    *(int *)(param_1 + 0x120) = iVar15 + 1;
    if (*(int *)(param_1 + 0x124) < iVar15 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x118,iVar15);
    }
    lVar2 = *(longlong *)(param_1 + 0x118);
    *(undefined8 *)(lVar2 + lVar12 * 0x18) = uVar9;
    *(longlong *)(lVar2 + 8 + lVar12 * 0x18) = lVar8;
    *(longlong *)(lVar2 + 0x10 + lVar12 * 0x18) = lVar14;
    lVar8 = *(longlong *)(param_1 + 0x118);
    iVar15 = *(int *)(param_1 + 0x120) + -1;
    while (0 < iVar15) {
      lVar14 = (longlong)iVar15;
      iVar15 = (iVar15 + -1) / 2;
      plVar16 = *(longlong **)(lVar8 + (longlong)iVar15 * 0x18);
      puVar11 = (undefined8 *)(lVar8 + (longlong)iVar15 * 0x18);
      puVar13 = (undefined8 *)(lVar8 + lVar14 * 0x18);
      plVar10 = (longlong *)(**(code **)(**(longlong **)(lVar8 + lVar14 * 0x18) + 0x58))();
      plVar16 = (longlong *)(**(code **)(*plVar16 + 0x58))(plVar16);
      lVar14 = *plVar16;
      lVar12 = *plVar10;
      if (lVar14 == lVar12) {
        bVar3 = (longlong)puVar13[2] < (longlong)puVar11[2];
      }
      else {
        bVar3 = lVar14 != lVar12 && -1 < lVar14 - lVar12;
      }
      if (!bVar3) break;
      if (puVar13 != puVar11) {
        local_50 = *puVar13;
        uStack_48 = puVar13[1];
        local_40 = puVar13[2];
        uVar4 = *(undefined4 *)((longlong)puVar11 + 4);
        uVar5 = *(undefined4 *)(puVar11 + 1);
        uVar6 = *(undefined4 *)((longlong)puVar11 + 0xc);
        *(undefined4 *)puVar13 = *(undefined4 *)puVar11;
        *(undefined4 *)((longlong)puVar13 + 4) = uVar4;
        *(undefined4 *)(puVar13 + 1) = uVar5;
        *(undefined4 *)((longlong)puVar13 + 0xc) = uVar6;
        puVar13[2] = puVar11[2];
        *puVar11 = local_50;
        puVar11[1] = uStack_48;
        puVar11[2] = local_40;
      }
    }
  }
  plVar16 = (longlong *)param_2[1];
joined_r0x0001421a0135:
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar16 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  return;
}



// FUNCTION 1421a0220 InitializeModule body=118 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FMessagingModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FSelfRegisteringExec::FSelfRegisteringExec();
  *puVar1 = &PTR__scalar_deleting_destructor__144fdd350;
  puVar1[1] = &PTR_LAB_144fdd360;
  puVar1[2] = 0;
  puVar2 = puVar1 + 1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar1[3] = 0;
  return puVar2;
}



// FUNCTION 1421a02a0 Intercept body=226 status=ok
// SIG undefined Intercept(void)

void FMessageBus::Intercept(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  if (*param_3 != 0) {
    if ((*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) &&
       (cVar3 = (**(code **)**(undefined8 **)(param_1 + 0x28))(), cVar3 == '\0')) {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    local_38 = *param_2;
    lVar2 = param_2[1];
    local_28 = 0x4219e520;
    uStack_24 = 1;
    uStack_20 = 0;
    uStack_1c = uStack_30._4_4_;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    uStack_30 = lVar2;
    uVar4 = TBaseDelegate<TTypeWrapper<void>_>::
            CreateRaw<FMessageRouter,TSharedRef<IMessageInterceptor,1>,FName>
                      (local_18,lVar1,&local_28,&local_38,*param_3);
    cVar3 = TQueue<TBaseDelegate<void>,0>::Enqueue(lVar1 + 0x100,uVar4);
    if (cVar3 != '\0') {
      (**(code **)(**(longlong **)(lVar1 + 0x148) + 0x10))();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(uVar4);
  }
  return;
}



// FUNCTION 1421a03d0 FUN_1421a03d0 body=390 status=ok
// SIG undefined FUN_1421a03d0(void)

void FUN_1421a03d0(longlong param_1)

{
  longlong **pplVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_28;
  int local_20;
  longlong *local_18 [2];
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  while (lVar2 = **(longlong **)(param_1 + 0x108), lVar2 != 0) {
    pplVar1 = (longlong **)(lVar2 + 8);
    if (pplVar1 != &local_28) {
      if ((*(int *)(lVar2 + 0x10) == 0) || (*pplVar1 == (longlong *)0x0)) {
        if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
          (**(code **)(*local_28 + 0x28))();
          if (local_28 != (longlong *)0x0) {
            local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
          }
          local_20 = 0;
        }
      }
      else {
        (**(code **)(**pplVar1 + 0x30))();
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x108);
    *(longlong *)(param_1 + 0x108) = lVar2;
    if (((local_18 != pplVar1) && (*(int *)(lVar2 + 0x10) != 0)) && (*pplVar1 != (longlong *)0x0)) {
      (**(code **)(**pplVar1 + 0x28))();
      if (*pplVar1 != (longlong *)0x0) {
        plVar4 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
        *pplVar1 = plVar4;
      }
      *(undefined4 *)(lVar2 + 0x10) = 0;
    }
    if (lVar3 != 0) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3 + 8);
      FMemory::operator_delete(lVar3);
    }
    plVar4 = (longlong *)0x0;
    if (local_20 != 0) {
      plVar4 = local_28;
    }
    (**(code **)(*plVar4 + 0x38))();
  }
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 1421a0560 ProcessDelayedMessages body=311 status=ok
// SIG undefined ProcessDelayedMessages(void)

void FMessageRouter::ProcessDelayedMessages(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  if (0 < *(int *)(param_1 + 0x120)) {
    do {
      plVar5 = (longlong *)(**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x118) + 0x58))();
      if (*(longlong *)(param_1 + 0x110) < *plVar5) break;
      FUN_142198a80(param_1 + 0x118,&local_28,local_res8,1);
      local_38 = local_28;
      local_30 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      DispatchMessage(param_1,&local_38);
      plVar5 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_30)(local_30);
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
    } while (0 < *(int *)(param_1 + 0x120));
    plVar5 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1421a06a0 FUN_1421a06a0 body=590 status=ok
// SIG undefined FUN_1421a06a0(void)

void FUN_1421a06a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_88;
  longlong *plStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_res10 = param_2;
  puVar11 = (undefined8 *)operator_new(0xc0);
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    plVar12 = (longlong *)FTaskGraphInterface::Get();
    param_7 = (undefined8 *)*param_7;
    plVar13 = (longlong *)FDateTime::UtcNow(local_res8);
    lVar3 = *param_5;
    lVar4 = *plVar13;
    uVar10 = (**(code **)(*plVar12 + 0x10))(plVar12,0);
    puVar14 = (undefined4 *)(**(code **)*param_7)(param_7,local_58);
    *puVar11 = &PTR_LAB_144fdd778;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    *(undefined4 *)(puVar11 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar11 + 0x3c) = 0;
    puVar11[9] = 0;
    *(undefined4 *)(puVar11 + 10) = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = *param_6;
    puVar11[0xe] = local_res10;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0x12] = 0;
    *(undefined1 *)(puVar11 + 0x13) = param_4;
    uVar5 = *puVar14;
    uVar6 = puVar14[1];
    uVar7 = puVar14[2];
    uVar8 = puVar14[3];
    *(undefined4 *)((longlong)puVar11 + 0xac) = uVar10;
    puVar11[0x16] = lVar3 + lVar4;
    *(undefined4 *)((longlong)puVar11 + 0x9c) = uVar5;
    *(undefined4 *)(puVar11 + 0x14) = uVar6;
    *(undefined4 *)((longlong)puVar11 + 0xa4) = uVar7;
    *(undefined4 *)(puVar11 + 0x15) = uVar8;
    FWeakObjectPtr::operator=(puVar11 + 0x17,param_3);
  }
  plVar12 = (longlong *)0x0;
  plVar13 = (longlong *)operator_new(0x18);
  if (plVar13 != (longlong *)0x0) {
    *(undefined4 *)(plVar13 + 1) = 1;
    *plVar13 = (longlong)&PTR_FUN_14415b778;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    plVar13[2] = (longlong)puVar11;
    plVar12 = plVar13;
  }
  local_88 = puVar11;
  plStack_80 = plVar12;
  SharedPointerInternals::EnableSharedFromThis(&local_88,puVar11,puVar11);
  lVar3 = *(longlong *)(param_1 + 0x18);
  FUN_1421a2c90(*(undefined8 *)(lVar3 + 0x138),&local_88);
  uStack_5c = uStack_70._4_4_;
  local_78 = local_88;
  uStack_70 = plStack_80;
  local_68 = 0x4219fe60;
  uStack_64 = 1;
  uStack_60 = 0;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
  }
  uVar15 = TBaseDelegate<TTypeWrapper<void>_>::
           CreateRaw<FMessageRouter,TSharedRef<IMessageContext,1>_>
                     (local_48,lVar3,&local_68,&local_78);
  cVar9 = TQueue<TBaseDelegate<void>,0>::Enqueue(lVar3 + 0x100,uVar15);
  if (cVar9 != '\0') {
    (**(code **)(**(longlong **)(lVar3 + 0x148) + 0x10))();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(uVar15);
  plVar12 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_80 + 1;
    lVar3 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return;
}



// FUNCTION 1421a08f0 ReceiveMessage body=567 status=ok
// SIG undefined ReceiveMessage(void)

void FMessageBridge::ReceiveMessage(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  longlong lVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  longlong lVar14;
  int *piVar15;
  int local_res18 [2];
  LPCRITICAL_SECTION local_res20;
  int *local_68;
  undefined8 local_60;
  int *local_58;
  uint local_50;
  uint local_4c;
  
  if (*(char *)(param_1 + 0xa0) == '\0') {
    return;
  }
  piVar10 = (int *)0x0;
  local_68 = (int *)0x0;
  local_60 = 0;
  lVar5 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  iVar9 = 0;
  if (0 < *(int *)(lVar5 + 8)) {
    plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x30))();
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
    local_58 = (int *)0x0;
    local_4c = 0;
    uVar12 = 0;
    local_res20 = lpCriticalSection;
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    lVar5 = *plVar6;
    lVar14 = (longlong)(int)plVar6[1] * 0x10 + lVar5;
    piVar15 = piVar10;
    if (lVar5 != lVar14) {
      piVar13 = piVar10;
      do {
        TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
        ::FindId((longlong *)(param_1 + 0x40),local_res18,lVar5);
        if (local_res18[0] == -1) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(longlong *)(param_1 + 0x40) + (longlong)local_res18[0] * 0x28;
        }
        piVar11 = (int *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          piVar11 = (int *)0x0;
        }
        if (piVar11 != (int *)0x0) {
          iVar9 = (int)piVar10;
          if (piVar15 != piVar15 + (longlong)iVar9 * 4) {
            piVar7 = piVar15;
            do {
              if (((piVar7[1] == piVar11[1] && piVar7[2] == piVar11[2]) && piVar7[3] == piVar11[3])
                  && *piVar11 == *piVar7) {
                if ((int)((longlong)piVar7 - (longlong)piVar15 >> 4) != -1) goto LAB_1421a0a8c;
                break;
              }
              piVar7 = piVar7 + 4;
            } while (piVar7 != piVar15 + (longlong)iVar9 * 4);
          }
          local_50 = iVar9 + 1;
          if ((int)piVar13 < (int)local_50) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,piVar10);
            piVar13 = (int *)(ulonglong)local_4c;
            piVar15 = local_58;
          }
          piVar10 = (int *)(ulonglong)local_50;
          iVar1 = piVar11[1];
          iVar2 = piVar11[2];
          iVar3 = piVar11[3];
          piVar7 = piVar15 + (longlong)iVar9 * 4;
          *piVar7 = *piVar11;
          piVar7[1] = iVar1;
          piVar7[2] = iVar2;
          piVar7[3] = iVar3;
        }
LAB_1421a0a8c:
        uVar12 = SUB84(piVar13,0);
        iVar9 = (int)piVar10;
        lVar5 = lVar5 + 0x10;
        lpCriticalSection = local_res20;
      } while (lVar5 != lVar14);
    }
    LeaveCriticalSection(lpCriticalSection);
    if (local_68 != (int *)0x0) {
      FMemory::Free();
    }
    local_60 = CONCAT44(uVar12,iVar9);
    local_68 = piVar15;
    if (iVar9 == 0) goto LAB_1421a0b09;
  }
  (**(code **)(**(longlong **)(param_1 + 200) + 0x18))
            (*(longlong **)(param_1 + 200),param_2,&local_68);
LAB_1421a0b09:
  if (local_68 != (int *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}



// FUNCTION 1421a0b30 ReceiveTransportMessage body=789 status=ok
// SIG undefined ReceiveTransportMessage(void)

void FMessageBridge::ReceiveTransportMessage
               (longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  LPCRITICAL_SECTION p_Var2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  BOOL BVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  int *piVar12;
  longlong lVar13;
  int local_res8 [2];
  int local_res20 [2];
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if ((*(char *)(param_1 + 0x90) != '\0') && (*(longlong *)(param_1 + 0x80) != 0)) {
    plVar10 = (longlong *)*param_2;
    plVar9 = (longlong *)FDateTime::UtcNow(local_80);
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10);
    if (*plVar9 <= *plVar10) {
      uVar11 = (**(code **)(*(longlong *)*param_2 + 0x40))();
      p_Var2 = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
      BVar8 = TryEnterCriticalSection(p_Var2);
      if (BVar8 == 0) {
        EnterCriticalSection(p_Var2);
      }
      piVar12 = (int *)TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
                       ::FindId(param_1 + 0x30,local_98,uVar11);
      iVar1 = *piVar12;
      LeaveCriticalSection(p_Var2);
      if (iVar1 == -1) {
        uVar11 = (**(code **)(*(longlong *)*param_2 + 0x40))();
        p_Var2 = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
        BVar8 = TryEnterCriticalSection(p_Var2);
        if (BVar8 == 0) {
          EnterCriticalSection(p_Var2);
        }
        TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x30,local_res8,uVar11);
        if ((local_res8[0] == -1) ||
           (lVar13 = *(longlong *)(param_1 + 0x30) + (longlong)local_res8[0] * 0x28, lVar13 == 0)) {
          local_90 = uVar11;
          FUN_1421973a0(param_1 + 0x30,local_res20,&local_90,0);
          lVar13 = *(longlong *)(param_1 + 0x30) + (longlong)local_res20[0] * 0x28;
        }
        uVar5 = param_3[1];
        uVar6 = param_3[2];
        uVar7 = param_3[3];
        *(undefined4 *)(lVar13 + 0x10) = *param_3;
        *(undefined4 *)(lVar13 + 0x14) = uVar5;
        *(undefined4 *)(lVar13 + 0x18) = uVar6;
        *(undefined4 *)(lVar13 + 0x1c) = uVar7;
        LeaveCriticalSection(p_Var2);
        plVar10 = (longlong *)
                  TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_58);
        if (*plVar10 == 0) {
          local_78 = 0;
        }
        else {
          local_78 = *plVar10 + 8;
        }
        local_70 = (longlong *)plVar10[1];
        if (local_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
        }
        plVar10 = *(longlong **)(param_1 + 0x80);
        lVar13 = *plVar10;
        uVar11 = (**(code **)(*(longlong *)*param_2 + 0x40))();
        (**(code **)(lVar13 + 0x20))(plVar10,uVar11,&local_78);
        plVar10 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_70 + 1;
          lVar13 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar12 = (int *)((longlong)plVar10 + 0xc);
            iVar1 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_50 + 1;
          lVar13 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar12 = (int *)((longlong)local_50 + 0xc);
            iVar1 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
      }
      plVar10 = (longlong *)
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_48);
      if (*plVar10 == 0) {
        local_68 = 0;
      }
      else {
        local_68 = *plVar10 + 0x10;
      }
      local_60 = (longlong *)plVar10[1];
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      puVar3 = *(undefined8 **)(param_1 + 0x80);
      local_88 = 0;
      puVar4 = (undefined8 *)*puVar3;
      uVar11 = (**(code **)(*(longlong *)*param_2 + 0x30))();
      (*(code *)*puVar4)(puVar3,param_2,uVar11,&local_88,&local_68);
      plVar10 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_60 + 1;
        lVar13 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar12 = (int *)((longlong)plVar10 + 0xc);
          iVar1 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_40 + 1;
        lVar13 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar12 = (int *)((longlong)local_40 + 0xc);
          iVar1 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1421a0e50 Register body=169 status=ok
// SIG undefined Register(void)

void FMessageBus::Register(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  lVar1 = *(longlong *)(param_1 + 0x18);
  local_48 = *param_3;
  uStack_1c = (undefined4)((ulonglong)lStack_40 >> 0x20);
  lStack_40 = param_3[1];
  local_28 = 0x4219e840;
  uStack_24 = 1;
  uStack_20 = 0;
  if (lStack_40 != 0) {
    LOCK();
    *(int *)(lStack_40 + 0xc) = *(int *)(lStack_40 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = TBaseDelegate<TTypeWrapper<void>_>::
          CreateRaw<FMessageRouter,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
                    (local_18,lVar1,&local_28,&local_38,&local_48);
  cVar2 = TQueue<TBaseDelegate<void>,0>::Enqueue(lVar1 + 0x100,uVar3);
  if (cVar2 != '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x148) + 0x10))();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(uVar3);
  return;
}



// FUNCTION 1421a0f00 Remove body=406 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TWeakPtr<IMessageReceiver,1>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar6 = FCrc::MemCrc_DEPRECATED(param_2,0x10);
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  uVar9 = (longlong)(int)param_1[9] - 1;
  iVar6 = *(int *)((longlong)plVar8 + ((longlong)iVar6 & uVar9) * 4);
  if (iVar6 == -1) {
    return 0;
  }
  lVar5 = *param_1;
  while( true ) {
    lVar7 = (longlong)iVar6;
    piVar2 = (int *)(lVar5 + lVar7 * 0x28);
    if (((*(int *)(lVar5 + 4 + lVar7 * 0x28) == param_2[1] &&
         *(int *)(lVar5 + 8 + lVar7 * 0x28) == param_2[2]) && piVar2[3] == param_2[3]) &&
        *param_2 == *piVar2) break;
    iVar6 = piVar2[8];
    if (iVar6 == -1) {
      return 0;
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar9 = (longlong)*(int *)(lVar5 + 0x24 + lVar7 * 0x28) & uVar9;
    puVar3 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
    iVar4 = *(int *)((longlong)plVar8 + uVar9 * 4);
    while (iVar4 != -1) {
      if (iVar4 == iVar6) {
        *puVar3 = *(undefined4 *)(lVar5 + lVar7 * 0x28 + 0x20);
        break;
      }
      lVar1 = (longlong)iVar4 * 5 + 4;
      puVar3 = (undefined4 *)(lVar5 + lVar1 * 8);
      iVar4 = *(int *)(lVar5 + lVar1 * 8);
    }
  }
  plVar8 = *(longlong **)(*param_1 + 0x18 + lVar7 * 0x28);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar8 != (longlong *)0x0)) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar6,1);
  return 1;
}



// FUNCTION 1421a10a0 RemoveAll body=470 status=ok
// SIG undefined RemoveAll(void)

void FMessageAddressBook::RemoveAll(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  BOOL BVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  undefined4 *puVar13;
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
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  BVar9 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar9 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar3 = *(int *)(param_1 + 2);
  plVar1 = param_1 + 1;
  iVar11 = *(int *)((longlong)param_1 + 0x3c);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3 - iVar11) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2);
  }
  iVar3 = *(int *)(param_1 + 6);
  puStack_30 = (uint *)(param_1 + 3);
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar3 != 0) {
    puVar12 = (uint *)param_1[5];
    if ((uint *)param_1[5] == (uint *)0x0) {
      puVar12 = puStack_30;
    }
    uVar4 = *puVar12;
    uStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar11 = local_68 + 1;
      bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar11;
      if (bVar5) goto LAB_1421a11ab;
      uVar4 = puVar12[lVar10 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar11 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    local_58._4_4_ = (uStack_50 - iVar11) + 0x1f;
    if (iVar3 < local_58._4_4_) {
LAB_1421a11ab:
      local_58._4_4_ = iVar3;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  iStack_20 = uStack_50;
  uStack_1c = iStack_4c;
  iStack_38 = local_68;
  uStack_34 = uStack_64;
  iVar11 = local_58._4_4_;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_44 = iStack_4c;
  bVar5 = local_58._4_4_ < iVar3;
  local_58 = puStack_30;
  local_40 = plVar1;
  uStack_50 = 0xffffffff;
  iStack_4c = iVar11;
  if (bVar5) {
    do {
      iVar11 = iStack_4c;
      iVar3 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
      }
      puVar13 = (undefined4 *)((longlong)iVar3 * 0x10 + *param_2);
      if (puVar13 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar11 * 0x28);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        *puVar13 = *puVar2;
        puVar13[1] = uVar6;
        puVar13[2] = uVar7;
        puVar13[3] = uVar8;
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::Reset
            (plVar1);
                    /* WARNING: Could not recover jumptable at 0x0001421a126f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1421a1280 RemoveAtSwapImpl body=260 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::RemoveAtSwapImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x18);
    iVar6 = param_3;
    do {
      plVar3 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (param_3 <= iVar5) {
      iVar5 = param_3;
    }
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x18),
                 (void *)(*param_1 + (longlong)(iVar6 - iVar5) * 0x18),(longlong)iVar5 * 0x18);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1421a1390 RemoveNode body=716 status=ok
// SIG undefined RemoveNode(void)

void FMessageAddressBook::RemoveNode(undefined8 *param_1,int *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  BOOL BVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  longlong *plVar16;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
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
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_3 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  BVar9 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar9 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar16 = param_1 + 1;
  uStack_a4 = 1;
  uVar3 = *(uint *)(param_1 + 6);
  local_78 = (uint *)(param_1 + 3);
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar14 = (uint *)param_1[5];
    if ((uint *)param_1[5] == (uint *)0x0) {
      puVar14 = local_78;
    }
    uVar4 = *puVar14;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar4 == 0) {
      lVar12 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar10 = local_a8 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar10;
      if (bVar5) goto LAB_1421a149d;
      uVar4 = puVar14[lVar12 + 1];
    }
    uStack_a4 = -uVar4 & uVar4;
    iVar10 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_94 = (iStack_90 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_1421a149d:
      uStack_94 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 6);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar15 = uVar4 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  uStack_94 = uVar4;
  if (uVar4 != uVar3) {
    puVar14 = (uint *)param_1[5];
    if ((uint *)param_1[5] == (uint *)0x0) {
      puVar14 = local_78;
    }
    uVar11 = puVar14[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar10 = (int)uVar4 >> 5;
    while (uVar11 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_1421a1572;
      uVar11 = puVar14[(longlong)iVar10 + 1];
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
    uStack_94 = (uVar15 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_1421a1572:
      uStack_94 = uVar3;
    }
  }
  local_60 = plVar16;
  puStack_50 = local_78;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  while ((uStack_6c != uStack_94 || (local_78 != (uint *)(param_1 + 3)))) {
    puVar1 = (undefined4 *)(*plVar16 + (longlong)(int)uStack_6c * 0x28);
    if (((*(int *)(*plVar16 + 0x1c + (longlong)(int)uStack_6c * 0x28) == param_2[3] &&
         puVar1[6] == param_2[2]) && puVar1[5] == param_2[1]) && *param_2 == puVar1[4]) {
      iVar10 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar10 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar10 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar10);
      }
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(*param_3 + (longlong)iVar10 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  lVar12 = *param_3;
  lVar13 = (longlong)(int)param_3[1] * 0x10 + lVar12;
  for (; lVar12 != lVar13; lVar12 = lVar12 + 0x10) {
    TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
    ::Remove(plVar16,lVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x0001421a1655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1421a1670 FUN_1421a1670 body=815 status=ok
// SIG undefined FUN_1421a1670(void)

void FUN_1421a1670(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  uint uStack_84;
  int iStack_68;
  uint uStack_64;
  uint *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  
  TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x118);
  TSet<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUdpReassembledMessage,1>,0>,FDefaultSetAllocator>
  ::Reset();
  uStack_b4 = 1;
  local_b8 = 0;
  uVar5 = *(uint *)(param_1 + 0x30);
  puVar1 = (uint *)(param_1 + 0x18);
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar5 != 0) {
    puVar16 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = *puVar16;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar15 == 0) {
      lVar12 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar14 = local_b8 + 1;
      bVar9 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar14;
      if (bVar9) goto LAB_1421a175d;
      uVar15 = puVar16[lVar12 + 1];
    }
    uStack_b4 = -uVar15 & uVar15;
    iVar14 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - iVar14;
    }
    uStack_a4 = (iStack_a0 - iVar14) + 0x1f;
    if ((int)uVar5 < (int)uStack_a4) {
LAB_1421a175d:
      uStack_a4 = uVar5;
    }
  }
  uStack_84 = *(uint *)(param_1 + 0x30);
  uStack_58 = 0xffffffff;
  uStack_54 = uStack_a4;
  local_50 = CONCAT44(uStack_9c,iStack_a0);
  uVar15 = uStack_84 & 0xffffffe0;
  iStack_68 = local_b8;
  uStack_64 = uStack_b4;
  local_60 = puVar1;
  if (uStack_84 != uVar5) {
    puVar16 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar16 = puVar1;
    }
    uVar11 = puVar16[(int)uStack_84 >> 5] & -1 << ((byte)uStack_84 & 0x1f);
    iVar14 = (int)uStack_84 >> 5;
    while (uVar11 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
      goto LAB_1421a183d;
      uVar11 = puVar16[(longlong)iVar14 + 1];
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
    uStack_84 = (uVar15 - iVar14) + 0x1f;
    if ((int)uVar5 < (int)uStack_84) {
LAB_1421a183d:
      uStack_84 = uVar5;
    }
  }
  while ((lVar12 = (longlong)(int)uStack_54, uStack_54 != uStack_84 || (local_60 != puVar1))) {
    lVar6 = *(longlong *)(param_1 + 8);
    lVar7 = *(longlong *)(lVar6 + 0x10 + lVar12 * 0x28);
    if (*(int *)(lVar7 + 100) < 0) {
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(lVar7 + 0x58,0);
    }
    else {
      iVar14 = *(int *)(lVar7 + 0x60);
      if (iVar14 != 0) {
        plVar13 = (longlong *)(*(longlong *)(lVar7 + 0x58) + 8);
        do {
          plVar8 = (longlong *)*plVar13;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar8 + 1;
            lVar10 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar3 = (int *)((longlong)plVar8 + 0xc);
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          plVar13 = plVar13 + 2;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      *(undefined4 *)(lVar7 + 0x60) = 0;
    }
    lVar12 = *(longlong *)(lVar6 + lVar12 * 0x28 + 0x10);
    if (*(int *)(lVar12 + 0x7c) < 0) {
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(lVar12 + 0x70,0);
    }
    else {
      iVar14 = *(int *)(lVar12 + 0x78);
      if (iVar14 != 0) {
        plVar13 = (longlong *)(*(longlong *)(lVar12 + 0x70) + 8);
        do {
          plVar8 = (longlong *)*plVar13;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar8 + 1;
            lVar6 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar3 = (int *)((longlong)plVar8 + 0xc);
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          plVar13 = plVar13 + 2;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      *(undefined4 *)(lVar12 + 0x78) = 0;
    }
    uStack_58 = uStack_58 & ~uStack_64;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_68);
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x1f8);
  return;
}



// FUNCTION 1421a19a0 FUN_1421a19a0 body=211 status=ok
// SIG undefined FUN_1421a19a0(void)

undefined8 FUN_1421a19a0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 local_res10 [8];
  
  do {
    LOCK();
    bVar4 = *(char *)(param_1 + 0x130) == '\0';
    if (bVar4) {
      *(char *)(param_1 + 0x130) = '\0';
    }
    UNLOCK();
    if (!bVar4) {
      return 0;
    }
    puVar1 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(param_1 + 0x110) = *puVar1;
    FUN_1421a03d0(param_1);
    FMessageRouter::ProcessDelayedMessages(param_1);
    if (*(int *)(param_1 + 0x120) < 1) {
LAB_1421a1a2d:
      lVar3 = 1000000;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x118) + 0x58))();
      lVar3 = *plVar2 - *(longlong *)(param_1 + 0x110);
      if (999999 < lVar3) goto LAB_1421a1a2d;
    }
    (**(code **)(**(longlong **)(param_1 + 0x148) + 0x20))
              (*(longlong **)(param_1 + 0x148),(longlong)((double)lVar3 * 0.0001),0);
  } while( true );
}



// FUNCTION 1421a1a80 FUN_1421a1a80 body=528 status=ok
// SIG undefined FUN_1421a1a80(void)

void FUN_1421a1a80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6,undefined8 param_7,undefined8 *param_8)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong local_res8;
  undefined1 local_88 [16];
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  lVar5 = operator_new(0xc0);
  if (lVar5 == 0) {
    local_78 = 0;
  }
  else {
    plVar6 = (longlong *)FTaskGraphInterface::Get();
    param_8 = (undefined8 *)*param_8;
    plVar7 = (longlong *)FDateTime::UtcNow(local_88);
    local_res8 = *param_6 + *plVar7;
    uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0);
    uVar8 = (**(code **)*param_8)(param_8,local_48);
    local_78 = FMessageContext::FMessageContext
                         (lVar5,param_2,param_3,param_4,uVar8,param_5,2,&local_res8,param_7,uVar4);
  }
  plStack_70 = (longlong *)operator_new(0x18);
  if (plStack_70 != (longlong *)0x0) {
    *(undefined4 *)(plStack_70 + 1) = 1;
    *plStack_70 = (longlong)&PTR_FUN_14415b778;
    *(undefined4 *)((longlong)plStack_70 + 0xc) = 1;
    plStack_70[2] = local_78;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
  lVar5 = *(longlong *)(param_1 + 0x18);
  FUN_1421a2c90(*(undefined8 *)(lVar5 + 0x138),&local_78);
  uStack_4c = uStack_60._4_4_;
  local_68 = local_78;
  uStack_60 = plStack_70;
  local_58 = 0x4219fe60;
  uStack_54 = 1;
  uStack_50 = 0;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
    UNLOCK();
  }
  uVar8 = TBaseDelegate<TTypeWrapper<void>_>::
          CreateRaw<FMessageRouter,TSharedRef<IMessageContext,1>_>
                    (local_38,lVar5,&local_58,&local_68);
  cVar3 = TQueue<TBaseDelegate<void>,0>::Enqueue(lVar5 + 0x100,uVar8);
  if (cVar3 != '\0') {
    (**(code **)(**(longlong **)(lVar5 + 0x148) + 0x10))();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(uVar8);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_70 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 1421a1c90 FUN_1421a1c90 body=611 status=ok
// SIG undefined FUN_1421a1c90(void)

void FUN_1421a1c90(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x30);
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
          goto LAB_1421a1e47;
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
LAB_1421a1e47:
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



// FUNCTION 1421a1f00 FUN_1421a1f00 body=71 status=ok
// SIG undefined FUN_1421a1f00(void)

void FUN_1421a1f00(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x38);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(*(longlong **)(param_1 + 0x20),1);
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1421a1f70 Stop body=52 status=ok
// SIG undefined Stop(void)

void FMessageRouter::Stop(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x138) + 0x30))();
  LOCK();
  *(undefined1 *)(param_1 + 0x130) = 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001421a1fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x148) + 0x10))();
  return;
}



// FUNCTION 1421a1fe0 Subscribe body=520 status=ok
// SIG undefined Subscribe(void)

longlong *
FMessageBus::Subscribe
          (longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
          undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *local_58;
  longlong *plStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  
  plVar6 = (longlong *)0x0;
  if ((*param_4 == 0) ||
     ((plVar5 = *(longlong **)(param_1 + 0x28), plVar5 != (longlong *)0x0 &&
      (cVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,param_3,param_4), cVar4 == '\0')))) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_58 = (undefined8 *)operator_new(0x30);
    if (local_58 == (undefined8 *)0x0) {
      local_58 = (undefined8 *)0x0;
    }
    else {
      *local_58 = &PTR_LAB_144fdd7e0;
      *(undefined1 *)(local_58 + 1) = 1;
      local_58[2] = *param_4;
      *(undefined1 *)(local_58 + 3) = *param_5;
      *(undefined1 *)((longlong)local_58 + 0x19) = param_5[1];
      *(undefined1 *)((longlong)local_58 + 0x1a) = param_5[2];
      *(undefined1 *)((longlong)local_58 + 0x1b) = param_5[3];
      local_58[4] = *param_3;
      lVar3 = param_3[1];
      local_58[5] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
        UNLOCK();
      }
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f60d18;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = (longlong)local_58;
      plVar6 = plVar5;
    }
    plStack_50 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
    uStack_2c = uStack_40._4_4_;
    lVar3 = *(longlong *)(param_1 + 0x18);
    local_48 = local_58;
    uStack_40 = plStack_50;
    local_38 = 0x4219eb90;
    uStack_34 = 1;
    uStack_30 = 0;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    uVar7 = TBaseDelegate<TTypeWrapper<void>_>::
            CreateRaw<FMessageRouter,TSharedRef<IMessageContext,1>_>
                      (local_28,lVar3,&local_38,&local_48);
    cVar4 = TQueue<TBaseDelegate<void>,0>::Enqueue(lVar3 + 0x100,uVar7);
    if (cVar4 != '\0') {
      (**(code **)(**(longlong **)(lVar3 + 0x148) + 0x10))();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(uVar7);
    plVar6 = plStack_50;
    *param_2 = (longlong)local_58;
    param_2[1] = (longlong)plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_50 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1421a21f0 Tick body=52 status=ok
// SIG undefined Tick(void)

void FMessageRouter::Tick(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FDateTime::UtcNow(local_res8);
  *(undefined8 *)(param_1 + 0x108) = *puVar1;
  ProcessDelayedMessages(param_1 + -8);
  FUN_1421a03d0(param_1 + -8);
  return;
}



// FUNCTION 1421a2230 Tick body=594 status=ok
// SIG undefined Tick(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FMessageTracer::Tick(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_148 [32];
  code *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 local_d8 [80];
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    FUN_1421a1670();
    *(undefined1 *)(param_1 + 0x1b8) = 0;
  }
  if (**(longlong **)(param_1 + 0x1d8) == 0) {
    return 1;
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88[0] = AK::MemoryMgr::StartProfileThreadUsage;
  do {
    while( true ) {
      lVar1 = **(longlong **)(param_1 + 0x1d8);
      if (lVar1 == 0) {
        if (local_48 != 0) {
          plVar4 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar4 = local_58;
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,0);
          }
        }
        if (local_58 == (longlong *)0x0) {
          return 1;
        }
        FMemory::Free();
        return 1;
      }
      lVar2 = ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,lVar1 + 0x10);
      FGenericPlatformMemory::MemswapGreaterThan8(lVar2,local_88,0x50);
      if (*(int *)(lVar2 + 0x40) != 0) {
        plVar4 = *(longlong **)(lVar2 + 0x30);
        if (*(longlong **)(lVar2 + 0x30) == (longlong *)0x0) {
          plVar4 = (longlong *)(lVar2 + 0x10);
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        FMemory::Free();
      }
      lVar2 = *(longlong *)(param_1 + 0x1d8);
      *(longlong *)(param_1 + 0x1d8) = lVar1;
      local_f8 = (longlong *)0x0;
      local_e8 = 0;
      local_128[0] = AK::MemoryMgr::StartProfileThreadUsage;
      FGenericPlatformMemory::MemswapGreaterThan8(local_128,lVar1 + 0x10,0x50);
      if (local_e8 != 0) {
        plVar4 = local_118;
        if (local_f8 != (longlong *)0x0) {
          plVar4 = local_f8;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      if (local_f8 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x50) != 0) {
          plVar4 = *(longlong **)(lVar2 + 0x40);
          if (*(longlong **)(lVar2 + 0x40) == (longlong *)0x0) {
            plVar4 = (longlong *)(lVar2 + 0x20);
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,0);
          }
        }
        if (*(longlong *)(lVar2 + 0x40) != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(lVar2);
      }
      if (local_48 != 0) break;
LAB_1421a2401:
      (*local_88[0])(0);
    }
    plVar4 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar4 = local_58;
    }
    if (plVar4 == (longlong *)0x0) goto LAB_1421a2401;
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*local_88[0])(uVar3);
  } while( true );
}



// FUNCTION 1421a2490 FUN_1421a2490 body=544 status=ok
// SIG undefined FUN_1421a2490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421a2490(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  double dVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_f8 [32];
  LARGE_INTEGER local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  double local_a8;
  undefined1 local_a0;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x1b9) != '\0') {
    QueryPerformanceCounter(&local_d8);
    uVar4 = *param_2;
    plVar10 = (longlong *)param_2[1];
    dVar7 = (double)local_d8.QuadPart * DAT_1468b02f8 + 16777216.0;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    uVar5 = *param_3;
    plVar6 = (longlong *)param_3[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_68 = (longlong *)0x0;
    local_58 = 0;
    local_d0 = param_1;
    local_c8 = uVar4;
    local_c0 = plVar10;
    local_b8 = uVar5;
    local_b0 = plVar6;
    local_a8 = dVar7;
    local_a0 = param_4;
    puVar9 = (undefined8 *)FUN_140438ef0(0x40,local_88);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_FUN_144fdda80;
      puVar9[1] = param_1;
      puVar9[2] = uVar4;
      puVar9[3] = plVar10;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      puVar9[4] = uVar5;
      puVar9[5] = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      puVar9[6] = dVar7;
      *(undefined1 *)(puVar9 + 7) = param_4;
    }
    local_98[0] = &LAB_14219be40;
    puVar9 = (undefined8 *)operator_new(0x60);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 2,local_98);
      LOCK();
      puVar3 = *(undefined8 **)(param_1 + 0x1d0);
      *(undefined8 **)(param_1 + 0x1d0) = puVar9;
      UNLOCK();
      LOCK();
      *puVar3 = puVar9;
      UNLOCK();
    }
    if (local_58 != 0) {
      plVar10 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar10 = local_68;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar10 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_b0 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    plVar10 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_c0 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1421a26b0 FUN_1421a26b0 body=498 status=ok
// SIG undefined FUN_1421a26b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421a26b0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  double dVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_b8 [32];
  LARGE_INTEGER local_98 [2];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x1b9) != '\0') {
    QueryPerformanceCounter(local_98);
    uVar4 = *param_2;
    plVar5 = (longlong *)param_2[1];
    dVar8 = (double)local_98[0].QuadPart * DAT_1468b02f8;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    uVar6 = *param_3;
    plVar7 = (longlong *)param_3[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar10 = (undefined8 *)FUN_140438ef0(0x38,local_78);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &PTR_FUN_144fdda98;
      puVar10[1] = param_1;
      puVar10[2] = uVar4;
      puVar10[3] = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      puVar10[4] = uVar6;
      puVar10[5] = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      puVar10[6] = dVar8 + 16777216.0;
    }
    local_88[0] = &LAB_14219be60;
    puVar10 = (undefined8 *)operator_new(0x60);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = 0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar10 + 2,local_88);
      LOCK();
      puVar3 = *(undefined8 **)(param_1 + 0x1d0);
      *(undefined8 **)(param_1 + 0x1d0) = puVar10;
      UNLOCK();
      LOCK();
      *puVar3 = puVar10;
      UNLOCK();
    }
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
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar7 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1421a28b0 FUN_1421a28b0 body=454 status=ok
// SIG undefined FUN_1421a28b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421a28b0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88 [2];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x1b9) != '\0') {
    QueryPerformanceCounter(local_88);
    uVar4 = *param_2;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    uVar6 = *param_3;
    plVar7 = (longlong *)param_3[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x30,local_68);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_FUN_1446d04f0;
      puVar9[1] = param_1;
      puVar9[2] = uVar4;
      puVar9[3] = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      puVar9[4] = uVar6;
      puVar9[5] = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
    }
    local_78[0] = &LAB_14219bde0;
    puVar9 = (undefined8 *)operator_new(0x60);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 2,local_78);
      LOCK();
      puVar3 = *(undefined8 **)(param_1 + 0x1d0);
      *(undefined8 **)(param_1 + 0x1d0) = puVar9;
      UNLOCK();
      LOCK();
      *puVar3 = puVar9;
      UNLOCK();
    }
    if (local_38 != 0) {
      plVar10 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar10 = local_48;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return;
}


