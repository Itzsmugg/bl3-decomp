// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1411986c0 FUN_1411986c0 body=6405 status=ok
// SIG undefined FUN_1411986c0(void)

void FUN_1411986c0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong lVar2;
  void *_Src;
  wchar_t *pwVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  wchar_t *pwVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong in_stack_fffffffffffffbe8;
  uint uStack_3ec;
  longlong *local_3e8;
  undefined8 local_3e0;
  longlong local_3d8;
  undefined8 local_3d0;
  longlong local_3c8;
  undefined8 local_3c0;
  longlong *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined1 local_310 [24];
  undefined4 local_2f8;
  undefined8 local_2f4;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  void *local_2d0;
  int local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  code *local_2b8;
  longlong lStack_2b0;
  code *local_2a8;
  longlong lStack_2a0;
  code *local_298;
  longlong lStack_290;
  code *local_288;
  longlong lStack_280;
  code *local_278;
  longlong lStack_270;
  code *local_268;
  longlong lStack_260;
  code *local_258;
  longlong lStack_250;
  code *local_248;
  longlong lStack_240;
  code *local_238;
  longlong lStack_230;
  code *local_228;
  longlong lStack_220;
  code *local_218;
  longlong lStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
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
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  plVar13 = *(longlong **)(param_1 + 0x748);
  if (plVar13 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar13 + 0x2a0))(plVar13,0);
    if (cVar4 != '\0') {
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x288))();
  }
  lVar6 = FUN_140f9aee0(param_1);
  if (*(longlong *)(param_1 + 0x778) == 0) goto LAB_141199d2a;
  uVar17 = *(ulonglong *)(param_1 + 0x600);
  FUN_14118e1d0(*(longlong *)(param_1 + 0x778),param_2,*(undefined8 *)(param_1 + 0x758),param_1,
                uVar17);
  pwVar15 = (wchar_t *)0x0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x170) != 0) {
    local_3c8 = 0;
    local_3c0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c8,0);
    FGenericPlatformString::Memcpy(local_3c8,L"textField",0x14);
    uVar7 = FUN_14119d780(param_1,local_1e8,param_2);
    FUN_142f100e0(*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x170),&local_3c8,uVar7);
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_1e0 + 1;
      lVar10 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar1 = (int *)((longlong)local_1e0 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_1e0 + 8))(local_1e0,1);
        }
      }
    }
    if (local_3c8 != 0) {
      FMemory::Free();
    }
  }
  if ((((*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x178) == 0) ||
       (*(longlong *)(param_1 + 0x758) == 0)) || (*(longlong *)(param_1 + 0x760) == 0)) ||
     ((lVar6 == 0 || (*(longlong *)(param_1 + 0x768) == 0)))) goto LAB_141199d2a;
  switch(param_2) {
  case 1:
    uVar7 = GetTransientPackage();
    FUN_1417846f0(uVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar8 = FUN_141323fb0();
    uVar7 = FUN_1417985e0(uVar8,uVar7,0,0,uVar17 & 0xffffffff00000000,0,
                          in_stack_fffffffffffffbe8 & 0xffffffffffffff00,0,0);
    *(undefined8 *)(param_1 + 0x748) = uVar7;
    FUN_1411b7440(param_1,uVar7);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x280))
              (*(longlong **)(param_1 + 0x748),param_1,*(longlong *)(param_1 + 0x768) + 0x30,
               *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178),
               *(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x760),lVar6);
    lStack_2b0 = (ulonglong)uStack_3ec << 0x20;
    local_2b8 = FUN_1411a3da0;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnContentPanelSelectionChanged",L"::");
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar15 = pwVar3;
    }
    FName::FName(&local_368,pwVar15 + 2,1);
    FUN_1407260e0(*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x178) + 0x180,param_1,&local_2b8,
                  local_368);
    puVar14 = local_98;
    goto LAB_1411989d7;
  case 2:
    uVar7 = GetTransientPackage();
    FUN_1417846f0(uVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_398 = 0;
    uVar8 = FUN_141346010();
    uVar7 = FUN_1417985e0(uVar8,uVar7,0,0,uVar17 & 0xffffffff00000000,0,
                          in_stack_fffffffffffffbe8 & 0xffffffffffffff00,0,0);
    *(undefined8 *)(param_1 + 0x748) = uVar7;
    FUN_1411b7440(param_1,uVar7);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x280))
              (*(longlong **)(param_1 + 0x748),param_1,*(longlong *)(param_1 + 0x768) + 0x70,
               *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178),
               *(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x760),lVar6);
    lStack_290 = (ulonglong)uStack_3ec << 0x20;
    local_298 = FUN_1411a3da0;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnContentPanelSelectionChanged",L"::");
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar15 = pwVar3;
    }
    FName::FName(&local_358,pwVar15 + 2,1);
    FUN_1407260e0(*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x178) + 0x180,param_1,&local_298,
                  local_358);
    puVar14 = local_f8;
    goto LAB_1411989d7;
  case 3:
    uVar7 = GetTransientPackage();
    uVar7 = FUN_141187b50(uVar7);
    *(undefined8 *)(param_1 + 0x748) = uVar7;
    FUN_1411b7440(param_1,uVar7);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x280))
              (*(longlong **)(param_1 + 0x748),param_1,*(longlong *)(param_1 + 0x768) + 0x80,
               *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178),
               *(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x760),lVar6);
    *(undefined4 *)(*(longlong *)(param_1 + 0x748) + 0xb8) = param_2;
    lStack_280 = (ulonglong)uStack_3ec << 0x20;
    local_288 = FUN_1411a3da0;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnContentPanelSelectionChanged",L"::");
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar15 = pwVar3;
    }
    FName::FName(&local_350,pwVar15 + 2,1);
    FUN_1407260e0(*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x178) + 0x180,param_1,&local_288,
                  local_350);
    uVar7 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (local_e8,*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178));
    FUN_142ed36d0(param_1,uVar7,0);
    FUN_1411b5c60(param_1);
    FUN_1411c0130(param_1);
    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x1f0);
    if (plVar13 != (longlong *)0x0) {
      lVar6 = *plVar13;
      uVar7 = FUN_14119e140(*(longlong *)(param_1 + 0x778),local_1d0,param_2);
      (**(code **)(lVar6 + 0x2b0))
                (*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x1f0),uVar7,1,0);
      local_180 = local_1c8;
LAB_141198e02:
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_180 + 1;
        lVar6 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar1 = (int *)((longlong)local_180 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_180 + 8))(local_180,1);
          }
        }
      }
    }
    goto LAB_141198e33;
  case 4:
    uVar7 = GetTransientPackage();
    uVar7 = FUN_141187b50(uVar7);
    *(undefined8 *)(param_1 + 0x748) = uVar7;
    FUN_1411b7440(param_1,uVar7);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x280))
              (*(longlong **)(param_1 + 0x748),param_1,*(longlong *)(param_1 + 0x768) + 0x80,
               *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178),
               *(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x760),lVar6);
    lStack_250 = (ulonglong)uStack_3ec << 0x20;
    local_258 = FUN_1411a3da0;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnContentPanelSelectionChanged",L"::");
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar15 = pwVar3;
    }
    FName::FName(&local_338,pwVar15 + 2,1);
    FUN_1407260e0(*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x178) + 0x180,param_1,&local_258,
                  local_338);
    puVar14 = local_b8;
    goto LAB_1411989d7;
  case 5:
    uVar7 = GetTransientPackage();
    uVar7 = FUN_141187b50(uVar7);
    *(undefined8 *)(param_1 + 0x748) = uVar7;
    FUN_1411b7440(param_1,uVar7);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x280))
              (*(longlong **)(param_1 + 0x748),param_1,*(longlong *)(param_1 + 0x768) + 0x90,
               *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178),
               *(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x760),lVar6);
    *(undefined4 *)(*(longlong *)(param_1 + 0x748) + 0xb8) = param_2;
    lStack_270 = (ulonglong)uStack_3ec << 0x20;
    local_278 = FUN_1411a3da0;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnContentPanelSelectionChanged",L"::");
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar15 = pwVar3;
    }
    FName::FName(&local_348,pwVar15 + 2,1);
    FUN_1407260e0(*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x178) + 0x180,param_1,&local_278,
                  local_348);
    uVar7 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (local_d8,*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178));
    FUN_142ed36d0(param_1,uVar7,0);
    FUN_1411b5c60(param_1);
    FUN_1411c0130(param_1);
    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x1f0);
    if (plVar13 != (longlong *)0x0) {
      lVar6 = *plVar13;
      uVar7 = FUN_14119e140(*(longlong *)(param_1 + 0x778),local_1b8,param_2);
      (**(code **)(lVar6 + 0x2b0))
                (*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x1f0),uVar7,1,0);
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_1b0 + 1;
        lVar6 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar1 = (int *)((longlong)local_1b0 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_1b0 + 8))(local_1b0,1);
          }
        }
      }
    }
    break;
  case 6:
    uVar7 = GetTransientPackage();
    FUN_1417846f0(uVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_390 = 0;
    uVar8 = FUN_1413793a0();
    uVar7 = FUN_1417985e0(uVar8,uVar7,0,0,uVar17 & 0xffffffff00000000,0,
                          in_stack_fffffffffffffbe8 & 0xffffffffffffff00,0,0);
    *(undefined8 *)(param_1 + 0x748) = uVar7;
    FUN_1411b7440(param_1,uVar7);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x280))
              (*(longlong **)(param_1 + 0x748),param_1,*(longlong *)(param_1 + 0x768) + 0x40,
               *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178),
               *(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x760),lVar6);
    lStack_240 = (ulonglong)uStack_3ec << 0x20;
    local_248 = FUN_1411a3da0;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnContentPanelSelectionChanged",L"::");
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar15 = pwVar3;
    }
    FName::FName(&local_330,pwVar15 + 2,1);
    FUN_1407260e0(*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x178) + 0x180,param_1,&local_248,
                  local_330);
    puVar14 = local_a8;
    goto LAB_1411989d7;
  case 7:
    uVar7 = GetTransientPackage();
    FUN_1417846f0(uVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_388 = 0;
    uVar8 = UFGPoleDescriptor::GetPrivateStaticClass();
    uVar7 = FUN_1417985e0(uVar8,uVar7,0,0,uVar17 & 0xffffffff00000000,0,
                          in_stack_fffffffffffffbe8 & 0xffffffffffffff00,0,0);
    FUN_141174a70(uVar7,*(undefined4 *)(param_1 + 0x738),*(undefined4 *)(param_1 + 0x73c));
    *(undefined8 *)(param_1 + 0x748) = uVar7;
    FUN_1411b7440(param_1,uVar7);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x280))
              (*(longlong **)(param_1 + 0x748),param_1,*(longlong *)(param_1 + 0x768) + 0x50,
               *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178),
               *(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x760),lVar6);
    lStack_230 = (ulonglong)uStack_3ec << 0x20;
    local_238 = FUN_1411a3da0;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnContentPanelSelectionChanged",L"::");
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar15 = pwVar3;
    }
    FName::FName(&local_328,pwVar15 + 2,1);
    FUN_1407260e0(*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x178) + 0x180,param_1,&local_238,
                  local_328);
    uVar7 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178));
    FUN_142ed36d0(param_1,uVar7,0);
    FUN_1411b5c60(param_1);
    FUN_1411c0130(param_1);
    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x1f0);
    if (plVar13 != (longlong *)0x0) {
      lVar6 = *plVar13;
      uVar7 = FUN_14119e140(*(longlong *)(param_1 + 0x778),local_188,param_2);
      (**(code **)(lVar6 + 0x2b0))
                (*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x1f0),uVar7,1,0);
      goto LAB_141198e02;
    }
LAB_141198e33:
    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x1b0);
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x2c8))(plVar13,0,0);
    }
    break;
  case 8:
    uVar7 = GetTransientPackage();
    FUN_1417846f0(uVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_380 = 0;
    uVar8 = FUN_14132f2f0();
    uVar7 = FUN_1417985e0(uVar8,uVar7,0,0,uVar17 & 0xffffffff00000000,0,
                          in_stack_fffffffffffffbe8 & 0xffffffffffffff00,0,0);
    *(undefined8 *)(param_1 + 0x748) = uVar7;
    FUN_1411b7440(param_1,uVar7);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x280))
              (*(longlong **)(param_1 + 0x748),param_1,*(longlong *)(param_1 + 0x768) + 0x60,
               *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178),
               *(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x760),lVar6);
    lStack_220 = (ulonglong)uStack_3ec << 0x20;
    local_228 = FUN_1411a3da0;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnContentPanelSelectionChanged",L"::");
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar15 = pwVar3;
    }
    FName::FName(&local_320,pwVar15 + 2,1);
    FUN_1407260e0(*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x178) + 0x180,param_1,&local_228,
                  local_320);
    uVar7 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (local_88,*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178));
    FUN_142ed36d0(param_1,uVar7,0);
    FUN_1411b5c60(param_1);
    FUN_1411c0130(param_1);
    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x1f0);
    if (plVar13 != (longlong *)0x0) {
      lVar6 = *plVar13;
      uVar7 = FUN_14119e140(*(longlong *)(param_1 + 0x778),local_170,param_2);
      (**(code **)(lVar6 + 0x2b0))
                (*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x1f0),uVar7,1,0);
      if (local_168 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_168 + 1;
        lVar6 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_168)(local_168);
          LOCK();
          piVar1 = (int *)((longlong)local_168 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_168 + 8))(local_168,1);
          }
        }
      }
    }
    break;
  case 9:
    uVar7 = GetTransientPackage();
    FUN_1417846f0(uVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_378 = 0;
    uVar8 = FUN_141361c50();
    in_stack_fffffffffffffbe8 = in_stack_fffffffffffffbe8 & 0xffffffffffffff00;
    lVar10 = FUN_1417985e0(uVar8,uVar7,0,0,uVar17 & 0xffffffff00000000,0,in_stack_fffffffffffffbe8,0
                           ,0);
    uVar5 = (undefined4)(in_stack_fffffffffffffbe8 >> 0x20);
    FUN_1411b7440(param_1,lVar10);
    if (lVar10 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x768);
      if (((*(int *)(lVar2 + 0xd8) != 0) && (*(int *)(lVar2 + 0xe8) != 0)) &&
         (*(int *)(lVar2 + 200) != 0)) {
        FUN_141189770(lVar10 + 0xb8,*(undefined8 *)(lVar2 + 0xd0));
        FUN_141189770(lVar10 + 0x108,*(undefined8 *)(lVar2 + 0xe0));
        FUN_141189770(lVar10 + 0x158,*(undefined8 *)(lVar2 + 0xc0));
        FUN_141156380(lVar10 + 0xd0);
        FUN_141156380(lVar10 + 0x120);
        FUN_141156380(lVar10 + 0x170);
      }
      FUN_141197260(lVar10,param_1,*(undefined8 *)(param_1 + 0x778),*(undefined8 *)(param_1 + 0x758)
                    ,*(undefined8 *)(param_1 + 0x760),lVar6,CONCAT44(uVar5,param_2));
      *(longlong *)(param_1 + 0x748) = lVar10;
      lStack_210 = (ulonglong)uStack_3ec << 0x20;
      local_218 = FUN_1411a3da0;
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnContentPanelSelectionChanged",L"::");
      while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar15 = pwVar3;
      }
      FName::FName(&local_318,pwVar15 + 2,1);
      FUN_1407260e0(*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x178) + 0x180,param_1,&local_218
                    ,local_318);
      uVar7 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>
                        (local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178));
      FUN_142ed36d0(param_1,uVar7,0);
      FUN_1411b5c60(param_1);
      FUN_1411c0130(param_1);
      plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x1f0);
      if (plVar13 != (longlong *)0x0) {
        lVar6 = *plVar13;
        uVar7 = FUN_14119e140(*(longlong *)(param_1 + 0x778),local_158,param_2);
        (**(code **)(lVar6 + 0x2b0))
                  (*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x1f0),uVar7,1,0);
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_150 + 1;
          lVar6 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar1 = (int *)((longlong)local_150 + 0xc);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*local_150 + 8))(local_150,1);
            }
          }
        }
      }
      local_3a8 = 0;
      local_3a0 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8,0);
      FGenericPlatformString::Memcpy(local_3a8,L"leftColumnTitle",0x20);
      local_3b8 = (longlong *)0x0;
      local_3b0 = 0;
      local_208 = 0;
      plVar11 = (longlong *)FUN_140ac4770(param_1,&local_3a8,0,6,&local_3b8);
      plVar13 = local_3b8;
      for (iVar16 = (int)local_3b0; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        plVar13 = plVar13 + 2;
      }
      if (local_3b8 != (longlong *)0x0) {
        FMemory::Free(local_3b8);
      }
      if (local_3a8 != 0) {
        FMemory::Free();
      }
      local_3d8 = 0;
      local_3d0 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3d8,0);
      FGenericPlatformString::Memcpy(local_3d8,L"rightColumnTitle",0x22);
      local_3e8 = (longlong *)0x0;
      local_3e0 = 0;
      local_2c0 = 0;
      plVar12 = (longlong *)FUN_140ac4770(param_1,&local_3d8,0,6,&local_3e8);
      plVar13 = local_3e8;
      for (iVar16 = (int)local_3e0; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        plVar13 = plVar13 + 2;
      }
      if (local_3e8 != (longlong *)0x0) {
        FMemory::Free(local_3e8);
      }
      if (local_3d8 != 0) {
        FMemory::Free();
      }
      if ((plVar11 != (longlong *)0x0) && (plVar12 != (longlong *)0x0)) {
        lVar6 = *plVar11;
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_140,L"Walking",L"OptionsMenu",L"WalkingText");
        (**(code **)(lVar6 + 0x2b0))(plVar11,uVar7,1,0);
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_138 + 1;
          lVar6 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar1 = (int *)((longlong)local_138 + 0xc);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*local_138 + 8))(local_138,1);
            }
          }
        }
        lVar6 = *plVar12;
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_128,L"Driving",L"OptionsMenu",L"DrivingText");
        (**(code **)(lVar6 + 0x2b0))(plVar12,uVar7,1,0);
        if (local_120 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_120 + 1;
          lVar6 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_120)(local_120);
            LOCK();
            piVar1 = (int *)((longlong)local_120 + 0xc);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*local_120 + 8))(local_120,1);
            }
          }
        }
      }
    }
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    uVar7 = GetTransientPackage();
    FUN_1417846f0(uVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_370 = 0;
    uVar8 = UUGStreamInteractSpawnedActorUW::GetPrivateStaticClass();
    in_stack_fffffffffffffbe8 = in_stack_fffffffffffffbe8 & 0xffffffffffffff00;
    plVar13 = (longlong *)
              FUN_1417985e0(uVar8,uVar7,0,0,uVar17 & 0xffffffff00000000,0,in_stack_fffffffffffffbe8,
                            0,0);
    uVar5 = (undefined4)(in_stack_fffffffffffffbe8 >> 0x20);
    FUN_1411b7440(param_1,plVar13);
    if (plVar13 != (longlong *)0x0) {
      if ((*(longlong **)(param_1 + 0x758))[0xb7] == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x758) + 0xe80))();
      }
      lVar10 = *(longlong *)(param_1 + 0x768);
      FText::FText(local_310,lVar10 + 0xf0);
      local_2e0 = 0;
      local_2d8 = 0;
      local_2e8 = 0;
      local_2f8 = *(undefined4 *)(lVar10 + 0x108);
      local_2f4 = *(undefined8 *)(lVar10 + 0x10c);
      local_200 = *(undefined8 *)(lVar10 + 0x118);
      FString::FString(local_1f8,lVar10 + 0x120);
      FSoftObjectPath::operator=(&local_2e8,&local_200);
      local_2d0 = (void *)0x0;
      iVar16 = *(int *)(lVar10 + 0x138);
      _Src = *(void **)(lVar10 + 0x130);
      local_2c8 = iVar16;
      if (iVar16 == 0) {
        local_2c4 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_2d0,iVar16,0);
        _guard_xfg_dispatch_icall_nop(local_2d0,_Src,(longlong)iVar16 << 3);
      }
      FUN_141173f70(plVar13,*(longlong *)(param_1 + 0x768) + 0x140,
                    *(longlong *)(param_1 + 0x768) + 0x150,local_310);
      lVar10 = *(longlong *)(param_1 + 0x768);
      FUN_141173400(plVar13,*(undefined8 *)(lVar10 + 0x168),*(undefined8 *)(lVar10 + 0x160),
                    *(undefined8 *)(lVar10 + 0x178),*(undefined8 *)(lVar10 + 0x170));
      FUN_14114f530(plVar13,param_1,*(undefined8 *)(param_1 + 0x778),
                    *(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x760),lVar6,
                    CONCAT44(uVar5,param_2));
      *(longlong **)(param_1 + 0x748) = plVar13;
      (**(code **)(*plVar13 + 0x2d0))(plVar13);
      FUN_1411b5c60(param_1);
      FUN_1411c0130(param_1);
      plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x1f0);
      if (plVar13 != (longlong *)0x0) {
        lVar6 = *plVar13;
        uVar7 = FUN_14119e140(*(longlong *)(param_1 + 0x778),local_110,param_2);
        (**(code **)(lVar6 + 0x2b0))
                  (*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x1f0),uVar7,1,0);
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_108 + 1;
          lVar6 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar1 = (int *)((longlong)local_108 + 0xc);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*local_108 + 8))(local_108,1);
            }
          }
        }
      }
    }
    break;
  case 0x10:
    uVar7 = GetTransientPackage();
    FUN_1417846f0(uVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar8 = UTextureRenderTargetCube::GetPrivateStaticClass();
    uVar7 = FUN_1417985e0(uVar8,uVar7,0,0,uVar17 & 0xffffffff00000000,0,
                          in_stack_fffffffffffffbe8 & 0xffffffffffffff00,0,0);
    *(undefined8 *)(param_1 + 0x748) = uVar7;
    FUN_1411b7440(param_1,uVar7);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x280))
              (*(longlong **)(param_1 + 0x748),param_1,*(longlong *)(param_1 + 0x768) + 0xb0,
               *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178),
               *(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x760),lVar6);
    lStack_2a0 = (ulonglong)uStack_3ec << 0x20;
    local_2a8 = FUN_1411a3da0;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnContentPanelSelectionChanged",L"::");
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar15 = pwVar3;
    }
    FName::FName(&local_360,pwVar15 + 2,1);
    FUN_1407260e0(*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x178) + 0x180,param_1,&local_2a8,
                  local_360);
    puVar14 = local_68;
LAB_1411989d7:
    uVar7 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (puVar14,*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178));
    FUN_142ed36d0(param_1,uVar7,0);
    break;
  case 0x11:
    uVar7 = GetTransientPackage();
    uVar7 = FUN_141187b50(uVar7);
    *(undefined8 *)(param_1 + 0x748) = uVar7;
    FUN_1411b7440(param_1,uVar7);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x280))
              (*(longlong **)(param_1 + 0x748),param_1,*(longlong *)(param_1 + 0x768) + 0xa0,
               *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178),
               *(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x760),lVar6);
    *(undefined4 *)(*(longlong *)(param_1 + 0x748) + 0xb8) = param_2;
    lStack_260 = (ulonglong)uStack_3ec << 0x20;
    local_268 = FUN_1411a3da0;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnContentPanelSelectionChanged",L"::");
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar15 = pwVar3;
    }
    FName::FName(&local_340,pwVar15 + 2,1);
    FUN_1407260e0(*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x178) + 0x180,param_1,&local_268,
                  local_340);
    uVar7 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (local_c8,*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178));
    FUN_142ed36d0(param_1,uVar7,0);
    FUN_1411b5c60(param_1);
    FUN_1411c0130(param_1);
    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x1f0);
    if (plVar13 != (longlong *)0x0) {
      lVar6 = *plVar13;
      uVar7 = FUN_14119e140(*(longlong *)(param_1 + 0x778),local_1a0,param_2);
      (**(code **)(lVar6 + 0x2b0))
                (*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x1f0),uVar7,1,0);
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_198 + 1;
        lVar6 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar1 = (int *)((longlong)local_198 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_198 + 8))(local_198,1);
          }
        }
      }
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x778);
  plVar13 = *(longlong **)(lVar6 + 0x178);
  if (plVar13 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar13 + 0x2d0))(plVar13);
    uVar7 = FUN_142eb6a30(plVar13,uVar5);
    FUN_142ed3b10(param_1,uVar7);
    lVar6 = *(longlong *)(param_1 + 0x778);
  }
  uVar5 = FUN_142eb7a00(*(undefined8 *)(lVar6 + 0x178));
  lVar6 = FUN_142eb6a30(*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x178),uVar5);
  if (lVar6 != 0) {
    FUN_1411a3da0(param_1,lVar6);
  }
LAB_141199d2a:
  *(undefined4 *)(param_1 + 0x750) = param_2;
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return;
}



// FUNCTION 14119a010 FUN_14119a010 body=2511 status=ok
// SIG undefined FUN_14119a010(void)

void FUN_14119a010(ulonglong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined2 **ppuVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  undefined2 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int local_res20;
  longlong local_2a8;
  undefined8 local_2a0;
  void *local_298;
  undefined8 local_290;
  undefined2 *local_288;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  longlong local_270;
  undefined8 local_268;
  ulonglong local_260;
  void *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  longlong local_220;
  undefined2 *local_218;
  int local_210;
  undefined1 *local_208 [2];
  undefined1 local_1f8 [8];
  longlong local_1f0;
  ulonglong local_1e8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong local_198 [2];
  undefined2 *local_188;
  int local_180;
  undefined2 *local_178;
  int local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 local_140;
  undefined2 *local_138;
  int local_130;
  longlong local_128 [2];
  undefined2 *local_118;
  int local_110;
  undefined2 *local_108;
  int local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0;
  longlong local_c8 [2];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  longlong local_68 [2];
  undefined1 local_58 [24];
  
  iVar6 = 0;
  local_278 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  FDisplayMetrics::RebuildDisplayMetrics(local_1f8);
  iVar12 = (int)local_1e8;
  local_2a8 = 0;
  local_2a0 = 0;
  if ((int)local_1e8 < 1) {
    if ((int)local_1e8 < 0) {
      TArray<FText,FDefaultAllocator>::RemoveAtImpl
                (&local_2a8,local_1e8 & 0xffffffff,-(int)local_1e8,1);
      goto LAB_14119a0c0;
    }
  }
  else {
    local_2a0 = local_1e8 & 0xffffffff;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_2a8,0);
    lVar18 = local_2a8;
    for (; iVar12 != 0; iVar12 = iVar12 + -1) {
      FText::FText(lVar18);
      lVar18 = lVar18 + 0x18;
    }
LAB_14119a0c0:
  }
  if ((int)local_1e8 < 1) {
    cVar5 = FWindowsPlatformMisc::IsRemoteSession();
    if (cVar5 == '\0') {
      local_238 = 0;
      local_230 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
      FGenericPlatformString::Memcpy(local_238,L"Unknown",0x10);
      uVar7 = FText::FromString(local_80,&local_238);
      uVar20 = local_2a0;
      lVar18 = (longlong)(int)local_2a0;
      iVar12 = (int)local_2a0 + 1;
      local_2a0 = CONCAT44(local_2a0._4_4_,iVar12);
      if (local_2a0._4_4_ < iVar12) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_2a8,uVar20 & 0xffffffff);
      }
      FText::FText(local_2a8 + lVar18 * 0x18,uVar7);
      lVar18 = local_238;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_78 + 1;
        lVar13 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)local_78 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          lVar18 = local_238;
          if (iVar12 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
            lVar18 = local_238;
          }
        }
      }
    }
    else {
      local_248 = 0;
      local_240 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
      FGenericPlatformString::Memcpy(local_248,L"Remote Session",0x1e);
      uVar7 = FText::FromString(local_98,&local_248);
      uVar20 = local_2a0;
      lVar18 = (longlong)(int)local_2a0;
      iVar12 = (int)local_2a0 + 1;
      local_2a0 = CONCAT44(local_2a0._4_4_,iVar12);
      if (local_2a0._4_4_ < iVar12) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_2a8,uVar20 & 0xffffffff);
      }
      FText::FText(local_2a8 + lVar18 * 0x18,uVar7);
      lVar18 = local_248;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_90 + 1;
        lVar13 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)local_90 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          lVar18 = local_248;
          if (iVar12 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
            lVar18 = local_248;
          }
        }
      }
    }
    if (lVar18 != 0) {
      FMemory::Free();
    }
    plVar14 = (longlong *)(param_1 + 0x2a0);
    if (plVar14 != local_68) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      *plVar14 = 0;
      *(undefined8 *)(param_1 + 0x2a8) = 0;
    }
    uVar7 = FString::FString(local_58,plVar14);
    FUN_14248eaf0(*(undefined8 *)(param_1 + 0xc0),uVar7);
    iVar12 = iVar6;
    goto LAB_14119a8e1;
  }
  local_208[0] = local_1f8;
  FUN_141181570(local_1f0,(longlong)(int)local_1e8,param_1 & 0xff,local_208);
  UMWAITargetSelectionComponent::GetTargetUnitName(*(undefined8 *)(param_1 + 0xc0));
  FUN_14247fbb0();
  plVar14 = (longlong *)(param_1 + 0x178);
  iVar12 = *(int *)(param_1 + 0x180);
  local_res20 = -1;
  if (iVar12 < (int)local_1e8) {
    *(int *)(param_1 + 0x180) = (int)local_1e8;
    iVar17 = (int)local_1e8 - iVar12;
    if (*(int *)(param_1 + 0x184) < (int)local_1e8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar12 * 0x10 + *plVar14),0,(longlong)iVar17 << 4);
LAB_14119a16d:
  }
  else if ((int)local_1e8 < iVar12) {
    TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
              (plVar14,local_1e8 & 0xffffffff,iVar12 - (int)local_1e8,1);
    goto LAB_14119a16d;
  }
  local_274 = 0;
  if ((int)local_1e8 < 1) {
LAB_14119a66d:
    local_res20 = iVar6;
    puVar19 = local_218;
    local_280 = local_210;
    iVar12 = local_res20;
    if ((local_210 == 0) && (local_27c == 0)) {
      local_27c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_288,local_210);
      _guard_xfg_dispatch_icall_nop(local_288,puVar19,(longlong)local_210 * 2);
    }
  }
  else {
    local_260 = 0;
    local_228 = 0;
    local_220 = 0;
    do {
      lVar18 = local_220;
      lVar13 = local_1f0 + local_228;
      FString::FString(local_198,lVar13);
      FString::FString(&local_188,lVar13 + 0x10);
      FString::FString(&local_178,lVar13 + 0x20);
      local_168 = *(undefined4 *)(lVar13 + 0x30);
      local_160 = *(undefined4 *)(lVar13 + 0x38);
      uStack_15c = *(undefined4 *)(lVar13 + 0x3c);
      uStack_158 = *(undefined4 *)(lVar13 + 0x40);
      uStack_154 = *(undefined4 *)(lVar13 + 0x44);
      local_164 = *(undefined4 *)(lVar13 + 0x34);
      local_150 = *(undefined4 *)(lVar13 + 0x48);
      uStack_14c = *(undefined4 *)(lVar13 + 0x4c);
      uStack_148 = *(undefined4 *)(lVar13 + 0x50);
      uStack_144 = *(undefined4 *)(lVar13 + 0x54);
      local_140 = *(undefined1 *)(lVar13 + 0x58);
      FString::FString(&local_138,lVar13 + 0x60);
      iVar12 = local_180;
      lVar13 = (longlong)local_180;
      uVar8 = 0;
      bVar3 = false;
      iVar6 = 0;
      uVar20 = uVar8;
      uVar21 = uVar8;
      uVar22 = uVar8;
      bVar4 = false;
      if (0 < (int)local_1e8) {
        do {
          bVar3 = bVar4;
          lVar18 = local_1f0 + uVar21;
          FString::FString(local_128,lVar18);
          FString::FString(&local_118,lVar18 + 0x10);
          FString::FString(&local_108,lVar18 + 0x20);
          local_f8 = *(undefined4 *)(lVar18 + 0x30);
          local_f0 = *(undefined4 *)(lVar18 + 0x38);
          uStack_ec = *(undefined4 *)(lVar18 + 0x3c);
          uStack_e8 = *(undefined4 *)(lVar18 + 0x40);
          uStack_e4 = *(undefined4 *)(lVar18 + 0x44);
          local_f4 = *(undefined4 *)(lVar18 + 0x34);
          local_e0 = *(undefined4 *)(lVar18 + 0x48);
          uStack_dc = *(undefined4 *)(lVar18 + 0x4c);
          uStack_d8 = *(undefined4 *)(lVar18 + 0x50);
          uStack_d4 = *(undefined4 *)(lVar18 + 0x54);
          local_d0 = *(undefined1 *)(lVar18 + 0x58);
          FString::FString(local_c8,lVar18 + 0x60);
          puVar11 = local_108;
          puVar19 = local_118;
          if (uVar22 != local_260) {
            puVar10 = &DAT_143f3eda8;
            if (local_110 != 0) {
              puVar10 = local_118;
            }
            puVar9 = &DAT_143f3eda8;
            if (iVar12 != 0) {
              puVar9 = local_188;
            }
            iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
            if (iVar6 == 0) {
              puVar10 = &DAT_143f3eda8;
              if (local_170 != 0) {
                puVar10 = local_178;
              }
              puVar9 = &DAT_143f3eda8;
              if (local_100 != 0) {
                puVar9 = puVar11;
              }
              iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
              if (iVar6 < 0) {
                uVar20 = (ulonglong)((int)uVar20 + 1);
              }
              bVar3 = true;
            }
          }
          iVar6 = (int)uVar20;
          if (local_c8[0] != 0) {
            FMemory::Free();
          }
          if (puVar11 != (undefined2 *)0x0) {
            FMemory::Free(puVar11);
          }
          if (puVar19 != (undefined2 *)0x0) {
            FMemory::Free(puVar19);
          }
          if (local_128[0] != 0) {
            FMemory::Free();
          }
          uVar16 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar16;
          lVar18 = local_220;
          uVar21 = uVar21 + 0x70;
          uVar22 = uVar22 + 1;
          bVar4 = bVar3;
        } while ((int)uVar16 < (int)local_1e8);
      }
      puVar19 = local_138;
      local_298 = (void *)0x0;
      local_290 = 0;
      if (bVar3) {
        puVar11 = &DAT_143f3eda8;
        if (iVar12 != 0) {
          puVar11 = local_188;
        }
        FString::PrintfImpl(&local_270,L"%s (%d)",puVar11,iVar6 + 1);
        plVar14 = (longlong *)(*(longlong *)(param_1 + 0x178) + lVar18);
        if (plVar14 != &local_270) {
          if (*plVar14 != 0) {
            FMemory::Free();
          }
          *plVar14 = local_270;
          local_270 = 0;
          *(undefined4 *)(plVar14 + 1) = (undefined4)local_268;
          *(undefined4 *)((longlong)plVar14 + 0xc) = local_268._4_4_;
          local_268 = 0;
        }
        if (local_270 != 0) {
          FMemory::Free();
        }
        puVar11 = &DAT_143f3eda8;
        if (local_130 != 0) {
          puVar11 = puVar19;
        }
        FString::PrintfImpl(&local_258,L"%s (%d)",puVar11,iVar6 + 1);
        if (local_298 != (void *)0x0) {
          FMemory::Free();
        }
        local_298 = local_258;
        local_290 = local_250;
        local_250 = 0;
        local_258 = (void *)0x0;
      }
      else {
        ppuVar15 = (undefined2 **)(*(longlong *)(param_1 + 0x178) + lVar18);
        iVar6 = 0;
        if (ppuVar15 != &local_188) {
          *(int *)(ppuVar15 + 1) = iVar12;
          if ((iVar12 == 0) && (*(int *)((longlong)ppuVar15 + 0xc) == 0)) {
            *(undefined4 *)((longlong)ppuVar15 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar15,iVar12);
            _guard_xfg_dispatch_icall_nop(*ppuVar15,local_188,lVar13 * 2);
          }
          iVar6 = local_290._4_4_;
        }
        lVar13 = (longlong)local_130;
        local_290 = CONCAT44(local_290._4_4_,local_130);
        if ((local_130 == 0) && (iVar6 == 0)) {
          local_290 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_298,local_130);
          _guard_xfg_dispatch_icall_nop(local_298,puVar19,lVar13 * 2);
        }
      }
      lVar13 = local_2a8;
      uVar7 = FText::FromString(local_b0,&local_298);
      iVar6 = local_274;
      FText::operator=(lVar13 + (longlong)local_274 * 0x18,uVar7);
      plVar14 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a8 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        puVar19 = local_138;
        if ((int)lVar13 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          puVar19 = local_138;
          if (iVar12 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
            puVar19 = local_138;
          }
        }
      }
      lVar13 = *(longlong *)(param_1 + 0x178);
      if (*(int *)(lVar18 + 8 + lVar13) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = *(undefined2 **)(lVar18 + lVar13);
      }
      puVar10 = &DAT_143f3eda8;
      if (local_280 != 0) {
        puVar10 = local_288;
      }
      iVar12 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      lVar13 = *(longlong *)(param_1 + 0x178);
      if (iVar12 == 0) {
        local_res20 = iVar6;
      }
      if (*(int *)(lVar18 + 8 + lVar13) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = *(undefined2 **)(lVar18 + lVar13);
      }
      puVar10 = &DAT_143f3eda8;
      if (local_210 != 0) {
        puVar10 = local_218;
      }
      iVar17 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      iVar12 = local_278;
      if (iVar17 == 0) {
        iVar12 = iVar6;
      }
      local_278 = iVar12;
      if (local_298 != (void *)0x0) {
        FMemory::Free();
      }
      if (puVar19 != (undefined2 *)0x0) {
        FMemory::Free(puVar19);
      }
      if (local_178 != (undefined2 *)0x0) {
        FMemory::Free(local_178);
      }
      if (local_188 != (undefined2 *)0x0) {
        FMemory::Free(local_188);
      }
      if (local_198[0] != 0) {
        FMemory::Free();
      }
      local_274 = iVar6 + 1;
      local_260 = local_260 + 1;
      local_228 = local_228 + 0x70;
      local_220 = lVar18 + 0x10;
    } while (local_274 < (int)local_1e8);
    iVar6 = iVar12;
    if (local_res20 == -1) goto LAB_14119a66d;
  }
  puVar19 = local_288;
  ppuVar15 = (undefined2 **)(param_1 + 0x2a0);
  if (ppuVar15 != &local_288) {
    *(int *)(param_1 + 0x2a8) = local_280;
    if ((local_280 == 0) && (*(int *)(param_1 + 0x2ac) == 0)) {
      *(undefined4 *)(param_1 + 0x2ac) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar15,local_280);
      _guard_xfg_dispatch_icall_nop(*ppuVar15,puVar19,(longlong)local_280 * 2);
    }
  }
  if (local_218 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar6 = local_res20;
  if (local_288 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_14119a8e1:
  uVar7 = FName::FName(local_b8,L"OnMonitorDisplayTypeChanged",1);
  lVar18 = FUN_1411ba280(param_1,param_2,&local_2a8,iVar6,uVar7);
  *(longlong *)(param_1 + 0x1b8) = lVar18;
  if (lVar18 != 0) {
    FUN_142ed2be0(lVar18,iVar12);
    iVar12 = *(int *)(param_1 + 0x90);
    uVar7 = *(undefined8 *)(param_1 + 0x1b8);
    *(int *)(param_1 + 0x90) = iVar12 + 1;
    if (*(int *)(param_1 + 0x94) < iVar12 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x88,iVar12);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar12 * 8) = uVar7;
  }
  plVar14 = (longlong *)(param_1 + 0x288);
  if ((longlong *)(param_1 + 0x2a0) != plVar14) {
    if ((*(char *)(param_1 + 0x298) != '\0') &&
       (*(undefined1 *)(param_1 + 0x298) = 0, *plVar14 != 0)) {
      FMemory::Free();
    }
    FString::FString(plVar14,(longlong *)(param_1 + 0x2a0));
    *(undefined1 *)(param_1 + 0x298) = 1;
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_2a8);
  FUN_141189610(&local_1f0);
  return;
}



// FUNCTION 14119a9e0 FUN_14119a9e0 body=1610 status=ok
// SIG undefined FUN_14119a9e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14119a9e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char cVar7;
  undefined1 uVar8;
  DWORD DVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined1 local_1c8 [8];
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 *local_198;
  ulonglong *puStack_190;
  int *local_188;
  undefined8 local_180;
  longlong *local_178;
  longlong local_170;
  longlong local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  undefined4 *local_148;
  ulonglong *puStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [24];
  undefined4 local_80 [4];
  undefined1 local_70 [8];
  longlong *local_68;
  char local_58;
  ulonglong local_50 [3];
  
  lVar14 = DAT_1468760f8;
  local_50[0] = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_168 = param_1;
  local_160 = param_2;
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar9 = GetCurrentThreadId();
    lVar11 = 4;
    if (DVar9 == DAT_1468c21c0) goto LAB_14119aa49;
  }
  else {
LAB_14119aa49:
    lVar11 = 0;
  }
  if (*(int *)(lVar11 + lVar14) == 0) {
    return;
  }
  FUN_141190720(param_1,0);
  FUN_142481920(*(undefined8 *)(param_1 + 0xc0),&local_170);
  plVar12 = (longlong *)
            UMistFootprintComponent::GetBackLegName(*(undefined8 *)(param_1 + 0xc0),local_c8);
  local_1b0 = local_170;
  *(undefined4 *)(param_1 + 400) = 0;
  local_178 = plVar12;
  if (*(int *)(param_1 + 0x194) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x188,0);
  }
  local_188 = (int *)0x0;
  local_180 = 0;
  uVar13 = FString::FString(local_b8,plVar12);
  cVar7 = FUN_14119e4a0(param_1,&local_188,0,uVar13);
  piVar2 = local_188;
  if (cVar7 == '\0') {
    if (local_188 != (int *)0x0) {
      FMemory::Free();
    }
    if (*plVar12 != 0) {
      FMemory::Free();
    }
  }
  else {
    piVar3 = local_188 + (longlong)(int)local_180 * 3;
    if (local_188 != piVar3) {
      iVar10 = local_1b0._4_4_;
      piVar16 = local_188;
      do {
        if ((*piVar16 == (int)local_170) && (piVar16[1] == iVar10)) {
          TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                    (param_1 + 0x188,piVar16 + 2);
        }
        piVar16 = piVar16 + 3;
        plVar12 = local_178;
      } while (piVar16 != piVar3);
    }
    AlgoImpl::
    IntroSortInternal<unsigned_int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,TLess<unsigned_int>_>_>
              (*(undefined8 *)(param_1 + 0x188),(longlong)*(int *)(param_1 + 400),local_1c8[0],
               local_1c8);
    if (piVar2 != (int *)0x0) {
      FMemory::Free(piVar2);
    }
    if (*plVar12 != 0) {
      FMemory::Free();
    }
  }
  puVar17 = *(undefined4 **)(param_1 + 0x188);
  local_1c0 = 0;
  local_1b8 = 0;
  puVar4 = puVar17 + *(int *)(param_1 + 400);
  if (puVar17 != puVar4) {
    local_198 = local_80;
    puStack_190 = local_50;
    do {
      uVar5 = *puVar17;
      local_1b0 = 0;
      local_1a8 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,0);
      local_1d8 = CONCAT62(local_1d8._2_6_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_1b0,7,"{0} hz");
      local_198 = (undefined4 *)0x0;
      puStack_190 = (ulonglong *)0x0;
      FString::AppendInt(&local_198,uVar5);
      lVar14 = FText::FromString(local_98,&local_198);
      uVar13 = FText::FromString(local_f8,&local_1b0);
      puVar15 = (undefined8 *)FTextFormat::FTextFormat(local_a8,uVar13);
      local_80[0] = 4;
      FText::FText(local_70,lVar14);
      local_158 = *puVar15;
      local_150 = puVar15[1];
      local_58 = '\x01';
      if (local_150 != 0) {
        LOCK();
        *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
        UNLOCK();
      }
      local_148 = local_80;
      puStack_140 = local_50;
      uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_138,&local_148);
      uVar13 = FText::Format(local_110,&local_158,uVar13);
      FText::FText(local_128,uVar13);
      plVar12 = local_108;
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_108 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_108)(local_108);
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
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_138);
      plVar12 = local_68;
      if ((local_58 != '\0') && (local_58 = '\0', local_68 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_68 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_68)(local_68);
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
      plVar12 = (longlong *)puVar15[1];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
      plVar12 = *(longlong **)(lVar14 + 8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
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
      uVar6 = local_1b8;
      lVar14 = (longlong)(int)local_1b8;
      iVar10 = (int)local_1b8 + 1;
      local_1b8 = CONCAT44(local_1b8._4_4_,iVar10);
      if (local_1b8._4_4_ < iVar10) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_1c0,uVar6 & 0xffffffff);
      }
      FText::FText(local_1c0 + lVar14 * 0x18);
      plVar12 = local_120;
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_120 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
      }
      plVar12 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f0 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
      }
      if (local_198 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      if (local_1b0 != 0) {
        FMemory::Free();
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar4);
    param_1 = local_168;
    if ((int)local_1b8 != 0) goto LAB_14119af4a;
  }
  uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_e0,L"Unknown",L"OakGameUserSettings",L"RefreshRate_Unknown");
  uVar6 = local_1b8;
  lVar14 = (longlong)(int)local_1b8;
  iVar10 = (int)local_1b8 + 1;
  local_1b8 = CONCAT44(local_1b8._4_4_,iVar10);
  if (local_1b8._4_4_ < iVar10) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_1c0,uVar6 & 0xffffffff);
  }
  FText::FText(local_1c0 + lVar14 * 0x18,uVar13);
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_d8 + 1;
    lVar14 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)local_d8 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
LAB_14119af4a:
  local_1d8 = FName::FName(&local_178,L"OnRefreshRateChanged",1);
  lVar14 = FUN_1411b90e0(param_1,local_160,&local_1c0,0);
  *(longlong *)(param_1 + 0x1a8) = lVar14;
  if (lVar14 != 0) {
    FUN_142ed2aa0(lVar14,0);
    if (*(char *)(param_1 + 0x2b4) == '\0') {
      uVar8 = 1;
    }
    else {
      if ((*(int *)(param_1 + 0x2b0) == 0) && (0 < *(int *)(param_1 + 400))) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      if (DAT_146876190 == DAT_146af4ac8) {
        uVar8 = 0;
      }
    }
    plVar12 = (longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x170);
    (**(code **)(*plVar12 + 0x38))(plVar12,uVar8);
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_1c0);
  return;
}



// FUNCTION 14119b030 FUN_14119b030 body=1043 status=ok
// SIG undefined FUN_14119b030(void)

void FUN_14119b030(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    uVar3 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x251);
    local_c8 = 0;
    local_c0 = 0;
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,&DAT_1446d9330,L"NetworkOptionsMenu",L"FrequencyOff");
    uVar4 = local_c0;
    lVar7 = (longlong)(int)local_c0;
    iVar6 = (int)local_c0 + 1;
    local_c0 = CONCAT44(local_c0._4_4_,iVar6);
    if (local_c0._4_4_ < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_c8,uVar4 & 0xffffffff);
    }
    FText::FText(local_c8 + lVar7 * 0x18,uVar5);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"Very Low",L"NetworkOptionsMenu",L"FrequencyVeryLow");
    uVar4 = local_c0;
    lVar7 = (longlong)(int)local_c0;
    iVar6 = (int)local_c0 + 1;
    local_c0 = CONCAT44(local_c0._4_4_,iVar6);
    if (local_c0._4_4_ < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_c8,uVar4 & 0xffffffff);
    }
    FText::FText(local_c8 + lVar7 * 0x18,uVar5);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)local_98 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,&DAT_1446d93e8,L"NetworkOptionsMenu",L"FrequencyLow");
    uVar4 = local_c0;
    lVar7 = (longlong)(int)local_c0;
    iVar6 = (int)local_c0 + 1;
    local_c0 = CONCAT44(local_c0._4_4_,iVar6);
    if (local_c0._4_4_ < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_c8,uVar4 & 0xffffffff);
    }
    FText::FText(local_c8 + lVar7 * 0x18,uVar5);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"Normal",L"NetworkOptionsMenu",L"FrequencyNormal");
    uVar4 = local_c0;
    lVar7 = (longlong)(int)local_c0;
    iVar6 = (int)local_c0 + 1;
    local_c0 = CONCAT44(local_c0._4_4_,iVar6);
    if (local_c0._4_4_ < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_c8,uVar4 & 0xffffffff);
    }
    FText::FText(local_c8 + lVar7 * 0x18,uVar5);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"High",L"NetworkOptionsMenu",L"FrequencyHigh");
    uVar4 = local_c0;
    lVar7 = (longlong)(int)local_c0;
    iVar6 = (int)local_c0 + 1;
    local_c0 = CONCAT44(local_c0._4_4_,iVar6);
    if (local_c0._4_4_ < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_c8,uVar4 & 0xffffffff);
    }
    FText::FText(local_c8 + lVar7 * 0x18,uVar5);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Very High",L"NetworkOptionsMenu",L"FrequencyVeryHigh");
    uVar4 = local_c0;
    lVar7 = (longlong)(int)local_c0;
    iVar6 = (int)local_c0 + 1;
    local_c0 = CONCAT44(local_c0._4_4_,iVar6);
    if (local_c0._4_4_ < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_c8,uVar4 & 0xffffffff);
    }
    FText::FText(local_c8 + lVar7 * 0x18,uVar5);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    uVar5 = FName::FName(local_res8,L"OnToastFrequencyChanged",1);
    lVar7 = FUN_1411ba280(param_1,param_2,&local_c8,uVar3,uVar5);
    if (lVar7 != 0) {
      FUN_142ed2be0(lVar7,uVar3);
      iVar6 = *(int *)(param_1 + 0x90);
      *(int *)(param_1 + 0x90) = iVar6 + 1;
      if (*(int *)(param_1 + 0x94) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x88,iVar6);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar6 * 8) = lVar7;
    }
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_c8);
  }
  return;
}



// FUNCTION 14119b450 FUN_14119b450 body=641 status=ok
// SIG undefined FUN_14119b450(void)

void FUN_14119b450(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    uVar3 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x250);
    local_88 = 0;
    local_80 = 0;
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_78,L"Normal",L"NetworkOptionsMenu",L"LifetimeNormal");
    uVar4 = local_80;
    lVar7 = (longlong)(int)local_80;
    iVar6 = (int)local_80 + 1;
    local_80 = CONCAT44(local_80._4_4_,iVar6);
    if (local_80._4_4_ < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_88,uVar4 & 0xffffffff);
    }
    FText::FText(local_88 + lVar7 * 0x18,uVar5);
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
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_60,L"Long",L"NetworkOptionsMenu",L"LifetimeLong");
    uVar4 = local_80;
    lVar7 = (longlong)(int)local_80;
    iVar6 = (int)local_80 + 1;
    local_80 = CONCAT44(local_80._4_4_,iVar6);
    if (local_80._4_4_ < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_88,uVar4 & 0xffffffff);
    }
    FText::FText(local_88 + lVar7 * 0x18,uVar5);
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
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"Very Long",L"NetworkOptionsMenu",L"LifetimeVeryLong");
    uVar4 = local_80;
    lVar7 = (longlong)(int)local_80;
    iVar6 = (int)local_80 + 1;
    local_80 = CONCAT44(local_80._4_4_,iVar6);
    if (local_80._4_4_ < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_88,uVar4 & 0xffffffff);
    }
    FText::FText(local_88 + lVar7 * 0x18,uVar5);
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
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    uVar5 = FName::FName(local_res8,L"OnToastLifetimeChanged",1);
    lVar7 = FUN_1411ba280(param_1,param_2,&local_88,uVar3,uVar5);
    if (lVar7 != 0) {
      FUN_142ed2be0(lVar7,uVar3);
      iVar6 = *(int *)(param_1 + 0x90);
      *(int *)(param_1 + 0x90) = iVar6 + 1;
      if (*(int *)(param_1 + 0x94) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x88,iVar6);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar6 * 8) = lVar7;
    }
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_88);
  }
  return;
}



// FUNCTION 14119b6e0 FUN_14119b6e0 body=78 status=ok
// SIG undefined FUN_14119b6e0(void)

void FUN_14119b6e0(longlong param_1)

{
  FUN_1411b6170();
  if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x2b0))();
  }
  TBaseMulticastDelegate<void>::Remove(&DAT_1464af148,*(undefined8 *)(param_1 + 200));
  TBaseMulticastDelegate<void>::Remove(&DAT_1464af160,*(undefined8 *)(param_1 + 0xd0));
  return;
}



// FUNCTION 14119b730 thunk_FUN_1411b6170 body=5 status=ok
// SIG undefined thunk_FUN_1411b6170(void)

void thunk_FUN_1411b6170(void)

{
  FUN_1411b6170();
  return;
}



// FUNCTION 14119b740 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FGeomCacheVertexBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FPauseMenuTickFunction",0x2e);
  return param_2;
}



// FUNCTION 14119b780 FUN_14119b780 body=463 status=ok
// SIG undefined FUN_14119b780(void)

void FUN_14119b780(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined8 local_98;
  uint *puStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined8 uStack_70;
  uint *local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  longlong lStack_30;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  local_78 = (longlong *)(param_1 + 400);
  iVar5 = *(int *)(param_1 + 0x1b8);
  puStack_90 = (uint *)(param_1 + 0x1a0);
  local_98 = 0x100000000;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar5 != 0) {
    puVar6 = *(uint **)(param_1 + 0x1b0);
    if (*(uint **)(param_1 + 0x1b0) == (uint *)0x0) {
      puVar6 = puStack_90;
    }
    uVar3 = *puVar6;
    iVar4 = 0;
    iStack_80 = 0;
    while (uVar3 == 0) {
      iStack_80 = iStack_80 + 0x20;
      uVar2 = (ulonglong)local_98 >> 0x20;
      local_98 = CONCAT44((int)uVar2,iVar4 + 1);
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14119b83f;
      uVar3 = puVar6[(longlong)iVar4 + 1];
      iVar4 = iVar4 + 1;
    }
    uVar3 = -uVar3 & uVar3;
    iVar4 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    local_98 = CONCAT44(uVar3,(undefined4)local_98);
    if (uVar3 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    iStack_84 = (iStack_80 - iVar4) + 0x1f;
    if (iVar5 < iStack_84) {
LAB_14119b83f:
      iStack_84 = iVar5;
    }
  }
  local_88 = 0xffffffff;
  uStack_60 = CONCAT44(iStack_84,0xffffffff);
  auStack_20._8_4_ = iStack_80;
  auStack_20._0_8_ = uStack_60;
  auStack_20._12_4_ = uStack_7c;
  lStack_30 = local_98;
  local_40 = 0;
  local_10._0_4_ = SUB84(local_78,0);
  local_10._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70 = local_98;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  iVar5 = iStack_84;
  local_68 = puStack_90;
  local_48 = local_78;
  local_38 = local_78;
  puStack_28 = puStack_90;
  local_10 = local_78;
  if (iStack_84 < *(int *)(param_1 + 0x1b8)) {
    do {
      lVar1 = *(longlong *)(*local_78 + 8 + (longlong)iVar5 * 0x18);
      if (lVar1 != 0) {
        local_98 = 0;
        puStack_90 = (uint *)0x7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        FGenericPlatformString::Memcpy(local_98,L"Dimmed",0xe);
        FUN_142088cf0(lVar1,&local_98);
        if (local_98 != 0) {
          FMemory::Free();
        }
      }
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_70._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      iVar5 = uStack_60._4_4_;
    } while (uStack_60._4_4_ < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 14119b950 FUN_14119b950 body=159 status=ok
// SIG undefined FUN_14119b950(void)

void FUN_14119b950(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0xfa8))();
  if (lVar3 != 0) {
    if (*(longlong *)(param_1 + 0x270) != 0) {
      cVar2 = FUN_142ebd930();
      if (cVar2 != '\0') {
        FUN_142f001d0(lVar3);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x774) != '\0')) {
      if ((0 < *(int *)(lVar3 + 0x48)) &&
         (plVar1 = *(longlong **)
                    (*(longlong *)(lVar3 + 0x40) + -8 + (longlong)*(int *)(lVar3 + 0x48) * 8),
         plVar1 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar1 + 0x278))();
        lVar5 = *(longlong *)(param_1 + 0x30);
      }
      if (lVar4 == lVar5) {
        *(undefined1 *)(param_1 + 0x28) = 0;
        FUN_142f001d0(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 14119b9f0 FUN_14119b9f0 body=943 status=ok
// SIG undefined FUN_14119b9f0(void)

void FUN_14119b9f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_58 [4];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (param_2 != 0) {
    plVar7 = *(longlong **)(param_1 + 0x260);
    plVar9 = (longlong *)0x0;
    if (plVar7 != (longlong *)0x0) {
      if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
        lVar5 = *(longlong *)(param_1 + 0x1b0);
        if (*(longlong *)(param_1 + 0x1b0) == 0) {
          lVar5 = param_1 + 0x1a8;
        }
        iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                 (ulonglong)*(byte *)(param_2 + 0x30)) * 4);
        if (iVar3 != -1) {
          do {
            plVar6 = (longlong *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar3 * 0x28);
            if (*(byte *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar3 * 0x28) ==
                *(byte *)(param_2 + 0x30)) {
              if (iVar3 != -1) goto LAB_14119baa1;
              break;
            }
            iVar3 = (int)plVar6[4];
          } while (iVar3 != -1);
        }
      }
      plVar6 = plVar9;
LAB_14119baa1:
      plVar8 = plVar6 + 1;
      if (plVar6 == (longlong *)0x0) {
        plVar8 = plVar9;
      }
      pcVar2 = *(code **)(*plVar7 + 0x2b0);
      if (plVar8 == (longlong *)0x0) {
        uVar4 = FUN_1410cc100(param_2,local_38);
        (*pcVar2)(*(undefined8 *)(param_1 + 0x260),uVar4,1,0);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_30 + 1;
          lVar5 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)local_30 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
      }
      else {
        (*pcVar2)(plVar7,plVar8,1,0);
      }
    }
    plVar7 = *(longlong **)(param_1 + 0x268);
    if (plVar7 != (longlong *)0x0) {
      if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 500)) {
        lVar5 = *(longlong *)(param_1 + 0x200);
        if (*(longlong *)(param_1 + 0x200) == 0) {
          lVar5 = param_1 + 0x1f8;
        }
        iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x208) - 1U &
                                 (ulonglong)*(byte *)(param_2 + 0x30)) * 4);
        if (iVar3 != -1) {
          do {
            plVar6 = (longlong *)(*(longlong *)(param_1 + 0x1c0) + (longlong)iVar3 * 0x28);
            if (*(byte *)(*(longlong *)(param_1 + 0x1c0) + (longlong)iVar3 * 0x28) ==
                *(byte *)(param_2 + 0x30)) {
              if (iVar3 != -1) goto LAB_14119bba1;
              break;
            }
            iVar3 = (int)plVar6[4];
          } while (iVar3 != -1);
        }
      }
      plVar6 = plVar9;
LAB_14119bba1:
      plVar8 = plVar6 + 1;
      if (plVar6 == (longlong *)0x0) {
        plVar8 = plVar9;
      }
      pcVar2 = *(code **)(*plVar7 + 0x2b0);
      if (plVar8 == (longlong *)0x0) {
        uVar4 = FUN_1410cbf60(param_2,local_20);
        (*pcVar2)(*(undefined8 *)(param_1 + 0x268),uVar4,1,0);
        if (local_18 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_18 + 1;
          lVar5 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_18)(local_18);
            LOCK();
            piVar1 = (int *)((longlong)local_18 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_18 + 8))(local_18,1);
            }
          }
        }
      }
      else {
        (*pcVar2)(plVar7,plVar8,1,0);
      }
      FUN_142f0d6e0(*(undefined8 *)(param_1 + 0x268),0x41a80000,L"left");
    }
    if (*(longlong *)(param_1 + 0x270) != 0) {
      if (*(int *)(param_1 + 0x218) != *(int *)(param_1 + 0x244)) {
        lVar5 = *(longlong *)(param_1 + 0x250);
        if (*(longlong *)(param_1 + 0x250) == 0) {
          lVar5 = param_1 + 0x248;
        }
        iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 600) - 1U &
                                 (ulonglong)*(byte *)(param_2 + 0x30)) * 4);
        if (iVar3 != -1) {
          do {
            plVar7 = (longlong *)(*(longlong *)(param_1 + 0x210) + (longlong)iVar3 * 0x18);
            if (*(byte *)(*(longlong *)(param_1 + 0x210) + (longlong)iVar3 * 0x18) ==
                *(byte *)(param_2 + 0x30)) {
              if (iVar3 != -1) goto LAB_14119bcb4;
              break;
            }
            iVar3 = (int)plVar7[2];
          } while (iVar3 != -1);
        }
      }
      plVar7 = plVar9;
LAB_14119bcb4:
      plVar6 = plVar7 + 1;
      if (plVar7 == (longlong *)0x0) {
        plVar6 = plVar9;
      }
      if ((plVar6 == (longlong *)0x0) || (lVar5 = *plVar6, lVar5 == 0)) {
        if (*(longlong *)(param_2 + 0x120) == 0) {
          return;
        }
        local_58[2] = 0;
        local_58[3] = 0x17;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 2,0);
        FGenericPlatformString::Memcpy(local_58[2],L"BITMAP_Preview1_nopack",0x2e);
        (**(code **)(**(longlong **)(param_1 + 0x270) + 0x2a0))
                  (*(longlong **)(param_1 + 0x270),local_58 + 2,*(undefined8 *)(param_2 + 0x120));
        lVar5 = local_58[2];
      }
      else {
        local_58[0] = 0;
        local_58[1] = 0x17;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
        FGenericPlatformString::Memcpy(local_58[0],L"BITMAP_Preview1_nopack",0x2e);
        (**(code **)(**(longlong **)(param_1 + 0x270) + 0x2a0))
                  (*(longlong **)(param_1 + 0x270),local_58,lVar5);
        lVar5 = local_58[0];
      }
      if (lVar5 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14119bda0 FUN_14119bda0 body=248 status=ok
// SIG undefined FUN_14119bda0(void)

void FUN_14119bda0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x28);
    do {
      if (plVar7[2] != 0) {
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
      plVar4 = (longlong *)plVar7[-3];
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
      plVar7 = plVar7 + 10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 14119bea0 FUN_14119bea0 body=182 status=ok
// SIG undefined FUN_14119bea0(void)

void FUN_14119bea0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*param_1 + 8);
    do {
      if (plVar7[2] != 0) {
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
      plVar7 = plVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 14119bf60 FUN_14119bf60 body=872 status=ok
// SIG undefined FUN_14119bf60(void)

void FUN_14119bf60(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined2 *local_a8;
  int local_a0;
  int local_9c;
  longlong *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_40;
  undefined8 local_38;
  
  local_70 = 0xe;
  puVar11 = (undefined2 *)0x0;
  local_78 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  puVar10 = local_78;
  FGenericPlatformString::Memcpy(local_78,L"TestMapsMenu.",0x1c);
  puVar8 = (undefined8 *)FText::ToString(param_1);
  local_80 = *(int *)(puVar8 + 1);
  lVar14 = (longlong)local_80;
  if ((int)local_70 < 2) {
    pvVar3 = (void *)*puVar8;
    local_88 = (undefined2 *)0x0;
    if (local_80 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
      puVar11 = local_88;
      _guard_xfg_dispatch_icall_nop(local_88,pvVar3,lVar14 * 2);
    }
    iVar13 = local_80;
    if (puVar10 != (undefined2 *)0x0) {
      FMemory::Free(puVar10);
    }
  }
  else {
    iVar7 = local_80 + -1;
    if (local_80 == 0) {
      iVar7 = 0;
    }
    if (((int)local_70 != 0) || (iVar6 = 1, iVar7 == 0)) {
      iVar6 = 0;
    }
    local_a0 = (int)local_70;
    local_a8 = puVar10;
    local_9c = local_70._4_4_;
    if (local_70._4_4_ < (int)local_70 + iVar6 + iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8);
    }
    iVar6 = local_a0;
    pvVar3 = (void *)*puVar8;
    puVar11 = local_a8;
    iVar13 = local_a0;
    local_88 = local_a8;
    local_80 = local_a0;
    if (iVar7 != 0) {
      lVar14 = (longlong)local_a0;
      local_a0 = iVar7 + (uint)(local_a0 == 0) + local_a0;
      if (local_9c < local_a0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,iVar6);
      }
      iVar13 = local_a0;
      puVar11 = local_a8;
      puVar10 = local_a8 + (lVar14 - (ulonglong)(iVar6 != 0));
      _guard_xfg_dispatch_icall_nop(puVar10,pvVar3,(longlong)iVar7 * 2);
      puVar10[iVar7] = 0;
      local_88 = puVar11;
      local_80 = iVar13;
    }
  }
  FUN_14119bea0(param_2,0);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  if (DAT_1468b6148 != 0) {
    puVar10 = &DAT_143f3eda8;
    if (iVar13 != 0) {
      puVar10 = puVar11;
    }
    iVar7 = FConfigCacheIni::GetArray(DAT_1468b6148,puVar10,L"TestMapList",&local_98,&DAT_1468e2410)
    ;
    if (iVar7 != 0) {
      plVar15 = local_98 + (longlong)(int)local_90 * 2;
      for (plVar12 = local_98; plVar12 != plVar15; plVar12 = plVar12 + 2) {
        FText::FText(local_58);
        local_40 = 0;
        local_38 = 0;
        local_68 = 0;
        local_60 = 0;
        if ((int)plVar12[1] == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*plVar12;
        }
        uVar9 = FUN_1414d6b80();
        FUN_14171d9a0(uVar9,puVar11,local_58,0,0,0,&local_68,1);
        if (local_68 != 0) {
          FMemory::Free();
        }
        cVar5 = FUN_1416f0740(&local_40,0,0);
        if (cVar5 != '\0') {
          iVar7 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar7 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
          }
          lVar14 = *param_2 + (longlong)iVar7 * 0x28;
          FText::FText(lVar14,local_58);
          FString::FString(lVar14 + 0x18,&local_40);
        }
        if (local_40 != 0) {
          FMemory::Free();
        }
        plVar4 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        puVar11 = local_88;
      }
    }
  }
  plVar12 = local_98;
  for (iVar7 = (int)local_90; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  return;
}



// FUNCTION 14119c2d0 FUN_14119c2d0 body=1148 status=ok
// SIG undefined FUN_14119c2d0(void)

void FUN_14119c2d0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong *plVar14;
  longlong local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  int local_d0;
  int local_cc;
  longlong *local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  int local_a0;
  int local_9c;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_70;
  undefined8 local_68;
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [3];
  
  local_b0 = 0xe;
  local_b8 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  puVar11 = local_b8;
  FGenericPlatformString::Convert<char,wchar_t>(local_b8,0xe,"TestMapsMenu.",0xe,0x3f);
  puVar6 = (undefined8 *)FName::ToString(param_1,local_60);
  if ((int)local_b0 < 2) {
    puVar12 = (undefined2 *)*puVar6;
    *puVar6 = 0;
    iVar13 = *(int *)(puVar6 + 1);
    puVar6[1] = 0;
    if (puVar11 != (undefined2 *)0x0) {
      FMemory::Free(puVar11);
    }
  }
  else {
    iVar5 = *(int *)(puVar6 + 1) + -1;
    if (*(int *)(puVar6 + 1) == 0) {
      iVar5 = 0;
    }
    if (((int)local_b0 != 0) || (iVar13 = 1, iVar5 == 0)) {
      iVar13 = 0;
    }
    local_d8 = puVar11;
    local_d0 = (int)local_b0;
    local_cc = local_b0._4_4_;
    if (local_b0._4_4_ < iVar5 + (int)local_b0 + iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8);
    }
    iVar9 = local_d0;
    _Src = (void *)*puVar6;
    puVar12 = local_d8;
    iVar13 = local_d0;
    if (iVar5 != 0) {
      lVar10 = (longlong)local_d0;
      local_d0 = iVar5 + (uint)(local_d0 == 0) + local_d0;
      if (local_cc < local_d0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,iVar9);
      }
      iVar13 = local_d0;
      puVar12 = local_d8;
      puVar11 = local_d8 + (lVar10 - (ulonglong)(iVar9 != 0));
      _guard_xfg_dispatch_icall_nop(puVar11,_Src,(longlong)iVar5 * 2);
      puVar11[iVar5] = 0;
    }
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  FUN_14119bea0(param_2,0);
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  puVar6 = (undefined8 *)FName::ToString(param_1,local_40);
  plVar7 = (longlong *)FPaths::ProjectContentDir(local_50);
  iVar5 = *(int *)(puVar6 + 1) + -1;
  if (*(int *)(puVar6 + 1) == 0) {
    iVar5 = 0;
  }
  if (((int)plVar7[1] != 0) || (iVar9 = 2, iVar5 == -1)) {
    iVar9 = 1;
  }
  local_e8 = *plVar7;
  *plVar7 = 0;
  local_e0._0_4_ = (int)plVar7[1];
  local_e0._4_4_ = *(int *)((longlong)plVar7 + 0xc);
  plVar7[1] = 0;
  if (local_e0._4_4_ < iVar5 + iVar9 + (int)local_e0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8);
  }
  FString::PathAppend(&local_e8,*puVar6,iVar5);
  iVar5 = local_e0._4_4_;
  local_a0 = (int)local_e0;
  local_a8 = local_e8;
  iVar9 = (int)local_e0 + (0x13 - (uint)((int)local_e0 != 0));
  local_e8 = 0;
  local_9c = local_e0._4_4_;
  local_e0 = 0;
  if (iVar5 < iVar9) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8);
  }
  FString::PathAppend(&local_a8,L"Config/OakDLC.ini",0x11);
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  if (DAT_1468b6148 != 0) {
    puVar11 = &DAT_143f3eda8;
    if (iVar13 != 0) {
      puVar11 = puVar12;
    }
    iVar5 = FConfigCacheIni::GetArray(DAT_1468b6148,puVar11,L"TestMapList",&local_c8,&local_a8);
    if (iVar5 != 0) {
      plVar14 = local_c8 + (longlong)(int)local_c0 * 2;
      for (plVar7 = local_c8; plVar7 != plVar14; plVar7 = plVar7 + 2) {
        FText::FText(local_88);
        local_70 = 0;
        local_68 = 0;
        local_98 = 0;
        local_90 = 0;
        if ((int)plVar7[1] == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*plVar7;
        }
        uVar8 = FUN_1414d6b80();
        FUN_14171d9a0(uVar8,puVar11,local_88,0,0,0,&local_98,1);
        if (local_98 != 0) {
          FMemory::Free();
        }
        cVar4 = FUN_1416f0740(&local_70,0,0);
        if (cVar4 != '\0') {
          iVar5 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar5 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
          }
          lVar10 = *param_2 + (longlong)iVar5 * 0x28;
          FText::FText(lVar10,local_88);
          FString::FString(lVar10 + 0x18,&local_70);
        }
        if (local_70 != 0) {
          FMemory::Free();
        }
        plVar3 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_80)(local_80);
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
    }
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  plVar7 = local_c8;
  for (iVar5 = (int)local_c0; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  return;
}



// FUNCTION 14119c770 FUN_14119c770 body=244 status=ok
// SIG undefined FUN_14119c770(void)

void FUN_14119c770(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_38 [32];
  undefined1 local_18;
  
  if (param_2 != 0) {
    lVar4 = FUN_142f1c0a0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      if (((*(longlong *)(param_1 + 8) == 0) ||
          (*(longlong *)(*(longlong *)(param_1 + 8) + 0xd8) == 0)) ||
         (cVar2 = FUN_1409aecc0(param_2), cVar2 != '\x02')) {
        bVar6 = *(char *)(param_1 + 0x30) != '\0';
        local_18 = 0;
        if (bVar6) {
          FUN_140675ca0(local_38,param_1 + 0x10);
        }
        local_18 = bVar6;
        uVar3 = FUN_1409aecc0(param_2);
        uVar1 = *(undefined4 *)(param_1 + 0x38);
        uVar5 = *(undefined8 *)(param_1 + 8);
      }
      else {
        bVar6 = *(char *)(param_1 + 0x60) != '\0';
        local_18 = 0;
        if (bVar6) {
          FUN_140675ca0(local_38,param_1 + 0x40);
        }
        local_18 = bVar6;
        uVar3 = FUN_1409aecc0(param_2);
        uVar1 = *(undefined4 *)(param_1 + 0x68);
        uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xd8);
      }
      FUN_1411a1b00(*(undefined8 *)(param_1 + 0x70),uVar5,local_38,uVar1,uVar3);
    }
  }
  return;
}



// FUNCTION 14119c870 FUN_14119c870 body=244 status=ok
// SIG undefined FUN_14119c870(void)

void FUN_14119c870(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_38 [32];
  undefined1 local_18;
  
  if (param_2 != 0) {
    lVar4 = FUN_142f1c0a0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      if (((*(longlong *)(param_1 + 8) == 0) ||
          (*(longlong *)(*(longlong *)(param_1 + 8) + 0xd8) == 0)) ||
         (cVar2 = FUN_1409aecc0(param_2), cVar2 != '\x02')) {
        bVar6 = *(char *)(param_1 + 0x30) != '\0';
        local_18 = 0;
        if (bVar6) {
          FUN_140675d60(local_38,param_1 + 0x10);
        }
        local_18 = bVar6;
        uVar3 = FUN_1409aecc0(param_2);
        uVar1 = *(undefined4 *)(param_1 + 0x3c);
        uVar5 = *(undefined8 *)(param_1 + 8);
      }
      else {
        bVar6 = *(char *)(param_1 + 0x60) != '\0';
        local_18 = 0;
        if (bVar6) {
          FUN_140675d60(local_38,param_1 + 0x40);
        }
        local_18 = bVar6;
        uVar3 = FUN_1409aecc0(param_2);
        uVar1 = *(undefined4 *)(param_1 + 0x68);
        uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xd8);
      }
      FUN_1411a2200(*(undefined8 *)(param_1 + 0x70),uVar5,local_38,uVar1,uVar3);
    }
  }
  return;
}



// FUNCTION 14119c970 FUN_14119c970 body=92 status=ok
// SIG undefined FUN_14119c970(void)

void FUN_14119c970(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00014119c9c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,
             *(undefined4 *)(param_1 + 0x20));
  return;
}



// FUNCTION 14119c9d0 Execute body=52 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,USocialChatChannel,TTypeWrapper<void>___cdecl(TSharedRef<FSocialChatMessage,0>_const_&),USocialChatChannel_*>
     ::Execute(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00014119ca01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            (uVar1,param_2,*(undefined8 *)(param_1 + 0x18),*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 14119ca10 FUN_14119ca10 body=20 status=ok
// SIG undefined FUN_14119ca10(void)

undefined1 FUN_14119ca10(longlong param_1)

{
  FUN_14118a030(param_1 + 8);
  return 1;
}



// FUNCTION 14119ca30 FUN_14119ca30 body=20 status=ok
// SIG undefined FUN_14119ca30(void)

undefined1 FUN_14119ca30(longlong param_1)

{
  FUN_14118b860(param_1 + 8);
  return 1;
}



// FUNCTION 14119ca50 FUN_14119ca50 body=246 status=ok
// SIG undefined FUN_14119ca50(void)

undefined8 FUN_14119ca50(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_38 [32];
  undefined1 local_18;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar4 = FUN_142f1c0a0();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
      != lVar4 + 0x88)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar6) {
    if (((*(longlong *)(param_1 + 8) == 0) ||
        (*(longlong *)(*(longlong *)(param_1 + 8) + 0xd8) == 0)) ||
       (cVar2 = FUN_1409aecc0(param_2), cVar2 != '\x02')) {
      bVar6 = *(char *)(param_1 + 0x30) != '\0';
      local_18 = 0;
      if (bVar6) {
        FUN_140675ca0(local_38,param_1 + 0x10);
      }
      local_18 = bVar6;
      uVar3 = FUN_1409aecc0(param_2);
      uVar1 = *(undefined4 *)(param_1 + 0x38);
      uVar5 = *(undefined8 *)(param_1 + 8);
    }
    else {
      bVar6 = *(char *)(param_1 + 0x60) != '\0';
      local_18 = 0;
      if (bVar6) {
        FUN_140675ca0(local_38,param_1 + 0x40);
      }
      local_18 = bVar6;
      uVar3 = FUN_1409aecc0(param_2);
      uVar1 = *(undefined4 *)(param_1 + 0x68);
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xd8);
    }
    FUN_1411a1b00(*(undefined8 *)(param_1 + 0x70),uVar5,local_38,uVar1,uVar3);
    return 1;
  }
  return 1;
}



// FUNCTION 14119cb50 FUN_14119cb50 body=246 status=ok
// SIG undefined FUN_14119cb50(void)

undefined8 FUN_14119cb50(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_38 [32];
  undefined1 local_18;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar4 = FUN_142f1c0a0();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
      != lVar4 + 0x88)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar6) {
    if (((*(longlong *)(param_1 + 8) == 0) ||
        (*(longlong *)(*(longlong *)(param_1 + 8) + 0xd8) == 0)) ||
       (cVar2 = FUN_1409aecc0(param_2), cVar2 != '\x02')) {
      bVar6 = *(char *)(param_1 + 0x30) != '\0';
      local_18 = 0;
      if (bVar6) {
        FUN_140675d60(local_38,param_1 + 0x10);
      }
      local_18 = bVar6;
      uVar3 = FUN_1409aecc0(param_2);
      uVar1 = *(undefined4 *)(param_1 + 0x3c);
      uVar5 = *(undefined8 *)(param_1 + 8);
    }
    else {
      bVar6 = *(char *)(param_1 + 0x60) != '\0';
      local_18 = 0;
      if (bVar6) {
        FUN_140675d60(local_38,param_1 + 0x40);
      }
      local_18 = bVar6;
      uVar3 = FUN_1409aecc0(param_2);
      uVar1 = *(undefined4 *)(param_1 + 0x68);
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xd8);
    }
    FUN_1411a2200(*(undefined8 *)(param_1 + 0x70),uVar5,local_38,uVar1,uVar3);
    return 1;
  }
  return 1;
}



// FUNCTION 14119cc50 FUN_14119cc50 body=117 status=ok
// SIG undefined FUN_14119cc50(void)

bool FUN_14119cc50(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,
               *(undefined4 *)(param_1 + 0x20));
  }
  return lVar1 != 0;
}



// FUNCTION 14119ccd0 ExecuteIfSafe body=95 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,USocialChatChannel,void___cdecl(TSharedRef<FSocialChatMessage,0>_const_&),USocialChatChannel_*>
::ExecuteIfSafe(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,*(undefined8 *)(param_1 + 0x18));
    return 1;
  }
  return 0;
}



// FUNCTION 14119cd30 FUN_14119cd30 body=190 status=ok
// SIG undefined FUN_14119cd30(void)

void FUN_14119cd30(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x50) == '\0')) {
    lVar3 = FWeakObjectPtr::Get(lVar1 + 0x58c);
    if (lVar3 != 0) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (*(longlong *)(lVar3 + 0x528) != 0)) {
        lVar3 = FWeakObjectPtr::Get(lVar1 + 0x58c);
        FUN_1426d7aa0(*(undefined8 *)(lVar3 + 0x528),lVar1 + 0x9e0,*(undefined4 *)(lVar1 + 0xfe0));
      }
    }
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe;
  }
  return;
}



// FUNCTION 14119cdf0 FUN_14119cdf0 body=474 status=ok
// SIG undefined FUN_14119cdf0(void)

undefined1 FUN_14119cdf0(longlong param_1,undefined4 param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  char local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  char local_10;
  
  cVar5 = FUN_142ebd930();
  if (cVar5 == '\0') {
    plVar4 = (longlong *)param_3[2];
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
    uVar6 = 0;
  }
  else {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
    if ((cVar5 != '\0') &&
       (lVar7 = FWeakObjectPtr::Get(param_1 + 0x59c), *(char *)(lVar7 + 0xb8) == '\x01')) {
      local_50 = *param_3;
      local_48 = param_3[1];
      local_40 = param_3[2];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      uVar6 = FUN_142eb4830(param_1,param_2,&local_50,param_4);
      FKey::~FKey(param_3);
      return uVar6;
    }
    if (param_4 == 0) {
      FName::FName(&local_38,&DAT_143f3eda8,1);
      cVar5 = '\0';
      local_30 = 0xffffffff;
      local_2c = cVar5;
      FName::FName(local_28,&DAT_143f3eda8,1);
      local_38 = DAT_146b3e2a0;
      local_20 = 0;
      plStack_18 = (longlong *)0x0;
      local_30 = param_2;
      local_2c = cVar5;
      local_10 = cVar5;
      cVar5 = FUN_142ec6030(param_1 + 0x4d8,&local_38);
      if ((((cVar5 == '\0') && (*(int *)(param_1 + 0x680) == 0)) && (local_2c == '\0')) &&
         (cVar5 = FUN_14118c120(local_58,&local_38), cVar5 != '\0')) {
        FUN_14119ed60(param_1,local_30);
      }
      plVar4 = plStack_18;
      if (plStack_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_18 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_18)(plStack_18);
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
    FKey::~FKey(param_3);
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 14119cfd0 FUN_14119cfd0 body=709 status=ok
// SIG undefined FUN_14119cfd0(void)

void FUN_14119cfd0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  void *_Src;
  int iVar9;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (((DAT_1468b616c == '\0') && ((*(uint *)(param_1 + 8) >> 4 & 1) == 0)) &&
     (iVar9 = *(int *)(param_1 + 0x48) + -1, -1 < iVar9)) {
    lVar7 = (longlong)iVar9;
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x40) + lVar7 * 8);
    do {
      if (*(char *)(*plVar8 + 0x30) == '\x1a') {
        if (iVar9 == -1) {
          return;
        }
        uVar5 = GetTransientPackage();
        FUN_1417846f0(uVar5,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar6 = UMovieSceneSoundSetSection::GetPrivateStaticClass();
        lVar7 = FUN_1417985e0(uVar6,uVar5,0,0,0,0,0,0,0);
        *(undefined2 *)(lVar7 + 0x30) = 0x21b;
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_68,L"Cross-Play",L"UOptionDescriptionData",
                           L"CrossplayState_OptionItemName");
        FText::operator=(lVar7 + 0x38,uVar5);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_60 + 1;
          lVar4 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_50,L"Cross-Play",L"UOptionDescriptionData",
                           L"CrossplayState_OptionDescriptionTitle");
        FText::operator=(lVar7 + 0x50,uVar5);
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_48 + 1;
          lVar4 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_38,
                           L"Toggle whether [option]matchmaking[/option] will include players from [option]other platforms[/option]. Changing this option will remove all players from your current group."
                           ,L"UOptionDescriptionData",L"CrossplayState_OptionDescriptionText");
        FText::operator=(lVar7 + 0x68,uVar5);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_30 + 1;
          lVar4 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        *(undefined2 *)(lVar7 + 0x111) = 0x101;
        *(undefined2 *)(lVar7 + 0x114) = 0x101;
        *(undefined1 *)(lVar7 + 0x117) = 1;
        *(undefined1 *)(lVar7 + 0x119) = 1;
        iVar2 = *(int *)(param_1 + 0x48);
        iVar3 = *(int *)(param_1 + 0x48);
        if (iVar9 + 1 <= *(int *)(param_1 + 0x48)) {
          iVar3 = iVar9 + 1;
        }
        *(int *)(param_1 + 0x48) = iVar2 + 1;
        if (*(int *)(param_1 + 0x4c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x40,iVar2);
        }
        _Src = (void *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 8);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar2 - iVar3) << 3);
        *(longlong *)((longlong)iVar3 * 8 + *(longlong *)(param_1 + 0x40)) = lVar7;
        return;
      }
      if (*(char *)(*plVar8 + 0x30) == '\x1b') {
        return;
      }
      iVar9 = iVar9 + -1;
      plVar8 = plVar8 + -1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  return;
}



// FUNCTION 14119d2a0 FUN_14119d2a0 body=702 status=ok
// SIG undefined FUN_14119d2a0(void)

void FUN_14119d2a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  void *_Src;
  int iVar9;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (((DAT_1468b616c == '\0') && ((*(uint *)(param_1 + 8) >> 4 & 1) == 0)) &&
     (iVar9 = *(int *)(param_1 + 0x48) + -1, -1 < iVar9)) {
    lVar7 = (longlong)iVar9;
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x40) + lVar7 * 8);
    do {
      if (*(char *)(*plVar8 + 0x30) == '\x1b') {
        if (iVar9 == -1) {
          return;
        }
        uVar5 = GetTransientPackage();
        FUN_1417846f0(uVar5,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar6 = UMovieSceneSoundSetSection::GetPrivateStaticClass();
        lVar7 = FUN_1417985e0(uVar6,uVar5,0,0,0,0,0,0,0);
        *(undefined2 *)(lVar7 + 0x30) = 0x21c;
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_68,L"Friend Sync",L"UOptionDescriptionData",
                           L"FriendSync_OptionItemName");
        FText::operator=(lVar7 + 0x38,uVar5);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_60 + 1;
          lVar4 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_50,L"Friend Sync",L"UOptionDescriptionData",
                           L"FriendSync_OptionDescriptionTitle");
        FText::operator=(lVar7 + 0x50,uVar5);
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_48 + 1;
          lVar4 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_38,
                           L"Toggle whether [option]friend sync[/option] will sync friends from [option]other platforms[/option]."
                           ,L"UOptionDescriptionData",L"FriendSync_OptionDescriptionText");
        FText::operator=(lVar7 + 0x68,uVar5);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_30 + 1;
          lVar4 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        *(undefined2 *)(lVar7 + 0x111) = 0x101;
        *(undefined2 *)(lVar7 + 0x114) = 0x101;
        *(undefined1 *)(lVar7 + 0x117) = 1;
        iVar2 = *(int *)(param_1 + 0x48);
        iVar3 = *(int *)(param_1 + 0x48);
        if (iVar9 + 1 <= *(int *)(param_1 + 0x48)) {
          iVar3 = iVar9 + 1;
        }
        *(int *)(param_1 + 0x48) = iVar2 + 1;
        if (*(int *)(param_1 + 0x4c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x40,iVar2);
        }
        _Src = (void *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 8);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar2 - iVar3) << 3);
        *(longlong *)((longlong)iVar3 * 8 + *(longlong *)(param_1 + 0x40)) = lVar7;
        return;
      }
      if (*(char *)(*plVar8 + 0x30) == '\x1c') {
        return;
      }
      iVar9 = iVar9 + -1;
      plVar8 = plVar8 + -1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  return;
}



// FUNCTION 14119d560 FUN_14119d560 body=150 status=ok
// SIG undefined FUN_14119d560(void)

char FUN_14119d560(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar2 = (int)((ulonglong)param_2 >> 0x20);
  iVar3 = (int)param_2;
  iVar1 = iVar2;
  if (iVar2 <= iVar3) {
    iVar1 = iVar3;
  }
  if (iVar3 <= iVar2) {
    iVar2 = iVar3;
  }
  fVar4 = (float)iVar1 / (float)iVar2;
  if (ABS(fVar4 - 1.7777778) <= 0.01) {
    return '\0';
  }
  if (ABS(fVar4 - 1.6) <= 0.01) {
    return '\x01';
  }
  if (ABS(fVar4 - 3.5555556) <= 0.01) {
    return '\x02';
  }
  return (0.1 < ABS(fVar4 - 2.3333333)) + '\x03';
}



// FUNCTION 14119d600 FUN_14119d600 body=159 status=ok
// SIG undefined FUN_14119d600(void)

undefined8 FUN_14119d600(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((*(longlong *)(param_1 + 0x758) != 0) && (lVar2 = FUN_14270bb10(), lVar2 != 0)) {
    cVar1 = *(char *)(*(ulonglong *)(param_1 + 0x758) + 0x908);
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        return 0xc;
      }
      if (cVar1 == '\x03') {
        return 0xe;
      }
      if (cVar1 != '\x04') {
        if (*(uint *)(lVar2 + 0x108) < 8) {
          uVar3 = (ulonglong)(byte)(&DAT_1468c21f8)[(int)*(uint *)(lVar2 + 0x108)];
        }
        else {
          uVar3 = *(ulonglong *)(param_1 + 0x758) & 0xffffffffffffff00;
        }
        cVar1 = FUN_142eeceb0(uVar3);
        if (cVar1 == '\x01') {
          return 0xc;
        }
        if (cVar1 == '\x04') {
          return 0xe;
        }
        if (cVar1 != '\x05') {
          return 10;
        }
      }
      return 0xf;
    }
  }
  return 10;
}



// FUNCTION 14119d6a0 FUN_14119d6a0 body=216 status=ok
// SIG undefined FUN_14119d6a0(void)

undefined * FUN_14119d6a0(longlong param_1,undefined *param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((*(longlong *)(param_1 + 0x758) == 0) || (lVar2 = FUN_14270bb10(), lVar2 == 0)) {
    return param_2;
  }
  cVar1 = *(char *)(*(ulonglong *)(param_1 + 0x758) + 0x908);
  if (cVar1 == '\0') {
    if (*(uint *)(lVar2 + 0x108) < 8) {
      uVar3 = (ulonglong)(byte)(&DAT_1468c21f8)[(int)*(uint *)(lVar2 + 0x108)];
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 0x758) & 0xffffffffffffff00;
    }
    cVar1 = FUN_142eeceb0(uVar3);
    if (cVar1 == '\x01') {
      return PTR_u_Layout4_1462a1520;
    }
    if (cVar1 == '\x04') {
      return PTR_u_Layout6_1462a1530;
    }
    if (cVar1 == '\x05') {
      return PTR_u_Layout5_1462a1528;
    }
  }
  else if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      return PTR_u_Layout4_1462a1520;
    }
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') {
        return param_2;
      }
      return PTR_u_Layout5_1462a1528;
    }
    return PTR_u_Layout6_1462a1530;
  }
  return PTR_u_Layout3_1462a1518;
}



// FUNCTION 14119d780 FUN_14119d780 body=297 status=ok
// SIG undefined FUN_14119d780(void)

undefined8 FUN_14119d780(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 1:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"SOUND",L"OptionsMenu",L"SoundTitleText");
    return param_2;
  case 2:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"GAMEPLAY",L"OptionsMenu",L"GameplayTitleText");
    return param_2;
  case 3:
  case 4:
  case 5:
  case 0x11:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"VISUALS",L"OptionsMenu",L"VisualsTitleText");
    return param_2;
  case 6:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"NETWORK & SOCIAL",L"OptionsMenu",L"NetworkTitleText");
    return param_2;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"CONTROLS",L"OptionsMenu",L"ControlsTitleText");
    return param_2;
  case 0x10:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"ACCESSIBILITY",L"OptionsMenu",L"AccessibilityTitleText");
    return param_2;
  default:
    uVar1 = FUN_1404b03b0();
    FText::FText(param_2,uVar1);
    return param_2;
  }
}



// FUNCTION 14119d8f0 FUN_14119d8f0 body=86 status=ok
// SIG undefined FUN_14119d8f0(void)

longlong FUN_14119d8f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14119d950 FUN_14119d950 body=311 status=ok
// SIG undefined FUN_14119d950(void)

undefined8 * FUN_14119d950(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  iVar6 = 0;
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*DAT_1469f4590 + 0x188))(DAT_1469f4590,&local_78);
  if (0 < (int)local_68) {
    do {
      local_98 = 0;
      local_90 = 0;
      puVar7 = &local_98;
      if (*(char *)(param_1 + 0x298) != '\0') {
        puVar7 = (undefined8 *)(param_1 + 0x288);
      }
      puVar2 = (undefined8 *)FUN_142480c60(local_88,iVar6);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*puVar2;
      }
      if (*(int *)(puVar7 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*puVar7;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
      if (local_88[0] != 0) {
        FMemory::Free();
      }
      if (iVar1 == 0) {
        lVar5 = (longlong)iVar6 * 0x70;
        *param_2 = CONCAT44(*(int *)(lVar5 + 0x44 + local_70) - *(int *)(lVar5 + 0x3c + local_70),
                            *(int *)(lVar5 + 0x40 + local_70) - *(int *)(lVar5 + 0x38 + local_70));
        goto LAB_14119da2b;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)local_68);
  }
  *(undefined4 *)param_2 = local_78;
  *(undefined4 *)((longlong)param_2 + 4) = local_74;
LAB_14119da2b:
  FUN_141189610(&local_70);
  return param_2;
}



// FUNCTION 14119da90 FUN_14119da90 body=1453 status=ok
// SIG undefined FUN_14119da90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14119da90(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  wchar_t *pwVar13;
  char *pcVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  undefined1 auStack_238 [32];
  ulonglong local_218;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined4 *local_1f8;
  ulonglong *puStack_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
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
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined4 local_98 [4];
  undefined1 local_88 [24];
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_218 = local_218 & 0xffffffff00000000;
  FText::FText(local_210);
  cVar5 = *(char *)(param_1 + 0x6f1);
  pwVar16 = L"Ascending";
  pwVar15 = L"ServerBrowserMenu";
  pwVar13 = L"Ascending";
  puVar12 = local_198;
  if (cVar5 == '\0') {
    pwVar16 = L"Descending";
    pwVar15 = L"ServerBrowserMenu";
    pwVar13 = L"Descending";
    puVar12 = local_1b0;
  }
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (puVar12,pwVar13,pwVar15,pwVar16);
  FText::FText(local_1c8,uVar8);
  if (((2U - (cVar5 != '\0') & 2) != 0) && (local_1a8 != (longlong *)0x0)) {
    LOCK();
    plVar6 = local_1a8 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1a8)(local_1a8);
      LOCK();
      piVar1 = (int *)((longlong)local_1a8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1a8 + 8))(local_1a8,1);
      }
    }
  }
  if ((cVar5 != '\0') && (local_190 != (longlong *)0x0)) {
    LOCK();
    plVar6 = local_190 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar1 = (int *)((longlong)local_190 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_190 + 8))(local_190,1);
      }
    }
  }
  cVar5 = *(char *)(param_1 + 0x6f0);
  if (cVar5 == '\0') {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_120,L"Players",L"ServerBrowserMenu",L"SortPlayerCount");
    FText::operator=(local_210,uVar8);
  }
  else if (cVar5 == '\x01') {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_138,L"Name",L"ServerBrowserMenu",L"SortName");
    FText::operator=(local_210,uVar8);
    local_118 = local_130;
  }
  else if (cVar5 == '\x02') {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_150,L"Level",L"ServerBrowserMenu",L"SortLevel");
    FText::operator=(local_210,uVar8);
    local_118 = local_148;
  }
  else if (cVar5 == '\x03') {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_168,L"Mission",L"ServerBrowserMenu",L"SortMission");
    FText::operator=(local_210,uVar8);
    local_118 = local_160;
  }
  else {
    if (cVar5 != '\x04') goto LAB_14119dd22;
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_180,L"Ping",L"ServerBrowserMenu",L"SortPing");
    FText::operator=(local_210,uVar8);
    local_118 = local_178;
  }
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_118 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
LAB_14119dd22:
  lVar9 = FText::FText(local_c8,local_1c8);
  local_218 = lVar9;
  lVar10 = FText::FText(local_b0,local_210);
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_f0,L"{0} {1}",L"ServerBrowserMenu",L"ToolTipFormat");
  puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_d8,uVar8);
  local_98[0] = 4;
  FText::FText(local_88,lVar10);
  local_70 = 1;
  local_68 = 4;
  FText::FText(local_58,lVar9);
  local_1f8 = local_98;
  local_40 = 1;
  puStack_1f0 = local_38;
  local_1e8 = *puVar11;
  local_1e0 = puVar11[1];
  if (local_1e0 != 0) {
    LOCK();
    *(int *)(local_1e0 + 8) = *(int *)(local_1e0 + 8) + 1;
    UNLOCK();
  }
  uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8,&local_1f8);
  uVar8 = FText::Format(local_108,&local_1e8,uVar8);
  FText::FText(param_2,uVar8);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_100 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_1d8);
  lVar9 = 2;
  pcVar14 = &stack0xfffffffffffffff0;
  do {
    lVar9 = lVar9 + -1;
    pcVar2 = pcVar14 + -0x30;
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
      plVar6 = *(longlong **)(pcVar14 + -0x40);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
    }
    pcVar14 = pcVar2;
  } while (lVar9 != 0);
  plVar6 = (longlong *)puVar11[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  plVar6 = *(longlong **)(lVar10 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  plVar6 = *(longlong **)(local_218 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_e8 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1c0 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar1 = (int *)((longlong)local_1c0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_208 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar1 = (int *)((longlong)local_208 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_208 + 8))(local_208,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14119e040 FUN_14119e040 body=243 status=ok
// SIG undefined FUN_14119e040(void)

undefined4 FUN_14119e040(void)

{
  ushort _C;
  wint_t wVar1;
  int iVar2;
  ushort *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  ushort *local_28;
  undefined8 local_20;
  
  local_28 = (ushort *)0x0;
  local_20 = 0;
  if (DAT_1468b6148 != 0) {
    FConfigCacheIni::GetString
              (DAT_1468b6148,L"Internationalization",L"Culture",&local_28,&DAT_1468e2410);
    pcVar4 = "ja";
    puVar3 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar3 = local_28;
    }
    do {
      _C = *puVar3;
      if ((_C == 0) && (*pcVar4 == '\0')) goto LAB_14119e0f1;
      if ((uint)_C != (int)*pcVar4) {
        wVar1 = towlower(_C);
        iVar2 = tolower((int)*pcVar4);
        if ((uint)wVar1 != (int)(char)iVar2) goto LAB_14119e0ed;
      }
      puVar3 = puVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while( true );
  }
LAB_14119e105:
  uVar5 = 0x41e00000;
LAB_14119e10d:
  if (local_28 != (ushort *)0x0) {
    FMemory::Free();
  }
  return uVar5;
LAB_14119e0ed:
  if ((uint)wVar1 == (int)(char)iVar2) {
LAB_14119e0f1:
    uVar5 = 0x41b00000;
    goto LAB_14119e10d;
  }
  goto LAB_14119e105;
}



// FUNCTION 14119e140 FUN_14119e140 body=787 status=ok
// SIG undefined FUN_14119e140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14119e140(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong lStack_b0;
  undefined4 *local_a8;
  ulonglong *puStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [16];
  undefined4 local_48 [2];
  undefined8 local_40;
  longlong *local_30;
  char local_20;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  switch(param_3) {
  default:
    uVar7 = FUN_1404b03b0();
    FText::FText(param_2,uVar7);
    break;
  case 3:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"BASIC",L"OptionsMenu",L"BasicTabSubtitleText");
    break;
  case 5:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"ADVANCED",L"OptionsMenu",L"AdvancedTabSubtitleText");
    break;
  case 7:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"BASIC",L"OptionsMenu",L"BasicTabSubtitleText");
    break;
  case 8:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"ADVANCED",L"OptionsMenu",L"AdvancedTabSubtitleText");
    break;
  case 9:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"KEYBOARD",L"OptionsMenu",L"ControlsKeyboardSubtitleText");
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,&DAT_1446e0a20,L"OptionsMenu",L"ControlsControllerSubtitleText");
    puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_58,uVar7);
    local_48[0] = 0;
    local_20 = '\0';
    local_40 = 0;
    local_a8 = local_48;
    local_b8 = *puVar6;
    puStack_a0 = local_18;
    lStack_b0 = puVar6[1];
    if (lStack_b0 != 0) {
      LOCK();
      *(int *)(lStack_b0 + 8) = *(int *)(lStack_b0 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_98,&local_a8);
    uVar7 = FText::Format(local_88,&local_b8,uVar7);
    FText::FText(param_2,uVar7);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_80 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_98);
    if ((local_20 != '\0') && (local_20 = '\0', local_30 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    plVar4 = (longlong *)puVar6[1];
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
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_68 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    break;
  case 0x11:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"BENCHMARK",L"OptionsMenu",L"BenchmarkTabSubtitleText");
  }
  return param_2;
}



// FUNCTION 14119e4a0 FUN_14119e4a0 body=648 status=ok
// SIG undefined FUN_14119e4a0(void)

undefined8 FUN_14119e4a0(longlong param_1,longlong *param_2,undefined1 param_3,longlong *param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  uVar13 = 0x28f0;
  if (*(char *)(param_1 + 0x2b4) == '\0') {
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar7 = *param_4;
      goto LAB_14119e70c;
    }
    UGameUserSettings::GetFullscreenMode();
  }
  uVar9 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_68 = 0;
  uStack_60 = 0;
  (**(code **)(*DAT_1469f4590 + 0x188))(DAT_1469f4590,local_b8);
  uVar12 = uVar9;
  if (0 < (int)local_a8) {
    do {
      if ((int)param_4[1] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*param_4;
      }
      if (*(int *)(uVar9 + 8 + local_b0) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = *(undefined2 **)(uVar9 + local_b0);
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar8);
      if (iVar3 == 0) {
        lVar7 = (longlong)(int)uVar12 * 0x70;
        uVar13 = *(int *)(lVar7 + 0x44 + local_b0) - *(int *)(lVar7 + 0x3c + local_b0);
        break;
      }
      uVar11 = (int)uVar12 + 1;
      uVar9 = uVar9 + 0x70;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)local_a8);
  }
  FUN_141189610(&local_b0);
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  plVar4 = (longlong *)FString::FString(local_58,param_4);
  lVar7 = *DAT_146ab6358;
  uVar5 = FString::FString(local_48,plVar4);
  cVar2 = (**(code **)(lVar7 + 0x418))(DAT_146ab6358,&local_c8,param_3,uVar5);
  if (*plVar4 != 0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    puVar1 = local_c8 + (longlong)(int)local_c0 * 3;
    puVar10 = local_c8;
    if (local_c8 != puVar1) {
      do {
        if (((puVar10[1] <= uVar13) && (0x2cf < puVar10[1])) && (0x4ff < *puVar10)) {
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
          }
          lVar7 = *param_2;
          *(undefined8 *)(lVar7 + (longlong)iVar3 * 0xc) = *(undefined8 *)puVar10;
          *(uint *)(lVar7 + 8 + (longlong)iVar3 * 0xc) = puVar10[2];
        }
        puVar10 = puVar10 + 3;
      } while (puVar10 != puVar1);
    }
    if ((int)param_2[1] == 0) {
      puVar1 = local_c8 + (longlong)(int)local_c0 * 3;
      for (puVar10 = local_c8; puVar10 != puVar1; puVar10 = puVar10 + 3) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        lVar7 = *param_2;
        *(undefined8 *)(lVar7 + (longlong)iVar3 * 0xc) = *(undefined8 *)puVar10;
        *(uint *)(lVar7 + 8 + (longlong)iVar3 * 0xc) = puVar10[2];
      }
    }
    if (local_c8 != (uint *)0x0) {
      FMemory::Free(local_c8);
    }
    if (*param_4 != 0) {
      FMemory::Free();
    }
    return 1;
  }
  if (local_c8 != (uint *)0x0) {
    FMemory::Free();
  }
  lVar7 = *param_4;
LAB_14119e70c:
  if (lVar7 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 14119e730 FUN_14119e730 body=664 status=ok
// SIG undefined FUN_14119e730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14119e730(undefined8 param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong lStack_b0;
  undefined4 *local_a8;
  ulonglong *puStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [16];
  undefined4 local_48 [2];
  undefined8 local_40;
  longlong *local_30;
  char local_20;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (param_2 == 1) {
    pwVar10 = L"FeaturedText";
    pwVar9 = L"GFxStoreMenu";
    pwVar8 = L"Featured";
  }
  else {
    if (param_2 == 2) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_70,
                         L"{0}|platform(default=Add-on, xbox=Add-on, playstation=Add-on, stadia=Add-on)"
                         ,L"GFxStoreMenu",L"ExpansionsText");
      puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_58,uVar6);
      local_48[0] = 0;
      local_20 = '\0';
      local_40 = 0;
      local_a8 = local_48;
      local_b8 = *puVar7;
      puStack_a0 = local_18;
      lStack_b0 = puVar7[1];
      if (lStack_b0 != 0) {
        LOCK();
        *(int *)(lStack_b0 + 8) = *(int *)(lStack_b0 + 8) + 1;
        UNLOCK();
      }
      uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_98,&local_a8);
      uVar6 = FText::Format(local_88,&local_b8,uVar6);
      FText::FText(param_1,uVar6);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_80 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_98);
      if ((local_20 != '\0') && (local_20 = '\0', local_30 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_30 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
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
      if (local_68 == (longlong *)0x0) {
        return param_1;
      }
      LOCK();
      plVar4 = local_68 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 != 1) {
        return param_1;
      }
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return param_1;
      }
      (**(code **)(*local_68 + 8))(local_68,1);
      return param_1;
    }
    if (param_2 == 3) {
      pwVar10 = L"CustomizationsText";
      pwVar9 = L"GFxStoreMenu";
      pwVar8 = L"Customizations";
    }
    else {
      if (param_2 != 4) {
        uVar6 = FUN_1404b03b0();
        FText::FText(param_1,uVar6);
        return param_1;
      }
      pwVar10 = L"PurchasedText";
      pwVar9 = L"GFxStoreMenu";
      pwVar8 = L"Purchased";
    }
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1,pwVar8,pwVar9,pwVar10);
  return param_1;
}



// FUNCTION 14119e9d0 IsDynamicResolutionEnabled body=5 status=ok
// SIG undefined IsDynamicResolutionEnabled(void)

undefined1 UGameUserSettings::IsDynamicResolutionEnabled(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



// FUNCTION 14119e9f0 FUN_14119e9f0 body=617 status=ok
// SIG undefined FUN_14119e9f0(void)

void FUN_14119e9f0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_14119b780();
  uVar3 = *param_2;
  iVar9 = (int)((ulonglong)uVar3 >> 0x20);
  iVar8 = iVar9 + (int)uVar3;
  if (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x1c4)) {
    lVar7 = *(longlong *)(param_1 + 0x1d0);
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      lVar7 = param_1 + 0x1c8;
    }
    iVar6 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & (longlong)iVar8) * 4);
    if (iVar6 != -1) {
      lVar4 = *(longlong *)(param_1 + 400);
      do {
        if (*(int *)(lVar4 + (longlong)iVar6 * 0x18) == iVar8) {
          if (iVar6 != -1) {
            iVar9 = iVar9 + (int)uVar3;
            iVar8 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & (longlong)iVar9) *
                                     4);
            if (iVar8 == -1) goto LAB_14119eade;
            goto LAB_14119eac0;
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  goto LAB_14119ebd5;
  while (iVar8 = *(int *)(lVar7 + 0x10), iVar8 != -1) {
LAB_14119eac0:
    lVar7 = lVar4 + (longlong)iVar8 * 0x18;
    if (*(int *)(lVar4 + (longlong)iVar8 * 0x18) == iVar9) {
      if (iVar8 != -1) goto LAB_14119eae0;
      break;
    }
  }
LAB_14119eade:
  lVar7 = 0;
LAB_14119eae0:
  lVar7 = *(longlong *)(lVar7 + 8);
  FUN_142ee98f0(local_28,param_2,*(undefined8 *)(param_1 + 0x188),
                CONCAT71((int7)((ulonglong)uVar3 >> 8),2),0xbf800000);
  plVar5 = *(longlong **)(lVar7 + 0x170);
  if ((plVar5 != (longlong *)0x0) && (*(longlong *)(lVar7 + 0x178) != 0)) {
    (**(code **)(*plVar5 + 0x2b0))(plVar5,param_3,1,0);
    (**(code **)(**(longlong **)(lVar7 + 0x178) + 0x2b0))
              (*(longlong **)(lVar7 + 0x178),local_28,1,0);
  }
  local_38[0] = 0;
  local_38[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"Edit",10);
  FUN_142088cf0(lVar7,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
LAB_14119ebd5:
  plVar5 = (longlong *)param_2[2];
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
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_3 + 8);
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
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 14119ec60 FUN_14119ec60 body=242 status=ok
// SIG undefined FUN_14119ec60(void)

void FUN_14119ec60(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (param_2 != *(int *)(param_1 + 0x680)) {
    *(int *)(param_1 + 0x680) = param_2;
    lVar1 = FUN_140f9aee0();
    if (lVar1 != 0) {
      FUN_140bec3d0(lVar1,*(int *)(param_1 + 0x680) - 1U < 2);
    }
    if (*(int *)(param_1 + 0x680) == 3) {
      FWeakObjectPtr::operator=(&local_res8,param_1);
      local_28 = 0;
      local_18 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444f8920;
        puVar2[1] = param_1;
        *(undefined4 *)(puVar2 + 2) = local_res8;
        *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
      }
      local_58[0] = &LAB_141190e90;
      FUN_14208c4f0(param_1,local_58);
    }
    FUN_1411bd7d0(param_1);
    return;
  }
  return;
}



// FUNCTION 14119ed60 FUN_14119ed60 body=934 status=ok
// SIG undefined FUN_14119ed60(void)

void FUN_14119ed60(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  code *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  
  bVar4 = false;
  bVar3 = false;
  FUN_1404cf890(&local_b8,0);
  plVar8 = local_b8;
  if (local_b8 == (longlong *)0x0) goto LAB_14119f0a4;
  (**(code **)(*local_b8 + 0x58))(local_b8,&local_a8,param_2);
  if (local_a8 == 0) {
LAB_14119ee45:
    bVar5 = false;
  }
  else {
    local_78 = local_a8;
    plStack_70 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
      UNLOCK();
      plVar8 = local_b8;
    }
    bVar4 = true;
    bVar3 = false;
    iVar7 = (**(code **)(*plVar8 + 0x78))(plVar8,&local_78);
    if (iVar7 == 0) goto LAB_14119ee45;
    local_88 = local_a8;
    plStack_80 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
      UNLOCK();
      plVar8 = local_b8;
    }
    bVar4 = true;
    bVar3 = true;
    cVar6 = (**(code **)(*plVar8 + 0xa8))(plVar8,&local_88);
    if (cVar6 != '\0') goto LAB_14119ee45;
    bVar5 = true;
  }
  plVar8 = plStack_80;
  if ((bVar3) && (plStack_80 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = plStack_70;
  if ((bVar4) && (plStack_70 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (bVar5) {
    local_68 = local_a8;
    plStack_60 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
      UNLOCK();
    }
    FUN_1411ac580(param_1,&local_68,param_2);
    local_90 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_60 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          lVar9 = *local_90;
LAB_14119f065:
          (**(code **)(lVar9 + 8))(local_90,1);
        }
      }
    }
  }
  else {
    FUN_1404cf890(&local_98,0);
    if (local_98 != (longlong *)0x0) {
      uStack_50 = 0;
      local_c8 = (longlong *)0x0;
      local_58 = FUN_1411aa0c0;
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      local_c0 = 3;
      local_c8 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_143ff7778;
        FWeakObjectPtr::operator=(plVar8 + 1,param_1);
        plVar8[2] = (longlong)local_58;
        plVar8[3] = CONCAT44(uStack_4c,uStack_50);
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar9;
        *plVar8 = (longlong)&PTR_FUN_143ff77c0;
      }
      puVar10 = (undefined8 *)(**(code **)(*local_98 + 0x10))(local_98,local_48,param_2,&local_c8);
      *(undefined8 *)(param_1 + 0x6d8) = *puVar10;
      if (local_c0 == 0) {
LAB_14119f018:
        if (local_c8 != (longlong *)0x0) {
          FMemory::Free(local_c8);
        }
      }
      else if (local_c8 != (longlong *)0x0) {
        (**(code **)(*local_c8 + 0x28))(local_c8,0);
        if (local_c8 != (longlong *)0x0) {
          local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
        }
        local_c0 = 0;
        goto LAB_14119f018;
      }
      (**(code **)(*local_98 + 0x50))(local_98,param_2);
    }
    plVar8 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          lVar9 = *local_90;
          goto LAB_14119f065;
        }
      }
    }
  }
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_a0 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plStack_a0 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
      }
    }
  }
LAB_14119f0a4:
  plVar8 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  return;
}



// FUNCTION 14119f110 FUN_14119f110 body=207 status=ok
// SIG undefined FUN_14119f110(void)

void FUN_14119f110(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((((*(char *)(param_1 + 0x4c0) != '\0') && (*(char *)(param_1 + 0x621) != '\0')) &&
      (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x58c), cVar2 != '\0')) &&
     ((lVar4 = FWeakObjectPtr::Get(param_1 + 0x58c), *(longlong *)(lVar4 + 0x488) == 0 &&
      (lVar4 = FWeakObjectPtr::Get(param_1 + 0x58c), lVar4 != 0)))) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (cVar2 = FUN_140d01b90(lVar4), cVar2 == '\0')) &&
       ((iVar3 = FUN_140cfc820(lVar4), iVar3 == 0 && (*(char *)(lVar4 + 0x1a04) != '\x02')))) {
      FUN_1411b26b0(param_1,lVar4);
    }
  }
  return;
}



// FUNCTION 14119f1e0 FUN_14119f1e0 body=395 status=ok
// SIG undefined FUN_14119f1e0(void)

void FUN_14119f1e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
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
  
  plVar1 = (longlong *)(param_1 + 400);
  iVar2 = *(int *)(param_1 + 0x1b8);
  puStack_28 = (uint *)(param_1 + 0x1a0);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x1b0);
    if (*(uint **)(param_1 + 0x1b0) == (uint *)0x0) {
      puVar7 = puStack_28;
    }
    uVar5 = *puVar7;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar5 = local_78 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar5;
      if (bVar3) goto LAB_14119f29f;
      uVar5 = puVar7[lVar6 + 1];
    }
    uStack_74 = -uVar5 & uVar5;
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
    if (iVar2 < local_68._4_4_) {
LAB_14119f29f:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < *(int *)(param_1 + 0x1b8);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      lVar6 = *(longlong *)(*plVar1 + 8 + (longlong)iStack_5c * 0x18);
      if (lVar6 != 0) {
        FUN_1411b6b40(lVar6,0);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 14119f370 FUN_14119f370 body=89 status=ok
// SIG undefined FUN_14119f370(void)

void FUN_14119f370(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x178) != 0)) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,1,0);
    (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2b0))
              (*(longlong **)(param_1 + 0x178),param_3,1,0);
  }
  return;
}



// FUNCTION 14119f3d0 FUN_14119f3d0 body=8012 status=ok
// SIG undefined FUN_14119f3d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14119f3d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_638 [32];
  longlong **local_618;
  undefined1 local_608 [8];
  longlong *local_600;
  undefined8 local_5f8;
  longlong *local_5e8;
  longlong *plStack_5e0;
  longlong local_5d8;
  int local_5d0 [2];
  longlong local_5c8;
  longlong local_5c0;
  undefined8 local_5b8;
  longlong local_5b0;
  undefined8 local_5a8;
  longlong local_5a0;
  undefined4 local_598;
  undefined4 local_594;
  longlong local_590;
  undefined4 local_588;
  undefined4 local_584;
  longlong *local_580;
  undefined8 local_578;
  longlong *local_570;
  undefined8 local_568;
  longlong local_560;
  undefined8 local_558;
  longlong local_550;
  undefined8 local_548;
  longlong local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined1 local_4f0 [8];
  undefined8 local_4e8;
  longlong *local_4e0;
  int local_4d8;
  longlong *local_4d0;
  int local_4c8;
  longlong *local_4c0;
  int local_4b8;
  longlong *local_4b0;
  int local_4a8;
  longlong *local_4a0;
  int local_498;
  int *local_490;
  longlong *local_488;
  undefined8 local_480;
  longlong *local_478;
  longlong *plStack_470;
  longlong *local_468;
  longlong *plStack_460;
  longlong *local_458;
  longlong *plStack_450;
  longlong *local_448;
  longlong *plStack_440;
  longlong *local_438;
  longlong *plStack_430;
  longlong *local_428;
  longlong *plStack_420;
  undefined1 local_418 [16];
  longlong *local_408;
  longlong *plStack_400;
  undefined1 local_3f8 [16];
  longlong *local_3e8;
  longlong *plStack_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [8];
  longlong *local_3c0;
  undefined1 local_3b0 [16];
  longlong *local_3a0;
  longlong *local_398;
  int local_390;
  undefined1 local_388 [16];
  longlong *local_378;
  longlong *local_370;
  int local_368;
  undefined1 local_360 [16];
  longlong *local_350;
  longlong *local_348;
  int local_340;
  undefined1 local_338 [16];
  longlong *local_328;
  longlong *local_320;
  int local_318;
  undefined1 local_310 [16];
  longlong *local_300;
  longlong *local_2f8;
  int local_2f0;
  undefined1 local_2e8 [16];
  longlong *local_2d8;
  longlong *local_2d0;
  int local_2c8;
  undefined1 local_2c0 [40];
  undefined1 local_298 [40];
  undefined1 local_270 [40];
  undefined1 local_248 [40];
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  longlong local_200 [3];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0 [53];
  
  local_1d0[0x32] = DAT_1468387a8 ^ (ulonglong)auStack_638;
  local_5c8 = param_1;
  TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>::
  Empty(param_1 + 400,0);
  local_5a8 = 0xe;
  local_5b0 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5b0,0);
  FGenericPlatformString::Memcpy(local_5b0,L"ButtonsLayout",0x1c);
  FUN_142088910(param_1,&local_5b0);
  if (local_5b0 != 0) {
    FMemory::Free();
  }
  local_600 = (longlong *)0x0;
  local_5f8 = 1;
  plVar4 = (longlong *)FUN_14118abd0(local_608,local_3b0,&DAT_1469ea498);
  TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,0);
  *local_600 = *plVar4;
  local_600[1] = plVar4[1];
  local_600[2] = plVar4[2];
  plVar4[2] = 0;
  plVar4[1] = 0;
  local_600[3] = 0;
  local_600[3] = plVar4[3];
  plVar4[3] = 0;
  *(int *)(local_600 + 4) = (int)plVar4[4];
  *(undefined4 *)((longlong)local_600 + 0x24) = *(undefined4 *)((longlong)plVar4 + 0x24);
  plVar4[4] = 0;
  plVar4 = local_398;
  for (; local_390 != 0; local_390 = local_390 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_398 != (longlong *)0x0) {
    FMemory::Free(local_398);
  }
  if (local_3a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_3a0 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_3a0)(local_3a0);
      LOCK();
      piVar1 = (int *)((longlong)local_3a0 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_3a0 + 8))(local_3a0,1);
      }
    }
  }
  plVar4 = (longlong *)FUN_14118abd0(local_608,local_388,&DAT_1469ea4e0);
  uVar14 = local_5f8;
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar7);
  if (local_5f8._4_4_ < iVar7) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14 & 0xffffffff);
  }
  local_600[lVar8 * 5] = *plVar4;
  local_600[lVar8 * 5 + 1] = plVar4[1];
  local_600[lVar8 * 5 + 2] = plVar4[2];
  plVar4[2] = 0;
  plVar4[1] = 0;
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = plVar4[3];
  plVar4[3] = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[4];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0x24);
  plVar4[4] = 0;
  plVar4 = local_370;
  for (iVar7 = local_368; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_370 != (longlong *)0x0) {
    FMemory::Free(local_370);
  }
  if (local_378 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_378 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_378)(local_378);
      LOCK();
      piVar1 = (int *)((longlong)local_378 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_378 + 8))(local_378,1);
      }
    }
  }
  plVar4 = (longlong *)FUN_14118abd0(local_608,local_360,&DAT_1469ea558);
  uVar14 = local_5f8;
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar7);
  if (local_5f8._4_4_ < iVar7) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14 & 0xffffffff);
  }
  local_600[lVar8 * 5] = *plVar4;
  local_600[lVar8 * 5 + 1] = plVar4[1];
  local_600[lVar8 * 5 + 2] = plVar4[2];
  plVar4[2] = 0;
  plVar4[1] = 0;
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = plVar4[3];
  plVar4[3] = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[4];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0x24);
  plVar4[4] = 0;
  plVar4 = local_348;
  for (iVar7 = local_340; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_348 != (longlong *)0x0) {
    FMemory::Free(local_348);
  }
  if (local_350 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_350 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_350)(local_350);
      LOCK();
      piVar1 = (int *)((longlong)local_350 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_350 + 8))(local_350,1);
      }
    }
  }
  plVar4 = (longlong *)FUN_14118abd0(local_608,local_338,&DAT_1469ea570);
  uVar14 = local_5f8;
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar7);
  if (local_5f8._4_4_ < iVar7) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14 & 0xffffffff);
  }
  local_600[lVar8 * 5] = *plVar4;
  local_600[lVar8 * 5 + 1] = plVar4[1];
  local_600[lVar8 * 5 + 2] = plVar4[2];
  plVar4[2] = 0;
  plVar4[1] = 0;
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = plVar4[3];
  plVar4[3] = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[4];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0x24);
  plVar4[4] = 0;
  plVar4 = local_320;
  for (iVar7 = local_318; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_320 != (longlong *)0x0) {
    FMemory::Free(local_320);
  }
  if (local_328 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_328 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_328)(local_328);
      LOCK();
      piVar1 = (int *)((longlong)local_328 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_328 + 8))(local_328,1);
      }
    }
  }
  plVar4 = (longlong *)FUN_14118abd0(local_608,local_310,&DAT_1469ea588);
  uVar14 = local_5f8;
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar7);
  if (local_5f8._4_4_ < iVar7) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14 & 0xffffffff);
  }
  local_600[lVar8 * 5] = *plVar4;
  local_600[lVar8 * 5 + 1] = plVar4[1];
  local_600[lVar8 * 5 + 2] = plVar4[2];
  plVar4[2] = 0;
  plVar4[1] = 0;
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = plVar4[3];
  plVar4[3] = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[4];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0x24);
  plVar4[4] = 0;
  plVar4 = local_2f8;
  for (iVar7 = local_2f0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_2f8 != (longlong *)0x0) {
    FMemory::Free(local_2f8);
  }
  if (local_300 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_300 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_300)(local_300);
      LOCK();
      piVar1 = (int *)((longlong)local_300 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_300 + 8))(local_300,1);
      }
    }
  }
  plVar4 = (longlong *)FUN_14118abd0(local_608,local_2e8,&DAT_1469ea5a0);
  uVar14 = local_5f8;
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar7);
  if (local_5f8._4_4_ < iVar7) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14 & 0xffffffff);
  }
  local_600[lVar8 * 5] = *plVar4;
  local_600[lVar8 * 5 + 1] = plVar4[1];
  local_600[lVar8 * 5 + 2] = plVar4[2];
  plVar4[2] = 0;
  plVar4[1] = 0;
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = plVar4[3];
  plVar4[3] = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[4];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0x24);
  plVar4[4] = 0;
  plVar4 = local_2d0;
  for (iVar7 = local_2c8; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_2d0 != (longlong *)0x0) {
    FMemory::Free(local_2d0);
  }
  if (local_2d8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2d8 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_2d8)(local_2d8);
      LOCK();
      piVar1 = (int *)((longlong)local_2d8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_2d8 + 8))(local_2d8,1);
      }
    }
  }
  local_220 = 0;
  local_218 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_220,0);
  FGenericPlatformString::Memcpy(local_220,L"Gamepad_LeftThumbstick_1",0x32);
  local_210 = 0;
  local_208 = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,0);
  FGenericPlatformString::Memcpy(local_210,L"Gamepad_LeftThumbstick_1_Line",0x3c);
  local_200[0] = 0;
  local_200[1] = 0x1c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_200,0);
  FGenericPlatformString::Memcpy(local_200[0],L"Gamepad_LeftThumbstick_Line",0x38);
  lVar15 = 3;
  local_5a0 = 0;
  local_598 = 3;
  TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_5a0,3,0);
  lVar8 = local_5a0 - (longlong)&local_220;
  puVar9 = &local_220;
  iVar13 = 3;
  iVar7 = 3;
  do {
    *(undefined8 *)(lVar8 + (longlong)puVar9) = 0;
    iVar3 = *(int *)(puVar9 + 1);
    local_5e8 = (longlong *)*puVar9;
    *(int *)(lVar8 + 8 + (longlong)puVar9) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(lVar8 + 0xc + (longlong)puVar9) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                ((undefined8 *)(lVar8 + (longlong)puVar9),iVar3,0);
      _guard_xfg_dispatch_icall_nop
                (*(void **)(lVar8 + (longlong)puVar9),local_5e8,(longlong)iVar3 * 2);
    }
    uVar14 = local_5f8;
    puVar9 = puVar9 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar7);
  if (local_5f8._4_4_ < iVar7) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14 & 0xffffffff);
  }
  local_600[lVar8 * 5] = DAT_1469ea3d8;
  local_600[lVar8 * 5 + 1] = DAT_1469ea3e0;
  lVar10 = DAT_1469ea3e8;
  local_600[lVar8 * 5 + 2] = DAT_1469ea3e8;
  if (lVar10 != 0) {
    LOCK();
    piVar1 = (int *)(lVar10 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar4 = local_200 + 2;
  local_600[lVar8 * 5 + 3] = local_5a0;
  lVar10 = 3;
  *(undefined4 *)(local_600 + lVar8 * 5 + 4) = local_598;
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) = local_594;
  do {
    plVar12 = plVar4 + -2;
    plVar4 = plVar4 + -2;
    lVar10 = lVar10 + -1;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
  } while (lVar10 != 0);
  local_200[2] = 0;
  local_1e8 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_200 + 2,0);
  FGenericPlatformString::Memcpy(local_200[2],L"Gamepad_LeftThumbstick_2",0x32);
  local_1e0 = 0;
  local_1d8 = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e0,0);
  FGenericPlatformString::Memcpy(local_1e0,L"Gamepad_LeftThumbstick_2_Line",0x3c);
  local_1d0[0] = 0;
  local_1d0[1] = 0x1c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0,0);
  FGenericPlatformString::Memcpy(local_1d0[0],L"Gamepad_LeftThumbstick_Line",0x38);
  local_590 = 0;
  local_588 = 3;
  TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_590,3,0);
  lVar8 = local_590 - (longlong)(local_200 + 2);
  plVar4 = local_200;
  do {
    plVar4 = plVar4 + 2;
    *(undefined8 *)(lVar8 + (longlong)plVar4) = 0;
    iVar7 = (int)plVar4[1];
    local_5e8 = (longlong *)*plVar4;
    *(int *)(lVar8 + 8 + (longlong)plVar4) = iVar7;
    if (iVar7 == 0) {
      *(undefined4 *)(lVar8 + 0xc + (longlong)plVar4) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                ((undefined8 *)(lVar8 + (longlong)plVar4),iVar7,0);
      _guard_xfg_dispatch_icall_nop
                (*(void **)(lVar8 + (longlong)plVar4),local_5e8,(longlong)iVar7 * 2);
    }
    uVar14 = local_5f8;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar7);
  if (local_5f8._4_4_ < iVar7) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14 & 0xffffffff);
  }
  local_600[lVar8 * 5] = DAT_1469ea3f0;
  local_600[lVar8 * 5 + 1] = DAT_1469ea3f8;
  lVar10 = DAT_1469ea400;
  local_600[lVar8 * 5 + 2] = DAT_1469ea400;
  if (lVar10 != 0) {
    LOCK();
    piVar1 = (int *)(lVar10 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar4 = local_1d0 + 2;
  local_600[lVar8 * 5 + 3] = local_590;
  lVar10 = 3;
  *(undefined4 *)(local_600 + lVar8 * 5 + 4) = local_588;
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) = local_584;
  do {
    plVar12 = plVar4 + -2;
    plVar4 = plVar4 + -2;
    lVar10 = lVar10 + -1;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
  } while (lVar10 != 0);
  local_1d0[2] = 0;
  local_1d0[3] = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 2,0);
  FGenericPlatformString::Memcpy(local_1d0[2],L"Gamepad_LeftThumbstick_3",0x32);
  local_1d0[4] = 0;
  local_1d0[5] = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 4,0);
  FGenericPlatformString::Memcpy(local_1d0[4],L"Gamepad_LeftThumbstick_3_Line",0x3c);
  local_1d0[6] = 0;
  local_1d0[7] = 0x1c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 6,0);
  FGenericPlatformString::Memcpy(local_1d0[6],L"Gamepad_LeftThumbstick_Line",0x38);
  local_5e8 = local_1d0 + 2;
  plStack_5e0 = local_1d0 + 8;
  local_478 = local_5e8;
  plStack_470 = plStack_5e0;
  plVar4 = (longlong *)
           TArray<FString,FDefaultAllocator>::TArray<FString,FDefaultAllocator>
                     (&local_4e0,&local_478);
  uVar14 = local_5f8;
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar7);
  if (local_5f8._4_4_ < iVar7) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14 & 0xffffffff);
  }
  local_600[lVar8 * 5] = DAT_1469ea468;
  local_600[lVar8 * 5 + 1] = DAT_1469ea470;
  lVar10 = DAT_1469ea478;
  local_600[lVar8 * 5 + 2] = DAT_1469ea478;
  if (lVar10 != 0) {
    LOCK();
    piVar1 = (int *)(lVar10 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = *plVar4;
  *plVar4 = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[1];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  plVar4 = local_4e0;
  for (iVar7 = local_4d8; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_4e0 != (longlong *)0x0) {
    FMemory::Free(local_4e0);
  }
  lVar8 = 3;
  plVar4 = local_1d0 + 8;
  do {
    plVar12 = plVar4 + -2;
    plVar4 = plVar4 + -2;
    lVar8 = lVar8 + -1;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
  } while (lVar8 != 0);
  local_1d0[8] = 0;
  local_1d0[9] = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 8,0);
  FGenericPlatformString::Memcpy(local_1d0[8],L"Gamepad_RightThumbstick_1",0x34);
  local_1d0[10] = 0;
  local_1d0[0xb] = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 10,0);
  FGenericPlatformString::Memcpy(local_1d0[10],L"Gamepad_RightThumbstick_1_Line",0x3e);
  local_1d0[0xc] = 0;
  local_1d0[0xd] = 0x1d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0xc,0);
  FGenericPlatformString::Memcpy(local_1d0[0xc],L"Gamepad_RightThumbstick_Line",0x3a);
  local_5e8 = local_1d0 + 8;
  plStack_5e0 = local_1d0 + 0xe;
  local_468 = local_5e8;
  plStack_460 = plStack_5e0;
  plVar4 = (longlong *)
           TArray<FString,FDefaultAllocator>::TArray<FString,FDefaultAllocator>
                     (&local_4d0,&local_468);
  uVar14 = local_5f8;
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar7);
  if (local_5f8._4_4_ < iVar7) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14 & 0xffffffff);
  }
  local_600[lVar8 * 5] = DAT_1469ea408;
  local_600[lVar8 * 5 + 1] = DAT_1469ea410;
  lVar10 = DAT_1469ea418;
  local_600[lVar8 * 5 + 2] = DAT_1469ea418;
  if (lVar10 != 0) {
    LOCK();
    piVar1 = (int *)(lVar10 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = *plVar4;
  *plVar4 = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[1];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  plVar4 = local_4d0;
  for (iVar7 = local_4c8; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_4d0 != (longlong *)0x0) {
    FMemory::Free(local_4d0);
  }
  lVar8 = 3;
  plVar4 = local_1d0 + 0xe;
  do {
    plVar12 = plVar4 + -2;
    plVar4 = plVar4 + -2;
    lVar8 = lVar8 + -1;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
  } while (lVar8 != 0);
  local_1d0[0xe] = 0;
  local_1d0[0xf] = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0xe,0);
  FGenericPlatformString::Memcpy(local_1d0[0xe],L"Gamepad_RightThumbstick_2",0x34);
  local_1d0[0x10] = 0;
  local_1d0[0x11] = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x10,0);
  FGenericPlatformString::Memcpy(local_1d0[0x10],L"Gamepad_RightThumbstick_2_Line",0x3e);
  local_1d0[0x12] = 0;
  local_1d0[0x13] = 0x1d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x12,0);
  FGenericPlatformString::Memcpy(local_1d0[0x12],L"Gamepad_RightThumbstick_Line",0x3a);
  local_5e8 = local_1d0 + 0xe;
  plStack_5e0 = local_1d0 + 0x14;
  local_458 = local_5e8;
  plStack_450 = plStack_5e0;
  plVar4 = (longlong *)
           TArray<FString,FDefaultAllocator>::TArray<FString,FDefaultAllocator>
                     (&local_4c0,&local_458);
  uVar14 = local_5f8;
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar7);
  if (local_5f8._4_4_ < iVar7) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14 & 0xffffffff);
  }
  local_600[lVar8 * 5] = DAT_1469ea420;
  local_600[lVar8 * 5 + 1] = DAT_1469ea428;
  lVar10 = DAT_1469ea430;
  local_600[lVar8 * 5 + 2] = DAT_1469ea430;
  if (lVar10 != 0) {
    LOCK();
    piVar1 = (int *)(lVar10 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = *plVar4;
  *plVar4 = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[1];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  plVar4 = local_4c0;
  for (iVar7 = local_4b8; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_4c0 != (longlong *)0x0) {
    FMemory::Free(local_4c0);
  }
  lVar8 = 3;
  plVar4 = local_1d0 + 0x14;
  do {
    plVar12 = plVar4 + -2;
    plVar4 = plVar4 + -2;
    lVar8 = lVar8 + -1;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
  } while (lVar8 != 0);
  local_1d0[0x14] = 0;
  local_1d0[0x15] = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x14,0);
  FGenericPlatformString::Memcpy(local_1d0[0x14],L"Gamepad_RightThumbstick_3",0x34);
  local_1d0[0x16] = 0;
  local_1d0[0x17] = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x16,0);
  FGenericPlatformString::Memcpy(local_1d0[0x16],L"Gamepad_RightThumbstick_3_Line",0x3e);
  local_1d0[0x18] = 0;
  local_1d0[0x19] = 0x1d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x18,0);
  FGenericPlatformString::Memcpy(local_1d0[0x18],L"Gamepad_RightThumbstick_Line",0x3a);
  local_5e8 = local_1d0 + 0x14;
  plStack_5e0 = local_1d0 + 0x1a;
  local_448 = local_5e8;
  plStack_440 = plStack_5e0;
  plVar4 = (longlong *)
           TArray<FString,FDefaultAllocator>::TArray<FString,FDefaultAllocator>
                     (&local_4b0,&local_448);
  uVar14 = local_5f8;
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar7);
  if (local_5f8._4_4_ < iVar7) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14 & 0xffffffff);
  }
  local_600[lVar8 * 5] = DAT_1469ea480;
  local_600[lVar8 * 5 + 1] = DAT_1469ea488;
  lVar10 = DAT_1469ea490;
  local_600[lVar8 * 5 + 2] = DAT_1469ea490;
  if (lVar10 != 0) {
    LOCK();
    piVar1 = (int *)(lVar10 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = *plVar4;
  *plVar4 = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[1];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  plVar4 = local_4b0;
  for (iVar7 = local_4a8; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_4b0 != (longlong *)0x0) {
    FMemory::Free(local_4b0);
  }
  lVar8 = 3;
  plVar4 = local_1d0 + 0x1a;
  do {
    plVar12 = plVar4 + -2;
    plVar4 = plVar4 + -2;
    lVar8 = lVar8 + -1;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
  } while (lVar8 != 0);
  plVar4 = (longlong *)FUN_14118abd0(local_608,local_2c0,&DAT_1469ea540);
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  if (local_5f8._4_4_ < iVar7) {
    uVar14 = local_5f8 & 0xffffffff;
    local_5f8._0_4_ = iVar7;
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14);
    iVar7 = (int)local_5f8;
  }
  local_5f8._0_4_ = iVar7;
  iVar7 = (int)local_5f8;
  local_600[lVar8 * 5] = *plVar4;
  local_600[lVar8 * 5 + 1] = plVar4[1];
  local_600[lVar8 * 5 + 2] = plVar4[2];
  plVar4[2] = 0;
  plVar4[1] = 0;
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = plVar4[3];
  plVar4[3] = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[4];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0x24);
  plVar4[4] = 0;
  FUN_141189690(local_2c0);
  plVar4 = (longlong *)FUN_14118abd0(local_608,local_298,&DAT_1469ea528);
  local_5f8._0_4_ = iVar7 + 1;
  if (local_5f8._4_4_ < (int)local_5f8) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,iVar7);
  }
  iVar13 = (int)local_5f8;
  lVar8 = (longlong)iVar7;
  local_600[lVar8 * 5] = *plVar4;
  local_600[lVar8 * 5 + 1] = plVar4[1];
  local_600[lVar8 * 5 + 2] = plVar4[2];
  plVar4[2] = 0;
  plVar4[1] = 0;
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = plVar4[3];
  plVar4[3] = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[4];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0x24);
  plVar4[4] = 0;
  FUN_141189690(local_298);
  plVar4 = (longlong *)FUN_14118abd0(local_608,local_270,&DAT_1469ea510);
  local_5f8._0_4_ = iVar13 + 1;
  if (local_5f8._4_4_ < (int)local_5f8) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,iVar13);
  }
  iVar7 = (int)local_5f8;
  lVar8 = (longlong)iVar13;
  local_600[lVar8 * 5] = *plVar4;
  local_600[lVar8 * 5 + 1] = plVar4[1];
  local_600[lVar8 * 5 + 2] = plVar4[2];
  plVar4[2] = 0;
  plVar4[1] = 0;
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = plVar4[3];
  plVar4[3] = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[4];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0x24);
  plVar4[4] = 0;
  FUN_141189690(local_270);
  plVar4 = (longlong *)FUN_14118abd0(local_608,local_248,&DAT_1469ea4f8);
  local_5f8._0_4_ = iVar7 + 1;
  if (local_5f8._4_4_ < (int)local_5f8) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,iVar7);
  }
  iVar13 = (int)local_5f8;
  lVar8 = (longlong)iVar7;
  local_600[lVar8 * 5] = *plVar4;
  local_600[lVar8 * 5 + 1] = plVar4[1];
  local_600[lVar8 * 5 + 2] = plVar4[2];
  plVar4[2] = 0;
  plVar4[1] = 0;
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = plVar4[3];
  plVar4[3] = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[4];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0x24);
  plVar4[4] = 0;
  FUN_141189690(local_248);
  local_1d0[0x1a] = 0;
  local_1d0[0x1b] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x1a,0);
  FGenericPlatformString::Memcpy(local_1d0[0x1a],L"Gamepad_DPad_1",0x1e);
  local_1d0[0x1c] = 0;
  local_1d0[0x1d] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x1c,0);
  FGenericPlatformString::Memcpy(local_1d0[0x1c],L"Gamepad_DPad_1_Line",0x28);
  local_1d0[0x1e] = 0;
  local_1d0[0x1f] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x1e,0);
  FGenericPlatformString::Memcpy(local_1d0[0x1e],L"Gamepad_DPad_Line",0x24);
  local_5e8 = local_1d0 + 0x1a;
  plStack_5e0 = local_1d0 + 0x20;
  local_438 = local_5e8;
  plStack_430 = plStack_5e0;
  plVar4 = (longlong *)
           TArray<FString,FDefaultAllocator>::TArray<FString,FDefaultAllocator>
                     (&local_4a0,&local_438);
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar13 + 1);
  if (local_5f8._4_4_ < iVar13 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,iVar13);
  }
  lVar10 = (longlong)iVar13;
  local_600[lVar10 * 5] = DAT_1469ea5b8;
  local_600[lVar10 * 5 + 1] = DAT_1469ea5c0;
  lVar8 = DAT_1469ea5c8;
  local_600[lVar10 * 5 + 2] = DAT_1469ea5c8;
  if (lVar8 != 0) {
    LOCK();
    piVar1 = (int *)(lVar8 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_600[lVar10 * 5 + 3] = 0;
  local_600[lVar10 * 5 + 3] = *plVar4;
  *plVar4 = 0;
  *(int *)(local_600 + lVar10 * 5 + 4) = (int)plVar4[1];
  *(undefined4 *)((longlong)local_600 + lVar10 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  plVar4 = local_4a0;
  for (iVar7 = local_498; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_4a0 != (longlong *)0x0) {
    FMemory::Free(local_4a0);
  }
  lVar8 = 3;
  plVar4 = local_1d0 + 0x20;
  do {
    plVar12 = plVar4 + -2;
    plVar4 = plVar4 + -2;
    lVar8 = lVar8 + -1;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
  } while (lVar8 != 0);
  local_1d0[0x20] = 0;
  local_1d0[0x21] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x20,0);
  FGenericPlatformString::Memcpy(local_1d0[0x20],L"Gamepad_DPad_2",0x1e);
  local_1d0[0x22] = 0;
  local_1d0[0x23] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x22,0);
  FGenericPlatformString::Memcpy(local_1d0[0x22],L"Gamepad_DPad_4_Line",0x28);
  local_1d0[0x24] = 0;
  local_1d0[0x25] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x24,0);
  FGenericPlatformString::Memcpy(local_1d0[0x24],L"Gamepad_DPad_Line",0x24);
  local_5e8 = local_1d0 + 0x20;
  plStack_5e0 = local_1d0 + 0x26;
  local_428 = local_5e8;
  plStack_420 = plStack_5e0;
  plVar4 = (longlong *)
           TArray<FString,FDefaultAllocator>::TArray<FString,FDefaultAllocator>
                     (local_418,&local_428);
  uVar14 = local_5f8;
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar7);
  if (local_5f8._4_4_ < iVar7) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14 & 0xffffffff);
  }
  local_600[lVar8 * 5] = DAT_1469ea5d0;
  local_600[lVar8 * 5 + 1] = DAT_1469ea5d8;
  lVar10 = DAT_1469ea5e0;
  local_600[lVar8 * 5 + 2] = DAT_1469ea5e0;
  if (lVar10 != 0) {
    LOCK();
    piVar1 = (int *)(lVar10 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = *plVar4;
  *plVar4 = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[1];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_418);
  lVar8 = 3;
  plVar4 = local_1d0 + 0x26;
  do {
    plVar12 = plVar4 + -2;
    plVar4 = plVar4 + -2;
    lVar8 = lVar8 + -1;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
  } while (lVar8 != 0);
  local_1d0[0x26] = 0;
  local_1d0[0x27] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x26,0);
  FGenericPlatformString::Memcpy(local_1d0[0x26],L"Gamepad_DPad_3",0x1e);
  local_1d0[0x28] = 0;
  local_1d0[0x29] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x28,0);
  FGenericPlatformString::Memcpy(local_1d0[0x28],L"Gamepad_DPad_2_Line",0x28);
  local_1d0[0x2a] = 0;
  local_1d0[0x2b] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x2a,0);
  FGenericPlatformString::Memcpy(local_1d0[0x2a],L"Gamepad_DPad_Line",0x24);
  local_5e8 = local_1d0 + 0x26;
  plStack_5e0 = local_1d0 + 0x2c;
  local_408 = local_5e8;
  plStack_400 = plStack_5e0;
  plVar4 = (longlong *)
           TArray<FString,FDefaultAllocator>::TArray<FString,FDefaultAllocator>
                     (local_3f8,&local_408);
  uVar14 = local_5f8;
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar7);
  if (local_5f8._4_4_ < iVar7) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14 & 0xffffffff);
  }
  local_600[lVar8 * 5] = DAT_1469ea600;
  local_600[lVar8 * 5 + 1] = DAT_1469ea608;
  lVar10 = DAT_1469ea610;
  local_600[lVar8 * 5 + 2] = DAT_1469ea610;
  if (lVar10 != 0) {
    LOCK();
    piVar1 = (int *)(lVar10 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = *plVar4;
  *plVar4 = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[1];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_3f8);
  lVar8 = 3;
  plVar4 = local_1d0 + 0x2c;
  do {
    plVar12 = plVar4 + -2;
    plVar4 = plVar4 + -2;
    lVar8 = lVar8 + -1;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
  } while (lVar8 != 0);
  local_1d0[0x2c] = 0;
  local_1d0[0x2d] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x2c,0);
  FGenericPlatformString::Memcpy(local_1d0[0x2c],L"Gamepad_DPad_4",0x1e);
  local_1d0[0x2e] = 0;
  local_1d0[0x2f] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x2e,0);
  FGenericPlatformString::Memcpy(local_1d0[0x2e],L"Gamepad_DPad_3_Line",0x28);
  local_1d0[0x30] = 0;
  local_1d0[0x31] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 0x30,0);
  FGenericPlatformString::Memcpy(local_1d0[0x30],L"Gamepad_DPad_Line",0x24);
  local_5e8 = local_1d0 + 0x2c;
  plStack_5e0 = local_1d0 + 0x32;
  local_3e8 = local_5e8;
  plStack_3e0 = plStack_5e0;
  plVar4 = (longlong *)
           TArray<FString,FDefaultAllocator>::TArray<FString,FDefaultAllocator>
                     (local_3d8,&local_3e8);
  uVar14 = local_5f8;
  lVar8 = (longlong)(int)local_5f8;
  iVar7 = (int)local_5f8 + 1;
  local_5f8 = CONCAT44(local_5f8._4_4_,iVar7);
  if (local_5f8._4_4_ < iVar7) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_600,uVar14 & 0xffffffff);
  }
  local_600[lVar8 * 5] = DAT_1469ea5e8;
  local_600[lVar8 * 5 + 1] = DAT_1469ea5f0;
  lVar10 = DAT_1469ea5f8;
  local_600[lVar8 * 5 + 2] = DAT_1469ea5f8;
  if (lVar10 != 0) {
    LOCK();
    piVar1 = (int *)(lVar10 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_600[lVar8 * 5 + 3] = 0;
  local_600[lVar8 * 5 + 3] = *plVar4;
  *plVar4 = 0;
  *(int *)(local_600 + lVar8 * 5 + 4) = (int)plVar4[1];
  *(undefined4 *)((longlong)local_600 + lVar8 * 0x28 + 0x24) =
       *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_3d8);
  plVar4 = local_1d0 + 0x32;
  do {
    plVar12 = plVar4 + -2;
    plVar4 = plVar4 + -2;
    lVar15 = lVar15 + -1;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
  } while (lVar15 != 0);
  lVar8 = local_5c8;
  if (*(longlong *)(local_5c8 + 0x188) != 0) {
    plVar4 = local_600 + (longlong)(int)local_5f8 * 5;
    local_5e8 = plVar4;
    if (local_600 != plVar4) {
      local_4e8 = 0;
      plVar12 = local_600;
      do {
        local_618 = &local_580;
        local_580 = (longlong *)0x0;
        local_578 = 0;
        local_5d8 = FUN_14117b550(lVar8,plVar12[3],local_4e8,6);
        plVar11 = local_580;
        for (iVar7 = (int)local_578; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 2;
        }
        if (local_580 != (longlong *)0x0) {
          FMemory::Free(local_580);
        }
        if (local_5d8 != 0) {
          if (1 < (int)plVar12[4]) {
            local_480 = 0;
            uVar14 = (ulonglong)((int)plVar12[4] - 1);
            lVar15 = 0x10;
            do {
              local_618 = &local_570;
              local_570 = (longlong *)0x0;
              local_568 = 0;
              lVar8 = FUN_140ecbdf0(lVar8,plVar12[3] + lVar15,0,6);
              plVar4 = local_570;
              for (iVar7 = (int)local_568; iVar7 != 0; iVar7 = iVar7 + -1) {
                if (*plVar4 != 0) {
                  FMemory::Free();
                }
                plVar4 = plVar4 + 2;
              }
              if (local_570 != (longlong *)0x0) {
                FMemory::Free(local_570);
              }
              if (lVar8 != 0) {
                FUN_14118d450(local_5d8,lVar8);
              }
              lVar15 = lVar15 + 0x10;
              uVar14 = uVar14 - 1;
              plVar4 = local_5e8;
              lVar8 = local_5c8;
            } while (uVar14 != 0);
          }
          local_618 = (longlong **)CONCAT44(local_618._4_4_,0xbf800000);
          FUN_142ee98f0(local_3c8,plVar12,*(undefined8 *)(lVar8 + 0x188),2);
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
              DAT_146852c50) {
            _Init_thread_header(&DAT_146852c50);
            if (DAT_146852c50 == -1) {
              FText::FText(&DAT_146852c38,0);
              atexit(FUN_143e3e8f0);
              _Init_thread_footer(&DAT_146852c50);
            }
          }
          lVar15 = local_5d8;
          plVar11 = *(longlong **)(local_5d8 + 0x170);
          if ((plVar11 != (longlong *)0x0) && (*(longlong *)(local_5d8 + 0x178) != 0)) {
            (**(code **)(*plVar11 + 0x2b0))(plVar11,&DAT_146852c38,1,0);
            (**(code **)(**(longlong **)(lVar15 + 0x178) + 0x2b0))
                      (*(longlong **)(lVar15 + 0x178),local_3c8,1,0);
          }
          local_5d0[0] = (int)((ulonglong)*plVar12 >> 0x20) + (int)*plVar12;
          local_490 = local_5d0;
          local_488 = &local_5d8;
          FUN_1404981d0(lVar8 + 400,local_4f0,&local_490,0);
          plVar11 = local_3c0;
          if (local_3c0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_3c0 + 1;
            lVar15 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_3c0)(local_3c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
        }
        plVar12 = plVar12 + 5;
      } while (plVar12 != plVar4);
    }
  }
  local_5c0 = 0;
  local_5b8 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5c0,0);
  FGenericPlatformString::Memcpy(local_5c0,L"Gamepad_Special_Left_2",0x2e);
  local_618 = (longlong **)&local_530;
  local_530 = 0;
  local_528 = 0;
  lVar15 = FUN_14117b550(lVar8,&local_5c0,0,6);
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_530);
  if (local_5c0 != 0) {
    FMemory::Free();
  }
  if (lVar15 != 0) {
    local_560 = 0;
    local_558 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_560,0);
    FGenericPlatformString::Memcpy(local_560,L"Gamepad_Special_Left2_Line",0x36);
    local_618 = (longlong **)&local_520;
    local_520 = 0;
    local_518 = 0;
    lVar10 = FUN_140ecbdf0(lVar8,&local_560,0,6);
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_520);
    if (local_560 != 0) {
      FMemory::Free();
    }
    if (lVar10 != 0) {
      FUN_14118d450(lVar15,lVar10);
    }
    uVar5 = FUN_1404b03b0();
    uVar6 = FUN_1404b03b0();
    FUN_14119f370(lVar15,uVar6,uVar5);
    FUN_1411b6b40(lVar15,0);
  }
  local_550 = 0;
  local_548 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_550,0);
  FGenericPlatformString::Memcpy(local_550,L"Gamepad_Special_Right_2",0x30);
  local_618 = (longlong **)&local_510;
  local_510 = 0;
  local_508 = 0;
  lVar15 = FUN_14117b550(lVar8,&local_550,0,6);
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_510);
  if (local_550 != 0) {
    FMemory::Free();
  }
  if (lVar15 != 0) {
    local_540 = 0;
    local_538 = 0x1c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_540,0);
    FGenericPlatformString::Memcpy(local_540,L"Gamepad_Special_Right2_Line",0x38);
    local_618 = (longlong **)&local_500;
    local_500 = 0;
    local_4f8 = 0;
    lVar8 = FUN_140ecbdf0(lVar8,&local_540,0,6);
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_500);
    if (local_540 != 0) {
      FMemory::Free();
    }
    if (lVar8 != 0) {
      FUN_14118d450(lVar15,lVar8);
    }
    uVar5 = FUN_1404b03b0();
    uVar6 = FUN_1404b03b0();
    FUN_14119f370(lVar15,uVar6,uVar5);
    FUN_1411b6b40(lVar15,0);
  }
  plVar4 = local_600;
  for (iVar7 = (int)local_5f8; iVar7 != 0; iVar7 = iVar7 + -1) {
    FUN_141189690(plVar4);
    plVar4 = plVar4 + 5;
  }
  if (local_600 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411a1320 FUN_1411a1320 body=1143 status=ok
// SIG undefined FUN_1411a1320(void)

void FUN_1411a1320(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  FUN_1411b6170();
  if (((((*(longlong *)(param_1 + 0x80) != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
       (*(longlong *)(param_1 + 0x1c8) != 0)) &&
      ((*(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x200) != 0 &&
       (*(longlong *)(param_1 + 0x1a8) != 0)))) &&
     ((*(longlong *)(param_1 + 0x1b0) != 0 && (*(longlong *)(param_1 + 0x1b8) != 0)))) {
    FUN_142ecffe0();
    uVar4 = 0;
    puVar7 = *(undefined8 **)(param_1 + 0xf8);
    uVar11 = (longlong)*(int *)(param_1 + 0x100) & 0x1fffffffffffffff;
    if (puVar7 + *(int *)(param_1 + 0x100) < puVar7) {
      uVar11 = uVar4;
    }
    uVar10 = uVar4;
    if (uVar11 != 0) {
      do {
        FUN_141194e30(param_1,*puVar7,*(undefined8 *)(param_1 + 0x1a8),0);
        uVar10 = uVar10 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar10 != uVar11);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x148);
    uVar11 = (longlong)*(int *)(param_1 + 0x150) & 0x1fffffffffffffff;
    if (puVar7 + *(int *)(param_1 + 0x150) < puVar7) {
      uVar11 = uVar4;
    }
    uVar10 = uVar4;
    if (uVar11 != 0) {
      do {
        FUN_141194e30(param_1,*puVar7,*(undefined8 *)(param_1 + 0x1b0),2);
        uVar10 = uVar10 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar10 != uVar11);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x198);
    uVar11 = (longlong)*(int *)(param_1 + 0x1a0) & 0x1fffffffffffffff;
    if (puVar7 + *(int *)(param_1 + 0x1a0) < puVar7) {
      uVar11 = uVar4;
    }
    uVar10 = uVar4;
    if (uVar11 != 0) {
      do {
        FUN_141194e30(param_1,*puVar7,*(undefined8 *)(param_1 + 0x1b8),1);
        uVar10 = uVar10 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar10 != uVar11);
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    local_68 = lVar2;
    if (lVar2 != 0) {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      uVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
    }
    local_60 = uVar4;
    FUN_142ed3200(*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x200),&local_68,0,0,0,0);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x2b8))
              (*(longlong **)(param_1 + 0x80),0xffffffff,1,0);
    local_98 = 0;
    local_90 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"leftColumnTitle",0x20);
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    plVar5 = (longlong *)
             FUN_140ac4770(*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x200),&local_98,0,6,
                           &local_a8);
    plVar8 = local_a8;
    for (iVar9 = (int)local_a0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    local_78 = 0;
    local_70 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"rightColumnTitle",0x22);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    plVar6 = (longlong *)
             FUN_140ac4770(*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x200),&local_78,0,6,
                           &local_88);
    plVar8 = local_88;
    for (iVar9 = (int)local_80; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    if ((plVar5 != (longlong *)0x0) && (plVar6 != (longlong *)0x0)) {
      lVar2 = *plVar5;
      uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"Walking",L"KeybindingsOptions",L"WalkingText");
      (**(code **)(lVar2 + 0x2b0))(plVar5,uVar3,1,0);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_50 + 1;
        lVar2 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      lVar2 = *plVar6;
      uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_40,L"Driving",L"KeybindingsOptions",L"DrivingText");
      (**(code **)(lVar2 + 0x2b0))(plVar6,uVar3,1,0);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_38 + 1;
        lVar2 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1411a17a0 FUN_1411a17a0 body=51 status=ok
// SIG undefined FUN_1411a17a0(void)

bool FUN_1411a17a0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x2b4) == '\0') {
    return false;
  }
  iVar1 = *(int *)(param_1 + 0x2b0);
  bVar2 = iVar1 != 0;
  if (DAT_146876190 == DAT_146af4ac8) {
    if (iVar1 == 1) {
      bVar2 = false;
    }
  }
  return bVar2;
}



// FUNCTION 1411a17e0 FUN_1411a17e0 body=793 status=ok
// SIG undefined FUN_1411a17e0(void)

void FUN_1411a17e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ecd4d0();
  if (*(longlong *)(param_1 + 0x600) != 0) {
    local_58 = (longlong *)0x0;
    local_50 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"show",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x600),&local_58);
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_48 = 0;
    local_40 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"PNL_Options",0x18);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    lVar1 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x600),&local_48,0,6,&local_58);
    plVar4 = local_58;
    for (iVar3 = (int)local_50; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (lVar1 != 0) {
      local_38 = (longlong *)0x0;
      local_30 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,L"show",10);
      FUN_142088910(lVar1,&local_38);
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_28 = (longlong *)0x0;
      local_20 = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      FGenericPlatformString::Memcpy(local_28,L"CONT_Options",0x1a);
      local_38 = (longlong *)0x0;
      local_30 = 0;
      uVar2 = FUN_14117b8f0(lVar1,&local_28,0,6,&local_38);
      *(undefined8 *)(param_1 + 0x778) = uVar2;
      plVar4 = local_38;
      for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_38 = (longlong *)0x0;
      local_30 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,L"restartIndicator",0x22);
      local_28 = (longlong *)0x0;
      local_20 = 0;
      uVar2 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x600),&local_38,0,6,&local_28);
      *(undefined8 *)(param_1 + 0x780) = uVar2;
      plVar4 = local_28;
      for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      lVar1 = FUN_140f9aee0(param_1);
      plVar4 = *(longlong **)(param_1 + 0x780);
      if ((plVar4 != (longlong *)0x0) && (lVar1 != 0)) {
        (**(code **)(*plVar4 + 0x2b0))(plVar4,param_1 + 0x720,1,0);
        (**(code **)(**(longlong **)(param_1 + 0x780) + 0x278))
                  (*(longlong **)(param_1 + 0x780),0 < *(int *)(lVar1 + 0x970));
      }
    }
  }
  return;
}



// FUNCTION 1411a1b00 FUN_1411a1b00 body=1784 status=ok
// SIG undefined FUN_1411a1b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411a1b00(undefined4 *param_1,longlong param_2,undefined8 *param_3,int param_4,
                  undefined1 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_298 [32];
  undefined1 local_278;
  undefined1 local_270;
  longlong **local_268;
  undefined4 local_258;
  longlong *local_248;
  undefined4 *puStack_240;
  longlong local_238;
  longlong local_230;
  longlong *local_228;
  undefined4 *local_218;
  ulonglong *puStack_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
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
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined4 local_c8 [4];
  undefined1 local_b8 [8];
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  ulonglong local_68 [5];
  
  local_68[0] = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_218 = param_1;
  if (param_2 != 0) {
    lVar6 = FUN_1410cc2a0(param_2,local_f8);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_160,
                       L"Rebinding \"{KeyToRebind}\"\nPress new input to bind.\n\n{GbxMenu_BackOut, 24, 24} Cancel"
                       ,L"KeybindingsOptions",L"RebindBoxDescriptionAxis");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_118,uVar7);
    local_c8[0] = 4;
    FText::FText(local_b8,lVar6);
    local_208 = *puVar8;
    local_248 = (longlong *)local_c8;
    puStack_240 = local_98;
    local_200 = puVar8[1];
    local_a0 = '\x01';
    if (local_200 != 0) {
      LOCK();
      *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
      UNLOCK();
    }
    local_1e8 = local_248;
    uStack_1e0 = puStack_240;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8,&local_1e8);
    uVar7 = FText::Format(local_178,&local_208,uVar7);
    FText::FText(local_190,uVar7);
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_170 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)local_170 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1d8);
    if ((local_a0 != '\0') && (local_a0 = '\0', local_b0 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_b0 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    plVar10 = (longlong *)puVar8[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar10 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    plVar10 = *(longlong **)(lVar6 + 8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar10 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_158 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar1 = (int *)((longlong)local_158 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_158 + 8))(local_158,1);
        }
      }
    }
    local_258 = *(undefined4 *)(param_2 + 0xd0);
    lVar4 = *(longlong *)(param_2 + 0xc0);
    lVar6 = *(longlong *)(param_2 + 200);
    local_238 = DAT_1469e97d8;
    local_230 = DAT_1469e97e0;
    local_228 = DAT_1469e97e8;
    if (DAT_1469e97e8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e97e8 + 1) = (int)DAT_1469e97e8[1] + 1;
      UNLOCK();
    }
    if (param_4 != -1) {
      FKey::operator=(&local_238,param_3[2] + (longlong)param_4 * 0x28);
    }
    plVar10 = local_228;
    if (local_228 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_228 + 1) = (int)local_228[1] + 1;
      UNLOCK();
    }
    plVar9 = (longlong *)FMemory::Realloc(0,0x50);
    puVar5 = local_218;
    puStack_240 = (undefined4 *)CONCAT44(puStack_240._4_4_,5);
    local_248 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_GetPoolName_1446e9478;
      plVar10 = (longlong *)0x0;
      plVar9[1] = lVar4;
      plVar9[2] = local_238;
      plVar9[3] = local_230;
      plVar9[4] = (longlong)local_228;
      plVar9[5] = lVar6;
      *(undefined4 *)(plVar9 + 6) = local_258;
      *(undefined1 *)((longlong)plVar9 + 0x34) = param_5;
      plVar9[7] = (longlong)local_218;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar9[9] = lVar6;
      *plVar9 = (longlong)&PTR_GetPoolName_1446e94c0;
    }
    lVar6 = FUN_1410cc2a0(param_2,local_e0);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_130,L"Rebind \"{CommandToRebind}\"",L"KeybindingsOptions",
                       L"RebindTitle");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_108,uVar7);
    local_98[0] = 4;
    FText::FText(local_88,lVar6);
    local_1f8 = *puVar8;
    local_218 = local_98;
    puStack_210 = local_68;
    local_1f0 = puVar8[1];
    local_70 = '\x01';
    if (local_1f0 != 0) {
      LOCK();
      *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
      UNLOCK();
    }
    local_1c8 = local_218;
    uStack_1c0 = puStack_210;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8,&local_1c8);
    uVar7 = FText::Format(local_148,&local_1f8,uVar7);
    FText::FText(local_1a8,uVar7);
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_140 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)local_140 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1b8);
    if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_80 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    plVar9 = (longlong *)puVar8[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar9 = *(longlong **)(lVar6 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    local_268 = &local_248;
    local_270 = 1;
    local_278 = 0;
    uVar7 = FUN_1411bb8c0(puVar5,local_1a8,local_190,1);
    *(undefined8 *)(puVar5 + 0x70) = uVar7;
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1a0 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)local_1a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_128 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    plVar9 = local_248;
    if (local_248 != (longlong *)0x0) {
      (**(code **)(*local_248 + 0x28))(local_248,0);
      local_248 = (longlong *)FMemory::Realloc(plVar9,0,0);
      if (local_248 != (longlong *)0x0) {
        FMemory::Free(local_248);
      }
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar10 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar10 = local_228;
    *(uint *)(*(longlong *)(puVar5 + 0x70) + 0x40) =
         *(uint *)(*(longlong *)(puVar5 + 0x70) + 0x40) | 0x100;
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_228 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_228 + 8))(local_228,1);
        }
      }
    }
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_188 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar1 = (int *)((longlong)local_188 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_188 + 8))(local_188,1);
        }
      }
    }
  }
  if (*(char *)(param_3 + 4) != '\0') {
    *(undefined1 *)(param_3 + 4) = 0;
    *param_3 = &PTR__scalar_deleting_destructor__144038610;
    FUN_140676620(param_3 + 2);
    *param_3 = &PTR_FUN_1440385e0;
  }
  return;
}



// FUNCTION 1411a2200 FUN_1411a2200 body=1826 status=ok
// SIG undefined FUN_1411a2200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411a2200(longlong param_1,longlong param_2,undefined8 *param_3,int param_4,
                  undefined1 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 uVar11;
  undefined1 auStack_288 [32];
  undefined1 local_268;
  undefined1 local_260;
  longlong **local_258;
  longlong local_248;
  longlong *local_238;
  undefined4 *puStack_230;
  longlong local_228;
  longlong local_220;
  longlong *local_218;
  undefined4 *local_208;
  ulonglong *puStack_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
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
  undefined1 local_f8 [16];
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined4 local_b8 [4];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  ulonglong local_58 [3];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_248 = param_1;
  if (param_2 != 0) {
    lVar6 = FUN_1410cc2a0(param_2,local_e8);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_150,
                       L"Rebinding \"{KeyToRebind}\"\nPress new input to bind.\n\n{OakPC_PauseGame} Cancel"
                       ,L"KeybindingsOptions",L"RebindBoxDescription");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_108,uVar7);
    local_b8[0] = 4;
    FText::FText(local_a8,lVar6);
    local_1f8 = *puVar8;
    local_238 = (longlong *)local_b8;
    puStack_230 = local_88;
    local_1f0 = puVar8[1];
    local_90 = '\x01';
    if (local_1f0 != 0) {
      LOCK();
      *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
      UNLOCK();
    }
    local_1d8 = local_238;
    uStack_1d0 = puStack_230;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1c8,&local_1d8);
    uVar7 = FText::Format(local_168,&local_1f8,uVar7);
    FText::FText(local_180,uVar7);
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_160 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)local_160 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1c8);
    if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_a0 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
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
    plVar10 = (longlong *)puVar8[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar10 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
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
    plVar10 = *(longlong **)(lVar6 + 8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar10 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_148 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
    lVar6 = *(longlong *)(param_2 + 0xb8);
    if (lVar6 != 0) {
      local_228 = DAT_1469e97d8;
      local_220 = DAT_1469e97e0;
      local_218 = DAT_1469e97e8;
      if (DAT_1469e97e8 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469e97e8 + 1) = (int)DAT_1469e97e8[1] + 1;
        UNLOCK();
      }
      if ((*(char *)(param_3 + 4) != '\0') && (param_4 != -1)) {
        FKey::operator=(&local_228,param_3[2] + (longlong)param_4 * 0x18);
      }
      plVar10 = local_218;
      plVar9 = &DAT_146876198;
      do {
        if (*plVar9 == *(longlong *)(lVar6 + 0x18)) {
          bVar4 = true;
          goto LAB_1411a24d4;
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != &DAT_1468761b8);
      bVar4 = false;
LAB_1411a24d4:
      uVar11 = 1;
      if (!bVar4) {
        uVar11 = param_5;
      }
      local_208 = *(undefined4 **)(local_248 + 0x68);
      if (local_218 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_218 + 1) = (int)local_218[1] + 1;
        UNLOCK();
      }
      plVar9 = (longlong *)FMemory::Realloc(0,0x60);
      puStack_230 = (undefined4 *)CONCAT44(puStack_230._4_4_,6);
      local_238 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = (longlong)&PTR_GetPoolName_1446e9508;
        plVar10 = (longlong *)0x0;
        plVar9[1] = lVar6;
        plVar9[2] = param_2;
        plVar9[3] = local_228;
        plVar9[4] = local_220;
        plVar9[5] = (longlong)local_218;
        plVar9[7] = (longlong)local_208;
        plVar9[8] = local_248;
        *(undefined1 *)(plVar9 + 6) = uVar11;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar9[10] = lVar6;
        *plVar9 = (longlong)&PTR_GetPoolName_1446e9550;
      }
      lVar6 = FUN_1410cc2a0(param_2,local_d0);
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_120,L"Rebind \"{CommandToRebind}\"",L"KeybindingsOptions",
                         L"RebindTitle");
      puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_f8,uVar7);
      local_88[0] = 4;
      FText::FText(local_78,lVar6);
      local_1e8 = *puVar8;
      local_208 = local_88;
      puStack_200 = local_58;
      local_1e0 = puVar8[1];
      local_60 = '\x01';
      if (local_1e0 != 0) {
        LOCK();
        *(int *)(local_1e0 + 8) = *(int *)(local_1e0 + 8) + 1;
        UNLOCK();
      }
      local_1b8 = local_208;
      uStack_1b0 = puStack_200;
      uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_1a8,&local_1b8);
      uVar7 = FText::Format(local_138,&local_1e8,uVar7);
      FText::FText(local_198,uVar7);
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_130 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1a8);
      if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
        LOCK();
        plVar9 = local_70 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      plVar9 = (longlong *)puVar8[1];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar9 = *(longlong **)(lVar6 + 8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      lVar6 = local_248;
      local_258 = &local_238;
      local_260 = 1;
      local_268 = 0;
      uVar7 = FUN_1411bb8c0(local_248,local_198,local_180,1);
      *(undefined8 *)(lVar6 + 0x1c0) = uVar7;
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_190 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar1 = (int *)((longlong)local_190 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_190 + 8))(local_190,1);
          }
        }
      }
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_118 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      plVar9 = local_238;
      if (local_238 != (longlong *)0x0) {
        (**(code **)(*local_238 + 0x28))(local_238,0);
        local_238 = (longlong *)FMemory::Realloc(plVar9,0,0);
        if (local_238 != (longlong *)0x0) {
          FMemory::Free(local_238);
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      plVar10 = local_218;
      if (local_218 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_218 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_218)(local_218);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_218 + 8))(local_218,1);
          }
        }
      }
    }
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_178 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar1 = (int *)((longlong)local_178 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
  }
  if (*(char *)(param_3 + 4) != '\0') {
    *(undefined1 *)(param_3 + 4) = 0;
    *param_3 = &PTR__scalar_deleting_destructor__1440385f8;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_3 + 2);
    *param_3 = &PTR_FUN_1440385e0;
  }
  return;
}



// FUNCTION 1411a2930 FUN_1411a2930 body=72 status=ok
// SIG undefined FUN_1411a2930(void)

void FUN_1411a2930(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140ccd4d0(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a2980 FUN_1411a2980 body=600 status=ok
// SIG undefined FUN_1411a2980(void)

/* WARNING: Removing unreachable block (ram,0x0001411a2a68) */
/* WARNING: Removing unreachable block (ram,0x0001411a2a75) */
/* WARNING: Removing unreachable block (ram,0x0001411a2a8a) */

void FUN_1411a2980(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_48 [48];
  
  lVar9 = 0;
  FUN_1404cf2e0(&local_68,0);
  if ((local_68 != (longlong *)0x0) &&
     (cVar7 = (**(code **)(*local_68 + 0x10))(local_68,0xe), cVar7 != '\0')) {
    lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar8 + 400) != 0) {
      lVar8 = UGameInstance::FindLocalPlayerFromControllerId
                        (*(longlong *)(lVar8 + 400),*(undefined4 *)(param_3 + 8));
      if (lVar8 == 0) {
        plVar10 = (longlong *)0x0;
        bVar6 = false;
        bVar5 = false;
      }
      else {
        lVar9 = FUN_142547b50(lVar8,local_48);
        plVar10 = *(longlong **)(lVar9 + 0x10);
        lVar9 = *(longlong *)(lVar9 + 8);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        bVar6 = true;
        bVar5 = true;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
      }
      if ((bVar5) && (plVar10 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plVar10 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (bVar6) {
        FUN_1404bf980(local_48);
      }
      if (lVar9 != 0) {
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_58 = lVar9;
        local_50 = plVar10;
        (**(code **)(*local_68 + 0x90))(local_68,&local_58);
        plVar1 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          lVar9 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_50)(local_50);
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
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
  }
  plVar10 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 1411a2be0 FUN_1411a2be0 body=72 status=ok
// SIG undefined FUN_1411a2be0(void)

void FUN_1411a2be0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140ccd220(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a2c30 FUN_1411a2c30 body=72 status=ok
// SIG undefined FUN_1411a2c30(void)

void FUN_1411a2c30(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140ccd350(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a2c80 FUN_1411a2c80 body=264 status=ok
// SIG undefined FUN_1411a2c80(void)

void FUN_1411a2c80(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  uint local_res10 [2];
  
  if (((param_2 != 0) && (param_1[0x18] != 0)) &&
     ((*(char *)((longlong)param_1 + 0x2b4) == '\0' || ((int)param_1[0x56] != 1)))) {
    puVar1 = (uint *)((longlong)param_1 + 700);
    iVar7 = 0;
    if (local_res10 != puVar1) {
      *puVar1 = 0;
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
    iVar3 = FUN_142eb7a10(param_2);
    uVar5 = 0;
    do {
      if ((0 < (int)param_1[((longlong)(int)uVar5 + 0x11) * 2]) &&
         (bVar9 = iVar7 == iVar3, iVar7 = iVar7 + 1, bVar9)) {
        if (local_res10 != puVar1) {
          *puVar1 = uVar5;
          *(undefined1 *)(param_1 + 0x58) = 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 5);
    uVar6 = (ulonglong)(int)param_1[0x59];
    if (0 < (int)param_1[0x59]) {
      plVar4 = param_1 + 0x22;
      uVar8 = uVar6;
      do {
        lVar2 = *plVar4;
        plVar4 = plVar4 + 2;
        uVar5 = (uint)uVar6 - 1;
        if ((int)lVar2 != 0) {
          uVar5 = (uint)uVar6;
        }
        uVar6 = (ulonglong)uVar5;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    FUN_142ed2aa0(param_2,uVar6);
    FUN_1411be650(param_1);
    FUN_1411be4b0(param_1);
    (**(code **)(*param_1 + 0x2c8))(param_1,param_1[6]);
  }
  return;
}



// FUNCTION 1411a2d90 FUN_1411a2d90 body=83 status=ok
// SIG undefined FUN_1411a2d90(void)

void FUN_1411a2d90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) {
    uVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x184) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_140d12080();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a2df0 FUN_1411a2df0 body=89 status=ok
// SIG undefined FUN_1411a2df0(void)

void FUN_1411a2df0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    iVar3 = 0x78;
    if (iVar2 != 5) {
      iVar3 = iVar2 * 0xf;
    }
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(int *)(lVar1 + 0x200) = iVar3;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a2e50 FUN_1411a2e50 body=81 status=ok
// SIG undefined FUN_1411a2e50(void)

void FUN_1411a2e50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(bool *)(lVar1 + 0x1fd) = 0 < iVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a2eb0 FUN_1411a2eb0 body=84 status=ok
// SIG undefined FUN_1411a2eb0(void)

void FUN_1411a2eb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
     (*(longlong *)(param_1 + 0x68) != 0)) {
    uVar2 = FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x6c) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    FUN_140d12d80(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a2f10 FUN_1411a2f10 body=84 status=ok
// SIG undefined FUN_1411a2f10(void)

void FUN_1411a2f10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
     (*(longlong *)(param_1 + 0x68) != 0)) {
    uVar2 = FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x70) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    thunk_FUN_140cff230(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a2f70 FUN_1411a2f70 body=51 status=ok
// SIG undefined FUN_1411a2f70(void)

void FUN_1411a2f70(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140ccd4e0(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  return;
}



// FUNCTION 1411a2fb0 FUN_1411a2fb0 body=445 status=ok
// SIG undefined FUN_1411a2fb0(void)

void FUN_1411a2fb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_78 [8];
  undefined8 local_70;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_40,L"Saved Report Path",L"GraphicsOptions",L"BenchmarkDataOutputPathTitle");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_58,L"Saved report data path is unavailable.",L"GraphicsOptions",
               L"BenchmarkDataOutputPathUnavailableMessage");
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0x1d8);
    if ((iVar3 != 0) && (0 < iVar3 + -1)) {
      FPaths::ConvertRelativePathToFull(local_68);
      uVar5 = FText::FromString(local_28,local_68);
      FText::operator=(local_58,uVar5);
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
      if (local_68[0] != 0) {
        FMemory::Free();
      }
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_70 = 0;
    FUN_1410f3960(*(undefined8 *)(param_1 + 0x68),local_40,local_58,local_78,0,0,0);
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
  return;
}



// FUNCTION 1411a3170 FUN_1411a3170 body=471 status=ok
// SIG undefined FUN_1411a3170(void)

void FUN_1411a3170(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 local_res8;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    return;
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_58,L"Benchmarking Unavailable",L"GraphicsOptions",L"BenchmarkUnavailableTitle");
  cVar5 = FUN_140bca8a0(*(undefined8 *)(param_1 + 0x78));
  if (cVar5 == '\0') {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_40,L"Benchmark can only be initiated from the main menu.",L"GraphicsOptions",
               L"BenchmarkUnavailableMessage");
    FWeakObjectPtr::operator=(local_78,0);
    local_70 = 0;
    FUN_1410f3960(*(undefined8 *)(param_1 + 0x68),local_58,local_40,local_78,0,0,2);
    local_20 = local_38;
  }
  else {
    cVar5 = FUN_140bc9f60(*(undefined8 *)(param_1 + 0x78));
    if ((cVar5 == '\0') && (cVar5 = FUN_140bc2c90(*(undefined8 *)(param_1 + 0x78)), cVar5 == '\0'))
    {
      local_res8 = 0;
      FUN_140bc8be0(*(undefined8 *)(param_1 + 0x78),&local_res8);
      goto LAB_1411a3303;
    }
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_28,L"Benchmark cannot be initiated while connected to other players.",
               L"GraphicsOptions",L"BenchmarkUnavailableMessage_Coop");
    FWeakObjectPtr::operator=(local_68,0);
    local_60 = 0;
    FUN_1410f3960(*(undefined8 *)(param_1 + 0x68),local_58,local_28,local_68,0,0,2);
  }
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
LAB_1411a3303:
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
  return;
}



// FUNCTION 1411a3350 FUN_1411a3350 body=67 status=ok
// SIG undefined FUN_1411a3350(void)

void FUN_1411a3350(longlong param_1,longlong param_2,code *param_3)

{
  undefined1 local_res10 [24];
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) && (param_3 != (code *)0x0)) {
    local_res10[0] = FUN_142eb7a60(param_2);
    (*param_3)(*(undefined8 *)(param_1 + 0x70),local_res10);
  }
  return;
}



// FUNCTION 1411a33a0 FUN_1411a33a0 body=75 status=ok
// SIG undefined FUN_1411a33a0(void)

void FUN_1411a33a0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    iVar1 = FUN_142eb62f0(param_2);
    FUN_140ccdaa0(*(undefined8 *)(param_1 + 0xc0),iVar1 != 0);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a33f0 FUN_1411a33f0 body=220 status=ok
// SIG undefined FUN_1411a33f0(void)

void FUN_1411a33f0(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    iVar3 = FUN_142eb62f0(param_2);
    FUN_140ccdb40(*(undefined8 *)(param_1 + 0xc0),iVar3 != 0);
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      cVar1 = FSlateApplication::IsActive(*(undefined8 *)(param_1 + 0xc0));
      if (cVar1 == '\0') {
        cVar2 = UAnimSequence::HasRootMotion(*(undefined8 *)(param_1 + 0xc0));
        bVar5 = cVar2 != '\0';
      }
      else {
        bVar5 = true;
      }
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1f8) + 0x170);
      (**(code **)(*plVar4 + 0x38))(plVar4,cVar1 == '\0');
      FUN_142ed50a0(*(undefined8 *)(param_1 + 0x1f8),bVar5);
    }
    *(undefined1 *)(param_1 + 0x2d8) = 0;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a34d0 FUN_1411a34d0 body=80 status=ok
// SIG undefined FUN_1411a34d0(void)

void FUN_1411a34d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_142eb7a60(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x43) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_140d12520();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a3520 FUN_1411a3520 body=80 status=ok
// SIG undefined FUN_1411a3520(void)

void FUN_1411a3520(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_142eb7a60(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x40) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_140d12b50();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a3570 FUN_1411a3570 body=72 status=ok
// SIG undefined FUN_1411a3570(void)

void FUN_1411a3570(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140ccd620(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a35c0 FUN_1411a35c0 body=790 status=ok
// SIG undefined FUN_1411a35c0(void)

void FUN_1411a35c0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  longlong *local_90;
  longlong *local_80;
  longlong *local_70;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  plVar10 = (longlong *)0x0;
  if (param_2 != 0) {
    FUN_14139fee0();
  }
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar8 != 0) {
    lVar9 = FUN_14141f270();
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
      lVar8 = UGameInstance::FindLocalPlayerFromControllerId(lVar8,*(undefined4 *)(param_3 + 8));
      if (lVar8 == 0) {
        bVar6 = false;
        bVar5 = false;
        bVar4 = true;
        local_80 = (longlong *)0x0;
        plVar11 = plVar10;
      }
      else {
        bVar6 = true;
        bVar5 = true;
        bVar4 = false;
        lVar8 = FUN_142547b50(lVar8,local_48);
        plVar10 = *(longlong **)(lVar8 + 0x10);
        plVar11 = *(longlong **)(lVar8 + 8);
        local_70 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
      }
      plVar12 = local_80;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      if ((bVar4) && (local_80 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      plVar12 = local_70;
      if ((bVar5) && (local_70 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      if (bVar6) {
        local_48[0] = &PTR_FUN_143f740c8;
        if (local_30 != 0) {
          FMemory::Free();
        }
        local_48[0] = &PTR_FUN_143f73d18;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_38 + 1;
          lVar8 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
      if (plVar11 != (longlong *)0x0) {
        FUN_1404cf2e0(&local_98,0);
        plVar12 = local_98;
        if ((local_98 != (longlong *)0x0) &&
           (cVar7 = (**(code **)(*local_98 + 0x10))(local_98,1), cVar7 != '\0')) {
          local_a8 = SUB84(plVar11,0);
          uStack_a4 = (undefined4)((ulonglong)plVar11 >> 0x20);
          uStack_a0 = SUB84(plVar10,0);
          uStack_9c = (undefined4)((ulonglong)plVar10 >> 0x20);
          local_68[0] = 0;
          local_68[1] = 0;
          local_58 = local_a8;
          uStack_54 = uStack_a4;
          uStack_50 = uStack_a0;
          uStack_4c = uStack_9c;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            plVar12 = local_98;
          }
          (**(code **)(*plVar12 + 0x28))(plVar12,&local_58,0xffffffff,local_68);
          plVar11 = (longlong *)CONCAT44(uStack_4c,uStack_50);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar11 + 1;
            lVar8 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
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
          if (local_68[0] != 0) {
            FMemory::Free();
          }
        }
        plVar11 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_90 + 1;
          lVar8 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_90 + 8))(local_90,1);
            }
          }
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar10 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar10)(plVar10);
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
    }
  }
  return;
}



// FUNCTION 1411a38e0 FUN_1411a38e0 body=710 status=ok
// SIG undefined FUN_1411a38e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411a38e0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8 [2];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (param_3 == DAT_146874fd0) {
    FWeakObjectPtr::operator=(&local_108,param_1);
    uVar1 = FUN_140e971d0(param_1);
    FWeakObjectPtr::operator=(&local_100,uVar1);
    local_c8 = (longlong *)0x0;
    local_b8 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_e8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_CopyToEmptyStorage_144266c58;
      *(undefined4 *)(puVar2 + 1) = local_108;
      *(undefined4 *)((longlong)puVar2 + 0xc) = local_104;
      *(undefined4 *)(puVar2 + 2) = local_100;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_fc;
    }
    local_f8[0] = (code *)&LAB_141190d10;
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar1 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    local_a8 = 0;
    local_a0 = 0;
    FWeakObjectPtr::operator=(local_98,0);
    local_90 = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,local_f8);
    FUN_142880af0(uVar1,&local_a8);
    if (local_48 != 0) {
      plVar4 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar4 = local_58;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  }
  else {
    if (param_3 != DAT_146874fe0) {
      return;
    }
    FWeakObjectPtr::operator=(&local_100,param_1);
    uVar1 = FUN_140e971d0(param_1);
    FWeakObjectPtr::operator=(&local_108,uVar1);
    local_c8 = (longlong *)0x0;
    local_b8 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_e8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_CopyToEmptyStorage_144266c58;
      *(undefined4 *)(puVar2 + 1) = local_100;
      *(undefined4 *)((longlong)puVar2 + 0xc) = local_fc;
      *(undefined4 *)(puVar2 + 2) = local_108;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_104;
    }
    local_f8[0] = FUN_141190e30;
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar1 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    local_a8 = 0;
    local_a0 = 0;
    FWeakObjectPtr::operator=(local_98,0);
    local_90 = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,local_f8);
    FUN_142880af0(uVar1,&local_a8);
    if (local_48 != 0) {
      plVar4 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar4 = local_58;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  }
  if (local_b8 != 0) {
    plVar4 = local_e8;
    if (local_c8 != (longlong *)0x0) {
      plVar4 = local_c8;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411a3bb0 FUN_1411a3bb0 body=95 status=ok
// SIG undefined FUN_1411a3bb0(void)

void FUN_1411a3bb0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1411a3c10 FUN_1411a3c10 body=85 status=ok
// SIG undefined FUN_1411a3c10(void)

void FUN_1411a3c10(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 local_res18 [16];
  
  plVar1 = (longlong *)FName::FName(local_res18,&DAT_1446d125c,1);
  if (param_3 == *plVar1) {
    FUN_1411b6490();
    *(undefined1 *)(param_1 + 0x6bc) = 1;
    return;
  }
  FUN_142eb3990(param_1);
  return;
}



// FUNCTION 1411a3c70 FUN_1411a3c70 body=300 status=ok
// SIG undefined FUN_1411a3c70(void)

void FUN_1411a3c70(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  plVar2 = (longlong *)FName::FName(local_res8,&DAT_1446d0bdc,1);
  if (param_3 == *plVar2) {
    FUN_1411b62b0(param_1);
    uVar1 = 1;
  }
  else {
    if ((param_1[0x18] != 0) && ((int)param_1[0x17] == 3)) {
      FString::operator=(param_1 + 0x54,param_1 + 0x51);
      *(int *)(param_1 + 0x57) = (int)param_1[0x56];
      if ((int)param_1[0x56] == 1) {
        if (param_1 + 0x59 != (longlong *)((longlong)param_1 + 700)) {
          if ((char)param_1[0x58] != '\0') {
            *(undefined1 *)(param_1 + 0x58) = 0;
          }
          *(int *)((longlong)param_1 + 700) = (int)param_1[0x59];
          *(undefined1 *)(param_1 + 0x58) = 1;
        }
        if (param_1 + 0x2c != param_1 + 0x50) {
          if (*(char *)((longlong)param_1 + 0x284) != '\0') {
            *(undefined1 *)((longlong)param_1 + 0x284) = 0;
          }
          *(int *)(param_1 + 0x50) = (int)param_1[0x2c];
          *(undefined1 *)((longlong)param_1 + 0x284) = 1;
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x2c4) = *(undefined4 *)((longlong)param_1 + 700);
      *(int *)((longlong)param_1 + 0x15c) = (int)param_1[0x50];
      *(undefined4 *)((longlong)param_1 + 0x2d4) = *(undefined4 *)((longlong)param_1 + 0x2cc);
    }
    if ((param_1[6] == 0) || (*(char *)(param_1[6] + 0x774) == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x27c) = uVar1;
  (**(code **)(*param_1 + 0x2c8))(param_1,param_1[6]);
  FUN_14119b950(param_1);
  return;
}



// FUNCTION 1411a3da0 FUN_1411a3da0 body=327 status=ok
// SIG undefined FUN_1411a3da0(void)

void FUN_1411a3da0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  if ((*(longlong *)(param_1 + 0x778) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x180) != 0)) {
    if (param_2 != 0) {
      lVar2 = UGameInstanceGameParameters::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar2 = FUN_142eb6340(param_2);
        if (lVar2 != 0) {
          lVar3 = UMovieSceneSoundSetSection::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_14119b9f0(*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x180),lVar2);
            return;
          }
        }
      }
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x778) + 0x180);
    if (*(longlong **)(lVar2 + 0x260) != (longlong *)0x0) {
      lVar3 = **(longlong **)(lVar2 + 0x260);
      uVar4 = FUN_1404b03b0();
      (**(code **)(lVar3 + 0x2b0))(*(undefined8 *)(lVar2 + 0x260),uVar4,1,0);
    }
    if (*(longlong **)(lVar2 + 0x268) != (longlong *)0x0) {
      lVar3 = **(longlong **)(lVar2 + 0x268);
      uVar4 = FUN_1404b03b0();
      (**(code **)(lVar3 + 0x2b0))(*(undefined8 *)(lVar2 + 0x268),uVar4,1,0);
    }
  }
  return;
}



// FUNCTION 1411a3ef0 FUN_1411a3ef0 body=49 status=ok
// SIG undefined FUN_1411a3ef0(void)

void FUN_1411a3ef0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) {
    uVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x1e2) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
  }
  return;
}



// FUNCTION 1411a3f30 FUN_1411a3f30 body=206 status=ok
// SIG undefined FUN_1411a3f30(void)

void FUN_1411a3f30(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  return;
}



// FUNCTION 1411a4000 FUN_1411a4000 body=1146 status=ok
// SIG undefined FUN_1411a4000(void)

void FUN_1411a4000(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  thunk_FUN_14208af70();
  plVar1 = *(longlong **)(param_1 + 0x178);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 400);
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 400) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  return;
}



// FUNCTION 1411a4480 FUN_1411a4480 body=296 status=ok
// SIG undefined FUN_1411a4480(void)

void FUN_1411a4480(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  thunk_FUN_14208af70();
  plVar1 = *(longlong **)(param_1 + 0x260);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x260) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x270) = 0;
  return;
}



// FUNCTION 1411a45b0 FUN_1411a45b0 body=309 status=ok
// SIG undefined FUN_1411a45b0(void)

void FUN_1411a45b0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  thunk_FUN_14208af70();
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>::
  Empty(param_1 + 400,0);
  return;
}



// FUNCTION 1411a46f0 FUN_1411a46f0 body=327 status=ok
// SIG undefined FUN_1411a46f0(void)

void FUN_1411a46f0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x2d8);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x1b0,0);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  FUN_142ebfc00(param_1);
  return;
}



// FUNCTION 1411a4840 FUN_1411a4840 body=215 status=ok
// SIG undefined FUN_1411a4840(void)

void FUN_1411a4840(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x2c8);
  plVar1 = plVar5 + *(int *)(param_1 + 0x2d0);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    plVar2 = (longlong *)*plVar5;
    if (plVar2 != (longlong *)0x0) {
      lVar4 = UPlatformInterfaceBase::GetPrivateStaticClass();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        (**(code **)(*plVar2 + 0x288))(plVar2);
      }
    }
    *plVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2c8,0);
  }
  FUN_142ebfc00(param_1);
  return;
}



// FUNCTION 1411a4920 FUN_1411a4920 body=378 status=ok
// SIG undefined FUN_1411a4920(void)

void FUN_1411a4920(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x188);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar4 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  plVar5 = *(longlong **)(param_1 + 0x170);
  plVar1 = plVar5 + *(int *)(param_1 + 0x178);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    plVar2 = (longlong *)*plVar5;
    if (plVar2 != (longlong *)0x0) {
      lVar4 = UPlatformInterfaceBase::GetPrivateStaticClass();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        (**(code **)(*plVar2 + 0x288))(plVar2);
      }
    }
    *plVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(int *)(param_1 + 0x17c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x170,0);
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1411a4aa0 FUN_1411a4aa0 body=298 status=ok
// SIG undefined FUN_1411a4aa0(void)

void FUN_1411a4aa0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x180);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1411a4bd0 FUN_1411a4bd0 body=120 status=ok
// SIG undefined FUN_1411a4bd0(void)

void FUN_1411a4bd0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x2c8);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  FUN_142ebfc00(param_1);
  return;
}



// FUNCTION 1411a4c50 FUN_1411a4c50 body=83 status=ok
// SIG undefined FUN_1411a4c50(void)

void FUN_1411a4c50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) {
    uVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x180) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_140d12e10();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a4cb0 FUN_1411a4cb0 body=72 status=ok
// SIG undefined FUN_1411a4cb0(void)

void FUN_1411a4cb0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140ccd8b0(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a4d00 FUN_1411a4d00 body=72 status=ok
// SIG undefined FUN_1411a4d00(void)

void FUN_1411a4d00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140ccd9f0(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a4d50 FUN_1411a4d50 body=72 status=ok
// SIG undefined FUN_1411a4d50(void)

void FUN_1411a4d50(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140ccf1c0(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a4da0 FUN_1411a4da0 body=81 status=ok
// SIG undefined FUN_1411a4da0(void)

void FUN_1411a4da0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(bool *)(lVar1 + 0x20c) = 0 < iVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a4e00 FUN_1411a4e00 body=83 status=ok
// SIG undefined FUN_1411a4e00(void)

void FUN_1411a4e00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 local_res8 [8];
  
  cVar3 = FUN_142ebd930(param_1 + -0x9d0);
  if (cVar3 != '\0') {
    uVar1 = *(undefined4 *)(param_2 + 8);
    puVar2 = (undefined8 *)FName::FName(local_res8,L"Roster",1);
    FUN_14112a420(param_1 + -0x9d0,*puVar2,uVar1);
  }
  return;
}



// FUNCTION 1411a4e60 FUN_1411a4e60 body=94 status=ok
// SIG undefined FUN_1411a4e60(void)

undefined4 FUN_1411a4e60(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_1 + -0x50);
  local_18 = lVar2;
  if (lVar2 == 0) {
    local_10 = 0;
  }
  else {
    uVar3 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
  }
  FUN_142ed36d0(param_1 + -0x9d0,&local_18,0);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + -0x448);
  *(undefined4 *)(param_1 + -0x448) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1411a4ec0 FUN_1411a4ec0 body=55 status=ok
// SIG undefined FUN_1411a4ec0(void)

undefined4 FUN_1411a4ec0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FUN_142ed36d0(param_1 + -0x9d0,&local_18,0);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + -0x448);
  *(undefined4 *)(param_1 + -0x448) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1411a4f00 FUN_1411a4f00 body=46 status=ok
// SIG undefined FUN_1411a4f00(void)

void FUN_1411a4f00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_142f06340(*(longlong *)(param_1 + 0x2b8),param_1 + 0x6d0);
  }
  FUN_1411bc7d0(param_1);
  return;
}



// FUNCTION 1411a4f30 FUN_1411a4f30 body=474 status=ok
// SIG undefined FUN_1411a4f30(void)

void FUN_1411a4f30(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_res18 [8];
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  puVar6 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404d0c50(&local_58,*puVar6);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x110))(local_58,param_1 + 0x690);
  }
  FUN_1411bc030(param_1);
  FUN_1411b3ce0(param_1);
  if (param_2 != 1) {
    FWeakObjectPtr::operator=(local_48,0);
    local_40 = 0;
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Unable to find any search results.  The search failed.",
                       L"ServerBrowserMenu",L"SearchFailedMessage");
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Search Failed",L"ServerBrowserMenu",L"SearchFailedHeader");
    FUN_1410f3960(uVar7,uVar9,uVar8,local_48,1,0,2);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
  }
  FUN_1411b3370(param_1);
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 1411a5110 FUN_1411a5110 body=67 status=ok
// SIG undefined FUN_1411a5110(void)

void FUN_1411a5110(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar1 = FUN_142eb7a60(param_2);
    FUN_140d4c990(*(undefined8 *)(param_1 + 0x70),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a5170 FUN_1411a5170 body=72 status=ok
// SIG undefined FUN_1411a5170(void)

void FUN_1411a5170(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140ccf3a0(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a51c0 FUN_1411a51c0 body=142 status=ok
// SIG undefined FUN_1411a51c0(void)

void FUN_1411a51c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar3 = FUN_142eb62f0(param_2);
    FUN_140ccf440(*(undefined8 *)(param_1 + 0xc0),uVar3);
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 0x170);
      cVar2 = UInspectableComponent::IsInTransition(*(undefined8 *)(param_1 + 0xc0));
      (**(code **)(lVar1 + 0x38))(*(longlong *)(param_1 + 0x1d0) + 0x170,cVar2 == '\x05');
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a5250 FUN_1411a5250 body=74 status=ok
// SIG undefined FUN_1411a5250(void)

void FUN_1411a5250(longlong param_1,longlong param_2)

{
  float fVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    fVar1 = (float)FUN_1427fe4c0(param_2);
    FUN_140ccd760(*(undefined8 *)(param_1 + 0xc0),(int)fVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a52a0 FUN_1411a52a0 body=49 status=ok
// SIG undefined FUN_1411a52a0(void)

void FUN_1411a52a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) {
    uVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x1e3) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
  }
  return;
}



// FUNCTION 1411a52e0 FUN_1411a52e0 body=41 status=ok
// SIG undefined FUN_1411a52e0(void)

void FUN_1411a52e0(undefined8 param_1)

{
  FUN_142ec1f90();
  FUN_1411a17e0(param_1);
  FUN_1411986c0(param_1,DAT_1462a1558);
  return;
}



// FUNCTION 1411a5310 FUN_1411a5310 body=529 status=ok
// SIG undefined FUN_1411a5310(void)

void FUN_1411a5310(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_res8;
  undefined4 uStack_1c;
  
  FUN_142ec1f90();
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5d4);
  if (lVar6 != 0) {
    lVar7 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(char *)(lVar6 + 0xec4) != '\0')) {
      bVar3 = true;
      goto LAB_1411a537d;
    }
  }
  bVar3 = false;
LAB_1411a537d:
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x58c);
  if ((cVar5 == '\0') ||
     (lVar6 = FWeakObjectPtr::Get(param_1 + 0x58c), *(char *)(lVar6 + 0x128) != '\x03')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((bVar3) && (bVar4)) && (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x10a0), cVar5 != '\0')) {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x10a0);
    FUN_1411ac2b0(param_1,*(undefined4 *)(lVar6 + 0x6d4));
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x10a0);
    plVar1 = (longlong *)(lVar6 + 0x5e0);
    plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_1442cc120;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      *(undefined4 *)(plVar8 + 2) = 0x411ac2b0;
      *(undefined4 *)((longlong)plVar8 + 0x14) = 1;
      *(undefined4 *)(plVar8 + 3) = 0;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_1c;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar7;
      *plVar8 = (longlong)&PTR_FUN_1442cc168;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_res8);
      iVar2 = *(int *)(lVar6 + 0x5e8);
      *(int *)(lVar6 + 0x5e8) = iVar2 + 1;
      if (*(int *)(lVar6 + 0x5ec) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar9 = plVar8;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
  }
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x10b0) != 0) {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x58c);
    if (cVar5 != '\0') {
      uVar10 = FWeakObjectPtr::Get(param_1 + 0x58c);
      lVar6 = FUN_14270bb10(uVar10);
      if (lVar6 != 0) {
        FUN_14112a420(param_1,*(undefined8 *)(param_1 + 0x10b0),*(undefined4 *)(lVar6 + 0x108));
      }
    }
    *(undefined8 *)(param_1 + 0x10b0) = 0;
  }
  return;
}



// FUNCTION 1411a5530 FUN_1411a5530 body=415 status=ok
// SIG undefined FUN_1411a5530(void)

undefined4 FUN_1411a5530(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_40 = 9;
  uVar4 = 0;
  local_48 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"menuList",0x12);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_14113ffb0(param_1,param_1 + 0x980,&local_48,0,6,&local_58);
  plVar5 = local_58;
  for (iVar6 = (int)local_50; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x980) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x980) + 0x24c) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x980) + 0x20a) = 2;
    lVar2 = *(longlong *)(param_1 + 0x980);
    local_30 = uVar4;
    local_38 = lVar2;
    if (lVar2 != 0) {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
    }
    FUN_142ecfdd0(param_1,&local_38,0,0,0,0);
    lVar2 = *(longlong *)(param_1 + 0x980);
    local_28 = lVar2;
    if (lVar2 != 0) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      uVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar4);
    }
    local_20 = uVar4;
    FUN_142ed36d0(param_1,&local_28,0);
  }
  FUN_1411323d0(param_1,0);
  FUN_142ecd4d0(param_1);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1411a56d0 FUN_1411a56d0 body=487 status=ok
// SIG undefined FUN_1411a56d0(void)

void FUN_1411a56d0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0x12;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"PNL_DLCStore_List",0x24);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_141188c40(param_1,param_1 + 0x698,&local_28,0,6,&local_38);
  plVar3 = local_38;
  for (iVar2 = (int)local_30; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"PNL_DLCStore_Detail",0x28);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_1411882f0(param_1,param_1 + 0x6a0,&local_38,0,6,&local_28);
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x698) != 0) {
    FUN_1411b3b10(param_1);
    lVar1 = *(longlong *)(param_1 + 0x698);
    if (*(char *)(lVar1 + 0x170) != '\x01') {
      *(undefined1 *)(lVar1 + 0x170) = 1;
      local_28 = (longlong *)0x0;
      local_20 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      FGenericPlatformString::Memcpy(local_28,L"show",10);
      FUN_142088910(lVar1,&local_28);
      if (local_28 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 1411a58c0 FUN_1411a58c0 body=555 status=ok
// SIG undefined FUN_1411a58c0(void)

void FUN_1411a58c0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar13 = 0;
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x58c);
  bVar15 = cVar7 == '\0';
  if (bVar15) {
    plVar9 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x58c);
    plVar9 = (longlong *)FUN_142dcf3a0(uVar8,local_38);
    lVar13 = *plVar9;
  }
  plVar4 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_40;
  if ((bVar15) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar14 = plStack_40 + 1;
    lVar6 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar15) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_30 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if ((lVar13 != 0) &&
     (cVar7 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,lVar13), cVar7 != '\0')) {
    plVar9 = (longlong *)(param_1 + 0x9a8);
    if (plVar9 != param_3) {
      iVar12 = *(int *)(param_1 + 0x9b0);
      if (iVar12 != 0) {
        plVar14 = (longlong *)(*plVar9 + 8);
        do {
          plVar5 = (longlong *)*plVar14;
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
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar14 = plVar14 + 2;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      iVar12 = (int)param_3[1];
      puVar11 = (undefined8 *)*param_3;
      *(int *)(param_1 + 0x9b0) = iVar12;
      if ((iVar12 == 0) && (*(int *)(param_1 + 0x9b4) == 0)) {
        *(undefined4 *)(param_1 + 0x9b4) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar9,iVar12);
        puVar10 = (undefined8 *)*plVar9;
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar10 = *puVar11;
          lVar13 = puVar11[1];
          puVar10[1] = lVar13;
          if (lVar13 != 0) {
            LOCK();
            *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
            UNLOCK();
          }
          puVar10 = puVar10 + 2;
          puVar11 = puVar11 + 2;
        }
      }
    }
    FUN_141115930(param_1);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar13 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 1411a5af0 FUN_1411a5af0 body=106 status=ok
// SIG undefined FUN_1411a5af0(void)

void FUN_1411a5af0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) &&
      (iVar2 = FUN_142eb62f0(param_2), -1 < iVar2)) && (iVar2 < *(int *)(param_1 + 0x170))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8);
    UTimelineComponent::SetDirectionPropertyName(*(undefined8 *)(param_1 + 0xc0),lVar1);
    FUN_1411b53d0(*(undefined8 *)(param_1 + 0x30),DAT_146876190 != lVar1);
  }
  return;
}



// FUNCTION 1411a5b60 FUN_1411a5b60 body=112 status=ok
// SIG undefined FUN_1411a5b60(void)

void FUN_1411a5b60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  if (((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) &&
     (*(longlong *)(param_1 + 0x30) != 0)) {
    cVar2 = FUN_142eb62f0(param_2);
    FUN_1411b53d0(*(undefined8 *)(param_1 + 0x30),cVar2 != *(char *)(param_1 + 0x2f0));
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(char *)(lVar1 + 0x6b) = cVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_140d131d0();
    }
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a5bd0 FUN_1411a5bd0 body=107 status=ok
// SIG undefined FUN_1411a5bd0(void)

void FUN_1411a5bd0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140ccf580(*(undefined8 *)(param_1 + 0xc0),uVar1,0);
    if (*(char *)(param_1 + 0xd9) == '\0') {
      FUN_1411bd300(param_1,param_2);
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a5c40 FUN_1411a5c40 body=270 status=ok
// SIG undefined FUN_1411a5c40(void)

void FUN_1411a5c40(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(longlong **)(param_1 + 0x68) == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0xfa8))();
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x6a0) == 0) {
    return;
  }
  lVar3 = FUN_142f02280(lVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_14134c430();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411a5ce2;
  }
  lVar3 = 0;
LAB_1411a5ce2:
  local_18 = 0;
  local_10 = 0;
  lVar4 = **(longlong **)(param_1 + 0x30);
  puVar5 = (undefined8 *)FName::FName(local_res8,"Navigate",1);
  (**(code **)(lVar4 + 0x4e8))(*(undefined8 *)(param_1 + 0x30),*puVar5,&local_18);
  if (lVar3 != 0) {
    uVar6 = FUN_140ec9a00(lVar2);
    FUN_140f4e790(lVar3,0,uVar6,0);
  }
  return;
}



// FUNCTION 1411a5d50 FUN_1411a5d50 body=90 status=ok
// SIG undefined FUN_1411a5d50(void)

void FUN_1411a5d50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_142eb7a60(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x90) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      uVar2 = FUN_142eb7a60(param_2);
      FUN_140d13fd0(*(undefined8 *)(param_1 + 0x68),uVar2);
    }
  }
  return;
}



// FUNCTION 1411a5db0 FUN_1411a5db0 body=110 status=ok
// SIG undefined FUN_1411a5db0(void)

void FUN_1411a5db0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
     (*(longlong *)(param_1 + 0x68) != 0)) {
    uVar2 = FUN_1427fe4c0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x78) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    lVar1 = FUN_140cff1b0(*(undefined8 *)(param_1 + 0x68));
    if ((lVar1 != 0) &&
       (lVar1 = FUN_140cff1b0(*(undefined8 *)(param_1 + 0x68)), *(longlong *)(lVar1 + 0x5e8) != 0))
    {
      lVar1 = FUN_140cff1b0(*(undefined8 *)(param_1 + 0x68));
      *(undefined1 *)(*(longlong *)(lVar1 + 0x5e8) + 0x5b0) = 1;
    }
  }
  return;
}



// FUNCTION 1411a5e20 FUN_1411a5e20 body=81 status=ok
// SIG undefined FUN_1411a5e20(void)

void FUN_1411a5e20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(bool *)(lVar1 + 0x1fb) = 0 < iVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411a5e80 FUN_1411a5e80 body=534 status=ok
// SIG undefined FUN_1411a5e80(void)

void FUN_1411a5e80(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 6;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"label",0xc);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"menuGlyph",0x14);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"badBindingIcon",0x1e);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x180);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x278))(plVar3,0);
  }
  return;
}



// FUNCTION 1411a60b0 FUN_1411a60b0 body=656 status=ok
// SIG undefined FUN_1411a60b0(void)

void FUN_1411a60b0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  if (*(longlong *)(param_1 + 0x260) == 0) {
    local_18 = (longlong *)0x0;
    local_10 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"TXT_Preview_Title",0x24);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
    *(undefined8 *)(param_1 + 0x260) = uVar1;
    plVar3 = local_28;
    for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
      lVar2 = **(longlong **)(param_1 + 0x260);
      uVar1 = FUN_1404b03b0();
      (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x260),uVar1,1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x268) == 0) {
    local_28 = (longlong *)0x0;
    local_20 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"TXT_Tooltip",0x18);
    local_18 = (longlong *)0x0;
    local_10 = 0;
    uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
    *(undefined8 *)(param_1 + 0x268) = uVar1;
    plVar3 = local_18;
    for (iVar4 = (int)local_10; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(longlong **)(param_1 + 0x268) != (longlong *)0x0) {
      lVar2 = **(longlong **)(param_1 + 0x268);
      uVar1 = FUN_1404b03b0();
      (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x268),uVar1,1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x270) == 0) {
    local_28 = (longlong *)0x0;
    local_20 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"CONT_Preview",0x1a);
    local_18 = (longlong *)0x0;
    local_10 = 0;
    lVar2 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
    plVar3 = local_18;
    for (iVar4 = (int)local_10; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(lVar2 + 0x38);
    }
  }
  return;
}



// FUNCTION 1411a6340 FUN_1411a6340 body=641 status=ok
// SIG undefined FUN_1411a6340(void)

void FUN_1411a6340(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 0x12;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"TXT_Preview_Title",0x24);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar2 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  plVar4 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x170);
    uVar2 = FUN_1404b03b0();
    (**(code **)(lVar1 + 0x2b0))(*(undefined8 *)(param_1 + 0x170),uVar2,1,0);
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"TXT_Tooltip_Line1",0x24);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar2 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x178) = uVar2;
  plVar4 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x178) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x178);
    uVar2 = FUN_1404b03b0();
    (**(code **)(lVar1 + 0x2b0))(*(undefined8 *)(param_1 + 0x178),uVar2,1,0);
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"TXT_Tooltip_Line2",0x24);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar2 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x180) = uVar2;
  plVar4 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x180);
    uVar2 = FUN_1404b03b0();
    (**(code **)(lVar1 + 0x2b0))(*(undefined8 *)(param_1 + 0x180),uVar2,1,0);
  }
  return;
}



// FUNCTION 1411a65d0 FUN_1411a65d0 body=1191 status=ok
// SIG undefined FUN_1411a65d0(void)

void FUN_1411a65d0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ec5080();
  local_20 = 10;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28,10,"hostLevel",10,0x3f);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_38);
  *(undefined8 *)(param_1 + 0x308) = uVar1;
  plVar3 = local_38;
  for (iVar2 = (int)local_30; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38,0xc,"playthrough",0xc,0x3f);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x310) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38,8,"mission",8,0x3f);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x318) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38,0x15,"players.numOfPlayers",0x15,0x3f);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 800) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38,0x13,"players.maxPlayers",0x13,0x3f);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x328) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38,0x19,"latencyIndicator.latency",0x19,0x3f);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x330) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x25;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_38,0x25,"latencyIndicator.networkStrengthIcon",0x25,0x3f);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x338) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411a6a80 FUN_1411a6a80 body=738 status=ok
// SIG undefined FUN_1411a6a80(void)

void FUN_1411a6a80(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong local_res10;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  FUN_142ec3600();
  local_30 = 0xd;
  local_38 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"PNL_Discount",0x1a);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_140e99270(param_1,param_1 + 0x2c8,&local_38,0,6,&local_48);
  plVar7 = local_48;
  for (iVar8 = (int)local_40; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"ItemPicture",0x18);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e98b90(param_1,param_1 + 0x2d0,&local_48,0,6,&local_38);
  plVar7 = local_38;
  for (iVar8 = (int)local_30; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"TXT_StoreItem_Type",0x26);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e99270(param_1,param_1 + 0x2d8,&local_48,0,6,&local_38);
  plVar7 = local_38;
  for (iVar8 = (int)local_30; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar6 = *(longlong *)(param_1 + 0x38);
  if (lVar6 != 0) {
    lVar4 = AGImpulseWindProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGFxStoreMenu::OnClickStoreButton",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      FWeakObjectPtr::operator=(param_1 + 0x1b0,lVar6);
      *(longlong *)(param_1 + 0x1b8) = local_res10;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(param_1 + 0x1b0), lVar6 != 0)) {
        UObject::FindFunction(lVar6,*(undefined8 *)(param_1 + 0x1b8));
      }
    }
  }
  return;
}



// FUNCTION 1411a6d70 FUN_1411a6d70 body=1461 status=ok
// SIG undefined FUN_1411a6d70(void)

void FUN_1411a6d70(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  
  FUN_142ec3600();
  uVar10 = 0;
  local_50 = 7;
  local_res10 = (longlong *)0x0;
  local_res18 = (longlong *)0x0;
  local_res20 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  local_70 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"entry0",0xe);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  FUN_141187c10(param_1,&local_res10,&local_58,0,6,&local_68);
  plVar11 = local_68;
  for (iVar12 = (int)local_60; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_68 = (longlong *)0x0;
  local_60 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"entry1",0xe);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_141187c10(param_1,&local_res18,&local_68,0,6,&local_58);
  plVar11 = local_58;
  for (iVar12 = (int)local_50; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_68 = (longlong *)0x0;
  local_60 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"entry2",0xe);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_141187c10(param_1,&local_res20,&local_68,0,6,&local_58);
  plVar11 = local_58;
  for (iVar12 = (int)local_50; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_68 = (longlong *)0x0;
  local_60 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"entry3",0xe);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_141187c10(param_1,&local_78,&local_68,0,6,&local_58);
  plVar11 = local_58;
  for (iVar12 = (int)local_50; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_68 = (longlong *)0x0;
  local_60 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"entry4",0xe);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_141187c10(param_1,&local_70,&local_68,0,6,&local_58);
  plVar11 = local_58;
  for (iVar12 = (int)local_50; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar11 = (longlong *)(param_1 + 0x2c8);
  iVar12 = *(int *)(param_1 + 0x2d0);
  *(int *)(param_1 + 0x2d0) = iVar12 + 1;
  if (*(int *)(param_1 + 0x2d4) < iVar12 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar12);
  }
  plVar3 = local_res10;
  *(longlong **)(*plVar11 + (longlong)iVar12 * 8) = local_res10;
  iVar12 = *(int *)(param_1 + 0x2d0);
  *(int *)(param_1 + 0x2d0) = iVar12 + 1;
  if (*(int *)(param_1 + 0x2d4) < iVar12 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar12);
  }
  plVar4 = local_res18;
  *(longlong **)(*plVar11 + (longlong)iVar12 * 8) = local_res18;
  iVar12 = *(int *)(param_1 + 0x2d0);
  *(int *)(param_1 + 0x2d0) = iVar12 + 1;
  if (*(int *)(param_1 + 0x2d4) < iVar12 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar12);
  }
  plVar5 = local_res20;
  *(longlong **)(*plVar11 + (longlong)iVar12 * 8) = local_res20;
  iVar12 = *(int *)(param_1 + 0x2d0);
  *(int *)(param_1 + 0x2d0) = iVar12 + 1;
  if (*(int *)(param_1 + 0x2d4) < iVar12 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar12);
  }
  plVar6 = local_78;
  *(longlong **)(*plVar11 + (longlong)iVar12 * 8) = local_78;
  iVar12 = *(int *)(param_1 + 0x2d0);
  *(int *)(param_1 + 0x2d0) = iVar12 + 1;
  if (*(int *)(param_1 + 0x2d4) < iVar12 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar12);
  }
  plVar7 = local_70;
  *(longlong **)(*plVar11 + (longlong)iVar12 * 8) = local_70;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar8 = AGImpulseWindProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_58 = plVar3;
      uVar9 = uVar10;
      if (plVar3 != (longlong *)0x0) {
        uVar9 = UBlendableInterface::GetPrivateStaticClass();
        uVar9 = UObjectBaseUtility::GetInterfaceAddress(plVar3,uVar9);
      }
      local_50 = uVar9;
      FUN_142ecfdd0(lVar1,&local_58,0,plVar5,0,plVar4);
      local_58 = plVar4;
      uVar9 = uVar10;
      if (plVar4 != (longlong *)0x0) {
        uVar9 = UBlendableInterface::GetPrivateStaticClass();
        uVar9 = UObjectBaseUtility::GetInterfaceAddress(plVar4,uVar9);
      }
      local_50 = uVar9;
      FUN_142ecfdd0(lVar1,&local_58,0,plVar7,plVar3,0);
      local_58 = plVar5;
      uVar9 = uVar10;
      if (plVar5 != (longlong *)0x0) {
        uVar9 = UBlendableInterface::GetPrivateStaticClass();
        uVar9 = UObjectBaseUtility::GetInterfaceAddress(plVar5,uVar9);
      }
      local_50 = uVar9;
      FUN_142ecfdd0(lVar1,&local_58,plVar3,0,0,plVar6);
      local_58 = plVar6;
      uVar9 = uVar10;
      if (plVar6 != (longlong *)0x0) {
        uVar9 = UBlendableInterface::GetPrivateStaticClass();
        uVar9 = UObjectBaseUtility::GetInterfaceAddress(plVar6,uVar9);
      }
      local_50 = uVar9;
      FUN_142ecfdd0(lVar1,&local_58,plVar3,0,plVar5,plVar7);
      local_58 = plVar7;
      uVar9 = uVar10;
      if (plVar7 != (longlong *)0x0) {
        uVar9 = UBlendableInterface::GetPrivateStaticClass();
        uVar9 = UObjectBaseUtility::GetInterfaceAddress(plVar7,uVar9);
      }
      local_50 = uVar9;
      FUN_142ecfdd0(lVar1,&local_58,plVar4,0,plVar6,0);
      local_58 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        uVar10 = UBlendableInterface::GetPrivateStaticClass();
        uVar10 = UObjectBaseUtility::GetInterfaceAddress(plVar3,uVar10);
      }
      local_50 = uVar10;
      FUN_142ed36d0(lVar1,&local_58,0);
    }
  }
  return;
}



// FUNCTION 1411a7330 FUN_1411a7330 body=1673 status=ok
// SIG undefined FUN_1411a7330(void)

void FUN_1411a7330(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ef9e70();
  local_20 = 0x15;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"CONT_DLCStore_Detail",0x2a);
  local_38 = (longlong *)0x0;
  plVar7 = (longlong *)(param_1 + 0x178);
  local_30 = 0;
  FUN_140e98b90(param_1,plVar7,&local_28,0,6,&local_38);
  plVar6 = local_38;
  for (iVar5 = (int)local_30; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*plVar7 != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"TXT_Detail_Title",0x22);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e99270(*plVar7,param_1 + 0x180,&local_38,0,6,&local_28);
    plVar6 = local_28;
    for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_38 = (longlong *)0x0;
    local_30 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"TXT_Detail_Type",0x20);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e99270(*plVar7,param_1 + 0x188,&local_38,0,6,&local_28);
    plVar6 = local_28;
    for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_38 = (longlong *)0x0;
    local_30 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"TXT_Detail_Desc",0x20);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e99270(*plVar7,param_1 + 400,&local_38,0,6,&local_28);
    plVar6 = local_28;
    for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_38 = (longlong *)0x0;
    local_30 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"PNL_Install",0x18);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98b90(*plVar7,param_1 + 0x198,&local_38,0,6,&local_28);
    plVar6 = local_28;
    for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x198) != 0) {
      local_38 = (longlong *)0x0;
      local_30 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,L"Text",10);
      local_28 = (longlong *)0x0;
      local_20 = 0;
      FUN_140e99270(*(undefined8 *)(param_1 + 0x198),param_1 + 0x1a0,&local_38,0,6,&local_28);
      plVar6 = local_28;
      for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    local_38 = (longlong *)0x0;
    local_30 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"PNL_Purchase",0x1a);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98b90(*plVar7,param_1 + 0x1a8,&local_38,0,6,&local_28);
    plVar7 = local_28;
    for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      local_38 = (longlong *)0x0;
      local_30 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,L"Text",10);
      local_28 = (longlong *)0x0;
      local_20 = 0;
      FUN_140e99270(*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x1b0,&local_38,0,6,&local_28);
      plVar7 = local_28;
      for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    local_38 = (longlong *)0x0;
    local_30 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"HintButton",0x16);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98630(param_1,param_1 + 0x1b8,&local_38,0,6,&local_28);
    plVar7 = local_28;
    for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = AGImpulseWindProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar7 = *(longlong **)(param_1 + 0x1b8), plVar7 != (longlong *)0x0)) {
      local_20 = 0;
      local_28 = plVar7;
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_20 = UObjectBaseUtility::GetInterfaceAddress(plVar7,uVar4);
      FUN_142ecff00(lVar1,&local_28,DAT_146b3e2a0);
    }
  }
  return;
}



// FUNCTION 1411a79c0 FUN_1411a79c0 body=879 status=ok
// SIG undefined FUN_1411a79c0(void)

void FUN_1411a79c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong local_res8;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  FUN_142ef9e70();
  uVar5 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 7;
  local_res8 = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"entry0",0xe);
  FUN_14118cb10(&local_res8,1,&local_48);
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"entry1",0xe);
  FUN_14118cb10(&local_res8,2,&local_48);
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"entry2",0xe);
  FUN_14118cb10(&local_res8,3,&local_48);
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"entry3",0xe);
  FUN_14118cb10(&local_res8,4,&local_48);
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"previousButtonText.hint",0x30);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_140e98630(param_1,param_1 + 0x180,&local_38,0,6,&local_48);
  plVar6 = local_48;
  for (iVar7 = (int)local_40; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"nextButtonText.hint",0x28);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e98630(param_1,param_1 + 0x188,&local_48,0,6,&local_38);
  plVar6 = local_38;
  for (iVar7 = (int)local_30; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = AGImpulseWindProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (plVar6 = *(longlong **)(param_1 + 0x180), plVar6 != (longlong *)0x0)) &&
       (*(longlong *)(param_1 + 0x188) != 0)) {
      local_30 = 0;
      local_38 = plVar6;
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_30 = UObjectBaseUtility::GetInterfaceAddress(plVar6,uVar4);
      FUN_142ecff00(lVar1,&local_38,DAT_146875d20);
      plVar6 = *(longlong **)(param_1 + 0x188);
      local_38 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        uVar5 = UBlendableInterface::GetPrivateStaticClass();
        uVar5 = UObjectBaseUtility::GetInterfaceAddress(plVar6,uVar5);
      }
      local_30 = uVar5;
      FUN_142ecff00(lVar1,&local_38,DAT_146875d18);
    }
  }
  return;
}



// FUNCTION 1411a7d30 FUN_1411a7d30 body=740 status=ok
// SIG undefined FUN_1411a7d30(void)

void FUN_1411a7d30(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ef9e70();
  uVar5 = 0;
  local_20 = 0x13;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"pageGlyphLeft.hint",0x26);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e98630(param_1,param_1 + 0x178,&local_28,0,6,&local_38);
  plVar6 = local_38;
  for (iVar7 = (int)local_30; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"pageGlyphRight.hint",0x28);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e98630(param_1,param_1 + 0x180,&local_38,0,6,&local_28);
  plVar6 = local_28;
  for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"PNL_MenuPager",0x1c);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e99270(param_1,param_1 + 0x170,&local_38,0,6,&local_28);
  plVar6 = local_28;
  for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = AGImpulseWindProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (plVar6 = *(longlong **)(param_1 + 0x178), plVar6 != (longlong *)0x0)) &&
       (*(longlong *)(param_1 + 0x180) != 0)) {
      local_20 = 0;
      local_28 = plVar6;
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_20 = UObjectBaseUtility::GetInterfaceAddress(plVar6,uVar4);
      FUN_142ecff00(lVar1,&local_28,DAT_146875d30);
      plVar6 = *(longlong **)(param_1 + 0x180);
      local_28 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        uVar5 = UBlendableInterface::GetPrivateStaticClass();
        uVar5 = UObjectBaseUtility::GetInterfaceAddress(plVar6,uVar5);
      }
      local_20 = uVar5;
      FUN_142ecff00(lVar1,&local_28,DAT_146875d28);
    }
  }
  return;
}



// FUNCTION 1411a8020 FUN_1411a8020 body=1151 status=ok
// SIG undefined FUN_1411a8020(void)

void FUN_1411a8020(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  FUN_142ef9e70();
  local_110 = 0xe;
  local_118 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"CONT_DLCStore",0x1c);
  local_128 = (longlong *)0x0;
  plVar4 = (longlong *)(param_1 + 0x178);
  local_120 = 0;
  FUN_140e98b90(param_1,plVar4,&local_118,0,6,&local_128);
  plVar6 = local_128;
  for (iVar5 = (int)local_120; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (*plVar4 != 0) {
    local_f8 = 0;
    local_f0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,L"TXT_Title",0x14);
    local_108 = (longlong *)0x0;
    local_100 = 0;
    FUN_140e99270(*plVar4,param_1 + 0x180,&local_f8,0,6,&local_108);
    plVar6 = local_108;
    for (iVar5 = (int)local_100; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free(local_108);
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
    local_d8 = 0;
    local_d0 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"contentMenu",0x18);
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    FUN_141188560(*plVar4,param_1 + 0x188,&local_d8,0,6,&local_e8);
    plVar6 = local_e8;
    for (iVar5 = (int)local_e0; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free(local_e8);
    }
    if (local_d8 != 0) {
      FMemory::Free();
    }
    local_b8 = 0;
    local_b0 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"TXT_SubTitle",0x1a);
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    FUN_140e99270(*plVar4,param_1 + 400,&local_b8,0,6,&local_c8);
    plVar6 = local_c8;
    for (iVar5 = (int)local_c0; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
    local_98 = 0;
    local_90 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"CONT_ItemsList",0x1e);
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    local_68 = 0;
    FUN_141187f80(*plVar4,param_1 + 0x198,&local_98,0,6,&local_a8);
    plVar6 = local_a8;
    for (iVar5 = (int)local_a0; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    local_78 = 0;
    local_70 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"PNL_Paging",0x16);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    local_60 = 0;
    FUN_1411888d0(*plVar4,param_1 + 0x1a0,&local_78,0,6,&local_88);
    plVar4 = local_88;
    for (iVar5 = (int)local_80; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x180);
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Store Menu",L"GFxStoreMenu",L"StoreMenuText");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x180),uVar3,1,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar2 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return;
}



// FUNCTION 1411a84a0 FUN_1411a84a0 body=194 status=ok
// SIG undefined FUN_1411a84a0(void)

void FUN_1411a84a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ec3600();
  local_10 = 0xe;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"IMG_Ico_Store",0x1c);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e98b90(param_1,param_1 + 0x2c8,&local_18,0,6,&local_28);
  plVar1 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411a8570 FUN_1411a8570 body=566 status=ok
// SIG undefined FUN_1411a8570(void)

void FUN_1411a8570(longlong *param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0x5cc);
  if (lVar7 == 0) {
LAB_1411a8600:
    lVar7 = 0;
  }
  else {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1411a8600;
    lVar8 = FUN_140bba5e0(lVar7);
    if (lVar8 != 0) {
      TBaseMulticastDelegate<void>::Remove(lVar8 + 0x38,param_1[0xd7]);
    }
  }
  local_40 = (longlong *)0x0;
  if (param_1 + 0xd5 != &local_48) {
    param_1[0xd5] = 0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd6,&local_40);
    plVar5 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  if (param_3 == '\0') {
    if (lVar7 != 0) {
      FUN_140ba9020(lVar7);
    }
    uVar9 = 0;
    goto LAB_1411a878b;
  }
  if (lVar7 == 0) {
    return;
  }
  lVar8 = UGameInstance::GetFirstGamePlayer(lVar7);
  if (lVar8 == 0) {
    return;
  }
  FUN_140bec4b0(lVar7,lVar8,param_2,param_4);
  *(undefined1 *)(lVar7 + 0xba8) = 1;
  lVar7 = *(longlong *)(lVar8 + 0x30);
  if (lVar7 == 0) {
LAB_1411a8708:
    lVar7 = 0;
  }
  else {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1411a8708;
  }
  FWeakObjectPtr::operator=((longlong)param_1 + 0x684,lVar7);
  cVar6 = FUN_14044af00((longlong)param_1 + 0x684,0);
  if (cVar6 != '\0') {
    uVar9 = FWeakObjectPtr::Get((longlong)param_1 + 0x684);
    FUN_140d02500(uVar9);
  }
  lVar7 = *param_1;
  local_38 = 0;
  local_30 = 0;
  puVar10 = (undefined8 *)FName::FName(local_res8,L"MainMenu_PressStart_Stinger",1);
  (**(code **)(lVar7 + 0x4e8))(param_1,*puVar10,&local_38);
  uVar9 = 3;
LAB_1411a878b:
  FUN_14119ec60(param_1,uVar9);
  return;
}



// FUNCTION 1411a87b0 FUN_1411a87b0 body=97 status=ok
// SIG undefined FUN_1411a87b0(void)

undefined1 FUN_1411a87b0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  
  cVar1 = FUN_142ec6030();
  if (cVar1 != '\0') {
    return 1;
  }
  if (((*(int *)(param_1 + 0x1a8) == 0) && (*(char *)(param_2 + 0xc) == '\0')) &&
     (cVar1 = FUN_14118c120(local_res8,param_2), cVar1 != '\0')) {
    FUN_14119ed60(param_1 + -0x4d8,*(undefined4 *)(param_2 + 8));
    return 1;
  }
  return 0;
}



// FUNCTION 1411a8820 FUN_1411a8820 body=819 status=ok
// SIG undefined FUN_1411a8820(void)

char FUN_1411a8820(longlong param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar3 != '\0') {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar6 = FUN_140ec9a00(uVar5);
    if ((lVar6 != 0) &&
       ((cVar3 = (**(code **)(*(longlong *)(lVar6 + 0x4d8) + 0xc0))
                           ((longlong *)(lVar6 + 0x4d8),param_2), cVar3 != '\0' ||
        (cVar3 = FUN_141111680(lVar6), cVar3 != '\0')))) {
      return '\x01';
    }
  }
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    if ((*(uint *)(param_1 + 0x278) < 0x12) &&
       ((0x20028U >> (*(uint *)(param_1 + 0x278) & 0x1f) & 1) != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((bVar2) && (lVar6 = *(longlong *)(param_1 + 0x270), lVar6 != 0)) {
      lVar7 = FUN_1413464b0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (*(longlong *)(lVar6 + 0x198) != 0)) &&
         (cVar3 = FUN_142ebdf00(), cVar3 != '\0')) goto LAB_1411a895a;
    }
    plVar8 = *(longlong **)(param_1 + 0x270);
    if ((plVar8 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar8 + 0x2a0))(plVar8,0), cVar3 != '\0')) {
      *(undefined1 *)(param_1 + 0x29c) = 1;
      return '\x01';
    }
  }
LAB_1411a895a:
  cVar3 = FUN_142ec6030(param_1,param_2);
  if (cVar3 != '\0') {
    LOCK();
    *(undefined4 *)(param_1 + 0xb0) = 1;
    UNLOCK();
    return '\x01';
  }
  cVar3 = *(char *)((longlong)param_2 + 0xc);
  if ((cVar3 == '\0') && (DAT_146875e20 == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x2a8))();
    if (cVar3 == '\0') {
      FUN_141190230(param_1 + -0x4d8);
    }
    cVar4 = '\x01';
    goto LAB_1411a8b2f;
  }
  if ((cVar3 == '\0') && (DAT_146875d18 == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = *(uint *)(param_1 + 0x278);
    if (8 < uVar1 - 7) {
      if ((uVar1 < 0x12) && ((0x20028U >> (uVar1 & 0x1f) & 1) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) goto LAB_1411a8a1b;
    }
    FUN_1411911c0(param_1 + -0x4d8,CONCAT71((uint7)(uint3)(uVar1 >> 8),1));
    cVar4 = '\x01';
    goto LAB_1411a8b2f;
  }
LAB_1411a8a1b:
  if ((cVar3 == '\0') && (DAT_146875d20 == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = *(uint *)(param_1 + 0x278);
    if (8 < uVar1 - 7) {
      if ((uVar1 < 0x12) && ((0x20028U >> (uVar1 & 0x1f) & 1) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) goto LAB_1411a8a72;
    }
    FUN_1411911c0(param_1 + -0x4d8,0);
    cVar4 = '\x01';
    goto LAB_1411a8b2f;
  }
LAB_1411a8a72:
  if ((cVar3 == '\0') && (DAT_146875e30 == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  cVar4 = '\0';
  if (bVar2) {
LAB_1411a8ac0:
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x178);
    if (lVar6 != 0) {
      plVar8 = (longlong *)(lVar6 + 0x170);
      cVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
LAB_1411a8ae3:
      if (cVar4 != '\0') goto LAB_1411a8b2f;
    }
  }
  else {
    if ((cVar3 == '\0') && (DAT_146875e38 == *param_2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) goto LAB_1411a8ac0;
    plVar8 = *(longlong **)(param_1 + 0x270);
    if (plVar8 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar8 + 0x290))(plVar8,param_2);
      goto LAB_1411a8ae3;
    }
  }
  if ((*(longlong *)(param_1 + 0x270) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x270) + 0x28) != '\0')) {
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146875e28 == *param_2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((bVar2) && (plVar8 = *(longlong **)(param_1 + 0x270), plVar8 != (longlong *)0x0)) {
      (**(code **)(*plVar8 + 0x2a0))(plVar8,0);
    }
  }
LAB_1411a8b2f:
  LOCK();
  *(undefined4 *)(param_1 + 0xb0) = 1;
  UNLOCK();
  return cVar4;
}



// FUNCTION 1411a8b60 FUN_1411a8b60 body=598 status=ok
// SIG undefined FUN_1411a8b60(void)

undefined8 FUN_1411a8b60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (((((*(longlong *)(param_1 + 0x4b0) == 0) || (*(char *)((longlong)param_2 + 0xc) != '\0')) ||
       ((lVar1 = *param_2, DAT_146875ca0 != lVar1 &&
        (((DAT_146875ca8 != lVar1 && (DAT_146875c90 != lVar1)) && (DAT_146875c98 != lVar1)))))) ||
      (plVar5 = (longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x4d8),
      cVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5,param_2), cVar2 == '\0')) &&
     (cVar2 = FUN_142ec6030(param_1,param_2), cVar2 == '\0')) {
    if ((*(longlong *)(param_1 + 0x4b0) == 0) ||
       (plVar5 = (longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x4d8),
       cVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5,param_2), cVar2 == '\0')) {
      cVar2 = *(char *)((longlong)param_2 + 0xc);
      if ((cVar2 == '\0') && (DAT_146875c98 == *param_2)) {
        if ((((*(longlong *)(param_1 + 0x4a8) != 0) &&
             (cVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4a8) + 0x170) + 0x48))(),
             cVar2 != '\0')) && (*(longlong *)(param_1 + 0x4b0) != 0)) &&
           (cVar2 = FUN_1411116e0(), cVar2 != '\0')) {
          local_18 = 0;
          uStack_10 = 0;
          FUN_142ed36d0(param_1 + -0x4d8,&local_18,0);
          FUN_14110c960(*(undefined8 *)(param_1 + 0x4b0));
          return 1;
        }
      }
      else {
        if (*(int *)(param_1 + 0x3c4) != 0) {
          if (cVar2 != '\0') {
            return 0;
          }
          if (DAT_146b3e2b8 == *param_2) {
            FUN_1411323d0(param_1 + -0x4d8,0);
            cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
            if (cVar2 == '\0') {
              return 1;
            }
            uVar3 = FWeakObjectPtr::Get(param_1 + 0xc4);
            FUN_142ee3990(uVar3);
            return 1;
          }
        }
        if ((cVar2 == '\0') &&
           (((DAT_146b3e2b8 == *param_2 || (DAT_146875d08 == *param_2)) ||
            (DAT_146875eb8 == *param_2)))) {
          local_18 = 0;
          uStack_10 = 0;
          if (*(int *)(param_1 + 0x60) == 0) {
            puVar6 = &DAT_143f3eda8;
          }
          else {
            puVar6 = *(undefined2 **)(param_1 + 0x58);
          }
          lVar1 = *(longlong *)(param_1 + -0x4d8);
          puVar4 = (undefined8 *)FName::FName(local_res8,puVar6,1);
          (**(code **)(lVar1 + 0x4e8))(param_1 + -0x4d8,*puVar4,&local_18);
          FUN_1411ae9c0(param_1 + -0x4d8,0,param_2);
          return 1;
        }
      }
      return 0;
    }
    FUN_142ebe410(param_1 + -0x4d8);
  }
  return 1;
}



// FUNCTION 1411a8dc0 FUN_1411a8dc0 body=300 status=ok
// SIG undefined FUN_1411a8dc0(void)

undefined8 FUN_1411a8dc0(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_1410db2b0();
  if (cVar1 == '\0') {
    if (*(char *)((longlong)param_2 + 0xc) != '\0') {
      return 0;
    }
    if (DAT_146875d88 != *param_2) {
      if (DAT_146875d90 == *param_2) {
        FUN_1411b1550(param_1 + -0x4d8);
        return 1;
      }
      if (DAT_146875d30 == *param_2) {
        uVar2 = *(byte *)(param_1 + 0x218) + 1;
        *(char *)(param_1 + 0x218) = (char)uVar2 + (char)((ulonglong)uVar2 / 5) * -5;
        FUN_1411bfb60(param_1 + -0x4d8);
        FUN_1411bf7a0(param_1 + -0x4d8);
      }
      else {
        if (DAT_146875d28 != *param_2) {
          return 0;
        }
        *(bool *)(param_1 + 0x219) = *(char *)(param_1 + 0x219) == '\0';
        FUN_1411bfb60(param_1 + -0x4d8);
        FUN_1411bfc30(param_1 + -0x4d8);
      }
      FUN_1411bc030(param_1 + -0x4d8);
      FUN_1411b3ce0(param_1 + -0x4d8);
      return 1;
    }
    FUN_1411b5480(param_1 + -0x4d8);
  }
  return 1;
}



// FUNCTION 1411a8ef0 FUN_1411a8ef0 body=1032 status=ok
// SIG undefined FUN_1411a8ef0(void)

undefined8 FUN_1411a8ef0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar3 != '\0') {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar6 = FUN_140ec9a00(uVar5);
    if (lVar6 != 0) {
      cVar3 = (**(code **)(*(longlong *)(lVar6 + 0x4d8) + 0xc0))
                        ((longlong *)(lVar6 + 0x4d8),param_2);
      if (cVar3 != '\0') {
        return 1;
      }
      cVar3 = FUN_141111680(lVar6);
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  if (*(char *)((longlong)param_2 + 0xc) != '\0') {
LAB_1411a92a3:
    cVar3 = FUN_142ec6030(param_1,param_2);
    if (cVar3 == '\0') {
      if ((*(char *)((longlong)param_2 + 0xc) != '\0') || (DAT_146b3e2a0 != *param_2)) {
        return 0;
      }
      FUN_1411a35c0(param_1 + -0x4d8,0,param_2);
    }
    return 1;
  }
  if (DAT_146875d30 == *param_2) {
    lVar6 = *(longlong *)(param_1 + 0x1c0);
    if (lVar6 == 0) {
      return 1;
    }
    iVar9 = 1;
    if ((*(longlong *)(lVar6 + 0x1b0) != 0) &&
       (iVar4 = *(int *)(*(longlong *)(lVar6 + 0x1b0) + 0x60), 0 < iVar4)) {
      iVar4 = iVar4 + -1;
      iVar9 = ((int)((iVar4 >> 0x1f & 3U) + iVar4) >> 2) + 1;
    }
    uVar2 = (longlong)(*(int *)(lVar6 + 0x1b8) + -1 + iVar9) % (longlong)iVar9;
    if ((int)uVar2 == *(int *)(lVar6 + 0x1b8)) {
      return 1;
    }
    if (*(longlong **)(lVar6 + 0x38) != (longlong *)0x0) {
      local_18 = 0;
      local_10 = 0;
      lVar1 = **(longlong **)(lVar6 + 0x38);
      puVar7 = (undefined8 *)FName::FName(local_res8,L"Navigate",1);
      (**(code **)(lVar1 + 0x4e8))(*(undefined8 *)(lVar6 + 0x38),*puVar7,&local_18);
    }
    FUN_1411b7a80(lVar6,uVar2 & 0xffffffff);
    return 1;
  }
  if (DAT_146875d28 == *param_2) {
    lVar6 = *(longlong *)(param_1 + 0x1c0);
    if (lVar6 == 0) {
      return 1;
    }
    iVar9 = 1;
    if ((*(longlong *)(lVar6 + 0x1b0) != 0) &&
       (iVar4 = *(int *)(*(longlong *)(lVar6 + 0x1b0) + 0x60), 0 < iVar4)) {
      iVar4 = iVar4 + -1;
      iVar9 = ((int)((iVar4 >> 0x1f & 3U) + iVar4) >> 2) + 1;
    }
    uVar2 = (longlong)(*(int *)(lVar6 + 0x1b8) + 1 + iVar9) % (longlong)iVar9;
    if ((int)uVar2 == *(int *)(lVar6 + 0x1b8)) {
      return 1;
    }
    if (*(longlong **)(lVar6 + 0x38) != (longlong *)0x0) {
      local_18 = 0;
      local_10 = 0;
      lVar1 = **(longlong **)(lVar6 + 0x38);
      puVar7 = (undefined8 *)FName::FName(local_res8,L"Navigate",1);
      (**(code **)(lVar1 + 0x4e8))(*(undefined8 *)(lVar6 + 0x38),*puVar7,&local_18);
    }
    FUN_1411b7a80(lVar6,uVar2 & 0xffffffff);
    return 1;
  }
  if (DAT_146875d20 == *param_2) {
    lVar6 = *(longlong *)(param_1 + 0x1c0);
    if (lVar6 == 0) {
      return 1;
    }
    piVar8 = *(int **)(lVar6 + 0x1b0);
    if (piVar8 != (int *)0x0) {
      if (*(longlong **)(lVar6 + 0x38) != (longlong *)0x0) {
        local_18 = 0;
        local_10 = 0;
        lVar1 = **(longlong **)(lVar6 + 0x38);
        puVar7 = (undefined8 *)FName::FName(local_res8,L"Navigate",1);
        (**(code **)(lVar1 + 0x4e8))(*(undefined8 *)(lVar6 + 0x38),*puVar7,&local_18);
        piVar8 = *(int **)(lVar6 + 0x1b0);
      }
      iVar9 = *piVar8;
      if (iVar9 == 1) {
LAB_1411a91c9:
        FUN_1411b7de0(lVar6,4);
        return 1;
      }
      if (iVar9 != 2) {
        if (iVar9 != 3) {
          if (iVar9 != 4) {
            return 1;
          }
          goto LAB_1411a918b;
        }
        goto LAB_1411a91aa;
      }
    }
  }
  else {
    if (DAT_146875d18 != *param_2) goto LAB_1411a92a3;
    lVar6 = *(longlong *)(param_1 + 0x1c0);
    if (lVar6 == 0) {
      return 1;
    }
    piVar8 = *(int **)(lVar6 + 0x1b0);
    if (piVar8 != (int *)0x0) {
      if (*(longlong **)(lVar6 + 0x38) != (longlong *)0x0) {
        local_18 = 0;
        local_10 = 0;
        lVar1 = **(longlong **)(lVar6 + 0x38);
        puVar7 = (undefined8 *)FName::FName(local_res8,L"Navigate",1);
        (**(code **)(lVar1 + 0x4e8))(*(undefined8 *)(lVar6 + 0x38),*puVar7,&local_18);
        piVar8 = *(int **)(lVar6 + 0x1b0);
      }
      iVar9 = *piVar8;
      if (iVar9 == 1) {
LAB_1411a91aa:
        FUN_1411b7de0(lVar6,2);
        return 1;
      }
      if (iVar9 == 2) {
LAB_1411a918b:
        FUN_1411b7de0(lVar6,3);
        return 1;
      }
      if (iVar9 == 3) goto LAB_1411a91c9;
      if (iVar9 != 4) {
        return 1;
      }
    }
  }
  FUN_1411b7de0(lVar6,1);
  return 1;
}



// FUNCTION 1411a9300 FUN_1411a9300 body=490 status=ok
// SIG undefined FUN_1411a9300(void)

void FUN_1411a9300(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60;
  undefined8 local_58;
  undefined2 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  if ((*(longlong *)(param_1 + 0x2e8) != 0) && (*(longlong *)(param_1 + 0x2e0) != 0)) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x308);
    (**(code **)(*plVar5 + 0x10))(plVar5,0,*(undefined8 *)(param_1 + 0x68));
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x308);
    (**(code **)(*plVar5 + 0x10))(plVar5,0,*(undefined8 *)(param_1 + 0x68));
    local_48 = 0;
    local_40 = 0;
    uVar4 = FUN_1404b03b0();
    FText::FText(local_38,uVar4);
    uVar2 = local_40;
    lVar6 = (longlong)(int)local_40;
    local_18 = 0;
    local_10 = 1;
    local_20 = 1;
    iVar3 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar3);
    if (local_40._4_4_ < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_48,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_48 + lVar6 * 8) = DAT_146875d20;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x308);
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_48,0);
    local_88 = 0;
    local_80 = 0;
    uVar4 = FUN_1404b03b0();
    FText::FText(local_78,uVar4);
    uVar2 = local_80;
    lVar6 = (longlong)(int)local_80;
    local_58 = 0;
    local_50 = 1;
    iVar3 = (int)local_80 + 1;
    local_60 = 1;
    local_80 = CONCAT44(local_80._4_4_,iVar3);
    if (local_80._4_4_ < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_88,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_88 + lVar6 * 8) = DAT_146875d18;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x308);
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_88,0);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_70 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1411a94f0 FUN_1411a94f0 body=655 status=ok
// SIG undefined FUN_1411a94f0(void)

void FUN_1411a94f0(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_108;
  undefined8 local_100;
  undefined1 local_f8 [24];
  undefined1 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [24];
  undefined1 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [24];
  undefined1 local_60;
  undefined8 local_58;
  undefined2 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  undefined1 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  if ((((*(longlong *)(param_1 + 0x1d8) != 0) && (*(longlong *)(param_1 + 0x1d0) != 0)) &&
      (*(longlong *)(param_1 + 0x1e0) != 0)) && (*(longlong *)(param_1 + 0x1e8) != 0)) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1d0) + 0x308);
    (**(code **)(*plVar4 + 0x10))(plVar4,0,*(undefined8 *)(param_1 + 0x68));
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x308);
    (**(code **)(*plVar4 + 0x10))(plVar4,0,*(undefined8 *)(param_1 + 0x68));
    local_48 = 0;
    local_40 = 0;
    uVar3 = FUN_1404b03b0();
    FText::FText(local_38,uVar3);
    uVar1 = local_40;
    lVar5 = (longlong)(int)local_40;
    local_18 = 0;
    local_10 = 1;
    local_20 = 1;
    iVar2 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar2);
    if (local_40._4_4_ < iVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_48,uVar1 & 0xffffffff);
    }
    *(undefined8 *)(local_48 + lVar5 * 8) = DAT_146875d20;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1d0) + 0x308);
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48,0);
    local_88 = 0;
    local_80 = 0;
    uVar3 = FUN_1404b03b0();
    FText::FText(local_78,uVar3);
    uVar1 = local_80;
    lVar5 = (longlong)(int)local_80;
    local_58 = 0;
    local_50 = 1;
    local_60 = 1;
    iVar2 = (int)local_80 + 1;
    local_80 = CONCAT44(local_80._4_4_,iVar2);
    if (local_80._4_4_ < iVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_88,uVar1 & 0xffffffff);
    }
    *(undefined8 *)(local_88 + lVar5 * 8) = DAT_146875d18;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x308);
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_88,0);
    local_c8 = 0;
    local_c0 = 0;
    uVar3 = FUN_1404b03b0();
    FText::FText(local_b8,uVar3);
    uVar1 = local_c0;
    lVar5 = (longlong)(int)local_c0;
    local_98 = 0;
    local_90 = 1;
    local_a0 = 1;
    iVar2 = (int)local_c0 + 1;
    local_c0 = CONCAT44(local_c0._4_4_,iVar2);
    if (local_c0._4_4_ < iVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_c8,uVar1 & 0xffffffff);
    }
    *(undefined8 *)(local_c8 + lVar5 * 8) = DAT_146875d30;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x308);
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_c8,0);
    local_108 = 0;
    local_100 = 0;
    uVar3 = FUN_1404b03b0();
    FText::FText(local_f8,uVar3);
    uVar1 = local_100;
    lVar5 = (longlong)(int)local_100;
    local_d8 = 0;
    local_d0 = 1;
    iVar2 = (int)local_100 + 1;
    local_e0 = 1;
    local_100 = CONCAT44(local_100._4_4_,iVar2);
    if (local_100._4_4_ < iVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_108,uVar1 & 0xffffffff);
    }
    *(undefined8 *)(local_108 + lVar5 * 8) = DAT_146875d28;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1e8) + 0x308);
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_108,0);
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
              (&local_108);
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
              (&local_c8);
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
              (&local_88);
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
              (&local_48);
  }
  return;
}



// FUNCTION 1411a9780 FUN_1411a9780 body=31 status=ok
// SIG undefined FUN_1411a9780(void)

void FUN_1411a9780(longlong param_1)

{
  FUN_142ec64e0();
  FUN_1411bd7d0(param_1 + -0x4d8);
  return;
}



// FUNCTION 1411a97a0 FUN_1411a97a0 body=410 status=ok
// SIG undefined FUN_1411a97a0(void)

void FUN_1411a97a0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong local_18;
  longlong *local_10;
  
  FUN_142ec64e0();
  FUN_1411c0130(param_1 + -0x4d8);
  plVar4 = *(longlong **)(param_1 + 0x270);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x298))(plVar4,param_2);
  }
  uVar6 = FUN_14119d600(param_1 + -0x4d8);
  iVar3 = *(int *)(param_1 + 0x278);
  if (iVar3 == 10) {
    if ((uVar6 - 0xc & 0xfffffffc) != 0) {
      return;
    }
    if (uVar6 == 0xd) {
      return;
    }
  }
  else if (iVar3 == 0xc) {
    if ((uVar6 - 10 & 0xfffffffa) != 0) {
      return;
    }
    if (uVar6 == 0xb) {
      return;
    }
  }
  else if (iVar3 == 0xe) {
    if (0xf < uVar6) {
      return;
    }
    if ((0x9400U >> (uVar6 & 0x1f) & 1) == 0) {
      return;
    }
  }
  else {
    if (iVar3 != 0xf) {
      return;
    }
    if ((uVar6 - 10 & 0xfffffff9) != 0) {
      return;
    }
    if (uVar6 == 0x10) {
      return;
    }
  }
  if ((*(longlong *)(param_1 + 0x2a0) != 0) &&
     (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0x1b0), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x2b8))(plVar4,3,0);
    FUN_1411986c0(param_1 + -0x4d8,uVar6);
    FUN_140ad4c90(param_1 + -0x4d8,&local_18);
    if (local_18 != 0) {
      FUN_142033230();
    }
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  }
  return;
}



// FUNCTION 1411a9940 FUN_1411a9940 body=43 status=ok
// SIG undefined FUN_1411a9940(void)

void FUN_1411a9940(longlong param_1)

{
  FUN_142ec64e0();
  FUN_1411bf7a0(param_1 + -0x4d8);
  FUN_1411bfc30(param_1 + -0x4d8);
  return;
}



// FUNCTION 1411a9970 FUN_1411a9970 body=269 status=ok
// SIG undefined FUN_1411a9970(void)

void FUN_1411a9970(longlong *param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 - 2U < 2) {
    DAT_1462a155c = 0;
    FUN_14119ec60(param_1,4);
    return;
  }
  if (param_2 != 5) {
    lVar2 = FUN_140f9aee0();
    if (((lVar2 != 0) && (*(char *)(lVar2 + 0xba8) == '\0')) && (DAT_1462a155c != '\0')) {
      DAT_1462a155c = 0;
      FUN_14119ed60(param_1,0);
      return;
    }
    DAT_1462a155c = 0;
    FUN_14119ec60(param_1);
    return;
  }
  DAT_1462a155c = 0;
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (*(longlong *)(lVar2 + 400) == 0) goto LAB_1411a9a0e;
  lVar2 = UGameInstance::GetFirstGamePlayer();
  if (lVar2 == 0) goto LAB_1411a9a0e;
  lVar2 = *(longlong *)(lVar2 + 0x30);
  if (lVar2 == 0) {
LAB_1411a99f8:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1411a99f8;
  }
  FWeakObjectPtr::operator=((longlong)param_1 + 0x684,lVar2);
LAB_1411a9a0e:
  FUN_14119ec60(param_1,3);
  return;
}



// FUNCTION 1411a9a80 FUN_1411a9a80 body=384 status=ok
// SIG undefined FUN_1411a9a80(void)

void FUN_1411a9a80(longlong *param_1)

{
  void *_Src;
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_res8;
  longlong *local_28;
  int local_20;
  
  FUN_142eb3990();
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar8 = (longlong *)0x0;
  plVar4 = plVar8;
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar4 = (longlong *)FUN_142f429c0(uVar3);
  }
  if ((param_1[0x213] == 0) &&
     (FName::FName(&local_res8,"FTS_Sanctuary",1), plVar4 != (longlong *)0x0)) {
    puVar5 = (undefined8 *)USkinnedMeshComponent::GetSlavePoseComponents(plVar4);
    local_28 = (longlong *)0x0;
    local_20 = *(int *)(puVar5 + 1);
    lVar2 = (longlong)local_20;
    _Src = (void *)*puVar5;
    if (local_20 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,local_20,0);
      plVar8 = local_28;
      _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar2 << 3);
    }
    for (plVar7 = plVar8; plVar7 != plVar8 + local_20; plVar7 = plVar7 + 1) {
      if (*(longlong *)(*plVar7 + 0x18) == local_res8) {
        param_1[0x213] = *plVar7;
        break;
      }
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
  }
  if ((((param_1[0x213] != 0) && (plVar4 != (longlong *)0x0)) &&
      (cVar1 = FUN_14044af00((longlong)param_1 + 0x58c,0), cVar1 != '\0')) &&
     (lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c), *(longlong *)(lVar2 + 0x488) != 0)) {
    lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
    uVar3 = *(undefined8 *)(lVar2 + 0x488);
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_142f45ed0(uVar6,param_1[0x213],1,uVar3,0);
  }
  return;
}



// FUNCTION 1411a9c00 FUN_1411a9c00 body=1208 status=ok
// SIG undefined FUN_1411a9c00(void)

void FUN_1411a9c00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong local_res20;
  longlong local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  longlong local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  FText::FText(local_90);
  FText::FText(local_a8);
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_78,L"Abandon Match?",L"PauseMenu",L"LeaveGearUpHeader");
  FText::operator=(local_90,uVar7);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_60,
                     L"Are you sure you want to abandon the match? You will lose all unextracted gear."
                     ,L"PauseMenu",L"LeaveGearUpMsg");
  FText::operator=(local_a8,uVar7);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  FWeakObjectPtr::operator=(local_118,0);
  local_110 = 0;
  pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxPauseMenu::OnLeaveChoiceMade",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res20,pwVar4 + 2,1);
  FWeakObjectPtr::operator=(local_118,param_1);
  local_110 = local_res20;
  if ((local_res20 != 0) && (lVar9 = FWeakObjectPtr::Get(local_118), lVar9 != 0)) {
    UObject::FindFunction(lVar9,local_110);
  }
  local_128 = 0;
  local_120 = 0;
  uVar7 = FUN_1404b03b0();
  FText::FText(local_d8,uVar7);
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 1;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,L"Leave",L"PauseMenu",L"DialogChoice_LeaveMatch");
  FText::operator=(local_d8,uVar7);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  uVar5 = local_120;
  lVar9 = (longlong)(int)local_120;
  local_c0 = DAT_146874ff0;
  iVar6 = (int)local_120 + 1;
  local_120 = CONCAT44(local_120._4_4_,iVar6);
  if (local_120._4_4_ < iVar6) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_128,uVar5 & 0xffffffff);
  }
  lVar9 = lVar9 * 0x30 + local_128;
  FText::FText(lVar9,local_d8);
  *(undefined8 *)(lVar9 + 0x18) = local_c0;
  *(undefined8 *)(lVar9 + 0x20) = local_b8;
  *(undefined1 *)(lVar9 + 0x28) = (undefined1)local_b0;
  *(undefined1 *)(lVar9 + 0x29) = local_b0._1_1_;
  uVar7 = FUN_1404b03b0();
  FText::FText(local_108,uVar7);
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 1;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_30,L"Cancel",L"PauseMenu",L"DialogChoice_Cancel");
  FText::operator=(local_108,uVar7);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  uVar5 = local_120;
  lVar9 = (longlong)(int)local_120;
  local_f0 = DAT_146874fe8;
  local_e8 = DAT_146b3e2b8;
  iVar6 = (int)local_120 + 1;
  local_120 = CONCAT44(local_120._4_4_,iVar6);
  if (local_120._4_4_ < iVar6) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_128,uVar5 & 0xffffffff);
  }
  lVar9 = lVar9 * 0x30 + local_128;
  FText::FText(lVar9,local_108);
  *(undefined8 *)(lVar9 + 0x18) = local_f0;
  *(undefined8 *)(lVar9 + 0x20) = local_e8;
  *(undefined1 *)(lVar9 + 0x28) = (undefined1)local_e0;
  *(undefined1 *)(lVar9 + 0x29) = local_e0._1_1_;
  uVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
  FUN_1410f2f10(uVar7,local_90,local_a8,&local_128,local_118,0,0,0,2,1);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_100 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)local_100 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  TArray<FKeyBindMenuEntry,FDefaultAllocator>::~TArray<FKeyBindMenuEntry,FDefaultAllocator>
            (&local_128);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  return;
}



// FUNCTION 1411aa0c0 FUN_1411aa0c0 body=614 status=ok
// SIG undefined FUN_1411aa0c0(void)

void FUN_1411aa0c0(longlong param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  iVar11 = (int)param_3;
  if (iVar11 == 3) {
    return;
  }
  bVar5 = false;
  bVar4 = false;
  FUN_1404cf890(&local_90,0,param_3,param_4,0);
  plVar10 = local_90;
  if (local_90 == (longlong *)0x0) goto LAB_1411aa2cd;
  (**(code **)(*local_90 + 0x18))(local_90,param_2,param_1 + 0x6d8);
  if ((iVar11 == 0) && (lVar3 = *param_4, lVar3 != 0)) {
    local_68 = (longlong *)param_4[1];
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
      plVar10 = local_90;
    }
    bVar5 = true;
    bVar4 = false;
    local_70 = lVar3;
    iVar8 = (**(code **)(*plVar10 + 0x78))(plVar10,&local_70);
    if (iVar8 == 0) goto LAB_1411aa1a6;
    local_80 = *param_4;
    local_78 = (longlong *)param_4[1];
    if (local_78 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
      plVar10 = local_90;
    }
    bVar5 = true;
    bVar4 = true;
    cVar7 = (**(code **)(*plVar10 + 0xa8))(plVar10,&local_80);
    if (cVar7 != '\0') goto LAB_1411aa1a6;
    bVar6 = true;
  }
  else {
LAB_1411aa1a6:
    bVar6 = false;
  }
  plVar10 = local_78;
  if ((bVar4) && (local_78 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = local_68;
  if ((bVar5) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (bVar6) {
    local_60 = *param_4;
    local_58 = (longlong *)param_4[1];
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_1411ac580(param_1,&local_60,param_2);
    plVar10 = local_58;
  }
  else {
    if (iVar11 != 7) {
      FUN_141190510(param_1,param_2);
      goto LAB_1411aa2cd;
    }
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,
                       L"For developer purposes, we will need a Multifactor-Authentication key. Enter the console command \"EnterMfaCode\" and click the title screen again to login. This will only need to be done once per month."
                       ,L"GFxOakTitleScreen",L"InvalidLogin_MfaRequired");
    FUN_1411bbba0(param_1,uVar9,0);
    plVar10 = local_48;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
LAB_1411aa2cd:
  plVar10 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  return;
}



// FUNCTION 1411aa330 FUN_1411aa330 body=65 status=ok
// SIG undefined FUN_1411aa330(void)

void FUN_1411aa330(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 local_res18 [16];
  
  uVar1 = *(undefined4 *)(param_3 + 8);
  puVar2 = (undefined8 *)FName::FName(local_res18,L"Matchmaking",1);
  FUN_14112a420(param_1,*puVar2,uVar1);
  return;
}



// FUNCTION 1411aa380 FUN_1411aa380 body=130 status=ok
// SIG undefined FUN_1411aa380(void)

void FUN_1411aa380(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((((param_2 != 0) && (iVar2 = FUN_142eb62f0(param_2), -1 < iVar2)) &&
      (iVar2 < *(int *)(param_1 + 0xf8))) && (lVar1 = *(longlong *)(param_1 + 0x70), lVar1 != 0)) {
    FString::operator=(lVar1 + 0x1e8,(longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xf0));
    *(undefined1 *)(lVar1 + 0x28) = 1;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_140bce120();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411aa410 FUN_1411aa410 body=72 status=ok
// SIG undefined FUN_1411aa410(void)

void FUN_1411aa410(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140ccf940(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411aa460 FUN_1411aa460 body=30 status=ok
// SIG undefined FUN_1411aa460(void)

void FUN_1411aa460(longlong param_1)

{
  FUN_142ec6f90();
  *(uint *)(param_1 + -0x498) = *(uint *)(param_1 + -0x498) & 0xfffffeff;
  return;
}



// FUNCTION 1411aa480 FUN_1411aa480 body=61 status=ok
// SIG undefined FUN_1411aa480(void)

void FUN_1411aa480(longlong param_1)

{
  FUN_142ec6f90();
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_140d97f70();
  }
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FUN_141131d10(*(longlong *)(param_1 + 0x4b0),1);
    return;
  }
  return;
}



// FUNCTION 1411aa4c0 FUN_1411aa4c0 body=39 status=ok
// SIG undefined FUN_1411aa4c0(void)

void FUN_1411aa4c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_140d924b0();
  }
  FUN_142ec7390(param_1);
  return;
}



// FUNCTION 1411aa4f0 FUN_1411aa4f0 body=300 status=ok
// SIG undefined FUN_1411aa4f0(void)

void FUN_1411aa4f0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      lVar3 = *(longlong *)(param_1 + 0x1e8);
      iVar5 = 0;
      if (0 < *(int *)(lVar2 + 0xa58)) {
        lVar7 = 0;
        do {
          plVar6 = (longlong *)(*(longlong *)(lVar2 + 0xa50) + lVar7);
          if ((((int)plVar6[1] != 0) && (plVar4 = (longlong *)*plVar6, plVar4 != (longlong *)0x0))
             && (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
                *plVar4 == lVar3)) {
            if (((int)plVar6[1] != 0) && (plVar4 = (longlong *)*plVar6, plVar4 != (longlong *)0x0))
            {
              (**(code **)(*plVar4 + 0x28))(plVar4,0);
              if (*plVar6 != 0) {
                lVar3 = FMemory::Realloc(*plVar6,0,0);
                *plVar6 = lVar3;
              }
              *(undefined4 *)(plVar6 + 1) = 0;
            }
            break;
          }
          iVar5 = iVar5 + 1;
          lVar7 = lVar7 + 0x10;
        } while (iVar5 < *(int *)(lVar2 + 0xa58));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0xa50,0);
    }
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 1411aa620 FUN_1411aa620 body=173 status=ok
// SIG undefined FUN_1411aa620(void)

void FUN_1411aa620(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FUN_140ce6870();
    plVar1 = *(longlong **)(param_1 + 0x270);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2a0))(plVar1,0);
    }
  }
  if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x270) + 0x288))();
  }
  if (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x288))();
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar2 != '\0') {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar4 = FUN_140ec9a00(uVar3);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x6c8) != 0)) {
      FUN_1410a6010(*(longlong *)(lVar4 + 0x6c8),0);
    }
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 1411aa6d0 FUN_1411aa6d0 body=874 status=ok
// SIG undefined FUN_1411aa6d0(void)

void FUN_1411aa6d0(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_48;
  longlong *local_40;
  ulonglong uVar11;
  
  if (*(char *)(param_1 + 0xb65) != '\0') {
    FTickFunction::UnRegisterTickFunction(param_1 + 0xb58);
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  uVar11 = 0;
  if ((cVar3 != '\0') && (*(longlong *)(param_1 + 0x4b0) != 0)) {
    uVar4 = FWeakObjectPtr::Get(param_1 + 0xc4);
    FUN_142f06bc0(uVar4,*(undefined8 *)(param_1 + 0x4b0));
    *(undefined8 *)(param_1 + 0x4b0) = 0;
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140d13500(lVar5,0,DAT_1468762b0);
      FUN_140d05c60(lVar5);
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xbc8);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0xbc8);
    FUN_140483870(lVar5 + 0x5e0,param_1 + -0x4d8);
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar5 != 0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar6 = *(longlong *)(param_1 + 0xb48);
      plVar7 = (longlong *)FUN_140bb74b0(lVar5);
      uVar14 = uVar11;
      if (0 < (int)plVar7[1]) {
        do {
          plVar13 = (longlong *)(*plVar7 + uVar14);
          if ((((int)plVar13[1] != 0) && (plVar8 = (longlong *)*plVar13, plVar8 != (longlong *)0x0))
             && (plVar8 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,local_res8),
                *plVar8 == lVar6)) {
            if (((int)plVar13[1] != 0) && (plVar8 = (longlong *)*plVar13, plVar8 != (longlong *)0x0)
               ) {
              (**(code **)(*plVar8 + 0x28))(plVar8,0);
              if (*plVar13 != 0) {
                lVar6 = FMemory::Realloc(*plVar13,0,0);
                *plVar13 = lVar6;
              }
              *(undefined4 *)(plVar13 + 1) = 0;
            }
            break;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          uVar14 = uVar14 + 0x10;
        } while ((int)uVar10 < (int)plVar7[1]);
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,0);
      lVar6 = *(longlong *)(param_1 + 0xb50);
      iVar9 = 0;
      if (0 < *(int *)(lVar5 + 0xc88)) {
        lVar12 = 0;
        do {
          plVar7 = (longlong *)(*(longlong *)(lVar5 + 0xc80) + lVar12);
          if ((((int)plVar7[1] != 0) && (plVar13 = (longlong *)*plVar7, plVar13 != (longlong *)0x0))
             && (plVar13 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13,local_res10),
                *plVar13 == lVar6)) {
            if (((int)plVar7[1] != 0) && (plVar13 = (longlong *)*plVar7, plVar13 != (longlong *)0x0)
               ) {
              (**(code **)(*plVar13 + 0x28))(plVar13,0);
              if (*plVar7 != 0) {
                lVar6 = FMemory::Realloc(*plVar7,0,0);
                *plVar7 = lVar6;
              }
              *(undefined4 *)(plVar7 + 1) = 0;
            }
            break;
          }
          iVar9 = iVar9 + 1;
          lVar12 = lVar12 + 0x10;
        } while (iVar9 < *(int *)(lVar5 + 0xc88));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0xc80,0);
      if ((*(int *)(lVar5 + 0xc10) != 0) &&
         (plVar7 = *(longlong **)(lVar5 + 0xc08), plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*(longlong *)(lVar5 + 0xc08) != 0) {
          uVar4 = FMemory::Realloc(*(longlong *)(lVar5 + 0xc08),0,0);
          *(undefined8 *)(lVar5 + 0xc08) = uVar4;
        }
        *(undefined4 *)(lVar5 + 0xc10) = 0;
      }
    }
  }
  local_40 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xb38) != &local_48) {
    *(undefined8 *)(param_1 + 0xb38) = 0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb40,&local_40);
    plVar7 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_40 + 1;
      lVar5 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  uVar4 = FWeakObjectPtr::Get(param_1 + 0xb4);
  thunk_FUN_14245e740(uVar4,0);
  FUN_14111e270(param_1);
  return;
}



// FUNCTION 1411aaa40 FUN_1411aaa40 body=43 status=ok
// SIG undefined FUN_1411aaa40(void)

void FUN_1411aaa40(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x288))();
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 1411aaa70 FUN_1411aaa70 body=190 status=ok
// SIG undefined FUN_1411aaa70(void)

void FUN_1411aaa70(longlong param_1)

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
    (**(code **)(*local_18 + 0x110))(local_18,param_1 + 0x1b8);
    if ((*(longlong *)(param_1 + 0x1c0) != 0) &&
       (*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x18) == 1)) {
      (**(code **)(*local_18 + 0x128))(local_18);
    }
  }
  FUN_142ec75f0(param_1);
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



// FUNCTION 1411aab30 FUN_1411aab30 body=517 status=ok
// SIG undefined FUN_1411aab30(void)

void FUN_1411aab30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *local_48;
  longlong *local_40;
  
  lVar7 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar7 != 0) {
    FUN_14145f370();
  }
  FUN_1404cdd50(&local_48,0);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x18))(local_48,param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1411eff10();
    lVar7 = *(longlong *)(param_1 + 0x1f0);
    plVar3 = (longlong *)(lVar7 + 0xe8);
    iVar11 = *(int *)(lVar7 + 0xf0) + -1;
    if (-1 < iVar11) {
      lVar12 = (longlong)iVar11 << 4;
      lVar13 = lVar12;
      do {
        lVar9 = lVar12 + *plVar3;
        bVar6 = true;
        if ((param_1 == 0x4d8) ||
           (lVar8 = FWeakObjectPtr::Get(lVar9), bVar5 = bVar6, param_1 + -0x4d8 != lVar8)) {
          bVar5 = false;
        }
        if (bVar5) {
LAB_1411aac53:
          iVar4 = *(int *)(lVar7 + 0xf0);
          iVar10 = (iVar4 - iVar11) + -1;
          if (0 < iVar10) {
            iVar10 = 1;
          }
          if (iVar10 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar13 + *plVar3),
                       (void *)((longlong)(iVar4 - iVar10) * 0x10 + *plVar3),(longlong)iVar10 << 4);
            iVar4 = *(int *)(lVar7 + 0xf0);
          }
          *(int *)(lVar7 + 0xf0) = iVar4 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar3);
        }
        else {
          if ((*(longlong *)(lVar9 + 8) != 0) && (lVar9 = FWeakObjectPtr::Get(lVar9,1), lVar9 != 0))
          {
            bVar6 = false;
          }
          if (bVar6) goto LAB_1411aac53;
        }
        lVar13 = lVar13 + -0x10;
        lVar12 = lVar12 + -0x10;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
      lVar7 = *(longlong *)(param_1 + 0x1f0);
    }
    FUN_1411f8450(lVar7);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  FUN_142ec75f0(param_1);
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 1411aad40 FUN_1411aad40 body=938 status=ok
// SIG undefined FUN_1411aad40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411aad40(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FUN_142ec85a0();
  lVar6 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
    iVar2 = *(int *)(lVar7 + 0x90);
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar2) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar2 * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140d13500(lVar6,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),DAT_1468762b0);
      FUN_140d05cc0(lVar6);
    }
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar4 = FUN_140bca8a0(lVar6);
      *(undefined1 *)(param_1 + 0xbd1) = uVar4;
    }
  }
  plVar1 = (longlong *)(param_1 + -0x4d8);
  lVar6 = (**(code **)(*plVar1 + 0x148))(plVar1);
  if (lVar6 == 0) {
LAB_1411aae8b:
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*plVar1 + 0x148))(plVar1);
    lVar6 = *(longlong *)(lVar6 + 0x148);
    if (lVar6 == 0) goto LAB_1411aae8b;
    lVar7 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1411aae8b;
  }
  FWeakObjectPtr::operator=(param_1 + 0xbc8,lVar6);
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = plVar1;
    *puVar8 = &PTR_FUN_143f77b70;
  }
  local_c8[0] = &LAB_141190ea0;
  uVar9 = FUN_1420849a0(plVar1,local_78,local_c8);
  FUN_14208c260(plVar1,uVar9);
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
  if (local_88 != 0) {
    plVar10 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar10 = local_98;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if ((cVar5 == '\0') || (*(longlong *)(param_1 + 0x388) == 0)) goto LAB_1411ab02c;
  uVar9 = FWeakObjectPtr::Get(param_1 + 0xc4);
  lVar6 = FUN_142ee1f00(uVar9,*(undefined8 *)(param_1 + 0x388));
  if (lVar6 == 0) {
LAB_1411aafee:
    lVar7 = 0;
  }
  else {
    lVar7 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    lVar7 = lVar6;
    if (!bVar3) goto LAB_1411aafee;
  }
  *(longlong *)(param_1 + 0x4b0) = lVar7;
  if (lVar7 == 0) {
    if (lVar6 != 0) {
      uVar9 = FWeakObjectPtr::Get(param_1 + 0xc4);
      FUN_142f06bc0(uVar9,lVar6);
      lVar7 = *(longlong *)(param_1 + 0x4b0);
    }
    if (lVar7 == 0) goto LAB_1411ab02c;
  }
  FUN_141131d10(lVar7,1);
LAB_1411ab02c:
  if (*(char *)(param_1 + 0xb65) == '\0') {
    lVar6 = (**(code **)(*plVar1 + 0x148))(plVar1);
    if (lVar6 != 0) {
      lVar6 = (**(code **)(*plVar1 + 0x148))(plVar1);
      if (*(longlong *)(lVar6 + 0x30) != 0) {
        *(byte *)(param_1 + 0xb64) = *(byte *)(param_1 + 0xb64) | 0x16;
        *(undefined2 *)(param_1 + 0xb60) = 0x505;
        *(byte *)(param_1 + 0xb64) = *(byte *)(param_1 + 0xb64) | 1;
        *(longlong **)(param_1 + 0xbb0) = plVar1;
        FTickFunction::RegisterTickFunction(param_1 + 0xb58);
      }
    }
  }
  FUN_14119f110(plVar1);
  lVar6 = *plVar1;
  local_e8 = 0;
  local_e0 = 0;
  puVar8 = (undefined8 *)FName::FName(local_d8,L"PauseMenu_Open",1);
  (**(code **)(lVar6 + 0x4e8))(plVar1,*puVar8,&local_e8);
  return;
}



// FUNCTION 1411ab0f0 FUN_1411ab0f0 body=954 status=ok
// SIG undefined FUN_1411ab0f0(void)

void FUN_1411ab0f0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int *piVar11;
  int *piVar12;
  longlong *plVar13;
  longlong local_res20;
  undefined1 local_98 [8];
  int local_90;
  int local_8c;
  longlong local_88;
  longlong *local_80;
  int local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  FUN_142ec85a0();
  FUN_1417846f0(param_1 + -0x4d8,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar6 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
  lVar7 = FUN_1417985e0(uVar6,param_1 + -0x4d8,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x1f0) = lVar7;
  if (lVar7 != 0) {
    lVar7 = FUN_140e97290(param_1 + -0x4d8);
    if (lVar7 != 0) {
      FUN_1411f9620(*(undefined8 *)(param_1 + 0x1f0),lVar7 + 0xb78);
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPreviewImageLoaded",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res20,pwVar4 + 2,1);
      lVar7 = *(longlong *)(param_1 + 0x1f0);
      plVar13 = (longlong *)(lVar7 + 0xe8);
      FWeakObjectPtr::operator=(&local_90,0);
      local_88 = 0;
      FWeakObjectPtr::operator=(&local_90,param_1 + -0x4d8);
      local_88 = local_res20;
      if ((local_res20 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_90), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_88);
      }
      piVar11 = (int *)*plVar13;
      iVar2 = *(int *)(lVar7 + 0xf0);
      for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)iVar2 * 4; piVar12 = piVar12 + 4) {
        if ((((*piVar12 == local_90) && (piVar12[1] == local_8c)) ||
            ((cVar5 = FWeakObjectPtr::IsValid(piVar12), cVar5 == '\0' &&
             (cVar5 = FWeakObjectPtr::IsValid(&local_90), cVar5 == '\0')))) &&
           (*(longlong *)(piVar12 + 2) == local_88)) {
          if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_1411ab2ef;
          break;
        }
      }
      iVar2 = *(int *)(lVar7 + 0xf0);
      *(int *)(lVar7 + 0xf0) = iVar2 + 1;
      if (*(int *)(lVar7 + 0xf4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar2);
      }
      piVar11 = (int *)((longlong)iVar2 * 0x10 + *plVar13);
      *piVar11 = local_90;
      piVar11[1] = local_8c;
      *(longlong *)(piVar11 + 2) = local_88;
LAB_1411ab2ef:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
    }
    FUN_1411fa2b0(*(undefined8 *)(param_1 + 0x1f0),6);
  }
  FUN_1404cdd50(&local_70,0);
  if (local_70 != (longlong *)0x0) {
    uStack_58 = 0;
    local_80 = (longlong *)0x0;
    local_60 = &LAB_1411ad780;
    plVar13 = (longlong *)FMemory::Realloc(0,0x30);
    local_78 = 3;
    local_80 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      *plVar13 = (longlong)&PTR_FUN_1442cc120;
      FWeakObjectPtr::operator=(plVar13 + 1,param_1 + -0x4d8);
      *(undefined4 *)(plVar13 + 2) = (undefined4)local_60;
      *(undefined4 *)((longlong)plVar13 + 0x14) = local_60._4_4_;
      *(undefined4 *)(plVar13 + 3) = uStack_58;
      *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_54;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar13[5] = lVar7;
      *plVar13 = (longlong)&PTR_FUN_1442cc168;
    }
    puVar10 = (undefined8 *)(**(code **)(*local_70 + 0x10))(local_70,local_98,&local_80);
    *(undefined8 *)(param_1 + 0x200) = *puVar10;
    if (local_78 != 0) {
      if (local_80 == (longlong *)0x0) goto LAB_1411ab401;
      (**(code **)(*local_80 + 0x28))(local_80,0);
      if (local_80 != (longlong *)0x0) {
        local_80 = (longlong *)FMemory::Realloc(local_80,0,0);
      }
      local_78 = 0;
    }
    if (local_80 != (longlong *)0x0) {
      FMemory::Free(local_80);
    }
  }
LAB_1411ab401:
  FUN_1404cdd50(&local_60,0);
  if (CONCAT44(uStack_54,uStack_58) != 0) {
    LOCK();
    piVar11 = (int *)(CONCAT44(uStack_54,uStack_58) + 8);
    iVar2 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      puVar10 = (undefined8 *)CONCAT44(uStack_54,uStack_58);
      (**(code **)*puVar10)(puVar10);
      LOCK();
      piVar11 = (int *)((longlong)puVar10 + 0xc);
      iVar2 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_54,uStack_58) + 8))
                  ((longlong *)CONCAT44(uStack_54,uStack_58),1);
      }
    }
  }
  plVar13 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar11 = (int *)((longlong)plVar13 + 0xc);
      iVar2 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  return;
}



// FUNCTION 1411ab4b0 FUN_1411ab4b0 body=2050 status=ok
// SIG undefined FUN_1411ab4b0(void)

void FUN_1411ab4b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  int iVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  longlong local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  longlong local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  longlong local_130;
  longlong local_128;
  wchar_t *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_100;
  longlong local_f8;
  wchar_t *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  longlong local_c8;
  wchar_t *local_c0;
  longlong local_b8 [2];
  longlong local_a8 [2];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  FUN_142efc880();
  FWeakObjectPtr::operator=(&local_1c8,0);
  iVar17 = *(int *)(param_1 + 0x58);
  plVar15 = (longlong *)(param_1 + 0x50);
  iVar4 = *(int *)(param_1 + 0x48);
  pwVar13 = (wchar_t *)0x0;
  local_1c0 = 0;
  if (iVar17 != 0) {
    plVar18 = (longlong *)(*plVar15 + 8);
    do {
      plVar21 = (longlong *)*plVar18;
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        plVar19 = plVar21 + 1;
        lVar11 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar21 + 8))(plVar21,1);
          }
        }
      }
      plVar18 = plVar18 + 3;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != iVar4) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar15,iVar4);
  }
  lVar20 = *(longlong *)(param_1 + 0x40);
  lVar11 = lVar20 + (longlong)*(int *)(param_1 + 0x48) * 0x18;
  for (; lVar20 != lVar11; lVar20 = lVar20 + 0x18) {
    local_188 = 0;
    local_180 = 0;
    FUN_14119bf60(lVar20,&local_188);
    iVar17 = (int)local_180;
    if ((int)local_180 != 0) {
      iVar4 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar4 + 1;
      if (*(int *)(param_1 + 0x5c) < iVar4 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar15,iVar4);
      }
      FText::FText(*plVar15 + (longlong)iVar4 * 0x18,lVar20);
      FWeakObjectPtr::operator=(&local_1b8,0);
      local_1b0 = 0;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UTestMapsMenu::OnTestMapCategorySelected",L"::");
      pwVar10 = pwVar13;
      while (pwVar6 = pwVar7, pwVar6 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar10 = pwVar6;
      }
      FName::FName(&local_res20,pwVar10 + 2,1);
      lVar8 = local_res20;
      FWeakObjectPtr::operator=(&local_1b8,param_1 + -0x2b8);
      local_1b0 = lVar8;
      local_res18 = 0;
      if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_1b8), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_1b0);
      }
      lVar8 = *(longlong *)(param_1 + 0x78);
      local_148 = local_1c8;
      local_144 = local_1c4;
      local_140 = local_1c0;
      local_138 = local_1b8;
      local_134 = local_1b4;
      local_130 = local_1b0;
      local_120 = (wchar_t *)0x0;
      pwVar10 = pwVar13;
      local_128 = lVar8;
      if (lVar8 != 0) {
        uVar9 = FUN_142f2b0d0();
        pwVar10 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar9);
      }
      local_120 = pwVar10;
      uVar9 = FText::FText(local_98,lVar20);
      FUN_142ee7ec0(&local_128,*(undefined8 *)(param_1 + 0x10),uVar9,&local_138,&local_148);
      if (iVar17 != 0) {
        plVar18 = (longlong *)(local_188 + 8);
        do {
          if (plVar18[2] != 0) {
            FMemory::Free();
          }
          plVar21 = (longlong *)*plVar18;
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            plVar19 = plVar21 + 1;
            lVar8 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar21 + 8))(plVar21,1);
              }
            }
          }
          plVar18 = plVar18 + 5;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
    }
    if (local_188 != 0) {
      FMemory::Free();
    }
  }
  plVar15 = (longlong *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146876358) && (_Init_thread_header(&DAT_146876358), DAT_146876358 == -1))
  {
    FName::FName(&DAT_146876350,L"OnlineSubsystemUtils",1);
    _Init_thread_footer(&DAT_146876358);
  }
  lVar11 = FModuleManager::GetModulePtr_Internal(DAT_146876350);
  if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x28) != 0)) {
    local_168 = (longlong *)0x0;
    local_160 = 0;
    FUN_1404ccea0(*(longlong *)(lVar11 + 0x28),&local_168);
    plVar18 = local_168 + (int)local_160;
    for (plVar21 = local_168; plVar21 != plVar18; plVar21 = plVar21 + 1) {
      lVar11 = *plVar21;
      if (lVar11 != 0) {
        lVar20 = FUN_141304350();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar20 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar20 + 0x90) * 8) != lVar20 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          puVar12 = (undefined8 *)FUN_1404ce260(lVar11,local_b8);
          if (*(int *)(puVar12 + 1) == 0) {
            puVar16 = &DAT_143f3eda8;
          }
          else {
            puVar16 = (undefined2 *)*puVar12;
          }
          FName::FName(&local_res10,puVar16,1);
          if (local_b8[0] != 0) {
            FMemory::Free();
          }
          local_178 = 0;
          local_170 = 0;
          FUN_14119c2d0(&local_res10,&local_178);
          iVar17 = (int)local_170;
          if ((int)local_170 != 0) {
            plVar19 = (longlong *)*plVar15;
            iVar4 = *(int *)(param_1 + 0x68);
            for (plVar14 = plVar19; plVar14 != plVar19 + iVar4; plVar14 = plVar14 + 1) {
              if (*plVar14 == local_res10) {
                if ((int)((longlong)plVar14 - (longlong)plVar19 >> 3) != -1) goto LAB_1411ab90d;
                break;
              }
            }
            *(int *)(param_1 + 0x68) = iVar4 + 1;
            if (*(int *)(param_1 + 0x6c) < iVar4 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar4);
            }
            *(longlong *)(*plVar15 + (longlong)iVar4 * 8) = local_res10;
LAB_1411ab90d:
            FWeakObjectPtr::operator=(&local_1a8,0);
            local_1a0 = 0;
            pwVar7 = _guard_xfg_dispatch_icall_nop
                               (L"&UTestMapsMenu::OnTestMapDLCNameSelected",L"::");
            pwVar10 = pwVar13;
            while (pwVar6 = pwVar7, pwVar6 != (wchar_t *)0x0) {
              pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
              pwVar10 = pwVar6;
            }
            FName::FName(&local_158,pwVar10 + 2,1);
            lVar20 = local_158;
            FWeakObjectPtr::operator=(&local_1a8,param_1 + -0x2b8);
            local_1a0 = lVar20;
            local_res18 = 0;
            if ((lVar20 != 0) && (lVar20 = FWeakObjectPtr::Get(&local_1a8), lVar20 != 0)) {
              UObject::FindFunction(lVar20,local_1a0);
            }
            local_118 = local_1c8;
            local_114 = local_1c4;
            local_110 = local_1c0;
            local_108 = local_1a8;
            local_104 = local_1a4;
            local_100 = local_1a0;
            local_f0 = (wchar_t *)0x0;
            lVar20 = *(longlong *)(param_1 + 0x78);
            pwVar10 = pwVar13;
            local_f8 = lVar20;
            if (lVar20 != 0) {
              uVar9 = FUN_142f2b0d0();
              pwVar10 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar20,uVar9);
            }
            local_f0 = pwVar10;
            uVar9 = FUN_1404ce260(lVar11,local_a8);
            uVar9 = FText::FromString(local_80,uVar9);
            FUN_142ee7ec0(&local_f8,*(undefined8 *)(param_1 + 0x10),uVar9,&local_108,&local_118);
            if (local_a8[0] != 0) {
              FMemory::Free();
            }
            if (iVar17 != 0) {
              plVar19 = (longlong *)(local_178 + 8);
              do {
                if (plVar19[2] != 0) {
                  FMemory::Free();
                }
                plVar14 = (longlong *)*plVar19;
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar14 + 1;
                  lVar11 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar14)(plVar14);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar14 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar14 + 8))(plVar14,1);
                    }
                  }
                }
                plVar19 = plVar19 + 5;
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
          }
          if (local_178 != 0) {
            FMemory::Free();
          }
        }
      }
    }
    if (local_168 != (longlong *)0x0) {
      FMemory::Free(local_168);
    }
  }
  FWeakObjectPtr::operator=(&local_198,0);
  local_190 = 0;
  pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UTestMapsMenu::OnBackClicked",L"::");
  pwVar10 = pwVar13;
  while (pwVar6 = pwVar7, pwVar6 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
    pwVar10 = pwVar6;
  }
  FName::FName(&local_150,pwVar10 + 2,1);
  FWeakObjectPtr::operator=(&local_198,param_1 + -0x2b8);
  local_190 = local_150;
  local_res10 = 0;
  if ((local_150 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_198), lVar11 != 0)) {
    UObject::FindFunction(lVar11,local_190);
  }
  local_e8 = local_1c8;
  local_e4 = local_1c4;
  lVar11 = *(longlong *)(param_1 + 0x78);
  local_e0 = local_1c0;
  local_d8 = local_198;
  local_d4 = local_194;
  local_d0 = local_190;
  local_c8 = lVar11;
  if (lVar11 != 0) {
    uVar9 = FUN_142f2b0d0();
    pwVar13 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar9);
  }
  local_c0 = pwVar13;
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_68,L"Back",L"TestMapsMenu",L"BackText");
  uVar9 = FUN_142ee7ec0(&local_c8,*(undefined8 *)(param_1 + 0x10),uVar9,&local_d8,&local_e8);
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  FUN_142f0d3e0(param_1 + -0x2b8,*(undefined8 *)(param_1 + 0x78),0);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    plVar15 = (longlong *)(*(longlong *)(param_1 + 0x78) + 0x860);
    (**(code **)(*plVar15 + 0x18))(plVar15,0,0,0);
  }
  return;
}



// FUNCTION 1411abcc0 FUN_1411abcc0 body=38 status=ok
// SIG undefined FUN_1411abcc0(void)

void FUN_1411abcc0(longlong param_1)

{
  FUN_142efc880();
  FUN_142f0d3e0(param_1 + -0x2b8,*(undefined8 *)(param_1 + 0x50),0);
  return;
}



// FUNCTION 1411abcf0 FUN_1411abcf0 body=78 status=ok
// SIG undefined FUN_1411abcf0(void)

void FUN_1411abcf0(longlong param_1,float param_2)

{
  if (1e-08 < *(float *)(param_1 + 0x278)) {
    *(float *)(param_1 + 0x278) = *(float *)(param_1 + 0x278) - param_2;
    FUN_1411bc980();
  }
  if (*(char *)(param_1 + 0x27c) != '\0') {
    *(undefined1 *)(param_1 + 0x27c) = 0;
    FUN_14119b950(param_1);
    return;
  }
  return;
}



// FUNCTION 1411abd40 FUN_1411abd40 body=261 status=ok
// SIG undefined FUN_1411abd40(void)

void FUN_1411abd40(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong local_28 [4];
  
  LOCK();
  bVar3 = *(int *)(param_1 + 0x210) == 0;
  if (bVar3) {
    *(int *)(param_1 + 0x210) = 0;
  }
  UNLOCK();
  if (bVar3) {
    FUN_142ec8c70();
    return;
  }
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1411abdb6;
  }
  plVar1 = (longlong *)0x0;
LAB_1411abdb6:
  FUN_142ebe450(param_1 + -0x4d8);
  if (plVar1 != (longlong *)0x0) {
    local_28[0] = 0;
    local_28[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"QUIT",10);
    (**(code **)(*plVar1 + 0xd28))(plVar1,local_28 + 2,local_28,1);
    if (local_28[2] != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1411abe50 FUN_1411abe50 body=57 status=ok
// SIG undefined FUN_1411abe50(void)

void FUN_1411abe50(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  FUN_142ec8c70();
  plVar1 = *(longlong **)(param_1 + 0x270);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2);
  }
  return;
}



// FUNCTION 1411abe90 FUN_1411abe90 body=80 status=ok
// SIG undefined FUN_1411abe90(void)

void FUN_1411abe90(longlong param_1)

{
  char cVar1;
  
  FUN_142ec8c70();
  if ((*(char *)(param_1 + 0x1e4) != '\0') && (*(longlong *)(param_1 + 0x1d8) != 0)) {
    cVar1 = FUN_142ebd930();
    if (cVar1 != '\0') {
      FUN_142ebe4a0(param_1 + -0x4d8);
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      *(undefined1 *)(param_1 + 0x1e4) = 0;
    }
  }
  return;
}



// FUNCTION 1411abee0 FUN_1411abee0 body=137 status=ok
// SIG undefined FUN_1411abee0(void)

void FUN_1411abee0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1411fd550();
  }
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
      local_28 = 0;
      local_18 = 0;
      puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar1 != (undefined8 *)0x0) {
        puVar1[1] = param_1 + -0x4d8;
        *puVar1 = &PTR_FUN_143f77b70;
      }
      local_58[0] = &LAB_141190d20;
      FUN_1411f67c0(*(undefined8 *)(param_1 + 0x1f0),local_58);
    }
  }
  return;
}



// FUNCTION 1411abf70 FUN_1411abf70 body=95 status=ok
// SIG undefined FUN_1411abf70(void)

void FUN_1411abf70(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      FUN_140be3ca0(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1411abfd0 FUN_1411abfd0 body=172 status=ok
// SIG undefined FUN_1411abfd0(void)

void FUN_1411abfd0(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if (((param_1[0x18] != 0) && (param_2 != 0)) && (param_1[6] != 0)) {
    iVar1 = FUN_142eb62f0(param_2);
    if ((-1 < iVar1) && (iVar1 < (int)param_1[0x30])) {
      iVar1 = FUN_142eb62f0(param_2);
      TOptional<FString>::operator=(param_1 + 0x51,(longlong)iVar1 * 0x10 + param_1[0x2f]);
      FUN_141190720(param_1,1);
      FUN_1411bcc00(param_1);
      FUN_1411be650(param_1);
      FUN_1411be4b0(param_1);
      (**(code **)(*param_1 + 0x2c8))(param_1,param_1[6]);
    }
    LOCK();
    *(undefined4 *)(param_1[6] + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411ac080 FUN_1411ac080 body=76 status=ok
// SIG undefined FUN_1411ac080(void)

void FUN_1411ac080(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) {
    uVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x208) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411ac0d0 FUN_1411ac0d0 body=81 status=ok
// SIG undefined FUN_1411ac0d0(void)

void FUN_1411ac0d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(bool *)(lVar1 + 0x205) = 0 < iVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411ac130 FUN_1411ac130 body=239 status=ok
// SIG undefined FUN_1411ac130(void)

void FUN_1411ac130(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x720;
  FUN_141111950(param_1,lVar3);
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x728)) && (*(longlong *)(param_1 + 0x730) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x728) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar3);
      if (lVar2 != 0) goto LAB_1411ac1c7;
    }
  }
  else {
LAB_1411ac1c7:
    lVar3 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411ac200;
  }
  lVar2 = 0;
LAB_1411ac200:
  FUN_142ebe540(param_1,lVar2);
  return;
}



// FUNCTION 1411ac220 FUN_1411ac220 body=83 status=ok
// SIG undefined FUN_1411ac220(void)

ulonglong FUN_1411ac220(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_142eb62f0(param_2);
  iVar3 = (int)uVar4;
  if (((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0xe8))) && (*(longlong *)(param_1 + 0x78) != 0))
  {
    uVar4 = FUN_140bead20(*(longlong *)(param_1 + 0x78),
                          (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0xe0));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x30) + 0x588);
    uVar2 = *puVar1;
    *puVar1 = 1;
    uVar4 = (ulonglong)uVar2;
    UNLOCK();
  }
  return uVar4;
}



// FUNCTION 1411ac280 FUN_1411ac280 body=43 status=ok
// SIG undefined FUN_1411ac280(void)

undefined4 FUN_1411ac280(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x760);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x2e8) = 1;
    *(undefined1 *)(lVar2 + 0x28) = 1;
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x770);
  *(undefined4 *)(param_1 + 0x770) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1411ac2b0 FUN_1411ac2b0 body=352 status=ok
// SIG undefined FUN_1411ac2b0(void)

void FUN_1411ac2b0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar5 == 0) {
LAB_1411ac31b:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1411ac31b;
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411ac365;
  }
  lVar6 = 0;
LAB_1411ac365:
  cVar2 = FUN_1411fbc40(lVar5,lVar6,param_2);
  uVar8 = FWeakObjectPtr::Get(param_1 + 0x58c);
  cVar3 = UGameplayStatics::IsGamePaused(uVar8);
  if (cVar2 != cVar3) {
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x58c);
    thunk_FUN_14245e740(uVar8,cVar2);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x58c);
  if (cVar2 != '\0') {
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x58c);
    cVar2 = APlayerController::IsPrimaryPlayer(uVar8);
    if ((cVar2 != '\0') && (lVar5 != 0)) {
      iVar4 = FUN_14046e5c0(lVar5);
      if (1 < iVar4) {
        cVar2 = FUN_142ebe120(param_1);
        if (cVar2 == '\0') {
          FUN_142eb3990(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411ac410 FUN_1411ac410 body=110 status=ok
// SIG undefined FUN_1411ac410(void)

void FUN_1411ac410(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    if (*(char *)(param_1 + 0x2d8) == '\0') {
      iVar1 = FUN_142eb62f0(param_2);
      FUN_140ccdb50(*(undefined8 *)(param_1 + 0xc0),iVar1 != 0);
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      LOCK();
      *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
      UNLOCK();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411ac480 FUN_1411ac480 body=10 status=ok
// SIG undefined FUN_1411ac480(void)

void FUN_1411ac480(undefined8 param_1)

{
  FUN_1411323d0(param_1,4);
  return;
}



// FUNCTION 1411ac490 FUN_1411ac490 body=119 status=ok
// SIG undefined FUN_1411ac490(void)

void FUN_1411ac490(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142ebe450();
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x58c);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
    if (lVar3 != 0) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140cf9d90(lVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1411ac510 FUN_1411ac510 body=81 status=ok
// SIG undefined FUN_1411ac510(void)

void FUN_1411ac510(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(bool *)(lVar1 + 0x204) = 0 < iVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411ac580 FUN_1411ac580 body=598 status=ok
// SIG undefined FUN_1411ac580(void)

void FUN_1411ac580(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5cc);
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
    if ((bVar4) &&
       (plVar8 = (longlong *)UGameInstance::GetFirstGamePlayer(lVar6), plVar8 != (longlong *)0x0)) {
      uVar9 = (**(code **)(*plVar8 + 0x148))(plVar8);
      plVar8 = (longlong *)FUN_140d3a420(uVar9);
      if ((plVar8 != (longlong *)0x0) && (cVar5 = FUN_142d868e0(plVar8,param_2), cVar5 == '\0')) {
        uStack_30 = (longlong *)param_2[1];
        local_38 = (code *)*param_2;
        if (uStack_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
          UNLOCK();
        }
        uVar9 = 0;
        if ((undefined8 *)(param_1 + 0x6a8) != &local_38) {
          *(undefined8 *)(param_1 + 0x6a8) = local_38;
          local_38 = (code *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x6b0,&uStack_30);
        }
        plVar10 = uStack_30;
        if (uStack_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_30 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*uStack_30)(uStack_30);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*uStack_30 + 8))(uStack_30,1);
            }
          }
        }
        FUN_14119ec60(param_1,2);
        uStack_30 = (longlong *)((ulonglong)uStack_30 & 0xffffffff00000000);
        local_38 = FUN_1411a8570;
        plVar10 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar10 != (longlong *)0x0) {
          *plVar10 = (longlong)&PTR_FUN_1446e9658;
          FWeakObjectPtr::operator=(plVar10 + 1,param_1);
          *(undefined4 *)(plVar10 + 2) = (undefined4)local_38;
          *(undefined4 *)((longlong)plVar10 + 0x14) = local_38._4_4_;
          *(undefined4 *)(plVar10 + 3) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_30._4_4_;
          *(undefined4 *)(plVar10 + 4) = param_3;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar10[5] = lVar6;
          *plVar10 = (longlong)&PTR_FUN_1446e96a0;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8 + 7,1);
          puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x20))(plVar10,local_res8);
          iVar3 = (int)plVar8[8];
          uVar9 = *puVar11;
          *(int *)(plVar8 + 8) = iVar3 + 1;
          if (*(int *)((longlong)plVar8 + 0x44) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8 + 7,iVar3);
          }
          puVar11 = (undefined8 *)((longlong)iVar3 * 0x10 + plVar8[7]);
          *puVar11 = plVar10;
          *(undefined4 *)(puVar11 + 1) = 3;
        }
        *(undefined8 *)(param_1 + 0x6b8) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x0001411ac7b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x48))(plVar8,param_2);
        return;
      }
      FUN_1411a8570(param_1,param_2,1,param_3);
    }
  }
  return;
}



// FUNCTION 1411ac7e0 FUN_1411ac7e0 body=28 status=ok
// SIG undefined FUN_1411ac7e0(void)

ulonglong FUN_1411ac7e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_3 == DAT_146876348) {
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x6e8);
    *(uint *)(param_1 + 0x6e8) = 1;
    UNLOCK();
    return (ulonglong)uVar1;
  }
  uVar2 = FUN_14119ec60(param_1,0);
  return uVar2;
}



// FUNCTION 1411ac800 FUN_1411ac800 body=443 status=ok
// SIG undefined FUN_1411ac800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411ac800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *local_a0;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  plVar8 = (longlong *)param_4[4];
  local_e8 = *(undefined1 *)((longlong)param_4 + 0xc);
  uVar5 = *param_4;
  uVar4 = *(undefined4 *)(param_4 + 1);
  local_d8 = param_4[3];
  local_e0 = param_4[2];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  uVar3 = *(undefined1 *)(param_4 + 5);
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_a0 = plVar8;
  puVar7 = (undefined8 *)FUN_140438ef0(0x48,local_78);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_1446e9640;
    puVar7[1] = param_3;
    puVar7[2] = param_1;
    *(undefined1 *)((longlong)puVar7 + 0x24) = local_e8;
    puVar7[3] = uVar5;
    *(undefined4 *)(puVar7 + 4) = uVar4;
    puVar7[5] = local_e0;
    puVar7[6] = local_d8;
    puVar7[7] = plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar8 = local_a0;
    }
    *(undefined1 *)(puVar7 + 8) = uVar3;
  }
  local_88[0] = &LAB_141190d00;
  FUN_14208c260(param_1,local_88);
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
  plVar9 = local_a0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  return;
}



// FUNCTION 1411ac9c0 FUN_1411ac9c0 body=2868 status=ok
// SIG undefined FUN_1411ac9c0(void)

void FUN_1411ac9c0(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong local_res20;
  ulonglong in_stack_fffffffffffffd58;
  ulonglong in_stack_fffffffffffffd60;
  ulonglong in_stack_fffffffffffffd68;
  uint in_stack_fffffffffffffd70;
  longlong local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  undefined1 local_258 [8];
  longlong local_250;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined8 local_230;
  undefined8 local_228;
  undefined2 local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined2 local_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined2 local_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined8 local_170;
  undefined8 local_168;
  undefined2 local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined8 local_140;
  undefined8 local_138;
  undefined2 local_130;
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
  
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar7 == 0) {
LAB_1411aca40:
    bVar2 = false;
  }
  else {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((!bVar2) || (cVar5 = FUN_140bc9f60(lVar7), cVar5 != '\0')) ||
       (cVar5 = FUN_140bc2c90(lVar7), cVar5 == '\0')) goto LAB_1411aca40;
    bVar2 = true;
  }
  FText::FText(local_110);
  FText::FText(local_128);
  if (bVar2) {
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e0,L"Quit Game and Disband Group?",L"PauseMenu",
                       L"QuitGameAndDisbandHeader");
    FText::operator=(local_110,uVar9);
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_d8 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c8,
                       L"Are you sure you want to quit the game? Doing so will disconnect all group members."
                       ,L"PauseMenu",L"QuitGameNetworkPlayersMsg");
    FText::operator=(local_128,uVar9);
    local_90 = local_c0;
  }
  else {
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b0,L"Quit Game?",L"PauseMenu",L"QuitGameHeader");
    FText::operator=(local_110,uVar9);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_a8 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,L"Are you sure you want to quit the game?",L"PauseMenu",
                       L"QuitGameMsg");
    FText::operator=(local_128,uVar9);
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_90 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  FWeakObjectPtr::operator=(local_258,0);
  local_250 = 0;
  pwVar10 = _guard_xfg_dispatch_icall_nop(L"&UGFxPauseMenu::OnQuitChoiceMade",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar10, pwVar3 != (wchar_t *)0x0) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res20,pwVar4 + 2,1);
  FWeakObjectPtr::operator=(local_258,param_1);
  local_250 = local_res20;
  if ((local_res20 != 0) && (lVar7 = FWeakObjectPtr::Get(local_258), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_250);
  }
  cVar5 = FOutputDevice::CanBeUsedOnAnyThread(DAT_146b17150,0);
  if (cVar5 == '\0') {
    local_268 = 0;
    local_260 = 0;
    uVar9 = FUN_1404b03b0();
    FText::FText(local_158,uVar9);
    local_140 = 0;
    local_138 = 0;
    local_130 = 1;
    FText::operator=(local_158,&DAT_1468762b8);
    lVar7 = (longlong)(int)local_260;
    local_140 = DAT_146874ff0;
    iVar6 = (int)local_260 + 1;
    if (local_260._4_4_ < iVar6) {
      uVar12 = local_260 & 0xffffffff;
      local_260._0_4_ = iVar6;
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_268,uVar12);
      iVar6 = (int)local_260;
    }
    local_260._0_4_ = iVar6;
    lVar7 = lVar7 * 0x30 + local_268;
    FText::FText(lVar7,local_158);
    *(undefined8 *)(lVar7 + 0x18) = local_140;
    *(undefined8 *)(lVar7 + 0x20) = local_138;
    *(undefined1 *)(lVar7 + 0x28) = (undefined1)local_130;
    *(undefined1 *)(lVar7 + 0x29) = local_130._1_1_;
    uVar9 = FUN_1404b03b0();
    FText::FText(local_188,uVar9);
    local_170 = 0;
    local_168 = 0;
    local_160 = 1;
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_38,L"Quit to Portal",L"PauseMenu",L"DialogChoice_QuitDesktop_Quail");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_f8,L"Quit to Desktop",L"PauseMenu",L"DialogChoice_QuitDesktop");
    FText::operator=(local_188,local_f8);
    iVar6 = (int)local_260;
    lVar7 = (longlong)(int)local_260;
    local_170 = DAT_146874ff8;
    local_260._0_4_ = (int)local_260 + 1;
    if (local_260._4_4_ < (int)local_260) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_268,iVar6);
    }
    lVar7 = lVar7 * 0x30 + local_268;
    FText::FText(lVar7,local_188);
    *(undefined8 *)(lVar7 + 0x18) = local_170;
    *(undefined8 *)(lVar7 + 0x20) = local_168;
    *(undefined1 *)(lVar7 + 0x28) = (undefined1)local_160;
    *(undefined1 *)(lVar7 + 0x29) = local_160._1_1_;
    uVar9 = FUN_1404b03b0();
    FText::FText(local_218,uVar9);
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 1;
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"Cancel",L"PauseMenu",L"DialogChoice_Cancel");
    FText::operator=(local_218,uVar9);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_48 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    uVar12 = local_260;
    lVar7 = (longlong)(int)local_260;
    local_200 = DAT_146874fe8;
    local_1f8 = DAT_146b3e2b8;
    iVar6 = (int)local_260 + 1;
    local_260 = CONCAT44(local_260._4_4_,iVar6);
    if (local_260._4_4_ < iVar6) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_268,uVar12 & 0xffffffff);
    }
    lVar7 = lVar7 * 0x30 + local_268;
    FText::FText(lVar7,local_218);
    *(undefined8 *)(lVar7 + 0x18) = local_200;
    *(undefined8 *)(lVar7 + 0x20) = local_1f8;
    *(undefined1 *)(lVar7 + 0x28) = (undefined1)local_1f0;
    *(undefined1 *)(lVar7 + 0x29) = local_1f0._1_1_;
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
    FUN_1410f2f10(uVar9,local_110,local_128,&local_268,local_258,
                  in_stack_fffffffffffffd60 & 0xffffffffffffff00,0,
                  in_stack_fffffffffffffd70 & 0xffffff00,2,1);
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_210 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar1 = (int *)((longlong)local_210 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_210 + 8))(local_210,1);
        }
      }
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_f0 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_30 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_180 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar1 = (int *)((longlong)local_180 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_150 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)local_150 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    plVar11 = &local_268;
LAB_1411ad45e:
    TArray<FKeyBindMenuEntry,FDefaultAllocator>::~TArray<FKeyBindMenuEntry,FDefaultAllocator>
              (plVar11);
  }
  else {
    param_1 = param_1 + 0x58c;
    cVar5 = FWeakObjectPtr::IsValid(param_1);
    if (cVar5 != '\0') {
      uVar9 = FWeakObjectPtr::Get(param_1);
      cVar5 = APlayerController::IsPrimaryPlayer(uVar9);
      if (cVar5 == '\0') {
        local_278 = 0;
        local_270 = 0;
        uVar9 = FUN_1404b03b0();
        FText::FText(local_1b8,uVar9);
        local_1a0 = 0;
        local_198 = 0;
        local_190 = 1;
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_80,L"Quit Game",L"PauseMenu",L"DialogChoice_DisconnectSS");
        FText::operator=(local_1b8,uVar9);
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_78 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar1 = (int *)((longlong)local_78 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_78 + 8))(local_78,1);
            }
          }
        }
        lVar7 = (longlong)(int)local_270;
        local_1a0 = DAT_146875000;
        iVar6 = (int)local_270 + 1;
        if (local_270._4_4_ < iVar6) {
          uVar12 = local_270 & 0xffffffff;
          local_270._0_4_ = iVar6;
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_278,uVar12);
          iVar6 = (int)local_270;
        }
        local_270._0_4_ = iVar6;
        lVar7 = lVar7 * 0x30 + local_278;
        FText::FText(lVar7,local_1b8);
        *(undefined8 *)(lVar7 + 0x18) = local_1a0;
        *(undefined8 *)(lVar7 + 0x20) = local_198;
        *(undefined1 *)(lVar7 + 0x28) = (undefined1)local_190;
        *(undefined1 *)(lVar7 + 0x29) = local_190._1_1_;
        uVar9 = FUN_1404b03b0();
        FText::FText(local_1e8,uVar9);
        local_1d0 = 0;
        local_1c8 = 0;
        local_1c0 = 1;
        FText::operator=(local_1e8,&DAT_1468762b8);
        iVar6 = (int)local_270;
        lVar7 = (longlong)(int)local_270;
        local_1d0 = DAT_146874ff0;
        local_270._0_4_ = (int)local_270 + 1;
        if (local_270._4_4_ < (int)local_270) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_278,iVar6);
        }
        lVar7 = lVar7 * 0x30 + local_278;
        FText::FText(lVar7,local_1e8);
        *(undefined8 *)(lVar7 + 0x18) = local_1d0;
        *(undefined8 *)(lVar7 + 0x20) = local_1c8;
        *(undefined1 *)(lVar7 + 0x28) = (undefined1)local_1c0;
        *(undefined1 *)(lVar7 + 0x29) = local_1c0._1_1_;
        uVar9 = FUN_1404b03b0();
        FText::FText(local_248,uVar9);
        local_230 = 0;
        local_228 = 0;
        local_220 = 1;
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_68,L"Cancel",L"PauseMenu",L"DialogChoice_Cancel");
        FText::operator=(local_248,uVar9);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_60 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
        uVar12 = local_270;
        lVar7 = (longlong)(int)local_270;
        local_230 = DAT_146874fe8;
        local_228 = DAT_146b3e2b8;
        iVar6 = (int)local_270 + 1;
        local_270 = CONCAT44(local_270._4_4_,iVar6);
        if (local_270._4_4_ < iVar6) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_278,uVar12 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x30 + local_278;
        FText::FText(lVar7,local_248);
        *(undefined8 *)(lVar7 + 0x18) = local_230;
        *(undefined8 *)(lVar7 + 0x20) = local_228;
        *(undefined1 *)(lVar7 + 0x28) = (undefined1)local_220;
        *(undefined1 *)(lVar7 + 0x29) = local_220._1_1_;
        uVar9 = FWeakObjectPtr::Get(param_1);
        FUN_1410f2f10(uVar9,local_110,local_128,&local_278,local_258,
                      in_stack_fffffffffffffd60 & 0xffffffffffffff00,0,
                      in_stack_fffffffffffffd70 & 0xffffff00,2,1);
        if (local_240 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_240 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_240)(local_240);
            LOCK();
            piVar1 = (int *)((longlong)local_240 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_240 + 8))(local_240,1);
            }
          }
        }
        if (local_1e0 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_1e0 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_1e0)(local_1e0);
            LOCK();
            piVar1 = (int *)((longlong)local_1e0 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_1e0 + 8))(local_1e0,1);
            }
          }
        }
        if (local_1b0 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_1b0 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_1b0)(local_1b0);
            LOCK();
            piVar1 = (int *)((longlong)local_1b0 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_1b0 + 8))(local_1b0,1);
            }
          }
        }
        plVar11 = &local_278;
        goto LAB_1411ad45e;
      }
    }
    uVar9 = FWeakObjectPtr::Get(param_1);
    FUN_1410f47a0(uVar9,local_110,local_128,local_258,in_stack_fffffffffffffd58 & 0xffffffffffffff00
                  ,0,in_stack_fffffffffffffd68 & 0xffffffffffffff00,1,1);
  }
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_120 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)local_120 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_108 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  return;
}



// FUNCTION 1411ad500 FUN_1411ad500 body=273 status=ok
// SIG undefined FUN_1411ad500(void)

void FUN_1411ad500(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_18 [2];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
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
    if (((bVar1) &&
        (lVar4 = UGameInstance::FindLocalPlayerFromControllerId(lVar3,*(undefined4 *)(param_2 + 8)),
        lVar4 != 0)) && (cVar2 = FUN_14254a1f0(lVar4), cVar2 == '\0')) {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 != 0) {
        lVar5 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_140be3660(lVar3,lVar4);
          local_18[0] = 0;
          local_18[1] = 0;
          FUN_140d0dc60(lVar4,local_18);
          if (local_18[0] != 0) {
            FMemory::Free();
          }
        }
      }
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar3);
    }
  }
  return;
}



// FUNCTION 1411ad620 FUN_1411ad620 body=242 status=ok
// SIG undefined FUN_1411ad620(void)

void FUN_1411ad620(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_28 [4];
  
  FUN_142ebe450();
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
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
    if (bVar1) {
      FUN_140befe30(lVar3);
    }
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x58c);
  if (cVar2 != '\0') {
    local_28[1] = 5;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"quit",10);
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x58c);
    (**(code **)(*plVar5 + 0xd28))(plVar5,local_28 + 2,local_28,1);
    if (local_28[2] != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1411ad720 FUN_1411ad720 body=81 status=ok
// SIG undefined FUN_1411ad720(void)

void FUN_1411ad720(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(bool *)(lVar1 + 0x1fc) = 0 < iVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411ad790 FUN_1411ad790 body=127 status=ok
// SIG undefined FUN_1411ad790(void)

void FUN_1411ad790(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    if (*(char *)(param_1 + 0x2b4) != '\0') {
      if ((*(int *)(param_1 + 0x2b0) == 0) && (0 < *(int *)(param_1 + 400))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (DAT_146876190 == DAT_146af4ac8) {
        return;
      }
      if (bVar1) {
        return;
      }
    }
    iVar2 = FUN_142eb7a10(param_2);
    if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 400))) {
      FUN_14248ef20(*(undefined8 *)(param_1 + 0xc0),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar2 * 4));
    }
  }
  return;
}



// FUNCTION 1411ad810 thunk_FUN_1411b5480 body=5 status=ok
// SIG undefined thunk_FUN_1411b5480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1411b5480(longlong *param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  void *_Src;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 auStackX_8 [2];
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [16];
  longlong *plStack_138;
  int iStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong alStack_118 [2];
  void *pvStack_108;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *plStack_f8;
  longlong *plStack_f0;
  longlong *plStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  longlong *plStack_c0;
  longlong *plStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *plStack_88;
  longlong *plStack_80;
  undefined1 auStack_78 [8];
  longlong *plStack_70;
  undefined1 auStack_60 [40];
  
  plVar13 = (longlong *)0x0;
  auStackX_8[0] = 0;
  if (param_1[0xd8] == 0) {
    return;
  }
  FUN_142ecffe0();
  puVar7 = (undefined8 *)FName::FName(auStackX_10,L"SPARK",1);
  FUN_1404d0c50(&plStack_d8,*puVar7);
  if ((plStack_d8 == (longlong *)0x0) ||
     (lVar8 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c), lVar8 == 0)) goto LAB_1411b5b90;
  if ((param_1[0xd6] != 0) && (param_1[0xd7] != 0)) {
    alStack_118[0] = 0;
    alStack_118[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_118,0);
    FGenericPlatformString::Convert<char,wchar_t>(alStack_118[0],10,"searching",10,0x3f);
    FUN_142088910(param_1[0xd6],alStack_118);
    if (alStack_118[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(*(longlong *)param_1[0xd7] + 0x278))((longlong *)param_1[0xd7],1);
    lVar8 = *(longlong *)param_1[0xd7];
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (auStack_78,L"Searching for servers",L"ServerBrowserMenu",L"SearchingText");
    (**(code **)(lVar8 + 0x2b0))(param_1[0xd7],uVar9,1,0);
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_70 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plStack_70 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
  }
  lVar8 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  lVar8 = *(longlong *)(lVar8 + 0x508);
  if (lVar8 == 0) {
LAB_1411b5684:
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
    plStack_c0 = (longlong *)0x0;
    uStack_120 = plVar13;
    uStack_128 = plVar13;
  }
  else {
    lVar10 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1411b5684;
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
    lVar8 = FUN_142547b50(lVar8,auStack_60);
    uStack_120 = *(longlong **)(lVar8 + 0x10);
    uStack_128 = *(longlong **)(lVar8 + 8);
    plStack_b0 = uStack_120;
    if (uStack_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
      UNLOCK();
    }
  }
  plVar11 = plStack_c0;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
    UNLOCK();
  }
  if ((bVar4) && (plStack_c0 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_c0 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  plVar11 = plStack_b0;
  if ((bVar5) && (plStack_b0 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_b0 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
      }
    }
  }
  if (bVar6) {
    FUN_1404bf980(auStack_60);
  }
  if (uStack_128 == (longlong *)0x0) {
    FUN_1411a4f30(param_1,2);
  }
  else {
    auStackX_8[0] = 0;
    lVar8 = (**(code **)(*param_1 + 0x148))();
    if (lVar8 != 0) {
      lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar8 = *(longlong *)(lVar8 + 400);
      if (lVar8 != 0) {
        lVar10 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_146876414) && (_Init_thread_header(&DAT_146876414), DAT_146876414 == -1)) {
            DAT_1462a1a70 = (void *)0x0;
            _DAT_1462a1a78 = 0x21;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1a70,0);
            FGenericPlatformString::Memcpy(DAT_1462a1a70,L"2cf9a2ba9e68496ebefefc9013f8b389",0x42);
            atexit((_func_5014 *)&LAB_143e61ee0);
            _Init_thread_footer(&DAT_146876414);
          }
          _Src = DAT_1462a1a70;
          lVar10 = (longlong)DAT_1462a1a78;
          pvStack_108 = (void *)0x0;
          iStack_100 = DAT_1462a1a78;
          if (DAT_1462a1a78 == 0) {
            uStack_fc = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                      (&pvStack_108,_DAT_1462a1a78 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop(pvStack_108,_Src,lVar10 * 2);
          }
          auStackX_8[0] = FUN_140bb8dc0(lVar8,&pvStack_108);
          if (pvStack_108 != (void *)0x0) {
            FMemory::Free();
          }
        }
      }
    }
    lVar8 = operator_new(0x88);
    plVar11 = plVar13;
    if (lVar8 != 0) {
      plVar11 = (longlong *)FUN_140da88b0(lVar8);
    }
    plVar12 = (longlong *)operator_new(0x18);
    if (plVar12 != (longlong *)0x0) {
      *(undefined4 *)(plVar12 + 1) = 1;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      *plVar12 = (longlong)&PTR_FUN_143f3f2e0;
      plVar12[2] = (longlong)plVar11;
      plVar13 = plVar12;
    }
    pplVar2 = (longlong **)(param_1 + 0xd3);
    plStack_f8 = plVar11;
    plStack_f0 = plVar13;
    SharedPointerInternals::EnableSharedFromThis(&plStack_f8,plVar11,plVar11);
    if (pplVar2 != &plStack_f8) {
      *pplVar2 = plVar11;
      plStack_f8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd4,&plStack_f0);
      plVar13 = plStack_f0;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar13 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    *(undefined4 *)((longlong)*pplVar2 + 0x1c) = 0x14;
    *(char *)(*pplVar2 + 0xf) = (char)param_1[0xd1];
    *(undefined4 *)(*pplVar2 + 0x10) = 0x40000000;
    plStack_e0 = (longlong *)param_1[0xd4];
    plStack_e8 = *pplVar2;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
      UNLOCK();
    }
    FUN_1404ab0b0(plStack_e8 + 4,DAT_1468762e8,auStackX_8,0);
    uStack_a0 = 0;
    plStack_138 = (longlong *)0x0;
    uStack_a8 = FUN_1411a4f30;
    plVar13 = (longlong *)FMemory::Realloc(0,0x30);
    iStack_130 = 3;
    plStack_138 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      *plVar13 = (longlong)&PTR_FUN_1442cc120;
      FWeakObjectPtr::operator=(plVar13 + 1,param_1);
      *(undefined4 *)(plVar13 + 2) = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)plVar13 + 0x14) = uStack_a8._4_4_;
      *(undefined4 *)(plVar13 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_9c;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar13[5] = lVar8;
      *plVar13 = (longlong)&PTR_FUN_1442cc168;
    }
    plVar13 = (longlong *)(**(code **)(*plStack_d8 + 0x108))(plStack_d8,auStackX_18,&plStack_138);
    param_1[0xd2] = *plVar13;
    if (iStack_130 == 0) {
LAB_1411b5a43:
      if (plStack_138 != (longlong *)0x0) {
        FMemory::Free(plStack_138);
      }
    }
    else if (plStack_138 != (longlong *)0x0) {
      (**(code **)(*plStack_138 + 0x28))(plStack_138,0);
      if (plStack_138 != (longlong *)0x0) {
        plStack_138 = (longlong *)FMemory::Realloc(plStack_138,0,0);
      }
      iStack_130 = 0;
      goto LAB_1411b5a43;
    }
    plStack_88 = plStack_e8;
    plStack_80 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
      UNLOCK();
    }
    uStack_98 = (undefined4)uStack_128;
    uStack_94 = uStack_128._4_4_;
    uStack_90 = (undefined4)uStack_120;
    uStack_8c = uStack_120._4_4_;
    if (uStack_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plStack_d8 + 0x100))(plStack_d8,&uStack_98,&plStack_88);
    plVar13 = (longlong *)CONCAT44(uStack_8c,uStack_90);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar13 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    plVar13 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_80 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    plVar13 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_e0 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
        }
      }
    }
  }
  plVar13 = uStack_120;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    plVar11 = uStack_120 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_120)(uStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_120 + 8))(uStack_120,1);
      }
    }
  }
LAB_1411b5b90:
  plVar13 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_d0 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
      }
    }
  }
  return;
}



// FUNCTION 1411ad820 FUN_1411ad820 body=68 status=ok
// SIG undefined FUN_1411ad820(void)

void FUN_1411ad820(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined1 local_18 [16];
  
  local_res18[0] = param_3;
  uVar1 = FName::FName(local_18,&DAT_1446d10a4,1);
  iVar2 = FName::Compare(local_res18,uVar1);
  if (iVar2 == 0) {
    FUN_140d4b4f0(*(undefined8 *)(param_1 + 0x70));
  }
  return;
}



// FUNCTION 1411ad870 FUN_1411ad870 body=472 status=ok
// SIG undefined FUN_1411ad870(void)

void FUN_1411ad870(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong local_res20;
  undefined1 local_58 [8];
  longlong local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FWeakObjectPtr::operator=(local_58,0);
    local_50 = 0;
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnResetTutorialsChoiceMade",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res20,pwVar5 + 2,1);
    FWeakObjectPtr::operator=(local_58,param_1);
    local_50 = local_res20;
    if ((local_res20 != 0) && (lVar7 = FWeakObjectPtr::Get(local_58), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_50);
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_30,L"Do you want to reset all tutorials?",L"GameplayOptionsMenu",
                       L"ResetTutorialsMessageText");
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"Reset Tutorials?",L"GameplayOptionsMenu",
                       L"RestoreDefaultsDialogTitle");
    FUN_1410f47a0(*(undefined8 *)(param_1 + 0x68),uVar9,uVar8,local_58,0,0,0,0,0);
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411ada50 FUN_1411ada50 body=1436 status=ok
// SIG undefined FUN_1411ada50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411ada50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_2d8 [32];
  undefined2 local_2b8;
  undefined8 local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  longlong *local_278;
  LARGE_INTEGER local_270;
  longlong local_268;
  longlong *local_260;
  code *local_258 [2];
  undefined1 local_248 [32];
  undefined8 local_228;
  undefined4 local_218;
  undefined1 *local_208 [2];
  undefined1 local_1f8 [32];
  undefined8 local_1d8;
  undefined4 local_1c8;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8 [16];
  longlong local_198 [4];
  longlong *local_178;
  int local_168;
  undefined1 *local_158 [2];
  longlong local_148 [4];
  longlong *local_128;
  int local_118;
  LARGE_INTEGER local_108 [24];
  longlong local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  if ((*(longlong **)(param_1 + 0x68) == (longlong *)0x0) ||
     (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0xfa8))(), lVar4 == 0))
  goto LAB_1411adfba;
  lVar10 = param_1 + 0xe0;
  lVar5 = FWeakObjectPtr::Get(lVar10);
  plVar11 = (longlong *)0x0;
  bVar3 = true;
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0xe8)) &&
       (local_2a8 = 0, *(longlong *)(param_1 + 0xf0) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar10,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xe8) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar10);
      if (lVar5 != 0) goto LAB_1411adb3c;
    }
LAB_1411adb78:
    local_228 = 0;
    local_218 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_248);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[1] = param_1;
      *puVar7 = &PTR_FUN_143f77b70;
    }
    local_290 = 0;
    local_258[0] = FUN_141190dc0;
    local_288 = 0x42;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_290,0);
    local_2b8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_290,0x42,"UGFxGraphicsOptions::OnResolutionClicked::LoadResolutionsMenuData");
    FUN_140cdf730(local_108,&local_290,local_258);
    QueryPerformanceCounter(&local_270);
    local_108[0] = local_270;
    lVar5 = operator_new(0x18);
    plVar8 = plVar11;
    if (lVar5 != 0) {
      plVar8 = (longlong *)FUN_140cdf810(lVar5);
    }
    plVar9 = (longlong *)operator_new(0x18);
    local_298 = plVar11;
    if (plVar9 != (longlong *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      *plVar9 = (longlong)&PTR_DestroyObject_1444f8938;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      plVar9[2] = (longlong)plVar8;
      local_298 = plVar9;
    }
    local_2a0 = plVar8;
    SharedPointerInternals::EnableSharedFromThis(&local_2a0,plVar8,plVar8);
    *(undefined1 *)(local_2a0 + 2) = 1;
    local_278 = (longlong *)local_2a0[1];
    local_268 = *local_2a0;
    if (local_278 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_278 + 1) = (int)local_278[1] + 1;
      UNLOCK();
    }
    local_280 = 0;
    local_260 = local_278;
    local_48 = local_268;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_40,&local_278);
    plVar8 = local_278;
    if (local_278 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_278 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_278)(local_278);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_278 + 8))(local_278,1);
        }
      }
    }
    local_128 = (longlong *)0x0;
    local_118 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_148);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_1444f8620;
      puVar7[1] = local_108;
    }
    local_158[0] = &LAB_140cee980;
    local_1b8 = local_2a0;
    local_1b0 = local_298;
    if (local_298 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_298 + 1) = (int)local_298[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1a8,local_158);
    local_1d8 = 0;
    local_1c8 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x70,local_1f8);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_CopyToEmptyStorage_1444f8578;
      puVar7[2] = local_1b8;
      puVar7[3] = local_1b0;
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
        UNLOCK();
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar7 + 4,local_1a8);
    }
    local_208[0] = &LAB_140cee8d0;
    if (local_168 != 0) {
      plVar8 = local_198;
      if (local_178 != (longlong *)0x0) {
        plVar8 = local_178;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_178 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar8 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1b0 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1b0)(local_1b0);
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
    if (local_118 != 0) {
      plVar8 = local_148;
      if (local_128 != (longlong *)0x0) {
        plVar8 = local_128;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar8 = local_298;
    if (local_298 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_298 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_298)(local_298);
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
    FUN_14204c280(local_208);
    FUN_140d1b3a0(local_108);
    FUN_140ce1dc0(local_108);
  }
  else {
LAB_1411adb3c:
    lVar6 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    if (!bVar3) goto LAB_1411adb78;
  }
  plVar8 = (longlong *)FWeakObjectPtr::Get(lVar10);
  if (plVar8 == (longlong *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0xe8)) &&
       (local_2a8 = 0, *(longlong *)(param_1 + 0xf0) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar10,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xe8) = DAT_1464b56f4;
      }
      plVar8 = (longlong *)FWeakObjectPtr::Get(lVar10);
      if (plVar8 != (longlong *)0x0) goto LAB_1411adf54;
    }
LAB_1411adf8c:
    plVar8 = plVar11;
  }
  else {
LAB_1411adf54:
    lVar10 = FUN_142f2cf80();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1411adf8c;
  }
  FUN_142f02280(lVar4,plVar8);
LAB_1411adfba:
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411adff0 FUN_1411adff0 body=122 status=ok
// SIG undefined FUN_1411adff0(void)

void FUN_1411adff0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    if (*(int *)((longlong)param_1 + 700) == (int)param_1[0x59]) {
      uVar1 = (undefined4)param_1[0x2c];
    }
    else {
      uVar1 = 0xffffffff;
    }
    FUN_142ed2aa0(param_2,uVar1);
    uVar1 = FUN_142eb7a10(param_2);
    if (local_res10 != param_1 + 0x50) {
      *(undefined4 *)(param_1 + 0x50) = uVar1;
      *(undefined1 *)((longlong)param_1 + 0x284) = 1;
    }
    FUN_1411be4b0(param_1);
    (**(code **)(*param_1 + 0x2c8))(param_1,param_1[6]);
  }
  return;
}



// FUNCTION 1411ae070 FUN_1411ae070 body=2131 status=ok
// SIG undefined FUN_1411ae070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1411ae070(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  undefined1 auStack_368 [32];
  undefined1 local_348;
  undefined4 local_340;
  undefined4 local_338;
  undefined4 local_334;
  longlong local_330;
  undefined1 local_328 [8];
  longlong *local_320;
  undefined8 local_310;
  undefined8 local_308;
  undefined2 local_300;
  undefined8 local_2f8;
  longlong local_2f0 [3];
  undefined4 *local_2d8;
  undefined1 *puStack_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 *local_2a8;
  undefined1 *puStack_2a0;
  undefined1 local_298 [16];
  longlong *local_288;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_258 [24];
  undefined1 local_240 [24];
  longlong local_228;
  int local_220;
  int local_21c;
  undefined4 local_218;
  undefined4 local_214;
  longlong local_210;
  undefined1 local_1f6;
  undefined2 local_1d5;
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
  undefined4 local_e0 [2];
  longlong local_d8;
  longlong *local_c8;
  char local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  if ((param_1[0xd1] != 0) && (param_1[0xd0] != 0)) {
    iVar4 = FUN_142eb7a00();
    if ((int)param_1[0xd5] == iVar4) {
      FUN_142eb3990(param_1);
    }
    else {
      lVar5 = FUN_142eb6a30(param_1[0xd1]);
      if (lVar5 != 0) {
        FUN_142ed2820(lVar5,0,1);
      }
      *(int *)(param_1 + 0xd5) = iVar4;
      UGameUserSettings::SetScreenResolution
                (param_1[0xd0],*(undefined8 *)(param_1[0xd3] + (longlong)iVar4 * 8));
      FUN_142471ee0(param_1[0xd0],1);
      lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      pwVar11 = (wchar_t *)0x0;
      if (lVar5 != 0) {
        pwVar11 = *(wchar_t **)(lVar5 + 400);
      }
      if ((pwVar11 != (wchar_t *)0x0) && (lVar5 = FUN_1424503b0(), lVar5 != 0)) {
        lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          *(undefined4 *)(param_1 + 0xd7) = 0xf;
          FWeakObjectPtr::operator=(&local_338,0);
          local_330 = 0;
          pwVar7 = _guard_xfg_dispatch_icall_nop
                             (L"&UGFxResolutionsMenu::OnConfirmNewResolution",L"::");
          pwVar11 = (wchar_t *)0x0;
          while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
            pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
            pwVar11 = pwVar3;
          }
          FName::FName(local_2f0,pwVar11 + 2,1);
          FWeakObjectPtr::operator=(&local_338,param_1);
          local_330 = local_2f0[0];
          local_2f8 = 0;
          if ((local_2f0[0] != 0) && (lVar6 = FWeakObjectPtr::Get(&local_338), lVar6 != 0)) {
            UObject::FindFunction(lVar6,local_330);
          }
          FUN_140b99f70(local_258);
          lVar6 = param_1[0xd7];
          uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_150,
                             L"Do you want to keep this resolution?\n\nResolution will be reverted in {0}."
                             ,L"ResolutionsMenu",L"ResolutionBody");
          puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar8);
          local_e0[0] = 0;
          local_2d8 = local_e0;
          local_b8 = '\0';
          puStack_2d0 = local_b0;
          local_2c8 = *puVar9;
          local_2c0 = puVar9[1];
          if (local_2c0 != 0) {
            LOCK();
            *(int *)(local_2c0 + 8) = *(int *)(local_2c0 + 8) + 1;
            UNLOCK();
          }
          local_d8 = (longlong)(int)lVar6;
          local_2a8 = local_2d8;
          puStack_2a0 = puStack_2d0;
          uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_298,&local_2a8);
          uVar8 = FText::Format(local_168,&local_2c8,uVar8);
          FText::FText(local_278,uVar8);
          if (local_160 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_160 + 1;
            lVar6 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_160)(local_160);
              LOCK();
              piVar1 = (int *)((longlong)local_160 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_160 + 8))(local_160,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_298);
          if ((local_b8 != '\0') && (local_b8 = '\0', local_c8 != (longlong *)0x0)) {
            LOCK();
            plVar10 = local_c8 + 1;
            lVar6 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
          plVar10 = (longlong *)puVar9[1];
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar10 + 1;
            lVar6 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
          FText::operator=(local_240,local_278);
          if (local_270 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_270 + 1;
            lVar6 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_270)(local_270);
              LOCK();
              piVar1 = (int *)((longlong)local_270 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_270 + 8))(local_270,1);
              }
            }
          }
          if (local_148 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_148 + 1;
            lVar6 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_148)(local_148);
              LOCK();
              piVar1 = (int *)((longlong)local_148 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_148 + 8))(local_148,1);
              }
            }
          }
          uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_138,L"Keep Setting?",L"ResolutionsMenu",L"ResolutionHeader");
          FText::operator=(local_258,uVar8);
          if (local_130 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_130 + 1;
            lVar6 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_130)(local_130);
              LOCK();
              piVar1 = (int *)((longlong)local_130 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_130 + 8))(local_130,1);
              }
            }
          }
          local_218 = local_338;
          local_214 = local_334;
          local_210 = local_330;
          local_1d5 = 1;
          local_1f6 = 0;
          uVar8 = FUN_1404b03b0();
          FText::FText(local_328,uVar8);
          local_310 = 0;
          local_308 = 0;
          local_300 = 1;
          uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_120,&DAT_1446e2670,L"ResolutionsMenu",L"DialogChoice_Yes");
          FText::operator=(local_328,uVar8);
          if (local_118 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_118 + 1;
            lVar6 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_118)(local_118);
              LOCK();
              piVar1 = (int *)((longlong)local_118 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_118 + 8))(local_118,1);
              }
            }
          }
          puVar9 = (undefined8 *)FName::FName(&local_2f8,&DAT_1446d11fc,1);
          iVar4 = local_220;
          lVar6 = (longlong)local_220;
          local_310 = *puVar9;
          local_308 = DAT_146b3e2a0;
          local_220 = local_220 + 1;
          if (local_21c < local_220) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_228,iVar4);
          }
          lVar6 = lVar6 * 0x30 + local_228;
          FText::FText(lVar6,local_328);
          *(undefined8 *)(lVar6 + 0x18) = local_310;
          *(undefined8 *)(lVar6 + 0x20) = local_308;
          *(undefined1 *)(lVar6 + 0x28) = (undefined1)local_300;
          *(undefined1 *)(lVar6 + 0x29) = local_300._1_1_;
          uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_108,&DAT_1446e26b8,L"ResolutionsMenu",L"DialogChoice_No");
          FText::operator=(local_328,uVar8);
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_100 + 1;
            lVar6 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_100)(local_100);
              LOCK();
              piVar1 = (int *)((longlong)local_100 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_100 + 8))(local_100,1);
              }
            }
          }
          puVar9 = (undefined8 *)FName::FName(&local_2d8,&DAT_1446d122c,1);
          iVar4 = local_220;
          lVar6 = (longlong)local_220;
          local_310 = *puVar9;
          local_308 = DAT_146b3e2b8;
          local_220 = local_220 + 1;
          local_300 = local_300 & 0xff00;
          if (local_21c < local_220) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_228,iVar4);
          }
          lVar6 = lVar6 * 0x30 + local_228;
          FText::FText(lVar6,local_328);
          *(undefined8 *)(lVar6 + 0x18) = local_310;
          *(undefined8 *)(lVar6 + 0x20) = local_308;
          *(undefined1 *)(lVar6 + 0x28) = (undefined1)local_300;
          *(undefined1 *)(lVar6 + 0x29) = local_300._1_1_;
          lVar5 = FUN_1410f3080(lVar5,local_258);
          param_1[0xd6] = lVar5;
          local_2f0[1] = 0;
          local_2b8 = FUN_1411bf750;
          uStack_2b0 = 0;
          plVar10 = (longlong *)FMemory::Realloc(0,0x30);
          local_288 = plVar10;
          if (plVar10 != (longlong *)0x0) {
            *plVar10 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar10 + 1,param_1);
            *(undefined4 *)(plVar10 + 2) = (undefined4)local_2b8;
            *(undefined4 *)((longlong)plVar10 + 0x14) = local_2b8._4_4_;
            *(undefined4 *)(plVar10 + 3) = uStack_2b0;
            *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_2ac;
            lVar5 = FDelegateHandle::GenerateNewID();
            plVar10[5] = lVar5;
            *plVar10 = (longlong)&PTR_FUN_143f77bd0;
          }
          local_a8 = 0;
          local_a0 = 0;
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x30))(plVar10,&local_a8);
          }
          FWeakObjectPtr::operator=(local_98,0);
          local_340 = 0xbf800000;
          local_348 = 0;
          local_90 = 0;
          local_58 = (longlong *)0x0;
          local_48 = 0;
          local_88 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(param_1 + 0x68,local_2f0 + 1,&local_a8,0x3f800000);
          if (local_48 != 0) {
            plVar12 = local_78;
            if (local_58 != (longlong *)0x0) {
              plVar12 = local_58;
            }
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 0x10))(plVar12,0);
            }
          }
          if (local_58 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x28))(plVar10,0);
            local_288 = (longlong *)FMemory::Realloc(plVar10,0,0);
            if (local_288 != (longlong *)0x0) {
              FMemory::Free(local_288);
            }
          }
          if (local_320 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_320 + 1;
            lVar5 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_320)(local_320);
              LOCK();
              piVar1 = (int *)((longlong)local_320 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_320 + 8))(local_320,1);
              }
            }
          }
          FUN_140b9d1a0(local_258);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411ae8d0 FUN_1411ae8d0 body=84 status=ok
// SIG undefined FUN_1411ae8d0(void)

void FUN_1411ae8d0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 local_res10 [6];
  
  if ((param_2 != 0) && (param_1[0x18] != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    if (local_res10 != (undefined4 *)((longlong)param_1 + 0x2cc)) {
      *(undefined4 *)((longlong)param_1 + 0x2cc) = uVar1;
      *(undefined1 *)(param_1 + 0x5a) = 1;
    }
    FUN_1411be4b0(param_1);
    (**(code **)(*param_1 + 0x2c8))(param_1,param_1[6]);
  }
  return;
}



// FUNCTION 1411ae930 FUN_1411ae930 body=137 status=ok
// SIG undefined FUN_1411ae930(void)

void FUN_1411ae930(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  undefined8 local_res18 [2];
  
  if (*(longlong *)(param_1 + 0x748) != 0) {
    local_res18[0] = param_3;
    uVar3 = FName::FName(local_res8,&DAT_1446d1084,1);
    iVar2 = FName::Compare(local_res18,uVar3);
    if (iVar2 == 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x748) + 0x28) = 0;
      (**(code **)(**(longlong **)(param_1 + 0x748) + 0x2b0))();
      LOCK();
      *(undefined4 *)(param_1 + 0x588) = 1;
      UNLOCK();
      plVar1 = *(longlong **)(param_1 + 0x748);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 1411ae9c0 FUN_1411ae9c0 body=643 status=ok
// SIG undefined FUN_1411ae9c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411ae9c0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8 [2];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  cVar2 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x58c);
  if (((cVar2 != '\0') &&
      (lVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c), *(longlong *)(lVar4 + 0x488) == 0))
     && (lVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c), lVar4 != 0)) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (cVar2 = FUN_140d01b90(lVar4), cVar2 == '\0')) &&
       ((iVar3 = FUN_140cfc820(lVar4), iVar3 == 0 && (*(char *)(lVar4 + 0x1a04) != '\x02')))) {
      if (*(char *)(lVar4 + 0x1a04) == '\0') {
        FUN_1411bb010(param_1);
        return;
      }
      FWeakObjectPtr::operator=(&local_108,param_1);
      uVar6 = FUN_140e971d0(param_1);
      FWeakObjectPtr::operator=(&local_100,uVar6);
      local_c8 = (longlong *)0x0;
      local_b8 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_e8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_CopyToEmptyStorage_144266c58;
        *(undefined4 *)(puVar7 + 1) = local_108;
        *(undefined4 *)((longlong)puVar7 + 0xc) = local_104;
        *(undefined4 *)(puVar7 + 2) = local_100;
        *(undefined4 *)((longlong)puVar7 + 0x14) = local_fc;
      }
      local_f8[0] = FUN_141190e30;
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar4 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar4 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
      }
      local_a8 = 0;
      local_a0 = 0;
      FWeakObjectPtr::operator=(local_98,0);
      local_90 = 0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,local_f8);
      FUN_142880af0(uVar6,&local_a8);
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
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (local_b8 != 0) {
        plVar8 = local_e8;
        if (local_c8 != (longlong *)0x0) {
          plVar8 = local_c8;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_c8 == (longlong *)0x0) {
        return;
      }
      FMemory::Free();
      return;
    }
  }
  FUN_142eb3990(param_1);
  return;
}



// FUNCTION 1411aec50 FUN_1411aec50 body=65 status=ok
// SIG undefined FUN_1411aec50(void)

void FUN_1411aec50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 local_res18 [16];
  
  uVar1 = *(undefined4 *)(param_3 + 8);
  puVar2 = (undefined8 *)FName::FName(local_res18,L"Roster",1);
  FUN_14112a420(param_1,*puVar2,uVar1);
  return;
}



// FUNCTION 1411aeca0 FUN_1411aeca0 body=157 status=ok
// SIG undefined FUN_1411aeca0(void)

void FUN_1411aeca0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  if ((((*(longlong **)(param_1 + 0x68) != (longlong *)0x0) &&
       (lVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0xfa8))(), lVar3 != 0)) &&
      (plVar1 = *(longlong **)(param_1 + 0x30), plVar1 != (longlong *)0x0)) && (plVar1[0xd3] != 0))
  {
    local_18 = 0;
    local_10 = 0;
    lVar2 = *plVar1;
    puVar4 = (undefined8 *)FName::FName(local_res8,"Navigate",1);
    (**(code **)(lVar2 + 0x4e8))(*(undefined8 *)(param_1 + 0x30),*puVar4,&local_18);
    FUN_142f02280(lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x698));
  }
  return;
}



// FUNCTION 1411aed40 FUN_1411aed40 body=169 status=ok
// SIG undefined FUN_1411aed40(void)

void FUN_1411aed40(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  FUN_1411a38e0(param_1,0,DAT_146874fd0,local_38);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 1411aedf0 FUN_1411aedf0 body=72 status=ok
// SIG undefined FUN_1411aedf0(void)

void FUN_1411aedf0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140ccff10(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411aee40 FUN_1411aee40 body=791 status=ok
// SIG undefined FUN_1411aee40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411aee40(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [48];
  undefined4 local_148 [2];
  undefined8 local_140;
  longlong *plStack_138;
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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  iVar12 = -1;
  if (param_2 != 0) {
    lVar9 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
         ) != lVar9 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      iVar12 = *(int *)(param_2 + 0x2d8);
    }
  }
  if (param_1[0xd3] != 0) {
    if ((iVar12 < 0) || (*(int *)(param_1[0xd3] + 0x10) <= iVar12)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      lVar9 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
      lVar9 = *(longlong *)(lVar9 + 0x508);
      if (lVar9 != 0) {
        lVar10 = ULocalPlayer::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (((bVar8) && (lVar10 = (**(code **)(*param_1 + 0x148))(), lVar10 != 0)) &&
           (lVar10 = *(longlong *)(lVar10 + 400), lVar10 != 0)) {
          lVar11 = FUN_14141f270();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            local_148[0] = 2;
            local_140 = 0;
            plStack_138 = (longlong *)0x0;
            local_128 = &PTR_FUN_143f769a8;
            local_120 = 0;
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
            local_a4 = 0;
            local_98 = 0;
            local_90 = 0;
            local_78 = 0;
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_100 = &PTR_FUN_143f769a0;
            local_130 = 0xffffffff;
            local_118 = 0;
            uStack_110 = 0;
            local_a8 = 0xffffffff;
            local_88 = 0;
            uStack_80 = 0;
            local_70 = 9999;
            lVar9 = FUN_142547b50(lVar9,local_178);
            plVar3 = plStack_138;
            uVar5 = *(undefined8 *)(lVar9 + 8);
            plVar6 = *(longlong **)(lVar9 + 0x10);
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            local_188._0_4_ = (undefined4)uVar5;
            local_48 = (undefined4)local_188;
            local_188._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_44 = local_188._4_4_;
            uStack_180._0_4_ = SUB84(plVar6,0);
            uStack_40 = (undefined4)uStack_180;
            uStack_180._4_4_ = (undefined4)((ulonglong)plVar6 >> 0x20);
            uStack_3c = uStack_180._4_4_;
            local_188 = local_140;
            uStack_180 = plStack_138;
            local_140 = uVar5;
            if (plStack_138 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_138 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                puVar7 = (undefined8 *)*plStack_138;
                plStack_138 = plVar6;
                (*(code *)*puVar7)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar6 = plStack_138;
                if (iVar4 == 1) {
                  (**(code **)(*uStack_180 + 8))(uStack_180,1);
                  plVar6 = plStack_138;
                }
              }
            }
            plStack_138 = plVar6;
            FUN_1404bf980(local_178);
            lVar9 = (longlong)iVar12 * 0xc0 + *(longlong *)(param_1[0xd3] + 8);
            FUN_1404c0750(&local_128,lVar9);
            local_70 = *(undefined4 *)(lVar9 + 0xb8);
            FUN_140be4f30(lVar10,local_148);
            FUN_142eb3990(param_1);
            TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
            ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_60);
            FUN_1404bf650(&local_128);
            plVar6 = plStack_138;
            if (plStack_138 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_138 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plStack_138)(plStack_138);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                iVar12 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1411af160 FUN_1411af160 body=72 status=ok
// SIG undefined FUN_1411af160(void)

void FUN_1411af160(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140cd0180(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411af1b0 FUN_1411af1b0 body=930 status=ok
// SIG undefined FUN_1411af1b0(void)

void FUN_1411af1b0(longlong param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  local_d8 = 0;
  FUN_1404cf2e0(&local_c8,0);
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x220))(local_c8,param_1 + 0x6a0);
  }
  FText::FText(local_b8);
  if (param_2 == 1) {
    local_d0 = 0;
    FUN_1404cf890(&local_e8,0);
    plVar8 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      local_a0 = *param_3;
      local_98 = (longlong *)param_3[1];
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      iVar5 = (**(code **)(*local_e8 + 0x78))(local_e8,&local_a0);
      plVar2 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_98 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_e8;
        if ((int)lVar7 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar8 = local_e8;
          if (iVar3 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
            plVar8 = local_e8;
          }
        }
      }
      if (iVar5 == 0) {
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_70,L"Must be signed into a valid profile to continue.",
                           L"GFxOakTitleScreen",L"InvalidProfile_NotLoggedIn");
        FText::operator=(local_b8,uVar6);
        local_50 = local_68;
      }
      else {
        local_90 = *param_3;
        local_88 = (longlong *)param_3[1];
        if (local_88 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_88 + 1) = (int)local_88[1] + 1;
          UNLOCK();
          plVar8 = local_e8;
        }
        cVar4 = (**(code **)(*plVar8 + 0xa8))(plVar8,&local_90);
        plVar8 = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_88 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_88)(local_88);
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
        if (cVar4 == '\0') {
          local_80 = *param_3;
          local_78 = (longlong *)param_3[1];
          if (local_78 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_78 + 1) = (int)local_78[1] + 1;
            UNLOCK();
          }
          FUN_1411ac580(param_1,&local_80,param_4);
          local_50 = local_78;
        }
        else {
          uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_58,L"Sorry, guest profiles are not supported.",
                             L"GFxOakTitleScreen",L"InvalidProfile_GuestLogin");
          FText::operator=(local_b8,uVar6);
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_50 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
    }
    plVar8 = local_e0;
    if (local_e0 == (longlong *)0x0) goto LAB_1411af48c;
    LOCK();
    plVar2 = local_e0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) goto LAB_1411af48c;
    (**(code **)*local_e0)(local_e0);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 != 1) goto LAB_1411af48c;
    lVar7 = *local_e0;
  }
  else {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Must be signed into a valid, non-guest profile to continue.",
                       L"GFxOakTitleScreen",L"InvalidProfile");
    FText::operator=(local_b8,uVar6);
    if (local_38 == (longlong *)0x0) goto LAB_1411af48c;
    LOCK();
    plVar8 = local_38 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) goto LAB_1411af48c;
    (**(code **)*local_38)(local_38);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 != 1) goto LAB_1411af48c;
    lVar7 = *local_38;
    local_e0 = local_38;
  }
  (**(code **)(lVar7 + 8))(local_e0,1);
LAB_1411af48c:
  cVar4 = FText::IsEmpty(local_b8);
  if (cVar4 == '\0') {
    cVar4 = FOutputDevice::CanBeUsedOnAnyThread(DAT_146b17150,0);
    FUN_1411bbba0(param_1,local_b8,cVar4 == '\0');
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_b0 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  plVar8 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return;
}



// FUNCTION 1411af560 FUN_1411af560 body=67 status=ok
// SIG undefined FUN_1411af560(void)

void FUN_1411af560(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar1 = FUN_142eb7a60(param_2);
    FUN_140d4d460(*(undefined8 *)(param_1 + 0x70),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411af5b0 FUN_1411af5b0 body=79 status=ok
// SIG undefined FUN_1411af5b0(void)

void FUN_1411af5b0(longlong param_1,longlong param_2)

{
  undefined1 local_res8 [32];
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    local_res8[0] = FUN_142eb62f0(param_2);
    FUN_140cd0920(*(undefined8 *)(param_1 + 0xc0),local_res8);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411af600 FUN_1411af600 body=504 status=ok
// SIG undefined FUN_1411af600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411af600(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_118 [32];
  longlong **local_f8;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_142ecbc80();
  FUN_142ecd4d0(param_1);
  local_e0 = 9;
  local_e8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  local_f8 = (longlong **)CONCAT62(local_f8._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_e8,9,"hintText");
  local_f8 = &local_d8;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  lVar1 = FUN_140ac4770(param_1,&local_e8,0,6);
  param_1[0xd9] = lVar1;
  plVar5 = local_d8;
  for (iVar4 = (int)local_d0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  FUN_1411bd7d0(param_1);
  lVar1 = *param_1;
  local_e8 = 0;
  local_e0 = 0;
  puVar2 = (undefined8 *)FName::FName(&local_d8,L"BL_Logo_Splash",1);
  (**(code **)(lVar1 + 0x4e8))(param_1,*puVar2,&local_e8);
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_c8[0] = &LAB_141190ec0;
  uVar3 = FUN_1420849a0(param_1,local_78,local_c8);
  FUN_14208c260(param_1,uVar3);
  if (local_38 != 0) {
    plVar5 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar5 = local_48;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    plVar5 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar5 = local_98;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411af800 FUN_1411af800 body=128 status=ok
// SIG undefined FUN_1411af800(void)

void FUN_1411af800(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = FUN_140d01b90(lVar3);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 500) = 1;
      }
    }
  }
  FUN_142ecbc80(param_1);
  FUN_14119f110(param_1);
  return;
}



// FUNCTION 1411af880 FUN_1411af880 body=596 status=ok
// SIG undefined FUN_1411af880(void)

void FUN_1411af880(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecbc80();
  FUN_142ecd4d0(param_1);
  if (*(longlong *)(param_1 + 0x600) != 0) {
    local_68 = 0;
    local_60 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_68,10,"menuTitle",10,0x3f);
    uVar2 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"RESOLUTIONS",L"ResolutionsMenu",L"ResolutionsMenu");
    FUN_142f100e0(*(undefined8 *)(param_1 + 0x600),&local_68,uVar2);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    lVar3 = FUN_142874ac0(DAT_146b17150);
    *(longlong *)(param_1 + 0x680) = lVar3;
    if (lVar3 != 0) {
      FUN_141192360(param_1);
      local_48 = 0;
      local_40 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"darkBackground",0x1e);
      local_58 = (longlong *)0x0;
      local_50 = 0;
      uVar2 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x600),&local_48,0,6,&local_58);
      *(undefined8 *)(param_1 + 0x690) = uVar2;
      plVar5 = local_58;
      for (iVar4 = (int)local_50; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (((*(longlong *)(param_1 + 0x690) != 0) &&
          (lVar3 = FWeakObjectPtr::Get(param_1 + 0x59c), lVar3 != 0)) &&
         (lVar3 = FUN_140cdde20(lVar3), lVar3 != 0)) {
        local_38[0] = 0;
        local_38[1] = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
        FGenericPlatformString::Memcpy(local_38[0],&DAT_1446e0e64,6);
        FUN_142088910(*(undefined8 *)(param_1 + 0x690),local_38);
        if (local_38[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 1411afae0 FUN_1411afae0 body=4596 status=ok
// SIG undefined FUN_1411afae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411afae0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  code *pcVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  wchar_t *pwVar18;
  bool bVar19;
  undefined1 auStack_468 [32];
  longlong **local_448;
  undefined8 local_440;
  undefined1 local_438;
  int local_428;
  int local_424;
  longlong local_420;
  undefined8 local_418;
  undefined1 local_410 [8];
  longlong local_408;
  undefined4 local_400;
  longlong *local_3f8;
  undefined8 local_3f0;
  longlong local_3e8;
  undefined8 local_3e0;
  longlong *local_3d8;
  undefined8 local_3d0;
  longlong local_3c8;
  undefined8 local_3c0;
  longlong *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  undefined8 local_390;
  longlong local_388;
  undefined8 local_380;
  longlong *local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 local_360;
  longlong *local_358;
  undefined8 local_350;
  longlong local_348;
  undefined8 local_340;
  longlong local_338;
  undefined8 local_330;
  longlong local_328;
  undefined8 local_320;
  longlong *local_318;
  undefined8 local_310;
  longlong local_308;
  undefined8 local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  longlong *plStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  longlong local_240;
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  wchar_t *local_220;
  longlong local_218;
  wchar_t *local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
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
  code *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  pwVar18 = (wchar_t *)0x0;
  local_400 = 0;
  FUN_1410e1fa0();
  if (*(char *)(param_1 + 0x688) == '\0') {
    local_328 = 0;
    local_320 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_328,0);
    local_448 = (longlong **)CONCAT62(local_448._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_328,10,"menuTitle");
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1a0,L"Online Games [DEBUG]",L"ServerBrowserMenu",L"OnlineHeaderText");
    FUN_142ed5290(param_1,&local_328,uVar5);
    lVar12 = local_328;
    if (local_198 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_198 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar15 = (int *)((longlong)local_198 + 0xc);
        iVar17 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        lVar12 = local_328;
        if (iVar17 == 1) {
          (**(code **)(*local_198 + 8))(local_198,1);
          lVar12 = local_328;
        }
      }
    }
  }
  else {
    local_338 = 0;
    local_330 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
    local_448 = (longlong **)CONCAT62(local_448._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_338,10,"menuTitle");
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1b8,L"LAN Games",L"ServerBrowserMenu",L"LANHeaderText");
    FUN_142ed5290(param_1,&local_338,uVar5);
    lVar12 = local_338;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1b0 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar15 = (int *)((longlong)local_1b0 + 0xc);
        iVar17 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        lVar12 = local_338;
        if (iVar17 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
          lVar12 = local_338;
        }
      }
    }
  }
  if (lVar12 != 0) {
    FMemory::Free();
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = param_1;
    *puVar6 = &PTR_FUN_143f77b70;
  }
  local_a8 = 0;
  local_88 = (code *)&LAB_141190da0;
  local_98 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x60,local_c8);
  if (puVar6 == (undefined8 *)0x0) goto LAB_1411afd64;
  *puVar6 = &PTR_CopyToEmptyStorage_1444f81f0;
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 10) = 0;
  if (local_48 == 0) {
LAB_1411afd59:
    pcVar8 = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar7 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar7 = local_58;
    }
    if (plVar7 == (longlong *)0x0) goto LAB_1411afd59;
    plVar7 = (longlong *)(**(code **)*plVar7)(plVar7,puVar6 + 4);
    (**(code **)(*plVar7 + 8))(plVar7);
    pcVar8 = local_88;
  }
  puVar6[2] = pcVar8;
LAB_1411afd64:
  local_d8[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
                Call;
  FUN_14204c280(local_d8);
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
  local_308 = 0;
  local_300 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_308,0);
  local_448 = (longlong **)CONCAT62(local_448._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_308,0xb,"gamesFound");
  local_448 = &local_318;
  local_318 = (longlong *)0x0;
  local_310 = 0;
  local_208 = 0;
  uVar5 = FUN_140ac4770(param_1,&local_308,0,6);
  *(undefined8 *)(param_1 + 0x6a8) = uVar5;
  plVar7 = local_318;
  for (iVar17 = (int)local_310; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_318 != (longlong *)0x0) {
    FMemory::Free(local_318);
  }
  if (local_308 != 0) {
    FMemory::Free();
  }
  FUN_1411b75c0(param_1,0);
  local_2f8 = 0;
  local_2f0 = 0x26;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f8,0);
  local_448 = (longlong **)CONCAT62(local_448._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_2f8,0x26,"searchResultPanel.listHeader.hostName");
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_188,L"HOST NAME",L"ServerBrowserMenu",L"HostNameText");
  FUN_142ed5290(param_1,&local_2f8,uVar5);
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_180 + 1;
    lVar12 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar15 = (int *)((longlong)local_180 + 0xc);
      iVar17 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*local_180 + 8))(local_180,1);
      }
    }
  }
  if (local_2f8 != 0) {
    FMemory::Free();
  }
  local_2e8 = 0;
  local_2e0 = 0x29;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,0);
  local_448 = (longlong **)CONCAT62(local_448._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_2e8,0x29,"searchResultPanel.listHeader.playthrough");
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_170,L"PLAYTHROUGH",L"ServerBrowserMenu",L"PlaythroughText");
  FUN_142ed5290(param_1,&local_2e8,uVar5);
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_168 + 1;
    lVar12 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar15 = (int *)((longlong)local_168 + 0xc);
      iVar17 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*local_168 + 8))(local_168,1);
      }
    }
  }
  if (local_2e8 != 0) {
    FMemory::Free();
  }
  local_2d8 = 0;
  local_2d0 = 0x25;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
  local_448 = (longlong **)CONCAT62(local_448._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_2d8,0x25,"searchResultPanel.listHeader.mission");
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_158,L"MISSION",L"ServerBrowserMenu",L"MissionText");
  FUN_142ed5290(param_1,&local_2d8,uVar5);
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_150 + 1;
    lVar12 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar15 = (int *)((longlong)local_150 + 0xc);
      iVar17 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  if (local_2d8 != 0) {
    FMemory::Free();
  }
  local_2c8 = 0;
  local_2c0 = 0x25;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
  local_448 = (longlong **)CONCAT62(local_448._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_2c8,0x25,"searchResultPanel.listHeader.players");
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_140,L"PLAYERS",L"ServerBrowserMenu",L"PlayersText");
  FUN_142ed5290(param_1,&local_2c8,uVar5);
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_138 + 1;
    lVar12 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar15 = (int *)((longlong)local_138 + 0xc);
      iVar17 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*local_138 + 8))(local_138,1);
      }
    }
  }
  if (local_2c8 != 0) {
    FMemory::Free();
  }
  local_2b8 = 0;
  local_2b0 = 0x22;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
  local_448 = (longlong **)CONCAT62(local_448._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_2b8,0x22,"searchResultPanel.listHeader.ping");
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_128,L"PING",L"ServerBrowserMenu",L"PingText");
  FUN_142ed5290(param_1,&local_2b8,uVar5);
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_120 + 1;
    lVar12 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar15 = (int *)((longlong)local_120 + 0xc);
      iVar17 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  if (local_2b8 != 0) {
    FMemory::Free();
  }
  local_298 = 0;
  local_290 = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
  local_448 = (longlong **)CONCAT62(local_448._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_298,0x1f,"searchResultPanel.contentPanel");
  local_448 = &local_2a8;
  local_2a8 = (longlong *)0x0;
  local_2a0 = 0;
  local_1d0 = 0;
  uVar5 = FUN_140ecb410(param_1,&local_298,0,6);
  *(undefined8 *)(param_1 + 0x6c0) = uVar5;
  plVar7 = local_2a8;
  for (iVar17 = (int)local_2a0; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_2a8 != (longlong *)0x0) {
    FMemory::Free(local_2a8);
  }
  if (local_298 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    local_270 = 0;
    local_268 = 0;
    local_260 = 0;
    local_258 = 0;
    FWeakObjectPtr::operator=(&local_270,0);
    FWeakObjectPtr::operator=(&local_268,0);
    FWeakObjectPtr::operator=(&local_260,0);
    FWeakObjectPtr::operator=(&local_258,0);
    lVar12 = *(longlong *)(param_1 + 0x6c0);
    local_220 = pwVar18;
    local_228 = lVar12;
    if (lVar12 != 0) {
      uVar5 = UBlendableInterface::GetPrivateStaticClass();
      local_220 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar12,uVar5);
    }
    FUN_142ecfd10(param_1,&local_228,&local_270);
    lVar12 = *(longlong *)(param_1 + 0x6c0);
    local_210 = pwVar18;
    local_218 = lVar12;
    if (lVar12 != 0) {
      uVar5 = UBlendableInterface::GetPrivateStaticClass();
      local_210 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar12,uVar5);
    }
    FUN_142ed36d0(param_1,&local_218,0);
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSessionCellSelected",L"::");
    pwVar11 = pwVar18;
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar11 = pwVar3;
    }
    FName::FName(&local_250,pwVar11 + 2,1);
    lVar12 = *(longlong *)(param_1 + 0x6c0);
    plVar7 = (longlong *)(lVar12 + 0x180);
    FWeakObjectPtr::operator=(&local_428,0);
    local_420 = 0;
    FWeakObjectPtr::operator=(&local_428,param_1);
    local_420 = local_250;
    local_418 = 0;
    if ((local_250 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_428), lVar10 != 0)) {
      UObject::FindFunction(lVar10,local_420);
    }
    piVar15 = (int *)*plVar7;
    iVar17 = *(int *)(lVar12 + 0x188);
    for (piVar16 = piVar15; piVar16 != piVar15 + (longlong)iVar17 * 4; piVar16 = piVar16 + 4) {
      if ((((*piVar16 == local_428) && (piVar16[1] == local_424)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar16), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_428), cVar4 == '\0')))) &&
         (*(longlong *)(piVar16 + 2) == local_420)) {
        if ((int)((longlong)piVar16 - (longlong)piVar15 >> 4) != -1) goto LAB_1411b052a;
        break;
      }
    }
    iVar17 = *(int *)(lVar12 + 0x188);
    *(int *)(lVar12 + 0x188) = iVar17 + 1;
    if (*(int *)(lVar12 + 0x18c) < iVar17 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar17);
    }
    piVar15 = (int *)((longlong)iVar17 * 0x10 + *plVar7);
    *piVar15 = local_428;
    piVar15[1] = local_424;
    *(longlong *)(piVar15 + 2) = local_420;
LAB_1411b052a:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
  }
  local_3e8 = 0;
  local_3e0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
  local_448 = (longlong **)CONCAT62(local_448._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_3e8,0x12,"searchResultPanel");
  local_448 = &local_3f8;
  local_3f8 = (longlong *)0x0;
  local_3f0 = 0;
  local_200 = 0;
  uVar5 = FUN_140e96f30(param_1,&local_3e8,0,6);
  *(undefined8 *)(param_1 + 0x6b0) = uVar5;
  plVar7 = local_3f8;
  for (iVar17 = (int)local_3f0; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_3f8 != (longlong *)0x0) {
    FMemory::Free(local_3f8);
  }
  if (local_3e8 != 0) {
    FMemory::Free();
  }
  pwVar11 = pwVar18;
  pwVar9 = pwVar18;
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    local_3c8 = 0;
    local_3c0 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c8,0);
    local_448 = (longlong **)CONCAT62(local_448._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_3c8,8,"message");
    local_448 = &local_3d8;
    local_3d8 = (longlong *)0x0;
    local_3d0 = 0;
    local_1f8 = 0;
    pwVar11 = (wchar_t *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x6b0),&local_3c8,0,6);
    pwVar9 = (wchar_t *)0x3;
  }
  *(wchar_t **)(param_1 + 0x6b8) = pwVar11;
  if (((ulonglong)pwVar9 & 2) != 0) {
    pwVar9 = (wchar_t *)(ulonglong)((uint)pwVar9 & 0xfffffffd);
    plVar7 = local_3d8;
    for (iVar17 = (int)local_3d0; iVar17 != 0; iVar17 = iVar17 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_3d8 != (longlong *)0x0) {
      FMemory::Free(local_3d8);
    }
  }
  if ((((ulonglong)pwVar9 & 1) != 0) && (local_3c8 != 0)) {
    FMemory::Free();
  }
  local_3a8 = 0;
  local_3a0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8,0);
  local_448 = (longlong **)CONCAT62(local_448._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_3a8,0xd,"sortCriteria");
  local_448 = &local_3b8;
  local_3b8 = (longlong *)0x0;
  local_3b0 = 0;
  local_1f0 = 0;
  uVar5 = FUN_140ac4770(param_1,&local_3a8,0,6);
  *(undefined8 *)(param_1 + 0x6c8) = uVar5;
  plVar7 = local_3b8;
  for (iVar17 = (int)local_3b0; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_3b8 != (longlong *)0x0) {
    FMemory::Free(local_3b8);
  }
  if (local_3a8 != 0) {
    FMemory::Free();
  }
  local_388 = 0;
  local_380 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,0);
  FGenericPlatformString::Memcpy(local_388,L"sortingHint.hint",0x22);
  local_448 = &local_398;
  local_398 = (longlong *)0x0;
  local_390 = 0;
  local_1e8 = 0;
  uVar5 = FUN_140f139f0(param_1,&local_388,0,6);
  *(undefined8 *)(param_1 + 0x6e0) = uVar5;
  plVar7 = local_398;
  for (iVar17 = (int)local_390; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_398 != (longlong *)0x0) {
    FMemory::Free(local_398);
  }
  if (local_388 != 0) {
    FMemory::Free();
  }
  lVar12 = *(longlong *)(param_1 + 0x6e0);
  if (lVar12 != 0) {
    local_230 = 0;
    local_238 = lVar12;
    uVar5 = UBlendableInterface::GetPrivateStaticClass();
    local_230 = UObjectBaseUtility::GetInterfaceAddress(lVar12,uVar5);
    FUN_142ecff00(param_1,&local_238,DAT_146875d30);
  }
  FUN_1411bfb60(param_1);
  local_368 = 0;
  local_360 = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
  local_448 = (longlong **)CONCAT62(local_448._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_368,0x1f,"customHintBar.hintSortCriteria");
  local_448 = &local_378;
  local_378 = (longlong *)0x0;
  local_370 = 0;
  local_1e0 = 0;
  uVar5 = FUN_140ac4770(param_1,&local_368,0,6);
  *(undefined8 *)(param_1 + 0x6d0) = uVar5;
  plVar7 = local_378;
  for (iVar17 = (int)local_370; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_378 != (longlong *)0x0) {
    FMemory::Free(local_378);
  }
  if (local_368 != 0) {
    FMemory::Free();
  }
  local_348 = 0;
  local_340 = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,0);
  local_448 = (longlong **)CONCAT62(local_448._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_348,0x1f,"customHintBar.hintSortingOrder");
  local_448 = &local_358;
  local_358 = (longlong *)0x0;
  local_350 = 0;
  local_1d8 = 0;
  uVar5 = FUN_140ac4770(param_1,&local_348,0,6);
  *(undefined8 *)(param_1 + 0x6d8) = uVar5;
  plVar7 = local_358;
  for (iVar17 = (int)local_350; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_358 != (longlong *)0x0) {
    FMemory::Free(local_358);
  }
  if (local_348 != 0) {
    FMemory::Free();
  }
  FUN_1411bf7a0(param_1);
  FUN_1411bfc30(param_1);
  local_288 = 0;
  local_248 = 0;
  plVar7 = (longlong *)FUN_1404b0000(&local_248);
  bVar19 = plVar7 != (longlong *)0x0;
  if (bVar19) {
    puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x80))(plVar7,local_1c8);
    pwVar11 = (wchar_t *)*puVar6;
  }
  else {
    puVar6 = &local_280;
    local_280 = 0;
    plStack_278 = (longlong *)0x0;
    pwVar11 = pwVar18;
  }
  plVar7 = (longlong *)puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if ((bVar19) && (local_1c0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_1c0 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar15 = (int *)((longlong)local_1c0 + 0xc);
      iVar17 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  plVar1 = plStack_278;
  if ((!bVar19) && (plStack_278 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_278 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_278)(plStack_278);
      LOCK();
      piVar15 = (int *)((longlong)plVar1 + 0xc);
      iVar17 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*plStack_278 + 8))(plStack_278,1);
      }
    }
  }
  if ((pwVar11 == (wchar_t *)0x0) ||
     (cVar4 = (**(code **)(*(longlong *)pwVar11 + 0x10))(pwVar11), cVar4 != '\0')) {
    FUN_1411b5480(param_1);
  }
  else {
    FWeakObjectPtr::operator=(local_410,0);
    local_408 = 0;
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnErrorDialogClicked",L"::");
    while (pwVar9 = pwVar11, pwVar9 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
      pwVar18 = pwVar9;
    }
    FName::FName(&local_240,pwVar18 + 2,1);
    FWeakObjectPtr::operator=(local_410,param_1);
    local_408 = local_240;
    local_418 = 0;
    if ((local_240 != 0) && (lVar12 = FWeakObjectPtr::Get(local_410), lVar12 != 0)) {
      UObject::FindFunction(lVar12,local_408);
    }
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
    uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_f8,L"No Link connection.",L"ServerBrowserMenu",L"NotImplemented");
    uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_110,L"Link Status",L"ServerBrowserMenu",L"NoLink");
    local_438 = 0;
    local_440 = 0;
    local_448 = (longlong **)CONCAT71(local_448._1_7_,1);
    FUN_1410f3960(uVar5,uVar14,uVar13,local_410);
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_108 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar15 = (int *)((longlong)local_108 + 0xc);
        iVar17 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar15 = (int *)((longlong)local_f0 + 0xc);
        iVar17 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar15 = (int *)((longlong)plVar7 + 0xc);
      iVar17 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 1411b0ce0 FUN_1411b0ce0 body=76 status=ok
// SIG undefined FUN_1411b0ce0(void)

void FUN_1411b0ce0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (param_2 != 0)) {
    uVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x1f8) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411b0d30 FUN_1411b0d30 body=320 status=ok
// SIG undefined FUN_1411b0d30(void)

void FUN_1411b0d30(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x778);
  if (lVar5 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(lVar5 + 0x1b0) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x750);
  if (uVar1 - 7 < 9) {
    uVar4 = 7;
    if (param_2 != *(longlong *)(lVar5 + 0x1c0)) {
      if (param_2 == *(longlong *)(lVar5 + 0x1c8)) {
        uVar4 = 8;
      }
      else if (param_2 == *(longlong *)(lVar5 + 0x1d8)) {
        uVar4 = 9;
      }
      else if (param_2 == *(longlong *)(lVar5 + 0x1e0)) {
        uVar4 = FUN_14119d600(param_1);
      }
    }
  }
  else {
    if ((uVar1 < 0x12) && ((0x20028U >> (uVar1 & 0x1f) & 1) != 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) goto LAB_1411b0e0f;
    uVar4 = 3;
    if (param_2 != *(longlong *)(lVar5 + 0x1c0)) {
      if (param_2 == *(longlong *)(lVar5 + 0x1c8)) {
        uVar4 = 5;
      }
      else {
        uVar4 = 3;
        if (param_2 == *(longlong *)(lVar5 + 0x1d0)) {
          uVar4 = 0x11;
        }
      }
    }
  }
  FUN_1411986c0(param_1,uVar4);
LAB_1411b0e0f:
  lVar5 = URemnantGameInstance::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
      != lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x1b0);
    (**(code **)(*plVar2 + 0x2c0))(plVar2,param_2,0,0);
  }
  return;
}



// FUNCTION 1411b0e70 FUN_1411b0e70 body=290 status=ok
// SIG undefined FUN_1411b0e70(void)

void FUN_1411b0e70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = AGImpulseWindProjectile::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (param_2 != 0)) {
      lVar3 = FUN_14139fcd0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar3 = plVar1[0xd3];
        if ((lVar3 == 0) || (*(int **)(lVar3 + 0x1b0) == (int *)0x0)) {
          iVar5 = 0;
        }
        else {
          iVar5 = **(int **)(lVar3 + 0x1b0);
        }
        if (iVar5 != *(int *)(param_2 + 0x2d0)) {
          local_18 = 0;
          local_10 = 0;
          lVar3 = *plVar1;
          puVar4 = (undefined8 *)FName::FName(local_res8,L"Navigate",1);
          (**(code **)(lVar3 + 0x4e8))(plVar1,*puVar4,&local_18);
          lVar3 = plVar1[0xd3];
        }
        if (lVar3 != 0) {
          FUN_1411b7de0(lVar3,*(undefined4 *)(param_2 + 0x2d0));
        }
      }
    }
  }
  return;
}



// FUNCTION 1411b0fa0 FUN_1411b0fa0 body=72 status=ok
// SIG undefined FUN_1411b0fa0(void)

void FUN_1411b0fa0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140cd0250(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411b0ff0 FUN_1411b0ff0 body=242 status=ok
// SIG undefined FUN_1411b0ff0(void)

void FUN_1411b0ff0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_142f2ce20();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar4 = *(int *)(param_2 + 0x2e0);
      goto LAB_1411b1048;
    }
  }
  iVar4 = -1;
LAB_1411b1048:
  if ((iVar4 < 0) || (*(int *)(param_1 + 0x310) <= iVar4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (lVar2 = FUN_142ef6590(param_1,*(undefined8 *)(param_1 + 0x328)), lVar2 != 0)) {
    lVar3 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
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
      FUN_14119bf60(*(longlong *)(param_1 + 0x308) + (longlong)iVar4 * 0x18,lVar2 + 0x2f8);
      FUN_1411bac80(lVar2);
    }
  }
  return;
}



// FUNCTION 1411b10f0 FUN_1411b10f0 body=242 status=ok
// SIG undefined FUN_1411b10f0(void)

void FUN_1411b10f0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_142f2ce20();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar4 = *(int *)(param_2 + 0x2e0);
      goto LAB_1411b1148;
    }
  }
  iVar4 = -1;
LAB_1411b1148:
  iVar4 = iVar4 - *(int *)(param_1 + 0x310);
  if ((iVar4 < 0) || (*(int *)(param_1 + 800) <= iVar4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (lVar2 = FUN_142ef6590(param_1,*(undefined8 *)(param_1 + 0x328)), lVar2 != 0)) {
    lVar3 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
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
      FUN_14119c2d0(*(longlong *)(param_1 + 0x318) + (longlong)iVar4 * 8,lVar2 + 0x2f8);
      FUN_1411bac80(lVar2);
    }
  }
  return;
}



// FUNCTION 1411b11f0 FUN_1411b11f0 body=478 status=ok
// SIG undefined FUN_1411b11f0(void)

void FUN_1411b11f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 local_res10 [8];
  longlong local_28 [2];
  
  if (param_2 != 0) {
    lVar4 = FUN_142f2ce20();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar3 = *(int *)(param_2 + 0x2e0);
      goto LAB_1411b1246;
    }
  }
  iVar3 = -1;
LAB_1411b1246:
  if ((iVar3 < 0) || ((int)param_1[0x60] <= iVar3)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((bVar2) && (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0)) &&
     (lVar4 = *(longlong *)(lVar4 + 400), lVar4 != 0)) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar6 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
      lVar5 = plVar6[0x1f];
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x368))(plVar6);
        lVar5 = plVar6[0x1f];
      }
      lVar1 = param_1[0x5f];
      puVar7 = (undefined8 *)FName::ToString(lVar5 + 0x30,local_28);
      lVar5 = (longlong)iVar3 * 0x28;
      puVar10 = &DAT_143f3eda8;
      if (*(int *)(puVar7 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar7;
      }
      if (*(int *)(lVar5 + lVar1 + 0x20) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)(lVar5 + lVar1 + 0x18);
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (iVar3 == 0) {
        FUN_140befde0(lVar4);
      }
      else {
        local_28[0] = 0;
        local_28[1] = 0;
        if (*(int *)(lVar5 + 0x20 + param_1[0x5f]) != 0) {
          puVar10 = *(undefined2 **)(lVar5 + 0x18 + param_1[0x5f]);
        }
        FName::FName(local_res10,puVar10,1);
        FUN_140bc8fd0(lVar4,local_res10,local_28,1);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 1411b13d0 FUN_1411b13d0 body=72 status=ok
// SIG undefined FUN_1411b13d0(void)

void FUN_1411b13d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140cd0420(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411b1420 FUN_1411b1420 body=48 status=ok
// SIG undefined FUN_1411b1420(void)

void FUN_1411b1420(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x251) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
  }
  return;
}



// FUNCTION 1411b1450 FUN_1411b1450 body=48 status=ok
// SIG undefined FUN_1411b1450(void)

void FUN_1411b1450(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_142eb62f0(param_2);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar1 + 0x250) = uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
  }
  return;
}



// FUNCTION 1411b1480 FUN_1411b1480 body=67 status=ok
// SIG undefined FUN_1411b1480(void)

void FUN_1411b1480(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
     (uVar2 = FUN_142eb62f0(param_2), uVar2 < 3)) {
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(char *)(lVar1 + 0x252) = (char)uVar2;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_140d14100();
    }
  }
  return;
}



// FUNCTION 1411b14d0 FUN_1411b14d0 body=115 status=ok
// SIG undefined FUN_1411b14d0(void)

void FUN_1411b14d0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) &&
     ((*(char *)(param_1 + 0x2b4) == '\0' ||
      (((DAT_146876190 == DAT_146af4ac8 && (*(int *)(param_1 + 0x2b0) == 1)) ||
       (*(int *)(param_1 + 0x2b0) == 0)))))) {
    iVar1 = FUN_142eb62f0(param_2);
    FUN_14248f680(*(undefined8 *)(param_1 + 0xc0),iVar1 != 0);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411b1550 FUN_1411b1550 body=450 status=ok
// SIG undefined FUN_1411b1550(void)

void FUN_1411b1550(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [48];
  
  if ((*(longlong **)(param_1 + 0x6c0) != (longlong *)0x0) &&
     (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x2b0))(), lVar6 != 0)) {
    lVar8 = *(longlong *)(param_1 + 0x698);
    iVar3 = *(int *)(lVar6 + 0x2d8);
    if (lVar8 != 0) {
      if ((iVar3 < 0) || (*(int *)(lVar8 + 0x10) <= iVar3)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar8 = (longlong)iVar3 * 0xc0 + *(longlong *)(lVar8 + 8);
        lVar6 = FWeakObjectPtr::Get(param_1 + 0x58c);
        lVar6 = *(longlong *)(lVar6 + 0x508);
        if (lVar6 != 0) {
          lVar7 = ULocalPlayer::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (lVar7 = FUN_140f9aee0(param_1), lVar7 != 0)) {
            local_48 = *(undefined8 *)(lVar8 + 8);
            local_40 = *(longlong **)(lVar8 + 0x10);
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            lVar6 = FUN_142547b50(lVar6,local_38);
            local_58 = *(undefined8 *)(lVar6 + 8);
            local_50 = *(longlong **)(lVar6 + 0x10);
            if (local_50 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_50 + 1) = (int)local_50[1] + 1;
              UNLOCK();
            }
            FUN_140bf76e0(lVar7,&local_58,&local_48);
            plVar5 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_50 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_50)(local_50);
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
            FUN_1404bf980(local_38);
            plVar5 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_40 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_40)(local_40);
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
      }
    }
  }
  return;
}



// FUNCTION 1411b1740 FUN_1411b1740 body=72 status=ok
// SIG undefined FUN_1411b1740(void)

void FUN_1411b1740(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar1 = FUN_142eb62f0(param_2);
    FUN_140cd0a20(*(undefined8 *)(param_1 + 0xc0),uVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411b1790 FUN_1411b1790 body=3858 status=ok
// SIG undefined FUN_1411b1790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411b1790(longlong *param_1,longlong param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  uint7 uVar16;
  ulonglong uVar15;
  undefined4 uVar17;
  char *pcVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_4c8 [32];
  undefined2 local_4a8;
  int local_498;
  longlong local_490;
  undefined8 local_488;
  undefined8 local_480;
  ulonglong local_478;
  longlong local_470;
  undefined8 local_468;
  undefined4 *local_458;
  undefined4 *puStack_450;
  longlong local_448;
  longlong local_440;
  longlong local_438 [12];
  longlong local_3d8 [3];
  undefined8 local_3c0;
  longlong local_3b8;
  undefined4 *local_3a8;
  undefined4 *puStack_3a0;
  undefined8 local_398;
  longlong local_390;
  undefined4 *local_388;
  ulonglong *puStack_380;
  undefined8 local_378;
  longlong local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined1 local_358 [16];
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_338 [16];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
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
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [24];
  undefined1 local_1e8 [24];
  undefined1 local_1d0 [24];
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [32];
  undefined4 local_168 [4];
  undefined1 local_158 [24];
  undefined1 local_140;
  undefined4 local_138;
  undefined1 local_128 [24];
  undefined1 local_110;
  undefined4 local_108 [4];
  undefined1 local_f8 [24];
  char local_e0 [8];
  undefined4 local_d8;
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  char local_80 [8];
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  if ((param_2 == 0) || (param_1[6] == 0)) goto LAB_1411b266f;
  iVar6 = FUN_142eb62f0(param_2);
  iVar7 = 0;
  if ((iVar6 != 0) && (iVar7 = 2, iVar6 == 1)) {
    iVar7 = 1;
  }
  plVar14 = param_1 + 0x56;
  if (local_3d8 + 2 != plVar14) {
    *(int *)plVar14 = iVar7;
    *(undefined1 *)((longlong)param_1 + 0x2b4) = 1;
  }
  local_498 = iVar7;
  if (param_1[0x39] != 0) {
    uVar16 = (uint7)((ulonglong)param_2 >> 8);
    if (*(char *)((longlong)param_1 + 0x2b4) == '\0') {
      uVar15 = (ulonglong)uVar16 << 8;
    }
    else {
      iVar6 = (int)*plVar14;
      uVar15 = CONCAT71(uVar16,iVar6 != 0);
      if ((DAT_146876190 == DAT_146af4ac8) && (uVar15 = (ulonglong)(iVar6 != 0), iVar6 == 1)) {
        uVar15 = 0;
      }
    }
    plVar3 = (longlong *)(param_1[0x39] + 0x170);
    (**(code **)(*plVar3 + 0x38))(plVar3,uVar15 ^ 1);
    if ((*(char *)((longlong)param_1 + 0x2b4) == '\0') ||
       (((DAT_146876190 == DAT_146af4ac8 && ((int)*plVar14 == 1)) || ((int)*plVar14 == 0)))) {
      uVar5 = FUN_140472310(param_1[0x18]);
    }
    else {
      uVar5 = 1;
    }
    FUN_142ed50a0(param_1[0x39],uVar5);
  }
  if (param_1[0x35] != 0) {
    if (*(char *)((longlong)param_1 + 0x2b4) == '\0') {
      uVar5 = 1;
    }
    else {
      if (((int)*plVar14 == 0) && (0 < (int)param_1[0x32])) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      if (DAT_146876190 == DAT_146af4ac8) {
        uVar5 = 0;
      }
    }
    plVar14 = (longlong *)(param_1[0x35] + 0x170);
    (**(code **)(*plVar14 + 0x38))(plVar14,uVar5);
  }
  local_368 = (undefined4 *)CONCAT44(local_368._4_4_,(undefined4)local_368);
  uStack_360 = (undefined4 *)CONCAT44(uStack_360._4_4_,(undefined4)uStack_360);
  local_348 = (undefined4 *)CONCAT44(local_348._4_4_,(undefined4)local_348);
  uStack_340 = (undefined4 *)CONCAT44(uStack_340._4_4_,(undefined4)uStack_340);
  local_328 = (undefined4 *)CONCAT44(local_328._4_4_,(undefined4)local_328);
  uStack_320 = (ulonglong *)CONCAT44(uStack_320._4_4_,(undefined4)uStack_320);
  if ((param_1[0x33] != 0) &&
     (local_368 = (undefined4 *)CONCAT44(local_368._4_4_,(undefined4)local_368),
     uStack_360 = (undefined4 *)CONCAT44(uStack_360._4_4_,(undefined4)uStack_360),
     local_348 = (undefined4 *)CONCAT44(local_348._4_4_,(undefined4)local_348),
     uStack_340 = (undefined4 *)CONCAT44(uStack_340._4_4_,(undefined4)uStack_340),
     local_328 = (undefined4 *)CONCAT44(local_328._4_4_,(undefined4)local_328),
     uStack_320 = (ulonglong *)CONCAT44(uStack_320._4_4_,(undefined4)uStack_320),
     -1 < (int)param_1[0x2c])) {
    if (iVar7 == 1) {
      local_470 = 0;
      local_468 = 0;
      local_438[0] = 0;
      local_438[1] = 8;
      uVar15 = *(ulonglong *)
                (param_1[(longlong)(int)param_1[0x59] * 2 + 0x21] + (longlong)(int)param_1[0x2c] * 8
                );
      local_480 = uVar15;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_438,0);
      local_4a8 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_438[0],8,"{0}x{1}");
      local_438[6] = 0;
      local_438[7] = 0;
      FString::AppendInt(local_438 + 6,local_480._4_4_);
      local_438[4] = 0;
      local_438[5] = 0;
      FString::AppendInt(local_438 + 4,uVar15 & 0xffffffff);
      lVar9 = FText::FromString(local_200,local_438 + 6);
      local_480 = lVar9;
      lVar10 = FText::FromString(local_1e8,local_438 + 4);
      uVar11 = FText::FromString(local_2a8,local_438);
      puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_230,uVar11);
      local_168[0] = 4;
      FText::FText(local_158,lVar10);
      local_140 = 1;
      local_138 = 4;
      FText::FText(local_128,lVar9);
      local_458 = local_168;
      local_110 = 1;
      puStack_450 = local_108;
      local_3c0 = *puVar12;
      local_3b8 = puVar12[1];
      if (local_3b8 != 0) {
        LOCK();
        *(int *)(local_3b8 + 8) = *(int *)(local_3b8 + 8) + 1;
        UNLOCK();
      }
      local_368 = local_458;
      uStack_360 = puStack_450;
      uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_358,&local_368);
      uVar11 = FText::Format(local_2c0,&local_3c0,uVar11);
      FText::FText(local_308,uVar11);
      if (local_2b8 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_2b8 + 1;
        lVar9 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_2b8)(local_2b8);
          LOCK();
          piVar1 = (int *)((longlong)local_2b8 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_2b8 + 8))(local_2b8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_358);
      local_478 = 2;
      pcVar18 = local_e0;
      do {
        local_478 = local_478 - 1;
        pcVar2 = pcVar18 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar14 = *(longlong **)(pcVar18 + -0x40);
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar14 + 1;
            lVar9 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
        }
        pcVar18 = pcVar2;
      } while (local_478 != 0);
      plVar14 = (longlong *)puVar12[1];
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar14 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      plVar14 = *(longlong **)(lVar10 + 8);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar14 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      plVar14 = *(longlong **)(local_480 + 8);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar14 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      uVar15 = local_468;
      lVar9 = (longlong)(int)local_468;
      iVar7 = (int)local_468 + 1;
      local_468 = CONCAT44(local_468._4_4_,iVar7);
      if (local_468._4_4_ < iVar7) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_470,uVar15 & 0xffffffff);
      }
      FText::FText(local_470 + lVar9 * 0x18,local_308);
      if (local_300 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_300 + 1;
        lVar9 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_300)(local_300);
          LOCK();
          piVar1 = (int *)((longlong)local_300 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_300 + 8))(local_300,1);
          }
        }
      }
      if (local_2a0 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_2a0 + 1;
        lVar9 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_2a0)(local_2a0);
          LOCK();
          piVar1 = (int *)((longlong)local_2a0 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_2a0 + 8))(local_2a0,1);
          }
        }
      }
      if (local_438[4] != 0) {
        FMemory::Free();
      }
      if (local_438[6] != 0) {
        FMemory::Free();
      }
      if (local_438[0] != 0) {
        FMemory::Free();
      }
      FUN_142ed3be0(param_1[0x33],&local_470);
      FUN_142ed44c0(param_1[0x33],0);
      FUN_142ed2aa0(param_1[0x33],0);
      plVar14 = &local_470;
    }
    else {
      uVar15 = (ulonglong)*(int *)((longlong)param_1 + 700);
      local_490 = 0;
      local_488 = 0;
      if (0 < (int)param_1[(uVar15 + 0x11) * 2]) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (&local_490);
        uVar15 = (ulonglong)*(uint *)((longlong)param_1 + 700);
      }
      uVar17 = 0xffffffff;
      local_478 = local_478 & 0xffffffff00000000;
      if (0 < (int)param_1[((longlong)(int)uVar15 + 0x11) * 2]) {
        local_480 = 0;
        do {
          lVar9 = 2;
          puVar4 = (undefined4 *)(param_1[(longlong)(int)uVar15 * 2 + 0x21] + local_480 * 8);
          if (((char)param_1[0x2b] == '\0') || (local_480 != 0)) {
            local_438[2] = 0;
            local_438[3] = 8;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_438 + 2,0);
            local_4a8 = 0x3f;
            FGenericPlatformString::Convert<char,wchar_t>(local_438[2],8,"{0}x{1}");
            local_458 = (undefined4 *)0x0;
            puStack_450 = (undefined4 *)0x0;
            FString::AppendInt(&local_458,puVar4[1]);
            local_3d8[0] = 0;
            local_3d8[1] = 0;
            FString::AppendInt(local_3d8,*puVar4);
            lVar10 = FText::FromString(local_1a0,&local_458);
            local_448 = lVar10;
            lVar13 = FText::FromString(local_188,local_3d8);
            local_440 = lVar13;
            uVar11 = FText::FromString(local_248,local_438 + 2);
            puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_210,uVar11);
            local_a8[0] = 4;
            FText::FText(local_98,lVar13);
            local_80[0] = '\x01';
            local_78 = 4;
            FText::FText(local_68,lVar10);
            local_388 = local_a8;
            local_50 = 1;
            puStack_380 = local_48;
            local_378 = *puVar12;
            local_370 = puVar12[1];
            if (local_370 != 0) {
              LOCK();
              *(int *)(local_370 + 8) = *(int *)(local_370 + 8) + 1;
              UNLOCK();
            }
            local_328 = local_388;
            uStack_320 = puStack_380;
            uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                     TArray<FFormatArgumentValue,FDefaultAllocator>(local_318,&local_328);
            uVar11 = FText::Format(local_260,&local_378,uVar11);
            FText::FText(local_2d8,uVar11);
            plVar14 = local_258;
            if (local_258 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_258 + 1;
              lVar10 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_258)(local_258);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_318);
            pcVar18 = &stack0xffffffffffffffe0;
            do {
              lVar9 = lVar9 + -1;
              pcVar2 = pcVar18 + -0x30;
              if (*pcVar2 != '\0') {
                *pcVar2 = '\0';
                plVar14 = *(longlong **)(pcVar18 + -0x40);
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = plVar14 + 1;
                  lVar10 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plVar14)(plVar14);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar14 + 0xc);
                    iVar7 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar7 == 1) {
                      (**(code **)(*plVar14 + 8))(plVar14,1);
                    }
                  }
                }
              }
              pcVar18 = pcVar2;
            } while (lVar9 != 0);
            plVar14 = (longlong *)puVar12[1];
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar14 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            plVar14 = *(longlong **)(local_440 + 8);
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar14 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            plVar14 = *(longlong **)(local_448 + 8);
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar14 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            uVar15 = local_488;
            lVar9 = (longlong)(int)local_488;
            iVar7 = (int)local_488 + 1;
            local_488 = CONCAT44(local_488._4_4_,iVar7);
            if (local_488._4_4_ < iVar7) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_490,uVar15 & 0xffffffff);
            }
            FText::FText(local_490 + lVar9 * 0x18,local_2d8);
            plVar14 = local_2d0;
            if (local_2d0 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_2d0 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_2d0)(local_2d0);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            plVar14 = local_240;
            if (local_240 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_240 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_240)(local_240);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            if (local_3d8[0] != 0) {
              FMemory::Free();
            }
            lVar9 = local_438[2];
            if (local_458 != (undefined4 *)0x0) {
              FMemory::Free();
              lVar9 = local_438[2];
            }
          }
          else {
            local_438[10] = 0;
            local_438[0xb] = local_480;
            FString::AppendInt(local_438 + 10,puVar4[1]);
            local_438[8] = 0;
            local_438[9] = 0;
            FString::AppendInt(local_438 + 8,*puVar4);
            lVar10 = FText::FromString(local_1d0,local_438 + 10);
            local_440 = lVar10;
            lVar13 = FText::FromString(local_1b8,local_438 + 8);
            local_448 = lVar13;
            uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_278,L"{0}x{1} (Custom)",L"GraphicsOptions",L"CustomResolution"
                               );
            puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_220,uVar11);
            local_108[0] = 4;
            FText::FText(local_f8,lVar13);
            local_e0[0] = '\x01';
            local_d8 = 4;
            FText::FText(local_c8,lVar10);
            local_3a8 = local_108;
            local_b0 = 1;
            puStack_3a0 = local_a8;
            local_398 = *puVar12;
            local_390 = puVar12[1];
            if (local_390 != 0) {
              LOCK();
              *(int *)(local_390 + 8) = *(int *)(local_390 + 8) + 1;
              UNLOCK();
            }
            local_348 = local_3a8;
            uStack_340 = puStack_3a0;
            uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                     TArray<FFormatArgumentValue,FDefaultAllocator>(local_338,&local_348);
            uVar11 = FText::Format(local_290,&local_398,uVar11);
            FText::FText(local_2f0,uVar11);
            plVar14 = local_288;
            if (local_288 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_288 + 1;
              lVar10 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_288)(local_288);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_338);
            pcVar18 = local_80;
            do {
              lVar9 = lVar9 + -1;
              pcVar2 = pcVar18 + -0x30;
              if (*pcVar2 != '\0') {
                *pcVar2 = '\0';
                plVar14 = *(longlong **)(pcVar18 + -0x40);
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = plVar14 + 1;
                  lVar10 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plVar14)(plVar14);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar14 + 0xc);
                    iVar7 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar7 == 1) {
                      (**(code **)(*plVar14 + 8))(plVar14,1);
                    }
                  }
                }
              }
              pcVar18 = pcVar2;
            } while (lVar9 != 0);
            plVar14 = (longlong *)puVar12[1];
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar14 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            plVar14 = *(longlong **)(local_448 + 8);
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar14 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            plVar14 = *(longlong **)(local_440 + 8);
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar14 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            uVar15 = local_488;
            lVar9 = (longlong)(int)local_488;
            iVar7 = (int)local_488 + 1;
            local_488 = CONCAT44(local_488._4_4_,iVar7);
            if (local_488._4_4_ < iVar7) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_490,uVar15 & 0xffffffff);
            }
            FText::FText(local_490 + lVar9 * 0x18,local_2f0);
            plVar14 = local_2e8;
            if (local_2e8 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_2e8 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_2e8)(local_2e8);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            plVar14 = local_270;
            if (local_270 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_270 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_270)(local_270);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            lVar9 = local_438[10];
            if (local_438[8] != 0) {
              FMemory::Free();
              lVar9 = local_438[10];
            }
          }
          if (lVar9 != 0) {
            FMemory::Free();
          }
          iVar7 = (int)local_478 + 1;
          uVar15 = (ulonglong)*(int *)((longlong)param_1 + 700);
          local_480 = local_480 + 1;
          local_478 = CONCAT44(local_478._4_4_,iVar7);
        } while (iVar7 < (int)param_1[(uVar15 + 0x11) * 2]);
      }
      FUN_142ed3be0(param_1[0x33],&local_490);
      lVar9 = 0x280;
      if (*(char *)((longlong)param_1 + 0x284) == '\0') {
        lVar9 = 0x160;
      }
      FUN_142ed44c0(param_1[0x33],*(undefined4 *)(lVar9 + (longlong)param_1));
      if (*(int *)((longlong)param_1 + 700) == (int)param_1[0x59]) {
        uVar17 = (undefined4)param_1[0x2c];
      }
      FUN_142ed2aa0(param_1[0x33],uVar17);
      plVar14 = &local_490;
    }
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(plVar14);
    if (*(char *)((longlong)param_1 + 0x2b4) == '\0') {
      bVar20 = true;
    }
    else {
      bVar20 = (int)param_1[0x56] != 1;
    }
    (**(code **)(*(longlong *)(param_1[0x33] + 0x170) + 0x38))
              ((longlong *)(param_1[0x33] + 0x170),bVar20);
  }
  lVar9 = param_1[0x34];
  if (lVar9 != 0) {
    if (local_498 == 1) {
      uVar15 = (ulonglong)(int)param_1[0x59];
      if (0 < (int)param_1[0x59]) {
        plVar14 = param_1 + 0x22;
        uVar19 = uVar15;
        do {
          lVar9 = *plVar14;
          plVar14 = plVar14 + 2;
          uVar8 = (uint)uVar15 - 1;
          if ((int)lVar9 != 0) {
            uVar8 = (uint)uVar15;
          }
          uVar15 = (ulonglong)uVar8;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
LAB_1411b25d4:
        lVar9 = param_1[0x34];
      }
    }
    else {
      uVar15 = (ulonglong)*(int *)((longlong)param_1 + 700);
      if (0 < *(int *)((longlong)param_1 + 700)) {
        plVar14 = param_1 + 0x22;
        uVar19 = uVar15;
        do {
          lVar9 = *plVar14;
          plVar14 = plVar14 + 2;
          uVar8 = (uint)uVar15 - 1;
          if ((int)lVar9 != 0) {
            uVar8 = (uint)uVar15;
          }
          uVar15 = (ulonglong)uVar8;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
        goto LAB_1411b25d4;
      }
    }
    FUN_142ed44c0(lVar9,uVar15);
    uVar15 = (ulonglong)(int)param_1[0x59];
    if (0 < (int)param_1[0x59]) {
      plVar14 = param_1 + 0x22;
      uVar19 = uVar15;
      do {
        lVar9 = *plVar14;
        plVar14 = plVar14 + 2;
        uVar8 = (uint)uVar15 - 1;
        if ((int)lVar9 != 0) {
          uVar8 = (uint)uVar15;
        }
        uVar15 = (ulonglong)uVar8;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    FUN_142ed2aa0(param_1[0x34],uVar15);
    if (*(char *)((longlong)param_1 + 0x2b4) == '\0') {
      bVar20 = true;
    }
    else {
      bVar20 = (int)param_1[0x56] != 1;
    }
    (**(code **)(*(longlong *)(param_1[0x34] + 0x170) + 0x38))
              ((longlong *)(param_1[0x34] + 0x170),bVar20);
  }
  FUN_1411be4b0(param_1);
  (**(code **)(*param_1 + 0x2c8))(param_1,param_1[6]);
LAB_1411b266f:
  if (param_1[6] != 0) {
    LOCK();
    *(undefined4 *)(param_1[6] + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411b26b0 FUN_1411b26b0 body=602 status=ok
// SIG undefined FUN_1411b26b0(void)

void FUN_1411b26b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar7 = param_1 + 0xfe8;
  FUN_141111950(param_1,lVar7);
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar4 = (**(code **)(*param_2 + 0xfa8))(param_2);
  if (lVar4 == 0) {
    return;
  }
  uVar5 = FUN_141369570();
  cVar3 = FUN_142ef5b10(lVar4,uVar5);
  if (cVar3 != '\0') {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(lVar7);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0xff0)) && (*(longlong *)(param_1 + 0xff8) != 0)) {
      lVar6 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar7,lVar6);
      if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xff0) = DAT_1464b56f4;
      }
      lVar6 = FWeakObjectPtr::Get(lVar7);
      if (lVar6 != 0) goto LAB_1411b278b;
    }
LAB_1411b27c1:
    lVar6 = 0;
  }
  else {
LAB_1411b278b:
    lVar7 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1411b27c1;
  }
  lVar7 = FUN_142f02280(lVar4,lVar6);
  if (lVar7 == 0) {
    return;
  }
  lVar4 = FUN_141369570();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  uStack_20 = 0;
  local_28 = FUN_1411aed40;
  plVar1 = (longlong *)(lVar7 + 0x6b0);
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    *(undefined4 *)(plVar8 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar8 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar8 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_1c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar4;
    *plVar8 = (longlong)&PTR_FUN_143fcff08;
  }
  if (&local_28 != plVar1) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x6b8) != 0) &&
         (plVar8 = (longlong *)*plVar1, plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(lVar7 + 0x6b8) = 0;
      }
      goto LAB_1411b28b6;
    }
    (**(code **)(*plVar8 + 0x30))(plVar8,plVar1);
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar4 = FMemory::Realloc(plVar8,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
LAB_1411b28b6:
  FUN_14112d8a0(lVar7,param_2);
  return;
}



// FUNCTION 1411b2910 FUN_1411b2910 body=357 status=ok
// SIG undefined FUN_1411b2910(void)

undefined8 FUN_1411b2910(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if ((param_2 != 0) && (*(longlong **)(param_1 + 0x80) != (longlong *)0x0)) {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x2b0))();
    if (lVar5 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x198);
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x2b0))();
      if (lVar6 == lVar5) {
        cVar4 = FUN_142ebdf00(lVar5);
        if (cVar4 != '\0') {
          uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_38,L"Select",L"GraphicsOptions",L"SelectText");
          FUN_142eb01d0(param_2,&DAT_146b3e2a0,uVar7,0);
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_30 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar2 = (int *)((longlong)local_30 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
          uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_20,L"Cancel",L"GraphicsOptions",L"CancelText");
          FUN_142eb01d0(param_2,&DAT_146b3e2b8,uVar7,0);
          if (local_18 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_18 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_18)(local_18);
              LOCK();
              piVar2 = (int *)((longlong)local_18 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_18 + 8))(local_18,1);
              }
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1411b2a80 FUN_1411b2a80 body=27 status=ok
// SIG undefined FUN_1411b2a80(void)

void FUN_1411b2a80(undefined8 param_1)

{
  FUN_142ecdac0();
  FUN_1411bd7d0(param_1);
  return;
}



// FUNCTION 1411b2aa0 FUN_1411b2aa0 body=855 status=ok
// SIG undefined FUN_1411b2aa0(void)

void FUN_1411b2aa0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecdac0();
  plVar9 = *(longlong **)(param_1 + 0x748);
  if ((plVar9 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*plVar9 + 0x2c8))(plVar9,param_1), cVar5 != '\0')) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x778) == 0) ||
     (plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x178), plVar9 == (longlong *)0x0))
  goto LAB_1411b2cec;
  lVar6 = (**(code **)(*plVar9 + 0x2b0))();
  if (lVar6 == 0) {
LAB_1411b2be6:
    lVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x778) + 0x178) + 0x2b0))();
    if (lVar6 != 0) {
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_70,L"Select",L"OptionsMenu",L"SelecText");
      FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar8,0);
      plVar9 = local_68;
LAB_1411b2c3b:
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
  }
  else {
    lVar7 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((!bVar4) || (lVar6 = FUN_142eb6340(lVar6), lVar6 == 0)) goto LAB_1411b2be6;
    lVar7 = UMovieSceneSoundSetSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1411b2be6;
    if (((byte)(*(char *)(lVar6 + 0x31) - 4U) < 4) || (*(char *)(lVar6 + 0x31) == '\t')) {
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_88,L"Select",L"OptionsMenu",L"SelecText");
      FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar8,0);
      plVar9 = local_80;
      goto LAB_1411b2c3b;
    }
  }
  if ((*(longlong *)(param_1 + 0x748) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x748) + 0x28) != '\0')) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Apply",L"OptionsMenu",L"ApplyText");
    FUN_142eb01d0(param_1,&DAT_146875e28,uVar8,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_50 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
LAB_1411b2cec:
  if ((*(longlong **)(param_1 + 0x748) != (longlong *)0x0) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x2a8))(), cVar5 == '\0')) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Reset to Default",L"OptionsMenu",L"RestoreDefaultsText");
    FUN_142eb01d0(param_1,&DAT_146875e20,uVar8,0);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_38 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
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
  }
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Back",L"OptionsMenu",L"BackLabelText");
  FUN_142eb01d0(param_1,&DAT_146b3e2b8,uVar8,0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_20 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 1411b2e00 FUN_1411b2e00 body=1133 status=ok
// SIG undefined FUN_1411b2e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411b2e00(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  DWORD DVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_268 [32];
  undefined2 local_248;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 *local_1b8 [2];
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined4 local_178;
  undefined1 local_168 [16];
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  undefined1 local_118 [192];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  FUN_142ecdac0();
  FWeakObjectPtr::operator=(&local_238,param_1);
  local_188 = 0;
  local_178 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_1a8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_1444f8920;
    puVar6[1] = param_1;
    *(undefined4 *)(puVar6 + 2) = local_238;
    *(undefined4 *)((longlong)puVar6 + 0x14) = local_234;
  }
  local_230 = 0;
  local_1b8[0] = &LAB_141190eb0;
  local_228 = 0x31;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_230,0);
  local_248 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_230,0x31,"UGFxPauseMenu::PopulateHintBar::CanSplitJoinTask");
  FUN_1410b2c00(local_118,&local_230,local_1b8);
  uVar7 = FUN_1410ca7e0(local_118,local_168);
  FUN_142084370(param_1,uVar7);
  if (local_128 != 0) {
    plVar9 = local_158;
    if (local_138 != (longlong *)0x0) {
      plVar9 = local_138;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar8 = 0;
  if (*(longlong *)(param_1 + 0x988) != 0) {
    cVar4 = FUN_141111680();
    if (cVar4 != '\0') goto LAB_1411b3217;
    lVar8 = *(longlong *)(param_1 + 0x988);
  }
  if (((lVar8 == 0) || (cVar4 = FUN_1411116b0(), cVar4 == '\0')) ||
     (cVar4 = FUN_141107a60(*(undefined8 *)(param_1 + 0x988)), cVar4 != '\0')) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_220,L"Select",L"PauseMenu",L"SelectText");
    FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar7,0);
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_218 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  lVar8 = local_58;
  if (local_58 != 0) {
    while ((lVar8 = local_58, local_58 != 0 && (*(char *)(local_58 + 0x58) == '\0'))) {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar4 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)))) {
        lVar8 = FUN_14203ca70();
        if (lVar8 != 0) {
          FUN_1420714f0(lVar8);
        }
      }
      else {
        FUN_142036de0();
      }
      lVar8 = local_58;
      if (local_58 == 0) break;
      if (*(char *)(local_58 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))(*(longlong **)(local_58 + 0x50),5);
      }
    }
  }
  cVar4 = *(char *)(lVar8 + 0x58);
  while (cVar4 == '\0') {
    (**(code **)(**(longlong **)(lVar8 + 0x50) + 0x20))(*(longlong **)(lVar8 + 0x50),0x5d638865,0);
    cVar4 = *(char *)(lVar8 + 0x58);
  }
  if (*(char *)(lVar8 + 0x60) != '\0') {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_208,L"Add Splitscreen",L"MultiplayerMenu",L"SplitscreenText");
    FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar7,0);
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_200 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  if (*(int *)(param_1 + 0x89c) == 0) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1f0,L"Close",L"PauseMenu",L"CloseText");
    FUN_142eb01d0(param_1,&DAT_146b3e2b8,uVar7,0);
    plVar9 = local_1e8;
  }
  else {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1d8,L"Back",L"PauseMenu",L"BackText");
    FUN_142eb01d0(param_1,&DAT_146b3e2b8,uVar7,0);
    plVar9 = local_1d0;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
LAB_1411b3217:
  if (*(longlong *)(param_1 + 0x988) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x988) + 0x588) = 1;
    UNLOCK();
  }
  FUN_140ce1dc0(local_118);
  return;
}



// FUNCTION 1411b3270 FUN_1411b3270 body=253 status=ok
// SIG undefined FUN_1411b3270(void)

void FUN_1411b3270(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FUN_142ecdac0();
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"Back",L"ResolutionsMenu",L"BackText");
  FUN_142eb01d0(param_1,&DAT_146b3e2b8,uVar5,0);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,L"Select",L"ResolutionsMenu",L"SelectText");
  FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar5,0);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
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



// FUNCTION 1411b3370 FUN_1411b3370 body=989 status=ok
// SIG undefined FUN_1411b3370(void)

void FUN_1411b3370(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong local_a8;
  longlong *local_a0;
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
  
  lVar12 = 0;
  FUN_1410e5c90();
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar8 == 0) {
LAB_1411b33e6:
    lVar8 = lVar12;
  }
  else {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1411b33e6;
  }
  lVar9 = lVar12;
  if ((*(longlong **)(param_1 + 0x6c0) != (longlong *)0x0) &&
     (lVar10 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x2b0))(), lVar10 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x698);
    iVar4 = *(int *)(lVar10 + 0x2d8);
    if (lVar5 != 0) {
      if ((iVar4 < 0) || (*(int *)(lVar5 + 0x10) <= iVar4)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        lVar9 = (longlong)iVar4 * 0xc0 + *(longlong *)(lVar5 + 8);
      }
    }
  }
  uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_98,L"Refresh",L"ServerBrowserMenu",L"RefreshText");
  FUN_142eb01d0(param_1,&DAT_146875d88,uVar11,0);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x698) == 0) || (*(int *)(*(longlong *)(param_1 + 0x698) + 0x10) < 1)
     ) goto LAB_1411b35bc;
  if ((lVar8 == 0) || ((lVar9 == 0 || (lVar10 = *(longlong *)(lVar9 + 8), lVar10 == 0)))) {
LAB_1411b350a:
    bVar6 = false;
  }
  else {
    lVar12 = 1;
    local_a0 = *(longlong **)(lVar9 + 0x10);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    local_a8 = lVar10;
    cVar7 = FUN_140ba7eb0(lVar8,&local_a8);
    if (cVar7 == '\0') goto LAB_1411b350a;
    bVar6 = true;
  }
  plVar1 = local_a0;
  if ((lVar12 != 0) && (local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_a0 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_a0)(local_a0);
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
  if (bVar6) {
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_80,L"View Profile",L"ServerBrowserMenu",L"ViewProfileText");
    FUN_142eb01d0(param_1,&DAT_146875d90,uVar11,0);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
  }
LAB_1411b35bc:
  uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_68,L"Toggle Ascending/Descending",L"ServerBrowserMenu",L"ToggleAscDesc")
  ;
  FUN_142eb01d0(param_1,&DAT_146875d28,uVar11,0);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  uVar11 = FUN_1404b03b0();
  FUN_142eb01d0(param_1,&DAT_146875d30,uVar11,1);
  if ((*(longlong *)(param_1 + 0x698) != 0) && (0 < *(int *)(*(longlong *)(param_1 + 0x698) + 0x10))
     ) {
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_50,L"Join Game",L"ServerBrowserMenu",L"JoinGameText");
    FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar11,0);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_38,L"Back",L"ServerBrowserMenu",L"BackText");
  FUN_142eb01d0(param_1,&DAT_146b3e2b8,uVar11,0);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1411b3750 FUN_1411b3750 body=950 status=ok
// SIG undefined FUN_1411b3750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411b3750(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  undefined8 local_48;
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    if ((((*(longlong *)(param_1 + 0x698) != 0) &&
         (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 0x1b0), lVar3 != 0)) &&
        (iVar5 = *(int *)(lVar3 + 0x60), 0 < iVar5)) &&
       (iVar5 = iVar5 + -1, 1 < ((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) + 1)) {
      uVar6 = FUN_1404b03b0();
      FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146875d30,uVar6,1);
      uVar6 = FUN_1404b03b0();
      FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146875d28,uVar6,1);
    }
    uVar6 = FUN_1404b03b0();
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146875d20,uVar6,1);
    uVar6 = FUN_1404b03b0();
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146875d18,uVar6,1);
    if (*(int *)(param_1 + 0x6b0) == 0) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_a8,&DAT_1446d8700,L"GFxStoreMenu",L"StoreText");
      puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_60,uVar6);
      local_50[0] = 0;
      local_28 = '\0';
      local_48 = 0;
      local_f8 = local_50;
      local_108 = *puVar7;
      uStack_f0 = &local_20;
      lStack_100 = puVar7[1];
      if (lStack_100 != 0) {
        LOCK();
        *(int *)(lStack_100 + 8) = *(int *)(lStack_100 + 8) + 1;
        UNLOCK();
      }
      uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_f8);
      uVar6 = FText::Format(local_c0,&local_108,uVar6);
      FText::FText(local_d8,uVar6);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_b8 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8);
      if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_38 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      plVar4 = (longlong *)puVar7[1];
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
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,local_d8);
      local_88 = local_a0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_d0 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          local_88 = local_a0;
          if (iVar5 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
            local_88 = local_a0;
          }
        }
      }
    }
    else {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_90,L"Select",L"GFxStoreMenu",L"SelectText");
      FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar6,1);
    }
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_78,L"Close",L"GFxStoreMenu",L"CloseMenu");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar6);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411b3b10 FUN_1411b3b10 body=453 status=ok
// SIG undefined FUN_1411b3b10(void)

void FUN_1411b3b10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(longlong *)(param_1 + 0x698) != 0) {
    FUN_1411b7de0(*(longlong *)(param_1 + 0x698),0);
  }
  plVar1 = (longlong *)(param_1 + 0x6b8);
  iVar2 = *(int *)(param_1 + 0x6c0);
  if (iVar2 != 0) {
    lVar3 = *plVar1 + 8;
    do {
      FUN_141189520(lVar3 + 0x50);
      FUN_1410b4290(lVar3);
      lVar3 = lVar3 + 0x68;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x6c0) = 0;
  if (*(int *)(param_1 + 0x6c4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar1,0);
  }
  FUN_14119bda0(param_1 + 0x6a8,0);
  local_78[0] = 0;
  local_70[0] = 0;
  FText::FText(local_68);
  FText::FText(local_50);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  iVar2 = *(int *)(param_1 + 0x6c0);
  local_78[0] = 1;
  *(int *)(param_1 + 0x6c0) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c4) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar2);
  }
  FUN_1411893a0((longlong)iVar2 * 0x68 + *plVar1,local_78);
  iVar2 = *(int *)(param_1 + 0x6c0);
  local_78[0] = 2;
  *(int *)(param_1 + 0x6c0) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c4) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar2);
  }
  FUN_1411893a0((longlong)iVar2 * 0x68 + *plVar1,local_78);
  iVar2 = *(int *)(param_1 + 0x6c0);
  local_78[0] = 3;
  *(int *)(param_1 + 0x6c0) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c4) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar2);
  }
  FUN_1411893a0((longlong)iVar2 * 0x68 + *plVar1,local_78);
  iVar2 = *(int *)(param_1 + 0x6c0);
  local_78[0] = 4;
  *(int *)(param_1 + 0x6c0) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c4) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar2);
  }
  FUN_1411893a0((longlong)iVar2 * 0x68 + *plVar1,local_78);
  if (*(longlong *)(param_1 + 0x698) != 0) {
    FUN_1411b7de0(*(longlong *)(param_1 + 0x698),1);
  }
  FUN_141189520(&local_20);
  FUN_1410b4290(local_70);
  return;
}



// FUNCTION 1411b3ce0 FUN_1411b3ce0 body=2306 status=ok
// SIG undefined FUN_1411b3ce0(void)

void FUN_1411b3ce0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  char cVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18;
  longlong local_res20;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198 [19];
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
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
  
  if (param_1[0xd8] != 0) {
    FUN_142ecffe0();
    lVar8 = param_1[0xd3];
    if ((lVar8 == 0) || (*(int *)(lVar8 + 0x10) < 1)) {
      FUN_1411b75c0(param_1,0);
      if ((param_1[0xd6] != 0) && (param_1[0xd7] != 0)) {
        local_198[0x11] = 0xe;
        local_198[0x10] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x10,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_198[0x10],0xe,"noResultFound",0xe,0x3f);
        FUN_142088910(param_1[0xd6],local_198 + 0x10);
        if (local_198[0x10] != 0) {
          FMemory::Free();
        }
        (**(code **)(*(longlong *)param_1[0xd7] + 0x278))((longlong *)param_1[0xd7],1);
        lVar8 = *(longlong *)param_1[0xd7];
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_68,L"No servers found",L"ServerBrowserMenu",L"NoServerFoundText");
        (**(code **)(lVar8 + 0x2b0))(param_1[0xd7],uVar7,1,0);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_60 + 1;
          lVar8 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
    }
    else {
      lVar14 = 0;
      if ((param_1[0xd6] != 0) && (param_1[0xd7] != 0)) {
        local_198[0] = 0;
        local_198[1] = 0xe;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_198[0],0xe,"displayResult",0xe,0x3f);
        FUN_142088910(param_1[0xd6],local_198);
        if (local_198[0] != 0) {
          FMemory::Free();
        }
        (**(code **)(*(longlong *)param_1[0xd7] + 0x278))((longlong *)param_1[0xd7],0);
        lVar8 = param_1[0xd3];
      }
      FUN_1411b75c0(param_1,*(undefined4 *)(lVar8 + 0x10));
      local_1a8 = 0;
      local_1a0 = 0;
      uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar8 = FUN_142f6caf0(uVar7);
      if (lVar8 != 0) {
        FUN_142f5dfe0(lVar8,&local_1a8,0);
      }
      lVar8 = param_1[0xd3];
      local_res18 = 0;
      if (0 < *(int *)(lVar8 + 0x10)) {
        local_198[0x12] = 0;
        do {
          lVar15 = *(longlong *)(lVar8 + 8) + local_198[0x12];
          local_198[2] = 0;
          local_198[3] = 0x1d;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 2,0);
          FGenericPlatformString::Memcpy(local_198[2],L"ServerBrowserListItemLibrary",0x3a);
          lVar8 = param_1[0xd8];
          local_e8 = AReplicationGraphDebugActor::GetPrivateStaticClass();
          lVar8 = FUN_142ebcee0(lVar8,local_198 + 2,local_e8,0);
          if (lVar8 == 0) {
LAB_1411b3ed6:
            lVar8 = lVar14;
          }
          else {
            lVar9 = AReplicationGraphDebugActor::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) goto LAB_1411b3ed6;
          }
          if (local_198[2] != 0) {
            FMemory::Free();
          }
          if (lVar8 != 0) {
            local_res10[0] = 1;
            FUN_1404a9610(lVar15 + 0x28,DAT_146876308,local_res10);
            local_res8[0] = -1;
            FUN_1404a9610(lVar15 + 0x28,DAT_146876320,local_res8);
            local_res20 = 0;
            if ((local_res8[0] < 0) || ((int)local_1a0 <= local_res8[0])) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            iVar3 = local_res8[0];
            if (bVar5) {
LAB_1411b3f66:
              local_res20 = *(longlong *)(local_1a8 + (longlong)iVar3 * 8);
            }
            else if ((local_res8[0] == (int)local_1a0) && (0 < local_res8[0])) {
              iVar3 = local_res8[0] + -1;
              goto LAB_1411b3f66;
            }
            FText::FText(local_100);
            lVar9 = lVar14;
            if (local_res20 != 0) {
              lVar10 = FUN_142f71d80();
              for (lVar4 = local_res20;
                  (lVar9 = lVar14, lVar4 != 0 && (lVar9 = local_res20, lVar4 != lVar10));
                  lVar4 = *(longlong *)(lVar4 + 0x30)) {
              }
            }
            if (lVar9 == 0) {
              uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_b0,L"In the Borderlands",L"OakGameInstance",L"NoMissionText")
              ;
              FText::operator=(local_100,uVar7);
              plVar13 = local_a8;
            }
            else {
              uVar7 = FUN_142f5bb60(&local_res20);
              uVar7 = FUN_142dea370(uVar7,local_c8);
              FText::operator=(local_100,uVar7);
              plVar13 = local_c0;
            }
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar13 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
            iVar3 = *(int *)(lVar15 + 0xb8);
            if ((iVar3 < 0) || (iVar3 == 9999)) {
              cVar12 = '\x04';
            }
            else if (iVar3 < 0x65) {
              cVar12 = '\x03';
            }
            else {
              cVar12 = (iVar3 < 0xb0) + '\x01';
            }
            local_198[0xe] = 0;
            local_198[0xf] = 0;
            puVar11 = (undefined8 *)FName::FName(local_e0,&DAT_1446d3200,1);
            FUN_1404a96c0(lVar15 + 0x28,*puVar11,local_198 + 0xe);
            lVar9 = FUN_140f9aee0(param_1);
            if (lVar9 != 0) {
              puVar11 = (undefined8 *)
                        (**(code **)(**(longlong **)(lVar15 + 8) + 8))
                                  (*(longlong **)(lVar15 + 8),local_d8);
              cVar6 = FUN_140bcac80(lVar9,*puVar11);
              if ((cVar6 == '\0') && (1 < *(int *)(lVar15 + 0x20))) {
                FString::operator=(local_198 + 0xe,lVar15 + 0x18);
              }
            }
            uVar7 = FText::FromString(local_98,local_198 + 0xe);
            FUN_142ed3af0(lVar8,uVar7,0);
            plVar13 = local_90;
            if (local_90 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_90 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_90)(local_90);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
            FUN_1411b6f40(lVar8,*(undefined4 *)(lVar15 + 0xb8));
            FUN_1411b6d00(lVar8,local_res10[0]);
            FUN_1411b71c0(lVar8,*(undefined4 *)(lVar15 + 0x30));
            FUN_1411b7800(lVar8,*(int *)(lVar15 + 0x30) - *(int *)(lVar15 + 0xb4));
            plVar13 = *(longlong **)(lVar8 + 0x318);
            if (plVar13 != (longlong *)0x0) {
              (**(code **)(*plVar13 + 0x2b0))(plVar13,local_100,1,0);
            }
            if (*(longlong *)(lVar8 + 0x338) != 0) {
              if (cVar12 == '\x01') {
                local_198[10] = 0;
                local_198[0xb] = 4;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 10,0);
                FGenericPlatformString::Convert<char,wchar_t>(local_198[10],4,&DAT_1446d11b4,4,0x3f)
                ;
                FUN_142088910(*(undefined8 *)(lVar8 + 0x338),local_198 + 10);
                lVar15 = local_198[10];
              }
              else if (cVar12 == '\x02') {
                local_198[8] = 0;
                local_198[9] = 7;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 8,0);
                FGenericPlatformString::Convert<char,wchar_t>(local_198[8],7,"medium",7,0x3f);
                FUN_142088910(*(undefined8 *)(lVar8 + 0x338),local_198 + 8);
                lVar15 = local_198[8];
              }
              else if (cVar12 == '\x03') {
                local_198[6] = 0;
                local_198[7] = 5;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 6,0);
                FGenericPlatformString::Convert<char,wchar_t>(local_198[6],5,&DAT_1446e0de8,5,0x3f);
                FUN_142088910(*(undefined8 *)(lVar8 + 0x338),local_198 + 6);
                lVar15 = local_198[6];
              }
              else {
                if (cVar12 != '\x04') goto LAB_1411b431a;
                local_198[4] = 0;
                local_198[5] = 5;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 4,0);
                FGenericPlatformString::Convert<char,wchar_t>(local_198[4],5,&DAT_1446de394,5,0x3f);
                FUN_142088910(*(undefined8 *)(lVar8 + 0x338),local_198 + 4);
                lVar15 = local_198[4];
              }
              if (lVar15 != 0) {
                FMemory::Free();
              }
            }
LAB_1411b431a:
            local_198[0xc] = 0;
            local_198[0xd] = 0x10;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0xc,0);
            FGenericPlatformString::Convert<char,wchar_t>
                      (local_198[0xc],0x10,"Set playthrough",0x10,0x3f);
            uVar7 = FText::FromString(local_80,local_198 + 0xc);
            plVar13 = *(longlong **)(lVar8 + 0x310);
            if (plVar13 != (longlong *)0x0) {
              (**(code **)(*plVar13 + 0x2b0))(plVar13,uVar7,1);
            }
            plVar13 = local_78;
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_78 + 1;
              lVar15 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*local_78)(local_78);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
            if (local_198[0xc] != 0) {
              FMemory::Free();
            }
            puVar11 = (undefined8 *)FName::FName(local_d0,L"OnServerSelected",1);
            FWeakObjectPtr::operator=(lVar8 + 0x1b0,param_1);
            *(undefined8 *)(lVar8 + 0x1b8) = *puVar11;
            if (local_198[0xe] != 0) {
              FMemory::Free();
            }
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
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
          }
          local_res18 = local_res18 + 1;
          lVar8 = param_1[0xd3];
          local_198[0x12] = local_198[0x12] + 0xc0;
        } while (local_res18 < *(int *)(lVar8 + 0x10));
      }
      FUN_142ed1f10(param_1[0xd8],0);
      if (local_1a8 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1411b45f0 BeginDestroy body=35 status=ok
// SIG undefined BeginDestroy(void)

void UPawnAction_Move::BeginDestroy(undefined8 param_1)

{
  UObject::PostLoad();
  FUN_14119cfd0(param_1);
  FUN_14119d2a0(param_1);
  return;
}



// FUNCTION 1411b4620 FUN_1411b4620 body=1449 status=ok
// SIG undefined FUN_1411b4620(void)

void FUN_1411b4620(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  int *piVar7;
  longlong local_78 [10];
  undefined1 local_28 [8];
  longlong *local_20;
  
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar7 < DAT_146876390) {
    _Init_thread_header(&DAT_146876390);
    if (DAT_146876390 == -1) {
      local_78[0] = 0;
      local_78[1] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
      FGenericPlatformString::Memcpy(local_78[0],L"Mark Target",0x18);
      FText::FromString(&DAT_146876378,local_78);
      if (local_78[0] != 0) {
        FMemory::Free();
      }
      atexit(FUN_143e61df0);
      _Init_thread_footer(&DAT_146876390);
    }
  }
  if (*piVar7 < DAT_1468763b0) {
    _Init_thread_header(&DAT_1468763b0);
    if (DAT_1468763b0 == -1) {
      local_78[2] = 0;
      local_78[3] = 0x18;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 2,0);
      FGenericPlatformString::Memcpy(local_78[2],L"Previous Active Mission",0x30);
      FText::FromString(&DAT_146876398,local_78 + 2);
      if (local_78[2] != 0) {
        FMemory::Free();
      }
      atexit(FUN_143e61e90);
      _Init_thread_footer(&DAT_1468763b0);
    }
  }
  if (*piVar7 < DAT_1468763d0) {
    _Init_thread_header(&DAT_1468763d0);
    if (DAT_1468763d0 == -1) {
      local_78[4] = 0;
      local_78[5] = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 4,0);
      FGenericPlatformString::Memcpy(local_78[4],L"Cycle Previous Active Mission",0x3c);
      FText::FromString(&DAT_1468763b8,local_78 + 4);
      if (local_78[4] != 0) {
        FMemory::Free();
      }
      atexit(FUN_143e611d0);
      _Init_thread_footer(&DAT_1468763d0);
    }
  }
  if (*piVar7 < DAT_1468763f0) {
    _Init_thread_header(&DAT_1468763f0);
    if (DAT_1468763f0 == -1) {
      local_78[6] = 0;
      local_78[7] = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 6,0);
      FGenericPlatformString::Memcpy(local_78[6],L"Next Active Mission",0x28);
      FText::FromString(&DAT_1468763d8,local_78 + 6);
      if (local_78[6] != 0) {
        FMemory::Free();
      }
      atexit(FUN_143e61e40);
      _Init_thread_footer(&DAT_1468763f0);
    }
  }
  if (*piVar7 < DAT_146876410) {
    _Init_thread_header(&DAT_146876410);
    if (DAT_146876410 == -1) {
      local_78[8] = 0;
      local_78[9] = 0x1a;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 8,0);
      FGenericPlatformString::Memcpy(local_78[8],L"Cycle Next Active Mission",0x34);
      FText::FromString(&DAT_1468763f8,local_78 + 8);
      if (local_78[8] != 0) {
        FMemory::Free();
      }
      atexit(FUN_143e61180);
      _Init_thread_footer(&DAT_146876410);
    }
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) goto LAB_1411b485f;
  iVar2 = FText::CompareTo(param_1 + 0x38,&DAT_146876378,0);
  if (iVar2 == 0) {
    uVar3 = FUN_1406804e0();
    lVar4 = FUN_141799c90(uVar3,0,
                          L"/Game/Common/_Design/Input/Bindings/InputRebind_Button_MarkTarget.InputRebind_Button_MarkTarget"
                          ,0,0,0,1);
    if (lVar4 == 0) goto LAB_1411b485f;
    uVar3 = GetTransientPackage();
    lVar5 = UMovieSceneSoundSetTrack::CreateNewSection(uVar3);
    *(longlong *)(param_1 + 0xd8) = lVar5;
    if (lVar5 == 0) goto LAB_1411b485f;
    puVar6 = &DAT_146876378;
  }
  else {
    iVar2 = FText::CompareTo(param_1 + 0x38,&DAT_146876398,0);
    if (iVar2 != 0) {
      iVar2 = FText::CompareTo(param_1 + 0x38,&DAT_1468763b8,0);
      if (iVar2 != 0) {
        iVar2 = FText::CompareTo(param_1 + 0x38,&DAT_1468763d8,0);
        if (iVar2 != 0) {
          iVar2 = FText::CompareTo(param_1 + 0x38,&DAT_1468763f8,0);
          if (iVar2 != 0) goto LAB_1411b485f;
        }
        uVar3 = FUN_1406804e0();
        lVar4 = FUN_141799c90(uVar3,0,
                              L"/Game/PlayerCharacters/_Shared/_Design/Input/Bindings/InputRebind_Button_TrackNextMission.InputRebind_Button_TrackNextMission"
                              ,0,0,0,1);
        if (lVar4 == 0) goto LAB_1411b485f;
        uVar3 = GetTransientPackage();
        lVar5 = UMovieSceneSoundSetTrack::CreateNewSection(uVar3);
        *(longlong *)(param_1 + 0xd8) = lVar5;
        if (lVar5 == 0) goto LAB_1411b485f;
        puVar6 = &DAT_1468763d8;
        goto LAB_1411b4832;
      }
    }
    uVar3 = FUN_1406804e0();
    lVar4 = FUN_141799c90(uVar3,0,
                          L"/Game/PlayerCharacters/_Shared/_Design/Input/Bindings/InputRebind_Button_TrackPreviousMission.InputRebind_Button_TrackPreviousMission"
                          ,0,0,0,1);
    if (lVar4 == 0) goto LAB_1411b485f;
    uVar3 = GetTransientPackage();
    lVar5 = UMovieSceneSoundSetTrack::CreateNewSection(uVar3);
    *(longlong *)(param_1 + 0xd8) = lVar5;
    if (lVar5 == 0) goto LAB_1411b485f;
    puVar6 = &DAT_146876398;
  }
LAB_1411b4832:
  *(undefined1 *)(lVar5 + 0x30) = 2;
  *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x31) = 6;
  FText::operator=(*(longlong *)(param_1 + 0xd8) + 0x38,puVar6);
  *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0xb8) = lVar4;
LAB_1411b485f:
  if ((*(char *)(param_1 + 0x30) == '\t') && (*(int *)(param_1 + 0x98) == 5)) {
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,&DAT_1446e59c8,L"AudioSoundModeOptions",
                       L"AudioSoundModeOptions_PC_Logitech");
    iVar2 = *(int *)(param_1 + 0x98);
    *(int *)(param_1 + 0x98) = iVar2 + 1;
    if (*(int *)(param_1 + 0x9c) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x90,iVar2);
    }
    FText::FText(*(longlong *)(param_1 + 0x90) + (longlong)iVar2 * 0x18,uVar3);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar7 = (int *)((longlong)local_20 + 0xc);
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  UObject::PostLoad(param_1);
  return;
}



// FUNCTION 1411b4bd0 FUN_1411b4bd0 body=269 status=ok
// SIG undefined FUN_1411b4bd0(void)

void FUN_1411b4bd0(longlong param_1,undefined8 *param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  if (param_4 == '\0') {
    lVar5 = FUN_140f9aee0(param_1 + -0x4d8);
    if (lVar5 != 0) {
      plVar6 = (longlong *)FUN_140bbb120(lVar5,param_3);
      if (plVar6 != (longlong *)0x0) {
        cVar4 = FUN_140f12a40(plVar6,param_1 + 0xb4);
        if (cVar4 == '\0') {
          uVar7 = FUN_1414198e0();
          lVar5 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
          if (lVar5 != 0) {
            local_20 = *param_2;
            local_18 = param_2[1];
            local_10 = param_2[2];
            if (local_10 != 0) {
              LOCK();
              *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
              UNLOCK();
            }
            FUN_140cc0f50(lVar5,&local_20);
          }
          FKey::~FKey(param_2);
          return;
        }
      }
    }
    plVar6 = (longlong *)param_2[2];
  }
  else {
    plVar6 = (longlong *)param_2[2];
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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



// FUNCTION 1411b4ce0 FUN_1411b4ce0 body=299 status=ok
// SIG undefined FUN_1411b4ce0(void)

void FUN_1411b4ce0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong local_38 [3];
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_142dcf3a0(*(longlong *)(param_1 + 0x68),local_38 + 2);
    if (local_38[2] != 0) {
      local_38[1] = 10;
      local_38[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"crossplay",0x14);
      local_18 = local_38[2];
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      FUN_142b62c30(&local_18,local_38,param_2,param_3);
      plVar3 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_10)(plStack_10);
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
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_20 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411b4e10 FUN_1411b4e10 body=181 status=ok
// SIG undefined FUN_1411b4e10(void)

void FUN_1411b4e10(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if (param_1[0x10] != 0) {
    FUN_142ecffe0();
    FUN_1411b6170(param_1);
    uVar1 = 0;
    puVar2 = (undefined8 *)param_1[7];
    uVar3 = (longlong)(int)param_1[8] & 0x1fffffffffffffff;
    if (puVar2 + (int)param_1[8] < puVar2) {
      uVar3 = uVar1;
    }
    if (uVar3 != 0) {
      do {
        (**(code **)(*param_1 + 0x2d8))(param_1,*puVar2);
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar1 != uVar3);
    }
    (**(code **)(*(longlong *)param_1[0x10] + 0x300))();
    (**(code **)(*(longlong *)param_1[0x10] + 0x2c8))((longlong *)param_1[0x10],1,0);
  }
  return;
}



// FUNCTION 1411b4ed0 FUN_1411b4ed0 body=302 status=ok
// SIG undefined FUN_1411b4ed0(void)

void FUN_1411b4ed0(longlong param_1,char param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (param_2 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_142eb7a00(*(undefined8 *)(param_1 + 0x80));
  }
  uVar7 = FUN_142eedeb0(*(longlong *)(param_1 + 0x80) + 0x2b8);
  FUN_1411a1320(param_1);
  if (param_2 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x2f8))(*(longlong **)(param_1 + 0x80),uVar7,0);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x2b8))(*(longlong **)(param_1 + 0x80),uVar2,0,0)
    ;
  }
  iVar6 = 0;
  iVar3 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x80));
  if (0 < iVar3) {
    do {
      lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x80),iVar6);
      if (lVar4 != 0) {
        lVar5 = FUN_142f1c0a0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_142ecf550(lVar4);
          uVar2 = FUN_14119e040();
          FUN_142ed36f0(lVar4,uVar2,L"left");
        }
      }
      iVar6 = iVar6 + 1;
      iVar3 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x80));
    } while (iVar6 < iVar3);
  }
  return;
}



// FUNCTION 1411b5000 FUN_1411b5000 body=247 status=ok
// SIG undefined FUN_1411b5000(void)

void FUN_1411b5000(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  
  bVar4 = 0x34;
  if ((*(longlong *)(param_1 + 0x980) != 0) && (iVar2 = FUN_142eb7a00(), iVar2 != -1)) {
    iVar5 = 0;
    do {
      if (*(int *)(param_1 + 0x8b0 + (longlong)iVar5 * 4) == iVar2) {
        bVar4 = (byte)iVar5;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x34);
  }
  iVar2 = *(int *)(param_1 + 0x89c);
  if (iVar2 == 0) {
    FUN_141191350(param_1);
    goto LAB_1411b5094;
  }
  if (iVar2 != 1) {
    if (iVar2 == 4) {
      FUN_141191a60(param_1);
      goto LAB_1411b5094;
    }
    if (iVar2 == 5) {
      FUN_141109890(param_1);
      goto LAB_1411b5094;
    }
    if (iVar2 != 6) goto LAB_1411b5094;
  }
  FUN_141105fc0(param_1);
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
LAB_1411b5094:
  if ((*(longlong *)(param_1 + 0x980) != 0) && (cVar1 = FUN_142ebdf20(), cVar1 != '\0')) {
    if (bVar4 == 0x34) {
      plVar3 = *(longlong **)(param_1 + 0x980);
      if (plVar3 == (longlong *)0x0) {
        return;
      }
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x8b0 + (ulonglong)bVar4 * 4);
      if (iVar2 < 0) {
        return;
      }
      if (*(int *)(param_1 + 0x8a8) <= iVar2) {
        return;
      }
      plVar3 = *(longlong **)(param_1 + 0x980);
    }
    (**(code **)(*plVar3 + 0x2b8))(plVar3,iVar2,0,0);
  }
  return;
}



// FUNCTION 1411b5100 FUN_1411b5100 body=719 status=ok
// SIG undefined FUN_1411b5100(void)

void FUN_1411b5100(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  wchar_t *pwVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  short *psVar12;
  longlong *plVar13;
  undefined4 local_res8;
  longlong local_88;
  ulonglong local_80;
  short *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_58;
  int local_50;
  longlong local_48;
  
  plVar13 = *(longlong **)(param_1 + 0x2c8);
  plVar2 = plVar13 + *(int *)(param_1 + 0x2d0);
  if (plVar13 != plVar2) {
    do {
      lVar10 = *plVar13;
      plVar11 = *(longlong **)(lVar10 + 0x38);
      if (plVar11 == (longlong *)0x0) {
LAB_1411b5192:
        plVar11 = (longlong *)0x0;
      }
      else {
        lVar6 = AGImpulseWindProjectile::GetPrivateStaticClass();
        if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
            != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_1411b5192;
      }
      plVar3 = *(longlong **)(lVar10 + 0x2d0);
      if ((plVar3 != (longlong *)0x0) && (plVar11 != (longlong *)0x0)) {
        if (param_2 != 0) {
          iVar5 = *(int *)(lVar10 + 0x2e8) + -1;
          if (*(int *)(lVar10 + 0x2e8) == 0) {
            iVar5 = 0;
          }
          if (0 < iVar5) {
            FUN_1411e2f80(param_2,&local_68);
            puVar7 = (undefined4 *)FUN_1411e6e10(&local_68);
            lVar6 = FUN_1416f8720(*puVar7);
            FUN_1416f8340(local_res8);
            iVar5 = local_50;
            if (*(char *)(lVar10 + 0x2f0) != '\0') {
              iVar5 = 0;
            }
            (**(code **)(**(longlong **)(lVar10 + 0x2d0) + 0x278))();
            if ((lVar6 != 0) && (iVar5 != -1)) {
              FUN_142088ee0(*(undefined8 *)(lVar10 + 0x2d0),iVar5 + 1);
              pwVar8 = L"ExtTex_Small_%02d_nopack";
              if (*(char *)(lVar10 + 0x2f0) != '\0') {
                pwVar8 = L"ExtTex_Big_%02d_nopack";
              }
              FString::PrintfImpl(&local_78,pwVar8,iVar5 + 1);
              local_80 = 0;
              psVar12 = &DAT_143f3eda8;
              if (local_70 != 0) {
                psVar12 = local_78;
              }
              local_88 = 0;
              if ((psVar12 != (short *)0x0) && (*psVar12 != 0)) {
                lVar10 = -1;
                do {
                  lVar10 = lVar10 + 1;
                } while (psVar12[lVar10] != 0);
                uVar9 = (int)lVar10 + 1;
                local_80 = (ulonglong)uVar9;
                if (0 < (int)uVar9) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
                }
                FGenericPlatformString::Memcpy(local_88,psVar12,(longlong)(int)uVar9 * 2);
              }
              (**(code **)(*plVar11 + 0x2a0))(plVar11,&local_88,lVar6);
              if (local_88 != 0) {
                FMemory::Free();
              }
              if (local_78 != (short *)0x0) {
                FMemory::Free();
              }
            }
            if (local_48 != 0) {
              LOCK();
              piVar1 = (int *)(local_48 + 0x48);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                FGraphEvent::Recycle();
              }
            }
            plVar11 = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_58 + 1;
              lVar10 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_58)(local_58);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11);
                }
              }
            }
            FUN_1416f8340(local_64);
            FUN_1416f8340(local_68);
            goto LAB_1411b5392;
          }
        }
        (**(code **)(*plVar3 + 0x278))(plVar3,0);
      }
LAB_1411b5392:
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar2);
  }
  return;
}



// FUNCTION 1411b53d0 FUN_1411b53d0 body=172 status=ok
// SIG undefined FUN_1411b53d0(void)

void FUN_1411b53d0(longlong param_1,byte param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411b5432;
  }
  lVar2 = 0;
LAB_1411b5432:
  if ((*(longlong *)(param_1 + 0x780) != 0) && (lVar2 != 0)) {
    *(int *)(lVar2 + 0x970) = *(int *)(lVar2 + 0x970) + (uint)param_2 * 2 + -1;
    (**(code **)(**(longlong **)(param_1 + 0x780) + 0x278))
              (*(longlong **)(param_1 + 0x780),0 < *(int *)(lVar2 + 0x970));
  }
  return;
}



// FUNCTION 1411b5480 FUN_1411b5480 body=2001 status=ok
// SIG undefined FUN_1411b5480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411b5480(longlong *param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  void *_Src;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong *local_138;
  int local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118 [2];
  void *local_108;
  int local_100;
  undefined4 local_fc;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c0;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  longlong *plStack_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [40];
  
  plVar13 = (longlong *)0x0;
  local_res8[0] = 0;
  if (param_1[0xd8] == 0) {
    return;
  }
  FUN_142ecffe0();
  puVar7 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
  FUN_1404d0c50(&local_d8,*puVar7);
  if ((local_d8 == (longlong *)0x0) ||
     (lVar8 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c), lVar8 == 0)) goto LAB_1411b5b90;
  if ((param_1[0xd6] != 0) && (param_1[0xd7] != 0)) {
    local_118[0] = 0;
    local_118[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_118,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_118[0],10,"searching",10,0x3f);
    FUN_142088910(param_1[0xd6],local_118);
    if (local_118[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(*(longlong *)param_1[0xd7] + 0x278))((longlong *)param_1[0xd7],1);
    lVar8 = *(longlong *)param_1[0xd7];
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_78,L"Searching for servers",L"ServerBrowserMenu",L"SearchingText");
    (**(code **)(lVar8 + 0x2b0))(param_1[0xd7],uVar9,1,0);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_70 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  lVar8 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  lVar8 = *(longlong *)(lVar8 + 0x508);
  if (lVar8 == 0) {
LAB_1411b5684:
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
    local_c0 = (longlong *)0x0;
    uStack_120 = plVar13;
    local_128 = plVar13;
  }
  else {
    lVar10 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1411b5684;
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
    lVar8 = FUN_142547b50(lVar8,local_60);
    uStack_120 = *(longlong **)(lVar8 + 0x10);
    local_128 = *(longlong **)(lVar8 + 8);
    local_b0 = uStack_120;
    if (uStack_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
      UNLOCK();
    }
  }
  plVar11 = local_c0;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
    UNLOCK();
  }
  if ((bVar4) && (local_c0 != (longlong *)0x0)) {
    LOCK();
    plVar12 = local_c0 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  plVar11 = local_b0;
  if ((bVar5) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar12 = local_b0 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (bVar6) {
    FUN_1404bf980(local_60);
  }
  if (local_128 == (longlong *)0x0) {
    FUN_1411a4f30(param_1,2);
  }
  else {
    local_res8[0] = 0;
    lVar8 = (**(code **)(*param_1 + 0x148))();
    if (lVar8 != 0) {
      lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar8 = *(longlong *)(lVar8 + 400);
      if (lVar8 != 0) {
        lVar10 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_146876414) && (_Init_thread_header(&DAT_146876414), DAT_146876414 == -1)) {
            DAT_1462a1a70 = (void *)0x0;
            _DAT_1462a1a78 = 0x21;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1a70,0);
            FGenericPlatformString::Memcpy(DAT_1462a1a70,L"2cf9a2ba9e68496ebefefc9013f8b389",0x42);
            atexit((_func_5014 *)&LAB_143e61ee0);
            _Init_thread_footer(&DAT_146876414);
          }
          _Src = DAT_1462a1a70;
          lVar10 = (longlong)DAT_1462a1a78;
          local_108 = (void *)0x0;
          local_100 = DAT_1462a1a78;
          if (DAT_1462a1a78 == 0) {
            local_fc = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                      (&local_108,_DAT_1462a1a78 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop(local_108,_Src,lVar10 * 2);
          }
          local_res8[0] = FUN_140bb8dc0(lVar8,&local_108);
          if (local_108 != (void *)0x0) {
            FMemory::Free();
          }
        }
      }
    }
    lVar8 = operator_new(0x88);
    plVar11 = plVar13;
    if (lVar8 != 0) {
      plVar11 = (longlong *)FUN_140da88b0(lVar8);
    }
    plVar12 = (longlong *)operator_new(0x18);
    if (plVar12 != (longlong *)0x0) {
      *(undefined4 *)(plVar12 + 1) = 1;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      *plVar12 = (longlong)&PTR_FUN_143f3f2e0;
      plVar12[2] = (longlong)plVar11;
      plVar13 = plVar12;
    }
    pplVar2 = (longlong **)(param_1 + 0xd3);
    local_f8 = plVar11;
    local_f0 = plVar13;
    SharedPointerInternals::EnableSharedFromThis(&local_f8,plVar11,plVar11);
    if (pplVar2 != &local_f8) {
      *pplVar2 = plVar11;
      local_f8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd4,&local_f0);
      plVar13 = local_f0;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar13 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    *(undefined4 *)((longlong)*pplVar2 + 0x1c) = 0x14;
    *(char *)(*pplVar2 + 0xf) = (char)param_1[0xd1];
    *(undefined4 *)(*pplVar2 + 0x10) = 0x40000000;
    plStack_e0 = (longlong *)param_1[0xd4];
    local_e8 = *pplVar2;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
      UNLOCK();
    }
    FUN_1404ab0b0(local_e8 + 4,DAT_1468762e8,local_res8,0);
    uStack_a0 = 0;
    local_138 = (longlong *)0x0;
    local_a8 = FUN_1411a4f30;
    plVar13 = (longlong *)FMemory::Realloc(0,0x30);
    local_130 = 3;
    local_138 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      *plVar13 = (longlong)&PTR_FUN_1442cc120;
      FWeakObjectPtr::operator=(plVar13 + 1,param_1);
      *(undefined4 *)(plVar13 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar13 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar13 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_9c;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar13[5] = lVar8;
      *plVar13 = (longlong)&PTR_FUN_1442cc168;
    }
    plVar13 = (longlong *)(**(code **)(*local_d8 + 0x108))(local_d8,local_res18,&local_138);
    param_1[0xd2] = *plVar13;
    if (local_130 == 0) {
LAB_1411b5a43:
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
      goto LAB_1411b5a43;
    }
    local_88 = local_e8;
    plStack_80 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
      UNLOCK();
    }
    local_98 = (undefined4)local_128;
    uStack_94 = local_128._4_4_;
    uStack_90 = (undefined4)uStack_120;
    uStack_8c = uStack_120._4_4_;
    if (uStack_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_120 + 1) = (int)uStack_120[1] + 1;
      UNLOCK();
    }
    (**(code **)(*local_d8 + 0x100))(local_d8,&local_98,&local_88);
    plVar13 = (longlong *)CONCAT44(uStack_8c,uStack_90);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar13 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    plVar13 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_80 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    plVar13 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_e0 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
        }
      }
    }
  }
  plVar13 = uStack_120;
  if (uStack_120 != (longlong *)0x0) {
    LOCK();
    plVar11 = uStack_120 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_120)(uStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_120 + 8))(uStack_120,1);
      }
    }
  }
LAB_1411b5b90:
  plVar13 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_d0 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  return;
}



// FUNCTION 1411b5c60 FUN_1411b5c60 body=1284 status=ok
// SIG undefined FUN_1411b5c60(void)

void FUN_1411b5c60(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0x778);
  if (lVar1 != 0) {
    pwVar6 = (wchar_t *)0x0;
    if ((*(longlong *)(lVar1 + 0x1b8) != 0) && (*(longlong *)(lVar1 + 0x1e8) != 0)) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::SubtitleNavigationClicked",L"::");
      pwVar5 = pwVar6;
      while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar5 = pwVar2;
      }
      FName::FName(&local_res10,pwVar5 + 2,1);
      lVar4 = local_res10;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x778) + 0x1b8);
      FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
      *(longlong *)(lVar1 + 0x1b8) = lVar4;
      if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(lVar1 + 0x1b0), lVar4 != 0)) {
        UObject::FindFunction(lVar4,*(undefined8 *)(lVar1 + 0x1b8));
      }
      pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::SubtitleNavigationClicked",L"::");
      pwVar5 = pwVar6;
      while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar5 = pwVar2;
      }
      FName::FName(&local_res10,pwVar5 + 2,1);
      lVar4 = local_res10;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x778) + 0x1e8);
      FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
      *(longlong *)(lVar1 + 0x1b8) = lVar4;
      if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(lVar1 + 0x1b0), lVar4 != 0)) {
        UObject::FindFunction(lVar4,*(undefined8 *)(lVar1 + 0x1b8));
      }
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x1c0) != 0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSubtitlesButtonClicked",L"::");
      pwVar5 = pwVar6;
      while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar5 = pwVar2;
      }
      FName::FName(&local_res10,pwVar5 + 2,1);
      lVar4 = local_res10;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x778) + 0x1c0);
      FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
      *(longlong *)(lVar1 + 0x1b8) = lVar4;
      if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(lVar1 + 0x1b0), lVar4 != 0)) {
        UObject::FindFunction(lVar4,*(undefined8 *)(lVar1 + 0x1b8));
      }
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x1c8) != 0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSubtitlesButtonClicked",L"::");
      pwVar5 = pwVar6;
      while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar5 = pwVar2;
      }
      FName::FName(&local_res10,pwVar5 + 2,1);
      lVar4 = local_res10;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x778) + 0x1c8);
      FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
      *(longlong *)(lVar1 + 0x1b8) = lVar4;
      if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(lVar1 + 0x1b0), lVar4 != 0)) {
        UObject::FindFunction(lVar4,*(undefined8 *)(lVar1 + 0x1b8));
      }
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x1d0) != 0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSubtitlesButtonClicked",L"::");
      pwVar5 = pwVar6;
      while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar5 = pwVar2;
      }
      FName::FName(&local_res10,pwVar5 + 2,1);
      lVar4 = local_res10;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x778) + 0x1d0);
      FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
      *(longlong *)(lVar1 + 0x1b8) = lVar4;
      if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(lVar1 + 0x1b0), lVar4 != 0)) {
        UObject::FindFunction(lVar4,*(undefined8 *)(lVar1 + 0x1b8));
      }
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x1d8) != 0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSubtitlesButtonClicked",L"::");
      pwVar5 = pwVar6;
      while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar5 = pwVar2;
      }
      FName::FName(&local_res10,pwVar5 + 2,1);
      lVar4 = local_res10;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x778) + 0x1d8);
      FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
      *(longlong *)(lVar1 + 0x1b8) = lVar4;
      if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(lVar1 + 0x1b0), lVar4 != 0)) {
        UObject::FindFunction(lVar4,*(undefined8 *)(lVar1 + 0x1b8));
      }
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x1e0) != 0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSubtitlesButtonClicked",L"::");
      while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar6 = pwVar3;
      }
      FName::FName(&local_res10,pwVar6 + 2,1);
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x778) + 0x1e0);
      FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
      *(longlong *)(lVar1 + 0x1b8) = local_res10;
      if ((local_res10 != 0) && (lVar4 = FWeakObjectPtr::Get(lVar1 + 0x1b0), lVar4 != 0)) {
        UObject::FindFunction(lVar4,*(undefined8 *)(lVar1 + 0x1b8));
      }
    }
  }
  return;
}



// FUNCTION 1411b6170 FUN_1411b6170 body=113 status=ok
// SIG undefined FUN_1411b6170(void)

void FUN_1411b6170(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x94)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x88,0);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((*(int *)(param_1 + 0xa4) < 0) && (*(int *)(param_1 + 0xa4) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x98,0);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((*(int *)(param_1 + 0xb4) < 0) && (*(int *)(param_1 + 0xb4) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xa8,0);
    return;
  }
  return;
}



// FUNCTION 1411b61f0 FUN_1411b61f0 body=177 status=ok
// SIG undefined FUN_1411b61f0(void)

void FUN_1411b61f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18;
  undefined8 local_10;
  
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x38), lVar1 != 0)) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar1 = *(longlong *)(param_1 + 0x80);
      local_18 = lVar1;
      if (lVar1 == 0) {
        local_10 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = UBlendableInterface::GetPrivateStaticClass();
        local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar4);
        uVar4 = *(undefined8 *)(param_1 + 0x80);
      }
      uVar4 = FUN_14119d8f0(uVar4);
      FUN_142ed36d0(uVar4,&local_18,0);
    }
  }
  return;
}



// FUNCTION 1411b62b0 FUN_1411b62b0 body=473 status=ok
// SIG undefined FUN_1411b62b0(void)

void FUN_1411b62b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 local_28 [16];
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    piVar1 = (int *)(param_1 + 0x15c);
    if (piVar1 != (int *)(param_1 + 0x280)) {
      if (*(char *)(param_1 + 0x284) != '\0') {
        *(undefined1 *)(param_1 + 0x284) = 0;
      }
      *(int *)(param_1 + 0x280) = *piVar1;
      *(undefined1 *)(param_1 + 0x284) = 1;
    }
    plVar2 = (longlong *)(param_1 + 0x2a0);
    plVar3 = (longlong *)(param_1 + 0x288);
    if (plVar2 != plVar3) {
      if (*(char *)(param_1 + 0x298) != '\0') {
        *(undefined1 *)(param_1 + 0x298) = 0;
        if (*plVar3 != 0) {
          FMemory::Free();
        }
      }
      FString::FString(plVar3,plVar2);
      *(undefined1 *)(param_1 + 0x298) = 1;
    }
    puVar4 = (undefined4 *)(param_1 + 0x2b8);
    if (puVar4 != (undefined4 *)(param_1 + 0x2b0)) {
      if (*(char *)(param_1 + 0x2b4) != '\0') {
        *(undefined1 *)(param_1 + 0x2b4) = 0;
      }
      *(undefined4 *)(param_1 + 0x2b0) = *puVar4;
      *(undefined1 *)(param_1 + 0x2b4) = 1;
    }
    piVar5 = (int *)(param_1 + 0x2c4);
    if (piVar5 != (int *)(param_1 + 700)) {
      if (*(char *)(param_1 + 0x2c0) != '\0') {
        *(undefined1 *)(param_1 + 0x2c0) = 0;
      }
      *(int *)(param_1 + 700) = *piVar5;
      *(undefined1 *)(param_1 + 0x2c0) = 1;
    }
    puVar6 = (undefined4 *)(param_1 + 0x2d4);
    if (puVar6 != (undefined4 *)(param_1 + 0x2cc)) {
      if (*(char *)(param_1 + 0x2d0) != '\0') {
        *(undefined1 *)(param_1 + 0x2d0) = 0;
      }
      *(undefined4 *)(param_1 + 0x2cc) = *puVar6;
      *(undefined1 *)(param_1 + 0x2d0) = 1;
    }
    FUN_141190720(param_1,1);
    UGameUserSettings::SetFullscreenMode(*(undefined8 *)(param_1 + 0xc0),*puVar4);
    UGameUserSettings::SetScreenResolution
              (*(undefined8 *)(param_1 + 0xc0),
               *(undefined8 *)
                (*(longlong *)(param_1 + 0x108 + (longlong)*piVar5 * 0x10) + (longlong)*piVar1 * 8))
    ;
    uVar8 = FString::FString(local_28,plVar2);
    FUN_14248eaf0(*(undefined8 *)(param_1 + 0xc0),uVar8);
    FUN_140ccfe10(*(undefined8 *)(param_1 + 0xc0),*(undefined1 *)puVar6);
    *(undefined1 *)(param_1 + 0xd8) = 1;
    FUN_142471ee0(*(undefined8 *)(param_1 + 0xc0),1);
    *(undefined1 *)(param_1 + 0xd8) = 0;
    FUN_1411bcc00(param_1);
    FUN_1411be650(param_1);
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x1b0),*puVar4);
    uVar7 = TArray<FString,FDefaultAllocator>::Find(param_1 + 0x178,plVar2);
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x1b8),uVar7);
  }
  return;
}



// FUNCTION 1411b6490 FUN_1411b6490 body=183 status=ok
// SIG undefined FUN_1411b6490(void)

void FUN_1411b6490(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x680) != 0) {
    UGameUserSettings::SetScreenResolution
              (*(longlong *)(param_1 + 0x680),
               *(undefined8 *)
                (*(longlong *)(param_1 + 0x698) + (longlong)*(int *)(param_1 + 0x6ac) * 8));
    FUN_142471ee0(*(undefined8 *)(param_1 + 0x680),1);
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
    lVar1 = FUN_142eb6a30(*(longlong *)(param_1 + 0x688),*(undefined4 *)(param_1 + 0x6a8));
    if (lVar1 != 0) {
      FUN_142ed2820(lVar1,0,1);
    }
    lVar1 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x688),*(undefined4 *)(param_1 + 0x6ac));
    if (lVar1 != 0) {
      FUN_142ed2820(lVar1,1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x2b8))
              (*(longlong **)(param_1 + 0x688),*(undefined4 *)(param_1 + 0x6ac),0,0);
    *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_1 + 0x6ac);
  }
  return;
}



// FUNCTION 1411b6550 FUN_1411b6550 body=361 status=ok
// SIG undefined FUN_1411b6550(void)

void FUN_1411b6550(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  *(undefined1 *)((longlong)param_1 + 0xd9) = 1;
  plVar4 = (longlong *)param_1[0x11];
  uVar6 = (longlong)(int)param_1[0x12] & 0x1fffffffffffffff;
  if (plVar4 + (int)param_1[0x12] < plVar4) {
    uVar6 = uVar7;
  }
  uVar5 = uVar7;
  if (uVar6 != 0) {
    do {
      if (*plVar4 != 0) {
        FUN_142ed16e0();
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  plVar4 = (longlong *)param_1[0x13];
  uVar6 = (longlong)(int)param_1[0x14] & 0x1fffffffffffffff;
  if (plVar4 + (int)param_1[0x14] < plVar4) {
    uVar6 = uVar7;
  }
  uVar5 = uVar7;
  if (uVar6 != 0) {
    do {
      if (*plVar4 != 0) {
        FUN_142ed1620();
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  plVar4 = (longlong *)param_1[0x15];
  uVar6 = (longlong)(int)param_1[0x16] & 0x1fffffffffffffff;
  if (plVar4 + (int)param_1[0x16] < plVar4) {
    uVar6 = uVar7;
  }
  if (uVar6 != 0) {
    do {
      if (*plVar4 != 0) {
        FUN_142ed15f0();
      }
      plVar4 = plVar4 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  (**(code **)(*param_1 + 0x2b8))(param_1);
  *(undefined1 *)((longlong)param_1 + 0xd9) = 0;
  if ((param_1[0x18] != 0) && ((int)param_1[0x17] == 5)) {
    cVar1 = USoundWave::GetSoundAssetCompressionType();
    lVar3 = param_1[0x18];
    if (cVar1 == '\x06') {
      uVar2 = 2;
    }
    else {
      uVar2 = USoundWave::GetSoundAssetCompressionType(lVar3);
      lVar3 = param_1[0x18];
    }
    FUN_140ccf580(lVar3,uVar2,1);
  }
  return;
}



// FUNCTION 1411b66c0 FUN_1411b66c0 body=85 status=ok
// SIG undefined FUN_1411b66c0(void)

void FUN_1411b66c0(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x1a8) != 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) &&
     (*(longlong *)(param_1 + 0x1b8) != 0)) {
    FUN_14067dd80();
    FUN_14067dd80(*(undefined8 *)(param_1 + 0x1b0));
    FUN_14067dd80(*(undefined8 *)(param_1 + 0x1b8));
  }
  FUN_1411b4ed0(param_1,1);
  return;
}



// FUNCTION 1411b6720 FUN_1411b6720 body=288 status=ok
// SIG undefined FUN_1411b6720(void)

void FUN_1411b6720(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  plVar1 = (longlong *)param_1[0x11];
  uVar3 = (longlong)(int)param_1[0x12] & 0x1fffffffffffffff;
  if (plVar1 + (int)param_1[0x12] < plVar1) {
    uVar3 = uVar4;
  }
  uVar2 = uVar4;
  if (uVar3 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_142ed16e0();
      }
      plVar1 = plVar1 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  plVar1 = (longlong *)param_1[0x13];
  uVar3 = (longlong)(int)param_1[0x14] & 0x1fffffffffffffff;
  if (plVar1 + (int)param_1[0x14] < plVar1) {
    uVar3 = uVar4;
  }
  uVar2 = uVar4;
  if (uVar3 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_142ed1620();
      }
      plVar1 = plVar1 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  plVar1 = (longlong *)param_1[0x15];
  uVar3 = (longlong)(int)param_1[0x16] & 0x1fffffffffffffff;
  if (plVar1 + (int)param_1[0x16] < plVar1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_142ed15f0();
      }
      plVar1 = plVar1 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001411b6839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b8))(param_1);
  return;
}



// FUNCTION 1411b6840 FUN_1411b6840 body=759 status=ok
// SIG undefined FUN_1411b6840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411b6840(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_f8 [32];
  longlong local_d8 [3];
  longlong *plStack_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar10 = 0;
  local_b8 = 0;
  if ((*(longlong *)(param_1 + 0x78) != 0) && (*(longlong *)(param_1 + 0xd0) != 0)) {
    cVar5 = FUN_142eb62f0();
    if ((cVar5 == '\x01') &&
       (iVar6 = FUN_142eb62f0(*(undefined8 *)(param_1 + 0xd0)), iVar6 != *(int *)(param_1 + 0xd8)))
    {
      bVar11 = *(longlong *)(param_1 + 0x68) == 0;
      if (bVar11) {
        plVar7 = local_d8 + 2;
        local_d8[2] = 0;
        plStack_c0 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)FUN_142dcf3a0(*(longlong *)(param_1 + 0x68),local_a0);
        lVar10 = *plVar7;
      }
      plVar3 = (longlong *)plVar7[1];
      plVar7[1] = 0;
      *plVar7 = 0;
      plVar7 = plStack_c0;
      if ((bVar11) && (plStack_c0 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plStack_c0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
          }
        }
      }
      if ((!bVar11) && (local_98 != (longlong *)0x0)) {
        LOCK();
        plVar7 = local_98 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)local_98 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
      if (lVar10 != 0) {
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_b0 = lVar10;
        local_a8 = plVar3;
        uVar8 = FUN_140bb74b0(*(undefined8 *)(param_1 + 0x78));
        FUN_140d77020(uVar8,&local_b0);
        plVar7 = local_a8;
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a8 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar3 + 1;
        lVar10 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar3)(plVar3);
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
    }
    iVar6 = FUN_142eb62f0(*(undefined8 *)(param_1 + 0xd0));
    if (iVar6 != *(int *)(param_1 + 0xd8)) {
      local_58 = (longlong *)0x0;
      local_48 = 0;
      puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_78);
      if (puVar9 != (undefined8 *)0x0) {
        *(char *)(puVar9 + 1) = cVar5;
        *puVar9 = &PTR_FUN_1446e9598;
      }
      local_d8[0] = 0;
      local_88[0] = FUN_141190ef0;
      local_d8[1] = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
      FGenericPlatformString::Memcpy(local_d8[0],L"friend_sync_toggle_changed",0x36);
      FUN_1411b4ce0(param_1,local_d8,local_88);
      if (local_d8[0] != 0) {
        FMemory::Free();
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
    }
  }
  return;
}



// FUNCTION 1411b6b40 FUN_1411b6b40 body=151 status=ok
// SIG undefined FUN_1411b6b40(void)

void FUN_1411b6b40(longlong *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = (undefined8 *)param_1[0x31];
  uVar2 = (longlong)(int)param_1[0x32] & 0x1fffffffffffffff;
  if (puVar1 + (int)param_1[0x32] < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x278))((longlong *)*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001411b6bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,param_2);
  return;
}



// FUNCTION 1411b6be0 FUN_1411b6be0 body=152 status=ok
// SIG undefined FUN_1411b6be0(void)

void FUN_1411b6be0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    lVar3 = FUN_14139fee0();
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
      lVar4 = lVar2;
    }
  }
  if ((*(longlong *)(param_1 + 0x6a0) != 0) &&
     (FUN_1411baf90(*(longlong *)(param_1 + 0x6a0),lVar4 != 0), lVar4 != 0)) {
    FUN_1411b8930(*(undefined8 *)(param_1 + 0x6a0),lVar4 + 0x2f8);
  }
  return;
}


