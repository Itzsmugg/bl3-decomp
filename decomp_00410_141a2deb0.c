// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141a2deb0 FUN_141a2deb0 body=2405 status=ok
// SIG undefined FUN_141a2deb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a2deb0(longlong param_1)

{
  wchar_t _C;
  bool bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char cVar9;
  wint_t wVar10;
  wint_t wVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  int *piVar17;
  undefined8 uVar18;
  int *piVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  uint uVar25;
  int iVar26;
  wchar_t *pwVar27;
  uint uVar28;
  int *piVar29;
  undefined8 uVar30;
  int *piVar31;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  char local_258;
  char local_257;
  longlong *local_250;
  int local_248;
  int *local_240;
  uint local_238;
  uint local_234;
  int local_230;
  int local_22c;
  uint local_228;
  undefined8 local_220;
  longlong *local_218;
  uint local_210;
  undefined8 local_208;
  undefined4 local_200 [2];
  int *local_1f8;
  longlong *local_1f0;
  int local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  int local_1dc;
  int local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [64];
  int local_188;
  int local_184;
  undefined1 local_168 [256];
  int local_68;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  piVar17 = (int *)0x0;
  local_1f0 = (longlong *)0x0;
  local_1d0 = param_1;
  SafeCreateDXGIFactory(&local_1f0);
  if (local_1f0 == (longlong *)0x0) {
    return;
  }
  piVar29 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar29 < DAT_146850178) && (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
    FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
    _Init_thread_footer(&DAT_146850178);
  }
  uVar18 = DAT_146850170;
  plVar15 = (longlong *)FUN_141593110();
  iVar12 = (**(code **)(*plVar15 + 8))(plVar15,uVar18);
  if (0 < iVar12) {
    if ((*piVar29 < DAT_146850178) && (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
      FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
      _Init_thread_footer(&DAT_146850178);
    }
    uVar18 = DAT_146850170;
    plVar15 = (longlong *)FUN_141593110();
    local_240 = (int *)0x0;
    local_234 = 0;
    local_228 = (**(code **)(*plVar15 + 8))(plVar15,uVar18);
    piVar29 = piVar17;
    piVar19 = piVar17;
    uVar28 = 0;
    if (0 < (int)local_228) {
      do {
        lVar16 = (**(code **)(*plVar15 + 0x10))(plVar15,uVar18,piVar17);
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = lVar16 + -8;
        }
        iVar12 = (int)piVar29;
        local_238 = iVar12 + 1;
        if ((int)local_234 < (int)local_238) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_240,piVar29);
          piVar19 = local_240;
        }
        piVar29 = (int *)(ulonglong)local_238;
        uVar25 = (int)piVar17 + 1;
        piVar17 = (int *)(ulonglong)uVar25;
        *(longlong *)(piVar19 + (longlong)iVar12 * 2) = lVar16;
        uVar28 = local_238;
      } while ((int)uVar25 < (int)local_228);
    }
    AlgoImpl::
    IntroSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
              (piVar19,(longlong)(int)uVar28,local_258,&local_258);
    plVar15 = *(longlong **)piVar19;
    FMemory::Free(piVar19);
    piVar17 = (int *)(**(code **)(*plVar15 + 0x60))(plVar15);
  }
  piVar29 = (int *)0x0;
  if (piVar17 == (int *)0x0) {
    local_248 = *DAT_1469fcc28;
  }
  else {
    local_248 = -2;
  }
  local_250 = (longlong *)0x0;
  uVar23 = 0xb100;
  local_1f8 = piVar17;
  uVar18 = FCommandLine::Get();
  local_210 = FParse::Param(uVar18,L"d3d10");
  if ((char)local_210 == '\0') {
    uVar18 = FCommandLine::Get();
    local_210 = FParse::Param(uVar18,L"dx10");
    if ((char)local_210 == '\0') {
      uVar18 = FCommandLine::Get();
      local_210 = FParse::Param(uVar18,&DAT_144d98ba8);
      if (((char)local_210 == '\0') && (DAT_1464c1068 != 10)) goto LAB_141a2e0b6;
    }
  }
  uVar23 = 0xa000;
LAB_141a2e0b6:
  if (DAT_1469fc5a2 != '\0') {
    uVar23 = 0xb100;
  }
  local_210 = local_210 & 0xffffff00;
  local_240 = (int *)0x0;
  local_220 = 0xffffffff;
  local_208 = 0xffffffff;
  local_234 = 0;
  local_257 = '\0';
  local_1e0 = uVar23;
  uVar18 = FCommandLine::Get();
  cVar9 = FParse::Param(uVar18,L"preferAMD");
  if (cVar9 == '\0') {
    uVar18 = FCommandLine::Get();
    cVar9 = FParse::Param(uVar18,L"preferIntel");
    if (cVar9 == '\0') {
      uVar18 = FCommandLine::Get();
      cVar9 = FParse::Param(uVar18,L"preferNvidia");
      local_230 = -1;
      if (cVar9 != '\0') {
        local_230 = 0x10de;
      }
    }
    else {
      local_230 = 0x8086;
    }
  }
  else {
    local_230 = 0x1002;
  }
  uVar18 = FCommandLine::Get();
  cVar9 = FParse::Param(uVar18,L"AllowSoftwareRendering");
  local_258 = cVar9 != '\0';
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar15 = (longlong *)
            (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GameUserSettings.MonitorAnchor.X");
  piVar17 = piVar29;
  if (plVar15 != (longlong *)0x0) {
    piVar17 = (int *)(**(code **)(*plVar15 + 0x38))(plVar15);
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar15 = (longlong *)
            (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GameUserSettings.MonitorAnchor.Y");
  piVar19 = piVar29;
  if (plVar15 != (longlong *)0x0) {
    piVar19 = (int *)(**(code **)(*plVar15 + 0x38))(plVar15);
  }
  local_1dc = *piVar17;
  local_1d8 = *piVar19;
  uVar18 = local_208;
  uVar30 = local_220;
  piVar17 = piVar29;
  piVar19 = piVar29;
  piVar31 = piVar29;
LAB_141a2e204:
  plVar6 = local_1f0;
  plVar15 = local_250;
  local_22c = (int)piVar17;
  local_250 = (longlong *)0x0;
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x10))();
  }
  iVar12 = (**(code **)(*plVar6 + 0x38))(plVar6,piVar17,&local_250);
  lVar16 = local_1d0;
  if (iVar12 == -0x7785fffe) {
    if (((local_248 != -1) ||
        (((local_257 == '\0' && ((char)local_210 == '\0')) ||
         (*(undefined8 *)(local_1d0 + 8) = uVar30, *(int *)(local_1d0 + 0xc) == 0)))) ||
       ((int)uVar30 < 0)) {
      *(undefined8 *)(local_1d0 + 8) = uVar18;
    }
    iVar12 = *(int *)(local_1d0 + 0xc);
    if (iVar12 != 0) {
      if (-1 < *(int *)(local_1d0 + 8)) {
        lVar22 = 2;
        puVar7 = (undefined8 *)(local_1d0 + 0x10);
        piVar17 = piVar31 + (longlong)*(int *)(local_1d0 + 8) * 0x4c;
        do {
          piVar29 = piVar17;
          puVar21 = puVar7;
          uVar18 = *(undefined8 *)(piVar29 + 2);
          *puVar21 = *(undefined8 *)piVar29;
          puVar21[1] = uVar18;
          uVar18 = *(undefined8 *)(piVar29 + 6);
          puVar21[2] = *(undefined8 *)(piVar29 + 4);
          puVar21[3] = uVar18;
          uVar18 = *(undefined8 *)(piVar29 + 10);
          puVar21[4] = *(undefined8 *)(piVar29 + 8);
          puVar21[5] = uVar18;
          uVar18 = *(undefined8 *)(piVar29 + 0xe);
          puVar21[6] = *(undefined8 *)(piVar29 + 0xc);
          puVar21[7] = uVar18;
          uVar18 = *(undefined8 *)(piVar29 + 0x12);
          puVar21[8] = *(undefined8 *)(piVar29 + 0x10);
          puVar21[9] = uVar18;
          uVar18 = *(undefined8 *)(piVar29 + 0x16);
          puVar21[10] = *(undefined8 *)(piVar29 + 0x14);
          puVar21[0xb] = uVar18;
          uVar18 = *(undefined8 *)(piVar29 + 0x1a);
          puVar21[0xc] = *(undefined8 *)(piVar29 + 0x18);
          puVar21[0xd] = uVar18;
          uVar18 = *(undefined8 *)(piVar29 + 0x1e);
          puVar21[0xe] = *(undefined8 *)(piVar29 + 0x1c);
          puVar21[0xf] = uVar18;
          lVar22 = lVar22 + -1;
          puVar7 = puVar21 + 0x10;
          piVar17 = piVar29 + 0x20;
        } while (lVar22 != 0);
        uVar18 = *(undefined8 *)(piVar29 + 0x22);
        puVar21[0x10] = *(undefined8 *)(piVar29 + 0x20);
        puVar21[0x11] = uVar18;
        uVar18 = *(undefined8 *)(piVar29 + 0x26);
        puVar21[0x12] = *(undefined8 *)(piVar29 + 0x24);
        puVar21[0x13] = uVar18;
        iVar12 = piVar29[0x29];
        iVar13 = piVar29[0x2a];
        iVar26 = piVar29[0x2b];
        *(int *)(puVar21 + 0x14) = piVar29[0x28];
        *(int *)((longlong)puVar21 + 0xa4) = iVar12;
        *(int *)(puVar21 + 0x15) = iVar13;
        *(int *)((longlong)puVar21 + 0xac) = iVar26;
        iVar12 = *(int *)(local_1d0 + 0xc);
      }
      if (((iVar12 != 0) && (iVar12 = *(int *)(local_1d0 + 8), -1 < iVar12)) &&
         (*(int *)(local_1d0 + 0xc) != 0xa000)) {
        _guard_xfg_dispatch_icall_nop(local_168,0,0x130);
        plVar6 = local_1f0;
        plVar15 = local_250;
        local_250 = (longlong *)0x0;
        if (plVar15 != (longlong *)0x0) {
          (**(code **)(*plVar15 + 0x10))();
          iVar12 = *(int *)(lVar16 + 8);
        }
        (**(code **)(*plVar6 + 0x38))(plVar6,iVar12,&local_250);
        iVar12 = (**(code **)(*local_250 + 0x40))(local_250,local_168);
        if (iVar12 < 0) {
          local_268 = 0;
          FUN_141a447e0(iVar12,"TempAdapter->GetDesc(&AdapterDesc)",
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                        ,0x3ff);
        }
        if ((((local_68 == 0x1002) && (0 < *DAT_1469fcc40)) ||
            ((local_68 == 0x8086 && (0 < *DAT_1469fcc58)))) ||
           ((local_68 == 0x10de && (0 < *DAT_1469fcc70)))) {
          *(undefined4 *)(lVar16 + 0xc) = 0xa000;
        }
      }
    }
    if (piVar31 != (int *)0x0) {
      FMemory::Free(piVar31);
    }
    if (local_250 != (longlong *)0x0) {
      (**(code **)(*local_250 + 0x10))();
    }
    if (local_1f0 != (longlong *)0x0) {
      (**(code **)(*local_1f0 + 0x10))();
    }
    return;
  }
  local_238 = (int)piVar19 + 1;
  if ((int)piVar29 < (int)local_238) {
    local_228 = local_238;
    TArray<ATTLENBossSnak01Pawn::TTLENBossSnakJoint,FDefaultAllocator>::ResizeGrow(&local_240);
    piVar31 = local_240;
  }
  piVar17 = piVar31 + (longlong)(int)piVar19 * 0x4c;
  local_228 = local_238;
  _guard_xfg_dispatch_icall_nop(piVar17,0,0x130);
  uVar24 = uVar18;
  uVar8 = local_208;
  if (local_250 != (longlong *)0x0) {
    iVar12 = 0;
    local_200[0] = 0;
    cVar9 = SafeTestD3D11CreateDevice(local_250,local_1e0,local_200);
    uVar8 = local_208;
    if (cVar9 != '\0') {
      iVar13 = (**(code **)(*local_250 + 0x40))(local_250,piVar17);
      if (iVar13 < 0) {
        local_268 = 0;
        FUN_141a447e0(iVar13,"TempAdapter->GetDesc(&AdapterDesc)",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                      ,0x374);
      }
      while( true ) {
        local_218 = (longlong *)0x0;
        iVar13 = (**(code **)(*local_250 + 0x38))(local_250,iVar12,&local_218);
        if (iVar13 < 0) break;
        iVar12 = iVar12 + 1;
        if (local_218 != (longlong *)0x0) {
          (**(code **)(*local_218 + 0x10))();
        }
      }
      if (local_218 != (longlong *)0x0) {
        (**(code **)(*local_218 + 0x10))();
      }
      iVar12 = piVar17[0x40];
      if (iVar12 == 0x1002) {
        local_257 = '\x01';
      }
      else {
        local_210 = local_210 & 0xff;
        if (iVar12 == 0x10de) {
          local_210 = 1;
        }
      }
      pwVar27 = L"NVIDIA PerfHUD";
      do {
        _C = *(wchar_t *)((longlong)(piVar17 + -0x513670ee) + (longlong)pwVar27);
        if ((_C == L'\0') && (*pwVar27 == L'\0')) {
          iVar13 = 0;
          goto LAB_141a2e3b2;
        }
        if (_C != *pwVar27) {
          wVar10 = towlower(_C);
          wVar11 = towlower(*pwVar27);
          if (wVar10 != wVar11) goto LAB_141a2e3a8;
        }
        pwVar27 = pwVar27 + 1;
      } while( true );
    }
  }
  goto LAB_141a2e552;
LAB_141a2e3a8:
  iVar13 = (uint)wVar10 - (uint)wVar11;
LAB_141a2e3b2:
  bVar1 = false;
  local_1e8 = local_22c;
  iVar26 = 0;
  uStack_1e4 = local_200[0];
  do {
    local_218 = (longlong *)0x0;
    iVar14 = (**(code **)(*local_250 + 0x38))(local_250,iVar26,&local_218);
    if (iVar14 != 0) {
      if (local_218 != (longlong *)0x0) {
        (**(code **)(*local_218 + 0x10))();
      }
      break;
    }
    _guard_xfg_dispatch_icall_nop(local_1c8,0,0x60);
    iVar14 = (**(code **)(*local_218 + 0x38))();
    if (-1 < iVar14) {
      if ((local_188 == local_1dc) && (local_184 == local_1d8)) {
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
      bVar1 = (bool)(bVar1 | bVar2);
    }
    if (local_218 != (longlong *)0x0) {
      (**(code **)(*local_218 + 0x10))();
    }
    iVar26 = iVar26 + 1;
  } while (!bVar1);
  if ((((iVar12 == 0x1414) && (local_258 == '\0')) && (local_248 < 0)) && (local_1f8 == (int *)0x0))
  {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((local_1f8 == (int *)0x0) || (local_1f8 == *(int **)(piVar17 + 0x4a))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((local_248 < 0) || (local_22c == local_248)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  piVar31 = local_240;
  uVar8 = local_208;
  if ((((!bVar3) && (iVar13 != 0)) && (!bVar4)) && (!bVar5)) {
    if ((iVar12 == 0x8086) || ((local_220._4_4_ != 0 && (-1 < (int)local_220)))) {
      if ((local_230 == piVar17[0x40]) &&
         (((int)((ulonglong)uVar30 >> 0x20) != 0 && (-1 < (int)local_220)))) {
        local_220 = CONCAT44(uStack_1e4,local_1e8);
      }
      else {
        local_220 = uVar30;
        if (bVar1) {
          local_220 = CONCAT44(uStack_1e4,local_1e8);
        }
      }
    }
    else {
      local_220 = CONCAT44(uStack_1e4,local_1e8);
    }
    uVar20 = CONCAT44(uStack_1e4,local_1e8);
    uVar24 = uVar20;
    uVar30 = local_220;
    uVar8 = uVar20;
    if ((((local_208._4_4_ != 0) && (-1 < (int)local_208)) &&
        ((local_230 != piVar17[0x40] || ((int)((ulonglong)uVar18 >> 0x20) == 0)))) &&
       (uVar24 = uVar18, uVar8 = uVar18, bVar1)) {
      uVar24 = uVar20;
      uVar8 = uVar20;
    }
  }
LAB_141a2e552:
  local_208 = uVar8;
  piVar19 = (int *)(ulonglong)local_228;
  piVar17 = (int *)(ulonglong)(local_22c + 1);
  piVar29 = (int *)(ulonglong)local_234;
  uVar18 = uVar24;
  goto LAB_141a2e204;
}



// FUNCTION 141a2e820 FUN_141a2e820 body=223 status=ok
// SIG undefined FUN_141a2e820(void)

int * FUN_141a2e820(longlong *param_1,int *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  void *_Buf1;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)param_3 + 0x408))
                    * 4);
    if (iVar5 != -1) {
      lVar2 = *param_1;
      iVar1 = *(int *)((longlong)param_3 + 0x400);
      do {
        _Buf1 = (void *)((longlong)iVar5 * 0x460 + lVar2);
        if (((*(int *)((longlong)_Buf1 + 0x400) == iVar1) &&
            (iVar3 = _guard_xfg_dispatch_icall_nop
                               (_Buf1,param_3,(longlong)*(int *)((longlong)_Buf1 + 0x400) << 5),
            iVar3 == 0)) &&
           (iVar3 = _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)_Buf1 + 0x40c),(void *)((longlong)param_3 + 0x40c)
                               ,0x40), iVar3 == 0)) {
          *param_2 = iVar5;
          return param_2;
        }
        iVar5 = *(int *)((longlong)_Buf1 + 0x458);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141a2e900 FindId body=291 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (int)(*param_3 >> 4);
    uVar5 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
    uVar3 = -(uVar5 + iVar6) ^ uVar5 >> 0xd;
    uVar7 = (iVar6 - uVar5) - uVar3 ^ uVar3 >> 0xc;
    uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 << 0x10;
    uVar3 = (uVar3 - uVar5) - uVar7 ^ uVar5 >> 5;
    uVar7 = (uVar7 - uVar5) - uVar3 ^ uVar3 >> 3;
    uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 << 10;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar2 +
                    (((longlong)(int)((uVar3 - uVar5) - uVar7) ^ (ulonglong)(uVar5 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar6 * 0x38;
        if ((*(ulonglong *)(lVar4 + lVar1) == *param_3) &&
           (*(int *)(lVar4 + 8 + lVar1) == (int)param_3[1])) {
          *param_2 = iVar6;
          return param_2;
        }
        iVar6 = *(int *)(lVar4 + 0x30 + lVar1);
      } while (iVar6 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141a2ea30 FUN_141a2ea30 body=194 status=ok
// SIG undefined FUN_141a2ea30(void)

int FUN_141a2ea30(int param_1,char param_2)

{
  int iVar1;
  
  if (param_1 - 0x1bU < 0x47) {
    if (param_2 == '\0') {
      switch(param_1) {
      case 0x1b:
        return 0x1c;
      case 0x46:
        return 0x47;
      case 0x49:
        return 0x4a;
      case 0x4c:
        return 0x4d;
      case 0x5a:
        return 0x57;
      case 0x61:
        return 0x62;
      }
    }
    else {
      switch(param_1) {
      case 0x1b:
        return 0x1d;
      case 0x46:
        return 0x48;
      case 0x49:
        return 0x4b;
      case 0x4c:
        return 0x4e;
      case 0x5a:
        return 0x5b;
      case 0x61:
        return 99;
      }
    }
  }
  if (param_1 == 0x13) {
    return 0x15;
  }
  if (param_1 == 0x27) {
    return 0x29;
  }
  if (param_1 != 0x2c) {
    iVar1 = 0x38;
    if (param_1 != 0x35) {
      iVar1 = param_1;
    }
    return iVar1;
  }
  return 0x2e;
}



// FUNCTION 141a2ebc0 FUN_141a2ebc0 body=794 status=ok
// SIG undefined FUN_141a2ebc0(void)

void FUN_141a2ebc0(longlong param_1)

{
  undefined4 *puVar1;
  void *_Dst;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  void *_Src;
  ulonglong uVar16;
  longlong *local_res10;
  undefined8 local_res18;
  ulonglong local_res20;
  ulonglong local_68;
  uint local_60;
  uint local_5c;
  void *local_58;
  ulonglong local_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  
  uVar8 = FCommandLine::Get();
  cVar6 = FParse::Param(uVar8,L"d3ddebug");
  if (cVar6 == '\0') {
    uVar8 = FCommandLine::Get();
    cVar6 = FParse::Param(uVar8,L"d3debug");
    if (cVar6 == '\0') {
      uVar8 = FCommandLine::Get();
      cVar6 = FParse::Param(uVar8,L"dxdebug");
      if (cVar6 == '\0') {
        return;
      }
    }
  }
  uVar12 = 0;
  local_res10 = (longlong *)0x0;
  iVar7 = (**(code **)**(undefined8 **)(param_1 + 0x210))
                    (*(undefined8 **)(param_1 + 0x210),&DAT_145ac6350,&local_res10);
  if (iVar7 < 0) {
    FUN_141a447e0(iVar7,
                  "Direct3DDevice->QueryInterface(IID_ID3D11InfoQueue, (void**)InfoQueue.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                  ,0x430,*(undefined8 *)(param_1 + 0x210));
  }
  if (local_res10 != (longlong *)0x0) {
    local_68 = 0;
    local_5c = 0;
    uVar9 = (**(code **)(*local_res10 + 0x48))();
    uVar11 = uVar12;
    uVar14 = uVar12;
    uVar16 = uVar12;
    local_res20 = uVar9;
    if (uVar9 != 0) {
      do {
        _Src = (void *)0x0;
        local_res18 = 0;
        iVar7 = (**(code **)(*local_res10 + 0x28))(local_res10,uVar16,0,&local_res18);
        if (-1 < iVar7) {
          local_48 = 0;
          local_3c = 0;
          local_40 = (int)local_res18;
          if (0 < (int)local_res18) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_48,0);
          }
          lVar5 = local_48;
          iVar7 = (**(code **)(*local_res10 + 0x28))(local_res10,uVar16,local_48,&local_res18);
          if (-1 < iVar7) {
            iVar7 = (int)uVar12;
            local_60 = (3 - (uint)(iVar7 != 0)) + iVar7;
            if ((int)uVar14 < (int)local_60) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar12);
            }
            uVar4 = local_60;
            uVar12 = (ulonglong)local_60;
            local_58 = (void *)0x0;
            local_50 = 0;
            puVar1 = (undefined4 *)(local_68 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
            *puVar1 = 0x9000a;
            *(undefined2 *)(puVar1 + 1) = 0;
            pcVar2 = *(char **)(lVar5 + 0x10);
            if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
              lVar10 = -1;
              do {
                lVar3 = lVar10 + 1;
                lVar10 = lVar10 + 1;
              } while (pcVar2[lVar3] != '\0');
              uVar15 = (int)lVar10 + 1;
              local_50 = (ulonglong)uVar15;
              uVar13 = uVar15;
              if (0 < (int)uVar15) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
                uVar13 = (uint)local_50;
              }
              _Src = local_58;
              FGenericPlatformString::Convert<char,wchar_t>(local_58,uVar15,pcVar2,uVar15,0x3f);
              if ((uVar13 != 0) && (iVar7 = uVar13 - 1, iVar7 != 0)) {
                local_60 = iVar7 + (uint)(uVar4 == 0) + uVar4;
                if ((int)local_5c < (int)local_60) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar12);
                }
                uVar12 = (ulonglong)local_60;
                _Dst = (void *)(local_68 + ((longlong)(int)uVar4 - (ulonglong)(uVar4 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar7 * 2);
                *(undefined2 *)((longlong)iVar7 * 2 + (longlong)_Dst) = 0;
              }
            }
            if (_Src != (void *)0x0) {
              FMemory::Free(_Src);
            }
            uVar14 = (ulonglong)local_5c;
            uVar9 = local_res20;
          }
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
        uVar16 = uVar16 + 1;
        uVar11 = local_68;
      } while (uVar16 < uVar9);
    }
    (**(code **)(*local_res10 + 0x20))();
    if (uVar11 != 0) {
      FMemory::Free(uVar11);
    }
    if (local_res10 != (longlong *)0x0) {
      (**(code **)(*local_res10 + 0x10))();
    }
  }
  return;
}



// FUNCTION 141a2eee0 GetD3D11DeviceHungErrorString body=685 status=ok
// SIG undefined GetD3D11DeviceHungErrorString(void)

longlong * GetD3D11DeviceHungErrorString(longlong *param_1,int param_2)

{
  int iVar1;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == -0x7785ffff) {
    if ((wchar_t *)*param_1 != L"DXGI_ERROR_INVALID_CALL") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x18);
      iVar1 = (int)param_1[1] + 0x18;
      *(int *)(param_1 + 1) = iVar1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"DXGI_ERROR_INVALID_CALL",0x18);
    }
  }
  else if (param_2 == -0x7785fffb) {
    if ((wchar_t *)*param_1 != L"DXGI_ERROR_DEVICE_REMOVED") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x1a);
      iVar1 = (int)param_1[1] + 0x1a;
      *(int *)(param_1 + 1) = iVar1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"DXGI_ERROR_DEVICE_REMOVED",0x1a);
      return param_1;
    }
  }
  else if (param_2 == -0x7785fffa) {
    if ((wchar_t *)*param_1 != L"DXGI_ERROR_DEVICE_HUNG") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x17);
      iVar1 = (int)param_1[1] + 0x17;
      *(int *)(param_1 + 1) = iVar1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"DXGI_ERROR_DEVICE_HUNG",0x17);
      return param_1;
    }
  }
  else if (param_2 == -0x7785fff9) {
    if ((wchar_t *)*param_1 != L"DXGI_ERROR_DEVICE_RESET") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x18);
      iVar1 = (int)param_1[1] + 0x18;
      *(int *)(param_1 + 1) = iVar1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"DXGI_ERROR_DEVICE_RESET",0x18);
      return param_1;
    }
  }
  else if (param_2 == -0x7785ffe0) {
    if ((wchar_t *)*param_1 != L"DXGI_ERROR_DRIVER_INTERNAL_ERROR") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x21);
      iVar1 = (int)param_1[1] + 0x21;
      *(int *)(param_1 + 1) = iVar1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"DXGI_ERROR_DRIVER_INTERNAL_ERROR",0x21);
      return param_1;
    }
  }
  else {
    FString::PrintfImpl(&local_18,L"%08X",param_2);
    if (param_1 != &local_18) {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = local_18;
      *(undefined4 *)(param_1 + 1) = local_10;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_c;
      return param_1;
    }
    if (local_18 != 0) {
      FMemory::Free();
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141a2f190 GetD3D11ErrorString body=1893 status=ok
// SIG undefined GetD3D11ErrorString(void)

void ** GetD3D11ErrorString(void **param_1,int param_2,longlong *param_3)

{
  void *_Dst;
  void *pvVar1;
  size_t _Size;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  void *pvVar8;
  void *_Src;
  void *local_58;
  int local_50;
  int local_4c;
  void *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  *param_1 = (void *)0x0;
  param_1[1] = (void *)0x0;
  if (param_2 < -0x7789f793) {
    if (param_2 == -0x7789f794) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x13);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0x13;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0x13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"D3DERR_INVALIDCALL",0x13);
      return param_1;
    }
    if (param_2 == -0x7fffbffe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xe);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"E_NOINTERFACE",0xe);
      return param_1;
    }
    if (param_2 == -0x7fffbffb) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,7);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 7;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      puVar5 = *param_1;
      *puVar5 = 0x410046005f0045;
      *(undefined4 *)(puVar5 + 1) = 0x4c0049;
      *(undefined2 *)((longlong)puVar5 + 0xc) = 0;
      return param_1;
    }
    if (param_2 == -0x7ff8fff2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xe);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"E_OUTOFMEMORY",0xe);
      return param_1;
    }
    if (param_2 == -0x7ff8ffa9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xd);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"E_INVALIDARG",0xd);
      return param_1;
    }
    if (param_2 == -0x7789fde4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x17);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0x17;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0x17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"D3DERR_WASSTILLDRAWING",0x17);
      return param_1;
    }
  }
  else {
    if (param_2 == -0x7785ffff) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x18);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0x18;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0x18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"DXGI_ERROR_INVALID_CALL",0x18);
      return param_1;
    }
    if (param_2 == -0x7785fffb) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x1a);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0x1a;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0x1a) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"DXGI_ERROR_DEVICE_REMOVED",0x1a);
      goto LAB_141a2f69b;
    }
    if (param_2 == -0x7783ffff) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x2a);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0x2a;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0x2a) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"D3D11_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS",0x2a);
      return param_1;
    }
    if (param_2 == -0x7783fffe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x1b);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0x1b;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0x1b) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"D3D11_ERROR_FILE_NOT_FOUND",0x1b);
      return param_1;
    }
    if (param_2 == 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,5);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 5;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      puVar5 = *param_1;
      *puVar5 = 0x4b004f005f0053;
      *(undefined2 *)(puVar5 + 1) = 0;
      return param_1;
    }
  }
  FString::PrintfImpl(&local_48,L"%08X",param_2);
  if (param_1 == &local_48) {
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_1 != (void *)0x0) {
      FMemory::Free();
    }
    *param_1 = local_48;
    *(int *)(param_1 + 1) = (int)local_40;
    *(int *)((longlong)param_1 + 0xc) = local_40._4_4_;
  }
  if (param_2 != -0x7785fffb) {
    return param_1;
  }
LAB_141a2f69b:
  if (param_3 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_3 + 0x138))(param_3);
    local_48 = (void *)0x0;
    local_40 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pvVar8 = local_48;
    FGenericPlatformString::Memcpy(local_48,&DAT_144d92164,4);
    puVar5 = (undefined8 *)GetD3D11DeviceHungErrorString(local_38,uVar2);
    if ((int)local_40 < 2) {
      _Src = (void *)*puVar5;
      *puVar5 = 0;
      iVar3 = *(int *)(puVar5 + 1);
      puVar5[1] = 0;
    }
    else {
      iVar7 = *(int *)(puVar5 + 1) + -1;
      if (*(int *)(puVar5 + 1) == 0) {
        iVar7 = 0;
      }
      if (((int)local_40 != 0) || (iVar3 = 1, iVar7 == 0)) {
        iVar3 = 0;
      }
      local_58 = pvVar8;
      local_50 = (int)local_40;
      local_4c = local_40._4_4_;
      pvVar8 = (void *)0x0;
      if (local_40._4_4_ < iVar3 + (int)local_40 + iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
      }
      iVar4 = local_50;
      pvVar1 = (void *)*puVar5;
      _Src = local_58;
      iVar3 = local_50;
      if (iVar7 != 0) {
        lVar6 = (longlong)local_50;
        local_50 = iVar7 + (uint)(local_50 == 0) + local_50;
        if (local_4c < local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar4);
        }
        iVar3 = local_50;
        _Src = local_58;
        _Dst = (void *)((longlong)local_58 + (lVar6 - (ulonglong)(iVar4 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)_Dst) = 0;
      }
    }
    if ((iVar3 != 0) && (iVar3 + -1 != 0)) {
      iVar7 = *(int *)(param_1 + 1);
      iVar4 = (uint)(iVar7 == 0) + iVar7 + iVar3 + -1;
      *(int *)(param_1 + 1) = iVar4;
      if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
      }
      pvVar1 = (void *)((longlong)*param_1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      _Size = (longlong)iVar3 * 2 - 2;
      _guard_xfg_dispatch_icall_nop(pvVar1,_Src,_Size);
      *(undefined2 *)((longlong)pvVar1 + _Size) = 0;
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    if (local_38[0] != 0) {
      FMemory::Free();
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141a2f900 FUN_141a2f900 body=576 status=ok
// SIG undefined FUN_141a2f900(void)

undefined4 FUN_141a2f900(uint param_1,char param_2)

{
  if (param_2 != '\0') {
    if (param_1 == 0) {
switchD_141a2f989_caseD_8:
      return 0x23;
    }
    if (param_1 < 6) {
      LowLevelFatalErrorHandler
                ("Unknown",0x4d1,
                 L"Invalid type specified for tessellated render, probably missing a case in FStaticMeshSceneProxy::GetMeshElement"
                );
      FDebug::AssertFailed
                (&DAT_144d92e26,"Unknown",0x4d1,
                 L"Invalid type specified for tessellated render, probably missing a case in FStaticMeshSceneProxy::GetMeshElement"
                );
    }
    else {
      if (param_1 == 6) {
        return 0x21;
      }
      if (param_1 == 7) {
        return 0x22;
      }
    }
  }
  switch(param_1) {
  case 0:
    return 4;
  case 1:
    return 5;
  case 2:
    return 2;
  default:
    LowLevelFatalErrorHandler("Unknown",0x503,L"Unknown primitive type: %u",param_1);
    FDebug::AssertFailed(&DAT_144d92e27,"Unknown",0x503,L"Unknown primitive type: %u",param_1);
    return 4;
  case 4:
    return 1;
  case 8:
    goto switchD_141a2f989_caseD_8;
  case 9:
    return 0x24;
  case 10:
    return 0x25;
  case 0xb:
    return 0x26;
  case 0xc:
    return 0x27;
  case 0xd:
    return 0x28;
  case 0xe:
    return 0x29;
  case 0xf:
    return 0x2a;
  case 0x10:
    return 0x2b;
  case 0x11:
    return 0x2c;
  case 0x12:
    return 0x2d;
  case 0x13:
    return 0x2e;
  case 0x14:
    return 0x2f;
  case 0x15:
    return 0x30;
  case 0x16:
    return 0x31;
  case 0x17:
    return 0x32;
  case 0x18:
    return 0x33;
  case 0x19:
    return 0x34;
  case 0x1a:
    return 0x35;
  case 0x1b:
    return 0x36;
  case 0x1c:
    return 0x37;
  case 0x1d:
    return 0x38;
  case 0x1e:
    return 0x39;
  case 0x1f:
    return 0x3a;
  case 0x20:
    return 0x3b;
  case 0x21:
    return 0x3c;
  case 0x22:
    return 0x3d;
  case 0x23:
    return 0x3e;
  case 0x24:
    return 0x3f;
  case 0x25:
    return 0x40;
  }
}



// FUNCTION 141a2fbe0 GetD3D11TextureFlagString body=461 status=ok
// SIG undefined GetD3D11TextureFlagString(void)

longlong * GetD3D11TextureFlagString(longlong *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 & 0x20) != 0) {
    *(undefined4 *)(param_1 + 1) = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    builtin_wcsncpy((wchar_t *)*param_1,L"D3D11_BIND_RENDER_TARGET ",0x1a);
  }
  if ((param_2 & 0x40) != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = (0x1a - (uint)(iVar1 != 0)) + iVar1;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    lVar3 = (longlong)iVar1 - (ulonglong)(iVar1 != 0);
    builtin_wcsncpy((wchar_t *)(*param_1 + lVar3 * 2),L"D3D11_BI",8);
    lVar3 = *param_1 + lVar3 * 2;
    ((wchar_t *)(lVar3 + 0x10))[0] = L'N';
    ((wchar_t *)(lVar3 + 0x10))[1] = L'D';
    ((wchar_t *)(lVar3 + 0x14))[0] = L'_';
    ((wchar_t *)(lVar3 + 0x14))[1] = L'D';
    ((wchar_t *)(lVar3 + 0x18))[0] = L'E';
    ((wchar_t *)(lVar3 + 0x18))[1] = L'P';
    ((wchar_t *)(lVar3 + 0x1c))[0] = L'T';
    ((wchar_t *)(lVar3 + 0x1c))[1] = L'H';
    ((wchar_t *)(lVar3 + 0x20))[0] = L'_';
    ((wchar_t *)(lVar3 + 0x20))[1] = L'S';
    ((wchar_t *)(lVar3 + 0x24))[0] = L'T';
    ((wchar_t *)(lVar3 + 0x24))[1] = L'E';
    ((wchar_t *)(lVar3 + 0x28))[0] = L'N';
    ((wchar_t *)(lVar3 + 0x28))[1] = L'C';
    ((wchar_t *)(lVar3 + 0x2c))[0] = L'I';
    ((wchar_t *)(lVar3 + 0x2c))[1] = L'L';
    *(undefined2 *)(lVar3 + 0x30) = 0x20;
    *(undefined2 *)(lVar3 + 0x32) = 0;
  }
  if ((param_2 & 8) != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = (0x1c - (uint)(iVar1 != 0)) + iVar1;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    lVar3 = (longlong)iVar1 - (ulonglong)(iVar1 != 0);
    builtin_wcsncpy((wchar_t *)(*param_1 + lVar3 * 2),L"D3D11_BI",8);
    lVar3 = *param_1 + lVar3 * 2;
    ((wchar_t *)(lVar3 + 0x10))[0] = L'N';
    ((wchar_t *)(lVar3 + 0x10))[1] = L'D';
    ((wchar_t *)(lVar3 + 0x14))[0] = L'_';
    ((wchar_t *)(lVar3 + 0x14))[1] = L'S';
    ((wchar_t *)(lVar3 + 0x18))[0] = L'H';
    ((wchar_t *)(lVar3 + 0x18))[1] = L'A';
    ((wchar_t *)(lVar3 + 0x1c))[0] = L'D';
    ((wchar_t *)(lVar3 + 0x1c))[1] = L'E';
    ((wchar_t *)(lVar3 + 0x20))[0] = L'R';
    ((wchar_t *)(lVar3 + 0x20))[1] = L'_';
    ((wchar_t *)(lVar3 + 0x24))[0] = L'R';
    ((wchar_t *)(lVar3 + 0x24))[1] = L'E';
    ((wchar_t *)(lVar3 + 0x28))[0] = L'S';
    ((wchar_t *)(lVar3 + 0x28))[1] = L'O';
    ((wchar_t *)(lVar3 + 0x2c))[0] = L'U';
    ((wchar_t *)(lVar3 + 0x2c))[1] = L'R';
    *(undefined4 *)(lVar3 + 0x30) = 0x450043;
    *(undefined2 *)(lVar3 + 0x34) = 0x20;
    *(undefined2 *)(lVar3 + 0x36) = 0;
  }
  if ((char)param_2 < '\0') {
    iVar1 = (int)param_1[1];
    iVar2 = (0x1d - (uint)(iVar1 != 0)) + iVar1;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    lVar4 = (longlong)iVar1 - (ulonglong)(iVar1 != 0);
    lVar3 = *param_1;
    builtin_wcsncpy((wchar_t *)(lVar3 + lVar4 * 2),L"D3D11_BI",8);
    builtin_wcsncpy((wchar_t *)(lVar3 + 0x10 + lVar4 * 2),L"ND_UNORD",8);
    builtin_wcsncpy((wchar_t *)(lVar3 + 0x20 + lVar4 * 2),L"ERED_ACC",8);
    *(undefined8 *)(lVar3 + 0x30 + lVar4 * 2) = 0x20005300530045;
    *(undefined2 *)(lVar3 + 0x38 + lVar4 * 2) = 0;
  }
  return param_1;
}



// FUNCTION 141a2fdb0 FUN_141a2fdb0 body=295 status=ok
// SIG undefined FUN_141a2fdb0(void)

wchar_t * FUN_141a2fdb0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return L"DXGI_FORMAT_UNKNOWN";
  default:
    return (wchar_t *)PTR_DAT_1464c1128;
  case 2:
    return L"DXGI_FORMAT_R32G32B32A32_FLOAT";
  case 10:
    return L"DXGI_FORMAT_R16G16B16A16_FLOAT";
  case 0xc:
    return L"DXGI_FORMAT_R16G16B16A16_UINT";
  case 0x10:
    return L"DXGI_FORMAT_R32G32_FLOAT";
  case 0x13:
    return L"DXGI_FORMAT_R32G8X24_TYPELESS";
  case 0x14:
    return L"DXGI_FORMAT_D32_FLOAT_S8X24_UINT";
  case 0x15:
    return L"DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS";
  case 0x18:
    return L"DXGI_FORMAT_R10G10B10A2_UNORM";
  case 0x1b:
    return L"DXGI_FORMAT_R8G8B8A8_TYPELESS";
  case 0x1c:
    return L"DXGI_FORMAT_R8G8B8A8_UNORM";
  case 0x22:
    return L"DXGI_FORMAT_R16G16_FLOAT";
  case 0x23:
    return L"DXGI_FORMAT_R16G16_UNORM";
  case 0x24:
    return L"DXGI_FORMAT_R16G16_UINT";
  case 0x25:
    return L"DXGI_FORMAT_R16G16_SNORM";
  case 0x29:
    return L"DXGI_FORMAT_R32_FLOAT";
  case 0x2d:
    return L"DXGI_FORMAT_D24_UNORM_S8_UINT";
  case 0x2e:
    return L"DXGI_FORMAT_R24_UNORM_X8_TYPELESS";
  case 0x33:
    return L"DXGI_FORMAT_R8G8_SNORM";
  case 0x3d:
    return L"DXGI_FORMAT_R8_UNORM";
  case 0x42:
    return L"DXGI_FORMAT_R1_UNORM";
  case 0x47:
    return L"DXGI_FORMAT_BC1_UNORM";
  case 0x4a:
    return L"DXGI_FORMAT_BC2_UNORM";
  case 0x4d:
    return L"DXGI_FORMAT_BC3_UNORM";
  case 0x50:
    return L"DXGI_FORMAT_BC4_UNORM";
  case 0x53:
    return L"DXGI_FORMAT_BC5_UNORM";
  case 0x57:
    return L"DXGI_FORMAT_B8G8R8A8_UNORM";
  case 0x58:
    return L"DXGI_FORMAT_B8G8R8X8_UNORM";
  case 0x5a:
    return L"DXGI_FORMAT_B8G8R8A8_TYPELESS";
  case 0x5f:
    return L"DXGI_FORMAT_BC6H_UF16";
  case 0x62:
    return L"DXGI_FORMAT_BC7_UNORM";
  }
}



// FUNCTION 141a2ffc0 FUN_141a2ffc0 body=92 status=ok
// SIG undefined FUN_141a2ffc0(void)

undefined8 FUN_141a2ffc0(longlong param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
  case 2:
  case 0x20:
  case 0x22:
    return *(undefined8 *)(param_1 + 0x60);
  case 1:
  case 0x21:
    return *(undefined8 *)(param_1 + 0x68);
  default:
    return *(undefined8 *)(param_1 + 0x800000058);
  case 0x10:
  case 0x12:
    return *(undefined8 *)(param_1 + 0x70);
  case 0x11:
    return *(undefined8 *)(param_1 + 0x78);
  }
}



// FUNCTION 141a30060 FUN_141a30060 body=529 status=ok
// SIG undefined FUN_141a30060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141a30060(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8 [2];
  undefined1 local_98 [64];
  int local_58;
  int local_54;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar5 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GameUserSettings.MonitorAnchor.X");
  piVar8 = (int *)0x0;
  piVar6 = piVar8;
  if (plVar5 != (longlong *)0x0) {
    piVar6 = (int *)(**(code **)(*plVar5 + 0x38))(plVar5);
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar5 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GameUserSettings.MonitorAnchor.Y");
  piVar7 = piVar8;
  if (plVar5 != (longlong *)0x0) {
    piVar7 = (int *)(**(code **)(*plVar5 + 0x38))(plVar5);
  }
  iVar1 = *piVar7;
  iVar2 = *piVar6;
  local_a8[0] = (longlong *)0x0;
  puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x210);
  iVar4 = (**(code **)*puVar3)(puVar3,&DAT_145ac6340,local_a8);
  if (iVar4 < 0) {
    local_c8 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x210);
    FUN_141a447e0(iVar4,
                  "D3DRHI->GetDevice()->QueryInterface(IID_IDXGIDevice, (void**)DXGIDevice.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                  ,0xd2);
  }
  local_b0 = (longlong *)0x0;
  (**(code **)(*local_a8[0] + 0x38))(local_a8[0],&local_b0);
  while( true ) {
    local_b8 = (longlong *)0x0;
    iVar4 = (**(code **)(*local_b0 + 0x38))(local_b0,piVar8,&local_b8);
    if (iVar4 != 0) {
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x10))();
      }
      *param_2 = 0;
      if (local_b0 != (longlong *)0x0) {
        (**(code **)(*local_b0 + 0x10))();
      }
      if (local_a8[0] != (longlong *)0x0) {
        (**(code **)(*local_a8[0] + 0x10))();
      }
      return param_2;
    }
    _guard_xfg_dispatch_icall_nop(local_98,0,0x60);
    iVar4 = (**(code **)(*local_b8 + 0x38))(local_b8,local_98);
    if (((-1 < iVar4) && (local_58 == iVar2)) && (local_54 == iVar1)) break;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    piVar8 = (int *)(ulonglong)((int)piVar8 + 1);
  }
  *param_2 = local_b8;
  local_b8 = (longlong *)0x0;
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  if (local_a8[0] == (longlong *)0x0) {
    return param_2;
  }
  (**(code **)(*local_a8[0] + 0x10))();
  return param_2;
}



// FUNCTION 141a302d0 GetPoolBucketIndex body=69 status=ok
// SIG undefined GetPoolBucketIndex(void)

uint GetPoolBucketIndex(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar2 = 0x20;
  if (param_1 != 0) {
    iVar2 = 0x1f - iVar1;
  }
  param_1 = param_1 - 1;
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 == 0) {
    return 0;
  }
  return 0x20U - (0x1f - iVar1) & ~((iVar2 << 0x1a) >> 0x1f);
}



// FUNCTION 141a30320 GetPoolBucketSize body=76 status=ok
// SIG undefined GetPoolBucketSize(void)

int GetPoolBucketSize(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar2 = 0x20;
  if (param_1 != 0) {
    iVar2 = 0x1f - iVar1;
  }
  param_1 = param_1 - 1;
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 == 0) {
    return 1;
  }
  return 1 << (0x20U - ('\x1f' - (char)iVar1) & ~(byte)((iVar2 << 0x1a) >> 0x1f) & 0x1f);
}



// FUNCTION 141a30370 FUN_141a30370 body=424 status=ok
// SIG undefined FUN_141a30370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141a30370(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,char param_5
             ,int param_6)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  uint uVar4;
  LARGE_INTEGER local_res8;
  ulonglong in_stack_ffffffffffffff78;
  ulonglong uVar5;
  LARGE_INTEGER local_78 [10];
  
  uVar5 = in_stack_ffffffffffffff78 & 0xffffffff00000000;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0xe8))();
  if (uVar2 == 1) {
    if (param_5 == '\0') {
      return 0;
    }
    QueryPerformanceCounter(local_78);
    QueryPerformanceCounter(&local_res8);
    dVar1 = (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) * DAT_1468b02f8;
    do {
      uVar5 = uVar5 & 0xffffffff00000000;
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0xe8))
                        (*(longlong **)(param_1 + 0x200),param_2,param_3,param_4,uVar5);
      uVar4 = 0x40000000;
      if (param_6 != 2) {
        uVar4 = 0x3fe00000;
      }
      QueryPerformanceCounter(&local_res8);
      dVar3 = (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) * DAT_1468b02f8 - dVar1;
      if ((double)((ulonglong)uVar4 << 0x20) <= dVar3 && dVar3 != (double)((ulonglong)uVar4 << 0x20)
         ) {
        return 0;
      }
    } while (uVar2 == 1);
    if (*(char *)(param_1 + 0x3ff8) == '\0') {
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3acc = DAT_146ac3acc + (local_res8.s.LowPart - local_78[0]._0_4_);
      _DAT_146ac3aec = _DAT_146ac3aec + 1;
    }
  }
  if (uVar2 != 0) {
    if (0x7fffffff < uVar2) {
      FUN_141a447e0(uVar2,"Result",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                    ,0x98,*(undefined8 *)(param_1 + 0x210));
    }
    return 0;
  }
  return 1;
}



// FUNCTION 141a30560 FUN_141a30560 body=93 status=ok
// SIG undefined FUN_141a30560(void)

undefined4 FUN_141a30560(int param_1)

{
  switch((&DAT_1464ca1cc)[(longlong)param_1 * 10]) {
  case 0x1b:
    return 0x1c;
  default:
    return (&DAT_1464ca1cc)[(longlong)param_1 * 10];
  case 0x35:
    return 0x38;
  case 0x46:
    return 0x47;
  case 0x49:
    return 0x4a;
  case 0x4c:
    return 0x4d;
  case 0x5a:
    return 0x57;
  }
}



// FUNCTION 141a30620 FUN_141a30620 body=89 status=ok
// SIG undefined FUN_141a30620(void)

float FUN_141a30620(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = 0.0;
  if (DAT_146ab6339 != '\0') {
    lVar1 = FUN_141a30de0(param_1 + 0x18,1);
    dVar2 = (double)lVar1;
    if (lVar1 < 0) {
      dVar2 = dVar2 + 1.8446744073709552e+19;
    }
    dVar3 = (double)DAT_146ab6340;
    if (DAT_146ab6340 < 0) {
      dVar3 = dVar3 + 1.8446744073709552e+19;
    }
    dVar2 = dVar2 / dVar3;
  }
  return (float)dVar2;
}



// FUNCTION 141a30680 FUN_141a30680 body=592 status=ok
// SIG undefined FUN_141a30680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141a30680(longlong param_1,longlong *param_2,longlong *param_3,int *param_4,int *param_5,
             int *param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  int local_f0;
  int *local_e8;
  int local_d8;
  longlong local_d0;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_70;
  int local_64;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (param_3 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_3 + 0x48))(param_3);
  }
  (**(code **)(**(longlong **)(lVar3 + 0x38) + 0x50))(*(longlong **)(lVar3 + 0x38),&local_80);
  if (local_64 == 3) {
    *param_5 = *param_4;
    param_5[1] = param_4[1];
    param_5[2] = param_4[2];
    param_5[3] = param_4[3];
    plVar1 = *(longlong **)(lVar3 + 0x38);
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  else {
    local_c4 = param_4[1];
    local_bc = param_4[2];
    local_b8 = param_4[3];
    local_c8 = *param_4;
    local_d8 = local_b8 - local_c4;
    iVar4 = 3;
    iVar5 = local_bc - local_c8;
    local_b4 = 1;
    local_c0 = 0;
    local_d0 = 0;
    local_a8 = 1;
    local_a4 = 1;
    local_a0 = local_70;
    local_9c = 1;
    local_94 = 3;
    local_8c = 0x20000;
    local_b0 = iVar5;
    local_ac = local_d8;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x28))();
    if (iVar2 < 0) {
      local_108 = *(ulonglong *)(param_1 + 0x210);
      FUN_141a447e0(iVar2,
                    "Direct3DDevice->CreateTexture2D(&Desc,NULL,TempTexture2D.GetInitReference())",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RenderTarget.cpp"
                    ,0x23d);
    }
    local_f0 = 0;
    *param_5 = DAT_1468b5ca0;
    param_5[1] = DAT_1468b5ca4;
    param_5[2] = iVar5;
    param_5[3] = local_d8;
    if (local_58 == 4) {
      iVar2 = *param_6;
      if (iVar2 == 1) {
        iVar4 = 1;
      }
      else if (iVar2 == 2) {
        iVar4 = 2;
      }
      else if (iVar2 != 3) {
        if (iVar2 == 4) {
          iVar4 = 4;
        }
        else if (iVar2 == 5) {
          iVar4 = 5;
        }
        else {
          iVar4 = 0;
        }
      }
      local_f0 = (iVar4 + ((uint)*(byte *)((longlong)param_6 + 0x12) +
                          (uint)*(byte *)((longlong)param_6 + 0x12) * 2) * 2) * local_78 +
                 (uint)*(byte *)((longlong)param_6 + 0x13);
    }
    local_e8 = (int *)0x0;
    if ((((local_c8 != 0) || (local_c4 != 0)) || (local_bc != local_80)) || (local_b8 != local_7c))
    {
      local_e8 = &local_c8;
    }
    local_f8 = *(undefined8 *)(lVar3 + 0x38);
    local_100 = 0;
    local_108 = local_108 & 0xffffffff00000000;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x170))
              (*(longlong **)(param_1 + 0x200),local_d0,0,0);
    *param_2 = local_d0;
  }
  return param_2;
}



// FUNCTION 141a308d0 FUN_141a308d0 body=1269 status=ok
// SIG undefined FUN_141a308d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141a308d0(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  char *pcVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong *local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  puVar8 = (undefined8 *)0x0;
  local_118 = (longlong *)0x0;
  iVar3 = (**(code **)(*param_3 + 0x48))(param_3,0,&DAT_145ac6360,&local_118);
  if (iVar3 < 0) {
    local_128 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar3,
                  "SwapChain->GetBuffer(0,IID_ID3D11Texture2D,(void**)BackBufferResource.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                  ,0x60);
  }
  plVar12 = *(longlong **)(param_1 + 0x210);
  local_100 = (longlong *)0x0;
  local_f8 = (longlong *)0x0;
  if (DAT_1469fc5a2 == '\0') {
    local_a0 = 0;
    local_9c = 4;
    iVar3 = (**(code **)(*plVar12 + 0x48))(plVar12,local_118,&local_a0,&local_f8);
    if (-1 < iVar3) goto LAB_141a30a79;
    uVar11 = 0x77;
    pcVar10 = 
    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp";
    pcVar6 = 
    "D3DRHI->GetDevice()->CreateRenderTargetView(BackBufferResource, &RTVDesc, BackBufferRenderTargetView.GetInitReference())"
    ;
  }
  else {
    local_e8 = 0x18;
    local_e4 = 5;
    local_dc = 0;
    local_d8 = 1;
    iVar3 = (**(code **)(*plVar12 + 0x48))(plVar12,local_118,&local_e8);
    if (iVar3 < 0) {
      local_128 = *(undefined8 *)(param_1 + 0x210);
      FUN_141a447e0(iVar3,
                    "D3DRHI->GetDevice()->CreateRenderTargetView(BackBufferResource, &RTVDescCD3D11_left, BackBufferRenderTargetView.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                    ,0x6b);
    }
    plVar12 = *(longlong **)(param_1 + 0x210);
    local_d0 = 0x18;
    local_cc = 5;
    local_c4 = 1;
    local_c0 = 1;
    if (local_100 != (longlong *)0x0) {
      (**(code **)(*local_100 + 0x10))();
    }
    iVar3 = (**(code **)(*plVar12 + 0x48))(plVar12,local_118,&local_d0,&local_100);
    if (-1 < iVar3) goto LAB_141a30a79;
    uVar11 = 0x6f;
    pcVar10 = 
    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp";
    pcVar6 = 
    "D3DRHI->GetDevice()->CreateRenderTargetView(BackBufferResource, &renderTargetViewRightDesc_right, BackBufferRenderTargetViewRight.GetInitReference())"
    ;
  }
  local_128 = *(undefined8 *)(param_1 + 0x210);
  FUN_141a447e0(iVar3,pcVar6,pcVar10,uVar11);
LAB_141a30a79:
  (**(code **)(*local_118 + 0x50))(local_118,&local_70);
  local_110 = (longlong *)0x0;
  local_108 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_110,0);
  plVar12 = local_110;
  *local_110 = (longlong)local_f8;
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  uVar2 = local_108;
  iVar3 = (int)local_108;
  if (DAT_1469fc5a2 != '\0') {
    lVar7 = (longlong)(int)local_108;
    iVar3 = (int)local_108 + 1;
    local_108 = CONCAT44(local_108._4_4_,iVar3);
    if (local_108._4_4_ < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_110,uVar2 & 0xffffffff);
      plVar12 = local_110;
      iVar3 = (int)local_108;
    }
    plVar12[lVar7] = (longlong)local_100;
    if (local_100 != (longlong *)0x0) {
      (**(code **)(*local_100 + 8))();
    }
  }
  local_b8 = 0;
  local_b4 = 4;
  local_ac = 1;
  local_f0 = (longlong *)0x0;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x38))
                    (*(longlong **)(param_1 + 0x210),local_118,&local_b8,&local_f0);
  if (iVar4 < 0) {
    local_128 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar4,
                  "D3DRHI->GetDevice()->CreateShaderResourceView(BackBufferResource,&SRVDesc,BackBufferShaderResourceView.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                  ,0x8d);
  }
  puVar5 = (undefined8 *)operator_new(0xf8);
  plVar13 = local_f0;
  if (puVar5 != (undefined8 *)0x0) {
    local_88 = 1;
    *puVar5 = &PTR_FUN_143f3ece8;
    uStack_84 = 0;
    uStack_7c = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *(undefined2 *)(puVar5 + 2) = 0x100;
    puVar5[3] = 0;
    puVar5[9] = puVar5 + 10;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = param_2;
    puVar8 = puVar5 + 0xd;
    *(undefined4 *)((longlong)puVar5 + 0x34) = 1;
    *(undefined4 *)(puVar5 + 7) = 1;
    *(undefined4 *)(puVar5 + 8) = 0;
    *(undefined4 *)(puVar5 + 4) = 1;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    puVar5[10] = 0xc7efffffe0000000;
    puVar5[0xb] = 0;
    *puVar5 = &PTR_FUN_144d83940;
    *(undefined4 *)(puVar5 + 0xc) = local_70;
    *(undefined4 *)((longlong)puVar5 + 100) = local_6c;
    *puVar8 = &PTR__scalar_deleting_destructor__144da0d80;
    *(undefined4 *)(puVar5 + 0xe) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x74) = 0xffffffff;
    *(undefined1 *)(puVar5 + 0xf) = 0;
    puVar5[0x10] = param_1;
    puVar5[0x11] = 0;
    *(undefined4 *)(puVar5 + 0x12) = 0;
    puVar5[0x13] = puVar8;
    puVar5[0x14] = local_118;
    if (local_118 != (longlong *)0x0) {
      (**(code **)(*local_118 + 8))(local_118);
    }
    puVar5[0x15] = plVar13;
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 8))(plVar13);
    }
    puVar5[0x16] = 0;
    *(int *)(puVar5 + 0x17) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)((longlong)puVar5 + 0xbc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar5 + 0x16,iVar3,0);
      plVar13 = (longlong *)puVar5[0x16];
      plVar9 = plVar12;
      iVar4 = iVar3;
      do {
        plVar1 = (longlong *)*plVar9;
        *plVar13 = (longlong)plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar13 = plVar13 + 1;
        plVar9 = plVar9 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(undefined1 *)(puVar5 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xc4) = 1;
    puVar5[0x19] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x1b] = 0;
    puVar5[0x1c] = 0;
    *(undefined4 *)(puVar5 + 0x1d) = 0;
    *(uint *)((longlong)puVar5 + 0xf4) = *(uint *)((longlong)puVar5 + 0xf4) & 0xfffffffc;
    *puVar5 = &PTR_FUN_144da0fb8;
    *puVar8 = &PTR_LAB_144da1010;
    *(undefined4 *)(puVar5 + 0x1e) = 0;
    puVar8 = puVar5;
  }
  D3D11TextureAllocated<FD3D11BaseTexture2D>(puVar8);
  *(undefined1 *)(puVar8 + 2) = 1;
  plVar13 = plVar12;
  if (local_f0 != (longlong *)0x0) {
    (**(code **)(*local_f0 + 0x10))();
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    if ((longlong *)*plVar13 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar13 + 0x10))();
    }
    plVar13 = plVar13 + 1;
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  if (local_100 != (longlong *)0x0) {
    (**(code **)(*local_100 + 0x10))();
  }
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x10))();
  }
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x10))();
  }
  return puVar8;
}



// FUNCTION 141a30de0 FUN_141a30de0 body=664 status=ok
// SIG undefined FUN_141a30de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_141a30de0(longlong param_1,char param_2)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  ulonglong local_res18;
  ulonglong local_res20;
  LARGE_INTEGER local_58;
  LARGE_INTEGER local_50 [5];
  
  if (DAT_146ab6339 != '\0') {
    iVar4 = *(int *)(param_1 + 0x4c);
    if ((param_2 == '\0') && (iVar6 = 1, 1 < *(int *)(param_1 + 0x50))) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x200);
        iVar3 = (**(code **)(*plVar1 + 0xe8))
                          (plVar1,*(undefined8 *)
                                   (*(longlong *)(param_1 + 0x60) + (longlong)iVar4 * 8),
                           &local_res18,8,1);
        if ((iVar3 == 0) &&
           ((plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x200),
            iVar3 = (**(code **)(*plVar1 + 0xe8))
                              (plVar1,*(undefined8 *)
                                       (*(longlong *)(param_1 + 0x58) + (longlong)iVar4 * 8),
                               &local_res20,8,1), iVar3 == 0 && (local_res20 < local_res18))))
        goto LAB_141a30edd;
        iVar6 = iVar6 + 1;
        iVar4 = (*(int *)(param_1 + 0x48) + -1 + iVar4) % *(int *)(param_1 + 0x48);
      } while (iVar6 < *(int *)(param_1 + 0x50));
    }
    if ((0 < *(int *)(param_1 + 0x50)) || (param_2 != '\0')) {
      if ((*(int *)(param_1 + 0x50) == *(int *)(param_1 + 0x48)) || (param_2 != '\0')) {
        bVar5 = 1;
      }
      else {
        bVar5 = 0;
      }
      QueryPerformanceCounter(local_50);
      QueryPerformanceCounter(&local_58);
      dVar2 = (double)CONCAT44(local_58.s.HighPart,local_58.s.LowPart) * DAT_1468b02f8;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x200);
        iVar6 = (**(code **)(*plVar1 + 0xe8))
                          (plVar1,*(undefined8 *)
                                   (*(longlong *)(param_1 + 0x60) + (longlong)iVar4 * 8),
                           &local_res18,8,bVar5 ^ 1);
        QueryPerformanceCounter(&local_58);
        if (0.5 < (double)CONCAT44(local_58.s.HighPart,local_58.s.LowPart) * DAT_1468b02f8 - dVar2)
        {
          return 0;
        }
      } while ((iVar6 == 1) && (bVar5 != 0));
      QueryPerformanceCounter(&local_58);
      DAT_146ac3acc = DAT_146ac3acc + (local_58.s.LowPart - local_50[0]._0_4_);
      _DAT_146ac3aec = _DAT_146ac3aec + 1;
      if (iVar6 == 0) {
        QueryPerformanceCounter(&local_58);
        QueryPerformanceCounter(local_50);
        dVar2 = (double)CONCAT44(local_50[0].s.HighPart,local_50[0].s.LowPart) * DAT_1468b02f8;
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x200);
          iVar6 = (**(code **)(*plVar1 + 0xe8))
                            (plVar1,*(undefined8 *)
                                     (*(longlong *)(param_1 + 0x58) + (longlong)iVar4 * 8),
                             &local_res20,8,bVar5 ^ 1);
          QueryPerformanceCounter(local_50);
          if (0.5 < (double)CONCAT44(local_50[0].s.HighPart,local_50[0].s.LowPart) * DAT_1468b02f8 -
                    dVar2) {
            return 0;
          }
        } while ((iVar6 == 1) && (bVar5 != 0));
        QueryPerformanceCounter(local_50);
        DAT_146ac3acc = DAT_146ac3acc + (local_50[0].s.LowPart - local_58._0_4_);
        if ((iVar6 == 0) && (local_res20 < local_res18)) {
LAB_141a30edd:
          return local_res18 - local_res20;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 141a31080 FUN_141a31080 body=94 status=ok
// SIG undefined FUN_141a31080(void)

float FUN_141a31080(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  if (DAT_146ab6339 != '\0') {
    lVar1 = FUN_141a30de0(*(undefined8 *)(param_1 + 0x58),1);
    dVar2 = (double)lVar1;
    if (lVar1 < 0) {
      dVar2 = dVar2 + 1.8446744073709552e+19;
    }
    dVar3 = (double)DAT_146ab6340;
    if (DAT_146ab6340 < 0) {
      dVar3 = dVar3 + 1.8446744073709552e+19;
    }
    return (float)(dVar2 / dVar3);
  }
  return 0.0;
}



// FUNCTION 141a310e0 FUN_141a310e0 body=166 status=ok
// SIG undefined FUN_141a310e0(void)

int FUN_141a310e0(int param_1,int param_2)

{
  switch(param_2) {
  case 0:
    return param_1 * 3;
  case 1:
    return param_1 + 2;
  case 2:
    return param_1 * 2;
  default:
    LowLevelFatalErrorHandler("Unknown",0x3a6,L"Unknown primitive type: %u",param_2);
    FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x3a6,L"Unknown primitive type: %u",param_2);
    return 0;
  case 4:
    return param_1;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
    return (param_2 + -5) * param_1;
  }
}



// FUNCTION 141a311d0 FUN_141a311d0 body=50 status=ok
// SIG undefined FUN_141a311d0(void)

void FUN_141a311d0(longlong *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x740))();
  cVar1 = IsRHIDeviceIntel();
  if ((cVar1 == '\0') && (cVar1 = IsRHIDeviceIntel(), cVar1 == '\0')) {
    DAT_146ab62ec = 0;
    return;
  }
  DAT_146ab62ec = 1;
  return;
}



// FUNCTION 141a31210 FUN_141a31210 body=1178 status=ok
// SIG undefined FUN_141a31210(void)

void FUN_141a31210(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  plVar1 = (longlong *)(param_1 + 0x42e8);
  TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>::Empty(plVar1,1);
  plVar2 = (longlong *)(param_1 + 0x4318);
  TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>::Empty(plVar2,1);
  plVar3 = (longlong *)(param_1 + 0x42f8);
  TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>::Empty(plVar3,1);
  TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>::Empty(param_1 + 0x4308,1);
  plVar4 = (longlong *)(param_1 + 0x4328);
  TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>::Empty(plVar4,1);
  plVar5 = (longlong *)(param_1 + 0x4338);
  TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>::Empty(plVar5,1);
  puVar7 = (undefined8 *)operator_new(0x70);
  puVar9 = (undefined8 *)0x0;
  puVar8 = puVar9;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 4;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 5) = 0;
    *(undefined4 *)(puVar7 + 7) = 0;
    puVar7[6] = &PTR_LAB_144da1070;
    *puVar7 = &PTR__scalar_deleting_destructor__144da1030;
    puVar7[8] = param_1;
    *(undefined4 *)(puVar7 + 9) = 0x1000;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    FRenderResource::InitResource(puVar7);
    puVar7[0xc] = 0;
    *puVar7 = &PTR__scalar_deleting_destructor__144da1d20;
    puVar7[6] = &PTR_LAB_144da1d60;
    *(undefined4 *)(puVar7 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x6c) = 5;
    *(int *)(puVar7 + 7) = *(int *)(puVar7 + 7) + 1;
    puVar8 = puVar7;
  }
  iVar6 = *(int *)(param_1 + 0x42f0);
  *(int *)(param_1 + 0x42f0) = iVar6 + 1;
  if (*(int *)(param_1 + 0x42f4) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
  }
  *(undefined8 **)(*plVar1 + (longlong)iVar6 * 8) = puVar8;
  puVar7 = (undefined8 *)operator_new(0x70);
  puVar8 = puVar9;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 4;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 5) = 0;
    *(undefined4 *)(puVar7 + 7) = 0;
    *puVar7 = &PTR__scalar_deleting_destructor__144da1030;
    puVar7[6] = &PTR_LAB_144da1070;
    puVar7[8] = param_1;
    *(undefined4 *)(puVar7 + 9) = 0x1000;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    FRenderResource::InitResource(puVar7);
    puVar7[0xc] = 0;
    *puVar7 = &PTR__scalar_deleting_destructor__144da1d20;
    puVar7[6] = &PTR_LAB_144da1d60;
    *(undefined4 *)(puVar7 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x6c) = 5;
    *(int *)(puVar7 + 7) = *(int *)(puVar7 + 7) + 1;
    puVar8 = puVar7;
  }
  iVar6 = *(int *)(param_1 + 0x4320);
  *(int *)(param_1 + 0x4320) = iVar6 + 1;
  if (*(int *)(param_1 + 0x4324) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar6);
  }
  *(undefined8 **)(*plVar2 + (longlong)iVar6 * 8) = puVar8;
  puVar7 = (undefined8 *)operator_new(0x70);
  puVar8 = puVar9;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 4;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 5) = 0;
    *(undefined4 *)(puVar7 + 7) = 0;
    *puVar7 = &PTR__scalar_deleting_destructor__144da1030;
    puVar7[6] = &PTR_LAB_144da1070;
    puVar7[8] = param_1;
    *(undefined4 *)(puVar7 + 9) = 0x1000;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    FRenderResource::InitResource(puVar7);
    puVar7[0xc] = 0;
    *puVar7 = &PTR__scalar_deleting_destructor__144da1d20;
    puVar7[6] = &PTR_LAB_144da1d60;
    *(undefined4 *)(puVar7 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x6c) = 1;
    *(int *)(puVar7 + 7) = *(int *)(puVar7 + 7) + 1;
    puVar8 = puVar7;
  }
  iVar6 = *(int *)(param_1 + 0x4300);
  *(int *)(param_1 + 0x4300) = iVar6 + 1;
  if (*(int *)(param_1 + 0x4304) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar6);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar6 * 8) = puVar8;
  puVar7 = (undefined8 *)operator_new(0x70);
  puVar8 = puVar9;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 4;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 5) = 0;
    *(undefined4 *)(puVar7 + 7) = 0;
    *puVar7 = &PTR__scalar_deleting_destructor__144da1030;
    puVar7[6] = &PTR_LAB_144da1070;
    puVar7[8] = param_1;
    *(undefined4 *)(puVar7 + 9) = 0x1000;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    FRenderResource::InitResource(puVar7);
    puVar7[0xc] = 0;
    *puVar7 = &PTR__scalar_deleting_destructor__144da1d20;
    puVar7[6] = &PTR_LAB_144da1d60;
    *(undefined4 *)(puVar7 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x6c) = 1;
    *(int *)(puVar7 + 7) = *(int *)(puVar7 + 7) + 1;
    puVar8 = puVar7;
  }
  iVar6 = *(int *)(param_1 + 0x4310);
  *(int *)(param_1 + 0x4310) = iVar6 + 1;
  if (*(int *)(param_1 + 0x4314) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x4308,iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x4308) + (longlong)iVar6 * 8) = puVar8;
  puVar7 = (undefined8 *)operator_new(0x70);
  puVar8 = puVar9;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 4;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 5) = 0;
    *(undefined4 *)(puVar7 + 7) = 0;
    *puVar7 = &PTR__scalar_deleting_destructor__144da1030;
    puVar7[6] = &PTR_LAB_144da1070;
    puVar7[8] = param_1;
    *(undefined4 *)(puVar7 + 9) = 0x1000;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    FRenderResource::InitResource(puVar7);
    puVar7[0xc] = 0;
    *puVar7 = &PTR__scalar_deleting_destructor__144da1d20;
    puVar7[6] = &PTR_LAB_144da1d60;
    *(undefined4 *)(puVar7 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x6c) = 1;
    *(int *)(puVar7 + 7) = *(int *)(puVar7 + 7) + 1;
    puVar8 = puVar7;
  }
  iVar6 = *(int *)(param_1 + 0x4330);
  *(int *)(param_1 + 0x4330) = iVar6 + 1;
  if (*(int *)(param_1 + 0x4334) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar6);
  }
  *(undefined8 **)(*plVar4 + (longlong)iVar6 * 8) = puVar8;
  puVar8 = (undefined8 *)operator_new(0x70);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 1) = 4;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(undefined1 *)(puVar8 + 5) = 0;
    *(undefined4 *)(puVar8 + 7) = 0;
    *puVar8 = &PTR__scalar_deleting_destructor__144da1030;
    puVar8[6] = &PTR_LAB_144da1070;
    puVar8[8] = param_1;
    *(undefined4 *)(puVar8 + 9) = 0x1000;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    FRenderResource::InitResource(puVar8);
    puVar8[0xc] = 0;
    *puVar8 = &PTR__scalar_deleting_destructor__144da1d20;
    puVar8[6] = &PTR_LAB_144da1d60;
    *(undefined4 *)(puVar8 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x6c) = 1;
    *(int *)(puVar8 + 7) = *(int *)(puVar8 + 7) + 1;
    puVar9 = puVar8;
  }
  iVar6 = *(int *)(param_1 + 0x4340);
  *(int *)(param_1 + 0x4340) = iVar6 + 1;
  if (*(int *)(param_1 + 0x4344) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar6);
  }
  *(undefined8 **)(*plVar5 + (longlong)iVar6 * 8) = puVar9;
  return;
}



// FUNCTION 141a316b0 FUN_141a316b0 body=4197 status=ok
// SIG undefined FUN_141a316b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a316b0(longlong param_1)

{
  undefined2 *_Dst;
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined4 *_Src;
  wint_t *pwVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  wint_t wVar10;
  wint_t wVar11;
  int iVar12;
  DWORD DVar13;
  HRESULT HVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int *piVar20;
  wint_t *pwVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined4 uVar26;
  ulonglong uVar27;
  int iVar28;
  longlong lVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  undefined2 *puVar34;
  undefined1 auStack_2e8 [32];
  longlong local_2c8;
  undefined4 local_2c0;
  undefined4 local_2b8;
  longlong *local_2b0;
  undefined4 *local_2a8;
  longlong *local_2a0;
  char local_298;
  char local_297;
  undefined4 local_294;
  longlong *local_290;
  uint local_288;
  undefined4 local_284;
  undefined1 local_280 [8];
  longlong *local_278;
  undefined8 local_270;
  longlong *local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  uint local_250;
  undefined4 uStack_24c;
  longlong local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  ulonglong local_238;
  void *local_230;
  int local_228;
  undefined4 *local_220;
  int local_218;
  IID *local_210;
  undefined2 *local_208;
  undefined2 *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1ec;
  longlong local_1e0 [2];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined2 *local_1a0;
  undefined8 local_198;
  wint_t local_188 [128];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  IID local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  FUN_141edc760(local_280);
  if (*(longlong *)(param_1 + 0x210) != 0) goto LAB_141a32694;
  (**(code **)(*(longlong *)(param_1 + 0x218) + 0x10))();
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x27c8),0,0x1800);
  lVar23 = -1;
  plVar25 = (longlong *)0x0;
  *(undefined8 *)(param_1 + 0x3fc8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3fd0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3fd8) = 0xffffffffffffffff;
  local_294 = 0;
  cVar7 = FUN_141a2cae0();
  uVar32 = (uint)(cVar7 == '\0');
  local_288 = uVar32;
  cVar8 = D3D11RHI_ShouldCreateWithD3DDebug();
  uVar33 = (uint)(cVar7 == '\0');
  if (cVar8 != '\0') {
    local_288 = uVar32 | 2;
    uVar33 = local_288;
  }
  DAT_146ab6308 = 0;
  local_278 = (longlong *)0x0;
  iVar12 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x38))
                     (*(longlong **)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 0x17de8),&local_278)
  ;
  plVar1 = local_278;
  plVar24 = plVar25;
  uVar26 = 0;
  if ((iVar12 != -0x7785fffe) &&
     (plVar24 = (longlong *)0x0, uVar26 = 0, local_278 != (longlong *)0x0)) {
    lVar29 = 2;
    puVar18 = (undefined8 *)(param_1 + 0x17df0);
    pwVar6 = local_188;
    do {
      pwVar21 = pwVar6;
      puVar19 = puVar18;
      uVar15 = puVar19[1];
      uVar2 = puVar19[2];
      uVar3 = puVar19[3];
      *(undefined8 *)pwVar21 = *puVar19;
      *(undefined8 *)(pwVar21 + 4) = uVar15;
      uVar15 = puVar19[4];
      uVar4 = puVar19[5];
      *(undefined8 *)(pwVar21 + 8) = uVar2;
      *(undefined8 *)(pwVar21 + 0xc) = uVar3;
      uVar2 = puVar19[6];
      uVar3 = puVar19[7];
      *(undefined8 *)(pwVar21 + 0x10) = uVar15;
      *(undefined8 *)(pwVar21 + 0x14) = uVar4;
      uVar15 = puVar19[8];
      uVar4 = puVar19[9];
      *(undefined8 *)(pwVar21 + 0x18) = uVar2;
      *(undefined8 *)(pwVar21 + 0x1c) = uVar3;
      uVar2 = puVar19[10];
      uVar3 = puVar19[0xb];
      *(undefined8 *)(pwVar21 + 0x20) = uVar15;
      *(undefined8 *)(pwVar21 + 0x24) = uVar4;
      uVar15 = puVar19[0xc];
      uVar4 = puVar19[0xd];
      *(undefined8 *)(pwVar21 + 0x28) = uVar2;
      *(undefined8 *)(pwVar21 + 0x2c) = uVar3;
      uVar2 = puVar19[0xe];
      uVar3 = puVar19[0xf];
      *(undefined8 *)(pwVar21 + 0x30) = uVar15;
      *(undefined8 *)(pwVar21 + 0x34) = uVar4;
      *(undefined8 *)(pwVar21 + 0x38) = uVar2;
      *(undefined8 *)(pwVar21 + 0x3c) = uVar3;
      lVar29 = lVar29 + -1;
      puVar18 = puVar19 + 0x10;
      pwVar6 = pwVar21 + 0x40;
    } while (lVar29 != 0);
    uVar15 = puVar19[0x11];
    uVar2 = puVar19[0x12];
    uVar3 = puVar19[0x13];
    *(undefined8 *)(pwVar21 + 0x40) = puVar19[0x10];
    *(undefined8 *)(pwVar21 + 0x44) = uVar15;
    uVar15 = puVar19[0x14];
    uVar4 = puVar19[0x15];
    lVar29 = *local_278;
    *(undefined8 *)(pwVar21 + 0x48) = uVar2;
    *(undefined8 *)(pwVar21 + 0x4c) = uVar3;
    *(undefined8 *)(pwVar21 + 0x50) = uVar15;
    *(undefined8 *)(pwVar21 + 0x54) = uVar4;
    (**(code **)(lVar29 + 8))();
    if (DAT_146ab6ae8 != local_188) {
      plVar24 = plVar25;
      if (local_188[0] != 0) {
        do {
          lVar23 = lVar23 + 1;
        } while (local_188[lVar23] != 0);
        plVar24 = (longlong *)(ulonglong)((int)lVar23 + 1);
      }
      DAT_146ab6af0 = 0;
      iVar12 = (int)plVar24;
      plVar22 = plVar25;
      if (DAT_146ab6af4 != iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_146ab6ae8,plVar24);
        plVar22 = (longlong *)(ulonglong)DAT_146ab6af0;
      }
      DAT_146ab6af0 = (int)plVar22 + iVar12;
      if (DAT_146ab6af4 < (int)DAT_146ab6af0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146ab6ae8);
      }
      if (iVar12 != 0) {
        _guard_xfg_dispatch_icall_nop(DAT_146ab6ae8,local_188,(longlong)iVar12 * 2);
      }
    }
    DAT_146ab62d8 = local_88;
    _DAT_146ab62d0 = local_84;
    _DAT_146ab62d4 = local_7c;
    FUN_14169e170(&local_268,&DAT_146ab6ae8);
    iVar12 = local_228;
    pvVar5 = local_230;
    DAT_146ab6b10._0_4_ = local_228;
    if ((local_228 == 0) && (DAT_146ab6b10._4_4_ == 0)) {
      DAT_146ab6b10._4_4_ = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_146ab6b08,local_228);
      _guard_xfg_dispatch_icall_nop(DAT_146ab6b08,pvVar5,(longlong)iVar12 * 2);
    }
    pvVar5 = (void *)CONCAT44(uStack_23c,local_240);
    iVar12 = (int)local_238;
    DAT_146ab6b00._0_4_ = iVar12;
    if ((iVar12 == 0) && (DAT_146ab6b00._4_4_ == 0)) {
      DAT_146ab6b00._4_4_ = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_146ab6af8,local_238 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(DAT_146ab6af8,pvVar5,(longlong)iVar12 * 2);
    }
    iVar12 = local_218;
    _Src = local_220;
    DAT_146ab6b20 = local_218;
    if ((local_218 == 0) && (DAT_146ab6b24 == 0)) {
      DAT_146ab6b24 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_146ab6b18,local_218);
      _guard_xfg_dispatch_icall_nop(DAT_146ab6b18,_Src,(longlong)iVar12 * 2);
    }
    if (local_220 != (undefined4 *)0x0) {
      FMemory::Free(local_220);
    }
    if (local_230 != (void *)0x0) {
      FMemory::Free();
    }
    if (CONCAT44(uStack_23c,local_240) != 0) {
      FMemory::Free();
    }
    if (CONCAT44(uStack_24c,local_250) != 0) {
      FMemory::Free();
    }
    if (CONCAT44(uStack_25c,local_260) != 0) {
      FMemory::Free();
    }
    DAT_1469fc510 = local_78;
    DAT_1469fc518 = local_70;
    DAT_1469fc520 = local_68;
    lVar23 = FUN_14169dad0();
    DAT_1469fc528 = 0;
    uVar27 = 8;
    if (*(uint *)(lVar23 + 0x38) < 9) {
      uVar27 = (ulonglong)*(uint *)(lVar23 + 0x38);
    }
    lVar29 = uVar27 * 0x10000000;
    lVar23 = lVar29;
    if (DAT_1469fc520 / 2 <= lVar29) {
      lVar23 = DAT_1469fc520 / 2;
    }
    cVar7 = IsRHIDeviceIntel();
    if (cVar7 == '\0') {
      DAT_1469fc528 = DAT_1469fc510;
      if (((DAT_1469fc510 < 0xc800000) && (DAT_1469fc528 = DAT_1469fc518, DAT_1469fc518 < 0xc800000)
          ) && (DAT_1469fc528 = lVar29, 0x18ffffff < DAT_1469fc520)) {
        DAT_1469fc528 = lVar23;
      }
    }
    else {
      DAT_1469fc528 = DAT_1469fc510 + DAT_1469fc518 + lVar23;
    }
    if (0 < DAT_146ab6310) {
      DAT_146ab6308 =
           (longlong)(float)(int)((float)DAT_146ab6310 * 9.536743e-09 * (float)DAT_1469fc528) <<
           0x14;
    }
    do {
      wVar10 = *(wint_t *)((longlong)local_188 + (longlong)plVar25);
      plVar24 = plVar1;
      if ((wVar10 == 0) && ((short)plVar25[0x289b3b74] == 0)) {
        uVar26 = 2;
        local_294 = 2;
        break;
      }
      if (wVar10 != *(wint_t *)(plVar25 + 0x289b3b74)) {
        wVar10 = towlower(wVar10);
        wVar11 = towlower(*(wint_t *)(plVar25 + 0x289b3b74));
        if (wVar10 != wVar11) goto LAB_141a31b9a;
      }
      plVar25 = (longlong *)((longlong)plVar25 + 2);
    } while( true );
  }
  goto LAB_141a31b9d;
LAB_141a31f2e:
  local_298 = '\0';
  goto LAB_141a31e70;
LAB_141a31b9a:
  uVar26 = 0;
LAB_141a31b9d:
  uVar15 = FCommandLine::Get();
  cVar7 = FParse::Param(uVar15,L"novendordevice");
  cVar8 = IsRHIDeviceIntel();
  if ((cVar8 == '\0') || (cVar7 != '\0')) {
    DAT_1469fcce0 = 0;
    _DAT_1469fcce8 = 0;
    _DAT_1469fccf0 = 0;
    _DAT_1469fccf8 = 0;
    _DAT_1469fcd00 = 0;
    DAT_1469fcd08 = 0;
    DAT_1469fcd10 = 0;
  }
  else {
    iVar12 = agsInit(param_1 + 0x26f0,0,&DAT_1469fcce8);
    if (iVar12 == 0) {
      DAT_1469fcce0 = *(undefined8 *)(param_1 + 0x26f0);
      if (0 < (int)DAT_1469fcd08) {
        uVar27 = DAT_1469fcd08 & 0xffffffff;
        piVar20 = (int *)(DAT_1469fcd10 + 0x10);
        do {
          if (((*(int *)(param_1 + 0x17ef0) == piVar20[-1]) &&
              (*(int *)(param_1 + 0x17ef4) == *piVar20)) && (piVar20[-2] == 1)) {
            bVar9 = 1;
          }
          else {
            bVar9 = 0;
          }
          DAT_146ab62dc = DAT_146ab62dc | bVar9;
          piVar20 = piVar20 + 0x1c;
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
      }
    }
    else {
      DAT_1469fcce0 = 0;
      _DAT_1469fcce8 = 0;
      _DAT_1469fccf0 = 0;
      _DAT_1469fccf8 = 0;
      _DAT_1469fcd00 = 0;
      DAT_1469fcd08 = 0;
      DAT_1469fcd10 = 0;
      *(undefined8 *)(param_1 + 0x26f0) = 0;
    }
  }
  local_284 = 0;
  cVar7 = IsRHIDeviceIntel();
  lVar23 = DAT_1469fcc88;
  if (cVar7 != '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar7 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar13 = GetCurrentThreadId(), DVar13 != DAT_1468c21c0)) {
      lVar29 = 4;
    }
    else {
      lVar29 = 0;
    }
    if (*(int *)(lVar23 + lVar29) != 0) {
      local_288 = uVar33 & 0xfffffffe;
      uVar33 = local_288;
    }
  }
  cVar7 = IsRHIDeviceIntel();
  if ((cVar7 == '\0') || (*(longlong *)(param_1 + 0x26f0) == 0)) {
LAB_141a3212a:
    plVar22 = (longlong *)(param_1 + 0x210);
    plVar25 = (longlong *)(param_1 + 0x200);
    plVar1 = (longlong *)*plVar25;
    *plVar25 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar1 = (longlong *)*plVar22;
    *plVar22 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    local_2a8 = &local_284;
    local_2c8 = param_1 + 0x26e8;
    local_2b8 = 7;
    local_2c0 = 1;
    local_2b0 = plVar22;
    local_2a0 = plVar25;
    iVar12 = _guard_xfg_dispatch_icall_nop(plVar24,local_294,0,uVar33);
    if (iVar12 < 0) {
      local_2c8 = 0;
      FUN_141a447e0(iVar12,
                    "D3D11CreateDevice( Adapter, DriverType, NULL, DeviceFlags, &FeatureLevel, 1, D3D11_SDK_VERSION, Direct3DDevice.GetInitReference(), &ActualFeatureLevel, Direct3DDeviceIMContext.GetInitReference() )"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                    ,0x5bc);
    }
  }
  else {
    local_248 = param_1 + 0x26e8;
    lVar23 = 0;
    local_258 = 0;
    local_240 = 1;
    uStack_23c = 7;
    local_238 = 0;
    local_268 = plVar24;
    local_260 = uVar26;
    local_250 = uVar33;
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar25 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderDevelopmentMode");
    lVar29 = lVar23;
    if (plVar25 != (longlong *)0x0) {
      lVar29 = (**(code **)(*plVar25 + 0x38))(plVar25);
    }
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar25 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))
                        (DAT_1468b1f88,L"r.DisableEngineAndAppRegistration");
    lVar16 = lVar23;
    if (plVar25 != (longlong *)0x0) {
      lVar16 = (**(code **)(*plVar25 + 0x38))(plVar25);
    }
    if (lVar29 == 0) {
LAB_141a31e25:
      if (lVar16 != 0) {
        cVar7 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
          DVar13 = GetCurrentThreadId();
          lVar29 = 4;
          if (DVar13 == DAT_1468c21c0) goto LAB_141a31e5d;
        }
        else {
LAB_141a31e5d:
          lVar29 = lVar23;
        }
        if (*(int *)(lVar16 + lVar29) != 0) goto LAB_141a31e66;
      }
      local_297 = '\0';
      if (DAT_146299580 != 0) {
        do {
          wVar10 = *(wint_t *)((longlong)&DAT_146299580 + lVar23);
          if ((wVar10 == 0) && (*(short *)((longlong)&DAT_143f3edc8 + lVar23) == 0)) break;
          if (wVar10 != *(wint_t *)((longlong)&DAT_143f3edc8 + lVar23)) {
            wVar10 = towlower(wVar10);
            wVar11 = towlower(*(wint_t *)((longlong)&DAT_143f3edc8 + lVar23));
            if (wVar10 != wVar11) goto LAB_141a31f2e;
          }
          lVar23 = lVar23 + 2;
        } while( true );
      }
    }
    else {
      cVar7 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar13 = GetCurrentThreadId();
        lVar17 = 4;
        if (DVar13 == DAT_1468c21c0) goto LAB_141a31e1c;
      }
      else {
LAB_141a31e1c:
        lVar17 = lVar23;
      }
      if (*(int *)(lVar29 + lVar17) == 0) goto LAB_141a31e25;
LAB_141a31e66:
      local_297 = '\x01';
    }
    local_298 = '\x01';
LAB_141a31e70:
    local_1ec = 7;
    uVar15 = FEngineVersion::Current();
    puVar18 = (undefined8 *)FEngineVersion::ToString(uVar15,&local_58,1);
    puVar19 = (undefined8 *)FApp::GetEpicProductIdentifier(local_1e0);
    iVar12 = *(int *)(puVar19 + 1);
    if (iVar12 < 2) {
      puVar34 = (undefined2 *)*puVar18;
      *puVar18 = 0;
      iVar30 = *(int *)(puVar18 + 1);
      puVar18[1] = 0;
    }
    else {
      iVar31 = *(int *)(puVar18 + 1) + -1;
      if (*(int *)(puVar18 + 1) == 0) {
        iVar31 = 0;
      }
      if ((iVar12 != 0) || (iVar30 = 1, iVar31 == 0)) {
        iVar30 = 0;
      }
      local_1a0 = (undefined2 *)*puVar19;
      *puVar19 = 0;
      iVar28 = *(int *)((longlong)puVar19 + 0xc);
      local_198 = CONCAT44(iVar28,iVar12);
      puVar19[1] = 0;
      if (iVar28 < iVar12 + iVar30 + iVar31) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1a0);
        iVar12 = (int)local_198;
        iVar28 = local_198._4_4_;
      }
      local_290 = (longlong *)*puVar18;
      puVar34 = local_1a0;
      iVar30 = iVar12;
      if (iVar31 != 0) {
        iVar30 = (uint)(iVar12 == 0) + iVar31 + iVar12;
        local_198 = CONCAT44(local_198._4_4_,iVar30);
        if (iVar28 < iVar30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,iVar12);
          iVar30 = (int)local_198;
        }
        puVar34 = local_1a0;
        _Dst = local_1a0 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0));
        _guard_xfg_dispatch_icall_nop(_Dst,local_290,(longlong)iVar31 * 2);
        _Dst[iVar31] = 0;
      }
    }
    if (local_1e0[0] != 0) {
      FMemory::Free();
    }
    if (local_58._0_8_ != 0) {
      FMemory::Free();
    }
    if (local_297 == '\0') {
      local_200 = &DAT_143f3eda8;
      if (iVar30 != 0) {
        local_200 = puVar34;
      }
    }
    else {
      local_200 = (undefined2 *)&DAT_144d92d5c;
    }
    local_208 = (undefined2 *)&DAT_144d92dc4;
    local_1f4 = 0xffffad00;
    if (local_298 == '\0') {
      local_208 = &DAT_146299580;
    }
    local_1f8 = 0xffffad00;
    iVar12 = agsDriverExtensionsDX11_CreateDevice
                       (*(undefined8 *)(param_1 + 0x26f0),&local_268,&local_208,&local_1d0);
    if (iVar12 != 0) {
      agsDeInit(*(undefined8 *)(param_1 + 0x26f0));
      *(undefined8 *)(param_1 + 0x26f0) = 0;
      DAT_1469fcce0 = 0;
      _DAT_1469fcce8 = 0;
      _DAT_1469fccf0 = 0;
      _DAT_1469fccf8 = 0;
      _DAT_1469fcd00 = 0;
      DAT_1469fcd08 = 0;
      DAT_1469fcd10 = 0;
      DAT_146ab62dc = 0;
    }
    else {
      TRefCountPtr<ID3D11Device>::operator=(param_1 + 0x210,local_1d0);
      local_284 = local_1b8;
      TRefCountPtr<ID3D11Device>::operator=(param_1 + 0x200,local_1c8);
    }
    if (puVar34 != (undefined2 *)0x0) {
      FMemory::Free(puVar34);
    }
    uVar33 = local_288;
    if (iVar12 != 0) goto LAB_141a3212a;
  }
  plVar25 = (longlong *)(param_1 + 0x210);
  (**(code **)(*(longlong *)(param_1 + 0x218) + 8))
            (param_1 + 0x218,*(undefined8 *)(param_1 + 0x200));
  *(undefined1 *)(param_1 + 0x26c8) = 0;
  local_270 = 0;
  iVar12 = (**(code **)(*(longlong *)*plVar25 + 0x108))((longlong *)*plVar25,0,&local_270,8);
  if (iVar12 < 0) {
    local_2c8 = *plVar25;
    FUN_141a447e0(iVar12,
                  "Direct3DDevice->CheckFeatureSupport(D3D11_FEATURE_THREADING, &ThreadingSupport, sizeof(ThreadingSupport))"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                  ,0x5cb);
  }
  if (((int)local_270 == 0) || ((uVar33 & 1) != 0)) {
    DAT_146ab62e4 = 0;
  }
  else {
    DAT_146ab62e4 = 1;
  }
  _DAT_1464c9c48 = 0xe00000007;
  _DAT_1464c9c50 = 5;
  cVar7 = IsRHIDeviceIntel();
  lVar23 = DAT_1469fcca0;
  if (cVar7 != '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar13 = GetCurrentThreadId();
      lVar29 = 4;
      if (DVar13 == DAT_1468c21c0) goto LAB_141a32289;
    }
    else {
LAB_141a32289:
      lVar29 = 0;
    }
    if (*(int *)(lVar23 + lVar29) != 0) {
      DAT_146ab62e4 = 0;
    }
  }
  cVar7 = IsRHIDeviceIntel();
  lVar23 = DAT_1469fccb8;
  if (cVar7 != '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar7 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar13 = GetCurrentThreadId(), lVar29 = 4, DVar13 == DAT_1468c21c0)) {
      lVar29 = 0;
    }
    if (*(int *)(lVar23 + lVar29) != 0) {
      local_298 = '\0';
      iVar12 = FUN_14004d100(*plVar25,1,&local_298);
      if ((iVar12 == 0) && (local_298 == '\0')) {
        DAT_146ab62df = 0;
      }
    }
  }
  if ((DAT_1469fc509 == '\0') || (cVar7 = IsRHIDeviceIntel(), cVar7 == '\0')) {
    DAT_1469fc508 = 0;
  }
  else {
    uVar15 = FCommandLine::Get();
    cVar7 = FParse::Param(uVar15,L"gpucrashdebugging");
    if (cVar7 == '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_1469fce38) &&
         (_Init_thread_header(&DAT_1469fce38), DAT_1469fce38 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        DAT_1469fce30 =
             (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.GPUCrashDebugging");
        _Init_thread_footer(&DAT_1469fce38);
      }
      if (DAT_1469fce30 != (longlong *)0x0) {
        iVar12 = (**(code **)(*DAT_1469fce30 + 0x68))();
        DAT_1469fc508 = iVar12 != 0;
      }
    }
    else {
      DAT_1469fc508 = 1;
    }
  }
  local_1a0 = (undefined2 *)0x0;
  local_198 = CONCAT44(DAT_1464c9c64,DAT_1464c9c64);
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x168))
            (*(longlong **)(param_1 + 0x200),1,&local_1a0);
  *(undefined8 *)(param_1 + 0x26f8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2700) = 0;
  *(undefined4 *)(param_1 + 0x2704) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2708) = 0;
  *(undefined8 *)(param_1 + 0x270c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2714) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2718) = 0;
  HVar14 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&local_58);
  if ((-1 < HVar14) &&
     (iVar12 = (*(code *)**(undefined8 **)*plVar25)((undefined8 *)*plVar25,&local_58,&local_290),
     -1 < iVar12)) {
    (**(code **)(*DAT_146ab6358 + 0x6e0))(DAT_146ab6358,1);
  }
  puVar18 = (undefined8 *)FRenderResource::GetResourceList();
  for (puVar18 = (undefined8 *)*puVar18; puVar18 != (undefined8 *)0x0;
      puVar18 = (undefined8 *)*puVar18) {
    (**(code **)(*(longlong *)puVar18[2] + 0x18))();
  }
  puVar18 = (undefined8 *)FRenderResource::GetResourceList();
  for (puVar18 = (undefined8 *)*puVar18; puVar18 != (undefined8 *)0x0;
      puVar18 = (undefined8 *)*puVar18) {
    (**(code **)(*(longlong *)puVar18[2] + 8))();
  }
  if ((uVar33 & 2) != 0) {
    local_290 = (longlong *)0x0;
    iVar12 = (*(code *)**(undefined8 **)*plVar25)((undefined8 *)*plVar25,&DAT_145ac6350,&local_290);
    if (iVar12 < 0) {
      local_2c8 = *plVar25;
      FUN_141a447e0(iVar12,
                    "Direct3DDevice->QueryInterface( IID_ID3D11InfoQueue, (void**)InfoQueue.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                    ,0x622);
    }
    plVar25 = local_290;
    if (local_290 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(&local_268,0,0x60);
      local_220 = &local_294;
      local_210 = &local_58;
      local_294 = 3;
      local_228 = 1;
      local_58.Data1 = 0x184;
      local_58.Data2 = 0x198;
      local_58.Data3 = 0;
      local_58.Data4[0] = 0x9a;
      local_58.Data4[1] = '\x01';
      local_58.Data4[2] = '\0';
      local_58.Data4[3] = '\0';
      local_58.Data4[4] = 0xa4;
      local_58.Data4[5] = '\x01';
      local_58.Data4[6] = '\0';
      local_58.Data4[7] = '\0';
      local_48 = 0x167;
      local_44 = 0x300161;
      local_40 = 0x37;
      local_218 = 7;
      (**(code **)(*plVar25 + 0x88))(plVar25,&local_268);
      (**(code **)(*local_290 + 0xf8))(local_290,1,1);
      uVar15 = FCommandLine::Get();
      cVar7 = FParse::Param(uVar15,L"d3dbreakonwarning");
      if (cVar7 != '\0') {
        (**(code **)(*local_290 + 0xf8))(local_290,2,1);
      }
      if (local_290 != (longlong *)0x0) {
        (**(code **)(*local_290 + 0x10))();
      }
    }
  }
  cVar7 = FWindowsPlatformMisc::VerifyWindowsVersion(10,0,0x3ad7);
  if ((cVar7 != '\0') && (DAT_146ab632a = FUN_141a43a40(param_1), DAT_146ab632a != '\0')) {
    DAT_1464c9c38 = 0x12;
    DAT_1469fc50a = 1;
  }
  local_1a0 = (undefined2 *)0x0;
  local_198 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
  FGenericPlatformString::Memcpy(local_1a0,L"D3D11",0xc);
  FHardwareInfo::RegisterHardwareInfo(DAT_1469fcc00,&local_1a0);
  if (local_1a0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  DAT_146ab62fe = 1;
  DAT_146ab6324 = 1;
  DAT_146ab62f5 = 1;
  DAT_146ab62c8 = 1;
  if (local_278 != (longlong *)0x0) {
    (**(code **)(*local_278 + 0x10))();
  }
  if (plVar24 != (longlong *)0x0) {
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
LAB_141a32694:
  FUN_141edd460(local_280);
  return;
}



// FUNCTION 141a32720 FUN_141a32720 body=875 status=ok
// SIG undefined FUN_141a32720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a32720(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong *local_78;
  LARGE_INTEGER local_70;
  undefined8 local_68;
  longlong local_60 [2];
  ulonglong local_50;
  ulonglong uVar11;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar11 = 0;
  if (DAT_146ab6338 == '\0') {
    DAT_146ab6340 = 0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x200);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x210);
    local_68 = 3;
    local_78 = (longlong *)0x0;
    iVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2,&local_68,&local_78);
    if (iVar6 == 0) {
      (**(code **)(*plVar1 + 0xd8))(plVar1,local_78);
      (**(code **)(*plVar1 + 0xe0))(plVar1,local_78);
      local_88 = 0;
      iVar6 = (**(code **)(*plVar1 + 0xe8))(plVar1,local_78,local_60,0x10);
      QueryPerformanceCounter(&local_70);
      dVar5 = (double)local_70.QuadPart * DAT_1468b02f8;
      while ((iVar6 == 1 &&
             (QueryPerformanceCounter(&local_70),
             (double)local_70.QuadPart * DAT_1468b02f8 - dVar5 < 0.5))) {
        FUN_1416b1760(0x3ba3d70a);
        local_88 = 0;
        iVar6 = (**(code **)(*plVar1 + 0xe8))(plVar1,local_78,local_60,0x10);
      }
      if (iVar6 == 0) {
        DAT_146ab6340 = local_60[0];
      }
    }
    plVar1 = local_78;
    local_78 = (longlong *)0x0;
    if ((plVar1 != (longlong *)0x0) &&
       ((**(code **)(*plVar1 + 0x10))(), local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
    }
    DAT_146ab6339 = DAT_146ab6340 != 0;
    DAT_146ab6338 = '\x01';
  }
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (DAT_146ab6339 != '\0') {
    uVar12 = (ulonglong)*(int *)(param_1 + 0x48);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar12;
    uVar7 = SUB168(ZEXT816(8) * auVar3,0);
    if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar8 = uVar7 + 8;
    if (0xfffffffffffffff7 < uVar7) {
      lVar8 = -1;
    }
    puVar9 = (ulonglong *)operator_new(lVar8);
    if (puVar9 == (ulonglong *)0x0) {
      puVar9 = (ulonglong *)0x0;
    }
    else {
      *puVar9 = uVar12;
      puVar9 = puVar9 + 1;
      puVar14 = puVar9;
      if (uVar12 != 0) {
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
      }
    }
    uVar12 = (ulonglong)*(int *)(param_1 + 0x48);
    *(ulonglong **)(param_1 + 0x58) = puVar9;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar12;
    uVar7 = SUB168(ZEXT816(8) * auVar4,0);
    if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar8 = uVar7 + 8;
    if (0xfffffffffffffff7 < uVar7) {
      lVar8 = -1;
    }
    puVar9 = (ulonglong *)operator_new(lVar8);
    if (puVar9 == (ulonglong *)0x0) {
      puVar9 = (ulonglong *)0x0;
    }
    else {
      *puVar9 = uVar12;
      puVar9 = puVar9 + 1;
      puVar14 = puVar9;
      if (uVar12 != 0) {
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
      }
    }
    *(ulonglong **)(param_1 + 0x60) = puVar9;
    uVar7 = uVar11;
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        plVar13 = (longlong *)(*(longlong *)(param_1 + 0x58) + uVar7);
        local_78 = (longlong *)0x2;
        plVar1 = (longlong *)*plVar13;
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x210);
        *plVar13 = 0;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
        }
        iVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2,&local_78,plVar13);
        if ((DAT_146ab6339 == '\0') || (iVar6 != 0)) {
          DAT_146ab6339 = '\0';
        }
        else {
          DAT_146ab6339 = '\x01';
        }
        plVar13 = (longlong *)(*(longlong *)(param_1 + 0x60) + uVar7);
        plVar1 = (longlong *)*plVar13;
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x210);
        *plVar13 = 0;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
        }
        iVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2,&local_78,plVar13);
        if ((DAT_146ab6339 == '\0') || (iVar6 != 0)) {
          DAT_146ab6339 = '\0';
        }
        else {
          DAT_146ab6339 = '\x01';
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        uVar7 = uVar7 + 8;
      } while ((int)uVar10 < *(int *)(param_1 + 0x48));
    }
  }
  return;
}



// FUNCTION 141a32a90 InitDynamicRHI body=45 status=ok
// SIG undefined InitDynamicRHI(void)

void FD3D11ConstantBuffer::InitDynamicRHI(longlong param_1)

{
  void *_Dst;
  
  _Dst = (void *)FMemory::Malloc(*(undefined4 *)(param_1 + 0x48));
  *(void **)(param_1 + 0x50) = _Dst;
  ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)*(uint *)(param_1 + 0x48));
  return;
}



// FUNCTION 141a32ac0 FUN_141a32ac0 body=143 status=ok
// SIG undefined FUN_141a32ac0(void)

void FUN_141a32ac0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_res8;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  local_res8 = 3;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x210);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  iVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,&local_res8,param_1 + 0x30);
  if (iVar3 < 0) {
    FUN_141a447e0(iVar3,
                  "D3DRHI->GetDevice()->CreateQuery(&QueryDesc, DisjointQuery.GetInitReference())",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                  ,599,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x210));
  }
  return;
}



// FUNCTION 141a32b50 FUN_141a32b50 body=163 status=ok
// SIG undefined FUN_141a32b50(void)

void FUN_141a32b50(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_res8;
  
  local_res8 = 0;
  plVar1 = *(longlong **)(param_1 + 0x38);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x210);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  iVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,&local_res8,param_1 + 0x38);
  if (iVar3 < 0) {
    FUN_141a447e0(iVar3,"D3DRHI->GetDevice()->CreateQuery(&QueryDesc,Query.GetInitReference())",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                  ,0xb1,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x210));
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x200);
  (**(code **)(*plVar1 + 0xe0))(plVar1,*(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 141a32c00 FUN_141a32c00 body=395 status=ok
// SIG undefined FUN_141a32c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a32c00(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  void *_Dst;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint local_58 [6];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58[0] = *(uint *)(param_1 + 0x48);
  uVar9 = 0;
  uVar8 = CONCAT44(0,*(uint *)(param_1 + 0x6c));
  local_58[4] = 0;
  local_58[5] = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar8;
  uVar5 = SUB168(ZEXT816(8) * auVar3,0);
  local_58[1] = 0;
  local_58[2] = 4;
  local_58[3] = 0;
  if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  lVar6 = uVar5 + 8;
  if (0xfffffffffffffff7 < uVar5) {
    lVar6 = -1;
  }
  puVar7 = (ulonglong *)operator_new(lVar6);
  if (puVar7 == (ulonglong *)0x0) {
    puVar7 = (ulonglong *)0x0;
  }
  else {
    *puVar7 = uVar8;
    puVar7 = puVar7 + 1;
    puVar11 = puVar7;
    if (uVar8 != 0) {
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
    }
  }
  *(ulonglong **)(param_1 + 0x60) = puVar7;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x210);
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x60) + uVar9 * 8);
      plVar2 = (longlong *)*plVar12;
      *plVar12 = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      iVar4 = (**(code **)(*plVar1 + 0x18))(plVar1,local_58,0,plVar12);
      if (iVar4 < 0) {
        local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x210);
        FUN_141a447e0(iVar4,
                      "D3DRHI->GetDevice()->CreateBuffer(&BufferDesc, NULL, Buffers[s].GetInitReference())"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11ConstantBuffer.cpp"
                      ,0x1c);
      }
      plVar1 = *(longlong **)(uVar9 * 8 + *(longlong *)(param_1 + 0x60));
      (**(code **)(*plVar1 + 0x50))(plVar1,local_40);
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
      local_58[0] = (local_58[0] >> 1) + 0xf & 0xfffffff0;
    } while (uVar10 < *(uint *)(param_1 + 0x6c));
  }
  _Dst = (void *)FMemory::Malloc(*(undefined4 *)(param_1 + 0x48));
  *(void **)(param_1 + 0x50) = _Dst;
  _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)*(uint *)(param_1 + 0x48));
  return;
}



// FUNCTION 141a32d90 FUN_141a32d90 body=334 status=ok
// SIG undefined FUN_141a32d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a32d90(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_1 + 0x88);
  local_30 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  local_3c = 2;
  local_34 = 0x10000;
  if (iVar2 < *(int *)(param_1 + 0x50)) {
    do {
      local_48 = (longlong *)0x0;
      local_40 = *(undefined4 *)(param_1 + 0x40 + (longlong)iVar2 * 4);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x210);
      iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,0,&local_48);
      if (iVar2 < 0) {
        local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x210);
        FUN_141a447e0(iVar2,
                      "D3DRHI->GetDevice()->CreateBuffer(&Desc,NULL,Buffer.GetInitReference())",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Util.cpp"
                      ,0x1be);
      }
      (**(code **)(*local_48 + 0x50))(local_48,local_28);
      iVar2 = *(int *)(param_1 + 0x78);
      *(int *)(param_1 + 0x78) = iVar2 + 1;
      if (*(int *)(param_1 + 0x7c) < iVar2 + 1) {
        FUN_141a42ad0(param_1 + 0x58,iVar2);
      }
      *(longlong **)(param_1 + 0x58 + (longlong)iVar2 * 8) = local_48;
      if ((local_48 != (longlong *)0x0) &&
         ((**(code **)(*local_48 + 8))(), local_48 != (longlong *)0x0)) {
        (**(code **)(*local_48 + 0x10))();
      }
      iVar2 = *(int *)(param_1 + 0x78);
    } while (iVar2 < *(int *)(param_1 + 0x50));
  }
  return;
}



// FUNCTION 141a32ee0 FUN_141a32ee0 body=80 status=ok
// SIG undefined FUN_141a32ee0(void)

undefined8 * FUN_141a32ee0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x148);
  if (puVar1 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar1 + 0xc),0,0x13c);
    *puVar1 = &PTR_FUN_144da0b98;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a32f50 IsValid body=40 status=ok
// SIG undefined IsValid(void)

ulonglong FResolveRect::IsValid(int *param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if (((-1 < *param_1) && (-1 < param_1[1])) &&
     (uVar1 = param_1[2] - *param_1, in_RAX = (ulonglong)uVar1, 0 < (int)uVar1)) {
    uVar1 = param_1[3] - param_1[1];
    in_RAX = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141a32f80 FUN_141a32f80 body=804 status=ok
// SIG undefined FUN_141a32f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141a32f80(longlong param_1,undefined4 param_2,int param_3,int *param_4,
                      longlong *param_5)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  uint local_b8 [2];
  longlong *local_b0;
  longlong **local_a8;
  uint local_a0;
  longlong local_98;
  int local_90;
  int local_8c;
  longlong *local_88;
  int local_80;
  int local_7c;
  longlong local_78;
  undefined1 local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_b0 = param_5;
  lVar6 = (longlong)*(int *)(param_1 + 0x3c);
  local_88 = (longlong *)0x0;
  local_70 = 0;
  uVar8 = (&DAT_1464ca1b8)[lVar6 * 10];
  uVar4 = (&DAT_1464ca1bc)[lVar6 * 10];
  iVar5 = (&DAT_1464ca1c4)[lVar6 * 10];
  bVar7 = (byte)param_2;
  uVar2 = *(uint *)(param_1 + 0x60) >> (bVar7 & 0x1f);
  local_a0 = uVar8;
  if (uVar8 <= uVar2) {
    local_a0 = uVar2;
  }
  uVar2 = *(uint *)(param_1 + 100) >> (bVar7 & 0x1f);
  local_b8[0] = uVar4;
  if (uVar4 <= uVar2) {
    local_b8[0] = uVar2;
  }
  uVar3 = *(uint *)(param_1 + 0x68) >> (bVar7 & 0x1f);
  uVar2 = 1;
  if (uVar3 != 0) {
    uVar2 = uVar3;
  }
  uVar8 = ((uVar8 - 1) + local_a0) / uVar8;
  uVar4 = ((uVar4 - 1) + local_b8[0]) / uVar4;
  if (param_3 == 1) {
    local_78 = FMemory::Malloc(uVar4 * uVar8 * uVar2 * iVar5,0x10);
    local_80 = uVar8 * iVar5;
    local_70 = 1;
    *param_4 = local_80;
    local_7c = local_80 * uVar4;
    *(int *)local_b0 = local_7c;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x50))(*(longlong **)(param_1 + 0xa8),&local_68);
    local_68 = local_a0;
    local_64 = local_b8[0];
    local_5c = 1;
    local_54 = 3;
    local_4c = 0x20000;
    local_b0 = (longlong *)0x0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x210);
    local_60 = uVar2;
    iVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_68,0,&local_b0);
    if (iVar5 < 0) {
      local_c8 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x210);
      local_d0 = 0;
      local_d8 = CONCAT44(local_d8._4_4_,1);
      local_e0 = CONCAT31(local_e0._1_3_,local_58);
      local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(param_1 + 0x68));
      local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,*(undefined4 *)(param_1 + 100));
      local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(param_1 + 0x60));
      FUN_141a444e0(iVar5,
                    "D3DRHI->GetDevice()->CreateTexture3D(&StagingTextureDesc,NULL,StagingTexture.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                    ,0x134);
    }
    plVar1 = local_88;
    local_88 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 8))(local_b0);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,local_b0);
    }
    local_d8 = 0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x200);
    local_e8 = *(undefined8 *)(param_1 + 0xa8);
    local_f0 = (undefined8 *)((ulonglong)local_f0 & 0xffffffff00000000);
    local_f8 = local_f8 & 0xffffffff00000000;
    local_e0 = param_2;
    (**(code **)(*plVar1 + 0x170))(plVar1,local_b0,0,0);
    local_f0 = &local_98;
    local_f8 = local_f8 & 0xffffffff00000000;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x200);
    iVar5 = (**(code **)(*plVar1 + 0x70))(plVar1,local_b0,0,1);
    if (iVar5 < 0) {
      local_f8 = *(ulonglong *)(*(longlong *)(param_1 + 0x88) + 0x210);
      FUN_141a447e0(iVar5,
                    "D3DRHI->GetDeviceContext()->Map(StagingTexture,0,D3D11_MAP_READ,0,&MappedTexture)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                    ,0x13c);
    }
    local_78 = local_98;
    *param_4 = local_90;
    local_80 = local_90;
    local_7c = local_8c;
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  local_98 = *(longlong *)(param_1 + 0xa8);
  local_b0 = &local_98;
  local_a8 = &local_88;
  local_90 = param_2;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FD3D11LockedKey_&&,FD3D11LockedData_const_&>_>
            (*(longlong *)(param_1 + 0x88) + 0x1a0,local_b8,&local_b0,0);
  lVar6 = local_78;
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  return lVar6;
}



// FUNCTION 141a332b0 FUN_141a332b0 body=744 status=ok
// SIG undefined FUN_141a332b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141a332b0(longlong param_1,int param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined8 *local_f0;
  ulonglong local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong *local_b8;
  undefined8 local_b0;
  int local_a8;
  longlong *local_a0;
  int local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 *local_80;
  longlong **local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_54;
  undefined8 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar8 = (longlong)*(int *)(param_1 + 0x3c);
  local_a0 = (longlong *)0x0;
  local_88 = 0;
  uVar9 = (&DAT_1464ca1b8)[lVar8 * 10];
  uVar1 = (&DAT_1464ca1bc)[lVar8 * 10];
  iVar7 = (&DAT_1464ca1c4)[lVar8 * 10];
  iVar10 = *(int *)(param_1 + 0x34) * param_3 + param_2;
  uVar5 = *(uint *)(param_1 + 0x60) >> ((byte)param_2 & 0x1f);
  uVar3 = uVar9;
  if (uVar9 <= uVar5) {
    uVar3 = uVar5;
  }
  uVar6 = *(uint *)(param_1 + 100) >> ((byte)param_2 & 0x1f);
  uVar5 = uVar1;
  if (uVar1 <= uVar6) {
    uVar5 = uVar6;
  }
  uVar9 = ((uVar9 - 1) + uVar3) / uVar9;
  if (param_4 == 1) {
    local_90 = FMemory::Malloc((((uVar1 - 1) + uVar5) / uVar1) * uVar9 * iVar7,0x10);
    local_98 = uVar9 * iVar7;
    local_88 = 1;
    *param_5 = local_98;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x50))(*(longlong **)(param_1 + 0xa0),&local_70);
    local_68 = 1;
    local_64 = 1;
    local_54 = 3;
    local_4c = 0x20000;
    local_b8 = (longlong *)0x0;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x210);
    local_70 = uVar3;
    local_6c = uVar5;
    iVar7 = (**(code **)(*plVar2 + 0x28))(plVar2,&local_70,0,&local_b8);
    if (iVar7 < 0) {
      local_c8 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x210);
      local_d0 = 0;
      local_d8 = CONCAT44(local_d8._4_4_,1);
      local_e0 = CONCAT31(local_e0._1_3_,local_60);
      local_e8 = local_e8 & 0xffffffff00000000;
      local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,*(undefined4 *)(param_1 + 100));
      local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(param_1 + 0x60));
      FUN_141a444e0(iVar7,
                    "D3DRHI->GetDevice()->CreateTexture2D(&StagingTextureDesc,NULL,StagingTexture.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                    ,0x743);
    }
    plVar2 = local_a0;
    local_a0 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 8))(local_b8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,local_b8);
    }
    local_d8 = 0;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x200);
    local_e8 = *(ulonglong *)(param_1 + 0xa0);
    local_f0 = (undefined8 *)((ulonglong)local_f0 & 0xffffffff00000000);
    local_f8 = local_f8 & 0xffffffff00000000;
    local_e0 = iVar10;
    (**(code **)(*plVar2 + 0x170))(plVar2,local_b8,0,0);
    local_f0 = &local_b0;
    local_f8 = local_f8 & 0xffffffff00000000;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x200);
    iVar7 = (**(code **)(*plVar2 + 0x70))(plVar2,local_b8,0,1);
    if (iVar7 < 0) {
      local_f8 = *(ulonglong *)(*(longlong *)(param_1 + 0x80) + 0x210);
      FUN_141a447e0(iVar7,
                    "D3DRHI->GetDeviceContext()->Map(StagingTexture,0,D3D11_MAP_READ,0,&MappedTexture)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                    ,0x74b);
    }
    local_90 = local_b0;
    *param_5 = local_a8;
    local_98 = local_a8;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  local_b0 = *(undefined8 *)(param_1 + 0xa0);
  local_80 = &local_b0;
  local_78 = &local_a0;
  local_a8 = iVar10;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FD3D11LockedKey_&&,FD3D11LockedData_const_&>_>
            (*(longlong *)(param_1 + 0x80) + 0x1a0,&local_b8,&local_80,0);
  uVar4 = local_90;
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x10))();
  }
  return uVar4;
}



// FUNCTION 141a335a0 FUN_141a335a0 body=751 status=ok
// SIG undefined FUN_141a335a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141a335a0(longlong param_1,int param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong *local_b8;
  undefined8 local_b0;
  int local_a8;
  longlong *local_a0;
  int local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 *local_80;
  longlong **local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_54;
  undefined8 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar8 = (longlong)*(int *)(param_1 + 0x3c);
  local_a0 = (longlong *)0x0;
  local_88 = 0;
  uVar9 = (&DAT_1464ca1b8)[lVar8 * 10];
  uVar1 = (&DAT_1464ca1bc)[lVar8 * 10];
  iVar7 = (&DAT_1464ca1c4)[lVar8 * 10];
  iVar10 = *(int *)(param_1 + 0x34) * param_3 + param_2;
  uVar5 = *(uint *)(param_1 + 0x60) >> ((byte)param_2 & 0x1f);
  uVar3 = uVar9;
  if (uVar9 <= uVar5) {
    uVar3 = uVar5;
  }
  uVar6 = *(uint *)(param_1 + 100) >> ((byte)param_2 & 0x1f);
  uVar5 = uVar1;
  if (uVar1 <= uVar6) {
    uVar5 = uVar6;
  }
  uVar9 = ((uVar9 - 1) + uVar3) / uVar9;
  if (param_4 == 1) {
    local_90 = FMemory::Malloc((((uVar1 - 1) + uVar5) / uVar1) * uVar9 * iVar7,0x10);
    local_98 = uVar9 * iVar7;
    local_88 = 1;
    *param_5 = local_98;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x50))(*(longlong **)(param_1 + 0xa8),&local_70);
    local_68 = 1;
    local_64 = 1;
    local_54 = 3;
    local_4c = 0x20000;
    local_b8 = (longlong *)0x0;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x210);
    local_70 = uVar3;
    local_6c = uVar5;
    iVar7 = (**(code **)(*plVar2 + 0x28))(plVar2,&local_70,0,&local_b8);
    if (iVar7 < 0) {
      local_c8 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x210);
      local_d0 = 0;
      local_d8 = CONCAT44(local_d8._4_4_,1);
      local_e0 = CONCAT31(local_e0._1_3_,local_60);
      local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(param_1 + 0x68));
      local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,*(undefined4 *)(param_1 + 100));
      local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(param_1 + 0x60));
      FUN_141a444e0(iVar7,
                    "D3DRHI->GetDevice()->CreateTexture2D(&StagingTextureDesc,NULL,StagingTexture.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                    ,0x743);
    }
    plVar2 = local_a0;
    local_a0 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 8))(local_b8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,local_b8);
    }
    local_d8 = 0;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x200);
    local_e8 = *(undefined8 *)(param_1 + 0xa8);
    local_f0 = (undefined8 *)((ulonglong)local_f0 & 0xffffffff00000000);
    local_f8 = local_f8 & 0xffffffff00000000;
    local_e0 = iVar10;
    (**(code **)(*plVar2 + 0x170))(plVar2,local_b8,0,0);
    local_f0 = &local_b0;
    local_f8 = local_f8 & 0xffffffff00000000;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x200);
    iVar7 = (**(code **)(*plVar2 + 0x70))(plVar2,local_b8,0,1);
    if (iVar7 < 0) {
      local_f8 = *(ulonglong *)(*(longlong *)(param_1 + 0x88) + 0x210);
      FUN_141a447e0(iVar7,
                    "D3DRHI->GetDeviceContext()->Map(StagingTexture,0,D3D11_MAP_READ,0,&MappedTexture)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                    ,0x74b);
    }
    local_90 = local_b0;
    *param_5 = local_a8;
    local_98 = local_a8;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  local_b0 = *(undefined8 *)(param_1 + 0xa8);
  local_80 = &local_b0;
  local_78 = &local_a0;
  local_a8 = iVar10;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FD3D11LockedKey_&&,FD3D11LockedData_const_&>_>
            (*(longlong *)(param_1 + 0x88) + 0x1a0,&local_b8,&local_80,0);
  uVar4 = local_90;
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x10))();
  }
  return uVar4;
}



// FUNCTION 141a33890 FUN_141a33890 body=743 status=ok
// SIG undefined FUN_141a33890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141a33890(longlong param_1,int param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined8 *local_f0;
  ulonglong local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong *local_b8;
  undefined8 local_b0;
  int local_a8;
  longlong *local_a0;
  int local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 *local_80;
  longlong **local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_54;
  undefined8 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar8 = (longlong)*(int *)(param_1 + 0x3c);
  local_a0 = (longlong *)0x0;
  local_88 = 0;
  iVar10 = *(int *)(param_1 + 0x34) * param_3 + param_2;
  uVar9 = (&DAT_1464ca1b8)[lVar8 * 10];
  uVar1 = (&DAT_1464ca1bc)[lVar8 * 10];
  iVar7 = (&DAT_1464ca1c4)[lVar8 * 10];
  uVar6 = *(uint *)(param_1 + 0x60) >> ((byte)param_2 & 0x1f);
  uVar3 = uVar9;
  if (uVar9 <= uVar6) {
    uVar3 = uVar6;
  }
  uVar4 = uVar1;
  if (uVar1 <= uVar6) {
    uVar4 = uVar6;
  }
  uVar9 = ((uVar9 - 1) + uVar3) / uVar9;
  if (param_4 == 1) {
    local_90 = FMemory::Malloc((((uVar1 - 1) + uVar4) / uVar1) * uVar9 * iVar7,0x10);
    local_98 = uVar9 * iVar7;
    local_88 = 1;
    *param_5 = local_98;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x50))(*(longlong **)(param_1 + 0xa0),&local_70);
    local_68 = 1;
    local_64 = 1;
    local_54 = 3;
    local_4c = 0x20000;
    local_b8 = (longlong *)0x0;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x210);
    local_70 = uVar3;
    local_6c = uVar4;
    iVar7 = (**(code **)(*plVar2 + 0x28))(plVar2,&local_70,0,&local_b8);
    if (iVar7 < 0) {
      local_c8 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x210);
      local_d0 = 0;
      local_d8 = CONCAT44(local_d8._4_4_,1);
      local_e0 = CONCAT31(local_e0._1_3_,local_60);
      local_e8 = local_e8 & 0xffffffff00000000;
      local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,*(undefined4 *)(param_1 + 0x60));
      local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(param_1 + 0x60));
      FUN_141a444e0(iVar7,
                    "D3DRHI->GetDevice()->CreateTexture2D(&StagingTextureDesc,NULL,StagingTexture.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                    ,0x743);
    }
    plVar2 = local_a0;
    local_a0 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 8))(local_b8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,local_b8);
    }
    local_d8 = 0;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x200);
    local_e8 = *(ulonglong *)(param_1 + 0xa0);
    local_f0 = (undefined8 *)((ulonglong)local_f0 & 0xffffffff00000000);
    local_f8 = local_f8 & 0xffffffff00000000;
    local_e0 = iVar10;
    (**(code **)(*plVar2 + 0x170))(plVar2,local_b8,0,0);
    local_f0 = &local_b0;
    local_f8 = local_f8 & 0xffffffff00000000;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x200);
    iVar7 = (**(code **)(*plVar2 + 0x70))(plVar2,local_b8,0,1);
    if (iVar7 < 0) {
      local_f8 = *(ulonglong *)(*(longlong *)(param_1 + 0x80) + 0x210);
      FUN_141a447e0(iVar7,
                    "D3DRHI->GetDeviceContext()->Map(StagingTexture,0,D3D11_MAP_READ,0,&MappedTexture)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                    ,0x74b);
    }
    local_90 = local_b0;
    *param_5 = local_a8;
    local_98 = local_a8;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  local_b0 = *(undefined8 *)(param_1 + 0xa0);
  local_80 = &local_b0;
  local_78 = &local_a0;
  local_a8 = iVar10;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FD3D11LockedKey_&&,FD3D11LockedData_const_&>_>
            (*(longlong *)(param_1 + 0x80) + 0x1a0,&local_b8,&local_80,0);
  uVar5 = local_90;
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x10))();
  }
  return uVar5;
}



// FUNCTION 141a33b80 FUN_141a33b80 body=512 status=ok
// SIG undefined FUN_141a33b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141a33b80(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 *local_80;
  longlong *local_78;
  undefined8 local_70 [2];
  uint local_60 [3];
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [24];
  ulonglong local_30;
  ulonglong uVar6;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar6 = 0;
  uVar5 = 0;
  if (0 < (int)uVar1) {
    puVar4 = (uint *)(param_1 + 0x40);
    uVar8 = uVar6;
    do {
      uVar5 = (uint)uVar6;
      if (param_2 <= *puVar4) break;
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar8 = uVar8 + 1;
      puVar4 = puVar4 + 1;
    } while ((longlong)uVar8 < (longlong)(int)uVar1);
  }
  if (uVar5 == uVar1) {
    local_60[2] = *(undefined4 *)(param_1 + 0x88);
    uVar5 = uVar5 - 1;
    local_50 = 0;
    local_60[1] = 2;
    local_54 = 0x10000;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x210);
    local_78 = (longlong *)0x0;
    local_60[0] = param_2;
    iVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,local_60,0,&local_78);
    if (iVar3 < 0) {
      local_88 = *(ulonglong *)(*(longlong *)(param_1 + 0x80) + 0x210);
      FUN_141a447e0(iVar3,"D3DRHI->GetDevice()->CreateBuffer(&Desc,NULL,Buffer.GetInitReference())",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Util.cpp"
                    ,0x1e3);
    }
    lVar7 = (longlong)(int)uVar5;
    plVar2 = *(longlong **)(param_1 + 0x58 + lVar7 * 8);
    (**(code **)(*plVar2 + 0x50))(plVar2,local_48);
    (**(code **)(*local_78 + 0x50))(local_78,local_48);
    plVar2 = *(longlong **)(param_1 + 0x58 + lVar7 * 8);
    *(longlong **)(param_1 + 0x58 + lVar7 * 8) = local_78;
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    *(uint *)(param_1 + 0x40 + lVar7 * 4) = param_2;
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  local_80 = local_70;
  *(uint *)(param_1 + 0x8c) = uVar5;
  local_88 = local_88 & 0xffffffff00000000;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x200);
  iVar3 = (**(code **)(*plVar2 + 0x70))
                    (plVar2,*(undefined8 *)(param_1 + 0x58 + (longlong)(int)uVar5 * 8),0,4);
  if (iVar3 < 0) {
    local_88 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x210);
    FUN_141a447e0(iVar3,
                  "D3DRHI->GetDeviceContext()->Map(Buffers[BufferIndex],0,D3D11_MAP_WRITE_DISCARD,0,&MappedSubresource)"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Util.cpp"
                  ,0x1ec);
  }
  return local_70[0];
}



// FUNCTION 141a33d80 FUN_141a33d80 body=105 status=ok
// SIG undefined FUN_141a33d80(void)

undefined8
FUN_141a33d80(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*DAT_146ab6358 + 0x4b0))
                    (DAT_146ab6358,&DAT_146ab6e78,*param_2,param_3,param_4,param_5);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2);
  return uVar1;
}



// FUNCTION 141a33e00 FUN_141a33e00 body=48 status=ok
// SIG undefined FUN_141a33e00(void)

void FUN_141a33e00(longlong param_1)

{
  if ((DAT_1469fc508 != '\0') && (*(char *)(param_1 + 9) != '\0')) {
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + -1;
  }
  _guard_xfg_dispatch_icall_nop();
  FUN_141eccd80(param_1);
  return;
}



// FUNCTION 141a33e30 FUN_141a33e30 body=199 status=ok
// SIG undefined FUN_141a33e30(void)

char FUN_141a33e30(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int local_res8 [2];
  uint local_res10 [2];
  undefined1 local_res18 [8];
  
  local_res10[0] = (uint)param_2;
  plVar1 = *(longlong **)(param_1 + 0xd8);
  iVar3 = 0;
  cVar2 = '\x01';
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_res10);
    if (cVar2 == '\0') goto LAB_141a33e8c;
    param_2 = (ulonglong)local_res10[0];
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x40))
                    (*(longlong **)(param_1 + 0x68),param_2,0);
  if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))();
  }
LAB_141a33e8c:
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x58))
            (*(longlong **)(param_1 + 0x68),local_res8,local_res18);
  if (((*(char *)(param_1 + 0x58) == '\0') ||
      ((bool)*(char *)(param_1 + 0x58) == (local_res8[0] != 0))) && (iVar3 < 0)) {
    FUN_141a447e0(iVar3,"Result",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                  ,0x199,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x210));
  }
  return cVar2;
}



// FUNCTION 141a33f00 FUN_141a33f00 body=755 status=ok
// SIG undefined FUN_141a33f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a33f00(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_1c8 [32];
  LARGE_INTEGER local_1a8;
  LARGE_INTEGER local_1a0;
  DWM_TIMING_INFO local_198;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  QueryPerformanceCounter(&local_1a8);
  _guard_xfg_dispatch_icall_nop(&local_198.rateRefresh,0,0x120);
  local_198.cbSize = 0x124;
  DwmGetCompositionTimingInfo((HWND)0x0,&local_198);
  dVar7 = DAT_1468b02f8 * 1000.0;
  fVar9 = (float)((double)(local_1a8.s.LowPart - *(int *)(param_1 + 0x20)) * dVar7);
  fVar8 = (float)((double)(uint)((int)local_198.qpcFrameComplete - *(int *)(param_1 + 0x30)) * dVar7
                 );
  fVar10 = (float)((double)(uint)local_198.qpcRefreshPeriod * dVar7);
  if ((0 < DAT_1469fc504) && (1.0 < fVar10)) {
    for (; fVar10 - 1000.0 / (float)DAT_1469fc504 < -1.0; fVar10 = fVar10 + fVar10) {
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  if (uVar2 < local_198.cFrameComplete) {
    fVar6 = (float)(longlong)(local_198.cFrameComplete - uVar2);
    if ((longlong)(local_198.cFrameComplete - uVar2) < 0) {
      fVar6 = fVar6 + 1.8446744e+19;
    }
    fVar8 = fVar8 / fVar6;
  }
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
  if (fVar8 < DAT_1464c1054 * fVar10) {
    if (uVar2 < local_198.cFrameComplete) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    }
  }
  else {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = DAT_1464c1058;
    if (iVar1 < DAT_1464c1058) {
      iVar5 = iVar1;
    }
  }
  *(int *)(param_1 + 0x38) = iVar5;
  bVar3 = DAT_1464c105c <= iVar5;
  if (DAT_1464c105c <= iVar5) {
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 0x200) + 0x378))();
    DwmFlush();
    fVar8 = DAT_1464c1050 * fVar10;
    while( true ) {
      QueryPerformanceCounter(&local_1a8);
      fVar9 = fVar8 - (float)((double)(local_1a8.s.LowPart - *(int *)(param_1 + 0x20)) *
                             DAT_1468b02f8 * 1000.0);
      if (fVar9 <= 0.0) break;
      FUN_1416b1760(fVar9 * 0.001);
    }
  }
  FUN_141a33e30(param_1,0);
  if (bVar3) {
    bVar4 = false;
    while( true ) {
      QueryPerformanceCounter(&local_1a0);
      fVar8 = fVar10 - (float)((double)(local_1a0.s.LowPart - *(int *)(param_1 + 0x20)) *
                              DAT_1468b02f8 * 1000.0);
      if (fVar8 <= 0.0) break;
      bVar4 = true;
      FUN_1416b1760(fVar8 * 0.001);
    }
    if (bVar4) goto LAB_141a3419e;
  }
  else if (*(char *)(param_1 + 0x3c) != '\0') {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  local_1a0.s.HighPart = local_1a8.s.HighPart;
  local_1a0.s.LowPart = local_1a8.s.LowPart;
LAB_141a3419e:
  *(LARGE_INTEGER *)(param_1 + 0x20) = local_1a0;
  *(DWM_FRAME_COUNT *)(param_1 + 0x28) = local_198.cFrameComplete;
  *(ulonglong *)(param_1 + 0x30) =
       CONCAT44(local_198.qpcFrameComplete._4_4_,(int)local_198.qpcFrameComplete);
  *(bool *)(param_1 + 0x3c) = bVar3;
  return;
}



// FUNCTION 141a34200 FUN_141a34200 body=559 status=ok
// SIG undefined FUN_141a34200(void)

void FUN_141a34200(longlong param_1,short *param_2)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  int local_res20 [2];
  undefined1 local_48 [8];
  undefined4 *local_40;
  undefined8 *local_38;
  int *local_30;
  undefined4 **local_28;
  
  if ((DAT_1469fc508 != '\0') && (*(char *)(param_1 + 9) != '\0')) {
    if ((*(int *)(param_1 + 0x28) < 0) || (*(int *)(param_1 + 0x1a8) < *(int *)(param_1 + 0x28))) {
      local_res20[0] = FCrc::StrCrc32<wchar_t>(param_2,0);
      plVar1 = (longlong *)(param_1 + 0x150);
      if (10000 < *(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x184)) {
        TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
        ::Empty(plVar1,10000);
        local_40 = &DAT_1469fc5c0;
        local_38 = &DAT_1464c1070;
        TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_int_const_&,FString_&>_>(plVar1,local_48,&local_40,0);
      }
      if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
        lVar6 = *(longlong *)(param_1 + 400);
        if (*(longlong *)(param_1 + 400) == 0) {
          lVar6 = param_1 + 0x188;
        }
        iVar2 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x198) - 1U &
                                 (longlong)local_res20[0]) * 4);
        if (iVar2 != -1) {
          do {
            piVar4 = (int *)((longlong)iVar2 * 0x20 + *plVar1);
            if (*piVar4 == local_res20[0]) {
              if (iVar2 != -1) goto LAB_141a34311;
              break;
            }
            iVar2 = piVar4[6];
          } while (iVar2 != -1);
        }
      }
      piVar4 = (int *)0x0;
LAB_141a34311:
      piVar3 = piVar4 + 2;
      if (piVar4 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      if (piVar3 == (int *)0x0) {
        local_40 = (undefined4 *)0x0;
        local_38 = (undefined8 *)0x0;
        if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
          lVar6 = -1;
          do {
            lVar6 = lVar6 + 1;
          } while (param_2[lVar6] != 0);
          uVar5 = (int)lVar6 + 1;
          local_38 = (undefined8 *)(ulonglong)uVar5;
          if (0 < (int)uVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,0);
          }
          FGenericPlatformString::Memcpy(local_40,param_2,(longlong)(int)uVar5 * 2);
        }
        local_30 = local_res20;
        local_28 = &local_40;
        TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_int_&,FString_&&>_>(plVar1,local_48,&local_30,0);
        if (local_40 != (undefined4 *)0x0) {
          FMemory::Free();
        }
      }
    }
    else {
      local_res20[0] = DAT_1469fc5c0;
    }
    plVar1 = (longlong *)(param_1 + 0x1a0);
    iVar2 = *(int *)(param_1 + 0x1a8);
    *(int *)(param_1 + 0x1a8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x1ac) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(int *)(*plVar1 + (longlong)iVar2 * 4) = local_res20[0];
    _guard_xfg_dispatch_icall_nop
              (*(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x208),*plVar1,
               *(int *)(param_1 + 0x1a8) << 2);
  }
  local_res20[0] = -0x19191a;
  _guard_xfg_dispatch_icall_nop(0xffe6e6e6,param_2);
  FUN_141ecd900(param_1,param_2,local_res20[0]);
  return;
}



// FUNCTION 141a34430 RHIAliasTextureResources body=95 status=ok
// SIG undefined RHIAliasTextureResources(void)

void FD3D11DynamicRHI::RHIAliasTextureResources
               (undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  lVar1 = lVar2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  if (param_3 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_3 + 0x48))(param_3);
  }
  if ((lVar1 != 0) && (lVar2 != 0)) {
    FD3D11TextureBase::AliasResources(lVar1,lVar2);
  }
  return;
}



// FUNCTION 141a34490 FUN_141a34490 body=1306 status=ok
// SIG undefined FUN_141a34490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141a34490(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,byte param_5,
             uint param_6,uint param_7,undefined8 *param_8,uint param_9)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  void *_Dst;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int *piVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  uint local_210;
  undefined4 local_208;
  undefined1 local_200;
  uint local_1f8;
  undefined4 local_1f0;
  longlong *local_1e8;
  byte local_1d8;
  uint local_1d4;
  uint local_1d0;
  longlong *local_1c8;
  uint local_1c0;
  uint local_1bc;
  longlong *local_1b8;
  undefined4 local_1ac;
  longlong local_1a8;
  undefined8 *local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  uint local_18c;
  undefined4 local_180;
  undefined8 uStack_17c;
  undefined8 uStack_174;
  uint local_168;
  uint local_164;
  uint local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  int local_130 [54];
  ulonglong local_58;
  longlong *plVar12;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  plVar12 = (longlong *)0x0;
  local_1d8 = param_5;
  local_1c8 = (longlong *)0x0;
  local_1b8 = (longlong *)0x0;
  local_1c0 = param_6;
  local_1bc = param_7;
  local_1d4 = param_3;
  local_1d0 = param_4;
  local_1a8 = param_1;
  local_1a0 = param_2;
  _guard_xfg_dispatch_icall_nop(&local_138,0,0xe0);
  if (DAT_1464c9c14 == 0) {
    local_1bc = param_7 & 0xffffffef;
  }
  uVar4 = (ulonglong)param_5;
  uVar1 = (&DAT_1464ca1cc)[uVar4 * 10];
  local_1ac = FUN_141a2ea30(uVar1);
  uVar14 = (ulonglong)param_9;
  local_15c = 1;
  local_154 = 1;
  local_168 = local_1d4;
  local_164 = local_1d0;
  local_160 = param_6;
  local_14c = 0;
  local_148 = 8;
  local_140 = 0;
  plVar10 = plVar12;
  if (param_9 != 0) {
    uVar7 = (&DAT_1464ca1b8)[uVar4 * 10];
    iVar3 = (&DAT_1464ca1c4)[uVar4 * 10];
    piVar9 = local_130;
    do {
      uVar2 = (local_1d4 >> ((byte)plVar12 & 0x1f)) / uVar7;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      uVar6 = (local_1d0 >> ((byte)plVar12 & 0x1f)) / (uint)(&DAT_1464ca1bc)[uVar4 * 10];
      *(undefined8 *)(piVar9 + -2) = *param_8;
      *piVar9 = iVar3 * uVar2;
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      uVar11 = (int)plVar12 + 1;
      plVar12 = (longlong *)(ulonglong)uVar11;
      piVar9[1] = uVar6 * iVar3 * uVar2;
      param_1 = local_1a8;
      plVar10 = local_1c8;
      piVar9 = piVar9 + 4;
      param_8 = param_8 + 1;
      param_6 = local_1c0;
    } while (uVar11 < param_9);
  }
  _Dst = *(void **)(param_1 + 0x2720);
  uVar7 = *(uint *)(param_1 + 0x2728);
  local_158 = uVar1;
  if (param_9 < param_6) {
    iVar3 = (&DAT_1464ca1c4)[uVar4 * 10];
    piVar9 = local_130 + uVar14 * 4;
    uVar2 = local_1d0;
    do {
      uVar6 = (local_1d4 >> ((byte)uVar14 & 0x1f)) / (uint)(&DAT_1464ca1b8)[uVar4 * 10];
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      uVar11 = (uVar2 >> ((byte)uVar14 & 0x1f)) / (uint)(&DAT_1464ca1bc)[uVar4 * 10];
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      uVar11 = uVar11 * iVar3 * uVar6;
      if (uVar7 < uVar11) {
        _Dst = (void *)FMemory::Malloc(uVar11);
        _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar11);
        iVar3 = (&DAT_1464ca1c4)[uVar4 * 10];
        uVar7 = uVar11;
        uVar2 = local_1d0;
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      *(void **)(piVar9 + -2) = _Dst;
      piVar9[1] = uVar11;
      *piVar9 = iVar3 * uVar6;
      piVar9 = piVar9 + 4;
      param_1 = local_1a8;
      plVar10 = local_1c8;
      param_6 = local_1c0;
    } while (uVar13 < local_1c0);
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  plVar12 = *(longlong **)(param_1 + 0x210);
  iVar3 = (**(code **)(*plVar12 + 0x28))(plVar12,&local_168,&local_138,&local_1c8);
  if (iVar3 < 0) {
    local_1f0 = (undefined4)local_148;
    local_1f8 = local_160;
    local_200 = (undefined1)local_158;
    local_208 = local_15c;
    local_210 = local_164;
    local_218 = CONCAT44(local_218._4_4_,local_168);
    local_1e8 = plVar12;
    FUN_141a444e0(iVar3,"Direct3DDevice->CreateTexture2D(TextureDesc,SubResourceData,OutTexture2D)",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                  ,0x259);
  }
  if (uVar7 != *(uint *)(param_1 + 0x2728)) {
    FMemory::Free(_Dst);
  }
  puVar8 = (undefined8 *)0x0;
  plVar12 = *(longlong **)(param_1 + 0x210);
  local_198 = local_1ac;
  local_194 = 4;
  local_18c = param_6;
  if (local_1b8 != (longlong *)0x0) {
    (**(code **)(*local_1b8 + 0x10))();
  }
  iVar3 = (**(code **)(*plVar12 + 0x38))(plVar12,local_1c8,&local_198,&local_1b8);
  if (iVar3 < 0) {
    local_218 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar3,
                  "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                  ,0x4fd);
  }
  puVar5 = (undefined8 *)operator_new(0xf8);
  plVar12 = local_1b8;
  uVar7 = local_1bc;
  if (puVar5 != (undefined8 *)0x0) {
    puVar8 = puVar5 + 0xd;
    *puVar5 = &PTR_FUN_143f3ece8;
    local_180 = 1;
    uStack_17c = 0;
    uStack_174 = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *(undefined2 *)(puVar5 + 2) = 0x100;
    puVar5[3] = 0;
    *(uint *)((longlong)puVar5 + 0x3c) = (uint)local_1d8;
    puVar5[9] = puVar5 + 10;
    *(uint *)((longlong)puVar5 + 0x34) = param_6;
    *(undefined4 *)(puVar5 + 7) = 1;
    *(uint *)(puVar5 + 8) = local_1bc;
    *(undefined4 *)(puVar5 + 4) = 1;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    puVar5[10] = 0xc7efffffe0000000;
    puVar5[0xb] = 0;
    *(uint *)((longlong)puVar5 + 100) = local_1d0;
    *puVar5 = &PTR_FUN_144d83940;
    *(uint *)(puVar5 + 0xc) = local_1d4;
    *puVar8 = &PTR__scalar_deleting_destructor__144da0d80;
    puVar5[0x10] = local_1a8;
    *(undefined4 *)(puVar5 + 0xe) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x74) = 0xffffffff;
    *(undefined1 *)(puVar5 + 0xf) = 0;
    puVar5[0x11] = 0;
    *(undefined4 *)(puVar5 + 0x12) = 0;
    puVar5[0x13] = puVar8;
    puVar5[0x14] = local_1c8;
    if (local_1c8 != (longlong *)0x0) {
      (**(code **)(*local_1c8 + 8))();
    }
    puVar5[0x15] = plVar12;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    *(undefined1 *)(puVar5 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xc4) = 1;
    puVar5[0x19] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x1b] = 0;
    puVar5[0x1c] = 0;
    *(undefined4 *)(puVar5 + 0x1d) = 0;
    *(uint *)((longlong)puVar5 + 0xf4) = *(uint *)((longlong)puVar5 + 0xf4) & 0xfffffffc;
    *puVar5 = &PTR_FUN_144da0fb8;
    *puVar8 = &PTR_LAB_144da1010;
    *(uint *)(puVar5 + 0x1e) = uVar7;
    puVar8 = puVar5;
  }
  D3D11TextureAllocated<FD3D11BaseTexture2D>(puVar8);
  puVar5 = local_1a0;
  *local_1a0 = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
    UNLOCK();
  }
  if (local_1b8 != (longlong *)0x0) {
    (**(code **)(*local_1b8 + 0x10))();
  }
  if (local_1c8 != (longlong *)0x0) {
    (**(code **)(*local_1c8 + 0x10))();
  }
  return puVar5;
}



// FUNCTION 141a349b0 FUN_141a349b0 body=1466 status=ok
// SIG undefined FUN_141a349b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141a349b0(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,uint param_5,
             byte param_6,uint param_7,uint param_8,longlong *param_9,uint param_10)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  void *_Dst;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  uint local_150;
  uint local_148;
  undefined1 local_140;
  uint local_138;
  undefined4 local_130;
  longlong *local_128;
  byte local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  longlong *local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar17 = (ulonglong)param_5;
  iVar9 = param_7 * param_5;
  local_118 = param_6;
  local_dc = param_5;
  local_10c = param_7;
  local_108 = param_8;
  local_100 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  iVar15 = 0;
  iVar6 = 0;
  local_114 = param_3;
  local_110 = param_4;
  local_d0 = param_1;
  local_a8 = param_2;
  if (0 < iVar9) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_f8);
    iVar15 = (int)local_f0;
    iVar6 = local_f0._4_4_;
  }
  local_f0 = CONCAT44(local_f0._4_4_,iVar15 + iVar9);
  if (iVar6 < iVar15 + iVar9) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_f8);
  }
  lVar12 = local_f8;
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar15 * 0x10 + local_f8),0,(longlong)iVar9 << 4)
  ;
  if (DAT_1464c9c14 == 0) {
    local_108 = param_8 & 0xffffffef;
  }
  uVar4 = (ulonglong)local_118;
  lVar7 = uVar4 * 5;
  uVar16 = (&DAT_1464ca1cc)[uVar4 * 10];
  local_c8 = lVar7;
  local_d8 = FUN_141a2ea30(uVar16);
  uVar10 = 0;
  local_88 = local_114;
  local_84 = local_110;
  local_80 = param_7;
  local_7c = param_5;
  local_74 = 1;
  local_6c = 0;
  local_68 = 8;
  local_60 = 0;
  if (param_10 != 0) {
    iVar15 = 0;
    do {
      uVar3 = (local_114 >> ((byte)uVar10 & 0x1f)) / (uint)(&DAT_1464ca1b8)[uVar4 * 10];
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      uVar13 = 0;
      if (param_5 != 0) {
        lVar1 = *param_9;
        uVar14 = uVar10;
        do {
          iVar6 = iVar15 + uVar13;
          lVar8 = (longlong)(int)uVar14;
          uVar13 = uVar13 + 1;
          uVar14 = uVar14 + param_7;
          *(undefined8 *)(lVar12 + lVar8 * 0x10) = *(undefined8 *)(lVar1 + (longlong)iVar6 * 8);
          *(uint *)(lVar12 + 8 + lVar8 * 0x10) = (&DAT_1464ca1c4)[uVar4 * 10] * uVar3;
          *(undefined4 *)(lVar12 + 0xc + lVar8 * 0x10) = 0;
        } while (uVar13 < param_5);
      }
      uVar10 = uVar10 + 1;
      iVar15 = iVar15 + param_5;
      param_1 = local_d0;
    } while (uVar10 < param_10);
  }
  _Dst = *(void **)(param_1 + 0x2720);
  uVar10 = *(uint *)(param_1 + 0x2728);
  uVar3 = local_110;
  local_78 = uVar16;
  if (param_10 < param_7) {
    do {
      uVar4 = (ulonglong)(local_114 >> ((byte)param_10 & 0x1f)) /
              (ulonglong)(uint)(&DAT_1464ca1b8)[lVar7 * 2];
      if ((uint)uVar4 < 2) {
        uVar4 = 1;
      }
      local_e0 = (uint)uVar4;
      uVar13 = (uVar3 >> ((byte)param_10 & 0x1f)) / (uint)(&DAT_1464ca1bc)[lVar7 * 2];
      if (uVar13 < 2) {
        uVar13 = 1;
      }
      uVar14 = uVar13 * (&DAT_1464ca1c4)[lVar7 * 2] * local_e0;
      uVar13 = param_10;
      if ((int)uVar17 != 0) {
        do {
          if (uVar10 < uVar14) {
            _Dst = (void *)FMemory::Malloc(uVar14);
            _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar14);
            uVar4 = (ulonglong)local_e0;
            uVar10 = uVar14;
          }
          lVar7 = (longlong)(int)uVar13;
          *(void **)(lVar12 + lVar7 * 0x10) = _Dst;
          *(int *)(lVar12 + 8 + lVar7 * 0x10) = (&DAT_1464ca1c4)[local_c8 * 2] * (int)uVar4;
          *(uint *)(lVar12 + 0xc + lVar7 * 0x10) = uVar14;
          uVar17 = uVar17 - 1;
          uVar13 = uVar13 + local_10c;
        } while (uVar17 != 0);
        uVar17 = (ulonglong)local_dc;
        lVar7 = local_c8;
        uVar3 = local_110;
      }
      param_10 = param_10 + 1;
      param_7 = local_10c;
    } while (param_10 < local_10c);
  }
  if (local_100 != (longlong *)0x0) {
    (**(code **)(*local_100 + 0x10))();
  }
  lVar7 = local_d0;
  plVar2 = *(longlong **)(local_d0 + 0x210);
  iVar15 = (**(code **)(*plVar2 + 0x28))(plVar2,&local_88,lVar12,&local_100);
  if (iVar15 < 0) {
    local_130 = (undefined4)local_68;
    local_138 = local_80;
    local_140 = (undefined1)local_78;
    local_148 = local_7c;
    local_150 = local_84;
    local_158 = CONCAT44(local_158._4_4_,local_88);
    local_128 = plVar2;
    FUN_141a444e0(iVar15,"Direct3DDevice->CreateTexture2D(TextureDesc,SubResourceData,OutTexture2D)"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                  ,0x259);
  }
  if (uVar10 != *(uint *)(lVar7 + 0x2728)) {
    FMemory::Free(_Dst);
  }
  puVar11 = (undefined8 *)0x0;
  plVar2 = *(longlong **)(lVar7 + 0x210);
  local_c0 = local_d8;
  local_bc = 5;
  local_b0 = 0;
  uVar16 = (undefined4)uVar17;
  local_b4 = param_7;
  local_ac = uVar16;
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
  iVar15 = (**(code **)(*plVar2 + 0x38))(plVar2,local_100,&local_c0,&local_e8);
  if (iVar15 < 0) {
    local_158 = *(undefined8 *)(lVar7 + 0x210);
    FUN_141a447e0(iVar15,
                  "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                  ,0x590);
  }
  puVar5 = (undefined8 *)operator_new(0x100);
  plVar2 = local_e8;
  uVar10 = local_108;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f3ece8;
    local_a0 = 1;
    uStack_9c = 0;
    uStack_94 = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *(undefined2 *)(puVar5 + 2) = 0x100;
    puVar5[3] = 0;
    *(uint *)((longlong)puVar5 + 0x3c) = (uint)local_118;
    puVar5[9] = puVar5 + 10;
    *(uint *)((longlong)puVar5 + 0x34) = param_7;
    puVar11 = puVar5 + 0xe;
    *(undefined4 *)(puVar5 + 7) = 1;
    *(uint *)(puVar5 + 8) = local_108;
    *(undefined4 *)(puVar5 + 4) = 1;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    puVar5[10] = 0xc7efffffe0000000;
    puVar5[0xb] = 0;
    *puVar5 = &PTR_FUN_144d83998;
    *(uint *)(puVar5 + 0xc) = local_114;
    *(uint *)((longlong)puVar5 + 100) = local_110;
    *(undefined4 *)(puVar5 + 0xd) = uVar16;
    *puVar11 = &PTR__scalar_deleting_destructor__144da0d80;
    puVar5[0x11] = local_d0;
    *(undefined4 *)(puVar5 + 0xf) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x7c) = 0xffffffff;
    *(undefined1 *)(puVar5 + 0x10) = 0;
    puVar5[0x12] = 0;
    *(undefined4 *)(puVar5 + 0x13) = 0;
    puVar5[0x14] = puVar11;
    puVar5[0x15] = local_100;
    if (local_100 != (longlong *)0x0) {
      (**(code **)(*local_100 + 8))();
    }
    puVar5[0x16] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    puVar5[0x17] = 0;
    puVar5[0x18] = 0;
    *(undefined1 *)(puVar5 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xcc) = 1;
    puVar5[0x1a] = 0;
    puVar5[0x1b] = 0;
    puVar5[0x1c] = 0;
    puVar5[0x1d] = 0;
    *(undefined4 *)(puVar5 + 0x1e) = 0;
    *(uint *)((longlong)puVar5 + 0xfc) = *(uint *)((longlong)puVar5 + 0xfc) & 0xfffffffc;
    *puVar5 = &PTR__scalar_deleting_destructor__144da1d68;
    *puVar11 = &PTR_LAB_144da1db8;
    *(uint *)(puVar5 + 0x1f) = uVar10;
    puVar11 = puVar5;
  }
  FUN_141a1d850(puVar11);
  puVar5 = local_a8;
  *local_a8 = puVar11;
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
    lVar12 = local_f8;
  }
  if (lVar12 != 0) {
    FMemory::Free(lVar12);
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
  if (local_100 != (longlong *)0x0) {
    (**(code **)(*local_100 + 0x10))();
  }
  return puVar5;
}



// FUNCTION 141a34f70 FUN_141a34f70 body=340 status=ok
// SIG undefined FUN_141a34f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_141a34f70(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,int *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint in_stack_ffffffffffffff58;
  uint in_stack_ffffffffffffff60;
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
  
  local_58 = 1;
  local_44 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  local_38 = 0;
  local_30 = 0;
  lVar4 = FUN_141a1a710(param_1,param_5,param_6,1,in_stack_ffffffffffffff58 & 0xffffff00,
                        in_stack_ffffffffffffff60 & 0xffffff00,(char)*(undefined4 *)(param_3 + 0x3c)
                        ,param_4,1,*(undefined4 *)(param_3 + 0x40),&local_68);
  uVar1 = *(uint *)(param_3 + 0x34);
  uVar2 = *(uint *)(lVar4 + 0x34);
  uVar3 = uVar2;
  if (uVar1 <= uVar2) {
    uVar3 = uVar1;
  }
  iVar5 = uVar2 - uVar3;
  if (uVar3 != 0) {
    iVar7 = (uVar1 - uVar3) - iVar5;
    uVar6 = (ulonglong)uVar3;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x200) + 0x170))
                (*(longlong **)(param_1 + 0x200),*(undefined8 *)(lVar4 + 0xa0),iVar5,0,0,0,
                 *(undefined8 *)(param_3 + 0xa0),iVar7 + iVar5,0);
      iVar5 = iVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  LOCK();
  *param_7 = *param_7 + -1;
  UNLOCK();
  *param_2 = lVar4;
  LOCK();
  *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 141a350d0 FUN_141a350d0 body=402 status=ok
// SIG undefined FUN_141a350d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_141a350d0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,int *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint in_stack_ffffffffffffff50;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  local_68 = 1;
  local_78 = 0;
  uStack_70 = 0;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_54 = 0;
  lVar5 = FUN_141a1b270(param_1,param_6,param_7,param_4,1,in_stack_ffffffffffffff50 & 0xffffff00,
                        (char)*(undefined4 *)(param_3 + 0x3c),param_5,1,
                        *(undefined4 *)(param_3 + 0x40),&local_78);
  uVar1 = *(uint *)(param_3 + 0x34);
  uVar2 = *(uint *)(lVar5 + 0x34);
  uVar3 = *(uint *)(lVar5 + 0x68);
  if (*(uint *)(param_3 + 0x68) <= *(uint *)(lVar5 + 0x68)) {
    uVar3 = *(uint *)(param_3 + 0x68);
  }
  uVar4 = uVar2;
  if (uVar1 <= uVar2) {
    uVar4 = uVar1;
  }
  uVar7 = 0;
  if (uVar4 != 0) {
    do {
      uVar6 = 0;
      if (uVar3 != 0) {
        do {
          (**(code **)(**(longlong **)(param_1 + 0x200) + 0x170))
                    (*(longlong **)(param_1 + 0x200),*(undefined8 *)(lVar5 + 0xa8),
                     *(int *)(lVar5 + 0x34) * uVar6 + uVar7 + (uVar2 - uVar4),0,0,0,
                     *(undefined8 *)(param_3 + 0xa8),
                     *(int *)(param_3 + 0x34) * uVar6 + uVar7 + (uVar1 - uVar4),0);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  LOCK();
  *param_8 = *param_8 + -1;
  UNLOCK();
  *param_2 = lVar5;
  LOCK();
  *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 141a35270 FUN_141a35270 body=191 status=ok
// SIG undefined FUN_141a35270(void)

void FUN_141a35270(longlong param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = *(int *)(DAT_1469fc568 + 4) != 0;
  if (((bool)DAT_1464c106c != bVar2) && (DAT_1469fc5a1 != '\0')) {
    FUN_14004d2a0(*(undefined8 *)(param_1 + 0x1e0));
    DAT_1469fc5a1 = '\0';
  }
  DAT_1464c106c = bVar2;
  cVar1 = IsRHIDeviceIntel();
  if ((cVar1 != '\0') && (DAT_1464c106c != '\0')) {
    if (param_2 == '\0') {
      if (DAT_1469fc5a1 == '\0') {
        FUN_14004d1d0(*(undefined8 *)(param_1 + 0x1e0));
        DAT_1469fc5a1 = '\x01';
      }
    }
    else if (DAT_1469fc5a1 != '\0') {
      FUN_14004d2a0(*(undefined8 *)(param_1 + 0x1e0));
      DAT_1469fc5a1 = 0;
      return;
    }
  }
  return;
}



// FUNCTION 141a35330 FUN_141a35330 body=146 status=ok
// SIG undefined FUN_141a35330(void)

void FUN_141a35330(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                  undefined8 *param_6,undefined4 param_7,int param_8,int param_9,
                  undefined8 *param_10)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x42a8) = param_7;
  *(int *)(param_1 + 0x4298) = param_4;
  *(undefined4 *)(param_1 + 0x42a0) = param_2;
  *(undefined4 *)(param_1 + 0x42a4) = param_3;
  *(int *)(param_1 + 0x42b0) = param_9;
  *(int *)(param_1 + 0x42ac) = param_8;
  *(int *)(param_1 + 0x429c) = param_5;
  uVar1 = FUN_141a33b80(*(undefined8 *)(param_1 + 0x4288),param_4 * param_5);
  *param_6 = uVar1;
  uVar1 = FUN_141a33b80(*(undefined8 *)(param_1 + 0x4290),param_8 * param_9);
  *param_10 = uVar1;
  return;
}



// FUNCTION 141a353d0 FUN_141a353d0 body=66 status=ok
// SIG undefined FUN_141a353d0(void)

void FUN_141a353d0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                  undefined8 *param_6)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0x4298) = param_4;
  *(undefined4 *)(param_1 + 0x42a0) = param_2;
  *(undefined4 *)(param_1 + 0x42a4) = param_3;
  *(int *)(param_1 + 0x429c) = param_5;
  uVar1 = FUN_141a33b80(*(undefined8 *)(param_1 + 0x4288),param_4 * param_5);
  *param_6 = uVar1;
  return;
}



// FUNCTION 141a35420 FUN_141a35420 body=198 status=ok
// SIG undefined FUN_141a35420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a35420(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x26b0);
  if (param_3 == 0) {
    param_3 = *(longlong *)(param_2 + 0x70);
    local_38 = param_3;
    FUN_141a40680(param_1,1,&local_38);
  }
  local_2c = 0xffffffff;
  local_40 = 0;
  local_30 = 0;
  local_28 = 0x101;
  local_48 = 0;
  local_38 = param_3;
  FUN_141a3e630(param_1,1,&local_38,0);
  local_38 = 0;
  local_30 = DAT_1464c9c64;
  local_2c = DAT_1464c9c64;
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x168))
            (*(longlong **)(param_1 + 0x1d0),1,&local_38);
  return;
}



// FUNCTION 141a354f0 FUN_141a354f0 body=51 status=ok
// SIG undefined FUN_141a354f0(void)

void FUN_141a354f0(longlong param_1)

{
  RHIPrivateBeginFrame();
  FUN_141a44250();
  FUN_141a26f70(param_1 + 0x17c08,param_1 + -0x30);
  *(undefined4 *)(param_1 + 0x2700) = 0x26;
  return;
}



// FUNCTION 141a35530 FUN_141a35530 body=63 status=ok
// SIG undefined FUN_141a35530(void)

void FUN_141a35530(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  FUN_1419c9dd0();
  if (*(char *)(param_2 + 0x10c) != '\0') {
    uVar1 = *(undefined4 *)(param_2 + 0x108);
    *(undefined4 *)(param_1 + 0x3fc4) = 0;
    *(undefined4 *)(param_1 + 0x3fc0) = uVar1;
  }
  return;
}



// FUNCTION 141a355a0 FUN_141a355a0 body=281 status=ok
// SIG undefined FUN_141a355a0(void)

void FUN_141a355a0(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(int *)(param_1 + 0x3fb8) = *(int *)(param_1 + 0x3fb8) + 1;
  if (*(int *)(param_1 + 0x3fb8) == -1) {
    *(undefined4 *)(param_1 + 0x3fb8) = 0;
  }
  lVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fcd90) && (_Init_thread_header(&DAT_1469fcd90), DAT_1469fcd90 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"rhi.ResourceTableCaching");
    lVar4 = lVar5;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_1469fcd88 = lVar4;
    _Init_thread_footer(&DAT_1469fcd90);
  }
  lVar4 = DAT_1469fcd88;
  if (DAT_1469fcd88 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    if (*(int *)(lVar5 + lVar4) != 1) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x3fcc) = *(undefined4 *)(param_1 + 0x3fb8);
  return;
}



// FUNCTION 141a356d0 RHIBindDebugLabelName body=46 status=ok
// SIG undefined RHIBindDebugLabelName(void)

void FD3D11DynamicRHI::RHIBindDebugLabelName(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 local_res10 [3];
  
  FName::FName(local_res10,param_3,1);
  *(undefined8 *)(param_2 + 0x58) = local_res10[0];
  return;
}



// FUNCTION 141a35700 FUN_141a35700 body=54 status=ok
// SIG undefined FUN_141a35700(void)

longlong FUN_141a35700(undefined8 param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4,
                      undefined1 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                      undefined4 *param_9)

{
  longlong lVar1;
  
  *param_9 = 0;
  lVar1 = CalcTextureSize(param_2,param_3,param_5,param_6);
  return lVar1 * (param_4 & 0xffffffff);
}



// FUNCTION 141a35770 RHICalcTexture3DPlatformSize body=47 status=ok
// SIG undefined RHICalcTexture3DPlatformSize(void)

void FD3D11DynamicRHI::RHICalcTexture3DPlatformSize
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  *param_8 = 0;
  CalcTextureSize3D(param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 141a357a0 FUN_141a357a0 body=53 status=ok
// SIG undefined FUN_141a357a0(void)

longlong FUN_141a357a0(undefined8 param_1,undefined4 param_2,ulonglong param_3,undefined1 param_4,
                      undefined4 param_5,undefined8 param_6,undefined4 *param_7)

{
  longlong lVar1;
  
  *param_7 = 0;
  lVar1 = CalcTextureSize(param_2,param_2,param_4,param_5);
  return lVar1 * (param_3 & 0xffffffff) * 6;
}



// FUNCTION 141a357e0 RHICalcTextureCubePlatformSize body=38 status=ok
// SIG undefined RHICalcTextureCubePlatformSize(void)

longlong FD3D11DynamicRHI::RHICalcTextureCubePlatformSize
                   (undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 *param_6)

{
  longlong lVar1;
  
  *param_6 = 0;
  lVar1 = CalcTextureSize(param_2,param_2,param_3);
  return lVar1 * 6;
}



// FUNCTION 141a35810 RHICalibrateTimers body=95 status=ok
// SIG undefined RHICalibrateTimers(void)

void FD3D11DynamicRHI::RHICalibrateTimers(undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(&DAT_146ab6e78);
    puVar2 = &DAT_146ab6e78;
    if (cVar1 == '\0') {
      puVar2 = (undefined *)0x0;
    }
  }
  FUN_141a272a0(param_1);
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  FRHICommandListImmediate::UnStallRHIThread(puVar2);
  return;
}



// FUNCTION 141a35870 FUN_141a35870 body=460 status=ok
// SIG undefined FUN_141a35870(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_141a35870(longlong param_1,char param_2,undefined8 param_3,longlong param_4,byte param_5,
                  undefined4 param_6,char param_7,undefined1 param_8)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong alStack_70 [9];
  longlong *local_28;
  int local_20;
  
  iVar4 = 0;
  alStack_70[1] = 0;
  alStack_70[2] = 0;
  alStack_70[3] = 0;
  alStack_70[4] = 0;
  alStack_70[5] = 0;
  alStack_70[6] = 0;
  alStack_70[7] = 0;
  alStack_70[8] = 0;
  local_28 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x2c8))
            (*(longlong **)(param_1 + 0x200),8,alStack_70 + 1,&local_28);
  plVar6 = local_28;
  local_20 = 8;
  do {
    if (alStack_70[local_20] != 0) break;
    local_20 = local_20 + -1;
  } while (0 < local_20);
  iVar3 = local_20;
  if ((param_2 != '\0') && (0 < local_20)) {
    plVar7 = alStack_70;
    iVar5 = iVar4;
    do {
      plVar7 = (longlong *)((longlong)plVar7 + 8);
      if (*plVar7 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x200) + 400))
                  (*(longlong **)(param_1 + 0x200),*plVar7,(longlong)iVar5 * 0x10 + param_4);
        iVar3 = local_20;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  if (((param_5 != 0) || (param_7 != '\0')) && (plVar6 != (longlong *)0x0)) {
    bVar2 = param_5 | 2;
    if (param_7 == '\0') {
      bVar2 = param_5;
    }
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x1a8))
              (*(longlong **)(param_1 + 0x200),plVar6,bVar2,param_6,param_8);
    iVar3 = local_20;
  }
  if ((*(char *)(param_1 + 0x17c40) != '\0') && (*(longlong *)(param_1 + 0x17c70) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c70) + 0x10);
    *piVar1 = *piVar1 + 1;
    iVar3 = local_20;
  }
  if (0 < iVar3) {
    plVar6 = alStack_70;
    do {
      plVar6 = (longlong *)((longlong)plVar6 + 8);
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x10))();
        iVar3 = local_20;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  return;
}



// FUNCTION 141a35a40 FUN_141a35a40 body=69 status=ok
// SIG undefined FUN_141a35a40(void)

void FUN_141a35a40(longlong param_1,longlong param_2)

{
  int *piVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x198))
            (*(longlong **)(param_1 + 0x1d0),*(undefined8 *)(param_2 + 0x18));
  if ((*(char *)(param_1 + 0x17c10) != '\0') && (*(longlong *)(param_1 + 0x17c40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 141a35a90 RHIComputeMemorySize body=33 status=ok
// SIG undefined RHIComputeMemorySize(void)

undefined4 FD3D11DynamicRHI::RHIComputeMemorySize(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  return *(undefined4 *)(lVar1 + 0x28);
}



// FUNCTION 141a35ac0 FUN_141a35ac0 body=272 status=ok
// SIG undefined FUN_141a35ac0(void)

void FUN_141a35ac0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)(param_3 + 0x68);
  if (*(uint *)(param_2 + 0x68) <= *(uint *)(param_3 + 0x68)) {
    uVar5 = *(uint *)(param_2 + 0x68);
  }
  if (uVar5 != 0) {
    uVar1 = *(uint *)(param_2 + 0x34);
    uVar2 = *(uint *)(param_3 + 0x34);
    uVar3 = uVar2;
    if (uVar1 <= uVar2) {
      uVar3 = uVar1;
    }
    uVar6 = 0;
    if (uVar3 != 0) {
      do {
        uVar4 = 0;
        if (uVar5 != 0) {
          do {
            (**(code **)(**(longlong **)(param_1 + 0x200) + 0x170))
                      (*(longlong **)(param_1 + 0x200),*(undefined8 *)(param_2 + 0xa8),
                       uVar4 * *(int *)(param_2 + 0x34) + uVar6 + (uVar1 - uVar3),0,0,0,
                       *(undefined8 *)(param_3 + 0xa8),
                       *(int *)(param_3 + 0x34) * uVar4 + uVar6 + (uVar2 - uVar3),0);
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar5);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
  }
  return;
}



// FUNCTION 141a35bd0 FUN_141a35bd0 body=171 status=ok
// SIG undefined FUN_141a35bd0(void)

void FUN_141a35bd0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_3 + 0x34);
  uVar2 = *(uint *)(param_2 + 0x34);
  uVar3 = uVar1;
  if (uVar2 <= uVar1) {
    uVar3 = uVar2;
  }
  iVar4 = uVar2 - uVar3;
  if (uVar3 != 0) {
    iVar6 = (uVar1 - uVar3) - iVar4;
    uVar5 = (ulonglong)uVar3;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x200) + 0x170))
                (*(longlong **)(param_1 + 0x200),*(undefined8 *)(param_2 + 0xa0),iVar4,0,0,0,
                 *(undefined8 *)(param_3 + 0xa0),iVar6 + iVar4,0);
      iVar4 = iVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141a35c80 FUN_141a35c80 body=466 status=ok
// SIG undefined FUN_141a35c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a35c80(longlong param_1,longlong param_2,longlong param_3,float *param_4,float *param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  int *local_68;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar1 = *(uint *)(param_2 + 0x60);
  fVar9 = (float)uVar1;
  fVar11 = param_4[2];
  if (fVar9 <= param_4[2]) {
    param_4[2] = fVar9;
    fVar11 = fVar9;
  }
  uVar2 = *(uint *)(param_2 + 100);
  fVar10 = (float)uVar2;
  fVar9 = param_4[3];
  if (fVar10 <= param_4[3]) {
    param_4[3] = fVar10;
    fVar9 = fVar10;
  }
  iVar8 = (int)*param_4;
  local_44 = 1;
  local_50 = 0;
  iVar7 = (int)param_4[1];
  local_58 = 0;
  if (-1 < iVar8) {
    local_58 = iVar8;
  }
  fVar10 = param_5[1];
  local_48 = (int)fVar9;
  local_54 = 0;
  if (-1 < iVar7) {
    local_54 = iVar7;
  }
  iVar6 = -iVar7;
  if (-1 < iVar7) {
    iVar6 = 0;
  }
  local_4c = (int)fVar11;
  fVar11 = *param_5;
  iVar7 = -iVar8;
  if (-1 < iVar8) {
    iVar7 = 0;
  }
  bVar5 = (float)(local_4c - local_58) + (float)iVar7 + fVar11 <= (float)*(uint *)(param_3 + 0x60)
          && (float)(local_48 - local_54) + (float)iVar6 + fVar10 <= (float)*(uint *)(param_3 + 100)
  ;
  if ((param_5[2] <= fVar11 && fVar11 != param_5[2]) ||
     (param_5[3] <= fVar10 && fVar10 != param_5[3])) {
    bVar5 = false;
  }
  if ((local_58 < 0) || ((int)uVar1 < local_4c)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  if ((local_54 < 0) || ((int)uVar2 < local_48)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  if ((((local_58 <= local_4c) && (local_54 <= local_48)) && ((bool)(bVar4 & bVar3))) && (bVar5)) {
    local_68 = &local_58;
    local_78 = *(undefined8 *)(param_2 + 0xa0);
    local_70 = 0;
    local_80 = 0;
    local_88 = (undefined4)(longlong)((float)iVar6 + fVar10);
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x170))
              (*(longlong **)(param_1 + 0x200),*(undefined8 *)(param_3 + 0xa0),0,
               (longlong)((float)iVar7 + fVar11));
  }
  return;
}



// FUNCTION 141a35e60 FUN_141a35e60 body=1700 status=ok
// SIG undefined FUN_141a35e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a35e60(ulonglong param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_2d8 [32];
  ulonglong local_2b8;
  ulonglong local_2b0;
  undefined1 *local_2a8;
  undefined8 *local_2a0;
  undefined8 *local_298;
  undefined8 local_290;
  undefined1 local_288;
  undefined1 local_278;
  undefined8 local_270;
  int local_268;
  int local_264;
  longlong *local_260;
  longlong *local_258;
  undefined8 local_250;
  int local_248;
  int local_244;
  int local_240;
  undefined4 local_23c;
  undefined1 local_238 [48];
  undefined1 local_208 [32];
  ulonglong local_1e8;
  ulonglong local_50;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  if (param_3 == (longlong *)0x0) {
    return;
  }
  local_270 = param_3;
  local_260 = param_2;
  local_258 = param_2;
  FUN_141a40680(param_1,0,&local_258,1);
  local_258 = (longlong *)(param_1 - 0x30);
  FRHICommandListBase::FRHICommandListBase(local_208,1);
  uVar11 = 0;
  local_1e8 = param_1;
  if ((longlong *)(param_1 - 0x30) == (longlong *)0x0) {
    local_1e8 = uVar11;
  }
  lVar4 = (**(code **)(*param_2 + 8))(param_2);
  lVar5 = (**(code **)(*param_3 + 8))(param_3);
  lVar6 = (**(code **)(*param_2 + 0x20))(param_2);
  lVar7 = (**(code **)(*local_270 + 0x20))(local_270);
  (**(code **)(*local_260 + 0x18))(local_260);
  (**(code **)(*local_270 + 0x18))(local_270);
  if ((lVar4 == 0) || (lVar5 == 0)) {
    if ((lVar6 == 0) || (lVar7 == 0)) {
      if ((lVar4 == 0) || (lVar7 == 0)) goto LAB_141a364c5;
      iVar10 = *param_4;
      if (iVar10 == 1) {
        uVar11 = 1;
      }
      else if (iVar10 == 2) {
        uVar11 = 2;
      }
      else if (iVar10 == 3) {
        uVar11 = 3;
      }
      else if (iVar10 == 4) {
        uVar11 = 4;
      }
      else if (iVar10 == 5) {
        uVar11 = 5;
      }
      plVar8 = *(longlong **)(param_1 + 0x1d0);
      uVar9 = *(undefined8 *)(lVar7 + 0xa0);
      local_298 = (undefined8 *)0x0;
      local_2a0 = (undefined8 *)((ulonglong)local_2a0 & 0xffffffff00000000);
    }
    else {
      if (lVar6 == lVar7) goto LAB_141a364c5;
      if ((*(char *)(param_1 + 0x17c10) != '\0') && (*(longlong *)(param_1 + 0x17c40) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x10);
        *piVar1 = *piVar1 + 1;
      }
      iVar10 = *param_4;
      if (iVar10 == 1) {
        uVar11 = 1;
      }
      else if (iVar10 == 2) {
        uVar11 = 2;
      }
      else if (iVar10 == 3) {
        uVar11 = 3;
      }
      else if (iVar10 == 4) {
        uVar11 = 4;
      }
      else if (iVar10 == 5) {
        uVar11 = 5;
      }
      iVar10 = ((int)uVar11 + param_4[10] * 6) * *(int *)(lVar6 + 0x34) + param_4[9];
      uVar12 = ((int)uVar11 + param_4[0xb] * 6) * *(int *)(lVar7 + 0x34) + param_4[9];
      if ((1 < *(uint *)(local_260 + 7)) && (*(uint *)(lVar7 + 0x38) < 2)) {
        local_2b0 = CONCAT44(local_2b0._4_4_,(&DAT_1464ca1cc)[(longlong)*(int *)(lVar7 + 0x3c) * 10]
                            );
        local_2b8 = CONCAT44(local_2b8._4_4_,iVar10);
        (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x1c8))
                  (*(longlong **)(param_1 + 0x1d0),*(undefined8 *)(lVar7 + 0xa0),uVar12,
                   *(undefined8 *)(lVar6 + 0xa0));
        goto LAB_141a364c5;
      }
      cVar2 = FResolveRect::IsValid(param_4 + 1);
      plVar8 = *(longlong **)(param_1 + 0x1d0);
      uVar9 = *(undefined8 *)(lVar7 + 0xa0);
      uVar11 = (ulonglong)uVar12;
      lVar4 = lVar6;
      if (cVar2 == '\0') {
        local_298 = (undefined8 *)0x0;
        local_2a0 = (undefined8 *)CONCAT44(local_2a0._4_4_,iVar10);
      }
      else {
        local_250 = *(undefined8 *)(param_4 + 1);
        local_244 = param_4[3];
        local_240 = param_4[4];
        local_298 = &local_250;
        local_2a0 = (undefined8 *)CONCAT44(local_2a0._4_4_,iVar10);
        local_248 = 0;
        local_23c = 1;
      }
    }
    iVar10 = 0;
    local_2a8 = *(undefined1 **)(lVar4 + 0xa0);
    local_2b8 = local_2b8 & 0xffffffff00000000;
  }
  else {
    if (lVar4 == lVar5) goto LAB_141a364c5;
    if ((*(char *)(param_1 + 0x17c10) != '\0') && (*(longlong *)(param_1 + 0x17c40) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x10);
      *piVar1 = *piVar1 + 1;
    }
    iVar10 = *(int *)(param_1 + 0x26b8);
    if (((((iVar10 - 0xb000U & 0xfffffeff) == 0) &&
         (lVar6 = FUN_141a2ffc0(lVar5 + 0x68,0x22), lVar6 != 0)) && (1 < *(uint *)(local_260 + 7)))
       && (*(uint *)(local_270 + 7) < 2)) {
      (**(code **)(**(longlong **)(lVar5 + 0xa0) + 0x50))(*(longlong **)(lVar5 + 0xa0),local_238);
      iVar10 = param_4[1];
      local_290 = *(undefined8 *)(param_1 + 0x1d0);
      local_264 = *(int *)(lVar5 + 100);
      local_268 = *(int *)(lVar5 + 0x60);
      if (((iVar10 < 0) || (local_248 = param_4[3], local_248 < 0)) ||
         ((param_4[2] < 0 || (local_244 = param_4[4], local_244 < 0)))) {
        local_250 = 0;
        local_248 = local_268;
        local_244 = local_264;
      }
      else {
        local_250 = CONCAT44(param_4[2],iVar10);
      }
      if ((((iVar10 < 0) || (param_4[3] < 0)) || (param_4[2] < 0)) || (param_4[4] < 0)) {
        local_270 = (longlong *)0x0;
      }
      else {
        local_270 = (longlong *)CONCAT44(param_4[2],iVar10);
        local_268 = param_4[3];
        local_264 = param_4[4];
      }
      uVar12 = -(uint)(*(char *)(lVar5 + 0xc0) != '\0');
      if (uVar12 < *(uint *)(lVar5 + 0xb8)) {
        uVar11 = *(ulonglong *)(*(longlong *)(lVar5 + 0xb0) + (longlong)(int)uVar12 * 8);
      }
      local_2b0 = FUN_141a2ffc0(lVar5 + 0x68,0x22);
      local_298 = &local_250;
      local_288 = local_278;
      local_2a0 = &local_270;
      local_2a8 = local_238;
      local_2b8 = uVar11;
      FUN_141a1f500(local_258,local_208,lVar4,lVar5);
      goto LAB_141a364c5;
    }
    plVar8 = local_260;
    if ((iVar10 == 0xa000) && (lVar6 = FUN_141a2ffc0(lVar5 + 0x68,0x22), lVar6 != 0)) {
      (**(code **)(**(longlong **)(lVar5 + 0xa0) + 0x50))(*(longlong **)(lVar5 + 0xa0),local_238);
      iVar10 = param_4[1];
      local_290 = *(undefined8 *)(param_1 + 0x1d0);
      local_264 = *(int *)(lVar5 + 100);
      local_268 = *(int *)(lVar5 + 0x60);
      if ((((iVar10 < 0) || (local_248 = param_4[3], local_248 < 0)) || (param_4[2] < 0)) ||
         (local_244 = param_4[4], local_244 < 0)) {
        local_250 = 0;
        local_248 = local_268;
        local_244 = local_264;
      }
      else {
        local_250 = CONCAT44(param_4[2],iVar10);
      }
      if (((iVar10 < 0) || (param_4[3] < 0)) || ((param_4[2] < 0 || (param_4[4] < 0)))) {
        local_270 = (longlong *)0x0;
      }
      else {
        local_270 = (longlong *)CONCAT44(param_4[2],iVar10);
        local_268 = param_4[3];
        local_264 = param_4[4];
      }
      local_2b0 = FUN_141a2ffc0(lVar5 + 0x68,0x22);
      local_288 = local_278;
      local_298 = &local_250;
      local_2a0 = &local_270;
      local_2a8 = local_238;
      local_2b8 = 0;
      FUN_141a1ece0(local_258,local_208,lVar4,lVar5);
      goto LAB_141a364c5;
    }
    iVar10 = (&DAT_1464ca1cc)[(longlong)*(int *)(lVar5 + 0x3c) * 10];
    if (iVar10 == 0x1b) {
      iVar3 = 0x1c;
    }
    else {
      iVar3 = 0x57;
      if (iVar10 != 0x5a) {
        iVar3 = iVar10;
      }
    }
    if ((1 < *(uint *)(plVar8 + 7)) && (*(uint *)(lVar5 + 0x38) < 2)) {
      local_2b0 = CONCAT44(local_2b0._4_4_,iVar3);
      local_2b8 = CONCAT44(local_2b8._4_4_,param_4[10]);
      (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x1c8))
                (*(longlong **)(param_1 + 0x1d0),*(undefined8 *)(lVar5 + 0xa0),param_4[0xb],
                 *(undefined8 *)(lVar4 + 0xa0));
      goto LAB_141a364c5;
    }
    cVar2 = FResolveRect::IsValid(param_4 + 1);
    plVar8 = *(longlong **)(param_1 + 0x1d0);
    uVar9 = *(undefined8 *)(lVar5 + 0xa0);
    if (cVar2 == '\0') {
      (**(code **)(*plVar8 + 0x178))(plVar8,uVar9,*(undefined8 *)(lVar4 + 0xa0));
      goto LAB_141a364c5;
    }
    iVar10 = param_4[5];
    uVar11 = (ulonglong)(uint)param_4[0xb];
    local_250 = *(undefined8 *)(param_4 + 1);
    local_244 = param_4[3];
    local_240 = param_4[4];
    local_298 = &local_250;
    local_2a0 = (undefined8 *)CONCAT44(local_2a0._4_4_,param_4[10]);
    local_2a8 = *(undefined1 **)(lVar4 + 0xa0);
    local_2b8 = CONCAT44(local_2b8._4_4_,param_4[6]);
    local_248 = 0;
    local_23c = 1;
  }
  local_2b0 = local_2b0 & 0xffffffff00000000;
  (**(code **)(*plVar8 + 0x170))(plVar8,uVar9,uVar11,iVar10);
LAB_141a364c5:
  FRHICommandListBase::~FRHICommandListBase(local_208);
  return;
}



// FUNCTION 141a36510 FUN_141a36510 body=141 status=ok
// SIG undefined FUN_141a36510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a36510(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  (**(code **)(**(longlong **)(param_2 + 0x38) + 0x50))(*(longlong **)(param_2 + 0x38),local_58);
  (**(code **)(**(longlong **)(param_3 + 0x38) + 0x50))(*(longlong **)(param_3 + 0x38),local_40);
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x178))
            (*(longlong **)(param_1 + 0x200),*(undefined8 *)(param_3 + 0x38),
             *(undefined8 *)(param_2 + 0x38));
  if ((*(char *)(param_1 + 0x17c40) != '\0') && (*(longlong *)(param_1 + 0x17c70) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c70) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c70) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 141a365a0 FUN_141a365a0 body=577 status=ok
// SIG undefined FUN_141a365a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141a365a0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  byte bVar9;
  longlong lVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 local_148;
  uint local_144;
  undefined1 local_140 [4];
  undefined4 local_13c [65];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  _guard_xfg_dispatch_icall_nop(local_140,0,0x100);
  pbVar12 = (byte *)(param_3 + 2);
  puVar11 = (undefined8 *)0x0;
  local_144 = (uint)*(byte *)(param_3 + 0x38);
  local_148 = 0;
  puVar13 = local_13c;
  lVar10 = 8;
  do {
    bVar2 = pbVar12[-2];
    uVar5 = 0;
    if ((((bVar2 == 0) && (*pbVar12 == 0)) && (pbVar12[-1] == 1)) &&
       (((pbVar12[1] == 0 && (pbVar12[3] == 0)) && (pbVar12[2] == 1)))) {
      uVar14 = 0;
      uVar8 = 0;
      bVar9 = 1;
    }
    else {
      bVar9 = pbVar12[-1];
      uVar5 = 1;
      uVar14 = (ulonglong)*pbVar12;
      uVar8 = (uint)pbVar12[1];
    }
    puVar13[-1] = uVar5;
    if (bVar2 == 1) {
      uVar5 = 2;
    }
    else if (bVar2 == 2) {
      uVar5 = 4;
    }
    else if (bVar2 == 3) {
      uVar5 = 5;
    }
    else if (bVar2 == 4) {
      uVar5 = 3;
    }
    else {
      uVar5 = 1;
    }
    puVar13[2] = uVar5;
    uVar5 = FUN_141a440d0(bVar9);
    *puVar13 = uVar5;
    uVar5 = FUN_141a440d0(uVar14 & 0xff);
    uVar8 = uVar8 & 0xff;
    puVar13[1] = uVar5;
    if (uVar8 == 1) {
      uVar5 = 2;
    }
    else if (uVar8 == 2) {
      uVar5 = 4;
    }
    else if (uVar8 == 3) {
      uVar5 = 5;
    }
    else if (uVar8 == 4) {
      uVar5 = 3;
    }
    else {
      uVar5 = 1;
    }
    bVar2 = pbVar12[2];
    puVar13[5] = uVar5;
    uVar5 = FUN_141a440d0(bVar2);
    bVar2 = pbVar12[3];
    puVar13[3] = uVar5;
    uVar5 = FUN_141a440d0(bVar2);
    puVar13[4] = uVar5;
    pbVar1 = pbVar12 + 4;
    pbVar12 = pbVar12 + 7;
    *(byte *)(puVar13 + 6) = *pbVar1 & 0xf;
    puVar13 = puVar13 + 8;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  puVar7 = (undefined8 *)operator_new(0x20);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR__scalar_deleting_destructor__144da0d30;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *(undefined2 *)(puVar7 + 2) = 0x100;
    puVar7[3] = 0;
    puVar11 = puVar7;
  }
  plVar3 = (longlong *)puVar11[3];
  plVar4 = *(longlong **)(param_1 + 0x210);
  puVar11[3] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  iVar6 = (**(code **)(*plVar4 + 0xa0))(plVar4,&local_148,puVar11 + 3);
  if (iVar6 < 0) {
    local_158 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar6,
                  "Direct3DDevice->CreateBlendState(&BlendDesc,BlendState->Resource.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11State.cpp"
                  ,0x120);
  }
  *param_2 = puVar11;
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a367f0 FUN_141a367f0 body=218 status=ok
// SIG undefined FUN_141a367f0(void)

longlong *
FUN_141a367f0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)GetCachedBoundShaderState(param_3,param_4,param_7,param_5,param_6,param_8);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = operator_new(0xd0);
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = FUN_141a22000(lVar2,param_3,param_4,param_7,param_5,param_6,param_8,
                            *(undefined8 *)(param_1 + 0x210));
    }
  }
  else {
    lVar3 = *plVar1;
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a368d0 FUN_141a368d0 body=729 status=ok
// SIG undefined FUN_141a368d0(void)

undefined8 * FUN_141a368d0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  longlong local_e8 [2];
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  pcVar10 = (char *)operator_new(0xb0);
  iVar9 = 0;
  pcVar13 = (char *)0x0;
  if (pcVar10 != (char *)0x0) {
    *(undefined ***)pcVar10 = &PTR_FUN_143f3ece8;
    pcVar10[8] = '\0';
    pcVar10[9] = '\0';
    pcVar10[10] = '\0';
    pcVar10[0xb] = '\0';
    pcVar10[0xc] = '\0';
    pcVar10[0xd] = '\0';
    pcVar10[0xe] = '\0';
    pcVar10[0xf] = '\0';
    pcVar10[0x10] = '\0';
    pcVar10[0x11] = '\x01';
    pcVar10[0x18] = '\0';
    pcVar10[0x19] = '\0';
    pcVar10[0x1a] = '\0';
    pcVar10[0x1b] = '\0';
    pcVar10[0x1c] = '\0';
    pcVar10[0x1d] = '\0';
    pcVar10[0x1e] = '\0';
    pcVar10[0x1f] = '\0';
    pcVar10[0x20] = '\0';
    pcVar10[0x21] = '\0';
    pcVar10[0x22] = '\0';
    pcVar10[0x23] = '\0';
    pcVar10[0x24] = '\0';
    pcVar10[0x25] = '\0';
    pcVar10[0x26] = '\0';
    pcVar10[0x27] = '\0';
    pcVar10[0x28] = '\0';
    pcVar10[0x29] = '\0';
    pcVar10[0x2a] = '\0';
    pcVar10[0x2b] = '\0';
    pcVar10[0x30] = '\0';
    pcVar10[0x31] = '\0';
    pcVar10[0x32] = '\0';
    pcVar10[0x33] = '\0';
    pcVar10[0x34] = '\0';
    pcVar10[0x35] = '\0';
    pcVar10[0x36] = '\0';
    pcVar10[0x37] = '\0';
    pcVar10[0x38] = '\0';
    pcVar10[0x39] = '\0';
    pcVar10[0x3a] = '\0';
    pcVar10[0x3b] = '\0';
    pcVar10[0x40] = '\0';
    pcVar10[0x41] = '\0';
    pcVar10[0x42] = '\0';
    pcVar10[0x43] = '\0';
    pcVar10[0x44] = '\0';
    pcVar10[0x45] = '\0';
    pcVar10[0x46] = '\0';
    pcVar10[0x47] = '\0';
    pcVar10[0x48] = '\0';
    pcVar10[0x49] = '\0';
    pcVar10[0x4a] = '\0';
    pcVar10[0x4b] = '\0';
    pcVar10[0x4c] = '\0';
    pcVar10[0x4d] = '\0';
    pcVar10[0x4e] = '\0';
    pcVar10[0x4f] = '\0';
    pcVar10[0x50] = '\0';
    pcVar10[0x51] = '\0';
    pcVar10[0x52] = '\0';
    pcVar10[0x53] = '\0';
    pcVar10[0x54] = '\0';
    pcVar10[0x55] = '\0';
    pcVar10[0x56] = '\0';
    pcVar10[0x57] = '\0';
    pcVar10[0x58] = '\0';
    pcVar10[0x59] = '\0';
    pcVar10[0x5a] = '\0';
    pcVar10[0x5b] = '\0';
    pcVar10[0x5c] = '\0';
    pcVar10[0x5d] = '\0';
    pcVar10[0x5e] = '\0';
    pcVar10[0x5f] = '\0';
    pcVar10[0x60] = '\0';
    pcVar10[0x61] = '\0';
    pcVar10[0x62] = '\0';
    pcVar10[99] = '\0';
    pcVar10[100] = '\0';
    pcVar10[0x65] = '\0';
    pcVar10[0x66] = '\0';
    pcVar10[0x67] = '\0';
    pcVar10[0x68] = '\0';
    pcVar10[0x69] = '\0';
    pcVar10[0x6a] = '\0';
    pcVar10[0x6b] = '\0';
    pcVar10[0x6c] = '\0';
    pcVar10[0x6d] = '\0';
    pcVar10[0x6e] = '\0';
    pcVar10[0x6f] = '\0';
    pcVar10[0x70] = '\0';
    pcVar10[0x71] = '\0';
    pcVar10[0x72] = '\0';
    pcVar10[0x73] = '\0';
    pcVar10[0x74] = '\0';
    pcVar10[0x75] = '\0';
    pcVar10[0x76] = '\0';
    pcVar10[0x77] = '\0';
    pcVar10[0x78] = '\0';
    pcVar10[0x79] = '\0';
    pcVar10[0x7a] = '\0';
    pcVar10[0x7b] = '\0';
    pcVar10[0x7c] = '\0';
    pcVar10[0x7d] = '\0';
    pcVar10[0x7e] = '\0';
    pcVar10[0x7f] = '\0';
    pcVar10[0x80] = '\0';
    pcVar10[0x81] = '\0';
    pcVar10[0x82] = '\0';
    pcVar10[0x83] = '\0';
    pcVar10[0x84] = '\0';
    pcVar10[0x85] = '\0';
    pcVar10[0x86] = '\0';
    pcVar10[0x87] = '\0';
    pcVar10[0x88] = '\0';
    pcVar10[0x89] = '\0';
    pcVar10[0x8a] = '\0';
    pcVar10[0x8b] = '\0';
    pcVar10[0x8c] = '\0';
    pcVar10[0x8d] = '\0';
    pcVar10[0x8e] = '\0';
    pcVar10[0x8f] = '\0';
    pcVar10[0x90] = '\0';
    pcVar10[0x91] = '\0';
    pcVar10[0x92] = '\0';
    pcVar10[0x93] = '\0';
    pcVar10[0x94] = '\0';
    pcVar10[0x95] = '\0';
    pcVar10[0x96] = '\0';
    pcVar10[0x97] = '\0';
    pcVar10[0x98] = '\0';
    pcVar10[0x99] = '\0';
    pcVar10[0x9a] = '\0';
    pcVar10[0x9b] = '\0';
    pcVar10[0x9c] = '\0';
    pcVar10[0x9d] = '\0';
    pcVar10[0x9e] = '\0';
    pcVar10[0x9f] = '\0';
    *(undefined ***)pcVar10 = &PTR__scalar_deleting_destructor__144da0d70;
    pcVar10[0xa8] = '\0';
    pcVar10[0xa9] = '\0';
    pcVar10[0xaa] = '\0';
    pcVar10[0xab] = '\0';
    pcVar10[0xac] = '\0';
    pcVar10[0xad] = '\0';
    pcVar10[0xae] = '\0';
    pcVar10[0xaf] = '\0';
    pcVar13 = pcVar10;
  }
  FArchive::FArchive(&local_d8);
  local_48 = 0;
  local_d8 = &PTR_FUN_143f4a3a0;
  local_38 = 0x7fffffffffffffff;
  local_40 = param_3;
  FArchive::SetIsLoading(&local_d8,1);
  FArchive::SetIsPersistent(&local_d8,1);
  if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
    (*(code *)local_d8[10])(&local_d8,pcVar13 + 0x38,4);
    if ((local_af & 0x10) != 0) {
      FArchive::ByteSwap(&local_d8,pcVar13 + 0x38,4);
    }
  }
  else {
    *(undefined4 *)(pcVar13 + 0x38) = *(undefined4 *)*local_d0;
    *local_d0 = *local_d0 + 4;
  }
  FUN_1408bda20(&local_d8,pcVar13 + 0x40);
  FUN_1408bda20(&local_d8,pcVar13 + 0x50);
  FUN_1408bda20(&local_d8,pcVar13 + 0x60);
  FUN_1408bda20(&local_d8,pcVar13 + 0x70);
  FUN_1408bda20(&local_d8,pcVar13 + 0x80);
  lVar5 = *param_3;
  uVar4 = *(uint *)(param_3 + 1);
  iVar14 = (int)local_48;
  if (3 < uVar4) {
    iVar9 = *(int *)(lVar5 + -4 + (longlong)(int)uVar4);
  }
  lVar3 = lVar5 + (int)uVar4;
  piVar1 = (int *)(lVar3 - 4);
  iVar12 = 0;
  if (3 < uVar4) {
    iVar12 = *piVar1;
  }
  for (piVar11 = (int *)(lVar3 - iVar12); pcVar10 = (char *)0x0, piVar11 < piVar1;
      piVar11 = (int *)((longlong)piVar11 + (ulonglong)*(uint *)((longlong)piVar11 + 1) + 5)) {
    if (((char)*piVar11 == 'p') &&
       (pcVar10 = (char *)((longlong)piVar11 + 5), *(uint *)((longlong)piVar11 + 1) == 5)) break;
  }
  plVar2 = (longlong *)(pcVar13 + 0xa8);
  pcVar13[0xa0] = *pcVar10;
  plVar6 = (longlong *)*plVar2;
  plVar7 = *(longlong **)(param_1 + 0x210);
  *plVar2 = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  iVar9 = (**(code **)(*plVar7 + 0x90))(plVar7,iVar14 + lVar5,(uVar4 - iVar14) - iVar9,0,plVar2);
  if (iVar9 < 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x210);
    GetD3D11ErrorString(local_e8,iVar9,uVar8);
    FUN_141a447e0(iVar9,
                  "Direct3DDevice->CreateComputeShader( (void*)CodePtr, CodeSize, NULL, Shader->Resource.GetInitReference() )"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                  ,0xc5,uVar8);
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
  }
  *param_2 = pcVar13;
  LOCK();
  *(int *)(pcVar13 + 8) = *(int *)(pcVar13 + 8) + 1;
  UNLOCK();
  FArchive::~FArchive(&local_d8);
  return param_2;
}



// FUNCTION 141a36bb0 FUN_141a36bb0 body=577 status=ok
// SIG undefined FUN_141a36bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141a36bb0(longlong param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  char local_58;
  char local_57;
  undefined2 local_56;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  puVar8 = (undefined8 *)operator_new(0x28);
  puVar11 = (undefined8 *)0x0;
  puVar9 = puVar11;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR__scalar_deleting_destructor__144da0d40;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *(undefined2 *)(puVar8 + 2) = 0x100;
    puVar8[3] = 0;
    *(undefined4 *)(puVar8 + 4) = 0;
    puVar9 = puVar8;
  }
  local_56 = 0;
  uStack_40 = 0;
  if ((param_3[1] == '\a') && (*param_3 == '\0')) {
    local_68 = 0;
  }
  else {
    local_68 = 1;
  }
  local_64 = (uint)(*param_3 != '\0');
  local_60 = FUN_141a44170(param_3[1]);
  cVar12 = param_3[7];
  if ((param_3[2] == '\0') && (cVar12 == '\0')) {
    local_5c = SUB84(puVar11,0);
  }
  else {
    local_5c = 1;
  }
  local_58 = param_3[0xc];
  cVar1 = param_3[0xd];
  local_57 = cVar1;
  uStack_48 = FUN_141a44170(param_3[3]);
  cVar13 = param_3[4];
  local_54 = FUN_141a441e0(cVar13);
  cVar14 = param_3[5];
  uStack_50 = FUN_141a441e0(cVar14);
  cVar2 = param_3[6];
  uStack_4c = FUN_141a441e0(cVar2);
  if (cVar12 == '\0') {
    local_44 = local_54;
    uStack_40 = CONCAT44(uStack_4c,uStack_50);
    uStack_38 = uStack_48;
  }
  else {
    uStack_38 = FUN_141a44170(param_3[8]);
    local_44 = FUN_141a441e0(param_3[9]);
    uVar6 = FUN_141a441e0(param_3[10]);
    uStack_40 = CONCAT44(uStack_40._4_4_,uVar6);
    uVar6 = FUN_141a441e0(param_3[0xb]);
    uStack_40 = CONCAT44(uVar6,(undefined4)uStack_40);
  }
  if (((((cVar13 == '\0') && (cVar14 == '\0')) && (cVar2 == '\0')) &&
      ((param_3[9] == '\0' && (param_3[10] == '\0')))) && (param_3[0xb] == '\0')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((cVar1 == '\0') || (bVar5)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  cVar12 = *param_3;
  uVar10 = (uint)puVar11;
  *(uint *)(puVar9 + 4) = uVar10;
  if (cVar12 != '\0') {
    uVar10 = 2;
    *(undefined4 *)(puVar9 + 4) = 2;
  }
  if (bVar5) {
    *(uint *)(puVar9 + 4) = uVar10 | 0x20;
  }
  plVar3 = (longlong *)puVar9[3];
  plVar4 = *(longlong **)(param_1 + 0x210);
  puVar9[3] = puVar11;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  iVar7 = (**(code **)(*plVar4 + 0xa8))(plVar4,&local_68,puVar9 + 3);
  if (iVar7 < 0) {
    local_78 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar7,
                  "Direct3DDevice->CreateDepthStencilState(&DepthStencilDesc,DepthStencilState->Resource.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11State.cpp"
                  ,0xfe);
  }
  *param_2 = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a36e00 FUN_141a36e00 body=729 status=ok
// SIG undefined FUN_141a36e00(void)

undefined8 * FUN_141a36e00(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  longlong local_e8 [2];
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  pcVar10 = (char *)operator_new(0xa8);
  iVar9 = 0;
  pcVar13 = (char *)0x0;
  if (pcVar10 != (char *)0x0) {
    *(undefined ***)pcVar10 = &PTR_FUN_143f3ece8;
    pcVar10[8] = '\0';
    pcVar10[9] = '\0';
    pcVar10[10] = '\0';
    pcVar10[0xb] = '\0';
    pcVar10[0xc] = '\0';
    pcVar10[0xd] = '\0';
    pcVar10[0xe] = '\0';
    pcVar10[0xf] = '\0';
    pcVar10[0x10] = '\0';
    pcVar10[0x11] = '\x01';
    pcVar10[0x18] = '\0';
    pcVar10[0x19] = '\0';
    pcVar10[0x1a] = '\0';
    pcVar10[0x1b] = '\0';
    pcVar10[0x1c] = '\0';
    pcVar10[0x1d] = '\0';
    pcVar10[0x1e] = '\0';
    pcVar10[0x1f] = '\0';
    pcVar10[0x20] = '\0';
    pcVar10[0x21] = '\0';
    pcVar10[0x22] = '\0';
    pcVar10[0x23] = '\0';
    pcVar10[0x24] = '\0';
    pcVar10[0x25] = '\0';
    pcVar10[0x26] = '\0';
    pcVar10[0x27] = '\0';
    pcVar10[0x28] = '\0';
    pcVar10[0x29] = '\0';
    pcVar10[0x2a] = '\0';
    pcVar10[0x2b] = '\0';
    pcVar10[0x30] = '\0';
    pcVar10[0x31] = '\0';
    pcVar10[0x32] = '\0';
    pcVar10[0x33] = '\0';
    pcVar10[0x38] = '\0';
    pcVar10[0x39] = '\0';
    pcVar10[0x3a] = '\0';
    pcVar10[0x3b] = '\0';
    pcVar10[0x3c] = '\0';
    pcVar10[0x3d] = '\0';
    pcVar10[0x3e] = '\0';
    pcVar10[0x3f] = '\0';
    pcVar10[0x40] = '\0';
    pcVar10[0x41] = '\0';
    pcVar10[0x42] = '\0';
    pcVar10[0x43] = '\0';
    pcVar10[0x44] = '\0';
    pcVar10[0x45] = '\0';
    pcVar10[0x46] = '\0';
    pcVar10[0x47] = '\0';
    pcVar10[0x48] = '\0';
    pcVar10[0x49] = '\0';
    pcVar10[0x4a] = '\0';
    pcVar10[0x4b] = '\0';
    pcVar10[0x4c] = '\0';
    pcVar10[0x4d] = '\0';
    pcVar10[0x4e] = '\0';
    pcVar10[0x4f] = '\0';
    pcVar10[0x50] = '\0';
    pcVar10[0x51] = '\0';
    pcVar10[0x52] = '\0';
    pcVar10[0x53] = '\0';
    pcVar10[0x54] = '\0';
    pcVar10[0x55] = '\0';
    pcVar10[0x56] = '\0';
    pcVar10[0x57] = '\0';
    pcVar10[0x58] = '\0';
    pcVar10[0x59] = '\0';
    pcVar10[0x5a] = '\0';
    pcVar10[0x5b] = '\0';
    pcVar10[0x5c] = '\0';
    pcVar10[0x5d] = '\0';
    pcVar10[0x5e] = '\0';
    pcVar10[0x5f] = '\0';
    pcVar10[0x60] = '\0';
    pcVar10[0x61] = '\0';
    pcVar10[0x62] = '\0';
    pcVar10[99] = '\0';
    pcVar10[100] = '\0';
    pcVar10[0x65] = '\0';
    pcVar10[0x66] = '\0';
    pcVar10[0x67] = '\0';
    pcVar10[0x68] = '\0';
    pcVar10[0x69] = '\0';
    pcVar10[0x6a] = '\0';
    pcVar10[0x6b] = '\0';
    pcVar10[0x6c] = '\0';
    pcVar10[0x6d] = '\0';
    pcVar10[0x6e] = '\0';
    pcVar10[0x6f] = '\0';
    pcVar10[0x70] = '\0';
    pcVar10[0x71] = '\0';
    pcVar10[0x72] = '\0';
    pcVar10[0x73] = '\0';
    pcVar10[0x74] = '\0';
    pcVar10[0x75] = '\0';
    pcVar10[0x76] = '\0';
    pcVar10[0x77] = '\0';
    pcVar10[0x78] = '\0';
    pcVar10[0x79] = '\0';
    pcVar10[0x7a] = '\0';
    pcVar10[0x7b] = '\0';
    pcVar10[0x7c] = '\0';
    pcVar10[0x7d] = '\0';
    pcVar10[0x7e] = '\0';
    pcVar10[0x7f] = '\0';
    pcVar10[0x80] = '\0';
    pcVar10[0x81] = '\0';
    pcVar10[0x82] = '\0';
    pcVar10[0x83] = '\0';
    pcVar10[0x84] = '\0';
    pcVar10[0x85] = '\0';
    pcVar10[0x86] = '\0';
    pcVar10[0x87] = '\0';
    pcVar10[0x88] = '\0';
    pcVar10[0x89] = '\0';
    pcVar10[0x8a] = '\0';
    pcVar10[0x8b] = '\0';
    pcVar10[0x8c] = '\0';
    pcVar10[0x8d] = '\0';
    pcVar10[0x8e] = '\0';
    pcVar10[0x8f] = '\0';
    pcVar10[0x90] = '\0';
    pcVar10[0x91] = '\0';
    pcVar10[0x92] = '\0';
    pcVar10[0x93] = '\0';
    pcVar10[0x94] = '\0';
    pcVar10[0x95] = '\0';
    pcVar10[0x96] = '\0';
    pcVar10[0x97] = '\0';
    *(undefined ***)pcVar10 = &PTR_FUN_144da0d68;
    pcVar10[0xa0] = '\0';
    pcVar10[0xa1] = '\0';
    pcVar10[0xa2] = '\0';
    pcVar10[0xa3] = '\0';
    pcVar10[0xa4] = '\0';
    pcVar10[0xa5] = '\0';
    pcVar10[0xa6] = '\0';
    pcVar10[0xa7] = '\0';
    pcVar13 = pcVar10;
  }
  FArchive::FArchive(&local_d8);
  local_48 = 0;
  local_d8 = &PTR_FUN_143f4a3a0;
  local_38 = 0x7fffffffffffffff;
  local_40 = param_3;
  FArchive::SetIsLoading(&local_d8,1);
  FArchive::SetIsPersistent(&local_d8,1);
  if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
    (*(code *)local_d8[10])(&local_d8,pcVar13 + 0x30,4);
    if ((local_af & 0x10) != 0) {
      FArchive::ByteSwap(&local_d8,pcVar13 + 0x30,4);
    }
  }
  else {
    *(undefined4 *)(pcVar13 + 0x30) = *(undefined4 *)*local_d0;
    *local_d0 = *local_d0 + 4;
  }
  FUN_1408bda20(&local_d8,pcVar13 + 0x38);
  FUN_1408bda20(&local_d8,pcVar13 + 0x48);
  FUN_1408bda20(&local_d8,pcVar13 + 0x58);
  FUN_1408bda20(&local_d8,pcVar13 + 0x68);
  FUN_1408bda20(&local_d8,pcVar13 + 0x78);
  lVar5 = *param_3;
  uVar4 = *(uint *)(param_3 + 1);
  iVar14 = (int)local_48;
  if (3 < uVar4) {
    iVar9 = *(int *)(lVar5 + -4 + (longlong)(int)uVar4);
  }
  lVar3 = lVar5 + (int)uVar4;
  piVar1 = (int *)(lVar3 - 4);
  iVar12 = 0;
  if (3 < uVar4) {
    iVar12 = *piVar1;
  }
  for (piVar11 = (int *)(lVar3 - iVar12); pcVar10 = (char *)0x0, piVar11 < piVar1;
      piVar11 = (int *)((longlong)piVar11 + (ulonglong)*(uint *)((longlong)piVar11 + 1) + 5)) {
    if (((char)*piVar11 == 'p') &&
       (pcVar10 = (char *)((longlong)piVar11 + 5), *(uint *)((longlong)piVar11 + 1) == 5)) break;
  }
  plVar2 = (longlong *)(pcVar13 + 0xa0);
  pcVar13[0x98] = *pcVar10;
  plVar6 = (longlong *)*plVar2;
  plVar7 = *(longlong **)(param_1 + 0x210);
  *plVar2 = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  iVar9 = (**(code **)(*plVar7 + 0x88))(plVar7,iVar14 + lVar5,(uVar4 - iVar14) - iVar9,0,plVar2);
  if (iVar9 < 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x210);
    GetD3D11ErrorString(local_e8,iVar9,uVar8);
    FUN_141a447e0(iVar9,
                  "Direct3DDevice->CreateDomainShader( (void*)CodePtr, CodeSize, NULL, Shader->Resource.GetInitReference() )"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                  ,0xa1,uVar8);
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
  }
  *param_2 = pcVar13;
  LOCK();
  *(int *)(pcVar13 + 8) = *(int *)(pcVar13 + 8) + 1;
  UNLOCK();
  FArchive::~FArchive(&local_d8);
  return param_2;
}



// FUNCTION 141a370e0 FUN_141a370e0 body=126 status=ok
// SIG undefined FUN_141a370e0(void)

undefined8 * FUN_141a370e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *param_3;
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR_FUN_144da0e80;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[3] = uVar1;
    *(undefined4 *)(puVar2 + 4) = DAT_1464aaa90;
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a37160 FUN_141a37160 body=726 status=ok
// SIG undefined FUN_141a37160(void)

undefined8 * FUN_141a37160(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  longlong local_e8 [2];
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  pcVar10 = (char *)operator_new(0xa8);
  iVar9 = 0;
  pcVar13 = (char *)0x0;
  if (pcVar10 != (char *)0x0) {
    *(undefined ***)pcVar10 = &PTR_FUN_143f3ece8;
    pcVar10[8] = '\0';
    pcVar10[9] = '\0';
    pcVar10[10] = '\0';
    pcVar10[0xb] = '\0';
    pcVar10[0xc] = '\0';
    pcVar10[0xd] = '\0';
    pcVar10[0xe] = '\0';
    pcVar10[0xf] = '\0';
    pcVar10[0x10] = '\0';
    pcVar10[0x11] = '\x01';
    pcVar10[0x18] = '\0';
    pcVar10[0x19] = '\0';
    pcVar10[0x1a] = '\0';
    pcVar10[0x1b] = '\0';
    pcVar10[0x1c] = '\0';
    pcVar10[0x1d] = '\0';
    pcVar10[0x1e] = '\0';
    pcVar10[0x1f] = '\0';
    pcVar10[0x20] = '\0';
    pcVar10[0x21] = '\0';
    pcVar10[0x22] = '\0';
    pcVar10[0x23] = '\0';
    pcVar10[0x24] = '\0';
    pcVar10[0x25] = '\0';
    pcVar10[0x26] = '\0';
    pcVar10[0x27] = '\0';
    pcVar10[0x28] = '\0';
    pcVar10[0x29] = '\0';
    pcVar10[0x2a] = '\0';
    pcVar10[0x2b] = '\0';
    pcVar10[0x30] = '\0';
    pcVar10[0x31] = '\0';
    pcVar10[0x32] = '\0';
    pcVar10[0x33] = '\0';
    pcVar10[0x38] = '\0';
    pcVar10[0x39] = '\0';
    pcVar10[0x3a] = '\0';
    pcVar10[0x3b] = '\0';
    pcVar10[0x3c] = '\0';
    pcVar10[0x3d] = '\0';
    pcVar10[0x3e] = '\0';
    pcVar10[0x3f] = '\0';
    pcVar10[0x40] = '\0';
    pcVar10[0x41] = '\0';
    pcVar10[0x42] = '\0';
    pcVar10[0x43] = '\0';
    pcVar10[0x44] = '\0';
    pcVar10[0x45] = '\0';
    pcVar10[0x46] = '\0';
    pcVar10[0x47] = '\0';
    pcVar10[0x48] = '\0';
    pcVar10[0x49] = '\0';
    pcVar10[0x4a] = '\0';
    pcVar10[0x4b] = '\0';
    pcVar10[0x4c] = '\0';
    pcVar10[0x4d] = '\0';
    pcVar10[0x4e] = '\0';
    pcVar10[0x4f] = '\0';
    pcVar10[0x50] = '\0';
    pcVar10[0x51] = '\0';
    pcVar10[0x52] = '\0';
    pcVar10[0x53] = '\0';
    pcVar10[0x54] = '\0';
    pcVar10[0x55] = '\0';
    pcVar10[0x56] = '\0';
    pcVar10[0x57] = '\0';
    pcVar10[0x58] = '\0';
    pcVar10[0x59] = '\0';
    pcVar10[0x5a] = '\0';
    pcVar10[0x5b] = '\0';
    pcVar10[0x5c] = '\0';
    pcVar10[0x5d] = '\0';
    pcVar10[0x5e] = '\0';
    pcVar10[0x5f] = '\0';
    pcVar10[0x60] = '\0';
    pcVar10[0x61] = '\0';
    pcVar10[0x62] = '\0';
    pcVar10[99] = '\0';
    pcVar10[100] = '\0';
    pcVar10[0x65] = '\0';
    pcVar10[0x66] = '\0';
    pcVar10[0x67] = '\0';
    pcVar10[0x68] = '\0';
    pcVar10[0x69] = '\0';
    pcVar10[0x6a] = '\0';
    pcVar10[0x6b] = '\0';
    pcVar10[0x6c] = '\0';
    pcVar10[0x6d] = '\0';
    pcVar10[0x6e] = '\0';
    pcVar10[0x6f] = '\0';
    pcVar10[0x70] = '\0';
    pcVar10[0x71] = '\0';
    pcVar10[0x72] = '\0';
    pcVar10[0x73] = '\0';
    pcVar10[0x74] = '\0';
    pcVar10[0x75] = '\0';
    pcVar10[0x76] = '\0';
    pcVar10[0x77] = '\0';
    pcVar10[0x78] = '\0';
    pcVar10[0x79] = '\0';
    pcVar10[0x7a] = '\0';
    pcVar10[0x7b] = '\0';
    pcVar10[0x7c] = '\0';
    pcVar10[0x7d] = '\0';
    pcVar10[0x7e] = '\0';
    pcVar10[0x7f] = '\0';
    pcVar10[0x80] = '\0';
    pcVar10[0x81] = '\0';
    pcVar10[0x82] = '\0';
    pcVar10[0x83] = '\0';
    pcVar10[0x84] = '\0';
    pcVar10[0x85] = '\0';
    pcVar10[0x86] = '\0';
    pcVar10[0x87] = '\0';
    pcVar10[0x88] = '\0';
    pcVar10[0x89] = '\0';
    pcVar10[0x8a] = '\0';
    pcVar10[0x8b] = '\0';
    pcVar10[0x8c] = '\0';
    pcVar10[0x8d] = '\0';
    pcVar10[0x8e] = '\0';
    pcVar10[0x8f] = '\0';
    pcVar10[0x90] = '\0';
    pcVar10[0x91] = '\0';
    pcVar10[0x92] = '\0';
    pcVar10[0x93] = '\0';
    pcVar10[0x94] = '\0';
    pcVar10[0x95] = '\0';
    pcVar10[0x96] = '\0';
    pcVar10[0x97] = '\0';
    *(undefined ***)pcVar10 = &PTR_FUN_144da0d68;
    pcVar10[0xa0] = '\0';
    pcVar10[0xa1] = '\0';
    pcVar10[0xa2] = '\0';
    pcVar10[0xa3] = '\0';
    pcVar10[0xa4] = '\0';
    pcVar10[0xa5] = '\0';
    pcVar10[0xa6] = '\0';
    pcVar10[0xa7] = '\0';
    pcVar13 = pcVar10;
  }
  FArchive::FArchive(&local_d8);
  local_48 = 0;
  local_d8 = &PTR_FUN_143f4a3a0;
  local_38 = 0x7fffffffffffffff;
  local_40 = param_3;
  FArchive::SetIsLoading(&local_d8,1);
  FArchive::SetIsPersistent(&local_d8,1);
  if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
    (*(code *)local_d8[10])(&local_d8,pcVar13 + 0x30,4);
    if ((local_af & 0x10) != 0) {
      FArchive::ByteSwap(&local_d8,pcVar13 + 0x30,4);
    }
  }
  else {
    *(undefined4 *)(pcVar13 + 0x30) = *(undefined4 *)*local_d0;
    *local_d0 = *local_d0 + 4;
  }
  FUN_1408bda20(&local_d8,pcVar13 + 0x38);
  FUN_1408bda20(&local_d8,pcVar13 + 0x48);
  FUN_1408bda20(&local_d8,pcVar13 + 0x58);
  FUN_1408bda20(&local_d8,pcVar13 + 0x68);
  FUN_1408bda20(&local_d8,pcVar13 + 0x78);
  lVar5 = *param_3;
  uVar4 = *(uint *)(param_3 + 1);
  iVar14 = (int)local_48;
  if (3 < uVar4) {
    iVar9 = *(int *)(lVar5 + -4 + (longlong)(int)uVar4);
  }
  lVar3 = lVar5 + (int)uVar4;
  piVar1 = (int *)(lVar3 - 4);
  iVar12 = 0;
  if (3 < uVar4) {
    iVar12 = *piVar1;
  }
  for (piVar11 = (int *)(lVar3 - iVar12); pcVar10 = (char *)0x0, piVar11 < piVar1;
      piVar11 = (int *)((longlong)piVar11 + (ulonglong)*(uint *)((longlong)piVar11 + 1) + 5)) {
    if (((char)*piVar11 == 'p') &&
       (pcVar10 = (char *)((longlong)piVar11 + 5), *(uint *)((longlong)piVar11 + 1) == 5)) break;
  }
  plVar2 = (longlong *)(pcVar13 + 0xa0);
  pcVar13[0x98] = *pcVar10;
  plVar6 = (longlong *)*plVar2;
  plVar7 = *(longlong **)(param_1 + 0x210);
  *plVar2 = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  iVar9 = (**(code **)(*plVar7 + 0x68))(plVar7,iVar14 + lVar5,(uVar4 - iVar14) - iVar9,0,plVar2);
  if (iVar9 < 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x210);
    GetD3D11ErrorString(local_e8,iVar9,uVar8);
    FUN_141a447e0(iVar9,
                  "Direct3DDevice->CreateGeometryShader( (void*)CodePtr, CodeSize, NULL, Shader->Resource.GetInitReference() )"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                  ,0x46,uVar8);
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
  }
  *param_2 = pcVar13;
  LOCK();
  *(int *)(pcVar13 + 8) = *(int *)(pcVar13 + 8) + 1;
  UNLOCK();
  FArchive::~FArchive(&local_d8);
  return param_2;
}



// FUNCTION 141a37440 FUN_141a37440 body=939 status=ok
// SIG undefined FUN_141a37440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141a37440(longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
             undefined4 param_5,undefined8 param_6,int param_7)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  longlong lVar12;
  char *pcVar13;
  undefined1 auStack_3198 [32];
  undefined8 local_3178;
  undefined8 local_3170;
  undefined4 local_3168;
  int local_3160;
  undefined8 local_3158;
  longlong *local_3150;
  undefined8 local_3148;
  ulonglong local_3140;
  longlong local_3138;
  longlong local_3130;
  undefined8 *local_3128;
  longlong local_3120 [3];
  undefined **local_3108;
  longlong *local_3100;
  byte local_30df;
  undefined8 local_3078;
  longlong *local_3070;
  undefined8 local_3068;
  undefined8 uStack_3060;
  undefined4 local_3058;
  undefined1 local_3054 [12284];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x141a3745f;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3198;
  local_3148 = param_6;
  local_3130 = param_1;
  local_3128 = param_2;
  pcVar9 = (char *)operator_new(0xa8);
  iVar8 = 0;
  pcVar13 = (char *)0x0;
  if (pcVar9 != (char *)0x0) {
    *(undefined ***)pcVar9 = &PTR_FUN_143f3ece8;
    pcVar9[8] = '\0';
    pcVar9[9] = '\0';
    pcVar9[10] = '\0';
    pcVar9[0xb] = '\0';
    pcVar9[0xc] = '\0';
    pcVar9[0xd] = '\0';
    pcVar9[0xe] = '\0';
    pcVar9[0xf] = '\0';
    pcVar9[0x10] = '\0';
    pcVar9[0x11] = '\x01';
    pcVar9[0x18] = '\0';
    pcVar9[0x19] = '\0';
    pcVar9[0x1a] = '\0';
    pcVar9[0x1b] = '\0';
    pcVar9[0x1c] = '\0';
    pcVar9[0x1d] = '\0';
    pcVar9[0x1e] = '\0';
    pcVar9[0x1f] = '\0';
    pcVar9[0x20] = '\0';
    pcVar9[0x21] = '\0';
    pcVar9[0x22] = '\0';
    pcVar9[0x23] = '\0';
    pcVar9[0x24] = '\0';
    pcVar9[0x25] = '\0';
    pcVar9[0x26] = '\0';
    pcVar9[0x27] = '\0';
    pcVar9[0x28] = '\0';
    pcVar9[0x29] = '\0';
    pcVar9[0x2a] = '\0';
    pcVar9[0x2b] = '\0';
    pcVar9[0x30] = '\0';
    pcVar9[0x31] = '\0';
    pcVar9[0x32] = '\0';
    pcVar9[0x33] = '\0';
    pcVar9[0x38] = '\0';
    pcVar9[0x39] = '\0';
    pcVar9[0x3a] = '\0';
    pcVar9[0x3b] = '\0';
    pcVar9[0x3c] = '\0';
    pcVar9[0x3d] = '\0';
    pcVar9[0x3e] = '\0';
    pcVar9[0x3f] = '\0';
    pcVar9[0x40] = '\0';
    pcVar9[0x41] = '\0';
    pcVar9[0x42] = '\0';
    pcVar9[0x43] = '\0';
    pcVar9[0x44] = '\0';
    pcVar9[0x45] = '\0';
    pcVar9[0x46] = '\0';
    pcVar9[0x47] = '\0';
    pcVar9[0x48] = '\0';
    pcVar9[0x49] = '\0';
    pcVar9[0x4a] = '\0';
    pcVar9[0x4b] = '\0';
    pcVar9[0x4c] = '\0';
    pcVar9[0x4d] = '\0';
    pcVar9[0x4e] = '\0';
    pcVar9[0x4f] = '\0';
    pcVar9[0x50] = '\0';
    pcVar9[0x51] = '\0';
    pcVar9[0x52] = '\0';
    pcVar9[0x53] = '\0';
    pcVar9[0x54] = '\0';
    pcVar9[0x55] = '\0';
    pcVar9[0x56] = '\0';
    pcVar9[0x57] = '\0';
    pcVar9[0x58] = '\0';
    pcVar9[0x59] = '\0';
    pcVar9[0x5a] = '\0';
    pcVar9[0x5b] = '\0';
    pcVar9[0x5c] = '\0';
    pcVar9[0x5d] = '\0';
    pcVar9[0x5e] = '\0';
    pcVar9[0x5f] = '\0';
    pcVar9[0x60] = '\0';
    pcVar9[0x61] = '\0';
    pcVar9[0x62] = '\0';
    pcVar9[99] = '\0';
    pcVar9[100] = '\0';
    pcVar9[0x65] = '\0';
    pcVar9[0x66] = '\0';
    pcVar9[0x67] = '\0';
    pcVar9[0x68] = '\0';
    pcVar9[0x69] = '\0';
    pcVar9[0x6a] = '\0';
    pcVar9[0x6b] = '\0';
    pcVar9[0x6c] = '\0';
    pcVar9[0x6d] = '\0';
    pcVar9[0x6e] = '\0';
    pcVar9[0x6f] = '\0';
    pcVar9[0x70] = '\0';
    pcVar9[0x71] = '\0';
    pcVar9[0x72] = '\0';
    pcVar9[0x73] = '\0';
    pcVar9[0x74] = '\0';
    pcVar9[0x75] = '\0';
    pcVar9[0x76] = '\0';
    pcVar9[0x77] = '\0';
    pcVar9[0x78] = '\0';
    pcVar9[0x79] = '\0';
    pcVar9[0x7a] = '\0';
    pcVar9[0x7b] = '\0';
    pcVar9[0x7c] = '\0';
    pcVar9[0x7d] = '\0';
    pcVar9[0x7e] = '\0';
    pcVar9[0x7f] = '\0';
    pcVar9[0x80] = '\0';
    pcVar9[0x81] = '\0';
    pcVar9[0x82] = '\0';
    pcVar9[0x83] = '\0';
    pcVar9[0x84] = '\0';
    pcVar9[0x85] = '\0';
    pcVar9[0x86] = '\0';
    pcVar9[0x87] = '\0';
    pcVar9[0x88] = '\0';
    pcVar9[0x89] = '\0';
    pcVar9[0x8a] = '\0';
    pcVar9[0x8b] = '\0';
    pcVar9[0x8c] = '\0';
    pcVar9[0x8d] = '\0';
    pcVar9[0x8e] = '\0';
    pcVar9[0x8f] = '\0';
    pcVar9[0x90] = '\0';
    pcVar9[0x91] = '\0';
    pcVar9[0x92] = '\0';
    pcVar9[0x93] = '\0';
    pcVar9[0x94] = '\0';
    pcVar9[0x95] = '\0';
    pcVar9[0x96] = '\0';
    pcVar9[0x97] = '\0';
    *(undefined ***)pcVar9 = &PTR_FUN_144da0d68;
    pcVar9[0xa0] = '\0';
    pcVar9[0xa1] = '\0';
    pcVar9[0xa2] = '\0';
    pcVar9[0xa3] = '\0';
    pcVar9[0xa4] = '\0';
    pcVar9[0xa5] = '\0';
    pcVar9[0xa6] = '\0';
    pcVar9[0xa7] = '\0';
    pcVar13 = pcVar9;
  }
  FArchive::FArchive(&local_3108);
  local_3078 = 0;
  local_3108 = &PTR_FUN_143f4a3a0;
  local_3068 = 0x7fffffffffffffff;
  local_3070 = param_3;
  FArchive::SetIsLoading(&local_3108,1);
  FArchive::SetIsPersistent(&local_3108,1);
  if ((undefined4 *)local_3100[1] < (undefined4 *)*local_3100 + 1) {
    (*(code *)local_3108[10])(&local_3108,pcVar13 + 0x30,4);
    if ((local_30df & 0x10) != 0) {
      FArchive::ByteSwap(&local_3108,pcVar13 + 0x30,4);
    }
  }
  else {
    *(undefined4 *)(pcVar13 + 0x30) = *(undefined4 *)*local_3100;
    *local_3100 = *local_3100 + 4;
  }
  FUN_1408bda20(&local_3108,pcVar13 + 0x38);
  FUN_1408bda20(&local_3108,pcVar13 + 0x48);
  FUN_1408bda20(&local_3108,pcVar13 + 0x58);
  FUN_1408bda20(&local_3108,pcVar13 + 0x68);
  FUN_1408bda20(&local_3108,pcVar13 + 0x78);
  uVar3 = *(uint *)(param_3 + 1);
  local_3138 = (longlong)(int)local_3078 + *param_3;
  if (3 < uVar3) {
    iVar8 = *(int *)((longlong)(int)uVar3 + -4 + *param_3);
  }
  lVar12 = (longlong)*(int *)(param_4 + 0x300);
  local_3140 = (ulonglong)((uVar3 - (int)local_3078) - iVar8);
  local_3160 = -1;
  if (param_7 != -1) {
    local_3160 = param_7;
  }
  if (0 < lVar12) {
    puVar11 = (undefined4 *)(param_4 + 0x10);
    do {
      *(undefined4 *)((longlong)&local_3068 + -param_4 + (longlong)puVar11) = puVar11[-4];
      *(undefined8 *)(((longlong)&uStack_3060 - param_4) + (longlong)puVar11) =
           *(undefined8 *)(puVar11 + -2);
      *(undefined4 *)((longlong)&local_3058 + -param_4 + (longlong)puVar11) = *puVar11;
      (local_3054 + -param_4)[(longlong)puVar11] = *(undefined1 *)(puVar11 + 1);
      (local_3054 + (1 - param_4))[(longlong)puVar11] = *(undefined1 *)((longlong)puVar11 + 5);
      (local_3054 + (2 - param_4))[(longlong)puVar11] = *(undefined1 *)((longlong)puVar11 + 6);
      puVar11 = puVar11 + 6;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  plVar4 = *(longlong **)(param_1 + 0x210);
  plVar2 = (longlong *)(pcVar13 + 0xa0);
  plVar5 = (longlong *)*plVar2;
  *plVar2 = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  local_3158 = 0;
  local_3168 = param_5;
  local_3170 = local_3148;
  local_3178 = CONCAT44(local_3178._4_4_,*(undefined4 *)(param_4 + 0x300));
  local_3150 = plVar2;
  iVar8 = (**(code **)(*plVar4 + 0x70))(plVar4,local_3138,local_3140,&local_3058);
  if (iVar8 < 0) {
    uVar6 = *(undefined8 *)(local_3130 + 0x210);
    GetD3D11ErrorString(local_3120,iVar8,uVar6);
    local_3178 = uVar6;
    FUN_141a447e0(iVar8,
                  "Direct3DDevice->CreateGeometryShaderWithStreamOutput( (void*)CodePtr, CodeSize, StreamOutEntries, ElementList.Num(), Strides, NumStrides, D3DRasterizedStream, NULL, Shader->Resource.GetInitReference() )"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                  ,0x76);
    if (local_3120[0] != 0) {
      FMemory::Free();
    }
  }
  puVar7 = local_3128;
  iVar8 = 0;
  lVar12 = *param_3 + (longlong)(int)*(uint *)(param_3 + 1);
  piVar1 = (int *)(lVar12 - 4);
  if (3 < *(uint *)(param_3 + 1)) {
    iVar8 = *piVar1;
  }
  for (piVar10 = (int *)(lVar12 - iVar8); pcVar9 = (char *)0x0, piVar10 < piVar1;
      piVar10 = (int *)((longlong)piVar10 + (ulonglong)*(uint *)((longlong)piVar10 + 1) + 5)) {
    if (((char)*piVar10 == 'p') &&
       (pcVar9 = (char *)((longlong)piVar10 + 5), *(uint *)((longlong)piVar10 + 1) == 5)) break;
  }
  pcVar13[0x98] = *pcVar9;
  *local_3128 = pcVar13;
  LOCK();
  *(int *)(pcVar13 + 8) = *(int *)(pcVar13 + 8) + 1;
  UNLOCK();
  FArchive::~FArchive(&local_3108);
  return puVar7;
}



// FUNCTION 141a377f0 FUN_141a377f0 body=729 status=ok
// SIG undefined FUN_141a377f0(void)

undefined8 * FUN_141a377f0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  longlong local_e8 [2];
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  pcVar10 = (char *)operator_new(0xa8);
  iVar9 = 0;
  pcVar13 = (char *)0x0;
  if (pcVar10 != (char *)0x0) {
    *(undefined ***)pcVar10 = &PTR_FUN_143f3ece8;
    pcVar10[8] = '\0';
    pcVar10[9] = '\0';
    pcVar10[10] = '\0';
    pcVar10[0xb] = '\0';
    pcVar10[0xc] = '\0';
    pcVar10[0xd] = '\0';
    pcVar10[0xe] = '\0';
    pcVar10[0xf] = '\0';
    pcVar10[0x10] = '\0';
    pcVar10[0x11] = '\x01';
    pcVar10[0x18] = '\0';
    pcVar10[0x19] = '\0';
    pcVar10[0x1a] = '\0';
    pcVar10[0x1b] = '\0';
    pcVar10[0x1c] = '\0';
    pcVar10[0x1d] = '\0';
    pcVar10[0x1e] = '\0';
    pcVar10[0x1f] = '\0';
    pcVar10[0x20] = '\0';
    pcVar10[0x21] = '\0';
    pcVar10[0x22] = '\0';
    pcVar10[0x23] = '\0';
    pcVar10[0x24] = '\0';
    pcVar10[0x25] = '\0';
    pcVar10[0x26] = '\0';
    pcVar10[0x27] = '\0';
    pcVar10[0x28] = '\0';
    pcVar10[0x29] = '\0';
    pcVar10[0x2a] = '\0';
    pcVar10[0x2b] = '\0';
    pcVar10[0x30] = '\0';
    pcVar10[0x31] = '\0';
    pcVar10[0x32] = '\0';
    pcVar10[0x33] = '\0';
    pcVar10[0x38] = '\0';
    pcVar10[0x39] = '\0';
    pcVar10[0x3a] = '\0';
    pcVar10[0x3b] = '\0';
    pcVar10[0x3c] = '\0';
    pcVar10[0x3d] = '\0';
    pcVar10[0x3e] = '\0';
    pcVar10[0x3f] = '\0';
    pcVar10[0x40] = '\0';
    pcVar10[0x41] = '\0';
    pcVar10[0x42] = '\0';
    pcVar10[0x43] = '\0';
    pcVar10[0x44] = '\0';
    pcVar10[0x45] = '\0';
    pcVar10[0x46] = '\0';
    pcVar10[0x47] = '\0';
    pcVar10[0x48] = '\0';
    pcVar10[0x49] = '\0';
    pcVar10[0x4a] = '\0';
    pcVar10[0x4b] = '\0';
    pcVar10[0x4c] = '\0';
    pcVar10[0x4d] = '\0';
    pcVar10[0x4e] = '\0';
    pcVar10[0x4f] = '\0';
    pcVar10[0x50] = '\0';
    pcVar10[0x51] = '\0';
    pcVar10[0x52] = '\0';
    pcVar10[0x53] = '\0';
    pcVar10[0x54] = '\0';
    pcVar10[0x55] = '\0';
    pcVar10[0x56] = '\0';
    pcVar10[0x57] = '\0';
    pcVar10[0x58] = '\0';
    pcVar10[0x59] = '\0';
    pcVar10[0x5a] = '\0';
    pcVar10[0x5b] = '\0';
    pcVar10[0x5c] = '\0';
    pcVar10[0x5d] = '\0';
    pcVar10[0x5e] = '\0';
    pcVar10[0x5f] = '\0';
    pcVar10[0x60] = '\0';
    pcVar10[0x61] = '\0';
    pcVar10[0x62] = '\0';
    pcVar10[99] = '\0';
    pcVar10[100] = '\0';
    pcVar10[0x65] = '\0';
    pcVar10[0x66] = '\0';
    pcVar10[0x67] = '\0';
    pcVar10[0x68] = '\0';
    pcVar10[0x69] = '\0';
    pcVar10[0x6a] = '\0';
    pcVar10[0x6b] = '\0';
    pcVar10[0x6c] = '\0';
    pcVar10[0x6d] = '\0';
    pcVar10[0x6e] = '\0';
    pcVar10[0x6f] = '\0';
    pcVar10[0x70] = '\0';
    pcVar10[0x71] = '\0';
    pcVar10[0x72] = '\0';
    pcVar10[0x73] = '\0';
    pcVar10[0x74] = '\0';
    pcVar10[0x75] = '\0';
    pcVar10[0x76] = '\0';
    pcVar10[0x77] = '\0';
    pcVar10[0x78] = '\0';
    pcVar10[0x79] = '\0';
    pcVar10[0x7a] = '\0';
    pcVar10[0x7b] = '\0';
    pcVar10[0x7c] = '\0';
    pcVar10[0x7d] = '\0';
    pcVar10[0x7e] = '\0';
    pcVar10[0x7f] = '\0';
    pcVar10[0x80] = '\0';
    pcVar10[0x81] = '\0';
    pcVar10[0x82] = '\0';
    pcVar10[0x83] = '\0';
    pcVar10[0x84] = '\0';
    pcVar10[0x85] = '\0';
    pcVar10[0x86] = '\0';
    pcVar10[0x87] = '\0';
    pcVar10[0x88] = '\0';
    pcVar10[0x89] = '\0';
    pcVar10[0x8a] = '\0';
    pcVar10[0x8b] = '\0';
    pcVar10[0x8c] = '\0';
    pcVar10[0x8d] = '\0';
    pcVar10[0x8e] = '\0';
    pcVar10[0x8f] = '\0';
    pcVar10[0x90] = '\0';
    pcVar10[0x91] = '\0';
    pcVar10[0x92] = '\0';
    pcVar10[0x93] = '\0';
    pcVar10[0x94] = '\0';
    pcVar10[0x95] = '\0';
    pcVar10[0x96] = '\0';
    pcVar10[0x97] = '\0';
    *(undefined ***)pcVar10 = &PTR_FUN_144da0d68;
    pcVar10[0xa0] = '\0';
    pcVar10[0xa1] = '\0';
    pcVar10[0xa2] = '\0';
    pcVar10[0xa3] = '\0';
    pcVar10[0xa4] = '\0';
    pcVar10[0xa5] = '\0';
    pcVar10[0xa6] = '\0';
    pcVar10[0xa7] = '\0';
    pcVar13 = pcVar10;
  }
  FArchive::FArchive(&local_d8);
  local_48 = 0;
  local_d8 = &PTR_FUN_143f4a3a0;
  local_38 = 0x7fffffffffffffff;
  local_40 = param_3;
  FArchive::SetIsLoading(&local_d8,1);
  FArchive::SetIsPersistent(&local_d8,1);
  if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
    (*(code *)local_d8[10])(&local_d8,pcVar13 + 0x30,4);
    if ((local_af & 0x10) != 0) {
      FArchive::ByteSwap(&local_d8,pcVar13 + 0x30,4);
    }
  }
  else {
    *(undefined4 *)(pcVar13 + 0x30) = *(undefined4 *)*local_d0;
    *local_d0 = *local_d0 + 4;
  }
  FUN_1408bda20(&local_d8,pcVar13 + 0x38);
  FUN_1408bda20(&local_d8,pcVar13 + 0x48);
  FUN_1408bda20(&local_d8,pcVar13 + 0x58);
  FUN_1408bda20(&local_d8,pcVar13 + 0x68);
  FUN_1408bda20(&local_d8,pcVar13 + 0x78);
  lVar5 = *param_3;
  uVar4 = *(uint *)(param_3 + 1);
  iVar14 = (int)local_48;
  if (3 < uVar4) {
    iVar9 = *(int *)(lVar5 + -4 + (longlong)(int)uVar4);
  }
  lVar3 = lVar5 + (int)uVar4;
  piVar1 = (int *)(lVar3 - 4);
  iVar12 = 0;
  if (3 < uVar4) {
    iVar12 = *piVar1;
  }
  for (piVar11 = (int *)(lVar3 - iVar12); pcVar10 = (char *)0x0, piVar11 < piVar1;
      piVar11 = (int *)((longlong)piVar11 + (ulonglong)*(uint *)((longlong)piVar11 + 1) + 5)) {
    if (((char)*piVar11 == 'p') &&
       (pcVar10 = (char *)((longlong)piVar11 + 5), *(uint *)((longlong)piVar11 + 1) == 5)) break;
  }
  plVar2 = (longlong *)(pcVar13 + 0xa0);
  pcVar13[0x98] = *pcVar10;
  plVar6 = (longlong *)*plVar2;
  plVar7 = *(longlong **)(param_1 + 0x210);
  *plVar2 = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  iVar9 = (**(code **)(*plVar7 + 0x80))(plVar7,iVar14 + lVar5,(uVar4 - iVar14) - iVar9,0,plVar2);
  if (iVar9 < 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x210);
    GetD3D11ErrorString(local_e8,iVar9,uVar8);
    FUN_141a447e0(iVar9,
                  "Direct3DDevice->CreateHullShader( (void*)CodePtr, CodeSize, NULL, Shader->Resource.GetInitReference() )"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                  ,0x8f,uVar8);
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
  }
  *param_2 = pcVar13;
  LOCK();
  *(int *)(pcVar13 + 8) = *(int *)(pcVar13 + 8) + 1;
  UNLOCK();
  FArchive::~FArchive(&local_d8);
  return param_2;
}



// FUNCTION 141a37ad0 FUN_141a37ad0 body=475 status=ok
// SIG undefined FUN_141a37ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141a37ad0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             uint param_5,longlong param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  puVar3 = (undefined8 *)0x0;
  local_5c = 0;
  local_6c = -(uint)((param_5 & 6) != 0) & 2;
  local_64 = -(uint)((param_5 & 6) != 0) & 0x10000;
  local_68 = 2;
  if ((param_5 & 8) != 0) {
    local_68 = 0x82;
  }
  local_60 = 0;
  if ((param_5 >> 8 & 1) != 0) {
    local_60 = 0x10;
  }
  if ((param_5 >> 9 & 1) != 0) {
    local_68 = local_68 | 8;
  }
  puVar1 = *(undefined8 **)(param_6 + 8);
  local_70 = param_4;
  if (puVar1 != (undefined8 *)0x0) {
    local_80 = (**(code **)*puVar1)(puVar1,0x10,0);
    puVar3 = &local_80;
    local_74 = 0;
    local_78 = param_4;
  }
  local_88 = (longlong *)0x0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))
                    (*(longlong **)(param_1 + 0x210),&local_70,puVar3,&local_88);
  if (iVar2 < 0) {
    local_98 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar2,
                  "Direct3DDevice->CreateBuffer(&Desc,pInitData,IndexBufferResource.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11IndexBuffer.cpp"
                  ,0x33);
  }
  (**(code **)(*local_88 + 0x50))(local_88,local_58);
  if (*(longlong **)(param_6 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_6 + 8) + 0x10))();
  }
  puVar3 = (undefined8 *)operator_new(0x48);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *(undefined2 *)(puVar3 + 2) = 0x100;
    *(undefined4 *)(puVar3 + 3) = param_3;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = param_4;
    *(uint *)(puVar3 + 4) = param_5;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x34) = 0xffffffff;
    *(undefined1 *)(puVar3 + 7) = 0;
    *puVar3 = &PTR_FUN_144da0eb8;
    puVar3[5] = &PTR_LAB_144da0ec0;
    puVar3[8] = local_88;
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a37cb0 FUN_141a37cb0 body=726 status=ok
// SIG undefined FUN_141a37cb0(void)

undefined8 * FUN_141a37cb0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  longlong local_e8 [2];
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  pcVar10 = (char *)operator_new(0xa8);
  iVar9 = 0;
  pcVar13 = (char *)0x0;
  if (pcVar10 != (char *)0x0) {
    *(undefined ***)pcVar10 = &PTR_FUN_143f3ece8;
    pcVar10[8] = '\0';
    pcVar10[9] = '\0';
    pcVar10[10] = '\0';
    pcVar10[0xb] = '\0';
    pcVar10[0xc] = '\0';
    pcVar10[0xd] = '\0';
    pcVar10[0xe] = '\0';
    pcVar10[0xf] = '\0';
    pcVar10[0x10] = '\0';
    pcVar10[0x11] = '\x01';
    pcVar10[0x18] = '\0';
    pcVar10[0x19] = '\0';
    pcVar10[0x1a] = '\0';
    pcVar10[0x1b] = '\0';
    pcVar10[0x1c] = '\0';
    pcVar10[0x1d] = '\0';
    pcVar10[0x1e] = '\0';
    pcVar10[0x1f] = '\0';
    pcVar10[0x20] = '\0';
    pcVar10[0x21] = '\0';
    pcVar10[0x22] = '\0';
    pcVar10[0x23] = '\0';
    pcVar10[0x24] = '\0';
    pcVar10[0x25] = '\0';
    pcVar10[0x26] = '\0';
    pcVar10[0x27] = '\0';
    pcVar10[0x28] = '\0';
    pcVar10[0x29] = '\0';
    pcVar10[0x2a] = '\0';
    pcVar10[0x2b] = '\0';
    pcVar10[0x30] = '\0';
    pcVar10[0x31] = '\0';
    pcVar10[0x32] = '\0';
    pcVar10[0x33] = '\0';
    pcVar10[0x38] = '\0';
    pcVar10[0x39] = '\0';
    pcVar10[0x3a] = '\0';
    pcVar10[0x3b] = '\0';
    pcVar10[0x3c] = '\0';
    pcVar10[0x3d] = '\0';
    pcVar10[0x3e] = '\0';
    pcVar10[0x3f] = '\0';
    pcVar10[0x40] = '\0';
    pcVar10[0x41] = '\0';
    pcVar10[0x42] = '\0';
    pcVar10[0x43] = '\0';
    pcVar10[0x44] = '\0';
    pcVar10[0x45] = '\0';
    pcVar10[0x46] = '\0';
    pcVar10[0x47] = '\0';
    pcVar10[0x48] = '\0';
    pcVar10[0x49] = '\0';
    pcVar10[0x4a] = '\0';
    pcVar10[0x4b] = '\0';
    pcVar10[0x4c] = '\0';
    pcVar10[0x4d] = '\0';
    pcVar10[0x4e] = '\0';
    pcVar10[0x4f] = '\0';
    pcVar10[0x50] = '\0';
    pcVar10[0x51] = '\0';
    pcVar10[0x52] = '\0';
    pcVar10[0x53] = '\0';
    pcVar10[0x54] = '\0';
    pcVar10[0x55] = '\0';
    pcVar10[0x56] = '\0';
    pcVar10[0x57] = '\0';
    pcVar10[0x58] = '\0';
    pcVar10[0x59] = '\0';
    pcVar10[0x5a] = '\0';
    pcVar10[0x5b] = '\0';
    pcVar10[0x5c] = '\0';
    pcVar10[0x5d] = '\0';
    pcVar10[0x5e] = '\0';
    pcVar10[0x5f] = '\0';
    pcVar10[0x60] = '\0';
    pcVar10[0x61] = '\0';
    pcVar10[0x62] = '\0';
    pcVar10[99] = '\0';
    pcVar10[100] = '\0';
    pcVar10[0x65] = '\0';
    pcVar10[0x66] = '\0';
    pcVar10[0x67] = '\0';
    pcVar10[0x68] = '\0';
    pcVar10[0x69] = '\0';
    pcVar10[0x6a] = '\0';
    pcVar10[0x6b] = '\0';
    pcVar10[0x6c] = '\0';
    pcVar10[0x6d] = '\0';
    pcVar10[0x6e] = '\0';
    pcVar10[0x6f] = '\0';
    pcVar10[0x70] = '\0';
    pcVar10[0x71] = '\0';
    pcVar10[0x72] = '\0';
    pcVar10[0x73] = '\0';
    pcVar10[0x74] = '\0';
    pcVar10[0x75] = '\0';
    pcVar10[0x76] = '\0';
    pcVar10[0x77] = '\0';
    pcVar10[0x78] = '\0';
    pcVar10[0x79] = '\0';
    pcVar10[0x7a] = '\0';
    pcVar10[0x7b] = '\0';
    pcVar10[0x7c] = '\0';
    pcVar10[0x7d] = '\0';
    pcVar10[0x7e] = '\0';
    pcVar10[0x7f] = '\0';
    pcVar10[0x80] = '\0';
    pcVar10[0x81] = '\0';
    pcVar10[0x82] = '\0';
    pcVar10[0x83] = '\0';
    pcVar10[0x84] = '\0';
    pcVar10[0x85] = '\0';
    pcVar10[0x86] = '\0';
    pcVar10[0x87] = '\0';
    pcVar10[0x88] = '\0';
    pcVar10[0x89] = '\0';
    pcVar10[0x8a] = '\0';
    pcVar10[0x8b] = '\0';
    pcVar10[0x8c] = '\0';
    pcVar10[0x8d] = '\0';
    pcVar10[0x8e] = '\0';
    pcVar10[0x8f] = '\0';
    pcVar10[0x90] = '\0';
    pcVar10[0x91] = '\0';
    pcVar10[0x92] = '\0';
    pcVar10[0x93] = '\0';
    pcVar10[0x94] = '\0';
    pcVar10[0x95] = '\0';
    pcVar10[0x96] = '\0';
    pcVar10[0x97] = '\0';
    *(undefined ***)pcVar10 = &PTR_FUN_144da0d68;
    pcVar10[0xa0] = '\0';
    pcVar10[0xa1] = '\0';
    pcVar10[0xa2] = '\0';
    pcVar10[0xa3] = '\0';
    pcVar10[0xa4] = '\0';
    pcVar10[0xa5] = '\0';
    pcVar10[0xa6] = '\0';
    pcVar10[0xa7] = '\0';
    pcVar13 = pcVar10;
  }
  FArchive::FArchive(&local_d8);
  local_48 = 0;
  local_d8 = &PTR_FUN_143f4a3a0;
  local_38 = 0x7fffffffffffffff;
  local_40 = param_3;
  FArchive::SetIsLoading(&local_d8,1);
  FArchive::SetIsPersistent(&local_d8,1);
  if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
    (*(code *)local_d8[10])(&local_d8,pcVar13 + 0x30,4);
    if ((local_af & 0x10) != 0) {
      FArchive::ByteSwap(&local_d8,pcVar13 + 0x30,4);
    }
  }
  else {
    *(undefined4 *)(pcVar13 + 0x30) = *(undefined4 *)*local_d0;
    *local_d0 = *local_d0 + 4;
  }
  FUN_1408bda20(&local_d8,pcVar13 + 0x38);
  FUN_1408bda20(&local_d8,pcVar13 + 0x48);
  FUN_1408bda20(&local_d8,pcVar13 + 0x58);
  FUN_1408bda20(&local_d8,pcVar13 + 0x68);
  FUN_1408bda20(&local_d8,pcVar13 + 0x78);
  lVar5 = *param_3;
  uVar4 = *(uint *)(param_3 + 1);
  iVar14 = (int)local_48;
  if (3 < uVar4) {
    iVar9 = *(int *)(lVar5 + -4 + (longlong)(int)uVar4);
  }
  lVar3 = lVar5 + (int)uVar4;
  piVar1 = (int *)(lVar3 - 4);
  iVar12 = 0;
  if (3 < uVar4) {
    iVar12 = *piVar1;
  }
  for (piVar11 = (int *)(lVar3 - iVar12); pcVar10 = (char *)0x0, piVar11 < piVar1;
      piVar11 = (int *)((longlong)piVar11 + (ulonglong)*(uint *)((longlong)piVar11 + 1) + 5)) {
    if (((char)*piVar11 == 'p') &&
       (pcVar10 = (char *)((longlong)piVar11 + 5), *(uint *)((longlong)piVar11 + 1) == 5)) break;
  }
  plVar2 = (longlong *)(pcVar13 + 0xa0);
  pcVar13[0x98] = *pcVar10;
  plVar6 = (longlong *)*plVar2;
  plVar7 = *(longlong **)(param_1 + 0x210);
  *plVar2 = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  iVar9 = (**(code **)(*plVar7 + 0x78))(plVar7,iVar14 + lVar5,(uVar4 - iVar14) - iVar9,0,plVar2);
  if (iVar9 < 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x210);
    GetD3D11ErrorString(local_e8,iVar9,uVar8);
    FUN_141a447e0(iVar9,
                  "Direct3DDevice->CreatePixelShader( (void*)CodePtr, CodeSize, NULL, Shader->Resource.GetInitReference() )"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                  ,0xb3,uVar8);
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
  }
  *param_2 = pcVar13;
  LOCK();
  *(int *)(pcVar13 + 8) = *(int *)(pcVar13 + 8) + 1;
  UNLOCK();
  FArchive::~FArchive(&local_d8);
  return param_2;
}



// FUNCTION 141a37f90 FUN_141a37f90 body=389 status=ok
// SIG undefined FUN_141a37f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141a37f90(longlong param_1,undefined8 *param_2,char *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar5 = (undefined8 *)0x0;
  local_48 = 0;
  local_34 = 0;
  local_54 = 3;
  local_58 = 3;
  if (param_3[1] != '\x01') {
    if (param_3[1] == '\x02') {
      local_54 = 2;
    }
    else {
      local_54 = 1;
    }
  }
  if (*param_3 == '\x01') {
    local_58 = 2;
  }
  local_44 = *(undefined4 *)(param_3 + 8);
  local_50 = 1;
  local_40 = 1;
  local_3c = 1;
  local_4c = (int)ROUND((*(float *)(param_3 + 4) * 16777216.0 + *(float *)(param_3 + 4) * 16777216.0
                        ) - 0.5) >> 1;
  local_38 = (uint)(byte)param_3[0xc];
  puVar4 = (undefined8 *)operator_new(0x20);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = &PTR__scalar_deleting_destructor__144da0d30;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined2 *)(puVar4 + 2) = 0x100;
    puVar4[3] = 0;
    puVar5 = puVar4;
  }
  plVar1 = (longlong *)puVar5[3];
  plVar2 = *(longlong **)(param_1 + 0x210);
  puVar5[3] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  iVar3 = (**(code **)(*plVar2 + 0xb0))(plVar2,&local_58,puVar5 + 3);
  if (iVar3 < 0) {
    local_68 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar3,
                  "Direct3DDevice->CreateRasterizerState(&RasterizerDesc,RasterizerState->Resource.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11State.cpp"
                  ,0xcf);
  }
  *param_2 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a38120 FUN_141a38120 body=260 status=ok
// SIG undefined FUN_141a38120(void)

undefined8 * FUN_141a38120(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong *local_res10;
  
  if (param_3 == 1) {
    local_res8 = 1;
  }
  else if (param_3 == 2) {
    local_res8 = 2;
  }
  puVar3 = (undefined8 *)0x0;
  local_resc = 0;
  local_res10 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0xc0))
                    (*(longlong **)(param_1 + 0x210),&local_res8,&local_res10);
  if (iVar1 < 0) {
    FUN_141a447e0(iVar1,"Direct3DDevice->CreateQuery(&Desc,Query.GetInitReference())",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                  ,0x2f,*(undefined8 *)(param_1 + 0x210));
  }
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR__scalar_deleting_destructor__144da0ea8;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[3] = local_res10;
    if (local_res10 != (longlong *)0x0) {
      (**(code **)(*local_res10 + 8))();
    }
    *(byte *)(puVar2 + 5) = *(byte *)(puVar2 + 5) & 0xfe;
    puVar2[4] = 0;
    *(int *)((longlong)puVar2 + 0x2c) = param_3;
    puVar3 = puVar2;
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  if (local_res10 != (longlong *)0x0) {
    (**(code **)(*local_res10 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a38230 FUN_141a38230 body=950 status=ok
// SIG undefined FUN_141a38230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a38230(longlong param_1,longlong *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_c8;
  undefined4 local_c0;
  int local_bc;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [8];
  longlong *local_98;
  longlong **local_90;
  longlong **local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar9 = (longlong *)0x0;
  bVar1 = param_3[1];
  local_80 = 0;
  local_6c = 0;
  local_78 = 4;
  local_74 = 4;
  uVar10 = 1;
  if (bVar1 == 1) {
    local_7c = 3;
  }
  else if (bVar1 == 2) {
    local_7c = 2;
  }
  else {
    local_7c = local_78;
    if (bVar1 != 3) {
      local_7c = 1;
    }
  }
  bVar1 = param_3[2];
  if (bVar1 == 1) {
    local_78 = 3;
  }
  else if (bVar1 == 2) {
    local_78 = 2;
  }
  else if (bVar1 != 3) {
    local_78 = 1;
  }
  bVar1 = param_3[3];
  if (bVar1 == 1) {
    local_74 = 3;
  }
  else if (bVar1 == 2) {
    local_74 = 2;
  }
  else if (bVar1 != 3) {
    local_74 = 1;
  }
  local_70 = *(undefined4 *)(param_3 + 4);
  iVar4 = *(int *)(param_3 + 0x10);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fcd28) && (_Init_thread_header(&DAT_1469fcd28), DAT_1469fcd28 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MaxAnisotropy");
    plVar5 = plVar9;
    if (plVar6 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)(*plVar6 + 0x38))(plVar6);
    }
    DAT_1469fcd20 = plVar5;
    _Init_thread_footer(&DAT_1469fcd28);
  }
  iVar7 = *(int *)((longlong)DAT_1469fcd20 + 4);
  if (0 < iVar4) {
    iVar7 = iVar4;
  }
  if (iVar7 < 1) {
    local_6c = 1;
  }
  else {
    local_6c = 0x10;
    if (iVar7 < 0x10) {
      local_6c = iVar7;
    }
  }
  bVar1 = *param_3;
  local_54 = *(undefined4 *)(param_3 + 8);
  local_50 = *(undefined4 *)(param_3 + 0xc);
  bVar2 = param_3[0x18];
  if (bVar1 == 0) {
    local_80 = -(uint)(bVar2 != 0) & 0x80;
  }
  else if (bVar1 == 1) {
    local_80 = 0x14;
    if (bVar2 != 0) {
      local_80 = 0x94;
    }
  }
  else {
    if (bVar1 != 2) {
      if ((bVar1 < 3) || (4 < bVar1)) goto LAB_141a383b9;
      if (local_6c != 1) {
        local_80 = 0x55;
        if (bVar2 != 0) {
          local_80 = 0xd5;
        }
        goto LAB_141a383b9;
      }
    }
    local_80 = 0x15;
    if (bVar2 != 0) {
      local_80 = 0x95;
    }
  }
LAB_141a383b9:
  local_c0 = *(undefined4 *)(param_3 + 0x14);
  FLinearColor::FLinearColor(&local_b0,&local_c0);
  local_64 = local_b0;
  uStack_60 = uStack_ac;
  uStack_5c = uStack_a8;
  uStack_58 = uStack_a4;
  if (param_3[0x18] == 1) {
    uVar10 = 2;
  }
  local_c8 = (longlong *)0x0;
  local_68 = uVar10;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0xb8))
                    (*(longlong **)(param_1 + 0x210),&local_80,&local_c8);
  if (iVar4 < 0) {
    local_d8 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar4,
                  "Direct3DDevice->CreateSamplerState(&SamplerDesc, SamplerStateHandle.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11State.cpp"
                  ,0xb0);
  }
  plVar5 = local_c8;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c1080,&local_bc,local_c8);
  plVar6 = plVar9;
  if (local_bc != -1) {
    plVar6 = (longlong *)(DAT_1464c1080 + (longlong)local_bc * 0x18);
  }
  plVar8 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar8 = plVar9;
  }
  if (plVar8 == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x20);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f3ece8;
      *(undefined4 *)(plVar5 + 1) = 0;
      *plVar5 = (longlong)&PTR__scalar_deleting_destructor__144da0d30;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
      *(undefined2 *)(plVar5 + 2) = 0x100;
      plVar5[3] = 0;
      plVar9 = plVar5;
    }
    plVar5 = (longlong *)plVar9[3];
    plVar9[3] = (longlong)local_c8;
    local_b8 = plVar9;
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 8))();
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
    local_98 = local_c8;
    local_90 = &local_98;
    local_88 = &local_b8;
    FUN_1416e0c80(&DAT_1464c1080,local_a0,&local_90,0);
    *param_2 = (longlong)local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  else {
    lVar3 = *plVar8;
    *param_2 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      plVar5 = local_c8;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_2;
}



// FUNCTION 141a385f0 FUN_141a385f0 body=355 status=ok
// SIG undefined FUN_141a385f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a385f0(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_68;
  undefined4 local_60;
  undefined8 local_5c;
  uint local_54;
  undefined8 local_50;
  uint local_48;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)(param_3 + 0x18);
  (**(code **)(**(longlong **)(param_3 + 0x40) + 0x50))();
  lVar6 = 0;
  local_5c = 1;
  local_50 = 0;
  lVar5 = 0x460;
  if (uVar1 == 2) {
    lVar5 = 0x500;
  }
  local_60 = FUN_141a2ea30(*(undefined4 *)((longlong)&DAT_1464ca1cc + lVar5));
  local_54 = local_48 / uVar1;
  local_68 = (longlong *)0x0;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x38))
                    (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_3 + 0x40),&local_60,
                     &local_68);
  plVar3 = local_68;
  if (iVar4 < 0) {
    if (iVar4 == -0x7ff8fff2) {
      plVar2 = *(longlong **)(param_1 + 0x210);
      local_68 = (longlong *)0x0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      iVar4 = (**(code **)(*plVar2 + 0x38))
                        (plVar2,*(undefined8 *)(param_3 + 0x40),&local_60,&local_68);
    }
    if (iVar4 < 0) {
      local_78 = *(undefined8 *)(param_1 + 0x210);
      FUN_141a447e0(iVar4,"Direct3DDevice->CreateShaderResourceView",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UAV.cpp"
                    ,0x109);
    }
  }
  lVar5 = FUN_141a26860(&DAT_1469fc710,0x28);
  if (lVar5 != 0) {
    lVar6 = FD3D11ShaderResourceView::FD3D11ShaderResourceView(lVar5,local_68,param_3 + 0x28);
  }
  *param_2 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a38760 FUN_141a38760 body=300 status=ok
// SIG undefined FUN_141a38760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a38760(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_58;
  undefined4 local_50;
  undefined8 local_4c;
  uint local_44;
  undefined4 local_40;
  uint local_38;
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  (**(code **)(**(longlong **)(param_3 + 0x40) + 0x50))();
  if ((local_28 >> 5 & 1) == 0) {
    local_4c = 1;
    local_50 = 0;
    local_44 = local_38 / local_24;
  }
  else {
    local_44 = local_38 >> 2;
    local_4c = 0xb;
    local_40 = 1;
    local_50 = 0x27;
  }
  lVar3 = 0;
  local_58 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x38))
                    (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_3 + 0x40),&local_50,
                     &local_58);
  if (iVar1 < 0) {
    local_68 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar1,
                  "Direct3DDevice->CreateShaderResourceView(StructuredBuffer->Resource, &SRVDesc, (ID3D11ShaderResourceView**)ShaderResourceView.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UAV.cpp"
                  ,0xba);
  }
  lVar2 = FUN_141a26860(&DAT_1469fc710,0x28);
  if (lVar2 != 0) {
    lVar3 = FD3D11ShaderResourceView::FD3D11ShaderResourceView(lVar2,local_58,param_3 + 0x28);
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a38890 FUN_141a38890 body=284 status=ok
// SIG undefined FUN_141a38890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a38890(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_74;
  undefined1 local_68 [16];
  undefined4 local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  (**(code **)(**(longlong **)(param_3 + 0xa0) + 0x50))(*(longlong **)(param_3 + 0xa0),local_68);
  local_7c = 4;
  local_74 = 1;
  local_78 = param_4 & 0xff;
  local_80 = FUN_141a2ea30(local_58,*(uint *)(param_3 + 0x40) >> 4 & 0xffffff01);
  lVar3 = 0;
  local_88 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x38))
                    (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_3 + 0xa0),&local_80,
                     &local_88);
  if (iVar1 < 0) {
    local_98 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar1,
                  "Direct3DDevice->CreateShaderResourceView(Texture2D->GetResource(), &SRVDesc, (ID3D11ShaderResourceView**)ShaderResourceView.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                  ,0x5f5);
  }
  lVar2 = FUN_141a26860(&DAT_1469fc710,0x28);
  if (lVar2 != 0) {
    lVar3 = FD3D11ShaderResourceView::FD3D11ShaderResourceView(lVar2,local_88,param_3 + 0x68);
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a389b0 FUN_141a389b0 body=349 status=ok
// SIG undefined FUN_141a389b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141a389b0(longlong param_1,longlong *param_2,longlong param_3,byte param_4,byte param_5,
             byte param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  uint local_74;
  undefined1 local_68 [20];
  uint local_54;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  (**(code **)(**(longlong **)(param_3 + 0xa0) + 0x50))(*(longlong **)(param_3 + 0xa0),local_68);
  if ((*(uint *)(param_3 + 0x40) >> 0x18 & 1) == 0) {
    uVar4 = (&DAT_1464ca1cc)[(ulonglong)param_6 * 10];
  }
  else {
    uVar4 = 0x57;
  }
  local_80 = FUN_141a2ea30(uVar4,*(uint *)(param_3 + 0x40) >> 4 & 0xffffff01);
  if (local_54 < 2) {
    local_78 = (uint)param_4;
    local_74 = (uint)param_5;
    local_7c = 4;
  }
  else {
    local_7c = 6;
  }
  lVar3 = 0;
  local_88 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x38))
                    (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_3 + 0xa0),&local_80,
                     &local_88);
  if (iVar1 < 0) {
    local_98 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar1,"hResCreateShaderResourceView",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                  ,0x621);
  }
  lVar2 = FUN_141a26860(&DAT_1469fc710,0x28);
  if (lVar2 != 0) {
    lVar3 = FD3D11ShaderResourceView::FD3D11ShaderResourceView(lVar2,local_88,param_3 + 0x68);
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a38b10 FUN_141a38b10 body=293 status=ok
// SIG undefined FUN_141a38b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a38b10(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined1 local_68 [12];
  undefined4 local_5c;
  undefined4 local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  (**(code **)(**(longlong **)(param_3 + 0xa8) + 0x50))(*(longlong **)(param_3 + 0xa8),local_68);
  local_7c = 5;
  lVar3 = 0;
  local_74 = 1;
  local_6c = local_5c;
  local_78 = param_4 & 0xff;
  local_80 = FUN_141a2ea30(local_58,*(uint *)(param_3 + 0x40) >> 4 & 0xffffff01);
  local_88 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x38))
                    (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_3 + 0xa8),&local_80,
                     &local_88);
  if (iVar1 < 0) {
    local_98 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar1,
                  "Direct3DDevice->CreateShaderResourceView(Texture2DArray->GetResource(), &SRVDesc, (ID3D11ShaderResourceView**)ShaderResourceView.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                  ,0x651);
  }
  lVar2 = FUN_141a26860(&DAT_1469fc710,0x28);
  if (lVar2 != 0) {
    lVar3 = FD3D11ShaderResourceView::FD3D11ShaderResourceView(lVar2,local_88,param_3 + 0x70);
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a38c40 FUN_141a38c40 body=278 status=ok
// SIG undefined FUN_141a38c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a38c40(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  undefined1 local_58 [16];
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  (**(code **)(**(longlong **)(param_3 + 0xa8) + 0x50))(*(longlong **)(param_3 + 0xa8),local_58);
  local_6c = 8;
  local_64 = 1;
  local_68 = param_4 & 0xff;
  local_70 = FUN_141a2ea30(local_48,*(uint *)(param_3 + 0x40) >> 4 & 0xffffff01);
  lVar3 = 0;
  local_78 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x38))
                    (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_3 + 0xa8),&local_70,
                     &local_78);
  if (iVar1 < 0) {
    local_88 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar1,
                  "Direct3DDevice->CreateShaderResourceView(Texture3D->GetResource(), &SRVDesc, (ID3D11ShaderResourceView**)ShaderResourceView.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                  ,0x638);
  }
  lVar2 = FUN_141a26860(&DAT_1469fc710,0x28);
  if (lVar2 != 0) {
    lVar3 = FD3D11ShaderResourceView::FD3D11ShaderResourceView(lVar2,local_78,param_3 + 0x70);
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a38d60 FUN_141a38d60 body=284 status=ok
// SIG undefined FUN_141a38d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a38d60(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_74;
  undefined1 local_68 [16];
  undefined4 local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  (**(code **)(**(longlong **)(param_3 + 0xa0) + 0x50))(*(longlong **)(param_3 + 0xa0),local_68);
  local_7c = 9;
  local_74 = 1;
  local_78 = param_4 & 0xff;
  local_80 = FUN_141a2ea30(local_58,*(uint *)(param_3 + 0x40) >> 4 & 0xffffff01);
  lVar3 = 0;
  local_88 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x38))
                    (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_3 + 0xa0),&local_80,
                     &local_88);
  if (iVar1 < 0) {
    local_98 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar1,
                  "Direct3DDevice->CreateShaderResourceView(TextureCube->GetResource(), &SRVDesc, (ID3D11ShaderResourceView**)ShaderResourceView.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                  ,0x668);
  }
  lVar2 = FUN_141a26860(&DAT_1469fc710,0x28);
  if (lVar2 != 0) {
    lVar3 = FD3D11ShaderResourceView::FD3D11ShaderResourceView(lVar2,local_88,param_3 + 0x68);
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a38e80 FUN_141a38e80 body=354 status=ok
// SIG undefined FUN_141a38e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141a38e80(longlong param_1,longlong *param_2,longlong param_3,ulonglong param_4,byte param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  uint local_58;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  (**(code **)(**(longlong **)(param_3 + 0x38) + 0x50))();
  local_6c = 1;
  lVar5 = 0;
  local_60 = 0;
  local_70 = FUN_141a2ea30((&DAT_1464ca1cc)[(ulonglong)param_5 * 10]);
  local_64 = (undefined4)((ulonglong)local_58 / (param_4 & 0xffffffff));
  local_78 = (longlong *)0x0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x38))
                    (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_3 + 0x38),&local_70,
                     &local_78);
  plVar2 = local_78;
  if (iVar3 < 0) {
    if (iVar3 == -0x7ff8fff2) {
      plVar1 = *(longlong **)(param_1 + 0x210);
      local_78 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      iVar3 = (**(code **)(*plVar1 + 0x38))
                        (plVar1,*(undefined8 *)(param_3 + 0x38),&local_70,&local_78);
    }
    if (iVar3 < 0) {
      local_88 = *(undefined8 *)(param_1 + 0x210);
      FUN_141a447e0(iVar3,"Direct3DDevice->CreateShaderResourceView",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UAV.cpp"
                    ,0xdd);
    }
  }
  lVar4 = FUN_141a26860(&DAT_1469fc710,0x28);
  if (lVar4 != 0) {
    lVar5 = FD3D11ShaderResourceView::FD3D11ShaderResourceView(lVar4,local_78,param_3 + 0x20);
  }
  *param_2 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a38ff0 FUN_141a38ff0 body=96 status=ok
// SIG undefined FUN_141a38ff0(void)

undefined8 * FUN_141a38ff0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
    *puVar1 = &PTR_FUN_144da0f18;
    *(undefined2 *)(puVar1 + 2) = 0x100;
  }
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a39050 FUN_141a39050 body=505 status=ok
// SIG undefined FUN_141a39050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141a39050(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             uint param_5,longlong param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar4 = param_5 & 6;
  puVar5 = (undefined8 *)0x0;
  local_68 = 0;
  local_6c = -(uint)(uVar4 != 0) & 2;
  if ((param_5 >> 9 & 1) != 0) {
    local_68 = 8;
  }
  if ((param_5 & 8) != 0) {
    local_68 = local_68 | 0x80;
  }
  if ((char)param_5 < '\0') {
    local_68 = local_68 | 0x10;
  }
  local_64 = -(uint)(uVar4 != 0) & 0x10000;
  if ((param_5 >> 8 & 1) == 0) {
    local_60 = 0x40;
    if ((param_5 & 0x20) != 0) {
      local_60 = 0x20;
    }
  }
  else {
    local_60 = 0x10;
  }
  puVar1 = *(undefined8 **)(param_6 + 8);
  puVar3 = puVar5;
  local_70 = param_4;
  local_5c = param_3;
  if (puVar1 != (undefined8 *)0x0) {
    local_80 = (**(code **)*puVar1)(puVar1,-uVar4,0);
    puVar3 = &local_80;
    local_74 = 0;
    local_78 = param_4;
  }
  local_88 = (longlong *)0x0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))
                    (*(longlong **)(param_1 + 0x210),&local_70,puVar3,&local_88);
  if (iVar2 < 0) {
    local_98 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar2,
                  "Direct3DDevice->CreateBuffer(&Desc,pInitData,StructuredBufferResource.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StructuredBuffer.cpp"
                  ,0x4d);
  }
  (**(code **)(*local_88 + 0x50))(local_88,local_58);
  if (*(longlong **)(param_6 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_6 + 8) + 0x10))();
  }
  puVar3 = (undefined8 *)operator_new(0x48);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *(undefined2 *)(puVar3 + 2) = 0x100;
    *(undefined4 *)(puVar3 + 3) = param_3;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = param_4;
    *(uint *)(puVar3 + 4) = param_5;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x34) = 0xffffffff;
    *(undefined1 *)(puVar3 + 7) = 0;
    *puVar3 = &PTR_FUN_144da0eb8;
    puVar3[5] = &PTR_LAB_144da0ec0;
    puVar3[8] = local_88;
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
    *(undefined4 *)(puVar3 + 6) = 2;
    puVar5 = puVar3;
  }
  *param_2 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a39250 FUN_141a39250 body=121 status=ok
// SIG undefined FUN_141a39250(void)

longlong *
FUN_141a39250(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9)

{
  longlong lVar1;
  
  lVar1 = FUN_141a1a710(param_1,param_3,param_4,1,0,0,param_5,param_6,param_7,param_8,param_9);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a392d0 FUN_141a392d0 body=120 status=ok
// SIG undefined FUN_141a392d0(void)

longlong *
FUN_141a392d0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9)

{
  longlong lVar1;
  
  lVar1 = FUN_141a1b270(param_1,param_3,param_4,param_5,1,0,param_6,param_7,1,param_8,param_9);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a39350 FUN_141a39350 body=68 status=ok
// SIG undefined FUN_141a39350(void)

longlong *
FUN_141a39350(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_141a1c930(param_1,0,0,param_3,param_4,param_5,param_6);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a393a0 FUN_141a393a0 body=96 status=ok
// SIG undefined FUN_141a393a0(void)

longlong *
FUN_141a393a0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9)

{
  longlong lVar1;
  
  lVar1 = FUN_141a2c060(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a39400 FUN_141a39400 body=102 status=ok
// SIG undefined FUN_141a39400(void)

longlong *
FUN_141a39400(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined1 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  lVar1 = FUN_141a1bdc0(param_1,param_3,param_3,6,0,1,param_4,param_5,1,param_6,param_7);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a39470 FUN_141a39470 body=110 status=ok
// SIG undefined FUN_141a39470(void)

longlong *
FUN_141a39470(undefined8 param_1,longlong *param_2,undefined4 param_3,int param_4,undefined1 param_5
             ,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  
  lVar1 = FUN_141a1bdc0(param_1,param_3,param_3,param_4 * 6,1,1,param_5,param_6,1,param_7,param_8);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a394e0 FUN_141a394e0 body=68 status=ok
// SIG undefined FUN_141a394e0(void)

longlong *
FUN_141a394e0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_141a1d040(param_1,0,1,param_3,param_4,param_5,param_6);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a39530 RHICreateTextureReference body=297 status=ok
// SIG undefined RHICreateTextureReference(void)

undefined8 *
FD3D11DynamicRHI::RHICreateTextureReference
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar1[3] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = puVar1 + 10;
    }
    puVar1[9] = param_3;
    puVar1[10] = 0xc7efffffe0000000;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0xffffffff;
    *(undefined1 *)(puVar1 + 0xf) = 0;
    puVar1[0x10] = param_1;
    puVar1[0x11] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    puVar1[0x13] = puVar1 + 0xd;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    *(undefined1 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144da0e10;
    puVar1[0xd] = &PTR_LAB_144da0e60;
    puVar1[0x13] = 0;
    puVar2 = puVar1;
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a39660 FUN_141a39660 body=1840 status=ok
// SIG undefined FUN_141a39660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a39660(longlong param_1,undefined8 *param_2,void *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint *puVar5;
  void *pvVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  void **local_130;
  longlong *local_128;
  undefined8 *local_120;
  longlong *local_110;
  uint *local_108;
  void *local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8 [2];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0 [3];
  undefined8 local_98 [3];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar2 = *param_4;
  local_108 = param_4;
  local_100 = param_3;
  local_f0 = param_2;
  if (uVar2 == 0) {
    local_120 = (undefined8 *)FUN_141a26d20(&DAT_1469fc6f0);
    puVar13 = (undefined8 *)0x0;
    if (local_120 == (undefined8 *)0x0) {
      local_120 = (undefined8 *)0x0;
    }
    else {
      *local_120 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(local_120 + 1) = 0;
      *local_120 = &PTR_FUN_144d838e0;
      *(undefined4 *)((longlong)local_120 + 0xc) = 0;
      *(undefined2 *)(local_120 + 2) = 0x100;
      local_120[3] = param_4;
      *(uint *)(local_120 + 4) = *param_4;
      *local_120 = &PTR_FUN_144da0eb0;
      local_120[5] = 0;
      local_c8 = 0;
      *(undefined4 *)(local_120 + 6) = 0;
      *(undefined4 *)((longlong)local_120 + 0x34) = 0;
      *(undefined4 *)(local_120 + 7) = uStack_c0;
      *(undefined4 *)((longlong)local_120 + 0x3c) = uStack_bc;
      local_120[8] = local_b8;
      local_120[9] = 0;
      local_120[10] = 0;
      *(undefined1 *)(local_120 + 0xb) = 0;
      *(undefined4 *)((longlong)local_120 + 0x5c) = 0;
      local_120[0xc] = param_1;
      puVar13 = local_120;
    }
  }
  else {
    puVar13 = (undefined8 *)0x0;
    if (((DAT_146ab6383 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) ||
       (cVar7 = FRHICommandListExecutor::IsRHIThreadActive(), cVar7 == '\0')) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_1469fcda0) &&
         (_Init_thread_header(&DAT_1469fcda0), DAT_1469fcda0 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar15 = (longlong *)
                  (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.UniformBufferPooling");
        puVar16 = puVar13;
        if (plVar15 != (longlong *)0x0) {
          puVar16 = (undefined8 *)(**(code **)(*plVar15 + 0x38))(plVar15);
        }
        DAT_1469fcd98 = puVar16;
        _Init_thread_footer(&DAT_1469fcda0);
      }
      if (*(int *)((longlong)DAT_1469fcd98 + 4) != 0) {
        local_128 = (longlong *)0x0;
        local_b0[0] = 0;
        uVar8 = GetPoolBucketIndex(uVar2);
        uVar12 = (ulonglong)uVar8;
        plVar15 = &DAT_1469fc750 + uVar12 * 2;
        iVar10 = (&DAT_1469fc758)[uVar12 * 4];
        if (0 < iVar10) {
          plVar3 = *(longlong **)(*plVar15 + -0x10 + (longlong)iVar10 * 0x10);
          *(undefined8 *)(*plVar15 + -0x10 + (longlong)iVar10 * 0x10) = 0;
          iVar10 = (&DAT_1469fc758)[uVar12 * 4];
          lVar18 = (longlong)iVar10 * 0x10 + -0x10;
          plVar4 = *(longlong **)(lVar18 + *plVar15);
          iVar9 = iVar10;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))();
            iVar9 = (&DAT_1469fc758)[uVar12 * 4];
          }
          iVar17 = (iVar9 - (iVar10 + -1)) + -1;
          if (iVar17 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar18 + *plVar15),(void *)((longlong)iVar10 * 0x10 + *plVar15),
                       (longlong)iVar17 << 4);
            iVar9 = (&DAT_1469fc758)[uVar12 * 4];
          }
          (&DAT_1469fc758)[uVar12 * 4] = iVar9 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar15);
          plVar15 = local_128;
          local_128 = plVar3;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 8))(plVar3);
          }
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
          param_4 = local_108;
          param_3 = local_100;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            param_4 = local_108;
            param_3 = local_100;
          }
        }
        if (local_128 == (longlong *)0x0) {
          local_80 = GetPoolBucketSize(uVar2);
          plVar3 = local_128;
          plVar15 = *(longlong **)(param_1 + 0x210);
          local_7c = 2;
          local_78 = 4;
          local_74 = 0x10000;
          local_6c = 0;
          local_128 = (longlong *)0x0;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))();
          }
          iVar10 = (**(code **)(*plVar15 + 0x18))(plVar15,&local_80,0,&local_128);
          if (iVar10 < 0) {
            local_138 = *(undefined8 **)(param_1 + 0x210);
            FUN_141a447e0(iVar10,
                          "Direct3DDevice->CreateBuffer(&Desc, NULL, UniformBufferResource.GetInitReference())"
                          ,
                          "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                          ,0xd3);
          }
        }
        local_130 = local_d8;
        local_138 = (undefined8 *)((ulonglong)local_138 & 0xffffffff00000000);
        iVar10 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x70))
                           (*(longlong **)(param_1 + 0x200),local_128,0,4);
        if (iVar10 < 0) {
          local_138 = *(undefined8 **)(param_1 + 0x210);
          FUN_141a447e0(iVar10,
                        "Direct3DDeviceIMContext->Map(UniformBufferResource, 0, D3D11_MAP_WRITE_DISCARD, 0, &MappedSubresource)"
                        ,
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                        ,0xe1);
        }
        _guard_xfg_dispatch_icall_nop(local_d8[0],param_3,(ulonglong)uVar2);
        (**(code **)(**(longlong **)(param_1 + 0x200) + 0x78))
                  (*(longlong **)(param_1 + 0x200),local_128,0);
        lVar18 = FUN_141a26d20(&DAT_1469fc6f0);
        if (lVar18 != 0) {
          local_138 = local_b0;
          puVar13 = (undefined8 *)FUN_141a234a0(lVar18,param_1,param_4,local_128);
        }
        *(undefined1 *)(puVar13 + 0xb) = 1;
        local_120 = puVar13;
        uVar11 = GetPoolBucketSize(uVar2);
        *(undefined4 *)((longlong)puVar13 + 0x5c) = uVar11;
        if (local_128 != (longlong *)0x0) {
          (**(code **)(*local_128 + 0x10))();
        }
        goto LAB_141a39acc;
      }
    }
    local_68 = GetPoolBucketSize(uVar2);
    local_64 = 1;
    local_60 = 4;
    local_58 = 0;
    local_e0 = 0;
    local_110 = (longlong *)0x0;
    local_e8 = param_3;
    iVar10 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))
                       (*(longlong **)(param_1 + 0x210),&local_68,&local_e8,&local_110);
    if (iVar10 < 0) {
      local_138 = *(undefined8 **)(param_1 + 0x210);
      FUN_141a447e0(iVar10,
                    "Direct3DDevice->CreateBuffer(&Desc,&ImmutableData,UniformBufferResource.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                    ,0xfd);
    }
    lVar18 = FUN_141a26d20(&DAT_1469fc6f0);
    if (lVar18 != 0) {
      local_138 = local_98;
      local_98[0] = 0;
      puVar13 = (undefined8 *)FUN_141a234a0(lVar18,param_1,param_4,local_110);
    }
    *(undefined1 *)(puVar13 + 0xb) = 0;
    local_120 = puVar13;
    uVar11 = GetPoolBucketSize(uVar2);
    *(undefined4 *)((longlong)puVar13 + 0x5c) = uVar11;
    if (local_110 != (longlong *)0x0) {
      (**(code **)(*local_110 + 0x10))();
    }
  }
LAB_141a39acc:
  lVar18 = 0;
  uVar2 = param_4[8];
  if (uVar2 != 0) {
    plVar15 = (longlong *)puVar13[9];
    iVar10 = *(int *)(puVar13 + 10);
    plVar3 = puVar13 + 9;
    for (; local_f8 = plVar3, iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar13 = (undefined8 *)*plVar15;
      if (puVar13 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar13 + 1);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          if ((*(char *)(puVar13 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
            LOCK();
            bVar20 = *(int *)((longlong)puVar13 + 0xc) == 0;
            if (bVar20) {
              *(int *)((longlong)puVar13 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar20) {
              uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
              lVar19 = lVar18;
              if (uVar8 != 0) {
                lVar19 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar19 + 8) = puVar13;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar13)(puVar13);
          }
        }
      }
      plVar15 = plVar15 + 1;
      plVar3 = local_f8;
      puVar13 = local_120;
    }
    iVar10 = 0;
    *(undefined4 *)(plVar3 + 1) = 0;
    if (*(uint *)((longlong)plVar3 + 0xc) != uVar2) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar3);
      iVar10 = *(int *)(puVar13 + 10);
    }
    *(uint *)(plVar3 + 1) = iVar10 + uVar2;
    if (*(int *)((longlong)plVar3 + 0xc) < (int)(iVar10 + uVar2)) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar3 + (longlong)iVar10 * 8),0,(longlong)(int)uVar2 * 8);
    pvVar6 = local_100;
    puVar5 = local_108;
    lVar19 = lVar18;
    if (0 < (int)uVar2) {
      do {
        puVar13 = *(undefined8 **)(*plVar3 + lVar19 * 8);
        lVar14 = *(longlong *)
                  ((ulonglong)*(ushort *)(*(longlong *)(puVar5 + 2) + lVar19 * 2) + (longlong)pvVar6
                  );
        *(longlong *)(*plVar3 + lVar19 * 8) = lVar14;
        if (lVar14 != 0) {
          LOCK();
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
          UNLOCK();
        }
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar13 + 1);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            if ((*(char *)(puVar13 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar20 = *(int *)((longlong)puVar13 + 0xc) == 0;
              if (bVar20) {
                *(int *)((longlong)puVar13 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar20) {
                uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar14 = lVar18;
                if (uVar8 != 0) {
                  lVar14 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar14 + 8) = puVar13;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar13)(puVar13,1);
            }
          }
        }
        lVar19 = lVar19 + 1;
        puVar13 = local_120;
      } while (lVar19 < (int)uVar2);
    }
  }
  *local_f0 = puVar13;
  if (puVar13 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141a39d90 FUN_141a39d90 body=343 status=ok
// SIG undefined FUN_141a39d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a39d90(longlong param_1,longlong *param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_68;
  int local_60 [4];
  uint local_50;
  uint local_48;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  (**(code **)(**(longlong **)(param_3 + 0x40) + 0x50))();
  local_60[1] = 1;
  iVar1 = (&DAT_1464ca1cc)[(param_4 & 0xff) * 10];
  if (iVar1 == 0x1b) {
    local_60[0] = 0x1c;
  }
  else {
    local_60[0] = 0x57;
    if (iVar1 != 0x5a) {
      local_60[0] = iVar1;
    }
  }
  local_60[3] = local_48 / (uint)(&DAT_1464ca1c4)[(param_4 & 0xff) * 10];
  lVar3 = 0;
  local_60[2] = 0;
  bVar4 = (local_38 >> 5 & 1) != 0;
  if (bVar4) {
    local_60[0] = 0x27;
  }
  local_50 = (uint)bVar4;
  local_68 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x40))
                    (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_3 + 0x40),local_60,
                     &local_68);
  if (iVar1 < 0) {
    local_78 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar1,
                  "Direct3DDevice->CreateUnorderedAccessView(IndexBuffer->Resource, &UAVDesc, (ID3D11UnorderedAccessView**)UnorderedAccessView.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UAV.cpp"
                  ,0x98);
  }
  lVar2 = FUN_141a26ac0(&DAT_1469fc730,0x30);
  if (lVar2 != 0) {
    lVar3 = FD3D11UnorderedAccessView::FD3D11UnorderedAccessView(lVar2,local_68,param_3 + 0x28);
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a39ef0 FUN_141a39ef0 body=355 status=ok
// SIG undefined FUN_141a39ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141a39ef0(longlong param_1,longlong *param_2,longlong param_3,char param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  uint local_48;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  (**(code **)(**(longlong **)(param_3 + 0x40) + 0x50))();
  lVar3 = 0;
  local_50 = 0;
  local_5c = 1;
  local_60 = 0;
  if ((local_38 & 0x10) == 0) {
    if ((local_38 >> 5 & 1) != 0) {
      local_60 = 0x27;
    }
  }
  else {
    local_60 = 0x2a;
  }
  local_58 = 0;
  uVar4 = (ulonglong)local_34;
  if (local_34 == 0) {
    uVar4 = 4;
  }
  local_54 = (undefined4)(local_48 / uVar4);
  if (param_4 != '\0') {
    local_50 = 4;
  }
  if (param_5 != '\0') {
    local_50 = local_50 | 2;
  }
  if ((local_38 >> 5 & 1) != 0) {
    local_50 = local_50 | 1;
  }
  local_68 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x40))
                    (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_3 + 0x40),&local_60,
                     &local_68);
  if (iVar1 < 0) {
    local_78 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar1,
                  "Direct3DDevice->CreateUnorderedAccessView(StructuredBuffer->Resource,&UAVDesc,(ID3D11UnorderedAccessView**)UnorderedAccessView.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UAV.cpp"
                  ,0x32);
  }
  lVar2 = FUN_141a26ac0(&DAT_1469fc730,0x30);
  if (lVar2 != 0) {
    lVar3 = FD3D11UnorderedAccessView::FD3D11UnorderedAccessView(lVar2,local_68,param_3 + 0x28);
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a3a060 FUN_141a3a060 body=421 status=ok
// SIG undefined FUN_141a3a060(void)

longlong * FUN_141a3a060(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  longlong *local_res8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  
  lVar4 = 0;
  lVar2 = lVar4;
  if (param_3 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_3 + 0x48))(param_3);
  }
  lVar3 = (**(code **)(*param_3 + 0x18))(param_3);
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_3 + 0x10))(param_3);
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar3 == 0) {
        local_34 = 4;
      }
      else {
        local_34 = 5;
        local_2c = 0;
        local_28 = 6;
      }
    }
    else {
      local_34 = 5;
      puVar5 = (uint *)(lVar2 + -8);
      local_2c = 0;
      if (lVar2 == 0) {
        puVar5 = (uint *)&DAT_00000068;
      }
      local_28 = *puVar5;
    }
  }
  else {
    local_34 = 8;
    puVar5 = (uint *)(lVar2 + -8);
    local_2c = 0;
    if (lVar2 == 0) {
      puVar5 = (uint *)&DAT_00000068;
    }
    local_28 = *puVar5 >> ((byte)param_4 & 0x1f);
  }
  local_30 = param_4;
  local_38 = FUN_141a2ea30((&DAT_1464ca1cc)[(longlong)*(int *)((longlong)param_3 + 0x3c) * 10],0);
  local_res8 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x40))
                    (*(longlong **)(param_1 + 0x210),*(undefined8 *)(lVar2 + 0x38),&local_38,
                     &local_res8);
  if (iVar1 < 0) {
    FUN_141a447e0(iVar1,
                  "Direct3DDevice->CreateUnorderedAccessView(Texture->GetResource(),&UAVDesc,(ID3D11UnorderedAccessView**)UnorderedAccessView.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UAV.cpp"
                  ,0x5e,*(undefined8 *)(param_1 + 0x210));
  }
  lVar3 = FUN_141a26ac0(&DAT_1469fc730,0x30);
  if (lVar3 != 0) {
    lVar4 = FD3D11UnorderedAccessView::FD3D11UnorderedAccessView(lVar3,local_res8,lVar2);
  }
  *param_2 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a3a210 FUN_141a3a210 body=343 status=ok
// SIG undefined FUN_141a3a210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a3a210(longlong param_1,longlong *param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_68;
  int local_60 [4];
  uint local_50;
  uint local_48;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  (**(code **)(**(longlong **)(param_3 + 0x38) + 0x50))();
  local_60[1] = 1;
  iVar1 = (&DAT_1464ca1cc)[(param_4 & 0xff) * 10];
  if (iVar1 == 0x1b) {
    local_60[0] = 0x1c;
  }
  else {
    local_60[0] = 0x57;
    if (iVar1 != 0x5a) {
      local_60[0] = iVar1;
    }
  }
  local_60[3] = local_48 / (uint)(&DAT_1464ca1c4)[(param_4 & 0xff) * 10];
  lVar3 = 0;
  local_60[2] = 0;
  bVar4 = (local_38 >> 5 & 1) != 0;
  if (bVar4) {
    local_60[0] = 0x27;
  }
  local_50 = (uint)bVar4;
  local_68 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x40))
                    (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_3 + 0x38),local_60,
                     &local_68);
  if (iVar1 < 0) {
    local_78 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar1,
                  "Direct3DDevice->CreateUnorderedAccessView(VertexBuffer->Resource,&UAVDesc,(ID3D11UnorderedAccessView**)UnorderedAccessView.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UAV.cpp"
                  ,0x7b);
  }
  lVar2 = FUN_141a26ac0(&DAT_1469fc730,0x30);
  if (lVar2 != 0) {
    lVar3 = FD3D11UnorderedAccessView::FD3D11UnorderedAccessView(lVar2,local_68,param_3 + 0x20);
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a3a370 FUN_141a3a370 body=592 status=ok
// SIG undefined FUN_141a3a370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141a3a370(longlong param_1,undefined8 *param_2,undefined4 param_3,uint param_4,longlong param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  puVar4 = (undefined8 *)0x0;
  local_60 = 0;
  local_68 = 1;
  local_6c = -(uint)((param_4 & 6) != 0) & 2;
  local_64 = -(uint)((param_4 & 6) != 0) & 0x10000;
  local_70 = param_3;
  if ((param_4 & 8) != 0) {
    local_68 = 0x81;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469fcda8) &&
       (_Init_thread_header(&DAT_1469fcda8), DAT_1469fcda8 == -1)) {
      DAT_1469fcda4 = DAT_1464c9c14 < 3;
      _Init_thread_footer(&DAT_1469fcda8);
    }
    if (DAT_1469fcda4 != '\0') {
      uVar1 = (uint)local_60 | 0x20;
      local_60 = local_60 | 0x20;
      goto LAB_141a3a42a;
    }
  }
  uVar1 = (uint)local_60;
LAB_141a3a42a:
  uVar2 = uVar1;
  if ((param_4 & 0x20) != 0) {
    uVar2 = uVar1 | 0x20;
    local_60 = CONCAT44(local_60._4_4_,uVar1) | 0x20;
  }
  if ((char)param_4 < '\0') {
    local_68 = local_68 | 0x10;
  }
  if ((param_4 >> 8 & 1) != 0) {
    local_60 = CONCAT44(local_60._4_4_,uVar2) | 0x10;
  }
  if ((param_4 >> 9 & 1) != 0) {
    local_68 = local_68 | 8;
  }
  if (*(undefined8 **)(param_5 + 8) != (undefined8 *)0x0) {
    local_80 = (**(code **)**(undefined8 **)(param_5 + 8))();
    puVar4 = &local_80;
    local_74 = 0;
    local_78 = param_3;
  }
  local_88 = (longlong *)0x0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))
                    (*(longlong **)(param_1 + 0x210),&local_70,puVar4,&local_88);
  if (iVar3 < 0) {
    local_98 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar3,"Result",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11VertexBuffer.cpp"
                  ,0x53);
  }
  (**(code **)(*local_88 + 0x50))(local_88,local_58);
  if (*(longlong **)(param_5 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_5 + 8) + 0x10))();
  }
  puVar4 = (undefined8 *)operator_new(0x40);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined2 *)(puVar4 + 2) = 0x100;
    *(undefined4 *)(puVar4 + 3) = param_3;
    *(uint *)((longlong)puVar4 + 0x1c) = param_4;
    *(undefined4 *)(puVar4 + 5) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = 0xffffffff;
    *(undefined1 *)(puVar4 + 6) = 0;
    *puVar4 = &PTR_FUN_144da0ee0;
    puVar4[4] = &PTR_LAB_144da0ee8;
    puVar4[7] = local_88;
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  return param_2;
}



// FUNCTION 141a3a5c0 FUN_141a3a5c0 body=645 status=ok
// SIG undefined FUN_141a3a5c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a3a5c0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_4c8 [32];
  int local_4a8 [2];
  longlong *local_4a0;
  undefined1 *local_498;
  longlong **local_490;
  undefined1 local_488 [1024];
  int local_88;
  int local_80;
  longlong local_7c;
  longlong lStack_74;
  longlong local_6c;
  longlong lStack_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  longlong local_4c;
  longlong lStack_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  FUN_141a235c0(local_488,param_3);
  iVar3 = local_88;
  lVar2 = DAT_1464c10d0;
  plVar6 = (longlong *)0x0;
  if (DAT_1464c10d8 != DAT_1464c1104) {
    puVar5 = DAT_1464c1110;
    if (DAT_1464c1110 == (undefined *)0x0) {
      puVar5 = &DAT_1464c1108;
    }
    iVar1 = *(int *)(puVar5 + ((longlong)DAT_1464c1118 - 1U & (longlong)local_80) * 4);
    while (iVar1 != -1) {
      plVar8 = (longlong *)((longlong)iVar1 * 0x460 + lVar2);
      if ((((int)plVar8[0x80] == iVar3) &&
          (iVar4 = _guard_xfg_dispatch_icall_nop(plVar8,local_488,(longlong)(int)plVar8[0x80] << 5),
          iVar4 == 0)) &&
         (iVar4 = _guard_xfg_dispatch_icall_nop((void *)((longlong)plVar8 + 0x40c),&local_7c,0x40),
         iVar4 == 0)) {
        if (iVar1 != -1) goto LAB_141a3a6c1;
        break;
      }
      iVar1 = (int)plVar8[0x8b];
    }
  }
  plVar8 = plVar6;
LAB_141a3a6c1:
  plVar7 = plVar8 + 0x8a;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  if (plVar7 == (longlong *)0x0) {
    plVar8 = (longlong *)operator_new(0x460);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_143f3ece8;
      *(undefined4 *)(plVar8 + 1) = 0;
      *plVar8 = (longlong)&PTR__scalar_deleting_destructor__144da0d50;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 0;
      *(undefined2 *)(plVar8 + 2) = 0x100;
      *(int *)(plVar8 + 0x83) = local_88;
      if (local_88 == 0) {
        *(undefined4 *)((longlong)plVar8 + 0x41c) = 0;
      }
      else {
        FUN_141a42a00(plVar8 + 3,local_88,0);
        _guard_xfg_dispatch_icall_nop(plVar8 + 3,local_488,(longlong)local_88 << 5);
      }
      plVar8[0x84] = local_7c;
      plVar8[0x85] = lStack_74;
      plVar8[0x86] = local_6c;
      plVar8[0x87] = lStack_64;
      *(undefined4 *)(plVar8 + 0x88) = local_5c;
      *(undefined4 *)((longlong)plVar8 + 0x444) = uStack_58;
      *(undefined4 *)(plVar8 + 0x89) = uStack_54;
      *(undefined4 *)((longlong)plVar8 + 0x44c) = uStack_50;
      plVar8[0x8a] = local_4c;
      plVar8[0x8b] = lStack_44;
      plVar6 = plVar8;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_498 = local_488;
    local_490 = &local_4a0;
    local_4a0 = plVar6;
    FUN_141a1dec0(&DAT_1464c10d0,local_4a8,&local_498,0);
    plVar7 = (longlong *)(DAT_1464c10d0 + 0x450 + (longlong)local_4a8[0] * 0x460);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4a0);
  }
  lVar2 = *plVar7;
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a3a850 FUN_141a3a850 body=819 status=ok
// SIG undefined FUN_141a3a850(void)

undefined8 * FUN_141a3a850(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  void *_Src;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  longlong lVar16;
  longlong local_f8 [2];
  undefined **local_e8;
  longlong *local_e0;
  byte local_bf;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  
  pcVar11 = (char *)operator_new(0xc0);
  iVar10 = 0;
  pcVar15 = (char *)0x0;
  if (pcVar11 != (char *)0x0) {
    *(undefined ***)pcVar11 = &PTR_FUN_143f3ece8;
    pcVar11[8] = '\0';
    pcVar11[9] = '\0';
    pcVar11[10] = '\0';
    pcVar11[0xb] = '\0';
    pcVar11[0xc] = '\0';
    pcVar11[0xd] = '\0';
    pcVar11[0xe] = '\0';
    pcVar11[0xf] = '\0';
    pcVar11[0x10] = '\0';
    pcVar11[0x11] = '\x01';
    pcVar11[0x18] = '\0';
    pcVar11[0x19] = '\0';
    pcVar11[0x1a] = '\0';
    pcVar11[0x1b] = '\0';
    pcVar11[0x1c] = '\0';
    pcVar11[0x1d] = '\0';
    pcVar11[0x1e] = '\0';
    pcVar11[0x1f] = '\0';
    pcVar11[0x20] = '\0';
    pcVar11[0x21] = '\0';
    pcVar11[0x22] = '\0';
    pcVar11[0x23] = '\0';
    pcVar11[0x24] = '\0';
    pcVar11[0x25] = '\0';
    pcVar11[0x26] = '\0';
    pcVar11[0x27] = '\0';
    pcVar11[0x28] = '\0';
    pcVar11[0x29] = '\0';
    pcVar11[0x2a] = '\0';
    pcVar11[0x2b] = '\0';
    pcVar11[0x30] = '\0';
    pcVar11[0x31] = '\0';
    pcVar11[0x32] = '\0';
    pcVar11[0x33] = '\0';
    pcVar11[0x38] = '\0';
    pcVar11[0x39] = '\0';
    pcVar11[0x3a] = '\0';
    pcVar11[0x3b] = '\0';
    pcVar11[0x3c] = '\0';
    pcVar11[0x3d] = '\0';
    pcVar11[0x3e] = '\0';
    pcVar11[0x3f] = '\0';
    pcVar11[0x40] = '\0';
    pcVar11[0x41] = '\0';
    pcVar11[0x42] = '\0';
    pcVar11[0x43] = '\0';
    pcVar11[0x44] = '\0';
    pcVar11[0x45] = '\0';
    pcVar11[0x46] = '\0';
    pcVar11[0x47] = '\0';
    pcVar11[0x48] = '\0';
    pcVar11[0x49] = '\0';
    pcVar11[0x4a] = '\0';
    pcVar11[0x4b] = '\0';
    pcVar11[0x4c] = '\0';
    pcVar11[0x4d] = '\0';
    pcVar11[0x4e] = '\0';
    pcVar11[0x4f] = '\0';
    pcVar11[0x50] = '\0';
    pcVar11[0x51] = '\0';
    pcVar11[0x52] = '\0';
    pcVar11[0x53] = '\0';
    pcVar11[0x54] = '\0';
    pcVar11[0x55] = '\0';
    pcVar11[0x56] = '\0';
    pcVar11[0x57] = '\0';
    pcVar11[0x58] = '\0';
    pcVar11[0x59] = '\0';
    pcVar11[0x5a] = '\0';
    pcVar11[0x5b] = '\0';
    pcVar11[0x5c] = '\0';
    pcVar11[0x5d] = '\0';
    pcVar11[0x5e] = '\0';
    pcVar11[0x5f] = '\0';
    pcVar11[0x60] = '\0';
    pcVar11[0x61] = '\0';
    pcVar11[0x62] = '\0';
    pcVar11[99] = '\0';
    pcVar11[100] = '\0';
    pcVar11[0x65] = '\0';
    pcVar11[0x66] = '\0';
    pcVar11[0x67] = '\0';
    pcVar11[0x68] = '\0';
    pcVar11[0x69] = '\0';
    pcVar11[0x6a] = '\0';
    pcVar11[0x6b] = '\0';
    pcVar11[0x6c] = '\0';
    pcVar11[0x6d] = '\0';
    pcVar11[0x6e] = '\0';
    pcVar11[0x6f] = '\0';
    pcVar11[0x70] = '\0';
    pcVar11[0x71] = '\0';
    pcVar11[0x72] = '\0';
    pcVar11[0x73] = '\0';
    pcVar11[0x74] = '\0';
    pcVar11[0x75] = '\0';
    pcVar11[0x76] = '\0';
    pcVar11[0x77] = '\0';
    pcVar11[0x78] = '\0';
    pcVar11[0x79] = '\0';
    pcVar11[0x7a] = '\0';
    pcVar11[0x7b] = '\0';
    pcVar11[0x7c] = '\0';
    pcVar11[0x7d] = '\0';
    pcVar11[0x7e] = '\0';
    pcVar11[0x7f] = '\0';
    pcVar11[0x80] = '\0';
    pcVar11[0x81] = '\0';
    pcVar11[0x82] = '\0';
    pcVar11[0x83] = '\0';
    pcVar11[0x84] = '\0';
    pcVar11[0x85] = '\0';
    pcVar11[0x86] = '\0';
    pcVar11[0x87] = '\0';
    pcVar11[0x88] = '\0';
    pcVar11[0x89] = '\0';
    pcVar11[0x8a] = '\0';
    pcVar11[0x8b] = '\0';
    pcVar11[0x8c] = '\0';
    pcVar11[0x8d] = '\0';
    pcVar11[0x8e] = '\0';
    pcVar11[0x8f] = '\0';
    pcVar11[0x90] = '\0';
    pcVar11[0x91] = '\0';
    pcVar11[0x92] = '\0';
    pcVar11[0x93] = '\0';
    pcVar11[0x94] = '\0';
    pcVar11[0x95] = '\0';
    pcVar11[0x96] = '\0';
    pcVar11[0x97] = '\0';
    *(undefined ***)pcVar11 = &PTR__scalar_deleting_destructor__144da0d60;
    pcVar11[0xa0] = '\0';
    pcVar11[0xa1] = '\0';
    pcVar11[0xa2] = '\0';
    pcVar11[0xa3] = '\0';
    pcVar11[0xa4] = '\0';
    pcVar11[0xa5] = '\0';
    pcVar11[0xa6] = '\0';
    pcVar11[0xa7] = '\0';
    pcVar11[0xa8] = '\0';
    pcVar11[0xa9] = '\0';
    pcVar11[0xaa] = '\0';
    pcVar11[0xab] = '\0';
    pcVar11[0xac] = '\0';
    pcVar11[0xad] = '\0';
    pcVar11[0xae] = '\0';
    pcVar11[0xaf] = '\0';
    pcVar11[0xb0] = '\0';
    pcVar11[0xb1] = '\0';
    pcVar11[0xb2] = '\0';
    pcVar11[0xb3] = '\0';
    pcVar11[0xb4] = '\0';
    pcVar11[0xb5] = '\0';
    pcVar11[0xb6] = '\0';
    pcVar11[0xb7] = '\0';
    pcVar15 = pcVar11;
  }
  FArchive::FArchive(&local_e8);
  local_58 = 0;
  local_e8 = &PTR_FUN_143f4a3a0;
  local_48 = 0x7fffffffffffffff;
  local_50 = param_3;
  FArchive::SetIsLoading(&local_e8,1);
  FArchive::SetIsPersistent(&local_e8,1);
  if ((undefined4 *)local_e0[1] < (undefined4 *)*local_e0 + 1) {
    (*(code *)local_e8[10])(&local_e8,pcVar15 + 0x30,4);
    if ((local_bf & 0x10) != 0) {
      FArchive::ByteSwap(&local_e8,pcVar15 + 0x30,4);
    }
  }
  else {
    *(undefined4 *)(pcVar15 + 0x30) = *(undefined4 *)*local_e0;
    *local_e0 = *local_e0 + 4;
  }
  FUN_1408bda20(&local_e8,pcVar15 + 0x38);
  FUN_1408bda20(&local_e8,pcVar15 + 0x48);
  FUN_1408bda20(&local_e8,pcVar15 + 0x58);
  FUN_1408bda20(&local_e8,pcVar15 + 0x68);
  FUN_1408bda20(&local_e8,pcVar15 + 0x78);
  iVar9 = (int)local_58;
  lVar16 = (longlong)(int)local_58;
  lVar5 = *param_3;
  uVar4 = *(uint *)(param_3 + 1);
  if (3 < uVar4) {
    iVar10 = *(int *)(lVar5 + -4 + (longlong)(int)uVar4);
  }
  lVar3 = lVar5 + (int)uVar4;
  iVar14 = uVar4 - (int)local_58;
  piVar1 = (int *)(lVar3 - 4);
  iVar13 = 0;
  if (3 < uVar4) {
    iVar13 = *piVar1;
  }
  for (piVar12 = (int *)(lVar3 - iVar13); pcVar11 = (char *)0x0, piVar12 < piVar1;
      piVar12 = (int *)((longlong)piVar12 + (ulonglong)*(uint *)((longlong)piVar12 + 1) + 5)) {
    if (((char)*piVar12 == 'p') &&
       (pcVar11 = (char *)((longlong)piVar12 + 5), *(uint *)((longlong)piVar12 + 1) == 5)) break;
  }
  plVar2 = (longlong *)(pcVar15 + 0xa0);
  pcVar15[0x98] = *pcVar11;
  plVar6 = (longlong *)*plVar2;
  plVar7 = *(longlong **)(param_1 + 0x210);
  *plVar2 = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  iVar10 = (**(code **)(*plVar7 + 0x60))(plVar7,lVar5 + lVar16,iVar14 - iVar10,0,plVar2);
  if (iVar10 < 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x210);
    GetD3D11ErrorString(local_f8,iVar10,uVar8);
    FUN_141a447e0(iVar10,
                  "Direct3DDevice->CreateVertexShader( (void*)CodePtr, CodeSize, NULL, Shader->Resource.GetInitReference() )"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                  ,0x30,uVar8);
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
  }
  plVar2 = (longlong *)(pcVar15 + 0xa8);
  if (plVar2 != param_3) {
    iVar10 = (int)param_3[1];
    _Src = (void *)*param_3;
    *(int *)(pcVar15 + 0xb0) = iVar10;
    if ((iVar10 == 0) && (*(int *)(pcVar15 + 0xb4) == 0)) {
      pcVar15[0xb4] = '\0';
      pcVar15[0xb5] = '\0';
      pcVar15[0xb6] = '\0';
      pcVar15[0xb7] = '\0';
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar2,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*plVar2,_Src,(longlong)iVar10);
    }
  }
  *(int *)(pcVar15 + 0xb8) = iVar9;
  *param_2 = pcVar15;
  LOCK();
  *(int *)(pcVar15 + 8) = *(int *)(pcVar15 + 8) + 1;
  UNLOCK();
  FArchive::~FArchive(&local_e8);
  return param_2;
}



// FUNCTION 141a3ab90 FUN_141a3ab90 body=325 status=ok
// SIG undefined FUN_141a3ab90(void)

undefined8 *
FUN_141a3ab90(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,int param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)0x0;
  if (param_7 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469fcdb8) &&
       (_Init_thread_header(&DAT_1469fcdb8), DAT_1469fcdb8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DefaultBackBufferPixelFormat")
      ;
      puVar5 = puVar3;
      if (plVar4 != (longlong *)0x0) {
        puVar5 = (undefined4 *)(**(code **)(*plVar4 + 0x38))(plVar4);
      }
      DAT_1469fcdb0 = puVar5;
      _Init_thread_footer(&DAT_1469fcdb8);
    }
    uVar1 = EDefaultBackBufferPixelFormat::FromInt(*DAT_1469fcdb0);
    param_7 = EDefaultBackBufferPixelFormat::Convert2PixelFormat(uVar1);
  }
  lVar2 = operator_new(0xe0);
  if (lVar2 != 0) {
    puVar3 = (undefined4 *)FUN_141a238e0(lVar2,param_1,param_3,param_4,param_5,param_6,param_7);
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    puVar3[2] = puVar3[2] + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a3ace0 FUN_141a3ace0 body=252 status=ok
// SIG undefined FUN_141a3ace0(void)

void FUN_141a3ace0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x17bf8);
  lVar3 = *(longlong *)(lVar2 + 0xa8);
  if (*(longlong *)(param_1 + 0x1a48) != lVar3) {
    *(longlong *)(param_1 + 0x1a48) = lVar3;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x228))
              (*(longlong **)(param_1 + 0x200),lVar3,0,0);
  }
  if ((*(char *)(param_1 + 0x17c10) != '\0') && (*(longlong *)(param_1 + 0x17c40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  if (*(char *)(lVar2 + 0xa0) != '\0') {
    (**(code **)(*(longlong *)(param_1 + -0x30) + 0x780))(param_1 + -0x30);
  }
  FUN_141a20550(param_1 + -0x30,lVar2);
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x148))
            (*(longlong **)(param_1 + 0x1d0),param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x1a48) != 0) {
    *(undefined8 *)(param_1 + 0x1a48) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x228))(*(longlong **)(param_1 + 0x200),0,0,0);
  }
  return;
}



// FUNCTION 141a3ade0 FUN_141a3ade0 body=251 status=ok
// SIG undefined FUN_141a3ade0(void)

void FUN_141a3ade0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x17bf8);
  if ((*(char *)(param_1 + 0x17c10) != '\0') && (*(longlong *)(param_1 + 0x17c40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  lVar3 = *(longlong *)(lVar2 + 0xa8);
  if (*(longlong *)(param_1 + 0x1a48) != lVar3) {
    *(longlong *)(param_1 + 0x1a48) = lVar3;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x228))
              (*(longlong **)(param_1 + 0x200),lVar3,0,0);
  }
  if (*(char *)(lVar2 + 0xa0) != '\0') {
    (**(code **)(*(longlong *)(param_1 + -0x30) + 0x780))(param_1 + -0x30);
  }
  FUN_141a20550(param_1 + -0x30,lVar2);
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x150))
            (*(longlong **)(param_1 + 0x1d0),*(undefined8 *)(param_2 + 0x38),param_3);
  if (*(longlong *)(param_1 + 0x1a48) != 0) {
    *(undefined8 *)(param_1 + 0x1a48) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x228))(*(longlong **)(param_1 + 0x200),0,0,0);
  }
  return;
}



// FUNCTION 141a3aee0 FUN_141a3aee0 body=311 status=ok
// SIG undefined FUN_141a3aee0(void)

void FUN_141a3aee0(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,int param_5
                  ,uint param_6)

{
  int *piVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x17c10) != '\0') && (*(longlong *)(param_1 + 0x17c40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  FUN_141a283a0(param_1 + -0x30);
  (**(code **)(*(longlong *)(param_1 + -0x30) + 0x778))(param_1 + -0x30);
  iVar2 = 0x2a;
  if (*(int *)(param_2 + 0x18) == 2) {
    iVar2 = 0x39;
  }
  if ((((*(char *)(param_1 + 0x2698) != '\0') ||
       (*(longlong *)(param_1 + 0x1df8) != *(longlong *)(param_2 + 0x40))) ||
      (*(int *)(param_1 + 0x1e00) != iVar2)) || (*(int *)(param_1 + 0x1e04) != 0)) {
    *(longlong *)(param_1 + 0x1df8) = *(longlong *)(param_2 + 0x40);
    *(int *)(param_1 + 0x1e00) = iVar2;
    *(undefined4 *)(param_1 + 0x1e04) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x98))();
  }
  iVar2 = FUN_141a2f900(param_3,*(undefined1 *)(param_1 + 0x4281));
  if (*(int *)(param_1 + 0x1e08) != iVar2) {
    *(int *)(param_1 + 0x1e08) = iVar2;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0xc0))(*(longlong **)(param_1 + 0x200),iVar2);
  }
  if (1 < param_6) {
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x138))
              (*(longlong **)(param_1 + 0x1d0),*(undefined8 *)(param_4 + 0x40),param_5 * 0x14);
  }
  return;
}



// FUNCTION 141a3b020 FUN_141a3b020 body=412 status=ok
// SIG undefined FUN_141a3b020(void)

void FUN_141a3b020(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  int param_5,int param_6,undefined4 param_7,int param_8,uint param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x17c10) != '\0') && (*(longlong *)(param_1 + 0x17c40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x14);
    *piVar1 = *piVar1 + param_8 * param_9;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x18);
    *piVar1 = *piVar1 + param_6 * param_9;
  }
  FUN_141a283a0(param_1 + -0x30);
  (**(code **)(*(longlong *)(param_1 + -0x30) + 0x778))(param_1 + -0x30);
  iVar4 = 0x2a;
  if (*(int *)(param_2 + 0x18) == 2) {
    iVar4 = 0x39;
  }
  uVar3 = FUN_141a310e0(param_8,param_3);
  lVar2 = *(longlong *)(param_2 + 0x40);
  if ((((*(char *)(param_1 + 0x2698) != '\0') || (*(longlong *)(param_1 + 0x1df8) != lVar2)) ||
      (*(int *)(param_1 + 0x1e00) != iVar4)) || (*(int *)(param_1 + 0x1e04) != 0)) {
    *(longlong *)(param_1 + 0x1df8) = lVar2;
    *(int *)(param_1 + 0x1e00) = iVar4;
    *(undefined4 *)(param_1 + 0x1e04) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x98))
              (*(longlong **)(param_1 + 0x200),lVar2,iVar4,0);
  }
  iVar4 = FUN_141a2f900(param_3,*(undefined1 *)(param_1 + 0x4281));
  if (*(int *)(param_1 + 0x1e08) != iVar4) {
    *(int *)(param_1 + 0x1e08) = iVar4;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0xc0))(*(longlong **)(param_1 + 0x200),iVar4);
  }
  if ((param_9 < 2) && (param_5 == 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x60))
              (*(longlong **)(param_1 + 0x1d0),uVar3,param_7,param_4);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0xa0))
              (*(longlong **)(param_1 + 0x1d0),uVar3,param_9,param_7,param_4,param_5);
  }
  return;
}



// FUNCTION 141a3b1c0 FUN_141a3b1c0 body=285 status=ok
// SIG undefined FUN_141a3b1c0(void)

void FUN_141a3b1c0(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x17c10) != '\0') && (*(longlong *)(param_1 + 0x17c40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  FUN_141a283a0(param_1 + -0x30);
  (**(code **)(*(longlong *)(param_1 + -0x30) + 0x778))(param_1 + -0x30);
  iVar2 = 0x2a;
  if (*(int *)(param_3 + 0x18) == 2) {
    iVar2 = 0x39;
  }
  if ((((*(char *)(param_1 + 0x2698) != '\0') ||
       (*(longlong *)(param_1 + 0x1df8) != *(longlong *)(param_3 + 0x40))) ||
      (*(int *)(param_1 + 0x1e00) != iVar2)) || (*(int *)(param_1 + 0x1e04) != 0)) {
    *(longlong *)(param_1 + 0x1df8) = *(longlong *)(param_3 + 0x40);
    *(int *)(param_1 + 0x1e00) = iVar2;
    *(undefined4 *)(param_1 + 0x1e04) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x98))();
  }
  iVar2 = FUN_141a2f900(param_2,*(undefined1 *)(param_1 + 0x4281));
  if (*(int *)(param_1 + 0x1e08) != iVar2) {
    *(int *)(param_1 + 0x1e08) = iVar2;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0xc0))(*(longlong **)(param_1 + 0x200),iVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a3b2d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x138))
            (*(longlong **)(param_1 + 0x1d0),*(undefined8 *)(param_4 + 0x38),param_5);
  return;
}



// FUNCTION 141a3b2e0 FUN_141a3b2e0 body=243 status=ok
// SIG undefined FUN_141a3b2e0(void)

void FUN_141a3b2e0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  FUN_141a283a0(param_1 + -0x30);
  (**(code **)(*(longlong *)(param_1 + -0x30) + 0x778))(param_1 + -0x30);
  iVar3 = FUN_141a310e0(param_4,param_2);
  if ((*(char *)(param_1 + 0x17c10) != '\0') && (*(longlong *)(param_1 + 0x17c40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x14);
    *piVar1 = *piVar1 + param_4 * param_5;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x18);
    *piVar1 = *piVar1 + iVar3 * param_5;
  }
  iVar4 = FUN_141a2f900(param_2,*(undefined1 *)(param_1 + 0x4281));
  if (*(int *)(param_1 + 0x1e08) != iVar4) {
    *(int *)(param_1 + 0x1e08) = iVar4;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0xc0))(*(longlong **)(param_1 + 0x200),iVar4);
  }
  plVar2 = *(longlong **)(param_1 + 0x1d0);
  if (param_5 < 2) {
    (**(code **)(*plVar2 + 0x68))(plVar2,iVar3,param_3);
  }
  else {
    (**(code **)(*plVar2 + 0xa8))(plVar2,iVar3,param_5,param_3,0);
  }
  return;
}



// FUNCTION 141a3b3e0 FUN_141a3b3e0 body=183 status=ok
// SIG undefined FUN_141a3b3e0(void)

void FUN_141a3b3e0(longlong param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x17c10) != '\0') && (*(longlong *)(param_1 + 0x17c40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  FUN_141a283a0(param_1 + -0x30);
  (**(code **)(*(longlong *)(param_1 + -0x30) + 0x778))(param_1 + -0x30);
  iVar2 = FUN_141a2f900(param_2,*(undefined1 *)(param_1 + 0x4281));
  if (*(int *)(param_1 + 0x1e08) != iVar2) {
    *(int *)(param_1 + 0x1e08) = iVar2;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0xc0))(*(longlong **)(param_1 + 0x200),iVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a3b490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x140))
            (*(longlong **)(param_1 + 0x1d0),*(undefined8 *)(param_3 + 0x38),param_4);
  return;
}



// FUNCTION 141a3b4d0 FUN_141a3b4d0 body=534 status=ok
// SIG undefined FUN_141a3b4d0(void)

void FUN_141a3b4d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined4 local_res8 [2];
  int local_res10 [2];
  longlong local_res18;
  
  iVar7 = *(int *)(param_1 + 0x4298);
  iVar2 = *(int *)(param_1 + 0x42a4);
  if ((*(char *)(param_1 + 0x17c10) != '\0') && (*(longlong *)(param_1 + 0x17c40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x14);
    *piVar1 = *piVar1 + iVar2;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x18);
    *piVar1 = *piVar1 + iVar7;
  }
  lVar3 = *(longlong *)(param_1 + 0x4288);
  lVar4 = *(longlong *)(lVar3 + 0x58 + (longlong)*(int *)(lVar3 + 0x8c) * 8);
  plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x80) + 0x200);
  (**(code **)(*plVar5 + 0x78))(plVar5,lVar4,0);
  *(undefined4 *)(lVar3 + 0x8c) = 0xffffffff;
  lVar3 = *(longlong *)(param_1 + 0x4290);
  lVar6 = *(longlong *)(lVar3 + 0x58 + (longlong)*(int *)(lVar3 + 0x8c) * 8);
  plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x80) + 0x200);
  (**(code **)(*plVar5 + 0x78))(plVar5,lVar6,0);
  *(undefined4 *)(lVar3 + 0x8c) = 0xffffffff;
  FUN_141a283a0(param_1 + -0x30);
  (**(code **)(*(longlong *)(param_1 + -0x30) + 0x778))(param_1 + -0x30);
  local_res10[0] = *(int *)(param_1 + 0x429c);
  local_res8[0] = 0;
  local_res18 = lVar4;
  if (((*(longlong *)(param_1 + 0x1bf8) != lVar4) || (*(int *)(param_1 + 0x1c04) != 0)) ||
     (*(int *)(param_1 + 0x1c00) != local_res10[0])) {
    *(longlong *)(param_1 + 0x1bf8) = lVar4;
    *(undefined4 *)(param_1 + 0x1c04) = 0;
    *(int *)(param_1 + 0x1c00) = local_res10[0];
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x90))
              (*(longlong **)(param_1 + 0x200),0,1,&local_res18,local_res10,local_res8);
  }
  iVar7 = 0x2a;
  if (*(int *)(param_1 + 0x42b0) == 2) {
    iVar7 = 0x39;
  }
  if (((*(char *)(param_1 + 0x2698) != '\0') || (*(longlong *)(param_1 + 0x1df8) != lVar6)) ||
     ((*(int *)(param_1 + 0x1e00) != iVar7 || (*(int *)(param_1 + 0x1e04) != 0)))) {
    *(longlong *)(param_1 + 0x1df8) = lVar6;
    *(int *)(param_1 + 0x1e00) = iVar7;
    *(undefined4 *)(param_1 + 0x1e04) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x98))
              (*(longlong **)(param_1 + 0x200),lVar6,iVar7,0);
  }
  iVar7 = FUN_141a2f900(*(undefined4 *)(param_1 + 0x42a0),*(undefined1 *)(param_1 + 0x4281));
  if (*(int *)(param_1 + 0x1e08) != iVar7) {
    *(int *)(param_1 + 0x1e08) = iVar7;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0xc0))(*(longlong **)(param_1 + 0x200),iVar7);
  }
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x60))
            (*(longlong **)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x42ac),0,
             *(undefined4 *)(param_1 + 0x42a8));
  *(undefined8 *)(param_1 + 0x42a0) = 0;
  *(undefined8 *)(param_1 + 0x42a8) = 0;
  *(undefined4 *)(param_1 + 0x42b0) = 0;
  *(undefined8 *)(param_1 + 0x4298) = 0;
  return;
}



// FUNCTION 141a3b6f0 FUN_141a3b6f0 body=352 status=ok
// SIG undefined FUN_141a3b6f0(void)

void FUN_141a3b6f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 local_res8 [2];
  int local_res10 [2];
  longlong local_res18 [2];
  
  iVar6 = *(int *)(param_1 + 0x4298);
  iVar2 = *(int *)(param_1 + 0x42a4);
  if ((*(char *)(param_1 + 0x17c10) != '\0') && (*(longlong *)(param_1 + 0x17c40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x14);
    *piVar1 = *piVar1 + iVar2;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c40) + 0x18);
    *piVar1 = *piVar1 + iVar6;
  }
  lVar3 = *(longlong *)(param_1 + 0x4288);
  lVar4 = *(longlong *)(lVar3 + 0x58 + (longlong)*(int *)(lVar3 + 0x8c) * 8);
  plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x80) + 0x200);
  (**(code **)(*plVar5 + 0x78))(plVar5,lVar4,0);
  *(undefined4 *)(lVar3 + 0x8c) = 0xffffffff;
  FUN_141a283a0(param_1 + -0x30);
  (**(code **)(*(longlong *)(param_1 + -0x30) + 0x778))(param_1 + -0x30);
  local_res10[0] = *(int *)(param_1 + 0x429c);
  local_res8[0] = 0;
  local_res18[0] = lVar4;
  if (((*(longlong *)(param_1 + 0x1bf8) != lVar4) || (*(int *)(param_1 + 0x1c04) != 0)) ||
     (*(int *)(param_1 + 0x1c00) != local_res10[0])) {
    *(longlong *)(param_1 + 0x1bf8) = lVar4;
    *(undefined4 *)(param_1 + 0x1c04) = 0;
    *(int *)(param_1 + 0x1c00) = local_res10[0];
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x90))
              (*(longlong **)(param_1 + 0x200),0,1,local_res18,local_res10,local_res8);
  }
  iVar6 = FUN_141a2f900(*(undefined4 *)(param_1 + 0x42a0),*(undefined1 *)(param_1 + 0x4281));
  if (*(int *)(param_1 + 0x1e08) != iVar6) {
    *(int *)(param_1 + 0x1e08) = iVar6;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0xc0))(*(longlong **)(param_1 + 0x200),iVar6);
  }
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x68))
            (*(longlong **)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x4298),0);
  *(undefined8 *)(param_1 + 0x42a0) = 0;
  *(undefined8 *)(param_1 + 0x4298) = 0;
  return;
}



// FUNCTION 141a3b850 FUN_141a3b850 body=1342 status=ok
// SIG undefined FUN_141a3b850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a3b850(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  int *local_a8;
  BOOL *local_a0;
  BOOL local_98 [2];
  int local_90 [2];
  LARGE_INTEGER local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong uVar9;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  *(int *)(param_1 + 0x3fbc) = *(int *)(param_1 + 0x3fbc) + 1;
  *(undefined1 *)(param_1 + 0x3fc8) = 1;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x26b0,0);
  plVar6 = *(longlong **)(param_1 + 0x2790);
  uVar7 = 0;
  *(undefined8 *)(param_1 + 0x2790) = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  plVar6 = *(longlong **)(param_1 + 0x2788);
  *(undefined8 *)(param_1 + 0x2788) = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x427c) = 0x22;
  plVar6 = *(longlong **)(param_1 + 0x2708);
  *(undefined8 *)(param_1 + 0x2708) = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  plVar6 = (longlong *)(param_1 + 10000);
  lVar10 = 7;
  do {
    plVar1 = (longlong *)*plVar6;
    *plVar6 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar6 = plVar6 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  FUN_141a27b40(param_1 + -0x30);
  FUN_141a28750(param_1 + -0x30);
  if (*(longlong *)(param_1 + 0x1a20) != 0) {
    *(undefined8 *)(param_1 + 0x1a20) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x58))(*(longlong **)(param_1 + 0x200),0,0,0);
  }
  uVar5 = 0;
  local_78 = 0;
  lVar10 = 0x1a10;
  uStack_70 = 0;
  *(undefined8 *)(param_1 + 0x1e18) = 0;
  *(undefined8 *)(param_1 + 0x1e20) = 0;
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_1 + 0x1e28) = 0;
  *(undefined8 *)(param_1 + 0x1e30) = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined4 *)(param_1 + 0x1e38) = 0;
  *(undefined4 *)(param_1 + 0x1e3c) = 0;
  *(undefined4 *)(param_1 + 0x1e40) = 0;
  *(undefined4 *)(param_1 + 0x1e44) = 0;
  *(undefined8 *)(param_1 + 0x1e48) = 0;
  *(undefined8 *)(param_1 + 0x1e50) = 0;
  uVar9 = uVar7;
  do {
    local_98[0] = 0;
    local_90[0] = 0;
    local_88.QuadPart = 0;
    if (((*(longlong *)(lVar10 + 0x1e8 + param_1) != 0) || (*(int *)(lVar10 + 500 + param_1) != 0))
       || (*(int *)(lVar10 + 0x1f0 + param_1) != 0)) {
      *(undefined8 *)(lVar10 + 0x1e8 + param_1) = 0;
      local_a0 = local_98;
      *(undefined8 *)(lVar10 + 0x1f0 + param_1) = 0;
      local_a8 = local_90;
      (**(code **)(**(longlong **)(param_1 + 0x200) + 0x90))
                (*(longlong **)(param_1 + 0x200),uVar9,1,&local_88);
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    lVar10 = lVar10 + 0x10;
  } while (uVar8 < 0x20);
  if (((*(char *)(param_1 + 0x2698) != '\0') || (*(longlong *)(param_1 + 0x1df8) != 0)) ||
     ((*(int *)(param_1 + 0x1e00) != 0x39 || (*(int *)(param_1 + 0x1e04) != 0)))) {
    *(undefined8 *)(param_1 + 0x1df8) = 0;
    *(undefined8 *)(param_1 + 0x1e00) = 0x39;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x98))(*(longlong **)(param_1 + 0x200),0,0x39);
  }
  if (*(longlong *)(param_1 + 0x1a40) != 0) {
    *(undefined8 *)(param_1 + 0x1a40) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x48))(*(longlong **)(param_1 + 0x200),0,0,0);
  }
  if (*(longlong *)(param_1 + 0x1a28) != 0) {
    *(undefined8 *)(param_1 + 0x1a28) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x1e0))(*(longlong **)(param_1 + 0x200),0,0,0);
  }
  if (*(longlong *)(param_1 + 0x1a30) != 0) {
    *(undefined8 *)(param_1 + 0x1a30) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x200))(*(longlong **)(param_1 + 0x200),0,0,0);
  }
  if (*(longlong *)(param_1 + 0x1a38) != 0) {
    *(undefined8 *)(param_1 + 0x1a38) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0xb8))(*(longlong **)(param_1 + 0x200),0,0,0);
  }
  if (*(char *)(param_2 + 0x60) != '\0') {
    local_88.QuadPart = 0;
    iVar4 = (**(code **)(**(longlong **)(param_2 + 0x68) + 0x58))
                      (*(longlong **)(param_2 + 0x68),local_90,&local_88);
    if (iVar4 < 0) {
      local_a8 = *(int **)(*(longlong *)(param_2 + 0x18) + 0x210);
      FUN_141a447e0(iVar4,
                    "SwapChain->GetFullscreenState(&bSwapChainFullscreenState,SwapChainOutput.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                    ,0x22e);
    }
    if ((local_90[0] != 0) != (bool)*(char *)(param_2 + 0x58)) {
      *(undefined1 *)(param_2 + 0x60) = 0;
    }
    if ((longlong *)local_88.QuadPart != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
  }
  if (*(int *)(param_2 + 0x48) != DAT_1464c1060) {
    *(int *)(param_2 + 0x48) = DAT_1464c1060;
    local_80 = (longlong *)0x0;
    puVar2 = *(undefined8 **)(*(longlong *)(param_2 + 0x18) + 0x210);
    iVar4 = (**(code **)*puVar2)(puVar2,&DAT_145ac6340,&local_80);
    if (iVar4 < 0) {
      local_a8 = *(int **)(*(longlong *)(param_2 + 0x18) + 0x210);
      FUN_141a447e0(iVar4,
                    "D3DRHI->GetDevice()->QueryInterface(IID_IDXGIDevice, (void**)DXGIDevice.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                    ,0x23a);
    }
    (**(code **)(*local_80 + 0x60))(local_80,*(undefined4 *)(param_2 + 0x48));
    if (local_80 != (longlong *)0x0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  if (param_4 == '\0') {
LAB_141a3bc2e:
    cVar3 = FUN_141a33e30(param_2,uVar5);
    if (cVar3 == '\0') goto LAB_141a3bcc2;
  }
  else {
    if ((*(char *)(param_2 + 0x58) != '\0') || (DAT_1469fc500 == 0)) {
LAB_141a3bc25:
      uVar5 = FUN_141ed0a30();
      goto LAB_141a3bc2e;
    }
    local_98[0] = 0;
    DwmIsCompositionEnabled(local_98);
    if (local_98[0] == 0) goto LAB_141a3bc25;
    FUN_141a33f00(param_2);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fcdd8) && (_Init_thread_header(&DAT_1469fcdd8), DAT_1469fcdd8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.FinishCurrentFrame")
    ;
    if (plVar6 != (longlong *)0x0) {
      uVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    DAT_1469fcdd0 = uVar7;
    _Init_thread_footer(&DAT_1469fcdd8);
  }
  if (*(int *)(DAT_1469fcdd0 + 4) == 0) {
    FUN_141a44990(param_2);
    plVar6 = *(longlong **)(*(longlong *)(param_2 + 200) + 0x200);
    (**(code **)(*plVar6 + 0xe0))(plVar6,*(undefined8 *)(param_2 + 0xd0));
  }
  else {
    plVar6 = *(longlong **)(*(longlong *)(param_2 + 200) + 0x200);
    (**(code **)(*plVar6 + 0xe0))(plVar6,*(undefined8 *)(param_2 + 0xd0));
    FUN_141a44990(param_2);
  }
LAB_141a3bcc2:
  if (DAT_1464cabea != '\0') {
    FUN_141a44990(param_2);
    QueryPerformanceCounter(&local_88);
    _DAT_1464cabf0 = local_88.s.LowPart - _DAT_1464cabec;
    DAT_1464cabea = '\0';
  }
  *(undefined1 *)(param_1 + 0x3fc8) = 0;
  return;
}



// FUNCTION 141a3bd90 FUN_141a3bd90 body=40 status=ok
// SIG undefined FUN_141a3bd90(void)

void FUN_141a3bd90(longlong param_1)

{
  FUN_141a2d620(param_1 + 0x17c08);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x17bf8,0);
  return;
}



// FUNCTION 141a3bdc0 FUN_141a3bdc0 body=147 status=ok
// SIG undefined FUN_141a3bdc0(void)

void FUN_141a3bdc0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = 0;
  plVar2 = param_1;
  if (*(char *)((longlong)param_1 + 0x11c) != '\0') {
    *(undefined4 *)(param_1 + 0x7f8) = 0;
  }
  do {
    if (plVar2[2] == 0) break;
    lVar1 = plVar2[3];
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0xb8))(param_1,plVar2[2],lVar1,param_1 + 0x1d);
    }
    lVar3 = lVar3 + 1;
    plVar2 = plVar2 + 3;
  } while (lVar3 < 8);
  if ((param_1[0x1a] != 0) && (param_1[0x1b] != 0)) {
    (**(code **)(*param_1 + 0xb8))(param_1,param_1[0x1a],param_1[0x1b],param_1 + 0x1d);
  }
  return;
}



// FUNCTION 141a3be90 FUN_141a3be90 body=61 status=ok
// SIG undefined FUN_141a3be90(void)

void FUN_141a3be90(longlong param_1)

{
  char cVar1;
  
  cVar1 = IsRHIDeviceIntel();
  if (((cVar1 != '\0') && (DAT_1464c106c != '\0')) && (DAT_1469fc5a1 != '\0')) {
    FUN_14004d2a0(*(undefined8 *)(param_1 + 0x1e0));
    DAT_1469fc5a1 = '\0';
  }
  return;
}



// FUNCTION 141a3bed0 FUN_141a3bed0 body=78 status=ok
// SIG undefined FUN_141a3bed0(void)

void FUN_141a3bed0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x1b0))
            (*(longlong **)(param_1 + 0x200),*(undefined8 *)(lVar2 + 0x40));
  if ((*(char *)(param_1 + 0x17c40) != '\0') && (*(longlong *)(param_1 + 0x17c70) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x17c70) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 141a3bf20 FUN_141a3bf20 body=31 status=ok
// SIG undefined FUN_141a3bf20(void)

void FUN_141a3bf20(void)

{
  FUN_141a3bf40();
  return;
}



// FUNCTION 141a3bf40 FUN_141a3bf40 body=965 status=ok
// SIG undefined FUN_141a3bf40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141a3bf40(longlong param_1,longlong *param_2,char param_3,longlong *param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  short *psVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong **pplVar9;
  longlong lVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined2 *puVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStack_238 [32];
  longlong local_218;
  char local_208;
  longlong *local_200;
  longlong *local_1f8;
  uint local_1f0 [2];
  undefined4 local_1e8;
  undefined4 local_1e4;
  longlong *local_1e0;
  short local_1d8 [48];
  undefined1 local_178 [304];
  ulonglong local_48;
  ulonglong uVar18;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  iVar16 = 0;
  local_1f8 = (longlong *)0x0;
  local_208 = param_3;
  local_1e0 = param_4;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x38))
                    (*(longlong **)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 0x17de8),&local_1f8);
  if (((iVar5 != -0x7785fffe) && (-1 < iVar5)) &&
     (iVar5 = (**(code **)(*local_1f8 + 0x40))(local_1f8,local_178), -1 < iVar5)) {
    if (1 < (int)param_4[1]) {
      do {
        local_200 = (longlong *)0x0;
        iVar5 = (**(code **)(*local_1f8 + 0x38))(local_1f8,iVar16,&local_200);
        if (iVar5 == -0x7785fffe) {
          iVar16 = 1;
          if (local_200 != (longlong *)0x0) {
            (**(code **)(*local_200 + 0x10))();
          }
          break;
        }
        if (iVar5 < 0) goto LAB_141a3c104;
        (**(code **)(*local_200 + 0x38))(local_200,local_1d8);
        iVar16 = iVar16 + 1;
        if (local_200 != (longlong *)0x0) {
          (**(code **)(*local_200 + 0x10))();
        }
        if ((int)param_4[1] == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*param_4;
        }
        psVar6 = local_1d8;
        lVar14 = (longlong)puVar13 - (longlong)psVar6;
        do {
          sVar1 = *psVar6;
          sVar2 = *(short *)((longlong)psVar6 + lVar14);
          if (sVar1 != sVar2) break;
          psVar6 = psVar6 + 1;
        } while (sVar2 != 0);
      } while (sVar1 != sVar2);
      iVar16 = iVar16 + -1;
    }
    do {
      uVar18 = 0;
      local_200 = (longlong *)0x0;
      iVar5 = (**(code **)(*local_1f8 + 0x38))(local_1f8,iVar16,&local_200);
      if (iVar5 == -0x7785fffe) {
        if (local_200 != (longlong *)0x0) {
          (**(code **)(*local_200 + 0x10))();
        }
        break;
      }
      if (iVar5 < 0) goto LAB_141a3c104;
      local_1e8 = 0x1c;
      pplVar9 = (longlong **)&local_1e8;
      local_1e4 = 0x57;
      local_1f0[0] = 0;
      do {
        uVar11 = *(undefined4 *)pplVar9;
        local_218 = 0;
        iVar5 = (**(code **)(*local_200 + 0x40))(local_200,uVar11,0,local_1f0);
        if (iVar5 < 0) {
          if (1 < iVar5 + 0x7785fffeU) goto LAB_141a3c104;
        }
        else if (local_1f0[0] != 0) goto LAB_141a3c14b;
        pplVar9 = (longlong **)((longlong)pplVar9 + 4);
      } while (pplVar9 != &local_1e0);
      uVar11 = 0x1c;
LAB_141a3c14b:
      uVar7 = SUB168(ZEXT816(0x1c) * ZEXT416(local_1f0[0]),0);
      if (SUB168(ZEXT816(0x1c) * ZEXT416(local_1f0[0]),8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      lVar14 = operator_new(uVar7);
      local_218 = lVar14;
      iVar5 = (**(code **)(*local_200 + 0x40))(local_200,uVar11,0,local_1f0);
      if (iVar5 < 0) {
        local_218 = 0;
        FUN_141a447e0(iVar5,"Output->GetDisplayModeList(Format, 0, &NumModes, ModeList)",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                      ,0x715);
      }
      cVar4 = local_208;
      uVar15 = local_1f0[0];
      if (local_1f0[0] != 0) {
        do {
          puVar12 = (uint *)(uVar18 * 0x1c + lVar14);
          if ((*puVar12 < 0x28f1) && (puVar12[1] < 0x28f1)) {
            if (cVar4 == '\0') {
              if (puVar12[3] * 0x28f0 < puVar12[2]) goto LAB_141a3c271;
            }
            else {
              iVar5 = 0;
              if (0 < (int)param_2[1]) {
                puVar8 = (uint *)*param_2;
                do {
                  if ((*puVar8 == *puVar12) && (puVar8[1] == puVar12[1])) goto LAB_141a3c271;
                  iVar5 = iVar5 + 1;
                  puVar8 = puVar8 + 3;
                } while (iVar5 < (int)param_2[1]);
              }
            }
            lVar10 = (longlong)(int)param_2[1];
            iVar5 = (int)param_2[1] + 1;
            *(int *)(param_2 + 1) = iVar5;
            if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2);
            }
            lVar3 = *param_2;
            *(undefined8 *)(lVar3 + lVar10 * 0xc) = 0;
            *(undefined4 *)(lVar3 + 8 + lVar10 * 0xc) = 0;
            puVar8 = (uint *)(*param_2 + lVar10 * 0xc);
            *puVar8 = *puVar12;
            puVar8[1] = puVar12[1];
            puVar8[2] = puVar12[2] / puVar12[3];
            uVar15 = local_1f0[0];
          }
LAB_141a3c271:
          uVar17 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar17;
          param_4 = local_1e0;
        } while (uVar17 < uVar15);
      }
      FMemory::operator_delete(lVar14);
      iVar16 = iVar16 + 1;
      if (local_200 != (longlong *)0x0) {
        (**(code **)(*local_200 + 0x10))();
      }
    } while (iVar16 < 1);
    if (local_1f8 != (longlong *)0x0) {
      (**(code **)(*local_1f8 + 0x10))();
    }
    if (*param_4 != 0) {
      FMemory::Free();
    }
    return 1;
  }
LAB_141a3c114:
  if (local_1f8 != (longlong *)0x0) {
    (**(code **)(*local_1f8 + 0x10))();
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return 0;
LAB_141a3c104:
  if (local_200 != (longlong *)0x0) {
    (**(code **)(*local_200 + 0x10))();
  }
  goto LAB_141a3c114;
}



// FUNCTION 141a3c320 FUN_141a3c320 body=183 status=ok
// SIG undefined FUN_141a3c320(void)

byte FUN_141a3c320(undefined8 param_1,longlong param_2,ulonglong *param_3,undefined1 param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = 1;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    bVar1 = FUN_141a30370(param_1,*(undefined8 *)(param_2 + 0x18),param_2 + 0x20,8,param_4,
                          *(undefined4 *)(param_2 + 0x2c));
    *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) & 0xfe;
    *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) | bVar1;
  }
  if (*(int *)(param_2 + 0x2c) != 2) {
    *param_3 = *(ulonglong *)(param_2 + 0x20);
    return bVar1;
  }
  uVar2 = DAT_146ab6340 / 1000000;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  if (uVar2 != 0) {
    *param_3 = *(ulonglong *)(param_2 + 0x20) / uVar2;
    return bVar1;
  }
  *param_3 = 0;
  return bVar1;
}



// FUNCTION 141a3c3f0 FUN_141a3c3f0 body=695 status=ok
// SIG undefined FUN_141a3c3f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a3c3f0(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_1e8 [32];
  int *local_1c8;
  uint local_1b8 [2];
  longlong *local_1b0;
  longlong *local_1a8;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  undefined1 local_178 [304];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_1a8 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x38))
                    (*(longlong **)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 0x17de8),&local_1a8);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_1a8 + 0x40))(local_1a8,local_178);
    if (iVar1 < 0) {
      local_1c8 = (int *)0x0;
      FUN_141a447e0(iVar1,"Adapter->GetDesc(&AdapterDesc)",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Device.cpp"
                    ,0x146);
    }
    iVar1 = 0;
    iVar9 = 0;
    bVar8 = false;
    local_1b0 = (longlong *)0x0;
    iVar2 = (**(code **)(*local_1a8 + 0x38))(local_1a8,0,&local_1b0);
    if (iVar2 == -0x7785fffe) {
      if (local_1b0 != (longlong *)0x0) {
        (**(code **)(*local_1b0 + 0x10))();
      }
LAB_141a3c68d:
      if (local_1a8 != (longlong *)0x0) {
        (**(code **)(*local_1a8 + 0x10))();
      }
      *param_2 = iVar1;
      *param_3 = iVar9;
      return;
    }
    if (-1 < iVar2) {
      local_1b8[0] = 0;
      local_1c8 = (int *)0x0;
      iVar2 = (**(code **)(*local_1b0 + 0x40))(local_1b0,0x1c,0,local_1b8);
      if (iVar2 != -0x7785fffe) {
        if (iVar2 != -0x7785ffde) {
          uVar3 = SUB168(ZEXT816(0x1c) * ZEXT416(local_1b8[0]),0);
          if (SUB168(ZEXT816(0x1c) * ZEXT416(local_1b8[0]),8) != 0) {
            uVar3 = 0xffffffffffffffff;
          }
          piVar4 = (int *)operator_new(uVar3);
          local_1c8 = piVar4;
          iVar2 = (**(code **)(*local_1b0 + 0x40))(local_1b0,0x1c,0,local_1b8);
          if (iVar2 < 0) {
            local_1c8 = (int *)0x0;
            FUN_141a447e0(iVar2,"Output->GetDisplayModeList(Format,0,&NumModes,ModeList)",
                          "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Device.cpp"
                          ,0x168);
          }
          if (local_1b8[0] != 0) {
            uVar10 = (ulonglong)local_1b8[0];
            piVar5 = piVar4;
            do {
              if ((!bVar8) ||
                 ((uVar6 = iVar1 - *param_2 >> 0x1f, uVar7 = *piVar5 - *param_2 >> 0x1f,
                  (int)((*piVar5 - *param_2 ^ uVar7) - uVar7) <=
                  (int)((iVar1 - *param_2 ^ uVar6) - uVar6) &&
                  (uVar6 = piVar5[1] - *param_3 >> 0x1f, uVar7 = iVar9 - *param_3 >> 0x1f,
                  (int)((piVar5[1] - *param_3 ^ uVar6) - uVar6) <=
                  (int)((iVar9 - *param_3 ^ uVar7) - uVar7))))) {
                local_1a0 = *piVar5;
                iStack_19c = piVar5[1];
                iStack_198 = piVar5[2];
                iStack_194 = piVar5[3];
                bVar8 = true;
                iVar1 = local_1a0;
                iVar9 = iStack_19c;
              }
              piVar5 = piVar5 + 7;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          FMemory::operator_delete(piVar4);
          if (local_1b0 != (longlong *)0x0) {
            (**(code **)(*local_1b0 + 0x10))();
          }
          goto LAB_141a3c68d;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x164,
                   L"This application cannot be run over a remote desktop configuration");
        FDebug::AssertFailed
                  (&DAT_144d9235c,"Unknown",0x164,
                   L"This application cannot be run over a remote desktop configuration");
      }
    }
    if (local_1b0 != (longlong *)0x0) {
      (**(code **)(*local_1b0 + 0x10))();
    }
  }
  if (local_1a8 != (longlong *)0x0) {
    (**(code **)(*local_1a8 + 0x10))();
  }
  return;
}



// FUNCTION 141a3c740 FUN_141a3c740 body=611 status=ok
// SIG undefined FUN_141a3c740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141a3c740(longlong param_1,longlong param_2,ulonglong param_3,undefined4 param_4,
                      int param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  longlong **local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined1 local_90;
  longlong *local_88;
  longlong **local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar3 = param_2 + 0x28;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  FUN_141a28980(param_1,lVar3);
  (**(code **)(**(longlong **)(param_2 + 0x40) + 0x50))(*(longlong **)(param_2 + 0x40),&local_50);
  local_78 = *(longlong *)(param_2 + 0x40);
  local_70 = 0;
  local_a8 = (longlong *)0x0;
  local_90 = 0;
  if (local_4c == 2) {
    local_c0 = &local_b8;
    local_c8 = local_c8 & 0xffffffff00000000;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x70))
                      (*(longlong **)(param_1 + 0x200),local_78,0,4);
    if (iVar2 < 0) {
      local_c8 = *(ulonglong *)(param_1 + 0x210);
      FUN_141a447e0(iVar2,
                    "Direct3DDeviceIMContext->Map(IndexBuffer->Resource,0,D3D11_MAP_WRITE_DISCARD,0,&MappedSubresource)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11IndexBuffer.cpp"
                    ,0x55);
    }
    local_98 = local_b8;
    local_a0 = local_b0;
  }
  else if (param_5 == 0) {
    local_58 = 0;
    local_64 = 3;
    local_5c = 0x20000;
    local_b8 = (longlong *)0x0;
    local_68 = param_4;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))
                      (*(longlong **)(param_1 + 0x210),&local_68,0,&local_b8);
    if (iVar2 < 0) {
      local_c8 = *(ulonglong *)(param_1 + 0x210);
      FUN_141a447e0(iVar2,
                    "Direct3DDevice->CreateBuffer(&StagingBufferDesc,NULL,StagingIndexBuffer.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11IndexBuffer.cpp"
                    ,0x66);
    }
    plVar1 = local_a8;
    local_a8 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 8))(local_b8);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,local_b8);
    }
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x178))
              (*(longlong **)(param_1 + 0x200),local_b8,*(undefined8 *)(param_2 + 0x40));
    local_c0 = &local_88;
    local_c8 = local_c8 & 0xffffffff00000000;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x70))
                      (*(longlong **)(param_1 + 0x200),local_b8,0,1);
    if (iVar2 < 0) {
      local_c8 = *(ulonglong *)(param_1 + 0x210);
      FUN_141a447e0(iVar2,
                    "Direct3DDeviceIMContext->Map(StagingIndexBuffer,0,D3D11_MAP_READ,0,&MappedSubresource)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11IndexBuffer.cpp"
                    ,0x6e);
    }
    local_98 = local_88;
    local_a0 = local_80._0_4_;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  else {
    local_98 = (longlong *)FMemory::Malloc(local_50,0x10);
    local_90 = 1;
    local_a0 = local_50;
  }
  local_88 = &local_78;
  local_80 = &local_a8;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FD3D11LockedKey_&&,FD3D11LockedData_const_&>_>
            (param_1 + 0x1a0,&local_b8,&local_88,0);
  lVar3 = (param_3 & 0xffffffff) + (longlong)local_98;
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
  }
  return lVar3;
}



// FUNCTION 141a3c9b0 FUN_141a3c9b0 body=611 status=ok
// SIG undefined FUN_141a3c9b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141a3c9b0(longlong param_1,longlong param_2,ulonglong param_3,undefined4 param_4,
                      int param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  longlong **local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined1 local_90;
  longlong *local_88;
  longlong **local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar3 = param_2 + 0x28;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  FUN_141a28980(param_1,lVar3);
  (**(code **)(**(longlong **)(param_2 + 0x40) + 0x50))(*(longlong **)(param_2 + 0x40),&local_50);
  local_78 = *(longlong *)(param_2 + 0x40);
  local_70 = 0;
  local_a8 = (longlong *)0x0;
  local_90 = 0;
  if (local_4c == 2) {
    local_c0 = &local_b8;
    local_c8 = local_c8 & 0xffffffff00000000;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x70))
                      (*(longlong **)(param_1 + 0x200),local_78,0,4);
    if (iVar2 < 0) {
      local_c8 = *(ulonglong *)(param_1 + 0x210);
      FUN_141a447e0(iVar2,
                    "Direct3DDeviceIMContext->Map(StructuredBuffer->Resource,0,D3D11_MAP_WRITE_DISCARD,0,&MappedSubresource)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StructuredBuffer.cpp"
                    ,0x6f);
    }
    local_98 = local_b8;
    local_a0 = local_b0;
  }
  else if (param_5 == 0) {
    local_58 = 0;
    local_64 = 3;
    local_5c = 0x20000;
    local_b8 = (longlong *)0x0;
    local_68 = param_4;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))
                      (*(longlong **)(param_1 + 0x210),&local_68,0,&local_b8);
    if (iVar2 < 0) {
      local_c8 = *(ulonglong *)(param_1 + 0x210);
      FUN_141a447e0(iVar2,
                    "Direct3DDevice->CreateBuffer(&StagingBufferDesc,NULL,StagingStructuredBuffer.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StructuredBuffer.cpp"
                    ,0x80);
    }
    plVar1 = local_a8;
    local_a8 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 8))(local_b8);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,local_b8);
    }
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x178))
              (*(longlong **)(param_1 + 0x200),local_b8,*(undefined8 *)(param_2 + 0x40));
    local_c0 = &local_88;
    local_c8 = local_c8 & 0xffffffff00000000;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x70))
                      (*(longlong **)(param_1 + 0x200),local_b8,0,1);
    if (iVar2 < 0) {
      local_c8 = *(ulonglong *)(param_1 + 0x210);
      FUN_141a447e0(iVar2,
                    "Direct3DDeviceIMContext->Map(StagingStructuredBuffer,0,D3D11_MAP_READ,0,&MappedSubresource)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11StructuredBuffer.cpp"
                    ,0x88);
    }
    local_98 = local_88;
    local_a0 = local_80._0_4_;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  else {
    local_98 = (longlong *)FMemory::Malloc(local_50,0x10);
    local_90 = 1;
    local_a0 = local_50;
  }
  local_88 = &local_78;
  local_80 = &local_a8;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FD3D11LockedKey_&&,FD3D11LockedData_const_&>_>
            (param_1 + 0x1a0,&local_b8,&local_88,0);
  lVar3 = (param_3 & 0xffffffff) + (longlong)local_98;
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
  }
  return lVar3;
}



// FUNCTION 141a3cc20 RHILockTexture2D body=73 status=ok
// SIG undefined RHILockTexture2D(void)

void FD3D11DynamicRHI::RHILockTexture2D
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x68;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_141a28980(param_1,lVar1);
  FUN_141a332b0(param_2,param_3,0,param_4);
  return;
}



// FUNCTION 141a3cc70 RHILockTexture2DArray body=85 status=ok
// SIG undefined RHILockTexture2DArray(void)

void FD3D11DynamicRHI::RHILockTexture2DArray
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x70;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_141a28980(param_1,lVar1);
  FUN_141a335a0(param_2,param_4,param_3,param_5);
  return;
}



// FUNCTION 141a3ccd0 FUN_141a3ccd0 body=85 status=ok
// SIG undefined FUN_141a3ccd0(void)

void FUN_141a3ccd0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x70;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_141a28980(param_1,lVar1);
  FUN_141a32f80(param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 141a3cd30 RHILockTextureCubeFace body=160 status=ok
// SIG undefined RHILockTextureCubeFace(void)

void FD3D11DynamicRHI::RHILockTextureCubeFace
               (undefined8 param_1,longlong param_2,int param_3,int param_4,undefined4 param_5,
               undefined4 param_6)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  lVar1 = param_2 + 0x68;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_141a28980(param_1,lVar1);
  if (param_3 == 1) {
    iVar2 = 1;
  }
  else if (param_3 == 2) {
    iVar2 = 2;
  }
  else if (param_3 == 3) {
    iVar2 = 3;
  }
  else if (param_3 == 4) {
    iVar2 = 4;
  }
  else if (param_3 == 5) {
    iVar2 = 5;
  }
  FUN_141a33890(param_2,param_5,iVar2 + param_4 * 6,param_6);
  return;
}



// FUNCTION 141a3cdd0 FUN_141a3cdd0 body=743 status=ok
// SIG undefined FUN_141a3cdd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141a3cdd0(longlong param_1,longlong param_2,uint param_3,undefined4 param_4,int param_5
                      )

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  uint *local_e8;
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  longlong *local_a8;
  longlong **local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  uint local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar3 = param_2 + 0x20;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  FUN_141a28980(param_1,lVar3);
  (**(code **)(**(longlong **)(param_2 + 0x38) + 0x50))(*(longlong **)(param_2 + 0x38),&local_58);
  local_98 = *(longlong *)(param_2 + 0x38);
  local_90 = 0;
  local_c8 = (longlong *)0x0;
  local_b0 = 0;
  if (local_54 == 2) {
    local_100 = &local_d8;
    local_108 = local_108 & 0xffffffff00000000;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x70))
                      (*(longlong **)(param_1 + 0x200),local_98,0,4);
    if (iVar2 < 0) {
      local_108 = *(ulonglong *)(param_1 + 0x210);
      FUN_141a447e0(iVar2,
                    "Direct3DDeviceIMContext->Map(VertexBuffer->Resource,0,D3D11_MAP_WRITE_DISCARD,0,&MappedSubresource)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11VertexBuffer.cpp"
                    ,0x78);
    }
    local_b8 = local_d8;
    local_c0 = local_d0;
  }
  else if (param_5 == 0) {
    local_78 = 0;
    local_84 = 3;
    local_7c = 0x20000;
    local_d8 = (longlong *)0x0;
    local_88 = param_4;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x18))
                      (*(longlong **)(param_1 + 0x210),&local_88,0,&local_d8);
    if (iVar2 < 0) {
      local_108 = *(ulonglong *)(param_1 + 0x210);
      FUN_141a447e0(iVar2,
                    "Direct3DDevice->CreateBuffer(&StagingBufferDesc,NULL,StagingVertexBuffer.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11VertexBuffer.cpp"
                    ,0x89);
    }
    plVar1 = local_c8;
    local_c8 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 8))(local_d8);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,local_d8);
    }
    local_e8 = local_70;
    local_f8 = *(undefined8 *)(param_2 + 0x38);
    local_f0 = 0;
    local_70[1] = 0;
    local_70[2] = 0;
    local_5c = 1;
    local_60 = 1;
    local_100 = (longlong **)((ulonglong)local_100._4_4_ << 0x20);
    local_108 = local_108 & 0xffffffff00000000;
    local_70[0] = param_3;
    local_70[3] = param_4;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x170))
              (*(longlong **)(param_1 + 0x200),local_d8,0,0);
    local_100 = &local_a8;
    local_108 = local_108 & 0xffffffff00000000;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x70))
                      (*(longlong **)(param_1 + 0x200),local_d8,0,1);
    if (iVar2 < 0) {
      local_108 = *(ulonglong *)(param_1 + 0x210);
      FUN_141a447e0(iVar2,
                    "Direct3DDeviceIMContext->Map(StagingVertexBuffer,0,D3D11_MAP_READ,0,&MappedSubresource)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11VertexBuffer.cpp"
                    ,0x96);
    }
    local_b8 = local_a8;
    local_c0 = local_a0._0_4_;
    if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 0x10))();
    }
  }
  else {
    local_b8 = (longlong *)FMemory::Malloc(local_58,0x10);
    local_b0 = 1;
    local_c0 = local_58;
  }
  local_a8 = &local_98;
  local_a0 = &local_c8;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FD3D11LockedKey_&&,FD3D11LockedData_const_&>_>
            (param_1 + 0x1a0,&local_d8,&local_a8,0);
  lVar3 = (ulonglong)param_3 + (longlong)local_b8;
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x10))();
  }
  return lVar3;
}



// FUNCTION 141a3d0c0 FUN_141a3d0c0 body=243 status=ok
// SIG undefined FUN_141a3d0c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a3d0c0(longlong param_1,longlong *param_2,undefined8 *param_3,uint *param_4,
                  uint *param_5)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  undefined1 local_78 [16];
  undefined4 local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (param_2 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  plVar1 = *(longlong **)(lVar4 + 0x38);
  (**(code **)(*plVar1 + 0x50))(plVar1,local_78);
  uVar2 = FUN_141a28860(local_68);
  local_90 = &local_88;
  local_98 = (ulonglong)local_98._4_4_ << 0x20;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x70))
                    (*(longlong **)(param_1 + 0x200),plVar1,0,1);
  if (iVar3 < 0) {
    local_98 = *(undefined8 *)(param_1 + 0x210);
    FUN_141a447e0(iVar3,"Direct3DDeviceIMContext->Map(Texture,0,D3D11_MAP_READ,0,&LockedRect)",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RenderTarget.cpp"
                  ,0x4bb);
  }
  *param_3 = local_88;
  *param_4 = local_80 / uVar2;
  *param_5 = local_7c / local_80;
  return;
}



// FUNCTION 141a3d1c0 FUN_141a3d1c0 body=355 status=ok
// SIG undefined FUN_141a3d1c0(void)

void FUN_141a3d1c0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  
  if (DAT_1469fc508 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469fce48) &&
       (_Init_thread_header(&DAT_1469fce48), DAT_1469fce48 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.gpucrash.collectionenable");
      lVar3 = 0;
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2);
      }
      DAT_1469fce40 = lVar3;
      _Init_thread_footer(&DAT_1469fce48);
    }
    bVar4 = false;
    if (DAT_1469fce40 != 0) {
      bVar4 = *(int *)(DAT_1469fce40 + 4) != 0;
    }
    if (*(longlong *)(param_1 + 0x208) != 0) {
      if (!bVar4) {
        FUN_141a439c0(param_1);
        return;
      }
      if (*(longlong *)(param_1 + 0x208) != 0) {
        return;
      }
    }
    if ((((bVar4) && (DAT_1469fc508 != '\0')) && (*(longlong *)(param_1 + 0x210) != 0)) &&
       (*(longlong *)(param_1 + 0x200) != 0)) {
      uVar1 = _guard_xfg_dispatch_icall_nop(0x13);
      if (((uVar1 & 0xfff00000) != 0xbad00000) &&
         (uVar1 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 0x200),param_1 + 0x208),
         (uVar1 & 0xfff00000) != 0xbad00000)) {
        SetEmitDrawEvents(1);
        return;
      }
      DAT_1469fc508 = '\0';
    }
  }
  return;
}



// FUNCTION 141a3d350 FUN_141a3d350 body=740 status=ok
// SIG undefined FUN_141a3d350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a3d350(longlong param_1,longlong *param_2,int *param_3,ulonglong param_4,
                  longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iStackX_24;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  int *local_f8;
  int local_e8;
  uint local_e4;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined1 local_80 [16];
  undefined4 local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar8 = 0;
  uVar3 = uVar8;
  local_e0 = param_1;
  if (param_2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  local_e8 = param_3[3] - param_3[1];
  iStackX_24 = (int)(param_4 >> 0x20);
  uVar7 = param_3[2] - *param_3;
  uVar4 = (uint)param_4;
  local_e4 = iStackX_24 - uVar4;
  (**(code **)(**(longlong **)(uVar3 + 0x38) + 0x50))(*(longlong **)(uVar3 + 0x38),local_80);
  *(undefined4 *)(param_5 + 1) = 0;
  iVar5 = (iStackX_24 - uVar4) * local_e8 * uVar7;
  if (*(int *)((longlong)param_5 + 0xc) != iVar5 * 8) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_5);
  }
  local_c0 = *param_3;
  local_bc = param_3[1];
  local_b4 = param_3[2];
  local_b0 = param_3[3];
  local_ac = iStackX_24;
  local_a4 = local_e8;
  local_a0 = local_e4;
  local_98 = local_70;
  local_9c = 1;
  local_94 = 3;
  local_8c = 0x20000;
  local_d8 = (longlong *)0x0;
  local_b8 = uVar4;
  local_a8 = uVar7;
  iVar2 = (**(code **)(**(longlong **)(local_e0 + 0x210) + 0x30))
                    (*(longlong **)(local_e0 + 0x210),&local_a8,0,&local_d8);
  if (iVar2 < 0) {
    local_118 = *(ulonglong *)(local_e0 + 0x210);
    FUN_141a447e0(iVar2,
                  "Direct3DDevice->CreateTexture3D(&Desc,NULL,TempTexture3D.GetInitReference())",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RenderTarget.cpp"
                  ,0x726);
  }
  local_f8 = &local_c0;
  local_108 = *(undefined8 *)(uVar3 + 0x38);
  local_100 = 0;
  local_110 = (longlong *)((ulonglong)local_110._4_4_ << 0x20);
  local_118 = local_118 & 0xffffffff00000000;
  (**(code **)(**(longlong **)(local_e0 + 0x200) + 0x170))
            (*(longlong **)(local_e0 + 0x200),local_d8,0,0);
  lVar1 = local_e0;
  local_110 = &local_d0;
  local_118 = local_118 & 0xffffffff00000000;
  iVar2 = (**(code **)(**(longlong **)(local_e0 + 0x200) + 0x70))
                    (*(longlong **)(local_e0 + 0x200),local_d8,0,1);
  if (iVar2 < 0) {
    local_118 = *(ulonglong *)(lVar1 + 0x210);
    FUN_141a447e0(iVar2,"Direct3DDeviceIMContext->Map(TempTexture3D,0,D3D11_MAP_READ,0,&LockedRect)"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RenderTarget.cpp"
                  ,0x72e);
  }
  iVar2 = (int)param_5[1];
  if (iVar2 <= iVar5) {
    *(int *)(param_5 + 1) = iVar2 + iVar5;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2 + iVar5) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_5);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_5 + (longlong)iVar2 * 8),0,(longlong)iVar5 << 3);
  }
  uVar3 = param_4 & 0xffffffff;
  local_e4 = uVar4;
  if ((int)uVar4 < iStackX_24) {
    iVar5 = param_3[3];
    iVar2 = local_e8;
    do {
      iVar6 = param_3[1];
      if (iVar6 < iVar5) {
        do {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_5 +
                             (longlong)(int)((((int)uVar8 - param_3[1]) + iVar6) * uVar7) * 8),
                     (void *)((ulonglong)(uint)(((int)param_4 - (int)uVar3) * local_c4) +
                             (ulonglong)(uint)((iVar6 - param_3[1]) * local_c8) + local_d0),
                     (ulonglong)uVar7 << 3);
          iVar5 = param_3[3];
          iVar6 = iVar6 + 1;
          uVar3 = (ulonglong)local_e4;
          iVar2 = local_e8;
        } while (iVar6 < iVar5);
      }
      uVar4 = (int)param_4 + 1;
      param_4 = (ulonglong)uVar4;
      uVar8 = (ulonglong)(uint)((int)uVar8 + iVar2);
    } while ((int)uVar4 < iStackX_24);
  }
  (**(code **)(**(longlong **)(local_e0 + 0x200) + 0x78))
            (*(longlong **)(local_e0 + 0x200),local_d8,0);
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x10))();
  }
  return;
}



// FUNCTION 141a3d640 FUN_141a3d640 body=556 status=ok
// SIG undefined FUN_141a3d640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a3d640(longlong param_1,longlong *param_2,int *param_3,longlong *param_4,
                  longlong *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_2a8 [32];
  longlong *local_288;
  undefined8 *local_280;
  undefined8 *local_278;
  longlong local_268;
  longlong lStack_260;
  undefined4 local_258;
  longlong local_248 [2];
  int local_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  undefined1 local_228 [16];
  undefined4 local_218;
  int local_214;
  undefined1 local_1f8 [32];
  longlong local_1d8;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  iVar2 = 0;
  if (param_2 == (longlong *)0x0) {
    *(undefined4 *)(param_4 + 1) = 0;
    iVar4 = 0;
    if (*(int *)((longlong)param_4 + 0xc) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_4);
      iVar4 = *(int *)((longlong)param_4 + 0xc);
      iVar2 = (int)param_4[1];
    }
    iVar6 = (param_3[3] - param_3[1]) * (param_3[2] - *param_3);
    iVar1 = iVar2 + iVar6;
    *(int *)(param_4 + 1) = iVar1;
    if (iVar4 < iVar1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_4 + (longlong)iVar2 * 4),0,(longlong)iVar6 << 2);
  }
  else {
    local_248[0] = 0;
    local_248[1] = 0;
    lVar3 = (**(code **)(*param_2 + 0x48))(param_2);
    (**(code **)(**(longlong **)(lVar3 + 0x38) + 0x50))(*(longlong **)(lVar3 + 0x38),local_228);
    if (local_214 == 1) {
      local_268 = *param_5;
      lStack_260 = param_5[1];
      local_258 = (undefined4)param_5[2];
      local_288 = &local_268;
      local_238 = *param_3;
      iStack_234 = param_3[1];
      iStack_230 = param_3[2];
      iStack_22c = param_3[3];
      FUN_141a417e0(param_1,param_2,&local_238,local_248);
    }
    else {
      FRHICommandListBase::FRHICommandListBase(local_1f8,1);
      local_268 = *param_5;
      lStack_260 = param_5[1];
      local_1d8 = param_1 + 0x30;
      if (param_1 == 0) {
        local_1d8 = 0;
      }
      local_238 = *param_3;
      iStack_234 = param_3[1];
      iStack_230 = param_3[2];
      iStack_22c = param_3[3];
      local_258 = (undefined4)param_5[2];
      local_280 = &local_268;
      local_288 = local_248;
      FUN_141a412d0(param_1,local_1f8,param_2,&local_238);
      FRHICommandListBase::~FRHICommandListBase(local_1f8);
    }
    iVar4 = param_3[3];
    iVar1 = param_3[1];
    iVar7 = (param_3[2] - *param_3) * local_214;
    *(undefined4 *)(param_4 + 1) = 0;
    iVar6 = 0;
    if (*(int *)((longlong)param_4 + 0xc) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_4,0);
      iVar6 = *(int *)((longlong)param_4 + 0xc);
      iVar2 = (int)param_4[1];
    }
    iVar5 = (iVar4 - iVar1) * iVar7 + iVar2;
    *(int *)(param_4 + 1) = iVar5;
    if (iVar6 < iVar5) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4,iVar2);
    }
    local_258 = (undefined4)param_5[2];
    local_268 = *param_5;
    lStack_260 = param_5[1];
    iVar2 = FUN_141a28860(local_218);
    lVar3 = local_248[0];
    local_280 = (undefined8 *)*param_4;
    local_278 = &local_268;
    local_288 = (longlong *)CONCAT44(local_288._4_4_,iVar2 * iVar7);
    FUN_141a28f60(local_218,iVar7,iVar4 - iVar1,local_248[0]);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 141a3d870 FUN_141a3d870 body=476 status=ok
// SIG undefined FUN_141a3d870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a3d870(longlong param_1,longlong *param_2,int *param_3,longlong *param_4,
                  longlong *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  longlong local_278;
  longlong lStack_270;
  undefined4 local_268;
  longlong local_258 [2];
  int local_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  undefined1 local_238 [16];
  undefined4 local_228;
  int local_224;
  undefined1 local_208 [32];
  longlong local_1e8;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  iVar3 = 0;
  local_258[0] = 0;
  local_258[1] = 0;
  lVar4 = 0;
  if (param_2 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x50))(*(longlong **)(lVar4 + 0x38),local_238);
  if (local_224 == 1) {
    local_278 = *param_5;
    lStack_270 = param_5[1];
    local_268 = (undefined4)param_5[2];
    local_298 = &local_278;
    local_248 = *param_3;
    iStack_244 = param_3[1];
    iStack_240 = param_3[2];
    iStack_23c = param_3[3];
    FUN_141a417e0(param_1,param_2,&local_248,local_258);
  }
  else {
    FRHICommandListBase::FRHICommandListBase(local_208,1);
    local_278 = *param_5;
    lStack_270 = param_5[1];
    local_1e8 = param_1 + 0x30;
    if (param_1 == 0) {
      local_1e8 = 0;
    }
    local_248 = *param_3;
    iStack_244 = param_3[1];
    iStack_240 = param_3[2];
    iStack_23c = param_3[3];
    local_268 = (undefined4)param_5[2];
    local_290 = &local_278;
    local_298 = local_258;
    FUN_141a412d0(param_1,local_208,param_2,&local_248);
    FRHICommandListBase::~FRHICommandListBase(local_208);
  }
  iVar1 = param_3[3];
  iVar2 = param_3[1];
  iVar7 = (param_3[2] - *param_3) * local_224;
  *(undefined4 *)(param_4 + 1) = 0;
  iVar6 = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_4,0);
    iVar6 = *(int *)((longlong)param_4 + 0xc);
    iVar3 = (int)param_4[1];
  }
  iVar5 = (iVar1 - iVar2) * iVar7 + iVar3;
  *(int *)(param_4 + 1) = iVar5;
  if (iVar6 < iVar5) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar3);
  }
  lVar4 = local_258[0];
  if (*(int *)((longlong)param_2 + 0x3c) != 0) {
    local_268 = (undefined4)param_5[2];
    local_278 = *param_5;
    lStack_270 = param_5[1];
    iVar3 = FUN_141a28860(local_228);
    local_290 = (undefined8 *)*param_4;
    local_288 = &local_278;
    local_298 = (longlong *)CONCAT44(local_298._4_4_,iVar3 * iVar7);
    FUN_141a29d20(local_228,iVar7,iVar1 - iVar2,lVar4);
  }
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  return;
}



// FUNCTION 141a3da50 FUN_141a3da50 body=1158 status=ok
// SIG undefined FUN_141a3da50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a3da50(longlong param_1,longlong *param_2,int *param_3,longlong *param_4,int param_5,
                  int param_6,int param_7)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined8 local_120;
  undefined8 local_118;
  int local_110;
  int *local_108;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  int local_e0;
  longlong local_d8;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined1 local_88 [8];
  int local_80;
  undefined4 local_78;
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_f0 = param_1;
  if (param_2 == (longlong *)0x0) {
    local_d8 = 0;
  }
  else {
    local_d8 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  iVar2 = param_3[3];
  iVar7 = param_3[2] - *param_3;
  iVar6 = param_3[1];
  (**(code **)(**(longlong **)(local_d8 + 0x38) + 0x50))(*(longlong **)(local_d8 + 0x38),local_88);
  iVar3 = 0;
  switch(local_78) {
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    iVar3 = 8;
    break;
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
    iVar3 = 4;
    break;
  case 0x35:
  case 0x36:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
    iVar3 = 2;
  }
  *(undefined4 *)(param_4 + 1) = 0;
  iVar9 = (iVar2 - iVar6) * iVar7;
  if (*(int *)((longlong)param_4 + 0xc) != iVar9) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_4,iVar9);
  }
  lVar8 = local_f0;
  local_d0 = *param_3;
  local_cc = param_3[1];
  local_c4 = param_3[2];
  local_c0 = param_3[3];
  local_c8 = 0;
  local_f8 = (longlong *)0x0;
  local_bc = 1;
  local_b0 = 1;
  local_ac = 1;
  local_a4 = 1;
  local_9c = 3;
  local_94 = 0x20000;
  local_b8 = iVar7;
  local_b4 = iVar2 - iVar6;
  iVar2 = (**(code **)(**(longlong **)(local_f0 + 0x210) + 0x28))
                    (*(longlong **)(local_f0 + 0x210),&local_b8,0,&local_f8);
  if (iVar2 < 0) {
    local_128 = *(ulonglong *)(lVar8 + 0x210);
    FUN_141a447e0(iVar2,
                  "Direct3DDevice->CreateTexture2D(&Desc,NULL,TempTexture2D.GetInitReference())",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RenderTarget.cpp"
                  ,0x516);
  }
  local_110 = 0;
  if (local_60 == 4) {
    if (param_5 == 1) {
      iVar2 = 1;
    }
    else if (param_5 == 2) {
      iVar2 = 2;
    }
    else if (param_5 == 3) {
      iVar2 = 3;
    }
    else {
      iVar2 = 4;
      if ((param_5 != 4) && (iVar2 = local_110, param_5 == 5)) {
        iVar2 = 5;
      }
    }
    local_110 = (iVar2 + param_6 * 6) * local_80 + param_7;
  }
  local_108 = &local_d0;
  local_118 = *(undefined8 *)(local_d8 + 0x38);
  local_120 = (longlong *)((ulonglong)local_120._4_4_ << 0x20);
  local_128 = local_128 & 0xffffffff00000000;
  (**(code **)(**(longlong **)(lVar8 + 0x200) + 0x170))(*(longlong **)(lVar8 + 0x200),local_f8,0,0);
  local_120 = &local_e8;
  local_128 = local_128 & 0xffffffff00000000;
  iVar2 = (**(code **)(**(longlong **)(lVar8 + 0x200) + 0x70))
                    (*(longlong **)(lVar8 + 0x200),local_f8,0,1);
  if (iVar2 < 0) {
    local_128 = *(ulonglong *)(lVar8 + 0x210);
    FUN_141a447e0(iVar2,"Direct3DDeviceIMContext->Map(TempTexture2D,0,D3D11_MAP_READ,0,&LockedRect)"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RenderTarget.cpp"
                  ,0x523);
  }
  iVar2 = (int)param_4[1];
  if (iVar2 <= iVar9) {
    *(int *)(param_4 + 1) = iVar2 + iVar9;
    if (*(int *)((longlong)param_4 + 0xc) < iVar2 + iVar9) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_4);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_4 + (longlong)iVar2 * 8),0,(longlong)iVar9 << 3);
  }
  if (iVar3 == 2) {
    iVar2 = param_3[1];
    if (iVar2 < param_3[3]) {
      iVar6 = param_3[2];
      do {
        puVar5 = (undefined2 *)((ulonglong)(uint)((iVar2 - param_3[1]) * local_e0) + local_e8);
        puVar4 = (undefined2 *)(*param_4 + (longlong)((iVar2 - param_3[1]) * iVar7) * 8);
        iVar3 = *param_3;
        if (iVar3 < iVar6) {
          do {
            iVar3 = iVar3 + 1;
            *puVar4 = *puVar5;
            puVar5 = puVar5 + 1;
            *(undefined4 *)(puVar4 + 1) = 0;
            puVar4[3] = 0;
            puVar4 = puVar4 + 4;
            iVar6 = param_3[2];
          } while (iVar3 < iVar6);
        }
        iVar2 = iVar2 + 1;
        lVar8 = local_f0;
      } while (iVar2 < param_3[3]);
    }
  }
  else if (iVar3 == 4) {
    iVar2 = param_3[1];
    if (iVar2 < param_3[3]) {
      iVar6 = param_3[2];
      do {
        puVar5 = (undefined2 *)((ulonglong)(uint)((iVar2 - param_3[1]) * local_e0) + local_e8);
        iVar3 = *param_3;
        puVar4 = (undefined2 *)(*param_4 + (longlong)((iVar2 - param_3[1]) * iVar7) * 8);
        if (iVar3 < iVar6) {
          do {
            iVar3 = iVar3 + 1;
            *puVar4 = *puVar5;
            puVar1 = puVar5 + 1;
            puVar5 = puVar5 + 2;
            puVar4[1] = *puVar1;
            *(undefined4 *)(puVar4 + 2) = 0;
            iVar6 = param_3[2];
            puVar4 = puVar4 + 4;
          } while (iVar3 < iVar6);
        }
        iVar2 = iVar2 + 1;
        lVar8 = local_f0;
      } while (iVar2 < param_3[3]);
    }
  }
  else if ((iVar3 == 8) && (iVar2 = param_3[1], iVar2 < param_3[3])) {
    iVar6 = param_3[2];
    do {
      puVar4 = (undefined2 *)((ulonglong)(uint)((iVar2 - param_3[1]) * local_e0) + local_e8);
      puVar5 = (undefined2 *)(*param_4 + (longlong)((iVar2 - param_3[1]) * iVar7) * 8);
      iVar3 = *param_3;
      if (iVar3 < iVar6) {
        do {
          iVar3 = iVar3 + 1;
          *puVar5 = *puVar4;
          puVar5[1] = puVar4[1];
          puVar5[2] = puVar4[2];
          puVar5[3] = puVar4[3];
          iVar6 = param_3[2];
          puVar4 = puVar4 + 4;
          puVar5 = puVar5 + 4;
        } while (iVar3 < iVar6);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3[3]);
  }
  (**(code **)(**(longlong **)(lVar8 + 0x200) + 0x78))(*(longlong **)(lVar8 + 0x200),local_f8,0);
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x10))();
  }
  return;
}



// FUNCTION 141a3df20 FUN_141a3df20 body=43 status=ok
// SIG undefined FUN_141a3df20(void)

void FUN_141a3df20(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  FUN_141a42650(param_2,param_3,param_4,param_5,0);
  return;
}



// FUNCTION 141a3df50 FUN_141a3df50 body=227 status=ok
// SIG undefined FUN_141a3df50(void)

void FUN_141a3df50(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,int param_6)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  
  if (param_6 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_1469fcdc8) {
      _Init_thread_header(&DAT_1469fcdc8);
      if (DAT_1469fcdc8 == -1) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar2 = (longlong *)
                 (**(code **)(*DAT_1468b1f88 + 0x98))
                           (DAT_1468b1f88,L"r.DefaultBackBufferPixelFormat");
        puVar3 = (undefined4 *)0x0;
        if (plVar2 != (longlong *)0x0) {
          puVar3 = (undefined4 *)(**(code **)(*plVar2 + 0x38))(plVar2);
        }
        DAT_1469fcdc0 = puVar3;
        _Init_thread_footer(&DAT_1469fcdc8);
      }
    }
    uVar1 = EDefaultBackBufferPixelFormat::FromInt(*DAT_1469fcdc0);
    EDefaultBackBufferPixelFormat::Convert2PixelFormat(uVar1);
  }
  FUN_141a42650(param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 141a3e110 FUN_141a3e110 body=704 status=ok
// SIG undefined FUN_141a3e110(void)

void FUN_141a3e110(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  BOOL BVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  *(undefined4 *)(param_1 + 0x26f8) = 0x26;
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x1e10) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x1e18) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x1e20) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x1e28) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x1e30) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x1e34) = uVar1;
  *(undefined4 *)(param_1 + 0x1e38) = uVar2;
  *(undefined4 *)(param_1 + 0x1e3c) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x1e40) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x1e44) = uVar1;
  *(undefined4 *)(param_1 + 0x1e48) = uVar2;
  *(undefined4 *)(param_1 + 0x1e4c) = uVar3;
  if (*(longlong *)(param_1 + 0x1e08) != *(longlong *)(param_2 + 0x98)) {
    *(longlong *)(param_1 + 0x1e08) = *(longlong *)(param_2 + 0x98);
    (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x88))();
  }
  lVar7 = *(longlong *)(param_2 + 0xa0);
  if (*(longlong *)(param_1 + 0x1a18) != lVar7) {
    *(longlong *)(param_1 + 0x1a18) = lVar7;
    (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x58))
              (*(longlong **)(param_1 + 0x1f8),lVar7,0,0);
  }
  lVar7 = *(longlong *)(param_2 + 0xa8);
  if (*(longlong *)(param_1 + 0x1a38) != lVar7) {
    *(longlong *)(param_1 + 0x1a38) = lVar7;
    (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x48))
              (*(longlong **)(param_1 + 0x1f8),lVar7,0,0);
  }
  lVar7 = *(longlong *)(param_2 + 0xb0);
  if (*(longlong *)(param_1 + 0x1a20) != lVar7) {
    *(longlong *)(param_1 + 0x1a20) = lVar7;
    (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x1e0))
              (*(longlong **)(param_1 + 0x1f8),lVar7,0,0);
  }
  lVar7 = *(longlong *)(param_2 + 0xb8);
  if (*(longlong *)(param_1 + 0x1a28) != lVar7) {
    *(longlong *)(param_1 + 0x1a28) = lVar7;
    (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x200))
              (*(longlong **)(param_1 + 0x1f8),lVar7,0,0);
  }
  lVar7 = *(longlong *)(param_2 + 0xc0);
  if (*(longlong *)(param_1 + 0x1a30) != lVar7) {
    *(longlong *)(param_1 + 0x1a30) = lVar7;
    (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0xb8))
              (*(longlong **)(param_1 + 0x1f8),lVar7,0,0);
  }
  if ((*(longlong *)(param_2 + 0xb0) == 0) || (*(longlong *)(param_2 + 0xb8) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x4279) = uVar5;
  *(undefined1 *)(param_1 + 0x4278) = 1;
  if (DAT_146ab6328 != '\0') {
    BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17bc8));
    if (BVar6 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17bc8));
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=
            (param_1 + ((ulonglong)*(uint *)(param_1 + 0x17bc0) + 0x868) * 8,param_2);
  *(uint *)(param_1 + 0x17bc0) = (*(int *)(param_1 + 0x17bc0) + 1U) % 10000;
  if (DAT_146ab6328 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17bc8));
  }
  *(undefined8 *)(param_1 + 17000) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x4270) = 0xffff;
  lVar7 = param_1 + 0x3fc8;
  lVar8 = 6;
  do {
    lVar9 = 0xe;
    do {
      TRefCountPtr<FRHIIndexBuffer>::operator=(lVar7,0);
      lVar7 = lVar7 + 8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fcd30) {
    _Init_thread_header(&DAT_1469fcd30);
    if (DAT_1469fcd30 == -1) {
      DAT_1469fcd2c = D3D11RHI_ShouldCreateWithD3DDebug();
      _Init_thread_footer(&DAT_1469fcd30);
    }
  }
  if ((DAT_1469fc534 != 0) || (DAT_1469fcd2c != '\0')) {
    FUN_141a27b40(param_1 + -0x38);
  }
  return;
}



// FUNCTION 141a3e3d0 FUN_141a3e3d0 body=50 status=ok
// SIG undefined FUN_141a3e3d0(void)

void FUN_141a3e3d0(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x17bf8);
  if (DAT_1469fc534 != 0) {
    FUN_141a1a5d0(param_1 + -0x30);
    return;
  }
  return;
}



// FUNCTION 141a3e480 FUN_141a3e480 body=222 status=ok
// SIG undefined FUN_141a3e480(void)

void FUN_141a3e480(longlong param_1,longlong param_2)

{
  undefined8 local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (**(code **)(*DAT_146ab6358 + 0xe8))
            (DAT_146ab6358,&local_res8,*(undefined8 *)(param_2 + 0x18),
             *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
             *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
             *(undefined8 *)(param_2 + 0x40));
  (*(code *)**(undefined8 **)(param_1 + 8))(param_1 + 8,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,*(undefined8 *)(param_2 + 0x58),0);
  (**(code **)(*(longlong *)(param_1 + 8) + 0x10))(param_1 + 8,*(undefined8 *)(param_2 + 0x50));
  local_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x3f800000;
  uStack_c = 0x3f800000;
  (**(code **)(*(longlong *)(param_1 + 8) + 0x18))
            (param_1 + 8,*(undefined8 *)(param_2 + 0x48),&local_18);
  if (DAT_146ab62ec != '\0') {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x20))(param_1 + 8,*(undefined1 *)(param_2 + 0x60));
  }
  *(undefined4 *)(param_1 + 0x2700) = *(undefined4 *)(param_2 + 100);
  return;
}



// FUNCTION 141a3e560 RHISetMultipleViewports body=146 status=ok
// SIG undefined RHISetMultipleViewports(void)

void FD3D11DynamicRHI::RHISetMultipleViewports(longlong param_1,uint param_2,void *param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x1a70) == param_2) &&
     (iVar1 = ::_guard_xfg_dispatch_icall_nop
                        ((void *)(param_1 + 0x1a74),param_3,(ulonglong)param_2 * 0x18), iVar1 == 0))
  {
    return;
  }
  ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x1a74),param_3,(ulonglong)param_2 * 0x18);
  *(uint *)(param_1 + 0x1a70) = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x160))
            (*(longlong **)(param_1 + 0x200),param_2,param_3);
  return;
}



// FUNCTION 141a3e630 FUN_141a3e630 body=1119 status=ok
// SIG undefined FUN_141a3e630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a3e630(longlong param_1,uint param_2,longlong param_3,longlong *param_4,uint param_5,
                  longlong param_6)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined1 auStack_138 [32];
  uint local_118;
  uint local_110;
  undefined4 local_108;
  char local_f8;
  uint local_f4;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d0;
  undefined1 local_c8 [4];
  int local_c4;
  uint local_c0;
  uint local_b0;
  uint local_ac;
  uint local_88;
  uint uStack_84;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_d0 = param_6;
  local_f4 = param_2;
  if ((param_4 == (longlong *)0x0) || ((longlong *)*param_4 == (longlong *)0x0)) {
    plVar5 = (longlong *)0x0;
    local_f0 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_4 + 0x48))();
    plVar6 = (longlong *)0x0;
    local_f0 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(param_1 + 0x427c) = *(undefined4 *)((longlong)param_4 + 0xc);
      plVar6 = (longlong *)FUN_141a2ffc0(plVar5);
      local_f0 = plVar6;
      FUN_141a28980(param_1 + -0x30,plVar5);
    }
  }
  plVar11 = (longlong *)0x0;
  local_f8 = '\0';
  if (*(longlong **)(param_1 + 0x2788) != plVar6) {
    plVar9 = *(longlong **)(param_1 + 0x2790);
    *(longlong **)(param_1 + 0x2790) = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    plVar9 = *(longlong **)(param_1 + 0x2788);
    *(longlong **)(param_1 + 0x2788) = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    local_f8 = '\x01';
    param_2 = local_f4;
  }
  if (plVar5 != (longlong *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x3fbc);
    uVar4 = *(uint *)((longlong)param_4 + 0xc) & 0xf;
    if ((int)plVar5[1] == 0) {
      if (uVar4 != 2) goto LAB_141a3e76a;
      *(undefined4 *)(plVar5 + 1) = 1;
    }
    if (uVar4 == 2) {
      *(undefined1 *)(plVar5 + 2) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = uVar1;
    }
  }
LAB_141a3e76a:
  puVar12 = (undefined4 *)(param_3 + 0xc);
  lVar7 = (longlong)&local_88 - param_1;
  plVar5 = (longlong *)(param_1 + 0x2708);
  plVar6 = plVar11;
  local_e0 = lVar7;
  do {
    plVar9 = plVar11;
    if (((uint)plVar6 < param_2) && (*(longlong **)(puVar12 + -3) != (longlong *)0x0)) {
      uVar4 = puVar12[-1];
      local_e8 = (longlong *)CONCAT44(local_e8._4_4_,*puVar12);
      lVar7 = (**(code **)(**(longlong **)(puVar12 + -3) + 0x48))();
      if (lVar7 != 0) {
        if (*(char *)(lVar7 + 0x58) != '\0') {
          uVar4 = uVar4 * *(int *)(lVar7 + 0x5c) + (int)local_e8;
        }
        if (uVar4 < *(uint *)(lVar7 + 0x50)) {
          plVar9 = *(longlong **)(*(longlong *)(lVar7 + 0x48) + (longlong)(int)uVar4 * 8);
        }
        uVar1 = *(undefined4 *)(param_1 + 0x3fbc);
        if (*(int *)(lVar7 + 8) == 0) {
          *(undefined4 *)(lVar7 + 8) = 1;
        }
        *(undefined1 *)(lVar7 + 0x10) = 1;
        *(undefined4 *)(lVar7 + 0xc) = uVar1;
      }
      FUN_141a28980(param_1 + -0x30);
      lVar7 = local_e0;
    }
    plVar2 = (longlong *)*plVar5;
    *(longlong **)(lVar7 + -0x2708 + (longlong)plVar5) = plVar9;
    if (plVar2 != plVar9) {
      *plVar5 = (longlong)plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      local_f8 = '\x01';
      lVar7 = local_e0;
    }
    uVar4 = (uint)plVar6 + 1;
    plVar6 = (longlong *)(ulonglong)uVar4;
    puVar12 = puVar12 + 6;
    plVar5 = plVar5 + 1;
    param_2 = local_f4;
  } while (uVar4 < 8);
  if (*(uint *)(param_1 + 0x3fb0) != local_f4) {
    *(uint *)(param_1 + 0x3fb0) = local_f4;
    local_f8 = '\x01';
  }
  puVar10 = (undefined8 *)(param_1 + 0x2748);
  local_d0 = local_d0 - param_1;
  plVar5 = plVar11;
  cVar8 = local_f8;
  do {
    plVar6 = plVar11;
    if (((uint)plVar5 < param_5) &&
       (lVar7 = *(longlong *)(local_d0 + -0x2748 + (longlong)puVar10), lVar7 != 0)) {
      plVar6 = *(longlong **)(lVar7 + 0x18);
      if (plVar6 != (longlong *)0x0) {
        lVar3 = *(longlong *)(lVar7 + 0x20);
        uVar1 = *(undefined4 *)(param_1 + 0x3fbc);
        *(undefined1 *)(lVar3 + 0x10) = 1;
        *(undefined4 *)(lVar3 + 0xc) = uVar1;
      }
      FUN_141a28980(param_1 + -0x30,*(undefined8 *)(lVar7 + 0x20));
      cVar8 = local_f8;
    }
    plVar9 = (longlong *)*puVar10;
    if (plVar9 != plVar6) {
      *puVar10 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      cVar8 = '\x01';
      local_f8 = '\x01';
    }
    uVar4 = (uint)plVar5 + 1;
    plVar5 = (longlong *)(ulonglong)uVar4;
    puVar10 = puVar10 + 1;
  } while (uVar4 < 8);
  if (*(uint *)(param_1 + 0x3fb4) == param_5) {
    if (cVar8 != '\0') goto LAB_141a3e91c;
  }
  else {
    *(uint *)(param_1 + 0x3fb4) = param_5;
LAB_141a3e91c:
    FUN_141a28750(param_1 + -0x30);
  }
  plVar6 = local_f0;
  plVar5 = (longlong *)CONCAT44(uStack_84,local_88);
  if (plVar5 == (longlong *)0x0) {
    if (local_f0 == (longlong *)0x0) {
      return;
    }
    lVar7 = *local_f0;
    local_f0 = (longlong *)0x0;
    (**(code **)(lVar7 + 0x38))(plVar6,&local_f0);
    (**(code **)(*local_f0 + 0x50))(local_f0,&local_88);
    local_108 = 0x3f800000;
    local_110 = uStack_84;
    local_118 = local_88;
    FUN_141a40300(param_1,0,0,0);
    if (local_f0 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_f0 + 0x10))();
    return;
  }
  (**(code **)(*plVar5 + 0x40))(plVar5,local_c8);
  local_e8 = (longlong *)0x0;
  (**(code **)(*plVar5 + 0x38))(plVar5,&local_e8);
  local_e0 = 0;
  if (3 < local_c4) {
    if (local_c4 < 8) {
      (**(code **)(*local_e8 + 0x50))(local_e8,&local_88);
      local_ac = uStack_84;
      local_b0 = local_88;
      if (local_c4 - 4U < 2) {
        plVar11 = (longlong *)(ulonglong)local_c0;
      }
      goto LAB_141a3e9b3;
    }
    if (local_c4 == 8) {
      (**(code **)(*local_e8 + 0x50))(local_e8,&local_b0);
      plVar11 = (longlong *)(ulonglong)local_c0;
      goto LAB_141a3e9b3;
    }
  }
  local_e0._4_4_ = 0;
  local_e0._0_4_ = 0;
  local_ac = local_e0._4_4_;
  local_b0 = (uint)local_e0;
LAB_141a3e9b3:
  uVar4 = local_b0 >> ((byte)plVar11 & 0x1f);
  local_e0._4_4_ = local_ac >> ((byte)plVar11 & 0x1f);
  local_e0._0_4_ = uVar4;
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
  local_108 = 0x3f800000;
  local_110 = local_e0._4_4_;
  local_118 = uVar4;
  FUN_141a40300(param_1,0,0,0);
  return;
}



// FUNCTION 141a3ea90 FUN_141a3ea90 body=1022 status=ok
// SIG undefined FUN_141a3ea90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a3ea90(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 (*pauVar17) [16];
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  undefined4 uVar22;
  undefined1 auStack_118 [32];
  int local_f8;
  undefined8 *local_f0;
  char local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_b8;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  iVar2 = *(int *)(param_2 + 0x1e8);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (0 < iVar2) {
    _guard_xfg_dispatch_icall_nop(local_a8,(void *)(param_2 + 0x1a8),(longlong)iVar2 << 3);
  }
  local_f0 = local_a8;
  local_f8 = iVar2;
  FUN_141a3e630(param_1,*(undefined4 *)(param_2 + 0xc0),param_2,param_2 + 400);
  cVar1 = *(char *)(param_2 + 0xc4);
  if (((cVar1 != '\0') || (*(char *)(param_2 + 0x1a1) != '\0')) ||
     (*(char *)(param_2 + 0x1a0) != '\0')) {
    local_e0 = 0;
    uVar22 = 0;
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_2 + 0xc0);
      lVar20 = (longlong)iVar2;
      if (*(char *)(param_2 + 0x28c) == '\0') {
        iVar21 = 0;
        if (3 < iVar2) {
          pauVar17 = (undefined1 (*) [16])&local_98;
          uVar12 = (iVar2 - 4U >> 2) + 1;
          plVar16 = (longlong *)(param_2 + 0x30);
          uVar19 = (ulonglong)uVar12;
          iVar21 = uVar12 * 4;
          do {
            lVar20 = plVar16[-6];
            if (lVar20 != 0) {
              local_b8 = *(undefined4 *)(lVar20 + 0x30);
              auVar3._12_4_ = local_b8;
              auVar3._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar20 + 0x20),4);
              pauVar17[-1] = auVar3;
            }
            lVar20 = plVar16[-3];
            if (lVar20 != 0) {
              local_b8 = *(undefined4 *)(lVar20 + 0x30);
              auVar4._12_4_ = local_b8;
              auVar4._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar20 + 0x20),4);
              *pauVar17 = auVar4;
            }
            lVar20 = *plVar16;
            if (lVar20 != 0) {
              local_b8 = *(undefined4 *)(lVar20 + 0x30);
              auVar5._12_4_ = local_b8;
              auVar5._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar20 + 0x20),4);
              pauVar17[1] = auVar5;
            }
            lVar20 = plVar16[3];
            if (lVar20 != 0) {
              local_b8 = *(undefined4 *)(lVar20 + 0x30);
              auVar6._12_4_ = local_b8;
              auVar6._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar20 + 0x20),4);
              pauVar17[2] = auVar6;
            }
            plVar16 = plVar16 + 0xc;
            pauVar17 = pauVar17 + 4;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        if (iVar21 < iVar2) {
          pauVar17 = (undefined1 (*) [16])(local_a8 + (longlong)iVar21 * 2);
          uVar19 = (ulonglong)(uint)(iVar2 - iVar21);
          plVar16 = (longlong *)(param_2 + (longlong)iVar21 * 0x18);
          do {
            lVar20 = *plVar16;
            if (lVar20 != 0) {
              local_b8 = *(undefined4 *)(lVar20 + 0x30);
              auVar7._12_4_ = local_b8;
              auVar7._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar20 + 0x20),4);
              *pauVar17 = auVar7;
            }
            plVar16 = plVar16 + 3;
            pauVar17 = pauVar17 + 1;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      else {
        lVar15 = 0;
        if (3 < lVar20) {
          puVar18 = &local_98;
          lVar14 = (lVar20 - 4U >> 2) + 1;
          lVar15 = lVar14 * 4;
          lVar13 = param_2 + 500;
          do {
            uVar8 = *(undefined8 *)(lVar13 + 4);
            uVar9 = *(undefined8 *)(lVar13 + 0x10);
            uVar10 = *(undefined8 *)(lVar13 + 0x18);
            puVar18[-2] = *(undefined8 *)(lVar13 + -4);
            puVar18[-1] = uVar8;
            uVar8 = *(undefined8 *)(lVar13 + 0x24);
            uVar11 = *(undefined8 *)(lVar13 + 0x2c);
            *puVar18 = uVar9;
            puVar18[1] = uVar10;
            local_d8 = *(undefined8 *)(lVar13 + 0x38);
            uStack_d0 = *(undefined8 *)(lVar13 + 0x40);
            puVar18[2] = uVar8;
            puVar18[3] = uVar11;
            puVar18[4] = local_d8;
            puVar18[5] = uStack_d0;
            puVar18 = puVar18 + 8;
            lVar14 = lVar14 + -1;
            lVar13 = lVar13 + 0x50;
          } while (lVar14 != 0);
        }
        if (lVar15 < lVar20) {
          puVar18 = local_a8 + lVar15 * 2;
          lVar20 = lVar20 - lVar15;
          lVar15 = param_2 + (lVar15 + 0x19) * 0x14;
          do {
            local_d8 = *(undefined8 *)(lVar15 + -4);
            uStack_d0 = *(undefined8 *)(lVar15 + 4);
            lVar15 = lVar15 + 0x14;
            *puVar18 = local_d8;
            puVar18[1] = uStack_d0;
            puVar18 = puVar18 + 2;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
      }
    }
    local_e8 = *(char *)(param_2 + 0x1a1);
    if ((*(char *)(param_2 + 0x1a0) != '\0') || (local_e8 != '\0')) {
      uVar22 = *(undefined4 *)(*(longlong *)(param_2 + 400) + 0x24);
      local_e0 = *(undefined4 *)(*(longlong *)(param_2 + 400) + 0x28);
    }
    local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,uVar22);
    local_f8 = CONCAT31(local_f8._1_3_,*(char *)(param_2 + 0x1a0));
    (**(code **)(*(longlong *)(param_1 + -0x30) + 0x770))
              (param_1 + -0x30,cVar1,*(undefined4 *)(param_2 + 0xc0),local_a8);
  }
  return;
}



// FUNCTION 141a3ee90 FUN_141a3ee90 body=112 status=ok
// SIG undefined FUN_141a3ee90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a3ee90(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    local_28 = 0;
    local_20 = DAT_1464c9c64;
    param_6 = DAT_1464c9c64;
  }
  else {
    local_20 = param_5;
    local_28 = CONCAT44(param_4,param_3);
  }
  local_1c = param_6;
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x168))
            (*(longlong **)(param_1 + 0x1d0),1,&local_28);
  return;
}



// FUNCTION 141a3ef00 FUN_141a3ef00 body=86 status=ok
// SIG undefined FUN_141a3ef00(void)

void FUN_141a3ef00(longlong param_1,undefined8 param_2,int param_3,ushort param_4,ushort param_5,
                  void *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4308) + (longlong)param_3 * 8);
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)param_4 + *(longlong *)(lVar1 + 0x50)),param_6,
             (ulonglong)(uint)param_5);
  uVar3 = (uint)param_4 + (uint)param_5;
  uVar2 = *(uint *)(lVar1 + 0x58);
  if (*(uint *)(lVar1 + 0x58) <= uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(lVar1 + 0x58) = uVar2;
  return;
}



// FUNCTION 141a3ef60 FUN_141a3ef60 body=86 status=ok
// SIG undefined FUN_141a3ef60(void)

void FUN_141a3ef60(longlong param_1,undefined8 param_2,int param_3,ushort param_4,ushort param_5,
                  void *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x42d8) + (longlong)param_3 * 8);
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)param_4 + *(longlong *)(lVar1 + 0x50)),param_6,
             (ulonglong)(uint)param_5);
  uVar3 = (uint)param_4 + (uint)param_5;
  uVar2 = *(uint *)(lVar1 + 0x58);
  if (*(uint *)(lVar1 + 0x58) <= uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(lVar1 + 0x58) = uVar2;
  return;
}



// FUNCTION 141a3efc0 FUN_141a3efc0 body=86 status=ok
// SIG undefined FUN_141a3efc0(void)

void FUN_141a3efc0(longlong param_1,undefined8 param_2,int param_3,ushort param_4,ushort param_5,
                  void *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x42f8) + (longlong)param_3 * 8);
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)param_4 + *(longlong *)(lVar1 + 0x50)),param_6,
             (ulonglong)(uint)param_5);
  uVar3 = (uint)param_4 + (uint)param_5;
  uVar2 = *(uint *)(lVar1 + 0x58);
  if (*(uint *)(lVar1 + 0x58) <= uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(lVar1 + 0x58) = uVar2;
  return;
}



// FUNCTION 141a3f020 FUN_141a3f020 body=86 status=ok
// SIG undefined FUN_141a3f020(void)

void FUN_141a3f020(longlong param_1,undefined8 param_2,int param_3,ushort param_4,ushort param_5,
                  void *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x42c8) + (longlong)param_3 * 8);
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)param_4 + *(longlong *)(lVar1 + 0x50)),param_6,
             (ulonglong)(uint)param_5);
  uVar3 = (uint)param_4 + (uint)param_5;
  uVar2 = *(uint *)(lVar1 + 0x58);
  if (*(uint *)(lVar1 + 0x58) <= uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(lVar1 + 0x58) = uVar2;
  return;
}



// FUNCTION 141a3f080 FUN_141a3f080 body=86 status=ok
// SIG undefined FUN_141a3f080(void)

void FUN_141a3f080(longlong param_1,undefined8 param_2,int param_3,ushort param_4,ushort param_5,
                  void *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x42e8) + (longlong)param_3 * 8);
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)param_4 + *(longlong *)(lVar1 + 0x50)),param_6,
             (ulonglong)(uint)param_5);
  uVar3 = (uint)param_4 + (uint)param_5;
  uVar2 = *(uint *)(lVar1 + 0x58);
  if (*(uint *)(lVar1 + 0x58) <= uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(lVar1 + 0x58) = uVar2;
  return;
}



// FUNCTION 141a3f0e0 FUN_141a3f0e0 body=86 status=ok
// SIG undefined FUN_141a3f0e0(void)

void FUN_141a3f0e0(longlong param_1,undefined8 param_2,int param_3,ushort param_4,ushort param_5,
                  void *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x42b8) + (longlong)param_3 * 8);
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)param_4 + *(longlong *)(lVar1 + 0x50)),param_6,
             (ulonglong)(uint)param_5);
  uVar3 = (uint)param_4 + (uint)param_5;
  uVar2 = *(uint *)(lVar1 + 0x58);
  if (*(uint *)(lVar1 + 0x58) <= uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(lVar1 + 0x58) = uVar2;
  return;
}



// FUNCTION 141a3f140 FUN_141a3f140 body=58 status=ok
// SIG undefined FUN_141a3f140(void)

void FUN_141a3f140(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  uVar2 = uVar1;
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x20);
    uVar2 = *(undefined8 *)(param_4 + 0x18);
  }
  FUN_141a1e7b0(param_1 + -0x30,uVar1,uVar2,param_3,0,0);
  return;
}



// FUNCTION 141a3f180 FUN_141a3f180 body=58 status=ok
// SIG undefined FUN_141a3f180(void)

void FUN_141a3f180(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  uVar2 = uVar1;
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x20);
    uVar2 = *(undefined8 *)(param_4 + 0x18);
  }
  FUN_141a1e480(param_1 + -0x30,uVar1,uVar2,param_3,0,0);
  return;
}



// FUNCTION 141a3f1c0 FUN_141a3f1c0 body=58 status=ok
// SIG undefined FUN_141a3f1c0(void)

void FUN_141a3f1c0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  uVar2 = uVar1;
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x20);
    uVar2 = *(undefined8 *)(param_4 + 0x18);
  }
  FUN_141a1e6a0(param_1 + -0x30,uVar1,uVar2,param_3,0,0);
  return;
}



// FUNCTION 141a3f200 FUN_141a3f200 body=58 status=ok
// SIG undefined FUN_141a3f200(void)

void FUN_141a3f200(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  uVar2 = uVar1;
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x20);
    uVar2 = *(undefined8 *)(param_4 + 0x18);
  }
  FUN_141a1e370(param_1 + -0x30,uVar1,uVar2,param_3,0,0);
  return;
}



// FUNCTION 141a3f240 FUN_141a3f240 body=58 status=ok
// SIG undefined FUN_141a3f240(void)

void FUN_141a3f240(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  uVar2 = uVar1;
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x20);
    uVar2 = *(undefined8 *)(param_4 + 0x18);
  }
  FUN_141a1e590(param_1 + -0x30,uVar1,uVar2,param_3,0,0);
  return;
}



// FUNCTION 141a3f280 FUN_141a3f280 body=58 status=ok
// SIG undefined FUN_141a3f280(void)

void FUN_141a3f280(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  uVar2 = uVar1;
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x20);
    uVar2 = *(undefined8 *)(param_4 + 0x18);
  }
  FUN_141a1e8c0(param_1 + -0x30,uVar1,uVar2,param_3,0,0);
  return;
}



// FUNCTION 141a3f2c0 FUN_141a3f2c0 body=78 status=ok
// SIG undefined FUN_141a3f2c0(void)

void FUN_141a3f2c0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong local_res10 [3];
  
  uVar1 = (ulonglong)param_3;
  local_res10[0] = *(longlong *)(param_4 + 0x18);
  if (*(longlong *)(param_1 + 0x20d8 + uVar1 * 8) != local_res10[0]) {
    *(longlong *)(param_1 + 0x20d8 + uVar1 * 8) = local_res10[0];
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x230))
              (*(longlong **)(param_1 + 0x200),uVar1,1,local_res10);
  }
  return;
}



// FUNCTION 141a3f310 FUN_141a3f310 body=78 status=ok
// SIG undefined FUN_141a3f310(void)

void FUN_141a3f310(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong local_res10 [3];
  
  uVar1 = (ulonglong)param_3;
  local_res10[0] = *(longlong *)(param_4 + 0x18);
  if (*(longlong *)(param_1 + 0x1f58 + uVar1 * 8) != local_res10[0]) {
    *(longlong *)(param_1 + 0x1f58 + uVar1 * 8) = local_res10[0];
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x208))
              (*(longlong **)(param_1 + 0x200),uVar1,1,local_res10);
  }
  return;
}



// FUNCTION 141a3f360 FUN_141a3f360 body=78 status=ok
// SIG undefined FUN_141a3f360(void)

void FUN_141a3f360(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong local_res10 [3];
  
  uVar1 = (ulonglong)param_3;
  local_res10[0] = *(longlong *)(param_4 + 0x18);
  if (*(longlong *)(param_1 + 0x2058 + uVar1 * 8) != local_res10[0]) {
    *(longlong *)(param_1 + 0x2058 + uVar1 * 8) = local_res10[0];
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x100))
              (*(longlong **)(param_1 + 0x200),uVar1,1,local_res10);
  }
  return;
}



// FUNCTION 141a3f3b0 FUN_141a3f3b0 body=78 status=ok
// SIG undefined FUN_141a3f3b0(void)

void FUN_141a3f3b0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong local_res10 [3];
  
  uVar1 = (ulonglong)param_3;
  local_res10[0] = *(longlong *)(param_4 + 0x18);
  if (*(longlong *)(param_1 + 0x1ed8 + uVar1 * 8) != local_res10[0]) {
    *(longlong *)(param_1 + 0x1ed8 + uVar1 * 8) = local_res10[0];
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x1e8))
              (*(longlong **)(param_1 + 0x200),uVar1,1,local_res10);
  }
  return;
}



// FUNCTION 141a3f400 FUN_141a3f400 body=75 status=ok
// SIG undefined FUN_141a3f400(void)

void FUN_141a3f400(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong local_res10 [3];
  
  uVar1 = (ulonglong)param_3;
  local_res10[0] = *(longlong *)(param_4 + 0x18);
  if (*(longlong *)(param_1 + 0x1fd8 + uVar1 * 8) != local_res10[0]) {
    *(longlong *)(param_1 + 0x1fd8 + uVar1 * 8) = local_res10[0];
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x50))
              (*(longlong **)(param_1 + 0x200),uVar1,1,local_res10);
  }
  return;
}



// FUNCTION 141a3f450 FUN_141a3f450 body=78 status=ok
// SIG undefined FUN_141a3f450(void)

void FUN_141a3f450(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong local_res10 [3];
  
  uVar1 = (ulonglong)param_3;
  local_res10[0] = *(longlong *)(param_4 + 0x18);
  if (*(longlong *)(param_1 + 0x1e58 + uVar1 * 8) != local_res10[0]) {
    *(longlong *)(param_1 + 0x1e58 + uVar1 * 8) = local_res10[0];
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0xd0))
              (*(longlong **)(param_1 + 0x200),uVar1,1,local_res10);
  }
  return;
}



// FUNCTION 141a3f4a0 FUN_141a3f4a0 body=160 status=ok
// SIG undefined FUN_141a3f4a0(void)

void FUN_141a3f4a0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_4 == (longlong *)0x0) {
    lVar1 = 0;
LAB_141a3f4bf:
    uVar3 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar1 == 0) goto LAB_141a3f4bf;
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    if (((*(int *)(lVar1 + 0x50) == 0) || (**(longlong **)(lVar1 + 0x48) == 0)) &&
       (*(int *)(lVar1 + 0x80) == 0)) {
      lVar2 = param_4[0xb];
      uVar4 = 2;
      goto LAB_141a3f51f;
    }
  }
  if (param_4 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4[0xb];
  }
  uVar4 = 1;
LAB_141a3f51f:
  FUN_141a1e7b0(param_1 + -0x30,lVar1,uVar3,param_3,lVar2,uVar4);
  return;
}



// FUNCTION 141a3f540 FUN_141a3f540 body=160 status=ok
// SIG undefined FUN_141a3f540(void)

void FUN_141a3f540(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_4 == (longlong *)0x0) {
    lVar1 = 0;
LAB_141a3f55f:
    uVar3 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar1 == 0) goto LAB_141a3f55f;
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    if (((*(int *)(lVar1 + 0x50) == 0) || (**(longlong **)(lVar1 + 0x48) == 0)) &&
       (*(int *)(lVar1 + 0x80) == 0)) {
      lVar2 = param_4[0xb];
      uVar4 = 2;
      goto LAB_141a3f5bf;
    }
  }
  if (param_4 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4[0xb];
  }
  uVar4 = 1;
LAB_141a3f5bf:
  FUN_141a1e480(param_1 + -0x30,lVar1,uVar3,param_3,lVar2,uVar4);
  return;
}



// FUNCTION 141a3f5e0 FUN_141a3f5e0 body=160 status=ok
// SIG undefined FUN_141a3f5e0(void)

void FUN_141a3f5e0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_4 == (longlong *)0x0) {
    lVar1 = 0;
LAB_141a3f5ff:
    uVar3 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar1 == 0) goto LAB_141a3f5ff;
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    if (((*(int *)(lVar1 + 0x50) == 0) || (**(longlong **)(lVar1 + 0x48) == 0)) &&
       (*(int *)(lVar1 + 0x80) == 0)) {
      lVar2 = param_4[0xb];
      uVar4 = 2;
      goto LAB_141a3f65f;
    }
  }
  if (param_4 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4[0xb];
  }
  uVar4 = 1;
LAB_141a3f65f:
  FUN_141a1e6a0(param_1 + -0x30,lVar1,uVar3,param_3,lVar2,uVar4);
  return;
}



// FUNCTION 141a3f680 FUN_141a3f680 body=160 status=ok
// SIG undefined FUN_141a3f680(void)

void FUN_141a3f680(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_4 == (longlong *)0x0) {
    lVar1 = 0;
LAB_141a3f69f:
    uVar3 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar1 == 0) goto LAB_141a3f69f;
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    if (((*(int *)(lVar1 + 0x50) == 0) || (**(longlong **)(lVar1 + 0x48) == 0)) &&
       (*(int *)(lVar1 + 0x80) == 0)) {
      lVar2 = param_4[0xb];
      uVar4 = 2;
      goto LAB_141a3f6ff;
    }
  }
  if (param_4 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4[0xb];
  }
  uVar4 = 1;
LAB_141a3f6ff:
  FUN_141a1e370(param_1 + -0x30,lVar1,uVar3,param_3,lVar2,uVar4);
  return;
}



// FUNCTION 141a3f720 FUN_141a3f720 body=160 status=ok
// SIG undefined FUN_141a3f720(void)

void FUN_141a3f720(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_4 == (longlong *)0x0) {
    lVar1 = 0;
LAB_141a3f73f:
    uVar3 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar1 == 0) goto LAB_141a3f73f;
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    if (((*(int *)(lVar1 + 0x50) == 0) || (**(longlong **)(lVar1 + 0x48) == 0)) &&
       (*(int *)(lVar1 + 0x80) == 0)) {
      lVar2 = param_4[0xb];
      uVar4 = 2;
      goto LAB_141a3f79f;
    }
  }
  if (param_4 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4[0xb];
  }
  uVar4 = 1;
LAB_141a3f79f:
  FUN_141a1e590(param_1 + -0x30,lVar1,uVar3,param_3,lVar2,uVar4);
  return;
}



// FUNCTION 141a3f7c0 FUN_141a3f7c0 body=160 status=ok
// SIG undefined FUN_141a3f7c0(void)

void FUN_141a3f7c0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_4 == (longlong *)0x0) {
    lVar1 = 0;
LAB_141a3f7df:
    uVar3 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar1 == 0) goto LAB_141a3f7df;
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    if (((*(int *)(lVar1 + 0x50) == 0) || (**(longlong **)(lVar1 + 0x48) == 0)) &&
       (*(int *)(lVar1 + 0x80) == 0)) {
      lVar2 = param_4[0xb];
      uVar4 = 2;
      goto LAB_141a3f83f;
    }
  }
  if (param_4 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4[0xb];
  }
  uVar4 = 1;
LAB_141a3f83f:
  FUN_141a1e8c0(param_1 + -0x30,lVar1,uVar3,param_3,lVar2,uVar4);
  return;
}



// FUNCTION 141a3f860 FUN_141a3f860 body=269 status=ok
// SIG undefined FUN_141a3f860(void)

void FUN_141a3f860(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *local_res8;
  
  uVar7 = (ulonglong)param_3;
  if (param_4 == 0) {
    plVar4 = (longlong *)0x0;
    bVar2 = false;
    bVar1 = true;
    plVar5 = local_res8;
    plVar6 = plVar4;
  }
  else {
    plVar5 = *(longlong **)(param_4 + 0x28);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    bVar2 = true;
    bVar1 = false;
    plVar4 = local_res8;
    plVar6 = plVar5;
  }
  if ((bVar1) && (plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((bVar2) && (plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  puVar3 = (undefined8 *)((uVar7 + 0x23d) * 0x10 + param_1 + 0x1e8);
  local_res8 = plVar6;
  if ((((longlong *)*puVar3 != plVar6) || (*(int *)(puVar3 + 1) != 0)) ||
     (*(int *)((longlong)puVar3 + 0xc) != 0x1000)) {
    *puVar3 = plVar6;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0x1000;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x238))
              (*(longlong **)(param_1 + 0x200),uVar7,1,&local_res8);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(uVar7 * 8 + 0x4200 + param_1,param_4);
  *(ushort *)(param_1 + 0x427a) = *(ushort *)(param_1 + 0x427a) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141a3f970 FUN_141a3f970 body=269 status=ok
// SIG undefined FUN_141a3f970(void)

void FUN_141a3f970(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *local_res8;
  
  uVar7 = (ulonglong)param_3;
  if (param_4 == 0) {
    plVar4 = (longlong *)0x0;
    bVar2 = false;
    bVar1 = true;
    plVar5 = local_res8;
    plVar6 = plVar4;
  }
  else {
    plVar5 = *(longlong **)(param_4 + 0x28);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    bVar2 = true;
    bVar1 = false;
    plVar4 = local_res8;
    plVar6 = plVar5;
  }
  if ((bVar1) && (plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((bVar2) && (plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  puVar3 = (undefined8 *)((uVar7 + 0x213) * 0x10 + param_1 + 0x1e8);
  local_res8 = plVar6;
  if ((((longlong *)*puVar3 != plVar6) || (*(int *)(puVar3 + 1) != 0)) ||
     (*(int *)((longlong)puVar3 + 0xc) != 0x1000)) {
    *puVar3 = plVar6;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0x1000;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x210))
              (*(longlong **)(param_1 + 0x200),uVar7,1,&local_res8);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(uVar7 * 8 + 0x40b0 + param_1,param_4);
  *(ushort *)(param_1 + 0x4274) = *(ushort *)(param_1 + 0x4274) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141a3fa80 FUN_141a3fa80 body=269 status=ok
// SIG undefined FUN_141a3fa80(void)

void FUN_141a3fa80(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *local_res8;
  
  uVar7 = (ulonglong)param_3;
  if (param_4 == 0) {
    plVar4 = (longlong *)0x0;
    bVar2 = false;
    bVar1 = true;
    plVar5 = local_res8;
    plVar6 = plVar4;
  }
  else {
    plVar5 = *(longlong **)(param_4 + 0x28);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    bVar2 = true;
    bVar1 = false;
    plVar4 = local_res8;
    plVar6 = plVar5;
  }
  if ((bVar1) && (plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((bVar2) && (plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  puVar3 = (undefined8 *)((uVar7 + 0x22f) * 0x10 + param_1 + 0x1e8);
  local_res8 = plVar6;
  if ((((longlong *)*puVar3 != plVar6) || (*(int *)(puVar3 + 1) != 0)) ||
     (*(int *)((longlong)puVar3 + 0xc) != 0x1000)) {
    *puVar3 = plVar6;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0x1000;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0xb0))
              (*(longlong **)(param_1 + 0x200),uVar7,1,&local_res8);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(uVar7 * 8 + 0x4190 + param_1,param_4);
  *(ushort *)(param_1 + 0x4278) = *(ushort *)(param_1 + 0x4278) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141a3fb90 FUN_141a3fb90 body=269 status=ok
// SIG undefined FUN_141a3fb90(void)

void FUN_141a3fb90(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *local_res8;
  
  uVar7 = (ulonglong)param_3;
  if (param_4 == 0) {
    plVar4 = (longlong *)0x0;
    bVar2 = false;
    bVar1 = true;
    plVar5 = local_res8;
    plVar6 = plVar4;
  }
  else {
    plVar5 = *(longlong **)(param_4 + 0x28);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    bVar2 = true;
    bVar1 = false;
    plVar4 = local_res8;
    plVar6 = plVar5;
  }
  if ((bVar1) && (plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((bVar2) && (plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  puVar3 = (undefined8 *)((uVar7 + 0x205) * 0x10 + param_1 + 0x1e8);
  local_res8 = plVar6;
  if ((((longlong *)*puVar3 != plVar6) || (*(int *)(puVar3 + 1) != 0)) ||
     (*(int *)((longlong)puVar3 + 0xc) != 0x1000)) {
    *puVar3 = plVar6;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0x1000;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x1f0))
              (*(longlong **)(param_1 + 0x200),uVar7,1,&local_res8);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(uVar7 * 8 + 0x4040 + param_1,param_4);
  *(ushort *)(param_1 + 0x4272) = *(ushort *)(param_1 + 0x4272) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141a3fca0 FUN_141a3fca0 body=269 status=ok
// SIG undefined FUN_141a3fca0(void)

void FUN_141a3fca0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *local_res8;
  
  uVar7 = (ulonglong)param_3;
  if (param_4 == 0) {
    plVar4 = (longlong *)0x0;
    bVar2 = false;
    bVar1 = true;
    plVar5 = local_res8;
    plVar6 = plVar4;
  }
  else {
    plVar5 = *(longlong **)(param_4 + 0x28);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    bVar2 = true;
    bVar1 = false;
    plVar4 = local_res8;
    plVar6 = plVar5;
  }
  if ((bVar1) && (plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((bVar2) && (plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  puVar3 = (undefined8 *)((uVar7 + 0x221) * 0x10 + param_1 + 0x1e8);
  local_res8 = plVar6;
  if ((((longlong *)*puVar3 != plVar6) || (*(int *)(puVar3 + 1) != 0)) ||
     (*(int *)((longlong)puVar3 + 0xc) != 0x1000)) {
    *puVar3 = plVar6;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0x1000;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x80))
              (*(longlong **)(param_1 + 0x200),uVar7,1,&local_res8);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(uVar7 * 8 + 0x4120 + param_1,param_4);
  *(ushort *)(param_1 + 0x4276) = *(ushort *)(param_1 + 0x4276) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141a3fdb0 FUN_141a3fdb0 body=266 status=ok
// SIG undefined FUN_141a3fdb0(void)

void FUN_141a3fdb0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *local_res8;
  
  uVar7 = (ulonglong)param_3;
  if (param_4 == 0) {
    plVar4 = (longlong *)0x0;
    bVar2 = false;
    bVar1 = true;
    plVar5 = local_res8;
    plVar6 = plVar4;
  }
  else {
    plVar5 = *(longlong **)(param_4 + 0x28);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    bVar2 = true;
    bVar1 = false;
    plVar4 = local_res8;
    plVar6 = plVar5;
  }
  if ((bVar1) && (plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((bVar2) && (plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  puVar3 = (undefined8 *)((uVar7 + 0x1f7) * 0x10 + param_1 + 0x1e8);
  local_res8 = plVar6;
  if ((((longlong *)*puVar3 != plVar6) || (*(int *)(puVar3 + 1) != 0)) ||
     (*(int *)((longlong)puVar3 + 0xc) != 0x1000)) {
    *puVar3 = plVar6;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0x1000;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x38))
              (*(longlong **)(param_1 + 0x200),uVar7,1,&local_res8);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(uVar7 * 8 + 0x3fd0 + param_1,param_4);
  *(ushort *)(param_1 + 0x4270) = *(ushort *)(param_1 + 0x4270) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141a3fef0 FUN_141a3fef0 body=306 status=ok
// SIG undefined FUN_141a3fef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a3fef0(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  longlong local_68 [6];
  
  local_68[4] = DAT_1468387a8 ^ (ulonglong)auStack_98;
  bVar3 = false;
  bVar2 = false;
  local_70 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_78 = param_4;
  if ((param_3 != 0) && (param_2 != 0)) {
    plVar7 = local_68;
    uVar5 = (ulonglong)param_2;
    plVar6 = param_4;
    do {
      lVar1 = *(longlong *)((param_3 - (longlong)local_68) + (longlong)plVar7);
      if (lVar1 == 0) {
        bVar2 = true;
        plVar4 = (longlong *)0x0;
        plVar6 = plVar4;
      }
      else {
        plVar4 = *(longlong **)(lVar1 + 0x38);
        bVar3 = true;
        param_4 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
      *plVar7 = (longlong)plVar4;
      if ((bVar2) && (bVar2 = false, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      if ((bVar3) && (bVar3 = false, param_4 != (longlong *)0x0)) {
        (**(code **)(*param_4 + 0x10))(param_4);
      }
      plVar7 = plVar7 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x128))
            (*(longlong **)(param_1 + 0x200),(ulonglong)param_2,local_68,local_78);
  return;
}



// FUNCTION 141a40030 RHISetStreamSource body=268 status=ok
// SIG undefined RHISetStreamSource(void)

void FD3D11DynamicRHI::RHISetStreamSource
               (longlong param_1,ulonglong param_2,longlong param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_res8;
  int local_res10 [2];
  uint local_res20 [2];
  
  plVar5 = (longlong *)0x0;
  param_2 = param_2 & 0xffffffff;
  local_res10[0] = 0;
  if (param_3 == 0) {
    bVar3 = false;
    bVar2 = true;
    plVar6 = local_res8;
    plVar7 = plVar5;
  }
  else {
    plVar6 = *(longlong **)(param_3 + 0x38);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    bVar3 = true;
    bVar2 = false;
    plVar5 = local_res8;
    plVar7 = plVar6;
  }
  if ((bVar2) && (plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((bVar3) && (plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  uVar1 = *(ushort *)(param_1 + 0x1e18 + param_2 * 2);
  puVar4 = (undefined8 *)((param_2 + 0x1a1) * 0x10 + param_1 + 0x1e8);
  local_res20[0] = (uint)uVar1;
  if ((((longlong *)*puVar4 != plVar7) || (*(int *)((longlong)puVar4 + 0xc) != param_4)) ||
     (*(uint *)(puVar4 + 1) != local_res20[0])) {
    *puVar4 = plVar7;
    *(int *)((longlong)puVar4 + 0xc) = param_4;
    *(uint *)(puVar4 + 1) = (uint)uVar1;
    local_res8 = plVar7;
    local_res10[0] = param_4;
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x90))
              (*(longlong **)(param_1 + 0x200),param_2,1,&local_res8,local_res20,local_res10);
  }
  return;
}



// FUNCTION 141a40140 FUN_141a40140 body=213 status=ok
// SIG undefined FUN_141a40140(void)

void FUN_141a40140(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 local_res8;
  uint uStackX_c;
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  local_res8 = 0;
  if (param_4 == 0) {
    plVar6 = (longlong *)((ulonglong)uStackX_c << 0x20);
    bVar4 = false;
    bVar3 = true;
    plVar5 = local_res20;
  }
  else {
    FUN_141a28980(param_1 + -0x30,*(undefined8 *)(param_4 + 0x20));
    lVar2 = *(longlong *)(param_4 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x3fbc);
    *(undefined1 *)(lVar2 + 0x10) = 1;
    *(undefined4 *)(lVar2 + 0xc) = uVar1;
    local_res20 = *(longlong **)(param_4 + 0x18);
    if (local_res20 != (longlong *)0x0) {
      (**(code **)(*local_res20 + 8))(local_res20);
    }
    bVar4 = true;
    bVar3 = false;
    plVar5 = (longlong *)CONCAT44(uStackX_c,local_res8);
    plVar6 = local_res20;
  }
  if ((bVar3) && (plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((bVar4) && (plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  local_res8 = 0xffffffff;
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x220))
            (*(longlong **)(param_1 + 0x1d0),param_3,1,&local_res20,&local_res8);
  return;
}



// FUNCTION 141a40220 FUN_141a40220 body=221 status=ok
// SIG undefined FUN_141a40220(void)

void FUN_141a40220(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_res8;
  
  plVar5 = (longlong *)0x0;
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
  if (param_4 == 0) {
    bVar4 = false;
    bVar3 = true;
    plVar6 = plVar5;
    plVar7 = local_res8;
  }
  else {
    FUN_141a28980(param_1 + -0x30,*(undefined8 *)(param_4 + 0x20));
    lVar2 = *(longlong *)(param_4 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x3fbc);
    *(undefined1 *)(lVar2 + 0x10) = 1;
    *(undefined4 *)(lVar2 + 0xc) = uVar1;
    plVar5 = *(longlong **)(param_4 + 0x18);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    bVar4 = true;
    bVar3 = false;
    plVar6 = local_res8;
    plVar7 = plVar5;
  }
  local_res8 = plVar5;
  if ((bVar3) && (plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((bVar4) && (plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x220))
            (*(longlong **)(param_1 + 0x1d0),param_3,1,&local_res8,&stack0x00000028);
  return;
}



// FUNCTION 141a40300 FUN_141a40300 body=338 status=ok
// SIG undefined FUN_141a40300(void)

void FUN_141a40300(longlong param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,
                  uint param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  
  fVar1 = (float)param_5 - (float)param_2;
  fVar2 = (float)param_6 - (float)param_3;
  if ((0.0 < fVar1) && (0.0 < fVar2)) {
    local_28 = CONCAT44((float)param_3,(float)param_2);
    lStack_20 = CONCAT44(fVar2,fVar1);
    local_18 = CONCAT44(param_7,param_4);
    if ((*(int *)(param_1 + 0x1a70) != 1) ||
       (((*(longlong *)(param_1 + 0x1a74) != local_28 ||
         (*(longlong *)(param_1 + 0x1a7c) != lStack_20)) ||
        (*(longlong *)(param_1 + 0x1a84) != local_18)))) {
      *(longlong *)(param_1 + 0x1a74) = local_28;
      *(longlong *)(param_1 + 0x1a7c) = lStack_20;
      *(longlong *)(param_1 + 0x1a84) = local_18;
      *(undefined4 *)(param_1 + 0x1a70) = 1;
      (**(code **)(**(longlong **)(param_1 + 0x200) + 0x160))
                (*(longlong **)(param_1 + 0x200),1,&local_28);
    }
    (**(code **)(*(longlong *)(param_1 + -0x30) + 0x790))
              (param_1 + -0x30,param_2,param_3,param_5,param_6);
  }
  return;
}



// FUNCTION 141a40460 FUN_141a40460 body=541 status=ok
// SIG undefined FUN_141a40460(void)

void FUN_141a40460(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  BOOL BVar6;
  int iVar7;
  HWND pHVar8;
  undefined8 *puVar9;
  char cVar10;
  undefined8 uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  longlong local_res18;
  longlong *local_res20;
  longlong *local_48 [2];
  
  bVar4 = false;
  bVar3 = false;
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0x26d8)) {
    local_res18 = 0;
    do {
      lVar1 = *(longlong *)(local_res18 + *(longlong *)(param_1 + 0x26d0));
      pHVar8 = GetFocus();
      bVar13 = pHVar8 == *(HWND *)(lVar1 + 0x40);
      BVar6 = IsIconic(*(HWND *)(lVar1 + 0x40));
      cVar5 = *(char *)(lVar1 + 0x58);
      bVar14 = BVar6 != 0;
      if ((cVar5 == '\0') || (bVar13)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((cVar5 == '\0') || (bVar14)) || (!bVar13)) {
        cVar10 = '\0';
      }
      else {
        cVar10 = '\x01';
      }
      if (*(char *)(lVar1 + 0x60) == '\0') {
        if (((bVar13) && (!bVar14)) || (bVar2)) {
          FUN_141ee24f0(0);
          if (cVar10 == '\0') {
            local_res20 = (longlong *)0x0;
            bVar3 = true;
            uVar11 = 0;
          }
          else {
            bVar4 = true;
            puVar9 = (undefined8 *)FUN_141a30060(lVar1,local_48);
            uVar11 = *puVar9;
          }
          iVar7 = (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x50))
                            (*(longlong **)(lVar1 + 0x68),cVar10,uVar11);
          if ((bVar3) && (bVar3 = false, local_res20 != (longlong *)0x0)) {
            (**(code **)(*local_res20 + 0x10))(local_res20);
          }
          if ((bVar4) && (bVar4 = false, local_48[0] != (longlong *)0x0)) {
            (**(code **)(*local_48[0] + 0x10))();
          }
          *(undefined1 *)(lVar1 + 0x60) = 1;
          if ((iVar7 < 0) && (cVar10 != '\0')) {
            *(undefined1 *)(lVar1 + 0x58) = 0;
          }
        }
        cVar5 = *(char *)(lVar1 + 0x58);
        if (((cVar5 != '\0') && (cVar10 == '\0')) && (!bVar14)) {
          ShowWindow(*(HWND *)(lVar1 + 0x40),6);
          cVar5 = *(char *)(lVar1 + 0x58);
        }
      }
      if (cVar5 != '\0') {
        if ((bVar14) && (*(char *)(lVar1 + 0x80) != '\0')) {
          (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x750))();
          *(undefined1 *)(lVar1 + 0x80) = 0;
        }
        else if ((((cVar5 != '\0') && ((!bVar14 && (bVar13)))) && (*(char *)(lVar1 + 0x80) == '\0'))
                && (cVar5 = FUN_141ee42d0(), cVar5 != '\0')) {
          (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x748))();
          *(undefined1 *)(lVar1 + 0x80) = 1;
        }
      }
      local_res18 = local_res18 + 8;
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 0x26d8));
  }
  return;
}



// FUNCTION 141a40680 FUN_141a40680 body=319 status=ok
// SIG undefined FUN_141a40680(void)

void FUN_141a40680(undefined8 param_1,int param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fcd40) && (_Init_thread_header(&DAT_1469fcd40), DAT_1469fcd40 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1469fcd38 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ProfileGPU.ShowTransitions");
    _Init_thread_footer(&DAT_1469fcd40);
  }
  (**(code **)(*DAT_1469fcd38 + 0x68))();
  if (param_2 == 1) {
    param_2 = 1;
  }
  if (0 < param_4) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_3 + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar4 = 0;
        lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
        if (lVar2 != 0) {
          lVar4 = lVar2 + 0x68;
        }
        lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
        if (lVar2 != 0) {
          lVar4 = lVar2 + 0x70;
        }
        lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
        if (lVar2 != 0) {
          lVar4 = lVar2 + 0x68;
        }
        lVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
        if (lVar2 != 0) {
          lVar4 = lVar2 + 0x70;
        }
        if (param_2 == 0) {
          *(undefined1 *)(lVar4 + 0x10) = 0;
        }
        *(int *)(lVar4 + 8) = param_2;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < param_4);
  }
  return;
}



// FUNCTION 141a40820 FUN_141a40820 body=283 status=ok
// SIG undefined FUN_141a40820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a40820(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78;
  int local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [4];
  int local_4c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  (**(code **)(**(longlong **)(param_2 + 0x40) + 0x50))(*(longlong **)(param_2 + 0x40),local_50);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  local_58 = 0;
  local_60 = uVar1;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1a0,local_68,&local_60);
  plVar3 = (longlong *)0x0;
  if (local_68[0] != -1) {
    plVar3 = (longlong *)((longlong)local_68[0] * 0x38 + *(longlong *)(param_1 + 0x1a0));
  }
  plVar2 = *(longlong **)(param_1 + 0x200);
  plVar4 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (local_4c == 2) {
    (**(code **)(*plVar2 + 0x78))(plVar2,uVar1);
  }
  else if (*plVar4 == 0) {
    local_80 = (undefined4)plVar4[1];
    local_78 = 0;
    local_88 = plVar4[2];
    (**(code **)(*plVar2 + 0x180))(plVar2,uVar1,0,0);
    FMemory::Free(plVar4[2]);
    plVar4[2] = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x78))();
  }
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x1a0,&local_60);
  return;
}



// FUNCTION 141a40940 FUN_141a40940 body=299 status=ok
// SIG undefined FUN_141a40940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a40940(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78;
  int local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [4];
  int local_4c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  (**(code **)(**(longlong **)(param_2 + 0x40) + 0x50))(*(longlong **)(param_2 + 0x40),local_50);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  local_58 = 0;
  local_60 = uVar1;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1a0,local_68,&local_60);
  plVar3 = (longlong *)0x0;
  if (local_68[0] != -1) {
    plVar3 = (longlong *)((longlong)local_68[0] * 0x38 + *(longlong *)(param_1 + 0x1a0));
  }
  plVar2 = *(longlong **)(param_1 + 0x200);
  plVar4 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (local_4c == 2) {
    (**(code **)(*plVar2 + 0x78))(plVar2,uVar1);
  }
  else if (*plVar4 == 0) {
    local_80 = (undefined4)plVar4[1];
    local_78 = 0;
    local_88 = plVar4[2];
    (**(code **)(*plVar2 + 0x180))(plVar2,uVar1,0,0);
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x378))();
    FMemory::Free(plVar4[2]);
    plVar4[2] = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x78))();
  }
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x1a0,&local_60);
  return;
}



// FUNCTION 141a40a70 FUN_141a40a70 body=232 status=ok
// SIG undefined FUN_141a40a70(void)

void FUN_141a40a70(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int local_res18 [2];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar4 = *(longlong *)(param_2 + 0x80);
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  local_28 = uVar1;
  local_20 = param_3;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x1a0,local_res18,&local_28);
  plVar2 = (longlong *)0x0;
  if (local_res18[0] != -1) {
    plVar2 = (longlong *)((longlong)local_res18[0] * 0x38 + *(longlong *)(lVar4 + 0x1a0));
  }
  plVar3 = plVar2 + 2;
  if (plVar2 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (*plVar3 == 0) {
    (**(code **)(**(longlong **)(lVar4 + 0x200) + 0x180))
              (*(longlong **)(lVar4 + 0x200),uVar1,param_3,0,plVar3[2],(int)plVar3[1],0);
    FMemory::Free(plVar3[2]);
    plVar3[2] = 0;
    lVar4 = *(longlong *)(param_2 + 0x80);
  }
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Remove(lVar4 + 0x1a0,&local_28);
  return;
}



// FUNCTION 141a40b60 FUN_141a40b60 body=238 status=ok
// SIG undefined FUN_141a40b60(void)

void FUN_141a40b60(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int local_res18 [2];
  undefined8 local_28;
  int local_20;
  
  lVar4 = *(longlong *)(param_2 + 0x88);
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  param_4 = *(int *)(param_2 + 0x34) * param_3 + param_4;
  local_28 = uVar1;
  local_20 = param_4;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x1a0,local_res18,&local_28);
  plVar2 = (longlong *)0x0;
  if (local_res18[0] != -1) {
    plVar2 = (longlong *)((longlong)local_res18[0] * 0x38 + *(longlong *)(lVar4 + 0x1a0));
  }
  plVar3 = plVar2 + 2;
  if (plVar2 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (*plVar3 == 0) {
    (**(code **)(**(longlong **)(lVar4 + 0x200) + 0x180))
              (*(longlong **)(lVar4 + 0x200),uVar1,param_4,0,plVar3[2],(int)plVar3[1],0);
    FMemory::Free(plVar3[2]);
    plVar3[2] = 0;
    lVar4 = *(longlong *)(param_2 + 0x88);
  }
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Remove(lVar4 + 0x1a0,&local_28);
  return;
}



// FUNCTION 141a40c50 FUN_141a40c50 body=234 status=ok
// SIG undefined FUN_141a40c50(void)

void FUN_141a40c50(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int local_res18 [2];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar4 = *(longlong *)(param_2 + 0x88);
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  local_28 = uVar1;
  local_20 = param_3;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x1a0,local_res18,&local_28);
  plVar2 = (longlong *)0x0;
  if (local_res18[0] != -1) {
    plVar2 = (longlong *)((longlong)local_res18[0] * 0x38 + *(longlong *)(lVar4 + 0x1a0));
  }
  plVar3 = plVar2 + 2;
  if (plVar2 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (*plVar3 == 0) {
    (**(code **)(**(longlong **)(lVar4 + 0x200) + 0x180))
              (*(longlong **)(lVar4 + 0x200),uVar1,param_3,0,plVar3[2],(int)plVar3[1],
               *(undefined4 *)((longlong)plVar3 + 0xc));
    FMemory::Free(plVar3[2]);
    plVar3[2] = 0;
    lVar4 = *(longlong *)(param_2 + 0x88);
  }
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Remove(lVar4 + 0x1a0,&local_28);
  return;
}



// FUNCTION 141a40d40 FUN_141a40d40 body=321 status=ok
// SIG undefined FUN_141a40d40(void)

void FUN_141a40d40(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 local_28;
  int local_20;
  
  iVar4 = 0;
  if (param_3 == 1) {
    iVar4 = 1;
  }
  else if (param_3 == 2) {
    iVar4 = 2;
  }
  else if (param_3 == 3) {
    iVar4 = 3;
  }
  else if (param_3 == 4) {
    iVar4 = 4;
  }
  else if (param_3 == 5) {
    iVar4 = 5;
  }
  lVar5 = *(longlong *)(param_2 + 0x80);
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  iVar4 = (iVar4 + param_4 * 6) * *(int *)(param_2 + 0x34) + param_5;
  local_28 = uVar1;
  local_20 = iVar4;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::FindId(lVar5 + 0x1a0,&param_5,&local_28);
  plVar2 = (longlong *)0x0;
  if (param_5 != -1) {
    plVar2 = (longlong *)((longlong)param_5 * 0x38 + *(longlong *)(lVar5 + 0x1a0));
  }
  plVar3 = plVar2 + 2;
  if (plVar2 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (*plVar3 == 0) {
    (**(code **)(**(longlong **)(lVar5 + 0x200) + 0x180))
              (*(longlong **)(lVar5 + 0x200),uVar1,iVar4,0,plVar3[2],(int)plVar3[1],0);
    FMemory::Free(plVar3[2]);
    plVar3[2] = 0;
    lVar5 = *(longlong *)(param_2 + 0x80);
  }
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Remove(lVar5 + 0x1a0,&local_28);
  return;
}



// FUNCTION 141a40e90 FUN_141a40e90 body=283 status=ok
// SIG undefined FUN_141a40e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a40e90(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78;
  int local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [4];
  int local_4c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  (**(code **)(**(longlong **)(param_2 + 0x38) + 0x50))(*(longlong **)(param_2 + 0x38),local_50);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  local_58 = 0;
  local_60 = uVar1;
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1a0,local_68,&local_60);
  plVar3 = (longlong *)0x0;
  if (local_68[0] != -1) {
    plVar3 = (longlong *)((longlong)local_68[0] * 0x38 + *(longlong *)(param_1 + 0x1a0));
  }
  plVar2 = *(longlong **)(param_1 + 0x200);
  plVar4 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (local_4c == 2) {
    (**(code **)(*plVar2 + 0x78))(plVar2,uVar1);
  }
  else if (*plVar4 == 0) {
    local_80 = (undefined4)plVar4[1];
    local_78 = 0;
    local_88 = plVar4[2];
    (**(code **)(*plVar2 + 0x180))(plVar2,uVar1,0,0);
    FMemory::Free(plVar4[2]);
    plVar4[2] = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x78))();
  }
  TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x1a0,&local_60);
  return;
}



// FUNCTION 141a40fb0 FUN_141a40fb0 body=53 status=ok
// SIG undefined FUN_141a40fb0(void)

void FUN_141a40fb0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a40fe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x78))
            (*(longlong **)(param_1 + 0x200),*(undefined8 *)(lVar1 + 0x38),0);
  return;
}



// FUNCTION 141a40ff0 FUN_141a40ff0 body=161 status=ok
// SIG undefined FUN_141a40ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a40ff0(longlong param_1,longlong param_2,undefined8 param_3,int *param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_38 = *param_4;
  local_34 = param_4[1];
  local_2c = param_4[4] + local_38;
  local_28 = param_4[5] + local_34;
  local_30 = 0;
  local_24 = 1;
  local_48 = 0;
  local_50 = param_5;
  local_58 = param_6;
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x180))
            (*(longlong **)(param_1 + 0x200),*(undefined8 *)(param_2 + 0xa0),param_3,&local_38);
  return;
}



// FUNCTION 141a410a0 FUN_141a410a0 body=234 status=ok
// SIG undefined FUN_141a410a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a410a0(longlong param_1,longlong param_2,undefined4 param_3,int *param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_48 = *param_4;
  local_40 = param_4[2];
  local_44 = param_4[1];
  iVar1 = (&DAT_1464ca1b8)[(longlong)*(int *)(param_2 + 0x3c) * 10];
  iVar2 = (&DAT_1464ca1bc)[(longlong)*(int *)(param_2 + 0x3c) * 10];
  local_3c = ((param_4[6] + -1 + iVar1) / iVar1) * iVar1 + local_48;
  local_34 = param_4[8] + local_40;
  local_38 = ((param_4[7] + -1 + iVar2) / iVar2) * iVar2 + local_44;
  local_58 = param_6;
  local_60 = param_5;
  local_68 = param_7;
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x180))
            (*(longlong **)(param_1 + 0x200),*(undefined8 *)(param_2 + 0xa8),param_3,&local_48);
  return;
}



// FUNCTION 141a41190 RHIUpdateTextureReference body=320 status=ok
// SIG undefined RHIUpdateTextureReference(void)

void FD3D11DynamicRHI::RHIUpdateTextureReference
               (undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    plVar9 = (longlong *)0x0;
    plVar8 = plVar9;
    plVar7 = plVar9;
    if ((param_3 != (longlong *)0x0) &&
       (plVar7 = (longlong *)(**(code **)(*param_3 + 0x48))(param_3), plVar8 = (longlong *)0x0,
       plVar7 != (longlong *)0x0)) {
      plVar8 = (longlong *)plVar7[8];
    }
    plVar3 = *(longlong **)(param_2 + 0xa8);
    *(longlong **)(param_2 + 0xa8) = plVar8;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    *(longlong **)(param_2 + 0x98) = plVar7;
    puVar4 = *(undefined8 **)(param_2 + 0x60);
    *(longlong **)(param_2 + 0x60) = param_3;
    if (param_3 != (longlong *)0x0) {
      LOCK();
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      UNLOCK();
    }
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar4 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar10 = *(int *)((longlong)puVar4 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar4 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar6 != 0) {
              plVar9 = (longlong *)
                       ((&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18);
            }
            plVar9[1] = (longlong)puVar4;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            return;
          }
        }
        else {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141a412d0 FUN_141a412d0 body=1281 status=ok
// SIG undefined FUN_141a412d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a412d0(longlong param_1,undefined8 param_2,longlong *param_3,int *param_4,
                  longlong *param_5,int *param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  int *local_1a0;
  int *local_198;
  undefined8 local_190;
  uint local_188;
  undefined4 local_178;
  int local_174;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong local_158;
  undefined8 local_150;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130 [6];
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  int local_100;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined1 local_80 [16];
  int local_70;
  uint local_6c;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  lVar6 = 0;
  local_158 = param_1;
  local_118 = param_3;
  local_110 = param_2;
  if (param_3 != (longlong *)0x0) {
    lVar6 = (**(code **)(*param_3 + 0x48))(param_3);
  }
  iVar13 = param_4[2] - *param_4;
  iVar11 = param_4[3] - param_4[1];
  local_174 = iVar13;
  (**(code **)(**(longlong **)(lVar6 + 0x38) + 0x50))(*(longlong **)(lVar6 + 0x38),local_80);
  iVar5 = local_70;
  uVar4 = FUN_141a28860(local_70);
  local_c8 = *param_4;
  local_c4 = param_4[1];
  local_bc = param_4[2];
  local_b8 = param_4[3];
  local_b4 = 1;
  local_c0 = 0;
  local_f0 = 1;
  local_ec = 1;
  local_e4 = 1;
  local_dc = 0;
  local_d8 = 0x20;
  local_d0 = 0;
  local_168 = (longlong *)0x0;
  local_f8 = iVar13;
  local_f4 = iVar11;
  local_e8 = iVar5;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x28))
                    (*(longlong **)(param_1 + 0x210),&local_f8,0,&local_168);
  if (iVar5 < 0) {
    local_1b8 = *(longlong **)(param_1 + 0x210);
    FUN_141a447e0(iVar5,
                  "Direct3DDevice->CreateTexture2D(&NonMSAADesc,NULL,NonMSAATexture2D.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RenderTarget.cpp"
                  ,0x45b);
  }
  local_130[3] = 0;
  local_130[4] = 0;
  if (local_e8 == 0x1b) {
    local_130[0] = 0x1c;
  }
  else {
    local_130[0] = 0x57;
    if (local_e8 != 0x5a) {
      local_130[0] = local_e8;
    }
  }
  local_160 = (longlong *)0x0;
  local_130[1] = 4;
  local_130[2] = 0;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
                    (*(longlong **)(param_1 + 0x210),local_168,local_130,&local_160);
  if (iVar5 < 0) {
    local_1b8 = *(longlong **)(param_1 + 0x210);
    FUN_141a447e0(iVar5,
                  "Direct3DDevice->CreateRenderTargetView(NonMSAATexture2D,&RTVDesc,NonMSAARTV.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RenderTarget.cpp"
                  ,0x466);
  }
  local_a0 = local_70;
  local_170 = (longlong *)0x0;
  local_a8 = 1;
  local_a4 = 1;
  local_9c = 1;
  local_94 = 3;
  local_8c = 0x20000;
  local_b0 = iVar13;
  local_ac = iVar11;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x28))
                    (*(longlong **)(param_1 + 0x210),&local_b0,0,&local_170);
  if (iVar5 < 0) {
    local_1b8 = *(longlong **)(param_1 + 0x210);
    FUN_141a447e0(iVar5,
                  "Direct3DDevice->CreateTexture2D(&StagingDesc,NULL,StagingTexture2D.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RenderTarget.cpp"
                  ,0x477);
  }
  iVar5 = 0;
  local_178 = 0;
  if (local_58 == 4) {
    iVar9 = *param_6;
    if (iVar9 == 1) {
      local_178 = 1;
    }
    else if (iVar9 == 2) {
      local_178 = 2;
    }
    else if (iVar9 == 3) {
      local_178 = 3;
    }
    else if (iVar9 == 4) {
      local_178 = 4;
    }
    else if (iVar9 == 5) {
      local_178 = 5;
    }
    else {
      local_178 = 0;
    }
  }
  *(undefined4 *)(param_5 + 1) = 0;
  iVar9 = 0;
  if (*(int *)((longlong)param_5 + 0xc) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_5);
    iVar5 = (int)param_5[1];
    iVar9 = *(int *)((longlong)param_5 + 0xc);
  }
  iVar5 = local_6c * uVar4 * iVar11 * iVar13 + iVar5;
  *(int *)(param_5 + 1) = iVar5;
  if (iVar9 < iVar5) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5);
  }
  uVar14 = 0;
  if (local_6c != 0) {
    local_150 = 0;
    local_148 = local_174;
    local_144 = iVar11;
    do {
      plVar3 = local_160;
      local_140 = *param_4;
      uVar2 = *(undefined8 *)(param_1 + 0x200);
      local_13c = param_4[1];
      local_138 = param_4[2];
      local_134 = param_4[3];
      uVar7 = (**(code **)(*local_118 + 8))();
      param_1 = local_158;
      local_198 = (int *)&local_150;
      local_1a0 = &local_140;
      local_1a8 = (longlong *)&local_f8;
      local_1b0 = (longlong *)0x0;
      local_1b8 = plVar3;
      local_190 = uVar2;
      local_188 = uVar14;
      FUN_141a1fd20(local_158,local_110,uVar7,0);
      local_198 = &local_c8;
      local_1a0 = (int *)CONCAT44(local_1a0._4_4_,local_178);
      local_1a8 = local_168;
      local_1b0 = (longlong *)((ulonglong)local_1b0 & 0xffffffff00000000);
      local_1b8 = (longlong *)((ulonglong)local_1b8 & 0xffffffff00000000);
      (**(code **)(**(longlong **)(param_1 + 0x200) + 0x170))
                (*(longlong **)(param_1 + 0x200),local_170,0,0);
      local_1b0 = &local_108;
      local_1b8 = (longlong *)((ulonglong)local_1b8 & 0xffffffff00000000);
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x70))
                        (*(longlong **)(param_1 + 0x200),local_170,0);
      if (iVar5 < 0) {
        local_1b8 = *(longlong **)(param_1 + 0x210);
        FUN_141a447e0(iVar5,
                      "Direct3DDeviceIMContext->Map(StagingTexture2D,0,D3D11_MAP_READ,0,&LockedRect)"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RenderTarget.cpp"
                     );
      }
      iVar5 = param_4[1];
      if (iVar5 < param_4[3]) {
        iVar11 = param_4[2];
        do {
          iVar13 = *param_4;
          puVar12 = (undefined1 *)
                    ((ulonglong)(uint)(local_100 * (iVar5 - param_4[1])) +
                    (ulonglong)(iVar13 * uVar4) + local_108);
          puVar8 = (undefined1 *)
                   ((longlong)(int)((uVar14 + (iVar5 - param_4[1]) * local_6c * local_174) * uVar4)
                   + *param_5);
          if (iVar13 < iVar11) {
            do {
              uVar10 = (ulonglong)uVar4;
              if (uVar4 != 0) {
                do {
                  uVar1 = *puVar12;
                  puVar12 = puVar12 + 1;
                  *puVar8 = uVar1;
                  puVar8 = puVar8 + 1;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              iVar11 = param_4[2];
              puVar8 = puVar8 + (local_6c - 1) * uVar4;
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar11);
          }
          iVar5 = iVar5 + 1;
          param_1 = local_158;
        } while (iVar5 < param_4[3]);
      }
      (**(code **)(**(longlong **)(param_1 + 0x200) + 0x78))
                (*(longlong **)(param_1 + 0x200),local_170,0);
      uVar14 = uVar14 + 1;
    } while (uVar14 < local_6c);
  }
  if (local_170 != (longlong *)0x0) {
    (**(code **)(*local_170 + 0x10))();
  }
  if (local_160 != (longlong *)0x0) {
    (**(code **)(*local_160 + 0x10))();
  }
  if (local_168 != (longlong *)0x0) {
    (**(code **)(*local_168 + 0x10))();
  }
  return;
}



// FUNCTION 141a417e0 FUN_141a417e0 body=1051 status=ok
// SIG undefined FUN_141a417e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a417e0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  void *_Dst;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  void *_Src;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  longlong *local_130;
  char local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  int local_108;
  int local_100;
  uint local_fc;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  uint local_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  undefined4 local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar9 = 0;
  local_f0 = param_5;
  iVar8 = 0;
  uVar14 = uVar9;
  local_f8 = param_2;
  local_e8 = param_1;
  local_e0 = param_4;
  if (param_2 != (longlong *)0x0) {
    uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  (**(code **)(**(longlong **)(uVar14 + 0x38) + 0x50))(*(longlong **)(uVar14 + 0x38),&local_88);
  iVar3 = FUN_141a28860(local_78);
  switch(local_78) {
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x28:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x37:
    local_128 = '\x01';
    local_118 = 0;
    iVar10 = local_84;
    iVar5 = 0;
    break;
  default:
    iVar8 = (int)*param_3;
    local_118 = *param_3;
    local_88 = (int)param_3[1];
    local_128 = '\0';
    iVar10 = *(int *)((longlong)param_3 + 0xc);
    iVar5 = *(int *)((longlong)param_3 + 4);
  }
  uVar6 = iVar10 - iVar5;
  uStack_110 = CONCAT44(iVar10,local_88);
  *(undefined4 *)(param_4 + 1) = 0;
  iVar5 = 0;
  uVar14 = uVar9;
  local_108 = local_88;
  local_100 = iVar3;
  local_fc = uVar6;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_4);
    uVar14 = (ulonglong)*(uint *)(param_4 + 1);
    iVar5 = *(int *)((longlong)param_4 + 0xc);
  }
  iVar4 = uVar6 * (local_88 - iVar8) * iVar3 + (int)uVar14;
  *(int *)(param_4 + 1) = iVar4;
  if (iVar5 < iVar4) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_4);
  }
  lVar11 = local_e8;
  local_d8 = 0;
  uStack_d0 = 0;
  local_b8 = *local_f0;
  lStack_b0 = local_f0[1];
  local_a8 = (undefined4)local_f0[2];
  local_130 = &local_b8;
  local_138 = &local_d8;
  local_98 = (int)local_118;
  uStack_94 = local_118._4_4_;
  uStack_90 = (undefined4)uStack_110;
  uStack_8c = uStack_110._4_4_;
  FUN_141a30680(local_e8,&local_f0,local_f8,&local_98);
  plVar7 = local_f0;
  local_130 = &local_c8;
  local_138 = (undefined8 *)((ulonglong)local_138 & 0xffffffff00000000);
  iVar5 = (**(code **)(**(longlong **)(lVar11 + 0x200) + 0x70))
                    (*(longlong **)(lVar11 + 0x200),local_f0,0,1);
  if (iVar5 < 0) {
    local_138 = *(undefined8 **)(local_e8 + 0x210);
    FUN_141a447e0(iVar5,"Direct3DDeviceIMContext->Map(TempTexture2D,0,D3D11_MAP_READ,0,&LockedRect)"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RenderTarget.cpp"
                  ,0x28d);
  }
  uVar6 = (local_88 - iVar8) * iVar3;
  _Dst = (void *)*param_4;
  _Src = (void *)((ulonglong)(uint)((int)local_d8 * local_100) +
                 (ulonglong)(local_c0 * local_d8._4_4_) + local_c8);
  local_f8._0_4_ = uVar6;
  if (local_fc != 0) {
    uVar14 = (ulonglong)local_fc;
    do {
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)uVar6);
      _Dst = (void *)((longlong)_Dst + (ulonglong)uVar6);
      _Src = (void *)((longlong)_Src + (ulonglong)local_c0);
      uVar14 = uVar14 - 1;
      plVar7 = local_f0;
      param_4 = local_e0;
    } while (uVar14 != 0);
  }
  (**(code **)(**(longlong **)(local_e8 + 0x200) + 0x78))(*(longlong **)(local_e8 + 0x200),plVar7,0)
  ;
  if (local_128 == '\0') goto LAB_141a41ba7;
  if ((int)local_118 == (int)*param_3) {
    iVar8 = *(int *)((longlong)param_3 + 4);
    if (local_118._4_4_ != iVar8) goto LAB_141a41a70;
    iVar3 = (int)param_3[1];
    if ((local_108 == iVar3) && (iVar10 == *(int *)((longlong)param_3 + 0xc))) goto LAB_141a41ba7;
  }
  else {
LAB_141a41a70:
    iVar3 = (int)param_3[1];
    iVar8 = *(int *)((longlong)param_3 + 4);
  }
  local_f8._0_4_ = iVar3 - (int)*param_3;
  uVar6 = (int)uStack_d0 - (int)local_d8;
  uVar12 = (uint)local_f8 * local_100;
  local_108 = uVar6 * local_100;
  iVar3 = *(int *)((longlong)param_3 + 0xc);
  local_118 = 0;
  uStack_110 = 0;
  uVar14 = uVar9;
  iVar10 = 0;
  local_fc = uVar12;
  if (0 < (int)((iVar3 - iVar8) * uVar12)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_118);
    iVar3 = *(int *)((longlong)param_3 + 0xc);
    iVar8 = *(int *)((longlong)param_3 + 4);
    uVar14 = uStack_110 & 0xffffffff;
    iVar10 = uStack_110._4_4_;
  }
  iVar5 = (iVar3 - iVar8) * uVar12 + (int)uVar14;
  uStack_110 = CONCAT44(uStack_110._4_4_,iVar5);
  if (iVar10 < iVar5) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_118,uVar14);
    iVar3 = *(int *)((longlong)param_3 + 0xc);
    iVar8 = *(int *)((longlong)param_3 + 4);
  }
  uVar2 = local_fc;
  lVar11 = local_118;
  if ((int)uVar12 <= local_108) {
    uVar6 = (uint)local_f8;
  }
  if (0 < iVar3 - iVar8) {
    local_e0 = (longlong *)(longlong)(int)(uVar6 * local_100);
    uVar14 = uVar9;
    uVar13 = uVar9;
    do {
      _guard_xfg_dispatch_icall_nop
                ((void *)((int)uVar13 + lVar11),
                 (void *)((ulonglong)(uint)(local_100 * (int)*param_3) + (longlong)(int)uVar14 +
                         *param_4),(size_t)local_e0);
      uVar6 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar6;
      uVar13 = (ulonglong)((int)uVar13 + uVar2);
      uVar14 = (ulonglong)(uint)((int)uVar14 + local_108);
      plVar7 = local_f0;
    } while ((int)uVar6 < *(int *)((longlong)param_3 + 0xc) - *(int *)((longlong)param_3 + 4));
  }
  if (&local_118 != param_4) {
    lVar11 = *param_4;
    lVar1 = param_4[1];
    *param_4 = local_118;
    param_4[1] = uStack_110;
    local_118 = lVar11;
    uStack_110 = lVar1;
  }
  if (lVar11 != 0) {
    FMemory::Free(lVar11);
  }
LAB_141a41ba7:
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return;
}



// FUNCTION 141a41c30 FUN_141a41c30 body=532 status=ok
// SIG undefined FUN_141a41c30(void)

void FUN_141a41c30(longlong *param_1)

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
        if (bVar4) goto LAB_141a41d6f;
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
LAB_141a41d6f:
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
        lVar6 = (longlong)iStack_1c * 0x460 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0x408);
        *(uint *)(lVar6 + 0x45c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x458) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
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



// FUNCTION 141a41e50 Release body=168 status=ok
// SIG undefined Release(void)

int TD3D11Texture2D<FD3D11BaseTexture2D>::Release(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar1 = (undefined8 *)(param_1 + -0x68);
  LOCK();
  piVar2 = (int *)(param_1 + -0x60);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 + -1 == 0) {
    if ((*(char *)(param_1 + -0x58) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0'))))
    {
      LOCK();
      bVar7 = *(int *)(param_1 + -0x5c) == 0;
      if (bVar7) {
        *(int *)(param_1 + -0x5c) = 1;
      }
      UNLOCK();
      if (bVar7) {
        uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar6 + 8) = puVar1;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar5);
        return 0;
      }
    }
    else {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return iVar3 + -1;
}



// FUNCTION 141a41f00 Release body=168 status=ok
// SIG undefined Release(void)

int TD3D11Texture2D<FD3D11BaseTexture2DArray>::Release(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar1 = (undefined8 *)(param_1 + -0x70);
  LOCK();
  piVar2 = (int *)(param_1 + -0x68);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 + -1 == 0) {
    if ((*(char *)(param_1 + -0x60) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0'))))
    {
      LOCK();
      bVar7 = *(int *)(param_1 + -100) == 0;
      if (bVar7) {
        *(int *)(param_1 + -100) = 1;
      }
      UNLOCK();
      if (bVar7) {
        uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar6 + 8) = puVar1;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar5);
        return 0;
      }
    }
    else {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return iVar3 + -1;
}



// FUNCTION 141a41fb0 Release body=168 status=ok
// SIG undefined Release(void)

int FD3D11IndexBuffer::Release(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar1 = (undefined8 *)(param_1 + -0x28);
  LOCK();
  piVar2 = (int *)(param_1 + -0x20);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 + -1 == 0) {
    if ((*(char *)(param_1 + -0x18) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0'))))
    {
      LOCK();
      bVar7 = *(int *)(param_1 + -0x1c) == 0;
      if (bVar7) {
        *(int *)(param_1 + -0x1c) = 1;
      }
      UNLOCK();
      if (bVar7) {
        uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar6 + 8) = puVar1;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar5);
        return 0;
      }
    }
    else {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return iVar3 + -1;
}



// FUNCTION 141a42060 Release body=168 status=ok
// SIG undefined Release(void)

int FD3D11VertexBuffer::Release(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar1 = (undefined8 *)(param_1 + -0x20);
  LOCK();
  piVar2 = (int *)(param_1 + -0x18);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 + -1 == 0) {
    if ((*(char *)(param_1 + -0x10) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0'))))
    {
      LOCK();
      bVar7 = *(int *)(param_1 + -0x14) == 0;
      if (bVar7) {
        *(int *)(param_1 + -0x14) = 1;
      }
      UNLOCK();
      if (bVar7) {
        uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar6 + 8) = puVar1;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar5);
        return 0;
      }
    }
    else {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return iVar3 + -1;
}



// FUNCTION 141a42110 FUN_141a42110 body=320 status=ok
// SIG undefined FUN_141a42110(void)

void FUN_141a42110(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
    uVar3 = 0;
    uVar6 = uVar3;
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        plVar1 = *(longlong **)(uVar6 + *(longlong *)(param_1 + 0x58));
        *(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x58)) = 0;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
        }
        plVar1 = *(longlong **)(uVar6 + *(longlong *)(param_1 + 0x60));
        *(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x60)) = 0;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
        }
        uVar4 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar4;
        uVar6 = uVar6 + 8;
      } while ((int)uVar4 < *(int *)(param_1 + 0x48));
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    if (lVar2 != 0) {
      lVar7 = *(longlong *)(lVar2 + -8);
      lVar5 = lVar2 + lVar7 * 8;
      lVar8 = 0;
      if (lVar7 != 0) {
        do {
          plVar1 = (longlong *)(lVar5 + -8);
          lVar5 = lVar5 + -8;
          lVar7 = lVar7 + -1;
          if ((longlong *)*plVar1 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar1 + 0x10))();
          }
        } while (lVar7 != 0);
        lVar8 = *(longlong *)(lVar2 + -8);
      }
      FMemory::operator_delete((longlong *)(lVar2 + -8),lVar8 * 8 + 8);
    }
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (lVar2 != 0) {
      lVar7 = *(longlong *)(lVar2 + -8);
      lVar5 = lVar2 + lVar7 * 8;
      lVar8 = 0;
      if (lVar7 != 0) {
        do {
          plVar1 = (longlong *)(lVar5 + -8);
          lVar5 = lVar5 + -8;
          lVar7 = lVar7 + -1;
          if ((longlong *)*plVar1 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar1 + 0x10))();
          }
        } while (lVar7 != 0);
        lVar8 = *(longlong *)(lVar2 + -8);
      }
      FMemory::operator_delete((longlong *)(lVar2 + -8),lVar8 * 8 + 8);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 141a42280 FUN_141a42280 body=216 status=ok
// SIG undefined FUN_141a42280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a42280(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (lVar2 != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
        (**(code **)(*plVar1 + 0x50))(plVar1,local_28);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 0x6c));
      lVar2 = *(longlong *)(param_1 + 0x60);
    }
    if (lVar2 != 0) {
      lVar5 = *(longlong *)(lVar2 + -8);
      lVar7 = lVar2 + lVar5 * 8;
      lVar6 = 0;
      if (lVar5 != 0) {
        do {
          plVar1 = (longlong *)(lVar7 + -8);
          lVar7 = lVar7 + -8;
          lVar5 = lVar5 + -1;
          if ((longlong *)*plVar1 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar1 + 0x10))();
          }
        } while (lVar5 != 0);
        lVar6 = *(longlong *)(lVar2 + -8);
      }
      FMemory::operator_delete((longlong *)(lVar2 + -8),lVar6 * 8 + 8);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 141a42360 ReleaseRHI body=124 status=ok
// SIG undefined ReleaseRHI(void)

void TBoundShaderStateHistory<10000,1>::ReleaseRHI(longlong param_1)

{
  BOOL BVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_146ab6328 != '\0') {
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138b8));
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138b8));
    }
  }
  lVar2 = param_1 + 0x30;
  lVar3 = 10000;
  do {
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar2,0);
    lVar2 = lVar2 + 8;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (DAT_146ab6328 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138b8));
  }
  return;
}



// FUNCTION 141a423e0 FUN_141a423e0 body=180 status=ok
// SIG undefined FUN_141a423e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a423e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = 0;
  if (0 < iVar1) {
    puVar3 = (undefined8 *)(param_1 + 0x58);
    do {
      (**(code **)(*(longlong *)*puVar3 + 0x50))((longlong *)*puVar3,local_28);
      iVar1 = *(int *)(param_1 + 0x78);
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  plVar4 = (longlong *)(param_1 + 0x58);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    if ((longlong *)*plVar4 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar4 + 0x10))();
    }
    plVar4 = plVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    TArray<TRefCountPtr<ID3D11Buffer>,TFixedAllocator<4>_>::ResizeTo(param_1 + 0x58,0);
  }
  return;
}



// FUNCTION 141a424a0 Remove body=388 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar9 = (int)(*param_2 >> 4);
  uVar6 = (longlong)(int)param_1[9] - 1;
  uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
  uVar4 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
  uVar10 = (iVar9 - uVar8) - uVar4 ^ uVar4 >> 0xc;
  uVar8 = (uVar8 - uVar10) - uVar4 ^ uVar10 << 0x10;
  uVar4 = (uVar4 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar10 = (uVar10 - uVar8) - uVar4 ^ uVar4 >> 3;
  uVar8 = (uVar8 - uVar10) - uVar4 ^ uVar10 << 10;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar7 +
                  (((longlong)(int)((uVar4 - uVar8) - uVar10) ^ (ulonglong)(uVar8 >> 0xf)) & uVar6)
                  * 4);
  if (iVar9 != -1) {
    lVar2 = *param_1;
    do {
      lVar5 = (longlong)iVar9 * 0x38;
      if ((*(ulonglong *)(lVar5 + lVar2) == *param_2) &&
         (*(int *)(lVar5 + 8 + lVar2) == (int)param_2[1])) {
        uVar6 = (longlong)*(int *)(lVar5 + 0x34 + lVar2) & uVar6;
        piVar3 = (int *)((longlong)plVar7 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar7 + uVar6 * 4);
        goto joined_r0x000141a425cb;
      }
      iVar9 = *(int *)(lVar5 + 0x30 + lVar2);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x000141a425cb:
  if (iVar1 == -1) {
LAB_141a425f2:
    plVar7 = *(longlong **)(lVar5 + 0x10 + *param_1);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar9,1);
    return 1;
  }
  if (iVar1 == iVar9) {
    *piVar3 = *(int *)(lVar5 + 0x30 + lVar2);
    goto LAB_141a425f2;
  }
  piVar3 = (int *)(lVar2 + 0x30 + (longlong)iVar1 * 0x38);
  iVar1 = *piVar3;
  goto joined_r0x000141a425cb;
}



// FUNCTION 141a42650 FUN_141a42650 body=935 status=ok
// SIG undefined FUN_141a42650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a42650(longlong param_1,int param_2,int param_3,char param_4,int param_5)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res10 [2];
  int local_res18 [2];
  char local_res20 [8];
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  int local_138 [2];
  longlong *local_130;
  longlong *local_128;
  longlong local_120;
  int *local_118;
  int *local_110;
  undefined4 *local_108;
  char *local_100;
  undefined8 local_f8 [11];
  longlong local_a0;
  undefined8 local_98 [11];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  plVar9 = (longlong *)0x0;
  plVar8 = (longlong *)0x0;
  local_140 = 0;
  local_148 = 0;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  FUN_141a3e630(*(longlong *)(param_1 + 0x18) + 0x30,0,0,0);
  lVar6 = *(longlong *)(param_1 + 0x18);
  (**(code **)(*(longlong *)(lVar6 + 0x218) + 0x10))();
  _guard_xfg_dispatch_icall_nop((void *)(lVar6 + 0x27c8),0,0x1800);
  *(undefined8 *)(lVar6 + 0x3fc8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0x3fd0) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0x3fd8) = 0xffffffffffffffff;
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 0x200) + 0x378))();
  if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 8))();
  }
  lVar6 = *(longlong *)(param_1 + 0x70);
  if (lVar6 != 0) {
    plVar7 = *(longlong **)(lVar6 + 0xa0);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 8))(plVar7);
      (**(code **)(*plVar7 + 0x10))();
      lVar6 = *(longlong *)(param_1 + 0x70);
    }
    uVar1 = -(uint)(*(char *)(lVar6 + 0xc0) != '\0');
    plVar7 = plVar9;
    if (uVar1 < *(uint *)(lVar6 + 0xb8)) {
      plVar7 = *(longlong **)(*(longlong *)(lVar6 + 0xb0) + (longlong)(int)uVar1 * 8);
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 8))(plVar7);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar6 = *(longlong *)(param_1 + 0x70);
    }
    plVar7 = *(longlong **)(lVar6 + 0xa8);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 8))(plVar7);
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(longlong *)(lVar6 + 0x68) + 0x10))(lVar6 + 0x68);
  }
  local_130 = (longlong *)0x0;
  FUN_141a30060(param_1,&local_128);
  local_138[0] = 0;
  if ((local_128 != (longlong *)0x0) && (local_res20[0] != '\0')) {
    plVar7 = *(longlong **)(param_1 + 0x68);
    if (local_130 != (longlong *)0x0) {
      (**(code **)(*local_130 + 0x10))();
    }
    iVar4 = (**(code **)(*plVar7 + 0x58))(plVar7,local_138,&local_130);
    if ((-1 < iVar4) && (plVar9 = plVar8, local_138[0] != 0)) {
      iVar4 = (**(code **)(*local_130 + 0x38))(local_130,local_98);
      if (-1 < iVar4) {
        iVar4 = (**(code **)(*local_128 + 0x38))(local_128,local_f8);
        if (-1 < iVar4) {
          plVar9 = (longlong *)(ulonglong)(local_40 != local_a0);
        }
      }
    }
  }
  local_118 = local_res10;
  local_110 = local_res18;
  local_108 = &param_5;
  local_100 = local_res20;
  local_120 = param_1;
  if ((((*(int *)(param_1 + 0x4c) != local_res10[0]) || (*(int *)(param_1 + 0x50) != local_res18[0])
       ) || (*(int *)(param_1 + 0x5c) != param_5)) || ((char)plVar9 != '\0')) {
    FUN_141a250b0(&local_120);
  }
  if ((*(char *)(param_1 + 0x58) != local_res20[0]) || ((char)plVar9 != '\0')) {
    *(char *)(param_1 + 0x58) = local_res20[0];
    *(undefined1 *)(param_1 + 0x60) = 0;
    FUN_141a28da0(param_1,1);
    if (*(char *)(param_1 + 0x60) != '\0') {
      FUN_141a250b0(&local_120);
    }
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x750))();
    if ((DAT_146ab632a != '\0') && (cVar2 = FUN_141ee41d0(), cVar2 != '\0')) {
      FUN_141a2d3b0(param_1);
      uVar3 = 1;
      goto LAB_141a4296e;
    }
    FUN_141a437b0(param_1);
  }
  else {
    FUN_141a437b0(param_1);
    if (((*(int *)(param_1 + 0x5c) == DAT_1464c9c38) && (DAT_146ab632a != '\0')) &&
       (cVar2 = FUN_141ee41d0(), cVar2 != '\0')) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x748))();
      uVar3 = 1;
      goto LAB_141a4296e;
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x750))();
  }
  uVar3 = 0;
LAB_141a4296e:
  *(undefined1 *)(param_1 + 0x80) = uVar3;
  lVar5 = FUN_141a308d0(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x5c),
                        *(undefined8 *)(param_1 + 0x68));
  lVar6 = *(longlong *)(param_1 + 0x70);
  *(longlong *)(param_1 + 0x70) = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(longlong *)(lVar5 + 0x68) + 8))(lVar5 + 0x68);
  }
  if (lVar6 != 0) {
    (**(code **)(*(longlong *)(lVar6 + 0x68) + 0x10))(lVar6 + 0x68);
  }
  if (local_128 != (longlong *)0x0) {
    (**(code **)(*local_128 + 0x10))(local_128);
  }
  if (local_130 != (longlong *)0x0) {
    (**(code **)(*local_130 + 0x10))();
  }
  return;
}



// FUNCTION 141a42a00 FUN_141a42a00 body=17 status=ok
// SIG undefined FUN_141a42a00(void)

void FUN_141a42a00(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x20;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x404) = uVar1;
  return;
}



// FUNCTION 141a42a20 FUN_141a42a20 body=8 status=ok
// SIG undefined FUN_141a42a20(void)

void FUN_141a42a20(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 4;
  return;
}



// FUNCTION 141a42a30 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<1120,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x460,0);
  iVar4 = (int)(uVar3 / 0x460);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x460,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141a42ac0 ResizeGrow body=11 status=ok
// SIG undefined ResizeGrow(void)

void TArray<D3D11_INPUT_ELEMENT_DESC,TFixedAllocator<32>_>::ResizeGrow(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x404) = 0x20;
  return;
}



// FUNCTION 141a42ad0 FUN_141a42ad0 body=8 status=ok
// SIG undefined FUN_141a42ad0(void)

void FUN_141a42ad0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 4;
  return;
}



// FUNCTION 141a42ae0 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<1120,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x460,0);
    iVar3 = (int)(uVar1 / 0x460);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x460,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141a42b60 ResizeTo body=19 status=ok
// SIG undefined ResizeTo(void)

void TArray<TRefCountPtr<ID3D11Buffer>,TFixedAllocator<4>_>::ResizeTo(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 4;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  if (iVar1 != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = iVar1;
  }
  return;
}



// FUNCTION 141a42b80 SafeCreateDXGIFactory body=176 status=ok
// SIG undefined SafeCreateDXGIFactory(void)

void SafeCreateDXGIFactory(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  HMODULE hModule;
  
  uVar2 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar2,L"quad_buffer_stereo");
  if (cVar1 == '\0') {
LAB_141a42bf6:
    if (DAT_1469fc5a2 == '\0') goto LAB_141a42c14;
  }
  else {
    hModule = LoadLibraryA("dxgi.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1469fcd18 = GetProcAddress(hModule,"CreateDXGIFactory2");
      FreeLibrary(hModule);
    }
    if (DAT_1469fcd18 == (FARPROC)0x0) goto LAB_141a42bf6;
    DAT_1469fc5a2 = '\x01';
  }
  if (DAT_1469fcd18 != (FARPROC)0x0) {
    (*DAT_1469fcd18)(0,&DAT_144da1e48,param_1);
    return;
  }
LAB_141a42c14:
  _guard_xfg_dispatch_icall_nop(&DAT_144da1f90,param_1);
  return;
}



// FUNCTION 141a42c30 SafeTestD3D11CreateDevice body=334 status=ok
// SIG undefined SafeTestD3D11CreateDevice(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 SafeTestD3D11CreateDevice(undefined8 param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  int *local_88;
  int local_80;
  undefined4 local_78;
  longlong **local_70;
  undefined8 local_68;
  longlong **local_60;
  longlong *local_50;
  longlong *local_48 [2];
  int local_38 [4];
  ulonglong local_28;
  ulonglong uVar6;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar4 = 0;
  local_50 = (longlong *)0x0;
  local_48[0] = (longlong *)0x0;
  uVar3 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar3,L"d3ddebug");
  if (cVar1 == '\0') {
    uVar3 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar3,L"d3debug");
    if (cVar1 == '\0') {
      uVar3 = FCommandLine::Get();
      cVar1 = FParse::Param(uVar3,L"dxdebug");
      if (cVar1 == '\0') {
        uVar3 = 1;
        goto LAB_141a42cbf;
      }
    }
  }
  uVar3 = 3;
LAB_141a42cbf:
  local_38[0] = 0xb100;
  local_38[1] = 0xb000;
  local_38[2] = 0xa000;
  uVar6 = uVar4;
  do {
    uVar5 = (uint)uVar6;
    if (local_38[uVar4] == param_2) break;
    uVar5 = uVar5 + 1;
    uVar6 = (ulonglong)uVar5;
    uVar4 = uVar4 + 1;
  } while ((longlong)uVar4 < 3);
  local_80 = 3 - uVar5;
  if (local_80 != 0) {
    local_88 = local_38 + (int)uVar5;
    local_60 = local_48;
    local_70 = &local_50;
    local_78 = 7;
    local_68 = param_3;
    iVar2 = _guard_xfg_dispatch_icall_nop(param_1,0,0,uVar3);
    if (-1 < iVar2) {
      (**(code **)(*local_50 + 0x10))();
      (**(code **)(*local_48[0] + 0x10))();
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141a42d90 FUN_141a42d90 body=191 status=ok
// SIG undefined FUN_141a42d90(void)

void FUN_141a42d90(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 0xd8);
  *(longlong *)(param_1 + 0xd8) = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) != '\0') ||
         ((DAT_146ab62f5 == '\0' && (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 != '\0')))
         ) {
                    /* WARNING: Could not recover jumptable at 0x000141a42e46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)(puVar3,1);
        return;
      }
      LOCK();
      bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
      if (bVar7) {
        *(int *)((longlong)puVar3 + 0xc) = 1;
      }
      UNLOCK();
      if (bVar7) {
        uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar6 + 8) = puVar3;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141a42e50 FUN_141a42e50 body=980 status=ok
// SIG undefined FUN_141a42e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a42e50(uint param_1,byte param_2,int param_3,float param_4,float param_5,float param_6,
                  float param_7)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  int local_e0;
  int local_d8;
  undefined1 local_d4 [4];
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double local_80;
  double dStack_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar5 = (ulonglong)(param_1 & 0xffff) * 0x1d0 +
          *(longlong *)((ulonglong)(param_1 >> 0x10) * 0x70 + DAT_1469fcd10 + 0x48);
  if ((*(byte *)(lVar5 + 0x120) & 0x16) != 0) {
    _guard_xfg_dispatch_icall_nop(local_d4,0,0x6c);
    local_d8 = (uint)param_2 * 2;
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar1 + 0x38) < DAT_1469fcde8) {
      _Init_thread_header(&DAT_1469fcde8);
      if (DAT_1469fcde8 == -1) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        DAT_1469fcde0 = (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.OutputMinNits");
        _Init_thread_footer(&DAT_1469fcde8);
      }
    }
    if (*(int *)(lVar1 + 0x38) < DAT_1469fcdf8) {
      _Init_thread_header(&DAT_1469fcdf8);
      if (DAT_1469fcdf8 == -1) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        DAT_1469fcdf0 = (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.OutputMaxNits");
        _Init_thread_footer(&DAT_1469fcdf8);
      }
    }
    if (*(int *)(lVar1 + 0x38) < DAT_1469fce08) {
      _Init_thread_header(&DAT_1469fce08);
      if (DAT_1469fce08 == -1) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        DAT_1469fce00 =
             (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.UseNativeNits");
        _Init_thread_footer(&DAT_1469fce08);
      }
    }
    uVar6 = 0;
    if (param_2 != 0) {
      if ((*(byte *)(lVar5 + 0x120) & 0x10) == 0) {
        local_70 = 0;
        lVar5 = (longlong)param_3 * 0x20;
        dStack_c8 = (double)*(float *)(&DAT_144d9b004 + lVar5);
        local_d0 = (double)*(float *)(&DAT_144d9b000 + lVar5);
        dStack_b8 = (double)*(float *)(&DAT_144d9b00c + lVar5);
        local_c0 = (double)*(float *)(&DAT_144d9b008 + lVar5);
        dStack_a8 = (double)*(float *)(&DAT_144d9b014 + lVar5);
        local_b0 = (double)*(float *)(&DAT_144d9b010 + lVar5);
        dStack_98 = (double)*(float *)(&DAT_144d9b01c + lVar5);
        local_a0 = (double)*(float *)(&DAT_144d9b018 + lVar5);
        local_90 = (double)param_5;
        local_88 = (double)param_4;
        dStack_78 = (double)param_7;
        local_80 = (double)param_6;
        uVar6 = 0;
      }
      else {
        local_d0 = *(double *)(lVar5 + 0x160);
        dStack_c8 = *(double *)(lVar5 + 0x168);
        local_90 = *(double *)(lVar5 + 0x1b0);
        local_d8 = 3;
        local_c0 = *(double *)(lVar5 + 0x170);
        dStack_b8 = *(double *)(lVar5 + 0x178);
        local_70 = 0;
        local_b0 = *(double *)(lVar5 + 0x180);
        dStack_a8 = *(double *)(lVar5 + 0x188);
        local_a0 = *(double *)(lVar5 + 400);
        dStack_98 = *(double *)(lVar5 + 0x198);
        local_88 = *(double *)(lVar5 + 0x1b8);
        local_80 = 0.0;
        dStack_78 = 0.0;
        IConsoleVariable::SetWithCurrentPriority(DAT_1469fcde0,(float)local_90);
        IConsoleVariable::SetWithCurrentPriority(DAT_1469fcdf0,(float)local_88);
        uVar6 = 1;
      }
    }
    plVar2 = DAT_1469fce00;
    uVar3 = (**(code **)(*DAT_1469fce00 + 0x18))(DAT_1469fce00);
    FString::PrintfImpl(&local_e8,&DAT_143f3edc0,uVar6);
    puVar4 = &DAT_143f3eda8;
    if (local_e0 != 0) {
      puVar4 = local_e8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,puVar4,uVar3 & 0xff000000);
    if (local_e8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    agsSetDisplayMode(DAT_1469fcce0,(ulonglong)(param_1 >> 0x10),(ulonglong)(param_1 & 0xffff),
                      &local_d8);
  }
  return;
}



// FUNCTION 141a43230 SetHDRMonitorModeNVIDIA body=394 status=ok
// SIG undefined SetHDRMonitorModeNVIDIA(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void SetHDRMonitorModeNVIDIA
               (undefined4 param_1,byte param_2,int param_3,float param_4,float param_5,
               float param_6,float param_7)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  int local_cc;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined2 local_c4;
  undefined2 local_c2;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined4 local_b0;
  ulonglong local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_b0 = 0x10024;
  local_ac = 0;
  uStack_a4 = 0;
  local_9c = 0;
  uStack_94 = 0;
  local_cc = FUN_14004cc00(0,&local_b0);
  if ((local_cc == 0) && ((local_ac & 1) != 0)) {
    lVar2 = (longlong)param_3 * 0x20;
    local_d0 = (uint)param_2 * 2;
    local_d8 = 0x10028;
    local_d4 = 1;
    local_c8 = (undefined2)(int)(*(float *)(&DAT_144d9b000 + lVar2) * 50000.0);
    local_c6 = (undefined2)(int)(*(float *)(&DAT_144d9b004 + lVar2) * 50000.0);
    local_c4 = (undefined2)(int)(*(float *)(&DAT_144d9b008 + lVar2) * 50000.0);
    local_c2 = (undefined2)(int)(*(float *)(&DAT_144d9b00c + lVar2) * 50000.0);
    local_c0 = (undefined2)(int)(*(float *)(&DAT_144d9b010 + lVar2) * 50000.0);
    local_be = (undefined2)(int)(*(float *)(&DAT_144d9b014 + lVar2) * 50000.0);
    local_bc = (undefined2)(int)(*(float *)(&DAT_144d9b018 + lVar2) * 50000.0);
    local_ba = (undefined2)(int)(*(float *)(&DAT_144d9b01c + lVar2) * 50000.0);
    local_b8 = (undefined2)(int)param_4;
    local_b6 = (undefined2)(int)param_5;
    local_b4 = (undefined2)(int)param_6;
    local_b2 = (undefined2)(int)param_7;
    iVar1 = FUN_14004ccc0(param_1,&local_d8);
    if ((1 < iVar1 + 1U) && (iVar1 != -6)) {
      FUN_14004cb40(iVar1,local_88);
    }
  }
  return;
}



// FUNCTION 141a433c0 FUN_141a433c0 body=505 status=ok
// SIG undefined FUN_141a433c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a433c0(longlong param_1,char param_2,int param_3,float param_4,float param_5,
                  float param_6,float param_7)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = (longlong *)0x0;
  (**(code **)**(undefined8 **)(param_1 + 0x68))
            (*(undefined8 **)(param_1 + 0x68),&DAT_144da1fb0,&local_58);
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x78) != '\0') {
      iVar1 = (**(code **)(*local_58 + 0x140))(local_58,0,0,0);
      if (iVar1 < 0) {
        local_68 = 0;
        FUN_141a447e0(iVar1,"SwapChain4->SetHDRMetaData(DXGI_HDR_METADATA_TYPE_NONE, 0, nullptr)",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Viewport.cpp"
                      ,0x1a9);
      }
      *(undefined1 *)(param_1 + 0x78) = 0;
    }
  }
  else {
    lVar2 = (longlong)param_3 * 0x20;
    local_50 = (undefined2)(int)(*(float *)(&DAT_144da1fc0 + lVar2) * 50000.0);
    local_4e = (undefined2)(int)(*(float *)(&DAT_144da1fc4 + lVar2) * 50000.0);
    local_4c = (undefined2)(int)(*(float *)(&DAT_144da1fc8 + lVar2) * 50000.0);
    local_4a = (undefined2)(int)(*(float *)(&DAT_144da1fcc + lVar2) * 50000.0);
    local_48 = (undefined2)(int)(*(float *)(&DAT_144da1fd0 + lVar2) * 50000.0);
    local_46 = (undefined2)(int)(*(float *)(&DAT_144da1fd4 + lVar2) * 50000.0);
    local_44 = (undefined2)(int)(*(float *)(&DAT_144da1fd8 + lVar2) * 50000.0);
    local_42 = (undefined2)(int)(*(float *)(&DAT_144da1fdc + lVar2) * 50000.0);
    local_40 = (undefined4)(longlong)(param_4 * 10000.0);
    local_3c = (undefined4)(longlong)(param_5 * 10000.0);
    local_38 = (undefined2)(int)param_6;
    local_36 = (undefined2)(int)param_7;
    iVar1 = (**(code **)(*local_58 + 0x140))(local_58,1,0x1c,&local_50);
    if (iVar1 < 0) {
      local_68 = 0;
      FUN_141a447e0(iVar1,
                    "SwapChain4->SetHDRMetaData(DXGI_HDR_METADATA_TYPE_HDR10, sizeof(HDR10MetaData), &HDR10MetaData)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Viewport.cpp"
                    ,0x19c);
    }
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  return;
}



// FUNCTION 141a435c0 FUN_141a435c0 body=85 status=ok
// SIG undefined FUN_141a435c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a435c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_1c = param_5;
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x168))
            (*(longlong **)(param_1 + 0x200),1,&local_28);
  return;
}



// FUNCTION 141a43620 SetWithCurrentPriority body=125 status=ok
// SIG undefined SetWithCurrentPriority(void)

void IConsoleVariable::SetWithCurrentPriority(longlong *param_1,float param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *local_28;
  int local_20;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  FString::PrintfImpl(&local_28,&DAT_144050d74,(double)param_2);
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  (**(code **)(*param_1 + 0x60))(param_1,puVar2,uVar1 & 0xff000000);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141a436a0 FUN_141a436a0 body=64 status=ok
// SIG undefined FUN_141a436a0(void)

void FUN_141a436a0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x788))();
  (**(code **)(param_1[0x2fa0] + 0x30))();
  FMemory::Free(param_1[0x4e4]);
  param_1[0x4e4] = 0;
  *(undefined4 *)(param_1 + 0x4e5) = 0;
  return;
}



// FUNCTION 141a436e0 FUN_141a436e0 body=203 status=ok
// SIG undefined FUN_141a436e0(void)

void FUN_141a436e0(longlong param_1)

{
  char cVar1;
  
  if ((DAT_146ab632a != '\0') && (DAT_1469fc50b != '\0')) {
    cVar1 = IsRHIDeviceIntel();
    if (cVar1 != '\0') {
      SetHDRMonitorModeNVIDIA
                (*(undefined4 *)(param_1 + 0x17c34),0,0,0x42c80000,0,0x42c80000,0x41a00000);
      DAT_1469fc50b = 0;
      return;
    }
    cVar1 = IsRHIDeviceIntel();
    if (cVar1 != '\0') {
      FUN_141a42e50(*(undefined4 *)(param_1 + 0x17c34),0,0,0x42c80000,0,0x42c80000,0x41a00000);
      DAT_1469fc50b = 0;
      return;
    }
    IsRHIDeviceIntel();
    DAT_1469fc50b = '\0';
  }
  return;
}



// FUNCTION 141a437b0 FUN_141a437b0 body=288 status=ok
// SIG undefined FUN_141a437b0(void)

void FUN_141a437b0(longlong param_1)

{
  int iVar1;
  longlong *local_18;
  uint local_10 [2];
  
  if (DAT_146ab632a != '\0') {
    local_18 = (longlong *)0x0;
    (**(code **)**(undefined8 **)(param_1 + 0x68))
              (*(undefined8 **)(param_1 + 0x68),&DAT_144da1fb0,&local_18);
    if (*(char *)(param_1 + 0x78) != '\0') {
      iVar1 = (**(code **)(*local_18 + 0x140))(local_18,0,0,0);
      if (iVar1 < 0) {
        FUN_141a447e0(iVar1,"SwapChain4->SetHDRMetaData(DXGI_HDR_METADATA_TYPE_NONE, 0, nullptr)",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Viewport.cpp"
                      ,0x1a9,0);
      }
      *(undefined1 *)(param_1 + 0x78) = 0;
    }
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
    local_18 = (longlong *)0x0;
    (**(code **)**(undefined8 **)(param_1 + 0x68))
              (*(undefined8 **)(param_1 + 0x68),&DAT_144da1fb0,&local_18);
    if (*(int *)(param_1 + 0x7c) != 0) {
      local_10[0] = 0;
      iVar1 = (**(code **)(*local_18 + 0x128))(local_18,0,local_10);
      if ((-1 < iVar1) && ((local_10[0] & 1) != 0)) {
        iVar1 = (**(code **)(*local_18 + 0x130))(local_18,0);
        if (iVar1 < 0) {
          FUN_141a447e0(iVar1,"SwapChain4->SetColorSpace1(NewColorSpace)",
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Viewport.cpp"
                        ,0x173,0);
        }
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
    }
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
  }
  return;
}



// FUNCTION 141a438d0 FUN_141a438d0 body=85 status=ok
// SIG undefined FUN_141a438d0(void)

void FUN_141a438d0(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x14)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x200);
  (**(code **)(*plVar1 + 0xd8))(plVar1,*(undefined8 *)(param_1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x000141a43921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x48) + 8))(param_1 + 0x48,0,0);
  return;
}



// FUNCTION 141a43930 FUN_141a43930 body=102 status=ok
// SIG undefined FUN_141a43930(void)

void FUN_141a43930(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  
  if ((DAT_146ab6339 != '\0') && (*(char *)(param_1 + 0x38) == '\0')) {
    iVar2 = (*(int *)(param_1 + 0x1c) + 1) % *(int *)(param_1 + 0x18);
    if (param_3 == 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x200);
    }
    else {
      plVar1 = *(longlong **)(param_3 + 0x1d0);
    }
    (**(code **)(*plVar1 + 0xe0))
              (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 8));
    *(int *)(param_1 + 0x1c) = iVar2;
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return;
}



// FUNCTION 141a439c0 FUN_141a439c0 body=89 status=ok
// SIG undefined FUN_141a439c0(void)

void FUN_141a439c0(longlong param_1)

{
  uint uVar1;
  
  if ((DAT_1469fc508 != '\0') && (*(longlong *)(param_1 + 0x208) != 0)) {
    SetEmitDrawEvents(0);
    uVar1 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 0x208));
    if ((uVar1 & 0xfff00000) != 0xbad00000) {
      *(undefined8 *)(param_1 + 0x208) = 0;
      return;
    }
    DAT_1469fc508 = '\0';
  }
  return;
}



// FUNCTION 141a43a40 FUN_141a43a40 body=1327 status=ok
// SIG undefined FUN_141a43a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_141a43a40(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  longlong lVar16;
  ushort uVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint uVar20;
  longlong *plVar21;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  char local_1d8;
  uint local_1d4;
  longlong *local_1d0;
  int local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  ulonglong local_1a4;
  undefined8 uStack_19c;
  undefined8 local_194;
  undefined8 uStack_18c;
  char local_178 [100];
  int local_114;
  char *local_f8;
  char *local_f0;
  undefined4 local_e8;
  short local_d8 [48];
  undefined1 local_78 [64];
  ulonglong local_38;
  longlong lVar10;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1b8 = (longlong *)0x0;
  *(undefined8 *)(param_1 + 0x17c30) = 0;
  iVar5 = (**(code **)**(undefined8 **)(param_1 + 0x210))
                    (*(undefined8 **)(param_1 + 0x210),&DAT_145ac6340,&local_1b8);
  if (iVar5 < 0) {
    local_1e8 = 0;
    FUN_141a447e0(iVar5,
                  "Direct3DDevice->QueryInterface(IID_IDXGIDevice, (void**)DXGIDevice.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                  ,0x243);
  }
  local_1b0 = (longlong *)0x0;
  (**(code **)(*local_1b8 + 0x38))(local_1b8,&local_1b0);
  local_1c8 = 0;
  local_1c0 = (longlong *)((ulonglong)local_1c0._4_4_ << 0x20);
  uVar7 = FCommandLine::Get();
  cVar2 = FParse::Value(uVar7,L"FullscreenDisplay=",&local_1c0);
  local_1d8 = cVar2;
  iVar5 = 0;
  do {
    local_1d0 = (longlong *)0x0;
    iVar6 = (**(code **)(*local_1b0 + 0x38))(local_1b0,iVar5,&local_1d0);
    if (iVar6 != 0) {
      if (local_1d0 != (longlong *)0x0) {
        (**(code **)(*local_1d0 + 0x10))();
      }
      if (local_1b0 != (longlong *)0x0) {
        (**(code **)(*local_1b0 + 0x10))();
      }
      if (local_1b8 != (longlong *)0x0) {
        (**(code **)(*local_1b8 + 0x10))();
      }
      plVar1 = *(longlong **)(param_1 + 0x1f0);
      uVar15 = 0;
      plVar19 = (longlong *)0x0;
      plVar12 = plVar19;
      plVar21 = plVar19;
      while( true ) {
        local_1c0 = (longlong *)0x0;
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        iVar5 = (**(code **)(*plVar1 + 0x38))(plVar1,plVar21,&local_1c0);
        plVar12 = local_1c0;
        plVar18 = plVar19;
        if (iVar5 == -0x7785fffe) break;
        while( true ) {
          local_1d0 = (longlong *)0x0;
          iVar5 = (**(code **)(*plVar12 + 0x38))(plVar12,plVar18,&local_1d0);
          if (iVar5 != 0) break;
          local_1b8 = (longlong *)0x0;
          iVar5 = (**(code **)*local_1d0)(local_1d0,&DAT_144da1fa0,&local_1b8);
          if (-1 < iVar5) {
            iVar5 = (**(code **)(*local_1b8 + 0xd8))(local_1b8,local_178);
            if (iVar5 < 0) {
              local_1e8 = 0;
              FUN_141a447e0(iVar5,"Output6->GetDesc1(&OutputDesc)",
                            "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                            ,0x2b5);
            }
            if (local_114 == 0xc) {
              uVar15 = 1;
            }
          }
          if (local_1b8 != (longlong *)0x0) {
            (**(code **)(*local_1b8 + 0x10))();
          }
          if (local_1d0 != (longlong *)0x0) {
            (**(code **)(*local_1d0 + 0x10))();
          }
          plVar18 = (longlong *)(ulonglong)((int)plVar18 + 1);
        }
        if (local_1d0 != (longlong *)0x0) {
          (**(code **)(*local_1d0 + 0x10))();
        }
        plVar21 = (longlong *)(ulonglong)((int)plVar21 + 1);
        plVar12 = local_1c0;
      }
      if (local_1c0 != (longlong *)0x0) {
        (**(code **)(*local_1c0 + 0x10))();
      }
      return uVar15;
    }
    if ((cVar2 == '\0') || (iVar5 == (int)local_1c0)) {
      (**(code **)(*local_1d0 + 0x38))();
      cVar3 = IsRHIDeviceIntel();
      if (cVar3 == '\0') {
        cVar3 = IsRHIDeviceIntel();
        if (cVar3 == '\0') {
          IsRHIDeviceIntel();
        }
        else {
          uVar13 = 0;
          uVar4 = 0;
          local_1d4 = local_1d4 & 0xffff0000;
          iVar6 = (int)DAT_1469fcd08;
          if (0 < (int)DAT_1469fcd08) {
            do {
              uVar20 = 0;
              uVar17 = 0;
              lVar8 = (ulonglong)uVar4 * 0x70 + DAT_1469fcd10;
              if (0 < *(int *)(lVar8 + 0x40)) {
                do {
                  local_f8 = (char *)0x0;
                  lVar16 = (ulonglong)uVar17 * 0x1d0 + *(longlong *)(lVar8 + 0x48);
                  lVar9 = -1;
                  do {
                    lVar10 = lVar9;
                    lVar9 = lVar10 + 1;
                  } while (local_d8[lVar9] != 0);
                  uVar14 = (int)lVar10 + 2;
                  local_e8 = (undefined4)lVar9;
                  if ((0x80 < uVar14) && (uVar14 != 0)) {
                    local_f8 = (char *)FMemory::Realloc(0,(longlong)(int)uVar14,0);
                  }
                  local_1e8 = CONCAT71(local_1e8._1_7_,0x3f);
                  local_f0 = local_178;
                  if (local_f8 != (char *)0x0) {
                    local_f0 = local_f8;
                  }
                  FGenericPlatformString::Convert<wchar_t,char>(local_f0,uVar14,local_d8,uVar14);
                  pcVar11 = local_f0;
                  do {
                    cVar2 = *pcVar11;
                    cVar3 = pcVar11[(lVar16 + 0x100) - (longlong)local_f0];
                    if (cVar2 != cVar3) break;
                    pcVar11 = pcVar11 + 1;
                  } while (cVar3 != '\0');
                  if (local_f8 != (char *)0x0) {
                    FMemory::Free();
                  }
                  if ((cVar2 == cVar3) &&
                     ((uVar14 = *(uint *)(lVar16 + 0x120), (uVar14 & 0x10) != 0 ||
                      ((uVar14 & 6) != 0)))) {
                    *(int *)(param_1 + 0x17c30) = local_1c8;
                    *(uint *)(param_1 + 0x17c34) = uVar13 << 0x10 | uVar20;
                  }
                  uVar17 = uVar17 + 1;
                  uVar20 = (uint)uVar17;
                  iVar6 = (int)DAT_1469fcd08;
                } while ((int)(uint)uVar17 < *(int *)(lVar8 + 0x40));
              }
              uVar4 = (short)local_1d4 + 1;
              uVar13 = (uint)uVar4;
              local_1d4 = CONCAT22(local_1d4._2_2_,uVar4);
              cVar2 = local_1d8;
              iVar5 = local_1c8;
            } while ((int)(uint)uVar4 < iVar6);
          }
        }
      }
      else {
        local_1d4 = 0;
        local_f8 = (char *)0x0;
        lVar8 = -1;
        do {
          lVar9 = lVar8;
          lVar8 = lVar9 + 1;
        } while (local_d8[lVar8] != 0);
        uVar13 = (int)lVar9 + 2;
        local_e8 = (undefined4)lVar8;
        if ((0x80 < uVar13) && (uVar13 != 0)) {
          local_f8 = (char *)FMemory::Realloc(0,(longlong)(int)uVar13,0);
        }
        local_1e8 = CONCAT71(local_1e8._1_7_,0x3f);
        local_f0 = local_178;
        if (local_f8 != (char *)0x0) {
          local_f0 = local_f8;
        }
        FGenericPlatformString::Convert<wchar_t,char>(local_f0,uVar13,local_d8,uVar13);
        iVar6 = FUN_14004cd80(local_f0,&local_1d4);
        if (local_f8 != (char *)0x0) {
          FMemory::Free();
        }
        if (iVar6 == 0) {
          local_1a8 = 0x10024;
          local_1a4 = 0;
          uStack_19c = 0;
          local_194 = 0;
          uStack_18c = 0;
          iVar6 = FUN_14004cc00(local_1d4,&local_1a8);
          cVar2 = local_1d8;
          if ((iVar6 == 0) && ((local_1a4 & 1) != 0)) {
            *(uint *)(param_1 + 0x17c34) = local_1d4;
            *(int *)(param_1 + 0x17c30) = iVar5;
          }
        }
        else {
          cVar2 = local_1d8;
          if ((iVar6 != -1) && (iVar6 != -6)) {
            FUN_14004cb40(iVar6,local_78);
            cVar2 = local_1d8;
          }
        }
      }
    }
    if (local_1d0 != (longlong *)0x0) {
      (**(code **)(*local_1d0 + 0x10))();
    }
    local_1c8 = iVar5 + 1;
    iVar5 = local_1c8;
  } while( true );
}



// FUNCTION 141a43f70 FUN_141a43f70 body=349 status=ok
// SIG undefined FUN_141a43f70(void)

void FUN_141a43f70(int param_1,longlong *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 local_res8 [8];
  
  if (DAT_146ab6358 != (longlong *)0x0) {
    (**(code **)(*DAT_146ab6358 + 0x6f0))();
  }
  if (param_1 == -0x7785fffb) {
    if (DAT_1469fc508 != '\0') {
      _guard_xfg_dispatch_icall_nop(local_res8);
    }
    DAT_1468e222a = 1;
    if (param_2 != (longlong *)0x0) {
      iVar1 = (**(code **)(*param_2 + 0x138))(param_2);
      pwVar2 = L"?";
      if (iVar1 < -0x7785fff8) {
        if (iVar1 == -0x7785fff9) {
          pwVar2 = L"RESET";
        }
        else if (iVar1 == -0x7785ffff) {
          pwVar2 = L"INVALID_CALL";
        }
        else if (iVar1 == -0x7785fffb) {
          pwVar2 = L"REMOVED";
        }
        else if (iVar1 == -0x7785fffa) {
          pwVar2 = L"HUNG";
        }
      }
      else if (iVar1 == -0x7785ffe0) {
        pwVar2 = L"INTERNAL_ERROR";
      }
      else if (iVar1 == 0) {
        pwVar2 = L"S_OK";
      }
      LowLevelFatalErrorHandler
                ("Unknown",200,
                 L"Unreal Engine is exiting due to D3D device being lost. (Error: 0x%X - \'%s\')",
                 iVar1,pwVar2);
      FDebug::AssertFailed
                (&DAT_144d921c7,"Unknown",200,
                 L"Unreal Engine is exiting due to D3D device being lost. (Error: 0x%X - \'%s\')",
                 iVar1,pwVar2);
      return;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xcc,
               L"Unreal Engine is exiting due to D3D device being lost. D3D device was not available to assertain DXGI cause."
              );
    FDebug::AssertFailed
              (&DAT_144d92222,"Unknown",0xcc,
               L"Unreal Engine is exiting due to D3D device being lost. D3D device was not available to assertain DXGI cause."
              );
  }
  return;
}



// FUNCTION 141a440d0 FUN_141a440d0 body=101 status=ok
// SIG undefined FUN_141a440d0(void)

undefined8 FUN_141a440d0(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return 2;
  case 2:
    return 3;
  case 3:
    return 4;
  case 4:
    return 5;
  case 5:
    return 6;
  case 6:
    return 7;
  case 7:
    return 8;
  case 8:
    return 9;
  case 9:
    return 10;
  case 10:
    return 0xe;
  case 0xb:
    return 0xf;
  default:
    return 1;
  }
}



// FUNCTION 141a44170 FUN_141a44170 body=75 status=ok
// SIG undefined FUN_141a44170(void)

undefined8 FUN_141a44170(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 2;
  case 1:
    return 4;
  case 2:
    return 5;
  case 3:
    return 7;
  case 4:
    return 3;
  case 5:
    return 6;
  case 6:
    return 1;
  default:
    return 8;
  }
}



// FUNCTION 141a441e0 FUN_141a441e0 body=77 status=ok
// SIG undefined FUN_141a441e0(void)

undefined8 FUN_141a441e0(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return 2;
  case 2:
    return 3;
  case 3:
    return 4;
  case 4:
    return 5;
  case 5:
    return 6;
  case 6:
    return 7;
  case 7:
    return 8;
  default:
    return 1;
  }
}



// FUNCTION 141a44250 FUN_141a44250 body=584 status=ok
// SIG undefined FUN_141a44250(void)

void FUN_141a44250(void)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  
  uVar10 = (ulonglong)DAT_1464aaa90;
  piVar9 = &DAT_1469fc758;
  iVar12 = 0;
  do {
    iVar5 = *piVar9 + -1;
    if (-1 < iVar5) {
      lVar8 = (longlong)iVar5 << 4;
      do {
        if (9 < iVar12) break;
        if (0x1e < (uint)((int)uVar10 - *(int *)(*(longlong *)(piVar9 + -2) + 0xc + lVar8))) {
          iVar12 = iVar12 + 1;
          plVar7 = *(longlong **)(*(longlong *)(piVar9 + -2) + (longlong)iVar5 * 0x10);
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))();
          }
          iVar2 = *piVar9;
          iVar4 = (iVar2 - iVar5) + -1;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(piVar9 + -2) + (longlong)iVar5 * 0x10),
                       (void *)((longlong)(iVar2 - iVar4) * 0x10 + *(longlong *)(piVar9 + -2)),
                       (longlong)iVar4 << 4);
            iVar2 = *piVar9;
          }
          *piVar9 = iVar2 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(piVar9 + -2);
          uVar10 = (ulonglong)DAT_1464aaa90;
        }
        lVar8 = lVar8 + -0x10;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
    piVar9 = piVar9 + 4;
    if (0x1469fc867 < (longlong)piVar9) {
      lVar13 = 0x11;
      lVar8 = (longlong)((int)uVar10 + (int)(uVar10 / 3) * -3);
      puVar11 = &DAT_1469fc860 + lVar8 * 0x22;
      do {
        iVar12 = *(int *)(puVar11 + 1);
        if (iVar12 != 0) {
          iVar5 = *(int *)(puVar11 + lVar8 * -0x22 + -0x21);
          if (*(int *)((longlong)puVar11 + lVar8 * -0x110 + -0x104) < iVar5 + iVar12) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(puVar11 + lVar8 * -0x22 + -0x22);
            iVar5 = *(int *)(puVar11 + lVar8 * -0x22 + -0x21);
          }
          plVar7 = (longlong *)*puVar11;
          plVar6 = (longlong *)((longlong)iVar5 * 0x10 + puVar11[lVar8 * -0x22 + -0x22]);
          iVar5 = iVar12;
          do {
            plVar3 = (longlong *)*plVar7;
            *plVar6 = (longlong)plVar3;
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 8))();
            }
            *(int *)(plVar6 + 1) = (int)plVar7[1];
            puVar1 = (undefined4 *)((longlong)plVar7 + 0xc);
            plVar7 = plVar7 + 2;
            *(undefined4 *)((longlong)plVar6 + 0xc) = *puVar1;
            plVar6 = plVar6 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          *(int *)(puVar11 + lVar8 * -0x22 + -0x21) =
               *(int *)(puVar11 + lVar8 * -0x22 + -0x21) + iVar12;
        }
        iVar12 = *(int *)((longlong)puVar11 + 0xc);
        plVar7 = (longlong *)*puVar11;
        iVar5 = *(int *)(puVar11 + 1);
        if (iVar12 < 0) {
          if (iVar5 != 0) {
            do {
              if ((longlong *)*plVar7 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar7 + 0x10))();
              }
              plVar7 = plVar7 + 2;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            iVar12 = *(int *)((longlong)puVar11 + 0xc);
          }
          *(undefined4 *)(puVar11 + 1) = 0;
          if (iVar12 != 0) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(puVar11,0);
          }
        }
        else {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            if ((longlong *)*plVar7 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar7 + 0x10))();
            }
            plVar7 = plVar7 + 2;
          }
          *(undefined4 *)(puVar11 + 1) = 0;
        }
        puVar11 = puVar11 + 2;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      return;
    }
  } while( true );
}



// FUNCTION 141a444a0 FUN_141a444a0 body=52 status=ok
// SIG undefined FUN_141a444a0(void)

void FUN_141a444a0(longlong param_1)

{
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 141a444e0 FUN_141a444e0 body=753 status=ok
// SIG undefined FUN_141a444e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a444e0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,byte param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  undefined8 local_320;
  undefined2 *local_318;
  undefined2 *local_310;
  undefined4 local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  uint local_2e8;
  undefined2 *local_2e0;
  undefined2 *local_2d8;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined2 *local_2a8;
  int local_2a0;
  longlong local_298 [2];
  undefined1 local_288 [256];
  longlong local_188;
  undefined8 local_180;
  undefined1 local_168 [256];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  local_2c8 = param_4;
  local_2c0 = param_3;
  local_2b8 = param_2;
  GetD3D11ErrorString(&local_2a8,param_1,0);
  local_2b0 = FUN_141a2fdb0(param_8);
  FUN_141a43f70(param_1,param_11);
  if (param_1 == -0x7ff8fff2) {
    FUN_1416a8180(1);
  }
  puVar2 = (undefined8 *)GetD3D11TextureFlagString(local_298,param_10);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  puVar3 = &DAT_143f3eda8;
  if (local_2a0 != 0) {
    puVar3 = local_2a8;
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,local_2c0);
  uVar1 = local_60;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_288,local_2b8);
  local_2e8 = param_9;
  local_2f0 = CONCAT44(local_2f0._4_4_,(uint)param_8);
  local_2f8 = local_2b0;
  local_300 = param_7;
  local_308 = param_6;
  local_310 = (undefined2 *)CONCAT44(local_310._4_4_,param_5);
  local_320 = CONCAT44(local_320._4_4_,local_2c8);
  local_328 = uVar1;
  local_318 = puVar3;
  local_2e0 = puVar4;
  LowLevelFatalErrorHandler
            ("Unknown",0x139,
             L"%s failed \n at %s:%u \n with error %s, \n Size=%ix%ix%i Format=%s(0x%08X), NumMips=%i, Flags=%s"
             ,local_180);
  if (local_188 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_298[0] != 0) {
    FMemory::Free();
  }
  puVar2 = (undefined8 *)GetD3D11TextureFlagString(local_298,param_10);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  puVar3 = &DAT_143f3eda8;
  if (local_2a0 != 0) {
    puVar3 = local_2a8;
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_288,local_2c0);
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,local_2b8);
  local_2e0 = (undefined2 *)CONCAT44(local_2e0._4_4_,param_9);
  local_2f0 = local_2b0;
  local_2f8 = CONCAT44(local_2f8._4_4_,param_7);
  local_300 = param_6;
  local_308 = param_5;
  local_318 = (undefined2 *)CONCAT44(local_318._4_4_,local_2c8);
  local_320 = local_180;
  local_328 = local_60;
  local_310 = puVar3;
  local_2e8 = (uint)param_8;
  local_2d8 = puVar4;
  FDebug::AssertFailed
            (&DAT_144d922f3,"Unknown",0x139,
             L"%s failed \n at %s:%u \n with error %s, \n Size=%ix%ix%i Format=%s(0x%08X), NumMips=%i, Flags=%s"
            );
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_188 != 0) {
    FMemory::Free();
  }
  if (local_298[0] != 0) {
    FMemory::Free();
  }
  if (local_2a8 != (undefined2 *)0x0) {
    FMemory::Free(local_2a8);
  }
  return;
}



// FUNCTION 141a447e0 FUN_141a447e0 body=428 status=ok
// SIG undefined FUN_141a447e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a447e0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined2 *local_2a8;
  undefined2 *local_2a0;
  undefined2 *local_298;
  int local_290;
  undefined1 local_288 [256];
  longlong local_188;
  undefined8 local_180;
  undefined1 local_168 [256];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  GetD3D11ErrorString(&local_298,param_1,param_5);
  FUN_141a43f70(param_1,param_5);
  if (param_1 == -0x7ff8fff2) {
    FUN_1416a8180(1);
  }
  puVar2 = &DAT_143f3eda8;
  if (local_290 != 0) {
    puVar2 = local_298;
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,param_3);
  uVar1 = local_60;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_288,param_2);
  local_2b0 = CONCAT44(local_2b0._4_4_,param_4);
  local_2b8 = uVar1;
  local_2a8 = puVar2;
  LowLevelFatalErrorHandler("Unknown",0xfc,L"%s failed \n at %s:%u \n with error %s",local_180);
  if (local_188 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  puVar2 = &DAT_143f3eda8;
  if (local_290 != 0) {
    puVar2 = local_298;
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_288,param_3);
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,param_2);
  local_2a8 = (undefined2 *)CONCAT44(local_2a8._4_4_,param_4);
  local_2b0 = local_180;
  local_2b8 = local_60;
  local_2a0 = puVar2;
  FDebug::AssertFailed(&DAT_144d92227,"Unknown",0xfc,L"%s failed \n at %s:%u \n with error %s");
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_188 != 0) {
    FMemory::Free();
  }
  if (local_298 != (undefined2 *)0x0) {
    FMemory::Free(local_298);
  }
  return;
}



// FUNCTION 141a44990 FUN_141a44990 body=392 status=ok
// SIG undefined FUN_141a44990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a44990(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  int local_res8 [2];
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  ulonglong in_stack_ffffffffffffff88;
  LARGE_INTEGER local_68 [7];
  
  local_res8[0] = 0;
  while( true ) {
    lVar1 = *(longlong *)(param_1 + 200);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000;
    iVar5 = (**(code **)(**(longlong **)(lVar1 + 0x200) + 0xe8))
                      (*(longlong **)(lVar1 + 0x200),uVar2,local_res8,4,in_stack_ffffffffffffff88);
    if (iVar5 == 1) {
      QueryPerformanceCounter(&local_res10);
      uVar4 = local_res10.s.LowPart;
      QueryPerformanceCounter(&local_res18);
      dVar3 = (double)local_res18.QuadPart * DAT_1468b02f8;
      do {
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000;
        iVar5 = (**(code **)(**(longlong **)(lVar1 + 0x200) + 0xe8))
                          (*(longlong **)(lVar1 + 0x200),uVar2,local_res8,4,
                           in_stack_ffffffffffffff88);
        QueryPerformanceCounter(&local_res20);
        if (0.5 < (double)local_res20.QuadPart * DAT_1468b02f8 - dVar3) {
          return;
        }
      } while (iVar5 == 1);
      if (*(char *)(lVar1 + 0x3ff8) == '\0') {
        QueryPerformanceCounter(local_68);
        DAT_146ac3acc = DAT_146ac3acc + (local_68[0].s.LowPart - uVar4);
        _DAT_146ac3aec = _DAT_146ac3aec + 1;
      }
    }
    if (iVar5 != 0) break;
    if (local_res8[0] != 0) {
      return;
    }
  }
  if (-1 < iVar5) {
    return;
  }
  FUN_141a447e0(iVar5,"Result",
                "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Query.cpp"
                ,0x98,*(undefined8 *)(lVar1 + 0x210));
  return;
}



// FUNCTION 141a44b30 operator<FD3D12Resource_*,CResourceState>_TTuple<FD3D12Resource_*,CResourceState> body=179 status=ok
// SIG undefined operator<FD3D12Resource_*,CResourceState>_TTuple<FD3D12Resource_*,CResourceState>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
TKeyInitializer<FD3D12Resource_*_const_&>::
operator<FD3D12Resource_*,CResourceState>_TTuple<FD3D12Resource_*,CResourceState>
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = 0;
  local_30 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_28 = 0;
  *param_2 = *(undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[4] = 0;
  ::_guard_xfg_dispatch_icall_nop(param_2 + 2,&local_40,0x10);
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = 0;
  if (param_2[4] != 0) {
    FMemory::Free();
    uVar3 = local_30;
    uVar2 = (undefined4)local_28;
    uVar1 = local_28._4_4_;
  }
  param_2[4] = uVar3;
  *(undefined4 *)(param_2 + 5) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar1;
  return param_2;
}



// FUNCTION 141a44bf0 FUN_141a44bf0 body=496 status=ok
// SIG undefined FUN_141a44bf0(void)

undefined8 FUN_141a44bf0(longlong *param_1,uint param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar8;
  undefined8 local_res8;
  ulonglong in_stack_ffffffffffffffb8;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_3;
  uVar8 = (ulonglong)param_2;
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  }
  if (*(uint *)(param_1 + 2) < param_2) {
    uVar4 = 0;
    if ((param_3 != 0) && ((int)(0x10000 % uVar7) == 0)) {
      param_3 = 0;
    }
    local_res8 = 0;
    iVar3 = FUN_141a6e3f0(*(undefined8 *)(*param_1 + 0x10),*(undefined4 *)((longlong)param_1 + 0x14)
                          ,param_3 + param_2,&local_res8,
                          in_stack_ffffffffffffffb8 & 0xffffffff00000000);
    if (iVar3 < 0) {
      local_38 = 0;
      local_30 = 0;
      FUN_141a94000(iVar3,
                    "Adapter->CreateBuffer(PagePool.GetHeapType(), Size + Alignment, &Resource)",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                    ,0x9db,0,&local_38);
    }
    AK::MemoryMgr::StartProfileThreadUsage((long)local_res8);
    if (*(int *)((longlong)param_1 + 0x14) == 2) {
      uVar4 = FUN_141a57830(local_res8);
    }
    FUN_141a50de0(param_4,local_res8,param_3 + param_2,0);
    goto LAB_141a44dbf;
  }
  lVar5 = param_1[6];
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar5 + 0x10);
  }
  uVar6 = (int)((((ulonglong)uVar6 - 1) + uVar7) / uVar7) * param_3;
  if (lVar5 == 0) {
LAB_141a44d37:
    lVar5 = FUN_141a5f160(param_1 + 1);
    param_1[6] = lVar5;
    uVar6 = (int)((((ulonglong)*(uint *)(lVar5 + 0x10) - 1) + uVar7) / uVar7) * param_3;
  }
  else if (*(uint *)(param_1 + 2) < uVar6 + param_2) {
    FUN_141a5f7d0(param_1 + 1);
    goto LAB_141a44d37;
  }
  uVar7 = (ulonglong)uVar6;
  lVar1 = *(longlong *)(lVar5 + 0x18);
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0xd0);
  *(undefined4 *)(param_4 + 8) = 3;
  FStringTable::SetOwnerAsset(param_4);
  *(ulonglong *)(param_4 + 0x48) = uVar7;
  *(ulonglong *)(param_4 + 0x60) = uVar8;
  *(ulonglong *)(param_4 + 0x68) = uVar8;
  *(ulonglong *)(param_4 + 0x70) = uVar8;
  if (lVar1 != 0) {
    *(ulonglong *)(param_4 + 0x38) = lVar1 + uVar7;
  }
  *(ulonglong *)(param_4 + 0x40) = uVar7 + lVar5;
  *(uint *)(param_1[6] + 0x10) = uVar6 + param_2;
  uVar4 = *(undefined8 *)(param_4 + 0x38);
LAB_141a44dbf:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  return uVar4;
}



// FUNCTION 141a44de0 FUN_141a44de0 body=617 status=ok
// SIG undefined FUN_141a44de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141a44de0(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5,uint param_6,uint param_7,longlong param_8,char param_9)

{
  longlong lVar1;
  void *_Dst;
  void *_Src;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong _Size;
  undefined8 *puVar4;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined8 local_188;
  longlong local_178 [16];
  undefined **local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined1 local_e0 [128];
  uint local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  _Size = (ulonglong)param_6;
  local_188 = param_3;
  lVar1 = operator_new(0x1e0);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    local_1b8 = param_7;
    lVar1 = FUN_141a4c5d0(lVar1,param_1[0x1aa],param_5,_Size);
  }
  *(undefined4 *)(lVar1 + 0xc0) = param_4;
  if (param_9 == '\0') {
    local_1a0 = lVar1 + 0x40;
    local_1b0 = param_8;
    local_1b8 = param_7;
    local_1a8 = param_4;
    local_198 = local_1a0;
    (**(code **)(*param_1 + 0x10))(param_1,param_1[0x1aa],local_188,_Size);
  }
  plVar3 = *(longlong **)(param_8 + 8);
  if (plVar3 != (longlong *)0x0) {
    if (((param_7 & 6) == 0) && (*(int *)(lVar1 + 0x48) != 0)) {
      FUN_141a67840(local_178,*(undefined8 *)(lVar1 + 0x38));
      _Dst = (void *)FUN_141a44bf0(local_178[0] + 0x850,_Size,4,local_178);
      _Src = (void *)(**(code **)**(undefined8 **)(param_8 + 8))();
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
      if (param_2 == 0) {
        local_f8 = &PTR_FUN_144da72b0;
        local_f0 = 0;
        local_e8 = lVar1;
        FUN_141a67840(local_e0,local_178[0]);
        local_60 = param_6;
        FUN_141a7d3c0(local_e0,local_178);
        FUN_141a54c50(&local_f8);
        thunk_FUN_141a7bb70(local_e0);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar2 = puVar4 + 0x14;
        if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0xa8);
          puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar2 = puVar4 + 0x14;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar2;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar4;
        *(undefined8 **)(param_2 + 8) = puVar4 + 1;
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_144da72b0;
        puVar4[2] = lVar1;
        FUN_141a67840(puVar4 + 3,local_178[0]);
        *(uint *)(puVar4 + 0x13) = param_6;
        FUN_141a7d3c0(puVar4 + 3,local_178);
      }
      thunk_FUN_141a7bb70(local_178);
      plVar3 = *(longlong **)(param_8 + 8);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return lVar1;
}



// FUNCTION 141a45050 FUN_141a45050 body=617 status=ok
// SIG undefined FUN_141a45050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141a45050(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5,uint param_6,uint param_7,longlong param_8,char param_9)

{
  longlong lVar1;
  void *_Dst;
  void *_Src;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong _Size;
  undefined8 *puVar4;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined8 local_188;
  longlong local_178 [16];
  undefined **local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined1 local_e0 [128];
  uint local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  _Size = (ulonglong)param_6;
  local_188 = param_3;
  lVar1 = operator_new(0x1e0);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    local_1b8 = param_7;
    lVar1 = FUN_141a4c8c0(lVar1,param_1[0x1aa],param_5,_Size);
  }
  *(undefined4 *)(lVar1 + 0xc0) = param_4;
  if (param_9 == '\0') {
    local_1a0 = lVar1 + 0x40;
    local_1b0 = param_8;
    local_1b8 = param_7;
    local_1a8 = param_4;
    local_198 = local_1a0;
    (**(code **)(*param_1 + 0x10))(param_1,param_1[0x1aa],local_188,_Size);
  }
  plVar3 = *(longlong **)(param_8 + 8);
  if (plVar3 != (longlong *)0x0) {
    if (((param_7 & 6) == 0) && (*(int *)(lVar1 + 0x48) != 0)) {
      FUN_141a67840(local_178,*(undefined8 *)(lVar1 + 0x38));
      _Dst = (void *)FUN_141a44bf0(local_178[0] + 0x850,_Size,4,local_178);
      _Src = (void *)(**(code **)**(undefined8 **)(param_8 + 8))();
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
      if (param_2 == 0) {
        local_f8 = &PTR_FUN_144da72b0;
        local_f0 = 0;
        local_e8 = lVar1;
        FUN_141a67840(local_e0,local_178[0]);
        local_60 = param_6;
        FUN_141a7d3c0(local_e0,local_178);
        FUN_141a54c50(&local_f8);
        thunk_FUN_141a7bb70(local_e0);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar2 = puVar4 + 0x14;
        if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0xa8);
          puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar2 = puVar4 + 0x14;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar2;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar4;
        *(undefined8 **)(param_2 + 8) = puVar4 + 1;
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_144da72b0;
        puVar4[2] = lVar1;
        FUN_141a67840(puVar4 + 3,local_178[0]);
        *(uint *)(puVar4 + 0x13) = param_6;
        FUN_141a7d3c0(puVar4 + 3,local_178);
      }
      thunk_FUN_141a7bb70(local_178);
      plVar3 = *(longlong **)(param_8 + 8);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return lVar1;
}



// FUNCTION 141a452c0 FUN_141a452c0 body=617 status=ok
// SIG undefined FUN_141a452c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141a452c0(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5,uint param_6,uint param_7,longlong param_8,char param_9)

{
  longlong lVar1;
  void *_Dst;
  void *_Src;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong _Size;
  undefined8 *puVar4;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined8 local_188;
  longlong local_178 [16];
  undefined **local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined1 local_e0 [128];
  uint local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  _Size = (ulonglong)param_6;
  local_188 = param_3;
  lVar1 = operator_new(0x1e0);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    local_1b8 = param_7;
    lVar1 = FUN_141a4cad0(lVar1,param_1[0x1aa],param_5,_Size);
  }
  *(undefined4 *)(lVar1 + 0xb8) = param_4;
  if (param_9 == '\0') {
    local_1a0 = lVar1 + 0x38;
    local_1b0 = param_8;
    local_1b8 = param_7;
    local_1a8 = param_4;
    local_198 = local_1a0;
    (**(code **)(*param_1 + 0x10))(param_1,param_1[0x1aa],local_188,_Size);
  }
  plVar3 = *(longlong **)(param_8 + 8);
  if (plVar3 != (longlong *)0x0) {
    if (((param_7 & 6) == 0) && (*(int *)(lVar1 + 0x40) != 0)) {
      FUN_141a67840(local_178,*(undefined8 *)(lVar1 + 0x30));
      _Dst = (void *)FUN_141a44bf0(local_178[0] + 0x850,_Size,4,local_178);
      _Src = (void *)(**(code **)**(undefined8 **)(param_8 + 8))();
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
      if (param_2 == 0) {
        local_f8 = &PTR_FUN_144da72a0;
        local_f0 = 0;
        local_e8 = lVar1;
        FUN_141a67840(local_e0,local_178[0]);
        local_60 = param_6;
        FUN_141a7d3c0(local_e0,local_178);
        FUN_141a54d80(&local_f8);
        thunk_FUN_141a7bb70(local_e0);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar2 = puVar4 + 0x14;
        if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0xa8);
          puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar2 = puVar4 + 0x14;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar2;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar4;
        *(undefined8 **)(param_2 + 8) = puVar4 + 1;
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_144da72a0;
        puVar4[2] = lVar1;
        FUN_141a67840(puVar4 + 3,local_178[0]);
        *(uint *)(puVar4 + 0x13) = param_6;
        FUN_141a7d3c0(puVar4 + 3,local_178);
      }
      thunk_FUN_141a7bb70(local_178);
      plVar3 = *(longlong **)(param_8 + 8);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return lVar1;
}



// FUNCTION 141a45530 FUN_141a45530 body=167 status=ok
// SIG undefined FUN_141a45530(void)

void FUN_141a45530(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  BOOL BVar3;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) =
         *(undefined8 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x738) + 0x30);
    iVar1 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = lVar2;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_141a54120(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000141a455d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 141a455e0 FUN_141a455e0 body=689 status=ok
// SIG undefined FUN_141a455e0(void)

uint * FUN_141a455e0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  undefined4 uVar13;
  bool bVar14;
  uint local_res8 [2];
  
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar1 = *(int *)((longlong)(int)uVar10 * 0xb8 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xb8 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar12 = (uint *)((longlong)plVar9 +
                    (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar12 = *puVar12 | 1 << ((byte)uVar10 & 0x1f);
  puVar12 = (uint *)((longlong)(int)uVar10 * 0xb8 + *param_1);
  uVar4 = param_3[1];
  *(undefined8 *)puVar12 = *param_3;
  *(undefined8 *)(puVar12 + 2) = uVar4;
  uVar4 = param_3[3];
  *(undefined8 *)(puVar12 + 4) = param_3[2];
  *(undefined8 *)(puVar12 + 6) = uVar4;
  uVar4 = param_3[5];
  *(undefined8 *)(puVar12 + 8) = param_3[4];
  *(undefined8 *)(puVar12 + 10) = uVar4;
  uVar4 = param_3[7];
  *(undefined8 *)(puVar12 + 0xc) = param_3[6];
  *(undefined8 *)(puVar12 + 0xe) = uVar4;
  uVar4 = param_3[9];
  *(undefined8 *)(puVar12 + 0x10) = param_3[8];
  *(undefined8 *)(puVar12 + 0x12) = uVar4;
  uVar4 = param_3[0xb];
  *(undefined8 *)(puVar12 + 0x14) = param_3[10];
  *(undefined8 *)(puVar12 + 0x16) = uVar4;
  uVar4 = param_3[0xd];
  *(undefined8 *)(puVar12 + 0x18) = param_3[0xc];
  *(undefined8 *)(puVar12 + 0x1a) = uVar4;
  uVar4 = param_3[0xf];
  *(undefined8 *)(puVar12 + 0x1c) = param_3[0xe];
  *(undefined8 *)(puVar12 + 0x1e) = uVar4;
  uVar4 = param_3[0x11];
  *(undefined8 *)(puVar12 + 0x20) = param_3[0x10];
  *(undefined8 *)(puVar12 + 0x22) = uVar4;
  uVar10 = *(uint *)((longlong)param_3 + 0x94);
  uVar7 = *(uint *)(param_3 + 0x13);
  uVar3 = *(uint *)((longlong)param_3 + 0x9c);
  puVar12[0x24] = *(uint *)(param_3 + 0x12);
  puVar12[0x25] = uVar10;
  puVar12[0x26] = uVar7;
  puVar12[0x27] = uVar3;
  uVar10 = *(uint *)((longlong)param_3 + 0xa4);
  uVar7 = *(uint *)(param_3 + 0x15);
  uVar3 = *(uint *)((longlong)param_3 + 0xac);
  puVar12[0x28] = *(uint *)(param_3 + 0x14);
  puVar12[0x29] = uVar10;
  puVar12[0x2a] = uVar7;
  puVar12[0x2b] = uVar3;
  puVar12[0x2c] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_141a54eb0(param_1,local_res8,puVar12);
    uVar10 = local_res8[0];
    lVar11 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar11 * 0xb8 + *param_1),puVar12,0xb0);
      uVar7 = *param_2;
      bVar2 = (byte)uVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0xb8 + *param_1) = uVar7;
      }
      puVar8 = (undefined4 *)((longlong)(int)uVar7 * 0xb8 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar8[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar7;
      plVar9 = (longlong *)param_1[4];
      *param_2 = uVar10;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar12 = (uint *)((longlong)plVar9 +
                        (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar12 = *puVar12 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_141a4586b;
    }
  }
  cVar5 = TSet<FD3D12UniqueDescriptorTable<16>,FD3D12UniqueDescriptorTableKeyFuncs<FD3D12UniqueDescriptorTable<16>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    uVar10 = *param_2;
    uVar7 = FUN_141a74790(puVar12 + 1,(ulonglong)*puVar12 * 2);
    uVar7 = (int)param_1[9] - 1U & uVar7;
    puVar12[0x2d] = uVar7;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    puVar12[0x2c] =
         *(uint *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(uint *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         uVar10;
  }
LAB_141a4586b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141a458a0 FUN_141a458a0 body=510 status=ok
// SIG undefined FUN_141a458a0(void)

int * FUN_141a458a0(ulonglong param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  int local_38 [2];
  longlong *local_30;
  
  FUN_141a4f6c0(param_1,local_38);
  bVar8 = false;
  *param_2 = local_38[0];
  lVar3 = *(longlong *)*param_3;
  *local_30 = lVar3;
  local_30[1] = 0;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar5 = *(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1ac);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1d0);
      if (*(longlong *)(param_1 + 0x1d0) == 0) {
        lVar2 = param_1 + 0x1b0;
      }
      iVar4 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) &
                               (longlong)*(int *)(param_1 + 0x1d8) - 1U) * 4);
      if (iVar4 != -1) {
        uVar6 = *(ulonglong *)(param_1 + 0x180);
        do {
          if (*(longlong *)
               (((longlong)(int)-(uint)(uVar6 == 0) & param_1 | uVar6) + (longlong)iVar4 * 0x18) ==
              lVar3) goto LAB_141a459a4;
          iVar4 = *(int *)(((longlong)(int)-(uint)(uVar6 == 0) & param_1 | uVar6) + 0x10 +
                          (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_141a459a4:
    bVar8 = iVar4 != -1;
    if (bVar8) {
      uVar6 = *(ulonglong *)(param_1 + 0x180);
      if (*(ulonglong *)(param_1 + 0x180) == 0) {
        uVar6 = param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)(uVar6 + (longlong)iVar4 * 0x18),local_30,0x10);
      FUN_1407ee970(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_141a45a75;
    }
  }
  cVar1 = FUN_141a53130(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar7 = (int)((ulonglong)*local_30 >> 0x20) * 0x17 + (int)*local_30 &
            *(int *)(param_1 + 0x1d8) - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar7;
    lVar3 = *(longlong *)(param_1 + 0x1d0);
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      lVar3 = param_1 + 0x1b0;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          (lVar3 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & (longlong)(int)uVar7) * 4);
    lVar3 = *(longlong *)(param_1 + 0x1d0);
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      lVar3 = param_1 + 0x1b0;
    }
    *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_141a45a75:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}


